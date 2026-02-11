
void test_fail_message_prefix
               (char *param_1,long param_2,undefined4 param_3,long param_4,long param_5,long param_6
               ,long param_7)

{
  if (param_1 == (char *)0x0) {
    param_1 = "ERROR";
  }
  test_printf_stderr(&_LC1,param_1);
  if (param_4 != 0) {
    test_printf_stderr("(%s) ",param_4);
  }
  if (param_7 != 0) {
    if ((param_5 == 0) || (param_6 == 0)) {
      test_printf_stderr(&_LC4,param_7);
    }
    else {
      test_printf_stderr("\'%s %s %s\' failed",param_5,param_7,param_6);
    }
  }
  if (param_2 != 0) {
    test_printf_stderr(" @ %s:%d",param_2,param_3);
  }
  test_printf_stderr(&_LC6);
  return;
}



void test_fail_message_constprop_5
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char in_AL;
  long in_FS_OFFSET;
  undefined8 in_stack_00000010;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined1 *local_d0;
  undefined1 *local_c8;
  long local_c0;
  undefined1 local_b8 [48];
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_28;
  undefined8 local_18;
  
  if (in_AL != '\0') {
    local_88 = param_1;
    local_78 = param_2;
    local_68 = param_3;
    local_58 = param_4;
    local_48 = param_5;
    local_38 = param_6;
    local_28 = param_7;
    local_18 = param_8;
  }
  local_c0 = *(long *)(in_FS_OFFSET + 0x28);
  local_d0 = &stack0x00000018;
  local_d8 = 0x30;
  local_c8 = local_b8;
  local_d4 = 0x30;
  test_fail_message_prefix(0);
  test_vprintf_stderr(in_stack_00000010,&local_d8);
  test_printf_stderr(&_LC6);
  test_flush_stderr();
  if (local_c0 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void test_fail_message_constprop_0
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char in_AL;
  long in_FS_OFFSET;
  undefined8 in_stack_00000010;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined1 *local_d0;
  undefined1 *local_c8;
  long local_c0;
  undefined1 local_b8 [48];
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_28;
  undefined8 local_18;
  
  if (in_AL != '\0') {
    local_88 = param_1;
    local_78 = param_2;
    local_68 = param_3;
    local_58 = param_4;
    local_48 = param_5;
    local_38 = param_6;
    local_28 = param_7;
    local_18 = param_8;
  }
  local_c0 = *(long *)(in_FS_OFFSET + 0x28);
  local_d0 = &stack0x00000018;
  local_d8 = 0x30;
  local_c8 = local_b8;
  local_d4 = 0x30;
  test_fail_message_prefix(0);
  test_vprintf_stderr(in_stack_00000010,&local_d8);
  test_printf_stderr(&_LC6);
  test_flush_stderr();
  if (local_c0 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void test_fail_message_constprop_1
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char in_AL;
  long in_FS_OFFSET;
  undefined8 in_stack_00000010;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined1 *local_d0;
  undefined1 *local_c8;
  long local_c0;
  undefined1 local_b8 [48];
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_28;
  undefined8 local_18;
  
  if (in_AL != '\0') {
    local_88 = param_1;
    local_78 = param_2;
    local_68 = param_3;
    local_58 = param_4;
    local_48 = param_5;
    local_38 = param_6;
    local_28 = param_7;
    local_18 = param_8;
  }
  local_c0 = *(long *)(in_FS_OFFSET + 0x28);
  local_d0 = &stack0x00000018;
  local_d8 = 0x30;
  local_c8 = local_b8;
  local_d4 = 0x30;
  test_fail_message_prefix(0);
  test_vprintf_stderr(in_stack_00000010,&local_d8);
  test_printf_stderr(&_LC6);
  test_flush_stderr();
  if (local_c0 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void test_fail_message_constprop_2
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char in_AL;
  long in_FS_OFFSET;
  undefined8 in_stack_00000010;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined1 *local_d0;
  undefined1 *local_c8;
  long local_c0;
  undefined1 local_b8 [48];
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_28;
  undefined8 local_18;
  
  if (in_AL != '\0') {
    local_88 = param_1;
    local_78 = param_2;
    local_68 = param_3;
    local_58 = param_4;
    local_48 = param_5;
    local_38 = param_6;
    local_28 = param_7;
    local_18 = param_8;
  }
  local_c0 = *(long *)(in_FS_OFFSET + 0x28);
  local_d0 = &stack0x00000018;
  local_d8 = 0x30;
  local_c8 = local_b8;
  local_d4 = 0x30;
  test_fail_message_prefix(0);
  test_vprintf_stderr(in_stack_00000010,&local_d8);
  test_printf_stderr(&_LC6);
  test_flush_stderr();
  if (local_c0 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void test_fail_message_constprop_3
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char in_AL;
  long in_FS_OFFSET;
  undefined8 in_stack_00000010;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined1 *local_d0;
  undefined1 *local_c8;
  long local_c0;
  undefined1 local_b8 [48];
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_28;
  undefined8 local_18;
  
  if (in_AL != '\0') {
    local_88 = param_1;
    local_78 = param_2;
    local_68 = param_3;
    local_58 = param_4;
    local_48 = param_5;
    local_38 = param_6;
    local_28 = param_7;
    local_18 = param_8;
  }
  local_c0 = *(long *)(in_FS_OFFSET + 0x28);
  local_d0 = &stack0x00000018;
  local_d8 = 0x30;
  local_c8 = local_b8;
  local_d4 = 0x30;
  test_fail_message_prefix(0);
  test_vprintf_stderr(in_stack_00000010,&local_d8);
  test_printf_stderr(&_LC6);
  test_flush_stderr();
  if (local_c0 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void test_fail_message_constprop_4
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char in_AL;
  long in_FS_OFFSET;
  undefined8 in_stack_00000010;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined1 *local_d0;
  undefined1 *local_c8;
  long local_c0;
  undefined1 local_b8 [48];
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_28;
  undefined8 local_18;
  
  if (in_AL != '\0') {
    local_88 = param_1;
    local_78 = param_2;
    local_68 = param_3;
    local_58 = param_4;
    local_48 = param_5;
    local_38 = param_6;
    local_28 = param_7;
    local_18 = param_8;
  }
  local_c0 = *(long *)(in_FS_OFFSET + 0x28);
  local_d0 = &stack0x00000018;
  local_d8 = 0x30;
  local_c8 = local_b8;
  local_d4 = 0x30;
  test_fail_message_prefix(0);
  test_vprintf_stderr(in_stack_00000010,&local_d8);
  test_printf_stderr(&_LC6);
  test_flush_stderr();
  if (local_c0 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void test_info_c90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  char in_AL;
  long in_FS_OFFSET;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined1 *local_d0;
  undefined1 *local_c8;
  long local_c0;
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
    local_88 = param_1;
    local_78 = param_2;
    local_68 = param_3;
    local_58 = param_4;
    local_48 = param_5;
    local_38 = param_6;
    local_28 = param_7;
    local_18 = param_8;
  }
  local_c0 = *(long *)(in_FS_OFFSET + 0x28);
  local_d0 = &stack0x00000008;
  local_c8 = local_b8;
  local_d8 = 8;
  local_d4 = 0x30;
  local_b0 = param_10;
  local_a8 = param_11;
  local_a0 = param_12;
  local_98 = param_13;
  local_90 = param_14;
  test_fail_message_prefix(&_LC13,0,0xffffffff,0,0,0,0);
  if (param_9 != 0) {
    test_vprintf_stderr(param_9,&local_d8,uStack_e0);
    test_printf_stderr(&_LC6);
  }
  test_flush_stderr();
  if (local_c0 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void test_info(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
              undefined8 param_9,undefined4 param_10,long param_11,undefined8 param_12,
              undefined8 param_13,undefined8 param_14)

{
  char in_AL;
  long in_FS_OFFSET;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined1 *local_d0;
  undefined1 *local_c8;
  long local_c0;
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
    local_88 = param_1;
    local_78 = param_2;
    local_68 = param_3;
    local_58 = param_4;
    local_48 = param_5;
    local_38 = param_6;
    local_28 = param_7;
    local_18 = param_8;
  }
  local_c0 = *(long *)(in_FS_OFFSET + 0x28);
  local_d0 = &stack0x00000008;
  local_c8 = local_b8;
  local_d8 = 0x18;
  local_d4 = 0x30;
  local_a0 = param_12;
  local_98 = param_13;
  local_90 = param_14;
  test_fail_message_prefix(&_LC13,param_9,param_10,0,0,0,0);
  if (param_11 != 0) {
    test_vprintf_stderr(param_11,&local_d8,uStack_e0);
    test_printf_stderr(&_LC6);
  }
  test_flush_stderr();
  if (local_c0 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void test_error_c90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   long param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                   undefined8 param_13,undefined8 param_14)

{
  char in_AL;
  long in_FS_OFFSET;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined1 *local_e0;
  undefined1 *local_d8;
  long local_d0;
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
  local_e0 = &stack0x00000008;
  local_d8 = local_c8;
  local_e8 = 8;
  local_e4 = 0x30;
  local_c0 = param_10;
  local_b8 = param_11;
  local_b0 = param_12;
  local_a8 = param_13;
  local_a0 = param_14;
  test_fail_message_prefix(0,0,0xffffffff,0,0,0,0);
  if (param_9 != 0) {
    test_vprintf_stderr(param_9,&local_e8,uStack_f0);
    test_printf_stderr(&_LC6);
  }
  test_flush_stderr();
  test_printf_stderr(&_LC6);
  if (local_d0 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void test_error(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               undefined8 param_9,undefined4 param_10,long param_11,undefined8 param_12,
               undefined8 param_13,undefined8 param_14)

{
  char in_AL;
  long in_FS_OFFSET;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined1 *local_e0;
  undefined1 *local_d8;
  long local_d0;
  undefined1 local_c8 [24];
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
  local_e0 = &stack0x00000008;
  local_d8 = local_c8;
  local_e8 = 0x18;
  local_e4 = 0x30;
  local_b0 = param_12;
  local_a8 = param_13;
  local_a0 = param_14;
  test_fail_message_prefix(0,param_9,param_10,0,0,0,0);
  if (param_11 != 0) {
    test_vprintf_stderr(param_11,&local_e8,uStack_f0);
    test_printf_stderr(&_LC6);
  }
  test_flush_stderr();
  test_printf_stderr(&_LC6);
  if (local_d0 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void test_perror(undefined8 param_1)

{
  int *piVar1;
  char *pcVar2;
  
  piVar1 = __errno_location();
  pcVar2 = strerror(*piVar1);
  test_error("test/testutil/tests.c",0x8f,"%s: %s",param_1,pcVar2);
  return;
}



void test_note(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
              long param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
              undefined8 param_13,undefined8 param_14)

{
  char in_AL;
  long in_FS_OFFSET;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined1 *local_d0;
  undefined1 *local_c8;
  long local_c0;
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
    local_88 = param_1;
    local_78 = param_2;
    local_68 = param_3;
    local_58 = param_4;
    local_48 = param_5;
    local_38 = param_6;
    local_28 = param_7;
    local_18 = param_8;
  }
  local_c0 = *(long *)(in_FS_OFFSET + 0x28);
  local_b0 = param_10;
  local_a8 = param_11;
  local_a0 = param_12;
  local_98 = param_13;
  local_90 = param_14;
  test_flush_stdout();
  if (param_9 != 0) {
    local_d0 = &stack0x00000008;
    local_d8 = 8;
    local_c8 = local_b8;
    local_d4 = 0x30;
    test_vprintf_stderr(param_9,&local_d8);
    test_printf_stderr(&_LC6);
  }
  test_flush_stderr();
  if (local_c0 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8
test_skip(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
         undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
         undefined8 param_9,undefined4 param_10,long param_11,undefined8 param_12,
         undefined8 param_13,undefined8 param_14)

{
  char in_AL;
  long in_FS_OFFSET;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined1 *local_d0;
  undefined1 *local_c8;
  long local_c0;
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
    local_88 = param_1;
    local_78 = param_2;
    local_68 = param_3;
    local_58 = param_4;
    local_48 = param_5;
    local_38 = param_6;
    local_28 = param_7;
    local_18 = param_8;
  }
  local_c0 = *(long *)(in_FS_OFFSET + 0x28);
  local_d0 = &stack0x00000008;
  local_c8 = local_b8;
  local_d8 = 0x18;
  local_d4 = 0x30;
  local_a0 = param_12;
  local_98 = param_13;
  local_90 = param_14;
  test_fail_message_prefix(&_LC16,param_9,param_10,0,0,0,0);
  if (param_11 != 0) {
    test_vprintf_stderr(param_11,&local_d8,uStack_e0);
    test_printf_stderr(&_LC6);
  }
  test_flush_stderr();
  if (local_c0 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0x7b;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8
test_skip_c90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             long param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14)

{
  char in_AL;
  long in_FS_OFFSET;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined1 *local_e0;
  undefined1 *local_d8;
  long local_d0;
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
  local_e0 = &stack0x00000008;
  local_d8 = local_c8;
  local_e8 = 8;
  local_e4 = 0x30;
  local_c0 = param_10;
  local_b8 = param_11;
  local_b0 = param_12;
  local_a8 = param_13;
  local_a0 = param_14;
  test_fail_message_prefix(&_LC16,0,0xffffffff,0,0,0,0);
  if (param_9 != 0) {
    test_vprintf_stderr(param_9,&local_e8,uStack_f0);
    test_printf_stderr(&_LC6);
  }
  test_flush_stderr();
  test_printf_stderr(&_LC6);
  if (local_d0 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0x7b;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void test_openssl_errors(void)

{
  ERR_print_errors_cb((cb *)&openssl_error_cb,(void *)0x0);
  ERR_clear_error();
  return;
}



undefined8
test_int_eq(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
           undefined8 param_5,undefined8 param_6)

{
  if ((int)param_5 != (int)param_6) {
    test_fail_message_constprop_5
              (0,param_1,param_2,&_LC17,param_3,param_4,&_LC7,"[%d] compared to [%d]",param_5,
               param_6);
    return 0;
  }
  return 1;
}



undefined8
test_int_ne(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
           undefined8 param_5,int param_6)

{
  if ((int)param_5 != param_6) {
    return 1;
  }
  test_fail_message_constprop_4
            (0,param_1,param_2,&_LC17,param_3,param_4,&_LC12,"[%d] compared to [%d]",param_5,param_5
            );
  return 0;
}



undefined8
test_int_lt(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
           undefined8 param_5,undefined8 param_6)

{
  if ((int)param_5 < (int)param_6) {
    return 1;
  }
  test_fail_message_constprop_1
            (0,param_1,param_2,&_LC17,param_3,param_4,&_LC9,"[%d] compared to [%d]",param_5,param_6)
  ;
  return 0;
}



undefined8
test_int_le(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
           undefined8 param_5,undefined8 param_6)

{
  if ((int)param_5 <= (int)param_6) {
    return 1;
  }
  test_fail_message_constprop_0
            (0,param_1,param_2,&_LC17,param_3,param_4,&_LC8,"[%d] compared to [%d]",param_5,param_6)
  ;
  return 0;
}



undefined8
test_int_gt(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
           undefined8 param_5,undefined8 param_6)

{
  if ((int)param_6 < (int)param_5) {
    return 1;
  }
  test_fail_message_constprop_3
            (0,param_1,param_2,&_LC17,param_3,param_4,&_LC11,"[%d] compared to [%d]",param_5,param_6
            );
  return 0;
}



undefined8
test_int_ge(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
           undefined8 param_5,undefined8 param_6)

{
  if ((int)param_6 <= (int)param_5) {
    return 1;
  }
  test_fail_message_constprop_2
            (0,param_1,param_2,&_LC17,param_3,param_4,&_LC10,"[%d] compared to [%d]",param_5,param_6
            );
  return 0;
}



undefined8
test_uint_eq(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6)

{
  if ((int)param_5 != (int)param_6) {
    test_fail_message_constprop_5
              (0,param_1,param_2,"unsigned int",param_3,param_4,&_LC7,"[%u] compared to [%u]",
               param_5,param_6);
    return 0;
  }
  return 1;
}



undefined8
test_uint_ne(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,int param_6)

{
  if ((int)param_5 != param_6) {
    return 1;
  }
  test_fail_message_constprop_4
            (0,param_1,param_2,"unsigned int",param_3,param_4,&_LC12,"[%u] compared to [%u]",param_5
             ,param_5);
  return 0;
}



undefined8
test_uint_lt(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6)

{
  if ((uint)param_5 < (uint)param_6) {
    return 1;
  }
  test_fail_message_constprop_1
            (0,param_1,param_2,"unsigned int",param_3,param_4,&_LC9,"[%u] compared to [%u]",param_5,
             param_6);
  return 0;
}



undefined8
test_uint_le(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6)

{
  if ((uint)param_5 <= (uint)param_6) {
    return 1;
  }
  test_fail_message_constprop_0
            (0,param_1,param_2,"unsigned int",param_3,param_4,&_LC8,"[%u] compared to [%u]",param_5,
             param_6);
  return 0;
}



undefined8
test_uint_gt(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6)

{
  if ((uint)param_6 < (uint)param_5) {
    return 1;
  }
  test_fail_message_constprop_3
            (0,param_1,param_2,"unsigned int",param_3,param_4,&_LC11,"[%u] compared to [%u]",param_5
             ,param_6);
  return 0;
}



undefined8
test_uint_ge(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6)

{
  if ((uint)param_6 <= (uint)param_5) {
    return 1;
  }
  test_fail_message_constprop_2
            (0,param_1,param_2,"unsigned int",param_3,param_4,&_LC10,"[%u] compared to [%u]",param_5
             ,param_6);
  return 0;
}



undefined8
test_char_eq(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
            char param_5,char param_6)

{
  if (param_5 != param_6) {
    test_fail_message_constprop_5
              (0,param_1,param_2,&_LC21,param_3,param_4,&_LC7,"[%c] compared to [%c]",(int)param_5,
               (int)param_6);
    return 0;
  }
  return 1;
}



undefined8
test_char_ne(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
            char param_5,char param_6)

{
  if (param_5 != param_6) {
    return 1;
  }
  test_fail_message_constprop_4
            (0,param_1,param_2,&_LC21,param_3,param_4,&_LC12,"[%c] compared to [%c]",(int)param_5,
             (int)param_5);
  return 0;
}



undefined8
test_char_lt(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
            char param_5,char param_6)

{
  if (param_5 < param_6) {
    return 1;
  }
  test_fail_message_constprop_1
            (0,param_1,param_2,&_LC21,param_3,param_4,&_LC9,"[%c] compared to [%c]",(int)param_5,
             (int)param_6);
  return 0;
}



undefined8
test_char_le(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
            char param_5,char param_6)

{
  if (param_5 <= param_6) {
    return 1;
  }
  test_fail_message_constprop_0
            (0,param_1,param_2,&_LC21,param_3,param_4,&_LC8,"[%c] compared to [%c]",(int)param_5,
             (int)param_6);
  return 0;
}



undefined8
test_char_gt(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
            char param_5,char param_6)

{
  if (param_6 < param_5) {
    return 1;
  }
  test_fail_message_constprop_3
            (0,param_1,param_2,&_LC21,param_3,param_4,&_LC11,"[%c] compared to [%c]",(int)param_5,
             (int)param_6);
  return 0;
}



undefined8
test_char_ge(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
            char param_5,char param_6)

{
  if (param_6 <= param_5) {
    return 1;
  }
  test_fail_message_constprop_2
            (0,param_1,param_2,&_LC21,param_3,param_4,&_LC10,"[%c] compared to [%c]",(int)param_5,
             (int)param_6);
  return 0;
}



undefined8
test_uchar_eq(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
             char param_5,char param_6)

{
  if (param_5 != param_6) {
    test_fail_message_constprop_5
              (0,param_1,param_2,"unsigned char",param_3,param_4,&_LC7,"[%u] compared to [%u]",
               param_5,param_6);
    return 0;
  }
  return 1;
}



undefined8
test_uchar_ne(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
             char param_5,char param_6)

{
  if (param_5 != param_6) {
    return 1;
  }
  test_fail_message_constprop_4
            (0,param_1,param_2,"unsigned char",param_3,param_4,&_LC12,"[%u] compared to [%u]",
             param_5,param_5);
  return 0;
}



undefined8
test_uchar_lt(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
             byte param_5,byte param_6)

{
  if (param_5 < param_6) {
    return 1;
  }
  test_fail_message_constprop_1
            (0,param_1,param_2,"unsigned char",param_3,param_4,&_LC9,"[%u] compared to [%u]",param_5
             ,param_6);
  return 0;
}



undefined8
test_uchar_le(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
             byte param_5,byte param_6)

{
  if (param_5 <= param_6) {
    return 1;
  }
  test_fail_message_constprop_0
            (0,param_1,param_2,"unsigned char",param_3,param_4,&_LC8,"[%u] compared to [%u]",param_5
             ,param_6);
  return 0;
}



undefined8
test_uchar_gt(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
             byte param_5,byte param_6)

{
  if (param_6 < param_5) {
    return 1;
  }
  test_fail_message_constprop_3
            (0,param_1,param_2,"unsigned char",param_3,param_4,&_LC11,"[%u] compared to [%u]",
             param_5,param_6);
  return 0;
}



undefined8
test_uchar_ge(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
             byte param_5,byte param_6)

{
  if (param_6 <= param_5) {
    return 1;
  }
  test_fail_message_constprop_2
            (0,param_1,param_2,"unsigned char",param_3,param_4,&_LC10,"[%u] compared to [%u]",
             param_5,param_6);
  return 0;
}



undefined8
test_long_eq(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
            long param_5,long param_6)

{
  if (param_5 != param_6) {
    test_fail_message_constprop_5
              (0,param_1,param_2,&_LC24,param_3,param_4,&_LC7,"[%ld] compared to [%ld]",param_5,
               param_6);
    return 0;
  }
  return 1;
}



undefined8
test_long_ne(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
            long param_5,long param_6)

{
  if (param_5 != param_6) {
    return 1;
  }
  test_fail_message_constprop_4
            (0,param_1,param_2,&_LC24,param_3,param_4,&_LC12,"[%ld] compared to [%ld]",param_5,
             param_5);
  return 0;
}



undefined8
test_long_lt(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
            long param_5,long param_6)

{
  if (param_5 < param_6) {
    return 1;
  }
  test_fail_message_constprop_1
            (0,param_1,param_2,&_LC24,param_3,param_4,&_LC9,"[%ld] compared to [%ld]",param_5,
             param_6);
  return 0;
}



undefined8
test_long_le(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
            long param_5,long param_6)

{
  if (param_5 <= param_6) {
    return 1;
  }
  test_fail_message_constprop_0
            (0,param_1,param_2,&_LC24,param_3,param_4,&_LC8,"[%ld] compared to [%ld]",param_5,
             param_6);
  return 0;
}



undefined8
test_long_gt(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
            long param_5,long param_6)

{
  if (param_6 < param_5) {
    return 1;
  }
  test_fail_message_constprop_3
            (0,param_1,param_2,&_LC24,param_3,param_4,&_LC11,"[%ld] compared to [%ld]",param_5,
             param_6);
  return 0;
}



undefined8
test_long_ge(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
            long param_5,long param_6)

{
  if (param_6 <= param_5) {
    return 1;
  }
  test_fail_message_constprop_2
            (0,param_1,param_2,&_LC24,param_3,param_4,&_LC10,"[%ld] compared to [%ld]",param_5,
             param_6);
  return 0;
}



undefined8
test_ulong_eq(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
             long param_5,long param_6)

{
  if (param_5 != param_6) {
    test_fail_message_constprop_5
              (0,param_1,param_2,"unsigned long",param_3,param_4,&_LC7,"[%lu] compared to [%lu]",
               param_5,param_6);
    return 0;
  }
  return 1;
}



undefined8
test_ulong_ne(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
             long param_5,long param_6)

{
  if (param_5 != param_6) {
    return 1;
  }
  test_fail_message_constprop_4
            (0,param_1,param_2,"unsigned long",param_3,param_4,&_LC12,"[%lu] compared to [%lu]",
             param_5,param_5);
  return 0;
}



undefined8
test_ulong_lt(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
             ulong param_5,ulong param_6)

{
  if (param_5 < param_6) {
    return 1;
  }
  test_fail_message_constprop_1
            (0,param_1,param_2,"unsigned long",param_3,param_4,&_LC9,"[%lu] compared to [%lu]",
             param_5,param_6);
  return 0;
}



undefined8
test_ulong_le(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
             ulong param_5,ulong param_6)

{
  if (param_5 <= param_6) {
    return 1;
  }
  test_fail_message_constprop_0
            (0,param_1,param_2,"unsigned long",param_3,param_4,&_LC8,"[%lu] compared to [%lu]",
             param_5,param_6);
  return 0;
}



undefined8
test_ulong_gt(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
             ulong param_5,ulong param_6)

{
  if (param_6 < param_5) {
    return 1;
  }
  test_fail_message_constprop_3
            (0,param_1,param_2,"unsigned long",param_3,param_4,&_LC11,"[%lu] compared to [%lu]",
             param_5,param_6);
  return 0;
}



undefined8
test_ulong_ge(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
             ulong param_5,ulong param_6)

{
  if (param_6 <= param_5) {
    return 1;
  }
  test_fail_message_constprop_2
            (0,param_1,param_2,"unsigned long",param_3,param_4,&_LC10,"[%lu] compared to [%lu]",
             param_5,param_6);
  return 0;
}



undefined8
test_int64_t_eq(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
               long param_5,long param_6)

{
  if (param_5 != param_6) {
    test_fail_message_constprop_5
              (0,param_1,param_2,"int64_t",param_3,param_4,&_LC7,"[%lld] compared to [%lld]",param_5
               ,param_6);
    return 0;
  }
  return 1;
}



undefined8
test_int64_t_ne(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
               long param_5,long param_6)

{
  if (param_5 != param_6) {
    return 1;
  }
  test_fail_message_constprop_4
            (0,param_1,param_2,"int64_t",param_3,param_4,&_LC12,"[%lld] compared to [%lld]",param_5,
             param_5);
  return 0;
}



undefined8
test_int64_t_lt(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
               long param_5,long param_6)

{
  if (param_5 < param_6) {
    return 1;
  }
  test_fail_message_constprop_1
            (0,param_1,param_2,"int64_t",param_3,param_4,&_LC9,"[%lld] compared to [%lld]",param_5,
             param_6);
  return 0;
}



undefined8
test_int64_t_le(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
               long param_5,long param_6)

{
  if (param_5 <= param_6) {
    return 1;
  }
  test_fail_message_constprop_0
            (0,param_1,param_2,"int64_t",param_3,param_4,&_LC8,"[%lld] compared to [%lld]",param_5,
             param_6);
  return 0;
}



undefined8
test_int64_t_gt(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
               long param_5,long param_6)

{
  if (param_6 < param_5) {
    return 1;
  }
  test_fail_message_constprop_3
            (0,param_1,param_2,"int64_t",param_3,param_4,&_LC11,"[%lld] compared to [%lld]",param_5,
             param_6);
  return 0;
}



undefined8
test_int64_t_ge(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
               long param_5,long param_6)

{
  if (param_6 <= param_5) {
    return 1;
  }
  test_fail_message_constprop_2
            (0,param_1,param_2,"int64_t",param_3,param_4,&_LC10,"[%lld] compared to [%lld]",param_5,
             param_6);
  return 0;
}



undefined8
test_uint64_t_eq(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                long param_5,long param_6)

{
  if (param_5 != param_6) {
    test_fail_message_constprop_5
              (0,param_1,param_2,"uint64_t",param_3,param_4,&_LC7,"[%llu] compared to [%llu]",
               param_5,param_6);
    return 0;
  }
  return 1;
}



undefined8
test_uint64_t_ne(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                long param_5,long param_6)

{
  if (param_5 != param_6) {
    return 1;
  }
  test_fail_message_constprop_4
            (0,param_1,param_2,"uint64_t",param_3,param_4,&_LC12,"[%llu] compared to [%llu]",param_5
             ,param_5);
  return 0;
}



undefined8
test_uint64_t_lt(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                ulong param_5,ulong param_6)

{
  if (param_5 < param_6) {
    return 1;
  }
  test_fail_message_constprop_1
            (0,param_1,param_2,"uint64_t",param_3,param_4,&_LC9,"[%llu] compared to [%llu]",param_5,
             param_6);
  return 0;
}



undefined8
test_uint64_t_le(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                ulong param_5,ulong param_6)

{
  if (param_5 <= param_6) {
    return 1;
  }
  test_fail_message_constprop_0
            (0,param_1,param_2,"uint64_t",param_3,param_4,&_LC8,"[%llu] compared to [%llu]",param_5,
             param_6);
  return 0;
}



undefined8
test_uint64_t_gt(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                ulong param_5,ulong param_6)

{
  if (param_6 < param_5) {
    return 1;
  }
  test_fail_message_constprop_3
            (0,param_1,param_2,"uint64_t",param_3,param_4,&_LC11,"[%llu] compared to [%llu]",param_5
             ,param_6);
  return 0;
}



undefined8
test_uint64_t_ge(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                ulong param_5,ulong param_6)

{
  if (param_6 <= param_5) {
    return 1;
  }
  test_fail_message_constprop_2
            (0,param_1,param_2,"uint64_t",param_3,param_4,&_LC10,"[%llu] compared to [%llu]",param_5
             ,param_6);
  return 0;
}



undefined8
test_size_t_eq(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
              long param_5,long param_6)

{
  if (param_5 != param_6) {
    test_fail_message_constprop_5
              (0,param_1,param_2,"size_t",param_3,param_4,&_LC7,"[%zu] compared to [%zu]",param_5,
               param_6);
    return 0;
  }
  return 1;
}



undefined8
test_size_t_ne(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
              long param_5,long param_6)

{
  if (param_5 != param_6) {
    return 1;
  }
  test_fail_message_constprop_4
            (0,param_1,param_2,"size_t",param_3,param_4,&_LC12,"[%zu] compared to [%zu]",param_5,
             param_5);
  return 0;
}



undefined8
test_size_t_lt(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
              ulong param_5,ulong param_6)

{
  if (param_5 < param_6) {
    return 1;
  }
  test_fail_message_constprop_1
            (0,param_1,param_2,"size_t",param_3,param_4,&_LC9,"[%zu] compared to [%zu]",param_5,
             param_6);
  return 0;
}



undefined8
test_size_t_le(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
              ulong param_5,ulong param_6)

{
  if (param_5 <= param_6) {
    return 1;
  }
  test_fail_message_constprop_0
            (0,param_1,param_2,"size_t",param_3,param_4,&_LC8,"[%zu] compared to [%zu]",param_5,
             param_6);
  return 0;
}



undefined8
test_size_t_gt(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
              ulong param_5,ulong param_6)

{
  if (param_6 < param_5) {
    return 1;
  }
  test_fail_message_constprop_3
            (0,param_1,param_2,"size_t",param_3,param_4,&_LC11,"[%zu] compared to [%zu]",param_5,
             param_6);
  return 0;
}



undefined8
test_size_t_ge(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
              ulong param_5,ulong param_6)

{
  if (param_6 <= param_5) {
    return 1;
  }
  test_fail_message_constprop_2
            (0,param_1,param_2,"size_t",param_3,param_4,&_LC10,"[%zu] compared to [%zu]",param_5,
             param_6);
  return 0;
}



undefined8
test_double_eq(double param_1,double param_2,undefined8 param_3,undefined4 param_4,
              undefined8 param_5,undefined8 param_6)

{
  if (param_1 != param_2) {
    test_fail_message_constprop_5
              (0,param_3,param_4,"double",param_5,param_6,&_LC7,"[%g] compared to [%g]");
    return 0;
  }
  return 1;
}



undefined8
test_double_ne(double param_1,double param_2,undefined8 param_3,undefined4 param_4,
              undefined8 param_5,undefined8 param_6)

{
  if (param_1 != param_2) {
    return 1;
  }
  test_fail_message_constprop_4
            (0,param_3,param_4,"double",param_5,param_6,&_LC12,"[%g] compared to [%g]");
  return 0;
}



undefined8
test_double_lt(double param_1,double param_2,undefined8 param_3,undefined4 param_4,
              undefined8 param_5,undefined8 param_6)

{
  if (param_1 < param_2) {
    return 1;
  }
  test_fail_message_constprop_1
            (0,param_3,param_4,"double",param_5,param_6,&_LC9,"[%g] compared to [%g]");
  return 0;
}



undefined8
test_double_le(double param_1,double param_2,undefined8 param_3,undefined4 param_4,
              undefined8 param_5,undefined8 param_6)

{
  if (param_1 <= param_2) {
    return 1;
  }
  test_fail_message_constprop_0
            (0,param_3,param_4,"double",param_5,param_6,&_LC8,"[%g] compared to [%g]");
  return 0;
}



undefined8
test_double_gt(double param_1,double param_2,undefined8 param_3,undefined4 param_4,
              undefined8 param_5,undefined8 param_6)

{
  if (param_2 < param_1) {
    return 1;
  }
  test_fail_message_constprop_3
            (0,param_3,param_4,"double",param_5,param_6,&_LC11,"[%g] compared to [%g]");
  return 0;
}



undefined8
test_double_ge(double param_1,double param_2,undefined8 param_3,undefined4 param_4,
              undefined8 param_5,undefined8 param_6)

{
  if (param_2 <= param_1) {
    return 1;
  }
  test_fail_message_constprop_2
            (0,param_3,param_4,"double",param_5,param_6,&_LC10,"[%g] compared to [%g]");
  return 0;
}



undefined8
test_ptr_eq(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,long param_5
           ,long param_6)

{
  if (param_5 != param_6) {
    test_fail_message_constprop_5
              (0,param_1,param_2,"void *",param_3,param_4,&_LC7,"[%p] compared to [%p]",param_5,
               param_6);
    return 0;
  }
  return 1;
}



undefined8
test_ptr_ne(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,long param_5
           ,long param_6)

{
  if (param_5 != param_6) {
    return 1;
  }
  test_fail_message_constprop_4
            (0,param_1,param_2,"void *",param_3,param_4,&_LC12,"[%p] compared to [%p]",param_5,
             param_5);
  return 0;
}



undefined8 test_ptr_null(undefined8 param_1,undefined4 param_2,undefined8 param_3,long param_4)

{
  if (param_4 != 0) {
    test_fail_message_constprop_5(0,param_1,param_2,&_LC39,param_3,&_LC38,&_LC7,&_LC40,param_4);
    return 0;
  }
  return 1;
}



undefined8 test_ptr(undefined8 param_1,undefined4 param_2,undefined8 param_3,long param_4)

{
  if (param_4 != 0) {
    return 1;
  }
  test_fail_message_constprop_4(0,param_1,param_2,&_LC39,param_3,&_LC38,&_LC12,&_LC40,0);
  return 0;
}



undefined8 test_true(undefined8 param_1,undefined4 param_2,undefined8 param_3,int param_4)

{
  if (param_4 != 0) {
    return 1;
  }
  test_fail_message_constprop_5(0,param_1,param_2,&_LC42,param_3,&_LC41,&_LC7,"false");
  return 0;
}



undefined8 test_false(undefined8 param_1,undefined4 param_2,undefined8 param_3,int param_4)

{
  if (param_4 == 0) {
    return 1;
  }
  test_fail_message_constprop_5(0,param_1,param_2,&_LC42,param_3,"false",&_LC7,&_LC41);
  return 0;
}



undefined8
test_str_eq(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
           char *param_5,char *param_6)

{
  int iVar1;
  size_t sVar2;
  size_t sVar3;
  
  if (param_6 == (char *)0x0 && param_5 == (char *)0x0) {
    return 1;
  }
  if ((param_5 == (char *)0x0) || (param_6 == (char *)0x0)) {
    sVar2 = 0;
    if (param_6 != (char *)0x0) {
      sVar2 = strlen(param_6);
    }
    sVar3 = 0;
    if (param_5 == (char *)0x0) goto LAB_00102411;
  }
  else {
    iVar1 = strcmp(param_5,param_6);
    if (iVar1 == 0) {
      return 1;
    }
    sVar2 = strlen(param_6);
  }
  sVar3 = strlen(param_5);
LAB_00102411:
  test_fail_string_message
            (0,param_1,param_2,"string",param_3,param_4,&_LC7,param_5,sVar3,param_6,sVar2);
  return 0;
}



undefined8
test_str_ne(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
           char *param_5,char *param_6)

{
  int iVar1;
  size_t sVar2;
  size_t sVar3;
  undefined8 uVar4;
  
  uVar4 = 1;
  if ((param_5 == (char *)0x0) == (param_6 == (char *)0x0)) {
    if (param_5 == (char *)0x0) {
      if (param_6 == (char *)0x0) {
        sVar2 = 0;
        sVar3 = 0;
      }
      else {
        sVar2 = strlen(param_6);
        sVar3 = 0;
      }
    }
    else {
      iVar1 = strcmp(param_5,param_6);
      if (iVar1 != 0) {
        return 1;
      }
      sVar2 = strlen(param_6);
      sVar3 = strlen(param_5);
    }
    test_fail_string_message
              (0,param_1,param_2,"string",param_3,param_4,&_LC12,param_5,sVar3,param_6,sVar2);
    uVar4 = 0;
  }
  return uVar4;
}



undefined8
test_strn_eq(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
            char *param_5,size_t param_6,char *param_7,size_t param_8)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_7 == (char *)0x0 && param_5 == (char *)0x0) {
    return 1;
  }
  if ((param_5 == (char *)0x0) || (param_6 != param_8)) {
    uVar2 = 0;
    if (param_7 != (char *)0x0) {
      uVar2 = OPENSSL_strnlen(param_7,param_8);
    }
    if (param_5 == (char *)0x0) {
      uVar3 = 0;
      goto LAB_001025f6;
    }
  }
  else if (param_7 == (char *)0x0) {
    uVar2 = 0;
  }
  else {
    iVar1 = strncmp(param_5,param_7,param_6);
    if (iVar1 == 0) {
      return 1;
    }
    uVar2 = OPENSSL_strnlen(param_7,param_8);
  }
  uVar3 = OPENSSL_strnlen(param_5,param_6);
LAB_001025f6:
  test_fail_string_message
            (0,param_1,param_2,"string",param_3,param_4,&_LC7,param_5,uVar3,param_7,uVar2);
  return 0;
}



undefined8
test_strn_ne(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
            char *param_5,size_t param_6,char *param_7,size_t param_8)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((param_5 == (char *)0x0) != (param_7 == (char *)0x0)) {
    return 1;
  }
  if ((param_6 != param_8) || (param_5 == (char *)0x0)) {
    uVar2 = 0;
    if (param_7 != (char *)0x0) {
      uVar2 = OPENSSL_strnlen(param_7,param_8);
    }
    uVar3 = 0;
    if (param_5 == (char *)0x0) goto LAB_00102723;
  }
  else {
    iVar1 = strncmp(param_5,param_7,param_6);
    if (iVar1 != 0) {
      return 1;
    }
    uVar2 = OPENSSL_strnlen(param_7,param_8);
  }
  uVar3 = OPENSSL_strnlen(param_5,param_6);
LAB_00102723:
  test_fail_string_message
            (0,param_1,param_2,"string",param_3,param_4,&_LC12,param_5,uVar3,param_7,uVar2);
  return 0;
}



undefined8
test_mem_eq(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
           void *param_5,size_t param_6,void *param_7,size_t param_8)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 1;
  if (param_7 != (void *)0x0 || param_5 != (void *)0x0) {
    if (((param_7 != (void *)0x0 && param_6 == param_8) && (param_5 != (void *)0x0)) &&
       (iVar1 = memcmp(param_5,param_7,param_6), iVar1 == 0)) {
      return 1;
    }
    uVar2 = 0;
    test_fail_memory_message
              (0,param_1,param_2,"memory",param_3,param_4,&_LC7,param_5,param_6,param_7,param_8);
  }
  return uVar2;
}



undefined8
test_mem_ne(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
           void *param_5,size_t param_6,void *param_7,size_t param_8)

{
  int iVar1;
  
  if ((((param_5 == (void *)0x0) == (param_7 == (void *)0x0)) && (param_6 == param_8)) &&
     ((param_5 == (void *)0x0 || (iVar1 = memcmp(param_5,param_7,param_6), iVar1 == 0)))) {
    test_fail_memory_message
              (0,param_1,param_2,"memory",param_3,param_4,&_LC12,param_5,param_6,param_7,param_8);
    return 0;
  }
  return 1;
}



bool test_BN_eq(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
               BIGNUM *param_5,BIGNUM *param_6)

{
  int iVar1;
  
  iVar1 = BN_cmp(param_5,param_6);
  if (iVar1 != 0) {
    test_fail_bignum_message(0,param_1,param_2,"BIGNUM",param_3,param_4,&_LC7,param_5,param_6);
  }
  return iVar1 == 0;
}



undefined1  [16]
test_BN_eq_zero(undefined8 param_1,undefined4 param_2,undefined8 param_3,ulong param_4)

{
  undefined1 auVar1 [16];
  int iVar2;
  undefined8 extraout_RDX;
  undefined1 auVar3 [16];
  
  if (param_4 != 0) {
    iVar2 = BN_is_zero(param_4);
    if (iVar2 != 0) {
      auVar3._8_8_ = extraout_RDX;
      auVar3._0_8_ = 1;
      return auVar3;
    }
  }
  test_fail_bignum_mono_message(0,param_1,param_2,"BIGNUM",param_3,&_LC47,&_LC7);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_4;
  return auVar1 << 0x40;
}



bool test_BN_ne(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
               BIGNUM *param_5,BIGNUM *param_6)

{
  int iVar1;
  
  iVar1 = BN_cmp(param_5,param_6);
  if (iVar1 == 0) {
    test_fail_bignum_message(0,param_1,param_2,"BIGNUM",param_3,param_4,&_LC12,param_5,param_6);
  }
  return iVar1 != 0;
}



undefined1  [16]
test_BN_ne_zero(undefined8 param_1,undefined4 param_2,undefined8 param_3,ulong param_4)

{
  undefined1 auVar1 [16];
  int iVar2;
  undefined8 extraout_RDX;
  undefined1 auVar3 [16];
  
  if (param_4 != 0) {
    iVar2 = BN_is_zero(param_4);
    if (iVar2 == 0) {
      auVar3._8_8_ = extraout_RDX;
      auVar3._0_8_ = 1;
      return auVar3;
    }
  }
  test_fail_bignum_mono_message(0,param_1,param_2,"BIGNUM",param_3,&_LC47,&_LC12);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_4;
  return auVar1 << 0x40;
}



bool test_BN_gt(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
               BIGNUM *param_5,BIGNUM *param_6)

{
  int iVar1;
  
  iVar1 = BN_cmp(param_5,param_6);
  if (0 >= iVar1) {
    test_fail_bignum_message(0,param_1,param_2,"BIGNUM",param_3,param_4,&_LC11,param_5,param_6);
  }
  return 0 < iVar1;
}



undefined8 test_BN_gt_zero(undefined8 param_1,undefined4 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  
  if (((param_4 != 0) && (iVar1 = BN_is_negative(param_4), iVar1 == 0)) &&
     (iVar1 = BN_is_zero(param_4), iVar1 == 0)) {
    return 1;
  }
  test_fail_bignum_mono_message(0,param_1,param_2,"BIGNUM",param_3,&_LC47,&_LC11,param_4);
  return 0;
}



bool test_BN_ge(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
               BIGNUM *param_5,BIGNUM *param_6)

{
  int iVar1;
  
  iVar1 = BN_cmp(param_5,param_6);
  if (-1 >= iVar1) {
    test_fail_bignum_message(0,param_1,param_2,"BIGNUM",param_3,param_4,&_LC10,param_5,param_6);
  }
  return -1 < iVar1;
}



undefined8 test_BN_ge_zero(undefined8 param_1,undefined4 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  
  if (param_4 != 0) {
    iVar1 = BN_is_negative(param_4);
    if (iVar1 != 0) {
      iVar1 = BN_is_zero(param_4);
      if (iVar1 == 0) goto LAB_00102ccc;
    }
    return 1;
  }
LAB_00102ccc:
  test_fail_bignum_mono_message(0,param_1,param_2,"BIGNUM",param_3,&_LC47,&_LC10,param_4);
  return 0;
}



bool test_BN_lt(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
               BIGNUM *param_5,BIGNUM *param_6)

{
  int iVar1;
  
  iVar1 = BN_cmp(param_5,param_6);
  if (iVar1 >= 0) {
    test_fail_bignum_message(0,param_1,param_2,"BIGNUM",param_3,param_4,&_LC9,param_5,param_6);
  }
  return iVar1 < 0;
}



undefined8 test_BN_lt_zero(undefined8 param_1,undefined4 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  
  if (((param_4 != 0) && (iVar1 = BN_is_negative(param_4), iVar1 != 0)) &&
     (iVar1 = BN_is_zero(param_4), iVar1 == 0)) {
    return 1;
  }
  test_fail_bignum_mono_message(0,param_1,param_2,"BIGNUM",param_3,&_LC47,&_LC9,param_4);
  return 0;
}



bool test_BN_le(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
               BIGNUM *param_5,BIGNUM *param_6)

{
  int iVar1;
  
  iVar1 = BN_cmp(param_5,param_6);
  if (iVar1 >= 1) {
    test_fail_bignum_message(0,param_1,param_2,"BIGNUM",param_3,param_4,&_LC8,param_5,param_6);
  }
  return iVar1 < 1;
}



undefined8 test_BN_le_zero(undefined8 param_1,undefined4 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  
  if (param_4 != 0) {
    iVar1 = BN_is_negative(param_4);
    if (iVar1 == 0) {
      iVar1 = BN_is_zero(param_4);
      if (iVar1 == 0) goto LAB_00102edc;
    }
    return 1;
  }
LAB_00102edc:
  test_fail_bignum_mono_message(0,param_1,param_2,"BIGNUM",param_3,&_LC47,&_LC8,param_4);
  return 0;
}



undefined1  [16]
test_BN_eq_one(undefined8 param_1,undefined4 param_2,undefined8 param_3,ulong param_4)

{
  undefined1 auVar1 [16];
  int iVar2;
  undefined8 extraout_RDX;
  undefined1 auVar3 [16];
  
  if (param_4 != 0) {
    iVar2 = BN_is_one(param_4);
    if (iVar2 != 0) {
      auVar3._8_8_ = extraout_RDX;
      auVar3._0_8_ = 1;
      return auVar3;
    }
  }
  test_fail_bignum_mono_message(0,param_1,param_2,"BIGNUM",param_3,&_LC48,&_LC7);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_4;
  return auVar1 << 0x40;
}



undefined1  [16] test_BN_odd(undefined8 param_1,undefined4 param_2,undefined8 param_3,ulong param_4)

{
  undefined1 auVar1 [16];
  int iVar2;
  undefined8 extraout_RDX;
  undefined1 auVar3 [16];
  
  if (param_4 != 0) {
    iVar2 = BN_is_odd(param_4);
    if (iVar2 != 0) {
      auVar3._8_8_ = extraout_RDX;
      auVar3._0_8_ = 1;
      return auVar3;
    }
  }
  test_fail_bignum_mono_message(0,param_1,param_2,"BIGNUM",&_LC50,&_LC49,param_3);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_4;
  return auVar1 << 0x40;
}



undefined1  [16]
test_BN_even(undefined8 param_1,undefined4 param_2,undefined8 param_3,ulong param_4)

{
  undefined1 auVar1 [16];
  int iVar2;
  undefined8 extraout_RDX;
  undefined1 auVar3 [16];
  
  if (param_4 != 0) {
    iVar2 = BN_is_odd(param_4);
    if (iVar2 == 0) {
      auVar3._8_8_ = extraout_RDX;
      auVar3._0_8_ = 1;
      return auVar3;
    }
  }
  test_fail_bignum_mono_message(0,param_1,param_2,"BIGNUM","EVEN(",&_LC49,param_3);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_4;
  return auVar1 << 0x40;
}



undefined8
test_BN_eq_word(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
               long param_5,ulong param_6)

{
  int iVar1;
  BIGNUM *a;
  
  if ((param_5 != 0) && (iVar1 = BN_is_word(param_5,param_6), iVar1 != 0)) {
    return 1;
  }
  a = BN_new();
  if (a != (BIGNUM *)0x0) {
    BN_set_word(a,param_6);
  }
  test_fail_bignum_message(0,param_1,param_2,"BIGNUM",param_3,param_4,&_LC7,param_5,a);
  BN_free(a);
  return 0;
}



undefined8
test_BN_abs_eq_word(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                   BIGNUM *param_5,ulong param_6)

{
  int iVar1;
  BIGNUM *b;
  BIGNUM *a;
  
  if ((param_5 != (BIGNUM *)0x0) && (iVar1 = BN_abs_is_word(param_5), iVar1 != 0)) {
    return 1;
  }
  b = BN_dup(param_5);
  if (b != (BIGNUM *)0x0) {
    BN_set_negative(b,0);
  }
  a = BN_new();
  if (a != (BIGNUM *)0x0) {
    BN_set_word(a,param_6);
  }
  test_fail_bignum_message(0,param_1,param_2,"BIGNUM",param_3,param_4,"abs==",b,a);
  BN_free(a);
  BN_free(b);
  return 0;
}



undefined4
test_time_t_eq(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
              time_t param_5,time_t param_6)

{
  undefined4 uVar1;
  int iVar2;
  ASN1_TIME *a;
  ASN1_TIME *a_00;
  char *pcVar3;
  char *pcVar4;
  
  a = ASN1_TIME_set((ASN1_TIME *)0x0,param_5);
  a_00 = ASN1_TIME_set((ASN1_TIME *)0x0,param_6);
  if (a == (ASN1_TIME *)0x0) {
    if (a_00 == (ASN1_TIME *)0x0) goto LAB_00103239;
    pcVar4 = (char *)ASN1_STRING_get0_data(a_00);
LAB_00103240:
    pcVar3 = "<null>";
    if (a != (ASN1_TIME *)0x0) goto LAB_001032d1;
  }
  else {
    if (a_00 == (ASN1_TIME *)0x0) {
LAB_00103239:
      pcVar4 = "<null>";
      goto LAB_00103240;
    }
    iVar2 = ASN1_TIME_compare(a,a_00);
    uVar1 = 1;
    if (iVar2 == 0) goto LAB_00103284;
    pcVar4 = (char *)ASN1_STRING_get0_data(a_00);
LAB_001032d1:
    pcVar3 = (char *)ASN1_STRING_get0_data(a);
  }
  test_fail_message_constprop_5
            (0,param_1,param_2,"time_t",param_3,param_4,&_LC7,"[%s] compared to [%s]",pcVar3,pcVar4)
  ;
  uVar1 = 0;
LAB_00103284:
  ASN1_STRING_free(a);
  ASN1_STRING_free(a_00);
  return uVar1;
}



undefined4
test_time_t_ne(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
              time_t param_5,time_t param_6)

{
  undefined4 uVar1;
  int iVar2;
  ASN1_TIME *a;
  ASN1_TIME *a_00;
  char *pcVar3;
  char *pcVar4;
  
  a = ASN1_TIME_set((ASN1_TIME *)0x0,param_5);
  a_00 = ASN1_TIME_set((ASN1_TIME *)0x0,param_6);
  if (a == (ASN1_TIME *)0x0) {
    if (a_00 == (ASN1_TIME *)0x0) goto LAB_00103359;
    pcVar4 = (char *)ASN1_STRING_get0_data(a_00);
LAB_00103360:
    pcVar3 = "<null>";
    if (a != (ASN1_TIME *)0x0) goto LAB_001033f1;
  }
  else {
    if (a_00 == (ASN1_TIME *)0x0) {
LAB_00103359:
      pcVar4 = "<null>";
      goto LAB_00103360;
    }
    iVar2 = ASN1_TIME_compare(a,a_00);
    uVar1 = 1;
    if (iVar2 != 0) goto LAB_001033a4;
    pcVar4 = (char *)ASN1_STRING_get0_data(a_00);
LAB_001033f1:
    pcVar3 = (char *)ASN1_STRING_get0_data(a);
  }
  test_fail_message_constprop_4
            (0,param_1,param_2,"time_t",param_3,param_4,&_LC12,"[%s] compared to [%s]",pcVar3,pcVar4
            );
  uVar1 = 0;
LAB_001033a4:
  ASN1_STRING_free(a);
  ASN1_STRING_free(a_00);
  return uVar1;
}



undefined4
test_time_t_gt(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
              time_t param_5,time_t param_6)

{
  undefined4 uVar1;
  int iVar2;
  ASN1_TIME *a;
  ASN1_TIME *a_00;
  char *pcVar3;
  char *pcVar4;
  
  a = ASN1_TIME_set((ASN1_TIME *)0x0,param_5);
  a_00 = ASN1_TIME_set((ASN1_TIME *)0x0,param_6);
  if (a == (ASN1_TIME *)0x0) {
    if (a_00 == (ASN1_TIME *)0x0) goto LAB_00103479;
    pcVar4 = (char *)ASN1_STRING_get0_data(a_00);
LAB_00103480:
    pcVar3 = "<null>";
    if (a != (ASN1_TIME *)0x0) goto LAB_00103511;
  }
  else {
    if (a_00 == (ASN1_TIME *)0x0) {
LAB_00103479:
      pcVar4 = "<null>";
      goto LAB_00103480;
    }
    iVar2 = ASN1_TIME_compare(a,a_00);
    uVar1 = 1;
    if (0 < iVar2) goto LAB_001034c4;
    pcVar4 = (char *)ASN1_STRING_get0_data(a_00);
LAB_00103511:
    pcVar3 = (char *)ASN1_STRING_get0_data(a);
  }
  test_fail_message_constprop_3
            (0,param_1,param_2,"time_t",param_3,param_4,&_LC11,"[%s] compared to [%s]",pcVar3,pcVar4
            );
  uVar1 = 0;
LAB_001034c4:
  ASN1_STRING_free(a);
  ASN1_STRING_free(a_00);
  return uVar1;
}



undefined4
test_time_t_ge(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
              time_t param_5,time_t param_6)

{
  undefined4 uVar1;
  int iVar2;
  ASN1_TIME *a;
  ASN1_TIME *a_00;
  char *pcVar3;
  char *pcVar4;
  
  a = ASN1_TIME_set((ASN1_TIME *)0x0,param_5);
  a_00 = ASN1_TIME_set((ASN1_TIME *)0x0,param_6);
  if (a == (ASN1_TIME *)0x0) {
    if (a_00 == (ASN1_TIME *)0x0) goto LAB_00103599;
    pcVar4 = (char *)ASN1_STRING_get0_data(a_00);
LAB_001035a0:
    pcVar3 = "<null>";
    if (a != (ASN1_TIME *)0x0) goto LAB_00103631;
  }
  else {
    if (a_00 == (ASN1_TIME *)0x0) {
LAB_00103599:
      pcVar4 = "<null>";
      goto LAB_001035a0;
    }
    iVar2 = ASN1_TIME_compare(a,a_00);
    uVar1 = 1;
    if (-1 < iVar2) goto LAB_001035e4;
    pcVar4 = (char *)ASN1_STRING_get0_data(a_00);
LAB_00103631:
    pcVar3 = (char *)ASN1_STRING_get0_data(a);
  }
  test_fail_message_constprop_2
            (0,param_1,param_2,"time_t",param_3,param_4,&_LC10,"[%s] compared to [%s]",pcVar3,pcVar4
            );
  uVar1 = 0;
LAB_001035e4:
  ASN1_STRING_free(a);
  ASN1_STRING_free(a_00);
  return uVar1;
}



undefined4
test_time_t_lt(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
              time_t param_5,time_t param_6)

{
  undefined4 uVar1;
  int iVar2;
  ASN1_TIME *a;
  ASN1_TIME *a_00;
  char *pcVar3;
  char *pcVar4;
  
  a = ASN1_TIME_set((ASN1_TIME *)0x0,param_5);
  a_00 = ASN1_TIME_set((ASN1_TIME *)0x0,param_6);
  if (a == (ASN1_TIME *)0x0) {
    if (a_00 == (ASN1_TIME *)0x0) goto LAB_001036b9;
    pcVar4 = (char *)ASN1_STRING_get0_data(a_00);
LAB_001036c0:
    pcVar3 = "<null>";
    if (a != (ASN1_TIME *)0x0) goto LAB_00103751;
  }
  else {
    if (a_00 == (ASN1_TIME *)0x0) {
LAB_001036b9:
      pcVar4 = "<null>";
      goto LAB_001036c0;
    }
    iVar2 = ASN1_TIME_compare(a,a_00);
    uVar1 = 1;
    if (iVar2 < 0) goto LAB_00103704;
    pcVar4 = (char *)ASN1_STRING_get0_data(a_00);
LAB_00103751:
    pcVar3 = (char *)ASN1_STRING_get0_data(a);
  }
  test_fail_message_constprop_1
            (0,param_1,param_2,"time_t",param_3,param_4,&_LC9,"[%s] compared to [%s]",pcVar3,pcVar4)
  ;
  uVar1 = 0;
LAB_00103704:
  ASN1_STRING_free(a);
  ASN1_STRING_free(a_00);
  return uVar1;
}



undefined4
test_time_t_le(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
              time_t param_5,time_t param_6)

{
  undefined4 uVar1;
  int iVar2;
  ASN1_TIME *a;
  ASN1_TIME *a_00;
  char *pcVar3;
  char *pcVar4;
  
  a = ASN1_TIME_set((ASN1_TIME *)0x0,param_5);
  a_00 = ASN1_TIME_set((ASN1_TIME *)0x0,param_6);
  if (a == (ASN1_TIME *)0x0) {
    if (a_00 == (ASN1_TIME *)0x0) goto LAB_001037d9;
    pcVar4 = (char *)ASN1_STRING_get0_data(a_00);
LAB_001037e0:
    pcVar3 = "<null>";
    if (a != (ASN1_TIME *)0x0) goto LAB_00103871;
  }
  else {
    if (a_00 == (ASN1_TIME *)0x0) {
LAB_001037d9:
      pcVar4 = "<null>";
      goto LAB_001037e0;
    }
    iVar2 = ASN1_TIME_compare(a,a_00);
    uVar1 = 1;
    if (iVar2 < 1) goto LAB_00103824;
    pcVar4 = (char *)ASN1_STRING_get0_data(a_00);
LAB_00103871:
    pcVar3 = (char *)ASN1_STRING_get0_data(a);
  }
  test_fail_message_constprop_0
            (0,param_1,param_2,"time_t",param_3,param_4,&_LC8,"[%s] compared to [%s]",pcVar3,pcVar4)
  ;
  uVar1 = 0;
LAB_00103824:
  ASN1_STRING_free(a);
  ASN1_STRING_free(a_00);
  return uVar1;
}


