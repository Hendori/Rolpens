
undefined1 * kmac_gettable_ctx_params(void)

{
  return known_gettable_ctx_params;
}



undefined1 * kmac_settable_ctx_params(void)

{
  return known_settable_ctx_params;
}



undefined8
bytepad(undefined1 *param_1,long *param_2,void *param_3,size_t param_4,void *param_5,size_t param_6,
       ulong param_7)

{
  ulong uVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  
  if (param_1 == (undefined1 *)0x0) {
    if (param_2 != (long *)0x0) {
      if (param_5 == (void *)0x0) {
        param_6 = 0;
      }
      uVar1 = (param_7 - 1) + (long)((int)param_4 + 2 + (int)param_6);
      *param_2 = uVar1 - uVar1 % param_7;
      return 1;
    }
    ERR_new();
    ERR_set_debug("providers/implementations/macs/kmac_prov.c",0x260,"bytepad");
    ERR_set_error(0x39,0xc0102,0);
  }
  else if (param_7 < 0x100) {
    *param_1 = 1;
    param_1[1] = (char)param_7;
    pvVar2 = memcpy(param_1 + 2,param_3,param_4);
    pvVar2 = (void *)((long)pvVar2 + param_4);
    if ((param_5 != (void *)0x0) && (param_6 != 0)) {
      pvVar2 = memcpy(pvVar2,param_5,param_6);
      pvVar2 = (void *)((long)pvVar2 + param_6);
    }
    iVar3 = (int)pvVar2 - (int)param_1;
    iVar4 = (int)param_7 * (int)(((param_7 - 1) + (long)iVar3) / param_7);
    if (iVar3 != iVar4) {
      memset(pvVar2,0,(long)(iVar4 - iVar3));
    }
    if (param_2 != (long *)0x0) {
      *param_2 = (long)iVar4;
    }
    return 1;
  }
  return 0;
}



ulong kmac_get_ctx_params(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  lVar3 = OSSL_PARAM_locate(param_2,&_LC1);
  if ((lVar3 != 0) &&
     (uVar4 = OSSL_PARAM_set_size_t(lVar3,*(undefined8 *)(param_1 + 0x28)), (int)uVar4 == 0)) {
    return uVar4;
  }
  lVar3 = OSSL_PARAM_locate(param_2,"block-size");
  uVar4 = 1;
  if (lVar3 != 0) {
    uVar5 = ossl_prov_digest_md(param_1 + 0x10);
    uVar1 = EVP_MD_get_block_size(uVar5);
    iVar2 = OSSL_PARAM_set_int(lVar3,uVar1);
    uVar4 = (ulong)(iVar2 != 0);
  }
  return uVar4;
}



void kmac_update(long param_1,void *param_2,size_t param_3)

{
  EVP_DigestUpdate(*(EVP_MD_CTX **)(param_1 + 8),param_2,param_3);
  return;
}



ulong kmac_final(long param_1,undefined8 param_2,undefined8 *param_3)

{
  EVP_MD_CTX *ctx;
  int iVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  size_t cnt;
  long in_FS_OFFSET;
  undefined1 local_34 [4];
  long local_30;
  
  ctx = *(EVP_MD_CTX **)(param_1 + 8);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = ossl_prov_is_running();
  if ((int)uVar2 == 0) goto LAB_0010028d;
  lVar3 = (long)*(int *)(param_1 + 0x40);
  if (*(int *)(param_1 + 0x40) == 0) {
    uVar2 = *(long *)(param_1 + 0x28) << 3;
    if (uVar2 == 0) {
      cnt = 2;
      uVar6 = 1;
      uVar4 = 1;
      goto LAB_001002c4;
    }
    uVar4 = uVar2;
    uVar6 = 0;
    do {
      uVar5 = uVar6;
      lVar3 = (long)(int)uVar5;
      uVar6 = uVar5 + 1;
      uVar4 = uVar4 >> 8;
      if (uVar4 == 0) break;
    } while (uVar6 < 8);
    uVar4 = (ulong)uVar6;
    cnt = (size_t)(uVar5 + 2);
    if (uVar6 < 4) goto LAB_001002c4;
    ERR_new();
    ERR_set_debug("providers/implementations/macs/kmac_prov.c",0x21a,"right_encode");
    ERR_set_error(0x39,0xca,0);
LAB_00100284:
    uVar2 = 0;
  }
  else {
    cnt = 2;
    uVar6 = 1;
    lVar3 = 0;
    uVar2 = 0;
    uVar4 = 1;
LAB_001002c4:
    do {
      local_34[lVar3] = (char)uVar2;
      lVar3 = lVar3 + -1;
      uVar2 = uVar2 >> 8;
    } while ((int)lVar3 != -1);
    local_34[uVar4] = (char)uVar6;
    iVar1 = EVP_DigestUpdate(ctx,local_34,cnt);
    if (iVar1 == 0) goto LAB_00100284;
    iVar1 = EVP_DigestFinalXOF(ctx,param_2,*(undefined8 *)(param_1 + 0x28));
    uVar2 = (ulong)(iVar1 != 0);
  }
  *param_3 = *(undefined8 *)(param_1 + 0x28);
LAB_0010028d:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8
encode_string_constprop_0(undefined1 *param_1,ulong *param_2,void *param_3,size_t param_4)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (param_3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar5 = param_4 << 3;
    if (uVar5 == 0) {
      uVar3 = 1;
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
      uVar4 = uVar5;
      do {
        uVar1 = uVar1 + 1;
        uVar4 = uVar4 >> 8;
        if (uVar4 == 0) break;
      } while (uVar1 < 8);
      uVar3 = (ulong)uVar1;
    }
    uVar4 = uVar3 + 1 + param_4;
    if (0x204 < uVar4) {
      ERR_new();
      ERR_set_debug("providers/implementations/macs/kmac_prov.c",0x23f,"encode_string");
      ERR_set_error(0x39,0xca,0);
      return 0;
    }
    *param_1 = (char)uVar1;
    uVar2 = uVar3;
    do {
      param_1[uVar2] = (char)uVar5;
      uVar5 = uVar5 >> 8;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
    memcpy(param_1 + uVar3 + 1,param_3,param_4);
  }
  *param_2 = uVar4;
  return 1;
}



undefined8
kmac_bytepad_encode_key_constprop_0
          (undefined8 param_1,ulong *param_2,undefined8 param_3,undefined8 param_4,ulong param_5)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  long in_FS_OFFSET;
  undefined8 local_240;
  undefined1 local_238 [520];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = encode_string_constprop_0(local_238,&local_240);
  if (iVar1 != 0) {
    uVar3 = (param_5 - 1) + (long)((int)local_240 + 2);
    uVar3 = uVar3 - uVar3 % param_5;
    *param_2 = uVar3;
    if (uVar3 < 0x2a1) {
      uVar2 = bytepad(param_1,0,local_238,local_240,0,0,param_5);
      goto LAB_00100451;
    }
  }
  uVar2 = 0;
LAB_00100451:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool kmac_setkey(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = ossl_prov_digest_md(param_1 + 0x10);
  iVar1 = EVP_MD_get_block_size(uVar2);
  if (param_3 - 4U < 0x1fd) {
    if (0 < iVar1) {
      iVar1 = kmac_bytepad_encode_key_constprop_0
                        (param_1 + 0x44,param_1 + 0x30,param_2,param_3,(long)iVar1);
      return iVar1 != 0;
    }
    ERR_new();
    ERR_set_debug("providers/implementations/macs/kmac_prov.c",0x124,"kmac_setkey");
    ERR_set_error(0x39,0xa6,0);
  }
  else {
    ERR_new();
    ERR_set_debug("providers/implementations/macs/kmac_prov.c",0x10d,"kmac_setkey");
    ERR_set_error(0x39,0x69,0);
  }
  return false;
}



bool kmac_set_ctx_params(long param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  long in_FS_OFFSET;
  bool bVar3;
  ulong local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 == (long *)0x0) || (*param_2 == 0)) {
LAB_001006b0:
    bVar3 = true;
  }
  else {
    lVar2 = OSSL_PARAM_locate_const(param_2,&_LC3);
    if (lVar2 == 0) {
LAB_001005fb:
      lVar2 = OSSL_PARAM_locate_const(param_2,&_LC1);
      if (lVar2 != 0) {
        local_28 = 0;
        iVar1 = OSSL_PARAM_get_size_t(lVar2,&local_28);
        if (iVar1 == 0) goto LAB_00100700;
        if (0x1fffff < local_28) {
          ERR_new();
          ERR_set_debug("providers/implementations/macs/kmac_prov.c",0x1da,"kmac_set_ctx_params");
          ERR_set_error(0x39,0xd9,0);
          bVar3 = false;
          goto LAB_001006b5;
        }
        *(ulong *)(param_1 + 0x28) = local_28;
      }
      lVar2 = OSSL_PARAM_locate_const(param_2,&_LC4);
      if (lVar2 != 0) {
        iVar1 = kmac_setkey(param_1,*(undefined8 *)(lVar2 + 0x10),*(undefined8 *)(lVar2 + 0x18));
        if (iVar1 == 0) goto LAB_00100700;
      }
      lVar2 = OSSL_PARAM_locate_const(param_2,"custom");
      if (lVar2 == 0) goto LAB_001006b0;
      if (*(ulong *)(lVar2 + 0x18) < 0x201) {
        iVar1 = encode_string_constprop_0
                          (param_1 + 0x2e4,param_1 + 0x38,*(undefined8 *)(lVar2 + 0x10));
        bVar3 = iVar1 != 0;
        goto LAB_001006b5;
      }
      ERR_new();
      ERR_set_debug("providers/implementations/macs/kmac_prov.c",0x1f1,"kmac_set_ctx_params");
      ERR_set_error(0x39,0x6f,0);
    }
    else {
      iVar1 = OSSL_PARAM_get_int(lVar2,param_1 + 0x40);
      if (iVar1 != 0) goto LAB_001005fb;
    }
LAB_00100700:
    bVar3 = false;
  }
LAB_001006b5:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool kmac_init(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  EVP_MD_CTX *ctx;
  int iVar2;
  EVP_MD *type;
  undefined8 uVar3;
  long lVar4;
  void *d;
  ulong uVar5;
  size_t cnt;
  long in_FS_OFFSET;
  bool bVar6;
  char *local_98;
  undefined4 local_90;
  undefined *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  ctx = *(EVP_MD_CTX **)(param_1 + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = ossl_prov_is_running();
  if (iVar2 != 0) {
    iVar2 = kmac_set_ctx_params(param_1,param_4);
    if (iVar2 != 0) {
      if (param_2 == 0) {
        if (*(long *)(param_1 + 0x30) == 0) {
          ERR_new();
          ERR_set_debug("providers/implementations/macs/kmac_prov.c",0x143,"kmac_init");
          ERR_set_error(0x39,0x72,0);
          bVar6 = false;
          goto LAB_0010088a;
        }
      }
      else {
        iVar2 = kmac_setkey(param_1,param_2,param_3);
        if (iVar2 == 0) goto LAB_0010078b;
      }
      type = (EVP_MD *)ossl_prov_digest_md(param_1 + 0x10);
      iVar2 = EVP_DigestInit_ex(*(EVP_MD_CTX **)(param_1 + 8),type,(ENGINE *)0x0);
      if (iVar2 != 0) {
        uVar3 = ossl_prov_digest_md(param_1 + 0x10);
        iVar2 = EVP_MD_get_block_size(uVar3);
        if (iVar2 < 1) {
          ERR_new();
          ERR_set_debug("providers/implementations/macs/kmac_prov.c",0x14c,"kmac_init");
          ERR_set_error(0x39,0xa6,0);
          bVar6 = false;
          goto LAB_0010088a;
        }
        uVar5 = (ulong)iVar2;
        lVar4 = *(long *)(param_1 + 0x38);
        if (lVar4 == 0) {
          local_98 = "custom";
          local_80 = __LC7;
          uStack_78 = _UNK_00101138;
          local_90 = 5;
          local_88 = &_LC6;
          local_70 = 0;
          local_68 = 0;
          local_60 = 0;
          local_58 = (undefined1  [16])0x0;
          kmac_set_ctx_params(param_1,&local_98);
          lVar4 = *(long *)(param_1 + 0x38);
        }
        uVar1 = (uVar5 - 1) + (long)((int)lVar4 + 8);
        cnt = uVar1 - uVar1 % uVar5;
        d = CRYPTO_malloc((int)cnt,"providers/implementations/macs/kmac_prov.c",0x15f);
        if (d == (void *)0x0) goto LAB_0010078b;
        iVar2 = bytepad(d,0,&kmac_string,6,param_1 + 0x2e4,*(undefined8 *)(param_1 + 0x38),uVar5);
        if (iVar2 == 0) {
LAB_00100870:
          bVar6 = false;
        }
        else {
          iVar2 = EVP_DigestUpdate(ctx,d,cnt);
          if (iVar2 == 0) goto LAB_00100870;
          iVar2 = EVP_DigestUpdate(ctx,(void *)(param_1 + 0x44),*(size_t *)(param_1 + 0x30));
          bVar6 = iVar2 != 0;
        }
        CRYPTO_free(d);
        goto LAB_0010088a;
      }
    }
  }
LAB_0010078b:
  bVar6 = false;
LAB_0010088a:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void kmac_free(void *param_1)

{
  if (param_1 != (void *)0x0) {
    EVP_MD_CTX_free(*(undefined8 *)((long)param_1 + 8));
    ossl_prov_digest_reset((long)param_1 + 0x10);
    OPENSSL_cleanse((void *)((long)param_1 + 0x44),*(size_t *)((long)param_1 + 0x30));
    OPENSSL_cleanse((void *)((long)param_1 + 0x2e4),*(size_t *)((long)param_1 + 0x38));
    CRYPTO_free(param_1);
    return;
  }
  return;
}



undefined8 * kmac_new(undefined8 param_1)

{
  int iVar1;
  undefined8 *ptr;
  long lVar2;
  
  iVar1 = ossl_prov_is_running();
  if ((iVar1 != 0) &&
     (ptr = (undefined8 *)CRYPTO_zalloc(0x4e8,"providers/implementations/macs/kmac_prov.c",0xb3),
     ptr != (undefined8 *)0x0)) {
    lVar2 = EVP_MD_CTX_new();
    ptr[1] = lVar2;
    if (lVar2 != 0) {
      *ptr = param_1;
      return ptr;
    }
    EVP_MD_CTX_free(0);
    ossl_prov_digest_reset(ptr + 2);
    OPENSSL_cleanse((void *)((long)ptr + 0x44),ptr[6]);
    OPENSSL_cleanse((void *)((long)ptr + 0x2e4),ptr[7]);
    CRYPTO_free(ptr);
  }
  return (undefined8 *)0x0;
}



void * kmac_dup(undefined8 *param_1)

{
  undefined4 uVar1;
  size_t __n;
  size_t __n_00;
  int iVar2;
  void *ptr;
  
  iVar2 = ossl_prov_is_running();
  if ((iVar2 != 0) && (ptr = (void *)kmac_new(*param_1), ptr != (void *)0x0)) {
    iVar2 = EVP_MD_CTX_copy(*(EVP_MD_CTX **)((long)ptr + 8),(EVP_MD_CTX *)param_1[1]);
    if ((iVar2 != 0) && (iVar2 = ossl_prov_digest_copy((long)ptr + 0x10,param_1 + 2), iVar2 != 0)) {
      __n_00 = param_1[6];
      uVar1 = *(undefined4 *)(param_1 + 8);
      *(undefined8 *)((long)ptr + 0x28) = param_1[5];
      *(size_t *)((long)ptr + 0x30) = __n_00;
      __n = param_1[7];
      *(undefined4 *)((long)ptr + 0x40) = uVar1;
      *(size_t *)((long)ptr + 0x38) = __n;
      memcpy((void *)((long)ptr + 0x44),(void *)((long)param_1 + 0x44),__n_00);
      memcpy((void *)((long)ptr + 0x2e4),(void *)((long)param_1 + 0x2e4),__n);
      return ptr;
    }
    EVP_MD_CTX_free(*(undefined8 *)((long)ptr + 8));
    ossl_prov_digest_reset((long)ptr + 0x10);
    OPENSSL_cleanse((void *)((long)ptr + 0x44),*(size_t *)((long)ptr + 0x30));
    OPENSSL_cleanse((void *)((long)ptr + 0x2e4),*(size_t *)((long)ptr + 0x38));
    CRYPTO_free(ptr);
  }
  return (void *)0x0;
}



void * kmac_fetch_new(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  void *ptr;
  undefined8 uVar3;
  
  ptr = (void *)kmac_new();
  if (ptr != (void *)0x0) {
    uVar3 = ossl_prov_ctx_get0_libctx(param_1);
    lVar1 = (long)ptr + 0x10;
    iVar2 = ossl_prov_digest_load_from_params(lVar1,param_2,uVar3);
    if (iVar2 != 0) {
      uVar3 = ossl_prov_digest_md(lVar1);
      iVar2 = EVP_MD_get_size(uVar3);
      if (0 < iVar2) {
        *(long *)((long)ptr + 0x28) = (long)iVar2;
        return ptr;
      }
    }
    EVP_MD_CTX_free(*(undefined8 *)((long)ptr + 8));
    ossl_prov_digest_reset(lVar1);
    OPENSSL_cleanse((void *)((long)ptr + 0x44),*(size_t *)((long)ptr + 0x30));
    OPENSSL_cleanse((void *)((long)ptr + 0x2e4),*(size_t *)((long)ptr + 0x38));
    CRYPTO_free(ptr);
  }
  return (void *)0x0;
}



void kmac128_new(undefined8 param_1)

{
  kmac_fetch_new(param_1,kmac128_params_1);
  return;
}



void kmac256_new(undefined8 param_1)

{
  kmac_fetch_new(param_1,kmac256_params_0);
  return;
}


