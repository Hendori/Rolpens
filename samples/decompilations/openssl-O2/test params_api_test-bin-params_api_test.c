
uint test_param_copy_null(void)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  long local_40;
  
  uVar5 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_c0 = 1;
  local_bc = 2;
  OSSL_PARAM_construct_int(&local_f8,&_LC0,&local_c0);
  local_98 = local_d8;
  local_b8 = local_f8;
  uStack_b0 = uStack_f0;
  local_a8 = local_e8;
  uStack_a0 = uStack_e0;
  OSSL_PARAM_construct_int(&local_f8,&_LC1,&local_bc);
  uVar4 = 0;
  local_90 = local_f8;
  uStack_88 = uStack_f0;
  local_80 = local_e8;
  uStack_78 = uStack_e0;
  local_70 = local_d8;
  OSSL_PARAM_construct_end(&local_f8);
  local_68 = local_f8;
  uStack_60 = uStack_f0;
  local_58 = local_e8;
  uStack_50 = uStack_e0;
  local_48 = local_d8;
  uVar3 = OSSL_PARAM_dup(0);
  uVar1 = test_ptr_null("test/params_api_test.c",0x31e,"OSSL_PARAM_dup(NULL)",uVar3);
  if (uVar1 != 0) {
    uVar4 = OSSL_PARAM_merge(0,&local_b8);
    uVar1 = test_ptr("test/params_api_test.c",799,"cp1 = OSSL_PARAM_merge(NULL, param)",uVar4);
    if (uVar1 != 0) {
      uVar3 = OSSL_PARAM_locate(uVar4,&_LC0);
      iVar2 = test_ptr("test/params_api_test.c",800,"p = OSSL_PARAM_locate(cp1, \"a\")",uVar3);
      if (iVar2 != 0) {
        iVar2 = OSSL_PARAM_get_int(uVar3,&local_c4);
        iVar2 = test_true("test/params_api_test.c",0x321,"OSSL_PARAM_get_int(p, &val)",iVar2 != 0);
        if (iVar2 != 0) {
          iVar2 = test_int_eq("test/params_api_test.c",0x322,&_LC8,&_LC7,local_c4,1);
          if (iVar2 != 0) {
            uVar3 = OSSL_PARAM_locate(uVar4,&_LC1);
            iVar2 = test_ptr("test/params_api_test.c",0x323,"p = OSSL_PARAM_locate(cp1, \"b\")",
                             uVar3);
            if (iVar2 != 0) {
              iVar2 = OSSL_PARAM_get_int(uVar3,&local_c4);
              iVar2 = test_true("test/params_api_test.c",0x324,"OSSL_PARAM_get_int(p, &val)",
                                iVar2 != 0);
              if (iVar2 != 0) {
                iVar2 = test_int_eq("test/params_api_test.c",0x325,&_LC8,&_LC10,local_c4,2);
                if (iVar2 != 0) {
                  uVar5 = OSSL_PARAM_merge(&local_b8,0);
                  iVar2 = test_ptr("test/params_api_test.c",0x326,
                                   "cp2 = OSSL_PARAM_merge(param, NULL)",uVar5);
                  if (iVar2 != 0) {
                    uVar3 = OSSL_PARAM_locate(uVar5,&_LC0);
                    iVar2 = test_ptr("test/params_api_test.c",0x327,
                                     "p = OSSL_PARAM_locate(cp2, \"a\")",uVar3);
                    if (iVar2 != 0) {
                      iVar2 = OSSL_PARAM_get_int(uVar3,&local_c4);
                      iVar2 = test_true("test/params_api_test.c",0x328,"OSSL_PARAM_get_int(p, &val)"
                                        ,iVar2 != 0);
                      if (iVar2 != 0) {
                        iVar2 = test_int_eq("test/params_api_test.c",0x329,&_LC8,&_LC7,local_c4,1);
                        if (iVar2 != 0) {
                          uVar3 = OSSL_PARAM_locate(uVar5,&_LC1);
                          iVar2 = test_ptr("test/params_api_test.c",0x32a,
                                           "p = OSSL_PARAM_locate(cp2, \"b\")",uVar3);
                          if (iVar2 != 0) {
                            iVar2 = OSSL_PARAM_get_int(uVar3,&local_c4);
                            iVar2 = test_true("test/params_api_test.c",0x32b,
                                              "OSSL_PARAM_get_int(p, &val)",iVar2 != 0);
                            if (iVar2 != 0) {
                              uVar1 = test_int_eq("test/params_api_test.c",0x32c,&_LC8,&_LC10,
                                                  local_c4,2);
                              if (uVar1 != 0) {
                                uVar3 = OSSL_PARAM_merge(0,0);
                                iVar2 = test_ptr_null("test/params_api_test.c",0x32d,
                                                      "OSSL_PARAM_merge(NULL, NULL)",uVar3);
                                uVar1 = (uint)(iVar2 != 0);
                              }
                              goto LAB_00100113;
                            }
                          }
                        }
                      }
                    }
                  }
                  uVar1 = 0;
                  goto LAB_00100113;
                }
              }
            }
          }
        }
      }
      uVar1 = 0;
      uVar5 = 0;
    }
  }
LAB_00100113:
  OSSL_PARAM_free(uVar5);
  OSSL_PARAM_free(uVar4);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong test_param_modified(void)

{
  int iVar1;
  ulong uVar2;
  long in_FS_OFFSET;
  undefined1 local_b0 [4];
  undefined1 local_ac [4];
  undefined *local_a8;
  undefined4 local_a0;
  undefined1 *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined *local_80;
  undefined4 local_78;
  undefined1 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined1 local_40 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_a0 = 1;
  local_90 = __LC15;
  uStack_88 = _UNK_00104aa8;
  local_68 = __LC15;
  uStack_60 = _UNK_00104aa8;
  local_78 = 1;
  local_58 = 0;
  local_50 = 0;
  local_a8 = &_LC0;
  local_80 = &_LC1;
  local_98 = local_b0;
  local_70 = local_ac;
  local_48 = 0;
  local_40 = (undefined1  [16])0x0;
  iVar1 = OSSL_PARAM_modified(&local_a8);
  iVar1 = test_false("test/params_api_test.c",0x301,"OSSL_PARAM_modified(param)",iVar1 != 0);
  if (iVar1 == 0) {
    iVar1 = OSSL_PARAM_set_int32(&local_a8,0x4d2);
    iVar1 = test_true("test/params_api_test.c",0x302,"OSSL_PARAM_set_int32(param, 1234)",iVar1 != 0)
    ;
    if (iVar1 == 0) {
      iVar1 = OSSL_PARAM_modified(&local_a8);
      iVar1 = test_true("test/params_api_test.c",0x303,"OSSL_PARAM_modified(param)",iVar1 != 0);
      if (iVar1 == 0) {
        iVar1 = OSSL_PARAM_modified(&local_80);
        iVar1 = test_false("test/params_api_test.c",0x304,"OSSL_PARAM_modified(param + 1)",
                           iVar1 != 0);
        if (iVar1 == 0) {
          iVar1 = OSSL_PARAM_set_int32(&local_80,1);
          iVar1 = test_true("test/params_api_test.c",0x305,"OSSL_PARAM_set_int32(param + 1, 1)",
                            iVar1 != 0);
          if (iVar1 == 0) {
            iVar1 = OSSL_PARAM_modified(&local_80);
            uVar2 = test_true("test/params_api_test.c",0x306,"OSSL_PARAM_modified(param + 1)",
                              iVar1 != 0);
            if ((int)uVar2 == 0) goto LAB_0010054b;
          }
        }
      }
    }
  }
  OSSL_PARAM_set_all_unmodified(&local_a8);
  iVar1 = OSSL_PARAM_modified(&local_a8);
  iVar1 = test_false("test/params_api_test.c",0x309,"OSSL_PARAM_modified(param)",iVar1 != 0);
  if (iVar1 == 0) {
    iVar1 = OSSL_PARAM_set_int32(&local_a8,0x10e1);
    iVar1 = test_true("test/params_api_test.c",0x30a,"OSSL_PARAM_set_int32(param, 4321)",iVar1 != 0)
    ;
    if (iVar1 == 0) {
      iVar1 = OSSL_PARAM_modified(&local_a8);
      iVar1 = test_true("test/params_api_test.c",0x30b,"OSSL_PARAM_modified(param)",iVar1 != 0);
      if (iVar1 == 0) {
        iVar1 = OSSL_PARAM_modified(&local_80);
        iVar1 = test_false("test/params_api_test.c",0x30c,"OSSL_PARAM_modified(param + 1)",
                           iVar1 != 0);
        if (iVar1 == 0) {
          iVar1 = OSSL_PARAM_set_int32(&local_80,2);
          iVar1 = test_true("test/params_api_test.c",0x30d,"OSSL_PARAM_set_int32(param + 1, 2)",
                            iVar1 != 0);
          if (iVar1 == 0) {
            iVar1 = OSSL_PARAM_modified(&local_80);
            iVar1 = test_true("test/params_api_test.c",0x30e,"OSSL_PARAM_modified(param + 1)",
                              iVar1 != 0);
            uVar2 = (ulong)(iVar1 != 0);
            goto LAB_0010054b;
          }
        }
      }
    }
  }
  uVar2 = 1;
LAB_0010054b:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



bool test_param_construct(int param_1)

{
  int iVar1;
  undefined8 *ptr;
  undefined8 uVar2;
  long lVar3;
  BIGNUM *a;
  ulong uVar4;
  long in_FS_OFFSET;
  bool bVar5;
  char *pcVar6;
  void *local_5a0;
  undefined8 *local_598;
  undefined8 local_558;
  undefined8 uStack_550;
  undefined8 local_548;
  undefined8 uStack_540;
  undefined8 local_538;
  undefined1 local_528 [4];
  undefined1 local_524 [4];
  undefined1 local_520 [4];
  undefined1 local_51c [4];
  undefined1 *local_518;
  undefined8 local_510;
  undefined1 *local_508;
  void *local_500;
  undefined8 local_4f8;
  undefined1 local_4f0 [8];
  undefined1 local_4e8 [8];
  undefined8 local_4e0;
  undefined8 local_4d8;
  undefined8 local_4d0;
  undefined8 local_4c8;
  undefined8 local_4c0;
  undefined8 local_4b8;
  BIGNUM *local_4b0;
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  undefined8 local_498;
  undefined8 uStack_490;
  undefined8 local_488;
  undefined8 local_480;
  undefined8 uStack_478;
  undefined8 local_470;
  undefined8 uStack_468;
  undefined8 local_460;
  undefined8 local_458;
  undefined8 uStack_450;
  undefined8 local_448;
  undefined8 uStack_440;
  undefined8 local_438;
  undefined8 local_430;
  undefined8 uStack_428;
  undefined8 local_420;
  undefined8 uStack_418;
  undefined8 local_410;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3e8;
  undefined8 local_3e0;
  undefined8 uStack_3d8;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  undefined8 local_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  undefined8 local_390;
  undefined8 uStack_388;
  undefined8 local_380;
  undefined8 uStack_378;
  undefined8 local_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined1 local_188 [112];
  undefined1 local_118 [112];
  undefined1 local_a8 [104];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_500 = (void *)0x0;
  local_4b0 = (BIGNUM *)0x0;
  OSSL_PARAM_construct_int(&local_558,&_LC23,local_528);
  local_4a8 = local_558;
  uStack_4a0 = uStack_550;
  local_498 = local_548;
  uStack_490 = uStack_540;
  local_488 = local_538;
  OSSL_PARAM_construct_uint(&local_558,&_LC24,local_524);
  local_460 = local_538;
  local_480 = local_558;
  uStack_478 = uStack_550;
  local_470 = local_548;
  uStack_468 = uStack_540;
  OSSL_PARAM_construct_long(&local_558,&_LC25,local_4f0);
  local_438 = local_538;
  local_458 = local_558;
  uStack_450 = uStack_550;
  local_448 = local_548;
  uStack_440 = uStack_540;
  OSSL_PARAM_construct_ulong(&local_558,"ulong",local_4e8);
  local_430 = local_558;
  uStack_428 = uStack_550;
  local_420 = local_548;
  uStack_418 = uStack_540;
  local_410 = local_538;
  OSSL_PARAM_construct_int32(&local_558,"int32",local_520);
  local_3e8 = local_538;
  local_408 = local_558;
  uStack_400 = uStack_550;
  local_3f8 = local_548;
  uStack_3f0 = uStack_540;
  OSSL_PARAM_construct_int64(&local_558,"int64",&local_4e0);
  local_3e0 = local_558;
  uStack_3d8 = uStack_550;
  local_3d0 = local_548;
  uStack_3c8 = uStack_540;
  local_3c0 = local_538;
  OSSL_PARAM_construct_uint32(&local_558,"uint32",local_51c);
  local_398 = local_538;
  local_3b8 = local_558;
  uStack_3b0 = uStack_550;
  local_3a8 = local_548;
  uStack_3a0 = uStack_540;
  OSSL_PARAM_construct_uint64(&local_558,"uint64",&local_4d8);
  local_370 = local_538;
  local_390 = local_558;
  uStack_388 = uStack_550;
  local_380 = local_548;
  uStack_378 = uStack_540;
  OSSL_PARAM_construct_size_t(&local_558,"size_t",&local_4c8);
  local_368 = local_558;
  uStack_360 = uStack_550;
  local_358 = local_548;
  uStack_350 = uStack_540;
  local_348 = local_538;
  OSSL_PARAM_construct_double(&local_558,"double",&local_4c0);
  local_340 = local_558;
  uStack_338 = uStack_550;
  local_330 = local_548;
  uStack_328 = uStack_540;
  local_320 = local_538;
  OSSL_PARAM_construct_BN(&local_558,"bignum",local_a8,100);
  local_318 = local_558;
  uStack_310 = uStack_550;
  local_308 = local_548;
  uStack_300 = uStack_540;
  local_2f8 = local_538;
  OSSL_PARAM_construct_utf8_string(&local_558,"utf8str",local_188,100);
  local_2f0 = local_558;
  uStack_2e8 = uStack_550;
  local_2e0 = local_548;
  uStack_2d8 = uStack_540;
  local_2d0 = local_538;
  OSSL_PARAM_construct_octet_string(&local_558,"octstr",local_188,100);
  local_2c8 = local_558;
  uStack_2c0 = uStack_550;
  local_2a8 = local_538;
  local_2b8 = local_548;
  uStack_2b0 = uStack_540;
  OSSL_PARAM_construct_utf8_ptr(&local_558,"utf8ptr",&local_518,0);
  local_2a0 = local_558;
  uStack_298 = uStack_550;
  local_280 = local_538;
  local_290 = local_548;
  uStack_288 = uStack_540;
  OSSL_PARAM_construct_octet_ptr(&local_558,"octptr",&local_508,0);
  local_258 = local_538;
  local_278 = local_558;
  uStack_270 = uStack_550;
  local_268 = local_548;
  uStack_260 = uStack_540;
  OSSL_PARAM_construct_end(&local_558);
  local_250 = local_558;
  uStack_248 = uStack_550;
  local_230 = local_538;
  local_240 = local_548;
  uStack_238 = uStack_540;
  if (param_1 == 1) {
    ptr = (undefined8 *)OSSL_PARAM_merge(&local_4a8,params_empty_3);
    local_5a0 = (void *)0x0;
  }
  else if (param_1 == 2) {
    ptr = (undefined8 *)OSSL_PARAM_dup(&local_4a8);
    local_5a0 = (void *)0x0;
  }
  else if (param_1 == 0) {
    ptr = &local_4a8;
    local_5a0 = (void *)0x0;
  }
  else {
    local_5a0 = (void *)OSSL_PARAM_dup(&local_4a8);
    ptr = (undefined8 *)OSSL_PARAM_merge(local_5a0,params_empty_3);
  }
  local_598 = &local_4a8;
  uVar4 = 3;
  uVar2 = OSSL_PARAM_locate(ptr,"fnord");
  iVar1 = test_ptr_null("test/params_api_test.c",0x288,"OSSL_PARAM_locate(p, \"fnord\")",uVar2);
  if (iVar1 == 0) {
LAB_00100ea0:
    a = (BIGNUM *)0x0;
  }
  else {
    do {
      uVar2 = *(undefined8 *)(&DAT_00104a68 + uVar4 * 8);
      lVar3 = OSSL_PARAM_locate(ptr,uVar2);
      iVar1 = test_ptr("test/params_api_test.c",0x28d,"cp = OSSL_PARAM_locate(p, int_names[j])",
                       lVar3);
      if (iVar1 == 0) {
LAB_00101760:
        test_note("iteration %zu var %s",uVar4 - 2,uVar2);
        goto LAB_00100ea0;
      }
      iVar1 = OSSL_PARAM_set_int32(lVar3,uVar4 & 0xffffffff);
      iVar1 = test_true("test/params_api_test.c",0x28e,"OSSL_PARAM_set_int32(cp, (int32_t)(3 + j))",
                        iVar1 != 0);
      if (iVar1 == 0) goto LAB_00101760;
      iVar1 = OSSL_PARAM_get_int64(lVar3,&local_4e0);
      iVar1 = test_true("test/params_api_test.c",0x28f,"OSSL_PARAM_get_int64(cp, &i64)",iVar1 != 0);
      if (((iVar1 == 0) ||
          (iVar1 = test_size_t_eq("test/params_api_test.c",0x290,"cp->data_size","cp->return_size",
                                  *(undefined8 *)(lVar3 + 0x18),*(undefined8 *)(lVar3 + 0x20)),
          iVar1 == 0)) ||
         (iVar1 = test_size_t_eq("test/params_api_test.c",0x291,"(size_t)i64","3 + j",local_4e0,
                                 uVar4), iVar1 == 0)) goto LAB_00101760;
      uVar4 = uVar4 + 1;
    } while (uVar4 != 7);
    uVar4 = 3;
    do {
      uVar2 = *(undefined8 *)(raw_values + uVar4 * 8 + 0x1a8);
      lVar3 = OSSL_PARAM_locate(ptr,uVar2);
      iVar1 = test_ptr("test/params_api_test.c",0x298,"cp = OSSL_PARAM_locate(p, uint_names[j])",
                       lVar3);
      if (iVar1 == 0) {
LAB_00101780:
        test_note("iteration %zu var %s",uVar4 - 2,uVar2);
        goto LAB_00100ea0;
      }
      iVar1 = OSSL_PARAM_set_uint32(lVar3,uVar4 & 0xffffffff);
      iVar1 = test_true("test/params_api_test.c",0x299,
                        "OSSL_PARAM_set_uint32(cp, (uint32_t)(3 + j))",iVar1 != 0);
      if (iVar1 == 0) goto LAB_00101780;
      iVar1 = OSSL_PARAM_get_uint64(lVar3,&local_4d8);
      iVar1 = test_true("test/params_api_test.c",0x29a,"OSSL_PARAM_get_uint64(cp, &u64)",iVar1 != 0)
      ;
      if (((iVar1 == 0) ||
          (iVar1 = test_size_t_eq("test/params_api_test.c",0x29b,"cp->data_size","cp->return_size",
                                  *(undefined8 *)(lVar3 + 0x18),*(undefined8 *)(lVar3 + 0x20)),
          iVar1 == 0)) ||
         (iVar1 = test_size_t_eq("test/params_api_test.c",0x29c,"(size_t)u64","3 + j",local_4d8,
                                 uVar4), iVar1 == 0)) goto LAB_00101780;
      uVar4 = uVar4 + 1;
    } while (uVar4 != 8);
    lVar3 = OSSL_PARAM_locate(ptr,"double");
    iVar1 = test_ptr("test/params_api_test.c",0x2a2,"cp = OSSL_PARAM_locate(p, \"double\")",lVar3);
    if (iVar1 == 0) goto LAB_00100ea0;
    iVar1 = OSSL_PARAM_set_double(_LC53,lVar3);
    iVar1 = test_true("test/params_api_test.c",0x2a3,"OSSL_PARAM_set_double(cp, 3.14)",iVar1 != 0);
    if (iVar1 == 0) goto LAB_00100ea0;
    iVar1 = OSSL_PARAM_get_double(lVar3,&local_4b8);
    iVar1 = test_true("test/params_api_test.c",0x2a4,"OSSL_PARAM_get_double(cp, &d2)",iVar1 != 0);
    if (((iVar1 == 0) ||
        (iVar1 = test_size_t_eq("test/params_api_test.c",0x2a5,"cp->return_size","sizeof(double)",
                                *(undefined8 *)(lVar3 + 0x20),8), iVar1 == 0)) ||
       ((iVar1 = test_double_eq(local_4b8,_LC53,"test/params_api_test.c",0x2a6,&_LC58,&_LC57),
        iVar1 == 0 ||
        ((param_1 < 2 &&
         (iVar1 = test_double_eq(local_4c0,local_4b8,"test/params_api_test.c",0x2a7,&_LC60,&_LC58),
         iVar1 == 0)))))) goto LAB_00100ea0;
    local_518 = (undefined1 *)0x0;
    lVar3 = OSSL_PARAM_locate(ptr,"utf8str");
    iVar1 = test_ptr("test/params_api_test.c",0x2ab,"cp = OSSL_PARAM_locate(p, \"utf8str\")",lVar3);
    if (iVar1 == 0) {
LAB_0010179f:
      CRYPTO_free(local_518);
      goto LAB_00100ea0;
    }
    iVar1 = OSSL_PARAM_set_utf8_string(lVar3,"abcdef");
    iVar1 = test_true("test/params_api_test.c",0x2ac,"OSSL_PARAM_set_utf8_string(cp, \"abcdef\")",
                      iVar1 != 0);
    if ((iVar1 == 0) ||
       (iVar1 = test_size_t_eq("test/params_api_test.c",0x2ad,"cp->return_size",
                               "sizeof(\"abcdef\") - 1",*(undefined8 *)(lVar3 + 0x20),6), iVar1 == 0
       )) goto LAB_0010179f;
    iVar1 = OSSL_PARAM_get_utf8_string(lVar3,&local_518,0);
    iVar1 = test_true("test/params_api_test.c",0x2ae,"OSSL_PARAM_get_utf8_string(cp, &bufp, 0)",
                      iVar1 != 0);
    if ((iVar1 == 0) ||
       (iVar1 = test_str_eq("test/params_api_test.c",0x2af,&_LC66,"\"abcdef\"",local_518,"abcdef"),
       iVar1 == 0)) goto LAB_0010179f;
    CRYPTO_free(local_518);
    local_518 = local_118;
    iVar1 = OSSL_PARAM_get_utf8_string(lVar3,&local_518,100);
    iVar1 = test_true("test/params_api_test.c",0x2b5,
                      "OSSL_PARAM_get_utf8_string(cp, &bufp, sizeof(buf2))",iVar1 != 0);
    if ((iVar1 == 0) ||
       (iVar1 = test_str_eq("test/params_api_test.c",0x2b6,&_LC68,"\"abcdef\"",local_118,"abcdef"),
       iVar1 == 0)) goto LAB_00100ea0;
    local_518 = local_188;
    lVar3 = OSSL_PARAM_locate(ptr,"utf8ptr");
    iVar1 = test_ptr("test/params_api_test.c",699,"cp = OSSL_PARAM_locate(p, \"utf8ptr\")",lVar3);
    if (iVar1 == 0) goto LAB_00100ea0;
    iVar1 = OSSL_PARAM_set_utf8_ptr(lVar3,"tuvwxyz");
    iVar1 = test_true("test/params_api_test.c",700,"OSSL_PARAM_set_utf8_ptr(cp, \"tuvwxyz\")",
                      iVar1 != 0);
    if ((iVar1 == 0) ||
       (iVar1 = test_size_t_eq("test/params_api_test.c",0x2bd,"cp->return_size",
                               "sizeof(\"tuvwxyz\") - 1",*(undefined8 *)(lVar3 + 0x20),7),
       iVar1 == 0)) goto LAB_00100ea0;
    iVar1 = OSSL_PARAM_get_utf8_ptr(lVar3,&local_510);
    iVar1 = test_true("test/params_api_test.c",0x2be,
                      "OSSL_PARAM_get_utf8_ptr(cp, (const char **)&bufp2)",iVar1 != 0);
    if (((iVar1 == 0) ||
        (iVar1 = test_str_eq("test/params_api_test.c",0x2bf,"bufp2","\"tuvwxyz\"",local_510,
                             "tuvwxyz"), iVar1 == 0)) ||
       ((param_1 < 2 &&
        (iVar1 = test_ptr_eq("test/params_api_test.c",0x2c0,"bufp2",&_LC66,local_510,local_518),
        iVar1 == 0)))) goto LAB_00100ea0;
    lVar3 = OSSL_PARAM_locate(ptr,"octstr");
    iVar1 = test_ptr("test/params_api_test.c",0x2c3,"cp = OSSL_PARAM_locate(p, \"octstr\")",lVar3);
    if (iVar1 == 0) goto LAB_00100ea0;
    iVar1 = OSSL_PARAM_set_octet_string(lVar3,"abcdefghi",10);
    iVar1 = test_true("test/params_api_test.c",0x2c4,
                      "OSSL_PARAM_set_octet_string(cp, \"abcdefghi\", sizeof(\"abcdefghi\"))",
                      iVar1 != 0);
    if ((iVar1 == 0) ||
       (iVar1 = test_size_t_eq("test/params_api_test.c",0x2c6,"cp->return_size",
                               "sizeof(\"abcdefghi\")",*(undefined8 *)(lVar3 + 0x20),10), iVar1 == 0
       )) goto LAB_00100ea0;
    *(undefined8 *)(lVar3 + 0x18) = *(undefined8 *)(lVar3 + 0x20);
    iVar1 = OSSL_PARAM_get_octet_string(lVar3,&local_500,0,&local_4c8);
    iVar1 = test_true("test/params_api_test.c",0x2ca,"OSSL_PARAM_get_octet_string(cp, &vpn, 0, &s)",
                      iVar1 != 0);
    if ((iVar1 == 0) ||
       ((iVar1 = test_size_t_eq("test/params_api_test.c",0x2cb,&_LC81,"sizeof(\"abcdefghi\")",
                                local_4c8,10), iVar1 == 0 ||
        (iVar1 = test_mem_eq("test/params_api_test.c",0x2cc,&_LC83,"\"abcdefghi\"",local_500,10,
                             "abcdefghi",10), iVar1 == 0)))) goto LAB_00100ea0;
    local_508 = local_118;
    iVar1 = OSSL_PARAM_get_octet_string(lVar3,&local_508,100,&local_4c8);
    iVar1 = test_true("test/params_api_test.c",0x2d0,
                      "OSSL_PARAM_get_octet_string(cp, &vp, sizeof(buf2), &s)",iVar1 != 0);
    if ((iVar1 == 0) ||
       (iVar1 = test_size_t_eq("test/params_api_test.c",0x2d1,&_LC81,"sizeof(\"abcdefghi\")",
                               local_4c8,10), iVar1 == 0)) goto LAB_00100ea0;
    uVar2 = 10;
    pcVar6 = "abcdefghi";
    iVar1 = test_mem_eq("test/params_api_test.c",0x2d2,&_LC85,"\"abcdefghi\"",local_508,10);
    if (iVar1 == 0) goto LAB_00100ea0;
    local_508 = local_4f0;
    lVar3 = OSSL_PARAM_locate(ptr,"octptr",pcVar6,uVar2);
    iVar1 = test_ptr("test/params_api_test.c",0x2d7,"cp = OSSL_PARAM_locate(p, \"octptr\")",lVar3);
    if (iVar1 == 0) goto LAB_00100ea0;
    iVar1 = OSSL_PARAM_set_octet_ptr(lVar3,local_4e8,8);
    iVar1 = test_true("test/params_api_test.c",0x2d8,"OSSL_PARAM_set_octet_ptr(cp, &ul, sizeof(ul))"
                      ,iVar1 != 0);
    if (((iVar1 == 0) ||
        (iVar1 = test_size_t_eq("test/params_api_test.c",0x2d9,"cp->return_size","sizeof(ul)",
                                *(undefined8 *)(lVar3 + 0x20),8), iVar1 == 0)) ||
       ((param_1 < 2 &&
        (iVar1 = test_ptr_eq("test/params_api_test.c",0x2da,&_LC85,&_LC90,local_508,local_4e8),
        iVar1 == 0)))) goto LAB_00100ea0;
    *(undefined8 *)(lVar3 + 0x18) = *(undefined8 *)(lVar3 + 0x20);
    iVar1 = OSSL_PARAM_get_octet_ptr(lVar3,&local_4f8,&local_4d0);
    iVar1 = test_true("test/params_api_test.c",0x2de,
                      "OSSL_PARAM_get_octet_ptr(cp, (const void **)&vp2, &k)",iVar1 != 0);
    if (((iVar1 == 0) ||
        (iVar1 = test_size_t_eq("test/params_api_test.c",0x2df,&_LC91,"sizeof(ul)",local_4d0,8),
        iVar1 == 0)) ||
       ((param_1 < 2 &&
        (iVar1 = test_ptr_eq("test/params_api_test.c",0x2e0,&_LC93,&_LC85,local_4f8,local_508),
        iVar1 == 0)))) goto LAB_00100ea0;
    lVar3 = OSSL_PARAM_locate(ptr,"bignum");
    iVar1 = test_ptr("test/params_api_test.c",0x2e3,"cp = OSSL_PARAM_locate(p, \"bignum\")",lVar3);
    if (iVar1 == 0) goto LAB_00100ea0;
    a = (BIGNUM *)BN_lebin2bn(bn_val_0,0x10,0);
    iVar1 = test_ptr("test/params_api_test.c",0x2e4,
                     "bn = BN_lebin2bn(bn_val, (int)sizeof(bn_val), NULL)",a);
    if (iVar1 != 0) {
      iVar1 = OSSL_PARAM_set_BN(lVar3,a);
      iVar1 = test_true("test/params_api_test.c",0x2e5,"OSSL_PARAM_set_BN(cp, bn)",iVar1 != 0);
      if ((iVar1 != 0) &&
         (iVar1 = test_size_t_eq("test/params_api_test.c",0x2e6,"cp->data_size","cp->return_size",
                                 *(undefined8 *)(lVar3 + 0x18),*(undefined8 *)(lVar3 + 0x20)),
         iVar1 != 0)) {
        *(undefined8 *)(lVar3 + 0x18) = *(undefined8 *)(lVar3 + 0x20);
        iVar1 = OSSL_PARAM_get_BN(lVar3,&local_4b0);
        iVar1 = test_true("test/params_api_test.c",0x2ea,"OSSL_PARAM_get_BN(cp, &bn2)",iVar1 != 0);
        if (iVar1 != 0) {
          iVar1 = test_BN_eq("test/params_api_test.c",0x2eb,&_LC98,&_LC97,a,local_4b0);
          bVar5 = iVar1 != 0;
          goto LAB_00100ea5;
        }
      }
    }
  }
  bVar5 = false;
LAB_00100ea5:
  if (ptr != local_598) {
    CRYPTO_free(ptr);
  }
  CRYPTO_free(local_5a0);
  CRYPTO_free(local_500);
  BN_free(a);
  BN_free(local_4b0);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar5;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool test_param_real(void)

{
  int iVar1;
  long in_FS_OFFSET;
  bool bVar2;
  undefined8 local_50;
  undefined *local_48;
  undefined4 local_40;
  undefined8 *local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = 3;
  local_30 = __LC100;
  uStack_28 = _UNK_00104ab8;
  local_38 = (undefined8 *)0x0;
  local_48 = &_LC99;
  iVar1 = OSSL_PARAM_get_double(&local_48,&local_50);
  iVar1 = test_int_eq("test/params_api_test.c",0x23d,"test_param_type_null(&param)",&_LC7,iVar1 == 0
                      ,1);
  if (iVar1 != 0) {
    local_38 = &local_50;
    iVar1 = OSSL_PARAM_set_double(_LC102,&local_48);
    iVar1 = test_true("test/params_api_test.c",0x241,"OSSL_PARAM_set_double(&param, 3.14159)",
                      iVar1 != 0);
    if (iVar1 != 0) {
      iVar1 = test_double_eq(local_50,_LC102,"test/params_api_test.c",0x242,&_LC105,"3.14159");
      bVar2 = iVar1 != 0;
      goto LAB_00101921;
    }
  }
  bVar2 = false;
LAB_00101921:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint test_param_bignum(int param_1)

{
  long lVar1;
  ulong uVar2;
  int iVar3;
  uint uVar4;
  BIGNUM *a;
  undefined8 uVar5;
  long in_FS_OFFSET;
  BIGNUM *local_b8;
  undefined1 local_b0 [8];
  undefined *local_a8;
  undefined4 local_a0;
  undefined1 *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 local_78 [32];
  undefined1 local_58 [24];
  long local_40;
  
  uVar2 = *(ulong *)(raw_values + (long)param_1 * 0x20);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_b8 = (BIGNUM *)0x0;
  local_90 = __LC106;
  uStack_88 = _UNK_00104ac8;
  local_a8 = &_LC98;
  local_a0 = 2;
  local_98 = (undefined1 *)0x0;
  iVar3 = OSSL_PARAM_get_BN(&local_a8,local_b0);
  uVar4 = test_int_eq("test/params_api_test.c",0x1f7,"test_param_type_null(&param)",&_LC7,iVar3 == 0
                      ,1);
  if (uVar4 == 0) goto LAB_00101a63;
  lVar1 = (long)param_1 * 0x20 + 0x104888;
  local_90 = 0x14;
  local_98 = local_58;
  a = (BIGNUM *)BN_lebin2bn(lVar1,uVar2 & 0xffffffff,0);
  iVar3 = test_ptr("test/params_api_test.c",0x1fd,
                   "b = BN_lebin2bn(raw_values[n].value, (int)len, NULL)",a);
  if (iVar3 == 0) {
LAB_00101ad3:
    uVar4 = 0;
  }
  else {
    iVar3 = OSSL_PARAM_set_BN(&local_a8,a);
    iVar3 = test_true("test/params_api_test.c",0x200,"OSSL_PARAM_set_BN(&param, b)",iVar3 != 0);
    if (iVar3 == 0) goto LAB_00101ad3;
    uVar5 = __memcpy_chk(local_78,local_58,uVar2,0x14);
    iVar3 = test_mem_eq("test/params_api_test.c",0x203,"raw_values[n].value",&_LC109,lVar1,uVar2);
    if (iVar3 == 0) goto LAB_00101ad3;
    local_90 = uStack_88;
    iVar3 = OSSL_PARAM_get_BN(&local_a8,&local_b8,uVar5,uVar2);
    iVar3 = test_true("test/params_api_test.c",0x206,"OSSL_PARAM_get_BN(&param, &c)",iVar3 != 0);
    if (iVar3 == 0) goto LAB_00101ad3;
    iVar3 = test_BN_eq("test/params_api_test.c",0x207,&_LC1,&_LC112,a,local_b8);
    uVar4 = (uint)(iVar3 != 0);
  }
  BN_free(a);
  BN_free(local_b8);
LAB_00101a63:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool test_param_type_extra(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  undefined8 extraout_RDX;
  undefined8 uVar4;
  long in_FS_OFFSET;
  bool bVar5;
  undefined8 *local_a0;
  undefined8 *local_90;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58 [3];
  long local_40;
  
  iVar3 = *(int *)(param_1 + 8);
  uVar1 = *(ulong *)(param_1 + 0x18);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(param_1 + 0x20) = 0xffffffffffffffff;
  if (iVar3 == 1) {
    if (uVar1 < 5) {
      iVar2 = OSSL_PARAM_get_int32(param_1,&local_6c);
      iVar2 = test_true("test/params_api_test.c",0x85,"OSSL_PARAM_get_int32(param, &i32)",iVar2 != 0
                       );
      if (iVar2 == 0) goto LAB_00101d60;
    }
    iVar2 = OSSL_PARAM_get_int64(param_1,&local_68);
    iVar2 = test_true("test/params_api_test.c",0x86,"OSSL_PARAM_get_int64(param, &i64)",iVar2 != 0);
joined_r0x00101dcb:
    if (iVar2 != 0) {
      local_a0 = &local_68;
      iVar2 = OSSL_PARAM_modified(param_1);
      iVar2 = test_false("test/params_api_test.c",0x8f,"OSSL_PARAM_modified(param)",iVar2 != 0);
      if (iVar2 != 0) {
        if (uVar1 < 5) {
          local_58[0] = CONCAT44(local_58[0]._4_4_,local_6c);
          iVar2 = test_mem_eq("test/params_api_test.c",0x96,&_LC109,&_LC118,local_58,4,param_2,4);
          if (iVar2 == 0) goto LAB_00101d60;
        }
        local_90 = local_58;
        local_58[0] = local_68;
        iVar2 = test_mem_eq("test/params_api_test.c",0x9b,&_LC109,&_LC118,local_90,param_3);
        if (iVar2 != 0) {
          if ((uVar1 < 9) && (iVar3 != 1)) {
            uVar4 = 0xa0;
            local_58[0] = local_60;
            goto LAB_00101ece;
          }
          if (param_3 == 8) {
LAB_00101ff0:
            bVar5 = true;
            goto LAB_00101d62;
          }
          param_2 = extraout_RDX;
          if (iVar3 != 1) goto LAB_00101eea;
          iVar3 = OSSL_PARAM_set_int32(param_1,0x3039);
          iVar3 = test_true("test/params_api_test.c",0xa7,"OSSL_PARAM_set_int32(param, 12345)",
                            iVar3 != 0);
          if (iVar3 != 0) {
            iVar3 = OSSL_PARAM_get_int64(param_1,local_a0);
            iVar3 = test_true("test/params_api_test.c",0xa8,"OSSL_PARAM_get_int64(param, &i64)",
                              iVar3 != 0);
            if (iVar3 != 0) {
              iVar3 = test_size_t_eq("test/params_api_test.c",0xa9,"(size_t)i64","12345",local_68,
                                     0x3039);
              goto joined_r0x00102098;
            }
          }
        }
      }
    }
  }
  else if (uVar1 < 5) {
    iVar2 = OSSL_PARAM_get_uint32(param_1,&local_6c);
    iVar2 = test_true("test/params_api_test.c",0x8a,"OSSL_PARAM_get_uint32(param, (uint32_t *)&i32)"
                      ,iVar2 != 0);
    if (iVar2 != 0) {
      iVar2 = OSSL_PARAM_get_uint64(param_1,&local_68);
      iVar2 = test_true("test/params_api_test.c",0x8b,
                        "OSSL_PARAM_get_uint64(param, (uint64_t *)&i64)",iVar2 != 0);
      if (iVar2 != 0) goto LAB_00101d2c;
    }
  }
  else {
    iVar2 = OSSL_PARAM_get_uint64(param_1,&local_68);
    iVar2 = test_true("test/params_api_test.c",0x8b,"OSSL_PARAM_get_uint64(param, (uint64_t *)&i64)"
                      ,iVar2 != 0);
    if (iVar2 != 0) {
      if (uVar1 < 9) {
LAB_00101d2c:
        iVar2 = OSSL_PARAM_get_size_t(param_1,&local_60);
        iVar2 = test_true("test/params_api_test.c",0x8c,"OSSL_PARAM_get_size_t(param, &s)",
                          iVar2 != 0);
        goto joined_r0x00101dcb;
      }
      iVar3 = OSSL_PARAM_modified(param_1);
      iVar3 = test_false("test/params_api_test.c",0x8f,"OSSL_PARAM_modified(param)",iVar3 != 0);
      if (iVar3 != 0) {
        uVar4 = 0x9b;
        local_58[0] = local_68;
LAB_00101ece:
        iVar3 = test_mem_eq("test/params_api_test.c",uVar4,&_LC109,&_LC118,local_58,param_3,param_2,
                            param_3);
        if (iVar3 != 0) {
          if (param_3 == 8) goto LAB_00101ff0;
LAB_00101eea:
          local_a0 = &local_68;
          iVar3 = OSSL_PARAM_set_uint32(param_1,0x3039,param_2);
          iVar3 = test_true("test/params_api_test.c",0xac,"OSSL_PARAM_set_uint32(param, 12345)",
                            iVar3 != 0);
          if (iVar3 != 0) {
            iVar3 = OSSL_PARAM_get_uint64(param_1,local_a0);
            iVar3 = test_true("test/params_api_test.c",0xad,
                              "OSSL_PARAM_get_uint64(param, (uint64_t *)&i64)",iVar3 != 0);
            if (iVar3 != 0) {
              iVar3 = test_size_t_eq("test/params_api_test.c",0xae,"(size_t)i64","12345",local_68,
                                     0x3039);
joined_r0x00102098:
              if (iVar3 != 0) {
                iVar3 = OSSL_PARAM_modified(param_1);
                iVar3 = test_true("test/params_api_test.c",0xb1,"OSSL_PARAM_modified(param)",
                                  iVar3 != 0);
                bVar5 = iVar3 != 0;
                goto LAB_00101d62;
              }
            }
          }
        }
      }
    }
  }
LAB_00101d60:
  bVar5 = false;
LAB_00101d62:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 test_param_uint32(int param_1)

{
  undefined4 *puVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  undefined8 uVar5;
  undefined4 local_94;
  undefined4 local_90 [2];
  undefined *local_88;
  undefined4 local_80;
  undefined4 *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_5c;
  undefined4 local_58;
  undefined1 auStack_54 [12];
  undefined4 local_48;
  long local_40;
  
  uVar2 = *(ulong *)(raw_values + (long)param_1 * 0x20);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_80 = 2;
  local_78 = (undefined4 *)0x0;
  local_88 = &_LC0;
  local_70 = __LC15;
  uStack_68 = _UNK_00104aa8;
  iVar3 = OSSL_PARAM_get_uint32(&local_88,local_90);
  iVar3 = test_int_eq("test/params_api_test.c",0x160,"test_param_type_null(&param)",&_LC7,iVar3 == 0
                      ,1);
  if (iVar3 != 0) {
    puVar1 = (undefined4 *)(raw_values + (long)param_1 * 0x20 + 8);
    local_48 = 0;
    local_94 = *puVar1;
    auStack_54 = SUB1612((undefined1  [16])0x0,4);
    local_58 = local_94;
    local_78 = local_90;
    iVar3 = OSSL_PARAM_set_uint32(&local_88);
    iVar3 = test_true("test/params_api_test.c",0x167,"OSSL_PARAM_set_uint32(&param, in)",iVar3 != 0)
    ;
    if (iVar3 != 0) {
      local_5c = local_90[0];
      uVar4 = 4;
      if (uVar2 < 5) {
        uVar4 = uVar2;
      }
      iVar3 = test_mem_eq("test/params_api_test.c",0x16a,&_LC118,"raw_values[n].value",&local_5c,
                          uVar4,puVar1,uVar4);
      if (iVar3 != 0) {
        local_94 = 0;
        iVar3 = OSSL_PARAM_get_uint32(&local_88,&local_94);
        iVar3 = test_true("test/params_api_test.c",0x16d,"OSSL_PARAM_get_uint32(&param, &in)",
                          iVar3 != 0);
        if (iVar3 != 0) {
          local_5c = local_94;
          uVar5 = 4;
          iVar3 = test_mem_eq("test/params_api_test.c",0x170,&_LC118,"raw_values[n].value",&local_5c
                              ,4,puVar1);
          if (iVar3 != 0) {
            local_78 = local_90;
            uVar5 = test_param_type_extra(&local_88,puVar1,4,uVar5);
            goto LAB_0010217b;
          }
        }
      }
    }
  }
  uVar5 = 0;
LAB_0010217b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 test_param_uint(int param_1)

{
  undefined4 *puVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  undefined8 uVar5;
  undefined4 local_94;
  undefined4 local_90 [2];
  undefined *local_88;
  undefined4 local_80;
  undefined4 *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_5c;
  undefined4 local_58;
  undefined1 auStack_54 [12];
  undefined4 local_48;
  long local_40;
  
  uVar2 = *(ulong *)(raw_values + (long)param_1 * 0x20);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_80 = 2;
  local_78 = (undefined4 *)0x0;
  local_88 = &_LC0;
  local_70 = __LC15;
  uStack_68 = _UNK_00104aa8;
  iVar3 = OSSL_PARAM_get_uint32(&local_88,local_90);
  iVar3 = test_int_eq("test/params_api_test.c",0x106,"test_param_type_null(&param)",&_LC7,iVar3 == 0
                      ,1);
  if (iVar3 != 0) {
    puVar1 = (undefined4 *)(raw_values + (long)param_1 * 0x20 + 8);
    local_48 = 0;
    local_94 = *puVar1;
    auStack_54 = SUB1612((undefined1  [16])0x0,4);
    local_58 = local_94;
    local_78 = local_90;
    iVar3 = OSSL_PARAM_set_uint(&local_88);
    iVar3 = test_true("test/params_api_test.c",0x10d,"OSSL_PARAM_set_uint(&param, in)",iVar3 != 0);
    if (iVar3 != 0) {
      local_5c = local_90[0];
      uVar4 = 4;
      if (uVar2 < 5) {
        uVar4 = uVar2;
      }
      iVar3 = test_mem_eq("test/params_api_test.c",0x110,&_LC118,"raw_values[n].value",&local_5c,
                          uVar4,puVar1,uVar4);
      if (iVar3 != 0) {
        local_94 = 0;
        iVar3 = OSSL_PARAM_get_uint(&local_88,&local_94);
        iVar3 = test_true("test/params_api_test.c",0x113,"OSSL_PARAM_get_uint(&param, &in)",
                          iVar3 != 0);
        if (iVar3 != 0) {
          local_5c = local_94;
          uVar5 = 4;
          iVar3 = test_mem_eq("test/params_api_test.c",0x116,&_LC118,"raw_values[n].value",&local_5c
                              ,4,puVar1);
          if (iVar3 != 0) {
            local_78 = local_90;
            uVar5 = test_param_type_extra(&local_88,puVar1,4,uVar5);
            goto LAB_0010237b;
          }
        }
      }
    }
  }
  uVar5 = 0;
LAB_0010237b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 test_param_size_t(int param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  undefined8 uVar5;
  undefined8 local_98;
  undefined8 local_90;
  undefined *local_88;
  undefined4 local_80;
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  long local_40;
  
  uVar2 = *(ulong *)(raw_values + (long)param_1 * 0x20);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_80 = 2;
  local_78 = (undefined8 *)0x0;
  local_88 = &_LC0;
  local_70 = __LC100;
  uStack_68 = _UNK_00104ab8;
  iVar3 = OSSL_PARAM_get_uint64(&local_88,&local_90);
  iVar3 = test_int_eq("test/params_api_test.c",0x1ba,"test_param_type_null(&param)",&_LC7,iVar3 == 0
                      ,1);
  if (iVar3 != 0) {
    puVar1 = (undefined8 *)(raw_values + (long)param_1 * 0x20 + 8);
    local_50 = 0;
    local_98 = *puVar1;
    local_48 = 0;
    local_78 = &local_90;
    local_58 = local_98;
    iVar3 = OSSL_PARAM_set_size_t(&local_88);
    iVar3 = test_true("test/params_api_test.c",0x1c1,"OSSL_PARAM_set_size_t(&param, in)",iVar3 != 0)
    ;
    if (iVar3 != 0) {
      local_60 = local_90;
      uVar4 = 8;
      if (uVar2 < 9) {
        uVar4 = uVar2;
      }
      iVar3 = test_mem_eq("test/params_api_test.c",0x1c4,&_LC118,"raw_values[n].value",&local_60,
                          uVar4,puVar1,uVar4);
      if (iVar3 != 0) {
        local_98 = 0;
        iVar3 = OSSL_PARAM_get_size_t(&local_88,&local_98);
        iVar3 = test_true("test/params_api_test.c",0x1c7,"OSSL_PARAM_get_size_t(&param, &in)",
                          iVar3 != 0);
        if (iVar3 != 0) {
          local_60 = local_98;
          uVar5 = 8;
          iVar3 = test_mem_eq("test/params_api_test.c",0x1ca,&_LC118,"raw_values[n].value",&local_60
                              ,8,puVar1);
          if (iVar3 != 0) {
            local_78 = &local_90;
            uVar5 = test_param_type_extra(&local_88,puVar1,8,uVar5);
            goto LAB_0010257b;
          }
        }
      }
    }
  }
  uVar5 = 0;
LAB_0010257b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 test_param_uint64(int param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  undefined8 uVar5;
  undefined8 local_98;
  undefined8 local_90;
  undefined *local_88;
  undefined4 local_80;
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  long local_40;
  
  uVar2 = *(ulong *)(raw_values + (long)param_1 * 0x20);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_80 = 2;
  local_78 = (undefined8 *)0x0;
  local_88 = &_LC0;
  local_70 = __LC100;
  uStack_68 = _UNK_00104ab8;
  iVar3 = OSSL_PARAM_get_uint64(&local_88,&local_90);
  iVar3 = test_int_eq("test/params_api_test.c",0x19c,"test_param_type_null(&param)",&_LC7,iVar3 == 0
                      ,1);
  if (iVar3 != 0) {
    puVar1 = (undefined8 *)(raw_values + (long)param_1 * 0x20 + 8);
    local_50 = 0;
    local_98 = *puVar1;
    local_48 = 0;
    local_78 = &local_90;
    local_58 = local_98;
    iVar3 = OSSL_PARAM_set_uint64(&local_88);
    iVar3 = test_true("test/params_api_test.c",0x1a3,"OSSL_PARAM_set_uint64(&param, in)",iVar3 != 0)
    ;
    if (iVar3 != 0) {
      local_60 = local_90;
      uVar4 = 8;
      if (uVar2 < 9) {
        uVar4 = uVar2;
      }
      iVar3 = test_mem_eq("test/params_api_test.c",0x1a6,&_LC118,"raw_values[n].value",&local_60,
                          uVar4,puVar1,uVar4);
      if (iVar3 != 0) {
        local_98 = 0;
        iVar3 = OSSL_PARAM_get_uint64(&local_88,&local_98);
        iVar3 = test_true("test/params_api_test.c",0x1a9,"OSSL_PARAM_get_uint64(&param, &in)",
                          iVar3 != 0);
        if (iVar3 != 0) {
          local_60 = local_98;
          uVar5 = 8;
          iVar3 = test_mem_eq("test/params_api_test.c",0x1ac,&_LC118,"raw_values[n].value",&local_60
                              ,8,puVar1);
          if (iVar3 != 0) {
            local_78 = &local_90;
            uVar5 = test_param_type_extra(&local_88,puVar1,8,uVar5);
            goto LAB_0010277b;
          }
        }
      }
    }
  }
  uVar5 = 0;
LAB_0010277b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 test_param_int64(int param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  undefined8 uVar5;
  undefined8 local_98;
  undefined8 local_90;
  undefined *local_88;
  undefined4 local_80;
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  long local_40;
  
  uVar2 = *(ulong *)(raw_values + (long)param_1 * 0x20);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_80 = 1;
  local_78 = (undefined8 *)0x0;
  local_88 = &_LC0;
  local_70 = __LC100;
  uStack_68 = _UNK_00104ab8;
  iVar3 = OSSL_PARAM_get_int64(&local_88,&local_90);
  iVar3 = test_int_eq("test/params_api_test.c",0x17e,"test_param_type_null(&param)",&_LC7,iVar3 == 0
                      ,1);
  if (iVar3 != 0) {
    puVar1 = (undefined8 *)(raw_values + (long)param_1 * 0x20 + 8);
    local_50 = 0;
    local_98 = *puVar1;
    local_48 = 0;
    local_78 = &local_90;
    local_58 = local_98;
    iVar3 = OSSL_PARAM_set_int64(&local_88);
    iVar3 = test_true("test/params_api_test.c",0x185,"OSSL_PARAM_set_int64(&param, in)",iVar3 != 0);
    if (iVar3 != 0) {
      local_60 = local_90;
      uVar4 = 8;
      if (uVar2 < 9) {
        uVar4 = uVar2;
      }
      iVar3 = test_mem_eq("test/params_api_test.c",0x188,&_LC118,"raw_values[n].value",&local_60,
                          uVar4,puVar1,uVar4);
      if (iVar3 != 0) {
        local_98 = 0;
        iVar3 = OSSL_PARAM_get_int64(&local_88,&local_98);
        iVar3 = test_true("test/params_api_test.c",0x18b,"OSSL_PARAM_get_int64(&param, &in)",
                          iVar3 != 0);
        if (iVar3 != 0) {
          local_60 = local_98;
          uVar5 = 8;
          iVar3 = test_mem_eq("test/params_api_test.c",0x18e,&_LC118,"raw_values[n].value",&local_60
                              ,8,puVar1);
          if (iVar3 != 0) {
            local_78 = &local_90;
            uVar5 = test_param_type_extra(&local_88,puVar1,8,uVar5);
            goto LAB_0010297b;
          }
        }
      }
    }
  }
  uVar5 = 0;
LAB_0010297b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 test_param_int(int param_1)

{
  undefined4 *puVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  undefined8 uVar5;
  undefined4 local_94;
  undefined4 local_90 [2];
  undefined *local_88;
  undefined4 local_80;
  undefined4 *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_5c;
  undefined4 local_58;
  undefined1 auStack_54 [12];
  undefined4 local_48;
  long local_40;
  
  uVar2 = *(ulong *)(raw_values + (long)param_1 * 0x20);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_80 = 1;
  local_78 = (undefined4 *)0x0;
  local_88 = &_LC0;
  local_70 = __LC15;
  uStack_68 = _UNK_00104aa8;
  iVar3 = OSSL_PARAM_get_int32(&local_88,local_90);
  iVar3 = test_int_eq("test/params_api_test.c",0xcb,"test_param_type_null(&param)",&_LC7,iVar3 == 0,
                      1);
  if (iVar3 != 0) {
    puVar1 = (undefined4 *)(raw_values + (long)param_1 * 0x20 + 8);
    local_48 = 0;
    local_94 = *puVar1;
    auStack_54 = SUB1612((undefined1  [16])0x0,4);
    local_58 = local_94;
    local_78 = local_90;
    iVar3 = OSSL_PARAM_set_int(&local_88);
    iVar3 = test_true("test/params_api_test.c",0xd2,"OSSL_PARAM_set_int(&param, in)",iVar3 != 0);
    if (iVar3 != 0) {
      local_5c = local_90[0];
      uVar4 = 4;
      if (uVar2 < 5) {
        uVar4 = uVar2;
      }
      iVar3 = test_mem_eq("test/params_api_test.c",0xd5,&_LC118,"raw_values[n].value",&local_5c,
                          uVar4,puVar1,uVar4);
      if (iVar3 != 0) {
        local_94 = 0;
        iVar3 = OSSL_PARAM_get_int(&local_88,&local_94);
        iVar3 = test_true("test/params_api_test.c",0xd8,"OSSL_PARAM_get_int(&param, &in)",iVar3 != 0
                         );
        if (iVar3 != 0) {
          local_5c = local_94;
          uVar5 = 4;
          iVar3 = test_mem_eq("test/params_api_test.c",0xdb,&_LC118,"raw_values[n].value",&local_5c,
                              4,puVar1);
          if (iVar3 != 0) {
            local_78 = local_90;
            uVar5 = test_param_type_extra(&local_88,puVar1,4,uVar5);
            goto LAB_00102b7b;
          }
        }
      }
    }
  }
  uVar5 = 0;
LAB_00102b7b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 test_param_long(int param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  undefined8 uVar5;
  undefined8 local_98;
  undefined8 local_90;
  undefined *local_88;
  undefined4 local_80;
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  long local_40;
  
  uVar2 = *(ulong *)(raw_values + (long)param_1 * 0x20);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_80 = 1;
  local_78 = (undefined8 *)0x0;
  local_88 = &_LC0;
  local_70 = __LC100;
  uStack_68 = _UNK_00104ab8;
  iVar3 = OSSL_PARAM_get_int64(&local_88,&local_90);
  iVar3 = test_int_eq("test/params_api_test.c",0xe9,"test_param_type_null(&param)",&_LC7,iVar3 == 0,
                      1);
  if (iVar3 != 0) {
    puVar1 = (undefined8 *)(raw_values + (long)param_1 * 0x20 + 8);
    local_50 = 0;
    local_98 = *puVar1;
    local_48 = 0;
    local_78 = &local_90;
    local_58 = local_98;
    iVar3 = OSSL_PARAM_set_long(&local_88);
    iVar3 = test_true("test/params_api_test.c",0xf0,"OSSL_PARAM_set_long(&param, in)",iVar3 != 0);
    if (iVar3 != 0) {
      local_60 = local_90;
      uVar4 = 8;
      if (uVar2 < 9) {
        uVar4 = uVar2;
      }
      iVar3 = test_mem_eq("test/params_api_test.c",0xf3,&_LC118,"raw_values[n].value",&local_60,
                          uVar4,puVar1,uVar4);
      if (iVar3 != 0) {
        local_98 = 0;
        iVar3 = OSSL_PARAM_get_long(&local_88,&local_98);
        iVar3 = test_true("test/params_api_test.c",0xf6,"OSSL_PARAM_get_long(&param, &in)",
                          iVar3 != 0);
        if (iVar3 != 0) {
          local_60 = local_98;
          uVar5 = 8;
          iVar3 = test_mem_eq("test/params_api_test.c",0xf9,&_LC118,"raw_values[n].value",&local_60,
                              8,puVar1);
          if (iVar3 != 0) {
            local_78 = &local_90;
            uVar5 = test_param_type_extra(&local_88,puVar1,8,uVar5);
            goto LAB_00102d7b;
          }
        }
      }
    }
  }
  uVar5 = 0;
LAB_00102d7b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 test_param_time_t(int param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  undefined8 uVar5;
  undefined8 local_98;
  undefined8 local_90;
  undefined *local_88;
  undefined4 local_80;
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  long local_40;
  
  uVar2 = *(ulong *)(raw_values + (long)param_1 * 0x20);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_80 = 1;
  local_78 = (undefined8 *)0x0;
  local_88 = &_LC0;
  local_70 = __LC100;
  uStack_68 = _UNK_00104ab8;
  iVar3 = OSSL_PARAM_get_int64(&local_88,&local_90);
  iVar3 = test_int_eq("test/params_api_test.c",0x1d8,"test_param_type_null(&param)",&_LC7,iVar3 == 0
                      ,1);
  if (iVar3 != 0) {
    puVar1 = (undefined8 *)(raw_values + (long)param_1 * 0x20 + 8);
    local_50 = 0;
    local_98 = *puVar1;
    local_48 = 0;
    local_78 = &local_90;
    local_58 = local_98;
    iVar3 = OSSL_PARAM_set_time_t(&local_88);
    iVar3 = test_true("test/params_api_test.c",0x1df,"OSSL_PARAM_set_time_t(&param, in)",iVar3 != 0)
    ;
    if (iVar3 != 0) {
      local_60 = local_90;
      uVar4 = 8;
      if (uVar2 < 9) {
        uVar4 = uVar2;
      }
      iVar3 = test_mem_eq("test/params_api_test.c",0x1e2,&_LC118,"raw_values[n].value",&local_60,
                          uVar4,puVar1,uVar4);
      if (iVar3 != 0) {
        local_98 = 0;
        iVar3 = OSSL_PARAM_get_time_t(&local_88,&local_98);
        iVar3 = test_true("test/params_api_test.c",0x1e5,"OSSL_PARAM_get_time_t(&param, &in)",
                          iVar3 != 0);
        if (iVar3 != 0) {
          local_60 = local_98;
          uVar5 = 8;
          iVar3 = test_mem_eq("test/params_api_test.c",0x1e8,&_LC118,"raw_values[n].value",&local_60
                              ,8,puVar1);
          if (iVar3 != 0) {
            local_78 = &local_90;
            uVar5 = test_param_type_extra(&local_88,puVar1,8,uVar5);
            goto LAB_00102f7b;
          }
        }
      }
    }
  }
  uVar5 = 0;
LAB_00102f7b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 test_param_int32(int param_1)

{
  undefined4 *puVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  undefined8 uVar5;
  undefined4 local_94;
  undefined4 local_90 [2];
  undefined *local_88;
  undefined4 local_80;
  undefined4 *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_5c;
  undefined4 local_58;
  undefined1 auStack_54 [12];
  undefined4 local_48;
  long local_40;
  
  uVar2 = *(ulong *)(raw_values + (long)param_1 * 0x20);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_80 = 1;
  local_78 = (undefined4 *)0x0;
  local_88 = &_LC0;
  local_70 = __LC15;
  uStack_68 = _UNK_00104aa8;
  iVar3 = OSSL_PARAM_get_int32(&local_88,local_90);
  iVar3 = test_int_eq("test/params_api_test.c",0x142,"test_param_type_null(&param)",&_LC7,iVar3 == 0
                      ,1);
  if (iVar3 != 0) {
    puVar1 = (undefined4 *)(raw_values + (long)param_1 * 0x20 + 8);
    local_48 = 0;
    local_94 = *puVar1;
    auStack_54 = SUB1612((undefined1  [16])0x0,4);
    local_58 = local_94;
    local_78 = local_90;
    iVar3 = OSSL_PARAM_set_int32(&local_88);
    iVar3 = test_true("test/params_api_test.c",0x149,"OSSL_PARAM_set_int32(&param, in)",iVar3 != 0);
    if (iVar3 != 0) {
      local_5c = local_90[0];
      uVar4 = 4;
      if (uVar2 < 5) {
        uVar4 = uVar2;
      }
      iVar3 = test_mem_eq("test/params_api_test.c",0x14c,&_LC118,"raw_values[n].value",&local_5c,
                          uVar4,puVar1,uVar4);
      if (iVar3 != 0) {
        local_94 = 0;
        iVar3 = OSSL_PARAM_get_int32(&local_88,&local_94);
        iVar3 = test_true("test/params_api_test.c",0x14f,"OSSL_PARAM_get_int32(&param, &in)",
                          iVar3 != 0);
        if (iVar3 != 0) {
          local_5c = local_94;
          uVar5 = 4;
          iVar3 = test_mem_eq("test/params_api_test.c",0x152,&_LC118,"raw_values[n].value",&local_5c
                              ,4,puVar1);
          if (iVar3 != 0) {
            local_78 = local_90;
            uVar5 = test_param_type_extra(&local_88,puVar1,4,uVar5);
            goto LAB_0010317b;
          }
        }
      }
    }
  }
  uVar5 = 0;
LAB_0010317b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 test_param_ulong(int param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  undefined8 uVar5;
  undefined8 local_98;
  undefined8 local_90;
  undefined *local_88;
  undefined4 local_80;
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  long local_40;
  
  uVar2 = *(ulong *)(raw_values + (long)param_1 * 0x20);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_80 = 2;
  local_78 = (undefined8 *)0x0;
  local_88 = &_LC0;
  local_70 = __LC100;
  uStack_68 = _UNK_00104ab8;
  iVar3 = OSSL_PARAM_get_uint64(&local_88,&local_90);
  iVar3 = test_int_eq("test/params_api_test.c",0x124,"test_param_type_null(&param)",&_LC7,iVar3 == 0
                      ,1);
  if (iVar3 != 0) {
    puVar1 = (undefined8 *)(raw_values + (long)param_1 * 0x20 + 8);
    local_50 = 0;
    local_98 = *puVar1;
    local_48 = 0;
    local_78 = &local_90;
    local_58 = local_98;
    iVar3 = OSSL_PARAM_set_ulong(&local_88);
    iVar3 = test_true("test/params_api_test.c",299,"OSSL_PARAM_set_ulong(&param, in)",iVar3 != 0);
    if (iVar3 != 0) {
      local_60 = local_90;
      uVar4 = 8;
      if (uVar2 < 9) {
        uVar4 = uVar2;
      }
      iVar3 = test_mem_eq("test/params_api_test.c",0x12e,&_LC118,"raw_values[n].value",&local_60,
                          uVar4,puVar1,uVar4);
      if (iVar3 != 0) {
        local_98 = 0;
        iVar3 = OSSL_PARAM_get_ulong(&local_88,&local_98);
        iVar3 = test_true("test/params_api_test.c",0x131,"OSSL_PARAM_get_ulong(&param, &in)",
                          iVar3 != 0);
        if (iVar3 != 0) {
          local_60 = local_98;
          uVar5 = 8;
          iVar3 = test_mem_eq("test/params_api_test.c",0x134,&_LC118,"raw_values[n].value",&local_60
                              ,8,puVar1);
          if (iVar3 != 0) {
            local_78 = &local_90;
            uVar5 = test_param_type_extra(&local_88,puVar1,8,uVar5);
            goto LAB_0010337b;
          }
        }
      }
    }
  }
  uVar5 = 0;
LAB_0010337b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int test_param_signed_bignum(int param_1)

{
  char cVar1;
  ulong uVar2;
  int iVar3;
  uint uVar4;
  BIGNUM *a;
  undefined8 uVar5;
  long lVar6;
  long in_FS_OFFSET;
  BIGNUM *local_b0;
  undefined *local_a8;
  undefined4 local_a0;
  undefined1 *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 local_78 [32];
  undefined1 local_58 [24];
  long local_40;
  
  lVar6 = (long)param_1 * 0x20;
  uVar2 = *(ulong *)(raw_values + lVar6);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_b0 = (BIGNUM *)0x0;
  local_a8 = &_LC98;
  local_a0 = 1;
  local_98 = (undefined1 *)0x0;
  local_90 = __LC106;
  uStack_88 = _UNK_00104ac8;
  iVar3 = test_int_eq("test/params_api_test.c",0x219,"test_param_type_null(&param)",&_LC7,1,1);
  if (iVar3 == 0) goto LAB_00103572;
  local_90 = 0x14;
  local_98 = local_58;
  a = (BIGNUM *)BN_signed_lebin2bn(lVar6 + 0x104888,uVar2 & 0xffffffff,0);
  iVar3 = test_ptr("test/params_api_test.c",0x21f,
                   "b = BN_signed_lebin2bn(raw_values[n].value, (int)len, NULL)",a);
  if (iVar3 == 0) {
LAB_001035e3:
    iVar3 = 0;
  }
  else {
    cVar1 = *(char *)(lVar6 + 0x104887 + uVar2);
    uVar4 = BN_is_negative(a);
    iVar3 = test_false("test/params_api_test.c",0x223,
                       "!!(raw_values[n].value[len - 1] & 0x80) ^ BN_is_negative(b)",
                       (uint)(int)cVar1 >> 0x1f != uVar4);
    if (iVar3 == 0) goto LAB_001035e3;
    iVar3 = OSSL_PARAM_set_BN(&local_a8,a);
    iVar3 = test_true("test/params_api_test.c",0x225,"OSSL_PARAM_set_BN(&param, b)",iVar3 != 0);
    if (iVar3 == 0) goto LAB_001035e3;
    uVar5 = __memcpy_chk(local_78,local_58,uVar2,0x14);
    iVar3 = test_mem_eq("test/params_api_test.c",0x228,"raw_values[n].value",&_LC109,
                        lVar6 + 0x104888,uVar2);
    if (iVar3 == 0) goto LAB_001035e3;
    local_90 = uStack_88;
    iVar3 = OSSL_PARAM_get_BN(&local_a8,&local_b0,uVar5,uVar2);
    iVar3 = test_true("test/params_api_test.c",0x22b,"OSSL_PARAM_get_BN(&param, &c)",iVar3 != 0);
    if (iVar3 == 0) {
LAB_0010370b:
      BN_print_fp(_stderr,local_b0);
      goto LAB_001035e3;
    }
    iVar3 = test_BN_eq("test/params_api_test.c",0x22c,&_LC1,&_LC112,a,local_b0);
    if (iVar3 == 0) goto LAB_0010370b;
    iVar3 = 1;
  }
  BN_free(a);
  BN_free(local_b0);
LAB_00103572:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 setup_tests(void)

{
  add_all_tests("test_param_int",test_param_int,0xe,1);
  add_all_tests("test_param_long",test_param_long,0xe,1);
  add_all_tests("test_param_uint",test_param_uint,0xe,1);
  add_all_tests("test_param_ulong",test_param_ulong,0xe,1);
  add_all_tests("test_param_int32",test_param_int32,0xe,1);
  add_all_tests("test_param_uint32",test_param_uint32,0xe,1);
  add_all_tests("test_param_size_t",test_param_size_t,0xe,1);
  add_all_tests("test_param_time_t",test_param_time_t,0xe,1);
  add_all_tests("test_param_int64",test_param_int64,0xe,1);
  add_all_tests("test_param_uint64",test_param_uint64,0xe,1);
  add_all_tests("test_param_bignum",test_param_bignum,0xe,1);
  add_all_tests("test_param_signed_bignum",test_param_signed_bignum,0xe,1);
  add_test("test_param_real",test_param_real);
  add_all_tests("test_param_construct",test_param_construct,4,1);
  add_test("test_param_modified",test_param_modified);
  add_test("test_param_copy_null",0x100000);
  return 1;
}


