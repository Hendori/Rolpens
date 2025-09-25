int verify_cb(int param_1, X509_STORE_CTX *param_2) {
   return param_1;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ASN1_INTEGER *next_serial(char *param_1) {
   BIGNUM *pBVar1;
   int iVar2;
   ASN1_INTEGER *a;
   BIO *bp;
   BIGNUM *a_00;
   long in_FS_OFFSET;
   char acStack_428[1032];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   a = ASN1_INTEGER_new();
   if (a == (ASN1_INTEGER*)0x0) {
      bp = (BIO*)0x0;
      pBVar1 = (BIGNUM*)0x0;
   }
 else {
      bp = BIO_new_file(param_1, "r");
      if (bp == (BIO*)0x0) {
         ERR_clear_error();
         a_00 = (BIGNUM*)0x0;
         BIO_printf(_bio_err, "Warning: could not open file %s for reading, using serial number: 1\n", param_1);
         iVar2 = ASN1_INTEGER_set(a, 1);
         pBVar1 = (BIGNUM*)0x0;
         if (iVar2 != 0) goto LAB_001000e1;
      }
 else {
         iVar2 = a2i_ASN1_INTEGER(bp, a, acStack_428, 0x400);
         if (iVar2 == 0) {
            BIO_printf(_bio_err, "unable to load number from %s\n", param_1);
         }
 else {
            a_00 = ASN1_INTEGER_to_BN(a, (BIGNUM*)0x0);
            if (a_00 != (BIGNUM*)0x0) {
               ASN1_INTEGER_free(a);
               iVar2 = BN_add_word(a_00, 1);
               pBVar1 = a_00;
               if (iVar2 == 0) {
                  a = (ASN1_INTEGER*)0x0;
               }
 else {
                  a = BN_to_ASN1_INTEGER(a_00, (ASN1_INTEGER*)0x0);
                  if (a != (ASN1_INTEGER*)0x0) goto LAB_001000e1;
                  a = (ASN1_INTEGER*)0x0;
               }

               goto LAB_0010011d;
            }

         }

         pBVar1 = (BIGNUM*)0x0;
      }

   }

   LAB_0010011d:a_00 = pBVar1;
   ASN1_INTEGER_free(a);
   a = (ASN1_INTEGER*)0x0;
   LAB_001000e1:BIO_free_all(bp);
   BN_free(a_00);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return a;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */uint create_digest_constprop_0(BIO *param_1, undefined8 param_2, EVP_MD *param_3, long *param_4) {
   uint uVar1;
   int iVar2;
   EVP_MD_CTX *ctx;
   long lVar3;
   long in_FS_OFFSET;
   long local_1040;
   undefined1 local_1038[4104];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar1 = EVP_MD_get_size(param_3);
   if ((int)uVar1 < 1) {
      LAB_001002e8:uVar1 = 0;
      goto LAB_00100278;
   }

   if (param_1 == (BIO*)0x0) {
      lVar3 = OPENSSL_hexstr2buf(param_2, &local_1040);
      *param_4 = lVar3;
      if (( lVar3 == 0 ) || ( ctx = (EVP_MD_CTX*)0x0 ),(int)uVar1 != local_1040) {
         ctx = (EVP_MD_CTX*)0x0;
         BIO_printf(_bio_err, "bad digest, %d bytes must be specified\n", (ulong)uVar1);
         goto LAB_00100250;
      }

   }
 else {
      ctx = (EVP_MD_CTX*)EVP_MD_CTX_new();
      if (ctx == (EVP_MD_CTX*)0x0) goto LAB_001002e8;
      lVar3 = app_malloc((long)(int)uVar1, "digest buffer");
      *param_4 = lVar3;
      for (iVar2 = EVP_DigestInit(ctx, param_3); iVar2 != 0; iVar2 = EVP_DigestUpdate(ctx, local_1038, (long)iVar2)) {
         iVar2 = BIO_read(param_1, local_1038, 0x1000);
         if (iVar2 < 1) {
            iVar2 = EVP_DigestFinal(ctx, (uchar*)*param_4, (uint*)0x0);
            if (( iVar2 != 0 ) && ( uVar1 = EVP_MD_get_size(param_3) ),0 < (int)uVar1) goto LAB_00100270;
            break;
         }

      }

      LAB_00100250:uVar1 = 0;
      CRYPTO_free((void*)*param_4);
      *param_4 = 0;
   }

   LAB_00100270:EVP_MD_CTX_free(ctx);
   LAB_00100278:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ASN1_INTEGER *serial_cb(undefined8 param_1, char *param_2) {
   int iVar1;
   ASN1_INTEGER *a;
   BIO *bp;
   a = (ASN1_INTEGER*)next_serial(param_2);
   if (a == (ASN1_INTEGER*)0x0) {
      TS_RESP_CTX_set_status_info(param_1, 2, "Error during serial number generation.");
      TS_RESP_CTX_add_failure_info(param_1, 0x11);
      return (ASN1_INTEGER*)0x0;
   }

   bp = BIO_new_file(param_2, "w");
   if (bp != (BIO*)0x0) {
      iVar1 = i2a_ASN1_INTEGER(bp, a);
      if (0 < iVar1) {
         iVar1 = BIO_puts(bp, "\n");
         if (0 < iVar1) goto LAB_00100357;
      }

   }

   BIO_printf(_bio_err, "could not save serial number to %s\n", param_2);
   LAB_00100357:BIO_free_all(bp);
   return a;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */bool ts_main(undefined4 param_1, undefined8 param_2) {
   undefined *puVar1;
   bool bVar2;
   bool bVar3;
   bool bVar4;
   bool bVar5;
   int iVar6;
   void *pvVar7;
   int iVar8;
   uint uVar9;
   int iVar10;
   X509_VERIFY_PARAM *param;
   undefined8 uVar11;
   CONF *conf;
   char *filename;
   BIO *pBVar12;
   X509_VERIFY_PARAM *pm;
   long lVar13;
   long lVar14;
   undefined8 uVar15;
   X509_STORE *ctx;
   X509_LOOKUP_METHOD *pXVar16;
   X509_LOOKUP *pXVar17;
   long lVar18;
   PKCS7 *pPVar19;
   ASN1_OBJECT *pAVar20;
   ASN1_TYPE *pAVar21;
   ASN1_INTEGER *a;
   uchar *__dest;
   EVP_MD *pEVar22;
   BIO *pBVar23;
   undefined **ppuVar24;
   undefined8 in_R9;
   int iVar25;
   long in_FS_OFFSET;
   bool bVar26;
   ASN1_OBJECT *local_120;
   BIO *local_118;
   BIO *local_110;
   long local_108;
   char *local_100;
   BIO *local_f8;
   undefined8 local_f0;
   long local_e0;
   char *local_d8;
   char *local_d0;
   long local_c8;
   long local_c0;
   long local_b0;
   undefined8 local_a8;
   undefined8 local_a0;
   undefined8 local_98;
   undefined8 local_90;
   undefined8 local_88;
   undefined4 local_7c;
   void *local_70;
   EVP_MD *local_68;
   void *local_60;
   uchar local_58[24];
   long local_40;
   lVar14 = _default_config_file;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_70 = (void*)0x0;
   local_68 = (EVP_MD*)0x0;
   param = X509_VERIFY_PARAM_new();
   if (param != (X509_VERIFY_PARAM*)0x0) {
      iVar25 = 0;
      opt_set_unknown_name("digest");
      uVar11 = opt_init(param_1, param_2, ts_options);
      bVar3 = false;
      iVar10 = -1;
      bVar5 = false;
      bVar2 = false;
      local_7c = 0;
      bVar4 = false;
      local_c8 = 0;
      local_d0 = (char*)0x0;
      local_88 = 0;
      local_90 = 0;
      local_98 = 0;
      local_c0 = 0;
      local_100 = (char*)0x0;
      local_f0 = 0;
      local_110 = (BIO*)0x0;
      local_d8 = (char*)0x0;
      local_108 = 0;
      local_118 = (BIO*)0x0;
      local_f8 = (BIO*)0x0;
      local_a0 = 0;
      local_a8 = 0;
      local_b0 = 0;
      local_e0 = 0;
      switchD_00100556_caseD_0:iVar8 = opt_next();
      do if (0x1b < iVar6) switch (iVar6) {
         default:
        goto switchD_00100556_caseD_0;
         case 1:
        ppuVar24 = &opt_helplist;
        opt_help(ts_options);
        puVar1 = opt_helplist;
        while (puVar1 != (undefined *)0x0) {
          ppuVar24 = ppuVar24 + 1;
          BIO_printf(_bio_err,"%s\n");
          puVar1 = *ppuVar24;
        }
        bVar26 = false;
        conf = (CONF *)0x0;
        goto LAB_00100a71;
         case 2:
        local_a8 = opt_arg();
        goto switchD_00100556_caseD_0;
         case 3:
        lVar14 = opt_arg();
        goto switchD_00100556_caseD_0;
         case 4:
        local_a0 = opt_arg();
        goto switchD_00100556_caseD_0;
         case 5:
         case 0x10:
         case 0x16:
        if (iVar10 != -1) {
          BIO_printf(_bio_err,"%s: Must give only one of -query, -reply, or -verify\n",uVar11);
          goto switchD_00100556_caseD_ffffffff;
        }
        iVar8 = opt_next();
        iVar10 = iVar6;
        break;
         case 6:
        local_118 = (BIO *)opt_arg();
        goto switchD_00100556_caseD_0;
         case 7:
        local_108 = opt_arg();
        goto switchD_00100556_caseD_0;
         case 8:
        local_d8 = (char *)opt_arg();
        goto switchD_00100556_caseD_0;
         case 9:
        bVar4 = true;
        goto switchD_00100556_caseD_0;
         case 10:
        local_7c = 1;
        goto switchD_00100556_caseD_0;
         case 0xb:
        local_110 = (BIO *)opt_arg();
        goto switchD_00100556_caseD_0;
         case 0xc:
        bVar5 = true;
        goto switchD_00100556_caseD_0;
         case 0xd:
        local_f0 = opt_arg();
        goto switchD_00100556_caseD_0;
         case 0xe:
        bVar3 = true;
        goto switchD_00100556_caseD_0;
         case 0xf:
        bVar2 = true;
        goto switchD_00100556_caseD_0;
         case 0x11:
        local_100 = (char *)opt_arg();
        goto switchD_00100556_caseD_0;
         case 0x12:
        local_c0 = opt_arg();
        goto switchD_00100556_caseD_0;
         case 0x13:
        local_98 = opt_arg();
        goto switchD_00100556_caseD_0;
         case 0x14:
        local_90 = opt_arg();
        goto switchD_00100556_caseD_0;
         case 0x15:
        local_88 = opt_arg();
        goto switchD_00100556_caseD_0;
         case 0x17:
        local_d0 = (char *)opt_arg();
        goto switchD_00100556_caseD_0;
         case 0x18:
        local_e0 = opt_arg();
        goto switchD_00100556_caseD_0;
         case 0x19:
        local_c8 = opt_arg();
        goto switchD_00100556_caseD_0;
         case 0x1a:
        local_b0 = opt_arg();
        goto switchD_00100556_caseD_0;
         case 0x1b:
        local_f8 = (BIO *)opt_unknown();
        goto switchD_00100556_caseD_0;
         case -1:
        goto switchD_00100556_caseD_ffffffff;
      }
 while ( true );
   }

   bVar26 = true;
   conf = (CONF*)0x0;
   goto LAB_00100a71;
   while (lVar14 = lVar14 + 1,lVar14 != 8) {
      LAB_00101479:if (local_58[lVar14] != '\0') {
         local_108._0_4_ = (int)lVar14;
         goto LAB_0010148c;
      }

   }
;
   local_108._0_4_ = 8;
   LAB_0010148c:a = ASN1_INTEGER_new();
   if (a == (ASN1_INTEGER*)0x0) {
      LAB_001016bc:a = (ASN1_INTEGER*)0x0;
      BIO_printf(_bio_err, "could not create nonce\n");
      ASN1_INTEGER_free((ASN1_INTEGER*)0x0);
      LAB_00101670:lVar14 = 0;
      TS_REQ_free(lVar13);
      BIO_printf(_bio_err, "could not create query\n");
      ERR_print_errors(_bio_err);
   }
 else {
      CRYPTO_free(a.data);
      a.length = 8 - (int)local_108;
      __dest = (uchar*)app_malloc((long)( 9 - (int)local_108 ), "nonce buffer");
      a.data = __dest;
      memcpy(__dest, local_58 + (int)local_108, (long)a.length);
      iVar10 = TS_REQ_set_nonce(lVar13, a);
      if (iVar10 == 0) goto LAB_00101670;
      LAB_0010150a:iVar10 = TS_REQ_set_cert_req(lVar13, local_7c);
      lVar14 = lVar13;
      if (iVar10 == 0) goto LAB_00101670;
   }

   TS_MSG_IMPRINT_free(local_100);
   X509_ALGOR_free((X509_ALGOR*)local_118);
   CRYPTO_free(local_60);
   ASN1_OBJECT_free(local_120);
   ASN1_INTEGER_free(a);
   LAB_00100d3b:if (lVar14 == 0) {
      pBVar12 = (BIO*)0x0;
   }
 else if (bVar2) {
      pBVar12 = (BIO*)bio_open_default(local_f0, 0x77, 0x8001);
      if (pBVar12 != (BIO*)0x0) {
         iVar10 = TS_REQ_print_bio(pBVar12, lVar14);
         bVar26 = iVar10 != 0;
      }

   }
 else {
      pBVar12 = (BIO*)bio_open_default(local_f0, 0x77, 4);
      if (pBVar12 == (BIO*)0x0) {
         bVar26 = false;
      }
 else {
         iVar10 = i2d_TS_REQ_bio(pBVar12, lVar14);
         bVar26 = iVar10 != 0;
      }

   }

   LAB_00100d82:bVar26 = (bool)( bVar26 ^ 1 );
   ERR_print_errors(_bio_err);
   BIO_free_all(local_110);
   BIO_free_all(local_f8);
   BIO_free_all(pBVar12);
   TS_REQ_free(lVar14);
   LAB_00100a71:X509_VERIFY_PARAM_free(param);
   EVP_MD_free(local_68);
   NCONF_free(conf);
   CRYPTO_free(local_70);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return bVar26;
}

