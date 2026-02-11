
undefined8 * SRP_get_gN_by_id(char *param_1,long param_2)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    for (; iVar1 = OPENSSL_sk_num(param_2), iVar3 < iVar1; iVar3 = iVar3 + 1) {
      puVar2 = (undefined8 *)OPENSSL_sk_value(param_2,iVar3);
      if ((puVar2 != (undefined8 *)0x0) &&
         ((param_1 == (char *)0x0 || (iVar1 = strcmp((char *)*puVar2,param_1), iVar1 == 0)))) {
        return puVar2;
      }
    }
  }
  puVar2 = (undefined8 *)SRP_get_default_gN(param_1);
  return puVar2;
}



undefined8 * find_user(undefined8 *param_1,char *param_2)

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
LAB_00100183:
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
        goto LAB_001001fe;
      }
    }
    else {
      EVP_EncodeUpdate(ctx,param_1,&local_4c,local_42,inl);
      if (extraout_EAX != 0) goto LAB_00100183;
    }
    EVP_ENCODE_CTX_free(ctx);
  }
  uVar2 = 0;
LAB_001001fe:
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
  if (1 < (byte)(uVar1 - 9)) goto LAB_00100300;
  do {
    do {
      uVar1 = param_2[1];
      param_2 = param_2 + 1;
    } while ((byte)(uVar1 - 9) < 2);
LAB_00100300:
  } while (uVar1 == ' ');
  sVar4 = strlen((char *)param_2);
  iVar3 = (int)sVar4;
  inl = -iVar3 & 3;
  uVar5 = (ulong)inl;
  if ((sVar4 < 0x80000000) && ((sVar4 + uVar5 >> 2) * 3 < 0x9c5)) {
    ctx = (EVP_ENCODE_CTX *)EVP_ENCODE_CTX_new();
    if (ctx != (EVP_ENCODE_CTX *)0x0) {
      if (uVar5 == 3) {
LAB_0010041d:
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
                goto LAB_00100422;
              }
            }
          }
          goto LAB_0010041d;
        }
        iVar3 = EVP_DecodeUpdate(ctx,param_1,&local_44,param_2,iVar3);
        if (iVar3 < 0) goto LAB_0010041d;
        local_48 = local_44 + local_48;
        EVP_DecodeFinal(ctx,param_1 + local_48,&local_44);
        local_48 = local_44 + local_48;
      }
LAB_00100422:
      EVP_ENCODE_CTX_free(ctx);
      iVar3 = local_48;
      goto LAB_00100430;
    }
  }
  iVar3 = -1;
LAB_00100430:
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
          goto LAB_00100513;
        }
      }
      BN_free(*(BIGNUM **)(param_1 + 0x10));
      *(undefined8 *)(param_1 + 0x10) = 0;
    }
  }
  uVar3 = 0;
LAB_00100513:
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
        if (pBVar2 != (BIGNUM *)0x0) goto LAB_001005cd;
        CRYPTO_free((void *)*ptr);
      }
    }
    CRYPTO_free(ptr);
  }
  ptr = (undefined8 *)0x0;
LAB_001005cd:
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
  long lVar3;
  BIO_METHOD *type;
  BIO *bp;
  long lVar4;
  TXT_DB *db;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 *ptr;
  char *pcVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined4 local_44;
  long local_40;
  
  lVar3 = OPENSSL_sk_new_null();
  type = BIO_s_file();
  bp = BIO_new(type);
  if (lVar3 == 0) {
    local_44 = 4;
    db = (TXT_DB *)0x0;
    puVar8 = (undefined8 *)0x0;
    goto LAB_00100b5d;
  }
  if (param_2 == (void *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/srp/srp_vfy.c",0x19f,"SRP_VBASE_init");
    ERR_set_error(0xb,0xc0102,0);
  }
  else if (bp != (BIO *)0x0) {
    lVar4 = BIO_ctrl(bp,0x6c,3,param_2);
    if (0 < (int)lVar4) {
      db = TXT_DB_read(bp,6);
      if (db == (TXT_DB *)0x0) {
        local_44 = 1;
        puVar8 = (undefined8 *)0x0;
      }
      else {
        local_40 = param_1[2];
        if (local_40 != 0) {
          plVar5 = (long *)SRP_get_default_gN(0);
          local_40 = *plVar5;
        }
        local_44 = 4;
        iVar9 = 0;
        while( true ) {
          iVar2 = OPENSSL_sk_num(db->data);
          if (iVar2 <= iVar9) break;
          puVar6 = (undefined8 *)OPENSSL_sk_value(db->data,iVar9);
          if (*(char *)*puVar6 == 'I') {
            ptr = (undefined8 *)CRYPTO_malloc(0x18,"crypto/srp/srp_vfy.c",0x1b7);
            puVar8 = ptr;
            if (ptr != (undefined8 *)0x0) {
              pcVar7 = CRYPTO_strdup((char *)puVar6[3],"crypto/srp/srp_vfy.c",0x1ba);
              *ptr = pcVar7;
              if (pcVar7 != (char *)0x0) {
                lVar4 = SRP_gN_place_bn(param_1[1],puVar6[1]);
                ptr[2] = lVar4;
                if (lVar4 != 0) {
                  lVar4 = SRP_gN_place_bn(param_1[1],puVar6[2]);
                  ptr[1] = lVar4;
                  if (lVar4 != 0) {
                    iVar2 = OPENSSL_sk_insert(lVar3,ptr,0);
                    if (iVar2 != 0) {
                      if (param_1[2] != 0) {
                        local_40 = puVar6[3];
                      }
                      goto LAB_00100a48;
                    }
                  }
                }
              }
              puVar8 = (undefined8 *)0x0;
              CRYPTO_free((void *)*ptr);
              CRYPTO_free(ptr);
            }
            goto LAB_00100b5d;
          }
          if (*(char *)*puVar6 == 'V') {
            lVar4 = SRP_get_gN_by_id(puVar6[4],lVar3);
            if (lVar4 != 0) {
              puVar8 = (undefined8 *)SRP_user_pwd_new();
              if (puVar8 != (undefined8 *)0x0) {
                SRP_user_pwd_set_gN(puVar8,*(undefined8 *)(lVar4 + 8),*(undefined8 *)(lVar4 + 0x10))
                ;
                iVar2 = SRP_user_pwd_set1_ids(puVar8,puVar6[3],puVar6[5]);
                if (iVar2 != 0) {
                  iVar2 = SRP_user_pwd_set_sv(puVar8,puVar6[2],puVar6[1]);
                  if (iVar2 != 0) {
                    iVar2 = OPENSSL_sk_insert(*param_1,puVar8,0);
                    if (iVar2 != 0) {
                      local_44 = 2;
                      goto LAB_00100a48;
                    }
                  }
                  goto LAB_00100ccf;
                }
              }
              local_44 = 4;
              goto LAB_00100b5d;
            }
          }
LAB_00100a48:
          iVar9 = iVar9 + 1;
        }
        if (local_40 != 0) {
          puVar8 = (undefined8 *)SRP_get_gN_by_id(local_40,lVar3);
          if (puVar8 == (undefined8 *)0x0) {
LAB_00100ccf:
            local_44 = 2;
            goto LAB_00100b5d;
          }
          uVar1 = puVar8[2];
          param_1[3] = puVar8[1];
          param_1[4] = uVar1;
        }
        local_44 = 0;
        puVar8 = (undefined8 *)0x0;
      }
      goto LAB_00100b5d;
    }
  }
  local_44 = 3;
  db = (TXT_DB *)0x0;
  puVar8 = (undefined8 *)0x0;
LAB_00100b5d:
  SRP_user_pwd_free(puVar8);
  TXT_DB_free(db);
  BIO_free_all(bp);
  OPENSSL_sk_free(lVar3);
  return local_44;
}



bool SRP_VBASE_add0_user(undefined8 *param_1)

{
  int iVar1;
  
  iVar1 = OPENSSL_sk_push(*param_1);
  return 0 < iVar1;
}



void SRP_VBASE_get_by_user(void)

{
  find_user();
  return;
}



long SRP_VBASE_get1_by_user(long param_1,char *param_2)

{
  char *__s;
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  EVP_MD *type;
  EVP_MD_CTX *ctx;
  size_t sVar4;
  BIGNUM *pBVar5;
  BIGNUM *pBVar6;
  long in_FS_OFFSET;
  uchar local_78 [32];
  uchar local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != 0) {
    puVar2 = (undefined8 *)find_user();
    if (puVar2 == (undefined8 *)0x0) {
      if ((((*(long *)(param_1 + 0x10) == 0) || (*(long *)(param_1 + 0x18) == 0)) ||
          (*(long *)(param_1 + 0x20) == 0)) || (lVar3 = SRP_user_pwd_new(), lVar3 == 0))
      goto LAB_00100ecb;
      SRP_user_pwd_set_gN(lVar3,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
      iVar1 = SRP_user_pwd_set1_ids(lVar3,param_2,0);
      if (iVar1 == 0) {
LAB_00100eb0:
        type = (EVP_MD *)0x0;
        ctx = (EVP_MD_CTX *)0x0;
      }
      else {
        iVar1 = RAND_priv_bytes(local_78,0x14);
        if ((iVar1 < 1) || (type = (EVP_MD *)EVP_MD_fetch(0,&_LC2,0), type == (EVP_MD *)0x0))
        goto LAB_00100eb0;
        ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
        if (ctx == (EVP_MD_CTX *)0x0) {
          ctx = (EVP_MD_CTX *)0x0;
        }
        else {
          iVar1 = EVP_DigestInit_ex(ctx,type,(ENGINE *)0x0);
          if (iVar1 != 0) {
            __s = *(char **)(param_1 + 0x10);
            sVar4 = strlen(__s);
            iVar1 = EVP_DigestUpdate(ctx,__s,sVar4);
            if (iVar1 != 0) {
              sVar4 = strlen(param_2);
              iVar1 = EVP_DigestUpdate(ctx,param_2,sVar4);
              if (iVar1 != 0) {
                iVar1 = EVP_DigestFinal_ex(ctx,local_58,(uint *)0x0);
                if (iVar1 != 0) {
                  EVP_MD_CTX_free(ctx);
                  EVP_MD_free(type);
                  pBVar5 = BN_bin2bn(local_78,0x14,(BIGNUM *)0x0);
                  pBVar6 = BN_bin2bn(local_58,0x14,(BIGNUM *)0x0);
                  iVar1 = SRP_user_pwd_set0_sv(lVar3,pBVar6,pBVar5);
                  if (iVar1 != 0) goto LAB_00100ecd;
                  goto LAB_00100eb0;
                }
              }
            }
          }
        }
      }
      EVP_MD_free(type);
      EVP_MD_CTX_free(ctx);
    }
    else {
      lVar3 = SRP_user_pwd_new();
      if (lVar3 == 0) goto LAB_00100ecb;
      SRP_user_pwd_set_gN(lVar3,puVar2[3],puVar2[4]);
      iVar1 = SRP_user_pwd_set1_ids(lVar3,*puVar2,puVar2[5]);
      if (iVar1 != 0) {
        pBVar5 = BN_dup((BIGNUM *)puVar2[2]);
        pBVar6 = BN_dup((BIGNUM *)puVar2[1]);
        iVar1 = SRP_user_pwd_set0_sv(lVar3,pBVar6,pBVar5);
        if (iVar1 != 0) goto LAB_00100ecd;
      }
    }
    SRP_user_pwd_free(lVar3);
  }
LAB_00100ecb:
  lVar3 = 0;
LAB_00100ecd:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar3;
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
LAB_001010a8:
    if (param_3 != (BIGNUM *)0x0) {
LAB_001010ad:
      a = (BIGNUM *)0x0;
      p = (BIGNUM *)0x0;
      uVar2 = 0;
LAB_001010b5:
      if ((BIGNUM *)param_3->d != a) {
        BN_clear_free(a);
      }
      goto LAB_001010c5;
    }
  }
  else if (param_3 != (BIGNUM *)0x0) {
    if (param_4 == (undefined8 *)0x0) goto LAB_001010a8;
    a = (BIGNUM *)param_3->d;
    if ((param_5 == (BIGNUM *)0x0 || param_6 == (BIGNUM *)0x0) || (ctx == (BN_CTX *)0x0))
    goto LAB_001010ad;
    if (a == (BIGNUM *)0x0) {
      iVar1 = RAND_bytes_ex(param_7,local_a08,0x14,0);
      if ((iVar1 < 1) || (a = BN_bin2bn(local_a08,0x14,(BIGNUM *)0x0), a == (BIGNUM *)0x0))
      goto LAB_001010ad;
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
          goto LAB_001010b5;
        }
        BN_clear_free(r);
      }
      uVar2 = 0;
    }
    goto LAB_001010b5;
  }
  uVar2 = 0;
  p = param_3;
LAB_001010c5:
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
LAB_0010127f:
        if (*param_3 == 0) {
          iVar1 = RAND_bytes_ex(param_7,local_a08,0x14,0);
          if (0 < iVar1) {
            local_13e8 = BN_bin2bn(local_a08,0x14,(BIGNUM *)0x0);
            goto LAB_001012b6;
          }
        }
        else {
          iVar1 = t_fromb64_constprop_0(local_a08);
          if (0 < iVar1) {
            local_13e8 = BN_bin2bn(local_a08,iVar1,(BIGNUM *)0x0);
LAB_001012b6:
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
LAB_00101385:
                        *param_4 = pvVar4;
                        pvVar4 = (void *)0x0;
                        goto LAB_001013ca;
                      }
                      ptr = CRYPTO_malloc(0x28,"crypto/srp/srp_vfy.c",0x2ac);
                      if (ptr != (void *)0x0) {
                        iVar1 = t_tob64(ptr,local_a08,0x14);
                        if (iVar1 != 0) {
                          *param_3 = (long)ptr;
                          goto LAB_00101385;
                        }
                        CRYPTO_free(ptr);
                      }
                    }
                  }
                  puVar7 = (undefined *)0x0;
                  goto LAB_001013ca;
                }
              }
            }
          }
        }
        lVar6 = 0;
        pvVar4 = (void *)0x0;
        puVar7 = (undefined *)0x0;
        goto LAB_001013ca;
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
            goto LAB_001013ca;
          }
          pBVar3 = BN_bin2bn(local_13d8,iVar1,(BIGNUM *)0x0);
          if (pBVar3 == (BIGNUM *)0x0) {
            local_1418 = (BIGNUM *)0x0;
            puVar7 = (undefined *)0x0;
            lVar6 = 0;
            pvVar4 = (void *)0x0;
            goto LAB_001013ca;
          }
          puVar7 = &_LC3;
          local_1418 = pBVar3;
          local_13f8 = a;
          goto LAB_0010127f;
        }
      }
    }
  }
  local_1418 = (BIGNUM *)0x0;
  lVar6 = 0;
  a = (BIGNUM *)0x0;
  pvVar4 = (void *)0x0;
  puVar7 = (undefined *)0x0;
LAB_001013ca:
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


