
void self_test_setparams(undefined8 *param_1)

{
  long lVar1;
  long in_FS_OFFSET;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1[3] == 0) {
    lVar1 = 0;
  }
  else {
    OSSL_PARAM_construct_utf8_string(&local_58,"st-phase",*param_1,0);
    param_1[4] = local_58;
    param_1[5] = uStack_50;
    param_1[6] = local_48;
    param_1[7] = uStack_40;
    param_1[8] = local_38;
    OSSL_PARAM_construct_utf8_string(&local_58,"st-type",param_1[1],0);
    param_1[9] = local_58;
    param_1[10] = uStack_50;
    param_1[0xb] = local_48;
    param_1[0xc] = uStack_40;
    param_1[0xd] = local_38;
    OSSL_PARAM_construct_utf8_string(&local_58,"st-desc",param_1[2],0);
    param_1[0xe] = local_58;
    param_1[0xf] = uStack_50;
    param_1[0x10] = local_48;
    param_1[0x11] = uStack_40;
    param_1[0x12] = local_38;
    lVar1 = 3;
  }
  OSSL_PARAM_construct_end(&local_58);
  param_1[lVar1 * 5 + 4] = local_58;
  param_1[lVar1 * 5 + 5] = uStack_50;
  param_1[lVar1 * 5 + 6] = local_48;
  param_1[lVar1 * 5 + 7] = uStack_40;
  param_1[lVar1 * 5 + 8] = local_38;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void ossl_self_test_set_callback_new(void)

{
  CRYPTO_zalloc(0x10,"crypto/self_test_core.c",0x26);
  return;
}



void ossl_self_test_set_callback_free(void *param_1)

{
  CRYPTO_free(param_1);
  return;
}



void OSSL_SELF_TEST_set_callback(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)ossl_lib_ctx_get_data(param_1,0xc);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_2;
    puVar1[1] = param_3;
  }
  return;
}



void OSSL_SELF_TEST_get_callback(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)ossl_lib_ctx_get_data(param_1,0xc);
  if (param_2 == (undefined8 *)0x0) {
    if (param_3 == (undefined8 *)0x0) {
      return;
    }
    if (puVar1 == (undefined8 *)0x0) {
      uVar2 = 0;
      goto LAB_001001d4;
    }
  }
  else {
    if (puVar1 == (undefined8 *)0x0) {
      *param_2 = 0;
      if (param_3 == (undefined8 *)0x0) {
        return;
      }
      uVar2 = 0;
      goto LAB_001001d4;
    }
    *param_2 = *puVar1;
    if (param_3 == (undefined8 *)0x0) {
      return;
    }
  }
  uVar2 = puVar1[1];
LAB_001001d4:
  *param_3 = uVar2;
  return;
}



undefined8 * OSSL_SELF_TEST_new(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)CRYPTO_zalloc(200,"crypto/self_test_core.c",0x5f);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[3] = param_1;
    puVar1[0x18] = param_2;
    puVar1[2] = &_LC4;
    *puVar1 = &_LC4;
    puVar1[1] = &_LC4;
    self_test_setparams(puVar1);
  }
  return puVar1;
}



void OSSL_SELF_TEST_free(void *param_1)

{
  CRYPTO_free(param_1);
  return;
}



void OSSL_SELF_TEST_onbegin(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  if (param_1[3] != 0) {
    param_1[1] = param_2;
    *param_1 = "Start";
    param_1[2] = param_3;
    self_test_setparams();
                    /* WARNING: Could not recover jumptable at 0x001002eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)param_1[3])(param_1 + 4,param_1[0x18]);
    return;
  }
  return;
}



void OSSL_SELF_TEST_onend(undefined8 *param_1,int param_2)

{
  undefined *puVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    if (param_1[3] != 0) {
      puVar1 = &_LC7;
      if (param_2 == 1) {
        puVar1 = &_LC6;
      }
      *param_1 = puVar1;
      self_test_setparams();
      (*(code *)param_1[3])(param_1 + 4,param_1[0x18]);
      param_1[2] = &_LC8;
      *param_1 = &_LC8;
      param_1[1] = &_LC8;
    }
    return;
  }
  return;
}



undefined8 OSSL_SELF_TEST_oncorrupt_byte(undefined8 *param_1,byte *param_2)

{
  int iVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    return 0;
  }
  if (param_1[3] != 0) {
    *param_1 = "Corrupt";
    self_test_setparams();
    iVar1 = (*(code *)param_1[3])(param_1 + 4,param_1[0x18]);
    if (iVar1 == 0) {
      *param_2 = *param_2 ^ 1;
      return 1;
    }
  }
  return 0;
}


