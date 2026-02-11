
undefined8 dummy_psk(void)

{
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int ciphers_main(undefined4 param_1,undefined8 param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  byte bVar20;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  SSL_CTX *ctx;
  long lVar15;
  SSL *s;
  stack_st_SSL_CIPHER *psVar16;
  char *pcVar17;
  SSL_CIPHER *pSVar18;
  ulong uVar19;
  char *extraout_RDX;
  long larg;
  long in_FS_OFFSET;
  long local_260;
  char local_248 [520];
  long local_40;
  
  larg = 0;
  bVar1 = false;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar11 = TLS_server_method();
  lVar15 = 0;
  uVar12 = opt_init(param_1,param_2,ciphers_options);
  bVar3 = false;
  local_260 = 0;
  bVar2 = false;
  bVar4 = false;
  bVar5 = false;
  bVar6 = false;
switchD_001000c6_caseD_0:
  do {
    iVar8 = opt_next();
    bVar7 = bVar6;
    if (iVar8 == 0) {
LAB_001000f0:
      puVar13 = (undefined8 *)opt_rest();
      iVar9 = opt_num_rest();
      if (iVar9 == 1) {
        pcVar17 = (char *)*puVar13;
      }
      else {
        iVar9 = opt_check_rest_arg(0);
        if (iVar9 == 0) goto switchD_001000c6_caseD_ffffffff;
        pcVar17 = (char *)0x0;
      }
      if (lVar15 != 0) {
        psVar16 = (stack_st_SSL_CIPHER *)0x0;
        s = (SSL *)0x0;
        ctx = (SSL_CTX *)0x0;
        uVar11 = OPENSSL_cipher_name(lVar15);
        BIO_printf(_bio_out,"OpenSSL cipher name: %s\n",uVar11);
        goto joined_r0x00100246;
      }
      uVar12 = app_get0_propq();
      uVar14 = app_get0_libctx();
      ctx = (SSL_CTX *)SSL_CTX_new_ex(uVar14,uVar12,uVar11);
      if (((ctx != (SSL_CTX *)0x0) &&
          (lVar15 = SSL_CTX_ctrl(ctx,0x7b,larg,(void *)0x0), lVar15 != 0)) &&
         (lVar15 = SSL_CTX_ctrl(ctx,0x7c,larg,(void *)0x0), lVar15 != 0)) {
        if (bVar2) {
          SSL_CTX_set_psk_client_callback(ctx,dummy_psk);
        }
        if (bVar3) {
          set_up_dummy_srp(ctx);
        }
        if ((local_260 == 0) || (iVar9 = SSL_CTX_set_ciphersuites(ctx,local_260), iVar9 != 0)) {
          if ((pcVar17 == (char *)0x0) || (iVar9 = SSL_CTX_set_cipher_list(ctx,pcVar17), iVar9 != 0)
             ) {
            s = SSL_new(ctx);
            if (s != (SSL *)0x0) {
              if (bVar1) {
                psVar16 = (stack_st_SSL_CIPHER *)SSL_get1_supported_ciphers();
              }
              else {
                psVar16 = SSL_get_ciphers(s);
              }
              iVar9 = 0;
              if (bVar6) {
                for (; iVar10 = OPENSSL_sk_num(psVar16), iVar9 < iVar10; iVar9 = iVar9 + 1) {
                  pSVar18 = (SSL_CIPHER *)OPENSSL_sk_value(psVar16,iVar9);
                  if (pSVar18 != (SSL_CIPHER *)0x0) {
                    if (bVar5) {
                      uVar19 = SSL_CIPHER_get_id(pSVar18);
                      bVar20 = (byte)(uVar19 >> 8);
                      if (((uint)uVar19 & 0xff000000) == 0x3000000) {
                        BIO_printf(_bio_out,"          0x%02X,0x%02X - ",(ulong)bVar20,uVar19 & 0xff
                                  );
                      }
                      else {
                        BIO_printf(_bio_out,"0x%02X,0x%02X,0x%02X,0x%02X - ",
                                   (uVar19 & 0xffffffff) >> 0x18,
                                   (uVar19 & 0xffffffff) >> 0x10 & 0xff,(ulong)bVar20);
                      }
                    }
                    if (bVar4) {
                      pcVar17 = (char *)SSL_CIPHER_standard_name(pSVar18);
                      if (pcVar17 == (char *)0x0) {
                        pcVar17 = "UNKNOWN";
                      }
                      BIO_printf(_bio_out,"%-45s - ",pcVar17);
                    }
                    pcVar17 = SSL_CIPHER_description(pSVar18,local_248,0x200);
                    BIO_puts(_bio_out,pcVar17);
                  }
                }
                goto joined_r0x00100246;
              }
              break;
            }
          }
          else {
            BIO_printf(_bio_err,"Error in cipher list\n");
          }
        }
        else {
          BIO_printf(_bio_err,"Error setting TLSv1.3 ciphersuites\n");
        }
      }
      psVar16 = (stack_st_SSL_CIPHER *)0x0;
      iVar8 = 1;
      ERR_print_errors(_bio_err);
      s = (SSL *)0x0;
      goto joined_r0x00100246;
    }
    while (bVar6 = bVar7, iVar8 < 0xf) {
      if (iVar8 < -1) goto switchD_001000c6_caseD_0;
      switch(iVar8) {
      default:
        goto switchD_001000c6_caseD_0;
      case 1:
        iVar8 = 0;
        psVar16 = (stack_st_SSL_CIPHER *)0x0;
        s = (SSL *)0x0;
        opt_help(ciphers_options);
        ctx = (SSL_CTX *)0x0;
        goto joined_r0x00100246;
      case 2:
        bVar4 = true;
      case 0xc:
        bVar6 = true;
        iVar8 = opt_next();
        bVar7 = true;
        if (iVar8 == 0) {
          iVar8 = 0;
          goto LAB_001000f0;
        }
        break;
      case 3:
        lVar15 = opt_arg();
        goto switchD_001000c6_caseD_0;
      case 4:
        larg = 0x300;
        goto switchD_001000c6_caseD_0;
      case 5:
        larg = 0x301;
        goto switchD_001000c6_caseD_0;
      case 6:
        larg = 0x302;
        goto switchD_001000c6_caseD_0;
      case 7:
        larg = 0x303;
        goto switchD_001000c6_caseD_0;
      case 8:
        larg = 0x304;
        goto switchD_001000c6_caseD_0;
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
        bVar5 = true;
        bVar6 = true;
        goto switchD_001000c6_caseD_0;
      case 0xe:
        bVar1 = true;
        goto switchD_001000c6_caseD_0;
      case -1:
        goto switchD_001000c6_caseD_ffffffff;
      }
    }
    if ((iVar8 - 0x641U < 4) && (iVar8 = opt_provider(iVar8), iVar8 == 0)) {
      iVar8 = 1;
      psVar16 = (stack_st_SSL_CIPHER *)0x0;
      s = (SSL *)0x0;
      ctx = (SSL_CTX *)0x0;
      goto joined_r0x00100246;
    }
  } while( true );
LAB_001004bb:
  iVar8 = OPENSSL_sk_num(psVar16);
  pcVar17 = extraout_RDX;
  if (iVar8 <= iVar9) goto LAB_00100551;
  pSVar18 = (SSL_CIPHER *)OPENSSL_sk_value(psVar16,iVar9);
  if (pSVar18 != (SSL_CIPHER *)0x0) {
    pcVar17 = SSL_CIPHER_get_name(pSVar18);
    if (pcVar17 == (char *)0x0) goto LAB_00100551;
    if (iVar9 != 0) {
      BIO_printf(_bio_out,":",pcVar17);
    }
    BIO_printf(_bio_out,"%s",pcVar17);
  }
  iVar9 = iVar9 + 1;
  goto LAB_001004bb;
LAB_00100551:
  iVar8 = 0;
  BIO_printf(_bio_out,"\n",pcVar17);
  goto joined_r0x00100246;
switchD_001000c6_caseD_ffffffff:
  s = (SSL *)0x0;
  iVar8 = 1;
  psVar16 = (stack_st_SSL_CIPHER *)0x0;
  ctx = (SSL_CTX *)0x0;
  BIO_printf(_bio_err,"%s: Use -help for summary.\n",uVar12);
joined_r0x00100246:
  if (bVar1) {
    OPENSSL_sk_free(psVar16);
  }
  SSL_CTX_free(ctx);
  SSL_free(s);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar8;
}


