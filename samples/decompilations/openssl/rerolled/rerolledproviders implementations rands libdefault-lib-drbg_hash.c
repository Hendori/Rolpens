undefined1 *drbg_hash_gettable_ctx_params(void) {
   return known_gettable_ctx_params_1;
}
undefined1 *drbg_hash_settable_ctx_params(void) {
   return known_settable_ctx_params_0;
}
undefined4 drbg_hash_verify_zeroization(long *param_1) {
   long lVar1;
   int iVar2;
   char *pcVar3;
   undefined4 uVar4;
   long lVar5;
   lVar1 = param_1[0x1e];
   lVar5 = *param_1;
   if (lVar5 != 0) {
      iVar2 = CRYPTO_THREAD_read_lock();
      if (iVar2 == 0) {
         return 0;
      }

      lVar5 = *param_1;
   }

   pcVar3 = (char*)( lVar1 + 0x28 );
   for (int i = 0; i < 3; i++) {
      do {
         if (*pcVar3 != '\0') goto LAB_0010006e;
         pcVar3 = pcVar3 + 1;
      }
 while ( pcVar3 != (char*)( lVar1 + ( 111*i + 151 ) ) );
   }

   uVar4 = 1;
   LAB_00100070:if (lVar5 != 0) {
      CRYPTO_THREAD_unlock();
   }

   return uVar4;
   LAB_0010006e:uVar4 = 0;
   goto LAB_00100070;
}
undefined4 drbg_hash_get_ctx_params(long *param_1, undefined8 param_2) {
   int iVar1;
   undefined4 uVar2;
   long lVar3;
   long lVar4;
   undefined8 uVar5;
   long in_FS_OFFSET;
   int local_34;
   long local_30;
   lVar4 = param_1[0x1e];
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_34 = 0;
   iVar1 = ossl_drbg_get_ctx_params_no_lock(param_1, param_2, &local_34);
   if (iVar1 == 0) {
      LAB_001001c0:uVar2 = 0;
      goto LAB_00100196;
   }

   if (local_34 != 0) {
      uVar2 = 1;
      goto LAB_00100196;
   }

   if (*param_1 != 0) {
      iVar1 = CRYPTO_THREAD_read_lock();
      if (iVar1 == 0) goto LAB_001001c0;
   }

   lVar3 = OSSL_PARAM_locate(param_2, "digest");
   if (lVar3 == 0) {
      LAB_00100171:uVar2 = ossl_drbg_get_ctx_params(param_1, param_2);
   }
 else {
      lVar4 = ossl_prov_digest_md(lVar4);
      uVar2 = 0;
      if (lVar4 != 0) {
         uVar5 = EVP_MD_get0_name(lVar4);
         iVar1 = OSSL_PARAM_set_utf8_string(lVar3, uVar5);
         if (iVar1 != 0) goto LAB_00100171;
      }

   }

   if (*param_1 != 0) {
      CRYPTO_THREAD_unlock();
   }

   LAB_00100196:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void drbg_hash_reseed_wrapper(void) {
   ossl_prov_drbg_reseed();
   return;
}
void drbg_hash_generate_wrapper(void) {
   ossl_prov_drbg_generate();
   return;
}
void drbg_hash_uninstantiate(long param_1) {
   long lVar1;
   lVar1 = *(long*)( param_1 + 0xf0 );
   for (int i = 0; i < 3; i++) {
      OPENSSL_cleanse((void*)( lVar1 + ( 111*i + 40 ) ), 111);
   }

   ossl_prov_drbg_uninstantiate(param_1);
   return;
}
void drbg_hash_free(long param_1) {
   long lVar1;
   if (( param_1 != 0 ) && ( lVar1 = lVar1 != 0 )) {
      EVP_MD_CTX_free(*(undefined8*)( lVar1 + 0x18 ));
      ossl_prov_digest_reset(lVar1);
      CRYPTO_secure_clear_free(lVar1, 0x178, "providers/implementations/rands/drbg_hash.c", 0x1cd);
   }

   ossl_rand_drbg_free(param_1);
   return;
}
void drbg_hash_new_wrapper(void) {
   ossl_rand_drbg_new();
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */undefined8 drbg_hash_new(long param_1) {
   undefined8 uVar1;
   undefined8 uVar2;
   long lVar3;
   lVar3 = CRYPTO_secure_zalloc(0x178, "providers/implementations/rands/drbg_hash.c", 0x1aa);
   uVar2 = _UNK_00101478;
   uVar1 = __LC2;
   if (lVar3 != 0) {
      *(long*)( param_1 + 0xf0 ) = lVar3;
      *(undefined8*)( param_1 + 0xe0 ) = 0x6f;
      *(undefined8*)( param_1 + 0x90 ) = 0x7fffffff;
      *(undefined8*)( param_1 + 0xb0 ) = 0x7fffffff;
      *(undefined8*)( param_1 + 0x80 ) = 0x10000;
      *(undefined8*)( param_1 + 0xa0 ) = uVar1;
      *(undefined8*)( param_1 + 0xa8 ) = uVar2;
      return 1;
   }

   return 0;
}
undefined8 drbg_hash_set_ctx_params_locked(long param_1, undefined8 param_2) {
   long lVar1;
   int iVar2;
   undefined8 uVar3;
   long lVar4;
   ulong uVar5;
   long lVar6;
   uint uVar7;
   lVar1 = *(long*)( param_1 + 0xf0 );
   uVar3 = ossl_prov_ctx_get0_libctx(*(undefined8*)( param_1 + 8 ));
   ERR_set_mark();
   lVar4 = OSSL_PARAM_locate_const(param_2, "provider-name");
   if (( ( lVar4 != 0 ) && ( *(int*)( lVar4 + 8 ) == 4 ) ) && ( lVar4 = lVar4 != 0 )) {
      lVar6 = OSSL_PARAM_locate_const(param_2, "digest");
      if (lVar6 == 0) {
         ossl_provider_free(lVar4);
         ERR_clear_last_mark();
         goto LAB_001003c1;
      }

      if (( *(int*)( lVar6 + 8 ) == 4 ) && ( lVar6 = evp_digest_fetch_from_prov(lVar4, *(undefined8*)( lVar6 + 0x10 ), 0) ),lVar6 != 0) {
         EVP_MD_free(0);
         ossl_provider_free(lVar4);
         ERR_clear_last_mark();
         ossl_prov_digest_set_md(lVar1, lVar6);
         goto LAB_001003c1;
      }

      ossl_provider_free(lVar4);
   }

   ERR_pop_to_mark();
   iVar2 = ossl_prov_digest_load_from_params(lVar1, param_2, uVar3);
   if (iVar2 == 0) {
      return 0;
   }

   LAB_001003c1:lVar4 = ossl_prov_digest_md(lVar1);
   if (lVar4 != 0) {
      iVar2 = ossl_drbg_verify_digest(param_1, uVar3, lVar4);
      if (( iVar2 == 0 ) || ( iVar2 = iVar2 < 1 )) {
         return 0;
      }

      uVar5 = (ulong)iVar2;
      *(ulong*)( lVar1 + 0x20 ) = uVar5;
      uVar7 = (int)( uVar5 >> 3 ) << 6;
      if (0x100 < uVar7) {
         uVar7 = 0x100;
      }

      *(uint*)( param_1 + 0x78 ) = uVar7;
      *(ulong*)( param_1 + 0x88 ) = ( ulong )(uVar7 >> 3);
      *(ulong*)( param_1 + 0xe0 ) = ( -(ulong)(uVar5 < 0x21) & 0xffffffffffffffc8 ) + 0x6f;
      *(ulong*)( param_1 + 0x98 ) = ( ulong )(uVar7 >> 4);
   }

   uVar3 = ossl_drbg_set_ctx_params(param_1, param_2);
   return uVar3;
}
undefined4 drbg_hash_set_ctx_params(long *param_1, undefined8 param_2) {
   int iVar1;
   undefined4 uVar2;
   if (( *param_1 != 0 ) && ( iVar1 = iVar1 == 0 )) {
      return 0;
   }

   uVar2 = drbg_hash_set_ctx_params_locked(param_1, param_2);
   if (*param_1 != 0) {
      CRYPTO_THREAD_unlock();
   }

   return uVar2;
}
undefined4 drbg_hash_instantiate_wrapper(long *param_1, undefined4 param_2, undefined4 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6) {
   int iVar1;
   undefined4 uVar2;
   if (( *param_1 != 0 ) && ( iVar1 = iVar1 == 0 )) {
      return 0;
   }

   iVar1 = ossl_prov_is_running();
   if (( iVar1 == 0 ) || ( iVar1 = iVar1 == 0 )) {
      uVar2 = 0;
   }
 else {
      uVar2 = ossl_prov_drbg_instantiate(param_1, param_2, param_3, param_4, param_5);
   }

   if (*param_1 != 0) {
      CRYPTO_THREAD_unlock();
   }

   return uVar2;
}
undefined8 hash_df_isra_0(size_t param_1, long param_2, uchar *param_3, char param_4, void *param_5, size_t param_6, void *param_7, size_t param_8, void *param_9, size_t param_10) {
   uchar *md;
   EVP_MD_CTX *ctx;
   uint uVar1;
   int iVar2;
   EVP_MD *pEVar3;
   undefined8 uVar4;
   size_t cnt;
   long in_FS_OFFSET;
   char local_46;
   uint local_45;
   char local_41;
   long local_40;
   cnt = 5;
   ctx = *(EVP_MD_CTX**)( param_2 + 0x18 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar1 = (int)param_1 * 8;
   local_46 = '\x01';
   local_45 = uVar1 >> 0x18 | ( uVar1 & 0xff0000 ) >> 8 | ( uVar1 & 0xff00 ) << 8 | (int)param_1 << 0x1b;
   if (param_4 != -1) {
      cnt = 6;
      local_41 = param_4;
   }

   if (param_7 == (void*)0x0) {
      if (param_9 == (void*)0x0) {
         while (true) {
            pEVar3 = (EVP_MD*)ossl_prov_digest_md(param_2);
            iVar2 = EVP_DigestInit_ex(ctx, pEVar3, (ENGINE*)0x0);
            if (( ( iVar2 == 0 ) || ( iVar2 = iVar2 == 0 ) ) || ( iVar2 = iVar2 == 0 )) break;
            if (param_1 < *(ulong*)( param_2 + 0x20 )) goto LAB_001008a8;
            iVar2 = EVP_DigestFinal(ctx, param_3, (uint*)0x0);
            if (iVar2 == 0) break;
            param_1 = param_1 - *(long*)( param_2 + 0x20 );
            if (param_1 == 0) goto LAB_001008e0;
            local_46 = local_46 + '\x01';
            param_3 = param_3 + *(long*)( param_2 + 0x20 );
         }
;
      }
 else {
         while (true) {
            pEVar3 = (EVP_MD*)ossl_prov_digest_md(param_2);
            iVar2 = EVP_DigestInit_ex(ctx, pEVar3, (ENGINE*)0x0);
            if (( ( iVar2 == 0 ) || ( iVar2 = iVar2 == 0 ) ) || ( ( iVar2 = EVP_DigestUpdate(ctx, param_5, param_6) ),iVar2 == 0 || ( iVar2 = EVP_DigestUpdate(ctx, param_9, param_10) ),iVar2 == 0 )) break;
            if (param_1 < *(ulong*)( param_2 + 0x20 )) goto LAB_001008a8;
            iVar2 = EVP_DigestFinal(ctx, param_3, (uint*)0x0);
            if (iVar2 == 0) break;
            param_1 = param_1 - *(long*)( param_2 + 0x20 );
            if (param_1 == 0) goto LAB_001008e0;
            local_46 = local_46 + '\x01';
            param_3 = param_3 + *(long*)( param_2 + 0x20 );
         }
;
      }

   }
 else {
      while (true) {
         pEVar3 = (EVP_MD*)ossl_prov_digest_md(param_2);
         iVar2 = EVP_DigestInit_ex(ctx, pEVar3, (ENGINE*)0x0);
         if (( ( ( iVar2 == 0 ) || ( iVar2 = EVP_DigestUpdate(ctx, &local_46, cnt) ),iVar2 == 0 ) ) || ( iVar2 = iVar2 == 0 )) break;
         if (param_1 < *(ulong*)( param_2 + 0x20 )) goto LAB_001008a8;
         iVar2 = EVP_DigestFinal(ctx, param_3, (uint*)0x0);
         if (iVar2 == 0) break;
         param_1 = param_1 - *(long*)( param_2 + 0x20 );
         if (param_1 == 0) goto LAB_001008e0;
         local_46 = local_46 + '\x01';
         param_3 = param_3 + *(long*)( param_2 + 0x20 );
      }
;
   }

   LAB_00100748:uVar4 = 0;
   LAB_0010074a:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar4;
   LAB_001008a8:md = (uchar*)( param_2 + 0x106 );
   iVar2 = EVP_DigestFinal(ctx, md, (uint*)0x0);
   if (iVar2 != 0) {
      memcpy(param_3, md, param_1);
      OPENSSL_cleanse(md, *(size_t*)( param_2 + 0x20 ));
      LAB_001008e0:uVar4 = 1;
      goto LAB_0010074a;
   }

   goto LAB_00100748;
}
bool drbg_hash_instantiate(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7) {
   long lVar1;
   int iVar2;
   long lVar3;
   lVar1 = *(long*)( param_1 + 0xf0 );
   EVP_MD_CTX_free(*(undefined8*)( lVar1 + 0x18 ));
   lVar3 = EVP_MD_CTX_new();
   *(long*)( lVar1 + 0x18 ) = lVar3;
   if (lVar3 != 0) {
      iVar2 = hash_df_isra_0(*(undefined8*)( param_1 + 0xe0 ), *(undefined8*)( param_1 + 0xf0 ), lVar1 + 0x28, 0xff, param_2, param_3, param_4, param_5, param_6, param_7);
      if (iVar2 != 0) {
         iVar2 = hash_df_isra_0(*(undefined8*)( param_1 + 0xe0 ), *(undefined8*)( param_1 + 0xf0 ), lVar1 + 0x97, 0, lVar1 + 0x28, *(undefined8*)( param_1 + 0xe0 ), 0, 0, 0, 0);
         return iVar2 != 0;
      }

   }

   return false;
}
void drbg_hash_reseed(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5) {
   void *__dest;
   void *__src;
   long lVar1;
   int iVar2;
   lVar1 = *(long*)( param_1 + 0xf0 );
   __dest = (void*)( lVar1 + 0x28 );
   __src = (void*)( lVar1 + 0x97 );
   iVar2 = hash_df_isra_0(*(undefined8*)( param_1 + 0xe0 ), lVar1, __src, 1, __dest, *(undefined8*)( param_1 + 0xe0 ), param_2, param_3, param_4, param_5);
   if (iVar2 != 0) {
      memcpy(__dest, __src, *(size_t*)( param_1 + 0xe0 ));
      hash_df_isra_0(*(undefined8*)( param_1 + 0xe0 ), *(undefined8*)( param_1 + 0xf0 ), __src, 0, __dest, *(undefined8*)( param_1 + 0xe0 ), 0, 0, 0, 0);
   }

   return;
}
undefined4 drbg_hash_uninstantiate_wrapper(long *param_1) {
   long lVar1;
   int iVar2;
   undefined4 uVar3;
   if (( *param_1 != 0 ) && ( iVar2 = iVar2 == 0 )) {
      return 0;
   }

   lVar1 = param_1[0x1e];
   for (int i = 0; i < 3; i++) {
      OPENSSL_cleanse((void*)( lVar1 + ( 111*i + 40 ) ), 111);
   }

   uVar3 = ossl_prov_drbg_uninstantiate(param_1);
   if (*param_1 != 0) {
      CRYPTO_THREAD_unlock();
   }

   return uVar3;
}
undefined8 add_hash_to_v(long param_1, undefined1 param_2, void *param_3, size_t param_4) {
   byte bVar1;
   long lVar2;
   EVP_MD_CTX *ctx;
   long lVar3;
   int iVar4;
   int iVar5;
   EVP_MD *type;
   byte *pbVar6;
   byte *pbVar7;
   byte *pbVar8;
   byte *pbVar9;
   undefined1 local_3c[12];
   lVar2 = *(long*)( param_1 + 0xf0 );
   ctx = *(EVP_MD_CTX**)( lVar2 + 0x18 );
   local_3c[0] = param_2;
   type = (EVP_MD*)ossl_prov_digest_md(lVar2);
   iVar4 = EVP_DigestInit_ex(ctx, type, (ENGINE*)0x0);
   if (( ( ( ( iVar4 != 0 ) && ( iVar4 = EVP_DigestUpdate(ctx, local_3c, 1) ),iVar4 != 0 ) ) && ( iVar4 = EVP_DigestUpdate(ctx, (void*)( lVar2 + 0x28 ), *(size_t*)( param_1 + 0xe0 )) ),iVar4 != 0 )) &&( ( param_3 == (void*)0x0 || ( iVar4 = iVar4 != 0 ) ) ) && ( iVar4 = iVar4 != 0 ) * (long*)( lVar2 + 0x20 );
   pbVar9 = (byte*)( lVar2 + 0x105 + lVar3 );
   pbVar6 = (byte*)( lVar2 + 0x27 + *(long*)( param_1 + 0xe0 ) );
   if (lVar3 != 0) {
      iVar4 = 0;
      pbVar8 = pbVar6 + -lVar3;
      do {
         bVar1 = *pbVar9;
         pbVar7 = pbVar6 + -1;
         pbVar9 = pbVar9 + -1;
         iVar5 = ( uint ) * pbVar6 + (uint)bVar1 + iVar4;
         *pbVar6 = (byte)iVar5;
         iVar4 = iVar5 >> 8;
         pbVar6 = pbVar7;
      }
 while ( pbVar8 != pbVar7 );
      if (( (char)( (uint)iVar5 >> 8 ) != '\0' ) && ( *(long*)( param_1 + 0xe0 ) != lVar3 )) {
         pbVar9 = pbVar8 + ( lVar3 - *(long*)( param_1 + 0xe0 ) );
         do {
            *pbVar8 = *pbVar8 + 1;
            if (*pbVar8 != 0) {
               return 1;
            }

            pbVar8 = pbVar8 + -1;
         }
 while ( pbVar9 != pbVar8 );
      }

   }

   return 1;
}
return 0;}undefined8 drbg_hash_generate(long param_1, uchar *param_2, ulong param_3, long param_4, long param_5) {
   uchar *md;
   byte bVar1;
   long lVar2;
   long lVar3;
   int iVar4;
   int iVar5;
   uint uVar6;
   EVP_MD *type;
   uint uVar7;
   byte *pbVar8;
   byte *pbVar9;
   long lVar10;
   uint uVar11;
   byte *pbVar12;
   uint uVar13;
   byte *pbVar14;
   lVar2 = *(long*)( param_1 + 0xf0 );
   uVar6 = *(uint*)( param_1 + 0xb8 );
   if (*(long*)( lVar2 + 0x18 ) != 0) {
      lVar10 = lVar2;
      if (( param_4 != 0 ) && ( param_5 != 0 )) {
         iVar4 = add_hash_to_v(param_1, 2, param_4);
         if (iVar4 == 0) {
            return 0;
         }

         lVar10 = *(long*)( param_1 + 0xf0 );
      }

      if (param_3 != 0) {
         md = (uchar*)( lVar10 + 0x106 );
         memcpy(md, (void*)( lVar10 + 0x28 ), *(size_t*)( param_1 + 0xe0 ));
         do {
            type = (EVP_MD*)ossl_prov_digest_md(lVar10);
            iVar4 = EVP_DigestInit_ex(*(EVP_MD_CTX**)( lVar10 + 0x18 ), type, (ENGINE*)0x0);
            if (iVar4 == 0) {
               return 0;
            }

            iVar4 = EVP_DigestUpdate(*(EVP_MD_CTX**)( lVar10 + 0x18 ), md, *(size_t*)( param_1 + 0xe0 ));
            if (iVar4 == 0) {
               return 0;
            }

            if (param_3 < *(ulong*)( lVar10 + 0x20 )) {
               iVar4 = EVP_DigestFinal(*(EVP_MD_CTX**)( lVar10 + 0x18 ), md, (uint*)0x0);
               if (iVar4 == 0) {
                  return 0;
               }

               memcpy(param_2, md, param_3);
               break;
            }

            iVar4 = EVP_DigestFinal(*(EVP_MD_CTX**)( lVar10 + 0x18 ), param_2, (uint*)0x0);
            if (iVar4 == 0) {
               return 0;
            }

            param_3 = param_3 - *(long*)( lVar10 + 0x20 );
            if (param_3 == 0) break;
            param_2 = param_2 + *(long*)( lVar10 + 0x20 );
            pbVar9 = (byte*)( lVar10 + 0x105 + *(long*)( param_1 + 0xe0 ) );
            bVar1 = *pbVar9;
            *pbVar9 = bVar1 + 1;
            if (( bVar1 + 1 >> 8 != 0 ) && ( lVar3 = lVar3 != 1 )) {
               pbVar12 = pbVar9 + -1;
               do {
                  *pbVar12 = *pbVar12 + 1;
                  if (*pbVar12 != 0) break;
                  pbVar12 = pbVar12 + -1;
               }
 while ( pbVar12 + ( lVar3 - (long)pbVar9 ) != (byte*)0x0 );
            }

         }
 while ( true );
      }

      iVar4 = add_hash_to_v(param_1, 3, 0);
      if (iVar4 != 0) {
         lVar10 = *(long*)( param_1 + 0xe0 );
         pbVar9 = (byte*)( lVar2 + 0x28 + lVar10 + -1 );
         pbVar12 = (byte*)( lVar2 + 0x97 + lVar10 + -1 );
         if (lVar10 != 0) {
            pbVar14 = (byte*)( lVar2 + 0x27 );
            iVar4 = 0;
            do {
               bVar1 = *pbVar12;
               pbVar8 = pbVar9 + -1;
               pbVar12 = pbVar12 + -1;
               iVar5 = ( uint ) * pbVar9 + (uint)bVar1 + iVar4;
               *pbVar9 = (byte)iVar5;
               iVar4 = iVar5 >> 8;
               pbVar9 = pbVar8;
            }
 while ( pbVar8 != pbVar14 );
            lVar3 = *(long*)( param_1 + 0xe0 );
            if (( (char)( (uint)iVar5 >> 8 ) == '\0' ) || ( lVar3 == lVar10 )) {
               pbVar9 = (byte*)( lVar2 + 0x27 + lVar3 );
            }
 else {
               do {
                  *pbVar14 = *pbVar14 + 1;
                  if (*pbVar14 != 0) break;
                  pbVar14 = pbVar14 + -1;
               }
 while ( pbVar14 != pbVar8 + ( lVar10 - lVar3 ) );
               pbVar9 = (byte*)( lVar2 + 0x27 + *(long*)( param_1 + 0xe0 ) );
            }

         }

         uVar7 = ( uint ) * pbVar9 + ( uVar6 & 0xff );
         uVar13 = ( uVar6 >> 8 & 0xff ) + (uint)pbVar9[-1] + ( (int)uVar7 >> 8 );
         uVar11 = ( (int)uVar6 >> 0x10 & 0xffU ) + (uint)pbVar9[-2] + ( (int)uVar13 >> 8 );
         uVar6 = ( uVar6 >> 0x18 ) + (uint)pbVar9[-3] + ( (int)uVar11 >> 8 );
         *(uint*)( pbVar9 + -3 ) = ( ( ( uVar7 & 0xff ) << 8 | uVar13 & 0xff ) << 8 | uVar11 & 0xff ) << 8 | uVar6 & 0xff;
         if (( uVar6 >> 8 != 0 ) && ( lVar2 = lVar2 != 4 )) {
            pbVar12 = pbVar9 + -4;
            do {
               *pbVar12 = *pbVar12 + 1;
               if (*pbVar12 != 0) {
                  return 1;
               }

               pbVar12 = pbVar12 + -1;
            }
 while ( pbVar12 + ( lVar2 - (long)pbVar9 ) != (byte*)0x0 );
         }

         return 1;
      }

   }

   return 0;
}

