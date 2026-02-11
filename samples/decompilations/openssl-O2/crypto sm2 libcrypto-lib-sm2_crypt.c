
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
ossl_sm2_encrypt(EC_KEY *param_1,undefined8 param_2,void *param_3,size_t param_4,void *param_5,
                size_t *param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  EVP_MD_CTX *ctx;
  EC_GROUP *group;
  undefined8 uVar4;
  EC_POINT *q;
  undefined8 uVar5;
  undefined8 uVar6;
  BIGNUM *pBVar7;
  size_t cnt;
  EC_POINT *r;
  BN_CTX *ctx_00;
  BIGNUM *pBVar8;
  BIGNUM *pBVar9;
  BIGNUM *pBVar10;
  BIGNUM *pBVar11;
  void *d;
  byte *data;
  byte *pbVar12;
  EVP_MD *type;
  ASN1_OCTET_STRING *pAVar13;
  byte bVar14;
  size_t sVar15;
  long in_FS_OFFSET;
  EC_POINT *local_118;
  uchar *local_c0;
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
  uVar4 = EC_GROUP_get0_order(group);
  q = EC_KEY_get0_public_key(param_1);
  iVar1 = EVP_MD_get_size(param_2);
  uVar5 = ossl_ec_key_get_libctx(param_1);
  uVar6 = ossl_ec_key_get0_propq(param_1);
  local_58 = (ASN1_OCTET_STRING *)0x0;
  pAStack_50 = (ASN1_OCTET_STRING *)0x0;
  if ((ctx == (EVP_MD_CTX *)0x0) || (iVar1 < 1)) {
    ERR_new();
    uVar4 = 0x8d;
  }
  else {
    pBVar7 = (BIGNUM *)EC_GROUP_get0_field(group);
    if (pBVar7 != (BIGNUM *)0x0) {
      iVar2 = BN_num_bits(pBVar7);
      iVar3 = iVar2 + 7;
      if (iVar2 + 7 < 0) {
        iVar3 = iVar2 + 0xe;
      }
      iVar3 = iVar3 >> 3;
      cnt = (size_t)iVar3;
      if (cnt != 0) {
        r = EC_POINT_new(group);
        local_118 = EC_POINT_new(group);
        if ((r == (EC_POINT *)0x0) || (local_118 == (EC_POINT *)0x0)) {
          ERR_new();
          ctx_00 = (BN_CTX *)0x0;
          uVar5 = 0;
          d = (void *)0x0;
          data = (byte *)0x0;
          ERR_set_debug("crypto/sm2/sm2_crypt.c",0x9a,"ossl_sm2_encrypt");
          ERR_set_error(0x35,0x80010,0);
          type = (EVP_MD *)0x0;
          local_c0 = (uchar *)0x0;
        }
        else {
          ctx_00 = (BN_CTX *)BN_CTX_new_ex(uVar5);
          if (ctx_00 == (BN_CTX *)0x0) {
            ERR_new();
            d = (void *)0x0;
            data = (byte *)0x0;
            uVar5 = 0;
            ERR_set_debug("crypto/sm2/sm2_crypt.c",0x9f,"ossl_sm2_encrypt");
            ERR_set_error(0x35,0x80003,0);
            type = (EVP_MD *)0x0;
            local_c0 = (uchar *)0x0;
          }
          else {
            BN_CTX_start(ctx_00);
            pBVar7 = BN_CTX_get(ctx_00);
            pBVar8 = BN_CTX_get(ctx_00);
            pBVar9 = BN_CTX_get(ctx_00);
            pBVar10 = BN_CTX_get(ctx_00);
            pBVar11 = BN_CTX_get(ctx_00);
            if (pBVar11 == (BIGNUM *)0x0) {
              d = (void *)0x0;
              data = (byte *)0x0;
              uVar5 = 0;
              ERR_new();
              ERR_set_debug("crypto/sm2/sm2_crypt.c",0xab,"ossl_sm2_encrypt");
              ERR_set_error(0x35,0x80003,0);
              local_c0 = (uchar *)0x0;
              type = (EVP_MD *)0x0;
            }
            else {
              sVar15 = cnt * 2;
              d = (void *)CRYPTO_zalloc(sVar15,"crypto/sm2/sm2_crypt.c",0xaf);
              local_c0 = (uchar *)CRYPTO_zalloc((long)iVar1,"crypto/sm2/sm2_crypt.c",0xb0);
              if ((d == (void *)0x0) || (local_c0 == (uchar *)0x0)) {
                type = (EVP_MD *)0x0;
                data = (byte *)0x0;
                uVar5 = 0;
              }
              else {
                memset(local_70,0,*param_6);
                data = (byte *)CRYPTO_zalloc(param_4,"crypto/sm2/sm2_crypt.c",0xb7);
                if (data != (byte *)0x0) {
                  while (iVar2 = BN_priv_rand_range_ex(pBVar7,uVar4,0), iVar2 != 0) {
                    iVar2 = EC_POINT_mul(group,r,pBVar7,(EC_POINT *)0x0,(BIGNUM *)0x0,ctx_00);
                    if ((((iVar2 == 0) ||
                         (iVar2 = EC_POINT_get_affine_coordinates(group,r,pBVar8,pBVar10,ctx_00),
                         iVar2 == 0)) ||
                        (iVar2 = EC_POINT_mul(group,local_118,(BIGNUM *)0x0,q,pBVar7,ctx_00),
                        iVar2 == 0)) ||
                       (iVar2 = EC_POINT_get_affine_coordinates(group,local_118,pBVar9,pBVar11),
                       iVar2 == 0)) {
                      uVar5 = 0;
                      ERR_new();
                      ERR_set_debug("crypto/sm2/sm2_crypt.c",0xc5,"ossl_sm2_encrypt");
                      ERR_set_error(0x35,0x80010,0);
                      type = (EVP_MD *)0x0;
                      goto LAB_00100601;
                    }
                    iVar2 = BN_bn2binpad(pBVar9,d,iVar3);
                    if ((iVar2 < 0) ||
                       (iVar2 = BN_bn2binpad(pBVar11,(void *)(cnt + (long)d),iVar3), iVar2 < 0)) {
                      ERR_new();
                      uVar4 = 0xcb;
                      goto LAB_0010081f;
                    }
                    iVar2 = ossl_ecdh_kdf_X9_63(data,param_4,d,sVar15,0,0,param_2,uVar5,uVar6);
                    if (iVar2 == 0) {
                      ERR_new();
                      ERR_set_debug("crypto/sm2/sm2_crypt.c",0xd2,"ossl_sm2_encrypt");
                      ERR_set_error(0x35,0x80006,0);
                      goto LAB_0010083c;
                    }
                    bVar14 = 0;
                    if (param_4 != 0) {
                      pbVar12 = data;
                      if (((int)(data + param_4) - (int)data & 1U) == 0) goto LAB_00100578;
                      bVar14 = *data;
                      for (pbVar12 = data + 1; data + param_4 != pbVar12; pbVar12 = pbVar12 + 2) {
LAB_00100578:
                        bVar14 = bVar14 | *pbVar12 | pbVar12[1];
                      }
                      if (bVar14 == 0) goto LAB_0010058e;
                      sVar15 = 0;
                      do {
                        data[sVar15] = data[sVar15] ^ *(byte *)((long)param_3 + sVar15);
                        sVar15 = sVar15 + 1;
                      } while (param_4 != sVar15);
                      uVar4 = EVP_MD_get0_name(param_2);
                      type = (EVP_MD *)EVP_MD_fetch(uVar5,uVar4,uVar6);
                      if (type != (EVP_MD *)0x0) {
                        iVar3 = EVP_DigestInit(ctx,type);
                        if (((iVar3 == 0) || (iVar3 = EVP_DigestUpdate(ctx,d,cnt), iVar3 == 0)) ||
                           ((iVar3 = EVP_DigestUpdate(ctx,param_3,sVar15), iVar3 == 0 ||
                            ((iVar3 = EVP_DigestUpdate(ctx,(void *)(cnt + (long)d),cnt), iVar3 == 0
                             || (iVar3 = EVP_DigestFinal(ctx,local_c0,(uint *)0x0), iVar3 == 0))))))
                        {
                          uVar5 = 0;
                          ERR_new();
                          ERR_set_debug("crypto/sm2/sm2_crypt.c",0xe8,"ossl_sm2_encrypt");
                          ERR_set_error(0x35,0x80006,0);
                        }
                        else {
                          local_68 = pBVar8;
                          local_60 = pBVar10;
                          local_58 = ASN1_OCTET_STRING_new();
                          pAVar13 = ASN1_OCTET_STRING_new();
                          pAStack_50 = pAVar13;
                          if ((pAVar13 == (ASN1_OCTET_STRING *)0x0) ||
                             (local_58 == (ASN1_OCTET_STRING *)0x0)) {
                            ERR_new();
                            uVar5 = 0;
                            ERR_set_debug("crypto/sm2/sm2_crypt.c",0xf2,"ossl_sm2_encrypt");
                            ERR_set_error(0x35,0x8000d,0);
                          }
                          else {
                            iVar1 = ASN1_OCTET_STRING_set(local_58,local_c0,iVar1);
                            if ((iVar1 == 0) ||
                               (iVar1 = ASN1_OCTET_STRING_set(pAStack_50,data,(int)sVar15),
                               iVar1 == 0)) {
                              ERR_new();
                              uVar4 = 0xf7;
                            }
                            else {
                              iVar1 = i2d_SM2_Ciphertext(&local_68,&local_70);
                              if (-1 < iVar1) {
                                *param_6 = (long)iVar1;
                                uVar5 = 1;
                                goto LAB_00100601;
                              }
                              ERR_new();
                              uVar4 = 0xfe;
                            }
                            uVar5 = 0;
                            ERR_set_debug("crypto/sm2/sm2_crypt.c",uVar4,"ossl_sm2_encrypt");
                            ERR_set_error(0x35,0xc0103,0);
                          }
                        }
                        goto LAB_00100601;
                      }
                      ERR_new();
                      uVar4 = 0xe0;
                      goto LAB_0010081f;
                    }
LAB_0010058e:
                    memset(d,0,sVar15);
                  }
                  ERR_new();
                  uVar4 = 0xbd;
LAB_0010081f:
                  ERR_set_debug("crypto/sm2/sm2_crypt.c",uVar4,"ossl_sm2_encrypt");
                  ERR_set_error(0x35,0xc0103,0);
                }
LAB_0010083c:
                type = (EVP_MD *)0x0;
                uVar5 = 0;
              }
            }
          }
        }
        goto LAB_00100601;
      }
    }
    ERR_new();
    uVar4 = 0x93;
  }
  d = (void *)0x0;
  data = (byte *)0x0;
  r = (EC_POINT *)0x0;
  ctx_00 = (BN_CTX *)0x0;
  uVar5 = 0;
  ERR_set_debug("crypto/sm2/sm2_crypt.c",uVar4,"ossl_sm2_encrypt");
  ERR_set_error(0x35,0xc0103,0);
  local_118 = (EC_POINT *)0x0;
  type = (EVP_MD *)0x0;
  local_c0 = (uchar *)0x0;
LAB_00100601:
  EVP_MD_free(type);
  ASN1_OCTET_STRING_free(pAStack_50);
  ASN1_OCTET_STRING_free(local_58);
  CRYPTO_free(data);
  CRYPTO_free(d);
  CRYPTO_free(local_c0);
  EVP_MD_CTX_free(ctx);
  BN_CTX_free(ctx_00);
  EC_POINT_free(r);
  EC_POINT_free(local_118);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}



undefined8
ossl_sm2_decrypt(EC_KEY *param_1,EVP_MD *param_2,undefined8 param_3,undefined8 param_4,void *param_5
                ,size_t *param_6)

{
  void *b;
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  EC_GROUP *group;
  BIGNUM *pBVar5;
  size_t cnt;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulong cnt_00;
  BIGNUM *pBVar9;
  EC_POINT *r;
  BIGNUM *m;
  byte *pbVar10;
  ulong uVar11;
  byte bVar12;
  BN_CTX *local_c0;
  void *local_b0;
  byte *local_a8;
  EVP_MD_CTX *local_a0;
  uchar *local_98;
  undefined8 local_40 [2];
  
  local_40[0] = param_3;
  group = EC_KEY_get0_group(param_1);
  pBVar5 = (BIGNUM *)EC_GROUP_get0_field(group);
  if (pBVar5 == (BIGNUM *)0x0) {
    EVP_MD_get_size(param_2);
    ossl_ec_key_get_libctx(param_1);
    ossl_ec_key_get0_propq(param_1);
LAB_00100e51:
    local_a0 = (EVP_MD_CTX *)0x0;
    puVar8 = (undefined8 *)0x0;
    r = (EC_POINT *)0x0;
    local_a8 = (byte *)0x0;
    local_98 = (uchar *)0x0;
    local_b0 = (void *)0x0;
    local_c0 = (BN_CTX *)0x0;
  }
  else {
    iVar2 = BN_num_bits(pBVar5);
    iVar3 = iVar2 + 7;
    if (iVar2 + 7 < 0) {
      iVar3 = iVar2 + 0xe;
    }
    iVar3 = iVar3 >> 3;
    cnt = (size_t)iVar3;
    iVar2 = EVP_MD_get_size(param_2);
    uVar6 = ossl_ec_key_get_libctx(param_1);
    uVar7 = ossl_ec_key_get0_propq(param_1);
    if ((cnt == 0) || (iVar2 < 1)) goto LAB_00100e51;
    memset(param_5,0xff,*param_6);
    puVar8 = (undefined8 *)d2i_SM2_Ciphertext(0,local_40,param_4);
    if (puVar8 == (undefined8 *)0x0) {
      ERR_new();
      ERR_set_debug("crypto/sm2/sm2_crypt.c",0x134,"ossl_sm2_decrypt");
      ERR_set_error(0x35,100,0);
      goto LAB_00100e51;
    }
    if (*(int *)puVar8[2] == iVar2) {
      b = *(void **)((int *)puVar8[2] + 2);
      lVar1 = *(long *)((int *)puVar8[3] + 2);
      cnt_00 = (ulong)*(int *)puVar8[3];
      if (*param_6 < cnt_00) {
        ERR_new();
        ERR_set_debug("crypto/sm2/sm2_crypt.c",0x141,"ossl_sm2_decrypt");
        uVar6 = 0x6b;
LAB_00100eb7:
        ERR_set_error(0x35,uVar6,0);
        goto LAB_00100ec3;
      }
      local_c0 = (BN_CTX *)BN_CTX_new_ex(uVar6);
      if (local_c0 == (BN_CTX *)0x0) {
        ERR_new();
        ERR_set_debug("crypto/sm2/sm2_crypt.c",0x147,"ossl_sm2_decrypt");
        uVar6 = 0x80003;
        goto LAB_00100eb7;
      }
      BN_CTX_start(local_c0);
      pBVar5 = BN_CTX_get(local_c0);
      pBVar9 = BN_CTX_get(local_c0);
      if (pBVar9 == (BIGNUM *)0x0) {
        ERR_new();
        r = (EC_POINT *)0x0;
        ERR_set_debug("crypto/sm2/sm2_crypt.c",0x150,"ossl_sm2_decrypt");
        ERR_set_error(0x35,0x80003,0);
        local_a8 = (byte *)0x0;
        local_98 = (uchar *)0x0;
        local_b0 = (void *)0x0;
        local_a0 = (EVP_MD_CTX *)0x0;
      }
      else {
        local_a8 = (byte *)CRYPTO_zalloc(cnt_00,"crypto/sm2/sm2_crypt.c",0x154);
        local_b0 = (void *)CRYPTO_zalloc(cnt * 2,"crypto/sm2/sm2_crypt.c",0x155);
        local_98 = (uchar *)CRYPTO_zalloc((long)iVar2,"crypto/sm2/sm2_crypt.c",0x156);
        if (((local_a8 == (byte *)0x0) || (local_b0 == (void *)0x0)) || (local_98 == (uchar *)0x0))
        {
          r = (EC_POINT *)0x0;
          local_a0 = (EVP_MD_CTX *)0x0;
        }
        else {
          r = EC_POINT_new(group);
          if (r == (EC_POINT *)0x0) {
            ERR_new();
            ERR_set_debug("crypto/sm2/sm2_crypt.c",0x15d,"ossl_sm2_decrypt");
            ERR_set_error(0x35,0x80010,0);
            local_a0 = (EVP_MD_CTX *)0x0;
          }
          else {
            iVar4 = EC_POINT_set_affine_coordinates(group,r,*puVar8,puVar8[1],local_c0);
            if (iVar4 == 0) {
LAB_00100d7d:
              ERR_new();
              ERR_set_debug("crypto/sm2/sm2_crypt.c",0x166,"ossl_sm2_decrypt");
              ERR_set_error(0x35,0x80010,0);
            }
            else {
              m = EC_KEY_get0_private_key(param_1);
              iVar4 = EC_POINT_mul(group,r,(BIGNUM *)0x0,r,m,local_c0);
              if ((iVar4 == 0) ||
                 (iVar4 = EC_POINT_get_affine_coordinates(group,r,pBVar5,pBVar9,local_c0),
                 iVar4 == 0)) goto LAB_00100d7d;
              iVar4 = BN_bn2binpad(pBVar5,local_b0,iVar3);
              if (iVar4 < 0) {
LAB_00101230:
                ERR_new();
                ERR_set_debug("crypto/sm2/sm2_crypt.c",0x16e,"ossl_sm2_decrypt");
                ERR_set_error(0x35,0xc0103,0);
                local_a0 = (EVP_MD_CTX *)0x0;
                goto LAB_00100db0;
              }
              iVar3 = BN_bn2binpad(pBVar9,(void *)((long)local_b0 + cnt),iVar3);
              if ((iVar3 < 0) ||
                 (iVar3 = ossl_ecdh_kdf_X9_63(local_a8,cnt_00,local_b0,cnt * 2,0,0,param_2,uVar6,
                                              uVar7), iVar3 == 0)) goto LAB_00101230;
              bVar12 = 0;
              if (cnt_00 == 0) {
LAB_0010129b:
                ERR_new();
                ERR_set_debug("crypto/sm2/sm2_crypt.c",0x173,"ossl_sm2_decrypt");
                ERR_set_error(0x35,0x68,0);
              }
              else {
                pbVar10 = local_a8;
                if (((int)(local_a8 + cnt_00) - (int)local_a8 & 1U) == 0) goto LAB_00101010;
                bVar12 = *local_a8;
                for (pbVar10 = local_a8 + 1; local_a8 + cnt_00 != pbVar10; pbVar10 = pbVar10 + 2) {
LAB_00101010:
                  bVar12 = bVar12 | *pbVar10 | pbVar10[1];
                }
                uVar11 = 0;
                if (bVar12 == 0) goto LAB_0010129b;
                do {
                  *(byte *)((long)param_5 + uVar11) = *(byte *)(lVar1 + uVar11) ^ local_a8[uVar11];
                  uVar11 = uVar11 + 1;
                } while (cnt_00 != uVar11);
                local_a0 = (EVP_MD_CTX *)EVP_MD_CTX_new();
                if (local_a0 != (EVP_MD_CTX *)0x0) {
                  iVar3 = EVP_DigestInit(local_a0,param_2);
                  if ((((iVar3 == 0) ||
                       (iVar3 = EVP_DigestUpdate(local_a0,local_b0,cnt), iVar3 == 0)) ||
                      (iVar3 = EVP_DigestUpdate(local_a0,param_5,cnt_00), iVar3 == 0)) ||
                     ((iVar3 = EVP_DigestUpdate(local_a0,(void *)((long)local_b0 + cnt),cnt),
                      iVar3 == 0 ||
                      (iVar3 = EVP_DigestFinal(local_a0,local_98,(uint *)0x0), iVar3 == 0)))) {
                    ERR_new();
                    ERR_set_debug("crypto/sm2/sm2_crypt.c",0x185,"ossl_sm2_decrypt");
                    ERR_set_error(0x35,0x80006,0);
                  }
                  else {
                    iVar3 = CRYPTO_memcmp(local_98,b,(long)iVar2);
                    if (iVar3 == 0) {
                      uVar6 = 1;
                      *param_6 = cnt_00;
                      goto LAB_00100dc1;
                    }
                    ERR_new();
                    ERR_set_debug("crypto/sm2/sm2_crypt.c",0x18a,"ossl_sm2_decrypt");
                    ERR_set_error(0x35,0x66,0);
                  }
                  goto LAB_00100db0;
                }
                ERR_new();
                ERR_set_debug("crypto/sm2/sm2_crypt.c",0x17c,"ossl_sm2_decrypt");
                ERR_set_error(0x35,0x80006,0);
              }
            }
            local_a0 = (EVP_MD_CTX *)0x0;
          }
        }
      }
    }
    else {
      ERR_new();
      ERR_set_debug("crypto/sm2/sm2_crypt.c",0x139,"ossl_sm2_decrypt");
      ERR_set_error(0x35,0x68,0);
LAB_00100ec3:
      local_a0 = (EVP_MD_CTX *)0x0;
      r = (EC_POINT *)0x0;
      local_a8 = (byte *)0x0;
      local_98 = (uchar *)0x0;
      local_b0 = (void *)0x0;
      local_c0 = (BN_CTX *)0x0;
    }
  }
LAB_00100db0:
  uVar6 = 0;
  memset(param_5,0,*param_6);
LAB_00100dc1:
  CRYPTO_free(local_a8);
  CRYPTO_free(local_b0);
  CRYPTO_free(local_98);
  EC_POINT_free(r);
  BN_CTX_free(local_c0);
  SM2_Ciphertext_free(puVar8);
  EVP_MD_CTX_free(local_a0);
  return uVar6;
}


