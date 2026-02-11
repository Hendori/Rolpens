
void ossl_pw_clear_passphrase_cache(long param_1)

{
  CRYPTO_clear_free(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                    "crypto/passphrase.c",0x1d);
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}



void ossl_pw_clear_passphrase_data(undefined1 (*param_1) [16])

{
  if (param_1 != (undefined1 (*) [16])0x0) {
    if (*(int *)*param_1 == 1) {
      CRYPTO_clear_free(*(undefined8 *)(*param_1 + 8),*(undefined8 *)param_1[1],
                        "crypto/passphrase.c",0x14);
    }
    ossl_pw_clear_passphrase_cache(param_1);
    *param_1 = (undefined1  [16])0x0;
    param_1[1] = (undefined1  [16])0x0;
    param_1[2] = (undefined1  [16])0x0;
    return;
  }
  return;
}



undefined8 ossl_pw_set_passphrase(undefined4 *param_1,long param_2,long param_3)

{
  void *pvVar1;
  
  if ((param_1 == (undefined4 *)0x0) || (param_2 == 0)) {
    ERR_new();
    ERR_set_debug("crypto/passphrase.c",0x26,"ossl_pw_set_passphrase");
    ERR_set_error(0xf,0xc0102,0);
  }
  else {
    ossl_pw_clear_passphrase_data();
    *param_1 = 1;
    if (param_3 == 0) {
      pvVar1 = CRYPTO_malloc(1,"crypto/passphrase.c",0x2d);
    }
    else {
      pvVar1 = (void *)CRYPTO_memdup(param_2,param_3,"crypto/passphrase.c",0x2c);
    }
    *(void **)(param_1 + 2) = pvVar1;
    if (pvVar1 != (void *)0x0) {
      *(long *)(param_1 + 4) = param_3;
      return 1;
    }
  }
  return 0;
}



undefined8 ossl_pw_set_pem_password_cb(undefined4 *param_1,long param_2,undefined8 param_3)

{
  if ((param_1 != (undefined4 *)0x0) && (param_2 != 0)) {
    ossl_pw_clear_passphrase_data();
    *param_1 = 2;
    *(long *)(param_1 + 2) = param_2;
    *(undefined8 *)(param_1 + 4) = param_3;
    return 1;
  }
  ERR_new();
  ERR_set_debug("crypto/passphrase.c",0x38,"ossl_pw_set_pem_password_cb");
  ERR_set_error(0xf,0xc0102,0);
  return 0;
}



undefined8 ossl_pw_set_ossl_passphrase_cb(undefined4 *param_1,long param_2,undefined8 param_3)

{
  if ((param_1 != (undefined4 *)0x0) && (param_2 != 0)) {
    ossl_pw_clear_passphrase_data();
    *param_1 = 3;
    *(long *)(param_1 + 2) = param_2;
    *(undefined8 *)(param_1 + 4) = param_3;
    return 1;
  }
  ERR_new();
  ERR_set_debug("crypto/passphrase.c",0x46,"ossl_pw_set_ossl_passphrase_cb");
  ERR_set_error(0xf,0xc0102,0);
  return 0;
}



undefined8 ossl_pw_set_ui_method(undefined4 *param_1,long param_2,undefined8 param_3)

{
  if ((param_1 != (undefined4 *)0x0) && (param_2 != 0)) {
    ossl_pw_clear_passphrase_data();
    *param_1 = 4;
    *(long *)(param_1 + 2) = param_2;
    *(undefined8 *)(param_1 + 4) = param_3;
    return 1;
  }
  ERR_new();
  ERR_set_debug("crypto/passphrase.c",0x54,"ossl_pw_set_ui_method");
  ERR_set_error(0xf,0xc0102,0);
  return 0;
}



undefined8 ossl_pw_enable_passphrase_caching(long param_1)

{
  *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) | 1;
  return 1;
}



undefined8 ossl_pw_disable_passphrase_caching(long param_1)

{
  *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) & 0xfe;
  return 1;
}



int ossl_pw_get_passphrase
              (void *param_1,ulong param_2,ulong *param_3,undefined8 param_4,int param_5,
              int *param_6)

{
  long lVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  void *pvVar5;
  char *pcVar6;
  UI *ui;
  char *result_buf;
  UI_METHOD *meth;
  undefined8 uVar7;
  void *local_58;
  char *local_50;
  UI_METHOD *local_48;
  
  if (*param_6 == 1) {
    pvVar5 = *(void **)(param_6 + 2);
    if (pvVar5 != (void *)0x0) {
      uVar4 = *(ulong *)(param_6 + 4);
      goto LAB_00100331;
    }
  }
  else {
    if (((*(byte *)(param_6 + 6) & 1) != 0) &&
       (pvVar5 = *(void **)(param_6 + 8), pvVar5 != (void *)0x0)) {
      uVar4 = *(ulong *)(param_6 + 10);
LAB_00100331:
      if (uVar4 < param_2) {
        param_2 = uVar4;
      }
      memcpy(param_1,pvVar5,param_2);
      *param_3 = param_2;
      return 1;
    }
    if (*param_6 == 3) {
      iVar2 = (**(code **)(param_6 + 2))
                        (param_1,param_2,param_3,param_4,*(undefined8 *)(param_6 + 4));
      goto LAB_0010037b;
    }
  }
  pcVar6 = (char *)OSSL_PARAM_locate_const(param_4,&_LC1);
  if (pcVar6 != (char *)0x0) {
    if (*(int *)(pcVar6 + 8) != 4) {
      ERR_new();
      ERR_set_debug("crypto/passphrase.c",0xfa,"ossl_pw_get_passphrase");
      ERR_set_error(0xf,0x80106,"Prompt info data type incorrect");
      return 0;
    }
    pcVar6 = *(char **)(pcVar6 + 0x10);
  }
  if (*param_6 == 2) {
    meth = (UI_METHOD *)UI_UTIL_wrap_read_pem_callback(*(undefined8 *)(param_6 + 2),param_5);
    local_58 = *(void **)(param_6 + 4);
    local_48 = meth;
    if (meth == (UI_METHOD *)0x0) {
      ERR_new();
      ERR_set_debug("crypto/passphrase.c",0x10a,"ossl_pw_get_passphrase");
      ERR_set_error(0xf,0x80028,0);
      return 0;
    }
  }
  else {
    if (*param_6 != 4) {
LAB_00100432:
      ERR_new();
      ERR_set_debug("crypto/passphrase.c",0x113,"ossl_pw_get_passphrase");
      ERR_set_error(0xf,0x80106,"No password method specified");
      return 0;
    }
    local_58 = *(void **)(param_6 + 4);
    meth = *(UI_METHOD **)(param_6 + 2);
    local_48 = (UI_METHOD *)0x0;
    if (meth == (UI_METHOD *)0x0) goto LAB_00100432;
  }
  if ((param_2 == 0 || param_3 == (ulong *)0x0) || (param_1 == (void *)0x0)) {
    ERR_new();
    ERR_set_debug("crypto/passphrase.c",0x7e,"do_ui_passphrase");
    uVar7 = 0xc0102;
LAB_00100508:
    ERR_set_error(0xf,uVar7,0);
    UI_destroy_method(local_48);
    return 0;
  }
  ui = UI_new();
  if (ui == (UI *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/passphrase.c",0x83,"do_ui_passphrase");
    uVar7 = 0x80028;
    goto LAB_00100508;
  }
  UI_set_method(ui,meth);
  if (local_58 != (void *)0x0) {
    UI_add_user_data(ui,local_58);
  }
  pcVar6 = UI_construct_prompt(ui,"pass phrase",pcVar6);
  lVar1 = param_2 + 1;
  if (pcVar6 == (char *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/passphrase.c",0x90,"do_ui_passphrase");
    ERR_set_error(0xf,0x80028,0);
LAB_00100823:
    iVar2 = 0;
    result_buf = (char *)0x0;
    local_50 = (char *)0x0;
  }
  else {
    local_50 = (char *)CRYPTO_zalloc(lVar1,"crypto/passphrase.c",0x95);
    if (local_50 == (char *)0x0) goto LAB_00100823;
    iVar2 = UI_add_input_string(ui,pcVar6,2,local_50,0,(int)param_2);
    if (iVar2 + -1 < 0) {
      ERR_new();
      iVar2 = 0;
      result_buf = (char *)0x0;
      ERR_set_debug("crypto/passphrase.c",0x9d,"do_ui_passphrase");
      ERR_set_error(0xf,0x80028,0);
    }
    else {
      if (param_5 == 0) {
        result_buf = (char *)0x0;
LAB_00100630:
        iVar3 = UI_process(ui);
        if (iVar3 == -2) {
          ERR_new();
          ERR_set_debug("crypto/passphrase.c",0xb2,"do_ui_passphrase");
          ERR_set_error(0xf,0x80109,0);
        }
        else {
          if (iVar3 == -1) {
            ERR_new();
            uVar7 = 0xb5;
            goto LAB_00100781;
          }
          iVar3 = UI_get_result_length(ui,iVar2 + -1);
          if (-1 < iVar3) {
            iVar2 = 1;
            *param_3 = (long)iVar3;
            memcpy(param_1,local_50,(long)iVar3);
            goto LAB_00100716;
          }
          ERR_new();
          ERR_set_debug("crypto/passphrase.c",0xba,"do_ui_passphrase");
          ERR_set_error(0xf,0x80028,0);
        }
      }
      else {
        result_buf = (char *)CRYPTO_zalloc(lVar1,"crypto/passphrase.c",0xa3);
        if (result_buf != (char *)0x0) {
          iVar3 = UI_add_verify_string(ui,pcVar6,2,result_buf,0,(int)param_2,local_50);
          if (0 < iVar3) goto LAB_00100630;
          ERR_new();
          uVar7 = 0xab;
LAB_00100781:
          iVar2 = 0;
          ERR_set_debug("crypto/passphrase.c",uVar7,"do_ui_passphrase");
          ERR_set_error(0xf,0x80028,0);
          goto LAB_00100716;
        }
      }
      iVar2 = 0;
    }
  }
LAB_00100716:
  CRYPTO_clear_free(result_buf,lVar1,"crypto/passphrase.c",0xc4);
  CRYPTO_clear_free(local_50,lVar1,"crypto/passphrase.c",0xc5);
  CRYPTO_free(pcVar6);
  UI_free(ui);
  UI_destroy_method(local_48);
LAB_0010037b:
  if (iVar2 == 0) {
    return 0;
  }
  if ((*(byte *)(param_6 + 6) & 1) != 0) {
    pvVar5 = *(void **)(param_6 + 8);
    uVar4 = *param_3;
    if ((pvVar5 == (void *)0x0) || (*(ulong *)(param_6 + 10) < uVar4)) {
      pvVar5 = (void *)CRYPTO_clear_realloc
                                 (pvVar5,*(ulong *)(param_6 + 10),uVar4 + 1,"crypto/passphrase.c",
                                  0x122);
      if (pvVar5 == (void *)0x0) {
        OPENSSL_cleanse(param_1,*param_3);
        return 0;
      }
      *(void **)(param_6 + 8) = pvVar5;
      uVar4 = *param_3;
    }
    memcpy(pvVar5,param_1,uVar4);
    *(undefined1 *)(*(long *)(param_6 + 8) + *param_3) = 0;
    *(ulong *)(param_6 + 10) = *param_3;
    return iVar2;
  }
  return iVar2;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong ossl_pw_pem_password(undefined8 param_1,int param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  ulong uVar2;
  long in_FS_OFFSET;
  ulong local_70;
  undefined *local_68;
  undefined4 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined1 local_28 [16];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = 0;
  local_68 = &_LC1;
  local_50 = __LC5;
  uStack_48 = _UNK_00100bb8;
  local_60 = 4;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_58 = &_LC6;
  local_28 = (undefined1  [16])0x0;
  iVar1 = ossl_pw_get_passphrase(param_1,(long)param_2,&local_70,&local_68,param_3,param_4);
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = local_70 & 0xffffffff;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong ossl_pw_pvk_password(undefined8 param_1,int param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  ulong uVar2;
  long in_FS_OFFSET;
  ulong local_70;
  undefined *local_68;
  undefined4 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined1 local_28 [16];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = 0;
  local_68 = &_LC1;
  local_50 = __LC5;
  uStack_48 = _UNK_00100bb8;
  local_60 = 4;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_58 = &_LC8;
  local_28 = (undefined1  [16])0x0;
  iVar1 = ossl_pw_get_passphrase(param_1,(long)param_2,&local_70,&local_68,param_3,param_4);
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = local_70 & 0xffffffff;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void ossl_pw_passphrase_callback_enc(void)

{
  ossl_pw_get_passphrase();
  return;
}



void ossl_pw_passphrase_callback_dec(void)

{
  ossl_pw_get_passphrase();
  return;
}


