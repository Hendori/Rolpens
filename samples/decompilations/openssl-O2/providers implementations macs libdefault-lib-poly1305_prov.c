
undefined1 * poly1305_gettable_params(void)

{
  return known_gettable_params;
}



undefined1 * poly1305_settable_ctx_params(void)

{
  return known_settable_ctx_params;
}



undefined8 poly1305_get_params(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = OSSL_PARAM_locate(param_1,&_LC0);
  if (lVar1 == 0) {
    return 1;
  }
  uVar2 = OSSL_PARAM_set_size_t(lVar1,0x10);
  return uVar2;
}



undefined8 poly1305_final(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = ossl_prov_is_running();
  if ((int)uVar1 != 0) {
    *(undefined4 *)(param_1 + 8) = 1;
    Poly1305_Final(param_1 + 0x10,param_2);
    *param_3 = 0x10;
    uVar1 = 1;
  }
  return uVar1;
}



undefined8 poly1305_update(long param_1,undefined8 param_2,long param_3)

{
  *(undefined4 *)(param_1 + 8) = 1;
  if (param_3 == 0) {
    return 1;
  }
  Poly1305_Update(param_1 + 0x10);
  return 1;
}



void poly1305_free(void *param_1)

{
  CRYPTO_free(param_1);
  return;
}



undefined8 * poly1305_dup(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  byte bVar5;
  
  bVar5 = 0;
  iVar1 = ossl_prov_is_running();
  puVar2 = (undefined8 *)0x0;
  if (iVar1 != 0) {
    puVar2 = (undefined8 *)
             CRYPTO_malloc(0x108,"providers/implementations/macs/poly1305_prov.c",0x44);
    if (puVar2 != (undefined8 *)0x0) {
      puVar4 = puVar2;
      for (lVar3 = 0x21; lVar3 != 0; lVar3 = lVar3 + -1) {
        *puVar4 = *param_1;
        param_1 = param_1 + (ulong)bVar5 * -2 + 1;
        puVar4 = puVar4 + (ulong)bVar5 * -2 + 1;
      }
    }
  }
  return puVar2;
}



undefined8 * poly1305_new(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  iVar1 = ossl_prov_is_running();
  puVar2 = (undefined8 *)0x0;
  if (iVar1 != 0) {
    puVar2 = (undefined8 *)
             CRYPTO_zalloc(0x108,"providers/implementations/macs/poly1305_prov.c",0x32);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = param_1;
    }
  }
  return puVar2;
}



undefined8 poly1305_set_ctx_params(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = OSSL_PARAM_locate_const(param_2,&_LC2);
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + 0x18) != 0x20) {
      ERR_new();
      ERR_set_debug("providers/implementations/macs/poly1305_prov.c",0x55,"poly1305_setkey");
      ERR_set_error(0x39,0x69,0);
      return 0;
    }
    Poly1305_Init(param_1 + 0x10);
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return 1;
}



bool poly1305_init(long param_1,long param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  
  iVar1 = ossl_prov_is_running();
  if ((iVar1 != 0) && (iVar1 = poly1305_set_ctx_params(param_1,param_4), iVar1 != 0)) {
    if (param_2 == 0) {
      return *(int *)(param_1 + 8) == 0;
    }
    if (param_3 == 0x20) {
      Poly1305_Init(param_1 + 0x10,param_2);
      *(undefined4 *)(param_1 + 8) = 0;
      return true;
    }
    ERR_new();
    ERR_set_debug("providers/implementations/macs/poly1305_prov.c",0x55,"poly1305_setkey");
    ERR_set_error(0x39,0x69,0);
  }
  return false;
}


