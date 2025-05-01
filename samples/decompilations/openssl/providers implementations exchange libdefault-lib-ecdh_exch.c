
undefined1 * ecdh_settable_ctx_params(void)

{
  return known_settable_ctx_params;
}



undefined1 * ecdh_gettable_ctx_params(void)

{
  return known_gettable_ctx_params;
}



bool ecdh_get_ctx_params(long param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  char *pcVar4;
  undefined *puVar5;
  
  if (param_1 == 0) {
    return false;
  }
  lVar3 = OSSL_PARAM_locate(param_2,"ecdh-cofactor-mode");
  if (lVar3 != 0) {
    if (*(int *)(param_1 + 0x18) == -1) {
      uVar2 = EC_KEY_get_flags(*(EC_KEY **)(param_1 + 8));
      iVar1 = OSSL_PARAM_set_int(lVar3,uVar2 >> 0xc & 1);
    }
    else {
      iVar1 = OSSL_PARAM_set_int(lVar3);
    }
    if (iVar1 == 0) {
      return false;
    }
  }
  lVar3 = OSSL_PARAM_locate(param_2,"kdf-type");
  if (lVar3 != 0) {
    if (*(int *)(param_1 + 0x1c) == 0) {
      pcVar4 = "";
    }
    else {
      if (*(int *)(param_1 + 0x1c) != 1) {
        return false;
      }
      pcVar4 = "X963KDF";
    }
    iVar1 = OSSL_PARAM_set_utf8_string(lVar3,pcVar4);
    if (iVar1 == 0) {
      return false;
    }
  }
  lVar3 = OSSL_PARAM_locate(param_2,"kdf-digest");
  if (lVar3 != 0) {
    puVar5 = &_LC0;
    if (*(long *)(param_1 + 0x20) != 0) {
      puVar5 = (undefined *)EVP_MD_get0_name(*(long *)(param_1 + 0x20),&_LC0);
    }
    iVar1 = OSSL_PARAM_set_utf8_string(lVar3,puVar5);
    if (iVar1 == 0) {
      return false;
    }
  }
  lVar3 = OSSL_PARAM_locate(param_2,"kdf-outlen");
  if ((lVar3 != 0) &&
     (iVar1 = OSSL_PARAM_set_size_t(lVar3,*(undefined8 *)(param_1 + 0x38)), iVar1 == 0)) {
    return false;
  }
  lVar3 = OSSL_PARAM_locate(param_2,"kdf-ukm");
  if (lVar3 == 0) {
    return true;
  }
  iVar1 = OSSL_PARAM_set_octet_ptr
                    (lVar3,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return iVar1 != 0;
}



undefined8 ecdh_set_ctx_params(undefined8 *param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  char *local_f0;
  undefined8 local_e8;
  int local_e0;
  undefined4 uStack_dc;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_d8 = (undefined1  [16])0x0;
  local_f0 = (char *)0x0;
  local_c8 = (undefined1  [16])0x0;
  local_b8 = (undefined1  [16])0x0;
  local_a8 = (undefined1  [16])0x0;
  local_98 = (undefined1  [16])0x0;
  if (param_1 == (undefined8 *)0x0) goto LAB_001002f8;
  if ((param_2 == (long *)0x0) || (*param_2 == 0)) goto LAB_00100438;
  lVar2 = OSSL_PARAM_locate_const(param_2,"ecdh-cofactor-mode");
  if (lVar2 == 0) {
LAB_0010024a:
    lVar2 = OSSL_PARAM_locate_const(param_2,"kdf-type");
    if (lVar2 != 0) {
      local_f0 = local_d8;
      iVar1 = OSSL_PARAM_get_utf8_string(lVar2,&local_f0,0x50);
      if (iVar1 == 0) goto LAB_001002f8;
      if (local_d8[0] == '\0') {
        *(undefined4 *)((long)param_1 + 0x1c) = 0;
      }
      else {
        iVar1 = strcmp(local_d8,"X963KDF");
        if (iVar1 != 0) goto LAB_001002f8;
        *(undefined4 *)((long)param_1 + 0x1c) = 1;
      }
    }
    lVar2 = OSSL_PARAM_locate_const(param_2,"kdf-digest");
    if (lVar2 == 0) {
LAB_001003a0:
      lVar2 = OSSL_PARAM_locate_const(param_2,"kdf-outlen");
      if (lVar2 != 0) {
        iVar1 = OSSL_PARAM_get_size_t(lVar2,&local_e0);
        if (iVar1 == 0) goto LAB_001002f8;
        param_1[7] = CONCAT44(uStack_dc,local_e0);
      }
      lVar2 = OSSL_PARAM_locate_const(param_2,"kdf-ukm");
      if (lVar2 != 0) {
        local_e8 = 0;
        iVar1 = OSSL_PARAM_get_octet_string(lVar2,&local_e8,0,&local_e0);
        if (iVar1 == 0) goto LAB_001002f8;
        CRYPTO_free((void *)param_1[5]);
        param_1[5] = local_e8;
        param_1[6] = CONCAT44(uStack_dc,local_e0);
      }
LAB_00100438:
      uVar3 = 1;
      goto LAB_0010043d;
    }
    local_88 = (undefined1  [16])0x0;
    local_78 = (undefined1  [16])0x0;
    local_68 = (undefined1  [16])0x0;
    local_58 = (undefined1  [16])0x0;
    local_48 = (undefined1  [16])0x0;
    local_f0 = local_d8;
    iVar1 = OSSL_PARAM_get_utf8_string(lVar2,&local_f0,0x50);
    if (iVar1 != 0) {
      local_f0 = local_88;
      lVar2 = OSSL_PARAM_locate_const(param_2,"kdf-digest-props");
      if (lVar2 != 0) {
        iVar1 = OSSL_PARAM_get_utf8_string(lVar2,&local_f0,0x50);
        if (iVar1 == 0) goto LAB_001002f8;
      }
      EVP_MD_free(param_1[4]);
      lVar2 = EVP_MD_fetch(*param_1,local_d8,local_88);
      param_1[4] = lVar2;
      if (lVar2 != 0) {
        iVar1 = EVP_MD_xof(lVar2);
        if (iVar1 != 0) {
          ERR_new();
          ERR_set_debug("providers/implementations/exchange/ecdh_exch.c",0x13f,"ecdh_set_ctx_params"
                       );
          ERR_set_error(0x39,0xb7,0);
          uVar3 = 0;
          goto LAB_0010043d;
        }
        goto LAB_001003a0;
      }
    }
  }
  else {
    iVar1 = OSSL_PARAM_get_int(lVar2,&local_e0);
    if (iVar1 != 0) {
      if (local_e0 + 1U < 3) {
        *(int *)(param_1 + 3) = local_e0;
        goto LAB_0010024a;
      }
    }
  }
LAB_001002f8:
  uVar3 = 0;
LAB_0010043d:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void ecdh_freectx(void *param_1)

{
  EC_KEY_free(*(EC_KEY **)((long)param_1 + 8));
  EC_KEY_free(*(EC_KEY **)((long)param_1 + 0x10));
  EVP_MD_free(*(undefined8 *)((long)param_1 + 0x20));
  CRYPTO_clear_free(*(undefined8 *)((long)param_1 + 0x28),*(undefined8 *)((long)param_1 + 0x30),
                    "providers/implementations/exchange/ecdh_exch.c",0xbb);
  CRYPTO_free(param_1);
  return;
}



bool ecdh_init(long param_1,EC_KEY *param_2,undefined8 param_3)

{
  int iVar1;
  EC_GROUP *pEVar2;
  
  iVar1 = ossl_prov_is_running();
  if (((iVar1 != 0) && (param_1 != 0)) && (param_2 != (EC_KEY *)0x0)) {
    pEVar2 = EC_KEY_get0_group(param_2);
    if (pEVar2 != (EC_GROUP *)0x0) {
      iVar1 = EC_KEY_up_ref(param_2);
      if (iVar1 != 0) {
        EC_KEY_free(*(EC_KEY **)(param_1 + 8));
        *(EC_KEY **)(param_1 + 8) = param_2;
        *(undefined8 *)(param_1 + 0x18) = 0xffffffff;
        iVar1 = ecdh_set_ctx_params(param_1,param_3);
        return iVar1 != 0;
      }
    }
  }
  return false;
}



undefined8 ecdh_set_peer(long param_1,EC_KEY *param_2)

{
  EC_KEY *key;
  int iVar1;
  EC_GROUP *a;
  EC_GROUP *b;
  undefined8 uVar2;
  BN_CTX *ctx;
  
  iVar1 = ossl_prov_is_running();
  if (((iVar1 != 0) && (param_1 != 0)) && (param_2 != (EC_KEY *)0x0)) {
    key = *(EC_KEY **)(param_1 + 8);
    a = EC_KEY_get0_group(key);
    b = EC_KEY_get0_group(param_2);
    uVar2 = ossl_ec_key_get_libctx(key);
    ctx = (BN_CTX *)BN_CTX_new_ex(uVar2);
    if (ctx == (BN_CTX *)0x0) {
      ERR_new();
      ERR_set_debug("providers/implementations/exchange/ecdh_exch.c",0x8d,"ecdh_match_params");
      ERR_set_error(0x39,0x80003,0);
    }
    else if (((a == (EC_GROUP *)0x0) || (b == (EC_GROUP *)0x0)) ||
            (iVar1 = EC_GROUP_cmp(a,b,ctx), iVar1 != 0)) {
      ERR_new();
      ERR_set_debug("providers/implementations/exchange/ecdh_exch.c",0x94,"ecdh_match_params");
      ERR_set_error(0x39,0xcb,0);
      BN_CTX_free(ctx);
    }
    else {
      BN_CTX_free(ctx);
      iVar1 = EC_KEY_up_ref(param_2);
      if (iVar1 != 0) {
        EC_KEY_free(*(EC_KEY **)(param_1 + 0x10));
        *(EC_KEY **)(param_1 + 0x10) = param_2;
        return 1;
      }
    }
  }
  return 0;
}



undefined8 * ecdh_newctx(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)0x0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    puVar2 = (undefined8 *)CRYPTO_zalloc(0x40,"providers/implementations/exchange/ecdh_exch.c",0x5b)
    ;
    if (puVar2 != (undefined8 *)0x0) {
      uVar3 = ossl_prov_ctx_get0_libctx(param_1);
      *puVar2 = uVar3;
      puVar2[3] = 0xffffffff;
    }
  }
  return puVar2;
}



undefined8 * ecdh_dupctx(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 *ptr;
  long lVar8;
  EC_KEY *pEVar9;
  
  iVar7 = ossl_prov_is_running();
  if (iVar7 == 0) {
    return (undefined8 *)0x0;
  }
  ptr = (undefined8 *)CRYPTO_zalloc(0x40,"providers/implementations/exchange/ecdh_exch.c",0xc9);
  if (ptr == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  uVar4 = param_1[3];
  uVar5 = param_1[6];
  uVar6 = param_1[7];
  pEVar9 = (EC_KEY *)param_1[1];
  *(undefined1 (*) [16])(ptr + 4) = (undefined1  [16])0x0;
  *ptr = uVar1;
  ptr[1] = uVar2;
  ptr[2] = uVar3;
  ptr[3] = uVar4;
  ptr[6] = uVar5;
  ptr[7] = uVar6;
  *(undefined1 (*) [16])(ptr + 1) = (undefined1  [16])0x0;
  if (pEVar9 != (EC_KEY *)0x0) {
    iVar7 = EC_KEY_up_ref(pEVar9);
    if (iVar7 == 0) goto LAB_00100800;
    pEVar9 = (EC_KEY *)param_1[1];
  }
  ptr[1] = pEVar9;
  pEVar9 = (EC_KEY *)param_1[2];
  if (pEVar9 != (EC_KEY *)0x0) {
    iVar7 = EC_KEY_up_ref(pEVar9);
    if (iVar7 == 0) goto LAB_00100800;
    pEVar9 = (EC_KEY *)param_1[2];
  }
  ptr[2] = pEVar9;
  lVar8 = param_1[4];
  if (lVar8 != 0) {
    iVar7 = EVP_MD_up_ref();
    if (iVar7 == 0) goto LAB_00100800;
    lVar8 = param_1[4];
  }
  ptr[4] = lVar8;
  if ((param_1[5] == 0) || (param_1[6] == 0)) {
    return ptr;
  }
  lVar8 = CRYPTO_memdup(param_1[5],param_1[6],"providers/implementations/exchange/ecdh_exch.c",0xe9)
  ;
  ptr[5] = lVar8;
  if (lVar8 != 0) {
    return ptr;
  }
LAB_00100800:
  EC_KEY_free((EC_KEY *)ptr[1]);
  EC_KEY_free((EC_KEY *)ptr[2]);
  EVP_MD_free(ptr[4]);
  CRYPTO_clear_free(ptr[5],ptr[6],"providers/implementations/exchange/ecdh_exch.c",0xbb);
  CRYPTO_free(ptr);
  return (undefined8 *)0x0;
}



uint ecdh_derive(undefined8 *param_1,void *param_2,ulong *param_3,ulong param_4)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  EC_GROUP *pEVar4;
  void *out;
  long lVar5;
  EC_POINT *pEVar6;
  EC_KEY *pEVar7;
  ulong uVar8;
  EC_KEY *local_50;
  
  if (*(int *)((long)param_1 + 0x1c) == 0) {
    if (((EC_KEY *)param_1[1] != (EC_KEY *)0x0) && (param_1[2] != 0)) {
      pEVar4 = EC_KEY_get0_group((EC_KEY *)param_1[1]);
      uVar8 = 0;
      if (pEVar4 != (EC_GROUP *)0x0) {
        iVar2 = EC_GROUP_get_degree(pEVar4);
        uVar8 = (long)iVar2 + 7U >> 3;
      }
      if (param_2 == (void *)0x0) {
        *param_3 = uVar8;
        return 1;
      }
      pEVar4 = EC_KEY_get0_group((EC_KEY *)param_1[1]);
      if (pEVar4 == (EC_GROUP *)0x0) {
        return 0;
      }
      lVar5 = EC_GROUP_get0_cofactor(pEVar4);
      if (lVar5 == 0) {
        return 0;
      }
      iVar2 = BN_is_one(lVar5);
      if (uVar8 < param_4) {
        param_4 = uVar8;
      }
      uVar3 = EC_KEY_get_flags((EC_KEY *)param_1[1]);
      if (((uVar3 >> 0xc & 1) == *(uint *)(param_1 + 3)) ||
         (*(uint *)(param_1 + 3) == 0xffffffff || iVar2 != 0)) {
        pEVar7 = (EC_KEY *)param_1[1];
      }
      else {
        pEVar7 = EC_KEY_dup((EC_KEY *)param_1[1]);
        if (pEVar7 == (EC_KEY *)0x0) {
          return 0;
        }
        if (*(int *)(param_1 + 3) == 1) {
          EC_KEY_set_flags(pEVar7,0x1000);
        }
        else {
          EC_KEY_clear_flags(pEVar7,0x1000);
        }
      }
      pEVar6 = EC_KEY_get0_public_key((EC_KEY *)param_1[2]);
      iVar2 = ECDH_compute_key(param_2,param_4,pEVar6,pEVar7,(KDF *)0x0);
      bVar1 = 0 < iVar2;
      if (bVar1) {
        *param_3 = (long)iVar2;
      }
      if (pEVar7 != (EC_KEY *)param_1[1]) {
        EC_KEY_free(pEVar7);
        return (uint)bVar1;
      }
      return (uint)bVar1;
    }
LAB_00100bd8:
    ERR_new();
    ERR_set_debug("providers/implementations/exchange/ecdh_exch.c",0x1ea,"ecdh_plain_derive");
    ERR_set_error(0x39,0x80,0);
    return 0;
  }
  if (*(int *)((long)param_1 + 0x1c) != 1) {
    return 0;
  }
  if (param_2 == (void *)0x0) {
    *param_3 = param_1[7];
    return 1;
  }
  if (param_4 < (ulong)param_1[7]) {
    ERR_new();
    ERR_set_debug("providers/implementations/exchange/ecdh_exch.c",0x251,"ecdh_X9_63_kdf_derive");
    ERR_set_error(0x39,0x6a,0);
    return 0;
  }
  if (((EC_KEY *)param_1[1] == (EC_KEY *)0x0) || (param_1[2] == 0)) goto LAB_00100bd8;
  pEVar4 = EC_KEY_get0_group((EC_KEY *)param_1[1]);
  uVar8 = 0;
  if (pEVar4 != (EC_GROUP *)0x0) {
    iVar2 = EC_GROUP_get_degree(pEVar4);
    uVar8 = (long)iVar2 + 7U >> 3;
  }
  out = (void *)CRYPTO_secure_malloc(uVar8,"providers/implementations/exchange/ecdh_exch.c",0x256);
  if (out == (void *)0x0) {
    return 0;
  }
  if (((EC_KEY *)param_1[1] == (EC_KEY *)0x0) || (param_1[2] == 0)) {
    ERR_new();
    ERR_set_debug("providers/implementations/exchange/ecdh_exch.c",0x1ea,"ecdh_plain_derive");
    ERR_set_error(0x39,0x80,0);
  }
  else {
    pEVar4 = EC_KEY_get0_group((EC_KEY *)param_1[1]);
    local_50 = (EC_KEY *)0x0;
    if (pEVar4 != (EC_GROUP *)0x0) {
      iVar2 = EC_GROUP_get_degree(pEVar4);
      local_50 = (EC_KEY *)((long)iVar2 + 7U >> 3);
    }
    pEVar4 = EC_KEY_get0_group((EC_KEY *)param_1[1]);
    if ((pEVar4 != (EC_GROUP *)0x0) && (lVar5 = EC_GROUP_get0_cofactor(pEVar4), lVar5 != 0)) {
      iVar2 = BN_is_one(lVar5);
      pEVar7 = local_50;
      if (uVar8 <= local_50) {
        pEVar7 = (EC_KEY *)uVar8;
      }
      uVar3 = EC_KEY_get_flags((EC_KEY *)param_1[1]);
      if ((*(uint *)(param_1 + 3) == 0xffffffff || iVar2 != 0) ||
         ((uVar3 >> 0xc & 1) == *(uint *)(param_1 + 3))) {
        local_50 = (EC_KEY *)param_1[1];
      }
      else {
        local_50 = EC_KEY_dup((EC_KEY *)param_1[1]);
        if (local_50 == (EC_KEY *)0x0) goto LAB_00100c4c;
        if (*(int *)(param_1 + 3) == 1) {
          EC_KEY_set_flags(local_50,0x1000);
        }
        else {
          EC_KEY_clear_flags(local_50,0x1000);
        }
      }
      pEVar6 = EC_KEY_get0_public_key((EC_KEY *)param_1[2]);
      iVar2 = ECDH_compute_key(out,(size_t)pEVar7,pEVar6,local_50,(KDF *)0x0);
      if (0 < iVar2) {
        uVar8 = (ulong)iVar2;
        if (local_50 != (EC_KEY *)param_1[1]) {
          EC_KEY_free(local_50);
        }
        uVar3 = ossl_ecdh_kdf_X9_63(param_2,param_1[7],out,uVar8,param_1[5],param_1[6],param_1[4],
                                    *param_1,0);
        if (uVar3 != 0) {
          *param_3 = param_1[7];
          uVar3 = 1;
        }
        goto LAB_00100a33;
      }
      if (local_50 != (EC_KEY *)param_1[1]) {
        EC_KEY_free(local_50);
        uVar3 = 0;
        goto LAB_00100a33;
      }
    }
  }
LAB_00100c4c:
  uVar3 = 0;
LAB_00100a33:
  CRYPTO_secure_clear_free(out,uVar8,"providers/implementations/exchange/ecdh_exch.c",0x267);
  return uVar3;
}


