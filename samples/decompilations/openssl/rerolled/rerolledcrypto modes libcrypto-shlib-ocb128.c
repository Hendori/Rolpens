void *ocb_lookup_l(long param_1, ulong param_2) {
   char *pcVar1;
   byte bVar2;
   byte bVar3;
   byte bVar4;
   byte bVar5;
   byte bVar6;
   byte bVar7;
   byte bVar8;
   byte bVar9;
   ulong uVar10;
   ulong uVar11;
   long lVar12;
   void *local_60;
   local_60 = *(void**)( param_1 + 0x58 );
   uVar10 = *(ulong*)( param_1 + 0x28 );
   if (uVar10 < param_2) {
      uVar11 = *(ulong*)( param_1 + 0x30 );
      if (uVar11 <= param_2) {
         lVar12 = ( ( param_2 + 4 ) - uVar11 & 0xfffffffffffffffc ) + uVar11;
         *(long*)( param_1 + 0x30 ) = lVar12;
         local_60 = CRYPTO_realloc(local_60, (int)lVar12 * 0x10, "crypto/modes/ocb128.c", 0x71);
         if (local_60 == (void*)0x0) {
            return (void*)0x0;
         }

         *(void**)( param_1 + 0x58 ) = local_60;
      }

      lVar12 = ( uVar10 + 1 ) * 0x10;
      while (true) {
         pcVar1 = (char*)( (long)local_60 + lVar12 + -0x10 );
         bVar2 = pcVar1[0xf];
         bVar3 = pcVar1[0xe];
         bVar4 = pcVar1[0xd];
         bVar5 = pcVar1[0xc];
         bVar6 = pcVar1[10];
         bVar7 = pcVar1[9];
         bVar8 = pcVar1[0xb];
         bVar9 = pcVar1[8];
         *(undefined8*)( (long)local_60 + lVar12 ) = CONCAT71(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(pcVar1[7] * '\x02' | bVar9 >> 7, pcVar1[6] * '\x02' | (byte)pcVar1[7] >> 7), pcVar1[5] * '\x02' | (byte)pcVar1[6] >> 7), (byte)pcVar1[5] >> 7 | pcVar1[4] * '\x02'), (byte)pcVar1[4] >> 7 | pcVar1[3] * '\x02'), (byte)pcVar1[3] >> 7 | pcVar1[2] * '\x02'), (byte)pcVar1[2] >> 7 | pcVar1[1] * '\x02'), (byte)pcVar1[1] >> 7 | *pcVar1 * '\x02');
         ( (undefined8*)( (long)local_60 + lVar12 ) )[1] = CONCAT71(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(bVar2 * '\x02' ^ *pcVar1 >> 7 & 0x87U, bVar3 * '\x02' | bVar2 >> 7), bVar3 >> 7 | bVar4 * '\x02'), bVar5 * '\x02' | bVar4 >> 7), bVar8 * '\x02' | bVar5 >> 7), bVar6 * '\x02' | bVar8 >> 7), bVar7 * '\x02' | bVar6 >> 7), bVar7 >> 7 | bVar9 * '\x02');
         lVar12 = lVar12 + 0x10;
         if (lVar12 == ( param_2 + 1 ) * 0x10) break;
         local_60 = *(void**)( param_1 + 0x58 );
      }
;
      *(ulong*)( param_1 + 0x28 ) = param_2;
      local_60 = (void*)( *(long*)( param_1 + 0x58 ) + -0x10 + lVar12 );
   }
 else {
      local_60 = (void*)( (long)local_60 + param_2 * 0x10 );
   }

   return local_60;
}
bool CRYPTO_ocb128_init(undefined8 *param_1, undefined8 param_2, undefined8 param_3, code *param_4, undefined8 param_5, undefined8 param_6) {
   byte bVar1;
   byte bVar2;
   byte *pbVar3;
   char *pcVar4;
   long lVar5;
   void *pvVar6;
   byte bVar7;
   ulong uVar8;
   byte bVar9;
   undefined8 *puVar10;
   *param_1 = 0;
   param_1[0x15] = 0;
   puVar10 = (undefined8*)( ( ulong )(param_1 + 1) & 0xfffffffffffffff8 );
   for (uVar8 = ( ulong )(( (int)param_1 - (int)(undefined8*)( ( ulong )(param_1 + 1) & 0xfffffffffffffff8 ) ) + 0xb0U >> 3); uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar10 = 0;
      puVar10 = puVar10 + 1;
   }

   param_1[6] = 5;
   pvVar6 = CRYPTO_malloc(0x50, "crypto/modes/ocb128.c", 0x9e);
   param_1[0xb] = pvVar6;
   if (pvVar6 != (void*)0x0) {
      *param_1 = param_4;
      param_1[1] = param_5;
      param_1[4] = param_6;
      param_1[2] = param_2;
      param_1[3] = param_3;
      ( *param_4 )(param_1 + 7, param_1 + 7, param_2);
      for (int i = 0; i < 6; i++) {
         *(byte*)( (long)param_1 + ( 86 - i ) ) = *(byte*)( (long)param_1 + ( 71 - i ) ) >> 7 | *(byte*)( (long)param_1 + ( 70 - i ) ) * '\x02';
      }

      *(byte*)( param_1 + 10 ) = *(byte*)( (long)param_1 + 0x41 ) >> 7 | *(byte*)( param_1 + 8 ) * '\x02';
      *(byte*)( (long)param_1 + 0x4f ) = *(byte*)( param_1 + 8 ) >> 7 | *(byte*)( (long)param_1 + 0x3f ) * '\x02';
      for (int i = 0; i < 6; i++) {
         *(byte*)( (long)param_1 + ( 78 - i ) ) = *(byte*)( (long)param_1 + ( 63 - i ) ) >> 7 | *(byte*)( (long)param_1 + ( 62 - i ) ) * '\x02';
      }

      bVar7 = *(byte*)( (long)param_1 + 0x39 ) >> 7 | *(char*)( param_1 + 7 ) * '\x02';
      bVar9 = *(char*)( param_1 + 7 ) >> 7 & 0x87U ^ *(byte*)( (long)param_1 + 0x47 ) * '\x02';
      *(byte*)( param_1 + 9 ) = bVar7;
      *(byte*)( (long)param_1 + 0x57 ) = bVar9;
      pbVar3 = (byte*)param_1[0xb];
      pbVar3[0xf] = bVar9 * '\x02';
      bVar1 = *(byte*)( (long)param_1 + 0x56 );
      pbVar3[0xe] = bVar9 >> 7 | bVar1 * '\x02';
      bVar2 = *(byte*)( (long)param_1 + 0x55 );
      pbVar3[0xd] = bVar1 >> 7 | bVar2 * '\x02';
      bVar1 = *(byte*)( (long)param_1 + 0x54 );
      pbVar3[0xc] = bVar2 >> 7 | bVar1 * '\x02';
      bVar2 = *(byte*)( (long)param_1 + 0x53 );
      pbVar3[0xb] = bVar1 >> 7 | bVar2 * '\x02';
      bVar1 = *(byte*)( (long)param_1 + 0x52 );
      pbVar3[10] = bVar2 >> 7 | bVar1 * '\x02';
      bVar2 = *(byte*)( (long)param_1 + 0x51 );
      pbVar3[9] = bVar1 >> 7 | bVar2 * '\x02';
      bVar1 = *(byte*)( param_1 + 10 );
      pbVar3[8] = bVar2 >> 7 | bVar1 * '\x02';
      bVar2 = *(byte*)( (long)param_1 + 0x4f );
      pbVar3[7] = bVar1 >> 7 | bVar2 * '\x02';
      for (int i = 0; i < 3; i++) {
         bVar1 = *(byte*)( (long)param_1 + ( -2*i + 78 ) );
         pbVar3[( -2*i + 6 )] = bVar2 >> 7 | bVar1 * '\x02';
         bVar2 = *(byte*)( (long)param_1 + ( -2*i + 77 ) );
         pbVar3[( -2*i + 5 )] = bVar1 >> 7 | bVar2 * '\x02';
      }

      *pbVar3 = bVar2 >> 7 | *(char*)( param_1 + 9 ) * '\x02';
      pbVar3[0xf] = (char)bVar7 >> 7 & 0x87U ^ bVar9 * '\x02';
      pcVar4 = (char*)param_1[0xb];
      for (int i = 0; i < 14; i++) {
         pcVar4[( 30 - i )] = (byte)pcVar4[( 15 - i )] >> 7 | pcVar4[( 14 - i )] * '\x02';
      }

      pcVar4[0x10] = (byte)pcVar4[1] >> 7 | *pcVar4 * '\x02';
      pcVar4[0x1f] = *pcVar4 >> 7 & 0x87U ^ pcVar4[0xf] * '\x02';
      for (int i = 0; i < 3; i++) {
         lVar5 = param_1[11];
         for (int j = 0; j < 14; j++) {
            *(byte*)( lVar5 + ( 16*i + ( 46 - j ) ) ) = *(byte*)( lVar5 + ( 16*i + ( 31 - j ) ) ) >> 7 | *(byte*)( lVar5 + ( 16*i + ( 30 - j ) ) ) * '\x02';
         }

         *(byte*)( lVar5 + ( 16*i + 32 ) ) = *(byte*)( lVar5 + ( 16*i + 17 ) ) >> 7 | *(char*)( lVar5 + ( 16*i + 16 ) ) * '\x02';
         *(byte*)( lVar5 + ( 16*i + 47 ) ) = *(char*)( lVar5 + ( 16*i + 16 ) ) >> 7 & 135 ^ *(byte*)( lVar5 + ( 16*i + 31 ) ) * '\x02';
      }

      param_1[5] = 4;
   }

   return pvVar6 != (void*)0x0;
}
void *CRYPTO_ocb128_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5) {
   int iVar1;
   void *ptr;
   ptr = CRYPTO_malloc(0xb0, "crypto/modes/ocb128.c", 0x89);
   if (ptr != (void*)0x0) {
      iVar1 = CRYPTO_ocb128_init(ptr, param_1, param_2, param_3, param_4, param_5);
      if (iVar1 != 0) {
         return ptr;
      }

      CRYPTO_free(ptr);
   }

   return (void*)0x0;
}
undefined8 CRYPTO_ocb128_copy_ctx(undefined8 *param_1, undefined8 *param_2, long param_3, long param_4) {
   undefined8 uVar1;
   void *__dest;
   uVar1 = param_2[1];
   *param_1 = *param_2;
   param_1[1] = uVar1;
   for (int i = 0; i < 10; i++) {
      uVar1 = param_2[( 2*i + 3 )];
      param_1[( 2*i + 2 )] = param_2[( 2*i + 2 )];
      param_1[( 2*i + 3 )] = uVar1;
   }

   if (param_3 != 0) {
      param_1[2] = param_3;
   }

   if (param_4 != 0) {
      param_1[3] = param_4;
   }

   if (param_2[0xb] != 0) {
      __dest = CRYPTO_malloc((int)( param_2[6] << 4 ), "crypto/modes/ocb128.c", 0xcb);
      param_1[0xb] = __dest;
      if (__dest == (void*)0x0) {
         return 0;
      }

      memcpy(__dest, (void*)param_2[0xb], ( param_2[5] + 1 ) * 0x10);
   }

   return 1;
}
undefined8 CRYPTO_ocb128_setiv(undefined8 *param_1, undefined8 param_2, long param_3, long param_4) {
   byte bVar1;
   byte bVar2;
   byte bVar3;
   byte bVar4;
   byte bVar5;
   byte bVar6;
   byte bVar7;
   byte bVar8;
   byte bVar9;
   uint uVar10;
   undefined8 uVar11;
   byte bVar12;
   byte bVar13;
   ulong uVar14;
   long in_FS_OFFSET;
   undefined1 local_88;
   undefined7 uStack_87;
   undefined1 uStack_80;
   undefined8 local_78;
   ulong local_70;
   byte local_68;
   undefined7 uStack_67;
   undefined1 uStack_60;
   undefined6 uStack_5f;
   byte local_59[17];
   ulong local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar11 = 0xffffffff;
   if (( param_3 - 1U < 0xf ) && ( param_4 - 1U < 0x10 )) {
      for (int i = 0; i < 5; i++) {
         *(undefined1(*) [16])( param_1 + ( 2*i + 12 ) ) = (undefined1[16])0;
      }

      local_68 = ( byte )((int)param_4 << 4);
      uStack_67 = 0;
      uStack_60 = 0;
      uStack_5f = 0;
      local_59[0] = 0;
      __memcpy_chk(local_59 + ( 1 - param_3 ), param_2, param_3, param_3);
      local_59[-param_3] = local_59[-param_3] | 1;
      local_78 = CONCAT71(uStack_67, local_68);
      local_70 = CONCAT17(local_59[0], CONCAT61(uStack_5f, uStack_60)) & 0xc0ffffffffffffff;
      ( *(code*)*param_1 )(&local_78, &local_88, param_1[2]);
      bVar12 = local_59[0] & 7;
      uVar14 = ( ulong )(( local_59[0] & 0x3f ) >> 3);
      local_48 = CONCAT17(uStack_80, uStack_87) ^ CONCAT71(uStack_87, local_88);
      bVar13 = 8 - ( local_59[0] & 7 );
      bVar2 = local_59[uVar14 + 0x10];
      bVar3 = local_59[uVar14 + 0xe];
      bVar4 = local_59[uVar14 + 0xb];
      uVar10 = (uint)bVar2 << bVar12;
      bVar5 = local_59[uVar14 + 0xf];
      bVar6 = local_59[uVar14 + 0xd];
      bVar7 = local_59[uVar14 + 0xc];
      bVar8 = local_59[uVar14 + 10];
      bVar9 = local_59[uVar14 + 9];
      bVar1 = *(byte*)( (long)&local_48 + uVar14 );
      param_1[0x12] = ( ( ( ( ( ( ( ulong )(( (uint)local_59[uVar14 + 8] << bVar12 | (int)(uint)bVar9 >> ( bVar13 & 0x1f ) ) & 0xff) << 8 | ( ulong )(( (uint)local_59[uVar14 + 7] << bVar12 | (int)(uint)local_59[uVar14 + 8] >> ( bVar13 & 0x1f ) ) & 0xff) ) << 8 | ( ulong )(byte)(( byte )((int)(uint)local_59[uVar14 + 7] >> ( bVar13 & 0x1f )) | local_59[uVar14 + 6] << bVar12) ) << 8 | ( ulong )(byte)(( byte )((int)(uint)local_59[uVar14 + 6] >> ( bVar13 & 0x1f )) | local_59[uVar14 + 5] << bVar12) ) << 8 | ( ulong )(( (int)(uint)local_59[uVar14 + 5] >> ( bVar13 & 0x1f ) | (uint)local_59[uVar14 + 4] << bVar12 ) & 0xff) ) << 8 | ( ulong )(byte)(( byte )((int)(uint)local_59[uVar14 + 4] >> ( bVar13 & 0x1f )) | local_59[uVar14 + 3] << bVar12) ) << 8 | ( ulong )(( (int)(uint)local_59[uVar14 + 3] >> ( bVar13 & 0x1f ) | (uint)local_59[uVar14 + 2] << bVar12 ) & 0xff) ) << 8 | ( ulong )(byte)(local_59[uVar14 + 1] << bVar12 | ( byte )((int)(uint)local_59[uVar14 + 2] >> ( bVar13 & 0x1f )));
      param_1[0x13] = ( ( ( ( ( ( ( ulong )(uVar10 & 0xff) << 8 | ( ulong )(( (int)(uint)bVar2 >> ( bVar13 & 0x1f ) | (uint)bVar5 << bVar12 ) & 0xff) ) << 8 | ( ulong )(( (int)(uint)bVar5 >> ( bVar13 & 0x1f ) | (uint)bVar3 << bVar12 ) & 0xff) ) << 8 | ( ulong )(( (uint)bVar6 << bVar12 | (int)(uint)bVar3 >> ( bVar13 & 0x1f ) ) & 0xff) ) << 8 | ( ulong )(( (int)(uint)bVar6 >> ( bVar13 & 0x1f ) | (uint)bVar7 << bVar12 ) & 0xff) ) << 8 | ( ulong )(( (int)(uint)bVar7 >> ( bVar13 & 0x1f ) | (uint)bVar4 << bVar12 ) & 0xff) ) << 8 | ( ulong )(byte)(bVar8 << bVar12 | ( byte )((int)(uint)bVar4 >> ( bVar13 & 0x1f ))) ) << 8 | ( ulong )(byte)(( byte )((int)(uint)bVar8 >> ( bVar13 & 0x1f )) | bVar9 << bVar12);
      *(byte*)( (long)param_1 + 0x9f ) = ( byte )((int)( uint )(( byte )(0xff << ( bVar13 & 0x1f )) & bVar1) >> ( bVar13 & 0x1f )) | (byte)uVar10;
      uVar11 = 1;
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar11;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 CRYPTO_ocb128_aad(undefined8 *param_1, ulong *param_2, ulong param_3) {
   ulong uVar1;
   ulong uVar2;
   ulong uVar3;
   uint uVar4;
   ulong uVar5;
   ulong *puVar6;
   undefined8 uVar7;
   ulong uVar8;
   undefined4 *puVar10;
   long lVar11;
   ulong uVar12;
   int iVar13;
   uint uVar14;
   long in_FS_OFFSET;
   undefined1 local_48[16];
   long local_30;
   ulong uVar9;
   puVar10 = (undefined4*)local_48;
   uVar1 = param_1[0xc];
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar12 = ( param_3 >> 4 ) + uVar1;
   do {
      uVar1 = uVar1 + 1;
      if (uVar12 < uVar1) {
         uVar14 = (uint)param_3 & 0xf;
         if (( param_3 & 0xf ) != 0) {
            uVar2 = param_1[0xe];
            uVar3 = param_1[0xf];
            uVar1 = param_1[7];
            uVar5 = param_1[8];
            local_48 = (undefined1[16])0x0;
            param_1[0xe] = uVar2 ^ uVar1;
            param_1[0xf] = uVar3 ^ uVar5;
            if (7 < uVar14) {
               uVar8 = 0;
               do {
                  uVar4 = (int)uVar8 + 8;
                  uVar9 = (ulong)uVar4;
                  *(undefined8*)( local_48 + uVar8 ) = *(undefined8*)( (long)param_2 + uVar8 );
                  uVar8 = uVar9;
               }
 while ( uVar4 < ( (uint)param_3 & 8 ) );
               puVar10 = (undefined4*)( local_48 + uVar9 );
               param_2 = (ulong*)( uVar9 + (long)param_2 );
            }

            lVar11 = 0;
            if (( param_3 & 4 ) != 0) {
               *puVar10 = (int)*param_2;
               lVar11 = 4;
            }

            if (( param_3 & 2 ) != 0) {
               *(undefined2*)( (long)puVar10 + lVar11 ) = *(undefined2*)( (long)param_2 + lVar11 );
               lVar11 = lVar11 + 2;
            }

            if (( param_3 & 1 ) != 0) {
               *(undefined1*)( (long)puVar10 + lVar11 ) = *(undefined1*)( (long)param_2 + lVar11 );
            }

            local_48[uVar14] = 0x80;
            local_48._8_8_ = uVar3 ^ uVar5 ^ local_48._8_8_;
            local_48._0_8_ = uVar2 ^ uVar1 ^ local_48._0_8_;
            ( *(code*)*param_1 )(local_48, local_48, param_1[2]);
            param_1[0x10] = param_1[0x10] ^ local_48._0_8_;
            param_1[0x11] = param_1[0x11] ^ local_48._8_8_;
         }

         param_1[0xc] = uVar12;
         uVar7 = 1;
         LAB_001010db:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Subroutine does not return */
            __stack_chk_fail();
         }

         return uVar7;
      }

      iVar13 = 0;
      uVar5 = uVar1;
      if (( uVar1 & 1 ) == 0) {
         do {
            uVar5 = uVar5 >> 1;
            iVar13 = iVar13 + 1;
         }
 while ( ( uVar5 & 1 ) == 0 );
         puVar6 = (ulong*)ocb_lookup_l(param_1, iVar13);
      }
 else {
         puVar6 = (ulong*)ocb_lookup_l(param_1, 0);
      }

      if (puVar6 == (ulong*)0x0) {
         uVar7 = 0;
         goto LAB_001010db;
      }

      uVar3 = *puVar6;
      uVar8 = puVar6[1];
      uVar5 = param_1[0xe];
      uVar2 = param_1[0xf];
      param_1[0xe] = uVar3 ^ uVar5;
      param_1[0xf] = uVar8 ^ uVar2;
      local_48._8_8_ = uVar8 ^ uVar2 ^ param_2[1];
      local_48._0_8_ = uVar3 ^ uVar5 ^ *param_2;
      ( *(code*)*param_1 )(local_48, local_48, param_1[2]);
      param_1[0x10] = param_1[0x10] ^ local_48._0_8_;
      param_1[0x11] = param_1[0x11] ^ local_48._8_8_;
      param_2 = param_2 + 2;
   }
 while ( true );
}
undefined8 CRYPTO_ocb128_encrypt(undefined8 *param_1, ulong *param_2, ulong *param_3, ulong param_4) {
   ulong uVar1;
   ulong uVar2;
   ulong uVar3;
   ulong uVar4;
   long lVar5;
   undefined8 uVar6;
   ulong uVar7;
   ulong *puVar8;
   ulong uVar9;
   int iVar10;
   ulong uVar11;
   undefined4 *puVar12;
   uint uVar13;
   long in_FS_OFFSET;
   undefined1 local_58[16];
   long local_40;
   uVar11 = param_1[0xd];
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar1 = uVar11 + ( param_4 >> 4 );
   if (( param_4 < 0x10 ) || ( param_1[4] == 0 )) {
      while (uVar11 = uVar11 + 1,uVar11 <= uVar1) {
         iVar10 = 0;
         uVar7 = uVar11;
         if (( uVar11 & 1 ) == 0) {
            do {
               uVar7 = uVar7 >> 1;
               iVar10 = iVar10 + 1;
            }
 while ( ( uVar7 & 1 ) == 0 );
            puVar8 = (ulong*)ocb_lookup_l(param_1, iVar10);
         }
 else {
            puVar8 = (ulong*)ocb_lookup_l(param_1, 0);
         }

         if (puVar8 == (ulong*)0x0) goto LAB_00101383;
         uVar3 = *puVar8;
         uVar4 = puVar8[1];
         uVar7 = param_1[0x12];
         uVar9 = param_1[0x13];
         param_1[0x12] = uVar3 ^ uVar7;
         param_1[0x13] = uVar4 ^ uVar9;
         uVar2 = param_2[1];
         local_58._8_8_ = uVar2 ^ uVar4 ^ uVar9;
         local_58._0_8_ = *param_2 ^ uVar3 ^ uVar7;
         param_1[0x14] = param_1[0x14] ^ *param_2;
         param_1[0x15] = param_1[0x15] ^ uVar2;
         ( *(code*)*param_1 )(local_58, local_58, param_1[2]);
         uVar7 = param_1[0x13];
         *param_3 = param_1[0x12] ^ local_58._0_8_;
         param_3[1] = uVar7 ^ local_58._8_8_;
         param_2 = param_2 + 2;
         param_3 = param_3 + 2;
      }
;
   }
 else {
      uVar11 = uVar1 >> 1;
      if (uVar11 != 0) {
         lVar5 = 0x3f;
         if (uVar11 != 0) {
            for (; uVar11 >> lVar5 == 0; lVar5 = lVar5 + -1) {}
         }

         uVar11 = ( ulong )((int)lVar5 + 1);
      }

      lVar5 = ocb_lookup_l(param_1, uVar11);
      if (lVar5 == 0) {
         LAB_00101383:uVar6 = 0;
         goto LAB_001012a0;
      }

      ( *(code*)param_1[4] )(param_2, param_3, param_4 >> 4, param_1[2], param_1[0xd] + 1, param_1 + 0x12, param_1[0xb], param_1 + 0x14);
   }

   uVar13 = (uint)param_4 & 0xf;
   uVar11 = (ulong)uVar13;
   if (( param_4 & 0xf ) != 0) {
      puVar12 = (undefined4*)local_58;
      param_1[0x12] = param_1[0x12] ^ param_1[7];
      param_1[0x13] = param_1[0x13] ^ param_1[8];
      ( *(code*)*param_1 )(param_1 + 0x12, puVar12, param_1[2]);
      if (uVar11 - 1 < 3) {
         *(byte*)param_3 = ( byte ) * param_2 ^ local_58[0];
         if (( ( param_4 & 0xe ) != 0 ) && ( *(byte*)( (long)param_3 + 1 ) = uVar11 == 3 )) {
            LAB_00101406:*(byte*)( (long)param_3 + 2 ) = *(byte*)( (long)param_2 + 2 ) ^ local_58[2];
            if (( param_4 & 0xc ) != 0) {
               *(byte*)( (long)param_3 + 3 ) = *(byte*)( (long)param_2 + 3 ) ^ local_58[3];
               if (4 < uVar11) {
                  *(byte*)( (long)param_3 + 4 ) = *(byte*)( (long)param_2 + 4 ) ^ local_58[4];
                  if (uVar11 != 5) {
                     *(byte*)( (long)param_3 + 5 ) = *(byte*)( (long)param_2 + 5 ) ^ local_58[5];
                     if (uVar11 != 6) {
                        *(byte*)( (long)param_3 + 6 ) = *(byte*)( (long)param_2 + 6 ) ^ local_58[6];
                        if (( param_4 & 8 ) != 0) {
                           *(byte*)( (long)param_3 + 7 ) = *(byte*)( (long)param_2 + 7 ) ^ local_58[7];
                           if (8 < uVar11) {
                              *(byte*)( param_3 + 1 ) = (byte)param_2[1] ^ local_58[8];
                              if (uVar11 != 9) {
                                 *(byte*)( (long)param_3 + 9 ) = *(byte*)( (long)param_2 + 9 ) ^ local_58[9];
                                 if (uVar11 != 10) {
                                    *(byte*)( (long)param_3 + 10 ) = *(byte*)( (long)param_2 + 10 ) ^ local_58[10];
                                    if (uVar11 != 0xb) {
                                       *(byte*)( (long)param_3 + 0xb ) = *(byte*)( (long)param_2 + 0xb ) ^ local_58[0xb];
                                       if (uVar11 != 0xc) {
                                          *(byte*)( (long)param_3 + 0xc ) = *(byte*)( (long)param_2 + 0xc ) ^ local_58[0xc];
                                          if (uVar11 != 0xd) {
                                             *(byte*)( (long)param_3 + 0xd ) = *(byte*)( (long)param_2 + 0xd ) ^ local_58[0xd];
                                             if (uVar11 == 0xf) {
                                                *(byte*)( (long)param_3 + 0xe ) = *(byte*)( (long)param_2 + 0xe ) ^ local_58[0xe];
                                             }

                                          }

                                       }

                                    }

                                 }

                              }

                           }

                        }

                     }

                  }

               }

            }

         }

      }
 else if (( ulong )((long)param_3 - ( (long)param_2 + 1 )) < 7) {
         *(byte*)param_3 = local_58[0] ^ ( byte ) * param_2;
         if (( param_4 & 0xe ) != 0) {
            *(byte*)( (long)param_3 + 1 ) = local_58[1] ^ *(byte*)( (long)param_2 + 1 );
            goto LAB_00101406;
         }

      }
 else {
         if (uVar11 - 1 < 7) {
            lVar5 = 0;
            uVar7 = uVar11;
            LAB_00101548:*(uint*)( (long)param_3 + lVar5 ) = *(uint*)( (long)param_2 + lVar5 ) ^ *(uint*)( local_58 + lVar5 );
            lVar5 = lVar5 + 4;
            if (uVar7 == 4) goto LAB_0010159f;
         }
 else {
            *param_3 = *param_2 ^ local_58._0_8_;
            if (uVar11 == 8) goto LAB_0010159f;
            lVar5 = 8;
            uVar7 = uVar11 - 8;
            if (2 < uVar11 - 9) goto LAB_00101548;
         }

         *(byte*)( (long)param_3 + lVar5 ) = *(byte*)( (long)param_2 + lVar5 ) ^ local_58[lVar5];
         if (( lVar5 + 1U < uVar11 ) && ( *(byte*)( (long)param_3 + lVar5 + 1 ) = *(byte*)( (long)param_2 + lVar5 + 1 ) ^ local_58[lVar5 + 1] ),lVar5 + 2U < uVar11) {
            *(byte*)( (long)param_3 + lVar5 + 2 ) = *(byte*)( (long)param_2 + lVar5 + 2 ) ^ local_58[lVar5 + 2];
         }

      }

      LAB_0010159f:local_58 = (undefined1[16])0x0;
      if (7 < uVar13) {
         uVar7 = 0;
         do {
            uVar13 = (int)uVar7 + 8;
            uVar9 = (ulong)uVar13;
            *(undefined8*)( (long)puVar12 + uVar7 ) = *(undefined8*)( (long)param_2 + uVar7 );
            uVar7 = uVar9;
         }
 while ( uVar13 < ( (uint)param_4 & 8 ) );
         puVar12 = (undefined4*)( (long)puVar12 + uVar9 );
         param_2 = (ulong*)( uVar9 + (long)param_2 );
      }

      lVar5 = 0;
      if (( param_4 & 4 ) != 0) {
         *puVar12 = (int)*param_2;
         lVar5 = 4;
      }

      if (( param_4 & 2 ) != 0) {
         *(undefined2*)( (long)puVar12 + lVar5 ) = *(undefined2*)( (long)param_2 + lVar5 );
         lVar5 = lVar5 + 2;
      }

      if (( param_4 & 1 ) != 0) {
         *(undefined1*)( (long)puVar12 + lVar5 ) = *(undefined1*)( (long)param_2 + lVar5 );
      }

      uVar7 = param_1[0x14];
      uVar9 = param_1[0x15];
      local_58[uVar11] = 0x80;
      param_1[0x14] = uVar7 ^ local_58._0_8_;
      param_1[0x15] = uVar9 ^ local_58._8_8_;
   }

   param_1[0xd] = uVar1;
   uVar6 = 1;
   LAB_001012a0:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar6;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 CRYPTO_ocb128_decrypt(undefined8 *param_1, ulong *param_2, ulong *param_3, ulong param_4) {
   ulong uVar1;
   ulong uVar2;
   ulong uVar3;
   long lVar4;
   undefined8 uVar5;
   ulong uVar6;
   ulong *puVar7;
   ulong uVar8;
   int iVar9;
   ulong uVar10;
   undefined4 *puVar11;
   uint uVar12;
   long in_FS_OFFSET;
   undefined1 local_58[16];
   long local_40;
   uVar10 = param_1[0xd];
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar1 = uVar10 + ( param_4 >> 4 );
   if (( param_4 < 0x10 ) || ( param_1[4] == 0 )) {
      while (uVar10 = uVar10 + 1,uVar10 <= uVar1) {
         iVar9 = 0;
         uVar6 = uVar10;
         if (( uVar10 & 1 ) == 0) {
            do {
               uVar6 = uVar6 >> 1;
               iVar9 = iVar9 + 1;
            }
 while ( ( uVar6 & 1 ) == 0 );
            puVar7 = (ulong*)ocb_lookup_l(param_1, iVar9);
         }
 else {
            puVar7 = (ulong*)ocb_lookup_l(param_1, 0);
         }

         if (puVar7 == (ulong*)0x0) goto LAB_0010181b;
         uVar2 = *puVar7;
         uVar3 = puVar7[1];
         uVar6 = param_1[0x12];
         uVar8 = param_1[0x13];
         param_1[0x12] = uVar2 ^ uVar6;
         param_1[0x13] = uVar3 ^ uVar8;
         local_58._0_8_ = uVar2 ^ uVar6 ^ *param_2;
         local_58._8_8_ = uVar3 ^ uVar8 ^ param_2[1];
         ( *(code*)param_1[1] )(local_58, local_58, param_1[3]);
         local_58._0_8_ = param_1[0x12] ^ local_58._0_8_;
         local_58._8_8_ = param_1[0x13] ^ local_58._8_8_;
         param_1[0x14] = param_1[0x14] ^ local_58._0_8_;
         param_1[0x15] = param_1[0x15] ^ local_58._8_8_;
         *param_3 = local_58._0_8_;
         param_3[1] = local_58._8_8_;
         param_3 = param_3 + 2;
         param_2 = param_2 + 2;
      }
;
   }
 else {
      uVar10 = uVar1 >> 1;
      if (uVar10 != 0) {
         lVar4 = 0x3f;
         if (uVar10 != 0) {
            for (; uVar10 >> lVar4 == 0; lVar4 = lVar4 + -1) {}
         }

         uVar10 = ( ulong )((int)lVar4 + 1);
      }

      lVar4 = ocb_lookup_l(param_1, uVar10);
      if (lVar4 == 0) {
         LAB_0010181b:uVar5 = 0;
         goto LAB_00101730;
      }

      ( *(code*)param_1[4] )(param_2, param_3, param_4 >> 4, param_1[3], param_1[0xd] + 1, param_1 + 0x12, param_1[0xb], param_1 + 0x14);
   }

   uVar12 = (uint)param_4 & 0xf;
   uVar10 = (ulong)uVar12;
   if (( param_4 & 0xf ) != 0) {
      puVar11 = (undefined4*)local_58;
      param_1[0x12] = param_1[0x12] ^ param_1[7];
      param_1[0x13] = param_1[0x13] ^ param_1[8];
      ( *(code*)*param_1 )(param_1 + 0x12, puVar11, param_1[2]);
      if (uVar10 - 1 < 3) {
         *(byte*)param_3 = ( byte ) * param_2 ^ local_58[0];
         if (( ( param_4 & 0xe ) != 0 ) && ( *(byte*)( (long)param_3 + 1 ) = uVar10 == 3 )) {
            LAB_001018a0:*(byte*)( (long)param_3 + 2 ) = *(byte*)( (long)param_2 + 2 ) ^ local_58[2];
            if (( param_4 & 0xc ) != 0) {
               *(byte*)( (long)param_3 + 3 ) = *(byte*)( (long)param_2 + 3 ) ^ local_58[3];
               if (4 < uVar10) {
                  *(byte*)( (long)param_3 + 4 ) = *(byte*)( (long)param_2 + 4 ) ^ local_58[4];
                  if (uVar10 != 5) {
                     *(byte*)( (long)param_3 + 5 ) = *(byte*)( (long)param_2 + 5 ) ^ local_58[5];
                     if (uVar10 != 6) {
                        *(byte*)( (long)param_3 + 6 ) = *(byte*)( (long)param_2 + 6 ) ^ local_58[6];
                        if (( param_4 & 8 ) != 0) {
                           *(byte*)( (long)param_3 + 7 ) = *(byte*)( (long)param_2 + 7 ) ^ local_58[7];
                           if (8 < uVar10) {
                              *(byte*)( param_3 + 1 ) = (byte)param_2[1] ^ local_58[8];
                              if (uVar10 != 9) {
                                 *(byte*)( (long)param_3 + 9 ) = *(byte*)( (long)param_2 + 9 ) ^ local_58[9];
                                 if (uVar10 != 10) {
                                    *(byte*)( (long)param_3 + 10 ) = *(byte*)( (long)param_2 + 10 ) ^ local_58[10];
                                    if (uVar10 != 0xb) {
                                       *(byte*)( (long)param_3 + 0xb ) = *(byte*)( (long)param_2 + 0xb ) ^ local_58[0xb];
                                       if (uVar10 != 0xc) {
                                          *(byte*)( (long)param_3 + 0xc ) = *(byte*)( (long)param_2 + 0xc ) ^ local_58[0xc];
                                          if (uVar10 != 0xd) {
                                             *(byte*)( (long)param_3 + 0xd ) = *(byte*)( (long)param_2 + 0xd ) ^ local_58[0xd];
                                             if (uVar10 == 0xf) {
                                                *(byte*)( (long)param_3 + 0xe ) = *(byte*)( (long)param_2 + 0xe ) ^ local_58[0xe];
                                             }

                                          }

                                       }

                                    }

                                 }

                              }

                           }

                        }

                     }

                  }

               }

            }

         }

      }
 else if (( ulong )((long)param_3 - ( (long)param_2 + 1 )) < 7) {
         *(byte*)param_3 = local_58[0] ^ ( byte ) * param_2;
         if (( param_4 & 0xe ) != 0) {
            *(byte*)( (long)param_3 + 1 ) = local_58[1] ^ *(byte*)( (long)param_2 + 1 );
            goto LAB_001018a0;
         }

      }
 else {
         if (uVar10 - 1 < 7) {
            lVar4 = 0;
            uVar6 = uVar10;
            LAB_001019ef:*(uint*)( (long)param_3 + lVar4 ) = *(uint*)( (long)param_2 + lVar4 ) ^ *(uint*)( local_58 + lVar4 );
            lVar4 = lVar4 + 4;
            if (uVar6 == 4) goto LAB_00101a48;
         }
 else {
            *param_3 = *param_2 ^ local_58._0_8_;
            if (uVar10 == 8) goto LAB_00101a48;
            lVar4 = 8;
            uVar6 = uVar10 - 8;
            if (2 < uVar10 - 9) goto LAB_001019ef;
         }

         *(byte*)( (long)param_3 + lVar4 ) = *(byte*)( (long)param_2 + lVar4 ) ^ local_58[lVar4];
         if (( lVar4 + 1U < uVar10 ) && ( *(byte*)( (long)param_3 + lVar4 + 1 ) = *(byte*)( (long)param_2 + lVar4 + 1 ) ^ local_58[lVar4 + 1] ),lVar4 + 2U < uVar10) {
            *(byte*)( (long)param_3 + lVar4 + 2 ) = *(byte*)( (long)param_2 + lVar4 + 2 ) ^ local_58[lVar4 + 2];
         }

      }

      LAB_00101a48:local_58 = (undefined1[16])0x0;
      if (7 < uVar12) {
         uVar6 = 0;
         do {
            uVar12 = (int)uVar6 + 8;
            uVar8 = (ulong)uVar12;
            *(undefined8*)( (long)puVar11 + uVar6 ) = *(undefined8*)( (long)param_3 + uVar6 );
            uVar6 = uVar8;
         }
 while ( uVar12 < ( (uint)param_4 & 8 ) );
         puVar11 = (undefined4*)( (long)puVar11 + uVar8 );
         param_3 = (ulong*)( uVar8 + (long)param_3 );
      }

      lVar4 = 0;
      if (( param_4 & 4 ) != 0) {
         *puVar11 = (int)*param_3;
         lVar4 = 4;
      }

      if (( param_4 & 2 ) != 0) {
         *(undefined2*)( (long)puVar11 + lVar4 ) = *(undefined2*)( (long)param_3 + lVar4 );
         lVar4 = lVar4 + 2;
      }

      if (( param_4 & 1 ) != 0) {
         *(undefined1*)( (long)puVar11 + lVar4 ) = *(undefined1*)( (long)param_3 + lVar4 );
      }

      uVar6 = param_1[0x14];
      uVar8 = param_1[0x15];
      local_58[uVar10] = 0x80;
      param_1[0x14] = uVar6 ^ local_58._0_8_;
      param_1[0x15] = uVar8 ^ local_58._8_8_;
   }

   param_1[0xd] = uVar1;
   uVar5 = 1;
   LAB_00101730:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar5;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
int CRYPTO_ocb128_finish(undefined8 *param_1, void *param_2, size_t param_3) {
   int iVar1;
   long in_FS_OFFSET;
   ulong local_48;
   ulong uStack_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_3 - 1 < 0x10) {
      local_48 = param_1[0x14] ^ param_1[0x12] ^ param_1[9];
      uStack_40 = param_1[0x15] ^ param_1[0x13] ^ param_1[10];
      ( *(code*)*param_1 )(&local_48, &local_48, param_1[2]);
      local_48 = param_1[0x10] ^ local_48;
      uStack_40 = param_1[0x11] ^ uStack_40;
      iVar1 = CRYPTO_memcmp(&local_48, param_2, param_3);
   }
 else {
      iVar1 = -1;
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 CRYPTO_ocb128_tag(undefined8 *param_1, void *param_2, size_t param_3) {
   undefined8 uVar1;
   long in_FS_OFFSET;
   ulong local_48;
   ulong uStack_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_3 - 1 < 0x10) {
      local_48 = param_1[0x12] ^ param_1[0x14] ^ param_1[9];
      uStack_40 = param_1[0x13] ^ param_1[0x15] ^ param_1[10];
      ( *(code*)*param_1 )(&local_48, &local_48, param_1[2]);
      local_48 = param_1[0x10] ^ local_48;
      uStack_40 = param_1[0x11] ^ uStack_40;
      memcpy(param_2, &local_48, param_3);
      uVar1 = 1;
   }
 else {
      uVar1 = 0xffffffff;
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void CRYPTO_ocb128_cleanup(void *param_1) {
   if (param_1 != (void*)0x0) {
      CRYPTO_clear_free(*(undefined8*)( (long)param_1 + 0x58 ), *(long*)( (long)param_1 + 0x30 ) << 4, "crypto/modes/ocb128.c", 0x229);
      OPENSSL_cleanse(param_1, 0xb0);
      return;
   }

   return;
}

