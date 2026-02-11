
void dummy_reset(void)

{
  return;
}



undefined8 dummy_get_tx_allowance(void)

{
  return 0xffffffffffffffff;
}



undefined8 dummy_get_wakeup_deadline(void)

{
  return 0xffffffffffffffff;
}



undefined8 dummy_on_data_sent(void)

{
  return 1;
}



undefined8 dummy_on_data_acked(void)

{
  return 1;
}



undefined8 dummy_on_data_lost_finished(void)

{
  return 1;
}



undefined8 dummy_unbind_diagnostic(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = OSSL_PARAM_locate_const(param_2,"max_dgram_payload_len");
  if (lVar1 != 0) {
    *(undefined8 *)(param_1 + 8) = 0;
  }
  return 1;
}



undefined8 dummy_set_input_params(ulong *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  ulong local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = OSSL_PARAM_locate_const(param_2,"max_dgram_payload_len");
  if (lVar1 != 0) {
    uVar2 = OSSL_PARAM_get_size_t(lVar1,&local_18);
    if ((int)uVar2 == 0) goto LAB_001000f2;
    uVar2 = 0;
    if (local_18 < 0x4b0) goto LAB_001000f2;
    *param_1 = local_18;
    if ((ulong *)param_1[1] != (ulong *)0x0) {
      *(ulong *)param_1[1] = local_18;
    }
  }
  uVar2 = 1;
LAB_001000f2:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void dummy_free(void *param_1)

{
  CRYPTO_free(param_1);
  return;
}



void dummy_new(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)CRYPTO_zalloc(0x10,"test/cc_dummy.c",0x17);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0x4b0;
  }
  return;
}



undefined8 dummy_bind_diagnostic(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = OSSL_PARAM_locate_const(param_2,"max_dgram_payload_len");
  if (lVar1 == 0) {
    puVar2 = (undefined8 *)param_1[1];
  }
  else {
    if ((*(int *)(lVar1 + 8) != 2) || (*(long *)(lVar1 + 0x18) != 8)) {
      return 0;
    }
    puVar2 = *(undefined8 **)(lVar1 + 0x10);
    param_1[1] = puVar2;
  }
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = *param_1;
  }
  return 1;
}



undefined8 dummy_on_data_invalidated(void)

{
  return 1;
}



undefined8 dummy_on_data_lost(void)

{
  return 1;
}


