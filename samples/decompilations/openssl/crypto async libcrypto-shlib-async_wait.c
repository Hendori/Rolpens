
void ASYNC_WAIT_CTX_new(void)

{
  CRYPTO_zalloc(0x30,"crypto/async/async_wait.c",0x11);
  return;
}



void ASYNC_WAIT_CTX_free(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *ptr;
  
  if (param_1 != (undefined8 *)0x0) {
    ptr = (undefined8 *)*param_1;
    while (ptr != (undefined8 *)0x0) {
      if ((*(int *)((long)ptr + 0x24) == 0) && ((code *)ptr[3] != (code *)0x0)) {
        (*(code *)ptr[3])(param_1,*ptr,*(undefined4 *)(ptr + 1),ptr[2]);
      }
      puVar1 = (undefined8 *)ptr[5];
      CRYPTO_free(ptr);
      ptr = puVar1;
    }
    CRYPTO_free(param_1);
    return;
  }
  return;
}



bool ASYNC_WAIT_CTX_set_wait_fd
               (long *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
               undefined8 param_5)

{
  long lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)CRYPTO_zalloc(0x30,"crypto/async/async_wait.c",0x33);
  if (puVar2 != (undefined8 *)0x0) {
    param_1[1] = param_1[1] + 1;
    lVar1 = *param_1;
    *puVar2 = param_2;
    *(undefined4 *)(puVar2 + 1) = param_3;
    puVar2[2] = param_4;
    puVar2[3] = param_5;
    *(undefined4 *)(puVar2 + 4) = 1;
    puVar2[5] = lVar1;
    *param_1 = (long)puVar2;
  }
  return puVar2 != (undefined8 *)0x0;
}



long * ASYNC_WAIT_CTX_get_fd(long *param_1,long param_2,undefined4 *param_3,long *param_4)

{
  long lVar1;
  
  param_1 = (long *)*param_1;
  if (param_1 == (long *)0x0) {
    return (long *)0x0;
  }
  while ((*(int *)((long)param_1 + 0x24) != 0 || (*param_1 != param_2))) {
    param_1 = (long *)param_1[5];
    if (param_1 == (long *)0x0) {
      return param_1;
    }
  }
  lVar1 = param_1[2];
  *param_3 = (int)param_1[1];
  *param_4 = lVar1;
  return (long *)0x1;
}



undefined8 ASYNC_WAIT_CTX_get_all_fds(long *param_1,undefined4 *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  undefined4 *puVar3;
  
  lVar1 = *param_1;
  *param_3 = 0;
  do {
    lVar2 = lVar1;
    if (lVar1 == 0) {
      return 1;
    }
    while (lVar1 = *(long *)(lVar2 + 0x28), *(int *)(lVar2 + 0x24) == 0) {
      puVar3 = param_2;
      if (param_2 != (undefined4 *)0x0) {
        puVar3 = param_2 + 1;
        *param_2 = *(undefined4 *)(lVar2 + 8);
      }
      *param_3 = *param_3 + 1;
      lVar2 = lVar1;
      param_2 = puVar3;
      if (lVar1 == 0) {
        return 1;
      }
    }
  } while( true );
}



undefined8
ASYNC_WAIT_CTX_get_changed_fds
          (long *param_1,undefined4 *param_2,long *param_3,undefined4 *param_4,long *param_5)

{
  int iVar1;
  long lVar2;
  undefined4 *puVar3;
  
  *param_3 = param_1[1];
  *param_5 = param_1[2];
  if (param_2 == (undefined4 *)0x0 && param_4 == (undefined4 *)0x0) {
    return 1;
  }
  lVar2 = *param_1;
joined_r0x001001d0:
  if (lVar2 == 0) {
    return 1;
  }
  do {
    iVar1 = *(int *)(lVar2 + 0x20);
    if (*(int *)(lVar2 + 0x24) == 0) {
joined_r0x00100235:
      puVar3 = param_4;
      if ((iVar1 == 0) && (param_2 != (undefined4 *)0x0)) break;
    }
    else {
      puVar3 = param_4;
      if ((iVar1 == 0) && (param_4 != (undefined4 *)0x0)) {
        puVar3 = param_4 + 1;
        *param_4 = *(undefined4 *)(lVar2 + 8);
        if (*(int *)(lVar2 + 0x20) != 0) {
          iVar1 = *(int *)(lVar2 + 0x24);
          param_4 = puVar3;
          goto joined_r0x00100235;
        }
      }
    }
    lVar2 = *(long *)(lVar2 + 0x28);
    param_4 = puVar3;
    if (lVar2 == 0) {
      return 1;
    }
  } while( true );
  puVar3 = (undefined4 *)(lVar2 + 8);
  lVar2 = *(long *)(lVar2 + 0x28);
  *param_2 = *puVar3;
  param_2 = param_2 + 1;
  goto joined_r0x001001d0;
}



long * ASYNC_WAIT_CTX_clear_fd(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *ptr;
  
  plVar1 = (long *)*param_1;
  if (plVar1 == (long *)0x0) {
    return (long *)0x0;
  }
  plVar3 = (long *)0x0;
  ptr = plVar1;
  while ((*(int *)((long)ptr + 0x24) == 1 || (*ptr != param_2))) {
    plVar2 = (long *)ptr[5];
    plVar3 = ptr;
    ptr = plVar2;
    if (plVar2 == (long *)0x0) {
      return plVar2;
    }
  }
  if ((int)ptr[4] == 1) {
    if (plVar1 == ptr) {
      *param_1 = ptr[5];
    }
    else {
      plVar3[5] = ptr[5];
    }
    CRYPTO_free(ptr);
    param_1[1] = param_1[1] + -1;
  }
  else {
    *(undefined4 *)((long)ptr + 0x24) = 1;
    param_1[2] = param_1[2] + 1;
  }
  return (long *)0x1;
}



undefined8 ASYNC_WAIT_CTX_set_callback(long param_1,undefined8 param_2,undefined8 param_3)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x18) = param_2;
    *(undefined8 *)(param_1 + 0x20) = param_3;
    return 1;
  }
  return 0;
}



undefined8 ASYNC_WAIT_CTX_get_callback(long param_1,long *param_2,undefined8 *param_3)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    *param_2 = *(long *)(param_1 + 0x18);
    *param_3 = *(undefined8 *)(param_1 + 0x20);
    return 1;
  }
  return 0;
}



undefined8 ASYNC_WAIT_CTX_set_status(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x28) = param_2;
  return 1;
}



undefined4 ASYNC_WAIT_CTX_get_status(long param_1)

{
  return *(undefined4 *)(param_1 + 0x28);
}



void async_wait_ctx_reset_counts(long *param_1)

{
  void *ptr;
  void *pvVar1;
  void *pvVar2;
  
  *(undefined1 (*) [16])(param_1 + 1) = (undefined1  [16])0x0;
  if ((void *)*param_1 == (void *)0x0) {
    return;
  }
  pvVar1 = (void *)0x0;
  ptr = (void *)*param_1;
  do {
    while (pvVar2 = *(void **)((long)ptr + 0x28), *(int *)((long)ptr + 0x24) == 0) {
      if (*(int *)((long)ptr + 0x20) != 0) {
        *(undefined4 *)((long)ptr + 0x20) = 0;
      }
LAB_00100394:
      pvVar1 = ptr;
      ptr = pvVar2;
      if (pvVar2 == (void *)0x0) {
        return;
      }
    }
    if (pvVar1 == (void *)0x0) {
      *param_1 = (long)pvVar2;
      CRYPTO_free(ptr);
      pvVar2 = (void *)*param_1;
      ptr = pvVar1;
      goto LAB_00100394;
    }
    *(void **)((long)pvVar1 + 0x28) = pvVar2;
    CRYPTO_free(ptr);
    ptr = *(void **)((long)pvVar1 + 0x28);
    if (*(void **)((long)pvVar1 + 0x28) == (void *)0x0) {
      return;
    }
  } while( true );
}


