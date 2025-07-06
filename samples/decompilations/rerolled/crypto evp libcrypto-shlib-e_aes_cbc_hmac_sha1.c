void sha1_update(SHA_CTX *param_1, void *param_2, ulong param_3) {
   uint uVar1;
   void *data;
   uint uVar2;
   ulong len;
   undefined8 uVar4;
   uint uVar3;
   int iVar5;
   if ((ulong)param_1->num == 0) {
      uVar2 = (uint)param_3;
      param_3 = param_3 & 0xffffffffffffffc0;
   } else {
      len = 0x40 - (ulong)param_1->num;
      if (param_3 < len) {
         len = param_3;
      }
      SHA1_Update(param_1, param_2, len);
      uVar2 = ( uint )(param_3 - len);
      param_3 = param_3 - len & 0xffffffffffffffc0;
      param_2 = (void*)( (long)param_2 + len );
   }
   data = param_2;
   if (param_3 != 0) {
      data = (void*)( (long)param_2 + param_3 );
      sha1_block_data_order(param_1, param_2, param_3 >> 6);
      uVar1 = (int)param_3 * 8;
      uVar4._0_4_ = param_1->Nl;
      uVar4._4_4_ = param_1->Nh;
      uVar3 = uVar1 + (int)uVar4;
      iVar5 = (int)( param_3 >> 0x1d ) + (int)( (ulong)uVar4 >> 0x20 );
      uVar4 = CONCAT44(iVar5, uVar3);
      param_1->Nl = (int)uVar4;
      param_1->Nh = (int)( (ulong)uVar4 >> 0x20 );
      if (uVar3 < uVar1) {
         param_1->Nh = iVar5 + 1;
      }
   }
   if (( ulong )(uVar2 & 0x3f) != 0) {
      SHA1_Update(param_1, data, ( ulong )(uVar2 & 0x3f));
      return;
   }
   return;
}ulong aesni_cbc_hmac_sha1_cipher(long param_1, undefined8 *param_2, undefined8 *param_3, undefined8 *param_4) {
   uchar *md;
   long lVar1;
   byte *pbVar2;
   byte bVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   undefined8 uVar6;
   undefined8 uVar7;
   undefined8 uVar8;
   undefined8 uVar9;
   undefined8 uVar10;
   undefined8 uVar11;
   uint uVar12;
   uint uVar13;
   long lVar14;
   ulong uVar15;
   long lVar16;
   ulong uVar17;
   undefined8 *puVar18;
   undefined8 *puVar19;
   uint uVar20;
   uint uVar21;
   long lVar22;
   uint uVar23;
   undefined8 *puVar24;
   uint uVar25;
   byte *pbVar26;
   undefined8 *puVar27;
   ulong uVar28;
   uint uVar29;
   ulong uVar30;
   SHA_CTX *pSVar31;
   undefined8 *puVar32;
   ulong uVar33;
   long in_FS_OFFSET;
   uint uVar34;
   int iVar36;
   undefined1 auVar35[16];
   undefined8 *puStack_d0;
   undefined8 *local_c8;
   undefined8 *local_c0;
   undefined1(*local_b8)[16];
   undefined8 *local_b0;
   undefined1 local_60[16];
   uint local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar14 = EVP_CIPHER_CTX_get_cipher_data();
   puVar32 = *(undefined8**)( lVar14 + 0x218 );
   iVar36 = *(int*)( lVar14 + 0x210 );
   *(undefined8*)( lVar14 + 0x218 ) = 0xffffffffffffffff;
   uVar30 = ( ulong )((uint)param_4 & 0xf);
   if (( (ulong)param_4 & 0xf ) != 0) {
      LAB_0010014c:uVar15 = 0;
      goto LAB_0010014e;
   }
   uVar15 = EVP_CIPHER_CTX_is_encrypting(param_1);
   local_c8 = param_2;
   if ((int)uVar15 == 0) {
      if (puVar32 != (undefined8*)0xffffffffffffffff) {
         if (CONCAT11(*(undefined1*)( lVar14 + 0x21c + (long)puVar32 ), *(undefined1*)( lVar14 + 0x21d + (long)puVar32 )) < 0x302) {
            if (param_4 < (undefined8*)0x15) goto LAB_0010014e;
         } else {
            if (param_4 < (undefined8*)0x25) goto LAB_0010014e;
            local_c8 = param_2 + 2;
            uVar4 = *param_3;
            uVar5 = param_3[1];
            param_4 = param_4 + -2;
            param_3 = param_3 + 2;
            *(undefined8*)( param_1 + 0x28 ) = uVar4;
            *(undefined8*)( param_1 + 0x30 ) = uVar5;
         }
         aesni_cbc_encrypt(param_3, local_c8, param_4, lVar14, param_1 + 0x28, 0);
         uVar20 = (int)param_4 - 0x15;
         bVar3 = *(byte*)( (long)local_c8 + -1 + (long)param_4 );
         uVar8 = *(undefined8*)( lVar14 + 0xf4 );
         uVar9 = *(undefined8*)( lVar14 + 0xfc );
         uVar10 = *(undefined8*)( lVar14 + 0x104 );
         uVar11 = *(undefined8*)( lVar14 + 0x10c );
         uVar4 = *(undefined8*)( lVar14 + 0x134 );
         uVar5 = *(undefined8*)( lVar14 + 0x13c );
         uVar6 = *(undefined8*)( lVar14 + 0x144 );
         uVar7 = *(undefined8*)( lVar14 + 0x14c );
         uVar34 = 0xff - uVar20 >> 0x18 | uVar20 & 0xff;
         uVar23 = uVar34 ^ ( uVar34 - bVar3 ^ (uint)bVar3 | uVar34 ^ bVar3 );
         uVar20 = (int)uVar23 >> 0x1f;
         uVar20 = (uint)bVar3 & ~uVar20 | uVar20 & uVar34;
         lVar16 = (long)param_4 - ( ulong )(uVar20 + 0x15);
         *(char*)( lVar14 + 0x21f + (long)puVar32 ) = (char)lVar16;
         *(char*)( lVar14 + 0x21e + (long)puVar32 ) = (char)( (ulong)lVar16 >> 8 );
         pSVar31 = (SHA_CTX*)( lVar14 + 0x1b4 );
         *(undefined8*)( lVar14 + 0x1b4 ) = uVar8;
         *(undefined8*)( lVar14 + 0x1bc ) = uVar9;
         *(undefined8*)( lVar14 + 0x1c4 ) = uVar10;
         *(undefined8*)( lVar14 + 0x1cc ) = uVar11;
         for (int i_199 = 0; i_199 < 4; i_199++) {
            *(undefined8*)( lVar14 + ( 8*i_199 + 468 ) ) = *(undefined8*)( lVar14 + ( 8*i_199 + 276 ) );
         }
         *(undefined8*)( lVar14 + 500 ) = uVar4;
         *(undefined8*)( lVar14 + 0x1fc ) = uVar5;
         *(undefined8*)( lVar14 + 0x204 ) = uVar6;
         *(undefined8*)( lVar14 + 0x20c ) = uVar7;
         sha1_update(pSVar31, lVar14 + 0x220, puVar32);
         uVar15 = (long)param_4 - 0x14;
         if (uVar15 < 0x140) {
            uVar13 = *(uint*)( lVar14 + 0x210 );
            uVar12 = *(int*)( lVar14 + 0x1c8 ) + (int)lVar16 * 8;
            uVar12 = uVar12 >> 0x18 | ( uVar12 & 0xff0000 ) >> 8 | ( uVar12 & 0xff00 ) << 8 | uVar12 * 0x1000000;
            LAB_001004d2:local_b8 = (undefined1(*) [16])( lVar14 + 0x1d0 );
            local_50 = 0;
            local_60 = (undefined1[16])0x0;
            lVar22 = -lVar16;
            do {
               uVar29 = uVar13 + 1;
               bVar3 = ( byte )((ulong)lVar22 >> 0x38);
               *(byte*)( lVar14 + 0x1d0 + (ulong)uVar13 ) = ~((byte)((ulong)-lVar22 >> 0x38) | bVar3) & 0x80 | *(byte*)( (long)local_c8 + lVar22 + lVar16 ) & bVar3;
               uVar33 = uVar15;
               if (uVar13 == 0x3f) {
                  uVar13 = ( uint )(( ulong )(7 - lVar22) >> 0x20);
                  *(uint*)( lVar14 + 0x20c ) = *(uint*)( lVar14 + 0x20c ) | uVar12 & (int)uVar13 >> 0x1f;
                  sha1_block_data_order(pSVar31, local_b8, 1);
                  uVar13 = (int)( ( uint )(( ulong )(lVar22 + -0x48) >> 0x20) & uVar13 ) >> 0x1f;
                  local_50 = local_50 | uVar13 & *(uint*)( lVar14 + 0x1c4 );
                  auVar35._4_4_ = uVar13;
                  auVar35._0_4_ = uVar13;
                  auVar35._8_4_ = uVar13;
                  auVar35._12_4_ = uVar13;
                  local_60 = auVar35 & *(undefined1(*) [16])( lVar14 + 0x1b4 ) | local_60;
                  if (lVar22 + 1 == uVar15 - lVar16) {
                     uVar28 = 0;
                     goto LAB_00100784;
                  }
                  uVar13 = 0;
               } else {
                  uVar13 = uVar29;
                  if (lVar22 + 1 == uVar15 - lVar16) goto LAB_00100777;
               }
               lVar22 = lVar22 + 1;
            } while ( true );
         }
         lVar22 = ( ulong )(0x40 - *(int*)( lVar14 + 0x210 )) + ( (long)param_4 - 0x154U & 0xffffffffffffffc0 );
         lVar16 = lVar16 - lVar22;
         sha1_update(pSVar31, local_c8, lVar22);
         local_c8 = (undefined8*)( (long)local_c8 + lVar22 );
         uVar13 = *(uint*)( lVar14 + 0x210 );
         local_50 = 0;
         uVar12 = *(int*)( lVar14 + 0x1c8 ) + (int)lVar16 * 8;
         local_60 = (undefined1[16])0x0;
         uVar12 = uVar12 >> 0x18 | ( uVar12 & 0xff0000 ) >> 8 | ( uVar12 & 0xff00 ) << 8 | uVar12 * 0x1000000;
         uVar15 = uVar15 - lVar22;
         if (uVar15 != 0) goto LAB_001004d2;
         uVar33 = 0;
         uVar29 = uVar13;
         LAB_00100777:uVar28 = (ulong)uVar29;
         if (uVar29 < 0x40) {
            LAB_00100784:puVar32 = (undefined8*)( lVar14 + 0x1d0 + uVar28 );
            uVar17 = 0x40 - uVar28;
            uVar13 = (uint)uVar17;
            if (uVar13 < 8) {
               if (( uVar17 & 4 ) == 0) {
                  if (( uVar13 != 0 ) && ( *(undefined1*)puVar32 = 0(uVar17 & 2) != 0 )) {
                     *(undefined2*)( (long)puVar32 + ( ( uVar17 & 0xffffffff ) - 2 ) ) = 0;
                  }
               } else {
                  *(undefined4*)puVar32 = 0;
                  *(undefined4*)( (long)puVar32 + ( ( uVar17 & 0xffffffff ) - 4 ) ) = 0;
               }
            } else {
               *puVar32 = 0;
               *(undefined8*)( (long)puVar32 + ( ( uVar17 & 0xffffffff ) - 8 ) ) = 0;
               uVar13 = uVar13 + ( (int)puVar32 - (int)( ( ulong )(puVar32 + 1) & 0xfffffffffffffff8 ) ) & 0xfffffff8;
               if (7 < uVar13) {
                  uVar17 = 0;
                  do {
                     uVar29 = (int)uVar17 + 8;
                     *(undefined8*)( ( ( ulong )(puVar32 + 1) & 0xfffffffffffffff8 ) + uVar17 ) = 0;
                     uVar17 = (ulong)uVar29;
                  } while ( uVar29 < uVar13 );
               }
            }
            uVar15 = ( uVar15 + 0x40 ) - uVar28;
            lVar22 = -0x49 - lVar16;
            if (0x38 < (uint)uVar28) goto LAB_001009c8;
         } else {
            LAB_001009c8:local_b8 = (undefined1(*) [16])( lVar14 + 0x1d0 );
            lVar22 = -0x49 - lVar16;
            uVar13 = ( uint )(( lVar16 + 8 ) - uVar15 >> 0x20);
            *(uint*)( lVar14 + 0x20c ) = *(uint*)( lVar14 + 0x20c ) | uVar12 & (int)uVar13 >> 0x1f;
            sha1_block_data_order(pSVar31, local_b8, 1);
            lVar1 = uVar15 + lVar22;
            uVar15 = uVar15 + 0x40;
            uVar13 = (int)( ( uint )((ulong)lVar1 >> 0x20) & uVar13 ) >> 0x1f;
            local_50 = local_50 | uVar13 & *(uint*)( lVar14 + 0x1c4 );
            local_60._4_4_ = uVar13 & *(uint*)( lVar14 + 0x1b8 ) | local_60._4_4_;
            local_60._0_4_ = uVar13 & *(uint*)( lVar14 + 0x1b4 ) | local_60._0_4_;
            local_60._8_4_ = uVar13 & *(uint*)( lVar14 + 0x1bc ) | local_60._8_4_;
            local_60._12_4_ = uVar13 & *(uint*)( lVar14 + 0x1c0 ) | local_60._12_4_;
            *local_b8 = (undefined1[16])0x0;
            *(undefined1(*) [16])( lVar14 + 0x1e0 ) = (undefined1[16])0x0;
            *(undefined1(*) [16])( lVar14 + 0x1f0 ) = (undefined1[16])0x0;
            *(undefined1(*) [16])( lVar14 + 0x200 ) = (undefined1[16])0x0;
         }
         local_b8 = (undefined1(*) [16])( lVar14 + 0x1d0 );
         *(uint*)( lVar14 + 0x20c ) = uVar12;
         sha1_block_data_order(pSVar31, local_b8, 1);
         uVar29 = ( uint )((long)( lVar22 + uVar15 ) >> 0x3f);
         uVar13 = *(uint*)( lVar14 + 0x1b4 ) & uVar29 | local_60._0_4_;
         uVar12 = *(uint*)( lVar14 + 0x1bc ) & uVar29 | local_60._8_4_;
         uVar25 = local_60._4_4_ | *(uint*)( lVar14 + 0x1b8 ) & uVar29;
         uVar21 = uVar29 & *(uint*)( lVar14 + 0x1c0 ) | local_60._12_4_;
         local_50 = *(uint*)( lVar14 + 0x1c4 ) & uVar29 | local_50;
         local_60._4_4_ = uVar25 >> 0x18 | ( uVar25 & 0xff0000 ) >> 8 | ( uVar25 & 0xff00 ) << 8 | uVar25 << 0x18;
         local_60._0_4_ = uVar13 >> 0x18 | ( uVar13 & 0xff0000 ) >> 8 | ( uVar13 & 0xff00 ) << 8 | uVar13 << 0x18;
         local_60._12_4_ = uVar21 >> 0x18 | ( uVar21 & 0xff0000 ) >> 8 | ( uVar21 & 0xff00 ) << 8 | uVar21 << 0x18;
         local_60._8_4_ = uVar12 >> 0x18 | ( uVar12 & 0xff0000 ) >> 8 | ( uVar12 & 0xff00 ) << 8 | uVar12 << 0x18;
         local_50 = local_50 >> 0x18 | ( local_50 & 0xff0000 ) >> 8 | ( local_50 & 0xff00 ) << 8 | local_50 << 0x18;
         for (int i_198 = 0; i_198 < 12; i_198++) {
            *(undefined8*)( lVar14 + ( 8*i_198 + 436 ) ) = *(undefined8*)( lVar14 + ( 8*i_198 + 340 ) );
         }
         sha1_update(pSVar31, local_60, 0x14);
         SHA1_Final(local_60, pSVar31);
         pbVar26 = (byte*)( (long)local_c8 + ( uVar33 - uVar34 ) + -1 );
         uVar13 = 0;
         uVar34 = ( (int)( uVar33 - uVar34 ) - (int)lVar16 ) - 0x15;
         do {
            bVar3 = *pbVar26;
            pbVar26 = pbVar26 + 1;
            uVar29 = (int)uVar34 >> 0x1f;
            uVar12 = -uVar34 - 0x15 & uVar34;
            pbVar2 = local_60 + uVar30;
            uVar30 = uVar30 + ( uVar12 >> 0x1f );
            uVar34 = uVar34 + 1;
            uVar13 = uVar13 | ( uint )(bVar3 ^ *pbVar2) & (int)uVar12 >> 0x1f | ~uVar29 & ( bVar3 ^ uVar20 );
         } while ( pbVar26 != (byte*)( (long)local_c8 + uVar33 + 0x13 ) );
         uVar15 = ( ulong )(( (int)( -uVar13 | uVar23 ) >> 0x1f ) + 1);
         goto LAB_0010014e;
      }
      aesni_cbc_encrypt(param_3, param_2, param_4, lVar14, param_1 + 0x28, 0);
      sha1_update(lVar14 + 0x1b4, param_2, param_4);
   } else {
      puVar18 = (undefined8*)( ulong )(0x40 - iVar36);
      puVar19 = param_2;
      local_b0 = param_4;
      local_c0 = param_2;
      if (puVar32 == (undefined8*)0xffffffffffffffff) {
         if (puVar18 < param_4) {
            lVar16 = 0;
            puVar24 = param_3;
            puVar27 = puVar18;
            puVar32 = param_4;
            LAB_001005e6:uVar15 = (long)puVar32 - (long)puVar27;
            if (0x3f < uVar15) {
               puStack_d0 = (undefined8*)0x10061d;
               sha1_update(lVar14 + 0x1b4, puVar24, puVar18);
               aesni_cbc_sha1_enc(param_3, param_2, uVar15 >> 6, lVar14, param_1 + 0x28, lVar14 + 0x1b4, (long)puVar27 + (long)param_3);
               uVar30 = uVar15 & 0xffffffffffffffc0;
               uVar20 = (int)uVar30 * 8;
               uVar34 = uVar20 + (int)*(undefined8*)( lVar14 + 0x1c8 );
               iVar36 = (int)( uVar15 >> 0x1d ) + (int)( ( ulong ) * (undefined8*)( lVar14 + 0x1c8 ) >> 0x20 );
               *(ulong*)( lVar14 + 0x1c8 ) = CONCAT44(iVar36, uVar34);
               if (uVar34 < uVar20) {
                  *(int*)( lVar14 + 0x1cc ) = iVar36 + 1;
               }
               lVar16 = (long)puVar18 + uVar30 + lVar16;
               local_c0 = (undefined8*)( (long)param_2 + uVar30 );
               puVar24 = (undefined8*)( (long)param_3 + lVar16 );
               local_b0 = (undefined8*)( (long)param_4 - uVar30 );
               puVar19 = local_b0;
               puVar27 = puStack_d0;
            }
            goto LAB_001001ff;
         }
         sha1_update(lVar14 + 0x1b4, param_3, param_4);
      } else {
         if ((undefined8*)( (long)puVar32 + 0x24U & 0xfffffffffffffff0 ) != param_4) goto LAB_0010014c;
         uVar15 = ( ulong )(0x301 < *(uint*)( lVar14 + 0x220 ));
         lVar16 = uVar15 * 0x10;
         puVar27 = puVar18 + uVar15 * 2;
         puVar24 = param_3 + uVar15 * 2;
         if (puVar27 < puVar32) goto LAB_001005e6;
         LAB_001001ff:pSVar31 = (SHA_CTX*)( lVar14 + 0x1b4 );
         sha1_update(pSVar31, puVar24, (long)puVar32 - lVar16, puVar19, puVar27);
         if (puVar32 != param_4) {
            if (param_3 != param_2) {
               memcpy(local_c0, (void*)( (long)param_3 + uVar30 ), (long)puVar32 - uVar30);
            }
            md = (uchar*)( (long)param_2 + (long)puVar32 );
            SHA1_Final(md, pSVar31);
            for (int i_200 = 0; i_200 < 12; i_200++) {
               *(undefined8*)( lVar14 + ( 8*i_200 + 436 ) ) = *(undefined8*)( lVar14 + ( 8*i_200 + 340 ) );
            }
            sha1_update(pSVar31, md, 0x14);
            SHA1_Final(md, pSVar31);
            puVar19 = (undefined8*)( (long)puVar32 + 0x14 );
            if (puVar19 < param_4) {
               memset((void*)( (long)param_2 + (long)puVar19 ), ( (uint)param_4 - 1 ) - (int)puVar19 & 0xff, (long)param_4 + ( -0x14 - (long)puVar32 ));
            }
            aesni_cbc_encrypt(local_c0, local_c0, local_b0, lVar14, param_1 + 0x28, 1);
            goto LAB_00100317;
         }
         local_c8 = local_c0;
         param_3 = (undefined8*)( (long)param_3 + uVar30 );
      }
      aesni_cbc_encrypt(param_3, local_c8, local_b0, lVar14, param_1 + 0x28, 1);
   }
   LAB_00100317:uVar15 = 1;
   LAB_0010014e:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return uVar15;
}uint aesni_cbc_hmac_sha1_init_key(undefined8 param_1, undefined8 param_2, undefined8 param_3, int param_4) {
   int iVar1;
   uint uVar2;
   long lVar3;
   lVar3 = EVP_CIPHER_CTX_get_cipher_data();
   iVar1 = EVP_CIPHER_CTX_get_key_length(param_1);
   if (0 < iVar1 * 8) {
      if (param_4 == 0) {
         uVar2 = aesni_set_decrypt_key();
      } else {
         uVar2 = aesni_set_encrypt_key(param_2, iVar1 * 8, lVar3);
      }
      SHA1_Init((SHA_CTX*)( lVar3 + 0xf4 ));
      *(undefined8*)( lVar3 + 0x218 ) = 0xffffffffffffffff;
      for (int i_202 = 0; i_202 < 12; i_202++) {
         *(undefined8*)( lVar3 + ( 8*i_202 + 340 ) ) = *(undefined8*)( lVar3 + ( 8*i_202 + 244 ) );
      }
      for (int i_201 = 0; i_201 < 12; i_201++) {
         *(undefined8*)( lVar3 + ( 8*i_201 + 436 ) ) = *(undefined8*)( lVar3 + ( 8*i_201 + 244 ) );
      }
      return ~uVar2 >> 0x1f;
   }
   ERR_new();
   ERR_set_debug("crypto/evp/e_aes_cbc_hmac_sha1.c", 0x4e, "aesni_cbc_hmac_sha1_init_key");
   ERR_set_error(6, 0x82, 0);
   return 0;
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */long tls1_1_multi_block_encrypt(long param_1, undefined1 *param_2, ulong *param_3, uint param_4, int param_5) {
   ulong uVar1;
   uint uVar2;
   byte bVar3;
   byte bVar4;
   uint uVar5;
   uint uVar6;
   undefined4 uVar7;
   uint uVar8;
   ulong uVar9;
   ulong uVar10;
   ulong uVar11;
   ulong uVar12;
   ulong uVar13;
   ushort uVar14;
   int iVar15;
   long lVar16;
   long lVar17;
   ulong uVar18;
   byte bVar19;
   ulong uVar20;
   uint uVar21;
   uint uVar22;
   ulong *puVar23;
   uint uVar24;
   ulong **ppuVar25;
   undefined8 *puVar26;
   ulong *puVar27;
   ulong uVar28;
   uint uVar29;
   uint *puVar30;
   uint uVar31;
   long in_FS_OFFSET;
   byte bVar32;
   undefined1 *puVar33;
   uint local_7a8;
   uint local_7a4;
   long local_798;
   ulong **local_788;
   int local_768;
   ulong **local_760;
   ulong *local_748;
   int local_740[2];
   ulong *local_738;
   int local_730;
   undefined8 *local_728;
   int local_720;
   undefined8 *local_718;
   int local_710;
   undefined8 *local_708;
   int local_700;
   undefined8 *local_6f8;
   int local_6f0;
   undefined8 *local_6e8;
   int local_6e0;
   undefined8 *local_6d8;
   int local_6d0;
   ulong *local_6c8;
   undefined4 local_6c0[2];
   undefined8 *local_6b8;
   undefined4 local_6b0;
   undefined8 *local_6a8;
   undefined4 local_6a0;
   undefined8 *local_698;
   undefined4 local_690;
   undefined8 *local_688;
   undefined4 local_680;
   undefined8 *local_678;
   undefined4 local_670;
   undefined8 *local_668;
   undefined4 local_660;
   undefined8 *local_658;
   undefined4 local_650;
   ulong *local_648[2];
   undefined4 local_638;
   ulong local_630;
   undefined8 uStack_628;
   long local_620;
   long lStack_618;
   undefined4 local_610;
   undefined8 local_608;
   undefined8 uStack_600;
   long local_5f8;
   long lStack_5f0;
   undefined4 local_5e8;
   undefined8 local_5e0;
   undefined8 uStack_5d8;
   long local_5d0;
   long lStack_5c8;
   undefined4 local_5c0;
   undefined8 local_5b8;
   undefined8 uStack_5b0;
   long local_5a8;
   long lStack_5a0;
   undefined4 local_598;
   undefined8 local_590;
   undefined8 uStack_588;
   long local_580;
   long lStack_578;
   undefined4 local_570;
   undefined8 local_568;
   undefined8 uStack_560;
   long local_558;
   long lStack_550;
   undefined4 local_548;
   undefined8 local_540;
   undefined8 uStack_538;
   long local_530;
   long lStack_528;
   undefined4 local_520;
   undefined8 local_518;
   undefined8 uStack_510;
   ulong local_508[2];
   undefined8 local_4f8;
   ulong auStack_4f0[4];
   undefined4 uStack_4cc;
   undefined8 local_488;
   undefined8 uStack_480;
   uint local_478;
   undefined1 local_474;
   undefined4 local_44c;
   undefined8 local_408;
   undefined8 uStack_400;
   uint local_3f8;
   undefined1 local_3f4;
   undefined4 local_3cc;
   undefined8 local_388;
   undefined8 uStack_380;
   uint local_378;
   undefined1 local_374;
   undefined4 local_34c;
   undefined8 local_308;
   undefined8 uStack_300;
   uint local_2f8;
   undefined1 local_2f4;
   undefined4 local_2cc;
   undefined8 local_288;
   undefined8 uStack_280;
   uint local_278;
   undefined1 local_274;
   undefined4 local_24c;
   undefined8 local_208;
   undefined8 uStack_200;
   uint local_1f8;
   undefined1 local_1f4;
   undefined4 local_1cc;
   undefined8 local_188;
   undefined8 uStack_180;
   uint local_178;
   undefined1 local_174;
   undefined4 local_14c;
   uint local_100[4];
   uint local_f0;
   uint local_ec;
   uint local_e8;
   uint local_e4;
   uint local_e0[4];
   uint local_d0;
   uint local_cc;
   uint local_c8;
   uint local_c4;
   uint local_c0[4];
   uint local_b0;
   uint local_ac;
   uint local_a8;
   uint local_a4;
   uint local_a0[4];
   uint local_90;
   uint local_8c;
   uint local_88;
   uint local_84;
   uint local_80[4];
   uint local_70;
   uint local_6c;
   uint local_68;
   uint local_64;
   long local_40;
   bVar32 = 0;
   local_798 = 0;
   uVar2 = param_5 * 4;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar15 = RAND_bytes((uchar*)local_508, param_5 << 6);
   if (iVar15 < 1) goto LAB_001015a9;
   bVar19 = (char)param_5 + 1;
   local_7a8 = param_4 >> ( bVar19 & 0x1f );
   local_7a4 = ( param_4 + local_7a8 ) - ( local_7a8 << ( bVar19 & 0x1f ) );
   if (( local_7a8 < local_7a4 ) && ( ( local_7a4 + 0x16 & 0x3f ) < uVar2 - 1 )) {
      local_7a8 = local_7a8 + 1;
      local_7a4 = local_7a4 + param_5 * -4 + 1;
   }
   local_748 = param_3;
   local_648[0] = param_3;
   local_648[1] = (ulong*)( param_2 + 0x15 );
   *(ulong*)( param_2 + 5 ) = local_508[0];
   *(ulong*)( param_2 + 0xd ) = local_508[1];
   local_630 = local_508[0];
   uStack_628 = local_508[1];
   uVar21 = local_7a4;
   if (local_7a8 <= local_7a4) {
      uVar21 = local_7a8;
   }
   uVar21 = uVar21 - 0x33;
   if ((int)uVar2 < 2) {
      local_508[0] = *(ulong*)( param_1 + 0x1d0 );
      sha1_multi_block(local_100, &local_6c8, 0);
      if (0x83f < uVar21) goto LAB_0010113c;
      sha1_multi_block(local_100, &local_748, 0);
      puVar27 = local_508;
      for (lVar16 = 0x80; lVar16 != 0; lVar16 = lVar16 + -1) {
         *puVar27 = 0;
         puVar27 = puVar27 + (ulong)bVar32 * -2 + 1;
      }
      LAB_00101eac:local_798 = 0;
      sha1_multi_block(local_100, &local_6c8, 0);
      puVar27 = local_508;
      for (lVar16 = 0x80; lVar16 != 0; lVar16 = lVar16 + -1) {
         *puVar27 = 0;
         puVar27 = puVar27 + (ulong)bVar32 * -2 + 1;
      }
      sha1_multi_block(local_100, &local_6c8, 0);
   } else {
      puVar26 = &local_608;
      puVar27 = &local_4f8;
      ppuVar25 = &local_748;
      do {
         uVar28 = *puVar27;
         uVar18 = puVar27[1];
         uVar20 = (long)puVar26 - (long)local_648;
         ppuVar25[2] = (ulong*)( (long)*ppuVar25 + (ulong)local_7a8 );
         puVar26[-3] = (ulong*)( (long)*ppuVar25 + (ulong)local_7a8 );
         lVar16 = puVar26[-7] + ( ulong )(( local_7a8 + 0x24 & 0xfffffff0 ) + 0x15);
         puVar26[-2] = lVar16;
         *(ulong*)( lVar16 + -0x10 ) = uVar28;
         *(ulong*)( lVar16 + -8 ) = uVar18;
         if (uVar20 < 0x140) {
            uVar20 = 0x140;
         }
         puVar23 = puVar27 + 2;
         ppuVar25 = ppuVar25 + 2;
         lVar16 = __memcpy_chk(puVar26, puVar27, 0x10, (long)local_648 + ( uVar20 - (long)puVar26 ));
         puVar26 = (undefined8*)( lVar16 + 0x28 );
         puVar27 = puVar23;
      } while ( local_508 + (ulong)uVar2 * 2 != puVar23 );
      uVar31 = *(uint*)( param_1 + 0x1bc );
      local_508[0] = *(ulong*)( param_1 + 0x1d0 );
      uVar29 = *(uint*)( param_1 + 0x1b8 );
      bVar19 = *(byte*)( param_1 + 0x1da );
      bVar3 = *(byte*)( param_1 + 0x1d9 );
      uVar28 = local_508[0] >> 0x38;
      uVar18 = local_508[0] & 0xff000000000000;
      uVar20 = local_508[0] & 0xff0000000000;
      uVar9 = local_508[0] & 0xff00000000;
      uVar10 = local_508[0] & 0xff000000;
      uVar11 = local_508[0] & 0xff0000;
      uVar12 = local_508[0] & 0xff00;
      uVar13 = local_508[0] << 0x38;
      bVar4 = *(byte*)( param_1 + 0x1d8 );
      uVar5 = *(uint*)( param_1 + 0x1b4 );
      uVar24 = *(uint*)( param_1 + 0x1c0 );
      uVar6 = *(uint*)( param_1 + 0x1c4 );
      lVar16 = 0;
      puVar27 = local_508;
      ppuVar25 = &local_748;
      do {
         local_100[lVar16] = uVar5;
         uVar8 = local_7a4;
         if (uVar2 - 1 != (int)lVar16) {
            uVar8 = local_7a8;
         }
         local_a0[lVar16] = uVar24;
         local_e0[lVar16] = uVar29;
         *(uchar*)( (long)puVar27 + 0xc ) = (uchar)uVar8;
         local_c0[lVar16] = uVar31;
         local_80[lVar16] = uVar6;
         uVar1 = ( uVar28 | uVar18 >> 0x28 | uVar20 >> 0x18 | uVar9 >> 8 | uVar10 << 8 | uVar11 << 0x18 | uVar12 << 0x28 | uVar13 ) + lVar16;
         *puVar27 = uVar1 >> 0x38 | ( uVar1 & 0xff000000000000 ) >> 0x28 | ( uVar1 & 0xff0000000000 ) >> 0x18 | ( uVar1 & 0xff00000000 ) >> 8 | ( uVar1 & 0xff000000 ) << 8 | ( uVar1 & 0xff0000 ) << 0x18 | ( uVar1 & 0xff00 ) << 0x28 | uVar1 << 0x38;
         *(uint*)( puVar27 + 1 ) = ( ( uVar8 & 0xff00 | (uint)bVar19 ) << 8 | (uint)bVar3 ) << 8 | (uint)bVar4;
         puVar23 = *ppuVar25;
         uVar1 = puVar23[1];
         *(ulong*)( (long)puVar27 + 0xd ) = *puVar23;
         *(ulong*)( (long)puVar27 + 0x15 ) = uVar1;
         uVar1 = puVar23[3];
         *(ulong*)( (long)puVar27 + 0x1d ) = puVar23[2];
         *(ulong*)( (long)puVar27 + 0x25 ) = uVar1;
         uVar1 = puVar23[5];
         *(ulong*)( (long)puVar27 + 0x2d ) = puVar23[4];
         *(ulong*)( (long)puVar27 + 0x35 ) = uVar1;
         uVar7 = *(undefined4*)( (long)puVar23 + 0x2f );
         *(uint*)( ppuVar25 + 1 ) = uVar8 - 0x33 >> 6;
         lVar17 = lVar16 + 1;
         *(undefined4*)( (long)puVar27 + 0x3c ) = uVar7;
         ( &local_6c8 )[lVar16 * 2] = puVar27;
         puVar27 = puVar27 + 0x10;
         local_6c0[lVar16 * 4] = 1;
         *ppuVar25 = (ulong*)( (long)puVar23 + 0x33 );
         lVar16 = lVar17;
         ppuVar25 = ppuVar25 + 2;
      } while ( (uint)lVar17 < uVar2 );
      sha1_multi_block(local_100, &local_6c8, param_5);
      if (uVar21 < 0x840) {
         sha1_multi_block(local_100, &local_748, param_5);
         local_768 = 0;
         puVar27 = local_508;
         for (lVar16 = 0x80; lVar16 != 0; lVar16 = lVar16 + -1) {
            *puVar27 = 0;
            puVar27 = puVar27 + (ulong)bVar32 * -2 + 1;
         }
      } else {
         local_6c0[0] = 0x20;
         local_638 = 0x80;
         local_6c8 = local_748;
         local_6b0 = 0x20;
         local_6b8 = local_738;
         local_610 = 0x80;
         local_6a8 = local_728;
         local_6a0 = 0x20;
         local_5e8 = 0x80;
         local_698 = local_718;
         local_690 = 0x20;
         local_5c0 = 0x80;
         if (uVar2 != 4) {
            local_680 = 0x20;
            local_598 = 0x80;
            local_688 = local_708;
            local_670 = 0x20;
            local_678 = local_6f8;
            local_570 = 0x80;
            local_668 = local_6e8;
            local_660 = 0x20;
            local_548 = 0x80;
            if (uVar2 == 8) {
               local_650 = 0x20;
               local_520 = 0x80;
               local_658 = local_6d8;
            }
         }
         LAB_0010113c:local_760 = local_648;
         local_788 = &local_748;
         uVar31 = uVar21 >> 6;
         do {
            sha1_multi_block(local_100, &local_6c8, param_5);
            aesni_multi_cbc_encrypt(local_760, param_1, param_5);
            if (param_5 != 0) {
               local_6c0[0] = 0x20;
               local_740[0] = local_740[0] + -0x20;
               local_748 = local_748 + 0x100;
               local_648[0] = (ulong*)( (long)local_648[0] + __LC1 );
               puVar33 = (undefined1*)( (long)local_648[1] + _UNK_00102778 );
               local_630 = *(ulong*)( (long)local_648[1] + 0x7f0 );
               uStack_628 = *(undefined8*)( (long)local_648[1] + 0x7f8 );
               local_620 = local_620 + __LC1;
               lVar16 = lStack_618 + _UNK_00102778;
               local_730 = local_730 + -0x20;
               local_738 = local_738 + 0x100;
               local_638 = 0x80;
               local_608 = *(undefined8*)( lStack_618 + 0x7f0 );
               uStack_600 = *(undefined8*)( lStack_618 + 0x7f8 );
               local_6b0 = 0x20;
               local_610 = 0x80;
               local_6c8 = local_748;
               local_6b8 = local_738;
               local_648[1] = (ulong*)puVar33;
               lStack_618 = lVar16;
               if (2 < (int)uVar2) {
                  local_720 = local_720 + -0x20;
                  local_710 = local_710 + -0x20;
                  local_728 = local_728 + 0x100;
                  local_6a0 = 0x20;
                  local_5f8 = local_5f8 + __LC1;
                  lVar16 = lStack_5f0 + _UNK_00102778;
                  local_5e0 = *(undefined8*)( lStack_5f0 + 0x7f0 );
                  uStack_5d8 = *(undefined8*)( lStack_5f0 + 0x7f8 );
                  local_5e8 = 0x80;
                  local_718 = local_718 + 0x100;
                  local_5d0 = local_5d0 + __LC1;
                  lVar17 = lStack_5c8 + _UNK_00102778;
                  local_690 = 0x20;
                  local_5b8 = *(undefined8*)( lStack_5c8 + 0x7f0 );
                  uStack_5b0 = *(undefined8*)( lStack_5c8 + 0x7f8 );
                  local_5c0 = 0x80;
                  local_6a8 = local_728;
                  local_698 = local_718;
                  lStack_5f0 = lVar16;
                  lStack_5c8 = lVar17;
                  if (uVar2 != 4) {
                     local_700 = local_700 + -0x20;
                     local_6f0 = local_6f0 + -0x20;
                     local_708 = local_708 + 0x100;
                     local_6e0 = local_6e0 + -0x20;
                     local_5a8 = local_5a8 + __LC1;
                     local_590 = *(undefined8*)( lStack_5a0 + 0x7f0 );
                     uStack_588 = *(undefined8*)( lStack_5a0 + 0x7f8 );
                     local_680 = 0x20;
                     local_6f8 = local_6f8 + 0x100;
                     local_580 = local_580 + __LC1;
                     local_568 = *(undefined8*)( lStack_578 + 0x7f0 );
                     uStack_560 = *(undefined8*)( lStack_578 + 0x7f8 );
                     local_598 = 0x80;
                     local_558 = local_558 + __LC1;
                     local_6e8 = local_6e8 + 0x100;
                     local_540 = *(undefined8*)( lStack_550 + 0x7f0 );
                     uStack_538 = *(undefined8*)( lStack_550 + 0x7f8 );
                     local_670 = 0x20;
                     local_570 = 0x80;
                     local_660 = 0x20;
                     local_548 = 0x80;
                     local_6d0 = local_6d0 + -0x20;
                     local_6d8 = local_6d8 + 0x100;
                     local_650 = 0x20;
                     local_530 = local_530 + __LC1;
                     local_518 = *(undefined8*)( lStack_528 + 0x7f0 );
                     uStack_510 = *(undefined8*)( lStack_528 + 0x7f8 );
                     local_520 = 0x80;
                     local_688 = local_708;
                     local_678 = local_6f8;
                     local_668 = local_6e8;
                     local_658 = local_6d8;
                     lStack_5a0 = lStack_5a0 + _UNK_00102778;
                     lStack_578 = lStack_578 + _UNK_00102778;
                     lStack_550 = lStack_550 + _UNK_00102778;
                     lStack_528 = lStack_528 + _UNK_00102778;
                  }
               }
            }
            uVar31 = uVar31 - 0x20;
         } while ( 0x20 < uVar31 );
         local_768 = ( ( ( uVar21 >> 6 ) - 0x21 >> 5 ) + 1 ) * 0x800;
         sha1_multi_block(local_100, local_788, param_5);
         puVar27 = local_508;
         for (lVar16 = 0x80; lVar16 != 0; lVar16 = lVar16 + -1) {
            *puVar27 = 0;
            puVar27 = puVar27 + (ulong)bVar32 * -2 + 1;
         }
         if (param_5 == 0) goto LAB_00101eac;
      }
      local_760 = local_648;
      uVar31 = 0;
      lVar16 = 0;
      puVar27 = local_508;
      uVar21 = local_7a8;
      while (true) {
         uVar29 = uVar21 + ( -0x33 - local_768 ) + *(int*)( (long)local_740 + lVar16 ) * -0x40;
         lVar17 = __memcpy_chk(puVar27, ( ulong )(uint)(*(int*)( (long)local_740 + lVar16 ) * 0x40) + *(long*)( (long)local_740 + lVar16 + -8 ), (ulong)uVar29, lVar16 * -8 + 0x400);
         *(undefined1*)( (long)local_508 + (ulong)uVar29 + (ulong)uVar31 * 0x80 ) = 0x80;
         uVar21 = uVar21 * 8 + 0x268;
         uVar21 = uVar21 >> 0x18 | ( uVar21 & 0xff0000 ) >> 8 | ( uVar21 & 0xff00 ) << 8 | uVar21 * 0x1000000;
         if (uVar29 < 0x38) {
            *(uint*)( lVar17 + 0x3c ) = uVar21;
            *(undefined4*)( (long)local_6c0 + lVar16 ) = 1;
            *(long*)( (long)&local_6c8 + lVar16 ) = lVar17;
         } else {
            *(uint*)( lVar17 + 0x7c ) = uVar21;
            *(undefined4*)( (long)local_6c0 + lVar16 ) = 2;
            *(long*)( (long)&local_6c8 + lVar16 ) = lVar17;
         }
         if (uVar31 + 1 == uVar2) break;
         uVar31 = uVar31 + 1;
         puVar27 = (ulong*)( lVar17 + 0x80 );
         lVar16 = lVar16 + 0x10;
         uVar21 = local_7a8;
         if (uVar31 == uVar2 - 1) {
            uVar21 = local_7a4;
         }
      };
      sha1_multi_block(local_100, &local_6c8, param_5);
      puVar27 = local_508;
      for (lVar16 = 0x80; lVar16 != 0; lVar16 = lVar16 + -1) {
         *puVar27 = 0;
         puVar27 = puVar27 + (ulong)bVar32 * -2 + 1;
      }
      local_4f8._4_1_ = 0x80;
      uVar24 = local_e0[0] >> 0x18;
      uVar6 = local_e0[0] & 0xff0000;
      uVar8 = local_e0[0] & 0xff00;
      uVar22 = local_e0[0] << 0x18;
      uVar21 = *(uint*)( param_1 + 0x154 );
      local_e0[0] = *(uint*)( param_1 + 0x158 );
      uVar31 = *(uint*)( param_1 + 0x15c );
      uVar29 = *(uint*)( param_1 + 0x160 );
      uVar5 = *(uint*)( param_1 + 0x164 );
      local_508[1] = CONCAT44(local_a0[0] >> 0x18 | ( local_a0[0] & 0xff0000 ) >> 8 | ( local_a0[0] & 0xff00 ) << 8 | local_a0[0] << 0x18, local_c0[0] >> 0x18 | ( local_c0[0] & 0xff0000 ) >> 8 | ( local_c0[0] & 0xff00 ) << 8 | local_c0[0] << 0x18);
      local_508[0] = CONCAT44(uVar24 | uVar6 >> 8 | uVar8 << 8 | uVar22, local_100[0] >> 0x18 | ( local_100[0] & 0xff0000 ) >> 8 | ( local_100[0] & 0xff00 ) << 8 | local_100[0] << 0x18);
      local_4f8._0_4_ = local_80[0] >> 0x18 | ( local_80[0] & 0xff0000 ) >> 8 | ( local_80[0] & 0xff00 ) << 8 | local_80[0] << 0x18;
      local_488 = CONCAT44(local_e0[1] >> 0x18 | ( local_e0[1] & 0xff0000 ) >> 8 | ( local_e0[1] & 0xff00 ) << 8 | local_e0[1] << 0x18, local_100[1] >> 0x18 | ( local_100[1] & 0xff0000 ) >> 8 | ( local_100[1] & 0xff00 ) << 8 | local_100[1] << 0x18);
      uStack_480 = CONCAT44(local_a0[1] >> 0x18 | ( local_a0[1] & 0xff0000 ) >> 8 | ( local_a0[1] & 0xff00 ) << 8 | local_a0[1] << 0x18, local_c0[1] >> 0x18 | ( local_c0[1] & 0xff0000 ) >> 8 | ( local_c0[1] & 0xff00 ) << 8 | local_c0[1] << 0x18);
      local_478 = local_80[1] >> 0x18 | ( local_80[1] & 0xff0000 ) >> 8 | ( local_80[1] & 0xff00 ) << 8 | local_80[1] << 0x18;
      uStack_4cc = 0xa0020000;
      local_474 = 0x80;
      local_44c = 0xa0020000;
      if (2 < (int)uVar2) {
         local_408 = CONCAT44(local_e0[2] >> 0x18 | ( local_e0[2] & 0xff0000 ) >> 8 | ( local_e0[2] & 0xff00 ) << 8 | local_e0[2] << 0x18, local_100[2] >> 0x18 | ( local_100[2] & 0xff0000 ) >> 8 | ( local_100[2] & 0xff00 ) << 8 | local_100[2] << 0x18);
         uStack_400 = CONCAT44(local_a0[2] >> 0x18 | ( local_a0[2] & 0xff0000 ) >> 8 | ( local_a0[2] & 0xff00 ) << 8 | local_a0[2] << 0x18, local_c0[2] >> 0x18 | ( local_c0[2] & 0xff0000 ) >> 8 | ( local_c0[2] & 0xff00 ) << 8 | local_c0[2] << 0x18);
         local_3f8 = local_80[2] >> 0x18 | ( local_80[2] & 0xff0000 ) >> 8 | ( local_80[2] & 0xff00 ) << 8 | local_80[2] << 0x18;
         uStack_380 = CONCAT44(local_a0[3] >> 0x18 | ( local_a0[3] & 0xff0000 ) >> 8 | ( local_a0[3] & 0xff00 ) << 8 | local_a0[3] << 0x18, local_c0[3] >> 0x18 | ( local_c0[3] & 0xff0000 ) >> 8 | ( local_c0[3] & 0xff00 ) << 8 | local_c0[3] << 0x18);
         local_388 = CONCAT44(local_e0[3] >> 0x18 | ( local_e0[3] & 0xff0000 ) >> 8 | ( local_e0[3] & 0xff00 ) << 8 | local_e0[3] << 0x18, local_100[3] >> 0x18 | ( local_100[3] & 0xff0000 ) >> 8 | ( local_100[3] & 0xff00 ) << 8 | local_100[3] << 0x18);
         local_378 = local_80[3] >> 0x18 | ( local_80[3] & 0xff0000 ) >> 8 | ( local_80[3] & 0xff00 ) << 8 | local_80[3] << 0x18;
         local_3f4 = 0x80;
         local_3cc = 0xa0020000;
         local_374 = 0x80;
         local_34c = 0xa0020000;
         local_100[2] = uVar21;
         local_100[3] = uVar21;
         local_e0[2] = local_e0[0];
         local_e0[3] = local_e0[0];
         local_c0[2] = uVar31;
         local_c0[3] = uVar31;
         local_a0[2] = uVar29;
         local_a0[3] = uVar29;
         local_80[2] = uVar5;
         local_80[3] = uVar5;
         if (uVar2 == 4) {
            local_6b0 = 1;
            local_6b8 = &local_488;
            local_6a8 = &local_408;
            local_698 = &local_388;
            local_6a0 = 1;
            local_690 = 1;
         } else {
            local_308 = CONCAT44(local_d0 >> 0x18 | ( local_d0 & 0xff0000 ) >> 8 | ( local_d0 & 0xff00 ) << 8 | local_d0 << 0x18, local_f0 >> 0x18 | ( local_f0 & 0xff0000 ) >> 8 | ( local_f0 & 0xff00 ) << 8 | local_f0 << 0x18);
            uStack_300 = CONCAT44(local_90 >> 0x18 | ( local_90 & 0xff0000 ) >> 8 | ( local_90 & 0xff00 ) << 8 | local_90 << 0x18, local_b0 >> 0x18 | ( local_b0 & 0xff0000 ) >> 8 | ( local_b0 & 0xff00 ) << 8 | local_b0 << 0x18);
            local_2f8 = local_70 >> 0x18 | ( local_70 & 0xff0000 ) >> 8 | ( local_70 & 0xff00 ) << 8 | local_70 << 0x18;
            uStack_280 = CONCAT44(local_8c >> 0x18 | ( local_8c & 0xff0000 ) >> 8 | ( local_8c & 0xff00 ) << 8 | local_8c << 0x18, local_ac >> 0x18 | ( local_ac & 0xff0000 ) >> 8 | ( local_ac & 0xff00 ) << 8 | local_ac << 0x18);
            local_288 = CONCAT44(local_cc >> 0x18 | ( local_cc & 0xff0000 ) >> 8 | ( local_cc & 0xff00 ) << 8 | local_cc << 0x18, local_ec >> 0x18 | ( local_ec & 0xff0000 ) >> 8 | ( local_ec & 0xff00 ) << 8 | local_ec << 0x18);
            local_2f4 = 0x80;
            local_278 = local_6c >> 0x18 | ( local_6c & 0xff0000 ) >> 8 | ( local_6c & 0xff00 ) << 8 | local_6c << 0x18;
            local_2cc = 0xa0020000;
            local_208 = CONCAT44(local_c8 >> 0x18 | ( local_c8 & 0xff0000 ) >> 8 | ( local_c8 & 0xff00 ) << 8 | local_c8 << 0x18, local_e8 >> 0x18 | ( local_e8 & 0xff0000 ) >> 8 | ( local_e8 & 0xff00 ) << 8 | local_e8 << 0x18);
            local_274 = 0x80;
            local_24c = 0xa0020000;
            uStack_200 = CONCAT44(local_88 >> 0x18 | ( local_88 & 0xff0000 ) >> 8 | ( local_88 & 0xff00 ) << 8 | local_88 << 0x18, local_a8 >> 0x18 | ( local_a8 & 0xff0000 ) >> 8 | ( local_a8 & 0xff00 ) << 8 | local_a8 << 0x18);
            local_1f8 = local_68 >> 0x18 | ( local_68 & 0xff0000 ) >> 8 | ( local_68 & 0xff00 ) << 8 | local_68 << 0x18;
            local_1f4 = 0x80;
            local_1cc = 0xa0020000;
            local_f0 = uVar21;
            local_ec = uVar21;
            local_e8 = uVar21;
            local_d0 = local_e0[0];
            local_cc = local_e0[0];
            local_c8 = local_e0[0];
            local_b0 = uVar31;
            local_ac = uVar31;
            local_a8 = uVar31;
            local_90 = uVar29;
            local_8c = uVar29;
            local_88 = uVar29;
            local_70 = uVar5;
            local_6c = uVar5;
            local_68 = uVar5;
            if (uVar2 == 8) {
               local_178 = local_64 >> 0x18 | ( local_64 & 0xff0000 ) >> 8 | ( local_64 & 0xff00 ) << 8 | local_64 << 0x18;
               local_6b8 = &local_488;
               local_6a8 = &local_408;
               local_188 = CONCAT44(local_c4 >> 0x18 | ( local_c4 & 0xff0000 ) >> 8 | ( local_c4 & 0xff00 ) << 8 | local_c4 << 0x18, local_e4 >> 0x18 | ( local_e4 & 0xff0000 ) >> 8 | ( local_e4 & 0xff00 ) << 8 | local_e4 << 0x18);
               local_698 = &local_388;
               local_688 = &local_308;
               local_678 = &local_288;
               local_668 = &local_208;
               local_658 = &local_188;
               uStack_180 = CONCAT44(local_84 >> 0x18 | ( local_84 & 0xff0000 ) >> 8 | ( local_84 & 0xff00 ) << 8 | local_84 << 0x18, local_a4 >> 0x18 | ( local_a4 & 0xff0000 ) >> 8 | ( local_a4 & 0xff00 ) << 8 | local_a4 << 0x18);
               local_174 = 0x80;
               local_14c = 0xa0020000;
               local_6b0 = 1;
               local_6a0 = 1;
               local_690 = 1;
               local_680 = 1;
               local_670 = 1;
               local_660 = 1;
               local_650 = 1;
               local_e4 = uVar21;
               local_c4 = local_e0[0];
               local_a4 = uVar31;
               local_84 = uVar29;
               local_64 = uVar5;
            } else {
               local_6b0 = 1;
               local_6b8 = &local_488;
               local_6a8 = &local_408;
               local_698 = &local_388;
               local_688 = &local_308;
               local_6a0 = 1;
               local_690 = 1;
               local_680 = 1;
            }
         }
      }
      local_6c0[0] = 1;
      uVar24 = 0;
      local_6c8 = local_508;
      local_100[0] = uVar21;
      local_100[1] = uVar21;
      local_e0[1] = local_e0[0];
      local_c0[0] = uVar31;
      local_c0[1] = uVar31;
      local_a0[0] = uVar29;
      local_a0[1] = uVar29;
      local_80[0] = uVar5;
      local_80[1] = uVar5;
      sha1_multi_block(local_100, &local_6c8, param_5);
      local_798 = 0;
      puVar30 = local_100;
      uVar21 = local_7a8;
      while (true) {
         memcpy(local_760[1], *local_760, ( ulong )(uVar21 - local_768));
         uVar29 = *puVar30;
         *local_760 = local_760[1];
         puVar26 = (undefined8*)( param_2 + ( uVar21 + 0x15 ) );
         uVar5 = puVar30[0x10];
         uVar6 = puVar30[8];
         uVar31 = puVar30[0x20];
         uVar8 = puVar30[0x18];
         *(uint*)( puVar26 + 2 ) = uVar31 >> 0x18 | ( uVar31 & 0xff0000 ) >> 8 | ( uVar31 & 0xff00 ) << 8 | uVar31 << 0x18;
         uVar22 = ~(uVar21 + 0x14) & 0xf;
         uVar31 = uVar22 + 1;
         uVar28 = (ulong)uVar31;
         lVar16 = (ulong)uVar22 * 0x101010101010101;
         *puVar26 = CONCAT44(uVar6 >> 0x18 | ( uVar6 & 0xff0000 ) >> 8 | ( uVar6 & 0xff00 ) << 8 | uVar6 << 0x18, uVar29 >> 0x18 | ( uVar29 & 0xff0000 ) >> 8 | ( uVar29 & 0xff00 ) << 8 | uVar29 << 0x18);
         puVar26[1] = CONCAT44(uVar8 >> 0x18 | ( uVar8 & 0xff0000 ) >> 8 | ( uVar8 & 0xff00 ) << 8 | uVar8 << 0x18, uVar5 >> 0x18 | ( uVar5 & 0xff0000 ) >> 8 | ( uVar5 & 0xff00 ) << 8 | uVar5 << 0x18);
         if (uVar31 < 8) {
            if (( uVar31 & 4 ) == 0) {
               if (( uVar31 != 0 ) && ( *(char*)( (long)puVar26 + 0x14 ) = (char)lVar16(uVar31 & 2) != 0 )) {
                  *(short*)( (long)puVar26 + uVar28 + 0x12 ) = (short)lVar16;
               }
            } else {
               *(int*)( (long)puVar26 + 0x14 ) = (int)lVar16;
               *(int*)( (long)puVar26 + uVar28 + 0x10 ) = (int)lVar16;
            }
         } else {
            *(long*)( (long)puVar26 + 0x14 ) = lVar16;
            uVar18 = ( ulong )((long)puVar26 + 0x1c) & 0xfffffffffffffff8;
            *(long*)( (long)puVar26 + uVar28 + 0xc ) = lVar16;
            uVar31 = uVar31 + ( (int)(undefined1*)( (long)puVar26 + 0x14 ) - (int)uVar18 ) & 0xfffffff8;
            if (7 < uVar31) {
               uVar29 = 0;
               do {
                  uVar20 = (ulong)uVar29;
                  uVar29 = uVar29 + 8;
                  *(long*)( uVar18 + uVar20 ) = lVar16;
               } while ( uVar29 < uVar31 );
            }
         }
         iVar15 = uVar22 + uVar21 + 0x14;
         puVar33 = (undefined1*)( (long)puVar26 + 0x14 ) + uVar28;
         uVar24 = uVar24 + 1;
         ppuVar25 = local_760 + 5;
         puVar30 = puVar30 + 1;
         *(uint*)( local_760 + 2 ) = ( uint )(( 1 - local_768 ) + iVar15) >> 4;
         *param_2 = *(undefined1*)( param_1 + 0x1d8 );
         param_2[1] = *(undefined1*)( param_1 + 0x1d9 );
         param_2[2] = *(undefined1*)( param_1 + 0x1da );
         uVar14 = (short)iVar15 + 0x11;
         *(ushort*)( param_2 + 3 ) = uVar14 * 0x100 | uVar14 >> 8;
         local_798 = local_798 + ( ulong )(iVar15 + 0x16);
         if (uVar2 == uVar24) break;
         param_2 = puVar33;
         local_760 = ppuVar25;
         uVar21 = local_7a4;
         if (uVar24 != uVar2 - 1) {
            uVar21 = local_7a8;
         }
      };
   }
   local_760 = local_648;
   aesni_multi_cbc_encrypt(local_760, param_1, param_5);
   OPENSSL_cleanse(local_508, 0x400);
   OPENSSL_cleanse(local_100, 0xa0);
   LAB_001015a9:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return local_798;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ulong aesni_cbc_hmac_sha1_ctrl(undefined8 param_1, undefined4 param_2, int param_3, undefined8 *param_4) {
   SHA_CTX *c;
   long lVar1;
   undefined8 uVar2;
   ushort uVar3;
   int iVar4;
   uint uVar5;
   long lVar6;
   ulong uVar7;
   ushort uVar8;
   uint uVar9;
   byte bVar10;
   long in_FS_OFFSET;
   undefined1 local_88[16];
   undefined1 local_78[16];
   undefined1 local_68[16];
   undefined1 local_58[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar6 = EVP_CIPHER_CTX_get_cipher_data();
   switch (param_2) {
      case 0x16:
    if (param_3 == 0xd) {
      uVar8 = *(ushort *)((long)param_4 + 0xb) << 8 | *(ushort *)((long)param_4 + 0xb) >> 8;
      uVar9 = (uint)uVar8;
      iVar4 = EVP_CIPHER_CTX_is_encrypting(param_1);
      if (iVar4 == 0) {
        *(undefined8 *)(lVar6 + 0x220) = *param_4;
        uVar2 = *(undefined8 *)((long)param_4 + 5);
        *(undefined8 *)(lVar6 + 0x218) = 0xd;
        *(undefined8 *)(lVar6 + 0x225) = uVar2;
        uVar7 = 0x14;
        goto LAB_00101ff0;
      }
      *(ulong *)(lVar6 + 0x218) = (ulong)uVar8;
      uVar3 = *(ushort *)((long)param_4 + 9) << 8 | *(ushort *)((long)param_4 + 9) >> 8;
      *(uint *)(lVar6 + 0x220) = (uint)uVar3;
      if (0x301 < uVar3) {
        if (uVar8 < 0x10) {
LAB_001022e1:
          uVar7 = 0;
          goto LAB_00101ff0;
        }
        uVar9 = uVar8 - 0x10;
        *(ushort *)((long)param_4 + 0xb) = (ushort)uVar9 << 8 | (ushort)uVar9 >> 8;
      }
      *(undefined8 *)(lVar6 + 0x1b4) = *(undefined8 *)(lVar6 + 0xf4);
      *(undefined8 *)(lVar6 + 0x1bc) = *(undefined8 *)(lVar6 + 0xfc);
      *(undefined8 *)(lVar6 + 0x1c4) = *(undefined8 *)(lVar6 + 0x104);
      *(undefined8 *)(lVar6 + 0x1cc) = *(undefined8 *)(lVar6 + 0x10c);
      *(undefined8 *)(lVar6 + 0x1d4) = *(undefined8 *)(lVar6 + 0x114);
      *(undefined8 *)(lVar6 + 0x1dc) = *(undefined8 *)(lVar6 + 0x11c);
      *(undefined8 *)(lVar6 + 0x1e4) = *(undefined8 *)(lVar6 + 0x124);
      *(undefined8 *)(lVar6 + 0x1ec) = *(undefined8 *)(lVar6 + 300);
      *(undefined8 *)(lVar6 + 500) = *(undefined8 *)(lVar6 + 0x134);
      *(undefined8 *)(lVar6 + 0x1fc) = *(undefined8 *)(lVar6 + 0x13c);
      *(undefined8 *)(lVar6 + 0x204) = *(undefined8 *)(lVar6 + 0x144);
      *(undefined8 *)(lVar6 + 0x20c) = *(undefined8 *)(lVar6 + 0x14c);
      sha1_update(lVar6 + 0x1b4,param_4,0xd);
      uVar7 = (ulong)((uVar9 + 0x24 & 0xfffffff0) - uVar9);
      goto LAB_00101ff0;
    }
    break;
      case 0x17:
    local_88 = (undefined1  [16])0x0;
    local_78 = (undefined1  [16])0x0;
    local_68 = (undefined1  [16])0x0;
    local_58 = (undefined1  [16])0x0;
    if (param_3 < 0x41) {
      __memcpy_chk(local_88,param_4,(long)param_3,0x40);
    }
    else {
      c = (SHA_CTX *)(lVar6 + 0xf4);
      SHA1_Init(c);
      sha1_update(c,param_4,(long)param_3);
      SHA1_Final(local_88,c);
    }
    local_88._0_8_ = local_88._0_8_ ^ __LC2;
    local_88._8_8_ = local_88._8_8_ ^ _UNK_00102788;
    local_78._0_8_ = local_78._0_8_ ^ __LC2;
    local_78._8_8_ = local_78._8_8_ ^ _UNK_00102788;
    local_68._0_8_ = local_68._0_8_ ^ __LC2;
    local_68._8_8_ = local_68._8_8_ ^ _UNK_00102788;
    local_58._0_8_ = __LC2 ^ local_58._0_8_;
    local_58._8_8_ = _UNK_00102788 ^ local_58._8_8_;
    SHA1_Init((SHA_CTX *)(lVar6 + 0xf4));
    sha1_update((SHA_CTX *)(lVar6 + 0xf4),local_88,0x40);
    local_88._8_8_ = local_88._8_8_ ^ _UNK_00102798;
    local_88._0_8_ = local_88._0_8_ ^ __LC3;
    local_78._8_8_ = local_78._8_8_ ^ _UNK_00102798;
    local_78._0_8_ = local_78._0_8_ ^ __LC3;
    local_68._8_8_ = local_68._8_8_ ^ _UNK_00102798;
    local_68._0_8_ = local_68._0_8_ ^ __LC3;
    local_58._8_8_ = _UNK_00102798 ^ local_58._8_8_;
    local_58._0_8_ = __LC3 ^ local_58._0_8_;
    SHA1_Init((SHA_CTX *)(lVar6 + 0x154));
    sha1_update((SHA_CTX *)(lVar6 + 0x154),local_88,0x40);
    OPENSSL_cleanse(local_88,0x40);
    uVar7 = 1;
    goto LAB_00101ff0;
      case 0x19:
    if (0x1f < param_3) {
      uVar8 = *(ushort *)(param_4[1] + 0xb) << 8 | *(ushort *)(param_4[1] + 0xb) >> 8;
      uVar9 = (uint)uVar8;
      iVar4 = EVP_CIPHER_CTX_is_encrypting(param_1);
      if ((iVar4 != 0) &&
         (lVar1 = param_4[1], uVar3 = *(ushort *)(lVar1 + 9),
         0x301 < (ushort)(uVar3 << 8 | uVar3 >> 8))) {
        if (uVar8 == 0) {
          uVar5 = *(uint *)(param_4 + 3) >> 2;
          if (7 < *(uint *)(param_4 + 3) - 4) break;
          uVar9 = *(uint *)(param_4 + 2);
          bVar10 = (char)uVar5 + 1;
          iVar4 = uVar5 << 2;
        }
        else {
          if (uVar8 < 0x1000) goto LAB_001022e1;
          if (uVar8 < 0x2000) {
            iVar4 = 4;
            bVar10 = 2;
          }
          else {
            iVar4 = (-(uint)((_EVP_CIPHER_set_asn1_iv & 0x20) == 0) & 0xfffffffc) + 8;
            bVar10 = 3 - ((_EVP_CIPHER_set_asn1_iv & 0x20) == 0);
          }
        }
        *(undefined8 *)(lVar6 + 0x1b4) = *(undefined8 *)(lVar6 + 0xf4);
        *(undefined8 *)(lVar6 + 0x1bc) = *(undefined8 *)(lVar6 + 0xfc);
        *(undefined8 *)(lVar6 + 0x1c4) = *(undefined8 *)(lVar6 + 0x104);
        *(undefined8 *)(lVar6 + 0x1cc) = *(undefined8 *)(lVar6 + 0x10c);
        *(undefined8 *)(lVar6 + 0x1d4) = *(undefined8 *)(lVar6 + 0x114);
        *(undefined8 *)(lVar6 + 0x1dc) = *(undefined8 *)(lVar6 + 0x11c);
        *(undefined8 *)(lVar6 + 0x1e4) = *(undefined8 *)(lVar6 + 0x124);
        *(undefined8 *)(lVar6 + 0x1ec) = *(undefined8 *)(lVar6 + 300);
        *(undefined8 *)(lVar6 + 500) = *(undefined8 *)(lVar6 + 0x134);
        *(undefined8 *)(lVar6 + 0x1fc) = *(undefined8 *)(lVar6 + 0x13c);
        *(undefined8 *)(lVar6 + 0x204) = *(undefined8 *)(lVar6 + 0x144);
        *(undefined8 *)(lVar6 + 0x20c) = *(undefined8 *)(lVar6 + 0x14c);
        sha1_update(lVar6 + 0x1b4,lVar1,0xd);
        uVar5 = uVar9 >> (bVar10 & 0x1f);
        uVar9 = (uVar9 + uVar5) - (uVar5 << (bVar10 & 0x1f));
        if ((uVar5 < uVar9) && ((uVar9 + 0x16 & 0x3f) < iVar4 - 1U)) {
          uVar5 = uVar5 + 1;
          uVar9 = (uVar9 - iVar4) + 1;
        }
        *(int *)(param_4 + 3) = iVar4;
        iVar4 = (uVar5 + 0x24 & 0xfffffff0) + 0x15;
        uVar7 = (ulong)(((uVar9 + 0x24 & 0xfffffff0) + 0x15 + (iVar4 << (bVar10 & 0x1f))) - iVar4);
        goto LAB_00101ff0;
      }
    }
    break;
      case 0x1a:
    uVar7 = tls1_1_multi_block_encrypt
                      (lVar6,*param_4,param_4[1],param_4[2],*(uint *)(param_4 + 3) >> 2);
    goto LAB_00101ff0;
      case 0x1c:
    uVar7 = (ulong)((param_3 + 0x24U & 0xfffffff0) + 0x15);
    goto LAB_00101ff0;
   }
   uVar7 = 0xffffffff;
   LAB_00101ff0:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar7;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* WARNING: Unknown calling convention -- yet parameter storage is locked */EVP_CIPHER *EVP_aes_128_cbc_hmac_sha1(void) {
   undefined1 *puVar1;
   puVar1 = aesni_128_cbc_hmac_sha1_cipher;
   if (( DAT_001030b7 & 2 ) == 0) {
      puVar1 = (undefined1*)0x0;
   }
   return (EVP_CIPHER*)puVar1;
}/* WARNING: Unknown calling convention -- yet parameter storage is locked */EVP_CIPHER *EVP_aes_256_cbc_hmac_sha1(void) {
   undefined1 *puVar1;
   puVar1 = aesni_256_cbc_hmac_sha1_cipher;
   if (( DAT_001030b7 & 2 ) == 0) {
      puVar1 = (undefined1*)0x0;
   }
   return (EVP_CIPHER*)puVar1;
}
