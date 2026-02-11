
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool test_spki_aid(X509_PUBKEY *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long in_FS_OFFSET;
  bool bVar5;
  ASN1_OBJECT *local_e8;
  X509_ALGOR *local_e0;
  undefined8 local_d8;
  uchar *local_d0;
  char *local_c8;
  undefined4 local_c0;
  undefined1 *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined2 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  local_48 = 0;
  local_b0 = __LC1;
  uStack_a8 = _UNK_00101908;
  local_e0 = (X509_ALGOR *)0x0;
  local_d8 = 0;
  local_d0 = (uchar *)0x0;
  local_c8 = "algorithm-id";
  local_c0 = 5;
  local_b8 = algid_prov_1;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = (undefined1  [16])0x0;
  iVar1 = X509_PUBKEY_get0_param((ASN1_OBJECT **)0x0,(uchar **)0x0,(int *)0x0,&local_e0,param_1);
  iVar1 = test_true("test/algorithmid_test.c",0x2b,
                    "X509_PUBKEY_get0_param(NULL, NULL, NULL, &alg, pubkey)",iVar1 != 0);
  if (iVar1 != 0) {
    uVar3 = X509_PUBKEY_get0(param_1);
    iVar1 = test_ptr("test/algorithmid_test.c",0x2c,"pkey = X509_PUBKEY_get0(pubkey)",uVar3);
    if (iVar1 != 0) {
      iVar1 = i2d_X509_ALGOR(local_e0,&local_d0);
      iVar2 = test_int_ge("test/algorithmid_test.c",0x2f,
                          "algid_legacy_len = i2d_X509_ALGOR(alg, &algid_legacy)",&_LC5,iVar1,0);
      if (iVar2 != 0) {
        X509_ALGOR_get0(&local_e8,(int *)0x0,(void **)0x0,local_e0);
        iVar2 = OBJ_obj2txt(local_78,0x32,local_e8,0);
        iVar2 = test_int_gt("test/algorithmid_test.c",0x33,"OBJ_obj2txt(name, sizeof(name), oid, 0)"
                            ,&_LC5,iVar2,0);
        if (iVar2 != 0) {
          lVar4 = evp_pkey_export_to_provider(uVar3,0,&local_d8,0);
          if (lVar4 == 0) {
            test_info("test/algorithmid_test.c",0x3e,
                      "The public key found in \'%s\' doesn\'t have provider support.  Skipping...",
                      param_2);
          }
          else {
            iVar2 = EVP_KEYMGMT_is_a(local_d8,local_78);
            iVar2 = test_true("test/algorithmid_test.c",0x45,"EVP_KEYMGMT_is_a(keymgmt, name)",
                              iVar2 != 0);
            if (iVar2 == 0) {
              test_info("test/algorithmid_test.c",0x46,
                        "The AlgorithmID key type (%s) for the public key found in \'%s\' doesn\'t match the key type of the extracted public key."
                        ,local_78,param_2);
            }
            else {
              uVar3 = EVP_KEYMGMT_gettable_params(local_d8);
              iVar2 = test_ptr("test/algorithmid_test.c",0x4e,
                               "gettable_params = EVP_KEYMGMT_gettable_params(keymgmt)",uVar3);
              if (iVar2 != 0) {
                uVar3 = OSSL_PARAM_locate_const(uVar3,"algorithm-id");
                iVar2 = test_ptr("test/algorithmid_test.c",0x4f,
                                 "OSSL_PARAM_locate_const(gettable_params, ALGORITHMID_NAME)",uVar3)
                ;
                if (iVar2 != 0) {
                  algid_prov_1[0] = 0;
                  iVar2 = evp_keymgmt_get_params(local_d8,lVar4,&local_c8);
                  iVar2 = test_true("test/algorithmid_test.c",0x58,
                                    "evp_keymgmt_get_params(keymgmt, keydata, params)",iVar2 != 0);
                  if (iVar2 != 0) {
                    iVar1 = test_mem_eq("test/algorithmid_test.c",0x5d,"algid_legacy","algid_prov",
                                        local_d0,(long)iVar1,algid_prov_1,uStack_a8);
                    bVar5 = iVar1 != 0;
                    goto LAB_001000f6;
                  }
                  goto LAB_001000f4;
                }
              }
              test_info("test/algorithmid_test.c",0x50,
                        "The %s provider keymgmt appears to lack support for algorithm-id.  Skipping..."
                        ,local_78);
            }
          }
          bVar5 = true;
          goto LAB_001000f6;
        }
      }
    }
  }
LAB_001000f4:
  bVar5 = false;
LAB_001000f6:
  EVP_KEYMGMT_free(local_d8);
  CRYPTO_free(local_d0);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4 test_spki_file(void)

{
  undefined4 uVar1;
  BIO *a;
  X509_PUBKEY *a_00;
  
  a = BIO_new_file(pubkey_filename,"r");
  if (a == (BIO *)0x0) {
    test_error("test/algorithmid_test.c",0xc3,"Couldn\'t open \'%s\' for reading\n",pubkey_filename)
    ;
    test_openssl_errors();
  }
  else {
    a_00 = (X509_PUBKEY *)PEM_read_bio_X509_PUBKEY(a,0,0,0);
    if (a_00 != (X509_PUBKEY *)0x0) {
      uVar1 = test_spki_aid(a_00,pubkey_filename);
      goto LAB_001003db;
    }
    test_error("test/algorithmid_test.c",0xc9,
               "\'%s\' doesn\'t appear to be a SubjectPublicKeyInfo in PEM format\n",pubkey_filename
              );
    test_openssl_errors();
  }
  uVar1 = 0;
  a_00 = (X509_PUBKEY *)0x0;
LAB_001003db:
  BIO_free(a);
  X509_PUBKEY_free(a_00);
  return uVar1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint test_x509_files(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  BIO *bp;
  BIO *bp_00;
  X509 *a;
  X509 *a_00;
  X509_ALGOR *b;
  undefined8 uVar6;
  char *pcVar7;
  undefined8 uVar8;
  char *pcVar9;
  char *pcVar10;
  long in_FS_OFFSET;
  undefined8 uVar11;
  int local_c0;
  int local_bc;
  ASN1_OBJECT *local_b8;
  X509_ALGOR *local_b0;
  undefined8 local_a8;
  uchar *local_a0;
  char *local_98;
  undefined4 local_90;
  undefined1 *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  bp = BIO_new_file(eecert_filename,"r");
  if (bp == (BIO *)0x0) {
    a = (X509 *)0x0;
    bp_00 = (BIO *)0x0;
    a_00 = (X509 *)0x0;
    uVar4 = 0;
    test_error("test/algorithmid_test.c",0xdd,"Couldn\'t open \'%s\' for reading\n",eecert_filename)
    ;
    test_openssl_errors();
    goto LAB_00100684;
  }
  bp_00 = BIO_new_file(cacert_filename,"r");
  if (bp_00 == (BIO *)0x0) {
    a = (X509 *)0x0;
    a_00 = (X509 *)0x0;
    uVar4 = 0;
    test_error("test/algorithmid_test.c",0xe2,"Couldn\'t open \'%s\' for reading\n",cacert_filename)
    ;
    test_openssl_errors();
    goto LAB_00100684;
  }
  a = PEM_read_bio_X509(bp,(X509 **)0x0,(undefined1 *)0x0,(void *)0x0);
  if (a == (X509 *)0x0) {
    a_00 = (X509 *)0x0;
    uVar4 = 0;
    test_error("test/algorithmid_test.c",0xe8,
               "\'%s\' doesn\'t appear to be a X.509 certificate in PEM format\n",eecert_filename);
    test_openssl_errors();
    goto LAB_00100684;
  }
  a_00 = PEM_read_bio_X509(bp_00,(X509 **)0x0,(undefined1 *)0x0,(void *)0x0);
  pcVar10 = eecert_filename;
  pcVar9 = cacert_filename;
  if (a_00 == (X509 *)0x0) {
    uVar4 = 0;
    test_error("test/algorithmid_test.c",0xee,
               "\'%s\' doesn\'t appear to be a X.509 certificate in PEM format\n",cacert_filename);
    test_openssl_errors();
    goto LAB_00100684;
  }
  local_b8 = (ASN1_OBJECT *)0x0;
  local_80 = __LC1;
  uStack_78 = _UNK_00101908;
  local_58 = (undefined1  [16])0x0;
  local_88 = algid_prov_0;
  local_b0 = (X509_ALGOR *)0x0;
  local_c0 = 0;
  local_bc = 0;
  local_a8 = 0;
  local_a0 = (uchar *)0x0;
  local_98 = "algorithm-id";
  local_90 = 5;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  X509_get0_signature(0,&local_b0,a);
  X509_ALGOR_get0(&local_b8,(int *)0x0,(void **)0x0,local_b0);
  b = (X509_ALGOR *)X509_get0_tbs_sigalg(a);
  iVar1 = X509_ALGOR_cmp(local_b0,b);
  iVar1 = test_int_eq("test/algorithmid_test.c",0x85,
                      "X509_ALGOR_cmp(alg, X509_get0_tbs_sigalg(eecert))",&_LC5,iVar1,0);
  if (iVar1 == 0) {
LAB_00100627:
    uVar5 = 0;
    uVar8 = 0;
  }
  else {
    iVar1 = OBJ_obj2nid(local_b8);
    iVar2 = test_int_ne("test/algorithmid_test.c",0x87,"sig_nid = OBJ_obj2nid(sig_oid)","NID_undef",
                        iVar1,0);
    if (iVar2 == 0) goto LAB_00100627;
    iVar2 = OBJ_find_sigid_algs(iVar1,&local_c0,&local_bc);
    iVar2 = test_true("test/algorithmid_test.c",0x88,
                      "OBJ_find_sigid_algs(sig_nid, &dig_nid, &pkey_nid)",iVar2 != 0);
    if (iVar2 == 0) goto LAB_00100627;
    uVar6 = X509_get0_pubkey(a_00);
    iVar2 = test_ptr("test/algorithmid_test.c",0x89,"pkey = X509_get0_pubkey(cacert)",uVar6);
    if (iVar2 == 0) goto LAB_00100627;
    pcVar7 = OBJ_nid2sn(local_bc);
    iVar2 = EVP_PKEY_is_a(uVar6,pcVar7);
    iVar2 = test_true("test/algorithmid_test.c",0x8c,"EVP_PKEY_is_a(pkey, OBJ_nid2sn(pkey_nid))",
                      iVar2 != 0);
    if (iVar2 == 0) {
      test_info("test/algorithmid_test.c",0x8d,
                "The \'%s\' pubkey can\'t be used to verify the \'%s\' signature",pcVar9,pcVar10);
      pcVar9 = OBJ_nid2sn(local_c0);
      pcVar10 = OBJ_nid2sn(local_bc);
      pcVar7 = OBJ_nid2sn(iVar1);
      test_info("test/algorithmid_test.c",0x8f,
                "Signature algorithm is %s (pkey type %s, hash type %s)",pcVar7,pcVar10,pcVar9);
      uVar6 = EVP_PKEY_get0_type_name(uVar6);
      test_info("test/algorithmid_test.c",0x91,"Pkey key type is %s",uVar6);
      goto LAB_00100627;
    }
    iVar1 = i2d_X509_ALGOR(local_b0,&local_a0);
    iVar2 = test_int_ge("test/algorithmid_test.c",0x95,
                        "algid_legacy_len = i2d_X509_ALGOR(alg, &algid_legacy)",&_LC5,iVar1,0);
    if (iVar2 == 0) goto LAB_00100627;
    uVar8 = EVP_MD_CTX_new();
    iVar2 = test_ptr("test/algorithmid_test.c",0x98,"mdctx = EVP_MD_CTX_new()",uVar8);
    if (iVar2 == 0) {
LAB_00100a90:
      pcVar9 = OBJ_nid2sn(local_c0);
      pcVar10 = OBJ_nid2sn(local_bc);
      uVar5 = 0;
      test_info("test/algorithmid_test.c",0x9c,
                "Couldn\'t initialize a DigestVerify operation with pkey type %s and hash type %s",
                pcVar10,pcVar9);
    }
    else {
      pcVar9 = OBJ_nid2sn(local_c0);
      uVar11 = 0;
      iVar2 = EVP_DigestVerifyInit_ex(uVar8,&local_a8,pcVar9,0,0,uVar6);
      iVar2 = test_true("test/algorithmid_test.c",0x99,
                        "EVP_DigestVerifyInit_ex(mdctx, &pctx, OBJ_nid2sn(dig_nid), NULL, NULL, pkey, NULL)"
                        ,iVar2 != 0);
      if (iVar2 == 0) goto LAB_00100a90;
      uVar6 = EVP_PKEY_CTX_gettable_params(local_a8,uVar11);
      iVar2 = test_ptr("test/algorithmid_test.c",0xa2,
                       "gettable_params = EVP_PKEY_CTX_gettable_params(pctx)",uVar6);
      if (iVar2 == 0) {
LAB_00100ad1:
        uVar5 = 1;
        pcVar9 = OBJ_nid2sn(local_bc);
        test_info("test/algorithmid_test.c",0xa4,
                  "The %s provider keymgmt appears to lack support for algorithm-id  Skipping...",
                  pcVar9);
      }
      else {
        uVar6 = OSSL_PARAM_locate_const(uVar6,"algorithm-id");
        iVar2 = test_ptr("test/algorithmid_test.c",0xa3,
                         "OSSL_PARAM_locate_const(gettable_params, ALGORITHMID_NAME)",uVar6);
        if (iVar2 == 0) goto LAB_00100ad1;
        algid_prov_0[0] = 0;
        iVar2 = EVP_PKEY_CTX_get_params(local_a8,&local_98);
        uVar5 = test_true("test/algorithmid_test.c",0xac,"EVP_PKEY_CTX_get_params(pctx, params)",
                          iVar2 != 0);
        if (uVar5 != 0) {
          iVar1 = test_mem_eq("test/algorithmid_test.c",0xb1,"algid_legacy","algid_prov",local_a0,
                              (long)iVar1,algid_prov_0,uStack_78);
          uVar5 = (uint)(iVar1 != 0);
        }
      }
    }
  }
  EVP_MD_CTX_free(uVar8);
  CRYPTO_free(local_a0);
  pcVar9 = eecert_filename;
  uVar6 = X509_get_X509_PUBKEY(a);
  uVar3 = test_spki_aid(uVar6,pcVar9);
  pcVar9 = cacert_filename;
  uVar6 = X509_get_X509_PUBKEY(a_00);
  uVar4 = test_spki_aid(uVar6,pcVar9);
  uVar4 = uVar3 & uVar5 & uVar4;
LAB_00100684:
  BIO_free(bp);
  BIO_free(bp_00);
  X509_free(a);
  X509_free(a_00);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined1 * test_get_options(void)

{
  return test_options_2;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 setup_tests(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 0;
LAB_00100b2e:
  iVar1 = opt_next();
  do {
    if (iVar1 == 0) {
      if (iVar3 + iVar2 == 0) {
        BIO_printf(_bio_err,"No test type given\n");
        return 0;
      }
      if (iVar3 + iVar2 == 2) {
        BIO_printf(_bio_err,"Only one test type may be given\n");
        return 0;
      }
      iVar1 = test_get_argument_count();
      if ((iVar1 == 1) && (iVar2 != 0)) {
        pubkey_filename = test_get_argument(0);
LAB_00100c65:
        if (pubkey_filename == 0) {
LAB_00100cbd:
          BIO_printf(_bio_err,"Missing -spki argument\n");
          return 0;
        }
        if (iVar3 == 0) goto LAB_00100bf7;
      }
      else if ((iVar1 == 2) && (iVar3 != 0)) {
        eecert_filename = test_get_argument(0);
        cacert_filename = test_get_argument(1);
        if ((iVar2 != 0) && (pubkey_filename == 0)) goto LAB_00100cbd;
      }
      else if (iVar2 != 0) goto LAB_00100c65;
      if ((eecert_filename == 0) || (cacert_filename == 0)) {
        BIO_printf(_bio_err,"Missing -x509 argument(s)\n");
        return 0;
      }
      add_test("test_x509_files",test_x509_files);
      if (iVar2 == 0) {
        return 1;
      }
LAB_00100bf7:
      add_test("test_spki_file",test_spki_file);
      return 1;
    }
    if (iVar1 == 2) {
      iVar2 = 1;
      goto LAB_00100b2e;
    }
    if (2 < iVar1) break;
    if (iVar1 != 1) {
      return 0;
    }
    iVar3 = 1;
    iVar1 = opt_next();
  } while( true );
  if (5 < iVar1 - 500U) {
    return 0;
  }
  goto LAB_00100b2e;
}


