
uint ssl_do_config(long param_1,undefined8 *param_2,char *param_3,uint param_4)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  char cVar8;
  int iVar9;
  char cVar10;
  ulong uVar11;
  long in_FS_OFFSET;
  long local_98;
  uint local_90;
  char *local_70 [2];
  undefined8 local_60;
  ulong local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_90 = CONCAT31(local_90._1_3_,(char)param_4) & 0xffffff01;
  local_70[0] = param_3;
  if (param_2 == (undefined8 *)0x0 && param_1 == 0) {
    ERR_new();
    ERR_set_debug("ssl/ssl_mcnf.c",0x24,"ssl_do_config");
    ERR_set_error(0x14,0xc0102,0);
  }
  else {
    if ((param_3 == (char *)0x0) && ((char)local_90 != '\0')) {
      local_70[0] = "system_default";
      iVar3 = conf_ssl_name_find("system_default",&local_60);
      if (iVar3 == 0) {
LAB_0010006d:
        param_4 = 1;
        goto LAB_00100072;
      }
LAB_00100100:
      uVar5 = conf_ssl_get(local_60,local_70,&local_58);
      lVar6 = SSL_CONF_CTX_new();
      if (lVar6 != 0) {
        if (param_1 == 0) {
          local_98 = param_2[1];
          SSL_CONF_CTX_set_ssl_ctx(lVar6,param_2);
          uVar7 = *param_2;
        }
        else {
          local_98 = *(long *)(param_1 + 0x18);
          SSL_CONF_CTX_set_ssl(lVar6,param_1);
          uVar7 = **(undefined8 **)(param_1 + 8);
        }
        iVar3 = OSSL_LIB_CTX_get_conf_diagnostics(uVar7);
        cVar2 = (-(param_4 == 0) & 0x60U) + 0x16;
        cVar1 = (-(param_4 == 0) & 0x60U) + 0x12;
        cVar8 = (-(param_4 == 0) & 0x60U) + 0x1a;
        cVar10 = (-(param_4 == 0) & 0x60U) + 0x1e;
        if (iVar3 == 0) {
          cVar2 = (-(param_4 == 0) & 0x60U) + 6;
          cVar1 = (-(param_4 == 0) & 0x60U) + 2;
          cVar8 = (-(param_4 == 0) & 0x60U) + 10;
          cVar10 = (-(param_4 == 0) & 0x60U) + 0xe;
        }
        if (*(undefined **)(local_98 + 0x40) == &ssl_undefined_function) {
          cVar10 = cVar2;
          cVar8 = cVar1;
        }
        if (*(undefined **)(local_98 + 0x48) == &ssl_undefined_function) {
          cVar10 = cVar8;
        }
        SSL_CONF_CTX_set_flags(lVar6,cVar10);
        uVar7 = OSSL_LIB_CTX_set0_default(uVar7);
        if (local_58 == 0) {
          iVar9 = SSL_CONF_CTX_finish(lVar6);
          if (iVar9 == 0) {
            OSSL_LIB_CTX_set0_default(uVar7);
            SSL_CONF_CTX_free(lVar6);
            goto LAB_0010038d;
          }
          OSSL_LIB_CTX_set0_default(uVar7);
          SSL_CONF_CTX_free(lVar6);
        }
        else {
          iVar9 = 0;
          uVar11 = 0;
          do {
            conf_ssl_get_cmd(uVar5,uVar11,&local_50,&local_48);
            iVar4 = SSL_CONF_cmd(lVar6,local_50,local_48);
            uVar11 = uVar11 + 1;
            iVar9 = iVar9 + (uint)(iVar4 < 1);
          } while (uVar11 < local_58);
          iVar4 = SSL_CONF_CTX_finish(lVar6);
          OSSL_LIB_CTX_set0_default(uVar7);
          SSL_CONF_CTX_free(lVar6);
          if (iVar9 + (uint)(iVar4 == 0) != 0) {
LAB_0010038d:
            param_4 = iVar3 == 0 & local_90;
            goto LAB_00100080;
          }
        }
        param_4 = 1;
        goto LAB_00100080;
      }
    }
    else {
      iVar3 = conf_ssl_name_find(param_3,&local_60);
      if (iVar3 != 0) goto LAB_00100100;
      if (param_4 != 0) goto LAB_0010006d;
      ERR_new();
      ERR_set_debug("ssl/ssl_mcnf.c",0x2c,"ssl_do_config");
      ERR_set_error(0x14,0x71,"name=%s",local_70[0]);
    }
    param_4 = 0;
  }
LAB_00100072:
  OSSL_LIB_CTX_set0_default(0);
  SSL_CONF_CTX_free(0);
LAB_00100080:
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


