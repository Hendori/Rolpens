
void provider_free(void)

{
  OSSL_PROVIDER_unload();
  return;
}



undefined8 set_prov_param(undefined8 param_1,undefined8 *param_2)

{
  char *__s2;
  int iVar1;
  char *__s1;
  undefined8 uVar2;
  
  __s2 = (char *)*param_2;
  if (__s2 != (char *)0x0) {
    __s1 = (char *)OSSL_PROVIDER_get0_name();
    iVar1 = strcmp(__s1,__s2);
    if (iVar1 != 0) {
      return 1;
    }
  }
  *(undefined4 *)(param_2 + 3) = 1;
  uVar2 = OSSL_PROVIDER_add_conf_parameter(param_1,param_2[1],param_2[2]);
  return uVar2;
}



void app_providers_cleanup(void)

{
  OPENSSL_sk_pop_free(app_providers,0x100000);
  app_providers = 0;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 app_provider_load(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = OSSL_PROVIDER_load();
  if (lVar2 == 0) {
    uVar3 = opt_getprog();
    opt_printf_stderr("%s: unable to load provider %s\nHint: use -provider-path option or OPENSSL_MODULES environment variable.\n"
                      ,uVar3,param_2);
    ERR_print_errors(_bio_err);
    return 0;
  }
  if (((app_providers != 0) || (app_providers = OPENSSL_sk_new_null(0,lVar2), app_providers != 0))
     && (iVar1 = OPENSSL_sk_push(app_providers,lVar2), iVar1 != 0)) {
    return 1;
  }
  app_providers_cleanup();
  return 0;
}



ulong opt_provider(undefined4 param_1)

{
  byte *pbVar1;
  byte bVar2;
  ushort *puVar3;
  byte *pbVar4;
  undefined4 uVar5;
  uint uVar6;
  char *pcVar7;
  char *__s;
  char *pcVar8;
  ushort **ppuVar9;
  char *pcVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  long in_FS_OFFSET;
  char *local_58;
  char *local_50;
  byte *local_48;
  int local_40;
  long local_30;
  
  uVar5 = provider_option_given;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  provider_option_given = 1;
  switch(param_1) {
  case 0x640:
  case 0x645:
    uVar13 = 1;
    break;
  case 0x641:
    uVar11 = opt_arg();
    uVar12 = app_get0_libctx();
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar13 = app_provider_load(uVar12,uVar11);
      return uVar13;
    }
    goto LAB_0010044c;
  case 0x642:
    pcVar7 = (char *)opt_arg();
    if ((pcVar7 != (char *)0x0) && (*pcVar7 == '\0')) {
      pcVar7 = (char *)0x0;
    }
    uVar11 = app_get0_libctx();
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar13 = OSSL_PROVIDER_set_default_search_path(uVar11,pcVar7);
      return uVar13;
    }
    goto LAB_0010044c;
  case 0x643:
    uVar11 = opt_arg();
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar13 = app_set_propq(uVar11);
      return uVar13;
    }
    goto LAB_0010044c;
  case 0x644:
    pcVar7 = (char *)opt_arg();
    __s = CRYPTO_strdup(pcVar7,"apps/lib/app_provider.c",0x5c);
    if (__s == (char *)0x0) {
LAB_001003b9:
      uVar11 = opt_getprog();
      uVar13 = 0;
      opt_printf_stderr("%s: malformed \'-provparam\' option value: \'%s\'\n",uVar11,pcVar7);
    }
    else {
      pcVar8 = strchr(__s,0x3d);
      if (pcVar8 == (char *)0x0) {
        local_48 = (byte *)0x0;
        goto LAB_001003b9;
      }
      *pcVar8 = '\0';
      local_48 = (byte *)(pcVar8 + 1);
      ppuVar9 = __ctype_b_loc();
      puVar3 = *ppuVar9;
      pcVar10 = pcVar8;
      if (__s < pcVar8) {
        do {
          pbVar1 = (byte *)(pcVar10 + -1);
          pcVar10 = pcVar10 + -1;
          if ((*(byte *)((long)puVar3 + (ulong)*pbVar1 * 2 + 1) & 0x20) == 0) break;
          *pcVar10 = '\0';
        } while (__s != pcVar10);
      }
      bVar2 = *(byte *)((long)puVar3 + (ulong)(byte)pcVar8[1] * 2 + 1);
      pbVar1 = (byte *)(pcVar8 + 2);
      while (pbVar4 = pbVar1, (bVar2 & 0x20) != 0) {
        pbVar1 = pbVar4 + 1;
        local_48 = pbVar4;
        bVar2 = *(byte *)((long)puVar3 + (ulong)*pbVar4 * 2 + 1);
      }
      local_50 = strchr(__s,0x3a);
      if (local_50 == (char *)0x0) {
        local_58 = (char *)0x0;
        local_50 = __s;
      }
      else {
        *local_50 = '\0';
        local_50 = local_50 + 1;
        local_58 = (char *)0x0;
        if (*__s != '\0') {
          local_58 = __s;
        }
      }
      if (*local_50 == '\0') goto LAB_001003b9;
      local_40 = 0;
      uVar11 = app_get0_libctx();
      uVar6 = OSSL_PROVIDER_do_all(uVar11,set_prov_param,&local_58);
      pcVar8 = local_50;
      pcVar7 = local_58;
      uVar13 = (ulong)uVar6;
      if (uVar6 == 0) {
        uVar11 = opt_getprog();
        opt_printf_stderr("%s: Error setting provider \'%s\' parameter \'%s\'\n",uVar11,pcVar7,
                          pcVar8);
        uVar13 = 0;
      }
      else if (local_40 == 0) {
        uVar11 = opt_getprog();
        uVar13 = 0;
        opt_printf_stderr("%s: No provider named \'%s\' is loaded\n",uVar11,pcVar7);
      }
    }
    CRYPTO_free(__s);
    break;
  default:
    uVar13 = 0;
    provider_option_given = uVar5;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar13;
  }
LAB_0010044c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4 opt_provider_option_given(void)

{
  return provider_option_given;
}


