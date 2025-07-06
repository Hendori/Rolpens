/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */undefined8 dsa_main(undefined4 param_1, undefined8 param_2) {
   bool bVar1;
   bool bVar2;
   int iVar3;
   undefined8 uVar4;
   EVP_PKEY *pkey;
   BIO *out;
   undefined8 uVar5;
   size_t sVar6;
   undefined8 uVar7;
   char *pcVar8;
   uint uVar9;
   char *pcVar10;
   undefined8 uVar11;
   long in_FS_OFFSET;
   bool bVar12;
   undefined8 local_128;
   undefined8 local_120;
   undefined8 local_118;
   char *local_110;
   uint local_108;
   uint local_fc;
   undefined1 local_f8[32];
   undefined8 local_d8;
   undefined4 local_c4;
   int local_c0;
   int local_bc;
   long local_b8;
   void *local_b0;
   char *local_a8;
   BIGNUM *local_a0;
   undefined1 local_98[16];
   undefined1 local_88[16];
   undefined1 local_78[16];
   undefined1 local_68[16];
   undefined1 local_58[16];
   long local_40;
   bVar12 = false;
   uVar5 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_c4 = 0;
   local_b8 = 0;
   local_b0 = (void*)0x0;
   local_a8 = (char*)0x0;
   local_c0 = 0x8005;
   local_bc = 2;
   opt_set_unknown_name("cipher");
   uVar4 = opt_init(param_1, param_2, dsa_options);
   local_108 = 0;
   uVar7 = 0;
   bVar1 = false;
   bVar2 = false;
   local_fc = 0;
   local_120 = 0;
   local_128 = 0;
   local_110 = (char*)0x0;
   local_118 = 0;
   switchD_00100112_caseD_0:iVar3 = opt_next();
   joined_r0x001000ef:if (iVar3 == 0) {
      uVar11 = 0;
      iVar3 = opt_check_rest_arg(0);
      if (iVar3 != 0) {
         iVar3 = opt_cipher(uVar5, &local_b8);
         if (iVar3 == 0) goto LAB_0010020e;
         if (!bVar12) {
            iVar3 = app_passwd(local_128, local_120, &local_b0, &local_a8);
            if (iVar3 != 0) {
               uVar9 = local_fc | local_108 ^ 1;
               BIO_printf(_bio_err, "read DSA key\n");
               pkey = (EVP_PKEY*)load_key(local_118, local_c4, 1, local_b0, uVar7, "private key");
               goto LAB_001002da;
            }
            LAB_0010066b:uVar4 = 0;
            pkey = (EVP_PKEY*)0x0;
            out = (BIO*)0x0;
            BIO_printf(_bio_err, "Error getting passwords\n");
            goto LAB_00100500;
         }
         iVar3 = app_passwd(local_128, local_120, &local_b0, &local_a8);
         if (iVar3 == 0) goto LAB_0010066b;
         uVar9 = 0;
         BIO_printf(_bio_err, "read DSA key\n");
         pkey = (EVP_PKEY*)load_pubkey(local_118, local_c4, 1, local_b0, uVar7, "public key");
         LAB_001002da:if (pkey == (EVP_PKEY*)0x0) {
            BIO_printf(_bio_err, "unable to load Key\n");
            ERR_print_errors(_bio_err);
            goto LAB_0010020e;
         }
         iVar3 = EVP_PKEY_is_a(pkey, &_LC10);
         if (iVar3 == 0) {
            BIO_printf(_bio_err, "Not a DSA key\n");
         } else {
            out = (BIO*)bio_open_owner(local_110, local_c0, uVar9);
            if (out != (BIO*)0x0) {
               if (local_fc != 0) {
                  if (bVar12) {
                     iVar3 = EVP_PKEY_print_public(out, pkey, 0, (ASN1_PCTX*)0x0);
                     if (iVar3 < 1) {
                        uVar4 = dsa_main_cold();
                        return uVar4;
                     }
                     goto LAB_0010033f;
                  }
                  iVar3 = EVP_PKEY_print_private(out, pkey, 0, (ASN1_PCTX*)0x0);
                  if (0 < iVar3) goto LAB_0010033f;
                  perror(local_110);
                  ERR_print_errors(_bio_err);
                  goto LAB_001007b1;
               }
               LAB_0010033f:if (bVar1) {
                  local_a0 = (BIGNUM*)0x0;
                  iVar3 = EVP_PKEY_get_bn_param(pkey, &_LC12, &local_a0);
                  if (iVar3 == 0) {
                     ERR_print_errors(_bio_err);
                     goto LAB_001007b1;
                  }
                  BIO_printf(out, "Public Key=");
                  BN_print(out, local_a0);
                  BIO_printf(out, "\n");
                  BN_free(local_a0);
               }
               uVar4 = 0;
               if (bVar2) goto LAB_0010015d;
               BIO_printf(_bio_err, "writing DSA key\n");
               if (local_c0 == 4) {
                  pcVar10 = "DER";
                  LAB_0010075f:pcVar8 = "SubjectPublicKeyInfo";
                  if (!bVar12 && local_108 == 0) {
                     pcVar8 = "type-specific";
                  }
                  bVar12 = !bVar12 && local_108 == 0;
               } else {
                  if (local_c0 == 0x8005) {
                     pcVar10 = "PEM";
                     goto LAB_0010075f;
                  }
                  if (local_c0 != 0xb) {
                     if (local_c0 == 0xc) {
                        pcVar10 = "PVK";
                        if (!bVar12) goto LAB_001003a9;
                        BIO_printf(_bio_err, "PVK form impossible with public key input\n");
                     } else {
                        BIO_printf(_bio_err, "bad output format specified for outfile\n");
                     }
                     LAB_001007b1:uVar4 = 0;
                     goto LAB_00100500;
                  }
                  pcVar10 = "MSBLOB";
                  LAB_001003a9:pcVar8 = (char*)0x0;
                  bVar12 = !bVar12 && local_108 == 0;
               }
               uVar4 = OSSL_ENCODER_CTX_new_for_pkey(pkey, ( -(uint)bVar12 & 0x85 ) + 2, pcVar10, pcVar8, 0);
               iVar3 = OSSL_ENCODER_CTX_get_num_encoders(uVar4);
               if (iVar3 == 0) {
                  BIO_printf(_bio_err, "%s format not supported\n", pcVar10);
                  goto LAB_00100500;
               }
               if (local_b8 == 0) {
                  LAB_0010078c:if (local_c0 == 0xc) goto LAB_00100414;
               } else {
                  uVar5 = EVP_CIPHER_get0_name();
                  OSSL_ENCODER_CTX_set_cipher(uVar4, uVar5, 0);
                  if (local_b8 == 0) goto LAB_0010078c;
                  LAB_00100414:uVar5 = get_ui_method();
                  OSSL_ENCODER_CTX_set_passphrase_ui(uVar4, uVar5, 0);
                  pcVar10 = local_a8;
                  if (local_a8 != (char*)0x0) {
                     sVar6 = strlen(local_a8);
                     OSSL_ENCODER_CTX_set_passphrase(uVar4, pcVar10, sVar6);
                  }
                  if (local_c0 == 0xc) {
                     local_98 = (undefined1[16])0x0;
                     local_88 = (undefined1[16])0x0;
                     local_78 = (undefined1[16])0x0;
                     local_68 = (undefined1[16])0x0;
                     local_58 = (undefined1[16])0x0;
                     OSSL_PARAM_construct_int(local_f8, "encrypt-level", &local_bc);
                     local_78._0_8_ = local_d8;
                     iVar3 = OSSL_ENCODER_CTX_set_params(uVar4, local_98);
                     if (iVar3 == 0) {
                        BIO_printf(_bio_err, "invalid PVK encryption level\n");
                        goto LAB_00100500;
                     }
                  }
               }
               uVar11 = 0;
               iVar3 = OSSL_ENCODER_to_bio(uVar4, out);
               if (iVar3 != 0) goto LAB_0010015d;
               BIO_printf(_bio_err, "unable to write key\n");
               goto LAB_00100500;
            }
         }
         uVar4 = 0;
         out = (BIO*)0x0;
         goto LAB_00100500;
      }
   } else {
      if (0x11 < iVar3) {
         if (( iVar3 - 0x641U < 4 ) && ( iVar3 = iVar3 == 0 )) {
            LAB_0010020e:uVar4 = 0;
            pkey = (EVP_PKEY*)0x0;
            out = (BIO*)0x0;
            LAB_00100500:uVar11 = 1;
            ERR_print_errors(_bio_err);
            goto LAB_0010015d;
         }
         goto switchD_00100112_caseD_0;
      }
      if (iVar3 < -1) goto switchD_00100112_caseD_0;
      switch (iVar3) {
         default:
      goto switchD_00100112_caseD_0;
         case 1:
      opt_help(dsa_options);
      goto LAB_00100152;
         case 2:
      uVar11 = opt_arg();
      iVar3 = opt_format(uVar11,0xffe,&local_c4);
      break;
         case 3:
      uVar11 = opt_arg();
      iVar3 = opt_format(uVar11,0xffe,&local_c0);
      break;
         case 4:
      local_118 = opt_arg();
      goto switchD_00100112_caseD_0;
         case 5:
      local_110 = (char *)opt_arg();
      goto switchD_00100112_caseD_0;
         case 6:
      uVar7 = opt_arg();
      uVar7 = setup_engine_methods(uVar7,0xffffffff,0);
      goto switchD_00100112_caseD_0;
         case 7:
         case 8:
         case 9:
      goto switchD_00100112_caseD_7;
         case 10:
      bVar2 = true;
      goto switchD_00100112_caseD_0;
         case 0xb:
      local_fc = 1;
      goto switchD_00100112_caseD_0;
         case 0xc:
      bVar1 = true;
      goto switchD_00100112_caseD_0;
         case 0xd:
      bVar12 = true;
      goto switchD_00100112_caseD_0;
         case 0xe:
      local_108 = 1;
      goto switchD_00100112_caseD_0;
         case 0xf:
      uVar5 = opt_unknown();
      goto switchD_00100112_caseD_0;
         case 0x10:
      local_128 = opt_arg();
      goto switchD_00100112_caseD_0;
         case 0x11:
      local_120 = opt_arg();
      goto switchD_00100112_caseD_0;
         case -1:
      goto switchD_00100112_caseD_ffffffff;
      }
      if (iVar3 != 0) goto switchD_00100112_caseD_0;
   }
   switchD_00100112_caseD_ffffffff:BIO_printf(_bio_err, "%s: Use -help for summary.\n", uVar4);
   LAB_00100152:uVar4 = 0;
   uVar11 = 0;
   pkey = (EVP_PKEY*)0x0;
   out = (BIO*)0x0;
   LAB_0010015d:OSSL_ENCODER_CTX_free(uVar4);
   BIO_free_all(out);
   EVP_PKEY_free(pkey);
   EVP_CIPHER_free(local_b8);
   release_engine(uVar7);
   CRYPTO_free(local_b0);
   CRYPTO_free(local_a8);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return uVar11;
   switchD_00100112_caseD_7:local_bc = iVar3 + -7;
   iVar3 = opt_next();
   goto joined_r0x001000ef;
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */undefined8 dsa_main_cold(void) {
   EVP_PKEY *unaff_RBX;
   BIO *unaff_R12;
   long in_FS_OFFSET;
   char *in_stack_00000028;
   undefined8 in_stack_00000080;
   void *in_stack_00000088;
   void *in_stack_00000090;
   long in_stack_000000f8;
   perror(in_stack_00000028);
   for (int i_901 = 0; i_901 < 2; i_901++) {
      ERR_print_errors(_bio_err);
   }
   OSSL_ENCODER_CTX_free(0);
   BIO_free_all(unaff_R12);
   EVP_PKEY_free(unaff_RBX);
   EVP_CIPHER_free(in_stack_00000080);
   release_engine();
   CRYPTO_free(in_stack_00000088);
   CRYPTO_free(in_stack_00000090);
   if (in_stack_000000f8 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
