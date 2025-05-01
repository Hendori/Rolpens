
bool ossl_rsa_verify_PKCS1_PSS_mgf1
               (RSA *param_1,void *param_2,EVP_MD *param_3,EVP_MD *param_4,byte *param_5,
               uint *param_6)

{
  uint num;
  uint uVar1;
  ulong uVar2;
  bool bVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  EVP_MD_CTX *ctx;
  byte *mask;
  long lVar8;
  size_t cnt;
  ulong uVar9;
  undefined8 uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  long in_FS_OFFSET;
  sbyte local_c0;
  uchar local_88 [72];
  long local_40;
  
  uVar12 = *param_6;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
  if (ctx != (EVP_MD_CTX *)0x0) {
    if (param_4 == (EVP_MD *)0x0) {
      param_4 = param_3;
    }
    uVar5 = EVP_MD_get_size(param_3);
    if (0 < (int)uVar5) {
      uVar13 = uVar5;
      if ((uVar12 == 0xffffffff) || (uVar13 = uVar12, -5 < (int)uVar12)) {
        iVar6 = BN_num_bits(param_1->e);
        uVar12 = iVar6 - 1U & 7;
        iVar6 = RSA_size(param_1);
        local_c0 = (sbyte)uVar12;
        if (((uint)*param_5 & 0xff << local_c0) == 0) {
          if (uVar12 == 0) {
            param_5 = param_5 + 1;
            iVar6 = iVar6 + -1;
          }
          if ((int)(uVar5 + 1) < iVar6) {
            iVar11 = iVar6 - uVar5;
            if (uVar13 == 0xfffffffd) {
              uVar13 = iVar11 - 2;
              bVar4 = param_5[(long)iVar6 + -1];
            }
            else {
              if (iVar11 + -1 <= (int)uVar13) {
                ERR_new();
                uVar10 = 99;
                goto LAB_00100561;
              }
              bVar4 = param_5[(long)iVar6 + -1];
            }
            if (bVar4 == 0xbc) {
              num = iVar11 - 1;
              mask = (byte *)CRYPTO_malloc(num,"crypto/rsa/rsa_pss.c",0x6c);
              if (mask != (byte *)0x0) {
                cnt = (size_t)(int)uVar5;
                iVar6 = PKCS1_MGF1(mask,(long)(int)num,param_5 + (int)num,cnt,param_4);
                bVar3 = false;
                if (iVar6 < 0) goto LAB_001003f2;
                bVar4 = *mask;
                if (num == 0) {
                  if (uVar12 != 0) {
LAB_00100490:
                    bVar4 = (byte)(0xff >> (8U - local_c0 & 0x1f)) & *mask;
                    *mask = bVar4;
                    goto LAB_001002a9;
                  }
                  if (bVar4 != 0) goto LAB_00100644;
                }
                else {
                  if (iVar11 - 2U < 0xf) {
                    uVar5 = 0;
                    uVar9 = 0;
LAB_001001e0:
                    iVar6 = iVar11 - (int)uVar9;
                    uVar1 = iVar6 - 1;
                    if (iVar6 - 2U < 7) {
LAB_00100216:
                      mask[(int)uVar5] = mask[(int)uVar5] ^ param_5[(int)uVar5];
                      iVar6 = uVar5 + 1;
                      if (iVar6 < (int)num) {
                        mask[iVar6] = mask[iVar6] ^ param_5[iVar6];
                        iVar6 = uVar5 + 2;
                        if (iVar6 < (int)num) {
                          mask[iVar6] = mask[iVar6] ^ param_5[iVar6];
                          iVar6 = uVar5 + 3;
                          if (iVar6 < (int)num) {
                            mask[iVar6] = mask[iVar6] ^ param_5[iVar6];
                            iVar6 = uVar5 + 4;
                            if (iVar6 < (int)num) {
                              mask[iVar6] = mask[iVar6] ^ param_5[iVar6];
                              iVar6 = uVar5 + 5;
                              if (iVar6 < (int)num) {
                                iVar7 = uVar5 + 6;
                                mask[iVar6] = mask[iVar6] ^ param_5[iVar6];
                                if (iVar7 < (int)num) {
                                  mask[iVar7] = mask[iVar7] ^ param_5[iVar7];
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    else {
                      uVar5 = uVar5 + (uVar1 & 0xfffffff8);
                      *(ulong *)(mask + uVar9) =
                           *(ulong *)(param_5 + uVar9) ^ *(ulong *)(mask + uVar9);
                      if ((uVar1 & 7) != 0) goto LAB_00100216;
                    }
                    bVar4 = *mask;
                    if (uVar12 != 0) goto LAB_00100490;
LAB_001002a9:
                    if (bVar4 != 0) {
LAB_00100644:
                      iVar6 = 1;
LAB_001002e1:
                      if (bVar4 == 1) {
                        uVar12 = num - iVar6;
                        if (((uVar13 & 0xfffffffd) == 0xfffffffc) || (uVar13 == uVar12)) {
                          iVar11 = EVP_DigestInit_ex(ctx,param_3,(ENGINE *)0x0);
                          if (((iVar11 != 0) &&
                              ((iVar11 = EVP_DigestUpdate(ctx,&zeroes,8), iVar11 != 0 &&
                               (iVar11 = EVP_DigestUpdate(ctx,param_2,cnt), iVar11 != 0)))) &&
                             ((uVar12 == 0 ||
                              (iVar6 = EVP_DigestUpdate(ctx,mask + iVar6,(long)(int)uVar12),
                              iVar6 != 0)))) {
                            iVar6 = EVP_DigestFinal_ex(ctx,local_88,(uint *)0x0);
                            if (iVar6 != 0) {
                              iVar6 = memcmp(local_88,param_5 + (int)num,cnt);
                              if (iVar6 != 0) {
                                ERR_new();
                                ERR_set_debug("crypto/rsa/rsa_pss.c",0x8f,
                                              "ossl_rsa_verify_PKCS1_PSS_mgf1");
                                ERR_set_error(4,0x68,0);
                              }
                              bVar3 = iVar6 == 0;
                              *param_6 = uVar12;
                            }
                          }
                        }
                        else {
                          ERR_new();
                          ERR_set_debug("crypto/rsa/rsa_pss.c",0x7d,"ossl_rsa_verify_PKCS1_PSS_mgf1"
                                       );
                          ERR_set_error(4,0x88,"expected: %d retrieved: %d",uVar13,uVar12);
                        }
                        goto LAB_001003f2;
                      }
                      goto LAB_001005a8;
                    }
                    if (iVar11 < 3) goto LAB_001005a8;
                  }
                  else {
                    lVar8 = 0;
                    do {
                      uVar9 = *(ulong *)((long)(mask + lVar8) + 8);
                      uVar2 = *(ulong *)((long)(param_5 + lVar8) + 8);
                      *(ulong *)(mask + lVar8) =
                           *(ulong *)(mask + lVar8) ^ *(ulong *)(param_5 + lVar8);
                      *(ulong *)((long)(mask + lVar8) + 8) = uVar9 ^ uVar2;
                      lVar8 = lVar8 + 0x10;
                    } while ((ulong)(num >> 4) << 4 != lVar8);
                    uVar5 = num & 0xfffffff0;
                    uVar9 = (ulong)uVar5;
                    if ((num & 0xf) != 0) goto LAB_001001e0;
                    bVar4 = *mask;
                    if (uVar12 != 0) goto LAB_00100490;
                    if (bVar4 != 0) goto LAB_00100644;
                  }
                  uVar9 = 1;
                  do {
                    bVar4 = mask[uVar9];
                    if (bVar4 != 0) {
                      iVar6 = (int)uVar9 + 1;
                      goto LAB_001002e1;
                    }
                    uVar9 = uVar9 + 1;
                  } while (num != uVar9);
                }
LAB_001005a8:
                ERR_new();
                ERR_set_debug("crypto/rsa/rsa_pss.c",0x77,"ossl_rsa_verify_PKCS1_PSS_mgf1");
                ERR_set_error(4,0x87,0);
                goto LAB_001003f2;
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
            uVar10 = 0x5d;
LAB_00100561:
            ERR_set_debug("crypto/rsa/rsa_pss.c",uVar10,"ossl_rsa_verify_PKCS1_PSS_mgf1");
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
  bVar3 = false;
  mask = (byte *)0x0;
LAB_001003f2:
  CRYPTO_free(mask);
  EVP_MD_CTX_free(ctx);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar3;
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
              (RSA *param_1,byte *param_2,void *param_3,EVP_MD *param_4,EVP_MD *param_5,
              uint *param_6)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  EVP_MD_CTX *ctx;
  long lVar6;
  long lVar7;
  byte *pbVar8;
  ulong uVar9;
  uint uVar10;
  size_t cnt;
  uint num;
  void *local_80;
  size_t local_78;
  byte *local_68;
  int local_60;
  size_t local_40;
  
  uVar4 = *param_6;
  if (param_5 == (EVP_MD *)0x0) {
    param_5 = param_4;
  }
  uVar2 = EVP_MD_get_size(param_4);
  if ((int)uVar2 < 1) {
    local_78 = (size_t)(int)uVar4;
    ctx = (EVP_MD_CTX *)0x0;
    local_80 = (void *)0x0;
    iVar3 = 0;
    goto LAB_00100a9a;
  }
  if (uVar4 == 0xfffffffe) {
    num = 0xffffffff;
    uVar10 = 0xfffffffd;
  }
  else {
    num = uVar4;
    uVar10 = uVar2;
    if (uVar4 != 0xffffffff) {
      if (uVar4 == 0xfffffffc) {
        num = uVar2;
        uVar10 = 0xfffffffd;
      }
      else {
        if ((int)uVar4 < -4) {
          ERR_new();
          ctx = (EVP_MD_CTX *)0x0;
          ERR_set_debug("crypto/rsa/rsa_pss.c",0xd8,"ossl_rsa_padding_add_PKCS1_PSS_mgf1");
          ERR_set_error(4,0x88,0);
          local_78 = (size_t)(int)uVar4;
          local_80 = (void *)0x0;
          iVar3 = 0;
          goto LAB_00100a9a;
        }
        num = 0xffffffff;
        uVar10 = uVar4;
      }
    }
  }
  iVar3 = BN_num_bits(param_1->e);
  uVar4 = iVar3 - 1U & 7;
  local_60 = RSA_size(param_1);
  local_68 = param_2;
  if (uVar4 == 0) {
    local_60 = local_60 + -1;
    local_68 = param_2 + 1;
    *param_2 = 0;
  }
  if (local_60 <= (int)(uVar2 + 1)) {
    ERR_new();
    ctx = (EVP_MD_CTX *)0x0;
    ERR_set_debug("crypto/rsa/rsa_pss.c",0xe3,"ossl_rsa_padding_add_PKCS1_PSS_mgf1");
    ERR_set_error(4,0x6e,0);
    local_78 = (size_t)(int)uVar10;
    local_80 = (void *)0x0;
    iVar3 = 0;
    goto LAB_00100a9a;
  }
  iVar5 = local_60 - uVar2;
  if (uVar10 == 0xfffffffd) {
    uVar10 = iVar5 - 2;
    if (((int)num < 0) || ((int)uVar10 <= (int)num)) goto LAB_001007d9;
LAB_00100b19:
    local_78 = (size_t)(int)num;
    local_80 = CRYPTO_malloc(num,"crypto/rsa/rsa_pss.c",0xef);
    if ((local_80 != (void *)0x0) &&
       (iVar3 = RAND_bytes_ex(param_1->version,local_80,local_78,0), local_40 = local_78, 0 < iVar3)
       ) goto LAB_00100804;
    ctx = (EVP_MD_CTX *)0x0;
  }
  else {
    if (iVar5 + -1 <= (int)uVar10) {
      local_78 = (size_t)(int)uVar10;
      ctx = (EVP_MD_CTX *)0x0;
      ERR_new();
      ERR_set_debug("crypto/rsa/rsa_pss.c",0xeb,"ossl_rsa_padding_add_PKCS1_PSS_mgf1");
      ERR_set_error(4,0x6e,0);
      iVar3 = 0;
      local_80 = (void *)0x0;
      goto LAB_00100a9a;
    }
LAB_001007d9:
    num = uVar10;
    if (0 < (int)uVar10) goto LAB_00100b19;
    local_80 = (void *)0x0;
    local_40 = (size_t)(int)uVar10;
LAB_00100804:
    ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
    iVar3 = 0;
    local_78 = local_40;
    if (ctx == (EVP_MD_CTX *)0x0) goto LAB_00100a9a;
    iVar3 = EVP_DigestInit_ex(ctx,param_4,(ENGINE *)0x0);
    if ((iVar3 != 0) && (iVar3 = EVP_DigestUpdate(ctx,&zeroes,8), iVar3 != 0)) {
      cnt = (size_t)(int)uVar2;
      iVar3 = EVP_DigestUpdate(ctx,param_3,cnt);
      if (iVar3 != 0) {
        if ((num != 0) && (iVar3 = EVP_DigestUpdate(ctx,local_80,local_40), iVar3 == 0))
        goto LAB_00100a9a;
        iVar3 = EVP_DigestFinal_ex(ctx,local_68 + (iVar5 + -1),(uint *)0x0);
        if ((iVar3 != 0) &&
           (iVar3 = PKCS1_MGF1(local_68,(long)(iVar5 + -1),local_68 + (iVar5 + -1),cnt,param_5),
           iVar3 == 0)) {
          pbVar8 = local_68 + (long)(int)((local_60 - num) - uVar2) + -2;
          *pbVar8 = *pbVar8 ^ 1;
          if (0 < (int)num) {
            pbVar8 = pbVar8 + 1;
            if (num - 1 < 0xf) {
              uVar9 = 0;
              uVar2 = 0;
            }
            else {
              lVar7 = (((long)local_60 - cnt) + -1) - local_40;
              lVar6 = 0;
              do {
                uVar9 = *(ulong *)((long)(local_68 + lVar6 + lVar7) + 8);
                uVar1 = ((ulong *)((long)local_80 + lVar6))[1];
                *(ulong *)(local_68 + lVar6 + lVar7) =
                     *(ulong *)(local_68 + lVar6 + lVar7) ^ *(ulong *)((long)local_80 + lVar6);
                *(ulong *)((long)(local_68 + lVar6 + lVar7) + 8) = uVar9 ^ uVar1;
                lVar6 = lVar6 + 0x10;
              } while (lVar6 != (ulong)(num >> 4) << 4);
              uVar2 = num & 0xfffffff0;
              uVar9 = (ulong)uVar2;
              pbVar8 = pbVar8 + uVar2;
              if (num == uVar2) goto LAB_00100a39;
            }
            uVar10 = num - (int)uVar9;
            if (6 < uVar10 - 1) {
              *(ulong *)(local_68 + ((((long)local_60 - cnt) + -1) - local_40) + uVar9) =
                   *(ulong *)((long)local_80 + uVar9) ^
                   *(ulong *)(local_68 + ((((long)local_60 - cnt) + -1) - local_40) + uVar9);
              uVar2 = uVar2 + (uVar10 & 0xfffffff8);
              pbVar8 = pbVar8 + (uVar10 & 0xfffffff8);
              if ((uVar10 & 7) == 0) goto LAB_00100a39;
            }
            *pbVar8 = *pbVar8 ^ *(byte *)((long)local_80 + (long)(int)uVar2);
            if ((int)(uVar2 + 1) < (int)num) {
              pbVar8[1] = pbVar8[1] ^ *(byte *)((long)local_80 + (long)(int)(uVar2 + 1));
              if ((int)(uVar2 + 2) < (int)num) {
                pbVar8[2] = pbVar8[2] ^ *(byte *)((long)local_80 + (long)(int)(uVar2 + 2));
                if ((int)(uVar2 + 3) < (int)num) {
                  pbVar8[3] = pbVar8[3] ^ *(byte *)((long)local_80 + (long)(int)(uVar2 + 3));
                  if ((int)(uVar2 + 4) < (int)num) {
                    pbVar8[4] = pbVar8[4] ^ *(byte *)((long)local_80 + (long)(int)(uVar2 + 4));
                    if ((int)(uVar2 + 5) < (int)num) {
                      pbVar8[5] = pbVar8[5] ^ *(byte *)((long)local_80 + (long)(int)(uVar2 + 5));
                      if ((int)(uVar2 + 6) < (int)num) {
                        pbVar8[6] = pbVar8[6] ^ *(byte *)((long)local_80 + (long)(int)(uVar2 + 6));
                      }
                    }
                  }
                }
              }
            }
          }
LAB_00100a39:
          if (uVar4 != 0) {
            *local_68 = *local_68 & (byte)(0xff >> (8U - (char)uVar4 & 0x1f));
          }
          local_68[(long)local_60 + -1] = 0xbc;
          *param_6 = num;
          iVar3 = 1;
          goto LAB_00100a9a;
        }
      }
    }
  }
  iVar3 = 0;
LAB_00100a9a:
  EVP_MD_CTX_free(ctx);
  CRYPTO_clear_free(local_80,local_78,"crypto/rsa/rsa_pss.c",0x11f);
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
  
  uVar2 = _UNK_00100f48;
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


