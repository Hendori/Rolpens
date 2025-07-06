void EVP_SIGNATURE_free(void *param_1) {
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
}void evp_signature_free(void) {
   EVP_SIGNATURE_free();
   return;
}undefined4 *evp_signature_from_algorithm(undefined4 param_1, long param_2, undefined8 param_3) {
   int iVar1;
   undefined4 *ptr;
   long lVar2;
   uint uVar3;
   int iVar4;
   int iVar5;
   uint uVar6;
   uint uVar7;
   uint uVar8;
   int *piVar9;
   piVar9 = *(int**)( param_2 + 0x10 );
   ptr = (undefined4*)CRYPTO_zalloc(0x128, "crypto/evp/signature.c", 0x23);
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
         if (lVar2 == 0) goto LAB_0010018e;
         *(undefined8*)( ptr + 4 ) = *(undefined8*)( param_2 + 0x18 );
         iVar1 = *piVar9;
         if (iVar1 != 0) {
            uVar6 = 0;
            uVar7 = 0;
            uVar8 = 0;
            uVar3 = 0;
            iVar5 = 0;
            iVar4 = 0;
            do {
               switch (iVar1) {
                  case 1:
            if (*(long *)(ptr + 10) == 0) {
              iVar4 = iVar4 + 1;
              *(undefined8 *)(ptr + 10) = *(undefined8 *)(piVar9 + 2);
            }
            break;
                  case 2:
            if (*(long *)(ptr + 0xc) == 0) {
              iVar5 = iVar5 + 1;
              *(undefined8 *)(ptr + 0xc) = *(undefined8 *)(piVar9 + 2);
            }
            break;
                  case 3:
            if (*(long *)(ptr + 0xe) == 0) {
              *(undefined8 *)(ptr + 0xe) = *(undefined8 *)(piVar9 + 2);
            }
            break;
                  case 4:
            if (*(long *)(ptr + 0x16) == 0) {
              iVar5 = iVar5 + 1;
              *(undefined8 *)(ptr + 0x16) = *(undefined8 *)(piVar9 + 2);
            }
            break;
                  case 5:
            if (*(long *)(ptr + 0x18) == 0) {
              *(undefined8 *)(ptr + 0x18) = *(undefined8 *)(piVar9 + 2);
            }
            break;
                  case 6:
            if (*(long *)(ptr + 0x20) == 0) {
              iVar5 = iVar5 + 1;
              *(undefined8 *)(ptr + 0x20) = *(undefined8 *)(piVar9 + 2);
            }
            break;
                  case 7:
            if (*(long *)(ptr + 0x22) == 0) {
              *(undefined8 *)(ptr + 0x22) = *(undefined8 *)(piVar9 + 2);
            }
            break;
                  case 8:
            if (*(long *)(ptr + 0x24) == 0) {
              iVar5 = iVar5 + 1;
              *(undefined8 *)(ptr + 0x24) = *(undefined8 *)(piVar9 + 2);
            }
            break;
                  case 9:
            if (*(long *)(ptr + 0x26) == 0) {
              *(undefined8 *)(ptr + 0x26) = *(undefined8 *)(piVar9 + 2);
            }
            break;
                  case 10:
            if (*(long *)(ptr + 0x28) == 0) {
              *(undefined8 *)(ptr + 0x28) = *(undefined8 *)(piVar9 + 2);
            }
            break;
                  case 0xb:
            if (*(long *)(ptr + 0x2a) == 0) {
              *(undefined8 *)(ptr + 0x2a) = *(undefined8 *)(piVar9 + 2);
            }
            break;
                  case 0xc:
            if (*(long *)(ptr + 0x2c) == 0) {
              iVar5 = iVar5 + 1;
              *(undefined8 *)(ptr + 0x2c) = *(undefined8 *)(piVar9 + 2);
            }
            break;
                  case 0xd:
            if (*(long *)(ptr + 0x2e) == 0) {
              *(undefined8 *)(ptr + 0x2e) = *(undefined8 *)(piVar9 + 2);
            }
            break;
                  case 0xe:
            if (*(long *)(ptr + 0x30) == 0) {
              *(undefined8 *)(ptr + 0x30) = *(undefined8 *)(piVar9 + 2);
            }
            break;
                  case 0xf:
            if (*(long *)(ptr + 0x32) == 0) {
              *(undefined8 *)(ptr + 0x32) = *(undefined8 *)(piVar9 + 2);
            }
            break;
                  case 0x10:
            if (*(long *)(ptr + 0x34) == 0) {
              iVar4 = iVar4 + 1;
              *(undefined8 *)(ptr + 0x34) = *(undefined8 *)(piVar9 + 2);
            }
            break;
                  case 0x11:
            if (*(long *)(ptr + 0x36) == 0) {
              *(undefined8 *)(ptr + 0x36) = *(undefined8 *)(piVar9 + 2);
            }
            break;
                  case 0x12:
            if (*(long *)(ptr + 0x38) == 0) {
              uVar3 = uVar3 + 1;
              *(undefined8 *)(ptr + 0x38) = *(undefined8 *)(piVar9 + 2);
            }
            break;
                  case 0x13:
            if (*(long *)(ptr + 0x3a) == 0) {
              uVar3 = uVar3 + 1;
              *(undefined8 *)(ptr + 0x3a) = *(undefined8 *)(piVar9 + 2);
            }
            break;
                  case 0x14:
            if (*(long *)(ptr + 0x3c) == 0) {
              uVar8 = uVar8 + 1;
              *(undefined8 *)(ptr + 0x3c) = *(undefined8 *)(piVar9 + 2);
            }
            break;
                  case 0x15:
            if (*(long *)(ptr + 0x3e) == 0) {
              uVar8 = uVar8 + 1;
              *(undefined8 *)(ptr + 0x3e) = *(undefined8 *)(piVar9 + 2);
            }
            break;
                  case 0x16:
            if (*(long *)(ptr + 0x40) == 0) {
              uVar7 = uVar7 + 1;
              *(undefined8 *)(ptr + 0x40) = *(undefined8 *)(piVar9 + 2);
            }
            break;
                  case 0x17:
            if (*(long *)(ptr + 0x42) == 0) {
              uVar7 = uVar7 + 1;
              *(undefined8 *)(ptr + 0x42) = *(undefined8 *)(piVar9 + 2);
            }
            break;
                  case 0x18:
            if (*(long *)(ptr + 0x44) == 0) {
              uVar6 = uVar6 + 1;
              *(undefined8 *)(ptr + 0x44) = *(undefined8 *)(piVar9 + 2);
            }
            break;
                  case 0x19:
            if (*(long *)(ptr + 0x46) == 0) {
              uVar6 = uVar6 + 1;
              *(undefined8 *)(ptr + 0x46) = *(undefined8 *)(piVar9 + 2);
            }
            break;
                  case 0x1a:
            if (*(long *)(ptr + 0x48) == 0) {
              *(undefined8 *)(ptr + 0x48) = *(undefined8 *)(piVar9 + 2);
            }
            break;
                  case 0x1b:
            if (*(long *)(ptr + 0x10) == 0) {
              iVar5 = iVar5 + 1;
              *(undefined8 *)(ptr + 0x10) = *(undefined8 *)(piVar9 + 2);
            }
            break;
                  case 0x1c:
            if (*(long *)(ptr + 0x12) == 0) {
              *(undefined8 *)(ptr + 0x12) = *(undefined8 *)(piVar9 + 2);
            }
            break;
                  case 0x1d:
            if (*(long *)(ptr + 0x14) == 0) {
              *(undefined8 *)(ptr + 0x14) = *(undefined8 *)(piVar9 + 2);
            }
            break;
                  case 0x1e:
            if (*(long *)(ptr + 0x1a) == 0) {
              iVar5 = iVar5 + 1;
              *(undefined8 *)(ptr + 0x1a) = *(undefined8 *)(piVar9 + 2);
            }
            break;
                  case 0x1f:
            if (*(long *)(ptr + 0x1c) == 0) {
              *(undefined8 *)(ptr + 0x1c) = *(undefined8 *)(piVar9 + 2);
            }
            break;
                  case 0x20:
            if (*(long *)(ptr + 0x1e) == 0) {
              *(undefined8 *)(ptr + 0x1e) = *(undefined8 *)(piVar9 + 2);
            }
               }
               iVar1 = piVar9[4];
               piVar9 = piVar9 + 4;
            } while ( iVar1 != 0 );
            if (( ( iVar4 == 2 ) && ( ( ( uVar3 | uVar8 | uVar7 | uVar6 ) & 0xfffffffd ) == 0 ) ) && ( iVar5 != 0 )) {
               lVar2 = *(long*)( ptr + 0xe );
               if (*(long*)( ptr + 0xc ) == 0) {
                  if (*(long*)( ptr + 0x10 ) == 0) {
                     if (( lVar2 != 0 ) || ( *(long*)( ptr + 0x12 ) != 0 )) goto LAB_00100162;
                     lVar2 = *(long*)( ptr + 0x14 );
                     goto joined_r0x001007ba;
                  }
                  if (lVar2 != 0) goto LAB_001001d6;
                  if (( *(long*)( ptr + 0x12 ) == 0 ) || ( *(long*)( ptr + 0x14 ) == 0 )) goto LAB_00100162;
                  lVar2 = *(long*)( ptr + 0x18 );
                  if (*(long*)( ptr + 0x16 ) == 0) goto LAB_00100750;
                  joined_r0x00100770:if (lVar2 != 0) {
                     LAB_001001ee:if (( ( *(long*)( ptr + 0x20 ) == 0 ) || ( *(long*)( ptr + 0x22 ) != 0 ) ) && ( ( ( *(long*)( ptr + 0x24 ) == 0 || ( *(long*)( ptr + 0x2a ) != 0 ) ) || ( ( *(long*)( ptr + 0x26 ) != 0 && ( *(long*)( ptr + 0x28 ) != 0 ) ) ) ) )) {
                        if (*(long*)( ptr + 0x2c ) == 0) {
                           return ptr;
                        }
                        if (*(long*)( ptr + 0x32 ) != 0) {
                           return ptr;
                        }
                        if (( *(long*)( ptr + 0x2e ) != 0 ) && ( *(long*)( ptr + 0x30 ) != 0 )) {
                           return ptr;
                        }
                     }
                  }
               } else {
                  joined_r0x001007ba:if (lVar2 == 0) {
                     LAB_001001d6:lVar2 = *(long*)( ptr + 0x18 );
                     if (*(long*)( ptr + 0x16 ) != 0) goto joined_r0x00100770;
                     LAB_00100750:if (*(long*)( ptr + 0x1a ) == 0) {
                        if (( ( lVar2 == 0 ) && ( *(long*)( ptr + 0x1c ) == 0 ) ) && ( *(long*)( ptr + 0x1e ) == 0 )) goto LAB_001001ee;
                     } else {
                        if (lVar2 != 0) goto LAB_001001ee;
                        if (*(long*)( ptr + 0x1c ) != 0) {
                           lVar2 = *(long*)( ptr + 0x1e );
                           goto joined_r0x00100770;
                        }
                     }
                  }
               }
            }
         }
         LAB_00100162:ERR_new();
         ERR_set_debug("crypto/evp/signature.c", 0x177, "evp_signature_from_algorithm");
         ERR_set_error(6, 0xc1, 0);
         goto LAB_0010018e;
      }
      CRYPTO_free(ptr);
   }
   ERR_new();
   ptr = (undefined4*)0x0;
   ERR_set_debug("crypto/evp/signature.c", 0x43, "evp_signature_from_algorithm");
   ERR_set_error(6, 0x80006, 0);
   LAB_0010018e:EVP_SIGNATURE_free(ptr);
   return (undefined4*)0x0;
}undefined8 EVP_SIGNATURE_up_ref(long param_1) {
   LOCK();
   *(int*)( param_1 + 0x20 ) = *(int*)( param_1 + 0x20 ) + 1;
   UNLOCK();
   return 1;
}void evp_signature_up_ref(void) {
   EVP_SIGNATURE_up_ref();
   return;
}undefined8 EVP_SIGNATURE_get0_provider(long param_1) {
   return *(undefined8*)( param_1 + 0x18 );
}void EVP_SIGNATURE_fetch(undefined8 param_1, undefined8 param_2, undefined8 param_3) {
   evp_generic_fetch(param_1, 0xc, param_2, param_3, evp_signature_from_algorithm, evp_signature_up_ref, evp_signature_free);
   return;
}void evp_signature_fetch_from_prov(undefined8 param_1, undefined8 param_2, undefined8 param_3) {
   evp_generic_fetch_from_prov(param_1, 0xc, param_2, param_3, evp_signature_from_algorithm, evp_signature_up_ref, evp_signature_free);
   return;
}bool EVP_SIGNATURE_is_a(undefined4 *param_1, undefined8 param_2) {
   int iVar1;
   if (param_1 != (undefined4*)0x0) {
      iVar1 = evp_is_a(*(undefined8*)( param_1 + 6 ), *param_1, 0, param_2);
      return iVar1 != 0;
   }
   return false;
}int evp_pkey_signature_init(int *param_1, long param_2, int param_3, undefined8 param_4) {
   long *plVar1;
   long lVar2;
   int iVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   long lVar6;
   long lVar7;
   long *plVar8;
   code *pcVar9;
   long lVar10;
   long lVar11;
   undefined8 uVar12;
   uint uVar13;
   long in_FS_OFFSET;
   bool bVar14;
   long local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_48 = 0;
   if (param_1 == (int*)0x0) {
      ERR_new();
      ERR_set_debug("crypto/evp/signature.c", 0x1fe, "evp_pkey_signature_init");
      iVar3 = -1;
      ERR_set_error(6, 0xc0102, 0);
      goto LAB_00100a99;
   }
   evp_pkey_ctx_free_old_ops();
   *param_1 = param_3;
   if (param_2 == 0) {
      ERR_set_mark();
      lVar6 = *(long*)( param_1 + 8 );
      if (lVar6 != 0) {
         if (*(long*)( param_1 + 0x22 ) == 0) {
            ERR_clear_last_mark();
            ERR_new();
            uVar12 = 0x262;
            goto LAB_00100bd1;
         }
         lVar2 = *(long*)( *(long*)( param_1 + 0x22 ) + 0x60 );
         if (lVar2 != 0 && lVar6 != lVar2) {
            ERR_clear_last_mark();
            ERR_new();
            ERR_set_debug("crypto/evp/signature.c", 0x26c, "evp_pkey_signature_init");
            ERR_set_error(6, 0xc0103, 0);
            goto LAB_00100bb8;
         }
         lVar10 = evp_keymgmt_util_query_operation_name(lVar6, 0xc);
         if (lVar10 != 0) {
            EVP_SIGNATURE_free(0);
            EVP_KEYMGMT_free(local_48);
            param_2 = EVP_SIGNATURE_fetch(*(undefined8*)( param_1 + 2 ), lVar10, *(undefined8*)( param_1 + 4 ));
            if (param_2 == 0) goto LAB_00100cc0;
            uVar13 = 1;
            uVar12 = EVP_SIGNATURE_get0_provider(param_2);
            do {
               uVar4 = *(undefined8*)( param_1 + 4 );
               uVar5 = EVP_KEYMGMT_get0_name(*(undefined8*)( param_1 + 8 ));
               lVar11 = evp_keymgmt_fetch_from_prov(uVar12, uVar5, uVar4);
               local_48 = lVar11;
               if (lVar11 == 0) {
                  lVar7 = 0;
                  bVar14 = lVar2 == 0 || lVar6 == lVar2;
                  LAB_00100d35:EVP_KEYMGMT_free(lVar11);
               } else {
                  lVar7 = evp_pkey_export_to_provider(*(undefined8*)( param_1 + 0x22 ), *(undefined8*)( param_1 + 2 ), &local_48, *(undefined8*)( param_1 + 4 ));
                  bVar14 = lVar7 == 0;
                  if (local_48 == 0) goto LAB_00100d35;
               }
               if (( 1 < uVar13 ) || ( !bVar14 )) {
                  if (lVar7 != 0) {
                     ERR_pop_to_mark();
                     goto LAB_00100a0a;
                  }
                  EVP_SIGNATURE_free(param_2);
                  break;
               }
               LAB_00100cc0:uVar13 = 2;
               EVP_SIGNATURE_free(param_2);
               EVP_KEYMGMT_free(local_48);
               uVar12 = EVP_KEYMGMT_get0_provider(*(undefined8*)( param_1 + 8 ));
               param_2 = evp_signature_fetch_from_prov(uVar12, lVar10, *(undefined8*)( param_1 + 4 ));
            } while ( param_2 != 0 );
            goto LAB_00100df0;
         }
         ERR_clear_last_mark();
         ERR_new();
         uVar12 = 0x274;
         LAB_00100eb1:ERR_set_debug("crypto/evp/signature.c", uVar12, "evp_pkey_signature_init");
         ERR_set_error(6, 0x86, 0);
         goto LAB_00100bb8;
      }
      LAB_00100df0:ERR_pop_to_mark();
      EVP_KEYMGMT_free(local_48);
      lVar6 = *(long*)( param_1 + 0x1e );
      local_48 = 0;
      if (lVar6 != 0) {
         if (param_3 == 0x10) {
            if (*(long*)( lVar6 + 0x48 ) != 0) {
               pcVar9 = *(code**)( lVar6 + 0x40 );
               joined_r0x00100f97:if (pcVar9 == (code*)0x0) {
                  iVar3 = 1;
                  goto LAB_00100a99;
               }
               iVar3 = ( *pcVar9 )(param_1);
               if (0 < iVar3) goto LAB_00100a84;
               goto LAB_00100b27;
            }
         } else if (param_3 == 0x20) {
            if (*(long*)( lVar6 + 0x58 ) != 0) {
               pcVar9 = *(code**)( lVar6 + 0x50 );
               goto joined_r0x00100f97;
            }
         } else {
            if (param_3 != 0x40) {
               ERR_new();
               uVar12 = 0x327;
               goto LAB_00100eb1;
            }
            if (*(long*)( lVar6 + 0x68 ) != 0) {
               pcVar9 = *(code**)( lVar6 + 0x60 );
               goto joined_r0x00100f97;
            }
         }
      }
      ERR_new();
      ERR_set_debug("crypto/evp/signature.c", 0x312, "evp_pkey_signature_init");
      ERR_set_error(6, 0x96, 0);
      LAB_00100dbd:iVar3 = -2;
      goto LAB_00100a99;
   }
   if (*(long*)( param_1 + 0x22 ) == 0) {
      ERR_new();
      uVar12 = 0x20e;
      LAB_00100bd1:ERR_set_debug("crypto/evp/signature.c", uVar12, "evp_pkey_signature_init");
      ERR_set_error(6, 0x9a, 0);
      LAB_00100bb8:iVar3 = 0;
      LAB_00100b27:evp_pkey_ctx_free_old_ops(param_1);
      *param_1 = 0;
   } else {
      uVar4 = EVP_SIGNATURE_get0_provider(param_2);
      uVar12 = *(undefined8*)( param_1 + 4 );
      uVar5 = EVP_KEYMGMT_get0_name(*(undefined8*)( param_1 + 8 ));
      lVar6 = evp_keymgmt_fetch_from_prov(uVar4, uVar5, uVar12);
      local_48 = lVar6;
      if (lVar6 == 0) {
         EVP_KEYMGMT_free(0);
      } else {
         lVar7 = evp_pkey_export_to_provider(*(undefined8*)( param_1 + 0x22 ), *(undefined8*)( param_1 + 2 ), &local_48, *(undefined8*)( param_1 + 4 ));
         if (local_48 == 0) {
            EVP_KEYMGMT_free(lVar6);
         }
         if (lVar7 != 0) {
            if (*(code**)( param_2 + 0x120 ) != (code*)0x0) {
               plVar8 = (long*)( **(code**)( param_2 + 0x120 ) )();
               lVar6 = *plVar8;
               while (lVar6 != 0) {
                  iVar3 = EVP_PKEY_CTX_is_a(param_1);
                  if (iVar3 != 0) {
                     if (*plVar8 != 0) goto LAB_001009f7;
                     break;
                  }
                  plVar1 = plVar8 + 1;
                  plVar8 = plVar8 + 1;
                  lVar6 = *plVar1;
               };
               ERR_new();
               uVar12 = 0x238;
               LAB_00100d9e:ERR_set_debug("crypto/evp/signature.c", uVar12, "evp_pkey_signature_init");
               ERR_set_error(6, 0xe4, 0);
               goto LAB_00100dbd;
            }
            uVar12 = EVP_KEYMGMT_get0_name(*(undefined8*)( param_1 + 8 ));
            iVar3 = EVP_SIGNATURE_is_a(param_2, uVar12);
            if (iVar3 == 0) {
               uVar12 = evp_keymgmt_util_query_operation_name(*(undefined8*)( param_1 + 8 ), 0xc);
               iVar3 = EVP_SIGNATURE_is_a(param_2, uVar12);
               if (iVar3 == 0) {
                  ERR_new();
                  uVar12 = 0x252;
                  goto LAB_00100d9e;
               }
            }
            LAB_001009f7:iVar3 = EVP_SIGNATURE_up_ref(param_2);
            if (iVar3 == 0) goto LAB_00100a99;
            LAB_00100a0a:uVar12 = *(undefined8*)( param_2 + 0x18 );
            uVar4 = *(undefined8*)( param_1 + 4 );
            *(long*)( param_1 + 10 ) = param_2;
            pcVar9 = *(code**)( param_2 + 0x28 );
            uVar12 = ossl_provider_ctx(uVar12);
            lVar6 = ( *pcVar9 )(uVar12, uVar4);
            *(long*)( param_1 + 0xc ) = lVar6;
            if (lVar6 == 0) {
               ERR_new(0);
               uVar12 = 0x2cb;
               goto LAB_00100eb1;
            }
            if (param_3 == 0x40) {
               pcVar9 = *(code**)( param_2 + 0x80 );
               if (pcVar9 == (code*)0x0) {
                  ERR_new(lVar6);
                  uVar12 = 0x2f2;
                  goto LAB_00100b02;
               }
            } else if (param_3 < 0x41) {
               if (param_3 == 0x10) {
                  pcVar9 = *(code**)( param_2 + 0x30 );
                  if (pcVar9 == (code*)0x0) {
                     ERR_new(lVar6);
                     uVar12 = 0x2d2;
                     goto LAB_00100b02;
                  }
               } else {
                  if (param_3 != 0x20) goto LAB_00100ea0;
                  pcVar9 = *(code**)( param_2 + 0x58 );
                  if (pcVar9 == (code*)0x0) {
                     ERR_new(lVar6);
                     uVar12 = 0x2e2;
                     goto LAB_00100b02;
                  }
               }
            } else if (param_3 == 0x4000) {
               pcVar9 = *(code**)( param_2 + 0x40 );
               if (pcVar9 == (code*)0x0) {
                  ERR_new(lVar6);
                  uVar12 = 0x2da;
                  LAB_00100b02:iVar3 = -2;
                  ERR_set_debug("crypto/evp/signature.c", uVar12, "evp_pkey_signature_init");
                  ERR_set_error(6, 0x96, 0);
                  goto LAB_00100b27;
               }
            } else {
               if (param_3 != 0x8000) {
                  LAB_00100ea0:ERR_new(lVar6);
                  uVar12 = 0x2f9;
                  goto LAB_00100eb1;
               }
               pcVar9 = *(code**)( param_2 + 0x68 );
               if (pcVar9 == (code*)0x0) {
                  ERR_new(lVar6);
                  uVar12 = 0x2ea;
                  goto LAB_00100b02;
               }
            }
            iVar3 = ( *pcVar9 )(lVar6, lVar7, param_4);
            if (iVar3 < 1) {
               ( **(code**)( param_2 + 0xd0 ) )(*(undefined8*)( param_1 + 0xc ));
               param_1[0xc] = 0;
               param_1[0xd] = 0;
               evp_pkey_ctx_free_old_ops(param_1);
               *param_1 = 0;
            } else {
               LAB_00100a84:iVar3 = evp_pkey_ctx_use_cached_data(param_1);
            }
            goto LAB_00100a8f;
         }
      }
      iVar3 = 0;
   }
   LAB_00100a8f:EVP_KEYMGMT_free(local_48);
   LAB_00100a99:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return iVar3;
}undefined4 evp_signature_get_number(undefined4 *param_1) {
   return *param_1;
}undefined8 EVP_SIGNATURE_get0_name(long param_1) {
   return *(undefined8*)( param_1 + 8 );
}undefined8 EVP_SIGNATURE_get0_description(long param_1) {
   return *(undefined8*)( param_1 + 0x10 );
}void EVP_SIGNATURE_do_all_provided(undefined8 param_1, undefined8 param_2, undefined8 param_3) {
   evp_generic_do_all(param_1, 0xc, param_2, param_3, evp_signature_from_algorithm, evp_signature_up_ref, evp_signature_free);
   return;
}undefined8 EVP_SIGNATURE_names_do_all(undefined4 *param_1, undefined8 param_2, undefined8 param_3) {
   undefined8 uVar1;
   if (*(long*)( param_1 + 6 ) == 0) {
      return 1;
   }
   uVar1 = evp_names_do_all(*(long*)( param_1 + 6 ), *param_1, param_2, param_3);
   return uVar1;
}undefined8 EVP_SIGNATURE_gettable_ctx_params(long param_1) {
   undefined8 uVar1;
   if (param_1 == 0) {
      return 0;
   }
   if (*(long*)( param_1 + 0xe8 ) != 0) {
      uVar1 = EVP_SIGNATURE_get0_provider();
      uVar1 = ossl_provider_ctx(uVar1);
      for (int i_105 = 0; i_105 < 2; i_105++) {
         /* WARNING: Could not recover jumptable at 0x00101131. Too many branches */
      }
      uVar1 = ( **(code**)( param_1 + 0xe8 ) )(0, uVar1);
      return uVar1;
   }
   return 0;
}undefined8 EVP_SIGNATURE_settable_ctx_params(long param_1) {
   undefined8 uVar1;
   if (param_1 == 0) {
      return 0;
   }
   if (*(long*)( param_1 + 0xf8 ) != 0) {
      uVar1 = EVP_SIGNATURE_get0_provider();
      uVar1 = ossl_provider_ctx(uVar1);
      for (int i_106 = 0; i_106 < 2; i_106++) {
         /* WARNING: Could not recover jumptable at 0x00101181. Too many branches */
      }
      uVar1 = ( **(code**)( param_1 + 0xf8 ) )(0, uVar1);
      return uVar1;
   }
   return 0;
}int EVP_PKEY_sign_init(EVP_PKEY_CTX *ctx) {
   int iVar1;
   iVar1 = evp_pkey_signature_init(ctx, 0, 0x10, 0);
   return iVar1;
}void EVP_PKEY_sign_init_ex(undefined8 param_1, undefined8 param_2) {
   evp_pkey_signature_init(param_1, 0, 0x10, param_2);
   return;
}void EVP_PKEY_sign_init_ex2(undefined8 param_1, undefined8 param_2, undefined8 param_3) {
   evp_pkey_signature_init(param_1, param_2, 0x10, param_3);
   return;
}void EVP_PKEY_sign_message_init(undefined8 param_1, undefined8 param_2, undefined8 param_3) {
   evp_pkey_signature_init(param_1, param_2, 0x4000, param_3);
   return;
}undefined8 EVP_PKEY_sign_message_update(int *param_1) {
   undefined8 uVar1;
   if (param_1 == (int*)0x0) {
      ERR_new();
      ERR_set_debug("crypto/evp/signature.c", 0x355, "EVP_PKEY_sign_message_update");
      ERR_set_error(6, 0xc0102, 0);
   } else {
      if (*param_1 == 0x4000) {
         if (*(code**)( *(long*)( param_1 + 10 ) + 0x48 ) == (code*)0x0) {
            ERR_new();
            ERR_set_debug("crypto/evp/signature.c", 0x35f, "EVP_PKEY_sign_message_update");
            ERR_set_error(6, 0x96, 0);
            return 0xfffffffe;
         }
         for (int i_107 = 0; i_107 < 2; i_107++) {
            /* WARNING: Could not recover jumptable at 0x0010124a. Too many branches */
         }
         uVar1 = ( **(code**)( *(long*)( param_1 + 10 ) + 0x48 ) )(*(undefined8*)( param_1 + 0xc ));
         return uVar1;
      }
      ERR_new();
      ERR_set_debug("crypto/evp/signature.c", 0x35a, "EVP_PKEY_sign_message_update");
      ERR_set_error(6, 0x97, 0);
   }
   return 0xffffffff;
}undefined8 EVP_PKEY_sign_message_final(int *param_1, long param_2, undefined8 *param_3) {
   undefined8 uVar1;
   if (param_1 == (int*)0x0) {
      ERR_new();
      ERR_set_debug("crypto/evp/signature.c", 0x36b, "EVP_PKEY_sign_message_final");
      ERR_set_error(6, 0xc0102, 0);
   } else {
      if (*param_1 == 0x4000) {
         if (*(code**)( *(long*)( param_1 + 10 ) + 0x50 ) == (code*)0x0) {
            ERR_new();
            ERR_set_debug("crypto/evp/signature.c", 0x375, "EVP_PKEY_sign_message_final");
            ERR_set_error(6, 0x96, 0);
            return 0xfffffffe;
         }
         uVar1 = 0;
         if (param_2 != 0) {
            uVar1 = *param_3;
         }
         for (int i_108 = 0; i_108 < 2; i_108++) {
            /* WARNING: Could not recover jumptable at 0x00101328. Too many branches */
         }
         uVar1 = ( **(code**)( *(long*)( param_1 + 10 ) + 0x50 ) )(*(undefined8*)( param_1 + 0xc ), param_2, param_3, uVar1);
         return uVar1;
      }
      ERR_new();
      ERR_set_debug("crypto/evp/signature.c", 0x370, "EVP_PKEY_sign_message_final");
      ERR_set_error(6, 0x97, 0);
   }
   return 0xffffffff;
}int EVP_PKEY_sign(EVP_PKEY_CTX *ctx, uchar *sig, size_t *siglen, uchar *tbs, size_t tbslen) {
   long lVar1;
   int iVar2;
   ulong uVar3;
   undefined8 uVar4;
   code *UNRECOVERED_JUMPTABLE;
   if (ctx == (EVP_PKEY_CTX*)0x0) {
      ERR_new();
      ERR_set_debug("crypto/evp/signature.c", 0x385, "EVP_PKEY_sign");
      ERR_set_error(6, 0xc0102, 0);
   } else {
      if (( *(int*)ctx == 0x10 ) || ( *(int*)ctx == 0x4000 )) {
         if (*(long*)( ctx + 0x30 ) == 0) {
            lVar1 = *(long*)( ctx + 0x78 );
            if (( lVar1 != 0 ) && ( UNRECOVERED_JUMPTABLE = *(code**)( lVar1 + 0x48 ) ),UNRECOVERED_JUMPTABLE != (code*)0x0) {
               if (( *(byte*)( lVar1 + 4 ) & 2 ) == 0) {
                  LAB_00101450:/* WARNING: Could not recover jumptable at 0x0010145b. Too many branches *//* WARNING: Treating indirect jump as call */iVar2 = ( *UNRECOVERED_JUMPTABLE )(ctx);
                  return iVar2;
               }
               iVar2 = EVP_PKEY_get_size(*(undefined8*)( ctx + 0x88 ));
               uVar3 = (ulong)iVar2;
               if (uVar3 == 0) {
                  ERR_new();
                  ERR_set_debug("crypto/evp/signature.c", 0x3a2, "EVP_PKEY_sign");
                  ERR_set_error(6, 0xa3, 0);
               } else {
                  if (sig == (uchar*)0x0) {
                     *siglen = uVar3;
                     return 1;
                  }
                  if (uVar3 <= *siglen) {
                     UNRECOVERED_JUMPTABLE = *(code**)( *(long*)( ctx + 0x78 ) + 0x48 );
                     goto LAB_00101450;
                  }
                  ERR_new();
                  ERR_set_debug("crypto/evp/signature.c", 0x3a2, "EVP_PKEY_sign");
                  ERR_set_error(6, 0x9b, 0);
               }
               return 0;
            }
            ERR_new();
            uVar4 = 0x39e;
         } else {
            if (*(code**)( *(long*)( ctx + 0x28 ) + 0x38 ) != (code*)0x0) {
               for (int i_109 = 0; i_109 < 2; i_109++) {
                  /* WARNING: Could not recover jumptable at 0x0010142a. Too many branches */
               }
               iVar2 = ( **(code**)( *(long*)( ctx + 0x28 ) + 0x38 ) )();
               return iVar2;
            }
            ERR_new();
            uVar4 = 0x393;
         }
         ERR_set_debug("crypto/evp/signature.c", uVar4, "EVP_PKEY_sign");
         ERR_set_error(6, 0x96, 0);
         return -2;
      }
      ERR_new();
      ERR_set_debug("crypto/evp/signature.c", 0x38b, "EVP_PKEY_sign");
      ERR_set_error(6, 0x97, 0);
   }
   return -1;
}int EVP_PKEY_verify_init(EVP_PKEY_CTX *ctx) {
   int iVar1;
   iVar1 = evp_pkey_signature_init(ctx, 0, 0x20, 0);
   return iVar1;
}void EVP_PKEY_verify_init_ex(undefined8 param_1, undefined8 param_2) {
   evp_pkey_signature_init(param_1, 0, 0x20, param_2);
   return;
}void EVP_PKEY_verify_init_ex2(undefined8 param_1, undefined8 param_2, undefined8 param_3) {
   evp_pkey_signature_init(param_1, param_2, 0x20, param_3);
   return;
}void EVP_PKEY_verify_message_init(undefined8 param_1, undefined8 param_2, undefined8 param_3) {
   evp_pkey_signature_init(param_1, param_2, 0x8000, param_3);
   return;
}undefined8 EVP_PKEY_CTX_set_signature(long param_1, undefined8 param_2, undefined8 param_3) {
   undefined8 uVar1;
   long in_FS_OFFSET;
   undefined8 local_a8;
   undefined8 uStack_a0;
   undefined8 local_98;
   undefined8 uStack_90;
   undefined8 local_88;
   undefined8 local_78;
   undefined8 uStack_70;
   undefined8 local_68;
   undefined8 uStack_60;
   undefined8 local_58;
   undefined8 local_50;
   undefined8 uStack_48;
   undefined8 local_40;
   undefined8 uStack_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 == 0) {
      ERR_new();
      ERR_set_debug("crypto/evp/signature.c", 0x3c2, "EVP_PKEY_CTX_set_signature");
      ERR_set_error(6, 0xc0102, 0);
      uVar1 = 0;
   } else {
      OSSL_PARAM_construct_octet_string(&local_a8, "signature", param_2, param_3);
      local_58 = local_88;
      local_78 = local_a8;
      uStack_70 = uStack_a0;
      local_68 = local_98;
      uStack_60 = uStack_90;
      OSSL_PARAM_construct_end(&local_a8);
      local_50 = local_a8;
      uStack_48 = uStack_a0;
      local_30 = local_88;
      local_40 = local_98;
      uStack_38 = uStack_90;
      uVar1 = EVP_PKEY_CTX_set_params(param_1, &local_78);
   }
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}undefined8 EVP_PKEY_verify_message_update(int *param_1) {
   undefined8 uVar1;
   if (param_1 == (int*)0x0) {
      ERR_new();
      ERR_set_debug("crypto/evp/signature.c", 0x3d5, "EVP_PKEY_verify_message_update");
      ERR_set_error(6, 0xc0102, 0);
   } else {
      if (*param_1 == 0x8000) {
         if (*(code**)( *(long*)( param_1 + 10 ) + 0x70 ) == (code*)0x0) {
            ERR_new();
            ERR_set_debug("crypto/evp/signature.c", 0x3df, "EVP_PKEY_verify_message_update");
            ERR_set_error(6, 0x96, 0);
            return 0xfffffffe;
         }
         for (int i_110 = 0; i_110 < 2; i_110++) {
            /* WARNING: Could not recover jumptable at 0x0010179a. Too many branches */
         }
         uVar1 = ( **(code**)( *(long*)( param_1 + 10 ) + 0x70 ) )(*(undefined8*)( param_1 + 0xc ));
         return uVar1;
      }
      ERR_new();
      ERR_set_debug("crypto/evp/signature.c", 0x3da, "EVP_PKEY_verify_message_update");
      ERR_set_error(6, 0x97, 0);
   }
   return 0xffffffff;
}undefined8 EVP_PKEY_verify_message_final(int *param_1) {
   undefined8 uVar1;
   if (param_1 == (int*)0x0) {
      ERR_new();
      ERR_set_debug("crypto/evp/signature.c", 0x3ea, "EVP_PKEY_verify_message_final");
      ERR_set_error(6, 0xc0102, 0);
   } else {
      if (*param_1 == 0x8000) {
         if (*(code**)( *(long*)( param_1 + 10 ) + 0x78 ) == (code*)0x0) {
            ERR_new();
            ERR_set_debug("crypto/evp/signature.c", 0x3f4, "EVP_PKEY_verify_message_final");
            ERR_set_error(6, 0x96, 0);
            return 0xfffffffe;
         }
         for (int i_111 = 0; i_111 < 2; i_111++) {
            /* WARNING: Could not recover jumptable at 0x0010186a. Too many branches */
         }
         uVar1 = ( **(code**)( *(long*)( param_1 + 10 ) + 0x78 ) )(*(undefined8*)( param_1 + 0xc ));
         return uVar1;
      }
      ERR_new();
      ERR_set_debug("crypto/evp/signature.c", 0x3ef, "EVP_PKEY_verify_message_final");
      ERR_set_error(6, 0x97, 0);
   }
   return 0xffffffff;
}int EVP_PKEY_verify(EVP_PKEY_CTX *ctx, uchar *sig, size_t siglen, uchar *tbs, size_t tbslen) {
   code *UNRECOVERED_JUMPTABLE;
   int iVar1;
   undefined8 uVar2;
   if (ctx == (EVP_PKEY_CTX*)0x0) {
      ERR_new();
      ERR_set_debug("crypto/evp/signature.c", 0x403, "EVP_PKEY_verify");
      ERR_set_error(6, 0xc0102, 0);
   } else {
      if (( *(int*)ctx == 0x20 ) || ( *(int*)ctx == 0x8000 )) {
         if (*(long*)( ctx + 0x30 ) == 0) {
            if (( *(long*)( ctx + 0x78 ) != 0 ) && ( UNRECOVERED_JUMPTABLE = *(code**)( *(long*)( ctx + 0x78 ) + 0x58 ) ),UNRECOVERED_JUMPTABLE != (code*)0x0) {
               for (int i_112 = 0; i_112 < 2; i_112++) {
                  /* WARNING: Could not recover jumptable at 0x00101976. Too many branches */
               }
               iVar1 = ( *UNRECOVERED_JUMPTABLE )();
               return iVar1;
            }
            ERR_new();
            uVar2 = 0x41b;
         } else {
            if (*(code**)( *(long*)( ctx + 0x28 ) + 0x60 ) != (code*)0x0) {
               for (int i_113 = 0; i_113 < 2; i_113++) {
                  /* WARNING: Could not recover jumptable at 0x00101950. Too many branches */
               }
               iVar1 = ( **(code**)( *(long*)( ctx + 0x28 ) + 0x60 ) )(*(long*)( ctx + 0x30 ));
               return iVar1;
            }
            ERR_new();
            uVar2 = 0x411;
         }
         ERR_set_debug("crypto/evp/signature.c", uVar2, "EVP_PKEY_verify");
         ERR_set_error(6, 0x96, 0);
         return -2;
      }
      ERR_new();
      ERR_set_debug("crypto/evp/signature.c", 0x409, "EVP_PKEY_verify");
      ERR_set_error(6, 0x97, 0);
   }
   return -1;
}int EVP_PKEY_verify_recover_init(EVP_PKEY_CTX *ctx) {
   int iVar1;
   iVar1 = evp_pkey_signature_init(ctx, 0, 0x40, 0);
   return iVar1;
}void EVP_PKEY_verify_recover_init_ex(undefined8 param_1, undefined8 param_2) {
   evp_pkey_signature_init(param_1, 0, 0x40, param_2);
   return;
}void EVP_PKEY_verify_recover_init_ex2(undefined8 param_1, undefined8 param_2, undefined8 param_3) {
   evp_pkey_signature_init(param_1, param_2, 0x40, param_3);
   return;
}int EVP_PKEY_verify_recover(EVP_PKEY_CTX *ctx, uchar *rout, size_t *routlen, uchar *sig, size_t siglen) {
   long lVar1;
   int iVar2;
   ulong uVar3;
   undefined8 uVar4;
   code *UNRECOVERED_JUMPTABLE;
   if (ctx == (EVP_PKEY_CTX*)0x0) {
      ERR_new();
      ERR_set_debug("crypto/evp/signature.c", 0x43a, "EVP_PKEY_verify_recover");
      ERR_set_error(6, 0xc0102, 0);
   } else {
      if (*(int*)ctx == 0x40) {
         if (*(long*)( ctx + 0x30 ) == 0) {
            lVar1 = *(long*)( ctx + 0x78 );
            if (( lVar1 != 0 ) && ( UNRECOVERED_JUMPTABLE = *(code**)( lVar1 + 0x68 ) ),UNRECOVERED_JUMPTABLE != (code*)0x0) {
               if (( *(byte*)( lVar1 + 4 ) & 2 ) == 0) {
                  LAB_00101b10:/* WARNING: Could not recover jumptable at 0x00101b1b. Too many branches *//* WARNING: Treating indirect jump as call */iVar2 = ( *UNRECOVERED_JUMPTABLE )(ctx);
                  return iVar2;
               }
               iVar2 = EVP_PKEY_get_size(*(undefined8*)( ctx + 0x88 ));
               uVar3 = (ulong)iVar2;
               if (uVar3 == 0) {
                  ERR_new();
                  ERR_set_debug("crypto/evp/signature.c", 0x455, "EVP_PKEY_verify_recover");
                  ERR_set_error(6, 0xa3, 0);
               } else {
                  if (rout == (uchar*)0x0) {
                     *routlen = uVar3;
                     return 1;
                  }
                  if (uVar3 <= *routlen) {
                     UNRECOVERED_JUMPTABLE = *(code**)( *(long*)( ctx + 0x78 ) + 0x68 );
                     goto LAB_00101b10;
                  }
                  ERR_new();
                  ERR_set_debug("crypto/evp/signature.c", 0x455, "EVP_PKEY_verify_recover");
                  ERR_set_error(6, 0x9b, 0);
               }
               return 0;
            }
            ERR_new();
            uVar4 = 0x452;
         } else {
            if (*(code**)( *(long*)( ctx + 0x28 ) + 0x88 ) != (code*)0x0) {
               for (int i_114 = 0; i_114 < 2; i_114++) {
                  /* WARNING: Could not recover jumptable at 0x00101ae4. Too many branches */
               }
               iVar2 = ( **(code**)( *(long*)( ctx + 0x28 ) + 0x88 ) )();
               return iVar2;
            }
            ERR_new();
            uVar4 = 0x447;
         }
         ERR_set_debug("crypto/evp/signature.c", uVar4, "EVP_PKEY_verify_recover");
         ERR_set_error(6, 0x96, 0);
         return -2;
      }
      ERR_new();
      ERR_set_debug("crypto/evp/signature.c", 0x43f, "EVP_PKEY_verify_recover");
      ERR_set_error(6, 0x97, 0);
   }
   return -1;
}
