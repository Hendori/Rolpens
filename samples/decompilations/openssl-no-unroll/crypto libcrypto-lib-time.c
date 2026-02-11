
long ossl_time_now(void)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  long in_FS_OFFSET;
  timeval local_28;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = gettimeofday(&local_28,(__timezone_ptr_t)0x0);
  if (iVar1 < 0) {
    ERR_new();
    ERR_set_debug("crypto/time.c",0x27,"ossl_time_now");
    piVar3 = __errno_location();
    ERR_set_error(2,*piVar3,"calling gettimeofday()");
    lVar2 = 0;
  }
  else if (local_28.tv_sec < 1) {
    lVar2 = 0;
    if (0 < local_28.tv_usec) {
      lVar2 = local_28.tv_usec * 1000;
    }
  }
  else {
    lVar2 = (local_28.tv_sec * 1000000 + local_28.tv_usec) * 1000;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


