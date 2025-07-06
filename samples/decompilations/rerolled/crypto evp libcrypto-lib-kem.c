undefined8 EVP_PKEY_encapsulate(int *param_1, long param_2, undefined8 param_3, long param_4) {
   undefined8 uVar1;
   if (param_1 == (int*)0x0) {
      return 0;
   }
   if (*param_1 == 0x1000) {
      if (*(long*)( param_1 + 0xc ) == 0) {
         ERR_new();
         ERR_set_debug("crypto/evp/kem.c", 0xee, "EVP_PKEY_encapsulate");
         ERR_set_error(6, 0x96, 0);
         uVar1 = 0xfffffffe;
      } else if (( param_2 == 0 ) || ( uVar1 = param_4 != 0 )) {
         for (int i_323 = 0; i_323 < 2; i_323++) {
            /* WARNING: Could not recover jumptable at 0x00100047. Too many branches */
         }
         uVar1 = ( **(code**)( *(long*)( param_1 + 10 ) + 0x38 ) )(*(long*)( param_1 + 0xc ));
         return uVar1;
      }
   } else {
      ERR_new();
      ERR_set_debug("crypto/evp/kem.c", 0xe9, "EVP_PKEY_encapsulate");
      ERR_set_error(6, 0x97, 0);
      uVar1 = 0xffffffff;
   }
   return uVar1;
}undefined8 EVP_PKEY_decapsulate(int *param_1, long param_2, long param_3, long param_4, long param_5) {
   undefined8 uVar1;
   if (( ( ( param_1 != (int*)0x0 ) && ( param_4 != 0 ) ) && ( param_5 != 0 ) ) && ( param_3 != 0 || param_2 != 0 )) {
      if (*param_1 == 0x2000) {
         if (*(long*)( param_1 + 0xc ) != 0) {
            for (int i_324 = 0; i_324 < 2; i_324++) {
               /* WARNING: Could not recover jumptable at 0x0010010f. Too many branches */
            }
            uVar1 = ( **(code**)( *(long*)( param_1 + 10 ) + 0x48 ) )(*(long*)( param_1 + 0xc ));
            return uVar1;
         }
         ERR_new();
         ERR_set_debug("crypto/evp/kem.c", 0x115, "EVP_PKEY_decapsulate");
         ERR_set_error(6, 0x96, 0);
         uVar1 = 0xfffffffe;
      } else {
         ERR_new();
         ERR_set_debug("crypto/evp/kem.c", 0x110, "EVP_PKEY_decapsulate");
         ERR_set_error(6, 0x97, 0);
         uVar1 = 0xffffffff;
      }
      return uVar1;
   }
   return 0;
}void EVP_KEM_free(void *param_1) {
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
}void evp_kem_free(void) {
   EVP_KEM_free();
   return;
}undefined4 *evp_kem_from_algorithm(undefined4 param_1, long param_2, undefined8 param_3) {
   int iVar1;
   undefined4 *ptr;
   long lVar2;
   uint uVar3;
   int *piVar4;
   uint uVar5;
   uint uVar6;
   int iVar7;
   uint uVar8;
   piVar4 = *(int**)( param_2 + 0x10 );
   ptr = (undefined4*)CRYPTO_zalloc(0x90, "crypto/evp/kem.c", 0x11e);
   if (ptr != (undefined4*)0x0) {
      LOCK();
      ptr[8] = 1;
      UNLOCK();
      iVar1 = ossl_provider_up_ref(param_3);
      if (iVar1 != 0) {
         *(undefined8*)( ptr + 6 ) = param_3;
         *ptr = param_1;
         lVar2 = ossl_algorithm_get1_first_name();
         *(long*)( ptr + 2 ) = lVar2;
         if (lVar2 == 0) goto LAB_00100337;
         *(undefined8*)( ptr + 4 ) = *(undefined8*)( param_2 + 0x18 );
         iVar1 = *piVar4;
         if (iVar1 != 0) {
            uVar8 = 0;
            uVar6 = 0;
            uVar5 = 0;
            uVar3 = 0;
            iVar7 = 0;
            do {
               switch (iVar1) {
                  case 1:
            if (*(long *)(ptr + 10) != 0) break;
            iVar7 = iVar7 + 1;
            *(undefined8 *)(ptr + 10) = *(undefined8 *)(piVar4 + 2);
            iVar1 = piVar4[4];
            goto joined_r0x001004d1;
                  case 2:
            if (*(long *)(ptr + 0xc) == 0) {
              uVar3 = uVar3 + 1;
              *(undefined8 *)(ptr + 0xc) = *(undefined8 *)(piVar4 + 2);
              iVar1 = piVar4[4];
              goto joined_r0x001004d1;
            }
            break;
                  case 3:
            if (*(long *)(ptr + 0xe) == 0) {
              uVar3 = uVar3 + 1;
              *(undefined8 *)(ptr + 0xe) = *(undefined8 *)(piVar4 + 2);
              iVar1 = piVar4[4];
              goto joined_r0x001004d1;
            }
            break;
                  case 4:
            if (*(long *)(ptr + 0x10) == 0) {
              uVar5 = uVar5 + 1;
              *(undefined8 *)(ptr + 0x10) = *(undefined8 *)(piVar4 + 2);
              iVar1 = piVar4[4];
              goto joined_r0x001004d1;
            }
            break;
                  case 5:
            if (*(long *)(ptr + 0x12) == 0) {
              uVar5 = uVar5 + 1;
              *(undefined8 *)(ptr + 0x12) = *(undefined8 *)(piVar4 + 2);
              iVar1 = piVar4[4];
              goto joined_r0x001004d1;
            }
            break;
                  case 6:
            if (*(long *)(ptr + 0x14) == 0) {
              iVar7 = iVar7 + 1;
              *(undefined8 *)(ptr + 0x14) = *(undefined8 *)(piVar4 + 2);
              iVar1 = piVar4[4];
              goto joined_r0x001004d1;
            }
            break;
                  case 7:
            if (*(long *)(ptr + 0x16) == 0) {
              *(undefined8 *)(ptr + 0x16) = *(undefined8 *)(piVar4 + 2);
              iVar1 = piVar4[4];
              goto joined_r0x001004d1;
            }
            break;
                  case 8:
            if (*(long *)(ptr + 0x18) == 0) {
              uVar6 = uVar6 + 1;
              *(undefined8 *)(ptr + 0x18) = *(undefined8 *)(piVar4 + 2);
              iVar1 = piVar4[4];
              goto joined_r0x001004d1;
            }
            break;
                  case 9:
            if (*(long *)(ptr + 0x1a) == 0) {
              uVar6 = uVar6 + 1;
              *(undefined8 *)(ptr + 0x1a) = *(undefined8 *)(piVar4 + 2);
              iVar1 = piVar4[4];
              goto joined_r0x001004d1;
            }
            break;
                  case 10:
            if (*(long *)(ptr + 0x1c) == 0) {
              uVar8 = uVar8 + 1;
              *(undefined8 *)(ptr + 0x1c) = *(undefined8 *)(piVar4 + 2);
              iVar1 = piVar4[4];
              goto joined_r0x001004d1;
            }
            break;
                  case 0xb:
            if (*(long *)(ptr + 0x1e) == 0) {
              uVar8 = uVar8 + 1;
              *(undefined8 *)(ptr + 0x1e) = *(undefined8 *)(piVar4 + 2);
              iVar1 = piVar4[4];
              goto joined_r0x001004d1;
            }
            break;
                  case 0xc:
            if (*(long *)(ptr + 0x20) == 0) {
              uVar3 = uVar3 + 1;
              *(undefined8 *)(ptr + 0x20) = *(undefined8 *)(piVar4 + 2);
              iVar1 = piVar4[4];
              goto joined_r0x001004d1;
            }
            break;
                  case 0xd:
            if (*(long *)(ptr + 0x22) == 0) {
              uVar5 = uVar5 + 1;
              *(undefined8 *)(ptr + 0x22) = *(undefined8 *)(piVar4 + 2);
              iVar1 = piVar4[4];
              goto joined_r0x001004d1;
            }
               }
               iVar1 = piVar4[4];
               joined_r0x001004d1:piVar4 = piVar4 + 4;
            } while ( iVar1 != 0 );
            if (iVar7 == 2) {
               if (( uVar3 & 0xfffffffd ) == 0) {
                  if (( ( uVar5 & 0xfffffffd ) == 0 ) && ( uVar3 == uVar5 )) goto LAB_001005b4;
               } else if (( uVar3 == 3 ) && ( uVar5 == 3 )) {
                  LAB_001005b4:if (( ( uVar6 | uVar8 ) & 0xfffffffd ) == 0) {
                     return ptr;
                  }
               }
            }
         }
         ERR_new();
         ERR_set_debug("crypto/evp/kem.c", 0x1a6, "evp_kem_from_algorithm");
         ERR_set_error(6, 0xc1, 0);
         goto LAB_00100337;
      }
      CRYPTO_free(ptr);
   }
   ERR_new();
   ptr = (undefined4*)0x0;
   ERR_set_debug("crypto/evp/kem.c", 0x137, "evp_kem_from_algorithm");
   ERR_set_error(6, 0x80006, 0);
   LAB_00100337:EVP_KEM_free(ptr);
   return (undefined4*)0x0;
}undefined8 EVP_KEM_up_ref(long param_1) {
   LOCK();
   *(int*)( param_1 + 0x20 ) = *(int*)( param_1 + 0x20 ) + 1;
   UNLOCK();
   return 1;
}void evp_kem_up_ref(void) {
   EVP_KEM_up_ref();
   return;
}undefined8 EVP_KEM_get0_provider(long param_1) {
   return *(undefined8*)( param_1 + 0x18 );
}void EVP_KEM_fetch(undefined8 param_1, undefined8 param_2, undefined8 param_3) {
   evp_generic_fetch(param_1, 0xe, param_2, param_3, evp_kem_from_algorithm, evp_kem_up_ref, evp_kem_free);
   return;
}void evp_kem_fetch_from_prov(undefined8 param_1, undefined8 param_2, undefined8 param_3) {
   evp_generic_fetch_from_prov(param_1, 0xe, param_2, param_3, evp_kem_from_algorithm, evp_kem_up_ref, evp_kem_free);
   return;
}int evp_kem_init(int *param_1, int param_2, undefined8 param_3, int *param_4) {
   int *piVar1;
   undefined8 uVar2;
   int iVar3;
   long lVar4;
   long lVar5;
   undefined8 uVar6;
   undefined8 uVar7;
   long lVar8;
   long lVar9;
   code *pcVar10;
   uint uVar11;
   long in_FS_OFFSET;
   bool bVar12;
   long local_78;
   long local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_48 = 0;
   if (( param_1 == (int*)0x0 ) || ( *(long*)( param_1 + 6 ) == 0 )) {
      ERR_new();
      ERR_set_debug("crypto/evp/kem.c", 0x2a, "evp_kem_init");
      ERR_set_error(6, 0x86, 0);
      LAB_00100a60:iVar3 = 0;
   } else {
      evp_pkey_ctx_free_old_ops();
      *param_1 = param_2;
      piVar1 = *(int**)( param_1 + 0x22 );
      if (piVar1 == (int*)0x0) {
         ERR_new();
         iVar3 = 0;
         ERR_set_debug("crypto/evp/kem.c", 0x32, "evp_kem_init");
         ERR_set_error(6, 0x9a, 0);
      } else {
         if (( param_4 != (int*)0x0 ) && ( *param_4 != *piVar1 )) {
            ERR_new();
            ERR_set_debug("crypto/evp/kem.c", 0x36, "evp_kem_init");
            ERR_set_error(6, 0x65, 0);
            goto LAB_00100a60;
         }
         if (( *(long*)( piVar1 + 0x18 ) == 0 ) || ( *(long*)( piVar1 + 0x18 ) == *(long*)( param_1 + 8 ) )) {
            lVar4 = evp_keymgmt_util_query_operation_name(*(long*)( param_1 + 8 ), 0xe);
            if (lVar4 == 0) {
               ERR_new();
               uVar6 = 0x44;
               LAB_00100908:iVar3 = 0;
               ERR_set_debug("crypto/evp/kem.c", uVar6, "evp_kem_init");
               ERR_set_error(6, 0x86, 0);
            } else {
               EVP_KEM_free(0);
               EVP_KEYMGMT_free(local_48);
               lVar5 = EVP_KEM_fetch(*(undefined8*)( param_1 + 2 ), lVar4, *(undefined8*)( param_1 + 4 ));
               if (lVar5 == 0) {
                  local_78 = 0;
                  goto LAB_00100954;
               }
               uVar11 = 1;
               uVar6 = EVP_KEM_get0_provider(lVar5);
               local_78 = 0;
               do {
                  uVar2 = *(undefined8*)( param_1 + 4 );
                  uVar7 = EVP_KEYMGMT_get0_name(*(undefined8*)( param_1 + 8 ));
                  lVar8 = evp_keymgmt_fetch_from_prov(uVar6, uVar7, uVar2);
                  local_48 = lVar8;
                  if (lVar8 != 0) {
                     lVar9 = evp_pkey_export_to_provider(*(undefined8*)( param_1 + 0x22 ), *(undefined8*)( param_1 + 2 ), &local_48, *(undefined8*)( param_1 + 4 ));
                     if (( lVar9 == 0 ) || ( param_4 == (int*)0x0 )) {
                        bVar12 = lVar9 == 0;
                        if (local_48 == 0) goto LAB_001009f8;
                        goto LAB_00100942;
                     }
                     local_78 = evp_pkey_export_to_provider(param_4, *(undefined8*)( param_1 + 2 ), &local_48, *(undefined8*)( param_1 + 4 ));
                     if (local_78 == 0) {
                        EVP_KEM_free(lVar5);
                        ERR_new();
                        uVar6 = 0x91;
                        goto LAB_00100908;
                     }
                     if (local_48 == 0) {
                        bVar12 = false;
                        goto LAB_001009f8;
                     }
                     LAB_001008ad:uVar6 = *(undefined8*)( lVar5 + 0x18 );
                     pcVar10 = *(code**)( lVar5 + 0x28 );
                     *(long*)( param_1 + 10 ) = lVar5;
                     uVar6 = ossl_provider_ctx(uVar6);
                     lVar4 = ( *pcVar10 )(uVar6);
                     *(long*)( param_1 + 0xc ) = lVar4;
                     if (lVar4 == 0) {
                        ERR_new(0);
                        uVar6 = 0xa4;
                        goto LAB_00100908;
                     }
                     if (param_2 == 0x1000) {
                        if (local_78 == 0) {
                           if (*(code**)( lVar5 + 0x30 ) != (code*)0x0) {
                              iVar3 = ( **(code**)( lVar5 + 0x30 ) )(lVar4, lVar9, param_3);
                              goto LAB_00100b4d;
                           }
                        } else {
                           pcVar10 = *(code**)( lVar5 + 0x80 );
                           if (pcVar10 != (code*)0x0) goto LAB_00100b41;
                        }
                        ERR_new(lVar4);
                        uVar6 = 0xb0;
                        goto LAB_001009a4;
                     }
                     if (param_2 != 0x2000) {
                        ERR_new(lVar4);
                        uVar6 = 0xc2;
                        goto LAB_00100908;
                     }
                     if (local_78 == 0) {
                        if (*(long*)( lVar5 + 0x30 ) != 0) {
                           iVar3 = ( **(code**)( lVar5 + 0x40 ) )(lVar4, lVar9, param_3);
                           goto LAB_00100b4d;
                        }
                     } else {
                        pcVar10 = *(code**)( lVar5 + 0x88 );
                        if (pcVar10 != (code*)0x0) {
                           LAB_00100b41:iVar3 = ( *pcVar10 )(lVar4, lVar9, local_78, param_3);
                           LAB_00100b4d:EVP_KEYMGMT_free(local_48);
                           local_48 = 0;
                           if (iVar3 < 1) goto LAB_001009d0;
                           iVar3 = 1;
                           goto LAB_00100a62;
                        }
                     }
                     ERR_new(lVar4);
                     uVar6 = 0xbc;
                     goto LAB_001009a4;
                  }
                  lVar9 = 0;
                  bVar12 = true;
                  LAB_001009f8:EVP_KEYMGMT_free(lVar8);
                  LAB_00100942:if (1 < uVar11) {
                     if (!bVar12) goto LAB_001008ad;
                     EVP_KEM_free(lVar5);
                     ERR_new();
                     uVar6 = 0x9c;
                     goto LAB_00100908;
                  }
                  if (!bVar12) goto LAB_001008ad;
                  LAB_00100954:uVar11 = 2;
                  EVP_KEM_free(lVar5);
                  EVP_KEYMGMT_free(local_48);
                  uVar6 = EVP_KEYMGMT_get0_provider(*(undefined8*)( param_1 + 8 ));
                  lVar5 = evp_kem_fetch_from_prov(uVar6, lVar4, *(undefined8*)( param_1 + 4 ));
               } while ( lVar5 != 0 );
               ERR_new();
               uVar6 = 0x72;
               LAB_001009a4:iVar3 = -2;
               ERR_set_debug("crypto/evp/kem.c", uVar6, "evp_kem_init");
               ERR_set_error(6, 0x96, 0);
            }
         } else {
            ERR_new();
            iVar3 = 0;
            ERR_set_debug("crypto/evp/kem.c", 0x3e, "evp_kem_init");
            ERR_set_error(6, 0xc0103, 0);
         }
      }
      LAB_001009d0:evp_pkey_ctx_free_old_ops(param_1);
      *param_1 = 0;
      EVP_KEYMGMT_free(local_48);
   }
   LAB_00100a62:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar3;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}undefined8 EVP_PKEY_auth_encapsulate_init(undefined8 param_1, long param_2, undefined8 param_3) {
   undefined8 uVar1;
   if (param_2 != 0) {
      uVar1 = evp_kem_init(param_1, 0x1000, param_3, param_2);
      return uVar1;
   }
   return 0;
}void EVP_PKEY_encapsulate_init(undefined8 param_1, undefined8 param_2) {
   evp_kem_init(param_1, 0x1000, param_2, 0);
   return;
}void EVP_PKEY_decapsulate_init(undefined8 param_1, undefined8 param_2) {
   evp_kem_init(param_1, 0x2000, param_2, 0);
   return;
}undefined8 EVP_PKEY_auth_decapsulate_init(undefined8 param_1, long param_2, undefined8 param_3) {
   undefined8 uVar1;
   if (param_2 != 0) {
      uVar1 = evp_kem_init(param_1, 0x2000, param_3, param_2);
      return uVar1;
   }
   return 0;
}bool EVP_KEM_is_a(undefined4 *param_1, undefined8 param_2) {
   int iVar1;
   if (param_1 != (undefined4*)0x0) {
      iVar1 = evp_is_a(*(undefined8*)( param_1 + 6 ), *param_1, 0, param_2);
      return iVar1 != 0;
   }
   return false;
}undefined4 evp_kem_get_number(undefined4 *param_1) {
   return *param_1;
}undefined8 EVP_KEM_get0_name(long param_1) {
   return *(undefined8*)( param_1 + 8 );
}undefined8 EVP_KEM_get0_description(long param_1) {
   return *(undefined8*)( param_1 + 0x10 );
}void EVP_KEM_do_all_provided(undefined8 param_1, undefined8 param_2, undefined8 param_3) {
   evp_generic_do_all(param_1, 0xe, param_2, param_3, evp_kem_from_algorithm, evp_kem_up_ref, evp_kem_free);
   return;
}undefined8 EVP_KEM_names_do_all(undefined4 *param_1, undefined8 param_2, undefined8 param_3) {
   undefined8 uVar1;
   if (*(long*)( param_1 + 6 ) == 0) {
      return 1;
   }
   uVar1 = evp_names_do_all(*(long*)( param_1 + 6 ), *param_1, param_2, param_3);
   return uVar1;
}undefined8 EVP_KEM_gettable_ctx_params(long param_1) {
   undefined8 uVar1;
   if (param_1 == 0) {
      return 0;
   }
   if (*(long*)( param_1 + 0x68 ) != 0) {
      uVar1 = EVP_KEM_get0_provider();
      uVar1 = ossl_provider_ctx(uVar1);
      for (int i_325 = 0; i_325 < 2; i_325++) {
         /* WARNING: Could not recover jumptable at 0x00100deb. Too many branches */
      }
      uVar1 = ( **(code**)( param_1 + 0x68 ) )(0, uVar1);
      return uVar1;
   }
   return 0;
}undefined8 EVP_KEM_settable_ctx_params(long param_1) {
   undefined8 uVar1;
   if (param_1 == 0) {
      return 0;
   }
   if (*(long*)( param_1 + 0x78 ) != 0) {
      uVar1 = EVP_KEM_get0_provider();
      uVar1 = ossl_provider_ctx(uVar1);
      for (int i_326 = 0; i_326 < 2; i_326++) {
         /* WARNING: Could not recover jumptable at 0x00100e2b. Too many branches */
      }
      uVar1 = ( **(code**)( param_1 + 0x78 ) )(0, uVar1);
      return uVar1;
   }
   return 0;
}
