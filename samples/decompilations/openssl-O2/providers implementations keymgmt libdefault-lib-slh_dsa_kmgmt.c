
undefined1 * slh_dsa_imexport_types(uint param_1)

{
  undefined1 *puVar1;
  
  puVar1 = slh_dsa_key_types;
  if ((param_1 & 3) == 0) {
    puVar1 = (undefined1 *)0x0;
  }
  return puVar1;
}



undefined1 * slh_dsa_gettable_params(void)

{
  return slh_dsa_params;
}



undefined1 * slh_dsa_gen_settable_params(void)

{
  return settable_0;
}



bool slh_dsa_gen_set_params(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  long in_FS_OFFSET;
  bool bVar4;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != 0) {
    lVar2 = OSSL_PARAM_locate_const(param_2,&_LC0);
    if (lVar2 != 0) {
      local_28 = param_1 + 0x18;
      iVar1 = OSSL_PARAM_get_octet_string(lVar2,&local_28,0x60,param_1 + 0x78);
      if (iVar1 == 0) {
        *(undefined8 *)(param_1 + 0x78) = 0;
        bVar4 = false;
        goto LAB_001000c0;
      }
    }
    lVar2 = OSSL_PARAM_locate_const(param_2,"properties");
    bVar4 = true;
    if (lVar2 == 0) goto LAB_001000c0;
    if (*(int *)(lVar2 + 8) == 4) {
      CRYPTO_free(*(void **)(param_1 + 0x10));
      pcVar3 = CRYPTO_strdup(*(char **)(lVar2 + 0x10),
                             "providers/implementations/keymgmt/slh_dsa_kmgmt.c",0x180);
      bVar4 = pcVar3 != (char *)0x0;
      *(char **)(param_1 + 0x10) = pcVar3;
      goto LAB_001000c0;
    }
  }
  bVar4 = false;
LAB_001000c0:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void slh_dsa_gen_cleanup(void *param_1)

{
  OPENSSL_cleanse((void *)((long)param_1 + 0x18),*(size_t *)((long)param_1 + 0x78));
  CRYPTO_free(*(void **)((long)param_1 + 0x10));
  CRYPTO_free(param_1);
  return;
}



undefined8 slh_dsa_load(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = ossl_prov_is_running();
  if ((param_2 == 8) && (iVar2 != 0)) {
    uVar1 = *param_1;
    *param_1 = 0;
    return uVar1;
  }
  return 0;
}



long slh_dsa_gen(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  iVar1 = ossl_prov_is_running();
  if (((iVar1 != 0) &&
      (lVar2 = ossl_slh_dsa_key_new
                         (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),param_2),
      lVar2 != 0)) && (lVar3 = ossl_slh_dsa_hash_ctx_new(lVar2), lVar3 != 0)) {
    iVar1 = ossl_slh_dsa_generate_key
                      (lVar3,lVar2,*(undefined8 *)(param_1 + 8),param_1 + 0x18,
                       *(undefined8 *)(param_1 + 0x78));
    if (iVar1 != 0) {
      ossl_slh_dsa_hash_ctx_free(lVar3);
      return lVar2;
    }
    ossl_slh_dsa_hash_ctx_free(lVar3);
    ossl_slh_dsa_key_free(lVar2);
  }
  return 0;
}



void slh_dsa_sha2_128s_gen(undefined8 param_1)

{
  slh_dsa_gen(param_1,"SLH-DSA-SHA2-128s");
  return;
}



void slh_dsa_sha2_128f_gen(undefined8 param_1)

{
  slh_dsa_gen(param_1,"SLH-DSA-SHA2-128f");
  return;
}



void slh_dsa_sha2_192s_gen(undefined8 param_1)

{
  slh_dsa_gen(param_1,"SLH-DSA-SHA2-192s");
  return;
}



void slh_dsa_sha2_192f_gen(undefined8 param_1)

{
  slh_dsa_gen(param_1,"SLH-DSA-SHA2-192f");
  return;
}



void slh_dsa_sha2_256s_gen(undefined8 param_1)

{
  slh_dsa_gen(param_1,"SLH-DSA-SHA2-256s");
  return;
}



void slh_dsa_sha2_256f_gen(undefined8 param_1)

{
  slh_dsa_gen(param_1,"SLH-DSA-SHA2-256f");
  return;
}



void slh_dsa_shake_128s_gen(undefined8 param_1)

{
  slh_dsa_gen(param_1,"SLH-DSA-SHAKE-128s");
  return;
}



void slh_dsa_shake_128f_gen(undefined8 param_1)

{
  slh_dsa_gen(param_1,"SLH-DSA-SHAKE-128f");
  return;
}



void slh_dsa_shake_192s_gen(undefined8 param_1)

{
  slh_dsa_gen(param_1,"SLH-DSA-SHAKE-192s");
  return;
}



void slh_dsa_shake_192f_gen(undefined8 param_1)

{
  slh_dsa_gen(param_1,"SLH-DSA-SHAKE-192f");
  return;
}



void slh_dsa_shake_256s_gen(undefined8 param_1)

{
  slh_dsa_gen(param_1,"SLH-DSA-SHAKE-256s");
  return;
}



void slh_dsa_shake_256f_gen(undefined8 param_1)

{
  slh_dsa_gen(param_1,"SLH-DSA-SHAKE-256f");
  return;
}



void slh_dsa_free_key(void)

{
  ossl_slh_dsa_key_free();
  return;
}



undefined8 slh_dsa_shake_128s_new_key(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    uVar2 = ossl_prov_ctx_get0_libctx(param_1);
    uVar2 = ossl_slh_dsa_key_new(uVar2,0,"SLH-DSA-SHAKE-128s");
    return uVar2;
  }
  return 0;
}



void * slh_dsa_gen_init(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  void *ptr;
  
  uVar2 = ossl_prov_ctx_get0_libctx();
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    ptr = (void *)CRYPTO_zalloc(0x80,"providers/implementations/keymgmt/slh_dsa_kmgmt.c",0x10c);
    if (ptr != (void *)0x0) {
      *(undefined8 *)((long)ptr + 8) = uVar2;
      iVar1 = slh_dsa_gen_set_params(ptr,param_3);
      if (iVar1 != 0) {
        return ptr;
      }
      CRYPTO_free(ptr);
    }
  }
  return (void *)0x0;
}



bool slh_dsa_get_params(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar3 = OSSL_PARAM_locate(param_2,&_LC15);
  if (lVar3 != 0) {
    iVar1 = ossl_slh_dsa_key_get_pub_len(param_1);
    iVar1 = OSSL_PARAM_set_int(lVar3,iVar1 * 8);
    if (iVar1 == 0) {
      return false;
    }
  }
  lVar3 = OSSL_PARAM_locate(param_2,"security-bits");
  if (lVar3 != 0) {
    iVar1 = ossl_slh_dsa_key_get_n(param_1);
    iVar1 = OSSL_PARAM_set_int(lVar3,iVar1 * 8);
    if (iVar1 == 0) {
      return false;
    }
  }
  lVar3 = OSSL_PARAM_locate(param_2,"max-size");
  if (lVar3 != 0) {
    uVar2 = ossl_slh_dsa_key_get_sig_len(param_1);
    iVar1 = OSSL_PARAM_set_int(lVar3,uVar2);
    if (iVar1 == 0) {
      return false;
    }
  }
  lVar3 = ossl_slh_dsa_key_get_priv(param_1);
  if ((lVar3 != 0) && (lVar4 = OSSL_PARAM_locate(param_2,&_LC18), lVar4 != 0)) {
    uVar5 = ossl_slh_dsa_key_get_priv_len(param_1);
    iVar1 = OSSL_PARAM_set_octet_string(lVar4,lVar3,uVar5);
    if (iVar1 == 0) {
      return false;
    }
  }
  lVar3 = ossl_slh_dsa_key_get_pub(param_1);
  if ((lVar3 != 0) && (lVar4 = OSSL_PARAM_locate(param_2,&_LC20), lVar4 != 0)) {
    uVar5 = ossl_slh_dsa_key_get_pub_len(param_1);
    iVar1 = OSSL_PARAM_set_octet_string(lVar4,lVar3,uVar5);
    if (iVar1 == 0) {
      return false;
    }
  }
  lVar3 = OSSL_PARAM_locate(param_2,"mandatory-digest");
  if (lVar3 == 0) {
    return true;
  }
  iVar1 = OSSL_PARAM_set_utf8_string(lVar3,&_LC21);
  return iVar1 != 0;
}



undefined4 slh_dsa_export(long param_1,ulong param_2,code *param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  iVar1 = ossl_prov_is_running();
  if (((iVar1 == 0) || (param_1 == 0)) || ((param_2 & 3) == 0)) {
    return 0;
  }
  lVar3 = OSSL_PARAM_BLD_new();
  if (lVar3 == 0) {
    return 0;
  }
  lVar4 = ossl_slh_dsa_key_get_pub(param_1);
  if (lVar4 != 0) {
    if (((param_2 & 1) == 0) || (lVar4 = ossl_slh_dsa_key_get_priv(param_1), lVar4 == 0)) {
      uVar5 = ossl_slh_dsa_key_get_pub_len(param_1);
      uVar6 = ossl_slh_dsa_key_get_pub(param_1);
      iVar1 = ossl_param_build_set_octet_string(lVar3,0,&_LC20,uVar6,uVar5);
    }
    else {
      uVar5 = ossl_slh_dsa_key_get_priv_len(param_1);
      uVar6 = ossl_slh_dsa_key_get_priv(param_1);
      iVar1 = ossl_param_build_set_octet_string(lVar3,0,&_LC18,uVar6,uVar5);
    }
    if ((iVar1 != 0) && (lVar4 = OSSL_PARAM_BLD_to_param(lVar3), lVar4 != 0)) {
      uVar2 = (*param_3)(lVar4,param_4);
      OSSL_PARAM_free(lVar4);
      goto LAB_0010065b;
    }
  }
  uVar2 = 0;
LAB_0010065b:
  OSSL_PARAM_BLD_free(lVar3);
  return uVar2;
}



undefined8 slh_dsa_dup_key(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = ossl_slh_dsa_key_dup(param_1,param_2);
  return uVar2;
}



undefined8 slh_dsa_import(long param_1,uint param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = ossl_prov_is_running();
  if (((param_1 != 0) && (iVar1 != 0)) && ((param_2 & 3) != 0)) {
    uVar2 = ossl_slh_dsa_key_fromdata(param_1,param_3,param_2 & 1);
    return uVar2;
  }
  return 0;
}



undefined8 slh_dsa_match(long param_1,long param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = ossl_prov_is_running();
  if (((iVar1 != 0) && (param_1 != 0)) && (param_2 != 0)) {
    uVar2 = ossl_slh_dsa_key_equal(param_1,param_2,param_3);
    return uVar2;
  }
  return 0;
}



undefined8 slh_dsa_has(long param_1,uint param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = ossl_prov_is_running();
  if ((iVar1 != 0) && (param_1 != 0)) {
    if ((param_2 & 3) == 0) {
      return 1;
    }
    uVar2 = ossl_slh_dsa_key_has(param_1,param_2);
    return uVar2;
  }
  return 0;
}



undefined8 slh_dsa_validate(long param_1,uint param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = ossl_prov_is_running();
  if ((param_1 == 0) || (iVar1 == 0)) {
    return 0;
  }
  if ((param_2 & 3) != 0) {
    iVar1 = ossl_slh_dsa_key_has(param_1,param_2);
    if (iVar1 == 0) {
      return 0;
    }
    if ((param_2 & 3) == 3) {
      uVar2 = ossl_slh_dsa_key_pairwise_check(param_1);
      return uVar2;
    }
  }
  return 1;
}



undefined8 slh_dsa_shake_128f_new_key(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    uVar2 = ossl_prov_ctx_get0_libctx(param_1);
    uVar2 = ossl_slh_dsa_key_new(uVar2,0,"SLH-DSA-SHAKE-128f");
    return uVar2;
  }
  return 0;
}



undefined8 slh_dsa_shake_192s_new_key(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    uVar2 = ossl_prov_ctx_get0_libctx(param_1);
    uVar2 = ossl_slh_dsa_key_new(uVar2,0,"SLH-DSA-SHAKE-192s");
    return uVar2;
  }
  return 0;
}



undefined8 slh_dsa_shake_192f_new_key(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    uVar2 = ossl_prov_ctx_get0_libctx(param_1);
    uVar2 = ossl_slh_dsa_key_new(uVar2,0,"SLH-DSA-SHAKE-192f");
    return uVar2;
  }
  return 0;
}



undefined8 slh_dsa_shake_256s_new_key(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    uVar2 = ossl_prov_ctx_get0_libctx(param_1);
    uVar2 = ossl_slh_dsa_key_new(uVar2,0,"SLH-DSA-SHAKE-256s");
    return uVar2;
  }
  return 0;
}



undefined8 slh_dsa_sha2_128s_new_key(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    uVar2 = ossl_prov_ctx_get0_libctx(param_1);
    uVar2 = ossl_slh_dsa_key_new(uVar2,0,"SLH-DSA-SHA2-128s");
    return uVar2;
  }
  return 0;
}



undefined8 slh_dsa_shake_256f_new_key(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    uVar2 = ossl_prov_ctx_get0_libctx(param_1);
    uVar2 = ossl_slh_dsa_key_new(uVar2,0,"SLH-DSA-SHAKE-256f");
    return uVar2;
  }
  return 0;
}



undefined8 slh_dsa_sha2_128f_new_key(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    uVar2 = ossl_prov_ctx_get0_libctx(param_1);
    uVar2 = ossl_slh_dsa_key_new(uVar2,0,"SLH-DSA-SHA2-128f");
    return uVar2;
  }
  return 0;
}



undefined8 slh_dsa_sha2_192s_new_key(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    uVar2 = ossl_prov_ctx_get0_libctx(param_1);
    uVar2 = ossl_slh_dsa_key_new(uVar2,0,"SLH-DSA-SHA2-192s");
    return uVar2;
  }
  return 0;
}



undefined8 slh_dsa_sha2_192f_new_key(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    uVar2 = ossl_prov_ctx_get0_libctx(param_1);
    uVar2 = ossl_slh_dsa_key_new(uVar2,0,"SLH-DSA-SHA2-192f");
    return uVar2;
  }
  return 0;
}



undefined8 slh_dsa_sha2_256s_new_key(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    uVar2 = ossl_prov_ctx_get0_libctx(param_1);
    uVar2 = ossl_slh_dsa_key_new(uVar2,0,"SLH-DSA-SHA2-256s");
    return uVar2;
  }
  return 0;
}



undefined8 slh_dsa_sha2_256f_new_key(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    uVar2 = ossl_prov_ctx_get0_libctx(param_1);
    uVar2 = ossl_slh_dsa_key_new(uVar2,0,"SLH-DSA-SHA2-256f");
    return uVar2;
  }
  return 0;
}


