
undefined1 * ml_kem_settable_ctx_params(void)

{
  return params_5;
}



undefined8 ml_kem_set_ctx_params(long param_1,long *param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long in_FS_OFFSET;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    if ((*(int *)(param_1 + 0x30) == 0x2000) && (*(void **)(param_1 + 0x28) != (void *)0x0)) {
      OPENSSL_cleanse(*(void **)(param_1 + 0x28),0x20);
      *(undefined8 *)(param_1 + 0x28) = 0;
    }
    if (((param_2 != (long *)0x0) && (*param_2 != 0)) && (*(int *)(param_1 + 0x30) == 0x1000)) {
      lVar3 = OSSL_PARAM_locate_const(param_2,&_LC0);
      if (lVar3 != 0) {
        *(long *)(param_1 + 0x28) = param_1 + 8;
        local_28 = 0x20;
        iVar1 = OSSL_PARAM_get_octet_string(lVar3,param_1 + 0x28,0x20,&local_28);
        if ((iVar1 == 0) || (uVar2 = 1, local_28 != 0x20)) {
          ERR_new();
          ERR_set_debug("providers/implementations/kem/ml_kem_kem.c",0x7f,"ml_kem_set_ctx_params");
          ERR_set_error(0x39,0x9a,0);
          *(undefined8 *)(param_1 + 0x28) = 0;
          uVar2 = 0;
        }
        goto LAB_0010005c;
      }
    }
    uVar2 = 1;
  }
LAB_0010005c:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void ml_kem_freectx(void *param_1)

{
  if (*(void **)((long)param_1 + 0x28) != (void *)0x0) {
    OPENSSL_cleanse(*(void **)((long)param_1 + 0x28),0x20);
  }
  CRYPTO_free(param_1);
  return;
}



undefined8
ml_kem_decapsulate(long *param_1,long param_2,ulong *param_3,undefined8 param_4,undefined8 param_5)

{
  undefined8 uVar1;
  
  if (*(long *)(*param_1 + 0x50) == 0) {
    ERR_new(param_1,param_2,param_4,param_5);
    ERR_set_debug("providers/implementations/kem/ml_kem_kem.c",0xe8,"ml_kem_decapsulate");
    ERR_set_error(0x39,0x80,0);
  }
  else {
    if (param_2 != 0) {
      if (param_3 != (ulong *)0x0) {
        if (*param_3 < 0x20) {
          ERR_new(param_2,param_2,param_4,param_5);
          ERR_set_debug("providers/implementations/kem/ml_kem_kem.c",0xf7,"ml_kem_decapsulate");
          ERR_set_error(0x39,0x6a,"shared-secret buffer too small");
          return 0;
        }
        *param_3 = 0x20;
      }
      uVar1 = ossl_ml_kem_decap(param_2,0x20);
      return uVar1;
    }
    if (param_3 != (ulong *)0x0) {
      *param_3 = 0x20;
      return 1;
    }
  }
  return 0;
}



undefined4 ml_kem_encapsulate(long *param_1,long param_2,ulong *param_3,long param_4,ulong *param_5)

{
  long *plVar1;
  ulong uVar2;
  undefined4 uVar3;
  
  plVar1 = (long *)*param_1;
  if (plVar1[8] == 0) {
    ERR_new();
    uVar3 = 0;
    ERR_set_debug("providers/implementations/kem/ml_kem_kem.c",0x9d,"ml_kem_encapsulate");
    ERR_set_error(0x39,0x80,0);
  }
  else {
    uVar2 = *(ulong *)(*plVar1 + 0x28);
    if (param_2 == 0) {
      if (param_3 == (ulong *)0x0 && param_5 == (ulong *)0x0) {
        return 0;
      }
      if (param_3 != (ulong *)0x0) {
        *param_3 = uVar2;
      }
      if (param_5 != (ulong *)0x0) {
        *param_5 = 0x20;
      }
      return 1;
    }
    if (param_4 == 0) {
      ERR_new();
      uVar3 = 0;
      ERR_set_debug("providers/implementations/kem/ml_kem_kem.c",0xae,"ml_kem_encapsulate");
      ERR_set_error(0x39,0x6a,"NULL shared-secret buffer");
    }
    else if (param_3 == (ulong *)0x0) {
      ERR_new();
      uVar3 = 0;
      ERR_set_debug("providers/implementations/kem/ml_kem_kem.c",0xb4,"ml_kem_encapsulate");
      ERR_set_error(0x39,0xf7,"null ciphertext input/output length pointer");
    }
    else if (*param_3 < uVar2) {
      ERR_new();
      uVar3 = 0;
      ERR_set_debug("providers/implementations/kem/ml_kem_kem.c",0xb8,"ml_kem_encapsulate");
      ERR_set_error(0x39,0x6a,"ciphertext buffer too small");
    }
    else {
      *param_3 = uVar2;
      if (param_5 == (ulong *)0x0) {
        ERR_new();
        uVar3 = 0;
        ERR_set_debug("providers/implementations/kem/ml_kem_kem.c",0xc0,"ml_kem_encapsulate");
        ERR_set_error(0x39,0xf7,"null shared secret input/output length pointer");
      }
      else if (*param_5 < 0x20) {
        ERR_new();
        uVar3 = 0;
        ERR_set_debug("providers/implementations/kem/ml_kem_kem.c",0xc4,"ml_kem_encapsulate");
        ERR_set_error(0x39,0x6a,"shared-secret buffer too small");
      }
      else {
        *param_5 = 0x20;
        if (param_1[5] == 0) {
          uVar3 = ossl_ml_kem_encap_rand(param_2,uVar2,param_4,0x20,plVar1);
        }
        else {
          uVar3 = ossl_ml_kem_encap_seed(param_2,uVar2,param_4,0x20,param_1[5],0x20,plVar1);
        }
      }
    }
  }
  if ((void *)param_1[5] != (void *)0x0) {
    OPENSSL_cleanse((void *)param_1[5],0x20);
    param_1[5] = 0;
  }
  return uVar3;
}



void ml_kem_newctx(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)CRYPTO_malloc(0x38,"providers/implementations/kem/ml_kem_kem.c",0x2c);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[5] = 0;
    *(undefined4 *)(puVar1 + 6) = 0;
  }
  return;
}



undefined8 ml_kem_encapsulate_init(long *param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_2 + 0x40) == 0) {
    ERR_new();
    ERR_set_debug("providers/implementations/kem/ml_kem_kem.c",0x50,"ml_kem_encapsulate_init");
    ERR_set_error(0x39,0x80,0);
    return 0;
  }
  iVar1 = ossl_prov_is_running();
  if (iVar1 == 0) {
    return 0;
  }
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 6) = 0x1000;
  uVar2 = ml_kem_set_ctx_params(param_1,param_3);
  return uVar2;
}



undefined8 ml_kem_decapsulate_init(long *param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_2 + 0x50) == 0) {
    ERR_new();
    ERR_set_debug("providers/implementations/kem/ml_kem_kem.c",0x5c,"ml_kem_decapsulate_init");
    ERR_set_error(0x39,0x80,0);
    return 0;
  }
  iVar1 = ossl_prov_is_running();
  if (iVar1 == 0) {
    return 0;
  }
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 6) = 0x2000;
  uVar2 = ml_kem_set_ctx_params(param_1,param_3);
  return uVar2;
}


