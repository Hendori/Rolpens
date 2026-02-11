
void xfts_open(undefined8 param_1,uint param_2)

{
  long lVar1;
  int *piVar2;
  
  lVar1 = rpl_fts_open(param_1,param_2 | 0x200);
  if (lVar1 != 0) {
    return;
  }
  piVar2 = __errno_location();
  if (*piVar2 != 0x16) {
    xalloc_die();
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("(*__errno_location ()) != 22","lib/xfts.c",0x28,"xfts_open");
}



bool cycle_warning_required(long param_1,long param_2)

{
  uint uVar1;
  bool bVar2;
  
  bVar2 = true;
  uVar1 = *(uint *)(param_1 + 0x48) & 0x11;
  if ((uVar1 != 0x10) && (bVar2 = false, uVar1 == 0x11)) {
    return *(long *)(param_2 + 0x58) != 0;
  }
  return bVar2;
}


