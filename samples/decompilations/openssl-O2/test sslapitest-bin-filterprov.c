
void filter_get_capabilities(void)

{
  OSSL_PROVIDER_get_capabilities(DAT_001005a8);
  return;
}



void filter_unquery(undefined8 param_1,undefined4 param_2,undefined *param_3)

{
  int iVar1;
  undefined *puVar2;
  bool bVar3;
  
  iVar1 = test_ulong_gt("test/filterprov.c",0x69,"globs->query_count",&_LC0,DAT_00100d88,0);
  if (iVar1 == 0) {
    DAT_00100d90 = 1;
  }
  else {
    DAT_00100d88 = DAT_00100d88 + -1;
  }
  if (DAT_00100d80 < 1) {
LAB_0010009c:
    OSSL_PROVIDER_unquery_operation(DAT_001005a8,param_2,param_3);
    return;
  }
  if (param_3 != &DAT_001005b8) {
    puVar2 = &DAT_00100680;
    do {
      if (puVar2 == &DAT_00100680 + (ulong)(DAT_00100d80 - 1) * 200) goto LAB_0010009c;
      bVar3 = param_3 != puVar2;
      puVar2 = puVar2 + 200;
    } while (bVar3);
  }
  return;
}



void filter_get_params(void)

{
  OSSL_PROVIDER_get_params(DAT_001005a8);
  return;
}



void filter_gettable_params(void)

{
  OSSL_PROVIDER_gettable_params(DAT_001005a8);
  return;
}



void filter_teardown(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  
  bVar4 = 0;
  OSSL_PROVIDER_unload(DAT_001005a8);
  OSSL_LIB_CTX_free(ourglobals);
  puVar3 = &ourglobals;
  for (lVar2 = 0xff; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * -2 + 1;
  }
  uVar1 = ossl_prov_ctx_get0_core_bio_method(param_1);
  BIO_meth_free(uVar1);
  ossl_prov_ctx_free(param_1);
  return;
}



undefined * filter_query(undefined8 param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined *puVar2;
  int *piVar3;
  
  DAT_00100d88 = DAT_00100d88 + 1;
  if (0 < DAT_00100d80) {
    piVar3 = &DAT_001005b0;
    iVar1 = 0;
    do {
      if (*piVar3 == param_2) {
        *param_3 = DAT_00100d84;
        return &DAT_001005b8 + (long)iVar1 * 200;
      }
      iVar1 = iVar1 + 1;
      piVar3 = piVar3 + 0x32;
    } while (iVar1 != DAT_00100d80);
  }
  puVar2 = (undefined *)OSSL_PROVIDER_query_operation(DAT_001005a8);
  return puVar2;
}



undefined8 filter_provider_init(undefined8 param_1,int *param_2,undefined8 *param_3,long *param_4)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  code *pcVar5;
  byte bVar6;
  
  bVar6 = 0;
  iVar1 = ossl_prov_bio_from_dispatch(param_2);
  if ((iVar1 != 0) && (iVar1 = *param_2, iVar1 != 0)) {
    pcVar5 = (code *)0x0;
    do {
      if (iVar1 == 4) {
        pcVar5 = *(code **)(param_2 + 2);
      }
      iVar1 = param_2[4];
      param_2 = param_2 + 4;
    } while (iVar1 != 0);
    if (pcVar5 != (code *)0x0) {
      puVar4 = &ourglobals;
      for (lVar3 = 0xff; lVar3 != 0; lVar3 = lVar3 + -1) {
        *puVar4 = 0;
        puVar4 = puVar4 + (ulong)bVar6 * -2 + 1;
      }
      ourglobals = OSSL_LIB_CTX_new();
      if ((ourglobals != 0) &&
         (DAT_001005a8 = OSSL_PROVIDER_load(ourglobals,"default"), DAT_001005a8 != 0)) {
        lVar3 = ossl_prov_ctx_new(DAT_001005a8);
        *param_4 = lVar3;
        if (lVar3 != 0) {
          lVar3 = ossl_bio_prov_init_bio_method();
          if (lVar3 != 0) {
            uVar2 = (*pcVar5)(param_1);
            ossl_prov_ctx_set0_libctx(*param_4,uVar2);
            ossl_prov_ctx_set0_handle(*param_4,param_1);
            ossl_prov_ctx_set0_core_bio_method(*param_4,lVar3);
            *param_3 = filter_dispatch_table;
            return 1;
          }
          lVar3 = *param_4;
        }
        ossl_prov_ctx_free(lVar3);
        *param_4 = 0;
      }
      OSSL_PROVIDER_unload(DAT_001005a8);
      OSSL_LIB_CTX_free(ourglobals);
    }
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool filter_provider_set_filter(undefined4 param_1,char *param_2)

{
  char *__haystack;
  long lVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  char *ptr;
  long *plVar5;
  char *pcVar6;
  size_t sVar7;
  char *pcVar8;
  long lVar9;
  char *__s;
  undefined8 *puVar10;
  long *plVar11;
  long in_FS_OFFSET;
  undefined4 local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_44 = 0;
  ptr = CRYPTO_strdup(param_2,"test/filterprov.c",0xd1);
  plVar5 = (long *)OSSL_PROVIDER_query_operation(DAT_001005a8,param_1,&local_44);
  if (((plVar5 == (long *)0x0) || (ptr == (char *)0x0)) || (iVar4 = DAT_00100d80, 9 < DAT_00100d80))
  {
LAB_00100494:
    bVar3 = false;
  }
  else {
    lVar9 = (long)DAT_00100d80;
    puVar10 = &ourglobals + lVar9 * 0x19;
    __s = ptr;
    do {
      pcVar6 = strchr(__s,0x3a);
      if (pcVar6 != (char *)0x0) {
        *pcVar6 = '\0';
      }
      bVar3 = pcVar6 == (char *)0x0;
      sVar7 = strlen(__s);
      __haystack = (char *)*plVar5;
      plVar11 = plVar5;
      while( true ) {
        if (__haystack == (char *)0x0) goto LAB_00100494;
        pcVar8 = strstr(__haystack,__s);
        if (((pcVar8 != (char *)0x0) && ((pcVar8[sVar7] == '\0' || (pcVar8[sVar7] == ':')))) &&
           ((pcVar8 == __haystack || (pcVar8[-1] == ':')))) break;
        __haystack = (char *)plVar11[4];
        plVar11 = plVar11 + 4;
      }
      if (puVar10 == (undefined8 *)(&DAT_00100640 + lVar9 * 200)) goto LAB_00100494;
      lVar1 = plVar11[1];
      puVar10[3] = *plVar11;
      puVar10[4] = lVar1;
      lVar2 = plVar11[3];
      lVar1 = *plVar11;
      puVar10[5] = plVar11[2];
      puVar10[6] = lVar2;
      if (lVar1 == 0) goto LAB_00100494;
      __s = pcVar6 + 1;
      if (pcVar6 == (char *)0x0) {
        __s = (char *)0x0;
      }
      puVar10 = puVar10 + 4;
    } while (!bVar3);
    _DAT_00100d80 = CONCAT44(local_44,iVar4 + 1);
    (&DAT_001005b0)[lVar9 * 0x32] = param_1;
  }
  OSSL_PROVIDER_unquery_operation(DAT_001005a8,param_1,plVar5);
  CRYPTO_free(ptr);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong filter_provider_check_clean_finish(void)

{
  ulong uVar1;
  
  uVar1 = test_ulong_eq("test/filterprov.c",0x114,"globs->query_count",&_LC0,DAT_00100d88,0);
  if ((int)uVar1 != 0) {
    uVar1 = (ulong)(DAT_00100d90 == 0);
  }
  return uVar1;
}


