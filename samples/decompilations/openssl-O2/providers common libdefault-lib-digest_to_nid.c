
undefined4 ossl_digest_md_to_nid(long param_1,undefined4 *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      iVar1 = EVP_MD_is_a(param_1,*(undefined8 *)(param_2 + 2));
      if (iVar1 != 0) {
        return *param_2;
      }
      lVar2 = lVar2 + 1;
      param_2 = param_2 + 4;
    } while (param_3 != lVar2);
  }
  return 0;
}



void ossl_digest_get_approved_nid(undefined8 param_1)

{
  ossl_digest_md_to_nid(param_1,name_to_nid_0,0xb);
  return;
}


