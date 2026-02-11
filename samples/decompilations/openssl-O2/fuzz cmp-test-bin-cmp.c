
undefined8 print_noop(void)

{
  return 1;
}



undefined8 allow_unprotected(void)

{
  return 1;
}



undefined8 clean_transaction(void)

{
  return 1;
}



undefined8 delayed_delivery(void)

{
  return 0;
}



undefined8 process_pollReq(void)

{
  ERR_new();
  ERR_set_debug("fuzz/cmp.c",0x9a,"process_pollReq");
  ERR_set_error(0x3a,0x9e,0);
  return 0;
}



undefined8 process_certConf(void)

{
  ERR_new();
  ERR_set_debug("fuzz/cmp.c",0x92,"process_certConf");
  ERR_set_error(0x3a,0x9e,0);
  return 0;
}



void process_error(void)

{
  ERR_new();
  ERR_set_debug("fuzz/cmp.c",0x8a,"process_error");
  ERR_set_error(0x3a,0x9e,0);
  return;
}



undefined8 process_genm(void)

{
  ERR_new();
  ERR_set_debug("fuzz/cmp.c",0x81,"process_genm");
  ERR_set_error(0x3a,0x9e,0);
  return 0;
}



undefined8 process_rr(void)

{
  ERR_new();
  ERR_set_debug("fuzz/cmp.c",0x78,"process_rr");
  ERR_set_error(0x3a,0x9e,0);
  return 0;
}



undefined8 process_cert_request(void)

{
  ERR_new();
  ERR_set_debug("fuzz/cmp.c",0x6f,"process_cert_request");
  ERR_set_error(0x3a,0x9e,0);
  return 0;
}



undefined8 transfer_cb(void)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = num_responses;
  num_responses = num_responses + 1;
  if (iVar1 < 3) {
    uVar2 = OSSL_CMP_CTX_get_transfer_cb_arg();
    uVar2 = OSSL_CMP_MSG_dup(uVar2);
    return uVar2;
  }
  return 0;
}



undefined8 FuzzerInitialize(void)

{
  FuzzerSetRand();
  OPENSSL_init_crypto(2,0);
  ERR_clear_error();
  CRYPTO_free_ex_index(0,0xffffffff);
  return 1;
}



undefined8 FuzzerTestOneInput(void *param_1,long param_2)

{
  int iVar1;
  BIO_METHOD *pBVar2;
  BIO *b;
  ASN1_VALUE *ifld;
  BIO *out;
  long lVar3;
  long lVar4;
  ASN1_ITEM *it;
  X509_NAME *name;
  ASN1_INTEGER *serial;
  X509 *pXVar5;
  undefined8 uVar6;
  
  if (param_2 == 0) {
    return 0;
  }
  pBVar2 = BIO_s_mem();
  b = BIO_new(pBVar2);
  iVar1 = BIO_write(b,param_1,(int)param_2);
  if (iVar1 != param_2) {
    OPENSSL_die("assertion failed: (size_t)BIO_write(in, buf, len) == len","fuzz/cmp.c",0xb3);
    uVar6 = FuzzerClearRand();
    return uVar6;
  }
  ifld = (ASN1_VALUE *)d2i_OSSL_CMP_MSG_bio(b,0);
  if (ifld == (ASN1_VALUE *)0x0) goto LAB_00100448;
  pBVar2 = BIO_s_null();
  out = BIO_new(pBVar2);
  lVar3 = OSSL_CMP_SRV_CTX_new(0,0);
  lVar4 = OSSL_CMP_CTX_new(0,0);
  i2d_OSSL_CMP_MSG_bio(out,ifld);
  it = (ASN1_ITEM *)OSSL_CMP_MSG_it();
  ASN1_item_print(out,ifld,4,it,(ASN1_PCTX *)0x0);
  BIO_free(out);
  if (lVar4 != 0) {
    name = X509_NAME_new();
    serial = ASN1_INTEGER_new();
    *(undefined4 *)(lVar4 + 0xc0) = 1;
    *(undefined4 *)(lVar4 + 0x14c) = 1;
    *(undefined4 *)(lVar4 + 0x1ac) = 0xffffffff;
    pXVar5 = X509_new();
    *(X509 **)(lVar4 + 0x1b0) = pXVar5;
    iVar1 = OSSL_CMP_CTX_set1_secretValue(lVar4,&_LC2,0);
    if (((((iVar1 == 0) || (*(X509 **)(lVar4 + 0x1b0) == (X509 *)0x0)) || (name == (X509_NAME *)0x0)
         ) || ((iVar1 = X509_set_issuer_name(*(X509 **)(lVar4 + 0x1b0),name),
               serial == (ASN1_INTEGER *)0x0 || (iVar1 == 0)))) ||
       (iVar1 = X509_set_serialNumber(*(X509 **)(lVar4 + 0x1b0),serial), iVar1 == 0))
    goto LAB_00100400;
    OSSL_CMP_CTX_set_transfer_cb(lVar4,transfer_cb);
    OSSL_CMP_CTX_set_transfer_cb_arg(lVar4,ifld);
    OSSL_CMP_CTX_set_log_cb(lVar4,0x100000);
    num_responses = 0;
    if (*(undefined4 **)(ifld + 8) == (undefined4 *)0x0) {
switchD_001003e6_caseD_0:
      ossl_cmp_msg_check_update(lVar4,ifld,allow_unprotected,0);
    }
    else {
      switch(**(undefined4 **)(ifld + 8)) {
      default:
        goto switchD_001003e6_caseD_0;
      case 1:
        OSSL_CMP_exec_certreq(lVar4,0,0);
        break;
      case 3:
        OSSL_CMP_exec_certreq(lVar4,2,0);
        OSSL_CMP_exec_certreq(lVar4,4,0);
        break;
      case 8:
        OSSL_CMP_exec_certreq(lVar4,7,0);
        break;
      case 0xc:
        OSSL_CMP_exec_RR_ses(lVar4);
        break;
      case 0x16:
        uVar6 = OSSL_CMP_exec_GENM_ses(lVar4);
        OPENSSL_sk_pop_free(uVar6,&OSSL_CMP_ITAV_free);
        break;
      case 0x1a:
        *(undefined4 *)(lVar4 + 0x1d0) = 3;
        OSSL_CMP_try_certreq(lVar4,2,0,0);
      }
    }
LAB_00100400:
    X509_NAME_free(name);
    ASN1_INTEGER_free(serial);
  }
  if (lVar3 != 0) {
    uVar6 = OSSL_CMP_SRV_CTX_get0_cmp_ctx(lVar3);
    iVar1 = OSSL_CMP_CTX_set_log_cb(uVar6,0x100000);
    if (((iVar1 != 0) &&
        (iVar1 = OSSL_CMP_SRV_CTX_init
                           (lVar3,0,process_cert_request,process_rr,process_genm,process_error,
                            process_certConf), iVar1 != 0)) &&
       (iVar1 = OSSL_CMP_SRV_CTX_init_trans
                          (lVar3,delayed_delivery,clean_transaction,process_pollReq), iVar1 != 0)) {
      uVar6 = OSSL_CMP_SRV_process_request(lVar3,ifld);
      OSSL_CMP_MSG_free(uVar6);
    }
  }
  OSSL_CMP_CTX_free(lVar4);
  OSSL_CMP_SRV_CTX_free(lVar3);
  OSSL_CMP_MSG_free(ifld);
LAB_00100448:
  BIO_free(b);
  ERR_clear_error();
  return 0;
}



void FuzzerCleanup(void)

{
  FuzzerClearRand();
  return;
}


