undefined1 *kdf_pbkdf1_settable_ctx_params(void) {
   return known_settable_ctx_params_2;
}
undefined1 *kdf_pbkdf1_gettable_ctx_params(void) {
   return known_gettable_ctx_params_3;
}
undefined8 kdf_pbkdf1_get_ctx_params(undefined8 param_1, undefined8 param_2) {
   long lVar1;
   undefined8 uVar2;
   lVar1 = OSSL_PARAM_locate(param_2, &_LC0);
   if (lVar1 != 0) {
      uVar2 = OSSL_PARAM_set_size_t(lVar1, 0xffffffffffffffff);
      return uVar2;
   }

   return 0xfffffffe;
}
undefined8 *kdf_pbkdf1_new(undefined8 param_1) {
   int iVar1;
   undefined8 *puVar2;
   iVar1 = ossl_prov_is_running();
   puVar2 = (undefined8*)0x0;
   if (iVar1 != 0) {
      puVar2 = (undefined8*)CRYPTO_zalloc(0x48, "providers/implementations/kdfs/pbkdf1.c", 0x68);
      if (puVar2 != (undefined8*)0x0) {
         *puVar2 = param_1;
      }

   }

   return puVar2;
}
undefined1(*)[16];kdf_pbkdf1_dup(undefined8 *param_1) {
   undefined8 uVar1;
   int iVar2;
   undefined1(*ptr)[16];
   uVar1 = *param_1;
   iVar2 = ossl_prov_is_running();
   if (( iVar2 != 0 ) && ( ptr = (undefined1(*) [16])CRYPTO_zalloc(0x48, "providers/implementations/kdfs/pbkdf1.c", 0x68) ),ptr != (undefined1(*) [16])0x0) {
      *(undefined8*)*ptr = uVar1;
      iVar2 = ossl_prov_memdup(param_1[6], param_1[7], ptr + 3, ptr[3] + 8);
      if (( iVar2 != 0 ) && ( ( iVar2 = ossl_prov_memdup(param_1[4], param_1[5], ptr + 2, ptr[2] + 8) ),iVar2 != 0 && ( iVar2 = ossl_prov_digest_copy(*ptr + 8, param_1 + 1) ),iVar2 != 0 )) {
         *(undefined8*)ptr[4] = param_1[8];
         return ptr;
      }

      ossl_prov_digest_reset(*ptr + 8);
      CRYPTO_free(*(void**)ptr[3]);
      CRYPTO_clear_free(*(undefined8*)ptr[2], *(undefined8*)( ptr[2] + 8 ), "providers/implementations/kdfs/pbkdf1.c", 0x73);
      *(undefined8*)ptr[4] = 0;
      *ptr = (undefined1[16])0x0;
      for (int i = 0; i < 3; i++) {
         ptr[( i + 1 )] = (undefined1[16])0;
      }

      CRYPTO_free(ptr);
   }

   return (undefined1(*) [16])0x0;
}
void kdf_pbkdf1_reset(undefined8 *param_1) {
   undefined8 uVar1;
   uVar1 = *param_1;
   ossl_prov_digest_reset(param_1 + 1);
   CRYPTO_free((void*)param_1[6]);
   CRYPTO_clear_free(param_1[4], param_1[5], "providers/implementations/kdfs/pbkdf1.c", 0x73);
   *param_1 = uVar1;
   for (int i = 0; i < 4; i++) {
      *(undefined1(*) [16])( param_1 + ( 2*i + 1 ) ) = (undefined1[16])0;
   }

   return;
}
void kdf_pbkdf1_free(undefined1 (*param_1)[16]) {
   if (param_1 != (undefined1(*) [16])0x0) {
      ossl_prov_digest_reset(*param_1 + 8);
      CRYPTO_free(*(void**)param_1[3]);
      CRYPTO_clear_free(*(undefined8*)param_1[2], *(undefined8*)( param_1[2] + 8 ), "providers/implementations/kdfs/pbkdf1.c", 0x73);
      *(undefined8*)param_1[4] = 0;
      *param_1 = (undefined1[16])0x0;
      for (int i = 0; i < 3; i++) {
         param_1[( i + 1 )] = (undefined1[16])0;
      }

      CRYPTO_free(param_1);
      return;
   }

   return;
}
bool kdf_pbkdf1_set_ctx_params(undefined8 *param_1, undefined8 param_2) {
   long lVar1;
   int iVar2;
   undefined8 uVar3;
   long lVar4;
   void *pvVar5;
   uVar3 = ossl_prov_ctx_get0_libctx(*param_1);
   iVar2 = ossl_prov_digest_load_from_params(param_1 + 1, param_2, uVar3);
   if (iVar2 == 0) {
      return false;
   }

   lVar4 = OSSL_PARAM_locate_const(param_2, &_LC2);
   if (lVar4 != 0) {
      CRYPTO_clear_free(param_1[4], param_1[5], "providers/implementations/kdfs/pbkdf1.c", 0xa3);
      param_1[5] = 0;
      lVar1 = *(long*)( lVar4 + 0x18 );
      param_1[4] = 0;
      if (lVar1 == 0) {
         pvVar5 = CRYPTO_malloc(1, "providers/implementations/kdfs/pbkdf1.c", 0xa8);
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
      CRYPTO_clear_free(param_1[6], param_1[7], "providers/implementations/kdfs/pbkdf1.c", 0xa3);
      param_1[7] = 0;
      lVar1 = *(long*)( lVar4 + 0x18 );
      param_1[6] = 0;
      if (lVar1 == 0) {
         pvVar5 = CRYPTO_malloc(1, "providers/implementations/kdfs/pbkdf1.c", 0xa8);
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
   if (lVar4 != 0) {
      iVar2 = OSSL_PARAM_get_uint64(lVar4, param_1 + 8);
      return iVar2 != 0;
   }

   return true;
}
undefined4 kdf_pbkdf1_derive(long param_1, void *param_2, ulong param_3, undefined8 param_4) {
   size_t cnt;
   void *d;
   ulong uVar1;
   size_t cnt_00;
   void *d_00;
   int iVar2;
   undefined4 uVar3;
   int iVar4;
   EVP_MD *type;
   EVP_MD_CTX *ctx;
   ulong uVar5;
   long in_FS_OFFSET;
   uchar local_88[72];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar2 = ossl_prov_is_running();
   if (( iVar2 == 0 ) || ( iVar2 = iVar2 == 0 )) {
      uVar3 = 0;
      goto LAB_00100562;
   }

   if (*(long*)( param_1 + 0x20 ) == 0) {
      ERR_new();
      ERR_set_debug("providers/implementations/kdfs/pbkdf1.c", 0xbb, "kdf_pbkdf1_derive");
      ERR_set_error(0x39, 0x82, 0);
      uVar3 = 0;
      goto LAB_00100562;
   }

   if (*(long*)( param_1 + 0x30 ) == 0) {
      ERR_new();
      ERR_set_debug("providers/implementations/kdfs/pbkdf1.c", 0xc0, "kdf_pbkdf1_derive");
      ERR_set_error(0x39, 0x83, 0);
      uVar3 = 0;
      goto LAB_00100562;
   }

   type = (EVP_MD*)ossl_prov_digest_md(param_1 + 8);
   cnt = *(size_t*)( param_1 + 0x28 );
   d = *(void**)( param_1 + 0x20 );
   uVar1 = *(ulong*)( param_1 + 0x40 );
   cnt_00 = *(size_t*)( param_1 + 0x38 );
   d_00 = *(void**)( param_1 + 0x30 );
   ctx = (EVP_MD_CTX*)EVP_MD_CTX_new();
   if (ctx == (EVP_MD_CTX*)0x0) {
      ERR_new();
      ERR_set_debug("providers/implementations/kdfs/pbkdf1.c", 0x3f, "kdf_pbkdf1_do_derive");
      ERR_set_error(0x39, 0x80006, 0);
      LAB_00100543:uVar3 = 0;
   }
 else {
      iVar2 = EVP_DigestInit_ex(ctx, type, (ENGINE*)0x0);
      if (iVar2 == 0) goto LAB_00100543;
      iVar2 = EVP_DigestUpdate(ctx, d, cnt);
      if (( ( ( iVar2 == 0 ) || ( iVar2 = EVP_DigestUpdate(ctx, d_00, cnt_00) ),iVar2 == 0 ) ) || ( iVar2 = iVar2 == 0 )) goto LAB_00100543;
      if ((ulong)(long)iVar2 < param_3) {
         ERR_new();
         ERR_set_debug("providers/implementations/kdfs/pbkdf1.c", 0x4c, "kdf_pbkdf1_do_derive");
         ERR_set_error(0x39, 0xca, 0);
         goto LAB_00100543;
      }

      uVar5 = 1;
      if (1 < uVar1) {
         do {
            iVar4 = EVP_DigestInit_ex(ctx, type, (ENGINE*)0x0);
            if (( ( iVar4 == 0 ) || ( iVar4 = EVP_DigestUpdate(ctx, local_88, (long)iVar2) ),iVar4 == 0 )) goto LAB_00100543;
            uVar5 = uVar5 + 1;
         }
 while ( uVar1 != uVar5 );
      }

      memcpy(param_2, local_88, param_3);
      uVar3 = 1;
   }

   OPENSSL_cleanse(local_88, 0x40);
   EVP_MD_CTX_free(ctx);
   LAB_00100562:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar3;
}

