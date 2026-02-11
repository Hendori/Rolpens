
undefined8 kdf_has(void)

{
  return 1;
}



undefined8 * ossl_kdf_data_new(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)0x0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    puVar2 = (undefined8 *)
             CRYPTO_zalloc(0x10,"providers/implementations/keymgmt/kdf_legacy_kmgmt.c",0x24);
    if (puVar2 != (undefined8 *)0x0) {
      LOCK();
      *(undefined4 *)(puVar2 + 1) = 1;
      UNLOCK();
      uVar3 = ossl_prov_ctx_get0_libctx(param_1);
      *puVar2 = uVar3;
    }
  }
  return puVar2;
}



void kdf_newdata(void)

{
  ossl_kdf_data_new();
  return;
}



void ossl_kdf_data_free(void *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 != (void *)0x0) {
    LOCK();
    piVar1 = (int *)((long)param_1 + 8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) || (iVar2 + -1 < 1)) {
      CRYPTO_free(param_1);
      return;
    }
  }
  return;
}



void kdf_freedata(void)

{
  ossl_kdf_data_free();
  return;
}



undefined8 ossl_kdf_data_up_ref(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = ossl_prov_is_running();
  if ((int)uVar1 == 0) {
    return uVar1;
  }
  LOCK();
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  UNLOCK();
  return 1;
}


