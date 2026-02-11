
undefined8 rand_pool_grow(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  void *__src;
  ulong uVar3;
  void *__dest;
  ulong uVar4;
  
  uVar3 = param_1[5];
  lVar1 = param_1[1];
  if (param_2 <= uVar3 - lVar1) {
    return 1;
  }
  uVar2 = param_1[4];
  if ((*(int *)(param_1 + 2) == 0) && (param_2 <= uVar2 - lVar1)) {
    do {
      uVar4 = uVar2;
      if (uVar2 >> 1 <= uVar3) break;
      uVar3 = uVar3 * 2;
      uVar4 = uVar3;
    } while (uVar3 - lVar1 < param_2);
    if (*(int *)((long)param_1 + 0x14) == 0) {
      __dest = (void *)CRYPTO_zalloc(uVar4,"crypto/rand/rand_pool.c",0xda);
    }
    else {
      __dest = (void *)CRYPTO_secure_zalloc(uVar4,"crypto/rand/rand_pool.c",0xd8);
    }
    if (__dest != (void *)0x0) {
      __src = (void *)*param_1;
      memcpy(__dest,__src,param_1[1]);
      if (*(int *)((long)param_1 + 0x14) == 0) {
        CRYPTO_clear_free(__src,param_1[5],"crypto/rand/rand_pool.c",0xe1);
      }
      else {
        CRYPTO_secure_clear_free(__src,param_1[5],"crypto/rand/rand_pool.c",0xdf);
      }
      *param_1 = __dest;
      param_1[5] = uVar4;
      return 1;
    }
  }
  else {
    ERR_new();
    ERR_set_debug("crypto/rand/rand_pool.c",0xcf,"rand_pool_grow");
    ERR_set_error(0x24,0xc0103,0);
  }
  return 0;
}



long * ossl_rand_pool_new(int param_1,int param_2,ulong param_3,ulong param_4)

{
  long *ptr;
  long lVar1;
  ulong uVar2;
  
  ptr = (long *)CRYPTO_zalloc(0x40,"crypto/rand/rand_pool.c",0x19);
  if (param_2 == 0) {
    if (ptr == (long *)0x0) {
      return (long *)0x0;
    }
    ptr[3] = param_3;
    if (0x3000 < param_4) {
      param_4 = 0x3000;
    }
    uVar2 = 0x30;
    if (0x2f < param_3) {
      uVar2 = param_3;
    }
    ptr[4] = param_4;
    if (param_4 < uVar2) {
      uVar2 = param_4;
    }
    ptr[5] = uVar2;
    lVar1 = CRYPTO_zalloc(uVar2,"crypto/rand/rand_pool.c",0x29);
  }
  else {
    if (ptr == (long *)0x0) {
      return (long *)0x0;
    }
    ptr[3] = param_3;
    if (0x3000 < param_4) {
      param_4 = 0x3000;
    }
    uVar2 = 0x10;
    if (0xf < param_3) {
      uVar2 = param_3;
    }
    ptr[4] = param_4;
    if (param_4 < uVar2) {
      uVar2 = param_4;
    }
    ptr[5] = uVar2;
    lVar1 = CRYPTO_secure_zalloc(uVar2,"crypto/rand/rand_pool.c",0x27);
  }
  *ptr = lVar1;
  if (lVar1 == 0) {
    CRYPTO_free(ptr);
    return (long *)0x0;
  }
  ptr[7] = (long)param_1;
  *(int *)((long)ptr + 0x14) = param_2;
  return ptr;
}



void ossl_rand_pool_attach(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)CRYPTO_zalloc(0x40,"crypto/rand/rand_pool.c",0x40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
    *(undefined4 *)(puVar1 + 2) = 1;
    puVar1[1] = param_2;
    puVar1[3] = param_2;
    puVar1[4] = param_2;
    puVar1[5] = param_2;
    puVar1[6] = param_3;
  }
  return;
}



void ossl_rand_pool_free(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    if (*(int *)(param_1 + 2) == 0) {
      if (*(int *)((long)param_1 + 0x14) == 0) {
        CRYPTO_clear_free(*param_1,param_1[5],"crypto/rand/rand_pool.c",0x67);
      }
      else {
        CRYPTO_secure_clear_free(*param_1,param_1[5],"crypto/rand/rand_pool.c",0x65);
      }
    }
    CRYPTO_free(param_1);
    return;
  }
  return;
}



undefined8 ossl_rand_pool_buffer(undefined8 *param_1)

{
  return *param_1;
}



undefined8 ossl_rand_pool_entropy(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



undefined8 ossl_rand_pool_length(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



undefined8 ossl_rand_pool_detach(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  param_1[6] = 0;
  *param_1 = 0;
  return uVar1;
}



void ossl_rand_pool_reattach(undefined8 *param_1,void *param_2)

{
  *param_1 = param_2;
  OPENSSL_cleanse(param_2,param_1[1]);
  param_1[1] = 0;
  return;
}



ulong ossl_rand_pool_entropy_available(long param_1)

{
  ulong uVar1;
  
  if (*(ulong *)(param_1 + 0x38) <= *(ulong *)(param_1 + 0x30)) {
    uVar1 = *(ulong *)(param_1 + 0x30);
    if (*(ulong *)(param_1 + 8) < *(ulong *)(param_1 + 0x18)) {
      uVar1 = 0;
    }
    return uVar1;
  }
  return 0;
}



long ossl_rand_pool_entropy_needed(long param_1)

{
  long lVar1;
  
  lVar1 = *(ulong *)(param_1 + 0x38) - *(ulong *)(param_1 + 0x30);
  if (*(ulong *)(param_1 + 0x38) <= *(ulong *)(param_1 + 0x30)) {
    lVar1 = 0;
  }
  return lVar1;
}



ulong ossl_rand_pool_bytes_needed(long param_1,uint param_2)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  lVar3 = ossl_rand_pool_entropy_needed();
  if (param_2 == 0) {
    ERR_new();
    ERR_set_debug("crypto/rand/rand_pool.c",0xf4,"ossl_rand_pool_bytes_needed");
    ERR_set_error(0x24,0x69,0);
  }
  else {
    uVar1 = *(ulong *)(param_1 + 8);
    uVar5 = (ulong)param_2 * lVar3 + 7 >> 3;
    if (*(long *)(param_1 + 0x20) - uVar1 < uVar5) {
      ERR_new();
      ERR_set_debug("crypto/rand/rand_pool.c",0xfc,"ossl_rand_pool_bytes_needed");
      ERR_set_error(0x24,0x7d,
                    "entropy_factor=%u, entropy_needed=%zu, bytes_needed=%zu,pool->max_len=%zu, pool->len=%zu"
                    ,param_2,lVar3,uVar5,*(undefined8 *)(param_1 + 0x20),
                    *(undefined8 *)(param_1 + 8));
    }
    else {
      uVar4 = *(ulong *)(param_1 + 0x18) - uVar1;
      if (uVar4 <= uVar5) {
        uVar4 = uVar5;
      }
      if (uVar1 < *(ulong *)(param_1 + 0x18)) {
        uVar5 = uVar4;
      }
      iVar2 = rand_pool_grow(param_1,uVar5);
      if (iVar2 != 0) {
        return uVar5;
      }
      *(undefined8 *)(param_1 + 8) = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
    }
  }
  return 0;
}



long ossl_rand_pool_bytes_remaining(long param_1)

{
  return *(long *)(param_1 + 0x20) - *(long *)(param_1 + 8);
}



undefined8 ossl_rand_pool_add(long *param_1,void *param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar1 = param_1[1];
  if (param_1[4] - uVar1 < param_3) {
    ERR_new();
    ERR_set_debug("crypto/rand/rand_pool.c",0x131,"ossl_rand_pool_add");
    ERR_set_error(0x24,0x6a,0);
    return 0;
  }
  if (*param_1 == 0) {
    ERR_new();
    uVar3 = 0x136;
LAB_00100669:
    ERR_set_debug("crypto/rand/rand_pool.c",uVar3,"ossl_rand_pool_add");
    ERR_set_error(0x24,0xc0103,0);
    uVar3 = 0;
  }
  else {
    if (param_3 != 0) {
      if ((uVar1 < (ulong)param_1[5]) && (param_2 == (void *)(*param_1 + uVar1))) {
        ERR_new();
        uVar3 = 0x144;
        goto LAB_00100669;
      }
      iVar2 = rand_pool_grow(param_1,param_3);
      if (iVar2 == 0) {
        return 0;
      }
      memcpy((void *)(param_1[1] + *param_1),param_2,param_3);
      param_1[1] = param_1[1] + param_3;
      param_1[6] = param_1[6] + param_4;
    }
    uVar3 = 1;
  }
  return uVar3;
}



long ossl_rand_pool_add_begin(long *param_1,ulong param_2)

{
  ulong uVar1;
  void *__src;
  void *__dest;
  long lVar2;
  ulong uVar3;
  char *pcVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  if (param_2 == 0) {
    return 0;
  }
  uVar1 = param_1[4];
  lVar2 = param_1[1];
  if (uVar1 - lVar2 < param_2) {
    ERR_new();
    ERR_set_debug("crypto/rand/rand_pool.c",0x16a,"ossl_rand_pool_add_begin");
    ERR_set_error(0x24,0x7d,0);
    return 0;
  }
  __dest = (void *)*param_1;
  if (__dest != (void *)0x0) {
    uVar3 = param_1[5];
    if (uVar3 - lVar2 < param_2) {
      if ((int)param_1[2] != 0) {
        ERR_new();
        pcVar4 = "rand_pool_grow";
        uVar5 = 0xcf;
        goto LAB_001007e1;
      }
      do {
        uVar6 = uVar1;
        if (uVar1 >> 1 <= uVar3) break;
        uVar3 = uVar3 * 2;
        uVar6 = uVar3;
      } while (uVar3 - lVar2 < param_2);
      if (*(int *)((long)param_1 + 0x14) == 0) {
        __dest = (void *)CRYPTO_zalloc(uVar6,"crypto/rand/rand_pool.c",0xda);
      }
      else {
        __dest = (void *)CRYPTO_secure_zalloc(uVar6,"crypto/rand/rand_pool.c",0xd8);
      }
      if (__dest == (void *)0x0) {
        return 0;
      }
      __src = (void *)*param_1;
      memcpy(__dest,__src,param_1[1]);
      if (*(int *)((long)param_1 + 0x14) == 0) {
        CRYPTO_clear_free(__src,param_1[5],"crypto/rand/rand_pool.c",0xe1);
      }
      else {
        CRYPTO_secure_clear_free(__src,param_1[5],"crypto/rand/rand_pool.c",0xdf);
      }
      *param_1 = (long)__dest;
      lVar2 = param_1[1];
      param_1[5] = uVar6;
    }
    return lVar2 + (long)__dest;
  }
  ERR_new();
  pcVar4 = "ossl_rand_pool_add_begin";
  uVar5 = 0x16f;
LAB_001007e1:
  ERR_set_debug("crypto/rand/rand_pool.c",uVar5,pcVar4);
  ERR_set_error(0x24,0xc0103,0);
  return 0;
}



undefined8 ossl_rand_pool_add_end(long param_1,ulong param_2,long param_3)

{
  if (param_2 <= (ulong)(*(long *)(param_1 + 0x28) - *(long *)(param_1 + 8))) {
    if (param_2 != 0) {
      *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + param_3;
      *(ulong *)(param_1 + 8) = *(long *)(param_1 + 8) + param_2;
    }
    return 1;
  }
  ERR_new();
  ERR_set_debug("crypto/rand/rand_pool.c",0x18e,"ossl_rand_pool_add_end");
  ERR_set_error(0x24,0x7d,0);
  return 0;
}



undefined8 ossl_rand_pool_adin_mix_in(long *param_1,byte *param_2,ulong param_3)

{
  byte *pbVar1;
  ulong uVar2;
  ulong uVar3;
  byte *pbVar4;
  
  if ((param_2 != (byte *)0x0) && (param_3 != 0)) {
    pbVar1 = (byte *)*param_1;
    if (pbVar1 == (byte *)0x0) {
      ERR_new();
      ERR_set_debug("crypto/rand/rand_pool.c",0x1ad,"ossl_rand_pool_adin_mix_in");
      ERR_set_error(0x24,0xc0103,0);
    }
    else {
      if (param_1[1] != 0) {
        uVar2 = 1;
        *pbVar1 = *pbVar1 ^ *param_2;
        if (param_3 != 1) {
          do {
            uVar3 = uVar2 % (ulong)param_1[1];
            pbVar1 = param_2 + uVar2;
            uVar2 = uVar2 + 1;
            pbVar4 = (byte *)(uVar3 + *param_1);
            *pbVar4 = *pbVar4 ^ *pbVar1;
          } while (param_3 != uVar2);
        }
        return 1;
      }
      ERR_new();
      ERR_set_debug("crypto/rand/rand_pool.c",0x1b2,"ossl_rand_pool_adin_mix_in");
      ERR_set_error(0x24,0x8e,0);
    }
    return 0;
  }
  return 1;
}


