
undefined8 t_tob64(uchar *param_1,uchar *param_2,int param_3)

{
  int inl;
  int iVar1;
  int extraout_EAX;
  int extraout_EAX_00;
  EVP_ENCODE_CTX *ctx;
  undefined8 uVar2;
  size_t __n;
  long in_FS_OFFSET;
  int local_4c;
  int local_48;
  uchar local_42 [2];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ctx = (EVP_ENCODE_CTX *)EVP_ENCODE_CTX_new();
  local_4c = 0;
  local_48 = 0;
  local_42[0] = '\0';
  local_42[1] = '\0';
  if (ctx != (EVP_ENCODE_CTX *)0x0) {
    EVP_EncodeInit(ctx);
    evp_encode_ctx_set_flags(ctx,3);
    iVar1 = (param_3 / 3) * 3 - param_3;
    inl = iVar1 + 3;
    if (iVar1 == 0) {
LAB_001000a3:
      EVP_EncodeUpdate(ctx,param_1 + local_4c,&local_48,param_2,param_3);
      if (extraout_EAX_00 != 0) {
        local_4c = local_48 + local_4c;
        EVP_EncodeFinal(ctx,param_1 + local_4c,&local_48);
        local_4c = local_48 + local_4c;
        if (inl != 3) {
          __n = (long)local_4c - (long)inl;
          memmove(param_1,param_1 + inl,__n);
          param_1[__n] = '\0';
        }
        EVP_ENCODE_CTX_free(ctx);
        uVar2 = 1;
        goto LAB_0010011e;
      }
    }
    else {
      EVP_EncodeUpdate(ctx,param_1,&local_4c,local_42,inl);
      if (extraout_EAX != 0) goto LAB_001000a3;
    }
    EVP_ENCODE_CTX_free(ctx);
  }
  uVar2 = 0;
LAB_0010011e:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void SRP_user_pwd_free(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    BN_free((BIGNUM *)param_1[1]);
    BN_clear_free((BIGNUM *)param_1[2]);
    CRYPTO_free((void *)*param_1);
    CRYPTO_free((void *)param_1[5]);
    CRYPTO_free(param_1);
    return;
  }
  return;
}



int t_fromb64_constprop_0(uchar *param_1,uchar *param_2)

{
  uchar uVar1;
  int iVar2;
  int iVar3;
  size_t sVar4;
  EVP_ENCODE_CTX *ctx;
  uint inl;
  long in_FS_OFFSET;
  int local_48;
  int local_44;
  long local_40;
  ulong uVar5;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = *param_2;
  local_48 = 0;
  local_44 = 0;
  if (1 < (byte)(uVar1 - 9)) goto LAB_00100220;
  do {
    do {
      uVar1 = param_2[1];
      param_2 = param_2 + 1;
    } while ((byte)(uVar1 - 9) < 2);
LAB_00100220:
  } while (uVar1 == ' ');
  sVar4 = strlen((char *)param_2);
  iVar3 = (int)sVar4;
  inl = -iVar3 & 3;
  uVar5 = (ulong)inl;
  if ((sVar4 < 0x80000000) && ((sVar4 + uVar5 >> 2) * 3 < 0x9c5)) {
    ctx = (EVP_ENCODE_CTX *)EVP_ENCODE_CTX_new();
    if (ctx != (EVP_ENCODE_CTX *)0x0) {
      if (uVar5 == 3) {
LAB_0010033d:
        local_48 = -1;
      }
      else {
        EVP_DecodeInit(ctx);
        evp_encode_ctx_set_flags(ctx,2);
        if (uVar5 != 0) {
          iVar2 = EVP_DecodeUpdate(ctx,param_1,&local_48,"00",inl);
          if (-1 < iVar2) {
            iVar3 = EVP_DecodeUpdate(ctx,param_1,&local_44,param_2,iVar3);
            if (-1 < iVar3) {
              local_48 = local_44 + local_48;
              EVP_DecodeFinal(ctx,param_1 + local_48,&local_44);
              iVar3 = local_44 + local_48;
              if ((int)inl < iVar3) {
                local_48 = iVar3;
                memmove(param_1,param_1 + uVar5,(long)iVar3 - uVar5);
                local_48 = iVar3 - inl;
                goto LAB_00100342;
              }
            }
          }
          goto LAB_0010033d;
        }
        iVar3 = EVP_DecodeUpdate(ctx,param_1,&local_44,param_2,iVar3);
        if (iVar3 < 0) goto LAB_0010033d;
        local_48 = local_44 + local_48;
        EVP_DecodeFinal(ctx,param_1 + local_48,&local_44);
        local_48 = local_44 + local_48;
      }
LAB_00100342:
      EVP_ENCODE_CTX_free(ctx);
      iVar3 = local_48;
      goto LAB_00100350;
    }
  }
  iVar3 = -1;
LAB_00100350:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 SRP_user_pwd_set_sv(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  BIGNUM *pBVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  uchar auStack_9e8 [2504];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  iVar1 = t_fromb64_constprop_0(auStack_9e8,param_3);
  if (-1 < iVar1) {
    pBVar2 = BN_bin2bn(auStack_9e8,iVar1,(BIGNUM *)0x0);
    *(BIGNUM **)(param_1 + 0x10) = pBVar2;
    if (pBVar2 != (BIGNUM *)0x0) {
      iVar1 = t_fromb64_constprop_0(auStack_9e8,param_2);
      if (-1 < iVar1) {
        pBVar2 = BN_bin2bn(auStack_9e8,iVar1,(BIGNUM *)0x0);
        *(BIGNUM **)(param_1 + 8) = pBVar2;
        if (pBVar2 != (BIGNUM *)0x0) {
          uVar3 = 1;
          goto LAB_00100433;
        }
      }
      BN_free(*(BIGNUM **)(param_1 + 0x10));
      *(undefined8 *)(param_1 + 0x10) = 0;
    }
  }
  uVar3 = 0;
LAB_00100433:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 * SRP_gN_new_init(char *param_1)

{
  int len;
  undefined8 *ptr;
  char *pcVar1;
  BIGNUM *pBVar2;
  long in_FS_OFFSET;
  uchar auStack_9f8 [2504];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  ptr = (undefined8 *)CRYPTO_malloc(0x10,"crypto/srp/srp_vfy.c",0x13c);
  if (ptr != (undefined8 *)0x0) {
    len = t_fromb64_constprop_0(auStack_9f8,param_1);
    if (-1 < len) {
      pcVar1 = CRYPTO_strdup(param_1,"crypto/srp/srp_vfy.c",0x145);
      *ptr = pcVar1;
      if (pcVar1 != (char *)0x0) {
        pBVar2 = BN_bin2bn(auStack_9f8,len,(BIGNUM *)0x0);
        ptr[1] = pBVar2;
        if (pBVar2 != (BIGNUM *)0x0) goto LAB_001004ed;
        CRYPTO_free((void *)*ptr);
      }
    }
    CRYPTO_free(ptr);
  }
  ptr = (undefined8 *)0x0;
LAB_001004ed:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return ptr;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 SRP_gN_place_bn(long param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar2 = 0;
  while( true ) {
    iVar1 = OPENSSL_sk_num(param_1);
    if (iVar1 <= iVar2) {
      puVar3 = (undefined8 *)SRP_gN_new_init(param_2);
      if (puVar3 != (undefined8 *)0x0) {
        iVar2 = OPENSSL_sk_insert(param_1,puVar3,0);
        if (0 < iVar2) {
          return puVar3[1];
        }
        CRYPTO_free((void *)*puVar3);
        BN_free((BIGNUM *)puVar3[1]);
        CRYPTO_free(puVar3);
      }
      return 0;
    }
    puVar3 = (undefined8 *)OPENSSL_sk_value(param_1,iVar2);
    iVar1 = strcmp((char *)*puVar3,param_2);
    if (iVar1 == 0) break;
    iVar2 = iVar2 + 1;
  }
  return puVar3[1];
}



void SRP_user_pwd_new(void)

{
  undefined1 (*pauVar1) [16];
  
  pauVar1 = (undefined1 (*) [16])CRYPTO_malloc(0x30,"crypto/srp/srp_vfy.c",0xc2);
  if (pauVar1 != (undefined1 (*) [16])0x0) {
    *pauVar1 = (undefined1  [16])0x0;
    pauVar1[1] = (undefined1  [16])0x0;
    pauVar1[2] = (undefined1  [16])0x0;
  }
  return;
}



void SRP_user_pwd_set_gN(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x20) = param_3;
  *(undefined8 *)(param_1 + 0x18) = param_2;
  return;
}



bool SRP_user_pwd_set1_ids(undefined8 *param_1,char *param_2,char *param_3)

{
  char *pcVar1;
  bool bVar2;
  
  CRYPTO_free((void *)*param_1);
  CRYPTO_free((void *)param_1[5]);
  *param_1 = 0;
  param_1[5] = 0;
  if (param_2 != (char *)0x0) {
    pcVar1 = CRYPTO_strdup(param_2,"crypto/srp/srp_vfy.c",0xdb);
    *param_1 = pcVar1;
    if (pcVar1 == (char *)0x0) {
      return false;
    }
  }
  bVar2 = true;
  if (param_3 != (char *)0x0) {
    pcVar1 = CRYPTO_strdup(param_3,"crypto/srp/srp_vfy.c",0xdd);
    bVar2 = pcVar1 != (char *)0x0;
    param_1[5] = pcVar1;
  }
  return bVar2;
}



bool SRP_user_pwd_set0_sv(long param_1,long param_2,long param_3)

{
  BN_free(*(BIGNUM **)(param_1 + 8));
  BN_clear_free(*(BIGNUM **)(param_1 + 0x10));
  *(long *)(param_1 + 0x10) = param_3;
  *(long *)(param_1 + 8) = param_2;
  return param_2 != 0 && param_3 != 0;
}



long * SRP_VBASE_new(char *param_1)

{
  long *ptr;
  long lVar1;
  char *pcVar2;
  
  ptr = (long *)CRYPTO_malloc(0x28,"crypto/srp/srp_vfy.c",0x118);
  if (ptr != (long *)0x0) {
    lVar1 = OPENSSL_sk_new_null();
    *ptr = lVar1;
    if (lVar1 != 0) {
      lVar1 = OPENSSL_sk_new_null();
      ptr[1] = lVar1;
      if (lVar1 != 0) {
        ptr[4] = 0;
        *(undefined1 (*) [16])(ptr + 2) = (undefined1  [16])0x0;
        if (param_1 != (char *)0x0) {
          pcVar2 = CRYPTO_strdup(param_1,"crypto/srp/srp_vfy.c",0x125);
          ptr[2] = (long)pcVar2;
          if (pcVar2 == (char *)0x0) {
            OPENSSL_sk_free(*ptr);
            OPENSSL_sk_free(ptr[1]);
            CRYPTO_free(ptr);
            return (long *)0x0;
          }
        }
        return ptr;
      }
      lVar1 = *ptr;
    }
    OPENSSL_sk_free(lVar1);
    CRYPTO_free(ptr);
  }
  return (long *)0x0;
}



void SRP_VBASE_free(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    OPENSSL_sk_pop_free(*param_1,SRP_user_pwd_free);
    OPENSSL_sk_free(param_1[1]);
    CRYPTO_free((void *)param_1[2]);
    CRYPTO_free(param_1);
    return;
  }
  return;
}



undefined4 SRP_VBASE_init(undefined8 *param_1,void *param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  BIO_METHOD *type;
  BIO *bp;
  long lVar5;
  TXT_DB *db;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  char *pcVar9;
  undefined8 *puVar10;
  int iVar11;
  char *local_48;
  undefined4 local_3c;
  
  lVar4 = OPENSSL_sk_new_null();
  type = BIO_s_file();
  bp = BIO_new(type);
  if (lVar4 == 0) {
    local_3c = 4;
    db = (TXT_DB *)0x0;
    puVar10 = (undefined8 *)0x0;
    goto LAB_00100a86;
  }
  if (param_2 == (void *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/srp/srp_vfy.c",0x19f,"SRP_VBASE_init");
    ERR_set_error(0xb,0xc0102,0);
  }
  else if ((bp != (BIO *)0x0) && (lVar5 = BIO_ctrl(bp,0x6c,3,param_2), 0 < (int)lVar5)) {
    db = TXT_DB_read(bp,6);
    if (db == (TXT_DB *)0x0) {
      local_3c = 1;
      puVar10 = (undefined8 *)0x0;
    }
    else {
      local_48 = (char *)param_1[2];
      if (local_48 != (char *)0x0) {
        plVar6 = (long *)SRP_get_default_gN(0);
        local_48 = (char *)*plVar6;
      }
      local_3c = 4;
      for (iVar11 = 0; iVar2 = OPENSSL_sk_num(db->data), iVar11 < iVar2; iVar11 = iVar11 + 1) {
        puVar7 = (undefined8 *)OPENSSL_sk_value(db->data,iVar11);
        if (*(char *)*puVar7 == 'I') {
          puVar8 = (undefined8 *)CRYPTO_malloc(0x18,"crypto/srp/srp_vfy.c",0x1b7);
          puVar10 = puVar8;
          if (puVar8 != (undefined8 *)0x0) {
            pcVar9 = CRYPTO_strdup((char *)puVar7[3],"crypto/srp/srp_vfy.c",0x1ba);
            *puVar8 = pcVar9;
            if (pcVar9 != (char *)0x0) {
              lVar5 = SRP_gN_place_bn(param_1[1],puVar7[1]);
              puVar8[2] = lVar5;
              if (lVar5 != 0) {
                lVar5 = SRP_gN_place_bn(param_1[1],puVar7[2]);
                puVar8[1] = lVar5;
                if ((lVar5 != 0) && (iVar2 = OPENSSL_sk_insert(lVar4,puVar8,0), iVar2 != 0)) {
                  if (param_1[2] != 0) {
                    local_48 = (char *)puVar7[3];
                  }
                  goto LAB_00100968;
                }
              }
            }
            puVar10 = (undefined8 *)0x0;
            CRYPTO_free((void *)*puVar8);
            CRYPTO_free(puVar8);
          }
          goto LAB_00100a86;
        }
        if (*(char *)*puVar7 == 'V') {
          pcVar9 = (char *)puVar7[4];
          iVar2 = 0;
          if (pcVar9 == (char *)0x0) {
            for (; iVar3 = OPENSSL_sk_num(lVar4), iVar2 < iVar3; iVar2 = iVar2 + 1) {
              puVar8 = (undefined8 *)OPENSSL_sk_value(lVar4,iVar2);
              if (puVar8 != (undefined8 *)0x0) goto LAB_00100b41;
            }
          }
          else {
            for (; iVar3 = OPENSSL_sk_num(lVar4), iVar2 < iVar3; iVar2 = iVar2 + 1) {
              puVar8 = (undefined8 *)OPENSSL_sk_value(lVar4,iVar2);
              if ((puVar8 != (undefined8 *)0x0) &&
                 (iVar3 = strcmp((char *)*puVar8,pcVar9), iVar3 == 0)) goto LAB_00100b41;
            }
          }
          puVar8 = (undefined8 *)SRP_get_default_gN(pcVar9);
          if (puVar8 != (undefined8 *)0x0) {
LAB_00100b41:
            puVar10 = (undefined8 *)SRP_user_pwd_new();
            if (puVar10 != (undefined8 *)0x0) {
              SRP_user_pwd_set_gN(puVar10,puVar8[1],puVar8[2]);
              iVar2 = SRP_user_pwd_set1_ids(puVar10,puVar7[3],puVar7[5]);
              if (iVar2 != 0) {
                iVar2 = SRP_user_pwd_set_sv(puVar10,puVar7[2],puVar7[1]);
                if ((iVar2 != 0) && (iVar2 = OPENSSL_sk_insert(*param_1,puVar10,0), iVar2 != 0)) {
                  local_3c = 2;
                  goto LAB_00100968;
                }
                goto LAB_00100ca1;
              }
            }
            local_3c = 4;
            goto LAB_00100a86;
          }
        }
LAB_00100968:
      }
      iVar11 = 0;
      if (local_48 != (char *)0x0) {
        for (; iVar2 = OPENSSL_sk_num(lVar4), iVar11 < iVar2; iVar11 = iVar11 + 1) {
          puVar10 = (undefined8 *)OPENSSL_sk_value(lVar4,iVar11);
          if ((puVar10 != (undefined8 *)0x0) &&
             (iVar2 = strcmp((char *)*puVar10,local_48), iVar2 == 0)) goto LAB_00100c5c;
        }
        puVar10 = (undefined8 *)SRP_get_default_gN(local_48);
        if (puVar10 == (undefined8 *)0x0) {
LAB_00100ca1:
          local_3c = 2;
          goto LAB_00100a86;
        }
LAB_00100c5c:
        uVar1 = puVar10[2];
        param_1[3] = puVar10[1];
        param_1[4] = uVar1;
      }
      local_3c = 0;
      puVar10 = (undefined8 *)0x0;
    }
    goto LAB_00100a86;
  }
  local_3c = 3;
  db = (TXT_DB *)0x0;
  puVar10 = (undefined8 *)0x0;
LAB_00100a86:
  SRP_user_pwd_free(puVar10);
  TXT_DB_free(db);
  BIO_free_all(bp);
  OPENSSL_sk_free(lVar4);
  return local_3c;
}



bool SRP_VBASE_add0_user(undefined8 *param_1)

{
  int iVar1;
  
  iVar1 = OPENSSL_sk_push(*param_1);
  return 0 < iVar1;
}



undefined8 * SRP_VBASE_get_by_user(undefined8 *param_1,char *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_1 != (undefined8 *)0x0) {
    for (; iVar1 = OPENSSL_sk_num(*param_1), iVar3 < iVar1; iVar3 = iVar3 + 1) {
      puVar2 = (undefined8 *)OPENSSL_sk_value(*param_1,iVar3);
      iVar1 = strcmp((char *)*puVar2,param_2);
      if (iVar1 == 0) {
        return puVar2;
      }
    }
  }
  return (undefined8 *)0x0;
}



long SRP_VBASE_get1_by_user(undefined8 *param_1,char *param_2)

{
  char *__s;
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  EVP_MD *type;
  EVP_MD_CTX *ctx;
  size_t sVar5;
  BIGNUM *pBVar6;
  BIGNUM *pBVar7;
  long in_FS_OFFSET;
  uchar auStack_78 [32];
  uchar local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != (undefined8 *)0x0) {
    for (iVar2 = 0; iVar1 = OPENSSL_sk_num(*param_1), iVar2 < iVar1; iVar2 = iVar2 + 1) {
      puVar3 = (undefined8 *)OPENSSL_sk_value(*param_1,iVar2);
      iVar1 = strcmp((char *)*puVar3,param_2);
      if (iVar1 == 0) {
        lVar4 = SRP_user_pwd_new();
        if (lVar4 == 0) goto LAB_00100f05;
        SRP_user_pwd_set_gN(lVar4,puVar3[3],puVar3[4]);
        iVar2 = SRP_user_pwd_set1_ids(lVar4,*puVar3,puVar3[5]);
        if (iVar2 == 0) goto LAB_00100efd;
        pBVar6 = BN_dup((BIGNUM *)puVar3[2]);
        pBVar7 = BN_dup((BIGNUM *)puVar3[1]);
        iVar2 = SRP_user_pwd_set0_sv(lVar4,pBVar7,pBVar6);
        if (iVar2 == 0) goto LAB_00100efd;
        goto LAB_00100f07;
      }
    }
    if ((((param_1[2] != 0) && (param_1[3] != 0)) && (param_1[4] != 0)) &&
       (lVar4 = SRP_user_pwd_new(), lVar4 != 0)) {
      SRP_user_pwd_set_gN(lVar4,param_1[3],param_1[4]);
      iVar2 = SRP_user_pwd_set1_ids(lVar4,param_2,0);
      if (((iVar2 == 0) || (iVar2 = RAND_priv_bytes(auStack_78,0x14), iVar2 < 1)) ||
         (type = (EVP_MD *)EVP_MD_fetch(0,&_LC2,0), type == (EVP_MD *)0x0)) {
LAB_00100ee8:
        type = (EVP_MD *)0x0;
        ctx = (EVP_MD_CTX *)0x0;
      }
      else {
        ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
        if ((ctx != (EVP_MD_CTX *)0x0) &&
           (iVar2 = EVP_DigestInit_ex(ctx,type,(ENGINE *)0x0), iVar2 != 0)) {
          __s = (char *)param_1[2];
          sVar5 = strlen(__s);
          iVar2 = EVP_DigestUpdate(ctx,__s,sVar5);
          if (iVar2 != 0) {
            sVar5 = strlen(param_2);
            iVar2 = EVP_DigestUpdate(ctx,param_2,sVar5);
            if (iVar2 != 0) {
              iVar2 = EVP_DigestFinal_ex(ctx,local_58,(uint *)0x0);
              if (iVar2 != 0) {
                EVP_MD_CTX_free(ctx);
                EVP_MD_free(type);
                pBVar6 = BN_bin2bn(auStack_78,0x14,(BIGNUM *)0x0);
                pBVar7 = BN_bin2bn(local_58,0x14,(BIGNUM *)0x0);
                iVar2 = SRP_user_pwd_set0_sv(lVar4,pBVar7,pBVar6);
                if (iVar2 != 0) goto LAB_00100f07;
                goto LAB_00100ee8;
              }
            }
          }
        }
      }
      EVP_MD_free(type);
      EVP_MD_CTX_free(ctx);
LAB_00100efd:
      SRP_user_pwd_free(lVar4);
    }
  }
LAB_00100f05:
  lVar4 = 0;
LAB_00100f07:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4;
}



undefined8
SRP_create_verifier_BN_ex
          (long param_1,long param_2,BIGNUM *param_3,undefined8 *param_4,BIGNUM *param_5,
          BIGNUM *param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  BN_CTX *ctx;
  BIGNUM *p;
  BIGNUM *r;
  BIGNUM *a;
  undefined8 uVar2;
  long in_FS_OFFSET;
  uchar local_a08 [2504];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ctx = (BN_CTX *)BN_CTX_new_ex(param_7);
  if ((param_1 == 0) || (param_2 == 0)) {
LAB_001010c8:
    if (param_3 != (BIGNUM *)0x0) {
LAB_001010cd:
      a = (BIGNUM *)0x0;
      p = (BIGNUM *)0x0;
      uVar2 = 0;
LAB_001010d5:
      if ((BIGNUM *)param_3->d != a) {
        BN_clear_free(a);
      }
      goto LAB_001010e5;
    }
  }
  else if (param_3 != (BIGNUM *)0x0) {
    if (param_4 == (undefined8 *)0x0) goto LAB_001010c8;
    a = (BIGNUM *)param_3->d;
    if ((param_5 == (BIGNUM *)0x0 || param_6 == (BIGNUM *)0x0) || (ctx == (BN_CTX *)0x0))
    goto LAB_001010cd;
    if (a == (BIGNUM *)0x0) {
      iVar1 = RAND_bytes_ex(param_7,local_a08,0x14,0);
      if ((iVar1 < 1) || (a = BN_bin2bn(local_a08,0x14,(BIGNUM *)0x0), a == (BIGNUM *)0x0))
      goto LAB_001010cd;
    }
    uVar2 = 0;
    p = (BIGNUM *)SRP_Calc_x_ex(a,param_1,param_2,param_7,param_8);
    if (p != (BIGNUM *)0x0) {
      r = BN_new();
      if (r != (BIGNUM *)0x0) {
        iVar1 = BN_mod_exp(r,param_6,p,param_5,ctx);
        if (iVar1 != 0) {
          param_3->d = (ulong *)a;
          *param_4 = r;
          uVar2 = 1;
          goto LAB_001010d5;
        }
        BN_clear_free(r);
      }
      uVar2 = 0;
    }
    goto LAB_001010d5;
  }
  uVar2 = 0;
  p = param_3;
LAB_001010e5:
  BN_clear_free(p);
  BN_CTX_free(ctx);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



undefined *
SRP_create_verifier_ex
          (long param_1,long param_2,long *param_3,undefined8 *param_4,long param_5,
          undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  int iVar2;
  BIGNUM *a;
  BIGNUM *pBVar3;
  void *pvVar4;
  undefined8 *puVar5;
  void *ptr;
  long lVar6;
  undefined *puVar7;
  long in_FS_OFFSET;
  BIGNUM *local_1418;
  BIGNUM *local_13f8;
  BIGNUM *local_13e8;
  BIGNUM *local_13e0;
  uchar local_13d8 [2512];
  uchar local_a08 [2504];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_13e8 = (BIGNUM *)0x0;
  local_13e0 = (BIGNUM *)0x0;
  if ((((param_1 != 0) && (param_2 != 0)) && (param_3 != (long *)0x0)) &&
     (param_4 != (undefined8 *)0x0)) {
    if (param_5 == 0) {
      puVar5 = (undefined8 *)SRP_get_default_gN(param_6);
      if (puVar5 != (undefined8 *)0x0) {
        local_13f8 = (BIGNUM *)puVar5[2];
        pBVar3 = (BIGNUM *)puVar5[1];
        local_1418 = (BIGNUM *)0x0;
        puVar7 = (undefined *)*puVar5;
        a = (BIGNUM *)0x0;
LAB_0010129f:
        if (*param_3 == 0) {
          iVar1 = RAND_bytes_ex(param_7,local_a08,0x14,0);
          if (0 < iVar1) {
            local_13e8 = BN_bin2bn(local_a08,0x14,(BIGNUM *)0x0);
            goto LAB_001012d6;
          }
        }
        else {
          iVar1 = t_fromb64_constprop_0(local_a08);
          if (0 < iVar1) {
            local_13e8 = BN_bin2bn(local_a08,iVar1,(BIGNUM *)0x0);
LAB_001012d6:
            if (local_13e8 != (BIGNUM *)0x0) {
              iVar1 = SRP_create_verifier_BN_ex
                                (param_1,param_2,&local_13e8,&local_13e0,local_13f8,pBVar3,param_7,
                                 param_8);
              if (iVar1 != 0) {
                iVar1 = BN_bn2bin(local_13e0,local_13d8);
                if (-1 < iVar1) {
                  iVar2 = BN_num_bits(local_13e0);
                  iVar1 = iVar2 + 0xe;
                  if (-1 < iVar2 + 7) {
                    iVar1 = iVar2 + 7;
                  }
                  iVar1 = (iVar1 >> 3) * 2;
                  lVar6 = (long)iVar1;
                  pvVar4 = CRYPTO_malloc(iVar1,"crypto/srp/srp_vfy.c",0x2a4);
                  if (pvVar4 != (void *)0x0) {
                    iVar2 = BN_num_bits(local_13e0);
                    iVar1 = iVar2 + 0xe;
                    if (-1 < iVar2 + 7) {
                      iVar1 = iVar2 + 7;
                    }
                    iVar1 = t_tob64(pvVar4,local_13d8,iVar1 >> 3);
                    if (iVar1 != 0) {
                      if (*param_3 != 0) {
LAB_001013a5:
                        *param_4 = pvVar4;
                        pvVar4 = (void *)0x0;
                        goto LAB_001013ea;
                      }
                      ptr = CRYPTO_malloc(0x28,"crypto/srp/srp_vfy.c",0x2ac);
                      if (ptr != (void *)0x0) {
                        iVar1 = t_tob64(ptr,local_a08,0x14);
                        if (iVar1 != 0) {
                          *param_3 = (long)ptr;
                          goto LAB_001013a5;
                        }
                        CRYPTO_free(ptr);
                      }
                    }
                  }
                  puVar7 = (undefined *)0x0;
                  goto LAB_001013ea;
                }
              }
            }
          }
        }
        lVar6 = 0;
        pvVar4 = (void *)0x0;
        puVar7 = (undefined *)0x0;
        goto LAB_001013ea;
      }
    }
    else {
      iVar1 = t_fromb64_constprop_0(local_13d8,param_5);
      if (0 < iVar1) {
        a = BN_bin2bn(local_13d8,iVar1,(BIGNUM *)0x0);
        if (a != (BIGNUM *)0x0) {
          iVar1 = t_fromb64_constprop_0(local_13d8,param_6);
          if (iVar1 < 1) {
            local_1418 = (BIGNUM *)0x0;
            lVar6 = 0;
            pvVar4 = (void *)0x0;
            puVar7 = (undefined *)0x0;
            goto LAB_001013ea;
          }
          pBVar3 = BN_bin2bn(local_13d8,iVar1,(BIGNUM *)0x0);
          if (pBVar3 == (BIGNUM *)0x0) {
            local_1418 = (BIGNUM *)0x0;
            puVar7 = (undefined *)0x0;
            lVar6 = 0;
            pvVar4 = (void *)0x0;
            goto LAB_001013ea;
          }
          puVar7 = &_LC3;
          local_1418 = pBVar3;
          local_13f8 = a;
          goto LAB_0010129f;
        }
      }
    }
  }
  local_1418 = (BIGNUM *)0x0;
  lVar6 = 0;
  a = (BIGNUM *)0x0;
  pvVar4 = (void *)0x0;
  puVar7 = (undefined *)0x0;
LAB_001013ea:
  BN_free(a);
  BN_free(local_1418);
  CRYPTO_clear_free(pvVar4,lVar6,"crypto/srp/srp_vfy.c",0x2bd);
  BN_clear_free(local_13e8);
  BN_clear_free(local_13e0);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void SRP_create_verifier(void)

{
  SRP_create_verifier_ex();
  return;
}



void SRP_create_verifier_BN(void)

{
  SRP_create_verifier_BN_ex();
  return;
}


