void help_get_legacy_alg_type_from_keymgmt(undefined8 param_1, int *param_2) {
   int iVar1;
   if (*param_2 != 0) {
      return;
   }
   iVar1 = evp_pkey_name2type();
   *param_2 = iVar1;
   return;
}void evp_keymgmt_fetch_from_prov(undefined8 param_1, undefined8 param_2, undefined8 param_3) {
   evp_generic_fetch_from_prov(param_1, 10, param_2, param_3, keymgmt_from_algorithm, evp_keymgmt_up_ref, evp_keymgmt_free);
   return;
}void EVP_KEYMGMT_fetch(undefined8 param_1, undefined8 param_2, undefined8 param_3) {
   evp_generic_fetch(param_1, 10, param_2, param_3, keymgmt_from_algorithm, evp_keymgmt_up_ref, evp_keymgmt_free);
   return;
}undefined8 EVP_KEYMGMT_up_ref(long param_1) {
   LOCK();
   *(int*)( param_1 + 0x28 ) = *(int*)( param_1 + 0x28 ) + 1;
   UNLOCK();
   return 1;
}void evp_keymgmt_up_ref(void) {
   EVP_KEYMGMT_up_ref();
   return;
}void EVP_KEYMGMT_free(void *param_1) {
   int *piVar1;
   int iVar2;
   if (param_1 == (void*)0x0) {
      return;
   }
   LOCK();
   piVar1 = (int*)( (long)param_1 + 0x28 );
   iVar2 = *piVar1;
   *piVar1 = *piVar1 + -1;
   UNLOCK();
   if (( iVar2 != 1 ) && ( 0 < iVar2 + -1 )) {
      return;
   }
   CRYPTO_free(*(void**)( (long)param_1 + 0x10 ));
   ossl_provider_free(*(undefined8*)( (long)param_1 + 0x20 ));
   CRYPTO_free(param_1);
   return;
}void evp_keymgmt_free(void) {
   EVP_KEYMGMT_free();
   return;
}undefined8 EVP_KEYMGMT_get0_provider(long param_1) {
   return *(undefined8*)( param_1 + 0x20 );
}undefined4 evp_keymgmt_get_number(long param_1) {
   return *(undefined4*)( param_1 + 4 );
}undefined4 evp_keymgmt_get_legacy_alg(long param_1) {
   return *(undefined4*)( param_1 + 8 );
}undefined8 EVP_KEYMGMT_get0_description(long param_1) {
   return *(undefined8*)( param_1 + 0x18 );
}undefined8 EVP_KEYMGMT_get0_name(long param_1) {
   return *(undefined8*)( param_1 + 0x10 );
}bool EVP_KEYMGMT_is_a(long param_1, undefined8 param_2) {
   int iVar1;
   if (param_1 != 0) {
      iVar1 = evp_is_a(*(undefined8*)( param_1 + 0x20 ), *(undefined4*)( param_1 + 4 ), 0, param_2);
      return iVar1 != 0;
   }
   return false;
}void EVP_KEYMGMT_do_all_provided(undefined8 param_1, undefined8 param_2, undefined8 param_3) {
   evp_generic_do_all(param_1, 10, param_2, param_3, keymgmt_from_algorithm, evp_keymgmt_up_ref, evp_keymgmt_free);
   return;
}undefined8 EVP_KEYMGMT_names_do_all(long param_1, undefined8 param_2, undefined8 param_3) {
   undefined8 uVar1;
   if (*(long*)( param_1 + 0x20 ) == 0) {
      return 1;
   }
   uVar1 = evp_names_do_all(*(long*)( param_1 + 0x20 ), *(undefined4*)( param_1 + 4 ), param_2, param_3);
   return uVar1;
}long keymgmt_from_algorithm(undefined4 param_1, long param_2, long param_3) {
   int iVar1;
   long lVar2;
   long lVar3;
   uint uVar4;
   int *piVar5;
   uint uVar6;
   uint uVar7;
   uint uVar8;
   uint uVar9;
   uint uVar10;
   int iVar11;
   int iVar12;
   long in_FS_OFFSET;
   undefined4 local_44;
   long local_40;
   piVar5 = *(int**)( param_2 + 0x10 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar2 = CRYPTO_zalloc(0x100, "crypto/evp/keymgmt_meth.c", 0x22);
   if (lVar2 != 0) {
      LOCK();
      *(undefined4*)( lVar2 + 0x28 ) = 1;
      UNLOCK();
      *(undefined4*)( lVar2 + 4 ) = param_1;
      lVar3 = ossl_algorithm_get1_first_name();
      *(long*)( lVar2 + 0x10 ) = lVar3;
      if (lVar3 == 0) {
         lVar3 = 0;
         EVP_KEYMGMT_free(lVar2);
         goto LAB_001003b9;
      }
      lVar3 = *(long*)( lVar2 + 0x38 );
      uVar8 = 0;
      *(undefined8*)( lVar2 + 0x18 ) = *(undefined8*)( param_2 + 0x18 );
      iVar1 = *piVar5;
      if (iVar1 == 0) {
         uVar6 = 0;
         uVar7 = 0;
         uVar9 = 0;
         uVar10 = 0;
         uVar4 = 0;
      } else {
         iVar12 = 0;
         iVar11 = 0;
         uVar6 = 0;
         uVar7 = 0;
         uVar9 = 0;
         uVar10 = 0;
         uVar4 = 0;
         do {
            switch (iVar1) {
               case 1:
          if (*(long *)(lVar2 + 0x30) == 0) {
            *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)(piVar5 + 2);
          }
          break;
               case 2:
          if (*(long *)(lVar2 + 0x60) == 0) {
            *(undefined8 *)(lVar2 + 0x60) = *(undefined8 *)(piVar5 + 2);
          }
          break;
               case 3:
          if (*(long *)(lVar2 + 0x68) == 0) {
            *(undefined8 *)(lVar2 + 0x68) = *(undefined8 *)(piVar5 + 2);
          }
          break;
               case 4:
          if (*(long *)(lVar2 + 0x80) == 0) {
            uVar9 = uVar9 + 1;
            *(undefined8 *)(lVar2 + 0x80) = *(undefined8 *)(piVar5 + 2);
          }
          break;
               case 5:
          if (*(long *)(lVar2 + 0x88) == 0) {
            uVar9 = uVar9 + 1;
            *(undefined8 *)(lVar2 + 0x88) = *(undefined8 *)(piVar5 + 2);
          }
          break;
               case 6:
          if (*(long *)(lVar2 + 0x90) == 0) {
            *(undefined8 *)(lVar2 + 0x90) = *(undefined8 *)(piVar5 + 2);
          }
          break;
               case 7:
          if (*(long *)(lVar2 + 0x98) == 0) {
            *(undefined8 *)(lVar2 + 0x98) = *(undefined8 *)(piVar5 + 2);
          }
          break;
               case 8:
          if (*(long *)(lVar2 + 0xa0) == 0) {
            *(undefined8 *)(lVar2 + 0xa0) = *(undefined8 *)(piVar5 + 2);
          }
          break;
               case 10:
          if (lVar3 == 0) {
            lVar3 = *(long *)(piVar5 + 2);
            *(long *)(lVar2 + 0x38) = lVar3;
          }
          break;
               case 0xb:
          if (*(long *)(lVar2 + 0x40) == 0) {
            uVar10 = uVar10 + 1;
            *(undefined8 *)(lVar2 + 0x40) = *(undefined8 *)(piVar5 + 2);
          }
          break;
               case 0xc:
          if (*(long *)(lVar2 + 0x48) == 0) {
            uVar10 = uVar10 + 1;
            *(undefined8 *)(lVar2 + 0x48) = *(undefined8 *)(piVar5 + 2);
          }
          break;
               case 0xd:
          if (*(long *)(lVar2 + 0x50) == 0) {
            uVar4 = uVar4 + 1;
            *(undefined8 *)(lVar2 + 0x50) = *(undefined8 *)(piVar5 + 2);
          }
          break;
               case 0xe:
          if (*(long *)(lVar2 + 0x58) == 0) {
            uVar4 = uVar4 + 1;
            *(undefined8 *)(lVar2 + 0x58) = *(undefined8 *)(piVar5 + 2);
          }
          break;
               case 0xf:
          if (*(long *)(lVar2 + 0x70) == 0) {
            uVar8 = uVar8 + 1;
            *(undefined8 *)(lVar2 + 0x70) = *(undefined8 *)(piVar5 + 2);
          }
          break;
               case 0x10:
          if (*(long *)(lVar2 + 0x78) == 0) {
            uVar8 = uVar8 + 1;
            *(undefined8 *)(lVar2 + 0x78) = *(undefined8 *)(piVar5 + 2);
          }
          break;
               for (int i_461 = 0; i_461 < 4; i_461++) {
                  case 0x14:
          if (*(long *)(lVar2 + 0xa8) == 0) {
            *(undefined8 *)(lVar2 + 0xa8) = *(undefined8 *)(piVar5 + 2);
          }
          break;
               }
               case 0x28:
          if (*(long *)(lVar2 + 200) == 0) {
            uVar7 = uVar7 + 1;
            *(undefined8 *)(lVar2 + 200) = *(undefined8 *)(piVar5 + 2);
          }
          break;
               case 0x29:
          if (*(long *)(lVar2 + 0xd0) == 0) {
            uVar7 = uVar7 + (iVar11 == 0);
            iVar11 = iVar11 + 1;
            *(undefined8 *)(lVar2 + 0xd0) = *(undefined8 *)(piVar5 + 2);
          }
          break;
               case 0x2a:
          if (*(long *)(lVar2 + 0xe0) == 0) {
            uVar6 = uVar6 + 1;
            *(undefined8 *)(lVar2 + 0xe0) = *(undefined8 *)(piVar5 + 2);
          }
          break;
               case 0x2b:
          if (*(long *)(lVar2 + 0xe8) == 0) {
            uVar6 = uVar6 + (iVar12 == 0);
            iVar12 = iVar12 + 1;
            *(undefined8 *)(lVar2 + 0xe8) = *(undefined8 *)(piVar5 + 2);
          }
          break;
               case 0x2c:
          if (*(long *)(lVar2 + 0xf8) == 0) {
            *(undefined8 *)(lVar2 + 0xf8) = *(undefined8 *)(piVar5 + 2);
          }
          break;
               case 0x2d:
          if (*(long *)(lVar2 + 0xd8) == 0) {
            uVar7 = uVar7 + (iVar11 == 0);
            iVar11 = iVar11 + 1;
            *(undefined8 *)(lVar2 + 0xd8) = *(undefined8 *)(piVar5 + 2);
          }
          break;
               case 0x2e:
          if (*(long *)(lVar2 + 0xf0) == 0) {
            uVar6 = uVar6 + (iVar12 == 0);
            iVar12 = iVar12 + 1;
            *(undefined8 *)(lVar2 + 0xf0) = *(undefined8 *)(piVar5 + 2);
          }
            }
            iVar1 = piVar5[4];
            piVar5 = piVar5 + 4;
         } while ( iVar1 != 0 );
      }
      if (( ( lVar3 != 0 ) && ( ( ( ( *(long*)( lVar2 + 0x30 ) != 0 || ( *(long*)( lVar2 + 0x90 ) != 0 ) ) || ( *(long*)( lVar2 + 0xa0 ) != 0 ) ) && ( ( *(long*)( lVar2 + 0xb0 ) != 0 && ( ( ( uVar4 | uVar10 | uVar9 | uVar8 | uVar7 | uVar6 ) & 0xfffffffd ) == 0 ) ) ) ) ) ) && ( ( *(long*)( lVar2 + 0x90 ) == 0 || ( ( *(long*)( lVar2 + 0x60 ) != 0 && ( *(long*)( lVar2 + 0x98 ) != 0 ) ) ) ) )) {
         *(long*)( lVar2 + 0x20 ) = param_3;
         if (param_3 != 0) {
            ossl_provider_up_ref(param_3);
         }
         local_44 = 0;
         EVP_KEYMGMT_names_do_all(lVar2, 0x100000, &local_44);
         *(undefined4*)( lVar2 + 8 ) = local_44;
         lVar3 = lVar2;
         goto LAB_001003b9;
      }
      EVP_KEYMGMT_free(lVar2);
      ERR_new();
      ERR_set_debug("crypto/evp/keymgmt_meth.c", 0x104, "keymgmt_from_algorithm");
      ERR_set_error(6, 0xc1, 0);
   }
   lVar3 = 0;
   LAB_001003b9:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return lVar3;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}undefined8 evp_keymgmt_newdata(long param_1) {
   undefined8 uVar1;
   uVar1 = EVP_KEYMGMT_get0_provider();
   uVar1 = ossl_provider_ctx(uVar1);
   if (*(code**)( param_1 + 0x30 ) != (code*)0x0) {
      for (int i_462 = 0; i_462 < 2; i_462++) {
         /* WARNING: Could not recover jumptable at 0x00100812. Too many branches */
      }
      uVar1 = ( **(code**)( param_1 + 0x30 ) )(uVar1);
      return uVar1;
   }
   return 0;
}void evp_keymgmt_freedata(long param_1, undefined8 param_2) {
   for (int i_463 = 0; i_463 < 2; i_463++) {
      /* WARNING: Could not recover jumptable at 0x0010082a. Too many branches */
   }
   ( **(code**)( param_1 + 0x38 ) )(param_2);
   return;
}undefined8 evp_keymgmt_gen_init(long param_1, undefined4 param_2, undefined8 param_3) {
   undefined8 uVar1;
   uVar1 = EVP_KEYMGMT_get0_provider();
   uVar1 = ossl_provider_ctx(uVar1);
   if (*(code**)( param_1 + 0x60 ) != (code*)0x0) {
      for (int i_464 = 0; i_464 < 2; i_464++) {
         /* WARNING: Could not recover jumptable at 0x00100862. Too many branches */
      }
      uVar1 = ( **(code**)( param_1 + 0x60 ) )(uVar1, param_2, param_3);
      return uVar1;
   }
   return 0;
}undefined8 evp_keymgmt_gen_set_template(long param_1, undefined8 param_2, undefined8 param_3) {
   undefined8 uVar1;
   if (*(code**)( param_1 + 0x68 ) != (code*)0x0) {
      for (int i_465 = 0; i_465 < 2; i_465++) {
         /* WARNING: Could not recover jumptable at 0x00100886. Too many branches */
      }
      uVar1 = ( **(code**)( param_1 + 0x68 ) )(param_2, param_3);
      return uVar1;
   }
   return 1;
}undefined8 evp_keymgmt_gen_set_params(long param_1, undefined8 param_2, undefined8 param_3) {
   undefined8 uVar1;
   if (*(code**)( param_1 + 0x80 ) != (code*)0x0) {
      for (int i_466 = 0; i_466 < 2; i_466++) {
         /* WARNING: Could not recover jumptable at 0x001008b9. Too many branches */
      }
      uVar1 = ( **(code**)( param_1 + 0x80 ) )(param_2, param_3);
      return uVar1;
   }
   return 0;
}undefined8 EVP_KEYMGMT_gen_settable_params(long param_1) {
   undefined8 uVar1;
   uVar1 = EVP_KEYMGMT_get0_provider();
   uVar1 = ossl_provider_ctx(uVar1);
   if (*(code**)( param_1 + 0x88 ) != (code*)0x0) {
      for (int i_467 = 0; i_467 < 2; i_467++) {
         /* WARNING: Could not recover jumptable at 0x001008f7. Too many branches */
      }
      uVar1 = ( **(code**)( param_1 + 0x88 ) )(0, uVar1);
      return uVar1;
   }
   return 0;
}undefined8 evp_keymgmt_gen_get_params(long param_1, undefined8 param_2, undefined8 param_3) {
   undefined8 uVar1;
   if (*(code**)( param_1 + 0x70 ) != (code*)0x0) {
      for (int i_468 = 0; i_468 < 2; i_468++) {
         /* WARNING: Could not recover jumptable at 0x00100926. Too many branches */
      }
      uVar1 = ( **(code**)( param_1 + 0x70 ) )(param_2, param_3);
      return uVar1;
   }
   return 0;
}undefined8 EVP_KEYMGMT_gen_gettable_params(long param_1) {
   undefined8 uVar1;
   uVar1 = EVP_KEYMGMT_get0_provider();
   uVar1 = ossl_provider_ctx(uVar1);
   if (*(code**)( param_1 + 0x78 ) != (code*)0x0) {
      for (int i_469 = 0; i_469 < 2; i_469++) {
         /* WARNING: Could not recover jumptable at 0x00100964. Too many branches */
      }
      uVar1 = ( **(code**)( param_1 + 0x78 ) )(0, uVar1);
      return uVar1;
   }
   return 0;
}undefined8 evp_keymgmt_gen(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4) {
   undefined8 uVar1;
   if (*(code**)( param_1 + 0x90 ) != (code*)0x0) {
      for (int i_470 = 0; i_470 < 2; i_470++) {
         /* WARNING: Could not recover jumptable at 0x0010099c. Too many branches */
      }
      uVar1 = ( **(code**)( param_1 + 0x90 ) )(param_2, param_3, param_4);
      return uVar1;
   }
   return 0;
}void evp_keymgmt_gen_cleanup(long param_1, undefined8 param_2) {
   if (*(code**)( param_1 + 0x98 ) != (code*)0x0) {
      for (int i_471 = 0; i_471 < 2; i_471++) {
         /* WARNING: Could not recover jumptable at 0x001009c6. Too many branches */
      }
      ( **(code**)( param_1 + 0x98 ) )(param_2);
      return;
   }
   return;
}bool evp_keymgmt_has_load(long param_1) {
   bool bVar1;
   bVar1 = false;
   if (param_1 != 0) {
      bVar1 = *(long*)( param_1 + 0xa0 ) != 0;
   }
   return bVar1;
}undefined8 evp_keymgmt_load(long param_1, undefined8 param_2, undefined8 param_3) {
   int iVar1;
   undefined8 uVar2;
   iVar1 = evp_keymgmt_has_load();
   if (iVar1 != 0) {
      for (int i_472 = 0; i_472 < 2; i_472++) {
         /* WARNING: Could not recover jumptable at 0x00100a2b. Too many branches */
      }
      uVar2 = ( **(code**)( param_1 + 0xa0 ) )(param_2, param_3);
      return uVar2;
   }
   return 0;
}undefined8 evp_keymgmt_get_params(long param_1, undefined8 param_2, undefined8 param_3) {
   undefined8 uVar1;
   if (*(code**)( param_1 + 0x40 ) != (code*)0x0) {
      for (int i_473 = 0; i_473 < 2; i_473++) {
         /* WARNING: Could not recover jumptable at 0x00100a56. Too many branches */
      }
      uVar1 = ( **(code**)( param_1 + 0x40 ) )(param_2, param_3);
      return uVar1;
   }
   return 1;
}undefined8 EVP_KEYMGMT_gettable_params(long param_1) {
   undefined8 uVar1;
   uVar1 = EVP_KEYMGMT_get0_provider();
   uVar1 = ossl_provider_ctx(uVar1);
   if (*(code**)( param_1 + 0x48 ) != (code*)0x0) {
      for (int i_474 = 0; i_474 < 2; i_474++) {
         /* WARNING: Could not recover jumptable at 0x00100a92. Too many branches */
      }
      uVar1 = ( **(code**)( param_1 + 0x48 ) )(uVar1);
      return uVar1;
   }
   return 0;
}undefined8 evp_keymgmt_set_params(long param_1, undefined8 param_2, undefined8 param_3) {
   undefined8 uVar1;
   if (*(code**)( param_1 + 0x50 ) != (code*)0x0) {
      for (int i_475 = 0; i_475 < 2; i_475++) {
         /* WARNING: Could not recover jumptable at 0x00100ab6. Too many branches */
      }
      uVar1 = ( **(code**)( param_1 + 0x50 ) )(param_2, param_3);
      return uVar1;
   }
   return 1;
}undefined8 EVP_KEYMGMT_settable_params(long param_1) {
   undefined8 uVar1;
   uVar1 = EVP_KEYMGMT_get0_provider();
   uVar1 = ossl_provider_ctx(uVar1);
   if (*(code**)( param_1 + 0x58 ) != (code*)0x0) {
      for (int i_476 = 0; i_476 < 2; i_476++) {
         /* WARNING: Could not recover jumptable at 0x00100af2. Too many branches */
      }
      uVar1 = ( **(code**)( param_1 + 0x58 ) )(uVar1);
      return uVar1;
   }
   return 0;
}void evp_keymgmt_has(long param_1, undefined8 param_2, undefined4 param_3) {
   for (int i_477 = 0; i_477 < 2; i_477++) {
      /* WARNING: Could not recover jumptable at 0x00100b0c. Too many branches */
   }
   ( **(code**)( param_1 + 0xb0 ) )(param_2, param_3);
   return;
}undefined8 evp_keymgmt_validate(long param_1, undefined8 param_2, undefined4 param_3, undefined4 param_4) {
   undefined8 uVar1;
   if (*(code**)( param_1 + 0xb8 ) != (code*)0x0) {
      for (int i_478 = 0; i_478 < 2; i_478++) {
         /* WARNING: Could not recover jumptable at 0x00100b3a. Too many branches */
      }
      uVar1 = ( **(code**)( param_1 + 0xb8 ) )(param_2, param_3, param_4);
      return uVar1;
   }
   return 1;
}undefined8 evp_keymgmt_match(long param_1, undefined8 param_2, undefined8 param_3, undefined4 param_4) {
   undefined8 uVar1;
   if (*(code**)( param_1 + 0xc0 ) != (code*)0x0) {
      for (int i_479 = 0; i_479 < 2; i_479++) {
         /* WARNING: Could not recover jumptable at 0x00100b6b. Too many branches */
      }
      uVar1 = ( **(code**)( param_1 + 0xc0 ) )(param_2, param_3, param_4);
      return uVar1;
   }
   return 0;
}undefined8 evp_keymgmt_import(long param_1, undefined8 param_2, undefined4 param_3, undefined8 param_4) {
   undefined8 uVar1;
   if (*(code**)( param_1 + 200 ) != (code*)0x0) {
      for (int i_480 = 0; i_480 < 2; i_480++) {
         /* WARNING: Could not recover jumptable at 0x00100b9b. Too many branches */
      }
      uVar1 = ( **(code**)( param_1 + 200 ) )(param_2, param_3, param_4);
      return uVar1;
   }
   return 0;
}undefined8 evp_keymgmt_import_types(long param_1, undefined4 param_2) {
   undefined8 uVar1;
   uVar1 = EVP_KEYMGMT_get0_provider();
   uVar1 = ossl_provider_ctx(uVar1);
   if (*(code**)( param_1 + 0xd8 ) != (code*)0x0) {
      for (int i_481 = 0; i_481 < 2; i_481++) {
         /* WARNING: Could not recover jumptable at 0x00100be3. Too many branches */
      }
      uVar1 = ( **(code**)( param_1 + 0xd8 ) )(uVar1, param_2);
      return uVar1;
   }
   if (*(code**)( param_1 + 0xd0 ) != (code*)0x0) {
      for (int i_482 = 0; i_482 < 2; i_482++) {
         /* WARNING: Could not recover jumptable at 0x00100bfc. Too many branches */
      }
      uVar1 = ( **(code**)( param_1 + 0xd0 ) )(param_2);
      return uVar1;
   }
   return 0;
}undefined8 evp_keymgmt_export(long param_1, undefined8 param_2, undefined4 param_3, undefined8 param_4, undefined8 param_5) {
   undefined8 uVar1;
   if (*(code**)( param_1 + 0xe0 ) != (code*)0x0) {
      for (int i_483 = 0; i_483 < 2; i_483++) {
         /* WARNING: Could not recover jumptable at 0x00100c2e. Too many branches */
      }
      uVar1 = ( **(code**)( param_1 + 0xe0 ) )(param_2, param_3, param_4, param_5);
      return uVar1;
   }
   return 0;
}undefined8 evp_keymgmt_export_types(long param_1, undefined4 param_2) {
   undefined8 uVar1;
   uVar1 = EVP_KEYMGMT_get0_provider();
   uVar1 = ossl_provider_ctx(uVar1);
   if (*(code**)( param_1 + 0xf0 ) != (code*)0x0) {
      for (int i_484 = 0; i_484 < 2; i_484++) {
         /* WARNING: Could not recover jumptable at 0x00100c73. Too many branches */
      }
      uVar1 = ( **(code**)( param_1 + 0xf0 ) )(uVar1, param_2);
      return uVar1;
   }
   if (*(code**)( param_1 + 0xe8 ) != (code*)0x0) {
      for (int i_485 = 0; i_485 < 2; i_485++) {
         /* WARNING: Could not recover jumptable at 0x00100c8c. Too many branches */
      }
      uVar1 = ( **(code**)( param_1 + 0xe8 ) )(param_2);
      return uVar1;
   }
   return 0;
}undefined8 evp_keymgmt_dup(long param_1, undefined8 param_2, undefined4 param_3) {
   undefined8 uVar1;
   if (*(code**)( param_1 + 0xf8 ) != (code*)0x0) {
      for (int i_486 = 0; i_486 < 2; i_486++) {
         /* WARNING: Could not recover jumptable at 0x00100cb8. Too many branches */
      }
      uVar1 = ( **(code**)( param_1 + 0xf8 ) )(param_2, param_3);
      return uVar1;
   }
   return 0;
}
