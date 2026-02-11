
uint iopoll_internal(uint param_1,uint param_2,byte param_3,char param_4)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  ushort uVar4;
  long in_FS_OFFSET;
  pollfd local_48;
  uint local_40;
  undefined4 local_3c;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 & param_2) == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("fdin != -1 || fdout != -1","src/iopoll.c",0x40,"iopoll_internal");
  }
  uVar4 = 0x38;
  local_48.events = 0x81;
  local_48.revents = 0;
  local_3c = 0x80;
  if (param_4 == '\0') {
    uVar4 = 4;
    local_3c = 4;
    local_48.events = 4;
    local_48.revents = 0;
  }
  local_48.fd = param_1;
  local_40 = param_2;
LAB_00100060:
  while( true ) {
    iVar1 = poll(&local_48,2,-(uint)param_3);
    if (-1 < iVar1) break;
    piVar3 = __errno_location();
    if (*piVar3 != 4) {
      uVar2 = 0xfffffffd;
LAB_001000ba:
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return uVar2;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  if ((iVar1 != 0) || (param_3 == 1)) {
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("0 < ret","src/iopoll.c",0x58,"iopoll_internal");
    }
    if (local_48.revents == 0) {
      if ((local_3c._2_2_ & uVar4) != 0) {
        uVar2 = -(uint)(param_4 != '\0') & 0xfffffffe;
        goto LAB_001000ba;
      }
      goto LAB_00100060;
    }
  }
  uVar2 = 0;
  goto LAB_001000ba;
}



undefined8 fwait_for_nonblocking_write(FILE *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = __errno_location();
  if (*piVar2 == 0xb) {
    iVar1 = fileno(param_1);
    if (iVar1 != -1) {
      iVar1 = iopoll_internal(0xffffffff,iVar1,1,0);
      if (iVar1 == 0) {
        clearerr_unlocked(param_1);
        return 1;
      }
    }
    *piVar2 = 0xb;
  }
  return 0;
}



void iopoll(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  iopoll_internal(param_1,param_2,param_3,1);
  return;
}



undefined4 iopoll_input_ok(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  long in_FS_OFFSET;
  stat sStack_a8;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = fstat(param_1,&sStack_a8);
  uVar3 = 1;
  if (iVar1 == 0) {
    uVar2 = (sStack_a8.st_mode & 0xf000) - 0x6000;
    uVar3 = CONCAT31((int3)(uVar2 >> 8),(uVar2 & 0xffffd000) != 0);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool iopoll_output_ok(void)

{
  int iVar1;
  
  iVar1 = isapipe();
  return 0 < iVar1;
}



bool fclose_wait(FILE *param_1)

{
  char cVar1;
  int iVar2;
  
  do {
    iVar2 = fflush_unlocked(param_1);
    if (iVar2 == 0) break;
    cVar1 = fwait_for_nonblocking_write(param_1);
  } while (cVar1 != '\0');
  iVar2 = rpl_fclose(param_1);
  return iVar2 == 0;
}



undefined8 fwrite_wait(void *param_1,size_t param_2,FILE *param_3)

{
  undefined8 uVar1;
  size_t sVar2;
  
  while( true ) {
    sVar2 = fwrite_unlocked(param_1,1,param_2,param_3);
    param_2 = param_2 - sVar2;
    if ((long)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("size >= 0","src/iopoll.c",0xe7,"fwrite_wait");
    }
    if (param_2 == 0) break;
    uVar1 = fwait_for_nonblocking_write(param_3);
    if ((char)uVar1 == '\0') {
      return uVar1;
    }
    param_1 = (void *)((long)param_1 + sVar2);
  }
  return 1;
}


