undefined8 evp_mac_up_ref(long param_1) {
   LOCK();
   *(int*)( param_1 + 0x20 ) = *(int*)( param_1 + 0x20 ) + 1;
   UNLOCK();
   return 1;
}void evp_mac_free(undefined8 *param_1) {
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
}/* WARNING: Type propagation algorithm not settling */long *evp_mac_from_algorithm(undefined4 param_1, long param_2, long param_3) {
   long *plVar1;
   int iVar2;
   long *ptr;
   long lVar3;
   int iVar4;
   int iVar5;
   int iVar6;
   int *piVar7;
   piVar7 = *(int**)( param_2 + 0x10 );
   ptr = (long*)CRYPTO_zalloc(0x90, "crypto/evp/mac_meth.c", 0x31);
   if (ptr == (long*)0x0) {
      ERR_new();
      ERR_set_debug("crypto/evp/mac_meth.c", 0x42, "evp_mac_from_algorithm");
      ERR_set_error(6, 0x80006, 0);
      return (long*)0x0;
   }
   plVar1 = ptr + 4;
   LOCK();
   *(int*)plVar1 = 1;
   UNLOCK();
   *(undefined4*)( ptr + 1 ) = param_1;
   lVar3 = ossl_algorithm_get1_first_name();
   ptr[2] = lVar3;
   if (lVar3 != 0) {
      ptr[3] = *(long*)( param_2 + 0x18 );
      iVar2 = *piVar7;
      if (iVar2 != 0) {
         iVar6 = 0;
         iVar5 = 0;
         iVar4 = 0;
         do {
            switch (iVar2) {
               case 1:
          if (ptr[5] != 0) break;
          iVar5 = iVar5 + 1;
          ptr[5] = *(long *)(piVar7 + 2);
          iVar2 = piVar7[4];
          goto joined_r0x00100300;
               case 2:
          if (ptr[6] == 0) {
            ptr[6] = *(long *)(piVar7 + 2);
            iVar2 = piVar7[4];
            goto joined_r0x00100300;
          }
          break;
               case 3:
          if (ptr[7] == 0) {
            iVar5 = iVar5 + 1;
            ptr[7] = *(long *)(piVar7 + 2);
            iVar2 = piVar7[4];
            goto joined_r0x00100300;
          }
          break;
               case 4:
          if (ptr[8] == 0) {
            iVar6 = 1;
            ptr[8] = *(long *)(piVar7 + 2);
            iVar2 = piVar7[4];
            goto joined_r0x00100300;
          }
          break;
               case 5:
          if (ptr[9] == 0) {
            ptr[9] = *(long *)(piVar7 + 2);
            iVar2 = piVar7[4];
joined_r0x00100300:
            iVar4 = iVar4 + 1;
            goto joined_r0x00100300;
          }
          break;
               case 6:
          if (ptr[10] == 0) {
            ptr[10] = *(long *)(piVar7 + 2);
            iVar2 = piVar7[4];
            goto joined_r0x00100300;
          }
          break;
               case 7:
          if (ptr[0xe] == 0) {
            ptr[0xe] = *(long *)(piVar7 + 2);
            iVar2 = piVar7[4];
            goto joined_r0x00100300;
          }
          break;
               case 8:
          if (ptr[0xf] == 0) {
            ptr[0xf] = *(long *)(piVar7 + 2);
            iVar2 = piVar7[4];
            goto joined_r0x00100300;
          }
          break;
               case 9:
          if (ptr[0x10] == 0) {
            ptr[0x10] = *(long *)(piVar7 + 2);
            iVar2 = piVar7[4];
            goto joined_r0x00100300;
          }
          break;
               case 10:
          if (ptr[0xb] == 0) {
            ptr[0xb] = *(long *)(piVar7 + 2);
            iVar2 = piVar7[4];
            goto joined_r0x00100300;
          }
          break;
               case 0xb:
          if (ptr[0xc] == 0) {
            ptr[0xc] = *(long *)(piVar7 + 2);
            iVar2 = piVar7[4];
            goto joined_r0x00100300;
          }
          break;
               case 0xc:
          if (ptr[0xd] == 0) {
            ptr[0xd] = *(long *)(piVar7 + 2);
            iVar2 = piVar7[4];
            goto joined_r0x00100300;
          }
          break;
               case 0xd:
          if (ptr[0x11] == 0) {
            iVar6 = 1;
            ptr[0x11] = *(long *)(piVar7 + 2);
            iVar2 = piVar7[4];
            goto joined_r0x00100300;
          }
            }
            iVar2 = piVar7[4];
            joined_r0x00100300:piVar7 = piVar7 + 4;
         } while ( iVar2 != 0 );
         if (( iVar4 + iVar6 == 3 ) && ( iVar5 == 2 )) {
            if (( param_3 == 0 ) || ( iVar2 = iVar2 != 0 )) {
               *ptr = param_3;
               return ptr;
            }
            goto LAB_00100400;
         }
      }
      ERR_new();
      ERR_set_debug("crypto/evp/mac_meth.c", 0xa2, "evp_mac_from_algorithm");
      ERR_set_error(6, 0xc1, 0);
   }
   LAB_00100400:LOCK();
   lVar3 = *plVar1;
   *(int*)plVar1 = (int)*plVar1 + -1;
   UNLOCK();
   if (( (int)lVar3 == 1 ) || ( (int)lVar3 + -1 < 1 )) {
      CRYPTO_free((void*)ptr[2]);
      ossl_provider_free(*ptr);
      CRYPTO_free(ptr);
   }
   return (long*)0x0;
}void EVP_MAC_fetch(undefined8 param_1, undefined8 param_2, undefined8 param_3) {
   evp_generic_fetch(param_1, 3, param_2, param_3, evp_mac_from_algorithm, 0x100000, evp_mac_free);
   return;
}undefined8 EVP_MAC_up_ref(long param_1) {
   LOCK();
   *(int*)( param_1 + 0x20 ) = *(int*)( param_1 + 0x20 ) + 1;
   UNLOCK();
   return 1;
}void EVP_MAC_free(undefined8 *param_1) {
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
}undefined8 EVP_MAC_get0_provider(undefined8 *param_1) {
   return *param_1;
}undefined8 EVP_MAC_gettable_params(long param_1) {
   code *UNRECOVERED_JUMPTABLE;
   undefined8 uVar1;
   UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x58 );
   if (UNRECOVERED_JUMPTABLE != (code*)0x0) {
      uVar1 = EVP_MAC_get0_provider();
      uVar1 = ossl_provider_ctx(uVar1);
      for (int i_177 = 0; i_177 < 2; i_177++) {
         /* WARNING: Could not recover jumptable at 0x001005b2. Too many branches */
      }
      uVar1 = ( *UNRECOVERED_JUMPTABLE )(uVar1);
      return uVar1;
   }
   return 0;
}undefined8 EVP_MAC_gettable_ctx_params(long param_1) {
   undefined8 uVar1;
   if (*(long*)( param_1 + 0x60 ) != 0) {
      uVar1 = EVP_MAC_get0_provider();
      uVar1 = ossl_provider_ctx(uVar1);
      for (int i_178 = 0; i_178 < 2; i_178++) {
         /* WARNING: Could not recover jumptable at 0x001005e6. Too many branches */
      }
      uVar1 = ( **(code**)( param_1 + 0x60 ) )(0, uVar1);
      return uVar1;
   }
   return 0;
}undefined8 EVP_MAC_settable_ctx_params(long param_1) {
   undefined8 uVar1;
   if (*(long*)( param_1 + 0x68 ) != 0) {
      uVar1 = EVP_MAC_get0_provider();
      uVar1 = ossl_provider_ctx(uVar1);
      for (int i_179 = 0; i_179 < 2; i_179++) {
         /* WARNING: Could not recover jumptable at 0x00100626. Too many branches */
      }
      uVar1 = ( **(code**)( param_1 + 0x68 ) )(0, uVar1);
      return uVar1;
   }
   return 0;
}undefined8 EVP_MAC_CTX_gettable_params(long *param_1) {
   undefined8 uVar1;
   if (*(long*)( *param_1 + 0x60 ) != 0) {
      uVar1 = EVP_MAC_get0_provider();
      uVar1 = ossl_provider_ctx(uVar1);
      for (int i_180 = 0; i_180 < 2; i_180++) {
         /* WARNING: Could not recover jumptable at 0x0010066e. Too many branches */
      }
      uVar1 = ( **(code**)( *param_1 + 0x60 ) )(param_1[1], uVar1);
      return uVar1;
   }
   return 0;
}undefined8 EVP_MAC_CTX_settable_params(long *param_1) {
   undefined8 uVar1;
   if (*(long*)( *param_1 + 0x68 ) != 0) {
      uVar1 = EVP_MAC_get0_provider();
      uVar1 = ossl_provider_ctx(uVar1);
      for (int i_181 = 0; i_181 < 2; i_181++) {
         /* WARNING: Could not recover jumptable at 0x001006ae. Too many branches */
      }
      uVar1 = ( **(code**)( *param_1 + 0x68 ) )(param_1[1], uVar1);
      return uVar1;
   }
   return 0;
}void EVP_MAC_do_all_provided(undefined8 param_1, undefined8 param_2, undefined8 param_3) {
   evp_generic_do_all(param_1, 3, param_2, param_3, evp_mac_from_algorithm, 0x100000, evp_mac_free);
   return;
}void evp_mac_fetch_from_prov(undefined8 param_1, undefined8 param_2, undefined8 param_3) {
   evp_generic_fetch_from_prov(param_1, 3, param_2, param_3, evp_mac_from_algorithm, 0x100000, evp_mac_free);
   return;
}
