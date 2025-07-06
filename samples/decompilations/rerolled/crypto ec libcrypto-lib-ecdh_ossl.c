undefined8 ossl_ecdh_compute_key(void) {
   code *UNRECOVERED_JUMPTABLE;
   undefined8 uVar1;
   long in_RCX;
   UNRECOVERED_JUMPTABLE = *(code**)( **(long**)( in_RCX + 0x18 ) + 0x170 );
   if (UNRECOVERED_JUMPTABLE != (code*)0x0) {
      for (int i_2433 = 0; i_2433 < 2; i_2433++) {
         /* WARNING: Could not recover jumptable at 0x00100017. Too many branches */
      }
      uVar1 = ( *UNRECOVERED_JUMPTABLE )();
      return uVar1;
   }
   ERR_new();
   ERR_set_debug("crypto/ec/ecdh_ossl.c", 0x20, "ossl_ecdh_compute_key");
   ERR_set_error(0x10, 0xa0, 0);
   return 0;
}undefined8 ossl_ecdh_simple_compute_key(undefined8 *param_1, ulong *param_2, EC_POINT *param_3, EC_KEY *param_4) {
   uint uVar1;
   int iVar2;
   int iVar3;
   int iVar4;
   BN_CTX *ctx;
   BIGNUM *cofactor;
   BIGNUM *b;
   EC_GROUP *group;
   EC_POINT *r;
   void *__s;
   size_t __n;
   ulong uVar5;
   undefined8 uVar6;
   ctx = (BN_CTX*)BN_CTX_new_ex(*(undefined8*)( param_4 + 0x50 ));
   if (ctx == (BN_CTX*)0x0) {
      __s = (void*)0x0;
      cofactor = (BIGNUM*)0x0;
      r = (EC_POINT*)0x0;
      uVar6 = 0;
      goto LAB_00100222;
   }
   BN_CTX_start(ctx);
   cofactor = BN_CTX_get(ctx);
   if (cofactor == (BIGNUM*)0x0) {
      __s = (void*)0x0;
      r = (EC_POINT*)0x0;
      uVar6 = 0;
      ERR_new();
      ERR_set_debug("crypto/ec/ecdh_ossl.c", 0x42, "ossl_ecdh_simple_compute_key");
      ERR_set_error(0x10, 0x80003, 0);
      goto LAB_00100222;
   }
   b = EC_KEY_get0_private_key(param_4);
   if (b == (BIGNUM*)0x0) {
      ERR_new();
      ERR_set_debug("crypto/ec/ecdh_ossl.c", 0x48, "ossl_ecdh_simple_compute_key");
      ERR_set_error(0x10, 0x7d, 0);
   } else {
      group = EC_KEY_get0_group(param_4);
      uVar1 = EC_KEY_get_flags(param_4);
      if (( uVar1 & 0x1000 ) == 0) {
         LAB_0010010f:r = EC_POINT_new(group);
         if (r != (EC_POINT*)0x0) {
            iVar2 = EC_POINT_mul(group, r, (BIGNUM*)0x0, param_3, b, ctx);
            if (iVar2 == 0) {
               ERR_new();
               uVar6 = 100;
               LAB_001002c1:ERR_set_debug("crypto/ec/ecdh_ossl.c", uVar6, "ossl_ecdh_simple_compute_key");
               ERR_set_error(0x10, 0x9b, 0);
            } else {
               iVar2 = EC_POINT_get_affine_coordinates(group, r, cofactor, 0, ctx);
               if (iVar2 == 0) {
                  ERR_new();
                  uVar6 = 0x6e;
                  goto LAB_001002c1;
               }
               iVar3 = EC_GROUP_get_degree(group);
               iVar2 = iVar3 + 7;
               if (iVar3 + 7 < 0) {
                  iVar2 = iVar3 + 0xe;
               }
               uVar5 = ( ulong )(iVar2 >> 3);
               iVar4 = BN_num_bits(cofactor);
               iVar3 = iVar4 + 7;
               if (iVar4 + 7 < 0) {
                  iVar3 = iVar4 + 0xe;
               }
               iVar3 = iVar3 >> 3;
               if (uVar5 < (ulong)(long)iVar3) {
                  ERR_new();
                  ERR_set_debug("crypto/ec/ecdh_ossl.c", 0x79, "ossl_ecdh_simple_compute_key");
                  ERR_set_error(0x10, 0xc0103, 0);
               } else {
                  __s = CRYPTO_malloc(iVar2 >> 3, "crypto/ec/ecdh_ossl.c", 0x7c);
                  if (__s != (void*)0x0) {
                     __n = uVar5 - (long)iVar3;
                     memset(__s, 0, __n);
                     iVar2 = BN_bn2bin(cofactor, (uchar*)( (long)__s + __n ));
                     if (iVar3 == iVar2) {
                        *param_1 = __s;
                        __s = (void*)0x0;
                        *param_2 = uVar5;
                        uVar6 = 1;
                     } else {
                        ERR_new();
                        uVar6 = 0;
                        ERR_set_debug("crypto/ec/ecdh_ossl.c", 0x81, "ossl_ecdh_simple_compute_key");
                        ERR_set_error(0x10, 0x80003, 0);
                     }
                     goto LAB_00100222;
                  }
               }
            }
            __s = (void*)0x0;
            uVar6 = 0;
            goto LAB_00100222;
         }
         ERR_new();
         uVar6 = 0x5f;
      } else {
         iVar2 = EC_GROUP_get_cofactor(group, cofactor, (BN_CTX*)0x0);
         if (iVar2 != 0) {
            iVar2 = BN_mul(cofactor, cofactor, b, ctx);
            b = cofactor;
            if (iVar2 == 0) {
               ERR_new();
               ERR_set_debug("crypto/ec/ecdh_ossl.c", 0x58, "ossl_ecdh_simple_compute_key");
               ERR_set_error(0x10, 0x80003, 0);
               goto LAB_0010029b;
            }
            goto LAB_0010010f;
         }
         ERR_new();
         uVar6 = 0x54;
      }
      ERR_set_debug("crypto/ec/ecdh_ossl.c", uVar6, "ossl_ecdh_simple_compute_key");
      ERR_set_error(0x10, 0x80010, 0);
   }
   LAB_0010029b:__s = (void*)0x0;
   uVar6 = 0;
   r = (EC_POINT*)0x0;
   LAB_00100222:BN_clear(cofactor);
   EC_POINT_clear_free(r);
   BN_CTX_end(ctx);
   BN_CTX_free(ctx);
   CRYPTO_free(__s);
   return uVar6;
}
