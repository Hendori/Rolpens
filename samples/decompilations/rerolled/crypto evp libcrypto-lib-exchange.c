void EVP_KEYEXCH_free(void *param_1) {
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
}void evp_keyexch_free(void) {
   EVP_KEYEXCH_free();
   return;
}undefined4 *evp_keyexch_from_algorithm(undefined4 param_1, long param_2, undefined8 param_3) {
   int iVar1;
   undefined4 *ptr;
   long lVar2;
   uint uVar3;
   int *piVar4;
   int iVar5;
   uint uVar6;
   piVar4 = *(int**)( param_2 + 0x10 );
   ptr = (undefined4*)CRYPTO_zalloc(0x78, "crypto/evp/exchange.c", 0x21);
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
         if (lVar2 != 0) {
            uVar6 = 0;
            uVar3 = 0;
            iVar5 = 0;
            *(undefined8*)( ptr + 4 ) = *(undefined8*)( param_2 + 0x18 );
            iVar1 = *piVar4;
            if (iVar1 != 0) {
               do {
                  switch (iVar1) {
                     case 1:
              if (*(long *)(ptr + 10) != 0) break;
              *(undefined8 *)(ptr + 10) = *(undefined8 *)(piVar4 + 2);
              iVar1 = piVar4[4];
joined_r0x001002b0:
              iVar5 = iVar5 + 1;
              goto joined_r0x001002b0;
                     case 2:
              if (*(long *)(ptr + 0xc) == 0) {
                *(undefined8 *)(ptr + 0xc) = *(undefined8 *)(piVar4 + 2);
                iVar1 = piVar4[4];
                goto joined_r0x001002b0;
              }
              break;
                     case 3:
              if (*(long *)(ptr + 0x10) == 0) {
                *(undefined8 *)(ptr + 0x10) = *(undefined8 *)(piVar4 + 2);
                iVar1 = piVar4[4];
                goto joined_r0x001002b0;
              }
              break;
                     case 4:
              if (*(long *)(ptr + 0xe) == 0) {
                *(undefined8 *)(ptr + 0xe) = *(undefined8 *)(piVar4 + 2);
                iVar1 = piVar4[4];
                goto joined_r0x001002b0;
              }
              break;
                     case 5:
              if (*(long *)(ptr + 0x12) == 0) {
                iVar5 = iVar5 + 1;
                *(undefined8 *)(ptr + 0x12) = *(undefined8 *)(piVar4 + 2);
                iVar1 = piVar4[4];
                goto joined_r0x001002b0;
              }
              break;
                     case 6:
              if (*(long *)(ptr + 0x14) == 0) {
                *(undefined8 *)(ptr + 0x14) = *(undefined8 *)(piVar4 + 2);
                iVar1 = piVar4[4];
                goto joined_r0x001002b0;
              }
              break;
                     case 7:
              if (*(long *)(ptr + 0x16) == 0) {
                uVar3 = uVar3 + 1;
                *(undefined8 *)(ptr + 0x16) = *(undefined8 *)(piVar4 + 2);
                iVar1 = piVar4[4];
                goto joined_r0x001002b0;
              }
              break;
                     case 8:
              if (*(long *)(ptr + 0x18) == 0) {
                uVar3 = uVar3 + 1;
                *(undefined8 *)(ptr + 0x18) = *(undefined8 *)(piVar4 + 2);
                iVar1 = piVar4[4];
                goto joined_r0x001002b0;
              }
              break;
                     case 9:
              if (*(long *)(ptr + 0x1a) == 0) {
                uVar6 = uVar6 + 1;
                *(undefined8 *)(ptr + 0x1a) = *(undefined8 *)(piVar4 + 2);
                iVar1 = piVar4[4];
                goto joined_r0x001002b0;
              }
              break;
                     case 10:
              if (*(long *)(ptr + 0x1c) == 0) {
                uVar6 = uVar6 + 1;
                *(undefined8 *)(ptr + 0x1c) = *(undefined8 *)(piVar4 + 2);
                iVar1 = piVar4[4];
                goto joined_r0x001002b0;
              }
                  }
                  iVar1 = piVar4[4];
                  joined_r0x001002b0:piVar4 = piVar4 + 4;
               } while ( iVar1 != 0 );
               if (( iVar5 == 4 ) && ( ( ( uVar3 | uVar6 ) & 0xfffffffd ) == 0 )) {
                  return ptr;
               }
            }
            ERR_new();
            ERR_set_debug("crypto/evp/exchange.c", 0x8e, "evp_keyexch_from_algorithm");
            ERR_set_error(6, 0xc1, 0);
         }
         goto LAB_0010034c;
      }
      CRYPTO_free(ptr);
   }
   ERR_new();
   ptr = (undefined4*)0x0;
   ERR_set_debug("crypto/evp/exchange.c", 0x3a, "evp_keyexch_from_algorithm");
   ERR_set_error(6, 0x80006, 0);
   LAB_0010034c:EVP_KEYEXCH_free(ptr);
   return (undefined4*)0x0;
}undefined8 EVP_KEYEXCH_up_ref(long param_1) {
   LOCK();
   *(int*)( param_1 + 0x20 ) = *(int*)( param_1 + 0x20 ) + 1;
   UNLOCK();
   return 1;
}void evp_keyexch_up_ref(void) {
   EVP_KEYEXCH_up_ref();
   return;
}undefined8 EVP_KEYEXCH_get0_provider(long param_1) {
   return *(undefined8*)( param_1 + 0x18 );
}void EVP_KEYEXCH_fetch(undefined8 param_1, undefined8 param_2, undefined8 param_3) {
   evp_generic_fetch(param_1, 0xb, param_2, param_3, evp_keyexch_from_algorithm, evp_keyexch_up_ref, evp_keyexch_free);
   return;
}void evp_keyexch_fetch_from_prov(undefined8 param_1, undefined8 param_2, undefined8 param_3) {
   evp_generic_fetch_from_prov(param_1, 0xb, param_2, param_3, evp_keyexch_from_algorithm, evp_keyexch_up_ref, evp_keyexch_free);
   return;
}uint EVP_PKEY_derive_init_ex(undefined4 *param_1, undefined8 param_2) {
   undefined8 uVar1;
   code *pcVar2;
   int iVar3;
   uint uVar4;
   long lVar5;
   long lVar6;
   undefined8 uVar7;
   long lVar8;
   undefined8 uVar9;
   long lVar10;
   EVP_PKEY *pkey;
   stack_st_X509_ATTRIBUTE *psVar11;
   long in_FS_OFFSET;
   bool bVar12;
   long local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_48 = 0;
   if (param_1 == (undefined4*)0x0) {
      ERR_new();
      ERR_set_debug("crypto/evp/exchange.c", 0xd9, "EVP_PKEY_derive_init_ex");
      ERR_set_error(6, 0xc0102, 0);
   } else {
      evp_pkey_ctx_free_old_ops();
      *param_1 = 0x800;
      ERR_set_mark();
      lVar5 = *(long*)( param_1 + 8 );
      if (lVar5 != 0) {
         pkey = *(EVP_PKEY**)( param_1 + 0x22 );
         if (pkey == (EVP_PKEY*)0x0) {
            pkey = EVP_PKEY_new();
            if (( pkey != (EVP_PKEY*)0x0 ) && ( iVar3 = EVP_PKEY_set_type_by_keymgmt(pkey, *(undefined8*)( param_1 + 8 )) ),iVar3 != 0) {
               psVar11 = (stack_st_X509_ATTRIBUTE*)evp_keymgmt_newdata(*(undefined8*)( param_1 + 8 ));
               pkey[1].attributes = psVar11;
               if (psVar11 != (stack_st_X509_ATTRIBUTE*)0x0) {
                  *(EVP_PKEY**)( param_1 + 0x22 ) = pkey;
                  lVar5 = *(long*)( param_1 + 8 );
                  goto LAB_001004e9;
               }
            }
            ERR_clear_last_mark();
            EVP_PKEY_free(pkey);
            ERR_new();
            uVar7 = 0xf1;
            LAB_001007ce:ERR_set_debug("crypto/evp/exchange.c", uVar7, "EVP_PKEY_derive_init_ex");
            ERR_set_error(6, 0x86, 0);
         } else {
            LAB_001004e9:if (( *(long*)&pkey[1].save_parameters == 0 ) || ( *(long*)&pkey[1].save_parameters == lVar5 )) {
               lVar5 = evp_keymgmt_util_query_operation_name(lVar5, 0xb);
               if (lVar5 != 0) {
                  EVP_KEYEXCH_free(0);
                  EVP_KEYMGMT_free(local_48);
                  lVar6 = EVP_KEYEXCH_fetch(*(undefined8*)( param_1 + 2 ), lVar5, *(undefined8*)( param_1 + 4 ));
                  if (lVar6 == 0) goto LAB_00100608;
                  uVar4 = 1;
                  uVar7 = EVP_KEYEXCH_get0_provider(lVar6);
                  do {
                     uVar1 = *(undefined8*)( param_1 + 4 );
                     uVar9 = EVP_KEYMGMT_get0_name(*(undefined8*)( param_1 + 8 ));
                     lVar10 = evp_keymgmt_fetch_from_prov(uVar7, uVar9, uVar1);
                     local_48 = lVar10;
                     if (lVar10 != 0) {
                        lVar8 = evp_pkey_export_to_provider(*(undefined8*)( param_1 + 0x22 ), *(undefined8*)( param_1 + 2 ), &local_48, *(undefined8*)( param_1 + 4 ));
                        bVar12 = lVar8 == 0;
                        if (local_48 == 0) goto LAB_0010067b;
                        if (uVar4 < 2) goto LAB_00100600;
                        LAB_001006a0:if (lVar8 != 0) {
                           ERR_pop_to_mark();
                           *(long*)( param_1 + 10 ) = lVar6;
                           pcVar2 = *(code**)( lVar6 + 0x28 );
                           uVar7 = ossl_provider_ctx(*(undefined8*)( lVar6 + 0x18 ));
                           lVar5 = ( *pcVar2 )(uVar7);
                           *(long*)( param_1 + 0xc ) = lVar5;
                           if (lVar5 == 0) {
                              ERR_new(0);
                              uVar7 = 0x15d;
                              goto LAB_001007ce;
                           }
                           iVar3 = ( **(code**)( lVar6 + 0x30 ) )(lVar5, lVar8, param_2);
                           EVP_KEYMGMT_free(local_48);
                           uVar4 = ( uint )(iVar3 != 0);
                           goto LAB_00100546;
                        }
                        EVP_KEYEXCH_free(lVar6);
                        break;
                     }
                     lVar8 = 0;
                     bVar12 = true;
                     LAB_0010067b:EVP_KEYMGMT_free(lVar10);
                     if (1 < uVar4) goto LAB_001006a0;
                     LAB_00100600:if (!bVar12) goto LAB_001006a0;
                     LAB_00100608:uVar4 = 2;
                     EVP_KEYEXCH_free(lVar6);
                     EVP_KEYMGMT_free(local_48);
                     uVar7 = EVP_KEYMGMT_get0_provider(*(undefined8*)( param_1 + 8 ));
                     lVar6 = evp_keyexch_fetch_from_prov(uVar7, lVar5, *(undefined8*)( param_1 + 4 ));
                  } while ( lVar6 != 0 );
                  goto LAB_00100700;
               }
               ERR_clear_last_mark();
               ERR_new();
               uVar7 = 0x104;
               goto LAB_001007ce;
            }
            ERR_clear_last_mark();
            ERR_new();
            ERR_set_debug("crypto/evp/exchange.c", 0xfd, "EVP_PKEY_derive_init_ex");
            ERR_set_error(6, 0xc0103, 0);
         }
         uVar4 = 0;
         evp_pkey_ctx_free_old_ops(param_1);
         *param_1 = 0;
         EVP_KEYMGMT_free(local_48);
         goto LAB_00100546;
      }
      LAB_00100700:ERR_pop_to_mark();
      lVar5 = *(long*)( param_1 + 0x1e );
      if (( lVar5 != 0 ) && ( *(long*)( lVar5 + 0xb8 ) != 0 )) {
         if (*(code**)( lVar5 + 0xb0 ) == (code*)0x0) {
            uVar4 = 1;
         } else {
            uVar4 = ( **(code**)( lVar5 + 0xb0 ) )(param_1);
            if ((int)uVar4 < 1) {
               *param_1 = 0;
               EVP_KEYMGMT_free(local_48);
            } else {
               EVP_KEYMGMT_free(local_48);
            }
         }
         goto LAB_00100546;
      }
      ERR_new();
      ERR_set_debug("crypto/evp/exchange.c", 0x175, "EVP_PKEY_derive_init_ex");
      ERR_set_error(6, 0x96, 0);
   }
   uVar4 = 0xfffffffe;
   LAB_00100546:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return uVar4;
}int EVP_PKEY_derive_init(EVP_PKEY_CTX *ctx) {
   int iVar1;
   iVar1 = EVP_PKEY_derive_init_ex(ctx, 0);
   return iVar1;
}undefined8 EVP_PKEY_derive_set_peer_ex(uint *param_1, EVP_PKEY *param_2, int param_3) {
   int iVar1;
   EVP_PKEY_CTX *ctx;
   undefined8 uVar2;
   undefined8 uVar3;
   long lVar4;
   long lVar5;
   undefined8 uVar6;
   long in_FS_OFFSET;
   long local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_38 = 0;
   if (param_1 == (uint*)0x0) {
      ERR_new();
      ERR_set_debug("crypto/evp/exchange.c", 0x18c, "EVP_PKEY_derive_set_peer_ex");
      ERR_set_error(6, 0xc0102, 0);
      goto LAB_00100ba0;
   }
   if (( ( *param_1 & 0x800 ) == 0 ) || ( *(long*)( param_1 + 0xc ) == 0 )) goto LAB_001009e7;
   if (*(long*)( *(long*)( param_1 + 10 ) + 0x38 ) == 0) {
      ERR_new();
      uVar6 = 0x194;
      LAB_00100af5:ERR_set_debug("crypto/evp/exchange.c", uVar6, "EVP_PKEY_derive_set_peer_ex");
      ERR_set_error(6, 0x96, 0);
      uVar6 = 0xfffffffe;
   } else {
      uVar6 = *(undefined8*)( param_1 + 4 );
      if (param_3 == 0) {
         LAB_0010094b:uVar2 = EVP_KEYMGMT_get0_name(*(undefined8*)( param_1 + 8 ));
         uVar3 = EVP_KEYEXCH_get0_provider(*(undefined8*)( param_1 + 10 ));
         lVar4 = evp_keymgmt_fetch_from_prov(uVar3, uVar2, uVar6);
         local_38 = lVar4;
         if (lVar4 == 0) {
            EVP_KEYMGMT_free(0);
            LAB_001009e7:lVar4 = *(long*)( param_1 + 0x1e );
            if (( lVar4 == 0 ) || ( ( ( ( *(long*)( lVar4 + 0xb8 ) == 0 && ( *(long*)( lVar4 + 0x98 ) == 0 ) ) && ( *(long*)( lVar4 + 0xa8 ) == 0 ) ) || ( *(code**)( lVar4 + 0xc0 ) == (code*)0x0 ) ) )) {
               ERR_new();
               uVar6 = 0x1cb;
               goto LAB_00100af5;
            }
            if (( ( *param_1 - 0x200 & 0xfffffdff ) == 0 ) || ( *param_1 == 0x800 )) {
               uVar6 = ( **(code**)( lVar4 + 0xc0 ) )(param_1, 2, 0, param_2);
               if ((int)uVar6 < 1) goto LAB_001009b8;
               if ((int)uVar6 == 2) goto LAB_00100aba;
               if (*(int**)( param_1 + 0x22 ) == (int*)0x0) {
                  ERR_new();
                  ERR_set_debug("crypto/evp/exchange.c", 0x1de, "EVP_PKEY_derive_set_peer_ex");
                  ERR_set_error(6, 0x9a, 0);
               } else if (**(int**)( param_1 + 0x22 ) == param_2->type) {
                  iVar1 = EVP_PKEY_missing_parameters(param_2);
                  if (( iVar1 != 0 ) || ( iVar1 = EVP_PKEY_parameters_eq(*(undefined8*)( param_1 + 0x22 ), param_2) ),iVar1 != 0) {
                     uVar6 = ( **(code**)( *(long*)( param_1 + 0x1e ) + 0xc0 ) )(param_1, 2, 1, param_2);
                     iVar1 = (int)uVar6;
                     goto joined_r0x00100a91;
                  }
                  ERR_new();
                  ERR_set_debug("crypto/evp/exchange.c", 0x1f0, "EVP_PKEY_derive_set_peer_ex");
                  ERR_set_error(6, 0x99, 0);
               } else {
                  ERR_new();
                  ERR_set_debug("crypto/evp/exchange.c", 0x1e3, "EVP_PKEY_derive_set_peer_ex");
                  ERR_set_error(6, 0x65, 0);
               }
            } else {
               ERR_new();
               ERR_set_debug("crypto/evp/exchange.c", 0x1d1, "EVP_PKEY_derive_set_peer_ex");
               ERR_set_error(6, 0x97, 0);
            }
         } else {
            lVar5 = evp_pkey_export_to_provider(param_2, *(undefined8*)( param_1 + 2 ), &local_38, *(undefined8*)( param_1 + 4 ));
            EVP_KEYMGMT_free(lVar4);
            if (lVar5 == 0) goto LAB_001009e7;
            uVar6 = ( **(code**)( *(long*)( param_1 + 10 ) + 0x38 ) )(*(undefined8*)( param_1 + 0xc ), lVar5);
            iVar1 = (int)uVar6;
            joined_r0x00100a91:if (iVar1 < 1) goto LAB_001009b8;
            iVar1 = EVP_PKEY_up_ref(param_2);
            if (iVar1 != 0) {
               EVP_PKEY_free(*(EVP_PKEY**)( param_1 + 0x24 ));
               *(EVP_PKEY**)( param_1 + 0x24 ) = param_2;
               LAB_00100aba:uVar6 = 1;
               goto LAB_001009b8;
            }
         }
      } else {
         ctx = (EVP_PKEY_CTX*)EVP_PKEY_CTX_new_from_pkey(*(undefined8*)( param_1 + 2 ), param_2, uVar6);
         if (ctx != (EVP_PKEY_CTX*)0x0) {
            iVar1 = EVP_PKEY_public_check(ctx);
            EVP_PKEY_CTX_free(ctx);
            if (0 < iVar1) {
               uVar6 = *(undefined8*)( param_1 + 4 );
               goto LAB_0010094b;
            }
         }
      }
      LAB_00100ba0:uVar6 = 0xffffffff;
   }
   LAB_001009b8:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar6;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}int EVP_PKEY_derive_set_peer(EVP_PKEY_CTX *ctx, EVP_PKEY *peer) {
   int iVar1;
   iVar1 = EVP_PKEY_derive_set_peer_ex(ctx, peer, 1);
   return iVar1;
}int EVP_PKEY_derive(EVP_PKEY_CTX *ctx, uchar *key, size_t *keylen) {
   long lVar1;
   int iVar2;
   ulong uVar3;
   code *UNRECOVERED_JUMPTABLE;
   if (( ctx == (EVP_PKEY_CTX*)0x0 ) || ( keylen == (size_t*)0x0 )) {
      ERR_new();
      ERR_set_debug("crypto/evp/exchange.c", 0x20d, "EVP_PKEY_derive");
      ERR_set_error(6, 0xc0102, 0);
   } else {
      if (( *(uint*)ctx & 0x800 ) != 0) {
         if (*(long*)( ctx + 0x30 ) != 0) {
            for (int i_1286 = 0; i_1286 < 2; i_1286++) {
               /* WARNING: Could not recover jumptable at 0x00100cba. Too many branches */
            }
            iVar2 = ( **(code**)( *(long*)( ctx + 0x28 ) + 0x40 ) )();
            return iVar2;
         }
         lVar1 = *(long*)( ctx + 0x78 );
         if (( lVar1 == 0 ) || ( UNRECOVERED_JUMPTABLE = *(code**)( lVar1 + 0xb8 ) ),UNRECOVERED_JUMPTABLE == (code*)0x0) {
            ERR_new();
            ERR_set_debug("crypto/evp/exchange.c", 0x21f, "EVP_PKEY_derive");
            ERR_set_error(6, 0x96, 0);
            return -2;
         }
         if (( *(byte*)( lVar1 + 4 ) & 2 ) != 0) {
            iVar2 = EVP_PKEY_get_size(*(undefined8*)( ctx + 0x88 ));
            uVar3 = (ulong)iVar2;
            if (uVar3 == 0) {
               ERR_new();
               ERR_set_debug("crypto/evp/exchange.c", 0x223, "EVP_PKEY_derive");
               ERR_set_error(6, 0xa3, 0);
            } else {
               if (key == (uchar*)0x0) {
                  *keylen = uVar3;
                  return 1;
               }
               if (uVar3 <= *keylen) {
                  UNRECOVERED_JUMPTABLE = *(code**)( *(long*)( ctx + 0x78 ) + 0xb8 );
                  goto LAB_00100ce3;
               }
               ERR_new();
               ERR_set_debug("crypto/evp/exchange.c", 0x223, "EVP_PKEY_derive");
               ERR_set_error(6, 0x9b, 0);
            }
            return 0;
         }
         LAB_00100ce3:/* WARNING: Could not recover jumptable at 0x00100ceb. Too many branches *//* WARNING: Treating indirect jump as call */iVar2 = ( *UNRECOVERED_JUMPTABLE )(ctx, key, keylen, UNRECOVERED_JUMPTABLE);
         return iVar2;
      }
      ERR_new();
      ERR_set_debug("crypto/evp/exchange.c", 0x212, "EVP_PKEY_derive");
      ERR_set_error(6, 0x97, 0);
   }
   return -1;
}undefined4 evp_keyexch_get_number(undefined4 *param_1) {
   return *param_1;
}undefined8 EVP_KEYEXCH_get0_name(long param_1) {
   return *(undefined8*)( param_1 + 8 );
}undefined8 EVP_KEYEXCH_get0_description(long param_1) {
   return *(undefined8*)( param_1 + 0x10 );
}bool EVP_KEYEXCH_is_a(undefined4 *param_1, undefined8 param_2) {
   int iVar1;
   if (param_1 != (undefined4*)0x0) {
      iVar1 = evp_is_a(*(undefined8*)( param_1 + 6 ), *param_1, 0, param_2);
      return iVar1 != 0;
   }
   return false;
}void EVP_KEYEXCH_do_all_provided(undefined8 param_1, undefined8 param_2, undefined8 param_3) {
   evp_generic_do_all(param_1, 0xb, param_2, param_3, evp_keyexch_from_algorithm, evp_keyexch_up_ref, evp_keyexch_free);
   return;
}undefined8 EVP_KEYEXCH_names_do_all(undefined4 *param_1, undefined8 param_2, undefined8 param_3) {
   undefined8 uVar1;
   if (*(long*)( param_1 + 6 ) == 0) {
      return 1;
   }
   uVar1 = evp_names_do_all(*(long*)( param_1 + 6 ), *param_1, param_2, param_3);
   return uVar1;
}undefined8 EVP_KEYEXCH_gettable_ctx_params(long param_1) {
   undefined8 uVar1;
   if (param_1 == 0) {
      return 0;
   }
   if (*(long*)( param_1 + 0x70 ) != 0) {
      uVar1 = EVP_KEYEXCH_get0_provider();
      uVar1 = ossl_provider_ctx(uVar1);
      for (int i_1287 = 0; i_1287 < 2; i_1287++) {
         /* WARNING: Could not recover jumptable at 0x00100f5b. Too many branches */
      }
      uVar1 = ( **(code**)( param_1 + 0x70 ) )(0, uVar1);
      return uVar1;
   }
   return 0;
}undefined8 EVP_KEYEXCH_settable_ctx_params(long param_1) {
   undefined8 uVar1;
   if (param_1 == 0) {
      return 0;
   }
   if (*(long*)( param_1 + 0x60 ) != 0) {
      uVar1 = EVP_KEYEXCH_get0_provider();
      uVar1 = ossl_provider_ctx(uVar1);
      for (int i_1288 = 0; i_1288 < 2; i_1288++) {
         /* WARNING: Could not recover jumptable at 0x00100f9b. Too many branches */
      }
      uVar1 = ( **(code**)( param_1 + 0x60 ) )(0, uVar1);
      return uVar1;
   }
   return 0;
}
