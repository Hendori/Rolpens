
undefined1 * cmac_gettable_ctx_params(void)

{
  return known_gettable_ctx_params;
}



undefined1 * cmac_settable_ctx_params(void)

{
  return known_settable_ctx_params;
}



undefined4 cmac_set_ctx_params(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar5 = ossl_prov_ctx_get0_libctx(*param_1);
  if ((param_2 == (long *)0x0) || (*param_2 == 0)) {
LAB_00100098:
    uVar4 = 1;
  }
  else {
    lVar6 = OSSL_PARAM_locate_const(param_2,"cipher");
    if (lVar6 == 0) {
LAB_00100080:
      lVar6 = OSSL_PARAM_locate_const(param_2,&_LC2);
      if (lVar6 == 0) goto LAB_00100098;
      if (*(int *)(lVar6 + 8) == 5) {
        puVar1 = param_1 + 2;
        uVar5 = *(undefined8 *)(lVar6 + 0x18);
        uVar2 = *(undefined8 *)(lVar6 + 0x10);
        uVar7 = ossl_prov_cipher_engine(puVar1);
        uVar8 = ossl_prov_cipher_cipher(puVar1);
        uVar4 = ossl_cmac_init(param_1[1],uVar2,uVar5,uVar8,uVar7,0);
        ossl_prov_cipher_reset(puVar1);
        return uVar4;
      }
    }
    else {
      iVar3 = ossl_prov_cipher_load_from_params(param_1 + 2,param_2,uVar5);
      if (iVar3 != 0) {
        uVar5 = ossl_prov_cipher_cipher(param_1 + 2);
        iVar3 = EVP_CIPHER_get_mode(uVar5);
        if (iVar3 != 2) {
          ERR_new();
          ERR_set_debug("providers/implementations/macs/cmac_prov.c",0x10b,"cmac_set_ctx_params");
          ERR_set_error(0x39,0x7d,0);
          return 0;
        }
        goto LAB_00100080;
      }
    }
    uVar4 = 0;
  }
  return uVar4;
}



void cmac_update(long param_1,void *param_2,size_t param_3)

{
  CMAC_Update(*(CMAC_CTX **)(param_1 + 8),param_2,param_3);
  return;
}



undefined8 * cmac_new(undefined8 param_1)

{
  int iVar1;
  undefined8 *ptr;
  CMAC_CTX *pCVar2;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    ptr = (undefined8 *)CRYPTO_zalloc(0x28,"providers/implementations/macs/cmac_prov.c",0x3f);
    if (ptr != (undefined8 *)0x0) {
      pCVar2 = CMAC_CTX_new();
      ptr[1] = pCVar2;
      if (pCVar2 != (CMAC_CTX *)0x0) {
        *ptr = param_1;
        return ptr;
      }
    }
    CRYPTO_free(ptr);
  }
  return (undefined8 *)0x0;
}



int cmac_final(long param_1,uchar *param_2,size_t *param_3)

{
  int iVar1;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = CMAC_Final(*(CMAC_CTX **)(param_1 + 8),param_2,param_3);
  return iVar1;
}



void * cmac_dup(undefined8 *param_1)

{
  int iVar1;
  void *ptr;
  
  iVar1 = ossl_prov_is_running();
  if ((iVar1 != 0) && (ptr = (void *)cmac_new(*param_1), ptr != (void *)0x0)) {
    iVar1 = CMAC_CTX_copy(*(CMAC_CTX **)((long)ptr + 8),(CMAC_CTX *)param_1[1]);
    if ((iVar1 != 0) && (iVar1 = ossl_prov_cipher_copy((long)ptr + 0x10,param_1 + 2), iVar1 != 0)) {
      return ptr;
    }
    CMAC_CTX_free(*(CMAC_CTX **)((long)ptr + 8));
    ossl_prov_cipher_reset((long)ptr + 0x10);
    CRYPTO_free(ptr);
  }
  return (void *)0x0;
}



void cmac_free(void *param_1)

{
  if (param_1 != (void *)0x0) {
    CMAC_CTX_free(*(CMAC_CTX **)((long)param_1 + 8));
    ossl_prov_cipher_reset((long)param_1 + 0x10);
    CRYPTO_free(param_1);
    return;
  }
  return;
}



ulong cmac_get_ctx_params(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  EVP_CIPHER_CTX *pEVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  lVar2 = OSSL_PARAM_locate(param_2,&_LC3);
  if (lVar2 != 0) {
    pEVar3 = CMAC_CTX_get0_cipher_ctx(*(CMAC_CTX **)(param_1 + 8));
    lVar4 = EVP_CIPHER_CTX_get0_cipher(pEVar3);
    lVar6 = 0;
    if (lVar4 != 0) {
      iVar1 = EVP_CIPHER_CTX_get_block_size(pEVar3,0);
      lVar6 = (long)iVar1;
    }
    uVar5 = OSSL_PARAM_set_size_t(lVar2,lVar6);
    if ((int)uVar5 == 0) {
      return uVar5;
    }
  }
  lVar2 = OSSL_PARAM_locate(param_2,"block-size");
  uVar5 = 1;
  if (lVar2 != 0) {
    pEVar3 = CMAC_CTX_get0_cipher_ctx(*(CMAC_CTX **)(param_1 + 8));
    lVar4 = EVP_CIPHER_CTX_get0_cipher(pEVar3);
    lVar6 = 0;
    if (lVar4 != 0) {
      iVar1 = EVP_CIPHER_CTX_get_block_size(pEVar3,0);
      lVar6 = (long)iVar1;
    }
    iVar1 = OSSL_PARAM_set_size_t(lVar2,lVar6);
    uVar5 = (ulong)(iVar1 != 0);
  }
  return uVar5;
}



int cmac_init(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  iVar2 = ossl_prov_is_running();
  if (iVar2 != 0) {
    iVar2 = cmac_set_ctx_params(param_1);
    if (iVar2 != 0) {
      if (param_2 != 0) {
        lVar1 = param_1 + 0x10;
        uVar3 = ossl_prov_cipher_engine(lVar1);
        uVar4 = ossl_prov_cipher_cipher(lVar1);
        iVar2 = ossl_cmac_init(*(undefined8 *)(param_1 + 8),param_2,param_3,uVar4,uVar3,0);
        ossl_prov_cipher_reset(lVar1);
        return iVar2;
      }
      iVar2 = CMAC_Init(*(CMAC_CTX **)(param_1 + 8),(void *)0x0,0,(EVP_CIPHER *)0x0,(ENGINE *)0x0);
      return iVar2;
    }
  }
  return 0;
}


