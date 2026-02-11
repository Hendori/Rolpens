
undefined1 * gmac_gettable_params(void)

{
  return known_gettable_params;
}



undefined1 * gmac_settable_ctx_params(void)

{
  return known_settable_ctx_params;
}



undefined8 gmac_get_params(undefined8 param_1)

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



undefined8 gmac_final(long param_1,uchar *param_2,long *param_3)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  int local_7c;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_7c = 0;
  local_78 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  local_48 = (undefined1  [16])0x0;
  local_38 = (undefined1  [16])0x0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    iVar1 = EVP_EncryptFinal_ex(*(EVP_CIPHER_CTX **)(param_1 + 8),param_2,&local_7c);
    if (iVar1 != 0) {
      local_7c = 0x10;
      OSSL_PARAM_construct_octet_string(&local_b8,&_LC1,param_2,0x10);
      local_78._8_8_ = uStack_b0;
      local_78._0_8_ = local_b8;
      local_58._0_8_ = local_98;
      local_68._8_8_ = uStack_a0;
      local_68._0_8_ = local_a8;
      iVar1 = EVP_CIPHER_CTX_get_params(*(undefined8 *)(param_1 + 8),local_78);
      if (iVar1 != 0) {
        *param_3 = (long)local_7c;
        uVar2 = 1;
        goto LAB_001000be;
      }
    }
  }
  uVar2 = 0;
LAB_001000be:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int gmac_update(long param_1,uchar *param_2,ulong param_3)

{
  EVP_CIPHER_CTX *ctx;
  int iVar1;
  long in_FS_OFFSET;
  int local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = 1;
  if (param_3 != 0) {
    ctx = *(EVP_CIPHER_CTX **)(param_1 + 8);
    if (0x7fffffff < param_3) {
      do {
        iVar1 = EVP_EncryptUpdate(ctx,(uchar *)0x0,&local_34,param_2,0x7fffffff);
        if (iVar1 == 0) goto LAB_001001e5;
        param_3 = param_3 - 0x7fffffff;
        param_2 = param_2 + 0x7fffffff;
      } while (0x7fffffff < param_3);
    }
    iVar1 = EVP_EncryptUpdate(ctx,(uchar *)0x0,&local_34,param_2,(int)param_3);
  }
LAB_001001e5:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}



undefined8 * gmac_new(undefined8 param_1)

{
  int iVar1;
  undefined8 *ptr;
  EVP_CIPHER_CTX *pEVar2;
  
  iVar1 = ossl_prov_is_running();
  if ((iVar1 != 0) &&
     (ptr = (undefined8 *)CRYPTO_zalloc(0x28,"providers/implementations/macs/gmac_prov.c",0x41),
     ptr != (undefined8 *)0x0)) {
    pEVar2 = EVP_CIPHER_CTX_new();
    ptr[1] = pEVar2;
    if (pEVar2 != (EVP_CIPHER_CTX *)0x0) {
      *ptr = param_1;
      return ptr;
    }
    EVP_CIPHER_CTX_free((EVP_CIPHER_CTX *)0x0);
    ossl_prov_cipher_reset(ptr + 2);
    CRYPTO_free(ptr);
  }
  return (undefined8 *)0x0;
}



bool gmac_setkey_isra_0(EVP_CIPHER_CTX *param_1,uchar *param_2,long param_3)

{
  int iVar1;
  
  iVar1 = EVP_CIPHER_CTX_get_key_length();
  if (iVar1 != param_3) {
    ERR_new();
    ERR_set_debug("providers/implementations/macs/gmac_prov.c",0x6a,"gmac_setkey");
    ERR_set_error(0x39,0x69,0);
    return false;
  }
  iVar1 = EVP_EncryptInit_ex(param_1,(EVP_CIPHER *)0x0,(ENGINE *)0x0,param_2,(uchar *)0x0);
  return iVar1 != 0;
}



bool gmac_set_ctx_params(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  EVP_CIPHER_CTX *ctx;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  ENGINE *impl;
  EVP_CIPHER *cipher;
  
  ctx = (EVP_CIPHER_CTX *)param_1[1];
  uVar3 = ossl_prov_ctx_get0_libctx(*param_1);
  if ((param_2 != (long *)0x0) && (*param_2 != 0)) {
    if (ctx == (EVP_CIPHER_CTX *)0x0) {
      return false;
    }
    lVar4 = OSSL_PARAM_locate_const(param_2,"cipher");
    if (lVar4 != 0) {
      puVar1 = param_1 + 2;
      iVar2 = ossl_prov_cipher_load_from_params(puVar1,param_2,uVar3);
      if (iVar2 == 0) {
        return false;
      }
      uVar3 = ossl_prov_cipher_cipher(puVar1);
      iVar2 = EVP_CIPHER_get_mode(uVar3);
      if (iVar2 != 6) {
        ERR_new();
        ERR_set_debug("providers/implementations/macs/gmac_prov.c",0xdc,"gmac_set_ctx_params");
        ERR_set_error(0x39,0x7d,0);
        return false;
      }
      impl = (ENGINE *)ossl_prov_cipher_engine(puVar1);
      cipher = (EVP_CIPHER *)ossl_prov_cipher_cipher(puVar1);
      iVar2 = EVP_EncryptInit_ex(ctx,cipher,impl,(uchar *)0x0,(uchar *)0x0);
      if (iVar2 == 0) {
        return false;
      }
    }
    lVar4 = OSSL_PARAM_locate_const(param_2,&_LC4);
    if ((lVar4 != 0) &&
       ((*(int *)(lVar4 + 8) != 5 ||
        (iVar2 = gmac_setkey_isra_0(param_1[1],*(undefined8 *)(lVar4 + 0x10),
                                    *(undefined8 *)(lVar4 + 0x18)), iVar2 == 0)))) {
      return false;
    }
    lVar4 = OSSL_PARAM_locate_const(param_2,&_LC5);
    if (lVar4 != 0) {
      if (*(int *)(lVar4 + 8) != 5) {
        return false;
      }
      iVar2 = EVP_CIPHER_CTX_ctrl(ctx,9,*(int *)(lVar4 + 0x18),(void *)0x0);
      if (0 < iVar2) {
        iVar2 = EVP_EncryptInit_ex(ctx,(EVP_CIPHER *)0x0,(ENGINE *)0x0,(uchar *)0x0,
                                   *(uchar **)(lVar4 + 0x10));
        return iVar2 != 0;
      }
      return false;
    }
  }
  return true;
}



int gmac_init(long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    iVar1 = gmac_set_ctx_params(param_1);
    if (iVar1 != 0) {
      if (param_2 != 0) {
        iVar1 = gmac_setkey_isra_0(*(EVP_CIPHER_CTX **)(param_1 + 8),param_2,param_3);
        return iVar1;
      }
      iVar1 = EVP_EncryptInit_ex(*(EVP_CIPHER_CTX **)(param_1 + 8),(EVP_CIPHER *)0x0,(ENGINE *)0x0,
                                 (uchar *)0x0,(uchar *)0x0);
      return iVar1;
    }
  }
  return 0;
}



void gmac_free(void *param_1)

{
  if (param_1 != (void *)0x0) {
    EVP_CIPHER_CTX_free(*(EVP_CIPHER_CTX **)((long)param_1 + 8));
    ossl_prov_cipher_reset((long)param_1 + 0x10);
    CRYPTO_free(param_1);
    return;
  }
  return;
}



void * gmac_dup(undefined8 *param_1)

{
  int iVar1;
  void *ptr;
  
  iVar1 = ossl_prov_is_running();
  if ((iVar1 != 0) && (ptr = (void *)gmac_new(*param_1), ptr != (void *)0x0)) {
    iVar1 = EVP_CIPHER_CTX_copy(*(EVP_CIPHER_CTX **)((long)ptr + 8),(EVP_CIPHER_CTX *)param_1[1]);
    if ((iVar1 != 0) && (iVar1 = ossl_prov_cipher_copy((long)ptr + 0x10,param_1 + 2), iVar1 != 0)) {
      return ptr;
    }
    EVP_CIPHER_CTX_free(*(EVP_CIPHER_CTX **)((long)ptr + 8));
    ossl_prov_cipher_reset((long)ptr + 0x10);
    CRYPTO_free(ptr);
  }
  return (void *)0x0;
}


