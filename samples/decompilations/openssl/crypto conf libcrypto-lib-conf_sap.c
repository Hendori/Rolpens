
void OPENSSL_config(char *config_name)

{
  long in_FS_OFFSET;
  undefined8 local_28;
  char *pcStack_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = 0;
  pcStack_20 = (char *)0x0;
  local_18 = 0;
  if (config_name != (char *)0x0) {
    pcStack_20 = strdup(config_name);
  }
  local_18 = 0x32;
  OPENSSL_init_crypto(0x40,&local_28);
  free(pcStack_20);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 ossl_config_int(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (openssl_configured == 0) {
    if (param_1 == (undefined8 *)0x0) {
      uVar3 = 0;
      uVar2 = 0;
      uVar4 = 0x32;
    }
    else {
      uVar2 = *param_1;
      uVar3 = param_1[1];
      uVar4 = param_1[2];
    }
    uVar1 = OSSL_LIB_CTX_get0_global_default();
    uVar2 = CONF_modules_load_file_ex(uVar1,uVar2,uVar3,uVar4);
    openssl_configured = 1;
    return uVar2;
  }
  return 1;
}



void ossl_no_config_int(void)

{
  openssl_configured = 1;
  return;
}


