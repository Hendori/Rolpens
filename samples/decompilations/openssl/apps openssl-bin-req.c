
void lh_OPENSSL_STRING_hash_thunk(undefined8 param_1,code *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x00100004. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void lh_OPENSSL_STRING_comp_thunk(undefined8 param_1,undefined8 param_2,code *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x00100014. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void lh_OPENSSL_STRING_doall_thunk(undefined8 param_1,code *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x00100024. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void lh_OPENSSL_STRING_doall_arg_thunk
               (undefined8 param_1,undefined8 param_2,code *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x00100034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ext_name_cmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = strcmp(__s1,__s2);
  return iVar1;
}



void exts_cleanup(void *param_1)

{
  CRYPTO_free(param_1);
  return;
}



void ext_name_hash(void)

{
  OPENSSL_LH_strhash();
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
build_data_constprop_0
          (undefined8 param_1,char *param_2,char *param_3,uint param_4,uint param_5,char *param_6,
          undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  int iVar2;
  size_t sVar3;
  char *pcVar4;
  int iVar5;
  
  if (param_3 == (char *)0x0) {
    if (batch == 0) goto LAB_0010035d;
    do {
      BIO_ctrl(_bio_err,0xb,0,(void *)0x0);
      iVar5 = batch;
      *param_6 = '\0';
      if (iVar5 == 0) {
        pcVar4 = fgets(param_6,0x400,_stdin);
        if (pcVar4 == (char *)0x0) {
          return 0;
        }
        cVar1 = *param_6;
        if (cVar1 == '\0') {
          return 0;
        }
        if (cVar1 == '\n') goto LAB_00100388;
        if ((cVar1 == '.') && (param_6[1] == '\n')) {
          return 1;
        }
      }
      else {
        param_6[0] = '\n';
        param_6[1] = '\0';
LAB_00100388:
        if (*param_2 == '\0') {
          return 1;
        }
        sVar3 = strlen(param_2);
        if (0x400 < sVar3 + 2) goto LAB_00100228;
        memcpy(param_6,param_2,sVar3);
        (param_6 + sVar3)[0] = '\n';
        (param_6 + sVar3)[1] = '\0';
      }
      sVar3 = strlen(param_6);
      if (param_6[(long)(int)sVar3 + -1] != '\n') goto LAB_00100400;
      param_6[(long)(int)sVar3 + -1] = '\0';
      iVar2 = (int)sVar3 + -1;
      iVar5 = 0;
      if (-1 < iVar2) {
        iVar5 = iVar2;
      }
      if (iVar5 < (int)param_4) {
        BIO_printf(_bio_err,"String too short, must be at least %d bytes long\n",(ulong)param_4);
      }
      else {
        if ((int)param_5 < 0) {
          return 2;
        }
        if (iVar2 <= (int)param_5) {
          return 2;
        }
        BIO_printf(_bio_err,"String too long, must be at most %d bytes long\n",(ulong)param_5);
      }
      if (batch != 0) {
        return 0;
      }
LAB_0010035d:
      BIO_printf(_bio_err,"%s [%s]:",param_1);
    } while( true );
  }
  if (batch == 0) {
    BIO_printf(_bio_err,"%s [%s]:",param_1);
  }
  BIO_ctrl(_bio_err,0xb,0,(void *)0x0);
  sVar3 = strlen(param_3);
  if (0x400 < sVar3 + 2) {
    BIO_printf(_bio_err,"%s \'%s\' too long\n",param_7,param_3);
    return 0;
  }
  memcpy(param_6,param_3,sVar3);
  (param_6 + sVar3)[0] = '\n';
  (param_6 + sVar3)[1] = '\0';
  BIO_printf(_bio_err,"%s\n",param_3);
  cVar1 = *param_6;
  if (cVar1 == '\0') {
    return 0;
  }
  if (cVar1 == '\n') {
    if (*param_2 == '\0') {
      return 1;
    }
    sVar3 = strlen(param_2);
    if (0x400 < sVar3 + 2) {
LAB_00100228:
      BIO_printf(_bio_err,"%s \'%s\' too long\n",param_8,param_2);
      return 0;
    }
    memcpy(param_6,param_2,sVar3);
    (param_6 + sVar3)[0] = '\n';
    (param_6 + sVar3)[1] = '\0';
  }
  else if ((cVar1 == '.') && (param_6[1] == '\n')) {
    return 1;
  }
  sVar3 = strlen(param_6);
  if (param_6[(long)(int)sVar3 + -1] == '\n') {
    param_6[(long)(int)sVar3 + -1] = '\0';
    iVar2 = (int)sVar3 + -1;
    iVar5 = 0;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    if (iVar5 < (int)param_4) {
      BIO_printf(_bio_err,"String too short, must be at least %d bytes long\n",(ulong)param_4);
    }
    else {
      if (((int)param_5 < 0) || (iVar2 <= (int)param_5)) {
        return 2;
      }
      BIO_printf(_bio_err,"String too long, must be at most %d bytes long\n",(ulong)param_5);
    }
  }
  else {
LAB_00100400:
    BIO_printf(_bio_err,"Missing newline at end of input\n");
  }
  return 0;
}



/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint req_main(undefined4 param_1,undefined8 *param_2)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  undefined8 uVar13;
  ushort **ppuVar14;
  char *pcVar15;
  X509_REQ *req;
  BIO *pBVar16;
  ulong uVar17;
  X509_NAME *pXVar18;
  long lVar19;
  BIO_METHOD *type;
  EVP_PKEY *pkey;
  EVP_CIPHER *pEVar20;
  ulong uVar21;
  void *pvVar22;
  X509_REQ *x;
  char *pcVar23;
  X509 *x_00;
  long lVar24;
  size_t sVar25;
  byte *pbVar26;
  undefined *puVar27;
  undefined8 uVar28;
  X509 *x_01;
  ASN1_INTEGER *pAVar29;
  EVP_PKEY *pEVar30;
  byte *pbVar31;
  char *s;
  uint uVar32;
  EVP_PKEY_CTX *ctx;
  byte *pbVar33;
  BIGNUM *pBVar34;
  long in_FS_OFFSET;
  bool bVar35;
  bool bVar36;
  long local_700;
  long local_6f8;
  long local_6f0;
  long local_6e8;
  ASN1_INTEGER *local_6e0;
  X509 *local_6d8;
  BIO *local_6d0;
  X509_NAME *local_6c8;
  EVP_PKEY *local_6c0;
  EVP_PKEY *local_6b8;
  char *local_6b0;
  ENGINE *local_6a8;
  undefined8 local_6a0;
  void *local_698;
  uint local_68c;
  X509_NAME *local_688;
  X509_NAME *local_680;
  char *local_678;
  long local_670;
  char *local_668;
  EVP_PKEY *local_660;
  long local_658;
  EVP_CIPHER *local_650;
  long local_648;
  int local_640;
  uint local_63c;
  long local_638;
  long local_630;
  stack_st_CONF_VALUE *local_628;
  long local_620;
  uint local_618;
  char *local_610;
  uint local_604;
  uint local_5f8;
  stack_st_CONF_VALUE *local_5f0;
  int local_5e8;
  undefined4 local_5c8;
  undefined1 local_5b8 [32];
  undefined8 local_598;
  int local_580;
  undefined4 local_57c;
  int local_578;
  undefined4 local_574;
  void *local_570;
  void *local_568;
  BIGNUM *local_560;
  ulong local_558;
  ulong local_550;
  X509V3_CTX local_548;
  undefined1 local_508 [16];
  undefined1 local_4f8 [16];
  undefined1 local_4e8 [16];
  undefined1 local_4d8 [16];
  undefined1 local_4c8 [16];
  undefined8 local_4b8;
  undefined1 auStack_4b0 [104];
  uchar local_448 [1032];
  long local_40;
  
  lVar19 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_580 = -1;
  local_570 = (void *)0x0;
  local_568 = (void *)0x0;
  local_6c0 = (EVP_PKEY *)_default_config_file;
  local_57c = 0;
  local_578 = 0x8005;
  local_574 = 0;
  local_560 = (BIGNUM *)0xffffffffffffffff;
  local_558 = 0;
  local_650 = EVP_aes_256_cbc();
  opt_set_unknown_name("digest");
  uVar13 = opt_init(param_1,param_2,req_options);
  bVar35 = true;
  uVar9 = 0;
  iVar8 = 0x1001;
  local_5c8 = 0;
  bVar36 = false;
  local_5f8 = 0;
  local_63c = 0;
  bVar3 = false;
  bVar6 = false;
  local_604 = 0;
  local_618 = 0;
  bVar4 = false;
  bVar5 = false;
  uVar32 = 0;
  local_68c = 0;
  local_640 = -2;
  local_648 = 0;
  local_638 = 0;
  local_6b8 = (EVP_PKEY *)0x0;
  local_678 = (char *)0x0;
  local_658 = 0;
  local_698 = (void *)0x0;
  local_6b0 = (char *)0x0;
  local_620 = 0;
  local_610 = (char *)0x0;
  local_628 = (stack_st_CONF_VALUE *)0x0;
  local_630 = 0;
  local_670 = 0;
  local_668 = (char *)0x0;
  local_6d0 = (BIO *)0x0;
  local_700 = 0;
  local_6f0 = 0;
  local_6e8 = 0;
  local_6f8 = 0;
  local_6a8 = (ENGINE *)0x0;
  local_6a0 = 0;
  local_6e0 = (ASN1_INTEGER *)0x0;
switchD_00100697_caseD_0:
  pcVar23 = local_678;
  pEVar30 = local_6b8;
  iVar7 = opt_next();
joined_r0x00100677:
  if (iVar7 == 0) {
    iVar7 = opt_check_rest_arg(0);
    if (iVar7 == 0) goto switchD_00100697_caseD_ffffffff;
    iVar7 = app_RAND_load();
    if (iVar7 == 0) goto LAB_001006e9;
    if (local_68c == 0) {
      if (local_640 != -2) {
        BIO_printf(_bio_err,"Warning: Ignoring -days without -x509; not generating a certificate\n")
        ;
      }
      if (local_638 != 0) {
        BIO_printf(_bio_err,
                   "Warning: Ignoring -not_before without -x509; not generating a certificate\n");
      }
      if (local_648 != 0) {
        BIO_printf(_bio_err,
                   "Warning: Ignoring -not_after without -x509; not generating a certificate\n");
      }
      if (local_580 == 0) {
        BIO_printf(_bio_err,"Warning: Ignoring -copy_extensions \'none\' when -x509 is not given\n")
        ;
      }
      if (local_670 == 0) {
        if (uVar32 != 0) goto LAB_0010194c;
        iVar7 = fileno_stdin();
        iVar7 = isatty(iVar7);
        if (iVar7 != 0) {
          BIO_printf(_bio_err,
                     "Warning: Will read cert request from stdin since no -in option is given\n");
        }
      }
    }
    else if (local_670 == 0) {
LAB_0010194c:
      uVar32 = 1;
    }
    iVar7 = app_passwd(local_6b0,local_698,&local_570);
    if (iVar7 == 0) {
      BIO_printf(_bio_err,"Error getting passwords\n");
      goto LAB_001006e9;
    }
    req_conf = (CONF *)app_load_config_verbose(local_6c0);
    if (req_conf == (CONF *)0x0) goto LAB_001006e9;
    if (local_6d0 == (BIO *)0x0) {
      if (local_6c0 != (EVP_PKEY *)_default_config_file) goto LAB_00101060;
LAB_00101986:
      pcVar15 = (char *)app_conf_try_string(req_conf,0,"oid_file");
      if (pcVar15 != (char *)0x0) {
        pBVar16 = BIO_new_file(pcVar15,"r");
        if (pBVar16 == (BIO *)0x0) {
          if (bVar5) {
            BIO_printf(_bio_err,"Problems opening \'%s\' for extra OIDs\n",pcVar15);
          }
        }
        else {
          OBJ_create_objects(pBVar16);
          BIO_free(pBVar16);
        }
      }
    }
    else {
      if (bVar5) {
        BIO_printf(_bio_err,"Using additional configuration from -addext options\n");
      }
      addext_conf = (CONF *)app_load_config_bio(local_6d0);
      if (addext_conf == (CONF *)0x0) goto LAB_001006e9;
      if ((EVP_PKEY *)_default_config_file != local_6c0) {
LAB_00101060:
        iVar7 = app_load_modules(req_conf);
        if (iVar7 == 0) goto LAB_001006e9;
      }
      if (req_conf != (CONF *)0x0) goto LAB_00101986;
    }
    iVar7 = add_oid_section(req_conf);
    if (iVar7 == 0) goto LAB_001006e9;
    if (local_620 == 0) {
      local_620 = app_conf_try_string(req_conf,section,"default_md");
    }
    else {
      iVar7 = opt_check_md(local_620);
      if (iVar7 == 0) goto switchD_00100697_caseD_ffffffff;
    }
    if (local_668 == (char *)0x0) {
      pcVar15 = "req_extensions";
      if (local_68c != 0) {
        pcVar15 = "x509_extensions";
      }
      local_668 = (char *)app_conf_try_string(req_conf,section,pcVar15);
      if (local_668 != (char *)0x0) goto LAB_001010bd;
    }
    else {
LAB_001010bd:
      X509V3_set_ctx(&local_548,(X509 *)0x0,(X509 *)0x0,(X509_REQ *)0x0,(X509_CRL *)0x0,1);
      X509V3_set_nconf(&local_548,req_conf);
      iVar7 = X509V3_EXT_add_nconf(req_conf,&local_548,local_668,(X509 *)0x0);
      if (iVar7 == 0) {
        pcVar23 = "request";
        if (local_68c != 0) {
          pcVar23 = "x509";
        }
        BIO_printf(_bio_err,"Error checking %s extension section %s\n",pcVar23,local_668);
        goto LAB_001006e9;
      }
    }
    if (addext_conf != (CONF *)0x0) {
      X509V3_set_ctx(&local_548,(X509 *)0x0,(X509 *)0x0,(X509_REQ *)0x0,(X509_CRL *)0x0,1);
      X509V3_set_nconf(&local_548,req_conf);
      iVar7 = X509V3_EXT_add_nconf(addext_conf,&local_548,"default",(X509 *)0x0);
      if (iVar7 == 0) {
        BIO_printf(_bio_err,"Error checking extensions defined using -addext\n");
        goto LAB_001006e9;
      }
    }
    local_698 = (void *)0x0;
    if (local_570 == (void *)0x0) {
      local_698 = (void *)app_conf_try_string(req_conf,section,"input_password");
      local_570 = local_698;
    }
    pvVar22 = (void *)0x0;
    if (local_568 == (void *)0x0) {
      pvVar22 = (void *)app_conf_try_string(req_conf,section,"output_password");
      local_568 = pvVar22;
    }
    pcVar15 = (char *)app_conf_try_string(req_conf,section,"string_mask");
    if ((pcVar15 != (char *)0x0) && (iVar7 = ASN1_STRING_set_default_mask_asc(pcVar15), iVar7 == 0))
    {
      BIO_printf(_bio_err,"Invalid global string mask setting %s\n",pcVar15);
      goto LAB_0010070c;
    }
    if ((iVar8 == 0x1000) ||
       ((pcVar15 = (char *)app_conf_try_string(req_conf,section,&_LC45), pcVar15 != (char *)0x0 &&
        (iVar7 = strcmp(pcVar15,"yes"), iVar7 == 0)))) {
      iVar8 = 0x1000;
    }
    if (lVar19 != 0) {
      local_6c0 = (EVP_PKEY *)load_key(lVar19,local_574,0);
      if (local_6c0 == (EVP_PKEY *)0x0) {
        local_6b0 = (char *)0x0;
        req = (X509_REQ *)0x0;
        local_6c8 = (X509_NAME *)0x0;
        goto LAB_001022e5;
      }
      app_RAND_load_conf();
      if (local_6b8 != (EVP_PKEY *)0x0) {
        BIO_printf(_bio_err,
                   "Warning: Not generating key via given -newkey option since -key is given\n");
      }
      if (local_678 == (char *)0x0) {
        pcVar23 = (char *)0x0;
        goto LAB_00101289;
      }
      local_6b0 = (char *)0x0;
      goto LAB_00101e31;
    }
    if (uVar32 == 0) {
      if (local_678 == (char *)0x0) {
        pcVar23 = (char *)app_conf_try_string(req_conf,section,"default_keyfile");
        local_6c0 = (EVP_PKEY *)0x0;
        goto LAB_00101289;
      }
      if (local_658 != 0) {
        local_6c0 = (EVP_PKEY *)0x0;
        local_678 = (char *)0x0;
        goto LAB_00101298;
      }
      local_6c0 = (EVP_PKEY *)0x0;
      local_6b0 = (char *)0x0;
      local_6c8 = (X509_NAME *)0x0;
      goto LAB_00101307;
    }
    app_RAND_load_conf(req_conf,section);
    iVar7 = app_conf_try_number(req_conf,section,"default_bits");
    if (iVar7 == 0) {
      local_560 = (BIGNUM *)0x800;
    }
    x_01 = (X509 *)0x0;
    if (local_6b8 == (EVP_PKEY *)0x0) {
      pkey = (EVP_PKEY *)0x0;
      local_6b8 = (EVP_PKEY *)&_LC12;
      pBVar34 = local_560;
LAB_001021ff:
      local_6b0 = CRYPTO_strdup((char *)local_6b8,"apps/req.c",0x631);
LAB_00101c1f:
      if (local_6b0 == (char *)0x0) {
        BIO_printf(_bio_err,"Out of memory\n");
        EVP_PKEY_free(pkey);
        goto LAB_001027ea;
      }
      if (-1 < (long)pBVar34) {
        local_560 = pBVar34;
      }
      if (pkey == (EVP_PKEY *)0x0) {
        if (local_6a8 == (ENGINE *)0x0) {
          uVar13 = app_get0_propq();
          uVar28 = app_get0_libctx();
          ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_name(uVar28,local_6b0,uVar13);
LAB_00101c89:
          if (ctx != (EVP_PKEY_CTX *)0x0) {
            iVar7 = EVP_PKEY_keygen_init(ctx);
            if (iVar7 < 1) {
              BIO_puts(_bio_err,"Error initializing keygen context\n");
              EVP_PKEY_CTX_free(ctx);
              goto LAB_001027f2;
            }
            if (pBVar34 == (BIGNUM *)0xffffffffffffffff) {
              iVar7 = EVP_PKEY_CTX_is_a(ctx,&_LC12);
              if ((iVar7 == 0) && (iVar7 = EVP_PKEY_CTX_is_a(ctx,"RSA-PSS"), iVar7 == 0))
              goto LAB_00101d46;
              pBVar34 = local_560;
              if (local_560 != (BIGNUM *)0xffffffffffffffff) goto LAB_00101cac;
LAB_00103672:
              iVar7 = EVP_PKEY_CTX_is_a(ctx,&_LC12);
              if (((iVar7 != 0) || (iVar7 = EVP_PKEY_CTX_is_a(ctx,"RSA-PSS"), iVar7 != 0)) ||
                 (iVar7 = EVP_PKEY_CTX_is_a(ctx,&_LC62), iVar7 != 0)) {
                BIO_printf(_bio_err,
                           "Private key length too short, needs to be at least %d bits, not %ld.\n",
                           0x200,local_560);
                goto LAB_0010211a;
              }
            }
            else {
LAB_00101cac:
              local_508 = (undefined1  [16])0x0;
              local_4f8 = (undefined1  [16])0x0;
              local_4e8 = (undefined1  [16])0x0;
              local_4d8 = (undefined1  [16])0x0;
              local_4c8 = (undefined1  [16])0x0;
              local_548._0_8_ = pBVar34;
              OSSL_PARAM_construct_size_t(local_5b8,&_LC60,&local_548);
              local_4e8._0_8_ = local_598;
              iVar7 = EVP_PKEY_CTX_set_params(ctx,local_508);
              if (iVar7 < 1) {
                BIO_puts(_bio_err,"Error setting keysize\n");
                EVP_PKEY_CTX_free(ctx);
                goto LAB_001027f2;
              }
LAB_00101d46:
              if ((long)local_560 < 0x200) goto LAB_00103672;
            }
            if ((0x4000 < (long)local_560) &&
               ((iVar7 = EVP_PKEY_CTX_is_a(ctx,&_LC12), iVar7 != 0 ||
                (iVar7 = EVP_PKEY_CTX_is_a(ctx,"RSA-PSS"), iVar7 != 0)))) {
              BIO_printf(_bio_err,
                         "Warning: It is not recommended to use more than %d bit for RSA keys.\n         Your key size is %ld! Larger key size may behave not as expected.\n"
                         ,0x4000,local_560);
            }
            iVar7 = EVP_PKEY_CTX_is_a(ctx,&_LC62);
            if ((iVar7 != 0) && (10000 < (long)local_560)) {
              BIO_printf(_bio_err,
                         "Warning: It is not recommended to use more than %d bit for DSA keys.\n         Your key size is %ld! Larger key size may behave not as expected.\n"
                         ,10000);
            }
            iVar7 = 0;
            if (local_6f8 != 0) goto LAB_00101dc7;
            goto LAB_00101dd6;
          }
        }
        else {
          uVar13 = app_get0_libctx();
          iVar7 = get_legacy_pkey_id(uVar13,local_6b0,local_6a8);
          if (iVar7 != 0) {
            ctx = EVP_PKEY_CTX_new_id(iVar7,local_6a8);
            goto LAB_00101c89;
          }
        }
        BIO_puts(_bio_err,"Error allocating keygen context\n");
      }
      else {
        iVar7 = EVP_PKEY_is_a(pkey,local_6b0);
        if (iVar7 != 0) {
          if (local_6a8 == (ENGINE *)0x0) {
            uVar13 = app_get0_propq();
            uVar28 = app_get0_libctx();
            ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(uVar28,pkey,uVar13);
          }
          else {
            ctx = EVP_PKEY_CTX_new(pkey,local_6a8);
          }
          iVar7 = EVP_PKEY_get_bits(pkey);
          local_560 = (BIGNUM *)(long)iVar7;
          EVP_PKEY_free(pkey);
          goto LAB_00101c89;
        }
        BIO_printf(_bio_err,"Key type does not match parameters\n");
        EVP_PKEY_free(pkey);
      }
    }
    else {
      if ((byte)(*(char *)local_6b8 - 0x30U) < 10) {
        uVar21 = 0;
        local_6b8 = (EVP_PKEY *)&_LC12;
LAB_00102233:
        pkey = (EVP_PKEY *)0x0;
        pBVar34 = (BIGNUM *)strtol((char *)pEVar30,(char **)0x0,10);
LAB_00101bf8:
        if (uVar21 == 0) goto LAB_001021ff;
        local_6b0 = (char *)CRYPTO_strndup(local_6b8,uVar21,"apps/req.c",0x62f);
        goto LAB_00101c1f;
      }
      pcVar23 = strchr((char *)local_6b8,0x3a);
      if (pcVar23 == (char *)0x0) {
        sVar25 = strlen((char *)local_6b8);
        uVar21 = (ulong)(int)sVar25;
        sVar25 = 6;
        if (uVar21 < 7) {
          sVar25 = uVar21;
        }
        pBVar34 = (BIGNUM *)0xffffffffffffffff;
        iVar7 = strncmp((char *)local_6b8,"param",sVar25);
        pkey = (EVP_PKEY *)0x0;
        if (iVar7 != 0) goto LAB_00101bf8;
        BIO_printf(_bio_err,"Parameter file requested but no path given: %s\n",local_6b8);
        goto LAB_0010070c;
      }
      uVar21 = (ulong)((int)pcVar23 - (int)local_6b8);
      sVar25 = 6;
      if (uVar21 < 7) {
        sVar25 = uVar21;
      }
      iVar7 = strncmp((char *)local_6b8,"param",sVar25);
      if (iVar7 == 0) {
        local_6b8 = (EVP_PKEY *)0x0;
        pEVar30 = (EVP_PKEY *)((long)pEVar30 + uVar21 + 1);
        uVar21 = 0;
      }
      else {
        pEVar30 = (EVP_PKEY *)((long)local_6b8 + uVar21 + 1);
        if ((byte)(*(char *)pEVar30 - 0x30U) < 10) goto LAB_00102233;
      }
      pBVar16 = BIO_new_file((char *)pEVar30,"r");
      if (pBVar16 == (BIO *)0x0) {
        BIO_printf(_bio_err,"Cannot open parameter file %s\n",pEVar30);
        goto LAB_0010070c;
      }
      pkey = PEM_read_bio_Parameters(pBVar16,(EVP_PKEY **)0x0);
      if (pkey == (EVP_PKEY *)0x0) {
        BIO_ctrl(pBVar16,1,0,(void *)0x0);
        x_00 = PEM_read_bio_X509(pBVar16,(X509 **)0x0,(undefined1 *)0x0,(void *)0x0);
        if (x_00 == (X509 *)0x0) {
          BIO_free(pBVar16);
        }
        else {
          pkey = X509_get_pubkey(x_00);
          X509_free(x_00);
          BIO_free(pBVar16);
          if (pkey != (EVP_PKEY *)0x0) goto LAB_00101be5;
        }
        BIO_printf(_bio_err,"Error reading parameter file %s\n",pEVar30);
      }
      else {
        BIO_free(pBVar16);
LAB_00101be5:
        pBVar34 = (BIGNUM *)0xffffffffffffffff;
        if ((local_6b8 != (EVP_PKEY *)0x0) ||
           (local_6b8 = (EVP_PKEY *)EVP_PKEY_get0_type_name(pkey), local_6b8 != (EVP_PKEY *)0x0))
        goto LAB_00101bf8;
        EVP_PKEY_free(pkey);
        BIO_puts(_bio_err,"Unable to determine key type\n");
      }
LAB_001027ea:
      local_6b0 = (char *)0x0;
    }
LAB_001027f2:
    local_6c8 = (X509_NAME *)0x0;
    req = (X509_REQ *)0x0;
    ctx = (EVP_PKEY_CTX *)0x0;
    pBVar16 = (BIO *)0x0;
    local_6d8 = (X509 *)0x0;
    local_6b8 = (EVP_PKEY *)0x0;
    local_6c0 = (EVP_PKEY *)0x0;
    goto LAB_0010214b;
  }
  if (0x33 < iVar7) {
    if (iVar7 < 0x5df) {
      if (iVar7 < 0x5dd) goto switchD_00100697_caseD_0;
      iVar7 = opt_rand();
    }
    else {
      if (3 < iVar7 - 0x641U) goto switchD_00100697_caseD_0;
      iVar7 = opt_provider();
    }
    if (iVar7 == 0) goto LAB_001006e9;
    goto switchD_00100697_caseD_0;
  }
  if (iVar7 < -1) goto switchD_00100697_caseD_0;
  switch(iVar7) {
  default:
    goto switchD_00100697_caseD_0;
  case 1:
    uVar32 = 0;
    pvVar22 = (void *)0x0;
    req = (X509_REQ *)0x0;
    opt_help(req_options);
    x_01 = (X509 *)0x0;
    ctx = (EVP_PKEY_CTX *)0x0;
    pBVar16 = (BIO *)0x0;
    local_6b0 = (char *)0x0;
    local_6c8 = (X509_NAME *)0x0;
    local_698 = (void *)0x0;
    local_6d8 = (X509 *)0x0;
    local_6b8 = (EVP_PKEY *)0x0;
    local_6c0 = (EVP_PKEY *)0x0;
    goto LAB_0010073e;
  case 2:
    pcVar23 = (char *)opt_arg();
    local_650 = EVP_get_cipherbyname(pcVar23);
    if (local_650 != (EVP_CIPHER *)0x0) goto switchD_00100697_caseD_0;
    uVar28 = opt_arg();
    BIO_printf(_bio_err,"Unknown cipher: %s\n",uVar28);
    break;
  case 3:
    uVar28 = opt_arg();
    iVar7 = opt_format(uVar28,6,&local_57c);
    goto joined_r0x00100cdf;
  case 4:
    uVar28 = opt_arg();
    iVar7 = opt_format(uVar28,6,&local_578);
    goto joined_r0x00100cdf;
  case 5:
    uVar28 = opt_arg();
    local_6a0 = setup_engine_methods(uVar28,0xffffffff,0);
    goto switchD_00100697_caseD_0;
  case 6:
    uVar28 = opt_arg();
    local_6a8 = (ENGINE *)setup_engine_methods(uVar28,0xffffffff,0);
    if (local_6a8 != (ENGINE *)0x0) goto switchD_00100697_caseD_0;
    BIO_printf(_bio_err,"Can\'t find keygen engine %s\n",*param_2);
    break;
  case 7:
    lVar19 = opt_arg();
    goto switchD_00100697_caseD_0;
  case 8:
    local_5f8 = 1;
    goto switchD_00100697_caseD_0;
  case 9:
    goto switchD_00100697_caseD_9;
  case 10:
    local_6c0 = (EVP_PKEY *)opt_arg();
    goto switchD_00100697_caseD_0;
  case 0xb:
    uVar28 = opt_arg();
    iVar7 = opt_format(uVar28,0xffe,&local_574);
    goto joined_r0x00100cdf;
  case 0xc:
    local_670 = opt_arg();
    goto switchD_00100697_caseD_0;
  case 0xd:
    local_610 = (char *)opt_arg();
    goto switchD_00100697_caseD_0;
  case 0xe:
    local_678 = (char *)opt_arg();
    goto switchD_00100697_caseD_0;
  case 0xf:
    local_6b0 = (char *)opt_arg();
    goto switchD_00100697_caseD_0;
  case 0x10:
    local_698 = (void *)opt_arg();
    goto switchD_00100697_caseD_0;
  case 0x11:
    local_6b8 = (EVP_PKEY *)opt_arg();
    uVar32 = 1;
    goto switchD_00100697_caseD_0;
  case 0x12:
    if ((local_6f8 != 0) || (local_6f8 = OPENSSL_sk_new_null(), local_6f8 != 0)) {
      opt_arg();
      iVar7 = OPENSSL_sk_push();
      goto joined_r0x00100cdf;
    }
    break;
  case 0x13:
    if ((local_6e8 != 0) || (local_6e8 = OPENSSL_sk_new_null(), local_6e8 != 0)) {
      opt_arg();
      iVar7 = OPENSSL_sk_push();
      goto joined_r0x00100cdf;
    }
    break;
  case 0x14:
    if ((local_6f0 != 0) || (local_6f0 = OPENSSL_sk_new_null(), local_6f0 != 0)) {
      opt_arg();
      iVar7 = OPENSSL_sk_push();
      goto joined_r0x00100cdf;
    }
    break;
  case 0x15:
    batch = 1;
    goto switchD_00100697_caseD_0;
  case 0x16:
    bVar3 = true;
    goto switchD_00100697_caseD_0;
  case 0x17:
    bVar4 = true;
    goto switchD_00100697_caseD_0;
  case 0x18:
    uVar9 = 1;
    goto switchD_00100697_caseD_0;
  case 0x19:
  case 0x1a:
    bVar6 = true;
    goto switchD_00100697_caseD_0;
  case 0x1b:
    local_618 = 1;
    goto switchD_00100697_caseD_0;
  case 0x1c:
    bVar35 = true;
    bVar5 = true;
    goto switchD_00100697_caseD_0;
  case 0x1d:
    iVar8 = 0x1000;
    goto switchD_00100697_caseD_0;
  case 0x1e:
    opt_arg();
    iVar7 = set_nameopt();
    goto joined_r0x00100cdf;
  case 0x1f:
    opt_arg();
    iVar7 = set_cert_ex();
joined_r0x00100cdf:
    if (iVar7 != 0) goto switchD_00100697_caseD_0;
    break;
  case 0x20:
    local_658 = opt_arg();
    goto switchD_00100697_caseD_0;
  case 0x21:
    local_63c = 1;
    goto switchD_00100697_caseD_0;
  case 0x22:
    local_604 = 1;
    goto switchD_00100697_caseD_0;
  case 0x23:
    local_68c = 1;
    goto switchD_00100697_caseD_0;
  case 0x24:
    local_5c8 = 1;
    local_68c = 1;
    goto switchD_00100697_caseD_0;
  case 0x25:
    local_630 = opt_arg();
    local_68c = 1;
    goto switchD_00100697_caseD_0;
  case 0x26:
    local_628 = (stack_st_CONF_VALUE *)opt_arg();
    goto switchD_00100697_caseD_0;
  case 0x28:
    local_638 = opt_arg();
    goto switchD_00100697_caseD_0;
  case 0x29:
    local_648 = opt_arg();
    goto switchD_00100697_caseD_0;
  case 0x2a:
    pcVar23 = (char *)opt_arg();
    lVar24 = strtol(pcVar23,(char **)0x0,10);
    local_640 = (int)lVar24;
    if (local_640 < -1) {
      BIO_printf(_bio_err,"%s: -days parameter arg must be >= -1\n",uVar13);
      goto LAB_001006e9;
    }
    goto switchD_00100697_caseD_0;
  case 0x2b:
    if (local_6e0 == (ASN1_INTEGER *)0x0) {
      pcVar23 = (char *)opt_arg();
      local_6e0 = s2i_ASN1_INTEGER((X509V3_EXT_METHOD *)0x0,pcVar23);
      if (local_6e0 != (ASN1_INTEGER *)0x0) goto switchD_00100697_caseD_0;
    }
    else {
      BIO_printf(_bio_err,"Serial number supplied twice\n");
    }
    break;
  case 0x2c:
    opt_arg();
    iVar7 = set_ext_copy();
    if (iVar7 == 0) {
      uVar13 = opt_arg();
      BIO_printf(_bio_err,"Invalid extension copy option: \"%s\"\n",uVar13);
      goto LAB_001006e9;
    }
    goto switchD_00100697_caseD_0;
  case 0x2d:
  case 0x2e:
    local_668 = (char *)opt_arg();
    goto switchD_00100697_caseD_0;
  case 0x2f:
    pbVar33 = (byte *)opt_arg();
    if (local_700 == 0) {
      uVar28 = OPENSSL_LH_new(ext_name_hash,ext_name_cmp);
      local_700 = OPENSSL_LH_set_thunks
                            (uVar28,0x100000,lh_OPENSSL_STRING_comp_thunk,
                             lh_OPENSSL_STRING_doall_thunk);
      type = BIO_s_mem();
      local_6d0 = BIO_new(type);
      if ((local_700 == 0) || (local_6d0 == (BIO *)0x0)) {
        pvVar22 = (void *)0x0;
        req = (X509_REQ *)0x0;
        x_01 = (X509 *)0x0;
        local_6b0 = (char *)0x0;
        ctx = (EVP_PKEY_CTX *)0x0;
        pBVar16 = (BIO *)0x0;
        uVar32 = 1;
        local_6c8 = (X509_NAME *)0x0;
        local_698 = (void *)0x0;
        local_6d8 = (X509 *)0x0;
        local_6b8 = (EVP_PKEY *)0x0;
        local_6c0 = (EVP_PKEY *)0x0;
        goto LAB_00100732;
      }
    }
    ppuVar14 = __ctype_b_loc();
    bVar2 = *(byte *)((long)*ppuVar14 + (ulong)*pbVar33 * 2 + 1);
    pbVar31 = pbVar33;
    while ((bVar2 & 0x20) != 0) {
      pbVar26 = pbVar31 + 1;
      pbVar31 = pbVar31 + 1;
      bVar2 = *(byte *)((long)*ppuVar14 + (ulong)*pbVar26 * 2 + 1);
    }
    pcVar23 = strchr((char *)pbVar31,0x3d);
    if (pcVar23 == (char *)0x0) {
      pvVar22 = (void *)0x0;
      req = (X509_REQ *)0x0;
      x_01 = (X509 *)0x0;
      ctx = (EVP_PKEY_CTX *)0x0;
      uVar32 = 1;
      BIO_printf(_bio_err,"Parse error on -addext: missing \'=\'\n");
      local_6b0 = (char *)0x0;
      local_6c8 = (X509_NAME *)0x0;
      local_698 = (void *)0x0;
      local_6d8 = (X509 *)0x0;
      local_6b8 = (EVP_PKEY *)0x0;
      local_6c0 = (EVP_PKEY *)0x0;
      pBVar16 = (BIO *)0x0;
      goto LAB_00100732;
    }
    pcVar15 = CRYPTO_strdup((char *)pbVar31,"apps/req.c",0xd8);
    if (pcVar15 == (char *)0x0) {
LAB_001017a4:
      BIO_printf(_bio_err,"Internal error handling -addext %s\n",pbVar33);
LAB_001006e9:
      pvVar22 = (void *)0x0;
      local_698 = (void *)0x0;
LAB_0010070c:
      local_6b0 = (char *)0x0;
      local_6c8 = (X509_NAME *)0x0;
      uVar32 = 1;
      x_01 = (X509 *)0x0;
      ctx = (EVP_PKEY_CTX *)0x0;
      pBVar16 = (BIO *)0x0;
      local_6d8 = (X509 *)0x0;
      local_6b8 = (EVP_PKEY *)0x0;
      local_6c0 = (EVP_PKEY *)0x0;
      req = (X509_REQ *)0x0;
      goto LAB_00100732;
    }
    pcVar23 = pcVar15 + ((long)pcVar23 - (long)pbVar31);
    if (pcVar15 < pcVar23) {
      do {
        if ((*(byte *)((long)*ppuVar14 + (ulong)(byte)pcVar23[-1] * 2 + 1) & 0x20) == 0)
        goto LAB_00100a28;
        pcVar23 = pcVar23 + -1;
      } while (pcVar15 != pcVar23);
    }
    else {
LAB_00100a28:
      if (pcVar15 != pcVar23) {
        *pcVar23 = '\0';
        pvVar22 = (void *)OPENSSL_LH_insert(local_700,pcVar15);
        if (pvVar22 != (void *)0x0) {
          BIO_printf(_bio_err,"Duplicate extension name: %s\n",pcVar15);
          CRYPTO_free(pvVar22);
          goto LAB_001006e9;
        }
        iVar7 = OPENSSL_LH_error(local_700);
        if (iVar7 != 0) {
          CRYPTO_free(pcVar15);
          goto LAB_001017a4;
        }
        iVar7 = BIO_printf(local_6d0,"%s\n",pbVar33);
        if (iVar7 < 0) goto LAB_001006e9;
        goto switchD_00100697_caseD_0;
      }
    }
    BIO_printf(_bio_err,"Parse error on -addext: missing key\n");
    CRYPTO_free(pcVar15);
    goto LAB_001006e9;
  case 0x30:
    bVar36 = true;
switchD_00100697_caseD_9:
    uVar32 = 1;
    iVar7 = opt_next();
    goto joined_r0x00100677;
  case 0x31:
    local_620 = opt_unknown();
    goto switchD_00100697_caseD_0;
  case 0x32:
    section = (undefined *)opt_arg();
    goto switchD_00100697_caseD_0;
  case 0x33:
    bVar35 = false;
    bVar5 = false;
    goto switchD_00100697_caseD_0;
  case -1:
    break;
  }
switchD_00100697_caseD_ffffffff:
  BIO_printf(_bio_err,"%s: Use -help for summary.\n",uVar13);
  goto LAB_001006e9;
LAB_00101dc7:
  iVar10 = OPENSSL_sk_num(local_6f8);
  if (iVar10 <= iVar7) goto LAB_00101dd6;
  uVar13 = OPENSSL_sk_value(local_6f8,iVar7);
  iVar10 = pkey_ctrl_string(ctx,uVar13);
  if (iVar10 < 1) {
    BIO_printf(_bio_err,"Key parameter error \"%s\"\n",uVar13);
    goto LAB_0010211a;
  }
  iVar7 = iVar7 + 1;
  goto LAB_00101dc7;
LAB_00101dd6:
  EVP_PKEY_CTX_set_app_data(ctx,_bio_err);
  if (bVar35) {
    EVP_PKEY_CTX_set_cb(ctx,&progress_cb);
  }
  local_6c0 = (EVP_PKEY *)app_keygen(ctx,local_6b0,(ulong)local_560 & 0xffffffff);
  if (local_6c0 == (EVP_PKEY *)0x0) {
LAB_0010211a:
    local_6c8 = (X509_NAME *)0x0;
    req = (X509_REQ *)0x0;
    pBVar16 = (BIO *)0x0;
    local_6d8 = (X509 *)0x0;
    local_6b8 = (EVP_PKEY *)0x0;
    local_6c0 = (EVP_PKEY *)0x0;
    goto LAB_0010214b;
  }
  EVP_PKEY_CTX_free(ctx);
  if (local_678 == (char *)0x0) {
    local_678 = (char *)app_conf_try_string(req_conf,section,"default_keyfile");
    if (bVar5) {
      BIO_printf(_bio_err,"Writing private key to ");
      if (local_678 != (char *)0x0) goto LAB_001020e0;
      BIO_printf(_bio_err,"stdout\n");
    }
  }
  else {
LAB_00101e31:
    if (bVar5) {
      BIO_printf(_bio_err,"Writing private key to ");
LAB_001020e0:
      BIO_printf(_bio_err,"\'%s\'\n",local_678);
    }
  }
  pBVar16 = (BIO *)bio_open_owner(local_678,local_578,uVar32);
  if (pBVar16 == (BIO *)0x0) {
LAB_0010205e:
    req = (X509_REQ *)0x0;
    x_01 = (X509 *)0x0;
    ctx = (EVP_PKEY_CTX *)0x0;
    uVar32 = 1;
    local_6c8 = (X509_NAME *)0x0;
    local_6d8 = (X509 *)0x0;
    local_6b8 = (EVP_PKEY *)0x0;
  }
  else {
    pcVar23 = (char *)app_conf_try_string(req_conf,section,"encrypt_rsa_key");
    pEVar20 = local_650;
    if ((((pcVar23 != (char *)0x0) ||
         (pcVar23 = (char *)app_conf_try_string(req_conf,section,"encrypt_key"),
         pcVar23 != (char *)0x0)) && (*pcVar23 == 'n')) &&
       ((pcVar23[1] == 'o' && (pEVar20 = (EVP_CIPHER *)0x0, pcVar23[2] != '\0')))) {
      pEVar20 = local_650;
    }
    local_650 = pEVar20;
    pEVar20 = (EVP_CIPHER *)0x0;
    if (!bVar6) {
      pEVar20 = local_650;
    }
    iVar7 = 0;
    while (iVar10 = PEM_write_bio_PrivateKey
                              (pBVar16,local_6c0,pEVar20,(uchar *)0x0,0,(undefined1 *)0x0,local_568)
          , iVar10 == 0) {
      uVar21 = ERR_peek_error();
      uVar12 = (uint)uVar21 & 0x7fffffff;
      if ((uVar21 & 0x80000000) == 0) {
        uVar12 = (uint)uVar21 & 0x7fffff;
      }
      if ((iVar7 == 3) || (uVar12 != 0x6d)) {
        uVar32 = 1;
        req = (X509_REQ *)0x0;
        x_01 = (X509 *)0x0;
        ctx = (EVP_PKEY_CTX *)0x0;
        local_6c8 = (X509_NAME *)0x0;
        local_6d8 = (X509 *)0x0;
        local_6b8 = (EVP_PKEY *)0x0;
        goto LAB_00100732;
      }
      ERR_clear_error();
      iVar7 = iVar7 + 1;
    }
    BIO_free_all(pBVar16);
    BIO_printf(_bio_err,"-----\n");
    pcVar23 = local_678;
    local_678 = local_6b0;
LAB_00101289:
    if (local_658 == 0) {
      local_6c8 = (X509_NAME *)0x0;
    }
    else {
LAB_00101298:
      local_6c8 = (X509_NAME *)parse_name(local_658,iVar8,1,"subject");
      if (local_6c8 == (X509_NAME *)0x0) {
        local_6b0 = local_678;
        pBVar16 = (BIO *)0x0;
        goto LAB_0010205e;
      }
    }
    if (uVar32 == 0) {
      if (lVar19 != 0) {
        BIO_printf(_bio_err,"Warning: Not placing -key in cert or request since request is used\n");
      }
      local_6b0 = local_678;
      local_678 = pcVar23;
LAB_00101307:
      req = (X509_REQ *)load_csr_autofmt(local_670,local_57c,local_6f0,"X509 request");
      if (req == (X509_REQ *)0x0) {
LAB_001022e5:
        x_01 = (X509 *)0x0;
        ctx = (EVP_PKEY_CTX *)0x0;
        pBVar16 = (BIO *)0x0;
        uVar32 = 1;
        local_6d8 = (X509 *)0x0;
        local_6b8 = (EVP_PKEY *)0x0;
        goto LAB_00100732;
      }
    }
    else {
      if (local_670 != 0) {
        BIO_printf(_bio_err,
                   "Warning: Ignoring -in option since -new or -newkey or -precert is given\n");
      }
      local_6b0 = local_678;
      req = (X509_REQ *)0x0;
      local_678 = pcVar23;
    }
    if (local_628 == (stack_st_CONF_VALUE *)0x0) {
      local_628 = (stack_st_CONF_VALUE *)local_630;
      if (local_630 == 0) goto LAB_0010227d;
LAB_00101373:
      local_6b8 = (EVP_PKEY *)load_key(local_628,0,0,local_570,local_6a0);
      if (local_6b8 == (EVP_PKEY *)0x0) {
        x_01 = (X509 *)0x0;
        ctx = (EVP_PKEY_CTX *)0x0;
        pBVar16 = (BIO *)0x0;
        local_6d8 = (X509 *)0x0;
        uVar32 = 1;
      }
      else {
        local_6d8 = (X509 *)load_cert_pass(local_630,0,1,local_570);
        if (local_6d8 == (X509 *)0x0) {
          x_01 = (X509 *)0x0;
          ctx = (EVP_PKEY_CTX *)0x0;
          pBVar16 = (BIO *)0x0;
          uVar32 = 1;
        }
        else {
          iVar7 = X509_check_private_key(local_6d8,local_6b8);
          if (iVar7 != 0) {
            if (local_68c != 0 || uVar32 != 0) goto LAB_001013f7;
            goto LAB_00102192;
          }
          x_01 = (X509 *)0x0;
          ctx = (EVP_PKEY_CTX *)0x0;
          pBVar16 = (BIO *)0x0;
          uVar32 = 1;
          BIO_printf(_bio_err,"Issuer CA certificate and key do not match\n");
        }
      }
    }
    else {
      if (local_630 != 0) goto LAB_00101373;
      BIO_printf(_bio_err,"Warning: Ignoring -CAkey option since no -CA option is given\n");
LAB_0010227d:
      if ((local_68c | uVar32) != 0) {
        if (local_6c0 == (EVP_PKEY *)0x0) {
          ctx = (EVP_PKEY_CTX *)0x0;
          BIO_printf(_bio_err,"Must provide a signature key using -key or provide -CA / -CAkey\n");
          local_6d8 = (X509 *)0x0;
          x_01 = (X509 *)0x0;
          local_6b8 = (EVP_PKEY *)0x0;
          pBVar16 = (BIO *)0x0;
          uVar32 = local_68c | uVar32;
          goto LAB_0010214b;
        }
        local_6d8 = (X509 *)0x0;
        local_6b8 = (EVP_PKEY *)0x0;
LAB_001013f7:
        x = req;
        pEVar30 = local_6b8;
        if (req == (X509_REQ *)0x0) {
          uVar13 = app_get0_propq();
          uVar28 = app_get0_libctx();
          x = (X509_REQ *)X509_REQ_new_ex(uVar28,uVar13);
          if (x == (X509_REQ *)0x0) {
            x_01 = (X509 *)0x0;
            ctx = (EVP_PKEY_CTX *)0x0;
            uVar32 = 1;
            pBVar16 = (BIO *)0x0;
            goto LAB_00100732;
          }
          pcVar23 = (char *)app_conf_try_string(req_conf,section,"prompt");
          if (pcVar23 == (char *)0x0) {
            bVar35 = false;
          }
          else {
            iVar7 = strcmp(pcVar23,"no");
            bVar35 = iVar7 == 0;
          }
          pcVar23 = (char *)app_conf_try_string(req_conf,section,"distinguished_name");
          if (pcVar23 == (char *)0x0) {
            local_628 = (stack_st_CONF_VALUE *)0x0;
          }
          else {
            local_628 = NCONF_get_section(req_conf,pcVar23);
            if (local_628 == (stack_st_CONF_VALUE *)0x0) {
              BIO_printf(_bio_err,"Unable to get \'%s\' section\n",pcVar23);
              goto LAB_0010271c;
            }
          }
          pcVar15 = (char *)app_conf_try_string(req_conf,section,"attributes");
          if (pcVar15 == (char *)0x0) {
            local_5f0 = (stack_st_CONF_VALUE *)0x0;
          }
          else {
            local_5f0 = NCONF_get_section(req_conf,pcVar15);
            if (local_5f0 == (stack_st_CONF_VALUE *)0x0) {
              BIO_printf(_bio_err,"Unable to get \'%s\' section\n",pcVar15);
              goto LAB_0010271c;
            }
          }
          iVar7 = X509_REQ_set_version(x,0);
          if (iVar7 != 0) {
            if (local_6c8 == (X509_NAME *)0x0) {
              if (bVar35) {
                pXVar18 = (X509_NAME *)X509_REQ_get_subject_name(x);
                for (iVar7 = 0; iVar10 = OPENSSL_sk_num(local_628), iVar7 < iVar10;
                    iVar7 = iVar7 + 1) {
                  lVar24 = OPENSSL_sk_value(local_628,iVar7);
                  pbVar33 = *(byte **)(lVar24 + 8);
                  pbVar31 = pbVar33;
                  bVar2 = *pbVar33;
                  do {
                    if (bVar2 == 0) goto LAB_00102932;
                    uVar21 = (ulong)bVar2;
                    pbVar31 = pbVar31 + 1;
                    bVar1 = *pbVar31;
                    bVar35 = 0x3a < bVar2;
                    bVar2 = bVar1;
                  } while ((bVar35) || ((0x400500000000000U >> (uVar21 & 0x3f) & 1) == 0));
                  if (bVar1 != 0) {
                    pbVar33 = pbVar31;
                  }
LAB_00102932:
                  iVar10 = 0;
                  if (*pbVar33 == 0x2b) {
                    pbVar33 = pbVar33 + 1;
                    iVar10 = -1;
                  }
                  iVar10 = X509_NAME_add_entry_by_txt
                                     (pXVar18,(char *)pbVar33,iVar8,*(uchar **)(lVar24 + 0x10),-1,-1
                                      ,iVar10);
                  if (iVar10 == 0) goto LAB_0010271c;
                }
                iVar7 = X509_NAME_entry_count(pXVar18);
                if (iVar7 == 0) {
LAB_0010318b:
                  BIO_printf(_bio_err,"Error: No objects specified in config file\n");
                }
                else {
                  uVar12 = local_68c;
                  if (local_68c != 1) {
                    for (; iVar7 = OPENSSL_sk_num(local_5f0), (int)uVar12 < iVar7;
                        uVar12 = uVar12 + 1) {
                      lVar24 = OPENSSL_sk_value(local_5f0,uVar12);
                      iVar7 = X509_REQ_add1_attr_by_txt
                                        (x,*(char **)(lVar24 + 8),iVar8,*(uchar **)(lVar24 + 0x10),
                                         -1);
                      if (iVar7 == 0) goto LAB_0010271c;
                    }
                    goto LAB_00102707;
                  }
                  iVar8 = X509_REQ_set_pubkey(x,local_6c0);
                  if (iVar8 != 0) {
                    local_660 = (EVP_PKEY *)X509_REQ_get0_pubkey(x);
                    if (local_6d8 != (X509 *)0x0) {
                      local_688 = X509_get_subject_name(local_6d8);
                      goto LAB_00102df8;
                    }
                    goto LAB_0010305b;
                  }
                }
              }
              else {
                pXVar18 = (X509_NAME *)X509_REQ_get_subject_name(x);
                if (batch == 0) {
                  BIO_printf(_bio_err,
                             "You are about to be asked to enter information that will be incorporated\n"
                            );
                  BIO_printf(_bio_err,"into your certificate request.\n");
                  BIO_printf(_bio_err,
                             "What you are about to enter is what is called a Distinguished Name or a DN.\n"
                            );
                  BIO_printf(_bio_err,"There are quite a few fields but you can leave some blank\n")
                  ;
                  BIO_printf(_bio_err,"For some fields there will be a default value,\n");
                  BIO_printf(_bio_err,"If you enter \'.\', the field will be left blank.\n");
                  BIO_printf(_bio_err,"-----\n");
                }
                iVar7 = OPENSSL_sk_num(local_628);
                local_5e8 = -1;
                if (iVar7 == 0) {
                  BIO_printf(_bio_err,"No template, please set one up.\n");
                }
                else {
LAB_00102a34:
                  do {
                    local_5e8 = local_5e8 + 1;
                    iVar7 = OPENSSL_sk_num(local_628);
                    if (iVar7 <= local_5e8) {
                      iVar7 = X509_NAME_entry_count(pXVar18);
                      if (iVar7 == 0) goto LAB_0010318b;
                      if (local_68c == 1) goto LAB_00102707;
                      if (((local_5f0 != (stack_st_CONF_VALUE *)0x0) &&
                          (iVar7 = OPENSSL_sk_num(local_5f0), 0 < iVar7)) && (batch == 0)) {
                        BIO_printf(_bio_err,"\nPlease enter the following \'extra\' attributes\n");
                        BIO_printf(_bio_err,"to be sent with your certificate request\n");
                      }
                      local_630._0_4_ = -1;
                      goto LAB_00103326;
                    }
                    lVar24 = OPENSSL_sk_value(local_628,local_5e8);
                    pbVar31 = *(byte **)(lVar24 + 8);
                    sVar25 = strlen((char *)pbVar31);
                    pbVar33 = pbVar31;
                    if (3 < sVar25) {
                      iVar7 = strcmp((char *)(pbVar31 + (sVar25 - 4)),"_min");
                      if ((iVar7 == 0) ||
                         (iVar7 = strcmp((char *)(pbVar31 + (sVar25 - 4)),"_max"), iVar7 == 0))
                      goto LAB_00102a34;
                      if (sVar25 < 8) {
                        if (sVar25 < 6) goto LAB_00102b0b;
                      }
                      else {
                        iVar7 = strcmp((char *)(pbVar31 + (sVar25 - 8)),"_default");
                        if (iVar7 == 0) goto LAB_00102a34;
                      }
                      iVar7 = strcmp((char *)(pbVar31 + (sVar25 - 6)),"_value");
                      if (iVar7 == 0) goto LAB_00102a34;
                    }
LAB_00102b0b:
                    do {
                      pbVar26 = pbVar33;
                      bVar2 = *pbVar26;
                      if (bVar2 == 0) goto LAB_00102b12;
                      pbVar33 = pbVar26 + 1;
                    } while ((0x3a < bVar2) ||
                            ((0x400500000000000U >> ((ulong)bVar2 & 0x3f) & 1) == 0));
                    if (pbVar26[1] != 0) {
                      pbVar31 = pbVar33;
                    }
LAB_00102b12:
                    iVar7 = 0;
                    if (*pbVar31 == 0x2b) {
                      pbVar31 = pbVar31 + 1;
                      iVar7 = -1;
                    }
                    iVar10 = OBJ_txt2nid((char *)pbVar31);
                    if (iVar10 == 0) goto LAB_00102a34;
                    s = *(char **)(lVar24 + 8);
                    sVar25 = strlen(s);
                    if (100 < sVar25 + 9) goto LAB_001031c7;
                    memcpy(&local_4b8,s,sVar25);
                    *(undefined8 *)((long)&local_4b8 + sVar25) = 0x746c75616665645f;
                    auStack_4b0[sVar25] = 0;
                    puVar27 = (undefined *)app_conf_try_string(req_conf,pcVar23,&local_4b8);
                    if (puVar27 == (undefined *)0x0) {
                      puVar27 = &_LC15;
                    }
                    s = *(char **)(lVar24 + 8);
                    sVar25 = strlen(s);
                    if (100 < sVar25 + 7) goto LAB_001031c7;
                    memcpy(&local_4b8,s,sVar25);
                    *(undefined4 *)((long)&local_4b8 + sVar25) = 0x6c61765f;
                    *(undefined4 *)((long)&local_4b8 + sVar25 + 3) = 0x65756c;
                    uVar13 = app_conf_try_string(req_conf,pcVar23,&local_4b8);
                    s = *(char **)(lVar24 + 8);
                    sVar25 = strlen(s);
                    if (100 < sVar25 + 5) goto LAB_001031c7;
                    memcpy(&local_4b8,s,sVar25);
                    *(undefined4 *)((long)&local_4b8 + sVar25) = 0x6e696d5f;
                    *(undefined1 *)((long)&local_4b8 + sVar25 + 4) = 0;
                    iVar11 = app_conf_try_number(req_conf,pcVar23,&local_4b8,&local_550);
                    if (iVar11 == 0) {
                      local_550 = 0xffffffffffffffff;
                    }
                    s = *(char **)(lVar24 + 8);
                    sVar25 = strlen(s);
                    if (100 < sVar25 + 5) goto LAB_001031c7;
                    memcpy(&local_4b8,s,sVar25);
                    *(undefined4 *)((long)&local_4b8 + sVar25) = 0x78616d5f;
                    *(undefined1 *)((long)&local_4b8 + sVar25 + 4) = 0;
                    iVar11 = app_conf_try_number(req_conf,pcVar23,&local_4b8,&local_548);
                    if (iVar11 == 0) {
                      local_548._0_8_ = (BIGNUM *)0xffffffffffffffff;
                    }
                    uVar12 = build_data_constprop_0
                                       (*(undefined8 *)(lVar24 + 0x10),puVar27,uVar13,
                                        local_550 & 0xffffffff,local_548._0_8_ & 0xffffffff,
                                        local_448,"DN value","DN default");
                    if (1 < uVar12) {
                      iVar7 = X509_NAME_add_entry_by_NID(pXVar18,iVar10,iVar8,local_448,-1,-1,iVar7)
                      ;
                      if (iVar7 == 0) break;
                      goto LAB_00102a34;
                    }
                  } while (uVar12 != 0);
                }
              }
            }
            else {
              iVar8 = X509_REQ_set_subject_name(x,local_6c8);
              if (iVar8 != 0) {
LAB_00102707:
                iVar8 = X509_REQ_set_pubkey(x,local_6c0);
                if (iVar8 != 0) goto LAB_00101403;
              }
            }
          }
          goto LAB_0010271c;
        }
LAB_00101403:
        if (local_68c != 0) {
          local_660 = (EVP_PKEY *)X509_REQ_get0_pubkey(x);
          if (local_6d8 == (X509 *)0x0) {
LAB_0010305b:
            local_688 = (X509_NAME *)X509_REQ_get_subject_name(x);
            pEVar30 = local_6c0;
            if (local_6c8 == (X509_NAME *)0x0) goto LAB_00102df8;
            bVar35 = false;
            local_680 = local_6c8;
            req = x;
          }
          else {
            local_688 = X509_get_subject_name(local_6d8);
            local_680 = local_6c8;
            if (local_6c8 == (X509_NAME *)0x0) {
LAB_00102df8:
              local_680 = (X509_NAME *)X509_REQ_get_subject_name(x);
            }
            bVar35 = local_6d8 != (X509 *)0x0;
            req = x;
            if ((lVar19 != 0) && (bVar35)) {
              BIO_printf(_bio_err,
                         "Warning: Not using -key or -newkey for signing since -CA option is given\n"
                        );
            }
          }
          uVar13 = app_get0_propq();
          uVar28 = app_get0_libctx();
          x_01 = (X509 *)X509_new_ex(uVar28,uVar13);
          if (x_01 != (X509 *)0x0) {
            if (local_6e0 == (ASN1_INTEGER *)0x0) {
              pAVar29 = X509_get_serialNumber(x_01);
              iVar8 = rand_serial(0,pAVar29);
            }
            else {
              iVar8 = X509_set_serialNumber(x_01,local_6e0);
            }
            if ((iVar8 != 0) && (iVar8 = X509_set_issuer_name(x_01,local_688), iVar8 != 0)) {
              if ((local_640 != -2) && (local_648 != 0)) {
                BIO_printf(_bio_err,"Warning: -not_after option overriding -days option\n");
              }
              iVar8 = set_cert_times(x_01,local_638,local_648);
              if ((((iVar8 != 0) && (iVar8 = X509_set_subject_name(x_01,local_680), iVar8 != 0)) &&
                  (local_660 != (EVP_PKEY *)0x0)) &&
                 (iVar8 = X509_set_pubkey(x_01,local_660), iVar8 != 0)) {
                if (local_580 == -1) {
                  if (local_670 != 0) {
                    BIO_printf(_bio_err,
                               "Warning: No -copy_extensions given; ignoring any extensions in the request\n"
                              );
                  }
                }
                else {
                  iVar8 = copy_extensions(x_01,req);
                  if (iVar8 == 0) {
                    BIO_printf(_bio_err,"Error copying extensions from request\n");
                    goto LAB_00103049;
                  }
                }
                if (bVar35) {
                  X509V3_set_ctx(&local_548,local_6d8,x_01,(X509_REQ *)0x0,(X509_CRL *)0x0,2);
                }
                else {
                  X509V3_set_ctx(&local_548,x_01,x_01,(X509_REQ *)0x0,(X509_CRL *)0x0,2);
                  iVar8 = X509V3_set_issuer_pkey(&local_548,pEVar30);
                  if (iVar8 == 0) goto LAB_00103049;
                  iVar8 = cert_matches_key(x_01,pEVar30);
                  if (iVar8 == 0) {
                    BIO_printf(_bio_err,
                               "Warning: Signature key and public key of cert do not match\n");
                  }
                }
                X509V3_set_nconf(&local_548,req_conf);
                if ((local_668 == (char *)0x0) ||
                   (iVar8 = X509V3_EXT_add_nconf(req_conf,&local_548,local_668,x_01), iVar8 != 0)) {
                  if ((addext_conf == (CONF *)0x0) ||
                     (iVar8 = X509V3_EXT_add_nconf(addext_conf,&local_548,"default",x_01),
                     iVar8 != 0)) {
                    if ((bVar36) &&
                       (iVar8 = X509_add1_ext_i2d(x_01,0x3b8,(void *)0x0,1,0), iVar8 != 1)) {
                      BIO_printf(_bio_err,"Error adding poison extension\n");
                    }
                    else {
                      iVar8 = do_X509_sign(x_01,local_5c8,pEVar30,local_620,local_6e8,&local_548);
                      if (iVar8 != 0) goto LAB_001014fb;
                    }
                  }
                  else {
                    BIO_printf(_bio_err,"Error adding x509 extensions defined via -addext\n");
                  }
                }
                else {
                  BIO_printf(_bio_err,"Error adding x509 extensions from section %s\n",local_668);
                }
              }
            }
          }
LAB_00103049:
          uVar32 = 1;
          ctx = (EVP_PKEY_CTX *)0x0;
          pBVar16 = (BIO *)0x0;
          goto LAB_00100732;
        }
        if (bVar36) {
          BIO_printf(_bio_err,"Warning: Ignoring -precert flag since no cert is produced\n");
        }
        X509V3_set_ctx(&local_548,(X509 *)0x0,(X509 *)0x0,x,(X509_CRL *)0x0,2);
        X509V3_set_nconf(&local_548,req_conf);
        if ((local_668 == (char *)0x0) ||
           (iVar8 = X509V3_EXT_REQ_add_nconf(req_conf,&local_548,local_668,x), iVar8 != 0)) {
          if ((addext_conf == (CONF *)0x0) ||
             (iVar8 = X509V3_EXT_REQ_add_nconf(addext_conf,&local_548,"default",x), iVar8 != 0)) {
            iVar8 = do_X509_REQ_sign(x,local_6c0,local_620,local_6e8);
            if (iVar8 != 0) {
              req = x;
              if ((local_658 != 0) && (uVar32 == 0)) goto LAB_001014d2;
              goto LAB_001014f5;
            }
          }
          else {
            BIO_printf(_bio_err,"Error adding request extensions defined via -addext\n");
          }
        }
        else {
          BIO_printf(_bio_err,"Error adding request extensions from section %s\n",local_668);
        }
LAB_00102494:
        uVar32 = 1;
        x_01 = (X509 *)0x0;
        ctx = (EVP_PKEY_CTX *)0x0;
        pBVar16 = (BIO *)0x0;
        req = x;
        goto LAB_00100732;
      }
      local_6d8 = (X509 *)0x0;
      local_6b8 = (EVP_PKEY *)0x0;
LAB_00102192:
      if (local_658 == 0) {
        x_01 = (X509 *)0x0;
      }
      else {
LAB_001014d2:
        if (bVar5) {
          BIO_printf((BIO *)0x0,"Modifying subject of certificate request\n");
          uVar13 = X509_REQ_get_subject_name(req);
          print_name(0,"Old subject=",uVar13);
          iVar8 = X509_REQ_set_subject_name(req,local_6c8);
          if (iVar8 == 0) goto LAB_001038ce;
          uVar13 = X509_REQ_get_subject_name(req);
          print_name(0,"New subject=",uVar13);
        }
        else {
          iVar8 = X509_REQ_set_subject_name(req,local_6c8);
          if (iVar8 == 0) {
LAB_001038ce:
            BIO_printf(_bio_err,"Error modifying subject of certificate request\n");
            x = req;
            goto LAB_00102494;
          }
        }
LAB_001014f5:
        x_01 = (X509 *)0x0;
      }
LAB_001014fb:
      if (uVar9 == 0) {
LAB_00101543:
        iVar8 = local_578;
        if (((local_618 & (local_604 ^ 1)) != 0) && (local_5f8 == 0 && (!bVar4 && local_63c == 0)))
        {
          ctx = (EVP_PKEY_CTX *)0x0;
          pBVar16 = (BIO *)0x0;
          uVar32 = 0;
          goto LAB_0010073e;
        }
        if ((local_678 == (char *)0x0) || (local_610 == (char *)0x0)) {
          iVar7 = 0x77;
        }
        else {
          iVar7 = strcmp(local_678,local_610);
          iVar7 = (-(uint)(iVar7 == 0) & 0xffffffea) + 0x77;
        }
        pBVar16 = (BIO *)bio_open_default(local_610,iVar7,iVar8);
        if (pBVar16 == (BIO *)0x0) {
          ctx = (EVP_PKEY_CTX *)0x0;
          uVar32 = 1;
          goto LAB_00100732;
        }
        if (local_5f8 != 0) {
          pEVar30 = (EVP_PKEY *)X509_REQ_get0_pubkey(req);
          if (pEVar30 == (EVP_PKEY *)0x0) {
            BIO_printf(_bio_err,"Error getting public key\n");
            ctx = (EVP_PKEY_CTX *)0x0;
            uVar32 = local_5f8;
            goto LAB_0010214b;
          }
          PEM_write_bio_PUBKEY(pBVar16,pEVar30);
        }
        uVar21 = local_558;
        if (local_604 == 0) {
          uVar9 = 1;
          if (local_63c != 0) {
            uVar9 = local_68c;
            if (local_68c == 0) {
LAB_00103ac3:
              pXVar18 = (X509_NAME *)X509_REQ_get_subject_name(req);
              uVar9 = local_63c;
            }
            else {
LAB_00101622:
              pXVar18 = X509_get_subject_name(x_01);
            }
            print_name(pBVar16,"subject=",pXVar18);
          }
LAB_0010163c:
          if (bVar4) {
            if (local_68c == 0) {
              lVar19 = X509_REQ_get0_pubkey(req);
            }
            else {
              lVar19 = X509_get0_pubkey(x_01);
            }
            if (lVar19 != 0) {
              BIO_puts(pBVar16,"Modulus=");
              iVar8 = EVP_PKEY_is_a(lVar19,&_LC12);
              if ((iVar8 == 0) && (iVar8 = EVP_PKEY_is_a(lVar19,"RSA-PSS"), iVar8 == 0)) {
                BIO_puts(pBVar16,"Wrong Algorithm type");
              }
              else {
                local_548._0_8_ = (BIGNUM *)0x0;
                iVar8 = EVP_PKEY_get_bn_param(lVar19,&_LC131,&local_548);
                if (iVar8 == 0) goto LAB_0010396c;
                BN_print(pBVar16,(BIGNUM *)local_548._0_8_);
                BN_free((BIGNUM *)local_548._0_8_);
              }
              BIO_puts(pBVar16,"\n");
              goto LAB_001016f8;
            }
            BIO_puts(_bio_err,"Modulus is unavailable\n");
LAB_0010396c:
            ctx = (EVP_PKEY_CTX *)0x0;
            uVar32 = uVar9;
            goto LAB_0010214b;
          }
LAB_001016f8:
          if (local_68c == 0 && local_618 == 0) {
            if (local_578 == 4) {
              iVar8 = i2d_X509_REQ_bio(pBVar16,req);
            }
            else if (bVar3) {
              iVar8 = PEM_write_bio_X509_REQ_NEW(pBVar16,req);
            }
            else {
              iVar8 = PEM_write_bio_X509_REQ(pBVar16,req);
            }
            if (iVar8 == 0) {
              BIO_printf(_bio_err,"Unable to write certificate request\n");
              goto LAB_0010396c;
            }
          }
          else {
            uVar32 = local_68c & (local_618 ^ 1);
            if (uVar32 == 0) goto LAB_0010173a;
            if (x_01 != (X509 *)0x0) {
              if (local_578 == 4) {
                iVar8 = i2d_X509_bio(pBVar16,x_01);
              }
              else {
                iVar8 = PEM_write_bio_X509(pBVar16,x_01);
              }
              if (iVar8 == 0) {
                BIO_printf(_bio_err,"Unable to write X509 certificate\n");
                goto LAB_0010396c;
              }
            }
          }
          uVar32 = 0;
        }
        else {
          if (local_68c == 0) {
            uVar17 = get_nameopt();
            uVar9 = X509_REQ_print_ex(pBVar16,req,uVar17,uVar21);
            if (uVar9 == 0) {
              uVar32 = 0;
              ctx = (EVP_PKEY_CTX *)0x0;
              BIO_printf(_bio_err,"Error printing certificate request\n");
              goto LAB_0010073e;
            }
            bVar36 = local_63c != 0;
            local_63c = uVar9;
            if (bVar36) goto LAB_00103ac3;
            goto LAB_0010163c;
          }
          uVar17 = get_nameopt();
          uVar9 = X509_print_ex(pBVar16,x_01,uVar17,uVar21);
          if (uVar9 != 0) {
            if (local_63c != 0) goto LAB_00101622;
            goto LAB_0010163c;
          }
          uVar32 = 0;
          BIO_printf(_bio_err,"Error printing certificate\n");
        }
LAB_0010173a:
        ctx = (EVP_PKEY_CTX *)0x0;
        goto LAB_0010073e;
      }
      pEVar30 = local_6c0;
      uVar32 = uVar9;
      if ((local_6c0 == (EVP_PKEY *)0x0) &&
         (pEVar30 = (EVP_PKEY *)X509_REQ_get0_pubkey(req), pEVar30 == (EVP_PKEY *)0x0)) {
        ctx = (EVP_PKEY_CTX *)0x0;
        pBVar16 = (BIO *)0x0;
      }
      else {
        iVar8 = do_X509_REQ_verify(req,pEVar30,local_6f0);
        if (iVar8 < 0) {
          ctx = (EVP_PKEY_CTX *)0x0;
          pBVar16 = (BIO *)0x0;
        }
        else {
          if (iVar8 != 0) {
            BIO_printf(_bio_out,"Certificate request self-signature verify OK\n");
            goto LAB_00101543;
          }
          ctx = (EVP_PKEY_CTX *)0x0;
          pBVar16 = (BIO *)0x0;
          BIO_printf(_bio_err,"Certificate request self-signature verify failure\n");
        }
      }
LAB_0010214b:
      if (uVar32 == 0) goto LAB_0010073e;
    }
  }
  goto LAB_00100732;
LAB_001031c7:
  BIO_printf(_bio_err,"%s \'%s\' too long\n",&_LC98,s);
  goto LAB_0010271c;
  while (iVar7 = X509_REQ_add1_attr_by_NID(x,iVar7,iVar8,local_448,-1), iVar7 != 0) {
LAB_00103326:
    do {
      local_630._0_4_ = (int)local_630 + 1;
      if ((local_5f0 == (stack_st_CONF_VALUE *)0x0) ||
         (iVar7 = OPENSSL_sk_num(local_5f0), iVar7 <= (int)local_630)) goto LAB_00102707;
      lVar24 = OPENSSL_sk_value(local_5f0,(int)local_630);
      s = *(char **)(lVar24 + 8);
      iVar7 = OBJ_txt2nid(s);
    } while (iVar7 == 0);
    sVar25 = strlen(s);
    if (100 < sVar25 + 9) goto LAB_001031c7;
    memcpy(&local_4b8,s,sVar25);
    auStack_4b0[sVar25] = 0;
    *(undefined8 *)((long)&local_4b8 + sVar25) = 0x746c75616665645f;
    puVar27 = (undefined *)app_conf_try_string(req_conf,pcVar15,&local_4b8);
    if (puVar27 == (undefined *)0x0) {
      puVar27 = &_LC15;
    }
    sVar25 = strlen(s);
    if (100 < sVar25 + 7) goto LAB_001031c7;
    memcpy(&local_4b8,s,sVar25);
    *(undefined4 *)((long)&local_4b8 + sVar25) = 0x6c61765f;
    *(undefined4 *)((long)&local_4b8 + sVar25 + 3) = 0x65756c;
    uVar13 = app_conf_try_string(req_conf,pcVar15,&local_4b8);
    sVar25 = strlen(s);
    if (100 < sVar25 + 5) goto LAB_001031c7;
    memcpy(&local_4b8,s,sVar25);
    *(undefined4 *)((long)&local_4b8 + sVar25) = 0x6e696d5f;
    *(undefined1 *)((long)&local_4b8 + sVar25 + 4) = 0;
    iVar10 = app_conf_try_number(req_conf,pcVar15,&local_4b8,&local_550);
    if (iVar10 == 0) {
      local_550 = 0xffffffffffffffff;
    }
    sVar25 = strlen(s);
    if (100 < sVar25 + 5) goto LAB_001031c7;
    memcpy(&local_4b8,s,sVar25);
    *(undefined4 *)((long)&local_4b8 + sVar25) = 0x78616d5f;
    *(undefined1 *)((long)&local_4b8 + sVar25 + 4) = 0;
    iVar10 = app_conf_try_number(req_conf,pcVar15,&local_4b8,&local_548);
    if (iVar10 == 0) {
      local_548._0_8_ = (BIGNUM *)0xffffffffffffffff;
    }
    uVar12 = build_data_constprop_0
                       (*(undefined8 *)(lVar24 + 0x10),puVar27,uVar13,local_550 & 0xffffffff,
                        local_548._0_8_ & 0xffffffff,local_448,"Attribute value","Attribute default"
                       );
    if (uVar12 < 2) {
      if (uVar12 == 0) goto LAB_0010271c;
      goto LAB_00103326;
    }
  }
  BIO_printf(_bio_err,"Error adding attribute\n");
LAB_0010271c:
  x_01 = (X509 *)0x0;
  ctx = (EVP_PKEY_CTX *)0x0;
  uVar32 = 1;
  BIO_printf(_bio_err,"Error making certificate request\n");
  pBVar16 = (BIO *)0x0;
  req = x;
LAB_00100732:
  ERR_print_errors(_bio_err);
LAB_0010073e:
  NCONF_free(req_conf);
  NCONF_free(addext_conf);
  BIO_free(local_6d0);
  BIO_free_all(pBVar16);
  EVP_PKEY_free(local_6c0);
  EVP_PKEY_CTX_free(ctx);
  OPENSSL_sk_free(local_6f8);
  OPENSSL_sk_free(local_6e8);
  OPENSSL_sk_free(local_6f0);
  OPENSSL_LH_doall(local_700,exts_cleanup);
  OPENSSL_LH_free(local_700);
  release_engine(local_6a8);
  CRYPTO_free(local_6b0);
  X509_REQ_free(req);
  X509_NAME_free(local_6c8);
  X509_free(x_01);
  X509_free(local_6d8);
  EVP_PKEY_free(local_6b8);
  ASN1_INTEGER_free(local_6e0);
  release_engine(local_6a0);
  if (local_570 != local_698) {
    CRYPTO_free(local_570);
  }
  if (local_568 != pvVar22) {
    CRYPTO_free(local_568);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar32;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


