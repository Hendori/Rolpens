
void open_safer(char *param_1,uint param_2,ulong param_3)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long in_FS_OFFSET;
  
  uVar3 = 0;
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 & 0x40) != 0) {
    uVar3 = param_3 & 0xffffffff;
  }
  iVar2 = open(param_1,param_2,uVar3);
  fd_safer(iVar2);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


