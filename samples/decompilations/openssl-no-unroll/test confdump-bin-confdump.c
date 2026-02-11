
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 main(undefined8 param_1,long param_2)

{
  int iVar1;
  int iVar2;
  CONF_METHOD *meth;
  CONF *conf;
  undefined8 uVar3;
  char *section;
  stack_st_CONF_VALUE *psVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  long in_FS_OFFSET;
  long lStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  meth = NCONF_default();
  conf = NCONF_new(meth);
  if (conf != (CONF *)0x0) {
    iVar1 = NCONF_load(conf,*(char **)(param_2 + 8),&lStack_48);
    if (iVar1 != 0) {
      iVar7 = 0;
      uVar3 = NCONF_get_section_names(conf);
      iVar1 = OPENSSL_sk_num(uVar3);
      if (0 < iVar1) {
        do {
          section = (char *)OPENSSL_sk_value(uVar3,iVar7);
          psVar4 = NCONF_get_section(conf,section);
          __printf_chk(2,0x100000,section);
          iVar1 = 0;
          while( true ) {
            iVar2 = OPENSSL_sk_num(psVar4);
            if (iVar2 <= iVar1) break;
            lVar5 = OPENSSL_sk_value(psVar4,iVar1);
            __printf_chk(2,"%s = %s\n",*(undefined8 *)(lVar5 + 8),*(undefined8 *)(lVar5 + 0x10));
            iVar1 = iVar1 + 1;
          }
          iVar7 = iVar7 + 1;
          iVar1 = OPENSSL_sk_num(uVar3);
        } while (iVar7 < iVar1);
      }
      uVar6 = 0;
      OPENSSL_sk_free(uVar3);
      goto LAB_0010007e;
    }
  }
  uVar6 = 1;
  ERR_print_errors_fp(_stderr);
LAB_0010007e:
  NCONF_free(conf);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


