
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void prog_fprintf(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 FILE *param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                 undefined8 param_13,undefined8 param_14)

{
  char *pcVar1;
  char in_AL;
  long in_FS_OFFSET;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined1 *local_e0;
  undefined1 *local_d8;
  long local_d0;
  undefined1 local_c8 [16];
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
    local_98 = param_1;
    local_88 = param_2;
    local_78 = param_3;
    local_68 = param_4;
    local_58 = param_5;
    local_48 = param_6;
    local_38 = param_7;
    local_28 = param_8;
  }
  local_d0 = *(long *)(in_FS_OFFSET + 0x28);
  local_b8 = param_11;
  local_b0 = param_12;
  local_a8 = param_13;
  local_a0 = param_14;
  fputs_unlocked(_program_name,param_9);
  fwrite_unlocked(&_LC0,1,2,param_9);
  local_e0 = &stack0x00000008;
  local_e8 = 0x10;
  local_d8 = local_c8;
  local_e4 = 0x30;
  __vfprintf_chk(param_9,2,param_10,&local_e8);
  pcVar1 = param_9->_IO_write_ptr;
  if (pcVar1 < param_9->_IO_write_end) {
    param_9->_IO_write_ptr = pcVar1 + 1;
    *pcVar1 = '\n';
  }
  else {
    __overflow(param_9,10);
  }
  if (local_d0 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


