
undefined8 get_meminfo(long *param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  long in_FS_OFFSET;
  long local_1058;
  long local_1050;
  char local_1048 [4104];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = open("/proc/meminfo",0);
  if (-1 < iVar1) {
    pcVar5 = local_1048;
    lVar2 = full_read(iVar1,pcVar5,0x1000);
    close(iVar1);
    if (lVar2 != 0) {
      pcVar6 = pcVar5 + lVar2;
      local_1058 = 0;
      local_1050 = 0;
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
        iVar1 = __isoc23_sscanf(pcVar5,"MemFree: %llu kB",&local_1058);
        if (iVar1 == 1) {
          local_1058 = local_1058 << 10;
        }
        iVar1 = __isoc23_sscanf(pcVar5,"Inactive(file): %llu kB",&local_1050);
        if (iVar1 == 1) {
          local_1050 = local_1050 << 10;
        }
        pcVar5 = pcVar4 + 1;
      }
LAB_00100110:
      if ((local_1058 != 0) && (local_1050 != 0)) {
        *param_1 = local_1058;
        *param_2 = local_1050;
        uVar3 = 0;
        goto LAB_00100135;
      }
    }
  }
  uVar3 = 0xffffffff;
LAB_00100135:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



double physmem_total(void)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long in_FS_OFFSET;
  double dVar4;
  sysinfo local_88;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = sysconf(0x55);
  lVar3 = sysconf(0x1e);
  if (((double)lVar2 < 0.0) || ((double)lVar3 < 0.0)) {
    iVar1 = sysinfo(&local_88);
    dVar4 = _LC3;
    if (iVar1 == 0) {
      dVar4 = (double)local_88.totalram * (double)local_88.mem_unit;
    }
  }
  else {
    dVar4 = (double)lVar2 * (double)lVar3;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return dVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double physmem_claimable(double param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long in_FS_OFFSET;
  double dVar4;
  ulong local_98;
  ulong local_90;
  sysinfo local_88;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 <= 0.0) || (iVar1 = get_meminfo(&local_98,&local_90), iVar1 != 0)) {
    lVar2 = sysconf(0x56);
    lVar3 = sysconf(0x1e);
    if (((double)lVar2 < 0.0) || ((double)lVar3 < 0.0)) {
      iVar1 = sysinfo(&local_88);
      if (iVar1 == 0) {
        dVar4 = ((double)local_88.freeram + (double)local_88.bufferram) * (double)local_88.mem_unit;
      }
      else {
        dVar4 = (double)physmem_total();
        dVar4 = dVar4 * __LC5;
      }
    }
    else {
      dVar4 = (double)lVar2 * (double)lVar3;
    }
  }
  else {
    dVar4 = (double)local_90 * param_1 + (double)local_98;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return dVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void physmem_available(void)

{
  physmem_claimable(0);
  return;
}


