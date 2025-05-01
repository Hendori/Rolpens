
/* WARNING: Unknown calling convention */

intmax_t xnumtoimax(char *n_str,int base,intmax_t min,intmax_t max,char *suffixes,char *err,
                   int err_exit,int flags)

{
  uint uVar1;
  int *piVar2;
  undefined8 uVar3;
  uint uVar4;
  intmax_t extraout_RDX;
  int iVar5;
  long in_FS_OFFSET;
  intmax_t tnum;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = xstrtoimax(n_str,0,base,&tnum);
  if (uVar1 != 4) {
    if (tnum < min) {
      uVar4 = flags & 4;
      max = min;
    }
    else {
      if (tnum <= max) goto LAB_00100120;
      uVar4 = flags & 8;
    }
    iVar5 = (-(uint)(uVar4 == 0) & 0x29) + 0x22;
    if (uVar1 < 2) goto LAB_0010006e;
  }
  iVar5 = 0;
  do {
    if (err_exit == 0) {
      err_exit = 1;
    }
    uVar3 = quote(n_str);
    uVar1 = error(err_exit,iVar5,"%s: %s",err,uVar3);
    tnum = extraout_RDX;
LAB_00100120:
    iVar5 = 0x4b;
    max = tnum;
    if (uVar1 == 1) {
LAB_0010006e:
      uVar1 = flags & 1U - ((int)~(uint)((ulong)tnum >> 0x20) >> 0x1f);
    }
    else {
      iVar5 = 0;
    }
  } while (uVar1 == 0);
  piVar2 = __errno_location();
  *piVar2 = iVar5;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return max;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention */

intmax_t xdectoimax(char *n_str,intmax_t min,intmax_t max,char *suffixes,char *err,int err_exit)

{
  intmax_t iVar1;
  
  iVar1 = xnumtoimax(n_str,10,min,max,suffixes,err,err_exit,0);
  return iVar1;
}


