
undefined8 * ossl_ecx_key_new(undefined8 param_1,uint param_2,byte param_3,char *param_4)

{
  undefined8 *ptr;
  char *pcVar1;
  
  ptr = (undefined8 *)CRYPTO_zalloc(0x68,"crypto/ec/ecx_key.c",0x17);
  if (ptr != (undefined8 *)0x0) {
    *ptr = param_1;
    *(byte *)(ptr + 2) = param_3 & 1 | *(byte *)(ptr + 2) & 0xfe;
    if (param_2 == 2) {
      ptr[0xb] = 0x20;
    }
    else if (param_2 < 3) {
      ptr[0xb] = (-(ulong)(param_2 == 0) & 0xffffffffffffffe8) + 0x38;
    }
    else if (param_2 == 3) {
      ptr[0xb] = 0x39;
    }
    *(uint *)(ptr + 0xc) = param_2;
    LOCK();
    *(undefined4 *)((long)ptr + 100) = 1;
    UNLOCK();
    if (param_4 == (char *)0x0) {
      return ptr;
    }
    pcVar1 = CRYPTO_strdup(param_4,"crypto/ec/ecx_key.c",0x32);
    ptr[1] = pcVar1;
    if (pcVar1 != (char *)0x0) {
      return ptr;
    }
    CRYPTO_free((void *)0x0);
    CRYPTO_free(ptr);
  }
  return (undefined8 *)0x0;
}



void ossl_ecx_key_free(void *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 == (void *)0x0) {
    return;
  }
  LOCK();
  piVar1 = (int *)((long)param_1 + 100);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if ((iVar2 != 1) && (0 < iVar2 + -1)) {
    return;
  }
  CRYPTO_free(*(void **)((long)param_1 + 8));
  CRYPTO_secure_clear_free
            (*(undefined8 *)((long)param_1 + 0x50),*(undefined8 *)((long)param_1 + 0x58),
             "crypto/ec/ecx_key.c",0x51);
  CRYPTO_free(param_1);
  return;
}



void ossl_ecx_key_set0_libctx(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}



bool ossl_ecx_key_up_ref(long param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = (int *)(param_1 + 100);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return 1 < iVar2 + 1;
}



void ossl_ecx_key_allocate_privkey(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = CRYPTO_secure_zalloc(*(undefined8 *)(param_1 + 0x58),"crypto/ec/ecx_key.c",0x69);
  *(undefined8 *)(param_1 + 0x50) = uVar1;
  return;
}



undefined8
ossl_ecx_compute_key
          (long param_1,long param_2,ulong param_3,long param_4,ulong *param_5,ulong param_6)

{
  int iVar1;
  undefined8 uVar2;
  
  if (((param_2 == 0) || (*(long *)(param_2 + 0x50) == 0)) || (param_1 == 0)) {
    ERR_new();
    ERR_set_debug("crypto/ec/ecx_key.c",0x74,"ossl_ecx_compute_key");
    ERR_set_error(0x39,0x80,0);
    return 0;
  }
  if ((param_3 != 0x20) && (param_3 != 0x38)) {
    ERR_new();
    ERR_set_debug("crypto/ec/ecx_key.c",0x7a,"ossl_ecx_compute_key");
    ERR_set_error(0x39,0x69,0);
    return 0;
  }
  if (param_4 != 0) {
    if (param_6 < param_3) {
      ERR_new();
      ERR_set_debug("crypto/ec/ecx_key.c",0x83,"ossl_ecx_compute_key");
      ERR_set_error(0x39,0x6a,0);
      return 0;
    }
    if (param_3 == 0x20) {
      iVar1 = ossl_x25519(param_4,*(long *)(param_2 + 0x50),param_1 + 0x11);
      if (iVar1 == 0) {
        ERR_new();
        uVar2 = 0x92;
        goto LAB_00100321;
      }
    }
    else {
      iVar1 = ossl_x448();
      if (iVar1 == 0) {
        ERR_new();
        uVar2 = 0xa0;
LAB_00100321:
        ERR_set_debug("crypto/ec/ecx_key.c",uVar2,"ossl_ecx_compute_key");
        ERR_set_error(0x39,0xa4,0);
        return 0;
      }
    }
  }
  *param_5 = param_3;
  return 1;
}


