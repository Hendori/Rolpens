
long ossl_dh_new_by_nid_ex(undefined8 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = ossl_ffc_uid_to_dh_named_group(param_2);
  if (lVar2 != 0) {
    lVar3 = ossl_dh_new_ex(param_1);
    if (lVar3 != 0) {
      ossl_ffc_named_group_set(lVar3 + 8,lVar2);
      uVar1 = ossl_ffc_named_group_get_uid(lVar2);
      *(long *)(lVar3 + 200) = *(long *)(lVar3 + 200) + 1;
      *(undefined4 *)(lVar3 + 0x3c) = uVar1;
    }
    return lVar3;
  }
  ERR_new();
  ERR_set_debug("crypto/dh/dh_group_params.c",0x2f,"ossl_dh_new_by_nid_ex");
  ERR_set_error(5,0x72,0);
  return 0;
}



void DH_new_by_nid(undefined4 param_1)

{
  ossl_dh_new_by_nid_ex(0,param_1);
  return;
}



void ossl_dh_cache_named_group(long param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  long lVar3;
  
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x3c) = 0;
    if ((*(long *)(param_1 + 8) != 0) && (*(long *)(param_1 + 0x18) != 0)) {
      lVar3 = ossl_ffc_numbers_to_dh_named_group
                        (*(long *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
      if (lVar3 != 0) {
        if (*(long *)(param_1 + 0x10) == 0) {
          uVar1 = ossl_ffc_named_group_get_q(lVar3);
          *(undefined8 *)(param_1 + 0x10) = uVar1;
        }
        uVar2 = ossl_ffc_named_group_get_uid(lVar3);
        *(undefined4 *)(param_1 + 0x3c) = uVar2;
        uVar2 = ossl_ffc_named_group_get_keylength(lVar3);
        *(long *)(param_1 + 200) = *(long *)(param_1 + 200) + 1;
        *(undefined4 *)(param_1 + 0x60) = uVar2;
      }
    }
    return;
  }
  return;
}



undefined4 DH_get_nid(long param_1)

{
  if (param_1 != 0) {
    return *(undefined4 *)(param_1 + 0x3c);
  }
  return 0;
}



bool ossl_dh_is_named_safe_prime_group(void)

{
  int iVar1;
  
  iVar1 = DH_get_nid();
  return 3 < iVar1;
}


