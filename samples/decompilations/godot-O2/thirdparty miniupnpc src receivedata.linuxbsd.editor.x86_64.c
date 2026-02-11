
ulong receivedata(int param_1,void *param_2,int param_3,int param_4,undefined4 *param_5)

{
  uint uVar1;
  int *piVar2;
  ulong uVar3;
  long in_FS_OFFSET;
  pollfd local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  do {
    local_48.events = 1;
    local_48.fd = param_1;
    uVar1 = poll(&local_48,1,param_4);
    uVar3 = (ulong)uVar1;
    if (-1 < (int)uVar1) {
      if (uVar1 != 0) {
        uVar3 = recv(param_1,param_2,(long)param_3,0);
        if ((int)uVar3 < 0) {
          perror("recv");
          uVar3 = uVar3 & 0xffffffff;
        }
        if (param_5 != (undefined4 *)0x0) {
          *param_5 = 0;
        }
      }
      goto LAB_00100090;
    }
    piVar2 = __errno_location();
  } while (*piVar2 == 4);
  perror("poll");
  uVar3 = 0xffffffff;
LAB_00100090:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4 receivedata_cold(void)

{
  undefined4 in_EAX;
  undefined4 *unaff_R14;
  long in_FS_OFFSET;
  undefined4 uStack000000000000000c;
  long in_stack_00000018;
  
  uStack000000000000000c = in_EAX;
  perror("recv");
  if (unaff_R14 != (undefined4 *)0x0) {
    *unaff_R14 = 0;
  }
  if (in_stack_00000018 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uStack000000000000000c;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


