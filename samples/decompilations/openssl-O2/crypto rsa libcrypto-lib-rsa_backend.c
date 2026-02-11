
undefined8 collect_numbers(long param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  BIGNUM *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0) {
LAB_001000a9:
    uVar4 = 0;
  }
  else {
    lVar3 = *param_3;
    plVar1 = param_3 + 1;
    while (lVar3 != 0) {
      lVar3 = OSSL_PARAM_locate_const(param_2);
      if (lVar3 != 0) {
        local_38 = (BIGNUM *)0x0;
        iVar2 = OSSL_PARAM_get_BN(lVar3,&local_38);
        if (iVar2 == 0) goto LAB_001000a9;
        iVar2 = OPENSSL_sk_push(param_1,local_38);
        if (iVar2 == 0) {
          BN_clear_free(local_38);
          goto LAB_001000a9;
        }
      }
      lVar3 = *plVar1;
      plVar1 = plVar1 + 1;
    }
    uVar4 = 1;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 ossl_rsa_fromdata(long param_1,undefined8 param_2,int param_3)

{
  BIGNUM *pBVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  BN_CTX *c;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long in_FS_OFFSET;
  long local_80;
  int local_6c;
  BIGNUM *local_68;
  BIGNUM *local_60;
  BIGNUM *local_58;
  BIGNUM *local_50;
  BIGNUM *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_6c = 0;
  local_68 = (BIGNUM *)0x0;
  local_60 = (BIGNUM *)0x0;
  local_58 = (BIGNUM *)0x0;
  local_50 = (BIGNUM *)0x0;
  local_48 = (BIGNUM *)0x0;
  if (param_1 != 0) {
    lVar6 = OSSL_PARAM_locate_const(param_2,&_LC0);
    lVar7 = OSSL_PARAM_locate_const(param_2,&_LC1);
    if ((((lVar6 == 0) || (iVar2 = OSSL_PARAM_get_BN(lVar6,&local_58), lVar7 == 0)) || (iVar2 == 0))
       || (iVar2 = OSSL_PARAM_get_BN(lVar7,&local_50), iVar2 == 0)) {
      ERR_new();
      uVar11 = 0x53;
LAB_00100211:
      ERR_set_debug("crypto/rsa/rsa_backend.c",uVar11,"ossl_rsa_fromdata");
      ERR_set_error(4,0xc0102,0);
LAB_00100230:
      c = (BN_CTX *)0x0;
      uVar9 = 0;
      uVar8 = 0;
      uVar11 = 0;
    }
    else {
      if (param_3 == 0) {
        local_80 = 0;
        c = (BN_CTX *)0x0;
        goto LAB_001002bf;
      }
      lVar6 = OSSL_PARAM_locate_const(param_2,"rsa-derive-from-pq");
      if ((lVar6 != 0) && (iVar2 = OSSL_PARAM_get_int(lVar6,&local_6c), iVar2 == 0))
      goto LAB_00100230;
      local_80 = OSSL_PARAM_locate_const(param_2,&_LC4);
      if ((local_80 != 0) && (iVar2 = OSSL_PARAM_get_BN(local_80,&local_48), iVar2 == 0)) {
        ERR_new();
        uVar11 = 0x61;
        goto LAB_00100211;
      }
      c = (BN_CTX *)0x0;
      if (local_6c == 0) {
LAB_001002bf:
        pBVar1 = local_48;
        iVar2 = RSA_set0_key(param_1,local_58,local_50,local_48);
        if (iVar2 == 0) {
          uVar9 = 0;
          uVar8 = 0;
          uVar11 = 0;
        }
        else {
          local_48 = (BIGNUM *)0x0;
          local_50 = (BIGNUM *)0x0;
          local_58 = (BIGNUM *)0x0;
          if (pBVar1 == (BIGNUM *)0x0) {
            uVar9 = 0;
            uVar8 = 0;
            uVar11 = 0;
LAB_001003e0:
            iVar2 = ossl_rsa_check_factors(param_1);
            if (iVar2 != 0) {
              BN_clear_free(local_68);
              BN_clear_free(local_60);
              OPENSSL_sk_free(uVar11);
              OPENSSL_sk_free(uVar8);
              OPENSSL_sk_free(uVar9);
              BN_CTX_free(c);
              uVar11 = 1;
              goto LAB_0010028c;
            }
            ERR_new();
            ERR_set_debug("crypto/rsa/rsa_backend.c",0xe9,"ossl_rsa_fromdata");
            ERR_set_error(4,0xab,"RSA factors/exponents are too big for for n-modulus\n");
          }
          else {
            uVar11 = OPENSSL_sk_new_null();
            iVar2 = collect_numbers(uVar11,param_2,&ossl_rsa_mp_factor_names);
            if (iVar2 == 0) {
              uVar9 = 0;
              uVar8 = 0;
            }
            else {
              uVar8 = OPENSSL_sk_new_null();
              uVar9 = 0;
              iVar2 = collect_numbers(uVar8,param_2,&ossl_rsa_mp_exp_names);
              if (iVar2 != 0) {
                uVar9 = OPENSSL_sk_new_null();
                iVar2 = collect_numbers(uVar9,param_2,&ossl_rsa_mp_coeff_names);
                if (iVar2 != 0) {
                  if (((local_6c == 0) || (iVar2 = OPENSSL_sk_num(uVar8), iVar2 != 0)) ||
                     (iVar2 = OPENSSL_sk_num(uVar9), iVar2 != 0)) {
                    iVar2 = OPENSSL_sk_num(uVar11);
                    if ((iVar2 == 0) ||
                       (iVar2 = ossl_rsa_set0_all_params(param_1,uVar11,uVar8,uVar9), iVar2 != 0))
                    goto LAB_001003af;
                  }
                  else {
                    iVar2 = OPENSSL_sk_num(uVar11);
                    if (iVar2 < 2) {
                      ERR_new();
                      uVar12 = 0x8c;
                    }
                    else {
                      iVar2 = OPENSSL_sk_num(uVar11);
                      if ((local_80 != 0) || (iVar2 < 3)) {
                        iVar2 = OPENSSL_sk_num(uVar11);
                        if (iVar2 == 2) {
                          uVar12 = OPENSSL_sk_value(uVar11,1);
                          uVar10 = OPENSSL_sk_value(uVar11,0);
                          iVar2 = RSA_set0_factors(param_1,uVar10,uVar12);
                          if (iVar2 == 0) {
                            ERR_new();
                            uVar12 = 0x9f;
                          }
                          else {
                            OPENSSL_sk_pop(uVar11);
                            OPENSSL_sk_pop(uVar11);
                            uVar3 = RSA_bits(param_1);
                            iVar2 = ossl_rsa_sp800_56b_derive_params_from_pq(param_1,uVar3,0,c);
                            if (iVar2 != 0) goto LAB_001003af;
                            ERR_new();
                            uVar12 = 0xb2;
                          }
                        }
                        else {
                          uVar12 = *(undefined8 *)(param_1 + 0x30);
                          uVar3 = OPENSSL_sk_num(uVar11);
                          uVar4 = RSA_bits(param_1);
                          iVar2 = ossl_rsa_multiprime_derive
                                            (param_1,uVar4,uVar3,uVar12,uVar11,uVar8);
                          if (iVar2 == 0) {
                            ERR_new();
                            uVar12 = 0xbf;
                          }
                          else {
                            iVar2 = ossl_rsa_set0_all_params(param_1,uVar11,uVar8,uVar9);
                            if (iVar2 != 0) {
LAB_001003af:
                              iVar2 = OPENSSL_sk_num(uVar11);
                              if (((iVar2 == 0) && (iVar2 = OPENSSL_sk_num(uVar8), iVar2 == 0)) &&
                                 (iVar2 = OPENSSL_sk_num(uVar9), iVar2 == 0)) goto LAB_001003e0;
                              ERR_new();
                              ERR_set_debug("crypto/rsa/rsa_backend.c",0xe0,"ossl_rsa_fromdata");
                              uVar3 = OPENSSL_sk_num(uVar9);
                              uVar4 = OPENSSL_sk_num(uVar8);
                              uVar5 = OPENSSL_sk_num(uVar11);
                              ERR_set_error(4,0xc0103,
                                            "There are %d, %d, %d elements left on our factors, exps, coeffs stacks\n"
                                            ,uVar5,uVar4,uVar3);
                              goto LAB_0010023c;
                            }
                            ERR_new();
                            uVar12 = 200;
                          }
                        }
                        ERR_set_debug("crypto/rsa/rsa_backend.c",uVar12,"ossl_rsa_fromdata");
                        ERR_set_error(4,0xc0103,0);
                        goto LAB_0010023c;
                      }
                      ERR_new();
                      uVar12 = 0x96;
                    }
                    ERR_set_debug("crypto/rsa/rsa_backend.c",uVar12,"ossl_rsa_fromdata");
                    ERR_set_error(4,0xc0102,0);
                  }
                }
              }
            }
          }
        }
      }
      else {
        c = (BN_CTX *)BN_CTX_new_ex(*(undefined8 *)(param_1 + 8));
        if (c == (BN_CTX *)0x0) goto LAB_00100230;
        lVar6 = OSSL_PARAM_locate_const(param_2,"rsa-factor1");
        lVar7 = OSSL_PARAM_locate_const(param_2,"rsa-factor2");
        if (((lVar6 != 0) && (iVar2 = OSSL_PARAM_get_BN(lVar6,&local_68), lVar7 != 0)) &&
           ((iVar2 != 0 && (iVar2 = OSSL_PARAM_get_BN(lVar7,&local_60), iVar2 != 0))))
        goto LAB_001002bf;
        ERR_new();
        uVar9 = 0;
        uVar8 = 0;
        uVar11 = 0;
        ERR_set_debug("crypto/rsa/rsa_backend.c",0x6f,"ossl_rsa_fromdata");
        ERR_set_error(4,0xc0102,0);
      }
    }
LAB_0010023c:
    BN_free(local_58);
    BN_free(local_50);
    BN_free(local_48);
    OPENSSL_sk_pop_free(uVar11,BN_clear_free);
    OPENSSL_sk_pop_free(uVar8,BN_clear_free);
    OPENSSL_sk_pop_free(uVar9,BN_clear_free);
    BN_CTX_free(c);
  }
  uVar11 = 0;
LAB_0010028c:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar11;
}



bool ossl_rsa_todata(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long in_FS_OFFSET;
  bool bVar5;
  long local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  lVar2 = OPENSSL_sk_new_null();
  lVar3 = OPENSSL_sk_new_null();
  lVar4 = OPENSSL_sk_new_null();
  if ((((param_1 != 0) && (lVar2 != 0)) && (lVar3 != 0)) && (lVar4 != 0)) {
    RSA_get0_key(param_1,&local_50,&local_48,&local_58);
    ossl_rsa_get0_all_params(param_1,lVar2,lVar3,lVar4);
    iVar1 = ossl_param_build_set_bn(param_2,param_3,&_LC0,local_50);
    if (iVar1 != 0) {
      iVar1 = ossl_param_build_set_bn(param_2,param_3,&_LC1,local_48);
      if (iVar1 != 0) {
        bVar5 = true;
        if ((param_4 == 0) || (local_58 == 0)) goto LAB_00100843;
        iVar1 = ossl_param_build_set_bn(param_2,param_3,&_LC4);
        if (iVar1 != 0) {
          iVar1 = ossl_param_build_set_multi_key_bn(param_2,param_3,&ossl_rsa_mp_factor_names,lVar2)
          ;
          if (iVar1 != 0) {
            iVar1 = ossl_param_build_set_multi_key_bn(param_2,param_3,&ossl_rsa_mp_exp_names,lVar3);
            if (iVar1 != 0) {
              iVar1 = ossl_param_build_set_multi_key_bn
                                (param_2,param_3,&ossl_rsa_mp_coeff_names,lVar4);
              bVar5 = iVar1 != 0;
              goto LAB_00100843;
            }
          }
        }
      }
    }
  }
  bVar5 = false;
LAB_00100843:
  OPENSSL_sk_free(lVar2);
  OPENSSL_sk_free(lVar3);
  OPENSSL_sk_free(lVar4);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool ossl_rsa_pss_params_30_todata(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  char *pcVar11;
  bool bVar12;
  
  iVar1 = ossl_rsa_pss_params_30_is_unrestricted();
  if (iVar1 != 0) {
    return true;
  }
  iVar1 = ossl_rsa_pss_params_30_hashalg(param_1);
  iVar2 = ossl_rsa_pss_params_30_maskgenalg(param_1);
  iVar3 = ossl_rsa_pss_params_30_maskgenhashalg(param_1);
  uVar4 = ossl_rsa_pss_params_30_saltlen(param_1);
  iVar5 = ossl_rsa_pss_params_30_hashalg(0);
  iVar6 = ossl_rsa_pss_params_30_maskgenalg(0);
  iVar7 = ossl_rsa_pss_params_30_maskgenhashalg(0);
  if (iVar1 == iVar5) {
    if (iVar2 == iVar6) {
      if (iVar3 == iVar7) goto LAB_00100a18;
      lVar10 = ossl_rsa_oaeppss_nid2name(iVar3);
      goto LAB_00100b26;
    }
    lVar8 = ossl_rsa_oaeppss_nid2name(iVar2);
    if (iVar3 != iVar7) {
      lVar10 = ossl_rsa_oaeppss_nid2name(iVar3);
      lVar9 = lVar8;
      goto LAB_00100b04;
    }
LAB_00100a01:
    pcVar11 = "mgf";
    lVar10 = lVar8;
joined_r0x00100a6e:
    if (lVar10 == 0) goto LAB_00100a18;
  }
  else {
    lVar9 = ossl_rsa_oaeppss_nid2name(iVar1);
    if (iVar2 == iVar6) {
      if (iVar3 == iVar7) {
        pcVar11 = "digest";
        lVar10 = lVar9;
        goto joined_r0x00100a6e;
      }
      lVar10 = ossl_rsa_oaeppss_nid2name(iVar3);
      if (lVar9 == 0) goto LAB_00100b26;
      pcVar11 = "digest";
    }
    else {
      lVar8 = ossl_rsa_oaeppss_nid2name(iVar2);
      if (iVar3 == iVar7) {
        lVar10 = 0;
        if (lVar9 == 0) goto LAB_00100a01;
      }
      else {
        lVar10 = ossl_rsa_oaeppss_nid2name(iVar3);
        bVar12 = lVar9 == 0;
        lVar9 = lVar8;
        if (bVar12) goto LAB_00100b04;
      }
      iVar1 = ossl_param_build_set_utf8_string(param_2,param_3,"digest");
      lVar9 = lVar8;
      if (iVar1 == 0) {
        return false;
      }
LAB_00100b04:
      if (lVar9 == 0) goto LAB_00100b26;
      pcVar11 = "mgf";
    }
    iVar1 = ossl_param_build_set_utf8_string(param_2,param_3,pcVar11,lVar9);
    if (iVar1 == 0) {
      return false;
    }
LAB_00100b26:
    if (lVar10 == 0) goto LAB_00100a18;
    pcVar11 = "mgf1-digest";
  }
  iVar1 = ossl_param_build_set_utf8_string(param_2,param_3,pcVar11,lVar10);
  if (iVar1 == 0) {
    return false;
  }
LAB_00100a18:
  iVar1 = ossl_param_build_set_int(param_2,param_3,"saltlen",uVar4);
  return iVar1 != 0;
}



uint ossl_rsa_pss_params_30_fromdata
               (long param_1,int *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long in_FS_OFFSET;
  ulong local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0) goto LAB_00100cd8;
  lVar4 = OSSL_PARAM_locate_const(param_3,"properties");
  lVar5 = OSSL_PARAM_locate_const(param_3,"digest");
  lVar6 = OSSL_PARAM_locate_const(param_3,&_LC11);
  lVar7 = OSSL_PARAM_locate_const(param_3,"mgf1-digest");
  lVar8 = OSSL_PARAM_locate_const(param_3,"saltlen");
  if (lVar4 == 0) {
LAB_00100c3a:
    if (*param_2 != 0) goto LAB_00100c90;
LAB_00100c41:
    if (lVar5 != 0 || lVar6 != 0) {
      iVar1 = ossl_rsa_pss_params_30_set_defaults(param_1);
      if (iVar1 != 0) {
        *param_2 = 1;
        goto LAB_00100c90;
      }
      goto LAB_00100cd8;
    }
    if (lVar8 != 0 || lVar7 != 0) {
      iVar1 = ossl_rsa_pss_params_30_set_defaults(param_1);
      if (iVar1 == 0) goto LAB_00100cd8;
      *param_2 = 1;
      goto LAB_00100c6c;
    }
    uVar3 = 1;
    lVar7 = 0;
    lVar5 = 0;
  }
  else {
    if (*(int *)(lVar4 + 8) != 4) {
      lVar4 = 0;
      goto LAB_00100c3a;
    }
    lVar4 = *(long *)(lVar4 + 0x10);
    if (*param_2 == 0) goto LAB_00100c41;
LAB_00100c90:
    if (lVar6 != 0) {
      uVar2 = ossl_rsa_pss_params_30_maskgenalg(0);
      local_48 = 0;
      if (*(int *)(lVar6 + 8) == 4) {
        local_48 = *(ulong *)(lVar6 + 0x10);
      }
      else {
        iVar1 = OSSL_PARAM_get_utf8_ptr(lVar6,&local_48);
        if (iVar1 == 0) goto LAB_00100cd8;
      }
      uVar9 = ossl_rsa_mgf_nid2name(uVar2);
      iVar1 = OPENSSL_strcasecmp(*(undefined8 *)(lVar6 + 0x10),uVar9);
      if (iVar1 != 0) {
LAB_00100cd8:
        uVar3 = 0;
        goto LAB_00100cdb;
      }
    }
    if (lVar5 == 0) {
LAB_00100c6c:
      lVar5 = 0;
LAB_00100d65:
      if (lVar7 == 0) {
LAB_00100dbc:
        if (lVar8 == 0) {
          uVar3 = 1;
        }
        else {
          uVar3 = OSSL_PARAM_get_int(lVar8,&local_48);
          if (uVar3 != 0) {
            iVar1 = ossl_rsa_pss_params_30_set_saltlen(param_1,local_48 & 0xffffffff);
            uVar3 = (uint)(iVar1 != 0);
          }
        }
        goto LAB_00100e43;
      }
      local_48 = 0;
      if (*(int *)(lVar7 + 8) == 4) {
        local_48 = *(ulong *)(lVar7 + 0x10);
LAB_00100d89:
        lVar7 = EVP_MD_fetch(param_4,local_48,lVar4);
        if (lVar7 == 0) goto LAB_00100e88;
        uVar2 = ossl_rsa_oaeppss_md2nid(lVar7);
        iVar1 = ossl_rsa_pss_params_30_set_maskgenhashalg(param_1,uVar2);
        if (iVar1 != 0) goto LAB_00100dbc;
      }
      else {
        iVar1 = OSSL_PARAM_get_utf8_ptr(lVar6,&local_48);
        if (iVar1 != 0) goto LAB_00100d89;
LAB_00100e88:
        lVar7 = 0;
      }
      uVar3 = 0;
    }
    else {
      local_48 = 0;
      if (*(int *)(lVar5 + 8) == 4) {
        local_48 = *(ulong *)(lVar5 + 0x10);
LAB_00100d32:
        lVar5 = EVP_MD_fetch(param_4,local_48,lVar4);
        if (lVar5 == 0) goto LAB_00100e60;
        uVar2 = ossl_rsa_oaeppss_md2nid(lVar5);
        iVar1 = ossl_rsa_pss_params_30_set_hashalg(param_1,uVar2);
        if (iVar1 != 0) goto LAB_00100d65;
      }
      else {
        iVar1 = OSSL_PARAM_get_utf8_ptr(lVar6,&local_48);
        if (iVar1 != 0) goto LAB_00100d32;
LAB_00100e60:
        lVar5 = 0;
      }
      uVar3 = 0;
      lVar7 = 0;
    }
  }
LAB_00100e43:
  EVP_MD_free(lVar5);
  EVP_MD_free(lVar7);
LAB_00100cdb:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



bool ossl_rsa_is_foreign(RSA *param_1)

{
  RSA_METHOD *pRVar1;
  RSA_METHOD *pRVar2;
  
  if (param_1->n != (BIGNUM *)0x0) {
    return true;
  }
  pRVar1 = RSA_get_method(param_1);
  pRVar2 = (RSA_METHOD *)RSA_PKCS1_OpenSSL();
  return pRVar1 != pRVar2;
}



RSA * ossl_rsa_dup(long param_1,ulong param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  RSA *r;
  BN_MONT_CTX *pBVar6;
  BIGNUM *pBVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong *puVar10;
  int iVar11;
  
  iVar5 = ossl_rsa_is_foreign();
  if (iVar5 != 0) {
    return (RSA *)0x0;
  }
  r = (RSA *)ossl_rsa_new_with_ctx(*(undefined8 *)(param_1 + 8));
  if (r == (RSA *)0x0) {
    return (RSA *)0x0;
  }
  if ((param_2 & 3) == 0) {
LAB_00100f47:
    uVar2 = *(undefined8 *)(param_1 + 0x68);
    uVar3 = *(undefined8 *)(param_1 + 0x70);
    *(undefined4 *)&r->meth = *(undefined4 *)(param_1 + 0x10);
    uVar1 = *(undefined4 *)(param_1 + 0xa4);
    *(undefined8 *)&(r->ex_data).dummy = uVar2;
    r->references = (int)uVar3;
    r->flags = (int)((ulong)uVar3 >> 0x20);
    *(undefined4 *)((long)&r->mt_blinding + 4) = uVar1;
    *(undefined4 *)&r->_method_mod_n = *(undefined4 *)(param_1 + 0x78);
  }
  else {
    if (*(BIGNUM **)(param_1 + 0x28) != (BIGNUM *)0x0) {
      pBVar7 = BN_dup(*(BIGNUM **)(param_1 + 0x28));
      r->e = pBVar7;
      if (pBVar7 == (BIGNUM *)0x0) goto LAB_001011ac;
    }
    if (*(BIGNUM **)(param_1 + 0x30) != (BIGNUM *)0x0) {
      pBVar7 = BN_dup(*(BIGNUM **)(param_1 + 0x30));
      r->d = pBVar7;
      if (pBVar7 == (BIGNUM *)0x0) goto LAB_001011ac;
    }
    if ((param_2 & 1) == 0) goto LAB_00100f47;
    if (*(BIGNUM **)(param_1 + 0x38) != (BIGNUM *)0x0) {
      pBVar7 = BN_dup(*(BIGNUM **)(param_1 + 0x38));
      r->p = pBVar7;
      if (pBVar7 == (BIGNUM *)0x0) goto LAB_001011ac;
    }
    if (*(BIGNUM **)(param_1 + 0x40) != (BIGNUM *)0x0) {
      pBVar7 = BN_dup(*(BIGNUM **)(param_1 + 0x40));
      r->q = pBVar7;
      if (pBVar7 == (BIGNUM *)0x0) goto LAB_001011ac;
    }
    if (*(BIGNUM **)(param_1 + 0x48) != (BIGNUM *)0x0) {
      pBVar7 = BN_dup(*(BIGNUM **)(param_1 + 0x48));
      r->dmp1 = pBVar7;
      if (pBVar7 == (BIGNUM *)0x0) goto LAB_001011ac;
    }
    if (*(BIGNUM **)(param_1 + 0x50) != (BIGNUM *)0x0) {
      pBVar7 = BN_dup(*(BIGNUM **)(param_1 + 0x50));
      r->dmq1 = pBVar7;
      if (pBVar7 == (BIGNUM *)0x0) goto LAB_001011ac;
    }
    if (*(BIGNUM **)(param_1 + 0x58) != (BIGNUM *)0x0) {
      pBVar7 = BN_dup(*(BIGNUM **)(param_1 + 0x58));
      r->iqmp = pBVar7;
      if (pBVar7 == (BIGNUM *)0x0) goto LAB_001011ac;
    }
    if (*(BIGNUM **)(param_1 + 0x60) != (BIGNUM *)0x0) {
      pBVar7 = BN_dup(*(BIGNUM **)(param_1 + 0x60));
      (r->ex_data).sk = (stack_st_void *)pBVar7;
      if (pBVar7 == (BIGNUM *)0x0) goto LAB_001011ac;
    }
    uVar3 = *(undefined8 *)(param_1 + 0x68);
    uVar4 = *(undefined8 *)(param_1 + 0x70);
    uVar2 = *(undefined8 *)(param_1 + 0x88);
    *(undefined4 *)&r->meth = *(undefined4 *)(param_1 + 0x10);
    uVar1 = *(undefined4 *)(param_1 + 0xa4);
    *(undefined8 *)&(r->ex_data).dummy = uVar3;
    r->references = (int)uVar4;
    r->flags = (int)((ulong)uVar4 >> 0x20);
    *(undefined4 *)((long)&r->mt_blinding + 4) = uVar1;
    *(undefined4 *)&r->_method_mod_n = *(undefined4 *)(param_1 + 0x78);
    iVar5 = OPENSSL_sk_num(uVar2);
    if (0 < iVar5) {
      pBVar6 = (BN_MONT_CTX *)OPENSSL_sk_new_reserve(0,iVar5);
      r->_method_mod_q = pBVar6;
      iVar11 = 0;
      if (pBVar6 == (BN_MONT_CTX *)0x0) goto LAB_001011ac;
      do {
        puVar8 = (undefined8 *)CRYPTO_zalloc(0x28,"crypto/rsa/rsa_backend.c",0x210);
        if (puVar8 == (undefined8 *)0x0) goto LAB_001011ac;
        OPENSSL_sk_push(r->_method_mod_q,puVar8);
        puVar9 = (undefined8 *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x88),iVar11);
        if ((BIGNUM *)*puVar9 != (BIGNUM *)0x0) {
          pBVar7 = BN_dup((BIGNUM *)*puVar9);
          *puVar8 = pBVar7;
          if (pBVar7 == (BIGNUM *)0x0) goto LAB_001011ac;
        }
        if ((BIGNUM *)puVar9[1] != (BIGNUM *)0x0) {
          pBVar7 = BN_dup((BIGNUM *)puVar9[1]);
          puVar8[1] = pBVar7;
          if (pBVar7 == (BIGNUM *)0x0) goto LAB_001011ac;
        }
        if ((BIGNUM *)puVar9[2] != (BIGNUM *)0x0) {
          pBVar7 = BN_dup((BIGNUM *)puVar9[2]);
          puVar8[2] = pBVar7;
          if (pBVar7 == (BIGNUM *)0x0) goto LAB_001011ac;
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 != iVar5);
      iVar5 = ossl_rsa_multip_calc_product(r);
      if (iVar5 == 0) goto LAB_001011ac;
    }
  }
  if (*(long *)(param_1 + 0x80) != 0) {
    pBVar6 = (BN_MONT_CTX *)RSA_PSS_PARAMS_dup();
    r->_method_mod_p = pBVar6;
    if ((*(long *)(*(long *)(param_1 + 0x80) + 8) != 0) && ((pBVar6->RR).d == (ulong *)0x0)) {
      puVar10 = (ulong *)ossl_x509_algor_mgf1_decode();
      (pBVar6->N).d = puVar10;
      if ((r->_method_mod_p->N).d == (ulong *)0x0) goto LAB_001011ac;
    }
  }
  iVar5 = CRYPTO_dup_ex_data(9,(CRYPTO_EX_DATA *)&r->bignum_data,(CRYPTO_EX_DATA *)(param_1 + 0x90))
  ;
  if (iVar5 != 0) {
    return r;
  }
LAB_001011ac:
  RSA_free(r);
  return (RSA *)0x0;
}



RSA_PSS_PARAMS * ossl_rsa_pss_decode(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  RSA_PSS_PARAMS *a;
  X509_ALGOR *pXVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = RSA_PSS_PARAMS_it();
  a = (RSA_PSS_PARAMS *)ASN1_TYPE_unpack_sequence(uVar2,uVar1);
  if (a != (RSA_PSS_PARAMS *)0x0) {
    if (a->maskGenAlgorithm == (X509_ALGOR *)0x0) {
      return a;
    }
    pXVar3 = (X509_ALGOR *)ossl_x509_algor_mgf1_decode();
    a[1].hashAlgorithm = pXVar3;
    if (pXVar3 != (X509_ALGOR *)0x0) {
      return a;
    }
    RSA_PSS_PARAMS_free(a);
  }
  return (RSA_PSS_PARAMS *)0x0;
}



undefined8
ossl_rsa_pss_get_param_unverified
          (undefined8 *param_1,long *param_2,long *param_3,undefined4 *param_4,undefined4 *param_5)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  ASN1_INTEGER *a;
  long in_FS_OFFSET;
  undefined1 auStack_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ossl_rsa_pss_params_30_set_defaults(auStack_58);
  if (param_1 != (undefined8 *)0x0) {
    lVar2 = ossl_x509_algor_get_md(*param_1);
    *param_2 = lVar2;
    if (lVar2 != 0) {
      lVar2 = ossl_x509_algor_get_md(param_1[4]);
      *param_3 = lVar2;
      if (lVar2 != 0) {
        if ((ASN1_INTEGER *)param_1[2] == (ASN1_INTEGER *)0x0) {
          uVar1 = ossl_rsa_pss_params_30_saltlen(auStack_58);
          a = (ASN1_INTEGER *)param_1[3];
          *param_4 = uVar1;
          if (a == (ASN1_INTEGER *)0x0) goto LAB_0010131c;
LAB_001012ce:
          lVar2 = ASN1_INTEGER_get(a);
          *param_5 = (int)lVar2;
        }
        else {
          lVar2 = ASN1_INTEGER_get((ASN1_INTEGER *)param_1[2]);
          a = (ASN1_INTEGER *)param_1[3];
          *param_4 = (int)lVar2;
          if (a != (ASN1_INTEGER *)0x0) goto LAB_001012ce;
LAB_0010131c:
          uVar1 = ossl_rsa_pss_params_30_trailerfield(auStack_58);
          *param_5 = uVar1;
        }
        uVar3 = 1;
        goto LAB_001012e2;
      }
    }
  }
  uVar3 = 0;
LAB_001012e2:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 ossl_rsa_param_decode(long param_1,X509_ALGOR *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  RSA_PSS_PARAMS *a;
  long lVar5;
  undefined8 *puVar6;
  long in_FS_OFFSET;
  int local_74;
  undefined4 local_70;
  undefined4 local_6c;
  ASN1_OBJECT *local_68;
  void *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  X509_ALGOR_get0(&local_68,&local_74,&local_60,param_2);
  iVar1 = OBJ_obj2nid(local_68);
  if ((iVar1 == 0x390) && (local_74 != -1)) {
    if (local_74 != 0x10) {
      ERR_new();
      ERR_set_debug("crypto/rsa/rsa_backend.c",0x29d,"ossl_rsa_param_decode");
      ERR_set_error(4,0x95,0);
LAB_00101500:
      uVar4 = 0;
      goto LAB_00101388;
    }
    a = (RSA_PSS_PARAMS *)ossl_rsa_pss_decode(param_2);
    if (a != (RSA_PSS_PARAMS *)0x0) {
      iVar1 = ossl_rsa_set0_pss_params(param_1,a);
      if (iVar1 != 0) {
        if (param_1 != 0) {
          lVar5 = RSA_get0_pss_params(param_1);
          if (lVar5 != 0) {
            puVar6 = (undefined8 *)ossl_rsa_get0_pss_params_30(param_1);
            if (puVar6 != (undefined8 *)0x0) {
              local_58 = 0;
              local_50 = 0;
              iVar1 = ossl_rsa_pss_get_param_unverified
                                (lVar5,&local_58,&local_50,&local_70,&local_6c);
              if (iVar1 != 0) {
                uVar2 = EVP_MD_get_type(local_58);
                uVar3 = EVP_MD_get_type(local_50);
                iVar1 = ossl_rsa_pss_params_30_set_defaults(&local_48);
                if (iVar1 != 0) {
                  iVar1 = ossl_rsa_pss_params_30_set_hashalg(&local_48,uVar2);
                  if (iVar1 != 0) {
                    iVar1 = ossl_rsa_pss_params_30_set_maskgenhashalg(&local_48,uVar3);
                    if (iVar1 != 0) {
                      iVar1 = ossl_rsa_pss_params_30_set_saltlen(&local_48,local_70);
                      if (iVar1 != 0) {
                        iVar1 = ossl_rsa_pss_params_30_set_trailerfield(&local_48,local_6c);
                        if (iVar1 != 0) {
                          *puVar6 = local_48;
                          puVar6[1] = uStack_40;
                          *(undefined4 *)(puVar6 + 2) = local_38;
                          goto LAB_0010137c;
                        }
                      }
                    }
                  }
                }
              }
              goto LAB_00101500;
            }
          }
        }
        goto LAB_0010137c;
      }
    }
    RSA_PSS_PARAMS_free(a);
    uVar4 = 0;
  }
  else {
LAB_0010137c:
    uVar4 = 1;
  }
LAB_00101388:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



RSA * ossl_rsa_key_from_pkcs8(PKCS8_PRIV_KEY_INFO *param_1)

{
  int iVar1;
  RSA *r;
  long in_FS_OFFSET;
  int local_24;
  uchar *local_20;
  X509_ALGOR *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = PKCS8_pkey_get0((ASN1_OBJECT **)0x0,&local_20,&local_24,&local_18,param_1);
  if (iVar1 != 0) {
    r = d2i_RSAPrivateKey((RSA **)0x0,&local_20,(long)local_24);
    if (r == (RSA *)0x0) {
      ERR_new();
      r = (RSA *)0x0;
      ERR_set_debug("crypto/rsa/rsa_backend.c",0x2b6,"ossl_rsa_key_from_pkcs8");
      ERR_set_error(4,0x80004,0);
      goto LAB_001015bf;
    }
    iVar1 = ossl_rsa_param_decode(r,local_18);
    if (iVar1 != 0) {
      RSA_clear_flags(r,0xf000);
      iVar1 = OBJ_obj2nid(local_18->algorithm);
      if (iVar1 == 6) {
        RSA_set_flags(r,0);
      }
      else if (iVar1 == 0x390) {
        RSA_set_flags(r,0x1000);
      }
      goto LAB_001015bf;
    }
    RSA_free(r);
  }
  r = (RSA *)0x0;
LAB_001015bf:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return r;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


