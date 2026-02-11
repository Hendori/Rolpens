
undefined1 * cipher_ocb_gettable_ctx_params(void)

{
  return cipher_ocb_known_gettable_ctx_params;
}



undefined1 * cipher_ocb_settable_ctx_params(void)

{
  return cipher_ocb_known_settable_ctx_params;
}



undefined8 aes_ocb_set_ctx_params(long param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  long local_30;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 != (long *)0x0) && (*param_2 != 0)) {
    lVar2 = OSSL_PARAM_locate_const(param_2,&_LC0);
    if (lVar2 != 0) {
      if (*(int *)(lVar2 + 8) == 5) {
        if (*(void **)(lVar2 + 0x10) == (void *)0x0) {
          if (*(ulong *)(lVar2 + 0x18) < 0x11) {
            *(ulong *)(param_1 + 0x368) = *(ulong *)(lVar2 + 0x18);
            goto LAB_001000dc;
          }
          ERR_new();
          uVar3 = 0x173;
        }
        else {
          if ((*(byte *)(param_1 + 0x6c) & 2) != 0) {
            ERR_new();
            ERR_set_debug("providers/implementations/ciphers/cipher_aes_ocb.c",0x179,
                          "aes_ocb_set_ctx_params");
            ERR_set_error(0x39,0x80106,0);
            uVar3 = 0;
            goto LAB_00100168;
          }
          if (*(size_t *)(lVar2 + 0x18) == *(size_t *)(param_1 + 0x368)) {
            memcpy((void *)(param_1 + 0x380),*(void **)(lVar2 + 0x10),*(size_t *)(lVar2 + 0x18));
            goto LAB_001000dc;
          }
          ERR_new();
          uVar3 = 0x17d;
        }
        ERR_set_debug("providers/implementations/ciphers/cipher_aes_ocb.c",uVar3,
                      "aes_ocb_set_ctx_params");
        ERR_set_error(0x39,0x76,0);
LAB_001000c5:
        uVar3 = 0;
        goto LAB_00100168;
      }
      ERR_new();
      uVar3 = 0x16d;
LAB_001001b9:
      ERR_set_debug("providers/implementations/ciphers/cipher_aes_ocb.c",uVar3,
                    "aes_ocb_set_ctx_params");
      ERR_set_error(0x39,0x67,0);
      uVar3 = 0;
      goto LAB_00100168;
    }
LAB_001000dc:
    lVar2 = OSSL_PARAM_locate_const(param_2,"ivlen");
    if (lVar2 != 0) {
      iVar1 = OSSL_PARAM_get_size_t(lVar2,&local_30);
      if (iVar1 == 0) {
        ERR_new();
        uVar3 = 0x186;
        goto LAB_001001b9;
      }
      if (0xe < local_30 - 1U) goto LAB_001000c5;
      if (local_30 != *(long *)(param_1 + 0x50)) {
        *(long *)(param_1 + 0x50) = local_30;
        *(undefined4 *)(param_1 + 0x360) = 0;
      }
    }
    lVar2 = OSSL_PARAM_locate_const(param_2,"keylen");
    if (lVar2 != 0) {
      iVar1 = OSSL_PARAM_get_size_t(lVar2,&local_28);
      if (iVar1 == 0) {
        ERR_new();
        uVar3 = 0x196;
        goto LAB_001001b9;
      }
      if (*(long *)(param_1 + 0x48) != local_28) {
        ERR_new();
        ERR_set_debug("providers/implementations/ciphers/cipher_aes_ocb.c",0x19a,
                      "aes_ocb_set_ctx_params");
        ERR_set_error(0x39,0x69,0);
        uVar3 = 0;
        goto LAB_00100168;
      }
    }
  }
  uVar3 = 1;
LAB_00100168:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 aes_ocb_get_ctx_params(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = OSSL_PARAM_locate(param_2,"ivlen");
  if ((lVar2 != 0) &&
     (iVar1 = OSSL_PARAM_set_size_t(lVar2,*(undefined8 *)(param_1 + 0x50)), iVar1 == 0)) {
    ERR_new();
    uVar3 = 0x1a8;
LAB_00100489:
    ERR_set_debug("providers/implementations/ciphers/cipher_aes_ocb.c",uVar3,
                  "aes_ocb_get_ctx_params");
    ERR_set_error(0x39,0x68,0);
    return 0;
  }
  lVar2 = OSSL_PARAM_locate(param_2,"keylen");
  if ((lVar2 != 0) &&
     (iVar1 = OSSL_PARAM_set_size_t(lVar2,*(undefined8 *)(param_1 + 0x48)), iVar1 == 0)) {
    ERR_new();
    uVar3 = 0x1ad;
    goto LAB_00100489;
  }
  lVar2 = OSSL_PARAM_locate(param_2,"taglen");
  if ((lVar2 != 0) &&
     (iVar1 = OSSL_PARAM_set_size_t(lVar2,*(undefined8 *)(param_1 + 0x368)), iVar1 == 0)) {
    ERR_new();
    uVar3 = 0x1b3;
    goto LAB_00100489;
  }
  lVar2 = OSSL_PARAM_locate(param_2,&_LC5);
  if (lVar2 != 0) {
    if (*(ulong *)(lVar2 + 0x18) < *(ulong *)(param_1 + 0x50)) {
      ERR_new();
      uVar3 = 0x1bb;
      goto LAB_00100451;
    }
    iVar1 = OSSL_PARAM_set_octet_string(lVar2,param_1);
    if ((iVar1 == 0) &&
       (iVar1 = OSSL_PARAM_set_octet_ptr(lVar2,param_1,*(undefined8 *)(param_1 + 0x50)), iVar1 == 0)
       ) {
      ERR_new();
      uVar3 = 0x1c0;
      goto LAB_00100489;
    }
  }
  lVar2 = OSSL_PARAM_locate(param_2,"updated-iv");
  if (lVar2 != 0) {
    if (*(ulong *)(lVar2 + 0x18) < *(ulong *)(param_1 + 0x50)) {
      ERR_new();
      uVar3 = 0x1c7;
LAB_00100451:
      ERR_set_debug("providers/implementations/ciphers/cipher_aes_ocb.c",uVar3,
                    "aes_ocb_get_ctx_params");
      ERR_set_error(0x39,0x6d,0);
      return 0;
    }
    iVar1 = OSSL_PARAM_set_octet_string(lVar2,param_1 + 0x20);
    if ((iVar1 == 0) &&
       (iVar1 = OSSL_PARAM_set_octet_ptr(lVar2,param_1 + 0x20,*(undefined8 *)(param_1 + 0x50)),
       iVar1 == 0)) {
      ERR_new();
      uVar3 = 0x1cc;
      goto LAB_00100489;
    }
  }
  lVar2 = OSSL_PARAM_locate(param_2,&_LC0);
  if (lVar2 == 0) {
    return 1;
  }
  if (*(int *)(lVar2 + 8) == 5) {
    if (((*(byte *)(param_1 + 0x6c) & 2) != 0) &&
       (*(size_t *)(lVar2 + 0x18) == *(size_t *)(param_1 + 0x368))) {
      memcpy(*(void **)(lVar2 + 0x10),(void *)(param_1 + 0x380),*(size_t *)(param_1 + 0x368));
      return 1;
    }
    ERR_new();
    ERR_set_debug("providers/implementations/ciphers/cipher_aes_ocb.c",0x1d7,
                  "aes_ocb_get_ctx_params");
    ERR_set_error(0x39,0x76,0);
    return 0;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/ciphers/cipher_aes_ocb.c",0x1d3,"aes_ocb_get_ctx_params")
  ;
  ERR_set_error(0x39,0x67,0);
  return 0;
}



void aes_256_ocb_get_params(undefined8 param_1)

{
  ossl_cipher_generic_get_params(param_1,0x10003,3,0x100,0x80,0x60);
  return;
}



void aes_192_ocb_get_params(undefined8 param_1)

{
  ossl_cipher_generic_get_params(param_1,0x10003,3,0xc0,0x80,0x60);
  return;
}



void aes_128_ocb_get_params(undefined8 param_1)

{
  ossl_cipher_generic_get_params(param_1,0x10003,3,0x80,0x80,0x60);
  return;
}



undefined8 * aes_ocb_dupctx(undefined8 *param_1)

{
  int iVar1;
  undefined8 *ptr;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  byte bVar5;
  
  bVar5 = 0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    ptr = (undefined8 *)
          CRYPTO_malloc(0x3b0,"providers/implementations/ciphers/cipher_aes_ocb.c",0x156);
    if (ptr != (undefined8 *)0x0) {
      puVar3 = param_1;
      puVar4 = ptr;
      for (lVar2 = 0x76; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + (ulong)bVar5 * -2 + 1;
        puVar4 = puVar4 + (ulong)bVar5 * -2 + 1;
      }
      iVar1 = CRYPTO_ocb128_copy_ctx(ptr + 0x56,param_1 + 0x56,ptr + 0x18,ptr + 0x37);
      if (iVar1 != 0) {
        return ptr;
      }
      CRYPTO_free(ptr);
    }
  }
  return (undefined8 *)0x0;
}



bool aes_generic_ocb_cipher(long param_1)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 0x6c) & 2) != 0) {
    iVar1 = CRYPTO_ocb128_encrypt(param_1 + 0x2b0);
    return iVar1 != 0;
  }
  iVar1 = CRYPTO_ocb128_decrypt(param_1 + 0x2b0);
  return iVar1 != 0;
}



bool cipher_updateaad(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  iVar1 = CRYPTO_ocb128_aad(param_1 + 0x2b0,param_2,param_4);
  return iVar1 == 1;
}



undefined8
aes_ocb_dinit(long param_1,long param_2,long param_3,long param_4,long param_5,undefined8 param_6)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    *(byte *)(param_1 + 0x6c) = *(byte *)(param_1 + 0x6c) & 0xfd;
    *(undefined1 (*) [16])(param_1 + 0x370) = (undefined1  [16])0x0;
    if (param_4 != 0) {
      if (param_5 != *(long *)(param_1 + 0x50)) {
        if (0xe < param_5 - 1U) {
          ERR_new();
          ERR_set_debug("providers/implementations/ciphers/cipher_aes_ocb.c",0x79,"aes_ocb_init");
          ERR_set_error(0x39,0x6d,0);
          return 0;
        }
        *(long *)(param_1 + 0x50) = param_5;
      }
      iVar1 = ossl_cipher_generic_initiv(param_1,param_4,param_5);
      if (iVar1 == 0) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x360) = 1;
    }
    if (param_2 == 0) {
LAB_0010081a:
      uVar2 = aes_ocb_set_ctx_params(param_1,param_6);
      return uVar2;
    }
    if (param_3 == *(long *)(param_1 + 0x48)) {
      iVar1 = (*(code *)**(undefined8 **)(param_1 + 0xa8))(param_1,param_2,param_3);
      if (iVar1 != 0) goto LAB_0010081a;
    }
    else {
      ERR_new();
      ERR_set_debug("providers/implementations/ciphers/cipher_aes_ocb.c",0x84,"aes_ocb_init");
      ERR_set_error(0x39,0x69,0);
    }
  }
  return 0;
}



void aes_ocb_freectx(long param_1)

{
  if (param_1 != 0) {
    CRYPTO_ocb128_cleanup(param_1 + 0x2b0);
    ossl_cipher_generic_reset_ctx(param_1);
    CRYPTO_clear_free(param_1,0x3b0,"providers/implementations/ciphers/cipher_aes_ocb.c",0x14a);
    return;
  }
  return;
}



bool aes_ocb_block_update
               (long param_1,long param_2,ulong *param_3,ulong param_4,long param_5,ulong param_6)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  code *pcVar4;
  ulong uVar5;
  long lVar6;
  ulong *puVar7;
  long in_FS_OFFSET;
  bool bVar8;
  long local_50;
  ulong local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((((*(byte *)(param_1 + 0x364) & 1) != 0) && (iVar1 = *(int *)(param_1 + 0x360), iVar1 != 3))
     && (iVar1 != 0)) {
    if (iVar1 == 1) {
      iVar1 = CRYPTO_ocb128_setiv(param_1 + 0x2b0,param_1 + 0x20,*(undefined8 *)(param_1 + 0x50),
                                  *(undefined8 *)(param_1 + 0x368));
      if (iVar1 != 1) goto LAB_0010093b;
      *(undefined4 *)(param_1 + 0x360) = 2;
    }
    if (param_6 == 0) {
      *param_3 = 0;
      bVar8 = true;
      goto LAB_0010093d;
    }
    lVar6 = param_1 + 0x390;
    puVar7 = (ulong *)(param_1 + 0x370);
    pcVar4 = aes_generic_ocb_cipher;
    if (param_2 == 0) {
      lVar6 = param_1 + 0x3a0;
      puVar7 = (ulong *)(param_1 + 0x378);
      pcVar4 = cipher_updateaad;
    }
    uVar5 = *puVar7;
    uVar3 = param_6 & 0xfffffffffffffff0;
    local_50 = param_5;
    local_48 = param_6;
    if (uVar5 == 0) {
LAB_001009c1:
      if (uVar3 != 0) {
        uVar5 = uVar5 + uVar3;
        if (param_4 < uVar5) {
          ERR_new();
          uVar2 = 0xbe;
LAB_00100be9:
          ERR_set_debug("providers/implementations/ciphers/cipher_aes_ocb.c",uVar2,
                        "aes_ocb_block_update_internal");
          ERR_set_error(0x39,0x6a,0);
          goto LAB_0010093b;
        }
        iVar1 = (*pcVar4)(param_1,local_50,param_2,uVar3);
        if (iVar1 == 0) {
          ERR_new();
          uVar2 = 0xc2;
          goto LAB_00100bb1;
        }
        local_50 = local_50 + uVar3;
        local_48 = local_48 - uVar3;
      }
      if ((local_48 == 0) ||
         (iVar1 = ossl_cipher_trailingdata(lVar6,puVar7,0x10,&local_50,&local_48), iVar1 != 0)) {
        bVar8 = local_48 == 0;
        *param_3 = uVar5;
        goto LAB_0010093d;
      }
    }
    else {
      uVar3 = ossl_cipher_fillblock(lVar6,puVar7,0x10,&local_50,&local_48);
      if (*puVar7 != 0x10) {
        uVar5 = 0;
        goto LAB_001009c1;
      }
      if (param_4 < 0x10) {
        ERR_new();
        uVar2 = 0xaf;
        goto LAB_00100be9;
      }
      iVar1 = (*pcVar4)(param_1,lVar6,param_2,0x10);
      if (iVar1 != 0) {
        *puVar7 = 0;
        if (param_2 != 0) {
          param_2 = param_2 + 0x10;
        }
        uVar5 = 0x10;
        goto LAB_001009c1;
      }
      ERR_new();
      uVar2 = 0xb3;
LAB_00100bb1:
      ERR_set_debug("providers/implementations/ciphers/cipher_aes_ocb.c",uVar2,
                    "aes_ocb_block_update_internal");
      ERR_set_error(0x39,0x66,0);
    }
  }
LAB_0010093b:
  bVar8 = false;
LAB_0010093d:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar8;
}



long aes_192_ocb_newctx(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = 0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    lVar2 = CRYPTO_zalloc(0x3b0,"providers/implementations/ciphers/cipher_aes_ocb.c",0x13a);
    if (lVar2 != 0) {
      uVar3 = ossl_prov_cipher_hw_aes_ocb(0xc0);
      ossl_cipher_generic_initkey(lVar2,0xc0,0x80,0x60,0x10003,3,uVar3,0);
      *(undefined8 *)(lVar2 + 0x368) = 0x10;
    }
  }
  return lVar2;
}



undefined8
aes_ocb_cipher(long param_1,undefined8 param_2,ulong *param_3,ulong param_4,undefined8 param_5,
              ulong param_6)

{
  int iVar1;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    if (param_4 < param_6) {
      ERR_new();
      ERR_set_debug("providers/implementations/ciphers/cipher_aes_ocb.c",0x203,"aes_ocb_cipher");
      ERR_set_error(0x39,0x6a,0);
    }
    else {
      if ((*(byte *)(param_1 + 0x6c) & 2) == 0) {
        iVar1 = CRYPTO_ocb128_decrypt(param_1 + 0x2b0,param_5,param_2,param_6);
      }
      else {
        iVar1 = CRYPTO_ocb128_encrypt();
      }
      if (iVar1 != 0) {
        *param_3 = param_6;
        return 1;
      }
      ERR_new();
      ERR_set_debug("providers/implementations/ciphers/cipher_aes_ocb.c",0x208,"aes_ocb_cipher");
      ERR_set_error(0x39,0x66,0);
    }
  }
  return 0;
}



long aes_128_ocb_newctx(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = 0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    lVar2 = CRYPTO_zalloc(0x3b0,"providers/implementations/ciphers/cipher_aes_ocb.c",0x13a);
    if (lVar2 != 0) {
      uVar3 = ossl_prov_cipher_hw_aes_ocb(0x80);
      ossl_cipher_generic_initkey(lVar2,0x80,0x80,0x60,0x10003,3,uVar3,0);
      *(undefined8 *)(lVar2 + 0x368) = 0x10;
    }
  }
  return lVar2;
}



long aes_256_ocb_newctx(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = 0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    lVar2 = CRYPTO_zalloc(0x3b0,"providers/implementations/ciphers/cipher_aes_ocb.c",0x13a);
    if (lVar2 != 0) {
      uVar3 = ossl_prov_cipher_hw_aes_ocb(0x100);
      ossl_cipher_generic_initkey(lVar2,0x100,0x80,0x60,0x10003,3,uVar3,0);
      *(undefined8 *)(lVar2 + 0x368) = 0x10;
    }
  }
  return lVar2;
}



undefined8 aes_ocb_block_final(long param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  
  iVar1 = ossl_prov_is_running();
  if ((((iVar1 != 0) && ((*(byte *)(param_1 + 0x364) & 1) != 0)) &&
      (iVar1 = *(int *)(param_1 + 0x360), iVar1 != 3)) && (iVar1 != 0)) {
    if (iVar1 == 1) {
      iVar1 = CRYPTO_ocb128_setiv(param_1 + 0x2b0,param_1 + 0x20,*(undefined8 *)(param_1 + 0x50),
                                  *(undefined8 *)(param_1 + 0x368));
      if (iVar1 != 1) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x360) = 2;
    }
    *param_3 = 0;
    if (*(long *)(param_1 + 0x370) != 0) {
      if ((*(byte *)(param_1 + 0x6c) & 2) == 0) {
        iVar1 = CRYPTO_ocb128_decrypt();
      }
      else {
        iVar1 = CRYPTO_ocb128_encrypt(param_1 + 0x2b0,param_1 + 0x390,param_2);
      }
      if (iVar1 == 0) {
        return 0;
      }
      *param_3 = *(undefined8 *)(param_1 + 0x370);
      *(undefined8 *)(param_1 + 0x370) = 0;
    }
    if (*(long *)(param_1 + 0x378) != 0) {
      iVar1 = CRYPTO_ocb128_aad(param_1 + 0x2b0,param_1 + 0x3a0);
      if (iVar1 != 1) {
        return 0;
      }
      *(undefined8 *)(param_1 + 0x378) = 0;
    }
    if ((*(byte *)(param_1 + 0x6c) & 2) == 0) {
      if ((*(long *)(param_1 + 0x368) != 0) &&
         (iVar1 = CRYPTO_ocb128_finish(param_1 + 0x2b0,param_1 + 0x380), iVar1 == 0)) {
LAB_00100f39:
        *(undefined4 *)(param_1 + 0x360) = 3;
        return 1;
      }
    }
    else {
      iVar1 = CRYPTO_ocb128_tag(param_1 + 0x2b0,param_1 + 0x380);
      if (0 < iVar1) goto LAB_00100f39;
    }
  }
  return 0;
}



undefined8
aes_ocb_einit(long param_1,long param_2,long param_3,long param_4,long param_5,undefined8 param_6)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    *(byte *)(param_1 + 0x6c) = *(byte *)(param_1 + 0x6c) | 2;
    *(undefined1 (*) [16])(param_1 + 0x370) = (undefined1  [16])0x0;
    if (param_4 != 0) {
      if (param_5 != *(long *)(param_1 + 0x50)) {
        if (0xe < param_5 - 1U) {
          ERR_new();
          ERR_set_debug("providers/implementations/ciphers/cipher_aes_ocb.c",0x79,"aes_ocb_init");
          ERR_set_error(0x39,0x6d,0);
          return 0;
        }
        *(long *)(param_1 + 0x50) = param_5;
      }
      iVar1 = ossl_cipher_generic_initiv(param_1,param_4,param_5);
      if (iVar1 == 0) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x360) = 1;
    }
    if (param_2 == 0) {
LAB_001010da:
      uVar2 = aes_ocb_set_ctx_params(param_1,param_6);
      return uVar2;
    }
    if (param_3 == *(long *)(param_1 + 0x48)) {
      iVar1 = (*(code *)**(undefined8 **)(param_1 + 0xa8))(param_1,param_2,param_3);
      if (iVar1 != 0) goto LAB_001010da;
    }
    else {
      ERR_new();
      ERR_set_debug("providers/implementations/ciphers/cipher_aes_ocb.c",0x84,"aes_ocb_init");
      ERR_set_error(0x39,0x69,0);
    }
  }
  return 0;
}


