
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long process_responder(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6,int param_7,undefined8 param_8,
                      int param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  SSL_METHOD *meth;
  SSL_CTX *pSVar4;
  
  pSVar4 = (SSL_CTX *)0x0;
  if (param_7 == 1) {
    meth = (SSL_METHOD *)TLS_client_method();
    pSVar4 = SSL_CTX_new(meth);
    if (pSVar4 == (SSL_CTX *)0x0) {
      lVar3 = 0;
      BIO_printf(_bio_err,"Error creating SSL context.\n");
      goto LAB_00100089;
    }
  }
  uVar1 = OCSP_RESPONSE_it();
  uVar2 = OCSP_REQUEST_it();
  lVar3 = app_http_post_asn1(param_2,param_3,param_4,param_5,param_6,pSVar4,param_8,
                             "application/ocsp-request",param_1,uVar2,"application/ocsp-response",
                             (long)param_9,uVar1);
  if (lVar3 == 0) {
    BIO_printf(_bio_err,"Error querying OCSP responder\n");
  }
LAB_00100089:
  SSL_CTX_free(pSVar4);
  return lVar3;
}



/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 ocsp_main(undefined4 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  EVP_MD *pEVar10;
  OCSP_REQUEST *req;
  EVP_MD *dgst;
  long maxsec;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  BIO *pBVar16;
  OCSP_ONEREQ *pOVar17;
  OCSP_CERTID *pOVar18;
  EVP_MD *dgst_00;
  X509 *pXVar19;
  OCSP_CERTID *a;
  BIGNUM *a_00;
  OPENSSL_STRING *ppcVar20;
  EVP_MD_CTX *ctx;
  undefined8 uVar21;
  OCSP_RESPONSE *resp;
  X509_NAME *issuerName;
  ASN1_BIT_STRING *issuerKey;
  ASN1_INTEGER *serialNumber;
  char *pcVar22;
  long lVar23;
  undefined8 uVar24;
  OCSP_SINGLERESP *x;
  OCSP_BASICRESP *bs;
  char *pcVar25;
  undefined4 uVar26;
  int iVar27;
  long in_FS_OFFSET;
  X509_STORE *local_340;
  EVP_PKEY *local_338;
  long local_330;
  long local_328;
  X509 *local_320;
  BIO *local_318;
  long local_310;
  stack_st_X509 *local_308;
  void *local_300;
  BIO *local_2f8;
  undefined *local_2f0;
  BIO *local_2e8;
  EVP_PKEY *local_2e0;
  X509 *local_2d8;
  X509_VERIFY_PARAM *local_2d0;
  X509 *local_2c8;
  ulong local_2c0;
  OCSP_CERTID *local_2b8;
  int local_2a8;
  long local_298;
  long local_290;
  long local_288;
  ulong local_280;
  long local_278;
  long local_270;
  long local_268;
  long local_260;
  undefined8 local_258;
  ulong local_250;
  undefined8 local_248;
  undefined8 local_240;
  int local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined4 local_218;
  undefined4 local_214;
  undefined4 local_210;
  int local_208;
  int local_1f8;
  OCSP_BASICRESP *local_1e0;
  ASN1_TIME *local_1d8;
  ASN1_TIME *local_1d0;
  undefined4 local_190;
  int local_18c;
  BIO *local_188;
  EVP_MD *local_180;
  EVP_MD *local_178;
  OCSP_REQUEST *local_170;
  stack_st_CONF_VALUE *local_168;
  stack_st_X509 *local_160;
  stack_st_X509 *local_158;
  undefined8 local_150;
  long local_148;
  EVP_MD *local_140;
  void *local_138;
  BIO *local_130;
  undefined *local_128;
  undefined8 local_120;
  long local_118;
  long local_110;
  EVP_PKEY_CTX *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  ASN1_OBJECT *local_f0;
  ASN1_GENERALIZEDTIME *local_e8;
  ASN1_GENERALIZEDTIME *local_e0;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  long local_80;
  long local_70;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_188 = (BIO *)0x0;
  local_128 = &_LC4;
  local_180 = (EVP_MD *)0x0;
  local_178 = (EVP_MD *)0x0;
  local_170 = (OCSP_REQUEST *)0x0;
  local_168 = (stack_st_CONF_VALUE *)0x0;
  local_160 = (stack_st_X509 *)0x0;
  local_158 = (stack_st_X509 *)0x0;
  local_150 = 0;
  local_148 = 0;
  local_140 = (EVP_MD *)0x0;
  local_138 = (void *)0x0;
  local_130 = (BIO *)0x0;
  local_120 = 0;
  local_190 = 0xffffffff;
  local_118 = 300;
  local_110 = -1;
  lVar15 = OPENSSL_sk_new_null();
  if ((lVar15 == 0) || (local_328 = OPENSSL_sk_new_null(), local_328 == 0)) {
    resp = (OCSP_RESPONSE *)0x0;
    bs = (OCSP_BASICRESP *)0x0;
    local_2f0 = (undefined *)0x0;
    local_2f8 = (BIO *)0x0;
    local_300 = (void *)0x0;
    local_2d0 = (X509_VERIFY_PARAM *)0x0;
    local_340 = (X509_STORE *)0x0;
    local_2c8 = (X509 *)0x0;
    local_2d8 = (X509 *)0x0;
    local_320 = (X509 *)0x0;
    local_308 = (stack_st_X509 *)0x0;
    local_328 = 0;
    local_338 = (EVP_PKEY *)0x0;
    local_2e0 = (EVP_PKEY *)0x0;
    local_330 = 0;
    local_310 = 0;
    local_2e8 = (BIO *)0x0;
    local_318 = (BIO *)0x0;
    uVar3 = 1;
  }
  else {
    local_2d0 = X509_VERIFY_PARAM_new();
    if (local_2d0 != (X509_VERIFY_PARAM *)0x0) {
      pXVar19 = (X509 *)0x0;
      opt_set_unknown_name("digest");
      prog = (char *)opt_init(param_1,param_2,ocsp_options);
      local_280 = 0;
      local_2c0 = 0;
      local_250 = 0;
      local_238 = -1;
      bVar6 = false;
      bVar4 = false;
      local_2a8 = -1;
      local_1f8 = 0;
      bVar7 = false;
      bVar5 = false;
      local_208 = 0;
      bVar8 = false;
      cVar9 = '\x01';
      cVar1 = '\x01';
      iVar27 = -1;
      local_210 = 0;
      local_214 = 0;
      local_218 = 0;
      local_2f0 = (undefined *)0x0;
      local_2f8 = (BIO *)0x0;
      local_300 = (void *)0x0;
      local_298 = 0;
      local_288 = 0;
      local_2d8 = (X509 *)0x0;
      local_290 = 0;
      local_278 = 0;
      local_2b8 = (OCSP_CERTID *)0x0;
      local_2e8 = (BIO *)0x0;
      local_338 = (EVP_PKEY *)0x0;
      local_270 = 0;
      local_260 = 0;
      local_268 = 0;
      local_340 = (X509_STORE *)0x0;
      local_318 = (BIO *)0x0;
      local_2e0 = (EVP_PKEY *)0x0;
      local_248 = 0;
      local_240 = 0;
      local_258 = 0;
      local_330 = 0;
      local_220 = 0;
      local_230 = 0;
      local_228 = 0;
      local_320 = (X509 *)0x0;
      local_308 = (stack_st_X509 *)0x0;
      bVar2 = false;
      local_310 = 0;
      iVar12 = local_2a8;
switchD_0010047a_caseD_0:
      local_2a8 = iVar12;
      iVar11 = opt_next();
      if (iVar11 != 0) {
LAB_0010045d:
        iVar12 = local_2a8;
        if (0x3c < iVar11) goto LAB_001006b0;
        if (iVar11 < -1) goto switchD_0010047a_caseD_0;
        goto code_r0x00100473;
      }
LAB_00100750:
      iVar12 = opt_check_rest_arg(0);
      if (iVar12 == 0) goto switchD_0010047a_caseD_ffffffff;
      if (bVar2) goto LAB_00100f78;
      if ((local_330 != 0) && (iVar12 = opt_md(local_330), iVar12 == 0)) goto LAB_00100fb4;
      if (local_170 == (OCSP_REQUEST *)0x0) {
        if (local_340 == (X509_STORE *)0x0 && local_318 == (BIO *)0x0) {
          if ((local_130 == (BIO *)0x0) || (local_270 == 0)) goto switchD_0010047a_caseD_ffffffff;
          cVar1 = (cVar9 == '\x02') * '\x02';
LAB_001018fc:
          local_318 = (BIO *)http_server_init(prog,local_130,0xffffffff);
          if (local_318 == (BIO *)0x0) goto LAB_00100fb4;
        }
        else {
          cVar1 = (cVar1 == '\x02') * '\x02';
          if (local_318 != (BIO *)0x0) {
            pBVar16 = (BIO *)bio_open_default(local_318,0x72,4);
            if (pBVar16 != (BIO *)0x0) {
              local_170 = (OCSP_REQUEST *)
                          ASN1_d2i_bio(OCSP_REQUEST_new,&d2i_OCSP_REQUEST,pBVar16,(void **)0x0);
              BIO_free(pBVar16);
              if (local_170 != (OCSP_REQUEST *)0x0) goto LAB_0010079d;
              BIO_printf(_bio_err,"Error reading OCSP request\n");
            }
            goto LAB_00100fb4;
          }
          local_318 = local_130;
          if (local_130 != (BIO *)0x0) goto LAB_001018fc;
        }
      }
      else {
LAB_0010079d:
        local_318 = (BIO *)0x0;
      }
      if (local_338 != (EVP_PKEY *)0x0) {
        if (local_2e8 == (BIO *)0x0) {
          local_2e8 = (BIO *)local_338;
        }
        local_2c8 = (X509 *)load_cert_pass(local_338,0,1,0,"responder certificate");
        if (local_2c8 == (X509 *)0x0) {
          resp = (OCSP_RESPONSE *)0x0;
          bs = (OCSP_BASICRESP *)0x0;
          BIO_printf(_bio_err,"Error loading responder certificate\n");
          local_340 = (X509_STORE *)0x0;
          local_2d8 = (X509 *)0x0;
          local_338 = (EVP_PKEY *)0x0;
          local_2e0 = (EVP_PKEY *)0x0;
          local_330 = 0;
          local_2e8 = (BIO *)0x0;
          uVar3 = 1;
          goto LAB_00100525;
        }
        iVar12 = load_certs(local_2e0,0,&local_148,0,"CA certificates");
        if ((iVar12 != 0) &&
           ((local_2d8 == (X509 *)0x0 ||
            (iVar12 = load_certs(local_2d8,0,&local_150,0,"responder other certificates"),
            iVar12 != 0)))) {
          iVar12 = app_passwd(local_2b8,0,&local_120,0);
          if (iVar12 == 0) {
            BIO_printf(_bio_err,"Error getting password\n");
          }
          else {
            local_338 = (EVP_PKEY *)load_key(local_2e8,0,0,local_120,0);
            if (local_338 != (EVP_PKEY *)0x0) {
              if (local_270 == 0) goto LAB_00102274;
              if (local_148 == 0) goto LAB_00102058;
              local_330 = load_index(local_270);
              if ((local_330 != 0) && (iVar12 = index_index(local_330), 0 < iVar12))
              goto LAB_001008dc;
              resp = (OCSP_RESPONSE *)0x0;
              bs = (OCSP_BASICRESP *)0x0;
              BIO_printf(_bio_err,"Problem with index file: %s (could not load/parse file)\n",
                         local_270);
              local_340 = (X509_STORE *)0x0;
              local_2d8 = (X509 *)0x0;
              local_2e0 = (EVP_PKEY *)0x0;
              local_2e8 = (BIO *)0x0;
              uVar3 = 1;
              goto LAB_00100525;
            }
          }
        }
        resp = (OCSP_RESPONSE *)0x0;
        bs = (OCSP_BASICRESP *)0x0;
        local_340 = (X509_STORE *)0x0;
        local_2d8 = (X509 *)0x0;
        local_338 = (EVP_PKEY *)0x0;
        local_2e0 = (EVP_PKEY *)0x0;
        local_330 = 0;
        local_2e8 = (BIO *)0x0;
        uVar3 = 1;
        goto LAB_00100525;
      }
      local_2c8 = (X509 *)0x0;
      if (local_270 != 0) {
LAB_00102058:
        resp = (OCSP_RESPONSE *)0x0;
        bs = (OCSP_BASICRESP *)0x0;
        BIO_printf(_bio_err,"Responder mode requires certificate, key, and CA.\n");
        local_340 = (X509_STORE *)0x0;
        local_2d8 = (X509 *)0x0;
        local_2e0 = (EVP_PKEY *)0x0;
        local_330 = 0;
        local_2e8 = (BIO *)0x0;
        uVar3 = 1;
        goto LAB_00100525;
      }
LAB_00102274:
      local_330 = 0;
LAB_001008dc:
      if (_n_responders == 0) {
        if (local_318 != (BIO *)0x0) {
          if (0 < local_238) goto LAB_00102340;
          if (local_318 != (BIO *)0x0) goto LAB_0010090f;
        }
      }
      else if (local_318 != (BIO *)0x0) {
        spawn_loop(prog);
        if (0 < local_238) {
LAB_00102340:
          signal(0xe,(__sighandler_t)&socket_timeout);
        }
LAB_0010090f:
        trace_log_message(0xffffffff,prog,6);
      }
      local_2d8 = (X509 *)0x0;
      local_2e8 = (BIO *)0x0;
      local_2e0 = (EVP_PKEY *)0x0;
      goto LAB_00100960;
    }
    local_2f0 = (undefined *)0x0;
    resp = (OCSP_RESPONSE *)0x0;
    bs = (OCSP_BASICRESP *)0x0;
    local_2f8 = (BIO *)0x0;
    local_300 = (void *)0x0;
    local_340 = (X509_STORE *)0x0;
    local_2c8 = (X509 *)0x0;
    local_2d8 = (X509 *)0x0;
    local_320 = (X509 *)0x0;
    local_308 = (stack_st_X509 *)0x0;
    local_338 = (EVP_PKEY *)0x0;
    local_2e0 = (EVP_PKEY *)0x0;
    local_330 = 0;
    local_310 = 0;
    local_2e8 = (BIO *)0x0;
    local_318 = (BIO *)0x0;
    uVar3 = 1;
  }
LAB_00100525:
  ERR_print_errors(_bio_err);
  X509_free(local_2d8);
  X509_STORE_free(local_340);
  X509_VERIFY_PARAM_free(local_2d0);
  OPENSSL_sk_free(local_310);
  EVP_PKEY_free(local_2e0);
  EVP_PKEY_free(local_338);
  EVP_MD_free(local_180);
  EVP_MD_free(local_178);
  EVP_MD_free(local_140);
  X509_free(local_320);
  OSSL_STACK_OF_X509_free(local_308);
  X509_free(local_2c8);
  OSSL_STACK_OF_X509_free(local_148);
  free_index(local_330);
  BIO_free_all(local_188);
  BIO_free_all(local_318);
  BIO_free_all(local_2e8);
  OCSP_REQUEST_free(local_170);
  OCSP_RESPONSE_free(resp);
  OCSP_BASICRESP_free(bs);
  OPENSSL_sk_free(lVar15);
  OPENSSL_sk_free(local_328);
  OSSL_STACK_OF_X509_free(local_160);
  OSSL_STACK_OF_X509_free(local_158);
  OPENSSL_sk_pop_free(local_168,&X509V3_conf_free);
  CRYPTO_free(local_300);
  CRYPTO_free(local_2f8);
  CRYPTO_free(local_2f0);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
LAB_001006b0:
  if (iVar11 == 0x7f0) {
    if (bVar2) {
LAB_00100f78:
      BIO_printf(_bio_err,"%s: Digest must be before -cert or -serial\n",prog);
      goto switchD_0010047a_caseD_ffffffff;
    }
    uVar24 = opt_unknown();
    iVar11 = opt_md(uVar24);
    if (iVar11 == 0) goto switchD_0010047a_caseD_ffffffff;
    bVar2 = true;
  }
  else if (iVar11 < 0x7f1) {
    if (iVar11 < 0x645) {
      if (0x640 < iVar11) {
        iVar11 = opt_provider(iVar11);
joined_r0x00100714:
        if (iVar11 == 0) goto LAB_00100fb4;
      }
    }
    else if (iVar11 - 0x7d1U < 0x1e) {
      iVar11 = opt_verify(iVar11);
      if (iVar11 == 0) goto LAB_00100fb4;
      local_208 = local_208 + 1;
    }
  }
  else if (iVar11 == 0x7f1) {
    pcVar22 = (char *)opt_arg();
    lVar23 = strtol(pcVar22,(char **)0x0,10);
    _n_responders = (int)lVar23;
  }
  goto switchD_0010047a_caseD_0;
code_r0x00100473:
  switch(iVar11) {
  default:
    goto switchD_0010047a_caseD_0;
  case 1:
    opt_help(ocsp_options);
    uVar3 = 0;
    goto LAB_00100fbd;
  case 2:
    local_258 = opt_arg();
    goto switchD_0010047a_caseD_0;
  case 3:
    pcVar22 = (char *)opt_arg();
    lVar23 = strtol(pcVar22,(char **)0x0,10);
    local_238 = (int)lVar23;
    goto switchD_0010047a_caseD_0;
  case 4:
    CRYPTO_free(local_300);
    CRYPTO_free(local_2f8);
    CRYPTO_free(local_2f0);
    uVar24 = opt_arg();
    iVar11 = OSSL_HTTP_parse_url(uVar24,&local_190,0,&local_138,&local_130,0,&local_128,0,0);
    if (iVar11 == 0) {
      BIO_printf(_bio_err,"%s Error parsing -url argument\n",prog);
      uVar3 = 1;
      local_2f0 = (undefined *)0x0;
      local_2f8 = (BIO *)0x0;
      local_300 = (void *)0x0;
      goto LAB_00100fbd;
    }
    local_300 = local_138;
    local_2f8 = local_130;
    local_2f0 = local_128;
    goto switchD_0010047a_caseD_0;
  case 5:
    local_138 = (void *)opt_arg();
    goto switchD_0010047a_caseD_0;
  case 6:
    local_130 = (BIO *)opt_arg();
    goto switchD_0010047a_caseD_0;
  case 7:
    local_240 = opt_arg();
    goto switchD_0010047a_caseD_0;
  case 8:
    local_248 = opt_arg();
    goto switchD_0010047a_caseD_0;
  case 9:
    bVar7 = true;
    goto switchD_0010047a_caseD_0;
  case 10:
    bVar8 = true;
    goto switchD_0010047a_caseD_0;
  case 0xb:
    cVar9 = '\x02';
    cVar1 = '\x02';
    goto switchD_0010047a_caseD_0;
  case 0xc:
    cVar9 = '\0';
    cVar1 = '\0';
    goto switchD_0010047a_caseD_0;
  case 0xd:
    local_280 = local_280 | 1;
    goto switchD_0010047a_caseD_0;
  case 0xe:
    local_280 = local_280 | 0x400;
    goto switchD_0010047a_caseD_0;
  case 0xf:
    local_250 = 1;
    goto switchD_0010047a_caseD_0;
  case 0x10:
    local_2c0 = local_2c0 | 4;
    goto switchD_0010047a_caseD_0;
  case 0x11:
    local_2c0 = local_2c0 | 0x10;
    goto switchD_0010047a_caseD_0;
  case 0x12:
    local_2c0 = local_2c0 | 8;
    goto switchD_0010047a_caseD_0;
  case 0x13:
    local_2c0 = local_2c0 | 0x100;
    goto switchD_0010047a_caseD_0;
  case 0x14:
    local_2c0 = local_2c0 | 0x20;
    goto switchD_0010047a_caseD_0;
  case 0x15:
    goto switchD_0010047a_caseD_15;
  case 0x16:
    local_2c0 = local_2c0 | 2;
    goto switchD_0010047a_caseD_0;
  case 0x17:
    bVar5 = true;
    goto switchD_0010047a_caseD_0;
  case 0x18:
    bVar6 = true;
    bVar4 = true;
    goto switchD_0010047a_caseD_0;
  case 0x19:
    bVar4 = true;
    goto switchD_0010047a_caseD_0;
  case 0x1a:
    bVar6 = true;
    goto switchD_0010047a_caseD_0;
  case 0x1b:
    local_318 = (BIO *)opt_arg();
    goto switchD_0010047a_caseD_0;
  case 0x1c:
    local_340 = (X509_STORE *)opt_arg();
    goto switchD_0010047a_caseD_0;
  case 0x1d:
    local_288 = opt_arg();
    goto switchD_0010047a_caseD_0;
  case 0x1e:
    local_290 = opt_arg();
switchD_0010047a_caseD_15:
    local_2c0 = local_2c0 | 0x200;
    iVar11 = opt_next();
    if (iVar11 == 0) goto LAB_00100750;
    goto LAB_0010045d;
  case 0x1f:
    local_278 = opt_arg();
    goto switchD_0010047a_caseD_0;
  case 0x20:
    local_290 = opt_arg();
    goto switchD_0010047a_caseD_0;
  case 0x21:
    local_228 = opt_arg();
    goto switchD_0010047a_caseD_0;
  case 0x22:
    local_230 = opt_arg();
    goto switchD_0010047a_caseD_0;
  case 0x23:
    local_220 = opt_arg();
    goto switchD_0010047a_caseD_0;
  case 0x24:
    local_218 = 1;
    goto switchD_0010047a_caseD_0;
  case 0x25:
    local_214 = 1;
    goto switchD_0010047a_caseD_0;
  case 0x26:
    local_210 = 1;
    goto switchD_0010047a_caseD_0;
  case 0x27:
    uVar24 = opt_arg();
    opt_long(uVar24);
    goto switchD_0010047a_caseD_0;
  case 0x28:
    uVar24 = opt_arg();
    opt_long(uVar24);
    goto switchD_0010047a_caseD_0;
  case 0x29:
    local_298 = opt_arg();
    goto switchD_0010047a_caseD_0;
  case 0x2a:
    local_268 = opt_arg();
    goto switchD_0010047a_caseD_0;
  case 0x2b:
    local_260 = opt_arg();
    goto switchD_0010047a_caseD_0;
  case 0x2c:
    local_128 = (undefined *)opt_arg();
    goto switchD_0010047a_caseD_0;
  case 0x2d:
    uVar24 = opt_arg();
    pXVar19 = (X509 *)load_cert_pass(uVar24,0,1,0,"issuer certificate");
    if (pXVar19 == (X509 *)0x0) goto LAB_00100fb4;
    if ((local_308 != (stack_st_X509 *)0x0) ||
       (local_308 = (stack_st_X509 *)OPENSSL_sk_new_null(), local_308 != (stack_st_X509 *)0x0)) {
      iVar11 = OPENSSL_sk_push(local_308);
      goto joined_r0x00100714;
    }
    break;
  case 0x2e:
    reset_unknown();
    X509_free(local_320);
    uVar24 = opt_arg();
    local_320 = (X509 *)load_cert_pass(uVar24,0,1,0,"certificate");
    if (local_320 != (X509 *)0x0) {
      if (local_180 == (EVP_MD *)0x0) {
        local_180 = EVP_sha1();
      }
      pEVar10 = local_180;
      if (pXVar19 == (X509 *)0x0) {
        BIO_printf(_bio_err,"No issuer certificate specified\n");
        goto LAB_00100fb4;
      }
      if ((local_170 != (OCSP_REQUEST *)0x0) ||
         (local_170 = OCSP_REQUEST_new(), local_170 != (OCSP_REQUEST *)0x0)) {
        pOVar18 = OCSP_cert_to_id(pEVar10,local_320,pXVar19);
        goto joined_r0x001014df;
      }
      goto LAB_001014f6;
    }
    break;
  case 0x2f:
    reset_unknown();
    if (local_180 == (EVP_MD *)0x0) {
      local_180 = EVP_sha1();
    }
    pEVar10 = local_180;
    pcVar22 = (char *)opt_arg();
    if (pXVar19 == (X509 *)0x0) {
      pcVar22 = "No issuer certificate specified\n";
LAB_001014fd:
      BIO_printf(_bio_err,pcVar22);
      goto LAB_00100fb4;
    }
    if ((local_170 == (OCSP_REQUEST *)0x0) &&
       (local_170 = OCSP_REQUEST_new(), local_170 == (OCSP_REQUEST *)0x0)) goto LAB_001014f6;
    issuerName = X509_get_subject_name(pXVar19);
    issuerKey = X509_get0_pubkey_bitstr(pXVar19);
    serialNumber = s2i_ASN1_INTEGER((X509V3_EXT_METHOD *)0x0,pcVar22);
    if (serialNumber == (ASN1_INTEGER *)0x0) {
      pcVar25 = "Error converting serial number %s\n";
      goto LAB_00100fa6;
    }
    pOVar18 = OCSP_cert_id_new(pEVar10,issuerName,issuerKey,serialNumber);
    ASN1_INTEGER_free(serialNumber);
joined_r0x001014df:
    if (((pOVar18 != (OCSP_CERTID *)0x0) &&
        (iVar11 = OPENSSL_sk_push(local_328,pOVar18), iVar11 != 0)) &&
       (pOVar17 = OCSP_request_add0_id(local_170,pOVar18), pOVar17 != (OCSP_ONEREQ *)0x0)) {
      opt_arg();
      iVar11 = OPENSSL_sk_push(lVar15);
      if (iVar11 == 0) goto LAB_00100fb4;
      bVar2 = false;
      goto switchD_0010047a_caseD_0;
    }
LAB_001014f6:
    pcVar22 = "Error Creating OCSP request\n";
    goto LAB_001014fd;
  case 0x30:
    local_270 = opt_arg();
    goto switchD_0010047a_caseD_0;
  case 0x31:
    local_2e0 = (EVP_PKEY *)opt_arg();
    goto switchD_0010047a_caseD_0;
  case 0x32:
    local_1f8 = opt_int_arg();
    iVar12 = 0;
    if (local_2a8 != -1) {
      iVar12 = local_2a8;
    }
    goto switchD_0010047a_caseD_0;
  case 0x33:
    iVar27 = opt_int_arg();
    goto switchD_0010047a_caseD_0;
  case 0x34:
    pcVar22 = (char *)opt_arg();
    lVar23 = strtol(pcVar22,(char **)0x0,10);
    iVar12 = (int)lVar23;
    goto switchD_0010047a_caseD_0;
  case 0x35:
    local_338 = (EVP_PKEY *)opt_arg();
    goto switchD_0010047a_caseD_0;
  case 0x36:
    local_2e8 = (BIO *)opt_arg();
    goto switchD_0010047a_caseD_0;
  case 0x37:
    local_2d8 = (X509 *)opt_arg();
    goto switchD_0010047a_caseD_0;
  case 0x38:
    local_330 = opt_arg();
    goto switchD_0010047a_caseD_0;
  case 0x39:
    if ((local_310 != 0) || (local_310 = OPENSSL_sk_new_null(), local_310 != 0)) {
      opt_arg();
      iVar11 = OPENSSL_sk_push(local_310);
      goto joined_r0x00100714;
    }
    break;
  case 0x3a:
    pcVar22 = (char *)opt_arg();
    pcVar25 = strchr(pcVar22,0x3d);
    if (pcVar25 != (char *)0x0) {
      *pcVar25 = '\0';
      iVar11 = X509V3_add_value(pcVar22,pcVar25 + 1,&local_168);
      goto joined_r0x00100714;
    }
    BIO_printf(_bio_err,"Missing = in header key=value\n");
    goto switchD_0010047a_caseD_ffffffff;
  case 0x3b:
    local_2b8 = (OCSP_CERTID *)opt_arg();
    goto switchD_0010047a_caseD_0;
  case 0x3c:
    uVar24 = opt_arg();
    iVar11 = opt_md(uVar24);
    if (iVar11 == 0) goto switchD_0010047a_caseD_ffffffff;
    goto switchD_0010047a_caseD_0;
  case -1:
    goto switchD_0010047a_caseD_ffffffff;
  }
  local_340 = (X509_STORE *)0x0;
  resp = (OCSP_RESPONSE *)0x0;
  bs = (OCSP_BASICRESP *)0x0;
  local_2c8 = (X509 *)0x0;
  local_2d8 = (X509 *)0x0;
  local_338 = (EVP_PKEY *)0x0;
  local_2e0 = (EVP_PKEY *)0x0;
  local_330 = 0;
  local_2e8 = (BIO *)0x0;
  local_318 = (BIO *)0x0;
  uVar3 = 1;
  goto LAB_00100525;
switchD_0010047a_caseD_ffffffff:
  pcVar25 = "%s: Use -help for summary.\n";
  pcVar22 = prog;
LAB_00100fa6:
  BIO_printf(_bio_err,pcVar25,pcVar22);
LAB_00100fb4:
  uVar3 = 1;
LAB_00100fbd:
  resp = (OCSP_RESPONSE *)0x0;
  local_340 = (X509_STORE *)0x0;
  bs = (OCSP_BASICRESP *)0x0;
  local_2c8 = (X509 *)0x0;
  local_2d8 = (X509 *)0x0;
  local_338 = (EVP_PKEY *)0x0;
  local_2e0 = (EVP_PKEY *)0x0;
  local_330 = 0;
  local_2e8 = (BIO *)0x0;
  local_318 = (BIO *)0x0;
  goto LAB_00100525;
LAB_00100960:
  uVar3 = 0;
  if (local_318 != (BIO *)0x0) {
    lVar23 = local_330;
    do {
      local_330 = lVar23;
      if (((lVar23 != 0) &&
          (iVar12 = stat(*(char **)(lVar23 + 0x10),(stat *)local_d8), iVar12 != -1)) &&
         ((*(long *)(lVar23 + 0x70) != local_80 ||
          (((*(long *)(lVar23 + 0x80) != local_70 || (*(__ino_t *)(lVar23 + 0x20) != local_d8._8_8_)
            ) || (*(OPENSSL_STRING *)(lVar23 + 0x18) != (OPENSSL_STRING)local_d8._0_8_)))))) {
        __syslog_chk(6,2,"index file changed, reloading");
        local_330 = load_index(local_270,0);
        if ((local_330 == 0) || (iVar12 = index_index(local_330), iVar12 < 1)) {
          free_index(local_330);
          trace_log_message(0xffffffff,prog,3,"error reloading updated index: %s",local_270);
          local_330 = lVar23;
        }
        else {
          free_index(lVar23);
        }
      }
      pcVar22 = prog;
      local_170 = (OCSP_REQUEST *)0x0;
      uVar24 = OCSP_REQUEST_it();
      iVar12 = http_server_get_asn1_req
                         (uVar24,&local_170,0,&local_188,local_318,0,pcVar22,1,local_238);
      lVar23 = local_330;
    } while (iVar12 == 0);
    if (local_170 != (OCSP_REQUEST *)0x0) goto LAB_001019a0;
    resp = (OCSP_RESPONSE *)0x0;
    if (iVar12 == 1) {
      resp = OCSP_response_create(1,(OCSP_BASICRESP *)0x0);
LAB_00100e92:
      pBVar16 = local_188;
      uVar24 = OCSP_RESPONSE_it();
      http_server_send_asn1_resp(prog,pBVar16,0,"application/ocsp-response",uVar24);
    }
    goto LAB_00100eb5;
  }
  if (local_170 == (OCSP_REQUEST *)0x0) {
    if ((((local_270 != 0 || local_288 != 0) || local_268 != 0) || (local_138 != (void *)0x0)) ||
       (cVar1 != '\0')) {
      bs = (OCSP_BASICRESP *)0x0;
      BIO_printf(_bio_err,"Need an OCSP request for this operation!\n");
      local_340 = (X509_STORE *)0x0;
      local_318 = (BIO *)0x0;
      resp = (OCSP_RESPONSE *)0x0;
      uVar3 = 1;
      goto LAB_00100525;
    }
LAB_001009be:
    local_2e8 = (BIO *)bio_open_default(local_258,0x77,0x8001);
    if (local_2e8 == (BIO *)0x0) goto LAB_00101dbe;
    if ((bVar4) && (local_170 != (OCSP_REQUEST *)0x0)) {
      OCSP_REQUEST_print(local_2e8,local_170,0);
    }
    if (local_268 != 0) {
      pBVar16 = (BIO *)bio_open_default(local_268,0x77,4);
      if (pBVar16 == (BIO *)0x0) goto LAB_0010200f;
      ASN1_i2d_bio(&i2d_OCSP_REQUEST,pBVar16,(uchar *)local_170);
      BIO_free(pBVar16);
    }
    dgst = local_140;
    lVar23 = local_148;
    uVar24 = local_150;
    req = local_170;
    pEVar10 = local_178;
    pBVar16 = _bio_err;
    if (local_330 != 0) {
      local_108 = (EVP_PKEY_CTX *)0x0;
      iVar12 = OCSP_request_onereq_count(local_170);
      if (iVar12 < 1) {
        ctx = (EVP_MD_CTX *)0x0;
        resp = OCSP_response_create(1,(OCSP_BASICRESP *)0x0);
        local_1e0 = (OCSP_BASICRESP *)0x0;
        local_1d8 = (ASN1_TIME *)0x0;
        local_1d0 = (ASN1_TIME *)0x0;
      }
      else {
        local_1e0 = OCSP_BASICRESP_new();
        if (local_1e0 == (OCSP_BASICRESP *)0x0) {
          ctx = (EVP_MD_CTX *)0x0;
          resp = OCSP_response_create(2,(OCSP_BASICRESP *)0x0);
          local_1d8 = (ASN1_TIME *)0x0;
          local_1d0 = (ASN1_TIME *)0x0;
        }
        else {
          local_1d0 = X509_gmtime_adj((ASN1_TIME *)0x0,0);
          local_1d8 = (ASN1_TIME *)0x0;
          if (local_2a8 != -1) {
            local_1d8 = X509_time_adj_ex((ASN1_TIME *)0x0,local_2a8,(long)(local_1f8 * 0x3c),
                                         (time_t *)0x0);
          }
          iVar11 = 0;
          do {
            pOVar17 = OCSP_request_onereq_get0(req,iVar11);
            pOVar18 = OCSP_onereq_get0_id(pOVar17);
            OCSP_id_get0_info((ASN1_OCTET_STRING **)0x0,(ASN1_OBJECT **)&local_f8,
                              (ASN1_OCTET_STRING **)0x0,(ASN1_INTEGER **)0x0,pOVar18);
            iVar13 = OBJ_obj2nid((ASN1_OBJECT *)CONCAT44(local_f8._4_4_,(int)local_f8));
            pcVar22 = OBJ_nid2sn(iVar13);
            dgst_00 = EVP_get_digestbyname(pcVar22);
            if (dgst_00 == (EVP_MD *)0x0) {
LAB_00102212:
              ctx = (EVP_MD_CTX *)0x0;
              resp = OCSP_response_create(2,(OCSP_BASICRESP *)0x0);
              goto LAB_00100e4d;
            }
            bVar2 = false;
            iVar13 = 0;
            local_2b8 = (OCSP_CERTID *)0x0;
            while ((iVar14 = OPENSSL_sk_num(), iVar13 < iVar14 && (!bVar2))) {
              pXVar19 = (X509 *)OPENSSL_sk_value(lVar23);
              a = OCSP_cert_to_id(dgst_00,(X509 *)0x0,pXVar19);
              iVar14 = OCSP_id_issuer_cmp(a,pOVar18);
              if ((iVar14 == 0) && (bVar2 = true, dgst != (EVP_MD *)0x0)) {
                local_2b8 = OCSP_cert_to_id(dgst,(X509 *)0x0,pXVar19);
              }
              iVar13 = iVar13 + 1;
              OCSP_CERTID_free(a);
            }
            OCSP_id_get0_info((ASN1_OCTET_STRING **)0x0,(ASN1_OBJECT **)0x0,
                              (ASN1_OCTET_STRING **)0x0,(ASN1_INTEGER **)&local_100,pOVar18);
            local_d8 = (undefined1  [16])0x0;
            local_c8 = (undefined1  [16])0x0;
            local_b8 = (undefined1  [16])0x0;
            a_00 = ASN1_INTEGER_to_BN((ASN1_INTEGER *)CONCAT44(local_100._4_4_,(int)local_100),
                                      (BIGNUM *)0x0);
            if (a_00 == (BIGNUM *)0x0) {
LAB_001029db:
              OPENSSL_die("assertion failed: bn","apps/ocsp.c",0x4a4);
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            iVar13 = BN_is_zero(a_00);
            if (iVar13 == 0) {
              pcVar22 = BN_bn2hex(a_00);
            }
            else {
              pcVar22 = CRYPTO_strdup("00","apps/ocsp.c",0x4a7);
              if (pcVar22 == (char *)0x0) {
                OPENSSL_die("assertion failed: itmp","apps/ocsp.c",0x4a8);
                goto LAB_001029db;
              }
            }
            local_c8._8_8_ = pcVar22;
            BN_free(a_00);
            ppcVar20 = TXT_DB_get_by_index(*(TXT_DB **)(local_330 + 8),3,(OPENSSL_STRING *)local_d8)
            ;
            CRYPTO_free(pcVar22);
            if (local_2b8 != (OCSP_CERTID *)0x0) {
              pOVar18 = local_2b8;
            }
            if (bVar2) {
              if (ppcVar20 == (OPENSSL_STRING *)0x0) {
                OCSP_basic_add1_status(local_1e0,pOVar18,2,0,(ASN1_TIME *)0x0,local_1d0,local_1d8);
              }
              else if (**ppcVar20 == 'V') {
                OCSP_basic_add1_status(local_1e0,pOVar18,0,0,(ASN1_TIME *)0x0,local_1d0,local_1d8);
              }
              else if (**ppcVar20 == 'R') {
                local_f0 = (ASN1_OBJECT *)0x0;
                local_e8 = (ASN1_TIME *)0x0;
                local_e0 = (ASN1_GENERALIZEDTIME *)0x0;
                local_18c = -1;
                unpack_revinfo(&local_e8,&local_18c,&local_f0,&local_e0,ppcVar20[2]);
                x = OCSP_basic_add1_status
                              (local_1e0,pOVar18,1,local_18c,local_e8,local_1d0,local_1d8);
                if (x == (OCSP_SINGLERESP *)0x0) goto LAB_00102212;
                if (local_e0 == (ASN1_GENERALIZEDTIME *)0x0) {
                  if (local_f0 != (ASN1_OBJECT *)0x0) {
                    OCSP_SINGLERESP_add1_ext_i2d(x,0x1ae,local_f0,0,0);
                  }
                }
                else {
                  OCSP_SINGLERESP_add1_ext_i2d(x,0x8e,local_e0,0,0);
                }
                ASN1_OBJECT_free(local_f0);
                ASN1_TIME_free(local_e8);
                ASN1_GENERALIZEDTIME_free(local_e0);
              }
              OCSP_CERTID_free(local_2b8);
            }
            else {
              OCSP_basic_add1_status(local_1e0,pOVar18,2,0,(ASN1_TIME *)0x0,local_1d0,local_1d8);
            }
            iVar11 = iVar11 + 1;
          } while (iVar12 != iVar11);
          OCSP_copy_nonce(local_1e0,req);
          ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
          if ((ctx == (EVP_MD_CTX *)0x0) ||
             (iVar12 = EVP_DigestSignInit(ctx,&local_108,pEVar10,(ENGINE *)0x0,local_338),
             iVar12 == 0)) {
LAB_001022a7:
            resp = OCSP_response_create(2,(OCSP_BASICRESP *)0x0);
          }
          else {
            for (iVar12 = 0; iVar11 = OPENSSL_sk_num(local_310), iVar12 < iVar11;
                iVar12 = iVar12 + 1) {
              uVar21 = OPENSSL_sk_value(local_310,iVar12);
              iVar11 = pkey_ctrl_string(local_108,uVar21);
              if (iVar11 < 1) {
                BIO_printf(pBVar16,"parameter error \"%s\"\n",uVar21);
                ERR_print_errors(_bio_err);
                goto LAB_001022a7;
              }
            }
            iVar12 = OCSP_basic_sign_ctx(local_1e0,local_2c8,ctx,uVar24,local_280);
            if (iVar12 == 0) {
              resp = OCSP_response_create(2,local_1e0);
            }
            else {
              if (bVar5) {
                OCSP_resp_get0_signature(local_1e0);
                corrupt_signature();
              }
              resp = OCSP_response_create(0,local_1e0);
            }
          }
        }
      }
LAB_00100e4d:
      EVP_MD_CTX_free(ctx);
      ASN1_TIME_free(local_1d0);
      ASN1_TIME_free(local_1d8);
      OCSP_BASICRESP_free(local_1e0);
      if (resp == (OCSP_RESPONSE *)0x0) goto LAB_0010200f;
      if (local_188 != (BIO *)0x0) goto LAB_00100e92;
LAB_00100eb5:
      if (local_260 != 0) {
        pBVar16 = (BIO *)bio_open_default(local_260,0x77,4);
        if (pBVar16 != (BIO *)0x0) {
          ASN1_i2d_bio(&i2d_OCSP_RESPONSE,pBVar16,(uchar *)resp);
          BIO_free(pBVar16);
          goto LAB_00100efa;
        }
LAB_00101f05:
        bs = (OCSP_BASICRESP *)0x0;
        local_340 = (X509_STORE *)0x0;
        uVar3 = 1;
        goto LAB_00100525;
      }
LAB_00100efa:
      iVar12 = OCSP_response_status(resp);
      if (iVar12 != 0) {
        pcVar22 = OCSP_response_status_str((long)iVar12);
        BIO_printf(local_2e8,"Responder Error: %s (%d)\n",pcVar22);
        if (!bVar7) goto LAB_00101f05;
      }
      if (bVar6) {
        OCSP_RESPONSE_print(local_2e8,resp,0);
      }
      if (local_188 == (BIO *)0x0) {
        local_340 = (X509_STORE *)0x0;
        bs = (OCSP_BASICRESP *)0x0;
        if (local_270 != 0) goto LAB_00100525;
        local_340 = (X509_STORE *)
                    setup_verify(local_228,local_218,local_230,local_214,local_220,local_210);
        if (local_340 != (X509_STORE *)0x0) {
          if (local_208 != 0) {
            X509_STORE_set1_param(local_340,local_2d0);
          }
          if ((local_290 == 0) ||
             (iVar27 = load_certs(local_290,0,&local_158,0,"validator certificates"), iVar27 != 0))
          {
            bs = OCSP_response_get1_basic(resp);
            if (bs == (OCSP_BASICRESP *)0x0) {
              BIO_printf(_bio_err,"Error parsing response\n");
              uVar3 = 1;
              goto LAB_00100525;
            }
            if (bVar8) {
LAB_001025c8:
              uVar26 = 0;
            }
            else {
              if ((local_170 != (OCSP_REQUEST *)0x0) &&
                 (iVar27 = OCSP_check_nonce(local_170,bs), iVar27 < 1)) {
                if (iVar27 != -1) {
                  BIO_printf(_bio_err,"Nonce Verify error\n");
                  uVar3 = 1;
                  goto LAB_00100525;
                }
                BIO_printf(_bio_err,"WARNING: no nonce in response\n");
              }
              iVar27 = OCSP_basic_verify(bs,local_158,local_340,local_2c0);
              if (0 < iVar27) {
LAB_001028ea:
                BIO_printf(_bio_err,"Response verify OK\n");
                goto LAB_001025c8;
              }
              if (local_308 == (stack_st_X509 *)0x0) {
                if (0 < iVar27) goto LAB_001028ea;
              }
              else {
                iVar27 = OCSP_basic_verify(bs,local_308,local_340,0x200);
                if (0 < iVar27) {
                  ERR_clear_error();
                  goto LAB_001028ea;
                }
              }
              uVar26 = 1;
              BIO_printf(_bio_err,"Response Verify Failure\n");
              ERR_print_errors(_bio_err);
            }
            maxsec = local_110;
            lVar23 = local_118;
            uVar3 = uVar26;
            if ((local_170 == (OCSP_REQUEST *)0x0) || (iVar27 = OPENSSL_sk_num(lVar15), iVar27 == 0)
               ) goto LAB_00100525;
            bVar4 = true;
            iVar27 = OPENSSL_sk_num(local_328);
            if (iVar27 != 0) {
              for (iVar27 = 0; iVar12 = OPENSSL_sk_num(local_328), iVar27 < iVar12;
                  iVar27 = iVar27 + 1) {
                pOVar18 = (OCSP_CERTID *)OPENSSL_sk_value(local_328,iVar27);
                uVar24 = OPENSSL_sk_value(lVar15,iVar27);
                BIO_printf(local_2e8,"%s: ",uVar24);
                iVar12 = OCSP_resp_find_status
                                   (bs,pOVar18,(int *)&local_100,(int *)&local_f8,
                                    (ASN1_GENERALIZEDTIME **)&local_f0,&local_e8,&local_e0);
                if (iVar12 == 0) {
                  BIO_puts(local_2e8,"ERROR: No Status found.\n");
                  bVar4 = false;
                }
                else {
                  iVar12 = OCSP_check_validity(local_e8,local_e0,lVar23,maxsec);
                  if (iVar12 == 0) {
                    BIO_puts(local_2e8,"WARNING: Status times invalid.\n");
                    ERR_print_errors(local_2e8);
                  }
                  pcVar22 = OCSP_cert_status_str((long)(int)local_100);
                  BIO_printf(local_2e8,"%s\n",pcVar22);
                  BIO_puts(local_2e8,"\tThis Update: ");
                  ASN1_GENERALIZEDTIME_print(local_2e8,local_e8);
                  BIO_puts(local_2e8,"\n");
                  if (local_e0 != (ASN1_GENERALIZEDTIME *)0x0) {
                    BIO_puts(local_2e8,"\tNext Update: ");
                    ASN1_GENERALIZEDTIME_print(local_2e8,local_e0);
                    BIO_puts(local_2e8,"\n");
                  }
                  if ((int)local_100 == 1) {
                    if ((int)local_f8 != -1) {
                      pcVar22 = OCSP_crl_reason_str((long)(int)local_f8);
                      BIO_printf(local_2e8,"\tReason: %s\n",pcVar22);
                    }
                    BIO_puts(local_2e8,"\tRevocation Time: ");
                    ASN1_GENERALIZEDTIME_print(local_2e8,(ASN1_GENERALIZEDTIME *)local_f0);
                    BIO_puts(local_2e8,"\n");
                  }
                }
              }
              uVar3 = 1;
              if (bVar4) {
                uVar3 = uVar26;
              }
              goto LAB_00100525;
            }
          }
          else {
            bs = (OCSP_BASICRESP *)0x0;
          }
        }
        uVar3 = 1;
        goto LAB_00100525;
      }
      if ((iVar27 != -1) && (iVar27 = iVar27 + -1, iVar27 < 1)) goto LAB_00102489;
      BIO_free_all(local_188);
      local_188 = (BIO *)0x0;
      OCSP_REQUEST_free(local_170);
      local_170 = (OCSP_REQUEST *)0x0;
      OCSP_RESPONSE_free(resp);
      goto LAB_00100960;
    }
    if (local_138 == (void *)0x0) {
      if (local_340 != (X509_STORE *)0x0) {
        pBVar16 = (BIO *)bio_open_default(local_340,0x72,4);
        if (pBVar16 != (BIO *)0x0) {
          resp = (OCSP_RESPONSE *)
                 ASN1_d2i_bio((xnew *)&OCSP_RESPONSE_new,&d2i_OCSP_RESPONSE,pBVar16,(void **)0x0);
          BIO_free(pBVar16);
          if (resp != (OCSP_RESPONSE *)0x0) goto LAB_00100eb5;
          BIO_printf(_bio_err,"Error reading OCSP response\n");
        }
        goto LAB_00101dbe;
      }
      resp = (OCSP_RESPONSE *)0x0;
      bs = (OCSP_BASICRESP *)0x0;
      goto LAB_00100525;
    }
    resp = (OCSP_RESPONSE *)
           process_responder(local_170,local_138,local_130,local_128,local_240,local_248,local_190,
                             local_168,local_238);
    if (resp != (OCSP_RESPONSE *)0x0) goto LAB_00100eb5;
  }
  else {
LAB_001019a0:
    if ((cVar1 != '\0') &&
       (iVar12 = OCSP_request_add1_nonce(local_170,(uchar *)0x0,-1), iVar12 == 0)) {
LAB_0010200f:
      resp = (OCSP_RESPONSE *)0x0;
      bs = (OCSP_BASICRESP *)0x0;
      local_340 = (X509_STORE *)0x0;
      uVar3 = 1;
      goto LAB_00100525;
    }
    if (local_288 == 0) goto LAB_001009be;
    if (local_298 == 0) {
      local_298 = local_288;
    }
    local_2d8 = (X509 *)load_cert_pass(local_288,0,1,0,"signer certificate");
    if (local_2d8 == (X509 *)0x0) {
      resp = (OCSP_RESPONSE *)0x0;
      bs = (OCSP_BASICRESP *)0x0;
      BIO_printf(_bio_err,"Error loading signer certificate\n");
      local_340 = (X509_STORE *)0x0;
      uVar3 = 1;
      goto LAB_00100525;
    }
    if ((local_278 != 0) &&
       (iVar12 = load_certs(local_278,0,&local_160,0,"signer certificates"), iVar12 == 0))
    goto LAB_0010200f;
    local_2e0 = (EVP_PKEY *)load_key(local_298,0,0,0,0,"signer private key");
    if (local_2e0 != (EVP_PKEY *)0x0) {
      iVar12 = OCSP_request_sign(local_170,local_2d8,local_2e0,(EVP_MD *)0x0,local_160,local_250);
      if (iVar12 != 0) goto LAB_001009be;
      resp = (OCSP_RESPONSE *)0x0;
      bs = (OCSP_BASICRESP *)0x0;
      BIO_printf(_bio_err,"Error signing OCSP request\n");
      local_340 = (X509_STORE *)0x0;
      uVar3 = 1;
      goto LAB_00100525;
    }
  }
LAB_00101dbe:
  local_340 = (X509_STORE *)0x0;
  resp = (OCSP_RESPONSE *)0x0;
  bs = (OCSP_BASICRESP *)0x0;
  uVar3 = 1;
  goto LAB_00100525;
LAB_00102489:
  bs = (OCSP_BASICRESP *)0x0;
  local_340 = (X509_STORE *)0x0;
  goto LAB_00100525;
}


