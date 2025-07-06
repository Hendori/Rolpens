ulong i2d_provided(undefined8 param_1, undefined4 param_2, long *param_3, long *param_4) {
   long lVar1;
   ulong uVar2;
   int iVar3;
   long lVar4;
   ulong uVar5;
   long in_FS_OFFSET;
   ulong local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_4 == (long*)0x0) {
      do {
         lVar4 = *param_3;
         while (true) {
            if (lVar4 == 0) goto LAB_00100098;
            local_48 = 0x7fffffff;
            lVar4 = OSSL_ENCODER_CTX_new_for_pkey(param_1, param_2, lVar4, param_3[1], 0);
            if (lVar4 == 0) goto LAB_001000c8;
            iVar3 = OSSL_ENCODER_to_data(lVar4, 0, &local_48);
            uVar2 = local_48;
            if (iVar3 != 0) break;
            param_3 = param_3 + 2;
            OSSL_ENCODER_CTX_free(lVar4);
            lVar4 = *param_3;
         };
         param_3 = param_3 + 2;
         OSSL_ENCODER_CTX_free(lVar4);
         uVar5 = uVar2 & 0xffffffff;
      } while ( (int)uVar2 == -1 );
   } else {
      do {
         lVar4 = *param_3;
         while (true) {
            if (lVar4 == 0) goto LAB_00100098;
            local_48 = 0x7fffffff;
            lVar1 = *param_4;
            lVar4 = OSSL_ENCODER_CTX_new_for_pkey(param_1, param_2, lVar4, param_3[1], 0);
            if (lVar4 == 0) goto LAB_001000c8;
            iVar3 = OSSL_ENCODER_to_data(lVar4, param_4, &local_48);
            if (iVar3 != 0) break;
            param_3 = param_3 + 2;
            OSSL_ENCODER_CTX_free(lVar4);
            lVar4 = *param_3;
         };
         iVar3 = (int)local_48;
         uVar5 = local_48 & 0xffffffff;
         if (lVar1 != 0) {
            uVar5 = ( ulong )(0x7fffffff - iVar3);
            OSSL_ENCODER_CTX_free(lVar4);
            break;
         }
         param_3 = param_3 + 2;
         OSSL_ENCODER_CTX_free(lVar4);
      } while ( iVar3 == -1 );
   }
   LAB_001000ce:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return uVar5;
   LAB_00100098:ERR_new();
   ERR_set_debug("crypto/asn1/i2d_evp.c", 0x45, "i2d_provided");
   ERR_set_error(0xd, 0xc4, 0);
   LAB_001000c8:uVar5 = 0xffffffff;
   goto LAB_001000ce;
}undefined8 i2d_KeyParams(long param_1, undefined8 param_2) {
   code *UNRECOVERED_JUMPTABLE;
   undefined8 uVar1;
   if (*(long*)( param_1 + 0x60 ) != 0) {
      uVar1 = i2d_provided(param_1, 0x84, output_info_6, param_2);
      return uVar1;
   }
   if (( *(long*)( param_1 + 8 ) != 0 ) && ( UNRECOVERED_JUMPTABLE = *(code**)( *(long*)( param_1 + 8 ) + 0x78 ) ),UNRECOVERED_JUMPTABLE != (code*)0x0) {
      for (int i_541 = 0; i_541 < 2; i_541++) {
         /* WARNING: Could not recover jumptable at 0x001001fd. Too many branches */
      }
      uVar1 = ( *UNRECOVERED_JUMPTABLE )();
      return uVar1;
   }
   ERR_new();
   ERR_set_debug("crypto/asn1/i2d_evp.c", 0x55, "i2d_KeyParams");
   ERR_set_error(0xd, 0xc4, 0);
   return 0xffffffff;
}void i2d_KeyParams_bio(BIO *param_1, uchar *param_2) {
   ASN1_i2d_bio(i2d_KeyParams, param_1, param_2);
   return;
}int i2d_PrivateKey(EVP_PKEY *a, uchar **pp) {
   long lVar1;
   int iVar2;
   PKCS8_PRIV_KEY_INFO *a_00;
   if (*(long*)&a[1].save_parameters != 0) {
      iVar2 = i2d_provided(a, 0x87, output_info_3, pp);
      return iVar2;
   }
   lVar1 = *(long*)&a->references;
   if (lVar1 != 0) {
      if (*(code**)( lVar1 + 0xc0 ) != (code*)0x0) {
         for (int i_542 = 0; i_542 < 2; i_542++) {
            /* WARNING: Could not recover jumptable at 0x001002ab. Too many branches */
         }
         iVar2 = ( **(code**)( lVar1 + 0xc0 ) )();
         return iVar2;
      }
      if (*(long*)( lVar1 + 0x48 ) != 0) {
         a_00 = EVP_PKEY2PKCS8(a);
         if (a_00 == (PKCS8_PRIV_KEY_INFO*)0x0) {
            return 0;
         }
         iVar2 = i2d_PKCS8_PRIV_KEY_INFO(a_00, pp);
         PKCS8_PRIV_KEY_INFO_free(a_00);
         return iVar2;
      }
   }
   ERR_new();
   ERR_set_debug("crypto/asn1/i2d_evp.c", 0x76, "i2d_PrivateKey");
   ERR_set_error(0xd, 0xa7, 0);
   return -1;
}int i2d_PublicKey(EVP_PKEY *a, uchar **pp) {
   int iVar1;
   RSA *a_00;
   EC_KEY *key;
   DSA *a_01;
   if (*(long*)&a[1].save_parameters != 0) {
      iVar1 = i2d_provided(a, 0x86, output_info_1, pp);
      return iVar1;
   }
   iVar1 = EVP_PKEY_get_base_id();
   if (iVar1 == 0x74) {
      a_01 = (DSA*)EVP_PKEY_get0_DSA(a);
      iVar1 = i2d_DSAPublicKey(a_01, pp);
      return iVar1;
   }
   if (iVar1 == 0x198) {
      key = (EC_KEY*)EVP_PKEY_get0_EC_KEY(a);
      iVar1 = i2o_ECPublicKey(key, pp);
      return iVar1;
   }
   if (iVar1 != 6) {
      ERR_new();
      ERR_set_debug("crypto/asn1/i2d_evp.c", 0x91, "i2d_PublicKey");
      ERR_set_error(0xd, 0xa7, 0);
      return -1;
   }
   a_00 = (RSA*)EVP_PKEY_get0_RSA(a);
   iVar1 = i2d_RSAPublicKey(a_00, pp);
   return iVar1;
}
