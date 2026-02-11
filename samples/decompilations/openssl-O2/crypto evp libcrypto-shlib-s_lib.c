
undefined8 transfer_cb(undefined8 param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = evp_skeymgmt_import(*(undefined8 *)(param_2 + 2),*param_2,param_1);
  *(undefined8 *)(param_2 + 4) = uVar1;
  return 1;
}



undefined4 * evp_skey_alloc(long param_1)

{
  undefined4 *ptr;
  long lVar1;
  
  if ((param_1 != 0) &&
     (ptr = (undefined4 *)CRYPTO_zalloc(0x20,"crypto/evp/s_lib.c",0x27), ptr != (undefined4 *)0x0))
  {
    LOCK();
    *ptr = 1;
    UNLOCK();
    lVar1 = CRYPTO_THREAD_lock_new();
    *(long *)(ptr + 2) = lVar1;
    if (lVar1 != 0) {
      *(long *)(ptr + 6) = param_1;
      return ptr;
    }
    ERR_new();
    ERR_set_debug("crypto/evp/s_lib.c",0x2f,"evp_skey_alloc");
    ERR_set_error(6,0x8000f,0);
    CRYPTO_THREAD_lock_free(*(undefined8 *)(ptr + 2));
    CRYPTO_free(ptr);
  }
  return (undefined4 *)0x0;
}



undefined8 get_secret_key(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = OSSL_PARAM_locate_const(param_1,"raw-bytes");
  if (lVar1 == 0) {
    return 0;
  }
  uVar2 = OSSL_PARAM_get_octet_string_ptr(lVar1,*param_2,param_2[1]);
  return uVar2;
}



long evp_skey_alloc_fetch(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = EVP_SKEYMGMT_fetch();
  if ((lVar1 == 0) && (lVar1 = EVP_SKEYMGMT_fetch(param_1,"GENERIC-SECRET",param_3), lVar1 == 0)) {
    ERR_new();
    ERR_set_debug("crypto/evp/s_lib.c",0x4b,"evp_skey_alloc_fetch");
    ERR_set_error(6,0x8010d,0);
    return 0;
  }
  lVar2 = evp_skey_alloc(lVar1);
  if (lVar2 != 0) {
    return lVar2;
  }
  EVP_SKEYMGMT_free(lVar1);
  return 0;
}



undefined8 EVP_SKEY_export(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = evp_skeymgmt_export(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x10),
                                param_2,param_3,param_4);
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("crypto/evp/s_lib.c",0x19,"EVP_SKEY_export");
  ERR_set_error(6,0xc0102,0);
  return 0;
}



undefined8 EVP_SKEY_get0_raw_key(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  long local_28;
  long local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 == 0 || param_3 == 0) || (param_1 == 0)) {
    ERR_new();
    ERR_set_debug("crypto/evp/s_lib.c",0x93,"EVP_SKEY_get0_raw_key");
    ERR_set_error(6,0xc0102,0);
    uVar1 = 0;
  }
  else {
    local_28 = param_2;
    local_20 = param_3;
    uVar1 = evp_skeymgmt_export(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x10),2,
                                get_secret_key,&local_28);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool EVP_SKEY_up_ref(int *param_1)

{
  int iVar1;
  
  LOCK();
  iVar1 = *param_1;
  *param_1 = *param_1 + 1;
  UNLOCK();
  return 1 < iVar1 + 1;
}



void EVP_SKEY_free(int *param_1)

{
  int iVar1;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  LOCK();
  iVar1 = *param_1;
  *param_1 = *param_1 + -1;
  UNLOCK();
  if ((iVar1 != 1) && (0 < iVar1 + -1)) {
    return;
  }
  evp_skeymgmt_freedata(*(undefined8 *)(param_1 + 6),*(undefined8 *)(param_1 + 4));
  EVP_SKEYMGMT_free(*(undefined8 *)(param_1 + 6));
  CRYPTO_THREAD_lock_free(*(undefined8 *)(param_1 + 2));
  CRYPTO_free(param_1);
  return;
}



long EVP_SKEY_import(void)

{
  long lVar1;
  long lVar2;
  undefined4 in_ECX;
  undefined8 in_R8;
  
  lVar1 = evp_skey_alloc_fetch();
  if (lVar1 != 0) {
    lVar2 = evp_skeymgmt_import(*(undefined8 *)(lVar1 + 0x18),in_ECX,in_R8);
    *(long *)(lVar1 + 0x10) = lVar2;
    if (lVar2 != 0) {
      return lVar1;
    }
    EVP_SKEY_free(lVar1);
  }
  return 0;
}



void EVP_SKEY_import_raw_key
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  long in_FS_OFFSET;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  OSSL_PARAM_construct_octet_string(&local_b8,"raw-bytes");
  local_68 = local_98;
  local_88 = local_b8;
  uStack_80 = uStack_b0;
  local_78 = local_a8;
  uStack_70 = uStack_a0;
  OSSL_PARAM_construct_end(&local_b8);
  local_60 = local_b8;
  uStack_58 = uStack_b0;
  local_40 = local_98;
  local_50 = local_a8;
  uStack_48 = uStack_a0;
  EVP_SKEY_import(param_1,param_2,param_5,2,&local_88);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



long EVP_SKEY_generate(void)

{
  long lVar1;
  long lVar2;
  undefined8 in_RCX;
  
  lVar1 = evp_skey_alloc_fetch();
  if (lVar1 != 0) {
    lVar2 = evp_skeymgmt_generate(*(undefined8 *)(lVar1 + 0x18),in_RCX);
    *(long *)(lVar1 + 0x10) = lVar2;
    if (lVar2 != 0) {
      return lVar1;
    }
    EVP_SKEY_free(lVar1);
  }
  return 0;
}



undefined8 EVP_SKEY_get0_key_id(long param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  if ((param_1 != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 0x18) + 0x50),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0010051a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)(*(undefined8 *)(param_1 + 0x10));
    return uVar1;
  }
  return 0;
}



undefined8 EVP_SKEY_get0_skeymgmt_name(long param_1)

{
  if (param_1 != 0) {
    return *(undefined8 *)(*(long *)(param_1 + 0x18) + 8);
  }
  return 0;
}



undefined8 EVP_SKEY_get0_provider_name(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = ossl_provider_name(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x18));
    return uVar1;
  }
  return 0;
}



undefined8 EVP_SKEY_is_a(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = EVP_SKEYMGMT_is_a(*(undefined8 *)(param_1 + 0x18));
    return uVar1;
  }
  return 0;
}



long EVP_SKEY_to_provider(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  int *piVar2;
  long in_FS_OFFSET;
  undefined1 local_38 [16];
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = (undefined1  [16])0x0;
  local_28 = 0;
  if (param_1 == 0) {
    ERR_new(param_3,param_2,0);
    ERR_set_debug("crypto/evp/s_lib.c",0x108,"EVP_SKEY_to_provider");
    ERR_set_error(6,0xc0102,0);
    param_1 = 0;
    goto LAB_00100663;
  }
  piVar2 = *(int **)(param_1 + 0x18);
  if (param_3 == 0) {
    piVar2 = (int *)EVP_SKEYMGMT_fetch(param_2,*(undefined8 *)(piVar2 + 2),param_4);
LAB_00100600:
    if (piVar2 == (int *)0x0) {
      ERR_new();
      ERR_set_debug("crypto/evp/s_lib.c",0x118,"EVP_SKEY_to_provider");
      ERR_set_error(6,0x8010d,0);
      param_1 = 0;
      goto LAB_00100663;
    }
    if ((**(int **)(param_1 + 0x18) == *piVar2) &&
       (*(long *)(*(int **)(param_1 + 0x18) + 6) == *(long *)(piVar2 + 6))) goto LAB_00100680;
    local_38._8_8_ = piVar2;
    local_38._0_4_ = 3;
    iVar1 = EVP_SKEY_export(param_1,3,0x100000,local_38);
    if ((iVar1 != 0) && (local_28 != 0)) {
      param_1 = evp_skey_alloc(piVar2);
      if (param_1 != 0) {
        *(long *)(param_1 + 0x10) = local_28;
        goto LAB_00100663;
      }
    }
  }
  else {
    if (*(long *)(piVar2 + 6) != param_3) {
      piVar2 = (int *)evp_skeymgmt_fetch_from_prov(param_3,*(undefined8 *)(piVar2 + 2),param_4);
      goto LAB_00100600;
    }
LAB_00100680:
    iVar1 = EVP_SKEY_up_ref(param_1);
    if (iVar1 != 0) {
      EVP_SKEYMGMT_free(piVar2);
      goto LAB_00100663;
    }
  }
  EVP_SKEYMGMT_free(piVar2);
  EVP_SKEY_free(0);
  param_1 = 0;
LAB_00100663:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


