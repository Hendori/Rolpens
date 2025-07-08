char *ec_query_operation_name(int param_1) {
   char *pcVar1;
   pcVar1 = "ECDH";
   if (( param_1 != 0xb ) && ( pcVar1 = param_1 != 0xc )) {
      pcVar1 = (char*)0x0;
   }

   return pcVar1;
}
undefined *sm2_query_operation_name(int param_1) {
   undefined *puVar1;
   puVar1 = &_LC2;
   if (param_1 != 0xc) {
      puVar1 = (undefined*)0x0;
   }

   return puVar1;
}
undefined8 ec_import_types(uint param_1) {
   uint uVar1;
   uVar1 = param_1 & 7;
   if (( param_1 & 0x80 ) != 0) {
      uVar1 = ( param_1 & 7 ) + 8;
   }

   return *(undefined8*)( ec_types + (long)(int)uVar1 * 8 );
}
undefined1 *ec_gettable_params(void) {
   return ec_known_gettable_params;
}
undefined1 *ec_settable_params(void) {
   return ec_known_settable_params;
}
undefined1 *sm2_gettable_params(void) {
   return sm2_known_gettable_params;
}
undefined1 *sm2_settable_params(void) {
   return sm2_known_settable_params;
}
undefined1 *ec_gen_settable_params(void) {
   return settable_1;
}
undefined1 *ec_gen_gettable_params(void) {
   return known_ec_gen_gettable_ctx_params_2;
}
bool ec_gen_get_params(long param_1) {
   return param_1 != 0;
}
undefined8 ec_dup(undefined8 param_1, undefined4 param_2) {
   int iVar1;
   undefined8 uVar2;
   iVar1 = ossl_prov_is_running();
   if (iVar1 == 0) {
      return 0;
   }

   uVar2 = ossl_ec_key_dup(param_1, param_2);
   return uVar2;
}
bool ec_has(EC_KEY *param_1, uint param_2) {
   int iVar1;
   EC_GROUP *pEVar2;
   BIGNUM *pBVar3;
   EC_POINT *pEVar4;
   iVar1 = ossl_prov_is_running();
   if (( iVar1 != 0 ) && ( param_1 != (EC_KEY*)0x0 )) {
      if (( param_2 & 0x87 ) == 0) {
         return true;
      }

      if (( ( ( param_2 & 2 ) == 0 ) || ( pEVar4 = EC_KEY_get0_public_key(param_1) ),pEVar4 != (EC_POINT*)0x0 )) {
         if (( param_2 & 4 ) != 0) {
            pEVar2 = EC_KEY_get0_group(param_1);
            return pEVar2 != (EC_GROUP*)0x0;
         }

         return true;
      }

   }

   return false;
}
bool ec_import(EC_KEY *param_1, uint param_2, undefined8 param_3) {
   int iVar1;
   int iVar2;
   EC_GROUP *group;
   iVar1 = ossl_prov_is_running();
   if (( ( param_1 != (EC_KEY*)0x0 ) && ( iVar1 != 0 ) ) && ( ( param_2 & 4 ) != 0 )) {
      iVar1 = ossl_ec_group_fromdata(param_1, param_3);
      group = EC_KEY_get0_group(param_1);
      if (( group != (EC_GROUP*)0x0 ) && ( iVar2 = iVar2 != 0x494 )) {
         if (( param_2 & 3 ) == 0) {
            if (( param_2 & 0x80 ) == 0) {
               return iVar1 != 0;
            }

            if (iVar1 != 0) goto LAB_00100271;
         }
 else if (( iVar1 != 0 ) && ( iVar1 = ossl_ec_key_fromdata(param_1, param_3, param_2 & 1) ),iVar1 != 0) {
            if (( param_2 & 0x80 ) == 0) {
               return true;
            }

            LAB_00100271:iVar1 = ossl_ec_key_otherparams_fromdata(param_1, param_3);
            return iVar1 != 0;
         }

      }

   }

   return false;
}
bool ec_validate(EC_KEY *param_1, uint param_2, int param_3) {
   int iVar1;
   uint uVar2;
   undefined8 uVar3;
   BN_CTX *ctx;
   EC_GROUP *pEVar4;
   bool bVar5;
   iVar1 = ossl_prov_is_running();
   if (iVar1 == 0) {
      return false;
   }

   if (( param_2 & 0x87 ) == 0) {
      return true;
   }

   uVar3 = ossl_ec_key_get_libctx(param_1);
   ctx = (BN_CTX*)BN_CTX_new_ex(uVar3);
   if (ctx == (BN_CTX*)0x0) {
      return false;
   }

   if (( param_2 & 4 ) == 0) {
      LAB_0010030c:if (( param_2 & 2 ) != 0) {
         if (param_3 == 1) {
            iVar1 = ossl_ec_key_public_check_quick(param_1, ctx);
         }
 else {
            iVar1 = ossl_ec_key_public_check(param_1, ctx);
         }

         if (iVar1 == 0) goto LAB_001003a4;
      }

      if (( param_2 & 1 ) != 0) {
         iVar1 = ossl_ec_key_private_check(param_1);
         if (iVar1 == 0) goto LAB_001003a4;
         if (( ~param_2 & 3 ) == 0) {
            iVar1 = ossl_ec_key_pairwise_check(param_1, ctx);
            bVar5 = iVar1 != 0;
            goto LAB_001003a7;
         }

      }

      bVar5 = true;
   }
 else {
      uVar2 = EC_KEY_get_flags(param_1);
      if (( uVar2 & 0x2000 ) == 0) {
         pEVar4 = EC_KEY_get0_group(param_1);
         iVar1 = EC_GROUP_check(pEVar4, ctx);
         if (iVar1 != 0) goto LAB_0010030c;
      }
 else {
         pEVar4 = EC_KEY_get0_group(param_1);
         iVar1 = EC_GROUP_check_named_curve(pEVar4, uVar2 >> 0xe & 1, ctx);
         if (0 < iVar1) goto LAB_0010030c;
      }

      LAB_001003a4:bVar5 = false;
   }

   LAB_001003a7:BN_CTX_free(ctx);
   return bVar5;
}
bool ec_match(EC_KEY *param_1, EC_KEY *param_2, uint param_3) {
   int iVar1;
   EC_GROUP *a;
   EC_GROUP *b;
   undefined8 uVar2;
   BN_CTX *ctx;
   EC_POINT *a_00;
   EC_POINT *b_00;
   BIGNUM *a_01;
   BIGNUM *b_01;
   bool bVar3;
   a = EC_KEY_get0_group(param_1);
   b = EC_KEY_get0_group(param_2);
   iVar1 = ossl_prov_is_running();
   if (iVar1 == 0) {
      return false;
   }

   uVar2 = ossl_ec_key_get_libctx(param_1);
   ctx = (BN_CTX*)BN_CTX_new_ex(uVar2);
   if (ctx == (BN_CTX*)0x0) {
      return false;
   }

   bVar3 = true;
   if (( param_3 & 4 ) != 0) {
      if (( a == (EC_GROUP*)0x0 ) || ( b == (EC_GROUP*)0x0 )) {
         bVar3 = false;
      }
 else {
         iVar1 = EC_GROUP_cmp(a, b, ctx);
         bVar3 = iVar1 == 0;
      }

   }

   if (( param_3 & 3 ) == 0) goto LAB_001004b8;
   if (( param_3 & 2 ) == 0) {
      LAB_001004ac:if (( param_3 & 1 ) != 0) {
         a_01 = EC_KEY_get0_private_key(param_1);
         b_01 = EC_KEY_get0_private_key(param_2);
         if (( ( a_01 != (BIGNUM*)0x0 ) && ( b_01 != (BIGNUM*)0x0 ) ) && ( bVar3 != false )) {
            iVar1 = BN_cmp(a_01, b_01);
            bVar3 = iVar1 == 0;
            goto LAB_001004b8;
         }

      }

   }
 else {
      a_00 = EC_KEY_get0_public_key(param_1);
      b_00 = EC_KEY_get0_public_key(param_2);
      if (( a_00 == (EC_POINT*)0x0 ) || ( b_00 == (EC_POINT*)0x0 )) goto LAB_001004ac;
      if (bVar3 != false) {
         iVar1 = EC_POINT_cmp(b, a_00, b_00, ctx);
         bVar3 = iVar1 == 0;
         goto LAB_001004b8;
      }

   }

   bVar3 = false;
   LAB_001004b8:BN_CTX_free(ctx);
   return bVar3;
}
undefined8 ec_set_params(EC_KEY *param_1, long *param_2) {
   int iVar1;
   EC_GROUP *pEVar2;
   long lVar3;
   BN_CTX *c;
   undefined8 uVar4;
   if (param_1 == (EC_KEY*)0x0) {
      return 0;
   }

   if (( param_2 == (long*)0x0 ) || ( *param_2 == 0 )) {
      uVar4 = 1;
   }
 else {
      pEVar2 = EC_KEY_get0_group(param_1);
      iVar1 = ossl_ec_group_set_params(pEVar2, param_2);
      if (iVar1 == 0) {
         uVar4 = 0;
      }
 else {
         lVar3 = OSSL_PARAM_locate_const(param_2, "encoded-pub-key");
         if (lVar3 == 0) {
            LAB_00100629:uVar4 = ossl_ec_key_otherparams_fromdata(param_1, param_2);
            return uVar4;
         }

         ossl_ec_key_get_libctx(param_1);
         c = (BN_CTX*)BN_CTX_new_ex();
         if (c == (BN_CTX*)0x0) {
            BN_CTX_free((BN_CTX*)0x0);
            uVar4 = 0;
         }
 else {
            if (*(int*)( lVar3 + 8 ) == 5) {
               iVar1 = EC_KEY_oct2key(param_1, *(undefined8*)( lVar3 + 0x10 ), *(undefined8*)( lVar3 + 0x18 ), c);
               if (iVar1 != 0) {
                  BN_CTX_free(c);
                  goto LAB_00100629;
               }

            }

            BN_CTX_free(c);
            uVar4 = 0;
         }

      }

   }

   return uVar4;
}
/* WARNING: Unknown calling convention -- yet parameter storage is locked */void ec_freedata(EC_KEY *key) {
   EC_KEY_free(key);
   return;
}
undefined8 ec_gen_set_group_from_params(undefined8 *param_1) {
   int iVar1;
   long lVar2;
   long lVar3;
   long lVar4;
   undefined8 uVar5;
   lVar2 = OSSL_PARAM_BLD_new();
   if (lVar2 == 0) {
      return 0;
   }

   if (( ( param_1[2] == 0 ) || ( iVar1 = OSSL_PARAM_BLD_push_utf8_string(lVar2, "encoding", param_1[2], 0) ),iVar1 != 0 )) {
      if (param_1[1] == 0) {
         if (( ( ( ( ( ( ( param_1[5] == 0 ) || ( iVar1 = OSSL_PARAM_BLD_push_utf8_string(lVar2, "field-type", param_1[5], 0) ),iVar1 == 0 ) ) || ( param_1[6] == 0 ) ) || ( ( param_1[7] == 0 || ( param_1[8] == 0 ) ) ) ) || ( ( param_1[9] == 0 || ( ( iVar1 = OSSL_PARAM_BLD_push_BN(lVar2, &_LC8) ),iVar1 == 0 || ( iVar1 = OSSL_PARAM_BLD_push_BN(lVar2, &_LC9, param_1[7]) ),iVar1 == 0 ) ) ) ) )) ( iVar1 = iVar1 == 0 ) || ( ( ( iVar1 = OSSL_PARAM_BLD_push_BN(lVar2, "order", param_1[9]) ),iVar1 == 0 || ( ( param_1[10] != 0 && ( iVar1 = OSSL_PARAM_BLD_push_BN(lVar2, "cofactor") ),iVar1 == 0 ) ) ) ) || ( ( param_1[0xc] != 0 && ( iVar1 = OSSL_PARAM_BLD_push_octet_string(lVar2, &_LC13, param_1[0xc], param_1[0xe]) ),iVar1 == 0 ) ) || ( param_1[0xb] == 0 );
         iVar1 = OSSL_PARAM_BLD_push_octet_string(lVar2, "generator", param_1[0xb], param_1[0xd]);
      }
 else {
         iVar1 = OSSL_PARAM_BLD_push_utf8_string(lVar2, "group", param_1[1], 0);
      }

      if (( iVar1 != 0 ) && ( lVar3 = lVar3 != 0 )) {
         uVar5 = 0;
         lVar4 = EC_GROUP_new_from_params(lVar3, *param_1, 0);
         if (lVar4 != 0) {
            uVar5 = 1;
            EC_GROUP_free((EC_GROUP*)param_1[0x10]);
            param_1[0x10] = lVar4;
         }

         goto LAB_001006f0;
      }

   }

   LAB_001006ea:lVar3 = 0;
   uVar5 = 0;
   LAB_001006f0:OSSL_PARAM_free(lVar3);
   OSSL_PARAM_BLD_free(lVar2);
   return uVar5;
}
bool ec_gen_set_params(long param_1, undefined8 param_2) {
   undefined8 uVar1;
   undefined8 uVar2;
   int iVar3;
   long lVar4;
   char *pcVar5;
   BIGNUM *pBVar6;
   lVar4 = OSSL_PARAM_locate_const(param_2, "use-cofactor-flag");
   if (( lVar4 != 0 ) && ( iVar3 = iVar3 == 0 )) {
      return false;
   }

   lVar4 = OSSL_PARAM_locate_const(param_2, "group");
   if (lVar4 != 0) {
      if (*(int*)( lVar4 + 8 ) != 4) {
         return false;
      }

      CRYPTO_free(*(void**)( param_1 + 8 ));
      pcVar5 = CRYPTO_strdup(*(char**)( lVar4 + 0x10 ), "providers/implementations/keymgmt/ec_kmgmt.c", 0x45d);
      *(char**)( param_1 + 8 ) = pcVar5;
      if (pcVar5 == (char*)0x0) {
         return false;
      }

   }

   lVar4 = OSSL_PARAM_locate_const(param_2, "field-type");
   if (lVar4 != 0) {
      if (*(int*)( lVar4 + 8 ) != 4) {
         return false;
      }

      CRYPTO_free(*(void**)( param_1 + 0x28 ));
      pcVar5 = CRYPTO_strdup(*(char**)( lVar4 + 0x10 ), "providers/implementations/keymgmt/ec_kmgmt.c", 0x45e);
      *(char**)( param_1 + 0x28 ) = pcVar5;
      if (pcVar5 == (char*)0x0) {
         return false;
      }

   }

   lVar4 = OSSL_PARAM_locate_const(param_2, "encoding");
   if (lVar4 != 0) {
      if (*(int*)( lVar4 + 8 ) != 4) {
         return false;
      }

      CRYPTO_free(*(void**)( param_1 + 0x10 ));
      pcVar5 = CRYPTO_strdup(*(char**)( lVar4 + 0x10 ), "providers/implementations/keymgmt/ec_kmgmt.c", 0x45f);
      *(char**)( param_1 + 0x10 ) = pcVar5;
      if (pcVar5 == (char*)0x0) {
         return false;
      }

   }

   lVar4 = OSSL_PARAM_locate_const(param_2, "point-format");
   if (lVar4 != 0) {
      if (*(int*)( lVar4 + 8 ) != 4) {
         return false;
      }

      CRYPTO_free(*(void**)( param_1 + 0x18 ));
      pcVar5 = CRYPTO_strdup(*(char**)( lVar4 + 0x10 ), "providers/implementations/keymgmt/ec_kmgmt.c", 0x460);
      *(char**)( param_1 + 0x18 ) = pcVar5;
      if (pcVar5 == (char*)0x0) {
         return false;
      }

   }

   lVar4 = OSSL_PARAM_locate_const(param_2, "group-check");
   if (lVar4 != 0) {
      if (*(int*)( lVar4 + 8 ) != 4) {
         return false;
      }

      CRYPTO_free(*(void**)( param_1 + 0x20 ));
      pcVar5 = CRYPTO_strdup(*(char**)( lVar4 + 0x10 ), "providers/implementations/keymgmt/ec_kmgmt.c", 0x461);
      *(char**)( param_1 + 0x20 ) = pcVar5;
      if (pcVar5 == (char*)0x0) {
         return false;
      }

   }

   lVar4 = OSSL_PARAM_locate_const(param_2, &_LC8);
   if (lVar4 != 0) {
      if (*(long*)( param_1 + 0x30 ) == 0) {
         pBVar6 = BN_new();
         *(BIGNUM**)( param_1 + 0x30 ) = pBVar6;
         if (pBVar6 == (BIGNUM*)0x0) {
            return false;
         }

      }

      iVar3 = OSSL_PARAM_get_BN(lVar4, param_1 + 0x30);
      if (iVar3 == 0) {
         return false;
      }

   }

   lVar4 = OSSL_PARAM_locate_const(param_2, &_LC9);
   if (lVar4 != 0) {
      if (*(long*)( param_1 + 0x38 ) == 0) {
         pBVar6 = BN_new();
         *(BIGNUM**)( param_1 + 0x38 ) = pBVar6;
         if (pBVar6 == (BIGNUM*)0x0) {
            return false;
         }

      }

      iVar3 = OSSL_PARAM_get_BN(lVar4, param_1 + 0x38);
      if (iVar3 == 0) {
         return false;
      }

   }

   lVar4 = OSSL_PARAM_locate_const(param_2, &_LC10);
   if (lVar4 != 0) {
      if (*(long*)( param_1 + 0x40 ) == 0) {
         pBVar6 = BN_new();
         *(BIGNUM**)( param_1 + 0x40 ) = pBVar6;
         if (pBVar6 == (BIGNUM*)0x0) {
            return false;
         }

      }

      iVar3 = OSSL_PARAM_get_BN(lVar4, param_1 + 0x40);
      if (iVar3 == 0) {
         return false;
      }

   }

   lVar4 = OSSL_PARAM_locate_const(param_2, "order");
   if (lVar4 != 0) {
      if (*(long*)( param_1 + 0x48 ) == 0) {
         pBVar6 = BN_new();
         *(BIGNUM**)( param_1 + 0x48 ) = pBVar6;
         if (pBVar6 == (BIGNUM*)0x0) {
            return false;
         }

      }

      iVar3 = OSSL_PARAM_get_BN(lVar4, param_1 + 0x48);
      if (iVar3 == 0) {
         return false;
      }

   }

   lVar4 = OSSL_PARAM_locate_const(param_2, "cofactor");
   if (lVar4 != 0) {
      if (*(long*)( param_1 + 0x50 ) == 0) {
         pBVar6 = BN_new();
         *(BIGNUM**)( param_1 + 0x50 ) = pBVar6;
         if (pBVar6 == (BIGNUM*)0x0) {
            return false;
         }

      }

      iVar3 = OSSL_PARAM_get_BN(lVar4, param_1 + 0x50);
      if (iVar3 == 0) {
         return false;
      }

   }

   lVar4 = OSSL_PARAM_locate_const(param_2, &_LC13);
   if (lVar4 != 0) {
      if (*(int*)( lVar4 + 8 ) != 5) {
         return false;
      }

      CRYPTO_free(*(void**)( param_1 + 0x60 ));
      uVar1 = *(undefined8*)( lVar4 + 0x18 );
      uVar2 = *(undefined8*)( lVar4 + 0x10 );
      *(undefined8*)( param_1 + 0x70 ) = uVar1;
      lVar4 = CRYPTO_memdup(uVar2, uVar1, "providers/implementations/keymgmt/ec_kmgmt.c", 0x469);
      *(long*)( param_1 + 0x60 ) = lVar4;
      if (lVar4 == 0) {
         return false;
      }

   }

   lVar4 = OSSL_PARAM_locate_const(param_2, "generator");
   if (lVar4 != 0) {
      if (*(int*)( lVar4 + 8 ) != 5) {
         return false;
      }

      CRYPTO_free(*(void**)( param_1 + 0x58 ));
      uVar1 = *(undefined8*)( lVar4 + 0x18 );
      uVar2 = *(undefined8*)( lVar4 + 0x10 );
      *(undefined8*)( param_1 + 0x68 ) = uVar1;
      lVar4 = CRYPTO_memdup(uVar2, uVar1, "providers/implementations/keymgmt/ec_kmgmt.c", 0x46a);
      *(long*)( param_1 + 0x58 ) = lVar4;
      if (lVar4 == 0) {
         return false;
      }

   }

   lVar4 = OSSL_PARAM_locate_const(param_2, "dhkem-ikm");
   if (lVar4 == 0) {
      return true;
   }

   if (*(int*)( lVar4 + 8 ) != 5) {
      return false;
   }

   CRYPTO_free(*(void**)( param_1 + 0x88 ));
   uVar1 = *(undefined8*)( lVar4 + 0x18 );
   uVar2 = *(undefined8*)( lVar4 + 0x10 );
   *(undefined8*)( param_1 + 0x90 ) = uVar1;
   lVar4 = CRYPTO_memdup(uVar2, uVar1, "providers/implementations/keymgmt/ec_kmgmt.c", 0x46d);
   *(long*)( param_1 + 0x88 ) = lVar4;
   return lVar4 != 0;
}
undefined8 ec_gen_set_template(long param_1, EC_KEY *param_2) {
   int iVar1;
   EC_GROUP *pEVar2;
   iVar1 = ossl_prov_is_running();
   if (( ( iVar1 != 0 ) && ( param_1 != 0 ) ) && ( param_2 != (EC_KEY*)0x0 )) {
      pEVar2 = EC_KEY_get0_group(param_2);
      if (pEVar2 != (EC_GROUP*)0x0) {
         pEVar2 = EC_GROUP_dup(pEVar2);
         if (pEVar2 != (EC_GROUP*)0x0) {
            EC_GROUP_free(*(EC_GROUP**)( param_1 + 0x80 ));
            *(EC_GROUP**)( param_1 + 0x80 ) = pEVar2;
            return 1;
         }

         ERR_new();
         ERR_set_debug("providers/implementations/keymgmt/ec_kmgmt.c", 0x417, "ec_gen_set_group");
         ERR_set_error(0x39, 0xb0, 0);
      }

   }

   return 0;
}
undefined8 ec_newdata(undefined8 param_1) {
   int iVar1;
   undefined8 uVar2;
   iVar1 = ossl_prov_is_running();
   if (iVar1 != 0) {
      uVar2 = ossl_prov_ctx_get0_libctx(param_1);
      uVar2 = EC_KEY_new_ex(uVar2, 0);
      return uVar2;
   }

   return 0;
}
undefined8 *ec_gen_init(undefined8 param_1, uint param_2, undefined8 param_3) {
   int iVar1;
   undefined8 uVar2;
   undefined8 *ptr;
   uVar2 = ossl_prov_ctx_get0_libctx();
   iVar1 = ossl_prov_is_running();
   if (( ( iVar1 != 0 ) && ( ( param_2 & 0x87 ) != 0 ) ) && ( ptr = (undefined8*)CRYPTO_zalloc(0x98, "providers/implementations/keymgmt/ec_kmgmt.c", 0x3f0) ),ptr != (undefined8*)0x0) {
      *ptr = uVar2;
      *(uint*)( ptr + 0xf ) = param_2;
      *(undefined4*)( (long)ptr + 0x7c ) = 0;
      iVar1 = ec_gen_set_params(ptr, param_3);
      if (iVar1 != 0) {
         return ptr;
      }

      CRYPTO_free(ptr);
   }

   return (undefined8*)0x0;
}
bool sm2_validate(EC_KEY *param_1, uint param_2, int param_3) {
   int iVar1;
   undefined8 uVar2;
   BN_CTX *ctx;
   EC_GROUP *group;
   bool bVar3;
   iVar1 = ossl_prov_is_running();
   if (iVar1 == 0) {
      return false;
   }

   if (( param_2 & 0x87 ) == 0) {
      return true;
   }

   uVar2 = ossl_ec_key_get_libctx(param_1);
   ctx = (BN_CTX*)BN_CTX_new_ex(uVar2);
   if (ctx == (BN_CTX*)0x0) {
      return false;
   }

   if (( param_2 & 4 ) == 0) {
      LAB_00100f24:if (( param_2 & 2 ) != 0) {
         if (param_3 == 1) {
            iVar1 = ossl_ec_key_public_check_quick(param_1, ctx);
         }
 else {
            iVar1 = ossl_ec_key_public_check(param_1, ctx);
         }

         if (iVar1 == 0) goto LAB_00100fab;
      }

      if (( param_2 & 1 ) != 0) {
         iVar1 = ossl_sm2_key_private_check(param_1);
         if (iVar1 == 0) goto LAB_00100fab;
         if (( ~param_2 & 3 ) == 0) {
            iVar1 = ossl_ec_key_pairwise_check(param_1, ctx);
            bVar3 = iVar1 != 0;
            goto LAB_00100fae;
         }

      }

      bVar3 = true;
   }
 else {
      group = EC_KEY_get0_group(param_1);
      iVar1 = EC_GROUP_check(group, ctx);
      if (iVar1 != 0) goto LAB_00100f24;
      LAB_00100fab:bVar3 = false;
   }

   LAB_00100fae:BN_CTX_free(ctx);
   return bVar3;
}
undefined8 sm2_newdata(undefined8 param_1) {
   int iVar1;
   undefined8 uVar2;
   iVar1 = ossl_prov_is_running();
   if (iVar1 != 0) {
      uVar2 = ossl_prov_ctx_get0_libctx(param_1);
      uVar2 = EC_KEY_new_by_curve_name_ex(uVar2, 0, 0x494);
      return uVar2;
   }

   return 0;
}
bool common_get_params(EC_KEY *param_1, undefined8 param_2, int param_3) {
   int iVar1;
   undefined4 uVar2;
   uint uVar3;
   point_conversion_form_t pVar4;
   EC_GROUP *pEVar5;
   undefined8 uVar6;
   undefined8 uVar7;
   BN_CTX *ctx;
   long lVar8;
   EC_POINT *pEVar9;
   size_t sVar10;
   BIGNUM *pBVar11;
   EC_POINT *pEVar12;
   long lVar13;
   long lVar14;
   long lVar15;
   BIGNUM *pBVar16;
   undefined *puVar17;
   int iVar18;
   long in_FS_OFFSET;
   bool bVar19;
   BIGNUM *local_88;
   undefined4 local_5c;
   undefined4 local_58;
   undefined4 local_54;
   void *local_50;
   void *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = (void*)0x0;
   local_48 = (void*)0x0;
   pEVar5 = EC_KEY_get0_group(param_1);
   if (pEVar5 == (EC_GROUP*)0x0) {
      ERR_new();
      ERR_set_debug("providers/implementations/keymgmt/ec_kmgmt.c", 0x28c, "common_get_params");
      ERR_set_error(0x39, 0xb1, 0);
   }
 else {
      uVar6 = ossl_ec_key_get_libctx(param_1);
      uVar7 = ossl_ec_key_get0_propq(param_1);
      ctx = (BN_CTX*)BN_CTX_new_ex(uVar6);
      if (ctx != (BN_CTX*)0x0) {
         BN_CTX_start(ctx);
         lVar8 = OSSL_PARAM_locate(param_2, "max-size");
         if (lVar8 == 0) {
            LAB_001010e3:lVar8 = OSSL_PARAM_locate(param_2, &_LC22);
            if (lVar8 != 0) {
               uVar2 = EC_GROUP_order_bits(pEVar5);
               iVar1 = OSSL_PARAM_set_int(lVar8, uVar2);
               if (iVar1 == 0) goto LAB_001014ff;
            }

            lVar8 = OSSL_PARAM_locate(param_2, "security-bits");
            if (lVar8 != 0) {
               iVar1 = EC_GROUP_order_bits(pEVar5);
               iVar18 = 0x100;
               if (( ( ( iVar1 < 0x200 ) && ( iVar18 = 0xc0 ),iVar1 < 0x180 ) ) && ( iVar18 = iVar1 < 0x100 )) {
                  iVar18 = iVar1 / 2;
               }

               iVar1 = OSSL_PARAM_set_int(lVar8, iVar18);
               if (iVar1 == 0) goto LAB_001014ff;
            }

            lVar8 = OSSL_PARAM_locate(param_2, "decoded-from-explicit");
            if (( lVar8 != 0 ) && ( ( iVar1 = EC_KEY_decoded_from_explicit_params(param_1) ),iVar1 < 0 || ( iVar1 = iVar1 == 0 ) )) goto LAB_001014ff;
            if (param_3 == 0) {
               lVar8 = OSSL_PARAM_locate(param_2, "default-digest");
               if (( lVar8 != 0 ) && ( iVar1 = iVar1 == 0 )) goto LAB_001014ff;
               lVar8 = OSSL_PARAM_locate(param_2, "use-cofactor-flag");
               if (lVar8 != 0) {
                  uVar3 = EC_KEY_get_flags(param_1);
                  iVar1 = OSSL_PARAM_set_int(lVar8, uVar3 >> 0xc & 1);
                  goto joined_r0x001014f9;
               }

            }
 else {
               lVar8 = OSSL_PARAM_locate(param_2, "default-digest");
               if (lVar8 != 0) {
                  iVar1 = OSSL_PARAM_set_utf8_string(lVar8, &_LC27);
                  joined_r0x001014f9:if (iVar1 == 0) goto LAB_001014ff;
               }

            }

            lVar8 = OSSL_PARAM_locate(param_2, "encoded-pub-key");
            if (lVar8 != 0) {
               pEVar9 = EC_KEY_get0_public_key(param_1);
               if (pEVar9 == (EC_POINT*)0x0) {
                  ERR_new();
                  ERR_set_debug("providers/implementations/keymgmt/ec_kmgmt.c", 0x2ea, "common_get_params");
                  ERR_set_error(0x39, 0xdc, 0);
               }
 else {
                  sVar10 = EC_POINT_point2oct(pEVar5, pEVar9, POINT_CONVERSION_UNCOMPRESSED, *(uchar**)( lVar8 + 0x10 ), *(size_t*)( lVar8 + 0x18 ), ctx);
                  *(size_t*)( lVar8 + 0x20 ) = sVar10;
                  if (sVar10 != 0) goto LAB_00101290;
               }

               goto LAB_001014ff;
            }

            LAB_00101290:local_5c = 0;
            local_58 = 0;
            local_54 = 0;
            iVar1 = EC_GROUP_get_field_type(pEVar5);
            if (iVar1 == 0x197) {
               iVar1 = EC_GROUP_get_basis_type(pEVar5);
               if (iVar1 == 0x2aa) {
                  local_88 = (BIGNUM*)0x1023f8;
               }
 else {
                  if (iVar1 != 0x2ab) goto LAB_001014ff;
                  local_88 = (BIGNUM*)0x102400;
               }

               iVar18 = EC_GROUP_get_degree(pEVar5);
               iVar18 = ossl_param_build_set_int(0, param_2, &_LC28, iVar18);
               if (( iVar18 != 0 ) && ( iVar18 = ossl_param_build_set_utf8_string(0, param_2, "basis-type", local_88) ),iVar18 != 0) {
                  if (iVar1 == 0x2aa) {
                     iVar1 = EC_GROUP_get_trinomial_basis(pEVar5, &local_5c);
                     if (iVar1 != 0) {
                        puVar17 = &_LC30;
                        uVar2 = local_5c;
                        goto LAB_00101623;
                     }

                  }
 else {
                     iVar1 = EC_GROUP_get_pentanomial_basis(pEVar5, &local_5c, &local_58, &local_54);
                     if (( ( iVar1 != 0 ) && ( iVar1 = ossl_param_build_set_int(0, param_2, &_LC31, local_5c) ),iVar1 != 0 )) {
                        puVar17 = &_LC33;
                        uVar2 = local_54;
                        LAB_00101623:iVar1 = ossl_param_build_set_int(0, param_2, puVar17, uVar2);
                        if (iVar1 != 0) goto LAB_001012bb;
                     }

                  }

               }

               goto LAB_001014ff;
            }

            LAB_001012bb:iVar1 = ossl_ec_group_todata(pEVar5, 0, param_2, uVar6, uVar7, ctx, &local_48);
            if (( ( iVar1 == 0 ) || ( param_1 == (EC_KEY*)0x0 ) ) || ( pEVar5 = EC_KEY_get0_group(param_1) ),pEVar5 == (EC_GROUP*)0x0) goto LAB_001014ff;
            pBVar11 = EC_KEY_get0_private_key(param_1);
            pEVar12 = EC_KEY_get0_public_key(param_1);
            pEVar9 = pEVar12;
            if (pEVar12 != (EC_POINT*)0x0) {
               ossl_ec_key_get_libctx(param_1);
               pEVar9 = (EC_POINT*)BN_CTX_new_ex();
               if (pEVar9 == (EC_POINT*)0x0) {
                  BN_CTX_free((BN_CTX*)0x0);
                  goto LAB_001014ff;
               }

               lVar8 = OSSL_PARAM_locate(param_2, &_LC34);
               lVar13 = OSSL_PARAM_locate(param_2, &_LC35);
               lVar14 = OSSL_PARAM_locate(param_2, &_LC36);
               if (lVar8 != 0) {
                  pVar4 = EC_KEY_get_conv_form(param_1);
                  lVar15 = EC_POINT_point2buf(pEVar5, pEVar12, pVar4, &local_50, pEVar9);
                  if (( lVar15 != 0 ) && ( iVar1 = ossl_param_build_set_octet_string(0, lVar8, &_LC34, local_50, lVar15) ),iVar1 != 0) goto LAB_00101385;
                  goto LAB_00101753;
               }

               LAB_00101385:if (lVar14 == 0 && lVar13 == 0) goto LAB_0010139b;
               if (lVar13 == 0) {
                  local_88 = (BIGNUM*)0x0;
                  LAB_001017ae:pBVar16 = BN_CTX_get((BN_CTX*)pEVar9);
                  if (( pBVar16 != (BIGNUM*)0x0 ) && ( iVar1 = EC_POINT_get_affine_coordinates(pEVar5, pEVar12, local_88, pBVar16, pEVar9) ),iVar1 != 0) {
                     if (lVar13 != 0) {
                        iVar1 = ossl_param_build_set_bn(0, lVar13, &_LC35, local_88);
                        if (iVar1 == 0) goto LAB_00101753;
                        if (lVar14 == 0) goto LAB_0010139b;
                     }

                     iVar1 = ossl_param_build_set_bn(0, lVar14, &_LC36, pBVar16);
                     joined_r0x00101802:if (iVar1 != 0) goto LAB_0010139b;
                  }

               }
 else {
                  local_88 = BN_CTX_get((BN_CTX*)pEVar9);
                  if (local_88 != (BIGNUM*)0x0) {
                     if (lVar14 != 0) goto LAB_001017ae;
                     iVar1 = EC_POINT_get_affine_coordinates(pEVar5, pEVar12, local_88, 0, pEVar9);
                     if (iVar1 == 0) goto LAB_00101753;
                     iVar1 = ossl_param_build_set_bn(0, lVar13, &_LC35, local_88);
                     goto joined_r0x00101802;
                  }

               }

               LAB_00101753:BN_CTX_free((BN_CTX*)pEVar9);
               goto LAB_001014ff;
            }

            LAB_0010139b:if (pBVar11 != (BIGNUM*)0x0) {
               iVar1 = EC_GROUP_order_bits(pEVar5);
               if (iVar1 < 1) {
                  BN_CTX_free((BN_CTX*)pEVar9);
               }
 else {
                  iVar1 = ossl_param_build_set_bn_pad(0, param_2, &_LC37, pBVar11, (long)( iVar1 + 7 >> 3 ));
                  BN_CTX_free((BN_CTX*)pEVar9);
                  if (iVar1 != 0) goto LAB_001013af;
               }

               goto LAB_001014ff;
            }

            BN_CTX_free((BN_CTX*)pEVar9);
            LAB_001013af:pVar4 = EC_KEY_get_conv_form(param_1);
            lVar8 = ossl_ec_pt_format_id2name(pVar4);
            if (( lVar8 != 0 ) && ( iVar1 = ossl_param_build_set_utf8_string(0, param_2, "point-format", lVar8) ),iVar1 == 0) goto LAB_001014ff;
            uVar3 = EC_KEY_get_flags(param_1);
            lVar8 = ossl_ec_check_group_type_id2name(uVar3 & 0x6000);
            if (( ( lVar8 != 0 ) && ( iVar1 = ossl_param_build_set_utf8_string(0, param_2, "group-check", lVar8) ),iVar1 == 0 )) goto LAB_001014ff;
            uVar3 = EC_KEY_get_flags(param_1);
            iVar1 = ossl_param_build_set_int(0, param_2, "use-cofactor-flag", uVar3 >> 0xc & 1);
            bVar19 = iVar1 != 0;
         }
 else {
            iVar1 = ECDSA_size(param_1);
            iVar1 = OSSL_PARAM_set_int(lVar8, iVar1);
            if (iVar1 != 0) goto LAB_001010e3;
            LAB_001014ff:bVar19 = false;
         }

         CRYPTO_free(local_48);
         CRYPTO_free(local_50);
         BN_CTX_end(ctx);
         BN_CTX_free(ctx);
         goto LAB_001014a3;
      }

   }

   bVar19 = false;
   LAB_001014a3:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return bVar19;
}
void ec_get_params(undefined8 param_1, undefined8 param_2) {
   common_get_params(param_1, param_2, 0);
   return;
}
void sm2_get_params(undefined8 param_1, undefined8 param_2) {
   common_get_params(param_1, param_2, 1);
   return;
}
void ec_gen_cleanup_part_0(void *param_1) {
   CRYPTO_clear_free(*(undefined8*)( (long)param_1 + 0x88 ), *(undefined8*)( (long)param_1 + 0x90 ), "providers/implementations/keymgmt/ec_kmgmt.c", 0x578);
   EC_GROUP_free(*(EC_GROUP**)( (long)param_1 + 0x80 ));
   for (int i = 0; i < 5; i++) {
      BN_free(*(BIGNUM**)( (long)param_1 + ( 8*i + 48 ) ));
   }

   CRYPTO_free(*(void**)( (long)param_1 + 8 ));
   CRYPTO_free(*(void**)( (long)param_1 + 0x28 ));
   CRYPTO_free(*(void**)( (long)param_1 + 0x18 ));
   CRYPTO_free(*(void**)( (long)param_1 + 0x10 ));
   CRYPTO_free(*(void**)( (long)param_1 + 0x60 ));
   CRYPTO_free(*(void**)( (long)param_1 + 0x58 ));
   CRYPTO_free(param_1);
   return;
}
void ec_gen_cleanup(long param_1) {
   if (param_1 != 0) {
      ec_gen_cleanup_part_0();
      return;
   }

   return;
}
EC_KEY *sm2_gen(undefined8 *param_1) {
   byte bVar1;
   EC_GROUP *group;
   int iVar2;
   point_conversion_form_t form;
   EC_KEY *key;
   if (param_1 == (undefined8*)0x0) {
      return (EC_KEY*)0x0;
   }

   key = (EC_KEY*)EC_KEY_new_ex(*param_1, 0);
   if (key == (EC_KEY*)0x0) {
      return (EC_KEY*)0x0;
   }

   if ((EC_GROUP*)param_1[0x10] == (EC_GROUP*)0x0) {
      iVar2 = ec_gen_set_group_from_params(param_1);
      if (iVar2 == 0) goto LAB_00101a30;
      group = (EC_GROUP*)param_1[0x10];
      joined_r0x00101a86:if (group == (EC_GROUP*)0x0) {
         ERR_new();
         ERR_set_debug("providers/implementations/keymgmt/ec_kmgmt.c", 0x4f3, "ec_gen_assign_group");
         ERR_set_error(0x39, 0xb1, 0);
         EC_KEY_free(key);
         return (EC_KEY*)0x0;
      }

      iVar2 = EC_KEY_set_group(key, group);
      bVar1 = *(byte*)( param_1 + 0xf );
   }
 else {
      if (param_1[2] != 0) {
         iVar2 = ossl_ec_encoding_name2id();
         if (iVar2 < 0) goto LAB_00101a30;
         EC_GROUP_set_asn1_flag((EC_GROUP*)param_1[0x10], iVar2);
         if (param_1[3] != 0) goto LAB_001019e9;
         LAB_00101a00:group = (EC_GROUP*)param_1[0x10];
         goto joined_r0x00101a86;
      }

      if (param_1[3] != 0) {
         LAB_001019e9:form = ossl_ec_pt_format_name2id();
         if ((int)form < 0) goto LAB_00101a30;
         EC_GROUP_set_point_conversion_form((EC_GROUP*)param_1[0x10], form);
         goto LAB_00101a00;
      }

      iVar2 = EC_KEY_set_group(key, (EC_GROUP*)param_1[0x10]);
      bVar1 = *(byte*)( param_1 + 0xf );
   }

   if (( bVar1 & 3 ) == 0) {
      if (0 < iVar2) {
         return key;
      }

   }
 else if (( 0 < iVar2 ) && ( iVar2 = iVar2 != 0 )) {
      return key;
   }

   LAB_00101a30:EC_KEY_free(key);
   return (EC_KEY*)0x0;
}
EC_KEY *sm2_load(undefined8 *param_1, long param_2) {
   EC_KEY *key;
   int iVar1;
   EC_GROUP *group;
   iVar1 = ossl_prov_is_running();
   if (( iVar1 != 0 ) && ( param_2 == 8 )) {
      key = (EC_KEY*)*param_1;
      group = EC_KEY_get0_group(key);
      if (group != (EC_GROUP*)0x0) {
         iVar1 = EC_GROUP_get_curve_name(group);
         if (iVar1 == 0x494) {
            *param_1 = 0;
            return key;
         }

      }

   }

   return (EC_KEY*)0x0;
}
EC_KEY *ec_load(undefined8 *param_1, long param_2) {
   EC_KEY *key;
   int iVar1;
   EC_GROUP *group;
   iVar1 = ossl_prov_is_running();
   if (( iVar1 != 0 ) && ( param_2 == 8 )) {
      key = (EC_KEY*)*param_1;
      group = EC_KEY_get0_group(key);
      if (group != (EC_GROUP*)0x0) {
         iVar1 = EC_GROUP_get_curve_name(group);
         if (iVar1 != 0x494) {
            *param_1 = 0;
            return key;
         }

      }

   }

   return (EC_KEY*)0x0;
}
EC_KEY *ec_gen(undefined8 *param_1) {
   int iVar1;
   point_conversion_form_t form;
   EC_KEY *key;
   EC_GROUP *group;
   iVar1 = ossl_prov_is_running();
   if (param_1 == (undefined8*)0x0) {
      return (EC_KEY*)0x0;
   }

   if (iVar1 == 0) {
      return (EC_KEY*)0x0;
   }

   key = (EC_KEY*)EC_KEY_new_ex(*param_1, 0);
   if (key == (EC_KEY*)0x0) {
      return (EC_KEY*)0x0;
   }

   group = (EC_GROUP*)param_1[0x10];
   if (group == (EC_GROUP*)0x0) {
      iVar1 = ec_gen_set_group_from_params(param_1);
      if (iVar1 == 0) goto LAB_00101c88;
      LAB_00101c3d:group = (EC_GROUP*)param_1[0x10];
      if (group == (EC_GROUP*)0x0) {
         ERR_new();
         ERR_set_debug("providers/implementations/keymgmt/ec_kmgmt.c", 0x4f3, "ec_gen_assign_group");
         ERR_set_error(0x39, 0xb1, 0);
         goto LAB_00101c88;
      }

   }
 else {
      if (param_1[2] != 0) {
         iVar1 = ossl_ec_encoding_name2id();
         if (iVar1 < 0) goto LAB_00101c88;
         EC_GROUP_set_asn1_flag((EC_GROUP*)param_1[0x10], iVar1);
         if (param_1[3] != 0) {
            form = ossl_ec_pt_format_name2id();
            goto joined_r0x00101cb2;
         }

         goto LAB_00101c3d;
      }

      if (param_1[3] != 0) {
         form = ossl_ec_pt_format_name2id();
         joined_r0x00101cb2:if ((int)form < 0) goto LAB_00101c88;
         EC_GROUP_set_point_conversion_form((EC_GROUP*)param_1[0x10], form);
         goto LAB_00101c3d;
      }

   }

   iVar1 = EC_KEY_set_group(key, group);
   if (( *(byte*)( param_1 + 0xf ) & 3 ) == 0) {
      if (*(int*)( (long)param_1 + 0x7c ) != -1) {
         if (iVar1 < 1) goto LAB_00101c88;
         LAB_00101ccc:iVar1 = ossl_ec_set_ecdh_cofactor_mode(key);
         if (iVar1 == 0) goto LAB_00101c88;
         goto LAB_00101cd8;
      }

      if (param_1[4] == 0) {
         if (0 < iVar1) {
            return key;
         }

         goto LAB_00101c88;
      }

      if (iVar1 < 1) goto LAB_00101c88;
   }
 else {
      if (( param_1[0x11] == 0 ) || ( param_1[0x12] == 0 )) {
         if (iVar1 < 1) goto LAB_00101c88;
         iVar1 = EC_KEY_generate_key(key);
      }
 else {
         if (iVar1 < 1) goto LAB_00101c88;
         iVar1 = ossl_ec_generate_key_dhkem(key);
      }

      if (iVar1 == 0) goto LAB_00101c88;
      if (*(int*)( (long)param_1 + 0x7c ) != -1) goto LAB_00101ccc;
      LAB_00101cd8:if (param_1[4] == 0) {
         return key;
      }

   }

   iVar1 = ossl_ec_set_check_group_type_from_name(key);
   if (iVar1 != 0) {
      return key;
   }

   LAB_00101c88:EC_KEY_free(key);
   return (EC_KEY*)0x0;
}
undefined8 ec_export_types(uint param_1) {
   uint uVar1;
   uVar1 = param_1 & 7;
   if (( param_1 & 0x80 ) != 0) {
      uVar1 = ( param_1 & 7 ) + 8;
   }

   return *(undefined8*)( ec_types + (long)(int)uVar1 * 8 );
}
undefined8 *sm2_gen_init(undefined8 param_1, uint param_2, undefined8 param_3) {
   int iVar1;
   undefined8 uVar2;
   undefined8 *ptr;
   char *pcVar3;
   uVar2 = ossl_prov_ctx_get0_libctx();
   iVar1 = ossl_prov_is_running();
   if (( ( iVar1 != 0 ) && ( ( param_2 & 0x87 ) != 0 ) ) && ( ptr = (undefined8*)CRYPTO_zalloc(0x98, "providers/implementations/keymgmt/ec_kmgmt.c", 0x3f0) ),ptr != (undefined8*)0x0) {
      *ptr = uVar2;
      *(uint*)( ptr + 0xf ) = param_2;
      *(undefined4*)( (long)ptr + 0x7c ) = 0;
      iVar1 = ec_gen_set_params(ptr, param_3);
      if (iVar1 == 0) {
         CRYPTO_free(ptr);
      }
 else {
         if (ptr[1] != 0) {
            return ptr;
         }

         pcVar3 = CRYPTO_strdup("sm2", "providers/implementations/keymgmt/ec_kmgmt.c", 0x407);
         ptr[1] = pcVar3;
         if (pcVar3 != (char*)0x0) {
            return ptr;
         }

         ec_gen_cleanup_part_0(ptr);
      }

   }

   return (undefined8*)0x0;
}
bool sm2_import(EC_KEY *param_1, uint param_2, undefined8 param_3) {
   int iVar1;
   int iVar2;
   EC_GROUP *group;
   iVar1 = ossl_prov_is_running();
   if (( ( param_1 != (EC_KEY*)0x0 ) && ( iVar1 != 0 ) ) && ( ( param_2 & 4 ) != 0 )) {
      iVar1 = ossl_ec_group_fromdata(param_1, param_3);
      group = EC_KEY_get0_group(param_1);
      if (( group != (EC_GROUP*)0x0 ) && ( iVar2 = iVar2 == 0x494 )) {
         if (( param_2 & 3 ) == 0) {
            if (( param_2 & 0x80 ) == 0) {
               return iVar1 != 0;
            }

            if (iVar1 != 0) goto LAB_00101f71;
         }
 else if (( iVar1 != 0 ) && ( iVar1 = ossl_ec_key_fromdata(param_1, param_3, param_2 & 1) ),iVar1 != 0) {
            if (( param_2 & 0x80 ) == 0) {
               return true;
            }

            LAB_00101f71:iVar1 = ossl_ec_key_otherparams_fromdata(param_1, param_3);
            return iVar1 != 0;
         }

      }

   }

   return false;
}
undefined4 ec_export(EC_KEY *param_1, uint param_2, code *param_3, undefined8 param_4) {
   int iVar1;
   point_conversion_form_t pVar2;
   uint uVar3;
   undefined4 uVar4;
   long lVar5;
   undefined8 uVar6;
   BN_CTX *ctx;
   undefined8 uVar7;
   EC_GROUP *pEVar8;
   BIGNUM *pBVar9;
   EC_POINT *pEVar10;
   EC_POINT *c;
   long lVar11;
   long in_FS_OFFSET;
   void *local_50;
   void *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = (void*)0x0;
   local_48 = (void*)0x0;
   iVar1 = ossl_prov_is_running();
   if (( ( ( iVar1 == 0 ) || ( param_1 == (EC_KEY*)0x0 ) ) || ( ( param_2 & 4 ) == 0 ) ) || ( ( ( param_2 & 3 ) == 1 || ( lVar5 = OSSL_PARAM_BLD_new() ),lVar5 == 0 ) )) {
      uVar4 = 0;
      goto LAB_00102302;
   }

   uVar6 = ossl_ec_key_get_libctx(param_1);
   ctx = (BN_CTX*)BN_CTX_new_ex(uVar6);
   uVar4 = 0;
   if (ctx != (BN_CTX*)0x0) {
      BN_CTX_start(ctx);
      uVar6 = ossl_ec_key_get0_propq(param_1);
      uVar7 = ossl_ec_key_get_libctx(param_1);
      pEVar8 = EC_KEY_get0_group(param_1);
      iVar1 = ossl_ec_group_todata(pEVar8, lVar5, 0, uVar7, uVar6, ctx, &local_48);
      if (iVar1 != 0) {
         if (( param_2 & 3 ) != 0) {
            pEVar8 = EC_KEY_get0_group(param_1);
            if (pEVar8 == (EC_GROUP*)0x0) goto LAB_00102330;
            pBVar9 = EC_KEY_get0_private_key(param_1);
            pEVar10 = EC_KEY_get0_public_key(param_1);
            c = pEVar10;
            if (pEVar10 != (EC_POINT*)0x0) {
               ossl_ec_key_get_libctx(param_1);
               c = (EC_POINT*)BN_CTX_new_ex();
               if (c != (EC_POINT*)0x0) {
                  pVar2 = EC_KEY_get_conv_form(param_1);
                  lVar11 = EC_POINT_point2buf(pEVar8, pEVar10, pVar2, &local_50, c);
                  if (( lVar11 == 0 ) || ( iVar1 = ossl_param_build_set_octet_string(lVar5, 0, &_LC34, local_50, lVar11) ),iVar1 == 0) {
                     BN_CTX_free((BN_CTX*)c);
                     goto LAB_00102330;
                  }

                  goto LAB_00102162;
               }

               c = (EC_POINT*)0x0;
               LAB_00102346:BN_CTX_free((BN_CTX*)c);
               uVar4 = 0;
               goto LAB_001022b4;
            }

            LAB_00102162:if (( pBVar9 == (BIGNUM*)0x0 ) || ( ( param_2 & 1 ) == 0 )) {
               BN_CTX_free((BN_CTX*)c);
            }
 else {
               iVar1 = EC_GROUP_order_bits(pEVar8);
               if (iVar1 < 1) {
                  BN_CTX_free((BN_CTX*)c);
                  uVar4 = 0;
                  goto LAB_001022b4;
               }

               iVar1 = ossl_param_build_set_bn_pad(lVar5, 0, &_LC37, pBVar9, (long)( iVar1 + 7 >> 3 ));
               if (iVar1 == 0) goto LAB_00102346;
               BN_CTX_free((BN_CTX*)c);
            }

         }

         if (( param_2 & 0x80 ) == 0) {
            LAB_00102289:lVar11 = OSSL_PARAM_BLD_to_param(lVar5);
            if (lVar11 != 0) {
               uVar4 = ( *param_3 )(lVar11, param_4);
               OSSL_PARAM_free(lVar11);
               goto LAB_001022b4;
            }

         }
 else {
            pVar2 = EC_KEY_get_conv_form(param_1);
            lVar11 = ossl_ec_pt_format_id2name(pVar2);
            if (( lVar11 == 0 ) || ( iVar1 = ossl_param_build_set_utf8_string(lVar5, 0, "point-format", lVar11) ),iVar1 != 0) {
               uVar3 = EC_KEY_get_flags(param_1);
               lVar11 = ossl_ec_check_group_type_id2name(uVar3 & 0x6000);
               if (( ( lVar11 == 0 ) || ( iVar1 = ossl_param_build_set_utf8_string(lVar5, 0, "group-check", lVar11) ),iVar1 != 0 )) {
                  uVar3 = EC_KEY_get_flags(param_1);
                  iVar1 = ossl_param_build_set_int(lVar5, 0, "use-cofactor-flag", uVar3 >> 0xc & 1);
                  if (iVar1 != 0) goto LAB_00102289;
               }

            }

         }

      }

      LAB_00102330:uVar4 = 0;
   }

   LAB_001022b4:OSSL_PARAM_BLD_free(lVar5);
   CRYPTO_free(local_50);
   CRYPTO_free(local_48);
   BN_CTX_end(ctx);
   BN_CTX_free(ctx);
   LAB_00102302:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar4;
}

