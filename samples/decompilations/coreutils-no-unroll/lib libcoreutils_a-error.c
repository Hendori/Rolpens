
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void print_errno_message(int param_1)

{
  char *pcVar1;
  long in_FS_OFFSET;
  char local_410 [1024];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar1 = strerror_r(param_1,local_410,0x400);
  if (pcVar1 == (char *)0x0) {
    pcVar1 = (char *)dcgettext("gnulib","Unknown system error",5);
  }
  __fprintf_chk(_stderr,2,&_LC2,pcVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
error_tail(int param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  char *pcVar1;
  
  __vfprintf_chk(_stderr,2);
  error_message_count = error_message_count + 1;
  if (param_2 != 0) {
    print_errno_message(param_2);
  }
  pcVar1 = _stderr->_IO_write_ptr;
  if (pcVar1 < _stderr->_IO_write_end) {
    _stderr->_IO_write_ptr = pcVar1 + 1;
    *pcVar1 = '\n';
  }
  else {
    __overflow(_stderr,10);
  }
  fflush_unlocked(_stderr);
  if (param_1 != 0) {
                    /* WARNING: Subroutine does not return */
    exit(param_1);
  }
  return param_5;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int flush_stdout(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = fcntl(1,3);
  if (-1 < iVar1) {
    iVar1 = fflush_unlocked(_stdout);
    return iVar1;
  }
  return in_ECX;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void verror(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  flush_stdout();
  if (error_print_progname == (code *)0x0) {
    uVar1 = getprogname();
    __fprintf_chk(_stderr,2,&_LC3,uVar1);
  }
  else {
    (*error_print_progname)();
  }
  error_tail(param_1,param_2,param_3,param_4);
  return;
}



void error(void)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  verror();
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
verror_at_line(undefined4 param_1,undefined4 param_2,char *param_3,int param_4,undefined8 param_5,
              undefined8 param_6)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 in_R10;
  
  pcVar4 = old_file_name_0;
  iVar1 = old_line_number_1;
  if (((error_one_per_line != 0) &&
      (pcVar4 = param_3, iVar1 = param_4, old_line_number_1 == param_4)) &&
     ((old_file_name_0 == param_3 ||
      (((pcVar4 = param_3, iVar1 = param_4, param_3 != (char *)0x0 &&
        (pcVar4 = param_3, iVar1 = param_4, old_file_name_0 != (char *)0x0)) &&
       (iVar2 = strcmp(old_file_name_0,param_3), pcVar4 = param_3, iVar1 = param_4, iVar2 == 0))))))
  {
    return in_R10;
  }
  old_line_number_1 = iVar1;
  old_file_name_0 = pcVar4;
  flush_stdout();
  if (error_print_progname == (code *)0x0) {
    uVar3 = getprogname();
    __fprintf_chk(_stderr,2,&_LC6,uVar3);
  }
  else {
    (*error_print_progname)();
  }
  pcVar4 = " ";
  if (param_3 != (char *)0x0) {
    pcVar4 = "%s:%u: ";
  }
  __fprintf_chk(_stderr,2,pcVar4,param_3,param_4);
  uVar3 = error_tail(param_1,param_2,param_5,param_6,in_R10);
  return uVar3;
}



void error_at_line(void)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  verror_at_line();
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


