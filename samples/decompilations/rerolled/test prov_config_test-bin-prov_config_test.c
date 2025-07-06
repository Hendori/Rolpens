/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ulong test_path_config(void) {
   int iVar1;
   uint uVar2;
   char *pcVar3;
   size_t sVar4;
   char *__dest;
   undefined8 uVar5;
   undefined8 uVar6;
   ulong uVar7;
   long in_FS_OFFSET;
   stat local_b8;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   pcVar3 = getenv("OPENSSL_MODULES");
   iVar1 = test_ptr("test/prov_config_test.c", 0x51, "module_path", pcVar3);
   if (iVar1 != 0) {
      sVar4 = strlen(pcVar3);
      __dest = (char*)CRYPTO_zalloc(sVar4 + 0x13, "test/prov_config_test.c", 0x54);
      iVar1 = test_ptr("test/prov_config_test.c", 0x55, "full_path", __dest);
      if (iVar1 != 0) {
         pcVar3 = stpcpy(__dest, pcVar3);
         uVar5 = _UNK_00100968;
         *(undefined8*)pcVar3 = __LC11;
         *(undefined8*)( pcVar3 + 8 ) = uVar5;
         for (int i = 0; i < 3; i++) {
            pcVar3[( i + 15 )] = '.';
         }

         pcVar3[0x12] = '\0';
         test_info("test/prov_config_test.c", 0x5a, "full path is %s", __dest);
         iVar1 = stat(__dest, &local_b8);
         CRYPTO_free(__dest);
         if (iVar1 == -1) {
            uVar7 = test_skip("test/prov_config_test.c", 0x5e, "Skipping modulepath test as provider not present");
            goto LAB_00100055;
         }

         iVar1 = test_ptr("test/prov_config_test.c", 0x60, "pathedconfig", pathedconfig);
         if (iVar1 != 0) {
            uVar5 = OSSL_LIB_CTX_new();
            iVar1 = test_ptr("test/prov_config_test.c", 100, &_LC7, uVar5);
            if (iVar1 != 0) {
               iVar1 = OSSL_LIB_CTX_load_config(uVar5, pathedconfig);
               iVar1 = test_true("test/prov_config_test.c", 0x67, "OSSL_LIB_CTX_load_config(ctx, pathedconfig)", iVar1 != 0);
               if (iVar1 == 0) {
                  LAB_00100200:uVar2 = 0;
               }
 else {
                  uVar6 = OSSL_PROVIDER_load(uVar5, &_LC9);
                  iVar1 = test_ptr("test/prov_config_test.c", 0x6b, "prov = OSSL_PROVIDER_load(ctx, \"test\")", uVar6);
                  if (iVar1 == 0) goto LAB_00100200;
                  OSSL_PROVIDER_unload(uVar6);
                  uVar2 = 1;
               }

               OSSL_LIB_CTX_free(uVar5);
               uVar7 = (ulong)uVar2;
               goto LAB_00100055;
            }

         }

      }

   }

   uVar7 = 0;
   LAB_00100055:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar7;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
bool test_double_config(void) {
   int iVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   bool bVar4;
   uVar2 = OSSL_LIB_CTX_new();
   iVar1 = test_ptr("test/prov_config_test.c", 0x1d, &_LC7, uVar2);
   if (iVar1 == 0) {
      return false;
   }

   iVar1 = OSSL_LIB_CTX_load_config(uVar2, configfile);
   iVar1 = test_true("test/prov_config_test.c", 0x20, "OSSL_LIB_CTX_load_config(ctx, configfile)", iVar1 != 0);
   if (iVar1 != 0) {
      iVar1 = OSSL_LIB_CTX_load_config(uVar2, configfile);
      iVar1 = test_true("test/prov_config_test.c", 0x22, "OSSL_LIB_CTX_load_config(ctx, configfile)", iVar1 != 0);
      if (iVar1 != 0) {
         uVar3 = EVP_MD_fetch(uVar2, "SHA2-256", 0);
         iVar1 = test_ptr("test/prov_config_test.c", 0x27, "sha256", uVar3);
         bVar4 = iVar1 != 0;
         goto LAB_001002c0;
      }

   }

   uVar3 = 0;
   bVar4 = false;
   LAB_001002c0:EVP_MD_free(uVar3);
   OSSL_LIB_CTX_free(uVar2);
   return bVar4;
}
bool test_recursive_config(void) {
   int iVar1;
   uint uVar2;
   undefined8 uVar3;
   ulong uVar4;
   bool bVar5;
   uVar3 = OSSL_LIB_CTX_new();
   iVar1 = test_ptr("test/prov_config_test.c", 0x37, &_LC7, uVar3);
   if (iVar1 != 0) {
      iVar1 = OSSL_LIB_CTX_load_config(uVar3, recurseconfigfile);
      iVar1 = test_false("test/prov_config_test.c", 0x3a, "OSSL_LIB_CTX_load_config(ctx, recurseconfigfile)", iVar1 != 0);
      if (iVar1 != 0) {
         uVar4 = ERR_peek_error();
         uVar2 = (uint)uVar4 & 0x7fffffff;
         if (( uVar4 & 0x80000000 ) == 0) {
            uVar2 = (uint)uVar4 & 0x7fffff;
         }

         bVar5 = uVar2 == 0x7e;
         goto LAB_00100356;
      }

   }

   bVar5 = false;
   LAB_00100356:OSSL_LIB_CTX_free(uVar3);
   return bVar5;
}
undefined1 *test_get_options(void) {
   return options_0;
}
undefined8 setup_tests(void) {
   int iVar1;
   iVar1 = test_skip_common_options();
   if (iVar1 == 0) {
      test_error("test/prov_config_test.c", 0x7b, "Error parsing test options\n");
   }
 else {
      configfile = test_get_argument(0);
      iVar1 = test_ptr("test/prov_config_test.c", 0x7f, "configfile = test_get_argument(0)", configfile);
      if (iVar1 != 0) {
         recurseconfigfile = test_get_argument(1);
         iVar1 = test_ptr("test/prov_config_test.c", 0x82, "recurseconfigfile = test_get_argument(1)", recurseconfigfile);
         if (iVar1 != 0) {
            pathedconfig = test_get_argument(2);
            iVar1 = test_ptr("test/prov_config_test.c", 0x85, "pathedconfig = test_get_argument(2)", pathedconfig);
            if (iVar1 != 0) {
               add_test("test_recursive_config", test_recursive_config);
               add_test("test_double_config", test_double_config);
               add_test("test_path_config", 0x100000);
               return 1;
            }

         }

      }

   }

   return 0;
}

