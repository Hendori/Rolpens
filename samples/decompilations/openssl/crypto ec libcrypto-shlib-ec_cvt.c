
EC_GROUP * EC_GROUP_new_curve_GFp(BIGNUM *p,BIGNUM *a,BIGNUM *b,BN_CTX *ctx)

{
  int iVar1;
  EC_METHOD *pEVar2;
  undefined8 uVar3;
  EC_GROUP *group;
  
  pEVar2 = EC_GFp_mont_method();
  uVar3 = ossl_bn_get_libctx(ctx);
  group = (EC_GROUP *)ossl_ec_group_new_ex(uVar3,0,pEVar2);
  if (group != (EC_GROUP *)0x0) {
    iVar1 = EC_GROUP_set_curve(group,p,a,b,ctx);
    if (iVar1 != 0) {
      return group;
    }
    EC_GROUP_free(group);
  }
  return (EC_GROUP *)0x0;
}



EC_GROUP *
EC_GROUP_new_curve_GF2m(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  EC_GROUP *group;
  
  uVar2 = EC_GF2m_simple_method();
  uVar3 = ossl_bn_get_libctx(param_4);
  group = (EC_GROUP *)ossl_ec_group_new_ex(uVar3,0,uVar2);
  if (group != (EC_GROUP *)0x0) {
    iVar1 = EC_GROUP_set_curve(group,param_1,param_2,param_3,param_4);
    if (iVar1 != 0) {
      return group;
    }
    EC_GROUP_free(group);
  }
  return (EC_GROUP *)0x0;
}


