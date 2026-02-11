
uint test_new_ui(void)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  long in_FS_OFFSET;
  char *local_48;
  char *pcStack_40;
  undefined1 local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = "password";
  pcStack_40 = "prompt";
  setup_ui_method();
  uVar1 = password_callback(local_38,0x10,0,&local_48);
  uVar2 = test_int_gt("test/uitest.c",0x52,"password_callback(pass, sizeof(pass), 0, &cb_data)",
                      &_LC2,uVar1,0);
  if (uVar2 != 0) {
    iVar3 = test_str_eq("test/uitest.c",0x53,&_LC6,"cb_data.password",local_38,local_48);
    uVar2 = (uint)(iVar3 != 0);
  }
  destroy_ui_method();
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint test_old(void)

{
  uint uVar1;
  int iVar2;
  UI_METHOD *method;
  UI *ui;
  long in_FS_OFFSET;
  undefined8 local_51;
  undefined1 local_49;
  char local_48 [24];
  long local_30;
  
  ui = (UI *)0x0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_49 = 0;
  local_51 = 0x64726f7773736170;
  method = (UI_METHOD *)UI_UTIL_wrap_read_pem_callback(test_pem_password_cb,0);
  uVar1 = test_ptr("test/uitest.c",0x27,
                   "ui_method = UI_UTIL_wrap_read_pem_callback(test_pem_password_cb, 0)",method);
  if (uVar1 != 0) {
    ui = UI_new_method(method);
    iVar2 = test_ptr("test/uitest.c",0x29,"ui = UI_new_method(ui_method)",ui);
    if (iVar2 != 0) {
      UI_add_user_data(ui,&local_51);
      iVar2 = UI_add_input_string(ui,"prompt",2,local_48,0,0xf);
      if (0 < iVar2) {
        iVar2 = UI_process(ui);
        if (iVar2 == -2) {
          test_info("test/uitest.c",0x35,"test_old: UI process interrupted or cancelled");
        }
        else if (iVar2 != -1) {
          iVar2 = test_str_eq("test/uitest.c",0x3d,&_LC6,"defpass",local_48,&local_51);
          uVar1 = (uint)(iVar2 != 0);
          goto LAB_0010014a;
        }
      }
    }
    uVar1 = 0;
  }
LAB_0010014a:
  UI_free(ui);
  UI_destroy_method(method);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void test_pem_password_cb(char *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  OPENSSL_strlcpy(param_1,param_4,(long)param_2);
  strlen(param_1);
  return;
}



undefined8 setup_tests(void)

{
  add_test("test_old",test_old);
  add_test("test_new_ui",0x100000);
  return 1;
}


