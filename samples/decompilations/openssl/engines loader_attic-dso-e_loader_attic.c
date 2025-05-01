
undefined8 file_expect(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x40) = param_2;
  return 1;
}



bool file_error(long param_1)

{
  return 0 < *(int *)(param_1 + 0xc);
}



undefined8 loader_attic_init(void)

{
  return 1;
}



undefined8 loader_attic_destroy(void)

{
  long lVar1;
  
  lVar1 = OSSL_STORE_unregister_loader(&_LC0);
  if (lVar1 != 0) {
    if (error_loaded != 0) {
      ERR_unload_strings(lib_code,(ERR_STRING_DATA *)ATTIC_str_reasons);
      error_loaded = 0;
    }
    OSSL_STORE_LOADER_free(lVar1);
    return 1;
  }
  return 0;
}



long try_decode_PrivateKey
               (char *param_1,undefined8 param_2,uchar *param_3,long param_4,undefined8 param_5,
               int *param_6)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  EVP_PKEY_ASN1_METHOD *pEVar4;
  long lVar5;
  PKCS8_PRIV_KEY_INFO *a;
  ENGINE *e;
  ENGINE_PKEY_ASN1_METHS_PTR pEVar6;
  EVP_PKEY *pEVar7;
  long in_FS_OFFSET;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  EVP_PKEY *local_80;
  uchar *local_70 [2];
  int local_60;
  byte local_5c [4];
  int *local_58;
  EVP_PKEY_ASN1_METHOD *local_50;
  uchar *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_70[0] = param_3;
  if (param_1 == (char *)0x0) {
    e = ENGINE_get_first();
    local_80 = (EVP_PKEY *)0x0;
    if (e != (ENGINE *)0x0) {
      do {
        pEVar6 = ENGINE_get_pkey_asn1_meths(e);
        if (pEVar6 != (ENGINE_PKEY_ASN1_METHS_PTR)0x0) {
          local_58 = (int *)0x0;
          iVar1 = (*pEVar6)(e,(EVP_PKEY_ASN1_METHOD **)0x0,&local_58,0);
          if (0 < iVar1) {
            lVar5 = 0;
            do {
              local_50 = (EVP_PKEY_ASN1_METHOD *)0x0;
              local_48 = local_70[0];
              iVar2 = (*pEVar6)(e,&local_50,(int **)0x0,*(int *)((long)local_58 + lVar5));
              if (((iVar2 != 0) &&
                  (iVar2 = EVP_PKEY_asn1_get0_info
                                     (&local_60,(int *)0x0,(int *)local_5c,(char **)0x0,(char **)0x0
                                      ,local_50), iVar2 != 0)) && ((local_5c[0] & 1) == 0)) {
                ERR_set_mark();
                pEVar7 = (EVP_PKEY *)
                         d2i_PrivateKey_ex(local_60,0,&local_48,param_4,in_stack_00000020,
                                           in_stack_00000028);
                if (pEVar7 != (EVP_PKEY *)0x0) {
                  if (local_80 != (EVP_PKEY *)0x0) {
                    EVP_PKEY_free(pEVar7);
                    pEVar7 = local_80;
                  }
                  local_80 = pEVar7;
                  *param_6 = *param_6 + 1;
                }
                ERR_pop_to_mark();
              }
              lVar5 = lVar5 + 4;
            } while ((long)iVar1 * 4 - lVar5 != 0);
          }
        }
        e = ENGINE_get_next(e);
      } while (e != (ENGINE *)0x0);
    }
    for (iVar1 = 0; iVar2 = EVP_PKEY_asn1_get_count(), iVar1 < iVar2; iVar1 = iVar1 + 1) {
      local_48 = local_70[0];
      pEVar4 = EVP_PKEY_asn1_get0(iVar1);
      iVar2 = EVP_PKEY_asn1_get0_info
                        ((int *)&local_58,(int *)0x0,(int *)&local_50,(char **)0x0,(char **)0x0,
                         pEVar4);
      if ((iVar2 != 0) && (((ulong)local_50 & 1) == 0)) {
        ERR_set_mark();
        pEVar7 = (EVP_PKEY *)
                 d2i_PrivateKey_ex((ulong)local_58 & 0xffffffff,0,&local_48,param_4,
                                   in_stack_00000020,in_stack_00000028);
        if (pEVar7 != (EVP_PKEY *)0x0) {
          if (local_80 != (EVP_PKEY *)0x0) {
            EVP_PKEY_free(pEVar7);
            pEVar7 = local_80;
          }
          *param_6 = *param_6 + 1;
          local_80 = pEVar7;
        }
        ERR_pop_to_mark();
      }
    }
    if (1 < *param_6) {
      EVP_PKEY_free(local_80);
      lVar5 = 0;
      goto LAB_001001be;
    }
LAB_001001a8:
    if (local_80 != (EVP_PKEY *)0x0) {
      lVar5 = OSSL_STORE_INFO_new_PKEY(local_80);
      if (lVar5 == 0) {
        EVP_PKEY_free(local_80);
      }
      goto LAB_001001be;
    }
  }
  else {
    iVar1 = strcmp(param_1,"PRIVATE KEY");
    if (iVar1 == 0) {
      a = d2i_PKCS8_PRIV_KEY_INFO((PKCS8_PRIV_KEY_INFO **)0x0,local_70,param_4);
      *param_6 = 1;
      if (a != (PKCS8_PRIV_KEY_INFO *)0x0) {
        local_80 = (EVP_PKEY *)EVP_PKCS82PKEY_ex(a,in_stack_00000020,in_stack_00000028);
        PKCS8_PRIV_KEY_INFO_free(a);
        goto LAB_001001a8;
      }
      PKCS8_PRIV_KEY_INFO_free((PKCS8_PRIV_KEY_INFO *)0x0);
    }
    else {
      sVar3 = strlen(param_1);
      if (0xc < (int)sVar3) {
        lVar5 = (long)(int)sVar3 + -0xc;
        if (((param_1[lVar5] == ' ') &&
            (iVar1 = strcmp(param_1 + lVar5 + 1,"PRIVATE KEY"), iVar1 == 0)) &&
           ((pEVar4 = EVP_PKEY_asn1_find_str((ENGINE **)0x0,param_1,(int)lVar5),
            pEVar4 != (EVP_PKEY_ASN1_METHOD *)0x0 &&
            (iVar1 = EVP_PKEY_asn1_get0_info
                               ((int *)&local_48,(int *)0x0,(int *)0x0,(char **)0x0,(char **)0x0,
                                pEVar4), iVar1 != 0)))) {
          *param_6 = 1;
          local_80 = (EVP_PKEY *)
                     d2i_PrivateKey_ex((ulong)local_48 & 0xffffffff,0,local_70,param_4,
                                       in_stack_00000020,in_stack_00000028);
          goto LAB_001001a8;
        }
      }
    }
  }
  lVar5 = 0;
LAB_001001be:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar5;
}



undefined8
try_decode_PUBKEY(char *param_1,undefined8 param_2,uchar *param_3,long param_4,undefined8 param_5,
                 undefined4 *param_6)

{
  int iVar1;
  EVP_PKEY *pEVar2;
  undefined8 uVar3;
  uchar *local_20 [2];
  
  local_20[0] = param_3;
  if (param_1 != (char *)0x0) {
    iVar1 = strcmp(param_1,"PUBLIC KEY");
    if (iVar1 != 0) {
      return 0;
    }
    *param_6 = 1;
  }
  pEVar2 = d2i_PUBKEY((EVP_PKEY **)0x0,local_20,param_4);
  if (pEVar2 == (EVP_PKEY *)0x0) {
    return 0;
  }
  *param_6 = 1;
  uVar3 = OSSL_STORE_INFO_new_PUBKEY(pEVar2);
  return uVar3;
}



long try_decode_X509CRL(char *param_1,undefined8 param_2,uchar *param_3,long param_4,
                       undefined8 param_5,undefined4 *param_6)

{
  int iVar1;
  X509_CRL *a;
  long lVar2;
  uchar *local_20 [2];
  
  local_20[0] = param_3;
  if (param_1 != (char *)0x0) {
    iVar1 = strcmp(param_1,"X509 CRL");
    if (iVar1 != 0) {
      return 0;
    }
    *param_6 = 1;
  }
  a = d2i_X509_CRL((X509_CRL **)0x0,local_20,param_4);
  if (a != (X509_CRL *)0x0) {
    *param_6 = 1;
    lVar2 = OSSL_STORE_INFO_new_CRL(a);
    if (lVar2 != 0) {
      return lVar2;
    }
  }
  X509_CRL_free(a);
  return 0;
}



long try_decode_X509Certificate
               (char *param_1,undefined8 param_2,uchar *param_3,long param_4,undefined8 param_5,
               undefined4 *param_6)

{
  int iVar1;
  int iVar2;
  X509 *pXVar3;
  long lVar4;
  long in_FS_OFFSET;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  uchar *local_50;
  X509 *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (X509 *)0x0;
  local_50 = param_3;
  if (param_1 == (char *)0x0) {
    iVar1 = 1;
LAB_001005c9:
    local_48 = (X509 *)X509_new_ex(in_stack_00000020,in_stack_00000028);
    if (local_48 != (X509 *)0x0) {
      pXVar3 = d2i_X509_AUX(&local_48,&local_50,param_4);
      if (pXVar3 == (X509 *)0x0) {
        if (iVar1 != 0) {
          pXVar3 = d2i_X509(&local_48,&local_50,param_4);
          if (pXVar3 != (X509 *)0x0) goto LAB_001005ff;
        }
      }
      else {
LAB_001005ff:
        *param_6 = 1;
        lVar4 = OSSL_STORE_INFO_new_CERT(local_48);
        if (lVar4 != 0) goto LAB_00100619;
      }
      X509_free(local_48);
      lVar4 = 0;
      goto LAB_00100619;
    }
  }
  else {
    iVar1 = strcmp(param_1,"TRUSTED CERTIFICATE");
    if (iVar1 == 0) {
LAB_001005c2:
      *param_6 = 1;
      goto LAB_001005c9;
    }
    iVar1 = strcmp(param_1,"X509 CERTIFICATE");
    if (iVar1 == 0) {
      iVar1 = 1;
      goto LAB_001005c2;
    }
    iVar1 = 1;
    iVar2 = strcmp(param_1,"CERTIFICATE");
    if (iVar2 == 0) goto LAB_001005c2;
  }
  lVar4 = 0;
LAB_00100619:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void destroy_ctx_PKCS12(undefined8 *param_1)

{
  OPENSSL_sk_pop_free(*param_1,store_info_free);
  *param_1 = 0;
  return;
}



bool eof_PKCS12(long param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = OPENSSL_sk_num();
    return iVar1 == 0;
  }
  return true;
}



void store_info_free(long param_1)

{
  undefined8 *ptr;
  
  if (param_1 != 0) {
    ptr = (undefined8 *)OSSL_STORE_INFO_get0_data(0xffffffff,param_1);
    if (ptr != (undefined8 *)0x0) {
      BUF_MEM_free((BUF_MEM *)*ptr);
      CRYPTO_free((void *)ptr[1]);
      CRYPTO_free(ptr);
    }
  }
  OSSL_STORE_INFO_free(param_1);
  return;
}



undefined8 file_find_type(long param_1)

{
  BIO_METHOD *type;
  BIO *pBVar1;
  char *pcVar2;
  undefined8 uVar3;
  long lVar4;
  long in_FS_OFFSET;
  char acStack_1028 [4095];
  undefined1 local_29;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar2 = acStack_1028;
  for (lVar4 = 0x200; lVar4 != 0; lVar4 = lVar4 + -1) {
    *(undefined8 *)pcVar2 = 0;
    pcVar2 = (char *)((long)pcVar2 + 8);
  }
  type = BIO_f_buffer();
  pBVar1 = BIO_new(type);
  uVar3 = 0;
  if (pBVar1 != (BIO *)0x0) {
    pBVar1 = BIO_push(pBVar1,*(BIO **)(param_1 + 0x18));
    *(BIO **)(param_1 + 0x18) = pBVar1;
    lVar4 = BIO_ctrl(pBVar1,0x1d,0xfff,acStack_1028);
    if (0 < lVar4) {
      local_29 = 0;
      pcVar2 = strstr(acStack_1028,"-----BEGIN ");
      if (pcVar2 != (char *)0x0) {
        *(undefined4 *)(param_1 + 8) = 1;
      }
    }
    uVar3 = 1;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 loader_attic_finish(void)

{
  return 1;
}



void ERR_ATTIC_error_constprop_0(undefined4 param_1,undefined4 param_2)

{
  if (lib_code == 0) {
    lib_code = ERR_get_next_error_library();
  }
  ERR_new();
  ERR_set_debug("engines/e_loader_attic_err.c",0x47,"ERR_ATTIC_error");
  ERR_set_error(lib_code,param_1,0);
  ERR_set_debug("engines/e_loader_attic.c",param_2,0);
  return;
}



ulong file_eof(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 8) == 2) {
    return (ulong)*(uint *)(param_1 + 0x20);
  }
  if ((*(long *)(param_1 + 0x20) != 0) &&
     (uVar1 = (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(undefined8 *)(param_1 + 0x28)),
     (int)uVar1 == 0)) {
    return uVar1;
  }
  uVar1 = BIO_ctrl(*(BIO **)(param_1 + 0x18),2,0,(void *)0x0);
  return uVar1;
}



long try_decode_params(char *param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                      undefined8 param_5,int *param_6)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  EVP_PKEY_ASN1_METHOD *pEVar4;
  EVP_PKEY *pkey;
  long lVar5;
  EVP_PKEY *pkey_00;
  long in_FS_OFFSET;
  ulong local_50 [2];
  int local_40;
  byte local_3c [4];
  ulong local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50[0] = param_3;
  if (param_1 == (char *)0x0) {
    pkey = (EVP_PKEY *)0x0;
    for (iVar1 = 0; iVar2 = EVP_PKEY_asn1_get_count(), iVar1 < iVar2; iVar1 = iVar1 + 1) {
      local_38 = local_50[0];
      pEVar4 = EVP_PKEY_asn1_get0(iVar1);
      iVar2 = EVP_PKEY_asn1_get0_info
                        (&local_40,(int *)0x0,(int *)local_3c,(char **)0x0,(char **)0x0,pEVar4);
      if ((iVar2 != 0) && ((local_3c[0] & 1) == 0)) {
        ERR_set_mark();
        pkey_00 = (EVP_PKEY *)d2i_KeyParams(local_40,0,&local_38);
        if (pkey_00 != (EVP_PKEY *)0x0) {
          if (pkey != (EVP_PKEY *)0x0) {
            EVP_PKEY_free(pkey_00);
            pkey_00 = pkey;
          }
          *param_6 = *param_6 + 1;
          pkey = pkey_00;
        }
        ERR_pop_to_mark();
      }
    }
    if (*param_6 < 2) {
LAB_001009e2:
      if (pkey != (EVP_PKEY *)0x0) {
        lVar5 = OSSL_STORE_INFO_new_PARAMS(pkey);
        if (lVar5 == 0) {
          EVP_PKEY_free(pkey);
        }
        goto LAB_001009fc;
      }
    }
    else {
      EVP_PKEY_free(pkey);
    }
  }
  else {
    sVar3 = strlen(param_1);
    if (0xb < (int)sVar3) {
      lVar5 = (long)(int)sVar3 + -0xb;
      if ((((param_1[lVar5] == ' ') &&
           (iVar1 = strcmp(param_1 + lVar5 + 1,"PARAMETERS"), iVar1 == 0)) &&
          (pEVar4 = EVP_PKEY_asn1_find_str((ENGINE **)0x0,param_1,(int)lVar5),
          pEVar4 != (EVP_PKEY_ASN1_METHOD *)0x0)) &&
         (iVar1 = EVP_PKEY_asn1_get0_info
                            ((int *)&local_38,(int *)0x0,(int *)0x0,(char **)0x0,(char **)0x0,pEVar4
                            ), iVar1 != 0)) {
        *param_6 = 1;
        pkey = (EVP_PKEY *)d2i_KeyParams(local_38 & 0xffffffff,0,local_50,param_4);
        goto LAB_001009e2;
      }
    }
  }
  lVar5 = 0;
LAB_001009fc:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar5;
}



undefined8 file_close(undefined8 *param_1)

{
  BIO *b;
  
  if ((*(byte *)(param_1 + 2) & 2) == 0) {
    if (*(int *)(param_1 + 1) == 2) {
      OPENSSL_DIR_end(param_1 + 3);
    }
    else {
      BIO_free_all((BIO *)param_1[3]);
    }
  }
  else {
    b = (BIO *)param_1[3];
    BIO_pop(b);
    param_1[3] = 0;
    BIO_free(b);
  }
  CRYPTO_free((void *)param_1[10]);
  CRYPTO_free((void *)*param_1);
  if ((*(int *)(param_1 + 1) != 2) && (param_1[4] != 0)) {
    (**(code **)(param_1[4] + 0x18))(param_1 + 5);
    *(undefined1 (*) [16])(param_1 + 4) = (undefined1  [16])0x0;
  }
  CRYPTO_free(param_1);
  return 1;
}



undefined8 * file_attach(undefined8 param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  int iVar1;
  undefined8 *ptr;
  char *pcVar2;
  
  ptr = (undefined8 *)CRYPTO_zalloc(0x58,"engines/e_loader_attic.c",0x432);
  if (ptr == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  if (param_4 != (char *)0x0) {
    pcVar2 = CRYPTO_strdup(param_4,"engines/e_loader_attic.c",0x433);
    ptr[10] = pcVar2;
    if (pcVar2 == (char *)0x0) {
      CRYPTO_free((void *)0x0);
      CRYPTO_free((void *)*ptr);
      iVar1 = *(int *)(ptr + 1);
      goto joined_r0x00100c7d;
    }
  }
  *(uint *)(ptr + 2) = *(uint *)(ptr + 2) | 2;
  ptr[9] = param_3;
  ptr[3] = param_2;
  iVar1 = file_find_type(ptr);
  if (iVar1 != 0) {
    return ptr;
  }
  ptr[3] = 0;
  CRYPTO_free((void *)ptr[10]);
  CRYPTO_free((void *)*ptr);
  iVar1 = *(int *)(ptr + 1);
joined_r0x00100c7d:
  if ((iVar1 != 2) && (ptr[4] != 0)) {
    (**(code **)(ptr[4] + 0x18))(ptr + 5);
    *(undefined1 (*) [16])(ptr + 4) = (undefined1  [16])0x0;
  }
  CRYPTO_free(ptr);
  return (undefined8 *)0x0;
}



undefined8 file_ctrl(long param_1,int param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  
  if (param_2 != 1) {
    return 1;
  }
  uVar1 = *param_3;
  if (uVar1 < 0x30) {
    *param_3 = uVar1 + 8;
    iVar2 = **(int **)((ulong)uVar1 + *(long *)(param_3 + 4));
  }
  else {
    puVar3 = *(undefined8 **)(param_3 + 2);
    *(undefined8 **)(param_3 + 2) = puVar3 + 1;
    iVar2 = *(int *)*puVar3;
  }
  if (iVar2 != 0) {
    if (iVar2 == 1) {
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      return 1;
    }
    if (lib_code == 0) {
      lib_code = ERR_get_next_error_library();
    }
    ERR_new();
    ERR_set_debug("engines/e_loader_attic_err.c",0x47,"ERR_ATTIC_error");
    ERR_set_error(lib_code,0x80106,0);
    ERR_set_debug("engines/e_loader_attic.c",0x456,0);
    return 0;
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xfffffffe;
  return 1;
}



undefined8 file_find(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = OSSL_STORE_SEARCH_get_type(param_2);
  if (iVar1 == 1) {
    if (param_1 == 0) {
      return 1;
    }
    if (*(int *)(param_1 + 8) == 2) {
      uVar2 = OSSL_STORE_SEARCH_get0_name(param_2);
      uVar2 = X509_NAME_hash_ex(uVar2,0,0,0);
      BIO_snprintf((char *)(param_1 + 0x24),9,"%08lx",uVar2);
      return 1;
    }
    if (lib_code == 0) {
      lib_code = ERR_get_next_error_library();
    }
    ERR_new();
    ERR_set_debug("engines/e_loader_attic_err.c",0x47,"ERR_ATTIC_error");
    ERR_set_error(lib_code,0x6a,0);
    ERR_set_debug("engines/e_loader_attic.c",0x478,0);
  }
  else if (param_1 != 0) {
    if (lib_code == 0) {
      lib_code = ERR_get_next_error_library();
    }
    ERR_new();
    ERR_set_debug("engines/e_loader_attic_err.c",0x47,"ERR_ATTIC_error");
    ERR_set_error(lib_code,0x6d,0);
    ERR_set_debug("engines/e_loader_attic.c",0x484,0);
  }
  return 0;
}



char * file_get_pass(UI_METHOD *param_1,char *param_2,int param_3,char *param_4,char *param_5,
                    void *param_6)

{
  int iVar1;
  UI *ui;
  char *prompt;
  
  ui = UI_new();
  if (ui == (UI *)0x0) {
    if (lib_code == 0) {
      lib_code = ERR_get_next_error_library();
    }
    ERR_new();
    ERR_set_debug("engines/e_loader_attic_err.c",0x47,"ERR_ATTIC_error");
    ERR_set_error(lib_code,0x80028,0);
    ERR_set_debug("engines/e_loader_attic.c",0x3e,0);
    return (char *)0x0;
  }
  if (param_1 != (UI_METHOD *)0x0) {
    UI_set_method(ui,param_1);
  }
  UI_add_user_data(ui,param_6);
  prompt = UI_construct_prompt(ui,param_4,param_5);
  if (prompt == (char *)0x0) {
    if (lib_code == 0) {
      lib_code = ERR_get_next_error_library();
    }
    ERR_new();
    ERR_set_debug("engines/e_loader_attic_err.c",0x47,"ERR_ATTIC_error");
    ERR_set_error(lib_code,0x80028,0);
    ERR_set_debug("engines/e_loader_attic.c",0x47,0);
  }
  else {
    iVar1 = UI_add_input_string(ui,prompt,2,param_2,0,param_3 + -1);
    if (iVar1 < 1) {
      if (lib_code == 0) {
        lib_code = ERR_get_next_error_library();
      }
      ERR_new();
      ERR_set_debug("engines/e_loader_attic_err.c",0x47,"ERR_ATTIC_error");
      ERR_set_error(lib_code,0x80028,0);
      ERR_set_debug("engines/e_loader_attic.c",0x4b,0);
    }
    else {
      iVar1 = UI_process(ui);
      if (iVar1 == -2) {
        if (lib_code == 0) {
          lib_code = ERR_get_next_error_library();
        }
        ERR_new();
        ERR_set_debug("engines/e_loader_attic_err.c",0x47,"ERR_ATTIC_error");
        ERR_set_error(lib_code,0x6b,0);
        ERR_set_debug("engines/e_loader_attic.c",0x50,0);
      }
      else {
        if (iVar1 != -1) goto LAB_00101048;
        if (lib_code == 0) {
          lib_code = ERR_get_next_error_library();
        }
        ERR_new();
        ERR_set_debug("engines/e_loader_attic_err.c",0x47,"ERR_ATTIC_error");
        ERR_set_error(lib_code,0x80028,0);
        ERR_set_debug("engines/e_loader_attic.c",0x54,0);
      }
    }
  }
  param_2 = (char *)0x0;
LAB_00101048:
  CRYPTO_free(prompt);
  UI_free(ui);
  return param_2;
}



size_t file_get_pem_pass(undefined8 param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  char *__s;
  size_t sVar1;
  
  __s = (char *)file_get_pass(*param_4,param_1,(long)param_2,param_4[2],param_4[3],param_4[1]);
  sVar1 = 0;
  if (__s != (char *)0x0) {
    sVar1 = strlen(__s);
  }
  return sVar1;
}



undefined8
try_decode_PKCS12(long param_1,undefined8 param_2,uchar *param_3,long param_4,long *param_5,
                 undefined4 *param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  PKCS12 *p12;
  size_t sVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  char *__s;
  long in_FS_OFFSET;
  uchar *local_470 [2];
  EVP_PKEY *local_460;
  X509 *local_458;
  stack_st_X509 *local_450;
  undefined1 local_448 [1032];
  long local_40;
  
  lVar5 = *param_5;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_470[0] = param_3;
  if (lVar5 == 0) {
    uVar3 = 0;
    if (param_1 != 0) goto LAB_001012a3;
    p12 = d2i_PKCS12((PKCS12 **)0x0,local_470,param_4);
    if (p12 == (PKCS12 *)0x0) {
      PKCS12_free((PKCS12 *)0x0);
      goto LAB_001012a3;
    }
    *param_6 = 1;
    local_460 = (EVP_PKEY *)0x0;
    local_458 = (X509 *)0x0;
    local_450 = (stack_st_X509 *)0x0;
    iVar2 = PKCS12_mac_present();
    if (((iVar2 != 0) && (iVar2 = PKCS12_verify_mac(p12,"",0), iVar2 == 0)) &&
       (iVar2 = PKCS12_verify_mac(p12,(char *)0x0,0), iVar2 == 0)) {
      __s = (char *)file_get_pass(param_7,local_448,0x400,"PKCS12 import",param_9,param_8);
      if (__s == (char *)0x0) {
        ERR_ATTIC_error_constprop_0(0x68,0x14b);
      }
      else {
        sVar4 = strlen(__s);
        iVar2 = PKCS12_verify_mac(p12,__s,(int)sVar4);
        if (iVar2 != 0) goto LAB_00101324;
        ERR_ATTIC_error_constprop_0(0x66,0x14f);
      }
      PKCS12_free(p12);
      goto LAB_001012a3;
    }
    __s = "";
LAB_00101324:
    iVar2 = PKCS12_parse(p12,__s,&local_460,&local_458,&local_450);
    if (iVar2 == 0) {
      PKCS12_free(p12);
      goto LAB_001012a3;
    }
    lVar5 = OPENSSL_sk_new_null();
    if (lVar5 == 0) {
      EVP_PKEY_free(local_460);
      X509_free(local_458);
      OSSL_STACK_OF_X509_free(local_450);
      OSSL_STORE_INFO_free(0);
      OSSL_STORE_INFO_free(0);
      OSSL_STORE_INFO_free(0);
    }
    else {
      if (local_460 == (EVP_PKEY *)0x0) {
LAB_00101448:
        if (local_458 != (X509 *)0x0) {
          lVar7 = OSSL_STORE_INFO_new_CERT();
          if (lVar7 == 0) goto LAB_001015f4;
          local_458 = (X509 *)0x0;
          lVar6 = 0;
          iVar2 = OPENSSL_sk_push(lVar5,lVar7);
          if (iVar2 == 0) goto LAB_001015fa;
        }
        do {
          iVar2 = OPENSSL_sk_num(local_450);
          if (iVar2 < 1) {
            bVar1 = true;
            puVar9 = (undefined8 *)0x0;
            goto LAB_001014e7;
          }
          uVar8 = OPENSSL_sk_value(local_450,0);
          puVar9 = (undefined8 *)OSSL_STORE_INFO_new_CERT(uVar8);
          if (puVar9 == (undefined8 *)0x0) {
            lVar7 = 0;
            EVP_PKEY_free(local_460);
            X509_free(local_458);
            OSSL_STACK_OF_X509_free(local_450);
            OSSL_STORE_INFO_free(0);
            bVar1 = false;
            goto LAB_00101510;
          }
          lVar6 = OPENSSL_sk_shift(local_450);
        } while ((lVar6 != 0) && (iVar2 = OPENSSL_sk_push(lVar5), iVar2 != 0));
        bVar1 = false;
LAB_001014e7:
        lVar7 = 0;
        EVP_PKEY_free(local_460);
        X509_free(local_458);
        OSSL_STACK_OF_X509_free(local_450);
        OSSL_STORE_INFO_free(0);
      }
      else {
        lVar6 = OSSL_STORE_INFO_new_PKEY();
        if (lVar6 == 0) {
LAB_001015f4:
          lVar6 = 0;
        }
        else {
          local_460 = (EVP_PKEY *)0x0;
          iVar2 = OPENSSL_sk_push(lVar5,lVar6);
          if (iVar2 != 0) goto LAB_00101448;
        }
        lVar7 = 0;
LAB_001015fa:
        EVP_PKEY_free(local_460);
        X509_free(local_458);
        OSSL_STACK_OF_X509_free(local_450);
        if ((lVar6 != 0) &&
           (puVar9 = (undefined8 *)OSSL_STORE_INFO_get0_data(0xffffffff,lVar6),
           puVar9 != (undefined8 *)0x0)) {
          BUF_MEM_free((BUF_MEM *)*puVar9);
          CRYPTO_free((void *)puVar9[1]);
          CRYPTO_free(puVar9);
        }
        OSSL_STORE_INFO_free(lVar6);
        if (lVar7 == 0) {
          puVar9 = (undefined8 *)0x0;
          bVar1 = false;
        }
        else {
          puVar10 = (undefined8 *)OSSL_STORE_INFO_get0_data(0xffffffff,lVar7);
          bVar1 = false;
          puVar9 = puVar10;
          if (puVar10 != (undefined8 *)0x0) {
            BUF_MEM_free((BUF_MEM *)*puVar10);
            CRYPTO_free((void *)puVar10[1]);
            puVar9 = (undefined8 *)0x0;
            CRYPTO_free(puVar10);
          }
        }
      }
LAB_00101510:
      OSSL_STORE_INFO_free(lVar7);
      if ((puVar9 != (undefined8 *)0x0) &&
         (puVar10 = (undefined8 *)OSSL_STORE_INFO_get0_data(0xffffffff,puVar9),
         puVar10 != (undefined8 *)0x0)) {
        BUF_MEM_free((BUF_MEM *)*puVar10);
        CRYPTO_free((void *)puVar10[1]);
        CRYPTO_free(puVar10);
      }
      OSSL_STORE_INFO_free(puVar9);
      if (!bVar1) {
        OPENSSL_sk_pop_free(lVar5,store_info_free);
        *param_5 = 0;
        PKCS12_free(p12);
        goto LAB_001012a3;
      }
    }
    *param_5 = lVar5;
    PKCS12_free(p12);
    if (lVar5 == 0) goto LAB_001012a3;
  }
  *param_6 = 1;
  uVar3 = OPENSSL_sk_shift(lVar5);
LAB_001012a3:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



long try_decode_PKCS8Encrypted
               (char *param_1,undefined8 param_2,uchar *param_3,long param_4,undefined8 param_5,
               undefined4 *param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  int *piVar1;
  int iVar2;
  X509_SIG *a;
  BUF_MEM *a_00;
  char *pcVar3;
  size_t sVar4;
  uchar *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long in_FS_OFFSET;
  uchar *local_460;
  int local_454;
  X509_ALGOR *local_450;
  int *local_448;
  uchar *local_440;
  undefined1 local_438 [1032];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_450 = (X509_ALGOR *)0x0;
  local_448 = (int *)0x0;
  local_440 = (uchar *)0x0;
  local_460 = param_3;
  if (param_1 == (char *)0x0) {
LAB_001017d3:
    a = d2i_X509_SIG((X509_SIG **)0x0,&local_460,param_4);
    if (a != (X509_SIG *)0x0) {
      *param_6 = 1;
      a_00 = BUF_MEM_new();
      if (a_00 == (BUF_MEM *)0x0) {
        if (lib_code == 0) {
          lib_code = ERR_get_next_error_library();
        }
        ERR_new();
        ERR_set_debug("engines/e_loader_attic_err.c",0x47,"ERR_ATTIC_error");
        ERR_set_error(lib_code,0x80007,0);
        ERR_set_debug("engines/e_loader_attic.c",0x1cd,0);
      }
      else {
        pcVar3 = (char *)file_get_pass(param_7,local_438,0x400,"PKCS8 decrypt pass phrase",param_9,
                                       param_8);
        if (pcVar3 == (char *)0x0) {
          if (lib_code == 0) {
            lib_code = ERR_get_next_error_library();
          }
          ERR_new();
          ERR_set_debug("engines/e_loader_attic_err.c",0x47,"ERR_ATTIC_error");
          ERR_set_error(lib_code,0x65,0);
          ERR_set_debug("engines/e_loader_attic.c",0x1d4,0);
        }
        else {
          X509_SIG_get0(a,&local_450,&local_448);
          piVar1 = local_448;
          sVar4 = strlen(pcVar3);
          puVar5 = PKCS12_pbe_crypt(local_450,pcVar3,(int)sVar4,*(uchar **)(piVar1 + 2),*piVar1,
                                    &local_440,&local_454,0);
          if (puVar5 != (uchar *)0x0) {
            a_00->data = (char *)local_440;
            a_00->length = (long)local_454;
            a_00->max = (long)local_454;
            X509_SIG_free(a);
            puVar6 = (undefined8 *)CRYPTO_zalloc(0x10,"engines/e_loader_attic.c",0xc1);
            if (puVar6 != (undefined8 *)0x0) {
              lVar7 = OSSL_STORE_INFO_new(0xffffffff,puVar6);
              if (lVar7 == 0) {
                if (lib_code == 0) {
                  lib_code = ERR_get_next_error_library();
                }
                ERR_new();
                ERR_set_debug("engines/e_loader_attic_err.c",0x47,"ERR_ATTIC_error");
                ERR_set_error(lib_code,0x8002c,0);
                ERR_set_debug("engines/e_loader_attic.c",0xc4,0);
                CRYPTO_free(puVar6);
              }
              else {
                *puVar6 = a_00;
                pcVar3 = CRYPTO_strdup("PRIVATE KEY","engines/e_loader_attic.c",0xcb);
                puVar6[1] = pcVar3;
                if (pcVar3 != (char *)0x0) goto LAB_001018fe;
                puVar6 = (undefined8 *)OSSL_STORE_INFO_get0_data(0xffffffff,lVar7);
                if (puVar6 != (undefined8 *)0x0) {
                  BUF_MEM_free((BUF_MEM *)*puVar6);
                  CRYPTO_free((void *)puVar6[1]);
                  CRYPTO_free(puVar6);
                }
                OSSL_STORE_INFO_free(lVar7);
              }
            }
            if (lib_code == 0) {
              lib_code = ERR_get_next_error_library();
            }
            ERR_new();
            ERR_set_debug("engines/e_loader_attic_err.c",0x47,"ERR_ATTIC_error");
            a = (X509_SIG *)0x0;
            ERR_set_error(lib_code,0x8002c,0);
            ERR_set_debug("engines/e_loader_attic.c",0x1e4,0);
          }
        }
      }
      X509_SIG_free(a);
      BUF_MEM_free(a_00);
    }
  }
  else {
    iVar2 = strcmp(param_1,"ENCRYPTED PRIVATE KEY");
    if (iVar2 == 0) {
      *param_6 = 1;
      goto LAB_001017d3;
    }
  }
  lVar7 = 0;
LAB_001018fe:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar7;
}



undefined8 * file_open_ex(undefined8 param_1,char *param_2,undefined8 param_3,char *param_4)

{
  int iVar1;
  long lVar2;
  undefined8 *ptr;
  char *pcVar3;
  BIO *a;
  char *pcVar4;
  int *piVar5;
  undefined8 *puVar6;
  long in_FS_OFFSET;
  long local_110;
  char *local_f8;
  byte local_f0 [24];
  stat local_d8;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_f0[0] = local_f0[0] & 0xfe;
  local_f8 = param_2;
  iVar1 = OPENSSL_strncasecmp(param_2,"file:",5);
  if (iVar1 == 0) {
    pcVar4 = param_2 + 5;
    if ((param_2[5] == '/') && (param_2[6] == '/')) {
      pcVar4 = param_2 + 7;
      iVar1 = OPENSSL_strncasecmp(pcVar4,"localhost/",10);
      if (iVar1 == 0) {
        pcVar4 = param_2 + 0x10;
      }
      else if (param_2[7] != '/') {
        if (lib_code == 0) {
          lib_code = ERR_get_next_error_library();
        }
        ERR_new();
        puVar6 = (undefined8 *)0x0;
        ERR_set_debug("engines/e_loader_attic_err.c",0x47,"ERR_ATTIC_error");
        ERR_set_error(lib_code,0x6e,0);
        ERR_set_debug("engines/e_loader_attic.c",0x3d1,0);
        goto LAB_00101cd8;
      }
      local_110 = 1;
      lVar2 = 0;
    }
    else {
      local_110 = 2;
      lVar2 = 1;
    }
    local_f0[lVar2 * 0x10] = local_f0[lVar2 * 0x10] | 1;
    *(char **)(local_f0 + lVar2 * 0x10 + -8) = pcVar4;
  }
  else {
    local_110 = 1;
  }
  lVar2 = 0;
  do {
    if (((local_f0[lVar2 * 0x10] & 1) != 0) &&
       (pcVar4 = *(char **)(local_f0 + lVar2 * 0x10 + -8), *pcVar4 != '/')) {
      if (lib_code == 0) {
        lib_code = ERR_get_next_error_library();
      }
      ERR_new();
      puVar6 = (undefined8 *)0x0;
      ERR_set_debug("engines/e_loader_attic_err.c",0x47,"ERR_ATTIC_error");
      ERR_set_error(lib_code,0x69,0);
      ERR_set_debug("engines/e_loader_attic.c",0x3ed,0);
      ERR_add_error_data(1,pcVar4);
      goto LAB_00101cd8;
    }
    pcVar4 = *(char **)(local_f0 + lVar2 * 0x10 + -8);
    iVar1 = stat(pcVar4,&local_d8);
    if (-1 < iVar1) {
      ptr = (undefined8 *)CRYPTO_zalloc(0x58,"engines/e_loader_attic.c",0x400);
      if (ptr != (undefined8 *)0x0) {
        pcVar3 = CRYPTO_strdup(param_2,"engines/e_loader_attic.c",0x403);
        *ptr = pcVar3;
        if (pcVar3 != (char *)0x0) {
          if ((local_d8.st_mode & 0xf000) == 0x4000) {
            *(undefined4 *)(ptr + 1) = 2;
            lVar2 = OPENSSL_DIR_read(ptr + 3,pcVar4);
            ptr[6] = lVar2;
            piVar5 = __errno_location();
            iVar1 = *piVar5;
            *(int *)(ptr + 7) = iVar1;
            if (lVar2 == 0) {
              if (iVar1 != 0) {
                ERR_new();
                ERR_set_debug("engines/e_loader_attic.c",0x40d,"file_open_ex");
                ERR_set_error(2,*(undefined4 *)(ptr + 7),0);
                goto LAB_00101e6c;
              }
              *(undefined4 *)(ptr + 4) = 1;
            }
LAB_00101ca8:
            if (param_4 != (char *)0x0) {
              pcVar4 = CRYPTO_strdup(param_4,"engines/e_loader_attic.c",0x418);
              ptr[10] = pcVar4;
              if (pcVar4 == (char *)0x0) goto LAB_00101e6c;
            }
            ptr[9] = param_3;
            puVar6 = ptr;
            goto LAB_00101cd8;
          }
          a = BIO_new_file(pcVar4,"rb");
          ptr[3] = a;
          if (a != (BIO *)0x0) {
            iVar1 = file_find_type(ptr);
            if (iVar1 != 0) goto LAB_00101ca8;
            a = (BIO *)ptr[3];
          }
          BIO_free_all(a);
        }
LAB_00101e6c:
        CRYPTO_free((void *)ptr[10]);
        CRYPTO_free((void *)*ptr);
        if ((*(int *)(ptr + 1) != 2) && (ptr[4] != 0)) {
          (**(code **)(ptr[4] + 0x18))(ptr + 5);
          *(undefined1 (*) [16])(ptr + 4) = (undefined1  [16])0x0;
        }
        puVar6 = (undefined8 *)0x0;
        CRYPTO_free(ptr);
        goto LAB_00101cd8;
      }
      break;
    }
    ERR_new();
    lVar2 = lVar2 + 1;
    ERR_set_debug("engines/e_loader_attic.c",0x3f3,"file_open_ex");
    piVar5 = __errno_location();
    ERR_set_error(2,*piVar5,"calling stat(%s)",pcVar4);
  } while (lVar2 != local_110);
  puVar6 = (undefined8 *)0x0;
LAB_00101cd8:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void file_open(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  file_open_ex(param_1,param_2,0,0,param_3,param_4);
  return;
}



long file_load(undefined8 *param_1,size_t *param_2,undefined8 param_3)

{
  byte *pbVar1;
  byte bVar2;
  BIO *pBVar3;
  undefined8 uVar4;
  char *__s;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  EVP_PKEY *pEVar10;
  undefined8 *puVar11;
  size_t sVar12;
  long *ptr;
  ulong uVar13;
  undefined1 (*pauVar14) [16];
  ushort **ppuVar15;
  size_t sVar16;
  void *ptr_00;
  int *piVar17;
  undefined **ppuVar18;
  byte *pbVar19;
  char *pcVar20;
  undefined *puVar21;
  long in_FS_OFFSET;
  char *local_140;
  uchar *local_138;
  size_t local_130;
  char *local_120;
  char *local_e8;
  BUF_MEM *local_e0;
  int local_cc;
  undefined4 local_c8;
  int local_c4;
  char *local_c0;
  char *local_b8;
  uchar *local_b0;
  size_t local_a8;
  size_t *local_a0;
  size_t *local_98;
  undefined8 local_90;
  char *local_88;
  undefined8 local_80;
  EVP_CIPHER_INFO local_78;
  undefined1 local_58 [16];
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  if (*(int *)(param_1 + 1) == 2) {
LAB_00102b86:
    pcVar20 = (char *)param_1[6];
    if (pcVar20 != (char *)0x0) {
      do {
        if (*pcVar20 != '.') {
          sVar12 = strlen((char *)((long)param_1 + 0x24));
          if (*(char *)((long)param_1 + 0x24) == '\0') {
LAB_00102c36:
            __s = (char *)*param_1;
            sVar12 = strlen(__s);
            if ((*__s == '\0') || (puVar21 = &_LC12, __s[sVar12 - 1] != '/')) {
              sVar12 = sVar12 + 1;
              puVar21 = &_LC20;
            }
            sVar16 = strlen(pcVar20);
            lVar8 = sVar12 + 1 + sVar16;
            ptr_00 = (void *)CRYPTO_zalloc(lVar8,"engines/e_loader_attic.c",0x58f);
            if (ptr_00 == (void *)0x0) goto LAB_00102dfb;
            OPENSSL_strlcat(ptr_00,*param_1,lVar8);
            OPENSSL_strlcat(ptr_00,puVar21,lVar8);
            OPENSSL_strlcat(ptr_00,pcVar20,lVar8);
            lVar8 = OPENSSL_DIR_read(param_1 + 3,*param_1);
            param_1[6] = lVar8;
            piVar17 = __errno_location();
            iVar5 = *piVar17;
            *(int *)(param_1 + 7) = iVar5;
            if ((iVar5 == 0) && (lVar8 == 0)) {
              *(undefined4 *)(param_1 + 4) = 1;
            }
            lVar8 = OSSL_STORE_INFO_new_NAME(ptr_00);
            if (lVar8 != 0) goto LAB_0010203a;
            CRYPTO_free(ptr_00);
            if (lib_code == 0) {
              lib_code = ERR_get_next_error_library();
            }
            ERR_new();
            ERR_set_debug("engines/e_loader_attic_err.c",0x47,"ERR_ATTIC_error");
            ERR_set_error(lib_code,0x8002c,0);
            ERR_set_debug("engines/e_loader_attic.c",0x602,0);
            goto LAB_00102dfb;
          }
          if ((((*(int *)(param_1 + 8) - 5U < 2) || (*(int *)(param_1 + 8) == 0)) &&
              (iVar5 = OPENSSL_strncasecmp(pcVar20,(char *)((long)param_1 + 0x24),sVar12),
              iVar5 == 0)) && (pcVar20[sVar12] == '.')) {
            pbVar19 = (byte *)(pcVar20 + sVar12 + 1);
            iVar5 = *(int *)(param_1 + 8);
            bVar2 = *pbVar19;
            if (bVar2 == 0x72) {
              if ((iVar5 == 0) || (iVar5 == 6)) {
                bVar2 = pbVar19[1];
                pbVar19 = pbVar19 + 1;
                goto LAB_00102c07;
              }
            }
            else if (iVar5 != 6) {
LAB_00102c07:
              ppuVar15 = __ctype_b_loc();
              if ((*(byte *)((long)*ppuVar15 + (ulong)bVar2 * 2 + 1) & 8) != 0) {
                do {
                  pbVar1 = pbVar19 + 1;
                  pbVar19 = pbVar19 + 1;
                } while ((*(byte *)((long)*ppuVar15 + (ulong)*pbVar1 * 2 + 1) & 8) != 0);
                if (*pbVar1 == 0) {
                  pcVar20 = (char *)param_1[6];
                  goto LAB_00102c36;
                }
              }
            }
          }
        }
        lVar8 = OPENSSL_DIR_read(param_1 + 3,*param_1);
        param_1[6] = lVar8;
        piVar17 = __errno_location();
        iVar5 = *piVar17;
        *(int *)(param_1 + 7) = iVar5;
        if ((lVar8 == 0) && (iVar5 == 0)) {
          *(undefined4 *)(param_1 + 4) = 1;
        }
        if (*(int *)(param_1 + 1) == 2) {
          iVar5 = *(int *)(param_1 + 4);
        }
        else {
          if ((param_1[4] != 0) &&
             (iVar5 = (**(code **)(param_1[4] + 0x10))(param_1[5]), iVar5 == 0)) goto LAB_00102b86;
          lVar8 = BIO_ctrl((BIO *)param_1[3],2,0,(void *)0x0);
          iVar5 = (int)lVar8;
        }
        if (iVar5 != 0) goto LAB_00102dfb;
        pcVar20 = (char *)param_1[6];
        if (pcVar20 == (char *)0x0) break;
      } while( true );
    }
    if (*(int *)(param_1 + 4) == 0) {
      ERR_new();
      ERR_set_debug("engines/e_loader_attic.c",0x5e9,"file_load");
      ERR_set_error(2,*(undefined4 *)(param_1 + 7),0);
      *(int *)((long)param_1 + 0xc) = *(int *)((long)param_1 + 0xc) + 1;
    }
LAB_00102dfb:
    lVar8 = 0;
LAB_0010203a:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return lVar8;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  do {
    local_98 = (size_t *)((ulong)local_98 & 0xffffffff00000000);
    if (param_1[4] != 0) {
      lVar8 = (**(code **)(param_1[4] + 8))
                        (0,0,0,0,param_1 + 5,&local_98,param_2,param_3,*param_1,param_1[9],
                         param_1[10]);
      if (lVar8 != 0) goto LAB_0010203a;
      (**(code **)(param_1[4] + 0x18))(param_1 + 5);
      *(undefined1 (*) [16])(param_1 + 4) = (undefined1  [16])0x0;
    }
    if (*(int *)(param_1 + 1) == 2) {
      iVar5 = *(int *)(param_1 + 4);
    }
    else {
      lVar8 = BIO_ctrl((BIO *)param_1[3],2,0,(void *)0x0);
      iVar5 = (int)lVar8;
    }
    if (iVar5 != 0) goto LAB_00102dfb;
    lVar8 = 0;
    do {
      pBVar3 = (BIO *)param_1[3];
      local_c0 = (char *)0x0;
      local_b8 = (char *)0x0;
      local_b0 = (uchar *)0x0;
      local_a8 = 0;
      if (*(int *)(param_1 + 1) == 1) {
        uVar4 = *param_1;
        if ((*(byte *)(param_1 + 2) & 1) != 0) {
          iVar5 = PEM_read_bio_ex(pBVar3);
          if (iVar5 < 1) goto LAB_00102924;
LAB_001023a7:
          pcVar20 = local_b8;
          iVar5 = -1;
          local_120 = local_b8;
          sVar12 = strlen(local_b8);
          if (10 < sVar12) {
            iVar6 = PEM_get_EVP_CIPHER_INFO(pcVar20,&local_78);
            if (iVar6 != 0) {
              local_88 = "PEM pass phrase";
              local_98 = param_2;
              local_90 = param_3;
              local_80 = uVar4;
              iVar6 = PEM_do_header(&local_78,local_b0,(long *)&local_a8,file_get_pem_pass,&local_98
                                   );
              if (iVar6 != 0) {
                local_120 = local_b8;
                goto LAB_001023cc;
              }
            }
            goto LAB_00102924;
          }
          goto LAB_001023cc;
        }
        iVar5 = PEM_read_bio(pBVar3,&local_c0,&local_b8,&local_b0,(long *)&local_a8);
        if (0 < iVar5) goto LAB_001023a7;
LAB_00102924:
        *(int *)((long)param_1 + 0xc) = *(int *)((long)param_1 + 0xc) + 1;
        iVar5 = -1;
      }
      else {
        local_cc = -1;
        local_c8 = 0;
        local_c4 = 0;
        local_a0 = (size_t *)((ulong)local_a0 & 0xffffffff00000000);
        local_58 = (undefined1  [16])0x0;
        local_98 = (size_t *)local_58;
        lVar8 = BIO_ctrl(pBVar3,0x1d,0x10,local_58);
        if ((lVar8 < 1) ||
           (iVar5 = ossl_do_blob_header(&local_98,0x10,&local_c8,&local_c4,&local_a0,&local_cc),
           iVar5 < 1)) {
          iVar5 = 0;
          iVar6 = -1;
        }
        else {
          if (local_cc != 0) {
            pEVar10 = b2i_PublicKey_bio(pBVar3);
            if (pEVar10 == (EVP_PKEY *)0x0) goto LAB_001027d4;
LAB_00102256:
            lVar8 = OSSL_STORE_INFO_new_PKEY(pEVar10);
            if (lVar8 == 0) goto LAB_001027d4;
            iVar5 = 0;
            goto LAB_00102275;
          }
          pEVar10 = b2i_PrivateKey_bio(pBVar3);
          if (pEVar10 != (EVP_PKEY *)0x0) goto LAB_00102256;
LAB_001027d4:
          iVar6 = 0;
          iVar5 = 1;
          EVP_PKEY_free(pEVar10);
        }
        pBVar3 = (BIO *)param_1[3];
        uVar4 = *param_1;
        local_c8 = 0;
        local_c4 = 0;
        local_a0 = (size_t *)CONCAT44(local_a0._4_4_,0xffffffff);
        local_48 = 0;
        local_58 = (undefined1  [16])0x0;
        local_98 = (size_t *)local_58;
        lVar8 = BIO_ctrl(pBVar3,0x1d,0x18,local_58);
        if ((0 < lVar8) &&
           (iVar7 = ossl_do_PVK_header(&local_98,0x18,0,&local_a0,&local_c8,&local_c4), iVar7 != 0))
        {
          local_88 = "PVK pass phrase";
          local_98 = param_2;
          local_90 = param_3;
          local_80 = uVar4;
          pEVar10 = b2i_PVK_bio(pBVar3,file_get_pem_pass,&local_98);
          if ((pEVar10 != (EVP_PKEY *)0x0) &&
             (lVar8 = OSSL_STORE_INFO_new_PKEY(pEVar10), lVar8 != 0)) goto LAB_00102275;
          EVP_PKEY_free(pEVar10);
          iVar6 = iVar5;
        }
        iVar5 = iVar6;
        local_98 = (size_t *)0x0;
        iVar6 = asn1_d2i_read_bio(param_1[3],&local_98);
        if (iVar6 < 0) {
          *(int *)((long)param_1 + 0xc) = *(int *)((long)param_1 + 0xc) + 1;
          lVar8 = 0;
        }
        else {
          local_b0 = (uchar *)local_98[1];
          local_a8 = *local_98;
          CRYPTO_free(local_98);
          local_120 = local_b8;
LAB_001023cc:
          local_e8 = (char *)0x0;
          local_e0 = (BUF_MEM *)0x0;
          local_130 = local_a8;
          local_138 = local_b0;
          local_140 = local_c0;
          while( true ) {
            local_a0 = (size_t *)0x0;
            ptr = (long *)CRYPTO_zalloc(0x38,"engines/e_loader_attic.c",0x499);
            if (ptr == (long *)0x0) break;
            ppuVar18 = &file_handlers;
            iVar5 = 0;
            lVar8 = 0;
            do {
              local_c4 = 0;
              puVar21 = *ppuVar18;
              local_98 = (size_t *)0x0;
              ERR_set_mark();
              lVar9 = (**(code **)(puVar21 + 8))
                                (local_140,local_120,local_138,local_130,&local_98,&local_c4,param_2
                                 ,param_3,*param_1,param_1[9],param_1[10]);
              uVar13 = ERR_peek_last_error();
              if ((((uVar13 & 0x80000000) == 0) && ((char)(uVar13 >> 0x17) == '\r')) &&
                 (((uint)uVar13 & 0x7fffff) == 0x8010a)) {
                ERR_pop_to_mark();
              }
              else {
                ERR_clear_last_mark();
              }
              if (0 < local_c4) {
                ptr[iVar5] = (long)puVar21;
                if (local_a0 != (size_t *)0x0) {
                  (**(code **)(puVar21 + 0x18))(&local_a0);
                }
                iVar5 = iVar5 + local_c4;
                local_a0 = local_98;
                if (1 < iVar5) {
                  if ((lVar8 != 0) &&
                     (puVar11 = (undefined8 *)OSSL_STORE_INFO_get0_data(0xffffffff,lVar8),
                     puVar11 != (undefined8 *)0x0)) {
                    BUF_MEM_free((BUF_MEM *)*puVar11);
                    CRYPTO_free((void *)puVar11[1]);
                    CRYPTO_free(puVar11);
                  }
                  OSSL_STORE_INFO_free(lVar8);
                  if ((lVar9 != 0) &&
                     (puVar11 = (undefined8 *)OSSL_STORE_INFO_get0_data(0xffffffff,lVar9),
                     puVar11 != (undefined8 *)0x0)) {
                    BUF_MEM_free((BUF_MEM *)*puVar11);
                    CRYPTO_free((void *)puVar11[1]);
                    CRYPTO_free(puVar11);
                  }
                  OSSL_STORE_INFO_free(lVar9);
                  if (*(code **)(puVar21 + 0x18) != (code *)0x0) {
                    (**(code **)(puVar21 + 0x18))(&local_a0);
                  }
                  local_a0 = (size_t *)0x0;
                  goto LAB_00102635;
                }
                if ((lVar8 == 0) && (lVar8 = lVar9, lVar9 == 0)) goto LAB_00102635;
              }
              ppuVar18 = ppuVar18 + 1;
            } while (ppuVar18 != (undefined **)0x103518);
            if (lVar8 == 0) {
LAB_00102635:
              CRYPTO_free(ptr);
              CRYPTO_free(local_e8);
              BUF_MEM_free(local_e0);
              goto LAB_00102668;
            }
            if ((iVar5 == 1) && (*(int *)(*ptr + 0x20) != 0)) {
              param_1[4] = *ptr;
              param_1[5] = local_a0;
            }
            CRYPTO_free(ptr);
            CRYPTO_free(local_e8);
            BUF_MEM_free(local_e0);
            iVar6 = OSSL_STORE_INFO_get_type(lVar8);
            if (iVar6 != -1) goto LAB_00102275;
            pauVar14 = (undefined1 (*) [16])OSSL_STORE_INFO_get0_data(0xffffffff,lVar8);
            local_e0 = *(BUF_MEM **)*pauVar14;
            local_140 = *(char **)(*pauVar14 + 8);
            local_138 = (uchar *)local_e0->data;
            local_130 = local_e0->length;
            *pauVar14 = (undefined1  [16])0x0;
            puVar11 = (undefined8 *)OSSL_STORE_INFO_get0_data(0xffffffff,lVar8);
            if (puVar11 != (undefined8 *)0x0) {
              BUF_MEM_free((BUF_MEM *)*puVar11);
              CRYPTO_free((void *)puVar11[1]);
              CRYPTO_free(puVar11);
            }
            OSSL_STORE_INFO_free(lVar8);
            local_e8 = local_140;
          }
          CRYPTO_free(local_e8);
          BUF_MEM_free(local_e0);
LAB_00102668:
          if (local_c0 == (char *)0x0) {
            if (iVar5 < 2) goto LAB_001029d9;
            if (lib_code == 0) {
              lib_code = ERR_get_next_error_library();
            }
            ERR_new();
            ERR_set_debug("engines/e_loader_attic_err.c",0x47,"ERR_ATTIC_error");
            ERR_set_error(lib_code,100,0);
            ERR_set_debug("engines/e_loader_attic.c",0x63d,0);
          }
          else if (iVar5 < 2) {
LAB_001029d9:
            lVar8 = 0;
            if (iVar5 != 1) goto LAB_00102275;
            uVar13 = ERR_peek_error();
            if (uVar13 == 0) {
              if (lib_code == 0) {
                lib_code = ERR_get_next_error_library();
              }
              ERR_new();
              ERR_set_debug("engines/e_loader_attic_err.c",0x47,"ERR_ATTIC_error");
              ERR_set_error(lib_code,0x6c,0);
              ERR_set_debug("engines/e_loader_attic.c",0x644,0);
              if (local_c0 != (char *)0x0) {
                ERR_add_error_data(3,"PEM type is \'",local_c0);
              }
            }
          }
          *(int *)((long)param_1 + 0xc) = *(int *)((long)param_1 + 0xc) + 1;
          lVar8 = 0;
        }
      }
LAB_00102275:
      if ((*(byte *)(param_1 + 2) & 1) == 0) {
        CRYPTO_free(local_c0);
        if ((*(byte *)(param_1 + 2) & 1) == 0) goto LAB_001022a2;
LAB_001020cc:
        CRYPTO_secure_clear_free(local_b8,0,"engines/e_loader_attic.c");
      }
      else {
        CRYPTO_secure_clear_free(local_c0,0,"engines/e_loader_attic.c");
        if ((*(byte *)(param_1 + 2) & 1) != 0) goto LAB_001020cc;
LAB_001022a2:
        CRYPTO_free(local_b8);
      }
      if ((*(byte *)(param_1 + 2) & 1) == 0) {
        CRYPTO_free(local_b0);
      }
      else {
        CRYPTO_secure_clear_free(local_b0,local_a8,"engines/e_loader_attic.c");
      }
      if (iVar5 != 0) {
        if (1 < iVar5) {
          if ((lVar8 != 0) &&
             (puVar11 = (undefined8 *)OSSL_STORE_INFO_get0_data(0xffffffff,lVar8),
             puVar11 != (undefined8 *)0x0)) {
            BUF_MEM_free((BUF_MEM *)*puVar11);
            CRYPTO_free((void *)puVar11[1]);
            CRYPTO_free(puVar11);
          }
          OSSL_STORE_INFO_free(lVar8);
          goto LAB_00102dfb;
        }
        break;
      }
      if (*(int *)(param_1 + 1) == 2) {
        iVar5 = *(int *)(param_1 + 4);
LAB_00102141:
        if (iVar5 != 0) break;
      }
      else if ((param_1[4] == 0) ||
              (iVar5 = (**(code **)(param_1[4] + 0x10))(param_1[5]), iVar5 != 0)) {
        lVar9 = BIO_ctrl((BIO *)param_1[3],2,0,(void *)0x0);
        iVar5 = (int)lVar9;
        goto LAB_00102141;
      }
    } while (*(int *)((long)param_1 + 0xc) < 1);
    if (lVar8 == 0) goto LAB_00102dfb;
    iVar5 = *(int *)(param_1 + 8);
    if ((iVar5 == 0) || (iVar6 = OSSL_STORE_INFO_get_type(lVar8), iVar5 == iVar6))
    goto LAB_0010203a;
    puVar11 = (undefined8 *)OSSL_STORE_INFO_get0_data(0xffffffff);
    if (puVar11 != (undefined8 *)0x0) {
      BUF_MEM_free((BUF_MEM *)*puVar11);
      CRYPTO_free((void *)puVar11[1]);
      CRYPTO_free(puVar11);
    }
    OSSL_STORE_INFO_free();
  } while( true );
}



uint v_check(ulong param_1)

{
  return ~-(uint)(param_1 < 0x30000) & 0x30000;
}



undefined8 bind_engine(ENGINE *param_1,char *param_2,long *param_3)

{
  int iVar1;
  void *pvVar2;
  
  pvVar2 = ENGINE_get_static_state();
  if ((void *)*param_3 != pvVar2) {
    CRYPTO_set_mem_functions((m *)param_3[1],(r *)param_3[2],(f *)param_3[3]);
    OPENSSL_init_crypto(0x80000,0);
  }
  if ((param_2 == (char *)0x0) || (iVar1 = strcmp(param_2,"loader_attic"), iVar1 == 0)) {
    if (lib_code == 0) {
      lib_code = ERR_get_next_error_library();
    }
    if (error_loaded == 0) {
      ERR_load_strings(lib_code,(ERR_STRING_DATA *)ATTIC_str_reasons);
      error_loaded = 1;
    }
    loader_attic = OSSL_STORE_LOADER_new(param_1,&_LC0);
    if (((((((loader_attic != 0) &&
            (iVar1 = OSSL_STORE_LOADER_set_open_ex(loader_attic,file_open_ex), iVar1 != 0)) &&
           (iVar1 = OSSL_STORE_LOADER_set_open(loader_attic,file_open), iVar1 != 0)) &&
          ((iVar1 = OSSL_STORE_LOADER_set_attach(loader_attic,file_attach), iVar1 != 0 &&
           (iVar1 = OSSL_STORE_LOADER_set_ctrl(loader_attic,file_ctrl), iVar1 != 0)))) &&
         ((iVar1 = OSSL_STORE_LOADER_set_expect(loader_attic,0x100000), iVar1 != 0 &&
          ((iVar1 = OSSL_STORE_LOADER_set_find(loader_attic,file_find), iVar1 != 0 &&
           (iVar1 = OSSL_STORE_LOADER_set_load(loader_attic,file_load), iVar1 != 0)))))) &&
        (iVar1 = OSSL_STORE_LOADER_set_eof(loader_attic,file_eof), iVar1 != 0)) &&
       ((((iVar1 = OSSL_STORE_LOADER_set_error(loader_attic,file_error), iVar1 != 0 &&
          (iVar1 = OSSL_STORE_LOADER_set_close(loader_attic,file_close), iVar1 != 0)) &&
         (iVar1 = ENGINE_set_id(param_1,"loader_attic"), iVar1 != 0)) &&
        (((iVar1 = ENGINE_set_name(param_1,"\'file:\' loader"), iVar1 != 0 &&
          (iVar1 = ENGINE_set_destroy_function(param_1,loader_attic_destroy), iVar1 != 0)) &&
         ((iVar1 = ENGINE_set_init_function(param_1,loader_attic_init), iVar1 != 0 &&
          ((iVar1 = ENGINE_set_finish_function(param_1,loader_attic_finish), iVar1 != 0 &&
           (iVar1 = OSSL_STORE_register_loader(loader_attic), iVar1 != 0)))))))))) {
      return 1;
    }
    OSSL_STORE_LOADER_free(loader_attic);
    loader_attic = 0;
    if (lib_code == 0) {
      lib_code = ERR_get_next_error_library();
    }
    ERR_new();
    ERR_set_debug("engines/e_loader_attic_err.c",0x47,"ERR_ATTIC_error");
    ERR_set_error(lib_code,0x67,0);
    ERR_set_debug("engines/e_loader_attic.c",0x6c9,0);
  }
  return 0;
}


