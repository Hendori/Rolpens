
void RSA_bits(long param_1)

{
  BN_num_bits(*(BIGNUM **)(param_1 + 0x28));
  return;
}



int RSA_size(RSA *rsa)

{
  int iVar1;
  int iVar2;
  
  iVar1 = BN_num_bits(rsa->e);
  iVar2 = iVar1 + 7;
  if (iVar1 + 7 < 0) {
    iVar2 = iVar1 + 0xe;
  }
  return iVar2 >> 3;
}



int RSA_public_encrypt(int flen,uchar *from,uchar *to,RSA *rsa,int padding)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00100048. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)(rsa->engine + 8))();
  return iVar1;
}



int RSA_private_encrypt(int flen,uchar *from,uchar *to,RSA *rsa,int padding)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00100058. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)(rsa->engine + 0x18))();
  return iVar1;
}



int RSA_private_decrypt(int flen,uchar *from,uchar *to,RSA *rsa,int padding)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00100068. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)(rsa->engine + 0x20))();
  return iVar1;
}



int RSA_public_decrypt(int flen,uchar *from,uchar *to,RSA *rsa,int padding)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00100078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)(rsa->engine + 0x10))();
  return iVar1;
}



int RSA_flags(RSA *r)

{
  int iVar1;
  
  iVar1 = 0;
  if (r != (RSA *)0x0) {
    iVar1 = *(int *)(r->engine + 0x48);
  }
  return iVar1;
}



void RSA_blinding_off(RSA *rsa)

{
  uint uVar1;
  
  BN_BLINDING_free((BN_BLINDING *)rsa[1].engine);
  uVar1 = *(uint *)((long)&rsa->mt_blinding + 4);
  rsa[1].engine = (ENGINE *)0x0;
  *(uint *)((long)&rsa->mt_blinding + 4) = uVar1 & 0xfffffff7 | 0x80;
  return;
}



BN_BLINDING * RSA_setup_blinding(RSA *rsa,BN_CTX *ctx)

{
  BIGNUM *a;
  int iVar1;
  BIGNUM *pBVar2;
  BIGNUM *pBVar3;
  BN_BLINDING *pBVar4;
  BN_CTX *ctx_00;
  BIGNUM *r;
  BIGNUM *r_00;
  BIGNUM *r_01;
  BIGNUM *b;
  undefined8 uVar5;
  
  ctx_00 = ctx;
  if ((ctx == (BN_CTX *)0x0) &&
     (ctx_00 = (BN_CTX *)BN_CTX_new_ex(rsa->version), ctx_00 == (BN_CTX *)0x0)) {
    return (BN_BLINDING *)0x0;
  }
  BN_CTX_start(ctx_00);
  pBVar2 = BN_CTX_get(ctx_00);
  if (pBVar2 == (BIGNUM *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/rsa/rsa_crpt.c",0x84,"RSA_setup_blinding");
    ERR_set_error(4,0x80003,0);
  }
  else {
    pBVar2 = rsa->d;
    if (pBVar2 != (BIGNUM *)0x0) {
LAB_0010012a:
      pBVar3 = BN_new();
      if (pBVar3 == (BIGNUM *)0x0) {
        ERR_new();
        uVar5 = 0x96;
      }
      else {
        BN_with_flags(pBVar3,rsa->e,4);
        pBVar4 = BN_BLINDING_create_param
                           ((BN_BLINDING *)0x0,pBVar2,pBVar3,ctx_00,
                            *(bn_mod_exp **)(rsa->engine + 0x30),*(BN_MONT_CTX **)(rsa + 1));
        BN_free(pBVar3);
        if (pBVar4 != (BN_BLINDING *)0x0) {
          BN_BLINDING_set_current_thread(pBVar4);
          goto LAB_00100187;
        }
        ERR_new();
        uVar5 = 0xa1;
      }
      pBVar4 = (BN_BLINDING *)0x0;
      ERR_set_debug("crypto/rsa/rsa_crpt.c",uVar5,"RSA_setup_blinding");
      ERR_set_error(4,0x80003,0);
      goto LAB_00100187;
    }
    pBVar2 = rsa->p;
    pBVar3 = rsa->q;
    a = rsa->dmp1;
    if ((pBVar2 != (BIGNUM *)0x0 && pBVar3 != (BIGNUM *)0x0) && (a != (BIGNUM *)0x0)) {
      BN_CTX_start(ctx_00);
      r = BN_CTX_get(ctx_00);
      r_00 = BN_CTX_get(ctx_00);
      r_01 = BN_CTX_get(ctx_00);
      if (r_01 != (BIGNUM *)0x0) {
        b = BN_value_one();
        iVar1 = BN_sub(r_00,pBVar3,b);
        if (iVar1 != 0) {
          pBVar3 = BN_value_one();
          iVar1 = BN_sub(r_01,a,pBVar3);
          if ((iVar1 != 0) && (iVar1 = BN_mul(r,r_00,r_01,ctx_00), iVar1 != 0)) {
            pBVar2 = BN_mod_inverse((BIGNUM *)0x0,pBVar2,r,ctx_00);
            BN_CTX_end(ctx_00);
            if (pBVar2 != (BIGNUM *)0x0) goto LAB_0010012a;
            goto LAB_00100278;
          }
        }
      }
      BN_CTX_end(ctx_00);
    }
LAB_00100278:
    ERR_new();
    ERR_set_debug("crypto/rsa/rsa_crpt.c",0x8b,"RSA_setup_blinding");
    ERR_set_error(4,0x8c,0);
  }
  pBVar4 = (BN_BLINDING *)0x0;
  pBVar2 = (BIGNUM *)0x0;
LAB_00100187:
  BN_CTX_end(ctx_00);
  if (ctx_00 != ctx) {
    BN_CTX_free(ctx_00);
  }
  if (rsa->d != pBVar2) {
    BN_free(pBVar2);
  }
  return pBVar4;
}



int RSA_blinding_on(RSA *rsa,BN_CTX *ctx)

{
  BN_BLINDING *pBVar1;
  
  if (rsa[1].engine != (ENGINE *)0x0) {
    RSA_blinding_off(rsa);
  }
  pBVar1 = RSA_setup_blinding(rsa,ctx);
  rsa[1].engine = (ENGINE *)pBVar1;
  if (pBVar1 != (BN_BLINDING *)0x0) {
    *(uint *)((long)&rsa->mt_blinding + 4) = *(uint *)((long)&rsa->mt_blinding + 4) & 0xffffff7f | 8
    ;
    return 1;
  }
  return 0;
}


