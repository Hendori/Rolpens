
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 main(int param_1,undefined8 *param_2)

{
  int iVar1;
  size_t __size;
  uchar *d;
  undefined8 uVar2;
  ulong uVar3;
  int iVar4;
  long in_FS_OFFSET;
  timeval local_178;
  timeval local_168;
  long local_158;
  long lStack_150;
  long local_148;
  long lStack_140;
  long local_138;
  long local_130;
  long local_128;
  rusage local_118;
  uchar local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != 3) {
    __fprintf_chk(_stderr,2,0x100000,*param_2);
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  __size = __isoc23_strtol(param_2[1],0,10);
  iVar1 = __isoc23_strtol(param_2[2],0,10);
  d = (uchar *)malloc(__size);
  if (d == (uchar *)0x0) {
    __fprintf_chk(_stderr,2,"%s: memory exhausted\n",*param_2);
    uVar2 = 1;
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
    getrusage(RUSAGE_SELF,&local_118);
    local_158 = local_118.ru_utime.tv_sec;
    lStack_150 = local_118.ru_utime.tv_usec;
    local_148 = local_118.ru_stime.tv_sec;
    lStack_140 = local_118.ru_stime.tv_usec;
    gettimeofday(&local_168,(__timezone_ptr_t)0x0);
    if (0 < iVar1) {
      iVar4 = 0;
      do {
        iVar4 = iVar4 + 1;
        MD5(d,__size,local_88);
      } while (iVar4 != iVar1);
    }
    gettimeofday(&local_178,(__timezone_ptr_t)0x0);
    getrusage(RUSAGE_SELF,&local_118);
    local_130 = ((local_118.ru_utime.tv_sec - local_158) * 1000000 + local_118.ru_utime.tv_usec) -
                lStack_150;
    local_138 = ((local_178.tv_sec - local_168.tv_sec) * 1000000 + local_178.tv_usec) -
                local_168.tv_usec;
    local_128 = ((local_118.ru_stime.tv_sec - local_148) * 1000000 + local_118.ru_stime.tv_usec) -
                lStack_140;
    __printf_chk((double)local_138 / __LC2,2,"real %10.6f\n");
    __printf_chk((double)local_130 / __LC2,2,"user %7.3f\n");
    __printf_chk((double)local_128 / __LC2,2,"sys  %7.3f\n");
    uVar2 = 0;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


