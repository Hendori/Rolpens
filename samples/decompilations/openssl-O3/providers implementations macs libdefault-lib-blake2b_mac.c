
undefined1 * blake2_gettable_ctx_params(void)

{
  return known_gettable_ctx_params;
}



undefined1 * blake2_mac_settable_ctx_params(void)

{
  return known_settable_ctx_params;
}



ulong blake2_get_ctx_params(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = OSSL_PARAM_locate(param_2,&_LC0);
  if ((lVar2 != 0) &&
     (uVar3 = OSSL_PARAM_set_size_t(lVar2,*(undefined1 *)(param_1 + 0xf0)), (int)uVar3 == 0)) {
    return uVar3;
  }
  lVar2 = OSSL_PARAM_locate(param_2,"block-size");
  if (lVar2 != 0) {
    iVar1 = OSSL_PARAM_set_size_t(lVar2,0x80);
    return (ulong)(iVar1 != 0);
  }
  return 1;
}



undefined8 blake2_mac_update(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    return 1;
  }
  uVar1 = ossl_blake2b_update();
  return uVar1;
}



undefined8 * blake2_mac_dup(undefined8 *param_1)

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
             CRYPTO_zalloc(0x170,"providers/implementations/macs/blake2_mac_impl.c",0x41);
    if (puVar2 != (undefined8 *)0x0) {
      puVar4 = puVar2;
      for (lVar3 = 0x2e; lVar3 != 0; lVar3 = lVar3 + -1) {
        *puVar4 = *param_1;
        param_1 = param_1 + (ulong)bVar5 * -2 + 1;
        puVar4 = puVar4 + (ulong)bVar5 * -2 + 1;
      }
    }
  }
  return puVar2;
}



long blake2_mac_new(void)

{
  int iVar1;
  long lVar2;
  
  lVar2 = 0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    lVar2 = CRYPTO_zalloc(0x170,"providers/implementations/macs/blake2_mac_impl.c",0x31);
    if (lVar2 != 0) {
      ossl_blake2b_param_init(lVar2 + 0xf0);
    }
  }
  return lVar2;
}



undefined8 blake2_setkey(long param_1,void *param_2,size_t param_3)

{
  uint uVar1;
  void *pvVar2;
  ulong uVar3;
  undefined8 *puVar4;
  uint uVar5;
  
  if (0x3f < param_3 - 1) {
    ERR_new();
    ERR_set_debug("providers/implementations/macs/blake2_mac_impl.c",0x5e,"blake2_setkey");
    ERR_set_error(0x39,0x69,0);
    return 0;
  }
  pvVar2 = memcpy((void *)(param_1 + 0x130),param_2,param_3);
  if (param_3 != 0x40) {
    puVar4 = (undefined8 *)((long)pvVar2 + param_3);
    uVar3 = 0x40 - param_3;
    uVar1 = (uint)uVar3;
    if (uVar1 < 8) {
      if ((uVar3 & 4) == 0) {
        if ((uVar1 != 0) && (*(undefined1 *)puVar4 = 0, (uVar3 & 2) != 0)) {
          *(undefined2 *)((long)puVar4 + ((uVar3 & 0xffffffff) - 2)) = 0;
        }
      }
      else {
        *(undefined4 *)puVar4 = 0;
        *(undefined4 *)((long)puVar4 + ((uVar3 & 0xffffffff) - 4)) = 0;
      }
    }
    else {
      *puVar4 = 0;
      *(undefined8 *)((long)puVar4 + ((uVar3 & 0xffffffff) - 8)) = 0;
      uVar1 = uVar1 + ((int)puVar4 - (int)((ulong)(puVar4 + 1) & 0xfffffffffffffff8)) & 0xfffffff8;
      if (7 < uVar1) {
        uVar3 = 0;
        do {
          uVar5 = (int)uVar3 + 8;
          *(undefined8 *)(((ulong)(puVar4 + 1) & 0xfffffffffffffff8) + uVar3) = 0;
          uVar3 = (ulong)uVar5;
        } while (uVar5 < uVar1);
      }
    }
  }
  ossl_blake2b_param_set_key_length(param_1 + 0xf0,param_3 & 0xffffffff);
  return 1;
}



undefined8 blake2_mac_set_ctx_params(long param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 != (long *)0x0) && (*param_2 != 0)) {
    lVar2 = OSSL_PARAM_locate_const(param_2,&_LC0);
    if (lVar2 != 0) {
      iVar1 = OSSL_PARAM_get_size_t(lVar2,&local_28);
      if ((iVar1 != 0) && (local_28 - 1U < 0x40)) {
        ossl_blake2b_param_set_digest_length(param_1 + 0xf0);
        goto LAB_00100324;
      }
      ERR_new();
      ERR_set_debug("providers/implementations/macs/blake2_mac_impl.c",0xcb,
                    "blake2_mac_set_ctx_params");
      ERR_set_error(0x39,0x71,0);
LAB_001002f4:
      uVar3 = 0;
      goto LAB_001002f6;
    }
LAB_00100324:
    lVar2 = OSSL_PARAM_locate_const(param_2,&_LC3);
    if (lVar2 != 0) {
      iVar1 = blake2_setkey(param_1,*(undefined8 *)(lVar2 + 0x10),*(undefined8 *)(lVar2 + 0x18));
      if (iVar1 == 0) goto LAB_001002f4;
    }
    lVar2 = OSSL_PARAM_locate_const(param_2,"custom");
    if (lVar2 != 0) {
      if (0x10 < *(ulong *)(lVar2 + 0x18)) {
        ERR_new();
        ERR_set_debug("providers/implementations/macs/blake2_mac_impl.c",0xdc,
                      "blake2_mac_set_ctx_params");
        ERR_set_error(0x39,0x6f,0);
        goto LAB_001002f4;
      }
      ossl_blake2b_param_set_personal(param_1 + 0xf0,*(undefined8 *)(lVar2 + 0x10));
    }
    lVar2 = OSSL_PARAM_locate_const(param_2,&_LC5);
    if (lVar2 != 0) {
      if (0x10 < *(ulong *)(lVar2 + 0x18)) {
        ERR_new();
        ERR_set_debug("providers/implementations/macs/blake2_mac_impl.c",0xe8,
                      "blake2_mac_set_ctx_params");
        ERR_set_error(0x39,0x70,0);
        goto LAB_001002f4;
      }
      ossl_blake2b_param_set_salt(param_1 + 0xf0,*(undefined8 *)(lVar2 + 0x10));
    }
  }
  uVar3 = 1;
LAB_001002f6:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 blake2_mac_final(long param_1,undefined8 param_2,ulong *param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 == 0) {
    return 0;
  }
  *param_3 = (ulong)*(byte *)(param_1 + 0xf0);
  uVar2 = ossl_blake2b_final(param_2,param_1);
  return uVar2;
}



undefined8 blake2_mac_init(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    iVar1 = blake2_mac_set_ctx_params(param_1,param_4);
    if (iVar1 != 0) {
      if (param_2 == 0) {
        if (*(char *)(param_1 + 0xf1) != '\0') goto LAB_001004e6;
        ERR_new();
        ERR_set_debug("providers/implementations/macs/blake2_mac_impl.c",0x75,"blake2_mac_init");
        ERR_set_error(0x39,0x72,0);
      }
      else {
        iVar1 = blake2_setkey(param_1,param_2,param_3);
        if (iVar1 != 0) {
LAB_001004e6:
          uVar2 = ossl_blake2b_init_key(param_1,param_1 + 0xf0,param_1 + 0x130);
          return uVar2;
        }
      }
    }
  }
  return 0;
}



void blake2_mac_free(void *param_1)

{
  if (param_1 != (void *)0x0) {
    OPENSSL_cleanse((void *)((long)param_1 + 0x130),0x40);
    CRYPTO_free(param_1);
    return;
  }
  return;
}


