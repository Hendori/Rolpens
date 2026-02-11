
void close_stdin_set_file_name(undefined8 param_1)

{
  file_name = param_1;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void close_stdin(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int *piVar5;
  
  uVar3 = _stdin;
  lVar2 = freadahead(_stdin);
  if (lVar2 == 0) {
    iVar1 = close_stream(uVar3);
    if (iVar1 == 0) {
      close_stdout();
      return;
    }
  }
  else {
    iVar1 = rpl_fseeko(uVar3,0,1);
    if (iVar1 == 0) {
      iVar1 = rpl_fflush(_stdin);
      if (iVar1 != 0) {
        close_stream(_stdin);
        goto LAB_00100095;
      }
    }
    iVar1 = close_stream(_stdin);
    if (iVar1 == 0) {
      close_stdout();
      return;
    }
  }
LAB_00100095:
  uVar3 = dcgettext("gnulib","error closing file",5);
  if (file_name == 0) {
    piVar5 = __errno_location();
    error(0,*piVar5,&_LC3,uVar3);
  }
  else {
    uVar4 = quotearg_colon();
    piVar5 = __errno_location();
    error(0,*piVar5,"%s: %s",uVar4,uVar3);
  }
  close_stdout();
                    /* WARNING: Subroutine does not return */
  _exit(_exit_failure);
}


