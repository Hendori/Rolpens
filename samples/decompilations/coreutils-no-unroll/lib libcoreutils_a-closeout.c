
void close_stdout_set_file_name(undefined8 param_1)

{
  file_name = param_1;
  return;
}



void close_stdout_set_ignore_EPIPE(undefined1 param_1)

{
  ignore_EPIPE = param_1;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void close_stdout(void)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  iVar1 = close_stream(_stdout);
  if (iVar1 == 0) {
LAB_0010004d:
    iVar1 = close_stream(_stderr);
    if (iVar1 == 0) {
      return;
    }
  }
  else {
    if (ignore_EPIPE != '\0') {
      piVar2 = __errno_location();
      if (*piVar2 == 0x20) goto LAB_0010004d;
    }
    uVar3 = dcgettext("gnulib","write error",5);
    if (file_name == 0) {
      piVar2 = __errno_location();
      error(0,*piVar2,&_LC3,uVar3);
    }
    else {
      uVar4 = quotearg_colon();
      piVar2 = __errno_location();
      error(0,*piVar2,"%s: %s",uVar4,uVar3);
    }
  }
                    /* WARNING: Subroutine does not return */
  _exit(_exit_failure);
}


