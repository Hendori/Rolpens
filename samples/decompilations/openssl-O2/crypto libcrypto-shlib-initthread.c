
void create_global_tevent_register_ossl_(void)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)CRYPTO_zalloc(0x10,"crypto/initthread.c",0x3c);
  glob_tevent_reg = plVar1;
  if (plVar1 != (long *)0x0) {
    lVar2 = OPENSSL_sk_new_null();
    *plVar1 = lVar2;
    plVar1 = glob_tevent_reg;
    lVar2 = CRYPTO_THREAD_lock_new();
    plVar1[1] = lVar2;
    if ((*glob_tevent_reg != 0) && (glob_tevent_reg[1] != 0)) {
      create_global_tevent_register_ossl_ret_ = 1;
      return;
    }
    OPENSSL_sk_free();
    CRYPTO_THREAD_lock_free(glob_tevent_reg[1]);
    CRYPTO_free(glob_tevent_reg);
    glob_tevent_reg = (long *)0x0;
  }
  create_global_tevent_register_ossl_ret_ = 0;
  return;
}



void init_thread_remove_handlers(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  
  iVar2 = CRYPTO_THREAD_run_once(&tevent_register_runonce,0x100000);
  puVar1 = glob_tevent_reg;
  if (((iVar2 != 0) && (create_global_tevent_register_ossl_ret_ != 0)) &&
     (glob_tevent_reg != (undefined8 *)0x0)) {
    iVar4 = 0;
    iVar2 = CRYPTO_THREAD_write_lock(glob_tevent_reg[1]);
    if (iVar2 != 0) {
      while( true ) {
        iVar2 = OPENSSL_sk_num(*puVar1);
        if (iVar2 <= iVar4) {
          CRYPTO_THREAD_unlock(puVar1[1]);
          return;
        }
        lVar3 = OPENSSL_sk_value(*puVar1,iVar4);
        if (param_1 == lVar3) break;
        iVar4 = iVar4 + 1;
      }
      OPENSSL_sk_delete(*puVar1,iVar4);
      CRYPTO_THREAD_unlock(puVar1[1]);
      return;
    }
  }
  return;
}



void init_thread_stop_part_0(long param_1,long *param_2)

{
  void *pvVar1;
  long lVar2;
  int iVar3;
  void *ptr;
  void *pvVar4;
  
  iVar3 = CRYPTO_THREAD_run_once(&tevent_register_runonce,0x100000);
  lVar2 = glob_tevent_reg;
  if ((((iVar3 == 0) || (create_global_tevent_register_ossl_ret_ == 0)) || (glob_tevent_reg == 0))
     || (iVar3 = CRYPTO_THREAD_write_lock(*(undefined8 *)(glob_tevent_reg + 8)), iVar3 == 0)) {
    return;
  }
  pvVar4 = (void *)0x0;
  ptr = (void *)*param_2;
  while (ptr != (void *)0x0) {
    if ((param_1 != 0) && (param_1 != *(long *)((long)ptr + 8))) {
      pvVar1 = *(void **)((long)ptr + 0x18);
      pvVar4 = ptr;
      while( true ) {
        ptr = pvVar1;
        if (ptr == (void *)0x0) goto LAB_00100234;
        if (param_1 == *(long *)((long)ptr + 8)) break;
        pvVar1 = *(void **)((long)ptr + 0x18);
        pvVar4 = ptr;
      }
    }
    (**(code **)((long)ptr + 0x10))();
    if (pvVar4 == (void *)0x0) {
      *param_2 = *(long *)((long)ptr + 0x18);
    }
    else {
      *(long *)((long)pvVar4 + 0x18) = *(long *)((long)ptr + 0x18);
    }
    pvVar1 = *(void **)((long)ptr + 0x18);
    CRYPTO_free(ptr);
    ptr = pvVar1;
  }
LAB_00100234:
  CRYPTO_THREAD_unlock(*(undefined8 *)(lVar2 + 8));
  return;
}



void init_thread_destructor(void *param_1)

{
  if (param_1 != (void *)0x0) {
    init_thread_stop_part_0(0,param_1);
  }
  init_thread_remove_handlers(param_1);
  CRYPTO_free(param_1);
  return;
}



undefined8 init_thread_deregister(long param_1,int param_2)

{
  long lVar1;
  undefined8 *ptr;
  long *plVar2;
  int iVar3;
  undefined8 *ptr_00;
  long *plVar4;
  long *plVar5;
  long *ptr_01;
  int local_3c;
  
  iVar3 = CRYPTO_THREAD_run_once(&tevent_register_runonce,0x100000);
  ptr = glob_tevent_reg;
  if (((iVar3 == 0) || (create_global_tevent_register_ossl_ret_ == 0)) ||
     (glob_tevent_reg == (undefined8 *)0x0)) {
    return 0;
  }
  if (param_2 == 0) {
    iVar3 = CRYPTO_THREAD_write_lock(glob_tevent_reg[1]);
    if (iVar3 == 0) {
      return 0;
    }
  }
  else {
    glob_tevent_reg = (undefined8 *)0x0;
  }
  local_3c = 0;
  iVar3 = OPENSSL_sk_num(*ptr);
  if (0 < iVar3) {
    do {
      ptr_00 = (undefined8 *)OPENSSL_sk_value(*ptr,local_3c);
      if (ptr_00 == (undefined8 *)0x0) {
        if (param_2 != 0) {
          return 0;
        }
        CRYPTO_THREAD_unlock(ptr[1]);
        return 0;
      }
      plVar5 = (long *)0x0;
      ptr_01 = (long *)*ptr_00;
      while (ptr_01 != (long *)0x0) {
        plVar4 = (long *)ptr_01[3];
        if (param_2 == 0) {
          lVar1 = *ptr_01;
          plVar2 = plVar4;
          while (plVar4 = plVar2, lVar1 != param_1) {
            if (plVar4 == (long *)0x0) goto LAB_001003b3;
            plVar2 = (long *)plVar4[3];
            plVar5 = ptr_01;
            ptr_01 = plVar4;
            lVar1 = *plVar4;
          }
        }
        if (plVar5 == (long *)0x0) {
          *ptr_00 = plVar4;
        }
        else {
          plVar5[3] = (long)plVar4;
        }
        plVar4 = (long *)ptr_01[3];
        CRYPTO_free(ptr_01);
        ptr_01 = plVar4;
      }
      if (param_2 != 0) {
        CRYPTO_free(ptr_00);
      }
LAB_001003b3:
      local_3c = local_3c + 1;
      iVar3 = OPENSSL_sk_num(*ptr);
    } while (local_3c < iVar3);
  }
  if (param_2 == 0) {
    CRYPTO_THREAD_unlock();
  }
  else {
    CRYPTO_THREAD_lock_free(ptr[1]);
    OPENSSL_sk_free(*ptr);
    CRYPTO_free(ptr);
  }
  return 1;
}



bool ossl_init_thread(void)

{
  int iVar1;
  
  iVar1 = CRYPTO_THREAD_init_local(&destructor_key,init_thread_destructor);
  return iVar1 != 0;
}



void ossl_cleanup_thread(void)

{
  init_thread_deregister(0,1);
  CRYPTO_THREAD_cleanup_local(&destructor_key);
  destructor_key = 0xffffffffffffffff;
  return;
}



void OPENSSL_thread_stop(void)

{
  void *ptr;
  
  if (destructor_key == -1) {
    return;
  }
  ptr = (void *)CRYPTO_THREAD_get_local(&destructor_key);
  CRYPTO_THREAD_set_local(&destructor_key,0);
  if (ptr != (void *)0x0) {
    init_thread_stop_part_0(0,ptr);
  }
  init_thread_remove_handlers(ptr);
  CRYPTO_free(ptr);
  return;
}



void ossl_ctx_thread_stop(undefined8 param_1)

{
  long lVar1;
  
  if (destructor_key == -1) {
    return;
  }
  lVar1 = CRYPTO_THREAD_get_local(&destructor_key);
  if (lVar1 != 0) {
    init_thread_stop_part_0(param_1,lVar1);
    return;
  }
  return;
}



void OPENSSL_thread_stop_ex(void)

{
  undefined8 uVar1;
  
  uVar1 = ossl_lib_ctx_get_concrete();
  ossl_ctx_thread_stop(uVar1);
  return;
}



undefined8 ossl_init_thread_start(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *ptr;
  undefined8 *puVar3;
  
  ptr = (undefined8 *)CRYPTO_THREAD_get_local(&destructor_key);
  if (ptr == (undefined8 *)0x0) {
    ptr = (undefined8 *)CRYPTO_zalloc(8,"crypto/initthread.c",0x65);
    if (ptr == (undefined8 *)0x0) {
      return 0;
    }
    iVar2 = CRYPTO_THREAD_set_local(&destructor_key,ptr);
    if (iVar2 == 0) {
      CRYPTO_free(ptr);
      return 0;
    }
    iVar2 = CRYPTO_THREAD_run_once(&tevent_register_runonce,0x100000);
    puVar3 = glob_tevent_reg;
    if ((((iVar2 != 0) && (create_global_tevent_register_ossl_ret_ != 0)) &&
        (glob_tevent_reg != (undefined8 *)0x0)) &&
       (iVar2 = CRYPTO_THREAD_write_lock(glob_tevent_reg[1]), iVar2 != 0)) {
      iVar2 = OPENSSL_sk_push(*puVar3,ptr);
      CRYPTO_THREAD_unlock(puVar3[1]);
      if (iVar2 != 0) goto LAB_001005b9;
    }
    CRYPTO_THREAD_set_local(&destructor_key,0);
    CRYPTO_free(ptr);
  }
  else {
LAB_001005b9:
    puVar3 = (undefined8 *)CRYPTO_malloc(0x20,"crypto/initthread.c",0x198);
    if (puVar3 != (undefined8 *)0x0) {
      puVar3[1] = param_2;
      *puVar3 = param_1;
      uVar1 = *ptr;
      puVar3[2] = param_3;
      puVar3[3] = uVar1;
      *ptr = puVar3;
      return 1;
    }
  }
  return 0;
}



void ossl_init_thread_deregister(undefined8 param_1)

{
  init_thread_deregister(param_1,0);
  return;
}


