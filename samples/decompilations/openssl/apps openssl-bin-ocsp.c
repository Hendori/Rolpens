
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 ocsp_main(undefined4 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  OCSP_REQUEST *req;
  stack_st_CONF_VALUE *psVar8;
  EVP_MD *dgst;
  void *pvVar9;
  BIO *pBVar10;
  undefined *puVar11;
  long maxsec;
  int iVar12;
  int iVar13;
  uint uVar14;
  long lVar15;
  BIO *pBVar16;
  OCSP_ONEREQ *pOVar17;
  OCSP_CERTID *pOVar18;
  EVP_MD *dgst_00;
  BIGNUM *a;
  OCSP_CERTID *pOVar19;
  OPENSSL_STRING *ppcVar20;
  EVP_MD_CTX *ctx;
  undefined8 uVar21;
  X509_NAME *issuerName;
  ASN1_BIT_STRING *issuerKey;
  ASN1_INTEGER *serialNumber;
  char *pcVar22;
  long lVar23;
  undefined8 uVar24;
  OCSP_SINGLERESP *pOVar25;
  EVP_MD *pEVar26;
  X509 *pXVar27;
  SSL_METHOD *meth;
  SSL_CTX *pSVar28;
  OCSP_BASICRESP *bs;
  char *pcVar29;
  uint uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  uint uVar33;
  long in_FS_OFFSET;
  bool bVar34;
  X509_STORE *local_350;
  EVP_PKEY *local_348;
  long local_340;
  long local_330;
  X509 *local_328;
  BIO *local_320;
  long local_318;
  stack_st_X509 *local_310;
  void *local_300;
  BIO *local_2f8;
  undefined *local_2f0;
  EVP_PKEY *local_2e8;
  X509 *local_2e0;
  BIO *local_2d8;
  X509_VERIFY_PARAM *local_2d0;
  X509 *local_2c8;
  ulong local_2c0;
  undefined8 local_2b8;
  int local_2b0;
  long local_2a0;
  OCSP_CERTID *local_298;
  long local_290;
  long local_288;
  ulong local_280;
  long local_278;
  long local_270;
  int local_264;
  long local_260;
  long local_258;
  undefined8 local_250;
  ulong local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  int local_21c;
  undefined8 local_218;
  undefined4 local_210;
  undefined4 local_20c;
  undefined4 local_208;
  int local_200;
  EVP_MD *local_1f8;
  ASN1_OBJECT **local_1e8;
  OCSP_BASICRESP *local_1d8;
  ASN1_TIME *local_1d0;
  ASN1_TIME *local_1c8;
  int local_190;
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
  local_128 = &_LC0;
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
  local_190 = -1;
  local_118 = 300;
  local_110 = -1;
  lVar15 = OPENSSL_sk_new_null();
  if ((lVar15 == 0) || (local_330 = OPENSSL_sk_new_null(), local_330 == 0)) {
    a = (BIGNUM *)0x0;
    bs = (OCSP_BASICRESP *)0x0;
    local_2f0 = (undefined *)0x0;
    local_2f8 = (BIO *)0x0;
    local_300 = (void *)0x0;
    local_2d0 = (X509_VERIFY_PARAM *)0x0;
    local_350 = (X509_STORE *)0x0;
    local_2c8 = (X509 *)0x0;
    local_2e0 = (X509 *)0x0;
    local_328 = (X509 *)0x0;
    local_310 = (stack_st_X509 *)0x0;
    local_330 = 0;
    local_348 = (EVP_PKEY *)0x0;
    local_2e8 = (EVP_PKEY *)0x0;
    local_340 = 0;
    local_318 = 0;
    local_2d8 = (BIO *)0x0;
    local_320 = (BIO *)0x0;
    uVar32 = 1;
  }
  else {
    local_2d0 = X509_VERIFY_PARAM_new();
    if (local_2d0 != (X509_VERIFY_PARAM *)0x0) {
      bVar34 = false;
      opt_set_unknown_name("digest");
      pXVar27 = (X509 *)0x0;
      prog = (char *)opt_init(param_1,param_2,ocsp_options);
      local_280 = 0;
      local_2c0 = 0;
      local_248 = 0;
      local_264 = -1;
      bVar4 = false;
      bVar2 = false;
      local_2b0 = -1;
      local_21c = 0;
      bVar5 = false;
      bVar3 = false;
      local_200 = 0;
      bVar6 = false;
      cVar7 = '\x01';
      cVar1 = '\x01';
      uVar33 = 0xffffffff;
      local_208 = 0;
      local_20c = 0;
      local_210 = 0;
      local_2f0 = (undefined *)0x0;
      local_2f8 = (BIO *)0x0;
      local_300 = (void *)0x0;
      local_2a0 = 0;
      local_288 = 0;
      local_2d8 = (BIO *)0x0;
      local_290 = 0;
      local_278 = 0;
      local_2b8 = 0;
      local_2e8 = (EVP_PKEY *)0x0;
      local_348 = (EVP_PKEY *)0x0;
      local_270 = 0;
      local_258 = 0;
      local_260 = 0;
      local_350 = (X509_STORE *)0x0;
      local_320 = (BIO *)0x0;
      local_2e0 = (X509 *)0x0;
      local_240 = 0;
      local_238 = 0;
      local_250 = 0;
      local_340 = 0;
      local_218 = 0;
      local_230 = 0;
      local_228 = 0;
      local_328 = (X509 *)0x0;
      local_310 = (stack_st_X509 *)0x0;
      local_318 = 0;
      iVar13 = local_2b0;
switchD_00100382_caseD_0:
      local_2b0 = iVar13;
      iVar12 = opt_next();
      if (iVar12 != 0) {
LAB_00100365:
        iVar13 = local_2b0;
        if (0x3c < iVar12) goto LAB_001005d0;
        if (iVar12 < -1) goto switchD_00100382_caseD_0;
        switch(iVar12) {
        default:
          goto switchD_00100382_caseD_0;
        case 1:
          uVar32 = 0;
          opt_help(ocsp_options);
          goto LAB_00100ef4;
        case 2:
          local_250 = opt_arg();
          goto switchD_00100382_caseD_0;
        case 3:
          pcVar22 = (char *)opt_arg();
          lVar23 = strtol(pcVar22,(char **)0x0,10);
          local_264 = (int)lVar23;
          goto switchD_00100382_caseD_0;
        case 4:
          CRYPTO_free(local_300);
          CRYPTO_free(local_2f8);
          CRYPTO_free(local_2f0);
          uVar24 = opt_arg();
          iVar12 = OSSL_HTTP_parse_url(uVar24,&local_190,0,&local_138,&local_130,0,&local_128,0,0);
          if (iVar12 == 0) {
            uVar32 = 1;
            BIO_printf(_bio_err,"%s Error parsing -url argument\n",prog);
            local_2f0 = (undefined *)0x0;
            local_2f8 = (BIO *)0x0;
            local_300 = (void *)0x0;
            goto LAB_00100ef4;
          }
          local_300 = local_138;
          local_2f8 = local_130;
          local_2f0 = local_128;
          goto switchD_00100382_caseD_0;
        case 5:
          local_138 = (void *)opt_arg();
          goto switchD_00100382_caseD_0;
        case 6:
          local_130 = (BIO *)opt_arg();
          goto switchD_00100382_caseD_0;
        case 7:
          local_238 = opt_arg();
          goto switchD_00100382_caseD_0;
        case 8:
          local_240 = opt_arg();
          goto switchD_00100382_caseD_0;
        case 9:
          bVar5 = true;
          goto switchD_00100382_caseD_0;
        case 10:
          bVar6 = true;
          goto switchD_00100382_caseD_0;
        case 0xb:
          cVar7 = '\x02';
          cVar1 = '\x02';
          goto switchD_00100382_caseD_0;
        case 0xc:
          cVar7 = '\0';
          cVar1 = '\0';
          goto switchD_00100382_caseD_0;
        case 0xd:
          local_280 = local_280 | 1;
          goto switchD_00100382_caseD_0;
        case 0xe:
          local_280 = local_280 | 0x400;
          goto switchD_00100382_caseD_0;
        case 0xf:
          local_248 = 1;
          goto switchD_00100382_caseD_0;
        case 0x10:
          local_2c0 = local_2c0 | 4;
          goto switchD_00100382_caseD_0;
        case 0x11:
          local_2c0 = local_2c0 | 0x10;
          goto switchD_00100382_caseD_0;
        case 0x12:
          local_2c0 = local_2c0 | 8;
          goto switchD_00100382_caseD_0;
        case 0x13:
          local_2c0 = local_2c0 | 0x100;
          goto switchD_00100382_caseD_0;
        case 0x14:
          local_2c0 = local_2c0 | 0x20;
          goto switchD_00100382_caseD_0;
        case 0x15:
          goto switchD_00100382_caseD_15;
        case 0x16:
          local_2c0 = local_2c0 | 2;
          goto switchD_00100382_caseD_0;
        case 0x17:
          bVar3 = true;
          goto switchD_00100382_caseD_0;
        case 0x18:
          bVar4 = true;
          bVar2 = true;
          goto switchD_00100382_caseD_0;
        case 0x19:
          bVar2 = true;
          goto switchD_00100382_caseD_0;
        case 0x1a:
          bVar4 = true;
          goto switchD_00100382_caseD_0;
        case 0x1b:
          local_320 = (BIO *)opt_arg();
          goto switchD_00100382_caseD_0;
        case 0x1c:
          local_350 = (X509_STORE *)opt_arg();
          goto switchD_00100382_caseD_0;
        case 0x1d:
          local_288 = opt_arg();
          goto switchD_00100382_caseD_0;
        case 0x1e:
          local_290 = opt_arg();
switchD_00100382_caseD_15:
          local_2c0 = local_2c0 | 0x200;
          iVar12 = opt_next();
          if (iVar12 == 0) goto LAB_00100670;
          goto LAB_00100365;
        case 0x1f:
          local_278 = opt_arg();
          goto switchD_00100382_caseD_0;
        case 0x20:
          local_290 = opt_arg();
          goto switchD_00100382_caseD_0;
        case 0x21:
          local_228 = opt_arg();
          goto switchD_00100382_caseD_0;
        case 0x22:
          local_230 = opt_arg();
          goto switchD_00100382_caseD_0;
        case 0x23:
          local_218 = opt_arg();
          goto switchD_00100382_caseD_0;
        case 0x24:
          local_210 = 1;
          goto switchD_00100382_caseD_0;
        case 0x25:
          local_20c = 1;
          goto switchD_00100382_caseD_0;
        case 0x26:
          local_208 = 1;
          goto switchD_00100382_caseD_0;
        case 0x27:
          uVar24 = opt_arg();
          opt_long(uVar24);
          goto switchD_00100382_caseD_0;
        case 0x28:
          uVar24 = opt_arg();
          opt_long(uVar24);
          goto switchD_00100382_caseD_0;
        case 0x29:
          local_2a0 = opt_arg();
          goto switchD_00100382_caseD_0;
        case 0x2a:
          local_260 = opt_arg();
          goto switchD_00100382_caseD_0;
        case 0x2b:
          local_258 = opt_arg();
          goto switchD_00100382_caseD_0;
        case 0x2c:
          local_128 = (undefined *)opt_arg();
          goto switchD_00100382_caseD_0;
        case 0x2d:
          uVar24 = opt_arg();
          pXVar27 = (X509 *)load_cert_pass(uVar24,0,1,0,"issuer certificate");
          if (pXVar27 == (X509 *)0x0) goto LAB_00100eec;
          if ((local_310 != (stack_st_X509 *)0x0) ||
             (local_310 = (stack_st_X509 *)OPENSSL_sk_new_null(), local_310 != (stack_st_X509 *)0x0)
             ) {
            iVar12 = OPENSSL_sk_push(local_310);
            goto joined_r0x00100634;
          }
          break;
        case 0x2e:
          reset_unknown();
          X509_free(local_328);
          uVar24 = opt_arg();
          local_328 = (X509 *)load_cert_pass(uVar24,0,1,0,"certificate");
          if (local_328 != (X509 *)0x0) {
            if (local_180 == (EVP_MD *)0x0) {
              local_180 = EVP_sha1();
            }
            pEVar26 = local_180;
            if (pXVar27 == (X509 *)0x0) goto LAB_00101cef;
            if (((local_170 == (OCSP_REQUEST *)0x0) &&
                (local_170 = OCSP_REQUEST_new(), local_170 == (OCSP_REQUEST *)0x0)) ||
               ((pOVar18 = OCSP_cert_to_id(pEVar26,local_328,pXVar27), pOVar18 == (OCSP_CERTID *)0x0
                || ((iVar12 = OPENSSL_sk_push(local_330,pOVar18), iVar12 == 0 ||
                    (pOVar17 = OCSP_request_add0_id(local_170,pOVar18),
                    pOVar17 == (OCSP_ONEREQ *)0x0)))))) {
              uVar32 = 1;
              BIO_printf(_bio_err,"Error Creating OCSP request\n");
              goto LAB_00100ef4;
            }
LAB_0010150d:
            opt_arg();
            iVar12 = OPENSSL_sk_push(lVar15);
            if (iVar12 == 0) goto LAB_00100eec;
            bVar34 = false;
            goto switchD_00100382_caseD_0;
          }
          break;
        case 0x2f:
          reset_unknown();
          if (local_180 == (EVP_MD *)0x0) {
            local_180 = EVP_sha1();
          }
          pEVar26 = local_180;
          pcVar22 = (char *)opt_arg();
          if (pXVar27 == (X509 *)0x0) {
LAB_00101cef:
            BIO_printf(_bio_err,"No issuer certificate specified\n");
            goto LAB_00100eec;
          }
          if ((local_170 != (OCSP_REQUEST *)0x0) ||
             (local_170 = OCSP_REQUEST_new(), local_170 != (OCSP_REQUEST *)0x0)) {
            issuerName = X509_get_subject_name(pXVar27);
            issuerKey = X509_get0_pubkey_bitstr(pXVar27);
            serialNumber = s2i_ASN1_INTEGER((X509V3_EXT_METHOD *)0x0,pcVar22);
            if (serialNumber == (ASN1_INTEGER *)0x0) {
              pcVar29 = "Error converting serial number %s\n";
              goto LAB_00100ede;
            }
            pOVar18 = OCSP_cert_id_new(pEVar26,issuerName,issuerKey,serialNumber);
            ASN1_INTEGER_free(serialNumber);
            if (((pOVar18 != (OCSP_CERTID *)0x0) &&
                (iVar12 = OPENSSL_sk_push(local_330,pOVar18), iVar12 != 0)) &&
               (pOVar17 = OCSP_request_add0_id(local_170,pOVar18), pOVar17 != (OCSP_ONEREQ *)0x0))
            goto LAB_0010150d;
          }
          BIO_printf(_bio_err,"Error Creating OCSP request\n");
          goto LAB_00100eec;
        case 0x30:
          local_270 = opt_arg();
          goto switchD_00100382_caseD_0;
        case 0x31:
          local_2e0 = (X509 *)opt_arg();
          goto switchD_00100382_caseD_0;
        case 0x32:
          local_21c = opt_int_arg();
          iVar13 = 0;
          if (local_2b0 != -1) {
            iVar13 = local_2b0;
          }
          goto switchD_00100382_caseD_0;
        case 0x33:
          uVar33 = opt_int_arg();
          goto switchD_00100382_caseD_0;
        case 0x34:
          pcVar22 = (char *)opt_arg();
          lVar23 = strtol(pcVar22,(char **)0x0,10);
          iVar13 = (int)lVar23;
          goto switchD_00100382_caseD_0;
        case 0x35:
          local_348 = (EVP_PKEY *)opt_arg();
          goto switchD_00100382_caseD_0;
        case 0x36:
          local_2e8 = (EVP_PKEY *)opt_arg();
          goto switchD_00100382_caseD_0;
        case 0x37:
          local_2d8 = (BIO *)opt_arg();
          goto switchD_00100382_caseD_0;
        case 0x38:
          local_340 = opt_arg();
          goto switchD_00100382_caseD_0;
        case 0x39:
          if ((local_318 != 0) || (local_318 = OPENSSL_sk_new_null(), local_318 != 0)) {
            opt_arg();
            iVar12 = OPENSSL_sk_push(local_318);
            goto joined_r0x00100634;
          }
          break;
        case 0x3a:
          pcVar22 = (char *)opt_arg();
          pcVar29 = strchr(pcVar22,0x3d);
          if (pcVar29 != (char *)0x0) {
            *pcVar29 = '\0';
            iVar12 = X509V3_add_value(pcVar22,pcVar29 + 1,&local_168);
            goto joined_r0x00100634;
          }
          BIO_printf(_bio_err,"Missing = in header key=value\n");
          goto switchD_00100382_caseD_ffffffff;
        case 0x3b:
          local_2b8 = opt_arg();
          goto switchD_00100382_caseD_0;
        case 0x3c:
          uVar24 = opt_arg();
          iVar12 = opt_md(uVar24);
          if (iVar12 == 0) goto switchD_00100382_caseD_ffffffff;
          goto switchD_00100382_caseD_0;
        case -1:
          goto switchD_00100382_caseD_ffffffff;
        }
        local_350 = (X509_STORE *)0x0;
        a = (BIGNUM *)0x0;
        bs = (OCSP_BASICRESP *)0x0;
        local_2c8 = (X509 *)0x0;
        local_2e0 = (X509 *)0x0;
        local_348 = (EVP_PKEY *)0x0;
        local_2e8 = (EVP_PKEY *)0x0;
        local_340 = 0;
        local_2d8 = (BIO *)0x0;
        local_320 = (BIO *)0x0;
        uVar32 = 1;
        goto LAB_00100437;
      }
LAB_00100670:
      iVar13 = opt_check_rest_arg(0);
      if (iVar13 == 0) goto switchD_00100382_caseD_ffffffff;
      if (bVar34) goto LAB_00100eb2;
      if ((local_340 != 0) && (iVar13 = opt_md(local_340), iVar13 == 0)) goto LAB_00100eec;
      if (local_170 == (OCSP_REQUEST *)0x0) {
        if (local_320 == (BIO *)0x0 && local_350 == (X509_STORE *)0x0) {
          if ((local_270 == 0) || (local_130 == (BIO *)0x0)) goto switchD_00100382_caseD_ffffffff;
          cVar1 = (cVar7 == '\x02') * '\x02';
LAB_00101891:
          local_320 = (BIO *)http_server_init(prog,local_130,0xffffffff);
          if (local_320 == (BIO *)0x0) goto LAB_00100eec;
        }
        else {
          cVar1 = (cVar1 == '\x02') * '\x02';
          if (local_320 != (BIO *)0x0) {
            pBVar16 = (BIO *)bio_open_default(local_320,0x72,4);
            if (pBVar16 != (BIO *)0x0) {
              local_170 = (OCSP_REQUEST *)
                          ASN1_d2i_bio(OCSP_REQUEST_new,&d2i_OCSP_REQUEST,pBVar16,(void **)0x0);
              BIO_free(pBVar16);
              if (local_170 != (OCSP_REQUEST *)0x0) goto LAB_001006b9;
              BIO_printf(_bio_err,"Error reading OCSP request\n");
            }
            goto LAB_00100eec;
          }
          local_320 = local_130;
          if (local_130 != (BIO *)0x0) goto LAB_00101891;
        }
      }
      else {
LAB_001006b9:
        local_320 = (BIO *)0x0;
      }
      if (local_348 != (EVP_PKEY *)0x0) {
        if (local_2e8 == (EVP_PKEY *)0x0) {
          local_2e8 = local_348;
        }
        local_2c8 = (X509 *)load_cert_pass(local_348,0,1,0,"responder certificate");
        if (local_2c8 == (X509 *)0x0) {
          a = (BIGNUM *)0x0;
          bs = (OCSP_BASICRESP *)0x0;
          BIO_printf(_bio_err,"Error loading responder certificate\n");
          local_350 = (X509_STORE *)0x0;
          local_2e0 = (X509 *)0x0;
          local_348 = (EVP_PKEY *)0x0;
          local_2e8 = (EVP_PKEY *)0x0;
          local_340 = 0;
          local_2d8 = (BIO *)0x0;
          uVar32 = 1;
          goto LAB_00100437;
        }
        iVar13 = load_certs(local_2e0,0,&local_148,0,"CA certificates");
        if ((iVar13 != 0) &&
           ((local_2d8 == (BIO *)0x0 ||
            (iVar13 = load_certs(local_2d8,0,&local_150,0,"responder other certificates"),
            iVar13 != 0)))) {
          iVar13 = app_passwd(local_2b8,0,&local_120,0);
          if (iVar13 == 0) {
            BIO_printf(_bio_err,"Error getting password\n");
          }
          else {
            local_348 = (EVP_PKEY *)load_key(local_2e8,0,0,local_120,0,"responder private key");
            if (local_348 != (EVP_PKEY *)0x0) {
              if (local_270 == 0) goto LAB_00102504;
              if (local_148 == 0) goto LAB_00101e36;
              local_340 = load_index(local_270);
              if ((local_340 != 0) && (iVar13 = index_index(local_340), 0 < iVar13))
              goto LAB_001007fc;
              a = (BIGNUM *)0x0;
              bs = (OCSP_BASICRESP *)0x0;
              BIO_printf(_bio_err,"Problem with index file: %s (could not load/parse file)\n",
                         local_270);
              local_350 = (X509_STORE *)0x0;
              local_2e0 = (X509 *)0x0;
              local_2e8 = (EVP_PKEY *)0x0;
              local_2d8 = (BIO *)0x0;
              uVar32 = 1;
              goto LAB_00100437;
            }
          }
        }
        local_350 = (X509_STORE *)0x0;
        a = (BIGNUM *)0x0;
        bs = (OCSP_BASICRESP *)0x0;
        local_2e0 = (X509 *)0x0;
        local_348 = (EVP_PKEY *)0x0;
        local_2e8 = (EVP_PKEY *)0x0;
        local_340 = 0;
        local_2d8 = (BIO *)0x0;
        uVar32 = 1;
        goto LAB_00100437;
      }
      local_2c8 = (X509 *)0x0;
      if (local_270 != 0) {
LAB_00101e36:
        a = (BIGNUM *)0x0;
        bs = (OCSP_BASICRESP *)0x0;
        BIO_printf(_bio_err,"Responder mode requires certificate, key, and CA.\n");
        local_350 = (X509_STORE *)0x0;
        local_2e0 = (X509 *)0x0;
        local_2e8 = (EVP_PKEY *)0x0;
        local_340 = 0;
        local_2d8 = (BIO *)0x0;
        uVar32 = 1;
        goto LAB_00100437;
      }
LAB_00102504:
      local_340 = 0;
LAB_001007fc:
      if (_n_responders == 0) {
        if (local_320 != (BIO *)0x0) {
          if (0 < local_264) goto LAB_001026dd;
          if (local_320 != (BIO *)0x0) goto LAB_0010082f;
        }
      }
      else if (local_320 != (BIO *)0x0) {
        spawn_loop(prog);
        if (0 < local_264) {
LAB_001026dd:
          signal(0xe,(__sighandler_t)&socket_timeout);
        }
LAB_0010082f:
        trace_log_message(0xffffffff,prog,6,"waiting for OCSP client connections...");
      }
      local_2e0 = (X509 *)0x0;
      local_2e8 = (EVP_PKEY *)0x0;
      local_2d8 = (BIO *)0x0;
      goto LAB_001008a8;
    }
    a = (BIGNUM *)0x0;
    local_2f0 = (undefined *)0x0;
    bs = (OCSP_BASICRESP *)0x0;
    local_2f8 = (BIO *)0x0;
    local_300 = (void *)0x0;
    local_350 = (X509_STORE *)0x0;
    local_2c8 = (X509 *)0x0;
    local_2e0 = (X509 *)0x0;
    local_328 = (X509 *)0x0;
    local_310 = (stack_st_X509 *)0x0;
    local_348 = (EVP_PKEY *)0x0;
    local_2e8 = (EVP_PKEY *)0x0;
    local_340 = 0;
    local_318 = 0;
    local_2d8 = (BIO *)0x0;
    local_320 = (BIO *)0x0;
    uVar32 = 1;
  }
  goto LAB_00100437;
LAB_001005d0:
  if (iVar12 == 0x7f0) {
    if (bVar34) {
LAB_00100eb2:
      BIO_printf(_bio_err,"%s: Digest must be before -cert or -serial\n",prog);
      goto switchD_00100382_caseD_ffffffff;
    }
    uVar24 = opt_unknown();
    iVar12 = opt_md(uVar24);
    if (iVar12 == 0) goto switchD_00100382_caseD_ffffffff;
    bVar34 = true;
  }
  else if (iVar12 < 0x7f1) {
    if (iVar12 < 0x645) {
      if (0x640 < iVar12) {
        iVar12 = opt_provider(iVar12);
joined_r0x00100634:
        if (iVar12 == 0) goto LAB_00100eec;
      }
    }
    else if (iVar12 - 0x7d1U < 0x1e) {
      iVar12 = opt_verify(iVar12);
      if (iVar12 == 0) goto LAB_00100eec;
      local_200 = local_200 + 1;
    }
  }
  else if (iVar12 == 0x7f1) {
    pcVar22 = (char *)opt_arg();
    lVar23 = strtol(pcVar22,(char **)0x0,10);
    _n_responders = (int)lVar23;
  }
  goto switchD_00100382_caseD_0;
switchD_00100382_caseD_ffffffff:
  pcVar29 = "%s: Use -help for summary.\n";
  pcVar22 = prog;
LAB_00100ede:
  BIO_printf(_bio_err,pcVar29,pcVar22);
LAB_00100eec:
  uVar32 = 1;
LAB_00100ef4:
  a = (BIGNUM *)0x0;
  local_350 = (X509_STORE *)0x0;
  bs = (OCSP_BASICRESP *)0x0;
  local_2c8 = (X509 *)0x0;
  local_2e0 = (X509 *)0x0;
  local_348 = (EVP_PKEY *)0x0;
  local_2e8 = (EVP_PKEY *)0x0;
  local_340 = 0;
  local_2d8 = (BIO *)0x0;
  local_320 = (BIO *)0x0;
  goto LAB_00100437;
LAB_001008a8:
  uVar32 = 0;
  if (local_320 != (BIO *)0x0) {
    lVar23 = local_340;
    do {
      local_340 = lVar23;
      if (((lVar23 != 0) &&
          (iVar13 = stat(*(char **)(lVar23 + 0x10),(stat *)local_d8), iVar13 != -1)) &&
         ((*(long *)(lVar23 + 0x70) != local_80 ||
          (((*(long *)(lVar23 + 0x80) != local_70 || (*(__ino_t *)(lVar23 + 0x20) != local_d8._8_8_)
            ) || (*(OPENSSL_STRING *)(lVar23 + 0x18) != (OPENSSL_STRING)local_d8._0_8_)))))) {
        __syslog_chk(6,2,"index file changed, reloading");
        local_340 = load_index(local_270,0);
        if ((local_340 == 0) || (iVar13 = index_index(local_340), iVar13 < 1)) {
          free_index(local_340);
          trace_log_message(0xffffffff,prog,3,"error reloading updated index: %s",local_270);
          local_340 = lVar23;
        }
        else {
          free_index(lVar23);
        }
      }
      pcVar22 = prog;
      local_170 = (OCSP_REQUEST *)0x0;
      uVar24 = OCSP_REQUEST_it();
      iVar13 = http_server_get_asn1_req
                         (uVar24,&local_170,0,&local_188,local_320,0,pcVar22,1,local_264);
      lVar23 = local_340;
    } while (iVar13 == 0);
    if (local_170 != (OCSP_REQUEST *)0x0) goto LAB_001018c8;
    a = (BIGNUM *)0x0;
    if (iVar13 != 1) goto LAB_00100dec;
    a = (BIGNUM *)OCSP_response_create(1,(OCSP_BASICRESP *)0x0);
    goto LAB_00100dc9;
  }
  if (local_170 == (OCSP_REQUEST *)0x0) {
    if (((local_260 == 0 && (local_270 == 0 && local_288 == 0)) && (local_138 == (void *)0x0)) &&
       (cVar1 == '\0')) {
LAB_001008f4:
      local_2d8 = (BIO *)bio_open_default(local_250,0x77,0x8001);
      if (local_2d8 == (BIO *)0x0) {
LAB_00102746:
        local_350 = (X509_STORE *)0x0;
        a = (BIGNUM *)0x0;
        bs = (OCSP_BASICRESP *)0x0;
        uVar32 = 1;
      }
      else {
        if ((bVar2) && (local_170 != (OCSP_REQUEST *)0x0)) {
          OCSP_REQUEST_print(local_2d8,local_170,0);
        }
        if (local_260 != 0) {
          pBVar16 = (BIO *)bio_open_default(local_260,0x77,4);
          if (pBVar16 == (BIO *)0x0) goto LAB_00101e14;
          ASN1_i2d_bio(&i2d_OCSP_REQUEST,pBVar16,(uchar *)local_170);
          BIO_free(pBVar16);
        }
        puVar11 = local_128;
        pBVar10 = local_130;
        pvVar9 = local_138;
        dgst = local_140;
        lVar23 = local_148;
        uVar24 = local_150;
        psVar8 = local_168;
        req = local_170;
        pEVar26 = local_178;
        pBVar16 = _bio_err;
        if (local_340 != 0) {
          local_108 = (EVP_PKEY_CTX *)0x0;
          local_1f8 = local_140;
          uVar14 = OCSP_request_onereq_count(local_170);
          if ((int)uVar14 < 1) {
            ctx = (EVP_MD_CTX *)0x0;
            a = (BIGNUM *)OCSP_response_create(1,(OCSP_BASICRESP *)0x0);
            local_1d8 = (OCSP_BASICRESP *)0x0;
            local_1d0 = (ASN1_TIME *)0x0;
            local_1c8 = (ASN1_TIME *)0x0;
          }
          else {
            local_1d8 = OCSP_BASICRESP_new();
            if (local_1d8 == (OCSP_BASICRESP *)0x0) {
              ctx = (EVP_MD_CTX *)0x0;
              a = (BIGNUM *)OCSP_response_create(2,(OCSP_BASICRESP *)0x0);
              local_1d0 = (ASN1_TIME *)0x0;
              local_1c8 = (ASN1_TIME *)0x0;
            }
            else {
              local_1c8 = X509_gmtime_adj((ASN1_TIME *)0x0,0);
              local_1d0 = (ASN1_TIME *)0x0;
              if (local_2b0 != -1) {
                local_1d0 = X509_time_adj_ex((ASN1_TIME *)0x0,local_2b0,(long)(local_21c * 0x3c),
                                             (time_t *)0x0);
              }
              if (dgst == (EVP_MD *)0x0) {
                local_1f8 = pEVar26;
                uVar30 = 0;
                local_298 = (OCSP_CERTID *)(ulong)uVar33;
                goto LAB_00102148;
              }
              uVar30 = 0;
              do {
                pOVar17 = OCSP_request_onereq_get0(req,uVar30);
                pOVar18 = OCSP_onereq_get0_id(pOVar17);
                OCSP_id_get0_info((ASN1_OCTET_STRING **)0x0,(ASN1_OBJECT **)&local_f8,
                                  (ASN1_OCTET_STRING **)0x0,(ASN1_INTEGER **)0x0,pOVar18);
                iVar13 = OBJ_obj2nid((ASN1_OBJECT *)CONCAT44(local_f8._4_4_,(int)local_f8));
                pcVar22 = OBJ_nid2sn(iVar13);
                dgst_00 = EVP_get_digestbyname(pcVar22);
                if (dgst_00 == (EVP_MD *)0x0) goto LAB_00102608;
                bVar34 = false;
                iVar13 = 0;
                local_298 = (OCSP_CERTID *)0x0;
                while ((iVar12 = OPENSSL_sk_num(), iVar13 < iVar12 && (!bVar34))) {
                  pXVar27 = (X509 *)OPENSSL_sk_value(lVar23);
                  pOVar19 = OCSP_cert_to_id(dgst_00,(X509 *)0x0,pXVar27);
                  iVar12 = OCSP_id_issuer_cmp(pOVar19,pOVar18);
                  if (iVar12 == 0) {
                    bVar34 = true;
                    local_298 = OCSP_cert_to_id(dgst,(X509 *)0x0,pXVar27);
                  }
                  iVar13 = iVar13 + 1;
                  OCSP_CERTID_free(pOVar19);
                }
                OCSP_id_get0_info((ASN1_OCTET_STRING **)0x0,(ASN1_OBJECT **)0x0,
                                  (ASN1_OCTET_STRING **)0x0,(ASN1_INTEGER **)&local_100,pOVar18);
                local_d8 = (undefined1  [16])0x0;
                local_c8 = (undefined1  [16])0x0;
                local_b8 = (undefined1  [16])0x0;
                a = ASN1_INTEGER_to_BN((ASN1_INTEGER *)CONCAT44(local_100._4_4_,(int)local_100),
                                       (BIGNUM *)0x0);
                if (a == (BIGNUM *)0x0) goto LAB_00102bc1;
                iVar13 = BN_is_zero(a);
                if (iVar13 == 0) {
                  pOVar19 = (OCSP_CERTID *)BN_bn2hex(a);
                }
                else {
                  pOVar19 = (OCSP_CERTID *)CRYPTO_strdup("00","apps/ocsp.c",0x4a7);
                  if (pOVar19 == (OCSP_CERTID *)0x0) {
LAB_0010232a:
                    OPENSSL_die("assertion failed: itmp","apps/ocsp.c",0x4a8);
LAB_00102340:
                    OCSP_basic_add1_status
                              (local_1d8,pOVar19,2,0,(ASN1_TIME *)0x0,local_1c8,local_1d0);
                    do {
                      uVar30 = (int)pOVar18 + 1;
                      if (uVar30 == uVar14) {
                        pEVar26 = local_1f8;
                        uVar33 = (uint)local_298;
                        goto LAB_00100cae;
                      }
LAB_00102148:
                      local_1e8 = (ASN1_OBJECT **)&local_f8;
                      pOVar17 = OCSP_request_onereq_get0(req,uVar30);
                      pOVar19 = OCSP_onereq_get0_id(pOVar17);
                      OCSP_id_get0_info((ASN1_OCTET_STRING **)0x0,local_1e8,
                                        (ASN1_OCTET_STRING **)0x0,(ASN1_INTEGER **)0x0,pOVar19);
                      iVar13 = OBJ_obj2nid((ASN1_OBJECT *)CONCAT44(local_f8._4_4_,(int)local_f8));
                      pcVar22 = OBJ_nid2sn(iVar13);
                      pEVar26 = EVP_get_digestbyname(pcVar22);
                      if (pEVar26 == (EVP_MD *)0x0) {
LAB_0010261f:
                        uVar33 = (uint)local_298;
                        goto LAB_00102608;
                      }
                      iVar13 = 0;
                      bVar34 = false;
                      while ((iVar12 = OPENSSL_sk_num(), iVar13 < iVar12 && (!bVar34))) {
                        pXVar27 = (X509 *)OPENSSL_sk_value(lVar23);
                        pOVar18 = OCSP_cert_to_id(pEVar26,(X509 *)0x0,pXVar27);
                        iVar12 = OCSP_id_issuer_cmp(pOVar18,pOVar19);
                        iVar13 = iVar13 + 1;
                        OCSP_CERTID_free(pOVar18);
                        bVar34 = iVar12 == 0;
                      }
                      pOVar18 = (OCSP_CERTID *)(ulong)uVar30;
                      OCSP_id_get0_info((ASN1_OCTET_STRING **)0x0,(ASN1_OBJECT **)0x0,
                                        (ASN1_OCTET_STRING **)0x0,(ASN1_INTEGER **)&local_100,
                                        pOVar19);
                      local_d8 = (undefined1  [16])0x0;
                      local_c8 = (undefined1  [16])0x0;
                      local_b8 = (undefined1  [16])0x0;
                      a = ASN1_INTEGER_to_BN((ASN1_INTEGER *)
                                             CONCAT44(local_100._4_4_,(int)local_100),(BIGNUM *)0x0)
                      ;
                      if (a == (BIGNUM *)0x0) goto LAB_00102bc1;
                      iVar13 = BN_is_zero(a);
                      if (iVar13 == 0) {
                        pcVar22 = BN_bn2hex(a);
                      }
                      else {
                        pcVar22 = CRYPTO_strdup("00","apps/ocsp.c",0x4a7);
                        if (pcVar22 == (char *)0x0) goto LAB_0010232a;
                      }
                      local_c8._8_8_ = pcVar22;
                      BN_free(a);
                      ppcVar20 = TXT_DB_get_by_index(*(TXT_DB **)(local_340 + 8),3,
                                                     (OPENSSL_STRING *)local_d8);
                      CRYPTO_free(pcVar22);
                      if (!bVar34) goto LAB_00102340;
                      if (ppcVar20 == (OPENSSL_STRING *)0x0) {
                        OCSP_basic_add1_status
                                  (local_1d8,pOVar19,2,0,(ASN1_TIME *)0x0,local_1c8,local_1d0);
                      }
                      else if (**ppcVar20 == 'V') {
                        OCSP_basic_add1_status
                                  (local_1d8,pOVar19,0,0,(ASN1_TIME *)0x0,local_1c8,local_1d0);
                      }
                      else if (**ppcVar20 == 'R') {
                        local_f0 = (ASN1_OBJECT *)0x0;
                        local_e8 = (ASN1_TIME *)0x0;
                        local_e0 = (ASN1_GENERALIZEDTIME *)0x0;
                        local_18c = -1;
                        unpack_revinfo(&local_e8,&local_18c,&local_f0,&local_e0,ppcVar20[2]);
                        pOVar25 = OCSP_basic_add1_status
                                            (local_1d8,pOVar19,1,local_18c,local_e8,local_1c8,
                                             local_1d0);
                        if (pOVar25 == (OCSP_SINGLERESP *)0x0) goto LAB_0010261f;
                        if (local_e0 == (ASN1_GENERALIZEDTIME *)0x0) {
                          if (local_f0 != (ASN1_OBJECT *)0x0) {
                            OCSP_SINGLERESP_add1_ext_i2d(pOVar25,0x1ae,local_f0,0,0);
                          }
                        }
                        else {
                          OCSP_SINGLERESP_add1_ext_i2d(pOVar25,0x8e,local_e0,0,0);
                        }
                        ASN1_OBJECT_free(local_f0);
                        ASN1_TIME_free(local_e8);
                        ASN1_GENERALIZEDTIME_free(local_e0);
                      }
                      OCSP_CERTID_free((OCSP_CERTID *)0x0);
                    } while( true );
                  }
                }
                local_c8._8_8_ = pOVar19;
                BN_free(a);
                ppcVar20 = TXT_DB_get_by_index(*(TXT_DB **)(local_340 + 8),3,
                                               (OPENSSL_STRING *)local_d8);
                CRYPTO_free(pOVar19);
                if (local_298 != (OCSP_CERTID *)0x0) {
                  pOVar18 = local_298;
                }
                if (bVar34) {
                  if (ppcVar20 == (OPENSSL_STRING *)0x0) {
                    OCSP_basic_add1_status
                              (local_1d8,pOVar18,2,0,(ASN1_TIME *)0x0,local_1c8,local_1d0);
                  }
                  else if (**ppcVar20 == 'V') {
                    OCSP_basic_add1_status
                              (local_1d8,pOVar18,0,0,(ASN1_TIME *)0x0,local_1c8,local_1d0);
                  }
                  else if (**ppcVar20 == 'R') {
                    local_f0 = (ASN1_OBJECT *)0x0;
                    local_e8 = (ASN1_TIME *)0x0;
                    local_e0 = (ASN1_GENERALIZEDTIME *)0x0;
                    local_18c = -1;
                    unpack_revinfo(&local_e8,&local_18c,&local_f0,&local_e0,ppcVar20[2]);
                    pOVar25 = OCSP_basic_add1_status
                                        (local_1d8,pOVar18,1,local_18c,local_e8,local_1c8,local_1d0)
                    ;
                    if (pOVar25 == (OCSP_SINGLERESP *)0x0) goto LAB_00102608;
                    if (local_e0 == (ASN1_GENERALIZEDTIME *)0x0) {
                      if (local_f0 != (ASN1_OBJECT *)0x0) {
                        OCSP_SINGLERESP_add1_ext_i2d(pOVar25,0x1ae,local_f0,0,0);
                      }
                    }
                    else {
                      OCSP_SINGLERESP_add1_ext_i2d(pOVar25,0x8e,local_e0,0,0);
                    }
                    ASN1_OBJECT_free(local_f0);
                    ASN1_TIME_free(local_e8);
                    ASN1_GENERALIZEDTIME_free(local_e0);
                  }
                  OCSP_CERTID_free(local_298);
                }
                else {
                  OCSP_basic_add1_status(local_1d8,pOVar18,2,0,(ASN1_TIME *)0x0,local_1c8,local_1d0)
                  ;
                }
                uVar30 = uVar30 + 1;
              } while (uVar14 != uVar30);
LAB_00100cae:
              OCSP_copy_nonce(local_1d8,req);
              ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
              if ((ctx == (EVP_MD_CTX *)0x0) ||
                 (iVar13 = EVP_DigestSignInit(ctx,&local_108,pEVar26,(ENGINE *)0x0,local_348),
                 iVar13 == 0)) {
LAB_00102537:
                a = (BIGNUM *)OCSP_response_create(2,(OCSP_BASICRESP *)0x0);
              }
              else {
                for (iVar13 = 0; iVar12 = OPENSSL_sk_num(local_318), iVar13 < iVar12;
                    iVar13 = iVar13 + 1) {
                  uVar21 = OPENSSL_sk_value(local_318,iVar13);
                  iVar12 = pkey_ctrl_string(local_108,uVar21);
                  if (iVar12 < 1) {
                    BIO_printf(pBVar16,"parameter error \"%s\"\n",uVar21);
                    ERR_print_errors(_bio_err);
                    goto LAB_00102537;
                  }
                }
                iVar13 = OCSP_basic_sign_ctx(local_1d8,local_2c8,ctx,uVar24,local_280);
                if (iVar13 == 0) {
                  a = (BIGNUM *)OCSP_response_create(2,local_1d8);
                }
                else {
                  if (bVar3) {
                    OCSP_resp_get0_signature(local_1d8);
                    corrupt_signature();
                  }
                  a = (BIGNUM *)OCSP_response_create(0,local_1d8);
                }
              }
            }
          }
          goto LAB_00100d84;
        }
        if (local_138 != (void *)0x0) {
          pSVar28 = (SSL_CTX *)0x0;
          if (local_190 == 1) {
            meth = (SSL_METHOD *)TLS_client_method();
            pSVar28 = SSL_CTX_new(meth);
            if (pSVar28 == (SSL_CTX *)0x0) {
              a = (BIGNUM *)0x0;
              BIO_printf(_bio_err,"Error creating SSL context.\n");
              SSL_CTX_free((SSL_CTX *)0x0);
              local_350 = (X509_STORE *)0x0;
              bs = (OCSP_BASICRESP *)0x0;
              uVar32 = 1;
              goto LAB_00100437;
            }
          }
          uVar24 = OCSP_RESPONSE_it();
          uVar21 = OCSP_REQUEST_it();
          a = (BIGNUM *)
              app_http_post_asn1(pvVar9,pBVar10,puVar11,local_238,local_240,pSVar28,psVar8,
                                 "application/ocsp-request",req,uVar21,"application/ocsp-response",
                                 (long)local_264,uVar24);
          if (a != (BIGNUM *)0x0) {
            SSL_CTX_free(pSVar28);
            goto LAB_00100dec;
          }
          BIO_printf(_bio_err,"Error querying OCSP responder\n");
          bs = (OCSP_BASICRESP *)0x0;
          SSL_CTX_free(pSVar28);
          local_350 = (X509_STORE *)0x0;
          local_340 = 0;
          uVar32 = 1;
          goto LAB_00100437;
        }
        if (local_350 == (X509_STORE *)0x0) {
          a = (BIGNUM *)0x0;
          bs = (OCSP_BASICRESP *)0x0;
        }
        else {
          pBVar16 = (BIO *)bio_open_default(local_350,0x72,4);
          if (pBVar16 != (BIO *)0x0) {
            a = (BIGNUM *)
                ASN1_d2i_bio((xnew *)&OCSP_RESPONSE_new,&d2i_OCSP_RESPONSE,pBVar16,(void **)0x0);
            BIO_free(pBVar16);
            if (a != (BIGNUM *)0x0) goto LAB_00100dec;
            BIO_printf(_bio_err,"Error reading OCSP response\n");
          }
          a = (BIGNUM *)0x0;
          bs = (OCSP_BASICRESP *)0x0;
          local_350 = (X509_STORE *)0x0;
          local_340 = 0;
          uVar32 = 1;
        }
      }
    }
    else {
      bs = (OCSP_BASICRESP *)0x0;
      BIO_printf(_bio_err,"Need an OCSP request for this operation!\n");
      local_350 = (X509_STORE *)0x0;
      local_320 = (BIO *)0x0;
      a = (BIGNUM *)0x0;
      uVar32 = 1;
    }
  }
  else {
LAB_001018c8:
    if ((cVar1 != '\0') &&
       (iVar13 = OCSP_request_add1_nonce(local_170,(uchar *)0x0,-1), iVar13 == 0))
    goto LAB_00101e14;
    if (local_288 == 0) goto LAB_001008f4;
    if (local_2a0 == 0) {
      local_2a0 = local_288;
    }
    local_2e0 = (X509 *)load_cert_pass(local_288,0,1,0,"signer certificate");
    if (local_2e0 == (X509 *)0x0) {
      a = (BIGNUM *)0x0;
      bs = (OCSP_BASICRESP *)0x0;
      BIO_printf(_bio_err,"Error loading signer certificate\n");
      local_350 = (X509_STORE *)0x0;
      uVar32 = 1;
    }
    else {
      if ((local_278 != 0) &&
         (iVar13 = load_certs(local_278,0,&local_160,0,"signer certificates"), iVar13 == 0))
      goto LAB_00101e14;
      local_2e8 = (EVP_PKEY *)load_key(local_2a0,0,0,0,0,"signer private key");
      if (local_2e8 == (EVP_PKEY *)0x0) goto LAB_00102746;
      iVar13 = OCSP_request_sign(local_170,local_2e0,local_2e8,(EVP_MD *)0x0,local_160,local_248);
      if (iVar13 != 0) goto LAB_001008f4;
      a = (BIGNUM *)0x0;
      bs = (OCSP_BASICRESP *)0x0;
      BIO_printf(_bio_err,"Error signing OCSP request\n");
      local_350 = (X509_STORE *)0x0;
      uVar32 = 1;
    }
  }
  goto LAB_00100437;
LAB_00102bc1:
  OPENSSL_die("assertion failed: bn","apps/ocsp.c",0x4a4);
LAB_00102bd7:
  bs = (OCSP_BASICRESP *)0x0;
  goto LAB_00102bd9;
LAB_00102b35:
  bs = (OCSP_BASICRESP *)0x0;
  local_350 = (X509_STORE *)0x0;
  goto LAB_00100437;
LAB_00102608:
  ctx = (EVP_MD_CTX *)0x0;
  a = (BIGNUM *)OCSP_response_create(2,(OCSP_BASICRESP *)0x0);
LAB_00100d84:
  EVP_MD_CTX_free(ctx);
  ASN1_TIME_free(local_1c8);
  ASN1_TIME_free(local_1d0);
  OCSP_BASICRESP_free(local_1d8);
  if (a == (BIGNUM *)0x0) {
LAB_00101e14:
    a = (BIGNUM *)0x0;
LAB_00101d57:
    local_350 = (X509_STORE *)0x0;
    bs = (OCSP_BASICRESP *)0x0;
    uVar32 = 1;
    goto LAB_00100437;
  }
  if (local_188 != (BIO *)0x0) {
LAB_00100dc9:
    pBVar16 = local_188;
    uVar24 = OCSP_RESPONSE_it();
    http_server_send_asn1_resp(prog,pBVar16,0,"application/ocsp-response",uVar24);
  }
LAB_00100dec:
  if (local_258 != 0) {
    pBVar16 = (BIO *)bio_open_default(local_258,0x77,4);
    if (pBVar16 == (BIO *)0x0) goto LAB_00101d57;
    ASN1_i2d_bio(&i2d_OCSP_RESPONSE,pBVar16,(uchar *)a);
    BIO_free(pBVar16);
  }
  iVar13 = OCSP_response_status((OCSP_RESPONSE *)a);
  if (iVar13 != 0) {
    pcVar22 = OCSP_response_status_str((long)iVar13);
    BIO_printf(local_2d8,"Responder Error: %s (%d)\n",pcVar22);
    if (!bVar5) goto LAB_00101d57;
  }
  if (bVar4) {
    OCSP_RESPONSE_print(local_2d8,(OCSP_RESPONSE *)a,0);
  }
  if (local_188 != (BIO *)0x0) {
    if ((uVar33 != 0xffffffff) && (uVar33 = uVar33 - 1, (int)uVar33 < 1)) goto LAB_00102b35;
    BIO_free_all(local_188);
    local_188 = (BIO *)0x0;
    OCSP_REQUEST_free(local_170);
    local_170 = (OCSP_REQUEST *)0x0;
    OCSP_RESPONSE_free((OCSP_RESPONSE *)a);
    goto LAB_001008a8;
  }
  local_350 = (X509_STORE *)0x0;
  bs = (OCSP_BASICRESP *)0x0;
  if (local_270 != 0) goto LAB_00100437;
  local_350 = (X509_STORE *)
              setup_verify(local_228,local_210,local_230,local_20c,local_218,local_208);
  if (local_350 == (X509_STORE *)0x0) goto LAB_00102bd9;
  if (local_200 != 0) {
    X509_STORE_set1_param(local_350,local_2d0);
  }
  if ((local_290 != 0) &&
     (iVar13 = load_certs(local_290,0,&local_158,0,"validator certificates"), iVar13 == 0))
  goto LAB_00102bd7;
  bs = OCSP_response_get1_basic((OCSP_RESPONSE *)a);
  if (bs == (OCSP_BASICRESP *)0x0) {
    BIO_printf(_bio_err,"Error parsing response\n");
    uVar32 = 1;
    goto LAB_00100437;
  }
  if (bVar6) {
LAB_001028fd:
    uVar31 = 0;
  }
  else {
    if ((local_170 != (OCSP_REQUEST *)0x0) && (iVar13 = OCSP_check_nonce(local_170,bs), iVar13 < 1))
    {
      if (iVar13 != -1) {
        BIO_printf(_bio_err,"Nonce Verify error\n");
        uVar32 = 1;
        goto LAB_00100437;
      }
      BIO_printf(_bio_err,"WARNING: no nonce in response\n");
    }
    iVar13 = OCSP_basic_verify(bs,local_158,local_350,local_2c0);
    if (0 < iVar13) {
LAB_00102cc3:
      BIO_printf(_bio_err,"Response verify OK\n");
      goto LAB_001028fd;
    }
    if (local_310 == (stack_st_X509 *)0x0) {
      if (0 < iVar13) goto LAB_00102cc3;
    }
    else {
      iVar13 = OCSP_basic_verify(bs,local_310,local_350,0x200);
      if (0 < iVar13) {
        ERR_clear_error();
        goto LAB_00102cc3;
      }
    }
    uVar31 = 1;
    BIO_printf(_bio_err,"Response Verify Failure\n");
    ERR_print_errors(_bio_err);
  }
  maxsec = local_110;
  lVar23 = local_118;
  uVar32 = uVar31;
  if ((local_170 == (OCSP_REQUEST *)0x0) || (iVar13 = OPENSSL_sk_num(lVar15), iVar13 == 0))
  goto LAB_00100437;
  bVar2 = true;
  iVar13 = OPENSSL_sk_num(local_330);
  if (iVar13 == 0) {
LAB_00102bd9:
    uVar32 = 1;
    goto LAB_00100437;
  }
  for (iVar13 = 0; iVar12 = OPENSSL_sk_num(local_330), iVar13 < iVar12; iVar13 = iVar13 + 1) {
    pOVar18 = (OCSP_CERTID *)OPENSSL_sk_value(local_330,iVar13);
    uVar24 = OPENSSL_sk_value(lVar15,iVar13);
    BIO_printf(local_2d8,"%s: ",uVar24);
    iVar12 = OCSP_resp_find_status
                       (bs,pOVar18,(int *)&local_100,(int *)&local_f8,
                        (ASN1_GENERALIZEDTIME **)&local_f0,&local_e8,&local_e0);
    if (iVar12 == 0) {
      BIO_puts(local_2d8,"ERROR: No Status found.\n");
      bVar2 = false;
    }
    else {
      iVar12 = OCSP_check_validity(local_e8,local_e0,lVar23,maxsec);
      if (iVar12 == 0) {
        BIO_puts(local_2d8,"WARNING: Status times invalid.\n");
        ERR_print_errors(local_2d8);
      }
      pcVar22 = OCSP_cert_status_str((long)(int)local_100);
      BIO_printf(local_2d8,"%s\n",pcVar22);
      BIO_puts(local_2d8,"\tThis Update: ");
      ASN1_GENERALIZEDTIME_print(local_2d8,local_e8);
      BIO_puts(local_2d8,"\n");
      if (local_e0 != (ASN1_GENERALIZEDTIME *)0x0) {
        BIO_puts(local_2d8,"\tNext Update: ");
        ASN1_GENERALIZEDTIME_print(local_2d8,local_e0);
        BIO_puts(local_2d8,"\n");
      }
      if ((int)local_100 == 1) {
        if ((int)local_f8 != -1) {
          pcVar22 = OCSP_crl_reason_str((long)(int)local_f8);
          BIO_printf(local_2d8,"\tReason: %s\n",pcVar22);
        }
        BIO_puts(local_2d8,"\tRevocation Time: ");
        ASN1_GENERALIZEDTIME_print(local_2d8,(ASN1_GENERALIZEDTIME *)local_f0);
        BIO_puts(local_2d8,"\n");
      }
    }
  }
  uVar32 = 1;
  if (bVar2) {
    uVar32 = uVar31;
  }
LAB_00100437:
  ERR_print_errors(_bio_err);
  X509_free(local_2e0);
  X509_STORE_free(local_350);
  X509_VERIFY_PARAM_free(local_2d0);
  OPENSSL_sk_free(local_318);
  EVP_PKEY_free(local_2e8);
  EVP_PKEY_free(local_348);
  EVP_MD_free(local_180);
  EVP_MD_free(local_178);
  EVP_MD_free(local_140);
  X509_free(local_328);
  OSSL_STACK_OF_X509_free(local_310);
  X509_free(local_2c8);
  OSSL_STACK_OF_X509_free(local_148);
  free_index(local_340);
  BIO_free_all(local_188);
  BIO_free_all(local_320);
  BIO_free_all(local_2d8);
  OCSP_REQUEST_free(local_170);
  OCSP_RESPONSE_free((OCSP_RESPONSE *)a);
  OCSP_BASICRESP_free(bs);
  OPENSSL_sk_free(lVar15);
  OPENSSL_sk_free(local_330);
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
  return uVar32;
}



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
      goto LAB_00102dc9;
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
LAB_00102dc9:
  SSL_CTX_free(pSVar4);
  return lVar3;
}


