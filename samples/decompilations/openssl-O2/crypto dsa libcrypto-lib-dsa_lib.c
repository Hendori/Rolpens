
int DSA_set_ex_data(DSA *d,int idx,void *arg)

{
  int iVar1;
  
  iVar1 = CRYPTO_set_ex_data((CRYPTO_EX_DATA *)&d[1].version,idx,arg);
  return iVar1;
}



void * DSA_get_ex_data(DSA *d,int idx)

{
  void *pvVar1;
  
  pvVar1 = CRYPTO_get_ex_data((CRYPTO_EX_DATA *)&d[1].version,idx);
  return pvVar1;
}



DH * DSA_dup_DH(DSA *r)

{
  int iVar1;
  DH *dh;
  undefined8 uVar2;
  BIGNUM *pBVar3;
  BIGNUM *a;
  
  if ((r == (DSA *)0x0) || (dh = DH_new(), dh == (DH *)0x0)) {
    a = (BIGNUM *)0x0;
    pBVar3 = (BIGNUM *)0x0;
    dh = (DH *)0x0;
  }
  else {
    uVar2 = ossl_dh_get0_params(dh);
    iVar1 = ossl_ffc_params_copy(uVar2,&r->version);
    if (iVar1 != 0) {
      pBVar3 = (BIGNUM *)(r->ex_data).sk;
      if (pBVar3 == (BIGNUM *)0x0) {
        if (*(long *)&(r->ex_data).dummy == 0) {
          return dh;
        }
      }
      else {
        pBVar3 = BN_dup(pBVar3);
        if (pBVar3 != (BIGNUM *)0x0) {
          a = *(BIGNUM **)&(r->ex_data).dummy;
          if (((a == (BIGNUM *)0x0) || (a = BN_dup(a), a != (BIGNUM *)0x0)) &&
             (iVar1 = DH_set0_key(dh,pBVar3,a), iVar1 != 0)) {
            return dh;
          }
          goto LAB_001000bc;
        }
      }
    }
    a = (BIGNUM *)0x0;
    pBVar3 = (BIGNUM *)0x0;
  }
LAB_001000bc:
  BN_free(pBVar3);
  BN_free(a);
  DH_free(dh);
  return (DH *)0x0;
}



void DSA_clear_flags(long param_1,uint param_2)

{
  *(uint *)(param_1 + 0x78) = *(uint *)(param_1 + 0x78) & ~param_2;
  return;
}



uint DSA_test_flags(long param_1,uint param_2)

{
  return *(uint *)(param_1 + 0x78) & param_2;
}



void DSA_set_flags(long param_1,uint param_2)

{
  *(uint *)(param_1 + 0x78) = *(uint *)(param_1 + 0x78) | param_2;
  return;
}



undefined8 DSA_get0_engine(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



int DSA_set_method(DSA *dsa,DSA_METHOD *param_2)

{
  code *pcVar1;
  _func_1738 *p_Var2;
  
  pcVar1 = *(code **)&dsa[1].p[2].top;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
  }
  ENGINE_finish((ENGINE *)dsa[1].q);
  p_Var2 = param_2->init;
  dsa[1].p = (BIGNUM *)param_2;
  dsa[1].q = (BIGNUM *)0x0;
  if (p_Var2 != (_func_1738 *)0x0) {
    (*p_Var2)(dsa);
  }
  return 1;
}



undefined8 DSA_get_method(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



void DSA_free(DSA *r)

{
  DSA *pDVar1;
  int iVar2;
  code *pcVar3;
  
  if (r == (DSA *)0x0) {
    return;
  }
  LOCK();
  pDVar1 = r + 1;
  iVar2 = pDVar1->pad;
  pDVar1->pad = pDVar1->pad + -1;
  UNLOCK();
  if ((iVar2 != 1) && (0 < iVar2 + -1)) {
    return;
  }
  if ((r[1].p != (BIGNUM *)0x0) && (pcVar3 = *(code **)&r[1].p[2].top, pcVar3 != (code *)0x0)) {
    (*pcVar3)(r);
  }
  ENGINE_finish((ENGINE *)r[1].q);
  CRYPTO_free_ex_data(7,r,(CRYPTO_EX_DATA *)&r[1].version);
  CRYPTO_THREAD_lock_free(r[1].g);
  ossl_ffc_params_cleanup(&r->version);
  BN_clear_free((BIGNUM *)(r->ex_data).sk);
  BN_clear_free(*(BIGNUM **)&(r->ex_data).dummy);
  CRYPTO_free(r);
  return;
}



DSA * dsa_new_intern(BIGNUM *param_1,BIGNUM *param_2)

{
  code *pcVar1;
  int iVar2;
  DSA *r;
  BIGNUM *pBVar3;
  DSA_METHOD *pDVar4;
  undefined8 uVar5;
  
  r = (DSA *)CRYPTO_zalloc(200,"crypto/dsa/dsa_lib.c",0x87);
  if (r == (DSA *)0x0) {
    return (DSA *)0x0;
  }
  pBVar3 = (BIGNUM *)CRYPTO_THREAD_lock_new();
  r[1].g = pBVar3;
  if (pBVar3 == (BIGNUM *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/dsa/dsa_lib.c",0x8e,"dsa_new_intern");
    ERR_set_error(10,0x8000f,0);
    CRYPTO_free(r);
    return (DSA *)0x0;
  }
  LOCK();
  r[1].pad = 1;
  UNLOCK();
  r[1].pub_key = param_2;
  pDVar4 = DSA_get_default_method();
  r[1].p = (BIGNUM *)pDVar4;
  *(uint *)&r->meth = pDVar4->flags & 0xfffffbff;
  if (param_1 == (BIGNUM *)0x0) {
    param_1 = (BIGNUM *)ENGINE_get_default_DSA();
    r[1].q = param_1;
    if (param_1 != (BIGNUM *)0x0) goto LAB_001002ed;
    pDVar4 = (DSA_METHOD *)r[1].p;
LAB_00100305:
    *(uint *)&r->meth = pDVar4->flags & 0xfffffbff;
    iVar2 = ossl_crypto_new_ex_data_ex(param_2,7,r,&r[1].version);
    if (iVar2 != 0) {
      ossl_ffc_params_init(&r->version);
      pcVar1 = (code *)r[1].p[2].d;
      if (pcVar1 == (code *)0x0) {
        return r;
      }
      iVar2 = (*pcVar1)(r);
      if (iVar2 != 0) {
        return r;
      }
      ERR_new();
      ERR_set_debug("crypto/dsa/dsa_lib.c",0xb9,"dsa_new_intern");
      ERR_set_error(10,0xc0105,0);
    }
  }
  else {
    iVar2 = ENGINE_init((ENGINE *)param_1);
    if (iVar2 == 0) {
      ERR_new();
      uVar5 = 0x9f;
    }
    else {
      r[1].q = param_1;
LAB_001002ed:
      pDVar4 = ENGINE_get_DSA((ENGINE *)param_1);
      r[1].p = (BIGNUM *)pDVar4;
      if (pDVar4 != (DSA_METHOD *)0x0) goto LAB_00100305;
      ERR_new();
      uVar5 = 0xa8;
    }
    ERR_set_debug("crypto/dsa/dsa_lib.c",uVar5,"dsa_new_intern");
    ERR_set_error(10,0x80026,0);
  }
  DSA_free(r);
  return (DSA *)0x0;
}



DSA * DSA_new_method(ENGINE *engine)

{
  DSA *pDVar1;
  
  pDVar1 = (DSA *)dsa_new_intern(engine,0);
  return pDVar1;
}



void ossl_dsa_new(undefined8 param_1)

{
  dsa_new_intern(0,param_1);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

DSA * DSA_new(void)

{
  DSA *pDVar1;
  
  pDVar1 = (DSA *)dsa_new_intern(0,0);
  return pDVar1;
}



int DSA_up_ref(DSA *r)

{
  DSA *pDVar1;
  int iVar2;
  
  LOCK();
  pDVar1 = r + 1;
  iVar2 = pDVar1->pad;
  pDVar1->pad = pDVar1->pad + 1;
  UNLOCK();
  return (int)(1 < iVar2 + 1);
}



void ossl_dsa_set0_libctx(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0xb8) = param_2;
  return;
}



void DSA_get0_pqg(long param_1)

{
  ossl_ffc_params_get0_pqg(param_1 + 8);
  return;
}



undefined8 DSA_set0_pqg(long param_1,long param_2,long param_3,long param_4)

{
  if (param_2 == 0 && *(long *)(param_1 + 8) == 0) {
    return 0;
  }
  if ((param_3 != 0 || *(long *)(param_1 + 0x10) != 0) &&
     (param_4 != 0 || *(long *)(param_1 + 0x18) != 0)) {
    ossl_ffc_params_set0_pqg(param_1 + 8);
    *(long *)(param_1 + 0xc0) = *(long *)(param_1 + 0xc0) + 1;
    return 1;
  }
  return 0;
}



undefined8 DSA_get0_p(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



undefined8 DSA_get0_q(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



undefined8 DSA_get0_g(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



undefined8 DSA_get0_pub_key(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



undefined8 DSA_get0_priv_key(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



void DSA_get0_key(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(param_1 + 0x68);
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = *(undefined8 *)(param_1 + 0x70);
  }
  return;
}



undefined8 DSA_set0_key(long param_1,long param_2,long param_3)

{
  if (param_2 != 0) {
    BN_free(*(BIGNUM **)(param_1 + 0x68));
    *(long *)(param_1 + 0x68) = param_2;
  }
  if (param_3 != 0) {
    BN_free(*(BIGNUM **)(param_1 + 0x70));
    *(long *)(param_1 + 0x70) = param_3;
  }
  *(long *)(param_1 + 0xc0) = *(long *)(param_1 + 0xc0) + 1;
  return 1;
}



undefined8 DSA_security_bits(long param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (*(long *)(param_1 + 8) == 0) {
    return 0xffffffff;
  }
  if (*(BIGNUM **)(param_1 + 0x10) != (BIGNUM *)0x0) {
    iVar1 = BN_num_bits(*(BIGNUM **)(param_1 + 0x10));
    iVar2 = BN_num_bits(*(BIGNUM **)(param_1 + 8));
    uVar3 = BN_security_bits(iVar2,iVar1);
    return uVar3;
  }
  return 0xffffffff;
}



int DSA_bits(long param_1)

{
  int iVar1;
  
  if (*(BIGNUM **)(param_1 + 8) != (BIGNUM *)0x0) {
    iVar1 = BN_num_bits(*(BIGNUM **)(param_1 + 8));
    return iVar1;
  }
  return -1;
}



long ossl_dsa_get0_params(long param_1)

{
  return param_1 + 8;
}



void ossl_dsa_ffc_params_fromdata(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  
  uVar1 = ossl_dsa_get0_params();
  iVar2 = ossl_ffc_params_fromdata(uVar1,param_2);
  if (iVar2 != 0) {
    *(long *)(param_1 + 0xc0) = *(long *)(param_1 + 0xc0) + 1;
  }
  return;
}


