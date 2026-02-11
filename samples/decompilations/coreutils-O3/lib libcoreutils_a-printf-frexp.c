
void printf_frexp(double param_1,int *param_2)

{
  int iVar1;
  long in_FS_OFFSET;
  double dVar2;
  int local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  dVar2 = frexp(param_1,&local_14);
  iVar1 = local_14 + -1;
  if (iVar1 < -0x3fe) {
    ldexp(dVar2 + dVar2,local_14 + 0x3fd);
    iVar1 = -0x3fe;
  }
  *param_2 = iVar1;
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


