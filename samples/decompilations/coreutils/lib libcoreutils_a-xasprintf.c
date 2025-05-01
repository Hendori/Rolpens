
/* WARNING: Unknown calling convention */

char * xasprintf(char *format,...)

{
  long lVar1;
  char in_AL;
  char *pcVar2;
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
  undefined1 local_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
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
  args[0].overflow_arg_area = &stack0x00000008;
  args[0].gp_offset = 8;
  args[0].reg_save_area = local_b8;
  args[0].fp_offset = 0x30;
  local_b0 = in_RSI;
  local_a8 = in_RDX;
  local_a0 = in_RCX;
  local_98 = in_R8;
  local_90 = in_R9;
  pcVar2 = (char *)xvasprintf(format,args);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pcVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


