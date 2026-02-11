
/* WARNING: Type propagation algorithm not settling */

bool ossl_ec_GFp_simple_set_compressed_coordinates
               (long *param_1,undefined8 param_2,BIGNUM *param_3,int param_4,BN_CTX *param_5)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  BIGNUM *pBVar4;
  BIGNUM *r;
  BIGNUM *r_00;
  BIGNUM *ret;
  ulong uVar5;
  BIGNUM *m;
  BIGNUM *b;
  undefined8 uVar6;
  BN_CTX *c;
  bool bVar7;
  
  c = (BN_CTX *)0x0;
  if ((param_5 == (BN_CTX *)0x0) &&
     (param_5 = (BN_CTX *)BN_CTX_new_ex(param_1[0x15]), c = param_5, param_5 == (BN_CTX *)0x0)) {
    return false;
  }
  BN_CTX_start(param_5);
  pBVar4 = BN_CTX_get(param_5);
  r = BN_CTX_get(param_5);
  r_00 = BN_CTX_get(param_5);
  ret = BN_CTX_get(param_5);
  if ((ret != (BIGNUM *)0x0) &&
     (iVar2 = BN_nnmod(r_00,param_3,(BIGNUM *)param_1[8],param_5), iVar2 != 0)) {
    if (*(long *)(*param_1 + 0x120) == 0) {
      iVar2 = (**(code **)(*param_1 + 0x100))(param_1,r,param_3,param_5);
      if (iVar2 != 0) {
        iVar2 = (**(code **)(*param_1 + 0xf8))(param_1,pBVar4,r,param_3,param_5);
        goto joined_r0x00100123;
      }
    }
    else {
      iVar2 = BN_mod_sqr(r,param_3,(BIGNUM *)param_1[8],param_5);
      if (iVar2 != 0) {
        iVar2 = BN_mod_mul(pBVar4,r,param_3,(BIGNUM *)param_1[8],param_5);
joined_r0x00100123:
        if (iVar2 != 0) {
          if ((int)param_1[0xe] == 0) {
            pcVar1 = *(code **)(*param_1 + 0x120);
            if (pcVar1 == (code *)0x0) {
              iVar2 = (**(code **)(*param_1 + 0xf8))(param_1,r,param_1[0xc],r_00,param_5);
            }
            else {
              iVar2 = (*pcVar1)(param_1,r,param_1[0xc],param_5);
              if (iVar2 == 0) goto LAB_001000b0;
              iVar2 = BN_mod_mul(r,r,r_00,(BIGNUM *)param_1[8],param_5);
            }
            if (iVar2 != 0) {
              iVar2 = BN_mod_add_quick(pBVar4,pBVar4,r,(BIGNUM *)param_1[8]);
              goto joined_r0x0010018f;
            }
          }
          else {
            iVar2 = BN_mod_lshift1_quick(r,r_00,(BIGNUM *)param_1[8]);
            if ((iVar2 != 0) &&
               (iVar2 = BN_mod_add_quick(r,r,r_00,(BIGNUM *)param_1[8]), iVar2 != 0)) {
              iVar2 = BN_mod_sub_quick(pBVar4,pBVar4,r,(BIGNUM *)param_1[8]);
joined_r0x0010018f:
              if (iVar2 != 0) {
                b = (BIGNUM *)param_1[0xd];
                if (*(code **)(*param_1 + 0x120) == (code *)0x0) {
                  m = (BIGNUM *)param_1[8];
                }
                else {
                  iVar2 = (**(code **)(*param_1 + 0x120))(param_1,r,b,param_5);
                  if (iVar2 == 0) goto LAB_001000b0;
                  m = (BIGNUM *)param_1[8];
                  b = r;
                }
                iVar2 = BN_mod_add_quick(pBVar4,pBVar4,b,m);
                if (iVar2 != 0) {
                  ERR_set_mark();
                  pBVar4 = BN_mod_sqrt(ret,pBVar4,(BIGNUM *)param_1[8],param_5);
                  if (pBVar4 == (BIGNUM *)0x0) {
                    uVar5 = ERR_peek_last_error();
                    if ((((uVar5 & 0x80000000) == 0) && ((char)(uVar5 >> 0x17) == '\x03')) &&
                       (((uint)uVar5 & 0x7fffff) == 0x6f)) {
                      ERR_pop_to_mark();
                      ERR_new();
                      uVar6 = 0x70;
LAB_00100264:
                      ERR_set_debug("crypto/ec/ecp_oct.c",uVar6,
                                    "ossl_ec_GFp_simple_set_compressed_coordinates");
                      ERR_set_error(0x10,0x6e,0);
                    }
                    else {
                      ERR_clear_last_mark();
                      ERR_new();
                      ERR_set_debug("crypto/ec/ecp_oct.c",0x75,
                                    "ossl_ec_GFp_simple_set_compressed_coordinates");
                      ERR_set_error(0x10,0x80003,0);
                    }
                  }
                  else {
                    ERR_clear_last_mark();
                    uVar3 = BN_is_odd(ret);
                    if (uVar3 == (param_4 != 0)) {
LAB_00100364:
                      uVar3 = BN_is_odd(ret);
                      if (uVar3 == (param_4 != 0)) {
                        iVar2 = EC_POINT_set_affine_coordinates(param_1,param_2,r_00,ret,param_5);
                        bVar7 = iVar2 != 0;
                        goto LAB_001000b2;
                      }
                      ERR_new();
                      ERR_set_debug("crypto/ec/ecp_oct.c",0x90,
                                    "ossl_ec_GFp_simple_set_compressed_coordinates");
                      ERR_set_error(0x10,0xc0103,0);
                    }
                    else {
                      iVar2 = BN_is_zero(ret);
                      if (iVar2 == 0) {
                        iVar2 = BN_usub(ret,(BIGNUM *)param_1[8],ret);
                        if (iVar2 != 0) goto LAB_00100364;
                      }
                      else {
                        iVar2 = BN_kronecker(r_00,(BIGNUM *)param_1[8],param_5);
                        if (iVar2 != -2) {
                          if (iVar2 != 1) {
                            ERR_new();
                            uVar6 = 0x89;
                            goto LAB_00100264;
                          }
                          ERR_new();
                          ERR_set_debug("crypto/ec/ecp_oct.c",0x84,
                                        "ossl_ec_GFp_simple_set_compressed_coordinates");
                          ERR_set_error(0x10,0x6d,0);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_001000b0:
  bVar7 = false;
LAB_001000b2:
  BN_CTX_end(param_5);
  BN_CTX_free(c);
  return bVar7;
}



ulong ossl_ec_GFp_simple_point2oct
                (EC_GROUP *param_1,EC_POINT *param_2,uint param_3,BN_CTX *param_4,ulong param_5,
                BN_CTX *param_6)

{
  int iVar1;
  int iVar2;
  BIGNUM *a;
  BIGNUM *a_00;
  ulong uVar3;
  BN_CTX *c;
  BN_CTX BVar4;
  size_t sVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  uint local_60;
  
  local_60 = param_3 & 0xfffffffb;
  if ((param_3 == 4) || ((param_3 & 0xfffffffb) == 2)) {
    iVar1 = EC_POINT_is_at_infinity(param_1,param_2);
    if (iVar1 != 0) {
      if (param_4 == (BN_CTX *)0x0) {
        return 1;
      }
      if (param_5 == 0) {
        ERR_new();
        ERR_set_debug("crypto/ec/ecp_oct.c",0xb4,"ossl_ec_GFp_simple_point2oct");
        ERR_set_error(0x10,100,0);
        return 0;
      }
      *param_4 = (BN_CTX)0x0;
      return 1;
    }
    iVar2 = BN_num_bits(*(BIGNUM **)(param_1 + 0x40));
    iVar1 = iVar2 + 7;
    if (iVar2 + 7 < 0) {
      iVar1 = iVar2 + 0xe;
    }
    uVar3 = (ulong)(iVar1 >> 3);
    uVar8 = uVar3 * 2;
    if (param_3 == 2) {
      uVar8 = uVar3;
    }
    uVar8 = uVar8 + 1;
    c = param_4;
    if (param_4 == (BN_CTX *)0x0) goto LAB_00100694;
    if (uVar8 <= param_5) {
      c = (BN_CTX *)0x0;
      if ((param_6 == (BN_CTX *)0x0) &&
         (param_6 = (BN_CTX *)BN_CTX_new_ex(*(undefined8 *)(param_1 + 0xa8)), c = param_6,
         param_6 == (BN_CTX *)0x0)) {
        return 0;
      }
      BN_CTX_start(param_6);
      a = BN_CTX_get(param_6);
      a_00 = BN_CTX_get(param_6);
      if ((a_00 != (BIGNUM *)0x0) &&
         (iVar1 = EC_POINT_get_affine_coordinates(param_1,param_2,a,a_00,param_6), iVar1 != 0)) {
        BVar4 = SUB41(param_3,0);
        if (local_60 == 2) {
          iVar1 = BN_is_odd(a_00);
          if (iVar1 != 0) {
            BVar4 = (BN_CTX)((char)BVar4 + '\x01');
          }
        }
        *param_4 = BVar4;
        iVar2 = BN_num_bits(a);
        iVar1 = iVar2 + 7;
        if (iVar2 + 7 < 0) {
          iVar1 = iVar2 + 0xe;
        }
        sVar5 = uVar3 - (long)(iVar1 >> 3);
        if (uVar3 < (ulong)(long)(iVar1 >> 3)) {
          ERR_new();
          uVar7 = 0xe3;
        }
        else {
          if (sVar5 == 0) {
            lVar6 = 1;
          }
          else {
            memset(param_4 + 1,0,sVar5);
            lVar6 = sVar5 + 1;
          }
          iVar1 = BN_bn2bin(a,(uchar *)(param_4 + lVar6));
          uVar9 = iVar1 + lVar6;
          if (uVar3 + 1 == uVar9) {
            if ((param_3 & 0xfffffffd) == 4) {
              iVar2 = BN_num_bits(a_00);
              iVar1 = iVar2 + 7;
              if (iVar2 + 7 < 0) {
                iVar1 = iVar2 + 0xe;
              }
              sVar5 = uVar3 - (long)(iVar1 >> 3);
              if (uVar3 < (ulong)(long)(iVar1 >> 3)) {
                ERR_new();
                uVar7 = 0xf5;
                goto LAB_001006f9;
              }
              if (sVar5 != 0) {
                memset(param_4 + uVar9,0,sVar5);
                uVar9 = uVar9 + sVar5;
              }
              iVar1 = BN_bn2bin(a_00,(uchar *)(param_4 + uVar9));
              uVar9 = uVar9 + (long)iVar1;
            }
            if (uVar9 == uVar8) {
              BN_CTX_end(param_6);
LAB_00100694:
              BN_CTX_free(c);
              return uVar8;
            }
            ERR_new();
            uVar7 = 0x101;
          }
          else {
            ERR_new();
            uVar7 = 0xed;
          }
        }
LAB_001006f9:
        ERR_set_debug("crypto/ec/ecp_oct.c",uVar7,"ossl_ec_GFp_simple_point2oct");
        ERR_set_error(0x10,0xc0103,0);
      }
      BN_CTX_end(param_6);
      goto LAB_00100523;
    }
    ERR_new();
    ERR_set_debug("crypto/ec/ecp_oct.c",0xc5,"ossl_ec_GFp_simple_point2oct");
    ERR_set_error(0x10,100,0);
  }
  else {
    ERR_new();
    ERR_set_debug("crypto/ec/ecp_oct.c",0xac,"ossl_ec_GFp_simple_point2oct");
    ERR_set_error(0x10,0x68,0);
  }
  c = (BN_CTX *)0x0;
LAB_00100523:
  BN_CTX_free(c);
  return 0;
}



uint ossl_ec_GFp_simple_oct2point
               (EC_GROUP *param_1,EC_POINT *param_2,byte *param_3,long param_4,BN_CTX *param_5)

{
  byte bVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  BIGNUM *ret;
  BIGNUM *ret_00;
  BIGNUM *pBVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  BN_CTX *local_50;
  
  if (param_4 == 0) {
    ERR_new();
    ERR_set_debug("crypto/ec/ecp_oct.c",0x11e,"ossl_ec_GFp_simple_oct2point");
    ERR_set_error(0x10,100,0);
    return 0;
  }
  bVar1 = *param_3;
  uVar9 = bVar1 & 1;
  uVar8 = bVar1 & 0xfe;
  if (bVar1 < 4) {
    if ((bVar1 & 0xfe) != 0) {
      iVar3 = BN_num_bits(*(BIGNUM **)(param_1 + 0x40));
      iVar4 = iVar3 + 7;
      if (iVar3 + 7 < 0) {
        iVar4 = iVar3 + 0xe;
      }
      iVar4 = iVar4 >> 3;
      lVar5 = (long)iVar4;
      lVar2 = lVar5;
joined_r0x00100b01:
      if (lVar2 + 1 != param_4) {
        ERR_new();
        uVar7 = 0x13e;
        goto LAB_00100a2d;
      }
      local_50 = (BN_CTX *)0x0;
      if ((param_5 == (BN_CTX *)0x0) &&
         (param_5 = (BN_CTX *)BN_CTX_new_ex(*(undefined8 *)(param_1 + 0xa8)), local_50 = param_5,
         param_5 == (BN_CTX *)0x0)) {
        return 0;
      }
      BN_CTX_start(param_5);
      ret = BN_CTX_get(param_5);
      ret_00 = BN_CTX_get(param_5);
      if ((ret_00 != (BIGNUM *)0x0) &&
         (pBVar6 = BN_bin2bn(param_3 + 1,iVar4,ret), pBVar6 != (BIGNUM *)0x0)) {
        iVar3 = BN_ucmp(ret,*(BIGNUM **)(param_1 + 0x40));
        if (iVar3 < 0) {
          if (uVar8 == 2) {
            iVar4 = EC_POINT_set_compressed_coordinates(param_1,param_2,ret,uVar9,param_5);
            uVar8 = (uint)(iVar4 != 0);
            goto LAB_00100b98;
          }
          pBVar6 = BN_bin2bn(param_3 + lVar5 + 1,iVar4,ret_00);
          if (pBVar6 == (BIGNUM *)0x0) goto LAB_00100b90;
          iVar4 = BN_ucmp(ret_00,*(BIGNUM **)(param_1 + 0x40));
          if (iVar4 < 0) {
            if ((uVar8 != 6) || (uVar8 = BN_is_odd(ret_00), uVar8 == uVar9)) {
              iVar4 = EC_POINT_set_affine_coordinates(param_1,param_2,ret,ret_00,param_5);
              uVar8 = (uint)(iVar4 != 0);
              goto LAB_00100b98;
            }
            ERR_new();
            uVar7 = 0x161;
          }
          else {
            ERR_new();
            uVar7 = 0x15c;
          }
        }
        else {
          ERR_new();
          uVar7 = 0x151;
        }
        ERR_set_debug("crypto/ec/ecp_oct.c",uVar7,"ossl_ec_GFp_simple_oct2point");
        ERR_set_error(0x10,0x66,0);
      }
LAB_00100b90:
      uVar8 = 0;
LAB_00100b98:
      BN_CTX_end(param_5);
      BN_CTX_free(local_50);
      return uVar8;
    }
    if ((char)uVar9 == '\0') {
      if (param_4 == 1) {
        uVar8 = EC_POINT_set_to_infinity(param_1,param_2);
        return uVar8;
      }
      ERR_new();
      uVar7 = 0x131;
      goto LAB_00100a2d;
    }
  }
  else {
    if ((bVar1 & 0xfc) != 4) {
      ERR_new();
      uVar7 = 0x127;
      goto LAB_00100a2d;
    }
    if ((uVar8 != 4) || ((char)uVar9 == '\0')) {
      iVar3 = BN_num_bits(*(BIGNUM **)(param_1 + 0x40));
      iVar4 = iVar3 + 7;
      if (iVar3 + 7 < 0) {
        iVar4 = iVar3 + 0xe;
      }
      iVar4 = iVar4 >> 3;
      lVar5 = (long)iVar4;
      lVar2 = lVar5 * 2;
      goto joined_r0x00100b01;
    }
  }
  ERR_new();
  uVar7 = 299;
LAB_00100a2d:
  ERR_set_debug("crypto/ec/ecp_oct.c",uVar7,"ossl_ec_GFp_simple_oct2point");
  ERR_set_error(0x10,0x66,0);
  return 0;
}


