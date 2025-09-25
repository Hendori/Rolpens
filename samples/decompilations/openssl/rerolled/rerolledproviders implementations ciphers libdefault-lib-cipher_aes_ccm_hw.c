undefined8 ccm_aesni_initkey(byte *param_1, undefined8 param_2, int param_3) {
   undefined *puVar1;
   aesni_set_encrypt_key(param_2, param_3 * 8, param_1 + 0xa8);
   CRYPTO_ccm128_init(param_1 + 0x50, *(undefined4*)( param_1 + 0x10 ), *(undefined4*)( param_1 + 8 ), param_1 + 0xa8, &aesni_encrypt);
   if (( *param_1 & 1 ) == 0) {
      puVar1 = &aesni_ccm64_decrypt_blocks;
   }
 else {
      puVar1 = &aesni_ccm64_encrypt_blocks;
   }

   *(undefined**)( param_1 + 0x88 ) = puVar1;
   *param_1 = *param_1 | 2;
   return 1;
}
undefined8 ccm_generic_aes_initkey(byte *param_1, uchar *param_2, int param_3) {
   AES_KEY *key;
   key = (AES_KEY*)( param_1 + 0xa8 );
   if (( DAT_0010102d & 2 ) == 0) {
      AES_set_encrypt_key(param_2, param_3 * 8, key);
      CRYPTO_ccm128_init(param_1 + 0x50, *(undefined4*)( param_1 + 0x10 ), *(undefined4*)( param_1 + 8 ), key, &AES_encrypt);
   }
 else {
      vpaes_set_encrypt_key();
      CRYPTO_ccm128_init(param_1 + 0x50, *(undefined4*)( param_1 + 0x10 ), *(undefined4*)( param_1 + 8 ), key, &vpaes_encrypt);
   }

   *param_1 = *param_1 | 2;
   for (int i = 0; i < 8; i++) {
      param_1[( i + 136 )] = 0;
   }

   return 1;
}
undefined1 *ossl_prov_aes_hw_ccm(void) {
   undefined1 *puVar1;
   puVar1 = aes_ccm;
   if (( DAT_0010102f & 2 ) != 0) {
      puVar1 = aesni_ccm;
   }

   return puVar1;
}

