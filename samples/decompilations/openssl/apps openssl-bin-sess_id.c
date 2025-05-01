
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int sess_id_main(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  BIO *pBVar6;
  SSL_SESSION *s;
  X509 *x;
  size_t sVar7;
  undefined8 uVar8;
  int iVar9;
  long in_FS_OFFSET;
  uchar *local_68;
  undefined8 local_60;
  int local_54;
  undefined8 local_50;
  int local_48;
  int local_44;
  long local_40;
  
  iVar4 = 0;
  iVar9 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0x8005;
  local_44 = 0x8005;
  uVar5 = opt_init(param_1,param_2,sess_id_options);
  local_54 = 0;
  local_68 = (uchar *)0x0;
  local_50 = 0;
  local_60 = 0;
  iVar3 = 0;
switchD_00100099_caseD_0:
  iVar1 = opt_next();
  if (iVar1 != 0) {
LAB_00100088:
    switch(iVar1) {
    default:
      goto switchD_00100099_caseD_0;
    case 1:
      iVar1 = 0;
      pBVar6 = (BIO *)0x0;
      s = (SSL_SESSION *)0x0;
      opt_help(sess_id_options);
      goto LAB_001000e5;
    case 2:
      uVar8 = opt_arg();
      iVar1 = opt_format(uVar8,6,&local_48);
      break;
    case 3:
      uVar8 = opt_arg();
      iVar1 = opt_format(uVar8,0x106,&local_44);
      break;
    case 4:
      local_60 = opt_arg();
      goto switchD_00100099_caseD_0;
    case 5:
      local_50 = opt_arg();
      goto switchD_00100099_caseD_0;
    case 6:
      iVar4 = iVar3 + 1;
      iVar3 = iVar4;
      goto switchD_00100099_caseD_0;
    case 7:
      local_54 = iVar3 + 1;
      iVar3 = local_54;
      goto switchD_00100099_caseD_0;
    case 8:
      iVar9 = iVar3 + 1;
      iVar3 = iVar9;
      goto switchD_00100099_caseD_0;
    case 9:
      goto switchD_00100099_caseD_9;
    case -1:
      goto switchD_00100099_caseD_ffffffff;
    }
    if (iVar1 == 0) goto switchD_00100099_caseD_ffffffff;
    goto switchD_00100099_caseD_0;
  }
LAB_00100140:
  iVar2 = opt_check_rest_arg(0);
  iVar3 = local_48;
  if (iVar2 == 0) {
switchD_00100099_caseD_ffffffff:
    s = (SSL_SESSION *)0x0;
    iVar1 = 1;
    pBVar6 = (BIO *)0x0;
    BIO_printf(_bio_err,"%s: Use -help for summary.\n",uVar5);
    goto LAB_001000e5;
  }
  pBVar6 = (BIO *)bio_open_default(local_60,0x72,local_48);
  if (pBVar6 == (BIO *)0x0) {
    BIO_free((BIO *)0x0);
  }
  else {
    if (iVar3 == 4) {
      s = (SSL_SESSION *)ASN1_d2i_bio((xnew *)&SSL_SESSION_new,&d2i_SSL_SESSION,pBVar6,(void **)0x0)
      ;
    }
    else {
      s = PEM_read_bio_SSL_SESSION(pBVar6,(SSL_SESSION **)0x0,(undefined1 *)0x0,(void *)0x0);
    }
    if (s != (SSL_SESSION *)0x0) {
      BIO_free(pBVar6);
      x = SSL_SESSION_get0_peer(s);
      if (local_68 != (uchar *)0x0) {
        sVar7 = strlen((char *)local_68);
        if (sVar7 < 0x21) {
          iVar3 = SSL_SESSION_set1_id_context(s,local_68,(uint)sVar7);
          if (iVar3 == 0) {
            iVar1 = 1;
            pBVar6 = (BIO *)0x0;
            BIO_printf(_bio_err,"Error setting id context\n");
            goto LAB_001000e5;
          }
          goto LAB_001001d9;
        }
        BIO_printf(_bio_err,"Context too long\n");
LAB_00100357:
        iVar1 = 1;
        pBVar6 = (BIO *)0x0;
        goto LAB_001000e5;
      }
LAB_001001d9:
      if ((iVar4 == 0) && (pBVar6 = (BIO *)0x0, iVar9 != 0)) goto LAB_001000e5;
      pBVar6 = (BIO *)bio_open_default(local_50,0x77,local_44);
      if (pBVar6 == (BIO *)0x0) goto LAB_00100357;
      if ((iVar4 == 0) || (SSL_SESSION_print(pBVar6,s), local_54 == 0)) {
        if (iVar9 != 0 || local_54 != 0) goto LAB_001003df;
        if (local_44 == 4) {
          iVar4 = ASN1_i2d_bio(&i2d_SSL_SESSION,pBVar6,(uchar *)s);
LAB_00100257:
          if (iVar4 == 0) {
            iVar1 = 1;
            BIO_printf(_bio_err,"unable to write SSL_SESSION\n");
          }
          goto LAB_001000e5;
        }
        if (local_44 == 0x8005) {
          iVar4 = PEM_write_bio_SSL_SESSION(pBVar6,s);
          goto LAB_00100257;
        }
        if (local_44 == 0xe) {
          iVar4 = SSL_SESSION_print_keylog(pBVar6,s);
          goto LAB_00100257;
        }
LAB_00100365:
        BIO_printf(_bio_err,"bad output format specified for outfile\n");
      }
      else {
        if (x == (X509 *)0x0) {
          BIO_puts(pBVar6,"No certificate present\n");
          goto LAB_001000e5;
        }
        X509_print(pBVar6,x);
LAB_001003df:
        if ((x == (X509 *)0x0) || (iVar9 != 0)) goto LAB_001000e5;
        if (local_44 == 4) {
          iVar4 = i2d_X509_bio(pBVar6,x);
        }
        else {
          if (local_44 != 0x8005) goto LAB_00100365;
          iVar4 = PEM_write_bio_X509(pBVar6,x);
        }
        if (iVar4 != 0) goto LAB_001000e5;
        BIO_printf(_bio_err,"unable to write X509\n");
      }
      iVar1 = 1;
      goto LAB_001000e5;
    }
    BIO_printf(_bio_err,"unable to load SSL_SESSION\n");
    ERR_print_errors(_bio_err);
    BIO_free(pBVar6);
  }
  iVar1 = 1;
  pBVar6 = (BIO *)0x0;
  s = (SSL_SESSION *)0x0;
LAB_001000e5:
  BIO_free_all(pBVar6);
  SSL_SESSION_free(s);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
switchD_00100099_caseD_9:
  local_68 = (uchar *)opt_arg();
  iVar1 = opt_next();
  if (iVar1 == 0) {
    iVar1 = 0;
    goto LAB_00100140;
  }
  goto LAB_00100088;
}


