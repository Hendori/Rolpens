
bool ossl_rsa_verify_PKCS1_PSS_mgf1
               (RSA *param_1,void *param_2,EVP_MD *param_3,EVP_MD *param_4,byte *param_5,
               uint *param_6)

{
  uint num;
  bool bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  EVP_MD_CTX *ctx;
  byte *mask;
  ulong uVar5;
  size_t cnt;
  undefined8 uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  long in_FS_OFFSET;
  sbyte local_c0;
  uchar local_88 [72];
  long local_40;
  
  uVar7 = *param_6;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
  if (ctx != (EVP_MD_CTX *)0x0) {
    if (param_4 == (EVP_MD *)0x0) {
      param_4 = param_3;
    }
    uVar3 = EVP_MD_get_size(param_3);
    if (0 < (int)uVar3) {
      uVar9 = uVar3;
      if ((uVar7 == 0xffffffff) || (uVar9 = uVar7, -5 < (int)uVar7)) {
        iVar4 = BN_num_bits(param_1->e);
        uVar7 = iVar4 - 1U & 7;
        iVar4 = RSA_size(param_1);
        local_c0 = (sbyte)uVar7;
        if (((uint)*param_5 & 0xff << local_c0) == 0) {
          if (uVar7 == 0) {
            param_5 = param_5 + 1;
            iVar4 = iVar4 + -1;
          }
          if ((int)(uVar3 + 1) < iVar4) {
            iVar8 = iVar4 - uVar3;
            if (uVar9 == 0xfffffffd) {
              uVar9 = iVar8 - 2;
              bVar2 = param_5[(long)iVar4 + -1];
            }
            else {
              if (iVar8 + -1 <= (int)uVar9) {
                ERR_new();
                uVar6 = 99;
                goto LAB_00100471;
              }
              bVar2 = param_5[(long)iVar4 + -1];
            }
            if (bVar2 == 0xbc) {
              num = iVar8 - 1;
              mask = (byte *)CRYPTO_malloc(num,"crypto/rsa/rsa_pss.c",0x6c);
              if (mask != (byte *)0x0) {
                cnt = (size_t)(int)uVar3;
                iVar4 = PKCS1_MGF1(mask,(long)(int)num,param_5 + (int)num,cnt,param_4);
                bVar1 = false;
                if (iVar4 < 0) goto LAB_0010030a;
                bVar2 = *mask;
                if (num == 0) {
                  if (uVar7 != 0) goto LAB_001003a0;
                  if (bVar2 != 0) goto LAB_00100554;
                }
                else {
                  uVar5 = 0;
                  do {
                    mask[uVar5] = mask[uVar5] ^ param_5[uVar5];
                    uVar5 = uVar5 + 1;
                  } while (uVar5 != num);
                  bVar2 = *mask;
                  if (uVar7 != 0) {
LAB_001003a0:
                    bVar2 = (byte)(0xff >> (8U - local_c0 & 0x1f)) & *mask;
                    *mask = bVar2;
                  }
                  if (bVar2 == 0) {
                    if (2 < iVar8) {
                      uVar5 = 1;
                      do {
                        bVar2 = mask[uVar5];
                        if (bVar2 != 0) {
                          iVar4 = (int)uVar5 + 1;
                          goto LAB_001001f9;
                        }
                        uVar5 = uVar5 + 1;
                      } while (num != uVar5);
                    }
                  }
                  else {
LAB_00100554:
                    iVar4 = 1;
LAB_001001f9:
                    if (bVar2 == 1) {
                      uVar7 = num - iVar4;
                      if (((uVar9 & 0xfffffffd) == 0xfffffffc) || (uVar9 == uVar7)) {
                        iVar8 = EVP_DigestInit_ex(ctx,param_3,(ENGINE *)0x0);
                        if (((iVar8 != 0) &&
                            ((iVar8 = EVP_DigestUpdate(ctx,&zeroes,8), iVar8 != 0 &&
                             (iVar8 = EVP_DigestUpdate(ctx,param_2,cnt), iVar8 != 0)))) &&
                           ((uVar7 == 0 ||
                            (iVar4 = EVP_DigestUpdate(ctx,mask + iVar4,(long)(int)uVar7), iVar4 != 0
                            )))) {
                          iVar4 = EVP_DigestFinal_ex(ctx,local_88,(uint *)0x0);
                          if (iVar4 != 0) {
                            iVar4 = memcmp(local_88,param_5 + (int)num,cnt);
                            if (iVar4 != 0) {
                              ERR_new();
                              ERR_set_debug("crypto/rsa/rsa_pss.c",0x8f,
                                            "ossl_rsa_verify_PKCS1_PSS_mgf1");
                              ERR_set_error(4,0x68,0);
                            }
                            bVar1 = iVar4 == 0;
                            *param_6 = uVar7;
                          }
                        }
                      }
                      else {
                        ERR_new();
                        ERR_set_debug("crypto/rsa/rsa_pss.c",0x7d,"ossl_rsa_verify_PKCS1_PSS_mgf1");
                        ERR_set_error(4,0x88,"expected: %d retrieved: %d",uVar9,uVar7);
                      }
                      goto LAB_0010030a;
                    }
                  }
                }
                ERR_new();
                ERR_set_debug("crypto/rsa/rsa_pss.c",0x77,"ossl_rsa_verify_PKCS1_PSS_mgf1");
                ERR_set_error(4,0x87,0);
                goto LAB_0010030a;
              }
            }
            else {
              ERR_new();
              ERR_set_debug("crypto/rsa/rsa_pss.c",0x67,"ossl_rsa_verify_PKCS1_PSS_mgf1");
              ERR_set_error(4,0x86,0);
            }
          }
          else {
            ERR_new();
            uVar6 = 0x5d;
LAB_00100471:
            ERR_set_debug("crypto/rsa/rsa_pss.c",uVar6,"ossl_rsa_verify_PKCS1_PSS_mgf1");
            ERR_set_error(4,0x6d,0);
          }
        }
        else {
          ERR_new();
          ERR_set_debug("crypto/rsa/rsa_pss.c",0x55,"ossl_rsa_verify_PKCS1_PSS_mgf1");
          ERR_set_error(4,0x85,0);
        }
      }
      else {
        ERR_new();
        ERR_set_debug("crypto/rsa/rsa_pss.c",0x4e,"ossl_rsa_verify_PKCS1_PSS_mgf1");
        ERR_set_error(4,0x88,0);
      }
    }
  }
  bVar1 = false;
  mask = (byte *)0x0;
LAB_0010030a:
  CRYPTO_free(mask);
  EVP_MD_CTX_free(ctx);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int RSA_verify_PKCS1_PSS_mgf1
              (RSA *rsa,uchar *mHash,EVP_MD *Hash,EVP_MD *mgf1Hash,uchar *EM,int sLen)

{
  int iVar1;
  
  iVar1 = ossl_rsa_verify_PKCS1_PSS_mgf1();
  return iVar1;
}



int RSA_verify_PKCS1_PSS(RSA *rsa,uchar *mHash,EVP_MD *Hash,uchar *EM,int sLen)

{
  int iVar1;
  
  iVar1 = RSA_verify_PKCS1_PSS_mgf1(rsa,mHash,Hash,(EVP_MD *)0x0,EM,sLen);
  return iVar1;
}



int ossl_rsa_padding_add_PKCS1_PSS_mgf1
              (RSA *param_1,byte *param_2,void *param_3,EVP_MD *param_4,EVP_MD *param_5,int *param_6
              )

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  EVP_MD_CTX *ctx;
  long lVar6;
  void *d;
  int iVar7;
  int num;
  size_t local_70;
  byte *local_60;
  int local_58;
  
  iVar3 = *param_6;
  if (param_5 == (EVP_MD *)0x0) {
    param_5 = param_4;
  }
  iVar2 = EVP_MD_get_size(param_4);
  if (iVar2 < 1) {
    local_70 = (size_t)iVar3;
    ctx = (EVP_MD_CTX *)0x0;
    d = (void *)0x0;
    iVar3 = 0;
    goto LAB_00100854;
  }
  if (iVar3 == -2) {
    num = -1;
    iVar7 = -3;
  }
  else {
    num = iVar3;
    iVar7 = iVar2;
    if (iVar3 != -1) {
      if (iVar3 == -4) {
        num = iVar2;
        iVar7 = -3;
      }
      else {
        if (iVar3 < -4) {
          ERR_new();
          ctx = (EVP_MD_CTX *)0x0;
          ERR_set_debug("crypto/rsa/rsa_pss.c",0xd8,"ossl_rsa_padding_add_PKCS1_PSS_mgf1");
          ERR_set_error(4,0x88,0);
          local_70 = (size_t)iVar3;
          d = (void *)0x0;
          iVar3 = 0;
          goto LAB_00100854;
        }
        num = -1;
        iVar7 = iVar3;
      }
    }
  }
  iVar3 = BN_num_bits(param_1->e);
  uVar4 = iVar3 - 1U & 7;
  local_58 = RSA_size(param_1);
  local_60 = param_2;
  if (uVar4 == 0) {
    local_58 = local_58 + -1;
    local_60 = param_2 + 1;
    *param_2 = 0;
  }
  if (local_58 <= iVar2 + 1) {
    ERR_new();
    ctx = (EVP_MD_CTX *)0x0;
    d = (void *)0x0;
    ERR_set_debug("crypto/rsa/rsa_pss.c",0xe3,"ossl_rsa_padding_add_PKCS1_PSS_mgf1");
    ERR_set_error(4,0x6e,0);
    local_70 = (size_t)iVar7;
    iVar3 = 0;
    goto LAB_00100854;
  }
  iVar5 = local_58 - iVar2;
  if (iVar7 == -3) {
    iVar7 = iVar5 + -2;
    if ((num < 0) || (iVar7 <= num)) goto LAB_001006bf;
LAB_001008c9:
    local_70 = (size_t)num;
    d = CRYPTO_malloc(num,"crypto/rsa/rsa_pss.c",0xef);
    if ((d != (void *)0x0) && (iVar3 = RAND_bytes_ex(param_1->version,d,local_70,0), 0 < iVar3))
    goto LAB_001006df;
    ctx = (EVP_MD_CTX *)0x0;
  }
  else {
    if (iVar5 + -1 <= iVar7) {
      local_70 = (size_t)iVar7;
      ctx = (EVP_MD_CTX *)0x0;
      d = (void *)0x0;
      ERR_new();
      ERR_set_debug("crypto/rsa/rsa_pss.c",0xeb,"ossl_rsa_padding_add_PKCS1_PSS_mgf1");
      ERR_set_error(4,0x6e,0);
      iVar3 = 0;
      goto LAB_00100854;
    }
LAB_001006bf:
    num = iVar7;
    if (0 < iVar7) goto LAB_001008c9;
    local_70 = (size_t)iVar7;
    d = (void *)0x0;
LAB_001006df:
    ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
    iVar3 = 0;
    if (ctx == (EVP_MD_CTX *)0x0) goto LAB_00100854;
    iVar3 = EVP_DigestInit_ex(ctx,param_4,(ENGINE *)0x0);
    if ((iVar3 != 0) && (iVar3 = EVP_DigestUpdate(ctx,&zeroes,8), iVar3 != 0)) {
      iVar3 = EVP_DigestUpdate(ctx,param_3,(long)iVar2);
      if (iVar3 != 0) {
        if ((num != 0) && (iVar3 = EVP_DigestUpdate(ctx,d,local_70), iVar3 == 0)) goto LAB_00100854;
        iVar3 = EVP_DigestFinal_ex(ctx,local_60 + (iVar5 + -1),(uint *)0x0);
        if ((iVar3 != 0) &&
           (iVar3 = PKCS1_MGF1(local_60,(long)(iVar5 + -1),local_60 + (iVar5 + -1),(long)iVar2,
                               param_5), iVar3 == 0)) {
          pbVar1 = local_60 + (long)((local_58 - num) - iVar2) + -2;
          *pbVar1 = *pbVar1 ^ 1;
          if (0 < num) {
            lVar6 = 1;
            do {
              pbVar1[lVar6] = pbVar1[lVar6] ^ *(byte *)((long)d + lVar6 + -1);
              lVar6 = lVar6 + 1;
            } while (num + 1 != lVar6);
          }
          if (uVar4 != 0) {
            *local_60 = *local_60 & (byte)(0xff >> (8U - (char)uVar4 & 0x1f));
          }
          local_60[(long)local_58 + -1] = 0xbc;
          *param_6 = num;
          iVar3 = 1;
          goto LAB_00100854;
        }
      }
    }
  }
  iVar3 = 0;
LAB_00100854:
  EVP_MD_CTX_free(ctx);
  CRYPTO_clear_free(d,local_70,"crypto/rsa/rsa_pss.c",0x11f);
  return iVar3;
}



int RSA_padding_add_PKCS1_PSS_mgf1
              (RSA *rsa,uchar *EM,uchar *mHash,EVP_MD *Hash,EVP_MD *mgf1Hash,int sLen)

{
  int iVar1;
  
  iVar1 = ossl_rsa_padding_add_PKCS1_PSS_mgf1();
  return iVar1;
}



int RSA_padding_add_PKCS1_PSS(RSA *rsa,uchar *EM,uchar *mHash,EVP_MD *Hash,int sLen)

{
  int iVar1;
  
  iVar1 = RSA_padding_add_PKCS1_PSS_mgf1(rsa,EM,mHash,Hash,(EVP_MD *)0x0,sLen);
  return iVar1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 ossl_rsa_pss_params_30_set_defaults(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = _UNK_00100ce8;
  uVar1 = __LC2;
  if (param_1 != (undefined8 *)0x0) {
    *(undefined4 *)(param_1 + 2) = 1;
    *param_1 = uVar1;
    param_1[1] = uVar2;
    return 1;
  }
  return 0;
}



uint ossl_rsa_pss_params_30_is_unrestricted(long *param_1)

{
  uint uVar1;
  
  uVar1 = 1;
  if (param_1 != (long *)0x0) {
    if ((*param_1 == pss_params_cmp_0._0_8_ && param_1[1] == pss_params_cmp_0._8_8_) &&
       ((int)param_1[2] == pss_params_cmp_0._16_4_)) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
    uVar1 = uVar1 ^ 1;
  }
  return uVar1;
}



undefined8 ossl_rsa_pss_params_30_copy(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  return 1;
}



undefined8 ossl_rsa_pss_params_30_set_hashalg(undefined4 *param_1,undefined4 param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = param_2;
    return 1;
  }
  return 0;
}



undefined8 ossl_rsa_pss_params_30_set_maskgenhashalg(long param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 8) = param_2;
    return 1;
  }
  return 0;
}



undefined8 ossl_rsa_pss_params_30_set_saltlen(long param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0xc) = param_2;
    return 1;
  }
  return 0;
}



undefined8 ossl_rsa_pss_params_30_set_trailerfield(long param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x10) = param_2;
    return 1;
  }
  return 0;
}



undefined4 ossl_rsa_pss_params_30_hashalg(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    return *param_1;
  }
  return 0x40;
}



undefined4 ossl_rsa_pss_params_30_maskgenalg(long param_1)

{
  if (param_1 != 0) {
    return *(undefined4 *)(param_1 + 4);
  }
  return 0x38f;
}



undefined4 ossl_rsa_pss_params_30_maskgenhashalg(long param_1)

{
  if (param_1 != 0) {
    return *(undefined4 *)(param_1 + 8);
  }
  return 0x40;
}



undefined4 ossl_rsa_pss_params_30_saltlen(long param_1)

{
  if (param_1 != 0) {
    return *(undefined4 *)(param_1 + 0xc);
  }
  return 0x14;
}



undefined4 ossl_rsa_pss_params_30_trailerfield(long param_1)

{
  if (param_1 != 0) {
    return *(undefined4 *)(param_1 + 0x10);
  }
  return 1;
}


