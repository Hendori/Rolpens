ECDSA_SIG *ECDSA_do_sign_ex(uchar *dgst, int dgstlen, BIGNUM *kinv, BIGNUM *rp, EC_KEY *eckey) {
   ECDSA_SIG *pEVar1;
   undefined4 in_register_00000034;
   if (*(code**)( *(long*)eckey + 0x60 ) != (code*)0x0) {
      for (int i_329 = 0; i_329 < 2; i_329++) {
         /* WARNING: Could not recover jumptable at 0x00100010. Too many branches */
      }
      pEVar1 = (ECDSA_SIG*)( **(code**)( *(long*)eckey + 0x60 ) )();
      return pEVar1;
   }
   ERR_new(dgst, CONCAT44(in_register_00000034, dgstlen));
   ERR_set_debug("crypto/ec/ecdsa_sign.c", 0x1f, "ECDSA_do_sign_ex");
   ERR_set_error(0x10, 0x98, 0);
   return (ECDSA_SIG*)0x0;
}ECDSA_SIG *ECDSA_do_sign(uchar *dgst, int dgst_len, EC_KEY *eckey) {
   ECDSA_SIG *pEVar1;
   pEVar1 = ECDSA_do_sign_ex(dgst, dgst_len, (BIGNUM*)0x0, (BIGNUM*)0x0, eckey);
   return pEVar1;
}int ECDSA_sign_ex(int type, uchar *dgst, int dgstlen, uchar *sig, uint *siglen, BIGNUM *kinv, BIGNUM *rp, EC_KEY *eckey) {
   int iVar1;
   undefined4 in_register_0000003c;
   if (*(code**)( *(long*)eckey + 0x50 ) != (code*)0x0) {
      for (int i_330 = 0; i_330 < 2; i_330++) {
         /* WARNING: Could not recover jumptable at 0x001000a2. Too many branches */
      }
      iVar1 = ( **(code**)( *(long*)eckey + 0x50 ) )(CONCAT44(in_register_0000003c, type), dgst, dgstlen);
      return iVar1;
   }
   ERR_new(CONCAT44(in_register_0000003c, type));
   ERR_set_debug("crypto/ec/ecdsa_sign.c", 0x2f, "ECDSA_sign_ex");
   ERR_set_error(0x10, 0x98, 0);
   return 0;
}int ECDSA_sign(int type, uchar *dgst, int dgstlen, uchar *sig, uint *siglen, EC_KEY *eckey) {
   int iVar1;
   iVar1 = ECDSA_sign_ex(type, dgst, dgstlen, sig, siglen, (BIGNUM*)0x0, (BIGNUM*)0x0, eckey);
   return iVar1;
}int ECDSA_sign_setup(EC_KEY *eckey, BN_CTX *ctx, BIGNUM **kinv, BIGNUM **rp) {
   int iVar1;
   if (*(code**)( *(long*)eckey + 0x58 ) != (code*)0x0) {
      for (int i_331 = 0; i_331 < 2; i_331++) {
         /* WARNING: Could not recover jumptable at 0x00100110. Too many branches */
      }
      iVar1 = ( **(code**)( *(long*)eckey + 0x58 ) )();
      return iVar1;
   }
   ERR_new();
   ERR_set_debug("crypto/ec/ecdsa_sign.c", 0x38, "ECDSA_sign_setup");
   ERR_set_error(0x10, 0x98, 0);
   return 0;
}
