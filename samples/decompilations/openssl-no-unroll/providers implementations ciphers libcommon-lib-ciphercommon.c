
undefined1 * ossl_cipher_generic_gettable_params(void)

{
  return cipher_known_gettable_params;
}



undefined8
ossl_cipher_generic_get_params
          (undefined8 param_1,undefined4 param_2,ulong param_3,ulong param_4,ulong param_5,
          ulong param_6)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = OSSL_PARAM_locate(param_1,&_LC0);
  if (lVar2 != 0) {
    iVar1 = OSSL_PARAM_set_uint(lVar2,param_2);
    if (iVar1 == 0) {
      ERR_new();
      uVar3 = 0x33;
      goto LAB_001001e1;
    }
  }
  lVar2 = OSSL_PARAM_locate(param_1,&_LC2);
  if (lVar2 != 0) {
    iVar1 = OSSL_PARAM_set_int(lVar2,(uint)param_3 & 1);
    if (iVar1 == 0) {
      ERR_new();
      uVar3 = 0x39;
      goto LAB_001001e1;
    }
  }
  lVar2 = OSSL_PARAM_locate(param_1,"custom-iv");
  if (lVar2 != 0) {
    iVar1 = OSSL_PARAM_set_int(lVar2,(uint)(param_3 >> 1) & 1);
    if (iVar1 == 0) {
      ERR_new();
      uVar3 = 0x3f;
      goto LAB_001001e1;
    }
  }
  lVar2 = OSSL_PARAM_locate(param_1,&_LC4);
  if (lVar2 != 0) {
    iVar1 = OSSL_PARAM_set_int(lVar2,(uint)(param_3 >> 2) & 1);
    if (iVar1 == 0) {
      ERR_new();
      uVar3 = 0x45;
      goto LAB_001001e1;
    }
  }
  lVar2 = OSSL_PARAM_locate(param_1,"tls-multi");
  if (lVar2 != 0) {
    iVar1 = OSSL_PARAM_set_int(lVar2,(uint)(param_3 >> 3) & 1);
    if (iVar1 == 0) {
      ERR_new();
      uVar3 = 0x4b;
      goto LAB_001001e1;
    }
  }
  lVar2 = OSSL_PARAM_locate(param_1,"has-randkey");
  if (lVar2 != 0) {
    iVar1 = OSSL_PARAM_set_int(lVar2,(uint)(param_3 >> 4) & 1);
    if (iVar1 == 0) {
      ERR_new();
      uVar3 = 0x51;
      goto LAB_001001e1;
    }
  }
  lVar2 = OSSL_PARAM_locate(param_1,"keylen");
  if (lVar2 != 0) {
    iVar1 = OSSL_PARAM_set_size_t(lVar2,param_4 >> 3);
    if (iVar1 == 0) {
      ERR_new();
      uVar3 = 0x56;
      goto LAB_001001e1;
    }
  }
  lVar2 = OSSL_PARAM_locate(param_1,"blocksize");
  if (lVar2 != 0) {
    iVar1 = OSSL_PARAM_set_size_t(lVar2,param_5 >> 3);
    if (iVar1 == 0) {
      ERR_new();
      uVar3 = 0x5b;
      goto LAB_001001e1;
    }
  }
  lVar2 = OSSL_PARAM_locate(param_1,"ivlen");
  if (lVar2 != 0) {
    iVar1 = OSSL_PARAM_set_size_t(lVar2,param_6 >> 3);
    if (iVar1 == 0) {
      ERR_new();
      uVar3 = 0x60;
LAB_001001e1:
      ERR_set_debug("providers/implementations/ciphers/ciphercommon.c",uVar3,
                    "ossl_cipher_generic_get_params");
      ERR_set_error(0x39,0x68,0);
      return 0;
    }
  }
  return 1;
}



undefined1 * ossl_cipher_generic_gettable_ctx_params(void)

{
  return ossl_cipher_generic_known_gettable_ctx_params;
}



undefined1 * ossl_cipher_generic_settable_ctx_params(void)

{
  return ossl_cipher_generic_known_settable_ctx_params;
}



undefined1 * ossl_cipher_var_keylen_settable_ctx_params(void)

{
  return ossl_cipher_var_keylen_known_settable_ctx_params;
}



undefined1 * ossl_cipher_aead_gettable_ctx_params(void)

{
  return cipher_aead_known_gettable_ctx_params;
}



undefined1 * ossl_cipher_aead_settable_ctx_params(void)

{
  return cipher_aead_known_settable_ctx_params;
}



void ossl_cipher_generic_reset_ctx(long param_1)

{
  if (param_1 == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x80) == 0) {
    return;
  }
  CRYPTO_free(*(void **)(param_1 + 0x78));
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  return;
}



bool ossl_cipher_generic_block_update
               (long param_1,long param_2,ulong *param_3,ulong param_4,long param_5,ulong param_6)

{
  byte bVar1;
  ulong uVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulong local_48;
  long local_40 [2];
  
  bVar1 = *(byte *)(param_1 + 0x6c);
  uVar2 = *(ulong *)(param_1 + 0x58);
  local_48 = param_6;
  local_40[0] = param_5;
  if ((bVar1 & 8) == 0) {
    ERR_new();
    ERR_set_debug("providers/implementations/ciphers/ciphercommon.c",0x11a,
                  "ossl_cipher_generic_block_update");
    ERR_set_error(0x39,0x72,0);
    return false;
  }
  if (*(int *)(param_1 + 0x70) == 0) {
    if (*(long *)(param_1 + 0x60) == 0) {
      param_6 = -uVar2 & param_6;
      uVar6 = 0;
    }
    else {
      param_6 = ossl_cipher_fillblock(param_1 + 0x10,param_1 + 0x60,uVar2,local_40,&local_48);
      uVar6 = *(ulong *)(param_1 + 0x60);
    }
    uVar5 = 0;
    if (uVar2 != uVar6) {
LAB_001004fc:
      if (param_6 == 0) {
LAB_001005ed:
        if (local_48 == 0) goto LAB_001005f6;
      }
      else {
        if (((*(byte *)(param_1 + 0x6c) & 3) != 1) || (local_48 != param_6)) goto LAB_00100514;
        if (param_6 < uVar2) {
          ERR_new();
          uVar8 = 0x185;
          goto LAB_001007d1;
        }
        param_6 = param_6 - uVar2;
        uVar5 = uVar5 + param_6;
        if (param_4 < uVar5) goto LAB_001007c0;
        if (param_6 != 0) goto LAB_00100520;
      }
      iVar3 = ossl_cipher_trailingdata(param_1 + 0x10,param_1 + 0x60,uVar2,local_40,&local_48);
      if (iVar3 == 0) {
        return false;
      }
LAB_001005f6:
      *param_3 = uVar5;
      return local_48 == 0;
    }
    if ((((*(byte *)(param_1 + 0x6c) & 2) == 0) && (local_48 == 0)) &&
       ((*(byte *)(param_1 + 0x6c) & 1) != 0)) {
      uVar5 = 0;
      if (param_6 == 0) {
        uVar5 = 0;
        local_48 = 0;
        goto LAB_001005f6;
      }
LAB_00100514:
      uVar5 = uVar5 + param_6;
      if (uVar5 <= param_4) {
LAB_00100520:
        iVar3 = (**(code **)(*(long *)(param_1 + 0xa8) + 8))(param_1,param_2,local_40[0],param_6);
        if (iVar3 != 0) {
          local_40[0] = local_40[0] + param_6;
          local_48 = local_48 - param_6;
          goto LAB_001005ed;
        }
        ERR_new();
        uVar8 = 0x192;
        goto LAB_00100579;
      }
LAB_001007c0:
      ERR_new();
      uVar8 = 0x18c;
    }
    else {
      if (uVar2 <= param_4) {
        iVar3 = (**(code **)(*(long *)(param_1 + 0xa8) + 8))(param_1,param_2,param_1 + 0x10,uVar2);
        if (iVar3 == 0) {
          ERR_new();
          uVar8 = 0x17b;
          goto LAB_00100579;
        }
        *(undefined8 *)(param_1 + 0x60) = 0;
        param_2 = param_2 + uVar2;
        uVar5 = uVar2;
        goto LAB_001004fc;
      }
      ERR_new();
      uVar8 = 0x177;
    }
LAB_001007d1:
    ERR_set_debug("providers/implementations/ciphers/ciphercommon.c",uVar8,
                  "ossl_cipher_generic_block_update");
    ERR_set_error(0x39,0x6a,0);
  }
  else {
    if (((param_5 == 0) || (param_5 != param_2)) || ((param_4 < param_6 || ((bVar1 & 1) == 0)))) {
      ERR_new();
      uVar8 = 0x129;
    }
    else if ((bVar1 & 2) == 0) {
LAB_0010047c:
      if (local_48 % uVar2 == 0) {
        iVar3 = (**(code **)(*(long *)(param_1 + 0xa8) + 8))(param_1,param_2,param_5,local_48);
        if (iVar3 == 0) {
          ERR_new();
          uVar8 = 0x153;
        }
        else {
          if (*(int *)(param_1 + 0x80) != 0) {
            CRYPTO_free(*(void **)(param_1 + 0x78));
            *(undefined8 *)(param_1 + 0x78) = 0;
            *(undefined4 *)(param_1 + 0x80) = 0;
          }
          *param_3 = local_48;
          if (((*(byte *)(param_1 + 0x6c) & 2) != 0) ||
             (iVar3 = ossl_cipher_tlsunpadblock
                                (*(undefined8 *)(param_1 + 0xb8),*(undefined4 *)(param_1 + 0x70),
                                 param_2,param_3,uVar2,param_1 + 0x78,param_1 + 0x80,
                                 *(undefined8 *)(param_1 + 0x88),0), iVar3 != 0)) {
            return true;
          }
          ERR_new();
          uVar8 = 0x164;
        }
      }
      else {
        ERR_new();
        uVar8 = 0x14c;
      }
    }
    else {
      uVar5 = uVar2 - param_6 % uVar2;
      uVar6 = param_6 + uVar5;
      if (param_4 < uVar6) {
        ERR_new();
        uVar8 = 0x136;
      }
      else {
        if (uVar5 < 0x101) {
          uVar7 = (int)uVar5 - 1;
          local_48 = uVar6;
          if (*(int *)(param_1 + 0x70) == 0x300) {
            if (1 < uVar5) {
              uVar5 = uVar5 - 1;
              puVar9 = (undefined8 *)(param_2 + param_6);
              uVar4 = (uint)uVar5;
              if (uVar4 < 8) {
                if ((uVar5 & 4) == 0) {
                  if ((uVar4 != 0) && (*(undefined1 *)puVar9 = 0, (uVar5 & 2) != 0)) {
                    *(undefined2 *)((long)puVar9 + ((uVar5 & 0xffffffff) - 2)) = 0;
                  }
                }
                else {
                  *(undefined4 *)puVar9 = 0;
                  *(undefined4 *)((long)puVar9 + ((uVar5 & 0xffffffff) - 4)) = 0;
                }
              }
              else {
                *puVar9 = 0;
                *(undefined8 *)((long)puVar9 + ((uVar5 & 0xffffffff) - 8)) = 0;
                uVar5 = (ulong)(uVar4 + ((int)puVar9 -
                                        (int)(undefined8 *)
                                             ((ulong)(puVar9 + 1) & 0xfffffffffffffff8)) >> 3);
                puVar9 = (undefined8 *)((ulong)(puVar9 + 1) & 0xfffffffffffffff8);
                for (; uVar5 != 0; uVar5 = uVar5 - 1) {
                  *puVar9 = 0;
                  puVar9 = puVar9 + 1;
                }
              }
            }
            *(char *)(param_2 + -1 + uVar6) = (char)uVar7;
          }
          else if (param_6 < uVar6) {
            local_48 = param_6;
            memset((void *)(param_6 + param_2),uVar7 & 0xff,uVar5);
            local_48 = uVar6;
          }
          goto LAB_0010047c;
        }
        ERR_new();
        uVar8 = 0x13b;
      }
    }
LAB_00100579:
    ERR_set_debug("providers/implementations/ciphers/ciphercommon.c",uVar8,
                  "ossl_cipher_generic_block_update");
    ERR_set_error(0x39,0x66,0);
  }
  return false;
}



undefined8 ossl_cipher_generic_block_final(long param_1,void *param_2,ulong *param_3,ulong param_4)

{
  void *__src;
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  undefined8 uVar5;
  
  uVar2 = *(ulong *)(param_1 + 0x58);
  iVar4 = ossl_prov_is_running();
  if (iVar4 == 0) {
    return 0;
  }
  bVar1 = *(byte *)(param_1 + 0x6c);
  if ((bVar1 & 8) == 0) {
    ERR_new();
    ERR_set_debug("providers/implementations/ciphers/ciphercommon.c",0x1ac,
                  "ossl_cipher_generic_block_final");
    ERR_set_error(0x39,0x72,0);
    return 0;
  }
  if (*(int *)(param_1 + 0x70) == 0) {
    if ((bVar1 & 2) == 0) {
      uVar3 = *(ulong *)(param_1 + 0x60);
      if (uVar3 != uVar2) {
        if ((uVar3 != 0) || ((bVar1 & 1) != 0)) {
          ERR_new();
          uVar5 = 0x1d4;
LAB_00100a1b:
          ERR_set_debug("providers/implementations/ciphers/ciphercommon.c",uVar5,
                        "ossl_cipher_generic_block_final");
          ERR_set_error(0x39,0x6b,0);
          return 0;
        }
LAB_00100b40:
        *param_3 = 0;
        return 1;
      }
      __src = (void *)(param_1 + 0x10);
      iVar4 = (**(code **)(*(long *)(param_1 + 0xa8) + 8))(param_1,__src,__src,uVar3);
      if (iVar4 != 0) {
        if (((*(byte *)(param_1 + 0x6c) & 1) != 0) &&
           (iVar4 = ossl_cipher_unpadblock(__src,param_1 + 0x60,uVar3), iVar4 == 0)) {
          return 0;
        }
        if (*(ulong *)(param_1 + 0x60) <= param_4) {
          memcpy(param_2,__src,*(ulong *)(param_1 + 0x60));
          *param_3 = *(ulong *)(param_1 + 0x60);
          *(undefined8 *)(param_1 + 0x60) = 0;
          return 1;
        }
        ERR_new();
        uVar5 = 0x1e3;
        goto LAB_00100b81;
      }
      ERR_new();
      uVar5 = 0x1d9;
    }
    else {
      if ((bVar1 & 1) == 0) {
        if (*(ulong *)(param_1 + 0x60) == 0) goto LAB_00100b40;
        if (*(ulong *)(param_1 + 0x60) != uVar2) {
          ERR_new();
          uVar5 = 0x1bd;
          goto LAB_00100a1b;
        }
      }
      else {
        ossl_cipher_padblock(param_1 + 0x10,param_1 + 0x60,uVar2);
      }
      if (param_4 < uVar2) {
        ERR_new();
        uVar5 = 0x1c2;
LAB_00100b81:
        ERR_set_debug("providers/implementations/ciphers/ciphercommon.c",uVar5,
                      "ossl_cipher_generic_block_final");
        ERR_set_error(0x39,0x6a,0);
        return 0;
      }
      iVar4 = (**(code **)(*(long *)(param_1 + 0xa8) + 8))(param_1,param_2,param_1 + 0x10,uVar2);
      if (iVar4 != 0) {
        *(undefined8 *)(param_1 + 0x60) = 0;
        *param_3 = uVar2;
        return 1;
      }
      ERR_new();
      uVar5 = 0x1c6;
    }
  }
  else {
    ERR_new();
    uVar5 = 0x1b2;
  }
  ERR_set_debug("providers/implementations/ciphers/ciphercommon.c",uVar5,
                "ossl_cipher_generic_block_final");
  ERR_set_error(0x39,0x66,0);
  return 0;
}



undefined8
ossl_cipher_generic_stream_update
          (long param_1,long param_2,ulong *param_3,ulong param_4,undefined8 param_5,ulong param_6)

{
  int iVar1;
  ulong uVar2;
  
  if ((*(byte *)(param_1 + 0x6c) & 8) == 0) {
    ERR_new();
    ERR_set_debug("providers/implementations/ciphers/ciphercommon.c",499,
                  "ossl_cipher_generic_stream_update");
    ERR_set_error(0x39,0x72,0);
  }
  else {
    if (param_6 == 0) {
      *param_3 = 0;
      return 1;
    }
    if (param_4 < param_6) {
      ERR_new();
      ERR_set_debug("providers/implementations/ciphers/ciphercommon.c",0x1fd,
                    "ossl_cipher_generic_stream_update");
      ERR_set_error(0x39,0x6a,0);
    }
    else {
      iVar1 = (**(code **)(*(long *)(param_1 + 0xa8) + 8))(param_1,param_2,param_5,param_6);
      if (iVar1 != 0) {
        *param_3 = param_6;
        if (((*(byte *)(param_1 + 0x6c) & 2) == 0) && (*(int *)(param_1 + 0x70) != 0)) {
          if (*(int *)(param_1 + 0x90) != 0) {
            uVar2 = (ulong)*(byte *)(param_2 + -1 + param_6) + 1;
            if (param_6 < uVar2) {
              return 0;
            }
            param_6 = param_6 - uVar2;
            *param_3 = param_6;
          }
          if (param_6 < *(ulong *)(param_1 + 0x98)) {
            return 0;
          }
          param_6 = param_6 - *(ulong *)(param_1 + 0x98);
          *param_3 = param_6;
          uVar2 = *(ulong *)(param_1 + 0x88);
          if (uVar2 != 0) {
            if (param_6 < uVar2) {
              return 0;
            }
            *(ulong *)(param_1 + 0x78) = param_2 + (param_6 - uVar2);
            *param_3 = param_6 - uVar2;
          }
        }
        return 1;
      }
      ERR_new();
      ERR_set_debug("providers/implementations/ciphers/ciphercommon.c",0x202,
                    "ossl_cipher_generic_stream_update");
      ERR_set_error(0x39,0x66,0);
    }
  }
  return 0;
}



undefined8 ossl_cipher_generic_stream_final(long param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    if ((*(byte *)(param_1 + 0x6c) & 8) != 0) {
      *param_3 = 0;
      return 1;
    }
    ERR_new();
    ERR_set_debug("providers/implementations/ciphers/ciphercommon.c",0x233,
                  "ossl_cipher_generic_stream_final");
    ERR_set_error(0x39,0x72,0);
  }
  return 0;
}



undefined8
ossl_cipher_generic_cipher
          (long param_1,undefined8 param_2,ulong *param_3,ulong param_4,undefined8 param_5,
          ulong param_6)

{
  int iVar1;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    if ((*(byte *)(param_1 + 0x6c) & 8) == 0) {
      ERR_new();
      ERR_set_debug("providers/implementations/ciphers/ciphercommon.c",0x245,
                    "ossl_cipher_generic_cipher");
      ERR_set_error(0x39,0x72,0);
    }
    else if (param_4 < param_6) {
      ERR_new();
      ERR_set_debug("providers/implementations/ciphers/ciphercommon.c",0x24a,
                    "ossl_cipher_generic_cipher");
      ERR_set_error(0x39,0x6a,0);
    }
    else {
      iVar1 = (**(code **)(*(long *)(param_1 + 0xa8) + 8))(param_1,param_2,param_5,param_6);
      if (iVar1 != 0) {
        *param_3 = param_6;
        return 1;
      }
      ERR_new();
      ERR_set_debug("providers/implementations/ciphers/ciphercommon.c",0x24f,
                    "ossl_cipher_generic_cipher");
      ERR_set_error(0x39,0x66,0);
    }
  }
  return 0;
}



undefined8 ossl_cipher_generic_get_ctx_params(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = OSSL_PARAM_locate(param_2,"ivlen");
  if (lVar2 != 0) {
    iVar1 = OSSL_PARAM_set_size_t(lVar2,*(undefined8 *)(param_1 + 0x50));
    if (iVar1 == 0) {
      ERR_new();
      uVar3 = 0x25e;
      goto LAB_00101141;
    }
  }
  lVar2 = OSSL_PARAM_locate(param_2,"padding");
  if (lVar2 != 0) {
    iVar1 = OSSL_PARAM_set_uint(lVar2,*(byte *)(param_1 + 0x6c) & 1);
    if (iVar1 == 0) {
      ERR_new();
      uVar3 = 0x263;
      goto LAB_00101141;
    }
  }
  lVar2 = OSSL_PARAM_locate(param_2,&_LC11);
  if (lVar2 != 0) {
    iVar1 = OSSL_PARAM_set_octet_ptr(lVar2,param_1,*(undefined8 *)(param_1 + 0x50));
    if (iVar1 == 0) {
      iVar1 = OSSL_PARAM_set_octet_string(lVar2,param_1,*(undefined8 *)(param_1 + 0x50));
      if (iVar1 == 0) {
        ERR_new();
        uVar3 = 0x26a;
        goto LAB_00101141;
      }
    }
  }
  lVar2 = OSSL_PARAM_locate(param_2,"updated-iv");
  if (lVar2 != 0) {
    iVar1 = OSSL_PARAM_set_octet_ptr(lVar2,param_1 + 0x20,*(undefined8 *)(param_1 + 0x50));
    if (iVar1 == 0) {
      iVar1 = OSSL_PARAM_set_octet_string(lVar2,param_1 + 0x20,*(undefined8 *)(param_1 + 0x50));
      if (iVar1 == 0) {
        ERR_new();
        uVar3 = 0x271;
        goto LAB_00101141;
      }
    }
  }
  lVar2 = OSSL_PARAM_locate(param_2,&_LC13);
  if (lVar2 != 0) {
    iVar1 = OSSL_PARAM_set_uint(lVar2,*(undefined4 *)(param_1 + 0xa0));
    if (iVar1 == 0) {
      ERR_new();
      uVar3 = 0x276;
      goto LAB_00101141;
    }
  }
  lVar2 = OSSL_PARAM_locate(param_2,"keylen");
  if (lVar2 != 0) {
    iVar1 = OSSL_PARAM_set_size_t(lVar2,*(undefined8 *)(param_1 + 0x48));
    if (iVar1 == 0) {
      ERR_new();
      uVar3 = 0x27b;
      goto LAB_00101141;
    }
  }
  lVar2 = OSSL_PARAM_locate(param_2,"tls-mac");
  if (lVar2 != 0) {
    iVar1 = OSSL_PARAM_set_octet_ptr
                      (lVar2,*(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x88));
    if (iVar1 == 0) {
      ERR_new();
      uVar3 = 0x281;
LAB_00101141:
      ERR_set_debug("providers/implementations/ciphers/ciphercommon.c",uVar3,
                    "ossl_cipher_generic_get_ctx_params");
      ERR_set_error(0x39,0x68,0);
      return 0;
    }
  }
  return 1;
}



undefined8 ossl_cipher_generic_set_ctx_params(long param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  int local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 != (long *)0x0) && (*param_2 != 0)) {
    lVar2 = OSSL_PARAM_locate_const(param_2,"padding");
    if (lVar2 != 0) {
      iVar1 = OSSL_PARAM_get_uint(lVar2,&local_24);
      if (iVar1 != 0) {
        *(byte *)(param_1 + 0x6c) = *(byte *)(param_1 + 0x6c) & 0xfe | local_24 != 0;
        goto LAB_00101241;
      }
      ERR_new();
      uVar3 = 0x294;
LAB_00101341:
      ERR_set_debug("providers/implementations/ciphers/ciphercommon.c",uVar3,
                    "ossl_cipher_generic_set_ctx_params");
      ERR_set_error(0x39,0x67,0);
      uVar3 = 0;
      goto LAB_00101315;
    }
LAB_00101241:
    lVar2 = OSSL_PARAM_locate_const(param_2,"use-bits");
    if (lVar2 != 0) {
      iVar1 = OSSL_PARAM_get_uint(lVar2,&local_24);
      if (iVar1 == 0) {
        ERR_new();
        uVar3 = 0x29e;
        goto LAB_00101341;
      }
      *(byte *)(param_1 + 0x6c) = *(byte *)(param_1 + 0x6c) & 0x7f | (local_24 != 0) << 7;
    }
    lVar2 = OSSL_PARAM_locate_const(param_2,"tls-version");
    if (lVar2 != 0) {
      iVar1 = OSSL_PARAM_get_uint(lVar2,param_1 + 0x70);
      if (iVar1 == 0) {
        ERR_new();
        uVar3 = 0x2a6;
        goto LAB_00101341;
      }
    }
    lVar2 = OSSL_PARAM_locate_const(param_2,"tls-mac-size");
    if (lVar2 != 0) {
      iVar1 = OSSL_PARAM_get_size_t(lVar2,param_1 + 0x88);
      if (iVar1 == 0) {
        ERR_new();
        uVar3 = 0x2ad;
        goto LAB_00101341;
      }
    }
    lVar2 = OSSL_PARAM_locate_const(param_2,&_LC13);
    if (lVar2 != 0) {
      iVar1 = OSSL_PARAM_get_uint(lVar2,&local_24);
      if (iVar1 == 0) {
        ERR_new();
        uVar3 = 0x2b6;
        goto LAB_00101341;
      }
      *(int *)(param_1 + 0xa0) = local_24;
    }
  }
  uVar3 = 1;
LAB_00101315:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 ossl_cipher_var_keylen_set_ctx_params(long param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 != (long *)0x0) && (*param_2 != 0)) {
    iVar1 = ossl_cipher_generic_set_ctx_params();
    if (iVar1 == 0) {
      uVar3 = 0;
      goto LAB_0010144d;
    }
    lVar2 = OSSL_PARAM_locate_const(param_2,"keylen");
    if (lVar2 != 0) {
      iVar1 = OSSL_PARAM_get_size_t(lVar2,&local_28);
      if (iVar1 == 0) {
        ERR_new();
        ERR_set_debug("providers/implementations/ciphers/ciphercommon.c",0x82,
                      "ossl_cipher_var_keylen_set_ctx_params");
        ERR_set_error(0x39,0x67,0);
        uVar3 = 0;
        goto LAB_0010144d;
      }
      if (*(long *)(param_1 + 0x48) != local_28) {
        *(byte *)(param_1 + 0x6c) = *(byte *)(param_1 + 0x6c) & 0xf7;
        *(long *)(param_1 + 0x48) = local_28;
      }
    }
  }
  uVar3 = 1;
LAB_0010144d:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 ossl_cipher_generic_initiv(void *param_1,void *param_2,size_t param_3)

{
  if ((*(size_t *)((long)param_1 + 0x50) == param_3) && (param_3 < 0x11)) {
    *(byte *)((long)param_1 + 0x6c) = *(byte *)((long)param_1 + 0x6c) | 4;
    memcpy((void *)((long)param_1 + 0x20),param_2,param_3);
    memcpy(param_1,param_2,param_3);
    return 1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/ciphers/ciphercommon.c",0x2c3,
                "ossl_cipher_generic_initiv");
  ERR_set_error(0x39,0x6d,0);
  return 0;
}



undefined8
ossl_cipher_generic_skey_dinit
          (void *param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  bool bVar5;
  
  lVar4 = *(long *)(param_2 + 0x18);
  lVar1 = *(long *)(param_2 + 0x10);
  *(undefined4 *)((long)param_1 + 0xa0) = 0;
  *(byte *)((long)param_1 + 0x6c) = *(byte *)((long)param_1 + 0x6c) & 0xed;
  *(undefined8 *)((long)param_1 + 0x60) = 0;
  iVar2 = ossl_prov_is_running();
  if (iVar2 == 0) {
    return 0;
  }
  if (param_3 == 0) {
    if (((*(byte *)((long)param_1 + 0x6c) & 4) != 0) && (*(int *)((long)param_1 + 0x40) - 2U < 3)) {
      memcpy((void *)((long)param_1 + 0x20),param_1,*(size_t *)((long)param_1 + 0x50));
    }
  }
  else if ((*(int *)((long)param_1 + 0x40) != 1) &&
          (iVar2 = ossl_cipher_generic_initiv(param_1,param_3,param_4), iVar2 == 0)) {
    return 0;
  }
  if (lVar1 != 0) {
    if ((*(byte *)((long)param_1 + 0x6c) & 0x20) == 0) {
      bVar5 = lVar4 != *(long *)((long)param_1 + 0x48);
      lVar4 = *(long *)((long)param_1 + 0x48);
      if (bVar5) {
        ERR_new();
        ERR_set_debug("providers/implementations/ciphers/ciphercommon.c",0xda,
                      "cipher_generic_init_internal");
        ERR_set_error(0x39,0x69,0);
        return 0;
      }
    }
    else {
      *(long *)((long)param_1 + 0x48) = lVar4;
    }
    iVar2 = (*(code *)**(undefined8 **)((long)param_1 + 0xa8))(param_1,lVar1,lVar4);
    if (iVar2 == 0) {
      return 0;
    }
    *(byte *)((long)param_1 + 0x6c) = *(byte *)((long)param_1 + 0x6c) | 8;
  }
  uVar3 = ossl_cipher_generic_set_ctx_params(param_1,param_5);
  return uVar3;
}



undefined8
ossl_cipher_generic_einit
          (void *param_1,long param_2,long param_3,long param_4,undefined8 param_5,
          undefined8 param_6)

{
  int iVar1;
  undefined8 uVar2;
  bool bVar3;
  
  *(undefined8 *)((long)param_1 + 0x60) = 0;
  *(undefined4 *)((long)param_1 + 0xa0) = 0;
  *(byte *)((long)param_1 + 0x6c) = *(byte *)((long)param_1 + 0x6c) & 0xed | 2;
  iVar1 = ossl_prov_is_running();
  if (iVar1 == 0) {
    return 0;
  }
  if (param_4 == 0) {
    if (((*(byte *)((long)param_1 + 0x6c) & 4) != 0) && (*(int *)((long)param_1 + 0x40) - 2U < 3)) {
      memcpy((void *)((long)param_1 + 0x20),param_1,*(size_t *)((long)param_1 + 0x50));
    }
  }
  else if ((*(int *)((long)param_1 + 0x40) != 1) &&
          (iVar1 = ossl_cipher_generic_initiv(param_1,param_4,param_5), iVar1 == 0)) {
    return 0;
  }
  if (param_2 != 0) {
    if ((*(byte *)((long)param_1 + 0x6c) & 0x20) == 0) {
      bVar3 = param_3 != *(long *)((long)param_1 + 0x48);
      param_3 = *(long *)((long)param_1 + 0x48);
      if (bVar3) {
        ERR_new();
        ERR_set_debug("providers/implementations/ciphers/ciphercommon.c",0xda,
                      "cipher_generic_init_internal");
        ERR_set_error(0x39,0x69,0);
        return 0;
      }
    }
    else {
      *(long *)((long)param_1 + 0x48) = param_3;
    }
    iVar1 = (*(code *)**(undefined8 **)((long)param_1 + 0xa8))(param_1,param_2,param_3);
    if (iVar1 == 0) {
      return 0;
    }
    *(byte *)((long)param_1 + 0x6c) = *(byte *)((long)param_1 + 0x6c) | 8;
  }
  uVar2 = ossl_cipher_generic_set_ctx_params(param_1,param_6);
  return uVar2;
}



undefined8
ossl_cipher_generic_dinit
          (void *param_1,long param_2,long param_3,long param_4,undefined8 param_5,
          undefined8 param_6)

{
  int iVar1;
  undefined8 uVar2;
  bool bVar3;
  
  *(byte *)((long)param_1 + 0x6c) = *(byte *)((long)param_1 + 0x6c) & 0xed;
  *(undefined4 *)((long)param_1 + 0xa0) = 0;
  *(undefined8 *)((long)param_1 + 0x60) = 0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 == 0) {
    return 0;
  }
  if (param_4 == 0) {
    if (((*(byte *)((long)param_1 + 0x6c) & 4) != 0) && (*(int *)((long)param_1 + 0x40) - 2U < 3)) {
      memcpy((void *)((long)param_1 + 0x20),param_1,*(size_t *)((long)param_1 + 0x50));
    }
  }
  else if ((*(int *)((long)param_1 + 0x40) != 1) &&
          (iVar1 = ossl_cipher_generic_initiv(param_1,param_4,param_5), iVar1 == 0)) {
    return 0;
  }
  if (param_2 != 0) {
    if ((*(byte *)((long)param_1 + 0x6c) & 0x20) == 0) {
      bVar3 = param_3 != *(long *)((long)param_1 + 0x48);
      param_3 = *(long *)((long)param_1 + 0x48);
      if (bVar3) {
        ERR_new();
        ERR_set_debug("providers/implementations/ciphers/ciphercommon.c",0xda,
                      "cipher_generic_init_internal");
        ERR_set_error(0x39,0x69,0);
        return 0;
      }
    }
    else {
      *(long *)((long)param_1 + 0x48) = param_3;
    }
    iVar1 = (*(code *)**(undefined8 **)((long)param_1 + 0xa8))(param_1,param_2,param_3);
    if (iVar1 == 0) {
      return 0;
    }
    *(byte *)((long)param_1 + 0x6c) = *(byte *)((long)param_1 + 0x6c) | 8;
  }
  uVar2 = ossl_cipher_generic_set_ctx_params(param_1,param_6);
  return uVar2;
}



undefined8
ossl_cipher_generic_skey_einit
          (void *param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  bool bVar5;
  
  lVar4 = *(long *)(param_2 + 0x18);
  lVar1 = *(long *)(param_2 + 0x10);
  *(undefined8 *)((long)param_1 + 0x60) = 0;
  *(undefined4 *)((long)param_1 + 0xa0) = 0;
  *(byte *)((long)param_1 + 0x6c) = *(byte *)((long)param_1 + 0x6c) & 0xed | 2;
  iVar2 = ossl_prov_is_running();
  if (iVar2 == 0) {
    return 0;
  }
  if (param_3 == 0) {
    if (((*(byte *)((long)param_1 + 0x6c) & 4) != 0) && (*(int *)((long)param_1 + 0x40) - 2U < 3)) {
      memcpy((void *)((long)param_1 + 0x20),param_1,*(size_t *)((long)param_1 + 0x50));
    }
  }
  else if ((*(int *)((long)param_1 + 0x40) != 1) &&
          (iVar2 = ossl_cipher_generic_initiv(param_1,param_3,param_4), iVar2 == 0)) {
    return 0;
  }
  if (lVar1 != 0) {
    if ((*(byte *)((long)param_1 + 0x6c) & 0x20) == 0) {
      bVar5 = lVar4 != *(long *)((long)param_1 + 0x48);
      lVar4 = *(long *)((long)param_1 + 0x48);
      if (bVar5) {
        ERR_new();
        ERR_set_debug("providers/implementations/ciphers/ciphercommon.c",0xda,
                      "cipher_generic_init_internal");
        ERR_set_error(0x39,0x69,0);
        return 0;
      }
    }
    else {
      *(long *)((long)param_1 + 0x48) = lVar4;
    }
    iVar2 = (*(code *)**(undefined8 **)((long)param_1 + 0xa8))(param_1,lVar1,lVar4);
    if (iVar2 == 0) {
      return 0;
    }
    *(byte *)((long)param_1 + 0x6c) = *(byte *)((long)param_1 + 0x6c) | 8;
  }
  uVar3 = ossl_cipher_generic_set_ctx_params(param_1,param_5);
  return uVar3;
}



void ossl_cipher_generic_initkey
               (long param_1,ulong param_2,ulong param_3,ulong param_4,undefined4 param_5,
               uint param_6,undefined8 param_7,long param_8)

{
  undefined8 uVar1;
  
  if ((param_6 & 0x200) != 0) {
    *(byte *)(param_1 + 0x6c) = *(byte *)(param_1 + 0x6c) | 0x40;
  }
  if ((param_6 & 0x100) != 0) {
    *(byte *)(param_1 + 0x6c) = *(byte *)(param_1 + 0x6c) | 0x20;
  }
  *(byte *)(param_1 + 0x6c) = *(byte *)(param_1 + 0x6c) | 1;
  *(undefined4 *)(param_1 + 0x40) = param_5;
  *(undefined8 *)(param_1 + 0xa8) = param_7;
  *(ulong *)(param_1 + 0x58) = param_3 >> 3;
  *(ulong *)(param_1 + 0x48) = param_2 >> 3;
  *(ulong *)(param_1 + 0x50) = param_4 >> 3;
  if (param_8 != 0) {
    uVar1 = ossl_prov_ctx_get0_libctx();
    *(undefined8 *)(param_1 + 0xb8) = uVar1;
  }
  return;
}


