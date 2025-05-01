
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int main(int argc,char **argv)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long in_FS_OFFSET;
  uint32_t digest;
  timeval real_end;
  timings_state ts;
  rusage usage;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (argc != 2) {
    __fprintf_chk(_stderr,2,"Usage: %s REPETITIONS\n",*argv);
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  iVar2 = __isoc23_strtol(argv[1],0,10);
  getrusage(RUSAGE_SELF,(rusage *)&usage);
  ts.user_start.tv_sec = usage.ru_utime.tv_sec;
  ts.user_start.tv_usec = usage.ru_utime.tv_usec;
  ts.sys_start.tv_sec = usage.ru_stime.tv_sec;
  ts.sys_start.tv_usec = usage.ru_stime.tv_usec;
  gettimeofday((timeval *)&ts,(__timezone_ptr_t)0x0);
  if (0 < iVar2) {
    iVar4 = 0;
    do {
      iVar3 = crc32(&randomb);
      if (iVar3 != 0x5299f9d2) {
        __fprintf_chk(_stderr,2,"%s:%d: assertion \'%s\' failed\n","bench-crc.c",0x2d,
                      "digest == 0x5299f9d2U");
        rpl_fflush(_stderr);
                    /* WARNING: Subroutine does not return */
        abort();
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 != iVar2);
  }
  gettimeofday((timeval *)&real_end,(__timezone_ptr_t)0x0);
  getrusage(RUSAGE_SELF,(rusage *)&usage);
  ts.user_usec = ((usage.ru_utime.tv_sec - ts.user_start.tv_sec) * 1000000 + usage.ru_utime.tv_usec)
                 - ts.user_start.tv_usec;
  ts.real_usec = ((real_end.tv_sec - ts.real_start.tv_sec) * 1000000 + real_end.tv_usec) -
                 ts.real_start.tv_usec;
  ts.sys_usec = ((usage.ru_stime.tv_sec - ts.sys_start.tv_sec) * 1000000 + usage.ru_stime.tv_usec) -
                ts.sys_start.tv_usec;
  __printf_chk((double)ts.real_usec / __LC4,2,"real %10.6f\n");
  __printf_chk((double)ts.user_usec / __LC4,2,"user %7.3f\n");
  __printf_chk((double)ts.sys_usec / __LC4,2,"sys  %7.3f\n");
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


