
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 crl2pkcs7_main(undefined8 param_1,undefined8 param_2)

{
  pkcs7_st *ppVar1;
  ASN1_INTEGER *a;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  PKCS7 *p7;
  PKCS7_SIGNED *pPVar9;
  ASN1_OBJECT *pAVar10;
  stack_st_X509_CRL *psVar11;
  stack_st_X509 *psVar12;
  char *filename;
  BIO *pBVar13;
  stack_st_X509_INFO *psVar14;
  X509_INFO *a_00;
  BIO *bp;
  X509_CRL *a_01;
  undefined4 uVar15;
  long in_FS_OFFSET;
  undefined8 local_68;
  int local_54;
  int local_48;
  int local_44;
  long local_40;
  
  bVar2 = false;
  uVar7 = 0;
  lVar8 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0x8005;
  local_44 = 0x8005;
  uVar5 = opt_init(param_1,param_2,crl2pkcs7_options);
  local_68 = 0;
switchD_0010008b_caseD_0:
  while (iVar3 = opt_next(), iVar3 != 0) {
    if (iVar3 < 8) {
      if (-2 < iVar3) goto code_r0x00100084;
    }
    else if (iVar3 - 0x641U < 4) {
      iVar3 = opt_provider();
      goto joined_r0x0010016b;
    }
  }
  iVar3 = opt_check_rest_arg(0);
  if (iVar3 != 0) {
    if (!bVar2) {
      bp = (BIO *)bio_open_default(uVar7,0x72,local_48);
      if (bp == (BIO *)0x0) goto LAB_001000ea;
      if (local_48 == 4) {
        a_01 = d2i_X509_CRL_bio(bp,(X509_CRL **)0x0);
LAB_001004ad:
        if (a_01 != (X509_CRL *)0x0) goto LAB_0010023e;
      }
      else if (local_48 == 0x8005) {
        a_01 = PEM_read_bio_X509_CRL(bp,(X509_CRL **)0x0,(undefined1 *)0x0,(void *)0x0);
        goto LAB_001004ad;
      }
      a_01 = (X509_CRL *)0x0;
      p7 = (PKCS7 *)0x0;
      uVar15 = 1;
      pBVar13 = (BIO *)0x0;
      BIO_printf(_bio_err,"unable to load CRL\n");
      ERR_print_errors(_bio_err);
      goto LAB_001000fb;
    }
    a_01 = (X509_CRL *)0x0;
    bp = (BIO *)0x0;
LAB_0010023e:
    p7 = PKCS7_new();
    if (p7 == (PKCS7 *)0x0) {
      pBVar13 = (BIO *)0x0;
      uVar15 = 1;
      goto LAB_001000fb;
    }
    pPVar9 = PKCS7_SIGNED_new();
    if (pPVar9 != (PKCS7_SIGNED *)0x0) {
      pAVar10 = OBJ_nid2obj(0x16);
      (p7->d).sign = pPVar9;
      ppVar1 = pPVar9->contents;
      p7->type = pAVar10;
      pAVar10 = OBJ_nid2obj(0x15);
      a = pPVar9->version;
      ppVar1->type = pAVar10;
      iVar3 = ASN1_INTEGER_set(a,1);
      if (iVar3 != 0) {
        if (a_01 == (X509_CRL *)0x0) {
LAB_001002cd:
          if (lVar8 == 0) {
            local_54 = 0;
            goto LAB_001004d2;
          }
          psVar12 = (stack_st_X509 *)OPENSSL_sk_new_null();
          if (psVar12 == (stack_st_X509 *)0x0) goto LAB_0010046f;
          pPVar9->cert = psVar12;
          local_54 = 0;
          goto LAB_001002f8;
        }
        psVar11 = (stack_st_X509_CRL *)OPENSSL_sk_new_null();
        if (psVar11 != (stack_st_X509_CRL *)0x0) {
          pPVar9->crl = psVar11;
          iVar3 = OPENSSL_sk_push(psVar11,a_01);
          if (iVar3 != 0) goto LAB_001002cd;
        }
      }
    }
    uVar15 = 1;
    pBVar13 = (BIO *)0x0;
    goto LAB_001000fb;
  }
  goto switchD_0010008b_caseD_ffffffff;
LAB_001002f8:
  iVar3 = OPENSSL_sk_num(lVar8);
  if (iVar3 <= local_54) goto LAB_001004d2;
  filename = (char *)OPENSSL_sk_value(lVar8,local_54);
  pBVar13 = BIO_new_file(filename,"r");
  if (pBVar13 == (BIO *)0x0) {
    BIO_printf(_bio_err,"error opening the file, %s\n",filename);
    BIO_free((BIO *)0x0);
    OPENSSL_sk_free(0);
LAB_0010044e:
    BIO_printf(_bio_err,"error loading certificates\n");
    ERR_print_errors(_bio_err);
    goto LAB_0010046f;
  }
  psVar14 = PEM_X509_INFO_read_bio(pBVar13,(stack_st_X509_INFO *)0x0,(undefined1 *)0x0,(void *)0x0);
  if (psVar14 == (stack_st_X509_INFO *)0x0) {
    BIO_printf(_bio_err,"error reading the file, %s\n",filename);
    BIO_free(pBVar13);
    OPENSSL_sk_free(0);
    goto LAB_0010044e;
  }
  iVar3 = 0;
  while (iVar4 = OPENSSL_sk_num(psVar14), iVar4 != 0) {
    a_00 = (X509_INFO *)OPENSSL_sk_shift(psVar14);
    if (a_00->x509 != (X509 *)0x0) {
      iVar4 = OPENSSL_sk_push(psVar12);
      if (iVar4 == 0) {
        X509_INFO_free(a_00);
        BIO_free(pBVar13);
        OPENSSL_sk_free(psVar14);
        goto LAB_0010044e;
      }
      a_00->x509 = (X509 *)0x0;
      iVar3 = iVar3 + 1;
    }
    X509_INFO_free(a_00);
  }
  BIO_free(pBVar13);
  OPENSSL_sk_free(psVar14);
  if (iVar3 < 0) goto LAB_0010044e;
  local_54 = local_54 + 1;
  goto LAB_001002f8;
code_r0x00100084:
  switch(iVar3) {
  default:
    goto switchD_0010008b_caseD_0;
  case 1:
    uVar15 = 0;
    a_01 = (X509_CRL *)0x0;
    p7 = (PKCS7 *)0x0;
    opt_help(crl2pkcs7_options);
    pBVar13 = (BIO *)0x0;
    bp = (BIO *)0x0;
    goto LAB_001000fb;
  case 2:
    uVar6 = opt_arg();
    iVar3 = opt_format(uVar6,6,&local_48);
    break;
  case 3:
    uVar6 = opt_arg();
    iVar3 = opt_format(uVar6,6,&local_44);
    break;
  case 4:
    uVar7 = opt_arg();
    goto switchD_0010008b_caseD_0;
  case 5:
    local_68 = opt_arg();
    goto switchD_0010008b_caseD_0;
  case 6:
    bVar2 = true;
    goto switchD_0010008b_caseD_0;
  case 7:
    if ((lVar8 == 0) && (lVar8 = OPENSSL_sk_new_null(), lVar8 == 0)) {
      a_01 = (X509_CRL *)0x0;
      p7 = (PKCS7 *)0x0;
      pBVar13 = (BIO *)0x0;
      bp = (BIO *)0x0;
      uVar15 = 1;
      goto LAB_001000fb;
    }
    uVar6 = opt_arg();
    iVar3 = OPENSSL_sk_push(lVar8,uVar6);
joined_r0x0010016b:
    if (iVar3 == 0) goto LAB_001000ea;
    goto switchD_0010008b_caseD_0;
  case -1:
    goto switchD_0010008b_caseD_ffffffff;
  }
  if (iVar3 == 0) goto switchD_0010008b_caseD_ffffffff;
  goto switchD_0010008b_caseD_0;
switchD_0010008b_caseD_ffffffff:
  BIO_printf(_bio_err,"%s: Use -help for summary.\n",uVar5);
LAB_001000ea:
  uVar15 = 1;
  a_01 = (X509_CRL *)0x0;
  p7 = (PKCS7 *)0x0;
  pBVar13 = (BIO *)0x0;
  bp = (BIO *)0x0;
  goto LAB_001000fb;
LAB_001004d2:
  pBVar13 = (BIO *)bio_open_default(local_68,0x77,local_44);
  if (pBVar13 == (BIO *)0x0) {
LAB_0010046f:
    uVar15 = 1;
    a_01 = (X509_CRL *)0x0;
    pBVar13 = (BIO *)0x0;
  }
  else {
    if (local_44 == 4) {
      local_54 = i2d_PKCS7_bio(pBVar13,p7);
    }
    else if (local_44 == 0x8005) {
      local_54 = PEM_write_bio_PKCS7(pBVar13,p7);
    }
    a_01 = (X509_CRL *)0x0;
    uVar15 = 0;
    if (local_54 == 0) {
      uVar15 = 1;
      BIO_printf(_bio_err,"unable to write pkcs7 object\n");
      ERR_print_errors(_bio_err);
    }
  }
LAB_001000fb:
  OPENSSL_sk_free(lVar8);
  BIO_free(bp);
  BIO_free_all(pBVar13);
  PKCS7_free(p7);
  X509_CRL_free(a_01);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar15;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


