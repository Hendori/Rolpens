
undefined8 add_bytes(long param_1,long param_2,long param_3,long param_4)

{
  byte *pbVar1;
  byte bVar2;
  long lVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  
  pbVar5 = (byte *)(param_3 + -1 + param_4);
  pbVar1 = (byte *)(*(long *)(param_1 + 0xe0) + -1 + param_2);
  if (param_4 != 0) {
    iVar7 = 0;
    pbVar6 = pbVar1;
    do {
      bVar2 = *pbVar5;
      pbVar5 = pbVar5 + -1;
      iVar4 = (uint)*pbVar6 + (uint)bVar2 + iVar7;
      *pbVar6 = (byte)iVar4;
      iVar7 = iVar4 >> 8;
      pbVar6 = pbVar6 + -1;
    } while ((byte *)(param_3 + -1) != pbVar5);
    if (((char)((uint)iVar4 >> 8) != '\0') && (lVar3 = *(long *)(param_1 + 0xe0), lVar3 != param_4))
    {
      pbVar5 = pbVar1 + -param_4;
      do {
        *pbVar5 = *pbVar5 + 1;
        if (*pbVar5 != 0) {
          return 1;
        }
        pbVar5 = pbVar5 + -1;
      } while (pbVar1 + -lVar3 != pbVar5);
    }
  }
  return 1;
}



undefined1 * drbg_hash_gettable_ctx_params(void)

{
  return known_gettable_ctx_params_1;
}



undefined1 * drbg_hash_settable_ctx_params(void)

{
  return known_settable_ctx_params_0;
}



undefined4 drbg_hash_verify_zeroization(long *param_1)

{
  long lVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  long lVar5;
  
  lVar1 = param_1[0x1e];
  lVar5 = *param_1;
  if (lVar5 != 0) {
    iVar2 = CRYPTO_THREAD_read_lock();
    if (iVar2 == 0) {
      return 0;
    }
    lVar5 = *param_1;
  }
  pcVar3 = (char *)(lVar1 + 0x28);
  do {
    if (*pcVar3 != '\0') goto LAB_001000fe;
    pcVar3 = pcVar3 + 1;
  } while (pcVar3 != (char *)(lVar1 + 0x97));
  do {
    if (*pcVar3 != '\0') goto LAB_001000fe;
    pcVar3 = pcVar3 + 1;
  } while (pcVar3 != (char *)(lVar1 + 0x106));
  do {
    if (*pcVar3 != '\0') goto LAB_001000fe;
    pcVar3 = pcVar3 + 1;
  } while (pcVar3 != (char *)(lVar1 + 0x175));
  uVar4 = 1;
LAB_00100100:
  if (lVar5 != 0) {
    CRYPTO_THREAD_unlock();
  }
  return uVar4;
LAB_001000fe:
  uVar4 = 0;
  goto LAB_00100100;
}



undefined4 drbg_hash_get_ctx_params(long *param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  int local_34;
  long local_30;
  
  lVar4 = param_1[0x1e];
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_34 = 0;
  iVar1 = ossl_drbg_get_ctx_params_no_lock(param_1,param_2,&local_34);
  if (iVar1 == 0) {
LAB_00100250:
    uVar2 = 0;
    goto LAB_00100226;
  }
  if (local_34 != 0) {
    uVar2 = 1;
    goto LAB_00100226;
  }
  if (*param_1 != 0) {
    iVar1 = CRYPTO_THREAD_read_lock();
    if (iVar1 == 0) goto LAB_00100250;
  }
  lVar3 = OSSL_PARAM_locate(param_2,"digest");
  if (lVar3 == 0) {
LAB_00100201:
    uVar2 = ossl_drbg_get_ctx_params(param_1,param_2);
  }
  else {
    lVar4 = ossl_prov_digest_md(lVar4);
    uVar2 = 0;
    if (lVar4 != 0) {
      uVar5 = EVP_MD_get0_name(lVar4);
      iVar1 = OSSL_PARAM_set_utf8_string(lVar3,uVar5);
      if (iVar1 != 0) goto LAB_00100201;
    }
  }
  if (*param_1 != 0) {
    CRYPTO_THREAD_unlock();
  }
LAB_00100226:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void drbg_hash_reseed_wrapper(void)

{
  ossl_prov_drbg_reseed();
  return;
}



void drbg_hash_generate_wrapper(void)

{
  ossl_prov_drbg_generate();
  return;
}



void drbg_hash_uninstantiate(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0xf0);
  OPENSSL_cleanse((void *)(lVar1 + 0x28),0x6f);
  OPENSSL_cleanse((void *)(lVar1 + 0x97),0x6f);
  OPENSSL_cleanse((void *)(lVar1 + 0x106),0x6f);
  ossl_prov_drbg_uninstantiate(param_1);
  return;
}



void drbg_hash_free(long param_1)

{
  long lVar1;
  
  if ((param_1 != 0) && (lVar1 = *(long *)(param_1 + 0xf0), lVar1 != 0)) {
    EVP_MD_CTX_free(*(undefined8 *)(lVar1 + 0x18));
    ossl_prov_digest_reset(lVar1);
    CRYPTO_secure_clear_free(lVar1,0x178,"providers/implementations/rands/drbg_hash.c",0x1cd);
  }
  ossl_rand_drbg_free(param_1);
  return;
}



void drbg_hash_new_wrapper(void)

{
  ossl_rand_drbg_new();
  return;
}



bool add_hash_to_v(long param_1,undefined1 param_2,void *param_3,size_t param_4)

{
  long lVar1;
  EVP_MD_CTX *ctx;
  int iVar2;
  EVP_MD *type;
  undefined1 local_3c [12];
  
  lVar1 = *(long *)(param_1 + 0xf0);
  ctx = *(EVP_MD_CTX **)(lVar1 + 0x18);
  local_3c[0] = param_2;
  type = (EVP_MD *)ossl_prov_digest_md(lVar1);
  iVar2 = EVP_DigestInit_ex(ctx,type,(ENGINE *)0x0);
  if ((iVar2 != 0) && (iVar2 = EVP_DigestUpdate(ctx,local_3c,1), iVar2 != 0)) {
    iVar2 = EVP_DigestUpdate(ctx,(void *)(lVar1 + 0x28),*(size_t *)(param_1 + 0xe0));
    if ((iVar2 != 0) &&
       ((param_3 == (void *)0x0 || (iVar2 = EVP_DigestUpdate(ctx,param_3,param_4), iVar2 != 0)))) {
      iVar2 = EVP_DigestFinal(ctx,(uchar *)(lVar1 + 0x106),(uint *)0x0);
      if (iVar2 != 0) {
        iVar2 = add_bytes(param_1,(void *)(lVar1 + 0x28),(uchar *)(lVar1 + 0x106),
                          *(undefined8 *)(lVar1 + 0x20));
        return iVar2 != 0;
      }
    }
  }
  return false;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 drbg_hash_new(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = CRYPTO_secure_zalloc(0x178,"providers/implementations/rands/drbg_hash.c",0x1aa);
  uVar2 = _UNK_001012b8;
  uVar1 = __LC2;
  if (lVar3 != 0) {
    *(long *)(param_1 + 0xf0) = lVar3;
    *(undefined8 *)(param_1 + 0xe0) = 0x6f;
    *(undefined8 *)(param_1 + 0x90) = 0x7fffffff;
    *(undefined8 *)(param_1 + 0xb0) = 0x7fffffff;
    *(undefined8 *)(param_1 + 0x80) = 0x10000;
    *(undefined8 *)(param_1 + 0xa0) = uVar1;
    *(undefined8 *)(param_1 + 0xa8) = uVar2;
    return 1;
  }
  return 0;
}



undefined8 drbg_hash_set_ctx_params_locked(long param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  
  lVar1 = *(long *)(param_1 + 0xf0);
  uVar3 = ossl_prov_ctx_get0_libctx(*(undefined8 *)(param_1 + 8));
  ERR_set_mark();
  lVar4 = OSSL_PARAM_locate_const(param_2,"provider-name");
  if (((lVar4 != 0) && (*(int *)(lVar4 + 8) == 4)) &&
     (lVar4 = ossl_provider_find(uVar3,*(undefined8 *)(lVar4 + 0x10),1), lVar4 != 0)) {
    lVar6 = OSSL_PARAM_locate_const(param_2,"digest");
    if (lVar6 == 0) {
      ossl_provider_free(lVar4);
      ERR_clear_last_mark();
      goto LAB_00100531;
    }
    if ((*(int *)(lVar6 + 8) == 4) &&
       (lVar6 = evp_digest_fetch_from_prov(lVar4,*(undefined8 *)(lVar6 + 0x10),0), lVar6 != 0)) {
      EVP_MD_free(0);
      ossl_provider_free(lVar4);
      ERR_clear_last_mark();
      ossl_prov_digest_set_md(lVar1,lVar6);
      goto LAB_00100531;
    }
    ossl_provider_free(lVar4);
  }
  ERR_pop_to_mark();
  iVar2 = ossl_prov_digest_load_from_params(lVar1,param_2,uVar3);
  if (iVar2 == 0) {
    return 0;
  }
LAB_00100531:
  lVar4 = ossl_prov_digest_md(lVar1);
  if (lVar4 != 0) {
    iVar2 = ossl_drbg_verify_digest(param_1,uVar3,lVar4);
    if ((iVar2 == 0) || (iVar2 = EVP_MD_get_size(lVar4), iVar2 < 1)) {
      return 0;
    }
    uVar5 = (ulong)iVar2;
    *(ulong *)(lVar1 + 0x20) = uVar5;
    uVar7 = (int)(uVar5 >> 3) << 6;
    if (0x100 < uVar7) {
      uVar7 = 0x100;
    }
    *(uint *)(param_1 + 0x78) = uVar7;
    *(ulong *)(param_1 + 0x88) = (ulong)(uVar7 >> 3);
    *(ulong *)(param_1 + 0xe0) = (-(ulong)(uVar5 < 0x21) & 0xffffffffffffffc8) + 0x6f;
    *(ulong *)(param_1 + 0x98) = (ulong)(uVar7 >> 4);
  }
  uVar3 = ossl_drbg_set_ctx_params(param_1,param_2);
  return uVar3;
}



undefined4 drbg_hash_set_ctx_params(long *param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*param_1 != 0) && (iVar1 = CRYPTO_THREAD_write_lock(), iVar1 == 0)) {
    return 0;
  }
  uVar2 = drbg_hash_set_ctx_params_locked(param_1,param_2);
  if (*param_1 != 0) {
    CRYPTO_THREAD_unlock();
  }
  return uVar2;
}



undefined4
drbg_hash_instantiate_wrapper
          (long *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,undefined8 param_5
          ,undefined8 param_6)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*param_1 != 0) && (iVar1 = CRYPTO_THREAD_write_lock(), iVar1 == 0)) {
    return 0;
  }
  iVar1 = ossl_prov_is_running();
  if ((iVar1 == 0) || (iVar1 = drbg_hash_set_ctx_params_locked(param_1,param_6), iVar1 == 0)) {
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



undefined8
hash_df_isra_0(ulong param_1,long param_2,uchar *param_3,char param_4,void *param_5,size_t param_6,
              void *param_7,size_t param_8,void *param_9,size_t param_10)

{
  uchar *md;
  EVP_MD_CTX *ctx;
  uint uVar1;
  int iVar2;
  size_t cnt;
  EVP_MD *type;
  undefined8 uVar3;
  long in_FS_OFFSET;
  char local_46;
  uint local_45;
  char local_41;
  long local_40;
  
  ctx = *(EVP_MD_CTX **)(param_2 + 0x18);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = (int)param_1 * 8;
  local_46 = '\x01';
  local_45 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | (int)param_1 << 0x1b;
  cnt = 5;
  if (param_4 != -1) {
    cnt = 6;
    local_41 = param_4;
  }
  while( true ) {
    type = (EVP_MD *)ossl_prov_digest_md(param_2);
    iVar2 = EVP_DigestInit_ex(ctx,type,(ENGINE *)0x0);
    if ((((iVar2 == 0) || (iVar2 = EVP_DigestUpdate(ctx,&local_46,cnt), iVar2 == 0)) ||
        (iVar2 = EVP_DigestUpdate(ctx,param_5,param_6), iVar2 == 0)) ||
       (((param_7 != (void *)0x0 && (iVar2 = EVP_DigestUpdate(ctx,param_7,param_8), iVar2 == 0)) ||
        ((param_9 != (void *)0x0 && (iVar2 = EVP_DigestUpdate(ctx,param_9,param_10), iVar2 == 0)))))
       ) goto LAB_001008a0;
    if (param_1 < *(ulong *)(param_2 + 0x20)) break;
    iVar2 = EVP_DigestFinal(ctx,param_3,(uint *)0x0);
    if (iVar2 == 0) goto LAB_001008a0;
    param_1 = param_1 - *(long *)(param_2 + 0x20);
    if (param_1 == 0) goto LAB_001008fc;
    local_46 = local_46 + '\x01';
    param_3 = param_3 + *(long *)(param_2 + 0x20);
  }
  md = (uchar *)(param_2 + 0x106);
  iVar2 = EVP_DigestFinal(ctx,md,(uint *)0x0);
  if (iVar2 != 0) {
    memcpy(param_3,md,param_1);
    OPENSSL_cleanse(md,*(size_t *)(param_2 + 0x20));
LAB_001008fc:
    uVar3 = 1;
    goto LAB_001008a2;
  }
LAB_001008a0:
  uVar3 = 0;
LAB_001008a2:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



bool drbg_hash_instantiate
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 0xf0);
  EVP_MD_CTX_free(*(undefined8 *)(lVar1 + 0x18));
  lVar3 = EVP_MD_CTX_new();
  *(long *)(lVar1 + 0x18) = lVar3;
  if (lVar3 != 0) {
    iVar2 = hash_df_isra_0(*(undefined8 *)(param_1 + 0xe0),*(undefined8 *)(param_1 + 0xf0),
                           lVar1 + 0x28,0xff,param_2,param_3,param_4,param_5,param_6,param_7);
    if (iVar2 != 0) {
      iVar2 = hash_df_isra_0(*(undefined8 *)(param_1 + 0xe0),*(undefined8 *)(param_1 + 0xf0),
                             lVar1 + 0x97,0,lVar1 + 0x28,*(undefined8 *)(param_1 + 0xe0),0,0,0,0);
      return iVar2 != 0;
    }
  }
  return false;
}



void drbg_hash_reseed(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5)

{
  void *__dest;
  void *__src;
  long lVar1;
  int iVar2;
  
  lVar1 = *(long *)(param_1 + 0xf0);
  __dest = (void *)(lVar1 + 0x28);
  __src = (void *)(lVar1 + 0x97);
  iVar2 = hash_df_isra_0(*(undefined8 *)(param_1 + 0xe0),lVar1,__src,1,__dest,
                         *(undefined8 *)(param_1 + 0xe0),param_2,param_3,param_4,param_5);
  if (iVar2 != 0) {
    memcpy(__dest,__src,*(size_t *)(param_1 + 0xe0));
    hash_df_isra_0(*(undefined8 *)(param_1 + 0xe0),*(undefined8 *)(param_1 + 0xf0),__src,0,__dest,
                   *(undefined8 *)(param_1 + 0xe0),0,0,0,0);
  }
  return;
}



undefined4 drbg_hash_uninstantiate_wrapper(long *param_1)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((*param_1 != 0) && (iVar2 = CRYPTO_THREAD_write_lock(), iVar2 == 0)) {
    return 0;
  }
  lVar1 = param_1[0x1e];
  OPENSSL_cleanse((void *)(lVar1 + 0x28),0x6f);
  OPENSSL_cleanse((void *)(lVar1 + 0x97),0x6f);
  OPENSSL_cleanse((void *)(lVar1 + 0x106),0x6f);
  uVar3 = ossl_prov_drbg_uninstantiate(param_1);
  if (*param_1 != 0) {
    CRYPTO_THREAD_unlock();
  }
  return uVar3;
}



undefined8 drbg_hash_generate(long param_1,uchar *param_2,ulong param_3,long param_4,long param_5)

{
  uchar *md;
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  undefined8 uVar9;
  EVP_MD *type;
  long lVar10;
  byte *pbVar11;
  long in_FS_OFFSET;
  byte local_45;
  uint local_44;
  long local_40;
  
  lVar4 = *(long *)(param_1 + 0xf0);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = *(uint *)(param_1 + 0xb8);
  local_44 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
  if (*(long *)(lVar4 + 0x18) != 0) {
    lVar10 = lVar4;
    if ((param_4 != 0) && (param_5 != 0)) {
      iVar6 = add_hash_to_v(param_1,2,param_4,param_5);
      if (iVar6 == 0) goto LAB_00100b67;
      lVar10 = *(long *)(param_1 + 0xf0);
    }
    if (param_3 != 0) {
      md = (uchar *)(lVar10 + 0x106);
      memcpy(md,(void *)(lVar10 + 0x28),*(size_t *)(param_1 + 0xe0));
      do {
        type = (EVP_MD *)ossl_prov_digest_md(lVar10);
        iVar6 = EVP_DigestInit_ex(*(EVP_MD_CTX **)(lVar10 + 0x18),type,(ENGINE *)0x0);
        if ((iVar6 == 0) ||
           (iVar6 = EVP_DigestUpdate(*(EVP_MD_CTX **)(lVar10 + 0x18),md,*(size_t *)(param_1 + 0xe0))
           , iVar6 == 0)) goto LAB_00100b67;
        if (param_3 < *(ulong *)(lVar10 + 0x20)) {
          iVar6 = EVP_DigestFinal(*(EVP_MD_CTX **)(lVar10 + 0x18),md,(uint *)0x0);
          if (iVar6 != 0) {
            memcpy(param_2,md,param_3);
            break;
          }
          goto LAB_00100b67;
        }
        iVar6 = EVP_DigestFinal(*(EVP_MD_CTX **)(lVar10 + 0x18),param_2,(uint *)0x0);
        if (iVar6 == 0) goto LAB_00100b67;
        param_3 = param_3 - *(long *)(lVar10 + 0x20);
        if (param_3 == 0) break;
        param_2 = param_2 + *(long *)(lVar10 + 0x20);
        pbVar1 = (byte *)(lVar10 + 0x105 + *(long *)(param_1 + 0xe0));
        bVar2 = *pbVar1;
        *pbVar1 = bVar2 + 1;
        if ((bVar2 + 1 >> 8 != 0) && (lVar5 = *(long *)(param_1 + 0xe0), lVar5 != 1)) {
          pbVar11 = pbVar1 + -1;
          do {
            *pbVar11 = *pbVar11 + 1;
            if (*pbVar11 != 0) break;
            pbVar11 = pbVar11 + -1;
          } while (pbVar11 + (lVar5 - (long)pbVar1) != (byte *)0x0);
        }
      } while( true );
    }
    iVar6 = add_hash_to_v(param_1,3,0,0);
    if ((iVar6 != 0) && (iVar6 = add_bytes(param_1,lVar4 + 0x28,lVar4 + 0x97), iVar6 != 0)) {
      lVar10 = 4;
      iVar6 = 0;
      lVar4 = lVar4 + 0x27 + *(long *)(param_1 + 0xe0);
      do {
        iVar7 = (uint)*(byte *)(lVar4 + -4 + lVar10) + (uint)(&local_45)[lVar10] + iVar6;
        *(char *)(lVar4 + -4 + lVar10) = (char)iVar7;
        iVar6 = iVar7 >> 8;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
      if (((char)((uint)iVar7 >> 8) != '\0') && (lVar10 = *(long *)(param_1 + 0xe0), lVar10 != 4)) {
        pcVar8 = (char *)(lVar4 + -4);
        do {
          *pcVar8 = *pcVar8 + '\x01';
          if (*pcVar8 != '\0') break;
          pcVar8 = pcVar8 + -1;
        } while (pcVar8 + (lVar10 - lVar4) != (char *)0x0);
      }
      uVar9 = 1;
      goto LAB_00100b69;
    }
  }
LAB_00100b67:
  uVar9 = 0;
LAB_00100b69:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar9;
}


