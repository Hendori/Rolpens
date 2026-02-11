
void ossl_list_int_remove(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_2 + 8);
  if (*param_1 == param_2) {
    *param_1 = lVar3;
    lVar1 = *(long *)(param_2 + 0x10);
    lVar2 = param_1[1];
  }
  else {
    lVar1 = *(long *)(param_2 + 0x10);
    lVar2 = param_1[1];
  }
  if (lVar2 == param_2) {
    param_1[1] = lVar1;
  }
  if (lVar1 != 0) {
    *(long *)(lVar1 + 8) = lVar3;
    lVar3 = *(long *)(param_2 + 8);
  }
  if (lVar3 != 0) {
    *(long *)(lVar3 + 0x10) = lVar1;
  }
  param_1[2] = param_1[2] + -1;
  *(undefined1 (*) [16])(param_2 + 8) = (undefined1  [16])0x0;
  return;
}



bool test_fizzbuzz(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 (*pauVar4) [16];
  undefined4 *puVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  int iVar9;
  long in_FS_OFFSET;
  bool bVar10;
  undefined4 *local_3a8;
  undefined4 *puStack_3a0;
  undefined4 *local_388;
  undefined4 *puStack_380;
  long local_378;
  undefined1 local_338 [760];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_3a8 = (undefined4 *)0x0;
  puStack_3a0 = (undefined4 *)0x0;
  local_378 = 0;
  local_388 = (undefined4 *)0x0;
  puStack_380 = (undefined4 *)0x0;
  iVar3 = test_true("test/list_test.c",0x2a,"ossl_list_fizz_is_empty(&a)",1);
  if (iVar3 != 0) {
    lVar8 = 0;
    iVar9 = 0;
    iVar7 = 0;
    iVar3 = 1;
    pauVar4 = (undefined1 (*) [16])local_338;
    do {
      while( true ) {
        *(int *)(pauVar4[-1] + 8) = iVar3;
        puVar1 = (undefined4 *)(pauVar4[-1] + 8);
        *pauVar4 = (undefined1  [16])0x0;
        pauVar4[1] = (undefined1  [16])0x0;
        if ((uint)(iVar3 * -0x55555555) < 0x55555556) {
          if (puStack_3a0 != (undefined4 *)0x0) {
            *(undefined4 **)(puStack_3a0 + 2) = puVar1;
          }
          *(undefined4 **)(*pauVar4 + 8) = puStack_3a0;
          *(undefined8 *)*pauVar4 = 0;
          if (local_3a8 == (undefined4 *)0x0) {
            local_3a8 = puVar1;
          }
          lVar8 = lVar8 + 1;
          iVar7 = iVar7 + 1;
          puStack_3a0 = puVar1;
        }
        if (0x33333333 < (uint)(iVar3 * -0x33333333)) break;
        if (local_388 != (undefined4 *)0x0) {
          *(undefined4 **)(local_388 + 8) = puVar1;
        }
        *(undefined4 **)pauVar4[1] = local_388;
        *(undefined8 *)(pauVar4[1] + 8) = 0;
        if (puStack_380 == (undefined4 *)0x0) {
          puStack_380 = puVar1;
        }
        iVar3 = iVar3 + 1;
        local_378 = local_378 + 1;
        iVar9 = iVar9 + 1;
        pauVar4 = (undefined1 (*) [16])(pauVar4[2] + 8);
        local_388 = puVar1;
        if (iVar3 == 0x14) goto LAB_0010016b;
      }
      iVar3 = iVar3 + 1;
      pauVar4 = (undefined1 (*) [16])(pauVar4[2] + 8);
    } while (iVar3 != 0x14);
LAB_0010016b:
    iVar3 = test_false("test/list_test.c",0x3b,"ossl_list_fizz_is_empty(&a)",lVar8 == 0);
    if (iVar3 != 0) {
      iVar3 = test_size_t_eq("test/list_test.c",0x3c,"ossl_list_fizz_num(&a)",&_LC2,lVar8,
                             (long)iVar7);
      if (iVar3 != 0) {
        iVar3 = test_size_t_eq("test/list_test.c",0x3d,"ossl_list_buzz_num(&b)",&_LC4,local_378,
                               (long)iVar9);
        if (iVar3 != 0) {
          iVar3 = test_ptr("test/list_test.c",0x3e,"ossl_list_fizz_head(&a)",local_3a8);
          if (iVar3 != 0) {
            iVar3 = test_ptr("test/list_test.c",0x3f,"ossl_list_fizz_tail(&a)",puStack_3a0);
            if (iVar3 != 0) {
              iVar3 = test_ptr("test/list_test.c",0x40,"ossl_list_buzz_head(&b)",local_388);
              if (iVar3 != 0) {
                iVar3 = test_ptr("test/list_test.c",0x41,"ossl_list_buzz_tail(&b)",puStack_380);
                if (iVar3 != 0) {
                  iVar3 = test_int_eq("test/list_test.c",0x42,"ossl_list_fizz_head(&a)->n",&_LC10,
                                      *local_3a8,3);
                  if (iVar3 != 0) {
                    iVar3 = test_int_eq("test/list_test.c",0x43,"ossl_list_fizz_tail(&a)->n",
                                        "na * 3",*puStack_3a0,iVar7 * 3);
                    if (iVar3 != 0) {
                      iVar3 = test_int_eq("test/list_test.c",0x44,"ossl_list_buzz_head(&b)->n",
                                          "nb * 5",*local_388,iVar9 * 5);
                      if (iVar3 != 0) {
                        iVar3 = test_int_eq("test/list_test.c",0x45,"ossl_list_buzz_tail(&b)->n",
                                            &_LC16,*puStack_380,5);
                        if (iVar3 != 0) {
                          puVar1 = *(undefined4 **)(local_3a8 + 2);
                          puVar2 = *(undefined4 **)(local_3a8 + 4);
                          if (puStack_3a0 == local_3a8) {
                            puStack_3a0 = puVar2;
                          }
                          puVar5 = puVar1;
                          if (puVar2 != (undefined4 *)0x0) {
                            *(undefined4 **)(puVar2 + 2) = puVar1;
                            puVar5 = *(undefined4 **)(local_3a8 + 2);
                          }
                          if (puVar5 != (undefined4 *)0x0) {
                            *(undefined4 **)(puVar5 + 4) = puVar2;
                          }
                          *(undefined1 (*) [16])(local_3a8 + 2) = (undefined1  [16])0x0;
                          if (puStack_380 == local_388) {
                            lVar6 = *(long *)(puStack_380 + 6);
                          }
                          else {
                            lVar6 = *(long *)(puStack_380 + 6);
                          }
                          puVar2 = *(undefined4 **)(puStack_380 + 8);
                          if (puVar2 != (undefined4 *)0x0) {
                            *(long *)(puVar2 + 6) = lVar6;
                            lVar6 = *(long *)(puStack_380 + 6);
                          }
                          if (lVar6 != 0) {
                            *(undefined4 **)(lVar6 + 0x20) = puVar2;
                          }
                          *(undefined1 (*) [16])(puStack_380 + 6) = (undefined1  [16])0x0;
                          iVar3 = test_size_t_eq("test/list_test.c",0x49,"ossl_list_fizz_num(&a)",
                                                 &_LC18,lVar8 + -1,(long)(iVar7 + -1));
                          if (iVar3 != 0) {
                            iVar3 = test_size_t_eq("test/list_test.c",0x4a,"ossl_list_buzz_num(&b)",
                                                   &_LC19,local_378 + -1,(long)(iVar9 + -1));
                            if (iVar3 != 0) {
                              iVar3 = test_ptr("test/list_test.c",0x4b,"ossl_list_fizz_head(&a)",
                                               puVar1);
                              if (iVar3 != 0) {
                                iVar3 = test_ptr("test/list_test.c",0x4c,"ossl_list_buzz_tail(&b)",
                                                 puVar2);
                                if (iVar3 != 0) {
                                  iVar3 = test_int_eq("test/list_test.c",0x4d,
                                                      "ossl_list_fizz_head(&a)->n",&_LC20,*puVar1,6)
                                  ;
                                  if (iVar3 != 0) {
                                    iVar3 = test_int_eq("test/list_test.c",0x4e,
                                                        "ossl_list_buzz_tail(&b)->n",&_LC21,*puVar2,
                                                        10);
                                    if (iVar3 != 0) {
                                      iVar3 = test_ptr("test/list_test.c",0x4f,
                                                                                                              
                                                  "ossl_list_fizz_next(ossl_list_fizz_head(&a))",
                                                  *(undefined8 *)(puVar1 + 2));
                                      if (iVar3 != 0) {
                                        iVar3 = test_ptr("test/list_test.c",0x50,
                                                                                                                  
                                                  "ossl_list_fizz_prev(ossl_list_fizz_tail(&a))",
                                                  *(undefined8 *)(puStack_3a0 + 4));
                                        if (iVar3 != 0) {
                                          iVar3 = test_int_eq("test/list_test.c",0x51,
                                                                                                                            
                                                  "ossl_list_fizz_next(ossl_list_fizz_head(&a))->n",
                                                  &_LC24,**(undefined4 **)(puVar1 + 2),9);
                                          if (iVar3 != 0) {
                                            iVar3 = test_int_eq("test/list_test.c",0x52,
                                                                                                                                
                                                  "ossl_list_fizz_prev(ossl_list_fizz_tail(&a))->n",
                                                  &_LC26,**(undefined4 **)(puStack_3a0 + 4),0xf);
                                            bVar10 = iVar3 != 0;
                                            goto LAB_0010018d;
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
              }
            }
          }
        }
      }
    }
  }
  bVar10 = false;
LAB_0010018d:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool test_insert(void)

{
  undefined1 auVar1 [16];
  int iVar2;
  int iVar3;
  long lVar4;
  undefined1 (*pauVar5) [16];
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  long in_FS_OFFSET;
  bool bVar10;
  undefined4 *local_248;
  undefined4 *puStack_240;
  undefined8 local_238;
  undefined4 local_228 [2];
  undefined4 *local_220;
  undefined8 uStack_218;
  undefined4 local_210 [2];
  undefined1 local_208 [16];
  undefined4 local_1f8 [2];
  undefined1 local_1f0 [16];
  undefined4 local_1e0 [2];
  undefined1 local_1d8 [16];
  undefined4 local_1c8 [2];
  undefined1 local_1c0 [16];
  undefined1 local_1b0 [8];
  undefined4 *local_1a8;
  undefined4 *puStack_1a0;
  undefined4 local_198 [2];
  undefined1 local_190 [16];
  undefined4 local_180 [2];
  undefined1 local_178 [312];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar6 = local_210;
  lVar4 = 0;
  pauVar5 = (undefined1 (*) [16])&local_220;
  do {
    *(int *)(pauVar5[-1] + 8) = (int)lVar4;
    lVar4 = lVar4 + 1;
    *pauVar5 = (undefined1  [16])0x0;
    pauVar5 = (undefined1 (*) [16])(pauVar5[1] + 8);
  } while (lVar4 != 0x14);
  local_208._8_8_ = 0;
  local_208._0_8_ = local_1f8;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_198;
  local_178._0_16_ = auVar1 << 0x40;
  local_238 = 7;
  local_1f0._8_8_ = puVar6;
  local_1f0._0_8_ = local_1e0;
  local_190._8_8_ = local_1b0;
  local_190._0_8_ = local_180;
  local_1c0._8_8_ = local_1e0;
  local_1c0._0_8_ = local_1b0;
  local_1d8._8_8_ = local_1f8;
  local_1d8._0_8_ = local_1c8;
  local_248 = puVar6;
  puStack_240 = local_180;
  local_1a8 = local_198;
  puStack_1a0 = local_1c8;
  iVar2 = test_size_t_eq("test/list_test.c",0x75,"ossl_list_int_num(&l)",&_LC28,7,7);
  if (iVar2 != 0) {
    iVar2 = 1;
    puVar7 = local_180;
    do {
      iVar3 = test_int_eq("test/list_test.c",0x7a,&_LC31,&_LC30,*puVar6,iVar2);
      if ((iVar3 == 0) ||
         (iVar3 = test_int_eq("test/list_test.c",0x7a,&_LC33,"8 - n",*puVar7,8 - iVar2), iVar3 == 0)
         ) goto LAB_00100840;
      puVar6 = *(undefined4 **)(puVar6 + 2);
      puVar7 = *(undefined4 **)(puVar7 + 4);
      iVar2 = iVar2 + 1;
    } while ((puVar6 != (undefined4 *)0x0) && (puVar7 != (undefined4 *)0x0));
    iVar2 = test_ptr_null("test/list_test.c",0x80,&_LC34,puVar6);
    if ((iVar2 != 0) && (iVar2 = test_ptr_null("test/list_test.c",0x80,&_LC35,puVar7), iVar2 != 0))
    {
      local_248 = (undefined4 *)local_208._0_8_;
      if (local_208._8_8_ != 0) {
        *(undefined8 *)(local_208._8_8_ + 8) = local_208._0_8_;
      }
      if ((undefined4 *)local_208._0_8_ != (undefined4 *)0x0) {
        *(undefined8 *)(local_208._0_8_ + 0x10) = local_208._8_8_;
      }
      local_208 = (undefined1  [16])0x0;
      if (local_248 == local_198) {
        local_248 = (undefined4 *)local_190._0_8_;
      }
      if (local_190._8_8_ != 0) {
        *(undefined8 *)(local_190._8_8_ + 8) = local_190._0_8_;
      }
      if ((undefined4 *)local_190._0_8_ != (undefined4 *)0x0) {
        *(undefined8 *)(local_190._0_8_ + 0x10) = local_190._8_8_;
      }
      local_190 = (undefined1  [16])0x0;
      if (local_248 == local_180) {
        local_248 = (undefined4 *)local_178._0_8_;
      }
      puVar9 = local_248;
      puVar8 = (undefined4 *)local_178._8_8_;
      puStack_240 = (undefined4 *)local_178._8_8_;
      puVar7 = puVar8;
      puVar6 = local_248;
      if ((undefined4 *)local_178._8_8_ == (undefined4 *)0x0) {
        if ((undefined4 *)local_178._0_8_ != (undefined4 *)0x0) goto LAB_00100954;
LAB_00100a2a:
        local_178._0_16_ = (undefined1  [16])0x0;
        local_238 = 4;
      }
      else {
        *(undefined8 *)(local_178._8_8_ + 8) = local_178._0_8_;
        if ((undefined4 *)local_178._0_8_ != (undefined4 *)0x0) {
LAB_00100954:
          *(undefined8 *)(local_178._0_8_ + 0x10) = local_178._8_8_;
        }
        local_238 = 4;
        local_178._0_16_ = (undefined1  [16])0x0;
        if ((local_248 == (undefined4 *)0x0) || (puVar8 == (undefined4 *)0x0)) goto LAB_00100a2a;
        iVar2 = 2;
        do {
          iVar3 = test_int_eq("test/list_test.c",0x8b,&_LC31,&_LC30,*puVar6,iVar2);
          if ((iVar3 == 0) ||
             (iVar3 = test_int_eq("test/list_test.c",0x8b,&_LC33,"7 - n",*puVar7,7 - iVar2),
             iVar3 == 0)) goto LAB_00100840;
          puVar6 = *(undefined4 **)(puVar6 + 2);
          puVar7 = *(undefined4 **)(puVar7 + 4);
          iVar2 = iVar2 + 1;
        } while ((puVar6 != (undefined4 *)0x0) && (puVar7 != (undefined4 *)0x0));
      }
      iVar2 = test_ptr_null("test/list_test.c",0x91,&_LC34,puVar6);
      if ((iVar2 != 0) && (iVar2 = test_ptr_null("test/list_test.c",0x91,&_LC35,puVar7), iVar2 != 0)
         ) {
        if (puVar9 == local_1f8) {
          puVar9 = (undefined4 *)local_1f0._0_8_;
          local_248 = (undefined4 *)local_1f0._0_8_;
        }
        if (puVar8 == local_1f8) {
          puVar8 = (undefined4 *)local_1f0._8_8_;
          puStack_240 = (undefined4 *)local_1f0._8_8_;
        }
        if ((undefined4 *)local_1f0._8_8_ != (undefined4 *)0x0) {
          *(undefined8 *)(local_1f0._8_8_ + 8) = local_1f0._0_8_;
        }
        if ((undefined4 *)local_1f0._0_8_ != (undefined4 *)0x0) {
          *(undefined8 *)(local_1f0._0_8_ + 0x10) = local_1f0._8_8_;
        }
        local_1f0 = (undefined1  [16])0x0;
        if (puVar9 == local_1c8) {
          puVar9 = (undefined4 *)local_1c0._0_8_;
          local_248 = (undefined4 *)local_1c0._0_8_;
        }
        if (puVar8 == local_1c8) {
          puVar8 = (undefined4 *)local_1c0._8_8_;
          puStack_240 = (undefined4 *)local_1c0._8_8_;
        }
        if ((undefined4 *)local_1c0._8_8_ != (undefined4 *)0x0) {
          *(undefined8 *)(local_1c0._8_8_ + 8) = local_1c0._0_8_;
        }
        if ((undefined4 *)local_1c0._0_8_ != (undefined4 *)0x0) {
          *(undefined8 *)(local_1c0._0_8_ + 0x10) = local_1c0._8_8_;
        }
        local_1c0 = (undefined1  [16])0x0;
        if (puVar9 == local_1e0) {
          puVar9 = (undefined4 *)local_1d8._0_8_;
          local_248 = (undefined4 *)local_1d8._0_8_;
        }
        if (puVar8 == local_1e0) {
          puStack_240 = (undefined4 *)local_1d8._8_8_;
        }
        if ((undefined4 *)local_1d8._8_8_ != (undefined4 *)0x0) {
          *(undefined8 *)(local_1d8._8_8_ + 8) = local_1d8._0_8_;
        }
        if ((undefined4 *)local_1d8._0_8_ != (undefined4 *)0x0) {
          *(undefined8 *)(local_1d8._0_8_ + 0x10) = local_1d8._8_8_;
        }
        local_238 = 1;
        local_1d8 = (undefined1  [16])0x0;
        iVar2 = test_ptr("test/list_test.c",0x98,"ossl_list_int_head(&l)",puVar9);
        puVar6 = puStack_240;
        if ((((iVar2 != 0) &&
             (iVar2 = test_ptr("test/list_test.c",0x99,"ossl_list_int_tail(&l)",puStack_240),
             iVar2 != 0)) &&
            (iVar2 = test_int_eq("test/list_test.c",0x9a,"ossl_list_int_head(&l)->n",&_LC16,*puVar9,
                                 5), iVar2 != 0)) &&
           (iVar2 = test_int_eq("test/list_test.c",0x9b,"ossl_list_int_tail(&l)->n",&_LC16,*puVar6,5
                               ), iVar2 != 0)) {
          *(undefined4 **)(puVar9 + 4) = local_228;
          uStack_218 = 0;
          local_238 = 2;
          local_248 = local_228;
          local_220 = puVar9;
          ossl_list_int_remove(&local_248,local_1b0);
          puVar6 = local_248;
          iVar2 = test_ptr("test/list_test.c",0xa1,"ossl_list_int_head(&l)",local_248);
          puVar7 = puStack_240;
          if (((iVar2 != 0) &&
              (iVar2 = test_ptr("test/list_test.c",0xa2,"ossl_list_int_tail(&l)",puStack_240),
              iVar2 != 0)) &&
             ((iVar2 = test_int_eq("test/list_test.c",0xa3,"ossl_list_int_head(&l)->n",&_LC41,
                                   *puVar6,0), iVar2 != 0 &&
              (iVar2 = test_int_eq("test/list_test.c",0xa4,"ossl_list_int_tail(&l)->n",&_LC41,
                                   *puVar7,0), iVar2 != 0)))) {
            ossl_list_int_remove(&local_248,local_228);
            iVar2 = test_ptr_null("test/list_test.c",0xa9,"ossl_list_int_head(&l)",local_248);
            if (iVar2 != 0) {
              iVar2 = test_ptr_null("test/list_test.c",0xaa,"ossl_list_int_tail(&l)",puStack_240);
              bVar10 = iVar2 != 0;
              goto LAB_00100842;
            }
          }
        }
      }
    }
  }
LAB_00100840:
  bVar10 = false;
LAB_00100842:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar10;
}



undefined8 setup_tests(void)

{
  add_test("test_fizzbuzz",test_fizzbuzz);
  add_test("test_insert",test_insert);
  return 1;
}


