
undefined8
get_dh_from_pg_bn(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5)

{
  int iVar1;
  EVP_PKEY_CTX *ctx;
  long lVar2;
  long lVar3;
  long in_FS_OFFSET;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_name(param_1,param_2,0);
  local_38 = 0;
  if (ctx != (EVP_PKEY_CTX *)0x0) {
    iVar1 = EVP_PKEY_fromdata_init(ctx);
    if (0 < iVar1) {
      lVar2 = OSSL_PARAM_BLD_new();
      if (lVar2 != 0) {
        lVar3 = 0;
        iVar1 = OSSL_PARAM_BLD_push_BN(lVar2,&_LC0,param_3);
        if (iVar1 == 0) goto LAB_001000d5;
        iVar1 = OSSL_PARAM_BLD_push_BN(lVar2,&_LC1,param_4);
        if (iVar1 == 0) {
LAB_00100110:
          lVar3 = 0;
        }
        else {
          if (param_5 != 0) {
            iVar1 = OSSL_PARAM_BLD_push_BN(lVar2,&_LC2,param_5);
            if (iVar1 == 0) goto LAB_00100110;
          }
          lVar3 = OSSL_PARAM_BLD_to_param(lVar2);
          if (lVar3 != 0) {
            EVP_PKEY_fromdata(ctx,&local_38,0x84,lVar3);
          }
        }
        goto LAB_001000d5;
      }
    }
  }
  lVar3 = 0;
  lVar2 = 0;
LAB_001000d5:
  EVP_PKEY_CTX_free(ctx);
  OSSL_PARAM_free(lVar3);
  OSSL_PARAM_BLD_free(lVar2);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_38;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 get_dh512(undefined8 param_1)

{
  BIGNUM *a;
  BIGNUM *a_00;
  undefined8 uVar1;
  
  a = BN_bin2bn(dh512_p_6,0x40,(BIGNUM *)0x0);
  a_00 = BN_bin2bn(&dh512_g_5,1,(BIGNUM *)0x0);
  if ((a == (BIGNUM *)0x0) || (a_00 == (BIGNUM *)0x0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = get_dh_from_pg_bn(param_1,&_LC3,a,a_00,0);
  }
  BN_free(a);
  BN_free(a_00);
  BN_free((BIGNUM *)0x0);
  return uVar1;
}



undefined8 get_dhx512(undefined8 param_1)

{
  BIGNUM *a;
  BIGNUM *a_00;
  BIGNUM *a_01;
  undefined8 uVar1;
  
  a = BN_bin2bn(dhx512_p_4,0x41,(BIGNUM *)0x0);
  a_00 = BN_bin2bn(dhx512_g_3,0x41,(BIGNUM *)0x0);
  if ((a == (BIGNUM *)0x0) || (a_00 == (BIGNUM *)0x0)) {
    a_01 = (BIGNUM *)0x0;
    uVar1 = 0;
  }
  else {
    a_01 = BN_bin2bn(dhx512_q_2,0x15,(BIGNUM *)0x0);
    if (a_01 == (BIGNUM *)0x0) {
      uVar1 = 0;
    }
    else {
      uVar1 = get_dh_from_pg_bn(param_1,"X9.42 DH",a,a_00,a_01);
    }
  }
  BN_free(a);
  BN_free(a_00);
  BN_free(a_01);
  return uVar1;
}



undefined8 get_dh1024dsa(undefined8 param_1)

{
  BIGNUM *a;
  BIGNUM *a_00;
  undefined8 uVar1;
  
  a = BN_bin2bn(dh1024_p_1,0x80,(BIGNUM *)0x0);
  a_00 = BN_bin2bn(dh1024_g_0,0x80,(BIGNUM *)0x0);
  if ((a == (BIGNUM *)0x0) || (a_00 == (BIGNUM *)0x0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = get_dh_from_pg_bn(param_1,&_LC3,a,a_00,0);
  }
  BN_free(a);
  BN_free(a_00);
  BN_free((BIGNUM *)0x0);
  return uVar1;
}



undefined8 get_dh2048(undefined8 param_1)

{
  int iVar1;
  BIGNUM *a;
  BIGNUM *a_00;
  undefined8 uVar2;
  
  a = BN_new();
  if (a != (BIGNUM *)0x0) {
    iVar1 = BN_set_word(a,2);
    if (iVar1 != 0) {
      a_00 = (BIGNUM *)BN_get_rfc3526_prime_2048(0);
      if (a_00 == (BIGNUM *)0x0) {
        uVar2 = 0;
      }
      else {
        uVar2 = get_dh_from_pg_bn(param_1,&_LC3,a_00,a,0);
      }
      goto LAB_00100353;
    }
  }
  uVar2 = 0;
  a_00 = (BIGNUM *)0x0;
LAB_00100353:
  BN_free(a_00);
  BN_free(a);
  return uVar2;
}



undefined8 get_dh4096(undefined8 param_1)

{
  int iVar1;
  BIGNUM *a;
  BIGNUM *a_00;
  undefined8 uVar2;
  
  a = BN_new();
  if (a != (BIGNUM *)0x0) {
    iVar1 = BN_set_word(a,2);
    if (iVar1 != 0) {
      a_00 = (BIGNUM *)BN_get_rfc3526_prime_4096(0);
      if (a_00 == (BIGNUM *)0x0) {
        uVar2 = 0;
      }
      else {
        uVar2 = get_dh_from_pg_bn(param_1,&_LC3,a_00,a,0);
      }
      goto LAB_001003e3;
    }
  }
  uVar2 = 0;
  a_00 = (BIGNUM *)0x0;
LAB_001003e3:
  BN_free(a_00);
  BN_free(a);
  return uVar2;
}


