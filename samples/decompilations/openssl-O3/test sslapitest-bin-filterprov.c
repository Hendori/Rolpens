
void filter_get_capabilities(void)

{
  OSSL_PROVIDER_get_capabilities(DAT_00100668);
  return;
}



void filter_get_params(void)

{
  OSSL_PROVIDER_get_params(DAT_00100668);
  return;
}



void filter_gettable_params(void)

{
  OSSL_PROVIDER_gettable_params(DAT_00100668);
  return;
}



void filter_teardown(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  
  bVar4 = 0;
  OSSL_PROVIDER_unload(DAT_00100668);
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



void filter_unquery(undefined8 param_1,undefined4 param_2,undefined *param_3)

{
  int iVar1;
  undefined *puVar2;
  bool bVar3;
  
  iVar1 = test_ulong_gt("test/filterprov.c",0x69,"globs->query_count",&_LC0,DAT_00100e48,0);
  if (iVar1 == 0) {
    DAT_00100e50 = 1;
  }
  else {
    DAT_00100e48 = DAT_00100e48 + -1;
  }
  if (DAT_00100e40 < 1) {
LAB_0010011c:
    OSSL_PROVIDER_unquery_operation(DAT_00100668,param_2,param_3);
    return;
  }
  if (param_3 != &DAT_00100678) {
    puVar2 = &DAT_00100740;
    do {
      if (puVar2 == &DAT_00100740 + (ulong)(DAT_00100e40 - 1) * 200) goto LAB_0010011c;
      bVar3 = param_3 != puVar2;
      puVar2 = puVar2 + 200;
    } while (bVar3);
  }
  return;
}



undefined * filter_query(undefined8 param_1,int param_2,undefined4 *param_3)

{
  long lVar1;
  undefined *puVar2;
  
  DAT_00100e48 = DAT_00100e48 + 1;
  if (0 < DAT_00100e40) {
    if (param_2 == DAT_00100670) {
      lVar1 = 0;
    }
    else {
      if (DAT_00100e40 == 1) goto LAB_00100208;
      if (param_2 == DAT_00100738) {
        lVar1 = 1;
      }
      else {
        if (DAT_00100e40 == 2) goto LAB_00100208;
        if (param_2 == DAT_00100800) {
          lVar1 = 2;
        }
        else {
          if (DAT_00100e40 == 3) goto LAB_00100208;
          if (param_2 == DAT_001008c8) {
            lVar1 = 3;
          }
          else {
            if (DAT_00100e40 == 4) goto LAB_00100208;
            if (param_2 == DAT_00100990) {
              lVar1 = 4;
            }
            else {
              if (DAT_00100e40 == 5) goto LAB_00100208;
              if (param_2 == DAT_00100a58) {
                lVar1 = 5;
              }
              else {
                if (DAT_00100e40 == 6) goto LAB_00100208;
                if (param_2 == DAT_00100b20) {
                  lVar1 = 6;
                }
                else {
                  if (DAT_00100e40 == 7) goto LAB_00100208;
                  if (param_2 == DAT_00100be8) {
                    lVar1 = 7;
                  }
                  else {
                    if (DAT_00100e40 == 8) goto LAB_00100208;
                    if (param_2 == DAT_00100cb0) {
                      lVar1 = 8;
                    }
                    else if ((DAT_00100e40 == 9) || (lVar1 = 9, DAT_00100d78 != param_2))
                    goto LAB_00100208;
                  }
                }
              }
            }
          }
        }
      }
    }
    *param_3 = DAT_00100e44;
    return &DAT_00100678 + lVar1 * 200;
  }
LAB_00100208:
  puVar2 = (undefined *)OSSL_PROVIDER_query_operation(DAT_00100668);
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
         (DAT_00100668 = OSSL_PROVIDER_load(ourglobals,"default"), DAT_00100668 != 0)) {
        lVar3 = ossl_prov_ctx_new(DAT_00100668);
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
      OSSL_PROVIDER_unload(DAT_00100668);
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
  plVar5 = (long *)OSSL_PROVIDER_query_operation(DAT_00100668,param_1,&local_44);
  if (((plVar5 == (long *)0x0) || (ptr == (char *)0x0)) || (iVar4 = DAT_00100e40, 9 < DAT_00100e40))
  {
LAB_00100548:
    bVar3 = false;
  }
  else {
    lVar9 = (long)DAT_00100e40;
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
        if (__haystack == (char *)0x0) goto LAB_00100548;
        pcVar8 = strstr(__haystack,__s);
        if (((pcVar8 != (char *)0x0) && ((pcVar8[sVar7] == '\0' || (pcVar8[sVar7] == ':')))) &&
           ((pcVar8 == __haystack || (pcVar8[-1] == ':')))) break;
        __haystack = (char *)plVar11[4];
        plVar11 = plVar11 + 4;
      }
      if (puVar10 == (undefined8 *)(&DAT_00100700 + lVar9 * 200)) goto LAB_00100548;
      lVar1 = plVar11[1];
      puVar10[3] = *plVar11;
      puVar10[4] = lVar1;
      lVar2 = plVar11[3];
      lVar1 = *plVar11;
      puVar10[5] = plVar11[2];
      puVar10[6] = lVar2;
      if (lVar1 == 0) goto LAB_00100548;
      __s = pcVar6 + 1;
      if (pcVar6 == (char *)0x0) {
        __s = (char *)0x0;
      }
      puVar10 = puVar10 + 4;
    } while (!bVar3);
    _DAT_00100e40 = CONCAT44(local_44,iVar4 + 1);
    (&DAT_00100670)[lVar9 * 0x32] = param_1;
  }
  OSSL_PROVIDER_unquery_operation(DAT_00100668,param_1,plVar5);
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
  
  uVar1 = test_ulong_eq("test/filterprov.c",0x114,"globs->query_count",&_LC0,DAT_00100e48,0);
  if ((int)uVar1 != 0) {
    uVar1 = (ulong)(DAT_00100e50 == 0);
  }
  return uVar1;
}


