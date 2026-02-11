
void leaf_check_all(long param_1,char *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  
  lVar2 = *(long *)(param_3 + 8);
  *(undefined4 *)(param_3 + 0x18) = 0;
  plVar4 = *(long **)(param_3 + 0x10);
  if (lVar2 != 0) {
    iVar1 = *(int *)(param_3 + 0x1c);
    lVar5 = 0;
    do {
      if (iVar1 == 0) {
        while ((int)plVar4[2] != 0) {
          lVar5 = lVar5 + 1;
          plVar4 = plVar4 + 3;
          if (lVar5 == lVar2) goto LAB_00100094;
        }
      }
      if (*plVar4 == param_1) {
        iVar3 = strcmp(param_2,(char *)plVar4[1]);
        if (iVar3 == 0) {
          *(undefined4 *)(param_3 + 0x18) = 1;
          return;
        }
      }
      lVar5 = lVar5 + 1;
      plVar4 = plVar4 + 3;
    } while (lVar5 != lVar2);
  }
LAB_00100094:
  test_error("test/sparse_array_test.c",0x7c,"Index %ju with value %s not found",param_1,param_2);
  return;
}



void leaf_delete(long param_1,char *param_2,undefined8 *param_3)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  
  lVar1 = param_3[1];
  *(undefined4 *)(param_3 + 3) = 0;
  plVar3 = (long *)param_3[2];
  if (lVar1 != 0) {
    lVar4 = 0;
    do {
      if (*plVar3 == param_1) {
        iVar2 = strcmp(param_2,(char *)plVar3[1]);
        if (iVar2 == 0) {
          *(undefined4 *)(param_3 + 3) = 1;
          ossl_sa_set(*param_3,param_1,0);
          return;
        }
      }
      lVar4 = lVar4 + 1;
      plVar3 = plVar3 + 3;
    } while (lVar4 != lVar1);
  }
  test_error("test/sparse_array_test.c",0x8c,"Index %ju with value %s not found",param_1,param_2);
  return;
}



undefined8 test_sparse_array_doall(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long in_FS_OFFSET;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 *local_48;
  int local_40;
  undefined4 local_3c;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = ossl_sa_new();
  iVar1 = test_ptr("test/sparse_array_test.c",0x9b,"sa = ossl_sa_char_new()",uVar2);
  if (iVar1 != 0) {
    puVar3 = &cases_2;
    local_3c = 1;
    lVar5 = 0;
    local_50 = 8;
    local_48 = &cases_2;
    local_58 = 0;
    do {
      iVar1 = ossl_sa_set(uVar2,*puVar3,puVar3[1]);
      lVar5 = lVar5 + 1;
      iVar1 = test_true("test/sparse_array_test.c",0xa2,
                        "ossl_sa_char_set(sa, cases[i].n, cases[i].v)",iVar1 != 0);
      if (iVar1 == 0) {
        test_note("failed at iteration %zu",lVar5);
        goto LAB_001002c0;
      }
      puVar3 = puVar3 + 3;
    } while (lVar5 != 8);
    ossl_sa_doall_arg(uVar2,0x100000,&local_58);
    if (local_40 == 0) {
      test_info("test/sparse_array_test.c",0xa9,"while checking all elements");
    }
    else {
      local_3c = 0;
      local_58 = uVar2;
      ossl_sa_doall_arg(uVar2,leaf_delete,&local_58);
      if (local_40 == 0) {
        test_info("test/sparse_array_test.c",0xb0,"while deleting selected elements");
      }
      else {
        uVar4 = 1;
        ossl_sa_doall_arg(uVar2,0x100000,&local_58);
        if (local_40 != 0) goto LAB_001002c2;
        test_info("test/sparse_array_test.c",0xb5,"while checking for deleted elements");
      }
    }
  }
LAB_001002c0:
  uVar4 = 0;
LAB_001002c2:
  ossl_sa_free(uVar2);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int test_sparse_array_num(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar3 = 0;
  uVar2 = ossl_sa_num(0);
  iVar1 = test_size_t_eq("test/sparse_array_test.c",0x53,"ossl_sa_char_num(NULL)",&_LC8,uVar2,0);
  if (iVar1 != 0) {
    uVar3 = ossl_sa_new();
    iVar1 = test_ptr("test/sparse_array_test.c",0x54,"sa = ossl_sa_char_new()",uVar3);
    if (iVar1 != 0) {
      puVar5 = &cases_1;
      uVar2 = ossl_sa_num(uVar3);
      iVar1 = test_size_t_eq("test/sparse_array_test.c",0x55,"ossl_sa_char_num(sa)",&_LC8,uVar2,0);
      if (iVar1 != 0) {
        do {
          iVar1 = ossl_sa_set(uVar3,puVar5[1],puVar5[2]);
          iVar1 = test_true("test/sparse_array_test.c",0x58,
                            "ossl_sa_char_set(sa, cases[i].n, cases[i].v)",iVar1 != 0);
          if (iVar1 == 0) goto LAB_001003d3;
          uVar2 = *puVar5;
          uVar4 = ossl_sa_num(uVar3);
          iVar1 = test_size_t_eq("test/sparse_array_test.c",0x59,"ossl_sa_char_num(sa)",
                                 "cases[i].num",uVar4,uVar2);
          if (iVar1 == 0) goto LAB_001003d3;
          puVar5 = puVar5 + 3;
        } while (puVar5 != &cases_2);
        iVar1 = 1;
        goto LAB_0010038d;
      }
    }
LAB_001003d3:
    iVar1 = 0;
  }
LAB_0010038d:
  ossl_sa_free(uVar3);
  return iVar1;
}



undefined8 test_sparse_array(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  
  uVar2 = ossl_sa_new();
  iVar1 = test_ptr("test/sparse_array_test.c",0x2b,"sa = ossl_sa_char_new()",uVar2);
  if (iVar1 != 0) {
    uVar3 = ossl_sa_get(uVar2,3);
    iVar1 = test_ptr_null("test/sparse_array_test.c",0x2c,"ossl_sa_char_get(sa, 3)",uVar3);
    if (iVar1 != 0) {
      uVar3 = ossl_sa_get(uVar2,0);
      iVar1 = test_ptr_null("test/sparse_array_test.c",0x2d,"ossl_sa_char_get(sa, 0)",uVar3);
      if (iVar1 != 0) {
        uVar3 = ossl_sa_get(uVar2,0xffffffff);
        iVar1 = test_ptr_null("test/sparse_array_test.c",0x2e,"ossl_sa_char_get(sa, UINT_MAX)",uVar3
                             );
        if (iVar1 != 0) {
          lVar5 = 1;
          puVar7 = &cases_0;
          do {
            iVar1 = ossl_sa_set(uVar2,*puVar7,puVar7[1]);
            iVar1 = test_true("test/sparse_array_test.c",0x32,
                              "ossl_sa_char_set(sa, cases[i].n, cases[i].v)",iVar1 != 0);
            if (iVar1 == 0) {
              test_note("iteration %zu",lVar5);
              goto LAB_001004dc;
            }
            puVar6 = &cases_0;
            lVar9 = 0;
            do {
              lVar8 = lVar9;
              uVar3 = puVar6[1];
              lVar9 = lVar8 + 1;
              uVar4 = ossl_sa_get(uVar2,*puVar6);
              iVar1 = test_str_eq("test/sparse_array_test.c",0x37,"ossl_sa_char_get(sa, cases[j].n)"
                                  ,"cases[j].v",uVar4,uVar3);
              if (iVar1 == 0) {
                test_note("iteration %zu / %zu",lVar5,lVar9);
                goto LAB_001004dc;
              }
              puVar6 = puVar6 + 2;
            } while (lVar9 != lVar5);
            lVar5 = lVar8 + 2;
            puVar7 = puVar7 + 2;
          } while (lVar9 != 8);
          uVar3 = 1;
          goto LAB_001004de;
        }
      }
    }
  }
LAB_001004dc:
  uVar3 = 0;
LAB_001004de:
  ossl_sa_free(uVar2);
  return uVar3;
}



undefined8 setup_tests(void)

{
  add_test("test_sparse_array",test_sparse_array);
  add_test("test_sparse_array_num",test_sparse_array_num);
  add_test("test_sparse_array_doall",test_sparse_array_doall);
  return 1;
}


