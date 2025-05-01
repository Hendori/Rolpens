
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int main(int argc,char **argv)

{
  long lVar1;
  int iVar2;
  size_t __size;
  uchar *d;
  ulong uVar3;
  int iVar4;
  long in_FS_OFFSET;
  timeval real_end;
  timings_state ts;
  rusage usage;
  char digest [64];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (argc != 3) {
    __fprintf_chk(_stderr,2,0x100000,*argv);
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  __size = __isoc23_strtol(argv[1],0,10);
  iVar2 = __isoc23_strtol(argv[2],0,10);
  d = (uchar *)malloc(__size);
  if (d == (uchar *)0x0) {
    __fprintf_chk(_stderr,2,"%s: memory exhausted\n",*argv);
    iVar2 = 1;
  }
  else {
    uVar3 = 0;
    if (__size != 0) {
      do {
        d[uVar3] = (char)uVar3 * '\x02' + (char)(uVar3 / 499) * '\r' + (char)(uVar3 / 0x65) * -0x65
                   + (char)((uVar3 - 1) * (uVar3 - 5) * uVar3 >> 6);
        uVar3 = uVar3 + 1;
      } while (__size != uVar3);
    }
    getrusage(RUSAGE_SELF,(rusage *)&usage);
    ts.user_start.tv_sec = usage.ru_utime.tv_sec;
    ts.user_start.tv_usec = usage.ru_utime.tv_usec;
    ts.sys_start.tv_sec = usage.ru_stime.tv_sec;
    ts.sys_start.tv_usec = usage.ru_stime.tv_usec;
    gettimeofday((timeval *)&ts,(__timezone_ptr_t)0x0);
    if (0 < iVar2) {
      iVar4 = 0;
      do {
        iVar4 = iVar4 + 1;
        SHA1(d,__size,(uchar *)digest);
      } while (iVar4 != iVar2);
    }
    gettimeofday((timeval *)&real_end,(__timezone_ptr_t)0x0);
    getrusage(RUSAGE_SELF,(rusage *)&usage);
    ts.user_usec = ((usage.ru_utime.tv_sec - ts.user_start.tv_sec) * 1000000 +
                   usage.ru_utime.tv_usec) - ts.user_start.tv_usec;
    ts.real_usec = ((real_end.tv_sec - ts.real_start.tv_sec) * 1000000 + real_end.tv_usec) -
                   ts.real_start.tv_usec;
    ts.sys_usec = ((usage.ru_stime.tv_sec - ts.sys_start.tv_sec) * 1000000 + usage.ru_stime.tv_usec)
                  - ts.sys_start.tv_usec;
    __printf_chk((double)ts.real_usec / __LC2,2,"real %10.6f\n");
    __printf_chk((double)ts.user_usec / __LC2,2,"user %7.3f\n");
    __printf_chk((double)ts.sys_usec / __LC2,2,"sys  %7.3f\n");
    iVar2 = 0;
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


