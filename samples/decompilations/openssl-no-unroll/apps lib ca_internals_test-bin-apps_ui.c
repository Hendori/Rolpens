
void ui_prompt_construct(UI *param_1,char *param_2,char *param_3)

{
  void *pvVar1;
  
  pvVar1 = UI_get0_user_data(param_1);
  if (param_2 == (char *)0x0) {
    param_2 = "pass phrase";
  }
  if ((param_3 == (char *)0x0) && (pvVar1 != (void *)0x0)) {
    param_3 = *(char **)((long)pvVar1 + 8);
  }
  UI_construct_prompt((UI *)0x0,param_2,param_3);
  return;
}



undefined8 ui_close(undefined8 param_1)

{
  int iVar1;
  undefined4 extraout_var;
  undefined8 uVar2;
  
  iVar1 = UI_method_get_closer(ui_base_method);
  if ((code *)CONCAT44(extraout_var,iVar1) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0010006d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)CONCAT44(extraout_var,iVar1))(param_1);
    return uVar2;
  }
  return 1;
}



undefined8 ui_write(UI *param_1,UI_STRING *param_2)

{
  uint uVar1;
  UI_string_types UVar2;
  int iVar3;
  void *pvVar4;
  undefined4 extraout_var;
  undefined8 uVar5;
  long *plVar6;
  UI_STRING *pUVar7;
  
  pUVar7 = param_2;
  uVar1 = UI_get_input_flags(param_2);
  if (((((uVar1 & 2) != 0) && (pvVar4 = UI_get0_user_data(param_1), pvVar4 != (void *)0x0)) &&
      (UVar2 = UI_get_string_type(param_2), UVar2 - UIT_PROMPT < 2)) &&
     (plVar6 = (long *)UI_get0_user_data(param_1), *plVar6 != 0)) {
    return 1;
  }
  iVar3 = UI_method_get_writer(ui_base_method,pUVar7);
  if ((code *)CONCAT44(extraout_var,iVar3) == (code *)0x0) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x001000d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar5 = (*(code *)CONCAT44(extraout_var,iVar3))(param_1,param_2);
  return uVar5;
}



undefined8 ui_read(UI *param_1,UI_STRING *param_2)

{
  uint uVar1;
  UI_string_types UVar2;
  int iVar3;
  void *pvVar4;
  undefined4 extraout_var;
  undefined8 uVar5;
  long *plVar6;
  char *result;
  UI_STRING *pUVar7;
  
  pUVar7 = param_2;
  uVar1 = UI_get_input_flags(param_2);
  if ((((uVar1 & 2) != 0) && (pvVar4 = UI_get0_user_data(param_1), pvVar4 != (void *)0x0)) &&
     (UVar2 = UI_get_string_type(param_2), UVar2 - UIT_PROMPT < 2)) {
    plVar6 = (long *)UI_get0_user_data(param_1);
    result = (char *)*plVar6;
    if (result != (char *)0x0) goto LAB_00100167;
  }
  iVar3 = UI_method_get_reader(ui_base_method,pUVar7);
  if ((code *)CONCAT44(extraout_var,iVar3) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00100156. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (*(code *)CONCAT44(extraout_var,iVar3))(param_1,param_2);
    return uVar5;
  }
  result = "";
LAB_00100167:
  UI_set_result(param_1,param_2,result);
  return 1;
}



undefined8 ui_open(undefined8 param_1)

{
  int iVar1;
  undefined4 extraout_var;
  undefined8 uVar2;
  
  iVar1 = UI_method_get_opener(ui_base_method);
  if ((code *)CONCAT44(extraout_var,iVar1) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x001001bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)CONCAT44(extraout_var,iVar1))(param_1);
    return uVar2;
  }
  return 1;
}



undefined8 set_base_ui_method(long param_1)

{
  if (param_1 != 0) {
    ui_base_method = param_1;
    return 1;
  }
  ui_base_method = UI_null();
  return 1;
}



bool setup_ui_method(void)

{
  int iVar1;
  
  ui_base_method = (UI_METHOD *)UI_null();
  ui_base_method = UI_OpenSSL();
  ui_method = UI_create_method("OpenSSL application user interface");
  if ((((ui_method != (UI_METHOD *)0x0) &&
       (iVar1 = UI_method_set_opener(ui_method,ui_open), iVar1 == 0)) &&
      (iVar1 = UI_method_set_reader(ui_method,ui_read), iVar1 == 0)) &&
     ((iVar1 = UI_method_set_writer(ui_method,ui_write), iVar1 == 0 &&
      (iVar1 = UI_method_set_closer(ui_method,ui_close), iVar1 == 0)))) {
    iVar1 = UI_method_set_prompt_constructor(ui_method,ui_prompt_construct);
    return iVar1 == 0;
  }
  return false;
}



void destroy_ui_method(void)

{
  if (ui_method != (UI_METHOD *)0x0) {
    UI_destroy_method(ui_method);
    ui_method = (UI_METHOD *)0x0;
    return;
  }
  return;
}



undefined8 get_ui_method(void)

{
  return ui_method;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong password_callback(char *param_1,uint param_2,int param_3,void *param_4)

{
  int iVar1;
  int iVar2;
  UI *ui_method;
  char *pcVar3;
  size_t sVar4;
  ulong uVar5;
  ulong len;
  char *local_48;
  
  ui_method = UI_new_method(::ui_method);
  if (ui_method != (UI *)0x0) {
    pcVar3 = (char *)0x0;
    if (param_4 != (void *)0x0) {
      pcVar3 = *(char **)((long)param_4 + 8);
    }
    pcVar3 = UI_construct_prompt(ui_method,"pass phrase",pcVar3);
    if (pcVar3 != (char *)0x0) {
      UI_ctrl(ui_method,1,1,(void *)0x0,(f *)0x0);
      UI_add_user_data(ui_method,param_4);
      iVar1 = UI_add_input_string(ui_method,pcVar3,2,param_1,4,param_2 - 1);
      if ((iVar1 < 0) || (param_3 == 0)) {
        local_48 = (char *)0x0;
      }
      else {
        local_48 = (char *)CRYPTO_malloc(param_2,"apps/lib/apps_ui.c",0x9a);
        if (local_48 == (char *)0x0) {
          BIO_printf(_bio_err,"Could not allocate %d bytes for %s\n",(ulong)param_2,
                     "password buffer");
          ERR_print_errors(_bio_err);
                    /* WARNING: Subroutine does not return */
          exit(1);
        }
        iVar1 = UI_add_verify_string(ui_method,pcVar3,2,local_48,4,param_2 - 1,param_1);
      }
      if (-1 < iVar1) {
        do {
          iVar1 = UI_process(ui_method);
          if (-1 < iVar1) {
            CRYPTO_clear_free(local_48,param_2,"apps/lib/apps_ui.c",0xcd);
            sVar4 = strlen(param_1);
            uVar5 = sVar4 & 0xffffffff;
            goto LAB_00100475;
          }
          iVar2 = UI_ctrl(ui_method,2,0,(void *)0x0,(f *)0x0);
        } while (iVar2 != 0);
      }
      len = (ulong)param_2;
      CRYPTO_clear_free(local_48,len,"apps/lib/apps_ui.c",0xcd);
      if (iVar1 == -1) {
        BIO_printf(_bio_err,"User interface error\n");
        ERR_print_errors(_bio_err);
        uVar5 = 0;
        OPENSSL_cleanse(param_1,len);
      }
      else {
        if (iVar1 == -2) {
          BIO_printf(_bio_err,"aborted!\n");
          OPENSSL_cleanse(param_1,len);
        }
        uVar5 = 0;
      }
LAB_00100475:
      UI_free(ui_method);
      CRYPTO_free(pcVar3);
      return uVar5;
    }
    BIO_printf(_bio_err,"Out of memory\n");
    UI_free(ui_method);
  }
  return 0;
}


