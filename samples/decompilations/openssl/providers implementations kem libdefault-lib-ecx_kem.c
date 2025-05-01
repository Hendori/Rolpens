
undefined1 * ecxkem_settable_ctx_params(void)

{
  return known_settable_ecxkem_ctx_params;
}



undefined8 ecxkem_set_ctx_params(long param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0) goto LAB_001000c9;
  if ((param_2 != (long *)0x0) && (*param_2 != 0)) {
    lVar2 = OSSL_PARAM_locate_const(param_2,&_LC0);
    if (lVar2 != 0) {
      local_30 = 0;
      local_28 = 0;
      if ((*(long *)(lVar2 + 0x10) != 0) && (*(long *)(lVar2 + 0x18) != 0)) {
        iVar1 = OSSL_PARAM_get_octet_string(lVar2,&local_30,0,&local_28);
        if (iVar1 == 0) {
          uVar3 = 0;
          goto LAB_001000e5;
        }
      }
      CRYPTO_clear_free(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                        "providers/implementations/kem/ecx_kem.c",0x108);
      *(undefined8 *)(param_1 + 0x28) = local_30;
      *(undefined8 *)(param_1 + 0x30) = local_28;
    }
    lVar2 = OSSL_PARAM_locate_const(param_2,"operation");
    if (lVar2 != 0) {
      if (*(int *)(lVar2 + 8) == 4) {
        iVar1 = ossl_eckem_modename2id(*(undefined8 *)(lVar2 + 0x10));
        if (iVar1 != 0) {
          *(int *)(param_1 + 0x20) = iVar1;
          goto LAB_001000e0;
        }
      }
LAB_001000c9:
      uVar3 = 0;
      goto LAB_001000e5;
    }
  }
LAB_001000e0:
  uVar3 = 1;
LAB_001000e5:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 ecxkem_auth_decapsulate_init(long *param_1,long param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  char *pcVar4;
  
  iVar1 = ossl_prov_is_running();
  if ((iVar1 != 0) && (*(long *)(param_2 + 0x50) != 0)) {
    ossl_ecx_key_free(*param_1);
    iVar1 = *(int *)(param_2 + 0x60);
    *param_1 = 0;
    pcVar4 = "X448";
    if (iVar1 == 0) {
      pcVar4 = "X25519";
    }
    lVar2 = ossl_HPKE_KEM_INFO_find_curve(pcVar4);
    param_1[8] = lVar2;
    if (lVar2 == 0) {
      return 0xfffffffe;
    }
    param_1[7] = (long)&_LC5;
    iVar1 = ossl_ecx_key_up_ref(param_2);
    if (iVar1 != 0) {
      *param_1 = param_2;
      if (param_3 == 0) {
LAB_001001fc:
        *(undefined4 *)((long)param_1 + 0x24) = 0x2000;
        uVar3 = ecxkem_set_ctx_params(param_1,param_4);
        return uVar3;
      }
      if ((*(int *)(param_3 + 0x60) == *(int *)(param_2 + 0x60)) &&
         (*(long *)(param_3 + 0x58) == *(long *)(param_2 + 0x58))) {
        ossl_ecx_key_free(param_1[1]);
        param_1[1] = 0;
        iVar1 = ossl_ecx_key_up_ref(param_3);
        if (iVar1 != 0) {
          param_1[1] = param_3;
          goto LAB_001001fc;
        }
      }
    }
  }
  return 0;
}



void ecxkem_freectx(undefined8 *param_1)

{
  CRYPTO_clear_free(param_1[5],param_1[6],"providers/implementations/kem/ecx_kem.c",0xae);
  ossl_ecx_key_free(*param_1);
  *param_1 = 0;
  ossl_ecx_key_free(param_1[1]);
  param_1[1] = 0;
  CRYPTO_free(param_1);
  return;
}



long ecxkem_newctx(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = CRYPTO_zalloc(0x48,"providers/implementations/kem/ecx_kem.c",0xa0);
  if (lVar1 != 0) {
    uVar2 = ossl_prov_ctx_get0_libctx(param_1);
    *(undefined4 *)(lVar1 + 0x20) = 1;
    *(undefined8 *)(lVar1 + 0x10) = uVar2;
  }
  return lVar1;
}



undefined4
derive_secret(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  ushort *puVar2;
  long lVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong len;
  long in_FS_OFFSET;
  undefined8 local_1a8;
  ushort local_19a;
  undefined1 local_198 [64];
  undefined1 local_158 [112];
  undefined1 local_e8 [168];
  long local_40;
  
  puVar2 = *(ushort **)(param_1 + 0x40);
  len = *(ulong *)(puVar2 + 0x18);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar6 = *(long *)(param_1 + 8);
  local_1a8 = 0;
  iVar4 = ossl_ecx_compute_key
                    (param_4,param_3,*(undefined8 *)(param_3 + 0x58),local_158,&local_1a8,0x70);
  if (iVar4 == 0) {
    len = 0;
    lVar6 = 0;
    uVar5 = 0;
    goto LAB_00100400;
  }
  if (lVar6 == 0) {
    lVar9 = 0;
    uVar10 = len;
LAB_0010044e:
    uVar1 = uVar10 + len;
    if (uVar1 < 0xa9) {
      __memcpy_chk(local_e8,param_7,len,0xa8);
      uVar7 = 0xa8;
      if (0xa7 < len) {
        uVar7 = len;
      }
      __memcpy_chk(local_e8 + len,param_8,len,uVar7 - len);
      if (lVar6 != 0) {
        uVar7 = len * 2;
        uVar8 = 0xa8;
        if (0xa7 < uVar7) {
          uVar8 = uVar7;
        }
        __memcpy_chk(local_e8 + uVar7,lVar9,len,uVar8 + len * -2);
      }
      lVar6 = ossl_kdf_ctx_create(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(puVar2 + 0xc),
                                  *(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
      uVar5 = 0;
      len = uVar10;
      if (lVar6 != 0) {
        uVar7 = *(ulong *)(puVar2 + 0x10);
        if (uVar7 < 0x41) {
          local_19a = *puVar2 << 8 | *puVar2 >> 8;
          iVar4 = ossl_hpke_labeled_extract
                            (lVar6,local_198,uVar7,0,0,&LABEL_KEM,&local_19a,2,"eae_prk",local_158,
                             uVar10);
          if (iVar4 == 0) {
            OPENSSL_cleanse(local_198,uVar7);
            uVar5 = 0;
          }
          else {
            iVar4 = ossl_hpke_labeled_expand
                              (lVar6,param_2,uVar7,local_198,uVar7,&LABEL_KEM,&local_19a,2,
                               "shared_secret",local_e8,uVar1);
            if (iVar4 == 0) {
              OPENSSL_cleanse(local_198,uVar7);
              uVar5 = 0;
            }
            else {
              OPENSSL_cleanse(local_198,uVar7);
              uVar5 = 1;
            }
          }
        }
      }
    }
    else {
      lVar6 = 0;
      uVar5 = 0;
      len = uVar10;
    }
  }
  else {
    local_1a8 = 0;
    iVar4 = ossl_ecx_compute_key
                      (param_6,param_5,*(undefined8 *)(param_5 + 0x58),local_158 + len,&local_1a8,
                       0x70 - len);
    if (iVar4 == 0) {
      lVar6 = 0;
      uVar5 = 0;
      goto LAB_00100400;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != 0) {
      lVar9 = lVar3 + 0x11;
      uVar10 = len * 2;
      if ((*(byte *)(lVar3 + 0x10) & 1) != 0) goto LAB_0010044e;
    }
    ERR_new();
    lVar6 = 0;
    ERR_set_debug("providers/implementations/kem/ecx_kem.c",0x98,__func___2);
    ERR_set_error(0x39,0xdc,0);
    uVar5 = 0;
  }
LAB_00100400:
  OPENSSL_cleanse(local_158,len);
  EVP_KDF_CTX_free(lVar6);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 ecxkem_decapsulate_init(long *param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  char *pcVar4;
  
  iVar1 = ossl_prov_is_running();
  if ((iVar1 != 0) && (*(long *)(param_2 + 0x50) != 0)) {
    ossl_ecx_key_free(*param_1);
    iVar1 = *(int *)(param_2 + 0x60);
    *param_1 = 0;
    pcVar4 = "X448";
    if (iVar1 == 0) {
      pcVar4 = "X25519";
    }
    lVar2 = ossl_HPKE_KEM_INFO_find_curve(pcVar4);
    param_1[8] = lVar2;
    if (lVar2 == 0) {
      return 0xfffffffe;
    }
    param_1[7] = (long)&_LC5;
    iVar1 = ossl_ecx_key_up_ref(param_2);
    if (iVar1 != 0) {
      *param_1 = param_2;
      *(undefined4 *)((long)param_1 + 0x24) = 0x2000;
      uVar3 = ecxkem_set_ctx_params(param_1,param_3);
      return uVar3;
    }
  }
  return 0;
}



undefined8 ecxkem_encapsulate_init(long *param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  char *pcVar4;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    ossl_ecx_key_free(*param_1);
    iVar1 = *(int *)(param_2 + 0x60);
    *param_1 = 0;
    pcVar4 = "X448";
    if (iVar1 == 0) {
      pcVar4 = "X25519";
    }
    lVar2 = ossl_HPKE_KEM_INFO_find_curve(pcVar4);
    param_1[8] = lVar2;
    if (lVar2 == 0) {
      return 0xfffffffe;
    }
    param_1[7] = (long)&_LC5;
    iVar1 = ossl_ecx_key_up_ref(param_2);
    if (iVar1 != 0) {
      *param_1 = param_2;
      *(undefined4 *)((long)param_1 + 0x24) = 0x1000;
      uVar3 = ecxkem_set_ctx_params(param_1,param_3);
      return uVar3;
    }
  }
  return 0;
}



undefined8 ecxkem_auth_encapsulate_init(long *param_1,long param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  char *pcVar4;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    ossl_ecx_key_free(*param_1);
    iVar1 = *(int *)(param_2 + 0x60);
    *param_1 = 0;
    pcVar4 = "X448";
    if (iVar1 == 0) {
      pcVar4 = "X25519";
    }
    lVar2 = ossl_HPKE_KEM_INFO_find_curve(pcVar4);
    param_1[8] = lVar2;
    if (lVar2 == 0) {
      return 0xfffffffe;
    }
    param_1[7] = (long)&_LC5;
    iVar1 = ossl_ecx_key_up_ref(param_2);
    if (iVar1 != 0) {
      *param_1 = param_2;
      if (param_3 == 0) {
LAB_0010080c:
        *(undefined4 *)((long)param_1 + 0x24) = 0x1000;
        uVar3 = ecxkem_set_ctx_params(param_1,param_4);
        return uVar3;
      }
      if (((*(int *)(param_3 + 0x60) == *(int *)(param_2 + 0x60)) &&
          (*(long *)(param_3 + 0x58) == *(long *)(param_2 + 0x58))) &&
         (*(long *)(param_3 + 0x50) != 0)) {
        ossl_ecx_key_free(param_1[1]);
        param_1[1] = 0;
        iVar1 = ossl_ecx_key_up_ref(param_3);
        if (iVar1 != 0) {
          param_1[1] = param_3;
          goto LAB_0010080c;
        }
      }
    }
  }
  return 0;
}



int ecxkem_decapsulate(long *param_1,long param_2,ulong *param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long in_FS_OFFSET;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((int)param_1[4] == 1) {
    lVar1 = param_1[8];
    lVar2 = *param_1;
    if (param_2 == 0) {
      *param_3 = *(ulong *)(lVar1 + 0x20);
      iVar3 = 1;
    }
    else {
      if (*param_3 < *(ulong *)(lVar1 + 0x20)) {
        ERR_new();
        ERR_set_debug("providers/implementations/kem/ecx_kem.c",0x275,"dhkem_decap");
        ERR_set_error(0x39,0x8e,"*secretlen too small");
      }
      else {
        if (param_5 == *(long *)(lVar1 + 0x28)) {
          OSSL_PARAM_construct_octet_string(&local_c8,&_LC10,param_4,param_5);
          local_98 = local_c8;
          uStack_90 = uStack_c0;
          local_78 = local_a8;
          local_88 = local_b8;
          uStack_80 = uStack_b0;
          OSSL_PARAM_construct_end(&local_c8);
          local_50 = local_a8;
          local_70 = local_c8;
          uStack_68 = uStack_c0;
          local_60 = local_b8;
          uStack_58 = uStack_b0;
          lVar4 = ossl_ecx_key_new(param_1[2],*(undefined4 *)(*param_1 + 0x60),1,param_1[3]);
          if (lVar4 == 0) {
            iVar3 = 0;
          }
          else {
            iVar3 = ossl_ecx_key_fromdata(lVar4,&local_98,0);
            if (iVar3 < 1) {
              iVar3 = 0;
              ossl_ecx_key_free(lVar4);
              lVar4 = 0;
            }
            else if ((lVar2 == 0) || ((*(byte *)(lVar2 + 0x10) & 1) == 0)) {
              iVar3 = 0;
              ERR_new();
              ERR_set_debug("providers/implementations/kem/ecx_kem.c",0x98,__func___2);
              ERR_set_error(0x39,0xdc,0);
            }
            else {
              iVar3 = derive_secret(param_1,param_2,*param_1,lVar4,*param_1,param_1[1],param_4);
              if (iVar3 != 0) {
                iVar3 = 1;
                *param_3 = *(ulong *)(lVar1 + 0x20);
              }
            }
          }
          ossl_ecx_key_free(lVar4);
          goto LAB_001009d7;
        }
        ERR_new();
        ERR_set_debug("providers/implementations/kem/ecx_kem.c",0x279,"dhkem_decap");
        ERR_set_error(0x39,0x9e,"Invalid enc public key");
      }
      iVar3 = 0;
    }
  }
  else {
    ERR_new();
    iVar3 = -2;
    ERR_set_debug("providers/implementations/kem/ecx_kem.c",0x2aa,"ecxkem_decapsulate");
    ERR_set_error(0x39,0x7d,0);
  }
LAB_001009d7:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint ossl_ecx_dhkem_derive_private
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  uint uVar1;
  int iVar2;
  undefined2 *puVar3;
  long lVar4;
  char *pcVar5;
  long in_FS_OFFSET;
  undefined1 local_8a;
  undefined1 local_89;
  undefined1 local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar5 = "X448";
  if (*(int *)(param_1 + 0xc) == 0) {
    pcVar5 = "X25519";
  }
  puVar3 = (undefined2 *)ossl_HPKE_KEM_INFO_find_curve(pcVar5);
  if (param_4 < *(ulong *)(puVar3 + 0x1c)) {
    ERR_new();
    lVar4 = 0;
    uVar1 = 0;
    ERR_set_debug("providers/implementations/kem/ecx_kem.c",0x15e,"ossl_ecx_dhkem_derive_private");
    ERR_set_error(0x39,0xe6,"ikm length is :%zu, should be at least %zu",param_4,
                  *(undefined8 *)(puVar3 + 0x1c));
  }
  else {
    uVar1 = 0;
    lVar4 = ossl_kdf_ctx_create(&_LC5,*(undefined8 *)(puVar3 + 0xc),*param_1,param_1[1]);
    if (lVar4 == 0) goto LAB_00100c27;
    local_8a = (undefined1)((ushort)*puVar3 >> 8);
    local_89 = (undefined1)*puVar3;
    uVar1 = ossl_hpke_labeled_extract
                      (lVar4,local_88,*(undefined8 *)(puVar3 + 0x10),0,0,&LABEL_KEM,&local_8a,2,
                       "dkp_prk",param_3,param_4);
    if (uVar1 != 0) {
      iVar2 = ossl_hpke_labeled_expand
                        (lVar4,param_2,*(undefined8 *)(puVar3 + 0x1c),local_88,
                         *(undefined8 *)(puVar3 + 0x10),&LABEL_KEM,&local_8a,2,&_LC13,0,0);
      uVar1 = (uint)(iVar2 != 0);
    }
  }
  OPENSSL_cleanse(local_88,0x40);
  EVP_KDF_CTX_free(lVar4);
LAB_00100c27:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8
ecxkem_encapsulate(long *param_1,void *param_2,ulong *param_3,undefined8 param_4,ulong *param_5)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  size_t len;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  void *__src;
  long in_FS_OFFSET;
  undefined1 local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((int)param_1[4] != 1) {
    ERR_new();
    uVar7 = 0xfffffffe;
    ERR_set_debug("providers/implementations/kem/ecx_kem.c",0x29c,"ecxkem_encapsulate");
    ERR_set_error(0x39,0x7d,0);
    goto LAB_00100e67;
  }
  lVar1 = param_1[8];
  if (param_2 == (void *)0x0) {
    if (param_5 != (ulong *)0x0 || param_3 != (ulong *)0x0) {
      if (param_3 != (ulong *)0x0) {
        *param_3 = *(ulong *)(lVar1 + 0x28);
      }
      if (param_5 != (ulong *)0x0) {
        *param_5 = *(ulong *)(lVar1 + 0x20);
      }
      uVar7 = 1;
      goto LAB_00100e67;
    }
  }
  else if (*param_5 < *(ulong *)(lVar1 + 0x20)) {
    ERR_new();
    ERR_set_debug("providers/implementations/kem/ecx_kem.c",0x236,"dhkem_encap");
    ERR_set_error(0x39,0x8e,"*secretlen too small");
  }
  else {
    if (*(ulong *)(lVar1 + 0x28) <= *param_3) {
      lVar2 = param_1[6];
      puVar3 = (undefined1 *)param_1[5];
      lVar5 = ossl_ecx_key_new(param_1[2],*(undefined4 *)(*param_1 + 0x60),0,param_1[3]);
      if (lVar5 == 0) {
LAB_00100f48:
        lVar5 = 0;
LAB_00100f4b:
        ERR_new();
        ERR_set_debug("providers/implementations/kem/ecx_kem.c",0x98,__func___2);
        ERR_set_error(0x39,0xdc,0);
        __src = (void *)0x0;
      }
      else {
        lVar6 = ossl_ecx_key_allocate_privkey(lVar5);
        if (lVar6 == 0) {
LAB_00100f88:
          ossl_ecx_key_free(lVar5);
          goto LAB_00100f48;
        }
        if ((puVar3 == (undefined1 *)0x0) || (lVar2 == 0)) {
          if (*(ulong *)(lVar1 + 0x38) < 0x43) {
            iVar4 = RAND_priv_bytes_ex(param_1[2],local_88,*(ulong *)(lVar1 + 0x38),0);
            if (0 < iVar4) {
              len = *(size_t *)(lVar1 + 0x38);
              iVar4 = ossl_ecx_dhkem_derive_private(lVar5,lVar6,local_88,len);
              if (iVar4 != 0) {
                iVar4 = ossl_ecx_public_from_private(lVar5);
                if (iVar4 != 0) {
                  *(byte *)(lVar5 + 0x10) = *(byte *)(lVar5 + 0x10) | 1;
                  if (puVar3 != local_88) {
                    OPENSSL_cleanse(local_88,len);
                  }
                  goto LAB_00100d98;
                }
              }
              ossl_ecx_key_free(lVar5);
              if (puVar3 != local_88) {
                OPENSSL_cleanse(local_88,len);
              }
              goto LAB_00100f48;
            }
          }
          goto LAB_00100f88;
        }
        iVar4 = ossl_ecx_dhkem_derive_private(lVar5,lVar6,puVar3,lVar2);
        if (iVar4 == 0) goto LAB_00100f88;
        iVar4 = ossl_ecx_public_from_private(lVar5);
        if (iVar4 == 0) goto LAB_00100f88;
        *(byte *)(lVar5 + 0x10) = *(byte *)(lVar5 + 0x10) | 1;
LAB_00100d98:
        __src = (void *)(lVar5 + 0x11);
        if ((*(byte *)(lVar5 + 0x10) & 1) == 0) goto LAB_00100f4b;
      }
      lVar2 = *param_1;
      if ((lVar2 == 0) || ((*(byte *)(lVar2 + 0x10) & 1) == 0)) {
        ERR_new();
        ERR_set_debug("providers/implementations/kem/ecx_kem.c",0x98,__func___2);
        ERR_set_error(0x39,0xdc,0);
LAB_00100def:
        uVar7 = 0;
      }
      else {
        if (__src == (void *)0x0) goto LAB_00100def;
        iVar4 = derive_secret(param_1,param_4,lVar5,lVar2,param_1[1],lVar2,__src,lVar2 + 0x11);
        if (iVar4 == 0) goto LAB_00100def;
        uVar7 = 1;
        memcpy(param_2,__src,*(size_t *)(lVar1 + 0x28));
        *param_3 = *(ulong *)(lVar1 + 0x28);
        *param_5 = *(ulong *)(lVar1 + 0x20);
      }
      ossl_ecx_key_free(lVar5);
      goto LAB_00100e67;
    }
    ERR_new();
    ERR_set_debug("providers/implementations/kem/ecx_kem.c",0x23a,"dhkem_encap");
    ERR_set_error(0x39,0x8e,"*enclen too small");
  }
  uVar7 = 0;
LAB_00100e67:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


