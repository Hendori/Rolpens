/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void print_to_bio_err(undefined8 param_1, undefined8 param_2, undefined4 param_3, undefined4 param_4, undefined8 param_5) {
   OSSL_CMP_print_to_bio(_bio_err, param_1, param_2, param_3, param_4, param_5);
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void print_to_bio_out(undefined8 param_1, undefined8 param_2, undefined4 param_3, undefined4 param_4, undefined8 param_5) {
   OSSL_CMP_print_to_bio(_bio_out, param_1, param_2, param_3, param_4, param_5);
   return;
}
bool truststore_set_host_etc(undefined8 param_1, long param_2) {
   int iVar1;
   undefined8 uVar2;
   uVar2 = X509_STORE_get0_param();
   iVar1 = X509_VERIFY_PARAM_set1_host(uVar2, 0, 0);
   if (( ( iVar1 != 0 ) && ( iVar1 = X509_VERIFY_PARAM_set1_ip(uVar2, 0, 0) ),iVar1 != 0 )) {
      X509_VERIFY_PARAM_set_hostflags(uVar2, 5);
      if (( param_2 != 0 ) && ( iVar1 = X509_VERIFY_PARAM_set1_ip_asc(uVar2, param_2) ),iVar1 != 0) {
         return true;
      }

      iVar1 = X509_VERIFY_PARAM_set1_host(uVar2, param_2, 0);
      return iVar1 != 0;
   }

   return false;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */X509_STORE *load_trusted(undefined8 param_1, int param_2, undefined8 param_3) {
   int iVar1;
   X509_STORE *ctx;
   ctx = (X509_STORE*)load_certstore(param_1, opt_otherpass, param_3, vpm);
   if (ctx != (X509_STORE*)0x0) {
      X509_STORE_set_verify_cb(ctx, (verify_cb*)&X509_STORE_CTX_print_verify_cb);
      iVar1 = X509_STORE_set1_param(ctx, vpm);
      if (iVar1 != 0) {
         if (param_2 != 0) {
            return ctx;
         }

         iVar1 = truststore_set_host_etc(ctx, 0);
         if (iVar1 != 0) {
            return ctx;
         }

      }

      BIO_printf(_bio_err, "error setting verification parameters for %s\n", param_3);
      OSSL_CMP_CTX_print_errors(cmp_ctx);
      X509_STORE_free(ctx);
   }

   return (X509_STORE*)0x0;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */undefined8 write_PKIMESSAGE(long param_1, long *param_2) {
   long lVar1;
   int iVar2;
   long lVar3;
   if (param_1 == 0) {
      if (2 < opt_verbosity) {
         BIO_printf(_bio_err, "%s:%s:%d:CMP %s: NULL arg to write_PKIMESSAGE%s%s%s\n", "write_PKIMESSAGE", "apps/cmp.c", 0x32d, "error", &_LC4, &_LC4, &_LC4);
         return 0;
      }

   }
 else {
      lVar1 = *param_2;
      if (lVar1 == 0) {
         if (2 < opt_verbosity) {
            BIO_printf(_bio_err, "%s:%s:%d:CMP %s: not enough file names provided for writing PKIMessage%s%s%s\n", "write_PKIMESSAGE", "apps/cmp.c", 0x331, "error", &_LC4, &_LC4, &_LC4);
            return 0;
         }

      }
 else {
         lVar3 = next_item(lVar1);
         *param_2 = lVar3;
         iVar2 = OSSL_CMP_MSG_write(lVar1, param_1);
         if (-1 < iVar2) {
            return 1;
         }

         if (2 < opt_verbosity) {
            BIO_printf(_bio_err, "%s:%s:%d:CMP %s: cannot write PKIMessage to file \'%s\'%s%s\n", "write_PKIMESSAGE", "apps/cmp.c", 0x338, "error", lVar1, &_LC4, &_LC4);
            return 0;
         }

      }

   }

   return 0;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */long read_PKIMESSAGE(undefined8 param_1, long *param_2) {
   long lVar1;
   long lVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   lVar1 = *param_2;
   if (lVar1 == 0) {
      if (2 < opt_verbosity) {
         BIO_printf(_bio_err, "%s:%s:%d:CMP %s: not enough file names provided for reading PKIMessage%s%s%s\n", "read_PKIMESSAGE", "apps/cmp.c", 0x349, "error", &_LC4, &_LC4, &_LC4);
         return 0;
      }

   }
 else {
      lVar2 = next_item(lVar1);
      *param_2 = lVar2;
      uVar3 = app_get0_propq();
      uVar4 = app_get0_libctx();
      lVar2 = OSSL_CMP_MSG_read(lVar1, uVar4, uVar3);
      if (lVar2 != 0) {
         if (opt_verbosity < 6) {
            return lVar2;
         }

         BIO_printf(_bio_out, "%s:%s:%d:CMP %s: %s %s%s\n", "read_PKIMESSAGE", "apps/cmp.c", 0x354, &_LC9, param_1, lVar1, &_LC4);
         return lVar2;
      }

      if (2 < opt_verbosity) {
         BIO_printf(_bio_err, "%s:%s:%d:CMP %s: cannot read PKIMessage from file \'%s\'%s%s\n", "read_PKIMESSAGE", "apps/cmp.c", 0x352, "error", lVar1, &_LC4, &_LC4);
         return 0;
      }

   }

   return 0;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */long read_write_req_resp(undefined8 param_1, long param_2) {
   long lVar1;
   int iVar2;
   long lVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   long lVar6;
   long lVar7;
   lVar1 = opt_rspin;
   if (opt_reqout_only != 0) {
      iVar2 = OSSL_CMP_MSG_write();
      if (iVar2 < 0) {
         if (2 < opt_verbosity) {
            BIO_printf(_bio_err, "%s:%s:%d:CMP %s: cannot write request PKIMessage to file \'%s\'%s%s\n", "read_write_req_resp", "apps/cmp.c", 0x368, "error", opt_reqout_only, &_LC4, &_LC4);
         }

      }
 else {
         reqout_only_done = 1;
      }

      return 0;
   }

   if (opt_reqout == 0) {
      if (opt_reqin != 0) goto LAB_001004a1;
      LAB_0010051f:lVar7 = opt_reqin;
      if (opt_rspin != 0) goto LAB_001004ad;
      LAB_00100524:if (opt_use_mock_srv == 0) {
         if (opt_server == 0) {
            lVar6 = 0;
            if (2 < opt_verbosity) {
               BIO_printf(_bio_err, "%s:%s:%d:CMP %s: missing -server or -use_mock_srv option, or too few -rspin filename arguments%s%s%s\n", "read_write_req_resp", "apps/cmp.c", 0x390, "error", &_LC4, &_LC4, &_LC4);
            }

            goto LAB_001004f2;
         }

         if (( rspin_in_use != 0 ) && ( 3 < opt_verbosity )) {
            BIO_printf(_bio_out, "%s:%s:%d:CMP %s: too few -rspin filename arguments; resorting to contacting server%s%s%s\n", "read_write_req_resp", "apps/cmp.c", 0x394, "warning", &_LC4, &_LC4, &_LC4);
         }

         lVar3 = OSSL_CMP_MSG_http_perform(param_1, param_2);
      }
 else {
         if (( rspin_in_use != 0 ) && ( 3 < opt_verbosity )) {
            BIO_printf(_bio_out, "%s:%s:%d:CMP %s: too few -rspin filename arguments; resorting to using mock server%s%s%s\n", "read_write_req_resp", "apps/cmp.c", 0x38b, "warning", &_LC4, &_LC4, &_LC4);
         }

         lVar3 = OSSL_CMP_CTX_server_perform(param_1, param_2);
      }

      rspin_in_use = 0;
   }
 else {
      iVar2 = write_PKIMESSAGE(param_2, &opt_reqout);
      if (iVar2 == 0) {
         LAB_001005f0:lVar6 = 0;
         lVar7 = 0;
         goto LAB_001004f2;
      }

      if (opt_reqin == 0) goto LAB_0010051f;
      LAB_001004a1:lVar7 = 0;
      if (opt_rspin == 0) {
         param_2 = read_PKIMESSAGE("actually sending", &opt_reqin);
         if (param_2 == 0) goto LAB_001005f0;
         lVar6 = 0;
         lVar7 = param_2;
         if (( ( opt_reqin_new_tid != 0 ) && ( iVar2 = OSSL_CMP_MSG_update_transactionID(param_1, param_2) ),iVar2 == 0 )) goto LAB_001004f2;
         if (opt_rspin == 0) goto LAB_00100524;
      }

      LAB_001004ad:lVar3 = read_PKIMESSAGE("actually using", &opt_rspin);
   }

   lVar6 = lVar3;
   if (lVar3 == 0) goto LAB_001004f2;
   if (lVar1 == 0 && lVar7 == 0) {
      LAB_001004d1:if (( opt_rspout == 0 ) || ( iVar2 = iVar2 != 0 )) goto LAB_001004f2;
   }
 else {
      uVar4 = OSSL_CMP_MSG_get0_header(lVar3);
      uVar5 = OSSL_CMP_HDR_get0_recipNonce(uVar4);
      uVar4 = OSSL_CMP_HDR_get0_transactionID(uVar4);
      iVar2 = OSSL_CMP_CTX_set1_senderNonce(param_1, uVar5);
      if (( iVar2 != 0 ) && ( iVar2 = OSSL_CMP_CTX_set1_transactionID(param_1, uVar4) ),iVar2 != 0) goto LAB_001004d1;
   }

   lVar6 = 0;
   OSSL_CMP_MSG_free(lVar3);
   LAB_001004f2:OSSL_CMP_MSG_free(lVar7);
   return lVar6;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ulong save_free_certs(long param_1, char *param_2, char *param_3) {
   uint uVar1;
   int iVar2;
   BIO_METHOD *type;
   BIO *bp;
   long lVar3;
   X509 *x;
   char *pcVar4;
   ulong uVar5;
   char *format;
   undefined8 uVar6;
   int iVar7;
   char *pcVar8;
   uVar5 = 0;
   uVar1 = OPENSSL_sk_num();
   if (-1 < (int)uVar1) {
      uVar5 = (ulong)uVar1;
   }

   if (param_2 == (char*)0x0) {
      bp = (BIO*)0x0;
   }
 else {
      if (( param_1 != 0 ) && ( 5 < opt_verbosity )) {
         BIO_printf(_bio_out, "%s:%s:%d:CMP %s: received %d %s certificate(s), saving to file \'%s\'\n", "save_free_certs", "apps/cmp.c", 0x960, &_LC9, uVar5, param_3, param_2);
      }

      if (( ( 1 < (int)uVar1 ) && ( opt_certform != 0x8005 ) ) && ( 3 < opt_verbosity )) {
         BIO_printf(_bio_out, "%s:%s:%d:CMP %s: saving more than one certificate in non-PEM format%s%s%s\n", "save_free_certs", "apps/cmp.c", 0x963, "warning", &_LC4, &_LC4, &_LC4);
      }

      type = BIO_s_file();
      bp = BIO_new(type);
      if (( bp == (BIO*)0x0 ) || ( lVar3 = BIO_ctrl(bp, 0x6c, 5, param_2) ),(int)lVar3 == 0) {
         if (opt_verbosity < 3) {
            LAB_001008ff:uVar5 = 0xffffffff;
         }
 else {
            pcVar4 = "writing";
            uVar6 = 0x967;
            if (param_1 == 0) {
               pcVar4 = "deleting";
            }

            format = "%s:%s:%d:CMP %s: could not open file \'%s\' for %s %s certificate(s)\n";
            pcVar8 = param_2;
            LAB_00100a04:uVar5 = 0xffffffff;
            BIO_printf(_bio_err, format, "save_free_certs", "apps/cmp.c", uVar6, "error", pcVar8, pcVar4, param_3);
         }

      }
 else {
         iVar7 = 0;
         if ((int)uVar1 < 1) {
            uVar5 = 0;
         }
 else {
            do {
               x = (X509*)OPENSSL_sk_value(param_1, iVar7);
               if (( ( opt_certform != 0x8005 ) || ( iVar2 = PEM_write_bio_X509(bp, x) ),iVar2 == 0 )) {
                  if (( opt_certform != 0x8005 ) && ( opt_certform != 4 )) {
                     BIO_printf(_bio_err, "error: unsupported type \'%s\' for writing certificates\n", opt_certform_s);
                  }

                  if (opt_verbosity < 3) goto LAB_001008ff;
                  uVar6 = 0x96f;
                  format = "%s:%s:%d:CMP %s: cannot write %s certificate to file \'%s\'%s\n";
                  pcVar8 = param_3;
                  pcVar4 = param_2;
                  param_3 = "";
                  goto LAB_00100a04;
               }

               iVar7 = iVar7 + 1;
            }
 while ( iVar7 < (int)uVar5 );
         }

      }

   }

   BIO_free(bp);
   OSSL_STACK_OF_X509_free(param_1);
   return uVar5;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */byte *prev_item_part_0(byte *param_1, byte *param_2) {
   byte bVar1;
   byte *pbVar2;
   ushort **ppuVar3;
   void *pvVar4;
   byte *pbVar5;
   byte *__src;
   ulong uVar6;
   pbVar2 = param_2;
   do {
      __src = pbVar2;
      if (__src <= param_1) {
         uVar6 = (long)param_2 - (long)__src;
         if (uVar6 < 0x29) {
            pvVar4 = memcpy(opt_item, __src, uVar6);
            *(undefined1*)( (long)pvVar4 + uVar6 ) = 0;
            return __src;
         }

         goto LAB_00100b2c;
      }

      bVar1 = __src[-1];
   }
 while ( ( bVar1 != 0x2c ) && ( ppuVar3 = __ctype_b_loc() ),pbVar2 = __src + -1,( *(byte*)( (long)*ppuVar3 + (ulong)bVar1 * 2 + 1 ) & 0x20 ) == 0 );
   uVar6 = (long)param_2 - (long)__src;
   if (uVar6 < 0x29) {
      pvVar4 = memcpy(opt_item, __src, uVar6);
      *(undefined1*)( (long)pvVar4 + uVar6 ) = 0;
      pbVar2 = __src + -1;
   }
 else {
      LAB_00100b2c:if (3 < opt_verbosity) {
         BIO_printf(_bio_out, "%s:%s:%d:CMP %s: using only first %d characters of section name starting with \"%.*s\"\n", "prev_item", "apps/cmp.c", 0xa24, "warning", 0x28, 0x28, __src);
      }

      opt_item._0_8_ = *(undefined8*)__src;
      opt_item._8_8_ = *(undefined8*)( __src + 8 );
      opt_item._16_8_ = *(undefined8*)( __src + 0x10 );
      opt_item._24_8_ = *(undefined8*)( __src + 0x18 );
      opt_item._32_8_ = *(undefined8*)( __src + 0x20 );
      opt_item[0x28] = 0;
      if (__src <= param_1) {
         opt_item[0x28] = 0;
         return __src;
      }

      pbVar2 = __src + -1;
   }

   while (( pbVar5 = pbVar2 ),bVar1 = *pbVar5,bVar1 == 0x2c || ( ppuVar3 = __ctype_b_loc()(*(byte*)( (long)*ppuVar3 + (ulong)bVar1 * 2 + 1 ) & 0x20) != 0 )) {
      if (param_1 == pbVar5) {
         return param_1;
      }

      pbVar2 = pbVar5 + -1;
      __src = pbVar5;
   }
;
   return __src;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */char *opt_str(void) {
   char *pcVar1;
   undefined8 uVar2;
   pcVar1 = (char*)opt_arg();
   if (*pcVar1 == '\0') {
      if (opt_verbosity < 4) {
         pcVar1 = (char*)0x0;
      }
 else {
         uVar2 = opt_flag();
         pcVar1 = (char*)0x0;
         BIO_printf(_bio_out, "%s:%s:%d:CMP %s: %s option argument is empty string, resetting option%s%s\n", "opt_str", "apps/cmp.c", 0xae2, "warning", uVar2, &_LC4, &_LC4);
      }

   }
 else if (( *pcVar1 == '-' ) && ( 3 < opt_verbosity )) {
      uVar2 = opt_flag();
      BIO_printf(_bio_out, "%s:%s:%d:CMP %s: %s option argument starts with hyphen%s%s\n", "opt_str", "apps/cmp.c", 0xae6, "warning", uVar2, &_LC4, &_LC4);
   }

   return pcVar1;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */uint save_cert_or_delete(long param_1, char *param_2, undefined8 param_3) {
   int iVar1;
   uint uVar2;
   undefined8 uVar3;
   int *piVar4;
   long in_FS_OFFSET;
   char acStack_88[88];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_2 == (char*)0x0) {
      uVar2 = 1;
   }
 else if (param_1 == 0) {
      uVar2 = 1;
      BIO_snprintf(acStack_88, 0x50, "%s certificate", param_3);
      iVar1 = unlink(param_2);
      if (iVar1 != 0) {
         piVar4 = __errno_location();
         if (*piVar4 != 2) {
            if (opt_verbosity < 3) {
               uVar2 = 0;
            }
 else {
               uVar2 = 0;
               BIO_printf(_bio_err, "%s:%s:%d:CMP %s: Failed to delete %s, which should be done to indicate there is no %s%s\n", "delete_file", "apps/cmp.c", 0x99e, "error", param_2, acStack_88, &_LC4);
            }

         }

      }

   }
 else {
      uVar3 = OPENSSL_sk_new_null();
      iVar1 = X509_add_cert(uVar3, param_1, 1);
      if (iVar1 == 0) {
         OPENSSL_sk_free(uVar3);
         uVar2 = 0;
      }
 else {
         uVar2 = save_free_certs(uVar3, param_2, param_3);
         uVar2 = ~uVar2 >> 0x1f;
      }

   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */undefined8 get_opts(undefined8 param_1, undefined8 param_2) {
   uint uVar1;
   int iVar2;
   undefined8 uVar3;
   prog = opt_init(param_1, param_2, cmp_options);
   uVar1 = opt_verbosity;
   switchD_00100ed2_caseD_0:do {
      while (true) {
         opt_verbosity = uVar1;
         iVar2 = opt_next();
         if (iVar2 == 0) {
            iVar2 = opt_check_rest_arg(0);
            if (iVar2 != 0) {
               return 1;
            }

            goto switchD_00100ed2_caseD_ffffffff;
         }

         uVar1 = opt_verbosity;
         if (0x49 < iVar2) break;
         if (-2 < iVar2) {
            switch (iVar2) {
               case 1:
          opt_help(cmp_options);
          return 0xffffffff;
               case 4:
          uVar3 = opt_int_arg();
          uVar1 = (uint)uVar3;
          if (8 < (uint)uVar3) {
            if (2 < (int)opt_verbosity) {
              BIO_printf(_bio_err,
                         "%s:%s:%d:CMP %s: Logging verbosity level %d out of range (0 .. 8)%s%s\n",
                         "set_verbosity","apps/cmp.c",0x2fb,"error",uVar3,&_LC4,&_LC4);
            }
            goto LAB_00100f2f;
          }
          break;
               case 5:
          opt_cmd_s = opt_str();
          uVar1 = opt_verbosity;
          break;
               case 6:
          opt_infotype_s = opt_str();
          uVar1 = opt_verbosity;
          break;
               case 7:
          opt_profile = opt_str();
          uVar1 = opt_verbosity;
          break;
               case 8:
          opt_geninfo = opt_str();
          uVar1 = opt_verbosity;
          break;
               case 9:
          opt_template = opt_str();
          uVar1 = opt_verbosity;
          break;
               case 10:
          opt_keyspec = opt_str();
          uVar1 = opt_verbosity;
          break;
               case 0xb:
          opt_newkey = opt_str();
          uVar1 = opt_verbosity;
          break;
               case 0xc:
          opt_newkeypass = opt_str();
          uVar1 = opt_verbosity;
          break;
               case 0xd:
          opt_centralkeygen = 1;
          break;
               case 0xe:
          opt_newkeyout = opt_str();
          uVar1 = opt_verbosity;
          break;
               case 0xf:
          opt_subject = opt_str();
          uVar1 = opt_verbosity;
          break;
               case 0x10:
          opt_days = opt_int_arg();
          uVar1 = opt_verbosity;
          break;
               case 0x11:
          opt_reqexts = opt_str();
          uVar1 = opt_verbosity;
          break;
               case 0x12:
          opt_sans = opt_str();
          uVar1 = opt_verbosity;
          break;
               case 0x13:
          opt_san_nodefault = 1;
          break;
               case 0x14:
          opt_policies = opt_str();
          uVar1 = opt_verbosity;
          break;
               case 0x15:
          opt_policy_oids = opt_str();
          uVar1 = opt_verbosity;
          break;
               case 0x16:
          opt_policy_oids_critical = 1;
          break;
               case 0x17:
          opt_popo = opt_int_arg();
          uVar1 = opt_verbosity;
          if (3 < opt_popo + 1U) {
            if ((int)opt_verbosity < 3) goto LAB_00100f2f;
            BIO_printf(_bio_err,
                       "%s:%s:%d:CMP %s: invalid popo spec. Valid values are -1 .. 2%s%s%s\n",
                       "get_opts","apps/cmp.c",0xbca,"error",&_LC4,&_LC4,&_LC4);
            goto switchD_00100ed2_caseD_ffffffff;
          }
          break;
               case 0x18:
          opt_csr = opt_str();
          uVar1 = opt_verbosity;
          break;
               case 0x19:
          opt_out_trusted = opt_str();
          uVar1 = opt_verbosity;
          break;
               case 0x1a:
          opt_implicit_confirm = 1;
          break;
               case 0x1b:
          opt_disable_confirm = 1;
          break;
               case 0x1c:
          opt_certout = opt_str();
          uVar1 = opt_verbosity;
          break;
               case 0x1d:
          opt_chainout = opt_str();
          uVar1 = opt_verbosity;
          break;
               case 0x1e:
          opt_oldcert = opt_str();
          uVar1 = opt_verbosity;
          break;
               case 0x1f:
          opt_issuer = opt_str();
          uVar1 = opt_verbosity;
          break;
               case 0x20:
          opt_serial = opt_str();
          uVar1 = opt_verbosity;
          break;
               case 0x21:
          opt_revreason = opt_int_arg();
          if ((0xb < opt_revreason + 1U) || (uVar1 = opt_verbosity, opt_revreason == 7)) {
            if (2 < (int)opt_verbosity) {
              BIO_printf(_bio_err,
                         "%s:%s:%d:CMP %s: invalid revreason. Valid values are -1 .. 6, 8 .. 10%s%s%s\n"
                         ,"get_opts","apps/cmp.c",0xbe8,"error",&_LC4,&_LC4,&_LC4);
            }
            goto LAB_00100f2f;
          }
          break;
               case 0x22:
          opt_server = opt_str();
          uVar1 = opt_verbosity;
          break;
               case 0x23:
          opt_proxy = opt_str();
          uVar1 = opt_verbosity;
          break;
               case 0x24:
          opt_no_proxy = opt_str();
          uVar1 = opt_verbosity;
          break;
               case 0x25:
          opt_recipient = opt_str();
          uVar1 = opt_verbosity;
          break;
               case 0x26:
          opt_path = opt_str();
          uVar1 = opt_verbosity;
          break;
               case 0x27:
          opt_keep_alive = opt_int_arg();
          uVar1 = opt_verbosity;
          if (2 < opt_keep_alive) {
            if (2 < (int)opt_verbosity) {
              BIO_printf(_bio_err,"%s:%s:%d:CMP %s: -keep_alive argument must be 0, 1, or 2%s%s%s\n"
                         ,"get_opts","apps/cmp.c",0xb17,"error",&_LC4,&_LC4,&_LC4);
            }
            goto LAB_00100f2f;
          }
          break;
               case 0x28:
          opt_msg_timeout = opt_int_arg();
          uVar1 = opt_verbosity;
          break;
               case 0x29:
          opt_total_timeout = opt_int_arg();
          uVar1 = opt_verbosity;
          break;
               case 0x2a:
          opt_trusted = opt_str();
          uVar1 = opt_verbosity;
          break;
               case 0x2b:
          opt_untrusted = opt_str();
          uVar1 = opt_verbosity;
          break;
               case 0x2c:
          opt_srvcert = opt_str();
          uVar1 = opt_verbosity;
          break;
               case 0x2d:
          opt_expect_sender = opt_str();
          uVar1 = opt_verbosity;
          break;
               case 0x2e:
          opt_ignore_keyusage = 1;
          break;
               case 0x2f:
          opt_unprotected_errors = 1;
          break;
               case 0x30:
          opt_no_cache_extracerts = 1;
          break;
               case 0x31:
          opt_srvcertout = opt_str();
          uVar1 = opt_verbosity;
          break;
               case 0x32:
          opt_extracertsout = opt_str();
          uVar1 = opt_verbosity;
          break;
               case 0x33:
          opt_cacertsout = opt_str();
          uVar1 = opt_verbosity;
          break;
               case 0x34:
          opt_oldwithold = opt_str();
          uVar1 = opt_verbosity;
          break;
               case 0x35:
          opt_newwithnew = opt_str();
          uVar1 = opt_verbosity;
          break;
               case 0x36:
          opt_newwithold = opt_str();
          uVar1 = opt_verbosity;
          break;
               case 0x37:
          opt_oldwithnew = opt_str();
          uVar1 = opt_verbosity;
          break;
               case 0x38:
          opt_crlcert = opt_str();
          uVar1 = opt_verbosity;
          break;
               case 0x39:
          opt_oldcrl = opt_str();
          uVar1 = opt_verbosity;
          break;
               case 0x3a:
          opt_crlout = opt_str();
          uVar1 = opt_verbosity;
          break;
               case 0x3b:
          opt_ref = opt_str();
          uVar1 = opt_verbosity;
          break;
               case 0x3c:
          opt_secret = opt_str();
          uVar1 = opt_verbosity;
          break;
               case 0x3d:
          opt_cert = opt_str();
          uVar1 = opt_verbosity;
          break;
               case 0x3e:
          opt_own_trusted = opt_str();
          uVar1 = opt_verbosity;
          break;
               case 0x3f:
          opt_key = opt_str();
          uVar1 = opt_verbosity;
          break;
               case 0x40:
          opt_keypass = opt_str();
          uVar1 = opt_verbosity;
          break;
               case 0x41:
          opt_digest = opt_str();
          uVar1 = opt_verbosity;
          break;
               case 0x42:
          opt_mac = opt_str();
          uVar1 = opt_verbosity;
          break;
               case 0x43:
          opt_extracerts = opt_str();
          uVar1 = opt_verbosity;
          break;
               case 0x44:
          opt_unprotected_requests = 1;
          break;
               case 0x45:
          opt_certform_s = (undefined *)opt_str();
          uVar1 = opt_verbosity;
          break;
               case 0x46:
          opt_crlform_s = (undefined *)opt_str();
          uVar1 = opt_verbosity;
          break;
               case 0x47:
          opt_keyform_s = opt_str();
          uVar1 = opt_verbosity;
          break;
               case 0x48:
          opt_otherpass = opt_str();
          uVar1 = opt_verbosity;
          break;
               case 0x49:
          opt_engine = opt_str();
          uVar1 = opt_verbosity;
          break;
               case -1:
          goto switchD_00100ed2_caseD_ffffffff;
            }

         }

      }
;
      if (iVar2 < 0x645) {
         if (iVar2 < 0x5dd) goto switchD_00100ed2_caseD_0;
         switch (iVar2) {
            case 0x5dd:
            case 0x5de:
        iVar2 = opt_rand();
        break;
            default:
        goto switchD_00100ed2_caseD_0;
            case 0x5e0:
        opt_tls_used = 1;
        goto switchD_00100ed2_caseD_0;
            case 0x5e1:
        opt_tls_cert = opt_str();
        uVar1 = opt_verbosity;
        goto switchD_00100ed2_caseD_0;
            case 0x5e2:
        opt_tls_key = opt_str();
        uVar1 = opt_verbosity;
        goto switchD_00100ed2_caseD_0;
            case 0x5e3:
        opt_tls_keypass = opt_str();
        uVar1 = opt_verbosity;
        goto switchD_00100ed2_caseD_0;
            case 0x5e4:
        opt_tls_extra = opt_str();
        uVar1 = opt_verbosity;
        goto switchD_00100ed2_caseD_0;
            case 0x5e5:
        opt_tls_trusted = opt_str();
        uVar1 = opt_verbosity;
        goto switchD_00100ed2_caseD_0;
            case 0x5e6:
        opt_tls_host = opt_str();
        uVar1 = opt_verbosity;
        goto switchD_00100ed2_caseD_0;
            case 0x5e7:
        opt_batch = 1;
        goto switchD_00100ed2_caseD_0;
            case 0x5e8:
        opt_repeat = opt_int_arg();
        uVar1 = opt_verbosity;
        goto switchD_00100ed2_caseD_0;
            case 0x5e9:
        opt_reqin = opt_str();
        uVar1 = opt_verbosity;
        goto switchD_00100ed2_caseD_0;
            case 0x5ea:
        opt_reqin_new_tid = 1;
        goto switchD_00100ed2_caseD_0;
            case 0x5eb:
        opt_reqout = opt_str();
        uVar1 = opt_verbosity;
        goto switchD_00100ed2_caseD_0;
            case 0x5ec:
        opt_reqout_only = opt_str();
        uVar1 = opt_verbosity;
        goto switchD_00100ed2_caseD_0;
            case 0x5ed:
        opt_rspin = opt_str();
        uVar1 = opt_verbosity;
        goto switchD_00100ed2_caseD_0;
            case 0x5ee:
        opt_rspout = opt_str();
        uVar1 = opt_verbosity;
        goto switchD_00100ed2_caseD_0;
            case 0x5ef:
        opt_use_mock_srv = 1;
        goto switchD_00100ed2_caseD_0;
            case 0x5f0:
        opt_port = opt_str();
        uVar1 = opt_verbosity;
        goto switchD_00100ed2_caseD_0;
            case 0x5f1:
        opt_max_msgs = opt_int_arg();
        uVar1 = opt_verbosity;
        goto switchD_00100ed2_caseD_0;
            case 0x5f2:
        opt_srv_ref = opt_str();
        uVar1 = opt_verbosity;
        goto switchD_00100ed2_caseD_0;
            case 0x5f3:
        opt_srv_secret = opt_str();
        uVar1 = opt_verbosity;
        goto switchD_00100ed2_caseD_0;
            case 0x5f4:
        opt_srv_cert = opt_str();
        uVar1 = opt_verbosity;
        goto switchD_00100ed2_caseD_0;
            case 0x5f5:
        opt_srv_key = opt_str();
        uVar1 = opt_verbosity;
        goto switchD_00100ed2_caseD_0;
            case 0x5f6:
        opt_srv_keypass = opt_str();
        uVar1 = opt_verbosity;
        goto switchD_00100ed2_caseD_0;
            case 0x5f7:
        opt_srv_trusted = opt_str();
        uVar1 = opt_verbosity;
        goto switchD_00100ed2_caseD_0;
            case 0x5f8:
        opt_srv_untrusted = opt_str();
        uVar1 = opt_verbosity;
        goto switchD_00100ed2_caseD_0;
            case 0x5f9:
        opt_ref_cert = opt_str();
        uVar1 = opt_verbosity;
        goto switchD_00100ed2_caseD_0;
            case 0x5fa:
        opt_rsp_cert = opt_str();
        uVar1 = opt_verbosity;
        goto switchD_00100ed2_caseD_0;
            case 0x5fb:
        opt_rsp_key = opt_str();
        uVar1 = opt_verbosity;
        goto switchD_00100ed2_caseD_0;
            case 0x5fc:
        opt_rsp_keypass = opt_str();
        uVar1 = opt_verbosity;
        goto switchD_00100ed2_caseD_0;
            case 0x5fd:
        opt_rsp_crl = opt_str();
        uVar1 = opt_verbosity;
        goto switchD_00100ed2_caseD_0;
            case 0x5fe:
        opt_rsp_extracerts = opt_str();
        uVar1 = opt_verbosity;
        goto switchD_00100ed2_caseD_0;
            case 0x5ff:
        opt_rsp_capubs = opt_str();
        uVar1 = opt_verbosity;
        goto switchD_00100ed2_caseD_0;
            case 0x600:
        opt_rsp_newwithnew = opt_str();
        uVar1 = opt_verbosity;
        goto switchD_00100ed2_caseD_0;
            case 0x601:
        opt_rsp_newwithold = opt_str();
        uVar1 = opt_verbosity;
        goto switchD_00100ed2_caseD_0;
            case 0x602:
        opt_rsp_oldwithnew = opt_str();
        uVar1 = opt_verbosity;
        goto switchD_00100ed2_caseD_0;
            case 0x603:
        opt_poll_count = opt_int_arg();
        uVar1 = opt_verbosity;
        goto switchD_00100ed2_caseD_0;
            case 0x604:
        opt_check_after = opt_int_arg();
        uVar1 = opt_verbosity;
        goto switchD_00100ed2_caseD_0;
            case 0x605:
        opt_grant_implicitconf = 1;
        goto switchD_00100ed2_caseD_0;
            case 0x606:
        opt_pkistatus = opt_int_arg();
        uVar1 = opt_verbosity;
        goto switchD_00100ed2_caseD_0;
            case 0x607:
        opt_failure = opt_int_arg();
        uVar1 = opt_verbosity;
        goto switchD_00100ed2_caseD_0;
            case 0x608:
        opt_failurebits = opt_int_arg();
        uVar1 = opt_verbosity;
        goto switchD_00100ed2_caseD_0;
            case 0x609:
        opt_statusstring = opt_str();
        uVar1 = opt_verbosity;
        goto switchD_00100ed2_caseD_0;
            case 0x60a:
        opt_send_error = 1;
        goto switchD_00100ed2_caseD_0;
            case 0x60b:
        opt_send_unprotected = 1;
        goto switchD_00100ed2_caseD_0;
            case 0x60c:
        opt_send_unprot_err = 1;
        goto switchD_00100ed2_caseD_0;
            case 0x60d:
        opt_accept_unprotected = 1;
        goto switchD_00100ed2_caseD_0;
            case 0x60e:
        opt_accept_unprot_err = 1;
        goto switchD_00100ed2_caseD_0;
            case 0x60f:
        opt_accept_raverified = 1;
        goto switchD_00100ed2_caseD_0;
            case 0x641:
            case 0x642:
            case 0x643:
            case 0x644:
        iVar2 = opt_provider();
         }

      }
 else {
         if (0x1d < iVar2 - 0x7d1U) goto switchD_00100ed2_caseD_0;
         iVar2 = opt_verify(iVar2, vpm);
      }

      uVar1 = opt_verbosity;
      if (iVar2 == 0) {
         switchD_00100ed2_caseD_ffffffff:LAB_00100f2f:BIO_printf(_bio_err, "%s: Use -help for summary.\n", prog);
         return 0;
      }

   }
 while ( true );
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */long setup_srv_ctx(undefined8 param_1) {
   undefined4 uVar1;
   int iVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   long lVar5;
   size_t sVar6;
   char *pcVar7;
   X509 *pXVar8;
   EVP_PKEY *pEVar9;
   X509_STORE *v;
   long lVar10;
   X509_CRL *a;
   uVar3 = app_get0_propq();
   uVar4 = app_get0_libctx();
   lVar5 = ossl_cmp_mock_srv_new(uVar4, uVar3);
   if (lVar5 == 0) {
      return 0;
   }

   uVar3 = OSSL_CMP_SRV_CTX_get0_cmp_ctx(lVar5);
   pcVar7 = opt_srv_ref;
   if (opt_srv_ref == (char*)0x0) {
      if (opt_srv_cert == 0) {
         if (2 < opt_verbosity) {
            BIO_printf(_bio_err, "%s:%s:%d:CMP %s: must give -srv_ref for mock server if no -srv_cert given%s%s%s\n", "setup_srv_ctx", "apps/cmp.c", 0x477, "error", &_LC4, &_LC4, &_LC4);
         }

         goto LAB_00101fb0;
      }

      if (opt_srv_secret == 0) goto LAB_00101ff0;
      LAB_0010195d:pcVar7 = (char*)get_passwd(opt_srv_secret, "PBMAC secret of mock server");
      if (pcVar7 != (char*)0x0) {
         cleanse(opt_srv_secret);
         sVar6 = strlen(pcVar7);
         iVar2 = OSSL_CMP_CTX_set1_secretValue(uVar3, pcVar7, sVar6 & 0xffffffff);
         clear_free(pcVar7);
         if (iVar2 == 0) goto LAB_00101fb0;
      }

      LAB_001019a6:if (( opt_srv_secret != 0 ) || ( ( opt_srv_cert == 0 ) == ( opt_srv_key == 0 ) )) {
         if (opt_srv_cert != 0) {
            LAB_001019c7:lVar10 = opt_srv_cert;
            uVar4 = get_passwd(opt_srv_keypass, "signer certificate of the mock server");
            pXVar8 = (X509*)load_cert_pass(lVar10, 0, 0, uVar4, "signer certificate of the mock server");
            clear_free(uVar4);
            if (pXVar8 == (X509*)0x0) goto LAB_00101fb0;
            iVar2 = OSSL_CMP_CTX_set1_cert(uVar3, pXVar8);
            X509_free(pXVar8);
            if (iVar2 == 0) goto LAB_00101fb0;
         }

         uVar1 = opt_keyform;
         lVar10 = opt_srv_key;
         if (opt_srv_key != 0) {
            uVar4 = get_passwd(opt_srv_keypass, "private key for mock server cert");
            pEVar9 = (EVP_PKEY*)load_key(lVar10, uVar1, 0, uVar4, param_1, "private key for mock server cert");
            clear_free(uVar4);
            if (( pEVar9 == (EVP_PKEY*)0x0 ) || ( iVar2 = iVar2 == 0 )) {
               EVP_PKEY_free(pEVar9);
               goto LAB_00101fb0;
            }

            EVP_PKEY_free(pEVar9);
         }

         cleanse(opt_srv_keypass);
         if (opt_srv_trusted == 0) {
            if (3 < opt_verbosity) {
               BIO_printf(_bio_out, "%s:%s:%d:CMP %s: mock server will not be able to handle signature-protected requests since -srv_trusted is not given%s%s%s\n", "setup_srv_ctx", "apps/cmp.c", 0x4b2, "warning", &_LC4, &_LC4, &_LC4);
            }

         }
 else {
            v = (X509_STORE*)load_trusted(opt_srv_trusted, 0, "certs trusted by mock server");
            if (( v == (X509_STORE*)0x0 ) || ( iVar2 = iVar2 == 0 )) {
               X509_STORE_free(v);
               goto LAB_00101fb0;
            }

         }

         if (opt_srv_untrusted != 0) {
            lVar10 = load_certs_multifile(opt_srv_untrusted, opt_otherpass, "untrusted certificates for mock server", vpm);
            if (lVar10 == 0) goto LAB_00101fb0;
            iVar2 = OSSL_CMP_CTX_set1_untrusted(uVar3, lVar10);
            OSSL_STACK_OF_X509_free(lVar10);
            if (iVar2 == 0) goto LAB_00101fb0;
         }

         lVar10 = opt_ref_cert;
         if (opt_ref_cert != 0) {
            uVar4 = get_passwd(opt_otherpass, "reference cert to be expected by the mock server");
            pXVar8 = (X509*)load_cert_pass(lVar10, 0, 0, uVar4, "reference cert to be expected by the mock server");
            clear_free(uVar4);
            if (pXVar8 == (X509*)0x0) goto LAB_00101fb0;
            iVar2 = ossl_cmp_mock_srv_set1_refCert(lVar5, pXVar8);
            X509_free(pXVar8);
            if (iVar2 == 0) goto LAB_00101fb0;
         }

         lVar10 = opt_rsp_cert;
         if (opt_rsp_cert == 0) {
            if (3 < opt_verbosity) {
               BIO_printf(_bio_out, "%s:%s:%d:CMP %s: no -rsp_cert given for mock server%s%s%s\n", "setup_srv_ctx", "apps/cmp.c", 0x4be, "warning", &_LC4, &_LC4, &_LC4);
            }

         }
 else {
            uVar4 = get_passwd(opt_rsp_keypass, "cert the mock server returns on certificate requests");
            pXVar8 = (X509*)load_cert_pass(lVar10, 0, 0, uVar4, "cert the mock server returns on certificate requests");
            clear_free(uVar4);
            if (pXVar8 == (X509*)0x0) goto LAB_00101fb0;
            iVar2 = ossl_cmp_mock_srv_set1_certOut(lVar5, pXVar8);
            X509_free(pXVar8);
            if (iVar2 == 0) goto LAB_00101fb0;
         }

         uVar1 = opt_keyform;
         lVar10 = opt_rsp_key;
         if (opt_rsp_key != 0) {
            uVar4 = get_passwd(opt_rsp_keypass, "private key for enrollment cert");
            pEVar9 = (EVP_PKEY*)load_key(lVar10, uVar1, 0, uVar4, param_1, "private key for enrollment cert");
            clear_free(uVar4);
            if (( pEVar9 == (EVP_PKEY*)0x0 ) || ( iVar2 = ossl_cmp_mock_srv_set1_keyOut(lVar5, pEVar9) ),iVar2 == 0) {
               EVP_PKEY_free(pEVar9);
               goto LAB_00101fb0;
            }

            EVP_PKEY_free(pEVar9);
         }

         cleanse(opt_rsp_keypass);
         if (opt_rsp_crl != 0) {
            a = (X509_CRL*)load_crl(opt_rsp_crl, 0, 0, "CRL to be returned by the mock server");
            if (a == (X509_CRL*)0x0) goto LAB_00101fb0;
            iVar2 = ossl_cmp_mock_srv_set1_crlOut(lVar5, a);
            X509_CRL_free(a);
            if (iVar2 == 0) goto LAB_00101fb0;
         }

         if (opt_rsp_extracerts != 0) {
            lVar10 = load_certs_multifile(opt_rsp_extracerts, opt_otherpass, "CMP extra certificates for mock server", vpm);
            if (lVar10 == 0) goto LAB_00101fb0;
            iVar2 = ossl_cmp_mock_srv_set1_chainOut(lVar5, lVar10);
            OSSL_STACK_OF_X509_free(lVar10);
            if (iVar2 == 0) goto LAB_00101fb0;
         }

         if (opt_rsp_capubs != 0) {
            lVar10 = load_certs_multifile(opt_rsp_capubs, opt_otherpass, "caPubs for mock server", vpm);
            if (lVar10 == 0) goto LAB_00101fb0;
            iVar2 = ossl_cmp_mock_srv_set1_caPubsOut(lVar5, lVar10);
            OSSL_STACK_OF_X509_free(lVar10);
            if (iVar2 == 0) goto LAB_00101fb0;
         }

         lVar10 = opt_rsp_newwithnew;
         if (opt_rsp_newwithnew != 0) {
            uVar4 = get_passwd(opt_otherpass, "NewWithNew cert the mock server returns in rootCaKeyUpdate");
            pXVar8 = (X509*)load_cert_pass(lVar10, 0, 0, uVar4, "NewWithNew cert the mock server returns in rootCaKeyUpdate");
            clear_free(uVar4);
            if (pXVar8 == (X509*)0x0) goto LAB_00101fb0;
            iVar2 = ossl_cmp_mock_srv_set1_newWithNew(lVar5, pXVar8);
            X509_free(pXVar8);
            if (iVar2 == 0) goto LAB_00101fb0;
         }

         lVar10 = opt_rsp_newwithold;
         if (opt_rsp_newwithold != 0) {
            uVar4 = get_passwd(opt_otherpass, "NewWithOld cert the mock server returns in rootCaKeyUpdate");
            pXVar8 = (X509*)load_cert_pass(lVar10, 0, 0, uVar4, "NewWithOld cert the mock server returns in rootCaKeyUpdate");
            clear_free(uVar4);
            if (pXVar8 == (X509*)0x0) goto LAB_00101fb0;
            iVar2 = ossl_cmp_mock_srv_set1_newWithOld(lVar5, pXVar8);
            X509_free(pXVar8);
            if (iVar2 == 0) goto LAB_00101fb0;
         }

         lVar10 = opt_rsp_oldwithnew;
         if (opt_rsp_oldwithnew != 0) {
            uVar4 = get_passwd(opt_otherpass, "OldWithNew cert the mock server returns in rootCaKeyUpdate");
            pXVar8 = (X509*)load_cert_pass(lVar10, 0, 0, uVar4, "OldWithNew cert the mock server returns in rootCaKeyUpdate");
            clear_free(uVar4);
            if (pXVar8 == (X509*)0x0) goto LAB_00101fb0;
            iVar2 = ossl_cmp_mock_srv_set1_oldWithNew(lVar5, pXVar8);
            X509_free(pXVar8);
            if (iVar2 == 0) goto LAB_00101fb0;
         }

         ossl_cmp_mock_srv_set_pollCount(lVar5, opt_poll_count);
         ossl_cmp_mock_srv_set_checkAfterTime(lVar5, opt_check_after);
         if (opt_grant_implicitconf != 0) {
            OSSL_CMP_SRV_CTX_set_grant_implicit_confirm(lVar5, 1);
         }

         if (opt_failure == 0x80000000) {
            LAB_001022a0:if (0x7ffffff < opt_failurebits) {
               if (2 < opt_verbosity) {
                  BIO_printf(_bio_err, "%s:%s:%d:CMP %s: -failurebits out of range%s%s%s\n", "setup_srv_ctx", "apps/cmp.c", 0x4f8, "error", &_LC4, &_LC4, &_LC4);
               }

               goto LAB_00101fb0;
            }

         }
 else {
            if (0x1a < opt_failure) {
               if (2 < opt_verbosity) {
                  BIO_printf(_bio_err, "%s:%s:%d:CMP %s: -failure out of range, should be >= 0 and <= %d%s%s\n", "setup_srv_ctx", "apps/cmp.c", 0x4ee, "error", 0x1a, &_LC4, &_LC4);
               }

               goto LAB_00101fb0;
            }

            if (opt_failurebits != 0) {
               if (3 < opt_verbosity) {
                  BIO_printf(_bio_out, "%s:%s:%d:CMP %s: -failurebits overrides -failure%s%s%s\n", "setup_srv_ctx", "apps/cmp.c", 0x4f3, "warning", &_LC4, &_LC4, &_LC4);
               }

               goto LAB_001022a0;
            }

            opt_failurebits = 1 << ( (byte)opt_failure & 0x1f );
         }

         iVar2 = ossl_cmp_mock_srv_set_statusInfo(lVar5, opt_pkistatus, opt_failurebits, opt_statusstring);
         if (iVar2 != 0) {
            if (opt_send_error != 0) {
               ossl_cmp_mock_srv_set_sendError(lVar5, 1);
            }

            if (opt_send_unprotected != 0) {
               OSSL_CMP_CTX_set_option(uVar3, 0x1e, 1);
            }

            if (opt_send_unprot_err != 0) {
               OSSL_CMP_SRV_CTX_set_send_unprotected_errors(lVar5, 1);
            }

            if (opt_accept_unprotected != 0) {
               OSSL_CMP_SRV_CTX_set_accept_unprotected(lVar5, 1);
            }

            if (opt_accept_unprot_err != 0) {
               OSSL_CMP_CTX_set_option(uVar3, 0x1f, 1);
            }

            if (opt_accept_raverified != 0) {
               OSSL_CMP_SRV_CTX_set_accept_raverified(lVar5, 1);
               return lVar5;
            }

            return lVar5;
         }

         goto LAB_00101fb0;
      }

   }
 else {
      sVar6 = strlen(opt_srv_ref);
      iVar2 = OSSL_CMP_CTX_set1_referenceValue(uVar3, pcVar7, sVar6 & 0xffffffff);
      if (iVar2 == 0) goto LAB_00101fb0;
      if (opt_srv_secret != 0) goto LAB_0010195d;
      if (opt_srv_cert == 0) {
         if (2 < opt_verbosity) {
            BIO_printf(_bio_err, "%s:%s:%d:CMP %s: server credentials (-srv_secret or -srv_cert) must be given if -use_mock_srv or -port is used%s%s%s\n", "setup_srv_ctx", "apps/cmp.c", 0x48d, "error", &_LC4, &_LC4, &_LC4);
         }

         goto LAB_00101fb0;
      }

      LAB_00101ff0:if (3 < opt_verbosity) {
         BIO_printf(_bio_out, "%s:%s:%d:CMP %s: server will not be able to handle PBM-protected requests since -srv_secret is not given%s%s%s\n", "setup_srv_ctx", "apps/cmp.c", 0x490, "warning", &_LC4, &_LC4, &_LC4);
         goto LAB_001019a6;
      }

      if (opt_srv_key != 0) goto LAB_001019c7;
   }

   if (2 < opt_verbosity) {
      BIO_printf(_bio_err, "%s:%s:%d:CMP %s: must give both -srv_cert and -srv_key options or neither%s%s%s\n", "setup_srv_ctx", "apps/cmp.c", 0x495, "error", &_LC4, &_LC4, &_LC4);
   }

   LAB_00101fb0:ossl_cmp_mock_srv_free(lVar5);
   return 0;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */undefined8 setup_request_ctx(undefined8 param_1, undefined8 param_2, undefined8 param_3, char *param_4, undefined8 param_5, char *param_6) {
   X509V3_CTX *ctx;
   byte *pbVar1;
   undefined4 uVar2;
   BIO *pBVar3;
   int iVar4;
   uint uVar5;
   ulong uVar6;
   X509_NAME *a;
   ulong extraout_RAX;
   ASN1_INTEGER *a_00;
   X509_REQ *pXVar7;
   EVP_PKEY *pEVar8;
   ushort **ppuVar9;
   undefined8 uVar10;
   long lVar11;
   long lVar12;
   X509_REQ *pXVar13;
   GENERAL_NAME *a_01;
   char *pcVar14;
   char *pcVar15;
   POLICYINFO *a_02;
   ASN1_OBJECT *o;
   X509 *a_03;
   undefined4 extraout_var;
   undefined8 uVar16;
   undefined8 in_R10;
   byte bVar17;
   byte *pbVar18;
   char *pcVar19;
   long in_FS_OFFSET;
   undefined1 local_90[80];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar6 = 0;
   local_90._0_8_ = (X509_REQ_INFO*)0x0;
   if (( ( ( opt_subject != (X509_REQ*)0x0 ) || ( opt_csr != 0 ) ) || ( opt_oldcert != 0 ) ) || ( uVar6 = opt_cert != 0 )) {
      LAB_0010244b:if (opt_issuer == 0) {
         LAB_00102494:if (2 < opt_cmd) goto LAB_00102740;
         if (( opt_reqin == (byte*)0x0 ) && ( opt_newkey == 0 )) {
            if (opt_centralkeygen == 0) {
               if (opt_key == 0) {
                  if (( opt_csr == 0 ) && ( opt_oldcert == 0 )) {
                     if (2 < opt_verbosity) {
                        BIO_printf(_bio_err, "%s:%s:%d:CMP %s: missing -newkey (or -key) to be certified and no -csr, -oldcert, -cert, or -reqin option given, which could provide fallback public key. Neither central key generation is requested.%s%s%s\n", "setup_request_ctx", "apps/cmp.c", 0x6ab, "error", &_LC4, &_LC4, &_LC4, uVar6);
                     }

                     goto LAB_001026c7;
                  }

                  if (opt_popo != 0xffffffff) goto LAB_001024cc;
               }
 else if (opt_popo != 0xffffffff) {
                  LAB_00102b58:if (opt_popo != 0) {
                     if (opt_csr != 0) {
                        if (2 < opt_verbosity) {
                           pcVar19 = ", and -key option superseded by -csr";
                           if (opt_key == 0) {
                              pcVar19 = "";
                           }

                           BIO_printf(_bio_err, "%s:%s:%d:CMP %s: no -newkey option given with private key for POPO, -csr option provides just public key%s%s%s\n", "setup_request_ctx", "apps/cmp.c", 0x6c2, "error", pcVar19, &_LC4, &_LC4);
                           if (( opt_reqin != (byte*)0x0 ) && ( 5 < opt_verbosity )) {
                              BIO_printf(_bio_out, "%s:%s:%d:CMP %s: since -reqin is used, may use -popo -1 or -popo 0 to disable the needless generation of a POPO%s%s%s\n", "setup_request_ctx", "apps/cmp.c", 0x6c6, &_LC9, &_LC4, &_LC4, &_LC4);
                           }

                        }

                        goto LAB_001026c7;
                     }

                     if (opt_key == 0) {
                        if (2 < opt_verbosity) {
                           BIO_printf(_bio_err, "%s:%s:%d:CMP %s: missing -newkey (or -key) option for key to be certified and for POPO%s%s%s\n", "setup_request_ctx", "apps/cmp.c", 0x6ca, "error", &_LC4, &_LC4, &_LC4, (ulong)opt_popo);
                        }

                        goto LAB_001026c7;
                     }

                  }

                  goto joined_r0x001024e2;
               }

               LAB_00102ec4:if (opt_verbosity < 6) {
                  opt_centralkeygen = 1;
               }
 else {
                  param_6 = "info";
                  param_5 = 0x6b0;
                  param_4 = "apps/cmp.c";
                  BIO_printf(_bio_out, "%s:%s:%d:CMP %s: POPO is disabled, which implies -centralkeygen%s%s%s\n", "setup_request_ctx");
                  uVar6 = (ulong)opt_popo;
                  opt_centralkeygen = 1;
                  LAB_00102fd2:if (-1 < (int)uVar6) {
                     if (2 < opt_verbosity) {
                        BIO_printf(_bio_err, "%s:%s:%d:CMP %s: -popo value %d is inconsistent with -centralkeygen%s%s\n", "setup_request_ctx", "apps/cmp.c", 0x6b5, "error", uVar6, &_LC4, &_LC4);
                     }

                     goto LAB_001026c7;
                  }

               }

            }
 else {
               uVar6 = (ulong)opt_popo;
               if (opt_popo != 0xffffffff) goto LAB_00102fd2;
            }

            LAB_00102edb:if (opt_newkeyout == 0) {
               if (2 < opt_verbosity) {
                  BIO_printf(_bio_err, "%s:%s:%d:CMP %s: -newkeyout not given, nowhere to save centrally generated key%s%s%s\n", "setup_request_ctx", "apps/cmp.c", 0x6b9, "error", &_LC4, &_LC4, &_LC4);
               }

               goto LAB_001026c7;
            }

            opt_popo = 0xffffffff;
         }
 else {
            uVar6 = (ulong)opt_popo;
            if (opt_popo == 0xffffffff) {
               if (opt_centralkeygen != 0) goto LAB_00102edb;
               goto LAB_00102ec4;
            }

            if (opt_centralkeygen != 0) goto LAB_00102fd2;
            LAB_001024cc:if (opt_newkey == 0) goto LAB_00102b58;
         }

         joined_r0x001024e2:if (( opt_certout == 0 ) && ( opt_reqout_only == 0 )) {
            if (2 < opt_verbosity) {
               BIO_printf(_bio_err, "%s:%s:%d:CMP %s: -certout not given, nowhere to save newly enrolled certificate%s%s%s\n", "setup_request_ctx", "apps/cmp.c", 0x6cf, "error", &_LC4, &_LC4, &_LC4);
            }

            goto LAB_001026c7;
         }

         if (opt_subject != (X509_REQ*)0x0) {
            param_4 = "subject";
            a = (X509_NAME*)parse_name(opt_subject, 0x1001, 1);
            if (a == (X509_NAME*)0x0) goto LAB_001026c7;
            iVar4 = OSSL_CMP_CTX_set1_subjectName(param_1);
            if (iVar4 == 0) goto LAB_00102c30;
            X509_NAME_free(a);
         }

         goto LAB_00102531;
      }

      LAB_00102457:param_4 = "issuer";
      a = (X509_NAME*)parse_name(opt_issuer, 0x1001, 1);
      if (a == (X509_NAME*)0x0) goto LAB_001026c7;
      iVar4 = OSSL_CMP_CTX_set1_issuer(param_1);
      if (iVar4 != 0) {
         X509_NAME_free(a);
         uVar6 = extraout_RAX;
         goto LAB_00102494;
      }

      LAB_00102c30:X509_NAME_free(a);
      if (opt_verbosity < 3) goto LAB_001026c7;
      uVar16 = 0x3c4;
      pcVar19 = "set_name";
      LAB_00102c6b:BIO_printf(_bio_err, "%s:%s:%d:CMP %s: out of memory%s%s%s\n", pcVar19, "apps/cmp.c", uVar16, "error", &_LC4, &_LC4, &_LC4);
      goto LAB_001026c7;
   }

   uVar6 = ( ulong )(opt_cmd - 4);
   if (1 < opt_cmd - 4) {
      if (3 < opt_verbosity) {
         param_6 = "warning";
         param_5 = 0x6a4;
         param_4 = "apps/cmp.c";
         iVar4 = BIO_printf(_bio_out, "%s:%s:%d:CMP %s: no -subject given; no -csr or -oldcert or -cert available for fallback%s%s%s\n", "setup_request_ctx");
         uVar6 = CONCAT44(extraout_var, iVar4);
      }

      goto LAB_0010244b;
   }

   if (opt_issuer != 0) goto LAB_00102457;
   LAB_00102740:if (opt_subject != (X509_REQ*)0x0) {
      if (( opt_ref == 0 ) && ( opt_cert == 0 )) {
         param_4 = "subject";
         a = (X509_NAME*)parse_name(opt_subject, 0x1001, 1);
         if (a == (X509_NAME*)0x0) goto LAB_001026c7;
         iVar4 = OSSL_CMP_CTX_set1_subjectName(param_1);
         if (iVar4 == 0) goto LAB_00102c30;
         X509_NAME_free(a);
      }
 else if (3 < opt_verbosity) {
         param_6 = "warning";
         param_5 = 0x6dd;
         param_4 = "apps/cmp.c";
         BIO_printf(_bio_out, "%s:%s:%d:CMP %s: -subject %s since sender is taken from -ref or -cert%s%s\n", "setup_request_ctx");
      }

   }

   if (( ( opt_issuer != 0 ) && ( opt_cmd != 4 ) ) && ( 3 < opt_verbosity )) {
      param_6 = "warning";
      param_5 = 0x6e2;
      param_4 = "apps/cmp.c";
      BIO_printf(_bio_out, "%s:%s:%d:CMP %s: -issuer %s and \'rr\'%s%s\n", "setup_request_ctx");
   }

   if (( opt_reqexts != (char*)0x0 ) && ( 3 < opt_verbosity )) {
      param_6 = "warning";
      param_5 = 0x6e4;
      param_4 = "apps/cmp.c";
      BIO_printf(_bio_out, "%s:%s:%d:CMP %s: -reqexts %s%s%s\n", "setup_request_ctx");
   }

   if (( opt_san_nodefault != 0 ) && ( 3 < opt_verbosity )) {
      param_6 = "warning";
      param_5 = 0x6e6;
      param_4 = "apps/cmp.c";
      BIO_printf(_bio_out, "%s:%s:%d:CMP %s: -san_nodefault %s%s%s\n", "setup_request_ctx");
   }

   if (( opt_sans != (char*)0x0 ) && ( 3 < opt_verbosity )) {
      param_6 = "warning";
      param_5 = 0x6e8;
      param_4 = "apps/cmp.c";
      BIO_printf(_bio_out, "%s:%s:%d:CMP %s: -sans %s%s%s\n", "setup_request_ctx");
   }

   if (( opt_policies != (char*)0x0 ) && ( 3 < opt_verbosity )) {
      param_6 = "warning";
      param_5 = 0x6ea;
      param_4 = "apps/cmp.c";
      BIO_printf(_bio_out, "%s:%s:%d:CMP %s: -policies %s%s%s\n", "setup_request_ctx");
   }

   if (( opt_policy_oids != (char*)0x0 ) && ( 3 < opt_verbosity )) {
      param_6 = "warning";
      param_5 = 0x6ec;
      param_4 = "apps/cmp.c";
      BIO_printf(_bio_out, "%s:%s:%d:CMP %s: -policy_oids %s%s%s\n", "setup_request_ctx");
   }

   if (opt_popo == 0xfffffffe) {
      LAB_00102a51:if (opt_centralkeygen != 0) {
         if (opt_verbosity < 4) goto LAB_00102822;
         param_6 = "warning";
         param_5 = 0x6f0;
         param_4 = "apps/cmp.c";
         BIO_printf(_bio_out, "%s:%s:%d:CMP %s: -popo -1 or -centralkeygen %s%s%s\n", "setup_request_ctx");
      }

      LAB_00102ab1:if (( opt_newkeyout != 0 ) && ( 3 < opt_verbosity )) {
         param_6 = "warning";
         param_5 = 0x6f2;
         param_4 = "apps/cmp.c";
         BIO_printf(_bio_out, "%s:%s:%d:CMP %s: -newkeyout %s%s%s\n", "setup_request_ctx");
      }

   }
 else {
      if (3 < opt_verbosity) {
         param_6 = "warning";
         param_5 = 0x6ee;
         param_4 = "apps/cmp.c";
         BIO_printf(_bio_out, "%s:%s:%d:CMP %s: -popo %s%s%s\n", "setup_request_ctx");
         goto LAB_00102a51;
      }

      if (opt_centralkeygen == 0) goto LAB_00102ab1;
   }

   LAB_00102822:if (opt_cmd == 3) {
      if (( opt_serial != (char*)0x0 ) && ( 3 < opt_verbosity )) {
         LAB_00102994:param_6 = "warning";
         param_5 = 0x72f;
         param_4 = "apps/cmp.c";
         BIO_printf(_bio_out, "%s:%s:%d:CMP %s: Ignoring -serial for command other than \'rr\'%s%s%s\n", "setup_request_ctx");
         LAB_001025cd:if (opt_cmd != 3) goto LAB_001025d6;
      }

      if (opt_csr == 0) {
         if (2 < opt_verbosity) {
            BIO_printf(_bio_err, "%s:%s:%d:CMP %s: missing PKCS#10 CSR for p10cr%s%s%s\n", "setup_request_ctx", "apps/cmp.c", 0x732, "error", &_LC4, &_LC4, &_LC4);
         }

         goto LAB_001026c7;
      }

      if (( opt_recipient == 0 ) && ( opt_srvcert == 0 )) {
         uVar5 = 3;
         goto LAB_00103603;
      }

      LAB_00102cc3:if (( opt_newkeypass != (X509_REQ*)0x0 ) && ( 3 < opt_verbosity )) {
         param_4 = "apps/cmp.c";
         BIO_printf(_bio_out, "%s:%s:%d:CMP %s: -newkeypass %s%s%s\n", "setup_request_ctx");
      }

      if (opt_newkey == 0) {
         LAB_00103131:if (opt_days != 0) {
            if (opt_verbosity < 4) goto LAB_00102cf5;
            param_4 = "apps/cmp.c";
            BIO_printf(_bio_out, "%s:%s:%d:CMP %s: -days %s%s%s\n", "setup_request_ctx");
         }

         if (opt_popo != 0xfffffffe) {
            if (opt_verbosity < 4) goto LAB_00102690;
            param_4 = "apps/cmp.c";
            BIO_printf(_bio_out, "%s:%s:%d:CMP %s: -popo %s%s%s\n", "setup_request_ctx");
         }

      }
 else {
         if (3 < opt_verbosity) {
            param_4 = "apps/cmp.c";
            BIO_printf(_bio_out, "%s:%s:%d:CMP %s: -newkey %s%s%s\n", "setup_request_ctx");
            goto LAB_00103131;
         }

         LAB_00102cf5:if (opt_popo != 0xfffffffe) goto LAB_00102690;
      }

      if (( opt_out_trusted != 0 ) && ( 3 < opt_verbosity )) {
         param_4 = "apps/cmp.c";
         BIO_printf(_bio_out, "%s:%s:%d:CMP %s: -out_trusted %s%s%s\n", "setup_request_ctx");
      }

   }
 else {
      if (( opt_implicit_confirm != 0 ) && ( 3 < opt_verbosity )) {
         param_6 = "warning";
         param_5 = 0x6f5;
         param_4 = "apps/cmp.c";
         BIO_printf(_bio_out, "%s:%s:%d:CMP %s: -implicit_confirm %s, and \'p10cr\'%s%s\n", "setup_request_ctx");
      }

      if (opt_disable_confirm == 0) {
         LAB_00103079:if (opt_certout != 0) {
            if (opt_verbosity < 4) goto LAB_00102531;
            param_6 = "warning";
            param_5 = 0x6f9;
            param_4 = "apps/cmp.c";
            BIO_printf(_bio_out, "%s:%s:%d:CMP %s: -certout %s, and \'p10cr\'%s%s\n", "setup_request_ctx");
         }

      }
 else {
         if (3 < opt_verbosity) {
            param_6 = "warning";
            param_5 = 0x6f7;
            param_4 = "apps/cmp.c";
            BIO_printf(_bio_out, "%s:%s:%d:CMP %s: -disable_confirm %s, and \'p10cr\'%s%s\n", "setup_request_ctx");
            goto LAB_00103079;
         }

         if (opt_certout != 0) goto LAB_00102531;
      }

      if (( opt_chainout != 0 ) && ( 3 < opt_verbosity )) {
         param_6 = "warning";
         param_5 = 0x6fb;
         param_4 = "apps/cmp.c";
         BIO_printf(_bio_out, "%s:%s:%d:CMP %s: -chainout %s, and \'p10cr\'%s%s\n", "setup_request_ctx");
      }

      LAB_00102531:if (opt_cmd != 1) {
         LAB_00102540:if (opt_cmd != 4) {
            if (( opt_serial != (char*)0x0 ) && ( 3 < opt_verbosity )) goto LAB_00102994;
            goto LAB_001025cd;
         }

         if (opt_issuer == 0) {
            if (opt_serial == (char*)0x0) {
               if (opt_oldcert == 0) {
                  if (opt_csr == 0) {
                     if (2 < opt_verbosity) {
                        BIO_printf(_bio_err, "%s:%s:%d:CMP %s: missing -oldcert or -issuer and -serial for certificate to be revoked and no -csr given%s%s%s\n", "setup_request_ctx", "apps/cmp.c", 0x70c, "error", &_LC4, &_LC4, &_LC4);
                     }

                     goto LAB_001026c7;
                  }

               }
 else if (( opt_csr != 0 ) && ( 3 < opt_verbosity )) {
                  param_5 = 0x710;
                  pcVar19 = "%s:%s:%d:CMP %s: ignoring -csr since certificate to be revoked is given%s%s%s\n";
                  LAB_0010376d:param_6 = "warning";
                  param_4 = "apps/cmp.c";
                  BIO_printf(_bio_out, pcVar19, "setup_request_ctx");
                  goto LAB_00103786;
               }

               goto LAB_001025b0;
            }

         }
 else if (opt_serial != (char*)0x0) {
            if (opt_oldcert == 0) {
               if (opt_csr != 0) {
                  LAB_00103730:if (3 < opt_verbosity) {
                     param_5 = 0x71a;
                     pcVar19 = "%s:%s:%d:CMP %s: Ignoring -csr since -issuer and -serial is given for command \'rr\'%s%s%s\n";
                     goto LAB_0010376d;
                  }

                  goto LAB_00103786;
               }

            }
 else if (3 < opt_verbosity) {
               param_6 = "warning";
               param_5 = 0x718;
               param_4 = "apps/cmp.c";
               BIO_printf(_bio_out, "%s:%s:%d:CMP %s: Ignoring -oldcert since -issuer and -serial is given for command \'rr\'%s%s%s\n", "setup_request_ctx");
               if (opt_csr != 0) goto LAB_00103730;
               LAB_00103786:if (opt_serial == (char*)0x0) goto LAB_001025b0;
            }

            a_00 = s2i_ASN1_INTEGER((X509V3_EXT_METHOD*)0x0, opt_serial);
            if (a_00 == (ASN1_INTEGER*)0x0) {
               if (2 < opt_verbosity) {
                  BIO_printf(_bio_err, "%s:%s:%d:CMP %s: cannot read serial number: \'%s\'%s%s\n", "setup_request_ctx", "apps/cmp.c", 0x720, "error", opt_serial, &_LC4, &_LC4);
               }

               goto LAB_001026c7;
            }

            iVar4 = OSSL_CMP_CTX_set1_serialNumber(param_1);
            if (iVar4 == 0) {
               ASN1_INTEGER_free(a_00);
               if (opt_verbosity < 3) goto LAB_001026c7;
               uVar16 = 0x725;
               pcVar19 = "setup_request_ctx";
               goto LAB_00102c6b;
            }

            ASN1_INTEGER_free(a_00);
            LAB_001025b0:if (-1 < opt_revreason) {
               OSSL_CMP_CTX_set_option(param_1);
            }

            goto LAB_001025cd;
         }

         if (2 < opt_verbosity) {
            BIO_printf(_bio_err, "%s:%s:%d:CMP %s: Must give both -issuer and -serial options or neither%s%s%s\n", "setup_request_ctx", "apps/cmp.c", 0x714, "error", &_LC4, &_LC4, &_LC4);
         }

         goto LAB_001026c7;
      }

      if (( ( opt_oldcert == 0 ) && ( opt_cert == 0 ) ) && ( opt_csr == 0 )) {
         if (2 < opt_verbosity) {
            BIO_printf(_bio_err, "%s:%s:%d:CMP %s: missing -oldcert for certificate to be updated and no -csr given%s%s%s\n", "setup_request_ctx", "apps/cmp.c", 0x702, "error", &_LC4, &_LC4, &_LC4);
         }

         goto LAB_001026c7;
      }

      if (( opt_subject != (X509_REQ*)0x0 ) && ( 3 < opt_verbosity )) {
         param_6 = "warning";
         param_5 = 0x706;
         param_4 = "apps/cmp.c";
         BIO_printf(_bio_out, "%s:%s:%d:CMP %s: given -subject \'%s\' overrides the subject of \'%s\' for KUR%s\n", "setup_request_ctx");
         goto LAB_00102540;
      }

      param_4 = (char*)opt_subject;
      if (( opt_serial != (char*)0x0 ) && ( 3 < opt_verbosity )) goto LAB_00102994;
      LAB_001025d6:uVar5 = opt_cmd;
      if (( opt_recipient == 0 ) && ( opt_srvcert == 0 )) {
         LAB_00103603:if (( opt_issuer == 0 ) && ( ( ( opt_oldcert == 0 && ( opt_cert == 0 ) ) && ( 3 < opt_verbosity ) ) )) {
            param_6 = "warning";
            param_5 = 0x738;
            param_4 = "apps/cmp.c";
            BIO_printf(_bio_out, "%s:%s:%d:CMP %s: missing -recipient, -srvcert, -issuer, -oldcert or -cert; recipient for any requests not covered by -reqin will be set to \"NULL-DN\"%s%s%s\n", "setup_request_ctx");
            uVar5 = opt_cmd;
         }

      }

      pBVar3 = _bio_err;
      lVar11 = opt_newkey;
      pXVar13 = opt_newkeypass;
      uVar2 = opt_keyform;
      pbVar1 = opt_reqin;
      if (uVar5 - 3 < 3) goto LAB_00102cc3;
      if (opt_newkey != 0) {
         _bio_err = (BIO*)0x0;
         pXVar7 = (X509_REQ*)get_passwd(opt_newkeypass, "new private key for cert to be enrolled");
         param_4 = (char*)pXVar7;
         pEVar8 = (EVP_PKEY*)load_key(lVar11, uVar2, 0);
         clear_free(pXVar7);
         uVar16 = 1;
         _bio_err = pBVar3;
         if (pEVar8 == (EVP_PKEY*)0x0) {
            ERR_clear_error();
            pEVar8 = (EVP_PKEY*)load_pubkey(lVar11, uVar2, 0);
            if (pEVar8 != (EVP_PKEY*)0x0) {
               uVar16 = 0;
               param_4 = (char*)pXVar13;
               goto LAB_00102674;
            }

         }
 else {
            LAB_00102674:iVar4 = OSSL_CMP_CTX_set0_newPkey(param_1, uVar16, pEVar8);
            if (iVar4 != 0) goto LAB_00102690;
         }

         EVP_PKEY_free(pEVar8);
         goto LAB_001026c7;
      }

      if (( ( ( opt_reqin != (byte*)0x0 ) && ( opt_key == 0 ) ) && ( opt_csr == 0 ) ) && ( ( opt_oldcert == 0 && ( opt_centralkeygen == 0 ) ) )) {
         bVar17 = *opt_reqin;
         pbVar18 = opt_reqin;
         if (bVar17 != 0x2c) {
            ppuVar9 = __ctype_b_loc();
            pbVar18 = pbVar1;
            do {
               if (( ( *(byte*)( (long)*ppuVar9 + (ulong)bVar17 * 2 + 1 ) & 0x20 ) != 0 ) || ( bVar17 == 0 )) break;
               bVar17 = pbVar18[1];
               pbVar18 = pbVar18 + 1;
            }
 while ( bVar17 != 0x2c );
         }

         *pbVar18 = 0;
         uVar16 = app_get0_propq();
         uVar10 = app_get0_libctx();
         lVar11 = OSSL_CMP_MSG_read(pbVar1, uVar10, uVar16);
         *pbVar18 = bVar17;
         if (lVar11 == 0) {
            if (2 < opt_verbosity) {
               BIO_printf(_bio_err, "%s:%s:%d:CMP %s: failed to load ir/cr/kur file \'%s\' attempting to get fallback public key%s%s\n", "set_fallback_pubkey", "apps/cmp.c", 0x67e, "error", pbVar1, &_LC4, &_LC4, in_R10);
            }

            goto LAB_001026c7;
         }

         lVar12 = OSSL_CMP_MSG_get0_certreq_publickey(lVar11);
         if (( lVar12 == 0 ) || ( lVar12 = lVar12 == 0 )) {
            if (2 < opt_verbosity) {
               BIO_printf(_bio_err, "%s:%s:%d:CMP %s: failed to get fallback public key from ir/cr/kur file \'%s\'%s%s\n", "set_fallback_pubkey", "apps/cmp.c", 0x684, "error", pbVar1, &_LC4, &_LC4, param_6);
            }

         }
 else {
            pEVar8 = (EVP_PKEY*)EVP_PKEY_dup(lVar12);
            iVar4 = OSSL_CMP_CTX_set0_newPkey(param_1, 0, pEVar8);
            if (iVar4 != 0) {
               OSSL_CMP_MSG_free(lVar11);
               goto LAB_00102690;
            }

            EVP_PKEY_free(pEVar8);
            if (2 < opt_verbosity) {
               BIO_printf(_bio_err, "%s:%s:%d:CMP %s: failed to get fallback public key obtained from ir/cr/kur file \'%s\'%s%s\n", "set_fallback_pubkey", "apps/cmp.c", 0x68b, "error", pbVar1, &_LC4, &_LC4, param_5);
            }

         }

         OSSL_CMP_MSG_free(lVar11);
         goto LAB_001026c7;
      }

   }

   LAB_00102690:if (( 0 < opt_days ) && ( iVar4 = iVar4 == 0 )) {
      if (2 < opt_verbosity) {
         BIO_printf(_bio_err, "%s:%s:%d:CMP %s: could not set requested cert validity period%s%s%s\n", "setup_request_ctx", "apps/cmp.c", 0x76a, "error", &_LC4, &_LC4, &_LC4);
      }

      goto LAB_001026c7;
   }

   if (( opt_policies != (char*)0x0 ) && ( opt_policy_oids != (char*)0x0 )) {
      if (2 < opt_verbosity) {
         BIO_printf(_bio_err, "%s:%s:%d:CMP %s: cannot have policies both via -policies and via -policy_oids%s%s%s\n", "setup_request_ctx", "apps/cmp.c", 0x76f, "error", &_LC4, &_LC4, &_LC4);
      }

      goto LAB_001026c7;
   }

   if (opt_csr != 0) {
      if (opt_cmd == 5) {
         if (3 < opt_verbosity) {
            param_4 = "apps/cmp.c";
            BIO_printf(_bio_out, "%s:%s:%d:CMP %s: -csr option is ignored for \'genm\' command%s%s%s\n", "setup_request_ctx");
         }

         goto LAB_00102d96;
      }

      param_4 = "PKCS#10 CSR";
      pXVar13 = (X509_REQ*)load_csr_autofmt(opt_csr, 0, 0);
      if (pXVar13 == (X509_REQ*)0x0) goto LAB_001026c7;
      iVar4 = OSSL_CMP_CTX_set1_p10CSR(param_1);
      if (iVar4 != 0) goto LAB_00102d98;
      LAB_00103827:if (2 < opt_verbosity) {
         BIO_printf(_bio_err, "%s:%s:%d:CMP %s: out of memory%s%s%s\n", "setup_request_ctx", "apps/cmp.c", 0x7d6, "error", &_LC4, &_LC4, &_LC4);
      }

      LAB_00103834:OPENSSL_sk_pop_free(local_90._0_8_, &X509_EXTENSION_free);
      X509_REQ_free(pXVar13);
      goto LAB_001026c7;
   }

   LAB_00102d96:pXVar13 = (X509_REQ*)0x0;
   LAB_00102d98:if (( opt_reqexts != (char*)0x0 ) || ( opt_policies != (char*)0x0 )) {
      local_90._0_8_ = OPENSSL_sk_new_null();
      if ((X509_REQ_INFO*)local_90._0_8_ == (X509_REQ_INFO*)0x0) goto LAB_00103827;
      ctx = (X509V3_CTX*)( local_90 + 8 );
      param_4 = (char*)pXVar13;
      X509V3_set_ctx(ctx, (X509*)0x0, (X509*)0x0, pXVar13, (X509_CRL*)0x0, 2);
      X509V3_set_nconf(ctx, conf);
      if (opt_reqexts != (char*)0x0) {
         param_4 = local_90;
         iVar4 = X509V3_EXT_add_nconf_sk(conf, ctx, opt_reqexts, (stack_st_X509_EXTENSION**)param_4);
         if (iVar4 == 0) {
            if (2 < opt_verbosity) {
               BIO_printf(_bio_err, "%s:%s:%d:CMP %s: cannot load certificate request extension section \'%s\'%s%s\n", "setup_request_ctx", "apps/cmp.c", 0x785, "error", opt_reqexts, &_LC4, &_LC4);
            }

            goto LAB_00103834;
         }

      }

      if (opt_policies != (char*)0x0) {
         param_4 = local_90;
         iVar4 = X509V3_EXT_add_nconf_sk(conf, ctx, opt_policies, (stack_st_X509_EXTENSION**)param_4);
         if (iVar4 == 0) {
            if (2 < opt_verbosity) {
               BIO_printf(_bio_err, "%s:%s:%d:CMP %s: cannot load policy cert request extension section \'%s\'%s%s\n", "setup_request_ctx", "apps/cmp.c", 0x78b, "error", opt_policies, &_LC4, &_LC4);
            }

            goto LAB_00103834;
         }

      }

      OSSL_CMP_CTX_set0_reqExtensions(param_1, local_90._0_8_);
   }

   X509_REQ_free(pXVar13);
   iVar4 = OSSL_CMP_CTX_reqExtensions_have_SAN(param_1);
   if (iVar4 == 0) {
      pcVar19 = opt_sans;
      if (opt_sans == (char*)0x0) goto LAB_00104428;
      do {
         pcVar14 = (char*)next_item(pcVar19);
         iVar4 = strcmp(pcVar19, "critical");
         if (iVar4 == 0) {
            OSSL_CMP_CTX_set_option(param_1, 0x16, 1);
         }
 else {
            ERR_set_mark();
            param_4 = (char*)0x7;
            a_01 = a2i_GENERAL_NAME((GENERAL_NAME*)0x0, (X509V3_EXT_METHOD*)0x0, (X509V3_CTX*)0x0, 7, pcVar19, 0);
            if (a_01 == (GENERAL_NAME*)0x0) {
               pcVar15 = strchr(pcVar19, 0x40);
               param_4 = (char*)0x1;
               if (pcVar15 == (char*)0x0) {
                  pcVar15 = strchr(pcVar19, 0x3a);
                  param_4 = (char*)( ulong )(( -(uint)(pcVar15 == (char *)0x0) & 0xfffffffc ) + 6);
               }

               a_01 = a2i_GENERAL_NAME((GENERAL_NAME*)0x0, (X509V3_EXT_METHOD*)0x0, (X509V3_CTX*)0x0, (int)param_4, pcVar19, 0);
               ERR_pop_to_mark();
               if (a_01 == (GENERAL_NAME*)0x0) {
                  if (2 < opt_verbosity) {
                     BIO_printf(_bio_err, "%s:%s:%d:CMP %s: bad syntax of %s \'%s\'%s\n", "set_gennames", "apps/cmp.c", 0x3e6, "error", "Subject Alternative Name", pcVar19, &_LC4);
                  }

                  goto LAB_001026c7;
               }

            }
 else {
               ERR_pop_to_mark();
            }

            iVar4 = OSSL_CMP_CTX_push1_subjectAltName(param_1, a_01);
            if (iVar4 == 0) {
               GENERAL_NAME_free(a_01);
               if (opt_verbosity < 3) goto LAB_001026c7;
               uVar16 = 0x3eb;
               pcVar19 = "set_gennames";
               goto LAB_00102c6b;
            }

            GENERAL_NAME_free(a_01);
         }

         pcVar19 = pcVar14;
      }
 while ( pcVar14 != (char*)0x0 );
      if (opt_san_nodefault != 0) {
         if (( opt_sans != (char*)0x0 ) && ( 3 < opt_verbosity )) {
            param_4 = "apps/cmp.c";
            BIO_printf(_bio_out, "%s:%s:%d:CMP %s: -opt_san_nodefault has no effect when -sans is used%s%s%s\n", "setup_request_ctx", "apps/cmp.c", 0x79d, "warning", &_LC4, &_LC4, &_LC4);
         }

         goto LAB_00103bd1;
      }

   }
 else {
      if (opt_sans != (char*)0x0) {
         if (2 < opt_verbosity) {
            BIO_printf(_bio_err, "%s:%s:%d:CMP %s: cannot have Subject Alternative Names both via -reqexts and via -sans%s%s%s\n", "setup_request_ctx", "apps/cmp.c", 0x795, "error", &_LC4, &_LC4, &_LC4);
         }

         goto LAB_001026c7;
      }

      LAB_00104428:if (opt_san_nodefault != 0) {
         LAB_00103bd1:OSSL_CMP_CTX_set_option(param_1, 0x15, 1);
      }

   }

   pcVar19 = opt_policy_oids;
   if (opt_policy_oids_critical != 0) {
      if (( opt_policy_oids == (char*)0x0 ) && ( 3 < opt_verbosity )) {
         param_4 = "apps/cmp.c";
         BIO_printf(_bio_out, "%s:%s:%d:CMP %s: -opt_policy_oids_critical has no effect unless -policy_oids is given%s%s%s\n", "setup_request_ctx", "apps/cmp.c", 0x7a4, "warning", &_LC4, &_LC4, &_LC4);
      }

      OSSL_CMP_CTX_set_option(param_1, 0x17, 1);
      pcVar19 = opt_policy_oids;
   }

   do {
      opt_policy_oids = pcVar19;
      if (opt_policy_oids == (char*)0x0) {
         if (-2 < (int)opt_popo) {
            OSSL_CMP_CTX_set_option(param_1, 0x18);
         }

         lVar11 = opt_oldcert;
         if (opt_oldcert != 0) {
            if (opt_cmd == 5) {
               if (3 < opt_verbosity) {
                  BIO_printf(_bio_out, "%s:%s:%d:CMP %s: -oldcert option is ignored for \'genm\' command%s%s%s\n", "setup_request_ctx", "apps/cmp.c", 0x7c6, "warning", &_LC4, &_LC4, &_LC4, param_4);
               }

            }
 else {
               pcVar19 = "certificate to be updated";
               if (( opt_cmd != 1 ) && ( pcVar19 = opt_cmd == 4 )) {
                  pcVar19 = "certificate to be revoked";
               }

               uVar16 = get_passwd(opt_keypass, pcVar19);
               a_03 = (X509*)load_cert_pass(lVar11, 0, 0, uVar16, pcVar19);
               clear_free(uVar16);
               if (a_03 == (X509*)0x0) goto LAB_001026c7;
               iVar4 = OSSL_CMP_CTX_set1_oldCert(param_1, a_03);
               X509_free(a_03);
               if (iVar4 == 0) goto LAB_001026c7;
            }

         }

         cleanse(opt_keypass);
         uVar16 = 1;
         goto LAB_001026c9;
      }

      pcVar19 = (char*)next_item(opt_policy_oids);
      o = OBJ_txt2obj(opt_policy_oids, 1);
      if (o == (ASN1_OBJECT*)0x0) {
         if (2 < opt_verbosity) {
            BIO_printf(_bio_err, "%s:%s:%d:CMP %s: Invalid -policy_oids arg \'%s\'%s%s\n", "setup_request_ctx", "apps/cmp.c", 0x7ae, "error", opt_policy_oids, &_LC4, &_LC4);
         }

         goto LAB_001026c7;
      }

      iVar4 = OBJ_obj2nid(o);
      if (( iVar4 == 0 ) && ( 3 < opt_verbosity )) {
         param_4 = "apps/cmp.c";
         BIO_printf(_bio_out, "%s:%s:%d:CMP %s: Unknown -policy_oids arg: %.40s%s%s\n", "setup_request_ctx", "apps/cmp.c", 0x7b2, "warning", opt_policy_oids, &_LC4, &_LC4);
      }

      a_02 = POLICYINFO_new();
      if (a_02 == (POLICYINFO*)0x0) {
         ASN1_OBJECT_free(o);
         goto LAB_001026c7;
      }

      a_02->policyid = o;
      iVar4 = OSSL_CMP_CTX_push0_policy(param_1, a_02);
   }
 while ( iVar4 != 0 );
   if (2 < opt_verbosity) {
      BIO_printf(_bio_err, "%s:%s:%d:CMP %s: cannot add policy with OID \'%s\'%s%s\n", "setup_request_ctx", "apps/cmp.c", 0x7bb, "error", opt_policy_oids, &_LC4, &_LC4);
   }

   POLICYINFO_free(a_02);
   LAB_001026c7:uVar16 = 0;
   LAB_001026c9:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar16;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */int setup_client_ctx(long param_1, ulong param_2) {
   char *pcVar1;
   byte bVar2;
   undefined4 uVar3;
   void *pvVar4;
   int iVar5;
   uint uVar6;
   int iVar7;
   int iVar8;
   long lVar9;
   X509 *pXVar10;
   X509_STORE *pXVar11;
   X509_VERIFY_PARAM *pXVar12;
   long *plVar13;
   SSL_METHOD *meth;
   SSL_CTX *ctx;
   long extraout_RAX;
   EVP_PKEY *pEVar14;
   size_t sVar15;
   undefined8 extraout_RAX_00;
   X509_NAME *a;
   ushort **ppuVar16;
   char *pcVar17;
   ASN1_OBJECT *o;
   ASN1_TYPE *a_00;
   ASN1_INTEGER *a_01;
   ASN1_UTF8STRING *pAVar18;
   long lVar19;
   char *pcVar20;
   ushort *puVar21;
   void *pvVar22;
   char *pcVar23;
   ASN1_OBJECT *pAVar24;
   undefined8 uVar25;
   ulong uVar26;
   undefined8 in_R11;
   ushort *puVar27;
   long in_FS_OFFSET;
   undefined *puVar28;
   EVP_PKEY *pEVar29;
   long local_2a0;
   X509_STORE *local_298;
   ulong local_288;
   undefined4 local_278;
   int local_274;
   void *local_270;
   void *local_268;
   char *local_260;
   X509 *local_258;
   ushort *local_250;
   undefined8 local_248;
   undefined8 local_240;
   undefined1 local_238[16];
   undefined1 local_228[16];
   undefined1 local_218[16];
   undefined1 local_208[16];
   undefined1 local_1f8[16];
   undefined4 local_1e8;
   char local_1d8[8];
   undefined8 uStack_1d0;
   undefined1 local_1c8[16];
   undefined1 local_1b8[16];
   undefined1 local_1a8[16];
   undefined1 local_198[16];
   undefined1 local_188[16];
   undefined1 local_178[16];
   undefined1 local_168[16];
   undefined1 local_158[16];
   undefined1 local_148[16];
   undefined1 local_138[16];
   undefined1 local_128[16];
   undefined8 local_118;
   undefined1 local_108[16];
   undefined1 local_f8[16];
   undefined1 local_e8[16];
   undefined1 local_d8[16];
   undefined1 local_c8[16];
   undefined1 local_b8[16];
   undefined1 local_a8[16];
   undefined1 local_98[16];
   undefined1 local_88[16];
   undefined1 local_78[16];
   undefined1 local_68[16];
   undefined1 local_58[16];
   undefined8 local_48;
   long local_40;
   pcVar20 = opt_path;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_270 = (void*)0x0;
   local_1d8 = (char[8])_LC210._0_8_;
   uStack_1d0 = ram0x00113a48;
   local_268 = (void*)0x0;
   local_260 = (char*)0x0;
   local_1c8 = (undefined1[16])0x0;
   local_1b8 = (undefined1[16])0x0;
   local_1a8 = (undefined1[16])0x0;
   local_198 = (undefined1[16])0x0;
   local_188 = (undefined1[16])0x0;
   local_178 = (undefined1[16])0x0;
   local_168 = (undefined1[16])0x0;
   local_158 = (undefined1[16])0x0;
   local_148 = (undefined1[16])0x0;
   local_138 = (undefined1[16])0x0;
   local_128 = (undefined1[16])0x0;
   local_118 = 0;
   local_48 = 0;
   local_108 = (undefined1[16])0x0;
   local_f8 = (undefined1[16])0x0;
   local_e8 = (undefined1[16])0x0;
   local_d8 = (undefined1[16])0x0;
   local_c8 = (undefined1[16])0x0;
   local_b8 = (undefined1[16])0x0;
   local_a8 = (undefined1[16])0x0;
   local_98 = (undefined1[16])0x0;
   local_88 = (undefined1[16])0x0;
   local_78 = (undefined1[16])0x0;
   local_68 = (undefined1[16])0x0;
   local_58 = (undefined1[16])0x0;
   if (opt_use_mock_srv == 0) {
      builtin_strncpy(local_1d8, "no serve", 8);
      uStack_1d0 = CONCAT62(( int6 )((ulong)ram0x00113a48 >> 0x10), 0x72);
      if (opt_rspin != 0) goto LAB_00104697;
      if (opt_server != (ushort*)0x0) goto LAB_001046a0;
      if (opt_reqout_only != 0) goto LAB_001048d0;
      iVar5 = 0;
      if (opt_verbosity < 3) goto LAB_0010477c;
      uVar25 = 0x870;
      pcVar20 = "setup_client_ctx";
      pcVar23 = "%s:%s:%d:CMP %s: missing -server or -use_mock_srv or -rspin option%s%s%s\n";
      puVar27 = (ushort*)&_LC4;
      LAB_001054c8:BIO_printf(_bio_err, pcVar23, pcVar20, "apps/cmp.c", uVar25, "error", puVar27, &_LC4, &_LC4);
      goto LAB_0010477c;
   }

   LAB_00104697:if (opt_server == (ushort*)0x0) {
      LAB_001048d0:if (opt_proxy == 0) {
         LAB_0010492f:if (( opt_no_proxy != 0 ) && ( 3 < opt_verbosity )) {
            BIO_printf(_bio_out, "%s:%s:%d:CMP %s: ignoring -no_proxy option since -server is not given%s%s%s\n", "setup_client_ctx", "apps/cmp.c", 0x87d, "warning", &_LC4, &_LC4, &_LC4);
         }

      }
 else if (3 < opt_verbosity) {
         BIO_printf(_bio_out, "%s:%s:%d:CMP %s: ignoring -proxy option since -server is not given%s%s%s\n", "setup_client_ctx", "apps/cmp.c", 0x87b, "warning", &_LC4, &_LC4, &_LC4);
         goto LAB_0010492f;
      }

      local_2a0 = 0;
      LAB_0010498c:pEVar29 = (EVP_PKEY*)0x104997;
      iVar5 = OSSL_CMP_CTX_set1_serverPath(param_1, pcVar20);
      puVar27 = opt_cmd_s;
      if (iVar5 == 0) goto LAB_00104767;
      if (opt_cmd_s == (ushort*)0x0) {
         if (opt_verbosity < 3) goto LAB_00104774;
         uVar25 = 0x44a;
         pcVar20 = "transform_opts";
         pcVar23 = "%s:%s:%d:CMP %s: no cmp command to execute%s%s%s\n";
         puVar28 = &_LC4;
         puVar27 = (ushort*)&_LC4;
         goto LAB_001055ec;
      }

      bVar2 = ( byte ) * opt_cmd_s;
      if (( ( bVar2 != 0x69 ) || ( *(byte*)( (long)opt_cmd_s + 1 ) != 0x72 ) ) || ( uVar6 = (uint)(byte)opt_cmd_s[1] ),(byte)opt_cmd_s[1] != 0) {
         pEVar29 = (EVP_PKEY*)0x105507;
         iVar5 = strcmp((char*)opt_cmd_s, "kur");
         if (iVar5 == 0) {
            uVar6 = 1;
         }
 else if (( ( bVar2 != 99 ) || ( *(byte*)( (long)puVar27 + 1 ) != 0x72 ) ) || ( uVar6 = 2 ),(byte)puVar27[1] != 0) {
            pEVar29 = (EVP_PKEY*)0x10553f;
            iVar5 = strcmp((char*)puVar27, "p10cr");
            if (iVar5 == 0) {
               uVar6 = 3;
            }
 else if (( ( bVar2 != 0x72 ) || ( *(byte*)( (long)puVar27 + 1 ) != 0x72 ) ) || ( uVar6 = 4 ),(byte)puVar27[1] != 0) {
               pEVar29 = (EVP_PKEY*)0x105573;
               iVar5 = strcmp((char*)puVar27, "genm");
               uVar6 = 5;
               if (iVar5 != 0) {
                  if (2 < opt_verbosity) {
                     uVar25 = 0x446;
                     pcVar20 = "transform_opts";
                     pcVar23 = "%s:%s:%d:CMP %s: unknown cmp command \'%s\'%s%s\n";
                     puVar28 = &_LC4;
                     goto LAB_001055ec;
                  }

                  goto LAB_00104774;
               }

            }

         }

      }

      opt_cmd = uVar6;
      if (opt_keyform_s != 0) {
         pEVar29 = (EVP_PKEY*)0x1049f9;
         iVar5 = opt_format(opt_keyform_s, 0x56, &opt_keyform);
         if (iVar5 == 0) {
            iVar5 = 0;
            if (opt_verbosity < 3) goto LAB_0010477c;
            uVar25 = 0x456;
            pcVar20 = "transform_opts";
            pcVar23 = "%s:%s:%d:CMP %s: unknown option given for key loading format%s%s%s\n";
            puVar27 = (ushort*)&_LC4;
            iVar5 = 0;
            goto LAB_001054c8;
         }

      }

      if (opt_certform_s != (undefined*)0x0) {
         pEVar29 = (EVP_PKEY*)0x104a21;
         iVar5 = opt_format(opt_certform_s, 6, &opt_certform);
         if (iVar5 == 0) {
            iVar5 = 0;
            if (opt_verbosity < 3) goto LAB_0010477c;
            uVar25 = 0x45e;
            pcVar20 = "transform_opts";
            pcVar23 = "%s:%s:%d:CMP %s: unknown option given for certificate storing format%s%s%s\n";
            puVar27 = (ushort*)&_LC4;
            iVar5 = 0;
            goto LAB_001054c8;
         }

      }

      if (opt_crlform_s != (undefined*)0x0) {
         pEVar29 = (EVP_PKEY*)0x104a49;
         iVar5 = opt_format(opt_crlform_s, 6, &opt_crlform);
         if (iVar5 == 0) {
            iVar5 = 0;
            if (opt_verbosity < 3) goto LAB_0010477c;
            uVar25 = 0x463;
            pcVar20 = "transform_opts";
            pcVar23 = "%s:%s:%d:CMP %s: unknown option given for CRL storing format%s%s%s\n";
            puVar27 = (ushort*)&_LC4;
            iVar5 = 0;
            goto LAB_001054c8;
         }

      }

      if (opt_infotype_s == 0) {
         if (opt_cmd == 5) {
            if (3 < opt_verbosity) {
               BIO_printf(_bio_out, "%s:%s:%d:CMP %s: no -infotype option given for genm%s%s%s\n", "setup_client_ctx", "apps/cmp.c", 0x8a9, "warning", &_LC4, &_LC4, &_LC4);
               goto LAB_00105b19;
            }

            goto LAB_00105896;
         }

         LAB_00104a80:if (( opt_oldwithold != 0 ) && ( 3 < opt_verbosity )) {
            BIO_printf(_bio_out, "%s:%s:%d:CMP %s: -oldwithold %s%s%s\n", "setup_client_ctx", "apps/cmp.c", 0x8b9, "warning", "option is ignored unless -cmd \'genm\' and -infotype rootCaCert is given", &_LC4, &_LC4);
         }

         if (opt_newwithnew == 0) {
            LAB_001056b7:if (opt_newwithold != 0) {
               if (opt_verbosity < 4) goto LAB_00104ac0;
               BIO_printf(_bio_out, "%s:%s:%d:CMP %s: -newwithold %s%s%s\n", "setup_client_ctx", "apps/cmp.c", 0x8bd, "warning", "option is ignored unless -cmd \'genm\' and -infotype rootCaCert is given", &_LC4, &_LC4);
            }

            LAB_00105715:if (( opt_oldwithnew != 0 ) && ( 3 < opt_verbosity )) {
               BIO_printf(_bio_out, "%s:%s:%d:CMP %s: -oldwithnew %s%s%s\n", "setup_client_ctx", "apps/cmp.c", 0x8bf, "warning", "option is ignored unless -cmd \'genm\' and -infotype rootCaCert is given", &_LC4, &_LC4);
            }

         }
 else {
            if (3 < opt_verbosity) {
               BIO_printf(_bio_out, "%s:%s:%d:CMP %s: -newwithnew %s%s%s\n", "setup_client_ctx", "apps/cmp.c", 0x8bb, "warning", "option is ignored unless -cmd \'genm\' and -infotype rootCaCert is given", &_LC4, &_LC4);
               goto LAB_001056b7;
            }

            if (opt_newwithold == 0) goto LAB_00105715;
         }

         LAB_00104ac0:if (( opt_cmd != 5 ) || ( opt_infotype != 0x4c9 )) goto LAB_00104acd;
         if (( opt_template == 0 ) && ( 2 < opt_verbosity )) {
            BIO_printf(_bio_err, "%s:%s:%d:CMP %s: missing -template option for genm with infotype certReqTemplate%s%s%s\n", "setup_client_ctx", "apps/cmp.c", 0x8ca, "error", &_LC4, &_LC4, &_LC4);
         }

      }
 else {
         if (opt_cmd == 5) {
            local_240 = 0;
            local_238 = (undefined1[16])0x0;
            local_228 = (undefined1[16])0x0;
            local_218 = (undefined1[16])0x0;
            local_208 = (undefined1[16])0x0;
            local_1f8 = (undefined1[16])0x0;
            local_248 = 0x2d74692d6469;
            local_1e8 = 0;
            pcVar20 = (char*)__strncat_chk(&local_248, opt_infotype_s, 0x5d, 100);
            pEVar29 = (EVP_PKEY*)0x105d16;
            opt_infotype = OBJ_sn2nid(pcVar20);
            if (opt_infotype == 0) {
               iVar5 = 0;
               if (2 < opt_verbosity) {
                  BIO_printf(_bio_err, "%s:%s:%d:CMP %s: unknown OID name in -infotype option%s%s%s\n", "setup_client_ctx", "apps/cmp.c", 0x8b1, "error", &_LC4, &_LC4, &_LC4);
               }

               goto LAB_0010477c;
            }

         }
 else {
            if (opt_verbosity < 4) goto LAB_00104a80;
            BIO_printf(_bio_out, "%s:%s:%d:CMP %s: -infotype option is ignored for commands other than \'genm\'%s%s%s\n", "setup_client_ctx", "apps/cmp.c", 0x8ab, "warning", &_LC4, &_LC4, &_LC4);
         }

         LAB_00105b19:if (opt_cmd != 5) goto LAB_00104a80;
         LAB_00105896:if (opt_infotype != 0x4e6) goto LAB_00104a80;
         LAB_00104acd:if (opt_template != 0) {
            if (opt_verbosity < 4) goto LAB_00104ae8;
            BIO_printf(_bio_out, "%s:%s:%d:CMP %s: -template %s%s%s\n", "setup_client_ctx", "apps/cmp.c", 0x8c5, "warning", "option is ignored unless -cmd \'genm\' and -infotype \'certReqTemplate\' is given", &_LC4, &_LC4);
         }

         if (( opt_keyspec != 0 ) && ( 3 < opt_verbosity )) {
            BIO_printf(_bio_out, "%s:%s:%d:CMP %s: -keyspec %s%s%s\n", "setup_client_ctx", "apps/cmp.c", 0x8c7, "warning", "option is ignored unless -cmd \'genm\' and -infotype \'certReqTemplate\' is given", &_LC4, &_LC4);
         }

      }

      LAB_00104ae8:if (opt_untrusted != 0) {
         lVar9 = load_certs_multifile(opt_untrusted, opt_otherpass, "untrusted certificates", vpm);
         if (lVar9 == 0) goto LAB_00104774;
         iVar5 = OSSL_CMP_CTX_set1_untrusted(param_1, lVar9);
         pEVar29 = (EVP_PKEY*)0x104b30;
         OSSL_STACK_OF_X509_free(lVar9);
         if (iVar5 == 0) goto LAB_0010477c;
      }

      if (opt_srvcert == 0) {
         LAB_00104c08:if (opt_trusted != 0) {
            pXVar11 = (X509_STORE*)load_trusted(opt_trusted, 0, "certs trusted by client");
            if (pXVar11 != (X509_STORE*)0x0) {
               pEVar29 = (EVP_PKEY*)0x104c32;
               iVar5 = OSSL_CMP_CTX_set0_trustedStore(param_1, pXVar11);
               if (iVar5 != 0) goto LAB_00104c3a;
            }

            iVar5 = 0;
            X509_STORE_free(pXVar11);
            goto LAB_0010477c;
         }

      }
 else {
         if (opt_trusted == 0) {
            if (opt_recipient != 0) goto LAB_00104b7f;
            LAB_00104baa:lVar9 = opt_srvcert;
            uVar25 = get_passwd(opt_otherpass, "directly trusted CMP server certificate");
            pXVar10 = (X509*)load_cert_pass(lVar9, 0, 0, uVar25, "directly trusted CMP server certificate");
            clear_free(uVar25);
            if (pXVar10 == (X509*)0x0) goto LAB_00104774;
            iVar5 = OSSL_CMP_CTX_set1_srvCert(param_1, pXVar10);
            pEVar29 = (EVP_PKEY*)0x104bf8;
            X509_free(pXVar10);
            if (iVar5 == 0) goto LAB_0010477c;
            goto LAB_00104c08;
         }

         if (3 < opt_verbosity) {
            BIO_printf(_bio_out, "%s:%s:%d:CMP %s: -trusted option is ignored since -srvcert option is present%s%s%s\n", "setup_verification_ctx", "apps/cmp.c", 0x521, "warning", &_LC4, &_LC4, &_LC4);
         }

         opt_trusted = 0;
         if (opt_recipient != 0) {
            LAB_00104b7f:if (3 < opt_verbosity) {
               BIO_printf(_bio_out, "%s:%s:%d:CMP %s: -recipient option is ignored since -srvcert option is present%s%s%s\n", "setup_verification_ctx", "apps/cmp.c", 0x525, "warning", &_LC4, &_LC4, &_LC4);
            }

            opt_recipient = 0;
            if (opt_srvcert == 0) goto LAB_00104c08;
            goto LAB_00104baa;
         }

         if (opt_srvcert != 0) goto LAB_00104baa;
      }

      LAB_00104c3a:pAVar18 = (ASN1_UTF8STRING*)(ulong)opt_unprotected_errors;
      if (opt_unprotected_errors != 0) {
         pEVar29 = (EVP_PKEY*)0x105c62;
         OSSL_CMP_CTX_set_option(param_1, 0x1f, 1);
      }

      if (opt_out_trusted != 0) {
         pXVar11 = (X509_STORE*)load_certstore(opt_out_trusted, opt_otherpass, "trusted certs for verifying newly enrolled cert", vpm);
         if (pXVar11 == (X509_STORE*)0x0) goto LAB_00104774;
         X509_STORE_set_verify_cb(pXVar11, (verify_cb*)&X509_STORE_CTX_print_verify_cb);
         iVar5 = X509_STORE_set1_param(pXVar11, vpm);
         if (iVar5 == 0) {
            BIO_printf(_bio_err, "error setting verification parameters for %s\n", "trusted certs for verifying newly enrolled cert");
            OSSL_CMP_CTX_print_errors(cmp_ctx);
            X509_STORE_free(pXVar11);
            iVar5 = 0;
            goto LAB_0010477c;
         }

         pXVar12 = (X509_VERIFY_PARAM*)X509_STORE_get0_param(pXVar11);
         X509_VERIFY_PARAM_clear_flags(pXVar12, 2);
         pEVar29 = (EVP_PKEY*)0x104cc8;
         OSSL_CMP_CTX_set_certConf_cb_arg(param_1, pXVar11);
      }

      pcVar20 = (char*)(ulong)opt_disable_confirm;
      if (opt_disable_confirm != 0) {
         pEVar29 = (EVP_PKEY*)0x105dca;
         OSSL_CMP_CTX_set_option(param_1, 0x1a, 1);
      }

      uVar26 = (ulong)opt_implicit_confirm;
      if (opt_implicit_confirm != 0) {
         pEVar29 = (EVP_PKEY*)0x105de2;
         OSSL_CMP_CTX_set_option(param_1, 0x19, 1);
      }

      if (opt_keep_alive != 1) {
         pEVar29 = (EVP_PKEY*)0x104d00;
         OSSL_CMP_CTX_set_option(param_1, 10);
      }

      puVar27 = (ushort*)(ulong)opt_total_timeout;
      puVar28 = (undefined*)(ulong)opt_msg_timeout;
      if ((int)opt_total_timeout < 1) {
         if (-1 < (int)opt_msg_timeout) {
            LAB_001059b8:pEVar29 = (EVP_PKEY*)0x1059c7;
            OSSL_CMP_CTX_set_option(param_1, 0xb, puVar28);
         }

         if (-1 < (int)opt_total_timeout) goto LAB_00104d24;
      }
 else {
         if ((int)opt_total_timeout < (int)opt_msg_timeout) {
            if (2 < opt_verbosity) {
               uVar25 = 0x8d5;
               pcVar23 = "%s:%s:%d:CMP %s: -total_timeout argument = %d must not be < %d (-msg_timeout)%s\n";
               pcVar20 = "setup_client_ctx";
               goto LAB_001055ec;
            }

            goto LAB_00104774;
         }

         if (-1 < (int)opt_msg_timeout) goto LAB_001059b8;
         LAB_00104d24:pEVar29 = (EVP_PKEY*)0x104d31;
         OSSL_CMP_CTX_set_option(param_1, 0xc);
      }

      if (opt_rspin == 0) {
         LAB_00105938:if (opt_reqin_new_tid != 0) {
            if (opt_reqin == 0) {
               LAB_0010594f:if (3 < opt_verbosity) {
                  pcVar20 = "warning";
                  uVar26 = 0x8e6;
                  BIO_printf(_bio_out, "%s:%s:%d:CMP %s: -reqin_new_tid is ignored since -reqin is not present%s%s%s\n", "setup_client_ctx", "apps/cmp.c", 0x8e6, "warning", &_LC4, &_LC4, &_LC4);
                  goto LAB_00105c38;
               }

               goto LAB_0010595c;
            }

            goto LAB_00104d66;
         }

         LAB_00105c38:if (opt_reqin != 0) goto LAB_00104d66;
         LAB_0010595c:if (( ( ( opt_reqout != 0 ) || ( opt_rspin != 0 ) ) || ( opt_rspout != 0 ) ) || ( opt_use_mock_srv != 0 )) goto LAB_00104d66;
      }
 else {
         rspin_in_use = 1;
         if (opt_reqin == 0) {
            if (opt_reqin_new_tid != 0) goto LAB_0010594f;
         }
 else if (3 < opt_verbosity) {
            pcVar20 = "warning";
            uVar26 = 0x8e3;
            BIO_printf(_bio_out, "%s:%s:%d:CMP %s: -reqin is ignored since -rspin is present%s%s%s\n", "setup_client_ctx", "apps/cmp.c", 0x8e3, "warning", &_LC4, &_LC4, &_LC4);
            goto LAB_00105938;
         }

         LAB_00104d66:pEVar29 = (EVP_PKEY*)0x104d75;
         OSSL_CMP_CTX_set_transfer_cb(param_1, read_write_req_resp);
      }

      pcVar23 = (char*)(ulong)opt_tls_used;
      if (opt_tls_used == 0) {
         LAB_001051c1:pEVar14 = opt_ref;
         if (opt_unprotected_requests == 0) {
            if (opt_secret != 0) {
               if (( opt_ref == (EVP_PKEY*)0x0 ) && ( opt_cert == 0 )) goto LAB_00106165;
               goto LAB_001051ef;
            }

            if (opt_key == 0) {
               if (2 < opt_verbosity) {
                  uVar25 = 0x5fc;
                  pcVar20 = "setup_protection_ctx";
                  pcVar23 = "%s:%s:%d:CMP %s: must give -key or -secret unless -unprotected_requests is used%s%s%s\n";
                  puVar27 = (ushort*)&_LC4;
                  iVar5 = 0;
                  goto LAB_001054c8;
               }

               goto LAB_00104774;
            }

            if (opt_ref != (EVP_PKEY*)0x0) {
               if (opt_cert == 0) goto LAB_00105bae;
               goto LAB_0010525f;
            }

            if (opt_cert == 0) goto LAB_00106165;
            if (( opt_key == 0 ) != ( opt_cert == 0 )) goto LAB_00105bae;
            LAB_0010527f:lVar9 = opt_key;
            uVar3 = opt_keyform;
            if (opt_key != 0) {
               uVar25 = get_passwd(opt_keypass, "private key for CMP client certificate");
               pcVar20 = "private key for CMP client certificate";
               uVar26 = param_2;
               pEVar14 = (EVP_PKEY*)load_key(lVar9, uVar3, 0, uVar25);
               clear_free(uVar25);
               if (( pEVar14 == (EVP_PKEY*)0x0 ) || ( pcVar23 = (char*)pEVar14 ),iVar5 = OSSL_CMP_CTX_set1_pkey(param_1),iVar5 == 0) {
                  iVar5 = 0;
                  EVP_PKEY_free(pEVar14);
                  goto LAB_0010477c;
               }

               pEVar29 = (EVP_PKEY*)0x1052f4;
               EVP_PKEY_free(pEVar14);
            }

         }
 else {
            if (( opt_ref == (EVP_PKEY*)0x0 ) && ( opt_cert == 0 )) {
               LAB_00106165:pEVar14 = (EVP_PKEY*)0x0;
               if (opt_subject == 0) {
                  if (2 < opt_verbosity) {
                     uVar25 = 0x602;
                     pcVar20 = "setup_protection_ctx";
                     pcVar23 = "%s:%s:%d:CMP %s: must give -ref if no -cert and no -subject given%s%s%s\n";
                     puVar28 = &_LC4;
                     puVar27 = (ushort*)&_LC4;
                     goto LAB_001055ec;
                  }

                  goto LAB_00104774;
               }

            }

            if (opt_secret == 0) {
               if (( opt_cert == 0 ) != ( opt_key == 0 )) {
                  LAB_00105bae:if (2 < opt_verbosity) {
                     uVar25 = 0x606;
                     pcVar20 = "setup_protection_ctx";
                     pcVar23 = "%s:%s:%d:CMP %s: must give both -cert and -key options or neither%s%s%s\n";
                     puVar28 = &_LC4;
                     puVar27 = (ushort*)&_LC4;
                     goto LAB_001055ec;
                  }

                  goto LAB_00104774;
               }

               LAB_0010525a:if (pEVar14 != (EVP_PKEY*)0x0) {
                  LAB_0010525f:pcVar23 = (char*)pEVar14;
                  sVar15 = strlen(pcVar23);
                  pEVar29 = (EVP_PKEY*)0x105274;
                  iVar5 = OSSL_CMP_CTX_set1_referenceValue(param_1, pcVar23, sVar15 & 0xffffffff);
                  if (iVar5 == 0) goto LAB_0010477c;
               }

               goto LAB_0010527f;
            }

            LAB_001051ef:pcVar23 = "PBMAC";
            pEVar29 = (EVP_PKEY*)0x1051fb;
            pEVar14 = (EVP_PKEY*)get_passwd();
            if (pEVar14 != (EVP_PKEY*)0x0) {
               cleanse(opt_secret);
               sVar15 = strlen((char*)pEVar14);
               pcVar23 = (char*)pEVar14;
               iVar5 = OSSL_CMP_CTX_set1_secretValue(param_1, pEVar14, sVar15 & 0xffffffff);
               pEVar29 = (EVP_PKEY*)0x10522f;
               clear_free(pEVar14);
               if (iVar5 == 0) goto LAB_0010477c;
            }

            pEVar14 = opt_ref;
            if (( opt_cert != 0 ) || ( opt_key != 0 )) {
               if (3 < opt_verbosity) {
                  uVar26 = 0x617;
                  pcVar20 = "warning";
                  pcVar23 = "%s:%s:%d:CMP %s: -cert and -key not used for protection since -secret is given%s%s%s\n";
                  BIO_printf(_bio_out, "%s:%s:%d:CMP %s: -cert and -key not used for protection since -secret is given%s%s%s\n", "setup_protection_ctx", "apps/cmp.c", 0x617, "warning", &_LC4, &_LC4, &_LC4);
                  pEVar14 = opt_ref;
               }

               goto LAB_0010525a;
            }

            if (opt_ref != (EVP_PKEY*)0x0) goto LAB_0010525f;
         }

         if (( ( ( opt_secret == 0 ) && ( opt_srvcert == 0 ) ) && ( opt_trusted == 0 ) ) && ( 3 < opt_verbosity )) {
            uVar26 = 0x629;
            pcVar20 = "warning";
            BIO_printf(_bio_out, "%s:%s:%d:CMP %s: will not authenticate server due to missing -secret, -trusted, or -srvcert%s%s%s\n", "setup_protection_ctx", "apps/cmp.c", 0x629, "warning", &_LC4, &_LC4, &_LC4);
            pEVar29 = (EVP_PKEY*)pcVar23;
         }

         if (opt_cert == 0) {
            if (( opt_own_trusted != (X509_STORE*)0x0 ) && ( 3 < opt_verbosity )) {
               uVar26 = 0x647;
               pcVar20 = "warning";
               BIO_printf(_bio_out, "%s:%s:%d:CMP %s: -own_trusted option is ignored without -cert%s%s%s\n", "setup_protection_ctx", "apps/cmp.c", 0x647, "warning", &_LC4, &_LC4, &_LC4);
            }

            LAB_00105fe0:if (opt_extracerts != 0) {
               lVar9 = load_certs_multifile(opt_extracerts, opt_otherpass, "extra certificates for CMP", vpm);
               if (lVar9 == 0) goto LAB_00104774;
               iVar5 = OSSL_CMP_CTX_set1_extraCertsOut(param_1, lVar9);
               OSSL_STACK_OF_X509_free(lVar9);
               if (iVar5 == 0) goto LAB_0010477c;
            }

            cleanse(opt_otherpass);
            if (opt_unprotected_requests != 0) {
               OSSL_CMP_CTX_set_option(param_1, 0x1e, 1);
            }

            if (opt_digest != (ushort*)0x0) {
               iVar5 = OBJ_ln2nid((char*)opt_digest);
               if (iVar5 == 0) {
                  iVar5 = 0;
                  if (opt_verbosity < 3) goto LAB_0010477c;
                  uVar25 = 0x656;
                  pcVar20 = "setup_protection_ctx";
                  pcVar23 = "%s:%s:%d:CMP %s: digest algorithm name not recognized: \'%s\'%s%s\n";
                  iVar5 = 0;
                  puVar27 = opt_digest;
                  goto LAB_001054c8;
               }

               iVar7 = OSSL_CMP_CTX_set_option(param_1, 0x22, iVar5);
               if (( iVar7 == 0 ) || ( iVar5 = OSSL_CMP_CTX_set_option(param_1, 0x20, iVar5) ),iVar5 == 0) {
                  if (2 < opt_verbosity) {
                     uVar25 = 0x65b;
                     pcVar20 = "setup_protection_ctx";
                     pcVar23 = "%s:%s:%d:CMP %s: digest algorithm name not supported: \'%s\'%s%s\n";
                     puVar28 = &_LC4;
                     puVar27 = opt_digest;
                     goto LAB_001055ec;
                  }

                  goto LAB_00104774;
               }

            }

            if (opt_mac != (ushort*)0x0) {
               iVar5 = OBJ_ln2nid((char*)opt_mac);
               if (iVar5 == 0) {
                  iVar5 = 0;
                  if (opt_verbosity < 3) goto LAB_0010477c;
                  uVar25 = 0x664;
                  pcVar20 = "setup_protection_ctx";
                  pcVar23 = "%s:%s:%d:CMP %s: MAC algorithm name not recognized: \'%s\'%s%s\n";
                  iVar5 = 0;
                  puVar27 = opt_mac;
                  goto LAB_001054c8;
               }

               OSSL_CMP_CTX_set_option(param_1, 0x21, iVar5);
            }

            iVar5 = setup_request_ctx(param_1, param_2);
            if (iVar5 == 0) goto LAB_0010477c;
            if (opt_recipient != 0) {
               a = (X509_NAME*)parse_name(opt_recipient, 0x1001, 1, "recipient");
               if (a == (X509_NAME*)0x0) goto LAB_00104774;
               iVar5 = OSSL_CMP_CTX_set1_recipient(param_1, a);
               if (iVar5 != 0) {
                  X509_NAME_free(a);
                  goto LAB_00106322;
               }

               LAB_001067e8:X509_NAME_free(a);
               if (opt_verbosity < 3) goto LAB_0010477c;
               uVar25 = 0x3c4;
               pcVar20 = "set_name";
               pcVar23 = "%s:%s:%d:CMP %s: out of memory%s%s%s\n";
               puVar27 = (ushort*)&_LC4;
               goto LAB_001054c8;
            }

            LAB_00106322:if (opt_expect_sender != 0) {
               a = (X509_NAME*)parse_name(opt_expect_sender, 0x1001, 1, "expected sender");
               if (a == (X509_NAME*)0x0) goto LAB_00104774;
               iVar5 = OSSL_CMP_CTX_set1_expected_sender(param_1, a);
               if (iVar5 == 0) goto LAB_001067e8;
               X509_NAME_free(a);
            }

            puVar27 = opt_geninfo;
            if (opt_geninfo != (ushort*)0x0) {
               ppuVar16 = __ctype_b_loc();
               puVar21 = *ppuVar16;
               bVar2 = ( byte ) * puVar27;
               pcVar23 = (char*)&local_250;
               do {
                  bVar2 = *(byte*)( (long)puVar21 + (ulong)bVar2 * 2 + 1 );
                  while (( bVar2 & 0x20 ) == 0) {
                     pcVar17 = strchr((char*)puVar27, 0x3a);
                     if (pcVar17 == (char*)0x0) {
                        if (opt_verbosity < 3) goto LAB_00104774;
                        uVar25 = 0x80b;
                        pcVar20 = "handle_opt_geninfo";
                        pcVar23 = "%s:%s:%d:CMP %s: Missing \':\' in -geninfo arg %.40s%s%s\n";
                        puVar28 = &_LC4;
                        goto LAB_001055ec;
                     }

                     *pcVar17 = '\0';
                     pcVar1 = pcVar17 + 1;
                     o = OBJ_txt2obj((char*)puVar27, 0);
                     if (o == (ASN1_OBJECT*)0x0) {
                        if (opt_verbosity < 3) goto LAB_00104774;
                        uVar25 = 0x810;
                        pcVar20 = "handle_opt_geninfo";
                        pcVar23 = "%s:%s:%d:CMP %s: Invalid OID in -geninfo arg %.40s%s%s\n";
                        puVar28 = &_LC4;
                        goto LAB_001055ec;
                     }

                     iVar5 = OBJ_obj2nid(o);
                     if (( iVar5 == 0 ) && ( 3 < opt_verbosity )) {
                        uVar26 = 0x814;
                        pcVar23 = "apps/cmp.c";
                        pcVar20 = "warning";
                        BIO_printf(_bio_out, "%s:%s:%d:CMP %s: Unknown OID in -geninfo arg: %.40s%s%s\n", "handle_opt_geninfo");
                     }

                     a_00 = ASN1_TYPE_new();
                     if (a_00 == (ASN1_TYPE*)0x0) {
                        LAB_00106bee:pAVar18 = (ASN1_UTF8STRING*)0x0;
                        a_01 = (ASN1_INTEGER*)0x0;
                        LAB_00106bf4:if (2 < opt_verbosity) {
                           BIO_printf(_bio_err, "%s:%s:%d:CMP %s: out of memory%s%s%s\n", "handle_opt_geninfo", "apps/cmp.c", 0x850, "error", &_LC4, &_LC4, &_LC4, pcVar23);
                        }

                        LAB_00106bfd:ASN1_OBJECT_free(o);
                        iVar5 = 0;
                        ASN1_TYPE_free(a_00);
                        ASN1_INTEGER_free(a_01);
                        ASN1_UTF8STRING_free(pAVar18);
                        goto LAB_0010477c;
                     }

                     iVar5 = OPENSSL_strncasecmp(pcVar1, &_LC202, 4);
                     if (iVar5 == 0) {
                        puVar27 = (ushort*)( pcVar17 + 5 );
                        lVar9 = strtol((char*)puVar27, (char**)&local_250, 10);
                        if (puVar27 != local_250) {
                           puVar27 = local_250;
                           if (( byte ) * local_250 != 0) {
                              if (( byte ) * local_250 != 0x2c) {
                                 if (2 < opt_verbosity) {
                                    BIO_printf(_bio_err, "%s:%s:%d:CMP %s: Missing \',\' or end of -geninfo arg after int at %.40s%s%s\n", "handle_opt_geninfo", "apps/cmp.c", 0x821, "error", local_250, &_LC4, &_LC4, pcVar20);
                                 }

                                 goto LAB_00106d23;
                              }

                              puVar27 = (ushort*)( (long)local_250 + 1 );
                           }

                           a_01 = ASN1_INTEGER_new();
                           if (a_01 == (ASN1_INTEGER*)0x0) goto LAB_00106bee;
                           iVar5 = ASN1_INTEGER_set(a_01, lVar9);
                           if (iVar5 != 0) {
                              ASN1_TYPE_set(a_00, 2, a_01);
                              goto LAB_001064a7;
                           }

                           pAVar18 = (ASN1_UTF8STRING*)0x0;
                           goto LAB_00106bf4;
                        }

                        if (2 < opt_verbosity) {
                           BIO_printf(_bio_err, "%s:%s:%d:CMP %s: Cannot parse int in -geninfo arg %.40s%s%s\n", "handle_opt_geninfo", "apps/cmp.c", 0x81b, "error", puVar27, &_LC4, &_LC4, pAVar18);
                        }

                        LAB_00106d23:pAVar18 = (ASN1_UTF8STRING*)0x0;
                        a_01 = (ASN1_INTEGER*)0x0;
                        goto LAB_00106bfd;
                     }

                     iVar5 = OPENSSL_strncasecmp(pcVar1, &_LC203, 4);
                     if (iVar5 != 0) {
                        if (2 < opt_verbosity) {
                           BIO_printf(_bio_err, "%s:%s:%d:CMP %s: Missing \'int:\' or \'str:\' in -geninfo arg %.40s%s%s\n", "handle_opt_geninfo", "apps/cmp.c", 0x83c, "error", pcVar1, &_LC4, &_LC4, uVar26);
                        }

                        goto LAB_00106d23;
                     }

                     pcVar17 = pcVar17 + 5;
                     local_250 = (ushort*)strchr(pcVar17, 0x2c);
                     if (local_250 == (ushort*)0x0) {
                        sVar15 = strlen(pcVar17);
                        local_250 = (ushort*)( pcVar17 + sVar15 );
                     }
 else {
                        *(char*)local_250 = '\0';
                        local_250 = (ushort*)( (long)local_250 + 1 );
                     }

                     pAVar18 = ASN1_UTF8STRING_new();
                     if (pAVar18 == (ASN1_UTF8STRING*)0x0) goto LAB_00106bee;
                     iVar5 = ASN1_STRING_set(pAVar18, pcVar17, -1);
                     puVar27 = local_250;
                     if (iVar5 == 0) {
                        a_01 = (ASN1_INTEGER*)0x0;
                        goto LAB_00106bf4;
                     }

                     ASN1_TYPE_set(a_00, 0xc, pAVar18);
                     LAB_001064a7:pAVar24 = o;
                     lVar9 = OSSL_CMP_ITAV_create(o, a_00);
                     if (lVar9 == 0) {
                        if (2 < opt_verbosity) {
                           BIO_printf(_bio_err, "%s:%s:%d:CMP %s: Unable to create \'OSSL_CMP_ITAV\' structure%s%s%s\n", "handle_opt_geninfo", "apps/cmp.c", 0x841, "error", &_LC4, &_LC4, &_LC4, pAVar24);
                        }

                        goto LAB_00106d23;
                     }

                     lVar19 = lVar9;
                     iVar5 = OSSL_CMP_CTX_push0_geninfo_ITAV(param_1);
                     if (iVar5 == 0) {
                        iVar5 = 0;
                        if (2 < opt_verbosity) {
                           BIO_printf(_bio_err, "%s:%s:%d:CMP %s: Failed to add ITAV for geninfo of the PKI message header%s%s%s\n", "handle_opt_geninfo", "apps/cmp.c", 0x848, "error", &_LC4, &_LC4, &_LC4, lVar19);
                        }

                        OSSL_CMP_ITAV_free(lVar9);
                        goto LAB_0010477c;
                     }

                     if (( byte ) * puVar27 == 0) goto LAB_001066e6;
                     puVar21 = *ppuVar16;
                     pcVar23 = (char*)ppuVar16;
                     bVar2 = *(byte*)( (long)puVar21 + ( ulong )(byte) * puVar27 * 2 + 1 );
                  }
;
                  bVar2 = *(byte*)( (long)puVar27 + 1 );
                  puVar27 = (ushort*)( (long)puVar27 + 1 );
               }
 while ( true );
            }

            LAB_001066e6:pcVar20 = opt_profile;
            if (opt_profile == (char*)0x0) {
               LAB_00106895:if (( opt_reqout_only == 0 ) && ( 5 < opt_verbosity )) {
                  pcVar20 = " only if -rspin argument gives too few filenames";
                  if (opt_rspin == 0) {
                     pcVar20 = "";
                  }

                  iVar5 = 1;
                  BIO_printf(_bio_out, "%s:%s:%d:CMP %s: will contact %s%s%s \n", "setup_client_ctx", "apps/cmp.c", 0x91f, &_LC9, local_1d8, local_108, pcVar20, &_LC4);
               }
 else {
                  iVar5 = 1;
               }

               goto LAB_0010477c;
            }

            if (( param_1 == 0 ) || ( lVar9 = lVar9 == 0 )) goto LAB_00104774;
            pAVar18 = ASN1_UTF8STRING_new();
            if (pAVar18 != (ASN1_UTF8STRING*)0x0) {
               sVar15 = strlen(pcVar20);
               iVar5 = ASN1_STRING_set(pAVar18, pcVar20, (int)sVar15);
               if (iVar5 == 0) {
                  ASN1_STRING_free(pAVar18);
               }
 else {
                  OPENSSL_sk_push(lVar9, pAVar18);
                  lVar19 = OSSL_CMP_ITAV_new0_certProfile(lVar9);
                  if (lVar19 != 0) {
                     iVar5 = OSSL_CMP_CTX_push0_geninfo_ITAV(param_1, lVar19);
                     if (iVar5 == 0) {
                        OSSL_CMP_ITAV_free(lVar19);
                        iVar5 = 0;
                        goto LAB_0010477c;
                     }

                     goto LAB_00106895;
                  }

               }

            }

            OPENSSL_sk_pop_free(lVar9, ASN1_UTF8STRING_free);
         }
 else {
            local_250 = (ushort*)0x0;
            pcVar20 = "CMP client certificate (optionally with chain)";
            uVar26 = opt_keypass;
            pXVar12 = vpm;
            iVar5 = load_cert_certs(opt_cert, &local_258, &local_250, 0);
            if (iVar5 != 0) {
               iVar5 = OSSL_CMP_CTX_set1_cert(param_1, local_258, pXVar12, pEVar29);
               X509_free(local_258);
               if (iVar5 == 0) {
                  if (2 < opt_verbosity) {
                     BIO_printf(_bio_err, "%s:%s:%d:CMP %s: out of memory%s%s%s\n", "setup_protection_ctx", "apps/cmp.c", 0x639, "error", &_LC4, &_LC4, &_LC4, extraout_RAX_00);
                     X509_STORE_free((X509_STORE*)0x0);
                     OSSL_STACK_OF_X509_free(local_250);
                     goto LAB_00104774;
                  }

                  LAB_0010537e:pXVar11 = (X509_STORE*)0x0;
               }
 else {
                  pXVar11 = opt_own_trusted;
                  if (( opt_own_trusted != (X509_STORE*)0x0 ) && ( pXVar11 = (X509_STORE*)load_trusted(opt_own_trusted, 0, "trusted certs for verifying own CMP signer cert") ),pXVar11 == (X509_STORE*)0x0) goto LAB_0010537e;
                  iVar5 = OSSL_CMP_CTX_build_cert_chain(param_1, pXVar11, local_250);
                  if (iVar5 != 0) {
                     X509_STORE_free(pXVar11);
                     OSSL_STACK_OF_X509_free(local_250);
                     goto LAB_00105fe0;
                  }

               }

               X509_STORE_free(pXVar11);
               OSSL_STACK_OF_X509_free(local_250);
            }

         }

      }
 else {
         if (opt_tls_cert == 0) {
            if (opt_tls_key != 0) {
               if (2 < opt_verbosity) {
                  uVar25 = 0x8f5;
                  pcVar20 = "setup_client_ctx";
                  pcVar23 = "%s:%s:%d:CMP %s: missing -tls_cert option%s%s%s\n";
                  puVar28 = &_LC4;
                  puVar27 = (ushort*)&_LC4;
                  goto LAB_001055ec;
               }

               goto LAB_00104774;
            }

            if (opt_tls_keypass != 0) goto LAB_00106119;
         }
 else if (opt_tls_key == 0) {
            LAB_00106119:if (2 < opt_verbosity) {
               uVar25 = 0x8f2;
               pcVar20 = "setup_client_ctx";
               pcVar23 = "%s:%s:%d:CMP %s: missing -tls_key option%s%s%s\n";
               puVar28 = &_LC4;
               puVar27 = (ushort*)&_LC4;
               goto LAB_001055ec;
            }

            goto LAB_00104774;
         }

         plVar13 = (long*)CRYPTO_zalloc(0x28, "apps/cmp.c", 0x8fa);
         if (plVar13 == (long*)0x0) goto LAB_00104774;
         uVar25 = OSSL_CMP_CTX_get_http_cb_arg(param_1);
         APP_HTTP_TLS_INFO_free(uVar25);
         OSSL_CMP_CTX_set_http_cb_arg(param_1, plVar13);
         pvVar4 = local_270;
         uVar25 = OSSL_CMP_CTX_get0_untrusted(param_1);
         meth = (SSL_METHOD*)TLS_client_method();
         ctx = SSL_CTX_new(meth);
         if (ctx == (SSL_CTX*)0x0) {
            LAB_00105e78:ctx = (SSL_CTX*)0x0;
         }
 else {
            local_298 = opt_tls_trusted;
            if (opt_tls_trusted == (X509_STORE*)0x0) {
               if (opt_verbosity < 4) {
                  if (( opt_tls_cert != 0 ) && ( opt_tls_key != 0 )) {
                     LAB_00104e73:local_250 = (ushort*)0x0;
                     pcVar20 = "TLS client certificate (optionally with chain)";
                     uVar26 = opt_tls_keypass;
                     iVar5 = load_cert_certs(opt_tls_cert, &local_258, &local_250, 0, opt_tls_keypass, "TLS client certificate (optionally with chain)", vpm);
                     if (iVar5 != 0) {
                        iVar5 = SSL_CTX_use_certificate(ctx, local_258);
                        X509_free(local_258);
                        lVar9 = extraout_RAX;
                        if (( iVar5 < 1 ) || ( lVar9 = lVar9 == 0 )) {
                           if (2 < opt_verbosity) {
                              pcVar20 = "error";
                              uVar26 = 0x587;
                              BIO_printf(_bio_err, "%s:%s:%d:CMP %s: unable to use client TLS certificate file \'%s\'%s%s\n", "setup_ssl_ctx", "apps/cmp.c", 0x587, "error", opt_tls_cert, &_LC4, &_LC4, lVar9);
                           }

                           OSSL_STACK_OF_X509_free(local_250);
                        }
 else {
                           for (iVar5 = 0; iVar7 = OPENSSL_sk_num(uVar25),iVar5 < iVar7; iVar5 = iVar5 + 1) {
                              local_258 = (X509*)OPENSSL_sk_value(uVar25, iVar5);
                              lVar9 = SSL_CTX_ctrl(ctx, 0x59, 1, local_258);
                              if (lVar9 == 0) {
                                 if (2 < opt_verbosity) {
                                    pcVar20 = "error";
                                    uVar26 = 0x58f;
                                    BIO_printf(_bio_err, "%s:%s:%d:CMP %s: could not add untrusted cert to TLS client cert chain%s%s%s\n", "setup_ssl_ctx", "apps/cmp.c", 0x58f, "error", &_LC4, &_LC4, &_LC4, 0);
                                 }

                                 goto LAB_00105e70;
                              }

                           }

                           if (local_298 == (X509_STORE*)0x0) {
                              pXVar12 = (X509_VERIFY_PARAM*)0x0;
                              local_288 = 0;
                           }
 else {
                              pXVar12 = (X509_VERIFY_PARAM*)X509_STORE_get0_param();
                              local_288 = X509_VERIFY_PARAM_get_flags(pXVar12);
                              X509_VERIFY_PARAM_clear_flags(pXVar12, 0xffffffffffd7ff7d);
                           }

                           if (6 < opt_verbosity) {
                              pcVar20 = "debug";
                              uVar26 = 0x5a2;
                              BIO_printf(_bio_out, "%s:%s:%d:CMP %s: trying to build cert chain for own TLS cert%s%s%s\n", "setup_ssl_ctx");
                           }

                           lVar9 = SSL_CTX_ctrl(ctx, 0x69, 3, (void*)0x0);
                           if (lVar9 == 0) {
                              OSSL_CMP_CTX_print_errors(param_1);
                              if (3 < opt_verbosity) {
                                 pcVar20 = "warning";
                                 uVar26 = 0x5a9;
                                 BIO_printf(_bio_out, "%s:%s:%d:CMP %s: could not build cert chain for own TLS cert%s%s%s\n", "setup_ssl_ctx", "apps/cmp.c", 0x5a9, "warning", &_LC4, &_LC4, &_LC4, in_R11);
                              }

                           }
 else if (6 < opt_verbosity) {
                              pcVar20 = "debug";
                              uVar26 = 0x5a6;
                              BIO_printf(_bio_out, "%s:%s:%d:CMP %s: success building cert chain for own TLS cert%s%s%s\n", "setup_ssl_ctx", "apps/cmp.c", 0x5a6, "debug", &_LC4, &_LC4, &_LC4, lVar9);
                           }

                           if (local_298 != (X509_STORE*)0x0) {
                              X509_VERIFY_PARAM_set_flags(pXVar12, local_288);
                           }

                           if (opt_tls_extra == 0) {
                              LAB_00105085:uVar3 = opt_keyform;
                              lVar9 = opt_tls_key;
                              uVar25 = get_passwd(opt_tls_keypass, "TLS client private key");
                              pcVar20 = "TLS client private key";
                              uVar26 = param_2;
                              pEVar29 = (EVP_PKEY*)load_key(lVar9, uVar3, 0, uVar25);
                              clear_free(uVar25);
                              cleanse(opt_tls_keypass);
                              if (pEVar29 != (EVP_PKEY*)0x0) {
                                 pXVar10 = (X509*)SSL_CTX_get0_certificate(ctx);
                                 iVar5 = X509_check_private_key(pXVar10, pEVar29);
                                 if (iVar5 == 0) {
                                    if (2 < opt_verbosity) {
                                       pcVar20 = "error";
                                       uVar26 = 0x5d3;
                                       BIO_printf(_bio_err, "%s:%s:%d:CMP %s: TLS private key \'%s\' does not match the TLS certificate \'%s\'\n%s\n", "setup_ssl_ctx", "apps/cmp.c", 0x5d3, "error", opt_tls_key, opt_tls_cert, &_LC4, pAVar18);
                                    }

                                 }
 else {
                                    iVar5 = SSL_CTX_use_PrivateKey(ctx, pEVar29);
                                    if (0 < iVar5) {
                                       EVP_PKEY_free(pEVar29);
                                       goto LAB_00105124;
                                    }

                                    if (2 < opt_verbosity) {
                                       pcVar23 = "error";
                                       uVar26 = 0x5da;
                                       BIO_printf(_bio_err, "%s:%s:%d:CMP %s: unable to use TLS client private key \'%s\'%s%s\n", "setup_ssl_ctx", "apps/cmp.c", 0x5da, "error", opt_tls_key, &_LC4, &_LC4, pcVar20);
                                       pcVar20 = pcVar23;
                                    }

                                 }

                                 EVP_PKEY_free(pEVar29);
                              }

                           }
 else {
                              lVar9 = load_certs_multifile(opt_tls_extra, opt_otherpass, "extra certificates for TLS", vpm);
                              if (lVar9 != 0) {
                                 iVar5 = 1;
                                 for (iVar7 = 0; iVar8 = OPENSSL_sk_num(lVar9),iVar7 < iVar8; iVar7 = iVar7 + 1) {
                                    local_258 = (X509*)OPENSSL_sk_value(lVar9, iVar7);
                                    if (iVar5 == 0) {
                                       LAB_0010504c:X509_free(local_258);
                                       iVar5 = 0;
                                    }
 else {
                                       lVar19 = SSL_CTX_ctrl(ctx, 0xe, 0, local_258);
                                       iVar5 = (int)lVar19;
                                       if (iVar5 == 0) goto LAB_0010504c;
                                    }

                                 }

                                 OPENSSL_sk_free(lVar9);
                                 if (iVar5 != 0) goto LAB_00105085;
                                 BIO_printf(_bio_err, "error: unable to add TLS extra certs\n");
                              }

                           }

                        }

                     }

                     goto LAB_00105e70;
                  }

               }
 else {
                  pcVar20 = "warning";
                  uVar26 = 0x571;
                  BIO_printf(_bio_out, "%s:%s:%d:CMP %s: -tls_used given without -tls_trusted; will not authenticate the TLS server%s%s%s\n", "setup_ssl_ctx", "apps/cmp.c", 0x571, "warning", &_LC4, &_LC4, &_LC4);
                  if (( opt_tls_cert != 0 ) && ( opt_tls_key != 0 )) goto LAB_00104e73;
                  if (3 < opt_verbosity) goto LAB_001060d3;
               }

            }
 else {
               local_298 = (X509_STORE*)load_trusted(opt_tls_trusted, 0, "trusted TLS certs");
               if (local_298 == (X509_STORE*)0x0) goto LAB_00105e70;
               SSL_CTX_set_cert_store(ctx, local_298);
               SSL_CTX_set_verify(ctx, 1, (callback*)0x0);
               if (( opt_tls_cert != 0 ) && ( opt_tls_key != 0 )) goto LAB_00104e73;
               if (3 < opt_verbosity) {
                  LAB_001060d3:pcVar20 = "warning";
                  uVar26 = 0x5e1;
                  BIO_printf(_bio_out, "%s:%s:%d:CMP %s: -tls_used given without -tls_key; cannot authenticate to the TLS server%s%s%s\n", "setup_ssl_ctx", "apps/cmp.c", 0x5e1, "warning", &_LC4, &_LC4, &_LC4);
                  LAB_00105124:if (local_298 == (X509_STORE*)0x0) goto LAB_0010514e;
               }

               pvVar22 = opt_tls_host;
               if (opt_tls_host == (void*)0x0) {
                  pvVar22 = pvVar4;
               }

               iVar5 = truststore_set_host_etc(local_298, pvVar22);
               if (iVar5 == 0) {
                  LAB_00105e70:SSL_CTX_free(ctx);
                  goto LAB_00105e78;
               }

            }

         }

         LAB_0010514e:pvVar4 = local_270;
         plVar13[4] = (long)ctx;
         local_270 = (void*)0x0;
         *plVar13 = (long)pvVar4;
         pcVar23 = CRYPTO_strdup(server_port_21, "apps/cmp.c", 0x901);
         plVar13[1] = (long)pcVar23;
         if (pcVar23 != (char*)0x0) {
            *(uint*)( plVar13 + 2 ) = ( uint )(local_2a0 != 0);
            iVar5 = OSSL_CMP_CTX_get_option(param_1, 0xb);
            plVar13[3] = (long)iVar5;
            if (plVar13[4] != 0) {
               pcVar23 = &app_http_tls_cb;
               pEVar29 = (EVP_PKEY*)0x1051c1;
               OSSL_CMP_CTX_set_http_cb();
               goto LAB_001051c1;
            }

         }

      }

   }
 else {
      LAB_001046a0:iVar5 = OSSL_HTTP_parse_url(opt_server, &local_274, 0, &local_270, &local_268, &local_278, &local_260, 0, 0);
      if (iVar5 == 0) {
         iVar5 = 0;
         if (opt_verbosity < 3) goto LAB_0010477c;
         uVar25 = 0x883;
         pcVar20 = "setup_client_ctx";
         pcVar23 = "%s:%s:%d:CMP %s: cannot parse -server URL: %s%s%s\n";
         puVar27 = opt_server;
         goto LAB_001054c8;
      }

      if (( local_274 != 0 ) && ( opt_tls_used == 0 )) {
         if (3 < opt_verbosity) {
            BIO_printf(_bio_out, "%s:%s:%d:CMP %s: assuming -tls_used since -server URL indicates HTTPS%s%s%s\n", "setup_client_ctx", "apps/cmp.c", 0x887, "warning", &_LC4, &_LC4, &_LC4);
         }

         opt_tls_used = 1;
      }

      iVar5 = OSSL_CMP_CTX_set_option(param_1, 0xd, opt_tls_used);
      if (iVar5 == 0) goto LAB_0010477c;
      BIO_snprintf(server_port_21, 0x20, "%s", local_268);
      if (opt_path == (char*)0x0) {
         pcVar20 = local_260;
      }

      iVar5 = OSSL_CMP_CTX_set1_server(param_1, local_270);
      if (( ( ( iVar5 != 0 ) && ( iVar5 = OSSL_CMP_CTX_set_serverPort(param_1, local_278) ),iVar5 != 0 ) ) && ( ( opt_proxy == 0 || ( iVar5 = OSSL_CMP_CTX_set1_proxy(param_1) ),iVar5 != 0 ) )) {
         pcVar23 = pcVar20 + 1;
         if (*pcVar20 != '/') {
            pcVar23 = pcVar20;
         }

         puVar28 = &_LC4;
         if (opt_tls_used != 0) {
            puVar28 = &_LC127;
         }

         BIO_snprintf(local_1d8, 200, "http%s://%s:%s/%s", puVar28, local_270, local_268, pcVar23);
         local_2a0 = OSSL_HTTP_adapt_proxy(opt_proxy, opt_no_proxy, local_270, local_274);
         if (local_2a0 != 0) {
            BIO_snprintf(local_108, 200, " via %s", local_2a0);
         }

         goto LAB_0010498c;
      }

      LAB_00104767:if (2 < opt_verbosity) {
         uVar25 = 0x92b;
         pcVar20 = "setup_client_ctx";
         pcVar23 = "%s:%s:%d:CMP %s: out of memory%s%s%s\n";
         puVar28 = &_LC4;
         puVar27 = (ushort*)&_LC4;
         LAB_001055ec:iVar5 = 0;
         BIO_printf(_bio_err, pcVar23, pcVar20, "apps/cmp.c", uVar25, "error", puVar27, puVar28, &_LC4);
         goto LAB_0010477c;
      }

   }

   LAB_00104774:iVar5 = 0;
   LAB_0010477c:CRYPTO_free(local_270);
   CRYPTO_free(local_268);
   CRYPTO_free(local_260);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar5;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */bool cmp_main(int param_1, BIO **param_2, undefined8 param_3, undefined8 param_4, char *param_5, char *param_6) {
   uchar *puVar1;
   X509_VERIFY_PARAM *pXVar2;
   int iVar3;
   int iVar4;
   uint uVar5;
   uint uVar6;
   undefined4 uVar7;
   CONF *pCVar8;
   size_t sVar9;
   stack_st_CONF_VALUE *psVar10;
   undefined *puVar11;
   undefined8 *puVar12;
   undefined8 uVar13;
   X509_STORE *v;
   undefined8 uVar14;
   char **ppcVar15;
   void *pvVar16;
   char *pcVar17;
   BIO **ppBVar18;
   ASN1_OBJECT *pAVar19;
   undefined *puVar20;
   EVP_PKEY *x;
   BIO *pBVar21;
   EVP_CIPHER *enc;
   X509_CRL *a;
   X509_NAME *b;
   X509_NAME *a_00;
   undefined4 extraout_var;
   BIO_METHOD *pBVar22;
   int *piVar23;
   X509 *pXVar24;
   undefined4 extraout_var_00;
   undefined4 extraout_var_01;
   X509_ALGOR *algor;
   ASN1_ITEM *it;
   long lVar25;
   undefined4 extraout_var_02;
   undefined4 extraout_var_03;
   undefined4 extraout_var_04;
   BIO **ppBVar26;
   ulong uVar27;
   undefined8 extraout_RDX;
   undefined8 extraout_RDX_00;
   undefined8 extraout_RDX_01;
   undefined8 extraout_RDX_02;
   char *pcVar28;
   undefined8 extraout_RDX_03;
   int iVar29;
   long lVar30;
   undefined1 *puVar31;
   undefined1 *puVar32;
   undefined1 *puVar33;
   undefined1 *puVar34;
   code *pcVar35;
   char *pcVar36;
   X509 *pXVar37;
   BIO **ppBVar38;
   BIO *pBVar39;
   BIO **ppBVar40;
   ulong in_R11;
   char *pcVar41;
   X509_CRL *x_00;
   char *pcVar42;
   long in_FS_OFFSET;
   bool bVar43;
   undefined1 auVar44[16];
   undefined1 auStack_138[8];
   BIO **local_130;
   BIO **local_128;
   char **local_120;
   long local_118;
   char *local_110;
   BIO *local_108;
   int local_fc;
   BIO **local_f8;
   CONF *local_f0;
   int local_d8[2];
   BIO *local_d0;
   char *local_c8;
   char *local_c0;
   undefined8 local_b8;
   char *local_b0;
   long local_a8;
   char local_98[88];
   undefined8 local_40;
   puVar34 = auStack_138;
   puVar31 = auStack_138;
   puVar32 = auStack_138;
   local_40 = *(undefined8*)( in_FS_OFFSET + 0x28 );
   local_130 = param_2;
   prog = opt_appname(*param_2);
   ppBVar40 = local_130;
   if (param_1 < 2) {
      opt_help(cmp_options);
   }
 else {
      iVar29 = 1;
      if (param_1 != 2) {
         local_128 = (BIO**)CONCAT44(local_128._4_4_, param_1);
         do {
            while (true) {
               if (*(char*)&ppBVar40[iVar29]->method != '-') break;
               local_130 = (BIO**)( (long)&ppBVar40[iVar29]->method + 1 );
               iVar3 = strcmp((char*)local_130, "config");
               if (iVar3 == 0) {
                  opt_config = ppBVar40[(long)iVar29 + 1];
                  uVar5 = opt_verbosity;
               }
 else {
                  iVar3 = strcmp((char*)local_130, "section");
                  if (iVar3 == 0) {
                     opt_section = (undefined*)ppBVar40[(long)iVar29 + 1];
                     uVar5 = opt_verbosity;
                  }
 else {
                     iVar3 = strcmp((char*)local_130, "verbosity");
                     if (iVar3 != 0) break;
                     lVar30 = strtol((char*)ppBVar40[(long)iVar29 + 1], (char**)0x0, 10);
                     uVar5 = (uint)lVar30;
                     if (8 < (uint)lVar30) {
                        if (2 < (int)opt_verbosity) {
                           BIO_printf(_bio_err, "%s:%s:%d:CMP %s: Logging verbosity level %d out of range (0 .. 8)%s%s\n", "set_verbosity", "apps/cmp.c", 0x2fb, "error", lVar30, &_LC4, &_LC4);
                        }

                        goto LAB_001076e4;
                     }

                  }

               }

               opt_verbosity = uVar5;
               iVar29 = iVar29 + 2;
               if (param_1 + -1 <= iVar29) goto LAB_00107040;
            }
;
            iVar29 = iVar29 + 1;
         }
 while ( iVar29 < param_1 + -1 );
         LAB_00107040:param_1 = (int)local_128;
      }

      if (*opt_section == '\0') {
         opt_section = _LC218;
      }

      local_130 = ppBVar40;
      vpm = X509_VERIFY_PARAM_new();
      if (vpm == (X509_VERIFY_PARAM*)0x0) {
         if (2 < (int)opt_verbosity) {
            uVar5 = 0;
            bVar43 = true;
            BIO_printf(_bio_err, "%s:%s:%d:CMP %s: out of memory%s%s%s\n", "cmp_main", "apps/cmp.c", 0xe20, "error", &_LC4, &_LC4, &_LC4);
            pcVar42 = (char*)0x0;
            goto LAB_001073c0;
         }

      }
 else {
         ppBVar40 = local_130;
         if (opt_config == (BIO*)0x0) {
            if (( _default_config_file != (BIO*)0x0 ) && ( pBVar21 = _default_config_file * (char*)&_default_config_file->method != '\0' )) {
               LAB_00107908:iVar29 = access((char*)pBVar21, 0);
               ppBVar40 = local_130;
               if (iVar29 != -1) goto LAB_001070a0;
            }

            LAB_00107593:bVar43 = true;
            uVar5 = 0;
         }
 else {
            if (*(char*)&opt_config->method == '\0') goto LAB_00107593;
            pBVar21 = opt_config;
            if (opt_config == _default_config_file) goto LAB_00107908;
            LAB_001070a0:if (5 < (int)opt_verbosity) {
               param_6 = "info";
               param_5 = (char*)0xe29;
               BIO_printf(_bio_out, "%s:%s:%d:CMP %s: using section(s) \'%s\' of OpenSSL configuration file \'%s\'%s\n", "cmp_main");
            }

            pCVar8 = (CONF*)app_load_config_internal(pBVar21, 0);
            puVar20 = opt_section;
            conf = pCVar8;
            if (pCVar8 == (CONF*)0x0) goto LAB_001076e4;
            iVar29 = strcmp(opt_section, "cmp");
            if (iVar29 != 0) {
               sVar9 = strlen(puVar20);
               ppBVar18 = local_130;
               puVar11 = puVar20 + sVar9;
               do {
                  if (( puVar11 == puVar20 ) || ( puVar11 = (undefined*)prev_item_part_0(puVar20, puVar11) ),puVar11 == (undefined*)0x0) goto LAB_0010714f;
                  psVar10 = NCONF_get_section(conf, opt_item);
                  puVar20 = opt_section;
               }
 while ( psVar10 != (stack_st_CONF_VALUE*)0x0 );
               if (2 < (int)opt_verbosity) {
                  BIO_printf(_bio_err, "%s:%s:%d:CMP %s: no [%s] section found in config file \'%s\'%s\n", "cmp_main", "apps/cmp.c", 0xe39, "error", opt_item, pBVar21, &_LC4);
               }

               goto LAB_001076e4;
            }

            psVar10 = NCONF_get_section(pCVar8, puVar20);
            ppBVar18 = local_130;
            if (( psVar10 == (stack_st_CONF_VALUE*)0x0 ) && ( 5 < (int)opt_verbosity )) {
               param_6 = "info";
               param_5 = (char*)0xe31;
               BIO_printf(_bio_out, "%s:%s:%d:CMP %s: no [%s] section found in config file \'%s\'; will thus use just [default] and unnamed section if present%s\n", "cmp_main");
               ppBVar18 = local_130;
            }

            LAB_0010714f:lVar30 = 0x112828;
            iVar29 = 0xc2;
            pcVar42 = "verbosity";
            ppBVar40 = ppBVar18;
            do {
               iVar3 = strcmp(pcVar42, &OPT_SECTION_STR);
               if (( iVar3 == 0 ) || ( iVar3 = iVar3 == 0 )) {
                  iVar29 = iVar29 + -1;
               }

               pcVar42 = *(char**)( lVar30 + 0x18 );
               lVar30 = lVar30 + 0x18;
            }
 while ( pcVar42 != (char*)0x0 );
            if (iVar29 != 0x9d) {
               auVar44 = OPENSSL_die("assertion failed: OSSL_NELEM(cmp_vars) == n_options + OPT_PROV__FIRST + 1 - OPT_PROV__LAST + OPT_R__FIRST + 1 - OPT_R__LAST + OPT_V__FIRST + 1 - OPT_V__LAST", "apps/cmp.c", 0xa6d);
               puVar34 = auStack_138;
               ppBVar26 = (BIO**)&OPT_MORE_STR;
               goto LAB_0010931d;
            }

            pcVar41 = "verbosity";
            local_110 = (char*)0x0;
            iVar29 = 2;
            local_120 = (char**)0x0;
            local_130 = (BIO**)( cmp_options + 0x48 );
            pcVar42 = (char*)0x0;
            local_fc = param_1;
            local_f8 = ppBVar18;
            do {
               iVar3 = *(int*)( local_130 + 1 );
               iVar4 = strcmp(pcVar41, &OPT_SECTION_STR);
               if (( iVar4 != 0 ) && ( iVar4 = strcmp(pcVar41, &OPT_MORE_STR) ),puVar20 = opt_section,pCVar8 = conf,iVar4 != 0) {
                  local_118 = CONCAT44(local_118._4_4_, iVar3 - 0x640U);
                  bVar43 = iVar3 - 2000U < 0x1f || iVar3 - 0x640U < 5;
                  local_128 = (BIO**)CONCAT71(local_128._1_7_, bVar43);
                  if (( iVar3 - 0x5dcU < 3 ) || ( bVar43 )) {
                     iVar29 = iVar29 + -1;
                  }

                  uVar5 = *(uint*)( (long)local_130 + 0xc );
                  if (uVar5 == 0x2d) {
                     LAB_001077a5:sVar9 = strlen(opt_section);
                     local_108 = (BIO*)CONCAT44(local_108._4_4_, iVar29);
                     puVar11 = puVar20 + sVar9;
                     do {
                        if (( puVar20 == puVar11 ) || ( puVar11 = (undefined*)prev_item_part_0(puVar20, puVar11) ),puVar11 == (undefined*)0x0) {
                           iVar29 = (int)local_108;
                           goto LAB_00107806;
                        }

                        pcVar28 = (char*)app_conf_try_string(pCVar8, opt_item, pcVar41);
                     }
 while ( pcVar28 == (char*)0x0 );
                     iVar29 = (int)local_108;
                     uVar27 = (ulong)local_108 & 0xffffffff;
                     if (( ( *pcVar28 != '\0' ) && ( ppcVar15 = (char**)strtol(pcVar28, &local_c0, 10) ),(long)ppcVar15 + 0x7fffffffffffffffU < 0xfffffffffffffffe )) {
                        if (*(int*)( (long)local_130 + 0xc ) == 0x70) {
                           if (0 < (long)ppcVar15) {
                              if ((char)local_128 == '\0') goto LAB_00108123;
                              BIO_snprintf(local_98, 0x51, "-%s");
                              local_b8 = prog;
                              if (*(int*)( (long)local_130 + 0xc ) == 0x2d) {
                                 uVar13 = 2;
                                 local_120 = ppcVar15;
                                 local_b0 = local_98;
                                 goto LAB_001081b4;
                              }

                              goto LAB_00108210;
                           }

                           pcVar41 = "Non-positive number \"%ld\" for config option -%s\n";
                           pBVar21 = *local_130;
                        }
 else {
                           if (( *(int*)( (long)local_130 + 0xc ) != 0x4e ) || ( -1 < (long)ppcVar15 )) goto LAB_00107890;
                           pcVar41 = "Negative number \"%ld\" for config option -%s\n";
                           pBVar21 = *local_130;
                        }

                        opt_printf_stderr(pcVar41, ppcVar15, pBVar21);
                        uVar27 = (ulong)opt_verbosity;
                        if (8 < opt_verbosity) goto LAB_00107352;
                        goto LAB_001073a0;
                     }

                     LAB_00107806:ERR_clear_error();
                     iVar29 = iVar29 + 1;
                  }
 else {
                     if (0x35 < uVar5 - 0x3e) {
                        LAB_00107813:if ((int)opt_verbosity < 3) {
                           if (8 < opt_verbosity) goto LAB_001073a0;
                           goto LAB_001076e4;
                        }

                        BIO_printf(_bio_err, "%s:%s:%d:CMP %s: internal: unsupported type \'%c\' for option \'%s\'%s\n", "read_config", "apps/cmp.c", 0xaa0, "error", (ulong)uVar5, pcVar41, &_LC4);
                        joined_r0x00107b8d:uVar27 = (ulong)opt_verbosity;
                        if (8 < opt_verbosity) goto LAB_00107352;
                        goto LAB_001076e4;
                     }

                     uVar27 = 1L << ( ( byte )(uVar5 - 0x3e) & 0x3f );
                     if (( uVar27 & 0x5400000010000 ) != 0) goto LAB_001077a5;
                     if (( uVar27 & 0x20000000008001 ) == 0) goto LAB_00107813;
                     sVar9 = strlen(opt_section);
                     local_110 = (char*)CONCAT44(local_110._4_4_, iVar29);
                     puVar11 = puVar20 + sVar9;
                     do {
                        if (( puVar20 == puVar11 ) || ( puVar11 = (undefined*)prev_item_part_0(puVar20, puVar11) ),puVar11 == (undefined*)0x0) {
                           iVar29 = (int)local_110;
                           ERR_clear_error();
                           local_110 = (char*)0x0;
                           iVar29 = iVar29 + 1;
                           goto LAB_0010731b;
                        }

                        pcVar28 = (char*)app_conf_try_string(pCVar8, opt_item, pcVar41);
                     }
 while ( pcVar28 == (char*)0x0 );
                     uVar27 = (ulong)local_110 & 0xffffffff;
                     ppcVar15 = local_120;
                     local_110 = pcVar28;
                     LAB_00107890:ppBVar40 = local_130;
                     iVar29 = (int)uVar27;
                     if ((char)local_128 == '\0') {
                        iVar3 = *(int*)( (long)local_130 + 0xc );
                        if (iVar3 == 0x6c) {
                           iVar29 = iVar29 + 1;
                           **(undefined8**)( cmp_vars + uVar27 * 8 ) = ppcVar15;
                           local_120 = ppcVar15;
                           goto LAB_0010731b;
                        }

                        if (iVar3 < 0x6d) {
                           if (( iVar3 != 0x2d ) && ( iVar3 != 0x4e )) {
                              LAB_001078c4:pcVar41 = local_110;
                              if (( local_110 != (char*)0x0 ) && ( pcVar41 = (char*)0x0 * local_110 != '\0' )) {
                                 pcVar41 = local_110;
                              }

                              local_110 = pcVar41;
                              iVar29 = iVar29 + 1;
                              **(undefined8**)( cmp_vars + uVar27 * 8 ) = local_110;
                              local_120 = ppcVar15;
                              goto LAB_0010731b;
                           }

                        }
 else if (( iVar3 - 0x6eU & 0xfffffffd ) != 0) goto LAB_001078c4;
                        LAB_00108123:iVar29 = (int)uVar27;
                        local_120 = ppcVar15;
                        if (( ulong )(ppcVar15 + 0x10000000) >> 0x20 != 0) {
                           BIO_printf(_bio_err, "integer value out of range for option \'%s\'\n", *local_130);
                           goto joined_r0x00107b8d;
                        }

                        local_120._0_4_ = (int)ppcVar15;
                        **(undefined4**)( cmp_vars + uVar27 * 8 ) = (int)local_120;
                     }
 else {
                        BIO_snprintf(local_98, 0x51, "-%s");
                        local_b8 = prog;
                        if (*(int*)( (long)ppBVar40 + 0xc ) == 0x2d) {
                           local_b0 = local_98;
                           if (ppcVar15 == (char**)0x0) {
                              local_120 = (char**)0x0;
                              goto LAB_00107a92;
                           }

                           uVar13 = 2;
                           local_120 = ppcVar15;
                        }
 else {
                           LAB_00108210:puVar11 = opt_section;
                           local_b0 = local_98;
                           local_108 = *local_130;
                           local_f0 = conf;
                           local_b8 = prog;
                           sVar9 = strlen(opt_section);
                           pCVar8 = local_f0;
                           pBVar21 = local_108;
                           puVar20 = puVar11 + sVar9;
                           local_120 = (char**)CONCAT44(local_120._4_4_, iVar29);
                           local_128 = (BIO**)pcVar42;
                           do {
                              if (( puVar11 == puVar20 ) || ( puVar20 = (undefined*)prev_item_part_0(puVar11, puVar20) ),puVar20 == (undefined*)0x0) {
                                 lVar30 = 0;
                                 iVar29 = (int)local_120;
                                 goto LAB_0010828e;
                              }

                              lVar30 = app_conf_try_string(pCVar8, opt_item, pBVar21);
                           }
 while ( lVar30 == 0 );
                           iVar29 = (int)local_120;
                           LAB_0010828e:uVar13 = 3;
                           pcVar42 = (char*)local_128;
                           local_120 = ppcVar15;
                           local_a8 = lVar30;
                        }

                        LAB_001081b4:opt_init(uVar13, &local_b8, cmp_options);
                        pXVar2 = vpm;
                        if ((uint)local_118 < 5) {
                           uVar7 = opt_next();
                           iVar3 = opt_provider(uVar7);
                           uVar13 = extraout_RDX_01;
                        }
 else {
                           uVar7 = opt_next();
                           iVar3 = opt_verify(uVar7, pXVar2);
                           uVar13 = extraout_RDX_02;
                        }

                        if (iVar3 == 0) {
                           if (2 < (int)opt_verbosity) {
                              BIO_printf(_bio_err, "%s:%s:%d:CMP %s: for option \'%s\' in config file section \'%s\'%s\n", "read_config", "apps/cmp.c", 0xabb, "error", *local_130, opt_section, &_LC4, uVar13);
                           }

                           goto joined_r0x00107b8d;
                        }

                     }

                     LAB_00107a92:iVar29 = iVar29 + 1;
                  }

               }

               LAB_0010731b:local_130 = local_130 + 3;
               pcVar41 = (char*)*local_130;
            }
 while ( (BIO*)pcVar41 != (BIO*)0x0 );
            uVar27 = (ulong)opt_verbosity;
            bVar43 = false;
            uVar5 = 1;
            ppBVar40 = local_f8;
            param_1 = local_fc;
            if (8 < opt_verbosity) {
               LAB_00107352:if (2 < (int)uVar27) {
                  BIO_printf(_bio_err, "%s:%s:%d:CMP %s: Logging verbosity level %d out of range (0 .. 8)%s%s\n", "set_verbosity", "apps/cmp.c", 0x2fb, "error", uVar27, &_LC4, &_LC4);
               }

               LAB_001073a0:bVar43 = false;
               uVar5 = 0xffffffff;
               BIO_printf(_bio_err, "Use -help for summary.\n");
               puVar31 = auStack_138;
               goto LAB_001073c0;
            }

         }

         local_130 = ppBVar40;
         BIO_ctrl(_bio_err, 0xb, 0, (void*)0x0);
         uVar13 = app_get0_propq();
         uVar14 = app_get0_libctx();
         pcVar42 = (char*)OSSL_CMP_CTX_new(uVar14, uVar13);
         puVar31 = auStack_138;
         cmp_ctx = (BIO**)pcVar42;
         if ((BIO**)pcVar42 == (BIO**)0x0) goto LAB_001073c0;
         uVar5 = get_opts(param_1, local_130);
         enc = (EVP_CIPHER*)(ulong)uVar5;
         bVar43 = uVar5 == 0;
         if ((int)uVar5 < 1) {
            pcVar42 = (char*)0x0;
            puVar31 = auStack_138;
            goto LAB_001073c0;
         }

         iVar29 = app_RAND_load();
         if (iVar29 != 0) {
            if (opt_batch != 0) {
               uVar13 = UI_null();
               set_base_ui_method(uVar13);
            }

            pcVar42 = (char*)opt_engine;
            if (( opt_engine == (BIO**)0x0 ) || ( pcVar42 = (char*)setup_engine_methods(opt_engine, 0, 0) ),(BIO**)pcVar42 != (BIO**)0x0) {
               OSSL_CMP_CTX_set_option(cmp_ctx, 0, opt_verbosity);
               pcVar35 = print_to_bio_out;
               iVar29 = OSSL_CMP_CTX_set_log_cb(cmp_ctx);
               if (iVar29 == 0) {
                  if (2 < (int)opt_verbosity) {
                     uVar13 = 0xe65;
                     LAB_00107957:BIO_printf(_bio_err, "%s:%s:%d:CMP %s: cannot set up error reporting and logging for %s%s%s\n", "cmp_main", "apps/cmp.c", uVar13, "error", prog, &_LC4, &_LC4);
                     puVar32 = auStack_138;
                  }

               }
 else if (( ( ( ( opt_tls_cert == 0 ) && ( opt_tls_key == 0 ) ) && ( opt_tls_keypass == 0 ) ) && ( ( opt_tls_extra == 0 && ( opt_tls_trusted == 0 ) ) ) ) && ( opt_tls_host == 0 )) {
                  if (opt_tls_used == 0) {
                     LAB_0010768d:if (opt_port == (code*)0x0) goto LAB_00107ba6;
                  }
 else {
                     if ((int)opt_verbosity < 4) goto LAB_00107b98;
                     param_6 = "warning";
                     param_5 = (char*)0xe6e;
                     pcVar41 = "%s:%s:%d:CMP %s: -tls_used given without any other TLS options%s%s%s\n";
                     BIO_printf(_bio_out, "%s:%s:%d:CMP %s: -tls_used given without any other TLS options%s%s%s\n", "cmp_main");
                     LAB_001083c8:pcVar35 = (code*)pcVar41;
                     if (opt_port == (code*)0x0) goto LAB_00107ba6;
                     if (opt_tls_used != 0) goto LAB_001083e4;
                  }

                  if (( opt_server == (char*)0x0 ) && ( opt_use_mock_srv == 0 )) {
                     if (( opt_reqin == 0 ) && ( opt_reqout == 0 )) {
                        if (( opt_rspin == 0 ) && ( opt_rspout == 0 )) goto LAB_00107bc0;
                        puVar32 = auStack_138;
                        if (2 < (int)opt_verbosity) {
                           BIO_printf(_bio_err, "%s:%s:%d:CMP %s: The -port option does not support -rspin and -rspout%s%s%s\n", "cmp_main", "apps/cmp.c", 0xe80, "error", &_LC4, &_LC4, &_LC4, (ulong)opt_use_mock_srv);
                           puVar32 = auStack_138;
                        }

                     }
 else {
                        puVar32 = auStack_138;
                        if (2 < (int)opt_verbosity) {
                           BIO_printf(_bio_err, "%s:%s:%d:CMP %s: The -port option does not support -reqin and -reqout%s%s%s\n", "cmp_main", "apps/cmp.c", 0xe7c, "error", &_LC4, &_LC4, &_LC4);
                           puVar32 = auStack_138;
                        }

                     }

                  }
 else {
                     puVar32 = auStack_138;
                     if (2 < (int)opt_verbosity) {
                        BIO_printf(_bio_err, "%s:%s:%d:CMP %s: The -port option excludes -server and -use_mock_srv%s%s%s\n", "cmp_main", "apps/cmp.c", 0xe78, "error", &_LC4, &_LC4, &_LC4);
                        puVar32 = auStack_138;
                     }

                  }

               }
 else {
                  if (opt_tls_used == 0) {
                     if (3 < (int)opt_verbosity) {
                        param_6 = "warning";
                        param_5 = (char*)0xe70;
                        pcVar41 = "%s:%s:%d:CMP %s: ignoring TLS options(s) since -tls_used is not given%s%s%s\n";
                        BIO_printf(_bio_out, "%s:%s:%d:CMP %s: ignoring TLS options(s) since -tls_used is not given%s%s%s\n", "cmp_main");
                        goto LAB_001083c8;
                     }

                     goto LAB_0010768d;
                  }

                  LAB_00107b98:if (opt_port != (code*)0x0) {
                     LAB_001083e4:puVar32 = auStack_138;
                     if (2 < (int)opt_verbosity) {
                        BIO_printf(_bio_err, "%s:%s:%d:CMP %s: -tls_used option not supported with -port option%s%s%s\n", "cmp_main", "apps/cmp.c", 0xe74, "error", &_LC4, &_LC4, &_LC4);
                        puVar32 = auStack_138;
                     }

                     goto LAB_001076b6;
                  }

                  LAB_00107ba6:if (( opt_server == (char*)0x0 ) || ( opt_use_mock_srv == 0 )) {
                     LAB_00107bc0:if (opt_ignore_keyusage != 0) {
                        pcVar35 = (code*)0x23;
                        OSSL_CMP_CTX_set_option(cmp_ctx, 0x23, 1);
                     }

                     uVar27 = (ulong)opt_no_cache_extracerts;
                     if (opt_no_cache_extracerts != 0) {
                        pcVar35 = (code*)0x25;
                        OSSL_CMP_CTX_set_option(cmp_ctx, 0x25, 1);
                     }

                     pcVar41 = (char*)0x0;
                     if (opt_reqout_only == 0) {
                        if (( opt_use_mock_srv == 0 ) && ( opt_port == (code*)0x0 )) {
                           pcVar41 = (char*)(ulong)opt_use_mock_srv;
                           if (( opt_tls_used != 0 ) && ( pcVar41 = opt_server ),opt_server == (char*)0x0) goto LAB_00107c0c;
                           goto LAB_00107c33;
                        }

                        enc = (EVP_CIPHER*)setup_srv_ctx(pcVar42);
                        puVar32 = auStack_138;
                        if (enc != (EVP_CIPHER*)0x0) {
                           pcVar41 = (char*)OSSL_CMP_SRV_CTX_get0_cmp_ctx(enc);
                           OSSL_CMP_CTX_set_transfer_cb_arg(cmp_ctx, enc);
                           iVar29 = OSSL_CMP_CTX_set_log_cb(pcVar41, 0x100000);
                           if (iVar29 != 0) {
                              OSSL_CMP_CTX_set_option(pcVar41, 0, opt_verbosity);
                              goto LAB_00107bf0;
                           }

                           puVar32 = auStack_138;
                           if (2 < (int)opt_verbosity) {
                              uVar13 = 0xe9c;
                              goto LAB_00107957;
                           }

                        }

                     }
 else {
                        LAB_00107bf0:in_R11 = (ulong)opt_tls_used;
                        if (( opt_tls_used != 0 ) && ( ( ppBVar40 = (BIO**)(ulong)opt_use_mock_srv ),opt_use_mock_srv != 0 || ( opt_server == (char*)0x0 ) )) {
                           LAB_00107c0c:if (3 < (int)opt_verbosity) {
                              param_6 = "warning";
                              param_5 = (char*)0xea4;
                              BIO_printf(_bio_out, "%s:%s:%d:CMP %s: ignoring -tls_used option since -use_mock_srv is given or -server is not given%s%s%s\n", "cmp_main");
                           }

                           opt_tls_used = 0;
                        }

                        pcVar35 = opt_port;
                        if (opt_port == (code*)0x0) {
                           LAB_00107c33:if (opt_reqout_only == 0) {
                              LAB_0010874e:if (opt_rspin != 0) {
                                 if (opt_server != (char*)0x0) {
                                    if ((int)opt_verbosity < 4) goto LAB_00107cbb;
                                    param_6 = "warning";
                                    param_5 = (char*)0xec2;
                                    BIO_printf(_bio_out, "%s:%s:%d:CMP %s: -server option is not used if enough filenames given for -rspin%s%s%s\n", "cmp_main");
                                 }

                                 LAB_001087ad:if (( opt_use_mock_srv != 0 ) && ( 3 < (int)opt_verbosity )) {
                                    param_6 = "warning";
                                    param_5 = (char*)0xec4;
                                    BIO_printf(_bio_out, "%s:%s:%d:CMP %s: -use_mock_srv option is not used if enough filenames given for -rspin%s%s%s\n", "cmp_main");
                                 }

                              }

                           }
 else {
                              if (( opt_server != (char*)0x0 ) && ( 3 < (int)opt_verbosity )) {
                                 param_6 = "warning";
                                 param_5 = (char*)0xeb4;
                                 BIO_printf(_bio_out, "%s:%s:%d:CMP %s: -server %s%s%s\n", "cmp_main", "apps/cmp.c", 0xeb4, "warning", "option is ignored since -reqout_only option is given", &_LC4, &_LC4, pcVar35);
                              }

                              if (( opt_use_mock_srv != 0 ) && ( 3 < (int)opt_verbosity )) {
                                 param_6 = "warning";
                                 param_5 = (char*)0xeb7;
                                 BIO_printf(_bio_out, "%s:%s:%d:CMP %s: -use_mock_srv %s%s%s\n", "cmp_main");
                              }

                              if (opt_reqout == 0) {
                                 LAB_0010867b:if (opt_rspin != 0) {
                                    if ((int)opt_verbosity < 4) goto LAB_00107c9f;
                                    param_6 = "warning";
                                    param_5 = (char*)0xebb;
                                    BIO_printf(_bio_out, "%s:%s:%d:CMP %s: -rspin %s%s%s\n", "cmp_main");
                                 }

                                 LAB_001086d8:if (( opt_rspout != 0 ) && ( 3 < (int)opt_verbosity )) {
                                    param_6 = "warning";
                                    param_5 = (char*)0xebd;
                                    BIO_printf(_bio_out, "%s:%s:%d:CMP %s: -rspout %s%s%s\n", "cmp_main");
                                 }

                                 opt_reqout = opt_reqout_only;
                                 goto LAB_0010874e;
                              }

                              if (3 < (int)opt_verbosity) {
                                 param_6 = "warning";
                                 param_5 = (char*)0xeb9;
                                 BIO_printf(_bio_out, "%s:%s:%d:CMP %s: -reqout %s%s%s\n", "cmp_main");
                                 goto LAB_0010867b;
                              }

                              if (opt_rspin == 0) goto LAB_001086d8;
                              LAB_00107c9f:opt_reqout = opt_reqout_only;
                              if (opt_server == (char*)0x0) goto LAB_001087ad;
                           }

                           LAB_00107cbb:iVar29 = setup_client_ctx(cmp_ctx, pcVar42);
                           if (iVar29 != 0) {
                              if (0 < opt_repeat) {
                                 local_120 = (char**)( (ulong)local_120 & 0xffffffff00000000 );
                                 ppBVar18 = (BIO**)0x0;
                                 uVar13 = extraout_RDX;
                                 puVar34 = auStack_138;
                                 local_130 = (BIO**)pcVar42;
                                 LAB_00107cf2:ppBVar38 = cmp_ctx;
                                 lVar30 = opt_oldwithold;
                                 ppBVar26 = cmp_ctx;
                                 if (5 < opt_cmd) goto LAB_00108c85;
                                 auVar44._8_8_ = uVar13;
                                 auVar44._0_8_ = (long)&switchD_00107d1a::switchdataD_0011218c + (long)(int)( &switchD_00107d1a::switchdataD_0011218c )[opt_cmd];
                                 switch (opt_cmd) {
                                    case 0:
                        uVar13 = 0;
                        break;
                                    case 1:
                        uVar13 = 7;
                        break;
                                    case 2:
                        uVar13 = 2;
                        break;
                                    case 3:
                        uVar13 = 4;
                        break;
                                    case 4:
                        *(undefined8 *)(puVar34 + -8) = 0x107d25;
                        uVar5 = OSSL_CMP_exec_RR_ses(cmp_ctx);
                        ppBVar26 = cmp_ctx;
                        goto LAB_00107d2f;
                                    case 5:
                        if (opt_infotype == 0x4c7) {
                          *(undefined8 *)(puVar34 + 0x78) = 0;
                          if (opt_cacertsout == (EVP_CIPHER *)0x0) {
                            if (2 < (int)opt_verbosity) {
                              *(char **)(puVar34 + -8) = pcVar41;
                              param_5 = (char *)0xd46;
                              *(undefined **)(puVar34 + -0x10) = &_LC4;
                              *(undefined **)(puVar34 + -0x18) = &_LC4;
                              pcVar42 = 
                              "%s:%s:%d:CMP %s: Missing -cacertsout option for -infotype caCerts%s%s%s\n"
                              ;
                              puVar33 = puVar34 + -0x20;
                              *(undefined **)(puVar34 + -0x20) = &_LC4;
                              goto LAB_00108c6c;
                            }
                          }
                          else {
                            *(undefined8 *)(puVar34 + -8) = 0x108fa1;
                            iVar29 = OSSL_CMP_get1_caCerts(cmp_ctx,puVar34 + 0x78);
                            ppBVar26 = cmp_ctx;
                            if (iVar29 != 0) {
                              if (*(long *)(puVar34 + 0x78) == 0) {
                                if (3 < (int)opt_verbosity) {
                                  *(EVP_CIPHER **)(puVar34 + -8) = enc;
                                  *(undefined **)(puVar34 + -0x10) = &_LC4;
                                  param_6 = "warning";
                                  param_5 = (char *)0xd4f;
                                  *(undefined **)(puVar34 + -0x18) = &_LC4;
                                  *(undefined **)(puVar34 + -0x20) = &_LC4;
                                  *(undefined8 *)(puVar34 + -0x28) = 0x109072;
                                  BIO_printf(_bio_out,
                                             "%s:%s:%d:CMP %s: no CA certificates provided by server%s%s%s\n"
                                             ,"do_genm");
                                }
                              }
                              else {
                                *(undefined8 *)(puVar34 + -8) = 0x108fc6;
                                iVar29 = save_free_certs(*(long *)(puVar34 + 0x78),opt_cacertsout,
                                                         &_LC257);
                                if (iVar29 < 0) {
                                  ppBVar26 = cmp_ctx;
                                  if (2 < (int)opt_verbosity) {
                                    *(ulong *)(puVar34 + -8) = in_R11;
                                    param_5 = (char *)0xd51;
                                    *(undefined **)(puVar34 + -0x10) = &_LC4;
                                    *(undefined **)(puVar34 + -0x18) = &_LC4;
                                    pcVar42 = 
                                    "%s:%s:%d:CMP %s: Failed to store CA certificates from genp in %s%s%s\n"
                                    ;
                                    puVar33 = puVar34 + -0x20;
                                    *(EVP_CIPHER **)(puVar34 + -0x20) = opt_cacertsout;
                                    goto LAB_00108c6c;
                                  }
                                  goto LAB_00108c85;
                                }
                              }
                              goto LAB_00108fca;
                            }
                          }
                        }
                        else {
                          if (opt_infotype == 0x4e6) {
                            ppBVar40 = (BIO **)0x0;
                            *(undefined8 *)(puVar34 + 0x68) = 0;
                            *(undefined8 *)(puVar34 + 0x70) = 0;
                            *(undefined8 *)(puVar34 + 0x78) = 0;
                            if (opt_newwithnew == 0) {
                              if (2 < (int)opt_verbosity) {
                                *(char **)(puVar34 + -8) = param_6;
                                param_5 = (char *)0xd5e;
                                *(undefined **)(puVar34 + -0x10) = &_LC4;
                                *(undefined **)(puVar34 + -0x18) = &_LC4;
                                pcVar42 = 
                                "%s:%s:%d:CMP %s: Missing -newwithnew option for -infotype rootCaCert%s%s%s\n"
                                ;
                                puVar33 = puVar34 + -0x20;
                                *(undefined **)(puVar34 + -0x20) = &_LC4;
                                goto LAB_00108c6c;
                              }
                              goto LAB_00108c85;
                            }
                            if (opt_oldwithold == 0) {
                              pXVar24 = (X509 *)0x0;
                              if (3 < (int)opt_verbosity) {
                                *(char **)(puVar34 + -8) = param_5;
                                *(undefined **)(puVar34 + -0x10) = &_LC4;
                                param_6 = "warning";
                                *(undefined **)(puVar34 + -0x18) = &_LC4;
                                *(undefined **)(puVar34 + -0x20) = &_LC4;
                                *(undefined8 *)(puVar34 + -0x28) = 0x1090cf;
                                BIO_printf(_bio_out,
                                           "%s:%s:%d:CMP %s: No -oldwithold given, will use all certs given with -trusted as trust anchors for verifying the newWithNew cert%s%s%s\n"
                                           ,"do_genm","apps/cmp.c",0xd62);
                              }
LAB_00108de7:
                              param_5 = puVar34 + 0x78;
                              *(undefined8 *)(puVar34 + -8) = 0x108e01;
                              pXVar37 = pXVar24;
                              uVar5 = OSSL_CMP_get1_rootCaKeyUpdate(ppBVar38,pXVar24,puVar34 + 0x68)
                              ;
                              if (uVar5 != 0) {
                                if (*(long *)(puVar34 + 0x68) == 0) {
                                  if (5 < (int)opt_verbosity) {
                                    *(BIO ***)(puVar34 + -8) = ppBVar38;
                                    *(undefined **)(puVar34 + -0x10) = &_LC4;
                                    param_6 = "info";
                                    param_5 = (char *)0xd6f;
                                    *(undefined **)(puVar34 + -0x18) = &_LC4;
                                    *(undefined **)(puVar34 + -0x20) = &_LC4;
                                    *(undefined8 *)(puVar34 + -0x28) = 0x109ca8;
                                    BIO_printf(_bio_out,
                                               "%s:%s:%d:CMP %s: no root CA certificate update available%s%s%s\n"
                                               ,"do_genm");
                                  }
                                }
                                else if (((pXVar24 == (X509 *)0x0) &&
                                         (*(long *)(puVar34 + 0x78) != 0)) &&
                                        (3 < (int)opt_verbosity)) {
                                  *(X509 **)(puVar34 + -8) = pXVar37;
                                  *(undefined **)(puVar34 + -0x10) = &_LC4;
                                  param_6 = "warning";
                                  param_5 = (char *)0xd71;
                                  *(undefined **)(puVar34 + -0x18) = &_LC4;
                                  *(undefined **)(puVar34 + -0x20) = &_LC4;
                                  *(undefined8 *)(puVar34 + -0x28) = 0x109c54;
                                  BIO_printf(_bio_out,
                                             "%s:%s:%d:CMP %s: oldWithNew certificate received in genp for verifying oldWithOld, but oldWithOld was not provided%s%s%s\n"
                                             ,"do_genm");
                                }
                                *(undefined8 *)(puVar34 + -8) = 0x108e35;
                                iVar29 = save_cert_or_delete(*(undefined8 *)(puVar34 + 0x68),
                                                             opt_newwithnew,
                                                             "NewWithNew cert from genp");
                                if (iVar29 == 0) {
LAB_00108e3d:
                                  uVar5 = 0;
                                }
                                else {
                                  *(undefined8 *)(puVar34 + -8) = 0x109133;
                                  iVar29 = save_cert_or_delete(*(undefined8 *)(puVar34 + 0x70),
                                                               opt_newwithold,
                                                               "NewWithOld cert from genp");
                                  if (iVar29 == 0) goto LAB_00108e3d;
                                  *(undefined8 *)(puVar34 + -8) = 0x109156;
                                  iVar29 = save_cert_or_delete(*(undefined8 *)(puVar34 + 0x78),
                                                               opt_oldwithnew,
                                                               "OldWithNew cert from genp");
                                  uVar5 = (uint)(iVar29 != 0);
                                }
                                *(undefined8 *)(puVar34 + -8) = 0x108e4a;
                                X509_free(*(X509 **)(puVar34 + 0x68));
                                *(undefined8 *)(puVar34 + -8) = 0x108e54;
                                X509_free(*(X509 **)(puVar34 + 0x70));
                                *(undefined8 *)(puVar34 + -8) = 0x108e5e;
                                X509_free(*(X509 **)(puVar34 + 0x78));
                              }
                            }
                            else {
                              *(undefined8 *)(puVar34 + -8) = 0x108dbe;
                              uVar13 = get_passwd(opt_otherpass,
                                                  "OldWithOld cert for genm with -infotype rootCaCert"
                                                 );
                              param_5 = "OldWithOld cert for genm with -infotype rootCaCert";
                              *(undefined8 *)(puVar34 + -8) = 0x108dd3;
                              pXVar24 = (X509 *)load_cert_pass(lVar30,0,0);
                              *(undefined8 *)(puVar34 + -8) = 0x108dde;
                              clear_free(uVar13);
                              if (pXVar24 != (X509 *)0x0) goto LAB_00108de7;
                              uVar5 = 0;
                            }
                            *(undefined8 *)(puVar34 + -8) = 0x108e66;
                            X509_free(pXVar24);
                            ppBVar26 = cmp_ctx;
                            goto LAB_00107d2f;
                          }
                          if (opt_infotype == 0x4e8) {
LAB_0010931d:
                            pXVar24 = opt_crlcert;
                            *(undefined8 *)(puVar34 + 0x78) = 0;
                            if (opt_oldcrl == (X509_CRL *)0x0) {
                              if (opt_crlcert == (X509 *)0x0) {
                                if (2 < (int)opt_verbosity) {
                                  *(long *)(puVar34 + -8) = auVar44._8_8_;
                                  param_5 = (char *)0xd88;
                                  *(undefined **)(puVar34 + -0x10) = &_LC4;
                                  *(undefined **)(puVar34 + -0x18) = &_LC4;
                                  pcVar42 = 
                                  "%s:%s:%d:CMP %s: Missing -oldcrl and no -crlcert given for -infotype crlStatusList%s%s%s\n"
                                  ;
                                  puVar33 = puVar34 + -0x20;
                                  *(undefined **)(puVar34 + -0x20) = &_LC4;
                                  goto LAB_00108c6c;
                                }
                                goto LAB_00108c85;
                              }
                              if (opt_crlout != (char *)0x0) goto LAB_0010966f;
                            }
                            else if (opt_crlout != (char *)0x0) {
                              if (opt_crlcert == (X509 *)0x0) {
LAB_00109357:
                                *(undefined8 *)(puVar34 + -8) = 0x10936a;
                                a = (X509_CRL *)load_crl(opt_oldcrl,0,0);
                                if (a == (X509_CRL *)0x0) {
                                  uVar5 = 0;
                                }
                                else {
                                  if ((opt_oldcrl != (X509_CRL *)0x0) &&
                                     (opt_crlcert != (X509 *)0x0)) {
                                    *(undefined8 *)(puVar34 + -8) = 0x109392;
                                    b = X509_get_issuer_name(pXVar24);
                                    *(undefined8 *)(puVar34 + -8) = 0x10939d;
                                    a_00 = (X509_NAME *)X509_CRL_get_issuer(a);
                                    *(undefined8 *)(puVar34 + -8) = 0x1093a8;
                                    iVar29 = X509_NAME_cmp(a_00,b);
                                    if ((iVar29 != 0) && (3 < (int)opt_verbosity)) {
                                      *(ulong *)(puVar34 + -8) = CONCAT44(extraout_var,iVar29);
                                      *(undefined **)(puVar34 + -0x10) = &_LC4;
                                      param_6 = "warning";
                                      param_5 = (char *)0xda2;
                                      *(undefined **)(puVar34 + -0x18) = &_LC4;
                                      *(undefined **)(puVar34 + -0x20) = &_LC4;
                                      *(undefined8 *)(puVar34 + -0x28) = 0x109b4d;
                                      BIO_printf(_bio_out,
                                                 "%s:%s:%d:CMP %s: -oldcrl and -crlcert have different issuer%s%s%s\n"
                                                 ,"do_genm","apps/cmp.c");
                                    }
                                  }
LAB_001093b9:
                                  pcVar42 = puVar34 + 0x78;
                                  *(undefined8 *)(puVar34 + -8) = 0x1093cf;
                                  uVar13 = OSSL_CMP_get1_crlUpdate(ppBVar26,pXVar24,a);
                                  uVar5 = (uint)uVar13;
                                  if (uVar5 != 0) {
                                    x_00 = *(X509_CRL **)(puVar34 + 0x78);
                                    if (x_00 == (X509_CRL *)0x0) {
                                      if ((int)opt_verbosity < 6) {
                                        if (opt_crlout != (char *)0x0) {
LAB_001095fa:
                                          pcVar42 = opt_crlout;
                                          *(undefined8 *)(puVar34 + -8) = 0x109602;
                                          iVar29 = unlink(opt_crlout);
                                          if (iVar29 != 0) {
                                            *(undefined8 *)(puVar34 + -8) = 0x10960b;
                                            piVar23 = __errno_location();
                                            if (*piVar23 != 2) {
                                              uVar5 = 0;
                                              if (2 < (int)opt_verbosity) {
                                                *(int **)(puVar34 + -8) = piVar23;
                                                *(undefined **)(puVar34 + -0x10) = &_LC4;
                                                param_6 = "error";
                                                *(char **)(puVar34 + -0x18) =
                                                     "CRL from genp of type \'crls\'";
                                                param_5 = (char *)0x99e;
                                                *(char **)(puVar34 + -0x20) = pcVar42;
                                                *(undefined8 *)(puVar34 + -0x28) = 0x109666;
                                                BIO_printf(_bio_err,
                                                  "%s:%s:%d:CMP %s: Failed to delete %s, which should be done to indicate there is no %s%s\n"
                                                  ,"delete_file");
                                              }
                                              goto LAB_0010947d;
                                            }
                                          }
                                        }
                                      }
                                      else {
                                        *(undefined8 *)(puVar34 + -8) = uVar13;
                                        pcVar42 = "apps/cmp.c";
                                        *(undefined **)(puVar34 + -0x10) = &_LC4;
                                        param_6 = "info";
                                        param_5 = (char *)0xda9;
                                        *(undefined **)(puVar34 + -0x18) = &_LC4;
                                        *(undefined **)(puVar34 + -0x20) = &_LC4;
                                        *(undefined8 *)(puVar34 + -0x28) = 0x109b94;
                                        iVar29 = BIO_printf(_bio_out,
                                                  "%s:%s:%d:CMP %s: no CRL update available%s%s%s\n"
                                                  ,"do_genm");
                                        uVar13 = CONCAT44(extraout_var_01,iVar29);
                                        if (opt_crlout != (char *)0x0) {
                                          x_00 = *(X509_CRL **)(puVar34 + 0x78);
                                          if (x_00 != (X509_CRL *)0x0) goto LAB_001093f8;
                                          goto LAB_001095fa;
                                        }
                                      }
LAB_001095d6:
                                      uVar5 = 1;
                                    }
                                    else {
                                      if (opt_crlout == (char *)0x0) goto LAB_001095d6;
LAB_001093f8:
                                      pcVar41 = opt_crlout;
                                      if (5 < (int)opt_verbosity) {
                                        *(undefined8 *)(puVar34 + -8) = uVar13;
                                        pcVar42 = "apps/cmp.c";
                                        *(undefined **)(puVar34 + -0x10) = &_LC4;
                                        param_6 = "info";
                                        *(char **)(puVar34 + -0x18) = opt_crlout;
                                        param_5 = (char *)0x984;
                                        *(char **)(puVar34 + -0x20) =
                                             "CRL from genp of type \'crls\'";
                                        *(undefined8 *)(puVar34 + -0x28) = 0x1095cd;
                                        BIO_printf(_bio_out,
                                                  "%s:%s:%d:CMP %s: received %s, saving to file \'%s\'%s\n"
                                                  ,"save_crl");
                                      }
                                      *(undefined8 *)(puVar34 + -8) = 0x10940a;
                                      pBVar22 = BIO_s_file();
                                      *(undefined8 *)(puVar34 + -8) = 0x109412;
                                      pBVar21 = BIO_new(pBVar22);
                                      *(BIO **)(puVar34 + 0x10) = pBVar21;
                                      if (pBVar21 == (BIO *)0x0) {
LAB_0010952e:
                                        if (2 < (int)opt_verbosity) {
                                          *(char **)(puVar34 + -8) = pcVar42;
                                          *(undefined **)(puVar34 + -0x10) = &_LC4;
                                          param_6 = "error";
                                          *(char **)(puVar34 + -0x18) =
                                               "CRL from genp of type \'crls\'";
                                          param_5 = (char *)0x988;
                                          *(char **)(puVar34 + -0x20) = pcVar41;
                                          *(undefined8 *)(puVar34 + -0x28) = 0x10957e;
                                          BIO_printf(_bio_err,
                                                  "%s:%s:%d:CMP %s: could not open file \'%s\' for writing %s%s\n"
                                                  ,"save_crl");
                                        }
LAB_001094cd:
                                        x_00 = (X509_CRL *)0x0;
                                      }
                                      else {
                                        *(undefined8 *)(puVar34 + -8) = 0x109437;
                                        lVar30 = BIO_ctrl(*(BIO **)(puVar34 + 0x10),0x6c,5,pcVar41);
                                        if ((int)lVar30 == 0) goto LAB_0010952e;
                                        if (opt_crlform != 0x8005) {
                                          if (opt_crlform == 4) {
                                            *(undefined8 *)(puVar34 + -8) = 0x109469;
                                            iVar29 = i2d_X509_CRL_bio(*(BIO **)(puVar34 + 0x10),x_00
                                                                     );
                                            goto LAB_00109469;
                                          }
                                          *(undefined8 *)(puVar34 + -8) = 0x1094c4;
                                          BIO_printf(_bio_err,
                                                  "error: unsupported type \'%s\' for writing CRLs\n"
                                                  ,opt_crlform_s);
LAB_001094c4:
                                          if (2 < (int)opt_verbosity) {
                                            *(X509_CRL **)(puVar34 + -8) = x_00;
                                            *(undefined **)(puVar34 + -0x10) = &_LC4;
                                            param_6 = "error";
                                            *(char **)(puVar34 + -0x18) = pcVar41;
                                            param_5 = (char *)0x98e;
                                            *(char **)(puVar34 + -0x20) =
                                                 "CRL from genp of type \'crls\'";
                                            *(undefined8 *)(puVar34 + -0x28) = 0x109528;
                                            BIO_printf(_bio_err,
                                                  "%s:%s:%d:CMP %s: cannot write %s to file \'%s\'%s\n"
                                                  ,"save_crl");
                                          }
                                          goto LAB_001094cd;
                                        }
                                        *(undefined8 *)(puVar34 + -8) = 0x1094df;
                                        iVar29 = PEM_write_bio_X509_CRL
                                                           (*(BIO **)(puVar34 + 0x10),x_00);
LAB_00109469:
                                        x_00 = (X509_CRL *)0x1;
                                        if (iVar29 == 0) goto LAB_001094c4;
                                      }
                                      uVar5 = (uint)x_00;
                                      *(undefined8 *)(puVar34 + -8) = 0x10947d;
                                      BIO_free(*(BIO **)(puVar34 + 0x10));
                                    }
                                  }
                                }
                              }
                              else {
LAB_0010966f:
                                *(undefined8 *)(puVar34 + -8) = 0x109685;
                                uVar13 = get_passwd(opt_otherpass,
                                                    "Cert for genm with -infotype crlStatusList");
                                param_5 = "Cert for genm with -infotype crlStatusList";
                                *(undefined8 *)(puVar34 + -8) = 0x10969a;
                                pXVar24 = (X509 *)load_cert_pass(pXVar24,0,0);
                                *(undefined8 *)(puVar34 + -8) = 0x1096a5;
                                clear_free(uVar13);
                                if (pXVar24 != (X509 *)0x0) {
                                  a = opt_oldcrl;
                                  if (opt_oldcrl != (X509_CRL *)0x0) goto LAB_00109357;
                                  goto LAB_001093b9;
                                }
                                a = (X509_CRL *)0x0;
                                uVar5 = 0;
                              }
LAB_0010947d:
                              *(undefined8 *)(puVar34 + -8) = 0x109485;
                              X509_free(pXVar24);
                              *(undefined8 *)(puVar34 + -8) = 0x10948d;
                              X509_CRL_free(a);
                              *(undefined8 *)(puVar34 + -8) = 0x109497;
                              X509_CRL_free(*(X509_CRL **)(puVar34 + 0x78));
                              ppBVar26 = cmp_ctx;
                              goto LAB_00107d2f;
                            }
                            if (2 < (int)opt_verbosity) {
                              *(long *)(puVar34 + -8) = auVar44._0_8_;
                              param_5 = (char *)0xd8c;
                              *(undefined **)(puVar34 + -0x10) = &_LC4;
                              *(undefined **)(puVar34 + -0x18) = &_LC4;
                              pcVar42 = 
                              "%s:%s:%d:CMP %s: Missing -crlout for -infotype crlStatusList%s%s%s\n"
                              ;
                              puVar33 = puVar34 + -0x20;
                              *(undefined **)(puVar34 + -0x20) = &_LC4;
LAB_00108c6c:
                              param_6 = "error";
                              *(undefined8 *)(puVar33 + -8) = 0x108c7a;
                              BIO_printf(_bio_err,pcVar42,"do_genm");
                              puVar34 = puVar33 + 0x20;
                              ppBVar26 = cmp_ctx;
                            }
                          }
                          else {
                            if (opt_infotype == 0x4c9) {
                              *(undefined8 *)(puVar34 + -8) = 0x1096d5;
                              iVar29 = OSSL_CMP_get1_certReqTemplate
                                                 (cmp_ctx,puVar34 + 0x60,puVar34 + 0x68);
                              pcVar28 = opt_template;
                              if (iVar29 != 0) {
                                puVar1 = *(uchar **)(puVar34 + 0x60);
                                if (puVar1 != (uchar *)0x0) {
                                  *(undefined8 *)(puVar34 + -8) = 0x109828;
                                  pBVar21 = BIO_new_file(opt_template,"wb");
                                  if (pBVar21 == (BIO *)0x0) {
                                    if (2 < (int)opt_verbosity) {
                                      *(BIO ***)(puVar34 + -8) = ppBVar40;
                                      *(undefined **)(puVar34 + -0x10) = &_LC4;
                                      param_6 = "error";
                                      param_5 = (char *)0x9c5;
                                      *(undefined **)(puVar34 + -0x18) = &_LC4;
                                      *(char **)(puVar34 + -0x20) = pcVar28;
                                      *(undefined8 *)(puVar34 + -0x28) = 0x10a092;
                                      BIO_printf(_bio_err,
                                                 "%s:%s:%d:CMP %s: error saving certTemplate from genp: cannot open file %s%s%s\n"
                                                 ,"save_template");
                                    }
LAB_0010a042:
                                    uVar5 = 0;
                                  }
                                  else {
                                    *(undefined8 *)(puVar34 + -8) = 0x109846;
                                    pcVar41 = (char *)pBVar21;
                                    iVar29 = ASN1_i2d_bio(&i2d_OSSL_CRMF_CERTTEMPLATE,pBVar21,puVar1
                                                         );
                                    if (iVar29 == 0) {
                                      if (2 < (int)opt_verbosity) {
                                        *(char **)(puVar34 + -8) = param_6;
                                        *(undefined **)(puVar34 + -0x10) = &_LC4;
                                        param_6 = "error";
                                        param_5 = (char *)0x9cb;
                                        *(undefined **)(puVar34 + -0x18) = &_LC4;
                                        *(char **)(puVar34 + -0x20) = pcVar28;
                                        *(undefined8 *)(puVar34 + -0x28) = 0x10a0d7;
                                        BIO_printf(_bio_err,
                                                  "%s:%s:%d:CMP %s: error saving certTemplate from genp: cannot write file %s%s%s\n"
                                                  ,"save_template");
                                      }
                                      goto LAB_0010a042;
                                    }
                                    if (5 < (int)opt_verbosity) {
                                      *(char **)(puVar34 + -8) = param_5;
                                      pcVar42 = "apps/cmp.c";
                                      *(undefined **)(puVar34 + -0x10) = &_LC4;
                                      param_6 = "info";
                                      param_5 = (char *)0x9cf;
                                      *(undefined **)(puVar34 + -0x18) = &_LC4;
                                      pcVar41 = 
                                      "%s:%s:%d:CMP %s: stored certTemplate from genp to file \'%s\'%s%s\n"
                                      ;
                                      *(char **)(puVar34 + -0x20) = pcVar28;
                                      *(undefined8 *)(puVar34 + -0x28) = 0x10a030;
                                      BIO_printf(_bio_out,
                                                 "%s:%s:%d:CMP %s: stored certTemplate from genp to file \'%s\'%s%s\n"
                                                 ,"save_template");
                                    }
                                    *(undefined8 *)(puVar34 + -8) = 0x109863;
                                    iVar29 = BIO_free(pBVar21);
                                    uVar13 = CONCAT44(extraout_var_00,iVar29);
                                    lVar30 = *(long *)(puVar34 + 0x68);
                                    if (lVar30 == 0) {
                                      if (5 < (int)opt_verbosity) {
                                        *(BIO **)(puVar34 + -8) = pBVar21;
                                        pcVar42 = "apps/cmp.c";
                                        *(undefined **)(puVar34 + -0x10) = &_LC4;
                                        param_6 = "info";
                                        param_5 = (char *)0xceb;
                                        *(undefined **)(puVar34 + -0x18) = &_LC4;
                                        *(char **)(puVar34 + -0x20) =
                                             "specifications contained in keySpec from genp";
                                        *(undefined8 *)(puVar34 + -0x28) = 0x109fe8;
                                        iVar29 = BIO_printf(_bio_out,"%s:%s:%d:CMP %s: No %s%s%s\n",
                                                            "print_keyspec");
                                        uVar13 = CONCAT44(extraout_var_04,iVar29);
                                      }
                                    }
                                    else {
                                      *(undefined8 *)(puVar34 + -8) = 0x109876;
                                      pBVar22 = BIO_s_mem();
                                      *(undefined8 *)(puVar34 + -8) = 0x10987e;
                                      pBVar21 = BIO_new(pBVar22);
                                      if (pBVar21 == (BIO *)0x0) {
                                        uVar13 = 0;
                                        if (2 < (int)opt_verbosity) {
                                          *(char **)(puVar34 + -8) = pcVar41;
                                          pcVar42 = "apps/cmp.c";
                                          *(undefined **)(puVar34 + -0x10) = &_LC4;
                                          param_6 = "error";
                                          param_5 = (char *)0xcf1;
                                          *(undefined **)(puVar34 + -0x18) = &_LC4;
                                          *(char **)(puVar34 + -0x20) =
                                               "specifications contained in keySpec from genp";
                                          *(undefined8 *)(puVar34 + -0x28) = 0x109f77;
                                          iVar29 = BIO_printf(_bio_err,
                                                  "%s:%s:%d:CMP %s: Out of memory - cannot dump key %s%s%s\n"
                                                  ,"print_keyspec");
                                          uVar13 = CONCAT44(extraout_var_03,iVar29);
                                        }
                                      }
                                      else {
                                        iVar29 = 0;
                                        pcVar42 = puVar34 + 0x78;
                                        *(undefined8 *)(puVar34 + -8) = 0x1098aa;
                                        BIO_printf(pBVar21,"Key %s:\n",
                                                   "specifications contained in keySpec from genp");
                                        while( true ) {
                                          *(undefined8 *)(puVar34 + -8) = 0x1098dc;
                                          iVar3 = OPENSSL_sk_num(lVar30);
                                          if (iVar3 <= iVar29) break;
                                          *(undefined8 *)(puVar34 + -8) = 0x1098f0;
                                          uVar13 = OPENSSL_sk_value(lVar30,iVar29);
                                          *(undefined8 *)(puVar34 + 0x10) = uVar13;
                                          *(undefined8 *)(puVar34 + -8) = 0x1098fd;
                                          pAVar19 = (ASN1_OBJECT *)OSSL_CMP_ATAV_get0_type(uVar13);
                                          *(undefined8 *)(puVar34 + -8) = 0x109905;
                                          iVar3 = OBJ_obj2nid(pAVar19);
                                          if (iVar3 == 0x4eb) {
                                            *(undefined8 *)(puVar34 + -8) = 0x109d27;
                                            algor = (X509_ALGOR *)
                                                    OSSL_CMP_ATAV_get0_algId
                                                              (*(undefined8 *)(puVar34 + 0x10));
                                            *(undefined8 *)(puVar34 + -8) = 0x109d3f;
                                            X509_ALGOR_get0((ASN1_OBJECT **)(puVar34 + 0x70),
                                                            (int *)(puVar34 + 0x5c),(void **)pcVar42
                                                            ,algor);
                                            *(undefined8 *)(puVar34 + -8) = 0x109d50;
                                            BIO_printf(pBVar21,"Key algorithm: ");
                                            *(undefined8 *)(puVar34 + -8) = 0x109d5d;
                                            i2a_ASN1_OBJECT(pBVar21,*(ASN1_OBJECT **)
                                                                     (puVar34 + 0x70));
                                            if ((*(int *)(puVar34 + 0x5c) == -1) ||
                                               (algor->parameter == (ASN1_TYPE *)0x0)) {
                                              *(undefined8 *)(puVar34 + -8) = 0x109f91;
                                              BIO_printf(pBVar21,"\n");
                                            }
                                            else {
                                              *(undefined8 *)(puVar34 + -8) = 0x109d84;
                                              BIO_printf(pBVar21," - ");
                                              *(undefined8 *)(puVar34 + -8) = 0x109d89;
                                              it = (ASN1_ITEM *)X509_ALGOR_it();
                                              param_5 = (char *)0x0;
                                              *(undefined8 *)(puVar34 + -8) = 0x109d9c;
                                              ASN1_item_print(pBVar21,(ASN1_VALUE *)algor,0,it,
                                                              (ASN1_PCTX *)0x0);
                                            }
                                          }
                                          else if (iVar3 == 0x4ec) {
                                            *(undefined8 *)(puVar34 + -8) = 0x109926;
                                            uVar5 = OSSL_CMP_ATAV_get_rsaKeyLen
                                                              (*(undefined8 *)(puVar34 + 0x10));
                                            *(undefined8 *)(puVar34 + -8) = 0x109939;
                                            BIO_printf(pBVar21,"Key algorithm: RSA %d\n",
                                                       (ulong)uVar5);
                                          }
                                          else {
                                            *(undefined8 *)(puVar34 + -8) = 0x1098b3;
                                            pcVar41 = OBJ_nid2ln(iVar3);
                                            if (pcVar41 == (char *)0x0) {
                                              *(undefined8 *)(puVar34 + -8) = 0x109d0a;
                                              pcVar41 = OBJ_nid2sn(iVar3);
                                              if (pcVar41 == (char *)0x0) {
                                                pcVar41 = "<unknown OID>";
                                              }
                                            }
                                            *(undefined8 *)(puVar34 + -8) = 0x1098d0;
                                            BIO_printf(pBVar21,"Invalid key spec: %s\n",pcVar41);
                                          }
                                          iVar29 = iVar29 + 1;
                                        }
                                        *(undefined8 *)(puVar34 + -8) = 0x109db9;
                                        BIO_printf(pBVar21,"End of key %s",
                                                   "specifications contained in keySpec from genp");
                                        *(undefined8 *)(puVar34 + -8) = 0x109dcb;
                                        ppBVar26 = (BIO **)pcVar42;
                                        lVar25 = BIO_ctrl(pBVar21,3,0,pcVar42);
                                        if (lVar25 < 0x80000000) {
                                          if (5 < (int)opt_verbosity) {
                                            *(undefined8 *)(puVar34 + -8) = extraout_RDX_03;
                                            pcVar42 = "apps/cmp.c";
                                            *(undefined **)(puVar34 + -0x10) = &_LC4;
                                            param_5 = (char *)0xd1e;
                                            param_6 = "info";
                                            *(undefined8 *)(puVar34 + -0x18) =
                                                 *(undefined8 *)(puVar34 + 0x78);
                                            *(long *)(puVar34 + -0x20) = lVar25;
                                            *(undefined8 *)(puVar34 + -0x28) = 0x109f1c;
                                            BIO_printf(_bio_out,"%s:%s:%d:CMP %s: %.*s%s\n",
                                                       "print_keyspec");
                                          }
                                        }
                                        else if (2 < (int)opt_verbosity) {
                                          *(BIO ***)(puVar34 + -8) = ppBVar26;
                                          pcVar42 = "apps/cmp.c";
                                          *(undefined **)(puVar34 + -0x10) = &_LC4;
                                          param_6 = "error";
                                          param_5 = (char *)0xd1c;
                                          *(undefined **)(puVar34 + -0x18) = &_LC4;
                                          *(char **)(puVar34 + -0x20) =
                                               "specifications contained in keySpec from genp";
                                          *(undefined8 *)(puVar34 + -0x28) = 0x109ec2;
                                          BIO_printf(_bio_err,
                                                  "%s:%s:%d:CMP %s: Info too large - cannot dump key %s%s%s\n"
                                                  ,"print_keyspec");
                                        }
                                        *(undefined8 *)(puVar34 + -8) = 0x109dec;
                                        iVar29 = BIO_free(pBVar21);
                                        uVar13 = CONCAT44(extraout_var_02,iVar29);
                                      }
                                    }
                                    pcVar41 = opt_keyspec;
                                    if (opt_keyspec != (char *)0x0) {
                                      puVar1 = *(uchar **)(puVar34 + 0x68);
                                      if (puVar1 != (uchar *)0x0) {
                                        *(undefined8 *)(puVar34 + -8) = 0x109e15;
                                        pBVar21 = BIO_new_file(opt_keyspec,"wb");
                                        if (pBVar21 == (BIO *)0x0) {
                                          if (2 < (int)opt_verbosity) {
                                            *(char **)(puVar34 + -8) = pcVar42;
                                            *(undefined **)(puVar34 + -0x10) = &_LC4;
                                            param_6 = "error";
                                            param_5 = (char *)0x9da;
                                            *(undefined **)(puVar34 + -0x18) = &_LC4;
                                            *(char **)(puVar34 + -0x20) = pcVar41;
                                            *(undefined8 *)(puVar34 + -0x28) = 0x10a1c9;
                                            BIO_printf(_bio_err,
                                                  "%s:%s:%d:CMP %s: error saving keySpec from genp: cannot open file %s%s%s\n"
                                                  ,"save_keyspec");
                                          }
                                        }
                                        else {
                                          *(undefined8 *)(puVar34 + -8) = 0x109e33;
                                          iVar29 = ASN1_i2d_bio(&i2d_OSSL_CMP_ATAVS,pBVar21,puVar1);
                                          if (iVar29 != 0) {
                                            if (5 < (int)opt_verbosity) {
                                              *(uchar **)(puVar34 + -8) = puVar1;
                                              *(undefined **)(puVar34 + -0x10) = &_LC4;
                                              param_6 = "info";
                                              param_5 = (char *)0x9e2;
                                              *(undefined **)(puVar34 + -0x18) = &_LC4;
                                              *(char **)(puVar34 + -0x20) = pcVar41;
                                              *(undefined8 *)(puVar34 + -0x28) = 0x10a11f;
                                              BIO_printf(_bio_out,
                                                  "%s:%s:%d:CMP %s: stored keySpec from genp to file \'%s\'%s%s\n"
                                                  ,"save_keyspec");
                                            }
                                            *(undefined8 *)(puVar34 + -8) = 0x109e50;
                                            BIO_free(pBVar21);
                                            goto LAB_00109e50;
                                          }
                                          if (2 < (int)opt_verbosity) {
                                            *(long *)(puVar34 + -8) = lVar30;
                                            *(undefined **)(puVar34 + -0x10) = &_LC4;
                                            param_6 = "error";
                                            param_5 = (char *)0x9df;
                                            *(undefined **)(puVar34 + -0x18) = &_LC4;
                                            *(char **)(puVar34 + -0x20) = pcVar41;
                                            *(undefined8 *)(puVar34 + -0x28) = 0x10a174;
                                            BIO_printf(_bio_err,
                                                  "%s:%s:%d:CMP %s: error saving keySpec from genp: cannot write file %s%s%s\n"
                                                  ,"save_keyspec");
                                          }
                                        }
                                        goto LAB_0010a042;
                                      }
                                      if (3 < (int)opt_verbosity) {
                                        *(undefined8 *)(puVar34 + -8) = uVar13;
                                        *(undefined **)(puVar34 + -0x10) = &_LC4;
                                        param_6 = "warning";
                                        param_5 = (char *)0xdcc;
                                        *(undefined **)(puVar34 + -0x18) = &_LC4;
                                        *(undefined **)(puVar34 + -0x20) = &_LC4;
                                        *(undefined8 *)(puVar34 + -0x28) = 0x10a292;
                                        BIO_printf(_bio_out,
                                                  "%s:%s:%d:CMP %s: no key specifications available%s%s%s\n"
                                                  ,"do_genm");
                                        if (opt_keyspec == (char *)0x0) goto LAB_00109e50;
                                      }
                                      pcVar42 = opt_keyspec;
                                      *(undefined8 *)(puVar34 + -8) = 0x10a1e3;
                                      iVar29 = unlink(opt_keyspec);
                                      if (iVar29 != 0) {
                                        *(undefined8 *)(puVar34 + -8) = 0x10a1f0;
                                        piVar23 = __errno_location();
                                        if (*piVar23 != 2) {
                                          if (2 < (int)opt_verbosity) {
                                            *(int **)(puVar34 + -8) = piVar23;
                                            *(undefined **)(puVar34 + -0x10) = &_LC4;
                                            param_6 = "error";
                                            *(char **)(puVar34 + -0x18) = "keySpec from genp";
                                            param_5 = (char *)0x99e;
                                            *(char **)(puVar34 + -0x20) = pcVar42;
                                            *(undefined8 *)(puVar34 + -0x28) = 0x10a24b;
                                            BIO_printf(_bio_err,
                                                  "%s:%s:%d:CMP %s: Failed to delete %s, which should be done to indicate there is no %s%s\n"
                                                  ,"delete_file");
                                          }
                                          goto LAB_0010a042;
                                        }
                                      }
                                    }
LAB_00109e50:
                                    uVar5 = 1;
                                  }
                                  *(undefined8 *)(puVar34 + -8) = 0x109e60;
                                  OSSL_CRMF_CERTTEMPLATE_free(*(undefined8 *)(puVar34 + 0x60));
                                  *(undefined8 *)(puVar34 + -8) = 0x109e71;
                                  OPENSSL_sk_pop_free(*(undefined8 *)(puVar34 + 0x68),
                                                      &OSSL_CRMF_ATTRIBUTETYPEANDVALUE_free);
                                  ppBVar26 = cmp_ctx;
                                  goto LAB_00107d2f;
                                }
                                if (3 < (int)opt_verbosity) {
                                  *(undefined8 *)(puVar34 + -8) = 0;
                                  *(undefined **)(puVar34 + -0x10) = &_LC4;
                                  param_6 = "warning";
                                  param_5 = (char *)0xdbe;
                                  *(undefined **)(puVar34 + -0x18) = &_LC4;
                                  *(undefined **)(puVar34 + -0x20) = &_LC4;
                                  *(undefined8 *)(puVar34 + -0x28) = 0x109809;
                                  BIO_printf(_bio_out,
                                             "%s:%s:%d:CMP %s: no certificate request template available%s%s%s\n"
                                             ,"do_genm");
                                }
                                pcVar42 = opt_template;
                                if (opt_template == (char *)0x0) {
LAB_00109779:
                                  pcVar42 = opt_keyspec;
                                  if (opt_keyspec != (char *)0x0) {
                                    *(undefined8 *)(puVar34 + -8) = 0x109791;
                                    iVar29 = unlink(opt_keyspec);
                                    if (iVar29 != 0) {
                                      *(undefined8 *)(puVar34 + -8) = 0x10979e;
                                      piVar23 = __errno_location();
                                      if (*piVar23 != 2) {
                                        if ((int)opt_verbosity < 3) goto LAB_0010971f;
                                        *(ulong *)(puVar34 + -8) = in_R11;
                                        *(undefined **)(puVar34 + -0x10) = &_LC4;
                                        pcVar41 = "keySpec from genp";
                                        goto LAB_0010973e;
                                      }
                                    }
                                  }
LAB_00108fca:
                                  uVar5 = 1;
                                  ppBVar26 = cmp_ctx;
                                  goto LAB_00107d2f;
                                }
                                *(undefined8 *)(puVar34 + -8) = 0x109708;
                                iVar29 = unlink(opt_template);
                                if (iVar29 == 0) goto LAB_00109779;
                                *(undefined8 *)(puVar34 + -8) = 0x109711;
                                piVar23 = __errno_location();
                                if (*piVar23 == 2) goto LAB_00109779;
                                if ((int)opt_verbosity < 3) goto LAB_0010971f;
                                *(char **)(puVar34 + -8) = pcVar41;
                                *(undefined **)(puVar34 + -0x10) = &_LC4;
                                pcVar41 = "certTemplate from genp";
LAB_0010973e:
                                *(char **)(puVar34 + -0x18) = pcVar41;
                                *(char **)(puVar34 + -0x20) = pcVar42;
                                param_6 = "error";
                                param_5 = (char *)0x99e;
                                *(undefined8 *)(puVar34 + -0x28) = 0x109773;
                                BIO_printf(_bio_err,
                                           "%s:%s:%d:CMP %s: Failed to delete %s, which should be done to indicate there is no %s%s\n"
                                           ,"delete_file");
                              }
LAB_0010971f:
                              uVar5 = 0;
                              ppBVar26 = cmp_ctx;
                              goto LAB_00107d2f;
                            }
                            if (opt_infotype == 0) {
LAB_00108013:
                              *(undefined8 *)(puVar34 + -8) = 0x10801b;
                              lVar30 = OSSL_CMP_exec_GENM_ses(ppBVar38);
                              if (lVar30 != 0) {
                                *(undefined8 *)(puVar34 + -8) = 0x10802f;
                                iVar29 = OPENSSL_sk_num(lVar30);
                                if (iVar29 < 1) {
                                  if (5 < (int)opt_verbosity) {
                                    *(ulong *)(puVar34 + -8) = in_R11;
                                    *(undefined **)(puVar34 + -0x10) = &_LC4;
                                    param_6 = "info";
                                    param_5 = (char *)0x9f9;
                                    *(undefined **)(puVar34 + -0x18) = &_LC4;
                                    *(undefined **)(puVar34 + -0x20) = &_LC4;
                                    *(undefined8 *)(puVar34 + -0x28) = 0x109a67;
                                    BIO_printf(_bio_out,
                                               "%s:%s:%d:CMP %s: genp does not contain any ITAV%s%s%s\n"
                                               ,"print_itavs");
                                  }
                                  uVar5 = 1;
                                }
                                else {
                                  uVar5 = 1;
                                  uVar27 = 1;
                                  do {
                                    *(undefined8 *)(puVar34 + -8) = 0x10809c;
                                    uVar13 = OPENSSL_sk_value(lVar30,(int)uVar27 + -1);
                                    *(undefined8 *)(puVar34 + 0x10) = uVar13;
                                    *(undefined8 *)(puVar34 + -8) = 0x1080a9;
                                    pAVar19 = (ASN1_OBJECT *)OSSL_CMP_ITAV_get0_type(uVar13);
                                    if (*(long *)(puVar34 + 0x10) == 0) {
                                      if (2 < (int)opt_verbosity) {
                                        *(BIO ***)(puVar34 + -8) = ppBVar40;
                                        param_6 = "error";
                                        *(undefined **)(puVar34 + -0x10) = &_LC4;
                                        param_5 = (char *)0xa03;
                                        *(undefined **)(puVar34 + -0x18) = &_LC4;
                                        *(ulong *)(puVar34 + -0x20) = uVar27;
                                        *(undefined8 *)(puVar34 + -0x28) = 0x1080fc;
                                        BIO_printf(_bio_err,
                                                  "%s:%s:%d:CMP %s: could not get ITAV #%d from genp%s%s\n"
                                                  ,"print_itavs");
                                      }
LAB_0010998b:
                                      uVar5 = 0;
                                    }
                                    else {
                                      *(undefined1 **)(puVar34 + 0x10) = puVar34 + 0xa0;
                                      *(undefined8 *)(puVar34 + -8) = 0x10806b;
                                      iVar3 = i2t_ASN1_OBJECT(puVar34 + 0xa0,0x50,pAVar19);
                                      if (iVar3 < 1) {
                                        if (2 < (int)opt_verbosity) {
                                          *(char **)(puVar34 + -8) = param_6;
                                          param_6 = "error";
                                          *(undefined **)(puVar34 + -0x10) = &_LC4;
                                          param_5 = (char *)0xa08;
                                          *(undefined **)(puVar34 + -0x18) = &_LC4;
                                          *(ulong *)(puVar34 + -0x20) = uVar27;
                                          *(undefined8 *)(puVar34 + -0x28) = 0x1099cf;
                                          BIO_printf(_bio_err,
                                                  "%s:%s:%d:CMP %s: error parsing type of ITAV #%d from genp%s%s\n"
                                                  ,"print_itavs");
                                        }
                                        goto LAB_0010998b;
                                      }
                                      if (5 < (int)opt_verbosity) {
                                        *(char **)(puVar34 + -8) = param_5;
                                        param_6 = "info";
                                        *(undefined **)(puVar34 + -0x10) = &_LC4;
                                        param_5 = (char *)0xa0b;
                                        *(undefined8 *)(puVar34 + -0x18) =
                                             *(undefined8 *)(puVar34 + 0x10);
                                        *(ulong *)(puVar34 + -0x20) = uVar27;
                                        *(undefined8 *)(puVar34 + -0x28) = 0x109236;
                                        BIO_printf(_bio_out,
                                                  "%s:%s:%d:CMP %s: ITAV #%d from genp infoType=%s%s\n"
                                                  ,"print_itavs");
                                      }
                                    }
                                    uVar6 = (int)uVar27 + 1;
                                    uVar27 = (ulong)uVar6;
                                  } while ((int)uVar6 <= iVar29);
                                }
                                *(undefined8 *)(puVar34 + -8) = 0x1091f4;
                                OPENSSL_sk_pop_free(lVar30,OSSL_CMP_ITAV_free);
                                ppBVar26 = cmp_ctx;
                                goto LAB_00107d2f;
                              }
                              *(undefined8 *)(puVar34 + -8) = 0x1099dd;
                              iVar29 = OSSL_CMP_CTX_get_status();
                              ppBVar26 = cmp_ctx;
                              if (iVar29 != -3) {
                                if ((int)opt_verbosity < 3) goto LAB_0010971f;
                                *(BIO ***)(puVar34 + -8) = ppBVar38;
                                param_5 = (char *)0xdf0;
                                *(undefined **)(puVar34 + -0x10) = &_LC4;
                                *(undefined **)(puVar34 + -0x18) = &_LC4;
                                pcVar42 = 
                                "%s:%s:%d:CMP %s: Did not receive response on genm or genp is not valid%s%s%s\n"
                                ;
                                puVar33 = puVar34 + -0x20;
                                *(undefined **)(puVar34 + -0x20) = &_LC4;
                                goto LAB_00108c6c;
                              }
                            }
                            else {
                              if (3 < (int)opt_verbosity) {
                                *(char **)(puVar34 + -8) = pcVar41;
                                *(undefined **)(puVar34 + -0x10) = &_LC4;
                                param_6 = "warning";
                                param_5 = (char *)0xdde;
                                *(undefined **)(puVar34 + -0x18) = &_LC4;
                                *(undefined8 *)(puVar34 + -0x20) = opt_infotype_s;
                                *(undefined8 *)(puVar34 + -0x28) = 0x109cf4;
                                BIO_printf(_bio_out,
                                           "%s:%s:%d:CMP %s: No specific support for -infotype %s available%s%s\n"
                                           ,"do_genm");
                              }
                              *(undefined8 *)(puVar34 + -8) = 0x107fed;
                              pAVar19 = OBJ_nid2obj(opt_infotype);
                              *(undefined8 *)(puVar34 + -8) = 0x107ff7;
                              lVar30 = OSSL_CMP_ITAV_create(pAVar19,0);
                              if (lVar30 != 0) {
                                *(undefined8 *)(puVar34 + -8) = 0x10800b;
                                iVar29 = OSSL_CMP_CTX_push0_genm_ITAV(ppBVar38,lVar30);
                                if (iVar29 != 0) goto LAB_00108013;
                              }
                              ppBVar26 = cmp_ctx;
                              if (2 < (int)opt_verbosity) {
                                *(EVP_CIPHER **)(puVar34 + -8) = enc;
                                param_5 = (char *)0xde3;
                                *(undefined **)(puVar34 + -0x10) = &_LC4;
                                *(undefined **)(puVar34 + -0x18) = &_LC4;
                                pcVar42 = 
                                "%s:%s:%d:CMP %s: Failed to create genm for -infotype %s%s%s\n";
                                puVar33 = puVar34 + -0x20;
                                *(undefined8 *)(puVar34 + -0x20) = opt_infotype_s;
                                goto LAB_00108c6c;
                              }
                            }
                          }
                        }
LAB_00108c85:
                        uVar5 = 0;
                        goto LAB_00107d2f;
                                 }

                                 *(undefined8*)( puVar34 + -8 ) = 0x107f7c;
                                 ppBVar18 = (BIO**)OSSL_CMP_exec_certreq(cmp_ctx, uVar13, 0);
                                 uVar5 = ( uint )(ppBVar18 != (BIO**)0x0);
                                 ppBVar26 = cmp_ctx;
                                 LAB_00107d2f:*(undefined8*)( puVar34 + -8 ) = 0x107d37;
                                 iVar29 = OSSL_CMP_CTX_get_status(ppBVar26);
                                 puVar32 = puVar34;
                                 if (iVar29 < 0) {
                                    pcVar42 = *(char**)( puVar34 + 8 );
                                    if (reqout_only_done == 0) goto LAB_001076b6;
                                    *(undefined8*)( puVar34 + -8 ) = 0x109aa0;
                                    ERR_clear_error();
                                    goto LAB_00107f5d;
                                 }

                                 *(undefined8*)( puVar34 + -8 ) = 0x107d4b;
                                 uVar6 = OSSL_CMP_CTX_get_status(cmp_ctx);
                                 pcVar41 = (char*)(ulong)uVar6;
                                 *(undefined8*)( puVar34 + -8 ) = 0x107d5e;
                                 pvVar16 = (void*)app_malloc(0x400, "PKIStatusInfo buf");
                                 *(undefined8*)( puVar34 + -8 ) = 0x107d75;
                                 pcVar17 = (char*)OSSL_CMP_CTX_snprint_PKIStatus(cmp_ctx, pvVar16, 0x400);
                                 pcVar28 = opt_server;
                                 pcVar36 = " from ";
                                 if (opt_server == (char*)0x0) {
                                    pcVar28 = "";
                                    pcVar36 = pcVar28;
                                 }

                                 pcVar42 = "apps/cmp.c";
                                 if (( ( uVar6 != 0 ) && ( pcVar41 = (char*)( ulong )(uVar6 - 2) ),1 < uVar6 - 2 )) {
                                    param_6 = "warning";
                                    if (pcVar17 == (char*)0x0) {
                                       pcVar17 = "<unknown PKIStatus>";
                                    }

                                    param_5 = (char*)0xd32;
                                    *(char**)( puVar34 + -0x10 ) = pcVar17;
                                    *(char**)( puVar34 + -0x18 ) = pcVar28;
                                    *(char**)( puVar34 + -0x20 ) = pcVar36;
                                    *(undefined8*)( puVar34 + -0x28 ) = 0x107de9;
                                    BIO_printf(_bio_err, "%s:%s:%d:CMP %s: received%s%s %s\n", "print_status");
                                 }

                                 *(undefined8*)( puVar34 + -8 ) = 0x107dfd;
                                 CRYPTO_free(pvVar16);
                                 uVar13 = opt_srvcertout;
                                 *(undefined8*)( puVar34 + -8 ) = 0x107e10;
                                 uVar14 = OSSL_CMP_CTX_get0_validatedSrvCert(cmp_ctx);
                                 *(undefined8*)( puVar34 + -8 ) = 0x107e22;
                                 iVar29 = save_cert_or_delete(uVar14, uVar13, "validated server");
                                 enc = opt_extracertsout;
                                 if (( iVar29 != 0 ) && ( uVar5 != 0 )) {
                                    *(undefined8*)( puVar34 + -8 ) = 0x107e46;
                                    uVar13 = OSSL_CMP_CTX_get1_extraCertsIn(cmp_ctx);
                                    *(undefined8*)( puVar34 + -8 ) = 0x107e58;
                                    iVar29 = save_free_certs(uVar13, enc, "extra");
                                    if (iVar29 < 0) goto LAB_00108b5c;
                                    if (( ppBVar18 == (BIO**)0x0 ) || ( 3 < opt_cmd )) goto LAB_00107f33;
                                    *(undefined8*)( puVar34 + -8 ) = 0x107e85;
                                    lVar30 = OSSL_CMP_CTX_get1_newChain(cmp_ctx);
                                    pcVar41 = opt_chainout;
                                    if (( lVar30 == 0 ) || ( ( opt_certout == (char*)0x0 || ( opt_chainout == (char*)0x0 ) ) )) {
                                       LAB_00107eb9:*(undefined8*)( puVar34 + -8 ) = 0x107ecb;
                                       iVar29 = save_free_certs(lVar30, pcVar41, "chain");
                                       if (-1 < iVar29) {
                                          *(undefined8*)( puVar34 + -8 ) = 0x107ee9;
                                          iVar29 = save_cert_or_delete(ppBVar18, opt_certout, "newly enrolled");
                                          if (iVar29 != 0) goto LAB_00107ef1;
                                       }

                                       goto LAB_00108b5c;
                                    }

                                    *(undefined8*)( puVar34 + -8 ) = 0x107eb1;
                                    iVar29 = strcmp(opt_certout, opt_chainout);
                                    if (iVar29 != 0) goto LAB_00107eb9;
                                    *(undefined8*)( puVar34 + -8 ) = 0x108b36;
                                    iVar29 = X509_add_cert(lVar30, ppBVar18, 3);
                                    if (iVar29 == 0) {
                                       pcVar42 = *(char**)( puVar34 + 8 );
                                       *(undefined8*)( puVar34 + -8 ) = 0x109a84;
                                       OPENSSL_sk_pop_free(lVar30, X509_free);
                                       goto LAB_001076b6;
                                    }

                                    *(undefined8*)( puVar34 + -8 ) = 0x108b54;
                                    iVar29 = save_free_certs(lVar30, opt_chainout, "newly enrolled cert and chain");
                                    if (iVar29 == 0) goto LAB_00108b5c;
                                    LAB_00107ef1:enc = opt_cacertsout;
                                    *(undefined8*)( puVar34 + -8 ) = 0x107f04;
                                    uVar13 = OSSL_CMP_CTX_get1_caPubs(cmp_ctx);
                                    *(undefined8*)( puVar34 + -8 ) = 0x107f16;
                                    iVar29 = save_free_certs(uVar13, enc, &_LC257);
                                    if (iVar29 < 0) goto LAB_00108b5c;
                                    if (opt_centralkeygen == 0) {
                                       LAB_00107f33:*(undefined8*)( puVar34 + -8 ) = 0x107f3b;
                                       iVar29 = OSSL_CMP_CTX_reinit(cmp_ctx);
                                       if (iVar29 == 0) goto LAB_00108b5c;
                                       *(int*)( puVar34 + 0x18 ) = *(int*)( puVar34 + 0x18 ) + 1;
                                       uVar13 = extraout_RDX_00;
                                       if (opt_repeat <= *(int*)( puVar34 + 0x18 )) goto code_r0x00107f58;
                                       goto LAB_00107cf2;
                                    }

                                    *(undefined8*)( puVar34 + -8 ) = 0x10856f;
                                    x = (EVP_PKEY*)OSSL_CMP_CTX_get0_newPkey(cmp_ctx, 1);
                                    if (x != (EVP_PKEY*)0x0) {
                                       *(undefined8*)( puVar34 + -8 ) = 0x108591;
                                       pBVar21 = (BIO*)bio_open_owner(opt_newkeyout, 0x8005, 1);
                                       if (pBVar21 == (BIO*)0x0) goto LAB_00108b5c;
                                       pcVar41 = (char*)0x0;
                                       enc = opt_newkeypass;
                                       if (opt_newkeypass != (EVP_CIPHER*)0x0) {
                                          *(undefined8*)( puVar34 + -8 ) = 0x1085ba;
                                          pcVar41 = (char*)get_passwd(opt_newkeypass, "Centrally generated private key password");
                                          *(undefined8*)( puVar34 + -8 ) = 0x1085c2;
                                          uVar13 = app_get0_propq();
                                          *(undefined8*)( puVar34 + -8 ) = 0x1085ca;
                                          uVar14 = app_get0_libctx();
                                          *(undefined8*)( puVar34 + -8 ) = 0x1085dc;
                                          enc = (EVP_CIPHER*)EVP_CIPHER_fetch(uVar14, "AES-256-CBC", uVar13);
                                       }

                                       if (5 < (int)opt_verbosity) {
                                          *(undefined**)( puVar34 + -0x10 ) = &_LC4;
                                          *(undefined**)( puVar34 + -0x18 ) = &_LC4;
                                          *(undefined8*)( puVar34 + -0x20 ) = opt_newkeyout;
                                          *(undefined8*)( puVar34 + -0x28 ) = 0x108ed3;
                                          BIO_printf(_bio_out, "%s:%s:%d:CMP %s: saving centrally generated key to file \'%s\'%s%s\n", "cmp_main");
                                       }

                                       param_6 = (char*)0x0;
                                       *(char**)( puVar34 + -0x10 ) = pcVar41;
                                       param_5 = (char*)0x0;
                                       *(undefined8*)( puVar34 + -0x18 ) = 0x108607;
                                       iVar29 = PEM_write_bio_PrivateKey(pBVar21, x, enc, (uchar*)0x0, 0, (undefined1*)0x0, *(void**)( puVar34 + -0x10 ));
                                       if (0 < iVar29) {
                                          *(undefined8*)( puVar34 + -8 ) = 0x108619;
                                          BIO_free(pBVar21);
                                          *(undefined8*)( puVar34 + -8 ) = 0x108621;
                                          clear_free(pcVar41);
                                          *(undefined8*)( puVar34 + -8 ) = 0x108629;
                                          EVP_CIPHER_free(enc);
                                          goto LAB_00107f33;
                                       }

                                       pcVar42 = *(char**)( puVar34 + 8 );
                                       *(undefined8*)( puVar34 + -8 ) = 0x108e7f;
                                       BIO_free(pBVar21);
                                       *(undefined8*)( puVar34 + -8 ) = 0x108e87;
                                       clear_free(pcVar41);
                                       *(undefined8*)( puVar34 + -8 ) = 0x108e8f;
                                       EVP_CIPHER_free(enc);
                                       goto LAB_001076b6;
                                    }

                                 }

                                 LAB_00108b5c:pcVar42 = *(char**)( puVar34 + 8 );
                                 goto LAB_001076b6;
                              }

                              goto LAB_00107f5d;
                           }

                           puVar32 = auStack_138;
                           if (2 < (int)opt_verbosity) {
                              BIO_printf(_bio_err, "%s:%s:%d:CMP %s: cannot set up CMP context%s%s%s\n", "cmp_main", "apps/cmp.c", 0xec9, "error", &_LC4, &_LC4, &_LC4, uVar27);
                              puVar32 = auStack_138;
                           }

                        }
 else {
                           local_d0 = (BIO*)0x0;
                           local_d8[0] = 0;
                           pBVar21 = (BIO*)http_server_init(prog, opt_port, opt_verbosity);
                           puVar32 = auStack_138;
                           if (pBVar21 != (BIO*)0x0) {
                              local_120 = &local_c0;
                              local_110 = (char*)CONCAT44(local_110._4_4_, 1);
                              iVar29 = 0;
                              local_130 = (BIO**)local_d8;
                              local_128 = &local_d0;
                              do {
                                 uVar13 = prog;
                                 local_c8 = (char*)0x0;
                                 local_c0 = (char*)0x0;
                                 uVar14 = OSSL_CMP_MSG_it();
                                 pBVar39 = pBVar21;
                                 iVar3 = http_server_get_asn1_req(uVar14, local_120, &local_c8, local_128, pBVar21, local_130, uVar13, 0, 0);
                                 pcVar28 = local_c8;
                                 if (iVar3 == 0) {
                                    if ((int)local_110 == 0) goto LAB_001088fc;
                                    OSSL_sleep(1000);
                                    local_110 = (char*)( (ulong)local_110 & 0xffffffff00000000 );
                                    uVar5 = 0;
                                 }
 else {
                                    if (iVar3 == -1) goto LAB_00108cfc;
                                    iVar29 = iVar29 + 1;
                                    if (local_c0 == (char*)0x0) {
                                       LAB_001088fc:uVar5 = 0;
                                       OSSL_CMP_CTX_set1_transactionID(pcVar41, 0);
                                       OSSL_CMP_CTX_set1_senderNonce(pcVar41, 0);
                                    }
 else {
                                       if (( *local_c8 != '\0' ) && ( iVar3 = iVar3 != 0 )) {
                                          http_server_send_status(prog, local_d0, 0x194, "Not Found");
                                          if (2 < (int)opt_verbosity) {
                                             BIO_printf(_bio_err, "%s:%s:%d:CMP %s: expecting empty path or \'pkix/\' but got \'%s\'%s%s\n", "cmp_server", "apps/cmp.c", 0xcb9, "error", local_c8, &_LC4, &_LC4, pBVar39);
                                          }

                                          CRYPTO_free(local_c8);
                                          OSSL_CMP_MSG_free(local_c0);
                                          goto LAB_001088fc;
                                       }

                                       CRYPTO_free(pcVar28);
                                       lVar30 = OSSL_CMP_CTX_server_perform(cmp_ctx, local_c0);
                                       local_118 = lVar30;
                                       OSSL_CMP_MSG_free(local_c0);
                                       if (lVar30 == 0) {
                                          http_server_send_status(prog, local_d0, 500, "Internal Server Error");
                                          LAB_00108cfc:bVar43 = true;
                                          uVar5 = 0;
                                          goto LAB_00108945;
                                       }

                                       uVar13 = OSSL_CMP_MSG_it();
                                       uVar5 = http_server_send_asn1_resp(prog, local_d0, local_d8[0], "application/pkixcmp", uVar13, local_118);
                                       OSSL_CMP_MSG_free(local_118);
                                       if (uVar5 == 0) goto LAB_00108cfc;
                                       if (( local_d8[0] != 0 ) && ( iVar3 = iVar3 == -2 )) goto LAB_00108925;
                                    }

                                    BIO_free_all(local_d0);
                                    local_d0 = (BIO*)0x0;
                                 }

                                 LAB_00108925:;
                              }
 while ( ( iVar29 < opt_max_msgs ) || ( opt_max_msgs < 1 ) );
                              bVar43 = uVar5 == 0;
                              LAB_00108945:BIO_free_all(local_d0);
                              BIO_free_all(pBVar21);
                              puVar31 = auStack_138;
                              goto LAB_001073c0;
                           }

                        }

                     }

                  }
 else {
                     puVar32 = auStack_138;
                     if (2 < (int)opt_verbosity) {
                        BIO_printf(_bio_err, "%s:%s:%d:CMP %s: cannot use both -server and -use_mock_srv options%s%s%s\n", "cmp_main", "apps/cmp.c", 0xe85, "error", &_LC4, &_LC4, &_LC4);
                        puVar32 = auStack_138;
                     }

                  }

               }

               LAB_001076b6:bVar43 = true;
               uVar5 = 0;
               puVar31 = puVar32;
               goto LAB_001073c0;
            }

            if (2 < (int)opt_verbosity) {
               BIO_printf(_bio_err, "%s:%s:%d:CMP %s: cannot load engine %s%s%s\n", "cmp_main", "apps/cmp.c", 0xe5e, "error", opt_engine, &_LC4, &_LC4);
            }

         }

      }

   }

   LAB_001076e4:bVar43 = true;
   uVar5 = 0;
   pcVar42 = (char*)0x0;
   puVar31 = auStack_138;
   goto LAB_001073c0;
   code_r0x00107f58:pcVar42 = *(char**)( puVar34 + 8 );
   LAB_00107f5d:bVar43 = false;
   uVar5 = 1;
   puVar31 = puVar34;
   LAB_001073c0:*(undefined8*)( puVar31 + -8 ) = 0x1073cc;
   cleanse(opt_keypass);
   *(undefined8*)( puVar31 + -8 ) = 0x1073d8;
   cleanse(opt_newkeypass);
   *(undefined8*)( puVar31 + -8 ) = 0x1073e4;
   cleanse(opt_otherpass);
   *(undefined8*)( puVar31 + -8 ) = 0x1073f0;
   cleanse(opt_tls_keypass);
   *(undefined8*)( puVar31 + -8 ) = 0x1073fc;
   cleanse(opt_secret);
   *(undefined8*)( puVar31 + -8 ) = 0x107408;
   cleanse(opt_srv_keypass);
   *(undefined8*)( puVar31 + -8 ) = 0x107414;
   cleanse(opt_srv_secret);
   if (uVar5 != 1) {
      *(undefined8*)( puVar31 + -8 ) = 0x107425;
      OSSL_CMP_CTX_print_errors(cmp_ctx);
   }

   if (cmp_ctx != (BIO**)0x0) {
      *(undefined8*)( puVar31 + -8 ) = 0x107436;
      puVar12 = (undefined8*)OSSL_CMP_CTX_get_http_cb_arg();
      *(undefined8*)( puVar31 + -8 ) = 0x107447;
      OSSL_CMP_CTX_set_http_cb_arg(cmp_ctx, 0);
      *(undefined8*)( puVar31 + -8 ) = 0x107453;
      uVar13 = OSSL_CMP_CTX_get_transfer_cb_arg(cmp_ctx);
      *(undefined8*)( puVar31 + -8 ) = 0x10745b;
      ossl_cmp_mock_srv_free(uVar13);
      *(undefined8*)( puVar31 + -8 ) = 0x107467;
      v = (X509_STORE*)OSSL_CMP_CTX_get_certConf_cb_arg(cmp_ctx);
      *(undefined8*)( puVar31 + -8 ) = 0x10746f;
      X509_STORE_free(v);
      *(undefined8*)( puVar31 + -8 ) = 0x10747b;
      OSSL_CMP_CTX_free(cmp_ctx);
      if (puVar12 != (undefined8*)0x0) {
         pvVar16 = (void*)*puVar12;
         *(undefined8*)( puVar31 + -8 ) = 0x107497;
         CRYPTO_free(pvVar16);
         pvVar16 = (void*)puVar12[1];
         *(undefined8*)( puVar31 + -8 ) = 0x1074a8;
         CRYPTO_free(pvVar16);
         *(undefined8*)( puVar31 + -8 ) = 0x1074b0;
         APP_HTTP_TLS_INFO_free(puVar12);
      }

   }

   *(undefined8*)( puVar31 + -8 ) = 0x1074bc;
   X509_VERIFY_PARAM_free(vpm);
   *(undefined8*)( puVar31 + -8 ) = 0x1074c4;
   release_engine(pcVar42);
   *(undefined8*)( puVar31 + -8 ) = 0x1074d0;
   NCONF_free(conf);
   *(undefined8*)( puVar31 + -8 ) = 0x1074d5;
   OSSL_CMP_log_close();
   if (*(long*)( puVar31 + 0xf8 ) == *(long*)( in_FS_OFFSET + 0x28 )) {
      return bVar43;
   }

   /* WARNING: Subroutine does not return */
   *(undefined8*)( puVar31 + -8 ) = 0x109271;
   __stack_chk_fail();
}

