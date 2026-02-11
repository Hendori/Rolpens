
undefined1 * drbg_ctr_gettable_ctx_params(void)

{
  return known_gettable_ctx_params_5;
}



undefined1 * drbg_ctr_settable_ctx_params(void)

{
  return known_settable_ctx_params_1;
}



bool drbg_ctr_verify_zeroization(long *param_1)

{
  long lVar1;
  int iVar2;
  char *pcVar3;
  long lVar4;
  bool bVar5;
  
  lVar1 = param_1[0x1e];
  lVar4 = *param_1;
  if (lVar4 != 0) {
    iVar2 = CRYPTO_THREAD_read_lock();
    if (iVar2 == 0) {
      return false;
    }
    lVar4 = *param_1;
  }
  pcVar3 = (char *)(lVar1 + 0x34);
  do {
    if (*pcVar3 != '\0') goto LAB_00100066;
    pcVar3 = pcVar3 + 1;
  } while (pcVar3 != (char *)(lVar1 + 0x54));
  do {
    if (*pcVar3 != '\0') goto LAB_00100066;
    pcVar3 = pcVar3 + 1;
  } while (pcVar3 != (char *)(lVar1 + 100));
  do {
    if (*pcVar3 != '\0') goto LAB_00100066;
    pcVar3 = pcVar3 + 1;
  } while (pcVar3 != (char *)(lVar1 + 0x74));
  pcVar3 = (char *)(lVar1 + 0x80);
  do {
    if (*pcVar3 != '\0') goto LAB_00100066;
    pcVar3 = pcVar3 + 1;
  } while (pcVar3 != (char *)(lVar1 + 0xb0));
  bVar5 = *(long *)(lVar1 + 0x78) == 0;
LAB_00100068:
  if (lVar4 != 0) {
    CRYPTO_THREAD_unlock();
  }
  return bVar5;
LAB_00100066:
  bVar5 = false;
  goto LAB_00100068;
}



undefined4 drbg_ctr_get_ctx_params(long *param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  int local_34;
  long local_30;
  
  lVar1 = param_1[0x1e];
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_34 = 0;
  iVar2 = ossl_drbg_get_ctx_params_no_lock(param_1,param_2,&local_34);
  if (iVar2 == 0) {
LAB_001001f0:
    uVar3 = 0;
    goto LAB_001001c6;
  }
  if (local_34 != 0) {
    uVar3 = 1;
    goto LAB_001001c6;
  }
  if (*param_1 != 0) {
    iVar2 = CRYPTO_THREAD_read_lock();
    if (iVar2 == 0) goto LAB_001001f0;
  }
  lVar4 = OSSL_PARAM_locate(param_2,"use_derivation_function");
  uVar3 = 0;
  if (lVar4 == 0) {
LAB_0010016e:
    lVar4 = OSSL_PARAM_locate(param_2,"cipher");
    if (lVar4 == 0) {
LAB_001001a2:
      uVar3 = ossl_drbg_get_ctx_params(param_1,param_2);
    }
    else if (*(long *)(lVar1 + 0x20) != 0) {
      uVar5 = EVP_CIPHER_get0_name();
      iVar2 = OSSL_PARAM_set_utf8_string(lVar4,uVar5);
      if (iVar2 != 0) goto LAB_001001a2;
    }
  }
  else {
    iVar2 = OSSL_PARAM_set_int(lVar4,*(undefined4 *)(lVar1 + 0x30));
    if (iVar2 != 0) goto LAB_0010016e;
  }
  if (*param_1 != 0) {
    CRYPTO_THREAD_unlock();
  }
LAB_001001c6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void drbg_ctr_reseed_wrapper(void)

{
  ossl_prov_drbg_reseed();
  return;
}



void drbg_ctr_generate_wrapper(void)

{
  ossl_prov_drbg_generate();
  return;
}



void drbg_ctr_uninstantiate(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0xf0);
  OPENSSL_cleanse((void *)(lVar1 + 0x34),0x20);
  OPENSSL_cleanse((void *)(lVar1 + 0x54),0x10);
  OPENSSL_cleanse((void *)(lVar1 + 100),0x10);
  OPENSSL_cleanse((void *)(lVar1 + 0x80),0x30);
  *(undefined8 *)(lVar1 + 0x78) = 0;
  ossl_prov_drbg_uninstantiate(param_1);
  return;
}



void drbg_ctr_free(long param_1)

{
  undefined8 *puVar1;
  
  if ((param_1 != 0) && (puVar1 = *(undefined8 **)(param_1 + 0xf0), puVar1 != (undefined8 *)0x0)) {
    EVP_CIPHER_CTX_free((EVP_CIPHER_CTX *)*puVar1);
    EVP_CIPHER_CTX_free((EVP_CIPHER_CTX *)puVar1[1]);
    EVP_CIPHER_CTX_free((EVP_CIPHER_CTX *)puVar1[2]);
    EVP_CIPHER_free(puVar1[3]);
    EVP_CIPHER_free(puVar1[4]);
    CRYPTO_secure_clear_free(puVar1,0xb0,"providers/implementations/rands/drbg_ctr.c",0x290);
  }
  ossl_rand_drbg_free(param_1);
  return;
}



void drbg_ctr_new_wrapper(void)

{
  ossl_rand_drbg_new();
  return;
}



uint ctr_BCC_block(long param_1,uchar *param_2,long param_3,int param_4)

{
  uint uVar1;
  long lVar2;
  long in_FS_OFFSET;
  int local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = 0;
  local_14 = 0x10;
  do {
    param_2[lVar2] = param_2[lVar2] ^ *(byte *)(param_3 + lVar2);
    lVar2 = lVar2 + 1;
  } while (param_4 != lVar2);
  uVar1 = EVP_CipherUpdate(*(EVP_CIPHER_CTX **)(param_1 + 0x10),param_2,&local_14,param_2,param_4);
  if (uVar1 != 0) {
    uVar1 = (uint)(local_14 == param_4);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 drbg_ctr_set_ctx_params_locked(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 (*pauVar3) [16];
  ulong uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  void *ptr;
  undefined8 uVar12;
  EVP_CIPHER_CTX *pEVar13;
  EVP_CIPHER_CTX *pEVar14;
  long in_FS_OFFSET;
  int local_44;
  long local_40;
  
  lVar1 = *(long *)(param_1 + 0xf0);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar8 = ossl_prov_ctx_get0_libctx(*(undefined8 *)(param_1 + 8));
  lVar9 = OSSL_PARAM_locate_const(param_2,"use_derivation_function");
  if ((lVar9 == 0) || (iVar6 = OSSL_PARAM_get_int(lVar9,&local_44), iVar6 == 0)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
    *(uint *)(lVar1 + 0x30) = (uint)(local_44 != 0);
  }
  lVar9 = OSSL_PARAM_locate_const(param_2,"properties");
  if (lVar9 == 0) {
LAB_00100484:
    lVar10 = OSSL_PARAM_locate_const(param_2,"provider-name");
    if ((lVar10 == 0) ||
       ((*(int *)(lVar10 + 8) == 4 &&
        (lVar10 = ossl_provider_find(uVar8,*(undefined8 *)(lVar10 + 0x10),1), lVar10 != 0)))) {
      lVar11 = OSSL_PARAM_locate_const(param_2,"cipher");
      if (lVar11 == 0) {
        ossl_provider_free(lVar10);
        if (!bVar5) {
LAB_00100718:
          uVar8 = ossl_drbg_set_ctx_params(param_1,param_2);
          goto LAB_00100458;
        }
LAB_001005e7:
        pauVar3 = *(undefined1 (**) [16])(param_1 + 0xf0);
        if (*(long *)pauVar3[2] == 0) {
          ERR_new();
          ERR_set_debug("providers/implementations/rands/drbg_ctr.c",0x236,"drbg_ctr_init");
          ERR_set_error(0x39,0x9b,0);
          goto LAB_00100452;
        }
        iVar6 = EVP_CIPHER_get_key_length();
        lVar1 = *(long *)*pauVar3;
        *(long *)(pauVar3[2] + 8) = (long)iVar6;
        if (lVar1 == 0) {
          pEVar14 = EVP_CIPHER_CTX_new();
          lVar1 = *(long *)(*pauVar3 + 8);
          *(EVP_CIPHER_CTX **)*pauVar3 = pEVar14;
          if (lVar1 == 0) goto LAB_001008a6;
          if (pEVar14 != (EVP_CIPHER_CTX *)0x0) goto LAB_00100627;
LAB_001008c2:
          ERR_new();
          uVar8 = 0x23f;
LAB_001008d3:
          ERR_set_debug("providers/implementations/rands/drbg_ctr.c",uVar8,"drbg_ctr_init");
          ERR_set_error(0x39,0x80006,0);
        }
        else {
          if (*(long *)(*pauVar3 + 8) == 0) {
LAB_001008a6:
            pEVar13 = EVP_CIPHER_CTX_new();
            pEVar14 = *(EVP_CIPHER_CTX **)*pauVar3;
            *(EVP_CIPHER_CTX **)(*pauVar3 + 8) = pEVar13;
            if ((pEVar14 == (EVP_CIPHER_CTX *)0x0) || (pEVar13 == (EVP_CIPHER_CTX *)0x0))
            goto LAB_001008c2;
          }
          else {
            pEVar14 = *(EVP_CIPHER_CTX **)*pauVar3;
          }
LAB_00100627:
          iVar7 = EVP_CipherInit_ex(pEVar14,*(EVP_CIPHER **)(pauVar3[1] + 8),(ENGINE *)0x0,
                                    (uchar *)0x0,(uchar *)0x0,1);
          if ((iVar7 != 0) &&
             (iVar7 = EVP_CipherInit_ex(*(EVP_CIPHER_CTX **)(*pauVar3 + 8),
                                        *(EVP_CIPHER **)pauVar3[2],(ENGINE *)0x0,(uchar *)0x0,
                                        (uchar *)0x0,1), iVar7 != 0)) {
            iVar7 = *(int *)pauVar3[3];
            *(int *)(param_1 + 0x78) = iVar6 << 3;
            *(long *)(param_1 + 0xe0) = (long)iVar6 + 0x10;
            if (iVar7 != 0) {
              pEVar14 = *(EVP_CIPHER_CTX **)pauVar3[1];
              if (pEVar14 == (EVP_CIPHER_CTX *)0x0) {
                pEVar14 = EVP_CIPHER_CTX_new();
                *(EVP_CIPHER_CTX **)pauVar3[1] = pEVar14;
                if (pEVar14 == (EVP_CIPHER_CTX *)0x0) {
                  ERR_new();
                  uVar8 = 0x25a;
                  goto LAB_001008d3;
                }
              }
              iVar6 = EVP_CipherInit_ex(pEVar14,*(EVP_CIPHER **)(pauVar3[1] + 8),(ENGINE *)0x0,
                                        df_key_2,(uchar *)0x0,1);
              if (iVar6 == 0) {
                ERR_new();
                ERR_set_debug("providers/implementations/rands/drbg_ctr.c",0x260,"drbg_ctr_init");
                ERR_set_error(0x39,0xcd,0);
                goto LAB_00100850;
              }
            }
            *(undefined8 *)(param_1 + 0x80) = 0x10000;
            uVar12 = _UNK_00101c98;
            uVar8 = __LC6;
            uVar4 = *(ulong *)(*(long *)(param_1 + 0xf0) + 0x28);
            if (*(int *)(*(long *)(param_1 + 0xf0) + 0x30) == 0) {
              uVar8 = 0x7fffffff;
              if (uVar4 != 0) {
                uVar8 = *(undefined8 *)(param_1 + 0xe0);
              }
              *(undefined1 (*) [16])(param_1 + 0x98) = (undefined1  [16])0x0;
              *(undefined8 *)(param_1 + 0x88) = uVar8;
              *(undefined8 *)(param_1 + 0x90) = uVar8;
              *(undefined8 *)(param_1 + 0xa8) = uVar8;
              *(undefined8 *)(param_1 + 0xb0) = uVar8;
            }
            else {
              *(undefined8 *)(param_1 + 0x88) = __LC6;
              *(undefined8 *)(param_1 + 0x90) = uVar12;
              *(undefined8 *)(param_1 + 0x98) = uVar8;
              *(undefined8 *)(param_1 + 0xa0) = uVar12;
              uVar8 = _UNK_00101ca8;
              *(undefined8 *)(param_1 + 0xa8) = __LC7;
              *(undefined8 *)(param_1 + 0xb0) = uVar8;
              if (uVar4 != 0) {
                *(ulong *)(param_1 + 0x88) = uVar4;
                *(ulong *)(param_1 + 0x98) = uVar4 >> 1;
              }
            }
            goto LAB_00100718;
          }
          ERR_new();
          ERR_set_debug("providers/implementations/rands/drbg_ctr.c",0x247,"drbg_ctr_init");
          ERR_set_error(0x39,0xd0,0);
        }
LAB_00100850:
        EVP_CIPHER_CTX_free(*(EVP_CIPHER_CTX **)*pauVar3);
        EVP_CIPHER_CTX_free(*(EVP_CIPHER_CTX **)(*pauVar3 + 8));
        *pauVar3 = (undefined1  [16])0x0;
      }
      else {
        lVar2 = *(long *)(lVar11 + 0x10);
        if ((*(int *)(lVar11 + 8) == 4) && (2 < *(ulong *)(lVar11 + 0x18))) {
          iVar6 = OPENSSL_strcasecmp(&_LC5,lVar2 + -3 + *(ulong *)(lVar11 + 0x18));
          if (iVar6 == 0) {
            ptr = (void *)CRYPTO_strndup(lVar2,*(undefined8 *)(lVar11 + 0x18),
                                         "providers/implementations/rands/drbg_ctr.c",0x2f7);
            if (ptr == (void *)0x0) goto LAB_00100780;
            *(undefined4 *)((long)ptr + *(long *)(lVar11 + 0x18) + -3) = 0x424345;
            EVP_CIPHER_free(*(undefined8 *)(lVar1 + 0x18));
            EVP_CIPHER_free(*(undefined8 *)(lVar1 + 0x20));
            ERR_set_mark();
            lVar11 = evp_cipher_fetch_from_prov(lVar10,lVar2,0);
            *(long *)(lVar1 + 0x20) = lVar11;
            if (lVar11 == 0) {
              ERR_pop_to_mark();
              uVar12 = EVP_CIPHER_fetch(uVar8,lVar2,lVar9);
              *(undefined8 *)(lVar1 + 0x20) = uVar12;
            }
            else {
              ERR_clear_last_mark();
            }
            ERR_set_mark();
            lVar11 = evp_cipher_fetch_from_prov(lVar10,ptr,0);
            *(long *)(lVar1 + 0x18) = lVar11;
            if (lVar11 == 0) {
              ERR_pop_to_mark();
              uVar8 = EVP_CIPHER_fetch(uVar8,ptr,lVar9);
              *(undefined8 *)(lVar1 + 0x18) = uVar8;
            }
            else {
              ERR_clear_last_mark();
            }
            CRYPTO_free(ptr);
            if ((*(long *)(lVar1 + 0x20) != 0) && (*(long *)(lVar1 + 0x18) != 0)) {
              ossl_provider_free(lVar10);
              goto LAB_001005e7;
            }
            ERR_new();
            ERR_set_debug("providers/implementations/rands/drbg_ctr.c",0x314,
                          "drbg_ctr_set_ctx_params_locked");
            uVar8 = 0xcf;
          }
          else {
            ERR_new();
            ERR_set_debug("providers/implementations/rands/drbg_ctr.c",0x2f3,
                          "drbg_ctr_set_ctx_params_locked");
            uVar8 = 0xce;
          }
          ERR_set_error(0x39,uVar8,0);
        }
LAB_00100780:
        ossl_provider_free(lVar10);
      }
    }
  }
  else if (*(int *)(lVar9 + 8) == 4) {
    lVar9 = *(long *)(lVar9 + 0x10);
    goto LAB_00100484;
  }
LAB_00100452:
  uVar8 = 0;
LAB_00100458:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar8;
}



undefined4 drbg_ctr_set_ctx_params(long *param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*param_1 != 0) && (iVar1 = CRYPTO_THREAD_write_lock(), iVar1 == 0)) {
    return 0;
  }
  uVar2 = drbg_ctr_set_ctx_params_locked(param_1,param_2);
  if (*param_1 != 0) {
    CRYPTO_THREAD_unlock();
  }
  return uVar2;
}



undefined4
drbg_ctr_instantiate_wrapper
          (long *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,undefined8 param_5
          ,undefined8 param_6)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*param_1 != 0) && (iVar1 = CRYPTO_THREAD_write_lock(), iVar1 == 0)) {
    return 0;
  }
  iVar1 = ossl_prov_is_running();
  if ((iVar1 == 0) || (iVar1 = drbg_ctr_set_ctx_params_locked(param_1,param_6), iVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = ossl_prov_drbg_instantiate(param_1,param_2,param_3,param_4,param_5);
  }
  if (*param_1 != 0) {
    CRYPTO_THREAD_unlock();
  }
  return uVar2;
}



void ctr_XOR(long param_1,long param_2,ulong param_3)

{
  byte *pbVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if ((param_2 != 0) && (param_3 != 0)) {
    uVar2 = *(ulong *)(param_1 + 0x28);
    uVar4 = uVar2;
    if (param_3 <= uVar2) {
      uVar4 = param_3;
    }
    if (uVar4 != 0) {
      uVar3 = 0;
      do {
        pbVar1 = (byte *)(param_1 + 0x34 + uVar3);
        *pbVar1 = *pbVar1 ^ *(byte *)(param_2 + uVar3);
        uVar3 = uVar3 + 1;
      } while (uVar4 != uVar3);
    }
    if (uVar2 < param_3) {
      param_3 = param_3 - uVar2;
      if (0x10 < param_3) {
        param_3 = 0x10;
      }
      uVar4 = 0;
      do {
        pbVar1 = (byte *)(param_1 + 0x54 + uVar4);
        *pbVar1 = *pbVar1 ^ *(byte *)(param_2 + uVar2 + uVar4);
        uVar4 = uVar4 + 1;
      } while (param_3 != uVar4);
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 drbg_ctr_new(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = CRYPTO_secure_zalloc(0xb0,"providers/implementations/rands/drbg_ctr.c",0x271);
  uVar3 = _UNK_00101cb8;
  uVar2 = __LC9;
  if (lVar4 != 0) {
    *(undefined4 *)(lVar4 + 0x30) = 1;
    *(long *)(param_1 + 0xf0) = lVar4;
    uVar1 = *(ulong *)(lVar4 + 0x28);
    *(undefined8 *)(param_1 + 0x80) = uVar2;
    *(undefined8 *)(param_1 + 0x88) = uVar3;
    uVar3 = _UNK_00101cc8;
    uVar2 = __LC10;
    *(undefined8 *)(param_1 + 0xb0) = 0x7fffffff;
    *(undefined8 *)(param_1 + 0x90) = uVar2;
    *(undefined8 *)(param_1 + 0x98) = uVar3;
    uVar2 = _UNK_00101ca8;
    *(undefined8 *)(param_1 + 0xa0) = __LC7;
    *(undefined8 *)(param_1 + 0xa8) = uVar2;
    if (uVar1 != 0) {
      *(ulong *)(param_1 + 0x88) = uVar1;
      *(ulong *)(param_1 + 0x98) = uVar1 >> 1;
    }
    return 1;
  }
  return 0;
}



undefined4 drbg_ctr_uninstantiate_wrapper(long *param_1)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((*param_1 != 0) && (iVar2 = CRYPTO_THREAD_write_lock(), iVar2 == 0)) {
    return 0;
  }
  lVar1 = param_1[0x1e];
  OPENSSL_cleanse((void *)(lVar1 + 0x34),0x20);
  OPENSSL_cleanse((void *)(lVar1 + 0x54),0x10);
  OPENSSL_cleanse((void *)(lVar1 + 100),0x10);
  OPENSSL_cleanse((void *)(lVar1 + 0x80),0x30);
  *(undefined8 *)(lVar1 + 0x78) = 0;
  uVar3 = ossl_prov_drbg_uninstantiate(param_1);
  if (*param_1 != 0) {
    CRYPTO_THREAD_unlock();
  }
  return uVar3;
}



undefined8 ctr_BCC_update(long param_1,undefined8 *param_2,ulong param_3)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long in_FS_OFFSET;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 != (undefined8 *)0x0) && (param_3 != 0)) {
    lVar6 = *(long *)(param_1 + 0x78);
    if ((lVar6 == 0) || (uVar7 = 0x10 - lVar6, param_3 < uVar7)) {
      if (0xf < param_3) goto LAB_00100cb2;
    }
    else {
      memcpy((void *)(param_1 + 100 + lVar6),param_2,uVar7);
      local_78 = *(undefined8 *)(param_1 + 100);
      uStack_70 = *(undefined8 *)(param_1 + 0x6c);
      uVar4 = 0x20;
      if (*(long *)(param_1 + 0x28) != 0x10) {
        uVar4 = 0x30;
        local_58 = local_78;
        uStack_50 = uStack_70;
      }
      local_68 = local_78;
      uStack_60 = uStack_70;
      iVar2 = ctr_BCC_block(param_1,param_1 + 0x80,&local_78,uVar4);
      if (iVar2 == 0) {
LAB_00100ce9:
        uVar4 = 0;
        goto LAB_00100ceb;
      }
      *(undefined8 *)(param_1 + 0x78) = 0;
      param_2 = (undefined8 *)((long)param_2 + uVar7);
      for (param_3 = lVar6 + -0x10 + param_3; 0xf < param_3; param_3 = param_3 - 0x10) {
LAB_00100cb2:
        local_78 = *param_2;
        uStack_70 = param_2[1];
        uVar4 = 0x20;
        if (*(long *)(param_1 + 0x28) != 0x10) {
          uVar4 = 0x30;
          local_58 = local_78;
          uStack_50 = uStack_70;
        }
        local_68 = local_78;
        uStack_60 = uStack_70;
        iVar2 = ctr_BCC_block(param_1,param_1 + 0x80,&local_78,uVar4);
        if (iVar2 == 0) goto LAB_00100ce9;
        param_2 = param_2 + 2;
      }
      if (param_3 == 0) goto LAB_00100dad;
      lVar6 = *(long *)(param_1 + 0x78);
    }
    puVar1 = (undefined8 *)(param_1 + 100 + lVar6);
    uVar3 = (uint)param_3;
    uVar7 = param_3 & 0xffffffff;
    if (uVar3 < 8) {
      if ((param_3 & 4) == 0) {
        if ((uVar3 != 0) && (*(undefined1 *)puVar1 = *(undefined1 *)param_2, (param_3 & 2) != 0)) {
          *(undefined2 *)((long)puVar1 + (uVar7 - 2)) = *(undefined2 *)((long)param_2 + (uVar7 - 2))
          ;
        }
      }
      else {
        *(undefined4 *)puVar1 = *(undefined4 *)param_2;
        *(undefined4 *)((long)puVar1 + (uVar7 - 4)) = *(undefined4 *)((long)param_2 + (uVar7 - 4));
      }
    }
    else {
      *puVar1 = *param_2;
      *(undefined8 *)((long)puVar1 + ((param_3 & 0xffffffff) - 8)) =
           *(undefined8 *)((long)param_2 + ((param_3 & 0xffffffff) - 8));
      lVar6 = (long)puVar1 - ((ulong)(puVar1 + 1) & 0xfffffffffffffff8);
      uVar3 = uVar3 + (int)lVar6 & 0xfffffff8;
      if (7 < uVar3) {
        uVar7 = 0;
        do {
          uVar5 = (int)uVar7 + 8;
          *(undefined8 *)(((ulong)(puVar1 + 1) & 0xfffffffffffffff8) + uVar7) =
               *(undefined8 *)((long)param_2 + (uVar7 - lVar6));
          uVar7 = (ulong)uVar5;
        } while (uVar5 < uVar3);
      }
    }
    *(long *)(param_1 + 0x78) = *(long *)(param_1 + 0x78) + param_3;
  }
LAB_00100dad:
  uVar4 = 1;
LAB_00100ceb:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool ctr_update(long param_1,long param_2,long param_3,long param_4,undefined8 param_5,long param_6,
               undefined8 param_7)

{
  uchar *key;
  undefined1 (*pauVar1) [16];
  uchar *key_00;
  byte bVar2;
  undefined8 *puVar3;
  size_t __n;
  uint uVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  undefined8 uVar8;
  byte *pbVar9;
  long lVar10;
  long in_FS_OFFSET;
  bool bVar11;
  undefined8 local_f8;
  int local_e0;
  int local_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  uchar local_a8 [8];
  undefined8 auStack_a0 [5];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [24];
  long local_40;
  
  puVar3 = *(undefined8 **)(param_1 + 0xf0);
  local_d8 = *(undefined8 *)((long)puVar3 + 0x54);
  uStack_d0 = *(undefined8 *)((long)puVar3 + 0x5c);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_e0 = 0x10;
  uVar4 = 1;
  pbVar7 = (byte *)((long)puVar3 + 99);
  do {
    bVar2 = *pbVar7;
    pbVar9 = pbVar7 + -1;
    *pbVar7 = (byte)(uVar4 + bVar2);
    uVar4 = uVar4 + bVar2 >> 8;
    pbVar7 = pbVar9;
  } while ((byte *)((long)puVar3 + 0x53) != pbVar9);
  local_c8 = *(undefined8 *)((long)puVar3 + 0x54);
  uStack_c0 = *(undefined8 *)((long)puVar3 + 0x5c);
  iVar6 = 0x20;
  if (puVar3[5] != 0x10) {
    uVar4 = 1;
    pbVar7 = (byte *)((long)puVar3 + 99);
    do {
      bVar2 = *pbVar7;
      pbVar9 = pbVar7 + -1;
      *pbVar7 = (byte)(uVar4 + bVar2);
      uVar4 = uVar4 + bVar2 >> 8;
      pbVar7 = pbVar9;
    } while (pbVar9 != (byte *)((long)puVar3 + 0x53));
    local_b8 = *(undefined8 *)((long)puVar3 + 0x54);
    uStack_b0 = *(undefined8 *)((long)puVar3 + 0x5c);
    iVar6 = 0x30;
  }
  iVar5 = EVP_CipherUpdate((EVP_CIPHER_CTX *)*puVar3,local_a8,&local_e0,(uchar *)&local_d8,iVar6);
  if ((iVar5 == 0) || (local_e0 != iVar6)) goto LAB_00100f3d;
  __n = puVar3[5];
  key = (uchar *)((long)puVar3 + 0x34);
  memcpy(key,local_a8,__n);
  uVar8 = *(undefined8 *)((long)auStack_a0 + __n);
  *(undefined8 *)((long)puVar3 + 0x54) = *(undefined8 *)(local_a8 + __n);
  *(undefined8 *)((long)puVar3 + 0x5c) = uVar8;
  if (*(int *)(puVar3 + 6) == 0) {
    ctr_XOR(puVar3,param_2,param_3);
    ctr_XOR(puVar3,param_4,param_5);
LAB_001011fa:
    iVar6 = EVP_CipherInit_ex((EVP_CIPHER_CTX *)*puVar3,(EVP_CIPHER *)0x0,(ENGINE *)0x0,key,
                              (uchar *)0x0,-1);
    if (iVar6 != 0) {
      iVar6 = EVP_CipherInit_ex((EVP_CIPHER_CTX *)puVar3[1],(EVP_CIPHER *)0x0,(ENGINE *)0x0,key,
                                (uchar *)0x0,-1);
      bVar11 = iVar6 != 0;
      goto LAB_00100f3f;
    }
  }
  else {
    if ((param_6 == 0 && param_4 == 0) && param_2 == 0) {
LAB_001011ba:
      if (param_3 != 0) {
        ctr_XOR(puVar3,puVar3 + 0x10,*(undefined8 *)(param_1 + 0xe0));
      }
      goto LAB_001011fa;
    }
    key_00 = (uchar *)(puVar3 + 0x10);
    uVar8 = 0x30;
    if (__n == 0x10) {
      uVar8 = 0x20;
    }
    local_78 = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(puVar3 + 0x10) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(puVar3 + 0x12) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(puVar3 + 0x14) = (undefined1  [16])0x0;
    local_dc = 0x10;
    local_68._4_12_ = SUB1612((undefined1  [16])0x0,4);
    local_68._0_4_ = 0x1000000;
    local_58._4_12_ = SUB1612((undefined1  [16])0x0,4);
    local_58._0_4_ = 0x2000000;
    iVar6 = ctr_BCC_block(puVar3,key_00,local_78,uVar8);
    if (iVar6 != 0) {
      lVar10 = 0;
      if (param_2 != 0) {
        lVar10 = param_3;
      }
      uVar4 = (uint)lVar10;
      if (param_6 == 0) {
        param_7 = 0;
      }
      else {
        uVar4 = uVar4 + (int)param_7;
      }
      if (param_4 == 0) {
        local_f8 = 0;
      }
      else {
        uVar4 = uVar4 + (int)param_5;
        local_f8 = param_5;
      }
      *(uint *)((long)puVar3 + 100) =
           uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
      *(undefined2 *)(puVar3 + 0xd) = 0;
      *(undefined1 *)((long)puVar3 + 0x6a) = 0;
      puVar3[0xf] = 8;
      *(char *)((long)puVar3 + 0x6b) = *(char *)(puVar3 + 5) + '\x10';
      iVar6 = ctr_BCC_update(puVar3,param_2);
      if ((((iVar6 != 0) && (iVar6 = ctr_BCC_update(puVar3,param_6,param_7), iVar6 != 0)) &&
          (iVar6 = ctr_BCC_update(puVar3,param_4,local_f8), iVar6 != 0)) &&
         (iVar6 = ctr_BCC_update(puVar3,&c80_0,1), iVar6 != 0)) {
        lVar10 = puVar3[0xf];
        if (lVar10 != 0) {
          memset((void *)((long)puVar3 + lVar10 + 100),0,0x10 - lVar10);
          pauVar1 = (undefined1 (*) [16])((long)puVar3 + 100);
          local_68 = *pauVar1;
          local_78 = *pauVar1;
          iVar6 = 2;
          if (puVar3[5] != 0x10) {
            iVar6 = 3;
            local_58._0_16_ = *pauVar1;
          }
          iVar6 = ctr_BCC_block(puVar3,key_00,local_78,iVar6 << 4);
          if (iVar6 == 0) goto LAB_00100f3d;
        }
        iVar6 = EVP_CipherInit_ex((EVP_CIPHER_CTX *)*puVar3,(EVP_CIPHER *)0x0,(ENGINE *)0x0,key_00,
                                  (uchar *)0x0,-1);
        if (iVar6 != 0) {
          iVar6 = EVP_CipherUpdate((EVP_CIPHER_CTX *)*puVar3,key_00,&local_dc,key_00 + puVar3[5],
                                   0x10);
          if ((iVar6 != 0) && (local_dc == 0x10)) {
            iVar6 = EVP_CipherUpdate((EVP_CIPHER_CTX *)*puVar3,(uchar *)(puVar3 + 0x12),&local_dc,
                                     key_00,0x10);
            if (((iVar6 != 0) && (local_dc == 0x10)) &&
               ((puVar3[5] == 0x10 ||
                ((iVar6 = EVP_CipherUpdate((EVP_CIPHER_CTX *)*puVar3,(uchar *)(puVar3 + 0x14),
                                           &local_dc,(uchar *)(puVar3 + 0x12),0x10), iVar6 != 0 &&
                 (local_dc == 0x10)))))) goto LAB_001011ba;
          }
        }
      }
    }
  }
LAB_00100f3d:
  bVar11 = false;
LAB_00100f3f:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar11;
}



undefined1  [16]
drbg_ctr_reseed(long param_1,long param_2,ulong param_3,undefined8 param_4,undefined8 param_5)

{
  byte bVar1;
  long lVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  
  if (param_2 != 0) {
    lVar2 = *(long *)(param_1 + 0xf0);
    uVar4 = 1;
    pbVar6 = (byte *)(lVar2 + 99);
    do {
      bVar1 = *pbVar6;
      pbVar7 = pbVar6 + -1;
      *pbVar6 = (byte)(uVar4 + bVar1);
      uVar4 = uVar4 + bVar1 >> 8;
      pbVar6 = pbVar7;
    } while (pbVar7 != (byte *)(lVar2 + 0x53));
    iVar5 = ctr_update(param_1,param_2,param_3,param_4,param_5,0);
    return ZEXT116(iVar5 != 0);
  }
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_3;
  return auVar3 << 0x40;
}



undefined1  [16]
drbg_ctr_instantiate
          (long param_1,long param_2,ulong param_3,undefined8 param_4,undefined8 param_5,
          undefined8 param_6,undefined8 param_7)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  int iVar4;
  uint uVar5;
  ulong extraout_RDX;
  byte *pbVar6;
  byte *pbVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  
  puVar2 = *(undefined8 **)(param_1 + 0xf0);
  uVar8 = param_3;
  if (param_2 != 0) {
    *(undefined1 (*) [16])((long)puVar2 + 0x34) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])((long)puVar2 + 0x44) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])((long)puVar2 + 0x54) = (undefined1  [16])0x0;
    iVar4 = EVP_CipherInit_ex((EVP_CIPHER_CTX *)*puVar2,(EVP_CIPHER *)0x0,(ENGINE *)0x0,
                              (uchar *)((long)puVar2 + 0x34),(uchar *)0x0,-1);
    uVar8 = extraout_RDX;
    if (iVar4 != 0) {
      uVar5 = 1;
      pbVar6 = (byte *)((long)puVar2 + 99);
      do {
        bVar1 = *pbVar6;
        pbVar7 = pbVar6 + -1;
        *pbVar6 = (byte)(uVar5 + bVar1);
        uVar5 = uVar5 + bVar1 >> 8;
        pbVar6 = pbVar7;
      } while (pbVar7 != (byte *)((long)puVar2 + 0x53));
      iVar4 = ctr_update(param_1,param_2,param_3,param_6,param_7,param_4);
      auVar9._1_7_ = 0;
      auVar9[0] = iVar4 != 0;
      auVar9._8_8_ = param_5;
      return auVar9;
    }
  }
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar8;
  return auVar3 << 0x40;
}



bool drbg_ctr_generate(long param_1,uchar *param_2,size_t param_3,long param_4,long param_5)

{
  byte bVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  byte *pbVar8;
  uint uVar9;
  byte *pbVar10;
  byte *pbVar11;
  long in_FS_OFFSET;
  bool bVar12;
  long local_58;
  int local_44;
  long local_40;
  
  lVar2 = *(long *)(param_1 + 0xf0);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_4 == 0) || (param_5 == 0)) {
    param_5 = 0;
    local_58 = param_4;
  }
  else {
    uVar3 = 1;
    pbVar8 = (byte *)(lVar2 + 99);
    do {
      bVar1 = *pbVar8;
      pbVar10 = pbVar8 + -1;
      *pbVar8 = (byte)(uVar3 + bVar1);
      uVar3 = uVar3 + bVar1 >> 8;
      pbVar8 = pbVar10;
    } while (pbVar10 != (byte *)(lVar2 + 0x53));
    iVar4 = ctr_update(param_1,param_4,param_5,0,0,0,0);
    if (iVar4 == 0) {
LAB_001015a8:
      bVar12 = false;
      goto LAB_0010157e;
    }
    bVar12 = *(int *)(lVar2 + 0x30) != 0;
    if (bVar12) {
      param_5 = 1;
    }
    local_58 = 0;
    if (!bVar12) {
      local_58 = param_4;
    }
  }
  pbVar10 = (byte *)(lVar2 + 0x53);
  uVar3 = 1;
  pbVar8 = (byte *)(lVar2 + 99);
  do {
    bVar1 = *pbVar8;
    pbVar11 = pbVar8 + -1;
    *pbVar8 = (byte)(uVar3 + bVar1);
    uVar3 = uVar3 + bVar1 >> 8;
    pbVar8 = pbVar11;
  } while (pbVar11 != pbVar10);
  if (param_3 == 0) {
    uVar3 = 1;
    pbVar8 = (byte *)(lVar2 + 99);
    do {
      bVar1 = *pbVar8;
      pbVar11 = pbVar8 + -1;
      *pbVar8 = (byte)(uVar3 + bVar1);
      uVar3 = uVar3 + bVar1 >> 8;
      pbVar8 = pbVar11;
    } while (pbVar11 != pbVar10);
  }
  else {
    memset(param_2,0,param_3);
    do {
      iVar4 = EVP_CipherInit_ex(*(EVP_CIPHER_CTX **)(lVar2 + 8),(EVP_CIPHER *)0x0,(ENGINE *)0x0,
                                (uchar *)0x0,(uchar *)(lVar2 + 0x54),-1);
      if (iVar4 == 0) goto LAB_001015a8;
      uVar3 = *(uint *)(lVar2 + 0x60);
      uVar7 = 0x40000000;
      if (param_3 < 0x40000001) {
        uVar7 = param_3;
      }
      uVar9 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
      iVar4 = (int)uVar7;
      uVar3 = iVar4 + 0xf >> 4;
      uVar6 = uVar3 + uVar9;
      if (CARRY4(uVar3,uVar9)) {
        uVar3 = 1;
        if (uVar6 != 0) {
          iVar4 = uVar9 * -0x10;
        }
        pbVar8 = (byte *)(lVar2 + 0x5f);
        do {
          bVar1 = *pbVar8;
          pbVar11 = pbVar8 + -1;
          *pbVar8 = (byte)(uVar3 + bVar1);
          uVar3 = uVar3 + bVar1 >> 8;
          pbVar8 = pbVar11;
        } while (pbVar11 != pbVar10);
        uVar6 = 0;
      }
      *(uint *)(lVar2 + 0x60) =
           uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
      iVar5 = EVP_CipherUpdate(*(EVP_CIPHER_CTX **)(lVar2 + 8),param_2,&local_44,param_2,iVar4);
      if ((iVar5 == 0) || (local_44 != iVar4)) goto LAB_001015a8;
      param_2 = param_2 + iVar4;
      param_3 = param_3 - (long)iVar4;
    } while (param_3 != 0);
  }
  iVar4 = ctr_update(param_1,local_58,param_5,0,0,0,0);
  bVar12 = iVar4 != 0;
LAB_0010157e:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar12;
}


