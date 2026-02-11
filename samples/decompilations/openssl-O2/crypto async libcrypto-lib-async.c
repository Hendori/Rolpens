
void async_release_job(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)CRYPTO_THREAD_get_local(&poolkey);
  if (puVar2 != (undefined8 *)0x0) {
    CRYPTO_free(*(void **)(param_1 + 0x3d0));
    uVar1 = *puVar2;
    *(undefined8 *)(param_1 + 0x3d0) = 0;
    OPENSSL_sk_push(uVar1,param_1);
    return;
  }
  ERR_new();
  ERR_set_debug("crypto/async/async.c",0x8a,"async_release_job");
  ERR_set_error(0x33,0xc0103,0);
  return;
}



void async_get_ctx(void)

{
  CRYPTO_THREAD_get_local(&ctxkey);
  return;
}



void async_delete_thread_state(void)

{
  int iVar1;
  long *ptr;
  void *pvVar2;
  long lVar3;
  
  ptr = (long *)CRYPTO_THREAD_get_local(&poolkey);
  if (ptr != (long *)0x0) {
    lVar3 = *ptr;
    if (lVar3 != 0) {
      pvVar2 = (void *)OPENSSL_sk_pop();
      while (pvVar2 != (void *)0x0) {
        CRYPTO_free(*(void **)((long)pvVar2 + 0x3d0));
        async_fibre_free(pvVar2);
        CRYPTO_free(pvVar2);
        pvVar2 = (void *)OPENSSL_sk_pop(*ptr);
      }
      lVar3 = *ptr;
    }
    OPENSSL_sk_free(lVar3);
    CRYPTO_free(ptr);
    CRYPTO_THREAD_set_local(&poolkey,0);
  }
  async_local_cleanup();
  pvVar2 = (void *)async_get_ctx();
  iVar1 = CRYPTO_THREAD_set_local(&ctxkey,0);
  if (iVar1 != 0) {
    CRYPTO_free(pvVar2);
    return;
  }
  return;
}



void async_start_func(void)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  
  lVar3 = async_get_ctx();
  if (lVar3 == 0) {
    ERR_new();
    ERR_set_debug("crypto/async/async.c",0x98,"async_start_func");
    ERR_set_error(0x33,0xc0103,0);
    return;
  }
  do {
    lVar1 = *(long *)(lVar3 + 0x3c8);
    uVar2 = (**(code **)(lVar1 + 0x3c8))(*(undefined8 *)(lVar1 + 0x3d0));
    *(undefined4 *)(lVar1 + 0x3dc) = 3;
    *(undefined4 *)(lVar1 + 0x3d8) = uVar2;
    swapcontext(lVar1,lVar3);
  } while( true );
}



undefined8 ASYNC_pause_job(void)

{
  long lVar1;
  long lVar2;
  
  lVar2 = async_get_ctx();
  if (((lVar2 != 0) && (lVar1 = *(long *)(lVar2 + 0x3c8), lVar1 != 0)) &&
     (*(int *)(lVar2 + 0x3d0) == 0)) {
    *(undefined4 *)(lVar1 + 0x3dc) = 1;
    swapcontext(lVar1,lVar2);
    async_wait_ctx_reset_counts(*(undefined8 *)(lVar1 + 0x3e0));
    return 1;
  }
  return 1;
}



undefined8 async_init(void)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = CRYPTO_THREAD_init_local(&ctxkey,0);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = CRYPTO_THREAD_init_local(&poolkey,0);
  if (iVar1 != 0) {
    uVar2 = async_local_init();
    return uVar2;
  }
  CRYPTO_THREAD_cleanup_local(&ctxkey);
  return 0;
}



void async_deinit(void)

{
  CRYPTO_THREAD_cleanup_local(&ctxkey);
  CRYPTO_THREAD_cleanup_local(&poolkey);
  async_local_deinit();
  return;
}



undefined8 ASYNC_init_thread(ulong param_1,ulong param_2)

{
  int iVar1;
  long *ptr;
  long lVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (param_1 < param_2) {
    ERR_new();
    ERR_set_debug("crypto/async/async.c",0x162,"ASYNC_init_thread");
    ERR_set_error(0x33,0x67,0);
  }
  else {
    iVar1 = OPENSSL_init_crypto(0x100,0);
    if (((iVar1 != 0) && (iVar1 = ossl_init_thread_start(0,0,async_delete_thread_state), iVar1 != 0)
        ) && (ptr = (long *)CRYPTO_zalloc(0x18,"crypto/async/async.c",0x16c), ptr != (long *)0x0)) {
      lVar2 = OPENSSL_sk_new_reserve(0,param_2 & 0xffffffff);
      *ptr = lVar2;
      if (lVar2 == 0) {
        ERR_new();
        ERR_set_debug("crypto/async/async.c",0x172,"ASYNC_init_thread");
        ERR_set_error(0x33,0x8000f,0);
        CRYPTO_free(ptr);
      }
      else {
        ptr[2] = param_1;
        uVar4 = param_2;
        if (param_2 != 0) {
          uVar5 = 0;
          do {
            uVar4 = uVar5;
            pvVar3 = (void *)CRYPTO_zalloc(0x3f0,"crypto/async/async.c",0x52);
            if (pvVar3 == (void *)0x0) break;
            *(undefined4 *)((long)pvVar3 + 0x3dc) = 0;
            iVar1 = async_fibre_makecontext(pvVar3);
            if (iVar1 == 0) {
              CRYPTO_free(*(void **)((long)pvVar3 + 0x3d0));
              async_fibre_free(pvVar3);
              CRYPTO_free(pvVar3);
              break;
            }
            lVar2 = *ptr;
            uVar5 = uVar4 + 1;
            *(undefined8 *)((long)pvVar3 + 0x3d0) = 0;
            OPENSSL_sk_push(lVar2,pvVar3);
            uVar4 = param_2;
          } while (param_2 != uVar5);
        }
        ptr[1] = uVar4;
        iVar1 = CRYPTO_THREAD_set_local(&poolkey,ptr);
        if (iVar1 != 0) {
          return 1;
        }
        ERR_new();
        ERR_set_debug("crypto/async/async.c",0x18b,"ASYNC_init_thread");
        ERR_set_error(0x33,0x65,0);
        lVar2 = *ptr;
        if (lVar2 != 0) {
          pvVar3 = (void *)OPENSSL_sk_pop();
          while (pvVar3 != (void *)0x0) {
            CRYPTO_free(*(void **)((long)pvVar3 + 0x3d0));
            async_fibre_free(pvVar3);
            CRYPTO_free(pvVar3);
            pvVar3 = (void *)OPENSSL_sk_pop(*ptr);
          }
          lVar2 = *ptr;
        }
        OPENSSL_sk_free(lVar2);
        CRYPTO_free(ptr);
      }
    }
  }
  return 0;
}



undefined8
ASYNC_start_job(long *param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
               void *param_5,size_t param_6)

{
  long lVar1;
  int iVar2;
  void *ptr;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  void *pvVar6;
  void *pvVar7;
  
  iVar2 = OPENSSL_init_crypto(0x100,0);
  if (iVar2 == 0) {
    return 0;
  }
  ptr = (void *)async_get_ctx();
  if (ptr == (void *)0x0) {
    iVar2 = ossl_init_thread_start(0,0,async_delete_thread_state);
    if (iVar2 == 0) {
      return 0;
    }
    ptr = CRYPTO_malloc(0x3d8,"crypto/async/async.c",0x2a);
    if (ptr != (void *)0x0) {
      *(undefined8 *)((long)ptr + 0x3c8) = 0;
      *(undefined4 *)((long)ptr + 0x3d0) = 0;
      iVar2 = CRYPTO_THREAD_set_local(&ctxkey,ptr);
      if (iVar2 != 0) goto LAB_001005c1;
    }
    CRYPTO_free(ptr);
    return 0;
  }
LAB_001005c1:
  lVar3 = *param_1;
  if (lVar3 == 0) goto LAB_00100648;
  *(long *)((long)ptr + 0x3c8) = lVar3;
  do {
    if (lVar3 == 0) {
      puVar5 = (undefined8 *)CRYPTO_THREAD_get_local(&poolkey);
      if (puVar5 == (undefined8 *)0x0) {
        iVar2 = ASYNC_init_thread(0,0);
        if (iVar2 == 0) goto LAB_001007e7;
        puVar5 = (undefined8 *)CRYPTO_THREAD_get_local(&poolkey);
      }
      pvVar6 = (void *)OPENSSL_sk_pop(*puVar5);
      if (pvVar6 == (void *)0x0) {
        if (((puVar5[2] != 0) && ((ulong)puVar5[2] <= (ulong)puVar5[1])) ||
           (pvVar6 = (void *)CRYPTO_zalloc(0x3f0,"crypto/async/async.c",0x52), pvVar6 == (void *)0x0
           )) {
LAB_001007e7:
          *(undefined8 *)((long)ptr + 0x3c8) = 0;
          return 1;
        }
        *(undefined4 *)((long)pvVar6 + 0x3dc) = 0;
        iVar2 = async_fibre_makecontext(pvVar6);
        if (iVar2 == 0) {
          CRYPTO_free(*(void **)((long)pvVar6 + 0x3d0));
          async_fibre_free(pvVar6);
          CRYPTO_free(pvVar6);
          goto LAB_001007e7;
        }
        puVar5[1] = puVar5[1] + 1;
      }
      *(void **)((long)ptr + 0x3c8) = pvVar6;
      if (param_5 == (void *)0x0) {
        *(undefined8 *)((long)pvVar6 + 0x3d0) = 0;
      }
      else {
        pvVar7 = CRYPTO_malloc((int)param_6,"crypto/async/async.c",0xfd);
        *(void **)((long)pvVar6 + 0x3d0) = pvVar7;
        pvVar6 = *(void **)(*(long *)((long)ptr + 0x3c8) + 0x3d0);
        if (pvVar6 == (void *)0x0) {
          async_release_job(*(long *)((long)ptr + 0x3c8));
          *(undefined8 *)((long)ptr + 0x3c8) = 0;
          return 0;
        }
        memcpy(pvVar6,param_5,param_6);
      }
      lVar3 = *(long *)((long)ptr + 0x3c8);
      *(undefined8 *)(lVar3 + 0x3e0) = param_2;
      *(undefined8 *)(lVar3 + 0x3c8) = param_4;
      uVar4 = ossl_lib_ctx_get_concrete(0);
      swapcontext(ptr);
      lVar3 = *(long *)((long)ptr + 0x3c8);
      uVar4 = OSSL_LIB_CTX_set0_default(uVar4);
      *(undefined8 *)(lVar3 + 1000) = uVar4;
    }
    else {
      iVar2 = *(int *)(lVar3 + 0x3dc);
      if (iVar2 == 3) {
        *param_3 = *(undefined4 *)(lVar3 + 0x3d8);
        *(undefined8 *)(lVar3 + 0x3e0) = 0;
        async_release_job();
        *(undefined8 *)((long)ptr + 0x3c8) = 0;
        *param_1 = 0;
        return 3;
      }
      if (iVar2 == 1) {
        *param_1 = lVar3;
        *(undefined4 *)(lVar3 + 0x3dc) = 2;
        *(undefined8 *)((long)ptr + 0x3c8) = 0;
        return 2;
      }
      if (iVar2 != 2) {
        ERR_new();
        uVar4 = 0xf1;
        goto LAB_00100759;
      }
      lVar3 = *param_1;
      if (lVar3 == 0) {
        return 0;
      }
      *(long *)((long)ptr + 0x3c8) = lVar3;
      lVar3 = OSSL_LIB_CTX_set0_default(*(undefined8 *)(lVar3 + 1000));
      if (lVar3 == 0) {
        ERR_new();
        uVar4 = 0xdd;
LAB_00100759:
        ERR_set_debug("crypto/async/async.c",uVar4,"ASYNC_start_job");
        ERR_set_error(0x33,0xc0103,0);
        async_release_job(*(undefined8 *)((long)ptr + 0x3c8));
        *(undefined8 *)((long)ptr + 0x3c8) = 0;
        *param_1 = 0;
        return 0;
      }
      swapcontext(ptr,*(undefined8 *)((long)ptr + 0x3c8));
      lVar1 = *(long *)((long)ptr + 0x3c8);
      uVar4 = OSSL_LIB_CTX_set0_default(lVar3);
      *(undefined8 *)(lVar1 + 1000) = uVar4;
    }
LAB_00100648:
    lVar3 = *(long *)((long)ptr + 0x3c8);
  } while( true );
}



void ASYNC_cleanup_thread(void)

{
  int iVar1;
  
  iVar1 = OPENSSL_init_crypto(0x100,0);
  if (iVar1 == 0) {
    return;
  }
  async_delete_thread_state(0);
  return;
}



undefined8 ASYNC_get_current_job(void)

{
  int iVar1;
  long lVar2;
  
  iVar1 = OPENSSL_init_crypto(0x100,0);
  if (iVar1 != 0) {
    lVar2 = async_get_ctx();
    if (lVar2 != 0) {
      return *(undefined8 *)(lVar2 + 0x3c8);
    }
  }
  return 0;
}



undefined8 ASYNC_get_wait_ctx(long param_1)

{
  return *(undefined8 *)(param_1 + 0x3e0);
}



void ASYNC_block_pause(void)

{
  int iVar1;
  long lVar2;
  
  iVar1 = OPENSSL_init_crypto(0x100,0);
  if (iVar1 != 0) {
    lVar2 = async_get_ctx();
    if ((lVar2 != 0) && (*(long *)(lVar2 + 0x3c8) != 0)) {
      *(int *)(lVar2 + 0x3d0) = *(int *)(lVar2 + 0x3d0) + 1;
      return;
    }
  }
  return;
}



void ASYNC_unblock_pause(void)

{
  int iVar1;
  long lVar2;
  
  iVar1 = OPENSSL_init_crypto(0x100,0);
  if (iVar1 != 0) {
    lVar2 = async_get_ctx();
    if (((lVar2 != 0) && (*(long *)(lVar2 + 0x3c8) != 0)) && (*(int *)(lVar2 + 0x3d0) != 0)) {
      *(int *)(lVar2 + 0x3d0) = *(int *)(lVar2 + 0x3d0) + -1;
      return;
    }
  }
  return;
}


