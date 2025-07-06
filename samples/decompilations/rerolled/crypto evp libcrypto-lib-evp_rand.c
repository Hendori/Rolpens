undefined8 evp_rand_generate_locked(long *param_1, long param_2, ulong param_3, undefined4 param_4, undefined4 param_5, undefined8 param_6) {
   int iVar1;
   undefined8 uVar2;
   ulong uVar3;
   long in_FS_OFFSET;
   undefined1 local_d8[32];
   undefined8 local_b8;
   ulong local_a0;
   undefined1 local_98[16];
   undefined1 local_88[16];
   undefined1 local_78[16];
   undefined1 local_68[16];
   undefined1 local_58[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_98 = (undefined1[16])0x0;
   local_a0 = 0;
   local_88 = (undefined1[16])0x0;
   local_78 = (undefined1[16])0x0;
   local_68 = (undefined1[16])0x0;
   local_58 = (undefined1[16])0x0;
   OSSL_PARAM_construct_size_t(local_d8, "max_request", &local_a0);
   local_78._0_8_ = local_b8;
   iVar1 = ( **(code**)( *param_1 + 0xa0 ) )(param_1[1], local_98);
   if (( iVar1 == 0 ) || ( local_a0 == 0 )) {
      ERR_new();
      ERR_set_debug("crypto/evp/evp_rand.c", 0x235, "evp_rand_generate_locked");
      ERR_set_error(6, 0xd7, 0);
      LAB_0010014e:uVar2 = 0;
   } else {
      if (param_3 != 0) {
         while (true) {
            uVar3 = local_a0;
            if (param_3 < local_a0) {
               uVar3 = param_3;
            }
            iVar1 = ( **(code**)( *param_1 + 0x50 ) )(param_1[1], param_2, uVar3, param_4, param_5, param_6);
            if (iVar1 == 0) {
               ERR_new();
               ERR_set_debug("crypto/evp/evp_rand.c", 0x23c, "evp_rand_generate_locked");
               ERR_set_error(6, 0xd6, 0);
               goto LAB_0010014e;
            }
            param_2 = param_2 + uVar3;
            param_3 = param_3 - uVar3;
            if (param_3 == 0) break;
            param_5 = 0;
         };
      }
      uVar2 = 1;
   }
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}void evp_rand_free(undefined8 *param_1) {
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
}undefined8 evp_rand_up_ref(long param_1) {
   if (param_1 != 0) {
      LOCK();
      *(int*)( param_1 + 0x20 ) = *(int*)( param_1 + 0x20 ) + 1;
      UNLOCK();
   }
   return 1;
}/* WARNING: Type propagation algorithm not settling */long *evp_rand_from_algorithm(undefined4 param_1, long param_2, long param_3) {
   long *plVar1;
   int iVar2;
   long *ptr;
   long lVar3;
   int iVar4;
   int iVar5;
   uint uVar6;
   uint uVar7;
   int *piVar8;
   piVar8 = *(int**)( param_2 + 0x10 );
   ptr = (long*)CRYPTO_zalloc(200, "crypto/evp/evp_rand.c", 0x51);
   if (ptr == (long*)0x0) {
      ERR_new();
      ERR_set_debug("crypto/evp/evp_rand.c", 0x81, "evp_rand_from_algorithm");
      ERR_set_error(6, 0x80006, 0);
   } else {
      plVar1 = ptr + 4;
      LOCK();
      *(int*)plVar1 = 1;
      UNLOCK();
      *(undefined4*)( ptr + 1 ) = param_1;
      lVar3 = ossl_algorithm_get1_first_name();
      ptr[2] = lVar3;
      if (lVar3 == 0) {
         LOCK();
         lVar3 = *plVar1;
         *(int*)plVar1 = (int)*plVar1 + -1;
         UNLOCK();
         if (( (int)lVar3 == 1 ) || ( (int)lVar3 + -1 < 1 )) {
            CRYPTO_free((void*)ptr[2]);
            ossl_provider_free(*ptr);
            CRYPTO_free(ptr);
         }
      } else {
         lVar3 = *(long*)( param_2 + 0x18 );
         ptr[5] = (long)piVar8;
         ptr[3] = lVar3;
         iVar2 = *piVar8;
         if (iVar2 != 0) {
            uVar7 = 0;
            uVar6 = 0;
            iVar5 = 0;
            iVar4 = 0;
            do {
               switch (iVar2) {
                  case 1:
            if (ptr[6] != 0) break;
            ptr[6] = *(long *)(piVar8 + 2);
            iVar2 = piVar8[4];
joined_r0x001006d0:
            iVar5 = iVar5 + 1;
            goto joined_r0x00100670;
                  case 2:
            if (ptr[7] == 0) {
              ptr[7] = *(long *)(piVar8 + 2);
              iVar2 = piVar8[4];
              goto joined_r0x001006d0;
            }
            break;
                  case 3:
            if (ptr[8] == 0) {
              ptr[8] = *(long *)(piVar8 + 2);
              iVar2 = piVar8[4];
joined_r0x00100670:
              iVar4 = iVar4 + 1;
              goto joined_r0x00100670;
            }
            break;
                  case 4:
            if (ptr[9] == 0) {
              ptr[9] = *(long *)(piVar8 + 2);
              iVar2 = piVar8[4];
              goto joined_r0x00100670;
            }
            break;
                  case 5:
            if (ptr[10] == 0) {
              iVar4 = iVar4 + 1;
              ptr[10] = *(long *)(piVar8 + 2);
              iVar2 = piVar8[4];
              goto joined_r0x00100670;
            }
            break;
                  case 6:
            if (ptr[0xb] == 0) {
              ptr[0xb] = *(long *)(piVar8 + 2);
              iVar2 = piVar8[4];
              goto joined_r0x00100670;
            }
            break;
                  case 7:
            if (ptr[0xc] == 0) {
              ptr[0xc] = *(long *)(piVar8 + 2);
              iVar2 = piVar8[4];
              goto joined_r0x00100670;
            }
            break;
                  case 8:
            if (ptr[0xd] == 0) {
              uVar7 = uVar7 + 1;
              ptr[0xd] = *(long *)(piVar8 + 2);
              iVar2 = piVar8[4];
              goto joined_r0x00100670;
            }
            break;
                  case 9:
            if (ptr[0xe] == 0) {
              ptr[0xe] = *(long *)(piVar8 + 2);
              iVar2 = piVar8[4];
joined_r0x00100550:
              uVar6 = uVar6 + 1;
              goto joined_r0x00100670;
            }
            break;
                  case 10:
            if (ptr[0xf] == 0) {
              ptr[0xf] = *(long *)(piVar8 + 2);
              iVar2 = piVar8[4];
              goto joined_r0x00100550;
            }
            break;
                  for (int i_2451 = 0; i_2451 < 4; i_2451++) {
                     case 0xb:
            if (ptr[0x10] == 0) {
              ptr[0x10] = *(long *)(piVar8 + 2);
              iVar2 = piVar8[4];
              goto joined_r0x00100670;
            }
            break;
                  }
                  case 0xf:
            if (ptr[0x14] == 0) {
              iVar5 = iVar5 + 1;
              ptr[0x14] = *(long *)(piVar8 + 2);
              iVar2 = piVar8[4];
              goto joined_r0x00100670;
            }
            break;
                  case 0x10:
            if (ptr[0x15] == 0) {
              ptr[0x15] = *(long *)(piVar8 + 2);
              iVar2 = piVar8[4];
              goto joined_r0x00100670;
            }
            break;
                  case 0x11:
            if (ptr[0x16] == 0) {
              ptr[0x16] = *(long *)(piVar8 + 2);
              iVar2 = piVar8[4];
              goto joined_r0x00100670;
            }
            break;
                  case 0x12:
            if (ptr[0x17] == 0) {
              ptr[0x17] = *(long *)(piVar8 + 2);
              iVar2 = piVar8[4];
              goto joined_r0x00100670;
            }
            break;
                  case 0x13:
            if (ptr[0x18] == 0) {
              ptr[0x18] = *(long *)(piVar8 + 2);
              iVar2 = piVar8[4];
              goto joined_r0x00100670;
            }
               }
               iVar2 = piVar8[4];
               joined_r0x00100670:piVar8 = piVar8 + 4;
            } while ( iVar2 != 0 );
            if (( ( ( iVar4 == 3 ) && ( iVar5 == 3 ) ) && ( uVar7 < 2 ) ) && ( ( uVar6 & 0xfffffffd ) == 0 )) {
               if (( param_3 != 0 ) && ( iVar2 = iVar2 == 0 )) {
                  LOCK();
                  lVar3 = *plVar1;
                  *(int*)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  if (( (int)lVar3 == 1 ) || ( (int)lVar3 + -1 < 1 )) {
                     CRYPTO_free((void*)ptr[2]);
                     ossl_provider_free(*ptr);
                     CRYPTO_free(ptr);
                  }
                  ERR_new();
                  ERR_set_debug("crypto/evp/evp_rand.c", 0x115, "evp_rand_from_algorithm");
                  ERR_set_error(6, 0xc0103, 0);
                  return (long*)0x0;
               }
               *ptr = param_3;
               return ptr;
            }
         }
         LOCK();
         lVar3 = *plVar1;
         *(int*)plVar1 = (int)*plVar1 + -1;
         UNLOCK();
         if (( (int)lVar3 == 1 ) || ( (int)lVar3 + -1 < 1 )) {
            CRYPTO_free((void*)ptr[2]);
            ossl_provider_free(*ptr);
            CRYPTO_free(ptr);
         }
         ERR_new();
         ERR_set_debug("crypto/evp/evp_rand.c", 0x10f, "evp_rand_from_algorithm");
         ERR_set_error(6, 0xc1, 0);
      }
   }
   return (long*)0x0;
}undefined8 EVP_RAND_enable_locking(long *param_1) {
   undefined8 uVar1;
   if (*(code**)( *param_1 + 0x68 ) != (code*)0x0) {
      for (int i_2452 = 0; i_2452 < 2; i_2452++) {
         /* WARNING: Could not recover jumptable at 0x00100884. Too many branches */
      }
      uVar1 = ( **(code**)( *param_1 + 0x68 ) )(param_1[1]);
      return uVar1;
   }
   ERR_new();
   ERR_set_debug("crypto/evp/evp_rand.c", 0x62, "EVP_RAND_enable_locking");
   ERR_set_error(6, 0xd5, 0);
   return 0;
}void EVP_RAND_fetch(undefined8 param_1, undefined8 param_2, undefined8 param_3) {
   evp_generic_fetch(param_1, 5, param_2, param_3, evp_rand_from_algorithm, evp_rand_up_ref, evp_rand_free);
   return;
}undefined8 EVP_RAND_up_ref(long param_1) {
   if (param_1 != 0) {
      LOCK();
      *(int*)( param_1 + 0x20 ) = *(int*)( param_1 + 0x20 ) + 1;
      UNLOCK();
   }
   return 1;
}void EVP_RAND_free(undefined8 *param_1) {
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
}undefined4 evp_rand_get_number(long param_1) {
   return *(undefined4*)( param_1 + 8 );
}undefined8 EVP_RAND_get0_name(long param_1) {
   return *(undefined8*)( param_1 + 0x10 );
}undefined8 EVP_RAND_get0_description(long param_1) {
   return *(undefined8*)( param_1 + 0x18 );
}bool EVP_RAND_is_a(undefined8 *param_1, undefined8 param_2) {
   int iVar1;
   if (param_1 != (undefined8*)0x0) {
      iVar1 = evp_is_a(*param_1, *(undefined4*)( param_1 + 1 ), 0, param_2);
      return iVar1 != 0;
   }
   return false;
}undefined8 EVP_RAND_get0_provider(undefined8 *param_1) {
   return *param_1;
}undefined8 EVP_RAND_get_params(long param_1, undefined8 param_2) {
   undefined8 uVar1;
   if (*(code**)( param_1 + 0x98 ) != (code*)0x0) {
      for (int i_2453 = 0; i_2453 < 2; i_2453++) {
         /* WARNING: Could not recover jumptable at 0x00100a43. Too many branches */
      }
      uVar1 = ( **(code**)( param_1 + 0x98 ) )(param_2);
      return uVar1;
   }
   return 1;
}undefined8 EVP_RAND_CTX_up_ref(long param_1) {
   LOCK();
   *(int*)( param_1 + 0x18 ) = *(int*)( param_1 + 0x18 ) + 1;
   UNLOCK();
   return 1;
}void EVP_RAND_CTX_free(long *param_1) {
   long *plVar1;
   long lVar2;
   if (param_1 == (long*)0x0) {
      return;
   }
   while (true) {
      LOCK();
      plVar1 = param_1 + 3;
      lVar2 = *plVar1;
      *(int*)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (( (int)lVar2 != 1 ) && ( 0 < (int)lVar2 + -1 )) break;
      plVar1 = (long*)param_1[2];
      ( **(code**)( *param_1 + 0x38 ) )(param_1[1]);
      param_1[1] = 0;
      EVP_RAND_free(*param_1);
      CRYPTO_free(param_1);
      param_1 = plVar1;
      if (plVar1 == (long*)0x0) {
         return;
      }
   };
   return;
}undefined8 *EVP_RAND_CTX_new(undefined8 *param_1, long *param_2) {
   code *pcVar1;
   int iVar2;
   undefined8 *ptr;
   undefined8 uVar3;
   long lVar4;
   undefined8 uVar5;
   if (param_1 == (undefined8*)0x0) {
      ERR_new();
      ERR_set_debug("crypto/evp/evp_rand.c", 0x15d, "EVP_RAND_CTX_new");
      ERR_set_error(6, 0xda, 0);
   } else {
      ptr = (undefined8*)CRYPTO_zalloc(0x28, "crypto/evp/evp_rand.c", 0x161);
      if (ptr != (undefined8*)0x0) {
         LOCK();
         *(undefined4*)( ptr + 3 ) = 1;
         UNLOCK();
         if (param_2 == (long*)0x0) {
            uVar5 = 0;
            lVar4 = 0;
         } else {
            iVar2 = EVP_RAND_CTX_up_ref(param_2);
            if (iVar2 == 0) {
               ERR_new();
               ERR_set_debug("crypto/evp/evp_rand.c", 0x16a, "EVP_RAND_CTX_new");
               ERR_set_error(6, 0xc0103, 0);
               CRYPTO_free(ptr);
               return (undefined8*)0x0;
            }
            lVar4 = param_2[1];
            uVar5 = *(undefined8*)( *param_2 + 0x28 );
         }
         pcVar1 = (code*)param_1[6];
         uVar3 = ossl_provider_ctx(*param_1);
         lVar4 = ( *pcVar1 )(uVar3, lVar4, uVar5);
         ptr[1] = lVar4;
         if (( lVar4 != 0 ) && ( iVar2 = iVar2 != 0 )) {
            *ptr = param_1;
            ptr[2] = param_2;
            return ptr;
         }
         ERR_new();
         ERR_set_debug("crypto/evp/evp_rand.c", 0x175, "EVP_RAND_CTX_new");
         ERR_set_error(6, 0x80006, 0);
         ( *(code*)param_1[7] )(ptr[1]);
         CRYPTO_free(ptr);
         EVP_RAND_CTX_free(param_2);
      }
   }
   return (undefined8*)0x0;
}undefined8 EVP_RAND_CTX_get0_rand(undefined8 *param_1) {
   return *param_1;
}undefined4 EVP_RAND_CTX_get_params(long *param_1, undefined8 param_2) {
   int iVar1;
   undefined4 uVar2;
   long lVar3;
   long lVar4;
   lVar3 = *param_1;
   lVar4 = param_1[1];
   if (*(code**)( lVar3 + 0x70 ) != (code*)0x0) {
      iVar1 = ( **(code**)( lVar3 + 0x70 ) )(lVar4);
      if (iVar1 == 0) {
         return 0;
      }
      lVar3 = *param_1;
      lVar4 = param_1[1];
   }
   uVar2 = ( **(code**)( lVar3 + 0xa0 ) )(lVar4, param_2);
   if (*(code**)( *param_1 + 0x78 ) != (code*)0x0) {
      ( **(code**)( *param_1 + 0x78 ) )(param_1[1]);
   }
   return uVar2;
}undefined4 EVP_RAND_CTX_set_params(long *param_1, undefined8 param_2) {
   int iVar1;
   undefined4 uVar2;
   long lVar3;
   lVar3 = *param_1;
   if (*(code**)( lVar3 + 0x70 ) != (code*)0x0) {
      iVar1 = ( **(code**)( lVar3 + 0x70 ) )(param_1[1]);
      if (iVar1 == 0) {
         return 0;
      }
      lVar3 = *param_1;
   }
   uVar2 = 1;
   if (*(code**)( lVar3 + 0xa8 ) != (code*)0x0) {
      uVar2 = ( **(code**)( lVar3 + 0xa8 ) )(param_1[1], param_2);
      lVar3 = *param_1;
   }
   if (*(code**)( lVar3 + 0x78 ) != (code*)0x0) {
      ( **(code**)( lVar3 + 0x78 ) )(param_1[1]);
   }
   return uVar2;
}undefined8 EVP_RAND_gettable_params(long param_1) {
   code *UNRECOVERED_JUMPTABLE;
   undefined8 uVar1;
   UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x80 );
   if (UNRECOVERED_JUMPTABLE != (code*)0x0) {
      uVar1 = EVP_RAND_get0_provider();
      uVar1 = ossl_provider_ctx(uVar1);
      for (int i_2454 = 0; i_2454 < 2; i_2454++) {
         /* WARNING: Could not recover jumptable at 0x00100d85. Too many branches */
      }
      uVar1 = ( *UNRECOVERED_JUMPTABLE )(uVar1);
      return uVar1;
   }
   return 0;
}undefined8 EVP_RAND_gettable_ctx_params(long param_1) {
   undefined8 uVar1;
   if (*(long*)( param_1 + 0x88 ) != 0) {
      uVar1 = EVP_RAND_get0_provider();
      uVar1 = ossl_provider_ctx(uVar1);
      for (int i_2455 = 0; i_2455 < 2; i_2455++) {
         /* WARNING: Could not recover jumptable at 0x00100dcc. Too many branches */
      }
      uVar1 = ( **(code**)( param_1 + 0x88 ) )(0, uVar1);
      return uVar1;
   }
   return 0;
}undefined8 EVP_RAND_settable_ctx_params(long param_1) {
   undefined8 uVar1;
   if (*(long*)( param_1 + 0x90 ) != 0) {
      uVar1 = EVP_RAND_get0_provider();
      uVar1 = ossl_provider_ctx(uVar1);
      for (int i_2456 = 0; i_2456 < 2; i_2456++) {
         /* WARNING: Could not recover jumptable at 0x00100e0c. Too many branches */
      }
      uVar1 = ( **(code**)( param_1 + 0x90 ) )(0, uVar1);
      return uVar1;
   }
   return 0;
}undefined8 EVP_RAND_CTX_gettable_params(long *param_1) {
   undefined8 uVar1;
   if (*(long*)( *param_1 + 0x88 ) != 0) {
      uVar1 = EVP_RAND_get0_provider();
      uVar1 = ossl_provider_ctx(uVar1);
      for (int i_2457 = 0; i_2457 < 2; i_2457++) {
         /* WARNING: Could not recover jumptable at 0x00100e54. Too many branches */
      }
      uVar1 = ( **(code**)( *param_1 + 0x88 ) )(param_1[1], uVar1);
      return uVar1;
   }
   return 0;
}undefined8 EVP_RAND_CTX_settable_params(long *param_1) {
   undefined8 uVar1;
   if (*(long*)( *param_1 + 0x90 ) != 0) {
      uVar1 = EVP_RAND_get0_provider();
      uVar1 = ossl_provider_ctx(uVar1);
      for (int i_2458 = 0; i_2458 < 2; i_2458++) {
         /* WARNING: Could not recover jumptable at 0x00100ea4. Too many branches */
      }
      uVar1 = ( **(code**)( *param_1 + 0x90 ) )(param_1[1], uVar1);
      return uVar1;
   }
   return 0;
}void EVP_RAND_do_all_provided(undefined8 param_1, undefined8 param_2, undefined8 param_3) {
   evp_generic_do_all(param_1, 5, param_2, param_3, evp_rand_from_algorithm, evp_rand_up_ref, evp_rand_free);
   return;
}undefined8 EVP_RAND_names_do_all(long *param_1, undefined8 param_2, undefined8 param_3) {
   undefined8 uVar1;
   if (*param_1 == 0) {
      return 1;
   }
   uVar1 = evp_names_do_all(*param_1, (int)param_1[1], param_2, param_3);
   return uVar1;
}undefined4 EVP_RAND_instantiate(long *param_1, undefined4 param_2, undefined4 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6) {
   int iVar1;
   undefined4 uVar2;
   long lVar3;
   long lVar4;
   lVar3 = *param_1;
   lVar4 = param_1[1];
   if (*(code**)( lVar3 + 0x70 ) != (code*)0x0) {
      iVar1 = ( **(code**)( lVar3 + 0x70 ) )(lVar4);
      if (iVar1 == 0) {
         return 0;
      }
      lVar3 = *param_1;
      lVar4 = param_1[1];
   }
   uVar2 = ( **(code**)( lVar3 + 0x40 ) )(lVar4, param_2, param_3, param_4, param_5, param_6);
   if (*(code**)( *param_1 + 0x78 ) != (code*)0x0) {
      ( **(code**)( *param_1 + 0x78 ) )(param_1[1]);
   }
   return uVar2;
}undefined4 EVP_RAND_uninstantiate(long *param_1) {
   int iVar1;
   undefined4 uVar2;
   long lVar4;
   long lVar3;
   lVar3 = *param_1;
   lVar4 = param_1[1];
   if (*(code**)( lVar3 + 0x70 ) != (code*)0x0) {
      iVar1 = ( **(code**)( lVar3 + 0x70 ) )(lVar4);
      if (iVar1 == 0) {
         return 0;
      }
      lVar3 = *param_1;
      lVar4 = param_1[1];
   }
   uVar2 = ( **(code**)( lVar3 + 0x48 ) )(lVar4);
   if (*(code**)( *param_1 + 0x78 ) != (code*)0x0) {
      ( **(code**)( *param_1 + 0x78 ) )(param_1[1]);
   }
   return uVar2;
}undefined4 EVP_RAND_generate(long *param_1, undefined8 param_2, undefined8 param_3, undefined4 param_4, undefined4 param_5, undefined8 param_6) {
   int iVar1;
   undefined4 uVar2;
   if (( *(code**)( *param_1 + 0x70 ) != (code*)0x0 ) && ( iVar1 = iVar1 == 0 )) {
      return 0;
   }
   uVar2 = evp_rand_generate_locked(param_1, param_2, param_3, param_4, param_5, param_6);
   if (*(code**)( *param_1 + 0x78 ) != (code*)0x0) {
      ( **(code**)( *param_1 + 0x78 ) )(param_1[1]);
   }
   return uVar2;
}undefined4 EVP_RAND_reseed(long *param_1, undefined4 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6) {
   int iVar1;
   undefined4 uVar2;
   long lVar3;
   lVar3 = *param_1;
   if (*(code**)( lVar3 + 0x70 ) != (code*)0x0) {
      iVar1 = ( **(code**)( lVar3 + 0x70 ) )(param_1[1]);
      if (iVar1 == 0) {
         return 0;
      }
      lVar3 = *param_1;
   }
   uVar2 = 1;
   if (*(code**)( lVar3 + 0x58 ) != (code*)0x0) {
      uVar2 = ( **(code**)( lVar3 + 0x58 ) )(param_1[1], param_2, param_3, param_4, param_5, param_6);
      lVar3 = *param_1;
   }
   if (*(code**)( lVar3 + 0x78 ) != (code*)0x0) {
      ( **(code**)( lVar3 + 0x78 ) )(param_1[1]);
   }
   return uVar2;
}undefined4 EVP_RAND_get_strength(long *param_1) {
   int iVar1;
   undefined4 uVar2;
   long in_FS_OFFSET;
   undefined1 local_b8[32];
   undefined8 local_98;
   undefined4 local_7c;
   undefined1 local_78[16];
   undefined1 local_68[16];
   undefined1 local_58[16];
   undefined1 local_48[16];
   undefined1 local_38[16];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(code**)( *param_1 + 0x70 ) != (code*)0x0) {
      uVar2 = 0;
      iVar1 = ( **(code**)( *param_1 + 0x70 ) )(param_1[1]);
      if (iVar1 == 0) goto LAB_001011e6;
   }
   local_78 = (undefined1[16])0x0;
   local_68 = (undefined1[16])0x0;
   local_58 = (undefined1[16])0x0;
   local_48 = (undefined1[16])0x0;
   local_38 = (undefined1[16])0x0;
   local_7c = 0;
   OSSL_PARAM_construct_uint(local_b8, "strength", &local_7c);
   local_58._0_8_ = local_98;
   iVar1 = ( **(code**)( *param_1 + 0xa0 ) )(param_1[1], local_78);
   uVar2 = 0;
   if (iVar1 != 0) {
      uVar2 = local_7c;
   }
   if (*(code**)( *param_1 + 0x78 ) != (code*)0x0) {
      ( **(code**)( *param_1 + 0x78 ) )(param_1[1]);
   }
   LAB_001011e6:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}int EVP_RAND_nonce(long *param_1, undefined8 param_2, undefined8 param_3) {
   int iVar1;
   long lVar2;
   undefined4 uVar3;
   long in_FS_OFFSET;
   undefined1 local_c8[32];
   undefined8 local_a8;
   undefined4 local_8c;
   undefined1 local_88[16];
   undefined1 local_78[16];
   undefined1 local_68[16];
   undefined1 local_58[16];
   undefined1 local_48[16];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(code**)( *param_1 + 0x70 ) != (code*)0x0) {
      iVar1 = ( **(code**)( *param_1 + 0x70 ) )(param_1[1]);
      if (iVar1 == 0) goto LAB_00101311;
   }
   local_88 = (undefined1[16])0x0;
   local_78 = (undefined1[16])0x0;
   local_68 = (undefined1[16])0x0;
   local_58 = (undefined1[16])0x0;
   local_48 = (undefined1[16])0x0;
   local_8c = 0;
   OSSL_PARAM_construct_uint(local_c8, "strength", &local_8c);
   local_68._0_8_ = local_a8;
   iVar1 = ( **(code**)( *param_1 + 0xa0 ) )(param_1[1], local_88);
   uVar3 = 0;
   if (iVar1 != 0) {
      uVar3 = local_8c;
   }
   lVar2 = *param_1;
   if (*(code**)( lVar2 + 0x60 ) == (code*)0x0) {
      iVar1 = 0;
   } else {
      lVar2 = ( **(code**)( lVar2 + 0x60 ) )(param_1[1], param_2, uVar3, param_3, param_3);
      if (lVar2 == 0) {
         iVar1 = evp_rand_generate_locked(param_1, param_2, param_3, uVar3, 0, 0);
         lVar2 = *param_1;
      } else {
         lVar2 = *param_1;
         iVar1 = 1;
      }
   }
   if (*(code**)( lVar2 + 0x78 ) != (code*)0x0) {
      ( **(code**)( lVar2 + 0x78 ) )(param_1[1]);
   }
   LAB_00101311:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}undefined4 EVP_RAND_get_state(undefined8 param_1) {
   int iVar1;
   undefined4 uVar2;
   long in_FS_OFFSET;
   undefined1 local_a8[32];
   undefined8 local_88;
   undefined4 local_6c;
   undefined1 local_68[16];
   undefined1 local_58[16];
   undefined1 local_48[16];
   undefined1 local_38[16];
   undefined1 local_28[16];
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   local_68 = (undefined1[16])0x0;
   local_58 = (undefined1[16])0x0;
   local_48 = (undefined1[16])0x0;
   local_38 = (undefined1[16])0x0;
   local_28 = (undefined1[16])0x0;
   OSSL_PARAM_construct_int(local_a8, "state", &local_6c);
   local_48._0_8_ = local_88;
   iVar1 = EVP_RAND_CTX_get_params(param_1, local_68);
   uVar2 = 2;
   if (iVar1 != 0) {
      uVar2 = local_6c;
   }
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}undefined4 EVP_RAND_verify_zeroization(long *param_1) {
   int iVar1;
   undefined4 uVar2;
   long lVar3;
   lVar3 = *param_1;
   if (*(code**)( lVar3 + 0x70 ) != (code*)0x0) {
      iVar1 = ( **(code**)( lVar3 + 0x70 ) )(param_1[1]);
      if (iVar1 == 0) {
         return 0;
      }
      lVar3 = *param_1;
   }
   uVar2 = 0;
   if (*(code**)( lVar3 + 0xb0 ) != (code*)0x0) {
      uVar2 = ( **(code**)( lVar3 + 0xb0 ) )(param_1[1]);
      lVar3 = *param_1;
   }
   if (*(code**)( lVar3 + 0x78 ) != (code*)0x0) {
      ( **(code**)( lVar3 + 0x78 ) )(param_1[1]);
   }
   return uVar2;
}bool evp_rand_can_seed(long *param_1) {
   return *(long*)( *param_1 + 0xb8 ) != 0;
}long evp_rand_get_seed(long *param_1, undefined8 param_2, undefined4 param_3, undefined8 param_4, undefined8 param_5, ulong param_6, undefined8 param_7, undefined8 param_8) {
   int iVar1;
   long lVar2;
   long lVar3;
   lVar2 = *param_1;
   if (*(code**)( lVar2 + 0x70 ) != (code*)0x0) {
      iVar1 = ( **(code**)( lVar2 + 0x70 ) )(param_1[1]);
      if (iVar1 == 0) {
         return 0;
      }
      lVar2 = *param_1;
      param_6 = param_6 & 0xffffffff;
   }
   lVar3 = 0;
   if (*(code**)( lVar2 + 0xb8 ) != (code*)0x0) {
      iVar1 = ( **(code**)( lVar2 + 0xb8 ) )(param_1[1], param_2, param_3, param_4, param_5, param_6, param_7, param_8);
      lVar2 = *param_1;
      lVar3 = (long)iVar1;
   }
   if (*(code**)( lVar2 + 0x78 ) != (code*)0x0) {
      ( **(code**)( lVar2 + 0x78 ) )(param_1[1]);
   }
   return lVar3;
}void evp_rand_clear_seed(long *param_1, undefined8 param_2, undefined8 param_3) {
   int iVar1;
   long lVar2;
   lVar2 = *param_1;
   if (*(code**)( lVar2 + 0x70 ) != (code*)0x0) {
      iVar1 = ( **(code**)( lVar2 + 0x70 ) )(param_1[1]);
      if (iVar1 == 0) {
         return;
      }
      lVar2 = *param_1;
   }
   if (*(code**)( lVar2 + 0xc0 ) != (code*)0x0) {
      ( **(code**)( lVar2 + 0xc0 ) )(param_1[1], param_2, param_3);
      lVar2 = *param_1;
   }
   if (*(code**)( lVar2 + 0x78 ) == (code*)0x0) {
      return;
   }
   for (int i_2459 = 0; i_2459 < 2; i_2459++) {
      /* WARNING: Could not recover jumptable at 0x001015a6. Too many branches */
   }
   ( **(code**)( lVar2 + 0x78 ) )(param_1[1]);
   return;
}
