
undefined8 alg_module_init(CONF_IMODULE *param_1,CONF *param_2)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  stack_st_CONF_VALUE *psVar4;
  CONF_VALUE *value;
  undefined8 uVar5;
  int iVar6;
  long in_FS_OFFSET;
  int local_44;
  long local_40;
  
  iVar6 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar3 = CONF_imodule_get_value(param_1);
  psVar4 = NCONF_get_section(param_2,pcVar3);
  if (psVar4 == (stack_st_CONF_VALUE *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/evp/evp_cnf.c",0x21,"alg_module_init");
    ERR_set_error(6,0xa5,0);
    uVar5 = 0;
  }
  else {
    while( true ) {
      iVar2 = OPENSSL_sk_num(psVar4);
      if (iVar2 <= iVar6) break;
      value = (CONF_VALUE *)OPENSSL_sk_value(psVar4,iVar6);
      pcVar3 = value->name;
      iVar2 = strcmp(pcVar3,"fips_mode");
      if (iVar2 != 0) {
        iVar2 = strcmp(pcVar3,"default_properties");
        if (iVar2 == 0) {
          pcVar3 = value->value;
          uVar5 = NCONF_get0_libctx(param_2);
          iVar2 = evp_set_default_properties_int(uVar5,pcVar3,0,0);
          if (iVar2 != 0) goto LAB_00100092;
          ERR_new();
          uVar5 = 0x39;
LAB_0010010a:
          ERR_set_debug("crypto/evp/evp_cnf.c",uVar5,"alg_module_init");
          ERR_set_error(6,0xd1,0);
LAB_00100129:
          uVar5 = 0;
        }
        else {
          ERR_new();
          ERR_set_debug("crypto/evp/evp_cnf.c",0x3d,"alg_module_init");
          ERR_set_error(6,0xa9,"name=%s, value=%s",value->name,value->value);
          uVar5 = 0;
        }
        goto LAB_00100135;
      }
      iVar2 = X509V3_get_value_bool(value,&local_44);
      if (iVar2 == 0) goto LAB_00100129;
      bVar1 = 0 < local_44;
      uVar5 = NCONF_get0_libctx(param_2);
      iVar2 = evp_default_properties_enable_fips_int(uVar5,bVar1,0);
      if (iVar2 == 0) {
        ERR_new();
        uVar5 = 0x33;
        goto LAB_0010010a;
      }
LAB_00100092:
      iVar6 = iVar6 + 1;
    }
    uVar5 = 1;
  }
LAB_00100135:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void EVP_add_alg_module(void)

{
  CONF_module_add("alg_section",alg_module_init,(undefined1 *)0x0);
  return;
}


