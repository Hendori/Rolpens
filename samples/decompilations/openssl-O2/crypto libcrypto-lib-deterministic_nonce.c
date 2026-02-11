
undefined8
ossl_gen_deterministic_nonce_rfc6979
          (BIGNUM *param_1,BIGNUM *param_2,undefined8 param_3,uchar *param_4,int param_5,
          undefined8 param_6,undefined8 param_7,long param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  uchar *s;
  uchar *puVar5;
  BIGNUM *pBVar6;
  BIGNUM *pBVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
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
  undefined8 local_b8 [15];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != (BIGNUM *)0x0) {
    iVar1 = BN_num_bits(param_2);
    if (iVar1 != 0) {
      iVar2 = iVar1 + 0xe;
      if (-1 < iVar1 + 7) {
        iVar2 = iVar1 + 7;
      }
      iVar2 = iVar2 >> 3;
      lVar4 = (long)(iVar2 * 3 + 8);
      s = (uchar *)CRYPTO_zalloc(lVar4,"crypto/deterministic_nonce.c",0xce);
      if (s != (uchar *)0x0) {
        lVar11 = (long)iVar2;
        s[0] = 0xff;
        s[1] = 0xff;
        s[2] = 0xff;
        s[3] = 0xff;
        s[4] = 0xff;
        s[5] = 0xff;
        s[6] = 0xff;
        s[7] = 0xff;
        puVar5 = s + 8 + lVar11;
        iVar3 = BN_bn2binpad(param_3,puVar5 + lVar11,lVar11);
        if (iVar3 < 0) {
LAB_001003fb:
          uVar8 = 0;
          lVar9 = 0;
        }
        else {
          pBVar6 = BN_new();
          if (pBVar6 == (BIGNUM *)0x0) {
            BN_free((BIGNUM *)0x0);
            goto LAB_001003fb;
          }
          pBVar7 = BN_bin2bn(param_4,param_5,pBVar6);
          if (pBVar7 == (BIGNUM *)0x0) {
LAB_001003f3:
            BN_free(pBVar6);
            goto LAB_001003fb;
          }
          iVar3 = param_5 * 8 - iVar1;
          if (0 < iVar3) {
            iVar3 = BN_rshift(pBVar6,pBVar6,iVar3);
            if (iVar3 == 0) goto LAB_001003f3;
          }
          iVar3 = BN_cmp(pBVar6,param_2);
          if (-1 < iVar3) {
            iVar3 = BN_usub(pBVar6,pBVar6,param_2);
            if (iVar3 == 0) goto LAB_001003f3;
          }
          iVar3 = BN_bn2binpad(pBVar6,puVar5,iVar2);
          BN_free(pBVar6);
          if (iVar3 < 0) goto LAB_001003fb;
          uVar8 = EVP_KDF_fetch(param_7,"HMAC-DRBG-KDF",param_8);
          lVar9 = EVP_KDF_CTX_new(uVar8);
          EVP_KDF_free(uVar8);
          if (lVar9 == 0) {
LAB_00100470:
            EVP_KDF_CTX_free(lVar9);
            goto LAB_001003fb;
          }
          puVar10 = &local_e0;
          OSSL_PARAM_construct_utf8_string(&local_138,"digest",param_6,0);
          local_108 = local_138;
          uStack_100 = uStack_130;
          local_e8 = local_118;
          local_f8 = local_128;
          uStack_f0 = uStack_120;
          if (param_8 != 0) {
            puVar10 = local_b8;
            OSSL_PARAM_construct_utf8_string(&local_138,"properties",param_8,0);
            local_c0 = local_118;
            local_e0 = local_138;
            uStack_d8 = uStack_130;
            local_d0 = local_128;
            uStack_c8 = uStack_120;
          }
          OSSL_PARAM_construct_octet_string(&local_138,"entropy",puVar5 + lVar11,lVar11);
          *puVar10 = local_138;
          puVar10[1] = uStack_130;
          puVar10[2] = local_128;
          puVar10[3] = uStack_120;
          puVar10[4] = local_118;
          OSSL_PARAM_construct_octet_string(&local_138,"nonce",puVar5,lVar11);
          puVar10[5] = local_138;
          puVar10[6] = uStack_130;
          puVar10[7] = local_128;
          puVar10[8] = uStack_120;
          puVar10[9] = local_118;
          OSSL_PARAM_construct_end(&local_138);
          puVar10[10] = local_138;
          puVar10[0xb] = uStack_130;
          puVar10[0xc] = local_128;
          puVar10[0xd] = uStack_120;
          puVar10[0xe] = local_118;
          iVar3 = EVP_KDF_CTX_set_params(lVar9,&local_108);
          if (iVar3 < 1) goto LAB_00100470;
          iVar1 = iVar2 * 8 - iVar1;
          do {
            do {
              do {
                iVar3 = EVP_KDF_derive(lVar9,s + 8,lVar11,0);
                if (iVar3 == 0) {
LAB_001003ad:
                  uVar8 = 0;
                  goto LAB_001003b0;
                }
                pBVar6 = BN_bin2bn(s,iVar2 + 8,param_1);
                if (pBVar6 == (BIGNUM *)0x0) goto LAB_001003ad;
                BN_set_flags(param_1,4);
                ossl_bn_mask_bits_fixed_top(param_1,iVar2 * 8);
                if (0 < iVar1) {
                  iVar3 = bn_rshift_fixed_top(param_1,param_1,iVar1);
                  if (iVar3 == 0) {
                    uVar8 = 0;
                    goto LAB_001003b0;
                  }
                }
                iVar3 = ossl_bn_is_word_fixed_top(param_1,0);
              } while (iVar3 != 0);
              iVar3 = ossl_bn_is_word_fixed_top(param_1,1);
            } while (iVar3 != 0);
            iVar3 = BN_ucmp(param_1,param_2);
          } while (-1 < iVar3);
          uVar8 = 1;
        }
LAB_001003b0:
        EVP_KDF_CTX_free(lVar9);
        CRYPTO_clear_free(s,lVar4,"crypto/deterministic_nonce.c",0xee);
        goto LAB_00100070;
      }
    }
  }
  uVar8 = 0;
LAB_00100070:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


