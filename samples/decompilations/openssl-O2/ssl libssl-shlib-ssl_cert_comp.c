
ulong ossl_calculate_comp_expansion(int param_1,ulong param_2)

{
  ulong uVar1;
  
  if (param_1 == 2) {
    uVar1 = param_2 + 5 + (param_2 >> 0x10) * 3;
  }
  else if (param_1 == 3) {
    uVar1 = param_2 + 0x16 + (param_2 >> 0x11) * 3;
  }
  else {
    if (param_1 != 1) {
      return 0;
    }
    uVar1 = param_2 + 0xb + (param_2 >> 0xe) * 5;
  }
  if (uVar1 < param_2) {
    uVar1 = 0;
  }
  return uVar1;
}



undefined8 ossl_comp_has_alg(void)

{
  return 0;
}



undefined8 SSL_CTX_set1_cert_comp_preference(void)

{
  return 0;
}



undefined8 SSL_set1_cert_comp_preference(void)

{
  return 0;
}



undefined8 SSL_compress_certs(void)

{
  return 0;
}



undefined8 SSL_CTX_compress_certs(void)

{
  return 0;
}



undefined8 SSL_get1_compressed_cert(void)

{
  return 0;
}



undefined8 SSL_CTX_get1_compressed_cert(void)

{
  return 0;
}



undefined8 SSL_CTX_set1_compressed_cert(void)

{
  return 0;
}



undefined8 SSL_set1_compressed_cert(void)

{
  return 0;
}


