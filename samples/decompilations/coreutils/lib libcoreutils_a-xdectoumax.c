
/* WARNING: Unknown calling convention */

uintmax_t xnumtoumax(char *n_str,int base,uintmax_t min,uintmax_t max,char *suffixes,char *err,
                    int err_exit,int flags)

{
  uintmax_t uVar1;
  uint uVar2;
  int *piVar3;
  undefined8 uVar4;
  uint uVar5;
  uintmax_t extraout_RDX;
  int iVar6;
  long in_FS_OFFSET;
  uintmax_t tnum;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = xstrtoumax(n_str,0,base,&tnum);
  if (uVar2 != 4) {
    if (tnum < min) {
      uVar5 = flags & 4;
      tnum = min;
    }
    else {
      if (tnum <= max) goto LAB_00100110;
      uVar5 = flags & 8;
      tnum = max;
    }
    iVar6 = (-(uint)(uVar5 == 0) & 0x29) + 0x22;
    if (uVar2 < 2) goto LAB_0010006e;
  }
  iVar6 = 0;
  do {
    if (err_exit == 0) {
      err_exit = 1;
    }
    uVar4 = quote(n_str);
    uVar2 = error(err_exit,iVar6,"%s: %s",err,uVar4);
    tnum = extraout_RDX;
LAB_00100110:
    iVar6 = 0x4b;
    if (uVar2 == 1) {
LAB_0010006e:
      uVar2 = flags & 2;
      uVar1 = tnum;
    }
    else {
      iVar6 = 0;
      uVar1 = tnum;
    }
  } while (uVar2 == 0);
  piVar3 = __errno_location();
  *piVar3 = iVar6;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}



/* WARNING: Unknown calling convention */

uintmax_t xdectoumax(char *n_str,uintmax_t min,uintmax_t max,char *suffixes,char *err,int err_exit)

{
  uintmax_t uVar1;
  
  uVar1 = xnumtoumax(n_str,10,min,max,suffixes,err,err_exit,0);
  return uVar1;
}


