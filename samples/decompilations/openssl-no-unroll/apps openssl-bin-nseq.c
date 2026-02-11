
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int nseq_main(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  BIO *bp;
  BIO *bp_00;
  NETSCAPE_CERT_SEQUENCE *x;
  stack_st_X509 *psVar6;
  X509 *pXVar7;
  int iVar8;
  
  uVar4 = 0;
  uVar5 = 0;
  iVar8 = 0;
  uVar3 = opt_init(param_1,param_2,nseq_options);
switchD_00100056_caseD_0:
  do {
    iVar1 = opt_next();
    if (iVar1 == 0) {
      iVar1 = opt_check_rest_arg(0);
      if (iVar1 == 0) {
switchD_00100056_caseD_ffffffff:
        x = (NETSCAPE_CERT_SEQUENCE *)0x0;
        iVar8 = 1;
        bp_00 = (BIO *)0x0;
        BIO_printf(_bio_err,"%s: Use -help for summary.\n",uVar3);
        bp = (BIO *)0x0;
        goto LAB_001000c6;
      }
      bp = (BIO *)bio_open_default(uVar5,0x72,0x8005);
      if (bp != (BIO *)0x0) {
        bp_00 = (BIO *)bio_open_default(uVar4,0x77,0x8005);
        if (bp_00 == (BIO *)0x0) {
          x = (NETSCAPE_CERT_SEQUENCE *)0x0;
          iVar8 = 1;
          goto LAB_001000c6;
        }
        if (iVar8 == 0) {
          iVar1 = 0;
          x = PEM_read_bio_NETSCAPE_CERT_SEQUENCE
                        (bp,(NETSCAPE_CERT_SEQUENCE **)0x0,(undefined1 *)0x0,(void *)0x0);
          if (x == (NETSCAPE_CERT_SEQUENCE *)0x0) {
            iVar8 = 1;
            BIO_printf(_bio_err,"%s: Error reading sequence file %s\n",uVar3,uVar5);
            ERR_print_errors(_bio_err);
          }
          else {
            for (; iVar2 = OPENSSL_sk_num(x->certs), iVar1 < iVar2; iVar1 = iVar1 + 1) {
              pXVar7 = (X509 *)OPENSSL_sk_value(x->certs,iVar1);
              dump_cert_text(bp_00,pXVar7);
              PEM_write_bio_X509(bp_00,pXVar7);
            }
          }
          goto LAB_001000c6;
        }
        x = NETSCAPE_CERT_SEQUENCE_new();
        if (x == (NETSCAPE_CERT_SEQUENCE *)0x0) goto LAB_001000c6;
        psVar6 = (stack_st_X509 *)OPENSSL_sk_new_null();
        x->certs = psVar6;
        if (psVar6 != (stack_st_X509 *)0x0) goto LAB_001001d3;
        goto LAB_001000c6;
      }
      break;
    }
    if (iVar1 < 5) {
      if (-2 < iVar1) {
        switch(iVar1) {
        case 1:
          iVar8 = 0;
          x = (NETSCAPE_CERT_SEQUENCE *)0x0;
          bp_00 = (BIO *)0x0;
          opt_help(nseq_options);
          bp = (BIO *)0x0;
          goto LAB_001000c6;
        case 2:
          iVar8 = 1;
          break;
        case 3:
          uVar5 = opt_arg();
          break;
        case 4:
          uVar4 = opt_arg();
          break;
        case -1:
          goto switchD_00100056_caseD_ffffffff;
        }
      }
      goto switchD_00100056_caseD_0;
    }
  } while ((3 < iVar1 - 0x641U) || (iVar1 = opt_provider(), iVar1 != 0));
  iVar8 = 1;
  x = (NETSCAPE_CERT_SEQUENCE *)0x0;
  bp_00 = (BIO *)0x0;
  bp = (BIO *)0x0;
  goto LAB_001000c6;
  while (iVar1 = OPENSSL_sk_push(x->certs), iVar1 != 0) {
LAB_001001d3:
    pXVar7 = PEM_read_bio_X509(bp,(X509 **)0x0,(undefined1 *)0x0,(void *)0x0);
    if (pXVar7 == (X509 *)0x0) {
      iVar1 = OPENSSL_sk_num(x->certs);
      if (iVar1 == 0) {
        BIO_printf(_bio_err,"%s: Error reading certs file %s\n",uVar3,uVar5);
        ERR_print_errors(_bio_err);
      }
      else {
        iVar8 = 0;
        PEM_write_bio_NETSCAPE_CERT_SEQUENCE(bp_00,x);
      }
      break;
    }
  }
LAB_001000c6:
  BIO_free(bp);
  BIO_free_all(bp_00);
  NETSCAPE_CERT_SEQUENCE_free(x);
  return iVar8;
}


