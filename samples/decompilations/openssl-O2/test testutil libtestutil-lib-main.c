
undefined4 main(undefined4 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  test_open_streams();
  iVar1 = global_init();
  if (iVar1 == 0) {
    test_printf_stderr(0x100000);
    return 1;
  }
  iVar1 = setup_test_framework(param_1,param_2);
  if (iVar1 != 0) {
    iVar1 = setup_tests();
    if (0 < iVar1) {
      uVar2 = run_tests(*param_2);
      cleanup_tests();
      opt_check_usage();
      goto LAB_00100050;
    }
    if (iVar1 == 0) {
      uVar3 = test_get_options();
      opt_help(uVar3);
    }
  }
  uVar2 = 1;
LAB_00100050:
  uVar2 = pulldown_test_framework(uVar2);
  test_close_streams();
  return uVar2;
}


