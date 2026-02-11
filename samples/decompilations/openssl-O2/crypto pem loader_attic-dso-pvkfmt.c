
EVP_PKEY * evp_pkey_new0_key(RSA *param_1,int param_2)

{
  int iVar1;
  EVP_PKEY *pkey;
  
  if (param_1 == (RSA *)0x0) {
    return (EVP_PKEY *)0x0;
  }
  if ((param_2 != 6) && (param_2 != 0x74)) {
    ERR_new();
    ERR_set_debug("crypto/pem/pvkfmt.c",0x54,"evp_pkey_new0_key");
    ERR_set_error(9,0xc0103,0);
    return (EVP_PKEY *)0x0;
  }
  pkey = EVP_PKEY_new();
  if (pkey == (EVP_PKEY *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/pem/pvkfmt.c",0x6c,"evp_pkey_new0_key");
    ERR_set_error(9,0x80006,0);
    if (param_2 != 6) goto LAB_001000b3;
  }
  else {
    if (param_2 != 6) {
      iVar1 = EVP_PKEY_set1_DSA(pkey,(dsa_st *)param_1);
      if (iVar1 != 0) {
        DSA_free((DSA *)param_1);
        return pkey;
      }
      ERR_new();
      ERR_set_debug("crypto/pem/pvkfmt.c",0x65,"evp_pkey_new0_key");
      ERR_set_error(9,0x80006,0);
      EVP_PKEY_free(pkey);
LAB_001000b3:
      DSA_free((DSA *)param_1);
      return (EVP_PKEY *)0x0;
    }
    iVar1 = EVP_PKEY_set1_RSA(pkey,param_1);
    if (iVar1 != 0) goto LAB_00100065;
    ERR_new();
    ERR_set_debug("crypto/pem/pvkfmt.c",0x5d,"evp_pkey_new0_key");
    ERR_set_error(9,0x80006,0);
    EVP_PKEY_free(pkey);
  }
  pkey = (EVP_PKEY *)0x0;
LAB_00100065:
  RSA_free(param_1);
  return pkey;
}



undefined4
derive_pvk_key_constprop_0
          (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,int param_5,
          undefined8 param_6,undefined8 param_7)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  long in_FS_OFFSET;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = EVP_KDF_fetch(param_6,"PVKKDF",param_7);
  if (lVar2 != 0) {
    lVar3 = EVP_KDF_CTX_new(lVar2);
    EVP_KDF_free(lVar2);
    if (lVar3 != 0) {
      OSSL_PARAM_construct_octet_string(&local_138,&_LC2,param_2,param_3);
      local_e8 = local_118;
      local_108 = local_138;
      uStack_100 = uStack_130;
      local_f8 = local_128;
      uStack_f0 = uStack_120;
      OSSL_PARAM_construct_octet_string(&local_138,&_LC3,param_4,(long)param_5);
      local_e0 = local_138;
      uStack_d8 = uStack_130;
      local_d0 = local_128;
      uStack_c8 = uStack_120;
      local_c0 = local_118;
      OSSL_PARAM_construct_utf8_string(&local_138,"digest",&_LC4,0);
      local_b8 = local_138;
      uStack_b0 = uStack_130;
      local_a8 = local_128;
      uStack_a0 = uStack_120;
      local_98 = local_118;
      OSSL_PARAM_construct_utf8_string(&local_138,"properties",param_7,0);
      local_70 = local_118;
      local_90 = local_138;
      uStack_88 = uStack_130;
      local_80 = local_128;
      uStack_78 = uStack_120;
      OSSL_PARAM_construct_end(&local_138);
      local_68 = local_138;
      uStack_60 = uStack_130;
      local_48 = local_118;
      local_58 = local_128;
      uStack_50 = uStack_120;
      uVar1 = EVP_KDF_derive(lVar3,param_1,0x14,&local_108);
      EVP_KDF_CTX_free(lVar3);
      goto LAB_00100342;
    }
  }
  uVar1 = 0;
LAB_00100342:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8
ossl_do_blob_header(undefined8 *param_1,uint param_2,uint *param_3,undefined4 *param_4,int *param_5,
                   int *param_6)

{
  uint uVar1;
  char *pcVar2;
  int iVar3;
  undefined8 uVar4;
  
  if (param_2 < 0x10) {
    return 0;
  }
  pcVar2 = (char *)*param_1;
  if (*pcVar2 == '\x06') {
    iVar3 = 1;
    if (*param_6 != 0) goto LAB_001003b4;
    ERR_new();
    uVar4 = 0xaf;
LAB_0010045a:
    ERR_set_debug("crypto/pem/pvkfmt.c",uVar4,"ossl_do_blob_header");
    ERR_set_error(9,0x77,0);
    uVar4 = 0;
  }
  else {
    if (*pcVar2 != '\a') {
      return 0;
    }
    iVar3 = 0;
    if (*param_6 == 1) {
      ERR_new();
      uVar4 = 0xb7;
      goto LAB_00100531;
    }
LAB_001003b4:
    *param_6 = iVar3;
    if (pcVar2[1] != '\x02') {
      ERR_new();
      ERR_set_debug("crypto/pem/pvkfmt.c",0xc3,"ossl_do_blob_header");
      ERR_set_error(9,0x75,0);
      return 0;
    }
    *param_3 = *(uint *)(pcVar2 + 8);
    *param_4 = *(undefined4 *)(pcVar2 + 0xc);
    uVar1 = *param_3;
    if (uVar1 == 0x32415352) {
      if (*param_6 == 1) {
LAB_001005b6:
        ERR_new();
        uVar4 = 0xd8;
LAB_00100531:
        ERR_set_debug("crypto/pem/pvkfmt.c",uVar4,"ossl_do_blob_header");
        ERR_set_error(9,0x78,0);
        return 0;
      }
LAB_00100567:
      iVar3 = 0;
      if (*param_5 == 1) {
        ERR_new();
        ERR_set_debug("crypto/pem/pvkfmt.c",0xef,"ossl_do_blob_header");
        ERR_set_error(9,0x84,0);
        return 0;
      }
    }
    else {
      if (uVar1 < 0x32415353) {
        if (uVar1 == 0x31415352) {
          if (*param_6 != 0) goto LAB_00100567;
        }
        else {
          if (uVar1 != 0x31535344) goto LAB_001003f7;
          if (*param_6 != 0) goto LAB_001004d6;
        }
        ERR_new();
        uVar4 = 0xd0;
        goto LAB_0010045a;
      }
      if (uVar1 != 0x32535344) {
LAB_001003f7:
        ERR_new();
        ERR_set_debug("crypto/pem/pvkfmt.c",0xde,"ossl_do_blob_header");
        ERR_set_error(9,0x74,0);
        return 0xffffffff;
      }
      if (*param_6 == 1) goto LAB_001005b6;
LAB_001004d6:
      iVar3 = 1;
      if (*param_5 == 0) {
        ERR_new();
        ERR_set_debug("crypto/pem/pvkfmt.c",0xe7,"ossl_do_blob_header");
        ERR_set_error(9,0x83,0);
        return 0;
      }
    }
    *param_5 = iVar3;
    *param_1 = pcVar2 + 0x10;
    uVar4 = 1;
  }
  return uVar4;
}



int ossl_blob_length(int param_1,int param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = param_1 + 7U >> 3;
  if (param_2 == 0) {
    if (param_3 != 0) {
      return uVar1 + 4;
    }
    return (param_1 + 0xfU >> 4) * 5 + 4 + uVar1 * 2;
  }
  if (param_3 != 0) {
    return uVar1 * 3 + 0x2c;
  }
  return uVar1 * 2 + 0x40;
}



int do_i2b(long *param_1,undefined8 param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  RSA *pRVar6;
  char *pcVar7;
  undefined4 uVar8;
  char *pcVar9;
  int iVar10;
  undefined8 uVar11;
  long in_FS_OFFSET;
  undefined8 local_80;
  BIGNUM *local_78;
  BIGNUM *local_70;
  BIGNUM *local_68;
  BIGNUM *local_60;
  BIGNUM *local_58;
  BIGNUM *local_50;
  BIGNUM *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = EVP_PKEY_is_a(param_2,&_LC7);
  if (iVar3 == 0) {
    iVar3 = EVP_PKEY_is_a(param_2,&_LC8);
    if (iVar3 == 0) goto LAB_001006f9;
    uVar11 = EVP_PKEY_get0_DSA(param_2);
    local_68 = (BIGNUM *)0x0;
    local_60 = (BIGNUM *)0x0;
    local_58 = (BIGNUM *)0x0;
    local_50 = (BIGNUM *)0x0;
    local_48 = (BIGNUM *)0x0;
    DSA_get0_pqg(uVar11,&local_68,&local_60,&local_58);
    DSA_get0_key(uVar11,&local_50,&local_48);
    uVar4 = BN_num_bits(local_68);
    if ((((uVar4 & 7) == 0) && (iVar3 = BN_num_bits(local_60), iVar3 == 0xa0)) &&
       (iVar3 = BN_num_bits(local_58), iVar3 <= (int)uVar4)) {
      if (param_3 == 0) {
        iVar3 = BN_num_bits(local_48);
        if (iVar3 < 0xa1) {
          uVar8 = 0x32535344;
LAB_00100ad6:
          cVar2 = '\"';
          goto LAB_00100757;
        }
      }
      else {
        uVar8 = 0x31535344;
        iVar3 = BN_num_bits(local_50);
        if (iVar3 <= (int)uVar4) goto LAB_00100ad6;
      }
    }
    ERR_new();
    pcVar7 = "check_bitlen_dsa";
    uVar11 = 0x2d3;
LAB_001006da:
    ERR_set_debug("crypto/pem/pvkfmt.c",uVar11,pcVar7);
    ERR_set_error(9,0x7e,0);
  }
  else {
    pRVar6 = (RSA *)EVP_PKEY_get0_RSA(param_2);
    RSA_get0_key(pRVar6,0,&local_78,0);
    iVar3 = BN_num_bits(local_78);
    if (0x20 < iVar3) {
LAB_001006c9:
      ERR_new();
      pcVar7 = "check_bitlen_rsa";
      uVar11 = 0x2a0;
      goto LAB_001006da;
    }
    uVar8 = 0x31415352;
    uVar4 = RSA_bits(pRVar6);
    iVar3 = RSA_size(pRVar6);
    if (param_3 == 0) {
      RSA_get0_key(pRVar6,0,0,&local_70);
      iVar5 = BN_num_bits(local_70);
      iVar10 = iVar5 + 7;
      if (iVar5 + 7 < 0) {
        iVar10 = iVar5 + 0xe;
      }
      if (iVar10 >> 3 <= iVar3) {
        RSA_get0_factors(pRVar6,&local_68,&local_60);
        RSA_get0_crt_params(pRVar6,&local_50,&local_48,&local_58);
        iVar5 = (int)(uVar4 + 0xf) >> 4;
        iVar10 = BN_num_bits(local_58);
        iVar3 = iVar10 + 7;
        if (iVar10 + 7 < 0) {
          iVar3 = iVar10 + 0xe;
        }
        if (iVar3 >> 3 <= iVar5) {
          iVar10 = BN_num_bits(local_68);
          iVar3 = iVar10 + 7;
          if (iVar10 + 7 < 0) {
            iVar3 = iVar10 + 0xe;
          }
          if (iVar3 >> 3 <= iVar5) {
            iVar10 = BN_num_bits(local_60);
            iVar3 = iVar10 + 7;
            if (iVar10 + 7 < 0) {
              iVar3 = iVar10 + 0xe;
            }
            if (iVar3 >> 3 <= iVar5) {
              iVar10 = BN_num_bits(local_50);
              iVar3 = iVar10 + 7;
              if (iVar10 + 7 < 0) {
                iVar3 = iVar10 + 0xe;
              }
              if (iVar3 >> 3 <= iVar5) {
                iVar10 = BN_num_bits(local_48);
                iVar3 = iVar10 + 7;
                if (iVar10 + 7 < 0) {
                  iVar3 = iVar10 + 0xe;
                }
                if (iVar3 >> 3 <= iVar5) {
                  uVar8 = 0x32415352;
                  goto LAB_0010074d;
                }
              }
            }
          }
        }
      }
      goto LAB_001006c9;
    }
LAB_0010074d:
    cVar2 = -0x5c;
LAB_00100757:
    if (uVar4 != 0) {
      iVar3 = ossl_blob_length(uVar4,cVar2 == '\"',param_3);
      iVar3 = iVar3 + 0x10;
      if (param_1 == (long *)0x0) goto LAB_001006ff;
      pcVar7 = (char *)*param_1;
      bVar1 = false;
      if (pcVar7 == (char *)0x0) {
        pcVar7 = (char *)CRYPTO_malloc(iVar3,"crypto/pem/pvkfmt.c",0x250);
        if (pcVar7 == (char *)0x0) goto LAB_001006f9;
        *param_1 = (long)pcVar7;
        bVar1 = true;
      }
      pcVar7[8] = (char)uVar8;
      pcVar7[1] = '\x02';
      pcVar7[2] = '\0';
      pcVar7[3] = '\0';
      pcVar7[4] = '\0';
      *pcVar7 = '\a' - (char)param_3;
      pcVar7[6] = '\0';
      pcVar7[7] = '\0';
      pcVar7[5] = cVar2;
      pcVar7[0xb] = (char)((uint)uVar8 >> 0x18);
      pcVar9 = pcVar7 + 0x10;
      pcVar7[10] = (char)((uint)uVar8 >> 0x10);
      pcVar7[9] = 'S';
      *(uint *)(pcVar7 + 0xc) = uVar4;
      if (cVar2 == -0x5c) {
        pRVar6 = (RSA *)EVP_PKEY_get0_RSA(param_2);
        iVar10 = RSA_size(pRVar6);
        iVar5 = RSA_bits(pRVar6);
        RSA_get0_key(pRVar6,&local_80,&local_70,&local_78);
        BN_bn2lebinpad(local_70,pcVar9,4);
        pcVar7 = pcVar7 + 0x14;
        BN_bn2lebinpad(local_80,pcVar7,iVar10);
        if (param_3 == 0) {
          pcVar7 = pcVar7 + iVar10;
          RSA_get0_factors(pRVar6,&local_68,&local_60);
          iVar5 = iVar5 + 0xf >> 4;
          RSA_get0_crt_params(pRVar6,&local_50,&local_48,&local_58);
          pcVar9 = pcVar7 + iVar5;
          BN_bn2lebinpad(local_68,pcVar7,iVar5);
          pcVar7 = pcVar9 + iVar5;
          BN_bn2lebinpad(local_60,pcVar9,iVar5);
          pcVar9 = pcVar7 + iVar5;
          BN_bn2lebinpad(local_50,pcVar7,iVar5);
          BN_bn2lebinpad(local_48,pcVar9,iVar5);
          BN_bn2lebinpad(local_58,pcVar9 + iVar5,iVar5);
          BN_bn2lebinpad(local_78,pcVar9 + iVar5 + iVar5,iVar10);
        }
      }
      else {
        uVar11 = EVP_PKEY_get0_DSA(param_2);
        local_68 = (BIGNUM *)0x0;
        local_60 = (BIGNUM *)0x0;
        local_58 = (BIGNUM *)0x0;
        local_50 = (BIGNUM *)0x0;
        local_48 = (BIGNUM *)0x0;
        DSA_get0_pqg(uVar11,&local_68,&local_60,&local_58);
        DSA_get0_key(uVar11,&local_50,&local_48);
        iVar5 = BN_num_bits(local_68);
        iVar10 = iVar5 + 0xe;
        if (-1 < iVar5 + 7) {
          iVar10 = iVar5 + 7;
        }
        iVar10 = iVar10 >> 3;
        BN_bn2lebinpad(local_68,pcVar9,iVar10);
        pcVar9 = pcVar9 + iVar10;
        BN_bn2lebinpad(local_60,pcVar9,0x14);
        pcVar7 = pcVar9 + 0x14 + iVar10;
        BN_bn2lebinpad(local_58,pcVar9 + 0x14,iVar10);
        if (param_3 == 0) {
          pcVar9 = pcVar7 + 0x14;
          BN_bn2lebinpad(local_48,pcVar7,0x14);
        }
        else {
          pcVar9 = pcVar7 + iVar10;
          BN_bn2lebinpad(local_50,pcVar7,iVar10);
        }
        pcVar9[0x10] = -1;
        pcVar9[0x11] = -1;
        pcVar9[0x12] = -1;
        pcVar9[0x13] = -1;
        pcVar9[0x14] = -1;
        pcVar9[0x15] = -1;
        pcVar9[0x16] = -1;
        pcVar9[0x17] = -1;
        pcVar9[0] = -1;
        pcVar9[1] = -1;
        pcVar9[2] = -1;
        pcVar9[3] = -1;
        pcVar9[4] = -1;
        pcVar9[5] = -1;
        pcVar9[6] = -1;
        pcVar9[7] = -1;
        pcVar9[8] = -1;
        pcVar9[9] = -1;
        pcVar9[10] = -1;
        pcVar9[0xb] = -1;
        pcVar9[0xc] = -1;
        pcVar9[0xd] = -1;
        pcVar9[0xe] = -1;
        pcVar9[0xf] = -1;
      }
      if (!bVar1) {
        *param_1 = *param_1 + (long)iVar3;
      }
      goto LAB_001006ff;
    }
  }
LAB_001006f9:
  iVar3 = -1;
LAB_001006ff:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar3;
}



int do_i2b_bio(BIO *param_1)

{
  void *ptr;
  int len;
  int iVar1;
  long in_FS_OFFSET;
  void *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = (void *)0x0;
  len = do_i2b(&local_28);
  ptr = local_28;
  if (-1 < len) {
    iVar1 = BIO_write(param_1,local_28,len);
    CRYPTO_free(ptr);
    if (len == iVar1) goto LAB_00100cec;
  }
  iVar1 = -1;
LAB_00100cec:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int i2b_PVK_constprop_0(long *param_1,undefined8 param_2,int param_3,code *param_4,void *param_5,
                       undefined8 param_6,undefined8 param_7)

{
  uchar *puVar1;
  uchar *puVar2;
  int iVar3;
  int iVar4;
  EVP_CIPHER_CTX *ctx;
  EVP_CIPHER *cipher;
  long in_FS_OFFSET;
  undefined8 uStack_4c0;
  int local_4ac;
  uchar *local_488;
  int local_474;
  uchar *local_470;
  uchar local_468 [5];
  undefined7 local_463;
  undefined4 uStack_45c;
  char local_448 [1032];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_470 = (uchar *)0x0;
  iVar3 = do_i2b(0,param_2,0);
  if (iVar3 < 0) {
LAB_00101059:
    local_4ac = -1;
    goto LAB_00100fb0;
  }
  local_4ac = iVar3 + (-(uint)(param_3 == 0) & 0xfffffff0) + 0x28;
  if ((uchar *)*param_1 == (uchar *)0x0) {
    local_488 = (uchar *)CRYPTO_malloc(local_4ac,"crypto/pem/pvkfmt.c",0x41c);
    local_470 = local_488;
    if (local_488 == (uchar *)0x0) goto LAB_00101059;
  }
  else {
    local_488 = (uchar *)0x0;
    local_470 = (uchar *)*param_1;
  }
  ctx = EVP_CIPHER_CTX_new();
  puVar2 = local_470;
  if (ctx == (EVP_CIPHER_CTX *)0x0) goto LAB_00101010;
  *(undefined8 *)local_470 = _LC9;
  iVar4 = EVP_PKEY_get_id();
  puVar2[0xb] = '\0';
  puVar2[0xf] = '\0';
  puVar2[0x13] = '\0';
  puVar2[9] = '\0';
  puVar2[10] = '\0';
  puVar2[8] = (iVar4 != 6) + '\x01';
  puVar2[0xc] = param_3 != 0;
  puVar2[0x10] = (param_3 != 0) << 4;
  puVar1 = puVar2 + 0x18;
  puVar2[0xd] = '\0';
  puVar2[0xe] = '\0';
  puVar2[0x11] = '\0';
  puVar2[0x12] = '\0';
  *(int *)(puVar2 + 0x14) = iVar3;
  local_470 = puVar1;
  if (param_3 == 0) {
    cipher = (EVP_CIPHER *)0x0;
    do_i2b(&local_470,param_2,0);
LAB_00100f8a:
    if (*param_1 == 0) {
      *param_1 = (long)local_488;
    }
  }
  else {
    iVar4 = RAND_bytes_ex(param_6,puVar1,0x10,0);
    if (iVar4 < 1) {
LAB_00101010:
      cipher = (EVP_CIPHER *)0x0;
    }
    else {
      local_470 = puVar2 + 0x28;
      do_i2b(&local_470,param_2,0);
      if (param_4 == (code *)0x0) {
        uStack_4c0 = 0x1010ac;
        iVar4 = PEM_def_callback(local_448,0x400,1,param_5);
      }
      else {
        uStack_4c0 = 0x100e8d;
        iVar4 = (*param_4)(local_448,0x400,1,param_5);
      }
      if (iVar4 < 1) {
        ERR_new();
        ERR_set_debug("crypto/pem/pvkfmt.c",0x443,"i2b_PVK");
        ERR_set_error(9,0x68,0);
        goto LAB_00101010;
      }
      iVar4 = derive_pvk_key_constprop_0(local_468,puVar1,0x10,local_448,iVar4,param_6,param_7);
      if ((iVar4 == 0) ||
         (cipher = (EVP_CIPHER *)EVP_CIPHER_fetch(param_6,&_LC10,param_7,uStack_4c0),
         cipher == (EVP_CIPHER *)0x0)) goto LAB_00101010;
      if (param_3 == 1) {
        local_463 = 0;
        uStack_45c = 0;
      }
      puVar2 = puVar2 + 0x30;
      local_470 = puVar2;
      iVar4 = EVP_EncryptInit_ex(ctx,cipher,(ENGINE *)0x0,local_468,(uchar *)0x0);
      if (iVar4 != 0) {
        OPENSSL_cleanse(local_468,0x14);
        iVar3 = EVP_EncryptUpdate(ctx,puVar2,&local_474,puVar2,iVar3 + -8);
        if ((iVar3 != 0) &&
           (iVar3 = EVP_EncryptFinal_ex(ctx,puVar2 + local_474,&local_474), iVar3 != 0))
        goto LAB_00100f8a;
      }
    }
    local_4ac = -1;
  }
  EVP_CIPHER_CTX_free(ctx);
  EVP_CIPHER_free(cipher);
  if (*param_1 == 0) {
    CRYPTO_free(local_488);
  }
LAB_00100fb0:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_4ac;
}



DSA * ossl_b2i_DSA_after_header(long *param_1,int param_2,int param_3)

{
  int iVar1;
  DSA *r;
  BIGNUM *m;
  ulong uVar2;
  BIGNUM *a;
  BIGNUM *a_00;
  BIGNUM *r_00;
  uint uVar3;
  BIGNUM *local_50;
  BN_CTX *local_48;
  long local_40;
  
  uVar3 = param_2 + 7U >> 3;
  local_40 = *param_1;
  r = DSA_new();
  if (r == (DSA *)0x0) {
    r_00 = (BIGNUM *)0x0;
    a_00 = (BIGNUM *)0x0;
    a = (BIGNUM *)0x0;
    m = (BIGNUM *)0x0;
    local_50 = (BIGNUM *)0x0;
LAB_0010136c:
    ERR_new();
    ERR_set_debug("crypto/pem/pvkfmt.c",0x1af,"ossl_b2i_DSA_after_header");
    ERR_set_error(9,0x8000a,0);
    local_48 = (BN_CTX *)0x0;
    goto LAB_001012ab;
  }
  m = (BIGNUM *)BN_lebin2bn(local_40,uVar3,0);
  if (m == (BIGNUM *)0x0) {
LAB_00101260:
    local_50 = (BIGNUM *)0x0;
    r_00 = (BIGNUM *)0x0;
    a_00 = (BIGNUM *)0x0;
    a = (BIGNUM *)0x0;
    local_48 = (BN_CTX *)0x0;
  }
  else {
    uVar2 = (ulong)uVar3;
    local_40 = local_40 + uVar2;
    a = (BIGNUM *)BN_lebin2bn(local_40,0x14,0);
    if (a == (BIGNUM *)0x0) goto LAB_00101260;
    local_40 = local_40 + 0x14;
    a_00 = (BIGNUM *)BN_lebin2bn(local_40,uVar3,0);
    if (a_00 == (BIGNUM *)0x0) {
      local_50 = (BIGNUM *)0x0;
      r_00 = (BIGNUM *)0x0;
      local_48 = (BN_CTX *)0x0;
    }
    else {
      local_40 = local_40 + uVar2;
      if (param_3 == 0) {
        local_50 = (BIGNUM *)BN_lebin2bn(local_40,0x14,0);
        if (local_50 == (BIGNUM *)0x0) {
          local_48 = (BN_CTX *)0x0;
          r_00 = (BIGNUM *)0x0;
        }
        else {
          BN_set_flags(local_50,4);
          r_00 = BN_new();
          if (r_00 == (BIGNUM *)0x0) {
            local_48 = (BN_CTX *)0x0;
          }
          else {
            local_48 = BN_CTX_new();
            if ((local_48 != (BN_CTX *)0x0) &&
               (iVar1 = BN_mod_exp(r_00,a_00,local_50,m,local_48), iVar1 != 0)) {
              local_40 = local_40 + 0x14;
              BN_CTX_free(local_48);
              goto LAB_00101217;
            }
          }
        }
      }
      else {
        r_00 = (BIGNUM *)BN_lebin2bn(local_40,uVar3,0);
        if (r_00 != (BIGNUM *)0x0) {
          local_50 = (BIGNUM *)0x0;
          local_40 = local_40 + uVar2;
LAB_00101217:
          iVar1 = DSA_set0_pqg(r,m,a,a_00);
          if (iVar1 != 0) {
            iVar1 = DSA_set0_key(r,r_00,local_50);
            if (iVar1 != 0) {
              *param_1 = local_40;
              return r;
            }
            a_00 = (BIGNUM *)0x0;
            a = (BIGNUM *)0x0;
            m = (BIGNUM *)0x0;
          }
          goto LAB_0010136c;
        }
        local_50 = (BIGNUM *)0x0;
        local_48 = (BN_CTX *)0x0;
      }
    }
  }
  ERR_new();
  ERR_set_debug("crypto/pem/pvkfmt.c",0x1b2,"ossl_b2i_DSA_after_header");
  ERR_set_error(9,0x80003,0);
LAB_001012ab:
  DSA_free(r);
  BN_free(m);
  BN_free(a);
  BN_free(a_00);
  BN_free(r_00);
  BN_free(local_50);
  BN_CTX_free(local_48);
  return (DSA *)0x0;
}



RSA * ossl_b2i_RSA_after_header(long *param_1,int param_2,int param_3)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  RSA *r;
  BIGNUM *a;
  BIGNUM *a_00;
  BIGNUM *a_01;
  BIGNUM *a_02;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  BIGNUM *local_78;
  BIGNUM *local_70;
  BIGNUM *local_68;
  BIGNUM *local_60;
  
  puVar1 = (uint *)*param_1;
  r = RSA_new();
  if (r == (RSA *)0x0) {
    local_78 = (BIGNUM *)0x0;
    a_01 = (BIGNUM *)0x0;
    a_02 = (BIGNUM *)0x0;
    a = (BIGNUM *)0x0;
    local_60 = (BIGNUM *)0x0;
    a_00 = (BIGNUM *)0x0;
    local_68 = (BIGNUM *)0x0;
    local_70 = (BIGNUM *)0x0;
LAB_00101706:
    ERR_new();
    ERR_set_debug("crypto/pem/pvkfmt.c",0x1f0,"ossl_b2i_RSA_after_header");
    ERR_set_error(9,0x80004,0);
    goto LAB_0010164c;
  }
  a = BN_new();
  if ((a == (BIGNUM *)0x0) || (iVar2 = BN_set_word(a,(ulong)*puVar1), iVar2 == 0)) {
LAB_001015f0:
    local_60 = (BIGNUM *)0x0;
    a_01 = (BIGNUM *)0x0;
    a_00 = (BIGNUM *)0x0;
    local_68 = (BIGNUM *)0x0;
    local_70 = (BIGNUM *)0x0;
    local_78 = (BIGNUM *)0x0;
  }
  else {
    puVar1 = puVar1 + 1;
    uVar3 = param_2 + 7U >> 3;
    a_00 = (BIGNUM *)BN_lebin2bn(puVar1,uVar3,0);
    if (a_00 == (BIGNUM *)0x0) goto LAB_001015f0;
    local_78 = (BIGNUM *)((long)puVar1 + (ulong)uVar3);
    if (param_3 != 0) {
      a_02 = (BIGNUM *)0x0;
LAB_001016b3:
      iVar2 = RSA_set0_key(r,a_00,a,a_02);
      if (iVar2 != 0) {
        *param_1 = (long)local_78;
        return r;
      }
      local_60 = (BIGNUM *)0x0;
      local_68 = (BIGNUM *)0x0;
      local_70 = (BIGNUM *)0x0;
LAB_0010175b:
      local_78 = (BIGNUM *)0x0;
      a_01 = (BIGNUM *)0x0;
      goto LAB_00101706;
    }
    uVar5 = param_2 + 0xfU >> 4;
    uVar6 = (ulong)uVar5;
    a_01 = (BIGNUM *)BN_lebin2bn(local_78,uVar5,0);
    if (a_01 == (BIGNUM *)0x0) {
      local_60 = (BIGNUM *)0x0;
      local_68 = (BIGNUM *)0x0;
      local_70 = (BIGNUM *)0x0;
      local_78 = (BIGNUM *)0x0;
    }
    else {
      lVar4 = (long)local_78 + uVar6;
      local_78 = (BIGNUM *)BN_lebin2bn(lVar4,uVar5,0);
      if (local_78 == (BIGNUM *)0x0) {
        local_60 = (BIGNUM *)0x0;
        local_68 = (BIGNUM *)0x0;
        local_70 = (BIGNUM *)0x0;
      }
      else {
        lVar4 = lVar4 + uVar6;
        local_70 = (BIGNUM *)BN_lebin2bn(lVar4,uVar6,0);
        if (local_70 == (BIGNUM *)0x0) {
          local_60 = (BIGNUM *)0x0;
          local_68 = (BIGNUM *)0x0;
        }
        else {
          lVar4 = lVar4 + uVar6;
          local_68 = (BIGNUM *)BN_lebin2bn(lVar4,uVar5,0);
          if (local_68 == (BIGNUM *)0x0) {
            local_60 = (BIGNUM *)0x0;
          }
          else {
            lVar4 = lVar4 + uVar6;
            local_60 = (BIGNUM *)BN_lebin2bn(lVar4,uVar5,0);
            if (local_60 != (BIGNUM *)0x0) {
              lVar4 = uVar6 + lVar4;
              a_02 = (BIGNUM *)BN_lebin2bn(lVar4,uVar3,0);
              if (a_02 != (BIGNUM *)0x0) {
                iVar2 = RSA_set0_factors(r,a_01,local_78);
                if (iVar2 == 0) goto LAB_00101706;
                iVar2 = RSA_set0_crt_params(r,local_70,local_68,local_60);
                if (iVar2 != 0) {
                  local_78 = (BIGNUM *)(lVar4 + (ulong)uVar3);
                  goto LAB_001016b3;
                }
                goto LAB_0010175b;
              }
            }
          }
        }
      }
    }
  }
  ERR_new();
  a_02 = (BIGNUM *)0x0;
  ERR_set_debug("crypto/pem/pvkfmt.c",499,"ossl_b2i_RSA_after_header");
  ERR_set_error(9,0x80003,0);
LAB_0010164c:
  BN_free(a);
  BN_free(a_00);
  BN_free(a_01);
  BN_free(local_78);
  BN_free(local_70);
  BN_free(local_68);
  BN_free(local_60);
  BN_free(a_02);
  RSA_free(r);
  return (RSA *)0x0;
}



undefined8 ossl_b2i_bio(BIO *param_1,undefined4 *param_2)

{
  int iVar1;
  uint num;
  uint uVar2;
  undefined1 *data;
  long lVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined4 local_6c;
  undefined1 local_68 [4];
  int local_64;
  undefined1 *local_60;
  undefined1 local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_64 = -1;
  iVar1 = BIO_read(param_1,local_58,0x10);
  if (iVar1 == 0x10) {
    local_60 = local_58;
    iVar1 = ossl_do_blob_header(&local_60,0x10,local_68,&local_6c,&local_64,param_2);
    if (0 < iVar1) {
      num = ossl_blob_length(local_6c,local_64,*param_2);
      if (num < 0x19001) {
        data = (undefined1 *)CRYPTO_malloc(num,"crypto/pem/pvkfmt.c",0x15b);
        if (data == (undefined1 *)0x0) {
LAB_001019f4:
          uVar4 = 0;
        }
        else {
          local_60 = data;
          uVar2 = BIO_read(param_1,data,num);
          if (num != uVar2) {
            ERR_new();
            ERR_set_debug("crypto/pem/pvkfmt.c",0x160,__func___9);
            ERR_set_error(9,0x7b,0);
            goto LAB_001019f4;
          }
          if (local_64 == 0) {
            lVar3 = ossl_b2i_RSA_after_header(&local_60,local_6c,*param_2);
          }
          else {
            lVar3 = ossl_b2i_DSA_after_header();
          }
          if (lVar3 == 0) {
            ERR_new();
            uVar4 = 0;
            ERR_set_debug("crypto/pem/pvkfmt.c",0x16c,__func___9);
            ERR_set_error(9,0x6e,0);
          }
          else {
            uVar4 = 6;
            if ((local_64 != 0) && (uVar4 = 0, local_64 == 1)) {
              uVar4 = 0x74;
            }
            uVar4 = evp_pkey_new0_key(lVar3,uVar4);
          }
        }
        CRYPTO_free(data);
        goto LAB_0010195a;
      }
      ERR_new();
      ERR_set_debug("crypto/pem/pvkfmt.c",0x158,__func___9);
      ERR_set_error(9,0x80,0);
    }
  }
  else {
    ERR_new();
    ERR_set_debug("crypto/pem/pvkfmt.c",0x14f,__func___9);
    ERR_set_error(9,0x7b,0);
  }
  uVar4 = 0;
LAB_0010195a:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



long do_b2i_key_isra_0(undefined8 param_1,undefined8 param_2,int *param_3,undefined4 *param_4)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long in_FS_OFFSET;
  undefined4 local_40;
  undefined1 local_3c [4];
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = param_1;
  iVar1 = ossl_do_blob_header(&local_38,param_2,local_3c,&local_40,param_3,param_4);
  if (iVar1 < 1) {
    ERR_new();
    lVar3 = 0;
    ERR_set_debug("crypto/pem/pvkfmt.c",0x126,__func___11);
    ERR_set_error(9,0x7a,0);
  }
  else {
    uVar2 = ossl_blob_length(local_40,*param_3,*param_4);
    if ((int)param_2 - 0x10U < uVar2) {
      ERR_new();
      lVar3 = 0;
      ERR_set_debug("crypto/pem/pvkfmt.c",299,__func___11);
      ERR_set_error(9,0x7b,0);
    }
    else {
      if (*param_3 == 0) {
        lVar3 = ossl_b2i_RSA_after_header(&local_38,local_40,*param_4);
      }
      else {
        lVar3 = ossl_b2i_DSA_after_header();
      }
      if (lVar3 == 0) {
        ERR_new();
        ERR_set_debug("crypto/pem/pvkfmt.c",0x136,__func___11);
        ERR_set_error(9,0x6e,0);
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8
do_PVK_body_key_isra_0
          (long param_1,uint param_2,uint param_3,code *param_4,void *param_5,undefined8 param_6,
          undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  uchar *in;
  uchar *out;
  int iVar1;
  EVP_CIPHER_CTX *a;
  undefined8 *ptr;
  EVP_CIPHER *cipher;
  undefined8 uVar2;
  undefined8 *puVar3;
  long in_FS_OFFSET;
  int local_46c;
  uchar local_468 [5];
  undefined7 local_463;
  undefined4 uStack_45c;
  char local_448 [1032];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  a = EVP_CIPHER_CTX_new();
  if (a == (EVP_CIPHER_CTX *)0x0) {
    ERR_new();
    uVar2 = 0;
    ERR_set_debug("crypto/pem/pvkfmt.c",0x366,"do_PVK_body_key");
    ERR_set_error(9,0x80006,0);
    EVP_CIPHER_CTX_free((EVP_CIPHER_CTX *)0x0);
    EVP_CIPHER_free(0);
    goto LAB_00101df7;
  }
  if (param_2 == 0) {
    uVar2 = do_b2i_key_isra_0(param_1,param_3,param_6,param_7);
    EVP_CIPHER_CTX_free(a);
    EVP_CIPHER_free(0);
    goto LAB_00101df7;
  }
  if (param_4 == (code *)0x0) {
    iVar1 = PEM_def_callback(local_448,0x400,0,param_5);
  }
  else {
    iVar1 = (*param_4)();
  }
  if (iVar1 < 0) {
    ERR_new();
    uVar2 = 0;
    ERR_set_debug("crypto/pem/pvkfmt.c",0x376,"do_PVK_body_key");
    ERR_set_error(9,0x68,0);
    EVP_CIPHER_CTX_free(a);
    EVP_CIPHER_free(0);
    goto LAB_00101df7;
  }
  ptr = (undefined8 *)CRYPTO_malloc(param_3 + 8,"crypto/pem/pvkfmt.c",0x379);
  if (ptr == (undefined8 *)0x0) {
    uVar2 = 0;
    EVP_CIPHER_CTX_free(a);
    EVP_CIPHER_free(0);
    goto LAB_00101df7;
  }
  iVar1 = derive_pvk_key_constprop_0(local_468,param_1,(ulong)param_2,local_448,iVar1,param_8);
  if (iVar1 == 0) {
LAB_00101d98:
    EVP_CIPHER_CTX_free(a);
    EVP_CIPHER_free(0);
LAB_00101da7:
    uVar2 = 0;
  }
  else {
    puVar3 = (undefined8 *)((ulong)param_2 + param_1);
    *ptr = *puVar3;
    if (param_3 < 8) {
      ERR_new();
      ERR_set_debug("crypto/pem/pvkfmt.c",900,"do_PVK_body_key");
      ERR_set_error(9,0x7d,0);
      EVP_CIPHER_CTX_free(a);
      EVP_CIPHER_free(0);
      goto LAB_00101da7;
    }
    cipher = (EVP_CIPHER *)EVP_CIPHER_fetch(param_8,&_LC10,param_9);
    if (cipher == (EVP_CIPHER *)0x0) goto LAB_00101d98;
    iVar1 = EVP_DecryptInit_ex(a,cipher,(ENGINE *)0x0,local_468,(uchar *)0x0);
    if (iVar1 == 0) {
LAB_00101e28:
      EVP_CIPHER_CTX_free(a);
      EVP_CIPHER_free(cipher);
      goto LAB_00101da7;
    }
    in = (uchar *)(puVar3 + 1);
    out = (uchar *)(ptr + 1);
    iVar1 = EVP_DecryptUpdate(a,out,&local_46c,in,param_3 - 8);
    if (iVar1 == 0) goto LAB_00101e28;
    iVar1 = EVP_DecryptFinal_ex(a,out + local_46c,&local_46c);
    if (iVar1 == 0) goto LAB_00101e28;
    if ((*(int *)(ptr + 1) != 0x32415352) && (*(int *)(ptr + 1) != 0x32535344)) {
      local_463 = 0;
      uStack_45c = 0;
      iVar1 = EVP_DecryptInit_ex(a,cipher,(ENGINE *)0x0,local_468,(uchar *)0x0);
      if (iVar1 != 0) {
        iVar1 = EVP_DecryptUpdate(a,out,&local_46c,in,param_3 - 8);
        if (iVar1 != 0) {
          iVar1 = EVP_DecryptFinal_ex(a,out + local_46c,&local_46c);
          if (iVar1 != 0) {
            if ((*(int *)(ptr + 1) != 0x32415352) && (*(int *)(ptr + 1) != 0x32535344)) {
              ERR_new();
              ERR_set_debug("crypto/pem/pvkfmt.c",0x39d,"do_PVK_body_key");
              ERR_set_error(9,0x65,0);
              EVP_CIPHER_CTX_free(a);
              EVP_CIPHER_free(cipher);
              goto LAB_00101da7;
            }
            goto LAB_00101d67;
          }
        }
      }
      goto LAB_00101e28;
    }
LAB_00101d67:
    uVar2 = do_b2i_key_isra_0(ptr,param_3,param_6,param_7);
    EVP_CIPHER_CTX_free(a);
    EVP_CIPHER_free(cipher);
  }
  OPENSSL_cleanse(local_468,0x14);
  CRYPTO_free(ptr);
LAB_00101df7:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void ossl_b2i(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  int local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = -1;
  uVar1 = do_b2i_key_isra_0(*param_1,param_2,&local_14,param_3);
  uVar2 = 6;
  if ((local_14 != 0) && (uVar2 = 0, local_14 == 1)) {
    uVar2 = 0x74;
  }
  evp_pkey_new0_key(uVar1,uVar2);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



EVP_PKEY * b2i_PrivateKey(uchar **in,long length)

{
  EVP_PKEY *pEVar1;
  long in_FS_OFFSET;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = 0;
  pEVar1 = (EVP_PKEY *)ossl_b2i(in,length,&local_14);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pEVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



EVP_PKEY * b2i_PublicKey(uchar **in,long length)

{
  EVP_PKEY *pEVar1;
  long in_FS_OFFSET;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = 1;
  pEVar1 = (EVP_PKEY *)ossl_b2i(in,length,&local_14);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pEVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



EVP_PKEY * b2i_PrivateKey_bio(BIO *in)

{
  EVP_PKEY *pEVar1;
  long in_FS_OFFSET;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = 0;
  pEVar1 = (EVP_PKEY *)ossl_b2i_bio(in,&local_14);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pEVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



EVP_PKEY * b2i_PublicKey_bio(BIO *in)

{
  EVP_PKEY *pEVar1;
  long in_FS_OFFSET;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = 1;
  pEVar1 = (EVP_PKEY *)ossl_b2i_bio(in,&local_14);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pEVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int i2b_PrivateKey_bio(BIO *out,EVP_PKEY *pk)

{
  int iVar1;
  
  iVar1 = do_i2b_bio(out,pk,0);
  return iVar1;
}



int i2b_PublicKey_bio(BIO *out,EVP_PKEY *pk)

{
  int iVar1;
  
  iVar1 = do_i2b_bio(out,pk,1);
  return iVar1;
}



undefined8
ossl_do_PVK_header(undefined8 *param_1,uint param_2,int param_3,int *param_4,uint *param_5,
                  uint *param_6)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  
  piVar2 = (int *)*param_1;
  if (param_3 == 0) {
    if (param_2 < 0x18) {
      ERR_new();
      uVar4 = 0x306;
      goto LAB_00102331;
    }
    if (*piVar2 != -0x4f4a0ee2) {
      ERR_new();
      ERR_set_debug("crypto/pem/pvkfmt.c",0x30b,"ossl_do_PVK_header");
      ERR_set_error(9,0x74,0);
      return 0;
    }
    iVar3 = piVar2[2];
    piVar2 = piVar2 + 1;
  }
  else {
    if (param_2 < 0x14) {
      ERR_new();
      uVar4 = 0x301;
LAB_00102331:
      ERR_set_debug("crypto/pem/pvkfmt.c",uVar4,"ossl_do_PVK_header");
      ERR_set_error(9,0x7d,0);
      return 0;
    }
    iVar3 = piVar2[1];
  }
  if (iVar3 == 1) {
    iVar3 = 0;
    if (*param_4 == 1) {
      ERR_new();
      ERR_set_debug("crypto/pem/pvkfmt.c",0x315,"ossl_do_PVK_header");
      ERR_set_error(9,0x84,0);
      return 0;
    }
  }
  else {
    if (iVar3 != 2) {
      ERR_new();
      ERR_set_debug("crypto/pem/pvkfmt.c",0x322,"ossl_do_PVK_header");
      ERR_set_error(9,0x85,0);
      return 0;
    }
    iVar3 = 1;
    if (*param_4 == 0) {
      ERR_new();
      ERR_set_debug("crypto/pem/pvkfmt.c",0x31c,"ossl_do_PVK_header");
      ERR_set_error(9,0x83,0);
      return 0;
    }
  }
  *param_4 = iVar3;
  iVar3 = piVar2[2];
  *param_5 = piVar2[3];
  uVar1 = piVar2[4];
  *param_6 = uVar1;
  if ((uVar1 < 0x19001) && (*param_5 < 0x2801)) {
    if ((iVar3 == 0) || (*param_5 != 0)) {
      *param_1 = piVar2 + 5;
      return 1;
    }
    ERR_new();
    ERR_set_debug("crypto/pem/pvkfmt.c",0x32d,"ossl_do_PVK_header");
    ERR_set_error(9,0x79,0);
  }
  return 0;
}



undefined8
do_PVK_key_bio(BIO *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  int iVar2;
  undefined1 *data;
  undefined8 uVar3;
  long in_FS_OFFSET;
  int local_68;
  int local_64;
  undefined1 *local_60;
  undefined1 local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = BIO_read(param_1,local_58,0x18);
  if (iVar1 == 0x18) {
    local_60 = local_58;
    iVar1 = ossl_do_PVK_header(&local_60,0x18,0,param_4,&local_68,&local_64);
    if (iVar1 != 0) {
      iVar1 = local_68 + local_64;
      data = (undefined1 *)CRYPTO_malloc(iVar1,"crypto/pem/pvkfmt.c",0x3c8);
      if (data != (undefined1 *)0x0) {
        local_60 = data;
        iVar2 = BIO_read(param_1,data,iVar1);
        if (iVar2 == iVar1) {
          uVar3 = do_PVK_body_key_isra_0
                            (local_60,local_68,local_64,param_2,param_3,param_4,param_5,param_6,
                             param_7);
        }
        else {
          ERR_new();
          uVar3 = 0;
          ERR_set_debug("crypto/pem/pvkfmt.c",0x3cd,"do_PVK_key_bio");
          ERR_set_error(9,0x7c,0);
        }
        CRYPTO_clear_free(data,(long)iVar1,"crypto/pem/pvkfmt.c",0x3d3);
        goto LAB_0010253a;
      }
    }
  }
  else {
    ERR_new();
    ERR_set_debug("crypto/pem/pvkfmt.c",0x3c0,"do_PVK_key_bio");
    ERR_set_error(9,0x7c,0);
  }
  uVar3 = 0;
LAB_0010253a:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void b2i_DSA_PVK_bio_ex(void)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  do_PVK_key_bio();
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void b2i_DSA_PVK_bio(void)

{
  b2i_DSA_PVK_bio_ex();
  return;
}



void b2i_RSA_PVK_bio_ex(void)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  do_PVK_key_bio();
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void b2i_RSA_PVK_bio(void)

{
  b2i_RSA_PVK_bio_ex();
  return;
}



/* WARNING: Removing unreachable block (ram,0x0010271a) */

void b2i_PVK_bio_ex(void)

{
  long lVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined8 uStack_20;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = do_PVK_key_bio();
  evp_pkey_new0_key(uVar2,0,0,uStack_20);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



EVP_PKEY * b2i_PVK_bio(BIO *in,undefined1 *cb,void *u)

{
  EVP_PKEY *pEVar1;
  
  pEVar1 = (EVP_PKEY *)b2i_PVK_bio_ex();
  return pEVar1;
}



int i2b_PVK_bio_ex(BIO *param_1)

{
  void *ptr;
  int len;
  int iVar1;
  long in_FS_OFFSET;
  void *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = (void *)0x0;
  len = i2b_PVK_constprop_0(&local_38);
  ptr = local_38;
  if (-1 < len) {
    iVar1 = BIO_write(param_1,local_38,len);
    CRYPTO_free(ptr);
    if (len == iVar1) goto LAB_001027bf;
    ERR_new();
    ERR_set_debug("crypto/pem/pvkfmt.c",0x478,__func___1);
    ERR_set_error(9,0x76,0);
  }
  iVar1 = -1;
LAB_001027bf:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int i2b_PVK_bio(BIO *out,EVP_PKEY *pk,int enclevel,undefined1 *cb,void *u)

{
  int iVar1;
  
  iVar1 = i2b_PVK_bio_ex();
  return iVar1;
}


