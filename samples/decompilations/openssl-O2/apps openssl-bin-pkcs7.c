
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int pkcs7_main(undefined4 param_1,undefined8 param_2)

{
  PKCS7_SIGNED *pPVar1;
  stack_st_X509 *psVar2;
  stack_st_X509_CRL *psVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  BIO *bp;
  BIO *out;
  undefined8 uVar15;
  undefined8 uVar16;
  X509 *x;
  X509_CRL *x_00;
  char *format;
  long in_FS_OFFSET;
  undefined8 local_78;
  int local_50;
  int local_4c;
  PKCS7 *local_48;
  long local_40;
  
  bVar4 = false;
  uVar15 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0x8005;
  local_48 = (PKCS7 *)0x0;
  local_4c = 0x8005;
  uVar12 = app_get0_libctx();
  uVar14 = 0;
  uVar13 = opt_init(param_1,param_2,pkcs7_options);
  bVar7 = false;
  bVar5 = false;
  bVar6 = false;
  bVar8 = false;
  local_78 = 0;
switchD_001000d1_caseD_0:
  iVar9 = opt_next();
  if (iVar9 != 0) goto LAB_001000b0;
LAB_001001d0:
  iVar10 = opt_check_rest_arg(0);
  if (iVar10 == 0) {
switchD_001000d1_caseD_ffffffff:
    out = (BIO *)0x0;
    iVar9 = 1;
    bp = (BIO *)0x0;
    BIO_printf(_bio_err,"%s: Use -help for summary.\n",uVar13);
  }
  else {
    bp = (BIO *)bio_open_default(uVar15,0x72,local_50);
    if (bp == (BIO *)0x0) goto LAB_00100188;
    uVar13 = app_get0_propq();
    local_48 = (PKCS7 *)PKCS7_new_ex(uVar12,uVar13);
    if (local_48 == (PKCS7 *)0x0) {
      BIO_printf(_bio_err,"unable to allocate PKCS7 object\n");
      ERR_print_errors(_bio_err);
LAB_001004a9:
      iVar9 = 1;
      out = (BIO *)0x0;
      goto LAB_00100122;
    }
    if (local_50 == 4) {
      out = (BIO *)d2i_PKCS7_bio(bp,&local_48);
    }
    else {
      out = (BIO *)PEM_read_bio_PKCS7(bp,&local_48,(undefined1 *)0x0,(void *)0x0);
    }
    format = "unable to load PKCS7 object\n";
    if (out != (BIO *)0x0) {
      out = (BIO *)bio_open_default(local_78,0x77,local_4c);
      if (out == (BIO *)0x0) goto LAB_001004a9;
      if (bVar5) {
        PKCS7_print_ctx(out,local_48,0,(ASN1_PCTX *)0x0);
      }
      if (bVar4) {
        iVar10 = OBJ_obj2nid(local_48->type);
        if (((iVar10 == 0x16) || (iVar10 == 0x18)) &&
           (pPVar1 = (local_48->d).sign, pPVar1 != (PKCS7_SIGNED *)0x0)) {
          psVar2 = pPVar1->cert;
          iVar10 = 0;
          psVar3 = pPVar1->crl;
          if (psVar2 != (stack_st_X509 *)0x0) {
            for (; iVar11 = OPENSSL_sk_num(psVar2), iVar10 < iVar11; iVar10 = iVar10 + 1) {
              x = (X509 *)OPENSSL_sk_value(psVar2,iVar10);
              if (bVar8) {
                X509_print(out,x);
              }
              else if (!bVar7) {
                dump_cert_text(out);
              }
              if (!bVar6) {
                PEM_write_bio_X509(out,x);
              }
              BIO_puts(out,"\n");
            }
          }
          iVar10 = 0;
          if (psVar3 != (stack_st_X509_CRL *)0x0) {
            for (; iVar11 = OPENSSL_sk_num(psVar3), iVar10 < iVar11; iVar10 = iVar10 + 1) {
              x_00 = (X509_CRL *)OPENSSL_sk_value(psVar3,iVar10);
              uVar12 = get_nameopt();
              X509_CRL_print_ex(out,x_00,uVar12);
              if (!bVar6) {
                PEM_write_bio_X509_CRL(out,x_00);
              }
              BIO_puts(out,"\n");
            }
          }
        }
        goto LAB_00100122;
      }
      if (bVar6) goto LAB_00100122;
      if (local_4c == 4) {
        iVar10 = i2d_PKCS7_bio(out,local_48);
      }
      else {
        iVar10 = PEM_write_bio_PKCS7(out,local_48);
      }
      if (iVar10 != 0) goto LAB_00100122;
      format = "unable to write pkcs7 object\n";
    }
    BIO_printf(_bio_err,format);
    iVar9 = 1;
    ERR_print_errors(_bio_err);
  }
LAB_00100122:
  PKCS7_free(local_48);
  release_engine(uVar14);
  BIO_free(bp);
  BIO_free_all(out);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar9;
LAB_001000b0:
  if (iVar9 < 0xc) {
    if (iVar9 < -1) goto switchD_001000d1_caseD_0;
    switch(iVar9) {
    default:
      goto switchD_001000d1_caseD_0;
    case 1:
      iVar9 = 0;
      out = (BIO *)0x0;
      bp = (BIO *)0x0;
      opt_help(pkcs7_options);
      goto LAB_00100122;
    case 2:
      uVar16 = opt_arg();
      iVar9 = opt_format(uVar16,6,&local_50);
      break;
    case 3:
      uVar16 = opt_arg();
      iVar9 = opt_format(uVar16,6,&local_4c);
      break;
    case 4:
      uVar15 = opt_arg();
      goto switchD_001000d1_caseD_0;
    case 5:
      local_78 = opt_arg();
      goto switchD_001000d1_caseD_0;
    case 6:
      bVar6 = true;
      goto switchD_001000d1_caseD_0;
    case 7:
      bVar8 = true;
      goto switchD_001000d1_caseD_0;
    case 8:
      bVar5 = true;
      goto switchD_001000d1_caseD_0;
    case 9:
      bVar4 = true;
      goto switchD_001000d1_caseD_0;
    case 10:
      bVar7 = true;
      goto switchD_001000d1_caseD_0;
    case 0xb:
      goto switchD_001000d1_caseD_b;
    case -1:
      goto switchD_001000d1_caseD_ffffffff;
    }
    if (iVar9 == 0) goto switchD_001000d1_caseD_ffffffff;
    goto switchD_001000d1_caseD_0;
  }
  if ((iVar9 - 0x641U < 4) && (iVar9 = opt_provider(iVar9), iVar9 == 0)) {
LAB_00100188:
    iVar9 = 1;
    out = (BIO *)0x0;
    bp = (BIO *)0x0;
    goto LAB_00100122;
  }
  goto switchD_001000d1_caseD_0;
switchD_001000d1_caseD_b:
  uVar14 = opt_arg();
  uVar14 = setup_engine_methods(uVar14,0xffffffff,0);
  iVar9 = opt_next();
  if (iVar9 == 0) {
    iVar9 = 0;
    goto LAB_001001d0;
  }
  goto LAB_001000b0;
}


