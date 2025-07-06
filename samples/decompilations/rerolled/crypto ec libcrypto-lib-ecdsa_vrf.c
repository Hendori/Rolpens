int ECDSA_do_verify(uchar *dgst, int dgst_len, ECDSA_SIG *sig, EC_KEY *eckey) {
   int iVar1;
   undefined4 in_register_00000034;
   if (*(code**)( *(long*)eckey + 0x70 ) != (code*)0x0) {
      for (int i_939 = 0; i_939 < 2; i_939++) {
         /* WARNING: Could not recover jumptable at 0x00100010. Too many branches */
      }
      iVar1 = ( **(code**)( *(long*)eckey + 0x70 ) )();
      return iVar1;
   }
   ERR_new(dgst, CONCAT44(in_register_00000034, dgst_len));
   ERR_set_debug("crypto/ec/ecdsa_vrf.c", 0x1f, "ECDSA_do_verify");
   ERR_set_error(0x10, 0x98, 0);
   return -1;
}int ECDSA_verify(int type, uchar *dgst, int dgstlen, uchar *sig, int siglen, EC_KEY *eckey) {
   int iVar1;
   undefined4 in_register_00000014;
   undefined4 in_register_0000003c;
   if (*(code**)( *(long*)eckey + 0x68 ) != (code*)0x0) {
      for (int i_940 = 0; i_940 < 2; i_940++) {
         /* WARNING: Could not recover jumptable at 0x00100060. Too many branches */
      }
      iVar1 = ( **(code**)( *(long*)eckey + 0x68 ) )();
      return iVar1;
   }
   ERR_new(CONCAT44(in_register_0000003c, type), dgst, CONCAT44(in_register_00000014, dgstlen));
   ERR_set_debug("crypto/ec/ecdsa_vrf.c", 0x2f, "ECDSA_verify");
   ERR_set_error(0x10, 0x98, 0);
   return -1;
}
