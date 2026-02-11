
undefined1 * kdf_sshkdf_settable_ctx_params(void)

{
  return known_settable_ctx_params_1;
}



undefined1 * kdf_sshkdf_gettable_ctx_params(void)

{
  return known_gettable_ctx_params_3;
}



bool kdf_sshkdf_get_ctx_params(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  
  lVar2 = OSSL_PARAM_locate(param_2,&_LC0);
  bVar3 = true;
  if (lVar2 != 0) {
    iVar1 = OSSL_PARAM_set_size_t(lVar2,0xffffffffffffffff);
    bVar3 = iVar1 != 0;
  }
  return bVar3;
}



void kdf_sshkdf_reset(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  ossl_prov_digest_reset(param_1 + 1);
  CRYPTO_clear_free(param_1[4],param_1[5],"providers/implementations/kdfs/sshkdf.c",0x56);
  CRYPTO_clear_free(param_1[6],param_1[7],"providers/implementations/kdfs/sshkdf.c",0x57);
  CRYPTO_clear_free(param_1[9],param_1[10],"providers/implementations/kdfs/sshkdf.c",0x58);
  *param_1 = uVar1;
  *(undefined1 (*) [16])(param_1 + 1) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 3) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 5) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 7) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 9) = (undefined1  [16])0x0;
  return;
}



undefined8 * kdf_sshkdf_new(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  iVar1 = ossl_prov_is_running();
  puVar2 = (undefined8 *)0x0;
  if (iVar1 != 0) {
    puVar2 = (undefined8 *)CRYPTO_zalloc(0x58,"providers/implementations/kdfs/sshkdf.c",0x3f);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = param_1;
    }
  }
  return puVar2;
}



void kdf_sshkdf_free(void *param_1)

{
  if (param_1 != (void *)0x0) {
    kdf_sshkdf_reset();
    CRYPTO_free(param_1);
    return;
  }
  return;
}



undefined8 * kdf_sshkdf_dup(undefined8 *param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *ptr;
  
  uVar1 = *param_1;
  iVar2 = ossl_prov_is_running();
  if (iVar2 != 0) {
    ptr = (undefined8 *)CRYPTO_zalloc(0x58,"providers/implementations/kdfs/sshkdf.c",0x3f);
    if (ptr != (undefined8 *)0x0) {
      *ptr = uVar1;
      iVar2 = ossl_prov_memdup(param_1[4],param_1[5],ptr + 4,ptr + 5);
      if (iVar2 != 0) {
        iVar2 = ossl_prov_memdup(param_1[6],param_1[7],ptr + 6,ptr + 7);
        if (iVar2 != 0) {
          iVar2 = ossl_prov_memdup(param_1[9],param_1[10],ptr + 9,ptr + 10);
          if (iVar2 != 0) {
            iVar2 = ossl_prov_digest_copy(ptr + 1,param_1 + 1);
            if (iVar2 != 0) {
              *(undefined1 *)(ptr + 8) = *(undefined1 *)(param_1 + 8);
              return ptr;
            }
          }
        }
      }
      kdf_sshkdf_reset(ptr);
      CRYPTO_free(ptr);
    }
  }
  return (undefined8 *)0x0;
}



undefined8 kdf_sshkdf_set_ctx_params(undefined8 *param_1,long *param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long in_FS_OFFSET;
  char *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = ossl_prov_ctx_get0_libctx(*param_1);
  if ((param_2 == (long *)0x0) || (*param_2 == 0)) {
LAB_00100470:
    uVar2 = 1;
  }
  else {
    lVar3 = OSSL_PARAM_locate_const(param_2,"digest");
    if (lVar3 == 0) {
LAB_00100308:
      lVar3 = OSSL_PARAM_locate_const(param_2,&_LC3);
      if (lVar3 != 0) {
        CRYPTO_clear_free(param_1[4],param_1[5],"providers/implementations/kdfs/sshkdf.c",0x79);
        param_1[4] = 0;
        param_1[5] = 0;
        iVar1 = OSSL_PARAM_get_octet_string(lVar3,param_1 + 4,0,param_1 + 5);
        if (iVar1 == 0) goto LAB_001002cd;
      }
      lVar3 = OSSL_PARAM_locate_const(param_2,"xcghash");
      if (lVar3 != 0) {
        CRYPTO_clear_free(param_1[6],param_1[7],"providers/implementations/kdfs/sshkdf.c",0x79);
        param_1[6] = 0;
        param_1[7] = 0;
        iVar1 = OSSL_PARAM_get_octet_string(lVar3,param_1 + 6,0,param_1 + 7);
        if (iVar1 == 0) goto LAB_001002cd;
      }
      lVar3 = OSSL_PARAM_locate_const(param_2,"session_id");
      if (lVar3 != 0) {
        CRYPTO_clear_free(param_1[9],param_1[10],"providers/implementations/kdfs/sshkdf.c",0x79);
        param_1[9] = 0;
        param_1[10] = 0;
        iVar1 = OSSL_PARAM_get_octet_string(lVar3,param_1 + 9,0,param_1 + 10);
        if (iVar1 == 0) goto LAB_001002cd;
      }
      lVar3 = OSSL_PARAM_locate_const(param_2,&_LC6);
      if (lVar3 == 0) goto LAB_00100470;
      iVar1 = OSSL_PARAM_get_utf8_string_ptr(lVar3,&local_38);
      if (((iVar1 != 0) && (local_38 != (char *)0x0)) && (*(long *)(lVar3 + 0x18) == 1)) {
        if ((byte)(*local_38 + 0xbfU) < 6) {
          *(char *)(param_1 + 8) = *local_38;
          goto LAB_00100470;
        }
        ERR_new();
        ERR_set_debug("providers/implementations/kdfs/sshkdf.c",0x111,"kdf_sshkdf_set_ctx_params");
        ERR_set_error(0x39,0x8a,0);
      }
    }
    else {
      iVar1 = ossl_prov_digest_load_from_params(param_1 + 1,param_2,uVar2);
      if (iVar1 != 0) {
        uVar2 = ossl_prov_digest_md(param_1 + 1);
        iVar1 = EVP_MD_xof(uVar2);
        if (iVar1 == 0) goto LAB_00100308;
        ERR_new();
        ERR_set_debug("providers/implementations/kdfs/sshkdf.c",0xe9,"kdf_sshkdf_set_ctx_params");
        ERR_set_error(0x39,0xb7,0);
      }
    }
LAB_001002cd:
    uVar2 = 0;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4 kdf_sshkdf_derive(long param_1,void *param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  void *d;
  void *d_00;
  void *d_01;
  size_t cnt;
  size_t cnt_00;
  size_t cnt_01;
  int iVar2;
  undefined4 uVar3;
  EVP_MD *type;
  EVP_MD_CTX *ctx;
  ulong __n;
  long in_FS_OFFSET;
  uchar *local_b8;
  char local_8d;
  uint local_8c;
  uchar local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = ossl_prov_is_running();
  if ((iVar2 == 0) || (iVar2 = kdf_sshkdf_set_ctx_params(param_1,param_4), iVar2 == 0)) {
    uVar3 = 0;
    goto LAB_00100530;
  }
  type = (EVP_MD *)ossl_prov_digest_md(param_1 + 8);
  if (type == (EVP_MD *)0x0) {
    ERR_new();
    ERR_set_debug("providers/implementations/kdfs/sshkdf.c",0xb7,"kdf_sshkdf_derive");
    ERR_set_error(0x39,0x81,0);
    uVar3 = 0;
    goto LAB_00100530;
  }
  d = *(void **)(param_1 + 0x20);
  if (d == (void *)0x0) {
    ERR_new();
    ERR_set_debug("providers/implementations/kdfs/sshkdf.c",0xbb,"kdf_sshkdf_derive");
    ERR_set_error(0x39,0x80,0);
    uVar3 = 0;
    goto LAB_00100530;
  }
  d_00 = *(void **)(param_1 + 0x30);
  if (d_00 == (void *)0x0) {
    ERR_new();
    ERR_set_debug("providers/implementations/kdfs/sshkdf.c",0xbf,"kdf_sshkdf_derive");
    ERR_set_error(0x39,0x87,0);
    uVar3 = 0;
    goto LAB_00100530;
  }
  d_01 = *(void **)(param_1 + 0x48);
  if (d_01 == (void *)0x0) {
    ERR_new();
    ERR_set_debug("providers/implementations/kdfs/sshkdf.c",0xc3,"kdf_sshkdf_derive");
    ERR_set_error(0x39,0x85,0);
    uVar3 = 0;
    goto LAB_00100530;
  }
  if (*(char *)(param_1 + 0x40) == '\0') {
    ERR_new();
    ERR_set_debug("providers/implementations/kdfs/sshkdf.c",199,"kdf_sshkdf_derive");
    ERR_set_error(0x39,0x86,0);
    uVar3 = 0;
    goto LAB_00100530;
  }
  cnt = *(size_t *)(param_1 + 0x50);
  local_8c = 0;
  cnt_00 = *(size_t *)(param_1 + 0x38);
  cnt_01 = *(size_t *)(param_1 + 0x28);
  local_8d = *(char *)(param_1 + 0x40);
  ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
  uVar3 = 0;
  if (ctx == (EVP_MD_CTX *)0x0) goto LAB_00100530;
  iVar2 = EVP_DigestInit_ex(ctx,type,(ENGINE *)0x0);
  if ((iVar2 == 0) || (iVar2 = EVP_DigestUpdate(ctx,d,cnt_01), iVar2 == 0)) {
LAB_00100611:
    uVar3 = 0;
  }
  else {
    iVar2 = EVP_DigestUpdate(ctx,d_00,cnt_00);
    if ((iVar2 == 0) ||
       ((iVar2 = EVP_DigestUpdate(ctx,&local_8d,1), iVar2 == 0 ||
        (iVar2 = EVP_DigestUpdate(ctx,d_01,cnt), iVar2 == 0)))) goto LAB_00100611;
    iVar2 = EVP_DigestFinal_ex(ctx,local_88,&local_8c);
    if (iVar2 == 0) goto LAB_00100611;
    __n = (ulong)local_8c;
    if (param_3 < __n) {
      memcpy(param_2,local_88,param_3);
    }
    else {
      memcpy(param_2,local_88,__n);
      while (__n < param_3) {
        iVar2 = EVP_DigestInit_ex(ctx,type,(ENGINE *)0x0);
        if ((((iVar2 == 0) || (iVar2 = EVP_DigestUpdate(ctx,d,cnt_01), iVar2 == 0)) ||
            (iVar2 = EVP_DigestUpdate(ctx,d_00,cnt_00), iVar2 == 0)) ||
           ((iVar2 = EVP_DigestUpdate(ctx,param_2,__n), iVar2 == 0 ||
            (iVar2 = EVP_DigestFinal_ex(ctx,local_88,&local_8c), iVar2 == 0)))) goto LAB_00100611;
        uVar1 = __n + local_8c;
        if (param_3 < uVar1) {
          memcpy((void *)((long)param_2 + __n),local_88,param_3 - __n);
          break;
        }
        memcpy((void *)((long)param_2 + __n),local_88,(ulong)local_8c);
        __n = uVar1;
      }
    }
    uVar3 = 1;
  }
  local_b8 = local_88;
  EVP_MD_CTX_free(ctx);
  OPENSSL_cleanse(local_b8,0x40);
LAB_00100530:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


