
void ossl_init_ssl_base_ossl_(void)

{
  SSL_COMP_get_compression_methods();
  ssl_sort_cipher_list();
  ossl_init_ssl_base_ossl_ret_ = 1;
  return;
}



bool OPENSSL_init_ssl(ulong param_1)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = param_1 | 0xc;
  if ((param_1 & 0x80) == 0) {
    uVar2 = param_1 | 0x4c;
  }
  iVar1 = OPENSSL_init_crypto(uVar2);
  if (iVar1 != 0) {
    iVar1 = CRYPTO_THREAD_run_once(&ssl_base,0x100000);
    if (iVar1 != 0) {
      return ossl_init_ssl_base_ossl_ret_ != 0;
    }
  }
  return false;
}


