
undefined1 * SM2_Ciphertext_it(void)

{
  return local_it_3;
}



void d2i_SM2_Ciphertext(ASN1_VALUE **param_1,uchar **param_2,long param_3)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)SM2_Ciphertext_it();
  ASN1_item_d2i(param_1,param_2,param_3,it);
  return;
}



void i2d_SM2_Ciphertext(ASN1_VALUE *param_1,uchar **param_2)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)SM2_Ciphertext_it();
  ASN1_item_i2d(param_1,param_2,it);
  return;
}



void SM2_Ciphertext_new(void)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)SM2_Ciphertext_it();
  ASN1_item_new(it);
  return;
}



void SM2_Ciphertext_free(ASN1_VALUE *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)SM2_Ciphertext_it();
  ASN1_item_free(param_1,it);
  return;
}



undefined8 ossl_sm2_plaintext_size(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  lVar1 = d2i_SM2_Ciphertext(0,&local_10,param_2);
  if (lVar1 != 0) {
    *param_3 = (long)**(int **)(lVar1 + 0x18);
    SM2_Ciphertext_free(lVar1);
    return 1;
  }
  ERR_new();
  ERR_set_debug("crypto/sm2/sm2_crypt.c",0x4d,"ossl_sm2_plaintext_size");
  ERR_set_error(0x35,0x68,0);
  return 0;
}



undefined8 ossl_sm2_ciphertext_size(EC_KEY *param_1,undefined8 param_2,int param_3,long *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  EC_GROUP *pEVar4;
  BIGNUM *a;
  
  pEVar4 = EC_KEY_get0_group(param_1);
  a = (BIGNUM *)EC_GROUP_get0_field(pEVar4);
  if (a == (BIGNUM *)0x0) {
    EVP_MD_get_size(param_2);
  }
  else {
    iVar1 = BN_num_bits(a);
    iVar2 = iVar1 + 0xe;
    if (-1 < iVar1 + 7) {
      iVar2 = iVar1 + 7;
    }
    iVar1 = EVP_MD_get_size();
    if ((iVar2 >> 3 != 0) && (0 < iVar1)) {
      iVar2 = ASN1_object_size(0,(iVar2 >> 3) + 1,2);
      iVar1 = ASN1_object_size(0,iVar1,4);
      iVar3 = ASN1_object_size(0,param_3,4);
      iVar2 = ASN1_object_size(1,iVar1 + iVar2 * 2 + iVar3,0x10);
      *param_4 = (long)iVar2;
      return 1;
    }
  }
  return 0;
}



undefined8
ossl_sm2_encrypt(EC_KEY *param_1,undefined8 param_2,void *param_3,ulong param_4,void *param_5,
                size_t *param_6)

{
  ulong *puVar1;
  size_t __n;
  ulong uVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  EVP_MD_CTX *ctx;
  EC_GROUP *group;
  undefined8 uVar7;
  EC_POINT *q;
  undefined8 uVar8;
  undefined8 uVar9;
  BIGNUM *pBVar10;
  size_t cnt;
  EC_POINT *r;
  BN_CTX *ctx_00;
  BIGNUM *pBVar11;
  BIGNUM *pBVar12;
  BIGNUM *pBVar13;
  BIGNUM *pBVar14;
  void *d;
  undefined1 (*data) [16];
  undefined1 (*pauVar15) [16];
  EVP_MD *type;
  ASN1_OCTET_STRING *pAVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  long in_FS_OFFSET;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  EC_POINT *local_128;
  uchar *local_c8;
  void *local_70;
  BIGNUM *local_68;
  BIGNUM *local_60;
  ASN1_OCTET_STRING *local_58;
  ASN1_OCTET_STRING *pAStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = param_5;
  ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
  group = EC_KEY_get0_group(param_1);
  uVar7 = EC_GROUP_get0_order(group);
  q = EC_KEY_get0_public_key(param_1);
  iVar4 = EVP_MD_get_size(param_2);
  uVar8 = ossl_ec_key_get_libctx(param_1);
  uVar9 = ossl_ec_key_get0_propq(param_1);
  local_58 = (ASN1_OCTET_STRING *)0x0;
  pAStack_50 = (ASN1_OCTET_STRING *)0x0;
  if ((ctx == (EVP_MD_CTX *)0x0) || (iVar4 < 1)) {
    ERR_new();
    uVar7 = 0x8d;
  }
  else {
    pBVar10 = (BIGNUM *)EC_GROUP_get0_field(group);
    if (pBVar10 != (BIGNUM *)0x0) {
      iVar5 = BN_num_bits(pBVar10);
      iVar6 = iVar5 + 7;
      if (iVar5 + 7 < 0) {
        iVar6 = iVar5 + 0xe;
      }
      iVar6 = iVar6 >> 3;
      cnt = (size_t)iVar6;
      if (cnt != 0) {
        r = EC_POINT_new(group);
        local_128 = EC_POINT_new(group);
        if ((r == (EC_POINT *)0x0) || (local_128 == (EC_POINT *)0x0)) {
          ERR_new();
          data = (undefined1 (*) [16])0x0;
          uVar8 = 0;
          d = (void *)0x0;
          ctx_00 = (BN_CTX *)0x0;
          ERR_set_debug("crypto/sm2/sm2_crypt.c",0x9a,"ossl_sm2_encrypt");
          ERR_set_error(0x35,0x80010,0);
          type = (EVP_MD *)0x0;
          local_c8 = (uchar *)0x0;
        }
        else {
          ctx_00 = (BN_CTX *)BN_CTX_new_ex(uVar8);
          if (ctx_00 == (BN_CTX *)0x0) {
            ERR_new();
            data = (undefined1 (*) [16])0x0;
            uVar8 = 0;
            d = (void *)0x0;
            ERR_set_debug("crypto/sm2/sm2_crypt.c",0x9f,"ossl_sm2_encrypt");
            ERR_set_error(0x35,0x80003,0);
            type = (EVP_MD *)0x0;
            local_c8 = (uchar *)0x0;
          }
          else {
            BN_CTX_start(ctx_00);
            pBVar10 = BN_CTX_get(ctx_00);
            pBVar11 = BN_CTX_get(ctx_00);
            pBVar12 = BN_CTX_get(ctx_00);
            pBVar13 = BN_CTX_get(ctx_00);
            pBVar14 = BN_CTX_get(ctx_00);
            if (pBVar14 == (BIGNUM *)0x0) {
              d = (void *)0x0;
              data = (undefined1 (*) [16])0x0;
              uVar8 = 0;
              ERR_new();
              ERR_set_debug("crypto/sm2/sm2_crypt.c",0xab,"ossl_sm2_encrypt");
              ERR_set_error(0x35,0x80003,0);
              local_c8 = (uchar *)0x0;
              type = (EVP_MD *)0x0;
            }
            else {
              __n = cnt * 2;
              d = (void *)CRYPTO_zalloc(__n,"crypto/sm2/sm2_crypt.c",0xaf);
              local_c8 = (uchar *)CRYPTO_zalloc((long)iVar4,"crypto/sm2/sm2_crypt.c",0xb0);
              if ((d == (void *)0x0) || (local_c8 == (uchar *)0x0)) {
                type = (EVP_MD *)0x0;
                data = (undefined1 (*) [16])0x0;
                uVar8 = 0;
              }
              else {
                memset(local_70,0,*param_6);
                data = (undefined1 (*) [16])CRYPTO_zalloc(param_4,"crypto/sm2/sm2_crypt.c",0xb7);
                if (data != (undefined1 (*) [16])0x0) {
                  uVar19 = param_4 & 0xfffffffffffffff0;
                  while (iVar5 = BN_priv_rand_range_ex(pBVar10,uVar7,0), iVar5 != 0) {
                    iVar5 = EC_POINT_mul(group,r,pBVar10,(EC_POINT *)0x0,(BIGNUM *)0x0,ctx_00);
                    if ((((iVar5 == 0) ||
                         (iVar5 = EC_POINT_get_affine_coordinates(group,r,pBVar11,pBVar13,ctx_00),
                         iVar5 == 0)) ||
                        (iVar5 = EC_POINT_mul(group,local_128,(BIGNUM *)0x0,q,pBVar10,ctx_00),
                        iVar5 == 0)) ||
                       (iVar5 = EC_POINT_get_affine_coordinates(group,local_128,pBVar12,pBVar14),
                       iVar5 == 0)) {
                      uVar8 = 0;
                      ERR_new();
                      ERR_set_debug("crypto/sm2/sm2_crypt.c",0xc5,"ossl_sm2_encrypt");
                      ERR_set_error(0x35,0x80010,0);
                      type = (EVP_MD *)0x0;
                      goto LAB_00100728;
                    }
                    iVar5 = BN_bn2binpad(pBVar12,d,iVar6);
                    if ((iVar5 < 0) ||
                       (iVar5 = BN_bn2binpad(pBVar14,(void *)(cnt + (long)d),iVar6), iVar5 < 0)) {
                      ERR_new();
                      uVar7 = 0xcb;
                      goto LAB_00100947;
                    }
                    iVar5 = ossl_ecdh_kdf_X9_63(data,param_4,d,__n,0,0,param_2,uVar8,uVar9);
                    if (iVar5 == 0) {
                      ERR_new();
                      ERR_set_debug("crypto/sm2/sm2_crypt.c",0xd2,"ossl_sm2_encrypt");
                      ERR_set_error(0x35,0x80006,0);
                      goto LAB_00100966;
                    }
                    if (param_4 != 0) {
                      if (param_4 - 1 < 0xf) {
                        auVar20 = (undefined1  [16])0x0;
                        bVar3 = 0;
                        uVar18 = 0;
LAB_001005fa:
                        uVar17 = param_4 - uVar18;
                        if (6 < uVar17 - 1) {
                          auVar21._8_8_ = 0;
                          auVar21._0_8_ = *(ulong *)(*data + uVar18);
                          uVar18 = uVar18 + (uVar17 & 0xfffffffffffffff8);
                          auVar21 = auVar21 | auVar20;
                          bVar3 = auVar21[0] | auVar21[1] | auVar21[2] | auVar21[3] | auVar21[4] |
                                  auVar21[5] | auVar21[6] | auVar21[7];
                          if ((uVar17 & 7) == 0) goto LAB_001006b3;
                        }
                        bVar3 = bVar3 | (*data)[uVar18];
                        if (((uVar18 + 1 < param_4) &&
                            (bVar3 = bVar3 | (*data)[uVar18 + 1], uVar18 + 2 < param_4)) &&
                           ((bVar3 = bVar3 | (*data)[uVar18 + 2], uVar18 + 3 < param_4 &&
                            (((bVar3 = bVar3 | (*data)[uVar18 + 3], uVar18 + 4 < param_4 &&
                              (bVar3 = bVar3 | (*data)[uVar18 + 4], uVar18 + 5 < param_4)) &&
                             (bVar3 = bVar3 | (*data)[uVar18 + 5], uVar18 + 6 < param_4)))))) {
                          bVar3 = bVar3 | (*data)[uVar18 + 6];
                        }
                      }
                      else {
                        auVar20 = (undefined1  [16])0x0;
                        pauVar15 = data;
                        do {
                          auVar21 = *pauVar15;
                          pauVar15 = pauVar15 + 1;
                          auVar20 = auVar20 | auVar21;
                        } while ((undefined1 (*) [16])(*data + uVar19) != pauVar15);
                        auVar21 = auVar20 >> 0x40 | auVar20;
                        auVar21 = auVar21 | auVar21 >> 0x20;
                        auVar21 = auVar21 | auVar21 >> 0x10;
                        bVar3 = auVar21[0] | auVar21[1];
                        auVar20 = auVar20 >> 0x40 | auVar20;
                        uVar18 = uVar19;
                        if (uVar19 != param_4) goto LAB_001005fa;
                      }
LAB_001006b3:
                      if (bVar3 == 0) goto LAB_001006bb;
                      if (param_4 - 1 < 0xf) {
                        uVar19 = 0;
                        pauVar15 = data;
                        goto LAB_001009d6;
                      }
                      uVar18 = 0;
                      do {
                        uVar2 = *(ulong *)((long)(*data + uVar18) + 8);
                        uVar17 = ((ulong *)((long)param_3 + uVar18))[1];
                        *(ulong *)(*data + uVar18) =
                             *(ulong *)(*data + uVar18) ^ *(ulong *)((long)param_3 + uVar18);
                        *(ulong *)((long)(*data + uVar18) + 8) = uVar2 ^ uVar17;
                        uVar18 = uVar18 + 0x10;
                      } while (uVar19 != uVar18);
                      pauVar15 = (undefined1 (*) [16])(*data + uVar19);
                      if (uVar19 != param_4) {
LAB_001009d6:
                        uVar18 = param_4 - uVar19;
                        if (6 < uVar18 - 1) {
                          puVar1 = (ulong *)((long)param_3 + uVar19);
                          uVar19 = uVar19 + (uVar18 & 0xfffffffffffffff8);
                          *(ulong *)*pauVar15 = *puVar1 ^ *(ulong *)*pauVar15;
                          if ((uVar18 & 7) == 0) goto LAB_00100a8b;
                          pauVar15 = (undefined1 (*) [16])(*data + uVar19);
                        }
                        (*pauVar15)[0] = (*pauVar15)[0] ^ *(byte *)((long)param_3 + uVar19);
                        if (param_4 != uVar19 + 1) {
                          (*data)[uVar19 + 1] =
                               (*data)[uVar19 + 1] ^ *(byte *)((long)param_3 + uVar19 + 1);
                          if (uVar19 + 2 != param_4) {
                            (*data)[uVar19 + 2] =
                                 (*data)[uVar19 + 2] ^ *(byte *)((long)param_3 + uVar19 + 2);
                            if (uVar19 + 3 != param_4) {
                              (*data)[uVar19 + 3] =
                                   (*data)[uVar19 + 3] ^ *(byte *)((long)param_3 + uVar19 + 3);
                              if (param_4 != uVar19 + 4) {
                                (*data)[uVar19 + 4] =
                                     (*data)[uVar19 + 4] ^ *(byte *)((long)param_3 + uVar19 + 4);
                                if (param_4 != uVar19 + 5) {
                                  (*data)[uVar19 + 5] =
                                       (*data)[uVar19 + 5] ^ *(byte *)((long)param_3 + uVar19 + 5);
                                  if (param_4 != uVar19 + 6) {
                                    (*data)[uVar19 + 6] =
                                         (*data)[uVar19 + 6] ^ *(byte *)((long)param_3 + uVar19 + 6)
                                    ;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
LAB_00100a8b:
                      uVar7 = EVP_MD_get0_name(param_2);
                      type = (EVP_MD *)EVP_MD_fetch(uVar8,uVar7,uVar9);
                      if (type != (EVP_MD *)0x0) {
                        iVar6 = EVP_DigestInit(ctx,type);
                        if (((iVar6 == 0) || (iVar6 = EVP_DigestUpdate(ctx,d,cnt), iVar6 == 0)) ||
                           ((iVar6 = EVP_DigestUpdate(ctx,param_3,param_4), iVar6 == 0 ||
                            ((iVar6 = EVP_DigestUpdate(ctx,(void *)(cnt + (long)d),cnt), iVar6 == 0
                             || (iVar6 = EVP_DigestFinal(ctx,local_c8,(uint *)0x0), iVar6 == 0))))))
                        {
                          uVar8 = 0;
                          ERR_new();
                          ERR_set_debug("crypto/sm2/sm2_crypt.c",0xe8,"ossl_sm2_encrypt");
                          ERR_set_error(0x35,0x80006,0);
                        }
                        else {
                          local_68 = pBVar11;
                          local_60 = pBVar13;
                          local_58 = ASN1_OCTET_STRING_new();
                          pAVar16 = ASN1_OCTET_STRING_new();
                          pAStack_50 = pAVar16;
                          if ((pAVar16 == (ASN1_OCTET_STRING *)0x0) ||
                             (local_58 == (ASN1_OCTET_STRING *)0x0)) {
                            ERR_new();
                            uVar8 = 0;
                            ERR_set_debug("crypto/sm2/sm2_crypt.c",0xf2,"ossl_sm2_encrypt");
                            ERR_set_error(0x35,0x8000d,0);
                          }
                          else {
                            iVar4 = ASN1_OCTET_STRING_set(local_58,local_c8,iVar4);
                            if ((iVar4 == 0) ||
                               (iVar4 = ASN1_OCTET_STRING_set(pAStack_50,(uchar *)data,(int)param_4)
                               , iVar4 == 0)) {
                              ERR_new();
                              uVar7 = 0xf7;
                            }
                            else {
                              iVar4 = i2d_SM2_Ciphertext(&local_68,&local_70);
                              if (-1 < iVar4) {
                                *param_6 = (long)iVar4;
                                uVar8 = 1;
                                goto LAB_00100728;
                              }
                              ERR_new();
                              uVar7 = 0xfe;
                            }
                            uVar8 = 0;
                            ERR_set_debug("crypto/sm2/sm2_crypt.c",uVar7,"ossl_sm2_encrypt");
                            ERR_set_error(0x35,0xc0103,0);
                          }
                        }
                        goto LAB_00100728;
                      }
                      ERR_new();
                      uVar7 = 0xe0;
                      goto LAB_00100947;
                    }
LAB_001006bb:
                    memset(d,0,__n);
                  }
                  ERR_new();
                  uVar7 = 0xbd;
LAB_00100947:
                  ERR_set_debug("crypto/sm2/sm2_crypt.c",uVar7,"ossl_sm2_encrypt");
                  ERR_set_error(0x35,0xc0103,0);
                }
LAB_00100966:
                type = (EVP_MD *)0x0;
                uVar8 = 0;
              }
            }
          }
        }
        goto LAB_00100728;
      }
    }
    ERR_new();
    uVar7 = 0x93;
  }
  d = (void *)0x0;
  data = (undefined1 (*) [16])0x0;
  r = (EC_POINT *)0x0;
  ctx_00 = (BN_CTX *)0x0;
  uVar8 = 0;
  ERR_set_debug("crypto/sm2/sm2_crypt.c",uVar7,"ossl_sm2_encrypt");
  ERR_set_error(0x35,0xc0103,0);
  local_128 = (EC_POINT *)0x0;
  type = (EVP_MD *)0x0;
  local_c8 = (uchar *)0x0;
LAB_00100728:
  EVP_MD_free(type);
  ASN1_OCTET_STRING_free(pAStack_50);
  ASN1_OCTET_STRING_free(local_58);
  CRYPTO_free(data);
  CRYPTO_free(d);
  CRYPTO_free(local_c8);
  EVP_MD_CTX_free(ctx);
  BN_CTX_free(ctx_00);
  EC_POINT_free(r);
  EC_POINT_free(local_128);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar8;
}



undefined8
ossl_sm2_decrypt(EC_KEY *param_1,EVP_MD *param_2,undefined8 param_3,undefined8 param_4,void *param_5
                ,size_t *param_6)

{
  uint uVar1;
  void *b;
  long lVar2;
  int iVar3;
  int iVar4;
  EC_GROUP *group;
  BIGNUM *pBVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulong cnt;
  BIGNUM *pBVar9;
  EC_POINT *r;
  BIGNUM *m;
  undefined1 (*pauVar10) [16];
  long lVar11;
  byte bVar12;
  uint uVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  int iVar17;
  size_t cnt_00;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  BN_CTX *local_c0;
  undefined1 (*local_b8) [16];
  void *local_b0;
  EVP_MD_CTX *local_a8;
  uchar *local_a0;
  undefined8 local_40 [2];
  
  local_40[0] = param_3;
  group = EC_KEY_get0_group(param_1);
  pBVar5 = (BIGNUM *)EC_GROUP_get0_field(group);
  if (pBVar5 == (BIGNUM *)0x0) {
    EVP_MD_get_size(param_2);
    ossl_ec_key_get_libctx(param_1);
    ossl_ec_key_get0_propq(param_1);
LAB_00101071:
    local_a8 = (EVP_MD_CTX *)0x0;
    puVar8 = (undefined8 *)0x0;
    r = (EC_POINT *)0x0;
    local_b8 = (undefined1 (*) [16])0x0;
    local_a0 = (uchar *)0x0;
    local_b0 = (void *)0x0;
    local_c0 = (BN_CTX *)0x0;
  }
  else {
    iVar3 = BN_num_bits(pBVar5);
    iVar17 = iVar3 + 0xe;
    if (-1 < iVar3 + 7) {
      iVar17 = iVar3 + 7;
    }
    iVar17 = iVar17 >> 3;
    cnt_00 = (size_t)iVar17;
    iVar3 = EVP_MD_get_size(param_2);
    uVar6 = ossl_ec_key_get_libctx(param_1);
    uVar7 = ossl_ec_key_get0_propq(param_1);
    if ((cnt_00 == 0) || (iVar3 < 1)) goto LAB_00101071;
    memset(param_5,0xff,*param_6);
    puVar8 = (undefined8 *)d2i_SM2_Ciphertext(0,local_40,param_4);
    if (puVar8 == (undefined8 *)0x0) {
      ERR_new();
      ERR_set_debug("crypto/sm2/sm2_crypt.c",0x134,"ossl_sm2_decrypt");
      ERR_set_error(0x35,100,0);
      goto LAB_00101071;
    }
    if (*(int *)puVar8[2] == iVar3) {
      b = *(void **)((int *)puVar8[2] + 2);
      lVar2 = *(long *)((uint *)puVar8[3] + 2);
      uVar1 = *(uint *)puVar8[3];
      cnt = (ulong)(int)uVar1;
      if (*param_6 < cnt) {
        ERR_new();
        ERR_set_debug("crypto/sm2/sm2_crypt.c",0x141,"ossl_sm2_decrypt");
        uVar6 = 0x6b;
LAB_001010d7:
        ERR_set_error(0x35,uVar6,0);
        goto LAB_001010e3;
      }
      local_c0 = (BN_CTX *)BN_CTX_new_ex(uVar6);
      if (local_c0 == (BN_CTX *)0x0) {
        ERR_new();
        ERR_set_debug("crypto/sm2/sm2_crypt.c",0x147,"ossl_sm2_decrypt");
        uVar6 = 0x80003;
        goto LAB_001010d7;
      }
      BN_CTX_start(local_c0);
      pBVar5 = BN_CTX_get(local_c0);
      pBVar9 = BN_CTX_get(local_c0);
      if (pBVar9 == (BIGNUM *)0x0) {
        ERR_new();
        r = (EC_POINT *)0x0;
        ERR_set_debug("crypto/sm2/sm2_crypt.c",0x150,"ossl_sm2_decrypt");
        ERR_set_error(0x35,0x80003,0);
        local_b8 = (undefined1 (*) [16])0x0;
        local_a0 = (uchar *)0x0;
        local_b0 = (void *)0x0;
        local_a8 = (EVP_MD_CTX *)0x0;
      }
      else {
        local_b8 = (undefined1 (*) [16])CRYPTO_zalloc(cnt,"crypto/sm2/sm2_crypt.c",0x154);
        local_b0 = (void *)CRYPTO_zalloc(cnt_00 * 2,"crypto/sm2/sm2_crypt.c",0x155);
        local_a0 = (uchar *)CRYPTO_zalloc((long)iVar3,"crypto/sm2/sm2_crypt.c",0x156);
        if (((local_b8 == (undefined1 (*) [16])0x0) || (local_b0 == (void *)0x0)) ||
           (local_a0 == (uchar *)0x0)) {
          r = (EC_POINT *)0x0;
          local_a8 = (EVP_MD_CTX *)0x0;
        }
        else {
          r = EC_POINT_new(group);
          if (r == (EC_POINT *)0x0) {
            ERR_new();
            ERR_set_debug("crypto/sm2/sm2_crypt.c",0x15d,"ossl_sm2_decrypt");
            ERR_set_error(0x35,0x80010,0);
            local_a8 = (EVP_MD_CTX *)0x0;
          }
          else {
            iVar4 = EC_POINT_set_affine_coordinates(group,r,*puVar8,puVar8[1],local_c0);
            if (iVar4 == 0) {
LAB_00100f90:
              ERR_new();
              ERR_set_debug("crypto/sm2/sm2_crypt.c",0x166,"ossl_sm2_decrypt");
              ERR_set_error(0x35,0x80010,0);
            }
            else {
              m = EC_KEY_get0_private_key(param_1);
              iVar4 = EC_POINT_mul(group,r,(BIGNUM *)0x0,r,m,local_c0);
              if ((iVar4 == 0) ||
                 (iVar4 = EC_POINT_get_affine_coordinates(group,r,pBVar5,pBVar9,local_c0),
                 iVar4 == 0)) goto LAB_00100f90;
              iVar4 = BN_bn2binpad(pBVar5,local_b0,iVar17);
              if (iVar4 < 0) {
LAB_001015a0:
                ERR_new();
                ERR_set_debug("crypto/sm2/sm2_crypt.c",0x16e,"ossl_sm2_decrypt");
                ERR_set_error(0x35,0xc0103,0);
                local_a8 = (EVP_MD_CTX *)0x0;
                goto LAB_00100fc8;
              }
              iVar17 = BN_bn2binpad(pBVar9,(void *)(cnt_00 + (long)local_b0),iVar17);
              if ((iVar17 < 0) ||
                 (iVar17 = ossl_ecdh_kdf_X9_63(local_b8,cnt,local_b0,cnt_00 * 2,0,0,param_2,uVar6,
                                               uVar7), iVar17 == 0)) goto LAB_001015a0;
              if (cnt == 0) {
LAB_00101766:
                ERR_new();
                ERR_set_debug("crypto/sm2/sm2_crypt.c",0x173,"ossl_sm2_decrypt");
                ERR_set_error(0x35,0x68,0);
              }
              else {
                if (cnt - 1 < 0xf) {
                  auVar18 = (undefined1  [16])0x0;
                  bVar12 = 0;
                  uVar16 = 0;
LAB_001012a0:
                  uVar14 = cnt - uVar16;
                  if (uVar14 - 1 < 7) {
LAB_0010130c:
                    bVar12 = bVar12 | (*local_b8)[uVar16];
                    if (((((uVar16 + 1 < cnt) &&
                          (bVar12 = bVar12 | (*local_b8)[uVar16 + 1], uVar16 + 2 < cnt)) &&
                         (bVar12 = bVar12 | (*local_b8)[uVar16 + 2], uVar16 + 3 < cnt)) &&
                        ((bVar12 = bVar12 | (*local_b8)[uVar16 + 3], uVar16 + 4 < cnt &&
                         (bVar12 = bVar12 | (*local_b8)[uVar16 + 4], uVar16 + 5 < cnt)))) &&
                       (bVar12 = bVar12 | (*local_b8)[uVar16 + 5], uVar16 + 6 < cnt)) {
                      bVar12 = bVar12 | (*local_b8)[uVar16 + 6];
                    }
                  }
                  else {
                    auVar19._8_8_ = 0;
                    auVar19._0_8_ = *(ulong *)(*local_b8 + uVar16);
                    auVar19 = auVar19 | auVar18;
                    bVar12 = auVar19[0] | auVar19[1] | auVar19[2] | auVar19[3] | auVar19[4] |
                             auVar19[5] | auVar19[6] | auVar19[7];
                    uVar16 = uVar16 + (uVar14 & 0xfffffffffffffff8);
                    if ((uVar14 & 7) != 0) goto LAB_0010130c;
                  }
                  if (bVar12 == 0) goto LAB_00101766;
                  if ((uVar1 - 1 < 7) || ((ulong)((long)param_5 - (lVar2 + 1)) < 0xf))
                  goto LAB_0010139d;
                  if (uVar1 - 1 < 0xf) {
                    uVar15 = 0;
                    uVar16 = 0;
                    uVar13 = uVar1;
LAB_00101674:
                    *(ulong *)((long)param_5 + uVar16) =
                         *(ulong *)(lVar2 + uVar16) ^ *(ulong *)(*local_b8 + uVar16);
                    uVar15 = uVar15 + (uVar13 & 0xfffffff8);
                    if ((uVar13 & 7) != 0) {
LAB_001016a5:
                      lVar11 = (long)(int)uVar15;
                      *(byte *)((long)param_5 + lVar11) =
                           *(byte *)(lVar2 + lVar11) ^ (*local_b8)[lVar11];
                      if (uVar1 != uVar15 + 1) {
                        lVar11 = (long)(int)(uVar15 + 1);
                        *(byte *)((long)param_5 + lVar11) =
                             *(byte *)(lVar2 + lVar11) ^ (*local_b8)[lVar11];
                        if (uVar15 + 2 != uVar1) {
                          lVar11 = (long)(int)(uVar15 + 2);
                          *(byte *)((long)param_5 + lVar11) =
                               *(byte *)(lVar2 + lVar11) ^ (*local_b8)[lVar11];
                          if (uVar15 + 3 != uVar1) {
                            lVar11 = (long)(int)(uVar15 + 3);
                            *(byte *)((long)param_5 + lVar11) =
                                 (*local_b8)[lVar11] ^ *(byte *)(lVar2 + lVar11);
                            if (uVar1 != uVar15 + 4) {
                              lVar11 = (long)(int)(uVar15 + 4);
                              *(byte *)((long)param_5 + lVar11) =
                                   *(byte *)(lVar2 + lVar11) ^ (*local_b8)[lVar11];
                              if (uVar1 != uVar15 + 5) {
                                lVar11 = (long)(int)(uVar15 + 5);
                                *(byte *)((long)param_5 + lVar11) =
                                     *(byte *)(lVar2 + lVar11) ^ (*local_b8)[lVar11];
                                if (uVar1 != uVar15 + 6) {
                                  lVar11 = (long)(int)(uVar15 + 6);
                                  *(byte *)((long)param_5 + lVar11) =
                                       (*local_b8)[lVar11] ^ *(byte *)(lVar2 + lVar11);
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  else {
LAB_00101614:
                    lVar11 = 0;
                    do {
                      uVar16 = ((ulong *)(lVar2 + lVar11))[1];
                      uVar14 = *(ulong *)((long)(*local_b8 + lVar11) + 8);
                      *(ulong *)((long)param_5 + lVar11) =
                           *(ulong *)(*local_b8 + lVar11) ^ *(ulong *)(lVar2 + lVar11);
                      ((ulong *)((long)param_5 + lVar11))[1] = uVar14 ^ uVar16;
                      lVar11 = lVar11 + 0x10;
                    } while ((ulong)(uVar1 >> 4) << 4 != lVar11);
                    uVar15 = uVar1 & 0xfffffff0;
                    uVar16 = (ulong)uVar15;
                    if ((uVar1 & 0xf) != 0) {
                      uVar13 = uVar1 - uVar15;
                      if (6 < (uVar1 - uVar15) - 1) goto LAB_00101674;
                      goto LAB_001016a5;
                    }
                  }
                }
                else {
                  uVar16 = cnt & 0xfffffffffffffff0;
                  auVar18 = (undefined1  [16])0x0;
                  pauVar10 = local_b8;
                  do {
                    auVar19 = *pauVar10;
                    pauVar10 = pauVar10 + 1;
                    auVar18 = auVar18 | auVar19;
                  } while (pauVar10 != (undefined1 (*) [16])(*local_b8 + uVar16));
                  auVar19 = auVar18 >> 0x40 | auVar18;
                  auVar19 = auVar19 | auVar19 >> 0x20;
                  auVar19 = auVar19 | auVar19 >> 0x10;
                  bVar12 = auVar19[0] | auVar19[1];
                  auVar18 = auVar18 >> 0x40 | auVar18;
                  if (cnt != uVar16) goto LAB_001012a0;
                  if (bVar12 == 0) goto LAB_00101766;
                  if (0xe < (ulong)((long)param_5 - (lVar2 + 1))) goto LAB_00101614;
LAB_0010139d:
                  uVar16 = 0;
                  do {
                    *(byte *)((long)param_5 + uVar16) =
                         *(byte *)(lVar2 + uVar16) ^ (*local_b8)[uVar16];
                    uVar16 = uVar16 + 1;
                  } while (cnt != uVar16);
                }
                local_a8 = (EVP_MD_CTX *)EVP_MD_CTX_new();
                if (local_a8 != (EVP_MD_CTX *)0x0) {
                  iVar17 = EVP_DigestInit(local_a8,param_2);
                  if ((((iVar17 == 0) ||
                       (iVar17 = EVP_DigestUpdate(local_a8,local_b0,cnt_00), iVar17 == 0)) ||
                      (iVar17 = EVP_DigestUpdate(local_a8,param_5,cnt), iVar17 == 0)) ||
                     ((iVar17 = EVP_DigestUpdate(local_a8,(void *)(cnt_00 + (long)local_b0),cnt_00),
                      iVar17 == 0 ||
                      (iVar17 = EVP_DigestFinal(local_a8,local_a0,(uint *)0x0), iVar17 == 0)))) {
                    ERR_new();
                    ERR_set_debug("crypto/sm2/sm2_crypt.c",0x185,"ossl_sm2_decrypt");
                    ERR_set_error(0x35,0x80006,0);
                  }
                  else {
                    iVar17 = CRYPTO_memcmp(local_a0,b,(long)iVar3);
                    if (iVar17 == 0) {
                      uVar6 = 1;
                      *param_6 = cnt;
                      goto LAB_00100fd8;
                    }
                    ERR_new();
                    ERR_set_debug("crypto/sm2/sm2_crypt.c",0x18a,"ossl_sm2_decrypt");
                    ERR_set_error(0x35,0x66,0);
                  }
                  goto LAB_00100fc8;
                }
                ERR_new();
                ERR_set_debug("crypto/sm2/sm2_crypt.c",0x17c,"ossl_sm2_decrypt");
                ERR_set_error(0x35,0x80006,0);
              }
            }
            local_a8 = (EVP_MD_CTX *)0x0;
          }
        }
      }
    }
    else {
      ERR_new();
      ERR_set_debug("crypto/sm2/sm2_crypt.c",0x139,"ossl_sm2_decrypt");
      ERR_set_error(0x35,0x68,0);
LAB_001010e3:
      local_a8 = (EVP_MD_CTX *)0x0;
      r = (EC_POINT *)0x0;
      local_b8 = (undefined1 (*) [16])0x0;
      local_a0 = (uchar *)0x0;
      local_b0 = (void *)0x0;
      local_c0 = (BN_CTX *)0x0;
    }
  }
LAB_00100fc8:
  uVar6 = 0;
  memset(param_5,0,*param_6);
LAB_00100fd8:
  CRYPTO_free(local_b8);
  CRYPTO_free(local_b0);
  CRYPTO_free(local_a0);
  EC_POINT_free(r);
  BN_CTX_free(local_c0);
  SM2_Ciphertext_free(puVar8);
  EVP_MD_CTX_free(local_a8);
  return uVar6;
}


