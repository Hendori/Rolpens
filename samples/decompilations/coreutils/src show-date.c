
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

_Bool show_date(char *format,timespec when,timezone_t tz)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  __time_t local_88;
  ulong local_80;
  tm tm;
  char buf [21];
  
  local_80 = when.tv_nsec;
  local_88 = when.tv_sec;
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = localtime_rz(tz,&local_88,&tm);
  if (lVar2 == 0) {
    uVar3 = imaxtostr(local_88,buf);
    uVar3 = quote(uVar3);
    uVar4 = dcgettext(0,"time %s is out of range",5);
    error(0,0,uVar4,uVar3);
  }
  else {
    fprintftime(_stdout,format,&tm,tz,local_80 & 0xffffffff);
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


