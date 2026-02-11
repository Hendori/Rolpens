
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
     (uVar3 = OSSL_PARAM_set_size_t(lVar2,*(undefined1 *)(param_1 + 0x80)), (int)uVar3 == 0)) {
    return uVar3;
  }
  lVar2 = OSSL_PARAM_locate(param_2,"block-size");
  if (lVar2 != 0) {
    iVar1 = OSSL_PARAM_set_size_t(lVar2,0x40);
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
  uVar1 = ossl_blake2s_update();
  return uVar1;
}



undefined8 * blake2_mac_dup(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  int iVar17;
  undefined8 *puVar18;
  
  iVar17 = ossl_prov_is_running();
  puVar18 = (undefined8 *)0x0;
  if (iVar17 != 0) {
    puVar18 = (undefined8 *)
              CRYPTO_zalloc(0xc0,"providers/implementations/macs/blake2_mac_impl.c",0x41);
    if (puVar18 != (undefined8 *)0x0) {
      uVar1 = param_1[1];
      uVar2 = param_1[2];
      uVar3 = param_1[3];
      uVar4 = param_1[4];
      uVar5 = param_1[5];
      uVar6 = param_1[6];
      uVar7 = param_1[7];
      uVar8 = param_1[8];
      uVar9 = param_1[9];
      uVar10 = param_1[10];
      uVar11 = param_1[0xb];
      *puVar18 = *param_1;
      puVar18[1] = uVar1;
      uVar1 = param_1[0xc];
      uVar12 = param_1[0xd];
      uVar13 = param_1[0xe];
      uVar14 = param_1[0xf];
      puVar18[2] = uVar2;
      puVar18[3] = uVar3;
      uVar2 = param_1[0x10];
      uVar3 = param_1[0x11];
      uVar15 = param_1[0x12];
      uVar16 = param_1[0x13];
      puVar18[4] = uVar4;
      puVar18[5] = uVar5;
      puVar18[6] = uVar6;
      puVar18[7] = uVar7;
      uVar4 = param_1[0x14];
      uVar5 = param_1[0x15];
      uVar6 = param_1[0x16];
      uVar7 = param_1[0x17];
      puVar18[8] = uVar8;
      puVar18[9] = uVar9;
      puVar18[10] = uVar10;
      puVar18[0xb] = uVar11;
      puVar18[0xc] = uVar1;
      puVar18[0xd] = uVar12;
      puVar18[0xe] = uVar13;
      puVar18[0xf] = uVar14;
      puVar18[0x10] = uVar2;
      puVar18[0x11] = uVar3;
      puVar18[0x12] = uVar15;
      puVar18[0x13] = uVar16;
      puVar18[0x14] = uVar4;
      puVar18[0x15] = uVar5;
      puVar18[0x16] = uVar6;
      puVar18[0x17] = uVar7;
    }
  }
  return puVar18;
}



long blake2_mac_new(void)

{
  int iVar1;
  long lVar2;
  
  lVar2 = 0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    lVar2 = CRYPTO_zalloc(0xc0,"providers/implementations/macs/blake2_mac_impl.c",0x31);
    if (lVar2 != 0) {
      ossl_blake2s_param_init(lVar2 + 0x80);
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
  
  if (0x1f < param_3 - 1) {
    ERR_new();
    ERR_set_debug("providers/implementations/macs/blake2_mac_impl.c",0x5e,"blake2_setkey");
    ERR_set_error(0x39,0x69,0);
    return 0;
  }
  pvVar2 = memcpy((void *)(param_1 + 0xa0),param_2,param_3);
  if (param_3 != 0x20) {
    puVar4 = (undefined8 *)((long)pvVar2 + param_3);
    uVar3 = 0x20 - param_3;
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
  ossl_blake2s_param_set_key_length(param_1 + 0x80,param_3 & 0xffffffff);
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
      if ((iVar1 != 0) && (local_28 - 1U < 0x20)) {
        ossl_blake2s_param_set_digest_length(param_1 + 0x80);
        goto LAB_001003a4;
      }
      ERR_new();
      ERR_set_debug("providers/implementations/macs/blake2_mac_impl.c",0xcb,
                    "blake2_mac_set_ctx_params");
      ERR_set_error(0x39,0x71,0);
LAB_00100374:
      uVar3 = 0;
      goto LAB_00100376;
    }
LAB_001003a4:
    lVar2 = OSSL_PARAM_locate_const(param_2,&_LC3);
    if (lVar2 != 0) {
      iVar1 = blake2_setkey(param_1,*(undefined8 *)(lVar2 + 0x10),*(undefined8 *)(lVar2 + 0x18));
      if (iVar1 == 0) goto LAB_00100374;
    }
    lVar2 = OSSL_PARAM_locate_const(param_2,"custom");
    if (lVar2 != 0) {
      if (8 < *(ulong *)(lVar2 + 0x18)) {
        ERR_new();
        ERR_set_debug("providers/implementations/macs/blake2_mac_impl.c",0xdc,
                      "blake2_mac_set_ctx_params");
        ERR_set_error(0x39,0x6f,0);
        goto LAB_00100374;
      }
      ossl_blake2s_param_set_personal(param_1 + 0x80,*(undefined8 *)(lVar2 + 0x10));
    }
    lVar2 = OSSL_PARAM_locate_const(param_2,&_LC5);
    if (lVar2 != 0) {
      if (8 < *(ulong *)(lVar2 + 0x18)) {
        ERR_new();
        ERR_set_debug("providers/implementations/macs/blake2_mac_impl.c",0xe8,
                      "blake2_mac_set_ctx_params");
        ERR_set_error(0x39,0x70,0);
        goto LAB_00100374;
      }
      ossl_blake2s_param_set_salt(param_1 + 0x80,*(undefined8 *)(lVar2 + 0x10));
    }
  }
  uVar3 = 1;
LAB_00100376:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
        if (*(char *)(param_1 + 0x81) != '\0') goto LAB_00100516;
        ERR_new();
        ERR_set_debug("providers/implementations/macs/blake2_mac_impl.c",0x75,"blake2_mac_init");
        ERR_set_error(0x39,0x72,0);
      }
      else {
        iVar1 = blake2_setkey(param_1,param_2,param_3);
        if (iVar1 != 0) {
LAB_00100516:
          uVar2 = ossl_blake2s_init_key(param_1,param_1 + 0x80,param_1 + 0xa0);
          return uVar2;
        }
      }
    }
  }
  return 0;
}



undefined8 blake2_mac_final(long param_1,undefined8 param_2,ulong *param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 == 0) {
    return 0;
  }
  *param_3 = (ulong)*(byte *)(param_1 + 0x80);
  uVar2 = ossl_blake2s_final(param_2,param_1);
  return uVar2;
}



void blake2_mac_free(void *param_1)

{
  if (param_1 != (void *)0x0) {
    OPENSSL_cleanse((void *)((long)param_1 + 0xa0),0x20);
    CRYPTO_free(param_1);
    return;
  }
  return;
}


