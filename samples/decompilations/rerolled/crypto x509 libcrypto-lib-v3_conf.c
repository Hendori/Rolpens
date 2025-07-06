X509_EXTENSION *v3_generic_extension(char *param_1, char *param_2, int param_3, int param_4, X509V3_CTX *param_5) {
   int iVar1;
   ASN1_OBJECT *obj;
   ASN1_TYPE *a;
   ASN1_OCTET_STRING *data;
   X509_EXTENSION *pXVar2;
   uchar *ptr;
   char *pcVar3;
   undefined8 uVar4;
   long in_FS_OFFSET;
   long local_50;
   uchar *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   obj = OBJ_txt2obj(param_1, 0);
   if (obj == (ASN1_OBJECT*)0x0) {
      ERR_new();
      ERR_set_debug("crypto/x509/v3_conf.c", 0xf9, "v3_generic_extension");
      uVar4 = 0x73;
      pcVar3 = "name=%s";
   } else {
      if (param_4 == 1) {
         ptr = (uchar*)OPENSSL_hexstr2buf(param_2, &local_50);
         LAB_0010009b:if (ptr != (uchar*)0x0) {
            data = ASN1_OCTET_STRING_new();
            if (data == (ASN1_OCTET_STRING*)0x0) {
               ERR_new();
               pXVar2 = (X509_EXTENSION*)0x0;
               ERR_set_debug("crypto/x509/v3_conf.c", 0x10a, "v3_generic_extension");
               ERR_set_error(0x22, 0x8000d, 0);
            } else {
               data->data = ptr;
               ptr = (uchar*)0x0;
               data->length = (int)local_50;
               pXVar2 = X509_EXTENSION_create_by_OBJ((X509_EXTENSION**)0x0, obj, param_3, data);
            }
            goto LAB_001000de;
         }
      } else if (param_4 == 2) {
         local_48 = (uchar*)0x0;
         a = ASN1_generate_v3(param_2, param_5);
         if (a != (ASN1_TYPE*)0x0) {
            iVar1 = i2d_ASN1_TYPE(a, &local_48);
            local_50 = (long)iVar1;
            ASN1_TYPE_free(a);
            ptr = local_48;
            goto LAB_0010009b;
         }
      }
      ERR_new();
      ERR_set_debug("crypto/x509/v3_conf.c", 0x104, "v3_generic_extension");
      uVar4 = 0x74;
      pcVar3 = "value=%s";
      param_1 = param_2;
   }
   pXVar2 = (X509_EXTENSION*)0x0;
   data = (ASN1_OCTET_STRING*)0x0;
   ERR_set_error(0x22, uVar4, pcVar3, param_1);
   ptr = (uchar*)0x0;
   LAB_001000de:ASN1_OBJECT_free(obj);
   ASN1_OCTET_STRING_free(data);
   CRYPTO_free(ptr);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return pXVar2;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* WARNING: Unknown calling convention -- yet parameter storage is locked */stack_st_CONF_VALUE *nconf_get_section(CONF *conf, char *section) {
   stack_st_CONF_VALUE *psVar1;
   psVar1 = NCONF_get_section(conf, section);
   return psVar1;
}X509_EXTENSION *do_ext_i2d(long param_1, int param_2, int param_3, ASN1_VALUE *param_4) {
   uchar *puVar1;
   int num;
   ASN1_ITEM *it;
   ASN1_OCTET_STRING *data;
   X509_EXTENSION *pXVar2;
   undefined8 uVar3;
   long in_FS_OFFSET;
   uchar *local_50;
   uchar *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = (uchar*)0x0;
   if (*(code**)( param_1 + 8 ) == (code*)0x0) {
      num = ( **(code**)( param_1 + 0x28 ) )(param_4, 0);
      if (num < 1) {
         ERR_new();
         uVar3 = 0xa0;
         goto LAB_00100351;
      }
      local_50 = (uchar*)CRYPTO_malloc(num, "crypto/x509/v3_conf.c", 0xa3);
      if (local_50 != (uchar*)0x0) {
         local_48 = local_50;
         ( **(code**)( param_1 + 0x28 ) )(param_4, &local_48);
         goto LAB_00100279;
      }
      LAB_00100373:data = (ASN1_OCTET_STRING*)0x0;
   } else {
      it = (ASN1_ITEM*)( **(code**)( param_1 + 8 ) )();
      num = ASN1_item_i2d(param_4, &local_50, it);
      if (num < 0) {
         ERR_new();
         uVar3 = 0x98;
         LAB_00100351:ERR_set_debug("crypto/x509/v3_conf.c", uVar3, "do_ext_i2d");
         ERR_set_error(0x22, 0x8000d, 0);
         goto LAB_00100373;
      }
      LAB_00100279:data = ASN1_OCTET_STRING_new();
      puVar1 = local_50;
      if (data == (ASN1_OCTET_STRING*)0x0) {
         ERR_new();
         uVar3 = 0xa9;
         goto LAB_00100351;
      }
      local_50 = (uchar*)0x0;
      data->length = num;
      data->data = puVar1;
      pXVar2 = X509_EXTENSION_create_by_NID((X509_EXTENSION**)0x0, param_2, param_3, data);
      if (pXVar2 != (X509_EXTENSION*)0x0) {
         ASN1_OCTET_STRING_free(data);
         goto LAB_001002c2;
      }
      ERR_new();
      ERR_set_debug("crypto/x509/v3_conf.c", 0xb2, "do_ext_i2d");
      ERR_set_error(0x22, 0x80022, 0);
   }
   pXVar2 = (X509_EXTENSION*)0x0;
   CRYPTO_free(local_50);
   ASN1_OCTET_STRING_free(data);
   LAB_001002c2:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return pXVar2;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}undefined8 do_ext_nconf(CONF *param_1, v3_ext_ctx *param_2, int param_3, undefined4 param_4, char *param_5) {
   int iVar1;
   X509V3_EXT_METHOD *method;
   stack_st_CONF_VALUE *values;
   ASN1_VALUE *val;
   undefined8 uVar2;
   ASN1_ITEM *it;
   X509V3_EXT_S2I pXVar3;
   char *pcVar4;
   if (param_3 == 0) {
      ERR_new();
      ERR_set_debug("crypto/x509/v3_conf.c", 0x58, "do_ext_nconf");
      ERR_set_error(0x22, 0x82, 0);
      return 0;
   }
   method = X509V3_EXT_get_nid(param_3);
   if (method == (X509V3_EXT_METHOD*)0x0) {
      ERR_new();
      ERR_set_debug("crypto/x509/v3_conf.c", 0x5c, "do_ext_nconf");
      ERR_set_error(0x22, 0x81, 0);
      return 0;
   }
   if (method->v2i == (X509V3_EXT_V2I)0x0) {
      pXVar3 = method->s2i;
      if (pXVar3 == (X509V3_EXT_S2I)0x0) {
         pXVar3 = (X509V3_EXT_S2I)method->r2i;
         if (pXVar3 == (X509V3_EXT_S2I)0x0) {
            ERR_new();
            ERR_set_debug("crypto/x509/v3_conf.c", 0x7c, "do_ext_nconf");
            pcVar4 = OBJ_nid2sn(param_3);
            ERR_set_error(0x22, 0x67, "name=%s", pcVar4);
            return 0;
         }
         if (( param_2->db == (void*)0x0 ) || ( param_2->db_meth == (X509V3_CONF_METHOD*)0x0 )) {
            ERR_new();
            ERR_set_debug("crypto/x509/v3_conf.c", 0x76, "do_ext_nconf");
            ERR_set_error(0x22, 0x88, 0);
            return 0;
         }
      }
      val = (ASN1_VALUE*)( *pXVar3 )(method, param_2, param_5);
   } else {
      if (*param_5 == '@') {
         values = NCONF_get_section(param_1, param_5 + 1);
      } else {
         values = X509V3_parse_list(param_5);
      }
      if (( values == (stack_st_CONF_VALUE*)0x0 ) || ( iVar1 = iVar1 < 1 )) {
         ERR_new();
         ERR_set_debug("crypto/x509/v3_conf.c", 0x66, "do_ext_nconf");
         pcVar4 = OBJ_nid2sn(param_3);
         ERR_set_error(0x22, 0x69, "name=%s,section=%s", pcVar4, param_5);
         if (*param_5 == '@') {
            return 0;
         }
         OPENSSL_sk_pop_free(values, &X509V3_conf_free);
         return 0;
      }
      val = (ASN1_VALUE*)( *method->v2i )(method, param_2, values);
      if (*param_5 != '@') {
         OPENSSL_sk_pop_free(values, &X509V3_conf_free);
      }
   }
   if (val == (ASN1_VALUE*)0x0) {
      return 0;
   }
   uVar2 = do_ext_i2d(method, param_3, param_4, val);
   if (method->it == (ASN1_ITEM_EXP*)0x0) {
      ( *method->ext_free )(val);
      return uVar2;
   }
   it = (ASN1_ITEM*)( *(code*)method->it )();
   ASN1_item_free(val, it);
   return uVar2;
}long X509V3_EXT_nconf_int(undefined8 param_1, undefined8 param_2, long param_3, char *param_4, char *param_5) {
   int iVar1;
   long lVar2;
   char *pcVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   uVar4 = 0;
   iVar1 = strncmp(param_5, "critical,", 9);
   if (iVar1 == 0) {
      param_5 = param_5 + 9;
      while (true) {
         iVar1 = ossl_ctype_check((int)*param_5, 8);
         if (iVar1 == 0) break;
         param_5 = param_5 + 1;
      };
      uVar4 = 1;
   }
   iVar1 = strncmp(param_5, "DER:", 4);
   if (iVar1 == 0) {
      pcVar3 = param_5 + 4;
      uVar5 = 1;
   } else {
      uVar5 = 2;
      iVar1 = strncmp(param_5, "ASN1:", 5);
      pcVar3 = param_5 + 5;
      if (iVar1 != 0) {
         iVar1 = OBJ_sn2nid(param_4);
         lVar2 = do_ext_nconf(param_1, param_2, iVar1, uVar4, param_5);
         if (lVar2 == 0) {
            if (param_3 == 0) {
               ERR_new();
               ERR_set_debug("crypto/x509/v3_conf.c", 0x34, "X509V3_EXT_nconf_int");
               ERR_set_error(0x22, 0x80, "name=%s, value=%s", param_4, param_5);
            } else {
               ERR_new();
               ERR_set_debug("crypto/x509/v3_conf.c", 0x30, "X509V3_EXT_nconf_int");
               ERR_set_error(0x22, 0x80, "section=%s, name=%s, value=%s", param_3, param_4, param_5);
            }
         }
         return lVar2;
      }
   }
   while (true) {
      iVar1 = ossl_ctype_check((int)*pcVar3, 8);
      if (iVar1 == 0) break;
      pcVar3 = pcVar3 + 1;
   };
   lVar2 = v3_generic_extension(param_4, pcVar3, uVar4, uVar5, param_2);
   return lVar2;
}/* WARNING: Unknown calling convention -- yet parameter storage is locked */char *nconf_get_string(CONF *conf, char *group, char *name) {
   char *pcVar1;
   pcVar1 = NCONF_get_string(conf, group, name);
   return pcVar1;
}/* WARNING: Unknown calling convention -- yet parameter storage is locked */stack_st_CONF_VALUE *conf_lhash_get_section(lhash_st_CONF_VALUE *conf, char *section) {
   stack_st_CONF_VALUE *psVar1;
   psVar1 = CONF_get_section(conf, section);
   return psVar1;
}/* WARNING: Unknown calling convention -- yet parameter storage is locked */char *conf_lhash_get_string(lhash_st_CONF_VALUE *conf, char *group, char *name) {
   char *pcVar1;
   pcVar1 = CONF_get_string(conf, group, name);
   return pcVar1;
}X509_EXTENSION *X509V3_EXT_nconf(CONF *conf, X509V3_CTX *ctx, char *name, char *value) {
   X509_EXTENSION *pXVar1;
   pXVar1 = (X509_EXTENSION*)X509V3_EXT_nconf_int(conf, ctx, 0, name, value);
   return pXVar1;
}X509_EXTENSION *X509V3_EXT_nconf_nid(CONF *conf, X509V3_CTX *ctx, int ext_nid, char *value) {
   int iVar1;
   char *pcVar2;
   X509_EXTENSION *pXVar3;
   char *pcVar4;
   undefined8 uVar5;
   undefined8 uVar6;
   uVar5 = 0;
   iVar1 = strncmp(value, "critical,", 9);
   if (iVar1 == 0) {
      value = value + 9;
      while (true) {
         iVar1 = ossl_ctype_check((int)*value, 8);
         if (iVar1 == 0) break;
         value = value + 1;
      };
      uVar5 = 1;
   }
   iVar1 = strncmp(value, "DER:", 4);
   if (iVar1 == 0) {
      pcVar4 = value + 4;
      uVar6 = 1;
   } else {
      uVar6 = 2;
      iVar1 = strncmp(value, "ASN1:", 5);
      pcVar4 = value + 5;
      if (iVar1 != 0) {
         pXVar3 = (X509_EXTENSION*)do_ext_nconf(conf, ctx, ext_nid, uVar5, value);
         return pXVar3;
      }
   }
   while (true) {
      iVar1 = ossl_ctype_check((int)*pcVar4, 8);
      if (iVar1 == 0) break;
      pcVar4 = pcVar4 + 1;
   };
   pcVar2 = OBJ_nid2sn(ext_nid);
   pXVar3 = (X509_EXTENSION*)v3_generic_extension(pcVar2, pcVar4, uVar5, uVar6, ctx);
   return pXVar3;
}X509_EXTENSION *X509V3_EXT_i2d(int ext_nid, int crit, void *ext_struc) {
   X509V3_EXT_METHOD *pXVar1;
   X509_EXTENSION *pXVar2;
   pXVar1 = X509V3_EXT_get_nid(ext_nid);
   if (pXVar1 != (X509V3_EXT_METHOD*)0x0) {
      pXVar2 = (X509_EXTENSION*)do_ext_i2d(pXVar1, ext_nid, crit, ext_struc);
      return pXVar2;
   }
   ERR_new();
   ERR_set_debug("crypto/x509/v3_conf.c", 199, __func___6);
   ERR_set_error(0x22, 0x81, 0);
   return (X509_EXTENSION*)0x0;
}int X509V3_EXT_add_nconf_sk(CONF *conf, X509V3_CTX *ctx, char *section, stack_st_X509_EXTENSION **sk) {
   char *__s1;
   int iVar1;
   int iVar2;
   stack_st_CONF_VALUE *psVar3;
   long lVar4;
   stack_st_X509_EXTENSION *psVar5;
   undefined8 *puVar6;
   X509_EXTENSION *ex;
   ASN1_OBJECT *obj;
   X509_EXTENSION *a;
   int iVar7;
   int local_4c;
   int local_40;
   psVar3 = NCONF_get_section(conf, section);
   if (psVar3 == (stack_st_CONF_VALUE*)0x0) {
      return 0;
   }
   local_4c = -1;
   local_40 = -1;
   for (iVar7 = 0; iVar1 = OPENSSL_sk_num(psVar3),iVar7 < iVar1; iVar7 = iVar7 + 1) {
      lVar4 = OPENSSL_sk_value(psVar3, iVar7);
      __s1 = *(char**)( lVar4 + 8 );
      iVar2 = strcmp(__s1, "authorityKeyIdentifier");
      iVar1 = iVar7;
      if (( iVar2 != 0 ) && ( iVar2 = strcmp(__s1, "subjectKeyIdentifier") ),iVar1 = local_40,iVar2 == 0) {
         local_4c = iVar7;
      }
      local_40 = iVar1;
   }
   iVar7 = 0;
   while (true) {
      iVar1 = OPENSSL_sk_num(psVar3);
      if (iVar1 <= iVar7) {
         return 1;
      }
      puVar6 = (undefined8*)OPENSSL_sk_value(psVar3, iVar7);
      if (( local_40<local_4c & (byte)~(byte)((uint)local_40 >> 0x18)> > 7 ) != 0) {
         if (iVar7 == local_40) {
            puVar6 = (undefined8*)OPENSSL_sk_value(psVar3, local_4c);
         } else if (iVar7 == local_4c) {
            puVar6 = (undefined8*)OPENSSL_sk_value(psVar3, local_40);
         }
      }
      ex = (X509_EXTENSION*)X509V3_EXT_nconf_int(conf, ctx, *puVar6, puVar6[1], puVar6[2]);
      if (ex == (X509_EXTENSION*)0x0) break;
      if (sk != (stack_st_X509_EXTENSION**)0x0) {
         if (ctx->flags == 2) {
            psVar5 = *sk;
            obj = X509_EXTENSION_get_object(ex);
            while (iVar1 = X509v3_get_ext_by_OBJ(psVar5, obj, -1),-1 < iVar1) {
               a = X509v3_delete_ext(psVar5, iVar1);
               X509_EXTENSION_free(a);
            };
         }
         psVar5 = X509v3_add_ext(sk, ex, -1);
         if (psVar5 == (stack_st_X509_EXTENSION*)0x0) {
            X509_EXTENSION_free(ex);
            return 0;
         }
      }
      iVar7 = iVar7 + 1;
      X509_EXTENSION_free(ex);
   };
   return 0;
}int X509V3_EXT_add_nconf(CONF *conf, X509V3_CTX *ctx, char *section, X509 *cert) {
   int iVar1;
   if (cert != (X509*)0x0) {
      cert = (X509*)&cert->skid;
   }
   iVar1 = X509V3_EXT_add_nconf_sk(conf, ctx, section, (stack_st_X509_EXTENSION**)cert);
   return iVar1;
}int X509V3_EXT_CRL_add_nconf(CONF *conf, X509V3_CTX *ctx, char *section, X509_CRL *crl) {
   int iVar1;
   if (crl != (X509_CRL*)0x0) {
      crl = (X509_CRL*)&crl->crl_number;
   }
   iVar1 = X509V3_EXT_add_nconf_sk(conf, ctx, section, (stack_st_X509_EXTENSION**)crl);
   return iVar1;
}int X509V3_EXT_REQ_add_nconf(CONF *conf, X509V3_CTX *ctx, char *section, X509_REQ *req) {
   int iVar1;
   long in_FS_OFFSET;
   stack_st_X509_EXTENSION *local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_28 = (stack_st_X509_EXTENSION*)0x0;
   iVar1 = X509V3_EXT_add_nconf_sk(conf, ctx, section, &local_28);
   if (( ( iVar1 != 0 ) && ( req != (X509_REQ*)0x0 ) ) && ( local_28 != (stack_st_X509_EXTENSION*)0x0 )) {
      iVar1 = X509_REQ_add_extensions(req, local_28);
   }
   OPENSSL_sk_pop_free(local_28, X509_EXTENSION_free);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}char *X509V3_get_string(X509V3_CTX *ctx, char *name, char *section) {
   _func_4287 *UNRECOVERED_JUMPTABLE;
   char *pcVar1;
   if (( ( ctx->db != (void*)0x0 ) && ( ctx->db_meth != (X509V3_CONF_METHOD*)0x0 ) ) && ( UNRECOVERED_JUMPTABLE = ctx->db_meth->get_string ),UNRECOVERED_JUMPTABLE != (_func_4287*)0x0) {
      for (int i_712 = 0; i_712 < 2; i_712++) {
         /* WARNING: Could not recover jumptable at 0x00100d41. Too many branches */
      }
      pcVar1 = ( *UNRECOVERED_JUMPTABLE )(ctx->db, name, section);
      return pcVar1;
   }
   ERR_new();
   ERR_set_debug("crypto/x509/v3_conf.c", 0x192, "X509V3_get_string");
   ERR_set_error(0x22, 0x94, 0);
   return (char*)0x0;
}stack_st_CONF_VALUE *X509V3_get_section(X509V3_CTX *ctx, char *section) {
   _func_4288 *UNRECOVERED_JUMPTABLE;
   stack_st_CONF_VALUE *psVar1;
   if (( ( ctx->db != (void*)0x0 ) && ( ctx->db_meth != (X509V3_CONF_METHOD*)0x0 ) ) && ( UNRECOVERED_JUMPTABLE = ctx->db_meth->get_section ),UNRECOVERED_JUMPTABLE != (_func_4288*)0x0) {
      for (int i_713 = 0; i_713 < 2; i_713++) {
         /* WARNING: Could not recover jumptable at 0x00100db2. Too many branches */
      }
      psVar1 = ( *UNRECOVERED_JUMPTABLE )(ctx->db, section);
      return psVar1;
   }
   ERR_new();
   ERR_set_debug("crypto/x509/v3_conf.c", 0x19d, "X509V3_get_section");
   ERR_set_error(0x22, 0x94, 0);
   return (stack_st_CONF_VALUE*)0x0;
}void X509V3_string_free(X509V3_CTX *ctx, char *str) {
   _func_4289 *UNRECOVERED_JUMPTABLE;
   if (( str != (char*)0x0 ) && ( UNRECOVERED_JUMPTABLE = ctx->db_meth->free_string ),UNRECOVERED_JUMPTABLE != (_func_4289*)0x0) {
      for (int i_714 = 0; i_714 < 2; i_714++) {
         /* WARNING: Could not recover jumptable at 0x00100e1a. Too many branches */
      }
      ( *UNRECOVERED_JUMPTABLE )(ctx->db, str);
      return;
   }
   return;
}void X509V3_section_free(X509V3_CTX *ctx, stack_st_CONF_VALUE *section) {
   _func_4290 *UNRECOVERED_JUMPTABLE;
   if (( section != (stack_st_CONF_VALUE*)0x0 ) && ( UNRECOVERED_JUMPTABLE = ctx->db_meth->free_section ),UNRECOVERED_JUMPTABLE != (_func_4290*)0x0) {
      for (int i_715 = 0; i_715 < 2; i_715++) {
         /* WARNING: Could not recover jumptable at 0x00100e4a. Too many branches */
      }
      ( *UNRECOVERED_JUMPTABLE )(ctx->db, section);
      return;
   }
   return;
}void X509V3_set_nconf(X509V3_CTX *ctx, CONF *conf) {
   if (ctx != (X509V3_CTX*)0x0) {
      ctx->db = conf;
      ctx->db_meth = (X509V3_CONF_METHOD*)nconf_method;
      return;
   }
   ERR_new();
   ERR_set_debug("crypto/x509/v3_conf.c", 0x1c9, "X509V3_set_nconf");
   ERR_set_error(0x22, 0xc0102, 0);
   return;
}void X509V3_set_ctx(X509V3_CTX *ctx, X509 *issuer, X509 *subject, X509_REQ *req, X509_CRL *crl, int flags) {
   if (ctx != (X509V3_CTX*)0x0) {
      ctx->flags = flags;
      ctx->issuer_cert = issuer;
      ctx->subject_cert = subject;
      ctx->subject_req = req;
      ctx->crl = crl;
      *(undefined8*)( ctx + 1 ) = 0;
      ctx->db_meth = (X509V3_CONF_METHOD*)0x0;
      ctx->db = (void*)0x0;
      return;
   }
   ERR_new();
   ERR_set_debug("crypto/x509/v3_conf.c", 0x1d4, "X509V3_set_ctx");
   ERR_set_error(0x22, 0xc0102, 0);
   return;
}undefined8 X509V3_set_issuer_pkey(long param_1, long param_2) {
   if (param_1 == 0) {
      ERR_new();
      ERR_set_debug("crypto/x509/v3_conf.c", 0x1e5, "X509V3_set_issuer_pkey");
      ERR_set_error(0x22, 0xc0102, 0);
   } else {
      if (( *(long*)( param_1 + 0x10 ) != 0 ) || ( param_2 == 0 )) {
         *(long*)( param_1 + 0x38 ) = param_2;
         return 1;
      }
      ERR_new();
      ERR_set_debug("crypto/x509/v3_conf.c", 0x1e9, "X509V3_set_issuer_pkey");
      ERR_set_error(0x22, 0x80106, 0);
   }
   return 0;
}X509_EXTENSION *X509V3_EXT_conf(lhash_st_CONF_VALUE *conf, X509V3_CTX *ctx, char *name, char *value) {
   CONF *conf_00;
   X509_EXTENSION *pXVar1;
   conf_00 = NCONF_new((CONF_METHOD*)0x0);
   if (conf_00 != (CONF*)0x0) {
      CONF_set_nconf(conf_00, conf);
      pXVar1 = X509V3_EXT_nconf(conf_00, ctx, name, value);
      CONF_set_nconf(conf_00, (lhash_st_CONF_VALUE*)0x0);
      NCONF_free(conf_00);
      return pXVar1;
   }
   return (X509_EXTENSION*)0x0;
}X509_EXTENSION *X509V3_EXT_conf_nid(lhash_st_CONF_VALUE *conf, X509V3_CTX *ctx, int ext_nid, char *value) {
   CONF *conf_00;
   X509_EXTENSION *pXVar1;
   conf_00 = NCONF_new((CONF_METHOD*)0x0);
   if (conf_00 != (CONF*)0x0) {
      CONF_set_nconf(conf_00, conf);
      pXVar1 = X509V3_EXT_nconf_nid(conf_00, ctx, ext_nid, value);
      CONF_set_nconf(conf_00, (lhash_st_CONF_VALUE*)0x0);
      NCONF_free(conf_00);
      return pXVar1;
   }
   return (X509_EXTENSION*)0x0;
}void X509V3_set_conf_lhash(X509V3_CTX *ctx, lhash_st_CONF_VALUE *lhash) {
   if (ctx != (X509V3_CTX*)0x0) {
      ctx->db = lhash;
      ctx->db_meth = (X509V3_CONF_METHOD*)conf_lhash_method;
      return;
   }
   ERR_new();
   ERR_set_debug("crypto/x509/v3_conf.c", 0x224, "X509V3_set_conf_lhash");
   ERR_set_error(0x22, 0xc0102, 0);
   return;
}int X509V3_EXT_add_conf(lhash_st_CONF_VALUE *conf, X509V3_CTX *ctx, char *section, X509 *cert) {
   int iVar1;
   CONF *conf_00;
   iVar1 = 0;
   conf_00 = NCONF_new((CONF_METHOD*)0x0);
   if (conf_00 != (CONF*)0x0) {
      CONF_set_nconf(conf_00, conf);
      iVar1 = X509V3_EXT_add_nconf(conf_00, ctx, section, cert);
      CONF_set_nconf(conf_00, (lhash_st_CONF_VALUE*)0x0);
      NCONF_free(conf_00);
   }
   return iVar1;
}int X509V3_EXT_CRL_add_conf(lhash_st_CONF_VALUE *conf, X509V3_CTX *ctx, char *section, X509_CRL *crl) {
   int iVar1;
   CONF *conf_00;
   iVar1 = 0;
   conf_00 = NCONF_new((CONF_METHOD*)0x0);
   if (conf_00 != (CONF*)0x0) {
      CONF_set_nconf(conf_00, conf);
      iVar1 = X509V3_EXT_CRL_add_nconf(conf_00, ctx, section, crl);
      CONF_set_nconf(conf_00, (lhash_st_CONF_VALUE*)0x0);
      NCONF_free(conf_00);
   }
   return iVar1;
}int X509V3_EXT_REQ_add_conf(lhash_st_CONF_VALUE *conf, X509V3_CTX *ctx, char *section, X509_REQ *req) {
   int iVar1;
   CONF *conf_00;
   iVar1 = 0;
   conf_00 = NCONF_new((CONF_METHOD*)0x0);
   if (conf_00 != (CONF*)0x0) {
      CONF_set_nconf(conf_00, conf);
      iVar1 = X509V3_EXT_REQ_add_nconf(conf_00, ctx, section, req);
      CONF_set_nconf(conf_00, (lhash_st_CONF_VALUE*)0x0);
      NCONF_free(conf_00);
   }
   return iVar1;
}
