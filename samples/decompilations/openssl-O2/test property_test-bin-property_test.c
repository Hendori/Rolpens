
undefined8 up_ref(void)

{
  return 1;
}



void down_ref(void)

{
  return;
}



uint test_property_list_to_string(int param_1)

{
  char *__s;
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  void *ptr;
  undefined8 uVar5;
  size_t sVar6;
  
  lVar3 = *(long *)(to_string_tests + (long)param_1 * 0x10);
  if (lVar3 != 0) {
    lVar3 = ossl_parse_query(0,lVar3,1);
    uVar1 = test_ptr("test/property_test.c",0x29d,
                     "pl = ossl_parse_query(NULL, to_string_tests[i].in, 1)",lVar3);
    ptr = (void *)0x0;
    if (uVar1 == 0) goto LAB_001000c6;
  }
  uVar4 = ossl_property_list_to_string(0,lVar3,0,0);
  uVar1 = test_size_t_gt("test/property_test.c",0x2a0,"bufsize",&_LC2,uVar4,0);
  ptr = (void *)0x0;
  if (uVar1 == 0) goto LAB_001000c6;
  ptr = CRYPTO_malloc((int)uVar4,"test/property_test.c",0x2a2);
  iVar2 = test_ptr("test/property_test.c",0x2a3,&_LC4,ptr);
  if (iVar2 != 0) {
    uVar5 = ossl_property_list_to_string(0,lVar3,ptr,uVar4);
    uVar1 = test_size_t_eq("test/property_test.c",0x2a4,
                           "ossl_property_list_to_string(NULL, pl, buf, bufsize)","bufsize",uVar5,
                           uVar4);
    if (uVar1 == 0) goto LAB_001000c6;
    __s = *(char **)(to_string_tests + (long)param_1 * 0x10 + 8);
    iVar2 = test_str_eq("test/property_test.c",0x2a7,"to_string_tests[i].out",&_LC4,__s,ptr);
    if (iVar2 != 0) {
      sVar6 = strlen(__s);
      iVar2 = test_size_t_eq("test/property_test.c",0x2a8,"bufsize",
                             "strlen(to_string_tests[i].out) + 1",uVar4,sVar6 + 1);
      uVar1 = (uint)(iVar2 != 0);
      goto LAB_001000c6;
    }
  }
  uVar1 = 0;
LAB_001000c6:
  CRYPTO_free(ptr);
  ossl_property_free(lVar3);
  return uVar1;
}



bool test_fips_mode(void)

{
  int iVar1;
  undefined8 uVar2;
  bool bVar3;
  
  uVar2 = OSSL_LIB_CTX_new();
  iVar1 = test_ptr("test/property_test.c",0x263,"ctx = OSSL_LIB_CTX_new()",uVar2);
  if (iVar1 != 0) {
    iVar1 = EVP_set_default_properties(uVar2,"default=yes,fips=yes");
    iVar1 = test_true("test/property_test.c",0x266,
                      "EVP_set_default_properties(ctx, \"default=yes,fips=yes\")",iVar1 != 0);
    if (iVar1 != 0) {
      iVar1 = EVP_default_properties_is_fips_enabled(uVar2);
      iVar1 = test_true("test/property_test.c",0x267,"EVP_default_properties_is_fips_enabled(ctx)",
                        iVar1 != 0);
      if (iVar1 != 0) {
        iVar1 = EVP_set_default_properties(uVar2,"fips=no,default=yes");
        iVar1 = test_true("test/property_test.c",0x268,
                          "EVP_set_default_properties(ctx, \"fips=no,default=yes\")",iVar1 != 0);
        if (iVar1 != 0) {
          iVar1 = EVP_default_properties_is_fips_enabled(uVar2);
          iVar1 = test_false("test/property_test.c",0x269,
                             "EVP_default_properties_is_fips_enabled(ctx)",iVar1 != 0);
          if (iVar1 != 0) {
            iVar1 = EVP_set_default_properties(uVar2,"fips=no");
            iVar1 = test_true("test/property_test.c",0x26a,
                              "EVP_set_default_properties(ctx, \"fips=no\")",iVar1 != 0);
            if (iVar1 != 0) {
              iVar1 = EVP_default_properties_is_fips_enabled(uVar2);
              iVar1 = test_false("test/property_test.c",0x26b,
                                 "EVP_default_properties_is_fips_enabled(ctx)",iVar1 != 0);
              if (iVar1 != 0) {
                iVar1 = EVP_set_default_properties(uVar2,"fips!=no");
                iVar1 = test_true("test/property_test.c",0x26c,
                                  "EVP_set_default_properties(ctx, \"fips!=no\")",iVar1 != 0);
                if (iVar1 != 0) {
                  iVar1 = EVP_default_properties_is_fips_enabled(uVar2);
                  iVar1 = test_true("test/property_test.c",0x26d,
                                    "EVP_default_properties_is_fips_enabled(ctx)",iVar1 != 0);
                  if (iVar1 != 0) {
                    iVar1 = EVP_set_default_properties(uVar2,"fips=no");
                    iVar1 = test_true("test/property_test.c",0x26e,
                                      "EVP_set_default_properties(ctx, \"fips=no\")",iVar1 != 0);
                    if (iVar1 != 0) {
                      iVar1 = EVP_default_properties_is_fips_enabled(uVar2);
                      iVar1 = test_false("test/property_test.c",0x26f,
                                         "EVP_default_properties_is_fips_enabled(ctx)",iVar1 != 0);
                      if (iVar1 != 0) {
                        iVar1 = EVP_set_default_properties(uVar2,"fips=no,default=yes");
                        iVar1 = test_true("test/property_test.c",0x270,
                                          "EVP_set_default_properties(ctx, \"fips=no,default=yes\")"
                                          ,iVar1 != 0);
                        if (iVar1 != 0) {
                          iVar1 = EVP_default_properties_enable_fips(uVar2,1);
                          iVar1 = test_true("test/property_test.c",0x271,
                                            "EVP_default_properties_enable_fips(ctx, 1)",iVar1 != 0)
                          ;
                          if (iVar1 != 0) {
                            iVar1 = EVP_default_properties_is_fips_enabled(uVar2);
                            iVar1 = test_true("test/property_test.c",0x272,
                                              "EVP_default_properties_is_fips_enabled(ctx)",
                                              iVar1 != 0);
                            if (iVar1 != 0) {
                              iVar1 = EVP_default_properties_enable_fips(uVar2,0);
                              iVar1 = test_true("test/property_test.c",0x273,
                                                "EVP_default_properties_enable_fips(ctx, 0)",
                                                iVar1 != 0);
                              if (iVar1 != 0) {
                                iVar1 = EVP_default_properties_is_fips_enabled(uVar2);
                                iVar1 = test_false("test/property_test.c",0x274,
                                                   "EVP_default_properties_is_fips_enabled(ctx)",
                                                   iVar1 != 0);
                                bVar3 = iVar1 != 0;
                                goto LAB_0010022e;
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
  bVar3 = false;
LAB_0010022e:
  OSSL_LIB_CTX_free(uVar2);
  return bVar3;
}



undefined4
add_property_names(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  ulong uVar4;
  undefined4 uVar5;
  long in_FS_OFFSET;
  uint local_78;
  long *local_70;
  long local_58 [4];
  undefined8 local_38;
  undefined8 local_30;
  
  uVar5 = 1;
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = (long *)&stack0x00000008;
  local_78 = 8;
  local_58[1] = param_2;
  local_58[2] = param_3;
  local_58[3] = param_4;
  local_38 = param_5;
  local_30 = param_6;
  do {
    while( true ) {
      uVar2 = ossl_property_name(0,param_1,1);
      iVar3 = test_int_ne("test/property_test.c",0x23,"ossl_property_name(NULL, n, 1)",&_LC2,uVar2,0
                         );
      if (iVar3 == 0) {
        uVar5 = 0;
      }
      uVar4 = (ulong)local_78;
      if (local_78 < 0x30) break;
      param_1 = *local_70;
      local_70 = local_70 + 1;
      if (param_1 == 0) goto LAB_001005c6;
    }
    local_78 = local_78 + 8;
    param_1 = *(long *)((long)local_58 + uVar4);
  } while (param_1 != 0);
LAB_001005c6:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool test_query_cache_stochastic(void)

{
  char *buf;
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 uVar4;
  undefined1 *puVar5;
  ulong uVar6;
  undefined1 *puVar7;
  uint uVar8;
  long in_FS_OFFSET;
  bool bVar9;
  undefined1 local_9030 [36864];
  
  puVar7 = &stack0xffffffffffffffd0;
  do {
    puVar5 = puVar7;
    *(undefined8 *)(puVar5 + -0x1000) = *(undefined8 *)(puVar5 + -0x1000);
    puVar7 = puVar5 + -0x1000;
  } while (puVar5 + -0x1000 != local_9030);
  *(undefined8 *)(puVar5 + 0x7ff0) = *(undefined8 *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)(puVar5 + -0x1ca4) = 1;
  *(undefined8 *)(puVar5 + -0x1cc0) = 0x100647;
  uVar3 = ossl_method_store_new(0);
  *(undefined8 *)(puVar5 + -0x1cc0) = 0x100661;
  iVar1 = test_ptr("test/property_test.c",0x23d,"store = ossl_method_store_new(NULL)",uVar3);
  if (iVar1 != 0) {
    *(undefined8 *)(puVar5 + -0x1cc0) = 0x1006b0;
    iVar1 = add_property_names(&_LC22,0);
    if (iVar1 != 0) {
      uVar6 = 1;
      puVar7 = puVar5 + -0x1ca4;
      *(undefined1 **)(puVar5 + -0x1cb0) = puVar5 + -0x1c98;
      buf = puVar5 + 0x7fb8;
      do {
        *(int *)(*(long *)(puVar5 + -0x1cb0) + uVar6 * 4) = (int)uVar6 * 2;
        *(undefined8 *)(puVar5 + -0x1cc0) = 0x1007c1;
        BIO_snprintf(buf,0x32,"n=%d\n",uVar6 & 0xffffffff);
        *(code **)(puVar5 + -0x1cc8) = down_ref;
        *(undefined8 *)(puVar5 + -0x1cd0) = 0x1007ec;
        iVar1 = ossl_method_store_add(uVar3,puVar7,uVar6 & 0xffffffff,buf,&_LC24,0x100000);
        *(undefined8 *)(puVar5 + -0x1cd0) = 0x100807;
        iVar1 = test_true("test/property_test.c",0x244,
                          "ossl_method_store_add(store, &prov, i, buf, \"abc\", &up_ref, &down_ref)"
                          ,iVar1 != 0);
        uVar4 = extraout_RDX_00;
        if (iVar1 == 0) {
LAB_00100813:
          *(undefined8 *)(puVar5 + -0x1cc0) = 0x100824;
          test_note("iteration %d",uVar6 & 0xffffffff,uVar4);
          goto LAB_00100665;
        }
        *(code **)(puVar5 + -0x1cc8) = down_ref;
        *(undefined8 *)(puVar5 + -0x1cd0) = 0x10070d;
        iVar1 = ossl_method_store_cache_set
                          (uVar3,puVar7,uVar6 & 0xffffffff,buf,
                           *(long *)(puVar5 + -0x1cb0) + uVar6 * 4,0x100000);
        *(undefined8 *)(puVar5 + -0x1cd0) = 0x100728;
        iVar1 = test_true("test/property_test.c",0x246,
                          "ossl_method_store_cache_set(store, &prov, i, buf, v + i, &up_ref, &down_ref)"
                          ,iVar1 != 0);
        uVar4 = extraout_RDX;
        if (iVar1 == 0) goto LAB_00100813;
        *(code **)(puVar5 + -0x1cc8) = down_ref;
        *(undefined8 *)(puVar5 + -0x1cd0) = 0x100761;
        iVar1 = ossl_method_store_cache_set
                          (uVar3,puVar7,uVar6 & 0xffffffff,"n=1234",&_LC28,0x100000);
        *(undefined8 *)(puVar5 + -0x1cd0) = 0x10077c;
        iVar1 = test_true("test/property_test.c",0x249,
                          "ossl_method_store_cache_set(store, &prov, i, \"n=1234\", \"miss\", &up_ref, &down_ref)"
                          ,iVar1 != 0);
        uVar4 = *(undefined8 *)(puVar5 + -0x1cc8);
        if (iVar1 == 0) goto LAB_00100813;
        uVar6 = uVar6 + 1;
      } while (uVar6 != 0x2711);
      puVar7 = puVar5 + -0x1c94;
      iVar1 = 0;
      uVar6 = 1;
      *(undefined1 **)(puVar5 + -0x1cb0) = puVar5 + -0x1ca0;
      do {
        *(undefined8 *)(puVar5 + -0x1cc0) = 0x100861;
        BIO_snprintf(buf,0x32,"n=%d\n",uVar6);
        *(undefined8 *)(puVar5 + -0x1cc0) = 0x100876;
        iVar2 = ossl_method_store_cache_get(uVar3,0,uVar6,buf,*(undefined8 *)(puVar5 + -0x1cb0));
        if ((iVar2 == 0) || (*(undefined1 **)(puVar5 + -0x1ca0) != puVar7)) {
          iVar1 = iVar1 + 1;
        }
        uVar8 = (int)uVar6 + 1;
        uVar6 = (ulong)uVar8;
        puVar7 = puVar7 + 4;
      } while (uVar8 != 0x2711);
      *(undefined8 *)(puVar5 + -0x1cc0) = 0x1008bd;
      iVar2 = test_int_gt("test/property_test.c",599,"errors",&_LC31,iVar1,10);
      if (iVar2 != 0) {
        *(undefined8 *)(puVar5 + -0x1cc0) = 0x1008e7;
        iVar1 = test_int_lt("test/property_test.c",599,"errors","max - tail",iVar1,0x2706);
        bVar9 = iVar1 != 0;
        goto LAB_00100667;
      }
    }
  }
LAB_00100665:
  bVar9 = false;
LAB_00100667:
  *(undefined8 *)(puVar5 + -0x1cc0) = 0x10066f;
  ossl_method_store_free(uVar3);
  if (*(long *)(puVar5 + 0x7ff0) == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar9;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar5 + -0x1cc0) = &UNK_001008f7;
  __stack_chk_fail();
}



undefined8 test_property(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined **ppuVar7;
  long in_FS_OFFSET;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = ossl_method_store_new(0);
  iVar1 = test_ptr("test/property_test.c",0x1ce,"store = ossl_method_store_new(NULL)",uVar2);
  if ((iVar1 == 0) || (iVar1 = add_property_names(&_LC37,"colour",&_LC35,"furry",0), iVar1 == 0)) {
LAB_0010094e:
    uVar3 = 0;
  }
  else {
    ppuVar4 = &impls_6;
    lVar5 = 0;
    do {
      iVar1 = ossl_method_store_add
                        (uVar2,*(undefined8 *)*ppuVar4,*(undefined4 *)(ppuVar4 + 1),ppuVar4[2],
                         ppuVar4[3],0x100000);
      lVar5 = lVar5 + 1;
      iVar1 = test_true("test/property_test.c",0x1d3,
                        "ossl_method_store_add(store, *impls[i].prov, impls[i].nid, impls[i].prop, impls[i].impl, &up_ref, &down_ref)"
                        ,iVar1 != 0);
      if (iVar1 == 0) {
        test_note("iteration %zd",lVar5,down_ref,0x1009a6);
        goto LAB_0010094e;
      }
      ppuVar4 = ppuVar4 + 4;
    } while (lVar5 != 6);
    puVar6 = &DAT_00103c28;
    lVar5 = 0;
    do {
      local_48 = 0;
      iVar1 = ossl_method_store_fetch(uVar2,*puVar6,*(undefined8 *)(puVar6 + 2),&local_48,&local_50)
      ;
      lVar5 = lVar5 + 1;
      iVar1 = test_true("test/property_test.c",0x1e2,
                        "ossl_method_store_fetch(store, queries[i].nid, queries[i].prop, &nullprov, &result)"
                        ,iVar1 != 0);
      if ((iVar1 == 0) ||
         (iVar1 = test_str_eq("test/property_test.c",0x1e5,"(char *)result","queries[i].expected",
                              local_50,*(undefined8 *)(puVar6 + 4)), iVar1 == 0)) goto LAB_00100c24;
      puVar6 = puVar6 + 8;
      ossl_property_free(0);
    } while (lVar5 != 0xb);
    ppuVar7 = &queries_5;
    lVar5 = 0;
    ppuVar4 = &queries_5;
    do {
      local_50 = 0;
      if ((undefined **)*ppuVar4 != &fake_prov1_4) {
        iVar1 = ossl_method_store_fetch
                          (uVar2,*(undefined4 *)(ppuVar4 + 1),ppuVar4[2],&fake_prov1_4,&local_50);
        iVar1 = test_false("test/property_test.c",0x1ff,
                           "ossl_method_store_fetch(store, queries[i].nid, queries[i].prop, &fake_prov1, &result)"
                           ,iVar1 != 0);
        if ((iVar1 != 0) &&
           (iVar1 = test_ptr_eq("test/property_test.c",0x203,"fake_prov1","&fake_provider1",
                                fake_prov1_4,&fake_provider1_3), iVar1 != 0)) {
          iVar1 = test_ptr_null("test/property_test.c",0x204,"result",local_50);
          goto joined_r0x00100b4e;
        }
LAB_00100c20:
        lVar5 = lVar5 + 1;
        goto LAB_00100c24;
      }
      iVar1 = ossl_method_store_fetch
                        (uVar2,*(undefined4 *)(ppuVar4 + 1),ppuVar4[2],&fake_prov1_4,&local_50);
      iVar1 = test_true("test/property_test.c",500,
                        "ossl_method_store_fetch(store, queries[i].nid, queries[i].prop, &fake_prov1, &result)"
                        ,iVar1 != 0);
      if ((iVar1 == 0) ||
         (iVar1 = test_ptr_eq("test/property_test.c",0x1f8,"fake_prov1","&fake_provider1",
                              fake_prov1_4,&fake_provider1_3), iVar1 == 0)) goto LAB_00100c20;
      iVar1 = test_str_eq("test/property_test.c",0x1f9,"(char *)result","queries[i].expected",
                          local_50,ppuVar4[3]);
joined_r0x00100b4e:
      if (iVar1 == 0) goto LAB_00100c20;
      lVar5 = lVar5 + 1;
      ppuVar4 = ppuVar4 + 4;
      ossl_property_free(0);
    } while (lVar5 != 0xb);
    lVar5 = 0;
    do {
      local_50 = 0;
      if ((undefined **)*ppuVar7 != &fake_prov2_2) {
        iVar1 = ossl_method_store_fetch
                          (uVar2,*(undefined4 *)(ppuVar7 + 1),ppuVar7[2],&fake_prov2_2,&local_50);
        iVar1 = test_false("test/property_test.c",0x21f,
                           "ossl_method_store_fetch(store, queries[i].nid, queries[i].prop, &fake_prov2, &result)"
                           ,iVar1 != 0);
        if (((iVar1 != 0) &&
            (iVar1 = test_ptr_eq("test/property_test.c",0x223,"fake_prov2","&fake_provider2",
                                 fake_prov2_2,&fake_provider2_1), iVar1 != 0)) &&
           (iVar1 = test_ptr_null("test/property_test.c",0x224,"result",local_50), iVar1 != 0))
        goto LAB_00100cea;
LAB_00100da8:
        lVar5 = lVar5 + 1;
LAB_00100c24:
        test_note("iteration %zd",lVar5);
        ossl_property_free(0);
        goto LAB_0010094e;
      }
      iVar1 = ossl_method_store_fetch
                        (uVar2,*(undefined4 *)(ppuVar7 + 1),ppuVar7[2],&fake_prov2_2,&local_50);
      iVar1 = test_true("test/property_test.c",0x214,
                        "ossl_method_store_fetch(store, queries[i].nid, queries[i].prop, &fake_prov2, &result)"
                        ,iVar1 != 0);
      if (((iVar1 == 0) ||
          (iVar1 = test_ptr_eq("test/property_test.c",0x218,"fake_prov2","&fake_provider2",
                               fake_prov2_2,&fake_provider2_1), iVar1 == 0)) ||
         (iVar1 = test_str_eq("test/property_test.c",0x219,"(char *)result","queries[i].expected",
                              local_50,ppuVar7[3]), iVar1 == 0)) goto LAB_00100da8;
LAB_00100cea:
      lVar5 = lVar5 + 1;
      ppuVar7 = ppuVar7 + 4;
      ossl_property_free(0);
    } while (lVar5 != 0xb);
    uVar3 = 1;
  }
  ossl_method_store_free(uVar2);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool test_register_deregister(void)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined4 *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  long lVar8;
  long in_FS_OFFSET;
  bool bVar9;
  undefined4 local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_44 = 1;
  uVar3 = ossl_method_store_new(0);
  iVar2 = test_ptr("test/property_test.c",0x184,"store = ossl_method_store_new(NULL)",uVar3);
  if (iVar2 != 0) {
    iVar2 = add_property_names("position",0);
    if (iVar2 != 0) {
      puVar5 = &impls_0;
      lVar8 = 0;
      do {
        iVar2 = ossl_method_store_add
                          (uVar3,&local_44,*puVar5,*(undefined8 *)(puVar5 + 2),
                           *(undefined8 *)(puVar5 + 4),0x100000);
        lVar8 = lVar8 + 1;
        iVar2 = test_true("test/property_test.c",0x189,
                          "ossl_method_store_add(store, &prov, impls[i].nid, impls[i].prop, impls[i].impl, &up_ref, &down_ref)"
                          ,iVar2 != 0);
        if (iVar2 == 0) {
          test_note("iteration %zd",lVar8,down_ref,0x100e68);
          goto LAB_00100e26;
        }
        puVar5 = puVar5 + 6;
      } while (lVar8 != 4);
      puVar6 = &_LC50;
      uVar7 = 6;
      lVar8 = 0;
      while( true ) {
        lVar1 = lVar8 + 1;
        iVar2 = ossl_method_store_remove(uVar3,uVar7,puVar6);
        iVar2 = test_true("test/property_test.c",0x196,"ossl_method_store_remove(store, nid, impl)",
                          iVar2 != 0);
        if (iVar2 == 0) break;
        iVar2 = ossl_method_store_remove(uVar3,uVar7,puVar6);
        iVar2 = test_false("test/property_test.c",0x197,"ossl_method_store_remove(store, nid, impl)"
                           ,iVar2 != 0);
        if (iVar2 == 0) break;
        if (lVar1 == 4) {
          iVar2 = ossl_method_store_remove(uVar3,6,&_LC55);
          iVar2 = test_false("test/property_test.c",0x19d,
                             "ossl_method_store_remove(store, impls[0].nid, impls[0].impl)",
                             iVar2 != 0);
          bVar9 = iVar2 != 0;
          goto LAB_00100e28;
        }
        uVar4 = (ulong)((int)lVar1 * 3 + 1U & 3);
        uVar7 = (&impls_0)[uVar4 * 6];
        puVar6 = (&PTR__LC55_00103bd0)[uVar4 * 3];
        lVar8 = lVar1;
      }
      test_note("iteration %zd, position %zd",lVar1,((int)lVar8 * 3 + 1U & 3) + 1);
    }
  }
LAB_00100e26:
  bVar9 = false;
LAB_00100e28:
  ossl_method_store_free(uVar3);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool test_property_parse_error(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  
  uVar2 = ossl_method_store_new(0);
  iVar1 = test_ptr("test/property_test.c",0xe0,"store = ossl_method_store_new(NULL)",uVar2);
  if (iVar1 != 0) {
    iVar1 = add_property_names(&_LC55,&_LC22,0);
    if (iVar1 != 0) {
      if (*(int *)(parse_error_tests + (long)param_1 * 0x10) == 0) {
        uVar3 = ossl_parse_property(0);
        pcVar4 = "p = ossl_parse_property(NULL, ps)";
        uVar5 = 0xe7;
      }
      else {
        uVar3 = ossl_parse_query(0,*(undefined8 *)(parse_error_tests + (long)param_1 * 0x10 + 8),1);
        pcVar4 = "p = ossl_parse_query(NULL, ps, 1)";
        uVar5 = 0xe5;
      }
      iVar1 = test_ptr_null("test/property_test.c",uVar5,pcVar4,uVar3);
      bVar6 = iVar1 != 0;
      goto LAB_0010104b;
    }
  }
  bVar6 = false;
  uVar3 = 0;
LAB_0010104b:
  ossl_property_free(uVar3);
  ossl_method_store_free(uVar2);
  return bVar6;
}



uint test_definition_compares(int param_1)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar6 = ossl_method_store_new(0);
  iVar3 = test_ptr("test/property_test.c",0x167,"store = ossl_method_store_new(NULL)",uVar6);
  if (iVar3 != 0) {
    iVar3 = add_property_names("alpha","omega",0);
    if (iVar3 != 0) {
      uVar8 = 0;
      lVar1 = (long)param_1 * 0x18;
      uVar7 = ossl_parse_property(0,*(undefined8 *)(definition_tests + lVar1));
      uVar4 = test_ptr("test/property_test.c",0x169,
                       "d = ossl_parse_property(NULL, definition_tests[n].defn)",uVar7);
      if (uVar4 != 0) {
        uVar8 = ossl_parse_query(0,*(undefined8 *)(definition_tests + lVar1 + 8),0);
        uVar4 = test_ptr("test/property_test.c",0x16a,
                         "q = ossl_parse_query(NULL, definition_tests[n].query, 0)",uVar8);
        if (uVar4 != 0) {
          uVar2 = *(undefined4 *)(definition_tests + lVar1 + 0x10);
          uVar5 = ossl_property_match_count(uVar8,uVar7);
          iVar3 = test_int_eq("test/property_test.c",0x16b,"ossl_property_match_count(q, d)",
                              "definition_tests[n].e",uVar5,uVar2);
          uVar4 = (uint)(iVar3 != 0);
        }
      }
      goto LAB_00101138;
    }
  }
  uVar4 = 0;
  uVar8 = 0;
  uVar7 = 0;
LAB_00101138:
  ossl_property_free(uVar7);
  ossl_property_free(uVar8);
  ossl_method_store_free(uVar6);
  return uVar4;
}



uint test_property_parse(int param_1)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar6 = ossl_method_store_new(0);
  iVar3 = test_ptr("test/property_test.c",0x9c,"store = ossl_method_store_new(NULL)",uVar6);
  if (iVar3 != 0) {
    iVar3 = add_property_names(&_LC35,"groan",&_LC67,"today","tomorrow",&_LC22);
    if (iVar3 != 0) {
      uVar8 = 0;
      lVar1 = (long)param_1 * 0x18;
      uVar7 = ossl_parse_property(0,*(undefined8 *)(parser_tests + lVar1),(long)param_1 * 3,0x10127c
                                 );
      uVar4 = test_ptr("test/property_test.c",0x9f,
                       "p = ossl_parse_property(NULL, parser_tests[n].defn)",uVar7);
      if (uVar4 != 0) {
        uVar8 = ossl_parse_query(0,*(undefined8 *)(parser_tests + lVar1 + 8),0);
        uVar4 = test_ptr("test/property_test.c",0xa0,
                         "q = ossl_parse_query(NULL, parser_tests[n].query, 0)",uVar8);
        if (uVar4 != 0) {
          uVar2 = *(undefined4 *)(parser_tests + lVar1 + 0x10);
          uVar5 = ossl_property_match_count(uVar8,uVar7);
          iVar3 = test_int_eq("test/property_test.c",0xa1,"ossl_property_match_count(q, p)",
                              "parser_tests[n].e",uVar5,uVar2);
          uVar4 = (uint)(iVar3 != 0);
        }
      }
      goto LAB_00101288;
    }
  }
  uVar4 = 0;
  uVar8 = 0;
  uVar7 = 0;
LAB_00101288:
  ossl_property_free(uVar7);
  ossl_property_free(uVar8);
  ossl_method_store_free(uVar6);
  return uVar4;
}



uint test_property_query_value_create(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_40;
  
  uVar4 = ossl_method_store_new(0);
  iVar1 = test_ptr("test/property_test.c",0xb0,"store = ossl_method_store_new(NULL)",uVar4);
  if (iVar1 != 0) {
    iVar1 = add_property_names(&_LC73,0);
    if (iVar1 != 0) {
      uVar6 = 0;
      uVar5 = ossl_parse_query(0,"wood=oak",0);
      uVar2 = test_ptr("test/property_test.c",0xb2,"p = ossl_parse_query(NULL, \"wood=oak\", 0)",
                       uVar5);
      local_40 = 0;
      if (uVar2 != 0) {
        local_40 = 0;
        uVar6 = ossl_parse_query(0,"wood=oak",1);
        uVar2 = test_ptr("test/property_test.c",0xb3,"q = ossl_parse_query(NULL, \"wood=oak\", 1)",
                         uVar6);
        if (uVar2 != 0) {
          local_40 = ossl_parse_query(0,"wood=oak",0);
          iVar1 = test_ptr("test/property_test.c",0xb4,"o = ossl_parse_query(NULL, \"wood=oak\", 0)"
                           ,local_40);
          if (iVar1 != 0) {
            uVar3 = ossl_property_match_count(uVar6,uVar5);
            iVar1 = test_int_eq("test/property_test.c",0xb5,"ossl_property_match_count(q, p)",&_LC78
                                ,uVar3,0xffffffff);
            if (iVar1 != 0) {
              uVar3 = ossl_property_match_count(uVar6,local_40);
              iVar1 = test_int_eq("test/property_test.c",0xb6,"ossl_property_match_count(q, o)",
                                  &_LC79,uVar3,1);
              uVar2 = (uint)(iVar1 != 0);
              goto LAB_001013f9;
            }
          }
          uVar2 = 0;
        }
      }
      goto LAB_001013f9;
    }
  }
  uVar2 = 0;
  local_40 = 0;
  uVar6 = 0;
  uVar5 = 0;
LAB_001013f9:
  ossl_property_free(local_40);
  ossl_property_free(uVar5);
  ossl_property_free(uVar6);
  ossl_method_store_free(uVar4);
  return uVar2;
}



bool test_property_defn_cache(void)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  bool bVar5;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  uVar3 = ossl_method_store_new(0);
  iVar2 = test_ptr("test/property_test.c",0x12a,"store = ossl_method_store_new(NULL)",uVar3);
  if ((iVar2 == 0) || (iVar2 = add_property_names(&_LC82,&_LC81,0), iVar2 == 0)) {
LAB_00101607:
    ossl_property_free(local_48);
    local_48 = 0;
    ossl_property_free(local_40);
    local_40 = 0;
LAB_0010162d:
    ossl_property_free(local_40);
    local_40 = 0;
LAB_0010163b:
    ossl_property_free(local_38);
    local_38 = 0;
  }
  else {
    local_48 = ossl_parse_property(0,&_LC82);
    iVar2 = test_ptr("test/property_test.c",300,"red = ossl_parse_property(NULL, \"red\")",local_48)
    ;
    if (iVar2 == 0) goto LAB_00101607;
    local_40 = ossl_parse_property(0,&_LC81);
    iVar2 = test_ptr("test/property_test.c",0x12d,"blue = ossl_parse_property(NULL, \"blue\")",
                     local_40);
    if ((iVar2 == 0) ||
       (iVar2 = test_ptr_ne("test/property_test.c",0x12e,&_LC82,&_LC81,local_48,local_40),
       iVar2 == 0)) goto LAB_00101607;
    iVar2 = ossl_prop_defn_set(0,&_LC82,&local_48);
    iVar2 = test_true("test/property_test.c",0x12f,"ossl_prop_defn_set(NULL, \"red\", &red)",
                      iVar2 != 0);
    if (iVar2 == 0) goto LAB_00101607;
    iVar2 = ossl_prop_defn_set(0,&_LC81,&local_40);
    iVar2 = test_true("test/property_test.c",0x138,"ossl_prop_defn_set(NULL, \"blue\", &blue)",
                      iVar2 != 0);
    uVar1 = local_48;
    if (iVar2 == 0) goto LAB_0010162d;
    uVar4 = ossl_prop_defn_get(0,&_LC82);
    iVar2 = test_ptr_eq("test/property_test.c",0x13e,"ossl_prop_defn_get(NULL, \"red\")",&_LC82,
                        uVar4,uVar1);
    uVar1 = local_40;
    if (iVar2 == 0) goto LAB_0010163b;
    uVar4 = ossl_prop_defn_get(0,&_LC81);
    iVar2 = test_ptr_eq("test/property_test.c",0x13f,"ossl_prop_defn_get(NULL, \"blue\")",&_LC81,
                        uVar4,uVar1);
    if (iVar2 == 0) goto LAB_0010163b;
    local_38 = ossl_parse_property(0,&_LC81);
    iVar2 = test_ptr("test/property_test.c",0x140,"blue2 = ossl_parse_property(NULL, \"blue\")",
                     local_38);
    if ((iVar2 == 0) ||
       (iVar2 = test_ptr_ne("test/property_test.c",0x141,"blue2",&_LC81,local_38,local_40),
       iVar2 == 0)) goto LAB_0010163b;
    iVar2 = ossl_prop_defn_set(0,&_LC81,&local_38);
    iVar2 = test_true("test/property_test.c",0x142,"ossl_prop_defn_set(NULL, \"blue\", &blue2)",
                      iVar2 != 0);
    if (iVar2 == 0) goto LAB_0010163b;
    iVar2 = test_ptr_eq("test/property_test.c",0x148,"blue2",&_LC81,local_38,local_40);
    uVar1 = local_40;
    if (iVar2 != 0) {
      uVar4 = ossl_prop_defn_get(0,&_LC81);
      iVar2 = test_ptr_eq("test/property_test.c",0x149,"ossl_prop_defn_get(NULL, \"blue\")",&_LC81,
                          uVar4,uVar1);
      bVar5 = iVar2 != 0;
      goto LAB_00101650;
    }
  }
  bVar5 = false;
LAB_00101650:
  ossl_method_store_free(uVar3);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar5;
}



uint test_property_merge(int param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar5 = ossl_method_store_new(0);
  iVar2 = test_ptr("test/property_test.c",0x112,"store = ossl_method_store_new(NULL)",uVar5);
  if (iVar2 != 0) {
    iVar2 = add_property_names("colour",&_LC96,"clouds",&_LC94,&_LC93,"night");
    if (iVar2 != 0) {
      lVar1 = (long)param_1 * 0x18;
      uVar6 = ossl_parse_property(0,*(undefined8 *)(merge_tests + lVar1 + 0x10),(long)param_1 * 3,
                                  0x10190c);
      iVar2 = test_ptr("test/property_test.c",0x115,
                       "prop = ossl_parse_property(NULL, merge_tests[n].prop)",uVar6);
      if (iVar2 == 0) {
        uVar9 = 0;
        uVar8 = 0;
        uVar7 = 0;
        uVar3 = 0;
      }
      else {
        uVar9 = 0;
        uVar8 = 0;
        uVar7 = ossl_parse_query(0,*(undefined8 *)(merge_tests + lVar1),0);
        uVar3 = test_ptr("test/property_test.c",0x116,
                         "q_global = ossl_parse_query(NULL, merge_tests[n].q_global, 0)",uVar7);
        if (uVar3 != 0) {
          uVar8 = ossl_parse_query(0,*(undefined8 *)(merge_tests + lVar1 + 8),0);
          uVar3 = test_ptr("test/property_test.c",0x118,
                           "q_local = ossl_parse_query(NULL, merge_tests[n].q_local, 0)",uVar8);
          if (uVar3 != 0) {
            uVar9 = ossl_property_merge(uVar8,uVar7);
            uVar3 = test_ptr("test/property_test.c",0x119,
                             "q_combined = ossl_property_merge(q_local, q_global)",uVar9);
            if (uVar3 != 0) {
              uVar4 = ossl_property_match_count(uVar9,uVar6);
              iVar2 = test_int_ge("test/property_test.c",0x11a,
                                  "ossl_property_match_count(q_combined, prop)",&_LC2,uVar4,0);
              uVar3 = (uint)(iVar2 != 0);
            }
          }
        }
      }
      goto LAB_0010191e;
    }
  }
  uVar3 = 0;
  uVar6 = 0;
  uVar9 = 0;
  uVar8 = 0;
  uVar7 = 0;
LAB_0010191e:
  ossl_property_free(uVar7);
  ossl_property_free(uVar8);
  ossl_property_free(uVar9);
  ossl_property_free(uVar6);
  ossl_method_store_free(uVar5);
  return uVar3;
}



uint test_property_string(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar8 = 0;
  uVar7 = OSSL_LIB_CTX_new();
  uVar1 = test_ptr("test/property_test.c",0x3e,"ctx = OSSL_LIB_CTX_new()",uVar7);
  if (uVar1 != 0) {
    uVar8 = ossl_method_store_new(uVar7);
    iVar2 = test_ptr("test/property_test.c",0x3f,"store = ossl_method_store_new(ctx)",uVar8);
    if (iVar2 != 0) {
      uVar3 = ossl_property_name(uVar7,"fnord",0);
      uVar1 = test_int_eq("test/property_test.c",0x40,"ossl_property_name(ctx, \"fnord\", 0)",&_LC2,
                          uVar3,0);
      if (uVar1 == 0) goto LAB_00101b32;
      uVar3 = ossl_property_name(uVar7,"fnord",1);
      iVar2 = test_int_ne("test/property_test.c",0x41,"ossl_property_name(ctx, \"fnord\", 1)",&_LC2,
                          uVar3,0);
      if (iVar2 != 0) {
        uVar3 = ossl_property_name(uVar7,&_LC106,1);
        iVar2 = test_int_ne("test/property_test.c",0x42,"ossl_property_name(ctx, \"name\", 1)",&_LC2
                            ,uVar3,0);
        if (iVar2 != 0) {
          uVar9 = ossl_property_name_str(uVar7,1);
          iVar2 = test_str_eq("test/property_test.c",0x44,"ossl_property_name_str(ctx, 1)",
                              "\"provider\"",uVar9,"provider");
          if (iVar2 != 0) {
            uVar9 = ossl_property_name_str(uVar7,2);
            iVar2 = test_str_eq("test/property_test.c",0x45,"ossl_property_name_str(ctx, 2)",
                                "\"version\"",uVar9,"version");
            if (iVar2 != 0) {
              uVar9 = ossl_property_name_str(uVar7,3);
              iVar2 = test_str_eq("test/property_test.c",0x46,"ossl_property_name_str(ctx, 3)",
                                  "\"fips\"",uVar9,&_LC114);
              if (iVar2 != 0) {
                uVar9 = ossl_property_name_str(uVar7,4);
                iVar2 = test_str_eq("test/property_test.c",0x47,"ossl_property_name_str(ctx, 4)",
                                    "\"output\"",uVar9,"output");
                if (iVar2 != 0) {
                  uVar9 = ossl_property_name_str(uVar7,5);
                  iVar2 = test_str_eq("test/property_test.c",0x48,"ossl_property_name_str(ctx, 5)",
                                      "\"input\"",uVar9,"input");
                  if (iVar2 != 0) {
                    uVar9 = ossl_property_name_str(uVar7,6);
                    iVar2 = test_str_eq("test/property_test.c",0x49,"ossl_property_name_str(ctx, 6)"
                                        ,"\"structure\"",uVar9,"structure");
                    if (iVar2 != 0) {
                      uVar9 = ossl_property_name_str(uVar7,7);
                      iVar2 = test_str_eq("test/property_test.c",0x4b,
                                          "ossl_property_name_str(ctx, 7)","\"fnord\"",uVar9,"fnord"
                                         );
                      if (iVar2 != 0) {
                        uVar9 = ossl_property_name_str(uVar7,8);
                        iVar2 = test_str_eq("test/property_test.c",0x4c,
                                            "ossl_property_name_str(ctx, 8)","\"name\"",uVar9,
                                            &_LC106);
                        if (iVar2 != 0) {
                          uVar9 = ossl_property_name_str(uVar7,0);
                          iVar2 = test_ptr_null("test/property_test.c",0x4e,
                                                "ossl_property_name_str(ctx, 0)",uVar9);
                          if (iVar2 != 0) {
                            uVar9 = ossl_property_name_str(uVar7,9);
                            iVar2 = test_ptr_null("test/property_test.c",0x4f,
                                                  "ossl_property_name_str(ctx, 9)",uVar9);
                            if (iVar2 != 0) {
                              uVar3 = ossl_property_value(uVar7,"fnord",0);
                              iVar2 = test_int_eq("test/property_test.c",0x51,
                                                  "ossl_property_value(ctx, \"fnord\", 0)",&_LC2,
                                                  uVar3,0);
                              if (iVar2 != 0) {
                                uVar3 = ossl_property_value(uVar7,&_LC133,0);
                                iVar2 = test_int_ne("test/property_test.c",0x52,
                                                    "i = ossl_property_value(ctx, \"no\", 0)",&_LC2,
                                                    uVar3,0);
                                if (iVar2 != 0) {
                                  uVar4 = ossl_property_value(uVar7,&_LC135,0);
                                  iVar2 = test_int_ne("test/property_test.c",0x53,
                                                      "j = ossl_property_value(ctx, \"yes\", 0)",
                                                      &_LC2,uVar4,0);
                                  if (iVar2 != 0) {
                                    iVar2 = test_int_ne("test/property_test.c",0x54,&_LC138,&_LC137,
                                                        uVar3,uVar4);
                                    if (iVar2 != 0) {
                                      uVar5 = ossl_property_value(uVar7,&_LC135,1);
                                      iVar2 = test_int_eq("test/property_test.c",0x55,
                                                          "ossl_property_value(ctx, \"yes\", 1)",
                                                          &_LC137,uVar5,uVar4);
                                      if (iVar2 != 0) {
                                        uVar4 = ossl_property_value(uVar7,&_LC133,1);
                                        iVar2 = test_int_eq("test/property_test.c",0x56,
                                                            "ossl_property_value(ctx, \"no\", 1)",
                                                            &_LC138,uVar4,uVar3);
                                        if (iVar2 != 0) {
                                          iVar2 = ossl_property_value(uVar7,"illuminati",1);
                                          iVar6 = test_int_ne("test/property_test.c",0x57,
                                                                                                                            
                                                  "i = ossl_property_value(ctx, \"illuminati\", 1)",
                                                  &_LC2,iVar2,0);
                                          if (iVar6 != 0) {
                                            uVar3 = ossl_property_value(uVar7,"fnord",1);
                                            iVar2 = test_int_eq("test/property_test.c",0x58,
                                                                                                                                
                                                  "j = ossl_property_value(ctx, \"fnord\", 1)",
                                                  "i + 1",uVar3,iVar2 + 1);
                                            if (iVar2 != 0) {
                                              uVar4 = ossl_property_value(uVar7,"fnord",1);
                                              iVar2 = test_int_eq("test/property_test.c",0x59,
                                                                                                                                    
                                                  "ossl_property_value(ctx, \"fnord\", 1)",&_LC137,
                                                  uVar4,uVar3);
                                              if (iVar2 != 0) {
                                                uVar9 = ossl_property_value_str(uVar7,1);
                                                iVar2 = test_str_eq("test/property_test.c",0x5b,
                                                                                                                                        
                                                  "ossl_property_value_str(ctx, 1)","\"yes\"",uVar9,
                                                  &_LC135);
                                                if (iVar2 != 0) {
                                                  uVar9 = ossl_property_value_str(uVar7,2);
                                                  iVar2 = test_str_eq("test/property_test.c",0x5c,
                                                                                                                                            
                                                  "ossl_property_value_str(ctx, 2)",&_LC148,uVar9,
                                                  &_LC133);
                                                  if (iVar2 != 0) {
                                                    uVar9 = ossl_property_value_str(uVar7,3);
                                                    iVar2 = test_str_eq("test/property_test.c",0x5e,
                                                                                                                                                
                                                  "ossl_property_value_str(ctx, 3)","\"illuminati\""
                                                  ,uVar9,"illuminati");
                                                  if (iVar2 != 0) {
                                                    uVar9 = ossl_property_value_str(uVar7,4);
                                                    iVar2 = test_str_eq("test/property_test.c",0x5f,
                                                                                                                                                
                                                  "ossl_property_value_str(ctx, 4)","\"fnord\"",
                                                  uVar9,"fnord");
                                                  if (iVar2 != 0) {
                                                    uVar9 = ossl_property_value_str(uVar7,0);
                                                    iVar2 = test_ptr_null("test/property_test.c",
                                                                          0x61,
                                                  "ossl_property_value_str(ctx, 0)",uVar9);
                                                  if (iVar2 != 0) {
                                                    uVar9 = ossl_property_value_str(uVar7,5);
                                                    iVar2 = test_ptr_null("test/property_test.c",
                                                                          0x62,
                                                  "ossl_property_value_str(ctx, 5)",uVar9);
                                                  if (iVar2 != 0) {
                                                    uVar3 = ossl_property_value(uVar7,&_LC67,0);
                                                    iVar2 = test_int_eq("test/property_test.c",100,
                                                                                                                                                
                                                  "ossl_property_value(ctx, \"cold\", 0)",&_LC2,
                                                  uVar3,0);
                                                  if (iVar2 != 0) {
                                                    uVar3 = ossl_property_value(uVar7,"fnord",0);
                                                    uVar4 = ossl_property_name(uVar7,"fnord",0);
                                                    iVar2 = test_int_ne("test/property_test.c",0x65,
                                                                                                                                                
                                                  "ossl_property_name(ctx, \"fnord\", 0)",
                                                  "ossl_property_value(ctx, \"fnord\", 0)",uVar4,
                                                  uVar3);
                                                  uVar1 = (uint)(iVar2 != 0);
                                                  goto LAB_00101b32;
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
                  }
                }
              }
            }
          }
        }
      }
    }
    uVar1 = 0;
  }
LAB_00101b32:
  ossl_method_store_free(uVar8);
  OSSL_LIB_CTX_free(uVar7);
  return uVar1;
}



undefined8 setup_tests(void)

{
  add_test("test_property_string",test_property_string);
  add_test("test_property_query_value_create",test_property_query_value_create);
  add_all_tests("test_property_parse",test_property_parse,0x22,1);
  add_all_tests("test_property_parse_error",test_property_parse_error,0x11,1);
  add_all_tests("test_property_merge",test_property_merge,0xe,1);
  add_test("test_property_defn_cache",test_property_defn_cache);
  add_all_tests("test_definition_compares",test_definition_compares,0xb,1);
  add_test("test_register_deregister",test_register_deregister);
  add_test("test_property",test_property);
  add_test("test_query_cache_stochastic",test_query_cache_stochastic);
  add_test("test_fips_mode",test_fips_mode);
  add_all_tests("test_property_list_to_string",test_property_list_to_string,0x14,1);
  return 1;
}


