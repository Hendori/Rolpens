
int EC_GROUP_check_named_curve(long param_1,int param_2,long param_3)

{
  int iVar1;
  long lVar2;
  BN_CTX *c;
  
  if (param_1 == 0) {
    ERR_new();
    iVar1 = 0;
    ERR_set_debug("crypto/ec/ec_check.c",0x1a,"EC_GROUP_check_named_curve");
    ERR_set_error(0x10,0xc0102,0);
  }
  else {
    c = (BN_CTX *)0x0;
    if ((param_3 == 0) && (c = (BN_CTX *)BN_CTX_new_ex(0,0), c == (BN_CTX *)0x0)) {
      ERR_new();
      iVar1 = 0;
      ERR_set_debug("crypto/ec/ec_check.c",0x21,"EC_GROUP_check_named_curve");
      ERR_set_error(0x10,0x80003,0);
    }
    else {
      iVar1 = ossl_ec_curve_nid_from_params(param_1);
      if (((0 < iVar1) && (param_2 != 0)) && (lVar2 = EC_curve_nid2nist(iVar1), lVar2 == 0)) {
        iVar1 = 0;
      }
      BN_CTX_free(c);
    }
  }
  return iVar1;
}



int EC_GROUP_check(EC_GROUP *group,BN_CTX *ctx)

{
  int iVar1;
  EC_POINT *r;
  BIGNUM *n;
  int iVar2;
  BN_CTX *c;
  
  if ((group == (EC_GROUP *)0x0) || (*(uint **)group == (uint *)0x0)) {
    ERR_new();
    ERR_set_debug("crypto/ec/ec_check.c",0x3d,"EC_GROUP_check");
    ERR_set_error(0x10,0xc0102,0);
    return 0;
  }
  if ((**(uint **)group & 2) != 0) {
    return 1;
  }
  iVar2 = 0;
  c = (BN_CTX *)0x0;
  if ((ctx == (BN_CTX *)0x0) && (ctx = BN_CTX_new(), c = ctx, ctx == (BN_CTX *)0x0)) {
    ERR_new();
    r = (EC_POINT *)0x0;
    ERR_set_debug("crypto/ec/ec_check.c",0x48,"EC_GROUP_check");
    ERR_set_error(0x10,0x80003,0);
  }
  else {
    iVar1 = EC_GROUP_check_discriminant(group,ctx);
    if (iVar1 == 0) {
      ERR_new();
      ERR_set_debug("crypto/ec/ec_check.c",0x4f,"EC_GROUP_check");
      ERR_set_error(0x10,0x76,0);
    }
    else {
      if (*(EC_POINT **)(group + 8) == (EC_POINT *)0x0) {
        ERR_new();
        ERR_set_debug("crypto/ec/ec_check.c",0x55,"EC_GROUP_check");
        ERR_set_error(0x10,0x71,0);
        r = (EC_POINT *)0x0;
        goto LAB_0010026b;
      }
      iVar1 = EC_POINT_is_on_curve(group,*(EC_POINT **)(group + 8),ctx);
      if (iVar1 < 1) {
        ERR_new();
        ERR_set_debug("crypto/ec/ec_check.c",0x59,"EC_GROUP_check");
        ERR_set_error(0x10,0x6b,0);
      }
      else {
        r = EC_POINT_new(group);
        if (r != (EC_POINT *)0x0) {
          n = (BIGNUM *)EC_GROUP_get0_order(group);
          if (n != (BIGNUM *)0x0) {
            iVar1 = BN_is_zero(n);
            if (iVar1 == 0) {
              iVar1 = EC_POINT_mul(group,r,n,(EC_POINT *)0x0,(BIGNUM *)0x0,ctx);
              if (iVar1 != 0) {
                iVar1 = EC_POINT_is_at_infinity(group,r);
                if (iVar1 == 0) {
                  ERR_new();
                  ERR_set_debug("crypto/ec/ec_check.c",0x6b,"EC_GROUP_check");
                  ERR_set_error(0x10,0x7a,0);
                }
                else {
                  iVar2 = 1;
                }
              }
            }
            else {
              ERR_new();
              ERR_set_debug("crypto/ec/ec_check.c",100,"EC_GROUP_check");
              ERR_set_error(0x10,0x80,0);
            }
          }
          goto LAB_0010026b;
        }
      }
    }
    r = (EC_POINT *)0x0;
  }
LAB_0010026b:
  BN_CTX_free(c);
  EC_POINT_free(r);
  return iVar2;
}


