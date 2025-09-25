int ossl_gen_deterministic_nonce_rfc6979(BIGNUM *param_1, BIGNUM *param_2, undefined8 param_3, uchar *param_4, int param_5, undefined8 param_6, undefined8 param_7, long param_8) {
   uchar *puVar1;
   int iVar2;
   int iVar3;
   int iVar4;
   int iVar5;
   uchar *s;
   long lVar6;
   BIGNUM *pBVar7;
   BIGNUM *pBVar8;
   undefined8 uVar9;
   long lVar10;
   long lVar11;
   uchar *puVar12;
   undefined8 *puVar13;
   long in_FS_OFFSET;
   undefined8 local_138;
   undefined8 uStack_130;
   undefined8 local_128;
   undefined8 uStack_120;
   undefined8 local_118;
   undefined8 local_108;
   undefined8 uStack_100;
   undefined8 local_f8;
   undefined8 uStack_f0;
   undefined8 local_e8;
   undefined8 local_e0;
   undefined8 uStack_d8;
   undefined8 local_d0;
   undefined8 uStack_c8;
   undefined8 local_c0;
   undefined8 local_b8[15];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_1 != (BIGNUM*)0x0 ) && ( iVar2 = iVar2 != 0 )) {
      iVar3 = iVar2 + 0xe;
      if (-1 < iVar2 + 7) {
         iVar3 = iVar2 + 7;
      }

      iVar3 = iVar3 >> 3;
      lVar11 = (long)( iVar3 * 3 + 8 );
      s = (uchar*)CRYPTO_zalloc(lVar11, "crypto/deterministic_nonce.c", 0xce);
      if (s != (uchar*)0x0) {
         puVar1 = s + 8;
         lVar6 = (long)iVar3;
         for (int i = 0; i < 8; i++) {
            s[i] = 255;
         }

         puVar12 = puVar1 + lVar6;
         iVar4 = BN_bn2binpad(param_3, puVar12 + lVar6, lVar6);
         if (-1 < iVar4) {
            pBVar7 = BN_new();
            if (pBVar7 == (BIGNUM*)0x0) {
               BN_free((BIGNUM*)0x0);
            }
 else {
               pBVar8 = BN_bin2bn(param_4, param_5, pBVar7);
               if (( ( pBVar8 == (BIGNUM*)0x0 ) || ( ( iVar4 = param_5 * 8 - iVar2 ),0 < iVar4 && ( iVar4 = BN_rshift(pBVar7, pBVar7, iVar4) ),iVar4 == 0 ) )) {
                  BN_free(pBVar7);
               }
 else {
                  iVar4 = BN_bn2binpad(pBVar7, puVar12, iVar3);
                  BN_free(pBVar7);
                  if (-1 < iVar4) {
                     uVar9 = EVP_KDF_fetch(param_7, "HMAC-DRBG-KDF", param_8);
                     lVar10 = EVP_KDF_CTX_new(uVar9);
                     EVP_KDF_free(uVar9);
                     if (lVar10 != 0) {
                        puVar13 = &local_e0;
                        OSSL_PARAM_construct_utf8_string(&local_138, "digest", param_6, 0);
                        local_e8 = local_118;
                        local_108 = local_138;
                        uStack_100 = uStack_130;
                        local_f8 = local_128;
                        uStack_f0 = uStack_120;
                        if (param_8 != 0) {
                           OSSL_PARAM_construct_utf8_string(&local_138, "properties", param_8, 0);
                           puVar13 = local_b8;
                           local_c0 = local_118;
                           local_e0 = local_138;
                           uStack_d8 = uStack_130;
                           local_d0 = local_128;
                           uStack_c8 = uStack_120;
                        }

                        OSSL_PARAM_construct_octet_string(&local_138, "entropy", puVar12 + lVar6, lVar6);
                        *puVar13 = local_138;
                        puVar13[1] = uStack_130;
                        puVar13[2] = local_128;
                        puVar13[3] = uStack_120;
                        puVar13[4] = local_118;
                        OSSL_PARAM_construct_octet_string(&local_138, "nonce", puVar12, lVar6);
                        puVar13[5] = local_138;
                        puVar13[6] = uStack_130;
                        puVar13[7] = local_128;
                        puVar13[8] = uStack_120;
                        puVar13[9] = local_118;
                        OSSL_PARAM_construct_end(&local_138);
                        puVar13[10] = local_138;
                        puVar13[0xb] = uStack_130;
                        puVar13[0xc] = local_128;
                        puVar13[0xd] = uStack_120;
                        puVar13[0xe] = local_118;
                        iVar4 = EVP_KDF_CTX_set_params(lVar10, &local_108);
                        if (0 < iVar4) {
                           iVar4 = iVar3 * 8;
                           if (iVar4 - iVar2 < 1) {
                              do {
                                 iVar2 = EVP_KDF_derive(lVar10, puVar1, lVar6, 0);
                                 if (( iVar2 == 0 ) || ( pBVar7 = BN_bin2bn(s, iVar3 + 8, param_1) ),pBVar7 == (BIGNUM*)0x0) goto LAB_001003b5;
                                 BN_set_flags(param_1, 4);
                                 ossl_bn_mask_bits_fixed_top(param_1, iVar4);
                                 iVar2 = ossl_bn_is_word_fixed_top(param_1, 0);
                              }
 while ( ( ( iVar2 != 0 ) || ( iVar2 = iVar2 != 0 ) ) || ( iVar2 = -1 < iVar2 ) );
                           }
 else {
                              do {
                                 iVar5 = EVP_KDF_derive(lVar10, puVar1, lVar6, 0);
                                 if (iVar5 == 0) goto LAB_001003b5;
                                 pBVar7 = BN_bin2bn(s, iVar3 + 8, param_1);
                                 if (pBVar7 == (BIGNUM*)0x0) {
                                    iVar5 = 0;
                                    goto LAB_001003c0;
                                 }

                                 BN_set_flags(param_1, 4);
                                 ossl_bn_mask_bits_fixed_top(param_1, iVar4);
                                 iVar5 = bn_rshift_fixed_top(param_1, param_1, iVar4 - iVar2);
                                 if (iVar5 == 0) goto LAB_001003c0;
                                 iVar5 = ossl_bn_is_word_fixed_top(param_1, 0);
                              }
 while ( ( ( iVar5 != 0 ) || ( iVar5 = iVar5 != 0 ) ) || ( iVar5 = -1 < iVar5 ) );
                           }

                           iVar5 = 1;
                           goto LAB_001003c0;
                        }

                     }

                     EVP_KDF_CTX_free(lVar10);
                  }

               }

            }

         }

         iVar5 = 0;
         lVar10 = 0;
         goto LAB_001003c0;
      }

   }

   iVar5 = 0;
   LAB_0010006d:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return iVar5;
   LAB_001003b5:iVar5 = 0;
   LAB_001003c0:EVP_KDF_CTX_free(lVar10);
   CRYPTO_clear_free(s, lVar11, "crypto/deterministic_nonce.c", 0xee);
   goto LAB_0010006d;
}

