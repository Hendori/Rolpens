void lh_CONF_VALUE_doall_SECTION_NAMES_thunk(undefined8 param_1, undefined8 param_2, code *UNRECOVERED_JUMPTABLE) {
   for (int i_2228 = 0; i_2228 < 2; i_2228++) {
      /* WARNING: Could not recover jumptable at 0x00100004. Too many branches */
   }
   ( *UNRECOVERED_JUMPTABLE )();
   return;
}int default_to_int(undefined8 param_1, char param_2) {
   return param_2 + -0x30;
}void section_name_cmp(undefined8 *param_1, undefined8 *param_2) {
   strcmp((char*)*param_1, (char*)*param_2);
   return;
}void default_is_number(undefined8 param_1, char param_2) {
   ossl_isdigit((int)param_2);
   return;
}void collect_section_name(undefined8 *param_1, undefined8 param_2) {
   if (param_1[1] != 0) {
      return;
   }
   OPENSSL_sk_push(param_2, *param_1);
   return;
}void CONF_set_nconf(CONF *conf, lhash_st_CONF_VALUE *hash) {
   if (default_CONF_method == (CONF_METHOD*)0x0) {
      default_CONF_method = NCONF_default();
   }
   ( *default_CONF_method->init )(conf);
   conf->data = hash;
   return;
}int CONF_set_default_method(CONF_METHOD *meth) {
   default_CONF_method = meth;
   return 1;
}CONF *NCONF_new_ex(lhash_st_CONF_VALUE *param_1, CONF_METHOD *param_2) {
   CONF *pCVar1;
   if (param_2 == (CONF_METHOD*)0x0) {
      param_2 = NCONF_default();
   }
   pCVar1 = ( *param_2->create )(param_2);
   if (pCVar1 == (CONF*)0x0) {
      ERR_new();
      ERR_set_debug("crypto/conf/conf_lib.c", 0xbf, "NCONF_new_ex");
      ERR_set_error(0xe, 0x8000e, 0);
   } else {
      pCVar1[1].data = param_1;
   }
   return pCVar1;
}CONF *NCONF_new(CONF_METHOD *meth) {
   CONF *pCVar1;
   pCVar1 = (CONF*)NCONF_new_ex(0, meth);
   return pCVar1;
}void NCONF_free(CONF *conf) {
   if (conf != (CONF*)0x0) {
      for (int i_2229 = 0; i_2229 < 2; i_2229++) {
         /* WARNING: Could not recover jumptable at 0x0010015c. Too many branches */
      }
      ( *conf->meth->destroy )(conf);
      return;
   }
   return;
}void NCONF_free_data(CONF *conf) {
   if (conf != (CONF*)0x0) {
      for (int i_2230 = 0; i_2230 < 2; i_2230++) {
         /* WARNING: Could not recover jumptable at 0x0010017c. Too many branches */
      }
      ( *conf->meth->destroy_data )(conf);
      return;
   }
   return;
}void CONF_free(lhash_st_CONF_VALUE *conf) {
   long in_FS_OFFSET;
   CONF aCStack_48[2];
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   CONF_set_nconf(aCStack_48, conf);
   NCONF_free_data(aCStack_48);
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}undefined8 NCONF_get0_libctx(long param_1) {
   return *(undefined8*)( param_1 + 0x28 );
}long NCONF_get_section_names(long param_1) {
   long lVar1;
   lVar1 = OPENSSL_sk_new(section_name_cmp);
   if (lVar1 != 0) {
      OPENSSL_LH_doall_arg_thunk(*(undefined8*)( param_1 + 0x10 ), 0x100000, collect_section_name, lVar1);
      OPENSSL_sk_sort(lVar1);
   }
   return lVar1;
}int NCONF_load(CONF *conf, char *file, long *eline) {
   int iVar1;
   if (conf != (CONF*)0x0) {
      for (int i_2231 = 0; i_2231 < 2; i_2231++) {
         /* WARNING: Could not recover jumptable at 0x0010024c. Too many branches */
      }
      iVar1 = ( *conf->meth->load )(conf, file, eline);
      return iVar1;
   }
   ERR_new();
   ERR_set_debug("crypto/conf/conf_lib.c", 0xfe, "NCONF_load");
   ERR_set_error(0xe, 0x69, 0);
   return 0;
}int NCONF_load_bio(CONF *conf, BIO *bp, long *eline) {
   int iVar1;
   if (conf != (CONF*)0x0) {
      for (int i_2232 = 0; i_2232 < 2; i_2232++) {
         /* WARNING: Could not recover jumptable at 0x0010029c. Too many branches */
      }
      iVar1 = ( *conf->meth->load_bio )(conf, bp, eline);
      return iVar1;
   }
   ERR_new();
   ERR_set_debug("crypto/conf/conf_lib.c", 0x117, "NCONF_load_bio");
   ERR_set_error(0xe, 0x69, 0);
   return 0;
}lhash_st_CONF_VALUE *CONF_load_bio(lhash_st_CONF_VALUE *conf, BIO *bp, long *eline) {
   int iVar1;
   lhash_st_CONF_VALUE *plVar2;
   long in_FS_OFFSET;
   CONF aCStack_58[2];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   CONF_set_nconf(aCStack_58, conf);
   iVar1 = NCONF_load_bio(aCStack_58, bp, eline);
   plVar2 = (lhash_st_CONF_VALUE*)0x0;
   if (iVar1 != 0) {
      plVar2 = aCStack_58[0].data;
   }
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return plVar2;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}lhash_st_CONF_VALUE *CONF_load(lhash_st_CONF_VALUE *conf, char *file, long *eline) {
   BIO *bp;
   lhash_st_CONF_VALUE *plVar1;
   bp = BIO_new_file(file, "rb");
   if (bp == (BIO*)0x0) {
      ERR_new();
      plVar1 = (lhash_st_CONF_VALUE*)0x0;
      ERR_set_debug("crypto/conf/conf_lib.c", 0x3a, "CONF_load");
      ERR_set_error(0xe, 0x80002, 0);
   } else {
      plVar1 = CONF_load_bio(conf, bp, eline);
      BIO_free(bp);
   }
   return plVar1;
}lhash_st_CONF_VALUE *CONF_load_fp(lhash_st_CONF_VALUE *conf, FILE *fp, long *eline) {
   BIO *bp;
   lhash_st_CONF_VALUE *plVar1;
   bp = BIO_new_fp(fp, 0);
   if (bp == (BIO*)0x0) {
      ERR_new();
      plVar1 = (lhash_st_CONF_VALUE*)0x0;
      ERR_set_debug("crypto/conf/conf_lib.c", 0x4b, "CONF_load_fp");
      ERR_set_error(0xe, 0x80007, 0);
   } else {
      plVar1 = CONF_load_bio(conf, bp, eline);
      BIO_free(bp);
   }
   return plVar1;
}int NCONF_load_fp(CONF *conf, FILE *fp, long *eline) {
   int iVar1;
   BIO *bp;
   bp = BIO_new_fp(fp, 0);
   if (bp != (BIO*)0x0) {
      iVar1 = NCONF_load_bio(conf, bp, eline);
      BIO_free(bp);
      return iVar1;
   }
   ERR_new();
   ERR_set_debug("crypto/conf/conf_lib.c", 0x10b, "NCONF_load_fp");
   ERR_set_error(0xe, 0x80007, 0);
   return 0;
}stack_st_CONF_VALUE *NCONF_get_section(CONF *conf, char *section) {
   stack_st_CONF_VALUE *psVar1;
   if (conf == (CONF*)0x0) {
      ERR_new();
      ERR_set_debug("crypto/conf/conf_lib.c", 0x121, "NCONF_get_section");
      ERR_set_error(0xe, 0x69, 0);
   } else {
      if (section != (char*)0x0) {
         psVar1 = _CONF_get_section_values(conf, section);
         return psVar1;
      }
      ERR_new();
      ERR_set_debug("crypto/conf/conf_lib.c", 0x126, "NCONF_get_section");
      ERR_set_error(0xe, 0x6b, 0);
   }
   return (stack_st_CONF_VALUE*)0x0;
}stack_st_CONF_VALUE *CONF_get_section(lhash_st_CONF_VALUE *conf, char *section) {
   stack_st_CONF_VALUE *psVar1;
   long in_FS_OFFSET;
   CONF aCStack_58[2];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   psVar1 = (stack_st_CONF_VALUE*)0x0;
   if (conf != (lhash_st_CONF_VALUE*)0x0) {
      CONF_set_nconf(aCStack_58, conf);
      psVar1 = NCONF_get_section(aCStack_58, section);
   }
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return psVar1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}char *NCONF_get_string(CONF *conf, char *group, char *name) {
   char *pcVar1;
   pcVar1 = _CONF_get_string(conf, group, name);
   if (pcVar1 == (char*)0x0) {
      if (conf != (CONF*)0x0) {
         ERR_new();
         ERR_set_debug("crypto/conf/conf_lib.c", 0x13c, "NCONF_get_string");
         ERR_set_error(0xe, 0x6c, "group=%s name=%s", group, name);
         return (char*)0x0;
      }
      ERR_new();
      ERR_set_debug("crypto/conf/conf_lib.c", 0x139, "NCONF_get_string");
      ERR_set_error(0xe, 0x6a, 0);
   }
   return pcVar1;
}char *CONF_get_string(lhash_st_CONF_VALUE *conf, char *group, char *name) {
   char *pcVar1;
   long in_FS_OFFSET;
   CONF aCStack_58[2];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (conf == (lhash_st_CONF_VALUE*)0x0) {
      if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
         pcVar1 = NCONF_get_string((CONF*)0x0, group, name);
         return pcVar1;
      }
   } else {
      CONF_set_nconf(aCStack_58, conf);
      pcVar1 = NCONF_get_string(aCStack_58, group, name);
      if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return pcVar1;
      }
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}int NCONF_get_number_e(CONF *conf, char *group, char *name, long *result) {
   int iVar1;
   char *pcVar2;
   long lVar3;
   code *pcVar4;
   code *pcVar5;
   if (result == (long*)0x0) {
      ERR_new();
      ERR_set_debug("crypto/conf/conf_lib.c", 0x154, "NCONF_get_number_e");
      ERR_set_error(0xe, 0xc0102, 0);
   } else {
      pcVar2 = NCONF_get_string(conf, group, name);
      if (pcVar2 != (char*)0x0) {
         pcVar5 = default_to_int;
         pcVar4 = default_is_number;
         if (conf != (CONF*)0x0) {
            pcVar4 = conf->meth->is_number;
            pcVar5 = conf->meth->to_int;
            if (pcVar4 == (_func_3670*)0x0) {
               pcVar4 = default_is_number;
            }
            if (pcVar5 == (_func_3671*)0x0) {
               pcVar5 = default_to_int;
            }
         }
         lVar3 = 0;
         while (true) {
            iVar1 = ( *pcVar4 )(conf, *pcVar2);
            if (iVar1 == 0) {
               *result = lVar3;
               return 1;
            }
            iVar1 = ( *pcVar5 )(conf, *pcVar2);
            if ((long)( ( 0x7fffffffffffffffU - (long)iVar1 ) / 10 ) < lVar3) break;
            pcVar2 = pcVar2 + 1;
            lVar3 = (long)iVar1 + lVar3 * 10;
         };
         ERR_new();
         ERR_set_debug("crypto/conf/conf_lib.c", 0x167, "NCONF_get_number_e");
         ERR_set_error(0xe, 0x79, 0);
      }
   }
   return 0;
}long CONF_get_number(lhash_st_CONF_VALUE *conf, char *group, char *name) {
   int iVar1;
   long lVar2;
   long in_FS_OFFSET;
   long local_70;
   CONF local_68[2];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_70 = 0;
   ERR_set_mark();
   if (conf == (lhash_st_CONF_VALUE*)0x0) {
      iVar1 = NCONF_get_number_e((CONF*)0x0, group, name, &local_70);
   } else {
      CONF_set_nconf(local_68, conf);
      iVar1 = NCONF_get_number_e(local_68, group, name, &local_70);
   }
   ERR_pop_to_mark();
   lVar2 = 0;
   if (iVar1 != 0) {
      lVar2 = local_70;
   }
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return lVar2;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}int NCONF_dump_bio(CONF *conf, BIO *out) {
   int iVar1;
   if (conf != (CONF*)0x0) {
      for (int i_2233 = 0; i_2233 < 2; i_2233++) {
         /* WARNING: Could not recover jumptable at 0x001009dc. Too many branches */
      }
      iVar1 = ( *conf->meth->dump )(conf, out);
      return iVar1;
   }
   ERR_new();
   ERR_set_debug("crypto/conf/conf_lib.c", 399, "NCONF_dump_bio");
   ERR_set_error(0xe, 0x69, 0);
   return 0;
}int CONF_dump_bio(lhash_st_CONF_VALUE *conf, BIO *out) {
   int iVar1;
   long in_FS_OFFSET;
   CONF aCStack_58[2];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   CONF_set_nconf(aCStack_58, conf);
   iVar1 = NCONF_dump_bio(aCStack_58, out);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}int CONF_dump_fp(lhash_st_CONF_VALUE *conf, FILE *out) {
   int iVar1;
   BIO *out_00;
   out_00 = BIO_new_fp(out, 0);
   if (out_00 != (BIO*)0x0) {
      iVar1 = CONF_dump_bio(conf, out_00);
      BIO_free(out_00);
      return iVar1;
   }
   ERR_new();
   ERR_set_debug("crypto/conf/conf_lib.c", 0x9d, "CONF_dump_fp");
   ERR_set_error(0xe, 0x80007, 0);
   return 0;
}int NCONF_dump_fp(CONF *conf, FILE *out) {
   int iVar1;
   BIO *out_00;
   out_00 = BIO_new_fp(out, 0);
   if (out_00 != (BIO*)0x0) {
      iVar1 = NCONF_dump_bio(conf, out_00);
      BIO_free(out_00);
      return iVar1;
   }
   ERR_new();
   ERR_set_debug("crypto/conf/conf_lib.c", 0x183, "NCONF_dump_fp");
   ERR_set_error(0xe, 0x80007, 0);
   return 0;
}void OPENSSL_INIT_new(void) {
   void *pvVar1;
   pvVar1 = calloc(0x18, 1);
   if (pvVar1 != (void*)0x0) {
      *(undefined8*)( (long)pvVar1 + 0x10 ) = 0x32;
   }
   return;
}undefined8 OPENSSL_INIT_set_config_filename(undefined8 *param_1, char *param_2) {
   if (( param_2 != (char*)0x0 ) && ( param_2 = strdup(param_2) ),param_2 == (char*)0x0) {
      return 0;
   }
   free((void*)*param_1);
   *param_1 = param_2;
   return 1;
}void OPENSSL_INIT_set_config_file_flags(long param_1, undefined8 param_2) {
   *(undefined8*)( param_1 + 0x10 ) = param_2;
   return;
}undefined8 OPENSSL_INIT_set_config_appname(long param_1, char *param_2) {
   if (( param_2 != (char*)0x0 ) && ( param_2 = strdup(param_2) ),param_2 == (char*)0x0) {
      return 0;
   }
   free(*(void**)( param_1 + 8 ));
   *(char**)( param_1 + 8 ) = param_2;
   return 1;
}void OPENSSL_INIT_free(undefined8 *param_1) {
   if (param_1 != (undefined8*)0x0) {
      free((void*)*param_1);
      free((void*)param_1[1]);
      free(param_1);
      return;
   }
   return;
}
