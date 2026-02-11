
long mbedtls_timing_get_timer(timeval *param_1,int param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  timeval local_28;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == 0) {
    gettimeofday(&local_28,(__timezone_ptr_t)0x0);
    lVar1 = (local_28.tv_sec - param_1->tv_sec) * 1000 +
            (local_28.tv_usec - param_1->tv_usec) / 1000;
  }
  else {
    gettimeofday(param_1,(__timezone_ptr_t)0x0);
    lVar1 = 0;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void mbedtls_timing_set_delay(timeval *param_1,undefined4 param_2,int param_3)

{
  *(undefined4 *)&param_1[2].tv_sec = param_2;
  *(int *)((long)&param_1[2].tv_sec + 4) = param_3;
  if (param_3 == 0) {
    return;
  }
  gettimeofday(param_1,(__timezone_ptr_t)0x0);
  return;
}



ulong mbedtls_timing_get_delay(long *param_1)

{
  ulong uVar1;
  ulong uVar2;
  long in_FS_OFFSET;
  timeval local_28;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)((long)param_1 + 0x24) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    gettimeofday(&local_28,(__timezone_ptr_t)0x0);
    uVar1 = 2;
    uVar2 = (local_28.tv_usec - param_1[1]) / 1000 + (local_28.tv_sec - *param_1) * 1000;
    if (uVar2 < *(uint *)((long)param_1 + 0x24)) {
      uVar1 = (ulong)(*(uint *)(param_1 + 4) <= uVar2);
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4 mbedtls_timing_get_final_delay(long param_1)

{
  return *(undefined4 *)(param_1 + 0x24);
}


