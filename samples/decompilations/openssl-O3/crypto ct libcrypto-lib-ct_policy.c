
void * CT_POLICY_EVAL_CTX_new_ex(undefined8 param_1,char *param_2)

{
  void *ptr;
  char *pcVar1;
  ulong uVar2;
  
  ptr = (void *)CRYPTO_zalloc(0x30,"crypto/ct/ct_policy.c",0x1f);
  if (ptr == (void *)0x0) {
LAB_001000a9:
    ptr = (void *)0x0;
  }
  else {
    *(undefined8 *)((long)ptr + 0x20) = param_1;
    if (param_2 != (char *)0x0) {
      pcVar1 = CRYPTO_strdup(param_2,"crypto/ct/ct_policy.c",0x27);
      *(char **)((long)ptr + 0x28) = pcVar1;
      if (pcVar1 == (char *)0x0) {
        CRYPTO_free(ptr);
        goto LAB_001000a9;
      }
    }
    uVar2 = ossl_time_now();
    if (uVar2 < 0xffffffba269b4800) {
      uVar2 = (uVar2 + 300000000000) / 1000000;
    }
    else {
      uVar2 = 0x10c6f7a0b5ed;
    }
    *(ulong *)((long)ptr + 0x18) = uVar2;
  }
  return ptr;
}



void CT_POLICY_EVAL_CTX_new(void)

{
  CT_POLICY_EVAL_CTX_new_ex(0,0);
  return;
}



void CT_POLICY_EVAL_CTX_free(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    X509_free((X509 *)*param_1);
    X509_free((X509 *)param_1[1]);
    CRYPTO_free((void *)param_1[5]);
    CRYPTO_free(param_1);
    return;
  }
  return;
}



undefined8 CT_POLICY_EVAL_CTX_set1_cert(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = X509_up_ref(param_2);
  if ((int)uVar1 != 0) {
    *param_1 = param_2;
    uVar1 = 1;
  }
  return uVar1;
}



undefined8 CT_POLICY_EVAL_CTX_set1_issuer(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = X509_up_ref(param_2);
  if ((int)uVar1 != 0) {
    *(undefined8 *)(param_1 + 8) = param_2;
    uVar1 = 1;
  }
  return uVar1;
}



void CT_POLICY_EVAL_CTX_set_shared_CTLOG_STORE(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return;
}



void CT_POLICY_EVAL_CTX_set_time(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x18) = param_2;
  return;
}



undefined8 CT_POLICY_EVAL_CTX_get0_cert(undefined8 *param_1)

{
  return *param_1;
}



undefined8 CT_POLICY_EVAL_CTX_get0_issuer(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



undefined8 CT_POLICY_EVAL_CTX_get0_log_store(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



undefined8 CT_POLICY_EVAL_CTX_get_time(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}


