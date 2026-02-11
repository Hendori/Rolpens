
void ossl_slh_dsa_hash_ctx_free(void *param_1)

{
  if (param_1 != (void *)0x0) {
    EVP_MD_CTX_free(*(undefined8 *)((long)param_1 + 8));
    if (*(long *)((long)param_1 + 0x10) != *(long *)((long)param_1 + 8)) {
      EVP_MD_CTX_free();
    }
    EVP_MAC_CTX_free(*(undefined8 *)((long)param_1 + 0x18));
    CRYPTO_free(param_1);
    return;
  }
  return;
}



long * ossl_slh_dsa_hash_ctx_new(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)CRYPTO_zalloc(0x28,"crypto/slh_dsa/slh_dsa_hash_ctx.c",0x1c);
  if (plVar2 == (long *)0x0) {
    return (long *)0x0;
  }
  *plVar2 = param_1;
  lVar3 = EVP_MD_CTX_new();
  plVar2[1] = lVar3;
  if ((lVar3 != 0) &&
     (iVar1 = EVP_DigestInit_ex2(lVar3,*(undefined8 *)(param_1 + 0xb8),0), iVar1 == 1)) {
    if (*(long *)(param_1 + 0xc0) == 0) {
      return plVar2;
    }
    if (*(long *)(param_1 + 0xc0) == *(long *)(param_1 + 0xb8)) {
      plVar2[2] = plVar2[1];
    }
    else {
      lVar3 = EVP_MD_CTX_new();
      plVar2[2] = lVar3;
      if ((lVar3 == 0) ||
         (iVar1 = EVP_DigestInit_ex2(lVar3,*(undefined8 *)(param_1 + 0xc0),0), iVar1 != 1))
      goto LAB_00100108;
    }
    if (*(long *)(param_1 + 200) == 0) {
      return plVar2;
    }
    lVar3 = EVP_MAC_CTX_new();
    plVar2[3] = lVar3;
    if (lVar3 != 0) {
      return plVar2;
    }
  }
LAB_00100108:
  ossl_slh_dsa_hash_ctx_free(plVar2);
  return (long *)0x0;
}



undefined8 * ossl_slh_dsa_hash_ctx_dup(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = (undefined8 *)CRYPTO_zalloc(0x28,"crypto/slh_dsa/slh_dsa_hash_ctx.c",0x46);
  if (puVar1 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  lVar2 = param_1[1];
  *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_1 + 4);
  *puVar1 = *param_1;
  if (lVar2 == 0) {
    if (param_1[2] != 0) {
LAB_001001c1:
      lVar2 = EVP_MD_CTX_dup();
      puVar1[2] = lVar2;
      if (lVar2 == 0) goto LAB_001001cf;
    }
  }
  else {
    lVar2 = EVP_MD_CTX_dup();
    puVar1[1] = lVar2;
    if (lVar2 == 0) goto LAB_001001cf;
    if (param_1[2] != 0) {
      if (param_1[2] != param_1[1]) goto LAB_001001c1;
      puVar1[2] = lVar2;
    }
  }
  if (param_1[3] == 0) {
    return puVar1;
  }
  lVar2 = EVP_MAC_CTX_dup();
  puVar1[3] = lVar2;
  if (lVar2 != 0) {
    return puVar1;
  }
LAB_001001cf:
  ossl_slh_dsa_hash_ctx_free(puVar1);
  return (undefined8 *)0x0;
}


