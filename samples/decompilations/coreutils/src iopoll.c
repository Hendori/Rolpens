
/* WARNING: Unknown calling convention */

int iopoll_internal(int fdin,int fdout,_Bool block,_Bool broken_output)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  ushort uVar5;
  long in_FS_OFFSET;
  pollfd pfds [2];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if ((fdin & fdout) == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("fdin != -1 || fdout != -1","src/iopoll.c",0x40,"iopoll_internal");
  }
  uVar5 = 0x38;
  pfds[0].events = 0x81;
  pfds[0].revents = 0;
  pfds[1].events = 0x80;
  pfds[1].revents = 0;
  if (!broken_output) {
    uVar5 = 4;
    pfds[1].events = 4;
    pfds[1].revents = 0;
    pfds[0].events = 4;
    pfds[0].revents = 0;
  }
  pfds[0].fd = fdin;
  pfds[1].fd = fdout;
LAB_00100060:
  while( true ) {
    iVar2 = poll((pollfd *)pfds,2,-(uint)block);
    if (-1 < iVar2) break;
    piVar4 = __errno_location();
    if (*piVar4 != 4) {
      uVar3 = 0xfffffffd;
LAB_001000ba:
      if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
        return uVar3;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  if ((iVar2 != 0) || (block)) {
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("0 < ret","src/iopoll.c",0x58,"iopoll_internal");
    }
    if (pfds[0].revents == 0) {
      if ((pfds[1].revents & uVar5) != 0) {
        uVar3 = -(uint)broken_output & 0xfffffffe;
        goto LAB_001000ba;
      }
      goto LAB_00100060;
    }
  }
  uVar3 = 0;
  goto LAB_001000ba;
}



/* WARNING: Unknown calling convention */

_Bool fwait_for_nonblocking_write(FILE *f)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = __errno_location();
  if (*piVar2 == 0xb) {
    iVar1 = fileno((FILE *)f);
    if (iVar1 != -1) {
      iVar1 = iopoll_internal(-1,iVar1,true,false);
      if (iVar1 == 0) {
        clearerr_unlocked((FILE *)f);
        return true;
      }
    }
    *piVar2 = 0xb;
  }
  return false;
}



/* WARNING: Unknown calling convention */

int iopoll(int fdin,int fdout,_Bool block)

{
  int iVar1;
  
  iVar1 = iopoll_internal(fdin,fdout,block,true);
  return iVar1;
}



/* WARNING: Unknown calling convention */

_Bool iopoll_input_ok(int fdin)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  stat st;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = fstat(fdin,(stat *)&st);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2 != 0 || ((st.st_mode & 0xf000) - 0x6000 & 0xffffd000) != 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention */

_Bool iopoll_output_ok(int fdout)

{
  int iVar1;
  
  iVar1 = isapipe();
  return 0 < iVar1;
}



/* WARNING: Unknown calling convention */

_Bool fclose_wait(FILE *f)

{
  _Bool _Var1;
  int iVar2;
  
  do {
    iVar2 = fflush_unlocked((FILE *)f);
    if (iVar2 == 0) break;
    _Var1 = fwait_for_nonblocking_write(f);
  } while (_Var1);
  iVar2 = rpl_fclose(f);
  return iVar2 == 0;
}



/* WARNING: Unknown calling convention */

_Bool fwrite_wait(char *buf,ssize_t size,FILE *f)

{
  _Bool _Var1;
  size_t sVar2;
  
  while( true ) {
    sVar2 = fwrite_unlocked(buf,1,size,(FILE *)f);
    size = size - sVar2;
    if (size < 0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("size >= 0","src/iopoll.c",0xe7,"fwrite_wait");
    }
    if (size == 0) break;
    _Var1 = fwait_for_nonblocking_write(f);
    if (!_Var1) {
      return _Var1;
    }
    buf = buf + sVar2;
  }
  return true;
}


