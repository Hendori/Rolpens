
undefined8 bio_core_new(undefined8 param_1)

{
  BIO_set_init(param_1,1);
  return 1;
}



bool bio_core_free(undefined8 *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = ossl_lib_ctx_get_data(*param_1,0x11);
  if (lVar2 != 0) {
    BIO_set_init(param_1,0);
    pcVar1 = *(code **)(lVar2 + 0x30);
    uVar3 = BIO_get_data(param_1);
    (*pcVar1)(uVar3);
  }
  return lVar2 != 0;
}



long bio_core_ctrl(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = ossl_lib_ctx_get_data(*param_1,0x11);
  if ((lVar3 == 0) || (pcVar1 = *(code **)(lVar3 + 0x20), pcVar1 == (code *)0x0)) {
    lVar3 = -1;
  }
  else {
    uVar4 = BIO_get_data(param_1);
    iVar2 = (*pcVar1)(uVar4,param_2,param_3,param_4);
    lVar3 = (long)iVar2;
  }
  return lVar3;
}



undefined8 bio_core_gets(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ossl_lib_ctx_get_data(*param_1,0x11);
  if ((lVar1 != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x10), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
    uVar2 = BIO_get_data(param_1);
                    /* WARNING: Could not recover jumptable at 0x00100130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)(uVar2,param_2,param_3);
    return uVar2;
  }
  return 0xffffffff;
}



undefined8 bio_core_puts(undefined8 *param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ossl_lib_ctx_get_data(*param_1,0x11);
  if ((lVar1 != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x18), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
    uVar2 = BIO_get_data(param_1);
                    /* WARNING: Could not recover jumptable at 0x0010018e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)(uVar2,param_2);
    return uVar2;
  }
  return 0xffffffff;
}



undefined8
bio_core_read_ex(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)ossl_lib_ctx_get_data(*param_1,0x11);
  if ((puVar1 != (undefined8 *)0x0) &&
     (UNRECOVERED_JUMPTABLE = (code *)*puVar1, UNRECOVERED_JUMPTABLE != (code *)0x0)) {
    uVar2 = BIO_get_data(param_1);
                    /* WARNING: Could not recover jumptable at 0x001001f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)(uVar2,param_2,param_3,param_4);
    return uVar2;
  }
  return 0;
}



undefined8
bio_core_write_ex(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *UNRECOVERED_JUMPTABLE;
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ossl_lib_ctx_get_data(*param_1,0x11);
  if ((lVar1 != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 8), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
    uVar2 = BIO_get_data(param_1);
                    /* WARNING: Could not recover jumptable at 0x00100262. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)(uVar2,param_2,param_3,param_4);
    return uVar2;
  }
  return 0;
}



void ossl_bio_core_globals_free(void *param_1)

{
  CRYPTO_free(param_1);
  return;
}



void ossl_bio_core_globals_new(void)

{
  CRYPTO_zalloc(0x38,"crypto/bio/bss_core.c",0x20);
  return;
}



undefined1 * BIO_s_core(void)

{
  return corebiometh;
}



BIO * BIO_new_from_core_bio(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  BIO *a;
  
  plVar2 = (long *)ossl_lib_ctx_get_data(param_1,0x11);
  if ((plVar2 != (long *)0x0) && ((plVar2[1] != 0 || (*plVar2 != 0)))) {
    uVar3 = BIO_s_core();
    a = (BIO *)BIO_new_ex(param_1,uVar3);
    if (a != (BIO *)0x0) {
      iVar1 = (*(code *)plVar2[5])(param_2);
      if (iVar1 != 0) {
        BIO_set_data(a,param_2);
        return a;
      }
      BIO_free(a);
    }
  }
  return (BIO *)0x0;
}



undefined8 ossl_bio_init_core(undefined8 param_1,int *param_2)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = (long *)ossl_lib_ctx_get_data(param_1,0x11);
  if (plVar2 == (long *)0x0) {
    return 0;
  }
  iVar1 = *param_2;
joined_r0x00100386:
  if (iVar1 == 0) {
    return 1;
  }
  switch(iVar1) {
  case 0x2a:
    if (*plVar2 == 0) {
      *plVar2 = *(long *)(param_2 + 2);
      iVar1 = param_2[4];
joined_r0x001004b8:
      param_2 = param_2 + 4;
      goto joined_r0x00100386;
    }
    break;
  case 0x2b:
    if (plVar2[1] == 0) {
      plVar2[1] = *(long *)(param_2 + 2);
      iVar1 = param_2[4];
      goto joined_r0x001004b8;
    }
    break;
  case 0x2c:
    if (plVar2[5] != 0) break;
    plVar2[5] = *(long *)(param_2 + 2);
    iVar1 = param_2[4];
joined_r0x00100407:
    param_2 = param_2 + 4;
    goto joined_r0x00100386;
  case 0x2d:
    if (plVar2[6] == 0) {
      plVar2[6] = *(long *)(param_2 + 2);
      iVar1 = param_2[4];
      goto joined_r0x00100407;
    }
    break;
  case 0x30:
    if (plVar2[3] == 0) {
      plVar2[3] = *(long *)(param_2 + 2);
      iVar1 = param_2[4];
      goto joined_r0x00100407;
    }
    break;
  case 0x31:
    if (plVar2[2] == 0) {
      plVar2[2] = *(long *)(param_2 + 2);
      iVar1 = param_2[4];
      goto joined_r0x00100407;
    }
    break;
  case 0x32:
    if (plVar2[4] != 0) break;
    plVar2[4] = *(long *)(param_2 + 2);
    iVar1 = param_2[4];
    goto joined_r0x001003e7;
  }
  iVar1 = param_2[4];
joined_r0x001003e7:
  param_2 = param_2 + 4;
  goto joined_r0x00100386;
}


