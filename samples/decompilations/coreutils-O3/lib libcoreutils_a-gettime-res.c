
long gettime_res(void)

{
  undefined1 auVar1 [16];
  long lVar2;
  long lVar3;
  int iVar4;
  long in_FS_OFFSET;
  undefined1 auVar5 [16];
  timespec tStack_48;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  clock_getres(0,&tStack_48);
  if (tStack_48.tv_nsec < 1) {
    tStack_48.tv_nsec = 1000000000;
  }
  else if (tStack_48.tv_nsec == 1) goto LAB_00100088;
  iVar4 = 0;
  lVar3 = tStack_48.tv_nsec;
  auVar1 = ZEXT816(0xffffffffffffffff) << 0x40;
  do {
    while( true ) {
      auVar5 = current_timespec();
      if (auVar5 != auVar1) break;
      iVar4 = 0x20;
    }
    lVar2 = auVar5._8_8_;
    tStack_48.tv_nsec = lVar3;
    if (0 < auVar5._8_8_) {
      do {
        tStack_48.tv_nsec = lVar2;
        lVar2 = lVar3 % tStack_48.tv_nsec;
        lVar3 = tStack_48.tv_nsec;
      } while (lVar2 != 0);
    }
    iVar4 = iVar4 + 1;
  } while ((1 < tStack_48.tv_nsec) && (lVar3 = tStack_48.tv_nsec, auVar1 = auVar5, iVar4 < 0x20));
LAB_00100088:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return tStack_48.tv_nsec;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


