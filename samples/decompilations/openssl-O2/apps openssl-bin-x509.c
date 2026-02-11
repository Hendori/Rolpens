
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void warn_copying(ASN1_OBJECT *param_1,char *param_2)

{
  int n;
  char *__needle;
  char *pcVar1;
  
  n = OBJ_obj2nid(param_1);
  __needle = OBJ_nid2sn(n);
  if (param_2 != (char *)0x0) {
    pcVar1 = strstr(param_2,__needle);
    if (pcVar1 != (char *)0x0) {
      BIO_printf(_bio_err,
                 "Warning: -ext should not specify copying %s extension to CSR; ignoring this\n",
                 __needle);
      return;
    }
  }
  return;
}



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



/* WARNING: Removing unreachable block (ram,0x001012f5) */
/* WARNING: Removing unreachable block (ram,0x001012f9) */
/* WARNING: Removing unreachable block (ram,0x00101307) */
/* WARNING: Removing unreachable block (ram,0x00101c18) */
/* WARNING: Removing unreachable block (ram,0x00101b67) */
/* WARNING: Removing unreachable block (ram,0x00101b7c) */
/* WARNING: Removing unreachable block (ram,0x001017fb) */
/* WARNING: Removing unreachable block (ram,0x00102fe3) */
/* WARNING: Removing unreachable block (ram,0x00102ff6) */
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
  long lVar19;
  undefined8 uVar20;
  CONF *conf;
  long lVar21;
  EVP_PKEY *pEVar22;
  EVP_PKEY *x;
  ASN1_OBJECT *pAVar23;
  ASN1_OBJECT *b;
  X509_REQ *req;
  X509_EXTENSION *pXVar24;
  ASN1_OBJECT *a;
  X509_NAME *pXVar25;
  time_t tVar26;
  ASN1_TIME *s;
  char *pcVar27;
  size_t sVar28;
  char *pcVar29;
  void *ptr;
  char *pcVar30;
  stack_st_X509_EXTENSION *exts;
  EVP_MD *type;
  ulong nmflag;
  X509_PURPOSE *xp;
  ulong uVar31;
  uchar *puVar32;
  stack_st_OPENSSL_STRING *sk;
  ASN1_INTEGER *pAVar33;
  BIGNUM *pBVar34;
  X509_STORE_CTX *ctx_00;
  char *pcVar35;
  char *pcVar36;
  undefined4 *puVar37;
  undefined *puVar38;
  uint uVar39;
  long in_FS_OFFSET;
  bool bVar40;
  X509 *local_288;
  X509_NAME *local_280;
  X509_NAME *local_278;
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
  EVP_PKEY *local_220;
  uint local_214;
  char *local_210;
  undefined *local_208;
  X509V3_CTX *local_200;
  X509 *local_1f8;
  ASN1_INTEGER *local_1f0;
  char *local_1e8;
  int local_1e0;
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
    pcVar27 = (char *)0x0;
    X509_STORE_set_verify_cb(ctx,callb);
    lVar21 = 0;
    opt_set_unknown_name("digest");
    uVar18 = opt_init(param_1,param_2,x509_options);
    local_214 = 0;
    uVar39 = 0;
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
    local_1e0 = -2;
    local_1c0 = 0;
    local_1c8 = 0;
    local_288 = (X509 *)0x0;
    local_140 = 0;
    local_248 = (X509 *)0x0;
    local_228 = (EVP_PKEY *)0x0;
    local_240 = (X509_REQ *)0x0;
    local_210 = (char *)0x0;
    local_1e8 = (char *)0x0;
    local_148 = 0;
    local_150 = 0;
    local_158 = 0;
    local_160 = (uchar *)0x0;
    local_1f0 = (ASN1_INTEGER *)0x0;
    local_1d0 = (char *)0x0;
    local_250 = 0;
    local_258 = 0;
    local_238 = 0;
    local_268 = 0;
    local_208 = (undefined *)0x0;
    local_280 = (X509_NAME *)0x0;
    local_278 = (X509_NAME *)0x0;
    bVar40 = false;
    local_260 = (ASN1_INTEGER *)0x0;
    uVar13 = 0;
    uVar16 = 0;
switchD_0010046f_caseD_0:
    iVar12 = opt_next();
    if (iVar12 != 0) {
LAB_00100451:
      if (0x46 < iVar12) goto LAB_00100648;
      if (iVar12 < -1) goto switchD_0010046f_caseD_0;
      switch(iVar12) {
      default:
        goto switchD_0010046f_caseD_0;
      case 1:
        uVar39 = 0;
        opt_help(x509_options);
        goto LAB_00100edf;
      case 2:
        uVar20 = opt_arg();
        iVar12 = opt_format(uVar20,6,&local_f4);
        break;
      case 3:
        uVar20 = opt_arg();
        iVar12 = opt_format(uVar20,0xffe,&local_f0);
        break;
      case 4:
        uVar20 = opt_arg();
        iVar12 = opt_format(uVar20,0xffe,&local_ec);
        break;
      case 5:
        bVar3 = true;
        goto switchD_0010046f_caseD_0;
      case 6:
        uVar20 = opt_arg();
        iVar12 = opt_format(uVar20,0xffe,&local_fc);
        break;
      case 7:
        uVar20 = opt_arg();
        iVar12 = opt_format(uVar20,0xffe,&local_f8);
        break;
      case 8:
        if ((local_250 == 0) && (local_250 = OPENSSL_sk_new_null(), local_250 == 0))
        goto switchD_0010046f_caseD_ffffffff;
        opt_arg();
        iVar12 = OPENSSL_sk_push();
        break;
      case 9:
        if ((local_258 == 0) && (local_258 = OPENSSL_sk_new_null(), local_258 == 0))
        goto switchD_0010046f_caseD_ffffffff;
        opt_arg();
        iVar12 = OPENSSL_sk_push();
        break;
      case 10:
        pcVar29 = (char *)opt_arg();
        lVar19 = strtol(pcVar29,(char **)0x0,10);
        local_1e0 = (int)lVar19;
        if (-2 < local_1e0) goto switchD_0010046f_caseD_0;
        BIO_printf(_bio_err,"%s: -days parameter arg must be >= -1\n",uVar18);
        goto LAB_001004f1;
      case 0xb:
        local_228 = (EVP_PKEY *)opt_arg();
        goto switchD_0010046f_caseD_0;
      case 0xc:
        local_240 = (X509_REQ *)opt_arg();
        goto switchD_0010046f_caseD_0;
      case 0xd:
        local_210 = (char *)opt_arg();
        goto switchD_0010046f_caseD_0;
      case 0xe:
        local_248 = (X509 *)opt_arg();
        goto switchD_0010046f_caseD_0;
      case 0xf:
        local_140 = opt_arg();
        goto switchD_0010046f_caseD_0;
      case 0x10:
      case 0x11:
        local_288 = (X509 *)opt_arg();
        goto switchD_0010046f_caseD_0;
      case 0x12:
        pcVar27 = (char *)opt_arg();
        goto switchD_0010046f_caseD_0;
      case 0x13:
        local_1d0 = (char *)opt_arg();
        goto switchD_0010046f_caseD_0;
      case 0x14:
        local_1f0 = (ASN1_INTEGER *)opt_arg();
        goto switchD_0010046f_caseD_0;
      case 0x15:
        if (local_260 == (ASN1_INTEGER *)0x0) {
          pcVar29 = (char *)opt_arg();
          local_260 = s2i_ASN1_INTEGER((X509V3_EXT_METHOD *)0x0,pcVar29);
          if (local_260 == (ASN1_INTEGER *)0x0) goto switchD_0010046f_caseD_ffffffff;
          goto switchD_0010046f_caseD_0;
        }
        BIO_printf(_bio_err,"Serial number supplied twice\n");
        goto switchD_0010046f_caseD_ffffffff;
      case 0x16:
        bVar40 = true;
        goto switchD_0010046f_caseD_0;
      case 0x17:
        lVar21 = opt_arg();
        goto switchD_0010046f_caseD_0;
      case 0x18:
        local_278 = (X509_NAME *)opt_arg();
        goto switchD_0010046f_caseD_0;
      case 0x19:
        local_280 = (X509_NAME *)opt_arg();
        goto switchD_0010046f_caseD_0;
      case 0x1a:
        if ((local_268 != 0) || (local_268 = OPENSSL_sk_new_null(), local_268 != 0)) {
          pcVar29 = (char *)opt_arg();
          pAVar23 = OBJ_txt2obj(pcVar29,0);
          if (pAVar23 != (ASN1_OBJECT *)0x0) goto LAB_0010049f;
          uVar20 = opt_arg();
          BIO_printf(_bio_err,"%s: Invalid trust object value %s\n",uVar18,uVar20);
          goto switchD_0010046f_caseD_ffffffff;
        }
LAB_001015f3:
        local_288 = (X509 *)0x0;
        req = (X509_REQ *)0x0;
        pEVar22 = (EVP_PKEY *)0x0;
        conf = (CONF *)0x0;
        local_240 = (X509_REQ *)0x0;
        uVar39 = 1;
        local_248 = (X509 *)0x0;
        local_280 = (X509_NAME *)0x0;
        local_278 = (X509_NAME *)0x0;
        local_220 = (EVP_PKEY *)0x0;
        local_228 = (EVP_PKEY *)0x0;
        local_270 = (BIO *)0x0;
        goto LAB_00100552;
      case 0x1b:
        if ((local_238 == 0) && (local_238 = OPENSSL_sk_new_null(), local_238 == 0))
        goto LAB_001015f3;
        pcVar29 = (char *)opt_arg();
        pAVar23 = OBJ_txt2obj(pcVar29,0);
        if (pAVar23 == (ASN1_OBJECT *)0x0) {
          uVar20 = opt_arg();
          BIO_printf(_bio_err,"%s: Invalid reject object value %s\n",uVar18,uVar20);
          goto switchD_0010046f_caseD_ffffffff;
        }
LAB_0010049f:
        iVar12 = OPENSSL_sk_push();
        if (iVar12 == 0) goto LAB_00100678;
switchD_0010046f_caseD_36:
LAB_001004b9:
        bVar8 = true;
        iVar12 = opt_next();
        if (iVar12 == 0) goto LAB_001004c8;
        goto LAB_00100451;
      case 0x1c:
        local_160 = (uchar *)opt_arg();
        goto LAB_001004b9;
      case 0x1d:
        opt_arg();
        iVar12 = set_cert_ex();
        break;
      case 0x1e:
        opt_arg();
        iVar12 = set_dateopt();
        if (iVar12 != 0) goto switchD_0010046f_caseD_0;
        uVar18 = opt_arg();
        BIO_printf(_bio_err,"Invalid date format: %s\n",uVar18);
        goto LAB_001004f1;
      case 0x1f:
        opt_arg();
        iVar12 = set_nameopt();
        break;
      case 0x20:
        local_198 = uVar13 + 1;
        uVar13 = local_198;
        goto switchD_0010046f_caseD_0;
      case 0x21:
        local_170 = uVar13 + 1;
        uVar13 = local_170;
        goto switchD_0010046f_caseD_0;
      case 0x22:
        local_190 = uVar13 + 1;
        uVar13 = local_190;
        goto switchD_0010046f_caseD_0;
      case 0x23:
        local_130 = uVar13 + 1;
        uVar13 = local_130;
        goto switchD_0010046f_caseD_0;
      case 0x24:
        local_1a8 = uVar13 + 1;
        uVar13 = local_1a8;
        goto switchD_0010046f_caseD_0;
      case 0x25:
        local_1a4 = uVar13 + 1;
        uVar13 = local_1a4;
        goto switchD_0010046f_caseD_0;
      case 0x26:
        uVar39 = 1;
        goto switchD_0010046f_caseD_0;
      case 0x27:
        local_18c = uVar13 + 1;
        uVar13 = local_18c;
        goto switchD_0010046f_caseD_0;
      case 0x28:
        local_168 = uVar13 + 1;
        uVar13 = local_168;
        goto switchD_0010046f_caseD_0;
      case 0x29:
        local_12c = uVar13 + 1;
        uVar13 = local_12c;
        goto switchD_0010046f_caseD_0;
      case 0x2a:
        local_124 = uVar13 + 1;
        uVar13 = local_124;
        goto switchD_0010046f_caseD_0;
      case 0x2b:
        local_194 = uVar13 + 1;
        uVar13 = local_194;
        goto switchD_0010046f_caseD_0;
      case 0x2c:
        local_164 = uVar13 + 1;
        uVar13 = local_164;
        goto switchD_0010046f_caseD_0;
      case 0x2d:
        local_214 = uVar13 + 1;
        local_1b8 = uVar13 + 2;
        uVar13 = local_1b8;
        goto switchD_0010046f_caseD_0;
      case 0x2e:
        local_134 = uVar13 + 1;
        uVar13 = local_134;
        goto switchD_0010046f_caseD_0;
      case 0x2f:
        local_214 = uVar13 + 1;
        uVar13 = local_214;
        goto switchD_0010046f_caseD_0;
      case 0x30:
        local_1b8 = uVar13 + 1;
        uVar13 = local_1b8;
        goto switchD_0010046f_caseD_0;
      case 0x31:
        local_c8._0_8_ = (ASN1_INTEGER *)0x0;
        opt_arg();
        iVar12 = opt_intmax();
        if (iVar12 == 0) goto switchD_0010046f_caseD_ffffffff;
        local_120 = (ASN1_INTEGER *)local_c8._0_8_;
        bVar7 = true;
        goto switchD_0010046f_caseD_0;
      case 0x32:
        local_158 = opt_arg();
        goto switchD_0010046f_caseD_0;
      case 0x33:
        local_150 = opt_arg();
        goto switchD_0010046f_caseD_0;
      case 0x34:
        local_148 = opt_arg();
        goto switchD_0010046f_caseD_0;
      case 0x35:
        local_1b4 = uVar13 + 1;
        uVar13 = local_1b4;
        goto switchD_0010046f_caseD_0;
      case 0x36:
        goto switchD_0010046f_caseD_36;
      case 0x37:
        local_16c = uVar13 + 1;
        uVar13 = local_16c;
        goto switchD_0010046f_caseD_0;
      case 0x38:
        uVar13 = uVar13 + 1;
        uVar16 = uVar13;
        goto switchD_0010046f_caseD_0;
      case 0x39:
        local_17c = uVar13 + 1;
        uVar13 = local_17c;
        goto switchD_0010046f_caseD_0;
      case 0x3a:
        uVar4 = 1;
        goto switchD_0010046f_caseD_0;
      case 0x3b:
        bVar11 = true;
        goto switchD_0010046f_caseD_0;
      case 0x3c:
        local_128 = uVar13 + 1;
        uVar13 = local_128;
        goto switchD_0010046f_caseD_0;
      case 0x3d:
        local_114 = uVar13 + 1;
        uVar13 = local_114;
        goto switchD_0010046f_caseD_0;
      case 0x3e:
        local_110 = uVar13 + 1;
        uVar13 = local_110;
        goto switchD_0010046f_caseD_0;
      case 0x3f:
        opt_arg();
        iVar12 = set_ext_copy();
        if (iVar12 != 0) goto switchD_0010046f_caseD_0;
        uVar18 = opt_arg();
        BIO_printf(_bio_err,"Invalid extension copy option: %s\n",uVar18);
        goto LAB_001004f1;
      case 0x40:
        bVar6 = true;
        goto switchD_0010046f_caseD_0;
      case 0x41:
        local_208 = (undefined *)opt_unknown();
        goto switchD_0010046f_caseD_0;
      case 0x42:
        uVar20 = opt_arg();
        local_230 = setup_engine_methods(uVar20,0xffffffff,0);
        goto switchD_0010046f_caseD_0;
      case 0x43:
        bVar9 = true;
        goto switchD_0010046f_caseD_0;
      case 0x44:
        bVar10 = true;
        goto switchD_0010046f_caseD_0;
      case 0x45:
        local_1c8 = opt_arg();
        goto switchD_0010046f_caseD_0;
      case 0x46:
        local_1c0 = opt_arg();
        goto switchD_0010046f_caseD_0;
      case -1:
        goto switchD_0010046f_caseD_ffffffff;
      }
      if (iVar12 == 0) goto switchD_0010046f_caseD_ffffffff;
      goto switchD_0010046f_caseD_0;
    }
LAB_001004c8:
    iVar12 = opt_check_rest_arg(0);
    if (iVar12 == 0) {
switchD_0010046f_caseD_ffffffff:
      BIO_printf(_bio_err,"%s: Use -help for summary.\n",uVar18);
LAB_001004f1:
      local_288 = (X509 *)0x0;
      req = (X509_REQ *)0x0;
      pEVar22 = (EVP_PKEY *)0x0;
      conf = (CONF *)0x0;
      local_240 = (X509_REQ *)0x0;
      local_248 = (X509 *)0x0;
      local_280 = (X509_NAME *)0x0;
      local_278 = (X509_NAME *)0x0;
      local_220 = (EVP_PKEY *)0x0;
      local_228 = (EVP_PKEY *)0x0;
      local_270 = (BIO *)0x0;
      goto LAB_00100540;
    }
    iVar12 = app_RAND_load();
    if (iVar12 == 0) goto LAB_00100678;
    iVar12 = opt_check_md(local_208);
    if (iVar12 == 0) goto switchD_0010046f_caseD_ffffffff;
    if ((local_1c8 != 0) && (bVar10)) {
      BIO_printf(_bio_err,"Cannot use -preserve_dates with -not_before option\n");
      goto LAB_001004f1;
    }
    if ((local_1c0 != 0) && (bVar10)) {
      BIO_printf(_bio_err,"Cannot use -preserve_dates with -not_after option\n");
      goto LAB_001004f1;
    }
    if (local_1e0 != -2) {
      if (bVar10) {
        BIO_printf(_bio_err,"Cannot use -preserve_dates with -days option\n");
        goto LAB_001004f1;
      }
      if ((local_1e0 != -2) && (local_1c0 != 0)) {
        BIO_printf(_bio_err,"Warning: -not_after option overriding -days option\n");
      }
    }
    iVar12 = app_passwd(local_228,0,&local_e8,0);
    if (iVar12 == 0) {
      BIO_printf(_bio_err,"Error getting password\n");
      goto LAB_001004f1;
    }
    uVar18 = app_get0_propq();
    uVar20 = app_get0_libctx();
    iVar12 = X509_STORE_set_default_paths_ex(ctx,uVar20,uVar18);
    if (iVar12 == 0) goto LAB_00100678;
    if ((bool)(bVar40 & local_248 != (X509 *)0x0)) {
      BIO_printf(_bio_err,"The -in option cannot be used with -new\n");
      goto LAB_001004f1;
    }
    if ((bool)(bVar40 & bVar3)) {
      BIO_printf(_bio_err,"The -req option cannot be used with -new\n");
      goto LAB_001004f1;
    }
    if (local_288 == (X509 *)0x0) {
      local_228 = (EVP_PKEY *)0x0;
    }
    else {
      local_228 = (EVP_PKEY *)load_key(local_288,local_ec,0);
      if (local_228 == (EVP_PKEY *)0x0) goto LAB_00100678;
    }
    if (lVar21 == 0) {
      local_220 = (EVP_PKEY *)0x0;
      if (bVar40) {
        local_220 = (EVP_PKEY *)0x0;
        if (local_280 == (X509_NAME *)0x0) {
LAB_00101b1f:
          req = (X509_REQ *)0x0;
          pEVar22 = (EVP_PKEY *)0x0;
          BIO_printf(_bio_err,"The -new option requires a subject to be set using -subj\n");
          conf = (CONF *)0x0;
          local_240 = (X509_REQ *)0x0;
          local_248 = (X509 *)0x0;
          local_288 = (X509 *)0x0;
          local_280 = (X509_NAME *)0x0;
          local_278 = (X509_NAME *)0x0;
          local_270 = (BIO *)0x0;
        }
        else {
          local_220 = (EVP_PKEY *)0x0;
          if (local_288 != (X509 *)0x0) goto LAB_001010fe;
          req = (X509_REQ *)0x0;
          pEVar22 = (EVP_PKEY *)0x0;
          BIO_printf(_bio_err,"The -new option requires using the -key or -force_pubkey option\n");
          local_240 = (X509_REQ *)0x0;
          local_248 = (X509 *)0x0;
          local_280 = (X509_NAME *)0x0;
          local_278 = (X509_NAME *)0x0;
          local_220 = (EVP_PKEY *)0x0;
          local_270 = (BIO *)0x0;
          conf = (CONF *)0x0;
        }
        goto LAB_00100540;
      }
LAB_00101754:
      if (local_278 != (X509_NAME *)0x0) goto LAB_0010110a;
LAB_00101133:
      if (local_280 != (X509_NAME *)0x0) goto LAB_0010171c;
    }
    else {
      local_220 = (EVP_PKEY *)load_pubkey(lVar21,local_ec,0);
      if (local_220 == (EVP_PKEY *)0x0) {
        req = (X509_REQ *)0x0;
        uVar39 = 1;
        local_240 = (X509_REQ *)0x0;
        local_248 = (X509 *)0x0;
        local_288 = (X509 *)0x0;
        local_280 = (X509_NAME *)0x0;
        local_278 = (X509_NAME *)0x0;
        local_220 = (EVP_PKEY *)0x0;
        pEVar22 = (EVP_PKEY *)0x0;
        local_270 = (BIO *)0x0;
        conf = (CONF *)0x0;
        goto LAB_00100552;
      }
      if (!bVar40) goto LAB_00101754;
      if (local_280 == (X509_NAME *)0x0) goto LAB_00101b1f;
LAB_001010fe:
      if (local_278 != (X509_NAME *)0x0) {
LAB_0010110a:
        local_278 = (X509_NAME *)parse_name(local_278,0x1001,1);
        if (local_278 != (X509_NAME *)0x0) goto LAB_00101133;
        req = (X509_REQ *)0x0;
        local_270 = (BIO *)0x0;
        pEVar22 = (EVP_PKEY *)0x0;
        conf = (CONF *)0x0;
        uVar39 = 1;
        local_240 = (X509_REQ *)0x0;
        local_248 = (X509 *)0x0;
        local_288 = (X509 *)0x0;
        local_280 = (X509_NAME *)0x0;
        goto LAB_00100552;
      }
LAB_0010171c:
      local_280 = (X509_NAME *)parse_name(local_280,0x1001,1);
      if (local_280 == (X509_NAME *)0x0) {
        req = (X509_REQ *)0x0;
        pEVar22 = (EVP_PKEY *)0x0;
        local_240 = (X509_REQ *)0x0;
        conf = (CONF *)0x0;
        uVar39 = 1;
        local_248 = (X509 *)0x0;
        local_288 = (X509 *)0x0;
        local_280 = (X509_NAME *)0x0;
        local_270 = (BIO *)0x0;
        goto LAB_00100552;
      }
    }
    if (local_1d0 == (char *)0x0) {
      pcVar29 = pcVar27;
      if (pcVar27 == (char *)0x0) goto LAB_00101969;
LAB_0010115c:
      local_1d0 = pcVar29;
      if (local_288 != (X509 *)0x0) {
        req = (X509_REQ *)0x0;
        pEVar22 = (EVP_PKEY *)0x0;
        conf = (CONF *)0x0;
        BIO_printf(_bio_err,"Cannot use both -key/-signkey and -CA option\n");
        local_240 = (X509_REQ *)0x0;
        local_248 = (X509 *)0x0;
        local_288 = (X509 *)0x0;
        local_270 = (BIO *)0x0;
        goto LAB_00100540;
      }
    }
    else {
      pcVar29 = local_1d0;
      if (pcVar27 != (char *)0x0) goto LAB_0010115c;
      BIO_printf(_bio_err,"Warning: ignoring -CAkey option since -CA option is not given\n");
LAB_00101969:
      if (local_f8 != 0) {
        BIO_printf(_bio_err,"Warning: ignoring -CAkeyform option since -CA option is not given\n");
      }
      if (local_fc != 0) {
        BIO_printf(_bio_err,"Warning: ignoring -CAform option since -CA option is not given\n");
      }
      if (local_1f0 != (ASN1_INTEGER *)0x0) {
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
        pEVar22 = (EVP_PKEY *)0x0;
        local_240 = (X509_REQ *)0x0;
        uVar39 = 1;
        local_248 = (X509 *)0x0;
        local_288 = (X509 *)0x0;
        local_270 = (BIO *)0x0;
        goto LAB_00100552;
      }
      if (local_210 == (char *)0x0) {
        pcVar29 = (char *)app_conf_try_string(conf,"default","extensions");
        local_210 = "default";
        if (pcVar29 != (char *)0x0) {
          local_210 = pcVar29;
        }
      }
      X509V3_set_ctx(&local_c8,(X509 *)0x0,(X509 *)0x0,(X509_REQ *)0x0,(X509_CRL *)0x0,1);
      X509V3_set_nconf(&local_c8,conf);
      iVar12 = X509V3_EXT_add_nconf(conf,&local_c8,local_210,(X509 *)0x0);
      if (iVar12 == 0) {
        req = (X509_REQ *)0x0;
        pEVar22 = (EVP_PKEY *)0x0;
        BIO_printf(_bio_err,"Error checking extension section %s\n",local_210);
        local_240 = (X509_REQ *)0x0;
        local_248 = (X509 *)0x0;
        local_288 = (X509 *)0x0;
        local_270 = (BIO *)0x0;
        goto LAB_00100540;
      }
    }
    pXVar25 = local_280;
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
LAB_00101d7e:
        uVar39 = 1;
        req = (X509_REQ *)0x0;
        pEVar22 = (EVP_PKEY *)0x0;
        local_240 = (X509_REQ *)0x0;
        local_248 = (X509 *)0x0;
        local_288 = (X509 *)0x0;
        local_270 = (BIO *)0x0;
        goto LAB_00100552;
      }
      lVar21 = X509_REQ_get0_pubkey(local_240);
      if (lVar21 == 0) {
        req = (X509_REQ *)0x0;
        pEVar22 = (EVP_PKEY *)0x0;
        BIO_printf(_bio_err,"Error unpacking public key from CSR\n");
        local_248 = (X509 *)0x0;
        local_288 = (X509 *)0x0;
        local_270 = (BIO *)0x0;
      }
      else {
        iVar12 = do_X509_REQ_verify(local_240,lVar21,local_250);
        if (0 < iVar12) {
          BIO_printf(_bio_err,"Certificate request self-signature ok\n");
          uVar18 = X509_REQ_get_subject_name(local_240);
          print_name(_bio_err,"subject=",uVar18);
          goto LAB_0010128a;
        }
        pcVar27 = "Certificate request self-signature did not match the contents\n";
        if (iVar12 != 0) {
          pcVar27 = "Error while verifying certificate request self-signature\n";
        }
LAB_00101cfc:
        req = (X509_REQ *)0x0;
        pEVar22 = (EVP_PKEY *)0x0;
        BIO_printf(_bio_err,pcVar27);
        local_248 = (X509 *)0x0;
        local_288 = (X509 *)0x0;
        local_270 = (BIO *)0x0;
      }
      goto LAB_00100540;
    }
    if (bVar40) {
      local_240 = (X509_REQ *)0x0;
LAB_0010128a:
      if (bVar10) {
        BIO_printf(_bio_err,"Warning: ignoring -preserve_dates option with -req or -new\n");
      }
      if (local_288 == (X509 *)0x0 && local_1d0 == (char *)0x0) {
        pcVar27 = "We need a private key to sign with, use -key or -CAkey or -CA with private key\n"
        ;
        goto LAB_00101cfc;
      }
      uVar18 = app_get0_propq();
      uVar20 = app_get0_libctx();
      local_288 = (X509 *)X509_new_ex(uVar20,uVar18);
      if (local_288 != (X509 *)0x0) {
        if (local_260 != (ASN1_INTEGER *)0x0 || pcVar27 != (char *)0x0) {
LAB_001012dd:
          if (local_240 == (X509_REQ *)0x0) {
            bVar5 = true;
            bVar10 = false;
            goto LAB_00101866;
          }
          if (local_280 == (X509_NAME *)0x0) {
            bVar2 = true;
            pXVar25 = (X509_NAME *)X509_REQ_get_subject_name(local_240);
            bVar5 = true;
            bVar10 = false;
          }
          else {
            bVar2 = true;
            bVar5 = true;
            bVar10 = false;
          }
          goto LAB_00101344;
        }
        local_260 = ASN1_INTEGER_new();
        if (local_260 != (ASN1_INTEGER *)0x0) {
          iVar12 = rand_serial();
          if (iVar12 != 0) goto LAB_001012dd;
          goto LAB_00101bcd;
        }
      }
      req = (X509_REQ *)0x0;
      pEVar22 = (EVP_PKEY *)0x0;
      local_248 = (X509 *)0x0;
      uVar39 = 1;
      local_270 = (BIO *)0x0;
      goto LAB_00100552;
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
    if (local_288 == (X509 *)0x0) goto LAB_00101d7e;
    bVar5 = false;
LAB_00101866:
    if (local_280 != (X509_NAME *)0x0) {
      bVar2 = false;
      local_240 = (X509_REQ *)0x0;
LAB_00101344:
      iVar12 = X509_set_subject_name(local_288,pXVar25);
      if (iVar12 != 0) {
        if (local_228 != (EVP_PKEY *)0x0 || local_220 != (EVP_PKEY *)0x0) goto LAB_00101893;
        if (!bVar2) goto LAB_0010138a;
        bVar2 = false;
LAB_0010136c:
        pEVar22 = (EVP_PKEY *)X509_REQ_get0_pubkey(local_240);
        goto LAB_00101379;
      }
LAB_00101bcd:
      uVar39 = 1;
      req = (X509_REQ *)0x0;
      local_248 = (X509 *)0x0;
      pEVar22 = (EVP_PKEY *)0x0;
      local_270 = (BIO *)0x0;
      goto LAB_00100552;
    }
    local_240 = (X509_REQ *)0x0;
    if (local_220 == (EVP_PKEY *)0x0 && local_228 == (EVP_PKEY *)0x0) {
      bVar2 = false;
    }
    else {
LAB_00101893:
      bVar2 = local_228 != (EVP_PKEY *)0x0;
      pEVar22 = local_220;
      if ((local_220 == (EVP_PKEY *)0x0) && (pEVar22 = local_228, local_228 == (EVP_PKEY *)0x0))
      goto LAB_0010136c;
LAB_00101379:
      iVar12 = X509_set_pubkey(local_288,pEVar22);
      if (iVar12 == 0) goto LAB_00101bcd;
    }
LAB_0010138a:
    if (pcVar27 == (char *)0x0) {
      local_248 = (X509 *)0x0;
    }
    else {
      local_248 = (X509 *)load_cert_pass(pcVar27,local_fc,1);
      if (local_248 == (X509 *)0x0) {
        req = (X509_REQ *)0x0;
        pEVar22 = (EVP_PKEY *)0x0;
        uVar39 = 1;
        local_248 = (X509 *)0x0;
        local_270 = (BIO *)0x0;
        goto LAB_00100552;
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
      if ((local_1e8 != (char *)0x0) && (bVar11)) {
        BIO_printf(_bio_err,"Warning: Ignoring -ext since -clrext is given\n");
      }
      iVar12 = X509_get_ext_count(local_288);
      iVar12 = iVar12 + -1;
      if (-1 < iVar12) {
        do {
          pXVar24 = X509_get_ext(local_288,iVar12);
          pAVar23 = X509_EXTENSION_get_object(pXVar24);
          iVar14 = OBJ_obj2nid(pAVar23);
          pcVar29 = OBJ_nid2sn(iVar14);
          if ((bVar11) ||
             ((local_1e8 != (char *)0x0 &&
              (pcVar29 = strstr(local_1e8,pcVar29), pcVar29 == (char *)0x0)))) {
            pXVar24 = X509_delete_ext(local_288,iVar12);
            X509_EXTENSION_free(pXVar24);
          }
          iVar12 = iVar12 + -1;
        } while (iVar12 != -1);
      }
      if (pcVar27 == (char *)0x0) {
        if ((bVar2) && (iVar12 = cert_matches_key(local_288,local_228), iVar12 == 0)) {
          BIO_printf(_bio_err,"Warning: Signature key and public key of cert do not match\n");
        }
        local_1f8 = local_288;
        if (local_260 != (ASN1_INTEGER *)0x0) {
LAB_00101dfa:
          iVar12 = X509_set_serialNumber(local_288,local_260);
          if (iVar12 == 0) goto LAB_00102ec6;
        }
        if (((bVar5) || (pcVar27 != (char *)0x0)) || (bVar2)) {
          if ((bVar10) || (iVar12 = set_cert_times(local_288,local_1c8,local_1c0), iVar12 != 0)) {
            if (local_278 == (X509_NAME *)0x0) {
              pXVar25 = X509_get_subject_name(local_1f8);
              iVar12 = X509_set_issuer_name(local_288,pXVar25);
              if (iVar12 == 0) goto LAB_00101b0f;
            }
            else {
              iVar12 = X509_set_issuer_name(local_288,local_278);
              if (iVar12 == 0) goto LAB_00102ec6;
            }
            X509V3_set_ctx(&local_c8,local_1f8,local_288,(X509_REQ *)0x0,(X509_CRL *)0x0,2);
            if (pcVar27 == (char *)0x0) goto LAB_00101e5f;
            goto LAB_00101e79;
          }
          goto LAB_00102ec6;
        }
        X509V3_set_ctx(&local_c8,local_1f8,local_288,(X509_REQ *)0x0,(X509_CRL *)0x0,2);
LAB_00101e5f:
        local_200 = &local_c8;
        iVar12 = X509V3_set_issuer_pkey(local_200);
        if (iVar12 == 0) goto LAB_00102ec6;
LAB_00101e79:
        local_200 = &local_c8;
        if ((conf != (CONF *)0x0) && (uVar39 == 0)) {
          X509V3_set_nconf(local_200,conf);
          iVar12 = X509V3_EXT_add_nconf(conf,local_200,local_210,local_288);
          if (iVar12 != 0) goto LAB_00101eb5;
          req = (X509_REQ *)0x0;
          pEVar22 = (EVP_PKEY *)0x0;
          BIO_printf(_bio_err,"Error adding extensions from section %s\n",local_210);
          goto LAB_00100540;
        }
LAB_00101eb5:
        x = (EVP_PKEY *)X509_get0_pubkey();
        if ((local_1a8 == 0 && local_1a4 == 0) || (x != (EVP_PKEY *)0x0)) {
          if (uVar39 != 0) {
            if (local_228 == (EVP_PKEY *)0x0) {
              req = (X509_REQ *)0x0;
              pEVar22 = (EVP_PKEY *)0x0;
              BIO_printf(_bio_err,"Must specify request signing key using -key\n");
              goto LAB_00100540;
            }
            if (!bVar11) {
              uVar18 = X509_get0_extensions(local_288);
              iVar12 = OPENSSL_sk_num(uVar18);
              pAVar23 = OBJ_nid2obj(0x52);
              b = OBJ_nid2obj(0x5a);
              req = X509_to_X509_REQ(local_288,(EVP_PKEY *)0x0,(EVP_MD *)0x0);
              if (req != (X509_REQ *)0x0) {
                warn_copying(pAVar23,local_1e8);
                warn_copying(b,local_1e8);
                lVar21 = OPENSSL_sk_new_reserve(0,iVar12);
                if (lVar21 != 0) {
                  iVar14 = 0;
                  while( true ) {
                    if (iVar12 <= iVar14) {
                      OPENSSL_sk_num(lVar21);
                      OPENSSL_sk_free(lVar21);
                      if (conf != (CONF *)0x0) {
                        X509V3_set_nconf(local_200,conf);
                        iVar12 = X509V3_EXT_REQ_add_nconf(conf,local_200,local_210,req);
                        if (iVar12 == 0) {
                          pEVar22 = (EVP_PKEY *)0x0;
                          BIO_printf(_bio_err,"Error adding request extensions from section %s\n",
                                     local_210);
                          goto LAB_00100540;
                        }
                      }
                      iVar12 = do_X509_REQ_sign(req,local_228,local_208);
                      if (iVar12 == 0) {
                        pEVar22 = (EVP_PKEY *)0x0;
                        goto LAB_00100552;
                      }
                      if (local_1b4 == 0) {
                        if (local_f0 == 4) {
                          uVar31 = get_nameopt();
                          X509_REQ_print_ex(local_270,req,uVar31,0);
                          iVar12 = i2d_X509_bio(local_270,local_288);
                        }
                        else {
                          iVar12 = PEM_write_bio_X509_REQ(local_270,req);
                        }
                        if (iVar12 == 0) {
                          pEVar22 = (EVP_PKEY *)0x0;
                          BIO_printf(_bio_err,"Unable to write certificate request\n");
                          goto LAB_00100540;
                        }
                      }
                      pEVar22 = (EVP_PKEY *)0x0;
                      local_1b4 = uVar39;
                      goto LAB_00102109;
                    }
                    pXVar24 = (X509_EXTENSION *)OPENSSL_sk_value(uVar18,iVar14);
                    a = X509_EXTENSION_get_object(pXVar24);
                    iVar15 = OBJ_cmp(a,pAVar23);
                    if (((iVar15 != 0) && (iVar15 = OBJ_cmp(a,b), iVar15 != 0)) &&
                       (iVar15 = OPENSSL_sk_push(lVar21,pXVar24), iVar15 == 0)) break;
                    iVar14 = iVar14 + 1;
                  }
                }
                pEVar22 = (EVP_PKEY *)0x0;
                OPENSSL_sk_free(lVar21);
                X509_REQ_free(req);
                req = (X509_REQ *)0x0;
                goto LAB_00100552;
              }
              goto LAB_00102ec6;
            }
            BIO_printf(_bio_err,"Must not use -clrext together with -copy_extensions\n");
            goto LAB_00102f52;
          }
          if (pcVar27 == (char *)0x0) {
            pEVar22 = (EVP_PKEY *)0x0;
            if (!bVar2) goto LAB_00102107;
            req = (X509_REQ *)0x0;
            iVar12 = do_X509_sign(local_288,0,local_228,local_208,local_258,local_200);
            if (iVar12 != 0) goto LAB_00102109;
LAB_00102d55:
            uVar39 = 1;
            goto LAB_00100552;
          }
          pEVar22 = (EVP_PKEY *)load_key(local_1d0,local_f8,0,local_e8,local_230,"CA private key");
          if (pEVar22 == (EVP_PKEY *)0x0) {
            req = (X509_REQ *)0x0;
            uVar39 = 1;
            goto LAB_00100552;
          }
          iVar12 = X509_check_private_key(local_248,pEVar22);
          if (iVar12 == 0) {
            req = (X509_REQ *)0x0;
            BIO_printf(_bio_err,"CA certificate and CA private key do not match\n");
            goto LAB_00100540;
          }
          iVar12 = do_X509_sign(local_288,0,pEVar22,local_208,local_258,local_200);
          if (iVar12 == 0) {
            uVar39 = 1;
            req = (X509_REQ *)0x0;
            goto LAB_00100552;
          }
LAB_00102107:
          req = (X509_REQ *)0x0;
LAB_00102109:
          if (bVar6) {
            X509_get0_signature(&local_d0,0,local_288);
            corrupt_signature();
          }
          local_210._0_4_ = 1;
          if ((int)uVar13 < 1) {
LAB_00102317:
            if (bVar7) {
              tVar26 = time((time_t *)0x0);
              local_d0 = (BIGNUM *)((long)&local_120->length + tVar26);
              s = (ASN1_TIME *)X509_get0_notAfter(local_288);
              uVar16 = X509_cmp_time(s,(time_t *)&local_d0);
              uVar39 = uVar16 >> 0x1f;
              if ((int)uVar16 < 0) {
                BIO_printf(local_270,"Certificate will expire\n");
              }
              else {
                BIO_printf(local_270,"Certificate will not expire\n");
              }
              goto LAB_00100552;
            }
            iVar12 = check_cert_attributes(local_270,local_288,local_158,local_150,local_148,1);
            if (iVar12 != 0) {
              if (local_1b4 != 0 || bVar9) {
                uVar39 = 0;
                goto LAB_00100552;
              }
              if (local_f0 == 4) {
                iVar12 = i2d_X509_bio(local_270,local_288);
              }
              else {
                if (local_f0 != 0x8005) {
                  BIO_printf(_bio_err,"Bad output format specified for outfile\n");
                  goto LAB_00100540;
                }
                if (bVar8) {
                  iVar12 = PEM_write_bio_X509_AUX(local_270,local_288);
                }
                else {
                  iVar12 = PEM_write_bio_X509(local_270,local_288);
                }
              }
              uVar39 = 0;
              if (iVar12 != 0) goto LAB_00100552;
              BIO_printf(_bio_err,"Unable to write certificate\n");
            }
          }
          else {
            while (uVar31 = local_d8, local_194 == (uint)local_210) {
              pXVar25 = X509_get_issuer_name(local_288);
              print_name(local_270,"issuer=",pXVar25);
LAB_00102294:
              local_210._0_4_ = (uint)local_210 + 1;
              if ((int)uVar13 < (int)(uint)local_210) goto LAB_00102317;
            }
            if (local_124 == (uint)local_210) {
              pXVar25 = X509_get_subject_name(local_288);
              print_name(local_270,"subject=",pXVar25);
              goto LAB_00102294;
            }
            if (local_190 == (uint)local_210) {
              BIO_printf(local_270,"serial=");
              pAVar33 = (ASN1_INTEGER *)X509_get0_serialNumber(local_288);
              i2a_ASN1_INTEGER(local_270,pAVar33);
              BIO_printf(local_270,"\n");
              goto LAB_00102294;
            }
            if (local_130 == (uint)local_210) {
              pAVar33 = (ASN1_INTEGER *)X509_get0_serialNumber(local_288);
              pBVar34 = ASN1_INTEGER_to_BN(pAVar33,(BIGNUM *)0x0);
              if (pBVar34 == (BIGNUM *)0x0) goto LAB_00102d55;
              iVar12 = BN_add_word(pBVar34,1);
              if ((iVar12 == 0) ||
                 (pAVar33 = BN_to_ASN1_INTEGER(pBVar34,(ASN1_INTEGER *)0x0),
                 pAVar33 == (ASN1_INTEGER *)0x0)) {
                uVar39 = 1;
                BN_free(pBVar34);
                goto LAB_00100552;
              }
              BN_free(pBVar34);
              i2a_ASN1_INTEGER(local_270,pAVar33);
              ASN1_INTEGER_free(pAVar33);
              BIO_puts(local_270,"\n");
              goto LAB_00102294;
            }
            if (local_198 == (uint)local_210) {
LAB_00102d60:
              sk = X509_get1_email(local_288);
LAB_00102be5:
              for (iVar12 = 0; iVar14 = OPENSSL_sk_num(sk), iVar12 < iVar14; iVar12 = iVar12 + 1) {
                uVar18 = OPENSSL_sk_value(sk,iVar12);
                BIO_printf(local_270,"%s\n",uVar18);
              }
              X509_email_free(sk);
              goto LAB_00102294;
            }
            if (local_170 == (uint)local_210) {
              if (local_198 == (uint)local_210) goto LAB_00102d60;
              sk = X509_get1_ocsp(local_288);
              goto LAB_00102be5;
            }
            if (local_17c == (uint)local_210) {
              puVar32 = X509_alias_get0(local_288,(int *)0x0);
              if (puVar32 == (uchar *)0x0) {
                BIO_puts(local_270,"<No Alias>\n");
              }
              else {
                BIO_printf(local_270,"%s\n",puVar32);
              }
              goto LAB_00102294;
            }
            if (local_168 == (uint)local_210) {
              uVar31 = X509_subject_name_hash(local_288);
LAB_00102b15:
              BIO_printf(local_270,"%08lx\n",uVar31);
              goto LAB_00102294;
            }
            if (local_114 == (uint)local_210) {
              uVar31 = X509_subject_name_hash_old(local_288);
              goto LAB_00102b15;
            }
            if (local_12c == (uint)local_210) {
              uVar31 = X509_issuer_name_hash(local_288);
              goto LAB_00102b15;
            }
            if (local_110 == (uint)local_210) {
              uVar31 = X509_issuer_name_hash_old(local_288);
              goto LAB_00102b15;
            }
            if (local_134 == (uint)local_210) {
              BIO_printf(local_270,"Certificate purposes:\n");
              for (iVar12 = 0; iVar14 = X509_PURPOSE_get_count(), iVar12 < iVar14;
                  iVar12 = iVar12 + 1) {
                xp = X509_PURPOSE_get0(iVar12);
                iVar14 = X509_PURPOSE_get_id(xp);
                iVar15 = 0;
                pcVar27 = X509_PURPOSE_get0_name(xp);
                while( true ) {
                  uVar39 = X509_check_purpose(local_288,iVar14,iVar15);
                  puVar38 = &_LC6;
                  if (iVar15 == 0) {
                    puVar38 = &_LC7;
                  }
                  BIO_printf(local_270,"%s%s : ",pcVar27,puVar38);
                  if (uVar39 == 1) {
                    BIO_printf(local_270,"Yes\n");
                  }
                  else if (uVar39 == 0) {
                    BIO_printf(local_270,"No\n");
                  }
                  else {
                    BIO_printf(local_270,"Yes (WARNING code=%d)\n",(ulong)uVar39);
                  }
                  if (iVar15 != 0) break;
                  iVar15 = 1;
                }
              }
              goto LAB_00102294;
            }
            if (local_1a8 == (uint)local_210) {
              BIO_printf(local_270,"Modulus=");
              iVar12 = EVP_PKEY_is_a(x,&_LC77);
              if ((iVar12 == 0) && (iVar12 = EVP_PKEY_is_a(x,"RSA-PSS"), iVar12 == 0)) {
                iVar12 = EVP_PKEY_is_a(x,&_LC80);
                if (iVar12 != 0) {
                  puVar38 = &_LC81;
                  goto LAB_001029de;
                }
                BIO_printf(local_270,"No modulus for this public key type");
              }
              else {
                puVar38 = &_LC78;
LAB_001029de:
                local_d0 = (BIGNUM *)0x0;
                EVP_PKEY_get_bn_param(x,puVar38,&local_d0);
                BN_print(local_270,local_d0);
                BN_free(local_d0);
              }
              BIO_printf(local_270,"\n");
              goto LAB_00102294;
            }
            if (local_1a4 == (uint)local_210) {
              PEM_write_bio_PUBKEY(local_270,x);
              goto LAB_00102294;
            }
            if (local_18c == (uint)local_210) {
              nmflag = get_nameopt();
              X509_print_ex(local_270,local_288,nmflag,uVar31);
              goto LAB_00102294;
            }
            if (local_214 == (uint)local_210) {
              BIO_puts(local_270,"notBefore=");
              uVar18 = local_e0;
              uVar20 = X509_get0_notBefore(local_288);
LAB_00102881:
              ASN1_TIME_print_ex(local_270,uVar20,uVar18);
              BIO_puts(local_270,"\n");
              goto LAB_00102294;
            }
            if (local_1b8 == (uint)local_210) {
              BIO_puts(local_270,"notAfter=");
              uVar18 = local_e0;
              uVar20 = X509_get0_notAfter(local_288);
              goto LAB_00102881;
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
LAB_0010274c:
                  pcVar27 = (char *)0x0;
                  ptr = (void *)0x0;
                  exts = (stack_st_X509_EXTENSION *)0x0;
                }
                else {
                  pcVar27 = CRYPTO_strdup(local_1e8,"apps/x509.c",0x4f3);
                  if (pcVar27 == (char *)0x0) goto LAB_0010274c;
                  sVar28 = strlen(pcVar27);
                  iVar14 = 0;
                  pcVar29 = pcVar27;
                  pcVar35 = pcVar27;
                  while (pcVar30 = pcVar29, (long)pcVar30 - (long)pcVar27 <= (long)(int)sVar28) {
                    pcVar29 = pcVar30 + 1;
                    if (((*pcVar30 == ',') || (*pcVar30 == '\0')) &&
                       (bVar40 = pcVar35 != pcVar30, pcVar35 = pcVar29, bVar40)) {
                      iVar14 = iVar14 + 1;
                    }
                  }
                  if (iVar14 == 0) {
                    BIO_printf(local_270,"Invalid extension names: %s\n",local_1e8);
LAB_001026f1:
                    ptr = (void *)0x0;
                    exts = (stack_st_X509_EXTENSION *)0x0;
                  }
                  else {
                    ptr = CRYPTO_malloc((int)((long)iVar14 << 3),"apps/x509.c",0x4f9);
                    if (ptr == (void *)0x0) goto LAB_001026f1;
                    sVar28 = strlen(pcVar27);
                    iVar15 = 0;
                    pcVar29 = pcVar27;
                    pcVar35 = pcVar27;
                    while (pcVar36 = pcVar35, pcVar30 = pcVar29,
                          (long)pcVar30 - (long)pcVar27 <= (long)(int)sVar28) {
                      pcVar29 = pcVar30 + 1;
                      if (((*pcVar30 == ',') || (pcVar35 = pcVar36, *pcVar30 == '\0')) &&
                         (pcVar35 = pcVar29, pcVar36 != pcVar30)) {
                        lVar21 = (long)iVar15;
                        *pcVar30 = '\0';
                        iVar15 = iVar15 + 1;
                        *(char **)((long)ptr + lVar21 * 8) = pcVar36;
                      }
                    }
                    exts = (stack_st_X509_EXTENSION *)0x0;
                    iVar15 = 0;
                    do {
                      pXVar24 = (X509_EXTENSION *)OPENSSL_sk_value(uVar18);
                      pAVar23 = X509_EXTENSION_get_object(pXVar24);
                      iVar17 = OBJ_obj2nid(pAVar23);
                      pcVar29 = OBJ_nid2sn(iVar17);
                      if (pcVar29 != (char *)0x0) {
                        lVar21 = 0;
                        iVar17 = strcmp(pcVar29,"UNDEF");
                        if (iVar17 != 0) {
                          for (; (int)lVar21 < iVar14; lVar21 = lVar21 + 1) {
                            iVar17 = strcmp(pcVar29,*(char **)((long)ptr + lVar21 * 8));
                            if ((iVar17 == 0) &&
                               (((exts == (stack_st_X509_EXTENSION *)0x0 &&
                                 (exts = (stack_st_X509_EXTENSION *)OPENSSL_sk_new_null(),
                                 exts == (stack_st_X509_EXTENSION *)0x0)) ||
                                (iVar17 = OPENSSL_sk_push(exts), iVar17 == 0)))) goto LAB_001026a9;
                          }
                        }
                      }
                      iVar15 = iVar15 + 1;
                    } while (iVar12 != iVar15);
                    iVar12 = OPENSSL_sk_num(exts);
                    if (iVar12 == 0) {
                      BIO_printf(local_270,"No extensions matched with %s\n",local_1e8);
                    }
                    else {
                      X509V3_extensions_print(local_270,(char *)0x0,exts,0,0);
                    }
                  }
                }
LAB_001026a9:
                OPENSSL_sk_free(exts);
                CRYPTO_free(ptr);
                CRYPTO_free(pcVar27);
              }
              goto LAB_00102294;
            }
            puVar38 = &_LC8;
            if (local_208 != (undefined *)0x0) {
              puVar38 = local_208;
            }
            uVar18 = app_get0_propq();
            uVar20 = app_get0_libctx();
            type = (EVP_MD *)EVP_MD_fetch(uVar20,puVar38,uVar18);
            if (type == (EVP_MD *)0x0) {
              BIO_printf(_bio_err,"Unknown digest\n");
            }
            else {
              iVar12 = X509_digest(local_288,type,local_88,(uint *)&local_d0);
              EVP_MD_free(type);
              if (iVar12 != 0) {
                lVar21 = 0;
                BIO_printf(local_270,"%s Fingerprint=",puVar38);
                while( true ) {
                  if ((int)local_d0 <= (int)lVar21) break;
                  pbVar1 = local_88 + lVar21;
                  uVar18 = 0x3a;
                  if ((int)local_d0 == (int)lVar21 + 1) {
                    uVar18 = 10;
                  }
                  lVar21 = lVar21 + 1;
                  BIO_printf(local_270,"%02X%c",(ulong)*pbVar1,uVar18);
                }
                goto LAB_00102294;
              }
              BIO_printf(_bio_err,"Out of memory\n");
            }
          }
        }
        else {
          BIO_printf(_bio_err,"Error getting public key\n");
LAB_00102f52:
          req = (X509_REQ *)0x0;
          pEVar22 = (EVP_PKEY *)0x0;
        }
        goto LAB_00100540;
      }
      if (local_260 != (ASN1_INTEGER *)0x0) {
LAB_00101dd6:
        if ((bVar40 || uVar39 != 0) || bVar3) {
LAB_00101ded:
          local_1f8 = local_248;
          goto LAB_00101dfa;
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
          if (0 < iVar12) goto LAB_00101ded;
        }
LAB_00102ec6:
        uVar39 = 1;
        req = (X509_REQ *)0x0;
        pEVar22 = (EVP_PKEY *)0x0;
        goto LAB_00100552;
      }
      uVar16 = 0;
      local_c8._0_8_ = (ASN1_INTEGER *)0x0;
      if (local_1f0 == (ASN1_INTEGER *)0x0) {
        pcVar29 = strrchr(pcVar27,0x2e);
        if (pcVar29 == (char *)0x0) {
          sVar28 = strlen(pcVar27);
        }
        else {
          sVar28 = (long)pcVar29 - (long)pcVar27;
        }
        local_260 = (ASN1_INTEGER *)app_malloc(sVar28 + 5,"serial# buffer");
        memcpy(local_260,pcVar27,sVar28);
        puVar37 = (undefined4 *)((long)&local_260->length + sVar28);
        uVar16 = 1;
        *puVar37 = 0x6c72732e;
        *(undefined1 *)(puVar37 + 1) = 0;
        local_1f0 = local_260;
      }
      pBVar34 = (BIGNUM *)load_serial(local_1f0,&local_d0,uVar4 | uVar16);
      if (pBVar34 != (BIGNUM *)0x0) {
        iVar12 = BN_add_word(pBVar34,1);
        if (iVar12 == 0) {
          BIO_printf(_bio_err,"Serial number increment failure\n");
        }
        else if (uVar4 == 0 && (int)local_d0 == 0) {
          local_c8._0_8_ = BN_to_ASN1_INTEGER(pBVar34,(ASN1_INTEGER *)0x0);
        }
        else {
          save_serial(local_1f0,0,pBVar34);
        }
      }
      CRYPTO_free(local_260);
      BN_free(pBVar34);
      local_260 = (ASN1_INTEGER *)local_c8._0_8_;
      if ((ASN1_INTEGER *)local_c8._0_8_ != (ASN1_INTEGER *)0x0) goto LAB_00101dd6;
    }
LAB_00101b0f:
    req = (X509_REQ *)0x0;
    pEVar22 = (EVP_PKEY *)0x0;
    uVar39 = 1;
    goto LAB_00100552;
  }
  local_288 = (X509 *)0x0;
  req = (X509_REQ *)0x0;
  pEVar22 = (EVP_PKEY *)0x0;
  conf = (CONF *)0x0;
  local_230 = 0;
  local_240 = (X509_REQ *)0x0;
  local_248 = (X509 *)0x0;
  local_250 = 0;
  local_258 = 0;
  local_238 = 0;
  local_268 = 0;
  local_280 = (X509_NAME *)0x0;
  local_278 = (X509_NAME *)0x0;
  local_220 = (EVP_PKEY *)0x0;
  local_228 = (EVP_PKEY *)0x0;
  local_270 = (BIO *)0x0;
  local_260 = (ASN1_INTEGER *)0x0;
LAB_00100540:
  uVar39 = 1;
  ERR_print_errors(_bio_err);
LAB_00100552:
  NCONF_free(conf);
  BIO_free_all(local_270);
  X509_STORE_free(ctx);
  X509_NAME_free(local_278);
  X509_NAME_free(local_280);
  X509_REQ_free(local_240);
  X509_free(local_288);
  X509_free(local_248);
  EVP_PKEY_free(local_228);
  EVP_PKEY_free(pEVar22);
  EVP_PKEY_free(local_220);
  OPENSSL_sk_free(local_258);
  OPENSSL_sk_free(local_250);
  X509_REQ_free(req);
  ASN1_INTEGER_free(local_260);
  OPENSSL_sk_pop_free(local_268,&ASN1_OBJECT_free);
  OPENSSL_sk_pop_free(local_238,&ASN1_OBJECT_free);
  release_engine(local_230);
  clear_free(local_e8);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar39;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00100648:
  if (0x644 < iVar12) {
    if (iVar12 == 0x646) {
      local_1e8 = (char *)opt_arg();
      local_118 = uVar13 + 1;
      uVar13 = local_118;
    }
    goto switchD_0010046f_caseD_0;
  }
  if (iVar12 < 0x641) {
    if (1 < iVar12 - 0x5ddU) goto switchD_0010046f_caseD_0;
    iVar12 = opt_rand();
  }
  else {
    iVar12 = opt_provider();
  }
  if (iVar12 != 0) goto switchD_0010046f_caseD_0;
LAB_00100678:
  uVar39 = 1;
LAB_00100edf:
  local_288 = (X509 *)0x0;
  pEVar22 = (EVP_PKEY *)0x0;
  conf = (CONF *)0x0;
  local_240 = (X509_REQ *)0x0;
  local_248 = (X509 *)0x0;
  local_280 = (X509_NAME *)0x0;
  local_278 = (X509_NAME *)0x0;
  local_220 = (EVP_PKEY *)0x0;
  local_228 = (EVP_PKEY *)0x0;
  local_270 = (BIO *)0x0;
  req = (X509_REQ *)0x0;
  goto LAB_00100552;
}


