
void ossl_quic_reactor_wait_ctx_init(undefined1 (*param_1) [16])

{
  *(undefined8 *)param_1[1] = 0;
  *param_1 = (undefined1  [16])0x0;
  return;
}



undefined8 ossl_quic_reactor_wait_ctx_enter(long *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  for (puVar4 = (undefined8 *)*param_1; puVar4 != (undefined8 *)0x0; puVar4 = (undefined8 *)*puVar4)
  {
    if (puVar4[2] == param_2) goto LAB_0010004e;
  }
  puVar4 = (undefined8 *)CRYPTO_zalloc(0x20,"ssl/quic/quic_reactor_wait_ctx.c",0x35);
  if (puVar4 == (undefined8 *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar1 = (undefined8 *)param_1[1];
    puVar4[2] = param_2;
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = puVar4;
    }
    lVar2 = *param_1;
    puVar4[1] = puVar1;
    *puVar4 = 0;
    param_1[1] = (long)puVar4;
    if (lVar2 == 0) {
      *param_1 = (long)puVar4;
    }
    param_1[2] = param_1[2] + 1;
LAB_0010004e:
    lVar2 = puVar4[3];
    puVar4[3] = lVar2 + 1;
    if (lVar2 + 1 == 1) {
      ossl_quic_reactor_enter_blocking_section(puVar4[2]);
    }
    uVar3 = 1;
  }
  return uVar3;
}



void ossl_quic_reactor_wait_ctx_leave(long *param_1,long param_2)

{
  param_1 = (long *)*param_1;
  if (param_1 == (long *)0x0) {
    ossl_quic_reactor_wait_ctx_leave_cold();
    return;
  }
  while (param_1[2] != param_2) {
    param_1 = (long *)*param_1;
    if (param_1 == (long *)0x0) {
      ossl_quic_reactor_wait_ctx_leave_cold();
      return;
    }
  }
  param_1 = param_1 + 3;
  *param_1 = *param_1 + -1;
  if (*param_1 == 0) {
    ossl_quic_reactor_leave_blocking_section(param_2);
    return;
  }
  return;
}



void ossl_quic_reactor_wait_ctx_cleanup(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *ptr;
  
  ptr = (undefined8 *)*param_1;
  while (ptr != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*ptr;
    CRYPTO_free(ptr);
    ptr = puVar1;
  }
  return;
}



void ossl_quic_reactor_wait_ctx_leave_cold(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}


