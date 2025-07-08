void ossl_rsa_multip_info_free_ex(void *param_1) {
   BN_clear_free(*(BIGNUM**)( (long)param_1 + 0x18 ));
   CRYPTO_free(param_1);
   return;
}
void ossl_rsa_multip_info_free(undefined8 *param_1) {
   BN_clear_free((BIGNUM*)*param_1);
   BN_clear_free((BIGNUM*)param_1[1]);
   BN_clear_free((BIGNUM*)param_1[2]);
   ossl_rsa_multip_info_free_ex(param_1);
   return;
}
long *ossl_rsa_multip_info_new(void) {
   long *ptr;
   BIGNUM *a;
   long lVar1;
   ptr = (long*)CRYPTO_zalloc(0x28, "crypto/rsa/rsa_mp.c", 0x24);
   if (ptr != (long*)0x0) {
      a = (BIGNUM*)BN_secure_new();
      *ptr = (long)a;
      if (a != (BIGNUM*)0x0) {
         lVar1 = BN_secure_new();
         ptr[1] = lVar1;
         if (lVar1 != 0) {
            lVar1 = BN_secure_new();
            ptr[2] = lVar1;
            if (lVar1 != 0) {
               lVar1 = BN_secure_new();
               ptr[3] = lVar1;
               if (lVar1 != 0) {
                  return ptr;
               }

            }

         }

         a = (BIGNUM*)*ptr;
      }

      BN_free(a);
      for (int i = 0; i < 3; i++) {
         BN_free((BIGNUM*)ptr[( i + 1 )]);
      }

      CRYPTO_free(ptr);
   }

   return (long*)0x0;
}
undefined8 ossl_rsa_multip_calc_product(long param_1) {
   int iVar1;
   int iVar2;
   BN_CTX *ctx;
   undefined8 *puVar3;
   BIGNUM *r;
   int iVar4;
   undefined8 uVar5;
   BIGNUM *b;
   BIGNUM *a;
   iVar1 = OPENSSL_sk_num(*(undefined8*)( param_1 + 0x88 ));
   if (0 < iVar1) {
      ctx = BN_CTX_new();
      if (ctx != (BN_CTX*)0x0) {
         a = *(BIGNUM**)( param_1 + 0x40 );
         b = *(BIGNUM**)( param_1 + 0x48 );
         iVar4 = 0;
         do {
            puVar3 = (undefined8*)OPENSSL_sk_value(*(undefined8*)( param_1 + 0x88 ), iVar4);
            r = (BIGNUM*)puVar3[3];
            if (r == (BIGNUM*)0x0) {
               r = (BIGNUM*)BN_secure_new();
               puVar3[3] = r;
               if (r != (BIGNUM*)0x0) goto LAB_00100168;
               LAB_001001b7:uVar5 = 0;
               goto LAB_001001c5;
            }

            LAB_00100168:iVar2 = BN_mul(r, a, b, ctx);
            if (iVar2 == 0) goto LAB_001001b7;
            iVar4 = iVar4 + 1;
            a = (BIGNUM*)puVar3[3];
            b = (BIGNUM*)*puVar3;
         }
 while ( iVar4 != iVar1 );
         uVar5 = 1;
         goto LAB_001001c5;
      }

   }

   uVar5 = 0;
   ctx = (BN_CTX*)0x0;
   LAB_001001c5:BN_CTX_free(ctx);
   return uVar5;
}
char ossl_rsa_multip_cap(int param_1) {
   char cVar1;
   cVar1 = '\x02';
   if (( 0x3ff < param_1 ) && ( cVar1 = 0xfff < param_1 )) {
      return ( 0x1fff < param_1 ) + '\x04';
   }

   return cVar1;
}

