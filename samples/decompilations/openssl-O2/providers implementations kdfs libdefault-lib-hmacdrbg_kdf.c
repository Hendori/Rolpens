
undefined1 * hmac_drbg_kdf_gettable_ctx_params(void)

{
  return known_gettable_ctx_params_3;
}



undefined1 * hmac_drbg_kdf_settable_ctx_params(void)

{
  return known_settable_ctx_params_1;
}



bool hmac_drbg_kdf_get_ctx_params(long *param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  bool bVar5;
  
  lVar2 = OSSL_PARAM_locate(param_2,&_LC0);
  if (lVar2 != 0) {
    if (*param_1 == 0) {
      return false;
    }
    uVar3 = EVP_MAC_CTX_get0_mac();
    uVar3 = EVP_MAC_get0_name(uVar3);
    iVar1 = OSSL_PARAM_set_utf8_string(lVar2,uVar3);
    if (iVar1 == 0) {
      return false;
    }
  }
  lVar2 = OSSL_PARAM_locate(param_2,"digest");
  bVar5 = true;
  if (lVar2 != 0) {
    lVar4 = ossl_prov_digest_md(param_1 + 1);
    if (lVar4 == 0) {
      return false;
    }
    uVar3 = EVP_MD_get0_name(lVar4);
    iVar1 = OSSL_PARAM_set_utf8_string(lVar2,uVar3);
    bVar5 = iVar1 != 0;
  }
  return bVar5;
}



undefined8 hmac_drbg_kdf_set_ctx_params(long param_1,long *param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long in_FS_OFFSET;
  undefined8 local_40;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = ossl_prov_ctx_get0_libctx(*(undefined8 *)(param_1 + 0xa8));
  local_40 = 0;
  local_38 = 0;
  if ((param_2 == (long *)0x0) || (*param_2 == 0)) {
LAB_00100210:
    uVar3 = 1;
  }
  else {
    lVar4 = OSSL_PARAM_locate_const(param_2,"entropy");
    if (lVar4 == 0) {
LAB_00100193:
      lVar4 = OSSL_PARAM_locate_const(param_2,"nonce");
      if (lVar4 != 0) {
        iVar2 = OSSL_PARAM_get_octet_string(lVar4,&local_40,0,&local_38);
        if (iVar2 == 0) goto LAB_00100144;
        CRYPTO_free(*(void **)(param_1 + 0xb8));
        *(undefined4 *)(param_1 + 0xd0) = 0;
        *(undefined8 *)(param_1 + 0xb8) = local_40;
        *(undefined8 *)(param_1 + 200) = local_38;
      }
      lVar4 = OSSL_PARAM_locate_const(param_2,"digest");
      if (lVar4 == 0) goto LAB_00100210;
      iVar2 = ossl_prov_digest_load_from_params(param_1 + 8,param_2,uVar3);
      if (iVar2 != 0) {
        lVar4 = ossl_prov_digest_md(param_1 + 8);
        if (lVar4 != 0) {
          iVar2 = EVP_MD_xof(lVar4);
          if (iVar2 != 0) {
            ERR_new();
            ERR_set_debug("providers/implementations/kdfs/hmacdrbg_kdf.c",0xdd,
                          "hmac_drbg_kdf_set_ctx_params");
            ERR_set_error(0x39,0xb7,0);
            uVar3 = 0;
            goto LAB_00100215;
          }
          iVar2 = EVP_MD_get_size(lVar4);
          if (iVar2 < 1) goto LAB_00100144;
          *(long *)(param_1 + 0x20) = (long)iVar2;
        }
        uVar3 = ossl_prov_macctx_load_from_params(param_1,param_2,&_LC5,0,0,uVar3);
        goto LAB_00100215;
      }
    }
    else {
      iVar2 = OSSL_PARAM_get_octet_string(lVar4,&local_40,0,&local_38);
      if (iVar2 != 0) {
        CRYPTO_free(*(void **)(param_1 + 0xb0));
        uVar1 = local_40;
        *(undefined4 *)(param_1 + 0xd0) = 0;
        local_40 = 0;
        *(undefined8 *)(param_1 + 0xb0) = uVar1;
        *(undefined8 *)(param_1 + 0xc0) = local_38;
        goto LAB_00100193;
      }
    }
LAB_00100144:
    uVar3 = 0;
  }
LAB_00100215:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8
hmac_drbg_kdf_derive(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    iVar1 = hmac_drbg_kdf_set_ctx_params(param_1,param_4);
    if (iVar1 != 0) {
      if (*(int *)(param_1 + 0xd0) != 0) {
LAB_0010038a:
        uVar2 = ossl_drbg_hmac_generate(param_1,param_2,param_3,0,0);
        return uVar2;
      }
      if ((((*(long *)(param_1 + 0xb0) != 0) && (*(long *)(param_1 + 0xc0) != 0)) &&
          (*(long *)(param_1 + 0xb8) != 0)) && (*(long *)(param_1 + 200) != 0)) {
        iVar1 = ossl_drbg_hmac_init(param_1);
        if (iVar1 != 0) {
          *(undefined4 *)(param_1 + 0xd0) = 1;
          goto LAB_0010038a;
        }
      }
    }
  }
  return 0;
}



void hmac_drbg_kdf_reset(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1[0x15];
  EVP_MAC_CTX_free(*param_1);
  ossl_prov_digest_reset(param_1 + 1);
  CRYPTO_clear_free(param_1[0x16],param_1[0x18],"providers/implementations/kdfs/hmacdrbg_kdf.c",0x40
                   );
  CRYPTO_clear_free(param_1[0x17],param_1[0x19],"providers/implementations/kdfs/hmacdrbg_kdf.c",0x41
                   );
  OPENSSL_cleanse(param_1,0xd8);
  param_1[0x15] = uVar1;
  return;
}



long hmac_drbg_kdf_new(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    lVar2 = CRYPTO_zalloc(0xd8,"providers/implementations/kdfs/hmacdrbg_kdf.c",0x2f);
    if (lVar2 != 0) {
      *(undefined8 *)(lVar2 + 0xa8) = param_1;
      return lVar2;
    }
    ERR_new();
    ERR_set_debug("providers/implementations/kdfs/hmacdrbg_kdf.c",0x31,"hmac_drbg_kdf_new");
    ERR_set_error(0x39,0xc0100,0);
  }
  return 0;
}



long * hmac_drbg_kdf_dup(long *param_1)

{
  long lVar1;
  int iVar2;
  long *ptr;
  long lVar3;
  
  ptr = (long *)hmac_drbg_kdf_new(param_1[0x15]);
  if (ptr == (long *)0x0) {
    return (long *)0x0;
  }
  if (*param_1 != 0) {
    lVar3 = EVP_MAC_CTX_dup();
    *ptr = lVar3;
    if (lVar3 == 0) goto LAB_001005c0;
  }
  iVar2 = ossl_prov_digest_copy(ptr + 1,param_1 + 1);
  if (iVar2 != 0) {
    lVar3 = param_1[6];
    ptr[5] = param_1[5];
    ptr[6] = lVar3;
    lVar3 = param_1[8];
    ptr[7] = param_1[7];
    ptr[8] = lVar3;
    lVar3 = param_1[10];
    ptr[9] = param_1[9];
    ptr[10] = lVar3;
    lVar3 = param_1[0xc];
    ptr[0xb] = param_1[0xb];
    ptr[0xc] = lVar3;
    lVar3 = param_1[0xe];
    ptr[0xd] = param_1[0xd];
    ptr[0xe] = lVar3;
    lVar3 = param_1[0x10];
    ptr[0xf] = param_1[0xf];
    ptr[0x10] = lVar3;
    lVar3 = param_1[0x12];
    ptr[0x11] = param_1[0x11];
    ptr[0x12] = lVar3;
    lVar3 = param_1[0x14];
    ptr[0x13] = param_1[0x13];
    ptr[0x14] = lVar3;
    lVar3 = param_1[0x18];
    lVar1 = param_1[0x16];
    ptr[4] = param_1[4];
    iVar2 = ossl_prov_memdup(lVar1,lVar3,ptr + 0x16,ptr + 0x18);
    if ((iVar2 != 0) &&
       (iVar2 = ossl_prov_memdup(param_1[0x17],param_1[0x19],ptr + 0x17,ptr + 0x19), iVar2 != 0)) {
      *(int *)(ptr + 0x1a) = (int)param_1[0x1a];
      return ptr;
    }
  }
LAB_001005c0:
  hmac_drbg_kdf_reset(ptr);
  CRYPTO_free(ptr);
  return (long *)0x0;
}



void hmac_drbg_kdf_free(void *param_1)

{
  if (param_1 != (void *)0x0) {
    hmac_drbg_kdf_reset();
    CRYPTO_free(param_1);
    return;
  }
  return;
}


