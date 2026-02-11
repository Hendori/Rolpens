
undefined8 FuzzerInitialize(void)

{
  FuzzerSetRand();
  pctx = ASN1_PCTX_new();
  ASN1_PCTX_set_flags(pctx,0x8f);
  ASN1_PCTX_set_str_flags(pctx,0xd0);
  OPENSSL_init_crypto(2,0);
  OPENSSL_init_ssl(0x200000,0);
  ERR_clear_error();
  CRYPTO_free_ex_index(0,0xffffffff);
  return 1;
}



undefined8 FuzzerTestOneInput(uchar *param_1,long param_2)

{
  int iVar1;
  code *pcVar2;
  ASN1_ITEM *it;
  ASN1_VALUE *ifld;
  BIO_METHOD *pBVar3;
  BIO *pBVar4;
  long lVar5;
  DH *pDVar6;
  DSA_SIG *a;
  DSA *pDVar7;
  RSA *a_00;
  EC_GROUP *x;
  EC_KEY *pEVar8;
  ECDSA_SIG *sig;
  EVP_PKEY *pkey;
  SSL_SESSION *ses;
  long *plVar9;
  long in_FS_OFFSET;
  uchar *local_50;
  uchar *local_48;
  long local_40;
  
  plVar9 = (long *)(item_type + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar2 = ACCESS_DESCRIPTION_it;
  do {
    local_48 = (uchar *)0x0;
    local_50 = param_1;
    it = (ASN1_ITEM *)(*pcVar2)();
    ifld = ASN1_item_d2i((ASN1_VALUE **)0x0,&local_50,param_2,it);
    if (ifld != (ASN1_VALUE *)0x0) {
      if ((long)local_50 - (long)param_1 < 10000) {
        pBVar3 = BIO_s_null();
        pBVar4 = BIO_new(pBVar3);
        if (pBVar4 != (BIO *)0x0) {
          ASN1_item_print(pBVar4,ifld,4,it,pctx);
          BIO_free(pBVar4);
        }
      }
      iVar1 = ASN1_item_i2d(ifld,&local_48,it);
      if (0 < iVar1) {
        CRYPTO_free(local_48);
      }
      ASN1_item_free(ifld,it);
    }
    pcVar2 = (code *)*plVar9;
    plVar9 = plVar9 + 1;
  } while (pcVar2 != (code *)0x0);
  local_48 = (uchar *)0x0;
  local_50 = param_1;
  lVar5 = d2i_TS_REQ(0,&local_50,param_2);
  if (lVar5 != 0) {
    pBVar3 = BIO_s_null();
    pBVar4 = BIO_new(pBVar3);
    if (pBVar4 != (BIO *)0x0) {
      TS_REQ_print_bio(pBVar4,lVar5);
      BIO_free(pBVar4);
    }
    i2d_TS_REQ(lVar5,&local_48);
    CRYPTO_free(local_48);
    TS_REQ_free();
  }
  local_48 = (uchar *)0x0;
  local_50 = param_1;
  lVar5 = d2i_TS_MSG_IMPRINT(0,&local_50,param_2);
  if (lVar5 != 0) {
    pBVar3 = BIO_s_null();
    pBVar4 = BIO_new(pBVar3);
    if (pBVar4 != (BIO *)0x0) {
      TS_MSG_IMPRINT_print_bio(pBVar4,lVar5);
      BIO_free(pBVar4);
    }
    i2d_TS_MSG_IMPRINT(lVar5,&local_48);
    CRYPTO_free(local_48);
    TS_MSG_IMPRINT_free();
  }
  local_48 = (uchar *)0x0;
  local_50 = param_1;
  lVar5 = d2i_TS_RESP(0,&local_50,param_2);
  if (lVar5 != 0) {
    pBVar3 = BIO_s_null();
    pBVar4 = BIO_new(pBVar3);
    if (pBVar4 != (BIO *)0x0) {
      TS_RESP_print_bio(pBVar4,lVar5);
      BIO_free(pBVar4);
    }
    i2d_TS_RESP(lVar5,&local_48);
    CRYPTO_free(local_48);
    TS_RESP_free();
  }
  local_48 = (uchar *)0x0;
  local_50 = param_1;
  lVar5 = d2i_TS_STATUS_INFO(0,&local_50,param_2);
  if (lVar5 != 0) {
    pBVar3 = BIO_s_null();
    pBVar4 = BIO_new(pBVar3);
    if (pBVar4 != (BIO *)0x0) {
      TS_STATUS_INFO_print_bio(pBVar4,lVar5);
      BIO_free(pBVar4);
    }
    i2d_TS_STATUS_INFO(lVar5,&local_48);
    CRYPTO_free(local_48);
    TS_STATUS_INFO_free();
  }
  local_48 = (uchar *)0x0;
  local_50 = param_1;
  lVar5 = d2i_TS_TST_INFO(0,&local_50,param_2);
  if (lVar5 != 0) {
    pBVar3 = BIO_s_null();
    pBVar4 = BIO_new(pBVar3);
    if (pBVar4 != (BIO *)0x0) {
      TS_TST_INFO_print_bio(pBVar4,lVar5);
      BIO_free(pBVar4);
    }
    i2d_TS_TST_INFO(lVar5,&local_48);
    CRYPTO_free(local_48);
    TS_TST_INFO_free();
  }
  local_48 = (uchar *)0x0;
  local_50 = param_1;
  lVar5 = d2i_TS_ACCURACY(0,&local_50,param_2);
  if (lVar5 != 0) {
    pBVar3 = BIO_s_null();
    pBVar4 = BIO_new(pBVar3);
    BIO_free(pBVar4);
    i2d_TS_ACCURACY(lVar5,&local_48);
    CRYPTO_free(local_48);
    TS_ACCURACY_free();
  }
  local_48 = (uchar *)0x0;
  local_50 = param_1;
  lVar5 = d2i_ESS_ISSUER_SERIAL(0,&local_50,param_2);
  if (lVar5 != 0) {
    pBVar3 = BIO_s_null();
    pBVar4 = BIO_new(pBVar3);
    BIO_free(pBVar4);
    i2d_ESS_ISSUER_SERIAL(lVar5,&local_48);
    CRYPTO_free(local_48);
    ESS_ISSUER_SERIAL_free();
  }
  local_48 = (uchar *)0x0;
  local_50 = param_1;
  lVar5 = d2i_ESS_CERT_ID(0,&local_50,param_2);
  if (lVar5 != 0) {
    pBVar3 = BIO_s_null();
    pBVar4 = BIO_new(pBVar3);
    BIO_free(pBVar4);
    i2d_ESS_CERT_ID(lVar5,&local_48);
    CRYPTO_free(local_48);
    ESS_CERT_ID_free();
  }
  local_48 = (uchar *)0x0;
  local_50 = param_1;
  lVar5 = d2i_ESS_SIGNING_CERT(0,&local_50,param_2);
  if (lVar5 != 0) {
    pBVar3 = BIO_s_null();
    pBVar4 = BIO_new(pBVar3);
    BIO_free(pBVar4);
    i2d_ESS_SIGNING_CERT(lVar5,&local_48);
    CRYPTO_free(local_48);
    ESS_SIGNING_CERT_free();
  }
  local_48 = (uchar *)0x0;
  local_50 = param_1;
  lVar5 = d2i_ESS_CERT_ID_V2(0,&local_50,param_2);
  if (lVar5 != 0) {
    pBVar3 = BIO_s_null();
    pBVar4 = BIO_new(pBVar3);
    BIO_free(pBVar4);
    i2d_ESS_CERT_ID_V2(lVar5,&local_48);
    CRYPTO_free(local_48);
    ESS_CERT_ID_V2_free();
  }
  local_48 = (uchar *)0x0;
  local_50 = param_1;
  lVar5 = d2i_ESS_SIGNING_CERT_V2(0,&local_50,param_2);
  if (lVar5 != 0) {
    pBVar3 = BIO_s_null();
    pBVar4 = BIO_new(pBVar3);
    BIO_free(pBVar4);
    i2d_ESS_SIGNING_CERT_V2(lVar5,&local_48);
    CRYPTO_free(local_48);
    ESS_SIGNING_CERT_V2_free();
  }
  local_48 = (uchar *)0x0;
  local_50 = param_1;
  pDVar6 = d2i_DHparams((DH **)0x0,&local_50,param_2);
  if (pDVar6 != (DH *)0x0) {
    pBVar3 = BIO_s_null();
    pBVar4 = BIO_new(pBVar3);
    BIO_free(pBVar4);
    i2d_DHparams(pDVar6,&local_48);
    CRYPTO_free(local_48);
    DH_free(pDVar6);
  }
  local_48 = (uchar *)0x0;
  local_50 = param_1;
  pDVar6 = (DH *)d2i_DHxparams(0,&local_50,param_2);
  if (pDVar6 != (DH *)0x0) {
    pBVar3 = BIO_s_null();
    pBVar4 = BIO_new(pBVar3);
    BIO_free(pBVar4);
    i2d_DHxparams(pDVar6,&local_48);
    CRYPTO_free(local_48);
    DH_free(pDVar6);
  }
  local_48 = (uchar *)0x0;
  local_50 = param_1;
  a = d2i_DSA_SIG((DSA_SIG **)0x0,&local_50,param_2);
  if (a != (DSA_SIG *)0x0) {
    pBVar3 = BIO_s_null();
    pBVar4 = BIO_new(pBVar3);
    BIO_free(pBVar4);
    i2d_DSA_SIG(a,&local_48);
    CRYPTO_free(local_48);
    DSA_SIG_free(a);
  }
  local_48 = (uchar *)0x0;
  local_50 = param_1;
  pDVar7 = d2i_DSAPrivateKey((DSA **)0x0,&local_50,param_2);
  if (pDVar7 != (DSA *)0x0) {
    pBVar3 = BIO_s_null();
    pBVar4 = BIO_new(pBVar3);
    BIO_free(pBVar4);
    i2d_DSAPrivateKey(pDVar7,&local_48);
    CRYPTO_free(local_48);
    DSA_free(pDVar7);
  }
  local_48 = (uchar *)0x0;
  local_50 = param_1;
  pDVar7 = d2i_DSAPublicKey((DSA **)0x0,&local_50,param_2);
  if (pDVar7 != (DSA *)0x0) {
    pBVar3 = BIO_s_null();
    pBVar4 = BIO_new(pBVar3);
    BIO_free(pBVar4);
    i2d_DSAPublicKey(pDVar7,&local_48);
    CRYPTO_free(local_48);
    DSA_free(pDVar7);
  }
  local_48 = (uchar *)0x0;
  local_50 = param_1;
  pDVar7 = d2i_DSAparams((DSA **)0x0,&local_50,param_2);
  if (pDVar7 != (DSA *)0x0) {
    pBVar3 = BIO_s_null();
    pBVar4 = BIO_new(pBVar3);
    BIO_free(pBVar4);
    i2d_DSAparams(pDVar7,&local_48);
    CRYPTO_free(local_48);
    DSA_free(pDVar7);
  }
  local_48 = (uchar *)0x0;
  local_50 = param_1;
  a_00 = d2i_RSAPublicKey((RSA **)0x0,&local_50,param_2);
  if (a_00 != (RSA *)0x0) {
    pBVar3 = BIO_s_null();
    pBVar4 = BIO_new(pBVar3);
    BIO_free(pBVar4);
    i2d_RSAPublicKey(a_00,&local_48);
    CRYPTO_free(local_48);
    RSA_free(a_00);
  }
  local_48 = (uchar *)0x0;
  local_50 = param_1;
  x = d2i_ECPKParameters((EC_GROUP **)0x0,&local_50,param_2);
  if (x != (EC_GROUP *)0x0) {
    pBVar3 = BIO_s_null();
    pBVar4 = BIO_new(pBVar3);
    if (pBVar4 != (BIO *)0x0) {
      ECPKParameters_print(pBVar4,x,0);
      BIO_free(pBVar4);
    }
    i2d_ECPKParameters(x,&local_48);
    CRYPTO_free(local_48);
    EC_GROUP_free(x);
  }
  local_48 = (uchar *)0x0;
  local_50 = param_1;
  pEVar8 = d2i_ECPrivateKey((EC_KEY **)0x0,&local_50,param_2);
  if (pEVar8 != (EC_KEY *)0x0) {
    pBVar3 = BIO_s_null();
    pBVar4 = BIO_new(pBVar3);
    if (pBVar4 != (BIO *)0x0) {
      EC_KEY_print(pBVar4,pEVar8,0);
      BIO_free(pBVar4);
    }
    i2d_ECPrivateKey(pEVar8,&local_48);
    CRYPTO_free(local_48);
    EC_KEY_free(pEVar8);
  }
  local_48 = (uchar *)0x0;
  local_50 = param_1;
  pEVar8 = d2i_ECParameters((EC_KEY **)0x0,&local_50,param_2);
  if (pEVar8 != (EC_KEY *)0x0) {
    pBVar3 = BIO_s_null();
    pBVar4 = BIO_new(pBVar3);
    if (pBVar4 != (BIO *)0x0) {
      ECParameters_print(pBVar4,pEVar8);
      BIO_free(pBVar4);
    }
    i2d_ECParameters(pEVar8,&local_48);
    CRYPTO_free(local_48);
    EC_KEY_free(pEVar8);
  }
  local_48 = (uchar *)0x0;
  local_50 = param_1;
  sig = d2i_ECDSA_SIG((ECDSA_SIG **)0x0,&local_50,param_2);
  if (sig != (ECDSA_SIG *)0x0) {
    pBVar3 = BIO_s_null();
    pBVar4 = BIO_new(pBVar3);
    BIO_free(pBVar4);
    i2d_ECDSA_SIG(sig,&local_48);
    CRYPTO_free(local_48);
    ECDSA_SIG_free(sig);
  }
  local_48 = (uchar *)0x0;
  local_50 = param_1;
  pkey = d2i_AutoPrivateKey((EVP_PKEY **)0x0,&local_50,param_2);
  if (pkey != (EVP_PKEY *)0x0) {
    pBVar3 = BIO_s_null();
    pBVar4 = BIO_new(pBVar3);
    if (pBVar4 != (BIO *)0x0) {
      EVP_PKEY_print_private(pBVar4,pkey,0,pctx);
      BIO_free(pBVar4);
    }
    i2d_PrivateKey(pkey,&local_48);
    CRYPTO_free(local_48);
    EVP_PKEY_free(pkey);
  }
  local_48 = (uchar *)0x0;
  local_50 = param_1;
  ses = d2i_SSL_SESSION((SSL_SESSION **)0x0,&local_50,param_2);
  if (ses != (SSL_SESSION *)0x0) {
    pBVar3 = BIO_s_null();
    pBVar4 = BIO_new(pBVar3);
    if (pBVar4 != (BIO *)0x0) {
      SSL_SESSION_print(pBVar4,ses);
      BIO_free(pBVar4);
    }
    i2d_SSL_SESSION(ses,&local_48);
    CRYPTO_free(local_48);
    SSL_SESSION_free(ses);
  }
  ERR_clear_error();
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void FuzzerCleanup(void)

{
  ASN1_PCTX_free(pctx);
  FuzzerClearRand();
  return;
}


