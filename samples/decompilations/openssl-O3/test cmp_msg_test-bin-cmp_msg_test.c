
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint execute_certconf_create_test_isra_0(undefined8 param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (param_3 == 0) {
    uVar3 = ossl_cmp_certConf_new(param_1,0,param_2,0);
    uVar1 = test_ptr_null("test/cmp_msg_test.c",0x6d,
                          "msg = (ossl_cmp_certConf_new (fixture->cmp_ctx, 0, fixture->fail_info, ((void *)0)))"
                          ,uVar3);
  }
  else {
    uVar3 = ossl_cmp_certConf_new(param_1,0,param_2,0);
    uVar1 = test_ptr("test/cmp_msg_test.c",0x6d,
                     "msg = (ossl_cmp_certConf_new (fixture->cmp_ctx, 0, fixture->fail_info, ((void *)0)))"
                     ,uVar3);
    if (uVar1 != 0) {
      iVar2 = valid_asn1_encoding(uVar3);
      iVar2 = test_true("test/cmp_msg_test.c",0x6d,"valid_asn1_encoding(msg)",iVar2 != 0);
      uVar1 = (uint)(iVar2 != 0);
    }
  }
  OSSL_CMP_MSG_free(uVar3);
  ERR_print_errors_fp(_stderr);
  return uVar1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint execute_certreq_create_test_isra_0(undefined8 param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (param_3 == 0) {
    uVar3 = ossl_cmp_certreq_new(param_1,param_2,0);
    uVar1 = test_ptr_null("test/cmp_msg_test.c",0x5a,
                          "msg = (ossl_cmp_certreq_new(fixture->cmp_ctx, fixture->bodytype, ((void *)0)))"
                          ,uVar3);
  }
  else {
    uVar3 = ossl_cmp_certreq_new(param_1,param_2,0);
    uVar1 = test_ptr("test/cmp_msg_test.c",0x5a,
                     "msg = (ossl_cmp_certreq_new(fixture->cmp_ctx, fixture->bodytype, ((void *)0)))"
                     ,uVar3);
    if (uVar1 != 0) {
      iVar2 = valid_asn1_encoding(uVar3);
      iVar2 = test_true("test/cmp_msg_test.c",0x5a,"valid_asn1_encoding(msg)",iVar2 != 0);
      uVar1 = (uint)(iVar2 != 0);
    }
  }
  OSSL_CMP_MSG_free(uVar3);
  ERR_print_errors_fp(_stderr);
  return uVar1;
}



undefined8 * set_up(undefined8 param_1)

{
  int iVar1;
  undefined8 *ptr;
  undefined8 uVar2;
  
  ptr = (undefined8 *)CRYPTO_zalloc(0x38,"test/cmp_msg_test.c",0x34);
  iVar1 = test_ptr("test/cmp_msg_test.c",0x34,"fixture = OPENSSL_zalloc(sizeof(*fixture))",ptr);
  if (iVar1 != 0) {
    *ptr = param_1;
    uVar2 = OSSL_CMP_CTX_new(libctx,0);
    ptr[1] = uVar2;
    iVar1 = test_ptr("test/cmp_msg_test.c",0x38,"fixture->cmp_ctx = OSSL_CMP_CTX_new(libctx, NULL)",
                     uVar2);
    if (iVar1 != 0) {
      iVar1 = OSSL_CMP_CTX_set_option(ptr[1],0x1e,1);
      iVar1 = test_true("test/cmp_msg_test.c",0x39,"SET_OPT_UNPROTECTED_SEND(fixture->cmp_ctx, 1)",
                        iVar1 != 0);
      if (iVar1 != 0) {
        iVar1 = OSSL_CMP_CTX_set1_referenceValue(ptr[1],ref,0xf);
        iVar1 = test_true("test/cmp_msg_test.c",0x3a,
                          "OSSL_CMP_CTX_set1_referenceValue(fixture->cmp_ctx, ref, sizeof(ref))",
                          iVar1 != 0);
        if (iVar1 != 0) {
          return ptr;
        }
      }
    }
    OSSL_CMP_CTX_free(ptr[1]);
    OSSL_CMP_MSG_free(ptr[4]);
    OSSL_CMP_PKISI_free(ptr[6]);
    CRYPTO_free(ptr);
  }
  return (undefined8 *)0x0;
}



uint test_cmp_create_pollrep(void)

{
  uint uVar1;
  int iVar2;
  void *ptr;
  long lVar3;
  undefined8 uVar4;
  
  uVar1 = 0;
  ptr = (void *)set_up("test_cmp_create_pollrep");
  if (ptr != (void *)0x0) {
    lVar3 = ossl_cmp_pollRep_new(*(undefined8 *)((long)ptr + 8),0x4d,2000);
    uVar1 = test_ptr("test/cmp_msg_test.c",0x1d9,"pollrep",lVar3);
    if (uVar1 != 0) {
      uVar4 = ossl_cmp_pollrepcontent_get0_pollrep(*(undefined8 *)(*(long *)(lVar3 + 8) + 8),0x4d);
      iVar2 = test_ptr("test/cmp_msg_test.c",0x1db,
                       "ossl_cmp_pollrepcontent_get0_pollrep(pollrep->body-> value.pollRep, 77)",
                       uVar4);
      if (iVar2 == 0) {
        OSSL_CMP_MSG_free(lVar3);
        uVar1 = 0;
      }
      else {
        uVar4 = ossl_cmp_pollrepcontent_get0_pollrep(*(undefined8 *)(*(long *)(lVar3 + 8) + 8),0x58)
        ;
        iVar2 = test_ptr_null("test/cmp_msg_test.c",0x1de,
                              "ossl_cmp_pollrepcontent_get0_pollrep(pollrep->body-> value.pollRep, 88)"
                              ,uVar4);
        uVar1 = (uint)(iVar2 != 0);
        OSSL_CMP_MSG_free(lVar3);
      }
    }
    OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 8));
    OSSL_CMP_MSG_free(*(undefined8 *)((long)ptr + 0x20));
    OSSL_CMP_PKISI_free(*(undefined8 *)((long)ptr + 0x30));
    CRYPTO_free(ptr);
  }
  return uVar1;
}



bool test_cmp_create_certrep(void)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  int iVar3;
  void *ptr;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  X509 *pXVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  
  ptr = (void *)set_up("test_cmp_create_certrep");
  if (ptr == (void *)0x0) {
    return false;
  }
  uVar1 = *(undefined8 *)((long)ptr + 8);
  lVar4 = OSSL_CMP_CERTREPMESSAGE_new();
  puVar5 = (undefined8 *)OSSL_CMP_CERTRESPONSE_new();
  if (((lVar4 != 0) && (puVar5 != (undefined8 *)0x0)) &&
     (iVar3 = ASN1_INTEGER_set((ASN1_INTEGER *)*puVar5,99), iVar3 != 0)) {
    puVar6 = (undefined8 *)OSSL_CMP_CERTIFIEDKEYPAIR_new();
    puVar5[2] = puVar6;
    pXVar7 = cert;
    if (puVar6 != (undefined8 *)0x0) {
      puVar2 = (undefined4 *)*puVar6;
      *puVar2 = 0;
      pXVar7 = X509_dup(pXVar7);
      *(X509 **)(puVar2 + 2) = pXVar7;
      if ((pXVar7 != (X509 *)0x0) &&
         (iVar3 = OPENSSL_sk_push(*(undefined8 *)(lVar4 + 8),puVar5), iVar3 != 0)) {
        uVar8 = ossl_cmp_certrepmessage_get0_certresponse(lVar4,99);
        iVar3 = test_ptr("test/cmp_msg_test.c",0x192,"read_cresp",uVar8);
        if (iVar3 != 0) {
          uVar9 = ossl_cmp_certrepmessage_get0_certresponse(lVar4,0x58);
          iVar3 = test_ptr_null("test/cmp_msg_test.c",0x194,
                                "ossl_cmp_certrepmessage_get0_certresponse(crepmsg, 88)",uVar9);
          if (iVar3 != 0) {
            pXVar7 = (X509 *)ossl_cmp_certresponse_get1_cert(uVar1,uVar8);
            if (pXVar7 == (X509 *)0x0) {
              puVar5 = (undefined8 *)0x0;
              bVar10 = false;
            }
            else {
              iVar3 = X509_cmp(cert,pXVar7);
              iVar3 = test_int_eq("test/cmp_msg_test.c",0x197,"X509_cmp(cert, certfromresp)",&_LC13,
                                  iVar3,0);
              bVar10 = iVar3 != 0;
              puVar5 = (undefined8 *)0x0;
            }
            goto LAB_00100419;
          }
        }
        bVar10 = false;
        pXVar7 = (X509 *)0x0;
        puVar5 = (undefined8 *)0x0;
        goto LAB_00100419;
      }
    }
  }
  bVar10 = false;
  pXVar7 = (X509 *)0x0;
LAB_00100419:
  X509_free(pXVar7);
  OSSL_CMP_CERTRESPONSE_free(puVar5);
  OSSL_CMP_CERTREPMESSAGE_free(lVar4);
  OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 8));
  OSSL_CMP_MSG_free(*(undefined8 *)((long)ptr + 0x20));
  OSSL_CMP_PKISI_free(*(undefined8 *)((long)ptr + 0x30));
  CRYPTO_free(ptr);
  return bVar10;
}



uint test_cmp_create_rp(void)

{
  int iVar1;
  uint uVar2;
  void *ptr;
  long lVar3;
  X509_NAME *name;
  ASN1_INTEGER *a;
  long lVar4;
  undefined8 uVar5;
  long local_40;
  
  uVar2 = 0;
  ptr = (void *)set_up("test_cmp_create_rp");
  if (ptr != (void *)0x0) {
    lVar3 = OSSL_CMP_STATUSINFO_new(0x21,0x2c,"a text");
    name = X509_NAME_new();
    a = ASN1_INTEGER_new();
    if ((((lVar3 == 0 || name == (X509_NAME *)0x0) || (a == (ASN1_INTEGER *)0x0)) ||
        (iVar1 = X509_NAME_add_entry_by_txt(name,"CN",0x1001,(uchar *)"The Issuer",-1,-1,0),
        iVar1 == 0)) ||
       ((iVar1 = ASN1_INTEGER_set(a,99), iVar1 == 0 ||
        (local_40 = OSSL_CRMF_CERTID_gen(name,a), local_40 == 0)))) {
      uVar2 = 0;
      lVar4 = 0;
      local_40 = 0;
    }
    else {
      lVar4 = ossl_cmp_rp_new(*(undefined8 *)((long)ptr + 8),lVar3,local_40,1);
      if (lVar4 != 0) {
        uVar5 = ossl_cmp_revrepcontent_get_CertId(*(undefined8 *)(*(long *)(lVar4 + 8) + 8),0);
        uVar2 = test_ptr("test/cmp_msg_test.c",0x1bc,
                         "ossl_cmp_revrepcontent_get_CertId(rpmsg->body->value.rp, 0)",uVar5);
        if (uVar2 != 0) {
          uVar5 = ossl_cmp_revrepcontent_get_pkisi(*(undefined8 *)(*(long *)(lVar4 + 8) + 8),0);
          iVar1 = test_ptr("test/cmp_msg_test.c",0x1bf,
                           "ossl_cmp_revrepcontent_get_pkisi(rpmsg->body->value.rp, 0)",uVar5);
          uVar2 = (uint)(iVar1 != 0);
        }
      }
    }
    ASN1_INTEGER_free(a);
    X509_NAME_free(name);
    OSSL_CRMF_CERTID_free(local_40);
    OSSL_CMP_PKISI_free(lVar3);
    OSSL_CMP_MSG_free(lVar4);
    OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 8));
    OSSL_CMP_MSG_free(*(undefined8 *)((long)ptr + 0x20));
    OSSL_CMP_PKISI_free(*(undefined8 *)((long)ptr + 0x30));
    CRYPTO_free(ptr);
    return uVar2;
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint test_cmp_create_pollreq(void)

{
  uint uVar1;
  int iVar2;
  void *ptr;
  undefined8 uVar3;
  
  uVar1 = 0;
  ptr = (void *)set_up("test_cmp_create_pollreq");
  if (ptr != (void *)0x0) {
    *(undefined4 *)((long)ptr + 0x28) = 1;
    uVar3 = ossl_cmp_pollReq_new(*(undefined8 *)((long)ptr + 8),0x1267);
    uVar1 = test_ptr("test/cmp_msg_test.c",0x79,
                     "msg = (ossl_cmp_pollReq_new(fixture->cmp_ctx, 4711))",uVar3);
    if (uVar1 != 0) {
      iVar2 = valid_asn1_encoding(uVar3);
      iVar2 = test_true("test/cmp_msg_test.c",0x79,"valid_asn1_encoding(msg)",iVar2 != 0);
      uVar1 = (uint)(iVar2 != 0);
    }
    OSSL_CMP_MSG_free(uVar3);
    ERR_print_errors_fp(_stderr);
    OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 8));
    OSSL_CMP_MSG_free(*(undefined8 *)((long)ptr + 0x20));
    OSSL_CMP_PKISI_free(*(undefined8 *)((long)ptr + 0x30));
    CRYPTO_free(ptr);
  }
  return uVar1;
}



undefined4 test_cmp_create_p10cr_null(void)

{
  undefined8 uVar1;
  EVP_PKEY *pkey;
  int iVar2;
  undefined4 uVar3;
  void *ptr;
  undefined8 uVar4;
  
  ptr = (void *)set_up("test_cmp_create_p10cr_null");
  uVar4 = _LC21;
  pkey = newkey;
  if (ptr != (void *)0x0) {
    *(undefined4 *)((long)ptr + 0x28) = 0;
    uVar1 = *(undefined8 *)((long)ptr + 8);
    *(undefined8 *)((long)ptr + 0x10) = uVar4;
    iVar2 = EVP_PKEY_up_ref(pkey);
    if (iVar2 == 0) {
      uVar4 = 0;
    }
    else {
      iVar2 = OSSL_CMP_CTX_set0_newPkey(uVar1,1,pkey);
      uVar4 = 1;
      if (iVar2 == 0) {
        EVP_PKEY_free(pkey);
        uVar4 = 0;
      }
    }
    iVar2 = test_true("test/cmp_msg_test.c",0xf7,"set1_newPkey(fixture->cmp_ctx, newkey)",uVar4);
    if (iVar2 != 0) {
      uVar3 = execute_certreq_create_test_isra_0
                        (*(undefined8 *)((long)ptr + 8),*(undefined4 *)((long)ptr + 0x10),
                         *(undefined4 *)((long)ptr + 0x28));
      OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 8));
      OSSL_CMP_MSG_free(*(undefined8 *)((long)ptr + 0x20));
      OSSL_CMP_PKISI_free(*(undefined8 *)((long)ptr + 0x30));
      CRYPTO_free(ptr);
      return uVar3;
    }
    OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 8));
    OSSL_CMP_MSG_free(*(undefined8 *)((long)ptr + 0x20));
    OSSL_CMP_PKISI_free(*(undefined8 *)((long)ptr + 0x30));
    CRYPTO_free(ptr);
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 test_cmp_create_cr_without_key(void)

{
  undefined4 uVar1;
  void *ptr;
  undefined8 uVar2;
  
  uVar1 = 0;
  ptr = (void *)set_up("test_cmp_create_cr_without_key");
  uVar2 = _LC23;
  if (ptr != (void *)0x0) {
    *(undefined4 *)((long)ptr + 0x28) = 0;
    *(undefined8 *)((long)ptr + 0x10) = uVar2;
    uVar2 = ossl_cmp_certreq_new(*(undefined8 *)((long)ptr + 8),2,0);
    uVar1 = test_ptr_null("test/cmp_msg_test.c",0x5a,
                          "msg = (ossl_cmp_certreq_new(fixture->cmp_ctx, fixture->bodytype, ((void *)0)))"
                          ,uVar2);
    OSSL_CMP_MSG_free(uVar2);
    ERR_print_errors_fp(_stderr);
    OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 8));
    OSSL_CMP_MSG_free(*(undefined8 *)((long)ptr + 0x20));
    OSSL_CMP_PKISI_free(*(undefined8 *)((long)ptr + 0x30));
    CRYPTO_free(ptr);
  }
  return uVar1;
}



undefined4 test_cmp_create_cr(void)

{
  undefined8 uVar1;
  EVP_PKEY *pkey;
  int iVar2;
  undefined4 uVar3;
  void *ptr;
  undefined8 uVar4;
  
  ptr = (void *)set_up("test_cmp_create_cr");
  uVar4 = _LC23;
  pkey = newkey;
  if (ptr != (void *)0x0) {
    *(undefined4 *)((long)ptr + 0x28) = 1;
    uVar1 = *(undefined8 *)((long)ptr + 8);
    *(undefined8 *)((long)ptr + 0x10) = uVar4;
    iVar2 = EVP_PKEY_up_ref(pkey);
    if (iVar2 == 0) {
      uVar4 = 0;
    }
    else {
      iVar2 = OSSL_CMP_CTX_set0_newPkey(uVar1,1,pkey);
      uVar4 = 1;
      if (iVar2 == 0) {
        EVP_PKEY_free(pkey);
        uVar4 = 0;
      }
    }
    iVar2 = test_true("test/cmp_msg_test.c",0xc6,"set1_newPkey(fixture->cmp_ctx, newkey)",uVar4);
    if (iVar2 != 0) {
      uVar3 = execute_certreq_create_test_isra_0
                        (*(undefined8 *)((long)ptr + 8),*(undefined4 *)((long)ptr + 0x10),
                         *(undefined4 *)((long)ptr + 0x28));
      OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 8));
      OSSL_CMP_MSG_free(*(undefined8 *)((long)ptr + 0x20));
      OSSL_CMP_PKISI_free(*(undefined8 *)((long)ptr + 0x30));
      CRYPTO_free(ptr);
      return uVar3;
    }
    OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 8));
    OSSL_CMP_MSG_free(*(undefined8 *)((long)ptr + 0x20));
    OSSL_CMP_PKISI_free(*(undefined8 *)((long)ptr + 0x30));
    CRYPTO_free(ptr);
  }
  return 0;
}



undefined4 test_cmp_create_kur_without_oldcert(void)

{
  undefined8 uVar1;
  EVP_PKEY *pkey;
  int iVar2;
  undefined4 uVar3;
  void *ptr;
  undefined8 uVar4;
  
  ptr = (void *)set_up("test_cmp_create_kur_without_oldcert");
  uVar4 = _LC24;
  pkey = newkey;
  if (ptr != (void *)0x0) {
    *(undefined4 *)((long)ptr + 0x28) = 0;
    uVar1 = *(undefined8 *)((long)ptr + 8);
    *(undefined8 *)((long)ptr + 0x10) = uVar4;
    iVar2 = EVP_PKEY_up_ref(pkey);
    if (iVar2 == 0) {
      uVar4 = 0;
    }
    else {
      iVar2 = OSSL_CMP_CTX_set0_newPkey(uVar1,1,pkey);
      uVar4 = 1;
      if (iVar2 == 0) {
        EVP_PKEY_free(pkey);
        uVar4 = 0;
      }
    }
    iVar2 = test_true("test/cmp_msg_test.c",0x114,"set1_newPkey(fixture->cmp_ctx, newkey)",uVar4);
    if (iVar2 != 0) {
      uVar3 = execute_certreq_create_test_isra_0
                        (*(undefined8 *)((long)ptr + 8),*(undefined4 *)((long)ptr + 0x10),
                         *(undefined4 *)((long)ptr + 0x28));
      OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 8));
      OSSL_CMP_MSG_free(*(undefined8 *)((long)ptr + 0x20));
      OSSL_CMP_PKISI_free(*(undefined8 *)((long)ptr + 0x30));
      CRYPTO_free(ptr);
      return uVar3;
    }
    OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 8));
    OSSL_CMP_MSG_free(*(undefined8 *)((long)ptr + 0x20));
    OSSL_CMP_PKISI_free(*(undefined8 *)((long)ptr + 0x30));
    CRYPTO_free(ptr);
  }
  return 0;
}



undefined4 test_cmp_create_certreq_with_invalid_bodytype(void)

{
  undefined8 uVar1;
  EVP_PKEY *pkey;
  int iVar2;
  undefined4 uVar3;
  void *ptr;
  undefined8 uVar4;
  
  ptr = (void *)set_up("test_cmp_create_certreq_with_invalid_bodytype");
  uVar4 = _LC25;
  pkey = newkey;
  if (ptr != (void *)0x0) {
    *(undefined4 *)((long)ptr + 0x28) = 0;
    uVar1 = *(undefined8 *)((long)ptr + 8);
    *(undefined8 *)((long)ptr + 0x10) = uVar4;
    iVar2 = EVP_PKEY_up_ref(pkey);
    if (iVar2 == 0) {
      uVar4 = 0;
    }
    else {
      iVar2 = OSSL_CMP_CTX_set0_newPkey(uVar1,1,pkey);
      uVar4 = 1;
      if (iVar2 == 0) {
        EVP_PKEY_free(pkey);
        uVar4 = 0;
      }
    }
    iVar2 = test_true("test/cmp_msg_test.c",0xd4,"set1_newPkey(fixture->cmp_ctx, newkey)",uVar4);
    if (iVar2 != 0) {
      uVar3 = execute_certreq_create_test_isra_0
                        (*(undefined8 *)((long)ptr + 8),*(undefined4 *)((long)ptr + 0x10),
                         *(undefined4 *)((long)ptr + 0x28));
      OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 8));
      OSSL_CMP_MSG_free(*(undefined8 *)((long)ptr + 0x20));
      OSSL_CMP_PKISI_free(*(undefined8 *)((long)ptr + 0x30));
      CRYPTO_free(ptr);
      return uVar3;
    }
    OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 8));
    OSSL_CMP_MSG_free(*(undefined8 *)((long)ptr + 0x20));
    OSSL_CMP_PKISI_free(*(undefined8 *)((long)ptr + 0x30));
    CRYPTO_free(ptr);
  }
  return 0;
}



undefined4 test_cmp_create_certconf_fail_info_max(void)

{
  int iVar1;
  undefined4 uVar2;
  void *ptr;
  X509 *pXVar3;
  
  ptr = (void *)set_up("test_cmp_create_certconf_fail_info_max");
  if (ptr != (void *)0x0) {
    *(undefined4 *)((long)ptr + 0x18) = 0x4000000;
    pXVar3 = cert;
    *(undefined4 *)((long)ptr + 0x28) = 1;
    pXVar3 = X509_dup(pXVar3);
    iVar1 = ossl_cmp_ctx_set0_newCert(*(undefined8 *)((long)ptr + 8),pXVar3);
    iVar1 = test_true("test/cmp_msg_test.c",0x13d,
                      "ossl_cmp_ctx_set0_newCert(fixture->cmp_ctx, X509_dup(cert))",iVar1 != 0);
    if (iVar1 != 0) {
      uVar2 = execute_certconf_create_test_isra_0
                        (*(undefined8 *)((long)ptr + 8),*(undefined4 *)((long)ptr + 0x18),
                         *(undefined4 *)((long)ptr + 0x28));
      OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 8));
      OSSL_CMP_MSG_free(*(undefined8 *)((long)ptr + 0x20));
      OSSL_CMP_PKISI_free(*(undefined8 *)((long)ptr + 0x30));
      CRYPTO_free(ptr);
      return uVar2;
    }
    OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 8));
    OSSL_CMP_MSG_free(*(undefined8 *)((long)ptr + 0x20));
    OSSL_CMP_PKISI_free(*(undefined8 *)((long)ptr + 0x30));
    CRYPTO_free(ptr);
  }
  return 0;
}



undefined4 test_cmp_create_certconf_badAlg(void)

{
  int iVar1;
  undefined4 uVar2;
  void *ptr;
  X509 *pXVar3;
  
  ptr = (void *)set_up("test_cmp_create_certconf_badAlg");
  if (ptr != (void *)0x0) {
    *(undefined4 *)((long)ptr + 0x18) = 1;
    pXVar3 = cert;
    *(undefined4 *)((long)ptr + 0x28) = 1;
    pXVar3 = X509_dup(pXVar3);
    iVar1 = ossl_cmp_ctx_set0_newCert(*(undefined8 *)((long)ptr + 8),pXVar3);
    iVar1 = test_true("test/cmp_msg_test.c",0x12f,
                      "ossl_cmp_ctx_set0_newCert(fixture->cmp_ctx, X509_dup(cert))",iVar1 != 0);
    if (iVar1 != 0) {
      uVar2 = execute_certconf_create_test_isra_0
                        (*(undefined8 *)((long)ptr + 8),*(undefined4 *)((long)ptr + 0x18),
                         *(undefined4 *)((long)ptr + 0x28));
      OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 8));
      OSSL_CMP_MSG_free(*(undefined8 *)((long)ptr + 0x20));
      OSSL_CMP_PKISI_free(*(undefined8 *)((long)ptr + 0x30));
      CRYPTO_free(ptr);
      return uVar2;
    }
    OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 8));
    OSSL_CMP_MSG_free(*(undefined8 *)((long)ptr + 0x20));
    OSSL_CMP_PKISI_free(*(undefined8 *)((long)ptr + 0x30));
    CRYPTO_free(ptr);
  }
  return 0;
}



undefined4 test_cmp_create_certconf(void)

{
  int iVar1;
  undefined4 uVar2;
  void *ptr;
  X509 *pXVar3;
  
  ptr = (void *)set_up("test_cmp_create_certconf");
  if (ptr != (void *)0x0) {
    *(undefined4 *)((long)ptr + 0x18) = 0;
    pXVar3 = cert;
    *(undefined4 *)((long)ptr + 0x28) = 1;
    pXVar3 = X509_dup(pXVar3);
    iVar1 = ossl_cmp_ctx_set0_newCert(*(undefined8 *)((long)ptr + 8),pXVar3);
    iVar1 = test_true("test/cmp_msg_test.c",0x121,
                      "ossl_cmp_ctx_set0_newCert(fixture->cmp_ctx, X509_dup(cert))",iVar1 != 0);
    if (iVar1 != 0) {
      uVar2 = execute_certconf_create_test_isra_0
                        (*(undefined8 *)((long)ptr + 8),*(undefined4 *)((long)ptr + 0x18),
                         *(undefined4 *)((long)ptr + 0x28));
      OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 8));
      OSSL_CMP_MSG_free(*(undefined8 *)((long)ptr + 0x20));
      OSSL_CMP_PKISI_free(*(undefined8 *)((long)ptr + 0x30));
      CRYPTO_free(ptr);
      return uVar2;
    }
    OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 8));
    OSSL_CMP_MSG_free(*(undefined8 *)((long)ptr + 0x20));
    OSSL_CMP_PKISI_free(*(undefined8 *)((long)ptr + 0x30));
    CRYPTO_free(ptr);
  }
  return 0;
}



undefined4 test_cmp_create_ir_protection_set(void)

{
  undefined8 uVar1;
  EVP_PKEY *pkey;
  undefined8 uVar2;
  undefined4 uVar3;
  int iVar4;
  void *ptr;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined1 local_48 [24];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  ptr = (void *)set_up("test_cmp_create_ir_protection_set");
  uVar5 = _LC27;
  if (ptr != (void *)0x0) {
    uVar1 = *(undefined8 *)((long)ptr + 8);
    *(undefined4 *)((long)ptr + 0x28) = 1;
    uVar2 = libctx;
    *(undefined8 *)((long)ptr + 0x10) = uVar5;
    uVar3 = RAND_bytes_ex(uVar2,local_48,0x10,0);
    iVar4 = test_int_eq("test/cmp_msg_test.c",0x99,&_LC29,
                        "RAND_bytes_ex(libctx, secret, sizeof(secret), 0)",1,uVar3);
    if (iVar4 != 0) {
      iVar4 = OSSL_CMP_CTX_set_option(uVar1,0x1e,0);
      iVar4 = test_true("test/cmp_msg_test.c",0x9a,"SET_OPT_UNPROTECTED_SEND(ctx, 0)",iVar4 != 0);
      pkey = newkey;
      if (iVar4 != 0) {
        iVar4 = EVP_PKEY_up_ref(newkey);
        if (iVar4 == 0) {
          uVar5 = 0;
        }
        else {
          iVar4 = OSSL_CMP_CTX_set0_newPkey(uVar1,1,pkey);
          uVar5 = 1;
          if (iVar4 == 0) {
            EVP_PKEY_free(pkey);
            uVar5 = 0;
          }
        }
        iVar4 = test_true("test/cmp_msg_test.c",0x9b,"set1_newPkey(ctx, newkey)",uVar5);
        if (iVar4 != 0) {
          iVar4 = OSSL_CMP_CTX_set1_secretValue(uVar1,local_48,0x10);
          iVar4 = test_true("test/cmp_msg_test.c",0x9c,
                            "OSSL_CMP_CTX_set1_secretValue(ctx, secret, sizeof(secret))",iVar4 != 0)
          ;
          if (iVar4 != 0) {
            uVar3 = execute_certreq_create_test_isra_0
                              (*(undefined8 *)((long)ptr + 8),*(undefined4 *)((long)ptr + 0x10),
                               *(undefined4 *)((long)ptr + 0x28));
            OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 8));
            OSSL_CMP_MSG_free(*(undefined8 *)((long)ptr + 0x20));
            OSSL_CMP_PKISI_free(*(undefined8 *)((long)ptr + 0x30));
            CRYPTO_free(ptr);
            goto LAB_00101135;
          }
        }
      }
    }
    OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 8));
    OSSL_CMP_MSG_free(*(undefined8 *)((long)ptr + 0x20));
    OSSL_CMP_PKISI_free(*(undefined8 *)((long)ptr + 0x30));
    CRYPTO_free(ptr);
  }
  uVar3 = 0;
LAB_00101135:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4 test_cmp_create_p10cr(void)

{
  undefined8 uVar1;
  EVP_PKEY *pkey;
  undefined8 uVar2;
  int iVar3;
  undefined4 uVar4;
  void *ptr;
  X509_REQ *a;
  undefined8 uVar5;
  
  ptr = (void *)set_up("test_cmp_create_p10cr");
  uVar5 = _LC21;
  if (ptr != (void *)0x0) {
    uVar1 = *(undefined8 *)((long)ptr + 8);
    *(undefined4 *)((long)ptr + 0x28) = 1;
    uVar2 = libctx;
    *(undefined8 *)((long)ptr + 0x10) = uVar5;
    a = (X509_REQ *)load_csr_der(pkcs10_f,uVar2);
    iVar3 = test_ptr("test/cmp_msg_test.c",0xe6,"p10cr = load_csr_der(pkcs10_f, libctx)",a);
    pkey = newkey;
    if (iVar3 != 0) {
      iVar3 = EVP_PKEY_up_ref(newkey);
      if (iVar3 == 0) {
        uVar5 = 0;
      }
      else {
        iVar3 = OSSL_CMP_CTX_set0_newPkey(uVar1,1,pkey);
        uVar5 = 1;
        if (iVar3 == 0) {
          EVP_PKEY_free(pkey);
          uVar5 = 0;
        }
      }
      iVar3 = test_true("test/cmp_msg_test.c",0xe7,"set1_newPkey(ctx, newkey)",uVar5);
      if (iVar3 != 0) {
        iVar3 = OSSL_CMP_CTX_set1_p10CSR(uVar1,a);
        iVar3 = test_true("test/cmp_msg_test.c",0xe8,"OSSL_CMP_CTX_set1_p10CSR(ctx, p10cr)",
                          iVar3 != 0);
        if (iVar3 != 0) {
          X509_REQ_free(a);
          uVar4 = execute_certreq_create_test_isra_0
                            (*(undefined8 *)((long)ptr + 8),*(undefined4 *)((long)ptr + 0x10),
                             *(undefined4 *)((long)ptr + 0x28));
          OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 8));
          OSSL_CMP_MSG_free(*(undefined8 *)((long)ptr + 0x20));
          OSSL_CMP_PKISI_free(*(undefined8 *)((long)ptr + 0x30));
          CRYPTO_free(ptr);
          return uVar4;
        }
      }
    }
    OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 8));
    OSSL_CMP_MSG_free(*(undefined8 *)((long)ptr + 0x20));
    OSSL_CMP_PKISI_free(*(undefined8 *)((long)ptr + 0x30));
    CRYPTO_free(ptr);
    X509_REQ_free(a);
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint test_cmp_create_rr(void)

{
  int iVar1;
  uint uVar2;
  void *ptr;
  undefined8 uVar3;
  
  ptr = (void *)set_up("test_cmp_create_rr");
  if (ptr != (void *)0x0) {
    *(undefined4 *)((long)ptr + 0x28) = 1;
    iVar1 = OSSL_CMP_CTX_set1_oldCert(*(undefined8 *)((long)ptr + 8),cert);
    iVar1 = test_true("test/cmp_msg_test.c",0x162,
                      "OSSL_CMP_CTX_set1_oldCert(fixture->cmp_ctx, cert)",iVar1 != 0);
    if (iVar1 != 0) {
      if (*(int *)((long)ptr + 0x28) == 0) {
        uVar3 = ossl_cmp_rr_new(*(undefined8 *)((long)ptr + 8));
        uVar2 = test_ptr_null("test/cmp_msg_test.c",0x68,"msg = (ossl_cmp_rr_new(fixture->cmp_ctx))"
                              ,uVar3);
      }
      else {
        uVar3 = ossl_cmp_rr_new(*(undefined8 *)((long)ptr + 8));
        uVar2 = test_ptr("test/cmp_msg_test.c",0x68,"msg = (ossl_cmp_rr_new(fixture->cmp_ctx))",
                         uVar3);
        if (uVar2 != 0) {
          iVar1 = valid_asn1_encoding(uVar3);
          iVar1 = test_true("test/cmp_msg_test.c",0x68,"valid_asn1_encoding(msg)",iVar1 != 0);
          uVar2 = (uint)(iVar1 != 0);
        }
      }
      OSSL_CMP_MSG_free(uVar3);
      ERR_print_errors_fp(_stderr);
      OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 8));
      OSSL_CMP_MSG_free(*(undefined8 *)((long)ptr + 0x20));
      OSSL_CMP_PKISI_free(*(undefined8 *)((long)ptr + 0x30));
      CRYPTO_free(ptr);
      return uVar2;
    }
    OSSL_CMP_CTX_free();
    OSSL_CMP_MSG_free(*(undefined8 *)((long)ptr + 0x20));
    OSSL_CMP_PKISI_free(*(undefined8 *)((long)ptr + 0x30));
    CRYPTO_free(ptr);
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint test_cmp_create_error_msg(void)

{
  EVP_PKEY *pkey;
  int iVar1;
  uint uVar2;
  void *ptr;
  undefined8 uVar3;
  
  ptr = (void *)set_up("test_cmp_create_error_msg");
  if (ptr != (void *)0x0) {
    uVar3 = OSSL_CMP_STATUSINFO_new(2,0x19,0);
    pkey = newkey;
    *(undefined4 *)((long)ptr + 0x14) = 0xffffffff;
    *(undefined8 *)((long)ptr + 0x30) = uVar3;
    uVar3 = *(undefined8 *)((long)ptr + 8);
    *(undefined4 *)((long)ptr + 0x28) = 1;
    iVar1 = EVP_PKEY_up_ref(pkey);
    if (iVar1 == 0) {
      uVar3 = 0;
    }
    else {
      iVar1 = OSSL_CMP_CTX_set0_newPkey(uVar3,1,pkey);
      uVar3 = 1;
      if (iVar1 == 0) {
        EVP_PKEY_free(pkey);
        uVar3 = 0;
      }
    }
    iVar1 = test_true("test/cmp_msg_test.c",0x14e,"set1_newPkey(fixture->cmp_ctx, newkey)",uVar3);
    if (iVar1 != 0) {
      if (*(int *)((long)ptr + 0x28) == 0) {
        uVar3 = ossl_cmp_error_new(*(undefined8 *)((long)ptr + 8),*(undefined8 *)((long)ptr + 0x30),
                                   (long)*(int *)((long)ptr + 0x14),"details",0);
        uVar2 = test_ptr_null("test/cmp_msg_test.c",0x61,
                              "msg = (ossl_cmp_error_new(fixture->cmp_ctx, fixture->si, fixture->err_code, \"details\", 0))"
                              ,uVar3);
      }
      else {
        uVar3 = ossl_cmp_error_new(*(undefined8 *)((long)ptr + 8),*(undefined8 *)((long)ptr + 0x30),
                                   (long)*(int *)((long)ptr + 0x14),"details",0);
        uVar2 = test_ptr("test/cmp_msg_test.c",0x61,
                         "msg = (ossl_cmp_error_new(fixture->cmp_ctx, fixture->si, fixture->err_code, \"details\", 0))"
                         ,uVar3);
        if (uVar2 != 0) {
          iVar1 = valid_asn1_encoding(uVar3);
          iVar1 = test_true("test/cmp_msg_test.c",0x61,"valid_asn1_encoding(msg)",iVar1 != 0);
          uVar2 = (uint)(iVar1 != 0);
        }
      }
      OSSL_CMP_MSG_free(uVar3);
      ERR_print_errors_fp(_stderr);
      OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 8));
      OSSL_CMP_MSG_free(*(undefined8 *)((long)ptr + 0x20));
      OSSL_CMP_PKISI_free(*(undefined8 *)((long)ptr + 0x30));
      CRYPTO_free(ptr);
      return uVar2;
    }
    OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 8));
    OSSL_CMP_MSG_free(*(undefined8 *)((long)ptr + 0x20));
    OSSL_CMP_PKISI_free(*(undefined8 *)((long)ptr + 0x30));
    CRYPTO_free(ptr);
  }
  return 0;
}



undefined4 test_cmp_create_kur(void)

{
  undefined8 uVar1;
  EVP_PKEY *pkey;
  int iVar2;
  undefined4 uVar3;
  void *ptr;
  undefined8 uVar4;
  
  ptr = (void *)set_up("test_cmp_create_kur");
  uVar4 = _LC24;
  pkey = newkey;
  if (ptr != (void *)0x0) {
    *(undefined4 *)((long)ptr + 0x28) = 1;
    uVar1 = *(undefined8 *)((long)ptr + 8);
    *(undefined8 *)((long)ptr + 0x10) = uVar4;
    iVar2 = EVP_PKEY_up_ref(pkey);
    if (iVar2 == 0) {
      uVar4 = 0;
    }
    else {
      iVar2 = OSSL_CMP_CTX_set0_newPkey(uVar1,1,pkey);
      uVar4 = 1;
      if (iVar2 == 0) {
        EVP_PKEY_free(pkey);
        uVar4 = 0;
      }
    }
    iVar2 = test_true("test/cmp_msg_test.c",0x105,"set1_newPkey(fixture->cmp_ctx, newkey)",uVar4);
    if (iVar2 != 0) {
      iVar2 = OSSL_CMP_CTX_set1_oldCert(*(undefined8 *)((long)ptr + 8),cert);
      iVar2 = test_true("test/cmp_msg_test.c",0x106,
                        "OSSL_CMP_CTX_set1_oldCert(fixture->cmp_ctx, cert)",iVar2 != 0);
      if (iVar2 != 0) {
        uVar3 = execute_certreq_create_test_isra_0
                          (*(undefined8 *)((long)ptr + 8),*(undefined4 *)((long)ptr + 0x10),
                           *(undefined4 *)((long)ptr + 0x28));
        OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 8));
        OSSL_CMP_MSG_free(*(undefined8 *)((long)ptr + 0x20));
        OSSL_CMP_PKISI_free(*(undefined8 *)((long)ptr + 0x30));
        CRYPTO_free(ptr);
        return uVar3;
      }
    }
    OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 8));
    OSSL_CMP_MSG_free(*(undefined8 *)((long)ptr + 0x20));
    OSSL_CMP_PKISI_free(*(undefined8 *)((long)ptr + 0x30));
    CRYPTO_free(ptr);
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint test_cmp_create_genm(void)

{
  int iVar1;
  uint uVar2;
  void *ptr;
  ASN1_OBJECT *pAVar3;
  undefined8 uVar4;
  
  ptr = (void *)set_up("test_cmp_create_genm");
  if (ptr != (void *)0x0) {
    *(undefined4 *)((long)ptr + 0x28) = 1;
    pAVar3 = OBJ_nid2obj(0x136);
    uVar4 = OSSL_CMP_ITAV_create(pAVar3,0);
    iVar1 = test_ptr("test/cmp_msg_test.c",0x171,&_LC39,uVar4);
    if (iVar1 != 0) {
      iVar1 = OSSL_CMP_CTX_push0_genm_ITAV(*(undefined8 *)((long)ptr + 8),uVar4);
      iVar1 = test_true("test/cmp_msg_test.c",0x172,
                        "OSSL_CMP_CTX_push0_genm_ITAV(fixture->cmp_ctx, iv)",iVar1 != 0);
      if (iVar1 != 0) {
        if (*(int *)((long)ptr + 0x28) == 0) {
          uVar4 = ossl_cmp_genm_new(*(undefined8 *)((long)ptr + 8));
          uVar2 = test_ptr_null("test/cmp_msg_test.c",0x74,
                                "msg = (ossl_cmp_genm_new(fixture->cmp_ctx))",uVar4);
        }
        else {
          uVar4 = ossl_cmp_genm_new(*(undefined8 *)((long)ptr + 8));
          uVar2 = test_ptr("test/cmp_msg_test.c",0x74,"msg = (ossl_cmp_genm_new(fixture->cmp_ctx))",
                           uVar4);
          if (uVar2 != 0) {
            iVar1 = valid_asn1_encoding(uVar4);
            iVar1 = test_true("test/cmp_msg_test.c",0x74,"valid_asn1_encoding(msg)",iVar1 != 0);
            uVar2 = (uint)(iVar1 != 0);
          }
        }
        OSSL_CMP_MSG_free(uVar4);
        ERR_print_errors_fp(_stderr);
        OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 8));
        OSSL_CMP_MSG_free(*(undefined8 *)((long)ptr + 0x20));
        OSSL_CMP_PKISI_free(*(undefined8 *)((long)ptr + 0x30));
        CRYPTO_free(ptr);
        return uVar2;
      }
    }
    OSSL_CMP_ITAV_free(uVar4);
    OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 8));
    OSSL_CMP_MSG_free(*(undefined8 *)((long)ptr + 0x20));
    OSSL_CMP_PKISI_free(*(undefined8 *)((long)ptr + 0x30));
    CRYPTO_free(ptr);
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint test_cmp_pkimessage_create(uint param_1)

{
  int iVar1;
  uint uVar2;
  void *ptr;
  X509_REQ *a;
  undefined8 uVar3;
  
  ptr = (void *)set_up("test_cmp_pkimessage_create");
  if (ptr == (void *)0x0) {
    return 0;
  }
  *(uint *)((long)ptr + 0x10) = param_1;
  if (param_1 < 0x1b) {
    if ((1L << ((byte)param_1 & 0x3f) & 0x7e8198fU) != 0) {
      *(undefined4 *)((long)ptr + 0x28) = 1;
      uVar3 = *(undefined8 *)((long)ptr + 8);
LAB_00101b62:
      uVar3 = ossl_cmp_msg_create(uVar3,param_1);
      uVar2 = test_ptr("test/cmp_msg_test.c",0x7e,
                       "msg = (ossl_cmp_msg_create (fixture->cmp_ctx, fixture->bodytype))",uVar3);
      if (uVar2 != 0) {
        iVar1 = valid_asn1_encoding(uVar3);
        iVar1 = test_true("test/cmp_msg_test.c",0x7e,"valid_asn1_encoding(msg)",iVar1 != 0);
        uVar2 = (uint)(iVar1 != 0);
      }
      goto LAB_00101b8e;
    }
    if (param_1 != 4) goto LAB_00101be0;
    *(undefined4 *)((long)ptr + 0x28) = 1;
    a = (X509_REQ *)load_csr_der(pkcs10_f,libctx);
    iVar1 = OSSL_CMP_CTX_set1_p10CSR(*(undefined8 *)((long)ptr + 8),a);
    iVar1 = test_true("test/cmp_msg_test.c",0x1f9,
                      "OSSL_CMP_CTX_set1_p10CSR(fixture->cmp_ctx, p10cr)",iVar1 != 0);
    if (iVar1 == 0) {
      OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 8));
      OSSL_CMP_MSG_free(*(undefined8 *)((long)ptr + 0x20));
      OSSL_CMP_PKISI_free(*(undefined8 *)((long)ptr + 0x30));
      CRYPTO_free(ptr);
      X509_REQ_free(a);
      return 0;
    }
    X509_REQ_free(a);
    param_1 = *(uint *)((long)ptr + 0x10);
    uVar3 = *(undefined8 *)((long)ptr + 8);
    if (*(int *)((long)ptr + 0x28) != 0) goto LAB_00101b62;
  }
  else {
LAB_00101be0:
    *(undefined4 *)((long)ptr + 0x28) = 0;
    uVar3 = *(undefined8 *)((long)ptr + 8);
  }
  uVar3 = ossl_cmp_msg_create(uVar3,param_1);
  uVar2 = test_ptr_null("test/cmp_msg_test.c",0x7e,
                        "msg = (ossl_cmp_msg_create (fixture->cmp_ctx, fixture->bodytype))",uVar3);
LAB_00101b8e:
  OSSL_CMP_MSG_free(uVar3);
  ERR_print_errors_fp(_stderr);
  OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 8));
  OSSL_CMP_MSG_free(*(undefined8 *)((long)ptr + 0x20));
  OSSL_CMP_PKISI_free(*(undefined8 *)((long)ptr + 0x30));
  CRYPTO_free(ptr);
  return uVar2;
}



undefined4 test_cmp_create_ir_protection_fails(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 uVar4;
  void *ptr;
  
  ptr = (void *)set_up("test_cmp_create_ir_protection_fails");
  uVar2 = _LC27;
  uVar1 = newkey;
  if (ptr != (void *)0x0) {
    *(undefined4 *)((long)ptr + 0x28) = 0;
    *(undefined8 *)((long)ptr + 0x10) = uVar2;
    iVar3 = OSSL_CMP_CTX_set1_pkey(*(undefined8 *)((long)ptr + 8),uVar1);
    iVar3 = test_true("test/cmp_msg_test.c",0xab,"OSSL_CMP_CTX_set1_pkey(fixture->cmp_ctx, newkey)",
                      iVar3 != 0);
    if (iVar3 != 0) {
      iVar3 = OSSL_CMP_CTX_set_option(*(undefined8 *)((long)ptr + 8),0x1e,0);
      iVar3 = test_true("test/cmp_msg_test.c",0xac,"SET_OPT_UNPROTECTED_SEND(fixture->cmp_ctx, 0)",
                        iVar3 != 0);
      if (iVar3 != 0) {
        iVar3 = OSSL_CMP_CTX_set1_cert(*(undefined8 *)((long)ptr + 8),cert);
        iVar3 = test_true("test/cmp_msg_test.c",0xae,
                          "OSSL_CMP_CTX_set1_cert(fixture->cmp_ctx, cert)",iVar3 != 0);
        if (iVar3 != 0) {
          uVar4 = execute_certreq_create_test_isra_0
                            (*(undefined8 *)((long)ptr + 8),*(undefined4 *)((long)ptr + 0x10),
                             *(undefined4 *)((long)ptr + 0x28));
          OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 8));
          OSSL_CMP_MSG_free(*(undefined8 *)((long)ptr + 0x20));
          OSSL_CMP_PKISI_free(*(undefined8 *)((long)ptr + 0x30));
          CRYPTO_free(ptr);
          return uVar4;
        }
      }
    }
    OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 8));
    OSSL_CMP_MSG_free(*(undefined8 *)((long)ptr + 0x20));
    OSSL_CMP_PKISI_free(*(undefined8 *)((long)ptr + 0x30));
    CRYPTO_free(ptr);
  }
  return 0;
}



void cleanup_tests(void)

{
  EVP_PKEY_free(newkey);
  X509_free(cert);
  OSSL_PROVIDER_unload(default_null_provider);
  OSSL_PROVIDER_unload(provider);
  OSSL_LIB_CTX_free(libctx);
  return;
}



undefined1 * test_get_options(void)

{
  return options_20;
}



undefined8 setup_tests(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = test_skip_common_options();
  if (iVar1 == 0) {
    test_error("test/cmp_msg_test.c",0x228,"Error parsing test options\n");
  }
  else {
    newkey_f = test_get_argument(0);
    iVar1 = test_ptr("test/cmp_msg_test.c",0x22c,"newkey_f = test_get_argument(0)",newkey_f);
    if (iVar1 != 0) {
      server_cert_f = test_get_argument(1);
      iVar1 = test_ptr("test/cmp_msg_test.c",0x22d,"server_cert_f = test_get_argument(1)",
                       server_cert_f);
      if (iVar1 != 0) {
        pkcs10_f = test_get_argument(2);
        iVar1 = test_ptr("test/cmp_msg_test.c",0x22e,"pkcs10_f = test_get_argument(2)",pkcs10_f);
        if (iVar1 != 0) {
          iVar1 = test_arg_libctx(&libctx,&default_null_provider,&provider,3,
                                  "new.key server.crt pkcs10.der module_name [module_conf_file]\n");
          if (iVar1 == 0) {
            return 0;
          }
          newkey = (EVP_PKEY *)load_pkey_pem(newkey_f,libctx);
          iVar1 = test_ptr("test/cmp_msg_test.c",0x236,"newkey = load_pkey_pem(newkey_f, libctx)",
                           newkey);
          if (iVar1 != 0) {
            cert = (X509 *)load_cert_pem(server_cert_f,libctx);
            iVar1 = test_ptr("test/cmp_msg_test.c",0x237,
                             "cert = load_cert_pem(server_cert_f, libctx)",cert);
            if (iVar1 != 0) {
              uVar2 = RAND_bytes_ex(libctx,ref,0xf,0);
              iVar1 = test_int_eq("test/cmp_msg_test.c",0x238,&_LC29,
                                  "RAND_bytes_ex(libctx, ref, sizeof(ref), 0)",1,uVar2);
              if (iVar1 != 0) {
                add_test("test_cmp_create_certreq_with_invalid_bodytype",
                         test_cmp_create_certreq_with_invalid_bodytype);
                add_test("test_cmp_create_ir_protection_fails",test_cmp_create_ir_protection_fails);
                add_test("test_cmp_create_ir_protection_set",test_cmp_create_ir_protection_set);
                add_test("test_cmp_create_error_msg",test_cmp_create_error_msg);
                add_test("test_cmp_create_certconf",test_cmp_create_certconf);
                add_test("test_cmp_create_certconf_badAlg",test_cmp_create_certconf_badAlg);
                add_test("test_cmp_create_certconf_fail_info_max",
                         test_cmp_create_certconf_fail_info_max);
                add_test("test_cmp_create_kur",test_cmp_create_kur);
                add_test("test_cmp_create_kur_without_oldcert",test_cmp_create_kur_without_oldcert);
                add_test("test_cmp_create_cr",test_cmp_create_cr);
                add_test("test_cmp_create_cr_without_key",test_cmp_create_cr_without_key);
                add_test("test_cmp_create_p10cr",test_cmp_create_p10cr);
                add_test("test_cmp_create_p10cr_null",test_cmp_create_p10cr_null);
                add_test("test_cmp_create_pollreq",test_cmp_create_pollreq);
                add_test("test_cmp_create_rr",test_cmp_create_rr);
                add_test("test_cmp_create_rp",test_cmp_create_rp);
                add_test("test_cmp_create_genm",test_cmp_create_genm);
                add_test("test_cmp_create_certrep",test_cmp_create_certrep);
                add_test("test_cmp_create_pollrep",test_cmp_create_pollrep);
                add_all_tests("test_cmp_pkimessage_create",test_cmp_pkimessage_create,0x1b,0);
                return 1;
              }
            }
          }
          EVP_PKEY_free(newkey);
          X509_free(cert);
          OSSL_PROVIDER_unload(default_null_provider);
          OSSL_PROVIDER_unload(provider);
          OSSL_LIB_CTX_free(libctx);
          return 0;
        }
      }
    }
    test_error("test/cmp_msg_test.c",0x22f,"usage: cmp_msg_test %s",
               "new.key server.crt pkcs10.der module_name [module_conf_file]\n");
  }
  return 0;
}


