
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 callb(int param_1,X509_STORE_CTX *param_2)

{
  uint uVar1;
  uint uVar2;
  X509 *a;
  X509_NAME *pXVar3;
  char *pcVar4;
  
  uVar1 = X509_STORE_CTX_get_error(param_2);
  if ((param_1 == 0) && (uVar1 != 0x12)) {
    a = X509_STORE_CTX_get_current_cert(param_2);
    pXVar3 = X509_get_subject_name(a);
    print_name(_bio_err,"subject=",pXVar3);
    pcVar4 = X509_verify_cert_error_string((long)(int)uVar1);
    uVar2 = X509_STORE_CTX_get_error_depth(param_2);
    BIO_printf(_bio_err,"Error with certificate - error %d at depth %d\n%s\n",(ulong)uVar1,
               (ulong)uVar2,pcVar4);
    return 1;
  }
  return 1;
}



/* WARNING: Removing unreachable block (ram,0x00101292) */
/* WARNING: Removing unreachable block (ram,0x00101296) */
/* WARNING: Removing unreachable block (ram,0x001012a4) */
/* WARNING: Removing unreachable block (ram,0x00101e69) */
/* WARNING: Removing unreachable block (ram,0x00101db8) */
/* WARNING: Removing unreachable block (ram,0x00101dcd) */
/* WARNING: Removing unreachable block (ram,0x00101a68) */
/* WARNING: Removing unreachable block (ram,0x00102418) */
/* WARNING: Removing unreachable block (ram,0x0010242b) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint x509_main(undefined4 param_1,undefined8 param_2)

{
  byte *pbVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  X509_STORE *ctx;
  undefined8 uVar18;
  undefined8 uVar19;
  CONF *conf;
  long lVar20;
  EVP_PKEY *pEVar21;
  X509_EXTENSION *pXVar22;
  ASN1_OBJECT *pAVar23;
  EVP_PKEY *x;
  ASN1_OBJECT *o;
  X509_REQ *req;
  char *pcVar24;
  char *pcVar25;
  ASN1_OBJECT *a;
  X509_NAME *pXVar26;
  X509_PURPOSE *xp;
  ulong uVar27;
  uchar *puVar28;
  stack_st_OPENSSL_STRING *sk;
  ASN1_INTEGER *pAVar29;
  BIGNUM *pBVar30;
  time_t tVar31;
  ASN1_TIME *s;
  size_t sVar32;
  void *ptr;
  char *pcVar33;
  stack_st_X509_EXTENSION *exts;
  EVP_MD *type;
  ulong nmflag;
  X509_STORE_CTX *ctx_00;
  char *pcVar34;
  char *pcVar35;
  undefined4 *puVar36;
  undefined *puVar37;
  uint uVar38;
  long in_FS_OFFSET;
  bool bVar39;
  bool bVar40;
  X509 *local_288;
  X509_NAME *local_280;
  EVP_PKEY *local_278;
  BIO *local_270;
  long local_268;
  ASN1_INTEGER *local_260;
  long local_258;
  long local_250;
  X509 *local_248;
  X509_REQ *local_240;
  long local_238;
  undefined8 local_230;
  EVP_PKEY *local_228;
  X509_NAME *local_220;
  uint local_214;
  char *local_210;
  undefined *local_208;
  char *local_200;
  X509V3_CTX *local_1f8;
  X509 *local_1f0;
  ASN1_INTEGER *local_1e8;
  ulong local_1e0;
  char *local_1d0;
  long local_1c8;
  long local_1c0;
  uint local_1b8;
  uint local_1b4;
  uint local_1a8;
  uint local_1a4;
  uint local_198;
  uint local_194;
  uint local_190;
  uint local_18c;
  uint local_17c;
  uint local_170;
  uint local_16c;
  uint local_168;
  uint local_164;
  uchar *local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  uint local_134;
  uint local_130;
  uint local_12c;
  uint local_128;
  uint local_124;
  ASN1_INTEGER *local_120;
  uint local_118;
  uint local_114;
  uint local_110;
  int local_fc;
  int local_f8;
  undefined4 local_f4;
  int local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined8 local_e0;
  ulong local_d8;
  BIGNUM *local_d0;
  X509V3_CTX local_c8;
  byte local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_e8 = 0;
  local_fc = 0;
  local_f8 = 0;
  local_e0 = 0;
  local_f4 = 0;
  local_f0 = 0x8005;
  local_ec = 0;
  local_d8 = 0;
  ctx = X509_STORE_new();
  if (ctx != (X509_STORE *)0x0) {
    pcVar24 = (char *)0x0;
    X509_STORE_set_verify_cb(ctx,callb);
    local_220 = (X509_NAME *)0x0;
    opt_set_unknown_name("digest");
    uVar18 = opt_init(param_1,param_2,x509_options);
    local_214 = 0;
    uVar38 = 0;
    local_110 = 0;
    local_114 = 0;
    local_230 = 0;
    bVar10 = false;
    local_120 = (ASN1_INTEGER *)0x0;
    local_1b8 = 0;
    local_118 = 0;
    local_194 = 0;
    local_124 = 0;
    local_190 = 0;
    local_18c = 0;
    bVar9 = false;
    bVar11 = false;
    bVar6 = false;
    local_17c = 0;
    local_16c = 0;
    bVar8 = false;
    local_170 = 0;
    local_198 = 0;
    uVar4 = 0;
    local_1b4 = 0;
    local_128 = 0;
    local_12c = 0;
    local_168 = 0;
    local_130 = 0;
    bVar7 = false;
    bVar3 = false;
    local_164 = 0;
    local_134 = 0;
    local_1a4 = 0;
    local_1a8 = 0;
    local_1e0 = 0xfffffffe;
    local_1c0 = 0;
    local_1c8 = 0;
    local_288 = (X509 *)0x0;
    local_140 = 0;
    local_248 = (X509 *)0x0;
    local_228 = (EVP_PKEY *)0x0;
    local_240 = (X509_REQ *)0x0;
    local_210 = (char *)0x0;
    local_200 = (char *)0x0;
    local_148 = 0;
    local_150 = 0;
    local_158 = 0;
    local_160 = (uchar *)0x0;
    local_278 = (EVP_PKEY *)0x0;
    local_1e8 = (ASN1_INTEGER *)0x0;
    local_1d0 = (char *)0x0;
    local_250 = 0;
    local_258 = 0;
    local_238 = 0;
    local_268 = 0;
    local_208 = (undefined *)0x0;
    local_280 = (X509_NAME *)0x0;
    bVar40 = false;
    local_260 = (ASN1_INTEGER *)0x0;
    uVar13 = 0;
    uVar16 = 0;
switchD_0010040f_caseD_0:
    iVar12 = opt_next();
    if (iVar12 != 0) {
LAB_001003f1:
      if (0x46 < iVar12) goto LAB_001005e8;
      if (iVar12 < -1) goto switchD_0010040f_caseD_0;
      switch(iVar12) {
      default:
        goto switchD_0010040f_caseD_0;
      case 1:
        uVar38 = 0;
        opt_help(x509_options);
        goto LAB_00100e7f;
      case 2:
        uVar19 = opt_arg();
        iVar12 = opt_format(uVar19,6,&local_f4);
        break;
      case 3:
        uVar19 = opt_arg();
        iVar12 = opt_format(uVar19,0xffe,&local_f0);
        break;
      case 4:
        uVar19 = opt_arg();
        iVar12 = opt_format(uVar19,0xffe,&local_ec);
        break;
      case 5:
        bVar3 = true;
        goto switchD_0010040f_caseD_0;
      case 6:
        uVar19 = opt_arg();
        iVar12 = opt_format(uVar19,0xffe,&local_fc);
        break;
      case 7:
        uVar19 = opt_arg();
        iVar12 = opt_format(uVar19,0xffe,&local_f8);
        break;
      case 8:
        if ((local_250 == 0) && (local_250 = OPENSSL_sk_new_null(), local_250 == 0))
        goto switchD_0010040f_caseD_ffffffff;
        opt_arg();
        iVar12 = OPENSSL_sk_push();
        break;
      case 9:
        if ((local_258 == 0) && (local_258 = OPENSSL_sk_new_null(), local_258 == 0))
        goto switchD_0010040f_caseD_ffffffff;
        opt_arg();
        iVar12 = OPENSSL_sk_push();
        break;
      case 10:
        pcVar25 = (char *)opt_arg();
        uVar27 = strtol(pcVar25,(char **)0x0,10);
        local_1e0 = uVar27 & 0xffffffff;
        if (-2 < (int)uVar27) goto switchD_0010040f_caseD_0;
        BIO_printf(_bio_err,"%s: -days parameter arg must be >= -1\n",uVar18);
        goto LAB_00100491;
      case 0xb:
        local_228 = (EVP_PKEY *)opt_arg();
        goto switchD_0010040f_caseD_0;
      case 0xc:
        local_240 = (X509_REQ *)opt_arg();
        goto switchD_0010040f_caseD_0;
      case 0xd:
        local_210 = (char *)opt_arg();
        goto switchD_0010040f_caseD_0;
      case 0xe:
        local_248 = (X509 *)opt_arg();
        goto switchD_0010040f_caseD_0;
      case 0xf:
        local_140 = opt_arg();
        goto switchD_0010040f_caseD_0;
      case 0x10:
      case 0x11:
        local_288 = (X509 *)opt_arg();
        goto switchD_0010040f_caseD_0;
      case 0x12:
        pcVar24 = (char *)opt_arg();
        goto switchD_0010040f_caseD_0;
      case 0x13:
        local_1d0 = (char *)opt_arg();
        goto switchD_0010040f_caseD_0;
      case 0x14:
        local_1e8 = (ASN1_INTEGER *)opt_arg();
        goto switchD_0010040f_caseD_0;
      case 0x15:
        if (local_260 == (ASN1_INTEGER *)0x0) {
          pcVar25 = (char *)opt_arg();
          local_260 = s2i_ASN1_INTEGER((X509V3_EXT_METHOD *)0x0,pcVar25);
          if (local_260 == (ASN1_INTEGER *)0x0) goto switchD_0010040f_caseD_ffffffff;
          goto switchD_0010040f_caseD_0;
        }
        BIO_printf(_bio_err,"Serial number supplied twice\n");
        goto switchD_0010040f_caseD_ffffffff;
      case 0x16:
        bVar40 = true;
        goto switchD_0010040f_caseD_0;
      case 0x17:
        local_278 = (EVP_PKEY *)opt_arg();
        goto switchD_0010040f_caseD_0;
      case 0x18:
        local_220 = (X509_NAME *)opt_arg();
        goto switchD_0010040f_caseD_0;
      case 0x19:
        local_280 = (X509_NAME *)opt_arg();
        goto switchD_0010040f_caseD_0;
      case 0x1a:
        if ((local_268 != 0) || (local_268 = OPENSSL_sk_new_null(), local_268 != 0)) {
          pcVar25 = (char *)opt_arg();
          pAVar23 = OBJ_txt2obj(pcVar25,0);
          if (pAVar23 != (ASN1_OBJECT *)0x0) goto LAB_0010043f;
          uVar19 = opt_arg();
          BIO_printf(_bio_err,"%s: Invalid trust object value %s\n",uVar18,uVar19);
          goto switchD_0010040f_caseD_ffffffff;
        }
LAB_00101863:
        local_288 = (X509 *)0x0;
        req = (X509_REQ *)0x0;
        pEVar21 = (EVP_PKEY *)0x0;
        conf = (CONF *)0x0;
        local_240 = (X509_REQ *)0x0;
        uVar38 = 1;
        local_248 = (X509 *)0x0;
        local_280 = (X509_NAME *)0x0;
        local_220 = (X509_NAME *)0x0;
        local_278 = (EVP_PKEY *)0x0;
        local_228 = (EVP_PKEY *)0x0;
        local_270 = (BIO *)0x0;
        goto LAB_001004f2;
      case 0x1b:
        if ((local_238 == 0) && (local_238 = OPENSSL_sk_new_null(), local_238 == 0))
        goto LAB_00101863;
        pcVar25 = (char *)opt_arg();
        pAVar23 = OBJ_txt2obj(pcVar25,0);
        if (pAVar23 == (ASN1_OBJECT *)0x0) {
          uVar19 = opt_arg();
          BIO_printf(_bio_err,"%s: Invalid reject object value %s\n",uVar18,uVar19);
          goto switchD_0010040f_caseD_ffffffff;
        }
LAB_0010043f:
        iVar12 = OPENSSL_sk_push();
        if (iVar12 == 0) goto LAB_00100618;
switchD_0010040f_caseD_36:
LAB_00100459:
        bVar8 = true;
        iVar12 = opt_next();
        if (iVar12 == 0) goto LAB_00100468;
        goto LAB_001003f1;
      case 0x1c:
        local_160 = (uchar *)opt_arg();
        goto LAB_00100459;
      case 0x1d:
        opt_arg();
        iVar12 = set_cert_ex();
        break;
      case 0x1e:
        opt_arg();
        iVar12 = set_dateopt();
        if (iVar12 != 0) goto switchD_0010040f_caseD_0;
        uVar18 = opt_arg();
        BIO_printf(_bio_err,"Invalid date format: %s\n",uVar18);
        goto LAB_00100491;
      case 0x1f:
        opt_arg();
        iVar12 = set_nameopt();
        break;
      case 0x20:
        local_198 = uVar13 + 1;
        uVar13 = local_198;
        goto switchD_0010040f_caseD_0;
      case 0x21:
        local_170 = uVar13 + 1;
        uVar13 = local_170;
        goto switchD_0010040f_caseD_0;
      case 0x22:
        local_190 = uVar13 + 1;
        uVar13 = local_190;
        goto switchD_0010040f_caseD_0;
      case 0x23:
        local_130 = uVar13 + 1;
        uVar13 = local_130;
        goto switchD_0010040f_caseD_0;
      case 0x24:
        local_1a8 = uVar13 + 1;
        uVar13 = local_1a8;
        goto switchD_0010040f_caseD_0;
      case 0x25:
        local_1a4 = uVar13 + 1;
        uVar13 = local_1a4;
        goto switchD_0010040f_caseD_0;
      case 0x26:
        uVar38 = 1;
        goto switchD_0010040f_caseD_0;
      case 0x27:
        local_18c = uVar13 + 1;
        uVar13 = local_18c;
        goto switchD_0010040f_caseD_0;
      case 0x28:
        local_168 = uVar13 + 1;
        uVar13 = local_168;
        goto switchD_0010040f_caseD_0;
      case 0x29:
        local_12c = uVar13 + 1;
        uVar13 = local_12c;
        goto switchD_0010040f_caseD_0;
      case 0x2a:
        local_124 = uVar13 + 1;
        uVar13 = local_124;
        goto switchD_0010040f_caseD_0;
      case 0x2b:
        local_194 = uVar13 + 1;
        uVar13 = local_194;
        goto switchD_0010040f_caseD_0;
      case 0x2c:
        local_164 = uVar13 + 1;
        uVar13 = local_164;
        goto switchD_0010040f_caseD_0;
      case 0x2d:
        local_214 = uVar13 + 1;
        local_1b8 = uVar13 + 2;
        uVar13 = local_1b8;
        goto switchD_0010040f_caseD_0;
      case 0x2e:
        local_134 = uVar13 + 1;
        uVar13 = local_134;
        goto switchD_0010040f_caseD_0;
      case 0x2f:
        local_214 = uVar13 + 1;
        uVar13 = local_214;
        goto switchD_0010040f_caseD_0;
      case 0x30:
        local_1b8 = uVar13 + 1;
        uVar13 = local_1b8;
        goto switchD_0010040f_caseD_0;
      case 0x31:
        local_c8._0_8_ = (ASN1_INTEGER *)0x0;
        opt_arg();
        iVar12 = opt_intmax();
        if (iVar12 == 0) goto switchD_0010040f_caseD_ffffffff;
        local_120 = (ASN1_INTEGER *)local_c8._0_8_;
        bVar7 = true;
        goto switchD_0010040f_caseD_0;
      case 0x32:
        local_158 = opt_arg();
        goto switchD_0010040f_caseD_0;
      case 0x33:
        local_150 = opt_arg();
        goto switchD_0010040f_caseD_0;
      case 0x34:
        local_148 = opt_arg();
        goto switchD_0010040f_caseD_0;
      case 0x35:
        local_1b4 = uVar13 + 1;
        uVar13 = local_1b4;
        goto switchD_0010040f_caseD_0;
      case 0x36:
        goto switchD_0010040f_caseD_36;
      case 0x37:
        local_16c = uVar13 + 1;
        uVar13 = local_16c;
        goto switchD_0010040f_caseD_0;
      case 0x38:
        uVar13 = uVar13 + 1;
        uVar16 = uVar13;
        goto switchD_0010040f_caseD_0;
      case 0x39:
        local_17c = uVar13 + 1;
        uVar13 = local_17c;
        goto switchD_0010040f_caseD_0;
      case 0x3a:
        uVar4 = 1;
        goto switchD_0010040f_caseD_0;
      case 0x3b:
        bVar11 = true;
        goto switchD_0010040f_caseD_0;
      case 0x3c:
        local_128 = uVar13 + 1;
        uVar13 = local_128;
        goto switchD_0010040f_caseD_0;
      case 0x3d:
        local_114 = uVar13 + 1;
        uVar13 = local_114;
        goto switchD_0010040f_caseD_0;
      case 0x3e:
        local_110 = uVar13 + 1;
        uVar13 = local_110;
        goto switchD_0010040f_caseD_0;
      case 0x3f:
        opt_arg();
        iVar12 = set_ext_copy();
        if (iVar12 != 0) goto switchD_0010040f_caseD_0;
        uVar18 = opt_arg();
        BIO_printf(_bio_err,"Invalid extension copy option: %s\n",uVar18);
        goto LAB_00100491;
      case 0x40:
        bVar6 = true;
        goto switchD_0010040f_caseD_0;
      case 0x41:
        local_208 = (undefined *)opt_unknown();
        goto switchD_0010040f_caseD_0;
      case 0x42:
        uVar19 = opt_arg();
        local_230 = setup_engine_methods(uVar19,0xffffffff,0);
        goto switchD_0010040f_caseD_0;
      case 0x43:
        bVar9 = true;
        goto switchD_0010040f_caseD_0;
      case 0x44:
        bVar10 = true;
        goto switchD_0010040f_caseD_0;
      case 0x45:
        local_1c8 = opt_arg();
        goto switchD_0010040f_caseD_0;
      case 0x46:
        local_1c0 = opt_arg();
        goto switchD_0010040f_caseD_0;
      case -1:
        goto switchD_0010040f_caseD_ffffffff;
      }
      if (iVar12 == 0) goto switchD_0010040f_caseD_ffffffff;
      goto switchD_0010040f_caseD_0;
    }
LAB_00100468:
    iVar12 = opt_check_rest_arg(0);
    if (iVar12 == 0) {
switchD_0010040f_caseD_ffffffff:
      BIO_printf(_bio_err,"%s: Use -help for summary.\n",uVar18);
LAB_00100491:
      local_288 = (X509 *)0x0;
      req = (X509_REQ *)0x0;
      pEVar21 = (EVP_PKEY *)0x0;
      conf = (CONF *)0x0;
      local_240 = (X509_REQ *)0x0;
      local_248 = (X509 *)0x0;
      local_280 = (X509_NAME *)0x0;
      local_220 = (X509_NAME *)0x0;
      local_278 = (EVP_PKEY *)0x0;
      local_228 = (EVP_PKEY *)0x0;
      local_270 = (BIO *)0x0;
      goto LAB_001004e0;
    }
    iVar12 = app_RAND_load();
    if (iVar12 == 0) goto LAB_00100618;
    iVar12 = opt_check_md(local_208);
    if (iVar12 == 0) goto switchD_0010040f_caseD_ffffffff;
    if ((local_1c8 != 0) && (bVar10)) {
      BIO_printf(_bio_err,"Cannot use -preserve_dates with -not_before option\n");
      goto LAB_00100491;
    }
    if ((local_1c0 != 0) && (bVar10)) {
      BIO_printf(_bio_err,"Cannot use -preserve_dates with -not_after option\n");
      goto LAB_00100491;
    }
    if ((int)local_1e0 != -2) {
      if (bVar10) {
        BIO_printf(_bio_err,"Cannot use -preserve_dates with -days option\n");
        goto LAB_00100491;
      }
      if (((int)local_1e0 != -2) && (local_1c0 != 0)) {
        BIO_printf(_bio_err,"Warning: -not_after option overriding -days option\n");
      }
    }
    iVar12 = app_passwd(local_228,0,&local_e8,0);
    if (iVar12 == 0) {
      BIO_printf(_bio_err,"Error getting password\n");
      goto LAB_00100491;
    }
    uVar18 = app_get0_propq();
    uVar19 = app_get0_libctx();
    iVar12 = X509_STORE_set_default_paths_ex(ctx,uVar19,uVar18);
    if (iVar12 == 0) goto LAB_00100618;
    if ((bool)(bVar40 & local_248 != (X509 *)0x0)) {
      BIO_printf(_bio_err,"The -in option cannot be used with -new\n");
      goto LAB_00100491;
    }
    if ((bool)(bVar40 & bVar3)) {
      BIO_printf(_bio_err,"The -req option cannot be used with -new\n");
      goto LAB_00100491;
    }
    if (local_288 == (X509 *)0x0) {
      local_228 = (EVP_PKEY *)0x0;
    }
    else {
      local_228 = (EVP_PKEY *)load_key(local_288,local_ec,0);
      if (local_228 == (EVP_PKEY *)0x0) goto LAB_00100618;
    }
    if (local_278 == (EVP_PKEY *)0x0) {
      if (bVar40) {
        if (local_280 == (X509_NAME *)0x0) {
LAB_00101d8c:
          BIO_printf(_bio_err,"The -new option requires a subject to be set using -subj\n");
          local_288 = (X509 *)0x0;
        }
        else {
          if (local_288 != (X509 *)0x0) goto LAB_001010a2;
          BIO_printf(_bio_err,"The -new option requires using the -key or -force_pubkey option\n");
        }
        local_240 = (X509_REQ *)0x0;
        local_248 = (X509 *)0x0;
        req = (X509_REQ *)0x0;
        pEVar21 = (EVP_PKEY *)0x0;
        conf = (CONF *)0x0;
        local_280 = (X509_NAME *)0x0;
        local_220 = (X509_NAME *)0x0;
        local_270 = (BIO *)0x0;
        goto LAB_001004e0;
      }
LAB_001019c4:
      if (local_220 != (X509_NAME *)0x0) {
LAB_001010ab:
        local_220 = (X509_NAME *)parse_name(local_220,0x1001,1);
        if (local_220 == (X509_NAME *)0x0) {
          req = (X509_REQ *)0x0;
          pEVar21 = (EVP_PKEY *)0x0;
          local_270 = (BIO *)0x0;
          uVar38 = 1;
          local_240 = (X509_REQ *)0x0;
          local_248 = (X509 *)0x0;
          local_288 = (X509 *)0x0;
          local_280 = (X509_NAME *)0x0;
          local_220 = (X509_NAME *)0x0;
          conf = (CONF *)0x0;
          goto LAB_001004f2;
        }
      }
      if (local_280 != (X509_NAME *)0x0) goto LAB_0010198c;
    }
    else {
      local_278 = (EVP_PKEY *)load_pubkey(local_278,local_ec,0);
      if (local_278 == (EVP_PKEY *)0x0) {
        req = (X509_REQ *)0x0;
        pEVar21 = (EVP_PKEY *)0x0;
        local_240 = (X509_REQ *)0x0;
        uVar38 = 1;
        local_248 = (X509 *)0x0;
        local_288 = (X509 *)0x0;
        local_280 = (X509_NAME *)0x0;
        local_220 = (X509_NAME *)0x0;
        conf = (CONF *)0x0;
        local_270 = (BIO *)0x0;
        goto LAB_001004f2;
      }
      if (!bVar40) goto LAB_001019c4;
      if (local_280 == (X509_NAME *)0x0) goto LAB_00101d8c;
LAB_001010a2:
      if (local_220 != (X509_NAME *)0x0) goto LAB_001010ab;
LAB_0010198c:
      local_280 = (X509_NAME *)parse_name(local_280,0x1001,1);
      if (local_280 == (X509_NAME *)0x0) {
        req = (X509_REQ *)0x0;
        pEVar21 = (EVP_PKEY *)0x0;
        local_240 = (X509_REQ *)0x0;
        conf = (CONF *)0x0;
        uVar38 = 1;
        local_248 = (X509 *)0x0;
        local_288 = (X509 *)0x0;
        local_280 = (X509_NAME *)0x0;
        local_270 = (BIO *)0x0;
        goto LAB_001004f2;
      }
    }
    if (local_1d0 == (char *)0x0) {
      pcVar25 = pcVar24;
      if (pcVar24 == (char *)0x0) goto LAB_00101bd9;
LAB_001010f9:
      local_1d0 = pcVar25;
      if (local_288 != (X509 *)0x0) {
        req = (X509_REQ *)0x0;
        pEVar21 = (EVP_PKEY *)0x0;
        conf = (CONF *)0x0;
        BIO_printf(_bio_err,"Cannot use both -key/-signkey and -CA option\n");
        local_240 = (X509_REQ *)0x0;
        local_248 = (X509 *)0x0;
        local_288 = (X509 *)0x0;
        local_270 = (BIO *)0x0;
        goto LAB_001004e0;
      }
    }
    else {
      pcVar25 = local_1d0;
      if (pcVar24 != (char *)0x0) goto LAB_001010f9;
      BIO_printf(_bio_err,"Warning: ignoring -CAkey option since -CA option is not given\n");
LAB_00101bd9:
      if (local_f8 != 0) {
        BIO_printf(_bio_err,"Warning: ignoring -CAkeyform option since -CA option is not given\n");
      }
      if (local_fc != 0) {
        BIO_printf(_bio_err,"Warning: ignoring -CAform option since -CA option is not given\n");
      }
      if (local_1e8 != (ASN1_INTEGER *)0x0) {
        BIO_printf(_bio_err,"Warning: ignoring -CAserial option since -CA option is not given\n");
      }
      if (uVar4 != 0) {
        BIO_printf(_bio_err,
                   "Warning: ignoring -CAcreateserial option since -CA option is not given\n");
      }
    }
    if (local_240 == (X509_REQ *)0x0) {
      if (local_210 != (char *)0x0) {
        BIO_printf(_bio_err,"Warning: ignoring -extensions option without -extfile\n");
      }
      conf = (CONF *)0x0;
    }
    else {
      conf = (CONF *)app_load_config_internal();
      if (conf == (CONF *)0x0) {
        req = (X509_REQ *)0x0;
        pEVar21 = (EVP_PKEY *)0x0;
        local_240 = (X509_REQ *)0x0;
        uVar38 = 1;
        local_248 = (X509 *)0x0;
        local_288 = (X509 *)0x0;
        local_270 = (BIO *)0x0;
        goto LAB_001004f2;
      }
      if (local_210 == (char *)0x0) {
        pcVar25 = (char *)app_conf_try_string(conf,"default","extensions");
        local_210 = "default";
        if (pcVar25 != (char *)0x0) {
          local_210 = pcVar25;
        }
      }
      X509V3_set_ctx(&local_c8,(X509 *)0x0,(X509 *)0x0,(X509_REQ *)0x0,(X509_CRL *)0x0,1);
      X509V3_set_nconf(&local_c8,conf);
      iVar12 = X509V3_EXT_add_nconf(conf,&local_c8,local_210,(X509 *)0x0);
      if (iVar12 == 0) {
        req = (X509_REQ *)0x0;
        pEVar21 = (EVP_PKEY *)0x0;
        BIO_printf(_bio_err,"Error checking extension section %s\n",local_210);
        local_240 = (X509_REQ *)0x0;
        local_248 = (X509 *)0x0;
        local_288 = (X509 *)0x0;
        local_270 = (BIO *)0x0;
        goto LAB_001004e0;
      }
    }
    pXVar26 = local_280;
    if (bVar3) {
      if (local_248 == (X509 *)0x0) {
        iVar12 = fileno_stdin();
        iVar12 = isatty(iVar12);
        if (iVar12 != 0) {
          BIO_printf(_bio_err,
                     "Warning: Reading cert request from stdin since no -in option is given\n");
        }
      }
      local_240 = (X509_REQ *)load_csr_autofmt(local_248,local_f4,local_250);
      if (local_240 == (X509_REQ *)0x0) {
LAB_00101fcc:
        uVar38 = 1;
        req = (X509_REQ *)0x0;
        pEVar21 = (EVP_PKEY *)0x0;
        local_240 = (X509_REQ *)0x0;
        local_248 = (X509 *)0x0;
        local_288 = (X509 *)0x0;
        local_270 = (BIO *)0x0;
        goto LAB_001004f2;
      }
      lVar20 = X509_REQ_get0_pubkey(local_240);
      if (lVar20 == 0) {
        req = (X509_REQ *)0x0;
        pEVar21 = (EVP_PKEY *)0x0;
        BIO_printf(_bio_err,"Error unpacking public key from CSR\n");
        local_248 = (X509 *)0x0;
        local_288 = (X509 *)0x0;
        local_270 = (BIO *)0x0;
      }
      else {
        iVar12 = do_X509_REQ_verify(local_240,lVar20,local_250);
        if (0 < iVar12) {
          BIO_printf(_bio_err,"Certificate request self-signature ok\n");
          uVar18 = X509_REQ_get_subject_name(local_240);
          print_name(_bio_err,"subject=",uVar18);
          goto LAB_00101227;
        }
        pcVar24 = "Certificate request self-signature did not match the contents\n";
        if (iVar12 != 0) {
          pcVar24 = "Error while verifying certificate request self-signature\n";
        }
LAB_00101f4a:
        req = (X509_REQ *)0x0;
        pEVar21 = (EVP_PKEY *)0x0;
        BIO_printf(_bio_err,pcVar24);
        local_248 = (X509 *)0x0;
        local_288 = (X509 *)0x0;
        local_270 = (BIO *)0x0;
      }
      goto LAB_001004e0;
    }
    if (bVar40) {
      local_240 = (X509_REQ *)0x0;
LAB_00101227:
      if (bVar10) {
        BIO_printf(_bio_err,"Warning: ignoring -preserve_dates option with -req or -new\n");
      }
      if (local_288 == (X509 *)0x0 && local_1d0 == (char *)0x0) {
        pcVar24 = "We need a private key to sign with, use -key or -CAkey or -CA with private key\n"
        ;
        goto LAB_00101f4a;
      }
      uVar18 = app_get0_propq();
      uVar19 = app_get0_libctx();
      local_288 = (X509 *)X509_new_ex(uVar19,uVar18);
      if (local_288 != (X509 *)0x0) {
        if (local_260 != (ASN1_INTEGER *)0x0 || pcVar24 != (char *)0x0) {
LAB_0010127a:
          if (local_240 == (X509_REQ *)0x0) {
            bVar5 = true;
            bVar10 = false;
            goto LAB_00101ad5;
          }
          if (local_280 == (X509_NAME *)0x0) {
            bVar2 = true;
            pXVar26 = (X509_NAME *)X509_REQ_get_subject_name(local_240);
            bVar5 = true;
            bVar10 = false;
          }
          else {
            bVar2 = true;
            bVar5 = true;
            bVar10 = false;
          }
          goto LAB_001012e1;
        }
        local_260 = ASN1_INTEGER_new();
        if (local_260 != (ASN1_INTEGER *)0x0) {
          iVar12 = rand_serial();
          if (iVar12 != 0) goto LAB_0010127a;
          goto LAB_00101e1e;
        }
      }
      req = (X509_REQ *)0x0;
      pEVar21 = (EVP_PKEY *)0x0;
      local_248 = (X509 *)0x0;
      uVar38 = 1;
      local_270 = (BIO *)0x0;
      goto LAB_001004f2;
    }
    if (local_248 == (X509 *)0x0) {
      iVar12 = fileno_stdin();
      iVar12 = isatty(iVar12);
      if (iVar12 != 0) {
        BIO_printf(_bio_err,
                   "Warning: Reading certificate from stdin since no -in or -new option is given\n")
        ;
      }
    }
    local_288 = (X509 *)load_cert_pass(local_248,local_f4,1);
    if (local_288 == (X509 *)0x0) goto LAB_00101fcc;
    bVar5 = false;
LAB_00101ad5:
    if (local_280 != (X509_NAME *)0x0) {
      bVar2 = false;
      local_240 = (X509_REQ *)0x0;
LAB_001012e1:
      iVar12 = X509_set_subject_name(local_288,pXVar26);
      if (iVar12 != 0) {
        if (local_228 != (EVP_PKEY *)0x0 || local_278 != (EVP_PKEY *)0x0) goto LAB_00101aff;
        if (!bVar2) goto LAB_00101327;
        bVar2 = false;
LAB_00101309:
        pEVar21 = (EVP_PKEY *)X509_REQ_get0_pubkey(local_240);
        goto LAB_00101316;
      }
LAB_00101e1e:
      uVar38 = 1;
      req = (X509_REQ *)0x0;
      local_248 = (X509 *)0x0;
      pEVar21 = (EVP_PKEY *)0x0;
      local_270 = (BIO *)0x0;
      goto LAB_001004f2;
    }
    local_240 = (X509_REQ *)0x0;
    if (local_228 == (EVP_PKEY *)0x0 && local_278 == (EVP_PKEY *)0x0) {
      bVar2 = false;
    }
    else {
LAB_00101aff:
      bVar2 = local_228 != (EVP_PKEY *)0x0;
      pEVar21 = local_278;
      if ((local_278 == (EVP_PKEY *)0x0) && (pEVar21 = local_228, local_228 == (EVP_PKEY *)0x0))
      goto LAB_00101309;
LAB_00101316:
      iVar12 = X509_set_pubkey(local_288,pEVar21);
      if (iVar12 == 0) goto LAB_00101e1e;
    }
LAB_00101327:
    if (pcVar24 == (char *)0x0) {
      local_248 = (X509 *)0x0;
    }
    else {
      local_248 = (X509 *)load_cert_pass(pcVar24,local_fc,1);
      if (local_248 == (X509 *)0x0) {
        req = (X509_REQ *)0x0;
        pEVar21 = (EVP_PKEY *)0x0;
        uVar38 = 1;
        local_248 = (X509 *)0x0;
        local_270 = (BIO *)0x0;
        goto LAB_001004f2;
      }
    }
    local_270 = (BIO *)bio_open_default(local_140,0x77,local_f0);
    if (local_270 != (BIO *)0x0) {
      if (local_160 != (uchar *)0x0) {
        X509_alias_set1(local_288,local_160,-1);
      }
      if (local_16c != 0) {
        X509_trust_clear(local_288);
      }
      if (uVar16 != 0) {
        X509_reject_clear(local_288);
      }
      iVar12 = 0;
      if (local_268 != 0) {
        for (; iVar14 = OPENSSL_sk_num(local_268), iVar12 < iVar14; iVar12 = iVar12 + 1) {
          pAVar23 = (ASN1_OBJECT *)OPENSSL_sk_value(local_268,iVar12);
          X509_add1_trust_object(local_288,pAVar23);
        }
      }
      iVar12 = 0;
      if (local_238 != 0) {
        for (; iVar14 = OPENSSL_sk_num(local_238), iVar12 < iVar14; iVar12 = iVar12 + 1) {
          pAVar23 = (ASN1_OBJECT *)OPENSSL_sk_value(local_238,iVar12);
          X509_add1_reject_object(local_288,pAVar23);
        }
      }
      if ((local_200 == (char *)0x0) || (!bVar11)) {
        iVar12 = X509_get_ext_count(local_288);
        iVar12 = iVar12 + -1;
        if (-1 < iVar12) {
          if (bVar11) goto LAB_001014a5;
          do {
            pXVar22 = X509_get_ext(local_288,iVar12);
            pAVar23 = X509_EXTENSION_get_object(pXVar22);
            iVar14 = OBJ_obj2nid(pAVar23);
            pcVar25 = OBJ_nid2sn(iVar14);
            if ((local_200 != (char *)0x0) &&
               (pcVar25 = strstr(local_200,pcVar25), pcVar25 == (char *)0x0)) {
              pXVar22 = X509_delete_ext(local_288,iVar12);
              X509_EXTENSION_free(pXVar22);
            }
            bVar39 = iVar12 != 0;
            iVar12 = iVar12 + -1;
          } while (bVar39);
        }
      }
      else {
        BIO_printf(_bio_err,"Warning: Ignoring -ext since -clrext is given\n");
        iVar12 = X509_get_ext_count(local_288);
        iVar12 = iVar12 + -1;
        if (-1 < iVar12) {
LAB_001014a5:
          do {
            pXVar22 = X509_get_ext(local_288,iVar12);
            pAVar23 = X509_EXTENSION_get_object(pXVar22);
            iVar14 = OBJ_obj2nid(pAVar23);
            OBJ_nid2sn(iVar14);
            pXVar22 = X509_delete_ext(local_288,iVar12);
            X509_EXTENSION_free(pXVar22);
            bVar39 = iVar12 != 0;
            iVar12 = iVar12 + -1;
          } while (bVar39);
        }
      }
      if (pcVar24 == (char *)0x0) {
        if ((bVar2) && (iVar12 = cert_matches_key(local_288,local_228), iVar12 == 0)) {
          BIO_printf(_bio_err,"Warning: Signature key and public key of cert do not match\n");
        }
        local_1f0 = local_288;
        if (local_260 != (ASN1_INTEGER *)0x0) {
LAB_00101526:
          iVar12 = X509_set_serialNumber(local_288,local_260);
          if (iVar12 == 0) goto LAB_0010312d;
        }
        if (((bVar5) || (pcVar24 != (char *)0x0)) || (bVar2)) {
          if ((bVar10) || (iVar12 = set_cert_times(local_288,local_1c8,local_1c0), iVar12 != 0)) {
            if (local_220 == (X509_NAME *)0x0) {
              pXVar26 = X509_get_subject_name(local_1f0);
              iVar12 = X509_set_issuer_name(local_288,pXVar26);
              if (iVar12 == 0) goto LAB_00101d7c;
            }
            else {
              iVar12 = X509_set_issuer_name(local_288,local_220);
              if (iVar12 == 0) goto LAB_0010312d;
            }
            X509V3_set_ctx(&local_c8,local_1f0,local_288,(X509_REQ *)0x0,(X509_CRL *)0x0,2);
            if (pcVar24 == (char *)0x0) goto LAB_0010158b;
            goto LAB_001015a5;
          }
          goto LAB_0010312d;
        }
        X509V3_set_ctx(&local_c8,local_1f0,local_288,(X509_REQ *)0x0,(X509_CRL *)0x0,2);
LAB_0010158b:
        local_1f8 = &local_c8;
        iVar12 = X509V3_set_issuer_pkey(local_1f8);
        if (iVar12 == 0) goto LAB_0010312d;
LAB_001015a5:
        local_1f8 = &local_c8;
        if ((conf != (CONF *)0x0) && (uVar38 == 0)) {
          X509V3_set_nconf(local_1f8,conf);
          iVar12 = X509V3_EXT_add_nconf(conf,local_1f8,local_210,local_288);
          if (iVar12 != 0) goto LAB_001015e1;
          req = (X509_REQ *)0x0;
          pEVar21 = (EVP_PKEY *)0x0;
          BIO_printf(_bio_err,"Error adding extensions from section %s\n",local_210);
          goto LAB_001004e0;
        }
LAB_001015e1:
        x = (EVP_PKEY *)X509_get0_pubkey();
        if ((local_1a8 == 0 && local_1a4 == 0) || (x != (EVP_PKEY *)0x0)) {
          if (uVar38 != 0) {
            if (local_228 == (EVP_PKEY *)0x0) {
              req = (X509_REQ *)0x0;
              pEVar21 = (EVP_PKEY *)0x0;
              BIO_printf(_bio_err,"Must specify request signing key using -key\n");
              goto LAB_001004e0;
            }
            if (!bVar11) {
              uVar18 = X509_get0_extensions(local_288);
              iVar12 = OPENSSL_sk_num(uVar18);
              pAVar23 = OBJ_nid2obj(0x52);
              o = OBJ_nid2obj(0x5a);
              req = X509_to_X509_REQ(local_288,(EVP_PKEY *)0x0,(EVP_MD *)0x0);
              if (req != (X509_REQ *)0x0) {
                iVar14 = OBJ_obj2nid(pAVar23);
                pcVar24 = OBJ_nid2sn(iVar14);
                if (local_200 == (char *)0x0) {
                  iVar14 = OBJ_obj2nid(o);
                  OBJ_nid2sn(iVar14);
                }
                else {
                  pcVar25 = strstr(local_200,pcVar24);
                  if (pcVar25 != (char *)0x0) {
                    BIO_printf(_bio_err,
                               "Warning: -ext should not specify copying %s extension to CSR; ignoring this\n"
                               ,pcVar24);
                  }
                  iVar14 = OBJ_obj2nid(o);
                  pcVar24 = OBJ_nid2sn(iVar14);
                  pcVar25 = strstr(local_200,pcVar24);
                  if (pcVar25 != (char *)0x0) {
                    BIO_printf(_bio_err,
                               "Warning: -ext should not specify copying %s extension to CSR; ignoring this\n"
                               ,pcVar24);
                  }
                }
                lVar20 = OPENSSL_sk_new_reserve(0,iVar12);
                if (lVar20 != 0) {
                  iVar14 = 0;
                  while( true ) {
                    if (iVar12 <= iVar14) {
                      OPENSSL_sk_num(lVar20);
                      OPENSSL_sk_free(lVar20);
                      if (conf != (CONF *)0x0) {
                        X509V3_set_nconf(local_1f8,conf);
                        iVar12 = X509V3_EXT_REQ_add_nconf(conf,local_1f8,local_210,req);
                        if (iVar12 == 0) {
                          pEVar21 = (EVP_PKEY *)0x0;
                          BIO_printf(_bio_err,"Error adding request extensions from section %s\n",
                                     local_210);
                          goto LAB_001004e0;
                        }
                      }
                      iVar12 = do_X509_REQ_sign(req,local_228,local_208);
                      if (iVar12 == 0) {
                        pEVar21 = (EVP_PKEY *)0x0;
                        goto LAB_001004f2;
                      }
                      if (local_1b4 == 0) {
                        if (local_f0 == 4) {
                          uVar27 = get_nameopt();
                          X509_REQ_print_ex(local_270,req,uVar27,0);
                          iVar12 = i2d_X509_bio(local_270,local_288);
                        }
                        else {
                          iVar12 = PEM_write_bio_X509_REQ(local_270,req);
                        }
                        if (iVar12 == 0) {
                          pEVar21 = (EVP_PKEY *)0x0;
                          BIO_printf(_bio_err,"Unable to write certificate request\n");
                          goto LAB_001004e0;
                        }
                      }
                      pEVar21 = (EVP_PKEY *)0x0;
                      local_1b4 = uVar38;
                      goto LAB_001020fe;
                    }
                    pXVar22 = (X509_EXTENSION *)OPENSSL_sk_value(uVar18,iVar14);
                    a = X509_EXTENSION_get_object(pXVar22);
                    iVar15 = OBJ_cmp(a,pAVar23);
                    if (((iVar15 != 0) && (iVar15 = OBJ_cmp(a,o), iVar15 != 0)) &&
                       (iVar15 = OPENSSL_sk_push(lVar20,pXVar22), iVar15 == 0)) break;
                    iVar14 = iVar14 + 1;
                  }
                }
                pEVar21 = (EVP_PKEY *)0x0;
                OPENSSL_sk_free(lVar20);
                X509_REQ_free(req);
                req = (X509_REQ *)0x0;
                goto LAB_001004f2;
              }
              goto LAB_0010312d;
            }
            BIO_printf(_bio_err,"Must not use -clrext together with -copy_extensions\n");
            goto LAB_001022d1;
          }
          if (pcVar24 == (char *)0x0) {
            pEVar21 = (EVP_PKEY *)0x0;
            if (!bVar2) goto LAB_001020fc;
            req = (X509_REQ *)0x0;
            iVar12 = do_X509_sign(local_288,0,local_228,local_208,local_258,local_1f8);
            if (iVar12 != 0) goto LAB_001020fe;
LAB_0010232d:
            uVar38 = 1;
            goto LAB_001004f2;
          }
          pEVar21 = (EVP_PKEY *)load_key(local_1d0,local_f8,0,local_e8,local_230,"CA private key");
          if (pEVar21 == (EVP_PKEY *)0x0) {
            req = (X509_REQ *)0x0;
            uVar38 = 1;
            goto LAB_001004f2;
          }
          iVar12 = X509_check_private_key(local_248,pEVar21);
          if (iVar12 == 0) {
            req = (X509_REQ *)0x0;
            BIO_printf(_bio_err,"CA certificate and CA private key do not match\n");
            goto LAB_001004e0;
          }
          iVar12 = do_X509_sign(local_288,0,pEVar21,local_208,local_258,local_1f8);
          if (iVar12 == 0) {
            uVar38 = 1;
            req = (X509_REQ *)0x0;
            goto LAB_001004f2;
          }
LAB_001020fc:
          req = (X509_REQ *)0x0;
LAB_001020fe:
          if (bVar6) {
            X509_get0_signature(&local_d0,0,local_288);
            corrupt_signature();
          }
          local_210._0_4_ = 1;
          if ((int)uVar13 < 1) {
LAB_00102a7f:
            if (bVar7) {
              tVar31 = time((time_t *)0x0);
              local_d0 = (BIGNUM *)((long)&local_120->length + tVar31);
              s = (ASN1_TIME *)X509_get0_notAfter(local_288);
              uVar16 = X509_cmp_time(s,(time_t *)&local_d0);
              uVar38 = uVar16 >> 0x1f;
              if ((int)uVar16 < 0) {
                BIO_printf(local_270,"Certificate will expire\n");
              }
              else {
                BIO_printf(local_270,"Certificate will not expire\n");
              }
              goto LAB_001004f2;
            }
            iVar12 = check_cert_attributes(local_270,local_288,local_158,local_150,local_148,1);
            if (iVar12 != 0) {
              if (local_1b4 != 0 || bVar9) {
                uVar38 = 0;
                goto LAB_001004f2;
              }
              if (local_f0 == 4) {
                iVar12 = i2d_X509_bio(local_270,local_288);
              }
              else {
                if (local_f0 != 0x8005) {
                  BIO_printf(_bio_err,"Bad output format specified for outfile\n");
                  goto LAB_001004e0;
                }
                if (bVar8) {
                  iVar12 = PEM_write_bio_X509_AUX(local_270,local_288);
                }
                else {
                  iVar12 = PEM_write_bio_X509(local_270,local_288);
                }
              }
              uVar38 = 0;
              if (iVar12 != 0) goto LAB_001004f2;
              BIO_printf(_bio_err,"Unable to write certificate\n");
            }
          }
          else {
            while (uVar27 = local_d8, local_194 == (uint)local_210) {
              pXVar26 = X509_get_issuer_name(local_288);
              print_name(local_270,"issuer=",pXVar26);
LAB_0010227c:
              local_210._0_4_ = (uint)local_210 + 1;
              if ((int)uVar13 < (int)(uint)local_210) goto LAB_00102a7f;
            }
            if (local_124 == (uint)local_210) {
              pXVar26 = X509_get_subject_name(local_288);
              print_name(local_270,"subject=",pXVar26);
              goto LAB_0010227c;
            }
            if (local_190 == (uint)local_210) {
              BIO_printf(local_270,"serial=");
              pAVar29 = (ASN1_INTEGER *)X509_get0_serialNumber(local_288);
              i2a_ASN1_INTEGER(local_270,pAVar29);
              BIO_printf(local_270,"\n");
              goto LAB_0010227c;
            }
            if (local_130 == (uint)local_210) {
              pAVar29 = (ASN1_INTEGER *)X509_get0_serialNumber(local_288);
              pBVar30 = ASN1_INTEGER_to_BN(pAVar29,(BIGNUM *)0x0);
              if (pBVar30 == (BIGNUM *)0x0) goto LAB_0010232d;
              iVar12 = BN_add_word(pBVar30,1);
              if ((iVar12 == 0) ||
                 (pAVar29 = BN_to_ASN1_INTEGER(pBVar30,(ASN1_INTEGER *)0x0),
                 pAVar29 == (ASN1_INTEGER *)0x0)) {
                uVar38 = 1;
                BN_free(pBVar30);
                goto LAB_001004f2;
              }
              BN_free(pBVar30);
              i2a_ASN1_INTEGER(local_270,pAVar29);
              ASN1_INTEGER_free(pAVar29);
              BIO_puts(local_270,"\n");
              goto LAB_0010227c;
            }
            if (local_198 == (uint)local_210) {
LAB_00102a39:
              sk = X509_get1_email(local_288);
LAB_001028c4:
              for (iVar12 = 0; iVar14 = OPENSSL_sk_num(sk), iVar12 < iVar14; iVar12 = iVar12 + 1) {
                uVar18 = OPENSSL_sk_value(sk,iVar12);
                BIO_printf(local_270,"%s\n",uVar18);
              }
              X509_email_free(sk);
              goto LAB_0010227c;
            }
            if (local_170 == (uint)local_210) {
              if (local_198 == (uint)local_210) goto LAB_00102a39;
              sk = X509_get1_ocsp(local_288);
              goto LAB_001028c4;
            }
            if (local_17c == (uint)local_210) {
              puVar28 = X509_alias_get0(local_288,(int *)0x0);
              if (puVar28 == (uchar *)0x0) {
                BIO_puts(local_270,"<No Alias>\n");
              }
              else {
                BIO_printf(local_270,"%s\n",puVar28);
              }
              goto LAB_0010227c;
            }
            if (local_168 == (uint)local_210) {
              uVar27 = X509_subject_name_hash(local_288);
LAB_001027f4:
              BIO_printf(local_270,"%08lx\n",uVar27);
              goto LAB_0010227c;
            }
            if (local_114 == (uint)local_210) {
              uVar27 = X509_subject_name_hash_old(local_288);
              goto LAB_001027f4;
            }
            if (local_12c == (uint)local_210) {
              uVar27 = X509_issuer_name_hash(local_288);
              goto LAB_001027f4;
            }
            if (local_110 == (uint)local_210) {
              uVar27 = X509_issuer_name_hash_old(local_288);
              goto LAB_001027f4;
            }
            if (local_134 == (uint)local_210) {
              BIO_printf(local_270,"Certificate purposes:\n");
              for (iVar12 = 0; iVar14 = X509_PURPOSE_get_count(), iVar12 < iVar14;
                  iVar12 = iVar12 + 1) {
                xp = X509_PURPOSE_get0(iVar12);
                iVar14 = X509_PURPOSE_get_id(xp);
                iVar15 = 0;
                pcVar24 = X509_PURPOSE_get0_name(xp);
                while( true ) {
                  uVar38 = X509_check_purpose(local_288,iVar14,iVar15);
                  puVar37 = &_LC5;
                  if (iVar15 == 0) {
                    puVar37 = &_LC6;
                  }
                  BIO_printf(local_270,"%s%s : ",pcVar24,puVar37);
                  if (uVar38 == 1) {
                    BIO_printf(local_270,"Yes\n");
                  }
                  else if (uVar38 == 0) {
                    BIO_printf(local_270,"No\n");
                  }
                  else {
                    BIO_printf(local_270,"Yes (WARNING code=%d)\n",(ulong)uVar38);
                  }
                  if (iVar15 != 0) break;
                  iVar15 = 1;
                }
              }
              goto LAB_0010227c;
            }
            if (local_1a8 == (uint)local_210) {
              BIO_printf(local_270,"Modulus=");
              iVar12 = EVP_PKEY_is_a(x,&_LC77);
              if ((iVar12 == 0) && (iVar12 = EVP_PKEY_is_a(x,"RSA-PSS"), iVar12 == 0)) {
                iVar12 = EVP_PKEY_is_a(x,&_LC80);
                if (iVar12 != 0) {
                  puVar37 = &_LC81;
                  goto LAB_001026bd;
                }
                BIO_printf(local_270,"No modulus for this public key type");
              }
              else {
                puVar37 = &_LC78;
LAB_001026bd:
                local_d0 = (BIGNUM *)0x0;
                EVP_PKEY_get_bn_param(x,puVar37,&local_d0);
                BN_print(local_270,local_d0);
                BN_free(local_d0);
              }
              BIO_printf(local_270,"\n");
              goto LAB_0010227c;
            }
            if (local_1a4 == (uint)local_210) {
              PEM_write_bio_PUBKEY(local_270,x);
              goto LAB_0010227c;
            }
            if (local_18c == (uint)local_210) {
              nmflag = get_nameopt();
              X509_print_ex(local_270,local_288,nmflag,uVar27);
              goto LAB_0010227c;
            }
            if (local_214 == (uint)local_210) {
              BIO_puts(local_270,"notBefore=");
              uVar18 = local_e0;
              uVar19 = X509_get0_notBefore(local_288);
LAB_00102ffd:
              ASN1_TIME_print_ex(local_270,uVar19,uVar18);
              BIO_puts(local_270,"\n");
              goto LAB_0010227c;
            }
            if (local_1b8 == (uint)local_210) {
              BIO_puts(local_270,"notAfter=");
              uVar18 = local_e0;
              uVar19 = X509_get0_notAfter(local_288);
              goto LAB_00102ffd;
            }
            if (local_164 != (uint)local_210) {
              if (local_128 == (uint)local_210) {
                X509_ocspid_print(local_270,local_288);
              }
              else if (local_118 == (uint)local_210) {
                uVar18 = X509_get0_extensions(local_288);
                iVar12 = OPENSSL_sk_num(uVar18);
                if (iVar12 < 1) {
                  BIO_printf(_bio_err,"No extensions in certificate\n");
LAB_00102ee0:
                  pcVar24 = (char *)0x0;
                  ptr = (void *)0x0;
                  exts = (stack_st_X509_EXTENSION *)0x0;
                }
                else {
                  pcVar24 = CRYPTO_strdup(local_200,"apps/x509.c",0x4f3);
                  if (pcVar24 == (char *)0x0) goto LAB_00102ee0;
                  sVar32 = strlen(pcVar24);
                  iVar14 = 0;
                  pcVar25 = pcVar24;
                  pcVar34 = pcVar24;
                  while (pcVar33 = pcVar25, (long)pcVar33 - (long)pcVar24 <= (long)(int)sVar32) {
                    pcVar25 = pcVar33 + 1;
                    if (((*pcVar33 == ',') || (*pcVar33 == '\0')) &&
                       (bVar40 = pcVar34 != pcVar33, pcVar34 = pcVar25, bVar40)) {
                      iVar14 = iVar14 + 1;
                    }
                  }
                  if (iVar14 == 0) {
                    BIO_printf(local_270,"Invalid extension names: %s\n",local_200);
LAB_00102dd6:
                    ptr = (void *)0x0;
                    exts = (stack_st_X509_EXTENSION *)0x0;
                  }
                  else {
                    ptr = CRYPTO_malloc((int)((long)iVar14 << 3),"apps/x509.c",0x4f9);
                    if (ptr == (void *)0x0) goto LAB_00102dd6;
                    sVar32 = strlen(pcVar24);
                    iVar15 = 0;
                    pcVar25 = pcVar24;
                    pcVar34 = pcVar24;
                    while (pcVar35 = pcVar34, pcVar33 = pcVar25,
                          (long)pcVar33 - (long)pcVar24 <= (long)(int)sVar32) {
                      pcVar25 = pcVar33 + 1;
                      if (((*pcVar33 == ',') || (pcVar34 = pcVar35, *pcVar33 == '\0')) &&
                         (pcVar34 = pcVar25, pcVar35 != pcVar33)) {
                        lVar20 = (long)iVar15;
                        *pcVar33 = '\0';
                        iVar15 = iVar15 + 1;
                        *(char **)((long)ptr + lVar20 * 8) = pcVar35;
                      }
                    }
                    exts = (stack_st_X509_EXTENSION *)0x0;
                    iVar15 = 0;
                    do {
                      pXVar22 = (X509_EXTENSION *)OPENSSL_sk_value(uVar18);
                      pAVar23 = X509_EXTENSION_get_object(pXVar22);
                      iVar17 = OBJ_obj2nid(pAVar23);
                      pcVar25 = OBJ_nid2sn(iVar17);
                      if (pcVar25 != (char *)0x0) {
                        lVar20 = 0;
                        iVar17 = strcmp(pcVar25,"UNDEF");
                        if (iVar17 != 0) {
                          for (; (int)lVar20 < iVar14; lVar20 = lVar20 + 1) {
                            iVar17 = strcmp(pcVar25,*(char **)((long)ptr + lVar20 * 8));
                            if ((iVar17 == 0) &&
                               (((exts == (stack_st_X509_EXTENSION *)0x0 &&
                                 (exts = (stack_st_X509_EXTENSION *)OPENSSL_sk_new_null(),
                                 exts == (stack_st_X509_EXTENSION *)0x0)) ||
                                (iVar17 = OPENSSL_sk_push(exts), iVar17 == 0)))) goto LAB_00102ddc;
                          }
                        }
                      }
                      iVar15 = iVar15 + 1;
                    } while (iVar12 != iVar15);
                    iVar12 = OPENSSL_sk_num(exts);
                    if (iVar12 == 0) {
                      BIO_printf(local_270,"No extensions matched with %s\n",local_200);
                    }
                    else {
                      X509V3_extensions_print(local_270,(char *)0x0,exts,0,0);
                    }
                  }
                }
LAB_00102ddc:
                OPENSSL_sk_free(exts);
                CRYPTO_free(ptr);
                CRYPTO_free(pcVar24);
              }
              goto LAB_0010227c;
            }
            puVar37 = &_LC7;
            if (local_208 != (undefined *)0x0) {
              puVar37 = local_208;
            }
            uVar18 = app_get0_propq();
            uVar19 = app_get0_libctx();
            type = (EVP_MD *)EVP_MD_fetch(uVar19,puVar37,uVar18);
            if (type == (EVP_MD *)0x0) {
              BIO_printf(_bio_err,"Unknown digest\n");
            }
            else {
              iVar12 = X509_digest(local_288,type,local_88,(uint *)&local_d0);
              EVP_MD_free(type);
              if (iVar12 != 0) {
                lVar20 = 0;
                BIO_printf(local_270,"%s Fingerprint=",puVar37);
                while( true ) {
                  if ((int)local_d0 <= (int)lVar20) break;
                  pbVar1 = local_88 + lVar20;
                  uVar18 = 0x3a;
                  if ((int)local_d0 == (int)lVar20 + 1) {
                    uVar18 = 10;
                  }
                  lVar20 = lVar20 + 1;
                  BIO_printf(local_270,"%02X%c",(ulong)*pbVar1,uVar18);
                }
                goto LAB_0010227c;
              }
              BIO_printf(_bio_err,"Out of memory\n");
            }
          }
        }
        else {
          BIO_printf(_bio_err,"Error getting public key\n");
LAB_001022d1:
          req = (X509_REQ *)0x0;
          pEVar21 = (EVP_PKEY *)0x0;
        }
        goto LAB_001004e0;
      }
      if (local_260 != (ASN1_INTEGER *)0x0) {
LAB_00101502:
        if ((bVar40 || uVar38 != 0) || bVar3) {
LAB_00101519:
          local_1f0 = local_248;
          goto LAB_00101526;
        }
        ctx_00 = X509_STORE_CTX_new();
        if ((ctx_00 == (X509_STORE_CTX *)0x0) ||
           (iVar12 = X509_STORE_CTX_init(ctx_00,ctx,local_288,(stack_st_X509 *)0x0), iVar12 == 0)) {
          BIO_printf(_bio_err,"Error initialising X509 store\n");
          X509_STORE_CTX_free(ctx_00);
        }
        else {
          X509_STORE_CTX_set_flags(ctx_00,0x4000);
          iVar12 = X509_verify_cert(ctx_00);
          X509_STORE_CTX_free(ctx_00);
          if (0 < iVar12) goto LAB_00101519;
        }
LAB_0010312d:
        uVar38 = 1;
        req = (X509_REQ *)0x0;
        pEVar21 = (EVP_PKEY *)0x0;
        goto LAB_001004f2;
      }
      uVar16 = 0;
      local_c8._0_8_ = (ASN1_INTEGER *)0x0;
      if (local_1e8 == (ASN1_INTEGER *)0x0) {
        pcVar25 = strrchr(pcVar24,0x2e);
        if (pcVar25 == (char *)0x0) {
          sVar32 = strlen(pcVar24);
        }
        else {
          sVar32 = (long)pcVar25 - (long)pcVar24;
        }
        local_260 = (ASN1_INTEGER *)app_malloc(sVar32 + 5,"serial# buffer");
        memcpy(local_260,pcVar24,sVar32);
        puVar36 = (undefined4 *)((long)&local_260->length + sVar32);
        uVar16 = 1;
        *puVar36 = 0x6c72732e;
        *(undefined1 *)(puVar36 + 1) = 0;
        local_1e8 = local_260;
      }
      pBVar30 = (BIGNUM *)load_serial(local_1e8,&local_d0,uVar4 | uVar16);
      if (pBVar30 != (BIGNUM *)0x0) {
        iVar12 = BN_add_word(pBVar30,1);
        if (iVar12 == 0) {
          BIO_printf(_bio_err,"Serial number increment failure\n");
        }
        else if (uVar4 == 0 && (int)local_d0 == 0) {
          local_c8._0_8_ = BN_to_ASN1_INTEGER(pBVar30,(ASN1_INTEGER *)0x0);
        }
        else {
          save_serial(local_1e8,0,pBVar30);
        }
      }
      CRYPTO_free(local_260);
      BN_free(pBVar30);
      local_260 = (ASN1_INTEGER *)local_c8._0_8_;
      if ((ASN1_INTEGER *)local_c8._0_8_ != (ASN1_INTEGER *)0x0) goto LAB_00101502;
    }
LAB_00101d7c:
    req = (X509_REQ *)0x0;
    pEVar21 = (EVP_PKEY *)0x0;
    uVar38 = 1;
    goto LAB_001004f2;
  }
  local_288 = (X509 *)0x0;
  req = (X509_REQ *)0x0;
  pEVar21 = (EVP_PKEY *)0x0;
  conf = (CONF *)0x0;
  local_230 = 0;
  local_240 = (X509_REQ *)0x0;
  local_248 = (X509 *)0x0;
  local_250 = 0;
  local_258 = 0;
  local_238 = 0;
  local_268 = 0;
  local_280 = (X509_NAME *)0x0;
  local_220 = (X509_NAME *)0x0;
  local_278 = (EVP_PKEY *)0x0;
  local_228 = (EVP_PKEY *)0x0;
  local_270 = (BIO *)0x0;
  local_260 = (ASN1_INTEGER *)0x0;
LAB_001004e0:
  uVar38 = 1;
  ERR_print_errors(_bio_err);
LAB_001004f2:
  NCONF_free(conf);
  BIO_free_all(local_270);
  X509_STORE_free(ctx);
  X509_NAME_free(local_220);
  X509_NAME_free(local_280);
  X509_REQ_free(local_240);
  X509_free(local_288);
  X509_free(local_248);
  EVP_PKEY_free(local_228);
  EVP_PKEY_free(pEVar21);
  EVP_PKEY_free(local_278);
  OPENSSL_sk_free(local_258);
  OPENSSL_sk_free(local_250);
  X509_REQ_free(req);
  ASN1_INTEGER_free(local_260);
  OPENSSL_sk_pop_free(local_268,&ASN1_OBJECT_free);
  OPENSSL_sk_pop_free(local_238,&ASN1_OBJECT_free);
  release_engine(local_230);
  clear_free(local_e8);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar38;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_001005e8:
  if (0x644 < iVar12) {
    if (iVar12 == 0x646) {
      local_200 = (char *)opt_arg();
      local_118 = uVar13 + 1;
      uVar13 = local_118;
    }
    goto switchD_0010040f_caseD_0;
  }
  if (iVar12 < 0x641) {
    if (1 < iVar12 - 0x5ddU) goto switchD_0010040f_caseD_0;
    iVar12 = opt_rand();
  }
  else {
    iVar12 = opt_provider();
  }
  if (iVar12 != 0) goto switchD_0010040f_caseD_0;
LAB_00100618:
  uVar38 = 1;
LAB_00100e7f:
  local_288 = (X509 *)0x0;
  pEVar21 = (EVP_PKEY *)0x0;
  conf = (CONF *)0x0;
  local_240 = (X509_REQ *)0x0;
  local_248 = (X509 *)0x0;
  local_280 = (X509_NAME *)0x0;
  local_220 = (X509_NAME *)0x0;
  local_278 = (EVP_PKEY *)0x0;
  local_228 = (EVP_PKEY *)0x0;
  local_270 = (BIO *)0x0;
  req = (X509_REQ *)0x0;
  goto LAB_001004f2;
}


