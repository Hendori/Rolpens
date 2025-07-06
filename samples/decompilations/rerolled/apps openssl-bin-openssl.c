void lh_FUNCTION_hfn_thunk(undefined8 param_1, code *UNRECOVERED_JUMPTABLE) {
   for (int i_1836 = 0; i_1836 < 2; i_1836++) {
      /* WARNING: Could not recover jumptable at 0x00100004. Too many branches */
   }
   ( *UNRECOVERED_JUMPTABLE )();
   return;
}void lh_FUNCTION_cfn_thunk(undefined8 param_1, undefined8 param_2, code *UNRECOVERED_JUMPTABLE) {
   for (int i_1837 = 0; i_1837 < 2; i_1837++) {
      /* WARNING: Could not recover jumptable at 0x00100014. Too many branches */
   }
   ( *UNRECOVERED_JUMPTABLE )();
   return;
}void lh_FUNCTION_doall_thunk(undefined8 param_1, code *UNRECOVERED_JUMPTABLE) {
   for (int i_1838 = 0; i_1838 < 2; i_1838++) {
      /* WARNING: Could not recover jumptable at 0x00100024. Too many branches */
   }
   ( *UNRECOVERED_JUMPTABLE )();
   return;
}void lh_FUNCTION_doall_arg_thunk(undefined8 param_1, undefined8 param_2, code *UNRECOVERED_JUMPTABLE) {
   for (int i_1839 = 0; i_1839 < 2; i_1839++) {
      /* WARNING: Could not recover jumptable at 0x00100034. Too many branches */
   }
   ( *UNRECOVERED_JUMPTABLE )();
   return;
}void function_cmp(long param_1, long param_2) {
   strncmp(*(char**)( param_1 + 8 ), *(char**)( param_2 + 8 ), 8);
   return;
}void function_hash(long param_1) {
   OPENSSL_LH_strhash(*(undefined8*)( param_1 + 8 ));
   return;
}int SortFnByName(int *param_1, int *param_2) {
   int iVar1;
   if (*param_1 == *param_2) {
      iVar1 = strcmp(*(char**)( param_1 + 2 ), *(char**)( param_2 + 2 ));
      return iVar1;
   }
   return *param_1 - *param_2;
}undefined8 do_cmd(undefined8 param_1, int param_2, ulong *param_3) {
   char *pcVar1;
   undefined1 auVar2[16];
   int iVar3;
   undefined1 *puVar4;
   undefined8 uVar5;
   EVP_MD *pEVar6;
   EVP_CIPHER *pEVar7;
   long lVar8;
   long in_FS_OFFSET;
   undefined1 local_68[16];
   undefined1 local_58[16];
   undefined1 local_48[16];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_2 < 1 ) || ( *param_3 == 0 )) {
      LAB_001002b8:uVar5 = 0;
   } else {
      local_58 = (undefined1[16])0x0;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = *param_3;
      local_68 = auVar2 << 0x40;
      local_48 = (undefined1[16])0x0;
      puVar4 = (undefined1*)OPENSSL_LH_retrieve(param_1, local_68);
      if (puVar4 == (undefined1*)0x0) {
         pEVar6 = EVP_get_digestbyname((char*)*param_3);
         if (pEVar6 == (EVP_MD*)0x0) {
            pEVar7 = EVP_get_cipherbyname((char*)*param_3);
            if (pEVar7 == (EVP_CIPHER*)0x0) {
               pcVar1 = (char*)*param_3;
               local_68._8_8_ = pcVar1;
               if (( ( *pcVar1 == 'n' ) && ( pcVar1[1] == 'o' ) ) && ( pcVar1[2] == '-' )) {
                  local_68._8_8_ = pcVar1 + 3;
                  lVar8 = OPENSSL_LH_retrieve(param_1, local_68);
                  if (lVar8 == 0) {
                     BIO_printf(bio_out, "%s\n", *param_3);
                     goto LAB_001002b8;
                  }
                  BIO_printf(bio_out, "%s\n", *param_3 + 3);
               } else {
                  BIO_printf(bio_err, "Invalid command \'%s\'; type \"help\" for a list.\n");
               }
               uVar5 = 1;
               goto LAB_00100171;
            }
            local_68._0_4_ = 3;
            local_58._0_8_ = &enc_main;
            puVar4 = local_68;
         } else {
            local_68._0_4_ = 2;
            local_58._0_8_ = &dgst_main;
            puVar4 = local_68;
         }
      }
      if (*(long*)( puVar4 + 0x20 ) != 0) {
         if (*(long*)( puVar4 + 0x28 ) == 0) {
            BIO_printf(bio_err, "The command %s is deprecated.", *(undefined8*)( puVar4 + 8 ));
         } else {
            BIO_printf(bio_err, "The command %s was deprecated in version %s.", *(undefined8*)( puVar4 + 8 ));
         }
         pcVar1 = *(char**)( puVar4 + 0x20 );
         iVar3 = strcmp(pcVar1, "unknown");
         if (iVar3 != 0) {
            BIO_printf(bio_err, " Use \'%s\' instead.", pcVar1);
         }
         BIO_printf(bio_err, "\n");
      }
      uVar5 = ( **(code**)( puVar4 + 0x10 ) )(param_2, param_3);
   }
   LAB_00100171:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return uVar5;
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */long prog_init(void) {
   long *plVar1;
   undefined *puVar2;
   undefined8 uVar3;
   size_t __nmemb;
   if (prog_inited_1 == 0) {
      __nmemb = 0;
      prog_inited_1 = 1;
      if (_qsort != 0) {
         puVar2 = &functions;
         do {
            __nmemb = __nmemb + 1;
            plVar1 = (long*)( puVar2 + 0x38 );
            puVar2 = puVar2 + 0x30;
         } while ( *plVar1 != 0 );
      }
      qsort(&functions, __nmemb, 0x30, SortFnByName);
      uVar3 = OPENSSL_LH_new(function_hash, function_cmp);
      ret_0 = OPENSSL_LH_set_thunks(uVar3, 0x100000, lh_FUNCTION_cfn_thunk, lh_FUNCTION_doall_thunk, lh_FUNCTION_doall_arg_thunk);
      if (( ret_0 != 0 ) && ( _qsort != 0 )) {
         puVar2 = &functions;
         do {
            OPENSSL_LH_insert(ret_0, puVar2);
            plVar1 = (long*)( puVar2 + 0x38 );
            puVar2 = puVar2 + 0x30;
         } while ( *plVar1 != 0 );
      }
      return ret_0;
   }
   return ret_0;
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */undefined8 help_main(undefined8 param_1, undefined8 param_2) {
   int iVar1;
   int iVar2;
   undefined8 uVar3;
   undefined8 *puVar4;
   long lVar5;
   int iVar6;
   int *piVar7;
   char *format;
   int iVar8;
   long in_FS_OFFSET;
   int local_60;
   uint local_5c;
   undefined8 local_58;
   char *local_50;
   undefined8 local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar3 = opt_init(param_1, param_2, help_options);
   do {
      iVar2 = opt_next();
      if (iVar2 == 0) {
         iVar2 = opt_num_rest();
         if (iVar2 == 1) {
            puVar4 = (undefined8*)opt_rest();
            local_58 = *puVar4;
            local_48 = 0;
            local_50 = "--help";
            uVar3 = prog_init();
            uVar3 = do_cmd(uVar3, 2, &local_58);
            goto LAB_00100403;
         }
         iVar2 = opt_check_rest_arg(0);
         if (iVar2 != 0) {
            calculate_columns(&functions, &local_60);
            iVar2 = 0;
            BIO_printf(bio_err, "%s:\n\nStandard commands", uVar3);
            iVar6 = 0;
            lVar5 = _qsort;
            piVar7 = (int*)&functions;
            if (_qsort == 0) goto LAB_001005b8;
            goto LAB_0010051d;
         }
         BIO_printf(bio_err, "Usage: %s\n", uVar3);
         LAB_00100448:uVar3 = 1;
         goto LAB_00100403;
      }
      if (iVar2 == -1) {
         BIO_printf(bio_err, "%s: Use -help for summary.\n", uVar3);
         goto LAB_00100448;
      }
   } while ( iVar2 != 1 );
   opt_help(help_options);
   uVar3 = 0;
   goto LAB_00100403;
   LAB_0010051d:do {
      iVar8 = iVar6 + 1;
      if (iVar6 % local_60 == 0) {
         BIO_printf(bio_err, "\n");
         iVar1 = *piVar7;
         if (*piVar7 == iVar2) {
            lVar5 = *(long*)( piVar7 + 2 );
            iVar6 = iVar8;
         } else {
            LAB_001004d5:iVar2 = iVar1;
            format = "\nMessage Digest commands (see the `dgst\' command for more details)\n";
            if (iVar2 != 2) {
               if (iVar2 != 3) {
                  lVar5 = *(long*)( piVar7 + 2 );
                  iVar6 = iVar8;
                  goto LAB_001004fe;
               }
               format = "\nCipher commands (see the `enc\' command for more details)\n";
            }
            BIO_printf(bio_err, format);
            lVar5 = *(long*)( piVar7 + 2 );
            iVar6 = 1;
         }
      } else {
         iVar1 = *piVar7;
         iVar6 = iVar8;
         if (iVar1 != iVar2) {
            BIO_printf(bio_err, "\n");
            goto LAB_001004d5;
         }
      }
      LAB_001004fe:BIO_printf(bio_err, "%-*s", (ulong)local_5c, lVar5);
      lVar5 = *(long*)( piVar7 + 0xe );
      piVar7 = piVar7 + 0xc;
   } while ( lVar5 != 0 );
   LAB_001005b8:BIO_printf(bio_err, "\n\n");
   uVar3 = 0;
   LAB_00100403:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return uVar3;
}/* WARNING: Removing unreachable block (ram,0x00100c61) */void main(int param_1, undefined8 *param_2) {
   int iVar1;
   int iVar2;
   undefined8 uVar3;
   long lVar4;
   long lVar5;
   char *pcVar6;
   long in_FS_OFFSET;
   bool bVar7;
   bool bVar8;
   undefined1 auStack_78[8];
   undefined8 local_70;
   undefined8 local_40;
   local_40 = *(undefined8*)( in_FS_OFFSET + 0x28 );
   bio_in = (BIO*)dup_bio_in(0x8001);
   bio_out = (BIO*)dup_bio_out(0x8001);
   bio_err = (BIO*)dup_bio_err(0x8001);
   signal(0xd, (__sighandler_t)0x1);
   iVar1 = OPENSSL_init_ssl(0x7640, 0);
   if (iVar1 == 0) {
      LAB_0010098e:pcVar6 = "apps_startup";
   } else {
      setup_ui_method();
      setup_engine_loader();
      pcVar6 = getenv("OPENSSL_TEST_LIBCTX");
      if (( ( pcVar6 != (char*)0x0 ) && ( iVar1 = strcmp(pcVar6, "1") ),iVar1 == 0 )) goto LAB_0010098e;
      lVar4 = prog_init();
      if (lVar4 != 0) {
         uVar3 = opt_progname(*param_2);
         default_config_file = CONF_get1_default_config_file();
         if (default_config_file == (char*)0x0) {
            app_bail_out("%s: could not get default config file\n", uVar3);
         }
         local_70 = uVar3;
         lVar5 = OPENSSL_LH_retrieve(lVar4, auStack_78);
         if (lVar5 == 0) {
            iVar1 = param_1 + -1;
            pcVar6 = (char*)param_2[1];
            if (param_1 < 2) {
               bVar7 = false;
               LAB_00100af1:opt_appname(pcVar6);
               if (( iVar1 == 0 ) || ( bVar7 )) goto LAB_00100ac7;
            } else {
               bVar7 = true;
               iVar2 = strcmp(pcVar6, "-help");
               if (( ( iVar2 != 0 ) && ( iVar2 = strcmp(pcVar6, "--help") ),iVar2 != 0 )) {
                  iVar2 = strcmp(pcVar6, "--h");
                  bVar7 = iVar2 == 0;
               }
               bVar8 = true;
               iVar2 = strcmp(pcVar6, "-version");
               if (( ( iVar2 != 0 ) && ( iVar2 = strcmp(pcVar6, "--version") ),iVar2 != 0 )) {
                  iVar2 = strcmp(pcVar6, "--v");
                  bVar8 = iVar2 == 0;
               }
               if (( iVar1 != 1 ) && ( !bVar7 )) {
                  if (bVar8) {
                     opt_appname("version");
                     LAB_00100c05:iVar1 = do_cmd(lVar4, 1, version_argv);
                     goto LAB_001009c1;
                  }
                  goto LAB_00100af1;
               }
               opt_appname(&_LC21);
               if (bVar7) goto LAB_00100ac7;
               if (bVar8) goto LAB_00100c05;
            }
            param_2 = param_2 + 1;
         } else {
            *param_2 = uVar3;
            iVar1 = param_1;
            if (param_1 == 0) {
               LAB_00100ac7:iVar1 = do_cmd(lVar4, 1, help_argv);
               goto LAB_001009c1;
            }
         }
         iVar1 = do_cmd(lVar4, iVar1, param_2);
         goto LAB_001009c1;
      }
      pcVar6 = "prog_init";
   }
   iVar1 = 1;
   BIO_printf(bio_err, "FATAL: Startup failure (dev note: %s()) for %s\n", pcVar6, *param_2);
   ERR_print_errors(bio_err);
   LAB_001009c1:CRYPTO_free(default_config_file);
   OPENSSL_LH_free();
   CRYPTO_free((void*)0x0);
   iVar2 = app_RAND_write();
   if (iVar2 == 0) {
      iVar1 = 1;
   }
   BIO_free(bio_in);
   BIO_free_all(bio_out);
   app_providers_cleanup();
   uVar3 = app_get0_libctx();
   OSSL_LIB_CTX_free(uVar3);
   destroy_engine_loader();
   destroy_ui_method();
   BIO_free_all(bio_err);
   /* WARNING: Subroutine does not return */
   exit(iVar1);
}
