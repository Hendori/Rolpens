undefined8 dummy_psk(void) {
   return 0;
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */int ciphers_main(undefined4 param_1, undefined8 param_2) {
   bool bVar1;
   bool bVar2;
   bool bVar3;
   bool bVar4;
   bool bVar5;
   bool bVar6;
   int iVar7;
   int iVar8;
   int iVar9;
   byte bVar19;
   undefined8 uVar10;
   undefined8 uVar11;
   undefined8 *puVar12;
   undefined8 uVar13;
   SSL_CTX *ctx;
   long lVar14;
   SSL *s;
   stack_st_SSL_CIPHER *psVar15;
   SSL_CIPHER *pSVar16;
   char *pcVar17;
   ulong uVar18;
   char *extraout_RDX;
   long larg;
   long in_FS_OFFSET;
   int local_268;
   long local_260;
   char local_248[520];
   long local_40;
   larg = 0;
   bVar1 = false;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar10 = TLS_server_method();
   lVar14 = 0;
   uVar11 = opt_init(param_1, param_2, ciphers_options);
   bVar3 = false;
   local_260 = 0;
   bVar2 = false;
   local_268 = 0;
   bVar4 = false;
   bVar5 = false;
   switchD_001000c6_caseD_0:do {
      iVar7 = opt_next();
      bVar6 = bVar5;
      if (iVar7 == 0) {
         LAB_001000f0:puVar12 = (undefined8*)opt_rest();
         iVar8 = opt_num_rest();
         if (iVar8 == 1) {
            pcVar17 = (char*)*puVar12;
         } else {
            iVar8 = opt_check_rest_arg(0);
            if (iVar8 == 0) goto switchD_001000c6_caseD_ffffffff;
            pcVar17 = (char*)0x0;
         }
         if (lVar14 != 0) {
            psVar15 = (stack_st_SSL_CIPHER*)0x0;
            s = (SSL*)0x0;
            ctx = (SSL_CTX*)0x0;
            uVar10 = OPENSSL_cipher_name(lVar14);
            BIO_printf(_bio_out, "OpenSSL cipher name: %s\n", uVar10);
            goto joined_r0x0010026e;
         }
         uVar11 = app_get0_propq();
         uVar13 = app_get0_libctx();
         ctx = (SSL_CTX*)SSL_CTX_new_ex(uVar13, uVar11, uVar10);
         if (( ( ctx != (SSL_CTX*)0x0 ) && ( lVar14 = SSL_CTX_ctrl(ctx, 0x7b, larg, (void*)0x0) ),lVar14 != 0 )) {
            if (bVar2) {
               SSL_CTX_set_psk_client_callback(ctx, dummy_psk);
            }
            if (bVar3) {
               set_up_dummy_srp(ctx);
            }
            if (( local_260 == 0 ) || ( iVar8 = iVar8 != 0 )) {
               if (( pcVar17 == (char*)0x0 ) || ( iVar8 = iVar8 != 0 )) {
                  s = SSL_new(ctx);
                  if (s != (SSL*)0x0) {
                     if (bVar1) {
                        psVar15 = (stack_st_SSL_CIPHER*)SSL_get1_supported_ciphers();
                     } else {
                        psVar15 = SSL_get_ciphers(s);
                     }
                     if (bVar5) {
                        if (local_268 == 0) {
                           if (bVar4) {
                              for (; iVar8 = OPENSSL_sk_num(psVar15),local_268 < iVar8; local_268 = local_268 + 1) {
                                 pSVar16 = (SSL_CIPHER*)OPENSSL_sk_value(psVar15);
                                 if (pSVar16 != (SSL_CIPHER*)0x0) {
                                    uVar18 = SSL_CIPHER_get_id(pSVar16);
                                    bVar19 = ( byte )(uVar18 >> 8);
                                    if (( (uint)uVar18 & 0xff000000 ) == 0x3000000) {
                                       BIO_printf(_bio_out, "          0x%02X,0x%02X - ", (ulong)bVar19, uVar18 & 0xff);
                                    } else {
                                       BIO_printf(_bio_out, "0x%02X,0x%02X,0x%02X,0x%02X - ", ( uVar18 & 0xffffffff ) >> 0x18, ( uVar18 & 0xffffffff ) >> 0x10 & 0xff, (ulong)bVar19);
                                    }
                                    pcVar17 = SSL_CIPHER_description(pSVar16, local_248, 0x200);
                                    BIO_puts(_bio_out, pcVar17);
                                 }
                              }
                           } else {
                              for (iVar8 = 0; iVar9 = OPENSSL_sk_num(psVar15),iVar8 < iVar9; iVar8 = iVar8 + 1) {
                                 pSVar16 = (SSL_CIPHER*)OPENSSL_sk_value(psVar15, iVar8);
                                 if (pSVar16 != (SSL_CIPHER*)0x0) {
                                    pcVar17 = SSL_CIPHER_description(pSVar16, local_248, 0x200);
                                    BIO_puts(_bio_out, pcVar17);
                                 }
                              }
                           }
                        } else {
                           for (iVar8 = 0; iVar9 = OPENSSL_sk_num(psVar15),iVar8 < iVar9; iVar8 = iVar8 + 1) {
                              pSVar16 = (SSL_CIPHER*)OPENSSL_sk_value(psVar15, iVar8);
                              if (pSVar16 != (SSL_CIPHER*)0x0) {
                                 if (bVar4) {
                                    uVar18 = SSL_CIPHER_get_id(pSVar16);
                                    bVar19 = ( byte )(uVar18 >> 8);
                                    if (( (uint)uVar18 & 0xff000000 ) == 0x3000000) {
                                       BIO_printf(_bio_out, "          0x%02X,0x%02X - ", (ulong)bVar19, uVar18 & 0xff);
                                    } else {
                                       BIO_printf(_bio_out, "0x%02X,0x%02X,0x%02X,0x%02X - ", ( uVar18 & 0xffffffff ) >> 0x18, ( uVar18 & 0xffffffff ) >> 0x10 & 0xff, (ulong)bVar19);
                                    }
                                 }
                                 pcVar17 = (char*)SSL_CIPHER_standard_name(pSVar16);
                                 if (pcVar17 == (char*)0x0) {
                                    pcVar17 = "UNKNOWN";
                                 }
                                 BIO_printf(_bio_out, "%-45s - ", pcVar17);
                                 pcVar17 = SSL_CIPHER_description(pSVar16, local_248, 0x200);
                                 BIO_puts(_bio_out, pcVar17);
                              }
                           }
                        }
                        goto joined_r0x0010026e;
                     }
                     iVar7 = 0;
                     break;
                  }
               } else {
                  BIO_printf(_bio_err, "Error in cipher list\n");
               }
            } else {
               BIO_printf(_bio_err, "Error setting TLSv1.3 ciphersuites\n");
            }
         }
         psVar15 = (stack_st_SSL_CIPHER*)0x0;
         iVar7 = 1;
         ERR_print_errors(_bio_err);
         s = (SSL*)0x0;
         goto joined_r0x0010026e;
      }
      while (bVar5 = bVar6,iVar7 < 0xf) {
         if (iVar7 < -1) goto switchD_001000c6_caseD_0;
         switch (iVar7) {
            default:
        goto switchD_001000c6_caseD_0;
            case 1:
        iVar7 = 0;
        psVar15 = (stack_st_SSL_CIPHER *)0x0;
        s = (SSL *)0x0;
        opt_help(ciphers_options);
        ctx = (SSL_CTX *)0x0;
        goto joined_r0x0010026e;
            case 2:
        local_268 = 1;
        bVar5 = true;
        goto switchD_001000c6_caseD_0;
            case 3:
        lVar14 = opt_arg();
        goto switchD_001000c6_caseD_0;
            for (int i_436 = 0; i_436 < 5; i_436++) {
               case 4:
        larg = 0x300;
        goto switchD_001000c6_caseD_0;
            }
            case 9:
        bVar2 = true;
        goto switchD_001000c6_caseD_0;
            case 10:
        bVar3 = true;
        goto switchD_001000c6_caseD_0;
            case 0xb:
        local_260 = opt_arg();
        goto switchD_001000c6_caseD_0;
            case 0xd:
        bVar4 = true;
            case 0xc:
        bVar5 = true;
        iVar7 = opt_next();
        bVar6 = true;
        if (iVar7 == 0) {
          iVar7 = 0;
          goto LAB_001000f0;
        }
        break;
            case 0xe:
        bVar1 = true;
        goto switchD_001000c6_caseD_0;
            case -1:
        goto switchD_001000c6_caseD_ffffffff;
         }
      };
      if (( iVar7 - 0x641U < 4 ) && ( iVar7 = iVar7 == 0 )) {
         iVar7 = 1;
         psVar15 = (stack_st_SSL_CIPHER*)0x0;
         s = (SSL*)0x0;
         ctx = (SSL_CTX*)0x0;
         goto joined_r0x0010026e;
      }
   } while ( true );
   LAB_0010051a:iVar8 = OPENSSL_sk_num(psVar15);
   pcVar17 = extraout_RDX;
   if (iVar8 <= iVar7) goto LAB_00100564;
   pSVar16 = (SSL_CIPHER*)OPENSSL_sk_value(psVar15, iVar7);
   if (pSVar16 != (SSL_CIPHER*)0x0) {
      pcVar17 = SSL_CIPHER_get_name(pSVar16);
      if (pcVar17 == (char*)0x0) goto LAB_00100564;
      if (iVar7 != 0) {
         BIO_printf(_bio_out, ":", pcVar17);
      }
      BIO_printf(_bio_out, "%s", pcVar17);
   }
   iVar7 = iVar7 + 1;
   goto LAB_0010051a;
   LAB_00100564:iVar7 = 0;
   BIO_printf(_bio_out, "\n", pcVar17);
   goto joined_r0x0010026e;
   switchD_001000c6_caseD_ffffffff:s = (SSL*)0x0;
   iVar7 = 1;
   psVar15 = (stack_st_SSL_CIPHER*)0x0;
   ctx = (SSL_CTX*)0x0;
   BIO_printf(_bio_err, "%s: Use -help for summary.\n", uVar11);
   joined_r0x0010026e:if (bVar1) {
      OPENSSL_sk_free(psVar15);
   }
   SSL_CTX_free(ctx);
   SSL_free(s);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return iVar7;
}
