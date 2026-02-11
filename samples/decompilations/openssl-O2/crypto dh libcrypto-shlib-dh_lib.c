
int DH_set_method(DH *dh,DH_METHOD *meth)

{
  code *pcVar1;
  _func_1704 *p_Var2;
  
  pcVar1 = *(code **)&dh[1].priv_key[1].neg;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
  }
  ENGINE_finish((ENGINE *)dh[1].length);
  p_Var2 = meth->init;
  dh[1].priv_key = (BIGNUM *)meth;
  dh[1].length = 0;
  if (p_Var2 != (_func_1704 *)0x0) {
    (*p_Var2)(dh);
  }
  return 1;
}



undefined8 ossl_dh_get_method(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



void DH_free(DH *dh)

{
  DH *pDVar1;
  int iVar2;
  code *pcVar3;
  
  if (dh == (DH *)0x0) {
    return;
  }
  LOCK();
  pDVar1 = dh + 1;
  iVar2 = pDVar1->pad;
  pDVar1->pad = pDVar1->pad + -1;
  UNLOCK();
  if ((iVar2 != 1) && (0 < iVar2 + -1)) {
    return;
  }
  if ((dh[1].priv_key != (BIGNUM *)0x0) &&
     (pcVar3 = *(code **)&dh[1].priv_key[1].neg, pcVar3 != (code *)0x0)) {
    (*pcVar3)(dh);
  }
  ENGINE_finish((ENGINE *)dh[1].length);
  CRYPTO_free_ex_data(6,dh,(CRYPTO_EX_DATA *)&dh[1].p);
  CRYPTO_THREAD_lock_free(*(undefined8 *)&dh[1].flags);
  ossl_ffc_params_cleanup(&dh->p);
  BN_clear_free((BIGNUM *)(dh->ex_data).sk);
  BN_clear_free(*(BIGNUM **)&(dh->ex_data).dummy);
  CRYPTO_free(dh);
  return;
}



DH * dh_new_intern(ENGINE *param_1,BIGNUM *param_2)

{
  code *pcVar1;
  int iVar2;
  DH *dh;
  long lVar3;
  DH_METHOD *pDVar4;
  undefined8 uVar5;
  
  dh = (DH *)CRYPTO_zalloc(0xd0,"crypto/dh/dh_lib.c",0x4c);
  if (dh == (DH *)0x0) {
    return (DH *)0x0;
  }
  lVar3 = CRYPTO_THREAD_lock_new();
  *(long *)&dh[1].flags = lVar3;
  if (lVar3 == 0) {
    ERR_new();
    ERR_set_debug("crypto/dh/dh_lib.c",0x53,"dh_new_intern");
    ERR_set_error(5,0x8000f,0);
    CRYPTO_free(dh);
    return (DH *)0x0;
  }
  LOCK();
  dh[1].pad = 1;
  UNLOCK();
  dh[1].pub_key = param_2;
  pDVar4 = DH_get_default_method();
  dh[1].priv_key = (BIGNUM *)pDVar4;
  *(int *)&dh->meth = pDVar4->flags;
  if (param_1 == (ENGINE *)0x0) {
    param_1 = ENGINE_get_default_DH();
    dh[1].length = (long)param_1;
    if (param_1 != (ENGINE *)0x0) goto LAB_001001bd;
    pDVar4 = (DH_METHOD *)dh[1].priv_key;
LAB_001001d5:
    *(int *)&dh->meth = pDVar4->flags;
    iVar2 = CRYPTO_new_ex_data(6,dh,(CRYPTO_EX_DATA *)&dh[1].p);
    if (iVar2 != 0) {
      ossl_ffc_params_init(&dh->p);
      pcVar1 = *(code **)&dh[1].priv_key[1].top;
      if (pcVar1 == (code *)0x0) {
        return dh;
      }
      iVar2 = (*pcVar1)(dh);
      if (iVar2 != 0) {
        return dh;
      }
      ERR_new();
      ERR_set_debug("crypto/dh/dh_lib.c",0x7d,"dh_new_intern");
      ERR_set_error(5,0xc0105,0);
    }
  }
  else {
    iVar2 = ENGINE_init(param_1);
    if (iVar2 == 0) {
      ERR_new();
      uVar5 = 100;
    }
    else {
      dh[1].length = (long)param_1;
LAB_001001bd:
      pDVar4 = ENGINE_get_DH(param_1);
      dh[1].priv_key = (BIGNUM *)pDVar4;
      if (pDVar4 != (DH_METHOD *)0x0) goto LAB_001001d5;
      ERR_new();
      uVar5 = 0x6d;
    }
    ERR_set_debug("crypto/dh/dh_lib.c",uVar5,"dh_new_intern");
    ERR_set_error(5,0x80026,0);
  }
  DH_free(dh);
  return (DH *)0x0;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

DH * DH_new(void)

{
  DH *pDVar1;
  
  pDVar1 = (DH *)dh_new_intern(0,0);
  return pDVar1;
}



DH * DH_new_method(ENGINE *engine)

{
  DH *pDVar1;
  
  pDVar1 = (DH *)dh_new_intern(engine,0);
  return pDVar1;
}



void ossl_dh_new_ex(undefined8 param_1)

{
  dh_new_intern(0,param_1);
  return;
}



int DH_up_ref(DH *dh)

{
  DH *pDVar1;
  int iVar2;
  
  LOCK();
  pDVar1 = dh + 1;
  iVar2 = pDVar1->pad;
  pDVar1->pad = pDVar1->pad + 1;
  UNLOCK();
  return (int)(1 < iVar2 + 1);
}



void ossl_dh_set0_libctx(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0xb0) = param_2;
  return;
}



int DH_set_ex_data(DH *d,int idx,void *arg)

{
  int iVar1;
  
  iVar1 = CRYPTO_set_ex_data((CRYPTO_EX_DATA *)&d[1].p,idx,arg);
  return iVar1;
}



void * DH_get_ex_data(DH *d,int idx)

{
  void *pvVar1;
  
  pvVar1 = CRYPTO_get_ex_data((CRYPTO_EX_DATA *)&d[1].p,idx);
  return pvVar1;
}



int DH_bits(long param_1)

{
  int iVar1;
  
  if (*(BIGNUM **)(param_1 + 8) != (BIGNUM *)0x0) {
    iVar1 = BN_num_bits(*(BIGNUM **)(param_1 + 8));
    return iVar1;
  }
  return -1;
}



int DH_size(DH *dh)

{
  int iVar1;
  int iVar2;
  
  if (dh->p != (BIGNUM *)0x0) {
    iVar1 = BN_num_bits(dh->p);
    iVar2 = iVar1 + 7;
    if (iVar1 + 7 < 0) {
      iVar2 = iVar1 + 0xe;
    }
    return iVar2 >> 3;
  }
  return -1;
}



undefined8 DH_security_bits(long param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (*(BIGNUM **)(param_1 + 0x10) == (BIGNUM *)0x0) {
    iVar1 = *(int *)(param_1 + 0x68);
    if (iVar1 == 0) {
      iVar1 = -1;
    }
  }
  else {
    iVar1 = BN_num_bits(*(BIGNUM **)(param_1 + 0x10));
  }
  if (*(BIGNUM **)(param_1 + 8) == (BIGNUM *)0x0) {
    return 0xffffffff;
  }
  iVar2 = BN_num_bits(*(BIGNUM **)(param_1 + 8));
  uVar3 = BN_security_bits(iVar2,iVar1);
  return uVar3;
}



void DH_get0_pqg(long param_1)

{
  ossl_ffc_params_get0_pqg(param_1 + 8);
  return;
}



undefined8 DH_set0_pqg(long param_1,long param_2,undefined8 param_3,long param_4)

{
  if (param_2 == 0 && *(long *)(param_1 + 8) == 0) {
    return 0;
  }
  if (param_4 != 0 || *(long *)(param_1 + 0x18) != 0) {
    ossl_ffc_params_set0_pqg(param_1 + 8);
    ossl_dh_cache_named_group(param_1);
    *(long *)(param_1 + 200) = *(long *)(param_1 + 200) + 1;
    return 1;
  }
  return 0;
}



long DH_get_length(long param_1)

{
  return (long)*(int *)(param_1 + 0x68);
}



undefined8 DH_set_length(long param_1,undefined4 param_2)

{
  *(long *)(param_1 + 200) = *(long *)(param_1 + 200) + 1;
  *(undefined4 *)(param_1 + 0x68) = param_2;
  return 1;
}



void DH_get0_key(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(param_1 + 0x70);
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = *(undefined8 *)(param_1 + 0x78);
  }
  return;
}



undefined8 DH_set0_key(long param_1,long param_2,long param_3)

{
  if (param_2 != 0) {
    BN_clear_free(*(BIGNUM **)(param_1 + 0x70));
    *(long *)(param_1 + 0x70) = param_2;
  }
  if (param_3 != 0) {
    BN_clear_free(*(BIGNUM **)(param_1 + 0x78));
    *(long *)(param_1 + 0x78) = param_3;
  }
  *(long *)(param_1 + 200) = *(long *)(param_1 + 200) + 1;
  return 1;
}



undefined8 DH_get0_p(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



undefined8 DH_get0_q(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



undefined8 DH_get0_g(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



undefined8 DH_get0_priv_key(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



undefined8 DH_get0_pub_key(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



void DH_clear_flags(long param_1,uint param_2)

{
  *(uint *)(param_1 + 0x80) = *(uint *)(param_1 + 0x80) & ~param_2;
  return;
}



uint DH_test_flags(long param_1,uint param_2)

{
  return *(uint *)(param_1 + 0x80) & param_2;
}



void DH_set_flags(long param_1,uint param_2)

{
  *(uint *)(param_1 + 0x80) = *(uint *)(param_1 + 0x80) | param_2;
  return;
}



undefined8 DH_get0_engine(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



long ossl_dh_get0_params(long param_1)

{
  return param_1 + 8;
}



undefined4 ossl_dh_get0_nid(long param_1)

{
  return *(undefined4 *)(param_1 + 0x3c);
}


