
undefined8 test_available_providers(void)

{
  int iVar1;
  undefined8 uVar2;
  
  libctx = OSSL_LIB_CTX_new();
  iVar1 = test_ptr("test/conf_include_test.c",0xd0,"libctx",libctx);
  if (iVar1 != 0) {
    iVar1 = test_ptr("test/conf_include_test.c",0xd3,"rel_conf_file",rel_conf_file);
    if ((iVar1 != 0) && (iVar1 = OSSL_LIB_CTX_load_config(libctx,rel_conf_file), iVar1 != 0)) {
      iVar1 = OSSL_PROVIDER_available(libctx,"default");
      if (iVar1 != 1) {
        test_note("Default provider is missing");
        return 0;
      }
      uVar2 = OSSL_PROVIDER_available(libctx,"legacy");
      if ((int)uVar2 != 1) {
        test_note("Legacy provider is missing");
        return 0;
      }
      return uVar2;
    }
    test_note("Failed to load config");
  }
  return 0;
}



bool test_check_overflow(void)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  long in_FS_OFFSET;
  bool bVar5;
  undefined8 local_60;
  char local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = 0;
  iVar3 = BIO_snprintf(local_58,0x18,"0%ld",0x7fffffffffffffff);
  setenv("FNORD",local_58,1);
  iVar4 = NCONF_get_number_e((CONF *)0x0,"missing","FNORD",&local_60);
  iVar4 = test_true("test/conf_include_test.c",0xbf,
                    "NCONF_get_number(NULL, \"missing\", \"FNORD\", &val)",iVar4 != 0);
  if ((iVar4 == 0) ||
     (iVar4 = test_long_eq("test/conf_include_test.c",0xc0,&_LC13,"LONG_MAX",local_60,
                           0x7fffffffffffffff), iVar4 == 0)) {
    bVar5 = false;
  }
  else {
    pcVar2 = local_58 + (long)iVar3 + -1;
    cVar1 = *pcVar2 + '\x01';
    *pcVar2 = cVar1;
    while ('9' < cVar1) {
      *pcVar2 = '0';
      cVar1 = pcVar2[-1] + '\x01';
      pcVar2[-1] = cVar1;
      pcVar2 = pcVar2 + -1;
    }
    setenv("FNORD",local_58,1);
    iVar3 = NCONF_get_number_e((CONF *)0x0,"missing","FNORD",&local_60);
    iVar3 = test_false("test/conf_include_test.c",199,
                       "NCONF_get_number(NULL, \"missing\", \"FNORD\", &val)",iVar3 != 0);
    bVar5 = iVar3 != 0;
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar5;
}



undefined8 test_check_null_numbers(void)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  iVar1 = setenv("FNORD","123",1);
  iVar1 = test_int_eq("test/conf_include_test.c",0xa0,"setenv(\"FNORD\", \"123\", 1)",&_LC15,iVar1,0
                     );
  if (iVar1 == 0) {
LAB_00100340:
    test_note("environment variable with NULL conf failed");
  }
  else {
    iVar1 = NCONF_get_number_e((CONF *)0x0,"missing","FNORD",&local_48);
    iVar1 = test_true("test/conf_include_test.c",0xa1,
                      "NCONF_get_number(NULL, \"missing\", \"FNORD\", &val)",iVar1 != 0);
    if (iVar1 == 0) goto LAB_00100340;
    iVar1 = test_long_eq("test/conf_include_test.c",0xa2,&_LC13,&_LC14,local_48,0x7b);
    if (iVar1 == 0) goto LAB_00100340;
    iVar1 = unsetenv("FNORD");
    iVar1 = test_int_eq("test/conf_include_test.c",0xab,"unsetenv(\"FNORD\")",&_LC15,iVar1,0);
    if (iVar1 != 0) {
      iVar1 = NCONF_get_number_e((CONF *)0x0,"missing","FNORD",&local_48);
      iVar1 = test_false("test/conf_include_test.c",0xac,
                         "NCONF_get_number(NULL, \"missing\", \"FNORD\", &val)",iVar1 != 0);
      if (iVar1 != 0) {
        uVar2 = 1;
        goto LAB_00100350;
      }
    }
    test_note("missing environment variable with NULL conf failed");
  }
  uVar2 = 0;
LAB_00100350:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 test_load_config(void)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  char *pcVar4;
  long in_FS_OFFSET;
  long local_50;
  ulong local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = NCONF_load_bio(conf,in,&local_50);
  iVar1 = test_int_gt("test/conf_include_test.c",0x56,"NCONF_load_bio(conf, in, &errline)",&_LC15,
                      iVar1,0);
  if (iVar1 == 0) {
LAB_00100489:
    if (expect_failure == 0) {
      test_note("Failure loading the configuration at line %ld",local_50);
      uVar2 = 0;
      goto LAB_0010049c;
    }
  }
  else {
    uVar3 = ERR_peek_error();
    iVar1 = test_int_eq("test/conf_include_test.c",0x57,"err = ERR_peek_error()",&_LC15,
                        uVar3 & 0xffffffff,0);
    if (iVar1 == 0) goto LAB_00100489;
    if (expect_failure != 0) {
      test_note("Failure expected but did not happen");
      uVar2 = 0;
      goto LAB_0010049c;
    }
    iVar1 = CONF_modules_load(conf,(char *)0x0,0);
    iVar1 = test_int_gt("test/conf_include_test.c",0x62,"CONF_modules_load(conf, NULL, 0)",&_LC15,
                        iVar1,0);
    if (iVar1 == 0) {
      test_note("Failed in CONF_modules_load");
      uVar2 = 0;
      goto LAB_0010049c;
    }
    local_48 = 0;
    iVar1 = NCONF_get_number_e(conf,"CA_default","default_days",(long *)&local_48);
    iVar1 = test_int_eq("test/conf_include_test.c",0x69,
                        "NCONF_get_number(conf, \"CA_default\", \"default_days\", &val)",&_LC28,
                        iVar1,1);
    if (iVar1 == 0) {
LAB_00100848:
      test_note("default_days incorrect");
      uVar2 = 0;
      goto LAB_0010049c;
    }
    iVar1 = test_int_eq("test/conf_include_test.c",0x6a,&_LC13,&_LC31,local_48 & 0xffffffff,0x16d);
    if (iVar1 == 0) goto LAB_00100848;
    local_48 = 0;
    iVar1 = NCONF_get_number_e(conf,"req","default_bits",(long *)&local_48);
    iVar1 = test_int_eq("test/conf_include_test.c",0x71,
                        "NCONF_get_number(conf, \"req\", \"default_bits\", &val)",&_LC28,iVar1,1);
    if (iVar1 == 0) {
LAB_00100878:
      test_note("default_bits incorrect");
      uVar2 = 0;
      goto LAB_0010049c;
    }
    iVar1 = test_int_eq("test/conf_include_test.c",0x72,&_LC13,&_LC36,local_48 & 0xffffffff,0x800);
    if (iVar1 == 0) goto LAB_00100878;
    pcVar4 = NCONF_get_string(conf,"req_distinguished_name","countryName_default");
    iVar1 = test_ptr("test/conf_include_test.c",0x79,&_LC39,pcVar4);
    if (iVar1 == 0) {
LAB_0010088d:
      test_note("countryName_default incorrect");
      uVar2 = 0;
      goto LAB_0010049c;
    }
    iVar1 = test_str_eq("test/conf_include_test.c",0x79,&_LC39,&_LC42,pcVar4,&_LC41);
    if (iVar1 == 0) goto LAB_0010088d;
    if (test_providers != 0) {
      local_48 = 0;
      iVar1 = NCONF_get_number_e(conf,"null_sect","activate",(long *)&local_48);
      iVar1 = test_int_eq("test/conf_include_test.c",0x81,
                          "NCONF_get_number(conf, \"null_sect\", \"activate\", &val)",&_LC28,iVar1,1
                         );
      if (iVar1 != 0) {
        iVar1 = test_int_eq("test/conf_include_test.c",0x82,&_LC13,&_LC28,local_48 & 0xffffffff,1);
        if (iVar1 != 0) {
          local_48 = 0;
          iVar1 = NCONF_get_number_e(conf,"default_sect","activate",(long *)&local_48);
          iVar1 = test_int_eq("test/conf_include_test.c",0x87,
                              "NCONF_get_number(conf, \"default_sect\", \"activate\", &val)",&_LC28,
                              iVar1,1);
          if (iVar1 != 0) {
            iVar1 = test_int_eq("test/conf_include_test.c",0x88,&_LC13,&_LC28,local_48 & 0xffffffff,
                                1);
            if (iVar1 != 0) {
              local_48 = 0;
              iVar1 = NCONF_get_number_e(conf,"legacy_sect","activate",(long *)&local_48);
              iVar1 = test_int_eq("test/conf_include_test.c",0x8d,
                                  "NCONF_get_number(conf, \"legacy_sect\", \"activate\", &val)",
                                  &_LC28,iVar1,1);
              if (iVar1 != 0) {
                iVar1 = test_int_eq("test/conf_include_test.c",0x8e,&_LC13,&_LC28,
                                    local_48 & 0xffffffff,1);
                if (iVar1 != 0) goto LAB_00100497;
              }
              test_note("legacy provider not activated");
              uVar2 = 0;
              goto LAB_0010049c;
            }
          }
          test_note("default provider not activated");
          uVar2 = 0;
          goto LAB_0010049c;
        }
      }
      test_note("null provider not activated");
      uVar2 = 0;
      goto LAB_0010049c;
    }
  }
LAB_00100497:
  uVar2 = 1;
LAB_0010049c:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined1 * test_get_options(void)

{
  return test_options_0;
}



undefined8 setup_tests(void)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  
  conf = NCONF_new((CONF_METHOD *)0x0);
  iVar1 = test_ptr("test/conf_include_test.c",0xfc,"conf = NCONF_new(NULL)",conf);
  if (iVar1 != 0) {
LAB_00100932:
    do {
      iVar1 = opt_next();
      while( true ) {
        if (iVar1 == 0) {
          pcVar2 = (char *)test_get_argument(0);
          iVar1 = test_ptr("test/conf_include_test.c",0x10e,"conf_file",pcVar2);
          if (iVar1 != 0) {
            in = BIO_new_file(pcVar2,"r");
            iVar1 = test_ptr("test/conf_include_test.c",0x10f,"in = BIO_new_file(conf_file, \"r\")",
                             in);
            if (iVar1 != 0) {
              pcVar2 = CRYPTO_strdup(pcVar2,"test/conf_include_test.c",0x2a);
              if (pcVar2 == (char *)0x0) {
                pcVar4 = (char *)0x0;
              }
              else {
                pcVar4 = pcVar2;
                pcVar5 = (char *)0x0;
                while (pcVar3 = strchr(pcVar4,0x2f), pcVar3 != (char *)0x0) {
                  pcVar4 = pcVar3 + 1;
                  pcVar5 = pcVar3;
                }
                pcVar4 = (char *)0x0;
                if (pcVar5 != (char *)0x0) {
                  *pcVar5 = '\0';
                  test_note("changing path to %s",pcVar2);
                  iVar1 = chdir(pcVar2);
                  if (iVar1 == 0) {
                    pcVar4 = CRYPTO_strdup(pcVar5 + 1,"test/conf_include_test.c",0x3e);
                  }
                }
                CRYPTO_free(pcVar2);
              }
              rel_conf_file = pcVar4;
              iVar1 = test_ptr("test/conf_include_test.c",0x119,"rel_conf_file",pcVar4);
              if (iVar1 == 0) {
                test_note("Unable to change path");
                return 0;
              }
              add_test("test_load_config",test_load_config);
              add_test("test_check_null_numbers",test_check_null_numbers);
              add_test("test_check_overflow",test_check_overflow);
              if (test_providers != 0) {
                add_test("test_available_providers",0x100000);
              }
              return 1;
            }
          }
          test_note("Unable to open the file argument");
          return 0;
        }
        if (iVar1 == 2) {
          test_providers = 1;
          goto LAB_00100932;
        }
        if (2 < iVar1) break;
        if (iVar1 != 1) {
          return 0;
        }
        expect_failure = 1;
        iVar1 = opt_next();
      }
    } while (iVar1 - 500U < 6);
  }
  return 0;
}



void cleanup_tests(void)

{
  CRYPTO_free(rel_conf_file);
  BIO_vfree(in);
  NCONF_free(conf);
  CONF_modules_unload(1);
  return;
}


