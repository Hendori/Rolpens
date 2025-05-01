
/* WARNING: Unknown calling convention */

long gettime_res(void)

{
  long lVar1;
  undefined1 auVar2 [16];
  long lVar3;
  long lVar4;
  int iVar5;
  long in_FS_OFFSET;
  undefined1 auVar6 [16];
  timespec res;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  clock_getres(0,(timespec *)&res);
  if (res.tv_nsec < 1) {
    res.tv_nsec = 1000000000;
  }
  else if (res.tv_nsec == 1) goto LAB_00100088;
  iVar5 = 0;
  lVar4 = res.tv_nsec;
  auVar2 = ZEXT816(0xffffffffffffffff) << 0x40;
  do {
    while( true ) {
      auVar6 = current_timespec();
      if (auVar6 != auVar2) break;
      iVar5 = 0x20;
    }
    lVar3 = auVar6._8_8_;
    res.tv_nsec = lVar4;
    if (0 < auVar6._8_8_) {
      do {
        res.tv_nsec = lVar3;
        lVar3 = lVar4 % res.tv_nsec;
        lVar4 = res.tv_nsec;
      } while (lVar3 != 0);
    }
    iVar5 = iVar5 + 1;
  } while ((1 < res.tv_nsec) && (lVar4 = res.tv_nsec, auVar2 = auVar6, iVar5 < 0x20));
LAB_00100088:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return res.tv_nsec;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


