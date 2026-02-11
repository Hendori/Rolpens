
void ui_new_method_data(void)

{
  return;
}



undefined8 ui_open(void)

{
  return 1;
}



undefined8 ui_write(void)

{
  return 1;
}



void ui_free_method_data(undefined8 param_1,void *param_2)

{
  CRYPTO_free(param_2);
  return;
}



void ui_method_data_index_init_ossl_(void)

{
  ui_method_data_index =
       CRYPTO_get_ex_new_index
                 (0xe,0,(void *)0x0,ui_new_method_data,ui_dup_method_data,ui_free_method_data);
  ui_method_data_index_init_ossl_ret_ = 1;
  return;
}



bool ui_dup_method_data(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  
  if (*param_3 != 0) {
    lVar1 = CRYPTO_memdup(*param_3,0x10,"crypto/ui/ui_util.c",0x4b);
    *param_3 = lVar1;
    return lVar1 != 0;
  }
  return false;
}



ulong ui_read_part_0(UI *param_1,UI_STRING *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  UI_METHOD *pUVar6;
  undefined8 *puVar7;
  void *pvVar8;
  ulong uVar9;
  long in_FS_OFFSET;
  undefined1 auStack_438 [1032];
  long local_30;
  
  uVar2 = ui_method_data_index;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  pUVar6 = UI_get_method(param_1);
  puVar7 = (undefined8 *)UI_method_get_ex_data(pUVar6,uVar2);
  iVar3 = UI_get_result_maxsize(param_2);
  pcVar1 = (code *)*puVar7;
  if (0x400 < iVar3) {
    iVar3 = 0x400;
  }
  pvVar8 = UI_get0_user_data(param_1);
  uVar9 = (*pcVar1)(auStack_438,iVar3,*(undefined4 *)(puVar7 + 1),pvVar8);
  iVar4 = (int)uVar9;
  if (iVar3 < iVar4) {
    uVar9 = 0xffffffff;
  }
  else if (-1 < iVar4) {
    auStack_438[iVar4] = 0;
    uVar5 = UI_set_result_ex(param_1,param_2,auStack_438,uVar9 & 0xffffffff);
    uVar9 = (ulong)(~uVar5 >> 0x1f);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 ui_read(undefined8 param_1,UI_STRING *param_2)

{
  UI_string_types UVar1;
  undefined8 uVar2;
  
  UVar1 = UI_get_string_type(param_2);
  if (UVar1 != UIT_PROMPT) {
    return 1;
  }
  uVar2 = ui_read_part_0(param_1,param_2);
  return uVar2;
}



undefined8 ui_close(void)

{
  return 1;
}



int UI_UTIL_read_pw(char *buf,char *buff,int size,char *prompt,int verify)

{
  int iVar1;
  UI *ui;
  
  if (size < 1) {
    iVar1 = -1;
  }
  else {
    ui = UI_new();
    if (ui == (UI *)0x0) {
      iVar1 = -2;
    }
    else {
      iVar1 = UI_add_input_string(ui,prompt,0,buf,0,size + -1);
      if (-1 < iVar1) {
        if (verify != 0) {
          iVar1 = UI_add_verify_string(ui,prompt,0,buff,0,size + -1,buf);
        }
        if (-1 < iVar1) {
          iVar1 = UI_process(ui);
        }
      }
      UI_free(ui);
    }
  }
  return iVar1;
}



int UI_UTIL_read_pw_string(char *buf,int length,char *prompt,int verify)

{
  int iVar1;
  long in_FS_OFFSET;
  char acStack_2028 [8200];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = 0x2000;
  if (length < 0x2001) {
    iVar1 = length;
  }
  iVar1 = UI_UTIL_read_pw(buf,acStack_2028,iVar1,prompt,verify);
  OPENSSL_cleanse(acStack_2028,0x2000);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



UI_METHOD * UI_UTIL_wrap_read_pem_callback(undefined *param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 *ptr;
  UI_METHOD *method;
  
  ptr = (undefined8 *)CRYPTO_zalloc(0x10,"crypto/ui/ui_util.c",0x97);
  if (ptr != (undefined8 *)0x0) {
    method = UI_create_method("PEM password callback wrapper");
    if (method != (UI_METHOD *)0x0) {
      iVar1 = UI_method_set_opener(method,ui_open);
      if (-1 < iVar1) {
        iVar1 = UI_method_set_reader(method,ui_read);
        if (-1 < iVar1) {
          iVar1 = UI_method_set_writer(method,ui_write);
          if (-1 < iVar1) {
            iVar1 = UI_method_set_closer(method,ui_close);
            if (-1 < iVar1) {
              iVar1 = CRYPTO_THREAD_run_once(&get_index_once,ui_method_data_index_init_ossl_);
              if ((iVar1 != 0) && (ui_method_data_index_init_ossl_ret_ != 0)) {
                iVar1 = UI_method_set_ex_data(method,ui_method_data_index,ptr);
                if (iVar1 != 0) {
                  *(undefined4 *)(ptr + 1) = param_2;
                  if (param_1 == (undefined *)0x0) {
                    param_1 = &PEM_def_callback;
                  }
                  *ptr = param_1;
                  return method;
                }
              }
            }
          }
        }
      }
      goto LAB_00100452;
    }
  }
  method = (UI_METHOD *)0x0;
LAB_00100452:
  UI_destroy_method(method);
  CRYPTO_free(ptr);
  return (UI_METHOD *)0x0;
}


