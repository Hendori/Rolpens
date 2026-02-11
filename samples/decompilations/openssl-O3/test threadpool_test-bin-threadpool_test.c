
void test_thread_native_fn(int *param_1)

{
  *param_1 = *param_1 + 1;
  return;
}



undefined8 test_thread_native_multiple_joins_fn1(void)

{
  return 0;
}



ulong test_thread_reported_flags(void)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar1 = OSSL_get_thread_support_flags();
  uVar3 = test_int_eq("test/threadpool_test.c",0x1e,"flags & OSSL_THREAD_SUPPORT_FLAG_THREAD_POOL",
                      "OSSL_THREAD_SUPPORT_FLAG_THREAD_POOL",uVar1 & 1,1);
  if ((int)uVar3 != 0) {
    iVar2 = test_int_eq("test/threadpool_test.c",0x27,
                        "flags & OSSL_THREAD_SUPPORT_FLAG_DEFAULT_SPAWN",
                        "OSSL_THREAD_SUPPORT_FLAG_DEFAULT_SPAWN",uVar1 & 2,2);
    uVar3 = (ulong)(iVar2 != 0);
  }
  return uVar3;
}



/* WARNING: Type propagation algorithm not settling */

bool test_thread_internal(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  long lVar8;
  undefined4 *puVar9;
  long in_FS_OFFSET;
  bool bVar10;
  undefined4 auStack_74 [4];
  undefined1 local_64 [8];
  undefined4 local_5c;
  long local_58 [5];
  
  local_58[3] = *(long *)(in_FS_OFFSET + 0x28);
  local_5c = 0;
  local_64 = (undefined1  [8])0x0;
  uVar3 = OSSL_LIB_CTX_new();
  uVar4 = OSSL_get_thread_support_flags();
  if ((uVar4 & 2) == 0) {
    uVar5 = OSSL_get_max_threads(0);
    iVar1 = test_uint64_t_eq("test/threadpool_test.c",0x6e,"OSSL_get_max_threads(NULL)",&_LC5,uVar5,
                             0);
    if (iVar1 != 0) {
      uVar5 = OSSL_get_max_threads(uVar3);
      iVar1 = test_uint64_t_eq("test/threadpool_test.c",0x70,"OSSL_get_max_threads(cust_ctx)",&_LC5,
                               uVar5,0);
      if (iVar1 != 0) {
        uVar2 = OSSL_set_max_threads(0,1);
        iVar1 = test_int_eq("test/threadpool_test.c",0x73,"OSSL_set_max_threads(NULL, 1)",&_LC5,
                            uVar2,0);
        if (iVar1 != 0) {
          uVar2 = OSSL_set_max_threads(uVar3,1);
          iVar1 = test_int_eq("test/threadpool_test.c",0x75,"OSSL_set_max_threads(cust_ctx, 1)",
                              &_LC5,uVar2,0);
          if (iVar1 != 0) {
            uVar5 = OSSL_get_max_threads(0);
            iVar1 = test_uint64_t_eq("test/threadpool_test.c",0x78,"OSSL_get_max_threads(NULL)",
                                     &_LC5,uVar5,0);
            if (iVar1 != 0) {
              uVar5 = OSSL_get_max_threads(uVar3);
              iVar1 = test_uint64_t_eq("test/threadpool_test.c",0x7a,
                                       "OSSL_get_max_threads(cust_ctx)",&_LC5,uVar5,0);
              if (iVar1 != 0) {
                uVar5 = ossl_crypto_thread_start(0,0x100000,local_64);
                iVar1 = test_ptr_null("test/threadpool_test.c",0x7e,&_LC10,uVar5);
                bVar10 = iVar1 != 0;
                goto LAB_00100124;
              }
            }
          }
        }
      }
    }
  }
  else {
    uVar5 = OSSL_get_max_threads(0);
    iVar1 = test_uint64_t_eq("test/threadpool_test.c",0x87,"OSSL_get_max_threads(NULL)",&_LC5,uVar5,
                             0);
    if (iVar1 != 0) {
      puVar7 = (undefined4 *)local_64;
      uVar5 = ossl_crypto_thread_start(0,0x100000,puVar7);
      iVar1 = test_ptr_null("test/threadpool_test.c",0x8a,&_LC10,uVar5);
      if (iVar1 != 0) {
        uVar5 = OSSL_get_max_threads(uVar3);
        iVar1 = test_uint64_t_eq("test/threadpool_test.c",0x8e,"OSSL_get_max_threads(cust_ctx)",
                                 &_LC5,uVar5,0);
        if (iVar1 != 0) {
          uVar2 = OSSL_set_max_threads(uVar3,1);
          iVar1 = test_int_eq("test/threadpool_test.c",0x90,"OSSL_set_max_threads(cust_ctx, 1)",
                              &_LC11,uVar2,1);
          if (iVar1 != 0) {
            uVar5 = OSSL_get_max_threads(0);
            iVar1 = test_uint64_t_eq("test/threadpool_test.c",0x92,"OSSL_get_max_threads(NULL)",
                                     &_LC5,uVar5,0);
            if (iVar1 != 0) {
              uVar5 = OSSL_get_max_threads(uVar3);
              iVar1 = test_uint64_t_eq("test/threadpool_test.c",0x94,
                                       "OSSL_get_max_threads(cust_ctx)",&_LC11,uVar5,1);
              if (iVar1 != 0) {
                local_58[0] = ossl_crypto_thread_start(0,0x100000,puVar7);
                iVar1 = test_ptr_null("test/threadpool_test.c",0x97,&_LC10,local_58[0]);
                if (iVar1 != 0) {
                  uVar2 = OSSL_set_max_threads(uVar3,0);
                  iVar1 = test_int_eq("test/threadpool_test.c",0x99,
                                      "OSSL_set_max_threads(cust_ctx, 0)",&_LC11,uVar2,1);
                  if (iVar1 != 0) {
                    uVar2 = OSSL_set_max_threads(0,1);
                    iVar1 = test_int_eq("test/threadpool_test.c",0x9e,
                                        "OSSL_set_max_threads(NULL, 1)",&_LC11,uVar2,1);
                    if (iVar1 != 0) {
                      uVar5 = OSSL_get_max_threads(0);
                      iVar1 = test_uint64_t_eq("test/threadpool_test.c",0xa0,
                                               "OSSL_get_max_threads(NULL)",&_LC11,uVar5,1);
                      if (iVar1 != 0) {
                        uVar5 = OSSL_get_max_threads(uVar3);
                        iVar1 = test_uint64_t_eq("test/threadpool_test.c",0xa2,
                                                 "OSSL_get_max_threads(cust_ctx)",&_LC5,uVar5,0);
                        if (iVar1 != 0) {
                          uVar4 = 1;
                          do {
                            local_64._0_4_ = (int)uVar4;
                            uVar5 = ossl_crypto_thread_start(0,0x100000,puVar7);
                            *(undefined8 *)(local_64 + uVar4 * 8 + 4) = uVar5;
                            iVar1 = test_ptr("test/threadpool_test.c",0xa9,&_LC13,uVar5);
                            if (iVar1 == 0) goto LAB_00100122;
                            puVar9 = auStack_74 + 1;
                            uVar2 = ossl_crypto_thread_join(uVar5,puVar9);
                            iVar1 = test_int_eq("test/threadpool_test.c",0xb2,
                                                "ossl_crypto_thread_join(t[i], &retval[0])",&_LC11,
                                                uVar2,1);
                            if (iVar1 == 0) goto LAB_00100122;
                            uVar2 = ossl_crypto_thread_join(uVar5,puVar9);
                            iVar1 = test_int_eq("test/threadpool_test.c",0xb4,
                                                "ossl_crypto_thread_join(t[i], &retval[0])",&_LC11,
                                                uVar2,1);
                            if (iVar1 == 0) goto LAB_00100122;
                            iVar1 = test_int_eq("test/threadpool_test.c",0xb7,"retval[0]","i + 1",
                                                auStack_74[1],uVar4 & 0xffffffff);
                            if (iVar1 == 0) goto LAB_00100122;
                            iVar1 = test_int_eq("test/threadpool_test.c",0xb7,"local[0]","i + 2",
                                                (ulong)local_64 & 0xffffffff,(int)uVar4 + 1);
                            if (iVar1 == 0) goto LAB_00100122;
                            uVar2 = ossl_crypto_thread_clean(uVar5);
                            iVar1 = test_int_eq("test/threadpool_test.c",0xba,
                                                "ossl_crypto_thread_clean(t[i])",&_LC11,uVar2,1);
                            if (iVar1 == 0) goto LAB_00100122;
                            *(undefined8 *)(local_64 + uVar4 * 8 + 4) = 0;
                            uVar2 = ossl_crypto_thread_clean(0);
                            iVar1 = test_int_eq("test/threadpool_test.c",0xbe,
                                                "ossl_crypto_thread_clean(t[i])",&_LC5,uVar2,0);
                            if (iVar1 == 0) goto LAB_00100122;
                            uVar4 = uVar4 + 1;
                          } while (uVar4 != 4);
                          uVar2 = OSSL_set_max_threads(0,3);
                          iVar1 = test_int_eq("test/threadpool_test.c",0xc4,
                                              "OSSL_set_max_threads(NULL, OSSL_NELEM(t))",&_LC11,
                                              uVar2,1);
                          if (iVar1 != 0) {
                            lVar8 = 1;
                            puVar6 = puVar7;
                            do {
                              *puVar6 = (int)lVar8;
                              uVar5 = ossl_crypto_thread_start(0,0x100000,puVar6);
                              *(undefined8 *)(local_64 + lVar8 * 8 + 4) = uVar5;
                              iVar1 = test_ptr("test/threadpool_test.c",0xca,&_LC13,uVar5);
                              if (iVar1 == 0) goto LAB_00100122;
                              lVar8 = lVar8 + 1;
                              puVar6 = puVar6 + 1;
                            } while (lVar8 != 4);
                            lVar8 = 0;
                            puVar6 = puVar9;
                            do {
                              uVar2 = ossl_crypto_thread_join(local_58[lVar8],puVar6);
                              iVar1 = test_int_eq("test/threadpool_test.c",0xce,
                                                  "ossl_crypto_thread_join(t[i], &retval[i])",&_LC11
                                                  ,uVar2,1);
                              if (iVar1 == 0) goto LAB_00100122;
                              lVar8 = lVar8 + 1;
                              puVar6 = puVar6 + 1;
                            } while (lVar8 != 3);
                            uVar4 = 1;
                            do {
                              iVar1 = test_int_eq("test/threadpool_test.c",0xd2,"retval[i]","i + 1",
                                                  auStack_74[uVar4],uVar4 & 0xffffffff);
                              if (iVar1 == 0) goto LAB_00100122;
                              iVar1 = test_int_eq("test/threadpool_test.c",0xd2,"local[i]","i + 2",
                                                  *(undefined4 *)(local_64 + uVar4 * 4 + -4),
                                                  (int)uVar4 + 1);
                              if (iVar1 == 0) goto LAB_00100122;
                              uVar2 = ossl_crypto_thread_clean
                                                (*(undefined8 *)(local_64 + uVar4 * 8 + 4));
                              iVar1 = test_int_eq("test/threadpool_test.c",0xd4,
                                                  "ossl_crypto_thread_clean(t[i])",&_LC11,uVar2,1);
                              if (iVar1 == 0) goto LAB_00100122;
                              uVar4 = uVar4 + 1;
                            } while (uVar4 != 4);
                            uVar2 = OSSL_set_max_threads(0,2);
                            iVar1 = test_int_eq("test/threadpool_test.c",0xda,
                                                "OSSL_set_max_threads(NULL, OSSL_NELEM(t) - 1)",
                                                &_LC11,uVar2,1);
                            if (iVar1 != 0) {
                              lVar8 = 1;
                              do {
                                *puVar7 = (int)lVar8;
                                uVar5 = ossl_crypto_thread_start(0,0x100000,puVar7);
                                *(undefined8 *)(local_64 + lVar8 * 8 + 4) = uVar5;
                                iVar1 = test_ptr("test/threadpool_test.c",0xe0,&_LC13,uVar5);
                                if (iVar1 == 0) goto LAB_00100122;
                                lVar8 = lVar8 + 1;
                                puVar7 = puVar7 + 1;
                              } while (lVar8 != 4);
                              lVar8 = 0;
                              do {
                                uVar2 = ossl_crypto_thread_join(local_58[lVar8],puVar9);
                                iVar1 = test_int_eq("test/threadpool_test.c",0xe4,
                                                    "ossl_crypto_thread_join(t[i], &retval[i])",
                                                    &_LC11,uVar2,1);
                                if (iVar1 == 0) goto LAB_00100122;
                                lVar8 = lVar8 + 1;
                                puVar9 = puVar9 + 1;
                              } while (lVar8 != 3);
                              uVar4 = 1;
                              do {
                                iVar1 = test_int_eq("test/threadpool_test.c",0xe8,"retval[i]",
                                                    "i + 1",auStack_74[uVar4],uVar4 & 0xffffffff);
                                if (iVar1 == 0) goto LAB_00100122;
                                iVar1 = test_int_eq("test/threadpool_test.c",0xe8,"local[i]","i + 2"
                                                    ,*(undefined4 *)(local_64 + uVar4 * 4 + -4),
                                                    (int)uVar4 + 1);
                                if (iVar1 == 0) goto LAB_00100122;
                                uVar2 = ossl_crypto_thread_clean
                                                  (*(undefined8 *)(local_64 + uVar4 * 8 + 4));
                                iVar1 = test_int_eq("test/threadpool_test.c",0xea,
                                                    "ossl_crypto_thread_clean(t[i])",&_LC11,uVar2,1)
                                ;
                                if (iVar1 == 0) goto LAB_00100122;
                                uVar4 = uVar4 + 1;
                              } while (uVar4 != 4);
                              uVar2 = OSSL_set_max_threads(0,0);
                              iVar1 = test_int_eq("test/threadpool_test.c",0xee,
                                                  "OSSL_set_max_threads(NULL, 0)",&_LC11,uVar2,1);
                              bVar10 = iVar1 != 0;
                              goto LAB_00100124;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_00100122:
  bVar10 = false;
LAB_00100124:
  OSSL_LIB_CTX_free(uVar3);
  if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 test_thread_native_multiple_joins_fn2(undefined8 param_1)

{
  ossl_crypto_thread_native_join(param_1,0);
  return 0;
}



bool test_thread_native_multiple_joins(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar3 = ossl_crypto_thread_native_start(test_thread_native_multiple_joins_fn1,0,1);
  uVar4 = ossl_crypto_thread_native_start(test_thread_native_multiple_joins_fn2,uVar3,1);
  uVar5 = ossl_crypto_thread_native_start(test_thread_native_multiple_joins_fn3,uVar3,1);
  iVar1 = test_ptr("test/threadpool_test.c",0x111,&_LC26,uVar3);
  if (((iVar1 != 0) && (iVar1 = test_ptr("test/threadpool_test.c",0x111,&_LC27,uVar4), iVar1 != 0))
     && (iVar1 = test_ptr("test/threadpool_test.c",0x111,&_LC28,uVar5), iVar1 != 0)) {
    uVar2 = ossl_crypto_thread_native_join(uVar5,0);
    iVar1 = test_int_eq("test/threadpool_test.c",0x114,"ossl_crypto_thread_native_join(t2, NULL)",
                        &_LC11,uVar2,1);
    if (iVar1 != 0) {
      uVar2 = ossl_crypto_thread_native_join(uVar4,0);
      iVar1 = test_int_eq("test/threadpool_test.c",0x116,"ossl_crypto_thread_native_join(t1, NULL)",
                          &_LC11,uVar2,1);
      if (iVar1 != 0) {
        uVar2 = ossl_crypto_thread_native_clean(uVar5);
        iVar1 = test_int_eq("test/threadpool_test.c",0x119,"ossl_crypto_thread_native_clean(t2)",
                            &_LC11,uVar2,1);
        if (iVar1 != 0) {
          uVar2 = ossl_crypto_thread_native_clean(uVar4);
          iVar1 = test_int_eq("test/threadpool_test.c",0x11c,"ossl_crypto_thread_native_clean(t1)",
                              &_LC11,uVar2,1);
          if (iVar1 != 0) {
            uVar2 = ossl_crypto_thread_native_clean(uVar3);
            iVar1 = test_int_eq("test/threadpool_test.c",0x11f,"ossl_crypto_thread_native_clean(t)",
                                &_LC11,uVar2,1);
            return iVar1 != 0;
          }
        }
      }
    }
  }
  return false;
}



bool test_thread_native(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  bool bVar4;
  undefined4 local_38;
  undefined4 local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_34 = 1;
  uVar3 = ossl_crypto_thread_native_start(0x100000,&local_34,1);
  iVar1 = test_ptr("test/threadpool_test.c",0x44,&_LC26,uVar3);
  if (iVar1 != 0) {
    uVar2 = ossl_crypto_thread_native_join(uVar3,&local_38);
    iVar1 = test_int_eq("test/threadpool_test.c",0x4d,"ossl_crypto_thread_native_join(t, &retval)",
                        &_LC11,uVar2,1);
    if (iVar1 != 0) {
      uVar2 = ossl_crypto_thread_native_join(uVar3,&local_38);
      iVar1 = test_int_eq("test/threadpool_test.c",0x4f,"ossl_crypto_thread_native_join(t, &retval)"
                          ,&_LC11,uVar2,1);
      if (iVar1 != 0) {
        iVar1 = test_int_eq("test/threadpool_test.c",0x52,"retval",&_LC11,local_38,1);
        if (iVar1 != 0) {
          iVar1 = test_int_eq("test/threadpool_test.c",0x52,"local",&_LC36,local_34,2);
          if (iVar1 != 0) {
            uVar2 = ossl_crypto_thread_native_clean(uVar3);
            iVar1 = test_int_eq("test/threadpool_test.c",0x55,"ossl_crypto_thread_native_clean(t)",
                                &_LC11,uVar2,1);
            if (iVar1 != 0) {
              uVar2 = ossl_crypto_thread_native_clean(0);
              iVar1 = test_int_eq("test/threadpool_test.c",0x59,"ossl_crypto_thread_native_clean(t)"
                                  ,&_LC5,uVar2,0);
              bVar4 = iVar1 != 0;
              goto LAB_00100be5;
            }
          }
        }
      }
    }
  }
  bVar4 = false;
LAB_00100be5:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 test_thread_native_multiple_joins_fn3(undefined8 param_1)

{
  ossl_crypto_thread_native_join(param_1,0);
  return 0;
}



undefined8 setup_tests(void)

{
  add_test("test_thread_reported_flags",test_thread_reported_flags);
  add_test("test_thread_native",test_thread_native);
  add_test("test_thread_native_multiple_joins",test_thread_native_multiple_joins);
  add_test("test_thread_internal",test_thread_internal);
  return 1;
}


