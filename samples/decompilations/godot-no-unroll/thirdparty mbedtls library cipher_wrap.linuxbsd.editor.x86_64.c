
void * xts_aes_ctx_alloc(void)

{
  void *pvVar1;
  
  pvVar1 = calloc(1,0x240);
  if (pvVar1 != (void *)0x0) {
    mbedtls_aes_xts_init(pvVar1);
  }
  return pvVar1;
}



void xts_aes_setkey_dec_wrap(void)

{
  mbedtls_aes_xts_setkey_dec();
  return;
}



void xts_aes_setkey_enc_wrap(void)

{
  mbedtls_aes_xts_setkey_enc();
  return;
}



undefined8 aes_crypt_xts_wrap(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  
  if ((param_2 != 0) && (param_2 != 1)) {
    return 0xffff9f00;
  }
  uVar1 = mbedtls_aes_crypt_xts();
  return uVar1;
}



void kw_ctx_free(void *param_1)

{
  mbedtls_nist_kw_free();
  free(param_1);
  return;
}



void * kw_ctx_alloc(void)

{
  void *pvVar1;
  
  pvVar1 = calloc(1,0x60);
  if (pvVar1 != (void *)0x0) {
    mbedtls_nist_kw_init(pvVar1);
  }
  return pvVar1;
}



void kw_aes_setkey_unwrap(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  mbedtls_nist_kw_setkey(param_1,2,param_2,param_3,0);
  return;
}



void kw_aes_setkey_wrap(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  mbedtls_nist_kw_setkey(param_1,2,param_2,param_3,1);
  return;
}



void gcm_ctx_free(void *param_1)

{
  mbedtls_gcm_free();
  free(param_1);
  return;
}



void * gcm_ctx_alloc(void)

{
  void *pvVar1;
  
  pvVar1 = calloc(1,0x1a8);
  if (pvVar1 != (void *)0x0) {
    mbedtls_gcm_init(pvVar1);
  }
  return pvVar1;
}



void gcm_camellia_setkey_wrap(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  mbedtls_gcm_setkey(param_1,5,param_2,param_3);
  return;
}



void gcm_aria_setkey_wrap(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  mbedtls_gcm_setkey(param_1,6,param_2,param_3);
  return;
}



void gcm_aes_setkey_wrap(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  mbedtls_gcm_setkey(param_1,2,param_2,param_3);
  return;
}



void chachapoly_ctx_free(void *param_1)

{
  mbedtls_chachapoly_free();
  free(param_1);
  return;
}



void * chachapoly_ctx_alloc(void)

{
  void *pvVar1;
  
  pvVar1 = calloc(1,0xf0);
  if (pvVar1 != (void *)0x0) {
    mbedtls_chachapoly_init(pvVar1);
  }
  return pvVar1;
}



undefined8 chachapoly_setkey_wrap(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 0x100) {
    uVar1 = mbedtls_chachapoly_setkey();
    if ((int)uVar1 != 0) {
      uVar1 = 0xffff9f00;
    }
    return uVar1;
  }
  return 0xffff9f00;
}



void chacha20_ctx_free(void *param_1)

{
  mbedtls_chacha20_free();
  free(param_1);
  return;
}



void * chacha20_ctx_alloc(void)

{
  void *pvVar1;
  
  pvVar1 = calloc(1,0x88);
  if (pvVar1 != (void *)0x0) {
    mbedtls_chacha20_init(pvVar1);
  }
  return pvVar1;
}



undefined8 chacha20_setkey_wrap(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 0x100) {
    uVar1 = mbedtls_chacha20_setkey();
    if ((int)uVar1 != 0) {
      uVar1 = 0xffff9f00;
    }
    return uVar1;
  }
  return 0xffff9f00;
}



undefined8 chacha20_stream_wrap(void)

{
  undefined8 uVar1;
  
  uVar1 = mbedtls_chacha20_update();
  if ((int)uVar1 == -0x51) {
    uVar1 = 0xffff9f00;
  }
  return uVar1;
}



void ccm_ctx_free(void *param_1)

{
  mbedtls_ccm_free();
  free(param_1);
  return;
}



void * ccm_ctx_alloc(void)

{
  void *pvVar1;
  
  pvVar1 = calloc(1,0xb0);
  if (pvVar1 != (void *)0x0) {
    mbedtls_ccm_init(pvVar1);
  }
  return pvVar1;
}



void ccm_camellia_setkey_wrap(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  mbedtls_ccm_setkey(param_1,5,param_2,param_3);
  return;
}



void ccm_aria_setkey_wrap(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  mbedtls_ccm_setkey(param_1,6,param_2,param_3);
  return;
}



void ccm_aes_setkey_wrap(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  mbedtls_ccm_setkey(param_1,2,param_2,param_3);
  return;
}



void camellia_ctx_free(void *param_1)

{
  mbedtls_camellia_free();
  free(param_1);
  return;
}



void * camellia_ctx_alloc(void)

{
  void *pvVar1;
  
  pvVar1 = calloc(1,0x114);
  if (pvVar1 != (void *)0x0) {
    mbedtls_camellia_init(pvVar1);
  }
  return pvVar1;
}



void camellia_setkey_dec_wrap(void)

{
  mbedtls_camellia_setkey_dec();
  return;
}



void camellia_setkey_enc_wrap(void)

{
  mbedtls_camellia_setkey_enc();
  return;
}



void camellia_crypt_ctr_wrap(void)

{
  mbedtls_camellia_crypt_ctr();
  return;
}



void camellia_crypt_cfb128_wrap(void)

{
  mbedtls_camellia_crypt_cfb128();
  return;
}



void camellia_crypt_cbc_wrap(void)

{
  mbedtls_camellia_crypt_cbc();
  return;
}



void camellia_crypt_ecb_wrap(void)

{
  mbedtls_camellia_crypt_ecb();
  return;
}



void aria_ctx_free(void *param_1)

{
  mbedtls_aria_free();
  free(param_1);
  return;
}



void * aria_ctx_alloc(void)

{
  void *pvVar1;
  
  pvVar1 = calloc(1,0x114);
  if (pvVar1 != (void *)0x0) {
    mbedtls_aria_init(pvVar1);
  }
  return pvVar1;
}



void aria_setkey_dec_wrap(void)

{
  mbedtls_aria_setkey_dec();
  return;
}



void aria_setkey_enc_wrap(void)

{
  mbedtls_aria_setkey_enc();
  return;
}



void aria_crypt_ctr_wrap(void)

{
  mbedtls_aria_crypt_ctr();
  return;
}



void aria_crypt_cfb128_wrap(void)

{
  mbedtls_aria_crypt_cfb128();
  return;
}



void aria_crypt_cbc_wrap(void)

{
  mbedtls_aria_crypt_cbc();
  return;
}



void aria_crypt_ecb_wrap(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                        )

{
  mbedtls_aria_crypt_ecb(param_1,param_3,param_4);
  return;
}



void aes_ctx_free(void *param_1)

{
  mbedtls_aes_free();
  free(param_1);
  return;
}



void * aes_ctx_alloc(void)

{
  void *pvVar1;
  
  pvVar1 = calloc(1,0x120);
  if (pvVar1 != (void *)0x0) {
    mbedtls_aes_init(pvVar1);
  }
  return pvVar1;
}



void aes_setkey_dec_wrap(void)

{
  mbedtls_aes_setkey_dec();
  return;
}



void aes_setkey_enc_wrap(void)

{
  mbedtls_aes_setkey_enc();
  return;
}



void aes_crypt_ctr_wrap(void)

{
  mbedtls_aes_crypt_ctr();
  return;
}



void aes_crypt_ofb_wrap(void)

{
  mbedtls_aes_crypt_ofb();
  return;
}



void aes_crypt_cfb128_wrap(void)

{
  mbedtls_aes_crypt_cfb128();
  return;
}



void aes_crypt_cbc_wrap(void)

{
  mbedtls_aes_crypt_cbc();
  return;
}



void aes_crypt_ecb_wrap(void)

{
  mbedtls_aes_crypt_ecb();
  return;
}



void xts_aes_ctx_free(void *param_1)

{
  if (param_1 != (void *)0x0) {
    mbedtls_aes_xts_free();
    free(param_1);
    return;
  }
  return;
}


