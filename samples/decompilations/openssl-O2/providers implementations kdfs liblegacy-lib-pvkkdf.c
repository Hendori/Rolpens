
undefined1 * kdf_pvk_settable_ctx_params(void)

{
  return known_settable_ctx_params_1;
}



undefined1 * kdf_pvk_gettable_ctx_params(void)

{
  return known_gettable_ctx_params_2;
}



undefined8 kdf_pvk_get_ctx_params(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = OSSL_PARAM_locate(param_2,&_LC0);
  if (lVar1 != 0) {
    uVar2 = OSSL_PARAM_set_size_t(lVar1,0xffffffffffffffff);
    return uVar2;
  }
  return 0xfffffffe;
}



bool pvk_set_membuf(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  void *pvVar2;
  bool bVar3;
  
  CRYPTO_clear_free(*param_1,*param_2,"providers/implementations/kdfs/pvkkdf.c",0x77);
  *param_1 = 0;
  *param_2 = 0;
  if (*(long *)(param_3 + 0x18) != 0) {
    bVar3 = true;
    if (*(long *)(param_3 + 0x10) != 0) {
      iVar1 = OSSL_PARAM_get_octet_string(param_3,param_1,0,param_2);
      bVar3 = iVar1 != 0;
    }
    return bVar3;
  }
  pvVar2 = CRYPTO_malloc(1,"providers/implementations/kdfs/pvkkdf.c",0x7c);
  *param_1 = pvVar2;
  return pvVar2 != (void *)0x0;
}



bool kdf_pvk_set_ctx_params(undefined8 *param_1,long *param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = ossl_prov_ctx_get0_libctx(*param_1);
  if ((param_2 != (long *)0x0) && (*param_2 != 0)) {
    iVar1 = ossl_prov_digest_load_from_params(param_1 + 5,param_2,uVar2);
    if (iVar1 == 0) {
      return false;
    }
    lVar3 = OSSL_PARAM_locate_const(param_2,&_LC2);
    if ((lVar3 != 0) && (iVar1 = pvk_set_membuf(param_1 + 1,param_1 + 2,lVar3), iVar1 == 0)) {
      return false;
    }
    lVar3 = OSSL_PARAM_locate_const(param_2,&_LC3);
    if (lVar3 != 0) {
      iVar1 = pvk_set_membuf(param_1 + 3,param_1 + 4,lVar3);
      return iVar1 != 0;
    }
  }
  return true;
}



bool kdf_pvk_derive(long param_1,uchar *param_2,ulong param_3,undefined8 param_4)

{
  int iVar1;
  EVP_MD *type;
  EVP_MD_CTX *ctx;
  bool bVar2;
  
  iVar1 = ossl_prov_is_running();
  if ((iVar1 == 0) || (iVar1 = kdf_pvk_set_ctx_params(param_1,param_4), iVar1 == 0)) {
    return false;
  }
  if (*(long *)(param_1 + 8) == 0) {
    ERR_new();
    ERR_set_debug("providers/implementations/kdfs/pvkkdf.c",0x91,"kdf_pvk_derive");
    ERR_set_error(0x39,0x82,0);
    return false;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    type = (EVP_MD *)ossl_prov_digest_md(param_1 + 0x28);
    if (type == (EVP_MD *)0x0) {
      ERR_new();
      ERR_set_debug("providers/implementations/kdfs/pvkkdf.c",0x9c,"kdf_pvk_derive");
      ERR_set_error(0x39,0x7a,0);
      return false;
    }
    iVar1 = EVP_MD_get_size(type);
    if (0 < iVar1) {
      if ((ulong)(long)iVar1 <= param_3) {
        ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
        if ((((ctx == (EVP_MD_CTX *)0x0) ||
             (iVar1 = EVP_DigestInit_ex(ctx,type,(ENGINE *)0x0), iVar1 == 0)) ||
            (iVar1 = EVP_DigestUpdate(ctx,*(void **)(param_1 + 0x18),*(size_t *)(param_1 + 0x20)),
            iVar1 == 0)) ||
           (iVar1 = EVP_DigestUpdate(ctx,*(void **)(param_1 + 8),*(size_t *)(param_1 + 0x10)),
           iVar1 == 0)) {
          bVar2 = false;
        }
        else {
          iVar1 = EVP_DigestFinal_ex(ctx,param_2,(uint *)0x0);
          bVar2 = iVar1 != 0;
        }
        EVP_MD_CTX_free(ctx);
        return bVar2;
      }
      ERR_new();
      ERR_set_debug("providers/implementations/kdfs/pvkkdf.c",0xa5,"kdf_pvk_derive");
      ERR_set_error(0x39,0xca,0);
      return false;
    }
    ERR_new();
    ERR_set_debug("providers/implementations/kdfs/pvkkdf.c",0xa1,"kdf_pvk_derive");
    ERR_set_error(0x39,0x8e,0);
    return false;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/kdfs/pvkkdf.c",0x96,"kdf_pvk_derive");
  ERR_set_error(0x39,0x83,0);
  return false;
}



void kdf_pvk_init(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined1 local_a8 [32];
  undefined8 local_88;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  local_48 = (undefined1  [16])0x0;
  local_38 = (undefined1  [16])0x0;
  uVar2 = ossl_prov_ctx_get0_libctx(*param_1);
  OSSL_PARAM_construct_utf8_string(local_a8,"digest",&_LC4,0);
  local_58._0_8_ = local_88;
  iVar1 = ossl_prov_digest_load_from_params(param_1 + 5,local_78,uVar2);
  if (iVar1 == 0) {
    ossl_prov_digest_reset(param_1 + 5);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 * kdf_pvk_new(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)0x0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    puVar2 = (undefined8 *)CRYPTO_zalloc(0x40,"providers/implementations/kdfs/pvkkdf.c",0x30);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = param_1;
      kdf_pvk_init(puVar2);
    }
  }
  return puVar2;
}



void kdf_pvk_reset(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  ossl_prov_digest_reset(param_1 + 5);
  CRYPTO_free((void *)param_1[3]);
  CRYPTO_clear_free(param_1[1],param_1[2],"providers/implementations/kdfs/pvkkdf.c",0x3c);
  OPENSSL_cleanse(param_1,0x40);
  *param_1 = uVar1;
  kdf_pvk_init(param_1);
  return;
}



void kdf_pvk_free(void *param_1)

{
  if (param_1 != (void *)0x0) {
    ossl_prov_digest_reset((long)param_1 + 0x28);
    CRYPTO_free(*(void **)((long)param_1 + 0x18));
    CRYPTO_clear_free(*(undefined8 *)((long)param_1 + 8),*(undefined8 *)((long)param_1 + 0x10),
                      "providers/implementations/kdfs/pvkkdf.c",0x3c);
    OPENSSL_cleanse(param_1,0x40);
    CRYPTO_free(param_1);
    return;
  }
  return;
}



undefined8 * kdf_pvk_dup(undefined8 *param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *ptr;
  
  uVar1 = *param_1;
  iVar2 = ossl_prov_is_running();
  if ((iVar2 != 0) &&
     (ptr = (undefined8 *)CRYPTO_zalloc(0x40,"providers/implementations/kdfs/pvkkdf.c",0x30),
     ptr != (undefined8 *)0x0)) {
    *ptr = uVar1;
    kdf_pvk_init(ptr);
    iVar2 = ossl_prov_memdup(param_1[3],param_1[4],ptr + 3,ptr + 4);
    if ((iVar2 != 0) &&
       ((iVar2 = ossl_prov_memdup(param_1[1],param_1[2],ptr + 1,ptr + 2), iVar2 != 0 &&
        (iVar2 = ossl_prov_digest_copy(ptr + 5,param_1 + 5), iVar2 != 0)))) {
      return ptr;
    }
    ossl_prov_digest_reset(ptr + 5);
    CRYPTO_free((void *)ptr[3]);
    CRYPTO_clear_free(ptr[1],ptr[2],"providers/implementations/kdfs/pvkkdf.c",0x3c);
    OPENSSL_cleanse(ptr,0x40);
    CRYPTO_free(ptr);
  }
  return (undefined8 *)0x0;
}


