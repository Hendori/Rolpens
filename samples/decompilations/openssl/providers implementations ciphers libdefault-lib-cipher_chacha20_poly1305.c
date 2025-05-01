
undefined1 * chacha20_poly1305_gettable_ctx_params(void)

{
  return chacha20_poly1305_known_gettable_ctx_params;
}



undefined8 chacha20_poly1305_set_ctx_params(long param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  size_t __n;
  undefined8 uVar4;
  long in_FS_OFFSET;
  long local_38;
  long local_30;
  
  lVar1 = *(long *)(param_1 + 0xa8);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 == (long *)0x0) || (*param_2 == 0)) goto LAB_001001a8;
  lVar3 = OSSL_PARAM_locate_const(param_2,"keylen");
  if (lVar3 == 0) {
LAB_00100080:
    lVar3 = OSSL_PARAM_locate_const(param_2,"ivlen");
    if (lVar3 == 0) {
LAB_001000e8:
      lVar3 = OSSL_PARAM_locate_const(param_2,&_LC3);
      if (lVar3 != 0) {
        if (*(int *)(lVar3 + 8) != 5) {
          ERR_new();
          uVar4 = 199;
          goto LAB_00100219;
        }
        __n = *(size_t *)(lVar3 + 0x18);
        if (0xf < __n - 1) {
          ERR_new();
          ERR_set_debug("providers/implementations/ciphers/cipher_chacha20_poly1305.c",0xcb,
                        "chacha20_poly1305_set_ctx_params");
          ERR_set_error(0x39,0x76,0);
          uVar4 = 0;
          goto LAB_001001ad;
        }
        if (*(void **)(lVar3 + 0x10) != (void *)0x0) {
          if ((*(byte *)(param_1 + 0x6c) & 2) != 0) {
            ERR_new();
            ERR_set_debug("providers/implementations/ciphers/cipher_chacha20_poly1305.c",0xd0,
                          "chacha20_poly1305_set_ctx_params");
            ERR_set_error(0x39,0x78,0);
            uVar4 = 0;
            goto LAB_001001ad;
          }
          memcpy((void *)(param_1 + 0x2fc),*(void **)(lVar3 + 0x10),__n);
          __n = *(size_t *)(lVar3 + 0x18);
        }
        *(size_t *)(param_1 + 0x338) = __n;
      }
      lVar3 = OSSL_PARAM_locate_const(param_2,"tlsaad");
      if (lVar3 != 0) {
        if (*(int *)(lVar3 + 8) != 5) {
          ERR_new();
          uVar4 = 0xdb;
          goto LAB_00100219;
        }
        iVar2 = (**(code **)(lVar1 + 0x28))
                          (param_1,*(undefined8 *)(lVar3 + 0x10),*(undefined8 *)(lVar3 + 0x18));
        local_38 = (long)iVar2;
        if (local_38 == 0) {
          ERR_new();
          ERR_set_debug("providers/implementations/ciphers/cipher_chacha20_poly1305.c",0xe0,
                        "chacha20_poly1305_set_ctx_params");
          ERR_set_error(0x39,0x73,0);
          uVar4 = 0;
          goto LAB_001001ad;
        }
        *(long *)(param_1 + 0x348) = local_38;
      }
      lVar3 = OSSL_PARAM_locate_const(param_2,"tlsivfixed");
      if (lVar3 != 0) {
        if (*(int *)(lVar3 + 8) != 5) {
          ERR_new();
          uVar4 = 0xe9;
          goto LAB_00100219;
        }
        iVar2 = (**(code **)(lVar1 + 0x30))
                          (param_1,*(undefined8 *)(lVar3 + 0x10),*(undefined8 *)(lVar3 + 0x18));
        if (iVar2 == 0) {
          ERR_new();
          uVar4 = 0xed;
          goto LAB_001000bf;
        }
      }
LAB_001001a8:
      uVar4 = 1;
      goto LAB_001001ad;
    }
    iVar2 = OSSL_PARAM_get_size_t(lVar3,&local_38);
    if (iVar2 != 0) {
      if (local_38 == 0xc) goto LAB_001000e8;
      ERR_new();
      uVar4 = 0xbf;
LAB_001000bf:
      ERR_set_debug("providers/implementations/ciphers/cipher_chacha20_poly1305.c",uVar4,
                    "chacha20_poly1305_set_ctx_params");
      ERR_set_error(0x39,0x6d,0);
      uVar4 = 0;
      goto LAB_001001ad;
    }
    ERR_new();
    uVar4 = 0xbb;
  }
  else {
    iVar2 = OSSL_PARAM_get_size_t(lVar3,&local_38);
    if (iVar2 != 0) {
      if (local_38 != 0x20) {
        ERR_new();
        ERR_set_debug("providers/implementations/ciphers/cipher_chacha20_poly1305.c",0xb4,
                      "chacha20_poly1305_set_ctx_params");
        ERR_set_error(0x39,0x69,0);
        uVar4 = 0;
        goto LAB_001001ad;
      }
      goto LAB_00100080;
    }
    ERR_new();
    uVar4 = 0xb0;
  }
LAB_00100219:
  ERR_set_debug("providers/implementations/ciphers/cipher_chacha20_poly1305.c",uVar4,
                "chacha20_poly1305_set_ctx_params");
  ERR_set_error(0x39,0x67,0);
  uVar4 = 0;
LAB_001001ad:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 chacha20_poly1305_get_ctx_params(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = OSSL_PARAM_locate(param_2,"ivlen");
  if ((lVar2 == 0) || (iVar1 = OSSL_PARAM_set_size_t(lVar2,0xc), iVar1 != 0)) {
    lVar2 = OSSL_PARAM_locate(param_2,"keylen");
    if ((lVar2 == 0) || (iVar1 = OSSL_PARAM_set_size_t(lVar2,0x20), iVar1 != 0)) {
      lVar2 = OSSL_PARAM_locate(param_2,"taglen");
      if ((lVar2 == 0) ||
         (iVar1 = OSSL_PARAM_set_size_t(lVar2,*(undefined8 *)(param_1 + 0x338)), iVar1 != 0)) {
        lVar2 = OSSL_PARAM_locate(param_2,"tlsaadpad");
        if ((lVar2 == 0) ||
           (iVar1 = OSSL_PARAM_set_size_t(lVar2,*(undefined8 *)(param_1 + 0x348)), iVar1 != 0)) {
          lVar2 = OSSL_PARAM_locate(param_2,&_LC3);
          if (lVar2 == 0) {
            return 1;
          }
          if (*(int *)(lVar2 + 8) == 5) {
            if ((*(byte *)(param_1 + 0x6c) & 2) == 0) {
              ERR_new();
              ERR_set_debug("providers/implementations/ciphers/cipher_chacha20_poly1305.c",0x86,
                            "chacha20_poly1305_get_ctx_params");
              ERR_set_error(0x39,0x77,0);
              return 0;
            }
            if (0xf < *(size_t *)(lVar2 + 0x18) - 1) {
              ERR_new();
              ERR_set_debug("providers/implementations/ciphers/cipher_chacha20_poly1305.c",0x8a,
                            "chacha20_poly1305_get_ctx_params");
              ERR_set_error(0x39,0x76,0);
              return 0;
            }
            memcpy(*(void **)(lVar2 + 0x10),(void *)(param_1 + 0x2fc),*(size_t *)(lVar2 + 0x18));
            return 1;
          }
          ERR_new();
          uVar3 = 0x82;
        }
        else {
          ERR_new();
          uVar3 = 0x7b;
        }
      }
      else {
        ERR_new();
        uVar3 = 0x76;
      }
    }
    else {
      ERR_new();
      uVar3 = 0x71;
    }
  }
  else {
    ERR_new();
    uVar3 = 0x6b;
  }
  ERR_set_debug("providers/implementations/ciphers/cipher_chacha20_poly1305.c",uVar3,
                "chacha20_poly1305_get_ctx_params");
  ERR_set_error(0x39,0x68,0);
  return 0;
}



void chacha20_poly1305_get_params(undefined8 param_1)

{
  ossl_cipher_generic_get_params(param_1,0,3,0x100,8,0x60);
  return;
}



undefined8 chacha20_poly1305_final(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  int iVar2;
  
  lVar1 = *(long *)(param_1 + 0xa8);
  iVar2 = ossl_prov_is_running();
  if (iVar2 != 0) {
    iVar2 = (**(code **)(lVar1 + 0x18))(param_1,param_2,param_3,0,0);
    if (0 < iVar2) {
      *param_3 = 0;
      return 1;
    }
  }
  return 0;
}



bool chacha20_poly1305_cipher
               (long param_1,undefined8 param_2,undefined8 *param_3,ulong param_4,undefined8 param_5
               ,ulong param_6)

{
  long lVar1;
  int iVar2;
  
  lVar1 = *(long *)(param_1 + 0xa8);
  iVar2 = ossl_prov_is_running();
  if (iVar2 != 0) {
    if (param_6 == 0) {
      *param_3 = 0;
      return true;
    }
    if (param_6 <= param_4) {
      iVar2 = (**(code **)(lVar1 + 0x18))(param_1,param_2,param_3,param_5,param_6);
      return iVar2 != 0;
    }
    ERR_new();
    ERR_set_debug("providers/implementations/ciphers/cipher_chacha20_poly1305.c",0x12e,
                  "chacha20_poly1305_cipher");
    ERR_set_error(0x39,0x6a,0);
  }
  return false;
}



int chacha20_poly1305_dinit
              (long param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5,
              undefined8 param_6)

{
  int iVar1;
  int iVar2;
  
  iVar1 = ossl_cipher_generic_dinit();
  if (iVar1 != 0) {
    if (param_4 == 0) {
      if (iVar1 == 0) {
        return 0;
      }
    }
    else {
      (**(code **)(*(long *)(param_1 + 0xa8) + 0x20))(param_1);
    }
    iVar2 = chacha20_poly1305_set_ctx_params(param_1,param_6);
    if (iVar2 != 0) {
      return iVar1;
    }
  }
  return 0;
}



int chacha20_poly1305_einit
              (long param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5,
              undefined8 param_6)

{
  int iVar1;
  int iVar2;
  
  iVar1 = ossl_cipher_generic_einit();
  if (iVar1 != 0) {
    if (param_4 == 0) {
      if (iVar1 == 0) {
        return 0;
      }
    }
    else {
      (**(code **)(*(long *)(param_1 + 0xa8) + 0x20))(param_1);
    }
    iVar2 = chacha20_poly1305_set_ctx_params(param_1,param_6);
    if (iVar2 != 0) {
      return iVar1;
    }
  }
  return 0;
}



void * chacha20_poly1305_dupctx(long param_1)

{
  void *ptr;
  long lVar1;
  
  if ((param_1 != 0) &&
     (ptr = (void *)CRYPTO_memdup(param_1,0x350,
                                  "providers/implementations/ciphers/cipher_chacha20_poly1305.c",
                                  0x45), ptr != (void *)0x0)) {
    if (*(long *)((long)ptr + 0x78) == 0) {
      return ptr;
    }
    if (*(int *)((long)ptr + 0x80) == 0) {
      return ptr;
    }
    lVar1 = CRYPTO_memdup(*(long *)((long)ptr + 0x78),*(undefined8 *)((long)ptr + 0x88),
                          "providers/implementations/ciphers/cipher_chacha20_poly1305.c",0x47);
    *(long *)((long)ptr + 0x78) = lVar1;
    if (lVar1 != 0) {
      return ptr;
    }
    CRYPTO_free(ptr);
  }
  return (void *)0x0;
}



long chacha20_poly1305_newctx(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = 0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    lVar2 = CRYPTO_zalloc(0x350,"providers/implementations/ciphers/cipher_chacha20_poly1305.c",0x2e)
    ;
    if (lVar2 != 0) {
      uVar3 = ossl_prov_cipher_hw_chacha20_poly1305(0x100);
      ossl_cipher_generic_initkey(lVar2,0x100,8,0x60,0,3,uVar3,0);
      *(undefined8 *)(lVar2 + 0x340) = 0xffffffffffffffff;
      ossl_chacha20_initctx(lVar2 + 0xc0);
    }
  }
  return lVar2;
}



void chacha20_poly1305_freectx(long param_1)

{
  if (param_1 != 0) {
    ossl_cipher_generic_reset_ctx();
    CRYPTO_clear_free(param_1,0x350,"providers/implementations/ciphers/cipher_chacha20_poly1305.c",
                      0x57);
    return;
  }
  return;
}


