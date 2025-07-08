undefined1 *kdf_pkcs12_settable_ctx_params(void) {
   return known_settable_ctx_params_2;
}
undefined1 *kdf_pkcs12_gettable_ctx_params(void) {
   return known_gettable_ctx_params_3;
}
undefined8 kdf_pkcs12_get_ctx_params(undefined8 param_1, undefined8 param_2) {
   long lVar1;
   undefined8 uVar2;
   lVar1 = OSSL_PARAM_locate(param_2, &_LC0);
   if (lVar1 != 0) {
      uVar2 = OSSL_PARAM_set_size_t(lVar1, 0xffffffffffffffff);
      return uVar2;
   }

   return 0xfffffffe;
}
undefined8 *kdf_pkcs12_new(undefined8 param_1) {
   int iVar1;
   undefined8 *puVar2;
   iVar1 = ossl_prov_is_running();
   puVar2 = (undefined8*)0x0;
   if (iVar1 != 0) {
      puVar2 = (undefined8*)CRYPTO_zalloc(0x50, "providers/implementations/kdfs/pkcs12kdf.c", 0x90);
      if (puVar2 != (undefined8*)0x0) {
         *puVar2 = param_1;
      }

   }

   return puVar2;
}
undefined1(*)[16];kdf_pkcs12_dup(undefined8 *param_1) {
   undefined8 uVar1;
   int iVar2;
   undefined1(*ptr)[16];
   uVar1 = *param_1;
   iVar2 = ossl_prov_is_running();
   if (( iVar2 != 0 ) && ( ptr = (undefined1(*) [16])CRYPTO_zalloc(0x50, "providers/implementations/kdfs/pkcs12kdf.c", 0x90) ),ptr != (undefined1(*) [16])0x0) {
      *(undefined8*)*ptr = uVar1;
      iVar2 = ossl_prov_memdup(param_1[6], param_1[7], ptr + 3, ptr[3] + 8);
      if (( iVar2 != 0 ) && ( ( iVar2 = ossl_prov_memdup(param_1[4], param_1[5], ptr + 2, ptr[2] + 8) ),iVar2 != 0 && ( iVar2 = ossl_prov_digest_copy(*ptr + 8, param_1 + 1) ),iVar2 != 0 )) {
         *(undefined8*)ptr[4] = param_1[8];
         *(undefined4*)( ptr[4] + 8 ) = *(undefined4*)( param_1 + 9 );
         return ptr;
      }

      ossl_prov_digest_reset(*ptr + 8);
      CRYPTO_free(*(void**)ptr[3]);
      CRYPTO_clear_free(*(undefined8*)ptr[2], *(undefined8*)( ptr[2] + 8 ), "providers/implementations/kdfs/pkcs12kdf.c", 0x9b);
      *ptr = (undefined1[16])0x0;
      for (int i = 0; i < 4; i++) {
         ptr[( i + 1 )] = (undefined1[16])0;
      }

      CRYPTO_free(ptr);
   }

   return (undefined1(*) [16])0x0;
}
void kdf_pkcs12_reset(undefined8 *param_1) {
   undefined8 uVar1;
   uVar1 = *param_1;
   ossl_prov_digest_reset(param_1 + 1);
   CRYPTO_free((void*)param_1[6]);
   CRYPTO_clear_free(param_1[4], param_1[5], "providers/implementations/kdfs/pkcs12kdf.c", 0x9b);
   param_1[9] = 0;
   *param_1 = uVar1;
   for (int i = 0; i < 4; i++) {
      *(undefined1(*) [16])( param_1 + ( 2*i + 1 ) ) = (undefined1[16])0;
   }

   return;
}
void kdf_pkcs12_free(undefined1 (*param_1)[16]) {
   if (param_1 != (undefined1(*) [16])0x0) {
      ossl_prov_digest_reset(*param_1 + 8);
      CRYPTO_free(*(void**)param_1[3]);
      CRYPTO_clear_free(*(undefined8*)param_1[2], *(undefined8*)( param_1[2] + 8 ), "providers/implementations/kdfs/pkcs12kdf.c", 0x9b);
      *param_1 = (undefined1[16])0x0;
      for (int i = 0; i < 4; i++) {
         param_1[( i + 1 )] = (undefined1[16])0;
      }

      CRYPTO_free(param_1);
      return;
   }

   return;
}
bool kdf_pkcs12_set_ctx_params(undefined8 *param_1, long *param_2) {
   long lVar1;
   int iVar2;
   undefined8 uVar3;
   long lVar4;
   void *pvVar5;
   uVar3 = ossl_prov_ctx_get0_libctx(*param_1);
   if (( param_2 != (long*)0x0 ) && ( *param_2 != 0 )) {
      iVar2 = ossl_prov_digest_load_from_params(param_1 + 1, param_2, uVar3);
      if (iVar2 == 0) {
         return false;
      }

      lVar4 = OSSL_PARAM_locate_const(param_2, &_LC2);
      if (lVar4 != 0) {
         CRYPTO_clear_free(param_1[4], param_1[5], "providers/implementations/kdfs/pkcs12kdf.c", 0xcc);
         param_1[5] = 0;
         lVar1 = *(long*)( lVar4 + 0x18 );
         param_1[4] = 0;
         if (lVar1 == 0) {
            pvVar5 = CRYPTO_malloc(1, "providers/implementations/kdfs/pkcs12kdf.c", 0xd1);
            param_1[4] = pvVar5;
            if (pvVar5 == (void*)0x0) {
               return false;
            }

         }
 else if (( *(long*)( lVar4 + 0x10 ) != 0 ) && ( iVar2 = OSSL_PARAM_get_octet_string(lVar4, param_1 + 4, 0, param_1 + 5) ),iVar2 == 0) {
            return false;
         }

      }

      lVar4 = OSSL_PARAM_locate_const(param_2, &_LC3);
      if (lVar4 != 0) {
         CRYPTO_clear_free(param_1[6], param_1[7], "providers/implementations/kdfs/pkcs12kdf.c", 0xcc);
         param_1[7] = 0;
         lVar1 = *(long*)( lVar4 + 0x18 );
         param_1[6] = 0;
         if (lVar1 == 0) {
            pvVar5 = CRYPTO_malloc(1, "providers/implementations/kdfs/pkcs12kdf.c", 0xd1);
            param_1[6] = pvVar5;
            if (pvVar5 == (void*)0x0) {
               return false;
            }

         }
 else if (( *(long*)( lVar4 + 0x10 ) != 0 ) && ( iVar2 = OSSL_PARAM_get_octet_string(lVar4, param_1 + 6, 0, param_1 + 7) ),iVar2 == 0) {
            return false;
         }

      }

      lVar4 = OSSL_PARAM_locate_const(param_2, &_LC4);
      if (( lVar4 != 0 ) && ( iVar2 = iVar2 == 0 )) {
         return false;
      }

      lVar4 = OSSL_PARAM_locate_const(param_2, &_LC5);
      if (lVar4 != 0) {
         iVar2 = OSSL_PARAM_get_uint64(lVar4, param_1 + 8);
         return iVar2 != 0;
      }

   }

   return true;
}
undefined4 kdf_pkcs12_derive(long param_1, void *param_2, ulong param_3, undefined8 param_4) {
   long lVar1;
   long lVar2;
   ulong uVar3;
   ulong uVar4;
   int iVar5;
   int num;
   uint uVar6;
   undefined4 uVar7;
   EVP_MD *type;
   EVP_MD_CTX *ctx;
   uchar *md;
   void *ptr;
   void *d;
   ulong uVar8;
   ulong uVar9;
   ulong uVar10;
   size_t sVar11;
   ulong cnt;
   void *pvVar12;
   ulong uVar13;
   size_t __n;
   ulong cnt_00;
   void *local_b0;
   ulong local_a8;
   void *local_a0;
   iVar5 = ossl_prov_is_running();
   if (( iVar5 == 0 ) || ( iVar5 = iVar5 == 0 )) {
      return 0;
   }

   if (*(long*)( param_1 + 0x20 ) == 0) {
      ERR_new();
      ERR_set_debug("providers/implementations/kdfs/pkcs12kdf.c", 0xe4, "kdf_pkcs12_derive");
      ERR_set_error(0x39, 0x82, 0);
      return 0;
   }

   if (*(long*)( param_1 + 0x30 ) == 0) {
      ERR_new();
      ERR_set_debug("providers/implementations/kdfs/pkcs12kdf.c", 0xe9, "kdf_pkcs12_derive");
      ERR_set_error(0x39, 0x83, 0);
      return 0;
   }

   type = (EVP_MD*)ossl_prov_digest_md(param_1 + 8);
   lVar1 = *(long*)( param_1 + 0x30 );
   lVar2 = *(long*)( param_1 + 0x20 );
   uVar3 = *(ulong*)( param_1 + 0x40 );
   uVar6 = *(uint*)( param_1 + 0x48 );
   uVar10 = *(ulong*)( param_1 + 0x38 );
   uVar4 = *(ulong*)( param_1 + 0x28 );
   ctx = (EVP_MD_CTX*)EVP_MD_CTX_new();
   if (ctx == (EVP_MD_CTX*)0x0) {
      ERR_new();
      ERR_set_debug("providers/implementations/kdfs/pkcs12kdf.c", 0x3f, "pkcs12kdf_derive");
      ERR_set_error(0x39, 0x80006, 0);
   }
 else {
      iVar5 = EVP_MD_get_block_size(type);
      __n = (size_t)iVar5;
      num = EVP_MD_get_size(type);
      if (( 0 < num ) && ( 0 < iVar5 )) {
         cnt_00 = (ulong)num;
         local_a0 = CRYPTO_malloc(iVar5, "providers/implementations/kdfs/pkcs12kdf.c", 0x4a);
         md = (uchar*)CRYPTO_malloc(num, "providers/implementations/kdfs/pkcs12kdf.c", 0x4b);
         ptr = CRYPTO_malloc(iVar5 + 1, "providers/implementations/kdfs/pkcs12kdf.c", 0x4c);
         uVar8 = ( uVar10 - 1 ) + __n;
         uVar8 = uVar8 - uVar8 % __n;
         if (uVar4 == 0) {
            uVar13 = 0;
            cnt = uVar8;
         }
 else {
            uVar13 = ( uVar4 - 1 ) + __n;
            uVar13 = uVar13 - uVar13 % __n;
            cnt = uVar8 + uVar13;
         }

         d = CRYPTO_malloc((int)cnt, "providers/implementations/kdfs/pkcs12kdf.c", 0x53);
         if (( ( ( local_a0 == (void*)0x0 ) || ( md == (uchar*)0x0 ) ) || ( ptr == (void*)0x0 ) ) || ( d == (void*)0x0 )) {
            LAB_0010083b:uVar7 = 0;
         }
 else {
            memset(local_a0, uVar6 & 0xff, __n);
            pvVar12 = d;
            if (uVar8 != 0) {
               uVar9 = 0;
               do {
                  *(undefined1*)( (long)d + uVar9 ) = *(undefined1*)( lVar1 + uVar9 % uVar10 );
                  uVar9 = uVar9 + 1;
               }
 while ( uVar8 != uVar9 );
               pvVar12 = (void*)( uVar8 + (long)d );
            }

            uVar10 = 0;
            local_b0 = param_2;
            local_a8 = param_3;
            if (uVar13 != 0) {
               do {
                  *(undefined1*)( (long)pvVar12 + uVar10 ) = *(undefined1*)( lVar2 + uVar10 % uVar4 );
                  uVar10 = uVar10 + 1;
               }
 while ( uVar13 != uVar10 );
            }

            while (iVar5 = EVP_DigestInit_ex(ctx, type, (ENGINE*)0x0),iVar5 != 0) {
               iVar5 = EVP_DigestUpdate(ctx, local_a0, __n);
               if (iVar5 == 0) {
                  uVar7 = 0;
                  goto LAB_0010088b;
               }

               iVar5 = EVP_DigestUpdate(ctx, d, cnt);
               if (( iVar5 == 0 ) || ( iVar5 = iVar5 == 0 )) break;
               uVar10 = 1;
               if (1 < uVar3) {
                  do {
                     iVar5 = EVP_DigestInit_ex(ctx, type, (ENGINE*)0x0);
                     if (( ( iVar5 == 0 ) || ( iVar5 = EVP_DigestUpdate(ctx, md, cnt_00) ),iVar5 == 0 )) goto LAB_0010083b;
                     uVar10 = uVar10 + 1;
                  }
 while ( uVar3 != uVar10 );
               }

               uVar10 = local_a8;
               if (cnt_00 <= local_a8) {
                  uVar10 = cnt_00;
               }

               memcpy(local_b0, md, uVar10);
               if (local_a8 <= cnt_00) {
                  uVar7 = 1;
                  goto LAB_0010088b;
               }

               local_a8 = local_a8 - cnt_00;
               uVar10 = 0;
               local_b0 = (void*)( (long)local_b0 + cnt_00 );
               do {
                  *(uchar*)( (long)ptr + uVar10 ) = md[uVar10 % cnt_00];
                  uVar10 = uVar10 + 1;
               }
 while ( uVar10 < __n );
               if (cnt != 0) {
                  uVar10 = 0;
                  pvVar12 = d;
                  do {
                     uVar6 = 1;
                     sVar11 = __n;
                     do {
                        sVar11 = sVar11 - 1;
                        uVar6 = uVar6 + ( uint ) * (byte*)( (long)pvVar12 + sVar11 ) + ( uint ) * (byte*)( (long)ptr + sVar11 );
                        *(char*)( (long)pvVar12 + sVar11 ) = (char)uVar6;
                        uVar6 = uVar6 >> 8;
                     }
 while ( sVar11 != 0 );
                     uVar10 = uVar10 + __n;
                     pvVar12 = (void*)( (long)pvVar12 + __n );
                  }
 while ( uVar10 < cnt );
               }

            }
;
            uVar7 = 0;
         }

         goto LAB_0010088b;
      }

      ERR_new();
      ERR_set_debug("providers/implementations/kdfs/pkcs12kdf.c", 0x45, "pkcs12kdf_derive");
      ERR_set_error(0x39, 0xda, 0);
   }

   local_a0 = (void*)0x0;
   uVar7 = 0;
   md = (uchar*)0x0;
   d = (void*)0x0;
   ptr = (void*)0x0;
   LAB_0010088b:CRYPTO_free(md);
   CRYPTO_free(ptr);
   CRYPTO_free(local_a0);
   CRYPTO_free(d);
   EVP_MD_CTX_free(ctx);
   return uVar7;
}

