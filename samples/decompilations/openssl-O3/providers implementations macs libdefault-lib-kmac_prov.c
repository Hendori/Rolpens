
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
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  size_t cnt;
  long in_FS_OFFSET;
  undefined1 auStack_35 [5];
  long local_30;
  
  ctx = *(EVP_MD_CTX **)(param_1 + 8);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar4 = ossl_prov_is_running();
  if ((int)uVar4 == 0) goto LAB_001002ac;
  if ((*(int *)(param_1 + 0x40) == 0) && (uVar4 = *(long *)(param_1 + 0x28) << 3, uVar4 != 0)) {
    uVar5 = uVar4;
    uVar2 = 0;
    do {
      uVar1 = uVar2;
      uVar2 = uVar1 + 1;
      uVar5 = uVar5 >> 8;
      if (uVar5 == 0) break;
    } while (uVar2 < 8);
    if (uVar2 < 4) {
      cnt = (size_t)(uVar1 + 2);
      uVar5 = (ulong)uVar2;
      auStack_35[(ulong)uVar1 + 1] = (char)uVar4;
      if (uVar1 == 0) goto LAB_001002d5;
      auStack_35[(long)(int)(uVar1 - 1) + 1] = (char)(uVar4 >> 8);
      if (uVar1 != 1) {
        auStack_35[1] = (undefined1)(uVar4 >> 0x10);
      }
      goto LAB_0010028a;
    }
    ERR_new();
    ERR_set_debug("providers/implementations/macs/kmac_prov.c",0x21a,"right_encode");
    ERR_set_error(0x39,0xca,0);
LAB_001002a3:
    uVar4 = 0;
  }
  else {
    auStack_35[1] = 0;
LAB_001002d5:
    cnt = 2;
    uVar2 = 1;
    uVar5 = 1;
LAB_0010028a:
    auStack_35[uVar5 + 1] = (char)uVar2;
    iVar3 = EVP_DigestUpdate(ctx,auStack_35 + 1,cnt);
    if (iVar3 == 0) goto LAB_001002a3;
    iVar3 = EVP_DigestFinalXOF(ctx,param_2,*(undefined8 *)(param_1 + 0x28));
    uVar4 = (ulong)(iVar3 != 0);
  }
  *param_3 = *(undefined8 *)(param_1 + 0x28);
LAB_001002ac:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
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
      goto LAB_00100471;
    }
  }
  uVar2 = 0;
LAB_00100471:
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
LAB_001006d0:
    bVar3 = true;
  }
  else {
    lVar2 = OSSL_PARAM_locate_const(param_2,&_LC3);
    if (lVar2 == 0) {
LAB_0010061b:
      lVar2 = OSSL_PARAM_locate_const(param_2,&_LC1);
      if (lVar2 != 0) {
        local_28 = 0;
        iVar1 = OSSL_PARAM_get_size_t(lVar2,&local_28);
        if (iVar1 == 0) goto LAB_00100720;
        if (0x1fffff < local_28) {
          ERR_new();
          ERR_set_debug("providers/implementations/macs/kmac_prov.c",0x1da,"kmac_set_ctx_params");
          ERR_set_error(0x39,0xd9,0);
          bVar3 = false;
          goto LAB_001006d5;
        }
        *(ulong *)(param_1 + 0x28) = local_28;
      }
      lVar2 = OSSL_PARAM_locate_const(param_2,&_LC4);
      if (lVar2 != 0) {
        iVar1 = kmac_setkey(param_1,*(undefined8 *)(lVar2 + 0x10),*(undefined8 *)(lVar2 + 0x18));
        if (iVar1 == 0) goto LAB_00100720;
      }
      lVar2 = OSSL_PARAM_locate_const(param_2,"custom");
      if (lVar2 == 0) goto LAB_001006d0;
      if (*(ulong *)(lVar2 + 0x18) < 0x201) {
        iVar1 = encode_string_constprop_0
                          (param_1 + 0x2e4,param_1 + 0x38,*(undefined8 *)(lVar2 + 0x10));
        bVar3 = iVar1 != 0;
        goto LAB_001006d5;
      }
      ERR_new();
      ERR_set_debug("providers/implementations/macs/kmac_prov.c",0x1f1,"kmac_set_ctx_params");
      ERR_set_error(0x39,0x6f,0);
    }
    else {
      iVar1 = OSSL_PARAM_get_int(lVar2,param_1 + 0x40);
      if (iVar1 != 0) goto LAB_0010061b;
    }
LAB_00100720:
    bVar3 = false;
  }
LAB_001006d5:
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
          goto LAB_001008aa;
        }
      }
      else {
        iVar2 = kmac_setkey(param_1,param_2,param_3);
        if (iVar2 == 0) goto LAB_001007ab;
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
          goto LAB_001008aa;
        }
        uVar5 = (ulong)iVar2;
        lVar4 = *(long *)(param_1 + 0x38);
        if (lVar4 == 0) {
          local_98 = "custom";
          local_80 = __LC7;
          uStack_78 = _UNK_00101238;
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
        if (d == (void *)0x0) goto LAB_001007ab;
        iVar2 = bytepad(d,0,&kmac_string,6,param_1 + 0x2e4,*(undefined8 *)(param_1 + 0x38),uVar5);
        if (iVar2 == 0) {
LAB_00100890:
          bVar6 = false;
        }
        else {
          iVar2 = EVP_DigestUpdate(ctx,d,cnt);
          if (iVar2 == 0) goto LAB_00100890;
          iVar2 = EVP_DigestUpdate(ctx,(void *)(param_1 + 0x44),*(size_t *)(param_1 + 0x30));
          bVar6 = iVar2 != 0;
        }
        CRYPTO_free(d);
        goto LAB_001008aa;
      }
    }
  }
LAB_001007ab:
  bVar6 = false;
LAB_001008aa:
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



undefined8 * kmac_dup(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  size_t __n;
  size_t __n_00;
  undefined8 uVar3;
  int iVar4;
  undefined8 *ptr;
  EVP_MD_CTX *out;
  
  iVar4 = ossl_prov_is_running();
  if (iVar4 != 0) {
    uVar2 = *param_1;
    iVar4 = ossl_prov_is_running();
    if ((iVar4 != 0) &&
       (ptr = (undefined8 *)CRYPTO_zalloc(0x4e8,"providers/implementations/macs/kmac_prov.c",0xb3),
       ptr != (undefined8 *)0x0)) {
      out = (EVP_MD_CTX *)EVP_MD_CTX_new();
      ptr[1] = out;
      if (out == (EVP_MD_CTX *)0x0) {
        EVP_MD_CTX_free();
      }
      else {
        *ptr = uVar2;
        iVar4 = EVP_MD_CTX_copy(out,(EVP_MD_CTX *)param_1[1]);
        if ((iVar4 != 0) && (iVar4 = ossl_prov_digest_copy(ptr + 2,param_1 + 2), iVar4 != 0)) {
          __n = param_1[7];
          uVar1 = *(undefined4 *)(param_1 + 8);
          uVar2 = param_1[5];
          uVar3 = param_1[6];
          __n_00 = param_1[6];
          ptr[7] = __n;
          *(undefined4 *)(ptr + 8) = uVar1;
          ptr[5] = uVar2;
          ptr[6] = uVar3;
          memcpy((void *)((long)ptr + 0x44),(void *)((long)param_1 + 0x44),__n_00);
          memcpy((void *)((long)ptr + 0x2e4),(void *)((long)param_1 + 0x2e4),__n);
          return ptr;
        }
        EVP_MD_CTX_free(ptr[1]);
      }
      ossl_prov_digest_reset(ptr + 2);
      OPENSSL_cleanse((void *)((long)ptr + 0x44),ptr[6]);
      OPENSSL_cleanse((void *)((long)ptr + 0x2e4),ptr[7]);
      CRYPTO_free(ptr);
    }
  }
  return (undefined8 *)0x0;
}



undefined8 * kmac256_new(undefined8 param_1)

{
  int iVar1;
  undefined8 *ptr;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    ptr = (undefined8 *)CRYPTO_zalloc(0x4e8,"providers/implementations/macs/kmac_prov.c",0xb3);
    if (ptr != (undefined8 *)0x0) {
      lVar2 = EVP_MD_CTX_new();
      ptr[1] = lVar2;
      if (lVar2 == 0) {
        EVP_MD_CTX_free(0);
      }
      else {
        *ptr = param_1;
        uVar3 = ossl_prov_ctx_get0_libctx(param_1);
        iVar1 = ossl_prov_digest_load_from_params(ptr + 2,kmac256_params_0,uVar3);
        if (iVar1 != 0) {
          uVar3 = ossl_prov_digest_md(ptr + 2);
          iVar1 = EVP_MD_get_size(uVar3);
          if (0 < iVar1) {
            ptr[5] = (long)iVar1;
            return ptr;
          }
        }
        EVP_MD_CTX_free(ptr[1]);
      }
      ossl_prov_digest_reset(ptr + 2);
      OPENSSL_cleanse((void *)((long)ptr + 0x44),ptr[6]);
      OPENSSL_cleanse((void *)((long)ptr + 0x2e4),ptr[7]);
      CRYPTO_free(ptr);
    }
  }
  return (undefined8 *)0x0;
}



undefined8 * kmac128_new(undefined8 param_1)

{
  int iVar1;
  undefined8 *ptr;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    ptr = (undefined8 *)CRYPTO_zalloc(0x4e8,"providers/implementations/macs/kmac_prov.c",0xb3);
    if (ptr != (undefined8 *)0x0) {
      lVar2 = EVP_MD_CTX_new();
      ptr[1] = lVar2;
      if (lVar2 == 0) {
        EVP_MD_CTX_free(0);
      }
      else {
        *ptr = param_1;
        uVar3 = ossl_prov_ctx_get0_libctx(param_1);
        iVar1 = ossl_prov_digest_load_from_params(ptr + 2,kmac128_params_1,uVar3);
        if (iVar1 != 0) {
          uVar3 = ossl_prov_digest_md(ptr + 2);
          iVar1 = EVP_MD_get_size(uVar3);
          if (0 < iVar1) {
            ptr[5] = (long)iVar1;
            return ptr;
          }
        }
        EVP_MD_CTX_free(ptr[1]);
      }
      ossl_prov_digest_reset(ptr + 2);
      OPENSSL_cleanse((void *)((long)ptr + 0x44),ptr[6]);
      OPENSSL_cleanse((void *)((long)ptr + 0x2e4),ptr[7]);
      CRYPTO_free(ptr);
    }
  }
  return (undefined8 *)0x0;
}


