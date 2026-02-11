
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
  *(undefined8 *)(&DAT_00100ee8 + lVar1 * 0x20) = param_2;
  (&DAT_00100ef8)[lVar1 * 8] = 0xffffffff;
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
  *(undefined8 *)(&DAT_00100ef0 + lVar3) = param_2;
  (&all_tests)[lVar2 * 4] = param_1;
  (&DAT_00100ef8)[lVar2 * 8] = param_3;
  (&DAT_00100efc)[lVar3] = (&DAT_00100efc)[lVar3] & 0xfe | (byte)param_4 & 1;
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



uint run_tests(undefined8 param_1)

{
  int *piVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *__s1;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  undefined *puVar15;
  undefined8 *puVar16;
  int *piVar17;
  long lVar18;
  long lVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  undefined *puVar24;
  long in_FS_OFFSET;
  char cVar25;
  int local_1070;
  uint local_104c;
  int local_1048 [1026];
  long local_40;
  
  puVar15 = &_LC10;
  __s1 = (char *)0x0;
  puVar24 = &_LC10;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  opt_begin();
LAB_001003fd:
  do {
    iVar3 = opt_next();
    uVar14 = num_tests;
    if (iVar3 == 0) {
      iVar3 = 0;
      if (__s1 == (char *)0x0) goto LAB_0010060c;
      if ((int)num_tests < 1) goto LAB_001005f5;
      puVar16 = &all_tests;
      uVar20 = 0;
      goto LAB_001005c5;
    }
    if (iVar3 == -1) goto LAB_00100450;
  } while (5 < iVar3 - 500U);
  switch(iVar3) {
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
    uVar6 = opt_arg();
    iVar3 = opt_int(uVar6);
    if (iVar3 == 0) goto LAB_00100450;
    level = local_104c * 4;
    test_adjust_streams_tap_level();
    goto LAB_001003fd;
  case 0x1f9:
    uVar6 = opt_arg();
    iVar3 = opt_int(uVar6);
    if (iVar3 == 0) goto LAB_00100450;
    uVar7 = (ulong)local_104c;
    seed = local_104c;
    if ((int)local_104c < 1) {
      uVar7 = time((time_t *)0x0);
      seed = (uint)uVar7;
      uVar7 = uVar7 & 0xffffffff;
    }
    test_random_seed(uVar7);
    goto LAB_001003fd;
  default:
    uVar6 = test_get_options();
    opt_help(uVar6);
    uVar14 = 0;
    goto LAB_00100455;
  }
  puVar15 = (undefined *)opt_flag();
  uVar6 = opt_arg();
  iVar3 = opt_int(uVar6);
  if (iVar3 == 0) goto LAB_00100450;
  goto LAB_001003fd;
  while (puVar16 = puVar16 + 4, uVar20 = uVar21, uVar14 != uVar21) {
LAB_001005c5:
    iVar4 = strcmp(__s1,(char *)*puVar16);
    uVar21 = uVar20 + 1;
    if (iVar4 == 0) {
      single_test = uVar21;
      if ((int)uVar20 < (int)uVar14) goto LAB_0010060c;
      break;
    }
  }
LAB_001005f5:
  lVar8 = strtol(__s1,(char **)0x0,10);
  single_test = (uint)lVar8;
LAB_0010060c:
  if (single_test == 0xffffffff) {
    if (single_iter == -1) {
      if ((int)num_tests < 1) {
LAB_00100875:
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
    if (0 < (int)num_tests) goto LAB_00100830;
LAB_00100432:
    test_printf_stderr("Invalid -%s value (Value must be a valid test name OR a value between %d..%d)\n"
                       ,puVar24,1);
  }
  else {
    if (((int)single_test < 1) || ((int)num_tests < (int)single_test)) goto LAB_00100432;
    if (single_iter == -1) {
LAB_00100640:
      test_flush_tapout();
      if ((int)num_tests < 1) {
LAB_001006cc:
        uVar14 = num_tests;
        if (num_tests == 0) goto LAB_00100455;
      }
      else {
        lVar8 = 0;
        if ((num_tests & 1) == 0) {
LAB_00100670:
          do {
            local_1048[lVar8] = (int)lVar8;
            lVar19 = lVar8 + 1;
            lVar8 = lVar8 + 2;
            local_1048[lVar19] = (int)lVar19;
          } while (lVar8 != (int)num_tests);
        }
        else {
          lVar8 = 1;
          local_1048[0] = 0;
          if ((long)(int)num_tests != 1) goto LAB_00100670;
        }
        if ((rand_order != 0) && (num_tests != 1)) {
          piVar17 = local_1048 + lVar8;
          uVar14 = num_tests;
          do {
            uVar9 = test_random();
            piVar1 = piVar17 + -1;
            piVar17 = piVar17 + -1;
            uVar7 = (ulong)uVar14;
            uVar14 = uVar14 - 1;
            iVar11 = (int)((uVar9 & 0xffffffff) % uVar7);
            iVar4 = local_1048[iVar11];
            local_1048[iVar11] = *piVar1;
            *piVar17 = iVar4;
          } while (uVar14 != 1);
          goto LAB_001006cc;
        }
      }
      lVar8 = 0;
      local_1070 = 0;
      iVar4 = 0;
      do {
        while( true ) {
          lVar19 = (long)local_1048[lVar8];
          if ((single_test == 0xffffffff) || (single_test == local_1048[lVar8] + 1U)) break;
LAB_00100732:
          lVar8 = lVar8 + 1;
          if (num_tests == (uint)lVar8) goto LAB_001007f0;
        }
        uVar6 = (&all_tests)[lVar19 * 4];
        if (show_list != 0) {
          if ((&DAT_00100ef8)[lVar19 * 8] == -1) {
            test_printf_tapout("%d - %s\n");
          }
          else {
            test_printf_tapout("%d - %s (%d..%d)\n",(int)lVar8 + 1,uVar6,1);
          }
          test_flush_tapout();
          goto LAB_00100732;
        }
        iVar11 = iVar4 + 1;
        if ((&DAT_00100ef8)[lVar19 * 8] != -1) {
          set_test_title(uVar6);
          if (((&DAT_00100efc)[lVar19 * 0x20] & 1) != 0) {
            level = level + 4;
            test_adjust_streams_tap_level();
            if (single_iter == -1) {
              test_printf_stdout("Subtest: %s\n",test_title);
              test_printf_tapout("%d..%d\n",1,(&DAT_00100ef8)[lVar19 * 8]);
              test_flush_stdout();
              test_flush_tapout();
            }
          }
          iVar13 = 1;
          uVar7 = (ulong)(uint)(&DAT_00100ef8)[lVar19 * 8];
          if ((rand_order != 0) && (2 < (int)(&DAT_00100ef8)[lVar19 * 8])) {
            do {
              do {
                uVar9 = test_random();
                uVar7 = (ulong)(uint)(&DAT_00100ef8)[lVar19 * 8];
                uVar9 = (uVar9 & 0xffffffff) % uVar7;
                iVar13 = (int)uVar9;
                uVar10 = uVar7;
              } while (iVar13 == 0);
              do {
                iVar23 = (int)uVar9;
                uVar2 = (long)(int)uVar10 % (long)iVar23;
                uVar10 = uVar9;
                uVar9 = uVar2 & 0xffffffff;
              } while ((int)uVar2 != 0);
            } while (iVar23 != 1);
          }
          if ((int)uVar7 < 1) {
            if (((&DAT_00100efc)[lVar19 * 0x20] & 1) != 0) {
              cVar25 = '{';
              goto LAB_00100b80;
            }
            iVar4 = iVar11;
            if ((int)uVar7 != -1) goto LAB_00100732;
            cVar25 = '{';
          }
          else {
            iVar12 = -1;
            lVar18 = lVar19 * 0x20;
            cVar25 = '{';
            iVar23 = 0;
            do {
              iVar23 = iVar23 + 1;
              uVar7 = (long)(iVar13 + iVar12) % (long)(int)uVar7;
              iVar12 = (int)uVar7;
              if ((single_iter == -1) || (single_iter == iVar23)) {
                ERR_clear_error();
                iVar5 = (**(code **)(&DAT_00100ef0 + lVar18))(uVar7 & 0xffffffff);
                if (iVar5 == 0) {
                  ERR_print_errors_cb((cb *)&openssl_error_cb,(void *)0x0);
                  cVar25 = '\0';
                }
                else {
                  if (iVar5 != 0x7b) {
                    cVar25 = cVar25 != '\0';
                  }
                  ERR_clear_error();
                }
                iVar22 = iVar3 + 1;
                if (((&DAT_00100efc)[lVar18] & 1) == 0) {
                  test_verdict(iVar5,"%d - %s - iteration %d",iVar4 + 1 + iVar3,test_title);
                  iVar3 = iVar22;
                }
                else {
                  test_verdict(iVar5,"%d - iteration %d",iVar22,iVar12 + 1);
                  iVar3 = iVar22;
                }
              }
              uVar14 = (&DAT_00100ef8)[lVar19 * 8];
              uVar7 = (ulong)uVar14;
            } while (iVar23 < (int)uVar14);
            if (((&DAT_00100efc)[lVar18] & 1) != 0) {
LAB_00100b80:
              level = level + -4;
              test_adjust_streams_tap_level();
              uVar14 = (&DAT_00100ef8)[lVar19 * 8];
            }
            local_1070 = local_1070 + (uint)(cVar25 == '\0');
            if ((uVar14 != 0xffffffff) &&
               (iVar4 = iVar11, ((&DAT_00100efc)[lVar19 * 0x20] & 1) == 0)) goto LAB_00100732;
          }
          test_verdict(cVar25,"%d - %s",iVar11,(&all_tests)[lVar19 * 4]);
          iVar4 = iVar11;
          goto LAB_00100732;
        }
        set_test_title(uVar6);
        ERR_clear_error();
        iVar4 = (**(code **)(&DAT_00100ee8 + lVar19 * 0x20))();
        if (iVar4 == 0) {
          ERR_print_errors_cb((cb *)&openssl_error_cb,(void *)0x0);
          test_verdict(0,"%d - %s",iVar11,test_title);
          local_1070 = local_1070 + 1;
          iVar4 = iVar11;
          goto LAB_00100732;
        }
        ERR_clear_error();
        test_verdict(iVar4,"%d - %s",iVar11,test_title);
        lVar8 = lVar8 + 1;
        iVar4 = iVar11;
      } while (num_tests != (uint)lVar8);
LAB_001007f0:
      uVar14 = (uint)(local_1070 != 0);
      goto LAB_00100455;
    }
LAB_00100830:
    lVar8 = (long)(int)(single_test - 1);
    if ((&DAT_00100ef8)[lVar8 * 8] == -1) {
      test_printf_stderr("-%s option is not valid for test %d:%s\n",puVar15,single_test,
                         (&all_tests)[lVar8 * 4]);
    }
    else {
      if ((single_iter <= (int)(&DAT_00100ef8)[lVar8 * 8]) && (0 < single_iter)) {
        if ((int)num_tests < 1) goto LAB_00100875;
        goto LAB_00100640;
      }
      test_printf_stderr("Invalid -%s value for test %d:%s\t(Value must be in the range %d..%d)\n",
                         puVar15,single_test,(&all_tests)[lVar8 * 4],1);
    }
  }
LAB_00100450:
  uVar14 = 1;
LAB_00100455:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar14;
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
      OPENSSL_strlcat(lVar3,&_LC25,lVar4);
    }
  }
  OPENSSL_strlcat(lVar3,param_2,lVar4);
  return lVar3;
}


