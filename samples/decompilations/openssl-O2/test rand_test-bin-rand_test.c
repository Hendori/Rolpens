
undefined8 r_random_bytes(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  
  lVar2 = param_4 - 1;
  if (param_4 != 0) {
    if ((param_4 & 1) != 0) {
      *(char *)(param_3 + lVar2) = (char)lVar2;
      lVar2 = param_4 - 2;
      if (param_4 == 1) {
        return 1;
      }
    }
    do {
      *(char *)(param_3 + lVar2) = (char)lVar2;
      lVar1 = lVar2 + -1;
      lVar2 = lVar2 + -2;
      *(char *)(param_3 + lVar1) = (char)lVar1;
    } while (lVar2 != -1);
  }
  return 1;
}



bool r_init(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)malloc(8);
  if (puVar1 != (undefined8 *)0x0) {
    *param_4 = puVar1;
    *puVar1 = param_1;
    *param_3 = r_test_table;
  }
  return puVar1 != (undefined8 *)0x0;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void r_teardown(void *__ptr)

{
  free(__ptr);
  return;
}



int fips_health_test_one(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined8 local_4b8;
  undefined8 uStack_4b0;
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  undefined8 local_498;
  undefined4 local_47c;
  undefined8 local_478;
  undefined8 uStack_470;
  undefined8 local_468;
  undefined8 uStack_460;
  undefined8 local_458;
  undefined8 local_450;
  undefined8 uStack_448;
  undefined8 local_440;
  undefined8 uStack_438;
  undefined8 local_430;
  undefined1 local_428 [1000];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_47c = 0xffffffff;
  OSSL_PARAM_construct_octet_string(&local_4b8,"test_entropy",param_1,param_2);
  local_458 = local_498;
  local_478 = local_4b8;
  uStack_470 = uStack_4b0;
  local_468 = local_4a8;
  uStack_460 = uStack_4a0;
  OSSL_PARAM_construct_end(&local_4b8);
  local_450 = local_4b8;
  uStack_448 = uStack_4b0;
  local_430 = local_498;
  local_440 = local_4a8;
  uStack_438 = uStack_4a0;
  uVar2 = EVP_RAND_fetch(0,"TEST-RAND","-fips");
  iVar1 = test_ptr("test/rand_test.c",0x6f,
                   "parent_alg = EVP_RAND_fetch(NULL, \"TEST-RAND\", \"-fips\")",uVar2);
  if (iVar1 == 0) {
    iVar1 = 0;
    uVar4 = 0;
    uVar5 = 0;
    uVar3 = 0;
  }
  else {
    uVar3 = EVP_RAND_fetch(0,"CRNG-TEST","-fips");
    iVar1 = test_ptr("test/rand_test.c",0x70,
                     "crngt_alg = EVP_RAND_fetch(NULL, \"CRNG-TEST\", \"-fips\")",uVar3);
    if (iVar1 == 0) {
      uVar4 = 0;
      uVar5 = 0;
      iVar1 = 0;
    }
    else {
      uVar4 = EVP_RAND_CTX_new(uVar2,0);
      iVar1 = test_ptr("test/rand_test.c",0x71,"parent = EVP_RAND_CTX_new(parent_alg, NULL)",uVar4);
      uVar5 = 0;
      if (iVar1 != 0) {
        uVar5 = EVP_RAND_CTX_new(uVar3,uVar4);
        iVar1 = test_ptr("test/rand_test.c",0x72,"crngt = EVP_RAND_CTX_new(crngt_alg, parent)",uVar5
                        );
        if (iVar1 != 0) {
          iVar1 = EVP_RAND_instantiate(uVar4,0,0,&_LC9,3,&local_478);
          iVar1 = test_true("test/rand_test.c",0x73,
                            "EVP_RAND_instantiate(parent, 0, 0, (unsigned char *)\"abc\", 3, p)",
                            iVar1 != 0);
          if (iVar1 == 0) goto LAB_00100177;
          iVar1 = EVP_RAND_instantiate(uVar5,0,0,&_LC11,3,0);
          iVar1 = test_true("test/rand_test.c",0x75,
                            "EVP_RAND_instantiate(crngt, 0, 0, (unsigned char *)\"def\", 3, NULL)",
                            iVar1 != 0);
          if (iVar1 != 0) {
            iVar1 = test_size_t_le("test/rand_test.c",0x77,&_LC14,"sizeof(out)",param_3,1000);
            if (iVar1 != 0) {
              OSSL_PARAM_construct_int(&local_4b8,"fips-indicator",&local_47c);
              local_478 = local_4b8;
              uStack_470 = uStack_4b0;
              local_468 = local_4a8;
              uStack_460 = uStack_4a0;
              local_458 = local_498;
              iVar1 = EVP_RAND_CTX_get_params(uVar5,&local_478);
              iVar1 = test_true("test/rand_test.c",0x7d,"EVP_RAND_CTX_get_params(crngt, p)",
                                iVar1 != 0);
              if (iVar1 != 0) {
                iVar1 = test_int_le("test/rand_test.c",0x7e,"indicator",&_LC17,local_47c,0);
                if (iVar1 != 0) {
                  ERR_set_mark();
                  iVar1 = EVP_RAND_generate(uVar5,local_428,param_3,0,0,0,0);
                  ERR_pop_to_mark();
                  goto LAB_00100177;
                }
              }
            }
          }
        }
        iVar1 = 0;
      }
    }
  }
LAB_00100177:
  EVP_RAND_CTX_free(uVar5);
  EVP_RAND_CTX_free(uVar4);
  EVP_RAND_free(uVar3);
  EVP_RAND_free(uVar2);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool fips_health_tests(void)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  char cVar5;
  long in_FS_OFFSET;
  bool bVar6;
  char local_408 [1000];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = 0;
  do {
    local_408[lVar2] = (char)lVar2;
    lVar3 = lVar2 + 2;
    local_408[lVar2 + 1] = (char)lVar2 + '\x01';
    lVar2 = lVar3;
  } while (lVar3 != 1000);
  iVar1 = fips_health_test_one(local_408,1000,1000);
  iVar1 = test_true("test/rand_test.c",0x94,"fips_health_test_one(buf, i, i)",iVar1 != 0);
  uVar4 = 0;
  if (iVar1 != 0) {
    do {
      for (; uVar4 < 0xb; uVar4 = uVar4 + 1) {
        local_408[uVar4] = (char)uVar4;
      }
      local_408[uVar4] = -0x38;
      uVar4 = uVar4 + 1;
    } while (uVar4 != 0x14);
    iVar1 = fips_health_test_one(local_408,0x14,0x14);
    iVar1 = test_false("test/rand_test.c",0x9a,"fips_health_test_one(buf, i, i)",iVar1 != 0);
    if (iVar1 != 0) {
      uVar4 = 0;
      do {
        for (; uVar4 < 0x200; uVar4 = uVar4 + 1) {
          local_408[uVar4] = (char)uVar4;
        }
        cVar5 = -0x80;
        if ((uVar4 & 7) != 0) {
          cVar5 = (char)uVar4;
        }
        local_408[uVar4] = cVar5;
        uVar4 = uVar4 + 1;
      } while (uVar4 != 1000);
      iVar1 = fips_health_test_one(local_408,1000,1000);
      iVar1 = test_false("test/rand_test.c",0xa0,"fips_health_test_one(buf, i, i)",iVar1 != 0);
      bVar6 = iVar1 != 0;
      goto LAB_00100584;
    }
  }
  bVar6 = false;
LAB_00100584:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 test_rand_uniform(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  long in_FS_OFFSET;
  undefined4 local_4c;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_4c = 0;
  iVar1 = test_get_libctx(&local_48,0,0,0,0);
  if (iVar1 == 0) {
    uVar4 = 0;
  }
  else {
    iVar1 = 1;
    do {
      uVar2 = ossl_rand_uniform_uint32(local_48,iVar1,&local_4c);
      iVar3 = test_int_eq("test/rand_test.c",0x4d,&_LC20,&_LC17,local_4c,0);
      if (iVar3 == 0) goto LAB_00100748;
      iVar3 = test_uint_ge("test/rand_test.c",0x4e,&_LC21,&_LC17,uVar2,0);
      if (iVar3 == 0) goto LAB_00100748;
      iVar3 = test_uint_lt("test/rand_test.c",0x4f,&_LC21,&_LC22,uVar2);
      if (iVar3 == 0) goto LAB_00100748;
      iVar1 = iVar1 + 0xd;
    } while (iVar1 != 0x69);
    iVar1 = 1;
    do {
      uVar5 = iVar1 + 1;
      do {
        uVar2 = ossl_rand_range_uint32(local_48,iVar1,uVar5,&local_4c);
        iVar3 = test_int_eq("test/rand_test.c",0x55,&_LC20,&_LC17,local_4c,0);
        if (iVar3 == 0) goto LAB_00100748;
        iVar3 = test_uint_ge("test/rand_test.c",0x56,&_LC21,&_LC22,uVar2,iVar1);
        if (iVar3 == 0) goto LAB_00100748;
        iVar3 = test_uint_lt("test/rand_test.c",0x57,&_LC21,&_LC23,uVar2);
        if (iVar3 == 0) goto LAB_00100748;
        uVar5 = uVar5 + 0xb;
      } while (uVar5 < 0x96);
      iVar1 = iVar1 + 0x11;
    } while (iVar1 != 0x67);
    uVar4 = 1;
  }
  OSSL_LIB_CTX_free(local_48);
LAB_0010074a:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00100748:
  uVar4 = 0;
  goto LAB_0010074a;
}



bool test_rand(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  char *__s1;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long in_FS_OFFSET;
  bool bVar8;
  byte bVar9;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined2 local_4c;
  undefined1 local_4a;
  undefined1 local_49 [3];
  undefined4 local_46;
  undefined2 local_42;
  long local_40;
  
  bVar9 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_42 = 0x504;
  local_4c = 0xfeff;
  local_ac = 1;
  local_46 = 0x3020100;
  local_4a = 0xfd;
  OSSL_PARAM_construct_octet_string(&local_e8,"test_entropy",&local_46,6);
  local_88 = local_c8;
  local_a8 = local_e8;
  uStack_a0 = uStack_e0;
  local_98 = local_d8;
  uStack_90 = uStack_d0;
  OSSL_PARAM_construct_end(&local_e8);
  local_80 = local_e8;
  uStack_78 = uStack_e0;
  local_60 = local_c8;
  local_70 = local_d8;
  uStack_68 = uStack_d0;
  uVar3 = RAND_get0_private(0);
  iVar1 = test_ptr("test/rand_test.c",0x20,"privctx = RAND_get0_private(NULL)",uVar3);
  if (iVar1 != 0) {
    iVar1 = EVP_RAND_CTX_set_params(uVar3,&local_a8);
    iVar1 = test_true("test/rand_test.c",0x21,"EVP_RAND_CTX_set_params(privctx, params)",iVar1 != 0)
    ;
    if (iVar1 != 0) {
      uVar2 = RAND_priv_bytes(local_49,3);
      iVar1 = test_int_gt("test/rand_test.c",0x22,"RAND_priv_bytes(outbuf, sizeof(outbuf))",&_LC17,
                          uVar2,0);
      if (iVar1 != 0) {
        iVar1 = test_mem_eq("test/rand_test.c",0x23,"outbuf","entropy1",local_49,3);
        if (iVar1 != 0) {
          uVar2 = RAND_priv_bytes(local_49,4);
          iVar1 = test_int_le("test/rand_test.c",0x24,"RAND_priv_bytes(outbuf, sizeof(outbuf) + 1)",
                              &_LC17,uVar2,0);
          if (iVar1 != 0) {
            uVar2 = RAND_priv_bytes(local_49,3);
            iVar1 = test_int_gt("test/rand_test.c",0x25,"RAND_priv_bytes(outbuf, sizeof(outbuf))",
                                &_LC17,uVar2,0);
            if (iVar1 != 0) {
              iVar1 = test_mem_eq("test/rand_test.c",0x26,"outbuf","entropy1 + sizeof(outbuf)",
                                  local_49,3,(long)&local_46 + 3,3);
              if (iVar1 != 0) {
                OSSL_PARAM_construct_octet_string(&local_e8,"test_entropy",&local_4c,3);
                local_88 = local_c8;
                local_a8 = local_e8;
                uStack_a0 = uStack_e0;
                local_98 = local_d8;
                uStack_90 = uStack_d0;
                iVar1 = EVP_RAND_CTX_set_params(uVar3,&local_a8);
                iVar1 = test_true("test/rand_test.c",0x2c,"EVP_RAND_CTX_set_params(privctx, params)"
                                  ,iVar1 != 0);
                if (iVar1 != 0) {
                  uVar2 = RAND_priv_bytes(local_49,3);
                  iVar1 = test_int_gt("test/rand_test.c",0x2d,
                                      "RAND_priv_bytes(outbuf, sizeof(outbuf))",&_LC17,uVar2,0);
                  if (iVar1 != 0) {
                    iVar1 = test_mem_eq("test/rand_test.c",0x2e,"outbuf","entropy2",local_49,3,
                                        &local_4c,3);
                    if (iVar1 != 0) {
                      iVar1 = fips_provider_version_lt(0,3,4,0);
                      if (iVar1 == 0) {
                        uVar4 = EVP_RAND_CTX_get0_rand(uVar3);
                        lVar5 = EVP_RAND_get0_provider(uVar4);
                        if (lVar5 != 0) {
                          __s1 = (char *)OSSL_PROVIDER_get0_name(lVar5);
                          iVar1 = strcmp(__s1,"fips");
                          if (iVar1 == 0) {
                            OSSL_PARAM_construct_int(&local_e8,"fips-indicator",&local_ac);
                            puVar6 = &local_e8;
                            puVar7 = &local_a8;
                            for (lVar5 = 10; lVar5 != 0; lVar5 = lVar5 + -1) {
                              *(undefined4 *)puVar7 = *(undefined4 *)puVar6;
                              puVar6 = (undefined8 *)((long)puVar6 + (ulong)bVar9 * -8 + 4);
                              puVar7 = (undefined8 *)((long)puVar7 + (ulong)bVar9 * -8 + 4);
                            }
                            iVar1 = EVP_RAND_CTX_get_params(uVar3,&local_a8);
                            iVar1 = test_true("test/rand_test.c",0x3b,
                                              "EVP_RAND_CTX_get_params(privctx, params)",iVar1 != 0)
                            ;
                            if (iVar1 != 0) {
                              iVar1 = test_int_eq("test/rand_test.c",0x3c,"indicator",&_LC17,
                                                  local_ac,0);
                              bVar8 = iVar1 != 0;
                              goto LAB_001008a4;
                            }
                            goto LAB_001008a2;
                          }
                        }
                      }
                      bVar8 = true;
                      goto LAB_001008a4;
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
LAB_001008a2:
  bVar8 = false;
LAB_001008a4:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool test_rand_random_provider(void)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  bool bVar3;
  undefined8 local_60;
  undefined7 local_56;
  undefined4 uStack_4f;
  undefined7 local_4b;
  undefined4 uStack_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_56 = 0xffffffffffffff;
  local_4b = 0xffffffffffffff;
  local_60 = 0;
  uStack_4f = 0xffffffff;
  uStack_44 = 0xffffffff;
  iVar1 = test_get_libctx(&local_60,0,0,0,0);
  if (iVar1 != 0) {
    iVar1 = OSSL_PROVIDER_add_builtin(local_60,"r_prov",r_init);
    iVar1 = test_true("test/rand_test.c",0xdb,"OSSL_PROVIDER_add_builtin(ctx, \"r_prov\", &r_init)",
                      iVar1 != 0);
    if (iVar1 != 0) {
      uVar2 = OSSL_PROVIDER_try_load(local_60,"r_prov",1);
      iVar1 = test_ptr("test/rand_test.c",0xdc,"prov = OSSL_PROVIDER_try_load(ctx, \"r_prov\", 1)",
                       uVar2);
      if (iVar1 != 0) {
        iVar1 = RAND_set1_random_provider(local_60,uVar2);
        iVar1 = test_true("test/rand_test.c",0xdd,"RAND_set1_random_provider(ctx, prov)",iVar1 != 0)
        ;
        if (iVar1 != 0) {
          iVar1 = RAND_bytes_ex(local_60,&local_56,0xb,0x100);
          if (iVar1 != 0) {
            iVar1 = test_mem_eq("test/rand_test.c",0xdf,&_LC39,&_LC38,&local_56,0xb,data_0,0xb);
            if (iVar1 != 0) {
              iVar1 = RAND_priv_bytes_ex(local_60,&local_4b,0xb,0x100);
              if (iVar1 != 0) {
                iVar1 = test_mem_eq("test/rand_test.c",0xe1,"privbuf",&_LC38,&local_4b,0xb);
                if (iVar1 != 0) {
                  iVar1 = RAND_set1_random_provider(local_60,0);
                  iVar1 = test_true("test/rand_test.c",0xe5,"RAND_set1_random_provider(ctx, NULL)",
                                    iVar1 != 0);
                  if (iVar1 != 0) {
                    iVar1 = RAND_bytes_ex(local_60,&local_56,0xb,0x100);
                    if (iVar1 != 0) {
                      iVar1 = test_mem_ne("test/rand_test.c",0xe7,&_LC39,&_LC38,&local_56,0xb,data_0
                                          ,0xb);
                      if (iVar1 != 0) {
                        iVar1 = RAND_set1_random_provider(local_60,uVar2);
                        iVar1 = test_true("test/rand_test.c",0xeb,
                                          "RAND_set1_random_provider(ctx, prov)",iVar1 != 0);
                        if (iVar1 != 0) {
                          iVar1 = RAND_bytes_ex(local_60,&local_56,0xb,0x100);
                          if (iVar1 != 0) {
                            iVar1 = test_mem_eq("test/rand_test.c",0xed,&_LC39,&_LC38,&local_56,0xb,
                                                data_0,0xb);
                            bVar3 = iVar1 != 0;
                            goto LAB_00100c39;
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
      bVar3 = false;
      goto LAB_00100c39;
    }
  }
  bVar3 = false;
  uVar2 = 0;
LAB_00100c39:
  OSSL_PROVIDER_unload(uVar2);
  OSSL_LIB_CTX_free(local_60);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 setup_tests(void)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = test_get_argument(0);
  iVar1 = test_ptr("test/rand_test.c",0xfb,"configfile = test_get_argument(0)",uVar2);
  if (iVar1 != 0) {
    iVar1 = RAND_set_DRBG_type(0,"TEST-RAND","fips=no",0,0);
    iVar1 = test_true("test/rand_test.c",0xfc,
                      "RAND_set_DRBG_type(NULL, \"TEST-RAND\", \"fips=no\", NULL, NULL)",iVar1 != 0)
    ;
    if (iVar1 != 0) {
      iVar1 = fips_provider_version_ge(0,3,0,8);
      if (iVar1 != 0) {
        iVar1 = OSSL_LIB_CTX_load_config(0,uVar2);
        iVar1 = test_true("test/rand_test.c",0xff,"OSSL_LIB_CTX_load_config(NULL, configfile)",
                          iVar1 != 0);
        if (iVar1 == 0) {
          return 0;
        }
      }
      add_test("test_rand",test_rand);
      add_test("test_rand_uniform",test_rand_uniform);
      iVar1 = OSSL_PROVIDER_available(0,&_LC32);
      if ((iVar1 != 0) && (iVar1 = fips_provider_version_ge(0,3,4,0), iVar1 != 0)) {
        add_test("fips_health_tests",fips_health_tests);
      }
      add_test("test_rand_random_provider",test_rand_random_provider);
      return 1;
    }
  }
  return 0;
}


