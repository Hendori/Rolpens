
undefined1 * hmac_gettable_ctx_params(void)

{
  return known_gettable_ctx_params;
}



undefined1 * hmac_settable_ctx_params(void)

{
  return known_settable_ctx_params;
}



int hmac_setkey(long param_1,void *param_2,size_t param_3)

{
  int iVar1;
  void *__dest;
  EVP_MD *md;
  ENGINE *impl;
  size_t sVar2;
  
  if (*(long *)(param_1 + 0x28) != 0) {
    CRYPTO_secure_clear_free
              (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
               "providers/implementations/macs/hmac_prov.c",0xb5);
  }
  sVar2 = 1;
  if (param_3 != 0) {
    sVar2 = param_3;
  }
  __dest = (void *)CRYPTO_secure_malloc(sVar2,"providers/implementations/macs/hmac_prov.c",0xb7);
  *(void **)(param_1 + 0x28) = __dest;
  if (__dest != (void *)0x0) {
    memcpy(__dest,param_2,param_3);
    *(size_t *)(param_1 + 0x30) = param_3;
    md = (EVP_MD *)ossl_prov_digest_md(param_1 + 0x10);
    impl = (ENGINE *)ossl_prov_digest_engine(param_1 + 0x10);
    iVar1 = HMAC_Init_ex(*(HMAC_CTX **)(param_1 + 8),param_2,(int)param_3,md,impl);
    return iVar1;
  }
  return 0;
}



bool hmac_set_ctx_params(undefined8 *param_1,long *param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = ossl_prov_ctx_get0_libctx(*param_1);
  if ((param_2 != (long *)0x0) && (*param_2 != 0)) {
    iVar1 = ossl_prov_digest_load_from_params(param_1 + 2,param_2,uVar2);
    if (iVar1 == 0) {
      return false;
    }
    lVar3 = OSSL_PARAM_locate_const(param_2,&_LC1);
    if (lVar3 != 0) {
      if (*(int *)(lVar3 + 8) != 5) {
        return false;
      }
      iVar1 = hmac_setkey(param_1,*(undefined8 *)(lVar3 + 0x10),*(undefined8 *)(lVar3 + 0x18));
      if (iVar1 == 0) {
        return false;
      }
    }
    lVar3 = OSSL_PARAM_locate_const(param_2,"tls-data-size");
    if (lVar3 != 0) {
      iVar1 = OSSL_PARAM_get_size_t(lVar3,param_1 + 7);
      return iVar1 != 0;
    }
  }
  return true;
}



ulong hmac_get_ctx_params(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  
  lVar3 = OSSL_PARAM_locate(param_2,&_LC3);
  if (lVar3 != 0) {
    uVar4 = HMAC_size(*(undefined8 *)(param_1 + 8));
    uVar5 = OSSL_PARAM_set_size_t(lVar3,uVar4);
    if ((int)uVar5 == 0) {
      return uVar5;
    }
  }
  lVar3 = OSSL_PARAM_locate(param_2,"block-size");
  uVar5 = 1;
  if (lVar3 != 0) {
    lVar6 = ossl_prov_digest_md(param_1 + 0x10);
    uVar1 = 0;
    if (lVar6 != 0) {
      uVar1 = EVP_MD_get_block_size(lVar6,0);
    }
    iVar2 = OSSL_PARAM_set_int(lVar3,uVar1);
    uVar5 = (ulong)(iVar2 != 0);
  }
  return uVar5;
}



undefined8 hmac_final(long param_1,uchar *param_2,size_t *param_3)

{
  size_t __n;
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  uint local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = ossl_prov_is_running();
  if (iVar1 == 0) {
LAB_00100288:
    uVar2 = 0;
  }
  else {
    if (*(long *)(param_1 + 0x38) == 0) {
      iVar1 = HMAC_Final(*(HMAC_CTX **)(param_1 + 8),param_2,&local_24);
      if (iVar1 == 0) goto LAB_00100288;
      *param_3 = (ulong)local_24;
    }
    else {
      __n = *(size_t *)(param_1 + 0x98);
      if (__n == 0) goto LAB_00100288;
      if (param_3 != (size_t *)0x0) {
        *param_3 = __n;
      }
      memcpy(param_2,(void *)(param_1 + 0x54),__n);
    }
    uVar2 = 1;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 * hmac_new(undefined8 param_1)

{
  int iVar1;
  undefined8 *ptr;
  long lVar2;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    ptr = (undefined8 *)CRYPTO_zalloc(0xa0,"providers/implementations/macs/hmac_prov.c",0x53);
    if (ptr != (undefined8 *)0x0) {
      lVar2 = HMAC_CTX_new();
      ptr[1] = lVar2;
      if (lVar2 != 0) {
        *ptr = param_1;
        return ptr;
      }
    }
    CRYPTO_free(ptr);
  }
  return (undefined8 *)0x0;
}



int hmac_update(long param_1,uchar *param_2,size_t param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 uVar5;
  
  uVar1 = *(ulong *)(param_1 + 0x38);
  if (uVar1 == 0) {
    iVar4 = HMAC_Update(*(HMAC_CTX **)(param_1 + 8),param_2,param_3);
    return iVar4;
  }
  if (*(int *)(param_1 + 0x50) == 0) {
    iVar4 = 0;
    if (param_3 == 0xd) {
      *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)param_2;
      uVar2 = *(undefined8 *)(param_2 + 5);
      *(undefined4 *)(param_1 + 0x50) = 1;
      *(undefined8 *)(param_1 + 0x45) = uVar2;
      iVar4 = 1;
    }
  }
  else {
    iVar4 = 0;
    if (param_3 <= uVar1) {
      uVar2 = *(undefined8 *)(param_1 + 0x30);
      uVar3 = *(undefined8 *)(param_1 + 0x28);
      uVar5 = ossl_prov_digest_md(param_1 + 0x10);
      iVar4 = ssl3_cbc_digest_record
                        (uVar5,param_1 + 0x54,param_1 + 0x98,param_1 + 0x40,param_2,param_3,uVar1,
                         uVar3,uVar2,0);
      return iVar4;
    }
  }
  return iVar4;
}



void hmac_free(void *param_1)

{
  if (param_1 != (void *)0x0) {
    HMAC_CTX_free(*(undefined8 *)((long)param_1 + 8));
    ossl_prov_digest_reset((long)param_1 + 0x10);
    CRYPTO_secure_clear_free
              (*(undefined8 *)((long)param_1 + 0x28),*(undefined8 *)((long)param_1 + 0x30),
               "providers/implementations/macs/hmac_prov.c",0x65);
    CRYPTO_free(param_1);
    return;
  }
  return;
}



undefined8 * hmac_dup(undefined8 *param_1)

{
  HMAC_CTX *sctx;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  int iVar15;
  undefined8 *ptr;
  HMAC_CTX *dctx;
  void *__dest;
  long lVar16;
  
  iVar15 = ossl_prov_is_running();
  if ((iVar15 == 0) || (iVar15 = ossl_prov_is_running(), iVar15 == 0)) {
    return (undefined8 *)0x0;
  }
  ptr = (undefined8 *)CRYPTO_zalloc(0xa0,"providers/implementations/macs/hmac_prov.c",0x53);
  if (ptr != (undefined8 *)0x0) {
    dctx = (HMAC_CTX *)HMAC_CTX_new();
    if (dctx != (HMAC_CTX *)0x0) {
      uVar1 = *param_1;
      uVar2 = param_1[1];
      uVar3 = param_1[6];
      uVar4 = param_1[7];
      ptr[5] = 0;
      uVar5 = param_1[0x12];
      uVar6 = param_1[0x13];
      uVar7 = param_1[8];
      uVar8 = param_1[9];
      uVar9 = param_1[10];
      uVar10 = param_1[0xb];
      uVar11 = param_1[0xc];
      uVar12 = param_1[0xd];
      *ptr = uVar1;
      ptr[1] = uVar2;
      uVar1 = param_1[0xe];
      uVar2 = param_1[0xf];
      uVar13 = param_1[0x10];
      uVar14 = param_1[0x11];
      ptr[0x12] = uVar5;
      ptr[0x13] = uVar6;
      ptr[1] = dctx;
      sctx = (HMAC_CTX *)param_1[1];
      ptr[6] = uVar3;
      ptr[7] = uVar4;
      ptr[8] = uVar7;
      ptr[9] = uVar8;
      ptr[10] = uVar9;
      ptr[0xb] = uVar10;
      ptr[0xc] = uVar11;
      ptr[0xd] = uVar12;
      ptr[0xe] = uVar1;
      ptr[0xf] = uVar2;
      ptr[0x10] = uVar13;
      ptr[0x11] = uVar14;
      *(undefined1 (*) [16])(ptr + 2) = (undefined1  [16])0x0;
      ptr[4] = 0;
      iVar15 = HMAC_CTX_copy(dctx,sctx);
      if ((iVar15 != 0) && (iVar15 = ossl_prov_digest_copy(ptr + 2,param_1 + 2), iVar15 != 0)) {
        if (param_1[5] == 0) {
          return ptr;
        }
        lVar16 = param_1[6];
        if (lVar16 == 0) {
          lVar16 = 1;
        }
        __dest = (void *)CRYPTO_secure_malloc
                                   (lVar16,"providers/implementations/macs/hmac_prov.c",0x83);
        ptr[5] = __dest;
        if (__dest != (void *)0x0) {
          memcpy(__dest,(void *)param_1[5],param_1[6]);
          return ptr;
        }
      }
      HMAC_CTX_free(ptr[1]);
      ossl_prov_digest_reset(ptr + 2);
      CRYPTO_secure_clear_free(ptr[5],ptr[6],"providers/implementations/macs/hmac_prov.c",0x65);
      CRYPTO_free(ptr);
      return (undefined8 *)0x0;
    }
    ptr[1] = 0;
  }
  CRYPTO_free(ptr);
  return (undefined8 *)0x0;
}



int hmac_init(undefined8 *param_1,long param_2,undefined8 param_3,long *param_4)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = ossl_prov_ctx_get0_libctx(*param_1);
  if ((param_4 != (long *)0x0) && (*param_4 != 0)) {
    iVar1 = ossl_prov_digest_load_from_params(param_1 + 2,param_4,uVar2);
    if (iVar1 == 0) {
      return 0;
    }
    lVar3 = OSSL_PARAM_locate_const(param_4,&_LC1);
    if (lVar3 != 0) {
      if (*(int *)(lVar3 + 8) != 5) {
        return 0;
      }
      iVar1 = hmac_setkey(param_1,*(undefined8 *)(lVar3 + 0x10),*(undefined8 *)(lVar3 + 0x18));
      if (iVar1 == 0) {
        return 0;
      }
    }
    lVar3 = OSSL_PARAM_locate_const(param_4);
    if ((lVar3 != 0) && (iVar1 = OSSL_PARAM_get_size_t(lVar3), iVar1 == 0)) {
      return 0;
    }
  }
  if (param_2 == 0) {
    iVar1 = HMAC_Init_ex((HMAC_CTX *)param_1[1],(void *)0x0,0,(EVP_MD *)0x0,(ENGINE *)0x0);
    return iVar1;
  }
  iVar1 = hmac_setkey(param_1,param_2,param_3);
  return iVar1;
}


