
int cms_cb(int param_1,X509_STORE_CTX *param_2)

{
  verify_err = X509_STORE_CTX_get_error(param_2);
  if ((verify_err == 0x2b) || ((verify_err == 0 && (param_1 == 2)))) {
    policies_print(param_2);
  }
  return param_1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CMS_ContentInfo *
load_content_info(int param_1,BIO *param_2,undefined4 param_3,undefined8 param_4,undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  CMS_ContentInfo *pCVar3;
  CMS_ContentInfo *pCVar4;
  long in_FS_OFFSET;
  CMS_ContentInfo *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = app_get0_propq();
  uVar2 = app_get0_libctx();
  local_48 = (CMS_ContentInfo *)CMS_ContentInfo_new_ex(uVar2,uVar1);
  if (local_48 == (CMS_ContentInfo *)0x0) {
    BIO_printf(_bio_err,"Error allocating CMS_contentinfo\n");
  }
  else {
    if (param_1 == 0x8005) {
      pCVar3 = PEM_read_bio_CMS(param_2,&local_48,(undefined1 *)0x0,(void *)0x0);
LAB_00100111:
      pCVar4 = local_48;
      if (pCVar3 != (CMS_ContentInfo *)0x0) goto LAB_001000d1;
      BIO_printf(_bio_err,"Error reading %s Content Info\n",param_5);
    }
    else {
      if (param_1 == 0x8007) {
        pCVar3 = (CMS_ContentInfo *)SMIME_read_CMS_ex(param_2,param_3,param_4,&local_48);
        goto LAB_00100111;
      }
      if (param_1 == 4) {
        pCVar3 = d2i_CMS_bio(param_2,&local_48);
        goto LAB_00100111;
      }
      BIO_printf(_bio_err,"Bad input format for %s\n",param_5);
    }
    CMS_ContentInfo_free(local_48);
  }
  pCVar4 = (CMS_ContentInfo *)0x0;
LAB_001000d1:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pCVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



long make_names_stack(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  char *value;
  GENERAL_NAME *a;
  GENERAL_NAMES *a_00;
  int iVar3;
  
  lVar2 = OPENSSL_sk_new_null();
  if (lVar2 == 0) {
LAB_00100210:
    a = (GENERAL_NAME *)0x0;
    a_00 = (GENERAL_NAMES *)0x0;
  }
  else {
    iVar3 = 0;
    while( true ) {
      iVar1 = OPENSSL_sk_num(param_1);
      if (iVar1 <= iVar3) {
        return lVar2;
      }
      value = (char *)OPENSSL_sk_value();
      a = a2i_GENERAL_NAME((GENERAL_NAME *)0x0,(X509V3_EXT_METHOD *)0x0,(X509V3_CTX *)0x0,1,value,0)
      ;
      if (a == (GENERAL_NAME *)0x0) goto LAB_00100210;
      a_00 = GENERAL_NAMES_new();
      if (a_00 == (GENERAL_NAMES *)0x0) goto LAB_00100215;
      iVar1 = OPENSSL_sk_push(a_00,a);
      if (iVar1 == 0) goto LAB_00100215;
      iVar1 = OPENSSL_sk_push(lVar2,a_00);
      if (iVar1 == 0) break;
      iVar3 = iVar3 + 1;
    }
    a = (GENERAL_NAME *)0x0;
  }
LAB_00100215:
  OPENSSL_sk_pop_free(lVar2,GENERAL_NAMES_free);
  GENERAL_NAMES_free(a_00);
  GENERAL_NAME_free(a);
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 cms_set_pkey_param(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = OPENSSL_sk_num(param_2);
  if (0 < iVar1) {
    for (; iVar1 = OPENSSL_sk_num(param_2), iVar3 < iVar1; iVar3 = iVar3 + 1) {
      uVar2 = OPENSSL_sk_value(param_2,iVar3);
      iVar1 = pkey_ctrl_string(param_1,uVar2);
      if (iVar1 < 1) {
        BIO_printf(_bio_err,"parameter error \"%s\"\n",uVar2);
        ERR_print_errors(_bio_err);
        return 0;
      }
    }
  }
  return 1;
}



undefined8 save_certs(char *param_1,undefined8 param_2)

{
  int iVar1;
  BIO *bp;
  X509 *x;
  int iVar2;
  
  if (param_1 == (char *)0x0) {
    return 1;
  }
  bp = BIO_new_file(param_1,"w");
  if (bp != (BIO *)0x0) {
    iVar2 = 0;
    while( true ) {
      iVar1 = OPENSSL_sk_num(param_2);
      if (iVar1 <= iVar2) break;
      x = (X509 *)OPENSSL_sk_value(param_2,iVar2);
      PEM_write_bio_X509(bp,x);
      iVar2 = iVar2 + 1;
    }
    BIO_free(bp);
    return 1;
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gnames_stack_print(undefined8 param_1)

{
  undefined8 uVar1;
  GENERAL_NAME *gen;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar2 = OPENSSL_sk_num(param_1);
  if (0 < iVar2) {
    do {
      uVar1 = OPENSSL_sk_value(param_1,iVar4);
      for (iVar2 = 0; iVar3 = OPENSSL_sk_num(uVar1), iVar2 < iVar3; iVar2 = iVar2 + 1) {
        gen = (GENERAL_NAME *)OPENSSL_sk_value(uVar1,iVar2);
        BIO_puts(_bio_err,"    ");
        GENERAL_NAME_print(_bio_err,gen);
        BIO_puts(_bio_err,"\n");
      }
      iVar4 = iVar4 + 1;
      iVar2 = OPENSSL_sk_num(param_1);
    } while (iVar4 < iVar2);
  }
  return;
}



/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int cms_main(undefined4 param_1,undefined8 param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  X509_VERIFY_PARAM *pm;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long *plVar14;
  X509 *pXVar15;
  EVP_PKEY *pEVar16;
  CMS_ContentInfo *ptr;
  stack_st_X509 *psVar17;
  long lVar18;
  ASN1_PCTX *p;
  EVP_PKEY *pk;
  stack_st_CMS_SignerInfo *psVar19;
  CMS_SignerInfo *si;
  CMS_RecipientInfo *pCVar20;
  EVP_PKEY_CTX *ctx;
  EVP_CIPHER_CTX *ctx_00;
  long lVar21;
  BIO **ppBVar22;
  BIO **ppBVar23;
  undefined4 uVar24;
  int *ptr_00;
  int *piVar25;
  char *mode;
  bool bVar26;
  char *pcVar27;
  uint uVar28;
  ulong uVar29;
  long in_FS_OFFSET;
  CMS_ContentInfo *local_218;
  CMS_ContentInfo *local_210;
  X509 *local_208;
  CMS_SignerInfo *local_200;
  CMS_ContentInfo *local_1f8;
  X509_STORE *local_1f0;
  long local_1e8;
  BIO *local_1e0;
  long local_1d8;
  BIO *local_1d0;
  X509 *local_1c8;
  char *local_1c0;
  BIO *local_1b8;
  uchar *local_1b0;
  X509 *local_1a8;
  long local_1a0;
  long local_198;
  uchar *local_190;
  ASN1_OBJECT *local_188;
  undefined8 local_178;
  CONF *local_168;
  uint local_15c;
  long local_158;
  int local_150;
  uchar *local_148;
  size_t local_140;
  long local_138;
  undefined *local_130;
  size_t local_128;
  long local_120;
  long local_118;
  int local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined4 local_ec;
  undefined8 local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  undefined4 local_b4;
  int local_b0;
  int local_ac;
  undefined4 local_a8;
  int local_a4;
  BIO *local_a0;
  EVP_CIPHER *local_98;
  EVP_CIPHER *local_90;
  EVP_MD *local_88;
  stack_st_X509 *local_80;
  ulong local_78;
  BIO **local_70;
  size_t local_68;
  CMS_ReceiptRequest *local_60;
  undefined8 local_58;
  long local_50;
  ASN1_STRING *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_a0 = (BIO *)0x0;
  local_98 = (EVP_CIPHER *)0x0;
  local_90 = (EVP_CIPHER *)0x0;
  local_88 = (EVP_MD *)0x0;
  lVar10 = OPENSSL_sk_new_null();
  local_80 = (stack_st_X509 *)0x0;
  pm = X509_VERIFY_PARAM_new();
  local_78 = 0;
  local_70 = (BIO **)0x0;
  local_b4 = 0x8007;
  local_b0 = 0x8007;
  local_ac = 0x8007;
  local_a8 = 0;
  uVar11 = app_get0_libctx();
  if ((lVar10 != 0) && (pm != (X509_VERIFY_PARAM *)0x0)) {
    ptr_00 = (int *)0x0;
    lVar18 = 0;
    opt_set_unknown_name("cipher");
    uVar12 = opt_init(param_1,param_2,cms_options);
    local_218 = (CMS_ContentInfo *)0x0;
    uVar29 = 0x40;
    local_130 = &_LC6;
    local_190 = (uchar *)0x0;
    local_1b0 = (uchar *)0x0;
    local_148 = (uchar *)0x0;
    local_128 = 0;
    local_140 = 0;
    bVar5 = false;
    local_150 = -1;
    bVar4 = false;
    local_15c = 0;
    local_10c = 0;
    bVar3 = false;
    bVar2 = false;
    local_1f8 = (CMS_ContentInfo *)0x0;
    local_118 = 0;
    local_d0 = 0;
    local_d8 = 0;
    local_1d0 = (BIO *)0x0;
    local_c8 = 0;
    local_208 = (X509 *)0x0;
    local_158 = 0;
    local_1a8 = (X509 *)0x0;
    local_210 = (CMS_ContentInfo *)0x0;
    local_e0 = 0;
    local_138 = 0;
    local_ec = 0;
    local_1e0 = (BIO *)0x0;
    local_1f0 = (X509_STORE *)0x0;
    local_120 = 0;
    local_100 = 0;
    local_108 = 0;
    local_1c0 = (char *)0x0;
    local_1b8 = (BIO *)0x0;
    local_1e8 = 0;
    local_1d8 = 0;
    local_1a0 = 0;
    local_198 = 0;
    local_178 = 0;
    local_188 = (ASN1_OBJECT *)0x0;
    local_168 = (CONF *)0x0;
switchD_00100a4e_caseD_0:
    iVar6 = opt_next();
    uVar8 = (uint)uVar29;
    if (iVar6 != 0) {
LAB_00100a35:
      if (0x50 < iVar6) goto LAB_00100a58;
      if (iVar6 < -1) goto switchD_00100a4e_caseD_0;
      switch(iVar6) {
      default:
        goto switchD_00100a4e_caseD_0;
      case 1:
        pXVar15 = (X509 *)0x0;
        pEVar16 = (EVP_PKEY *)0x0;
        opt_help(cms_options);
        local_218 = (CMS_ContentInfo *)0x0;
        iVar6 = 0;
        local_200 = (CMS_SignerInfo *)0x0;
        local_1c0 = (char *)0x0;
        local_1f0 = (X509_STORE *)0x0;
        local_208 = (X509 *)0x0;
        local_1c8 = (X509 *)0x0;
        local_1a8 = (X509 *)0x0;
        local_1f8 = (CMS_ContentInfo *)0x0;
        local_210 = (CMS_ContentInfo *)0x0;
        local_1b8 = (BIO *)0x0;
        local_1e0 = (BIO *)0x0;
        local_1d0 = (BIO *)0x0;
        goto LAB_0010060a;
      case 2:
        uVar13 = opt_arg();
        iVar6 = opt_format(uVar13,0x26,&local_b4);
        break;
      case 3:
        uVar13 = opt_arg();
        iVar6 = opt_format(uVar13,0x26,&local_b0);
        break;
      case 4:
        local_218 = (CMS_ContentInfo *)opt_arg();
        goto switchD_00100a4e_caseD_0;
      case 5:
        local_e0 = opt_arg();
        goto switchD_00100a4e_caseD_0;
      case 6:
        local_15c = 0x101;
        goto switchD_00100a4e_caseD_0;
      case 7:
        local_15c = 0x202;
        goto switchD_00100a4e_caseD_0;
      case 8:
        local_15c = 0x503;
        goto switchD_00100a4e_caseD_0;
      case 9:
        uVar29 = (ulong)(uVar8 | 0x100000);
        goto switchD_00100a4e_caseD_0;
      case 10:
        local_15c = 0x306;
        goto switchD_00100a4e_caseD_0;
      case 0xb:
        local_15c = 0x705;
        goto switchD_00100a4e_caseD_0;
      case 0xc:
        local_15c = 0x204;
        goto switchD_00100a4e_caseD_0;
      case 0xd:
        bVar5 = true;
        goto switchD_00100a4e_caseD_0;
      case 0xe:
        local_210 = (CMS_ContentInfo *)opt_arg();
        local_15c = 0x207;
        goto switchD_00100a4e_caseD_0;
      case 0xf:
        local_15c = 0x310;
        goto switchD_00100a4e_caseD_0;
      case 0x10:
        local_15c = 0x20f;
        goto switchD_00100a4e_caseD_0;
      case 0x11:
        local_15c = 0x10e;
        goto switchD_00100a4e_caseD_0;
      case 0x12:
        local_15c = 0x209;
        goto switchD_00100a4e_caseD_0;
      case 0x13:
        local_138 = opt_arg();
        goto switchD_00100a4e_caseD_0;
      case 0x14:
        local_15c = 0x108;
        goto switchD_00100a4e_caseD_0;
      case 0x15:
        local_15c = 0x10a;
        goto switchD_00100a4e_caseD_0;
      case 0x16:
        local_15c = 0x20b;
        goto switchD_00100a4e_caseD_0;
      case 0x17:
        local_15c = 0x20d;
        goto switchD_00100a4e_caseD_0;
      case 0x18:
        local_15c = 0x10c;
        goto switchD_00100a4e_caseD_0;
      case 0x19:
        uVar29 = (ulong)(uVar8 | 0x20000);
        goto switchD_00100a4e_caseD_0;
      case 0x1a:
        uVar29 = (ulong)(uVar8 | 1);
        goto switchD_00100a4e_caseD_0;
      case 0x1b:
        uVar29 = (ulong)(uVar8 | 0x80000);
        goto switchD_00100a4e_caseD_0;
      case 0x1c:
        uVar29 = (ulong)(uVar8 | 0x10);
        goto switchD_00100a4e_caseD_0;
      case 0x1d:
        uVar29 = (ulong)(uVar8 | 0x20);
        goto switchD_00100a4e_caseD_0;
      case 0x1e:
        uVar29 = (ulong)(uVar8 | 2);
        goto switchD_00100a4e_caseD_0;
      case 0x1f:
        uVar29 = (ulong)(uVar8 | 0x100);
        goto switchD_00100a4e_caseD_0;
      case 0x20:
        uVar29 = (ulong)(uVar8 & 0xffffffbf);
        goto switchD_00100a4e_caseD_0;
      case 0x21:
        uVar29 = (ulong)(uVar8 | 0x200);
        goto switchD_00100a4e_caseD_0;
      case 0x22:
        uVar29 = (ulong)(uVar8 | 0x400000);
        goto switchD_00100a4e_caseD_0;
      case 0x23:
        uVar29 = uVar29 | 0x80;
        goto switchD_00100a4e_caseD_0;
      case 0x24:
        uVar29 = (ulong)(uVar8 | 0x10000);
        goto switchD_00100a4e_caseD_0;
      case 0x25:
        uVar29 = (ulong)(uVar8 | 0xc);
        goto switchD_00100a4e_caseD_0;
      case 0x26:
        uVar29 = (ulong)(uVar8 | 4);
        goto switchD_00100a4e_caseD_0;
      case 0x27:
        uVar29 = (ulong)(uVar8 | 8);
        goto switchD_00100a4e_caseD_0;
      case 0x28:
        uVar29 = (ulong)(uVar8 | 0x1000);
        goto switchD_00100a4e_caseD_0;
      case 0x29:
        uVar29 = (ulong)(uVar8 & 0xffffefff);
        goto switchD_00100a4e_caseD_0;
      case 0x2a:
        uVar29 = (ulong)(uVar8 | 0x800);
        local_130 = &_LC7;
        goto switchD_00100a4e_caseD_0;
      case 0x2b:
        goto switchD_00100a4e_caseD_2b;
      case 0x2c:
        bVar4 = true;
        goto switchD_00100a4e_caseD_0;
      case 0x2d:
        local_150 = 0;
        goto switchD_00100a4e_caseD_0;
      case 0x2e:
        local_150 = 1;
        goto switchD_00100a4e_caseD_0;
      case 0x2f:
        uVar13 = opt_arg();
        iVar6 = opt_format(uVar13,0x26,&local_ac);
        break;
      case 0x30:
        local_1b8 = (BIO *)opt_arg();
        goto switchD_00100a4e_caseD_0;
      case 0x31:
        local_108 = opt_arg();
        goto switchD_00100a4e_caseD_0;
      case 0x32:
        local_100 = opt_arg();
        goto switchD_00100a4e_caseD_0;
      case 0x33:
        opt_arg();
        goto switchD_00100a4e_caseD_0;
      case 0x34:
        goto switchD_00100a4e_caseD_0;
      case 0x35:
        local_ec = 1;
        goto switchD_00100a4e_caseD_0;
      case 0x36:
        goto switchD_00100a4e_caseD_0;
      case 0x37:
        local_1c0 = (char *)opt_arg();
        goto switchD_00100a4e_caseD_0;
      case 0x38:
        bVar3 = true;
switchD_00100a4e_caseD_2b:
        bVar2 = true;
        iVar6 = opt_next();
        if (iVar6 == 0) {
          iVar6 = 0;
          goto LAB_00100b10;
        }
        goto LAB_00100a35;
      case 0x39:
        uVar13 = opt_arg();
        iVar6 = set_nameopt(uVar13);
        break;
      case 0x3a:
        if (local_1b0 != (uchar *)0x0) {
          uVar11 = opt_arg();
          BIO_printf(_bio_err,"Invalid key (supplied twice) %s\n",uVar11);
          goto switchD_00100a4e_caseD_ffffffff;
        }
        uVar13 = opt_arg();
        local_1b0 = (uchar *)OPENSSL_hexstr2buf(uVar13);
        if (local_1b0 != (uchar *)0x0) {
          local_140 = local_68;
          goto switchD_00100a4e_caseD_0;
        }
        uVar11 = opt_arg();
        BIO_printf(_bio_err,"Invalid key %s\n",uVar11);
        goto LAB_00101902;
      case 0x3b:
        if (local_190 != (uchar *)0x0) {
          uVar11 = opt_arg();
          BIO_printf(_bio_err,"Invalid id (supplied twice) %s\n",uVar11);
          goto switchD_00100a4e_caseD_ffffffff;
        }
        uVar13 = opt_arg();
        local_190 = (uchar *)OPENSSL_hexstr2buf(uVar13);
        if (local_190 != (uchar *)0x0) {
          local_128 = local_68;
          goto switchD_00100a4e_caseD_0;
        }
        uVar11 = opt_arg();
        BIO_printf(_bio_err,"Invalid id %s\n",uVar11);
        goto switchD_00100a4e_caseD_ffffffff;
      case 0x3c:
        local_148 = (uchar *)opt_arg();
        goto switchD_00100a4e_caseD_0;
      case 0x3d:
        if (local_188 == (ASN1_OBJECT *)0x0) {
          pcVar27 = (char *)opt_arg();
          local_188 = OBJ_txt2obj(pcVar27,0);
          if (local_188 != (ASN1_OBJECT *)0x0) goto switchD_00100a4e_caseD_0;
          uVar11 = opt_arg();
          BIO_printf(_bio_err,"Invalid OID %s\n",uVar11);
        }
        else {
          uVar11 = opt_arg();
          BIO_printf(_bio_err,"Invalid OID (supplied twice) %s\n",uVar11);
        }
        goto switchD_00100a4e_caseD_ffffffff;
      case 0x3e:
        local_1a8 = (X509 *)opt_arg();
        goto switchD_00100a4e_caseD_0;
      case 0x3f:
        local_d8 = opt_arg();
        goto switchD_00100a4e_caseD_0;
      case 0x40:
        local_d0 = opt_arg();
        goto switchD_00100a4e_caseD_0;
      case 0x41:
        local_118 = opt_arg();
        goto switchD_00100a4e_caseD_0;
      case 0x42:
        if (local_158 != 0) {
          if ((local_1d8 == 0) && (local_1d8 = OPENSSL_sk_new_null(), local_1d8 == 0))
          goto LAB_00101902;
          iVar6 = OPENSSL_sk_push(local_1d8,local_158);
          if (iVar6 < 1) goto LAB_00100ff2;
          if ((local_1e8 == 0) && (local_1e8 = OPENSSL_sk_new_null(), local_1e8 == 0))
          goto LAB_00101902;
          iVar6 = OPENSSL_sk_push(local_1e8);
          if (iVar6 < 1) goto LAB_00100ff2;
          lVar18 = 0;
        }
        local_158 = opt_arg();
        goto switchD_00100a4e_caseD_0;
      case 0x43:
        if (local_15c != 0x101) {
          local_c8 = opt_arg();
          goto switchD_00100a4e_caseD_0;
        }
        uVar13 = opt_arg();
        pXVar15 = (X509 *)load_cert_pass(uVar13,0,1);
        if (pXVar15 == (X509 *)0x0) goto LAB_00101947;
        iVar6 = OPENSSL_sk_push(lVar10);
        if (iVar6 != 0) goto switchD_00100a4e_caseD_0;
        iVar6 = 1;
        goto LAB_00101a2e;
      case 0x44:
        local_120 = opt_arg();
        goto switchD_00100a4e_caseD_0;
      case 0x45:
        local_1f0 = (X509_STORE *)opt_arg();
        goto switchD_00100a4e_caseD_0;
      case 0x46:
        if (lVar18 != 0) {
          if (local_158 == 0) {
            BIO_puts(_bio_err,"Illegal -inkey without -signer\n");
            goto LAB_00101902;
          }
          if ((local_1d8 == 0) && (local_1d8 = OPENSSL_sk_new_null(), local_1d8 == 0))
          goto LAB_00101902;
          iVar6 = OPENSSL_sk_push(local_1d8,local_158);
          if (iVar6 < 1) goto LAB_00100ff2;
          if ((local_1e8 == 0) && (local_1e8 = OPENSSL_sk_new_null(), local_1e8 == 0))
          goto LAB_00101902;
          iVar6 = OPENSSL_sk_push(local_1e8);
          if (iVar6 < 1) goto LAB_00100ff2;
          local_158 = 0;
        }
        lVar18 = opt_arg();
        goto switchD_00100a4e_caseD_0;
      case 0x47:
        uVar13 = opt_arg();
        iVar6 = opt_format(uVar13,0xffe,&local_a8);
        break;
      case 0x48:
        if (local_15c == 0x101) {
          iVar6 = OPENSSL_sk_num(lVar10);
          if (0 < iVar6) {
            iVar6 = OPENSSL_sk_num(lVar10);
            iVar6 = iVar6 + -1;
            goto LAB_00101419;
          }
LAB_00100fc0:
          BIO_printf(_bio_err,"No key specified\n");
          goto switchD_00100a4e_caseD_ffffffff;
        }
        if (local_158 == 0 && lVar18 == 0) {
          if (local_1e8 == 0) goto LAB_00100fc0;
          iVar7 = -1;
LAB_0010140c:
          iVar6 = OPENSSL_sk_num(local_1e8);
          iVar6 = iVar7 + iVar6;
LAB_00101419:
          if (iVar6 < 0) goto LAB_00100fc0;
        }
        else {
          iVar6 = 0;
          iVar7 = 0;
          if (local_1e8 != 0) goto LAB_0010140c;
        }
        if ((local_1f8 == (CMS_ContentInfo *)0x0) ||
           (piVar25 = ptr_00, ptr = local_1f8, *(int *)local_1f8 != iVar6)) {
          ptr = (CMS_ContentInfo *)app_malloc(0x18,"key param buffer");
          lVar21 = OPENSSL_sk_new_null();
          *(long *)((long)ptr + 8) = lVar21;
          if (lVar21 == 0) {
            pXVar15 = (X509 *)0x0;
            CRYPTO_free(ptr);
            goto LAB_00101947;
          }
          *(int *)ptr = iVar6;
          *(int *)((long)ptr + 0x10) = 0;
          *(int *)((long)ptr + 0x14) = 0;
          piVar25 = (int *)ptr;
          if (ptr_00 != (int *)0x0) {
            *(CMS_ContentInfo **)((long)local_1f8 + 0x10) = ptr;
            piVar25 = ptr_00;
          }
        }
        local_1f8 = ptr;
        opt_arg();
        iVar6 = OPENSSL_sk_push(*(undefined8 *)((long)local_1f8 + 8));
        ptr_00 = piVar25;
        goto joined_r0x0010167e;
      case 0x49:
        if ((local_1a0 != 0) || (local_1a0 = OPENSSL_sk_new_null(), local_1a0 != 0)) {
          opt_arg();
          iVar6 = OPENSSL_sk_push(local_1a0);
          goto joined_r0x0010167e;
        }
        goto LAB_00101902;
      case 0x4a:
        if ((local_198 == 0) && (local_198 = OPENSSL_sk_new_null(), local_198 == 0))
        goto LAB_00101902;
        opt_arg();
        iVar6 = OPENSSL_sk_push(local_198);
joined_r0x0010167e:
        if (0 < iVar6) goto switchD_00100a4e_caseD_0;
        goto LAB_00100ff2;
      case 0x4b:
      case 0x4c:
      case 0x4d:
      case 0x4e:
        lVar21 = opt_flag();
        local_1e0 = (BIO *)(lVar21 + 1);
        goto switchD_00100a4e_caseD_0;
      case 0x4f:
        local_1e0 = (BIO *)opt_arg();
        goto switchD_00100a4e_caseD_0;
      case 0x50:
        uVar13 = opt_arg();
        local_178 = setup_engine_methods(uVar13,0xffffffff,0);
        goto switchD_00100a4e_caseD_0;
      case -1:
        goto switchD_00100a4e_caseD_ffffffff;
      }
      if (iVar6 != 0) goto switchD_00100a4e_caseD_0;
      goto switchD_00100a4e_caseD_ffffffff;
    }
LAB_00100b10:
    iVar7 = app_RAND_load();
    if ((iVar7 == 0) ||
       ((((local_1f0 != (X509_STORE *)0x0 && (iVar7 = opt_md(local_1f0,&local_88), iVar7 == 0)) ||
         (iVar7 = opt_cipher_any(local_1d0), iVar7 == 0)) ||
        ((local_1e0 != (BIO *)0x0 && (iVar7 = opt_cipher_any(local_1e0), iVar7 == 0))))))
    goto LAB_00100ff2;
    plVar14 = (long *)opt_rest();
    if ((local_150 != -1) || (local_1a0 != 0)) {
      if (local_198 != 0) {
        if ((local_15c & 0x400) == 0) goto LAB_00101abc;
        goto LAB_00101ad4;
      }
      BIO_puts(_bio_err,"No Signed Receipts Recipients\n");
switchD_00100a4e_caseD_ffffffff:
      BIO_printf(_bio_err,"%s: Use -help for summary.\n",uVar12);
      goto LAB_00100ff2;
    }
    if ((local_15c & 0x400) == 0) {
      if (local_198 != 0) {
LAB_00101abc:
        BIO_puts(_bio_err,"Signed receipts only allowed with -sign\n");
        goto switchD_00100a4e_caseD_ffffffff;
      }
      if (local_1e8 != 0 || local_1d8 != 0) {
        BIO_puts(_bio_err,"Multiple signers or keys not allowed\n");
        local_1a0 = 0;
        goto switchD_00100a4e_caseD_ffffffff;
      }
      if ((uVar29 & 0x100000) == 0) {
LAB_00101c9f:
        if (local_15c == 0x202) {
          if ((local_c8 == 0 && lVar18 == 0) &&
             (lVar18 = 0, local_148 == (uchar *)0x0 && local_1b0 == (uchar *)0x0)) {
            BIO_printf(_bio_err,"No recipient certificate or key specified\n");
LAB_00101ce8:
            local_1a0 = 0;
            local_1b0 = (uchar *)0x0;
            local_1e8 = 0;
            local_1d8 = 0;
            goto switchD_00100a4e_caseD_ffffffff;
          }
        }
        else if (local_15c == 0x101) {
          if (((*plVar14 == 0) && (local_1b0 == (uchar *)0x0 && local_148 == (uchar *)0x0)) &&
             (iVar7 = OPENSSL_sk_num(lVar10), iVar7 < 1)) {
            BIO_printf(_bio_err,"No recipient(s) certificate(s) specified\n");
            goto LAB_00101ce8;
          }
        }
        else if (local_15c == 0) {
          BIO_printf(_bio_err,
                     "No operation option (-encrypt|-decrypt|-sign|-verify|...) specified.\n");
          local_1a0 = 0;
          local_1e8 = 0;
          local_1d8 = 0;
          goto switchD_00100a4e_caseD_ffffffff;
        }
      }
      else {
        if ((uVar29 & 0x100) != 0) goto LAB_00101fd8;
        if (local_15c != 0x204) goto LAB_00101c9f;
        if ((uVar29 & 0x28) != 0) {
          BIO_puts(_bio_err,
                   "Incompatible options: CAdES validation requires certs and signed attributes validations\n"
                  );
          local_1a0 = 0;
          local_1e8 = 0;
          local_1d8 = 0;
          goto switchD_00100a4e_caseD_ffffffff;
        }
      }
      ppBVar22 = (BIO **)0x0;
      iVar7 = app_passwd(local_1a8,0,&local_70);
      if (iVar7 != 0) {
        if ((uVar29 & 0x40) == 0) {
          BIO_printf(_bio_err,"Warning: -nodetach option is ignored for non-signing operation\n");
        }
        uVar29 = (ulong)(uVar8 & 0xffffffbf);
        if ((local_15c & 0x200) == 0) {
          local_1e8 = 0;
          local_1d8 = 0;
          bVar1 = false;
          if (local_1c0 != (char *)0x0) {
LAB_00100ca7:
            BIO_printf(_bio_err,"Warning: -contfile option is ignored for the given operation\n");
          }
          bVar26 = false;
          if (local_15c != 0x101) goto LAB_00101bcf;
          if (((uVar29 & 0x80) == 0) || (local_b4 = 2, !bVar1)) {
            if (local_98 == (EVP_CIPHER *)0x0) {
              local_98 = EVP_aes_256_cbc();
            }
            bVar26 = local_1b0 != (uchar *)0x0 && local_190 == (uchar *)0x0;
            pcVar27 = (char *)(ulong)bVar26;
            if (bVar26) {
              BIO_printf(_bio_err,"No secret key id\n");
              local_190 = (uchar *)0x0;
              iVar6 = 2;
              goto LAB_00101001;
            }
            lVar21 = *plVar14;
            if (lVar21 != 0) goto LAB_00101ec1;
            bVar26 = false;
            uVar8 = 0;
            uVar28 = 0;
            if (local_1b8 == (BIO *)0x0) goto LAB_00101d70;
            goto LAB_00100d21;
          }
        }
        else {
          local_1e8 = 0;
          bVar26 = true;
          local_1d8 = 0;
          bVar1 = false;
LAB_00101bcf:
          if (*plVar14 != 0) {
            BIO_printf(_bio_err,
                       "Warning: recipient certificate file parameters ignored for operation other than -encrypt\n"
                      );
          }
          if ((uVar29 & 0x80) == 0) {
            uVar8 = 0;
            goto LAB_00100d19;
          }
          if ((local_15c & 0x100) == 0) {
            local_b0 = 2;
          }
          if (bVar26) {
            bVar26 = true;
            uVar8 = (uint)(uVar29 >> 6) & 1;
            if (!bVar1) {
              uVar8 = 0;
            }
            if (local_1c0 == (char *)0x0) {
              uVar8 = 1;
            }
            goto LAB_00100d19;
          }
          local_b4 = 2;
          if (!bVar1) {
            uVar8 = 0;
            goto LAB_00100d19;
          }
        }
        local_b4 = 2;
        bVar26 = false;
        bVar1 = true;
        uVar8 = (uint)(uVar29 >> 6) & 1;
        goto LAB_00100d19;
      }
      local_1e8 = 0;
      local_1d8 = 0;
LAB_00101f6c:
      BIO_printf(_bio_err,"Error getting password\n");
      goto LAB_00100ff2;
    }
LAB_00101ad4:
    if (((uVar29 & 0x100000) != 0) && ((uVar29 & 0x100) != 0)) {
LAB_00101fd8:
      BIO_puts(_bio_err,"Incompatible options: CAdES requires signed attributes\n");
      goto switchD_00100a4e_caseD_ffffffff;
    }
    if (lVar18 == 0) {
      if (local_158 != 0) goto LAB_00101b02;
      if (local_1d8 == 0) {
        BIO_printf(_bio_err,"No signer certificate specified\n");
        goto switchD_00100a4e_caseD_ffffffff;
      }
LAB_00101b69:
      ppBVar22 = (BIO **)0x0;
      iVar7 = app_passwd(local_1a8,0,&local_70);
      if (iVar7 != 0) {
        if ((local_15c & 0x200) == 0) {
          lVar18 = 0;
          local_158 = 0;
          bVar1 = true;
          bVar26 = false;
          if (local_1c0 != (char *)0x0) goto LAB_00100ca7;
        }
        else {
          local_158 = 0;
          lVar18 = 0;
          bVar26 = true;
          bVar1 = true;
        }
        goto LAB_00101bcf;
      }
      goto LAB_00101f6c;
    }
    if (local_158 == 0) {
      BIO_puts(_bio_err,"Illegal -inkey without -signer\n");
      goto switchD_00100a4e_caseD_ffffffff;
    }
LAB_00101b02:
    if ((local_1d8 == 0) && (local_1d8 = OPENSSL_sk_new_null(), local_1d8 == 0)) goto LAB_00101902;
    iVar7 = OPENSSL_sk_push(local_1d8,local_158);
    if (iVar7 < 1) goto LAB_00100ff2;
    if ((local_1e8 != 0) || (local_1e8 = OPENSSL_sk_new_null(), local_1e8 != 0)) {
      iVar7 = OPENSSL_sk_push(local_1e8);
      if (0 < iVar7) goto LAB_00101b69;
      goto LAB_00100ff2;
    }
    goto LAB_00101902;
  }
  local_1b0 = (uchar *)0x0;
  ptr_00 = (int *)0x0;
  pXVar15 = (X509 *)0x0;
  iVar6 = 1;
  local_190 = (uchar *)0x0;
  local_200 = (CMS_SignerInfo *)0x0;
  local_1c0 = (char *)0x0;
  local_1f0 = (X509_STORE *)0x0;
  local_208 = (X509 *)0x0;
  local_1c8 = (X509 *)0x0;
  local_1a8 = (X509 *)0x0;
  local_1e8 = 0;
  local_1d8 = 0;
  local_1a0 = 0;
  local_198 = 0;
  local_178 = 0;
  local_1f8 = (CMS_ContentInfo *)0x0;
  local_210 = (CMS_ContentInfo *)0x0;
  local_218 = (CMS_ContentInfo *)0x0;
  local_1b8 = (BIO *)0x0;
  local_1e0 = (BIO *)0x0;
  local_1d0 = (BIO *)0x0;
  local_188 = (ASN1_OBJECT *)0x0;
  local_168 = (CONF *)0x0;
  pEVar16 = (EVP_PKEY *)0x0;
  goto LAB_001005ee;
LAB_00100a58:
  if (0x7ee < iVar6) {
    if (iVar6 == 0x7f0) {
      local_1d0 = (BIO *)opt_unknown();
    }
    else if (iVar6 == 0x7f1) {
      local_208 = (X509 *)opt_arg();
    }
    goto switchD_00100a4e_caseD_0;
  }
  if (2000 < iVar6) {
    iVar6 = opt_verify(iVar6);
    if (iVar6 == 0) goto LAB_00100ff2;
    local_10c = local_10c + 1;
    goto switchD_00100a4e_caseD_0;
  }
  if (iVar6 < 0x645) {
    if (iVar6 < 0x641) {
      if (1 < iVar6 - 0x5ddU) goto switchD_00100a4e_caseD_0;
      iVar6 = opt_rand(iVar6);
    }
    else {
      iVar6 = opt_provider(iVar6);
    }
    if (iVar6 == 0) goto LAB_00100ff2;
    goto switchD_00100a4e_caseD_0;
  }
  if (iVar6 != 0x646) goto switchD_00100a4e_caseD_0;
  uVar13 = opt_arg();
  local_168 = (CONF *)app_load_config_modules(uVar13);
  if (local_168 != (CONF *)0x0) goto switchD_00100a4e_caseD_0;
LAB_00101902:
  pXVar15 = (X509 *)0x0;
LAB_00101947:
  local_1f8 = (CMS_ContentInfo *)0x0;
  local_1a8 = (X509 *)0x0;
  local_1c0 = (char *)0x0;
  local_1c8 = (X509 *)0x0;
  local_1f0 = (X509_STORE *)0x0;
  local_200 = (CMS_SignerInfo *)0x0;
  local_208 = (X509 *)0x0;
  local_210 = (CMS_ContentInfo *)0x0;
  iVar6 = 1;
  local_218 = (CMS_ContentInfo *)0x0;
  local_1b8 = (BIO *)0x0;
  local_1e0 = (BIO *)0x0;
  local_1d0 = (BIO *)0x0;
  pEVar16 = (EVP_PKEY *)0x0;
  goto LAB_001005ee;
LAB_00101ec1:
  ppBVar22 = (BIO **)0x0;
  pXVar15 = (X509 *)load_cert_pass(lVar21,0,1);
  if (pXVar15 != (X509 *)0x0) {
    iVar7 = OPENSSL_sk_push(lVar10);
    if (iVar7 != 0) goto code_r0x00101eb0;
    iVar6 = 2;
LAB_00101a2e:
    local_1a8 = (X509 *)0x0;
    goto LAB_00101031;
  }
  pEVar16 = (EVP_PKEY *)0x0;
  local_208 = (X509 *)0x0;
  local_1c8 = (X509 *)0x0;
  local_1a8 = (X509 *)0x0;
  goto LAB_00101f1a;
code_r0x00101eb0:
  lVar21 = plVar14[1];
  plVar14 = plVar14 + 1;
  if (lVar21 == 0) goto LAB_00102373;
  goto LAB_00101ec1;
LAB_00100ff2:
  iVar6 = 1;
LAB_00101001:
  pXVar15 = (X509 *)0x0;
  local_1a8 = (X509 *)0x0;
LAB_00101031:
  local_1c8 = (X509 *)0x0;
  local_208 = (X509 *)0x0;
  pEVar16 = (EVP_PKEY *)0x0;
LAB_00101034:
  local_1c0 = (char *)0x0;
  local_1f0 = (X509_STORE *)0x0;
  local_200 = (CMS_SignerInfo *)0x0;
  local_1f8 = (CMS_ContentInfo *)0x0;
  local_210 = (CMS_ContentInfo *)0x0;
  local_218 = (CMS_ContentInfo *)0x0;
  local_1b8 = (BIO *)0x0;
  local_1e0 = (BIO *)0x0;
  local_1d0 = (BIO *)0x0;
  goto LAB_001005ee;
LAB_00102373:
  uVar8 = 0;
  bVar26 = false;
LAB_00100d19:
  uVar28 = uVar8;
  if (local_1b8 != (BIO *)0x0) {
LAB_00100d21:
    uVar8 = uVar28;
    ppBVar22 = (BIO **)0x0;
    iVar7 = load_certs(local_1b8,0,&local_80);
    if (iVar7 == 0) {
      ERR_print_errors(_bio_err);
      iVar6 = 2;
      goto LAB_00101001;
    }
  }
  pcVar27 = (char *)(ulong)(local_15c == 0x202);
  if ((local_c8 != 0) && (local_15c == 0x202)) {
    ppBVar22 = (BIO **)0x0;
    local_1a8 = (X509 *)load_cert_pass(local_c8,0,1);
    if (local_1a8 == (X509 *)0x0) {
      pXVar15 = (X509 *)0x0;
      pEVar16 = (EVP_PKEY *)0x0;
      ERR_print_errors(_bio_err);
      local_208 = (X509 *)0x0;
      local_1c8 = (X509 *)0x0;
      goto LAB_00101f1a;
    }
    pXVar15 = local_208;
    if (local_208 != (X509 *)0x0) {
      ppBVar22 = (BIO **)0x0;
      pXVar15 = (X509 *)load_cert_pass(local_208,0,1);
      local_208 = local_1a8;
      if (pXVar15 == (X509 *)0x0) goto LAB_001031bf;
    }
LAB_00100de1:
    local_208 = pXVar15;
    local_1c8 = (X509 *)0x0;
    ppBVar23 = local_70;
joined_r0x00102231:
    local_70 = ppBVar23;
    if ((lVar18 == 0) && (lVar18 = local_c8, local_c8 == 0)) {
      pEVar16 = (EVP_PKEY *)0x0;
    }
    else {
      pcVar27 = "signing key";
      pEVar16 = (EVP_PKEY *)load_key(lVar18,local_a8,0);
      ppBVar22 = ppBVar23;
      if (pEVar16 == (EVP_PKEY *)0x0) {
        pXVar15 = (X509 *)0x0;
        goto LAB_00101f1a;
      }
    }
    if (local_138 == 0) goto LAB_0010205a;
    if (local_15c == 0x503) {
      if ((local_218 == (CMS_ContentInfo *)0x0) && (((uint)uVar29 & 0x1040) == 0x40)) {
        local_1c0 = (char *)OPENSSL_hexstr2buf(local_138,&local_78);
        local_1d0 = (BIO *)0x0;
        if (local_1c0 == (char *)0x0) {
          BIO_printf(_bio_err,"Invalid hex value after -digest\n");
          goto LAB_00103298;
        }
        goto LAB_00100ea3;
      }
      pcVar27 = "Cannot use -digest when -in, -nodetach or streaming is used\n";
    }
    else {
LAB_00101e15:
      pcVar27 = "Cannot use -digest for non-signing operation\n";
    }
    pXVar15 = (X509 *)0x0;
    BIO_printf(_bio_err,pcVar27);
    iVar6 = 2;
    goto LAB_00101034;
  }
LAB_00101d70:
  if (local_208 != (X509 *)0x0) {
    ppBVar22 = (BIO **)0x0;
    local_208 = (X509 *)load_cert_pass(local_208,0,1);
    if (local_208 == (X509 *)0x0) {
LAB_001031bf:
      pXVar15 = (X509 *)0x0;
      ERR_print_errors(_bio_err);
      local_1a8 = local_208;
      iVar6 = 2;
      goto LAB_00101031;
    }
  }
  if (local_15c == 0x306) {
    ppBVar22 = (BIO **)0x0;
    local_1c8 = (X509 *)load_cert_pass(local_158,0,1);
    if (local_1c8 != (X509 *)0x0) {
LAB_00102225:
      local_1a8 = (X509 *)0x0;
      local_c8 = local_158;
      ppBVar23 = local_70;
      goto joined_r0x00102231;
    }
    pXVar15 = (X509 *)0x0;
    pEVar16 = (EVP_PKEY *)0x0;
    ERR_print_errors(_bio_err);
    local_1a8 = (X509 *)0x0;
LAB_00101f1a:
    local_1c0 = (char *)0x0;
    local_1f0 = (X509_STORE *)0x0;
    local_200 = (CMS_SignerInfo *)0x0;
    local_1f8 = (CMS_ContentInfo *)0x0;
    iVar6 = 2;
    local_210 = (CMS_ContentInfo *)0x0;
    local_218 = (CMS_ContentInfo *)0x0;
    local_1b8 = (BIO *)0x0;
    local_1e0 = (BIO *)0x0;
    local_1d0 = (BIO *)0x0;
    goto LAB_001005ee;
  }
  if ((local_15c == 0x101) || ((char)pcVar27 != '\0')) {
    local_1a8 = (X509 *)0x0;
    pXVar15 = local_208;
    goto LAB_00100de1;
  }
  if (local_15c == 0x503) {
    local_1c8 = (X509 *)0x0;
    goto LAB_00102225;
  }
  pEVar16 = (EVP_PKEY *)0x0;
  local_1c8 = (X509 *)0x0;
  local_1a8 = (X509 *)0x0;
  if (local_138 != 0) goto LAB_00101e15;
LAB_0010205a:
  uVar24 = 2;
  if (uVar8 == 0) {
    uVar24 = local_b4;
  }
  local_1d0 = (BIO *)bio_open_default(local_218,0x72,uVar24);
  if (local_1d0 == (BIO *)0x0) {
    pXVar15 = (X509 *)0x0;
    iVar6 = 2;
    local_200 = (CMS_SignerInfo *)0x0;
    local_1c0 = (char *)0x0;
    local_1f0 = (X509_STORE *)0x0;
    local_1f8 = (CMS_ContentInfo *)0x0;
    local_210 = (CMS_ContentInfo *)0x0;
    local_218 = (CMS_ContentInfo *)0x0;
    local_1b8 = (BIO *)0x0;
    local_1e0 = (BIO *)0x0;
    goto LAB_001005ee;
  }
  if (bVar26) {
    ppBVar22 = &local_a0;
    local_218 = (CMS_ContentInfo *)load_content_info(local_b4,local_1d0,uVar29);
    if (local_218 == (CMS_ContentInfo *)0x0) {
      local_1c0 = (char *)0x0;
LAB_00103298:
      local_200 = (CMS_SignerInfo *)0x0;
      pXVar15 = (X509 *)0x0;
      iVar6 = 2;
      local_1f0 = (X509_STORE *)0x0;
      local_1f8 = (CMS_ContentInfo *)0x0;
      local_210 = (CMS_ContentInfo *)0x0;
      local_1b8 = (BIO *)0x0;
      local_1e0 = (BIO *)0x0;
      goto LAB_001005ee;
    }
    if (local_1c0 != (char *)0x0) {
      BIO_free(local_a0);
      local_a0 = BIO_new_file(local_1c0,"rb");
      if (local_a0 == (BIO *)0x0) {
        pXVar15 = (X509 *)0x0;
        BIO_printf(_bio_err,"Can\'t read content file %s\n",local_1c0);
        iVar6 = 2;
        local_200 = (CMS_SignerInfo *)0x0;
        local_1c0 = (char *)0x0;
        local_1f0 = (X509_STORE *)0x0;
        local_210 = (CMS_ContentInfo *)0x0;
        local_1b8 = (BIO *)0x0;
        local_1e0 = (BIO *)0x0;
        local_1f8 = (CMS_ContentInfo *)0x0;
        goto LAB_001005ee;
      }
    }
    if (local_120 != 0) {
      psVar17 = CMS_get1_certs(local_218);
      iVar7 = save_certs(local_120,psVar17);
      if (iVar7 == 0) {
        BIO_printf(_bio_err,"Error writing certs to %s\n",local_120);
        local_200 = (CMS_SignerInfo *)0x0;
        iVar6 = 5;
        local_1c0 = (char *)0x0;
        pXVar15 = (X509 *)0x0;
        local_1f0 = (X509_STORE *)0x0;
        local_1f8 = (CMS_ContentInfo *)0x0;
        local_210 = (CMS_ContentInfo *)0x0;
        local_1b8 = (BIO *)0x0;
        local_1e0 = (BIO *)0x0;
        goto LAB_001005ee;
      }
      OSSL_STACK_OF_X509_free(psVar17);
    }
    local_1c0 = (char *)0x0;
  }
  else {
    local_1c0 = (char *)0x0;
    local_218 = (CMS_ContentInfo *)0x0;
  }
LAB_00100ea3:
  uVar28 = (uint)uVar29;
  if (local_210 != (CMS_ContentInfo *)0x0) {
    mode = "r";
    if (local_ac == 4) {
      mode = "rb";
    }
    local_1b8 = BIO_new_file((char *)local_210,mode);
    if (local_1b8 == (BIO *)0x0) {
      pXVar15 = (X509 *)0x0;
      BIO_printf(_bio_err,"Can\'t open receipt file %s\n",local_210);
      iVar6 = 2;
      local_200 = (CMS_SignerInfo *)0x0;
      local_1f0 = (X509_STORE *)0x0;
      local_1f8 = (CMS_ContentInfo *)0x0;
      local_210 = (CMS_ContentInfo *)0x0;
      local_1e0 = (BIO *)0x0;
    }
    else {
      ppBVar22 = (BIO **)0x0;
      local_210 = (CMS_ContentInfo *)load_content_info(local_ac,local_1b8,0);
      if (local_210 != (CMS_ContentInfo *)0x0) goto LAB_00100f1c;
      pXVar15 = (X509 *)0x0;
      local_1f8 = (CMS_ContentInfo *)0x0;
      local_1e0 = (BIO *)0x0;
      iVar6 = 2;
      local_200 = (CMS_SignerInfo *)0x0;
      local_1f0 = (X509_STORE *)0x0;
    }
    goto LAB_001005ee;
  }
  local_1b8 = (BIO *)0x0;
LAB_00100f1c:
  iVar7 = 2;
  if (uVar8 == 0) {
    iVar7 = local_b0;
  }
  local_1e0 = (BIO *)bio_open_default(local_e0,0x77,iVar7);
  if (local_1e0 == (BIO *)0x0) {
    pXVar15 = (X509 *)0x0;
    iVar6 = 2;
    local_200 = (CMS_SignerInfo *)0x0;
    local_1f0 = (X509_STORE *)0x0;
    local_1f8 = (CMS_ContentInfo *)0x0;
    goto LAB_001005ee;
  }
  if ((local_15c != 0x204) && (local_15c != 0x207)) {
    if (0x10e < local_15c) {
      if (local_15c == 0x306) {
        local_1f8 = (CMS_ContentInfo *)CMS_get0_SignerInfos(local_218);
        if (local_1f8 != (CMS_ContentInfo *)0x0) {
          si = (CMS_SignerInfo *)OPENSSL_sk_value(local_1f8,0);
          local_1f8 = CMS_sign_receipt(si,local_1c8,pEVar16,local_80,uVar28);
          if (local_1f8 != (CMS_ContentInfo *)0x0) {
            CMS_ContentInfo_free(local_218);
LAB_001033fa:
            local_218 = local_1f8;
            local_1f0 = (X509_STORE *)0x0;
            local_1f8 = (CMS_ContentInfo *)0x0;
            goto switchD_0010254b_caseD_203;
          }
        }
        pXVar15 = (X509 *)0x0;
        iVar6 = 3;
        local_200 = (CMS_SignerInfo *)0x0;
        local_1f0 = (X509_STORE *)0x0;
      }
      else {
switchD_00100fb3_caseD_102:
        if (!bVar1) {
          local_1f0 = (X509_STORE *)0x0;
          goto LAB_00102516;
        }
        if (local_15c != 0x503) goto LAB_00102b81;
        if ((((uVar29 & 0x40) != 0) && (local_1c0 == (char *)0x0)) && (local_b0 == 0x8007)) {
          uVar28 = uVar28 | 0x1000;
        }
        uVar28 = uVar28 | 0x4000;
        uVar12 = app_get0_propq();
        local_218 = (CMS_ContentInfo *)
                    CMS_sign_ex(0,0,local_80,local_1d0,uVar28,uVar11,uVar12,ppBVar22);
        if (local_218 == (CMS_ContentInfo *)0x0) goto LAB_00103766;
        if (local_188 != (ASN1_OBJECT *)0x0) {
          CMS_set1_eContentType(local_218,local_188);
        }
        if (local_198 == 0) {
          local_1f0 = (X509_STORE *)0x0;
          local_1f8 = (CMS_ContentInfo *)0x0;
          goto LAB_00102b96;
        }
        lVar18 = make_names_stack();
        if (lVar18 == 0) {
LAB_0010397b:
          lVar21 = 0;
        }
        else {
          if (local_1a0 == 0) {
            lVar21 = 0;
          }
          else {
            lVar21 = make_names_stack();
            if (lVar21 == 0) goto LAB_0010397b;
          }
          app_get0_libctx();
          local_1f8 = (CMS_ContentInfo *)CMS_ReceiptRequest_create0_ex(0,0xffffffff,local_150);
          local_1f0 = (X509_STORE *)0x0;
          if (local_1f8 != (CMS_ContentInfo *)0x0) goto LAB_00102b96;
        }
        OPENSSL_sk_pop_free(lVar18,GENERAL_NAMES_free);
        OPENSSL_sk_pop_free(lVar21,GENERAL_NAMES_free);
        BIO_puts(_bio_err,"Signed Receipt Request Creation Error\n");
LAB_001035c4:
        iVar6 = 3;
        local_200 = (CMS_SignerInfo *)0x0;
        pXVar15 = (X509 *)0x0;
        local_1f0 = (X509_STORE *)0x0;
        local_1f8 = (CMS_ContentInfo *)0x0;
      }
      goto LAB_001005ee;
    }
    if (local_15c < 0x101) {
      if (bVar1) {
LAB_00102b81:
        local_1f0 = (X509_STORE *)0x0;
        goto LAB_00102b88;
      }
    }
    else {
      switch(local_15c) {
      case 0x101:
        app_get0_propq();
        local_218 = (CMS_ContentInfo *)CMS_encrypt_ex(0,local_1d0,local_98,uVar28 | 0x4000,uVar11);
        if (local_218 != (CMS_ContentInfo *)0x0) {
          local_1f0._0_4_ = uVar28 | 0x4000;
          for (iVar7 = 0; iVar9 = OPENSSL_sk_num(lVar10), iVar7 < iVar9; iVar7 = iVar7 + 1) {
            uVar11 = OPENSSL_sk_value(lVar10,iVar7);
            for (piVar25 = ptr_00; piVar25 != (int *)0x0; piVar25 = *(int **)(piVar25 + 4)) {
              if (*piVar25 == iVar7) {
                pCVar20 = (CMS_RecipientInfo *)
                          CMS_add1_recipient(local_218,uVar11,pEVar16,local_208,uVar29 | 0x44000);
                if ((pCVar20 == (CMS_RecipientInfo *)0x0) ||
                   ((ctx = (EVP_PKEY_CTX *)CMS_RecipientInfo_get0_pkey_ctx(pCVar20),
                    ctx != (EVP_PKEY_CTX *)0x0 &&
                    (iVar9 = cms_set_pkey_param(ctx,*(undefined8 *)(piVar25 + 2)), iVar9 == 0))))
                goto LAB_001035c4;
                goto LAB_00103522;
              }
            }
            pCVar20 = (CMS_RecipientInfo *)
                      CMS_add1_recipient(local_218,uVar11,pEVar16,local_208,uVar29 | 0x44000);
            if (pCVar20 == (CMS_RecipientInfo *)0x0) goto LAB_001035c4;
            ctx = (EVP_PKEY_CTX *)CMS_RecipientInfo_get0_pkey_ctx(pCVar20);
LAB_00103522:
            iVar9 = EVP_CIPHER_get_nid(local_98);
            iVar9 = EVP_PKEY_CTX_ctrl(ctx,-1,-1,0xc,iVar9,(void *)0x0);
            if ((iVar9 < 1) && (iVar9 != -2)) goto LAB_001035c4;
            iVar9 = CMS_RecipientInfo_type(pCVar20);
            if ((iVar9 == 1) && (local_90 != (EVP_CIPHER *)0x0)) {
              ctx_00 = (EVP_CIPHER_CTX *)CMS_RecipientInfo_kari_get0_ctx(pCVar20);
              iVar9 = EVP_EncryptInit_ex(ctx_00,local_90,(ENGINE *)0x0,(uchar *)0x0,(uchar *)0x0);
              if (iVar9 != 1) goto LAB_001035c4;
            }
          }
          if (local_1b0 != (uchar *)0x0) {
            pCVar20 = CMS_add0_recipient_key
                                (local_218,0,local_1b0,local_140,local_190,local_128,
                                 (ASN1_GENERALIZEDTIME *)0x0,(ASN1_OBJECT *)0x0,(ASN1_TYPE *)0x0);
            if (pCVar20 == (CMS_RecipientInfo *)0x0) goto LAB_001035c4;
            local_190 = (uchar *)0x0;
          }
          if (local_148 != (uchar *)0x0) {
            local_200 = (CMS_SignerInfo *)CRYPTO_strdup((char *)local_148,"apps/cms.c",0x415);
            if (local_200 == (CMS_SignerInfo *)0x0) {
              pXVar15 = (X509 *)0x0;
              iVar6 = 3;
              local_1b0 = (uchar *)0x0;
              local_1f0 = (X509_STORE *)0x0;
              local_1f8 = (CMS_ContentInfo *)0x0;
            }
            else {
              pCVar20 = CMS_add0_recipient_password
                                  (local_218,-1,0,0,(uchar *)local_200,-1,(EVP_CIPHER *)0x0);
              if (pCVar20 != (CMS_RecipientInfo *)0x0) goto LAB_001036ad;
              pXVar15 = (X509 *)0x0;
              iVar6 = 3;
              local_1b0 = (uchar *)0x0;
              local_1f0 = (X509_STORE *)0x0;
              local_1f8 = (CMS_ContentInfo *)0x0;
            }
            goto LAB_001005ee;
          }
LAB_001036ad:
          if (((uVar29 & 0x1000) != 0) ||
             (iVar7 = CMS_final(local_218,local_1d0,(BIO *)0x0,(uint)local_1f0), iVar7 != 0)) {
            local_1b0 = (uchar *)0x0;
            uVar28 = (uint)local_1f0;
            local_1f8 = local_218;
            goto LAB_001033fa;
          }
          if (local_208 != (X509 *)0x0) {
            uVar29 = ERR_peek_error();
            uVar8 = (uint)uVar29 & 0x7fffff;
            if ((uVar29 & 0x80000000) != 0) {
              uVar8 = (uint)uVar29 & 0x7fffffff;
            }
            if (uVar8 == 0xc4) {
              BIO_printf(_bio_err,"Cannot use originator for encryption\n");
            }
            local_1b0 = (uchar *)0x0;
            goto LAB_001035c4;
          }
          local_1b0 = (uchar *)0x0;
        }
LAB_00103766:
        pXVar15 = (X509 *)0x0;
        local_200 = (CMS_SignerInfo *)0x0;
        local_1f0 = (X509_STORE *)0x0;
        iVar6 = 3;
        local_1f8 = (CMS_ContentInfo *)0x0;
        goto LAB_001005ee;
      default:
        goto switchD_00100fb3_caseD_102;
      case 0x108:
        uVar12 = app_get0_propq();
        local_218 = (CMS_ContentInfo *)CMS_digest_create_ex(local_1d0,local_88,uVar29,uVar11,uVar12)
        ;
        break;
      case 0x10a:
        local_218 = CMS_compress(local_1d0,-1,uVar28);
        break;
      case 0x10c:
        uVar12 = app_get0_propq();
        local_218 = (CMS_ContentInfo *)
                    CMS_EncryptedData_encrypt_ex
                              (local_1d0,local_98,local_1b0,local_140,uVar29,uVar11,uVar12,pcVar27);
        break;
      case 0x10e:
        uVar12 = app_get0_propq();
        local_218 = (CMS_ContentInfo *)CMS_data_create_ex(local_1d0,uVar29,uVar11,uVar12);
      }
    }
    local_1f0 = (X509_STORE *)0x0;
    if (local_218 == (CMS_ContentInfo *)0x0) goto LAB_001026cc;
    local_1f8 = (CMS_ContentInfo *)0x0;
switchD_0010254b_caseD_203:
    if (bVar2) {
      if (bVar3) {
        p = (ASN1_PCTX *)0x0;
        lVar18 = get_nameopt();
        if ((lVar18 != 0x82031f) && (p = ASN1_PCTX_new(), p != (ASN1_PCTX *)0x0)) {
          ASN1_PCTX_set_flags(p,1);
          uVar29 = get_nameopt();
          ASN1_PCTX_set_str_flags(p,uVar29);
          uVar29 = get_nameopt();
          ASN1_PCTX_set_nm_flags(p,uVar29);
        }
        CMS_ContentInfo_print_ctx(local_1e0,local_218,0,p);
        ASN1_PCTX_free(p);
      }
      goto LAB_001026b4;
    }
    if (local_b0 == 0x8007) {
      if (local_d8 != 0) {
        BIO_printf(local_1e0,"To: %s%s",local_d8,local_130);
      }
      if (local_d0 != 0) {
        BIO_printf(local_1e0,"From: %s%s",local_d0,local_130);
      }
      if (local_118 != 0) {
        BIO_printf(local_1e0,"Subject: %s%s",local_118,local_130);
      }
      if (local_15c == 0x705) {
        iVar6 = SMIME_write_CMS(local_1e0,local_218,local_a0,uVar28);
      }
      else {
        iVar6 = SMIME_write_CMS(local_1e0,local_218,local_1d0,uVar28);
      }
LAB_00102811:
      if (0 < iVar6) goto LAB_00102819;
      iVar6 = 6;
      pXVar15 = (X509 *)0x0;
      local_200 = (CMS_SignerInfo *)0x0;
      goto LAB_001005ee;
    }
    if (local_b0 == 0x8005) {
      iVar6 = PEM_write_bio_CMS_stream(local_1e0,local_218,local_1d0,uVar28);
      goto LAB_00102811;
    }
    if (local_b0 == 4) {
      iVar6 = i2d_CMS_bio_stream(local_1e0,local_218,local_1d0,uVar28);
      goto LAB_00102811;
    }
    pcVar27 = "Bad output format for CMS file\n";
    goto LAB_001029cf;
  }
  local_1f0 = (X509_STORE *)setup_verify(local_108,local_ec,local_100);
  if (local_1f0 == (X509_STORE *)0x0) {
    pXVar15 = (X509 *)0x0;
    iVar6 = 2;
    local_200 = (CMS_SignerInfo *)0x0;
    local_1f8 = (CMS_ContentInfo *)0x0;
    goto LAB_001005ee;
  }
  X509_STORE_set_verify_cb(local_1f0,cms_cb);
  if (local_10c != 0) {
    X509_STORE_set1_param(local_1f0,pm);
  }
  if (bVar1) {
LAB_00102b88:
    uVar28 = uVar28 | 0x8000;
    local_1f8 = (CMS_ContentInfo *)0x0;
LAB_00102b96:
    for (iVar7 = 0; iVar9 = OPENSSL_sk_num(local_1d8), iVar7 < iVar9; iVar7 = iVar7 + 1) {
      local_158 = OPENSSL_sk_value(local_1d8,iVar7);
      uVar11 = OPENSSL_sk_value(local_1e8,iVar7);
      pXVar15 = (X509 *)load_cert_pass(local_158,0,1,0,"signer certificate");
      pk = pEVar16;
      local_1c8 = pXVar15;
      if ((pXVar15 == (X509 *)0x0) ||
         (pk = (EVP_PKEY *)load_key(uVar11,local_a8,0,local_70,local_178), piVar25 = ptr_00,
         pk == (EVP_PKEY *)0x0)) {
        pXVar15 = (X509 *)0x0;
        iVar6 = 2;
        local_200 = (CMS_SignerInfo *)0x0;
        pEVar16 = pk;
        goto LAB_001005ee;
      }
      for (; pEVar16 = pk, piVar25 != (int *)0x0; piVar25 = *(int **)(piVar25 + 4)) {
        if (*piVar25 == iVar7) {
          local_200 = CMS_add1_signer(local_218,pXVar15,pk,local_88,uVar28 | 0x40000);
          if (local_200 == (CMS_SignerInfo *)0x0) goto LAB_00102cff;
          uVar11 = CMS_SignerInfo_get0_pkey_ctx(local_200);
          iVar9 = cms_set_pkey_param(uVar11);
          if (iVar9 != 0) goto LAB_00102cab;
          goto LAB_00102d17;
        }
      }
      local_200 = CMS_add1_signer(local_218,pXVar15,pk,local_88,uVar28);
      if (local_200 == (CMS_SignerInfo *)0x0) {
LAB_00102cff:
        pXVar15 = (X509 *)0x0;
        iVar6 = 3;
        goto LAB_001005ee;
      }
LAB_00102cab:
      if ((local_1f8 != (CMS_ContentInfo *)0x0) &&
         (iVar9 = CMS_add1_ReceiptRequest(local_200), iVar9 == 0)) {
LAB_00102d17:
        iVar6 = 3;
        pXVar15 = (X509 *)0x0;
        local_200 = (CMS_SignerInfo *)0x0;
        goto LAB_001005ee;
      }
      local_1c8 = (X509 *)0x0;
      X509_free(pXVar15);
      pEVar16 = (EVP_PKEY *)0x0;
      EVP_PKEY_free(pk);
    }
    uVar29 = (ulong)uVar28;
    if (local_15c == 0x503) {
      if (local_1c0 == (char *)0x0) {
        if ((uVar28 & 0x1000) == 0) {
          iVar7 = CMS_final(local_218,local_1d0,(BIO *)0x0,uVar28);
          goto joined_r0x00102e3f;
        }
      }
      else if ((uVar28 & 0x1000) == 0) {
        iVar7 = CMS_final_digest(local_218,local_1c0,local_78 & 0xffffffff);
joined_r0x00102e3f:
        if (iVar7 == 0) {
          iVar6 = 3;
          pXVar15 = (X509 *)0x0;
          local_200 = (CMS_SignerInfo *)0x0;
          goto LAB_001005ee;
        }
      }
    }
  }
  else {
LAB_00102516:
    local_1f8 = (CMS_ContentInfo *)0x0;
  }
  uVar28 = (uint)uVar29;
  if (local_218 == (CMS_ContentInfo *)0x0) {
    local_218 = local_1f8;
LAB_001026cc:
    pXVar15 = (X509 *)0x0;
    BIO_printf(_bio_err,"Error creating CMS structure\n");
    local_1f8 = local_218;
    local_200 = (CMS_SignerInfo *)0x0;
    iVar6 = 3;
    local_218 = (CMS_ContentInfo *)0x0;
    goto LAB_001005ee;
  }
  switch(local_15c) {
  case 0x202:
    if ((uVar29 & 0x20000) != 0) {
      CMS_decrypt(local_218,(EVP_PKEY *)0x0,(X509 *)0x0,(BIO *)0x0,(BIO *)0x0,uVar28);
    }
    if (local_1b0 == (uchar *)0x0) {
LAB_00102aae:
      if ((pEVar16 != (EVP_PKEY *)0x0) &&
         (iVar7 = CMS_decrypt_set1_pkey_and_peer(local_218,pEVar16,local_1a8,local_208), iVar7 == 0)
         ) {
        pcVar27 = "Error decrypting CMS using private key\n";
        goto LAB_00103174;
      }
      if ((local_148 == (uchar *)0x0) ||
         (iVar7 = CMS_decrypt_set1_password(local_218,local_148,-1), iVar7 != 0)) {
        pXVar15 = (X509 *)0x0;
        iVar7 = CMS_decrypt(local_218,(EVP_PKEY *)0x0,(X509 *)0x0,local_a0,local_1e0,uVar28);
        local_200 = (CMS_SignerInfo *)0x0;
        if (iVar7 != 0) goto LAB_0010060a;
        BIO_printf(_bio_err,"Error decrypting CMS structure\n");
      }
      else {
        BIO_puts(_bio_err,"Error decrypting CMS using password\n");
      }
    }
    else {
      iVar7 = CMS_decrypt_set1_key(local_218,local_1b0,local_140,local_190,local_128);
      pcVar27 = "Error decrypting CMS using secret key\n";
      if (iVar7 != 0) goto LAB_00102aae;
LAB_00103174:
      BIO_puts(_bio_err,pcVar27);
    }
    goto LAB_001029dd;
  default:
    goto switchD_0010254b_caseD_203;
  case 0x204:
    iVar7 = CMS_verify(local_218,local_80,local_1f0,local_a0,local_1e0,uVar28);
    if (0 < iVar7) {
      pcVar27 = "CMS";
      if ((uVar29 & 0x100000) != 0) {
        pcVar27 = "CAdES";
      }
      BIO_printf(_bio_err,"%s Verification successful\n",pcVar27);
      if (local_158 != 0) {
        psVar17 = CMS_get0_signers(local_218);
        iVar7 = save_certs(local_158);
        if (iVar7 == 0) {
          pXVar15 = (X509 *)0x0;
          BIO_printf(_bio_err,"Error writing signers to %s\n",local_158);
          iVar6 = 5;
          local_200 = (CMS_SignerInfo *)0x0;
          goto LAB_001005ee;
        }
        OPENSSL_sk_free(psVar17);
      }
      if (bVar4) {
        psVar19 = CMS_get0_SignerInfos(local_218);
        uVar8 = 0;
        while (iVar7 = OPENSSL_sk_num(psVar19), (int)uVar8 < iVar7) {
          uVar11 = OPENSSL_sk_value(psVar19,uVar8);
          iVar7 = CMS_get1_ReceiptRequest(uVar11,&local_60);
          BIO_printf(_bio_err,"Signer %d:\n",(ulong)(uVar8 + 1));
          if (iVar7 == 0) {
            BIO_puts(_bio_err,"  No Receipt Request\n");
          }
          else if (iVar7 < 0) {
            BIO_puts(_bio_err,"  Receipt Request Parse Error\n");
            ERR_print_errors(_bio_err);
          }
          else {
            CMS_ReceiptRequest_get0_values(local_60,&local_48,&local_a4,&local_50,&local_58);
            BIO_puts(_bio_err,"  Signed Content ID:\n");
            iVar7 = ASN1_STRING_length(local_48);
            pcVar27 = (char *)ASN1_STRING_get0_data(local_48);
            BIO_dump_indent(_bio_err,pcVar27,iVar7,4);
            BIO_puts(_bio_err,"  Receipts From");
            if (local_50 == 0) {
              if (local_a4 == 1) {
                BIO_puts(_bio_err,": First Tier\n");
              }
              else if (local_a4 == 0) {
                BIO_puts(_bio_err,": All\n");
              }
              else {
                BIO_printf(_bio_err," Unknown (%d)\n");
              }
            }
            else {
              BIO_puts(_bio_err," List:\n");
              gnames_stack_print(local_50);
            }
            BIO_puts(_bio_err,"  Receipts To:\n");
            gnames_stack_print(local_58);
          }
          CMS_ReceiptRequest_free(local_60);
          uVar8 = uVar8 + 1;
        }
        goto LAB_001026b4;
      }
LAB_00102819:
      iVar6 = 0;
LAB_001026b4:
      pXVar15 = (X509 *)0x0;
      local_200 = (CMS_SignerInfo *)0x0;
      goto LAB_0010060a;
    }
    pcVar27 = "CMS";
    if ((uVar29 & 0x100000) != 0) {
      pcVar27 = "CAdES";
    }
    BIO_printf(_bio_err,"%s Verification failure\n",pcVar27);
    if (!bVar5) goto LAB_001029dd;
    iVar6 = verify_err + 0x20;
    goto LAB_00102849;
  case 0x207:
    iVar7 = CMS_verify_receipt(local_210,local_218,local_80,local_1f0,uVar28);
    if (0 < iVar7) {
      BIO_printf(_bio_err,"Verification successful\n");
      goto LAB_001026b4;
    }
    goto LAB_001029f3;
  case 0x209:
    iVar7 = CMS_digest_verify(local_218,local_a0,local_1e0,uVar28);
    if (0 < iVar7) {
      pXVar15 = (X509 *)0x0;
      BIO_printf(_bio_err,"Verification successful\n");
      local_200 = (CMS_SignerInfo *)0x0;
      goto LAB_0010060a;
    }
LAB_001029f3:
    pcVar27 = "Verification failure\n";
LAB_001029cf:
    BIO_printf(_bio_err,pcVar27);
LAB_001029dd:
    iVar6 = 4;
    pXVar15 = (X509 *)0x0;
    local_200 = (CMS_SignerInfo *)0x0;
    goto LAB_001005ee;
  case 0x20b:
    iVar6 = CMS_uncompress(local_218,local_a0,local_1e0,uVar28);
    break;
  case 0x20d:
    iVar6 = CMS_EncryptedData_decrypt(local_218,local_1b0,local_140,local_a0,local_1e0,uVar28);
    break;
  case 0x20f:
    iVar6 = CMS_data(local_218,local_1e0,uVar28);
  }
  iVar6 = (uint)(iVar6 == 0) << 2;
LAB_00102849:
  local_200 = (CMS_SignerInfo *)0x0;
  pXVar15 = (X509 *)0x0;
  if (iVar6 != 0) {
LAB_001005ee:
    ERR_print_errors(_bio_err);
  }
LAB_0010060a:
  OSSL_STACK_OF_X509_free(lVar10);
  OSSL_STACK_OF_X509_free(local_80);
  X509_VERIFY_PARAM_free(pm);
  OPENSSL_sk_free(local_1d8);
  OPENSSL_sk_free(local_1e8);
  CRYPTO_free(local_1b0);
  CRYPTO_free(local_190);
  CRYPTO_free(local_200);
  ASN1_OBJECT_free(local_188);
  CMS_ReceiptRequest_free((CMS_ReceiptRequest *)local_1f8);
  OPENSSL_sk_free(local_198);
  OPENSSL_sk_free(local_1a0);
  while (ptr_00 != (int *)0x0) {
    OPENSSL_sk_free(*(undefined8 *)(ptr_00 + 2));
    piVar25 = *(int **)(ptr_00 + 4);
    CRYPTO_free(ptr_00);
    ptr_00 = piVar25;
  }
  X509_STORE_free(local_1f0);
  X509_free(pXVar15);
  X509_free(local_1a8);
  X509_free(local_1c8);
  X509_free(local_208);
  EVP_PKEY_free(pEVar16);
  EVP_CIPHER_free(local_98);
  EVP_CIPHER_free(local_90);
  EVP_MD_free(local_88);
  CMS_ContentInfo_free(local_218);
  CMS_ContentInfo_free(local_210);
  release_engine(local_178);
  BIO_free(local_1b8);
  BIO_free(local_1d0);
  BIO_free(local_a0);
  BIO_free_all(local_1e0);
  CRYPTO_free(local_1c0);
  CRYPTO_free(local_70);
  NCONF_free(local_168);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


