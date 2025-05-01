
void qeng_tick(ulong *param_1,long param_2,undefined4 param_3)

{
  long lVar1;
  ushort uVar2;
  ushort uVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined1 *)((long)param_1 + 10) = 0;
  *(undefined2 *)(param_1 + 1) = 0;
  *param_1 = 0xffffffffffffffff;
  uVar3 = _LC0;
  if ((*(byte *)(param_2 + 0xa0) & 1) == 0) {
    lVar1 = *(long *)(param_2 + 0x88);
    while (lVar1 != 0) {
      local_58 = (undefined1  [16])0x0;
      ossl_quic_port_subtick(lVar1,local_58,param_3);
      uVar2 = local_58._8_2_ | (ushort)param_1[1];
      *(ushort *)(param_1 + 1) =
           ~CONCAT11(-((char)(uVar2 >> 8) == '\0'),-((char)uVar2 == '\0')) & uVar3;
      *(bool *)((long)param_1 + 10) = local_58[10] != '\0' || *(char *)((long)param_1 + 10) != '\0';
      lVar1 = *(long *)(lVar1 + 8);
      uVar4 = *param_1;
      if ((ulong)local_58._0_8_ < *param_1) {
        uVar4 = local_58._0_8_;
      }
      *param_1 = uVar4;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 * ossl_quic_engine_new(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 *ptr;
  
  ptr = (undefined8 *)CRYPTO_zalloc(0xa8,"ssl/quic/quic_engine.c",0x1e);
  if (ptr != (undefined8 *)0x0) {
    uVar1 = param_1[2];
    uVar3 = *param_1;
    uVar4 = param_1[1];
    uVar2 = param_1[3];
    ptr[2] = uVar1;
    *ptr = uVar3;
    ptr[1] = uVar4;
    iVar5 = ossl_quic_reactor_init(ptr + 5,0x100000,ptr,uVar1,0,uVar2);
    if (iVar5 != 0) {
      return ptr;
    }
    CRYPTO_free(ptr);
  }
  return (undefined8 *)0x0;
}



void ossl_quic_engine_free(void *param_1)

{
  if (param_1 != (void *)0x0) {
    ossl_quic_reactor_cleanup((long)param_1 + 0x28);
    CRYPTO_free(param_1);
    return;
  }
  return;
}



long ossl_quic_engine_get0_reactor(long param_1)

{
  return param_1 + 0x28;
}



undefined8 ossl_quic_engine_get0_mutex(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



void ossl_quic_engine_get_time(long param_1)

{
  if (*(code **)(param_1 + 0x18) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x001001f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x18))(*(undefined8 *)(param_1 + 0x20));
    return;
  }
  ossl_time_now();
  return;
}



ulong ossl_quic_engine_make_real_time(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  if ((*(code **)(param_1 + 0x18) != (code *)0x0) && (param_2 != 0)) {
    if (param_2 != 0xffffffffffffffff) {
      uVar1 = (**(code **)(param_1 + 0x18))(*(undefined8 *)(param_1 + 0x20));
      uVar2 = ossl_time_now();
      uVar3 = 0;
      if (uVar1 <= param_2) {
        uVar3 = param_2 - uVar1;
      }
      uVar1 = uVar3 + uVar2;
      if (CARRY8(uVar3,uVar2)) {
        uVar1 = 0xffffffffffffffff;
      }
      return uVar1;
    }
    return 0xffffffffffffffff;
  }
  return param_2;
}



void ossl_quic_engine_set_time_cb(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_2;
  *(undefined8 *)(param_1 + 0x20) = param_3;
  return;
}



void ossl_quic_engine_set_inhibit_tick(long param_1,int param_2)

{
  *(byte *)(param_1 + 0xa0) = *(byte *)(param_1 + 0xa0) & 0xfe | param_2 != 0;
  return;
}



undefined8 ossl_quic_engine_get0_libctx(undefined8 *param_1)

{
  return *param_1;
}



undefined8 ossl_quic_engine_get0_propq(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



void ossl_quic_engine_update_poll_descriptors(long param_1,undefined4 param_2)

{
  long lVar1;
  
  for (lVar1 = *(long *)(param_1 + 0x88); lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
    ossl_quic_port_update_poll_descriptors(lVar1,param_2);
  }
  return;
}



undefined8 ossl_quic_engine_create_port(long param_1,long *param_2)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  long local_38;
  long lStack_30;
  long local_28;
  long lStack_20;
  long local_18;
  long local_10;
  
  local_38 = *param_2;
  lStack_30 = param_2[1];
  local_28 = param_2[2];
  lStack_20 = param_2[3];
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = param_2[4];
  uVar1 = 0;
  if ((*(long *)(param_1 + 0x98) == 0) && (local_38 == 0)) {
    local_38 = param_1;
    uVar1 = ossl_quic_port_new(&local_38);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


