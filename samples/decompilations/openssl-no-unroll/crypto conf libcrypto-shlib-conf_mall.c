
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void OPENSSL_load_builtin_modules(void)

{
  ASN1_add_oid_module();
  ASN1_add_stable_module();
  ENGINE_add_conf_module();
  EVP_add_alg_module();
  ossl_config_add_ssl_module();
  ossl_provider_add_conf_module();
  ossl_random_add_conf_module();
  return;
}


