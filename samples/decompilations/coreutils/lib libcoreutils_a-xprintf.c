
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

off64_t xvprintf(char *format,__va_list_tag *args)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int *piVar3;
  off64_t oVar4;
  
  uVar1 = _exit_failure;
  uVar2 = dcgettext("gnulib","cannot perform formatted output",5);
  piVar3 = __errno_location();
  oVar4 = error(uVar1,*piVar3,&_LC2,uVar2);
  return oVar4;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

off64_t xvfprintf(FILE *stream,char *format,__va_list_tag *args)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int *piVar3;
  off64_t oVar4;
  
  uVar1 = _exit_failure;
  uVar2 = dcgettext("gnulib","cannot perform formatted output",5);
  piVar3 = __errno_location();
  oVar4 = error(uVar1,*piVar3,&_LC2,uVar2);
  return oVar4;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

off64_t xprintf(char *format,...)

{
  long lVar1;
  char in_AL;
  int iVar2;
  long lVar3;
  undefined8 in_RCX;
  undefined8 in_RDX;
  undefined8 in_RSI;
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
  va_list args;
  undefined1 local_c8 [8];
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_28;
  
  if (in_AL != '\0') {
    local_98 = in_XMM0_Qa;
    local_88 = in_XMM1_Qa;
    local_78 = in_XMM2_Qa;
    local_68 = in_XMM3_Qa;
    local_58 = in_XMM4_Qa;
    local_48 = in_XMM5_Qa;
    local_38 = in_XMM6_Qa;
    local_28 = in_XMM7_Qa;
  }
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  args[0].overflow_arg_area = &stack0x00000008;
  args[0].reg_save_area = local_c8;
  args[0].gp_offset = 8;
  args[0].fp_offset = 0x30;
  local_c0 = in_RSI;
  local_b8 = in_RDX;
  local_b0 = in_RCX;
  local_a8 = in_R8;
  local_a0 = in_R9;
  lVar3 = vzprintf(format,args);
  if (lVar3 < 0) {
    iVar2 = ferror(_stdout);
    if (iVar2 == 0) {
      xvprintf(format,args);
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

off64_t xvprintf(char *format,__va_list_tag *args)

{
  int iVar1;
  long lVar2;
  
  lVar2 = vzprintf();
  if (lVar2 < 0) {
    iVar1 = ferror(_stdout);
    if (iVar1 == 0) {
      xvprintf(format,args);
    }
  }
  return lVar2;
}



/* WARNING: Unknown calling convention */

off64_t xfprintf(FILE *stream,char *format,...)

{
  long lVar1;
  char in_AL;
  int iVar2;
  long lVar3;
  undefined8 in_RCX;
  undefined8 in_RDX;
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
  va_list args;
  undefined1 local_d8 [16];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_38;
  
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
  args[0].overflow_arg_area = &stack0x00000008;
  args[0].reg_save_area = local_d8;
  args[0].gp_offset = 0x10;
  args[0].fp_offset = 0x30;
  local_c8 = in_RDX;
  local_c0 = in_RCX;
  local_b8 = in_R8;
  local_b0 = in_R9;
  lVar3 = vfzprintf(stream,format,args);
  if (lVar3 < 0) {
    iVar2 = ferror((FILE *)stream);
    if (iVar2 == 0) {
      xvfprintf(stream,format,args);
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention */

off64_t xvfprintf(FILE *stream,char *format,__va_list_tag *args)

{
  int iVar1;
  long lVar2;
  
  lVar2 = vfzprintf();
  if (lVar2 < 0) {
    iVar1 = ferror((FILE *)stream);
    if (iVar1 == 0) {
      xvfprintf(stream,format,args);
    }
  }
  return lVar2;
}


