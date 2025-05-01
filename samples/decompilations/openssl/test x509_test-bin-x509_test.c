
undefined4 test_asn1_item_verify(void)

{
  ASN1_BIT_STRING *pAVar1;
  X509_ALGOR *pXVar2;
  int iVar3;
  char *filename;
  BIO *bp;
  X509 *a;
  EVP_PKEY *pkey;
  rsa_st *key;
  ASN1_ITEM *pAVar4;
  undefined4 uVar5;
  long in_FS_OFFSET;
  ASN1_BIT_STRING *local_50;
  X509_ALGOR *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = (ASN1_BIT_STRING *)0x0;
  local_48 = (X509_ALGOR *)0x0;
  filename = (char *)test_get_argument(0);
  iVar3 = test_ptr("test/x509_test.c",0x89,"certfile = test_get_argument(0)",filename);
  if (iVar3 == 0) {
    uVar5 = 0;
    key = (RSA *)0x0;
    a = (X509 *)0x0;
    bp = (BIO *)0x0;
  }
  else {
    bp = BIO_new_file(filename,"r");
    iVar3 = test_ptr("test/x509_test.c",0x8a,"bio = BIO_new_file(certfile, \"r\")");
    if (iVar3 == 0) {
      key = (RSA *)0x0;
      a = (X509 *)0x0;
      uVar5 = 0;
    }
    else {
      a = PEM_read_bio_X509(bp,(X509 **)0x0,(undefined1 *)0x0,(void *)0x0);
      iVar3 = test_ptr("test/x509_test.c",0x8b,"x509 = PEM_read_bio_X509(bio, NULL, NULL, NULL)",a);
      if (iVar3 != 0) {
        pkey = (EVP_PKEY *)X509_get0_pubkey(a);
        iVar3 = test_ptr("test/x509_test.c",0x8c,"pkey = X509_get0_pubkey(x509)",pkey);
        if (iVar3 != 0) {
          key = EVP_PKEY_get1_RSA(pkey);
          iVar3 = test_ptr("test/x509_test.c",0x91,"rsa = EVP_PKEY_get1_RSA(pkey)",key);
          if (iVar3 != 0) {
            iVar3 = EVP_PKEY_set1_RSA(pkey,key);
            iVar3 = test_int_gt("test/x509_test.c",0x94,"EVP_PKEY_set1_RSA(pkey, rsa)",&_LC7,iVar3,0
                               );
            if (iVar3 != 0) {
              X509_get0_signature(&local_50,&local_48,a);
              pXVar2 = local_48;
              pAVar1 = local_50;
              pAVar4 = (ASN1_ITEM *)X509_CINF_it();
              iVar3 = ASN1_item_verify(pAVar4,pXVar2,pAVar1,a,pkey);
              iVar3 = test_int_gt("test/x509_test.c",0x9a,
                                  "ASN1_item_verify(ASN1_ITEM_rptr(X509_CINF), (X509_ALGOR *)alg, (ASN1_BIT_STRING *)sig, &x509->cert_info, pkey)"
                                  ,&_LC7,iVar3,0);
              if (iVar3 != 0) {
                ERR_set_mark();
                pXVar2 = local_48;
                pAVar1 = local_50;
                pAVar4 = (ASN1_ITEM *)X509_CINF_it();
                iVar3 = ASN1_item_verify(pAVar4,pXVar2,pAVar1,(void *)0x0,pkey);
                iVar3 = test_int_lt("test/x509_test.c",0xa0,
                                    "ASN1_item_verify(ASN1_ITEM_rptr(X509_CINF), (X509_ALGOR *)alg, (ASN1_BIT_STRING *)sig, NULL, pkey)"
                                    ,&_LC7,iVar3,0);
                if (iVar3 == 0) {
                  ERR_clear_last_mark();
                  uVar5 = 0;
                }
                else {
                  ERR_pop_to_mark();
                  uVar5 = 1;
                }
                goto LAB_0010006a;
              }
            }
          }
          uVar5 = 0;
          goto LAB_0010006a;
        }
      }
      key = (RSA *)0x0;
      uVar5 = 0;
    }
  }
LAB_0010006a:
  RSA_free(key);
  X509_free(a);
  BIO_free(bp);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool test_x509_crl_tbs_cache(void)

{
  int iVar1;
  X509_CRL *x;
  long in_FS_OFFSET;
  bool bVar2;
  uchar *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = crldata;
  x = d2i_X509_CRL((X509_CRL **)0x0,&local_28,0x8e);
  iVar1 = test_ptr("test/x509_test.c",0x74,"crl = d2i_X509_CRL(NULL, &p, sizeof(crldata))",x);
  if (iVar1 != 0) {
    iVar1 = X509_CRL_sign(x,privkey,signmd);
    iVar1 = test_int_gt("test/x509_test.c",0x75,"X509_CRL_sign(crl, privkey, signmd)",&_LC7,iVar1,0)
    ;
    if (iVar1 != 0) {
      iVar1 = X509_CRL_verify(x,pubkey);
      iVar1 = test_int_eq("test/x509_test.c",0x76,"X509_CRL_verify(crl, pubkey)",&_LC13,iVar1,1);
      bVar2 = iVar1 != 0;
      goto LAB_001002e9;
    }
  }
  bVar2 = false;
LAB_001002e9:
  X509_CRL_free(x);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool test_x509_tbs_cache(void)

{
  int iVar1;
  X509 *x;
  long in_FS_OFFSET;
  bool bVar2;
  uchar *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = certdata;
  x = d2i_X509((X509 **)0x0,&local_28,0x18a);
  iVar1 = test_ptr("test/x509_test.c",0x62,"x = d2i_X509(NULL, &p, sizeof(certdata))",x);
  if (iVar1 != 0) {
    iVar1 = X509_sign(x,privkey,signmd);
    iVar1 = test_int_gt("test/x509_test.c",99,"X509_sign(x, privkey, signmd)",&_LC7,iVar1,0);
    if (iVar1 != 0) {
      iVar1 = X509_verify(x,pubkey);
      iVar1 = test_int_eq("test/x509_test.c",100,"X509_verify(x, pubkey)",&_LC13,iVar1,1);
      bVar2 = iVar1 != 0;
      goto LAB_001003e9;
    }
  }
  bVar2 = false;
LAB_001003e9:
  X509_free(x);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined1 * test_get_options(void)

{
  return options_0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 setup_tests(void)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  uchar *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = test_get_argument_count();
  if (iVar1 == 1) {
    uVar2 = 1;
    local_28 = pubkeydata;
    pubkey = d2i_PUBKEY((EVP_PKEY **)0x0,&local_28,0x5b);
    local_28 = privkeydata;
    privkey = d2i_PrivateKey(0x198,(EVP_PKEY **)0x0,&local_28,0x79);
    if ((pubkey == (EVP_PKEY *)0x0) || (privkey == (EVP_PKEY *)0x0)) {
      uVar2 = 0;
      BIO_printf(_bio_err,"Failed to create keys\n");
    }
    else {
      signmd = EVP_MD_fetch(0,"SHA384",0);
      if (signmd == 0) {
        uVar2 = 0;
        BIO_printf(_bio_err,"Failed to fetch digest\n");
      }
      else {
        add_test("test_x509_tbs_cache",test_x509_tbs_cache);
        add_test("test_x509_crl_tbs_cache",test_x509_crl_tbs_cache);
        add_test("test_asn1_item_verify",0x100000);
      }
    }
  }
  else {
    uVar2 = 0;
    test_error("test/x509_test.c",0xbc,"Must specify a certificate file self-signed with RSA-PSS.\n"
              );
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void cleanup_tests(void)

{
  EVP_MD_free(signmd);
  EVP_PKEY_free(pubkey);
  EVP_PKEY_free(privkey);
  return;
}


