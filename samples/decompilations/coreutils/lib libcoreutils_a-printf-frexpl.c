
/* WARNING: Unknown calling convention */

longdouble * printf_frexpl(longdouble x,int *expptr)

{
  int iVar1;
  undefined8 extraout_RDX;
  int iVar2;
  undefined8 in_R8;
  undefined8 in_R9;
  long in_FS_OFFSET;
  undefined2 in_FPUControlWord;
  longdouble in_ST0;
  undefined6 in_stack_00000012;
  fpucw_t _ncw_1;
  int exponent;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  exponent = CONCAT22(exponent._2_2_,in_FPUControlWord) | 0x300;
  frexpl(&exponent);
  iVar1 = exponent + -1;
  if (iVar1 < -0x3ffe) {
    iVar2 = exponent + 0x3ffd;
    exponent = iVar1;
    ldexpl(iVar2,CONCAT62(in_stack_00000012,x._8_2_),extraout_RDX,x._0_8_,in_R8,in_R9,
           SUB108(in_ST0 + in_ST0,0));
    exponent = -0x3ffe;
    iVar1 = exponent;
  }
  exponent = iVar1;
  *expptr = exponent;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (longdouble *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


