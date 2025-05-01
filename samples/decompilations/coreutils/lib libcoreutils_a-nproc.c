
/* WARNING: Unknown calling convention */

ulong parse_omp_threads(char *threads)

{
  ulong uVar1;
  char *pcVar2;
  char *pcVar3;
  char cVar4;
  long in_FS_OFFSET;
  char *endptr;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (threads == (char *)0x0) {
LAB_00100028:
    uVar1 = 0;
LAB_0010002a:
    if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
      return uVar1;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  cVar4 = *threads;
joined_r0x0010001e:
  if (cVar4 != '\0') {
    if (cVar4 < '\x0e') {
      if ('\b' < cVar4) goto LAB_00100044;
    }
    else {
      if (cVar4 == ' ') goto LAB_00100044;
      if ((int)cVar4 - 0x30U < 10) {
        uVar1 = __isoc23_strtoul(threads,&endptr,10);
        cVar4 = *endptr;
        if (cVar4 != '\0') {
          pcVar2 = endptr + 1;
          if ('\r' < cVar4) goto LAB_0010009a;
          while (pcVar3 = pcVar2, '\b' < cVar4) {
            while( true ) {
              cVar4 = *pcVar3;
              pcVar2 = pcVar3 + 1;
              endptr = pcVar3;
              if (cVar4 == '\0') goto LAB_0010002a;
              if (cVar4 < '\x0e') break;
LAB_0010009a:
              pcVar3 = pcVar2;
              if (cVar4 != ' ') {
                if (cVar4 == ',') goto LAB_0010002a;
                goto LAB_00100028;
              }
            }
          }
          goto LAB_00100028;
        }
        goto LAB_0010002a;
      }
    }
  }
  goto LAB_00100028;
LAB_00100044:
  cVar4 = threads[1];
  threads = threads + 1;
  goto joined_r0x0010001e;
}



/* WARNING: Unknown calling convention */

ulong num_processors_via_affinity_mask(void)

{
  size_t __cpusetsize;
  long lVar1;
  int iVar2;
  uint uVar3;
  cpu_set_t *__cpuset;
  int *piVar4;
  ulong uVar5;
  size_t __count;
  int iVar6;
  long in_FS_OFFSET;
  cpu_set_t set;
  
  iVar6 = 0x16;
  __count = 0x400;
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  while( true ) {
    __cpuset = __sched_cpualloc(__count);
    if (__cpuset == (cpu_set_t *)0x0) {
      iVar6 = sched_getaffinity(0,0x80,(cpu_set_t *)&set);
      if (iVar6 == 0) {
        iVar6 = __sched_cpucount(0x80,(cpu_set_t *)&set);
        uVar5 = (ulong)iVar6;
        if (uVar5 != 0) goto LAB_00100135;
      }
      goto LAB_00100133;
    }
    __cpusetsize = (__count + 0x3f >> 6) * 8;
    iVar2 = sched_getaffinity(0,__cpusetsize,__cpuset);
    if (iVar2 == 0) {
      uVar3 = __sched_cpucount(__cpusetsize,__cpuset);
      __sched_cpufree(__cpuset);
      uVar5 = (ulong)uVar3;
      goto LAB_00100135;
    }
    piVar4 = __errno_location();
    if (*piVar4 != 0x16) break;
    __sched_cpufree(__cpuset);
    __count = (size_t)(uint)((int)__count * 2);
    iVar6 = iVar6 + -1;
    if (iVar6 == 0) {
LAB_00100133:
      uVar5 = 0;
LAB_00100135:
      if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return uVar5;
    }
  }
  __sched_cpufree(__cpuset);
  goto LAB_00100133;
}



/* WARNING: Unknown calling convention */

ulong num_processors(nproc_query query)

{
  ulong uVar1;
  char *pcVar2;
  ulong uVar3;
  
  if (query == NPROC_CURRENT_OVERRIDABLE) {
    pcVar2 = getenv("OMP_NUM_THREADS");
    uVar1 = parse_omp_threads(pcVar2);
    pcVar2 = getenv("OMP_THREAD_LIMIT");
    uVar3 = parse_omp_threads(pcVar2);
    if (uVar3 != 0) {
      if (uVar1 != 0) {
        if (uVar3 < uVar1) {
          return uVar3;
        }
        return uVar1;
      }
      if (uVar3 == 1) {
        return 1;
      }
      goto LAB_00100264;
    }
    if (uVar1 != 0) {
      return uVar1;
    }
  }
  else if (query != NPROC_CURRENT) {
    uVar1 = sysconf(0x53);
    uVar3 = uVar1;
    if ((uVar1 - 1 < 2) && (uVar3 = num_processors_via_affinity_mask(), uVar3 <= uVar1)) {
      return uVar1;
    }
    if ((long)uVar3 < 1) {
      return 1;
    }
    return uVar3;
  }
  uVar3 = 0xffffffffffffffff;
LAB_00100264:
  uVar1 = num_processors_via_affinity_mask();
  if ((uVar1 == 0) && (uVar1 = sysconf(0x54), (long)uVar1 < 1)) {
    return 1;
  }
  if (uVar1 <= uVar3) {
    uVar3 = uVar1;
  }
  return uVar3;
}


