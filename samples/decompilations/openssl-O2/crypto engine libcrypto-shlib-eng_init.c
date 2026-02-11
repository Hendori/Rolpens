
undefined8 engine_unlocked_init(long param_1)

{
  undefined8 uVar1;
  
  if ((*(int *)(param_1 + 0xa0) == 0) && (*(code **)(param_1 + 0x60) != (code *)0x0)) {
    uVar1 = (**(code **)(param_1 + 0x60))();
    if ((int)uVar1 == 0) {
      return uVar1;
    }
  }
  else {
    uVar1 = 1;
  }
  LOCK();
  *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + 1;
  UNLOCK();
  *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 1;
  return uVar1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int engine_unlocked_finish(long param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = (int *)(param_1 + 0xa0);
  *piVar1 = *piVar1 + -1;
  if ((*piVar1 == 0) && (*(code **)(param_1 + 0x68) != (code *)0x0)) {
    if (param_2 == 0) {
      iVar2 = (**(code **)(param_1 + 0x68))();
    }
    else {
      CRYPTO_THREAD_unlock(_global_engine_lock);
      iVar2 = (**(code **)(param_1 + 0x68))(param_1);
      iVar3 = CRYPTO_THREAD_write_lock(_global_engine_lock);
      if (iVar3 == 0) {
        return 0;
      }
    }
    if (iVar2 == 0) {
      return 0;
    }
  }
  else {
    iVar2 = 1;
  }
  iVar3 = engine_free_util(param_1,0);
  if (iVar3 == 0) {
    ERR_new();
    ERR_set_debug("crypto/engine/eng_init.c",0x4f,"engine_unlocked_finish");
    ERR_set_error(0x26,0x6a,0);
    return 0;
  }
  return iVar2;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int ENGINE_init(ENGINE *e)

{
  int iVar1;
  
  if (e == (ENGINE *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/engine/eng_init.c",0x5a,"ENGINE_init");
    ERR_set_error(0x26,0xc0102,0);
  }
  else {
    iVar1 = CRYPTO_THREAD_run_once(&engine_lock_init,&do_engine_lock_init_ossl_);
    if ((iVar1 == 0) || (_do_engine_lock_init_ossl_ret_ == 0)) {
      ERR_new();
      ERR_set_debug("crypto/engine/eng_init.c",0x5f,"ENGINE_init");
      ERR_set_error(0x26,0x8000f,0);
    }
    else {
      iVar1 = CRYPTO_THREAD_write_lock(_global_engine_lock);
      if (iVar1 != 0) {
        iVar1 = engine_unlocked_init(e);
        CRYPTO_THREAD_unlock(_global_engine_lock);
        return iVar1;
      }
    }
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int ENGINE_finish(ENGINE *e)

{
  int iVar1;
  
  iVar1 = 1;
  if (e != (ENGINE *)0x0) {
    iVar1 = CRYPTO_THREAD_write_lock(_global_engine_lock);
    if (iVar1 != 0) {
      iVar1 = engine_unlocked_finish(e,1);
      CRYPTO_THREAD_unlock(_global_engine_lock);
      if (iVar1 == 0) {
        ERR_new();
        ERR_set_debug("crypto/engine/eng_init.c",0x75,"ENGINE_finish");
        ERR_set_error(0x26,0x6a,0);
      }
    }
  }
  return iVar1;
}


