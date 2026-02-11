
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 main(int param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long in_FS_OFFSET;
  timeval local_128;
  timeval local_118;
  long local_108;
  long lStack_100;
  long local_f8;
  long lStack_f0;
  long local_e8;
  long local_e0;
  long local_d8;
  rusage local_c8;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != 2) {
    __fprintf_chk(_stderr,2,"Usage: %s REPETITIONS\n",*param_2);
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  iVar1 = __isoc23_strtol(param_2[1],0,10);
  getrusage(RUSAGE_SELF,&local_c8);
  local_108 = local_c8.ru_utime.tv_sec;
  lStack_100 = local_c8.ru_utime.tv_usec;
  local_f8 = local_c8.ru_stime.tv_sec;
  lStack_f0 = local_c8.ru_stime.tv_usec;
  gettimeofday(&local_118,(__timezone_ptr_t)0x0);
  if (0 < iVar1) {
    iVar3 = 0;
    do {
      iVar2 = crc32(&randomb);
      if (iVar2 != 0x5299f9d2) {
        __fprintf_chk(_stderr,2,"%s:%d: assertion \'%s\' failed\n","bench-crc.c",0x2d,
                      "digest == 0x5299f9d2U");
        rpl_fflush(_stderr);
                    /* WARNING: Subroutine does not return */
        abort();
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 != iVar1);
  }
  gettimeofday(&local_128,(__timezone_ptr_t)0x0);
  getrusage(RUSAGE_SELF,&local_c8);
  local_e0 = ((local_c8.ru_utime.tv_sec - local_108) * 1000000 + local_c8.ru_utime.tv_usec) -
             lStack_100;
  local_e8 = ((local_128.tv_sec - local_118.tv_sec) * 1000000 + local_128.tv_usec) -
             local_118.tv_usec;
  local_d8 = ((local_c8.ru_stime.tv_sec - local_f8) * 1000000 + local_c8.ru_stime.tv_usec) -
             lStack_f0;
  __printf_chk((double)local_e8 / __LC4,2,"real %10.6f\n");
  __printf_chk((double)local_e0 / __LC4,2,"user %7.3f\n");
  __printf_chk((double)local_d8 / __LC4,2,"sys  %7.3f\n");
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


