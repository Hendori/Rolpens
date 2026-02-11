
undefined4 log_get_verbosity(void)

{
  return verbosity;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void trace_log_message(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                      int param_9,undefined8 param_10,int param_11,char *param_12,
                      undefined8 param_13,undefined8 param_14)

{
  char in_AL;
  int iVar1;
  BIO_METHOD *type;
  BIO *pBVar2;
  BIO *bio;
  long in_FS_OFFSET;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined1 *puStack_160;
  undefined1 *local_158;
  undefined8 local_150;
  undefined1 *puStack_148;
  undefined1 *local_140;
  char local_138 [88];
  long local_e0;
  undefined1 local_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_38;
  
  if (in_AL != '\0') {
    local_a8 = param_1;
    local_98 = param_2;
    local_88 = param_3;
    local_78 = param_4;
    local_68 = param_5;
    local_58 = param_6;
    local_48 = param_7;
    local_38 = param_8;
  }
  local_e0 = *(long *)(in_FS_OFFSET + 0x28);
  puStack_160 = &stack0x00000008;
  local_168 = 0x20;
  local_158 = local_d8;
  uStack_164 = 0x30;
  local_b8 = param_13;
  local_b0 = param_14;
  if (-1 < param_9) {
    iVar1 = OSSL_trace_enabled(param_9);
    if (iVar1 != 0) {
      pBVar2 = (BIO *)OSSL_trace_begin(param_9);
      local_150 = CONCAT44(uStack_164,local_168);
      puStack_148 = puStack_160;
      local_140 = local_158;
      BIO_vprintf(pBVar2,param_12,&local_150);
      BIO_printf(pBVar2,"\n");
      OSSL_trace_end(param_9,pBVar2);
    }
  }
  if (param_11 <= verbosity) {
    type = (BIO_METHOD *)BIO_f_prefix();
    pBVar2 = BIO_new(type);
    BIO_snprintf(local_138,0x50,"%s: ",param_10);
    BIO_ctrl(pBVar2,0x4f,0,local_138);
    bio = BIO_push(pBVar2,_bio_err);
    BIO_vprintf(bio,param_12,&local_168);
    BIO_printf(bio,"\n");
    BIO_ctrl(bio,0xb,0,(void *)0x0);
    BIO_pop(pBVar2);
    BIO_free(pBVar2);
  }
  if (local_e0 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 log_set_verbosity(undefined8 param_1,uint param_2)

{
  if (param_2 < 9) {
    verbosity = param_2;
    return 1;
  }
  trace_log_message(0xffffffff,param_1,3,"Invalid verbosity level %d",param_2);
  return 0;
}


