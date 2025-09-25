undefined1 *ossl_blake2s_gettable_ctx_params(void) {
   return known_blake2s_ctx_params;
}
void blake2s256_copyctx(undefined8 *param_1, undefined8 *param_2) {
   undefined8 uVar1;
   uVar1 = param_2[1];
   *param_1 = *param_2;
   param_1[1] = uVar1;
   for (int i = 0; i < 9; i++) {
      uVar1 = param_2[( 2*i + 3 )];
      param_1[( 2*i + 2 )] = param_2[( 2*i + 2 )];
      param_1[( 2*i + 3 )] = uVar1;
   }

   return;
}
undefined1 *ossl_blake2b_gettable_ctx_params(void) {
   return known_blake2b_ctx_params;
}
void blake2b512_copyctx(undefined8 *param_1, undefined8 *param_2) {
   long lVar1;
   for (lVar1 = 0x26; lVar1 != 0; lVar1 = lVar1 + -1) {
      *param_1 = *param_2;
      param_2 = param_2 + 1;
      param_1 = param_1 + 1;
   }

   return;
}
undefined8 ossl_blake2s_get_ctx_params(long param_1, long *param_2) {
   int iVar1;
   long lVar2;
   if (param_1 == 0) {
      return 0;
   }

   if (( ( ( param_2 != (long*)0x0 ) && ( *param_2 != 0 ) ) && ( lVar2 = OSSL_PARAM_locate(param_2, &_LC0) ),lVar2 != 0 )) {
      ERR_new();
      ERR_set_debug("providers/implementations/digests/blake2_prov.c", 0xc5, "ossl_blake2s_get_ctx_params");
      ERR_set_error(0x39, 0x68, 0);
      return 0;
   }

   return 1;
}
undefined8 ossl_blake2b_get_ctx_params(long param_1, long *param_2) {
   int iVar1;
   long lVar2;
   if (param_1 == 0) {
      return 0;
   }

   if (( ( ( param_2 != (long*)0x0 ) && ( *param_2 != 0 ) ) && ( lVar2 = OSSL_PARAM_locate(param_2, &_LC0) ),lVar2 != 0 )) {
      ERR_new();
      ERR_set_debug("providers/implementations/digests/blake2_prov.c", 0xc6, "ossl_blake2b_get_ctx_params");
      ERR_set_error(0x39, 0x68, 0);
      return 0;
   }

   return 1;
}
undefined8 ossl_blake2s_set_ctx_params(long param_1, long *param_2) {
   int iVar1;
   long lVar2;
   undefined8 uVar3;
   long in_FS_OFFSET;
   long local_18;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 == 0) {
      LAB_00100280:uVar3 = 0;
   }
 else {
      if (( param_2 != (long*)0x0 ) && ( *param_2 != 0 )) {
         lVar2 = OSSL_PARAM_locate_const(param_2, &_LC0);
         if (lVar2 != 0) {
            iVar1 = OSSL_PARAM_get_size_t(lVar2, &local_18);
            if (iVar1 == 0) {
               ERR_new();
               ERR_set_debug("providers/implementations/digests/blake2_prov.c", 0xc5, "ossl_blake2s_set_ctx_params");
               ERR_set_error(0x39, 0x67, 0);
               uVar3 = 0;
               goto LAB_00100235;
            }

            if (0x1f < local_18 - 1U) {
               ERR_new();
               ERR_set_debug("providers/implementations/digests/blake2_prov.c", 0xc5, "ossl_blake2s_set_ctx_params");
               ERR_set_error(0x39, 0xda, 0);
               goto LAB_00100280;
            }

            ossl_blake2s_param_set_digest_length(param_1 + 0x80);
         }

      }

      uVar3 = 1;
   }

   LAB_00100235:if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
bool blake2s256_internal_init(long param_1, undefined8 param_2) {
   char cVar1;
   int iVar2;
   iVar2 = ossl_prov_is_running();
   if (iVar2 != 0) {
      iVar2 = ossl_blake2s_set_ctx_params(param_1, param_2);
      if (iVar2 != 0) {
         cVar1 = *(char*)( param_1 + 0x80 );
         ossl_blake2s_param_init(param_1 + 0x80);
         if (cVar1 != '\0') {
            *(char*)( param_1 + 0x80 ) = cVar1;
         }

         iVar2 = ossl_blake2s_init(param_1, param_1 + 0x80);
         return iVar2 != 0;
      }

   }

   return false;
}
void blake2s256_get_params(undefined8 param_1) {
   ossl_digest_default_get_params(param_1, 0x40, 0x20, 0);
   return;
}
void blake2b512_get_params(undefined8 param_1) {
   ossl_digest_default_get_params(param_1, 0x80, 0x40, 0);
   return;
}
undefined8 *blake2s256_dupctx(undefined8 *param_1) {
   undefined8 uVar1;
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
   int iVar17;
   undefined8 *puVar18;
   iVar17 = ossl_prov_is_running();
   puVar18 = (undefined8*)0x0;
   if (iVar17 != 0) {
      puVar18 = (undefined8*)CRYPTO_malloc(0xa0, "providers/implementations/digests/blake2_prov.c", 0xc5);
      if (puVar18 != (undefined8*)0x0) {
         uVar1 = param_1[1];
         uVar2 = param_1[2];
         uVar3 = param_1[3];
         uVar4 = param_1[4];
         uVar5 = param_1[5];
         uVar6 = param_1[6];
         uVar7 = param_1[7];
         uVar8 = param_1[8];
         uVar9 = param_1[9];
         uVar10 = param_1[10];
         uVar11 = param_1[0xb];
         *puVar18 = *param_1;
         puVar18[1] = uVar1;
         uVar1 = param_1[0xc];
         uVar12 = param_1[0xd];
         uVar13 = param_1[0xe];
         uVar14 = param_1[0xf];
         puVar18[2] = uVar2;
         puVar18[3] = uVar3;
         uVar2 = param_1[0x10];
         uVar3 = param_1[0x11];
         uVar15 = param_1[0x12];
         uVar16 = param_1[0x13];
         puVar18[4] = uVar4;
         puVar18[5] = uVar5;
         puVar18[6] = uVar6;
         puVar18[7] = uVar7;
         puVar18[8] = uVar8;
         puVar18[9] = uVar9;
         puVar18[10] = uVar10;
         puVar18[0xb] = uVar11;
         puVar18[0xc] = uVar1;
         puVar18[0xd] = uVar12;
         puVar18[0xe] = uVar13;
         puVar18[0xf] = uVar14;
         puVar18[0x10] = uVar2;
         puVar18[0x11] = uVar3;
         puVar18[0x12] = uVar15;
         puVar18[0x13] = uVar16;
      }

   }

   return puVar18;
}
undefined8 *blake2b512_dupctx(undefined8 *param_1) {
   int iVar1;
   undefined8 *puVar2;
   long lVar3;
   undefined8 *puVar4;
   byte bVar5;
   bVar5 = 0;
   iVar1 = ossl_prov_is_running();
   puVar2 = (undefined8*)0x0;
   if (iVar1 != 0) {
      puVar2 = (undefined8*)CRYPTO_malloc(0x130, "providers/implementations/digests/blake2_prov.c", 0xc6);
      if (puVar2 != (undefined8*)0x0) {
         puVar4 = puVar2;
         for (lVar3 = 0x26; lVar3 != 0; lVar3 = lVar3 + -1) {
            *puVar4 = *param_1;
            param_1 = param_1 + (ulong)bVar5 * -2 + 1;
            puVar4 = puVar4 + (ulong)bVar5 * -2 + 1;
         }

      }

   }

   return puVar2;
}
void blake2s256_freectx(undefined8 param_1) {
   CRYPTO_clear_free(param_1, 0xa0, "providers/implementations/digests/blake2_prov.c", 0xc5);
   return;
}
void blake2b512_freectx(undefined8 param_1) {
   CRYPTO_clear_free(param_1, 0x130, "providers/implementations/digests/blake2_prov.c", 0xc6);
   return;
}
undefined8 blake2s256_internal_final(long param_1, undefined8 param_2, ulong *param_3, ulong param_4) {
   ulong uVar1;
   int iVar2;
   undefined8 uVar3;
   iVar2 = ossl_prov_is_running();
   if (iVar2 != 0) {
      uVar1 = *(ulong*)( param_1 + 0x78 );
      *param_3 = uVar1;
      if (param_4 == 0) {
         return 1;
      }

      if (uVar1 <= param_4) {
         uVar3 = ossl_blake2s_final(param_2, param_1);
         return uVar3;
      }

      ERR_new();
      ERR_set_debug("providers/implementations/digests/blake2_prov.c", 0xc5, "blake2s256_internal_final");
      ERR_set_error(0x39, 0xda, 0);
   }

   return 0;
}
undefined8 blake2s256_newctx(void) {
   int iVar1;
   undefined8 uVar2;
   iVar1 = ossl_prov_is_running();
   if (iVar1 != 0) {
      uVar2 = CRYPTO_zalloc(0xa0, "providers/implementations/digests/blake2_prov.c", 0xc5);
      return uVar2;
   }

   return 0;
}
undefined8 blake2b512_newctx(void) {
   int iVar1;
   undefined8 uVar2;
   iVar1 = ossl_prov_is_running();
   if (iVar1 != 0) {
      uVar2 = CRYPTO_zalloc(0x130, "providers/implementations/digests/blake2_prov.c", 0xc6);
      return uVar2;
   }

   return 0;
}
undefined8 ossl_blake2b_set_ctx_params(long param_1, long *param_2) {
   int iVar1;
   long lVar2;
   undefined8 uVar3;
   long in_FS_OFFSET;
   long local_18;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 == 0) {
      LAB_00100680:uVar3 = 0;
   }
 else {
      if (( param_2 != (long*)0x0 ) && ( *param_2 != 0 )) {
         lVar2 = OSSL_PARAM_locate_const(param_2, &_LC0);
         if (lVar2 != 0) {
            iVar1 = OSSL_PARAM_get_size_t(lVar2, &local_18);
            if (iVar1 == 0) {
               ERR_new();
               ERR_set_debug("providers/implementations/digests/blake2_prov.c", 0xc6, "ossl_blake2b_set_ctx_params");
               ERR_set_error(0x39, 0x67, 0);
               uVar3 = 0;
               goto LAB_00100635;
            }

            if (0x3f < local_18 - 1U) {
               ERR_new();
               ERR_set_debug("providers/implementations/digests/blake2_prov.c", 0xc6, "ossl_blake2b_set_ctx_params");
               ERR_set_error(0x39, 0xda, 0);
               goto LAB_00100680;
            }

            ossl_blake2b_param_set_digest_length(param_1 + 0xf0);
         }

      }

      uVar3 = 1;
   }

   LAB_00100635:if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
bool blake2b512_internal_init(long param_1, undefined8 param_2) {
   char cVar1;
   int iVar2;
   iVar2 = ossl_prov_is_running();
   if (iVar2 != 0) {
      iVar2 = ossl_blake2b_set_ctx_params(param_1, param_2);
      if (iVar2 != 0) {
         cVar1 = *(char*)( param_1 + 0xf0 );
         ossl_blake2b_param_init(param_1 + 0xf0);
         if (cVar1 != '\0') {
            *(char*)( param_1 + 0xf0 ) = cVar1;
         }

         iVar2 = ossl_blake2b_init(param_1, param_1 + 0xf0);
         return iVar2 != 0;
      }

   }

   return false;
}
undefined8 blake2b512_internal_final(long param_1, undefined8 param_2, ulong *param_3, ulong param_4) {
   ulong uVar1;
   int iVar2;
   undefined8 uVar3;
   iVar2 = ossl_prov_is_running();
   if (iVar2 != 0) {
      uVar1 = *(ulong*)( param_1 + 0xe8 );
      *param_3 = uVar1;
      if (param_4 == 0) {
         return 1;
      }

      if (uVar1 <= param_4) {
         uVar3 = ossl_blake2b_final(param_2, param_1);
         return uVar3;
      }

      ERR_new();
      ERR_set_debug("providers/implementations/digests/blake2_prov.c", 0xc6, "blake2b512_internal_final");
      ERR_set_error(0x39, 0xda, 0);
   }

   return 0;
}
undefined1 *ossl_blake2b_settable_ctx_params(void) {
   return known_blake2b_ctx_params;
}
undefined1 *ossl_blake2s_settable_ctx_params(void) {
   return known_blake2s_ctx_params;
}

