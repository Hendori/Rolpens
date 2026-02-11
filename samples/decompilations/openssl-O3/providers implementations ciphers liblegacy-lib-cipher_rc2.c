
undefined1 * rc2_gettable_ctx_params(void)

{
  return rc2_known_gettable_ctx_params;
}



undefined1 * rc2_settable_ctx_params(void)

{
  return rc2_known_settable_ctx_params;
}



undefined8 rc2_set_ctx_params(long param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  ASN1_TYPE *a;
  long in_FS_OFFSET;
  long local_58;
  uchar *local_50;
  uchar local_48 [24];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 == (long *)0x0) || (*param_2 == 0)) {
LAB_00100138:
    uVar3 = 1;
    goto LAB_0010013d;
  }
  iVar1 = ossl_cipher_var_keylen_set_ctx_params();
  if (iVar1 == 0) {
    uVar3 = 0;
    goto LAB_0010013d;
  }
  lVar2 = OSSL_PARAM_locate_const(param_2,"keybits");
  if (lVar2 != 0) {
    iVar1 = OSSL_PARAM_get_size_t(lVar2,param_1 + 0x1c0);
    if (iVar1 == 0) {
      ERR_new();
      ERR_set_debug("providers/implementations/ciphers/cipher_rc2.c",0xbb,"rc2_set_ctx_params");
      ERR_set_error(0x39,0x67,0);
      uVar3 = 0;
      goto LAB_0010013d;
    }
  }
  lVar2 = OSSL_PARAM_locate_const(param_2,"algorithm-id-params");
  if (lVar2 == 0) goto LAB_00100138;
  local_50 = *(uchar **)(lVar2 + 0x10);
  local_58 = 0;
  if ((*(int *)(lVar2 + 8) == 5) && (*(ulong *)(param_1 + 0x50) < 0x11)) {
    a = d2i_ASN1_TYPE((ASN1_TYPE **)0x0,&local_50,*(long *)(lVar2 + 0x18));
    if (a == (ASN1_TYPE *)0x0) goto LAB_001000ce;
    iVar1 = ASN1_TYPE_get_int_octetstring(a,&local_58,local_48,*(int *)(param_1 + 0x50));
    if ((long)iVar1 == *(long *)(param_1 + 0x50)) {
      iVar1 = ossl_cipher_generic_initiv(param_1,local_48);
      if (iVar1 != 0) {
        iVar1 = (int)local_58;
        if (iVar1 == 0x78) {
          uVar3 = 0x40;
        }
        else if (iVar1 == 0xa0) {
          uVar3 = 0x28;
        }
        else {
          if (iVar1 != 0x3a) {
            ERR_new();
            ERR_set_debug("providers/implementations/ciphers/cipher_rc2.c",0x54,
                          "rc2_magic_to_keybits");
            ERR_set_error(0x39,0x99,0);
            *(undefined8 *)(param_1 + 0x1c0) = 0;
            goto LAB_001000d7;
          }
          uVar3 = 0x80;
        }
        *(undefined8 *)(param_1 + 0x1c0) = uVar3;
        ASN1_TYPE_free(a);
        *(ulong *)(param_1 + 0x48) = *(ulong *)(param_1 + 0x1c0) >> 3;
        goto LAB_00100138;
      }
    }
  }
  else {
LAB_001000ce:
    a = (ASN1_TYPE *)0x0;
  }
LAB_001000d7:
  ERR_new();
  ERR_set_debug("providers/implementations/ciphers/cipher_rc2.c",0xcf,"rc2_set_ctx_params");
  ERR_set_error(0x39,0x68,0);
  ASN1_TYPE_free(a);
  uVar3 = 0;
LAB_0010013d:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 rc2_get_ctx_params(long param_1,undefined8 param_2)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ASN1_TYPE *a;
  undefined8 uVar5;
  long num;
  uchar ****ppppuVar6;
  uchar ****out;
  long in_FS_OFFSET;
  uchar ***local_50;
  uchar ***local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = ossl_cipher_generic_get_ctx_params();
  if (iVar2 == 0) {
    uVar5 = 0;
    goto LAB_0010044d;
  }
  lVar3 = OSSL_PARAM_locate(param_2,"keybits");
  if (lVar3 == 0) {
LAB_001002db:
    lVar3 = OSSL_PARAM_locate(param_2,"algorithm-id-params");
    lVar4 = OSSL_PARAM_locate(param_2,"alg_id_param");
    if (lVar3 == 0 && lVar4 == 0) {
LAB_00100448:
      uVar5 = 1;
      goto LAB_0010044d;
    }
    if (lVar3 == 0) {
      local_50 = (uchar ***)0x0;
      local_48 = *(uchar ****)(lVar4 + 0x10);
      ppppuVar6 = (uchar ****)0x0;
      if ((uchar ****)local_48 == (uchar ****)0x0) {
        out = (uchar ****)0x0;
      }
      else {
LAB_0010034f:
        out = &local_48;
      }
LAB_00100354:
      if (*(int *)(lVar4 + 8) == 5) {
LAB_0010035e:
        a = ASN1_TYPE_new();
        if (a == (ASN1_TYPE *)0x0) {
          ERR_new();
          uVar5 = 0x87;
        }
        else {
          num = 0x78;
          iVar2 = (int)*(undefined8 *)(param_1 + 0x1c0);
          if (((iVar2 != 0x40) && (num = 0x3a, iVar2 != 0x80)) && (num = 0xa0, iVar2 != 0x28)) {
            ERR_new();
            ERR_set_debug("providers/implementations/ciphers/cipher_rc2.c",0x46,
                          "rc2_keybits_to_magic");
            ERR_set_error(0x39,0x99,0);
            num = 0;
          }
          iVar2 = ASN1_TYPE_set_int_octetstring
                            (a,num,(uchar *)(param_1 + 0x20),*(int *)(param_1 + 0x50));
          if (iVar2 != 0) {
            iVar2 = i2d_ASN1_TYPE(a,(uchar **)ppppuVar6);
            bVar1 = -((char)~(byte)((uint)iVar2 >> 0x18) >> 7);
            if ((lVar3 != 0) && (bVar1 != 0)) {
              *(long *)(lVar3 + 0x20) = (long)iVar2;
            }
            if (local_50 != local_48) {
              iVar2 = i2d_ASN1_TYPE(a,(uchar **)out);
              bVar1 = (byte)~(byte)((uint)iVar2 >> 0x18) >> 7;
            }
            if ((lVar4 == 0) || (bVar1 == 0)) {
              ASN1_TYPE_free(a);
              if (iVar2 < 0) {
                ERR_new();
                uVar5 = 0xa7;
                goto LAB_001004b1;
              }
            }
            else {
              *(long *)(lVar4 + 0x20) = (long)iVar2;
              ASN1_TYPE_free(a);
            }
            goto LAB_00100448;
          }
          ASN1_TYPE_free(a);
          ERR_new();
          uVar5 = 0x90;
        }
        ERR_set_debug("providers/implementations/ciphers/cipher_rc2.c",uVar5,"rc2_get_ctx_params");
        ERR_set_error(0x39,0x8000d,0);
        uVar5 = 0;
        goto LAB_0010044d;
      }
    }
    else {
      local_50 = *(uchar ****)(lVar3 + 0x10);
      ppppuVar6 = (uchar ****)local_50;
      if (lVar4 == 0) {
        local_48 = (uchar ***)0x0;
        if ((uchar ****)local_50 != (uchar ****)0x0) {
          ppppuVar6 = &local_50;
        }
        if (*(int *)(lVar3 + 8) == 5) {
          out = (uchar ****)0x0;
          goto LAB_0010035e;
        }
      }
      else {
        local_48 = *(uchar ****)(lVar4 + 0x10);
        if ((uchar ****)local_50 != (uchar ****)0x0) {
          ppppuVar6 = &local_50;
        }
        if ((uchar ****)local_48 == (uchar ****)0x0) {
          out = (uchar ****)0x0;
          if (*(int *)(lVar3 + 8) == 5) goto LAB_00100354;
        }
        else if (*(int *)(lVar3 + 8) == 5) goto LAB_0010034f;
      }
    }
    ERR_new();
    uVar5 = 0x83;
  }
  else {
    iVar2 = OSSL_PARAM_set_size_t(lVar3,*(undefined8 *)(param_1 + 0x1c0));
    if (iVar2 != 0) goto LAB_001002db;
    ERR_new();
    uVar5 = 0x73;
  }
LAB_001004b1:
  ERR_set_debug("providers/implementations/ciphers/cipher_rc2.c",uVar5,"rc2_get_ctx_params");
  ERR_set_error(0x39,0x68,0);
  uVar5 = 0;
LAB_0010044d:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void rc2_128_ecb_get_params(undefined8 param_1)

{
  ossl_cipher_generic_get_params(param_1,1,0x100,0x80,0x40,0);
  return;
}



void rc2_128_cbc_get_params(undefined8 param_1)

{
  ossl_cipher_generic_get_params(param_1,2,0x100,0x80,0x40,0x40);
  return;
}



void rc2_40_cbc_get_params(undefined8 param_1)

{
  ossl_cipher_generic_get_params(param_1,2,0x100,0x28,0x40,0x40);
  return;
}



void rc2_64_cbc_get_params(undefined8 param_1)

{
  ossl_cipher_generic_get_params(param_1,2,0x100,0x40,0x40,0x40);
  return;
}



void rc2_128_ofb128_get_params(undefined8 param_1)

{
  ossl_cipher_generic_get_params(param_1,4,0x100,0x80,8,0x40);
  return;
}



void rc2_128_cfb128_get_params(undefined8 param_1)

{
  ossl_cipher_generic_get_params(param_1,3,0x100,0x80,8,0x40);
  return;
}



undefined8 * rc2_dupctx(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  byte bVar5;
  
  bVar5 = 0;
  iVar1 = ossl_prov_is_running();
  puVar2 = (undefined8 *)0x0;
  if (iVar1 != 0) {
    puVar2 = (undefined8 *)
             CRYPTO_malloc(0x1c8,"providers/implementations/ciphers/cipher_rc2.c",0x34);
    if (puVar2 != (undefined8 *)0x0) {
      puVar4 = puVar2;
      for (lVar3 = 0x39; lVar3 != 0; lVar3 = lVar3 + -1) {
        *puVar4 = *param_1;
        param_1 = param_1 + (ulong)bVar5 * -2 + 1;
        puVar4 = puVar4 + (ulong)bVar5 * -2 + 1;
      }
    }
  }
  return puVar2;
}



void rc2_freectx(undefined8 param_1)

{
  ossl_cipher_generic_reset_ctx();
  CRYPTO_clear_free(param_1,0x1c8,"providers/implementations/ciphers/cipher_rc2.c",0x29);
  return;
}



long rc2_128_ecb_newctx(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = 0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    lVar2 = CRYPTO_zalloc(0x1c8,"providers/implementations/ciphers/cipher_rc2.c",0x11c);
    if (lVar2 != 0) {
      uVar3 = ossl_prov_cipher_hw_rc2_ecb(0x80);
      ossl_cipher_generic_initkey(lVar2,0x80,0x40,0,1,0x100,uVar3,0);
      *(undefined8 *)(lVar2 + 0x1c0) = 0x80;
    }
  }
  return lVar2;
}



long rc2_128_cbc_newctx(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = 0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    lVar2 = CRYPTO_zalloc(0x1c8,"providers/implementations/ciphers/cipher_rc2.c",0x11e);
    if (lVar2 != 0) {
      uVar3 = ossl_prov_cipher_hw_rc2_cbc(0x80);
      ossl_cipher_generic_initkey(lVar2,0x80,0x40,0x40,2,0x100,uVar3,0);
      *(undefined8 *)(lVar2 + 0x1c0) = 0x80;
    }
  }
  return lVar2;
}



long rc2_40_cbc_newctx(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = 0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    lVar2 = CRYPTO_zalloc(0x1c8,"providers/implementations/ciphers/cipher_rc2.c",0x120);
    if (lVar2 != 0) {
      uVar3 = ossl_prov_cipher_hw_rc2_cbc(0x28);
      ossl_cipher_generic_initkey(lVar2,0x28,0x40,0x40,2,0x100,uVar3,0);
      *(undefined8 *)(lVar2 + 0x1c0) = 0x28;
    }
  }
  return lVar2;
}



long rc2_64_cbc_newctx(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = 0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    lVar2 = CRYPTO_zalloc(0x1c8,"providers/implementations/ciphers/cipher_rc2.c",0x122);
    if (lVar2 != 0) {
      uVar3 = ossl_prov_cipher_hw_rc2_cbc(0x40);
      ossl_cipher_generic_initkey(lVar2,0x40,0x40,0x40,2,0x100,uVar3,0);
      *(undefined8 *)(lVar2 + 0x1c0) = 0x40;
    }
  }
  return lVar2;
}



long rc2_128_ofb128_newctx(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = 0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    lVar2 = CRYPTO_zalloc(0x1c8,"providers/implementations/ciphers/cipher_rc2.c",0x125);
    if (lVar2 != 0) {
      uVar3 = ossl_prov_cipher_hw_rc2_ofb64(0x80);
      ossl_cipher_generic_initkey(lVar2,0x80,8,0x40,4,0x100,uVar3,0);
      *(undefined8 *)(lVar2 + 0x1c0) = 0x80;
    }
  }
  return lVar2;
}



long rc2_128_cfb128_newctx(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = 0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    lVar2 = CRYPTO_zalloc(0x1c8,"providers/implementations/ciphers/cipher_rc2.c",0x127);
    if (lVar2 != 0) {
      uVar3 = ossl_prov_cipher_hw_rc2_cfb64(0x80);
      ossl_cipher_generic_initkey(lVar2,0x80,8,0x40,3,0x100,uVar3,0);
      *(undefined8 *)(lVar2 + 0x1c0) = 0x80;
    }
  }
  return lVar2;
}



undefined8 rc2_dinit(long param_1)

{
  int iVar1;
  long lVar2;
  ASN1_TYPE *a;
  undefined8 uVar3;
  long *in_R9;
  long in_FS_OFFSET;
  long local_58;
  uchar *local_50;
  uchar local_48 [24];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = ossl_cipher_generic_dinit();
  if (iVar1 != 0) {
    if ((in_R9 == (long *)0x0) || (*in_R9 == 0)) {
LAB_00100bf0:
      uVar3 = 1;
      goto LAB_00100a22;
    }
    iVar1 = ossl_cipher_var_keylen_set_ctx_params(param_1,in_R9);
    if (iVar1 == 0) goto LAB_00100a20;
    lVar2 = OSSL_PARAM_locate_const(in_R9,"keybits");
    if (lVar2 != 0) {
      iVar1 = OSSL_PARAM_get_size_t(lVar2,param_1 + 0x1c0);
      if (iVar1 == 0) {
        ERR_new();
        ERR_set_debug("providers/implementations/ciphers/cipher_rc2.c",0xbb,"rc2_set_ctx_params");
        ERR_set_error(0x39,0x67,0);
        goto LAB_00100a20;
      }
    }
    lVar2 = OSSL_PARAM_locate_const(in_R9,"algorithm-id-params");
    if (lVar2 == 0) goto LAB_00100bf0;
    local_50 = *(uchar **)(lVar2 + 0x10);
    local_58 = 0;
    if ((*(int *)(lVar2 + 8) == 5) && (*(ulong *)(param_1 + 0x50) < 0x11)) {
      a = d2i_ASN1_TYPE((ASN1_TYPE **)0x0,&local_50,*(long *)(lVar2 + 0x18));
      if (a == (ASN1_TYPE *)0x0) goto LAB_00100ac5;
      iVar1 = ASN1_TYPE_get_int_octetstring(a,&local_58,local_48,*(int *)(param_1 + 0x50));
      if ((long)iVar1 == *(long *)(param_1 + 0x50)) {
        iVar1 = ossl_cipher_generic_initiv(param_1,local_48);
        if (iVar1 != 0) {
          iVar1 = (int)local_58;
          if (iVar1 == 0x78) {
            uVar3 = 0x40;
          }
          else if (iVar1 == 0xa0) {
            uVar3 = 0x28;
          }
          else {
            if (iVar1 != 0x3a) {
              ERR_new();
              ERR_set_debug("providers/implementations/ciphers/cipher_rc2.c",0x54,
                            "rc2_magic_to_keybits");
              ERR_set_error(0x39,0x99,0);
              *(undefined8 *)(param_1 + 0x1c0) = 0;
              goto LAB_00100ace;
            }
            uVar3 = 0x80;
          }
          *(undefined8 *)(param_1 + 0x1c0) = uVar3;
          ASN1_TYPE_free(a);
          *(ulong *)(param_1 + 0x48) = *(ulong *)(param_1 + 0x1c0) >> 3;
          goto LAB_00100bf0;
        }
      }
    }
    else {
LAB_00100ac5:
      a = (ASN1_TYPE *)0x0;
    }
LAB_00100ace:
    ERR_new();
    ERR_set_debug("providers/implementations/ciphers/cipher_rc2.c",0xcf,"rc2_set_ctx_params");
    ERR_set_error(0x39,0x68,0);
    ASN1_TYPE_free(a);
  }
LAB_00100a20:
  uVar3 = 0;
LAB_00100a22:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 rc2_einit(long param_1)

{
  int iVar1;
  long lVar2;
  ASN1_TYPE *a;
  undefined8 uVar3;
  long *in_R9;
  long in_FS_OFFSET;
  long local_58;
  uchar *local_50;
  uchar local_48 [24];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = ossl_cipher_generic_einit();
  if (iVar1 != 0) {
    if ((in_R9 == (long *)0x0) || (*in_R9 == 0)) {
LAB_00100e50:
      uVar3 = 1;
      goto LAB_00100c82;
    }
    iVar1 = ossl_cipher_var_keylen_set_ctx_params(param_1,in_R9);
    if (iVar1 == 0) goto LAB_00100c80;
    lVar2 = OSSL_PARAM_locate_const(in_R9,"keybits");
    if (lVar2 != 0) {
      iVar1 = OSSL_PARAM_get_size_t(lVar2,param_1 + 0x1c0);
      if (iVar1 == 0) {
        ERR_new();
        ERR_set_debug("providers/implementations/ciphers/cipher_rc2.c",0xbb,"rc2_set_ctx_params");
        ERR_set_error(0x39,0x67,0);
        goto LAB_00100c80;
      }
    }
    lVar2 = OSSL_PARAM_locate_const(in_R9,"algorithm-id-params");
    if (lVar2 == 0) goto LAB_00100e50;
    local_50 = *(uchar **)(lVar2 + 0x10);
    local_58 = 0;
    if ((*(int *)(lVar2 + 8) == 5) && (*(ulong *)(param_1 + 0x50) < 0x11)) {
      a = d2i_ASN1_TYPE((ASN1_TYPE **)0x0,&local_50,*(long *)(lVar2 + 0x18));
      if (a == (ASN1_TYPE *)0x0) goto LAB_00100d25;
      iVar1 = ASN1_TYPE_get_int_octetstring(a,&local_58,local_48,*(int *)(param_1 + 0x50));
      if ((long)iVar1 == *(long *)(param_1 + 0x50)) {
        iVar1 = ossl_cipher_generic_initiv(param_1,local_48);
        if (iVar1 != 0) {
          iVar1 = (int)local_58;
          if (iVar1 == 0x78) {
            uVar3 = 0x40;
          }
          else if (iVar1 == 0xa0) {
            uVar3 = 0x28;
          }
          else {
            if (iVar1 != 0x3a) {
              ERR_new();
              ERR_set_debug("providers/implementations/ciphers/cipher_rc2.c",0x54,
                            "rc2_magic_to_keybits");
              ERR_set_error(0x39,0x99,0);
              *(undefined8 *)(param_1 + 0x1c0) = 0;
              goto LAB_00100d2e;
            }
            uVar3 = 0x80;
          }
          *(undefined8 *)(param_1 + 0x1c0) = uVar3;
          ASN1_TYPE_free(a);
          *(ulong *)(param_1 + 0x48) = *(ulong *)(param_1 + 0x1c0) >> 3;
          goto LAB_00100e50;
        }
      }
    }
    else {
LAB_00100d25:
      a = (ASN1_TYPE *)0x0;
    }
LAB_00100d2e:
    ERR_new();
    ERR_set_debug("providers/implementations/ciphers/cipher_rc2.c",0xcf,"rc2_set_ctx_params");
    ERR_set_error(0x39,0x68,0);
    ASN1_TYPE_free(a);
  }
LAB_00100c80:
  uVar3 = 0;
LAB_00100c82:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


