
undefined1 * kdf_hkdf_settable_ctx_params(void)

{
  return known_settable_ctx_params_7;
}



undefined1 * kdf_hkdf_gettable_ctx_params(void)

{
  return known_gettable_ctx_params_9;
}



undefined1 * kdf_tls1_3_settable_ctx_params(void)

{
  return known_settable_ctx_params_2;
}



undefined1 * kdf_tls1_3_gettable_ctx_params(void)

{
  return known_gettable_ctx_params_4;
}



bool kdf_hkdf_get_ctx_params(long param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  if (param_2 == (long *)0x0) {
    return true;
  }
  if (*param_2 != 0) {
    lVar2 = OSSL_PARAM_locate(param_2,&_LC0);
    if (lVar2 != 0) {
      lVar3 = ossl_prov_digest_md(param_1 + 0x10);
      if (*(int *)(param_1 + 8) == 1) {
        if (lVar3 == 0) {
          ERR_new();
          ERR_set_debug("providers/implementations/kdfs/hkdf.c",0xb9,"kdf_hkdf_size");
          ERR_set_error(0x39,0x81,0);
          return false;
        }
        iVar1 = EVP_MD_get_size(lVar3);
        lVar3 = (long)iVar1;
        if (iVar1 < 1) {
          return false;
        }
      }
      else {
        lVar3 = -1;
      }
      iVar1 = OSSL_PARAM_set_size_t(lVar2,lVar3);
      if (iVar1 == 0) {
        return false;
      }
    }
    lVar2 = OSSL_PARAM_locate(param_2,&_LC1);
    if (lVar2 != 0) {
      if ((*(long *)(param_1 + 0x78) != 0) && (*(long *)(param_1 + 0x80) != 0)) {
        iVar1 = OSSL_PARAM_set_octet_string(lVar2);
        return iVar1 != 0;
      }
      *(undefined8 *)(lVar2 + 0x20) = 0;
    }
  }
  return true;
}



bool hkdf_common_set_ctx_params(undefined8 *param_1,long *param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long in_FS_OFFSET;
  bool bVar4;
  uint local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = ossl_prov_ctx_get0_libctx(*param_1);
  if ((param_2 != (long *)0x0) && (*param_2 != 0)) {
    lVar3 = OSSL_PARAM_locate_const(param_2,"digest");
    if (lVar3 != 0) {
      iVar1 = ossl_prov_digest_load_from_params(param_1 + 2,param_2,uVar2);
      if (iVar1 != 0) {
        uVar2 = ossl_prov_digest_md(param_1 + 2);
        iVar1 = EVP_MD_xof(uVar2);
        if (iVar1 != 0) {
          ERR_new();
          ERR_set_debug("providers/implementations/kdfs/hkdf.c",0x10e,"hkdf_common_set_ctx_params");
          ERR_set_error(0x39,0xb7,0);
          bVar4 = false;
          goto LAB_001002b5;
        }
        goto LAB_001001e8;
      }
LAB_001001c9:
      bVar4 = false;
      goto LAB_001002b5;
    }
LAB_001001e8:
    lVar3 = OSSL_PARAM_locate_const(param_2,&_LC4);
    if (lVar3 != 0) {
      if (*(int *)(lVar3 + 8) != 4) {
        iVar1 = OSSL_PARAM_get_int(lVar3,&local_34);
        if (iVar1 == 0) {
          ERR_new();
          uVar2 = 0x128;
        }
        else {
          if (local_34 < 3) {
            *(uint *)(param_1 + 1) = local_34;
            goto LAB_00100230;
          }
          ERR_new();
          uVar2 = 0x123;
        }
LAB_00100391:
        ERR_set_debug("providers/implementations/kdfs/hkdf.c",uVar2,"hkdf_common_set_ctx_params");
        ERR_set_error(0x39,0x7d,0);
        bVar4 = false;
        goto LAB_001002b5;
      }
      iVar1 = OPENSSL_strcasecmp(*(undefined8 *)(lVar3 + 0x10),"EXTRACT_AND_EXPAND");
      if (iVar1 == 0) {
        *(undefined4 *)(param_1 + 1) = 0;
      }
      else {
        iVar1 = OPENSSL_strcasecmp(*(undefined8 *)(lVar3 + 0x10),"EXTRACT_ONLY");
        if (iVar1 == 0) {
          *(undefined4 *)(param_1 + 1) = 1;
        }
        else {
          iVar1 = OPENSSL_strcasecmp(*(undefined8 *)(lVar3 + 0x10),"EXPAND_ONLY");
          if (iVar1 != 0) {
            ERR_new();
            uVar2 = 0x11c;
            goto LAB_00100391;
          }
          *(undefined4 *)(param_1 + 1) = 2;
        }
      }
    }
LAB_00100230:
    lVar3 = OSSL_PARAM_locate_const(param_2,&_LC8);
    if (lVar3 != 0) {
      CRYPTO_clear_free(param_1[7],param_1[8],"providers/implementations/kdfs/hkdf.c",0x12e);
      param_1[7] = 0;
      iVar1 = OSSL_PARAM_get_octet_string(lVar3,param_1 + 7,0,param_1 + 8);
      if (iVar1 == 0) goto LAB_001001c9;
    }
    lVar3 = OSSL_PARAM_locate_const(param_2,&_LC9);
    if (((lVar3 != 0) && (*(long *)(lVar3 + 0x18) != 0)) && (*(long *)(lVar3 + 0x10) != 0)) {
      CRYPTO_free((void *)param_1[5]);
      param_1[5] = 0;
      iVar1 = OSSL_PARAM_get_octet_string(lVar3,param_1 + 5,0,param_1 + 6);
      bVar4 = iVar1 != 0;
      goto LAB_001002b5;
    }
  }
  bVar4 = true;
LAB_001002b5:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool kdf_tls1_3_set_ctx_params(long param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  
  if (param_2 == (long *)0x0) {
    return true;
  }
  if (*param_2 != 0) {
    iVar1 = hkdf_common_set_ctx_params();
    if (iVar1 == 0) {
      return false;
    }
    if (*(int *)(param_1 + 8) == 0) {
      ERR_new();
      ERR_set_debug("providers/implementations/kdfs/hkdf.c",0x35a,"kdf_tls1_3_set_ctx_params");
      ERR_set_error(0x39,0x7d,0);
      return false;
    }
    lVar2 = OSSL_PARAM_locate_const(param_2,"prefix");
    if (lVar2 != 0) {
      CRYPTO_free(*(void **)(param_1 + 0x48));
      *(undefined8 *)(param_1 + 0x48) = 0;
      iVar1 = OSSL_PARAM_get_octet_string(lVar2,param_1 + 0x48,0,param_1 + 0x50);
      if (iVar1 == 0) {
        return false;
      }
    }
    lVar2 = OSSL_PARAM_locate_const(param_2,"label");
    if (lVar2 != 0) {
      CRYPTO_free(*(void **)(param_1 + 0x58));
      *(undefined8 *)(param_1 + 0x58) = 0;
      iVar1 = OSSL_PARAM_get_octet_string(lVar2,param_1 + 0x58,0,param_1 + 0x60);
      if (iVar1 == 0) {
        return false;
      }
    }
    CRYPTO_clear_free(*(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x70),
                      "providers/implementations/kdfs/hkdf.c",0x36e);
    *(undefined8 *)(param_1 + 0x68) = 0;
    lVar2 = OSSL_PARAM_locate_const(param_2,&_LC12);
    if (lVar2 != 0) {
      iVar1 = OSSL_PARAM_get_octet_string(lVar2,param_1 + 0x68,0,param_1 + 0x70);
      return iVar1 != 0;
    }
  }
  return true;
}



undefined4
HKDF_Expand(EVP_MD *param_1,void *param_2,int param_3,uchar *param_4,size_t param_5,long param_6,
           ulong param_7)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  HMAC_CTX *ctx;
  ulong uVar4;
  ulong len;
  ulong uVar5;
  long lVar6;
  long in_FS_OFFSET;
  uchar local_89;
  uchar local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = EVP_MD_get_size();
  if (0 < iVar1) {
    len = (ulong)iVar1;
    uVar5 = (ulong)(param_7 % len == 0);
    uVar4 = param_7 / len + 1;
    uVar3 = uVar4 - uVar5;
    if (((uVar3 < 0x100) && (param_6 != 0)) &&
       (ctx = (HMAC_CTX *)HMAC_CTX_new(), ctx != (HMAC_CTX *)0x0)) {
      iVar1 = HMAC_Init_ex(ctx,param_2,param_3,param_1,(ENGINE *)0x0);
      if (iVar1 == 0) {
LAB_00100780:
        uVar2 = 0;
      }
      else {
        if (uVar4 != uVar5) {
          lVar6 = 0;
          uVar5 = 1;
          do {
            local_89 = (uchar)uVar5;
            if ((((1 < (uint)uVar5) &&
                 ((iVar1 = HMAC_Init_ex(ctx,(void *)0x0,0,(EVP_MD *)0x0,(ENGINE *)0x0), iVar1 == 0
                  || (iVar1 = HMAC_Update(ctx,local_88,len), iVar1 == 0)))) ||
                (iVar1 = HMAC_Update(ctx,param_4,param_5), iVar1 == 0)) ||
               ((iVar1 = HMAC_Update(ctx,&local_89,1), iVar1 == 0 ||
                (iVar1 = HMAC_Final(ctx,local_88,(uint *)0x0), iVar1 == 0)))) goto LAB_00100780;
            uVar4 = param_7 - lVar6;
            if (len < param_7 - lVar6) {
              uVar4 = len;
            }
            memcpy((void *)(param_6 + lVar6),local_88,uVar4);
            uVar5 = (ulong)((uint)uVar5 + 1);
            lVar6 = lVar6 + uVar4;
          } while (uVar5 <= uVar3);
        }
        uVar2 = 1;
      }
      OPENSSL_cleanse(local_88,0x40);
      HMAC_CTX_free(ctx);
      goto LAB_001007aa;
    }
  }
  uVar2 = 0;
LAB_001007aa:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



void kdf_hkdf_reset(undefined8 *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  byte bVar4;
  
  bVar4 = 0;
  uVar1 = *param_1;
  ossl_prov_digest_reset(param_1 + 2);
  CRYPTO_free((void *)param_1[5]);
  CRYPTO_free((void *)param_1[9]);
  CRYPTO_free((void *)param_1[0xb]);
  CRYPTO_clear_free(param_1[0xd],param_1[0xe],"providers/implementations/kdfs/hkdf.c",0x8a);
  CRYPTO_clear_free(param_1[7],param_1[8],"providers/implementations/kdfs/hkdf.c",0x8b);
  CRYPTO_clear_free(param_1[0xf],param_1[0x10],"providers/implementations/kdfs/hkdf.c",0x8c);
  param_1[1] = 0;
  param_1[0x10] = 0;
  puVar3 = (undefined8 *)((ulong)(param_1 + 2) & 0xfffffffffffffff8);
  uVar2 = (ulong)(((int)param_1 - (int)puVar3) + 0x88U >> 3);
  for (; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * -2 + 1;
  }
  *param_1 = uVar1;
  return;
}



undefined8 * kdf_hkdf_new(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  iVar1 = ossl_prov_is_running();
  puVar2 = (undefined8 *)0x0;
  if (iVar1 != 0) {
    puVar2 = (undefined8 *)CRYPTO_zalloc(0x88,"providers/implementations/kdfs/hkdf.c",0x6c);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = param_1;
    }
  }
  return puVar2;
}



undefined8
prov_tls13_hkdf_expand
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,undefined8 param_9,
          undefined8 param_10,undefined8 param_11)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined8 local_890;
  undefined1 local_888 [64];
  undefined1 local_848 [2056];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = WPACKET_init_static_len(local_888,local_848,0x800,0);
  if (iVar1 != 0) {
    iVar1 = WPACKET_put_bytes__(local_888,param_11,2);
    if (iVar1 != 0) {
      iVar1 = WPACKET_start_sub_packet_len__(local_888,1);
      if (iVar1 != 0) {
        iVar1 = WPACKET_memcpy(local_888,param_4,param_5);
        if (iVar1 != 0) {
          iVar1 = WPACKET_memcpy(local_888,param_6,param_7);
          if (iVar1 != 0) {
            iVar1 = WPACKET_close(local_888);
            if (iVar1 != 0) {
              uVar2 = 0;
              if (param_8 != 0) {
                uVar2 = param_9;
              }
              iVar1 = WPACKET_sub_memcpy__(local_888,param_8,uVar2,1);
              if (iVar1 != 0) {
                iVar1 = WPACKET_get_total_written(local_888,&local_890);
                if (iVar1 != 0) {
                  iVar1 = WPACKET_finish(local_888);
                  if (iVar1 != 0) {
                    uVar2 = HKDF_Expand(param_1,param_2,param_3,local_848,local_890,param_10,
                                        param_11);
                    goto LAB_001009a3;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  WPACKET_cleanup(local_888);
  uVar2 = 0;
LAB_001009a3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong kdf_tls1_3_derive(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  EVP_MD *type;
  ulong uVar6;
  undefined8 uVar7;
  EVP_MD_CTX *ctx;
  undefined8 uVar8;
  long lVar9;
  size_t len;
  undefined1 *puVar10;
  long in_FS_OFFSET;
  size_t local_110;
  undefined1 *local_108;
  undefined1 local_c8 [64];
  uchar local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar5 = ossl_prov_is_running();
  if (iVar5 != 0) {
    iVar5 = kdf_tls1_3_set_ctx_params(param_1,param_4);
    if (iVar5 != 0) {
      type = (EVP_MD *)ossl_prov_digest_md(param_1 + 2);
      if (type == (EVP_MD *)0x0) {
        ERR_new();
        ERR_set_debug("providers/implementations/kdfs/hkdf.c",0x32d,"kdf_tls1_3_derive");
        ERR_set_error(0x39,0x81,0);
      }
      else if (*(int *)(param_1 + 1) == 1) {
        uVar8 = param_1[0xc];
        local_108 = (undefined1 *)param_1[7];
        lVar9 = param_1[5];
        uVar1 = param_1[0xb];
        uVar2 = param_1[10];
        uVar3 = param_1[9];
        local_110 = param_1[8];
        uVar4 = param_1[6];
        uVar7 = ossl_prov_ctx_get0_libctx(*param_1);
        iVar5 = EVP_MD_get_size(type);
        if (0 < iVar5) {
          len = (size_t)iVar5;
          if (local_108 == (undefined1 *)0x0) {
            local_108 = default_zeros_0;
            local_110 = len;
          }
          if (lVar9 == 0) {
            iVar5 = EVP_MD_get_size(type);
            if (0 < iVar5) {
              puVar10 = default_zeros_0;
LAB_00100cbb:
              if (param_3 == iVar5) {
                iVar5 = EVP_MD_get_size(type);
                uVar8 = EVP_MD_get0_name(type);
                lVar9 = EVP_Q_mac(uVar7,&_LC13,0,uVar8,0,puVar10,len,local_108,local_110,param_2,
                                  (long)iVar5,0);
                uVar6 = (ulong)(lVar9 != 0);
              }
              else {
                ERR_new();
                ERR_set_debug("providers/implementations/kdfs/hkdf.c",0x204,"HKDF_Extract");
                ERR_set_error(0x39,0x8b,0);
                uVar6 = 0;
              }
              if (puVar10 != local_c8) goto LAB_00100aef;
LAB_00100d01:
              OPENSSL_cleanse(local_c8,len);
              goto LAB_00100aef;
            }
          }
          else {
            ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
            if (ctx != (EVP_MD_CTX *)0x0) {
              iVar5 = EVP_DigestInit_ex(ctx,type,(ENGINE *)0x0);
              if (0 < iVar5) {
                iVar5 = EVP_DigestFinal_ex(ctx,local_88,(uint *)0x0);
                if (0 < iVar5) {
                  EVP_MD_CTX_free(ctx);
                  puVar10 = local_c8;
                  iVar5 = prov_tls13_hkdf_expand
                                    (type,lVar9,uVar4,uVar3,uVar2,uVar1,uVar8,local_88,len,puVar10,
                                     len);
                  if (iVar5 != 0) {
                    iVar5 = EVP_MD_get_size(type);
                    if (0 < iVar5) goto LAB_00100cbb;
                    uVar6 = 0;
                    goto LAB_00100d01;
                  }
                  goto LAB_00100aed;
                }
              }
            }
            EVP_MD_CTX_free(ctx);
          }
        }
      }
      else if (*(int *)(param_1 + 1) == 2) {
        uVar6 = prov_tls13_hkdf_expand
                          (type,param_1[7],param_1[8],param_1[9],param_1[10],param_1[0xb],
                           param_1[0xc],param_1[0xd],param_1[0xe],param_2,param_3);
        goto LAB_00100aef;
      }
    }
  }
LAB_00100aed:
  uVar6 = 0;
LAB_00100aef:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void kdf_hkdf_free(void *param_1)

{
  if (param_1 != (void *)0x0) {
    kdf_hkdf_reset();
    CRYPTO_free(param_1);
    return;
  }
  return;
}



undefined8 * kdf_hkdf_dup(undefined8 *param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *ptr;
  
  uVar1 = *param_1;
  iVar2 = ossl_prov_is_running();
  if ((iVar2 != 0) &&
     (ptr = (undefined8 *)CRYPTO_zalloc(0x88,"providers/implementations/kdfs/hkdf.c",0x6c),
     ptr != (undefined8 *)0x0)) {
    *ptr = uVar1;
    iVar2 = ossl_prov_memdup(param_1[5],param_1[6],ptr + 5,ptr + 6);
    if (((iVar2 != 0) &&
        (((iVar2 = ossl_prov_memdup(param_1[7],param_1[8],ptr + 7,ptr + 8), iVar2 != 0 &&
          (iVar2 = ossl_prov_memdup(param_1[9],param_1[10],ptr + 9,ptr + 10), iVar2 != 0)) &&
         (iVar2 = ossl_prov_memdup(param_1[0xb],param_1[0xc],ptr + 0xb,ptr + 0xc), iVar2 != 0)))) &&
       (((iVar2 = ossl_prov_memdup(param_1[0xd],param_1[0xe],ptr + 0xd,ptr + 0xe), iVar2 != 0 &&
         (iVar2 = ossl_prov_memdup(param_1[0xf],param_1[0x10],ptr + 0xf,ptr + 0x10), iVar2 != 0)) &&
        (iVar2 = ossl_prov_digest_copy(ptr + 2,param_1 + 2), iVar2 != 0)))) {
      *(undefined4 *)(ptr + 1) = *(undefined4 *)(param_1 + 1);
      return ptr;
    }
    kdf_hkdf_reset(ptr);
    CRYPTO_free(ptr);
  }
  return (undefined8 *)0x0;
}



bool kdf_tls1_3_get_ctx_params(long param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  if (param_2 == (long *)0x0) {
    return true;
  }
  if (*param_2 != 0) {
    lVar2 = OSSL_PARAM_locate(param_2,&_LC0);
    if (lVar2 != 0) {
      lVar3 = ossl_prov_digest_md(param_1 + 0x10);
      if (*(int *)(param_1 + 8) == 1) {
        if (lVar3 == 0) {
          ERR_new();
          ERR_set_debug("providers/implementations/kdfs/hkdf.c",0xb9,"kdf_hkdf_size");
          ERR_set_error(0x39,0x81,0);
          return false;
        }
        iVar1 = EVP_MD_get_size(lVar3);
        lVar3 = (long)iVar1;
        if (iVar1 < 1) {
          return false;
        }
      }
      else {
        lVar3 = -1;
      }
      iVar1 = OSSL_PARAM_set_size_t(lVar2,lVar3);
      if (iVar1 == 0) {
        return false;
      }
    }
    lVar2 = OSSL_PARAM_locate(param_2,&_LC1);
    if (lVar2 != 0) {
      if ((*(long *)(param_1 + 0x78) != 0) && (*(long *)(param_1 + 0x80) != 0)) {
        iVar1 = OSSL_PARAM_set_octet_string(lVar2);
        return iVar1 != 0;
      }
      *(undefined8 *)(lVar2 + 0x20) = 0;
    }
  }
  return true;
}



ulong kdf_hkdf_derive(undefined8 *param_1,undefined8 param_2,long param_3,long *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  long in_FS_OFFSET;
  undefined1 local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar8 = ossl_prov_ctx_get0_libctx(*param_1);
  iVar5 = ossl_prov_is_running();
  if (iVar5 != 0) {
    if ((param_4 == (long *)0x0) || (*param_4 == 0)) {
LAB_0010112f:
      lVar9 = ossl_prov_digest_md(param_1 + 2);
      if (lVar9 == 0) {
        ERR_new();
        ERR_set_debug("providers/implementations/kdfs/hkdf.c",0xe1,"kdf_hkdf_derive");
        ERR_set_error(0x39,0x81,0);
        uVar12 = 0;
        goto LAB_00101298;
      }
      lVar11 = param_1[7];
      if (lVar11 == 0) {
        ERR_new();
        ERR_set_debug("providers/implementations/kdfs/hkdf.c",0xe5,"kdf_hkdf_derive");
        ERR_set_error(0x39,0x80,0);
        uVar12 = 0;
        goto LAB_00101298;
      }
      if (param_3 == 0) {
        ERR_new();
        ERR_set_debug("providers/implementations/kdfs/hkdf.c",0xe9,"kdf_hkdf_derive");
        ERR_set_error(0x39,0x69,0);
        uVar12 = 0;
        goto LAB_00101298;
      }
      uVar1 = param_1[8];
      if (*(int *)(param_1 + 1) == 1) {
        uVar2 = param_1[6];
        uVar3 = param_1[5];
        iVar5 = EVP_MD_get_size(lVar9);
        if (0 < iVar5) {
          if (param_3 == iVar5) {
            iVar5 = EVP_MD_get_size(lVar9);
            uVar13 = EVP_MD_get0_name(lVar9);
            lVar9 = EVP_Q_mac(uVar8,&_LC13,0,uVar13,0,uVar3,uVar2,lVar11,uVar1,param_2,(long)iVar5,0
                             );
            uVar12 = (ulong)(lVar9 != 0);
            goto LAB_00101298;
          }
LAB_001013c0:
          ERR_new();
          ERR_set_debug("providers/implementations/kdfs/hkdf.c",0x204,"HKDF_Extract");
          ERR_set_error(0x39,0x8b,0);
          uVar12 = 0;
          goto LAB_00101298;
        }
      }
      else {
        if (*(int *)(param_1 + 1) == 2) {
          uVar12 = HKDF_Expand(lVar9,lVar11,uVar1,param_1[0xf],param_1[0x10],param_2,param_3);
          goto LAB_00101298;
        }
        uVar2 = param_1[0x10];
        uVar3 = param_1[0xf];
        uVar13 = param_1[6];
        uVar4 = param_1[5];
        iVar5 = EVP_MD_get_size(lVar9);
        if (0 < iVar5) {
          iVar6 = EVP_MD_get_size(lVar9);
          if (0 < iVar6) {
            if (iVar6 != iVar5) goto LAB_001013c0;
            iVar6 = EVP_MD_get_size(lVar9);
            uVar10 = EVP_MD_get0_name(lVar9);
            lVar11 = EVP_Q_mac(uVar8,&_LC13,0,uVar10,0,uVar4,uVar13,lVar11,uVar1,local_88,
                               (long)iVar6,0);
            if (lVar11 != 0) {
              uVar7 = HKDF_Expand(lVar9,local_88,(long)iVar5,uVar3,uVar2,param_2,param_3);
              OPENSSL_cleanse(local_88,0x40);
              uVar12 = (ulong)uVar7;
              goto LAB_00101298;
            }
          }
        }
      }
    }
    else {
      iVar5 = hkdf_common_set_ctx_params(param_1,param_4);
      if (iVar5 != 0) {
        iVar5 = ossl_param_get1_concat_octet_string
                          (param_4,&_LC1,param_1 + 0xf,param_1 + 0x10,0x8000);
        if (iVar5 != 0) goto LAB_0010112f;
      }
    }
  }
  uVar12 = 0;
LAB_00101298:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar12;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool kdf_hkdf_set_ctx_params(undefined8 *param_1,long *param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long in_FS_OFFSET;
  bool bVar4;
  uint local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  bVar4 = true;
  if ((param_2 == (long *)0x0) || (*param_2 == 0)) goto LAB_001014b8;
  uVar2 = ossl_prov_ctx_get0_libctx(*param_1);
  if (*param_2 != 0) {
    lVar3 = OSSL_PARAM_locate_const(param_2,"digest");
    if (lVar3 != 0) {
      iVar1 = ossl_prov_digest_load_from_params(param_1 + 2,param_2,uVar2);
      if (iVar1 != 0) {
        uVar2 = ossl_prov_digest_md(param_1 + 2);
        iVar1 = EVP_MD_xof(uVar2);
        if (iVar1 != 0) {
          ERR_new();
          ERR_set_debug("providers/implementations/kdfs/hkdf.c",0x10e,"hkdf_common_set_ctx_params");
          ERR_set_error(0x39,0xb7,0);
          bVar4 = false;
          goto LAB_001014b8;
        }
        goto LAB_001014f8;
      }
LAB_001014b1:
      bVar4 = false;
      goto LAB_001014b8;
    }
LAB_001014f8:
    lVar3 = OSSL_PARAM_locate_const(param_2,&_LC4);
    if (lVar3 != 0) {
      if (*(int *)(lVar3 + 8) != 4) {
        iVar1 = OSSL_PARAM_get_int(lVar3,&local_34);
        if (iVar1 == 0) {
          ERR_new();
          uVar2 = 0x128;
        }
        else {
          if (local_34 < 3) {
            *(uint *)(param_1 + 1) = local_34;
            goto LAB_0010153e;
          }
          ERR_new();
          uVar2 = 0x123;
        }
LAB_00101631:
        ERR_set_debug("providers/implementations/kdfs/hkdf.c",uVar2,"hkdf_common_set_ctx_params");
        ERR_set_error(0x39,0x7d,0);
        bVar4 = false;
        goto LAB_001014b8;
      }
      iVar1 = OPENSSL_strcasecmp(*(undefined8 *)(lVar3 + 0x10),"EXTRACT_AND_EXPAND");
      if (iVar1 == 0) {
        *(undefined4 *)(param_1 + 1) = 0;
      }
      else {
        iVar1 = OPENSSL_strcasecmp(*(undefined8 *)(lVar3 + 0x10),"EXTRACT_ONLY");
        if (iVar1 == 0) {
          *(undefined4 *)(param_1 + 1) = 1;
        }
        else {
          iVar1 = OPENSSL_strcasecmp(*(undefined8 *)(lVar3 + 0x10),"EXPAND_ONLY");
          if (iVar1 != 0) {
            ERR_new();
            uVar2 = 0x11c;
            goto LAB_00101631;
          }
          *(undefined4 *)(param_1 + 1) = 2;
        }
      }
    }
LAB_0010153e:
    lVar3 = OSSL_PARAM_locate_const(param_2,&_LC8);
    if (lVar3 != 0) {
      CRYPTO_clear_free(param_1[7],param_1[8],"providers/implementations/kdfs/hkdf.c",0x12e);
      param_1[7] = 0;
      iVar1 = OSSL_PARAM_get_octet_string(lVar3,param_1 + 7,0,param_1 + 8);
      if (iVar1 == 0) goto LAB_001014b1;
    }
    lVar3 = OSSL_PARAM_locate_const(param_2,&_LC9);
    if (((lVar3 != 0) && (*(long *)(lVar3 + 0x18) != 0)) && (*(long *)(lVar3 + 0x10) != 0)) {
      CRYPTO_free((void *)param_1[5]);
      param_1[5] = 0;
      iVar1 = OSSL_PARAM_get_octet_string(lVar3,param_1 + 5,0,param_1 + 6);
      if (iVar1 == 0) goto LAB_001014b1;
    }
  }
  iVar1 = ossl_param_get1_concat_octet_string(param_2,&_LC1,param_1 + 0xf,param_1 + 0x10,0x8000);
  bVar4 = iVar1 != 0;
LAB_001014b8:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar4;
}


