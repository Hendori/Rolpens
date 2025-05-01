
undefined1 * dh_settable_ctx_params(void)

{
  return known_settable_ctx_params;
}



undefined1 * dh_gettable_ctx_params(void)

{
  return known_gettable_ctx_params;
}



bool dh_get_ctx_params(long param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;
  undefined *puVar5;
  
  if (param_1 == 0) {
    return false;
  }
  lVar3 = OSSL_PARAM_locate(param_2,"kdf-type");
  if (lVar3 == 0) {
LAB_00100078:
    lVar3 = OSSL_PARAM_locate(param_2,"kdf-digest");
    if (lVar3 != 0) {
      puVar5 = &_LC0;
      if (*(long *)(param_1 + 0x20) != 0) {
        puVar5 = (undefined *)EVP_MD_get0_name(*(long *)(param_1 + 0x20),&_LC0);
      }
      iVar2 = OSSL_PARAM_set_utf8_string(lVar3,puVar5);
      if (iVar2 == 0) goto LAB_0010005e;
    }
    lVar3 = OSSL_PARAM_locate(param_2,"kdf-outlen");
    if (lVar3 != 0) {
      iVar2 = OSSL_PARAM_set_size_t(lVar3,*(undefined8 *)(param_1 + 0x38));
      if (iVar2 == 0) goto LAB_0010005e;
    }
    lVar3 = OSSL_PARAM_locate(param_2,"kdf-ukm");
    if (lVar3 != 0) {
      iVar2 = OSSL_PARAM_set_octet_ptr
                        (lVar3,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
      if (iVar2 == 0) goto LAB_0010005e;
    }
    lVar3 = OSSL_PARAM_locate(param_2,"cekalg");
    bVar1 = true;
    if (lVar3 != 0) {
      puVar5 = *(undefined **)(param_1 + 0x40);
      if (puVar5 == (undefined *)0x0) {
        puVar5 = &_LC0;
      }
      iVar2 = OSSL_PARAM_set_utf8_string(lVar3,puVar5);
      return iVar2 != 0;
    }
  }
  else {
    if (*(int *)(param_1 + 0x1c) == 0) {
      pcVar4 = "";
LAB_0010006f:
      iVar2 = OSSL_PARAM_set_utf8_string(lVar3,pcVar4);
      if (iVar2 != 0) goto LAB_00100078;
    }
    else if (*(int *)(param_1 + 0x1c) == 1) {
      pcVar4 = "X942KDF-ASN1";
      goto LAB_0010006f;
    }
LAB_0010005e:
    bVar1 = false;
  }
  return bVar1;
}



bool dh_set_ctx_params(undefined8 *param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;
  long in_FS_OFFSET;
  bool bVar5;
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
  if (param_1 == (undefined8 *)0x0) goto LAB_00100320;
  if ((param_2 == (long *)0x0) || (*param_2 == 0)) goto LAB_00100410;
  lVar3 = OSSL_PARAM_locate_const(param_2,"kdf-type");
  if (lVar3 == 0) {
LAB_00100228:
    lVar3 = OSSL_PARAM_locate_const(param_2,"kdf-digest");
    if (lVar3 == 0) {
LAB_00100330:
      lVar3 = OSSL_PARAM_locate_const(param_2,"kdf-outlen");
      if (lVar3 != 0) {
        iVar2 = OSSL_PARAM_get_size_t(lVar3,&local_e0);
        if (iVar2 == 0) goto LAB_00100320;
        param_1[7] = CONCAT44(uStack_dc,local_e0);
      }
      lVar3 = OSSL_PARAM_locate_const(param_2,"kdf-ukm");
      if (lVar3 != 0) {
        local_e8 = 0;
        CRYPTO_free((void *)param_1[5]);
        lVar1 = *(long *)(lVar3 + 0x10);
        param_1[5] = 0;
        param_1[6] = 0;
        if ((lVar1 != 0) && (*(long *)(lVar3 + 0x18) != 0)) {
          iVar2 = OSSL_PARAM_get_octet_string(lVar3,&local_e8,0,&local_e0);
          if (iVar2 == 0) goto LAB_00100320;
          param_1[5] = local_e8;
          param_1[6] = CONCAT44(uStack_dc,local_e0);
        }
      }
      lVar3 = OSSL_PARAM_locate_const(param_2,&_LC9);
      if (lVar3 != 0) {
        iVar2 = OSSL_PARAM_get_uint(lVar3,&local_e0);
        if (iVar2 == 0) goto LAB_00100320;
        *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) & 0xfe | local_e0 != 0;
      }
      lVar3 = OSSL_PARAM_locate_const(param_2,"cekalg");
      if (lVar3 != 0) {
        local_f0 = local_d8;
        CRYPTO_free((void *)param_1[8]);
        lVar1 = *(long *)(lVar3 + 0x10);
        param_1[8] = 0;
        if ((lVar1 != 0) && (*(long *)(lVar3 + 0x18) != 0)) {
          iVar2 = OSSL_PARAM_get_utf8_string(lVar3,&local_f0,0x50);
          if (iVar2 != 0) {
            pcVar4 = CRYPTO_strdup(local_d8,"providers/implementations/exchange/dh_exch.c",0x1c2);
            bVar5 = pcVar4 != (char *)0x0;
            param_1[8] = pcVar4;
            goto LAB_00100415;
          }
          goto LAB_00100320;
        }
      }
LAB_00100410:
      bVar5 = true;
      goto LAB_00100415;
    }
    local_88 = (undefined1  [16])0x0;
    local_78 = (undefined1  [16])0x0;
    local_68 = (undefined1  [16])0x0;
    local_58 = (undefined1  [16])0x0;
    local_48 = (undefined1  [16])0x0;
    local_f0 = local_d8;
    iVar2 = OSSL_PARAM_get_utf8_string(lVar3,&local_f0,0x50);
    if (iVar2 != 0) {
      local_f0 = local_88;
      lVar3 = OSSL_PARAM_locate_const(param_2,"kdf-digest-props");
      if ((lVar3 == 0) || (iVar2 = OSSL_PARAM_get_utf8_string(lVar3,&local_f0,0x50), iVar2 != 0)) {
        EVP_MD_free(param_1[4]);
        lVar3 = EVP_MD_fetch(*param_1,local_d8,local_88);
        param_1[4] = lVar3;
        if (lVar3 != 0) {
          iVar2 = EVP_MD_xof(lVar3);
          if (iVar2 == 0) goto LAB_00100330;
          ERR_new();
          ERR_set_debug("providers/implementations/exchange/dh_exch.c",0x18c,"dh_set_ctx_params");
          ERR_set_error(0x39,0xb7,0);
        }
      }
    }
  }
  else {
    local_f0 = local_d8;
    iVar2 = OSSL_PARAM_get_utf8_string(lVar3,&local_f0,0x50);
    if (iVar2 != 0) {
      if (local_d8[0] == '\0') {
        *(undefined4 *)((long)param_1 + 0x1c) = 0;
      }
      else {
        iVar2 = strcmp(local_d8,"X942KDF-ASN1");
        if (iVar2 != 0) goto LAB_00100320;
        *(undefined4 *)((long)param_1 + 0x1c) = 1;
      }
      goto LAB_00100228;
    }
  }
LAB_00100320:
  bVar5 = false;
LAB_00100415:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar5;
}



bool dh_init(long param_1,DH *param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = ossl_prov_is_running();
  if (((iVar1 != 0) && (param_1 != 0)) && (param_2 != (DH *)0x0)) {
    iVar1 = DH_up_ref(param_2);
    if (iVar1 != 0) {
      DH_free(*(DH **)(param_1 + 8));
      *(DH **)(param_1 + 8) = param_2;
      *(undefined4 *)(param_1 + 0x1c) = 0;
      iVar1 = dh_set_ctx_params(param_1,param_3);
      return iVar1 != 0;
    }
  }
  return false;
}



void dh_freectx(void *param_1)

{
  CRYPTO_free(*(void **)((long)param_1 + 0x40));
  DH_free(*(DH **)((long)param_1 + 8));
  DH_free(*(DH **)((long)param_1 + 0x10));
  EVP_MD_free(*(undefined8 *)((long)param_1 + 0x20));
  CRYPTO_clear_free(*(undefined8 *)((long)param_1 + 0x28),*(undefined8 *)((long)param_1 + 0x30),
                    "providers/implementations/exchange/dh_exch.c",0x119);
  CRYPTO_free(param_1);
  return;
}



undefined8 dh_set_peer(long param_1,DH *param_2)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  iVar2 = ossl_prov_is_running();
  if (((iVar2 != 0) && (param_1 != 0)) && (param_2 != (DH *)0x0)) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    lVar3 = ossl_dh_get0_params(param_2);
    lVar4 = ossl_dh_get0_params(uVar1);
    if (((lVar3 == 0) || (lVar4 == 0)) || (iVar2 = ossl_ffc_params_cmp(lVar3,lVar4,1), iVar2 == 0))
    {
      ERR_new();
      ERR_set_debug("providers/implementations/exchange/dh_exch.c",0x9c,"dh_match_params");
      ERR_set_error(0x39,0xcb,0);
    }
    else {
      iVar2 = DH_up_ref(param_2);
      if (iVar2 != 0) {
        DH_free(*(DH **)(param_1 + 0x10));
        *(DH **)(param_1 + 0x10) = param_2;
        return 1;
      }
    }
  }
  return 0;
}



undefined8 dh_plain_derive(long param_1,uchar *param_2,ulong *param_3,ulong param_4,int param_5)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  BIGNUM *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = (BIGNUM *)0x0;
  if ((*(DH **)(param_1 + 8) == (DH *)0x0) || (*(long *)(param_1 + 0x10) == 0)) {
    ERR_new();
    ERR_set_debug("providers/implementations/exchange/dh_exch.c",0xb9,"dh_plain_derive");
    ERR_set_error(0x39,0x80,0);
LAB_001007d8:
    uVar3 = 0;
  }
  else {
    iVar1 = DH_size(*(DH **)(param_1 + 8));
    uVar2 = (ulong)iVar1;
    if (param_2 != (uchar *)0x0) {
      if (param_4 < uVar2) {
        ERR_new();
        ERR_set_debug("providers/implementations/exchange/dh_exch.c",0xc3,"dh_plain_derive");
        ERR_set_error(0x39,0x6a,0);
        uVar3 = 0;
        goto LAB_00100782;
      }
      DH_get0_key(*(undefined8 *)(param_1 + 0x10),&local_38,0);
      if (param_5 == 0) {
        iVar1 = DH_compute_key(param_2,local_38,*(DH **)(param_1 + 8));
      }
      else {
        iVar1 = DH_compute_key_padded(param_2,local_38,*(DH **)(param_1 + 8));
      }
      if (iVar1 < 1) goto LAB_001007d8;
      uVar2 = (ulong)iVar1;
    }
    *param_3 = uVar2;
    uVar3 = 1;
  }
LAB_00100782:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 * dh_newctx(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)0x0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    puVar2 = (undefined8 *)CRYPTO_zalloc(0x48,"providers/implementations/exchange/dh_exch.c",0x59);
    if (puVar2 != (undefined8 *)0x0) {
      uVar3 = ossl_prov_ctx_get0_libctx(param_1);
      *(undefined4 *)((long)puVar2 + 0x1c) = 0;
      *puVar2 = uVar3;
    }
  }
  return puVar2;
}



undefined8 * dh_dupctx(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 *ptr;
  char *pcVar8;
  long lVar9;
  DH *pDVar10;
  
  iVar7 = ossl_prov_is_running();
  if (iVar7 == 0) {
    return (undefined8 *)0x0;
  }
  ptr = (undefined8 *)CRYPTO_zalloc(0x48,"providers/implementations/exchange/dh_exch.c",0x126);
  if (ptr == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  uVar4 = param_1[3];
  ptr[8] = 0;
  uVar5 = param_1[6];
  uVar6 = param_1[7];
  pDVar10 = (DH *)param_1[1];
  *(undefined1 (*) [16])(ptr + 4) = (undefined1  [16])0x0;
  *ptr = uVar1;
  ptr[1] = uVar2;
  ptr[2] = uVar3;
  ptr[3] = uVar4;
  ptr[6] = uVar5;
  ptr[7] = uVar6;
  *(undefined1 (*) [16])(ptr + 1) = (undefined1  [16])0x0;
  if (pDVar10 != (DH *)0x0) {
    iVar7 = DH_up_ref(pDVar10);
    if (iVar7 == 0) goto LAB_001009b0;
    pDVar10 = (DH *)param_1[1];
  }
  ptr[1] = pDVar10;
  pDVar10 = (DH *)param_1[2];
  if (pDVar10 != (DH *)0x0) {
    iVar7 = DH_up_ref(pDVar10);
    if (iVar7 == 0) goto LAB_001009b0;
    pDVar10 = (DH *)param_1[2];
  }
  ptr[2] = pDVar10;
  lVar9 = param_1[4];
  if (lVar9 != 0) {
    iVar7 = EVP_MD_up_ref();
    if (iVar7 == 0) goto LAB_001009b0;
    lVar9 = param_1[4];
  }
  ptr[4] = lVar9;
  if ((param_1[5] != 0) && (param_1[6] != 0)) {
    lVar9 = CRYPTO_memdup(param_1[5],param_1[6],"providers/implementations/exchange/dh_exch.c",0x142
                         );
    ptr[5] = lVar9;
    if (lVar9 == 0) goto LAB_001009b0;
  }
  if ((char *)param_1[8] == (char *)0x0) {
    return ptr;
  }
  pcVar8 = CRYPTO_strdup((char *)param_1[8],"providers/implementations/exchange/dh_exch.c",0x149);
  ptr[8] = pcVar8;
  if (pcVar8 != (char *)0x0) {
    return ptr;
  }
LAB_001009b0:
  CRYPTO_free((void *)ptr[8]);
  DH_free((DH *)ptr[1]);
  DH_free((DH *)ptr[2]);
  EVP_MD_free(ptr[4]);
  CRYPTO_clear_free(ptr[5],ptr[6],"providers/implementations/exchange/dh_exch.c",0x119);
  CRYPTO_free(ptr);
  return (undefined8 *)0x0;
}



ulong dh_derive(undefined8 *param_1,long param_2,ulong *param_3,ulong param_4)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = ossl_prov_is_running();
  if ((int)uVar3 == 0) goto LAB_00100b18;
  if (*(int *)((long)param_1 + 0x1c) == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar3 = dh_plain_derive(param_1,param_2,param_3,param_4,*(byte *)(param_1 + 3) & 1);
      return uVar3;
    }
    goto LAB_00100c40;
  }
  if (*(int *)((long)param_1 + 0x1c) == 1) {
    if (param_2 == 0) {
      *param_3 = param_1[7];
      uVar3 = 1;
    }
    else {
      if (param_4 < (ulong)param_1[7]) {
        ERR_new();
        ERR_set_debug("providers/implementations/exchange/dh_exch.c",0xe1,"dh_X9_42_kdf_derive");
        ERR_set_error(0x39,0x6a,0);
        goto LAB_00100bb0;
      }
      if (((DH *)param_1[1] == (DH *)0x0) || (param_1[2] == 0)) {
        ERR_new();
        ERR_set_debug("providers/implementations/exchange/dh_exch.c",0xb9,"dh_plain_derive");
        ERR_set_error(0x39,0x80,0);
        uVar3 = 0;
      }
      else {
        iVar1 = DH_size((DH *)param_1[1]);
        lVar5 = (long)iVar1;
        local_48 = lVar5;
        lVar4 = CRYPTO_secure_malloc(lVar5,"providers/implementations/exchange/dh_exch.c",0xe6);
        if (lVar4 == 0) goto LAB_00100bb0;
        uVar2 = dh_plain_derive(param_1,lVar4,&local_48,lVar5,1);
        lVar5 = local_48;
        if (uVar2 != 0) {
          uVar3 = param_1[7];
          if (*(int *)((long)param_1 + 0x1c) == 1) {
            uVar2 = ossl_dh_kdf_X9_42_asn1
                              (param_2,uVar3,lVar4,local_48,param_1[8],param_1[5],param_1[6],
                               param_1[4],*param_1,0);
            if (uVar2 == 0) goto LAB_00100af8;
            uVar3 = param_1[7];
          }
          *param_3 = uVar3;
          uVar2 = 1;
        }
LAB_00100af8:
        CRYPTO_secure_clear_free(lVar4,lVar5,"providers/implementations/exchange/dh_exch.c",0xf9);
        uVar3 = (ulong)uVar2;
      }
    }
  }
  else {
LAB_00100bb0:
    uVar3 = 0;
  }
LAB_00100b18:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
LAB_00100c40:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


