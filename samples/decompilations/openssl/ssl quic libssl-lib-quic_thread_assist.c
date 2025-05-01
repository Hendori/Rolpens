
undefined8 assist_thread_main(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = ossl_quic_channel_get_mutex(*param_1);
  uVar3 = ossl_quic_channel_get0_engine(*param_1);
  ossl_crypto_mutex_lock(uVar2);
  uVar4 = ossl_quic_channel_get_reactor(*param_1);
  iVar1 = *(int *)(param_1 + 3);
  while (iVar1 == 0) {
    uVar5 = ossl_quic_reactor_get_tick_deadline(uVar4);
    uVar5 = ossl_quic_engine_make_real_time(uVar3,uVar5);
    ossl_crypto_condvar_wait_timeout(param_1[1],uVar2,uVar5);
    if (*(int *)(param_1 + 3) != 0) break;
    ossl_quic_reactor_tick(uVar4,1);
    iVar1 = *(int *)(param_1 + 3);
  }
  ossl_crypto_mutex_unlock(uVar2);
  return 1;
}



undefined8 ossl_quic_thread_assist_init_start(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = ossl_quic_channel_get_mutex(param_2);
  if (lVar1 != 0) {
    *param_1 = param_2;
    param_1[3] = 0;
    lVar1 = ossl_crypto_condvar_new();
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      lVar1 = ossl_crypto_thread_native_start(0x100000,param_1,1);
      param_1[2] = lVar1;
      if (lVar1 != 0) {
        return 1;
      }
      ossl_crypto_condvar_free(param_1 + 1);
    }
  }
  return 0;
}



undefined8 ossl_quic_thread_assist_stop_async(long param_1)

{
  if (*(int *)(param_1 + 0x18) != 0) {
    return 1;
  }
  *(undefined4 *)(param_1 + 0x18) = 1;
  ossl_crypto_condvar_signal(*(undefined8 *)(param_1 + 8));
  return 1;
}



undefined4 ossl_quic_thread_assist_wait_stopped(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  long in_FS_OFFSET;
  undefined1 local_24 [4];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = ossl_quic_channel_get_mutex(*param_1);
  if (*(int *)((long)param_1 + 0x1c) == 0) {
    iVar1 = ossl_quic_thread_assist_stop_async(param_1);
    uVar3 = 0;
    if (iVar1 == 0) goto LAB_00100196;
    ossl_crypto_mutex_unlock(uVar2);
    iVar1 = ossl_crypto_thread_native_join(param_1[2],local_24);
    if (iVar1 == 0) {
      ossl_crypto_mutex_lock(uVar2);
      goto LAB_00100196;
    }
    *(undefined4 *)((long)param_1 + 0x1c) = 1;
    ossl_crypto_mutex_lock(uVar2);
  }
  uVar3 = 1;
LAB_00100196:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int ossl_quic_thread_assist_cleanup(undefined8 *param_1)

{
  if (*(int *)((long)param_1 + 0x1c) != 0) {
    ossl_crypto_condvar_free(param_1 + 1);
    ossl_crypto_thread_native_clean(param_1[2]);
    *param_1 = 0;
    param_1[2] = 0;
    return 1;
  }
  return *(int *)((long)param_1 + 0x1c);
}



undefined8 ossl_quic_thread_assist_notify_deadline_changed(long param_1)

{
  if (*(int *)(param_1 + 0x18) != 0) {
    return 0;
  }
  ossl_crypto_condvar_signal(*(undefined8 *)(param_1 + 8));
  return 1;
}


