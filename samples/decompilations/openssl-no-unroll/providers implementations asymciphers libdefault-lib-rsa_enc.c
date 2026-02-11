
undefined1 * rsa_gettable_ctx_params(void)

{
  return known_gettable_ctx_params;
}



undefined1 * rsa_settable_ctx_params(void)

{
  return known_settable_ctx_params;
}



undefined8 rsa_set_ctx_params(undefined8 *param_1,long *param_2)

{
  char *__s1;
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined1 *local_190;
  undefined8 local_188;
  int local_180;
  undefined4 uStack_17c;
  undefined1 local_178 [64];
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
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
  local_138 = (undefined1  [16])0x0;
  local_190 = (undefined1 *)0x0;
  local_128 = (undefined1  [16])0x0;
  local_118 = (undefined1  [16])0x0;
  local_108 = (undefined1  [16])0x0;
  local_f8 = (undefined1  [16])0x0;
  local_e8 = (undefined1  [16])0x0;
  local_d8 = (undefined1  [16])0x0;
  local_c8 = (undefined1  [16])0x0;
  local_b8 = (undefined1  [16])0x0;
  local_a8 = (undefined1  [16])0x0;
  local_98 = (undefined1  [16])0x0;
  local_88 = (undefined1  [16])0x0;
  local_78 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  local_48 = (undefined1  [16])0x0;
  if (param_1 != (undefined8 *)0x0) {
    if ((param_2 == (long *)0x0) || (*param_2 == 0)) goto LAB_001003c0;
    lVar3 = OSSL_PARAM_locate_const(param_2,"digest");
    if (lVar3 == 0) {
LAB_00100183:
      lVar3 = OSSL_PARAM_locate_const(param_2,"pad-mode");
      if (lVar3 == 0) {
LAB_0010022b:
        lVar3 = OSSL_PARAM_locate_const(param_2,"mgf1-digest");
        if (lVar3 == 0) {
LAB_001002cb:
          lVar3 = OSSL_PARAM_locate_const(param_2,"oaep-label");
          if (lVar3 != 0) {
            local_188 = 0;
            iVar1 = OSSL_PARAM_get_octet_string(lVar3,&local_188,0,&local_180);
            if (iVar1 == 0) goto LAB_00100126;
            CRYPTO_free((void *)param_1[5]);
            param_1[5] = local_188;
            param_1[6] = CONCAT44(uStack_17c,local_180);
          }
          lVar3 = OSSL_PARAM_locate_const(param_2,"tls-client-version");
          if (lVar3 != 0) {
            iVar1 = OSSL_PARAM_get_uint(lVar3,&local_180);
            if (iVar1 == 0) goto LAB_00100126;
            *(int *)(param_1 + 7) = local_180;
          }
          lVar3 = OSSL_PARAM_locate_const(param_2,"tls-negotiated-version");
          if (lVar3 != 0) {
            iVar1 = OSSL_PARAM_get_uint(lVar3,&local_180);
            if (iVar1 == 0) goto LAB_00100126;
            *(int *)((long)param_1 + 0x3c) = local_180;
          }
          lVar3 = OSSL_PARAM_locate_const(param_2,"implicit-rejection");
          if (lVar3 != 0) {
            iVar1 = OSSL_PARAM_get_uint(lVar3,&local_180);
            if (iVar1 == 0) goto LAB_00100126;
            *(int *)(param_1 + 8) = local_180;
          }
LAB_001003c0:
          uVar4 = 1;
          goto LAB_001003c5;
        }
        local_190 = local_178;
        iVar1 = OSSL_PARAM_get_utf8_string(lVar3,&local_190,0x32);
        if (iVar1 != 0) {
          lVar3 = OSSL_PARAM_locate_const(param_2,"mgf1-properties");
          if (lVar3 == 0) {
            local_190 = (undefined1 *)0x0;
          }
          else {
            local_190 = local_138;
            iVar1 = OSSL_PARAM_get_utf8_string(lVar3,&local_190,0x100);
            if (iVar1 == 0) goto LAB_00100126;
          }
          EVP_MD_free(param_1[4]);
          lVar3 = EVP_MD_fetch(*param_1,local_178,local_190);
          param_1[4] = lVar3;
          if (lVar3 != 0) goto LAB_001002cb;
        }
      }
      else {
        local_180 = 0;
        if (*(int *)(lVar3 + 8) == 1) {
          iVar1 = OSSL_PARAM_get_int(lVar3,&local_180);
          if ((iVar1 != 0) && (local_180 != 6)) {
            iVar1 = local_180;
            if (local_180 != 4) goto LAB_00100228;
LAB_00100418:
            iVar1 = 4;
            if (param_1[3] == 0) {
              lVar3 = EVP_MD_fetch(*param_1,&_LC7,local_138);
              param_1[3] = lVar3;
              iVar1 = local_180;
              if (lVar3 == 0) goto LAB_00100126;
            }
LAB_00100228:
            *(int *)(param_1 + 2) = iVar1;
            goto LAB_0010022b;
          }
        }
        else if ((*(int *)(lVar3 + 8) == 4) &&
                (__s1 = *(char **)(lVar3 + 0x10), __s1 != (char *)0x0)) {
          iVar1 = strcmp(__s1,"pkcs1");
          if (iVar1 == 0) {
            iVar1 = 1;
          }
          else {
            iVar1 = strcmp(__s1,"none");
            if (iVar1 != 0) {
              iVar1 = strcmp(__s1,"oaep");
              if (iVar1 != 0) {
                iVar2 = strcmp(__s1,"oeap");
                iVar1 = 0;
                if (iVar2 != 0) goto LAB_00100228;
              }
              local_180 = 4;
              goto LAB_00100418;
            }
            iVar1 = 3;
          }
          goto LAB_00100228;
        }
      }
    }
    else {
      local_190 = local_178;
      iVar1 = OSSL_PARAM_get_utf8_string(lVar3,&local_190,0x32);
      if (iVar1 != 0) {
        lVar3 = OSSL_PARAM_locate_const(param_2,"digest-props");
        if ((lVar3 == 0) ||
           (local_190 = local_138, iVar1 = OSSL_PARAM_get_utf8_string(lVar3,&local_190,0x100),
           iVar1 != 0)) {
          EVP_MD_free(param_1[3]);
          lVar3 = EVP_MD_fetch(*param_1,local_178,local_138);
          param_1[3] = lVar3;
          if (lVar3 != 0) goto LAB_00100183;
        }
      }
    }
  }
LAB_00100126:
  uVar4 = 0;
LAB_001003c5:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}



bool rsa_get_ctx_params(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  
  if (param_1 == 0) {
    return false;
  }
  lVar2 = OSSL_PARAM_locate(param_2,"pad-mode");
  if (lVar2 == 0) goto LAB_00100528;
  if (*(int *)(lVar2 + 8) == 1) {
    iVar1 = OSSL_PARAM_set_int(lVar2,*(undefined4 *)(param_1 + 0x10));
joined_r0x0010064a:
    if (iVar1 == 0) {
      return false;
    }
  }
  else {
    if (*(int *)(lVar2 + 8) != 4) {
      return false;
    }
    iVar1 = *(int *)(param_1 + 0x10);
    if (iVar1 == 1) {
      lVar2 = 0;
LAB_00100691:
      if (*(long *)(padding_item + lVar2 * 0x10 + 8) != 0) {
        iVar1 = OSSL_PARAM_set_utf8_string();
        goto joined_r0x0010064a;
      }
    }
    else {
      if (iVar1 == 3) {
        lVar2 = 1;
        goto LAB_00100691;
      }
      if (iVar1 == 4) {
        lVar2 = 2;
        goto LAB_00100691;
      }
    }
    ERR_new();
    ERR_set_debug("providers/implementations/asymciphers/rsa_enc.c",0x189,"rsa_get_ctx_params");
    ERR_set_error(0x39,0xc0103,0);
  }
LAB_00100528:
  lVar2 = OSSL_PARAM_locate(param_2,"digest");
  if (lVar2 != 0) {
    puVar3 = &_LC15;
    if (*(long *)(param_1 + 0x18) != 0) {
      puVar3 = (undefined *)EVP_MD_get0_name(*(long *)(param_1 + 0x18),&_LC15);
    }
    iVar1 = OSSL_PARAM_set_utf8_string(lVar2,puVar3);
    if (iVar1 == 0) {
      return false;
    }
  }
  lVar2 = OSSL_PARAM_locate(param_2,"mgf1-digest");
  if (lVar2 != 0) {
    if ((*(long *)(param_1 + 0x20) != 0) || (puVar3 = &_LC15, *(long *)(param_1 + 0x18) != 0)) {
      puVar3 = (undefined *)EVP_MD_get0_name();
    }
    iVar1 = OSSL_PARAM_set_utf8_string(lVar2,puVar3);
    if (iVar1 == 0) {
      return false;
    }
  }
  lVar2 = OSSL_PARAM_locate(param_2,"oaep-label");
  if ((((lVar2 == 0) ||
       (iVar1 = OSSL_PARAM_set_octet_ptr
                          (lVar2,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30)),
       iVar1 != 0)) &&
      ((lVar2 = OSSL_PARAM_locate(param_2,"tls-client-version"), lVar2 == 0 ||
       (iVar1 = OSSL_PARAM_set_uint(lVar2,*(undefined4 *)(param_1 + 0x38)), iVar1 != 0)))) &&
     ((lVar2 = OSSL_PARAM_locate(param_2,"tls-negotiated-version"), lVar2 == 0 ||
      (iVar1 = OSSL_PARAM_set_uint(lVar2,*(undefined4 *)(param_1 + 0x3c)), iVar1 != 0)))) {
    lVar2 = OSSL_PARAM_locate(param_2,"implicit-rejection");
    if (lVar2 == 0) {
      return true;
    }
    iVar1 = OSSL_PARAM_set_uint(lVar2,*(undefined4 *)(param_1 + 0x40));
    return iVar1 != 0;
  }
  return false;
}



undefined8 * rsa_dupctx(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  undefined8 *ptr;
  
  iVar8 = ossl_prov_is_running();
  if ((iVar8 != 0) &&
     (ptr = (undefined8 *)
            CRYPTO_zalloc(0x48,"providers/implementations/asymciphers/rsa_enc.c",0x150),
     ptr != (undefined8 *)0x0)) {
    uVar1 = param_1[1];
    uVar2 = param_1[2];
    uVar3 = param_1[3];
    uVar4 = param_1[4];
    uVar5 = param_1[5];
    uVar6 = param_1[6];
    uVar7 = param_1[7];
    *ptr = *param_1;
    ptr[1] = uVar1;
    ptr[2] = uVar2;
    ptr[3] = uVar3;
    ptr[4] = uVar4;
    ptr[5] = uVar5;
    ptr[6] = uVar6;
    ptr[7] = uVar7;
    ptr[8] = param_1[8];
    if (((RSA *)ptr[1] == (RSA *)0x0) || (iVar8 = RSA_up_ref((RSA *)ptr[1]), iVar8 != 0)) {
      if ((ptr[3] == 0) || (iVar8 = EVP_MD_up_ref(), iVar8 != 0)) {
        if (ptr[4] == 0) {
          return ptr;
        }
        iVar8 = EVP_MD_up_ref();
        if (iVar8 != 0) {
          return ptr;
        }
        RSA_free((RSA *)ptr[1]);
        EVP_MD_free(ptr[3]);
        CRYPTO_free(ptr);
      }
      else {
        RSA_free((RSA *)ptr[1]);
        CRYPTO_free(ptr);
      }
    }
    else {
      CRYPTO_free(ptr);
    }
  }
  return (undefined8 *)0x0;
}



void rsa_freectx(void *param_1)

{
  RSA_free(*(RSA **)((long)param_1 + 8));
  EVP_MD_free(*(undefined8 *)((long)param_1 + 0x18));
  EVP_MD_free(*(undefined8 *)((long)param_1 + 0x20));
  CRYPTO_free(*(void **)((long)param_1 + 0x28));
  CRYPTO_free(param_1);
  return;
}



uint rsa_decrypt(undefined8 *param_1,uchar *param_2,ulong *param_3,ulong param_4,uchar *param_5,
                int param_6)

{
  int iVar1;
  int iVar2;
  uchar *to;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  iVar1 = RSA_size((RSA *)param_1[1]);
  iVar2 = ossl_prov_is_running();
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = *(int *)(param_1 + 2);
  uVar5 = (ulong)iVar1;
  if (iVar2 == 7) {
    if (param_2 == (uchar *)0x0) {
      *param_3 = 0x30;
      return 1;
    }
    if (param_4 < 0x30) {
      ERR_new();
      uVar4 = 0xef;
      goto LAB_00100a11;
    }
  }
  else {
    if (param_2 == (uchar *)0x0) {
      if (uVar5 != 0) {
        *param_3 = uVar5;
        return 1;
      }
      ERR_new();
      ERR_set_debug("providers/implementations/asymciphers/rsa_enc.c",0xf5,"rsa_decrypt");
      ERR_set_error(0x39,0x9e,0);
      return 0;
    }
    if (param_4 < uVar5) {
      ERR_new();
      uVar4 = 0xfd;
LAB_00100a11:
      ERR_set_debug("providers/implementations/asymciphers/rsa_enc.c",uVar4,"rsa_decrypt");
      ERR_set_error(0x39,0x8e,0);
      return 0;
    }
    if (iVar2 != 4) {
      if ((*(int *)(param_1 + 8) == 0) && (iVar2 == 1)) {
        iVar2 = 8;
      }
      iVar1 = RSA_private_decrypt(param_6,param_5,param_2,(RSA *)param_1[1],iVar2);
      goto LAB_001008de;
    }
  }
  to = (uchar *)CRYPTO_malloc(iVar1,"providers/implementations/asymciphers/rsa_enc.c",0x106);
  if (to == (uchar *)0x0) {
    return 0;
  }
  iVar2 = RSA_private_decrypt(param_6,param_5,to,(RSA *)param_1[1],3);
  if (iVar1 != iVar2) {
    CRYPTO_free(to);
    ERR_new();
    ERR_set_debug("providers/implementations/asymciphers/rsa_enc.c",0x110,"rsa_decrypt");
    ERR_set_error(0x39,0xa2,0);
    return 0;
  }
  if (*(int *)(param_1 + 2) == 4) {
    lVar3 = param_1[3];
    if (lVar3 == 0) {
      lVar3 = EVP_MD_fetch(*param_1,"SHA-1",0);
      param_1[3] = lVar3;
      if (lVar3 == 0) {
        CRYPTO_free(to);
        ERR_new();
        ERR_set_debug("providers/implementations/asymciphers/rsa_enc.c",0x118,"rsa_decrypt");
        ERR_set_error(0x39,0xc0103,0);
        return 0;
      }
    }
    iVar1 = RSA_padding_check_PKCS1_OAEP_mgf1
                      (param_2,param_4 & 0xffffffff,to,iVar1,iVar1,param_1[5],param_1[6],lVar3,
                       param_1[4]);
  }
  else {
    if (*(int *)(param_1 + 7) == 0) {
      ERR_new();
      ERR_set_debug("providers/implementations/asymciphers/rsa_enc.c",0x125,"rsa_decrypt");
      ERR_set_error(0x39,0xa1,0);
      CRYPTO_free(to);
      return 0;
    }
    iVar1 = ossl_rsa_padding_check_PKCS1_type_2_TLS
                      (*param_1,param_2,param_4,to,uVar5,*(int *)(param_1 + 7),
                       *(undefined4 *)((long)param_1 + 0x3c));
  }
  CRYPTO_free(to);
LAB_001008de:
  uVar5 = (long)iVar1 >> 0x3f;
  *param_3 = uVar5 & *param_3 | (long)iVar1 & ~uVar5;
  return ~(iVar1 >> 0x1f) & 1;
}



int rsa_encrypt(undefined8 *param_1,uchar *param_2,long *param_3,undefined8 param_4,uchar *param_5,
               int param_6)

{
  RSA *rsa;
  int iVar1;
  int iVar2;
  long lVar3;
  uchar *from;
  undefined8 uVar4;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 == 0) {
LAB_00100d73:
    iVar1 = 0;
  }
  else {
    rsa = (RSA *)param_1[1];
    if (param_2 == (uchar *)0x0) {
      iVar1 = RSA_size(rsa);
      lVar3 = (long)iVar1;
      if (lVar3 == 0) {
        ERR_new();
        ERR_set_debug("providers/implementations/asymciphers/rsa_enc.c",0xaf,"rsa_encrypt");
        ERR_set_error(0x39,0x9e,0);
        goto LAB_00100d73;
      }
    }
    else {
      if (*(int *)(param_1 + 2) == 4) {
        iVar1 = RSA_size(rsa);
        from = (uchar *)CRYPTO_malloc(iVar1,"providers/implementations/asymciphers/rsa_enc.c",0xba);
        if (from == (uchar *)0x0) goto LAB_00100d73;
        lVar3 = param_1[3];
        uVar4 = *param_1;
        if (lVar3 == 0) {
          lVar3 = EVP_MD_fetch(uVar4,"SHA-1",0);
          param_1[3] = lVar3;
          if (lVar3 == 0) {
            CRYPTO_free(from);
            ERR_new();
            ERR_set_debug("providers/implementations/asymciphers/rsa_enc.c",0xc0,"rsa_encrypt");
            ERR_set_error(0x39,0xc0103,0);
            return 0;
          }
          uVar4 = *param_1;
        }
        iVar2 = ossl_rsa_padding_add_PKCS1_OAEP_mgf1_ex
                          (uVar4,from,iVar1,param_5,param_6,param_1[5],param_1[6],lVar3,param_1[4]);
        if (iVar2 == 0) {
          CRYPTO_free(from);
          return 0;
        }
        iVar1 = RSA_public_encrypt(iVar1,from,param_2,(RSA *)param_1[1],3);
        CRYPTO_free(from);
      }
      else {
        iVar1 = RSA_public_encrypt(param_6,param_5,param_2,rsa,*(int *)(param_1 + 2));
      }
      if (iVar1 < 0) {
        return iVar1;
      }
      lVar3 = (long)iVar1;
    }
    *param_3 = lVar3;
    iVar1 = 1;
  }
  return iVar1;
}



undefined8 * rsa_newctx(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)0x0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    puVar2 = (undefined8 *)
             CRYPTO_zalloc(0x48,"providers/implementations/asymciphers/rsa_enc.c",0x57);
    if (puVar2 != (undefined8 *)0x0) {
      uVar3 = ossl_prov_ctx_get0_libctx(param_1);
      *puVar2 = uVar3;
    }
  }
  return puVar2;
}



bool rsa_encrypt_init(long param_1,RSA *param_2,undefined8 param_3)

{
  int iVar1;
  long in_FS_OFFSET;
  bool bVar2;
  undefined4 local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_24 = 0;
  iVar1 = ossl_prov_is_running();
  if ((((iVar1 != 0) && (param_1 != 0)) && (param_2 != (RSA *)0x0)) &&
     ((iVar1 = ossl_rsa_key_op_get_protect(param_2,0x200,&local_24), iVar1 != 0 &&
      (iVar1 = RSA_up_ref(param_2), iVar1 != 0)))) {
    RSA_free(*(RSA **)(param_1 + 8));
    *(RSA **)(param_1 + 8) = param_2;
    *(undefined4 *)(param_1 + 0x14) = 0x200;
    *(undefined4 *)(param_1 + 0x40) = 1;
    iVar1 = RSA_test_flags(param_2,0xf000);
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x10) = 1;
      iVar1 = rsa_set_ctx_params(param_1,param_3);
      bVar2 = iVar1 != 0;
      goto LAB_00100ec2;
    }
    ERR_new();
    ERR_set_debug("providers/implementations/asymciphers/rsa_enc.c",0x78,"rsa_init");
    ERR_set_error(0x39,0xc0103,0);
  }
  bVar2 = false;
LAB_00100ec2:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar2;
}



bool rsa_decrypt_init(long param_1,RSA *param_2,undefined8 param_3)

{
  int iVar1;
  long in_FS_OFFSET;
  bool bVar2;
  undefined4 local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_24 = 0;
  iVar1 = ossl_prov_is_running();
  if ((((iVar1 != 0) && (param_1 != 0)) && (param_2 != (RSA *)0x0)) &&
     ((iVar1 = ossl_rsa_key_op_get_protect(param_2,0x400,&local_24), iVar1 != 0 &&
      (iVar1 = RSA_up_ref(param_2), iVar1 != 0)))) {
    RSA_free(*(RSA **)(param_1 + 8));
    *(RSA **)(param_1 + 8) = param_2;
    *(undefined4 *)(param_1 + 0x14) = 0x400;
    *(undefined4 *)(param_1 + 0x40) = 1;
    iVar1 = RSA_test_flags(param_2,0xf000);
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x10) = 1;
      iVar1 = rsa_set_ctx_params(param_1,param_3);
      bVar2 = iVar1 != 0;
      goto LAB_00100fe2;
    }
    ERR_new();
    ERR_set_debug("providers/implementations/asymciphers/rsa_enc.c",0x78,"rsa_init");
    ERR_set_error(0x39,0xc0103,0);
  }
  bVar2 = false;
LAB_00100fe2:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar2;
}


