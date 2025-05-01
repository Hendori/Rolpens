
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int xnanosleep(double seconds)

{
  long lVar1;
  int iVar2;
  uint *puVar3;
  long in_FS_OFFSET;
  timespec ts_sleep;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (__LC0 <= seconds) {
    do {
      pause();
      puVar3 = (uint *)__errno_location();
    } while (*puVar3 == 4);
  }
  else {
    puVar3 = (uint *)__errno_location();
  }
  ts_sleep = (timespec)dtotimespec(seconds);
  do {
    *puVar3 = 0;
    iVar2 = rpl_nanosleep(&ts_sleep,&ts_sleep);
    if (iVar2 == 0) goto LAB_0010006d;
  } while ((*puVar3 & 0xfffffffb) == 0);
  iVar2 = -1;
LAB_0010006d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}


