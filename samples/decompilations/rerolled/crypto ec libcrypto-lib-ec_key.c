/* WARNING: Unknown calling convention -- yet parameter storage is locked */EC_KEY *EC_KEY_new(void) {
   EC_KEY *pEVar1;
   pEVar1 = (EC_KEY*)ossl_ec_key_new_method_int(0, 0, 0);
   return pEVar1;
}void EC_KEY_new_ex(undefined8 param_1, undefined8 param_2) {
   ossl_ec_key_new_method_int(param_1, param_2, 0);
   return;
}void EC_KEY_free(EC_KEY *key) {
   EC_KEY *pEVar1;
   int iVar2;
   code *pcVar3;
   if (key == (EC_KEY*)0x0) {
      return;
   }
   LOCK();
   pEVar1 = key + 0x38;
   iVar2 = *(int*)pEVar1;
   *(int*)pEVar1 = *(int*)pEVar1 + -1;
   UNLOCK();
   if (( iVar2 != 1 ) && ( 0 < iVar2 + -1 )) {
      return;
   }
   if (( *(long*)key != 0 ) && ( pcVar3 = *(code**)( *(long*)key + 0x18 ) ),pcVar3 != (code*)0x0) {
      ( *pcVar3 )(key);
   }
   ENGINE_finish(*(ENGINE**)( key + 8 ));
   if (( *(long**)( key + 0x18 ) != (long*)0x0 ) && ( pcVar3 = *(code**)( **(long**)( key + 0x18 ) + 0x168 ) ),pcVar3 != (code*)0x0) {
      ( *pcVar3 )(key);
   }
   CRYPTO_free_ex_data(8, key, (CRYPTO_EX_DATA*)( key + 0x40 ));
   EC_GROUP_free(*(EC_GROUP**)( key + 0x18 ));
   EC_POINT_free(*(EC_POINT**)( key + 0x20 ));
   BN_clear_free(*(BIGNUM**)( key + 0x28 ));
   CRYPTO_free(*(void**)( key + 0x58 ));
   CRYPTO_clear_free(key, 0x68, "crypto/ec/ec_key.c", 0x67);
   return;
}EC_KEY *EC_KEY_new_by_curve_name_ex(undefined8 param_1, undefined8 param_2, undefined4 param_3) {
   int iVar1;
   EC_KEY *key;
   long lVar2;
   key = (EC_KEY*)EC_KEY_new_ex();
   if (key != (EC_KEY*)0x0) {
      lVar2 = EC_GROUP_new_by_curve_name_ex(param_1, param_2, param_3);
      *(long*)( key + 0x18 ) = lVar2;
      if (lVar2 != 0) {
         if (*(code**)( *(long*)key + 0x28 ) == (code*)0x0) {
            return key;
         }
         iVar1 = ( **(code**)( *(long*)key + 0x28 ) )(key, lVar2);
         if (iVar1 != 0) {
            return key;
         }
      }
      EC_KEY_free(key);
   }
   return (EC_KEY*)0x0;
}EC_KEY *EC_KEY_new_by_curve_name(int nid) {
   EC_KEY *pEVar1;
   pEVar1 = (EC_KEY*)EC_KEY_new_by_curve_name_ex(0, 0, nid);
   return pEVar1;
}EC_KEY *EC_KEY_copy(EC_KEY *dst, EC_KEY *src) {
   code *pcVar1;
   int iVar2;
   EC_GROUP *dst_00;
   EC_POINT *dst_01;
   BIGNUM *pBVar3;
   BIGNUM *a;
   long lVar4;
   long lVar5;
   undefined8 uVar6;
   if (( dst == (EC_KEY*)0x0 ) || ( src == (EC_KEY*)0x0 )) {
      ERR_new();
      ERR_set_debug("crypto/ec/ec_key.c", 0x6d, "EC_KEY_copy");
      ERR_set_error(0x10, 0xc0102, 0);
      return (EC_KEY*)0x0;
   }
   if (*(long*)src != *(long*)dst) {
      pcVar1 = *(code**)( *(long*)dst + 0x18 );
      if (pcVar1 != (code*)0x0) {
         ( *pcVar1 )();
      }
      if (( *(long**)( dst + 0x18 ) != (long*)0x0 ) && ( pcVar1 = *(code**)( **(long**)( dst + 0x18 ) + 0x168 ) ),pcVar1 != (code*)0x0) {
         ( *pcVar1 )(dst);
      }
      iVar2 = ENGINE_finish(*(ENGINE**)( dst + 8 ));
      if (iVar2 == 0) {
         return (EC_KEY*)0x0;
      }
      *(undefined8*)( dst + 8 ) = 0;
   }
   lVar5 = *(long*)( src + 0x18 );
   *(undefined8*)( dst + 0x50 ) = *(undefined8*)( src + 0x50 );
   if (lVar5 != 0) {
      EC_GROUP_free(*(EC_GROUP**)( dst + 0x18 ));
      dst_00 = (EC_GROUP*)ossl_ec_group_new_ex(*(undefined8*)( src + 0x50 ), *(undefined8*)( src + 0x58 ), **(undefined8**)( src + 0x18 ));
      *(EC_GROUP**)( dst + 0x18 ) = dst_00;
      if (dst_00 == (EC_GROUP*)0x0) {
         return (EC_KEY*)0x0;
      }
      iVar2 = EC_GROUP_copy(dst_00, *(EC_GROUP**)( src + 0x18 ));
      if (iVar2 == 0) {
         return (EC_KEY*)0x0;
      }
      if (*(long*)( src + 0x20 ) != 0) {
         EC_POINT_free(*(EC_POINT**)( dst + 0x20 ));
         dst_01 = EC_POINT_new(*(EC_GROUP**)( src + 0x18 ));
         *(EC_POINT**)( dst + 0x20 ) = dst_01;
         if (dst_01 == (EC_POINT*)0x0) {
            return (EC_KEY*)0x0;
         }
         iVar2 = EC_POINT_copy(dst_01, *(EC_POINT**)( src + 0x20 ));
         if (iVar2 == 0) {
            return (EC_KEY*)0x0;
         }
      }
      pBVar3 = *(BIGNUM**)( src + 0x28 );
      if (pBVar3 != (BIGNUM*)0x0) {
         a = *(BIGNUM**)( dst + 0x28 );
         if (a == (BIGNUM*)0x0) {
            a = BN_new();
            *(BIGNUM**)( dst + 0x28 ) = a;
            if (a == (BIGNUM*)0x0) {
               return (EC_KEY*)0x0;
            }
            pBVar3 = *(BIGNUM**)( src + 0x28 );
         }
         pBVar3 = BN_copy(a, pBVar3);
         if (pBVar3 == (BIGNUM*)0x0) {
            return (EC_KEY*)0x0;
         }
         if (( *(code**)( **(long**)( src + 0x18 ) + 0x160 ) != (code*)0x0 ) && ( iVar2 = ( **(code**)( **(long**)( src + 0x18 ) + 0x160 ) )(dst, src) ),iVar2 == 0) {
            return (EC_KEY*)0x0;
         }
      }
   }
   *(undefined8*)( dst + 0x30 ) = *(undefined8*)( src + 0x30 );
   *(undefined4*)( dst + 0x10 ) = *(undefined4*)( src + 0x10 );
   *(undefined4*)( dst + 0x3c ) = *(undefined4*)( src + 0x3c );
   iVar2 = CRYPTO_dup_ex_data(8, (CRYPTO_EX_DATA*)( dst + 0x40 ), (CRYPTO_EX_DATA*)( src + 0x40 ));
   if (iVar2 == 0) {
      return (EC_KEY*)0x0;
   }
   lVar5 = *(long*)src;
   lVar4 = *(long*)dst;
   if (lVar5 != lVar4) {
      uVar6 = 0;
      if (*(ENGINE**)( src + 8 ) != (ENGINE*)0x0) {
         iVar2 = ENGINE_init(*(ENGINE**)( src + 8 ));
         if (iVar2 == 0) {
            return (EC_KEY*)0x0;
         }
         lVar5 = *(long*)src;
         uVar6 = *(undefined8*)( src + 8 );
      }
      *(long*)dst = lVar5;
      *(undefined8*)( dst + 8 ) = uVar6;
      lVar4 = *(long*)src;
   }
   if (( *(code**)( lVar4 + 0x20 ) != (code*)0x0 ) && ( iVar2 = iVar2 == 0 )) {
      return (EC_KEY*)0x0;
   }
   *(long*)( dst + 0x60 ) = *(long*)( dst + 0x60 ) + 1;
   return dst;
}EC_KEY *EC_KEY_dup(EC_KEY *src) {
   EC_KEY *pEVar1;
   pEVar1 = (EC_KEY*)ossl_ec_key_dup(src, 0x87);
   return pEVar1;
}int EC_KEY_up_ref(EC_KEY *key) {
   EC_KEY *pEVar1;
   int iVar2;
   LOCK();
   pEVar1 = key + 0x38;
   iVar2 = *(int*)pEVar1;
   *(int*)pEVar1 = *(int*)pEVar1 + 1;
   UNLOCK();
   return (int)( 1 < iVar2 + 1 );
}undefined8 EC_KEY_get0_engine(long param_1) {
   return *(undefined8*)( param_1 + 8 );
}int EC_KEY_generate_key(EC_KEY *key) {
   int iVar1;
   if (( key == (EC_KEY*)0x0 ) || ( *(long*)( key + 0x18 ) == 0 )) {
      ERR_new();
      ERR_set_debug("crypto/ec/ec_key.c", 0xd5, "EC_KEY_generate_key");
      ERR_set_error(0x10, 0xc0102, 0);
   } else {
      if (*(code**)( *(long*)key + 0x40 ) != (code*)0x0) {
         iVar1 = ( **(code**)( *(long*)key + 0x40 ) )();
         if (iVar1 != 1) {
            return iVar1;
         }
         *(long*)( key + 0x60 ) = *(long*)( key + 0x60 ) + 1;
         return iVar1;
      }
      ERR_new();
      ERR_set_debug("crypto/ec/ec_key.c", 0xe1, "EC_KEY_generate_key");
      ERR_set_error(0x10, 0x98, 0);
   }
   return 0;
}void ossl_ec_key_gen(long param_1) {
   int iVar1;
   iVar1 = ( **(code**)( **(long**)( param_1 + 0x18 ) + 0x148 ) )();
   if (iVar1 != 1) {
      return;
   }
   *(long*)( param_1 + 0x60 ) = *(long*)( param_1 + 0x60 ) + 1;
   return;
}int ossl_ec_key_simple_generate_public_key(long param_1) {
   int iVar1;
   BN_CTX *ctx;
   iVar1 = 0;
   ctx = (BN_CTX*)BN_CTX_new_ex(*(undefined8*)( param_1 + 0x50 ));
   if (ctx != (BN_CTX*)0x0) {
      iVar1 = EC_POINT_mul(*(EC_GROUP**)( param_1 + 0x18 ), *(EC_POINT**)( param_1 + 0x20 ), *(BIGNUM**)( param_1 + 0x28 ), (EC_POINT*)0x0, (BIGNUM*)0x0, ctx);
      BN_CTX_free(ctx);
      if (iVar1 == 1) {
         *(long*)( param_1 + 0x60 ) = *(long*)( param_1 + 0x60 ) + 1;
         return 1;
      }
   }
   return iVar1;
}undefined8 ossl_ec_generate_key_dhkem(long param_1, undefined8 param_2, undefined8 param_3) {
   int iVar1;
   EC_POINT *pEVar2;
   long lVar3;
   BIGNUM *a;
   lVar3 = *(long*)( param_1 + 0x28 );
   if (lVar3 == 0) {
      lVar3 = BN_secure_new();
      *(long*)( param_1 + 0x28 ) = lVar3;
      if (lVar3 == 0) {
         a = (BIGNUM*)0x0;
         goto LAB_001005ac;
      }
   }
   iVar1 = ossl_ec_dhkem_derive_private(param_1, lVar3, param_2, param_3);
   if (0 < iVar1) {
      if (*(long*)( param_1 + 0x20 ) == 0) {
         pEVar2 = EC_POINT_new(*(EC_GROUP**)( param_1 + 0x18 ));
         *(EC_POINT**)( param_1 + 0x20 ) = pEVar2;
         if (pEVar2 == (EC_POINT*)0x0) goto LAB_001005a8;
      }
      iVar1 = ossl_ec_key_simple_generate_public_key(param_1);
      if (iVar1 != 0) {
         return 1;
      }
   }
   LAB_001005a8:a = *(BIGNUM**)( param_1 + 0x28 );
   LAB_001005ac:BN_clear_free(a);
   *(undefined8*)( param_1 + 0x28 ) = 0;
   if (*(EC_POINT**)( param_1 + 0x20 ) != (EC_POINT*)0x0) {
      EC_POINT_set_to_infinity(*(EC_GROUP**)( param_1 + 0x18 ), *(EC_POINT**)( param_1 + 0x20 ));
   }
   return 0;
}int EC_KEY_check_key(EC_KEY *key) {
   code *UNRECOVERED_JUMPTABLE;
   int iVar1;
   if (( ( key == (EC_KEY*)0x0 ) || ( *(long**)( key + 0x18 ) == (long*)0x0 ) ) || ( *(long*)( key + 0x20 ) == 0 )) {
      ERR_new();
      ERR_set_debug("crypto/ec/ec_key.c", 0x1d8, "EC_KEY_check_key");
      ERR_set_error(0x10, 0xc0102, 0);
   } else {
      UNRECOVERED_JUMPTABLE = *(code**)( **(long**)( key + 0x18 ) + 0x150 );
      if (UNRECOVERED_JUMPTABLE != (code*)0x0) {
         for (int i_1307 = 0; i_1307 < 2; i_1307++) {
            /* WARNING: Could not recover jumptable at 0x00100620. Too many branches */
         }
         iVar1 = ( *UNRECOVERED_JUMPTABLE )();
         return iVar1;
      }
      ERR_new();
      ERR_set_debug("crypto/ec/ec_key.c", 0x1dd, "EC_KEY_check_key");
      ERR_set_error(0x10, 0xc0101, 0);
   }
   return 0;
}undefined8 ossl_ec_key_public_check_quick(long param_1, BN_CTX *param_2) {
   int iVar1;
   int iVar2;
   BIGNUM *a;
   BIGNUM *a_00;
   if (( ( param_1 == 0 ) || ( *(EC_GROUP**)( param_1 + 0x18 ) == (EC_GROUP*)0x0 ) ) || ( *(EC_POINT**)( param_1 + 0x20 ) == (EC_POINT*)0x0 )) {
      ERR_new();
      ERR_set_debug("crypto/ec/ec_key.c", 0x215, "ossl_ec_key_public_check_quick");
      ERR_set_error(0x10, 0xc0102, 0);
      return 0;
   }
   iVar1 = EC_POINT_is_at_infinity(*(EC_GROUP**)( param_1 + 0x18 ), *(EC_POINT**)( param_1 + 0x20 ));
   if (iVar1 != 0) {
      ERR_new();
      ERR_set_debug("crypto/ec/ec_key.c", 0x21b, "ossl_ec_key_public_check_quick");
      ERR_set_error(0x10, 0x6a, 0);
      return 0;
   }
   BN_CTX_start(param_2);
   a = BN_CTX_get(param_2);
   a_00 = BN_CTX_get(param_2);
   if (( a_00 != (BIGNUM*)0x0 ) && ( iVar1 = EC_POINT_get_affine_coordinates(*(undefined8*)( param_1 + 0x18 ), *(undefined8*)( param_1 + 0x20 ), a, a_00, param_2) ),iVar1 != 0) {
      iVar1 = EC_GROUP_get_field_type(*(undefined8*)( param_1 + 0x18 ));
      if (iVar1 == 0x196) {
         iVar1 = BN_is_negative(a);
         if (( ( iVar1 == 0 ) && ( iVar1 = BN_cmp(a, *(BIGNUM**)( *(long*)( param_1 + 0x18 ) + 0x40 )) ),iVar1 < 0 )) &&( ( iVar1 = BN_is_negative(a_00) ),iVar1 == 0 && ( iVar1 = BN_cmp(a_00, *(BIGNUM**)( *(long*)( param_1 + 0x18 ) + 0x40 )) ),iVar1 < 0 );
      } else {
         iVar1 = EC_GROUP_get_degree(*(EC_GROUP**)( param_1 + 0x18 ));
         iVar2 = BN_num_bits(a);
         if (( iVar2 <= iVar1 ) && ( iVar2 = iVar2 <= iVar1 )) {
            LAB_0010081e:BN_CTX_end(param_2);
            iVar1 = EC_POINT_is_on_curve(*(EC_GROUP**)( param_1 + 0x18 ), *(EC_POINT**)( param_1 + 0x20 ), param_2);
            if (iVar1 < 1) {
               ERR_new();
               ERR_set_debug("crypto/ec/ec_key.c", 0x227, "ossl_ec_key_public_check_quick");
               ERR_set_error(0x10, 0x6b, 0);
               return 0;
            }
            return 1;
         }
      }
   }
   BN_CTX_end(param_2);
   ERR_new();
   ERR_set_debug("crypto/ec/ec_key.c", 0x221, "ossl_ec_key_public_check_quick");
   ERR_set_error(0x10, 0x92, 0);
   return 0;
}undefined8 ossl_ec_key_public_check(long param_1, BN_CTX *param_2) {
   BIGNUM *m;
   int iVar1;
   long lVar2;
   EC_POINT *r;
   undefined8 uVar3;
   lVar2 = EC_GROUP_get0_cofactor(*(undefined8*)( param_1 + 0x18 ));
   iVar1 = ossl_ec_key_public_check_quick(param_1, param_2);
   if (iVar1 == 0) {
      return 0;
   }
   if (( lVar2 != 0 ) && ( iVar1 = iVar1 != 0 )) {
      return 1;
   }
   r = EC_POINT_new(*(EC_GROUP**)( param_1 + 0x18 ));
   if (r == (EC_POINT*)0x0) {
      return 0;
   }
   m = *(BIGNUM**)( *(long*)( param_1 + 0x18 ) + 0x10 );
   iVar1 = BN_is_zero(m);
   if (iVar1 == 0) {
      iVar1 = EC_POINT_mul(*(EC_GROUP**)( param_1 + 0x18 ), r, (BIGNUM*)0x0, *(EC_POINT**)( param_1 + 0x20 ), m, param_2);
      if (iVar1 == 0) {
         ERR_new();
         ERR_set_debug("crypto/ec/ec_key.c", 0x24b, "ossl_ec_key_public_check");
         ERR_set_error(0x10, 0x80010, 0);
      } else {
         uVar3 = 1;
         iVar1 = EC_POINT_is_at_infinity(*(EC_GROUP**)( param_1 + 0x18 ), r);
         if (iVar1 != 0) goto LAB_00100989;
         ERR_new();
         ERR_set_debug("crypto/ec/ec_key.c", 0x24f, "ossl_ec_key_public_check");
         ERR_set_error(0x10, 0x82, 0);
      }
   } else {
      ERR_new();
      ERR_set_debug("crypto/ec/ec_key.c", 0x246, "ossl_ec_key_public_check");
      ERR_set_error(0x10, 0x7a, 0);
   }
   uVar3 = 0;
   LAB_00100989:EC_POINT_free(r);
   return uVar3;
}undefined8 ossl_ec_key_private_check(long param_1) {
   int iVar1;
   BIGNUM *b;
   if (( ( param_1 == 0 ) || ( *(long*)( param_1 + 0x18 ) == 0 ) ) || ( *(long*)( param_1 + 0x28 ) == 0 )) {
      ERR_new();
      ERR_set_debug("crypto/ec/ec_key.c", 0x260, "ossl_ec_key_private_check");
      ERR_set_error(0x10, 0xc0102, 0);
   } else {
      b = BN_value_one();
      iVar1 = BN_cmp(*(BIGNUM**)( param_1 + 0x28 ), b);
      if (-1 < iVar1) {
         iVar1 = BN_cmp(*(BIGNUM**)( param_1 + 0x28 ), *(BIGNUM**)( *(long*)( param_1 + 0x18 ) + 0x10 ));
         if (iVar1 < 0) {
            return 1;
         }
      }
      ERR_new();
      ERR_set_debug("crypto/ec/ec_key.c", 0x265, "ossl_ec_key_private_check");
      ERR_set_error(0x10, 0x7b, 0);
   }
   return 0;
}undefined8 ossl_ec_key_pairwise_check(long param_1, BN_CTX *param_2) {
   int iVar1;
   EC_POINT *r;
   undefined8 uVar2;
   if (( ( ( param_1 == 0 ) || ( *(EC_GROUP**)( param_1 + 0x18 ) == (EC_GROUP*)0x0 ) ) || ( *(long*)( param_1 + 0x20 ) == 0 ) ) || ( *(long*)( param_1 + 0x28 ) == 0 )) {
      ERR_new();
      ERR_set_debug("crypto/ec/ec_key.c", 0x279, "ossl_ec_key_pairwise_check");
      ERR_set_error(0x10, 0xc0102, 0);
      return 0;
   }
   r = EC_POINT_new(*(EC_GROUP**)( param_1 + 0x18 ));
   if (r != (EC_POINT*)0x0) {
      iVar1 = EC_POINT_mul(*(EC_GROUP**)( param_1 + 0x18 ), r, *(BIGNUM**)( param_1 + 0x28 ), (EC_POINT*)0x0, (BIGNUM*)0x0, param_2);
      if (iVar1 != 0) {
         uVar2 = 1;
         iVar1 = EC_POINT_cmp(*(EC_GROUP**)( param_1 + 0x18 ), r, *(EC_POINT**)( param_1 + 0x20 ), param_2);
         if (iVar1 != 0) {
            ERR_new();
            uVar2 = 0;
            ERR_set_debug("crypto/ec/ec_key.c", 0x287, "ossl_ec_key_pairwise_check");
            ERR_set_error(0x10, 0x7b, 0);
         }
         goto LAB_00100b9b;
      }
      ERR_new();
      ERR_set_debug("crypto/ec/ec_key.c", 0x283, "ossl_ec_key_pairwise_check");
      ERR_set_error(0x10, 0x80010, 0);
   }
   uVar2 = 0;
   LAB_00100b9b:EC_POINT_free(r);
   return uVar2;
}bool ossl_ec_key_simple_check_key(long param_1) {
   int iVar1;
   BN_CTX *c;
   bool bVar2;
   if (param_1 == 0) {
      ERR_new();
      ERR_set_debug("crypto/ec/ec_key.c", 0x2a1, "ossl_ec_key_simple_check_key");
      ERR_set_error(0x10, 0xc0102, 0);
      return false;
   }
   c = (BN_CTX*)BN_CTX_new_ex(*(undefined8*)( param_1 + 0x50 ));
   if (c == (BN_CTX*)0x0) {
      return false;
   }
   iVar1 = ossl_ec_key_public_check(param_1, c);
   if (iVar1 != 0) {
      bVar2 = true;
      if (*(long*)( param_1 + 0x28 ) == 0) goto LAB_00100cdb;
      iVar1 = ossl_ec_key_private_check(param_1);
      if (iVar1 != 0) {
         iVar1 = ossl_ec_key_pairwise_check(param_1, c);
         bVar2 = iVar1 != 0;
         goto LAB_00100cdb;
      }
   }
   bVar2 = false;
   LAB_00100cdb:BN_CTX_free(c);
   return bVar2;
}undefined8 ossl_ec_key_get_libctx(long param_1) {
   return *(undefined8*)( param_1 + 0x50 );
}undefined8 ossl_ec_key_get0_propq(long param_1) {
   return *(undefined8*)( param_1 + 0x58 );
}void ossl_ec_key_set0_libctx(long param_1, undefined8 param_2) {
   *(undefined8*)( param_1 + 0x50 ) = param_2;
   return;
}EC_GROUP *EC_KEY_get0_group(EC_KEY *key) {
   return *(EC_GROUP**)( key + 0x18 );
}BIGNUM *EC_KEY_get0_private_key(EC_KEY *key) {
   return *(BIGNUM**)( key + 0x28 );
}int EC_KEY_set_private_key(EC_KEY *key, BIGNUM *prv) {
   int iVar1;
   long lVar2;
   BIGNUM *a;
   if (( ( ( ( *(long**)( key + 0x18 ) != (long*)0x0 ) && ( **(long**)( key + 0x18 ) != 0 ) ) && ( lVar2 = EC_GROUP_get0_order() ),lVar2 != 0 ) ) && ( ( iVar1 = BN_is_zero(lVar2) ),iVar1 == 0 && ( ( *(code**)( **(long**)( key + 0x18 ) + 0x140 ) == (code*)0x0 || ( iVar1 = ( **(code**)( **(long**)( key + 0x18 ) + 0x140 ) )(key, prv) ),iVar1 != 0 ) ) )) {
      if (prv == (BIGNUM*)0x0) {
         BN_clear_free(*(BIGNUM**)( key + 0x28 ));
         *(undefined8*)( key + 0x28 ) = 0;
      } else {
         a = BN_dup(prv);
         if (a != (BIGNUM*)0x0) {
            BN_set_flags(a, 4);
            iVar1 = bn_get_top(lVar2);
            lVar2 = bn_wexpand(a, iVar1 + 2);
            if (lVar2 != 0) {
               BN_clear_free(*(BIGNUM**)( key + 0x28 ));
               *(long*)( key + 0x60 ) = *(long*)( key + 0x60 ) + 1;
               *(BIGNUM**)( key + 0x28 ) = a;
               return 1;
            }
            BN_clear_free(a);
            return 0;
         }
      }
   }
   return 0;
}EC_POINT *EC_KEY_get0_public_key(EC_KEY *key) {
   return *(EC_POINT**)( key + 0x20 );
}int EC_KEY_set_public_key(EC_KEY *key, EC_POINT *pub) {
   int iVar1;
   EC_POINT *pEVar2;
   if (( *(code**)( *(long*)key + 0x38 ) != (code*)0x0 ) && ( iVar1 = iVar1 == 0 )) {
      return 0;
   }
   EC_POINT_free(*(EC_POINT**)( key + 0x20 ));
   pEVar2 = EC_POINT_dup(pub, *(EC_GROUP**)( key + 0x18 ));
   *(long*)( key + 0x60 ) = *(long*)( key + 0x60 ) + 1;
   *(EC_POINT**)( key + 0x20 ) = pEVar2;
   return ( uint )(pEVar2 != (EC_POINT*)0x0);
}int EC_KEY_set_public_key_affine_coordinates(EC_KEY *key, BIGNUM *x, BIGNUM *y) {
   int iVar1;
   uint uVar2;
   BN_CTX *ctx;
   EC_POINT *pub;
   BIGNUM *b;
   BIGNUM *b_00;
   if (( ( ( key == (EC_KEY*)0x0 ) || ( *(long*)( key + 0x18 ) == 0 ) ) || ( x == (BIGNUM*)0x0 ) ) || ( y == (BIGNUM*)0x0 )) {
      ERR_new();
      ERR_set_debug("crypto/ec/ec_key.c", 0x2be, "EC_KEY_set_public_key_affine_coordinates");
      ERR_set_error(0x10, 0xc0102, 0);
      return 0;
   }
   ctx = (BN_CTX*)BN_CTX_new_ex(*(undefined8*)( key + 0x50 ));
   if (ctx == (BN_CTX*)0x0) {
      return 0;
   }
   BN_CTX_start(ctx);
   pub = EC_POINT_new(*(EC_GROUP**)( key + 0x18 ));
   if (pub != (EC_POINT*)0x0) {
      b = BN_CTX_get(ctx);
      b_00 = BN_CTX_get(ctx);
      if (( ( b_00 != (BIGNUM*)0x0 ) && ( iVar1 = EC_POINT_set_affine_coordinates(*(undefined8*)( key + 0x18 ), pub, x, y, ctx) ),iVar1 != 0 )) {
         iVar1 = BN_cmp(x, b);
         if (( iVar1 == 0 ) && ( iVar1 = iVar1 == 0 )) {
            iVar1 = EC_KEY_set_public_key(key, pub);
            if (iVar1 != 0) {
               iVar1 = EC_KEY_check_key(key);
               uVar2 = ( uint )(iVar1 != 0);
               goto LAB_00100f9b;
            }
         } else {
            ERR_new();
            ERR_set_debug("crypto/ec/ec_key.c", 0x2da, "EC_KEY_set_public_key_affine_coordinates");
            ERR_set_error(0x10, 0x92, 0);
         }
      }
   }
   uVar2 = 0;
   LAB_00100f9b:BN_CTX_end(ctx);
   BN_CTX_free(ctx);
   EC_POINT_free(pub);
   return uVar2;
}uint EC_KEY_get_enc_flags(EC_KEY *key) {
   return *(uint*)( key + 0x30 );
}void EC_KEY_set_enc_flags(EC_KEY *eckey, uint flags) {
   *(uint*)( eckey + 0x30 ) = flags;
   return;
}point_conversion_form_t EC_KEY_get_conv_form(EC_KEY *key) {
   return *(point_conversion_form_t*)( key + 0x34 );
}void EC_KEY_set_conv_form(EC_KEY *eckey, point_conversion_form_t cform) {
   *(point_conversion_form_t*)( eckey + 0x34 ) = cform;
   if (*(EC_GROUP**)( eckey + 0x18 ) != (EC_GROUP*)0x0) {
      EC_GROUP_set_point_conversion_form(*(EC_GROUP**)( eckey + 0x18 ), cform);
      return;
   }
   return;
}void EC_KEY_set_asn1_flag(EC_KEY *eckey, int asn1_flag) {
   if (*(EC_GROUP**)( eckey + 0x18 ) != (EC_GROUP*)0x0) {
      EC_GROUP_set_asn1_flag(*(EC_GROUP**)( eckey + 0x18 ), asn1_flag);
      return;
   }
   return;
}int EC_KEY_precompute_mult(EC_KEY *key, BN_CTX *ctx) {
   int iVar1;
   if (*(EC_GROUP**)( key + 0x18 ) != (EC_GROUP*)0x0) {
      iVar1 = EC_GROUP_precompute_mult(*(EC_GROUP**)( key + 0x18 ), ctx);
      return iVar1;
   }
   return 0;
}int EC_KEY_get_flags(EC_KEY *key) {
   return *(int*)( key + 0x3c );
}undefined8 ossl_ec_key_simple_generate_key(EC_KEY *param_1) {
   EC_GROUP *group;
   uint uVar1;
   int iVar2;
   BN_CTX *ctx;
   BIGNUM *a;
   BIGNUM *r;
   BIGNUM *b;
   BIGNUM *n;
   EC_POINT *r_00;
   undefined8 uVar3;
   group = *(EC_GROUP**)( param_1 + 0x18 );
   ctx = (BN_CTX*)BN_CTX_secure_new_ex(*(undefined8*)( param_1 + 0x50 ));
   uVar1 = EC_KEY_get_flags(param_1);
   if (( ctx == (BN_CTX*)0x0 ) || ( ( n = *(BIGNUM**)( param_1 + 0x28 ) ),n == (BIGNUM*)0x0 && ( n = (BIGNUM*)BN_secure_new() ),n == (BIGNUM*)0x0 )) {
      r = (BIGNUM*)0x0;
      n = (BIGNUM*)0x0;
      r_00 = (EC_POINT*)0x0;
   } else {
      a = (BIGNUM*)EC_GROUP_get0_order(group);
      if (a == (BIGNUM*)0x0) {
         r = (BIGNUM*)0x0;
         r_00 = (EC_POINT*)0x0;
      } else {
         if (( uVar1 & 4 ) == 0) {
            r = BN_dup(a);
            if (r != (BIGNUM*)0x0) {
               LAB_001011f0:do {
                  iVar2 = BN_priv_rand_range_ex(n, r, 0);
                  if (iVar2 == 0) goto LAB_00101204;
                  iVar2 = BN_is_zero(n);
               } while ( iVar2 != 0 );
               r_00 = *(EC_POINT**)( param_1 + 0x20 );
               if (( ( r_00 != (EC_POINT*)0x0 ) || ( r_00 = EC_POINT_new(group) ),r_00 != (EC_POINT*)0x0 )) &&( iVar2 = iVar2 != 0 ) * (BIGNUM**)( param_1 + 0x28 ) = n;
               n = (BIGNUM*)0x0;
               *(EC_POINT**)( param_1 + 0x20 ) = r_00;
               r_00 = (EC_POINT*)0x0;
               *(long*)( param_1 + 0x60 ) = *(long*)( param_1 + 0x60 ) + 1;
               uVar3 = 1;
               goto LAB_00101232;
            }
            goto LAB_00101207;
         }
      }
      else{r = BN_new();
      if (r != (BIGNUM*)0x0) {
         b = BN_value_one();
         iVar2 = BN_sub(r, a, b);
         if (iVar2 != 0) goto LAB_001011f0;
      }
   }
   LAB_00101204:r_00 = (EC_POINT*)0x0;
}}LAB_00101207:ossl_set_error_state("Conditional_PCT");BN_clear(*(BIGNUM**)( param_1 + 0x28 ));if (*(EC_POINT**)( param_1 + 0x20 ) != (EC_POINT*)0x0) {
   EC_POINT_set_to_infinity(group, *(EC_POINT**)( param_1 + 0x20 ));
}uVar3 = 0;LAB_00101232:EC_POINT_free(r_00);BN_clear_free(n);BN_CTX_free(ctx);BN_free(r);return uVar3;}void EC_KEY_set_flags(EC_KEY *key, int flags) {
   *(uint*)( key + 0x3c ) = *(uint*)( key + 0x3c ) | flags;
   *(long*)( key + 0x60 ) = *(long*)( key + 0x60 ) + 1;
   return;
}int EC_KEY_set_group(EC_KEY *key, EC_GROUP *group) {
   int iVar1;
   EC_GROUP *group_00;
   if (( *(code**)( *(long*)key + 0x28 ) != (code*)0x0 ) && ( iVar1 = iVar1 == 0 )) {
      return 0;
   }
   EC_GROUP_free(*(EC_GROUP**)( key + 0x18 ));
   group_00 = EC_GROUP_dup(group);
   *(EC_GROUP**)( key + 0x18 ) = group_00;
   if (group_00 != (EC_GROUP*)0x0) {
      iVar1 = EC_GROUP_get_curve_name(group_00);
      if (iVar1 == 0x494) {
         EC_KEY_set_flags(key, 4);
      }
      group_00 = *(EC_GROUP**)( key + 0x18 );
   }
   *(long*)( key + 0x60 ) = *(long*)( key + 0x60 ) + 1;
   return ( uint )(group_00 != (EC_GROUP*)0x0);
}void EC_KEY_clear_flags(EC_KEY *key, int flags) {
   *(long*)( key + 0x60 ) = *(long*)( key + 0x60 ) + 1;
   *(uint*)( key + 0x3c ) = *(uint*)( key + 0x3c ) & ~flags;
   return;
}undefined4 EC_KEY_decoded_from_explicit_params(long param_1) {
   if (( param_1 != 0 ) && ( *(long*)( param_1 + 0x18 ) != 0 )) {
      return *(undefined4*)( *(long*)( param_1 + 0x18 ) + 0x28 );
   }
   return 0xffffffff;
}undefined8 EC_KEY_key2buf(long param_1, undefined4 param_2, undefined8 param_3, undefined8 param_4) {
   undefined8 uVar1;
   if (( ( param_1 != 0 ) && ( *(long*)( param_1 + 0x20 ) != 0 ) ) && ( *(long*)( param_1 + 0x18 ) != 0 )) {
      uVar1 = EC_POINT_point2buf(*(long*)( param_1 + 0x18 ), *(long*)( param_1 + 0x20 ), param_2, param_3, param_4);
      return uVar1;
   }
   return 0;
}undefined8 EC_KEY_oct2key(long param_1, byte *param_2, size_t param_3, BN_CTX *param_4) {
   int iVar1;
   EC_POINT *p;
   EC_GROUP *group;
   if (param_1 == 0) {
      return 0;
   }
   group = *(EC_GROUP**)( param_1 + 0x18 );
   if (group != (EC_GROUP*)0x0) {
      p = *(EC_POINT**)( param_1 + 0x20 );
      if (p == (EC_POINT*)0x0) {
         p = EC_POINT_new(group);
         *(EC_POINT**)( param_1 + 0x20 ) = p;
         if (p == (EC_POINT*)0x0) {
            return 0;
         }
         group = *(EC_GROUP**)( param_1 + 0x18 );
      }
      iVar1 = EC_POINT_oct2point(group, p, param_2, param_3, param_4);
      if (iVar1 != 0) {
         *(long*)( param_1 + 0x60 ) = *(long*)( param_1 + 0x60 ) + 1;
         if (( *(byte*)**(undefined8**)( param_1 + 0x18 ) & 2 ) == 0) {
            *(uint*)( param_1 + 0x34 ) = *param_2 & 0xfffffffe;
         }
         return 1;
      }
   }
   return 0;
}undefined8 EC_KEY_priv2oct(long param_1) {
   long lVar1;
   code *UNRECOVERED_JUMPTABLE;
   undefined8 uVar2;
   if (( *(long**)( param_1 + 0x18 ) != (long*)0x0 ) && ( lVar1 = lVar1 != 0 )) {
      UNRECOVERED_JUMPTABLE = *(code**)( lVar1 + 0x130 );
      if (UNRECOVERED_JUMPTABLE != (code*)0x0) {
         for (int i_1308 = 0; i_1308 < 2; i_1308++) {
            /* WARNING: Could not recover jumptable at 0x00101511. Too many branches */
         }
         uVar2 = ( *UNRECOVERED_JUMPTABLE )();
         return uVar2;
      }
      ERR_new();
      ERR_set_debug("crypto/ec/ec_key.c", 1000, "EC_KEY_priv2oct");
      ERR_set_error(0x10, 0xc0101, 0);
      return 0;
   }
   return 0;
}ulong ossl_ec_key_simple_priv2oct(long param_1, long param_2, ulong param_3) {
   int iVar1;
   int iVar2;
   ulong uVar3;
   iVar1 = EC_GROUP_order_bits(*(undefined8*)( param_1 + 0x18 ));
   iVar2 = iVar1 + 0xe;
   if (-1 < iVar1 + 7) {
      iVar2 = iVar1 + 7;
   }
   if (*(long*)( param_1 + 0x28 ) != 0) {
      uVar3 = ( ulong )(iVar2 >> 3);
      if (param_2 == 0) {
         return uVar3;
      }
      if (uVar3 <= param_3) {
         iVar2 = BN_bn2binpad(*(long*)( param_1 + 0x28 ), param_2);
         if (iVar2 != -1) {
            return uVar3;
         }
         ERR_new();
         ERR_set_debug("crypto/ec/ec_key.c", 0x3ff, "ossl_ec_key_simple_priv2oct");
         ERR_set_error(0x10, 100, 0);
      }
   }
   return 0;
}undefined8 EC_KEY_oct2priv(long param_1) {
   long lVar1;
   code *pcVar2;
   undefined8 uVar3;
   if (( *(long**)( param_1 + 0x18 ) == (long*)0x0 ) || ( lVar1 = lVar1 == 0 )) {
      return 0;
   }
   pcVar2 = *(code**)( lVar1 + 0x138 );
   if (pcVar2 == (code*)0x0) {
      ERR_new();
      ERR_set_debug("crypto/ec/ec_key.c", 0x40d, "EC_KEY_oct2priv");
      ERR_set_error(0x10, 0xc0101, 0);
      return 0;
   }
   uVar3 = ( *pcVar2 )();
   if ((int)uVar3 != 1) {
      return uVar3;
   }
   *(long*)( param_1 + 0x60 ) = *(long*)( param_1 + 0x60 ) + 1;
   return uVar3;
}undefined8 ossl_ec_key_simple_oct2priv(long param_1, uchar *param_2, int param_3) {
   BIGNUM *pBVar1;
   undefined8 uVar2;
   pBVar1 = *(BIGNUM**)( param_1 + 0x28 );
   if (pBVar1 == (BIGNUM*)0x0) {
      pBVar1 = (BIGNUM*)BN_secure_new();
      *(BIGNUM**)( param_1 + 0x28 ) = pBVar1;
      if (pBVar1 == (BIGNUM*)0x0) {
         ERR_new();
         uVar2 = 0x41c;
         goto LAB_001016ec;
      }
   }
   pBVar1 = BN_bin2bn(param_2, param_3, pBVar1);
   if (pBVar1 != (BIGNUM*)0x0) {
      *(long*)( param_1 + 0x60 ) = *(long*)( param_1 + 0x60 ) + 1;
      return 1;
   }
   ERR_new();
   uVar2 = 0x420;
   LAB_001016ec:ERR_set_debug("crypto/ec/ec_key.c", uVar2, "ossl_ec_key_simple_oct2priv");
   ERR_set_error(0x10, 0x80003, 0);
   return 0;
}long EC_KEY_priv2buf(undefined8 param_1, undefined8 *param_2) {
   long lVar1;
   void *ptr;
   lVar1 = EC_KEY_priv2oct(param_1, 0, 0);
   if (( lVar1 != 0 ) && ( ptr = CRYPTO_malloc((int)lVar1, "crypto/ec/ec_key.c", 0x42f) ),ptr != (void*)0x0) {
      lVar1 = EC_KEY_priv2oct(param_1, ptr, lVar1);
      if (lVar1 != 0) {
         *param_2 = ptr;
         return lVar1;
      }
      CRYPTO_free(ptr);
      return 0;
   }
   return 0;
}bool EC_KEY_can_sign(long param_1) {
   byte *pbVar1;
   if (( *(undefined8**)( param_1 + 0x18 ) != (undefined8*)0x0 ) && ( pbVar1 = (byte*)**(undefined8**)( param_1 + 0x18 ) ),pbVar1 != (byte*)0x0) {
      return ( *pbVar1 & 4 ) == 0;
   }
   return false;
}
