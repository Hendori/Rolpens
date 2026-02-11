
void int_engine_module_finish(void)

{
  ENGINE *e;
  
  while( true ) {
    e = (ENGINE *)OPENSSL_sk_pop(initialized_engines);
    if (e == (ENGINE *)0x0) break;
    ENGINE_finish(e);
  }
  OPENSSL_sk_free(initialized_engines);
  initialized_engines = 0;
  return;
}



undefined8 int_engine_init(ENGINE *param_1)

{
  int iVar1;
  
  iVar1 = ENGINE_init(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  if (((initialized_engines != 0) ||
      (initialized_engines = OPENSSL_sk_new_null(), initialized_engines != 0)) &&
     (iVar1 = OPENSSL_sk_push(initialized_engines,param_1), iVar1 != 0)) {
    return 1;
  }
  ENGINE_finish(param_1);
  return 0;
}



undefined8 int_engine_module_init(CONF_IMODULE *param_1,CONF *param_2)

{
  char *section;
  bool bVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  stack_st_CONF_VALUE *psVar5;
  long lVar6;
  char *pcVar7;
  stack_st_CONF_VALUE *psVar8;
  undefined8 *puVar9;
  char *pcVar10;
  ENGINE *e;
  undefined8 uVar11;
  int iVar12;
  long in_FS_OFFSET;
  char *local_70;
  long local_48;
  long local_40;
  
  iVar12 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar4 = CONF_imodule_get_value(param_1);
  psVar5 = NCONF_get_section(param_2,pcVar4);
  if (psVar5 == (stack_st_CONF_VALUE *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/engine/eng_cnf.c",0x9e,"int_engine_module_init");
    ERR_set_error(0x26,0x94,0);
LAB_0010034e:
    uVar11 = 0;
  }
  else {
    iVar2 = OPENSSL_sk_num(psVar5);
    if (0 < iVar2) {
      do {
        lVar6 = OPENSSL_sk_value(psVar5,iVar12);
        local_48 = -1;
        pcVar4 = *(char **)(lVar6 + 8);
        section = *(char **)(lVar6 + 0x10);
        pcVar7 = strchr(pcVar4,0x2e);
        local_70 = pcVar7 + 1;
        if (pcVar7 == (char *)0x0) {
          local_70 = pcVar4;
        }
        psVar8 = NCONF_get_section(param_2,section);
        if (psVar8 == (stack_st_CONF_VALUE *)0x0) {
          ERR_new();
          ERR_set_debug("crypto/engine/eng_cnf.c",0x3c,"int_engine_configure");
          ERR_set_error(0x26,0x95,0);
          goto LAB_0010034e;
        }
        bVar1 = false;
        e = (ENGINE *)0x0;
        for (iVar2 = 0; iVar3 = OPENSSL_sk_num(psVar8), iVar2 < iVar3; iVar2 = iVar2 + 1) {
          puVar9 = (undefined8 *)OPENSSL_sk_value(psVar8,iVar2);
          pcVar4 = (char *)puVar9[1];
          pcVar10 = strchr(pcVar4,0x2e);
          pcVar7 = (char *)puVar9[2];
          if (pcVar10 != (char *)0x0) {
            pcVar4 = pcVar10 + 1;
          }
          iVar3 = strcmp(pcVar4,"engine_id");
          if (iVar3 != 0) {
            iVar3 = strcmp(pcVar4,"soft_load");
            if (iVar3 != 0) {
              iVar3 = strcmp(pcVar4,"dynamic_path");
              if (iVar3 == 0) {
                e = ENGINE_by_id("dynamic");
                if (e != (ENGINE *)0x0) {
                  iVar3 = ENGINE_ctrl_cmd_string(e,"SO_PATH",pcVar7,0);
                  if ((iVar3 == 0) ||
                     (iVar3 = ENGINE_ctrl_cmd_string(e,"LIST_ADD","2",0), iVar3 == 0))
                  goto LAB_0010030e;
                  iVar3 = ENGINE_ctrl_cmd_string(e,"LOAD",(char *)0x0,0);
                  goto joined_r0x001004aa;
                }
LAB_0010043b:
                e = (ENGINE *)0x0;
              }
              else {
                if ((e == (ENGINE *)0x0) && (e = ENGINE_by_id(local_70), e == (ENGINE *)0x0)) {
                  if (!bVar1) goto LAB_0010043b;
                  ERR_clear_error();
                  goto LAB_00100477;
                }
                iVar3 = strcmp(pcVar7,"EMPTY");
                if (iVar3 == 0) {
                  pcVar7 = (char *)0x0;
                }
                iVar3 = strcmp(pcVar4,"init");
                if (iVar3 == 0) {
                  iVar3 = NCONF_get_number_e(param_2,section,"init",&local_48);
                  if (iVar3 != 0) {
                    if (local_48 == 1) {
                      iVar3 = int_engine_init(e);
                      goto joined_r0x001004aa;
                    }
                    pcVar7 = local_70;
                    if (local_48 == 0) goto LAB_00100218;
                    ERR_new();
                    ERR_set_debug("crypto/engine/eng_cnf.c",0x76,"int_engine_configure");
                    ERR_set_error(0x26,0x97,0);
                  }
                }
                else {
                  iVar3 = strcmp(pcVar4,"default_algorithms");
                  if (iVar3 == 0) {
                    iVar3 = ENGINE_set_default_string(e,pcVar7);
                  }
                  else {
                    iVar3 = ENGINE_ctrl_cmd_string(e,pcVar4,pcVar7,0);
                  }
joined_r0x001004aa:
                  pcVar7 = local_70;
                  if (iVar3 != 0) goto LAB_00100218;
                }
              }
LAB_0010030e:
              ERR_new();
              ERR_set_debug("crypto/engine/eng_cnf.c",0x8b,"int_engine_configure");
              ERR_set_error(0x26,0x66,"section=%s, name=%s, value=%s",*puVar9,puVar9[1],puVar9[2]);
              ENGINE_free(e);
              goto LAB_0010034e;
            }
            bVar1 = true;
            pcVar7 = local_70;
          }
LAB_00100218:
          local_70 = pcVar7;
        }
        if (((e != (ENGINE *)0x0) && (local_48 == -1)) && (iVar2 = int_engine_init(e), iVar2 == 0))
        {
          ERR_new();
          ERR_set_debug("crypto/engine/eng_cnf.c",0x89,"int_engine_configure");
          ERR_set_error(0x26,0x66,0);
          ENGINE_free(e);
          goto LAB_0010034e;
        }
        ENGINE_free(e);
LAB_00100477:
        iVar12 = iVar12 + 1;
        iVar2 = OPENSSL_sk_num(psVar5);
      } while (iVar12 < iVar2);
    }
    uVar11 = 1;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar11;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void ENGINE_add_conf_module(void)

{
  CONF_module_add("engines",int_engine_module_init,int_engine_module_finish);
  return;
}


