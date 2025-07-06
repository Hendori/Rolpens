undefined8 evp_kdf_up_ref(long param_1) {
   LOCK();
   *(int*)( param_1 + 0x20 ) = *(int*)( param_1 + 0x20 ) + 1;
   UNLOCK();
   return 1;
}void evp_kdf_free(undefined8 *param_1) {
   int *piVar1;
   int iVar2;
   if (param_1 == (undefined8*)0x0) {
      return;
   }
   LOCK();
   piVar1 = (int*)( param_1 + 4 );
   iVar2 = *piVar1;
   *piVar1 = *piVar1 + -1;
   UNLOCK();
   if (( iVar2 != 1 ) && ( 0 < iVar2 + -1 )) {
      return;
   }
   CRYPTO_free((void*)param_1[2]);
   ossl_provider_free(*param_1);
   CRYPTO_free(param_1);
   return;
}/* WARNING: Type propagation algorithm not settling */long *evp_kdf_from_algorithm(undefined4 param_1, long param_2, long param_3) {
   long *plVar1;
   int iVar2;
   long *ptr;
   long lVar3;
   int iVar4;
   int iVar5;
   int *piVar6;
   piVar6 = *(int**)( param_2 + 0x10 );
   ptr = (long*)CRYPTO_zalloc(0x80, "crypto/evp/kdf_meth.c", 0x32);
   if (ptr == (long*)0x0) {
      CRYPTO_free((void*)0x0);
      ERR_new();
      ERR_set_debug("crypto/evp/kdf_meth.c", 0x43, "evp_kdf_from_algorithm");
      ERR_set_error(6, 0x80006, 0);
      return (long*)0x0;
   }
   plVar1 = ptr + 4;
   LOCK();
   *(int*)plVar1 = 1;
   UNLOCK();
   *(undefined4*)( ptr + 1 ) = param_1;
   lVar3 = ossl_algorithm_get1_first_name(param_2);
   ptr[2] = lVar3;
   if (lVar3 != 0) {
      ptr[3] = *(long*)( param_2 + 0x18 );
      iVar2 = *piVar6;
      if (iVar2 != 0) {
         iVar4 = 0;
         iVar5 = 0;
         do {
            switch (iVar2) {
               case 1:
          if (ptr[5] != 0) break;
          iVar4 = iVar4 + 1;
          ptr[5] = *(long *)(piVar6 + 2);
          iVar2 = piVar6[4];
          goto joined_r0x001002bd;
               case 2:
          if (ptr[6] == 0) {
            ptr[6] = *(long *)(piVar6 + 2);
            iVar2 = piVar6[4];
            goto joined_r0x001002bd;
          }
          break;
               case 3:
          if (ptr[7] == 0) {
            iVar4 = iVar4 + 1;
            ptr[7] = *(long *)(piVar6 + 2);
            iVar2 = piVar6[4];
            goto joined_r0x001002bd;
          }
          break;
               case 4:
          if (ptr[8] == 0) {
            ptr[8] = *(long *)(piVar6 + 2);
            iVar2 = piVar6[4];
            goto joined_r0x001002bd;
          }
          break;
               case 5:
          if (ptr[9] == 0) {
            iVar5 = iVar5 + 1;
            ptr[9] = *(long *)(piVar6 + 2);
            iVar2 = piVar6[4];
            goto joined_r0x001002bd;
          }
          break;
               for (int i_948 = 0; i_948 < 5; i_948++) {
                  case 6:
          if (ptr[10] == 0) {
            ptr[10] = *(long *)(piVar6 + 2);
            iVar2 = piVar6[4];
            goto joined_r0x001002bd;
          }
          break;
               }
               case 0xb:
          if (ptr[0xf] == 0) {
            ptr[0xf] = *(long *)(piVar6 + 2);
            iVar2 = piVar6[4];
            goto joined_r0x001002bd;
          }
            }
            iVar2 = piVar6[4];
            joined_r0x001002bd:piVar6 = piVar6 + 4;
         } while ( iVar2 != 0 );
         if (( iVar5 == 1 ) && ( iVar4 == 2 )) {
            if (( param_3 == 0 ) || ( iVar2 = iVar2 != 0 )) {
               *ptr = param_3;
               return ptr;
            }
            goto LAB_00100390;
         }
      }
      ERR_new();
      ERR_set_debug("crypto/evp/kdf_meth.c", 0x93, "evp_kdf_from_algorithm");
      ERR_set_error(6, 0xc1, 0);
   }
   LAB_00100390:LOCK();
   lVar3 = *plVar1;
   *(int*)plVar1 = (int)*plVar1 + -1;
   UNLOCK();
   if (( (int)lVar3 == 1 ) || ( (int)lVar3 + -1 < 1 )) {
      CRYPTO_free((void*)ptr[2]);
      ossl_provider_free(*ptr);
      CRYPTO_free(ptr);
   }
   return (long*)0x0;
}void EVP_KDF_fetch(undefined8 param_1, undefined8 param_2, undefined8 param_3) {
   evp_generic_fetch(param_1, 4, param_2, param_3, evp_kdf_from_algorithm, 0x100000, evp_kdf_free);
   return;
}undefined8 EVP_KDF_up_ref(long param_1) {
   LOCK();
   *(int*)( param_1 + 0x20 ) = *(int*)( param_1 + 0x20 ) + 1;
   UNLOCK();
   return 1;
}void EVP_KDF_free(undefined8 *param_1) {
   int *piVar1;
   int iVar2;
   if (param_1 == (undefined8*)0x0) {
      return;
   }
   LOCK();
   piVar1 = (int*)( param_1 + 4 );
   iVar2 = *piVar1;
   *piVar1 = *piVar1 + -1;
   UNLOCK();
   if (( iVar2 != 1 ) && ( 0 < iVar2 + -1 )) {
      return;
   }
   CRYPTO_free((void*)param_1[2]);
   ossl_provider_free(*param_1);
   CRYPTO_free(param_1);
   return;
}undefined8 EVP_KDF_gettable_params(long param_1) {
   code *UNRECOVERED_JUMPTABLE;
   undefined8 uVar1;
   UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x50 );
   if (UNRECOVERED_JUMPTABLE != (code*)0x0) {
      uVar1 = EVP_KDF_get0_provider();
      uVar1 = ossl_provider_ctx(uVar1);
      for (int i_949 = 0; i_949 < 2; i_949++) {
         /* WARNING: Could not recover jumptable at 0x00100542. Too many branches */
      }
      uVar1 = ( *UNRECOVERED_JUMPTABLE )(uVar1);
      return uVar1;
   }
   return 0;
}undefined8 EVP_KDF_gettable_ctx_params(long param_1) {
   undefined8 uVar1;
   if (*(long*)( param_1 + 0x58 ) != 0) {
      uVar1 = EVP_KDF_get0_provider();
      uVar1 = ossl_provider_ctx(uVar1);
      for (int i_950 = 0; i_950 < 2; i_950++) {
         /* WARNING: Could not recover jumptable at 0x00100576. Too many branches */
      }
      uVar1 = ( **(code**)( param_1 + 0x58 ) )(0, uVar1);
      return uVar1;
   }
   return 0;
}undefined8 EVP_KDF_settable_ctx_params(long param_1) {
   undefined8 uVar1;
   if (*(long*)( param_1 + 0x60 ) != 0) {
      uVar1 = EVP_KDF_get0_provider();
      uVar1 = ossl_provider_ctx(uVar1);
      for (int i_951 = 0; i_951 < 2; i_951++) {
         /* WARNING: Could not recover jumptable at 0x001005b6. Too many branches */
      }
      uVar1 = ( **(code**)( param_1 + 0x60 ) )(0, uVar1);
      return uVar1;
   }
   return 0;
}undefined8 EVP_KDF_CTX_gettable_params(long *param_1) {
   undefined8 uVar1;
   if (*(long*)( *param_1 + 0x58 ) != 0) {
      uVar1 = EVP_KDF_get0_provider();
      uVar1 = ossl_provider_ctx(uVar1);
      for (int i_952 = 0; i_952 < 2; i_952++) {
         /* WARNING: Could not recover jumptable at 0x001005fe. Too many branches */
      }
      uVar1 = ( **(code**)( *param_1 + 0x58 ) )(param_1[1], uVar1);
      return uVar1;
   }
   return 0;
}undefined8 EVP_KDF_CTX_settable_params(long *param_1) {
   undefined8 uVar1;
   if (*(long*)( *param_1 + 0x60 ) != 0) {
      uVar1 = EVP_KDF_get0_provider();
      uVar1 = ossl_provider_ctx(uVar1);
      for (int i_953 = 0; i_953 < 2; i_953++) {
         /* WARNING: Could not recover jumptable at 0x0010063e. Too many branches */
      }
      uVar1 = ( **(code**)( *param_1 + 0x60 ) )(param_1[1], uVar1);
      return uVar1;
   }
   return 0;
}void EVP_KDF_do_all_provided(undefined8 param_1, undefined8 param_2, undefined8 param_3) {
   evp_generic_do_all(param_1, 4, param_2, param_3, evp_kdf_from_algorithm, 0x100000, evp_kdf_free);
   return;
}
