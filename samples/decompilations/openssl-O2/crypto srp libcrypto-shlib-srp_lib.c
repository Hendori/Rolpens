
BIGNUM * srp_Calc_xy(BIGNUM *param_1,BIGNUM *param_2,BIGNUM *param_3,undefined8 param_4,
                    undefined8 param_5)

{
  int iVar1;
  int iVar2;
  EVP_MD *type;
  void *data;
  BIGNUM *pBVar3;
  long in_FS_OFFSET;
  uchar local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = BN_num_bits(param_3);
  type = (EVP_MD *)EVP_MD_fetch(param_4,&_LC0,param_5);
  if (type == (EVP_MD *)0x0) {
    pBVar3 = (BIGNUM *)0x0;
    goto LAB_0010008e;
  }
  if (((param_3 == param_1) || (iVar2 = BN_ucmp(param_1,param_3), iVar2 < 0)) &&
     ((param_3 == param_2 || (iVar2 = BN_ucmp(param_2,param_3), iVar2 < 0)))) {
    iVar2 = iVar1 + 0xe;
    if (-1 < iVar1 + 7) {
      iVar2 = iVar1 + 7;
    }
    iVar2 = iVar2 >> 3;
    data = CRYPTO_malloc(iVar2 * 2,"crypto/srp/srp_lib.c",0x2a);
    if (data == (void *)0x0) goto LAB_00100071;
    iVar1 = BN_bn2binpad(param_1,data,iVar2);
    if ((iVar1 < 0) || (iVar1 = BN_bn2binpad(param_2,(long)iVar2 + (long)data,iVar2), iVar1 < 0)) {
LAB_00100170:
      pBVar3 = (BIGNUM *)0x0;
    }
    else {
      iVar1 = EVP_Digest(data,(long)(iVar2 * 2),local_58,(uint *)0x0,type,(ENGINE *)0x0);
      if (iVar1 == 0) goto LAB_00100170;
      pBVar3 = BN_bin2bn(local_58,0x14,(BIGNUM *)0x0);
    }
  }
  else {
LAB_00100071:
    pBVar3 = (BIGNUM *)0x0;
    data = (void *)0x0;
  }
  EVP_MD_free(type);
  CRYPTO_free(data);
LAB_0010008e:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pBVar3;
}



void SRP_Calc_u_ex(void)

{
  srp_Calc_xy();
  return;
}



void SRP_Calc_u(void)

{
  srp_Calc_xy();
  return;
}



BIGNUM * SRP_Calc_server_key(BIGNUM *param_1,BIGNUM *param_2,BIGNUM *param_3,BIGNUM *param_4,
                            BIGNUM *param_5)

{
  int iVar1;
  BN_CTX *ctx;
  BIGNUM *r;
  BIGNUM *r_00;
  BIGNUM *pBVar2;
  
  if ((((param_3 != (BIGNUM *)0x0) && (param_1 != (BIGNUM *)0x0)) &&
      (param_2 != (BIGNUM *)0x0 && param_4 != (BIGNUM *)0x0)) && (param_5 != (BIGNUM *)0x0)) {
    ctx = BN_CTX_new();
    if ((ctx == (BN_CTX *)0x0) || (r = BN_new(), r == (BIGNUM *)0x0)) {
      pBVar2 = (BIGNUM *)0x0;
      r = (BIGNUM *)0x0;
    }
    else {
      iVar1 = BN_mod_exp(r,param_2,param_3,param_5,ctx);
      if (((iVar1 == 0) || (iVar1 = BN_mod_mul(r,param_1,r,param_5,ctx), iVar1 == 0)) ||
         (r_00 = BN_new(), r_00 == (BIGNUM *)0x0)) {
        pBVar2 = (BIGNUM *)0x0;
      }
      else {
        iVar1 = BN_mod_exp(r_00,r,param_4,param_5,ctx);
        pBVar2 = r_00;
        if (iVar1 == 0) {
          pBVar2 = (BIGNUM *)0x0;
          BN_free(r_00);
        }
      }
    }
    BN_CTX_free(ctx);
    BN_clear_free(r);
    return pBVar2;
  }
  return (BIGNUM *)0x0;
}



BIGNUM * SRP_Calc_B_ex(BIGNUM *param_1,BIGNUM *param_2,BIGNUM *param_3,BIGNUM *param_4,
                      undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  BN_CTX *ctx;
  BIGNUM *r;
  BIGNUM *r_00;
  BIGNUM *local_58;
  BIGNUM *local_50;
  
  if ((((param_1 == (BIGNUM *)0x0) || (param_2 == (BIGNUM *)0x0)) || (param_3 == (BIGNUM *)0x0)) ||
     ((param_4 == (BIGNUM *)0x0 || (ctx = (BN_CTX *)BN_CTX_new_ex(param_5), ctx == (BN_CTX *)0x0))))
  {
    return (BIGNUM *)0x0;
  }
  r = BN_new();
  if ((r == (BIGNUM *)0x0) || (local_58 = BN_new(), local_58 == (BIGNUM *)0x0)) {
    local_50 = (BIGNUM *)0x0;
    r_00 = (BIGNUM *)0x0;
    local_58 = (BIGNUM *)0x0;
  }
  else {
    r_00 = BN_new();
    local_50 = (BIGNUM *)0x0;
    if (r_00 != (BIGNUM *)0x0) {
      iVar1 = BN_mod_exp(local_58,param_3,param_1,param_2,ctx);
      if ((iVar1 == 0) ||
         (local_50 = (BIGNUM *)srp_Calc_xy(param_2,param_3,param_2,param_5,param_6),
         local_50 == (BIGNUM *)0x0)) {
        local_50 = (BIGNUM *)0x0;
      }
      else {
        iVar1 = BN_mod_mul(r,param_4,local_50,param_2,ctx);
        if ((iVar1 != 0) && (iVar1 = BN_mod_add(r_00,local_58,r,param_2,ctx), iVar1 != 0))
        goto LAB_001003ac;
      }
      BN_free(r_00);
      r_00 = (BIGNUM *)0x0;
    }
  }
LAB_001003ac:
  BN_CTX_free(ctx);
  BN_clear_free(r);
  BN_clear_free(local_58);
  BN_free(local_50);
  return r_00;
}



void SRP_Calc_B(void)

{
  SRP_Calc_B_ex();
  return;
}



BIGNUM * SRP_Calc_x_ex(BIGNUM *param_1,char *param_2,char *param_3,undefined8 param_4,
                      undefined8 param_5)

{
  int iVar1;
  int iVar2;
  EVP_MD_CTX *ctx;
  uchar *to;
  EVP_MD *type;
  size_t sVar3;
  BIGNUM *pBVar4;
  long in_FS_OFFSET;
  uchar local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 != (char *)0x0 && param_3 != (char *)0x0) && (param_1 != (BIGNUM *)0x0)) {
    ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
    if (ctx != (EVP_MD_CTX *)0x0) {
      iVar1 = BN_num_bits(param_1);
      iVar2 = iVar1 + 0xe;
      if (-1 < iVar1 + 7) {
        iVar2 = iVar1 + 7;
      }
      to = (uchar *)CRYPTO_malloc(iVar2 >> 3,"crypto/srp/srp_lib.c",0x9f);
      if (to == (uchar *)0x0) {
LAB_00100690:
        type = (EVP_MD *)0x0;
        pBVar4 = (BIGNUM *)0x0;
      }
      else {
        type = (EVP_MD *)EVP_MD_fetch(param_4,&_LC0,param_5);
        if (type == (EVP_MD *)0x0) goto LAB_00100690;
        iVar2 = EVP_DigestInit_ex(ctx,type,(ENGINE *)0x0);
        if (iVar2 == 0) {
LAB_00100552:
          pBVar4 = (BIGNUM *)0x0;
        }
        else {
          sVar3 = strlen(param_2);
          iVar2 = EVP_DigestUpdate(ctx,param_2,sVar3);
          if (iVar2 == 0) goto LAB_00100552;
          iVar2 = EVP_DigestUpdate(ctx,&_LC2,1);
          if (iVar2 == 0) goto LAB_00100552;
          sVar3 = strlen(param_3);
          iVar2 = EVP_DigestUpdate(ctx,param_3,sVar3);
          if (iVar2 == 0) goto LAB_00100552;
          iVar2 = EVP_DigestFinal_ex(ctx,local_58,(uint *)0x0);
          if (iVar2 == 0) goto LAB_00100552;
          iVar2 = EVP_DigestInit_ex(ctx,type,(ENGINE *)0x0);
          if (iVar2 == 0) goto LAB_00100552;
          iVar2 = BN_bn2bin(param_1,to);
          if (iVar2 < 0) goto LAB_00100552;
          iVar1 = BN_num_bits(param_1);
          iVar2 = iVar1 + 0xe;
          if (-1 < iVar1 + 7) {
            iVar2 = iVar1 + 7;
          }
          iVar2 = EVP_DigestUpdate(ctx,to,(long)(iVar2 >> 3));
          if (iVar2 == 0) goto LAB_00100552;
          iVar2 = EVP_DigestUpdate(ctx,local_58,0x14);
          if (iVar2 == 0) goto LAB_00100552;
          iVar2 = EVP_DigestFinal_ex(ctx,local_58,(uint *)0x0);
          if (iVar2 == 0) goto LAB_00100552;
          pBVar4 = BN_bin2bn(local_58,0x14,(BIGNUM *)0x0);
        }
      }
      EVP_MD_free(type);
      CRYPTO_free(to);
      EVP_MD_CTX_free(ctx);
      goto LAB_00100562;
    }
  }
  pBVar4 = (BIGNUM *)0x0;
LAB_00100562:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pBVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void SRP_Calc_x(void)

{
  SRP_Calc_x_ex();
  return;
}



BIGNUM * SRP_Calc_A(BIGNUM *param_1,BIGNUM *param_2,BIGNUM *param_3)

{
  int iVar1;
  BN_CTX *ctx;
  BIGNUM *r;
  
  if ((param_2 == (BIGNUM *)0x0 || param_3 == (BIGNUM *)0x0) || (param_1 == (BIGNUM *)0x0)) {
    return (BIGNUM *)0x0;
  }
  ctx = BN_CTX_new();
  if (ctx == (BN_CTX *)0x0) {
    return (BIGNUM *)0x0;
  }
  r = BN_new();
  if (r != (BIGNUM *)0x0) {
    iVar1 = BN_mod_exp(r,param_3,param_1,param_2,ctx);
    if (iVar1 != 0) goto LAB_0010073c;
    BN_free(r);
  }
  r = (BIGNUM *)0x0;
LAB_0010073c:
  BN_CTX_free(ctx);
  return r;
}



BIGNUM * SRP_Calc_client_key_ex
                   (BIGNUM *param_1,BIGNUM *param_2,BIGNUM *param_3,long param_4,BIGNUM *param_5,
                   BIGNUM *param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  BN_CTX *ctx;
  BIGNUM *r;
  BIGNUM *b;
  BIGNUM *r_00;
  BIGNUM *local_50;
  BIGNUM *local_48;
  BIGNUM *local_40;
  
  if ((((param_6 == (BIGNUM *)0x0) || (param_2 == (BIGNUM *)0x0)) || (param_1 == (BIGNUM *)0x0)) ||
     (((param_3 == (BIGNUM *)0x0 || (param_4 == 0)) ||
      ((param_5 == (BIGNUM *)0x0 || (ctx = (BN_CTX *)BN_CTX_new_ex(param_7), ctx == (BN_CTX *)0x0)))
      ))) {
    return (BIGNUM *)0x0;
  }
  r = BN_new();
  if ((r == (BIGNUM *)0x0) || (local_50 = BN_new(), local_50 == (BIGNUM *)0x0)) {
    local_40 = (BIGNUM *)0x0;
    r_00 = (BIGNUM *)0x0;
    b = (BIGNUM *)0x0;
    local_48 = (BIGNUM *)0x0;
    local_50 = (BIGNUM *)0x0;
  }
  else {
    local_48 = BN_new();
    if (local_48 == (BIGNUM *)0x0) {
      local_40 = (BIGNUM *)0x0;
      r_00 = (BIGNUM *)0x0;
      b = (BIGNUM *)0x0;
    }
    else {
      local_40 = BN_new();
      if (local_40 != (BIGNUM *)0x0) {
        BN_with_flags(local_40,param_4,4);
        BN_set_flags(r,4);
        iVar1 = BN_mod_exp(r,param_3,local_40,param_1,ctx);
        if (iVar1 != 0) {
          r_00 = (BIGNUM *)0x0;
          b = (BIGNUM *)srp_Calc_xy(param_1,param_3,param_1,param_7,param_8);
          if (b != (BIGNUM *)0x0) {
            iVar1 = BN_mod_mul(local_50,r,b,param_1,ctx);
            if ((((iVar1 != 0) && (iVar1 = BN_mod_sub(r,param_2,local_50,param_1,ctx), iVar1 != 0))
                && (iVar1 = BN_mul(local_48,param_6,local_40,ctx), iVar1 != 0)) &&
               ((iVar1 = BN_add(local_50,param_5,local_48), iVar1 != 0 &&
                (r_00 = BN_new(), r_00 != (BIGNUM *)0x0)))) {
              iVar1 = BN_mod_exp(r_00,r,local_50,param_1,ctx);
              if (iVar1 != 0) goto LAB_001008b1;
              BN_free(r_00);
            }
            r_00 = (BIGNUM *)0x0;
          }
          goto LAB_001008b1;
        }
      }
      r_00 = (BIGNUM *)0x0;
      b = (BIGNUM *)0x0;
    }
  }
LAB_001008b1:
  BN_CTX_free(ctx);
  BN_free(local_40);
  BN_clear_free(r);
  BN_clear_free(local_50);
  BN_clear_free(local_48);
  BN_free(b);
  return r_00;
}



void SRP_Calc_client_key(void)

{
  SRP_Calc_client_key_ex();
  return;
}



bool SRP_Verify_B_mod_N(BIGNUM *param_1,BIGNUM *param_2)

{
  int iVar1;
  BN_CTX *ctx;
  BIGNUM *r;
  bool bVar2;
  
  if ((param_1 != (BIGNUM *)0x0) && (param_2 != (BIGNUM *)0x0)) {
    ctx = BN_CTX_new();
    if (ctx != (BN_CTX *)0x0) {
      r = BN_new();
      if ((r == (BIGNUM *)0x0) || (iVar1 = BN_nnmod(r,param_1,param_2,ctx), iVar1 == 0)) {
        bVar2 = false;
      }
      else {
        iVar1 = BN_is_zero(r);
        bVar2 = iVar1 == 0;
      }
      BN_CTX_free(ctx);
      BN_free(r);
      return bVar2;
    }
    return false;
  }
  return false;
}



void SRP_Verify_A_mod_N(void)

{
  SRP_Verify_B_mod_N();
  return;
}



undefined * SRP_check_known_gN_param(BIGNUM *param_1,BIGNUM *param_2)

{
  int iVar1;
  undefined **ppuVar2;
  long lVar3;
  
  if (param_1 == (BIGNUM *)0x0) {
    return (undefined *)0x0;
  }
  if (param_2 != (BIGNUM *)0x0) {
    ppuVar2 = &PTR_ossl_bn_generator_19_00100c08;
    lVar3 = 0;
    do {
      iVar1 = BN_cmp((BIGNUM *)*ppuVar2,param_1);
      if ((iVar1 == 0) && (iVar1 = BN_cmp((BIGNUM *)ppuVar2[1],param_2), iVar1 == 0)) {
        return (&knowngN)[lVar3 * 3];
      }
      lVar3 = lVar3 + 1;
      ppuVar2 = ppuVar2 + 3;
    } while (lVar3 != 7);
  }
  return (undefined *)0x0;
}



undefined ** SRP_get_default_gN(char *param_1)

{
  int iVar1;
  long lVar2;
  undefined **ppuVar3;
  
  if (param_1 == (char *)0x0) {
    return &knowngN;
  }
  ppuVar3 = &knowngN;
  lVar2 = 0;
  do {
    iVar1 = strcmp(*ppuVar3,param_1);
    if (iVar1 == 0) {
      return &knowngN + lVar2 * 3;
    }
    lVar2 = lVar2 + 1;
    ppuVar3 = ppuVar3 + 3;
  } while (lVar2 != 7);
  return (undefined **)0x0;
}


