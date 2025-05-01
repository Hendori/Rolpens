
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



void hmac_drbg_kdf_free(undefined8 *param_1)

{
  undefined8 uVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    uVar1 = param_1[0x15];
    EVP_MAC_CTX_free(*param_1);
    ossl_prov_digest_reset(param_1 + 1);
    CRYPTO_clear_free(param_1[0x16],param_1[0x18],"providers/implementations/kdfs/hmacdrbg_kdf.c",
                      0x40);
    CRYPTO_clear_free(param_1[0x17],param_1[0x19],"providers/implementations/kdfs/hmacdrbg_kdf.c",
                      0x41);
    OPENSSL_cleanse(param_1,0xd8);
    param_1[0x15] = uVar1;
    CRYPTO_free(param_1);
    return;
  }
  return;
}



long * hmac_drbg_kdf_dup(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  int iVar16;
  long *ptr;
  long lVar17;
  
  lVar17 = param_1[0x15];
  iVar16 = ossl_prov_is_running();
  if (iVar16 == 0) {
    return (long *)0x0;
  }
  ptr = (long *)CRYPTO_zalloc(0xd8,"providers/implementations/kdfs/hmacdrbg_kdf.c",0x2f);
  if (ptr == (long *)0x0) {
    ERR_new();
    ERR_set_debug("providers/implementations/kdfs/hmacdrbg_kdf.c",0x31,"hmac_drbg_kdf_new");
    ERR_set_error(0x39,0xc0100,0);
    return (long *)0x0;
  }
  lVar1 = *param_1;
  ptr[0x15] = lVar17;
  if (lVar1 != 0) {
    lVar17 = EVP_MAC_CTX_dup();
    *ptr = lVar17;
    if (lVar17 == 0) goto LAB_001005d9;
  }
  iVar16 = ossl_prov_digest_copy(ptr + 1,param_1 + 1);
  if (iVar16 != 0) {
    lVar17 = param_1[5];
    lVar1 = param_1[6];
    lVar2 = param_1[7];
    lVar3 = param_1[8];
    lVar4 = param_1[9];
    lVar5 = param_1[10];
    lVar6 = param_1[0xb];
    lVar7 = param_1[0xc];
    lVar8 = param_1[0xd];
    lVar9 = param_1[0xe];
    ptr[4] = param_1[4];
    lVar10 = param_1[0xf];
    lVar11 = param_1[0x10];
    lVar12 = param_1[0x11];
    lVar13 = param_1[0x12];
    ptr[5] = lVar17;
    ptr[6] = lVar1;
    lVar14 = param_1[0x13];
    lVar15 = param_1[0x14];
    lVar17 = param_1[0x18];
    ptr[7] = lVar2;
    ptr[8] = lVar3;
    lVar1 = param_1[0x16];
    ptr[9] = lVar4;
    ptr[10] = lVar5;
    ptr[0xb] = lVar6;
    ptr[0xc] = lVar7;
    ptr[0xd] = lVar8;
    ptr[0xe] = lVar9;
    ptr[0xf] = lVar10;
    ptr[0x10] = lVar11;
    ptr[0x11] = lVar12;
    ptr[0x12] = lVar13;
    ptr[0x13] = lVar14;
    ptr[0x14] = lVar15;
    iVar16 = ossl_prov_memdup(lVar1,lVar17,ptr + 0x16,ptr + 0x18);
    if ((iVar16 != 0) &&
       (iVar16 = ossl_prov_memdup(param_1[0x17],param_1[0x19],ptr + 0x17,ptr + 0x19), iVar16 != 0))
    {
      *(int *)(ptr + 0x1a) = (int)param_1[0x1a];
      return ptr;
    }
  }
  lVar17 = *ptr;
LAB_001005d9:
  lVar1 = ptr[0x15];
  EVP_MAC_CTX_free(lVar17);
  ossl_prov_digest_reset(ptr + 1);
  CRYPTO_clear_free(ptr[0x16],ptr[0x18],"providers/implementations/kdfs/hmacdrbg_kdf.c",0x40);
  CRYPTO_clear_free(ptr[0x17],ptr[0x19],"providers/implementations/kdfs/hmacdrbg_kdf.c",0x41);
  OPENSSL_cleanse(ptr,0xd8);
  ptr[0x15] = lVar1;
  CRYPTO_free(ptr);
  return (long *)0x0;
}


