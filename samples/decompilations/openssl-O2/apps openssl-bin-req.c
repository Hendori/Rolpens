
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

undefined8 join(void *param_1,ulong param_2,char *param_3,char *param_4,undefined8 param_5)

{
  size_t __n;
  size_t sVar1;
  
  __n = strlen(param_3);
  sVar1 = strlen(param_4);
  if (__n + 1 + sVar1 <= param_2) {
    memcpy(param_1,param_3,__n);
    memcpy((void *)((long)param_1 + __n),param_4,sVar1 + 1);
    return 1;
  }
  BIO_printf(_bio_err,"%s \'%s\' too long\n",param_5,param_3);
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
build_data_constprop_0
          (undefined8 param_1,char *param_2,long param_3,uint param_4,uint param_5,char *param_6,
          undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  int iVar2;
  int iVar3;
  size_t sVar4;
  char *pcVar5;
  
  if (batch == 0) goto LAB_0010024f;
  do {
    BIO_ctrl(_bio_err,0xb,0,(void *)0x0);
    iVar2 = batch;
    if (param_3 == 0) {
      *param_6 = '\0';
      if (iVar2 == 0) {
        pcVar5 = fgets(param_6,0x400,_stdin);
        if (pcVar5 == (char *)0x0) {
          return 0;
        }
        goto LAB_001001b8;
      }
      param_6[0] = '\n';
      param_6[1] = '\0';
LAB_001002b8:
      if (*param_2 == '\0') {
        return 1;
      }
      iVar2 = join(param_6,0x400,param_2,&_LC3,param_8);
      if (iVar2 == 0) {
        return 0;
      }
    }
    else {
      iVar2 = join(param_6,0x400,param_3,&_LC3,param_7);
      if (iVar2 == 0) {
        return 0;
      }
      BIO_printf(_bio_err,"%s\n",param_3);
LAB_001001b8:
      cVar1 = *param_6;
      if (cVar1 == '\0') {
        return 0;
      }
      if (cVar1 == '\n') goto LAB_001002b8;
      if ((cVar1 == '.') && (param_6[1] == '\n')) {
        return 1;
      }
    }
    sVar4 = strlen(param_6);
    if (param_6[(long)(int)sVar4 + -1] != '\n') {
      BIO_printf(_bio_err,"Missing newline at end of input\n");
      return 0;
    }
    param_6[(long)(int)sVar4 + -1] = '\0';
    iVar3 = (int)sVar4 + -1;
    iVar2 = 0;
    if (-1 < iVar3) {
      iVar2 = iVar3;
    }
    if (iVar2 < (int)param_4) {
      BIO_printf(_bio_err,"String too short, must be at least %d bytes long\n",(ulong)param_4);
    }
    else {
      if (((int)param_5 < 0) || (iVar3 <= (int)param_5)) {
        return 2;
      }
      BIO_printf(_bio_err,"String too long, must be at most %d bytes long\n",(ulong)param_5);
    }
    if (batch != 0) {
      return 0;
    }
    if (param_3 != 0) {
      return 0;
    }
LAB_0010024f:
    BIO_printf(_bio_err,"%s [%s]:",param_1);
  } while( true );
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
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  undefined8 uVar13;
  ushort **ppuVar14;
  char *pcVar15;
  BIO *pBVar16;
  ulong uVar17;
  X509_NAME *pXVar18;
  long lVar19;
  BIO_METHOD *type;
  EVP_CIPHER *pEVar20;
  ulong uVar21;
  void *pvVar22;
  X509 *x;
  EVP_PKEY *pEVar23;
  X509_NAME *pXVar24;
  undefined8 uVar25;
  X509 *x_00;
  ASN1_INTEGER *pAVar26;
  X509_REQ *x_01;
  char *pcVar27;
  long lVar28;
  size_t sVar29;
  byte *pbVar30;
  undefined *puVar31;
  byte *pbVar32;
  EVP_PKEY_CTX *ctx;
  byte *pbVar33;
  BIGNUM *pBVar34;
  long in_FS_OFFSET;
  bool bVar35;
  bool bVar36;
  BIO *local_6f0;
  long local_6e8;
  long local_6e0;
  long local_6d8;
  long local_6d0;
  ASN1_INTEGER *local_6c8;
  X509 *local_6c0;
  BIO *local_6b8;
  X509_NAME *local_6b0;
  EVP_PKEY *local_6a8;
  EVP_PKEY *local_6a0;
  char *local_698;
  ENGINE *local_690;
  undefined8 local_688;
  void *local_680;
  uint local_678;
  uint local_674;
  EVP_PKEY *local_670;
  char *local_668;
  long local_660;
  char *local_658;
  int local_648;
  int local_644;
  long local_640;
  EVP_CIPHER *local_638;
  long local_630;
  long local_628;
  stack_st_CONF_VALUE *local_620;
  long local_618;
  long local_610;
  uint local_608;
  uint local_604;
  uint local_600;
  char *local_5f8;
  uint local_5ec;
  stack_st_CONF_VALUE *local_5e8;
  undefined4 local_5dc;
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
  undefined1 local_4b8 [112];
  uchar local_448 [1032];
  long local_40;
  
  lVar19 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_580 = -1;
  local_570 = (void *)0x0;
  local_568 = (void *)0x0;
  local_6a8 = (EVP_PKEY *)_default_config_file;
  local_57c = 0;
  local_578 = 0x8005;
  local_574 = 0;
  local_560 = (BIGNUM *)0xffffffffffffffff;
  local_558 = 0;
  local_638 = EVP_aes_256_cbc();
  opt_set_unknown_name("digest");
  uVar13 = opt_init(param_1,param_2,req_options);
  bVar36 = true;
  iVar7 = 0x1001;
  local_5dc = 0;
  bVar35 = false;
  local_5ec = 0;
  local_608 = 0;
  bVar3 = false;
  bVar5 = false;
  local_600 = 0;
  local_604 = 0;
  local_678 = 0;
  bVar4 = false;
  local_648 = 0;
  uVar8 = 0;
  local_674 = 0;
  local_644 = -2;
  local_630 = 0;
  local_628 = 0;
  local_6b0 = (X509_NAME *)0x0;
  local_668 = (char *)0x0;
  local_640 = 0;
  local_698 = (char *)0x0;
  local_6a0 = (EVP_PKEY *)0x0;
  local_610 = 0;
  local_5f8 = (char *)0x0;
  local_618 = 0;
  local_620 = (stack_st_CONF_VALUE *)0x0;
  local_660 = 0;
  local_658 = (char *)0x0;
  local_6b8 = (BIO *)0x0;
  local_6e8 = 0;
  local_6d8 = 0;
  local_6d0 = 0;
  local_6e0 = 0;
  local_690 = (ENGINE *)0x0;
  local_688 = 0;
  local_6c8 = (ASN1_INTEGER *)0x0;
switchD_001005c6_caseD_0:
  pcVar27 = local_668;
  pXVar18 = local_6b0;
  iVar6 = opt_next();
joined_r0x001005a7:
  if (iVar6 == 0) {
    iVar6 = opt_check_rest_arg(0);
    if (iVar6 == 0) goto switchD_001005c6_caseD_ffffffff;
    iVar6 = app_RAND_load();
    if (iVar6 == 0) goto LAB_00100619;
    if (local_674 == 0) {
      if (local_644 != -2) {
        BIO_printf(_bio_err,"Warning: Ignoring -days without -x509; not generating a certificate\n")
        ;
      }
      if (local_628 != 0) {
        BIO_printf(_bio_err,
                   "Warning: Ignoring -not_before without -x509; not generating a certificate\n");
      }
      if (local_630 != 0) {
        BIO_printf(_bio_err,
                   "Warning: Ignoring -not_after without -x509; not generating a certificate\n");
      }
      if (local_580 == 0) {
        BIO_printf(_bio_err,"Warning: Ignoring -copy_extensions \'none\' when -x509 is not given\n")
        ;
      }
      if (local_660 == 0) {
        if (uVar8 != 0) goto LAB_001018d4;
        iVar6 = fileno_stdin();
        iVar6 = isatty(iVar6);
        if (iVar6 != 0) {
          BIO_printf(_bio_err,
                     "Warning: Will read cert request from stdin since no -in option is given\n");
        }
      }
    }
    else if (local_660 == 0) {
LAB_001018d4:
      uVar8 = 1;
    }
    iVar6 = app_passwd(local_6a0,local_698,&local_570);
    if (iVar6 == 0) {
      BIO_printf(_bio_err,"Error getting passwords\n");
      goto LAB_00100619;
    }
    req_conf = (CONF *)app_load_config_verbose(local_6a8);
    if (req_conf == (CONF *)0x0) goto LAB_00100619;
    if (local_6b8 == (BIO *)0x0) {
      if (local_6a8 != (EVP_PKEY *)_default_config_file) goto LAB_00100fa0;
LAB_00101918:
      pcVar15 = (char *)app_conf_try_string(req_conf,0,"oid_file");
      if (pcVar15 != (char *)0x0) {
        pBVar16 = BIO_new_file(pcVar15,"r");
        if (pBVar16 == (BIO *)0x0) {
          if (local_648 != 0) {
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
      if (local_648 != 0) {
        BIO_printf(_bio_err,"Using additional configuration from -addext options\n");
      }
      addext_conf = (CONF *)app_load_config_bio(local_6b8);
      if (addext_conf == (CONF *)0x0) goto LAB_00100619;
      if ((EVP_PKEY *)_default_config_file != local_6a8) {
LAB_00100fa0:
        iVar6 = app_load_modules(req_conf);
        if (iVar6 == 0) goto LAB_00100619;
      }
      if (req_conf != (CONF *)0x0) goto LAB_00101918;
    }
    iVar6 = add_oid_section(req_conf);
    if (iVar6 == 0) goto LAB_00100619;
    if (local_610 == 0) {
      local_610 = app_conf_try_string(req_conf,section,"default_md");
    }
    else {
      iVar6 = opt_check_md(local_610);
      if (iVar6 == 0) goto switchD_001005c6_caseD_ffffffff;
    }
    if (local_658 == (char *)0x0) {
      pcVar15 = "req_extensions";
      if (local_674 != 0) {
        pcVar15 = "x509_extensions";
      }
      local_658 = (char *)app_conf_try_string(req_conf,section,pcVar15);
      if (local_658 != (char *)0x0) goto LAB_00100ffd;
    }
    else {
LAB_00100ffd:
      X509V3_set_ctx(&local_548,(X509 *)0x0,(X509 *)0x0,(X509_REQ *)0x0,(X509_CRL *)0x0,1);
      X509V3_set_nconf(&local_548,req_conf);
      iVar6 = X509V3_EXT_add_nconf(req_conf,&local_548,local_658,(X509 *)0x0);
      if (iVar6 == 0) {
        pcVar27 = "request";
        if (local_674 != 0) {
          pcVar27 = "x509";
        }
        BIO_printf(_bio_err,"Error checking %s extension section %s\n",pcVar27,local_658);
        goto LAB_00100619;
      }
    }
    if (addext_conf != (CONF *)0x0) {
      X509V3_set_ctx(&local_548,(X509 *)0x0,(X509 *)0x0,(X509_REQ *)0x0,(X509_CRL *)0x0,1);
      X509V3_set_nconf(&local_548,req_conf);
      iVar6 = X509V3_EXT_add_nconf(addext_conf,&local_548,"default",(X509 *)0x0);
      if (iVar6 == 0) {
        BIO_printf(_bio_err,"Error checking extensions defined using -addext\n");
        goto LAB_00100619;
      }
    }
    local_680 = (void *)0x0;
    if (local_570 == (void *)0x0) {
      local_680 = (void *)app_conf_try_string(req_conf,section,"input_password");
      local_570 = local_680;
    }
    pvVar22 = (void *)0x0;
    if (local_568 == (void *)0x0) {
      pvVar22 = (void *)app_conf_try_string(req_conf,section,"output_password");
      local_568 = pvVar22;
    }
    pcVar15 = (char *)app_conf_try_string(req_conf,section,"string_mask");
    if ((pcVar15 != (char *)0x0) && (iVar6 = ASN1_STRING_set_default_mask_asc(pcVar15), iVar6 == 0))
    {
      BIO_printf(_bio_err,"Invalid global string mask setting %s\n",pcVar15);
      goto LAB_00100642;
    }
    if ((iVar7 == 0x1000) ||
       ((pcVar15 = (char *)app_conf_try_string(req_conf,section,&_LC46), pcVar15 != (char *)0x0 &&
        (iVar6 = strcmp(pcVar15,"yes"), iVar6 == 0)))) {
      iVar7 = 0x1000;
    }
    if (lVar19 != 0) {
      local_6a8 = (EVP_PKEY *)load_key(lVar19,local_574,0);
      if (local_6a8 == (EVP_PKEY *)0x0) {
        local_698 = (char *)0x0;
        pBVar16 = (BIO *)0x0;
        local_6b0 = (X509_NAME *)0x0;
        goto LAB_00102265;
      }
      app_RAND_load_conf();
      if (local_6b0 != (X509_NAME *)0x0) {
        BIO_printf(_bio_err,
                   "Warning: Not generating key via given -newkey option since -key is given\n");
      }
      if (local_668 == (char *)0x0) {
        pcVar27 = (char *)0x0;
        goto LAB_001011c9;
      }
      local_698 = (char *)0x0;
      goto LAB_00101dc9;
    }
    if (uVar8 == 0) {
      if (local_668 == (char *)0x0) {
        pcVar27 = (char *)app_conf_try_string(req_conf,section,"default_keyfile");
        local_6a8 = (EVP_PKEY *)0x0;
        goto LAB_001011c9;
      }
      local_6a8 = (EVP_PKEY *)0x0;
      if (local_640 != 0) {
        local_668 = (char *)0x0;
        goto LAB_001011d8;
      }
      local_6b0 = (X509_NAME *)0x0;
      local_698 = (char *)0x0;
      goto LAB_00101250;
    }
    app_RAND_load_conf(req_conf,section);
    iVar6 = app_conf_try_number(req_conf,section,"default_bits");
    if (iVar6 == 0) {
      local_560 = (BIGNUM *)0x800;
    }
    x_00 = (X509 *)0x0;
    if (local_6b0 == (X509_NAME *)0x0) {
      pEVar23 = (EVP_PKEY *)0x0;
      local_6b0 = (X509_NAME *)&_LC13;
      pBVar34 = local_560;
LAB_001021f6:
      local_698 = CRYPTO_strdup((char *)local_6b0,"apps/req.c",0x631);
LAB_00101bb5:
      if (local_698 == (char *)0x0) {
        BIO_printf(_bio_err,"Out of memory\n");
        EVP_PKEY_free(pEVar23);
        goto LAB_0010246c;
      }
      if (-1 < (long)pBVar34) {
        local_560 = pBVar34;
      }
      if (pEVar23 == (EVP_PKEY *)0x0) {
        if (local_690 == (ENGINE *)0x0) {
          uVar13 = app_get0_propq();
          uVar25 = app_get0_libctx();
          ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_name(uVar25,local_698,uVar13);
LAB_00101c1f:
          if (ctx != (EVP_PKEY_CTX *)0x0) {
            iVar6 = EVP_PKEY_keygen_init(ctx);
            if (iVar6 < 1) {
              BIO_puts(_bio_err,"Error initializing keygen context\n");
              EVP_PKEY_CTX_free(ctx);
              goto LAB_00102474;
            }
            if (pBVar34 == (BIGNUM *)0xffffffffffffffff) {
              iVar6 = EVP_PKEY_CTX_is_a(ctx,&_LC13);
              if ((iVar6 == 0) && (iVar6 = EVP_PKEY_CTX_is_a(ctx,"RSA-PSS"), iVar6 == 0))
              goto LAB_00101cdc;
              pBVar34 = local_560;
              if (local_560 != (BIGNUM *)0xffffffffffffffff) goto LAB_00101c42;
LAB_0010277a:
              iVar6 = EVP_PKEY_CTX_is_a(ctx,&_LC13);
              if (((iVar6 != 0) || (iVar6 = EVP_PKEY_CTX_is_a(ctx,"RSA-PSS"), iVar6 != 0)) ||
                 (iVar6 = EVP_PKEY_CTX_is_a(ctx,&_LC63), iVar6 != 0)) {
                BIO_printf(_bio_err,
                           "Private key length too short, needs to be at least %d bits, not %ld.\n",
                           0x200,local_560);
                goto LAB_0010210b;
              }
            }
            else {
LAB_00101c42:
              local_508 = (undefined1  [16])0x0;
              local_4f8 = (undefined1  [16])0x0;
              local_4e8 = (undefined1  [16])0x0;
              local_4d8 = (undefined1  [16])0x0;
              local_4c8 = (undefined1  [16])0x0;
              local_548._0_8_ = pBVar34;
              OSSL_PARAM_construct_size_t(local_5b8,&_LC61,&local_548);
              local_4e8._0_8_ = local_598;
              iVar6 = EVP_PKEY_CTX_set_params(ctx,local_508);
              if (iVar6 < 1) {
                BIO_puts(_bio_err,"Error setting keysize\n");
                EVP_PKEY_CTX_free(ctx);
                goto LAB_00102474;
              }
LAB_00101cdc:
              if ((long)local_560 < 0x200) goto LAB_0010277a;
            }
            if ((0x4000 < (long)local_560) &&
               ((iVar6 = EVP_PKEY_CTX_is_a(ctx,&_LC13), iVar6 != 0 ||
                (iVar6 = EVP_PKEY_CTX_is_a(ctx,"RSA-PSS"), iVar6 != 0)))) {
              BIO_printf(_bio_err,
                         "Warning: It is not recommended to use more than %d bit for RSA keys.\n         Your key size is %ld! Larger key size may behave not as expected.\n"
                         ,0x4000,local_560);
            }
            iVar6 = EVP_PKEY_CTX_is_a(ctx,&_LC63);
            if ((iVar6 != 0) && (10000 < (long)local_560)) {
              BIO_printf(_bio_err,
                         "Warning: It is not recommended to use more than %d bit for DSA keys.\n         Your key size is %ld! Larger key size may behave not as expected.\n"
                         ,10000);
            }
            iVar6 = 0;
            if (local_6e0 != 0) goto LAB_00101d5f;
            goto LAB_00101d6e;
          }
        }
        else {
          uVar13 = app_get0_libctx();
          iVar6 = get_legacy_pkey_id(uVar13,local_698,local_690);
          if (iVar6 != 0) {
            ctx = EVP_PKEY_CTX_new_id(iVar6,local_690);
            goto LAB_00101c1f;
          }
        }
        BIO_puts(_bio_err,"Error allocating keygen context\n");
      }
      else {
        iVar6 = EVP_PKEY_is_a(pEVar23,local_698);
        if (iVar6 != 0) {
          if (local_690 == (ENGINE *)0x0) {
            uVar13 = app_get0_propq();
            uVar25 = app_get0_libctx();
            ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(uVar25,pEVar23,uVar13);
          }
          else {
            ctx = EVP_PKEY_CTX_new(pEVar23,local_690);
          }
          iVar6 = EVP_PKEY_get_bits(pEVar23);
          local_560 = (BIGNUM *)(long)iVar6;
          EVP_PKEY_free(pEVar23);
          goto LAB_00101c1f;
        }
        BIO_printf(_bio_err,"Key type does not match parameters\n");
        EVP_PKEY_free(pEVar23);
      }
    }
    else {
      if ((byte)(*(char *)local_6b0 - 0x30U) < 10) {
        uVar21 = 0;
        local_6b0 = (X509_NAME *)&_LC13;
LAB_00101f97:
        pEVar23 = (EVP_PKEY *)0x0;
        pBVar34 = (BIGNUM *)strtol((char *)pXVar18,(char **)0x0,10);
LAB_00101b8e:
        if (uVar21 == 0) goto LAB_001021f6;
        local_698 = (char *)CRYPTO_strndup(local_6b0,uVar21,"apps/req.c",0x62f);
        goto LAB_00101bb5;
      }
      pcVar27 = strchr((char *)local_6b0,0x3a);
      if (pcVar27 == (char *)0x0) {
        sVar29 = strlen((char *)local_6b0);
        uVar21 = (ulong)(int)sVar29;
        sVar29 = 6;
        if (uVar21 < 7) {
          sVar29 = uVar21;
        }
        pBVar34 = (BIGNUM *)0xffffffffffffffff;
        iVar6 = strncmp((char *)local_6b0,"param",sVar29);
        pEVar23 = (EVP_PKEY *)0x0;
        if (iVar6 != 0) goto LAB_00101b8e;
        BIO_printf(_bio_err,"Parameter file requested but no path given: %s\n",local_6b0);
        goto LAB_00100642;
      }
      uVar21 = (ulong)((int)pcVar27 - (int)local_6b0);
      sVar29 = 6;
      if (uVar21 < 7) {
        sVar29 = uVar21;
      }
      iVar6 = strncmp((char *)local_6b0,"param",sVar29);
      if (iVar6 == 0) {
        local_6b0 = (X509_NAME *)0x0;
        pXVar18 = (X509_NAME *)((long)pXVar18 + uVar21 + 1);
        uVar21 = 0;
      }
      else {
        pXVar18 = (X509_NAME *)((long)local_6b0 + uVar21 + 1);
        if ((byte)(*(char *)pXVar18 - 0x30U) < 10) goto LAB_00101f97;
      }
      pBVar16 = BIO_new_file((char *)pXVar18,"r");
      if (pBVar16 == (BIO *)0x0) {
        BIO_printf(_bio_err,"Cannot open parameter file %s\n",pXVar18);
        goto LAB_00100642;
      }
      pEVar23 = PEM_read_bio_Parameters(pBVar16,(EVP_PKEY **)0x0);
      if (pEVar23 == (EVP_PKEY *)0x0) {
        BIO_ctrl(pBVar16,1,0,(void *)0x0);
        x = PEM_read_bio_X509(pBVar16,(X509 **)0x0,(undefined1 *)0x0,(void *)0x0);
        if (x == (X509 *)0x0) {
          BIO_free(pBVar16);
        }
        else {
          pEVar23 = X509_get_pubkey(x);
          X509_free(x);
          BIO_free(pBVar16);
          if (pEVar23 != (EVP_PKEY *)0x0) goto LAB_00101b7b;
        }
        BIO_printf(_bio_err,"Error reading parameter file %s\n",pXVar18);
      }
      else {
        BIO_free(pBVar16);
LAB_00101b7b:
        pBVar34 = (BIGNUM *)0xffffffffffffffff;
        if ((local_6b0 != (X509_NAME *)0x0) ||
           (local_6b0 = (X509_NAME *)EVP_PKEY_get0_type_name(pEVar23), local_6b0 != (X509_NAME *)0x0
           )) goto LAB_00101b8e;
        EVP_PKEY_free(pEVar23);
        BIO_puts(_bio_err,"Unable to determine key type\n");
      }
LAB_0010246c:
      local_698 = (char *)0x0;
    }
LAB_00102474:
    local_6b0 = (X509_NAME *)0x0;
    pBVar16 = (BIO *)0x0;
    ctx = (EVP_PKEY_CTX *)0x0;
    local_6c0 = (X509 *)0x0;
    local_6a0 = (EVP_PKEY *)0x0;
    local_6a8 = (EVP_PKEY *)0x0;
    local_6f0 = (BIO *)0x0;
    local_678 = uVar8;
    goto LAB_00102149;
  }
  if (0x33 < iVar6) {
    if (iVar6 < 0x5df) {
      if (iVar6 < 0x5dd) goto switchD_001005c6_caseD_0;
      iVar6 = opt_rand();
    }
    else {
      if (3 < iVar6 - 0x641U) goto switchD_001005c6_caseD_0;
      iVar6 = opt_provider();
    }
    if (iVar6 == 0) goto LAB_00100619;
    goto switchD_001005c6_caseD_0;
  }
  if (iVar6 < -1) goto switchD_001005c6_caseD_0;
  switch(iVar6) {
  default:
    goto switchD_001005c6_caseD_0;
  case 1:
    pvVar22 = (void *)0x0;
    pBVar16 = (BIO *)0x0;
    x_00 = (X509 *)0x0;
    opt_help(req_options);
    ctx = (EVP_PKEY_CTX *)0x0;
    local_698 = (char *)0x0;
    local_678 = 0;
    local_6b0 = (X509_NAME *)0x0;
    local_680 = (void *)0x0;
    local_6c0 = (X509 *)0x0;
    local_6a0 = (EVP_PKEY *)0x0;
    local_6a8 = (EVP_PKEY *)0x0;
    local_6f0 = (BIO *)0x0;
    goto LAB_00100679;
  case 2:
    pcVar27 = (char *)opt_arg();
    local_638 = EVP_get_cipherbyname(pcVar27);
    if (local_638 != (EVP_CIPHER *)0x0) goto switchD_001005c6_caseD_0;
    uVar25 = opt_arg();
    BIO_printf(_bio_err,"Unknown cipher: %s\n",uVar25);
    break;
  case 3:
    uVar25 = opt_arg();
    iVar6 = opt_format(uVar25,6,&local_57c);
    goto joined_r0x00100c1f;
  case 4:
    uVar25 = opt_arg();
    iVar6 = opt_format(uVar25,6,&local_578);
    goto joined_r0x00100c1f;
  case 5:
    uVar25 = opt_arg();
    local_688 = setup_engine_methods(uVar25,0xffffffff,0);
    goto switchD_001005c6_caseD_0;
  case 6:
    uVar25 = opt_arg();
    local_690 = (ENGINE *)setup_engine_methods(uVar25,0xffffffff,0);
    if (local_690 != (ENGINE *)0x0) goto switchD_001005c6_caseD_0;
    BIO_printf(_bio_err,"Can\'t find keygen engine %s\n",*param_2);
    break;
  case 7:
    lVar19 = opt_arg();
    goto switchD_001005c6_caseD_0;
  case 8:
    local_5ec = 1;
    goto switchD_001005c6_caseD_0;
  case 9:
    goto switchD_001005c6_caseD_9;
  case 10:
    local_6a8 = (EVP_PKEY *)opt_arg();
    goto switchD_001005c6_caseD_0;
  case 0xb:
    uVar25 = opt_arg();
    iVar6 = opt_format(uVar25,0xffe,&local_574);
    goto joined_r0x00100c1f;
  case 0xc:
    local_660 = opt_arg();
    goto switchD_001005c6_caseD_0;
  case 0xd:
    local_5f8 = (char *)opt_arg();
    goto switchD_001005c6_caseD_0;
  case 0xe:
    local_668 = (char *)opt_arg();
    goto switchD_001005c6_caseD_0;
  case 0xf:
    local_6a0 = (EVP_PKEY *)opt_arg();
    goto switchD_001005c6_caseD_0;
  case 0x10:
    local_698 = (char *)opt_arg();
    goto switchD_001005c6_caseD_0;
  case 0x11:
    local_6b0 = (X509_NAME *)opt_arg();
    uVar8 = 1;
    goto switchD_001005c6_caseD_0;
  case 0x12:
    if ((local_6e0 != 0) || (local_6e0 = OPENSSL_sk_new_null(), local_6e0 != 0)) {
      opt_arg();
      iVar6 = OPENSSL_sk_push();
      goto joined_r0x00100c1f;
    }
    break;
  case 0x13:
    if ((local_6d0 != 0) || (local_6d0 = OPENSSL_sk_new_null(), local_6d0 != 0)) {
      opt_arg();
      iVar6 = OPENSSL_sk_push();
      goto joined_r0x00100c1f;
    }
    break;
  case 0x14:
    if ((local_6d8 != 0) || (local_6d8 = OPENSSL_sk_new_null(), local_6d8 != 0)) {
      opt_arg();
      iVar6 = OPENSSL_sk_push();
      goto joined_r0x00100c1f;
    }
    break;
  case 0x15:
    batch = 1;
    goto switchD_001005c6_caseD_0;
  case 0x16:
    bVar3 = true;
    goto switchD_001005c6_caseD_0;
  case 0x17:
    bVar4 = true;
    goto switchD_001005c6_caseD_0;
  case 0x18:
    local_678 = 1;
    goto switchD_001005c6_caseD_0;
  case 0x19:
  case 0x1a:
    bVar5 = true;
    goto switchD_001005c6_caseD_0;
  case 0x1b:
    local_604 = 1;
    goto switchD_001005c6_caseD_0;
  case 0x1c:
    bVar36 = true;
    local_648 = 1;
    goto switchD_001005c6_caseD_0;
  case 0x1d:
    iVar7 = 0x1000;
    goto switchD_001005c6_caseD_0;
  case 0x1e:
    opt_arg();
    iVar6 = set_nameopt();
    goto joined_r0x00100c1f;
  case 0x1f:
    opt_arg();
    iVar6 = set_cert_ex();
joined_r0x00100c1f:
    if (iVar6 != 0) goto switchD_001005c6_caseD_0;
    break;
  case 0x20:
    local_640 = opt_arg();
    goto switchD_001005c6_caseD_0;
  case 0x21:
    local_608 = 1;
    goto switchD_001005c6_caseD_0;
  case 0x22:
    local_600 = 1;
    goto switchD_001005c6_caseD_0;
  case 0x23:
    local_674 = 1;
    goto switchD_001005c6_caseD_0;
  case 0x24:
    local_5dc = 1;
    local_674 = 1;
    goto switchD_001005c6_caseD_0;
  case 0x25:
    local_620 = (stack_st_CONF_VALUE *)opt_arg();
    local_674 = 1;
    goto switchD_001005c6_caseD_0;
  case 0x26:
    local_618 = opt_arg();
    goto switchD_001005c6_caseD_0;
  case 0x28:
    local_628 = opt_arg();
    goto switchD_001005c6_caseD_0;
  case 0x29:
    local_630 = opt_arg();
    goto switchD_001005c6_caseD_0;
  case 0x2a:
    pcVar27 = (char *)opt_arg();
    lVar28 = strtol(pcVar27,(char **)0x0,10);
    local_644 = (int)lVar28;
    if (local_644 < -1) {
      BIO_printf(_bio_err,"%s: -days parameter arg must be >= -1\n",uVar13);
      goto LAB_00100619;
    }
    goto switchD_001005c6_caseD_0;
  case 0x2b:
    if (local_6c8 == (ASN1_INTEGER *)0x0) {
      pcVar27 = (char *)opt_arg();
      local_6c8 = s2i_ASN1_INTEGER((X509V3_EXT_METHOD *)0x0,pcVar27);
      if (local_6c8 != (ASN1_INTEGER *)0x0) goto switchD_001005c6_caseD_0;
    }
    else {
      BIO_printf(_bio_err,"Serial number supplied twice\n");
    }
    break;
  case 0x2c:
    opt_arg();
    iVar6 = set_ext_copy();
    if (iVar6 == 0) {
      uVar13 = opt_arg();
      BIO_printf(_bio_err,"Invalid extension copy option: \"%s\"\n",uVar13);
      goto LAB_00100619;
    }
    goto switchD_001005c6_caseD_0;
  case 0x2d:
  case 0x2e:
    local_658 = (char *)opt_arg();
    goto switchD_001005c6_caseD_0;
  case 0x2f:
    pbVar33 = (byte *)opt_arg();
    if (local_6e8 == 0) {
      uVar25 = OPENSSL_LH_new(ext_name_hash,ext_name_cmp);
      local_6e8 = OPENSSL_LH_set_thunks
                            (uVar25,0x100000,lh_OPENSSL_STRING_comp_thunk,
                             lh_OPENSSL_STRING_doall_thunk);
      type = BIO_s_mem();
      local_6b8 = BIO_new(type);
      if ((local_6e8 == 0) || (local_6b8 == (BIO *)0x0)) {
        local_698 = (char *)0x0;
        pvVar22 = (void *)0x0;
        x_00 = (X509 *)0x0;
        ctx = (EVP_PKEY_CTX *)0x0;
        local_6b0 = (X509_NAME *)0x0;
        pBVar16 = (BIO *)0x0;
        local_680 = (void *)0x0;
        local_6c0 = (X509 *)0x0;
        local_6a0 = (EVP_PKEY *)0x0;
        local_6a8 = (EVP_PKEY *)0x0;
        local_6f0 = (BIO *)0x0;
        local_678 = 1;
        goto LAB_0010066d;
      }
    }
    ppuVar14 = __ctype_b_loc();
    bVar2 = *(byte *)((long)*ppuVar14 + (ulong)*pbVar33 * 2 + 1);
    pbVar32 = pbVar33;
    while ((bVar2 & 0x20) != 0) {
      pbVar30 = pbVar32 + 1;
      pbVar32 = pbVar32 + 1;
      bVar2 = *(byte *)((long)*ppuVar14 + (ulong)*pbVar30 * 2 + 1);
    }
    pcVar27 = strchr((char *)pbVar32,0x3d);
    if (pcVar27 == (char *)0x0) {
      x_00 = (X509 *)0x0;
      pvVar22 = (void *)0x0;
      pBVar16 = (BIO *)0x0;
      ctx = (EVP_PKEY_CTX *)0x0;
      BIO_printf(_bio_err,"Parse error on -addext: missing \'=\'\n");
      local_698 = (char *)0x0;
      local_6b0 = (X509_NAME *)0x0;
      local_680 = (void *)0x0;
      local_6c0 = (X509 *)0x0;
      local_6a0 = (EVP_PKEY *)0x0;
      local_6a8 = (EVP_PKEY *)0x0;
      local_678 = 1;
      local_6f0 = (BIO *)0x0;
      goto LAB_0010066d;
    }
    pcVar15 = CRYPTO_strdup((char *)pbVar32,"apps/req.c",0xd8);
    if (pcVar15 == (char *)0x0) {
LAB_0010172f:
      BIO_printf(_bio_err,"Internal error handling -addext %s\n",pbVar33);
LAB_00100619:
      pvVar22 = (void *)0x0;
      local_680 = (void *)0x0;
LAB_00100642:
      local_678 = 1;
      local_698 = (char *)0x0;
      local_6b0 = (X509_NAME *)0x0;
      local_6c0 = (X509 *)0x0;
      x_00 = (X509 *)0x0;
      ctx = (EVP_PKEY_CTX *)0x0;
      local_6a0 = (EVP_PKEY *)0x0;
      local_6a8 = (EVP_PKEY *)0x0;
      local_6f0 = (BIO *)0x0;
      pBVar16 = (BIO *)(X509_REQ *)0x0;
      goto LAB_0010066d;
    }
    pcVar27 = pcVar15 + ((long)pcVar27 - (long)pbVar32);
    if (pcVar15 < pcVar27) {
      do {
        if ((*(byte *)((long)*ppuVar14 + (ulong)(byte)pcVar27[-1] * 2 + 1) & 0x20) == 0)
        goto LAB_00100959;
        pcVar27 = pcVar27 + -1;
      } while (pcVar15 != pcVar27);
    }
    else {
LAB_00100959:
      if (pcVar27 != pcVar15) {
        *pcVar27 = '\0';
        pvVar22 = (void *)OPENSSL_LH_insert(local_6e8,pcVar15);
        if (pvVar22 != (void *)0x0) {
          BIO_printf(_bio_err,"Duplicate extension name: %s\n");
          CRYPTO_free(pvVar22);
          goto LAB_00100619;
        }
        iVar6 = OPENSSL_LH_error(local_6e8);
        if (iVar6 != 0) {
          CRYPTO_free(pcVar15);
          goto LAB_0010172f;
        }
        iVar6 = BIO_printf(local_6b8,"%s\n",pbVar33);
        if (iVar6 < 0) goto LAB_00100619;
        goto switchD_001005c6_caseD_0;
      }
    }
    BIO_printf(_bio_err,"Parse error on -addext: missing key\n");
    CRYPTO_free(pcVar15);
    goto LAB_00100619;
  case 0x30:
    bVar35 = true;
switchD_001005c6_caseD_9:
    uVar8 = 1;
    iVar6 = opt_next();
    goto joined_r0x001005a7;
  case 0x31:
    local_610 = opt_unknown();
    goto switchD_001005c6_caseD_0;
  case 0x32:
    section = (undefined *)opt_arg();
    goto switchD_001005c6_caseD_0;
  case 0x33:
    bVar36 = false;
    local_648 = 0;
    goto switchD_001005c6_caseD_0;
  case -1:
    break;
  }
switchD_001005c6_caseD_ffffffff:
  BIO_printf(_bio_err,"%s: Use -help for summary.\n",uVar13);
  goto LAB_00100619;
LAB_00101d5f:
  iVar9 = OPENSSL_sk_num(local_6e0);
  if (iVar9 <= iVar6) goto LAB_00101d6e;
  uVar13 = OPENSSL_sk_value(local_6e0,iVar6);
  iVar9 = pkey_ctrl_string(ctx,uVar13);
  if (iVar9 < 1) {
    BIO_printf(_bio_err,"Key parameter error \"%s\"\n",uVar13);
    goto LAB_0010210b;
  }
  iVar6 = iVar6 + 1;
  goto LAB_00101d5f;
  while (uVar12 != 0) {
LAB_001037c5:
    do {
      iVar6 = iVar6 + 1;
      if ((local_5e8 == (stack_st_CONF_VALUE *)0x0) ||
         (iVar9 = OPENSSL_sk_num(local_5e8), iVar9 <= iVar6)) goto LAB_0010314d;
      lVar28 = OPENSSL_sk_value(local_5e8,iVar6);
      pcVar27 = *(char **)(lVar28 + 8);
      iVar9 = OBJ_txt2nid(pcVar27);
    } while (iVar9 == 0);
    iVar10 = join(local_4b8,100,pcVar27,"_default",&_LC99);
    if (iVar10 == 0) break;
    puVar31 = (undefined *)app_conf_try_string(req_conf,pcVar15,local_4b8);
    if (puVar31 == (undefined *)0x0) {
      puVar31 = &_LC16;
    }
    iVar10 = join(local_4b8,100,pcVar27,"_value",&_LC99);
    if (iVar10 == 0) break;
    uVar13 = app_conf_try_string(req_conf,pcVar15,local_4b8);
    iVar10 = join(local_4b8,100,pcVar27,&_LC95,&_LC99);
    if (iVar10 == 0) break;
    iVar10 = app_conf_try_number(req_conf,pcVar15,local_4b8,&local_550);
    if (iVar10 == 0) {
      local_550 = 0xffffffffffffffff;
    }
    iVar10 = join(local_4b8,100,pcVar27,&_LC96,&_LC99);
    if (iVar10 == 0) break;
    iVar10 = app_conf_try_number(req_conf,pcVar15,local_4b8,&local_548);
    if (iVar10 == 0) {
      local_548._0_8_ = (BIGNUM *)0xffffffffffffffff;
    }
    uVar12 = build_data_constprop_0
                       (*(undefined8 *)(lVar28 + 0x10),puVar31,uVar13,local_550 & 0xffffffff,
                        local_548._0_8_ & 0xffffffff,local_448,"Attribute value","Attribute default"
                       );
    if (1 < uVar12) {
      iVar9 = X509_REQ_add1_attr_by_NID(x_01,iVar9,iVar7,local_448,-1);
      if (iVar9 == 0) {
        BIO_printf(_bio_err,"Error adding attribute\n");
        break;
      }
      goto LAB_001037c5;
    }
  }
  goto LAB_00103164;
LAB_00101d6e:
  EVP_PKEY_CTX_set_app_data(ctx,_bio_err);
  if (bVar36) {
    EVP_PKEY_CTX_set_cb(ctx,&progress_cb);
  }
  local_6a8 = (EVP_PKEY *)app_keygen(ctx,local_698,(ulong)local_560 & 0xffffffff,local_648);
  if (local_6a8 == (EVP_PKEY *)0x0) {
LAB_0010210b:
    pBVar16 = (BIO *)0x0;
    local_6b0 = (X509_NAME *)0x0;
    local_6c0 = (X509 *)0x0;
    local_6a0 = (EVP_PKEY *)0x0;
    local_6a8 = (EVP_PKEY *)0x0;
    local_6f0 = (BIO *)0x0;
    local_678 = uVar8;
    goto LAB_00102149;
  }
  EVP_PKEY_CTX_free(ctx);
  if (local_668 == (char *)0x0) {
    local_668 = (char *)app_conf_try_string(req_conf,section,"default_keyfile");
    if (local_648 != 0) {
      BIO_printf(_bio_err,"Writing private key to ");
      if (local_668 != (char *)0x0) goto LAB_0010209f;
      BIO_printf(_bio_err,"stdout\n");
    }
  }
  else {
LAB_00101dc9:
    if (local_648 != 0) {
      BIO_printf(_bio_err,"Writing private key to ");
LAB_0010209f:
      BIO_printf(_bio_err,"\'%s\'\n",local_668);
    }
  }
  local_6f0 = (BIO *)bio_open_owner(local_668,local_578,uVar8);
  if (local_6f0 == (BIO *)0x0) {
LAB_00102018:
    local_6b0 = (X509_NAME *)0x0;
    pBVar16 = (BIO *)0x0;
    x_00 = (X509 *)0x0;
    ctx = (EVP_PKEY_CTX *)0x0;
    local_6c0 = (X509 *)0x0;
    local_6a0 = (EVP_PKEY *)0x0;
    local_678 = 1;
  }
  else {
    pcVar27 = (char *)app_conf_try_string(req_conf,section,"encrypt_rsa_key");
    pEVar20 = local_638;
    if ((((pcVar27 != (char *)0x0) ||
         (pcVar27 = (char *)app_conf_try_string(req_conf,section,"encrypt_key"),
         pcVar27 != (char *)0x0)) && (*pcVar27 == 'n')) &&
       ((pcVar27[1] == 'o' && (pEVar20 = (EVP_CIPHER *)0x0, pcVar27[2] != '\0')))) {
      pEVar20 = local_638;
    }
    local_638 = pEVar20;
    pEVar20 = (EVP_CIPHER *)0x0;
    if (!bVar5) {
      pEVar20 = local_638;
    }
    iVar6 = 0;
    while (iVar9 = PEM_write_bio_PrivateKey
                             (local_6f0,local_6a8,pEVar20,(uchar *)0x0,0,(undefined1 *)0x0,local_568
                             ), iVar9 == 0) {
      uVar21 = ERR_peek_error();
      uVar12 = (uint)uVar21 & 0x7fffffff;
      if ((uVar21 & 0x80000000) == 0) {
        uVar12 = (uint)uVar21 & 0x7fffff;
      }
      if ((uVar12 != 0x6d) || (iVar6 == 3)) {
        local_6b0 = (X509_NAME *)0x0;
        pBVar16 = (BIO *)0x0;
        x_00 = (X509 *)0x0;
        ctx = (EVP_PKEY_CTX *)0x0;
        local_678 = 1;
        local_6c0 = (X509 *)0x0;
        local_6a0 = (EVP_PKEY *)0x0;
        goto LAB_0010066d;
      }
      ERR_clear_error();
      iVar6 = iVar6 + 1;
    }
    BIO_free_all(local_6f0);
    BIO_printf(_bio_err,"-----\n");
    pcVar27 = local_668;
    local_668 = local_698;
LAB_001011c9:
    if (local_640 == 0) {
      local_6f0 = (BIO *)0x0;
    }
    else {
LAB_001011d8:
      local_6f0 = (BIO *)parse_name(local_640,iVar7,1);
      if (local_6f0 == (BIO *)0x0) {
        local_698 = local_668;
        local_6f0 = (BIO *)0x0;
        goto LAB_00102018;
      }
    }
    if (uVar8 == 0) {
      if (lVar19 != 0) {
        BIO_printf(_bio_err,"Warning: Not placing -key in cert or request since request is used\n");
      }
      local_6b0 = (X509_NAME *)local_6f0;
      local_698 = local_668;
      local_668 = pcVar27;
LAB_00101250:
      pBVar16 = (BIO *)load_csr_autofmt(local_660,local_57c,local_6d8);
      if (pBVar16 == (BIO *)0x0) {
LAB_00102265:
        local_6c0 = (X509 *)0x0;
        x_00 = (X509 *)0x0;
        ctx = (EVP_PKEY_CTX *)0x0;
        local_6a0 = (EVP_PKEY *)0x0;
        local_6f0 = (BIO *)0x0;
        local_678 = 1;
        goto LAB_0010066d;
      }
    }
    else {
      if (local_660 != 0) {
        BIO_printf(_bio_err,
                   "Warning: Ignoring -in option since -new or -newkey or -precert is given\n");
      }
      local_6b0 = (X509_NAME *)local_6f0;
      pBVar16 = (BIO *)0x0;
      local_698 = local_668;
      local_668 = pcVar27;
    }
    local_6f0 = pBVar16;
    if (local_618 != 0) {
      if (local_620 != (stack_st_CONF_VALUE *)0x0) goto LAB_001012bc;
      BIO_printf(_bio_err,"Warning: Ignoring -CAkey option since no -CA option is given\n");
LAB_001022b4:
      if ((local_674 | uVar8) != 0) {
        if (local_6a8 == (EVP_PKEY *)0x0) {
          x_00 = (X509 *)0x0;
          BIO_printf(_bio_err,"Must provide a signature key using -key or provide -CA / -CAkey\n");
          local_6c0 = (X509 *)0x0;
          ctx = (EVP_PKEY_CTX *)0x0;
          local_6a0 = (EVP_PKEY *)0x0;
          local_6f0 = (BIO *)0x0;
          local_678 = local_674 | uVar8;
          goto LAB_00102149;
        }
        local_6c0 = (X509 *)0x0;
        local_6a0 = (EVP_PKEY *)0x0;
LAB_00101343:
        pXVar18 = local_6b0;
        pEVar23 = local_6a0;
        if (pBVar16 == (BIO *)0x0) {
          uVar13 = app_get0_propq();
          uVar25 = app_get0_libctx();
          x_01 = (X509_REQ *)X509_REQ_new_ex(uVar25,uVar13);
          if (x_01 == (X509_REQ *)0x0) {
            local_678 = 1;
            x_00 = (X509 *)0x0;
            ctx = (EVP_PKEY_CTX *)0x0;
            local_6f0 = (BIO *)0x0;
            goto LAB_0010066d;
          }
          pcVar27 = (char *)app_conf_try_string(req_conf,section,"prompt");
          if (pcVar27 == (char *)0x0) {
            bVar36 = false;
          }
          else {
            iVar6 = strcmp(pcVar27,"no");
            bVar36 = iVar6 == 0;
          }
          pcVar27 = (char *)app_conf_try_string(req_conf,section,"distinguished_name");
          if (pcVar27 == (char *)0x0) {
            local_620 = (stack_st_CONF_VALUE *)0x0;
          }
          else {
            local_620 = NCONF_get_section(req_conf,pcVar27);
            if (local_620 == (stack_st_CONF_VALUE *)0x0) {
              BIO_printf(_bio_err,"Unable to get \'%s\' section\n",pcVar27);
              goto LAB_00103164;
            }
          }
          pcVar15 = (char *)app_conf_try_string(req_conf,section,"attributes");
          if (pcVar15 == (char *)0x0) {
            local_5e8 = (stack_st_CONF_VALUE *)0x0;
          }
          else {
            local_5e8 = NCONF_get_section(req_conf,pcVar15);
            if (local_5e8 == (stack_st_CONF_VALUE *)0x0) {
              BIO_printf(_bio_err,"Unable to get \'%s\' section\n",pcVar15);
              goto LAB_00103164;
            }
          }
          iVar6 = X509_REQ_set_version(x_01,0);
          if (iVar6 != 0) {
            local_6f0 = (BIO *)x_01;
            if (local_6b0 == (X509_NAME *)0x0) {
              if (bVar36) {
                pXVar24 = (X509_NAME *)X509_REQ_get_subject_name(x_01);
                for (iVar6 = 0; iVar9 = OPENSSL_sk_num(local_620), iVar6 < iVar9; iVar6 = iVar6 + 1)
                {
                  lVar28 = OPENSSL_sk_value(local_620,iVar6);
                  pbVar33 = *(byte **)(lVar28 + 8);
                  pbVar32 = pbVar33;
                  bVar2 = *pbVar33;
                  do {
                    if (bVar2 == 0) goto LAB_00103285;
                    uVar21 = (ulong)bVar2;
                    pbVar32 = pbVar32 + 1;
                    bVar1 = *pbVar32;
                    bVar36 = 0x3a < bVar2;
                    bVar2 = bVar1;
                  } while ((bVar36) || ((0x400500000000000U >> (uVar21 & 0x3f) & 1) == 0));
                  if (bVar1 != 0) {
                    pbVar33 = pbVar32;
                  }
LAB_00103285:
                  iVar9 = 0;
                  if (*pbVar33 == 0x2b) {
                    pbVar33 = pbVar33 + 1;
                    iVar9 = -1;
                  }
                  iVar9 = X509_NAME_add_entry_by_txt
                                    (pXVar24,(char *)pbVar33,iVar7,*(uchar **)(lVar28 + 0x10),-1,-1,
                                     iVar9);
                  if (iVar9 == 0) goto LAB_00103164;
                }
                iVar6 = X509_NAME_entry_count(pXVar24);
                if (iVar6 == 0) {
LAB_00103696:
                  BIO_printf(_bio_err,"Error: No objects specified in config file\n");
                }
                else {
                  uVar12 = local_674;
                  if (local_674 != 1) {
                    for (; iVar6 = OPENSSL_sk_num(local_5e8), (int)uVar12 < iVar6;
                        uVar12 = uVar12 + 1) {
                      lVar28 = OPENSSL_sk_value(local_5e8,uVar12);
                      iVar6 = X509_REQ_add1_attr_by_txt
                                        (x_01,*(char **)(lVar28 + 8),iVar7,
                                         *(uchar **)(lVar28 + 0x10),-1);
                      if (iVar6 == 0) goto LAB_00103164;
                    }
                    goto LAB_0010314d;
                  }
                  iVar7 = X509_REQ_set_pubkey(x_01,local_6a8);
                  if (iVar7 != 0) {
                    local_670 = (EVP_PKEY *)X509_REQ_get0_pubkey(x_01);
                    if (local_6c0 != (X509 *)0x0) {
                      pXVar24 = X509_get_subject_name(local_6c0);
                      goto LAB_00102f02;
                    }
                    goto LAB_00103004;
                  }
                }
              }
              else {
                pXVar24 = (X509_NAME *)X509_REQ_get_subject_name(x_01);
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
                iVar9 = OPENSSL_sk_num(local_620);
                iVar6 = -1;
                if (iVar9 == 0) {
                  BIO_printf(_bio_err,"No template, please set one up.\n");
                }
                else {
LAB_0010337f:
                  do {
                    iVar6 = iVar6 + 1;
                    iVar9 = OPENSSL_sk_num(local_620);
                    if (iVar9 <= iVar6) {
                      iVar6 = X509_NAME_entry_count(pXVar24);
                      if (iVar6 == 0) goto LAB_00103696;
                      if (local_674 == 1) goto LAB_0010314d;
                      if (((local_5e8 != (stack_st_CONF_VALUE *)0x0) &&
                          (iVar6 = OPENSSL_sk_num(local_5e8), 0 < iVar6)) && (batch == 0)) {
                        BIO_printf(_bio_err,"\nPlease enter the following \'extra\' attributes\n");
                        BIO_printf(_bio_err,"to be sent with your certificate request\n");
                      }
                      iVar6 = -1;
                      goto LAB_001037c5;
                    }
                    lVar28 = OPENSSL_sk_value(local_620,iVar6);
                    pbVar32 = *(byte **)(lVar28 + 8);
                    sVar29 = strlen((char *)pbVar32);
                    pbVar33 = pbVar32;
                    if (3 < sVar29) {
                      iVar9 = strcmp((char *)(pbVar32 + (sVar29 - 4)),"_min");
                      if ((iVar9 == 0) ||
                         (iVar9 = strcmp((char *)(pbVar32 + (sVar29 - 4)),"_max"), iVar9 == 0))
                      goto LAB_0010337f;
                      if (sVar29 < 8) {
                        if (sVar29 < 6) goto LAB_00103453;
                      }
                      else {
                        iVar9 = strcmp((char *)(pbVar32 + (sVar29 - 8)),"_default");
                        if (iVar9 == 0) goto LAB_0010337f;
                      }
                      iVar9 = strcmp((char *)(pbVar32 + (sVar29 - 6)),"_value");
                      if (iVar9 == 0) goto LAB_0010337f;
                    }
LAB_00103453:
                    do {
                      pbVar30 = pbVar33;
                      bVar2 = *pbVar30;
                      if (bVar2 == 0) goto LAB_0010345a;
                      pbVar33 = pbVar30 + 1;
                    } while ((0x3a < bVar2) ||
                            ((0x400500000000000U >> ((ulong)bVar2 & 0x3f) & 1) == 0));
                    if (pbVar30[1] != 0) {
                      pbVar32 = pbVar33;
                    }
LAB_0010345a:
                    iVar9 = 0;
                    if (*pbVar32 == 0x2b) {
                      pbVar32 = pbVar32 + 1;
                      iVar9 = -1;
                    }
                    iVar10 = OBJ_txt2nid((char *)pbVar32);
                    if (iVar10 == 0) goto LAB_0010337f;
                    iVar11 = join(local_4b8,100,*(undefined8 *)(lVar28 + 8),"_default",&_LC99);
                    if (iVar11 == 0) break;
                    puVar31 = (undefined *)app_conf_try_string(req_conf,pcVar27,local_4b8);
                    if (puVar31 == (undefined *)0x0) {
                      puVar31 = &_LC16;
                    }
                    iVar11 = join(local_4b8,100,*(undefined8 *)(lVar28 + 8),"_value",&_LC99);
                    if (iVar11 == 0) break;
                    uVar13 = app_conf_try_string(req_conf,pcVar27,local_4b8);
                    iVar11 = join(local_4b8,100,*(undefined8 *)(lVar28 + 8),&_LC95,&_LC99);
                    if (iVar11 == 0) break;
                    iVar11 = app_conf_try_number(req_conf,pcVar27,local_4b8,&local_550);
                    if (iVar11 == 0) {
                      local_550 = 0xffffffffffffffff;
                    }
                    iVar11 = join(local_4b8,100,*(undefined8 *)(lVar28 + 8),&_LC96,&_LC99);
                    if (iVar11 == 0) break;
                    iVar11 = app_conf_try_number(req_conf,pcVar27,local_4b8,&local_548);
                    if (iVar11 == 0) {
                      local_548._0_8_ = (BIGNUM *)0xffffffffffffffff;
                    }
                    uVar12 = build_data_constprop_0(*(undefined8 *)(lVar28 + 0x10),puVar31,uVar13);
                    if (1 < uVar12) {
                      iVar9 = X509_NAME_add_entry_by_NID(pXVar24,iVar10,iVar7,local_448,-1,-1,iVar9)
                      ;
                      if (iVar9 == 0) break;
                      goto LAB_0010337f;
                    }
                  } while (uVar12 != 0);
                }
              }
            }
            else {
              iVar7 = X509_REQ_set_subject_name(x_01,local_6b0);
              if (iVar7 != 0) {
LAB_0010314d:
                iVar7 = X509_REQ_set_pubkey(x_01,local_6a8);
                if (iVar7 != 0) goto LAB_00101351;
              }
            }
          }
LAB_00103164:
          x_00 = (X509 *)0x0;
          ctx = (EVP_PKEY_CTX *)0x0;
          BIO_printf(_bio_err,"Error making certificate request\n");
          local_678 = 1;
          local_6f0 = (BIO *)0x0;
          pBVar16 = (BIO *)x_01;
          goto LAB_0010066d;
        }
LAB_00101351:
        if (local_674 != 0) {
          local_670 = (EVP_PKEY *)X509_REQ_get0_pubkey(local_6f0);
          if (local_6c0 == (X509 *)0x0) {
LAB_00103004:
            pXVar24 = (X509_NAME *)X509_REQ_get_subject_name(local_6f0);
            pEVar23 = local_6a8;
            if (local_6b0 == (X509_NAME *)0x0) goto LAB_00102f02;
            bVar36 = false;
            pEVar23 = local_6a8;
          }
          else {
            pXVar24 = X509_get_subject_name(local_6c0);
            if (local_6b0 == (X509_NAME *)0x0) {
LAB_00102f02:
              pXVar18 = (X509_NAME *)X509_REQ_get_subject_name(local_6f0);
            }
            bVar36 = local_6c0 != (X509 *)0x0;
            if ((lVar19 != 0) && (bVar36)) {
              BIO_printf(_bio_err,
                         "Warning: Not using -key or -newkey for signing since -CA option is given\n"
                        );
            }
          }
          pBVar16 = local_6f0;
          uVar13 = app_get0_propq();
          uVar25 = app_get0_libctx();
          x_00 = (X509 *)X509_new_ex(uVar25,uVar13);
          if (x_00 != (X509 *)0x0) {
            if (local_6c8 == (ASN1_INTEGER *)0x0) {
              pAVar26 = X509_get_serialNumber(x_00);
              iVar7 = rand_serial(0,pAVar26);
            }
            else {
              iVar7 = X509_set_serialNumber(x_00,local_6c8);
            }
            if ((iVar7 != 0) && (iVar7 = X509_set_issuer_name(x_00,pXVar24), iVar7 != 0)) {
              if ((local_644 != -2) && (local_630 != 0)) {
                BIO_printf(_bio_err,"Warning: -not_after option overriding -days option\n");
              }
              iVar7 = set_cert_times(x_00,local_628,local_630);
              if ((((iVar7 != 0) && (iVar7 = X509_set_subject_name(x_00,pXVar18), iVar7 != 0)) &&
                  (local_670 != (EVP_PKEY *)0x0)) &&
                 (iVar7 = X509_set_pubkey(x_00,local_670), iVar7 != 0)) {
                if (local_580 == -1) {
                  if (local_660 != 0) {
                    BIO_printf(_bio_err,
                               "Warning: No -copy_extensions given; ignoring any extensions in the request\n"
                              );
                  }
                }
                else {
                  iVar7 = copy_extensions(x_00,local_6f0);
                  if (iVar7 == 0) {
                    BIO_printf(_bio_err,"Error copying extensions from request\n");
                    goto LAB_00102e9d;
                  }
                }
                if (bVar36) {
                  X509V3_set_ctx(&local_548,local_6c0,x_00,(X509_REQ *)0x0,(X509_CRL *)0x0,2);
                }
                else {
                  X509V3_set_ctx(&local_548,x_00,x_00,(X509_REQ *)0x0,(X509_CRL *)0x0,2);
                  iVar7 = X509V3_set_issuer_pkey(&local_548,pEVar23);
                  if (iVar7 == 0) goto LAB_00102e9d;
                  iVar7 = cert_matches_key(x_00,pEVar23);
                  if (iVar7 == 0) {
                    BIO_printf(_bio_err,
                               "Warning: Signature key and public key of cert do not match\n");
                  }
                }
                X509V3_set_nconf(&local_548,req_conf);
                if ((local_658 == (char *)0x0) ||
                   (iVar7 = X509V3_EXT_add_nconf(req_conf,&local_548,local_658,x_00), iVar7 != 0)) {
                  if ((addext_conf == (CONF *)0x0) ||
                     (iVar7 = X509V3_EXT_add_nconf(addext_conf,&local_548,"default",x_00),
                     iVar7 != 0)) {
                    if ((bVar35) &&
                       (iVar7 = X509_add1_ext_i2d(x_00,0x3b8,(void *)0x0,1,0), iVar7 != 1)) {
                      BIO_printf(_bio_err,"Error adding poison extension\n");
                    }
                    else {
                      iVar7 = do_X509_sign(x_00,local_5dc,pEVar23);
                      if (iVar7 != 0) goto LAB_00101458;
                    }
                  }
                  else {
                    BIO_printf(_bio_err,"Error adding x509 extensions defined via -addext\n");
                  }
                }
                else {
                  BIO_printf(_bio_err,"Error adding x509 extensions from section %s\n",local_658);
                }
              }
            }
          }
LAB_00102e9d:
          ctx = (EVP_PKEY_CTX *)0x0;
          local_678 = 1;
          local_6f0 = (BIO *)0x0;
          goto LAB_0010066d;
        }
        if (bVar35) {
          BIO_printf(_bio_err,"Warning: Ignoring -precert flag since no cert is produced\n");
        }
        X509V3_set_ctx(&local_548,(X509 *)0x0,(X509 *)0x0,(X509_REQ *)local_6f0,(X509_CRL *)0x0,2);
        X509V3_set_nconf(&local_548,req_conf);
        if ((local_658 == (char *)0x0) ||
           (iVar7 = X509V3_EXT_REQ_add_nconf(req_conf,&local_548,local_658,(X509_REQ *)local_6f0),
           iVar7 != 0)) {
          if ((addext_conf == (CONF *)0x0) ||
             (iVar7 = X509V3_EXT_REQ_add_nconf
                                (addext_conf,&local_548,"default",(X509_REQ *)local_6f0), iVar7 != 0
             )) {
            iVar7 = do_X509_REQ_sign(local_6f0,local_6a8,local_610,local_6d0);
            if (iVar7 != 0) {
              if ((uVar8 == 0) && (local_640 != 0)) goto LAB_0010142c;
              goto LAB_00101451;
            }
          }
          else {
            BIO_printf(_bio_err,"Error adding request extensions defined via -addext\n");
          }
        }
        else {
          BIO_printf(_bio_err,"Error adding request extensions from section %s\n",local_658);
        }
LAB_001024e7:
        pBVar16 = local_6f0;
        x_00 = (X509 *)0x0;
        ctx = (EVP_PKEY_CTX *)0x0;
        local_678 = 1;
        local_6f0 = (BIO *)0x0;
        goto LAB_0010066d;
      }
      local_6c0 = (X509 *)0x0;
      local_6a0 = (EVP_PKEY *)0x0;
LAB_00101fbd:
      if (local_640 == 0) {
        x_00 = (X509 *)0x0;
      }
      else {
LAB_0010142c:
        if (local_648 == 0) {
          iVar7 = X509_REQ_set_subject_name((X509_REQ *)local_6f0,local_6b0);
          if (iVar7 == 0) {
LAB_00102bad:
            BIO_printf(_bio_err,"Error modifying subject of certificate request\n");
            goto LAB_001024e7;
          }
        }
        else {
          BIO_printf((BIO *)0x0,"Modifying subject of certificate request\n");
          uVar13 = X509_REQ_get_subject_name(local_6f0);
          print_name(0,"Old subject=",uVar13);
          iVar7 = X509_REQ_set_subject_name((X509_REQ *)local_6f0,local_6b0);
          if (iVar7 == 0) goto LAB_00102bad;
          uVar13 = X509_REQ_get_subject_name(local_6f0);
          print_name(0,"New subject=",uVar13);
        }
LAB_00101451:
        x_00 = (X509 *)0x0;
        pBVar16 = local_6f0;
      }
LAB_00101458:
      if (local_678 != 0) {
        local_6f0 = (BIO *)local_6a8;
        if ((local_6a8 == (EVP_PKEY *)0x0) &&
           (local_6f0 = (BIO *)X509_REQ_get0_pubkey(pBVar16), local_6f0 == (BIO *)0x0)) {
          ctx = (EVP_PKEY_CTX *)0x0;
          local_6f0 = (BIO *)0x0;
        }
        else {
          iVar7 = do_X509_REQ_verify(pBVar16,local_6f0,local_6d8);
          if (iVar7 < 0) {
            ctx = (EVP_PKEY_CTX *)0x0;
            local_6f0 = (BIO *)0x0;
          }
          else {
            if (iVar7 != 0) {
              BIO_printf(_bio_out,"Certificate request self-signature verify OK\n");
              goto LAB_001014ab;
            }
            ctx = (EVP_PKEY_CTX *)0x0;
            BIO_printf(_bio_err,"Certificate request self-signature verify failure\n");
            local_6f0 = (BIO *)0x0;
          }
        }
LAB_00102149:
        if (local_678 == 0) goto LAB_00100679;
        goto LAB_0010066d;
      }
LAB_001014ab:
      iVar7 = local_578;
      if (((local_604 & (local_600 ^ 1)) != 0) && (local_5ec == 0 && (!bVar4 && local_608 == 0))) {
        ctx = (EVP_PKEY_CTX *)0x0;
        local_6f0 = (BIO *)0x0;
        local_678 = 0;
        goto LAB_00100679;
      }
      if ((local_668 == (char *)0x0) || (local_5f8 == (char *)0x0)) {
        iVar6 = 0x77;
      }
      else {
        iVar6 = strcmp(local_668,local_5f8);
        iVar6 = (-(uint)(iVar6 == 0) & 0xffffffea) + 0x77;
      }
      local_6f0 = (BIO *)bio_open_default(local_5f8,iVar6,iVar7);
      if (local_6f0 == (BIO *)0x0) {
        local_678 = 1;
        ctx = (EVP_PKEY_CTX *)0x0;
        goto LAB_0010066d;
      }
      if (local_5ec != 0) {
        pEVar23 = (EVP_PKEY *)X509_REQ_get0_pubkey(pBVar16);
        if (pEVar23 == (EVP_PKEY *)0x0) {
          BIO_printf(_bio_err,"Error getting public key\n");
          local_678 = local_5ec;
          ctx = (EVP_PKEY_CTX *)0x0;
          goto LAB_00102149;
        }
        PEM_write_bio_PUBKEY(local_6f0,pEVar23);
      }
      uVar21 = local_558;
      if (local_600 != 0) {
        if (local_674 == 0) {
          uVar17 = get_nameopt();
          uVar8 = X509_REQ_print_ex(local_6f0,(X509_REQ *)pBVar16,uVar17,uVar21);
          if (uVar8 == 0) {
            ctx = (EVP_PKEY_CTX *)0x0;
            BIO_printf(_bio_err,"Error printing certificate request\n");
            local_678 = 0;
            goto LAB_00100679;
          }
          bVar35 = local_608 != 0;
          local_608 = uVar8;
          if (bVar35) goto LAB_00102a46;
          goto LAB_001015b4;
        }
        uVar17 = get_nameopt();
        uVar8 = X509_print_ex(local_6f0,x_00,uVar17,uVar21);
        if (uVar8 != 0) {
          if (local_608 != 0) goto LAB_00101598;
          goto LAB_001015b4;
        }
        BIO_printf(_bio_err,"Error printing certificate\n");
        goto LAB_001016bd;
      }
      uVar8 = 1;
      if (local_608 != 0) {
        uVar8 = local_674;
        if (local_674 == 0) {
LAB_00102a46:
          pXVar18 = (X509_NAME *)X509_REQ_get_subject_name(pBVar16);
          uVar8 = local_608;
        }
        else {
LAB_00101598:
          pXVar18 = X509_get_subject_name(x_00);
        }
        print_name(local_6f0,"subject=",pXVar18);
      }
LAB_001015b4:
      if (bVar4) {
        if (local_674 == 0) {
          lVar19 = X509_REQ_get0_pubkey(pBVar16);
        }
        else {
          lVar19 = X509_get0_pubkey(x_00);
        }
        if (lVar19 != 0) {
          BIO_puts(local_6f0,"Modulus=");
          iVar7 = EVP_PKEY_is_a(lVar19,&_LC13);
          if ((iVar7 == 0) && (iVar7 = EVP_PKEY_is_a(lVar19,"RSA-PSS"), iVar7 == 0)) {
            BIO_puts(local_6f0,"Wrong Algorithm type");
          }
          else {
            local_548._0_8_ = (BIGNUM *)0x0;
            iVar7 = EVP_PKEY_get_bn_param(lVar19,&_LC132,&local_548);
            if (iVar7 == 0) goto LAB_0010290a;
            BN_print(local_6f0,(BIGNUM *)local_548._0_8_);
            BN_free((BIGNUM *)local_548._0_8_);
          }
          BIO_puts(local_6f0,"\n");
          goto LAB_00101678;
        }
        BIO_puts(_bio_err,"Modulus is unavailable\n");
LAB_0010290a:
        ctx = (EVP_PKEY_CTX *)0x0;
        local_678 = uVar8;
        goto LAB_00102149;
      }
LAB_00101678:
      if (local_674 == 0 && local_604 == 0) {
        if (local_578 == 4) {
          iVar7 = i2d_X509_REQ_bio(local_6f0,(X509_REQ *)pBVar16);
        }
        else if (bVar3) {
          iVar7 = PEM_write_bio_X509_REQ_NEW(local_6f0,(X509_REQ *)pBVar16);
        }
        else {
          iVar7 = PEM_write_bio_X509_REQ(local_6f0,(X509_REQ *)pBVar16);
        }
        if (iVar7 == 0) {
          BIO_printf(_bio_err,"Unable to write certificate request\n");
          goto LAB_0010290a;
        }
LAB_001016bd:
        local_678 = 0;
      }
      else {
        local_678 = local_674 & (local_604 ^ 1);
        if (local_678 != 0) {
          if (x_00 != (X509 *)0x0) {
            if (local_578 == 4) {
              iVar7 = i2d_X509_bio(local_6f0,x_00);
            }
            else {
              iVar7 = PEM_write_bio_X509(local_6f0,x_00);
            }
            if (iVar7 == 0) {
              BIO_printf(_bio_err,"Unable to write X509 certificate\n");
              goto LAB_0010290a;
            }
          }
          goto LAB_001016bd;
        }
      }
      ctx = (EVP_PKEY_CTX *)0x0;
      goto LAB_00100679;
    }
    local_618 = (long)local_620;
    if (local_620 == (stack_st_CONF_VALUE *)0x0) goto LAB_001022b4;
LAB_001012bc:
    local_6a0 = (EVP_PKEY *)load_key(local_618,0,0,local_570,local_688);
    if (local_6a0 == (EVP_PKEY *)0x0) {
      x_00 = (X509 *)0x0;
      local_678 = 1;
      local_6c0 = (X509 *)0x0;
      ctx = (EVP_PKEY_CTX *)0x0;
      local_6f0 = (BIO *)0x0;
    }
    else {
      local_6c0 = (X509 *)load_cert_pass(local_620,0,1);
      if (local_6c0 == (X509 *)0x0) {
        x_00 = (X509 *)0x0;
        ctx = (EVP_PKEY_CTX *)0x0;
        local_678 = 1;
        local_6f0 = (BIO *)0x0;
      }
      else {
        iVar6 = X509_check_private_key(local_6c0,local_6a0);
        if (iVar6 != 0) {
          if (local_674 != 0 || uVar8 != 0) goto LAB_00101343;
          goto LAB_00101fbd;
        }
        x_00 = (X509 *)0x0;
        ctx = (EVP_PKEY_CTX *)0x0;
        BIO_printf(_bio_err,"Issuer CA certificate and key do not match\n");
        local_678 = 1;
        local_6f0 = (BIO *)0x0;
      }
    }
  }
LAB_0010066d:
  ERR_print_errors(_bio_err);
LAB_00100679:
  NCONF_free(req_conf);
  NCONF_free(addext_conf);
  BIO_free(local_6b8);
  BIO_free_all(local_6f0);
  EVP_PKEY_free(local_6a8);
  EVP_PKEY_CTX_free(ctx);
  OPENSSL_sk_free(local_6e0);
  OPENSSL_sk_free(local_6d0);
  OPENSSL_sk_free(local_6d8);
  OPENSSL_LH_doall(local_6e8,exts_cleanup);
  OPENSSL_LH_free(local_6e8);
  release_engine(local_690);
  CRYPTO_free(local_698);
  X509_REQ_free((X509_REQ *)pBVar16);
  X509_NAME_free(local_6b0);
  X509_free(x_00);
  X509_free(local_6c0);
  EVP_PKEY_free(local_6a0);
  ASN1_INTEGER_free(local_6c8);
  release_engine(local_688);
  if (local_570 != local_680) {
    CRYPTO_free(local_570);
  }
  if (local_568 != pvVar22) {
    CRYPTO_free(local_568);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_678;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


