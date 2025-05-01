
ulong int_compare(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  uVar1 = (ulong)(*(int *)*param_2 < *(int *)*param_1);
  if (*(int *)*param_1 < *(int *)*param_2) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



int uchar_compare(undefined8 *param_1,undefined8 *param_2)

{
  return (uint)*(byte *)*param_1 - (uint)*(byte *)*param_2;
}



undefined8 test_SU_stack(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  ulong uVar6;
  uint *puVar7;
  long in_FS_OFFSET;
  uint local_68 [10];
  long local_40;
  
  uVar5 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = OPENSSL_sk_new_null();
  puVar7 = local_68;
  do {
    if ((uVar5 & 1) == 0) {
      *puVar7 = uVar5;
    }
    else {
      *(char *)puVar7 = (char)uVar5 + 'A';
    }
    uVar1 = OPENSSL_sk_num(uVar3);
    iVar2 = test_int_eq("test/stack_test.c",0x167,"sk_SU_num(s)",&_LC0,uVar1,uVar5);
    if (iVar2 == 0) {
      test_info("test/stack_test.c",0x168,"SU stack size %d",uVar5);
      goto LAB_0010019e;
    }
    uVar5 = uVar5 + 1;
    OPENSSL_sk_push(uVar3,puVar7);
    puVar7 = puVar7 + 1;
  } while (uVar5 != 10);
  uVar1 = OPENSSL_sk_num(uVar3);
  iVar2 = test_int_eq("test/stack_test.c",0x16d,"sk_SU_num(s)",&_LC4,uVar1,10);
  if (iVar2 == 0) {
LAB_0010019e:
    uVar4 = 0;
  }
  else {
    uVar6 = 0;
    do {
      uVar4 = OPENSSL_sk_value(uVar3,uVar6 & 0xffffffff);
      iVar2 = test_ptr_eq("test/stack_test.c",0x172,"sk_SU_value(s, i)","v + i",uVar4,
                          local_68 + uVar6);
      if (iVar2 == 0) {
        uVar4 = 0;
        test_info("test/stack_test.c",0x173,"SU pointer check %d",uVar6 & 0xffffffff);
        goto LAB_0010015c;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 != 10);
    uVar4 = 1;
  }
LAB_0010015c:
  OPENSSL_sk_free(uVar3);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void SS_copy(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)CRYPTO_malloc(8,"test/stack_test.c",0x104);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = *param_1;
  }
  return;
}



void SS_free(void *param_1)

{
  CRYPTO_free(param_1);
  return;
}



undefined4 test_SS_stack(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  void *ptr;
  undefined8 uVar9;
  ulong uVar10;
  long in_FS_OFFSET;
  undefined8 local_98 [11];
  long local_40;
  
  uVar10 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar5 = OPENSSL_sk_new_null();
  do {
    puVar6 = (undefined4 *)CRYPTO_malloc(8,"test/stack_test.c",0x11a);
    local_98[uVar10] = puVar6;
    iVar1 = test_ptr("test/stack_test.c",0x11c,&_LC8,puVar6);
    if (iVar1 == 0) goto LAB_00100337;
    *puVar6 = (int)uVar10;
    *(char *)(puVar6 + 1) = (char)uVar10 + 'A';
    uVar2 = OPENSSL_sk_num(uVar5);
    iVar1 = test_int_eq("test/stack_test.c",0x120,"sk_SS_num(s)",&_LC0,uVar2,uVar10 & 0xffffffff);
    if (iVar1 == 0) {
      test_info("test/stack_test.c",0x121,"SS stack size %d",uVar10 & 0xffffffff);
      uVar7 = 0;
      uVar2 = 0;
      goto LAB_0010033d;
    }
    uVar10 = uVar10 + 1;
    OPENSSL_sk_push(uVar5,puVar6);
  } while (uVar10 != 10);
  uVar2 = OPENSSL_sk_num(uVar5);
  iVar1 = test_int_eq("test/stack_test.c",0x126,"sk_SS_num(s)",&_LC4,uVar2,10);
  if (iVar1 != 0) {
    uVar7 = OPENSSL_sk_deep_copy(0,SS_copy,SS_free);
    iVar1 = OPENSSL_sk_num(uVar7);
    if (iVar1 != 0) {
      uVar2 = 0;
      goto LAB_0010033d;
    }
    OPENSSL_sk_free(uVar7);
    uVar7 = OPENSSL_sk_deep_copy(uVar5,SS_copy,SS_free);
    iVar1 = test_ptr("test/stack_test.c",0x12f,&_LC11,uVar7);
    uVar2 = 0;
    if (iVar1 == 0) goto LAB_0010033d;
    uVar10 = 0;
    do {
      puVar8 = (undefined4 *)OPENSSL_sk_value(uVar7,uVar10 & 0xffffffff);
      puVar6 = (undefined4 *)local_98[uVar10];
      iVar1 = test_ptr_ne("test/stack_test.c",0x133,&_LC12,&_LC8,puVar8,puVar6);
      if (iVar1 == 0) {
        test_info("test/stack_test.c",0x134,"SS deepcopy non-copy %d",uVar10 & 0xffffffff);
        goto LAB_0010033d;
      }
      iVar1 = test_int_eq("test/stack_test.c",0x137,&_LC15,"v[i]->n",*puVar8,*puVar6);
      if (iVar1 == 0) {
        test_info("test/stack_test.c",0x138,"test SS deepcopy int %d",uVar10 & 0xffffffff);
        goto LAB_0010033d;
      }
      iVar1 = test_char_eq("test/stack_test.c",0x13b,&_LC18,"v[i]->c",(int)*(char *)(puVar8 + 1),
                           (int)*(char *)(puVar6 + 1));
      if (iVar1 == 0) {
        test_info("test/stack_test.c",0x13c,"SS deepcopy char %d",uVar10 & 0xffffffff);
        goto LAB_0010033d;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 != 10);
    OPENSSL_sk_pop_free(uVar7,SS_free);
    ptr = (void *)OPENSSL_sk_delete_ptr(uVar5,local_98[3]);
    iVar1 = test_ptr("test/stack_test.c",0x147,&_LC12,ptr);
    if (iVar1 != 0) {
      CRYPTO_free(ptr);
      uVar2 = OPENSSL_sk_num(uVar5);
      iVar1 = test_int_eq("test/stack_test.c",0x14a,"sk_SS_num(s)","n - 1",uVar2,9);
      if (iVar1 != 0) {
        iVar1 = 0;
        do {
          for (; iVar1 < 3; iVar1 = iVar1 + 1) {
            uVar7 = local_98[iVar1];
            uVar9 = OPENSSL_sk_value(uVar5,iVar1);
            iVar4 = test_ptr_eq("test/stack_test.c",0x14d,"sk_SS_value(s, i)","v[i<3 ? i : 1+i]",
                                uVar9,uVar7);
            if (iVar4 == 0) {
LAB_0010070b:
              test_info("test/stack_test.c",0x14e,"SS delete ptr item %d",iVar1);
              goto LAB_00100337;
            }
          }
          iVar4 = iVar1 + 1;
          uVar7 = local_98[iVar4];
          uVar9 = OPENSSL_sk_value(uVar5,iVar1);
          iVar3 = test_ptr_eq("test/stack_test.c",0x14d,"sk_SS_value(s, i)","v[i<3 ? i : 1+i]",uVar9
                              ,uVar7);
          if (iVar3 == 0) goto LAB_0010070b;
          iVar1 = iVar4;
        } while (iVar4 != 9);
        uVar2 = 1;
        uVar7 = 0;
        goto LAB_0010033d;
      }
    }
  }
LAB_00100337:
  uVar2 = 0;
  uVar7 = 0;
LAB_0010033d:
  OPENSSL_sk_pop_free(uVar7,SS_free);
  OPENSSL_sk_pop_free(uVar5,SS_free);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



undefined4 test_uchar_stack(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  
  uVar4 = OPENSSL_sk_new(uchar_compare);
  iVar1 = test_ptr("test/stack_test.c",0xb6,&_LC24,uVar4);
  if (iVar1 != 0) {
    if (0 < param_1) {
      iVar1 = OPENSSL_sk_reserve(uVar4,param_1 * 5);
      iVar1 = test_true("test/stack_test.c",0xb7,"sk_uchar_reserve(s, 5 * reserve)",iVar1 != 0);
      if (iVar1 == 0) goto LAB_00100803;
    }
    uVar7 = 0;
    do {
      uVar2 = OPENSSL_sk_num(uVar4);
      iVar1 = test_int_eq("test/stack_test.c",0xbc,"sk_uchar_num(s)",&_LC0,uVar2,uVar7 & 0xffffffff)
      ;
      if (iVar1 == 0) {
        uVar2 = 0;
        uVar5 = 0;
        test_info("test/stack_test.c",0xbd,"uchar stack size %d",uVar7 & 0xffffffff);
        goto LAB_00100809;
      }
      lVar8 = (long)&v_4 + uVar7;
      uVar7 = uVar7 + 1;
      OPENSSL_sk_unshift(uVar4,lVar8);
    } while (uVar7 != 6);
    uVar2 = OPENSSL_sk_num(uVar4);
    iVar1 = test_int_eq("test/stack_test.c",0xc2,"sk_uchar_num(s)",&_LC4,uVar2,6);
    if (iVar1 != 0) {
      uVar5 = OPENSSL_sk_dup(0);
      iVar1 = OPENSSL_sk_num(uVar5);
      if (iVar1 == 0) {
        OPENSSL_sk_free(uVar5);
        uVar5 = OPENSSL_sk_dup(uVar4);
        uVar2 = OPENSSL_sk_num(uVar5);
        iVar1 = test_int_eq("test/stack_test.c",0xcb,"sk_uchar_num(r)",&_LC4,uVar2,6);
        uVar2 = 0;
        if (iVar1 != 0) {
          uVar7 = 0;
          OPENSSL_sk_sort(uVar5);
          do {
            uVar6 = OPENSSL_sk_pop(uVar4);
            iVar1 = test_ptr_eq("test/stack_test.c",0xd1,"sk_uchar_pop(s)","v + i",uVar6,
                                (long)&v_4 + uVar7);
            if (iVar1 == 0) {
              test_info("test/stack_test.c",0xd2,"uchar pop %d",uVar7 & 0xffffffff);
              goto LAB_00100809;
            }
            uVar7 = uVar7 + 1;
          } while (uVar7 != 6);
          OPENSSL_sk_free(uVar4);
          uVar3 = OPENSSL_sk_num(uVar5);
          iVar1 = test_int_eq("test/stack_test.c",0xdb,"sk_uchar_num(r)",&_LC4,uVar3,6);
          if (iVar1 != 0) {
            OPENSSL_sk_zero(uVar5);
            uVar3 = OPENSSL_sk_num(uVar5);
            iVar1 = test_int_eq("test/stack_test.c",0xe0,"sk_uchar_num(r)",&_LC31,uVar3,0);
            if (iVar1 != 0) {
              uVar7 = 0;
              OPENSSL_sk_insert(uVar5,&v_4,0);
              OPENSSL_sk_insert(uVar5,0x101570,0xffffffff);
              OPENSSL_sk_insert(uVar5,0x10156f,1);
              do {
                uVar4 = OPENSSL_sk_value(uVar5,uVar7 & 0xffffffff);
                iVar1 = test_ptr_eq("test/stack_test.c",0xe8,"sk_uchar_value(r, i)","v + i",uVar4,
                                    (long)&v_4 + uVar7);
                if (iVar1 == 0) {
                  uVar4 = 0;
                  test_info("test/stack_test.c",0xe9,"uchar insert %d",uVar7 & 0xffffffff);
                  goto LAB_00100809;
                }
                uVar7 = uVar7 + 1;
              } while (uVar7 != 3);
              uVar4 = OPENSSL_sk_delete(uVar5,0xc);
              iVar1 = test_ptr_null("test/stack_test.c",0xee,"sk_uchar_delete(r, 12)",uVar4);
              if (iVar1 != 0) {
                uVar4 = OPENSSL_sk_delete(uVar5,1);
                iVar1 = test_ptr_eq("test/stack_test.c",0xf0,"sk_uchar_delete(r, 1)","v + 1",uVar4,
                                    0x10156f);
                if (iVar1 != 0) {
                  lVar8 = 0;
                  OPENSSL_sk_set(uVar5,1,0x10156f);
                  while( true ) {
                    uVar4 = OPENSSL_sk_value(uVar5,lVar8);
                    iVar1 = test_ptr_eq("test/stack_test.c",0xf6,"sk_uchar_value(r, i)","v + i",
                                        uVar4,(long)&v_4 + lVar8);
                    if (iVar1 == 0) break;
                    if (lVar8 != 0) {
                      uVar2 = 1;
                      uVar4 = 0;
                      goto LAB_00100809;
                    }
                    lVar8 = 1;
                  }
                  uVar4 = 0;
                  test_info("test/stack_test.c",0xf7,"uchar set %d",lVar8);
                  goto LAB_00100809;
                }
              }
            }
          }
          uVar4 = 0;
        }
      }
      else {
        uVar2 = 0;
      }
      goto LAB_00100809;
    }
  }
LAB_00100803:
  uVar2 = 0;
  uVar5 = 0;
LAB_00100809:
  OPENSSL_sk_free(uVar5);
  OPENSSL_sk_free(uVar4);
  return uVar2;
}



bool test_int_stack(int param_1)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  bool bVar11;
  undefined1 *local_40;
  
  uVar6 = OPENSSL_sk_new_null();
  iVar2 = test_ptr("test/stack_test.c",0x57,&_LC24,uVar6);
  if (iVar2 != 0) {
    if (0 < param_1) {
      iVar2 = OPENSSL_sk_reserve(uVar6,param_1 * 5);
      iVar2 = test_true("test/stack_test.c",0x58,"sk_sint_reserve(s, 5 * reserve)",iVar2 != 0);
      if (iVar2 == 0) goto LAB_00100f10;
    }
    uVar8 = 0;
    do {
      uVar3 = OPENSSL_sk_num(uVar6);
      iVar2 = test_int_eq("test/stack_test.c",0x5d,"sk_sint_num(s)",&_LC0,uVar3,uVar8 & 0xffffffff);
      if (iVar2 == 0) {
        test_info("test/stack_test.c",0x5e,"int stack size %d",uVar8 & 0xffffffff);
        goto LAB_00100f10;
      }
      lVar1 = uVar8 * 4;
      uVar8 = uVar8 + 1;
      OPENSSL_sk_push(uVar6,v_3 + lVar1);
    } while (uVar8 != 9);
    uVar3 = OPENSSL_sk_num(uVar6);
    iVar2 = test_int_eq("test/stack_test.c",99,"sk_sint_num(s)",&_LC4,uVar3,9);
    if (iVar2 != 0) {
      uVar8 = 0;
      do {
        uVar7 = OPENSSL_sk_value(uVar6,uVar8 & 0xffffffff);
        iVar2 = test_ptr_eq("test/stack_test.c",0x68,"sk_sint_value(s, i)","v + i",uVar7,
                            v_3 + uVar8 * 4);
        if (iVar2 == 0) {
          test_info("test/stack_test.c",0x69,"int value %d",uVar8 & 0xffffffff);
          goto LAB_00100f10;
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 != 9);
      iVar2 = 0;
      local_40 = finds_2;
      puVar10 = finds_2;
      do {
        iVar4 = *(int *)(puVar10 + 4);
        puVar9 = &notpresent_1;
        if (iVar4 != -1) {
          puVar9 = (undefined4 *)(v_3 + (long)iVar4 * 4);
        }
        uVar3 = OPENSSL_sk_find(uVar6,puVar9);
        iVar4 = test_int_eq("test/stack_test.c",0x72,"sk_sint_find(s, val)","finds[i].unsorted",
                            uVar3,iVar4);
        if (iVar4 == 0) {
          test_info("test/stack_test.c",0x73,"int unsorted find %d",iVar2);
          goto LAB_00100f10;
        }
        iVar2 = iVar2 + 1;
        puVar10 = puVar10 + 0x10;
      } while (iVar2 != 5);
      puVar10 = finds_2;
      iVar2 = 0;
      do {
        iVar4 = *(int *)(puVar10 + 4);
        puVar9 = &notpresent_1;
        if (iVar4 != -1) {
          puVar9 = (undefined4 *)(v_3 + (long)iVar4 * 4);
        }
        uVar3 = OPENSSL_sk_find_ex(uVar6,puVar9);
        iVar4 = test_int_eq("test/stack_test.c",0x7d,"sk_sint_find_ex(s, val)","finds[i].unsorted",
                            uVar3,iVar4);
        if (iVar4 == 0) {
          test_info("test/stack_test.c",0x7e,"int unsorted find_ex %d",iVar2);
          goto LAB_00100f10;
        }
        iVar2 = iVar2 + 1;
        puVar10 = puVar10 + 0x10;
      } while (iVar2 != 5);
      iVar2 = OPENSSL_sk_is_sorted(uVar6);
      iVar2 = test_false("test/stack_test.c",0x84,"sk_sint_is_sorted(s)",iVar2 != 0);
      if (iVar2 != 0) {
        OPENSSL_sk_set_cmp_func(uVar6,0x100000);
        OPENSSL_sk_sort(uVar6);
        iVar2 = OPENSSL_sk_is_sorted(uVar6);
        iVar2 = test_true("test/stack_test.c",0x88,"sk_sint_is_sorted(s)",iVar2 != 0);
        if (iVar2 != 0) {
          puVar10 = finds_2;
          iVar2 = 0;
          do {
            uVar3 = *(undefined4 *)(puVar10 + 8);
            uVar5 = OPENSSL_sk_find(uVar6,puVar10);
            iVar4 = test_int_eq("test/stack_test.c",0x8d,"sk_sint_find(s, &finds[i].value)",
                                "finds[i].sorted",uVar5,uVar3);
            if (iVar4 == 0) {
              test_info("test/stack_test.c",0x8e,"int sorted find %d",iVar2);
              goto LAB_00100f10;
            }
            iVar2 = iVar2 + 1;
            puVar10 = puVar10 + 0x10;
          } while (iVar2 != 5);
          iVar2 = 0;
          do {
            uVar3 = *(undefined4 *)(local_40 + 0xc);
            uVar5 = OPENSSL_sk_find_ex(uVar6);
            iVar4 = test_int_eq("test/stack_test.c",0x94,"sk_sint_find_ex(s, &finds[i].value)",
                                "finds[i].ex",uVar5,uVar3);
            if (iVar4 == 0) {
              test_info("test/stack_test.c",0x95,"int sorted find_ex present %d",iVar2);
              goto LAB_00100f10;
            }
            iVar2 = iVar2 + 1;
            local_40 = local_40 + 0x10;
          } while (iVar2 != 5);
          puVar10 = exfinds_0;
          iVar2 = 0;
          do {
            uVar3 = *(undefined4 *)(puVar10 + 4);
            uVar5 = OPENSSL_sk_find_ex(uVar6,puVar10);
            iVar4 = test_int_eq("test/stack_test.c",0x99,"sk_sint_find_ex(s, &exfinds[i].value)",
                                "exfinds[i].ex",uVar5,uVar3);
            if (iVar4 == 0) {
              test_info("test/stack_test.c",0x9a,"int sorted find_ex absent %d",iVar2);
              goto LAB_00100f10;
            }
            iVar2 = iVar2 + 1;
            puVar10 = puVar10 + 8;
          } while (iVar2 != 6);
          uVar7 = OPENSSL_sk_shift(uVar6);
          iVar2 = test_ptr_eq("test/stack_test.c",0x9f,"sk_sint_shift(s)","v + 6",uVar7,0x101138);
          bVar11 = iVar2 != 0;
          goto LAB_00100f12;
        }
      }
    }
  }
LAB_00100f10:
  bVar11 = false;
LAB_00100f12:
  OPENSSL_sk_free(uVar6);
  return bVar11;
}



undefined8 setup_tests(void)

{
  add_all_tests("test_int_stack",test_int_stack,4,1);
  add_all_tests("test_uchar_stack",test_uchar_stack,4,1);
  add_test("test_SS_stack",test_SS_stack);
  add_test("test_SU_stack",test_SU_stack);
  return 1;
}


