
void printf_frexpl(int *param_1)

{
  int iVar1;
  undefined8 extraout_RDX;
  int iVar2;
  undefined8 in_R8;
  undefined8 in_R9;
  long in_FS_OFFSET;
  undefined2 in_FPUControlWord;
  longdouble in_ST0;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined4 local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_24 = CONCAT22(local_24._2_2_,in_FPUControlWord) | 0x300;
  frexpl(&local_24);
  iVar1 = local_24 - 1;
  if (iVar1 < -0x3ffe) {
    iVar2 = local_24 + 0x3ffd;
    local_24 = iVar1;
    ldexpl(iVar2,in_stack_00000010,extraout_RDX,in_stack_00000008,in_R8,in_R9,
           SUB108(in_ST0 + in_ST0,0));
    local_24 = -0x3ffe;
    iVar1 = local_24;
  }
  local_24 = iVar1;
  *param_1 = local_24;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


