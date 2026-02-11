
void ssl_module_free_part_0(void)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  if (ssl_names_count != 0) {
    lVar5 = 0;
    uVar4 = 0;
    do {
      puVar2 = (undefined8 *)((long)ssl_names + lVar5);
      CRYPTO_free((void *)*puVar2);
      if (puVar2[2] != 0) {
        uVar1 = 0;
        do {
          lVar3 = uVar1 * 0x10;
          uVar1 = uVar1 + 1;
          CRYPTO_free(*(void **)(puVar2[1] + lVar3));
          CRYPTO_free(*(void **)(puVar2[1] + 8 + lVar3));
        } while (uVar1 < (ulong)puVar2[2]);
      }
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 0x18;
      CRYPTO_free((void *)puVar2[1]);
    } while (uVar4 < ssl_names_count);
  }
  CRYPTO_free(ssl_names);
  ssl_names = (void *)0x0;
  ssl_names_count = 0;
  return;
}



void ssl_module_free(void)

{
  if (ssl_names != 0) {
    ssl_module_free_part_0();
    return;
  }
  return;
}



undefined8 ssl_module_init(CONF_IMODULE *param_1,CONF *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  char *pcVar3;
  stack_st_CONF_VALUE *psVar4;
  long lVar5;
  stack_st_CONF_VALUE *psVar6;
  char *pcVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  ulong local_50;
  
  pcVar3 = CONF_imodule_get_value(param_1);
  psVar4 = NCONF_get_section(param_2,pcVar3);
  iVar2 = OPENSSL_sk_num(psVar4);
  if (iVar2 < 1) {
    ERR_new();
    ERR_set_debug("crypto/conf/conf_ssl.c",0x4c,"ssl_module_init");
    ERR_set_error(0xe,(psVar4 == (stack_st_CONF_VALUE *)0x0) + 'w',"section=%s",pcVar3);
LAB_00100349:
    if (ssl_names != 0) {
      ssl_module_free_part_0();
    }
  }
  else {
    iVar2 = OPENSSL_sk_num(psVar4);
    uVar9 = (ulong)iVar2;
    if (ssl_names != 0) {
      ssl_module_free_part_0();
    }
    ssl_names = CRYPTO_zalloc(uVar9 * 0x18,"crypto/conf/conf_ssl.c",0x51);
    if (ssl_names != 0) {
      ssl_names_count = uVar9;
      if (uVar9 != 0) {
        local_50 = 0;
        do {
          puVar1 = (undefined8 *)(ssl_names + local_50 * 0x18);
          lVar5 = OPENSSL_sk_value(psVar4);
          psVar6 = NCONF_get_section(param_2,*(char **)(lVar5 + 0x10));
          iVar2 = OPENSSL_sk_num(psVar6);
          if (iVar2 < 1) {
            ERR_new();
            ERR_set_debug("crypto/conf/conf_ssl.c",0x60,"ssl_module_init");
            ERR_set_error(0xe,(psVar6 == (stack_st_CONF_VALUE *)0x0) + 'u',"name=%s, value=%s",
                          *(undefined8 *)(lVar5 + 8),*(undefined8 *)(lVar5 + 0x10));
            goto LAB_00100349;
          }
          pcVar3 = CRYPTO_strdup(*(char **)(lVar5 + 8),"crypto/conf/conf_ssl.c",100);
          *puVar1 = pcVar3;
          if (pcVar3 == (char *)0x0) goto LAB_00100349;
          iVar2 = OPENSSL_sk_num(psVar6);
          uVar9 = (ulong)iVar2;
          lVar5 = CRYPTO_zalloc(uVar9 << 4,"crypto/conf/conf_ssl.c",0x68);
          puVar1[1] = lVar5;
          if (lVar5 == 0) goto LAB_00100349;
          puVar1[2] = uVar9;
          uVar10 = 0;
          if (uVar9 != 0) {
            do {
              lVar5 = OPENSSL_sk_value(psVar6,uVar10 & 0xffffffff);
              pcVar3 = *(char **)(lVar5 + 8);
              plVar8 = (long *)(uVar10 * 0x10 + puVar1[1]);
              pcVar7 = strchr(pcVar3,0x2e);
              if (pcVar7 != (char *)0x0) {
                pcVar3 = pcVar7 + 1;
              }
              pcVar7 = CRYPTO_strdup(pcVar3,"crypto/conf/conf_ssl.c",0x77);
              pcVar3 = *(char **)(lVar5 + 0x10);
              *plVar8 = (long)pcVar7;
              pcVar3 = CRYPTO_strdup(pcVar3,"crypto/conf/conf_ssl.c",0x78);
              plVar8[1] = (long)pcVar3;
              if ((*plVar8 == 0) || (pcVar3 == (char *)0x0)) goto LAB_00100349;
              uVar10 = uVar10 + 1;
            } while (uVar9 != uVar10);
          }
          local_50 = local_50 + 1;
        } while (local_50 < ssl_names_count);
      }
      return 1;
    }
  }
  return 0;
}



undefined8 conf_ssl_get(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)(ssl_names + param_1 * 0x18);
  *param_2 = *puVar1;
  uVar2 = puVar1[1];
  *param_3 = puVar1[2];
  return uVar2;
}



undefined8 conf_ssl_name_find(char *param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  
  lVar1 = ssl_names_count;
  if (param_1 == (char *)0x0) {
    return 0;
  }
  if (ssl_names_count != 0) {
    lVar4 = 0;
    puVar3 = ssl_names;
    do {
      iVar2 = strcmp((char *)*puVar3,param_1);
      if (iVar2 == 0) {
        *param_2 = lVar4;
        return 1;
      }
      lVar4 = lVar4 + 1;
      puVar3 = puVar3 + 3;
    } while (lVar4 != lVar1);
  }
  return 0;
}



void conf_ssl_get_cmd(long param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + param_2 * 0x10);
  *param_3 = *puVar1;
  *param_4 = puVar1[1];
  return;
}



void ossl_config_add_ssl_module(void)

{
  CONF_module_add("ssl_conf",ssl_module_init,ssl_module_free);
  return;
}


