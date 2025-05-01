
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 crl_main(undefined4 param_1,undefined8 param_2)

{
  byte *pbVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  X509_CRL *a;
  X509_CRL *a_00;
  EVP_PKEY *pEVar11;
  X509_CRL *pXVar12;
  X509_NAME *x;
  ulong uVar13;
  undefined8 uVar14;
  ASN1_INTEGER *a_01;
  undefined8 uVar15;
  BIO *bp;
  X509_STORE *v;
  X509_LOOKUP_METHOD *m;
  X509_STORE_CTX *ctx;
  X509 *x_00;
  undefined4 uVar16;
  long lVar17;
  long in_FS_OFFSET;
  int local_12c;
  int local_128;
  int local_124;
  long local_118;
  long local_110;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  int local_e0;
  int local_dc;
  int local_d0;
  int local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_ac;
  int local_a8;
  undefined4 local_a4;
  EVP_MD *local_a0;
  undefined8 local_98;
  uint local_90;
  undefined4 uStack_8c;
  byte local_88 [72];
  long local_40;
  
  uVar14 = 0;
  uVar15 = 0;
  bVar2 = false;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_a0 = EVP_sha1();
  local_ac = 0;
  local_a8 = 0x8005;
  local_a4 = 0;
  local_98 = 0;
  opt_set_unknown_name("digest");
  uVar9 = opt_init(param_1,param_2,crl_options);
  local_c8 = 0;
  iVar7 = 0;
  uVar16 = 0;
  local_c4 = 0;
  local_c0 = 0;
  bVar4 = false;
  local_d0 = 0;
  local_e0 = 0;
  bVar3 = false;
  bVar5 = false;
  local_124 = 0;
  local_128 = 0;
  local_12c = 0;
  local_dc = 0;
  local_e8 = 0;
  local_f0 = 0;
  local_f8 = 0;
  local_110 = 0;
  local_118 = 0;
  local_100 = 0;
switchD_00100162_caseD_0:
  do {
    while( true ) {
      iVar6 = opt_next();
      if (iVar6 == 0) {
        iVar6 = opt_check_rest_arg(0);
        if ((iVar6 != 0) && (iVar6 = opt_md(uVar15,&local_a0), iVar6 != 0)) {
          a = (X509_CRL *)load_crl(uVar14,local_ac,1);
          if (a == (X509_CRL *)0x0) goto LAB_00100195;
          ctx = (X509_STORE_CTX *)0x0;
          v = (X509_STORE *)0x0;
          if (bVar2) {
            v = (X509_STORE *)setup_verify(local_f8,local_c0,local_f0,local_c4,local_e8,uVar16);
            if (v == (X509_STORE *)0x0) goto LAB_00100b27;
            m = X509_LOOKUP_file();
            bp = (BIO *)X509_STORE_add_lookup(v,m);
            if (bp == (BIO *)0x0) goto LAB_001001a0;
            ctx = X509_STORE_CTX_new();
            if ((ctx == (X509_STORE_CTX *)0x0) ||
               (iVar6 = X509_STORE_CTX_init(ctx,v,(X509 *)0x0,(stack_st_X509 *)0x0), iVar6 == 0)) {
              BIO_printf(_bio_err,"Error initialising X509 store\n");
              goto LAB_00100b27;
            }
            uVar9 = X509_CRL_get_issuer(a);
            lVar17 = X509_STORE_CTX_get_obj_by_subject(ctx,1,uVar9);
            if (lVar17 == 0) {
              bp = (BIO *)0x0;
              BIO_printf(_bio_err,"Error getting CRL issuer certificate\n");
              goto LAB_001001a0;
            }
            x_00 = (X509 *)X509_OBJECT_get0_X509(lVar17);
            pEVar11 = X509_get_pubkey(x_00);
            X509_OBJECT_free(lVar17);
            if (pEVar11 == (EVP_PKEY *)0x0) {
              bp = (BIO *)0x0;
              BIO_printf(_bio_err,"Error getting CRL issuer public key\n");
              goto LAB_001001a0;
            }
            iVar6 = X509_CRL_verify(a,pEVar11);
            EVP_PKEY_free(pEVar11);
            if (iVar6 < 0) goto LAB_00100b27;
            if (iVar6 == 0) {
              bp = (BIO *)0x0;
              BIO_printf(_bio_err,"verify failure\n");
              goto LAB_001001a0;
            }
            BIO_printf(_bio_err,"verify OK\n");
          }
          if (local_118 != 0) {
            if (local_110 == 0) {
              bp = (BIO *)0x0;
              BIO_puts(_bio_err,"Missing CRL signing key\n");
              goto LAB_001001a0;
            }
            a_00 = (X509_CRL *)load_crl(local_118,local_ac,0,"other CRL");
            if (a_00 == (X509_CRL *)0x0) goto LAB_00100b27;
            pEVar11 = (EVP_PKEY *)load_key(local_110,local_a4,0,0,0,"CRL signing key");
            if (pEVar11 == (EVP_PKEY *)0x0) {
              bp = (BIO *)0x0;
              X509_CRL_free(a_00);
              goto LAB_001001a0;
            }
            pXVar12 = (X509_CRL *)X509_CRL_diff(a,a_00,pEVar11,local_a0,0);
            X509_CRL_free(a_00);
            EVP_PKEY_free(pEVar11);
            if (pXVar12 == (X509_CRL *)0x0) {
              bp = (BIO *)0x0;
              BIO_puts(_bio_err,"Error creating delta CRL\n");
              goto LAB_001001a0;
            }
            X509_CRL_free(a);
            a = pXVar12;
          }
          if (bVar3) {
            X509_CRL_get0_signature(a,&local_90,0);
            corrupt_signature(CONCAT44(uStack_8c,local_90));
          }
          if (iVar7 < 1) goto LAB_0010087e;
          iVar6 = 1;
          goto LAB_00100631;
        }
        goto switchD_00100162_caseD_ffffffff;
      }
      if (iVar6 < 0x1d) break;
      if ((iVar6 - 0x641U < 4) && (iVar6 = opt_provider(), iVar6 == 0)) goto LAB_00100195;
    }
  } while (iVar6 < -1);
  switch(iVar6) {
  default:
    goto switchD_00100162_caseD_0;
  case 1:
    ctx = (X509_STORE_CTX *)0x0;
    v = (X509_STORE *)0x0;
    bp = (BIO *)0x0;
    opt_help(crl_options);
    a = (X509_CRL *)0x0;
    uVar16 = 0;
    goto LAB_00100416;
  case 2:
    uVar10 = opt_arg();
    iVar6 = opt_format(uVar10,6,&local_ac);
    break;
  case 3:
    uVar14 = opt_arg();
    goto switchD_00100162_caseD_0;
  case 4:
    uVar10 = opt_arg();
    iVar6 = opt_format(uVar10,6,&local_a8);
    break;
  case 5:
    local_100 = opt_arg();
    goto switchD_00100162_caseD_0;
  case 6:
    uVar10 = opt_arg();
    iVar6 = opt_format(uVar10,0xffe,&local_a4);
    break;
  case 7:
    local_110 = opt_arg();
    goto switchD_00100162_caseD_0;
  case 8:
    iVar7 = iVar7 + 1;
    local_12c = iVar7;
    goto switchD_00100162_caseD_0;
  case 9:
    iVar7 = iVar7 + 1;
    local_128 = iVar7;
    goto switchD_00100162_caseD_0;
  case 10:
    iVar7 = iVar7 + 1;
    local_124 = iVar7;
    goto switchD_00100162_caseD_0;
  case 0xb:
    iVar7 = iVar7 + 1;
    local_e0 = iVar7;
    goto switchD_00100162_caseD_0;
  case 0xc:
    iVar7 = iVar7 + 1;
    local_d0 = iVar7;
    goto switchD_00100162_caseD_0;
  case 0xd:
    bVar3 = true;
    goto switchD_00100162_caseD_0;
  case 0xe:
    local_118 = opt_arg();
    goto switchD_00100162_caseD_0;
  case 0xf:
    local_f0 = opt_arg();
    bVar2 = true;
    goto switchD_00100162_caseD_0;
  case 0x10:
    local_f8 = opt_arg();
    bVar2 = true;
    goto switchD_00100162_caseD_0;
  case 0x11:
    local_e8 = opt_arg();
    bVar2 = true;
    goto switchD_00100162_caseD_0;
  case 0x12:
    local_c4 = 1;
    goto switchD_00100162_caseD_0;
  case 0x13:
    local_c0 = 1;
    goto switchD_00100162_caseD_0;
  case 0x14:
    uVar16 = 1;
    goto switchD_00100162_caseD_0;
  case 0x15:
    bVar2 = true;
    goto switchD_00100162_caseD_0;
  case 0x16:
    uVar10 = opt_arg();
    iVar6 = set_dateopt(&local_98,uVar10);
    break;
  case 0x17:
    bVar4 = true;
    goto switchD_00100162_caseD_0;
  case 0x18:
    iVar7 = iVar7 + 1;
    local_dc = iVar7;
    goto switchD_00100162_caseD_0;
  case 0x19:
    iVar7 = iVar7 + 1;
    local_c8 = iVar7;
    goto switchD_00100162_caseD_0;
  case 0x1a:
    bVar5 = true;
    goto switchD_00100162_caseD_0;
  case 0x1b:
    opt_arg();
    iVar6 = set_nameopt();
    break;
  case 0x1c:
    uVar15 = opt_unknown();
    goto switchD_00100162_caseD_0;
  case -1:
    goto switchD_00100162_caseD_ffffffff;
  }
  if (iVar6 == 0) goto switchD_00100162_caseD_ffffffff;
  goto switchD_00100162_caseD_0;
switchD_00100162_caseD_ffffffff:
  BIO_printf(_bio_err,"%s: Use -help for summary.\n",uVar9);
LAB_00100195:
  ctx = (X509_STORE_CTX *)0x0;
  v = (X509_STORE *)0x0;
  bp = (BIO *)0x0;
  a = (X509_CRL *)0x0;
  goto LAB_001001a0;
  while( true ) {
    if (local_c8 == iVar6) {
      if (iVar7 != 1) {
        BIO_printf(_bio_out,"issuer name old hash=");
      }
      x = (X509_NAME *)X509_CRL_get_issuer(a);
      uVar13 = X509_NAME_hash_old(x);
      BIO_printf(_bio_out,"%08lx\n",uVar13);
    }
    if (local_128 == iVar6) {
      BIO_printf(_bio_out,"lastUpdate=");
      uVar9 = local_98;
      uVar15 = X509_CRL_get0_lastUpdate(a);
      ASN1_TIME_print_ex(_bio_out,uVar15,uVar9);
      BIO_printf(_bio_out,"\n");
    }
    if (local_124 == iVar6) {
      BIO_printf(_bio_out,"nextUpdate=");
      lVar17 = X509_CRL_get0_nextUpdate(a);
      uVar9 = local_98;
      if (lVar17 == 0) {
        BIO_printf(_bio_out,"NONE");
      }
      else {
        uVar15 = X509_CRL_get0_nextUpdate(a);
        ASN1_TIME_print_ex(_bio_out,uVar15,uVar9);
      }
      BIO_printf(_bio_out,"\n");
    }
    if (local_e0 == iVar6) {
      iVar8 = X509_CRL_digest(a,local_a0,local_88,&local_90);
      if (iVar8 == 0) {
        bp = (BIO *)0x0;
        BIO_printf(_bio_err,"out of memory\n");
        goto LAB_001001a0;
      }
      lVar17 = 0;
      uVar9 = EVP_MD_get0_name(local_a0);
      BIO_printf(_bio_out,"%s Fingerprint=",uVar9);
      if (0 < (int)local_90) {
        do {
          pbVar1 = local_88 + lVar17;
          lVar17 = lVar17 + 1;
          BIO_printf(_bio_out,"%02X%c",(ulong)*pbVar1);
        } while ((int)lVar17 < (int)local_90);
      }
    }
    iVar6 = iVar6 + 1;
    if (iVar7 < iVar6) break;
LAB_00100631:
    if (local_12c == iVar6) {
      uVar9 = X509_CRL_get_issuer(a);
      print_name(_bio_out,"issuer=",uVar9);
    }
    if (local_d0 == iVar6) {
      a_01 = (ASN1_INTEGER *)X509_CRL_get_ext_d2i(a,0x58,(int *)0x0,(int *)0x0);
      BIO_printf(_bio_out,"crlNumber=");
      if (a_01 == (ASN1_INTEGER *)0x0) {
        BIO_puts(_bio_out,"<NONE>");
      }
      else {
        BIO_puts(_bio_out,"0x");
        i2a_ASN1_INTEGER(_bio_out,a_01);
        ASN1_INTEGER_free(a_01);
      }
      BIO_printf(_bio_out,"\n");
    }
    if (local_dc == iVar6) {
      uVar9 = app_get0_propq();
      uVar15 = app_get0_libctx();
      uVar14 = X509_CRL_get_issuer(a);
      uVar9 = X509_NAME_hash_ex(uVar14,uVar15,uVar9,&local_90);
      if (iVar7 != 1) {
        BIO_printf(_bio_out,"issuer name hash=");
      }
      if (local_90 == 0) {
        bp = (BIO *)0x0;
        BIO_puts(_bio_out,"<ERROR>");
        goto LAB_001001a0;
      }
      BIO_printf(_bio_out,"%08lx\n",uVar9);
    }
  }
LAB_0010087e:
  bp = (BIO *)bio_open_default(local_100,0x77,local_a8);
  if (bp == (BIO *)0x0) {
LAB_00100b27:
    bp = (BIO *)0x0;
  }
  else {
    if (bVar4) {
      uVar9 = get_nameopt();
      X509_CRL_print_ex(bp,a,uVar9);
    }
    uVar16 = 0;
    if (bVar5) goto LAB_00100416;
    if (local_a8 == 4) {
      iVar7 = i2d_X509_CRL_bio(bp,a);
    }
    else {
      iVar7 = PEM_write_bio_X509_CRL(bp,a);
    }
    if (iVar7 != 0) goto LAB_00100416;
    BIO_printf(_bio_err,"unable to write CRL\n");
  }
LAB_001001a0:
  ERR_print_errors(_bio_err);
  uVar16 = 1;
LAB_00100416:
  BIO_free_all(bp);
  EVP_MD_free(local_a0);
  X509_CRL_free(a);
  X509_STORE_CTX_free(ctx);
  X509_STORE_free(v);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar16;
}


