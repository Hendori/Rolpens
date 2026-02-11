
uint ssl_do_config(long param_1,undefined8 *param_2,char *param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  byte bVar8;
  ulong uVar9;
  long in_FS_OFFSET;
  uint local_78;
  char *local_70 [2];
  undefined8 local_60;
  ulong local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = CONCAT31(local_78._1_3_,(char)param_4) & 0xffffff01;
  local_70[0] = param_3;
  if (param_2 == (undefined8 *)0x0 && param_1 == 0) {
    ERR_new();
    ERR_set_debug("ssl/ssl_mcnf.c",0x24,"ssl_do_config");
    ERR_set_error(0x14,0xc0102,0);
  }
  else {
    if ((param_3 == (char *)0x0) && ((char)local_78 != '\0')) {
      local_70[0] = "system_default";
      iVar1 = conf_ssl_name_find("system_default",&local_60);
      if (iVar1 == 0) {
LAB_00100070:
        param_4 = 1;
        goto LAB_00100076;
      }
LAB_00100108:
      uVar3 = conf_ssl_get(local_60,local_70,&local_58);
      lVar4 = SSL_CONF_CTX_new();
      if (lVar4 != 0) {
        bVar8 = (-(param_4 == 0) & 0x60U) + 2;
        if (param_1 == 0) {
          lVar7 = param_2[1];
          SSL_CONF_CTX_set_ssl_ctx(lVar4,param_2);
          uVar5 = *param_2;
        }
        else {
          lVar7 = *(long *)(param_1 + 0x18);
          SSL_CONF_CTX_set_ssl(lVar4,param_1);
          uVar5 = **(undefined8 **)(param_1 + 8);
        }
        iVar1 = OSSL_LIB_CTX_get_conf_diagnostics(uVar5);
        if (iVar1 != 0) {
          bVar8 = bVar8 | 0x10;
        }
        if (*(undefined **)(lVar7 + 0x40) != &ssl_undefined_function) {
          bVar8 = bVar8 | 8;
        }
        if (*(undefined **)(lVar7 + 0x48) != &ssl_undefined_function) {
          bVar8 = bVar8 | 4;
        }
        SSL_CONF_CTX_set_flags(lVar4,bVar8);
        uVar5 = OSSL_LIB_CTX_set0_default(uVar5);
        if (local_58 == 0) {
          iVar6 = SSL_CONF_CTX_finish(lVar4);
          if (iVar6 == 0) {
            OSSL_LIB_CTX_set0_default(uVar5);
            SSL_CONF_CTX_free(lVar4);
            goto LAB_0010029e;
          }
          OSSL_LIB_CTX_set0_default(uVar5);
          SSL_CONF_CTX_free(lVar4);
        }
        else {
          iVar6 = 0;
          uVar9 = 0;
          do {
            conf_ssl_get_cmd(uVar3,uVar9,&local_50,&local_48);
            iVar2 = SSL_CONF_cmd(lVar4,local_50,local_48);
            uVar9 = uVar9 + 1;
            iVar6 = iVar6 + (uint)(iVar2 < 1);
          } while (uVar9 < local_58);
          iVar2 = SSL_CONF_CTX_finish(lVar4);
          OSSL_LIB_CTX_set0_default(uVar5);
          SSL_CONF_CTX_free(lVar4);
          if (iVar6 + (uint)(iVar2 == 0) != 0) {
LAB_0010029e:
            param_4 = iVar1 == 0 & local_78;
            goto LAB_00100084;
          }
        }
        param_4 = 1;
        goto LAB_00100084;
      }
    }
    else {
      iVar1 = conf_ssl_name_find(param_3,&local_60);
      if (iVar1 != 0) goto LAB_00100108;
      if (param_4 != 0) goto LAB_00100070;
      ERR_new();
      ERR_set_debug("ssl/ssl_mcnf.c",0x2c,"ssl_do_config");
      ERR_set_error(0x14,0x71,"name=%s",local_70[0]);
    }
    param_4 = 0;
  }
LAB_00100076:
  OSSL_LIB_CTX_set0_default(0);
  SSL_CONF_CTX_free(0);
LAB_00100084:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void SSL_add_ssl_module(void)

{
  return;
}



void SSL_config(undefined8 param_1,undefined8 param_2)

{
  ssl_do_config(param_1,0,param_2,0);
  return;
}



void SSL_CTX_config(undefined8 param_1,undefined8 param_2)

{
  ssl_do_config(0,param_1,param_2,0);
  return;
}



void ssl_ctx_system_config(undefined8 param_1)

{
  ssl_do_config(0,param_1,0,1);
  return;
}


