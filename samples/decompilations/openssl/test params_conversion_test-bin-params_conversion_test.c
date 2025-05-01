
undefined4 run_param_file_tests(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  void *ptr;
  long lVar11;
  intmax_t iVar12;
  uintmax_t uVar13;
  ulong uVar14;
  undefined8 *extraout_RDX;
  undefined8 *extraout_RDX_00;
  undefined8 *puVar15;
  long *plVar16;
  long in_FS_OFFSET;
  byte bVar17;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined8 local_b8;
  char *local_b0;
  long local_a8;
  undefined4 local_a0;
  intmax_t local_98;
  undefined4 local_90;
  uintmax_t local_88;
  double local_80;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  size_t local_50;
  long local_40;
  
  bVar17 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar10 = test_get_argument((long)param_1);
  ptr = (void *)CRYPTO_zalloc(0x990,"test/params_conversion_test.c",0x147);
  iVar8 = test_ptr("test/params_conversion_test.c",0x147,"s = OPENSSL_zalloc(sizeof(*s))");
  if (iVar8 != 0) {
    iVar8 = test_start_file(ptr,uVar10);
    if (iVar8 != 0) {
      local_cc = 1;
      while (lVar11 = BIO_ctrl(*(BIO **)((long)ptr + 8),2,0,(void *)0x0), (int)lVar11 == 0) {
        iVar8 = test_readstanza(ptr);
        if (iVar8 == 0) {
          local_cc = 0;
          break;
        }
        iVar8 = *(int *)((long)ptr + 0x24);
        if (iVar8 != 0) {
          puVar15 = (undefined8 *)((long)ptr + 0x28);
          plVar16 = &local_a8;
          for (lVar11 = 0xc; lVar11 != 0; lVar11 = lVar11 + -1) {
            *plVar16 = 0;
            plVar16 = plVar16 + (ulong)bVar17 * -2 + 1;
          }
          if (0 < iVar8) {
            bVar7 = false;
            iVar8 = 0;
            lVar11 = 0;
            bVar6 = false;
            bVar5 = false;
            bVar4 = false;
            bVar3 = false;
LAB_001001ae:
            local_b0 = "";
            iVar9 = OPENSSL_strcasecmp(*puVar15,&_LC3);
            if (iVar9 == 0) {
              if (lVar11 != 0) {
                test_info("test/params_conversion_test.c",0x3f,"Line %d: multiple type lines");
                goto LAB_00100232;
              }
              lVar11 = puVar15[1];
              local_a8 = OSSL_PARAM_locate(params_10,lVar11);
              if (local_a8 == 0) {
                test_info("test/params_conversion_test.c",0x44,"Line %d: unknown type line");
                goto LAB_00100232;
              }
            }
            else {
              iVar9 = OPENSSL_strcasecmp(*puVar15,"int32");
              if (iVar9 == 0) {
                if (bVar3) {
                  test_info("test/params_conversion_test.c",0x49,"Line %d: multiple int32 lines");
                  goto LAB_00100232;
                }
                iVar9 = OPENSSL_strcasecmp(puVar15[1],"invalid");
                if (iVar9 != 0) {
                  local_78 = 1;
                  iVar12 = strtoimax((char *)puVar15[1],&local_b0,10);
                  local_a0 = (undefined4)iVar12;
                }
                bVar3 = true;
                cVar1 = *local_b0;
                goto joined_r0x0010020e;
              }
              iVar9 = OPENSSL_strcasecmp(*puVar15,"int64");
              if (iVar9 == 0) {
                if (bVar4) {
                  test_info("test/params_conversion_test.c",0x52,"Line %d: multiple int64 lines");
                  goto LAB_00100232;
                }
                iVar9 = OPENSSL_strcasecmp(puVar15[1],"invalid");
                if (iVar9 != 0) {
                  local_74 = 1;
                  local_98 = strtoimax((char *)puVar15[1],&local_b0,10);
                }
                bVar4 = true;
              }
              else {
                iVar9 = OPENSSL_strcasecmp(*puVar15,"uint32");
                if (iVar9 == 0) {
                  if (bVar5) {
                    test_info("test/params_conversion_test.c",0x5b,"Line %d: multiple uint32 lines")
                    ;
                    goto LAB_00100232;
                  }
                  iVar9 = OPENSSL_strcasecmp(puVar15[1],"invalid");
                  if (iVar9 != 0) {
                    local_70 = 1;
                    uVar13 = strtoumax((char *)puVar15[1],&local_b0,10);
                    local_90 = (undefined4)uVar13;
                  }
                  bVar5 = true;
                }
                else {
                  iVar9 = OPENSSL_strcasecmp(*puVar15,"uint64");
                  if (iVar9 != 0) {
                    iVar9 = OPENSSL_strcasecmp(*puVar15,"double");
                    if (iVar9 == 0) {
                      if (!bVar7) {
                        iVar9 = OPENSSL_strcasecmp(puVar15[1],"invalid");
                        if (iVar9 != 0) {
                          local_68 = 1;
                          local_80 = strtod((char *)puVar15[1],&local_b0);
                        }
                        bVar7 = true;
                        goto LAB_00100192;
                      }
                      test_info("test/params_conversion_test.c",0x6d,
                                "Line %d: multiple double lines");
                    }
                    else {
                      test_info("test/params_conversion_test.c",0x75,"Line %d: unknown keyword %s",
                                *(undefined4 *)((long)ptr + 0x10),*puVar15);
                    }
                    goto LAB_00100232;
                  }
                  if (bVar6) {
                    test_info("test/params_conversion_test.c",100,"Line %d: multiple uint64 lines");
                    goto LAB_00100232;
                  }
                  iVar9 = OPENSSL_strcasecmp(puVar15[1],"invalid");
                  if (iVar9 != 0) {
                    local_6c = 1;
                    local_88 = strtoumax((char *)puVar15[1],&local_b0,10);
                  }
                  bVar6 = true;
                }
              }
            }
LAB_00100192:
            cVar1 = *local_b0;
joined_r0x0010020e:
            if (cVar1 != '\0') {
              test_info("test/params_conversion_test.c",0x79,
                        "Line %d: extra characters at end \'%s\' for %s");
              goto LAB_00100232;
            }
            iVar8 = iVar8 + 1;
            puVar15 = puVar15 + 2;
            if (*(int *)((long)ptr + 0x24) <= iVar8) goto LAB_00100335;
            goto LAB_001001ae;
          }
          lVar11 = 0;
LAB_00100335:
          iVar8 = test_ptr("test/params_conversion_test.c",0x7f,&_LC3,lVar11);
          if (iVar8 == 0) {
            test_info("test/params_conversion_test.c",0x80,"Line %d: type not found");
          }
          else {
            iVar8 = OPENSSL_strcasecmp(lVar11,"int32");
            if (iVar8 == 0) {
              iVar8 = test_true("test/params_conversion_test.c",0x85,"def_i32");
              if ((iVar8 == 0) ||
                 (iVar8 = test_true("test/params_conversion_test.c",0x85,"pc->valid_i32"),
                 iVar8 == 0)) {
                test_note("errant int32 on line %d",*(undefined4 *)((long)ptr + 0x10));
              }
              else {
                local_58 = (undefined8 *)&datum_i32_8;
                local_60 = (undefined8 *)&ref_i32_9;
                ref_i32_9 = local_a0;
                datum_i32_8 = local_a0;
                local_50 = 4;
LAB_001005de:
                uVar2 = *(undefined4 *)((long)ptr + 0x10);
                if (local_78 == 0) {
                  OSSL_PARAM_get_int32(local_a8,&local_c8);
                  iVar8 = test_false("test/params_conversion_test.c",0xc1,
                                     "OSSL_PARAM_get_int32(pc->param, &i32)");
                  if (iVar8 != 0) {
                    uVar14 = ERR_get_error();
                    iVar8 = test_ulong_ne("test/params_conversion_test.c",0xc2,"ERR_get_error()",
                                          &_LC38,uVar14,0);
                    if (iVar8 != 0) {
LAB_00100673:
                      if (local_74 != 0) {
                        OSSL_PARAM_get_int64(local_a8,&local_c0);
                        iVar8 = test_true("test/params_conversion_test.c",0xdc,
                                          "OSSL_PARAM_get_int64(pc->param, &i64)");
                        if ((iVar8 == 0) ||
                           (iVar8 = test_true("test/params_conversion_test.c",0xdd,"i64 == pc->i64")
                           , iVar8 == 0)) {
                          test_note("unexpected conversion to int64 on line %d",uVar2);
                        }
                        else {
                          memset(local_58,0x2c,local_50);
                          OSSL_PARAM_set_int64(local_a8,local_c0);
                          iVar8 = test_true("test/params_conversion_test.c",0xe2,
                                            "OSSL_PARAM_set_int64(pc->param, i64)");
                          puVar15 = extraout_RDX;
                          if ((iVar8 != 0) &&
                             (puVar15 = local_60,
                             iVar8 = test_mem_eq("test/params_conversion_test.c",0xe3,"pc->datum",
                                                 "pc->ref",local_58,local_50,local_60,local_50),
                             iVar8 != 0)) goto LAB_001006ec;
                          test_note("unexpected valid conversion from int64 on line %d",uVar2,
                                    puVar15);
                        }
                        goto LAB_00100232;
                      }
                      OSSL_PARAM_get_int64(local_a8,&local_c0);
                      iVar8 = test_false("test/params_conversion_test.c",0xd6,
                                         "OSSL_PARAM_get_int64(pc->param, &i64)");
                      if (iVar8 != 0) {
                        uVar14 = ERR_get_error();
                        iVar8 = test_ulong_ne("test/params_conversion_test.c",0xd7,"ERR_get_error()"
                                              ,&_LC38,uVar14,0);
                        if (iVar8 != 0) {
LAB_001006ec:
                          if (local_70 != 0) {
                            OSSL_PARAM_get_uint32(local_a8,&local_c4);
                            iVar8 = test_true("test/params_conversion_test.c",0xf1,
                                              "OSSL_PARAM_get_uint32(pc->param, &u32)");
                            if ((iVar8 == 0) ||
                               (iVar8 = test_true("test/params_conversion_test.c",0xf2,
                                                  "u32 == pc->u32"), iVar8 == 0)) {
                              test_note("unexpected conversion to uint32 on line %d",uVar2);
                            }
                            else {
                              memset(local_58,0x2c,local_50);
                              OSSL_PARAM_set_uint32(local_a8,local_c4);
                              iVar8 = test_true("test/params_conversion_test.c",0xf7,
                                                "OSSL_PARAM_set_uint32(pc->param, u32)");
                              if ((iVar8 != 0) &&
                                 (iVar8 = test_mem_eq("test/params_conversion_test.c",0xf8,
                                                      "pc->datum","pc->ref",local_58,local_50,
                                                      local_60,local_50), iVar8 != 0))
                              goto LAB_00100763;
                              test_note("unexpected valid conversion from uint32 on line %d",uVar2);
                            }
                            goto LAB_00100232;
                          }
                          OSSL_PARAM_get_uint32(local_a8,&local_c4);
                          iVar8 = test_false("test/params_conversion_test.c",0xeb,
                                             "OSSL_PARAM_get_uint32(pc->param, &u32)");
                          if (iVar8 != 0) {
                            uVar14 = ERR_get_error();
                            iVar8 = test_ulong_ne("test/params_conversion_test.c",0xec,
                                                  "ERR_get_error()",&_LC38,uVar14,0);
                            if (iVar8 != 0) {
LAB_00100763:
                              if (local_6c != 0) {
                                OSSL_PARAM_get_uint64(local_a8,&local_b8);
                                iVar8 = test_true("test/params_conversion_test.c",0x106,
                                                  "OSSL_PARAM_get_uint64(pc->param, &u64)");
                                if ((iVar8 == 0) ||
                                   (iVar8 = test_true("test/params_conversion_test.c",0x107,
                                                      "u64 == pc->u64"), iVar8 == 0)) {
                                  test_note("unexpected conversion to uint64 on line %d",uVar2);
                                }
                                else {
                                  memset(local_58,0x2c,local_50);
                                  OSSL_PARAM_set_uint64(local_a8,local_b8);
                                  iVar8 = test_true("test/params_conversion_test.c",0x10c,
                                                    "OSSL_PARAM_set_uint64(pc->param, u64)");
                                  if ((iVar8 != 0) &&
                                     (iVar8 = test_mem_eq("test/params_conversion_test.c",0x10d,
                                                          "pc->datum","pc->ref",local_58,local_50,
                                                          local_60,local_50), iVar8 != 0))
                                  goto LAB_001007dc;
                                  test_note("unexpected valid conversion from uint64 on line %d",
                                            uVar2);
                                }
                                goto LAB_00100232;
                              }
                              OSSL_PARAM_get_uint64(local_a8,&local_b8);
                              iVar8 = test_false("test/params_conversion_test.c",0x100,
                                                 "OSSL_PARAM_get_uint64(pc->param, &u64)");
                              if (iVar8 != 0) {
                                uVar14 = ERR_get_error();
                                iVar8 = test_ulong_ne("test/params_conversion_test.c",0x101,
                                                      "ERR_get_error()",&_LC38,uVar14,0);
                                if (iVar8 != 0) {
LAB_001007dc:
                                  if (local_68 == 0) {
                                    OSSL_PARAM_get_double(local_a8,&local_b0);
                                    iVar8 = test_false("test/params_conversion_test.c",0x115,
                                                       "OSSL_PARAM_get_double(pc->param, &d)");
                                    if (iVar8 != 0) {
                                      uVar14 = ERR_get_error();
                                      iVar8 = test_ulong_ne("test/params_conversion_test.c",0x116,
                                                            "ERR_get_error()",&_LC38,uVar14,0);
                                      if (iVar8 != 0) goto LAB_001000d0;
                                    }
                                    test_note("unexpected valid conversion to double on line %d",
                                              uVar2);
                                  }
                                  else {
                                    OSSL_PARAM_get_double(local_a8,&local_b0);
                                    iVar8 = test_true("test/params_conversion_test.c",0x11b,
                                                      "OSSL_PARAM_get_double(pc->param, &d)");
                                    if (iVar8 == 0) {
                                      test_note("unable to convert to double on line %d",uVar2);
                                    }
                                    else if (NAN((double)local_b0)) {
                                      iVar8 = test_false("test/params_conversion_test.c",300,
                                                         "pc->d == pc->d");
                                      if (iVar8 == 0) {
                                        test_note("unexpected NaN on line %d",uVar2);
                                      }
                                      else {
LAB_001010f5:
                                        memset(local_58,0x2c,local_50);
                                        OSSL_PARAM_set_double(local_b0,local_a8);
                                        iVar8 = test_true("test/params_conversion_test.c",0x135,
                                                          "OSSL_PARAM_set_double(pc->param, d)");
                                        puVar15 = extraout_RDX_00;
                                        if ((iVar8 != 0) &&
                                           (puVar15 = local_60,
                                           iVar8 = test_mem_eq("test/params_conversion_test.c",0x136
                                                               ,"pc->datum","pc->ref",local_58,
                                                               local_50,local_60,local_50),
                                           iVar8 != 0)) goto LAB_001000d0;
                                        test_note("unexpected valid conversion from double on line %d"
                                                  ,uVar2,puVar15);
                                      }
                                    }
                                    else {
                                      iVar8 = test_true("test/params_conversion_test.c",0x130,
                                                        "d == pc->d");
                                      if (iVar8 != 0) goto LAB_001010f5;
                                      test_note("unexpected conversion to double on line %d",uVar2);
                                    }
                                  }
                                  goto LAB_00100232;
                                }
                              }
                              test_note("unexpected valid conversion to uint64 on line %d",uVar2);
                              goto LAB_00100232;
                            }
                          }
                          test_note("unexpected valid conversion to uint32 on line %d",uVar2);
                          goto LAB_00100232;
                        }
                      }
                      test_note("unexpected valid conversion to int64 on line %d",uVar2);
                      goto LAB_00100232;
                    }
                  }
                  test_note("unexpected valid conversion to int32 on line %d",uVar2);
                }
                else {
                  OSSL_PARAM_get_int32(local_a8,&local_c8);
                  iVar8 = test_true("test/params_conversion_test.c",199,
                                    "OSSL_PARAM_get_int32(pc->param, &i32)");
                  if ((iVar8 == 0) ||
                     (iVar8 = test_true("test/params_conversion_test.c",200,"i32 == pc->i32"),
                     iVar8 == 0)) {
                    test_note("unexpected conversion to int32 on line %d",uVar2);
                  }
                  else {
                    memset(local_58,0x2c,local_50);
                    OSSL_PARAM_set_int32(local_a8,local_c8);
                    iVar8 = test_true("test/params_conversion_test.c",0xcd,
                                      "OSSL_PARAM_set_int32(pc->param, i32)");
                    if ((iVar8 != 0) &&
                       (iVar8 = test_mem_eq("test/params_conversion_test.c",0xce,"pc->datum",
                                            "pc->ref",local_58,local_50,local_60,local_50),
                       iVar8 != 0)) goto LAB_00100673;
                    test_note("unexpected valid conversion from int32 on line %d",uVar2);
                  }
                }
              }
            }
            else {
              iVar8 = OPENSSL_strcasecmp(lVar11,"int64");
              if (iVar8 == 0) {
                iVar8 = test_true("test/params_conversion_test.c",0x8e,"def_i64");
                if ((iVar8 != 0) &&
                   (iVar8 = test_true("test/params_conversion_test.c",0x8e,"pc->valid_i64"),
                   iVar8 != 0)) {
                  datum_i64_6 = local_98;
                  local_58 = &datum_i64_6;
                  local_60 = &ref_i64_7;
                  local_50 = 8;
                  ref_i64_7 = datum_i64_6;
                  goto LAB_001005de;
                }
                test_note("errant int64 on line %d",*(undefined4 *)((long)ptr + 0x10));
              }
              else {
                iVar8 = OPENSSL_strcasecmp(lVar11,"uint32");
                if (iVar8 == 0) {
                  iVar8 = test_true("test/params_conversion_test.c",0x97,"def_u32");
                  if ((iVar8 != 0) &&
                     (iVar8 = test_true("test/params_conversion_test.c",0x97,"pc->valid_u32"),
                     iVar8 != 0)) {
                    local_58 = (undefined8 *)&datum_u32_4;
                    local_60 = (undefined8 *)&ref_u32_5;
                    ref_u32_5 = local_90;
                    datum_u32_4 = local_90;
                    local_50 = 4;
                    goto LAB_001005de;
                  }
                  test_note("errant uint32 on line %d",*(undefined4 *)((long)ptr + 0x10));
                }
                else {
                  iVar8 = OPENSSL_strcasecmp(lVar11,"uint64");
                  if (iVar8 == 0) {
                    iVar8 = test_true("test/params_conversion_test.c",0xa0,"def_u64");
                    if ((iVar8 != 0) &&
                       (iVar8 = test_true("test/params_conversion_test.c",0xa0,"pc->valid_u64"),
                       iVar8 != 0)) {
                      datum_u64_2 = local_88;
                      local_58 = &datum_u64_2;
                      local_60 = &ref_u64_3;
                      local_50 = 8;
                      ref_u64_3 = datum_u64_2;
                      goto LAB_001005de;
                    }
                    test_note("errant uint64 on line %d",*(undefined4 *)((long)ptr + 0x10));
                  }
                  else {
                    iVar8 = OPENSSL_strcasecmp(lVar11,"double");
                    if (iVar8 == 0) {
                      iVar8 = test_true("test/params_conversion_test.c",0xa9,"def_d");
                      if ((iVar8 != 0) &&
                         (iVar8 = test_true("test/params_conversion_test.c",0xa9,"pc->valid_d"),
                         iVar8 != 0)) {
                        datum_d_0 = local_80;
                        local_58 = &datum_d_0;
                        local_50 = 8;
                        local_60 = &ref_d_1;
                        ref_d_1 = datum_d_0;
                        goto LAB_001005de;
                      }
                      test_note("errant double on line %d",*(undefined4 *)((long)ptr + 0x10));
                    }
                    else {
                      test_error("test/params_conversion_test.c",0xb2,"type unknown at line %d");
                    }
                  }
                }
              }
            }
          }
LAB_00100232:
          local_cc = 0;
        }
LAB_001000d0:
        test_clearstanza(ptr);
      }
      test_end_file(ptr);
      CRYPTO_free(ptr);
      goto LAB_0010006e;
    }
    CRYPTO_free(ptr);
  }
  local_cc = 0;
LAB_0010006e:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_cc;
}



undefined1 * test_get_options(void)

{
  return options_11;
}



undefined8 setup_tests(void)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = test_skip_common_options();
  if (iVar1 == 0) {
    test_error("test/params_conversion_test.c",0x168,"Error parsing test options\n");
  }
  else {
    uVar2 = test_get_argument_count();
    if (uVar2 != 0) {
      add_all_tests("run_param_file_tests",0x100000,uVar2 & 0xffffffff,1);
      return 1;
    }
  }
  return 0;
}


