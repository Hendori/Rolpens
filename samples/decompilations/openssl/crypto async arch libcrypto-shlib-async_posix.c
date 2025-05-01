
void async_stack_free(void *param_1)

{
  CRYPTO_free(param_1);
  return;
}



void async_stack_alloc(undefined8 *param_1)

{
  CRYPTO_malloc((int)*param_1,"crypto/async/arch/async_posix.c",0x54);
  return;
}



bool async_local_init(void)

{
  async_mem_lock = CRYPTO_THREAD_lock_new();
  return async_mem_lock != 0;
}



void async_local_deinit(void)

{
  CRYPTO_THREAD_lock_free(async_mem_lock);
  return;
}



bool ASYNC_is_capable(void)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined1 auStack_3d8 [968];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = getcontext(auStack_3d8);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1 == 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 ASYNC_set_mem_functions(undefined *param_1,undefined *param_2)

{
  int iVar1;
  
  OPENSSL_init_crypto(0x100,0);
  iVar1 = CRYPTO_THREAD_write_lock(async_mem_lock);
  if (iVar1 != 0) {
    if (allow_customize != 0) {
      CRYPTO_THREAD_unlock(async_mem_lock);
      if (param_1 != (undefined *)0x0) {
        stack_alloc_impl = param_1;
      }
      if (param_2 != (undefined *)0x0) {
        stack_free_impl = param_2;
      }
      return 1;
    }
    CRYPTO_THREAD_unlock(async_mem_lock);
  }
  return 0;
}



void ASYNC_get_mem_functions(undefined8 *param_1,undefined8 *param_2)

{
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = stack_alloc_impl;
  }
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = stack_free_impl;
  }
  return;
}



void async_local_cleanup(void)

{
  return;
}



undefined8 async_fibre_makecontext(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = getcontext();
  if (iVar1 == 0) {
    local_18 = 0x8000;
    if (allow_customize != 0) {
      uVar3 = CRYPTO_THREAD_write_lock(async_mem_lock);
      if ((int)uVar3 == 0) goto LAB_001001f8;
      allow_customize = 0;
      CRYPTO_THREAD_unlock(async_mem_lock);
    }
    lVar2 = (*(code *)stack_alloc_impl)(&local_18);
    *(long *)(param_1 + 0x10) = lVar2;
    if (lVar2 != 0) {
      *(undefined8 *)(param_1 + 8) = 0;
      *(undefined8 *)(param_1 + 0x20) = local_18;
      makecontext(param_1,&async_start_func,0);
      uVar3 = 1;
      goto LAB_001001f8;
    }
  }
  else {
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  uVar3 = 0;
LAB_001001f8:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void async_fibre_free(long param_1)

{
  (*(code *)stack_free_impl)(*(undefined8 *)(param_1 + 0x10));
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}


