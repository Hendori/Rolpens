
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

void print_errno_message(int errnum)

{
  long lVar1;
  char *pcVar2;
  long in_FS_OFFSET;
  char errbuf [1024];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar2 = strerror_r(errnum,errbuf,0x400);
  if (pcVar2 == (char *)0x0) {
    pcVar2 = (char *)dcgettext("gnulib","Unknown system error",5);
  }
  __fprintf_chk(_stderr,2,&_LC2,pcVar2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

void error_tail(int status,int errnum,char *message,__va_list_tag *args)

{
  char *pcVar1;
  
  __vfprintf_chk(_stderr,2);
  error_message_count = error_message_count + 1;
  if (errnum != 0) {
    print_errno_message(errnum);
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
  if (status != 0) {
                    /* WARNING: Subroutine does not return */
    exit(status);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void flush_stdout(void)

{
  int iVar1;
  
  iVar1 = fcntl(1,3);
  if (-1 < iVar1) {
    fflush_unlocked(_stdout);
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

void verror(int status,int errnum,char *message,__va_list_tag *args)

{
  undefined8 uVar1;
  
  flush_stdout();
  if (error_print_progname == (_func_void *)0x0) {
    uVar1 = getprogname();
    __fprintf_chk(_stderr,2,&_LC3,uVar1);
  }
  else {
    (*error_print_progname)();
  }
  error_tail(status,errnum,message,args);
  return;
}



/* WARNING: Unknown calling convention */

void error(int status,int errnum,char *message,...)

{
  long lVar1;
  char in_AL;
  undefined8 in_RCX;
  undefined8 in_R8;
  undefined8 in_R9;
  long in_FS_OFFSET;
  undefined8 in_XMM0_Qa;
  undefined8 in_XMM1_Qa;
  undefined8 in_XMM2_Qa;
  undefined8 in_XMM3_Qa;
  undefined8 in_XMM4_Qa;
  undefined8 in_XMM5_Qa;
  undefined8 in_XMM6_Qa;
  undefined8 in_XMM7_Qa;
  va_list ap;
  undefined1 local_b8 [24];
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_28;
  undefined8 local_18;
  
  if (in_AL != '\0') {
    local_88 = in_XMM0_Qa;
    local_78 = in_XMM1_Qa;
    local_68 = in_XMM2_Qa;
    local_58 = in_XMM3_Qa;
    local_48 = in_XMM4_Qa;
    local_38 = in_XMM5_Qa;
    local_28 = in_XMM6_Qa;
    local_18 = in_XMM7_Qa;
  }
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  ap[0].overflow_arg_area = &stack0x00000008;
  ap[0].gp_offset = 0x18;
  ap[0].reg_save_area = local_b8;
  ap[0].fp_offset = 0x30;
  local_a0 = in_RCX;
  local_98 = in_R8;
  local_90 = in_R9;
  verror(status,errnum,message,ap);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

void verror_at_line(int status,int errnum,char *file_name,uint line_number,char *message,
                   __va_list_tag *args)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  
  pcVar4 = verror_at_line::lexical_block_6::old_file_name;
  uVar1 = verror_at_line::lexical_block_6::old_line_number;
  if (((error_one_per_line != 0) &&
      (pcVar4 = file_name, uVar1 = line_number,
      verror_at_line::lexical_block_6::old_line_number == line_number)) &&
     ((verror_at_line::lexical_block_6::old_file_name == file_name ||
      (((pcVar4 = file_name, uVar1 = line_number, file_name != (char *)0x0 &&
        (pcVar4 = file_name, uVar1 = line_number,
        verror_at_line::lexical_block_6::old_file_name != (char *)0x0)) &&
       (iVar2 = strcmp(verror_at_line::lexical_block_6::old_file_name,file_name), pcVar4 = file_name
       , uVar1 = line_number, iVar2 == 0)))))) {
    return;
  }
  verror_at_line::lexical_block_6::old_line_number = uVar1;
  verror_at_line::lexical_block_6::old_file_name = pcVar4;
  flush_stdout();
  if (error_print_progname == (_func_void *)0x0) {
    uVar3 = getprogname();
    __fprintf_chk(_stderr,2,&_LC6,uVar3);
  }
  else {
    (*error_print_progname)();
  }
  pcVar4 = " ";
  if (file_name != (char *)0x0) {
    pcVar4 = "%s:%u: ";
  }
  __fprintf_chk(_stderr,2,pcVar4,file_name,line_number);
  error_tail(status,errnum,message,args);
  return;
}



/* WARNING: Unknown calling convention */

void error_at_line(int status,int errnum,char *file_name,uint line_number,char *message,...)

{
  long lVar1;
  char in_AL;
  undefined8 in_R9;
  long in_FS_OFFSET;
  undefined8 in_XMM0_Qa;
  undefined8 in_XMM1_Qa;
  undefined8 in_XMM2_Qa;
  undefined8 in_XMM3_Qa;
  undefined8 in_XMM4_Qa;
  undefined8 in_XMM5_Qa;
  undefined8 in_XMM6_Qa;
  undefined8 in_XMM7_Qa;
  va_list ap;
  undefined1 local_b8 [40];
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_28;
  undefined8 local_18;
  
  if (in_AL != '\0') {
    local_88 = in_XMM0_Qa;
    local_78 = in_XMM1_Qa;
    local_68 = in_XMM2_Qa;
    local_58 = in_XMM3_Qa;
    local_48 = in_XMM4_Qa;
    local_38 = in_XMM5_Qa;
    local_28 = in_XMM6_Qa;
    local_18 = in_XMM7_Qa;
  }
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  ap[0].overflow_arg_area = &stack0x00000008;
  ap[0].gp_offset = 0x28;
  ap[0].reg_save_area = local_b8;
  ap[0].fp_offset = 0x30;
  local_90 = in_R9;
  verror_at_line(status,errnum,file_name,line_number,message,ap);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


