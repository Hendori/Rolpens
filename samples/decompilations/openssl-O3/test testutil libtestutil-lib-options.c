
undefined8 test_skip_common_options(void)

{
  int iVar1;
  
  do {
    iVar1 = opt_next();
    if (iVar1 == 0) {
      return 1;
    }
  } while (iVar1 - 500U < 6);
  return 0;
}



long test_get_argument_count(void)

{
  int iVar1;
  
  iVar1 = opt_num_rest();
  return (long)iVar1;
}



ulong test_get_argument(ulong param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  lVar4 = opt_rest();
  if (param_1 < 400) {
    iVar2 = opt_num_rest();
    if ((lVar4 != 0) && ((int)param_1 < iVar2)) {
      (&used)[param_1] = 1;
      return *(ulong *)(lVar4 + param_1 * 8);
    }
    return 0;
  }
  OPENSSL_die("assertion failed: n < sizeof(used)","test/testutil/options.c",0x2b);
  lVar4 = opt_rest();
  uVar5 = opt_num_rest();
  iVar3 = (int)uVar5;
  iVar2 = 100;
  if (iVar3 < 0x65) {
    iVar2 = iVar3;
  }
  if (0 < iVar3) {
    uVar6 = 0;
    do {
      while (uVar5 = (ulong)(uint)(&used)[uVar6], (&used)[uVar6] == 0) {
        lVar1 = uVar6 * 8;
        uVar5 = uVar6 & 0xffffffff;
        uVar6 = uVar6 + 1;
        uVar5 = test_printf_stderr("Warning ignored command-line argument %d: %s\n",uVar5,
                                   *(undefined8 *)(lVar4 + lVar1));
        if (iVar2 <= (int)uVar6) goto LAB_00100150;
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < iVar2);
LAB_00100150:
    if (iVar2 < iVar3) {
      uVar5 = test_printf_stderr("Warning arguments %d and later unchecked\n",iVar2);
      return uVar5;
    }
  }
  return uVar5;
}



void opt_check_usage(void)

{
  long lVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  
  lVar3 = opt_rest();
  iVar2 = opt_num_rest();
  iVar5 = 100;
  if (iVar2 < 0x65) {
    iVar5 = iVar2;
  }
  if (0 < iVar2) {
    uVar4 = 0;
    do {
      while ((&used)[uVar4] == 0) {
        lVar1 = uVar4 * 8;
        uVar6 = uVar4 & 0xffffffff;
        uVar4 = uVar4 + 1;
        test_printf_stderr("Warning ignored command-line argument %d: %s\n",uVar6,
                           *(undefined8 *)(lVar3 + lVar1));
        if (iVar5 <= (int)uVar4) goto LAB_00100150;
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < iVar5);
LAB_00100150:
    if (iVar5 < iVar2) {
      test_printf_stderr("Warning arguments %d and later unchecked\n",iVar5);
      return;
    }
  }
  return;
}



void opt_printf_stderr(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                      undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12
                      ,undefined8 param_13,undefined8 param_14)

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
  local_d0 = &stack0x00000008;
  local_d8 = 8;
  local_c8 = local_b8;
  local_d4 = 0x30;
  local_b0 = param_10;
  local_a8 = param_11;
  local_a0 = param_12;
  local_98 = param_13;
  local_90 = param_14;
  test_vprintf_stderr(param_9,&local_d8);
  if (local_c0 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


