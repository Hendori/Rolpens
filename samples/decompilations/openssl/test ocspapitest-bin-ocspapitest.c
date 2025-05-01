
undefined8 test_access_description(int param_1)

{
  int iVar1;
  ACCESS_DESCRIPTION *a;
  GENERAL_NAME *pGVar2;
  
  a = ACCESS_DESCRIPTION_new();
  iVar1 = test_ptr("test/ocspapitest.c",0xa2,&_LC0,a);
  if (iVar1 == 0) {
    return 0;
  }
  if (param_1 == 1) {
    iVar1 = test_ptr("test/ocspapitest.c",0xa9,"ad->location",a->location);
    if (iVar1 == 0) {
      return 0;
    }
    GENERAL_NAME_free(a->location);
    a->location = (GENERAL_NAME *)0x0;
    ACCESS_DESCRIPTION_free(a);
  }
  else {
    if (param_1 == 2) {
      GENERAL_NAME_free(a->location);
      pGVar2 = GENERAL_NAME_new();
      a->location = pGVar2;
      iVar1 = test_ptr("test/ocspapitest.c",0xb1,"ad->location",pGVar2);
      if (iVar1 == 0) {
        return 0;
      }
    }
    ACCESS_DESCRIPTION_free(a);
  }
  return 1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

OCSP_BASICRESP * make_dummy_resp(void)

{
  int iVar1;
  OCSP_BASICRESP *rsp;
  time_t tVar2;
  ASN1_TIME *thisupd;
  ASN1_TIME *nextupd;
  X509_NAME *name;
  ASN1_BIT_STRING *a;
  ASN1_INTEGER *serialNumber;
  EVP_MD *dgst;
  OCSP_SINGLERESP *pOVar3;
  OCSP_BASICRESP *pOVar4;
  long in_FS_OFFSET;
  OCSP_CERTID *local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  uchar local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_d8 = 0x6d6f63;
  local_e8 = __LC14;
  uStack_e0 = _UNK_00101028;
  local_b8 = (undefined1  [16])0x0;
  local_a8 = (undefined1  [16])0x0;
  local_98 = (undefined1  [16])0x0;
  local_88 = (undefined1  [16])0x0;
  local_78 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  local_c8[0] = '\a';
  local_c8[1] = '\0';
  local_c8[2] = '\0';
  local_c8[3] = '\0';
  local_c8[4] = '\0';
  local_c8[5] = '\0';
  local_c8[6] = '\0';
  local_c8[7] = '\0';
  local_c8[8] = '\0';
  local_c8[9] = '\0';
  local_c8[10] = '\0';
  local_c8[0xb] = '\0';
  local_c8[0xc] = '\0';
  local_c8[0xd] = '\0';
  local_c8[0xe] = '\0';
  local_c8[0xf] = '\0';
  rsp = OCSP_BASICRESP_new();
  tVar2 = time((time_t *)0x0);
  thisupd = ASN1_TIME_set((ASN1_TIME *)0x0,tVar2);
  tVar2 = time((time_t *)0x0);
  nextupd = ASN1_TIME_set((ASN1_TIME *)0x0,tVar2 + 200);
  name = X509_NAME_new();
  a = ASN1_BIT_STRING_new();
  serialNumber = ASN1_INTEGER_new();
  iVar1 = test_ptr("test/ocspapitest.c",0x51,&_LC3,name);
  if (iVar1 == 0) {
LAB_00100390:
    local_f0 = (OCSP_CERTID *)0x0;
  }
  else {
    iVar1 = test_ptr("test/ocspapitest.c",0x52,&_LC4,a);
    if (iVar1 == 0) goto LAB_00100390;
    iVar1 = test_ptr("test/ocspapitest.c",0x53,"serial",serialNumber);
    if (iVar1 == 0) goto LAB_00100390;
    iVar1 = X509_NAME_add_entry_by_NID(name,0xd,0x1001,(uchar *)&local_e8,-1,-1,1);
    iVar1 = test_true("test/ocspapitest.c",0x54,
                      "X509_NAME_add_entry_by_NID(name, NID_commonName, MBSTRING_ASC, namestr, -1, -1, 1)"
                      ,iVar1 != 0);
    if (iVar1 == 0) goto LAB_00100390;
    iVar1 = ASN1_BIT_STRING_set(a,local_c8,0x80);
    iVar1 = test_true("test/ocspapitest.c",0x57,
                      "ASN1_BIT_STRING_set(key, keybytes, sizeof(keybytes))",iVar1 != 0);
    if (iVar1 == 0) goto LAB_00100390;
    iVar1 = ASN1_INTEGER_set_uint64(serialNumber,1);
    iVar1 = test_true("test/ocspapitest.c",0x58,"ASN1_INTEGER_set_uint64(serial, (uint64_t)1)",
                      iVar1 != 0);
    if (iVar1 == 0) goto LAB_00100390;
    dgst = EVP_sha256();
    local_f0 = OCSP_cert_id_new(dgst,name,a,serialNumber);
    iVar1 = test_ptr("test/ocspapitest.c",0x5b,&_LC9,rsp);
    if (iVar1 != 0) {
      iVar1 = test_ptr("test/ocspapitest.c",0x5c,"thisupd",thisupd);
      if (iVar1 != 0) {
        iVar1 = test_ptr("test/ocspapitest.c",0x5d,"nextupd",nextupd);
        if (iVar1 != 0) {
          iVar1 = test_ptr("test/ocspapitest.c",0x5e,&_LC12);
          if (iVar1 != 0) {
            pOVar3 = OCSP_basic_add1_status(rsp,local_f0,2,0,(ASN1_TIME *)0x0,thisupd,nextupd);
            iVar1 = test_true("test/ocspapitest.c",0x5f,
                              "OCSP_basic_add1_status(bs, cid, V_OCSP_CERTSTATUS_UNKNOWN, 0, NULL, thisupd, nextupd)"
                              ,pOVar3 != (OCSP_SINGLERESP *)0x0);
            if (iVar1 != 0) {
              pOVar4 = rsp;
              rsp = (OCSP_BASICRESP *)0x0;
              goto LAB_0010039c;
            }
          }
        }
      }
    }
  }
  pOVar4 = (OCSP_BASICRESP *)0x0;
LAB_0010039c:
  ASN1_TIME_free(thisupd);
  ASN1_TIME_free(nextupd);
  ASN1_BIT_STRING_free(a);
  ASN1_INTEGER_free(serialNumber);
  OCSP_CERTID_free(local_f0);
  OCSP_BASICRESP_free(rsp);
  X509_NAME_free(name);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pOVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 test_ocsp_url_svcloc_new(void)

{
  int iVar1;
  BIO *bp;
  X509_NAME *issuer;
  X509_EXTENSION *a;
  X509 *a_00;
  undefined8 uVar2;
  
  bp = BIO_new_file(certstr,"r");
  iVar1 = test_ptr("test/ocspapitest.c",0x37,"certbio = BIO_new_file(certstr, \"r\")");
  if (iVar1 != 0) {
    a_00 = PEM_read_bio_X509(bp,(X509 **)0x0,(undefined1 *)0x0,(void *)0x0);
    BIO_free(bp);
    iVar1 = test_ptr("test/ocspapitest.c",0x3b,&_LC18,a_00);
    uVar2 = 1;
    if (iVar1 != 0) goto LAB_00100459;
    X509_free(a_00);
  }
  a_00 = (X509 *)0x0;
  uVar2 = 0;
LAB_00100459:
  iVar1 = test_true("test/ocspapitest.c",199,"get_cert(&issuer)",uVar2);
  if (iVar1 != 0) {
    issuer = X509_get_issuer_name(a_00);
    a = OCSP_url_svcloc_new(issuer,(char **)urls_0);
    iVar1 = test_ptr("test/ocspapitest.c",0xce,&_LC20,a);
    if (iVar1 != 0) {
      X509_EXTENSION_free(a);
      X509_free(a_00);
      return 1;
    }
  }
  X509_free(a_00);
  return 0;
}



uint test_resp_signer(void)

{
  uint uVar1;
  int iVar2;
  OCSP_BASICRESP *brsp;
  undefined8 uVar3;
  BIO *pBVar4;
  EVP_MD *pEVar5;
  X509 *a;
  EVP_PKEY *pkey;
  undefined8 uVar6;
  long in_FS_OFFSET;
  X509 *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  brsp = (OCSP_BASICRESP *)make_dummy_resp();
  uVar3 = OPENSSL_sk_new_null();
  uVar1 = test_ptr("test/ocspapitest.c",0x7e,&_LC9,brsp);
  if ((uVar1 == 0) || (uVar1 = test_ptr("test/ocspapitest.c",0x7f,"extra_certs",uVar3), uVar1 == 0))
  {
    pkey = (EVP_PKEY *)0x0;
    a = (X509 *)0x0;
    goto LAB_0010058d;
  }
  pBVar4 = BIO_new_file(certstr,"r");
  iVar2 = test_ptr("test/ocspapitest.c",0x1f,"certbio = BIO_new_file(certstr, \"r\")");
  if (iVar2 == 0) {
LAB_00100630:
    pkey = (EVP_PKEY *)0x0;
    a = (X509 *)0x0;
    uVar6 = 0;
  }
  else {
    a = PEM_read_bio_X509(pBVar4,(X509 **)0x0,(undefined1 *)0x0,(void *)0x0);
    pkey = (EVP_PKEY *)0x0;
    BIO_free(pBVar4);
    pBVar4 = BIO_new_file(privkeystr,"r");
    iVar2 = test_ptr("test/ocspapitest.c",0x23,"keybio = BIO_new_file(privkeystr, \"r\")");
    if (iVar2 == 0) {
LAB_001008a7:
      X509_free(a);
      EVP_PKEY_free(pkey);
      goto LAB_00100630;
    }
    pkey = PEM_read_bio_PrivateKey(pBVar4,(EVP_PKEY **)0x0,(undefined1 *)0x0,(void *)0x0);
    BIO_free(pBVar4);
    iVar2 = test_ptr("test/ocspapitest.c",0x27,&_LC18,a);
    if (iVar2 == 0) goto LAB_001008a7;
    iVar2 = test_ptr("test/ocspapitest.c",0x27,&_LC4,pkey);
    uVar6 = 1;
    if (iVar2 == 0) goto LAB_001008a7;
  }
  iVar2 = test_true("test/ocspapitest.c",0x80,"get_cert_and_key(&signer, &key)",uVar6);
  if (iVar2 != 0) {
    iVar2 = OPENSSL_sk_push(uVar3,a);
    iVar2 = test_true("test/ocspapitest.c",0x81,"sk_X509_push(extra_certs, signer)",iVar2 != 0);
    if (iVar2 != 0) {
      pEVar5 = EVP_sha1();
      iVar2 = OCSP_basic_sign(brsp,a,pkey,pEVar5,(stack_st_X509 *)0x0,1);
      iVar2 = test_true("test/ocspapitest.c",0x82,
                        "OCSP_basic_sign(bs, signer, key, EVP_sha1(), NULL, OCSP_NOCERTS)",
                        iVar2 != 0);
      if (iVar2 != 0) {
        iVar2 = OCSP_resp_get0_signer(brsp,&local_48,uVar3);
        uVar1 = test_true("test/ocspapitest.c",0x85,"OCSP_resp_get0_signer(bs, &tmp, extra_certs)",
                          iVar2 != 0);
        if (uVar1 == 0) goto LAB_0010058d;
        X509_cmp(local_48,a);
        iVar2 = test_int_eq("test/ocspapitest.c",0x86,"X509_cmp(tmp, signer)",&_LC27);
        if (iVar2 != 0) {
          OCSP_BASICRESP_free(brsp);
          brsp = (OCSP_BASICRESP *)make_dummy_resp();
          local_48 = (X509 *)0x0;
          iVar2 = test_ptr("test/ocspapitest.c",0x8d,&_LC9,brsp);
          if (iVar2 != 0) {
            pEVar5 = EVP_sha1();
            iVar2 = OCSP_basic_sign(brsp,a,pkey,pEVar5,(stack_st_X509 *)0x0,0);
            iVar2 = test_true("test/ocspapitest.c",0x8e,
                              "OCSP_basic_sign(bs, signer, key, EVP_sha1(), NULL, 0)",iVar2 != 0);
            if (iVar2 != 0) {
              iVar2 = OCSP_resp_get0_signer(brsp,&local_48,0);
              iVar2 = test_true("test/ocspapitest.c",0x91,"OCSP_resp_get0_signer(bs, &tmp, NULL)",
                                iVar2 != 0);
              if (iVar2 != 0) {
                iVar2 = X509_cmp(local_48,a);
                iVar2 = test_int_eq("test/ocspapitest.c",0x92,"X509_cmp(tmp, signer)",&_LC27,iVar2,0
                                   );
                uVar1 = (uint)(iVar2 != 0);
                goto LAB_0010058d;
              }
            }
          }
        }
      }
    }
  }
  uVar1 = 0;
LAB_0010058d:
  OCSP_BASICRESP_free(brsp);
  OPENSSL_sk_free(uVar3);
  X509_free(a);
  EVP_PKEY_free(pkey);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}



undefined1 * test_get_options(void)

{
  return options_1;
}



undefined8 setup_tests(void)

{
  int iVar1;
  
  iVar1 = test_skip_common_options();
  if (iVar1 == 0) {
    test_error("test/ocspapitest.c",0xdf,"Error parsing test options\n");
  }
  else {
    certstr = test_get_argument(0);
    iVar1 = test_ptr("test/ocspapitest.c",0xe3,"certstr = test_get_argument(0)",certstr);
    if (iVar1 != 0) {
      privkeystr = test_get_argument(1);
      iVar1 = test_ptr("test/ocspapitest.c",0xe4,"privkeystr = test_get_argument(1)",privkeystr);
      if (iVar1 != 0) {
        add_test("test_resp_signer",test_resp_signer);
        add_all_tests("test_access_description",0x100000,3,1);
        add_test("test_ocsp_url_svcloc_new",test_ocsp_url_svcloc_new);
        return 1;
      }
    }
  }
  return 0;
}


