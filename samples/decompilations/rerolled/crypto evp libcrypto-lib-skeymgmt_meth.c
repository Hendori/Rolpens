undefined8 EVP_SKEYMGMT_up_ref(long param_1) {
   LOCK();
   *(int*)( param_1 + 0x20 ) = *(int*)( param_1 + 0x20 ) + 1;
   UNLOCK();
   return 1;
}void EVP_SKEYMGMT_free(void *param_1) {
   int *piVar1;
   int iVar2;
   if (param_1 == (void*)0x0) {
      return;
   }
   LOCK();
   piVar1 = (int*)( (long)param_1 + 0x20 );
   iVar2 = *piVar1;
   *piVar1 = *piVar1 + -1;
   UNLOCK();
   if (( iVar2 != 1 ) && ( 0 < iVar2 + -1 )) {
      return;
   }
   CRYPTO_free(*(void**)( (long)param_1 + 8 ));
   ossl_provider_free(*(undefined8*)( (long)param_1 + 0x18 ));
   CRYPTO_free(param_1);
   return;
}undefined4 *skeymgmt_from_algorithm(undefined4 param_1, long param_2, undefined8 param_3) {
   int *piVar1;
   int iVar2;
   undefined4 *puVar3;
   long lVar4;
   int *piVar5;
   piVar5 = *(int**)( param_2 + 0x10 );
   puVar3 = (undefined4*)CRYPTO_zalloc(0x60, "crypto/evp/skeymgmt_meth.c", 0x34);
   if (puVar3 != (undefined4*)0x0) {
      LOCK();
      puVar3[8] = 1;
      UNLOCK();
      *puVar3 = param_1;
      lVar4 = ossl_algorithm_get1_first_name(param_2);
      *(long*)( puVar3 + 2 ) = lVar4;
      if (lVar4 == 0) {
         EVP_SKEYMGMT_free(puVar3);
      } else {
         lVar4 = *(long*)( puVar3 + 0x16 );
         *(undefined8*)( puVar3 + 4 ) = *(undefined8*)( param_2 + 0x18 );
         iVar2 = *piVar5;
         while (iVar2 != 0) {
            /* WARNING: Could not find normalized switch variable to match jumptable */
            switch (iVar2) {
               case 1:
          if (lVar4 == 0) {
            lVar4 = *(long *)(piVar5 + 2);
            *(long *)(puVar3 + 0x16) = lVar4;
          }
          break;
               case 2:
          if (*(long *)(puVar3 + 0xc) == 0) {
            *(undefined8 *)(puVar3 + 0xc) = *(undefined8 *)(piVar5 + 2);
          }
          break;
               case 3:
          if (*(long *)(puVar3 + 0xe) == 0) {
            *(undefined8 *)(puVar3 + 0xe) = *(undefined8 *)(piVar5 + 2);
          }
          break;
               case 4:
          if (*(long *)(puVar3 + 0x12) == 0) {
            *(undefined8 *)(puVar3 + 0x12) = *(undefined8 *)(piVar5 + 2);
          }
          break;
               case 5:
          if (*(long *)(puVar3 + 0x14) == 0) {
            *(undefined8 *)(puVar3 + 0x14) = *(undefined8 *)(piVar5 + 2);
          }
          break;
               case 6:
          if (*(long *)(puVar3 + 10) == 0) {
            *(undefined8 *)(puVar3 + 10) = *(undefined8 *)(piVar5 + 2);
          }
          break;
               case 7:
          if (*(long *)(puVar3 + 0x10) == 0) {
            *(undefined8 *)(puVar3 + 0x10) = *(undefined8 *)(piVar5 + 2);
          }
            }
            piVar1 = piVar5 + 4;
            piVar5 = piVar5 + 4;
            /* WARNING: This code block may not be properly labeled as switch case */
            iVar2 = *piVar1;
         };
         if (( ( lVar4 == 0 ) || ( *(long*)( puVar3 + 0xc ) == 0 ) ) || ( *(long*)( puVar3 + 0xe ) == 0 )) {
            EVP_SKEYMGMT_free(puVar3);
            ERR_new();
            ERR_set_debug("crypto/evp/skeymgmt_meth.c", 0x74, "skeymgmt_from_algorithm");
            ERR_set_error(6, 0xc1, 0);
         } else {
            iVar2 = ossl_provider_up_ref(param_3);
            if (iVar2 != 0) {
               *(undefined8*)( puVar3 + 6 ) = param_3;
               return puVar3;
            }
            EVP_SKEYMGMT_free(puVar3);
            ERR_new();
            ERR_set_debug("crypto/evp/skeymgmt_meth.c", 0x7a, "skeymgmt_from_algorithm");
            ERR_set_error(6, 0x86, 0);
         }
      }
   }
   return (undefined4*)0x0;
}void evp_skeymgmt_export(long param_1, undefined8 param_2, undefined4 param_3, undefined8 param_4, undefined8 param_5) {
   for (int i_77 = 0; i_77 < 2; i_77++) {
      /* WARNING: Could not recover jumptable at 0x001002e2. Too many branches */
   }
   ( **(code**)( param_1 + 0x38 ) )(param_2, param_3, param_4, param_5);
   return;
}void evp_skeymgmt_freedata(long param_1, undefined8 param_2) {
   for (int i_78 = 0; i_78 < 2; i_78++) {
      /* WARNING: Could not recover jumptable at 0x001002fa. Too many branches */
   }
   ( **(code**)( param_1 + 0x58 ) )(param_2);
   return;
}void evp_skeymgmt_fetch_from_prov(undefined8 param_1, undefined8 param_2, undefined8 param_3) {
   evp_generic_fetch_from_prov(param_1, 0xf, param_2, param_3, skeymgmt_from_algorithm, 0x100000, _GLOBAL_OFFSET_TABLE_);
   return;
}void EVP_SKEYMGMT_fetch(undefined8 param_1, undefined8 param_2, undefined8 param_3) {
   evp_generic_fetch(param_1, 0xf, param_2, param_3, skeymgmt_from_algorithm, 0x100000, _GLOBAL_OFFSET_TABLE_);
   return;
}undefined8 EVP_SKEYMGMT_get0_provider(long param_1) {
   if (param_1 != 0) {
      return *(undefined8*)( param_1 + 0x18 );
   }
   return 0;
}undefined8 evp_skeymgmt_generate(long param_1, undefined8 param_2) {
   undefined8 uVar1;
   uVar1 = EVP_SKEYMGMT_get0_provider();
   uVar1 = ossl_provider_ctx(uVar1);
   if (*(code**)( param_1 + 0x48 ) != (code*)0x0) {
      for (int i_79 = 0; i_79 < 2; i_79++) {
         /* WARNING: Could not recover jumptable at 0x001003d2. Too many branches */
      }
      uVar1 = ( **(code**)( param_1 + 0x48 ) )(uVar1, param_2);
      return uVar1;
   }
   return 0;
}void evp_skeymgmt_import(long param_1, undefined4 param_2, undefined8 param_3) {
   undefined8 uVar1;
   uVar1 = EVP_SKEYMGMT_get0_provider();
   uVar1 = ossl_provider_ctx(uVar1);
   for (int i_80 = 0; i_80 < 2; i_80++) {
      /* WARNING: Could not recover jumptable at 0x0010041d. Too many branches */
   }
   ( **(code**)( param_1 + 0x30 ) )(uVar1, param_2, param_3);
   return;
}undefined8 EVP_SKEYMGMT_get0_description(long param_1) {
   if (param_1 != 0) {
      return *(undefined8*)( param_1 + 0x10 );
   }
   return 0;
}undefined8 EVP_SKEYMGMT_get0_name(long param_1) {
   if (param_1 != 0) {
      return *(undefined8*)( param_1 + 8 );
   }
   return 0;
}bool EVP_SKEYMGMT_is_a(undefined4 *param_1, undefined8 param_2) {
   int iVar1;
   if (param_1 != (undefined4*)0x0) {
      iVar1 = evp_is_a(*(undefined8*)( param_1 + 6 ), *param_1, 0, param_2);
      return iVar1 != 0;
   }
   return false;
}void EVP_SKEYMGMT_do_all_provided(undefined8 param_1, undefined8 param_2, undefined8 param_3) {
   evp_generic_do_all(param_1, 10, param_2, param_3, skeymgmt_from_algorithm, 0x100000, _GLOBAL_OFFSET_TABLE_);
   return;
}undefined8 EVP_SKEYMGMT_names_do_all(undefined4 *param_1, undefined8 param_2, undefined8 param_3) {
   undefined8 uVar1;
   if (param_1 == (undefined4*)0x0) {
      return 0;
   }
   if (*(long*)( param_1 + 6 ) == 0) {
      return 1;
   }
   uVar1 = evp_names_do_all(*(long*)( param_1 + 6 ), *param_1, param_2, param_3);
   return uVar1;
}undefined8 EVP_SKEYMGMT_get0_gen_settable_params(long param_1) {
   undefined8 uVar1;
   if (param_1 == 0) {
      return 0;
   }
   uVar1 = EVP_SKEYMGMT_get0_provider();
   uVar1 = ossl_provider_ctx(uVar1);
   if (*(code**)( param_1 + 0x40 ) != (code*)0x0) {
      for (int i_81 = 0; i_81 < 2; i_81++) {
         /* WARNING: Could not recover jumptable at 0x00100547. Too many branches */
      }
      uVar1 = ( **(code**)( param_1 + 0x40 ) )(uVar1);
      return uVar1;
   }
   return 0;
}undefined8 EVP_SKEYMGMT_get0_imp_settable_params(long param_1) {
   undefined8 uVar1;
   if (param_1 == 0) {
      return 0;
   }
   uVar1 = EVP_SKEYMGMT_get0_provider();
   uVar1 = ossl_provider_ctx(uVar1);
   if (*(code**)( param_1 + 0x28 ) != (code*)0x0) {
      for (int i_82 = 0; i_82 < 2; i_82++) {
         /* WARNING: Could not recover jumptable at 0x00100587. Too many branches */
      }
      uVar1 = ( **(code**)( param_1 + 0x28 ) )(uVar1);
      return uVar1;
   }
   return 0;
}
