
uint builder_merge_test(void)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  BIGNUM *a;
  BIGNUM *a_00;
  undefined8 *puVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  undefined5 *puVar7;
  undefined8 uVar8;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  BIGNUM *local_50;
  BIGNUM *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = OSSL_PARAM_BLD_new();
  uVar4 = OSSL_PARAM_BLD_new();
  local_50 = (BIGNUM *)0x0;
  local_48 = (BIGNUM *)0x0;
  iVar1 = test_ptr("test/param_build_test.c",0x1c7,&_LC0,uVar3);
  if (iVar1 != 0) {
    iVar1 = OSSL_PARAM_BLD_push_uint(uVar3,&_LC2,6);
    iVar1 = test_true("test/param_build_test.c",0x1c8,"OSSL_PARAM_BLD_push_uint(bld, \"i\", 6)",
                      iVar1 != 0);
    if (iVar1 != 0) {
      iVar1 = OSSL_PARAM_BLD_push_ulong(uVar3,&_LC4,0x2a);
      iVar1 = test_true("test/param_build_test.c",0x1c9,"OSSL_PARAM_BLD_push_ulong(bld, \"l\", 42)",
                        iVar1 != 0);
      if (iVar1 != 0) {
        iVar1 = OSSL_PARAM_BLD_push_uint32(uVar3,&_LC6,0x5fc);
        iVar1 = test_true("test/param_build_test.c",0x1ca,
                          "OSSL_PARAM_BLD_push_uint32(bld, \"i32\", 1532)",iVar1 != 0);
        if (iVar1 != 0) {
          iVar1 = OSSL_PARAM_BLD_push_uint64(uVar3,&_LC8,9999999);
          iVar1 = test_true("test/param_build_test.c",0x1cb,
                            "OSSL_PARAM_BLD_push_uint64(bld, \"i64\", 9999999)",iVar1 != 0);
          if (iVar1 != 0) {
            iVar1 = OSSL_PARAM_BLD_push_size_t(uVar3,&_LC10,0x10001);
            iVar1 = test_true("test/param_build_test.c",0x1cc,
                              "OSSL_PARAM_BLD_push_size_t(bld, \"st\", 65537)",iVar1 != 0);
            if (iVar1 != 0) {
              a = (BIGNUM *)BN_secure_new();
              iVar1 = test_ptr("test/param_build_test.c",0x1cd,"bn_priv = BN_secure_new()",a);
              if (iVar1 != 0) {
                iVar1 = BN_set_word(a,0x6c1);
                iVar1 = test_true("test/param_build_test.c",0x1ce,"BN_set_word(bn_priv, 1729)",
                                  iVar1 != 0);
                if (iVar1 != 0) {
                  iVar1 = OSSL_PARAM_BLD_push_BN(uVar3,"bignumber_priv",a);
                  iVar1 = test_true("test/param_build_test.c",0x1cf,
                                    "OSSL_PARAM_BLD_push_BN(bld, \"bignumber_priv\", bn_priv)",
                                    iVar1 != 0);
                  if (iVar1 != 0) {
                    local_90 = OSSL_PARAM_BLD_to_param(uVar3);
                    uVar2 = test_ptr("test/param_build_test.c",0x1d0,
                                     "params_blt = OSSL_PARAM_BLD_to_param(bld)",local_90);
                    if (uVar2 == 0) {
LAB_0010030d:
                      local_98 = 0;
                      a_00 = (BIGNUM *)0x0;
                      uVar6 = 0;
                    }
                    else {
                      iVar1 = test_ptr("test/param_build_test.c",0x1d3,&_LC17,uVar4);
                      if (iVar1 != 0) {
                        iVar1 = OSSL_PARAM_BLD_push_octet_string(uVar4,"oct_s",data1_1,0x1c);
                        uVar2 = test_true("test/param_build_test.c",0x1d4,
                                          "OSSL_PARAM_BLD_push_octet_string(bld2, \"oct_s\", data1, sizeof(data1))"
                                          ,iVar1 != 0);
                        if (uVar2 == 0) goto LAB_0010030d;
                        iVar1 = OSSL_PARAM_BLD_push_octet_ptr(uVar4,"oct_p",&data2_0,5);
                        iVar1 = test_true("test/param_build_test.c",0x1d6,
                                          "OSSL_PARAM_BLD_push_octet_ptr(bld2, \"oct_p\", data2, sizeof(data2))"
                                          ,iVar1 != 0);
                        if (iVar1 != 0) {
                          iVar1 = OSSL_PARAM_BLD_push_uint32(uVar4,&_LC6,99);
                          iVar1 = test_true("test/param_build_test.c",0x1d8,
                                            "OSSL_PARAM_BLD_push_uint32(bld2, \"i32\", 99)",
                                            iVar1 != 0);
                          if (iVar1 != 0) {
                            a_00 = BN_new();
                            iVar1 = test_ptr("test/param_build_test.c",0x1d9,"bn_pub = BN_new()",
                                             a_00);
                            if (iVar1 != 0) {
                              iVar1 = BN_set_word(a_00,0x42);
                              iVar1 = test_true("test/param_build_test.c",0x1da,
                                                "BN_set_word(bn_pub, 0x42)",iVar1 != 0);
                              if (iVar1 != 0) {
                                iVar1 = OSSL_PARAM_BLD_push_BN(uVar4,"bignumber_pub",a_00);
                                iVar1 = test_true("test/param_build_test.c",0x1db,
                                                  "OSSL_PARAM_BLD_push_BN(bld2, \"bignumber_pub\", bn_pub)"
                                                  ,iVar1 != 0);
                                if (iVar1 != 0) {
                                  local_98 = OSSL_PARAM_BLD_to_param(uVar4);
                                  uVar2 = test_ptr("test/param_build_test.c",0x1dc,
                                                   "params2_blt = OSSL_PARAM_BLD_to_param(bld2)",
                                                   local_98);
                                  uVar6 = 0;
                                  if (uVar2 != 0) {
                                    uVar6 = OSSL_PARAM_merge(local_90,local_98);
                                    iVar1 = test_ptr("test/param_build_test.c",0x1df,
                                                                                                          
                                                  "params = OSSL_PARAM_merge(params_blt, params2_blt)"
                                                  ,uVar6);
                                    if (iVar1 != 0) {
                                      puVar5 = (undefined8 *)OSSL_PARAM_locate(uVar6,&_LC2);
                                      iVar1 = test_ptr("test/param_build_test.c",0x1e2,
                                                       "p = OSSL_PARAM_locate(params, \"i\")",puVar5
                                                      );
                                      if (iVar1 != 0) {
                                        iVar1 = OSSL_PARAM_get_uint(puVar5,&local_70);
                                        uVar2 = test_true("test/param_build_test.c",0x1e3,
                                                          "OSSL_PARAM_get_uint(p, &i)",iVar1 != 0);
                                        if (uVar2 == 0) goto LAB_00100087;
                                        iVar1 = test_str_eq("test/param_build_test.c",0x1e4,"p->key"
                                                            ,&_LC31,*puVar5,&_LC2);
                                        if (iVar1 != 0) {
                                          iVar1 = test_uint_eq("test/param_build_test.c",0x1e5,
                                                               "p->data_type",
                                                               "OSSL_PARAM_UNSIGNED_INTEGER",
                                                               *(undefined4 *)(puVar5 + 1),2);
                                          if (iVar1 != 0) {
                                            iVar1 = test_size_t_eq("test/param_build_test.c",0x1e6,
                                                                   "p->data_size","sizeof(int)",
                                                                   puVar5[3],4);
                                            if (iVar1 != 0) {
                                              iVar1 = test_uint_eq("test/param_build_test.c",0x1e7,
                                                                   &_LC2,&_LC37,local_70,6);
                                              if (iVar1 != 0) {
                                                puVar5 = (undefined8 *)
                                                         OSSL_PARAM_locate(uVar6,&_LC6);
                                                iVar1 = test_ptr("test/param_build_test.c",0x1e9,
                                                                                                                                  
                                                  "p = OSSL_PARAM_locate(params, \"i32\")",puVar5);
                                                if (iVar1 != 0) {
                                                  iVar1 = OSSL_PARAM_get_uint32(puVar5,&local_6c);
                                                  iVar1 = test_true("test/param_build_test.c",0x1ea,
                                                                    "OSSL_PARAM_get_uint32(p, &i32)"
                                                                    ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = test_str_eq("test/param_build_test.c",
                                                                        0x1eb,"p->key","\"i32\"",
                                                                        *puVar5,&_LC6);
                                                    if (iVar1 != 0) {
                                                      iVar1 = test_uint_eq("test/param_build_test.c"
                                                                           ,0x1ec,"p->data_type",
                                                                                                                                                      
                                                  "OSSL_PARAM_UNSIGNED_INTEGER",
                                                  *(undefined4 *)(puVar5 + 1),2);
                                                  if (iVar1 != 0) {
                                                    iVar1 = test_size_t_eq("test/param_build_test.c"
                                                                           ,0x1ed,"p->data_size",
                                                                           "sizeof(int32_t)",
                                                                           puVar5[3],4);
                                                    if (iVar1 != 0) {
                                                      iVar1 = test_uint_eq("test/param_build_test.c"
                                                                           ,0x1ee,
                                                  "(unsigned int)i32",&_LC42,local_6c,99);
                                                  if (iVar1 != 0) {
                                                    puVar5 = (undefined8 *)
                                                             OSSL_PARAM_locate(uVar6,&_LC8);
                                                    iVar1 = test_ptr("test/param_build_test.c",0x1f0
                                                                     ,
                                                  "p = OSSL_PARAM_locate(params, \"i64\")",puVar5);
                                                  if (iVar1 != 0) {
                                                    iVar1 = test_str_eq("test/param_build_test.c",
                                                                        0x1f1,"p->key","\"i64\"",
                                                                        *puVar5,&_LC8);
                                                    if (iVar1 != 0) {
                                                      iVar1 = test_uint_eq("test/param_build_test.c"
                                                                           ,0x1f2,"p->data_type",
                                                                                                                                                      
                                                  "OSSL_PARAM_UNSIGNED_INTEGER",
                                                  *(undefined4 *)(puVar5 + 1),2);
                                                  if (iVar1 != 0) {
                                                    iVar1 = test_size_t_eq("test/param_build_test.c"
                                                                           ,499,"p->data_size",
                                                                           "sizeof(int64_t)",
                                                                           puVar5[3],8);
                                                    if (iVar1 != 0) {
                                                      iVar1 = OSSL_PARAM_get_uint64
                                                                        (puVar5,&local_60);
                                                      iVar1 = test_true("test/param_build_test.c",
                                                                        500,
                                                  "OSSL_PARAM_get_uint64(p, &i64)",iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = test_ulong_eq("test/param_build_test.c",
                                                                          0x1f5,"(unsigned long)i64"
                                                                          ,"9999999",local_60,
                                                                          9999999);
                                                    if (iVar1 != 0) {
                                                      puVar5 = (undefined8 *)
                                                               OSSL_PARAM_locate(uVar6,&_LC4);
                                                      iVar1 = test_ptr("test/param_build_test.c",
                                                                       0x1f7,
                                                  "p = OSSL_PARAM_locate(params, \"l\")",puVar5);
                                                  if (iVar1 != 0) {
                                                    iVar1 = test_str_eq("test/param_build_test.c",
                                                                        0x1f8,"p->key",&_LC51,
                                                                        *puVar5,&_LC4);
                                                    if (iVar1 != 0) {
                                                      iVar1 = test_uint_eq("test/param_build_test.c"
                                                                           ,0x1f9,"p->data_type",
                                                                                                                                                      
                                                  "OSSL_PARAM_UNSIGNED_INTEGER",
                                                  *(undefined4 *)(puVar5 + 1),2);
                                                  if (iVar1 != 0) {
                                                    iVar1 = test_size_t_eq("test/param_build_test.c"
                                                                           ,0x1fa,"p->data_size",
                                                                                                                                                      
                                                  "sizeof(unsigned long int)",puVar5[3],8);
                                                  if (iVar1 != 0) {
                                                    iVar1 = OSSL_PARAM_get_ulong(puVar5,&local_68);
                                                    iVar1 = test_true("test/param_build_test.c",
                                                                      0x1fb,
                                                  "OSSL_PARAM_get_ulong(p, &l)",iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = test_ulong_eq("test/param_build_test.c",
                                                                          0x1fc,&_LC4,&_LC54,
                                                                          local_68,0x2a);
                                                    if (iVar1 != 0) {
                                                      puVar5 = (undefined8 *)
                                                               OSSL_PARAM_locate(uVar6,&_LC10);
                                                      iVar1 = test_ptr("test/param_build_test.c",
                                                                       0x1fe,
                                                  "p = OSSL_PARAM_locate(params, \"st\")",puVar5);
                                                  if (iVar1 != 0) {
                                                    iVar1 = test_str_eq("test/param_build_test.c",
                                                                        0x1ff,"p->key",&_LC56,
                                                                        *puVar5,&_LC10);
                                                    if (iVar1 != 0) {
                                                      iVar1 = test_uint_eq("test/param_build_test.c"
                                                                           ,0x200,"p->data_type",
                                                                                                                                                      
                                                  "OSSL_PARAM_UNSIGNED_INTEGER",
                                                  *(undefined4 *)(puVar5 + 1),2);
                                                  if (iVar1 != 0) {
                                                    iVar1 = test_size_t_eq("test/param_build_test.c"
                                                                           ,0x201,"p->data_size",
                                                                           "sizeof(size_t)",
                                                                           puVar5[3],8);
                                                    if (iVar1 != 0) {
                                                      iVar1 = OSSL_PARAM_get_size_t
                                                                        (puVar5,&local_58);
                                                      iVar1 = test_true("test/param_build_test.c",
                                                                        0x202,
                                                  "OSSL_PARAM_get_size_t(p, &st)",iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = test_size_t_eq("test/param_build_test.c"
                                                                           ,0x203,&_LC10,"65537",
                                                                           local_58,0x10001);
                                                    if (iVar1 != 0) {
                                                      puVar5 = (undefined8 *)
                                                               OSSL_PARAM_locate(uVar6,"oct_s");
                                                      iVar1 = test_ptr("test/param_build_test.c",
                                                                       0x205,
                                                  "p = OSSL_PARAM_locate(params, \"oct_s\")",puVar5)
                                                  ;
                                                  if (iVar1 != 0) {
                                                    iVar1 = test_str_eq("test/param_build_test.c",
                                                                        0x206,"p->key","\"oct_s\"",
                                                                        *puVar5,"oct_s");
                                                    if (iVar1 != 0) {
                                                      iVar1 = test_uint_eq("test/param_build_test.c"
                                                                           ,0x207,"p->data_type",
                                                                           "OSSL_PARAM_OCTET_STRING"
                                                                           ,*(undefined4 *)
                                                                             (puVar5 + 1),5);
                                                      if (iVar1 != 0) {
                                                        iVar1 = test_mem_eq(
                                                  "test/param_build_test.c",0x208,"p->data","data1",
                                                  puVar5[2],puVar5[3],data1_1,0x1c);
                                                  if (iVar1 != 0) {
                                                    puVar5 = (undefined8 *)
                                                             OSSL_PARAM_locate(uVar6,"oct_p");
                                                    iVar1 = test_ptr("test/param_build_test.c",0x20a
                                                                     ,
                                                  "p = OSSL_PARAM_locate(params, \"oct_p\")",puVar5)
                                                  ;
                                                  if (iVar1 != 0) {
                                                    iVar1 = test_str_eq("test/param_build_test.c",
                                                                        0x20b,"p->key","\"oct_p\"",
                                                                        *puVar5,"oct_p");
                                                    if (iVar1 != 0) {
                                                      iVar1 = test_uint_eq("test/param_build_test.c"
                                                                           ,0x20c,"p->data_type",
                                                                           "OSSL_PARAM_OCTET_PTR",
                                                                           *(undefined4 *)
                                                                            (puVar5 + 1),7);
                                                      if (iVar1 != 0) {
                                                        uVar8 = 5;
                                                        puVar7 = &data2_0;
                                                        iVar1 = test_mem_eq(
                                                  "test/param_build_test.c",0x20d,
                                                  "*(void **)p->data","data2",
                                                  *(undefined8 *)puVar5[2],puVar5[3]);
                                                  if (iVar1 != 0) {
                                                    puVar5 = (undefined8 *)
                                                             OSSL_PARAM_locate(uVar6,"bignumber_pub"
                                                                               ,puVar7,uVar8);
                                                    iVar1 = test_ptr("test/param_build_test.c",0x20f
                                                                     ,
                                                  "p = OSSL_PARAM_locate(params, \"bignumber_pub\")"
                                                  ,puVar5);
                                                  if (iVar1 != 0) {
                                                    iVar1 = test_str_eq("test/param_build_test.c",
                                                                        0x210,"p->key",
                                                                        "\"bignumber_pub\"",*puVar5,
                                                                        "bignumber_pub");
                                                    if (iVar1 != 0) {
                                                      iVar1 = test_uint_eq("test/param_build_test.c"
                                                                           ,0x211,"p->data_type",
                                                                                                                                                      
                                                  "OSSL_PARAM_UNSIGNED_INTEGER",
                                                  *(undefined4 *)(puVar5 + 1),2);
                                                  if (iVar1 != 0) {
                                                    iVar1 = OSSL_PARAM_get_BN(puVar5,&local_48);
                                                    iVar1 = test_true("test/param_build_test.c",
                                                                      0x212,
                                                  "OSSL_PARAM_get_BN(p, &bn_pub_res)",iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = BN_cmp(local_48,a_00);
                                                    iVar1 = test_int_eq("test/param_build_test.c",
                                                                        0x213,
                                                  "BN_cmp(bn_pub_res, bn_pub)",&_LC73,iVar1,0);
                                                  if (iVar1 != 0) {
                                                    puVar5 = (undefined8 *)
                                                             OSSL_PARAM_locate(uVar6,
                                                  "bignumber_priv");
                                                  iVar1 = test_ptr("test/param_build_test.c",0x214,
                                                                                                                                      
                                                  "p = OSSL_PARAM_locate(params, \"bignumber_priv\")"
                                                  ,puVar5);
                                                  if (iVar1 != 0) {
                                                    iVar1 = test_str_eq("test/param_build_test.c",
                                                                        0x215,"p->key",
                                                                        "\"bignumber_priv\"",*puVar5
                                                                        ,"bignumber_priv");
                                                    if (iVar1 != 0) {
                                                      iVar1 = test_uint_eq("test/param_build_test.c"
                                                                           ,0x216,"p->data_type",
                                                                                                                                                      
                                                  "OSSL_PARAM_UNSIGNED_INTEGER",
                                                  *(undefined4 *)(puVar5 + 1),2);
                                                  if (iVar1 != 0) {
                                                    iVar1 = OSSL_PARAM_get_BN(puVar5,&local_50);
                                                    iVar1 = test_true("test/param_build_test.c",
                                                                      0x217,
                                                  "OSSL_PARAM_get_BN(p, &bn_priv_res)",iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = BN_cmp(local_50,a);
                                                    iVar1 = test_int_eq("test/param_build_test.c",
                                                                        0x218,
                                                  "BN_cmp(bn_priv_res, bn_priv)",&_LC73,iVar1,0);
                                                  uVar2 = (uint)(iVar1 != 0);
                                                  goto LAB_00100087;
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
                                    uVar2 = 0;
                                  }
                                  goto LAB_00100087;
                                }
                              }
                            }
                            uVar2 = 0;
                            uVar6 = 0;
                            local_98 = 0;
                            goto LAB_00100087;
                          }
                        }
                      }
                      uVar2 = 0;
                      a_00 = (BIGNUM *)0x0;
                      uVar6 = 0;
                      local_98 = 0;
                    }
                    goto LAB_00100087;
                  }
                }
              }
              local_98 = 0;
              uVar2 = 0;
              a_00 = (BIGNUM *)0x0;
              uVar6 = 0;
              local_90 = 0;
              goto LAB_00100087;
            }
          }
        }
      }
    }
  }
  uVar2 = 0;
  a_00 = (BIGNUM *)0x0;
  a = (BIGNUM *)0x0;
  uVar6 = 0;
  local_98 = 0;
  local_90 = 0;
LAB_00100087:
  OSSL_PARAM_free(uVar6);
  OSSL_PARAM_free(local_90);
  OSSL_PARAM_free(local_98);
  OSSL_PARAM_BLD_free(uVar3);
  OSSL_PARAM_BLD_free(uVar4);
  BN_free(a);
  BN_free(local_50);
  BN_free(a_00);
  BN_free(local_48);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint builder_limit_test(void)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  char *pcVar5;
  uint uVar6;
  long in_FS_OFFSET;
  char local_178 [312];
  long local_40;
  
  pcVar5 = local_178;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = OSSL_PARAM_BLD_new();
  iVar1 = test_ptr("test/param_build_test.c",0x194,&_LC0,uVar2);
  if (iVar1 == 0) {
LAB_00100f94:
    uVar6 = 0;
    plVar3 = (long *)0x0;
  }
  else {
    uVar6 = 0;
    do {
      pcVar5[2] = '\0';
      *pcVar5 = (char)(uVar6 / 0x1a) + '@';
      pcVar5[1] = (char)uVar6 + (char)(uVar6 / 0x1a) * -0x1a + '`';
      iVar1 = OSSL_PARAM_BLD_push_int(uVar2,pcVar5,(1 - (int)local_178) + (int)pcVar5);
      iVar1 = test_true("test/param_build_test.c",0x19b,
                        "OSSL_PARAM_BLD_push_int(bld, names[i], 3 * i + 1)",iVar1 != 0);
      if (iVar1 == 0) goto LAB_00100f94;
      uVar6 = uVar6 + 1;
      pcVar5 = pcVar5 + 3;
    } while (uVar6 != 100);
    plVar3 = (long *)OSSL_PARAM_BLD_to_param(uVar2);
    iVar1 = test_ptr("test/param_build_test.c",0x19e,"params = OSSL_PARAM_BLD_to_param(bld)",plVar3)
    ;
    if (iVar1 != 0) {
      if (*plVar3 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = 0;
        plVar4 = plVar3;
        do {
          plVar4 = plVar4 + 5;
          iVar1 = iVar1 + 1;
        } while (*plVar4 != 0);
      }
      iVar1 = test_int_eq("test/param_build_test.c",0x1a2,&_LC2,&_LC81,iVar1,100);
      if (iVar1 != 0) {
        OSSL_PARAM_free(plVar3);
        iVar1 = OSSL_PARAM_BLD_push_int(uVar2,&_LC82,2);
        iVar1 = test_true("test/param_build_test.c",0x1a9,"OSSL_PARAM_BLD_push_int(bld, \"g\", 2)",
                          iVar1 != 0);
        if (iVar1 != 0) {
          plVar3 = (long *)OSSL_PARAM_BLD_to_param(uVar2);
          uVar6 = test_ptr("test/param_build_test.c",0x1aa,"params = OSSL_PARAM_BLD_to_param(bld)",
                           plVar3);
          if (uVar6 != 0) {
            if (*plVar3 == 0) {
              iVar1 = 0;
            }
            else {
              iVar1 = 0;
              plVar4 = plVar3;
              do {
                plVar4 = plVar4 + 5;
                iVar1 = iVar1 + 1;
              } while (*plVar4 != 0);
            }
            iVar1 = test_int_eq("test/param_build_test.c",0x1ae,&_LC2,&_LC84,iVar1,1);
            uVar6 = (uint)(iVar1 != 0);
          }
          goto LAB_00100f9a;
        }
        goto LAB_00100f94;
      }
    }
    uVar6 = 0;
  }
LAB_00100f9a:
  OSSL_PARAM_free(plVar3);
  OSSL_PARAM_BLD_free(uVar2);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool template_private_test(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long in_FS_OFFSET;
  bool bVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  BIGNUM *local_a0;
  BIGNUM *local_98;
  BIGNUM *local_90;
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  BIGNUM *local_58;
  BIGNUM *local_50;
  BIGNUM *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = (BIGNUM *)0x0;
  local_50 = (BIGNUM *)0x0;
  local_48 = (BIGNUM *)0x0;
  puVar3 = (undefined8 *)CRYPTO_secure_malloc(0x30,"test/param_build_test.c",0xfb);
  iVar1 = test_ptr("test/param_build_test.c",0xfb,"data1 = OPENSSL_secure_malloc(data1_size)",puVar3
                  );
  if (iVar1 == 0) {
    local_a0 = (BIGNUM *)0x0;
    uVar5 = 0;
    puVar4 = (undefined8 *)0x0;
    local_98 = (BIGNUM *)0x0;
    local_90 = (BIGNUM *)0x0;
  }
  else {
    puVar4 = (undefined8 *)CRYPTO_secure_malloc(0x14,"test/param_build_test.c",0xfc);
    iVar1 = test_ptr("test/param_build_test.c",0xfc,"data2 = OPENSSL_secure_malloc(data2_size)",
                     puVar4);
    if (iVar1 == 0) {
      local_a0 = (BIGNUM *)0x0;
      uVar5 = 0;
      local_98 = (BIGNUM *)0x0;
      local_90 = (BIGNUM *)0x0;
    }
    else {
      uVar5 = OSSL_PARAM_BLD_new();
      iVar1 = test_ptr("test/param_build_test.c",0xfd,"bld = OSSL_PARAM_BLD_new()",uVar5);
      uVar12 = _UNK_001050d8;
      uVar9 = __LC88;
      if (iVar1 != 0) {
        *(undefined4 *)(puVar4 + 2) = 8;
        *puVar3 = uVar9;
        puVar3[1] = uVar12;
        uVar9 = _UNK_001050e8;
        puVar3[2] = __LC89;
        puVar3[3] = uVar9;
        uVar9 = _UNK_001050f8;
        puVar3[4] = __LC90;
        puVar3[5] = uVar9;
        uVar9 = _UNK_00105108;
        *puVar4 = __LC91;
        puVar4[1] = uVar9;
        iVar1 = OSSL_PARAM_BLD_push_uint(uVar5,&_LC2,6);
        iVar1 = test_true("test/param_build_test.c",0x105,"OSSL_PARAM_BLD_push_uint(bld, \"i\", 6)",
                          iVar1 != 0);
        if (iVar1 != 0) {
          iVar1 = OSSL_PARAM_BLD_push_ulong(uVar5,&_LC4,0x2a);
          iVar1 = test_true("test/param_build_test.c",0x106,
                            "OSSL_PARAM_BLD_push_ulong(bld, \"l\", 42)",iVar1 != 0);
          if (iVar1 != 0) {
            iVar1 = OSSL_PARAM_BLD_push_uint32(uVar5,&_LC6,0x5fc);
            iVar1 = test_true("test/param_build_test.c",0x107,
                              "OSSL_PARAM_BLD_push_uint32(bld, \"i32\", 1532)",iVar1 != 0);
            if (iVar1 != 0) {
              iVar1 = OSSL_PARAM_BLD_push_uint64(uVar5,&_LC8,9999999);
              iVar1 = test_true("test/param_build_test.c",0x108,
                                "OSSL_PARAM_BLD_push_uint64(bld, \"i64\", 9999999)",iVar1 != 0);
              if (iVar1 != 0) {
                iVar1 = OSSL_PARAM_BLD_push_size_t(uVar5,&_LC10,0x10001);
                iVar1 = test_true("test/param_build_test.c",0x109,
                                  "OSSL_PARAM_BLD_push_size_t(bld, \"st\", 65537)",iVar1 != 0);
                if (iVar1 != 0) {
                  local_90 = (BIGNUM *)BN_secure_new();
                  iVar1 = test_ptr("test/param_build_test.c",0x10a,"zbn = BN_secure_new()",local_90)
                  ;
                  if (iVar1 != 0) {
                    iVar1 = OSSL_PARAM_BLD_push_BN(uVar5,"zeronumber",local_90);
                    iVar1 = test_true("test/param_build_test.c",0x10b,
                                      "OSSL_PARAM_BLD_push_BN(bld, \"zeronumber\", zbn)",iVar1 != 0)
                    ;
                    if (iVar1 != 0) {
                      local_98 = (BIGNUM *)BN_secure_new();
                      iVar1 = test_ptr("test/param_build_test.c",0x10c,"pbn = BN_secure_new()",
                                       local_98);
                      if (iVar1 != 0) {
                        iVar1 = BN_set_word(local_98,0x6c1);
                        iVar1 = test_true("test/param_build_test.c",0x10d,"BN_set_word(pbn, 1729)",
                                          iVar1 != 0);
                        if (iVar1 != 0) {
                          iVar1 = OSSL_PARAM_BLD_push_BN(uVar5,"bignumber",local_98);
                          iVar1 = test_true("test/param_build_test.c",0x10e,
                                            "OSSL_PARAM_BLD_push_BN(bld, \"bignumber\", pbn)",
                                            iVar1 != 0);
                          if (iVar1 != 0) {
                            local_a0 = (BIGNUM *)BN_secure_new();
                            iVar1 = test_ptr("test/param_build_test.c",0x10f,"nbn = BN_secure_new()"
                                             ,local_a0);
                            if (iVar1 != 0) {
                              iVar1 = BN_set_word(local_a0,0x6c5);
                              iVar1 = test_true("test/param_build_test.c",0x110,
                                                "BN_set_word(nbn, 1733)",iVar1 != 0);
                              if (iVar1 != 0) {
                                BN_set_negative(local_a0,1);
                                iVar1 = test_true("test/param_build_test.c",0x111,
                                                  "(BN_set_negative(nbn, 1), 1)",1);
                                if (iVar1 != 0) {
                                  iVar1 = OSSL_PARAM_BLD_push_BN(uVar5,"negativebignumber",local_a0)
                                  ;
                                  iVar1 = test_true("test/param_build_test.c",0x112,
                                                                                                        
                                                  "OSSL_PARAM_BLD_push_BN(bld, \"negativebignumber\", nbn)"
                                                  ,iVar1 != 0);
                                  if (iVar1 != 0) {
                                    iVar1 = OSSL_PARAM_BLD_push_octet_string
                                                      (uVar5,"oct_s",puVar3,0x30);
                                    iVar1 = test_true("test/param_build_test.c",0x113,
                                                                                                            
                                                  "OSSL_PARAM_BLD_push_octet_string(bld, \"oct_s\", data1, data1_size)"
                                                  ,iVar1 != 0);
                                    if (iVar1 != 0) {
                                      iVar1 = OSSL_PARAM_BLD_push_octet_ptr
                                                        (uVar5,"oct_p",puVar4,0x14);
                                      iVar1 = test_true("test/param_build_test.c",0x115,
                                                                                                                
                                                  "OSSL_PARAM_BLD_push_octet_ptr(bld, \"oct_p\", data2, data2_size)"
                                                  ,iVar1 != 0);
                                      if (iVar1 != 0) {
                                        lVar6 = OSSL_PARAM_BLD_to_param(uVar5);
                                        iVar1 = test_ptr("test/param_build_test.c",0x117,
                                                         "params_blt = OSSL_PARAM_BLD_to_param(bld)"
                                                         ,lVar6);
                                        if (iVar1 == 0) {
                                          uVar9 = 0;
                                          lVar7 = 0;
                                          bVar10 = false;
                                        }
                                        else {
                                          if (param_1 == 2) {
                                            lVar7 = OSSL_PARAM_dup(lVar6);
                                            uVar9 = 0;
                                          }
                                          else if (param_1 < 3) {
                                            if (param_1 == 0) {
                                              uVar9 = 0;
                                              lVar7 = lVar6;
                                            }
                                            else {
                                              if (param_1 != 1) goto LAB_001025e0;
                                              lVar7 = OSSL_PARAM_merge(lVar6,params_empty);
                                              uVar9 = 0;
                                            }
                                          }
                                          else if (param_1 == 3) {
                                            uVar9 = OSSL_PARAM_merge(lVar6,params_empty);
                                            lVar7 = OSSL_PARAM_dup(uVar9);
                                          }
                                          else {
LAB_001025e0:
                                            uVar9 = OSSL_PARAM_dup(lVar6);
                                            lVar7 = OSSL_PARAM_merge(uVar9,params_empty);
                                          }
                                          puVar8 = (undefined8 *)OSSL_PARAM_locate(lVar7,&_LC2);
                                          iVar1 = test_ptr("test/param_build_test.c",0x12d,
                                                           "p = OSSL_PARAM_locate(params, \"i\")",
                                                           puVar8);
                                          if (iVar1 != 0) {
                                            iVar1 = CRYPTO_secure_allocated(puVar8[2]);
                                            iVar1 = test_false("test/param_build_test.c",0x12e,
                                                               "CRYPTO_secure_allocated(p->data)",
                                                               iVar1 != 0);
                                            if (iVar1 != 0) {
                                              iVar1 = OSSL_PARAM_get_uint(puVar8,&local_78);
                                              iVar1 = test_true("test/param_build_test.c",0x12f,
                                                                "OSSL_PARAM_get_uint(p, &i)",
                                                                iVar1 != 0);
                                              if (iVar1 != 0) {
                                                iVar1 = test_str_eq("test/param_build_test.c",0x130,
                                                                    "p->key",&_LC31,*puVar8,&_LC2);
                                                if (iVar1 != 0) {
                                                  iVar1 = test_uint_eq("test/param_build_test.c",
                                                                       0x131,"p->data_type",
                                                                       "OSSL_PARAM_UNSIGNED_INTEGER"
                                                                       ,*(undefined4 *)(puVar8 + 1),
                                                                       2);
                                                  if (iVar1 != 0) {
                                                    iVar1 = test_size_t_eq("test/param_build_test.c"
                                                                           ,0x132,"p->data_size",
                                                                           "sizeof(int)",puVar8[3],4
                                                                          );
                                                    if (iVar1 != 0) {
                                                      iVar1 = test_uint_eq("test/param_build_test.c"
                                                                           ,0x133,&_LC2,&_LC37,
                                                                           local_78,6);
                                                      if (iVar1 != 0) {
                                                        puVar8 = (undefined8 *)
                                                                 OSSL_PARAM_locate(lVar7,&_LC6);
                                                        iVar1 = test_ptr("test/param_build_test.c",
                                                                         0x135,
                                                  "p = OSSL_PARAM_locate(params, \"i32\")",puVar8);
                                                  if (iVar1 != 0) {
                                                    iVar1 = CRYPTO_secure_allocated(puVar8[2]);
                                                    iVar1 = test_false("test/param_build_test.c",
                                                                       0x136,
                                                  "CRYPTO_secure_allocated(p->data)",iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = OSSL_PARAM_get_uint32(puVar8,&local_74);
                                                    iVar1 = test_true("test/param_build_test.c",
                                                                      0x137,
                                                  "OSSL_PARAM_get_uint32(p, &i32)",iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = test_str_eq("test/param_build_test.c",
                                                                        0x138,"p->key","\"i32\"",
                                                                        *puVar8,&_LC6);
                                                    if (iVar1 != 0) {
                                                      iVar1 = test_uint_eq("test/param_build_test.c"
                                                                           ,0x139,"p->data_type",
                                                                                                                                                      
                                                  "OSSL_PARAM_UNSIGNED_INTEGER",
                                                  *(undefined4 *)(puVar8 + 1),2);
                                                  if (iVar1 != 0) {
                                                    iVar1 = test_size_t_eq("test/param_build_test.c"
                                                                           ,0x13a,"p->data_size",
                                                                           "sizeof(int32_t)",
                                                                           puVar8[3],4);
                                                    if (iVar1 != 0) {
                                                      iVar1 = test_uint_eq("test/param_build_test.c"
                                                                           ,0x13b,
                                                  "(unsigned int)i32",&_LC107,local_74,0x5fc);
                                                  if (iVar1 != 0) {
                                                    puVar8 = (undefined8 *)
                                                             OSSL_PARAM_locate(lVar7,&_LC8);
                                                    iVar1 = test_ptr("test/param_build_test.c",0x13d
                                                                     ,
                                                  "p = OSSL_PARAM_locate(params, \"i64\")",puVar8);
                                                  if (iVar1 != 0) {
                                                    iVar1 = CRYPTO_secure_allocated(puVar8[2]);
                                                    iVar1 = test_false("test/param_build_test.c",
                                                                       0x13e,
                                                  "CRYPTO_secure_allocated(p->data)",iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = test_str_eq("test/param_build_test.c",
                                                                        0x13f,"p->key","\"i64\"",
                                                                        *puVar8,&_LC8);
                                                    if (iVar1 != 0) {
                                                      iVar1 = test_uint_eq("test/param_build_test.c"
                                                                           ,0x140,"p->data_type",
                                                                                                                                                      
                                                  "OSSL_PARAM_UNSIGNED_INTEGER",
                                                  *(undefined4 *)(puVar8 + 1),2);
                                                  if (iVar1 != 0) {
                                                    iVar1 = test_size_t_eq("test/param_build_test.c"
                                                                           ,0x141,"p->data_size",
                                                                           "sizeof(int64_t)",
                                                                           puVar8[3],8);
                                                    if (iVar1 != 0) {
                                                      iVar1 = OSSL_PARAM_get_uint64
                                                                        (puVar8,&local_68);
                                                      iVar1 = test_true("test/param_build_test.c",
                                                                        0x142,
                                                  "OSSL_PARAM_get_uint64(p, &i64)",iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = test_ulong_eq("test/param_build_test.c",
                                                                          0x143,"(unsigned long)i64"
                                                                          ,"9999999",local_68,
                                                                          9999999);
                                                    if (iVar1 != 0) {
                                                      puVar8 = (undefined8 *)
                                                               OSSL_PARAM_locate(lVar7,&_LC4);
                                                      iVar1 = test_ptr("test/param_build_test.c",
                                                                       0x145,
                                                  "p = OSSL_PARAM_locate(params, \"l\")",puVar8);
                                                  if (iVar1 != 0) {
                                                    iVar1 = CRYPTO_secure_allocated(puVar8[2]);
                                                    iVar1 = test_false("test/param_build_test.c",
                                                                       0x146,
                                                  "CRYPTO_secure_allocated(p->data)",iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = test_str_eq("test/param_build_test.c",
                                                                        0x147,"p->key",&_LC51,
                                                                        *puVar8,&_LC4);
                                                    if (iVar1 != 0) {
                                                      iVar1 = test_uint_eq("test/param_build_test.c"
                                                                           ,0x148,"p->data_type",
                                                                                                                                                      
                                                  "OSSL_PARAM_UNSIGNED_INTEGER",
                                                  *(undefined4 *)(puVar8 + 1),2);
                                                  if (iVar1 != 0) {
                                                    iVar1 = test_size_t_eq("test/param_build_test.c"
                                                                           ,0x149,"p->data_size",
                                                                                                                                                      
                                                  "sizeof(unsigned long int)",puVar8[3],8);
                                                  if (iVar1 != 0) {
                                                    iVar1 = OSSL_PARAM_get_ulong(puVar8,&local_70);
                                                    iVar1 = test_true("test/param_build_test.c",
                                                                      0x14a,
                                                  "OSSL_PARAM_get_ulong(p, &l)",iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = test_ulong_eq("test/param_build_test.c",
                                                                          0x14b,&_LC4,&_LC54,
                                                                          local_70,0x2a);
                                                    if (iVar1 != 0) {
                                                      puVar8 = (undefined8 *)
                                                               OSSL_PARAM_locate(lVar7,&_LC10);
                                                      iVar1 = test_ptr("test/param_build_test.c",
                                                                       0x14d,
                                                  "p = OSSL_PARAM_locate(params, \"st\")",puVar8);
                                                  if (iVar1 != 0) {
                                                    iVar1 = CRYPTO_secure_allocated(puVar8[2]);
                                                    iVar1 = test_false("test/param_build_test.c",
                                                                       0x14e,
                                                  "CRYPTO_secure_allocated(p->data)",iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = test_str_eq("test/param_build_test.c",
                                                                        0x14f,"p->key",&_LC56,
                                                                        *puVar8,&_LC10);
                                                    if (iVar1 != 0) {
                                                      iVar1 = test_uint_eq("test/param_build_test.c"
                                                                           ,0x150,"p->data_type",
                                                                                                                                                      
                                                  "OSSL_PARAM_UNSIGNED_INTEGER",
                                                  *(undefined4 *)(puVar8 + 1),2);
                                                  if (iVar1 != 0) {
                                                    iVar1 = test_size_t_eq("test/param_build_test.c"
                                                                           ,0x151,"p->data_size",
                                                                           "sizeof(size_t)",
                                                                           puVar8[3],8);
                                                    if (iVar1 != 0) {
                                                      iVar1 = OSSL_PARAM_get_size_t
                                                                        (puVar8,&local_60);
                                                      iVar1 = test_true("test/param_build_test.c",
                                                                        0x152,
                                                  "OSSL_PARAM_get_size_t(p, &st)",iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = test_size_t_eq("test/param_build_test.c"
                                                                           ,0x153,&_LC10,"65537",
                                                                           local_60,0x10001);
                                                    if (iVar1 != 0) {
                                                      puVar8 = (undefined8 *)
                                                               OSSL_PARAM_locate(lVar7,"oct_s");
                                                      iVar1 = test_ptr("test/param_build_test.c",
                                                                       0x155,
                                                  "p = OSSL_PARAM_locate(params, \"oct_s\")",puVar8)
                                                  ;
                                                  if (iVar1 != 0) {
                                                    iVar1 = CRYPTO_secure_allocated(puVar8[2]);
                                                    iVar1 = test_true("test/param_build_test.c",
                                                                      0x156,
                                                  "CRYPTO_secure_allocated(p->data)",iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = test_str_eq("test/param_build_test.c",
                                                                        0x157,"p->key","\"oct_s\"",
                                                                        *puVar8,"oct_s");
                                                    if (iVar1 != 0) {
                                                      iVar1 = test_uint_eq("test/param_build_test.c"
                                                                           ,0x158,"p->data_type",
                                                                           "OSSL_PARAM_OCTET_STRING"
                                                                           ,*(undefined4 *)
                                                                             (puVar8 + 1),5);
                                                      if (iVar1 != 0) {
                                                        iVar1 = test_mem_eq(
                                                  "test/param_build_test.c",0x159,"p->data","data1",
                                                  puVar8[2],puVar8[3],puVar3,0x30);
                                                  if (iVar1 != 0) {
                                                    puVar8 = (undefined8 *)
                                                             OSSL_PARAM_locate(lVar7,"oct_p");
                                                    iVar1 = test_ptr("test/param_build_test.c",0x15b
                                                                     ,
                                                  "p = OSSL_PARAM_locate(params, \"oct_p\")",puVar8)
                                                  ;
                                                  if (iVar1 != 0) {
                                                    iVar1 = CRYPTO_secure_allocated(puVar8[2]);
                                                    iVar1 = test_false("test/param_build_test.c",
                                                                       0x15c,
                                                  "CRYPTO_secure_allocated(p->data)",iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = CRYPTO_secure_allocated
                                                                      (*(undefined8 *)puVar8[2]);
                                                    iVar1 = test_true("test/param_build_test.c",
                                                                      0x15d,
                                                  "CRYPTO_secure_allocated(*(void **)p->data)",
                                                  iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = test_str_eq("test/param_build_test.c",
                                                                        0x15e,"p->key","\"oct_p\"",
                                                                        *puVar8,"oct_p");
                                                    if (iVar1 != 0) {
                                                      iVar1 = test_uint_eq("test/param_build_test.c"
                                                                           ,0x15f,"p->data_type",
                                                                           "OSSL_PARAM_OCTET_PTR",
                                                                           *(undefined4 *)
                                                                            (puVar8 + 1),7);
                                                      if (iVar1 != 0) {
                                                        uVar12 = 0x14;
                                                        puVar11 = puVar4;
                                                        iVar1 = test_mem_eq(
                                                  "test/param_build_test.c",0x160,
                                                  "*(void **)p->data","data2",
                                                  *(undefined8 *)puVar8[2],puVar8[3]);
                                                  if (iVar1 != 0) {
                                                    puVar8 = (undefined8 *)
                                                             OSSL_PARAM_locate(lVar7,"zeronumber",
                                                                               puVar11,uVar12);
                                                    iVar1 = test_ptr("test/param_build_test.c",0x162
                                                                     ,
                                                  "p = OSSL_PARAM_locate(params, \"zeronumber\")",
                                                  puVar8);
                                                  if (iVar1 != 0) {
                                                    iVar1 = CRYPTO_secure_allocated(puVar8[2]);
                                                    iVar1 = test_true("test/param_build_test.c",
                                                                      0x163,
                                                  "CRYPTO_secure_allocated(p->data)",iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = test_str_eq("test/param_build_test.c",
                                                                        0x164,"p->key",
                                                                        "\"zeronumber\"",*puVar8,
                                                                        "zeronumber");
                                                    if (iVar1 != 0) {
                                                      iVar1 = test_uint_eq("test/param_build_test.c"
                                                                           ,0x165,"p->data_type",
                                                                                                                                                      
                                                  "OSSL_PARAM_UNSIGNED_INTEGER",
                                                  *(undefined4 *)(puVar8 + 1),2);
                                                  if (iVar1 != 0) {
                                                    iVar1 = OSSL_PARAM_get_BN(puVar8,&local_58);
                                                    iVar1 = test_true("test/param_build_test.c",
                                                                      0x166,
                                                  "OSSL_PARAM_get_BN(p, &zbn_res)",iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    uVar2 = BN_get_flags(local_98,8);
                                                    iVar1 = test_int_eq("test/param_build_test.c",
                                                                        0x167,
                                                  "BN_get_flags(pbn, BN_FLG_SECURE)","BN_FLG_SECURE"
                                                  ,uVar2,8);
                                                  if (iVar1 != 0) {
                                                    iVar1 = test_BN_eq("test/param_build_test.c",
                                                                       0x168,"zbn_res",&_LC114,
                                                                       local_58,local_90);
                                                    if (iVar1 != 0) {
                                                      puVar8 = (undefined8 *)
                                                               OSSL_PARAM_locate(lVar7,"bignumber");
                                                      iVar1 = test_ptr("test/param_build_test.c",
                                                                       0x16a,
                                                  "p = OSSL_PARAM_locate(params, \"bignumber\")",
                                                  puVar8);
                                                  if (iVar1 != 0) {
                                                    iVar1 = CRYPTO_secure_allocated(puVar8[2]);
                                                    iVar1 = test_true("test/param_build_test.c",
                                                                      0x16b,
                                                  "CRYPTO_secure_allocated(p->data)",iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = test_str_eq("test/param_build_test.c",
                                                                        0x16c,"p->key",
                                                                        "\"bignumber\"",*puVar8,
                                                                        "bignumber");
                                                    if (iVar1 != 0) {
                                                      iVar1 = test_uint_eq("test/param_build_test.c"
                                                                           ,0x16d,"p->data_type",
                                                                                                                                                      
                                                  "OSSL_PARAM_UNSIGNED_INTEGER",
                                                  *(undefined4 *)(puVar8 + 1),2);
                                                  if (iVar1 != 0) {
                                                    iVar1 = OSSL_PARAM_get_BN(puVar8,&local_50);
                                                    iVar1 = test_true("test/param_build_test.c",
                                                                      0x16e,
                                                  "OSSL_PARAM_get_BN(p, &pbn_res)",iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    uVar2 = BN_get_flags(local_98,8);
                                                    iVar1 = test_int_eq("test/param_build_test.c",
                                                                        0x16f,
                                                  "BN_get_flags(pbn, BN_FLG_SECURE)","BN_FLG_SECURE"
                                                  ,uVar2,8);
                                                  if (iVar1 != 0) {
                                                    iVar1 = test_BN_eq("test/param_build_test.c",
                                                                       0x170,"pbn_res",&_LC119,
                                                                       local_50,local_98);
                                                    if (iVar1 != 0) {
                                                      puVar8 = (undefined8 *)
                                                               OSSL_PARAM_locate(lVar7,
                                                  "negativebignumber");
                                                  iVar1 = test_ptr("test/param_build_test.c",0x172,
                                                                                                                                      
                                                  "p = OSSL_PARAM_locate(params, \"negativebignumber\")"
                                                  ,puVar8);
                                                  if (iVar1 != 0) {
                                                    iVar1 = CRYPTO_secure_allocated(puVar8[2]);
                                                    iVar1 = test_true("test/param_build_test.c",
                                                                      0x173,
                                                  "CRYPTO_secure_allocated(p->data)",iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = test_str_eq("test/param_build_test.c",
                                                                        0x174,"p->key",
                                                                        "\"negativebignumber\"",
                                                                        *puVar8,"negativebignumber")
                                                    ;
                                                    if (iVar1 != 0) {
                                                      iVar1 = test_uint_eq("test/param_build_test.c"
                                                                           ,0x175,"p->data_type",
                                                                           "OSSL_PARAM_INTEGER",
                                                                           *(undefined4 *)
                                                                            (puVar8 + 1),1);
                                                      if (iVar1 != 0) {
                                                        iVar1 = OSSL_PARAM_get_BN(puVar8,&local_48);
                                                        iVar1 = test_true("test/param_build_test.c",
                                                                          0x176,
                                                  "OSSL_PARAM_get_BN(p, &nbn_res)",iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    uVar2 = BN_get_flags(local_a0,8);
                                                    iVar1 = test_int_eq("test/param_build_test.c",
                                                                        0x177,
                                                  "BN_get_flags(nbn, BN_FLG_SECURE)","BN_FLG_SECURE"
                                                  ,uVar2,8);
                                                  if (iVar1 != 0) {
                                                    iVar1 = test_BN_eq("test/param_build_test.c",
                                                                       0x178,"nbn_res",&_LC126,
                                                                       local_48,local_a0);
                                                    bVar10 = iVar1 != 0;
                                                    goto LAB_00101732;
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
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                          bVar10 = false;
                                        }
LAB_00101732:
                                        OSSL_PARAM_free(uVar9);
                                        if (lVar7 != lVar6) {
                                          OSSL_PARAM_free(lVar7);
                                        }
                                        goto LAB_001011ce;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                            goto LAB_001011bc;
                          }
                        }
                      }
                      local_a0 = (BIGNUM *)0x0;
                      goto LAB_001011bc;
                    }
                  }
                  local_a0 = (BIGNUM *)0x0;
                  local_98 = (BIGNUM *)0x0;
                  goto LAB_001011bc;
                }
              }
            }
          }
        }
      }
      local_a0 = (BIGNUM *)0x0;
      local_98 = (BIGNUM *)0x0;
      local_90 = (BIGNUM *)0x0;
    }
  }
LAB_001011bc:
  lVar6 = 0;
  OSSL_PARAM_free(0);
  bVar10 = false;
LAB_001011ce:
  OSSL_PARAM_free(lVar6);
  OSSL_PARAM_BLD_free(uVar5);
  CRYPTO_secure_free(puVar3,"test/param_build_test.c",0x181);
  CRYPTO_secure_free(puVar4,"test/param_build_test.c",0x182);
  BN_free(local_90);
  BN_free(local_58);
  BN_free(local_98);
  BN_free(local_50);
  BN_free(local_a0);
  BN_free(local_48);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool template_private_single_zero_test(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  BIGNUM *a;
  long lVar4;
  undefined8 *puVar5;
  long in_FS_OFFSET;
  bool bVar6;
  BIGNUM *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (BIGNUM *)0x0;
  uVar3 = OSSL_PARAM_BLD_new();
  iVar1 = test_ptr("test/param_build_test.c",0x3b,"bld = OSSL_PARAM_BLD_new()",uVar3);
  if (iVar1 == 0) {
    bVar6 = false;
    a = (BIGNUM *)0x0;
    lVar4 = 0;
  }
  else {
    a = (BIGNUM *)BN_secure_new();
    iVar1 = test_ptr("test/param_build_test.c",0x3c,"zbn = BN_secure_new()",a);
    if (iVar1 != 0) {
      iVar1 = OSSL_PARAM_BLD_push_BN(uVar3,"zeronumber",a);
      iVar1 = test_true("test/param_build_test.c",0x3d,
                        "OSSL_PARAM_BLD_push_BN(bld, \"zeronumber\", zbn)",iVar1 != 0);
      if (iVar1 != 0) {
        lVar4 = OSSL_PARAM_BLD_to_param(uVar3);
        iVar1 = test_ptr("test/param_build_test.c",0x3e,"params_blt = OSSL_PARAM_BLD_to_param(bld)",
                         lVar4);
        if (iVar1 == 0) {
          if (lVar4 != 0) {
            bVar6 = false;
            CRYPTO_free((void *)0x0);
            goto LAB_001026cc;
          }
        }
        else {
          puVar5 = (undefined8 *)OSSL_PARAM_locate(lVar4,"zeronumber");
          iVar1 = test_ptr("test/param_build_test.c",0x43,
                           "p = OSSL_PARAM_locate(params, \"zeronumber\")",puVar5);
          if (iVar1 != 0) {
            iVar1 = CRYPTO_secure_allocated(puVar5[2]);
            iVar1 = test_true("test/param_build_test.c",0x44,"CRYPTO_secure_allocated(p->data)",
                              iVar1 != 0);
            if (iVar1 != 0) {
              iVar1 = test_str_eq("test/param_build_test.c",0x45,"p->key","\"zeronumber\"",*puVar5,
                                  "zeronumber");
              if (iVar1 != 0) {
                iVar1 = test_uint_eq("test/param_build_test.c",0x46,"p->data_type",
                                     "OSSL_PARAM_UNSIGNED_INTEGER",*(undefined4 *)(puVar5 + 1),2);
                if (iVar1 != 0) {
                  iVar1 = OSSL_PARAM_get_BN(puVar5,&local_48);
                  iVar1 = test_true("test/param_build_test.c",0x47,"OSSL_PARAM_get_BN(p, &zbn_res)",
                                    iVar1 != 0);
                  if (iVar1 != 0) {
                    uVar2 = BN_get_flags(a,8);
                    iVar1 = test_int_eq("test/param_build_test.c",0x48,
                                        "BN_get_flags(zbn, BN_FLG_SECURE)","BN_FLG_SECURE",uVar2,8);
                    if (iVar1 != 0) {
                      iVar1 = test_BN_eq("test/param_build_test.c",0x49,"zbn_res",&_LC114,local_48,a
                                        );
                      bVar6 = iVar1 != 0;
                      goto LAB_001026cc;
                    }
                  }
                }
              }
            }
          }
        }
        bVar6 = false;
        goto LAB_001026cc;
      }
    }
    bVar6 = false;
    lVar4 = 0;
  }
LAB_001026cc:
  OSSL_PARAM_free(lVar4);
  OSSL_PARAM_BLD_free(uVar3);
  BN_free(a);
  BN_free(local_48);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool template_public_single_zero_test(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  BIGNUM *a;
  long lVar3;
  undefined8 *puVar4;
  BIGNUM *pBVar5;
  long in_FS_OFFSET;
  bool bVar6;
  BIGNUM *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (BIGNUM *)0x0;
  uVar2 = OSSL_PARAM_BLD_new();
  iVar1 = test_ptr("test/param_build_test.c",0x1a,"bld = OSSL_PARAM_BLD_new()",uVar2);
  if (iVar1 == 0) {
    bVar6 = false;
    a = (BIGNUM *)0x0;
    lVar3 = 0;
  }
  else {
    a = BN_new();
    iVar1 = test_ptr("test/param_build_test.c",0x1b,"zbn = BN_new()",a);
    if (iVar1 != 0) {
      pBVar5 = (BIGNUM *)0x0;
      if (param_1 == 0) {
        pBVar5 = a;
      }
      iVar1 = OSSL_PARAM_BLD_push_BN(uVar2,"zeronumber",pBVar5);
      iVar1 = test_true("test/param_build_test.c",0x1c,
                        "OSSL_PARAM_BLD_push_BN(bld, \"zeronumber\", idx == 0 ? zbn : NULL)",
                        iVar1 != 0);
      if (iVar1 != 0) {
        lVar3 = OSSL_PARAM_BLD_to_param(uVar2);
        iVar1 = test_ptr("test/param_build_test.c",0x1e,"params_blt = OSSL_PARAM_BLD_to_param(bld)",
                         lVar3);
        if (iVar1 == 0) {
          if (lVar3 != 0) {
            bVar6 = false;
            CRYPTO_free((void *)0x0);
            goto LAB_0010296f;
          }
        }
        else {
          puVar4 = (undefined8 *)OSSL_PARAM_locate(lVar3,"zeronumber");
          iVar1 = test_ptr("test/param_build_test.c",0x23,
                           "p = OSSL_PARAM_locate(params, \"zeronumber\")",puVar4);
          if (iVar1 != 0) {
            iVar1 = test_str_eq("test/param_build_test.c",0x24,"p->key","\"zeronumber\"",*puVar4,
                                "zeronumber");
            if (iVar1 != 0) {
              iVar1 = test_uint_eq("test/param_build_test.c",0x25,"p->data_type",
                                   "OSSL_PARAM_UNSIGNED_INTEGER",*(undefined4 *)(puVar4 + 1),2);
              if (iVar1 != 0) {
                iVar1 = OSSL_PARAM_get_BN(puVar4,&local_48);
                iVar1 = test_true("test/param_build_test.c",0x26,"OSSL_PARAM_get_BN(p, &zbn_res)",
                                  iVar1 != 0);
                if (iVar1 != 0) {
                  iVar1 = test_BN_eq("test/param_build_test.c",0x27,"zbn_res",&_LC114,local_48,a);
                  bVar6 = iVar1 != 0;
                  goto LAB_0010296f;
                }
              }
            }
          }
        }
        bVar6 = false;
        goto LAB_0010296f;
      }
    }
    bVar6 = false;
    lVar3 = 0;
  }
LAB_0010296f:
  OSSL_PARAM_free(lVar3);
  OSSL_PARAM_BLD_free(uVar2);
  BN_free(a);
  BN_free(local_48);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint template_public_test(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  BIGNUM *a;
  BIGNUM *a_00;
  void *pvVar4;
  void *ptr;
  void *ptr_00;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  long in_FS_OFFSET;
  BIGNUM *local_b8;
  undefined8 *local_a8;
  undefined4 local_90;
  undefined4 local_8c;
  BIGNUM *local_88;
  BIGNUM *local_80;
  BIGNUM *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  void *local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = OSSL_PARAM_BLD_new();
  local_88 = (BIGNUM *)0x0;
  local_80 = (BIGNUM *)0x0;
  local_78 = (BIGNUM *)0x0;
  local_50 = (void *)0x0;
  iVar1 = test_ptr("test/param_build_test.c",0x67,&_LC0,uVar3);
  if (iVar1 == 0) {
LAB_00102bca:
    local_b8 = (BIGNUM *)0x0;
    a_00 = (BIGNUM *)0x0;
    a = (BIGNUM *)0x0;
  }
  else {
    iVar1 = OSSL_PARAM_BLD_push_long(uVar3,&_LC4,0x2a);
    iVar1 = test_true("test/param_build_test.c",0x68,"OSSL_PARAM_BLD_push_long(bld, \"l\", 42)",
                      iVar1 != 0);
    if (iVar1 == 0) goto LAB_00102bca;
    iVar1 = OSSL_PARAM_BLD_push_int32(uVar3,&_LC6,0x5fc);
    iVar1 = test_true("test/param_build_test.c",0x69,"OSSL_PARAM_BLD_push_int32(bld, \"i32\", 1532)"
                      ,iVar1 != 0);
    if (iVar1 == 0) goto LAB_00102bca;
    iVar1 = OSSL_PARAM_BLD_push_int64(uVar3,&_LC8,0xffffffffff676981);
    iVar1 = test_true("test/param_build_test.c",0x6a,
                      "OSSL_PARAM_BLD_push_int64(bld, \"i64\", -9999999)",iVar1 != 0);
    if (iVar1 == 0) goto LAB_00102bca;
    iVar1 = OSSL_PARAM_BLD_push_time_t(uVar3,&_LC134,0x2bd8);
    iVar1 = test_true("test/param_build_test.c",0x6b,"OSSL_PARAM_BLD_push_time_t(bld, \"t\", 11224)"
                      ,iVar1 != 0);
    if (iVar1 == 0) goto LAB_00102bca;
    iVar1 = OSSL_PARAM_BLD_push_double(_LC136,uVar3,&_LC137);
    iVar1 = test_true("test/param_build_test.c",0x6c,
                      "OSSL_PARAM_BLD_push_double(bld, \"d\", 1.61803398875)",iVar1 != 0);
    if (iVar1 == 0) goto LAB_00102bca;
    a = BN_new();
    iVar1 = test_ptr("test/param_build_test.c",0x6d,"zbn = BN_new()",a);
    if (iVar1 == 0) {
LAB_00102e18:
      local_b8 = (BIGNUM *)0x0;
      a_00 = (BIGNUM *)0x0;
    }
    else {
      iVar1 = OSSL_PARAM_BLD_push_BN(uVar3,"zeronumber",a);
      iVar1 = test_true("test/param_build_test.c",0x6e,
                        "OSSL_PARAM_BLD_push_BN(bld, \"zeronumber\", zbn)",iVar1 != 0);
      if (iVar1 == 0) goto LAB_00102e18;
      a_00 = BN_new();
      iVar1 = test_ptr("test/param_build_test.c",0x6f,"pbn = BN_new()",a_00);
      if (iVar1 == 0) {
LAB_00102e07:
        local_b8 = (BIGNUM *)0x0;
      }
      else {
        iVar1 = BN_set_word(a_00,0x6c1);
        iVar1 = test_true("test/param_build_test.c",0x70,"BN_set_word(pbn, 1729)",iVar1 != 0);
        local_b8 = (BIGNUM *)0x0;
        if (iVar1 != 0) {
          iVar1 = OSSL_PARAM_BLD_push_BN(uVar3,"bignumber",a_00);
          iVar1 = test_true("test/param_build_test.c",0x71,
                            "OSSL_PARAM_BLD_push_BN(bld, \"bignumber\", pbn)",iVar1 != 0);
          if (iVar1 == 0) goto LAB_00102e07;
          local_b8 = (BIGNUM *)BN_secure_new();
          iVar1 = test_ptr("test/param_build_test.c",0x72,"nbn = BN_secure_new()",local_b8);
          if (iVar1 != 0) {
            iVar1 = BN_set_word(local_b8,0x6c5);
            iVar1 = test_true("test/param_build_test.c",0x73,"BN_set_word(nbn, 1733)",iVar1 != 0);
            if (iVar1 != 0) {
              BN_set_negative(local_b8,1);
              iVar1 = test_true("test/param_build_test.c",0x74,"(BN_set_negative(nbn, 1), 1)",1);
              if (iVar1 != 0) {
                iVar1 = OSSL_PARAM_BLD_push_BN(uVar3,"negativebignumber",local_b8);
                iVar1 = test_true("test/param_build_test.c",0x75,
                                  "OSSL_PARAM_BLD_push_BN(bld, \"negativebignumber\", nbn)",
                                  iVar1 != 0);
                if (iVar1 != 0) {
                  iVar1 = OSSL_PARAM_BLD_push_utf8_string(uVar3,"utf8_s",&_LC140,4);
                  iVar1 = test_true("test/param_build_test.c",0x76,
                                    "OSSL_PARAM_BLD_push_utf8_string(bld, \"utf8_s\", \"foo\", sizeof(\"foo\"))"
                                    ,iVar1 != 0);
                  if (iVar1 != 0) {
                    iVar1 = OSSL_PARAM_BLD_push_utf8_ptr(uVar3,"utf8_p","bar-boom",0);
                    iVar1 = test_true("test/param_build_test.c",0x78,
                                      "OSSL_PARAM_BLD_push_utf8_ptr(bld, \"utf8_p\", \"bar-boom\", 0)"
                                      ,iVar1 != 0);
                    if (iVar1 != 0) {
                      iVar1 = OSSL_PARAM_BLD_push_int(uVar3,&_LC2,0xfffffffa);
                      iVar1 = test_true("test/param_build_test.c",0x7a,
                                        "OSSL_PARAM_BLD_push_int(bld, \"i\", -6)",iVar1 != 0);
                      if (iVar1 != 0) {
                        pvVar4 = (void *)OSSL_PARAM_BLD_to_param(uVar3);
                        iVar1 = test_ptr("test/param_build_test.c",0x7b,
                                         "params_blt = OSSL_PARAM_BLD_to_param(bld)",pvVar4);
                        if (iVar1 == 0) {
                          ptr_00 = (void *)0x0;
                          ptr = (void *)0x0;
                          uVar2 = 0;
                        }
                        else {
                          if (param_1 == 2) {
                            ptr = (void *)OSSL_PARAM_dup(pvVar4);
                            ptr_00 = (void *)0x0;
LAB_00103069:
                            local_a8 = (undefined8 *)OSSL_PARAM_locate(ptr,&_LC2);
                            uVar2 = test_ptr("test/param_build_test.c",0x92,
                                             "p = OSSL_PARAM_locate(params, \"i\")",local_a8);
                            if (uVar2 == 0) goto LAB_001030a6;
                          }
                          else {
                            if (2 < param_1) {
                              if (param_1 == 3) {
                                ptr_00 = (void *)OSSL_PARAM_merge(pvVar4,params_empty);
                                ptr = (void *)OSSL_PARAM_dup(ptr_00);
                              }
                              else {
LAB_00103199:
                                ptr_00 = (void *)OSSL_PARAM_dup(pvVar4);
                                ptr = (void *)OSSL_PARAM_merge(ptr_00,params_empty);
                              }
                              goto LAB_00103069;
                            }
                            if (param_1 != 0) {
                              if (param_1 != 1) goto LAB_00103199;
                              ptr = (void *)OSSL_PARAM_merge(pvVar4,params_empty);
                              ptr_00 = (void *)0x0;
                              goto LAB_00103069;
                            }
                            local_a8 = (undefined8 *)OSSL_PARAM_locate(pvVar4,&_LC2);
                            iVar1 = test_ptr("test/param_build_test.c",0x92,
                                             "p = OSSL_PARAM_locate(params, \"i\")",local_a8);
                            if (iVar1 == 0) {
                              CRYPTO_free((void *)0x0);
                              uVar2 = 0;
                              goto LAB_00102bf2;
                            }
                            ptr_00 = (void *)0x0;
                            ptr = pvVar4;
                          }
                          iVar1 = OSSL_PARAM_get_int(local_a8,&local_90);
                          uVar2 = test_true("test/param_build_test.c",0x93,
                                            "OSSL_PARAM_get_int(p, &i)",iVar1 != 0);
                          if (uVar2 != 0) {
                            iVar1 = test_str_eq("test/param_build_test.c",0x94,"p->key",&_LC31,
                                                *local_a8,&_LC2);
                            if (iVar1 != 0) {
                              iVar1 = test_uint_eq("test/param_build_test.c",0x95,"p->data_type",
                                                   "OSSL_PARAM_INTEGER",
                                                   *(undefined4 *)(local_a8 + 1),1);
                              if (iVar1 != 0) {
                                iVar1 = test_size_t_eq("test/param_build_test.c",0x96,"p->data_size"
                                                       ,"sizeof(int)",local_a8[3],4);
                                if (iVar1 != 0) {
                                  iVar1 = test_int_eq("test/param_build_test.c",0x97,&_LC2,&_LC148,
                                                      local_90,0xfffffffa);
                                  if (iVar1 != 0) {
                                    puVar5 = (undefined8 *)OSSL_PARAM_locate(ptr,&_LC6);
                                    iVar1 = test_ptr("test/param_build_test.c",0x99,
                                                     "p = OSSL_PARAM_locate(params, \"i32\")",puVar5
                                                    );
                                    if (iVar1 != 0) {
                                      iVar1 = OSSL_PARAM_get_int32(puVar5,&local_8c);
                                      iVar1 = test_true("test/param_build_test.c",0x9a,
                                                        "OSSL_PARAM_get_int32(p, &i32)",iVar1 != 0);
                                      if (iVar1 != 0) {
                                        iVar1 = test_str_eq("test/param_build_test.c",0x9b,"p->key",
                                                            "\"i32\"",*puVar5,&_LC6);
                                        if (iVar1 != 0) {
                                          iVar1 = test_uint_eq("test/param_build_test.c",0x9c,
                                                               "p->data_type","OSSL_PARAM_INTEGER",
                                                               *(undefined4 *)(puVar5 + 1),1);
                                          if (iVar1 != 0) {
                                            iVar1 = test_size_t_eq("test/param_build_test.c",0x9d,
                                                                   "p->data_size","sizeof(int32_t)",
                                                                   puVar5[3],4);
                                            if (iVar1 != 0) {
                                              iVar1 = test_int_eq("test/param_build_test.c",0x9e,
                                                                  "(int)i32",&_LC107,local_8c,0x5fc)
                                              ;
                                              if (iVar1 != 0) {
                                                puVar5 = (undefined8 *)OSSL_PARAM_locate(ptr,&_LC8);
                                                iVar1 = test_ptr("test/param_build_test.c",0xa0,
                                                                                                                                  
                                                  "p = OSSL_PARAM_locate(params, \"i64\")",puVar5);
                                                if (iVar1 != 0) {
                                                  iVar1 = test_str_eq("test/param_build_test.c",0xa1
                                                                      ,"p->key","\"i64\"",*puVar5,
                                                                      &_LC8);
                                                  if (iVar1 != 0) {
                                                    iVar1 = test_uint_eq("test/param_build_test.c",
                                                                         0xa2,"p->data_type",
                                                                         "OSSL_PARAM_INTEGER",
                                                                         *(undefined4 *)(puVar5 + 1)
                                                                         ,1);
                                                    if (iVar1 != 0) {
                                                      iVar1 = test_size_t_eq(
                                                  "test/param_build_test.c",0xa3,"p->data_size",
                                                  "sizeof(int64_t)",puVar5[3],8);
                                                  if (iVar1 != 0) {
                                                    iVar1 = OSSL_PARAM_get_int64(puVar5,&local_68);
                                                    iVar1 = test_true("test/param_build_test.c",0xa4
                                                                      ,
                                                  "OSSL_PARAM_get_int64(p, &i64)",iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = test_long_eq("test/param_build_test.c",
                                                                         0xa5,"(long)i64","-9999999"
                                                                         ,local_68,
                                                                         0xffffffffff676981);
                                                    if (iVar1 != 0) {
                                                      puVar5 = (undefined8 *)
                                                               OSSL_PARAM_locate(ptr,&_LC4);
                                                      iVar1 = test_ptr("test/param_build_test.c",
                                                                       0xa7,
                                                  "p = OSSL_PARAM_locate(params, \"l\")",puVar5);
                                                  if (iVar1 != 0) {
                                                    iVar1 = test_str_eq("test/param_build_test.c",
                                                                        0xa8,"p->key",&_LC51,*puVar5
                                                                        ,&_LC4);
                                                    if (iVar1 != 0) {
                                                      iVar1 = test_uint_eq("test/param_build_test.c"
                                                                           ,0xa9,"p->data_type",
                                                                           "OSSL_PARAM_INTEGER",
                                                                           *(undefined4 *)
                                                                            (puVar5 + 1),1);
                                                      if (iVar1 != 0) {
                                                        iVar1 = test_size_t_eq(
                                                  "test/param_build_test.c",0xaa,"p->data_size",
                                                  "sizeof(long int)",puVar5[3],8);
                                                  if (iVar1 != 0) {
                                                    iVar1 = OSSL_PARAM_get_long(puVar5,&local_70);
                                                    iVar1 = test_true("test/param_build_test.c",0xab
                                                                      ,"OSSL_PARAM_get_long(p, &l)",
                                                                      iVar1 != 0);
                                                    if (iVar1 != 0) {
                                                      iVar1 = test_long_eq("test/param_build_test.c"
                                                                           ,0xac,&_LC4,&_LC54,
                                                                           local_70,0x2a);
                                                      if (iVar1 != 0) {
                                                        puVar5 = (undefined8 *)
                                                                 OSSL_PARAM_locate(ptr,&_LC134);
                                                        iVar1 = test_ptr("test/param_build_test.c",
                                                                         0xae,
                                                  "p = OSSL_PARAM_locate(params, \"t\")",puVar5);
                                                  if (iVar1 != 0) {
                                                    iVar1 = test_str_eq("test/param_build_test.c",
                                                                        0xaf,"p->key",&_LC157,
                                                                        *puVar5,&_LC134);
                                                    if (iVar1 != 0) {
                                                      iVar1 = test_uint_eq("test/param_build_test.c"
                                                                           ,0xb0,"p->data_type",
                                                                           "OSSL_PARAM_INTEGER",
                                                                           *(undefined4 *)
                                                                            (puVar5 + 1),1);
                                                      if (iVar1 != 0) {
                                                        iVar1 = test_size_t_eq(
                                                  "test/param_build_test.c",0xb1,"p->data_size",
                                                  "sizeof(time_t)",puVar5[3],8);
                                                  if (iVar1 != 0) {
                                                    iVar1 = OSSL_PARAM_get_time_t(puVar5,&local_58);
                                                    iVar1 = test_true("test/param_build_test.c",0xb2
                                                                      ,
                                                  "OSSL_PARAM_get_time_t(p, &t)",iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = test_time_t_eq("test/param_build_test.c"
                                                                           ,0xb3,&_LC134,"11224",
                                                                           local_58,0x2bd8);
                                                    if (iVar1 != 0) {
                                                      puVar5 = (undefined8 *)
                                                               OSSL_PARAM_locate(ptr,&_LC137);
                                                      iVar1 = test_ptr("test/param_build_test.c",
                                                                       0xb5,
                                                  "p = OSSL_PARAM_locate(params, \"d\")",puVar5);
                                                  if (iVar1 != 0) {
                                                    iVar1 = OSSL_PARAM_get_double(puVar5,&local_60);
                                                    iVar1 = test_true("test/param_build_test.c",0xb6
                                                                      ,
                                                  "OSSL_PARAM_get_double(p, &d)",iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = test_str_eq("test/param_build_test.c",
                                                                        0xb7,"p->key",&_LC163,
                                                                        *puVar5,&_LC137);
                                                    if (iVar1 != 0) {
                                                      iVar1 = test_uint_eq("test/param_build_test.c"
                                                                           ,0xb8,"p->data_type",
                                                                           "OSSL_PARAM_REAL",
                                                                           *(undefined4 *)
                                                                            (puVar5 + 1),3);
                                                      if (iVar1 != 0) {
                                                        iVar1 = test_size_t_eq(
                                                  "test/param_build_test.c",0xb9,"p->data_size",
                                                  "sizeof(double)",puVar5[3],8);
                                                  if (iVar1 != 0) {
                                                    iVar1 = test_double_eq(local_60,_LC136,
                                                                           "test/param_build_test.c"
                                                                           ,0xba,&_LC137,
                                                                           "1.61803398875");
                                                    if (iVar1 != 0) {
                                                      lVar6 = OSSL_PARAM_locate(ptr,"utf8_s");
                                                      iVar1 = test_ptr("test/param_build_test.c",
                                                                       0xbc,
                                                  "p = OSSL_PARAM_locate(params, \"utf8_s\")",lVar6)
                                                  ;
                                                  if (iVar1 != 0) {
                                                    iVar1 = test_str_eq("test/param_build_test.c",
                                                                        0xbd,"p->data","\"foo\"",
                                                                        *(undefined8 *)
                                                                         (lVar6 + 0x10),&_LC140);
                                                    if (iVar1 != 0) {
                                                      iVar1 = OSSL_PARAM_get_utf8_string
                                                                        (lVar6,&local_50,0);
                                                      iVar1 = test_true("test/param_build_test.c",
                                                                        0xbe,
                                                  "OSSL_PARAM_get_utf8_string(p, &utf, 0)",
                                                  iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = test_str_eq("test/param_build_test.c",
                                                                        0xbf,&_LC170,"\"foo\"",
                                                                        local_50,&_LC140);
                                                    if (iVar1 != 0) {
                                                      uVar7 = OSSL_PARAM_locate(ptr,"utf8_p");
                                                      iVar1 = test_ptr("test/param_build_test.c",
                                                                       0xc1,
                                                  "p = OSSL_PARAM_locate(params, \"utf8_p\")",uVar7)
                                                  ;
                                                  if (iVar1 != 0) {
                                                    iVar1 = OSSL_PARAM_get_utf8_ptr(uVar7,&local_48)
                                                    ;
                                                    iVar1 = test_true("test/param_build_test.c",0xc2
                                                                      ,
                                                  "OSSL_PARAM_get_utf8_ptr(p, &cutf)",iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = test_str_eq("test/param_build_test.c",
                                                                        0xc3,&_LC174,"\"bar-boom\"",
                                                                        local_48,"bar-boom");
                                                    if (iVar1 != 0) {
                                                      puVar5 = (undefined8 *)
                                                               OSSL_PARAM_locate(ptr,"zeronumber");
                                                      iVar1 = test_ptr("test/param_build_test.c",
                                                                       0xc5,
                                                  "p = OSSL_PARAM_locate(params, \"zeronumber\")",
                                                  puVar5);
                                                  if (iVar1 != 0) {
                                                    iVar1 = test_str_eq("test/param_build_test.c",
                                                                        0xc6,"p->key",
                                                                        "\"zeronumber\"",*puVar5,
                                                                        "zeronumber");
                                                    if (iVar1 != 0) {
                                                      iVar1 = test_uint_eq("test/param_build_test.c"
                                                                           ,199,"p->data_type",
                                                                                                                                                      
                                                  "OSSL_PARAM_UNSIGNED_INTEGER",
                                                  *(undefined4 *)(puVar5 + 1),2);
                                                  if (iVar1 != 0) {
                                                    iVar1 = OSSL_PARAM_get_BN(puVar5,&local_88);
                                                    iVar1 = test_true("test/param_build_test.c",200,
                                                                                                                                            
                                                  "OSSL_PARAM_get_BN(p, &zbn_res)",iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = test_BN_eq("test/param_build_test.c",
                                                                       0xc9,"zbn_res",&_LC114,
                                                                       local_88,a);
                                                    if (iVar1 != 0) {
                                                      puVar5 = (undefined8 *)
                                                               OSSL_PARAM_locate(ptr,"bignumber");
                                                      iVar1 = test_ptr("test/param_build_test.c",
                                                                       0xcb,
                                                  "p = OSSL_PARAM_locate(params, \"bignumber\")",
                                                  puVar5);
                                                  if (iVar1 != 0) {
                                                    iVar1 = test_str_eq("test/param_build_test.c",
                                                                        0xcc,"p->key",
                                                                        "\"bignumber\"",*puVar5,
                                                                        "bignumber");
                                                    if (iVar1 != 0) {
                                                      iVar1 = test_uint_eq("test/param_build_test.c"
                                                                           ,0xcd,"p->data_type",
                                                                                                                                                      
                                                  "OSSL_PARAM_UNSIGNED_INTEGER",
                                                  *(undefined4 *)(puVar5 + 1),2);
                                                  if (iVar1 != 0) {
                                                    iVar1 = OSSL_PARAM_get_BN(puVar5,&local_80);
                                                    iVar1 = test_true("test/param_build_test.c",0xce
                                                                      ,
                                                  "OSSL_PARAM_get_BN(p, &pbn_res)",iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = test_BN_eq("test/param_build_test.c",
                                                                       0xcf,"pbn_res",&_LC119,
                                                                       local_80,a_00);
                                                    if (iVar1 != 0) {
                                                      puVar5 = (undefined8 *)
                                                               OSSL_PARAM_locate(ptr,
                                                  "negativebignumber");
                                                  iVar1 = test_ptr("test/param_build_test.c",0xd1,
                                                                                                                                      
                                                  "p = OSSL_PARAM_locate(params, \"negativebignumber\")"
                                                  ,puVar5);
                                                  if (iVar1 != 0) {
                                                    iVar1 = test_str_eq("test/param_build_test.c",
                                                                        0xd2,"p->key",
                                                                        "\"negativebignumber\"",
                                                                        *puVar5,"negativebignumber")
                                                    ;
                                                    if (iVar1 != 0) {
                                                      iVar1 = test_uint_eq("test/param_build_test.c"
                                                                           ,0xd3,"p->data_type",
                                                                           "OSSL_PARAM_INTEGER",
                                                                           *(undefined4 *)
                                                                            (puVar5 + 1),1);
                                                      if (iVar1 != 0) {
                                                        iVar1 = OSSL_PARAM_get_BN(puVar5,&local_78);
                                                        iVar1 = test_true("test/param_build_test.c",
                                                                          0xd4,
                                                  "OSSL_PARAM_get_BN(p, &nbn_res)",iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = test_BN_eq("test/param_build_test.c",
                                                                       0xd5,"nbn_res",&_LC126,
                                                                       local_78,local_b8);
                                                    uVar2 = (uint)(iVar1 != 0);
                                                    goto LAB_001030a6;
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
                            uVar2 = 0;
                          }
                        }
LAB_001030a6:
                        CRYPTO_free(ptr_00);
                        if (ptr != pvVar4) {
                          CRYPTO_free(ptr);
                        }
                        goto LAB_00102bf2;
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
  pvVar4 = (void *)0x0;
  CRYPTO_free((void *)0x0);
  uVar2 = 0;
LAB_00102bf2:
  OSSL_PARAM_free(pvVar4);
  OSSL_PARAM_BLD_free(uVar3);
  CRYPTO_free(local_50);
  BN_free(a);
  BN_free(local_88);
  BN_free(a_00);
  BN_free(local_80);
  BN_free(local_b8);
  BN_free(local_78);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 setup_tests(void)

{
  int iVar1;
  
  add_all_tests("template_public_single_zero_test",template_public_single_zero_test,2,1);
  add_all_tests("template_public_test",template_public_test,5,1);
  iVar1 = CRYPTO_secure_malloc_init(0x10000,0x10);
  if (iVar1 != 0) {
    add_test("template_private_single_zero_test",template_private_single_zero_test);
    add_all_tests("template_private_test",template_private_test,5,1);
  }
  add_test("builder_limit_test",builder_limit_test);
  add_test("builder_merge_test",0x100000);
  return 1;
}


