
undefined8 test_rng_uninstantiate(long param_1)

{
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return 1;
}



undefined8 test_rng_reseed(void)

{
  return 1;
}



undefined1 * test_rng_gettable_ctx_params(void)

{
  return known_gettable_ctx_params_2;
}



undefined1 * test_rng_settable_ctx_params(void)

{
  return known_settable_ctx_params_1;
}



undefined8 test_rng_verify_zeroization(void)

{
  return 1;
}



ulong test_rng_get_seed(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                       ulong param_5)

{
  ulong uVar1;
  
  *param_2 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(ulong *)(param_1 + 0x30);
  if (param_5 <= *(ulong *)(param_1 + 0x30)) {
    uVar1 = param_5;
  }
  return uVar1;
}



bool test_rng_get_ctx_params(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = OSSL_PARAM_locate(param_2,"state");
  if ((lVar2 != 0) && (iVar1 = OSSL_PARAM_set_int(lVar2,*(undefined4 *)(param_1 + 0xc)), iVar1 == 0)
     ) {
    return false;
  }
  lVar2 = OSSL_PARAM_locate(param_2,"strength");
  if ((lVar2 != 0) &&
     (iVar1 = OSSL_PARAM_set_int(lVar2,*(undefined4 *)(param_1 + 0x10)), iVar1 == 0)) {
    return false;
  }
  lVar2 = OSSL_PARAM_locate(param_2,"max_request");
  if ((lVar2 != 0) &&
     (iVar1 = OSSL_PARAM_set_size_t(lVar2,*(undefined8 *)(param_1 + 0x18)), iVar1 == 0)) {
    return false;
  }
  lVar2 = OSSL_PARAM_locate(param_2,"generate");
  if (lVar2 == 0) {
    return true;
  }
  iVar1 = OSSL_PARAM_set_uint(lVar2,*(undefined4 *)(param_1 + 8));
  return iVar1 != 0;
}



bool test_rng_set_ctx_params(long param_1,long *param_2)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  long in_FS_OFFSET;
  bool bVar4;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_30 = 0;
  local_28 = 0;
  if ((param_2 != (long *)0x0) && (*param_2 != 0)) {
    lVar3 = OSSL_PARAM_locate_const(param_2,"strength");
    if (lVar3 != 0) {
      iVar2 = OSSL_PARAM_get_uint(lVar3,param_1 + 0x10);
      if (iVar2 != 0) goto LAB_001001b1;
LAB_001001e1:
      bVar4 = false;
      goto LAB_001001ed;
    }
LAB_001001b1:
    lVar3 = OSSL_PARAM_locate_const(param_2,"test_entropy");
    if (lVar3 != 0) {
      iVar2 = OSSL_PARAM_get_octet_string(lVar3,&local_30,0,&local_28);
      if (iVar2 == 0) goto LAB_001001e1;
      CRYPTO_free(*(void **)(param_1 + 0x20));
      uVar1 = local_30;
      *(undefined8 *)(param_1 + 0x38) = 0;
      local_30 = 0;
      *(undefined8 *)(param_1 + 0x20) = uVar1;
      *(undefined8 *)(param_1 + 0x30) = local_28;
    }
    lVar3 = OSSL_PARAM_locate_const(param_2,"test_nonce");
    if (lVar3 != 0) {
      iVar2 = OSSL_PARAM_get_octet_string(lVar3,&local_30,0,&local_28);
      if (iVar2 == 0) goto LAB_001001e1;
      CRYPTO_free(*(void **)(param_1 + 0x28));
      *(undefined8 *)(param_1 + 0x28) = local_30;
      *(undefined8 *)(param_1 + 0x40) = local_28;
    }
    lVar3 = OSSL_PARAM_locate_const(param_2,"max_request");
    if (lVar3 != 0) {
      iVar2 = OSSL_PARAM_get_size_t(lVar3,param_1 + 0x18);
      if (iVar2 == 0) goto LAB_001001e1;
    }
    lVar3 = OSSL_PARAM_locate_const(param_2,"generate");
    if (lVar3 != 0) {
      iVar2 = OSSL_PARAM_get_uint(lVar3,param_1 + 8);
      bVar4 = iVar2 != 0;
      goto LAB_001001ed;
    }
  }
  bVar4 = true;
LAB_001001ed:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void test_rng_unlock(long param_1)

{
  if ((param_1 != 0) && (*(long *)(param_1 + 0x48) != 0)) {
    CRYPTO_THREAD_unlock();
    return;
  }
  return;
}



undefined8 test_rng_lock(long param_1)

{
  undefined8 uVar1;
  
  if ((param_1 != 0) && (*(long *)(param_1 + 0x48) != 0)) {
    uVar1 = CRYPTO_THREAD_write_lock();
    return uVar1;
  }
  return 1;
}



void test_rng_new(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)CRYPTO_zalloc(0x58,"providers/implementations/rands/test_rng.c",0x3b);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[3] = 0x7fffffff;
    *puVar1 = param_1;
    *(undefined4 *)((long)puVar1 + 0xc) = 0;
  }
  return;
}



undefined8 test_rng_generate(long param_1,undefined1 *param_2,ulong param_3,uint param_4)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  
  uVar3 = 0;
  if (param_4 <= *(uint *)(param_1 + 0x10)) {
    if (*(int *)(param_1 + 8) == 0) {
      if (param_3 <= (ulong)(*(long *)(param_1 + 0x30) - *(long *)(param_1 + 0x38))) {
        memcpy(param_2,(void *)(*(long *)(param_1 + 0x38) + *(long *)(param_1 + 0x20)),param_3);
        *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + param_3;
        uVar3 = 1;
      }
    }
    else {
      puVar1 = param_2 + param_3;
      if (param_3 != 0) {
        do {
          puVar4 = param_2 + 1;
          uVar2 = *(uint *)(param_1 + 0x50) ^ *(uint *)(param_1 + 0x50) << 0xd;
          uVar2 = uVar2 ^ uVar2 >> 0x11;
          uVar2 = uVar2 ^ uVar2 << 5;
          *(uint *)(param_1 + 0x50) = uVar2;
          *param_2 = (char)uVar2;
          param_2 = puVar4;
        } while (puVar1 != puVar4);
      }
      uVar3 = 1;
    }
  }
  return uVar3;
}



long test_rng_nonce(long param_1,undefined1 *param_2,uint param_3,long param_4)

{
  uint uVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  
  lVar2 = 0;
  if (param_3 <= *(uint *)(param_1 + 0x10)) {
    if (*(int *)(param_1 + 8) == 0) {
      if (*(void **)(param_1 + 0x28) != (void *)0x0) {
        if (param_2 != (undefined1 *)0x0) {
          memcpy(param_2,*(void **)(param_1 + 0x28),*(size_t *)(param_1 + 0x40));
        }
        lVar2 = *(long *)(param_1 + 0x40);
      }
    }
    else {
      lVar2 = 0;
      if (param_4 != 0) {
        puVar3 = param_2;
        do {
          puVar4 = puVar3 + 1;
          uVar1 = *(uint *)(param_1 + 0x50) ^ *(uint *)(param_1 + 0x50) << 0xd;
          uVar1 = uVar1 ^ uVar1 >> 0x11;
          uVar1 = uVar1 ^ uVar1 << 5;
          *(uint *)(param_1 + 0x50) = uVar1;
          *puVar3 = (char)uVar1;
          puVar3 = puVar4;
        } while (param_2 + param_4 != puVar4);
        return param_4;
      }
    }
  }
  return lVar2;
}



bool test_rng_enable_locking(long param_1)

{
  long lVar1;
  
  if ((param_1 != 0) && (*(long *)(param_1 + 0x48) == 0)) {
    lVar1 = CRYPTO_THREAD_lock_new();
    *(long *)(param_1 + 0x48) = lVar1;
    if (lVar1 == 0) {
      ERR_new();
      ERR_set_debug("providers/implementations/rands/test_rng.c",0x133,"test_rng_enable_locking");
      ERR_set_error(0x39,0x7e,0);
    }
    return lVar1 != 0;
  }
  return true;
}



void test_rng_free(void *param_1)

{
  if (param_1 != (void *)0x0) {
    CRYPTO_free(*(void **)((long)param_1 + 0x20));
    CRYPTO_free(*(void **)((long)param_1 + 0x28));
    CRYPTO_THREAD_lock_free(*(undefined8 *)((long)param_1 + 0x48));
    CRYPTO_free(param_1);
    return;
  }
  return;
}



undefined8 test_rng_instantiate(long param_1,uint param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long *in_R9;
  long in_FS_OFFSET;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_30 = 0;
  local_28 = 0;
  if ((in_R9 == (long *)0x0) || (*in_R9 == 0)) {
LAB_00100738:
    if (param_2 <= *(uint *)(param_1 + 0x10)) {
      *(undefined4 *)(param_1 + 0xc) = 1;
      uVar3 = 1;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(undefined4 *)(param_1 + 0x50) = 0xd3abc8e;
      goto LAB_0010075d;
    }
  }
  else {
    lVar2 = OSSL_PARAM_locate_const(in_R9,"strength");
    if ((lVar2 == 0) || (iVar1 = OSSL_PARAM_get_uint(lVar2,param_1 + 0x10), iVar1 != 0)) {
      lVar2 = OSSL_PARAM_locate_const(in_R9,"test_entropy");
      if (lVar2 != 0) {
        iVar1 = OSSL_PARAM_get_octet_string(lVar2,&local_30,0,&local_28);
        if (iVar1 == 0) goto LAB_0010064a;
        CRYPTO_free(*(void **)(param_1 + 0x20));
        uVar3 = local_30;
        *(undefined8 *)(param_1 + 0x38) = 0;
        local_30 = 0;
        *(undefined8 *)(param_1 + 0x20) = uVar3;
        *(undefined8 *)(param_1 + 0x30) = local_28;
      }
      lVar2 = OSSL_PARAM_locate_const(in_R9,"test_nonce");
      if (lVar2 != 0) {
        iVar1 = OSSL_PARAM_get_octet_string(lVar2,&local_30,0,&local_28);
        if (iVar1 == 0) goto LAB_0010064a;
        CRYPTO_free(*(void **)(param_1 + 0x28));
        *(undefined8 *)(param_1 + 0x28) = local_30;
        *(undefined8 *)(param_1 + 0x40) = local_28;
      }
      lVar2 = OSSL_PARAM_locate_const(in_R9,"max_request");
      if (((lVar2 == 0) || (iVar1 = OSSL_PARAM_get_size_t(lVar2,param_1 + 0x18), iVar1 != 0)) &&
         ((lVar2 = OSSL_PARAM_locate_const(in_R9,"generate"), lVar2 == 0 ||
          (iVar1 = OSSL_PARAM_get_uint(lVar2,param_1 + 8), iVar1 != 0)))) goto LAB_00100738;
    }
  }
LAB_0010064a:
  uVar3 = 0;
LAB_0010075d:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}


