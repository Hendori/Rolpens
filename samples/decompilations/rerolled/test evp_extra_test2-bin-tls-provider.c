long xor_prov_import_key(int *param_1, undefined8 param_2, undefined4 param_3, undefined8 param_4) {
   int *piVar1;
   code *pcVar2;
   int iVar3;
   long lVar4;
   int *piVar5;
   int *piVar6;
   int iVar7;
   int iVar8;
   code *pcVar9;
   code *pcVar10;
   iVar3 = *param_1;
   piVar5 = param_1;
   iVar7 = iVar3;
   if (iVar3 != 0) {
      do {
         piVar6 = param_1;
         iVar8 = iVar3;
         if (iVar7 == 1) {
            pcVar9 = *(code**)( piVar5 + 2 );
            goto LAB_0010005b;
         }
         piVar1 = piVar5 + 4;
         piVar5 = piVar5 + 4;
         iVar7 = *piVar1;
      } while ( *piVar1 != 0 );
      pcVar9 = (code*)0x0;
      LAB_0010005b:do {
         if (iVar8 == 10) {
            pcVar10 = *(code**)( piVar6 + 2 );
            goto LAB_0010007b;
         }
         piVar5 = piVar6 + 4;
         piVar6 = piVar6 + 4;
         iVar8 = *piVar5;
      } while ( *piVar5 != 0 );
      pcVar10 = (code*)0x0;
      LAB_0010007b:do {
         if (iVar3 == 0x28) {
            pcVar2 = *(code**)( param_1 + 2 );
            if (pcVar9 == (code*)0x0 || pcVar10 == (code*)0x0) {
               return 0;
            }
            if (pcVar2 == (code*)0x0) {
               return 0;
            }
            lVar4 = ( *pcVar9 )(param_2);
            if (( lVar4 != 0 ) && ( iVar3 = iVar3 != 0 )) {
               return lVar4;
            }
            ( *pcVar10 )(lVar4);
            return 0;
         }
         iVar3 = param_1[4];
         param_1 = param_1 + 4;
      } while ( iVar3 != 0 );
   }
   return 0;
}undefined8 xor_init(long *param_1, long param_2) {
   if (( param_1 != (long*)0x0 ) && ( param_2 != 0 )) {
      *param_1 = param_2;
      return 1;
   }
   return 0;
}undefined8 xor_set_peer(long param_1, long param_2) {
   if (( param_1 != 0 ) && ( param_2 != 0 )) {
      *(long*)( param_1 + 8 ) = param_2;
      return 1;
   }
   return 0;
}undefined8 xor_derive(long *param_1, byte *param_2, undefined8 *param_3, ulong param_4) {
   byte *pbVar1;
   long lVar2;
   long lVar3;
   pbVar1 = (byte*)*param_1;
   if (( pbVar1 != (byte*)0x0 ) && ( lVar2 = lVar2 != 0 )) {
      *param_3 = 0x20;
      if (param_2 != (byte*)0x0) {
         if (param_4 < 0x20) {
            return 0;
         }
         lVar3 = 1;
         *param_2 = *(byte*)( lVar2 + 0x20 ) ^ *pbVar1;
         do {
            param_2[lVar3] = *(byte*)( *param_1 + (long)(int)lVar3 ) ^ *(byte*)( param_1[1] + 0x20 + (long)(int)lVar3 );
            lVar3 = lVar3 + 1;
         } while ( lVar3 != 0x20 );
      }
      return 1;
   }
   return 0;
}uint xor_has(long param_1, ulong param_2) {
   uint uVar1;
   uVar1 = 0;
   if (param_1 != 0) {
      if (( ( param_2 & 2 ) != 0 ) && ( *(uint*)( param_1 + 0x44 ) == 0 )) {
         return *(uint*)( param_1 + 0x44 );
      }
      if (( param_2 & 1 ) == 0) {
         return 1;
      }
      uVar1 = ( uint )(*(int*)( param_1 + 0x40 ) != 0);
   }
   return uVar1;
}undefined1 *xor_gettable_params(void) {
   return xor_params;
}undefined8 xor_load(undefined8 *param_1, long param_2) {
   undefined8 uVar1;
   if (param_2 != 8) {
      return 0;
   }
   uVar1 = *param_1;
   *param_1 = 0;
   return uVar1;
}undefined1 *xor_settable_params(void) {
   return xor_known_settable_params;
}undefined1 *xor_gen_settable_params(void) {
   return settable_22;
}undefined1 *xor_import_types(uint param_1) {
   undefined1 *puVar1;
   puVar1 = xor_key_types;
   if (( param_1 & 3 ) == 0) {
      puVar1 = (undefined1*)0x0;
   }
   return puVar1;
}undefined1 *xor_import_types_ex(long param_1, uint param_2) {
   undefined1 *puVar1;
   if (param_1 != 0) {
      puVar1 = xor_key_types;
      if (( param_2 & 3 ) == 0) {
         puVar1 = (undefined1*)0x0;
      }
      return puVar1;
   }
   return (undefined1*)0x0;
}undefined1 *key2any_settable_ctx_params(void) {
   return settables_16;
}void xorhmacsig_to_EncryptedPrivateKeyInfo_der_import_object(undefined8 *param_1, undefined4 param_2, undefined8 param_3) {
   xor_prov_import_key(xor_xorhmacsig_keymgmt_functions, *param_1, param_2, param_3);
   return;
}void xorhmacsig_to_EncryptedPrivateKeyInfo_der_free_object(void) {
   undefined1 *puVar1;
   undefined1 *puVar2;
   puVar1 = xor_xorhmacsig_keymgmt_functions;
   do {
      puVar2 = puVar1;
      if (*(int*)( puVar2 + 0x10 ) == 0) {
         return;
      }
      puVar1 = puVar2 + 0x10;
   } while ( *(int*)( puVar2 + 0x10 ) != 10 );
   if (*(code**)( puVar2 + 0x18 ) != (code*)0x0) {
      for (int i_1265 = 0; i_1265 < 2; i_1265++) {
         /* WARNING: Could not recover jumptable at 0x00100319. Too many branches */
      }
      ( **(code**)( puVar2 + 0x18 ) )();
      return;
   }
   return;
}uint xorhmacsig_to_EncryptedPrivateKeyInfo_der_does_selection(undefined8 param_1, uint param_2) {
   uint uVar1;
   if (param_2 == 0) {
      return 1;
   }
   uVar1 = param_2 & 1;
   if (uVar1 == 0) {
      if (( param_2 & 2 ) == 0) {
         if (( param_2 & 0x84 ) == 0) {
            return 0;
         }
         uVar1 = 0;
      } else {
         uVar1 = 0;
      }
   }
   return uVar1;
}uint xorhmacsig_to_SubjectPublicKeyInfo_der_does_selection(undefined8 param_1, uint param_2) {
   uint uVar1;
   if (param_2 == 0) {
      return 1;
   }
   uVar1 = param_2 & 1;
   if (uVar1 == 0) {
      if (( param_2 & 2 ) == 0) {
         if (( param_2 & 0x84 ) == 0) {
            return 0;
         }
         uVar1 = 0;
      } else {
         uVar1 = 2;
      }
   }
   return uVar1 >> 1;
}void xorhmacsha2sig_to_EncryptedPrivateKeyInfo_der_import_object(undefined8 *param_1, undefined4 param_2, undefined8 param_3) {
   xor_prov_import_key(xor_xorhmacsha2sig_keymgmt_functions, *param_1, param_2, param_3);
   return;
}void xorhmacsha2sig_to_EncryptedPrivateKeyInfo_der_free_object(void) {
   undefined1 *puVar1;
   undefined1 *puVar2;
   puVar1 = xor_xorhmacsha2sig_keymgmt_functions;
   do {
      puVar2 = puVar1;
      if (*(int*)( puVar2 + 0x10 ) == 0) {
         return;
      }
      puVar1 = puVar2 + 0x10;
   } while ( *(int*)( puVar2 + 0x10 ) != 10 );
   if (*(code**)( puVar2 + 0x18 ) != (code*)0x0) {
      for (int i_1266 = 0; i_1266 < 2; i_1266++) {
         /* WARNING: Could not recover jumptable at 0x001003f9. Too many branches */
      }
      ( **(code**)( puVar2 + 0x18 ) )();
      return;
   }
   return;
}undefined8 der2key_export_object(long param_1, undefined8 *param_2, long param_3, undefined8 param_4, undefined8 param_5) {
   int iVar1;
   int *piVar2;
   undefined8 uVar3;
   piVar2 = *(int**)( *(long*)( param_1 + 8 ) + 8 );
   iVar1 = *piVar2;
   while (true) {
      if (iVar1 == 0) {
         return 0;
      }
      if (iVar1 == 0x2a) break;
      iVar1 = piVar2[4];
      piVar2 = piVar2 + 4;
   };
   if (*(code**)( piVar2 + 2 ) == (code*)0x0) {
      return 0;
   }
   if (param_3 != 8) {
      return 0;
   }
   for (int i_1267 = 0; i_1267 < 2; i_1267++) {
      /* WARNING: Could not recover jumptable at 0x0010045b. Too many branches */
   }
   uVar3 = ( **(code**)( piVar2 + 2 ) )(*param_2, *(undefined4*)( param_1 + 0x10 ), param_4, param_5);
   return uVar3;
}void xorx_key_adjust(void) {
   return;
}bool PrivateKeyInfo_der2xorhmacsig_does_selection(undefined8 param_1, uint param_2) {
   uint uVar1;
   if (param_2 == 0) {
      return true;
   }
   uVar1 = param_2 & 1;
   if (uVar1 == 0) {
      if (( param_2 & 2 ) == 0) {
         if (( param_2 & 0x84 ) == 0) {
            return false;
         }
         uVar1 = 0x84;
      } else {
         uVar1 = 2;
      }
   }
   return ( uVar1 & PrivateKeyInfo_xorhmacsig_desc._28_4_ ) != 0;
}bool SubjectPublicKeyInfo_der2xorhmacsig_does_selection(undefined8 param_1, uint param_2) {
   uint uVar1;
   if (param_2 == 0) {
      return true;
   }
   uVar1 = param_2 & 1;
   if (uVar1 == 0) {
      if (( param_2 & 2 ) == 0) {
         if (( param_2 & 0x84 ) == 0) {
            return false;
         }
         uVar1 = 0x84;
      } else {
         uVar1 = 2;
      }
   }
   return ( uVar1 & SubjectPublicKeyInfo_xorhmacsig_desc._28_4_ ) != 0;
}bool PrivateKeyInfo_der2xorhmacsha2sig_does_selection(undefined8 param_1, uint param_2) {
   uint uVar1;
   if (param_2 == 0) {
      return true;
   }
   uVar1 = param_2 & 1;
   if (uVar1 == 0) {
      if (( param_2 & 2 ) == 0) {
         if (( param_2 & 0x84 ) == 0) {
            return false;
         }
         uVar1 = 0x84;
      } else {
         uVar1 = 2;
      }
   }
   return ( uVar1 & PrivateKeyInfo_xorhmacsha2sig_desc._28_4_ ) != 0;
}bool SubjectPublicKeyInfo_der2xorhmacsha2sig_does_selection(undefined8 param_1, uint param_2) {
   uint uVar1;
   if (param_2 == 0) {
      return true;
   }
   uVar1 = param_2 & 1;
   if (uVar1 == 0) {
      if (( param_2 & 2 ) == 0) {
         if (( param_2 & 0x84 ) == 0) {
            return false;
         }
         uVar1 = 0x84;
      } else {
         uVar1 = 2;
      }
   }
   return ( uVar1 & SubjectPublicKeyInfo_xorhmacsha2sig_desc._28_4_ ) != 0;
}undefined1 *xor_sig_gettable_ctx_params(void) {
   return known_gettable_ctx_params;
}undefined1 *xor_sig_settable_ctx_params(void) {
   return known_settable_ctx_params;
}undefined1 *tls_prov_query(undefined8 param_1, undefined4 param_2, undefined4 *param_3) {
   *param_3 = 0;
   switch (param_2) {
      case 10:
    return tls_prov_keymgmt;
      case 0xb:
    return tls_prov_keyexch;
      case 0xc:
    return tls_prov_signature;
      default:
    return (undefined1 *)0x0;
      case 0xe:
    return tls_prov_kem;
      case 0x14:
    return tls_prov_encoder;
      case 0x15:
    return tls_prov_decoder;
   }
}void xor_gen_cleanup(void *param_1) {
   CRYPTO_free(param_1);
   return;
}void der2key_freectx(void *param_1) {
   CRYPTO_free(param_1);
   return;
}void xor_freectx(void *param_1) {
   CRYPTO_free(param_1);
   return;
}void tls_prov_teardown(undefined8 *param_1) {
   undefined8 *puVar1;
   undefined8 *puVar2;
   OSSL_LIB_CTX_free(*param_1);
   puVar1 = &dummy_group_names;
   do {
      puVar2 = puVar1 + 1;
      CRYPTO_free((void*)*puVar1);
      *puVar1 = 0;
      puVar1 = puVar2;
   } while ( puVar2 != (undefined8*)0x107550 );
   CRYPTO_free(param_1);
   return;
}void key2any_newctx(undefined8 param_1) {
   undefined8 *puVar1;
   puVar1 = (undefined8*)CRYPTO_zalloc(0x28, "test/tls-provider.c", 0x6c5);
   if (puVar1 != (undefined8*)0x0) {
      *puVar1 = param_1;
      *(undefined4*)( puVar1 + 1 ) = 1;
   }
   return;
}void xor_dupctx(undefined8 *param_1) {
   undefined8 uVar1;
   undefined8 uVar2;
   undefined8 *puVar3;
   puVar3 = (undefined8*)CRYPTO_zalloc(0x18, "test/tls-provider.c", 0x212);
   if (puVar3 != (undefined8*)0x0) {
      uVar1 = *param_1;
      uVar2 = param_1[1];
      puVar3[2] = param_1[2];
      *puVar3 = uVar1;
      puVar3[1] = uVar2;
   }
   return;
}void xor_newkemkexctx(undefined8 param_1) {
   long lVar1;
   lVar1 = CRYPTO_zalloc(0x18, "test/tls-provider.c", 0x1d3);
   if (lVar1 != 0) {
      *(undefined8*)( lVar1 + 0x10 ) = param_1;
   }
   return;
}ulong tls_prov_get_capabilities(undefined8 param_1, char *param_2, code *param_3, undefined8 param_4) {
   int iVar1;
   uint uVar2;
   uint uVar3;
   size_t sVar4;
   char *pcVar5;
   ulong uVar6;
   long lVar7;
   uint uVar8;
   undefined **ppuVar9;
   undefined8 *puVar10;
   long *plVar11;
   long in_FS_OFFSET;
   byte bVar12;
   int local_1fc;
   undefined8 local_1f8[2];
   char *local_1e8;
   long local_1e0;
   int *local_170;
   long local_40;
   bVar12 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar1 = strcmp(param_2, "TLS-GROUP");
   if (iVar1 == 0) {
      if (0xcc < xor_group - 0xfe00U) {
         pcVar5 = "assertion failed: xor_group.group_id >= 65024 && xor_group.group_id < 65279 - NUM_DUMMY_GROUPS";
         OPENSSL_die("assertion failed: xor_group.group_id >= 65024 && xor_group.group_id < 65279 - NUM_DUMMY_GROUPS", "test/tls-provider.c", 0x184);
         if (*(long*)( pcVar5 + 0x60 ) == 0) {
            return 0;
         }
         uVar6 = EVP_MD_settable_ctx_params();
         return uVar6;
      }
      uVar8 = 0;
      uVar2 = ( *param_3 )(&xor_group_params, param_4);
      uVar3 = ( *param_3 )(xor_kemgroup_params, param_4);
      plVar11 = &dummy_group_names;
      uVar2 = uVar2 & uVar3;
      do {
         ppuVar9 = &xor_group_params;
         puVar10 = local_1f8;
         for (lVar7 = 0x37; lVar7 != 0; lVar7 = lVar7 + -1) {
            *puVar10 = *ppuVar9;
            ppuVar9 = ppuVar9 + (ulong)bVar12 * -2 + 1;
            puVar10 = puVar10 + (ulong)bVar12 * -2 + 1;
         }
         pcVar5 = (char*)*plVar11;
         if (pcVar5 == (char*)0x0) {
            pcVar5 = (char*)CRYPTO_zalloc(8, "test/tls-provider.c", 0x197);
            *plVar11 = (long)pcVar5;
            if (pcVar5 == (char*)0x0) {
               uVar2 = 0;
               goto LAB_00100948;
            }
            BIO_snprintf(pcVar5, 8, "%s%d", "dummy", (ulong)uVar8);
            pcVar5 = (char*)*plVar11;
         }
         plVar11 = plVar11 + 1;
         local_1e8 = pcVar5;
         sVar4 = strlen(pcVar5);
         local_1e0 = sVar4 + 1;
         local_1fc = uVar8 + 0xfecd;
         uVar8 = uVar8 + 1;
         local_170 = &local_1fc;
         uVar3 = ( *param_3 )(local_1f8, param_4);
         uVar2 = uVar2 & uVar3;
      } while ( uVar8 != 0x32 );
   } else {
      uVar2 = 0;
   }
   iVar1 = strcmp(param_2, "TLS-SIGALG");
   if (iVar1 == 0) {
      uVar3 = ( *param_3 )(xor_sig_nohash_params, param_4);
      uVar8 = ( *param_3 )(xor_sig_hash_params, param_4);
      uVar2 = ( *param_3 )(xor_sig_12_params, param_4);
      uVar2 = uVar3 & uVar8 & uVar2;
   }
   LAB_00100948:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return (ulong)uVar2;
}undefined8 xor_sig_settable_ctx_md_params(long param_1) {
   undefined8 uVar1;
   if (*(long*)( param_1 + 0x60 ) != 0) {
      uVar1 = EVP_MD_settable_ctx_params();
      return uVar1;
   }
   return 0;
}undefined8 xor_sig_set_ctx_md_params(long param_1) {
   undefined8 uVar1;
   if (*(long*)( param_1 + 0x68 ) != 0) {
      uVar1 = EVP_MD_CTX_set_params();
      return uVar1;
   }
   return 0;
}undefined8 xor_sig_gettable_ctx_md_params(long param_1) {
   undefined8 uVar1;
   if (*(long*)( param_1 + 0x60 ) != 0) {
      uVar1 = EVP_MD_gettable_ctx_params();
      return uVar1;
   }
   return 0;
}undefined8 xor_sig_get_ctx_md_params(long param_1) {
   undefined8 uVar1;
   if (*(long*)( param_1 + 0x68 ) != 0) {
      uVar1 = EVP_MD_CTX_get_params();
      return uVar1;
   }
   return 0;
}undefined8 xor_set_params(long param_1, undefined8 param_2) {
   undefined8 *puVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   long lVar4;
   lVar4 = OSSL_PARAM_locate_const(param_2, "encoded-pub-key");
   if (lVar4 != 0) {
      if (( *(int*)( lVar4 + 8 ) != 5 ) || ( *(long*)( lVar4 + 0x18 ) != 0x20 )) {
         return 0;
      }
      puVar1 = *(undefined8**)( lVar4 + 0x10 );
      uVar2 = puVar1[1];
      *(undefined8*)( param_1 + 0x20 ) = *puVar1;
      *(undefined8*)( param_1 + 0x28 ) = uVar2;
      uVar2 = puVar1[2];
      uVar3 = puVar1[3];
      *(undefined4*)( param_1 + 0x44 ) = 1;
      *(undefined8*)( param_1 + 0x30 ) = uVar2;
      *(undefined8*)( param_1 + 0x38 ) = uVar3;
   }
   return 1;
}bool xor_gen_set_params(long param_1, undefined8 param_2) {
   char *__s1;
   int iVar1;
   long lVar2;
   bool bVar3;
   if (param_1 == 0) {
      return false;
   }
   bVar3 = true;
   lVar2 = OSSL_PARAM_locate_const(param_2, "group");
   if (lVar2 != 0) {
      if (*(int*)( lVar2 + 8 ) != 4) {
         return false;
      }
      __s1 = *(char**)( lVar2 + 0x10 );
      iVar1 = strcmp(__s1, "xorgroup-int");
      if (iVar1 != 0) {
         iVar1 = strcmp(__s1, "xorkemgroup-int");
         bVar3 = iVar1 == 0;
      }
   }
   return bVar3;
}bool xor_sig_get_ctx_params(long param_1, long param_2) {
   char *s;
   int iVar1;
   long lVar2;
   X509_ALGOR *alg;
   ASN1_OBJECT *aobj;
   if (param_1 == 0) {
      return false;
   }
   if (param_2 == 0) {
      return false;
   }
   lVar2 = OSSL_PARAM_locate(param_2);
   if (*(long*)( param_1 + 0x50 ) == 0) {
      s = *(char**)( *(long*)( param_1 + 0x10 ) + 0x48 );
      alg = X509_ALGOR_new();
      aobj = OBJ_txt2obj(s, 0);
      X509_ALGOR_set0(alg, aobj, -1, (void*)0x0);
      iVar1 = i2d_X509_ALGOR(alg, (uchar**)( param_1 + 0x50 ));
      X509_ALGOR_free(alg);
      *(long*)( param_1 + 0x58 ) = (long)iVar1;
   }
   if (( lVar2 != 0 ) && ( iVar1 = OSSL_PARAM_set_octet_string(lVar2, *(undefined8*)( param_1 + 0x50 ), *(undefined8*)( param_1 + 0x58 )) ),iVar1 == 0) {
      return false;
   }
   lVar2 = OSSL_PARAM_locate(param_2, "digest");
   if (lVar2 == 0) {
      return true;
   }
   iVar1 = OSSL_PARAM_set_utf8_string(lVar2, param_1 + 0x19);
   return iVar1 != 0;
}int xor_sig_digest_signverify_update(long param_1, void *param_2, size_t param_3) {
   int iVar1;
   if (( param_1 != 0 ) && ( *(EVP_MD_CTX**)( param_1 + 0x68 ) != (EVP_MD_CTX*)0x0 )) {
      iVar1 = EVP_DigestUpdate(*(EVP_MD_CTX**)( param_1 + 0x68 ), param_2, param_3);
      return iVar1;
   }
   return 0;
}undefined8 xor_sig_sign(undefined8 *param_1, long param_2, ulong *param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6) {
   long lVar1;
   undefined8 uVar2;
   long in_FS_OFFSET;
   ulong local_18;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar1 = param_1[2];
   local_18 = 0;
   if (( lVar1 == 0 ) || ( *(int*)( lVar1 + 0x40 ) == 0 )) {
      ERR_new();
      ERR_set_debug("test/tls-provider.c", 0xabd, "xor_sig_sign");
      ERR_set_error(0x80, 10, 0);
      uVar2 = 0;
      goto LAB_00100cfd;
   }
   if (param_2 == 0) {
      *param_3 = 0x40;
   } else {
      if (*param_3 < 0x40) {
         ERR_new();
         ERR_set_debug("test/tls-provider.c", 0xac6, "xor_sig_sign");
         ERR_set_error(0x80, 0xb, 0);
         uVar2 = 0;
         goto LAB_00100cfd;
      }
      lVar1 = EVP_Q_mac(*param_1, &_LC13, 0, &_LC12, 0, lVar1, 0x20, param_5, param_6, param_2, 0x40, &local_18);
      if (lVar1 == 0) {
         ERR_new();
         ERR_set_debug("test/tls-provider.c", 0xad1, "xor_sig_sign");
         ERR_set_error(0x80, 0xc, 0);
         uVar2 = 0;
         goto LAB_00100cfd;
      }
      *param_3 = local_18;
   }
   uVar2 = 1;
   LAB_00100cfd:if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */undefined8 xor_sig_verify(undefined8 *param_1, void *param_2, size_t param_3, long param_4, undefined8 param_5) {
   ulong *puVar1;
   int iVar2;
   long lVar3;
   undefined8 uVar4;
   long in_FS_OFFSET;
   ulong uVar5;
   size_t local_70;
   undefined1 local_68[72];
   long local_20;
   puVar1 = (ulong*)param_1[2];
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_2 == (void*)0x0 || param_4 == 0 ) || ( puVar1 == (ulong*)0x0 )) {
      ERR_new();
      ERR_set_debug("test/tls-provider.c", 0xae7, "xor_sig_verify");
      ERR_set_error(0x80, 0xd, 0);
      uVar4 = 0;
   } else {
      uVar5 = puVar1[5] ^ _UNK_00109ff8;
      *puVar1 = puVar1[4] ^ __LC14;
      puVar1[1] = uVar5;
      uVar5 = puVar1[7] ^ _UNK_0010a008;
      puVar1[2] = puVar1[6] ^ __LC15;
      puVar1[3] = uVar5;
      lVar3 = EVP_Q_mac(*param_1, &_LC13, 0, &_LC12, 0, puVar1, 0x20, param_4, param_5, local_68, 0x40, &local_70);
      if (lVar3 == 0) {
         ERR_new();
         uVar4 = 0xaf7;
      } else {
         if (local_70 == param_3) {
            iVar2 = memcmp(local_68, param_2, param_3);
            uVar4 = 1;
            if (iVar2 == 0) goto LAB_00100ea6;
         }
         ERR_new();
         uVar4 = 0xafd;
      }
      ERR_set_debug("test/tls-provider.c", uVar4, "xor_sig_verify");
      ERR_set_error(0x80, 0xe, 0);
      uVar4 = 0;
   }
   LAB_00100ea6:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar4;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}undefined8 xor_sig_digest_verify_final(long param_1, undefined8 param_2, undefined8 param_3) {
   int iVar1;
   undefined8 uVar2;
   long in_FS_OFFSET;
   uint local_7c;
   uchar local_78[72];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_7c = 0;
   if (( param_1 != 0 ) && ( *(EVP_MD_CTX**)( param_1 + 0x68 ) != (EVP_MD_CTX*)0x0 )) {
      iVar1 = EVP_DigestFinal_ex(*(EVP_MD_CTX**)( param_1 + 0x68 ), local_78, &local_7c);
      if (iVar1 != 0) {
         *(byte*)( param_1 + 0x18 ) = *(byte*)( param_1 + 0x18 ) | 1;
         uVar2 = xor_sig_verify(param_1, param_2, param_3, local_78, local_7c);
         goto LAB_00100fa5;
      }
   }
   uVar2 = 0;
   LAB_00100fa5:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}undefined8 *xor_sig_newctx(undefined8 *param_1, char *param_2) {
   undefined8 uVar1;
   undefined8 *ptr;
   char *pcVar2;
   ptr = (undefined8*)CRYPTO_zalloc(0x78, "test/tls-provider.c", 0xa5f);
   if (ptr != (undefined8*)0x0) {
      uVar1 = *param_1;
      *(byte*)( ptr + 3 ) = *(byte*)( ptr + 3 ) & 0xfe;
      *ptr = uVar1;
      if (param_2 == (char*)0x0) {
         return ptr;
      }
      pcVar2 = CRYPTO_strdup(param_2, "test/tls-provider.c", 0xa65);
      ptr[1] = pcVar2;
      if (pcVar2 != (char*)0x0) {
         return ptr;
      }
      CRYPTO_free(ptr);
      ERR_new();
      ERR_set_debug("test/tls-provider.c", 0xa68, "xor_sig_newctx");
      ERR_set_error(0x80, 0xc0100, 0);
   }
   return (undefined8*)0x0;
}void xor_newkey(void) {
   long lVar1;
   lVar1 = CRYPTO_zalloc(0x58, "test/tls-provider.c", 0x2b3);
   if (lVar1 != 0) {
      LOCK();
      *(undefined4*)( lVar1 + 0x50 ) = 1;
      UNLOCK();
   }
   return;
}bool xor_match(void *param_1, void *param_2, uint param_3) {
   int iVar1;
   long lVar2;
   bool bVar3;
   bool bVar4;
   bVar4 = true;
   if (( *(char**)( (long)param_1 + 0x48 ) != (char*)0x0 ) && ( *(char**)( (long)param_2 + 0x48 ) != (char*)0x0 )) {
      iVar1 = strcmp(*(char**)( (long)param_1 + 0x48 ), *(char**)( (long)param_2 + 0x48 ));
      bVar4 = iVar1 == 0;
   }
   bVar3 = bVar4;
   if (( param_3 & 1 ) != 0) {
      if (*(int*)( (long)param_1 + 0x40 ) == 0) {
         if (*(int*)( (long)param_2 + 0x40 ) == 0) {
            bVar3 = false;
         } else {
            lVar2 = 0;
            do {
               bVar3 = false;
               if (*(byte*)( (long)param_2 + lVar2 ) != ( *(byte*)( (long)param_1 + lVar2 + 0x20 ) ^ ( &private_constant )[lVar2] )) break;
               lVar2 = lVar2 + 1;
               bVar3 = bVar4;
            } while ( lVar2 != 0x20 );
         }
      } else {
         lVar2 = 0;
         if (*(int*)( (long)param_2 + 0x40 ) == 0) {
            do {
               bVar3 = false;
               if (*(byte*)( (long)param_1 + lVar2 ) != ( *(byte*)( (long)param_2 + lVar2 + 0x20 ) ^ ( &private_constant )[lVar2] )) break;
               lVar2 = lVar2 + 1;
               bVar3 = bVar4;
            } while ( lVar2 != 0x20 );
         } else {
            iVar1 = CRYPTO_memcmp(param_1, param_2, 0x20);
            bVar3 = (bool)( bVar4 & iVar1 == 0 );
         }
      }
   }
   if (( param_3 & 2 ) != 0) {
      if (*(int*)( (long)param_1 + 0x44 ) == 0) {
         if (*(int*)( (long)param_2 + 0x44 ) == 0) {
            return false;
         }
         lVar2 = 0;
         do {
            if (*(byte*)( (long)param_2 + lVar2 + 0x20 ) != ( *(byte*)( (long)param_1 + lVar2 ) ^ ( &private_constant )[lVar2] )) {
               return false;
            }
            lVar2 = lVar2 + 1;
         } while ( lVar2 != 0x20 );
         return bVar3;
      }
      lVar2 = 0;
      if (*(int*)( (long)param_2 + 0x44 ) == 0) {
         do {
            if (*(byte*)( (long)param_1 + lVar2 + 0x20 ) != ( *(byte*)( (long)param_2 + lVar2 ) ^ ( &private_constant )[lVar2] )) {
               return false;
            }
            lVar2 = lVar2 + 1;
         } while ( lVar2 != 0x20 );
         return bVar3;
      }
      iVar1 = CRYPTO_memcmp((void*)( (long)param_1 + 0x20 ), (void*)( (long)param_2 + 0x20 ), 0x20);
      bVar3 = (bool)( bVar3 & iVar1 == 0 );
   }
   return bVar3;
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */undefined8 xor_get_params(long param_1, undefined8 param_2) {
   undefined8 *puVar1;
   undefined8 uVar2;
   int iVar3;
   long lVar4;
   lVar4 = OSSL_PARAM_locate(param_2, &_LC16);
   if (( lVar4 != 0 ) && ( iVar3 = iVar3 == 0 )) {
      return 0;
   }
   lVar4 = OSSL_PARAM_locate(param_2, "security-bits");
   if (( lVar4 != 0 ) && ( iVar3 = iVar3 == 0 )) {
      return 0;
   }
   lVar4 = OSSL_PARAM_locate(param_2, "encoded-pub-key");
   if (lVar4 != 0) {
      if (*(int*)( lVar4 + 8 ) != 5) {
         return 0;
      }
      puVar1 = *(undefined8**)( lVar4 + 0x10 );
      *(undefined8*)( lVar4 + 0x20 ) = 0x20;
      if (( puVar1 != (undefined8*)0x0 ) && ( 0x1f < *(ulong*)( lVar4 + 0x18 ) )) {
         uVar2 = *(undefined8*)( param_1 + 0x28 );
         *puVar1 = *(undefined8*)( param_1 + 0x20 );
         puVar1[1] = uVar2;
         uVar2 = *(undefined8*)( param_1 + 0x38 );
         puVar1[2] = *(undefined8*)( param_1 + 0x30 );
         puVar1[3] = uVar2;
      }
   }
   return 1;
}undefined8 *PrivateKeyInfo_der2xorhmacsig_newctx(undefined8 param_1) {
   undefined8 *puVar1;
   puVar1 = (undefined8*)CRYPTO_zalloc(0x18, "test/tls-provider.c", 0x8e2);
   if (puVar1 != (undefined8*)0x0) {
      *puVar1 = param_1;
      puVar1[1] = PrivateKeyInfo_xorhmacsig_desc;
      if (PrivateKeyInfo_xorhmacsig_desc._24_4_ == 0) {
         PrivateKeyInfo_xorhmacsig_desc._24_4_ = OBJ_sn2nid("xorhmacsig");
         return puVar1;
      }
   }
   return puVar1;
}undefined8 prepare_xorx_params(long param_1, int param_2, undefined8 param_3, undefined8 *param_4, undefined4 *param_5) {
   int iVar1;
   ASN1_OBJECT *a;
   long lVar2;
   if (( *(char**)( param_1 + 0x48 ) != (char*)0x0 ) && ( iVar1 = iVar1 != param_2 )) {
      ERR_new();
      ERR_set_debug("test/tls-provider.c", 0x666, "prepare_xorx_params");
      ERR_set_error(0x80, 3, 0);
      return 0;
   }
   if (param_2 == 0) {
      ERR_new();
      ERR_set_debug("test/tls-provider.c", 0x66b, "prepare_xorx_params");
      ERR_set_error(0x80, 5, 0);
   } else {
      a = OBJ_nid2obj(param_2);
      if (( a != (ASN1_OBJECT*)0x0 ) && ( lVar2 = lVar2 != 0 )) {
         *param_4 = a;
         *param_5 = 6;
         return 1;
      }
      ERR_new();
      ERR_set_debug("test/tls-provider.c", 0x673, "prepare_xorx_params");
      ERR_set_error(0x80, 5, 0);
      ASN1_OBJECT_free(a);
   }
   return 0;
}void key2any_freectx(void *param_1) {
   EVP_CIPHER_free(*(undefined8*)( (long)param_1 + 0x10 ));
   CRYPTO_free(param_1);
   return;
}bool key2any_set_ctx_params(undefined8 *param_1, undefined8 param_2) {
   undefined8 uVar1;
   int iVar2;
   long lVar3;
   long lVar4;
   long lVar5;
   long in_FS_OFFSET;
   bool bVar6;
   long local_40;
   undefined8 local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar1 = *(undefined8*)*param_1;
   lVar3 = OSSL_PARAM_locate_const(param_2, "cipher");
   lVar4 = OSSL_PARAM_locate_const(param_2, "properties");
   lVar5 = OSSL_PARAM_locate_const(param_2, "save-parameters");
   if (lVar3 != 0) {
      local_40 = 0;
      local_38 = 0;
      iVar2 = OSSL_PARAM_get_utf8_string_ptr(lVar3, &local_40);
      if (( iVar2 == 0 ) || ( ( lVar4 != 0 && ( iVar2 = OSSL_PARAM_get_utf8_string_ptr(lVar4, &local_38) ),iVar2 == 0 ) )) {
         LAB_00101660:bVar6 = false;
         goto LAB_0010163e;
      }
      EVP_CIPHER_free(param_1[2]);
      param_1[2] = 0;
      *(uint*)( (long)param_1 + 0xc ) = ( uint )(local_40 != 0);
      if (local_40 != 0) {
         lVar3 = EVP_CIPHER_fetch(uVar1, local_40, local_38);
         param_1[2] = lVar3;
         if (lVar3 == 0) goto LAB_00101660;
      }
   }
   bVar6 = true;
   if (lVar5 != 0) {
      iVar2 = OSSL_PARAM_get_int(lVar5, param_1 + 1);
      bVar6 = iVar2 != 0;
   }
   LAB_0010163e:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return bVar6;
}int xorx_pki_priv_to_der(undefined8 *param_1, uchar **param_2) {
   undefined8 uVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   int iVar4;
   uchar *puVar5;
   long in_FS_OFFSET;
   ASN1_OCTET_STRING local_48;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 == (undefined8*)0x0) {
      ERR_new();
      ERR_set_debug("test/tls-provider.c", 0x699, "xorx_pki_priv_to_der");
      ERR_set_error(0x80, 0xc0102, 0);
      iVar4 = 0;
   } else {
      puVar5 = (uchar*)CRYPTO_secure_malloc(0x20, "test/tls-provider.c", 0x69d);
      uVar1 = param_1[1];
      uVar2 = param_1[2];
      uVar3 = param_1[3];
      *(undefined8*)puVar5 = *param_1;
      *(undefined8*)( puVar5 + 8 ) = uVar1;
      *(undefined8*)( puVar5 + 0x10 ) = uVar2;
      *(undefined8*)( puVar5 + 0x18 ) = uVar3;
      local_48.length = 0x20;
      local_48.flags = 0;
      local_48.data = puVar5;
      iVar4 = i2d_ASN1_OCTET_STRING(&local_48, param_2);
      if (iVar4 < 0) {
         ERR_new();
         iVar4 = 0;
         ERR_set_debug("test/tls-provider.c", 0x6a6, "xorx_pki_priv_to_der");
         ERR_set_error(0x80, 0xc0100, 0);
      }
      CRYPTO_secure_clear_free(puVar5, 0x20, "test/tls-provider.c", 0x6aa);
   }
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar4;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}undefined8 p8info_to_encp8(undefined8 param_1, undefined8 *param_2) {
   int iVar1;
   undefined8 uVar2;
   long in_FS_OFFSET;
   ulong local_440;
   undefined1 local_438[1032];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_440 = 0;
   uVar2 = *(undefined8*)*param_2;
   if (( param_2[2] != 0 ) && ( (code*)param_2[3] != (code*)0x0 )) {
      iVar1 = ( *(code*)param_2[3] )(local_438, 0x400, &local_440, 0, param_2[4]);
      if (iVar1 != 0) {
         uVar2 = PKCS8_encrypt_ex(0xffffffff, param_2[2], local_438, local_440 & 0xffffffff, 0, 0, 0, param_1, uVar2, 0);
         OPENSSL_cleanse(local_438, local_440);
         goto LAB_00101831;
      }
      ERR_new();
      ERR_set_debug("test/tls-provider.c", 0x56b, "p8info_to_encp8");
      ERR_set_error(0x80, 0x9f, 0);
   }
   uVar2 = 0;
   LAB_00101831:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}void xor_freekey(void *param_1) {
   int *piVar1;
   int iVar2;
   if (param_1 == (void*)0x0) {
      return;
   }
   LOCK();
   piVar1 = (int*)( (long)param_1 + 0x50 );
   iVar2 = *piVar1;
   *piVar1 = *piVar1 + -1;
   UNLOCK();
   if (( iVar2 != 1 ) && ( 0 < iVar2 + -1 )) {
      return;
   }
   CRYPTO_free(*(void**)( (long)param_1 + 0x48 ));
   *(undefined8*)( (long)param_1 + 0x48 ) = 0;
   CRYPTO_free(param_1);
   return;
}ulong xor_export(long param_1, uint param_2, code *param_3, undefined8 param_4) {
   ulong uVar1;
   long in_FS_OFFSET;
   undefined8 local_d8;
   undefined8 uStack_d0;
   undefined8 local_c8;
   undefined8 uStack_c0;
   undefined8 local_b8;
   undefined8 local_a8;
   undefined8 uStack_a0;
   undefined8 local_98;
   undefined8 uStack_90;
   undefined8 local_88;
   undefined8 local_80;
   undefined8 uStack_78;
   undefined8 local_70;
   undefined8 uStack_68;
   undefined8 local_60;
   undefined8 local_58;
   undefined8 uStack_50;
   undefined8 local_48;
   undefined8 uStack_40;
   undefined8 local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 == 0) {
      uVar1 = 0;
   } else {
      uVar1 = ( ulong )(param_2 & 3);
      if (( param_2 & 3 ) != 0) {
         OSSL_PARAM_construct_octet_string(&local_d8, &_LC22, param_1, 0x20);
         local_a8 = local_d8;
         uStack_a0 = uStack_d0;
         local_88 = local_b8;
         local_98 = local_c8;
         uStack_90 = uStack_c0;
         OSSL_PARAM_construct_octet_string(&local_d8, &_LC23, param_1 + 0x20, 0x20);
         local_60 = local_b8;
         local_80 = local_d8;
         uStack_78 = uStack_d0;
         local_70 = local_c8;
         uStack_68 = uStack_c0;
         OSSL_PARAM_construct_end(&local_d8);
         local_58 = local_d8;
         uStack_50 = uStack_d0;
         local_38 = local_b8;
         local_48 = local_c8;
         uStack_40 = uStack_c0;
         uVar1 = ( *param_3 )(&local_a8, param_4);
      }
   }
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}undefined8 xor_import(void *param_1, uint param_2, undefined8 param_3) {
   int iVar1;
   long lVar2;
   long lVar3;
   undefined8 uVar4;
   long in_FS_OFFSET;
   undefined1 *local_98;
   undefined1 *local_90;
   size_t local_88;
   size_t local_80;
   undefined1 local_78[16];
   undefined1 local_68[16];
   undefined1 local_58[16];
   undefined1 local_48[16];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_88 = 0;
   local_80 = 0;
   local_98 = local_78;
   local_90 = local_58;
   if (( param_1 == (void*)0x0 ) || ( ( param_2 & 3 ) == 0 )) {
      LAB_00101a9f:uVar4 = 0;
   } else {
      local_78 = (undefined1[16])0x0;
      local_68 = (undefined1[16])0x0;
      local_58 = (undefined1[16])0x0;
      local_48 = (undefined1[16])0x0;
      lVar2 = OSSL_PARAM_locate_const(param_3, &_LC22);
      lVar3 = OSSL_PARAM_locate_const(param_3, &_LC23);
      if (lVar2 != 0) {
         iVar1 = OSSL_PARAM_get_octet_string(lVar2, &local_98, 0x20, &local_88);
         if (iVar1 == 0) goto LAB_00101a9f;
      }
      if (lVar3 != 0) {
         iVar1 = OSSL_PARAM_get_octet_string(lVar3, &local_90, 0x20, &local_80);
         if (iVar1 == 0) goto LAB_00101a9f;
      }
      if (local_88 != 0) {
         memcpy(param_1, local_78, local_88);
         *(undefined4*)( (long)param_1 + 0x40 ) = 1;
      }
      if (local_80 != 0) {
         memcpy((void*)( (long)param_1 + 0x20 ), local_58, local_80);
         *(undefined4*)( (long)param_1 + 0x44 ) = 1;
      }
      uVar4 = 1;
   }
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar4;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}uint xorhmacsig_to_EncryptedPrivateKeyInfo_pem_does_selection(undefined8 param_1, uint param_2) {
   uint uVar1;
   if (param_2 == 0) {
      return 1;
   }
   uVar1 = param_2 & 1;
   if (uVar1 == 0) {
      if (( param_2 & 2 ) == 0) {
         if (( param_2 & 0x84 ) == 0) {
            return 0;
         }
         uVar1 = 0;
      } else {
         uVar1 = 0;
      }
   }
   return uVar1;
}undefined4 xor_der2key_decode(undefined8 *param_1, undefined8 param_2, uint param_3, code *param_4, undefined8 param_5) {
   undefined8 uVar1;
   code *pcVar2;
   int iVar3;
   undefined4 uVar4;
   BIO *a;
   long lVar5;
   undefined8 *ptr;
   uint uVar6;
   uint uVar7;
   long in_FS_OFFSET;
   undefined8 local_138;
   undefined8 uStack_130;
   undefined8 local_128;
   undefined8 uStack_120;
   undefined8 local_118;
   undefined4 local_fc;
   long local_f8;
   undefined8 *local_f0;
   undefined8 local_e8;
   undefined8 uStack_e0;
   undefined8 local_d8;
   undefined8 uStack_d0;
   undefined8 local_c8;
   undefined8 local_c0;
   undefined8 uStack_b8;
   undefined8 local_b0;
   undefined8 uStack_a8;
   undefined8 local_a0;
   undefined8 local_98;
   undefined8 uStack_90;
   undefined8 local_88;
   undefined8 uStack_80;
   undefined8 local_78;
   undefined8 local_70;
   undefined8 uStack_68;
   undefined8 local_60;
   undefined8 uStack_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(uint*)( param_1 + 2 ) = param_3;
   local_f8 = 0;
   uVar6 = *(uint*)( param_1[1] + 0x1c );
   uVar7 = uVar6;
   if (param_3 != 0) {
      uVar6 = uVar6 & param_3;
      uVar7 = param_3;
   }
   if (uVar6 == 0) {
      ERR_new();
      ERR_set_debug("test/tls-provider.c", 0x92e, "xor_der2key_decode");
      ERR_set_error(0x39, 0x80106, 0);
      uVar4 = 0;
      goto LAB_00101ddb;
   }
   local_f0 = (undefined8*)0x0;
   a = (BIO*)BIO_new_from_core_bio(*(undefined8*)*param_1);
   iVar3 = asn1_d2i_read_bio(a, &local_f0);
   if (iVar3 < 0) {
      ptr = (undefined8*)0x0;
      BIO_free(a);
      LAB_00101c95:CRYPTO_free(ptr);
      if (local_f8 == 0) {
         lVar5 = 0;
         uVar4 = 1;
         ptr = (undefined8*)0x0;
      } else {
         local_fc = 2;
         OSSL_PARAM_construct_int(&local_138, &_LC24, &local_fc);
         local_c8 = local_118;
         local_e8 = local_138;
         uStack_e0 = uStack_130;
         local_d8 = local_128;
         uStack_d0 = uStack_120;
         OSSL_PARAM_construct_utf8_string(&local_138, "data-type", *(undefined8*)param_1[1], 0);
         local_c0 = local_138;
         uStack_b8 = uStack_130;
         local_b0 = local_128;
         uStack_a8 = uStack_120;
         local_a0 = local_118;
         OSSL_PARAM_construct_octet_string(&local_138, "reference", &local_f8, 8);
         ptr = (undefined8*)0x0;
         local_78 = local_118;
         local_98 = local_138;
         uStack_90 = uStack_130;
         local_88 = local_128;
         uStack_80 = uStack_120;
         OSSL_PARAM_construct_end(&local_138);
         local_70 = local_138;
         uStack_68 = uStack_130;
         local_50 = local_118;
         local_60 = local_128;
         uStack_58 = uStack_120;
         uVar4 = ( *param_4 )(&local_e8, param_5);
         lVar5 = local_f8;
      }
   } else {
      uVar1 = *local_f0;
      ptr = (undefined8*)local_f0[1];
      CRYPTO_free(local_f0);
      BIO_free(a);
      if (( uVar7 & 1 ) == 0) {
         if (local_f8 == 0) {
            LAB_00101f1e:if (( uVar7 & 2 ) != 0) {
               pcVar2 = *(code**)( param_1[1] + 0x40 );
               if (pcVar2 == (code*)0x0) {
                  local_f0 = ptr;
                  local_f8 = ( **(code**)( param_1[1] + 0x28 ) )(0, &local_f0, uVar1);
               } else {
                  local_f0 = ptr;
                  local_f8 = ( *pcVar2 )();
               }
               if (local_f8 != 0) goto LAB_00101e8c;
               if (*(int*)( param_1 + 2 ) != 0) goto LAB_00101c95;
            }
            if (( ( ( uVar7 & 0x84 ) == 0 ) || ( local_f0 = ptr * (code**)( param_1[1] + 0x30 ) == (code*)0x0 ) ) || ( local_f8 = ( **(code**)( param_1[1] + 0x30 ) )(0, &local_f0, uVar1) ),local_f8 == 0) goto LAB_00101c95;
         }
         LAB_00101e8c:lVar5 = param_1[1];
         if (*(code**)( lVar5 + 0x48 ) == (code*)0x0) {
            LAB_00101fc2:if (*(code**)( lVar5 + 0x50 ) != (code*)0x0) {
               ( **(code**)( lVar5 + 0x50 ) )(local_f8, param_1);
            }
         } else {
            iVar3 = ( **(code**)( lVar5 + 0x48 ) )(local_f8, param_1);
            if (iVar3 == 0) {
               ( **(code**)( param_1[1] + 0x58 ) )(local_f8);
               local_f8 = 0;
            } else if (local_f8 != 0) {
               lVar5 = param_1[1];
               goto LAB_00101fc2;
            }
         }
         goto LAB_00101c95;
      }
      pcVar2 = *(code**)( param_1[1] + 0x38 );
      if (pcVar2 == (code*)0x0) {
         pcVar2 = *(code**)( param_1[1] + 0x20 );
         local_f0 = ptr;
         if (pcVar2 != (code*)0x0) {
            local_f8 = ( *pcVar2 )(0, &local_f0, uVar1);
         }
         LAB_00101e83:if (local_f8 != 0) goto LAB_00101e8c;
         if (*(int*)( param_1 + 2 ) == 0) goto LAB_00101f1e;
         goto LAB_00101c95;
      }
      local_f0 = ptr;
      lVar5 = ( *pcVar2 )(0, &local_f0, uVar1, param_1);
      uVar4 = 0;
      local_f8 = lVar5;
      if (( *(byte*)( (long)param_1 + 0x14 ) & 1 ) == 0) goto LAB_00101e83;
   }
   ( **(code**)( param_1[1] + 0x58 ) )(lVar5);
   CRYPTO_free(ptr);
   LAB_00101ddb:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return uVar4;
}X509_PUBKEY *xorx_key_to_pubkey_isra_0(undefined8 param_1, int param_2, code *param_3) {
   uchar *penc;
   int iVar1;
   X509_PUBKEY *pub;
   ASN1_OBJECT *aobj;
   X509_PUBKEY *pXVar2;
   long in_FS_OFFSET;
   uchar *local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_38 = (uchar*)0x0;
   pub = X509_PUBKEY_new();
   if (pub != (X509_PUBKEY*)0x0) {
      iVar1 = ( *param_3 )(param_1, &local_38);
      penc = local_38;
      if (0 < iVar1) {
         aobj = OBJ_nid2obj(param_2);
         iVar1 = X509_PUBKEY_set0_param(pub, aobj, -1, (void*)0x0, penc, iVar1);
         pXVar2 = pub;
         if (iVar1 != 0) goto LAB_001020ae;
      }
   }
   ERR_new();
   ERR_set_debug("test/tls-provider.c", 0x594, "xorx_key_to_pubkey");
   ERR_set_error(0x80, 0xc0100, 0);
   pXVar2 = (X509_PUBKEY*)0x0;
   X509_PUBKEY_free(pub);
   CRYPTO_free(local_38);
   LAB_001020ae:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return pXVar2;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}int key_to_spki_der_pub_bio(undefined8 param_1, undefined8 param_2, undefined4 param_3, undefined8 param_4, code *param_5, undefined8 param_6, long param_7) {
   int iVar1;
   X509_PUBKEY *a;
   long in_FS_OFFSET;
   undefined4 local_3c;
   undefined8 local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_3c = 0xffffffff;
   local_38 = 0;
   if (param_5 != (code*)0x0) {
      iVar1 = ( *param_5 )(param_2, param_3, *(undefined4*)( param_7 + 8 ), &local_38, &local_3c);
      if (iVar1 == 0) goto LAB_001021c2;
   }
   iVar1 = 0;
   a = (X509_PUBKEY*)xorx_key_to_pubkey_isra_0(param_2, param_3, param_6);
   if (a != (X509_PUBKEY*)0x0) {
      iVar1 = i2d_X509_PUBKEY_bio(param_1, a);
   }
   X509_PUBKEY_free(a);
   LAB_001021c2:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}PKCS8_PRIV_KEY_INFO *key_to_p8info_isra_0(undefined8 param_1, int param_2, code *param_3) {
   uchar *penc;
   int iVar1;
   PKCS8_PRIV_KEY_INFO *priv;
   ASN1_OBJECT *aobj;
   PKCS8_PRIV_KEY_INFO *pPVar2;
   long in_FS_OFFSET;
   uchar *local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_38 = (uchar*)0x0;
   priv = PKCS8_PRIV_KEY_INFO_new();
   if (priv != (PKCS8_PRIV_KEY_INFO*)0x0) {
      iVar1 = ( *param_3 )(param_1, &local_38);
      penc = local_38;
      if (0 < iVar1) {
         aobj = OBJ_nid2obj(param_2);
         iVar1 = PKCS8_pkey_set0(priv, aobj, 0, -1, (void*)0x0, penc, iVar1);
         pPVar2 = priv;
         if (iVar1 != 0) goto LAB_00102265;
      }
   }
   ERR_new();
   ERR_set_debug("test/tls-provider.c", 0x556, "key_to_p8info");
   ERR_set_error(0x80, 0xc0100, 0);
   pPVar2 = (PKCS8_PRIV_KEY_INFO*)0x0;
   PKCS8_PRIV_KEY_INFO_free(priv);
   CRYPTO_free(local_38);
   LAB_00102265:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return pPVar2;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}undefined1 *xor_export_types(uint param_1) {
   undefined1 *puVar1;
   puVar1 = xor_key_types;
   if (( param_1 & 3 ) == 0) {
      puVar1 = (undefined1*)0x0;
   }
   return puVar1;
}undefined1 *xor_export_types_ex(long param_1, uint param_2) {
   undefined1 *puVar1;
   if (param_1 != 0) {
      puVar1 = xor_key_types;
      if (( param_2 & 3 ) == 0) {
         puVar1 = (undefined1*)0x0;
      }
      return puVar1;
   }
   return (undefined1*)0x0;
}int key_to_epki_der_priv_bio(BIO *param_1, undefined8 param_2, undefined4 param_3, undefined8 param_4, code *param_5, undefined8 param_6, long param_7) {
   ASN1_OBJECT *a;
   int iVar1;
   int iVar2;
   PKCS8_PRIV_KEY_INFO *a_00;
   X509_SIG *p8;
   long in_FS_OFFSET;
   int local_4c;
   ASN1_OBJECT *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_4c = -1;
   local_48 = (ASN1_OBJECT*)0x0;
   if (*(int*)( param_7 + 0xc ) == 0) {
      LAB_00102400:iVar2 = 0;
      goto LAB_00102402;
   }
   if (param_5 == (code*)0x0) {
      a_00 = (PKCS8_PRIV_KEY_INFO*)key_to_p8info_isra_0(param_2, param_3, param_6);
      if (a_00 != (PKCS8_PRIV_KEY_INFO*)0x0) goto LAB_001023c8;
      LAB_00102456:p8 = (X509_SIG*)0x0;
      iVar2 = 0;
   } else {
      iVar1 = ( *param_5 )(param_2, param_3, *(undefined4*)( param_7 + 8 ), &local_48, &local_4c);
      a = local_48;
      iVar2 = local_4c;
      if (iVar1 == 0) goto LAB_00102400;
      a_00 = (PKCS8_PRIV_KEY_INFO*)key_to_p8info_isra_0(param_2, param_3, param_6);
      if (a_00 == (PKCS8_PRIV_KEY_INFO*)0x0) {
         if (iVar2 == 6) {
            ASN1_OBJECT_free(a);
         } else if (iVar2 == 0x10) {
            ASN1_STRING_free((ASN1_STRING*)a);
         }
         goto LAB_00102456;
      }
      LAB_001023c8:p8 = (X509_SIG*)p8info_to_encp8(a_00, param_7);
      iVar2 = 0;
      PKCS8_PRIV_KEY_INFO_free(a_00);
      if (p8 != (X509_SIG*)0x0) {
         iVar2 = i2d_PKCS8_bio(param_1, p8);
      }
   }
   X509_SIG_free(p8);
   LAB_00102402:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return iVar2;
}void xorhmacsig_to_EncryptedPrivateKeyInfo_pem_import_object(undefined8 *param_1, undefined4 param_2, undefined8 param_3) {
   xor_prov_import_key(xor_xorhmacsig_keymgmt_functions, *param_1, param_2, param_3);
   return;
}void xorhmacsha2sig_to_PrivateKeyInfo_pem_import_object(undefined8 *param_1, undefined4 param_2, undefined8 param_3) {
   xor_prov_import_key(xor_xorhmacsha2sig_keymgmt_functions, *param_1, param_2, param_3);
   return;
}void xorhmacsig_to_PrivateKeyInfo_der_import_object(undefined8 *param_1, undefined4 param_2, undefined8 param_3) {
   xor_prov_import_key(xor_xorhmacsig_keymgmt_functions, *param_1, param_2, param_3);
   return;
}void xorhmacsig_to_PrivateKeyInfo_pem_import_object(undefined8 *param_1, undefined4 param_2, undefined8 param_3) {
   xor_prov_import_key(xor_xorhmacsig_keymgmt_functions, *param_1, param_2, param_3);
   return;
}void xorhmacsha2sig_to_SubjectPublicKeyInfo_pem_import_object(undefined8 *param_1, undefined4 param_2, undefined8 param_3) {
   xor_prov_import_key(xor_xorhmacsha2sig_keymgmt_functions, *param_1, param_2, param_3);
   return;
}void xorhmacsha2sig_to_PrivateKeyInfo_der_import_object(undefined8 *param_1, undefined4 param_2, undefined8 param_3) {
   xor_prov_import_key(xor_xorhmacsha2sig_keymgmt_functions, *param_1, param_2, param_3);
   return;
}void xorhmacsha2sig_to_SubjectPublicKeyInfo_der_import_object(undefined8 *param_1, undefined4 param_2, undefined8 param_3) {
   xor_prov_import_key(xor_xorhmacsha2sig_keymgmt_functions, *param_1, param_2, param_3);
   return;
}void xorhmacsha2sig_to_EncryptedPrivateKeyInfo_pem_import_object(undefined8 *param_1, undefined4 param_2, undefined8 param_3) {
   xor_prov_import_key(xor_xorhmacsha2sig_keymgmt_functions, *param_1, param_2, param_3);
   return;
}void xorhmacsig_to_SubjectPublicKeyInfo_der_import_object(undefined8 *param_1, undefined4 param_2, undefined8 param_3) {
   xor_prov_import_key(xor_xorhmacsig_keymgmt_functions, *param_1, param_2, param_3);
   return;
}void xorhmacsig_to_SubjectPublicKeyInfo_pem_import_object(undefined8 *param_1, undefined4 param_2, undefined8 param_3) {
   xor_prov_import_key(xor_xorhmacsig_keymgmt_functions, *param_1, param_2, param_3);
   return;
}undefined8 *SubjectPublicKeyInfo_der2xorhmacsig_newctx(undefined8 param_1) {
   undefined8 *puVar1;
   puVar1 = (undefined8*)CRYPTO_zalloc(0x18, "test/tls-provider.c", 0x8e2);
   if (puVar1 != (undefined8*)0x0) {
      *puVar1 = param_1;
      puVar1[1] = SubjectPublicKeyInfo_xorhmacsig_desc;
      if (SubjectPublicKeyInfo_xorhmacsig_desc._24_4_ == 0) {
         SubjectPublicKeyInfo_xorhmacsig_desc._24_4_ = OBJ_sn2nid("xorhmacsig");
         return puVar1;
      }
   }
   return puVar1;
}undefined8 *SubjectPublicKeyInfo_der2xorhmacsha2sig_newctx(undefined8 param_1) {
   undefined8 *puVar1;
   puVar1 = (undefined8*)CRYPTO_zalloc(0x18, "test/tls-provider.c", 0x8e2);
   if (puVar1 != (undefined8*)0x0) {
      *puVar1 = param_1;
      puVar1[1] = SubjectPublicKeyInfo_xorhmacsha2sig_desc;
      if (SubjectPublicKeyInfo_xorhmacsha2sig_desc._24_4_ == 0) {
         SubjectPublicKeyInfo_xorhmacsha2sig_desc._24_4_ = OBJ_sn2nid("xorhmacsha2sig");
         return puVar1;
      }
   }
   return puVar1;
}undefined8 *PrivateKeyInfo_der2xorhmacsha2sig_newctx(undefined8 param_1) {
   undefined8 *puVar1;
   puVar1 = (undefined8*)CRYPTO_zalloc(0x18, "test/tls-provider.c", 0x8e2);
   if (puVar1 != (undefined8*)0x0) {
      *puVar1 = param_1;
      puVar1[1] = PrivateKeyInfo_xorhmacsha2sig_desc;
      if (PrivateKeyInfo_xorhmacsha2sig_desc._24_4_ == 0) {
         PrivateKeyInfo_xorhmacsha2sig_desc._24_4_ = OBJ_sn2nid("xorhmacsha2sig");
         return puVar1;
      }
   }
   return puVar1;
}undefined8 xor_sig_setup_md(undefined8 *param_1, undefined8 param_2, long param_3) {
   char *s;
   int iVar1;
   long lVar2;
   X509_ALGOR *alg;
   ASN1_OBJECT *aobj;
   if (param_3 == 0) {
      param_3 = param_1[1];
   }
   lVar2 = EVP_MD_fetch(*param_1, param_2, param_3);
   if (lVar2 == 0) {
      ERR_new();
      ERR_set_debug("test/tls-provider.c", 0xa79, "xor_sig_setup_md");
      ERR_set_error(0x80, 1, "%s could not be fetched", param_2);
   } else {
      iVar1 = EVP_MD_get_type(lVar2);
      if (iVar1 != 0) {
         EVP_MD_CTX_free(param_1[0xd]);
         param_1[0xd] = 0;
         EVP_MD_free(param_1[0xc]);
         param_1[0xc] = 0;
         CRYPTO_free((void*)param_1[10]);
         param_1[10] = 0;
         s = *(char**)( param_1[2] + 0x48 );
         alg = X509_ALGOR_new();
         aobj = OBJ_txt2obj(s, 0);
         X509_ALGOR_set0(alg, aobj, -1, (void*)0x0);
         iVar1 = i2d_X509_ALGOR(alg, (uchar**)( param_1 + 10 ));
         X509_ALGOR_free(alg);
         param_1[0xb] = (long)iVar1;
         if ((long)iVar1 != 0) {
            param_1[0xc] = lVar2;
            param_1[0xd] = 0;
            OPENSSL_strlcpy((long)param_1 + 0x19, param_2, 0x32);
            return 1;
         }
      }
   }
   EVP_MD_free(lVar2);
   return 0;
}undefined8 xor_sig_set_ctx_params(long param_1, long param_2) {
   int iVar1;
   long lVar2;
   long lVar3;
   undefined8 uVar4;
   long in_FS_OFFSET;
   undefined1 *local_188;
   undefined1 *local_180;
   undefined1 local_178[16];
   undefined1 local_168[16];
   undefined1 local_158[16];
   undefined2 local_148;
   undefined1 local_138[16];
   undefined1 local_128[16];
   undefined1 local_118[16];
   undefined1 local_108[16];
   undefined1 local_f8[16];
   undefined1 local_e8[16];
   undefined1 local_d8[16];
   undefined1 local_c8[16];
   undefined1 local_b8[16];
   undefined1 local_a8[16];
   undefined1 local_98[16];
   undefined1 local_88[16];
   undefined1 local_78[16];
   undefined1 local_68[16];
   undefined1 local_58[16];
   undefined1 local_48[16];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_1 != 0 ) && ( param_2 != 0 )) {
      lVar2 = OSSL_PARAM_locate_const(param_2, "digest");
      if (lVar2 == 0) {
         LAB_001029f3:uVar4 = 1;
         goto LAB_001028c9;
      }
      if (( *(byte*)( param_1 + 0x18 ) & 1 ) != 0) {
         local_148 = 0;
         local_178 = (undefined1[16])0x0;
         local_168 = (undefined1[16])0x0;
         local_158 = (undefined1[16])0x0;
         local_138 = (undefined1[16])0x0;
         local_128 = (undefined1[16])0x0;
         local_118 = (undefined1[16])0x0;
         local_108 = (undefined1[16])0x0;
         local_f8 = (undefined1[16])0x0;
         local_e8 = (undefined1[16])0x0;
         local_d8 = (undefined1[16])0x0;
         local_c8 = (undefined1[16])0x0;
         local_b8 = (undefined1[16])0x0;
         local_a8 = (undefined1[16])0x0;
         local_98 = (undefined1[16])0x0;
         local_88 = (undefined1[16])0x0;
         local_78 = (undefined1[16])0x0;
         local_68 = (undefined1[16])0x0;
         local_58 = (undefined1[16])0x0;
         local_48 = (undefined1[16])0x0;
         local_188 = local_178;
         local_180 = local_138;
         lVar3 = OSSL_PARAM_locate_const(param_2, "properties");
         iVar1 = OSSL_PARAM_get_utf8_string(lVar2, &local_188, 0x32);
         if (iVar1 != 0) {
            if (lVar3 != 0) {
               iVar1 = OSSL_PARAM_get_utf8_string(lVar3, &local_180, 0x100);
               if (iVar1 == 0) goto LAB_001028c7;
            }
            iVar1 = xor_sig_setup_md(param_1, local_178, local_138);
            if (iVar1 != 0) goto LAB_001029f3;
         }
      }
   }
   LAB_001028c7:uVar4 = 0;
   LAB_001028c9:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar4;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}uint xorhmacsig_to_SubjectPublicKeyInfo_pem_does_selection(undefined8 param_1, uint param_2) {
   uint uVar1;
   if (param_2 == 0) {
      return 1;
   }
   uVar1 = param_2 & 1;
   if (uVar1 == 0) {
      if (( param_2 & 2 ) == 0) {
         if (( param_2 & 0x84 ) == 0) {
            return 0;
         }
         uVar1 = 0;
      } else {
         uVar1 = 2;
      }
   }
   return uVar1 >> 1;
}uint xorhmacsha2sig_to_SubjectPublicKeyInfo_der_does_selection(undefined8 param_1, uint param_2) {
   uint uVar1;
   if (param_2 == 0) {
      return 1;
   }
   uVar1 = param_2 & 1;
   if (uVar1 == 0) {
      if (( param_2 & 2 ) == 0) {
         if (( param_2 & 0x84 ) == 0) {
            return 0;
         }
         uVar1 = 0;
      } else {
         uVar1 = 2;
      }
   }
   return uVar1 >> 1;
}uint xorhmacsha2sig_to_SubjectPublicKeyInfo_pem_does_selection(undefined8 param_1, uint param_2) {
   uint uVar1;
   if (param_2 == 0) {
      return 1;
   }
   uVar1 = param_2 & 1;
   if (uVar1 == 0) {
      if (( param_2 & 2 ) == 0) {
         if (( param_2 & 0x84 ) == 0) {
            return 0;
         }
         uVar1 = 0;
      } else {
         uVar1 = 2;
      }
   }
   return uVar1 >> 1;
}int key_to_spki_pem_pub_bio(undefined8 param_1, undefined8 param_2, undefined4 param_3, undefined8 param_4, code *param_5, undefined8 param_6, long param_7) {
   int iVar1;
   X509_PUBKEY *a;
   long in_FS_OFFSET;
   int local_3c;
   ASN1_OBJECT *local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_3c = -1;
   local_38 = (ASN1_OBJECT*)0x0;
   if (param_5 != (code*)0x0) {
      iVar1 = ( *param_5 )(param_2, param_3, *(undefined4*)( param_7 + 8 ), &local_38, &local_3c);
      if (iVar1 == 0) goto LAB_00102b60;
   }
   a = (X509_PUBKEY*)xorx_key_to_pubkey_isra_0(param_2, param_3, param_6);
   if (a == (X509_PUBKEY*)0x0) {
      if (local_3c == 6) {
         ASN1_OBJECT_free(local_38);
         iVar1 = 0;
      } else if (local_3c == 0x10) {
         ASN1_STRING_free((ASN1_STRING*)local_38);
         iVar1 = 0;
      } else {
         iVar1 = 0;
      }
   } else {
      iVar1 = PEM_write_bio_X509_PUBKEY(param_1, a);
   }
   X509_PUBKEY_free(a);
   LAB_00102b60:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ulong *xor_gen(byte *param_1) {
   ulong uVar1;
   int iVar2;
   ulong *ptr;
   ulong uVar3;
   ulong uVar4;
   ptr = (ulong*)CRYPTO_zalloc(0x58, "test/tls-provider.c", 0x2b3);
   if (ptr != (ulong*)0x0) {
      LOCK();
      *(undefined4*)( ptr + 10 ) = 1;
      UNLOCK();
      if (( *param_1 & 3 ) == 0) {
         return ptr;
      }
      iVar2 = RAND_bytes_ex(*(undefined8*)( param_1 + 8 ), ptr, 0x20, 0);
      uVar1 = _LC29;
      if (0 < iVar2) {
         uVar3 = ptr[1] ^ _UNK_00109ff8;
         ptr[4] = *ptr ^ __LC14;
         ptr[5] = uVar3;
         uVar3 = ptr[2] ^ __LC15;
         uVar4 = ptr[3] ^ _UNK_0010a008;
         ptr[8] = uVar1;
         ptr[6] = uVar3;
         ptr[7] = uVar4;
         return ptr;
      }
      CRYPTO_free(ptr);
   }
   return (ulong*)0x0;
}long xor_xorhmacsha2sig_gen(void) {
   long lVar1;
   char *pcVar2;
   lVar1 = xor_gen();
   if (lVar1 != 0) {
      pcVar2 = CRYPTO_strdup("xorhmacsha2sig", "test/tls-provider.c", 0x474);
      *(char**)( lVar1 + 0x48 ) = pcVar2;
      if (pcVar2 != (char*)0x0) {
         return lVar1;
      }
      xor_freekey(lVar1);
   }
   return 0;
}long xor_xorhmacsig_gen(void) {
   long lVar1;
   char *pcVar2;
   lVar1 = xor_gen();
   if (lVar1 != 0) {
      pcVar2 = CRYPTO_strdup("xorhmacsig", "test/tls-provider.c", 0x466);
      *(char**)( lVar1 + 0x48 ) = pcVar2;
      if (pcVar2 != (char*)0x0) {
         return lVar1;
      }
      xor_freekey(lVar1);
   }
   return 0;
}uint xorhmacsig_to_PrivateKeyInfo_der_does_selection(undefined8 param_1, uint param_2) {
   uint uVar1;
   if (param_2 == 0) {
      return 1;
   }
   uVar1 = param_2 & 1;
   if (uVar1 == 0) {
      if (( param_2 & 2 ) == 0) {
         if (( param_2 & 0x84 ) == 0) {
            return 0;
         }
         uVar1 = 0;
      } else {
         uVar1 = 0;
      }
   }
   return uVar1;
}uint xorhmacsha2sig_to_EncryptedPrivateKeyInfo_der_does_selection(undefined8 param_1, uint param_2) {
   uint uVar1;
   if (param_2 == 0) {
      return 1;
   }
   uVar1 = param_2 & 1;
   if (uVar1 == 0) {
      if (( param_2 & 2 ) == 0) {
         if (( param_2 & 0x84 ) == 0) {
            return 0;
         }
         uVar1 = 0;
      } else {
         uVar1 = 0;
      }
   }
   return uVar1;
}uint xorhmacsha2sig_to_PrivateKeyInfo_pem_does_selection(undefined8 param_1, uint param_2) {
   uint uVar1;
   if (param_2 == 0) {
      return 1;
   }
   uVar1 = param_2 & 1;
   if (uVar1 == 0) {
      if (( param_2 & 2 ) == 0) {
         if (( param_2 & 0x84 ) == 0) {
            return 0;
         }
         uVar1 = 0;
      } else {
         uVar1 = 0;
      }
   }
   return uVar1;
}uint xorhmacsha2sig_to_EncryptedPrivateKeyInfo_pem_does_selection(undefined8 param_1, uint param_2) {
   uint uVar1;
   if (param_2 == 0) {
      return 1;
   }
   uVar1 = param_2 & 1;
   if (uVar1 == 0) {
      if (( param_2 & 2 ) == 0) {
         if (( param_2 & 0x84 ) == 0) {
            return 0;
         }
         uVar1 = 0;
      } else {
         uVar1 = 0;
      }
   }
   return uVar1;
}uint xorhmacsha2sig_to_PrivateKeyInfo_der_does_selection(undefined8 param_1, uint param_2) {
   uint uVar1;
   if (param_2 == 0) {
      return 1;
   }
   uVar1 = param_2 & 1;
   if (uVar1 == 0) {
      if (( param_2 & 2 ) == 0) {
         if (( param_2 & 0x84 ) == 0) {
            return 0;
         }
         uVar1 = 0;
      } else {
         uVar1 = 0;
      }
   }
   return uVar1;
}uint xorhmacsig_to_PrivateKeyInfo_pem_does_selection(undefined8 param_1, uint param_2) {
   uint uVar1;
   if (param_2 == 0) {
      return 1;
   }
   uVar1 = param_2 & 1;
   if (uVar1 == 0) {
      if (( param_2 & 2 ) == 0) {
         if (( param_2 & 0x84 ) == 0) {
            return 0;
         }
         uVar1 = 0;
      } else {
         uVar1 = 0;
      }
   }
   return uVar1;
}uint *xor_gen_init(undefined8 *param_1, uint param_2, undefined8 param_3) {
   char *__s1;
   int iVar1;
   uint *ptr;
   long lVar2;
   if (( ( param_2 & 7 ) != 0 ) && ( ptr = (uint*)CRYPTO_zalloc(0x10, "test/tls-provider.c", 0x3a5) ),ptr != (uint*)0x0) {
      *ptr = param_2;
      *(undefined8*)( ptr + 2 ) = *param_1;
      lVar2 = OSSL_PARAM_locate_const(param_3, "group");
      if (lVar2 == 0) {
         return ptr;
      }
      if (*(int*)( lVar2 + 8 ) == 4) {
         __s1 = *(char**)( lVar2 + 0x10 );
         iVar1 = strcmp(__s1, "xorgroup-int");
         if (iVar1 == 0) {
            return ptr;
         }
         iVar1 = strcmp(__s1, "xorkemgroup-int");
         if (iVar1 == 0) {
            return ptr;
         }
      }
      CRYPTO_free(ptr);
   }
   return (uint*)0x0;
}int key_to_pki_der_priv_bio(BIO *param_1, undefined8 param_2, undefined4 param_3, undefined8 param_4, code *param_5, undefined8 param_6, long param_7) {
   int iVar1;
   PKCS8_PRIV_KEY_INFO *p8inf;
   long in_FS_OFFSET;
   int local_3c;
   ASN1_OBJECT *local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_3c = -1;
   local_38 = (ASN1_OBJECT*)0x0;
   if (*(int*)( param_7 + 0xc ) == 0) {
      if (param_5 != (code*)0x0) {
         iVar1 = ( *param_5 )(param_2, param_3, *(undefined4*)( param_7 + 8 ), &local_38, &local_3c);
         if (iVar1 == 0) goto LAB_00102fe7;
      }
      p8inf = (PKCS8_PRIV_KEY_INFO*)key_to_p8info_isra_0(param_2, param_3, param_6);
      if (p8inf == (PKCS8_PRIV_KEY_INFO*)0x0) {
         if (local_3c == 6) {
            ASN1_OBJECT_free(local_38);
            iVar1 = 0;
         } else if (local_3c == 0x10) {
            ASN1_STRING_free((ASN1_STRING*)local_38);
            iVar1 = 0;
         } else {
            iVar1 = 0;
         }
      } else {
         iVar1 = i2d_PKCS8_PRIV_KEY_INFO_bio(param_1, p8inf);
      }
      PKCS8_PRIV_KEY_INFO_free(p8inf);
   } else {
      iVar1 = key_to_epki_der_priv_bio(param_1, param_2, param_3);
   }
   LAB_00102fe7:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}void xorhmacsig_to_PrivateKeyInfo_pem_free_object(void) {
   undefined1 *puVar1;
   undefined1 *puVar2;
   puVar1 = xor_xorhmacsig_keymgmt_functions;
   do {
      puVar2 = puVar1;
      if (*(int*)( puVar2 + 0x10 ) == 0) {
         return;
      }
      puVar1 = puVar2 + 0x10;
   } while ( *(int*)( puVar2 + 0x10 ) != 10 );
   if (*(code**)( puVar2 + 0x18 ) != (code*)0x0) {
      for (int i_1268 = 0; i_1268 < 2; i_1268++) {
         /* WARNING: Could not recover jumptable at 0x001030a9. Too many branches */
      }
      ( **(code**)( puVar2 + 0x18 ) )();
      return;
   }
   return;
}void xorhmacsig_to_EncryptedPrivateKeyInfo_pem_free_object(void) {
   undefined1 *puVar1;
   undefined1 *puVar2;
   puVar1 = xor_xorhmacsig_keymgmt_functions;
   do {
      puVar2 = puVar1;
      if (*(int*)( puVar2 + 0x10 ) == 0) {
         return;
      }
      puVar1 = puVar2 + 0x10;
   } while ( *(int*)( puVar2 + 0x10 ) != 10 );
   if (*(code**)( puVar2 + 0x18 ) != (code*)0x0) {
      for (int i_1269 = 0; i_1269 < 2; i_1269++) {
         /* WARNING: Could not recover jumptable at 0x001030e9. Too many branches */
      }
      ( **(code**)( puVar2 + 0x18 ) )();
      return;
   }
   return;
}void xorhmacsha2sig_to_PrivateKeyInfo_pem_free_object(void) {
   undefined1 *puVar1;
   undefined1 *puVar2;
   puVar1 = xor_xorhmacsha2sig_keymgmt_functions;
   do {
      puVar2 = puVar1;
      if (*(int*)( puVar2 + 0x10 ) == 0) {
         return;
      }
      puVar1 = puVar2 + 0x10;
   } while ( *(int*)( puVar2 + 0x10 ) != 10 );
   if (*(code**)( puVar2 + 0x18 ) != (code*)0x0) {
      for (int i_1270 = 0; i_1270 < 2; i_1270++) {
         /* WARNING: Could not recover jumptable at 0x00103129. Too many branches */
      }
      ( **(code**)( puVar2 + 0x18 ) )();
      return;
   }
   return;
}void xorhmacsha2sig_to_SubjectPublicKeyInfo_pem_free_object(void) {
   undefined1 *puVar1;
   undefined1 *puVar2;
   puVar1 = xor_xorhmacsha2sig_keymgmt_functions;
   do {
      puVar2 = puVar1;
      if (*(int*)( puVar2 + 0x10 ) == 0) {
         return;
      }
      puVar1 = puVar2 + 0x10;
   } while ( *(int*)( puVar2 + 0x10 ) != 10 );
   if (*(code**)( puVar2 + 0x18 ) != (code*)0x0) {
      for (int i_1271 = 0; i_1271 < 2; i_1271++) {
         /* WARNING: Could not recover jumptable at 0x00103169. Too many branches */
      }
      ( **(code**)( puVar2 + 0x18 ) )();
      return;
   }
   return;
}void xorhmacsig_to_PrivateKeyInfo_der_free_object(void) {
   undefined1 *puVar1;
   undefined1 *puVar2;
   puVar1 = xor_xorhmacsig_keymgmt_functions;
   do {
      puVar2 = puVar1;
      if (*(int*)( puVar2 + 0x10 ) == 0) {
         return;
      }
      puVar1 = puVar2 + 0x10;
   } while ( *(int*)( puVar2 + 0x10 ) != 10 );
   if (*(code**)( puVar2 + 0x18 ) != (code*)0x0) {
      for (int i_1272 = 0; i_1272 < 2; i_1272++) {
         /* WARNING: Could not recover jumptable at 0x001031a9. Too many branches */
      }
      ( **(code**)( puVar2 + 0x18 ) )();
      return;
   }
   return;
}void xorhmacsha2sig_to_PrivateKeyInfo_der_free_object(void) {
   undefined1 *puVar1;
   undefined1 *puVar2;
   puVar1 = xor_xorhmacsha2sig_keymgmt_functions;
   do {
      puVar2 = puVar1;
      if (*(int*)( puVar2 + 0x10 ) == 0) {
         return;
      }
      puVar1 = puVar2 + 0x10;
   } while ( *(int*)( puVar2 + 0x10 ) != 10 );
   if (*(code**)( puVar2 + 0x18 ) != (code*)0x0) {
      for (int i_1273 = 0; i_1273 < 2; i_1273++) {
         /* WARNING: Could not recover jumptable at 0x001031e9. Too many branches */
      }
      ( **(code**)( puVar2 + 0x18 ) )();
      return;
   }
   return;
}void xorhmacsha2sig_to_SubjectPublicKeyInfo_der_free_object(void) {
   undefined1 *puVar1;
   undefined1 *puVar2;
   puVar1 = xor_xorhmacsha2sig_keymgmt_functions;
   do {
      puVar2 = puVar1;
      if (*(int*)( puVar2 + 0x10 ) == 0) {
         return;
      }
      puVar1 = puVar2 + 0x10;
   } while ( *(int*)( puVar2 + 0x10 ) != 10 );
   if (*(code**)( puVar2 + 0x18 ) != (code*)0x0) {
      for (int i_1274 = 0; i_1274 < 2; i_1274++) {
         /* WARNING: Could not recover jumptable at 0x00103229. Too many branches */
      }
      ( **(code**)( puVar2 + 0x18 ) )();
      return;
   }
   return;
}void xorhmacsha2sig_to_EncryptedPrivateKeyInfo_pem_free_object(void) {
   undefined1 *puVar1;
   undefined1 *puVar2;
   puVar1 = xor_xorhmacsha2sig_keymgmt_functions;
   do {
      puVar2 = puVar1;
      if (*(int*)( puVar2 + 0x10 ) == 0) {
         return;
      }
      puVar1 = puVar2 + 0x10;
   } while ( *(int*)( puVar2 + 0x10 ) != 10 );
   if (*(code**)( puVar2 + 0x18 ) != (code*)0x0) {
      for (int i_1275 = 0; i_1275 < 2; i_1275++) {
         /* WARNING: Could not recover jumptable at 0x00103269. Too many branches */
      }
      ( **(code**)( puVar2 + 0x18 ) )();
      return;
   }
   return;
}void xorhmacsig_to_SubjectPublicKeyInfo_der_free_object(void) {
   undefined1 *puVar1;
   undefined1 *puVar2;
   puVar1 = xor_xorhmacsig_keymgmt_functions;
   do {
      puVar2 = puVar1;
      if (*(int*)( puVar2 + 0x10 ) == 0) {
         return;
      }
      puVar1 = puVar2 + 0x10;
   } while ( *(int*)( puVar2 + 0x10 ) != 10 );
   if (*(code**)( puVar2 + 0x18 ) != (code*)0x0) {
      for (int i_1276 = 0; i_1276 < 2; i_1276++) {
         /* WARNING: Could not recover jumptable at 0x001032a9. Too many branches */
      }
      ( **(code**)( puVar2 + 0x18 ) )();
      return;
   }
   return;
}void xorhmacsig_to_SubjectPublicKeyInfo_pem_free_object(void) {
   undefined1 *puVar1;
   undefined1 *puVar2;
   puVar1 = xor_xorhmacsig_keymgmt_functions;
   do {
      puVar2 = puVar1;
      if (*(int*)( puVar2 + 0x10 ) == 0) {
         return;
      }
      puVar1 = puVar2 + 0x10;
   } while ( *(int*)( puVar2 + 0x10 ) != 10 );
   if (*(code**)( puVar2 + 0x18 ) != (code*)0x0) {
      for (int i_1277 = 0; i_1277 < 2; i_1277++) {
         /* WARNING: Could not recover jumptable at 0x001032e9. Too many branches */
      }
      ( **(code**)( puVar2 + 0x18 ) )();
      return;
   }
   return;
}int key_to_epki_pem_priv_bio(BIO *param_1, undefined8 param_2, undefined4 param_3, undefined8 param_4, code *param_5, undefined8 param_6, long param_7) {
   ASN1_OBJECT *a;
   int iVar1;
   int iVar2;
   PKCS8_PRIV_KEY_INFO *a_00;
   X509_SIG *x;
   long in_FS_OFFSET;
   int local_4c;
   ASN1_OBJECT *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_4c = -1;
   local_48 = (ASN1_OBJECT*)0x0;
   if (*(int*)( param_7 + 0xc ) == 0) {
      LAB_001033d0:iVar2 = 0;
      goto LAB_001033d2;
   }
   if (param_5 == (code*)0x0) {
      a_00 = (PKCS8_PRIV_KEY_INFO*)key_to_p8info_isra_0(param_2, param_3, param_6);
      if (a_00 != (PKCS8_PRIV_KEY_INFO*)0x0) goto LAB_00103398;
      LAB_00103426:x = (X509_SIG*)0x0;
      iVar2 = 0;
   } else {
      iVar1 = ( *param_5 )(param_2, param_3, *(undefined4*)( param_7 + 8 ), &local_48, &local_4c);
      a = local_48;
      iVar2 = local_4c;
      if (iVar1 == 0) goto LAB_001033d0;
      a_00 = (PKCS8_PRIV_KEY_INFO*)key_to_p8info_isra_0(param_2, param_3, param_6);
      if (a_00 == (PKCS8_PRIV_KEY_INFO*)0x0) {
         if (iVar2 == 6) {
            ASN1_OBJECT_free(a);
         } else if (iVar2 == 0x10) {
            ASN1_STRING_free((ASN1_STRING*)a);
         }
         goto LAB_00103426;
      }
      LAB_00103398:x = (X509_SIG*)p8info_to_encp8(a_00, param_7);
      iVar2 = 0;
      PKCS8_PRIV_KEY_INFO_free(a_00);
      if (x != (X509_SIG*)0x0) {
         iVar2 = PEM_write_bio_PKCS8(param_1, x);
      }
   }
   X509_SIG_free(x);
   LAB_001033d2:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return iVar2;
}int key_to_pki_pem_priv_bio(BIO *param_1, undefined8 param_2, undefined4 param_3, undefined8 param_4, code *param_5, undefined8 param_6, long param_7) {
   int iVar1;
   PKCS8_PRIV_KEY_INFO *x;
   long in_FS_OFFSET;
   int local_3c;
   ASN1_OBJECT *local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_3c = -1;
   local_38 = (ASN1_OBJECT*)0x0;
   if (*(int*)( param_7 + 0xc ) == 0) {
      if (param_5 != (code*)0x0) {
         iVar1 = ( *param_5 )(param_2, param_3, *(undefined4*)( param_7 + 8 ), &local_38, &local_3c);
         if (iVar1 == 0) goto LAB_001034e7;
      }
      x = (PKCS8_PRIV_KEY_INFO*)key_to_p8info_isra_0(param_2, param_3, param_6);
      if (x == (PKCS8_PRIV_KEY_INFO*)0x0) {
         if (local_3c == 6) {
            ASN1_OBJECT_free(local_38);
            iVar1 = 0;
         } else if (local_3c == 0x10) {
            ASN1_STRING_free((ASN1_STRING*)local_38);
            iVar1 = 0;
         } else {
            iVar1 = 0;
         }
      } else {
         iVar1 = PEM_write_bio_PKCS8_PRIV_KEY_INFO(param_1, x);
      }
      PKCS8_PRIV_KEY_INFO_free(x);
   } else {
      iVar1 = key_to_epki_pem_priv_bio(param_1, param_2, param_3);
   }
   LAB_001034e7:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}undefined8 xor_sig_digest_sign_final(undefined8 *param_1, long param_2, ulong *param_3) {
   int iVar1;
   long lVar2;
   undefined8 uVar3;
   long in_FS_OFFSET;
   uint local_74;
   ulong local_70;
   uchar local_68[72];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_74 = 0;
   if (param_2 == 0) {
      LAB_001035eb:local_70 = 0;
      lVar2 = param_1[2];
      if (( lVar2 == 0 ) || ( *(int*)( lVar2 + 0x40 ) == 0 )) {
         ERR_new();
         ERR_set_debug("test/tls-provider.c", 0xabd, "xor_sig_sign");
         ERR_set_error(0x80, 10, 0);
      } else {
         if (param_2 == 0) {
            *param_3 = 0x40;
            LAB_0010365c:uVar3 = 1;
            goto LAB_0010369a;
         }
         if (*param_3 < 0x40) {
            ERR_new();
            ERR_set_debug("test/tls-provider.c", 0xac6, "xor_sig_sign");
            ERR_set_error(0x80, 0xb, 0);
         } else {
            lVar2 = EVP_Q_mac(*param_1, &_LC13, 0, &_LC12, 0, lVar2, 0x20, local_68, local_74, param_2, 0x40, &local_70);
            if (lVar2 != 0) {
               *param_3 = local_70;
               goto LAB_0010365c;
            }
            ERR_new();
            ERR_set_debug("test/tls-provider.c", 0xad1, "xor_sig_sign");
            ERR_set_error(0x80, 0xc, 0);
         }
      }
   } else if (( ( param_1 != (undefined8*)0x0 ) && ( (EVP_MD_CTX*)param_1[0xd] != (EVP_MD_CTX*)0x0 ) ) && ( iVar1 = EVP_DigestFinal_ex((EVP_MD_CTX*)param_1[0xd], local_68, &local_74) ),iVar1 != 0) {
      *(byte*)( param_1 + 3 ) = *(byte*)( param_1 + 3 ) | 1;
      goto LAB_001035eb;
   }
   uVar3 = 0;
   LAB_0010369a:if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return uVar3;
}void xor_sig_freectx(void *param_1) {
   int *piVar1;
   int iVar2;
   void *ptr;
   CRYPTO_free(*(void**)( (long)param_1 + 8 ));
   EVP_MD_CTX_free(*(undefined8*)( (long)param_1 + 0x68 ));
   EVP_MD_free(*(undefined8*)( (long)param_1 + 0x60 ));
   ptr = *(void**)( (long)param_1 + 0x10 );
   *(undefined8*)( (long)param_1 + 8 ) = 0;
   *(undefined1(*) [16])( (long)param_1 + 0x60 ) = (undefined1[16])0x0;
   if (ptr != (void*)0x0) {
      LOCK();
      piVar1 = (int*)( (long)ptr + 0x50 );
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (( iVar2 == 1 ) || ( iVar2 + -1 < 1 )) {
         CRYPTO_free(*(void**)( (long)ptr + 0x48 ));
         *(undefined8*)( (long)ptr + 0x48 ) = 0;
         CRYPTO_free(ptr);
      }
   }
   *(undefined8*)( (long)param_1 + 0x10 ) = 0;
   CRYPTO_free(*(void**)( (long)param_1 + 0x50 ));
   CRYPTO_free(param_1);
   return;
}undefined8 xor_sig_verify_init(long param_1, long param_2) {
   int *piVar1;
   int iVar2;
   void *ptr;
   if (param_1 == 0) {
      return 0;
   }
   if (param_2 != 0) {
      ptr = *(void**)( param_1 + 0x10 );
      if (ptr != (void*)0x0) {
         LOCK();
         piVar1 = (int*)( (long)ptr + 0x50 );
         iVar2 = *piVar1;
         *piVar1 = *piVar1 + -1;
         UNLOCK();
         if (( iVar2 == 1 ) || ( iVar2 + -1 < 1 )) {
            CRYPTO_free(*(void**)( (long)ptr + 0x48 ));
            *(undefined8*)( (long)ptr + 0x48 ) = 0;
            CRYPTO_free(ptr);
         }
      }
      LOCK();
      piVar1 = (int*)( param_2 + 0x50 );
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      if (1 < iVar2 + 1) {
         *(long*)( param_1 + 0x10 ) = param_2;
         *(undefined4*)( param_1 + 0x70 ) = 0x20;
         return 1;
      }
   }
   return 0;
}undefined8 xor_sig_sign_init(long param_1, long param_2) {
   int *piVar1;
   int iVar2;
   void *ptr;
   if (param_1 == 0) {
      return 0;
   }
   if (param_2 != 0) {
      ptr = *(void**)( param_1 + 0x10 );
      if (ptr != (void*)0x0) {
         LOCK();
         piVar1 = (int*)( (long)ptr + 0x50 );
         iVar2 = *piVar1;
         *piVar1 = *piVar1 + -1;
         UNLOCK();
         if (( iVar2 == 1 ) || ( iVar2 + -1 < 1 )) {
            CRYPTO_free(*(void**)( (long)ptr + 0x48 ));
            *(undefined8*)( (long)ptr + 0x48 ) = 0;
            CRYPTO_free(ptr);
         }
      }
      LOCK();
      piVar1 = (int*)( param_2 + 0x50 );
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      if (1 < iVar2 + 1) {
         *(long*)( param_1 + 0x10 ) = param_2;
         *(undefined4*)( param_1 + 0x70 ) = 0x10;
         return 1;
      }
   }
   return 0;
}undefined8 xor_sig_digest_sign_init(long param_1, char *param_2, long param_3) {
   int *piVar1;
   void *ptr;
   int iVar2;
   EVP_MD_CTX *ctx;
   if (param_2 == (char*)0x0) {
      param_2 = "sha256";
   }
   *(byte*)( param_1 + 0x18 ) = *(byte*)( param_1 + 0x18 ) & 0xfe;
   if (param_3 != 0) {
      ptr = *(void**)( param_1 + 0x10 );
      if (ptr != (void*)0x0) {
         LOCK();
         piVar1 = (int*)( (long)ptr + 0x50 );
         iVar2 = *piVar1;
         *piVar1 = *piVar1 + -1;
         UNLOCK();
         if (( iVar2 == 1 ) || ( iVar2 + -1 < 1 )) {
            CRYPTO_free(*(void**)( (long)ptr + 0x48 ));
            *(undefined8*)( (long)ptr + 0x48 ) = 0;
            CRYPTO_free(ptr);
         }
      }
      LOCK();
      piVar1 = (int*)( param_3 + 0x50 );
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      if (1 < iVar2 + 1) {
         *(long*)( param_1 + 0x10 ) = param_3;
         *(undefined4*)( param_1 + 0x70 ) = 0x10;
         iVar2 = xor_sig_setup_md(param_1, param_2, 0);
         if (iVar2 != 0) {
            ctx = (EVP_MD_CTX*)EVP_MD_CTX_new();
            *(EVP_MD_CTX**)( param_1 + 0x68 ) = ctx;
            if (ctx != (EVP_MD_CTX*)0x0) {
               iVar2 = EVP_DigestInit_ex(ctx, *(EVP_MD**)( param_1 + 0x60 ), (ENGINE*)0x0);
               if (iVar2 != 0) {
                  return 1;
               }
               ctx = *(EVP_MD_CTX**)( param_1 + 0x68 );
            }
            EVP_MD_CTX_free(ctx);
            EVP_MD_free(*(undefined8*)( param_1 + 0x60 ));
            *(undefined1(*) [16])( param_1 + 0x60 ) = (undefined1[16])0x0;
         }
      }
   }
   return 0;
}undefined8 xor_sig_digest_verify_init(long param_1, char *param_2, long param_3) {
   int *piVar1;
   void *ptr;
   int iVar2;
   EVP_MD_CTX *ctx;
   if (param_2 == (char*)0x0) {
      param_2 = "sha256";
   }
   *(byte*)( param_1 + 0x18 ) = *(byte*)( param_1 + 0x18 ) & 0xfe;
   if (param_3 != 0) {
      ptr = *(void**)( param_1 + 0x10 );
      if (ptr != (void*)0x0) {
         LOCK();
         piVar1 = (int*)( (long)ptr + 0x50 );
         iVar2 = *piVar1;
         *piVar1 = *piVar1 + -1;
         UNLOCK();
         if (( iVar2 == 1 ) || ( iVar2 + -1 < 1 )) {
            CRYPTO_free(*(void**)( (long)ptr + 0x48 ));
            *(undefined8*)( (long)ptr + 0x48 ) = 0;
            CRYPTO_free(ptr);
         }
      }
      LOCK();
      piVar1 = (int*)( param_3 + 0x50 );
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      if (1 < iVar2 + 1) {
         *(long*)( param_1 + 0x10 ) = param_3;
         *(undefined4*)( param_1 + 0x70 ) = 0x20;
         iVar2 = xor_sig_setup_md(param_1, param_2, 0);
         if (iVar2 != 0) {
            ctx = (EVP_MD_CTX*)EVP_MD_CTX_new();
            *(EVP_MD_CTX**)( param_1 + 0x68 ) = ctx;
            if (ctx != (EVP_MD_CTX*)0x0) {
               iVar2 = EVP_DigestInit_ex(ctx, *(EVP_MD**)( param_1 + 0x60 ), (ENGINE*)0x0);
               if (iVar2 != 0) {
                  return 1;
               }
               ctx = *(EVP_MD_CTX**)( param_1 + 0x68 );
            }
            EVP_MD_CTX_free(ctx);
            EVP_MD_free(*(undefined8*)( param_1 + 0x60 ));
            *(undefined1(*) [16])( param_1 + 0x60 ) = (undefined1[16])0x0;
         }
      }
   }
   return 0;
}int xorhmacsig_to_SubjectPublicKeyInfo_der_encode(undefined8 *param_1, undefined8 param_2, long param_3, long param_4, ulong param_5, undefined8 param_6, undefined8 param_7) {
   int iVar1;
   int iVar2;
   BIO *a;
   X509_PUBKEY *pub;
   uchar *penc;
   ASN1_OBJECT *aobj;
   long in_FS_OFFSET;
   undefined4 local_4c;
   undefined8 local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_4 == 0 ) && ( ( param_5 & 2 ) != 0 )) {
      iVar1 = OBJ_sn2nid("xorhmacsig");
      if (( param_3 != 0 ) && ( 0 < iVar1 )) {
         iVar2 = 0;
         a = (BIO*)BIO_new_from_core_bio(*(undefined8*)*param_1, param_2);
         if (a != (BIO*)0x0) {
            param_1[4] = param_7;
            local_48 = 0;
            param_1[3] = param_6;
            local_4c = 0xffffffff;
            iVar2 = prepare_xorx_params(param_3, iVar1, *(undefined4*)( param_1 + 1 ), &local_48, &local_4c);
            if (iVar2 != 0) {
               pub = X509_PUBKEY_new();
               if (pub == (X509_PUBKEY*)0x0) {
                  LAB_00103dac:penc = (uchar*)0x0;
                  LAB_00103daf:ERR_new();
                  ERR_set_debug("test/tls-provider.c", 0x594, "xorx_key_to_pubkey");
                  ERR_set_error(0x80, 0xc0100, 0);
                  X509_PUBKEY_free(pub);
                  CRYPTO_free(penc);
                  iVar2 = 0;
                  pub = (X509_PUBKEY*)0x0;
               } else {
                  penc = (uchar*)CRYPTO_memdup(param_3 + 0x20, 0x20, "test/tls-provider.c");
                  if (penc == (uchar*)0x0) {
                     ERR_new();
                     ERR_set_debug("test/tls-provider.c", 0x689, "xorx_spki_pub_to_der");
                     ERR_set_error(0x80, 0xc0100, 0);
                     goto LAB_00103dac;
                  }
                  aobj = OBJ_nid2obj(iVar1);
                  iVar1 = X509_PUBKEY_set0_param(pub, aobj, -1, (void*)0x0, penc, 0x20);
                  if (iVar1 == 0) goto LAB_00103daf;
                  iVar2 = i2d_X509_PUBKEY_bio(a, pub);
               }
               X509_PUBKEY_free(pub);
            }
         }
         BIO_free(a);
         goto LAB_00103c15;
      }
      ERR_new();
      ERR_set_debug("test/tls-provider.c", 0x734, "key2any_encode");
      ERR_set_error(0x80, 0xc0102, 0);
   } else {
      ERR_new();
      ERR_set_debug("test/tls-provider.c", 0x7f4, "xorhmacsig_to_SubjectPublicKeyInfo_der_encode");
      ERR_set_error(0x80, 0x80106, 0);
   }
   iVar2 = 0;
   LAB_00103c15:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return iVar2;
}int xorhmacsha2sig_to_SubjectPublicKeyInfo_pem_encode(undefined8 *param_1, undefined8 param_2, long param_3, long param_4, ulong param_5, undefined8 param_6, undefined8 param_7) {
   int iVar1;
   int iVar2;
   BIO *a;
   X509_PUBKEY *pub;
   uchar *penc;
   ASN1_OBJECT *aobj;
   long in_FS_OFFSET;
   int local_4c;
   ASN1_OBJECT *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_4 == 0 ) && ( ( param_5 & 2 ) != 0 )) {
      iVar1 = OBJ_sn2nid("xorhmacsha2sig");
      if (( param_3 != 0 ) && ( 0 < iVar1 )) {
         iVar2 = 0;
         a = (BIO*)BIO_new_from_core_bio(*(undefined8*)*param_1, param_2);
         if (a != (BIO*)0x0) {
            param_1[3] = param_6;
            param_1[4] = param_7;
            local_48 = (ASN1_OBJECT*)0x0;
            local_4c = -1;
            iVar2 = prepare_xorx_params(param_3, iVar1, *(undefined4*)( param_1 + 1 ), &local_48, &local_4c);
            if (iVar2 != 0) {
               pub = X509_PUBKEY_new();
               if (pub == (X509_PUBKEY*)0x0) {
                  LAB_0010401c:penc = (uchar*)0x0;
                  LAB_0010401f:ERR_new();
                  ERR_set_debug("test/tls-provider.c", 0x594, "xorx_key_to_pubkey");
                  ERR_set_error(0x80, 0xc0100, 0);
                  X509_PUBKEY_free(pub);
                  CRYPTO_free(penc);
                  if (local_4c == 6) {
                     ASN1_OBJECT_free(local_48);
                  } else if (local_4c == 0x10) {
                     ASN1_STRING_free((ASN1_STRING*)local_48);
                  }
                  pub = (X509_PUBKEY*)0x0;
                  iVar2 = 0;
               } else {
                  penc = (uchar*)CRYPTO_memdup(param_3 + 0x20, 0x20, "test/tls-provider.c");
                  if (penc == (uchar*)0x0) {
                     ERR_new();
                     ERR_set_debug("test/tls-provider.c", 0x689, "xorx_spki_pub_to_der");
                     ERR_set_error(0x80, 0xc0100, 0);
                     goto LAB_0010401c;
                  }
                  aobj = OBJ_nid2obj(iVar1);
                  iVar1 = X509_PUBKEY_set0_param(pub, aobj, -1, (void*)0x0, penc, 0x20);
                  if (iVar1 == 0) goto LAB_0010401f;
                  iVar2 = PEM_write_bio_X509_PUBKEY(a, pub);
               }
               X509_PUBKEY_free(pub);
            }
         }
         BIO_free(a);
         goto LAB_00103ea5;
      }
      ERR_new();
      ERR_set_debug("test/tls-provider.c", 0x734, "key2any_encode");
      ERR_set_error(0x80, 0xc0102, 0);
   } else {
      ERR_new();
      ERR_set_debug("test/tls-provider.c", 0x7fb, "xorhmacsha2sig_to_SubjectPublicKeyInfo_pem_encode");
      ERR_set_error(0x80, 0x80106, 0);
   }
   iVar2 = 0;
   LAB_00103ea5:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return iVar2;
}int xorhmacsha2sig_to_SubjectPublicKeyInfo_der_encode(undefined8 *param_1, undefined8 param_2, long param_3, long param_4, ulong param_5, undefined8 param_6, undefined8 param_7) {
   int iVar1;
   int iVar2;
   BIO *a;
   X509_PUBKEY *pub;
   uchar *penc;
   ASN1_OBJECT *aobj;
   long in_FS_OFFSET;
   undefined4 local_4c;
   undefined8 local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_4 == 0 ) && ( ( param_5 & 2 ) != 0 )) {
      iVar1 = OBJ_sn2nid("xorhmacsha2sig");
      if (( param_3 != 0 ) && ( 0 < iVar1 )) {
         iVar2 = 0;
         a = (BIO*)BIO_new_from_core_bio(*(undefined8*)*param_1, param_2);
         if (a != (BIO*)0x0) {
            param_1[4] = param_7;
            local_48 = 0;
            param_1[3] = param_6;
            local_4c = 0xffffffff;
            iVar2 = prepare_xorx_params(param_3, iVar1, *(undefined4*)( param_1 + 1 ), &local_48, &local_4c);
            if (iVar2 != 0) {
               pub = X509_PUBKEY_new();
               if (pub == (X509_PUBKEY*)0x0) {
                  LAB_001042cc:penc = (uchar*)0x0;
                  LAB_001042cf:ERR_new();
                  ERR_set_debug("test/tls-provider.c", 0x594, "xorx_key_to_pubkey");
                  ERR_set_error(0x80, 0xc0100, 0);
                  X509_PUBKEY_free(pub);
                  CRYPTO_free(penc);
                  iVar2 = 0;
                  pub = (X509_PUBKEY*)0x0;
               } else {
                  penc = (uchar*)CRYPTO_memdup(param_3 + 0x20, 0x20, "test/tls-provider.c");
                  if (penc == (uchar*)0x0) {
                     ERR_new();
                     ERR_set_debug("test/tls-provider.c", 0x689, "xorx_spki_pub_to_der");
                     ERR_set_error(0x80, 0xc0100, 0);
                     goto LAB_001042cc;
                  }
                  aobj = OBJ_nid2obj(iVar1);
                  iVar1 = X509_PUBKEY_set0_param(pub, aobj, -1, (void*)0x0, penc, 0x20);
                  if (iVar1 == 0) goto LAB_001042cf;
                  iVar2 = i2d_X509_PUBKEY_bio(a, pub);
               }
               X509_PUBKEY_free(pub);
            }
         }
         BIO_free(a);
         goto LAB_00104135;
      }
      ERR_new();
      ERR_set_debug("test/tls-provider.c", 0x734, "key2any_encode");
      ERR_set_error(0x80, 0xc0102, 0);
   } else {
      ERR_new();
      ERR_set_debug("test/tls-provider.c", 0x7fa, "xorhmacsha2sig_to_SubjectPublicKeyInfo_der_encode");
      ERR_set_error(0x80, 0x80106, 0);
   }
   iVar2 = 0;
   LAB_00104135:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return iVar2;
}int xorhmacsig_to_SubjectPublicKeyInfo_pem_encode(undefined8 *param_1, undefined8 param_2, long param_3, long param_4, ulong param_5, undefined8 param_6, undefined8 param_7) {
   int iVar1;
   int iVar2;
   BIO *a;
   X509_PUBKEY *pub;
   uchar *penc;
   ASN1_OBJECT *aobj;
   long in_FS_OFFSET;
   int local_4c;
   ASN1_OBJECT *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_4 == 0 ) && ( ( param_5 & 2 ) != 0 )) {
      iVar1 = OBJ_sn2nid("xorhmacsig");
      if (( param_3 != 0 ) && ( 0 < iVar1 )) {
         iVar2 = 0;
         a = (BIO*)BIO_new_from_core_bio(*(undefined8*)*param_1, param_2);
         if (a != (BIO*)0x0) {
            param_1[3] = param_6;
            param_1[4] = param_7;
            local_48 = (ASN1_OBJECT*)0x0;
            local_4c = -1;
            iVar2 = prepare_xorx_params(param_3, iVar1, *(undefined4*)( param_1 + 1 ), &local_48, &local_4c);
            if (iVar2 != 0) {
               pub = X509_PUBKEY_new();
               if (pub == (X509_PUBKEY*)0x0) {
                  LAB_0010453c:penc = (uchar*)0x0;
                  LAB_0010453f:ERR_new();
                  ERR_set_debug("test/tls-provider.c", 0x594, "xorx_key_to_pubkey");
                  ERR_set_error(0x80, 0xc0100, 0);
                  X509_PUBKEY_free(pub);
                  CRYPTO_free(penc);
                  if (local_4c == 6) {
                     ASN1_OBJECT_free(local_48);
                  } else if (local_4c == 0x10) {
                     ASN1_STRING_free((ASN1_STRING*)local_48);
                  }
                  pub = (X509_PUBKEY*)0x0;
                  iVar2 = 0;
               } else {
                  penc = (uchar*)CRYPTO_memdup(param_3 + 0x20, 0x20, "test/tls-provider.c");
                  if (penc == (uchar*)0x0) {
                     ERR_new();
                     ERR_set_debug("test/tls-provider.c", 0x689, "xorx_spki_pub_to_der");
                     ERR_set_error(0x80, 0xc0100, 0);
                     goto LAB_0010453c;
                  }
                  aobj = OBJ_nid2obj(iVar1);
                  iVar1 = X509_PUBKEY_set0_param(pub, aobj, -1, (void*)0x0, penc, 0x20);
                  if (iVar1 == 0) goto LAB_0010453f;
                  iVar2 = PEM_write_bio_X509_PUBKEY(a, pub);
               }
               X509_PUBKEY_free(pub);
            }
         }
         BIO_free(a);
         goto LAB_001043c5;
      }
      ERR_new();
      ERR_set_debug("test/tls-provider.c", 0x734, "key2any_encode");
      ERR_set_error(0x80, 0xc0102, 0);
   } else {
      ERR_new();
      ERR_set_debug("test/tls-provider.c", 0x7f5, "xorhmacsig_to_SubjectPublicKeyInfo_pem_encode");
      ERR_set_error(0x80, 0x80106, 0);
   }
   iVar2 = 0;
   LAB_001043c5:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return iVar2;
}undefined8 xor_encapsulate(long *param_1, ulong *param_2, undefined8 *param_3, ulong *param_4, undefined8 *param_5) {
   ulong *puVar1;
   long lVar2;
   ulong uVar3;
   ulong uVar4;
   void *ptr;
   ulong *ptr_00;
   undefined8 *ptr_01;
   long lVar5;
   undefined8 uVar6;
   if (( param_2 == (ulong*)0x0 ) || ( param_4 == (ulong*)0x0 )) {
      if (param_3 == (undefined8*)0x0 && param_5 == (undefined8*)0x0) {
         return 0;
      }
      if (param_3 != (undefined8*)0x0) {
         *param_3 = 0x20;
      }
      if (param_5 != (undefined8*)0x0) {
         *param_5 = 0x20;
      }
      return 1;
   }
   ptr = (void*)xor_gen_init(param_1[2], 3, 0);
   if (ptr == (void*)0x0) {
      CRYPTO_free((void*)0x0);
   } else {
      ptr_00 = (ulong*)xor_gen(ptr, 0, 0);
      if (ptr_00 != (ulong*)0x0) {
         uVar4 = ptr_00[5];
         *param_2 = ptr_00[4];
         param_2[1] = uVar4;
         uVar4 = ptr_00[7];
         param_2[2] = ptr_00[6];
         param_2[3] = uVar4;
         lVar5 = param_1[2];
         *param_3 = 0x20;
         ptr_01 = (undefined8*)CRYPTO_zalloc(0x18, "test/tls-provider.c", 0x1d3);
         if (ptr_01 == (undefined8*)0x0) {
            LAB_00104800:uVar6 = 0;
            CRYPTO_free(ptr);
         } else {
            lVar2 = *param_1;
            ptr_01[2] = lVar5;
            *ptr_01 = ptr_00;
            if (lVar2 == 0) goto LAB_00104800;
            ptr_01[1] = lVar2;
            *param_5 = 0x20;
            if (( ( ulong )((long)param_4 - ( lVar2 + 0x21 )) < 0xf ) || ( ( ulong )((long)param_4 - ( (long)ptr_00 + 1 )) < 0xf )) {
               lVar5 = 0;
               do {
                  *(byte*)( (long)param_4 + lVar5 ) = *(byte*)( (long)ptr_00 + lVar5 ) ^ *(byte*)( lVar2 + 0x20 + lVar5 );
                  lVar5 = lVar5 + 1;
               } while ( lVar5 != 0x20 );
            } else {
               uVar4 = ptr_00[1];
               uVar3 = *(ulong*)( lVar2 + 0x28 );
               *param_4 = *ptr_00 ^ *(ulong*)( lVar2 + 0x20 );
               param_4[1] = uVar4 ^ uVar3;
               uVar4 = *(ulong*)( lVar2 + 0x38 );
               uVar3 = ptr_00[3];
               param_4[2] = *(ulong*)( lVar2 + 0x30 ) ^ ptr_00[2];
               param_4[3] = uVar4 ^ uVar3;
            }
            uVar6 = 1;
            CRYPTO_free(ptr);
         }
         LOCK();
         puVar1 = ptr_00 + 10;
         uVar4 = *puVar1;
         *(int*)puVar1 = (int)*puVar1 + -1;
         UNLOCK();
         if (( (int)uVar4 == 1 ) || ( (int)uVar4 + -1 < 1 )) {
            CRYPTO_free((void*)ptr_00[9]);
            ptr_00[9] = 0;
            CRYPTO_free(ptr_00);
         }
         goto LAB_0010477a;
      }
      CRYPTO_free(ptr);
   }
   uVar6 = 0;
   ptr_01 = (undefined8*)0x0;
   LAB_0010477a:CRYPTO_free(ptr_01);
   return uVar6;
}undefined8 *xor_sig_dupctx(undefined8 *param_1) {
   int *piVar1;
   undefined8 uVar2;
   void *ptr;
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
   int iVar13;
   undefined8 *ptr_00;
   long lVar14;
   EVP_MD_CTX *out;
   long lVar15;
   ptr_00 = (undefined8*)CRYPTO_zalloc(0x78, "test/tls-provider.c", 0xb7a);
   if (ptr_00 == (undefined8*)0x0) {
      return (undefined8*)0x0;
   }
   uVar2 = param_1[1];
   uVar3 = param_1[2];
   uVar4 = param_1[3];
   uVar5 = param_1[4];
   uVar6 = param_1[5];
   uVar7 = param_1[6];
   uVar8 = param_1[7];
   uVar9 = param_1[8];
   uVar10 = param_1[9];
   uVar11 = param_1[10];
   uVar12 = param_1[0xb];
   *ptr_00 = *param_1;
   ptr_00[1] = uVar2;
   ptr_00[2] = uVar3;
   ptr_00[3] = uVar4;
   ptr_00[4] = uVar5;
   ptr_00[5] = uVar6;
   ptr_00[6] = uVar7;
   ptr_00[7] = uVar8;
   ptr_00[8] = uVar9;
   ptr_00[9] = uVar10;
   ptr_00[10] = uVar11;
   ptr_00[0xb] = uVar12;
   uVar2 = param_1[0xe];
   ptr_00[2] = 0;
   ptr_00[0xe] = uVar2;
   lVar14 = param_1[2];
   ptr_00[10] = 0;
   *(undefined1(*) [16])( ptr_00 + 0xc ) = (undefined1[16])0x0;
   if (lVar14 != 0) {
      LOCK();
      piVar1 = (int*)( lVar14 + 0x50 );
      iVar13 = *piVar1;
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      if (iVar13 + 1 < 2) goto LAB_00104930;
      lVar14 = param_1[2];
   }
   lVar15 = param_1[0xc];
   ptr_00[2] = lVar14;
   if (lVar15 != 0) {
      iVar13 = EVP_MD_up_ref();
      if (iVar13 == 0) goto LAB_00104930;
      lVar15 = param_1[0xc];
   }
   lVar14 = param_1[0xd];
   ptr_00[0xc] = lVar15;
   if (lVar14 == 0) {
      return ptr_00;
   }
   out = (EVP_MD_CTX*)EVP_MD_CTX_new();
   ptr_00[0xd] = out;
   if (( out != (EVP_MD_CTX*)0x0 ) && ( iVar13 = EVP_MD_CTX_copy_ex(out, (EVP_MD_CTX*)param_1[0xd]) ),iVar13 != 0) {
      return ptr_00;
   }
   LAB_00104930:CRYPTO_free((void*)ptr_00[1]);
   EVP_MD_CTX_free(ptr_00[0xd]);
   EVP_MD_free(ptr_00[0xc]);
   ptr = (void*)ptr_00[2];
   ptr_00[1] = 0;
   *(undefined1(*) [16])( ptr_00 + 0xc ) = (undefined1[16])0x0;
   if (ptr != (void*)0x0) {
      LOCK();
      piVar1 = (int*)( (long)ptr + 0x50 );
      iVar13 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (( iVar13 == 1 ) || ( iVar13 + -1 < 1 )) {
         CRYPTO_free(*(void**)( (long)ptr + 0x48 ));
         *(undefined8*)( (long)ptr + 0x48 ) = 0;
         CRYPTO_free(ptr);
      }
   }
   ptr_00[2] = 0;
   CRYPTO_free((void*)ptr_00[10]);
   CRYPTO_free(ptr_00);
   return (undefined8*)0x0;
}undefined8 xor_decapsulate(long *param_1, ulong *param_2, undefined8 *param_3, undefined8 *param_4, long param_5) {
   int *piVar1;
   int iVar2;
   ulong *puVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   ulong uVar6;
   ulong uVar7;
   ulong uVar8;
   ulong uVar9;
   void *ptr;
   long *ptr_00;
   long lVar10;
   undefined8 uVar11;
   uVar11 = 0;
   if (param_2 == (ulong*)0x0) {
      if (param_3 == (undefined8*)0x0) {
         return 0;
      }
      *param_3 = 0x20;
      return 1;
   }
   if (param_5 != 0x20) {
      return 0;
   }
   ptr = (void*)CRYPTO_zalloc(0x58, "test/tls-provider.c", 0x2b3);
   if (ptr == (void*)0x0) {
      ptr_00 = (long*)0x0;
      goto LAB_00104b28;
   }
   piVar1 = (int*)( (long)ptr + 0x50 );
   LOCK();
   *piVar1 = 1;
   UNLOCK();
   lVar10 = param_1[2];
   uVar11 = param_4[1];
   uVar4 = param_4[2];
   uVar5 = param_4[3];
   *(undefined8*)( (long)ptr + 0x20 ) = *param_4;
   *(undefined8*)( (long)ptr + 0x28 ) = uVar11;
   *(undefined8*)( (long)ptr + 0x30 ) = uVar4;
   *(undefined8*)( (long)ptr + 0x38 ) = uVar5;
   ptr_00 = (long*)CRYPTO_zalloc(0x18, "test/tls-provider.c", 0x1d3);
   if (ptr_00 == (long*)0x0) {
      LAB_00104b60:uVar11 = 0;
   } else {
      puVar3 = (ulong*)*param_1;
      ptr_00[2] = lVar10;
      if (puVar3 == (ulong*)0x0) goto LAB_00104b60;
      *param_3 = 0x20;
      *ptr_00 = (long)puVar3;
      ptr_00[1] = (long)ptr;
      if (( ulong )((long)param_2 - ( (long)puVar3 + 1 )) < 0xf) {
         lVar10 = 0;
         do {
            *(byte*)( (long)param_2 + lVar10 ) = *(byte*)( (long)puVar3 + lVar10 ) ^ *(byte*)( (long)ptr + lVar10 + 0x20 );
            lVar10 = lVar10 + 1;
         } while ( lVar10 != 0x20 );
      } else {
         uVar6 = puVar3[1];
         uVar7 = *(ulong*)( (long)ptr + 0x28 );
         uVar8 = *(ulong*)( (long)ptr + 0x30 );
         uVar9 = *(ulong*)( (long)ptr + 0x38 );
         *param_2 = *puVar3 ^ *(ulong*)( (long)ptr + 0x20 );
         param_2[1] = uVar6 ^ uVar7;
         uVar6 = puVar3[3];
         param_2[2] = puVar3[2] ^ uVar8;
         param_2[3] = uVar6 ^ uVar9;
      }
      uVar11 = 1;
   }
   LOCK();
   iVar2 = *piVar1;
   *piVar1 = *piVar1 + -1;
   UNLOCK();
   if (( iVar2 == 1 ) || ( iVar2 + -1 < 1 )) {
      CRYPTO_free(*(void**)( (long)ptr + 0x48 ));
      *(undefined8*)( (long)ptr + 0x48 ) = 0;
      CRYPTO_free(ptr);
   }
   LAB_00104b28:CRYPTO_free(ptr_00);
   return uVar11;
}/* WARNING: Removing unreachable block (ram,0x00104e80) *//* WARNING: Removing unreachable block (ram,0x00104e69) */int xorhmacsha2sig_to_EncryptedPrivateKeyInfo_der_encode(undefined8 *param_1, undefined8 param_2, long param_3, long param_4, ulong param_5, undefined8 param_6, undefined8 param_7) {
   uchar *penc;
   int iVar1;
   int iVar2;
   uint penclen;
   BIO *bp;
   PKCS8_PRIV_KEY_INFO *priv;
   ASN1_OBJECT *aobj;
   X509_SIG *p8;
   ulong uVar3;
   long in_FS_OFFSET;
   undefined8 local_50;
   uchar *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_4 == 0 ) && ( ( param_5 & 1 ) != 0 )) {
      iVar1 = OBJ_sn2nid("xorhmacsha2sig");
      if (( param_3 != 0 ) && ( 0 < iVar1 )) {
         iVar2 = 0;
         bp = (BIO*)BIO_new_from_core_bio(*(undefined8*)*param_1, param_2);
         if (bp != (BIO*)0x0) {
            param_1[3] = param_6;
            param_1[4] = param_7;
            local_50 = 0;
            if (( *(int*)( (long)param_1 + 0xc ) == 0 ) || ( iVar2 = prepare_xorx_params(param_3, iVar1, *(undefined4*)( param_1 + 1 ), &local_50) ),iVar2 == 0) {
               iVar2 = 0;
            } else {
               local_48 = (uchar*)0x0;
               priv = PKCS8_PRIV_KEY_INFO_new();
               if (priv == (PKCS8_PRIV_KEY_INFO*)0x0) {
                  LAB_00104e10:ERR_new();
                  ERR_set_debug("test/tls-provider.c", 0x556, "key_to_p8info");
                  ERR_set_error(0x80, 0xc0100, 0);
                  PKCS8_PRIV_KEY_INFO_free(priv);
                  CRYPTO_free(local_48);
                  p8 = (X509_SIG*)0x0;
                  LAB_00104e78:iVar2 = 0;
               } else {
                  penclen = xorx_pki_priv_to_der(param_3, &local_48);
                  penc = local_48;
                  uVar3 = (ulong)penclen;
                  if ((int)penclen < 1) goto LAB_00104e10;
                  aobj = OBJ_nid2obj(iVar1);
                  iVar1 = PKCS8_pkey_set0(priv, aobj, 0, -1, (void*)0x0, penc, penclen);
                  if (iVar1 == 0) goto LAB_00104e10;
                  p8 = (X509_SIG*)p8info_to_encp8(priv, param_1, uVar3, 0x104d5f);
                  PKCS8_PRIV_KEY_INFO_free(priv);
                  if (p8 == (X509_SIG*)0x0) goto LAB_00104e78;
                  iVar2 = i2d_PKCS8_bio(bp, p8);
               }
               X509_SIG_free(p8);
            }
         }
         BIO_free(bp);
         goto LAB_00104c38;
      }
      ERR_new();
      ERR_set_debug("test/tls-provider.c", 0x734, "key2any_encode");
      ERR_set_error(0x80, 0xc0102, 0);
   } else {
      ERR_new();
      ERR_set_debug("test/tls-provider.c", 0x7f6, "xorhmacsha2sig_to_EncryptedPrivateKeyInfo_der_encode");
      ERR_set_error(0x80, 0x80106, 0);
   }
   iVar2 = 0;
   LAB_00104c38:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar2;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* WARNING: Removing unreachable block (ram,0x00105150) *//* WARNING: Removing unreachable block (ram,0x00105139) */int xorhmacsha2sig_to_EncryptedPrivateKeyInfo_pem_encode(undefined8 *param_1, undefined8 param_2, long param_3, long param_4, ulong param_5, undefined8 param_6, undefined8 param_7) {
   uchar *penc;
   int iVar1;
   int iVar2;
   uint penclen;
   BIO *bp;
   PKCS8_PRIV_KEY_INFO *priv;
   ASN1_OBJECT *aobj;
   X509_SIG *x;
   ulong uVar3;
   long in_FS_OFFSET;
   undefined8 local_50;
   uchar *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_4 == 0 ) && ( ( param_5 & 1 ) != 0 )) {
      iVar1 = OBJ_sn2nid("xorhmacsha2sig");
      if (( param_3 != 0 ) && ( 0 < iVar1 )) {
         iVar2 = 0;
         bp = (BIO*)BIO_new_from_core_bio(*(undefined8*)*param_1, param_2);
         if (bp != (BIO*)0x0) {
            param_1[3] = param_6;
            param_1[4] = param_7;
            local_50 = 0;
            if (( *(int*)( (long)param_1 + 0xc ) == 0 ) || ( iVar2 = prepare_xorx_params(param_3, iVar1, *(undefined4*)( param_1 + 1 ), &local_50) ),iVar2 == 0) {
               iVar2 = 0;
            } else {
               local_48 = (uchar*)0x0;
               priv = PKCS8_PRIV_KEY_INFO_new();
               if (priv == (PKCS8_PRIV_KEY_INFO*)0x0) {
                  LAB_001050e0:ERR_new();
                  ERR_set_debug("test/tls-provider.c", 0x556, "key_to_p8info");
                  ERR_set_error(0x80, 0xc0100, 0);
                  PKCS8_PRIV_KEY_INFO_free(priv);
                  CRYPTO_free(local_48);
                  x = (X509_SIG*)0x0;
                  LAB_00105148:iVar2 = 0;
               } else {
                  penclen = xorx_pki_priv_to_der(param_3, &local_48);
                  penc = local_48;
                  uVar3 = (ulong)penclen;
                  if ((int)penclen < 1) goto LAB_001050e0;
                  aobj = OBJ_nid2obj(iVar1);
                  iVar1 = PKCS8_pkey_set0(priv, aobj, 0, -1, (void*)0x0, penc, penclen);
                  if (iVar1 == 0) goto LAB_001050e0;
                  x = (X509_SIG*)p8info_to_encp8(priv, param_1, uVar3, 0x10502f);
                  PKCS8_PRIV_KEY_INFO_free(priv);
                  if (x == (X509_SIG*)0x0) goto LAB_00105148;
                  iVar2 = PEM_write_bio_PKCS8(bp, x);
               }
               X509_SIG_free(x);
            }
         }
         BIO_free(bp);
         goto LAB_00104f08;
      }
      ERR_new();
      ERR_set_debug("test/tls-provider.c", 0x734, "key2any_encode");
      ERR_set_error(0x80, 0xc0102, 0);
   } else {
      ERR_new();
      ERR_set_debug("test/tls-provider.c", 0x7f7, "xorhmacsha2sig_to_EncryptedPrivateKeyInfo_pem_encode");
      ERR_set_error(0x80, 0x80106, 0);
   }
   iVar2 = 0;
   LAB_00104f08:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar2;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* WARNING: Removing unreachable block (ram,0x00105420) *//* WARNING: Removing unreachable block (ram,0x00105409) */int xorhmacsig_to_EncryptedPrivateKeyInfo_der_encode(undefined8 *param_1, undefined8 param_2, long param_3, long param_4, ulong param_5, undefined8 param_6, undefined8 param_7) {
   uchar *penc;
   int iVar1;
   int iVar2;
   uint penclen;
   BIO *bp;
   PKCS8_PRIV_KEY_INFO *priv;
   ASN1_OBJECT *aobj;
   X509_SIG *p8;
   ulong uVar3;
   long in_FS_OFFSET;
   undefined8 local_50;
   uchar *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_4 == 0 ) && ( ( param_5 & 1 ) != 0 )) {
      iVar1 = OBJ_sn2nid("xorhmacsig");
      if (( param_3 != 0 ) && ( 0 < iVar1 )) {
         iVar2 = 0;
         bp = (BIO*)BIO_new_from_core_bio(*(undefined8*)*param_1, param_2);
         if (bp != (BIO*)0x0) {
            param_1[3] = param_6;
            param_1[4] = param_7;
            local_50 = 0;
            if (( *(int*)( (long)param_1 + 0xc ) == 0 ) || ( iVar2 = prepare_xorx_params(param_3, iVar1, *(undefined4*)( param_1 + 1 ), &local_50) ),iVar2 == 0) {
               iVar2 = 0;
            } else {
               local_48 = (uchar*)0x0;
               priv = PKCS8_PRIV_KEY_INFO_new();
               if (priv == (PKCS8_PRIV_KEY_INFO*)0x0) {
                  LAB_001053b0:ERR_new();
                  ERR_set_debug("test/tls-provider.c", 0x556, "key_to_p8info");
                  ERR_set_error(0x80, 0xc0100, 0);
                  PKCS8_PRIV_KEY_INFO_free(priv);
                  CRYPTO_free(local_48);
                  p8 = (X509_SIG*)0x0;
                  LAB_00105418:iVar2 = 0;
               } else {
                  penclen = xorx_pki_priv_to_der(param_3, &local_48);
                  penc = local_48;
                  uVar3 = (ulong)penclen;
                  if ((int)penclen < 1) goto LAB_001053b0;
                  aobj = OBJ_nid2obj(iVar1);
                  iVar1 = PKCS8_pkey_set0(priv, aobj, 0, -1, (void*)0x0, penc, penclen);
                  if (iVar1 == 0) goto LAB_001053b0;
                  p8 = (X509_SIG*)p8info_to_encp8(priv, param_1, uVar3, 0x1052ff);
                  PKCS8_PRIV_KEY_INFO_free(priv);
                  if (p8 == (X509_SIG*)0x0) goto LAB_00105418;
                  iVar2 = i2d_PKCS8_bio(bp, p8);
               }
               X509_SIG_free(p8);
            }
         }
         BIO_free(bp);
         goto LAB_001051d8;
      }
      ERR_new();
      ERR_set_debug("test/tls-provider.c", 0x734, "key2any_encode");
      ERR_set_error(0x80, 0xc0102, 0);
   } else {
      ERR_new();
      ERR_set_debug("test/tls-provider.c", 0x7f0, "xorhmacsig_to_EncryptedPrivateKeyInfo_der_encode");
      ERR_set_error(0x80, 0x80106, 0);
   }
   iVar2 = 0;
   LAB_001051d8:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar2;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* WARNING: Removing unreachable block (ram,0x001056f0) *//* WARNING: Removing unreachable block (ram,0x001056d9) */int xorhmacsig_to_EncryptedPrivateKeyInfo_pem_encode(undefined8 *param_1, undefined8 param_2, long param_3, long param_4, ulong param_5, undefined8 param_6, undefined8 param_7) {
   uchar *penc;
   int iVar1;
   int iVar2;
   uint penclen;
   BIO *bp;
   PKCS8_PRIV_KEY_INFO *priv;
   ASN1_OBJECT *aobj;
   X509_SIG *x;
   ulong uVar3;
   long in_FS_OFFSET;
   undefined8 local_50;
   uchar *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_4 == 0 ) && ( ( param_5 & 1 ) != 0 )) {
      iVar1 = OBJ_sn2nid("xorhmacsig");
      if (( param_3 != 0 ) && ( 0 < iVar1 )) {
         iVar2 = 0;
         bp = (BIO*)BIO_new_from_core_bio(*(undefined8*)*param_1, param_2);
         if (bp != (BIO*)0x0) {
            param_1[3] = param_6;
            param_1[4] = param_7;
            local_50 = 0;
            if (( *(int*)( (long)param_1 + 0xc ) == 0 ) || ( iVar2 = prepare_xorx_params(param_3, iVar1, *(undefined4*)( param_1 + 1 ), &local_50) ),iVar2 == 0) {
               iVar2 = 0;
            } else {
               local_48 = (uchar*)0x0;
               priv = PKCS8_PRIV_KEY_INFO_new();
               if (priv == (PKCS8_PRIV_KEY_INFO*)0x0) {
                  LAB_00105680:ERR_new();
                  ERR_set_debug("test/tls-provider.c", 0x556, "key_to_p8info");
                  ERR_set_error(0x80, 0xc0100, 0);
                  PKCS8_PRIV_KEY_INFO_free(priv);
                  CRYPTO_free(local_48);
                  x = (X509_SIG*)0x0;
                  LAB_001056e8:iVar2 = 0;
               } else {
                  penclen = xorx_pki_priv_to_der(param_3, &local_48);
                  penc = local_48;
                  uVar3 = (ulong)penclen;
                  if ((int)penclen < 1) goto LAB_00105680;
                  aobj = OBJ_nid2obj(iVar1);
                  iVar1 = PKCS8_pkey_set0(priv, aobj, 0, -1, (void*)0x0, penc, penclen);
                  if (iVar1 == 0) goto LAB_00105680;
                  x = (X509_SIG*)p8info_to_encp8(priv, param_1, uVar3, 0x1055cf);
                  PKCS8_PRIV_KEY_INFO_free(priv);
                  if (x == (X509_SIG*)0x0) goto LAB_001056e8;
                  iVar2 = PEM_write_bio_PKCS8(bp, x);
               }
               X509_SIG_free(x);
            }
         }
         BIO_free(bp);
         goto LAB_001054a8;
      }
      ERR_new();
      ERR_set_debug("test/tls-provider.c", 0x734, "key2any_encode");
      ERR_set_error(0x80, 0xc0102, 0);
   } else {
      ERR_new();
      ERR_set_debug("test/tls-provider.c", 0x7f1, "xorhmacsig_to_EncryptedPrivateKeyInfo_pem_encode");
      ERR_set_error(0x80, 0x80106, 0);
   }
   iVar2 = 0;
   LAB_001054a8:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar2;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* WARNING: Type propagation algorithm not settling */undefined8 *xor_dup(undefined8 *param_1, uint param_2) {
   int *piVar1;
   int iVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   undefined8 uVar6;
   undefined8 *ptr;
   char *pcVar7;
   ptr = (undefined8*)CRYPTO_zalloc(0x58, "test/tls-provider.c", 0x2b3);
   if (ptr == (undefined8*)0x0) {
      return (undefined8*)0x0;
   }
   piVar1 = (int*)( ptr + 10 );
   LOCK();
   *piVar1 = 1;
   UNLOCK();
   if (param_1 == (undefined8*)0x0) {
      LOCK();
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (( iVar2 != 1 ) && ( 0 < iVar2 + -1 )) {
         return (undefined8*)0x0;
      }
      CRYPTO_free((void*)ptr[9]);
      ptr[9] = 0;
      CRYPTO_free(ptr);
      return (undefined8*)0x0;
   }
   if (( param_2 & 2 ) != 0) {
      if (*(int*)( (long)param_1 + 0x44 ) == 0) {
         *(undefined4*)( (long)ptr + 0x44 ) = 0;
      } else {
         uVar3 = param_1[4];
         uVar4 = param_1[5];
         uVar5 = param_1[6];
         uVar6 = param_1[7];
         *(undefined4*)( (long)ptr + 0x44 ) = 1;
         ptr[4] = uVar3;
         ptr[5] = uVar4;
         ptr[6] = uVar5;
         ptr[7] = uVar6;
      }
   }
   if (( param_2 & 1 ) != 0) {
      if (*(int*)( param_1 + 8 ) != 0) {
         uVar3 = *param_1;
         uVar4 = param_1[1];
         uVar5 = param_1[2];
         uVar6 = param_1[3];
         *(undefined4*)( ptr + 8 ) = 1;
         pcVar7 = (char*)param_1[9];
         *ptr = uVar3;
         ptr[1] = uVar4;
         ptr[2] = uVar5;
         ptr[3] = uVar6;
         goto joined_r0x001057cf;
      }
      *(undefined4*)( ptr + 8 ) = 0;
   }
   pcVar7 = (char*)param_1[9];
   joined_r0x001057cf:if (pcVar7 != (char*)0x0) {
      pcVar7 = CRYPTO_strdup(pcVar7, "test/tls-provider.c", 0x30c);
      ptr[9] = pcVar7;
      return ptr;
   }
   return ptr;
}undefined8 *xor_key_op_isra_0(X509_ALGOR *param_1, undefined8 *param_2, int param_3, int param_4) {
   int *piVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   int iVar5;
   undefined8 *ptr;
   char *pcVar6;
   undefined8 *puVar7;
   undefined8 uVar8;
   long in_FS_OFFSET;
   int local_44;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 == (X509_ALGOR*)0x0) {
      LAB_00105970:ERR_new();
      uVar8 = 0x4c9;
      LAB_00105981:ERR_set_debug("test/tls-provider.c", uVar8, "xor_key_op");
      ERR_set_error(0x80, 7, 0);
   } else {
      X509_ALGOR_get0((ASN1_OBJECT**)0x0, &local_44, (void**)0x0, param_1);
      if (( local_44 != -1 ) || ( param_1->algorithm == (ASN1_OBJECT*)0x0 )) {
         ERR_new();
         uVar8 = 0x4c2;
         goto LAB_00105981;
      }
      iVar5 = OBJ_obj2nid(param_1->algorithm);
      if (( param_2 == (undefined8*)0x0 ) || ( iVar5 == 0 )) goto LAB_00105970;
      ptr = (undefined8*)CRYPTO_zalloc(0x58, "test/tls-provider.c", 0x2b3);
      if (ptr == (undefined8*)0x0) {
         ERR_new();
         puVar7 = (undefined8*)0x0;
         ERR_set_debug("test/tls-provider.c", 0x4cf, "xor_key_op");
         ERR_set_error(0x80, 0xc0100, 0);
         goto LAB_00105948;
      }
      piVar1 = (int*)( ptr + 10 );
      LOCK();
      *piVar1 = 1;
      UNLOCK();
      if (param_3 == 0x20) {
         if (param_4 == 0) {
            uVar8 = *param_2;
            uVar2 = param_2[1];
            uVar3 = param_2[2];
            uVar4 = param_2[3];
            *(undefined4*)( (long)ptr + 0x44 ) = 1;
            ptr[4] = uVar8;
            ptr[5] = uVar2;
            ptr[6] = uVar3;
            ptr[7] = uVar4;
         } else {
            uVar8 = *param_2;
            uVar2 = param_2[1];
            uVar3 = param_2[2];
            uVar4 = param_2[3];
            *(undefined4*)( ptr + 8 ) = 1;
            *ptr = uVar8;
            ptr[1] = uVar2;
            ptr[2] = uVar3;
            ptr[3] = uVar4;
         }
         pcVar6 = OBJ_nid2sn(iVar5);
         pcVar6 = CRYPTO_strdup(pcVar6, "test/tls-provider.c", 0x4e0);
         ptr[9] = pcVar6;
         puVar7 = ptr;
         if (pcVar6 != (char*)0x0) goto LAB_00105948;
      } else {
         ERR_new();
         ERR_set_debug("test/tls-provider.c", 0x4d4, "xor_key_op");
         ERR_set_error(0x80, 7, 0);
      }
      LOCK();
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (( iVar5 == 1 ) || ( iVar5 + -1 < 1 )) {
         CRYPTO_free((void*)ptr[9]);
         ptr[9] = 0;
         puVar7 = (undefined8*)0x0;
         CRYPTO_free(ptr);
         goto LAB_00105948;
      }
   }
   puVar7 = (undefined8*)0x0;
   LAB_00105948:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return puVar7;
}long xor_d2i_PUBKEY(long *param_1, undefined8 param_2, undefined8 param_3) {
   int *piVar1;
   void *ptr;
   int iVar2;
   X509_PUBKEY *pub;
   long lVar3;
   long in_FS_OFFSET;
   int local_44;
   uchar *local_40;
   X509_ALGOR *local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_38 = (X509_ALGOR*)CRYPTO_zalloc(0x28, "test/tls-provider.c", 0x888);
   if (local_38 == (X509_ALGOR*)0x0) {
      pub = (X509_PUBKEY*)0x0;
      lVar3 = 0;
   } else {
      pub = (X509_PUBKEY*)ASN1_item_d2i_ex(&local_38, param_2, param_3, local_it_24, 0, 0);
      if (pub != (X509_PUBKEY*)0x0) {
         iVar2 = X509_PUBKEY_get0_param((ASN1_OBJECT**)0x0, &local_40, &local_44, &local_38, pub);
         if (iVar2 != 0) {
            lVar3 = xor_key_op_isra_0(local_38, local_40, local_44, 0);
            if (( lVar3 != 0 ) && ( param_1 != (long*)0x0 )) {
               ptr = (void*)*param_1;
               if (ptr != (void*)0x0) {
                  LOCK();
                  piVar1 = (int*)( (long)ptr + 0x50 );
                  iVar2 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (( iVar2 == 1 ) || ( iVar2 + -1 < 1 )) {
                     CRYPTO_free(*(void**)( (long)ptr + 0x48 ));
                     *(undefined8*)( (long)ptr + 0x48 ) = 0;
                     CRYPTO_free(ptr);
                  }
               }
               *param_1 = lVar3;
            }
            goto LAB_00105b6a;
         }
      }
      lVar3 = 0;
   }
   LAB_00105b6a:X509_PUBKEY_free(pub);
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return lVar3;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}undefined8 xorx_d2i_PKCS8(undefined8 param_1, uchar **param_2, long param_3, long param_4) {
   int iVar1;
   PKCS8_PRIV_KEY_INFO *p8;
   ASN1_OCTET_STRING *x;
   undefined8 uVar2;
   long in_FS_OFFSET;
   int local_3c;
   X509_ALGOR *local_38;
   uchar *local_30;
   X509_ALGOR *local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_38 = (X509_ALGOR*)0x0;
   p8 = d2i_PKCS8_PRIV_KEY_INFO((PKCS8_PRIV_KEY_INFO**)0x0, param_2, param_3);
   if (p8 != (PKCS8_PRIV_KEY_INFO*)0x0) {
      iVar1 = PKCS8_pkey_get0((ASN1_OBJECT**)0x0, (uchar**)0x0, (int*)0x0, &local_38, p8);
      if (iVar1 != 0) {
         iVar1 = OBJ_obj2nid(local_38->algorithm);
         if (iVar1 == *(int*)( *(long*)( param_4 + 8 ) + 0x18 )) {
            uVar2 = 0;
            iVar1 = PKCS8_pkey_get0((ASN1_OBJECT**)0x0, &local_30, &local_3c, &local_28, p8);
            if (iVar1 != 0) {
               x = d2i_ASN1_OCTET_STRING((ASN1_OCTET_STRING**)0x0, &local_30, (long)local_3c);
               if (x == (ASN1_OCTET_STRING*)0x0) {
                  local_30 = (uchar*)0x0;
                  local_3c = 0;
               } else {
                  local_30 = (uchar*)ASN1_STRING_get0_data(x);
                  local_3c = ASN1_STRING_length(x);
               }
               uVar2 = xor_key_op_isra_0(local_28, local_30, local_3c, 1);
               ASN1_OCTET_STRING_free(x);
            }
            goto LAB_00105cca;
         }
      }
   }
   uVar2 = 0;
   LAB_00105cca:PKCS8_PRIV_KEY_INFO_free(p8);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* WARNING: Removing unreachable block (ram,0x00106068) *//* WARNING: Removing unreachable block (ram,0x001060cb) *//* WARNING: Removing unreachable block (ram,0x00105f6c) *//* WARNING: Removing unreachable block (ram,0x001060e0) */int xorhmacsig_to_PrivateKeyInfo_pem_encode(undefined8 *param_1, undefined8 param_2, long param_3, long param_4, ulong param_5, undefined8 param_6, undefined8 param_7) {
   uchar *puVar1;
   int iVar2;
   int iVar3;
   BIO *bp;
   PKCS8_PRIV_KEY_INFO *pPVar4;
   ASN1_OBJECT *pAVar5;
   X509_SIG *x;
   long in_FS_OFFSET;
   undefined8 local_58;
   undefined8 local_50;
   uchar *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_4 == 0 ) && ( ( param_5 & 1 ) != 0 )) {
      iVar2 = OBJ_sn2nid("xorhmacsig");
      if (( param_3 != 0 ) && ( 0 < iVar2 )) {
         iVar3 = 0;
         bp = (BIO*)BIO_new_from_core_bio(*(undefined8*)*param_1, param_2);
         if (bp != (BIO*)0x0) {
            local_58 = 0;
            param_1[3] = param_6;
            param_1[4] = param_7;
            if (*(int*)( (long)param_1 + 0xc ) == 0) {
               iVar3 = prepare_xorx_params(param_3, iVar2, *(undefined4*)( param_1 + 1 ), &local_58);
               if (iVar3 == 0) goto LAB_00105ebf;
               local_48 = (uchar*)0x0;
               pPVar4 = PKCS8_PRIV_KEY_INFO_new();
               if (( pPVar4 == (PKCS8_PRIV_KEY_INFO*)0x0 ) || ( iVar3 = xorx_pki_priv_to_der(param_3, &local_48) ),puVar1 = local_48,iVar3 < 1) {
                  LAB_00105f08:ERR_new();
                  ERR_set_debug("test/tls-provider.c", 0x556, "key_to_p8info");
                  ERR_set_error(0x80, 0xc0100, 0);
                  PKCS8_PRIV_KEY_INFO_free(pPVar4);
                  CRYPTO_free(local_48);
                  pPVar4 = (PKCS8_PRIV_KEY_INFO*)0x0;
                  iVar3 = 0;
               } else {
                  pAVar5 = OBJ_nid2obj(iVar2);
                  iVar2 = PKCS8_pkey_set0(pPVar4, pAVar5, 0, -1, (void*)0x0, puVar1, iVar3);
                  if (iVar2 == 0) goto LAB_00105f08;
                  iVar3 = PEM_write_bio_PKCS8_PRIV_KEY_INFO(bp, pPVar4);
               }
               PKCS8_PRIV_KEY_INFO_free(pPVar4);
            } else {
               local_50 = 0;
               iVar3 = prepare_xorx_params(param_3, iVar2, *(undefined4*)( param_1 + 1 ), &local_50);
               if (iVar3 == 0) goto LAB_00105ebf;
               local_48 = (uchar*)0x0;
               pPVar4 = PKCS8_PRIV_KEY_INFO_new();
               if (( pPVar4 == (PKCS8_PRIV_KEY_INFO*)0x0 ) || ( iVar3 = xorx_pki_priv_to_der(param_3, &local_48) ),puVar1 = local_48,iVar3 < 1) {
                  LAB_00106072:ERR_new();
                  ERR_set_debug("test/tls-provider.c", 0x556, "key_to_p8info");
                  ERR_set_error(0x80, 0xc0100, 0);
                  PKCS8_PRIV_KEY_INFO_free(pPVar4);
                  CRYPTO_free(local_48);
                  x = (X509_SIG*)0x0;
                  LAB_001060d3:iVar3 = 0;
               } else {
                  pAVar5 = OBJ_nid2obj(iVar2);
                  iVar2 = PKCS8_pkey_set0(pPVar4, pAVar5, 0, -1, (void*)0x0, puVar1, iVar3);
                  if (iVar2 == 0) goto LAB_00106072;
                  x = (X509_SIG*)p8info_to_encp8(pPVar4, param_1);
                  PKCS8_PRIV_KEY_INFO_free(pPVar4);
                  if (x == (X509_SIG*)0x0) goto LAB_001060d3;
                  iVar3 = PEM_write_bio_PKCS8(bp, x);
               }
               X509_SIG_free(x);
            }
         }
         LAB_00105ebf:BIO_free(bp);
         goto LAB_00105d78;
      }
      ERR_new();
      ERR_set_debug("test/tls-provider.c", 0x734, "key2any_encode");
      ERR_set_error(0x80, 0xc0102, 0);
   } else {
      ERR_new();
      ERR_set_debug("test/tls-provider.c", 0x7f3, "xorhmacsig_to_PrivateKeyInfo_pem_encode");
      ERR_set_error(0x80, 0x80106, 0);
   }
   iVar3 = 0;
   LAB_00105d78:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return iVar3;
}/* WARNING: Removing unreachable block (ram,0x00106448) *//* WARNING: Removing unreachable block (ram,0x001064ab) *//* WARNING: Removing unreachable block (ram,0x0010634c) *//* WARNING: Removing unreachable block (ram,0x001064c0) */int xorhmacsha2sig_to_PrivateKeyInfo_der_encode(undefined8 *param_1, undefined8 param_2, long param_3, long param_4, ulong param_5, undefined8 param_6, undefined8 param_7) {
   uchar *puVar1;
   int iVar2;
   int iVar3;
   BIO *bp;
   PKCS8_PRIV_KEY_INFO *pPVar4;
   ASN1_OBJECT *pAVar5;
   X509_SIG *p8;
   long in_FS_OFFSET;
   undefined8 local_58;
   undefined8 local_50;
   uchar *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_4 == 0 ) && ( ( param_5 & 1 ) != 0 )) {
      iVar2 = OBJ_sn2nid("xorhmacsha2sig");
      if (( param_3 != 0 ) && ( 0 < iVar2 )) {
         iVar3 = 0;
         bp = (BIO*)BIO_new_from_core_bio(*(undefined8*)*param_1, param_2);
         if (bp != (BIO*)0x0) {
            local_58 = 0;
            param_1[3] = param_6;
            param_1[4] = param_7;
            if (*(int*)( (long)param_1 + 0xc ) == 0) {
               iVar3 = prepare_xorx_params(param_3, iVar2, *(undefined4*)( param_1 + 1 ), &local_58);
               if (iVar3 == 0) goto LAB_0010629f;
               local_48 = (uchar*)0x0;
               pPVar4 = PKCS8_PRIV_KEY_INFO_new();
               if (( pPVar4 == (PKCS8_PRIV_KEY_INFO*)0x0 ) || ( iVar3 = xorx_pki_priv_to_der(param_3, &local_48) ),puVar1 = local_48,iVar3 < 1) {
                  LAB_001062e8:ERR_new();
                  ERR_set_debug("test/tls-provider.c", 0x556, "key_to_p8info");
                  ERR_set_error(0x80, 0xc0100, 0);
                  PKCS8_PRIV_KEY_INFO_free(pPVar4);
                  CRYPTO_free(local_48);
                  pPVar4 = (PKCS8_PRIV_KEY_INFO*)0x0;
                  iVar3 = 0;
               } else {
                  pAVar5 = OBJ_nid2obj(iVar2);
                  iVar2 = PKCS8_pkey_set0(pPVar4, pAVar5, 0, -1, (void*)0x0, puVar1, iVar3);
                  if (iVar2 == 0) goto LAB_001062e8;
                  iVar3 = i2d_PKCS8_PRIV_KEY_INFO_bio(bp, pPVar4);
               }
               PKCS8_PRIV_KEY_INFO_free(pPVar4);
            } else {
               local_50 = 0;
               iVar3 = prepare_xorx_params(param_3, iVar2, *(undefined4*)( param_1 + 1 ), &local_50);
               if (iVar3 == 0) goto LAB_0010629f;
               local_48 = (uchar*)0x0;
               pPVar4 = PKCS8_PRIV_KEY_INFO_new();
               if (( pPVar4 == (PKCS8_PRIV_KEY_INFO*)0x0 ) || ( iVar3 = xorx_pki_priv_to_der(param_3, &local_48) ),puVar1 = local_48,iVar3 < 1) {
                  LAB_00106452:ERR_new();
                  ERR_set_debug("test/tls-provider.c", 0x556, "key_to_p8info");
                  ERR_set_error(0x80, 0xc0100, 0);
                  PKCS8_PRIV_KEY_INFO_free(pPVar4);
                  CRYPTO_free(local_48);
                  p8 = (X509_SIG*)0x0;
                  LAB_001064b3:iVar3 = 0;
               } else {
                  pAVar5 = OBJ_nid2obj(iVar2);
                  iVar2 = PKCS8_pkey_set0(pPVar4, pAVar5, 0, -1, (void*)0x0, puVar1, iVar3);
                  if (iVar2 == 0) goto LAB_00106452;
                  p8 = (X509_SIG*)p8info_to_encp8(pPVar4, param_1);
                  PKCS8_PRIV_KEY_INFO_free(pPVar4);
                  if (p8 == (X509_SIG*)0x0) goto LAB_001064b3;
                  iVar3 = i2d_PKCS8_bio(bp, p8);
               }
               X509_SIG_free(p8);
            }
         }
         LAB_0010629f:BIO_free(bp);
         goto LAB_00106158;
      }
      ERR_new();
      ERR_set_debug("test/tls-provider.c", 0x734, "key2any_encode");
      ERR_set_error(0x80, 0xc0102, 0);
   } else {
      ERR_new();
      ERR_set_debug("test/tls-provider.c", 0x7f8, "xorhmacsha2sig_to_PrivateKeyInfo_der_encode");
      ERR_set_error(0x80, 0x80106, 0);
   }
   iVar3 = 0;
   LAB_00106158:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return iVar3;
}/* WARNING: Removing unreachable block (ram,0x00106828) *//* WARNING: Removing unreachable block (ram,0x0010688b) *//* WARNING: Removing unreachable block (ram,0x0010672c) *//* WARNING: Removing unreachable block (ram,0x001068a0) */int xorhmacsig_to_PrivateKeyInfo_der_encode(undefined8 *param_1, undefined8 param_2, long param_3, long param_4, ulong param_5, undefined8 param_6, undefined8 param_7) {
   uchar *puVar1;
   int iVar2;
   int iVar3;
   BIO *bp;
   PKCS8_PRIV_KEY_INFO *pPVar4;
   ASN1_OBJECT *pAVar5;
   X509_SIG *p8;
   long in_FS_OFFSET;
   undefined8 local_58;
   undefined8 local_50;
   uchar *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_4 == 0 ) && ( ( param_5 & 1 ) != 0 )) {
      iVar2 = OBJ_sn2nid("xorhmacsig");
      if (( param_3 != 0 ) && ( 0 < iVar2 )) {
         iVar3 = 0;
         bp = (BIO*)BIO_new_from_core_bio(*(undefined8*)*param_1, param_2);
         if (bp != (BIO*)0x0) {
            local_58 = 0;
            param_1[3] = param_6;
            param_1[4] = param_7;
            if (*(int*)( (long)param_1 + 0xc ) == 0) {
               iVar3 = prepare_xorx_params(param_3, iVar2, *(undefined4*)( param_1 + 1 ), &local_58);
               if (iVar3 == 0) goto LAB_0010667f;
               local_48 = (uchar*)0x0;
               pPVar4 = PKCS8_PRIV_KEY_INFO_new();
               if (( pPVar4 == (PKCS8_PRIV_KEY_INFO*)0x0 ) || ( iVar3 = xorx_pki_priv_to_der(param_3, &local_48) ),puVar1 = local_48,iVar3 < 1) {
                  LAB_001066c8:ERR_new();
                  ERR_set_debug("test/tls-provider.c", 0x556, "key_to_p8info");
                  ERR_set_error(0x80, 0xc0100, 0);
                  PKCS8_PRIV_KEY_INFO_free(pPVar4);
                  CRYPTO_free(local_48);
                  pPVar4 = (PKCS8_PRIV_KEY_INFO*)0x0;
                  iVar3 = 0;
               } else {
                  pAVar5 = OBJ_nid2obj(iVar2);
                  iVar2 = PKCS8_pkey_set0(pPVar4, pAVar5, 0, -1, (void*)0x0, puVar1, iVar3);
                  if (iVar2 == 0) goto LAB_001066c8;
                  iVar3 = i2d_PKCS8_PRIV_KEY_INFO_bio(bp, pPVar4);
               }
               PKCS8_PRIV_KEY_INFO_free(pPVar4);
            } else {
               local_50 = 0;
               iVar3 = prepare_xorx_params(param_3, iVar2, *(undefined4*)( param_1 + 1 ), &local_50);
               if (iVar3 == 0) goto LAB_0010667f;
               local_48 = (uchar*)0x0;
               pPVar4 = PKCS8_PRIV_KEY_INFO_new();
               if (( pPVar4 == (PKCS8_PRIV_KEY_INFO*)0x0 ) || ( iVar3 = xorx_pki_priv_to_der(param_3, &local_48) ),puVar1 = local_48,iVar3 < 1) {
                  LAB_00106832:ERR_new();
                  ERR_set_debug("test/tls-provider.c", 0x556, "key_to_p8info");
                  ERR_set_error(0x80, 0xc0100, 0);
                  PKCS8_PRIV_KEY_INFO_free(pPVar4);
                  CRYPTO_free(local_48);
                  p8 = (X509_SIG*)0x0;
                  LAB_00106893:iVar3 = 0;
               } else {
                  pAVar5 = OBJ_nid2obj(iVar2);
                  iVar2 = PKCS8_pkey_set0(pPVar4, pAVar5, 0, -1, (void*)0x0, puVar1, iVar3);
                  if (iVar2 == 0) goto LAB_00106832;
                  p8 = (X509_SIG*)p8info_to_encp8(pPVar4, param_1);
                  PKCS8_PRIV_KEY_INFO_free(pPVar4);
                  if (p8 == (X509_SIG*)0x0) goto LAB_00106893;
                  iVar3 = i2d_PKCS8_bio(bp, p8);
               }
               X509_SIG_free(p8);
            }
         }
         LAB_0010667f:BIO_free(bp);
         goto LAB_00106538;
      }
      ERR_new();
      ERR_set_debug("test/tls-provider.c", 0x734, "key2any_encode");
      ERR_set_error(0x80, 0xc0102, 0);
   } else {
      ERR_new();
      ERR_set_debug("test/tls-provider.c", 0x7f2, "xorhmacsig_to_PrivateKeyInfo_der_encode");
      ERR_set_error(0x80, 0x80106, 0);
   }
   iVar3 = 0;
   LAB_00106538:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return iVar3;
}/* WARNING: Removing unreachable block (ram,0x00106c08) *//* WARNING: Removing unreachable block (ram,0x00106c6b) *//* WARNING: Removing unreachable block (ram,0x00106b0c) *//* WARNING: Removing unreachable block (ram,0x00106c80) */int xorhmacsha2sig_to_PrivateKeyInfo_pem_encode(undefined8 *param_1, undefined8 param_2, long param_3, long param_4, ulong param_5, undefined8 param_6, undefined8 param_7) {
   uchar *puVar1;
   int iVar2;
   int iVar3;
   BIO *bp;
   PKCS8_PRIV_KEY_INFO *pPVar4;
   ASN1_OBJECT *pAVar5;
   X509_SIG *x;
   long in_FS_OFFSET;
   undefined8 local_58;
   undefined8 local_50;
   uchar *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_4 == 0 ) && ( ( param_5 & 1 ) != 0 )) {
      iVar2 = OBJ_sn2nid("xorhmacsha2sig");
      if (( param_3 != 0 ) && ( 0 < iVar2 )) {
         iVar3 = 0;
         bp = (BIO*)BIO_new_from_core_bio(*(undefined8*)*param_1, param_2);
         if (bp != (BIO*)0x0) {
            local_58 = 0;
            param_1[3] = param_6;
            param_1[4] = param_7;
            if (*(int*)( (long)param_1 + 0xc ) == 0) {
               iVar3 = prepare_xorx_params(param_3, iVar2, *(undefined4*)( param_1 + 1 ), &local_58);
               if (iVar3 == 0) goto LAB_00106a5f;
               local_48 = (uchar*)0x0;
               pPVar4 = PKCS8_PRIV_KEY_INFO_new();
               if (( pPVar4 == (PKCS8_PRIV_KEY_INFO*)0x0 ) || ( iVar3 = xorx_pki_priv_to_der(param_3, &local_48) ),puVar1 = local_48,iVar3 < 1) {
                  LAB_00106aa8:ERR_new();
                  ERR_set_debug("test/tls-provider.c", 0x556, "key_to_p8info");
                  ERR_set_error(0x80, 0xc0100, 0);
                  PKCS8_PRIV_KEY_INFO_free(pPVar4);
                  CRYPTO_free(local_48);
                  pPVar4 = (PKCS8_PRIV_KEY_INFO*)0x0;
                  iVar3 = 0;
               } else {
                  pAVar5 = OBJ_nid2obj(iVar2);
                  iVar2 = PKCS8_pkey_set0(pPVar4, pAVar5, 0, -1, (void*)0x0, puVar1, iVar3);
                  if (iVar2 == 0) goto LAB_00106aa8;
                  iVar3 = PEM_write_bio_PKCS8_PRIV_KEY_INFO(bp, pPVar4);
               }
               PKCS8_PRIV_KEY_INFO_free(pPVar4);
            } else {
               local_50 = 0;
               iVar3 = prepare_xorx_params(param_3, iVar2, *(undefined4*)( param_1 + 1 ), &local_50);
               if (iVar3 == 0) goto LAB_00106a5f;
               local_48 = (uchar*)0x0;
               pPVar4 = PKCS8_PRIV_KEY_INFO_new();
               if (( pPVar4 == (PKCS8_PRIV_KEY_INFO*)0x0 ) || ( iVar3 = xorx_pki_priv_to_der(param_3, &local_48) ),puVar1 = local_48,iVar3 < 1) {
                  LAB_00106c12:ERR_new();
                  ERR_set_debug("test/tls-provider.c", 0x556, "key_to_p8info");
                  ERR_set_error(0x80, 0xc0100, 0);
                  PKCS8_PRIV_KEY_INFO_free(pPVar4);
                  CRYPTO_free(local_48);
                  x = (X509_SIG*)0x0;
                  LAB_00106c73:iVar3 = 0;
               } else {
                  pAVar5 = OBJ_nid2obj(iVar2);
                  iVar2 = PKCS8_pkey_set0(pPVar4, pAVar5, 0, -1, (void*)0x0, puVar1, iVar3);
                  if (iVar2 == 0) goto LAB_00106c12;
                  x = (X509_SIG*)p8info_to_encp8(pPVar4, param_1);
                  PKCS8_PRIV_KEY_INFO_free(pPVar4);
                  if (x == (X509_SIG*)0x0) goto LAB_00106c73;
                  iVar3 = PEM_write_bio_PKCS8(bp, x);
               }
               X509_SIG_free(x);
            }
         }
         LAB_00106a5f:BIO_free(bp);
         goto LAB_00106918;
      }
      ERR_new();
      ERR_set_debug("test/tls-provider.c", 0x734, "key2any_encode");
      ERR_set_error(0x80, 0xc0102, 0);
   } else {
      ERR_new();
      ERR_set_debug("test/tls-provider.c", 0x7f9, "xorhmacsha2sig_to_PrivateKeyInfo_pem_encode");
      ERR_set_error(0x80, 0x80106, 0);
   }
   iVar3 = 0;
   LAB_00106918:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return iVar3;
}undefined8 tls_provider_init(undefined8 param_1, int *param_2, undefined8 *param_3, undefined8 *param_4) {
   int *piVar1;
   int iVar2;
   uint uVar3;
   long lVar4;
   long *ptr;
   undefined8 uVar5;
   long lVar6;
   code *pcVar7;
   code *pcVar8;
   long in_FS_OFFSET;
   uint local_44;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar4 = OSSL_LIB_CTX_new_from_dispatch();
   ptr = (long*)CRYPTO_malloc(8, "test/tls-provider.c", 0x1b5);
   if (ptr == (long*)0x0) {
      LAB_001072dc:ptr = (long*)0x0;
   } else {
      if (lVar4 == 0) {
         CRYPTO_free(ptr);
         goto LAB_001072dc;
      }
      *ptr = lVar4;
      *param_4 = ptr;
      do {
         iVar2 = RAND_bytes_ex(lVar4, &local_44, 4, 0);
         if (iVar2 < 1) {
            xor_group = 0;
            goto LAB_00106e00;
         }
         lVar6 = (long)in_mem_0;
         local_44 = local_44 % 0xcd + 0xfe00;
      } while ( ( 0 < in_mem_0 ) && ( ( local_44 == mem_1 || ( ( in_mem_0 != 1 && ( ( local_44 == DAT_00107384 || ( ( in_mem_0 != 2 && ( ( local_44 == DAT_00107388 || ( ( in_mem_0 != 3 && ( ( local_44 == DAT_0010738c || ( ( in_mem_0 != 4 && ( ( local_44 == DAT_00107390 || ( ( in_mem_0 != 5 && ( ( local_44 == DAT_00107394 || ( ( in_mem_0 != 6 && ( ( local_44 == DAT_00107398 || ( ( in_mem_0 != 7 && ( ( local_44 == DAT_0010739c || ( ( in_mem_0 != 8 && ( ( local_44 == DAT_001073a0 || ( ( in_mem_0 != 9 && ( local_44 == DAT_001073a4 ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) );
      in_mem_0 = in_mem_0 + 1;
      ( &mem_1 )[lVar6] = local_44;
      xor_group = local_44;
      LAB_00106e00:do {
         iVar2 = RAND_bytes_ex(lVar4, &local_44, 4, 0);
         if (iVar2 < 1) {
            xor_kemgroup._0_4_ = 0;
            goto LAB_00106f02;
         }
         lVar6 = (long)in_mem_0;
         local_44 = local_44 % 0xcd + 0xfe00;
      } while ( ( 0 < in_mem_0 ) && ( ( local_44 == mem_1 || ( ( in_mem_0 != 1 && ( ( local_44 == DAT_00107384 || ( ( in_mem_0 != 2 && ( ( local_44 == DAT_00107388 || ( ( in_mem_0 != 3 && ( ( local_44 == DAT_0010738c || ( ( in_mem_0 != 4 && ( ( local_44 == DAT_00107390 || ( ( in_mem_0 != 5 && ( ( local_44 == DAT_00107394 || ( ( in_mem_0 != 6 && ( ( local_44 == DAT_00107398 || ( ( in_mem_0 != 7 && ( ( local_44 == DAT_0010739c || ( ( in_mem_0 != 8 && ( ( local_44 == DAT_001073a0 || ( ( in_mem_0 != 9 && ( local_44 == DAT_001073a4 ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) );
      in_mem_0 = in_mem_0 + 1;
      ( &mem_1 )[lVar6] = local_44;
      xor_kemgroup._0_4_ = local_44;
      LAB_00106f02:do {
         iVar2 = RAND_bytes_ex(lVar4, &local_44, 4, 0);
         if (iVar2 < 1) {
            xor_sigalg._0_4_ = 0;
            goto LAB_00107004;
         }
         lVar6 = (long)in_mem_0;
         local_44 = local_44 % 0xcd + 0xfe00;
      } while ( ( 0 < in_mem_0 ) && ( ( local_44 == mem_1 || ( ( in_mem_0 != 1 && ( ( local_44 == DAT_00107384 || ( ( in_mem_0 != 2 && ( ( local_44 == DAT_00107388 || ( ( in_mem_0 != 3 && ( ( local_44 == DAT_0010738c || ( ( in_mem_0 != 4 && ( ( local_44 == DAT_00107390 || ( ( in_mem_0 != 5 && ( ( local_44 == DAT_00107394 || ( ( in_mem_0 != 6 && ( ( local_44 == DAT_00107398 || ( ( in_mem_0 != 7 && ( ( local_44 == DAT_0010739c || ( ( in_mem_0 != 8 && ( ( local_44 == DAT_001073a0 || ( ( in_mem_0 != 9 && ( local_44 == DAT_001073a4 ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) );
      in_mem_0 = in_mem_0 + 1;
      ( &mem_1 )[lVar6] = local_44;
      xor_sigalg._0_4_ = local_44;
      LAB_00107004:do {
         iVar2 = RAND_bytes_ex(lVar4, &local_44, 4, 0);
         if (iVar2 < 1) {
            uVar3 = 0;
            goto LAB_00107100;
         }
         lVar6 = (long)in_mem_0;
         uVar3 = local_44 % 0xcd + 0xfe00;
         local_44 = uVar3;
      } while ( ( 0 < in_mem_0 ) && ( ( uVar3 == mem_1 || ( ( in_mem_0 != 1 && ( ( uVar3 == DAT_00107384 || ( ( in_mem_0 != 2 && ( ( uVar3 == DAT_00107388 || ( ( in_mem_0 != 3 && ( ( uVar3 == DAT_0010738c || ( ( in_mem_0 != 4 && ( ( uVar3 == DAT_00107390 || ( ( in_mem_0 != 5 && ( ( uVar3 == DAT_00107394 || ( ( in_mem_0 != 6 && ( ( uVar3 == DAT_00107398 || ( ( in_mem_0 != 7 && ( ( uVar3 == DAT_0010739c || ( ( in_mem_0 != 8 && ( ( uVar3 == DAT_001073a0 || ( ( in_mem_0 != 9 && ( uVar3 == DAT_001073a4 ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) );
      in_mem_0 = in_mem_0 + 1;
      ( &mem_1 )[lVar6] = uVar3;
      LAB_00107100:pcVar7 = (code*)0x0;
      pcVar8 = (code*)0x0;
      iVar2 = *param_2;
      while (iVar2 != 0) {
         while (iVar2 != 0xb) {
            if (iVar2 == 0xc) {
               pcVar8 = *(code**)( param_2 + 2 );
            }
            iVar2 = param_2[4];
            param_2 = param_2 + 4;
            if (iVar2 == 0) goto LAB_00107142;
         };
         pcVar7 = *(code**)( param_2 + 2 );
         piVar1 = param_2 + 4;
         param_2 = param_2 + 4;
         iVar2 = *piVar1;
      };
      LAB_00107142:xor_sigalg_hash._0_4_ = uVar3;
      iVar2 = ( *pcVar8 )(param_1, "1.3.6.1.4.1.16604.998888.1", "xorhmacsig", "xorhmacsig");
      if (iVar2 == 0) {
         ERR_new();
         uVar5 = 0xcbd;
      } else {
         iVar2 = ( *pcVar7 )(param_1, "1.3.6.1.4.1.16604.998888.1", &_LC32, "1.3.6.1.4.1.16604.998888.1");
         if (iVar2 == 0) {
            ERR_new();
            uVar5 = 0xcc2;
         } else {
            iVar2 = ( *pcVar8 )(param_1, "1.3.6.1.4.1.16604.998888.2", "xorhmacsha2sig", 0);
            if (iVar2 == 0) {
               ERR_new();
               uVar5 = 0xcc6;
            } else {
               iVar2 = ( *pcVar7 )(param_1, "1.3.6.1.4.1.16604.998888.2", "SHA256", "1.3.6.1.4.1.16604.998888.2");
               if (iVar2 != 0) {
                  *param_3 = tls_prov_dispatch_table;
                  uVar5 = 1;
                  goto LAB_001071f0;
               }
               ERR_new();
               uVar5 = 0xccb;
            }
         }
      }
      ERR_set_debug("test/tls-provider.c", uVar5, "tls_provider_init");
      ERR_set_error(0x80, 6, 0);
   }
   CRYPTO_free(ptr);
   *param_4 = 0;
   OSSL_LIB_CTX_free(lVar4);
   uVar5 = 0;
   LAB_001071f0:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar5;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
