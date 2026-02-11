
int sk_comp_cmp(undefined8 *param_1,undefined8 *param_2)

{
  return *(int *)*param_1 - *(int *)*param_2;
}



void cmeth_free(void *param_1)

{
  CRYPTO_free(param_1);
  return;
}



long ossl_load_builtin_compressions(void)

{
  int iVar1;
  COMP_METHOD *pCVar2;
  long lVar3;
  undefined4 *ptr;
  undefined8 uVar4;
  
  pCVar2 = COMP_zlib();
  lVar3 = OPENSSL_sk_new(0x100000);
  iVar1 = COMP_get_type(pCVar2);
  if ((lVar3 != 0) && (iVar1 != 0)) {
    ptr = (undefined4 *)CRYPTO_malloc(0x18,"crypto/comp_methods.c",0x26);
    if (ptr != (undefined4 *)0x0) {
      *(COMP_METHOD **)(ptr + 4) = pCVar2;
      *ptr = 1;
      uVar4 = COMP_get_name(pCVar2);
      *(undefined8 *)(ptr + 2) = uVar4;
      iVar1 = OPENSSL_sk_push(lVar3,ptr);
      if (iVar1 == 0) {
        CRYPTO_free(ptr);
      }
    }
  }
  return lVar3;
}



void ossl_free_compression_methods_int(undefined8 param_1)

{
  OPENSSL_sk_pop_free(param_1,cmeth_free);
  return;
}


