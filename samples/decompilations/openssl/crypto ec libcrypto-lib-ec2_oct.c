
bool ossl_ec_GF2m_simple_set_compressed_coordinates
               (long *param_1,undefined8 param_2,undefined8 param_3,int param_4,BN_CTX *param_5)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  BIGNUM *pBVar4;
  BIGNUM *pBVar5;
  BIGNUM *pBVar6;
  BIGNUM *pBVar7;
  ulong uVar8;
  BN_CTX *c;
  bool bVar9;
  
  c = (BN_CTX *)0x0;
  if ((param_5 == (BN_CTX *)0x0) && (param_5 = BN_CTX_new(), c = param_5, param_5 == (BN_CTX *)0x0))
  {
    return false;
  }
  BN_CTX_start(param_5);
  pBVar4 = BN_CTX_get(param_5);
  pBVar5 = BN_CTX_get(param_5);
  pBVar6 = BN_CTX_get(param_5);
  pBVar7 = BN_CTX_get(param_5);
  if (pBVar7 != (BIGNUM *)0x0) {
    plVar1 = param_1 + 9;
    iVar2 = BN_GF2m_mod_arr(pBVar5,param_3,plVar1);
    if (iVar2 != 0) {
      iVar2 = BN_is_zero(pBVar5);
      if (iVar2 == 0) {
        iVar2 = (**(code **)(*param_1 + 0x100))(param_1,pBVar4,pBVar5,param_5);
        if ((((iVar2 != 0) &&
             (iVar2 = (**(code **)(*param_1 + 0x108))(param_1,pBVar4,param_1[0xd],pBVar4,param_5),
             iVar2 != 0)) && (iVar2 = BN_GF2m_add(pBVar4,param_1[0xc],pBVar4), iVar2 != 0)) &&
           (iVar2 = BN_GF2m_add(pBVar4,pBVar5,pBVar4), iVar2 != 0)) {
          ERR_set_mark();
          iVar2 = BN_GF2m_mod_solve_quad_arr(pBVar7,pBVar4,plVar1,param_5);
          if (iVar2 == 0) {
            uVar8 = ERR_peek_last_error();
            if ((((uVar8 & 0x80000000) == 0) && ((char)(uVar8 >> 0x17) == '\x03')) &&
               (((uint)uVar8 & 0x7fffff) == 0x74)) {
              ERR_pop_to_mark();
              bVar9 = false;
              ERR_new();
              ERR_set_debug("crypto/ec/ec2_oct.c",0x58,
                            "ossl_ec_GF2m_simple_set_compressed_coordinates");
              ERR_set_error(0x10,0x6e,0);
            }
            else {
              ERR_clear_last_mark();
              bVar9 = false;
              ERR_new();
              ERR_set_debug("crypto/ec/ec2_oct.c",0x5d,
                            "ossl_ec_GF2m_simple_set_compressed_coordinates");
              ERR_set_error(0x10,0x80003,0);
            }
            goto LAB_001001de;
          }
          ERR_clear_last_mark();
          iVar2 = BN_is_odd(pBVar7);
          iVar3 = (**(code **)(*param_1 + 0xf8))(param_1,pBVar6,pBVar5,pBVar7,param_5);
          if (iVar3 != 0) {
            if (((param_4 != 0) != (iVar2 != 0)) &&
               (iVar2 = BN_GF2m_add(pBVar6,pBVar6,pBVar5), iVar2 == 0)) {
              bVar9 = false;
              goto LAB_001001de;
            }
            goto LAB_001001be;
          }
        }
      }
      else {
        iVar2 = BN_GF2m_mod_sqrt_arr(pBVar6,param_1[0xd],plVar1,param_5);
        if (iVar2 != 0) {
LAB_001001be:
          iVar2 = EC_POINT_set_affine_coordinates(param_1,param_2,pBVar5,pBVar6,param_5);
          bVar9 = iVar2 != 0;
          goto LAB_001001de;
        }
      }
    }
  }
  bVar9 = false;
LAB_001001de:
  BN_CTX_end(param_5);
  BN_CTX_free(c);
  return bVar9;
}



ulong ossl_ec_GF2m_simple_point2oct
                (EC_GROUP *param_1,EC_POINT *param_2,uint param_3,BN_CTX *param_4,ulong param_5,
                BN_CTX *param_6)

{
  int iVar1;
  int iVar2;
  BIGNUM *a;
  BIGNUM *a_00;
  BIGNUM *pBVar3;
  ulong uVar4;
  BN_CTX *c;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  size_t sVar8;
  long lVar9;
  
  if (((param_3 & 0xfffffffb) == 2) || (param_3 == 4)) {
    iVar1 = EC_POINT_is_at_infinity(param_1,param_2);
    if (iVar1 != 0) {
      if (param_4 == (BN_CTX *)0x0) {
        return 1;
      }
      if (param_5 == 0) {
        ERR_new();
        ERR_set_debug("crypto/ec/ec2_oct.c",0x95,"ossl_ec_GF2m_simple_point2oct");
        ERR_set_error(0x10,100,0);
        return 0;
      }
      *param_4 = (BN_CTX)0x0;
      return 1;
    }
    iVar2 = EC_GROUP_get_degree(param_1);
    iVar1 = iVar2 + 7;
    if (iVar2 + 7 < 0) {
      iVar1 = iVar2 + 0xe;
    }
    uVar4 = (ulong)(iVar1 >> 3);
    uVar6 = uVar4 * 2;
    if (param_3 == 2) {
      uVar6 = uVar4;
    }
    uVar6 = uVar6 + 1;
    c = param_4;
    if (param_4 == (BN_CTX *)0x0) goto LAB_0010050e;
    if (uVar6 <= param_5) {
      c = (BN_CTX *)0x0;
      if ((param_6 == (BN_CTX *)0x0) &&
         (param_6 = BN_CTX_new(), c = param_6, param_6 == (BN_CTX *)0x0)) {
        return 0;
      }
      BN_CTX_start(param_6);
      a = BN_CTX_get(param_6);
      a_00 = BN_CTX_get(param_6);
      pBVar3 = BN_CTX_get(param_6);
      if ((pBVar3 != (BIGNUM *)0x0) &&
         (iVar1 = EC_POINT_get_affine_coordinates(param_1,param_2,a,a_00,param_6), iVar1 != 0)) {
        *param_4 = SUB41(param_3,0);
        if ((param_3 != 4) && (iVar1 = BN_is_zero(a), iVar1 == 0)) {
          iVar1 = (**(code **)(*(long *)param_1 + 0x108))(param_1,pBVar3,a_00,a,param_6);
          if (iVar1 == 0) goto LAB_00100590;
          iVar1 = BN_is_odd(pBVar3);
          if (iVar1 != 0) {
            *param_4 = (BN_CTX)((char)*param_4 + '\x01');
          }
        }
        iVar2 = BN_num_bits(a);
        iVar1 = iVar2 + 0xe;
        if (-1 < iVar2 + 7) {
          iVar1 = iVar2 + 7;
        }
        sVar8 = uVar4 - (long)(iVar1 >> 3);
        if (uVar4 < (ulong)(long)(iVar1 >> 3)) {
          ERR_new();
          uVar5 = 0xc9;
        }
        else {
          if (sVar8 == 0) {
            lVar9 = 1;
          }
          else {
            memset(param_4 + 1,0,sVar8);
            lVar9 = sVar8 + 1;
          }
          iVar1 = BN_bn2bin(a,(uchar *)(param_4 + lVar9));
          uVar7 = iVar1 + lVar9;
          if (uVar4 + 1 == uVar7) {
            if ((param_3 & 0xfffffffd) == 4) {
              iVar2 = BN_num_bits(a_00);
              iVar1 = iVar2 + 7;
              if (iVar2 + 7 < 0) {
                iVar1 = iVar2 + 0xe;
              }
              sVar8 = uVar4 - (long)(iVar1 >> 3);
              if (uVar4 < (ulong)(long)(iVar1 >> 3)) {
                ERR_new();
                uVar5 = 0xdb;
                goto LAB_00100571;
              }
              if (sVar8 != 0) {
                memset(param_4 + uVar7,0,sVar8);
                uVar7 = uVar7 + sVar8;
              }
              iVar1 = BN_bn2bin(a_00,(uchar *)(param_4 + uVar7));
              uVar7 = uVar7 + (long)iVar1;
            }
            if (uVar7 == uVar6) {
              BN_CTX_end(param_6);
LAB_0010050e:
              BN_CTX_free(c);
              return uVar6;
            }
            ERR_new();
            uVar5 = 0xe7;
          }
          else {
            ERR_new();
            uVar5 = 0xd3;
          }
        }
LAB_00100571:
        ERR_set_debug("crypto/ec/ec2_oct.c",uVar5,"ossl_ec_GF2m_simple_point2oct");
        ERR_set_error(0x10,0xc0103,0);
      }
LAB_00100590:
      BN_CTX_end(param_6);
      goto LAB_00100343;
    }
    ERR_new();
    ERR_set_debug("crypto/ec/ec2_oct.c",0xa6,"ossl_ec_GF2m_simple_point2oct");
    ERR_set_error(0x10,100,0);
  }
  else {
    ERR_new();
    ERR_set_debug("crypto/ec/ec2_oct.c",0x8d,"ossl_ec_GF2m_simple_point2oct");
    ERR_set_error(0x10,0x68,0);
  }
  c = (BN_CTX *)0x0;
LAB_00100343:
  BN_CTX_free(c);
  return 0;
}



uint ossl_ec_GF2m_simple_oct2point
               (EC_GROUP *param_1,EC_POINT *param_2,byte *param_3,long param_4,BN_CTX *param_5)

{
  byte bVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  BIGNUM *ret;
  BIGNUM *ret_00;
  BIGNUM *pBVar7;
  BIGNUM *pBVar8;
  undefined8 uVar9;
  uint uVar10;
  char cVar11;
  uint uVar12;
  BN_CTX *local_60;
  
  if (param_4 == 0) {
    ERR_new();
    ERR_set_debug("crypto/ec/ec2_oct.c",0x10e,"ossl_ec_GF2m_simple_oct2point");
    ERR_set_error(0x10,100,0);
    return 0;
  }
  bVar1 = *param_3;
  uVar12 = bVar1 & 1;
  uVar10 = bVar1 & 0xfe;
  cVar11 = (char)uVar12;
  if (bVar1 < 4) {
    if ((bVar1 & 0xfe) != 0) {
      iVar3 = EC_GROUP_get_degree(param_1);
      iVar4 = iVar3 + 0xe;
      if (-1 < iVar3 + 7) {
        iVar4 = iVar3 + 7;
      }
      iVar4 = iVar4 >> 3;
      lVar6 = (long)iVar4;
      lVar2 = lVar6;
joined_r0x00100963:
      if (lVar2 + 1 != param_4) {
        ERR_new();
        uVar9 = 0x13c;
        goto LAB_00100885;
      }
      local_60 = (BN_CTX *)0x0;
      if ((param_5 == (BN_CTX *)0x0) &&
         (param_5 = BN_CTX_new(), local_60 = param_5, param_5 == (BN_CTX *)0x0)) {
        return 0;
      }
      BN_CTX_start(param_5);
      ret = BN_CTX_get(param_5);
      ret_00 = BN_CTX_get(param_5);
      pBVar7 = BN_CTX_get(param_5);
      if ((pBVar7 != (BIGNUM *)0x0) &&
         (pBVar8 = BN_bin2bn(param_3 + 1,iVar4,ret), pBVar8 != (BIGNUM *)0x0)) {
        iVar5 = BN_num_bits(ret);
        if (iVar3 < iVar5) {
          ERR_new();
          uVar9 = 0x152;
          goto LAB_001009d1;
        }
        if (uVar10 == 2) {
          iVar4 = EC_POINT_set_compressed_coordinates(param_1,param_2,ret,uVar12,param_5);
          uVar10 = (uint)(iVar4 != 0);
          goto LAB_001009f8;
        }
        pBVar8 = BN_bin2bn(param_3 + lVar6 + 1,iVar4,ret_00);
        if (pBVar8 == (BIGNUM *)0x0) goto LAB_001009f0;
        iVar4 = BN_num_bits(ret_00);
        if (iVar3 < iVar4) {
          ERR_new();
          uVar9 = 0x15d;
        }
        else {
          if (uVar10 != 6) {
LAB_0010082b:
            iVar4 = EC_POINT_set_affine_coordinates(param_1,param_2,ret,ret_00,param_5);
            uVar10 = (uint)(iVar4 != 0);
            goto LAB_001009f8;
          }
          iVar4 = BN_is_zero(ret);
          if (iVar4 == 0) {
            iVar4 = (**(code **)(*(long *)param_1 + 0x108))(param_1,pBVar7,ret_00,ret,param_5);
            if (iVar4 == 0) goto LAB_001009f0;
            uVar10 = BN_is_odd(pBVar7);
            if (uVar10 == uVar12) goto LAB_0010082b;
            ERR_new();
            uVar9 = 0x16f;
          }
          else {
            if (cVar11 == '\0') goto LAB_0010082b;
            ERR_new();
            uVar9 = 0x168;
          }
        }
LAB_001009d1:
        ERR_set_debug("crypto/ec/ec2_oct.c",uVar9,"ossl_ec_GF2m_simple_oct2point");
        ERR_set_error(0x10,0x66,0);
      }
LAB_001009f0:
      uVar10 = 0;
LAB_001009f8:
      BN_CTX_end(param_5);
      BN_CTX_free(local_60);
      return uVar10;
    }
    if (cVar11 == '\0') {
      if (param_4 == 1) {
        uVar10 = EC_POINT_set_to_infinity(param_1,param_2);
        return uVar10;
      }
      ERR_new();
      uVar9 = 0x12e;
      goto LAB_00100885;
    }
  }
  else {
    if ((bVar1 & 0xfc) != 4) {
      ERR_new();
      uVar9 = 0x123;
      goto LAB_00100885;
    }
    if ((uVar10 != 4) || (cVar11 == '\0')) {
      iVar3 = EC_GROUP_get_degree(param_1);
      iVar4 = iVar3 + 0xe;
      if (-1 < iVar3 + 7) {
        iVar4 = iVar3 + 7;
      }
      iVar4 = iVar4 >> 3;
      lVar6 = (long)iVar4;
      lVar2 = lVar6 * 2;
      goto joined_r0x00100963;
    }
  }
  ERR_new();
  uVar9 = 0x127;
LAB_00100885:
  ERR_set_debug("crypto/ec/ec2_oct.c",uVar9,"ossl_ec_GF2m_simple_oct2point");
  ERR_set_error(0x10,0x66,0);
  return 0;
}


