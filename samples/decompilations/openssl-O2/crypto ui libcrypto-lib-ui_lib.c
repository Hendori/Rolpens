
void free_string(int *param_1)

{
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    CRYPTO_free(*(void **)(param_1 + 2));
    if (*param_1 == 3) {
      CRYPTO_free(*(void **)(param_1 + 10));
      CRYPTO_free(*(void **)(param_1 + 0xc));
      CRYPTO_free(*(void **)(param_1 + 0xe));
    }
  }
  CRYPTO_free(param_1);
  return;
}



int print_error(ulong param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined4 local_58;
  undefined1 local_54 [16];
  undefined1 local_44 [16];
  undefined1 local_34 [16];
  undefined1 local_24 [16];
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_54._8_8_ = 0;
  local_54._0_8_ = param_1;
  local_54 = local_54 << 0x20;
  local_14 = 0;
  local_44 = (undefined1  [16])0x0;
  local_34 = (undefined1  [16])0x0;
  local_24 = (undefined1  [16])0x0;
  iVar1 = 0;
  local_58 = 5;
  if (*(code **)(*param_3 + 0x10) != (code *)0x0) {
    iVar1 = (**(code **)(*param_3 + 0x10))(param_3,&local_58);
    iVar1 = -(uint)(iVar1 < 1);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int * general_allocate_prompt_isra_0(long param_1,int param_2,int param_3,int param_4,long param_5)

{
  int *piVar1;
  
  if (param_1 == 0) {
    ERR_new();
    ERR_set_debug("crypto/ui/ui_lib.c",0x67,"general_allocate_prompt");
    ERR_set_error(0x28,0xc0102,0);
    piVar1 = (int *)0x0;
  }
  else if ((param_3 - 1U < 3) && (param_5 == 0)) {
    ERR_new();
    ERR_set_debug("crypto/ui/ui_lib.c",0x6a,"general_allocate_prompt");
    ERR_set_error(0x28,0x69,0);
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)CRYPTO_zalloc(0x48,"crypto/ui/ui_lib.c",0x6b);
    if (piVar1 != (int *)0x0) {
      *(long *)(piVar1 + 2) = param_1;
      piVar1[0x10] = param_2;
      piVar1[4] = param_4;
      *piVar1 = param_3;
      *(long *)(piVar1 + 6) = param_5;
    }
  }
  return piVar1;
}



ulong general_allocate_boolean_constprop_0
                (long param_1,undefined8 param_2,undefined8 param_3,char *param_4,char *param_5,
                undefined4 param_6,undefined4 param_7,undefined8 param_8)

{
  char cVar1;
  char *pcVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  char *pcVar6;
  undefined8 uVar7;
  
  if (param_4 == (char *)0x0) {
    ERR_new();
    uVar7 = 0x9e;
  }
  else {
    if (param_5 != (char *)0x0) {
      cVar1 = *param_4;
      pcVar6 = param_4;
      while (cVar1 != '\0') {
        pcVar2 = strchr(param_5,(int)cVar1);
        if (pcVar2 != (char *)0x0) {
          ERR_new();
          ERR_set_debug("crypto/ui/ui_lib.c",0xa4,"general_allocate_boolean");
          ERR_set_error(0x28,0x68,0);
        }
        pcVar2 = pcVar6 + 1;
        pcVar6 = pcVar6 + 1;
        cVar1 = *pcVar2;
      }
      lVar3 = general_allocate_prompt_isra_0(param_2,param_6,3,param_7,param_8);
      if (lVar3 == 0) {
        return 0xffffffff;
      }
      lVar5 = *(long *)(param_1 + 8);
      if (lVar5 == 0) {
        lVar5 = OPENSSL_sk_new_null();
        *(long *)(param_1 + 8) = lVar5;
        if (lVar5 == 0) {
          free_string(lVar3);
          return 0xffffffff;
        }
      }
      *(char **)(lVar3 + 0x30) = param_4;
      *(char **)(lVar3 + 0x38) = param_5;
      *(undefined8 *)(lVar3 + 0x28) = param_3;
      uVar4 = OPENSSL_sk_push(lVar5,lVar3);
      if ((int)uVar4 < 1) {
        free_string(lVar3);
        return (ulong)((int)uVar4 - 1);
      }
      return uVar4;
    }
    ERR_new();
    uVar7 = 0xa0;
  }
  ERR_set_debug("crypto/ui/ui_lib.c",uVar7,"general_allocate_boolean");
  ERR_set_error(0x28,0xc0102,0);
  return 0xffffffff;
}



ulong general_allocate_string
                (long param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined8 param_6,undefined4 param_7,undefined4 param_8,
                undefined8 param_9)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  lVar1 = general_allocate_prompt_isra_0(param_2,param_3,param_4,param_5,param_6);
  if (lVar1 == 0) {
LAB_00100419:
    uVar2 = 0xffffffff;
  }
  else {
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 == 0) {
      lVar3 = OPENSSL_sk_new_null();
      *(long *)(param_1 + 8) = lVar3;
      if (lVar3 == 0) {
        free_string(lVar1);
        goto LAB_00100419;
      }
    }
    *(undefined4 *)(lVar1 + 0x28) = param_7;
    *(undefined4 *)(lVar1 + 0x2c) = param_8;
    *(undefined8 *)(lVar1 + 0x30) = param_9;
    uVar2 = OPENSSL_sk_push(lVar3,lVar1);
    if ((int)uVar2 < 1) {
      free_string(lVar1);
      return (ulong)((int)uVar2 - 1);
    }
  }
  return uVar2;
}



void UI_free(UI *ui)

{
  if (ui != (UI *)0x0) {
    if (((byte)ui[0x28] & 2) != 0) {
      (**(code **)(*(long *)ui + 0x38))(ui,*(undefined8 *)(ui + 0x10));
    }
    OPENSSL_sk_pop_free(*(undefined8 *)(ui + 8),0x100000);
    CRYPTO_free_ex_data(0xb,ui,(CRYPTO_EX_DATA *)(ui + 0x18));
    CRYPTO_THREAD_lock_free(*(undefined8 *)(ui + 0x30));
    CRYPTO_free(ui);
    return;
  }
  return;
}



UI * UI_new_method(UI_METHOD *method)

{
  int iVar1;
  UI *ui;
  long lVar2;
  
  ui = (UI *)CRYPTO_zalloc(0x38,"crypto/ui/ui_lib.c",0x19);
  if (ui != (UI *)0x0) {
    lVar2 = CRYPTO_THREAD_lock_new();
    *(long *)(ui + 0x30) = lVar2;
    if (lVar2 == 0) {
      ERR_new();
      ERR_set_debug("crypto/ui/ui_lib.c",0x20,"UI_new_method");
      ERR_set_error(0x28,0x8000f,0);
      CRYPTO_free(ui);
      return (UI *)0x0;
    }
    if ((method == (UI_METHOD *)0x0) &&
       (method = UI_get_default_method(), method == (UI_METHOD *)0x0)) {
      method = (UI_METHOD *)UI_null();
    }
    *(UI_METHOD **)ui = method;
    iVar1 = CRYPTO_new_ex_data(0xb,ui,(CRYPTO_EX_DATA *)(ui + 0x18));
    if (iVar1 != 0) {
      return ui;
    }
    UI_free(ui);
  }
  return (UI *)0x0;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

UI * UI_new(void)

{
  UI *pUVar1;
  
  pUVar1 = UI_new_method((UI_METHOD *)0x0);
  return pUVar1;
}



int UI_add_input_string(UI *ui,char *prompt,int flags,char *result_buf,int minsize,int maxsize)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = general_allocate_prompt_isra_0(prompt,0,1,flags,result_buf);
  if (lVar2 == 0) {
LAB_00100619:
    iVar1 = -1;
  }
  else {
    lVar3 = *(long *)(ui + 8);
    if (lVar3 == 0) {
      lVar3 = OPENSSL_sk_new_null();
      *(long *)(ui + 8) = lVar3;
      if (lVar3 == 0) {
        free_string(lVar2);
        goto LAB_00100619;
      }
    }
    *(int *)(lVar2 + 0x28) = minsize;
    *(int *)(lVar2 + 0x2c) = maxsize;
    *(undefined8 *)(lVar2 + 0x30) = 0;
    iVar1 = OPENSSL_sk_push(lVar3,lVar2);
    if (iVar1 < 1) {
      free_string(lVar2);
      return iVar1 + -1;
    }
  }
  return iVar1;
}



int UI_dup_input_string(UI *ui,char *prompt,int flags,char *result_buf,int minsize,int maxsize)

{
  int iVar1;
  
  if ((prompt != (char *)0x0) &&
     (prompt = CRYPTO_strdup(prompt,"crypto/ui/ui_lib.c",0xd2), prompt == (char *)0x0)) {
    return 0;
  }
  iVar1 = general_allocate_string(ui,prompt,1,1,flags,result_buf,minsize,maxsize,0);
  return iVar1;
}



int UI_add_verify_string
              (UI *ui,char *prompt,int flags,char *result_buf,int minsize,int maxsize,char *test_buf
              )

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = general_allocate_prompt_isra_0(prompt,0,2,flags,result_buf);
  if (lVar2 == 0) {
LAB_00100749:
    iVar1 = -1;
  }
  else {
    lVar3 = *(long *)(ui + 8);
    if (lVar3 == 0) {
      lVar3 = OPENSSL_sk_new_null();
      *(long *)(ui + 8) = lVar3;
      if (lVar3 == 0) {
        free_string(lVar2);
        goto LAB_00100749;
      }
    }
    *(int *)(lVar2 + 0x28) = minsize;
    *(int *)(lVar2 + 0x2c) = maxsize;
    *(char **)(lVar2 + 0x30) = test_buf;
    iVar1 = OPENSSL_sk_push(lVar3,lVar2);
    if (iVar1 < 1) {
      free_string(lVar2);
      return iVar1 + -1;
    }
  }
  return iVar1;
}



int UI_dup_verify_string
              (UI *ui,char *prompt,int flags,char *result_buf,int minsize,int maxsize,char *test_buf
              )

{
  int iVar1;
  
  if ((prompt != (char *)0x0) &&
     (prompt = CRYPTO_strdup(prompt,"crypto/ui/ui_lib.c",0xec), prompt == (char *)0x0)) {
    return -1;
  }
  iVar1 = general_allocate_string(ui,prompt,1,2,flags,result_buf,minsize,maxsize,test_buf);
  return iVar1;
}



int UI_add_input_boolean
              (UI *ui,char *prompt,char *action_desc,char *ok_chars,char *cancel_chars,int flags,
              char *result_buf)

{
  int iVar1;
  
  iVar1 = general_allocate_boolean_constprop_0();
  return iVar1;
}



int UI_dup_input_boolean
              (UI *ui,char *prompt,char *action_desc,char *ok_chars,char *cancel_chars,int flags,
              char *result_buf)

{
  int iVar1;
  
  if (prompt == (char *)0x0) {
LAB_0010083e:
    if (action_desc != (char *)0x0) {
      action_desc = CRYPTO_strdup(action_desc,"crypto/ui/ui_lib.c",0x10f);
      if (action_desc == (char *)0x0) {
        ok_chars = (char *)0x0;
        goto LAB_001008e6;
      }
    }
    if (ok_chars != (char *)0x0) {
      ok_chars = CRYPTO_strdup(ok_chars,"crypto/ui/ui_lib.c",0x115);
      if (ok_chars == (char *)0x0) goto LAB_001008e6;
    }
    if (cancel_chars != (char *)0x0) {
      cancel_chars = CRYPTO_strdup(cancel_chars,"crypto/ui/ui_lib.c",0x11b);
      if (cancel_chars == (char *)0x0) goto LAB_001008e6;
    }
    iVar1 = general_allocate_boolean_constprop_0
                      (ui,prompt,action_desc,ok_chars,cancel_chars,1,flags,result_buf);
  }
  else {
    prompt = CRYPTO_strdup(prompt,"crypto/ui/ui_lib.c",0x109);
    if (prompt != (char *)0x0) goto LAB_0010083e;
    ok_chars = (char *)0x0;
    action_desc = (char *)0x0;
LAB_001008e6:
    CRYPTO_free(prompt);
    CRYPTO_free(action_desc);
    CRYPTO_free(ok_chars);
    CRYPTO_free((void *)0x0);
    iVar1 = -1;
  }
  return iVar1;
}



int UI_add_info_string(UI *ui,char *text)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = general_allocate_prompt_isra_0(text,0,4,0,0);
  if (lVar2 == 0) {
LAB_001009c1:
    iVar1 = -1;
  }
  else {
    lVar3 = *(long *)(ui + 8);
    if (lVar3 == 0) {
      lVar3 = OPENSSL_sk_new_null();
      *(long *)(ui + 8) = lVar3;
      if (lVar3 == 0) {
        free_string(lVar2);
        goto LAB_001009c1;
      }
    }
    *(undefined8 *)(lVar2 + 0x28) = 0;
    *(undefined8 *)(lVar2 + 0x30) = 0;
    iVar1 = OPENSSL_sk_push(lVar3,lVar2);
    if (iVar1 < 1) {
      free_string(lVar2);
      return iVar1 + -1;
    }
  }
  return iVar1;
}



int UI_dup_info_string(UI *ui,char *text)

{
  int iVar1;
  
  if (text != (char *)0x0) {
    text = CRYPTO_strdup(text,"crypto/ui/ui_lib.c",0x136);
    if (text == (char *)0x0) {
      return -1;
    }
  }
  iVar1 = general_allocate_string(ui,text,1,4,0,0,0,0,0);
  return iVar1;
}



int UI_add_error_string(UI *ui,char *text)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = general_allocate_prompt_isra_0(text,0,5,0,0);
  if (lVar2 == 0) {
LAB_00100ac1:
    iVar1 = -1;
  }
  else {
    lVar3 = *(long *)(ui + 8);
    if (lVar3 == 0) {
      lVar3 = OPENSSL_sk_new_null();
      *(long *)(ui + 8) = lVar3;
      if (lVar3 == 0) {
        free_string(lVar2);
        goto LAB_00100ac1;
      }
    }
    *(undefined8 *)(lVar2 + 0x28) = 0;
    *(undefined8 *)(lVar2 + 0x30) = 0;
    iVar1 = OPENSSL_sk_push(lVar3,lVar2);
    if (iVar1 < 1) {
      free_string(lVar2);
      return iVar1 + -1;
    }
  }
  return iVar1;
}



int UI_dup_error_string(UI *ui,char *text)

{
  int iVar1;
  
  if (text != (char *)0x0) {
    text = CRYPTO_strdup(text,"crypto/ui/ui_lib.c",0x14a);
    if (text == (char *)0x0) {
      return -1;
    }
  }
  iVar1 = general_allocate_string(ui,text,1,5,0,0,0,0,0);
  return iVar1;
}



char * UI_construct_prompt(UI *ui_method,char *object_desc,char *object_name)

{
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar1;
  size_t sVar2;
  size_t sVar3;
  int iVar4;
  long lVar5;
  long in_FS_OFFSET;
  undefined2 local_3f;
  undefined4 local_3d;
  undefined2 local_39;
  undefined4 local_37;
  undefined3 uStack_33;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((ui_method != (UI *)0x0) && (*(long *)ui_method != 0)) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)ui_method + 0x40),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00100b8b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pcVar1 = (char *)(*UNRECOVERED_JUMPTABLE)(ui_method,object_desc,object_name);
      return pcVar1;
    }
    goto LAB_00100cc4;
  }
  local_3d = 0x726f6620;
  local_37 = 0x65746e45;
  uStack_33 = 0x2072;
  local_39 = 0x20;
  local_3f = 0x3a;
  if (object_desc == (char *)0x0) {
LAB_00100cc0:
    pcVar1 = (char *)0x0;
  }
  else {
    sVar2 = strlen(object_desc);
    if (object_name == (char *)0x0) {
      iVar4 = (int)sVar2 + 8;
      lVar5 = (long)iVar4;
      pcVar1 = (char *)CRYPTO_malloc(iVar4,"crypto/ui/ui_lib.c",0x166);
      if (pcVar1 == (char *)0x0) goto LAB_00100cc0;
      OPENSSL_strlcpy(pcVar1,&local_37,lVar5);
      OPENSSL_strlcat(pcVar1,object_desc,lVar5);
    }
    else {
      sVar3 = strlen(object_name);
      iVar4 = (int)sVar2 + 0xd + (int)sVar3;
      lVar5 = (long)iVar4;
      pcVar1 = (char *)CRYPTO_malloc(iVar4,"crypto/ui/ui_lib.c",0x166);
      if (pcVar1 == (char *)0x0) goto LAB_00100cc0;
      OPENSSL_strlcpy(pcVar1,&local_37,lVar5);
      OPENSSL_strlcat(pcVar1,object_desc,lVar5);
      OPENSSL_strlcat(pcVar1,&local_3d,lVar5);
      OPENSSL_strlcat(pcVar1,object_name,lVar5);
    }
    OPENSSL_strlcat(pcVar1,&local_3f,lVar5);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pcVar1;
  }
LAB_00100cc4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void * UI_add_user_data(UI *ui,void *user_data)

{
  uint uVar1;
  void *pvVar2;
  
  uVar1 = *(uint *)(ui + 0x28);
  pvVar2 = *(void **)(ui + 0x10);
  if ((uVar1 & 2) != 0) {
    (**(code **)(*(long *)ui + 0x38))();
    uVar1 = *(uint *)(ui + 0x28);
    pvVar2 = (void *)0x0;
  }
  *(void **)(ui + 0x10) = user_data;
  *(uint *)(ui + 0x28) = uVar1 & 0xfffffffd;
  return pvVar2;
}



undefined8 UI_dup_user_data(UI *param_1)

{
  code *pcVar1;
  void *user_data;
  
  pcVar1 = *(code **)(*(long *)param_1 + 0x30);
  if ((pcVar1 == (code *)0x0) || (*(long *)(*(long *)param_1 + 0x38) == 0)) {
    ERR_new();
    ERR_set_debug("crypto/ui/ui_lib.c",0x186,"UI_dup_user_data");
    ERR_set_error(0x28,0x70,0);
  }
  else {
    user_data = (void *)(*pcVar1)();
    if (user_data != (void *)0x0) {
      UI_add_user_data(param_1,user_data);
      *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 2;
      return 0;
    }
    ERR_new();
    ERR_set_debug("crypto/ui/ui_lib.c",0x18c,"UI_dup_user_data");
    ERR_set_error(0x28,0x80028,0);
  }
  return 0xffffffff;
}



void * UI_get0_user_data(UI *ui)

{
  return *(void **)(ui + 0x10);
}



int UI_process(UI *ui)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  code *pcVar4;
  char *pcVar5;
  
  if ((*(code **)(*(long *)ui + 8) == (code *)0x0) ||
     (iVar1 = (**(code **)(*(long *)ui + 8))(), 0 < iVar1)) {
    if (((byte)ui[0x29] & 1) != 0) {
      ERR_print_errors_cb(print_error,ui);
    }
    uVar3 = *(undefined8 *)(ui + 8);
    iVar1 = 0;
    while( true ) {
      iVar2 = OPENSSL_sk_num(uVar3);
      if (iVar2 <= iVar1) break;
      pcVar4 = *(code **)(*(long *)ui + 0x10);
      uVar3 = *(undefined8 *)(ui + 8);
      if (pcVar4 != (code *)0x0) {
        uVar3 = OPENSSL_sk_value(uVar3,iVar1);
        iVar2 = (*pcVar4)(ui,uVar3);
        if (iVar2 < 1) {
          pcVar5 = "writing strings";
          iVar1 = -1;
          goto LAB_00100ea4;
        }
        uVar3 = *(undefined8 *)(ui + 8);
      }
      iVar1 = iVar1 + 1;
    }
    pcVar4 = *(code **)(*(long *)ui + 0x18);
    if (pcVar4 != (code *)0x0) {
      iVar1 = (*pcVar4)(ui);
      if (iVar1 == -1) {
LAB_00100ee8:
        *(uint *)(ui + 0x28) = *(uint *)(ui + 0x28) & 0xfffffffe;
        pcVar4 = *(code **)(*(long *)ui + 0x28);
        if (pcVar4 == (code *)0x0) {
          return -2;
        }
LAB_00100ef8:
        iVar1 = (*pcVar4)(ui);
        if (0 < iVar1) {
          return -2;
        }
        pcVar5 = "processing";
        goto LAB_00100f40;
      }
      if (iVar1 == 0) {
        pcVar5 = "flushing";
        pcVar4 = *(code **)(*(long *)ui + 0x28);
        goto joined_r0x00100f39;
      }
    }
    for (iVar1 = 0; iVar2 = OPENSSL_sk_num(*(undefined8 *)(ui + 8)), iVar1 < iVar2;
        iVar1 = iVar1 + 1) {
      pcVar4 = *(code **)(*(long *)ui + 0x20);
      if (pcVar4 == (code *)0x0) {
        pcVar4 = *(code **)(*(long *)ui + 0x28);
        *(uint *)(ui + 0x28) = *(uint *)(ui + 0x28) & 0xfffffffe;
        if (pcVar4 == (code *)0x0) {
          return -2;
        }
        goto LAB_00100ef8;
      }
      uVar3 = OPENSSL_sk_value(*(undefined8 *)(ui + 8),iVar1);
      iVar2 = (*pcVar4)(ui,uVar3);
      if (iVar2 == -1) goto LAB_00100ee8;
      if (iVar2 == 0) {
        pcVar5 = "reading strings";
        iVar1 = -1;
        goto LAB_00100ea4;
      }
    }
    pcVar5 = (char *)0x0;
    iVar1 = 0;
LAB_00100ea4:
    if ((*(code **)(*(long *)ui + 0x28) == (code *)0x0) ||
       (iVar2 = (**(code **)(*(long *)ui + 0x28))(ui), 0 < iVar2)) {
      if (iVar1 != -1) {
        return 0;
      }
    }
    else if (pcVar5 == (char *)0x0) {
      pcVar5 = "closing session";
    }
  }
  else {
    pcVar5 = "opening session";
    pcVar4 = *(code **)(*(long *)ui + 0x28);
joined_r0x00100f39:
    if (pcVar4 != (code *)0x0) {
      (*pcVar4)(ui);
    }
  }
LAB_00100f40:
  ERR_new();
  ERR_set_debug("crypto/ui/ui_lib.c",0x210,"UI_process");
  ERR_set_error(0x28,0x6b,"while %s",pcVar5);
  return -1;
}



int UI_ctrl(UI *ui,int cmd,long i,void *p,f *f)

{
  uint uVar1;
  uint uVar2;
  
  if (ui == (UI *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/ui/ui_lib.c",0x217,"UI_ctrl");
    ERR_set_error(0x28,0xc0102,0);
  }
  else {
    if (cmd == 1) {
      uVar1 = *(uint *)(ui + 0x28);
      uVar2 = uVar1 | 0x100;
      if (i == 0) {
        uVar2 = uVar1 & 0xfffffeff;
      }
      *(uint *)(ui + 0x28) = uVar2;
      return uVar1 >> 8 & 1;
    }
    if (cmd == 2) {
      return *(uint *)(ui + 0x28) & 1;
    }
    ERR_new();
    ERR_set_debug("crypto/ui/ui_lib.c",0x229,"UI_ctrl");
    ERR_set_error(0x28,0x6a,0);
  }
  return -1;
}



int UI_set_ex_data(UI *r,int idx,void *arg)

{
  int iVar1;
  
  iVar1 = CRYPTO_set_ex_data((CRYPTO_EX_DATA *)(r + 0x18),idx,arg);
  return iVar1;
}



void * UI_get_ex_data(UI *r,int idx)

{
  void *pvVar1;
  
  pvVar1 = CRYPTO_get_ex_data((CRYPTO_EX_DATA *)(r + 0x18),idx);
  return pvVar1;
}



UI_METHOD * UI_get_method(UI *ui)

{
  return *(UI_METHOD **)ui;
}



UI_METHOD * UI_set_method(UI *ui,UI_METHOD *meth)

{
  *(UI_METHOD **)ui = meth;
  return meth;
}



UI_METHOD * UI_create_method(char *name)

{
  int iVar1;
  UI_METHOD *obj;
  char *pcVar2;
  void *ptr;
  
  obj = (UI_METHOD *)CRYPTO_zalloc(0x58,"crypto/ui/ui_lib.c",0x246);
  if (obj == (UI_METHOD *)0x0) goto LAB_0010118a;
  pcVar2 = CRYPTO_strdup(name,"crypto/ui/ui_lib.c",0x247);
  *(char **)obj = pcVar2;
  if (pcVar2 == (char *)0x0) {
LAB_001011a8:
    ptr = (void *)0x0;
  }
  else {
    iVar1 = CRYPTO_new_ex_data(0xe,obj,(CRYPTO_EX_DATA *)(obj + 0x48));
    if (iVar1 != 0) {
      return obj;
    }
    if (*(long *)obj == 0) goto LAB_001011a8;
    ERR_new();
    ERR_set_debug("crypto/ui/ui_lib.c",0x251,"UI_create_method");
    ERR_set_error(0x28,0x8000f,0);
    ptr = *(void **)obj;
  }
  CRYPTO_free(ptr);
LAB_0010118a:
  CRYPTO_free(obj);
  return (UI_METHOD *)0x0;
}



void UI_destroy_method(UI_METHOD *ui_method)

{
  if (ui_method != (UI_METHOD *)0x0) {
    CRYPTO_free_ex_data(0xe,ui_method,(CRYPTO_EX_DATA *)(ui_method + 0x48));
    CRYPTO_free(*(void **)ui_method);
    *(undefined8 *)ui_method = 0;
    CRYPTO_free(ui_method);
    return;
  }
  return;
}



int UI_method_set_opener(UI_METHOD *method,opener *opener)

{
  if (method != (UI_METHOD *)0x0) {
    *(opener **)(method + 8) = opener;
    return 0;
  }
  return -1;
}



int UI_method_set_writer(UI_METHOD *method,writer *writer)

{
  if (method != (UI_METHOD *)0x0) {
    *(writer **)(method + 0x10) = writer;
    return 0;
  }
  return -1;
}



int UI_method_set_flusher(UI_METHOD *method,flusher *flusher)

{
  if (method != (UI_METHOD *)0x0) {
    *(flusher **)(method + 0x18) = flusher;
    return 0;
  }
  return -1;
}



int UI_method_set_reader(UI_METHOD *method,reader *reader)

{
  if (method != (UI_METHOD *)0x0) {
    *(reader **)(method + 0x20) = reader;
    return 0;
  }
  return -1;
}



int UI_method_set_closer(UI_METHOD *method,closer *closer)

{
  if (method != (UI_METHOD *)0x0) {
    *(closer **)(method + 0x28) = closer;
    return 0;
  }
  return -1;
}



undefined8 UI_method_set_data_duplicator(long param_1,undefined8 param_2,undefined8 param_3)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x30) = param_2;
    *(undefined8 *)(param_1 + 0x38) = param_3;
    return 0;
  }
  return 0xffffffff;
}



int UI_method_set_prompt_constructor(UI_METHOD *method,prompt_constructor *prompt_constructor)

{
  if (method != (UI_METHOD *)0x0) {
    *(prompt_constructor **)(method + 0x40) = prompt_constructor;
    return 0;
  }
  return -1;
}



void UI_method_set_ex_data(long param_1,int param_2,void *param_3)

{
  CRYPTO_set_ex_data((CRYPTO_EX_DATA *)(param_1 + 0x48),param_2,param_3);
  return;
}



int UI_method_get_opener(UI *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 != (UI *)0x0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 8);
  }
  return iVar1;
}



int UI_method_get_writer(UI *param_1,UI_STRING *param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 != (UI *)0x0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
  }
  return iVar1;
}



int UI_method_get_flusher(UI *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 != (UI *)0x0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x18);
  }
  return iVar1;
}



int UI_method_get_reader(UI *param_1,UI_STRING *param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 != (UI *)0x0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  }
  return iVar1;
}



int UI_method_get_closer(UI *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 != (UI *)0x0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x28);
  }
  return iVar1;
}



char * UI_method_get_prompt_constructor(UI *param_1,char *param_2,char *param_3)

{
  char *pcVar1;
  
  pcVar1 = (char *)0x0;
  if (param_1 != (UI *)0x0) {
    pcVar1 = *(char **)(param_1 + 0x40);
  }
  return pcVar1;
}



undefined8 UI_method_get_data_duplicator(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x30);
  }
  return uVar1;
}



undefined8 UI_method_get_data_destructor(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x38);
  }
  return uVar1;
}



void UI_method_get_ex_data(long param_1,int param_2)

{
  CRYPTO_get_ex_data((CRYPTO_EX_DATA *)(param_1 + 0x48),param_2);
  return;
}



UI_string_types UI_get_string_type(UI_STRING *uis)

{
  return *(UI_string_types *)uis;
}



int UI_get_input_flags(UI_STRING *uis)

{
  return *(int *)(uis + 0x10);
}



char * UI_get0_output_string(UI_STRING *uis)

{
  return *(char **)(uis + 8);
}



char * UI_get0_action_string(UI_STRING *uis)

{
  char *pcVar1;
  
  pcVar1 = (char *)0x0;
  if (*(int *)uis == 3) {
    pcVar1 = *(char **)(uis + 0x28);
  }
  return pcVar1;
}



char * UI_get0_result_string(UI_STRING *uis)

{
  char *pcVar1;
  
  pcVar1 = (char *)0x0;
  if (*(int *)uis - 1U < 2) {
    pcVar1 = *(char **)(uis + 0x18);
  }
  return pcVar1;
}



char * UI_get0_result(UI *ui,int i)

{
  int iVar1;
  UI_STRING *uis;
  char *pcVar2;
  
  if (i < 0) {
    ERR_new();
    ERR_set_debug("crypto/ui/ui_lib.c",0x19e,"UI_get0_result");
    ERR_set_error(0x28,0x67,0);
    return (char *)0x0;
  }
  iVar1 = OPENSSL_sk_num(*(undefined8 *)(ui + 8));
  if (i < iVar1) {
    uis = (UI_STRING *)OPENSSL_sk_value(*(undefined8 *)(ui + 8),i);
    pcVar2 = UI_get0_result_string(uis);
    return pcVar2;
  }
  ERR_new();
  ERR_set_debug("crypto/ui/ui_lib.c",0x1a2,"UI_get0_result");
  ERR_set_error(0x28,0x66,0);
  return (char *)0x0;
}



int UI_get_result_string_length(int *param_1)

{
  if (*param_1 - 1U < 2) {
    return param_1[8];
  }
  return -1;
}



undefined8 UI_get_result_length(long param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_2 < 0) {
    ERR_new();
    ERR_set_debug("crypto/ui/ui_lib.c",0x1ab,"UI_get_result_length");
    ERR_set_error(0x28,0x67,0);
  }
  else {
    iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 8));
    if (param_2 < iVar1) {
      uVar2 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 8),param_2);
      uVar2 = UI_get_result_string_length(uVar2);
      return uVar2;
    }
    ERR_new();
    ERR_set_debug("crypto/ui/ui_lib.c",0x1af,"UI_get_result_length");
    ERR_set_error(0x28,0x66,0);
  }
  return 0xffffffff;
}



char * UI_get0_test_string(UI_STRING *uis)

{
  char *pcVar1;
  
  pcVar1 = (char *)0x0;
  if (*(int *)uis == 2) {
    pcVar1 = *(char **)(uis + 0x30);
  }
  return pcVar1;
}



int UI_get_result_minsize(UI_STRING *uis)

{
  if (*(int *)uis - 1U < 2) {
    return *(int *)(uis + 0x28);
  }
  return -1;
}



int UI_get_result_maxsize(UI_STRING *uis)

{
  if (*(int *)uis - 1U < 2) {
    return *(int *)(uis + 0x2c);
  }
  return -1;
}



undefined8 UI_set_result_ex(long param_1,uint *param_2,char *param_3,int param_4)

{
  uint uVar1;
  char *__s;
  uint uVar2;
  char *pcVar3;
  char *pcVar4;
  char cVar5;
  undefined8 uVar6;
  size_t __n;
  
  uVar1 = *param_2;
  uVar2 = *(uint *)(param_1 + 0x28) & 0xfffffffe;
  *(uint *)(param_1 + 0x28) = uVar2;
  if (uVar1 < 3) {
    if (uVar1 == 0) {
      return 0;
    }
    if (param_4 < (int)param_2[10]) {
      *(uint *)(param_1 + 0x28) = uVar2 | 1;
      ERR_new();
      ERR_set_debug("crypto/ui/ui_lib.c",0x36b,"UI_set_result_ex");
      ERR_set_error(0x28,0x65,"You must type in %d to %d characters",param_2[10],param_2[0xb]);
      return 0xffffffff;
    }
    if ((int)param_2[0xb] < param_4) {
      *(uint *)(param_1 + 0x28) = uVar2 | 1;
      ERR_new();
      ERR_set_debug("crypto/ui/ui_lib.c",0x373,"UI_set_result_ex");
      ERR_set_error(0x28,100,"You must type in %d to %d characters",param_2[10],param_2[0xb]);
      return 0xffffffff;
    }
    if (*(void **)(param_2 + 6) != (void *)0x0) {
      __n = (size_t)param_4;
      memcpy(*(void **)(param_2 + 6),param_3,__n);
      if (param_4 <= (int)param_2[0xb]) {
        *(undefined1 *)(*(long *)(param_2 + 6) + __n) = 0;
      }
      *(size_t *)(param_2 + 8) = __n;
      return 0;
    }
    ERR_new();
    uVar6 = 0x37b;
  }
  else {
    if (uVar1 != 3) {
      return 0;
    }
    if (*(undefined1 **)(param_2 + 6) != (undefined1 *)0x0) {
      **(undefined1 **)(param_2 + 6) = 0;
      cVar5 = *param_3;
      if (cVar5 == '\0') {
        return 0;
      }
      __s = *(char **)(param_2 + 0xc);
      while( true ) {
        pcVar4 = strchr(__s,(int)cVar5);
        if (pcVar4 != (char *)0x0) {
          **(char **)(param_2 + 6) = *__s;
          return 0;
        }
        pcVar4 = *(char **)(param_2 + 0xe);
        pcVar3 = strchr(pcVar4,(int)cVar5);
        if (pcVar3 != (char *)0x0) break;
        cVar5 = param_3[1];
        param_3 = param_3 + 1;
        if (cVar5 == '\0') {
          return 0;
        }
      }
      **(char **)(param_2 + 6) = *pcVar4;
      return 0;
    }
    ERR_new();
    uVar6 = 0x389;
  }
  ERR_set_debug("crypto/ui/ui_lib.c",uVar6,"UI_set_result_ex");
  ERR_set_error(0x28,0x69,0);
  return 0xffffffff;
}



int UI_set_result(UI *ui,UI_STRING *uis,char *result)

{
  int iVar1;
  size_t sVar2;
  
  sVar2 = strlen(result);
  iVar1 = UI_set_result_ex(ui,uis,result,sVar2 & 0xffffffff);
  return iVar1;
}


