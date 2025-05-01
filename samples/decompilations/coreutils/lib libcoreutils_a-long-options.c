
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

void parse_long_options(int argc,char **argv,char *command_name,char *package,char *version,
                       _func_void_int *usage_func,...)

{
  long lVar1;
  undefined4 uVar2;
  char in_AL;
  int iVar3;
  long in_FS_OFFSET;
  undefined8 in_XMM0_Qa;
  undefined8 in_XMM1_Qa;
  undefined8 in_XMM2_Qa;
  undefined8 in_XMM3_Qa;
  undefined8 in_XMM4_Qa;
  undefined8 in_XMM5_Qa;
  undefined8 in_XMM6_Qa;
  undefined8 in_XMM7_Qa;
  va_list authors;
  undefined1 local_d8 [48];
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_38;
  
  uVar2 = _opterr;
  if (in_AL != '\0') {
    local_a8 = in_XMM0_Qa;
    local_98 = in_XMM1_Qa;
    local_88 = in_XMM2_Qa;
    local_78 = in_XMM3_Qa;
    local_68 = in_XMM4_Qa;
    local_58 = in_XMM5_Qa;
    local_48 = in_XMM6_Qa;
    local_38 = in_XMM7_Qa;
  }
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  _opterr = 0;
  if ((int)_argc == 2) {
    iVar3 = getopt_long(_argc,argv,&_LC0,long_options,0);
    if (iVar3 != -1) {
      if (iVar3 == 0x68) {
        (*usage_func)(0);
      }
      else if (iVar3 == 0x76) {
        authors[0].overflow_arg_area = &stack0x00000008;
        authors[0].gp_offset = 0x30;
        authors[0].reg_save_area = local_d8;
        authors[0].fp_offset = 0x30;
        version_etc_va(_stdout,command_name,package,version,authors);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
    }
  }
  _opterr = uVar2;
  _optind = 0;
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

void parse_gnu_standard_options_only
               (int argc,char **argv,char *command_name,char *package,char *version,_Bool scan_all,
               _func_void_int *usage_func,...)

{
  long lVar1;
  undefined4 uVar2;
  char in_AL;
  int iVar3;
  undefined *puVar4;
  long in_FS_OFFSET;
  undefined8 in_XMM0_Qa;
  undefined8 in_XMM1_Qa;
  undefined8 in_XMM2_Qa;
  undefined8 in_XMM3_Qa;
  undefined8 in_XMM4_Qa;
  undefined8 in_XMM5_Qa;
  undefined8 in_XMM6_Qa;
  undefined8 in_XMM7_Qa;
  va_list authors;
  undefined1 local_d8 [48];
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_38;
  
  uVar2 = _opterr;
  if (in_AL != '\0') {
    local_a8 = in_XMM0_Qa;
    local_98 = in_XMM1_Qa;
    local_88 = in_XMM2_Qa;
    local_78 = in_XMM3_Qa;
    local_68 = in_XMM4_Qa;
    local_58 = in_XMM5_Qa;
    local_48 = in_XMM6_Qa;
    local_38 = in_XMM7_Qa;
  }
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  puVar4 = &_LC0;
  if (scan_all) {
    puVar4 = &_LC1;
  }
  _opterr = 1;
  iVar3 = getopt_long(_argc,argv,puVar4,long_options,0);
  if (iVar3 != -1) {
    if (iVar3 == 0x68) {
      (*usage_func)(0);
    }
    else {
      if (iVar3 == 0x76) {
        authors[0].overflow_arg_area = &stack0x00000010;
        authors[0].gp_offset = 0x30;
        authors[0].reg_save_area = local_d8;
        authors[0].fp_offset = 0x30;
        version_etc_va(_stdout,command_name,package,version,authors);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      (*usage_func)(_exit_failure);
    }
  }
  _opterr = uVar2;
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


