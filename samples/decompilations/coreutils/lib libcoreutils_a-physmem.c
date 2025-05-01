
/* WARNING: Unknown calling convention */

int get_meminfo(ulonglong *mem_free_p,ulonglong *mem_inactive_file_p)

{
  long lVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  long in_FS_OFFSET;
  ulonglong mem_free;
  ulonglong mem_inactive_file;
  char buf [4096];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = open("/proc/meminfo",0);
  if (-1 < iVar2) {
    pcVar5 = buf;
    lVar3 = full_read(iVar2,pcVar5,0x1000);
    close(iVar2);
    if (lVar3 != 0) {
      pcVar6 = pcVar5 + lVar3;
      mem_free = 0;
      mem_inactive_file = 0;
      while( true ) {
        pcVar4 = pcVar5;
        if (pcVar5 < pcVar6) {
          while (*pcVar4 != '\n') {
            pcVar4 = pcVar4 + 1;
            if (pcVar6 == pcVar4) goto LAB_00100110;
          }
        }
        if (pcVar6 == pcVar4) break;
        *pcVar4 = '\0';
        iVar2 = __isoc23_sscanf(pcVar5,"MemFree: %llu kB",&mem_free);
        if (iVar2 == 1) {
          mem_free = mem_free << 10;
        }
        iVar2 = __isoc23_sscanf(pcVar5,"Inactive(file): %llu kB",&mem_inactive_file);
        if (iVar2 == 1) {
          mem_inactive_file = mem_inactive_file << 10;
        }
        pcVar5 = pcVar4 + 1;
      }
LAB_00100110:
      if ((mem_free != 0) && (mem_inactive_file != 0)) {
        *mem_free_p = mem_free;
        *mem_inactive_file_p = mem_inactive_file;
        iVar2 = 0;
        goto LAB_00100135;
      }
    }
  }
  iVar2 = -1;
LAB_00100135:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}



/* WARNING: Unknown calling convention */

double physmem_total(void)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long in_FS_OFFSET;
  double dVar5;
  sysinfo si;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = sysconf(0x55);
  lVar4 = sysconf(0x1e);
  if (((double)lVar3 < 0.0) || ((double)lVar4 < 0.0)) {
    iVar2 = sysinfo((sysinfo *)&si);
    dVar5 = _LC3;
    if (iVar2 == 0) {
      dVar5 = (double)si.totalram * (double)si.mem_unit;
    }
  }
  else {
    dVar5 = (double)lVar3 * (double)lVar4;
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return dVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

double physmem_claimable(double aggressivity)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long in_FS_OFFSET;
  double dVar5;
  ulonglong mem_free;
  ulonglong mem_inactive_file;
  sysinfo si;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if ((aggressivity <= 0.0) || (iVar2 = get_meminfo(&mem_free,&mem_inactive_file), iVar2 != 0)) {
    lVar3 = sysconf(0x56);
    lVar4 = sysconf(0x1e);
    if (((double)lVar3 < 0.0) || ((double)lVar4 < 0.0)) {
      iVar2 = sysinfo((sysinfo *)&si);
      if (iVar2 == 0) {
        dVar5 = ((double)si.freeram + (double)si.bufferram) * (double)si.mem_unit;
      }
      else {
        dVar5 = physmem_total();
        dVar5 = dVar5 * __LC5;
      }
    }
    else {
      dVar5 = (double)lVar3 * (double)lVar4;
    }
  }
  else {
    dVar5 = (double)mem_inactive_file * aggressivity + (double)mem_free;
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return dVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention */

double physmem_available(void)

{
  double dVar1;
  
  dVar1 = physmem_claimable(0.0);
  return dVar1;
}


