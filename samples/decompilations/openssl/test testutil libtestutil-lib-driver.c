
void test_verdict(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 int param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                 undefined8 param_13,undefined8 param_14)

{
  char in_AL;
  long in_FS_OFFSET;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined1 *local_e0;
  undefined1 *local_d8;
  long local_d0;
  undefined1 local_c8 [16];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_28;
  
  if (in_AL != '\0') {
    local_98 = param_1;
    local_88 = param_2;
    local_78 = param_3;
    local_68 = param_4;
    local_58 = param_5;
    local_48 = param_6;
    local_38 = param_7;
    local_28 = param_8;
  }
  local_d0 = *(long *)(in_FS_OFFSET + 0x28);
  local_b8 = param_11;
  local_b0 = param_12;
  local_a8 = param_13;
  local_a0 = param_14;
  test_flush_stdout();
  test_flush_stderr();
  if (param_9 == 0) {
    if (rand_order == 0) {
      test_printf_tapout("# OPENSSL_TEST_RAND_SEED=%d\n",seed);
    }
    else {
      test_printf_tapout("# OPENSSL_TEST_RAND_ORDER=%d\n",seed);
    }
    test_printf_tapout(&_LC3,"not ok");
    local_e0 = &stack0x00000008;
    local_d8 = local_c8;
    local_e8 = 0x10;
    local_e4 = 0x30;
    test_vprintf_tapout(param_10,&local_e8);
  }
  else {
    test_printf_tapout(&_LC3,&_LC2);
    local_e0 = &stack0x00000008;
    local_d8 = local_c8;
    local_e8 = 0x10;
    local_e4 = 0x30;
    test_vprintf_tapout(param_10,&local_e8);
    if (param_9 == 0x7b) {
      test_printf_tapout(" # skipped");
    }
  }
  test_printf_tapout(&_LC5);
  test_flush_tapout();
  if (local_d0 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void add_test(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = (long)num_tests;
  num_test_cases = num_test_cases + 1;
  (&all_tests)[lVar1 * 4] = param_1;
  *(undefined8 *)(&DAT_00100f88 + lVar1 * 0x20) = param_2;
  (&DAT_00100f98)[lVar1 * 8] = 0xffffffff;
  num_tests = num_tests + 1;
  return;
}



void add_all_tests(undefined8 param_1,undefined8 param_2,int param_3,int param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = (long)num_tests;
  lVar3 = lVar2 * 0x20;
  num_tests = num_tests + 1;
  *(undefined8 *)(&DAT_00100f90 + lVar3) = param_2;
  (&all_tests)[lVar2 * 4] = param_1;
  (&DAT_00100f98)[lVar2 * 8] = param_3;
  (&DAT_00100f9c)[lVar3] = (&DAT_00100f9c)[lVar3] & 0xfe | (byte)param_4 & 1;
  iVar1 = num_test_cases + param_3;
  if (param_4 != 0) {
    iVar1 = num_test_cases + 1;
  }
  num_test_cases = iVar1;
  return;
}



bool setup_test_framework(undefined4 param_1,undefined8 param_2)

{
  char *pcVar1;
  char *__nptr;
  char *__nptr_00;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  pcVar1 = getenv("OPENSSL_TEST_RAND_ORDER");
  __nptr = getenv("OPENSSL_TEST_RAND_SEED");
  __nptr_00 = getenv("HARNESS_OSSL_LEVEL");
  if (__nptr_00 != (char *)0x0) {
    lVar2 = strtol(__nptr_00,(char **)0x0,10);
    level = (int)lVar2 * 4;
  }
  test_adjust_streams_tap_level();
  if (pcVar1 == (char *)0x0) {
    if (__nptr == (char *)0x0) {
      uVar3 = time((time_t *)0x0);
      seed = (int)uVar3;
      uVar3 = uVar3 & 0xffffffff;
      goto LAB_001002e3;
    }
  }
  else {
    rand_order = 1;
    __nptr = pcVar1;
  }
  uVar3 = strtol(__nptr,(char **)0x0,10);
  seed = (int)uVar3;
  uVar3 = uVar3 & 0xffffffff;
  if (seed < 1) {
    uVar3 = time((time_t *)0x0);
    seed = (int)uVar3;
    uVar3 = uVar3 & 0xffffffff;
  }
LAB_001002e3:
  test_random_seed(uVar3);
  uVar4 = test_get_options();
  lVar2 = opt_init(param_1,param_2,uVar4);
  return lVar2 != 0;
}



void set_test_title(char *param_1)

{
  free(test_title);
  if (param_1 != (char *)0x0) {
    param_1 = strdup(param_1);
  }
  test_title = param_1;
  return;
}



undefined4 pulldown_test_framework(undefined4 param_1)

{
  set_test_title(0);
  return param_1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong run_tests(undefined8 param_1)

{
  uint *puVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  char *__s1;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  undefined1 (*pauVar16) [16];
  undefined1 (*pauVar17) [16];
  undefined *puVar18;
  undefined8 *puVar19;
  uint *puVar20;
  long lVar21;
  uint uVar22;
  int iVar23;
  undefined *puVar24;
  long in_FS_OFFSET;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  int local_108c;
  int local_1080;
  int local_1074;
  uint local_104c;
  uint local_1048 [1026];
  long local_40;
  
  puVar18 = &_LC10;
  __s1 = (char *)0x0;
  puVar24 = &_LC10;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  opt_begin();
LAB_001003fd:
  do {
    iVar4 = opt_next();
    uVar14 = num_tests;
    if (iVar4 == 0) {
      iVar4 = 0;
      if (__s1 == (char *)0x0) goto LAB_0010060c;
      if ((int)num_tests < 1) goto LAB_001005f5;
      puVar19 = &all_tests;
      uVar13 = 0;
      goto LAB_001005c5;
    }
    if (iVar4 == -1) goto LAB_00100450;
  } while (5 < iVar4 - 500U);
  switch(iVar4) {
  case 0x1f5:
    show_list = 1;
    goto LAB_001003fd;
  case 0x1f6:
    puVar24 = (undefined *)opt_flag();
    __s1 = (char *)opt_arg();
    goto LAB_001003fd;
  case 0x1f7:
    break;
  case 0x1f8:
    uVar9 = opt_arg();
    iVar4 = opt_int(uVar9);
    if (iVar4 == 0) goto LAB_00100450;
    level = local_104c * 4;
    test_adjust_streams_tap_level();
    goto LAB_001003fd;
  case 0x1f9:
    uVar9 = opt_arg();
    iVar4 = opt_int(uVar9);
    if (iVar4 == 0) goto LAB_00100450;
    uVar8 = (ulong)local_104c;
    seed = local_104c;
    if ((int)local_104c < 1) {
      uVar8 = time((time_t *)0x0);
      seed = (uint)uVar8;
      uVar8 = uVar8 & 0xffffffff;
    }
    test_random_seed(uVar8);
    goto LAB_001003fd;
  default:
    uVar9 = test_get_options();
    opt_help(uVar9);
    uVar8 = 0;
    goto LAB_00100455;
  }
  puVar18 = (undefined *)opt_flag();
  uVar9 = opt_arg();
  iVar4 = opt_int(uVar9);
  if (iVar4 == 0) goto LAB_00100450;
  goto LAB_001003fd;
  while (puVar19 = puVar19 + 4, uVar13 = uVar22, uVar14 != uVar22) {
LAB_001005c5:
    iVar5 = strcmp(__s1,(char *)*puVar19);
    uVar22 = uVar13 + 1;
    if (iVar5 == 0) {
      single_test = uVar22;
      if ((int)uVar13 < (int)uVar14) goto LAB_0010060c;
      break;
    }
  }
LAB_001005f5:
  lVar10 = strtol(__s1,(char **)0x0,10);
  single_test = (uint)lVar10;
LAB_0010060c:
  if (single_test == 0xffffffff) {
    if (single_iter == -1) {
      if ((int)num_tests < 1) {
LAB_001008d5:
        test_printf_tapout("1..0 # Skipped: %s\n");
      }
      else if (show_list == 0) {
        if (0 < level) {
          test_printf_stdout("Subtest: %s\n",param_1);
          test_flush_stdout();
        }
        test_printf_tapout("1..%d\n");
      }
      goto LAB_00100640;
    }
    single_test = 1;
    if (0 < (int)num_tests) goto LAB_00100890;
LAB_00100432:
    test_printf_stderr("Invalid -%s value (Value must be a valid test name OR a value between %d..%d)\n"
                       ,puVar24,1);
  }
  else {
    if (((int)single_test < 1) || ((int)num_tests < (int)single_test)) goto LAB_00100432;
    if (single_iter == -1) {
LAB_00100640:
      test_flush_tapout();
      uVar8 = (ulong)(int)num_tests;
      if ((int)num_tests < 1) {
LAB_00100714:
        if ((int)uVar8 == 0) goto LAB_00100455;
      }
      else if (num_tests - 1 < 3) {
        uVar14 = 0;
LAB_001006ae:
        local_1048[(int)uVar14] = uVar14;
        uVar13 = uVar14 + 1;
        if ((int)uVar13 < (int)num_tests) {
          uVar14 = uVar14 + 2;
          local_1048[(int)uVar13] = uVar13;
          if ((int)uVar14 < (int)num_tests) {
            local_1048[(int)uVar14] = uVar14;
          }
          goto LAB_001006d5;
        }
        if ((rand_order != 0) && (num_tests != 1)) goto LAB_001006df;
      }
      else {
        pauVar16 = (undefined1 (*) [16])local_1048;
        auVar25 = __LC11;
        do {
          pauVar17 = pauVar16 + 1;
          auVar26._0_4_ = auVar25._0_4_ + __LC18;
          auVar26._4_4_ = auVar25._4_4_ + _UNK_001091c4;
          auVar26._8_4_ = auVar25._8_4_ + _UNK_001091c8;
          auVar26._12_4_ = auVar25._12_4_ + _UNK_001091cc;
          *pauVar16 = auVar25;
          pauVar16 = pauVar17;
          auVar25 = auVar26;
        } while ((undefined1 (*) [16])local_1048 + (uVar8 >> 2 & 0x3fffffff) != pauVar17);
        uVar14 = num_tests & 0xfffffffc;
        if ((uVar8 & 3) != 0) goto LAB_001006ae;
LAB_001006d5:
        if (rand_order != 0) {
LAB_001006df:
          puVar20 = local_1048 + uVar8;
          uVar14 = num_tests;
          do {
            uVar11 = (ulong)uVar14;
            uVar8 = test_random();
            puVar1 = puVar20 + -1;
            puVar20 = puVar20 + -1;
            uVar14 = uVar14 - 1;
            iVar5 = (int)((uVar8 & 0xffffffff) % uVar11);
            uVar13 = local_1048[iVar5];
            local_1048[iVar5] = *puVar1;
            *puVar20 = uVar13;
          } while (uVar14 != 1);
          uVar8 = (ulong)num_tests;
          goto LAB_00100714;
        }
      }
      lVar10 = 0;
      local_1080 = 0;
      local_1074 = 0;
      do {
        while( true ) {
          lVar21 = (long)(int)local_1048[lVar10];
          if ((single_test == 0xffffffff) || (single_test == local_1048[lVar10] + 1)) break;
LAB_00100788:
          lVar10 = lVar10 + 1;
          if ((int)uVar8 == (int)lVar10) goto LAB_00100850;
        }
        uVar9 = (&all_tests)[lVar21 * 4];
        if (show_list != 0) {
          if ((&DAT_00100f98)[lVar21 * 8] == -1) {
            test_printf_tapout("%d - %s\n");
          }
          else {
            test_printf_tapout("%d - %s (%d..%d)\n",(int)lVar10 + 1,uVar9,1);
          }
          test_flush_tapout();
          uVar8 = (ulong)num_tests;
          goto LAB_00100788;
        }
        iVar5 = local_1080 + 1;
        if ((&DAT_00100f98)[lVar21 * 8] != -1) {
          set_test_title(uVar9);
          if (((&DAT_00100f9c)[lVar21 * 0x20] & 1) != 0) {
            level = level + 4;
            test_adjust_streams_tap_level();
            if (single_iter == -1) {
              test_printf_stdout("Subtest: %s\n",test_title);
              test_printf_tapout("%d..%d\n",1,(&DAT_00100f98)[lVar21 * 8]);
              test_flush_stdout();
              test_flush_tapout();
            }
          }
          iVar6 = 1;
          uVar8 = (ulong)(uint)(&DAT_00100f98)[lVar21 * 8];
          if ((rand_order != 0) && (2 < (int)(&DAT_00100f98)[lVar21 * 8])) {
            do {
              do {
                uVar11 = test_random();
                uVar8 = (ulong)(uint)(&DAT_00100f98)[lVar21 * 8];
                uVar11 = (uVar11 & 0xffffffff) % uVar8;
                iVar6 = (int)uVar11;
                uVar12 = uVar8;
              } while (iVar6 == 0);
              do {
                iVar23 = (int)uVar11;
                uVar2 = (long)(int)uVar12 % (long)iVar23;
                uVar12 = uVar11;
                uVar11 = uVar2 & 0xffffffff;
              } while ((int)uVar2 != 0);
            } while (iVar23 != 1);
          }
          if ((int)uVar8 < 1) {
            if (((&DAT_00100f9c)[lVar21 * 0x20] & 1) != 0) {
              local_108c = 0x7b;
              goto LAB_00100b78;
            }
            if ((int)uVar8 == -1) {
              local_108c = 0x7b;
              goto LAB_00100ac4;
            }
          }
          else {
            iVar15 = -1;
            local_108c = 0x7b;
            iVar23 = 0;
            do {
              iVar23 = iVar23 + 1;
              uVar11 = (long)(iVar6 + iVar15) % (long)(int)uVar8;
              iVar15 = (int)uVar11;
              if ((single_iter == -1) || (single_iter == iVar23)) {
                ERR_clear_error();
                iVar7 = (**(code **)(&DAT_00100f90 + lVar21 * 0x20))(uVar11 & 0xffffffff);
                if (iVar7 == 0) {
                  ERR_print_errors_cb((cb *)&openssl_error_cb,(void *)0x0);
                  local_108c = 0;
                }
                else {
                  iVar3 = local_108c;
                  if ((iVar7 != 0x7b) && (iVar3 = 1, local_108c == 0)) {
                    iVar3 = local_108c;
                  }
                  local_108c = iVar3;
                  ERR_clear_error();
                }
                if (((&DAT_00100f9c)[lVar21 * 0x20] & 1) == 0) {
                  test_verdict(iVar7,"%d - %s - iteration %d",local_1080 + 1 + iVar4,test_title);
                }
                else {
                  test_verdict(iVar7,"%d - iteration %d",iVar4 + 1,iVar15 + 1);
                }
                uVar8 = (ulong)(uint)(&DAT_00100f98)[lVar21 * 8];
                iVar4 = iVar4 + 1;
              }
              iVar7 = (int)uVar8;
            } while (iVar23 < iVar7);
            if (((&DAT_00100f9c)[lVar21 * 0x20] & 1) != 0) {
LAB_00100b78:
              level = level + -4;
              test_adjust_streams_tap_level();
              iVar7 = (&DAT_00100f98)[lVar21 * 8];
            }
            local_1074 = local_1074 + (uint)(local_108c == 0);
            if ((iVar7 == -1) || (((&DAT_00100f9c)[lVar21 * 0x20] & 1) != 0)) {
LAB_00100ac4:
              test_verdict(local_108c,"%d - %s",iVar5,(&all_tests)[lVar21 * 4]);
            }
          }
          uVar8 = (ulong)num_tests;
          local_1080 = iVar5;
          goto LAB_00100788;
        }
        set_test_title(uVar9);
        ERR_clear_error();
        iVar6 = (**(code **)(&DAT_00100f88 + lVar21 * 0x20))();
        if (iVar6 == 0) {
          ERR_print_errors_cb((cb *)&openssl_error_cb,(void *)0x0);
          test_verdict(0,"%d - %s",iVar5,test_title);
          local_1074 = local_1074 + 1;
          uVar8 = (ulong)num_tests;
          local_1080 = iVar5;
          goto LAB_00100788;
        }
        ERR_clear_error();
        test_verdict(iVar6,"%d - %s",iVar5,test_title);
        uVar8 = (ulong)num_tests;
        lVar10 = lVar10 + 1;
        local_1080 = iVar5;
      } while (num_tests != (uint)lVar10);
LAB_00100850:
      uVar8 = (ulong)(local_1074 != 0);
      goto LAB_00100455;
    }
LAB_00100890:
    lVar10 = (long)(int)(single_test - 1);
    if ((&DAT_00100f98)[lVar10 * 8] == -1) {
      test_printf_stderr("-%s option is not valid for test %d:%s\n",puVar18,single_test,
                         (&all_tests)[lVar10 * 4]);
    }
    else {
      if ((single_iter <= (int)(&DAT_00100f98)[lVar10 * 8]) && (0 < single_iter)) {
        if ((int)num_tests < 1) goto LAB_001008d5;
        goto LAB_00100640;
      }
      test_printf_stderr("Invalid -%s value for test %d:%s\t(Value must be in the range %d..%d)\n",
                         puVar18,single_test,(&all_tests)[lVar10 * 4],1);
    }
  }
LAB_00100450:
  uVar8 = 1;
LAB_00100455:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar8;
}



char * glue_strings(long *param_1,long *param_2)

{
  int iVar1;
  size_t sVar2;
  char *pcVar3;
  long *plVar4;
  char *__src;
  long lVar5;
  char *__dest;
  
  pcVar3 = (char *)*param_1;
  if (pcVar3 == (char *)0x0) {
    iVar1 = 1;
    lVar5 = 0;
  }
  else {
    plVar4 = param_1 + 1;
    lVar5 = 0;
    do {
      sVar2 = strlen(pcVar3);
      pcVar3 = (char *)*plVar4;
      plVar4 = plVar4 + 1;
      lVar5 = lVar5 + sVar2;
    } while (pcVar3 != (char *)0x0);
    iVar1 = (int)lVar5 + 1;
  }
  if (param_2 != (long *)0x0) {
    *param_2 = lVar5;
  }
  pcVar3 = (char *)CRYPTO_malloc(iVar1,"test/testutil/driver.c",0x1ae);
  iVar1 = test_ptr("test/testutil/driver.c",0x1ae,"ret = p = OPENSSL_malloc(len + 1)",pcVar3);
  if (iVar1 != 0) {
    __src = (char *)*param_1;
    if (__src != (char *)0x0) {
      plVar4 = param_1 + 1;
      __dest = pcVar3;
      do {
        strcpy(__dest,__src);
        sVar2 = strlen(__dest);
        __src = (char *)*plVar4;
        __dest = __dest + sVar2;
        plVar4 = plVar4 + 1;
      } while (__src != (char *)0x0);
    }
    return pcVar3;
  }
  return (char *)0x0;
}



long test_mk_file_path(char *param_1,char *param_2)

{
  size_t sVar1;
  size_t sVar2;
  long lVar3;
  long lVar4;
  
  sVar1 = strlen(param_2);
  if (param_1 == (char *)0x0) {
    lVar4 = sVar1 + 2;
    lVar3 = CRYPTO_zalloc(lVar4,"test/testutil/driver.c",0x1c2);
    if (lVar3 == 0) {
      return 0;
    }
  }
  else {
    sVar2 = strlen(param_1);
    lVar4 = sVar1 + 2 + sVar2;
    lVar3 = CRYPTO_zalloc(lVar4,"test/testutil/driver.c",0x1c2);
    if (lVar3 == 0) {
      return 0;
    }
    if (sVar2 != 0) {
      OPENSSL_strlcpy(lVar3,param_1,lVar4);
      OPENSSL_strlcat(lVar3,&_LC27,lVar4);
    }
  }
  OPENSSL_strlcat(lVar3,param_2,lVar4);
  return lVar3;
}


