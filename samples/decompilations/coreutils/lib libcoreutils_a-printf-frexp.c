
/* WARNING: Unknown calling convention */

double printf_frexp(double x,int *expptr)

{
  int iVar1;
  long in_FS_OFFSET;
  double dVar2;
  int exponent;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  dVar2 = frexp(x,&exponent);
  dVar2 = dVar2 + dVar2;
  iVar1 = exponent + -1;
  if (iVar1 < -0x3fe) {
    dVar2 = ldexp(dVar2,exponent + 0x3fd);
    iVar1 = -0x3fe;
  }
  *expptr = iVar1;
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return dVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


