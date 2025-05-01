
undefined8 ossl_fips_config_securitycheck_enabled(void)

{
  return 0;
}



void ossl_digest_rsa_sign_get_md_nid(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = ossl_digest_get_approved_nid();
  if (iVar1 != 0) {
    return;
  }
  ossl_digest_md_to_nid(param_1,name_to_nid_0,7);
  return;
}


