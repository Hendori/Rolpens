long try_key_value_legacy_constprop_0_isra_0(uchar *param_1, long param_2, undefined8 *param_3, long param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7) {
   int iVar1;
   X509_SIG *a;
   PKCS8_PRIV_KEY_INFO *a_00;
   long lVar2;
   uint uVar3;
   long in_FS_OFFSET;
   int local_474;
   uchar *local_470;
   uchar *local_468;
   undefined8 local_460;
   X509_ALGOR *local_458;
   int *local_450;
   char local_448[1032];
   long local_40;
   uVar3 = *(uint*)( param_4 + 0x28 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( uVar3 == 0 ) || ( uVar3 == 3 )) {
      local_470 = param_1;
      lVar2 = d2i_PUBKEY_ex(0, &local_470, param_2, param_6, param_7);
      if (lVar2 != 0) {
         *param_3 = OSSL_STORE_INFO_new_PUBKEY;
         goto LAB_001001b2;
      }

      uVar3 = *(uint*)( param_4 + 0x28 );
   }

   lVar2 = 0;
   if (( uVar3 & 0xfffffffb ) != 0) goto LAB_001001b2;
   local_468 = (uchar*)0x0;
   local_470 = param_1;
   a = d2i_X509_SIG((X509_SIG**)0x0, &local_470, param_2);
   if (a != (X509_SIG*)0x0) {
      local_460 = 0;
      iVar1 = ossl_pw_passphrase_callback_dec(local_448, 0x400, &local_460, 0, param_5);
      if (iVar1 == 0) {
         ERR_new();
         ERR_set_debug("crypto/store/store_result.c", 0x15e, "try_key_value_legacy");
         ERR_set_error(0x2c, 0x73, 0);
      }
 else {
         local_458 = (X509_ALGOR*)0x0;
         local_450 = (int*)0x0;
         local_474 = 0;
         X509_SIG_get0(a, &local_458, &local_450);
         PKCS12_pbe_crypt(local_458, local_448, (int)local_460, *(uchar**)( local_450 + 2 ), *local_450, &local_468, &local_474, 0);
         param_2 = (long)local_474;
         param_1 = local_468;
      }

      X509_SIG_free(a);
   }

   if (param_1 == (uchar*)0x0) {
      LAB_00100190:lVar2 = 0;
   }
 else {
      local_470 = param_1;
      a_00 = d2i_PKCS8_PRIV_KEY_INFO((PKCS8_PRIV_KEY_INFO**)0x0, &local_470, param_2);
      if (a_00 == (PKCS8_PRIV_KEY_INFO*)0x0) goto LAB_00100190;
      lVar2 = EVP_PKCS82PKEY_ex(a_00, param_6, param_7);
      PKCS8_PRIV_KEY_INFO_free(a_00);
      if (lVar2 != 0) {
         *param_3 = OSSL_STORE_INFO_new_PKEY;
      }

   }

   CRYPTO_free(local_468);
   LAB_001001b2:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return lVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */undefined4 try_pkcs12_isra_0(int *param_1, undefined8 *param_2, long param_3) {
   int iVar1;
   PKCS12 *p12;
   undefined8 uVar2;
   long lVar3;
   long lVar4;
   char *pcVar5;
   undefined4 uVar6;
   long lVar7;
   long in_FS_OFFSET;
   char *local_4d0;
   long local_4c8;
   long local_4b8;
   EVP_PKEY *local_4b0;
   X509 *local_4a8;
   stack_st_X509 *local_4a0;
   undefined *local_498;
   undefined4 local_490;
   char *local_488;
   undefined8 local_480;
   undefined8 uStack_478;
   undefined8 local_470;
   undefined4 local_468;
   undefined8 local_460;
   undefined1 local_458[16];
   char local_448[1032];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*param_1 != 0) {
      uVar6 = 1;
      goto LAB_0010029f;
   }

   p12 = d2i_PKCS12((PKCS12**)0x0, (uchar**)( param_1 + 10 ), *(long*)( param_1 + 0xc ));
   if (p12 == (PKCS12*)0x0) {
      uVar6 = 1;
   }
 else {
      *param_1 = -1;
      local_4b0 = (EVP_PKEY*)0x0;
      local_4a8 = (X509*)0x0;
      local_4a0 = (stack_st_X509*)0x0;
      iVar1 = PKCS12_mac_present(p12);
      uVar6 = 0;
      if (( iVar1 == 0 ) || ( iVar1 = iVar1 != 0 )) {
         pcVar5 = (char*)0x0;
         LAB_00100331:iVar1 = PKCS12_parse(p12, pcVar5, &local_4b0, &local_4a8, &local_4a0);
         if (iVar1 != 0) {
            lVar3 = OPENSSL_sk_new_null();
            if (lVar3 == 0) {
               LAB_001005a9:EVP_PKEY_free(local_4b0);
               uVar6 = 1;
               X509_free(local_4a8);
               OSSL_STACK_OF_X509_free(local_4a0);
               for (int i = 0; i < 3; i++) {
                  OSSL_STORE_INFO_free(0);
               }

            }
 else {
               if (local_4b0 == (EVP_PKEY*)0x0) {
                  LAB_00100512:if (local_4a8 != (X509*)0x0) {
                     local_4c8 = OSSL_STORE_INFO_new_CERT();
                     if (local_4c8 == 0) goto LAB_001005e8;
                     local_4a8 = (X509*)0x0;
                     iVar1 = OPENSSL_sk_push(lVar3, local_4c8);
                     if (iVar1 == 0) {
                        LAB_00100650:lVar4 = 0;
                        lVar7 = local_4c8;
                        goto LAB_001005ed;
                     }

                  }

                  do {
                     iVar1 = OPENSSL_sk_num(local_4a0);
                     if (iVar1 < 1) goto LAB_001005a9;
                     uVar2 = OPENSSL_sk_value(local_4a0, 0);
                     local_4c8 = OSSL_STORE_INFO_new_CERT(uVar2);
                     if (local_4c8 == 0) goto LAB_00100650;
                     lVar4 = OPENSSL_sk_shift(local_4a0);
                  }
 while ( ( lVar4 != 0 ) && ( iVar1 = iVar1 != 0 ) );
                  lVar4 = 0;
                  lVar7 = 0;
               }
 else {
                  lVar4 = OSSL_STORE_INFO_new_PKEY();
                  if (lVar4 == 0) {
                     LAB_001005e8:lVar4 = 0;
                     lVar7 = 0;
                  }
 else {
                     local_4b0 = (EVP_PKEY*)0x0;
                     iVar1 = OPENSSL_sk_push(lVar3, lVar4);
                     lVar7 = 0;
                     if (iVar1 != 0) goto LAB_00100512;
                  }

                  LAB_001005ed:local_4c8 = 0;
               }

               EVP_PKEY_free(local_4b0);
               X509_free(local_4a8);
               OSSL_STACK_OF_X509_free(local_4a0);
               OSSL_STORE_INFO_free(lVar4);
               OSSL_STORE_INFO_free(lVar7);
               OSSL_STORE_INFO_free(local_4c8);
               OPENSSL_sk_pop_free(lVar3, OSSL_STORE_INFO_free);
               lVar3 = 0;
            }

            *(long*)( param_3 + 0x40 ) = lVar3;
         }

      }
 else {
         iVar1 = PKCS12_verify_mac(p12, "", 0);
         pcVar5 = "";
         if (iVar1 != 0) goto LAB_00100331;
         local_490 = 4;
         local_498 = &_LC4;
         local_480 = __LC5;
         uStack_478 = _UNK_00101108;
         local_488 = prompt_info_1;
         local_470 = 0;
         local_468 = 0;
         local_460 = 0;
         local_458 = (undefined1[16])0x0;
         iVar1 = ossl_pw_get_passphrase(local_448, 0x400, &local_4b8, &local_498, 0, param_3 + 0x48);
         if (iVar1 == 0) {
            ERR_new();
            ERR_set_debug("crypto/store/store_result.c", 0x247, __func___0);
            ERR_set_error(0x2c, 0x72, 0);
         }
 else {
            local_448[local_4b8] = '\0';
            iVar1 = PKCS12_verify_mac(p12, local_448, (int)local_4b8);
            pcVar5 = local_448;
            if (iVar1 != 0) goto LAB_00100331;
            ERR_new();
            ERR_set_debug("crypto/store/store_result.c", 0x252, __func___0);
            pcVar5 = "maybe wrong password";
            if (local_4b8 == 0) {
               pcVar5 = "empty password";
            }

            ERR_set_error(0x2c, 0x71, pcVar5);
         }

      }

      local_4d0 = local_448;
      OPENSSL_cleanse(local_4d0, 0x401);
      PKCS12_free(p12);
   }

   uVar2 = OPENSSL_sk_shift(*(undefined8*)( param_3 + 0x40 ));
   *param_2 = uVar2;
   LAB_0010029f:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar6;
}
/* WARNING: Removing unreachable block (ram,0x00100e18) */bool ossl_store_handle_load_result(undefined8 param_1, long *param_2) {
   undefined8 uVar1;
   int iVar2;
   int iVar3;
   long lVar4;
   undefined8 uVar5;
   long lVar6;
   long lVar7;
   char *ptr;
   char *ptr_00;
   undefined8 uVar8;
   code *pcVar9;
   X509 *pXVar10;
   X509_CRL *a;
   EVP_PKEY *pkey;
   X509 *pXVar11;
   long in_FS_OFFSET;
   bool bVar12;
   code *local_d0;
   EVP_PKEY *local_c8;
   uchar *local_c0;
   X509 *local_b8;
   long local_b0;
   undefined4 local_a8;
   undefined1 local_98[16];
   undefined1 local_88[16];
   undefined1 local_78[8];
   uchar *puStack_70;
   undefined1 local_68[16];
   undefined1 local_58[24];
   long local_40;
   lVar7 = param_2[1];
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar4 = OSSL_STORE_LOADER_get0_provider(*(undefined8*)( lVar7 + 8 ));
   uVar5 = ossl_provider_libctx(lVar4);
   uVar1 = *(undefined8*)( lVar7 + 0x30 );
   local_98 = (undefined1[16])0x0;
   local_88 = (undefined1[16])0x0;
   _local_78 = (undefined1[16])0x0;
   local_68 = (undefined1[16])0x0;
   local_58._0_16_ = (undefined1[16])0x0;
   lVar6 = OSSL_PARAM_locate_const(param_1, &_LC7);
   if (( ( ( ( ( lVar6 == 0 ) || ( iVar2 = OSSL_PARAM_get_int(lVar6, local_98) ),iVar2 != 0 ) ) && ( ( lVar6 = OSSL_PARAM_locate_const(param_1, "data-type") ),lVar6 == 0 || ( iVar2 = OSSL_PARAM_get_utf8_string_ptr(lVar6, local_98 + 8) ),iVar2 != 0 ) ) )) &&( ( ( ( lVar6 = OSSL_PARAM_locate_const(param_1, &_LC9) ),lVar6 == 0 || ( iVar2 = OSSL_PARAM_get_octet_string_ptr(lVar6, local_78 + 8, local_68) ),iVar2 != 0 ) ) || ( iVar2 = iVar2 != 0 ) ) && ( ( lVar6 = OSSL_PARAM_locate_const(param_1, "data-structure") ),lVar6 == 0 || ( iVar2 = OSSL_PARAM_get_utf8_string_ptr(lVar6, local_88 + 8) ),iVar2 != 0 ) && ( ( lVar6 = OSSL_PARAM_locate_const(param_1, "input-type") ),lVar6 == 0 || ( iVar2 = iVar2 != 0 ) ) && ( ( ( lVar6 = OSSL_PARAM_locate_const(param_1, "reference") ),lVar6 == 0 || ( iVar2 = OSSL_PARAM_get_octet_string_ptr(lVar6, local_68 + 8, local_58) ),iVar2 != 0 ) ) && ( ( lVar6 = OSSL_PARAM_locate_const(param_1, &_LC13) ),lVar6 == 0 || ( iVar2 = OSSL_PARAM_get_utf8_string_ptr(lVar6, local_58 + 8) ),iVar2 != 0 );
   if (( *param_2 == 0 ) && ( local_98._0_4_ == 1 )) {
      if (local_78 != (undefined1[8])0x0) {
         ptr = CRYPTO_strdup((char*)local_78, "crypto/store/store_result.c", 0xac);
         if (( ptr == (char*)0x0 ) || ( ( ptr_00 = (char*)local_58._8_8_ ),(char*)local_58._8_8_ != (char*)0x0 && ( ptr_00 = CRYPTO_strdup((char*)local_58._8_8_, "crypto/store/store_result.c", 0xae) ),ptr_00 == (char*)0x0 )) {
            ptr_00 = (char*)0x0;
         }
 else {
            lVar6 = OSSL_STORE_INFO_new_NAME(ptr);
            *param_2 = lVar6;
            if (lVar6 != 0) {
               OSSL_STORE_INFO_set0_NAME_description(lVar6, ptr_00);
               goto LAB_00100869;
            }

         }

         CRYPTO_free(ptr);
         CRYPTO_free(ptr_00);
      }

      goto LAB_001008f2;
   }

   LAB_00100869:ERR_pop_to_mark();
   ERR_set_mark();
   if (*param_2 == 0) {
      local_d0 = (code*)0x0;
      if (( local_98 & (undefined1[16])0xfffffffd ) != (undefined1[16])0x0) goto LAB_00100880;
      if (( local_98._0_4_ != 2 ) || ( local_68._8_8_ == 0 )) {
         if (puStack_70 == (uchar*)0x0) {
            LAB_00100ccf:EVP_PKEY_free((EVP_PKEY*)0x0);
         }
 else {
            iVar2 = *(int*)( lVar7 + 0x28 );
            local_c8 = (EVP_PKEY*)0x0;
            local_c0 = puStack_70;
            local_b8 = (X509*)local_68._0_8_;
            if (iVar2 == 3) {
               iVar2 = 0x86;
               LAB_00100a67:uVar8 = OSSL_DECODER_CTX_new_for_pkey(&local_c8, local_88._0_8_, local_88._8_8_, local_98._8_8_, iVar2, uVar5, uVar1);
               OSSL_DECODER_CTX_set_passphrase_cb(uVar8, ossl_pw_passphrase_callback_dec, lVar7 + 0x48);
               OSSL_DECODER_from_data(uVar8, &local_c0, &local_b8);
               iVar2 = ossl_decoder_ctx_get_harderr(uVar8);
               OSSL_DECODER_CTX_free(uVar8);
               if (local_c8 == (EVP_PKEY*)0x0) {
                  if (iVar2 != 0) {
                     if (*param_2 == 0) {
                        EVP_PKEY_free((EVP_PKEY*)0x0);
                     }

                     goto LAB_001008f2;
                  }

                  goto LAB_00100c99;
               }

               local_98._0_4_ = 2;
               pkey = local_c8;
               LAB_00100ae5:iVar3 = evp_keymgmt_util_has(pkey, 1);
               if (iVar3 == 0) {
                  iVar3 = evp_keymgmt_util_has(pkey, 2);
                  if (iVar3 == 0) {
                     pcVar9 = OSSL_STORE_INFO_new_PARAMS;
                  }
 else {
                     pcVar9 = OSSL_STORE_INFO_new_PUBKEY;
                  }

               }
 else {
                  pcVar9 = OSSL_STORE_INFO_new_PKEY;
               }

               lVar4 = ( *pcVar9 )();
               *param_2 = lVar4;
               if (lVar4 == 0) {
                  EVP_PKEY_free(pkey);
               }

               if (iVar2 != 0) goto LAB_001008f2;
            }
 else {
               if (iVar2 < 4) {
                  if (iVar2 != 0) {
                     if (iVar2 != 2) goto LAB_00100c99;
                     iVar2 = 0x84;
                  }

                  goto LAB_00100a67;
               }

               if (iVar2 == 4) {
                  iVar2 = 0x87;
                  goto LAB_00100a67;
               }

               LAB_00100c99:pkey = (EVP_PKEY*)try_key_value_legacy_constprop_0_isra_0(puStack_70, local_68._0_8_, &local_d0, lVar7, lVar7 + 0x48, uVar5);
               if (pkey != (EVP_PKEY*)0x0) goto LAB_00100eca;
               if (*param_2 == 0) goto LAB_00100ccf;
            }

         }

         goto LAB_00100880;
      }

      if (local_98._8_8_ != 0) {
         pXVar11 = (X509*)EVP_KEYMGMT_fetch(uVar5, local_98._8_8_, uVar1);
         ERR_set_mark();
         pXVar10 = (X509*)0x0;
         if (pXVar11 != (X509*)0x0) {
            bVar12 = true;
            while (true) {
               lVar6 = EVP_KEYMGMT_get0_provider(pXVar11);
               pXVar10 = pXVar11;
               if (lVar4 == lVar6) break;
               pcVar9 = *(code**)( *(long*)( lVar7 + 8 ) + 0xc0 );
               local_b0 = 0;
               local_a8 = 0x87;
               local_b8 = pXVar11;
               if (( pcVar9 != (code*)0x0 ) && ( ( *pcVar9 )(*(undefined8*)( lVar7 + 0x10 ), local_68._8_8_, local_58._0_8_, &evp_keymgmt_util_try_import, &local_b8),lVar6 = local_b0,local_b0 != 0 )) goto LAB_00100e9c;
               if (!bVar12) goto LAB_00100deb;
               EVP_KEYMGMT_free(pXVar11);
               pXVar11 = (X509*)evp_keymgmt_fetch_from_prov(lVar4, local_98._8_8_, uVar1);
               pXVar10 = (X509*)0x0;
               if (pXVar11 == (X509*)0x0) goto LAB_00100deb;
               ERR_pop_to_mark();
               bVar12 = false;
               ERR_set_mark();
            }
;
            lVar6 = evp_keymgmt_load(pXVar11, local_68._8_8_, local_58._0_8_);
            if (lVar6 != 0) {
               LAB_00100e9c:ERR_pop_to_mark();
               pkey = (EVP_PKEY*)evp_keymgmt_util_make_pkey(pXVar11, lVar6);
               EVP_KEYMGMT_free(pXVar11);
               if (pkey == (EVP_PKEY*)0x0) goto LAB_001008f2;
               LAB_00100eca:local_98._0_4_ = 2;
               if (local_d0 == (code*)0x0) {
                  iVar2 = 0;
                  goto LAB_00100ae5;
               }

               lVar4 = ( *local_d0 )();
               *param_2 = lVar4;
               if (lVar4 == 0) {
                  EVP_PKEY_free(pkey);
               }

               goto LAB_00100880;
            }

         }

         LAB_00100deb:ERR_clear_last_mark();
         EVP_KEYMGMT_free(pXVar10);
      }

   }
 else {
      LAB_00100880:ERR_pop_to_mark();
      ERR_set_mark();
      if (( *param_2 != 0 ) || ( ( local_98._0_4_ != 0 && ( local_98._0_4_ != 3 ) ) )) goto LAB_00100895;
      local_b8 = (X509*)X509_new_ex(uVar5, uVar1);
      if (local_b8 == (X509*)0x0) goto LAB_001008f2;
      if (local_98._8_8_ == 0) {
         pXVar10 = d2i_X509_AUX(&local_b8, (uchar**)( local_78 + 8 ), local_68._0_8_);
         if (pXVar10 == (X509*)0x0) {
            LAB_00100e48:pXVar10 = d2i_X509(&local_b8, (uchar**)( local_78 + 8 ), local_68._0_8_);
            if (pXVar10 == (X509*)0x0) goto LAB_00100bc2;
         }

         LAB_00100b9a:if (local_b8 != (X509*)0x0) {
            local_98._0_4_ = 3;
            lVar4 = OSSL_STORE_INFO_new_CERT();
            *param_2 = lVar4;
            if (lVar4 == 0) goto LAB_00100bc2;
         }

      }
 else {
         iVar2 = OPENSSL_strcasecmp(local_98._8_8_, "TRUSTED CERTIFICATE");
         pXVar10 = d2i_X509_AUX(&local_b8, (uchar**)( local_78 + 8 ), local_68._0_8_);
         if (pXVar10 != (X509*)0x0) goto LAB_00100b9a;
         if (iVar2 != 0) goto LAB_00100e48;
         LAB_00100bc2:X509_free(local_b8);
      }

      LAB_00100895:ERR_pop_to_mark();
      ERR_set_mark();
      if (( *param_2 == 0 ) && ( ( local_98 & (undefined1[16])0xfffffffb ) == (undefined1[16])0x0 )) {
         a = d2i_X509_CRL((X509_CRL**)0x0, (uchar**)( local_78 + 8 ), local_68._0_8_);
         if (a == (X509_CRL*)0x0) {
            lVar4 = *param_2;
         }
 else {
            local_98._0_4_ = 4;
            iVar2 = ossl_x509_crl_set0_libctx(a, uVar5, uVar1);
            if (iVar2 == 0) {
               X509_CRL_free(a);
               a = (X509_CRL*)0x0;
               lVar4 = *param_2;
            }
 else {
               lVar4 = OSSL_STORE_INFO_new_CRL();
               *param_2 = lVar4;
            }

         }

         if (lVar4 == 0) {
            X509_CRL_free(a);
         }

      }

      ERR_pop_to_mark();
      ERR_set_mark();
      if (( *param_2 != 0 ) || ( iVar2 = iVar2 != 0 )) {
         ERR_pop_to_mark();
         lVar7 = *param_2;
         if (lVar7 == 0) {
            ERR_new();
            ERR_set_debug("crypto/store/store_result.c", 0x9d, "ossl_store_handle_load_result");
            ERR_set_error(0x2c, 0x8010c, 0);
            lVar7 = *param_2;
         }

         bVar12 = lVar7 != 0;
         goto LAB_00100902;
      }

   }

   LAB_001008f2:ERR_clear_last_mark();
}
bVar12 = false;LAB_00100902:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return bVar12;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}
