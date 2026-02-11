
undefined1 * aes_settable_ctx_params(void)

{
  return cipher_aes_known_settable_ctx_params;
}



undefined1 * aes_gettable_ctx_params(void)

{
  return cipher_aes_known_gettable_ctx_params;
}



undefined8 aes_set_ctx_params(long param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  long local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  lVar5 = *(long *)(param_1 + 0x1d0);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 == (long *)0x0) || (*param_2 == 0)) goto LAB_001002b0;
  lVar2 = OSSL_PARAM_locate_const(param_2,"mackey");
  if (lVar2 == 0) {
LAB_00100090:
    lVar2 = OSSL_PARAM_locate_const(param_2,"tls1multi_maxsndfrag");
    if ((lVar2 != 0) && (iVar1 = OSSL_PARAM_get_size_t(lVar2,param_1 + 0x1e0), iVar1 == 0)) {
      ERR_new();
      uVar6 = 0x72;
      goto LAB_001002d1;
    }
    lVar2 = OSSL_PARAM_locate_const(param_2,"tls1multi_aad");
    if (lVar2 == 0) {
LAB_00100134:
      lVar2 = OSSL_PARAM_locate_const(param_2,"tls1multi_enc");
      if (lVar2 == 0) {
LAB_001001f0:
        lVar2 = OSSL_PARAM_locate_const(param_2,"tlsaad");
        if (lVar2 != 0) {
          if (*(int *)(lVar2 + 8) != 5) {
            ERR_new();
            uVar6 = 0xb1;
            goto LAB_001002d1;
          }
          iVar1 = (**(code **)(lVar5 + 0x20))
                            (param_1,*(undefined8 *)(lVar2 + 0x10),*(undefined4 *)(lVar2 + 0x18));
          if (iVar1 < 1) goto LAB_001002f0;
        }
        lVar5 = OSSL_PARAM_locate_const(param_2,"keylen");
        if (lVar5 != 0) {
          iVar1 = OSSL_PARAM_get_size_t(lVar5,&local_70);
          if (iVar1 == 0) {
            ERR_new();
            uVar6 = 0xbd;
            goto LAB_001002d1;
          }
          if (*(long *)(param_1 + 0x48) != local_70) {
            ERR_new();
            ERR_set_debug("providers/implementations/ciphers/cipher_aes_cbc_hmac_sha.c",0xc1,
                          "aes_set_ctx_params");
            ERR_set_error(0x39,0x69,0);
            goto LAB_001002f0;
          }
        }
        lVar5 = OSSL_PARAM_locate_const(param_2,"tls-version");
        if (lVar5 != 0) {
          iVar1 = OSSL_PARAM_get_uint(lVar5,param_1 + 0x70);
          if (iVar1 == 0) {
            ERR_new();
            uVar6 = 0xc9;
            goto LAB_001002d1;
          }
          if (*(int *)(param_1 + 0x70) - 0x300U < 2) {
            if (*(ulong *)(param_1 + 0x98) < 0x10) {
              ERR_new();
              ERR_set_debug("providers/implementations/ciphers/cipher_aes_cbc_hmac_sha.c",0xcf,
                            "aes_set_ctx_params");
              ERR_set_error(0x39,0xc0103,0);
              goto LAB_001002f0;
            }
            *(ulong *)(param_1 + 0x98) = *(ulong *)(param_1 + 0x98) - 0x10;
          }
        }
LAB_001002b0:
        uVar6 = 1;
        goto LAB_001002f2;
      }
      lVar3 = OSSL_PARAM_locate_const(param_2,"tls1multi_interleave");
      lVar4 = OSSL_PARAM_locate_const(param_2,"tls1multi_encin");
      if ((((*(int *)(lVar2 + 8) == 5) && (lVar4 != 0)) && (*(int *)(lVar4 + 8) == 5)) &&
         (lVar3 != 0)) {
        iVar1 = OSSL_PARAM_get_uint(lVar3,local_50);
        if (iVar1 != 0) {
          local_68 = *(undefined8 *)(lVar2 + 0x10);
          local_58 = *(undefined8 *)(lVar4 + 0x18);
          uStack_60 = *(undefined8 *)(lVar4 + 0x10);
          iVar1 = (**(code **)(lVar5 + 0x38))(param_1,&local_68);
          if (iVar1 < 1) goto LAB_001002f0;
          goto LAB_001001f0;
        }
      }
      ERR_new();
      uVar6 = 0xa3;
      goto LAB_001002d1;
    }
    lVar3 = OSSL_PARAM_locate_const(param_2,"tls1multi_interleave");
    if ((*(int *)(lVar2 + 8) != 5) || (lVar3 == 0)) {
LAB_001002c0:
      ERR_new();
      uVar6 = 0x85;
      goto LAB_001002d1;
    }
    iVar1 = OSSL_PARAM_get_uint(lVar3,local_50);
    if (iVar1 == 0) goto LAB_001002c0;
    uStack_60 = *(undefined8 *)(lVar2 + 0x10);
    local_58 = *(undefined8 *)(lVar2 + 0x18);
    iVar1 = (**(code **)(lVar5 + 0x30))(param_1,&local_68);
    if (0 < iVar1) goto LAB_00100134;
  }
  else {
    if (*(int *)(lVar2 + 8) == 5) {
      (**(code **)(lVar5 + 0x18))
                (param_1,*(undefined8 *)(lVar2 + 0x10),*(undefined8 *)(lVar2 + 0x18));
      goto LAB_00100090;
    }
    ERR_new();
    uVar6 = 0x67;
LAB_001002d1:
    ERR_set_debug("providers/implementations/ciphers/cipher_aes_cbc_hmac_sha.c",uVar6,
                  "aes_set_ctx_params");
    ERR_set_error(0x39,0x67,0);
  }
LAB_001002f0:
  uVar6 = 0;
LAB_001002f2:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
}



undefined8 aes_get_ctx_params(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = OSSL_PARAM_locate(param_2,"tls1multi_maxbufsz");
  if (lVar2 != 0) {
    iVar1 = (**(code **)(*(long *)(param_1 + 0x1d0) + 0x28))(param_1);
    iVar1 = OSSL_PARAM_set_size_t(lVar2,(long)iVar1);
    if (iVar1 == 0) {
      ERR_new();
      uVar3 = 0xe9;
      goto LAB_001005f1;
    }
  }
  lVar2 = OSSL_PARAM_locate(param_2,"tls1multi_interleave");
  if (lVar2 != 0) {
    iVar1 = OSSL_PARAM_set_uint(lVar2,*(undefined4 *)(param_1 + 0x1d8));
    if (iVar1 == 0) {
      ERR_new();
      uVar3 = 0xf0;
      goto LAB_001005f1;
    }
  }
  lVar2 = OSSL_PARAM_locate(param_2,"tls1multi_aadpacklen");
  if (lVar2 != 0) {
    iVar1 = OSSL_PARAM_set_uint(lVar2,*(undefined4 *)(param_1 + 0x1dc));
    if (iVar1 == 0) {
      ERR_new();
      uVar3 = 0xf6;
      goto LAB_001005f1;
    }
  }
  lVar2 = OSSL_PARAM_locate(param_2,"tls1multi_enclen");
  if (lVar2 != 0) {
    iVar1 = OSSL_PARAM_set_size_t(lVar2,*(undefined8 *)(param_1 + 0x1e8));
    if (iVar1 == 0) {
      ERR_new();
      uVar3 = 0xfc;
      goto LAB_001005f1;
    }
  }
  lVar2 = OSSL_PARAM_locate(param_2,"tlsaadpad");
  if (lVar2 != 0) {
    iVar1 = OSSL_PARAM_set_size_t(lVar2,*(undefined8 *)(param_1 + 0x1f0));
    if (iVar1 == 0) {
      ERR_new();
      uVar3 = 0x103;
      goto LAB_001005f1;
    }
  }
  lVar2 = OSSL_PARAM_locate(param_2,"keylen");
  if (lVar2 != 0) {
    iVar1 = OSSL_PARAM_set_size_t(lVar2,*(undefined8 *)(param_1 + 0x48));
    if (iVar1 == 0) {
      ERR_new();
      uVar3 = 0x108;
      goto LAB_001005f1;
    }
  }
  lVar2 = OSSL_PARAM_locate(param_2,"ivlen");
  if (lVar2 != 0) {
    iVar1 = OSSL_PARAM_set_size_t(lVar2,*(undefined8 *)(param_1 + 0x50));
    if (iVar1 == 0) {
      ERR_new();
      uVar3 = 0x10d;
      goto LAB_001005f1;
    }
  }
  lVar2 = OSSL_PARAM_locate(param_2,&_LC15);
  if (lVar2 != 0) {
    iVar1 = OSSL_PARAM_set_octet_string(lVar2,param_1,*(undefined8 *)(param_1 + 0x50));
    if (iVar1 == 0) {
      iVar1 = OSSL_PARAM_set_octet_ptr(lVar2,param_1,*(undefined8 *)(param_1 + 0x50));
      if (iVar1 == 0) {
        ERR_new();
        uVar3 = 0x114;
        goto LAB_001005f1;
      }
    }
  }
  lVar2 = OSSL_PARAM_locate(param_2,"updated-iv");
  if (lVar2 != 0) {
    iVar1 = OSSL_PARAM_set_octet_string(lVar2,param_1 + 0x20,*(undefined8 *)(param_1 + 0x50));
    if (iVar1 == 0) {
      iVar1 = OSSL_PARAM_set_octet_ptr(lVar2,param_1 + 0x20,*(undefined8 *)(param_1 + 0x50));
      if (iVar1 == 0) {
        ERR_new();
        uVar3 = 0x11b;
LAB_001005f1:
        ERR_set_debug("providers/implementations/ciphers/cipher_aes_cbc_hmac_sha.c",uVar3,
                      "aes_get_ctx_params");
        ERR_set_error(0x39,0x68,0);
        return 0;
      }
    }
  }
  return 1;
}



void aes_128_cbc_hmac_sha1_get_params(undefined8 param_1)

{
  ossl_cipher_generic_get_params(param_1,2,9,0x80,0x80,0x80);
  return;
}



void aes_256_cbc_hmac_sha1_get_params(undefined8 param_1)

{
  ossl_cipher_generic_get_params(param_1,2,9,0x100,0x80,0x80);
  return;
}



undefined8 aes_dinit(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 in_R9;
  
  iVar1 = ossl_cipher_generic_dinit();
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = aes_set_ctx_params(param_1,in_R9);
  return uVar2;
}



undefined8 aes_einit(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 in_R9;
  
  iVar1 = ossl_cipher_generic_einit();
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = aes_set_ctx_params(param_1,in_R9);
  return uVar2;
}



undefined8 aes_cbc_hmac_sha1_dupctx(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = ossl_prov_is_running();
  if ((param_1 != 0) && (iVar1 != 0)) {
    uVar2 = CRYPTO_memdup(param_1,0x318,
                          "providers/implementations/ciphers/cipher_aes_cbc_hmac_sha.c",0x15b);
    return uVar2;
  }
  return 0;
}



undefined8 aes_cbc_hmac_sha256_dupctx(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    uVar2 = CRYPTO_memdup(param_1,0x348,
                          "providers/implementations/ciphers/cipher_aes_cbc_hmac_sha.c",0x180);
    return uVar2;
  }
  return 0;
}



void aes_cbc_hmac_sha1_freectx(long param_1)

{
  if (param_1 != 0) {
    ossl_cipher_generic_reset_ctx();
    CRYPTO_clear_free(param_1,0x318,"providers/implementations/ciphers/cipher_aes_cbc_hmac_sha.c",
                      0x164);
    return;
  }
  return;
}



void aes_cbc_hmac_sha256_freectx(long param_1)

{
  if (param_1 != 0) {
    ossl_cipher_generic_reset_ctx();
    CRYPTO_clear_free(param_1,0x348,"providers/implementations/ciphers/cipher_aes_cbc_hmac_sha.c",
                      0x189);
    return;
  }
  return;
}



long aes_cbc_hmac_sha256_newctx_constprop_0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = 0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    lVar2 = CRYPTO_zalloc(0x348,"providers/implementations/ciphers/cipher_aes_cbc_hmac_sha.c",0x171)
    ;
    if (lVar2 != 0) {
      uVar3 = ossl_prov_cipher_hw_aes_cbc_hmac_sha256();
      ossl_cipher_generic_initkey(lVar2,param_2,0x80,0x80,2,9,uVar3,param_1);
      *(undefined8 *)(lVar2 + 0x1d0) = *(undefined8 *)(lVar2 + 0xa8);
    }
  }
  return lVar2;
}



void aes_256_cbc_hmac_sha256_newctx(undefined8 param_1)

{
  aes_cbc_hmac_sha256_newctx_constprop_0(param_1,0x100);
  return;
}



void aes_128_cbc_hmac_sha256_newctx(undefined8 param_1)

{
  aes_cbc_hmac_sha256_newctx_constprop_0(param_1,0x80);
  return;
}



long aes_cbc_hmac_sha1_newctx_constprop_0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = 0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    lVar2 = CRYPTO_zalloc(0x318,"providers/implementations/ciphers/cipher_aes_cbc_hmac_sha.c",0x149)
    ;
    if (lVar2 != 0) {
      uVar3 = ossl_prov_cipher_hw_aes_cbc_hmac_sha1();
      ossl_cipher_generic_initkey(lVar2,param_2,0x80,0x80,2,9,uVar3,param_1);
      *(undefined8 *)(lVar2 + 0x1d0) = *(undefined8 *)(lVar2 + 0xa8);
    }
  }
  return lVar2;
}



void aes_256_cbc_hmac_sha1_newctx(undefined8 param_1)

{
  aes_cbc_hmac_sha1_newctx_constprop_0(param_1,0x100);
  return;
}



void aes_128_cbc_hmac_sha1_newctx(undefined8 param_1)

{
  aes_cbc_hmac_sha1_newctx_constprop_0(param_1,0x80);
  return;
}



void aes_128_cbc_hmac_sha256_get_params(undefined8 param_1)

{
  ossl_cipher_generic_get_params(param_1,2,9,0x80,0x80,0x80);
  return;
}



void aes_256_cbc_hmac_sha256_get_params(undefined8 param_1)

{
  ossl_cipher_generic_get_params(param_1,2,9,0x100,0x80,0x80);
  return;
}


