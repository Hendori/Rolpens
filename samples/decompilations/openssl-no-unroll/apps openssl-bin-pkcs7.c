
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int pkcs7_main(undefined4 param_1,undefined8 param_2)

{
  PKCS7_SIGNED *pPVar1;
  stack_st_X509 *psVar2;
  stack_st_X509_CRL *psVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  BIO *bp;
  BIO *out;
  undefined8 uVar12;
  undefined8 uVar13;
  X509 *pXVar14;
  X509_CRL *x;
  char *format;
  long in_FS_OFFSET;
  undefined8 local_78;
  int local_70;
  int local_68;
  int local_50;
  int local_4c;
  PKCS7 *local_48;
  long local_40;
  
  iVar8 = 0;
  uVar12 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0x8005;
  local_48 = (PKCS7 *)0x0;
  local_4c = 0x8005;
  uVar9 = app_get0_libctx();
  uVar11 = 0;
  uVar10 = opt_init(param_1,param_2,pkcs7_options);
  local_70 = 0;
  bVar4 = false;
  local_68 = 0;
  bVar5 = false;
  local_78 = 0;
switchD_001000d1_caseD_0:
  iVar6 = opt_next();
  if (iVar6 != 0) goto LAB_001000b0;
LAB_001001d0:
  iVar7 = opt_check_rest_arg(0);
  if (iVar7 == 0) goto switchD_001000d1_caseD_ffffffff;
  bp = (BIO *)bio_open_default(uVar12,0x72,local_50);
  if (bp == (BIO *)0x0) goto LAB_00100188;
  uVar10 = app_get0_propq();
  local_48 = (PKCS7 *)PKCS7_new_ex(uVar9,uVar10);
  if (local_48 == (PKCS7 *)0x0) {
    BIO_printf(_bio_err,"unable to allocate PKCS7 object\n");
    ERR_print_errors(_bio_err);
LAB_0010058f:
    iVar6 = 1;
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
    if (out == (BIO *)0x0) goto LAB_0010058f;
    if (bVar4) {
      PKCS7_print_ctx(out,local_48,0,(ASN1_PCTX *)0x0);
    }
    if (bVar5) {
      iVar7 = OBJ_obj2nid(local_48->type);
      if (((iVar7 != 0x16) && (iVar7 != 0x18)) ||
         (pPVar1 = (local_48->d).sign, pPVar1 == (PKCS7_SIGNED *)0x0)) goto LAB_00100122;
      psVar2 = pPVar1->cert;
      psVar3 = pPVar1->crl;
      if (psVar2 == (stack_st_X509 *)0x0) {
        if (psVar3 == (stack_st_X509_CRL *)0x0) goto LAB_00100122;
        if (iVar8 == 0) goto LAB_0010060f;
      }
      else {
        if (iVar8 == 0) goto LAB_001004ee;
        if (local_68 == 0) {
          if (local_70 == 0) {
            for (; iVar8 = OPENSSL_sk_num(psVar2), local_70 < iVar8; local_70 = local_70 + 1) {
              uVar9 = OPENSSL_sk_value(psVar2,local_70);
              dump_cert_text(out,uVar9);
              BIO_puts(out,"\n");
            }
          }
          else {
            for (; iVar8 = OPENSSL_sk_num(psVar2), local_68 < iVar8; local_68 = local_68 + 1) {
              OPENSSL_sk_value(psVar2,local_68);
              BIO_puts(out,"\n");
            }
          }
        }
        else {
          for (iVar8 = 0; iVar7 = OPENSSL_sk_num(psVar2), iVar8 < iVar7; iVar8 = iVar8 + 1) {
            pXVar14 = (X509 *)OPENSSL_sk_value(psVar2,iVar8);
            X509_print(out,pXVar14);
            BIO_puts(out,"\n");
          }
        }
        if (psVar3 == (stack_st_X509_CRL *)0x0) goto LAB_00100122;
      }
      for (iVar8 = 0; iVar7 = OPENSSL_sk_num(psVar3), iVar8 < iVar7; iVar8 = iVar8 + 1) {
        uVar9 = OPENSSL_sk_value(psVar3,iVar8);
        uVar10 = get_nameopt();
        X509_CRL_print_ex(out,uVar9,uVar10);
        BIO_puts(out,"\n");
      }
      goto LAB_00100122;
    }
    if (iVar8 != 0) goto LAB_00100122;
    if (local_4c == 4) {
      iVar8 = i2d_PKCS7_bio(out,local_48);
    }
    else {
      iVar8 = PEM_write_bio_PKCS7(out,local_48);
    }
    if (iVar8 != 0) goto LAB_00100122;
    format = "unable to write pkcs7 object\n";
  }
  BIO_printf(_bio_err,format);
  iVar6 = 1;
  ERR_print_errors(_bio_err);
  goto LAB_00100122;
LAB_001000b0:
  if (iVar6 < 0xc) {
    if (iVar6 < -1) goto switchD_001000d1_caseD_0;
    switch(iVar6) {
    default:
      goto switchD_001000d1_caseD_0;
    case 1:
      iVar6 = 0;
      out = (BIO *)0x0;
      bp = (BIO *)0x0;
      opt_help(pkcs7_options);
      goto LAB_00100122;
    case 2:
      uVar13 = opt_arg();
      iVar6 = opt_format(uVar13,6,&local_50);
      break;
    case 3:
      uVar13 = opt_arg();
      iVar6 = opt_format(uVar13,6,&local_4c);
      break;
    case 4:
      uVar12 = opt_arg();
      goto switchD_001000d1_caseD_0;
    case 5:
      local_78 = opt_arg();
      goto switchD_001000d1_caseD_0;
    case 6:
      iVar8 = 1;
      goto switchD_001000d1_caseD_0;
    case 7:
      local_68 = 1;
      goto switchD_001000d1_caseD_0;
    case 8:
      bVar4 = true;
      goto switchD_001000d1_caseD_0;
    case 9:
      bVar5 = true;
      goto switchD_001000d1_caseD_0;
    case 10:
      local_70 = 1;
      goto switchD_001000d1_caseD_0;
    case 0xb:
      goto switchD_001000d1_caseD_b;
    case -1:
      goto switchD_001000d1_caseD_ffffffff;
    }
    if (iVar6 == 0) goto switchD_001000d1_caseD_ffffffff;
    goto switchD_001000d1_caseD_0;
  }
  if ((iVar6 - 0x641U < 4) && (iVar6 = opt_provider(iVar6), iVar6 == 0)) {
LAB_00100188:
    iVar6 = 1;
    out = (BIO *)0x0;
    bp = (BIO *)0x0;
    goto LAB_00100122;
  }
  goto switchD_001000d1_caseD_0;
switchD_001000d1_caseD_b:
  uVar11 = opt_arg();
  uVar11 = setup_engine_methods(uVar11,0xffffffff,0);
  iVar6 = opt_next();
  if (iVar6 == 0) {
    iVar6 = 0;
    goto LAB_001001d0;
  }
  goto LAB_001000b0;
switchD_001000d1_caseD_ffffffff:
  out = (BIO *)0x0;
  iVar6 = 1;
  bp = (BIO *)0x0;
  BIO_printf(_bio_err,"%s: Use -help for summary.\n",uVar10);
  goto LAB_00100122;
LAB_001004ee:
  for (; iVar7 = OPENSSL_sk_num(psVar2), iVar8 < iVar7; iVar8 = iVar8 + 1) {
    pXVar14 = (X509 *)OPENSSL_sk_value(psVar2,iVar8);
    if (local_68 == 0) {
      if (local_70 == 0) {
        dump_cert_text(out,pXVar14);
      }
    }
    else {
      X509_print(out,pXVar14);
    }
    PEM_write_bio_X509(out,pXVar14);
    BIO_puts(out,"\n");
  }
  if (psVar3 != (stack_st_X509_CRL *)0x0) {
LAB_0010060f:
    for (iVar8 = 0; iVar7 = OPENSSL_sk_num(psVar3), iVar8 < iVar7; iVar8 = iVar8 + 1) {
      x = (X509_CRL *)OPENSSL_sk_value(psVar3,iVar8);
      uVar9 = get_nameopt();
      X509_CRL_print_ex(out,x,uVar9);
      PEM_write_bio_X509_CRL(out,x);
      BIO_puts(out,"\n");
    }
  }
LAB_00100122:
  PKCS7_free(local_48);
  release_engine(uVar11);
  BIO_free(bp);
  BIO_free_all(out);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar6;
}


