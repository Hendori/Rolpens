
undefined1 * aes_siv_gettable_ctx_params(void)

{
  return aes_siv_known_gettable_ctx_params;
}



undefined1 * aes_siv_settable_ctx_params(void)

{
  return aes_siv_known_settable_ctx_params;
}



undefined8 aes_siv_set_ctx_params(long param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined4 local_2c;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_2c = 0;
  if ((param_2 != (long *)0x0) && (*param_2 != 0)) {
    lVar2 = OSSL_PARAM_locate_const(param_2,&_LC0);
    if (lVar2 == 0) {
LAB_001000d0:
      lVar2 = OSSL_PARAM_locate_const(param_2,"speed");
      if (lVar2 != 0) {
        iVar1 = OSSL_PARAM_get_uint(lVar2,&local_2c);
        if (iVar1 == 0) {
          ERR_new();
          uVar3 = 0xd4;
          goto LAB_001000a6;
        }
        (**(code **)(*(long *)(param_1 + 0x68) + 0x10))(param_1,local_2c);
      }
      lVar2 = OSSL_PARAM_locate_const(param_2,"keylen");
      if (lVar2 != 0) {
        iVar1 = OSSL_PARAM_get_size_t(lVar2,&local_28);
        if (iVar1 == 0) {
          ERR_new();
          uVar3 = 0xde;
          goto LAB_001000a6;
        }
        if (*(long *)(param_1 + 8) != local_28) goto LAB_001000c5;
      }
    }
    else if ((*(byte *)(param_1 + 4) & 1) == 0) {
      if ((*(int *)(lVar2 + 8) == 5) &&
         (iVar1 = (**(code **)(*(long *)(param_1 + 0x68) + 0x18))
                            (param_1,*(undefined8 *)(lVar2 + 0x10),*(undefined8 *)(lVar2 + 0x18)),
         iVar1 != 0)) goto LAB_001000d0;
      ERR_new();
      uVar3 = 0xcd;
LAB_001000a6:
      ERR_set_debug("providers/implementations/ciphers/cipher_aes_siv.c",uVar3,
                    "aes_siv_set_ctx_params");
      ERR_set_error(0x39,0x67,0);
LAB_001000c5:
      uVar3 = 0;
      goto LAB_0010013d;
    }
  }
  uVar3 = 1;
LAB_0010013d:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



undefined8 aes_siv_get_ctx_params(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = OSSL_PARAM_locate(param_2,&_LC0);
  if (((lVar2 == 0) || (*(int *)(lVar2 + 8) != 5)) ||
     (((*(byte *)(param_1 + 4) & 1) != 0 &&
      ((*(long *)(lVar2 + 0x18) == *(long *)(param_1 + 0x10) &&
       (iVar1 = OSSL_PARAM_set_octet_string(lVar2,param_1 + 0x28), iVar1 != 0)))))) {
    lVar2 = OSSL_PARAM_locate(param_2,"taglen");
    if ((lVar2 == 0) ||
       (iVar1 = OSSL_PARAM_set_size_t(lVar2,*(undefined8 *)(param_1 + 0x10)), iVar1 != 0)) {
      lVar2 = OSSL_PARAM_locate(param_2,"keylen");
      if ((lVar2 == 0) ||
         (iVar1 = OSSL_PARAM_set_size_t(lVar2,*(undefined8 *)(param_1 + 8)), iVar1 != 0)) {
        return 1;
      }
      ERR_new();
      uVar3 = 0xac;
    }
    else {
      ERR_new();
      uVar3 = 0xa7;
    }
  }
  else {
    ERR_new();
    uVar3 = 0xa1;
  }
  ERR_set_debug("providers/implementations/ciphers/cipher_aes_siv.c",uVar3,"aes_siv_get_ctx_params")
  ;
  ERR_set_error(0x39,0x68,0);
  return 0;
}



void aes_128_siv_get_params(undefined8 param_1)

{
  ossl_cipher_generic_get_params(param_1,0x10004,3,0x100,8,0);
  return;
}



void aes_192_siv_get_params(undefined8 param_1)

{
  ossl_cipher_generic_get_params(param_1,0x10004,3,0x180,8,0);
  return;
}



void aes_256_siv_get_params(undefined8 param_1)

{
  ossl_cipher_generic_get_params(param_1,0x10004,3,0x200,8,0);
  return;
}



undefined8 siv_stream_final(long param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    iVar1 = (**(code **)(*(long *)(param_1 + 0x68) + 8))(param_1,param_2,0,0);
    if (iVar1 != 0) {
      if (param_3 != (undefined8 *)0x0) {
        *param_3 = 0;
      }
      return 1;
    }
  }
  return 0;
}



undefined8
siv_cipher(long param_1,long param_2,ulong *param_3,ulong param_4,undefined8 param_5,ulong param_6)

{
  int iVar1;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    if ((param_2 == 0) || (param_6 <= param_4)) {
      iVar1 = (**(code **)(*(long *)(param_1 + 0x68) + 8))(param_1,param_2,param_5,param_6);
      if (0 < iVar1) {
        if (param_3 != (ulong *)0x0) {
          *param_3 = param_6;
        }
        return 1;
      }
    }
    else {
      ERR_new();
      ERR_set_debug("providers/implementations/ciphers/cipher_aes_siv.c",0x7a,"siv_cipher");
      ERR_set_error(0x39,0x6a,0);
    }
  }
  return 0;
}



void * siv_dupctx(long param_1)

{
  int iVar1;
  void *ptr;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    ptr = CRYPTO_malloc(0x78,"providers/implementations/ciphers/cipher_aes_siv.c",0x43);
    if (ptr != (void *)0x0) {
      iVar1 = (**(code **)(*(long *)(param_1 + 0x68) + 0x28))(param_1,ptr);
      if (iVar1 != 0) {
        return ptr;
      }
      CRYPTO_free(ptr);
    }
  }
  return (void *)0x0;
}



void aes_siv_freectx(long param_1)

{
  if (param_1 != 0) {
    (**(code **)(*(long *)(param_1 + 0x68) + 0x20))();
    CRYPTO_clear_free(param_1,0x78,"providers/implementations/ciphers/cipher_aes_siv.c",0x37);
    return;
  }
  return;
}



undefined4 * aes_siv_newctx_constprop_0(undefined8 param_1,ulong param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined4 *)0x0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)
             CRYPTO_zalloc(0x78,"providers/implementations/ciphers/cipher_aes_siv.c",0x26);
    if (puVar2 != (undefined4 *)0x0) {
      *(undefined8 *)(puVar2 + 4) = 0x10;
      *puVar2 = 0x10004;
      *(ulong *)(puVar2 + 2) = param_2 >> 3;
      uVar3 = ossl_prov_cipher_hw_aes_siv(param_2);
      *(undefined8 *)(puVar2 + 0x1a) = uVar3;
      uVar3 = ossl_prov_ctx_get0_libctx(param_1);
      *(undefined8 *)(puVar2 + 0x1c) = uVar3;
    }
  }
  return puVar2;
}



void aes256siv_newctx(undefined8 param_1)

{
  aes_siv_newctx_constprop_0(param_1,0x200);
  return;
}



void aes192siv_newctx(undefined8 param_1)

{
  aes_siv_newctx_constprop_0(param_1,0x180);
  return;
}



void aes128siv_newctx(undefined8 param_1)

{
  aes_siv_newctx_constprop_0(param_1,0x100);
  return;
}



undefined8
siv_einit(long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
         undefined8 param_6)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) | 1;
    if (param_2 == 0) {
LAB_00100625:
      uVar2 = aes_siv_set_ctx_params(param_1,param_6);
      return uVar2;
    }
    if (param_3 == *(long *)(param_1 + 8)) {
      iVar1 = (*(code *)**(undefined8 **)(param_1 + 0x68))(param_1,param_2,param_3);
      if (iVar1 != 0) goto LAB_00100625;
    }
    else {
      ERR_new();
      ERR_set_debug("providers/implementations/ciphers/cipher_aes_siv.c",0x5a,"siv_init");
      ERR_set_error(0x39,0x69,0);
    }
  }
  return 0;
}



undefined8
siv_dinit(long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
         undefined8 param_6)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) & 0xfe;
    if (param_2 == 0) {
LAB_001006c5:
      uVar2 = aes_siv_set_ctx_params(param_1,param_6);
      return uVar2;
    }
    if (param_3 == *(long *)(param_1 + 8)) {
      iVar1 = (*(code *)**(undefined8 **)(param_1 + 0x68))(param_1,param_2,param_3);
      if (iVar1 != 0) goto LAB_001006c5;
    }
    else {
      ERR_new();
      ERR_set_debug("providers/implementations/ciphers/cipher_aes_siv.c",0x5a,"siv_init");
      ERR_set_error(0x39,0x69,0);
    }
  }
  return 0;
}


