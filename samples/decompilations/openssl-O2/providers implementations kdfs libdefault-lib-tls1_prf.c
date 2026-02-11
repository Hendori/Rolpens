
undefined1 * kdf_tls1_prf_settable_ctx_params(void)

{
  return known_settable_ctx_params_1;
}



undefined1 * kdf_tls1_prf_gettable_ctx_params(void)

{
  return known_gettable_ctx_params_3;
}



bool kdf_tls1_prf_get_ctx_params(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  
  lVar2 = OSSL_PARAM_locate(param_2,&_LC0);
  bVar3 = true;
  if (lVar2 != 0) {
    iVar1 = OSSL_PARAM_set_size_t(lVar2,0xffffffffffffffff);
    bVar3 = iVar1 != 0;
  }
  return bVar3;
}



void kdf_tls1_prf_reset(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  EVP_MAC_CTX_free(param_1[1]);
  EVP_MAC_CTX_free(param_1[2]);
  CRYPTO_clear_free(param_1[3],param_1[4],"providers/implementations/kdfs/tls1_prf.c",0x90);
  CRYPTO_clear_free(param_1[5],param_1[6],"providers/implementations/kdfs/tls1_prf.c",0x91);
  *param_1 = uVar1;
  *(undefined1 (*) [16])(param_1 + 1) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 3) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 5) = (undefined1  [16])0x0;
  return;
}



int tls1_prf_P_hash(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                   undefined8 param_5,void *param_6,ulong param_7)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined1 local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = EVP_MAC_init();
  if (iVar1 != 0) {
    uVar2 = EVP_MAC_CTX_get_mac_size(param_1);
    if (uVar2 != 0) {
      lVar3 = EVP_MAC_CTX_dup(param_1);
      if (lVar3 != 0) {
        if (param_4 != 0) {
          lVar4 = 0;
          iVar1 = EVP_MAC_update(lVar3,param_4,param_5);
          if (iVar1 == 0) goto LAB_00100123;
        }
        while( true ) {
          iVar1 = EVP_MAC_final(lVar3,local_88,&local_90,0x40);
          if (iVar1 == 0) break;
          EVP_MAC_CTX_free(lVar3);
          lVar4 = EVP_MAC_CTX_dup(param_1);
          if (lVar4 == 0) goto LAB_0010011d;
          iVar1 = EVP_MAC_update(lVar4,local_88,local_90);
          if (iVar1 == 0) {
LAB_00100300:
            iVar1 = 0;
            lVar3 = 0;
            goto LAB_00100123;
          }
          if (param_7 <= uVar2) {
            if (param_4 != 0) {
              iVar1 = EVP_MAC_update(lVar4,param_4,param_5);
              if (iVar1 == 0) {
                iVar1 = 0;
                lVar3 = 0;
                goto LAB_00100123;
              }
            }
            iVar1 = EVP_MAC_final(lVar4,local_88,&local_90,0x40);
            lVar3 = 0;
            if (iVar1 != 0) {
              memcpy(param_6,local_88,param_7);
              iVar1 = 1;
              lVar3 = 0;
            }
            goto LAB_00100123;
          }
          lVar3 = EVP_MAC_CTX_dup(lVar4);
          if (lVar3 == 0) goto LAB_00100300;
          if (param_4 != 0) {
            iVar1 = EVP_MAC_update(lVar4,param_4,param_5);
            if (iVar1 == 0) goto LAB_00100123;
          }
          iVar1 = EVP_MAC_final(lVar4,param_6,0,param_7);
          if (iVar1 == 0) goto LAB_00100123;
          param_6 = (void *)((long)param_6 + uVar2);
          param_7 = param_7 - uVar2;
          EVP_MAC_CTX_free(lVar4);
        }
        lVar4 = 0;
        iVar1 = 0;
        goto LAB_00100123;
      }
    }
  }
LAB_0010011d:
  iVar1 = 0;
  lVar4 = 0;
  lVar3 = 0;
LAB_00100123:
  EVP_MAC_CTX_free(lVar4);
  EVP_MAC_CTX_free(lVar3);
  OPENSSL_cleanse(local_88,0x40);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 * kdf_tls1_prf_new(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  iVar1 = ossl_prov_is_running();
  puVar2 = (undefined8 *)0x0;
  if (iVar1 != 0) {
    puVar2 = (undefined8 *)CRYPTO_zalloc(0x38,"providers/implementations/kdfs/tls1_prf.c",0x78);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = param_1;
    }
  }
  return puVar2;
}



undefined8 kdf_tls1_prf_set_ctx_params(undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long in_FS_OFFSET;
  void *local_50;
  undefined1 local_48 [16];
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar4 = ossl_prov_ctx_get0_libctx(*param_1);
  if ((param_2 != (long *)0x0) && (*param_2 != 0)) {
    lVar5 = OSSL_PARAM_locate_const(param_2,"digest");
    if (lVar5 != 0) {
      iVar3 = OPENSSL_strcasecmp(*(undefined8 *)(lVar5 + 0x10),"MD5-SHA1");
      if (iVar3 == 0) {
        iVar3 = ossl_prov_macctx_load_from_params(param_1 + 1,param_2,&_LC5,0,&_LC4,uVar4);
        if (iVar3 != 0) {
          iVar3 = ossl_prov_macctx_load_from_params(param_1 + 2,param_2,&_LC5,0,&_LC6,uVar4);
          if (iVar3 == 0) {
            uVar4 = 0;
            goto LAB_00100575;
          }
          goto LAB_001003ec;
        }
      }
      else {
        EVP_MAC_CTX_free(param_1[2]);
        iVar3 = ossl_prov_macctx_load_from_params(param_1 + 1,param_2,&_LC5,0,0,uVar4);
        if (iVar3 != 0) {
LAB_001003ec:
          local_48 = (undefined1  [16])0x0;
          local_38 = 0;
          iVar3 = ossl_prov_digest_load_from_params(local_48,param_2,uVar4);
          if (iVar3 != 0) {
            uVar4 = ossl_prov_digest_md(local_48);
            iVar3 = EVP_MD_xof(uVar4);
            if (iVar3 != 0) {
              ERR_new();
              ERR_set_debug("providers/implementations/kdfs/tls1_prf.c",0x148,
                            "kdf_tls1_prf_set_ctx_params");
              ERR_set_error(0x39,0xb7,0);
              ossl_prov_digest_reset(local_48);
              uVar4 = 0;
              goto LAB_00100575;
            }
            ossl_prov_digest_reset(local_48);
            goto LAB_00100440;
          }
        }
      }
LAB_00100415:
      uVar4 = 0;
      goto LAB_00100575;
    }
LAB_00100440:
    lVar5 = OSSL_PARAM_locate_const(param_2,"secret");
    if (lVar5 != 0) {
      CRYPTO_clear_free(param_1[3],param_1[4],"providers/implementations/kdfs/tls1_prf.c",0x158);
      param_1[3] = 0;
      iVar3 = OSSL_PARAM_get_octet_string(lVar5,param_1 + 3,0,param_1 + 4);
      if (iVar3 == 0) goto LAB_00100415;
    }
    for (lVar5 = OSSL_PARAM_locate_const(param_2,&_LC8); lVar5 != 0;
        lVar5 = OSSL_PARAM_locate_const(lVar5 + 0x28,&_LC8)) {
      if ((*(long *)(lVar5 + 0x18) != 0) && (*(long *)(lVar5 + 0x10) != 0)) {
        local_50 = (void *)0x0;
        auVar2._8_8_ = 0;
        auVar2._0_8_ = local_48._8_8_;
        local_48 = auVar2 << 0x40;
        iVar3 = OSSL_PARAM_get_octet_string_ptr(lVar5,&local_50,local_48);
        if (iVar3 == 0) goto LAB_00100415;
        uVar1 = param_1[6];
        lVar7 = uVar1 + local_48._0_8_;
        if ((CARRY8(uVar1,local_48._0_8_)) ||
           (lVar6 = CRYPTO_clear_realloc
                              (param_1[5],uVar1,lVar7,"providers/implementations/kdfs/tls1_prf.c",
                               0x174), lVar6 == 0)) goto LAB_00100415;
        param_1[5] = lVar6;
        if (local_48._0_8_ != 0) {
          memcpy((void *)(lVar6 + param_1[6]),local_50,local_48._0_8_);
        }
        param_1[6] = lVar7;
      }
    }
  }
  uVar4 = 1;
LAB_00100575:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool kdf_tls1_prf_derive(long param_1,long param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  void *pvVar7;
  long lVar8;
  ulong uVar9;
  
  iVar6 = ossl_prov_is_running();
  if ((iVar6 != 0) && (iVar6 = kdf_tls1_prf_set_ctx_params(param_1,param_4), iVar6 != 0)) {
    lVar8 = *(long *)(param_1 + 8);
    if (lVar8 == 0) {
      ERR_new();
      ERR_set_debug("providers/implementations/kdfs/tls1_prf.c",0x100,"kdf_tls1_prf_derive");
      ERR_set_error(0x39,0x81,0);
    }
    else {
      lVar1 = *(long *)(param_1 + 0x18);
      if (lVar1 == 0) {
        ERR_new();
        ERR_set_debug("providers/implementations/kdfs/tls1_prf.c",0x104,"kdf_tls1_prf_derive");
        ERR_set_error(0x39,0x84,0);
      }
      else {
        lVar2 = *(long *)(param_1 + 0x30);
        if (lVar2 == 0) {
          ERR_new();
          ERR_set_debug("providers/implementations/kdfs/tls1_prf.c",0x108,"kdf_tls1_prf_derive");
          ERR_set_error(0x39,0x8c,0);
        }
        else if (param_3 == 0) {
          ERR_new();
          ERR_set_debug("providers/implementations/kdfs/tls1_prf.c",0x10c,"kdf_tls1_prf_derive");
          ERR_set_error(0x39,0x69,0);
        }
        else {
          lVar3 = *(long *)(param_1 + 0x10);
          uVar4 = *(undefined8 *)(param_1 + 0x28);
          lVar5 = *(long *)(param_1 + 0x20);
          if (lVar3 == 0) {
            iVar6 = tls1_prf_P_hash(lVar8,lVar1,lVar5,uVar4,lVar2,param_2,param_3);
            return iVar6 != 0;
          }
          uVar9 = lVar5 + 1U >> 1;
          iVar6 = tls1_prf_P_hash(lVar8,lVar1,uVar9,uVar4,lVar2,param_2,param_3);
          if ((iVar6 != 0) &&
             (pvVar7 = CRYPTO_malloc((int)param_3,"providers/implementations/kdfs/tls1_prf.c",0x236)
             , pvVar7 != (void *)0x0)) {
            iVar6 = tls1_prf_P_hash(lVar3,lVar1 + (lVar5 - uVar9),uVar9,uVar4,lVar2,pvVar7,param_3);
            lVar8 = 0;
            if (iVar6 != 0) {
              do {
                *(byte *)(param_2 + lVar8) =
                     *(byte *)(param_2 + lVar8) ^ *(byte *)((long)pvVar7 + lVar8);
                lVar8 = lVar8 + 1;
              } while (param_3 != lVar8);
              CRYPTO_clear_free(pvVar7,param_3,"providers/implementations/kdfs/tls1_prf.c",0x240);
              return true;
            }
            CRYPTO_clear_free(pvVar7,param_3,"providers/implementations/kdfs/tls1_prf.c",0x23b);
          }
        }
      }
    }
  }
  return false;
}



void kdf_tls1_prf_free(void *param_1)

{
  if (param_1 != (void *)0x0) {
    kdf_tls1_prf_reset();
    CRYPTO_free(param_1);
    return;
  }
  return;
}



undefined8 * kdf_tls1_prf_dup(undefined8 *param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *ptr;
  long lVar3;
  
  uVar1 = *param_1;
  iVar2 = ossl_prov_is_running();
  if (iVar2 == 0) {
    return (undefined8 *)0x0;
  }
  ptr = (undefined8 *)CRYPTO_zalloc(0x38,"providers/implementations/kdfs/tls1_prf.c",0x78);
  if (ptr == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  lVar3 = param_1[1];
  *ptr = uVar1;
  if (lVar3 != 0) {
    lVar3 = EVP_MAC_CTX_dup();
    ptr[1] = lVar3;
    if (lVar3 == 0) goto LAB_001009d0;
  }
  if (param_1[2] != 0) {
    lVar3 = EVP_MAC_CTX_dup();
    ptr[2] = lVar3;
    if (lVar3 == 0) goto LAB_001009d0;
  }
  iVar2 = ossl_prov_memdup(param_1[3],param_1[4],ptr + 3,ptr + 4);
  if ((iVar2 != 0) && (iVar2 = ossl_prov_memdup(param_1[5],param_1[6],ptr + 5,ptr + 6), iVar2 != 0))
  {
    return ptr;
  }
LAB_001009d0:
  kdf_tls1_prf_reset(ptr);
  CRYPTO_free(ptr);
  return (undefined8 *)0x0;
}


