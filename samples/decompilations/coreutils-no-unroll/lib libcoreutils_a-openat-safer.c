
void openat_safer(int param_1,char *param_2,uint param_3,ulong param_4)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long in_FS_OFFSET;
  
  uVar3 = 0;
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_3 & 0x40) != 0) {
    uVar3 = param_4 & 0xffffffff;
  }
  iVar2 = openat(param_1,param_2,param_3,uVar3);
  fd_safer(iVar2);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


