
void mbedtls_platform_zeroize(undefined8 param_1,long param_2)

{
  if (param_2 == 0) {
    return;
  }
  __explicit_bzero_chk(param_1,param_2,0xffffffffffffffff);
  return;
}



void mbedtls_zeroize_and_free(void *param_1,long param_2)

{
  if ((param_1 != (void *)0x0) && (param_2 != 0)) {
    __explicit_bzero_chk(param_1,param_2,0xffffffffffffffff);
    free(param_1);
    return;
  }
  free(param_1);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

tm * mbedtls_platform_gmtime_r(time_t *__timer,tm *__tp)

{
  tm *ptVar1;
  
  ptVar1 = gmtime_r(__timer,__tp);
  return ptVar1;
}



long mbedtls_ms_time(void)

{
  int iVar1;
  time_t tVar2;
  long lVar3;
  long in_FS_OFFSET;
  timespec local_28;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = clock_gettime(7,&local_28);
  if (iVar1 == 0) {
    lVar3 = local_28.tv_sec * 1000 + local_28.tv_nsec / 1000000;
  }
  else {
    tVar2 = time((time_t *)0x0);
    lVar3 = tVar2 * 1000;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


