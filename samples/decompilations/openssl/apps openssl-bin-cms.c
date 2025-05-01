
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
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  X509_VERIFY_PARAM *pm;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long *plVar16;
  X509 *pXVar17;
  CMS_ContentInfo *ptr;
  stack_st_X509 *psVar18;
  long lVar19;
  ASN1_PCTX *p;
  CMS_RecipientInfo *pCVar20;
  EVP_PKEY_CTX *ctx;
  EVP_CIPHER_CTX *ctx_00;
  long lVar21;
  EVP_PKEY *pk;
  CMS_SignerInfo *pCVar22;
  stack_st_CMS_SignerInfo *psVar23;
  BIO **ppBVar24;
  undefined4 uVar25;
  ulong uVar26;
  char *mode;
  bool bVar27;
  char *pcVar28;
  int *ptr_00;
  int *piVar29;
  long in_FS_OFFSET;
  EVP_PKEY *local_220;
  CMS_ContentInfo *local_218;
  CMS_ContentInfo *local_210;
  X509 *local_208;
  CMS_ContentInfo *local_200;
  X509_STORE *local_1f8;
  long local_1f0;
  BIO *local_1e8;
  long local_1e0;
  BIO *local_1d8;
  void *local_1d0;
  X509 *local_1c8;
  BIO *local_1c0;
  uchar *local_1b8;
  X509 *local_1b0;
  long local_1a8;
  long local_1a0;
  uchar *local_198;
  ASN1_OBJECT *local_190;
  undefined8 local_188;
  CONF *local_178;
  uint local_16c;
  EVP_PKEY *local_168;
  uint local_160;
  uchar *local_158;
  size_t local_150;
  undefined *local_148;
  long local_140;
  long local_138;
  undefined8 local_130;
  size_t local_128;
  long local_118;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined8 local_e0;
  long local_d8;
  long local_d0;
  EVP_PKEY *local_c8;
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
  lVar12 = OPENSSL_sk_new_null();
  local_80 = (stack_st_X509 *)0x0;
  pm = X509_VERIFY_PARAM_new();
  local_78 = 0;
  local_70 = (BIO **)0x0;
  local_b4 = 0x8007;
  local_b0 = 0x8007;
  local_ac = 0x8007;
  local_a8 = 0;
  uVar13 = app_get0_libctx();
  if ((lVar12 != 0) && (pm != (X509_VERIFY_PARAM *)0x0)) {
    opt_set_unknown_name("cipher");
    uVar14 = opt_init(param_1,param_2,cms_options);
    uVar26 = 0x40;
    ptr_00 = (int *)0x0;
    local_198 = (uchar *)0x0;
    local_148 = &_LC5;
    local_1b8 = (uchar *)0x0;
    local_158 = (uchar *)0x0;
    local_128 = 0;
    local_150 = 0;
    bVar5 = false;
    iVar11 = -1;
    bVar4 = false;
    local_16c = 0;
    iVar10 = 0;
    bVar3 = false;
    bVar2 = false;
    local_200 = (CMS_ContentInfo *)0x0;
    local_118 = 0;
    local_d0 = 0;
    local_d8 = 0;
    local_1d0 = (void *)0x0;
    local_c8 = (EVP_PKEY *)0x0;
    local_208 = (X509 *)0x0;
    local_168 = (EVP_PKEY *)0x0;
    local_130 = 0;
    local_210 = (CMS_ContentInfo *)0x0;
    local_e0 = 0;
    local_218 = (CMS_ContentInfo *)0x0;
    local_140 = 0;
    local_e4 = 0;
    local_e8 = 0;
    local_ec = 0;
    local_1d8 = (BIO *)0x0;
    local_1e8 = (BIO *)0x0;
    local_138 = 0;
    local_f8 = 0;
    local_100 = 0;
    local_108 = 0;
    local_1c0 = (BIO *)0x0;
    local_220 = (EVP_PKEY *)0x0;
    local_1b0 = (X509 *)0x0;
    local_1f0 = 0;
    local_1e0 = 0;
    local_1a8 = 0;
    local_1a0 = 0;
    local_188 = 0;
    local_190 = (ASN1_OBJECT *)0x0;
    local_178 = (CONF *)0x0;
switchD_001009b7_caseD_0:
    iVar7 = opt_next();
    uVar9 = (uint)uVar26;
    if (iVar7 != 0) {
LAB_0010099d:
      if (0x50 < iVar7) goto LAB_001009c0;
      if (iVar7 < -1) goto switchD_001009b7_caseD_0;
      switch(iVar7) {
      default:
        goto switchD_001009b7_caseD_0;
      case 1:
        pCVar22 = (CMS_SignerInfo *)0x0;
        pXVar17 = (X509 *)0x0;
        opt_help(cms_options);
        iVar7 = 0;
        local_1d0 = (void *)0x0;
        local_1f8 = (X509_STORE *)0x0;
        local_208 = (X509 *)0x0;
        local_1c8 = (X509 *)0x0;
        local_1b0 = (X509 *)0x0;
        local_220 = (EVP_PKEY *)0x0;
        local_200 = (CMS_ContentInfo *)0x0;
        local_210 = (CMS_ContentInfo *)0x0;
        local_218 = (CMS_ContentInfo *)0x0;
        local_1c0 = (BIO *)0x0;
        local_1e8 = (BIO *)0x0;
        local_1d8 = (BIO *)0x0;
        goto LAB_00100567;
      case 2:
        uVar15 = opt_arg();
        iVar7 = opt_format(uVar15,0x26,&local_b4);
        break;
      case 3:
        uVar15 = opt_arg();
        iVar7 = opt_format(uVar15,0x26,&local_b0);
        break;
      case 4:
        local_218 = (CMS_ContentInfo *)opt_arg();
        goto switchD_001009b7_caseD_0;
      case 5:
        local_e0 = opt_arg();
        goto switchD_001009b7_caseD_0;
      case 6:
        local_16c = 0x101;
        goto switchD_001009b7_caseD_0;
      case 7:
        local_16c = 0x202;
        goto switchD_001009b7_caseD_0;
      case 8:
        local_16c = 0x503;
        goto switchD_001009b7_caseD_0;
      case 9:
        uVar26 = (ulong)(uVar9 | 0x100000);
        goto switchD_001009b7_caseD_0;
      case 10:
        local_16c = 0x306;
        goto switchD_001009b7_caseD_0;
      case 0xb:
        local_16c = 0x705;
        goto switchD_001009b7_caseD_0;
      case 0xc:
        local_16c = 0x204;
        goto switchD_001009b7_caseD_0;
      case 0xd:
        bVar5 = true;
        goto switchD_001009b7_caseD_0;
      case 0xe:
        local_210 = (CMS_ContentInfo *)opt_arg();
        local_16c = 0x207;
        goto switchD_001009b7_caseD_0;
      case 0xf:
        local_16c = 0x310;
        goto switchD_001009b7_caseD_0;
      case 0x10:
        local_16c = 0x20f;
        goto switchD_001009b7_caseD_0;
      case 0x11:
        local_16c = 0x10e;
        goto switchD_001009b7_caseD_0;
      case 0x12:
        local_16c = 0x209;
        goto switchD_001009b7_caseD_0;
      case 0x13:
        local_140 = opt_arg();
        goto switchD_001009b7_caseD_0;
      case 0x14:
        local_16c = 0x108;
        goto switchD_001009b7_caseD_0;
      case 0x15:
        local_16c = 0x10a;
        goto switchD_001009b7_caseD_0;
      case 0x16:
        local_16c = 0x20b;
        goto switchD_001009b7_caseD_0;
      case 0x17:
        local_16c = 0x20d;
        goto switchD_001009b7_caseD_0;
      case 0x18:
        local_16c = 0x10c;
        goto switchD_001009b7_caseD_0;
      case 0x19:
        uVar26 = (ulong)(uVar9 | 0x20000);
        goto switchD_001009b7_caseD_0;
      case 0x1a:
        uVar26 = (ulong)(uVar9 | 1);
        goto switchD_001009b7_caseD_0;
      case 0x1b:
        uVar26 = (ulong)(uVar9 | 0x80000);
        goto switchD_001009b7_caseD_0;
      case 0x1c:
        uVar26 = (ulong)(uVar9 | 0x10);
        goto switchD_001009b7_caseD_0;
      case 0x1d:
        uVar26 = (ulong)(uVar9 | 0x20);
        goto switchD_001009b7_caseD_0;
      case 0x1e:
        uVar26 = (ulong)(uVar9 | 2);
        goto switchD_001009b7_caseD_0;
      case 0x1f:
        uVar26 = (ulong)(uVar9 | 0x100);
        goto switchD_001009b7_caseD_0;
      case 0x20:
        uVar26 = (ulong)(uVar9 & 0xffffffbf);
        goto switchD_001009b7_caseD_0;
      case 0x21:
        uVar26 = (ulong)(uVar9 | 0x200);
        goto switchD_001009b7_caseD_0;
      case 0x22:
        uVar26 = (ulong)(uVar9 | 0x400000);
        goto switchD_001009b7_caseD_0;
      case 0x23:
        uVar26 = uVar26 | 0x80;
        goto switchD_001009b7_caseD_0;
      case 0x24:
        uVar26 = (ulong)(uVar9 | 0x10000);
        goto switchD_001009b7_caseD_0;
      case 0x25:
        uVar26 = (ulong)(uVar9 | 0xc);
        goto switchD_001009b7_caseD_0;
      case 0x26:
        uVar26 = (ulong)(uVar9 | 4);
        goto switchD_001009b7_caseD_0;
      case 0x27:
        uVar26 = (ulong)(uVar9 | 8);
        goto switchD_001009b7_caseD_0;
      case 0x28:
        uVar26 = (ulong)(uVar9 | 0x1000);
        goto switchD_001009b7_caseD_0;
      case 0x29:
        uVar26 = (ulong)(uVar9 & 0xffffefff);
        goto switchD_001009b7_caseD_0;
      case 0x2a:
        uVar26 = (ulong)(uVar9 | 0x800);
        local_148 = &_LC6;
        goto switchD_001009b7_caseD_0;
      case 0x2b:
        goto switchD_001009b7_caseD_2b;
      case 0x2c:
        bVar4 = true;
        goto switchD_001009b7_caseD_0;
      case 0x2d:
        iVar11 = 0;
        goto switchD_001009b7_caseD_0;
      case 0x2e:
        iVar11 = 1;
        goto switchD_001009b7_caseD_0;
      case 0x2f:
        uVar15 = opt_arg();
        iVar7 = opt_format(uVar15,0x26,&local_ac);
        break;
      case 0x30:
        local_1b0 = (X509 *)opt_arg();
        goto switchD_001009b7_caseD_0;
      case 0x31:
        local_108 = opt_arg();
        goto switchD_001009b7_caseD_0;
      case 0x32:
        local_100 = opt_arg();
        goto switchD_001009b7_caseD_0;
      case 0x33:
        local_f8 = opt_arg();
        goto switchD_001009b7_caseD_0;
      case 0x34:
        local_e8 = 1;
        goto switchD_001009b7_caseD_0;
      case 0x35:
        local_ec = 1;
        goto switchD_001009b7_caseD_0;
      case 0x36:
        local_e4 = 1;
        goto switchD_001009b7_caseD_0;
      case 0x37:
        local_1c0 = (BIO *)opt_arg();
        goto switchD_001009b7_caseD_0;
      case 0x38:
        bVar3 = true;
switchD_001009b7_caseD_2b:
        bVar2 = true;
        iVar7 = opt_next();
        if (iVar7 == 0) {
          iVar7 = 0;
          goto LAB_00100a78;
        }
        goto LAB_0010099d;
      case 0x39:
        uVar15 = opt_arg();
        iVar7 = set_nameopt(uVar15);
        break;
      case 0x3a:
        if (local_1b8 != (uchar *)0x0) {
          uVar13 = opt_arg();
          BIO_printf(_bio_err,"Invalid key (supplied twice) %s\n",uVar13);
          goto switchD_001009b7_caseD_ffffffff;
        }
        uVar15 = opt_arg();
        local_1b8 = (uchar *)OPENSSL_hexstr2buf(uVar15);
        if (local_1b8 != (uchar *)0x0) {
          local_150 = local_68;
          goto switchD_001009b7_caseD_0;
        }
        uVar13 = opt_arg();
        BIO_printf(_bio_err,"Invalid key %s\n",uVar13);
        goto LAB_00101882;
      case 0x3b:
        if (local_198 != (uchar *)0x0) {
          uVar13 = opt_arg();
          BIO_printf(_bio_err,"Invalid id (supplied twice) %s\n",uVar13);
          goto switchD_001009b7_caseD_ffffffff;
        }
        uVar15 = opt_arg();
        local_198 = (uchar *)OPENSSL_hexstr2buf(uVar15);
        if (local_198 != (uchar *)0x0) {
          local_128 = local_68;
          goto switchD_001009b7_caseD_0;
        }
        uVar13 = opt_arg();
        BIO_printf(_bio_err,"Invalid id %s\n",uVar13);
        goto switchD_001009b7_caseD_ffffffff;
      case 0x3c:
        local_158 = (uchar *)opt_arg();
        goto switchD_001009b7_caseD_0;
      case 0x3d:
        if (local_190 == (ASN1_OBJECT *)0x0) {
          pcVar28 = (char *)opt_arg();
          local_190 = OBJ_txt2obj(pcVar28,0);
          if (local_190 != (ASN1_OBJECT *)0x0) goto switchD_001009b7_caseD_0;
          uVar13 = opt_arg();
          BIO_printf(_bio_err,"Invalid OID %s\n",uVar13);
        }
        else {
          uVar13 = opt_arg();
          BIO_printf(_bio_err,"Invalid OID (supplied twice) %s\n",uVar13);
        }
        goto switchD_001009b7_caseD_ffffffff;
      case 0x3e:
        local_130 = opt_arg();
        goto switchD_001009b7_caseD_0;
      case 0x3f:
        local_d8 = opt_arg();
        goto switchD_001009b7_caseD_0;
      case 0x40:
        local_d0 = opt_arg();
        goto switchD_001009b7_caseD_0;
      case 0x41:
        local_118 = opt_arg();
        goto switchD_001009b7_caseD_0;
      case 0x42:
        if (local_168 != (EVP_PKEY *)0x0) {
          if ((local_1e0 == 0) && (local_1e0 = OPENSSL_sk_new_null(), local_1e0 == 0))
          goto LAB_00101882;
          iVar7 = OPENSSL_sk_push(local_1e0,local_168);
          if (iVar7 < 1) goto LAB_00100f52;
          if ((local_1f0 == 0) && (local_1f0 = OPENSSL_sk_new_null(), local_1f0 == 0))
          goto LAB_00101882;
          iVar7 = OPENSSL_sk_push(local_1f0);
          if (iVar7 < 1) goto LAB_00100f52;
          local_220 = (EVP_PKEY *)0x0;
        }
        local_168 = (EVP_PKEY *)opt_arg();
        goto switchD_001009b7_caseD_0;
      case 0x43:
        if (local_16c != 0x101) {
          local_c8 = (EVP_PKEY *)opt_arg();
          goto switchD_001009b7_caseD_0;
        }
        uVar15 = opt_arg();
        pXVar17 = (X509 *)load_cert_pass(uVar15,0,1);
        if (pXVar17 == (X509 *)0x0) goto LAB_001018c7;
        iVar7 = OPENSSL_sk_push(lVar12);
        if (iVar7 != 0) goto switchD_001009b7_caseD_0;
        iVar7 = 1;
        goto LAB_001019a5;
      case 0x44:
        local_138 = opt_arg();
        goto switchD_001009b7_caseD_0;
      case 0x45:
        local_1e8 = (BIO *)opt_arg();
        goto switchD_001009b7_caseD_0;
      case 0x46:
        if (local_220 != (EVP_PKEY *)0x0) {
          if (local_168 == (EVP_PKEY *)0x0) {
            BIO_puts(_bio_err,"Illegal -inkey without -signer\n");
            goto LAB_00101882;
          }
          if ((local_1e0 == 0) && (local_1e0 = OPENSSL_sk_new_null(), local_1e0 == 0))
          goto LAB_00101882;
          iVar7 = OPENSSL_sk_push(local_1e0,local_168);
          if (iVar7 < 1) goto LAB_00100f52;
          if ((local_1f0 == 0) && (local_1f0 = OPENSSL_sk_new_null(), local_1f0 == 0))
          goto LAB_00101882;
          iVar7 = OPENSSL_sk_push(local_1f0);
          if (iVar7 < 1) goto LAB_00100f52;
          local_168 = (EVP_PKEY *)0x0;
        }
        local_220 = (EVP_PKEY *)opt_arg();
        goto switchD_001009b7_caseD_0;
      case 0x47:
        uVar15 = opt_arg();
        iVar7 = opt_format(uVar15,0xffe,&local_a8);
        break;
      case 0x48:
        if (local_16c == 0x101) {
          iVar7 = OPENSSL_sk_num(lVar12);
          if (0 < iVar7) {
            iVar7 = OPENSSL_sk_num(lVar12);
            iVar7 = iVar7 + -1;
            goto LAB_001013a3;
          }
LAB_00100f20:
          BIO_printf(_bio_err,"No key specified\n");
          goto switchD_001009b7_caseD_ffffffff;
        }
        if (local_168 == (EVP_PKEY *)0x0 && local_220 == (EVP_PKEY *)0x0) {
          if (local_1f0 == 0) goto LAB_00100f20;
          iVar8 = -1;
LAB_00101396:
          iVar7 = OPENSSL_sk_num(local_1f0);
          iVar7 = iVar8 + iVar7;
LAB_001013a3:
          if (iVar7 < 0) goto LAB_00100f20;
        }
        else {
          iVar7 = 0;
          iVar8 = 0;
          if (local_1f0 != 0) goto LAB_00101396;
        }
        if ((local_200 == (CMS_ContentInfo *)0x0) ||
           (piVar29 = ptr_00, ptr = local_200, *(int *)local_200 != iVar7)) {
          ptr = (CMS_ContentInfo *)app_malloc(0x18,"key param buffer");
          lVar19 = OPENSSL_sk_new_null();
          *(long *)((long)ptr + 8) = lVar19;
          if (lVar19 == 0) {
            pXVar17 = (X509 *)0x0;
            CRYPTO_free(ptr);
            goto LAB_001018c7;
          }
          *(int *)ptr = iVar7;
          *(int *)((long)ptr + 0x10) = 0;
          *(int *)((long)ptr + 0x14) = 0;
          piVar29 = (int *)ptr;
          if (ptr_00 != (int *)0x0) {
            *(CMS_ContentInfo **)((long)local_200 + 0x10) = ptr;
            piVar29 = ptr_00;
          }
        }
        local_200 = ptr;
        opt_arg();
        iVar7 = OPENSSL_sk_push(*(undefined8 *)((long)local_200 + 8));
        ptr_00 = piVar29;
        goto joined_r0x0010160e;
      case 0x49:
        if ((local_1a8 != 0) || (local_1a8 = OPENSSL_sk_new_null(), local_1a8 != 0)) {
          opt_arg();
          iVar7 = OPENSSL_sk_push(local_1a8);
          goto joined_r0x0010160e;
        }
        goto LAB_00101882;
      case 0x4a:
        if ((local_1a0 == 0) && (local_1a0 = OPENSSL_sk_new_null(), local_1a0 == 0))
        goto LAB_00101882;
        opt_arg();
        iVar7 = OPENSSL_sk_push(local_1a0);
joined_r0x0010160e:
        if (0 < iVar7) goto switchD_001009b7_caseD_0;
        goto LAB_00100f52;
      case 0x4b:
      case 0x4c:
      case 0x4d:
      case 0x4e:
        lVar19 = opt_flag();
        local_1d8 = (BIO *)(lVar19 + 1);
        goto switchD_001009b7_caseD_0;
      case 0x4f:
        local_1d8 = (BIO *)opt_arg();
        goto switchD_001009b7_caseD_0;
      case 0x50:
        uVar15 = opt_arg();
        local_188 = setup_engine_methods(uVar15,0xffffffff,0);
        goto switchD_001009b7_caseD_0;
      case -1:
        goto switchD_001009b7_caseD_ffffffff;
      }
      if (iVar7 != 0) goto switchD_001009b7_caseD_0;
      goto switchD_001009b7_caseD_ffffffff;
    }
LAB_00100a78:
    iVar8 = app_RAND_load();
    if ((iVar8 == 0) ||
       ((((local_1e8 != (BIO *)0x0 && (iVar8 = opt_md(local_1e8,&local_88), iVar8 == 0)) ||
         (iVar8 = opt_cipher_any(local_1d0), iVar8 == 0)) ||
        ((local_1d8 != (BIO *)0x0 && (iVar8 = opt_cipher_any(local_1d8), iVar8 == 0))))))
    goto LAB_00100f52;
    plVar16 = (long *)opt_rest();
    if ((iVar11 != -1) || (local_1a8 != 0)) {
      if (local_1a0 != 0) {
        if ((local_16c & 0x400) == 0) goto LAB_00101a3c;
        goto LAB_00101a54;
      }
      BIO_puts(_bio_err,"No Signed Receipts Recipients\n");
switchD_001009b7_caseD_ffffffff:
      BIO_printf(_bio_err,"%s: Use -help for summary.\n",uVar14);
      goto LAB_00100f52;
    }
    if ((local_16c & 0x400) == 0) {
      if (local_1a0 != 0) {
LAB_00101a3c:
        BIO_puts(_bio_err,"Signed receipts only allowed with -sign\n");
        goto switchD_001009b7_caseD_ffffffff;
      }
      if (local_1f0 != 0 || local_1e0 != 0) {
        BIO_puts(_bio_err,"Multiple signers or keys not allowed\n");
        local_1a8 = 0;
        goto switchD_001009b7_caseD_ffffffff;
      }
      if ((uVar26 & 0x100000) == 0) {
LAB_00101bd6:
        if (local_16c == 0x202) {
          if ((local_220 == (EVP_PKEY *)0x0 && local_c8 == (EVP_PKEY *)0x0) &&
             (local_220 = (EVP_PKEY *)0x0, local_1b8 == (uchar *)0x0 && local_158 == (uchar *)0x0))
          {
            BIO_printf(_bio_err,"No recipient certificate or key specified\n");
LAB_00101c27:
            local_1a8 = 0;
            local_1b8 = (uchar *)0x0;
            local_1f0 = 0;
            local_1e0 = 0;
            goto switchD_001009b7_caseD_ffffffff;
          }
        }
        else if (local_16c == 0x101) {
          if (((*plVar16 == 0) && (local_158 == (uchar *)0x0 && local_1b8 == (uchar *)0x0)) &&
             (iVar8 = OPENSSL_sk_num(lVar12), iVar8 < 1)) {
            BIO_printf(_bio_err,"No recipient(s) certificate(s) specified\n");
            goto LAB_00101c27;
          }
        }
        else if (local_16c == 0) {
          BIO_printf(_bio_err,
                     "No operation option (-encrypt|-decrypt|-sign|-verify|...) specified.\n");
          local_1a8 = 0;
          local_1f0 = 0;
          local_1e0 = 0;
          goto switchD_001009b7_caseD_ffffffff;
        }
      }
      else {
        if ((uVar26 & 0x100) != 0) goto LAB_00101f71;
        if (local_16c != 0x204) goto LAB_00101bd6;
        if ((uVar26 & 0x28) != 0) {
          BIO_puts(_bio_err,
                   "Incompatible options: CAdES validation requires certs and signed attributes validations\n"
                  );
          local_1a8 = 0;
          local_1f0 = 0;
          local_1e0 = 0;
          goto switchD_001009b7_caseD_ffffffff;
        }
      }
      ppBVar24 = (BIO **)0x0;
      iVar8 = app_passwd(local_130,0,&local_70);
      if (iVar8 != 0) {
        if ((uVar26 & 0x40) == 0) {
          BIO_printf(_bio_err,"Warning: -nodetach option is ignored for non-signing operation\n");
        }
        uVar26 = (ulong)(uVar9 & 0xffffffbf);
        if ((local_16c & 0x200) == 0) {
          local_1f0 = 0;
          local_1e0 = 0;
          bVar1 = false;
          if (local_1c0 != (BIO *)0x0) {
LAB_00100c12:
            BIO_printf(_bio_err,"Warning: -contfile option is ignored for the given operation\n");
          }
          bVar27 = false;
          if (local_16c != 0x101) goto LAB_00101b5e;
          if (((uVar26 & 0x80) == 0) || (local_b4 = 2, !bVar1)) {
            if (local_98 == (EVP_CIPHER *)0x0) {
              local_98 = EVP_aes_256_cbc();
            }
            bVar27 = local_1b8 != (uchar *)0x0 && local_198 == (uchar *)0x0;
            pcVar28 = (char *)(ulong)bVar27;
            if (bVar27) {
              BIO_printf(_bio_err,"No secret key id\n");
              iVar7 = 2;
              local_198 = (uchar *)0x0;
              goto LAB_00100f5b;
            }
            lVar19 = *plVar16;
            if (lVar19 != 0) goto LAB_00101e5c;
            bVar27 = false;
            uVar9 = 0;
            uVar6 = 0;
            if (local_1b0 == (X509 *)0x0) goto LAB_00101d12;
            goto LAB_00100c8c;
          }
LAB_00100c6b:
          local_b4 = 2;
          bVar1 = true;
          bVar27 = false;
          uVar9 = (uint)(uVar26 >> 6) & 1;
          goto LAB_00100c84;
        }
        local_1f0 = 0;
        bVar27 = true;
        local_1e0 = 0;
        bVar1 = false;
LAB_00101b5e:
        if (*plVar16 != 0) {
          BIO_printf(_bio_err,
                     "Warning: recipient certificate file parameters ignored for operation other than -encrypt\n"
                    );
        }
        if ((uVar26 & 0x80) != 0) {
          if ((local_16c & 0x100) == 0) {
            local_b0 = 2;
          }
          if (bVar27) {
            bVar27 = true;
            uVar9 = (uint)(uVar26 >> 6) & 1;
            if (!bVar1) {
              uVar9 = 0;
            }
            if (local_1c0 == (BIO *)0x0) {
              uVar9 = 1;
            }
            goto LAB_00100c84;
          }
          local_b4 = 2;
          if (bVar1) goto LAB_00100c6b;
        }
        uVar9 = 0;
        goto LAB_00100c84;
      }
      local_1f0 = 0;
      local_1e0 = 0;
LAB_00101f05:
      BIO_printf(_bio_err,"Error getting password\n");
      goto LAB_00100f52;
    }
LAB_00101a54:
    if (((uVar26 & 0x100000) != 0) && ((uVar26 & 0x100) != 0)) {
LAB_00101f71:
      BIO_puts(_bio_err,"Incompatible options: CAdES requires signed attributes\n");
      goto switchD_001009b7_caseD_ffffffff;
    }
    if (local_220 == (EVP_PKEY *)0x0) {
      if (local_168 != (EVP_PKEY *)0x0) goto LAB_00101a83;
      if (local_1e0 == 0) {
        BIO_printf(_bio_err,"No signer certificate specified\n");
        goto switchD_001009b7_caseD_ffffffff;
      }
LAB_00101af2:
      ppBVar24 = (BIO **)0x0;
      iVar8 = app_passwd(local_130,0,&local_70);
      if (iVar8 != 0) {
        if ((local_16c & 0x200) == 0) {
          local_220 = (EVP_PKEY *)0x0;
          local_168 = (EVP_PKEY *)0x0;
          bVar1 = true;
          bVar27 = false;
          if (local_1c0 != (BIO *)0x0) goto LAB_00100c12;
        }
        else {
          local_220 = (EVP_PKEY *)0x0;
          bVar27 = true;
          local_168 = (EVP_PKEY *)0x0;
          bVar1 = true;
        }
        goto LAB_00101b5e;
      }
      goto LAB_00101f05;
    }
    if (local_168 == (EVP_PKEY *)0x0) {
      BIO_puts(_bio_err,"Illegal -inkey without -signer\n");
      goto switchD_001009b7_caseD_ffffffff;
    }
LAB_00101a83:
    if ((local_1e0 == 0) && (local_1e0 = OPENSSL_sk_new_null(), local_1e0 == 0)) goto LAB_00101882;
    iVar8 = OPENSSL_sk_push(local_1e0,local_168);
    if (iVar8 < 1) goto LAB_00100f52;
    if ((local_1f0 != 0) || (local_1f0 = OPENSSL_sk_new_null(), local_1f0 != 0)) {
      iVar8 = OPENSSL_sk_push(local_1f0);
      if (0 < iVar8) goto LAB_00101af2;
      goto LAB_00100f52;
    }
    goto LAB_00101882;
  }
  local_1b8 = (uchar *)0x0;
  pCVar22 = (CMS_SignerInfo *)0x0;
  ptr_00 = (int *)0x0;
  iVar7 = 1;
  local_198 = (uchar *)0x0;
  pXVar17 = (X509 *)0x0;
  local_1d0 = (void *)0x0;
  local_1f8 = (X509_STORE *)0x0;
  local_208 = (X509 *)0x0;
  local_1c8 = (X509 *)0x0;
  local_1b0 = (X509 *)0x0;
  local_1f0 = 0;
  local_1e0 = 0;
  local_1a8 = 0;
  local_1a0 = 0;
  local_220 = (EVP_PKEY *)0x0;
  local_188 = 0;
  local_200 = (CMS_ContentInfo *)0x0;
  local_210 = (CMS_ContentInfo *)0x0;
  local_218 = (CMS_ContentInfo *)0x0;
  local_1c0 = (BIO *)0x0;
  local_1e8 = (BIO *)0x0;
  local_1d8 = (BIO *)0x0;
  local_190 = (ASN1_OBJECT *)0x0;
  local_178 = (CONF *)0x0;
  goto LAB_0010054b;
LAB_001009c0:
  if (0x7ee < iVar7) {
    if (iVar7 == 0x7f0) {
      local_1d0 = (void *)opt_unknown();
    }
    else if (iVar7 == 0x7f1) {
      local_208 = (X509 *)opt_arg();
    }
    goto switchD_001009b7_caseD_0;
  }
  if (2000 < iVar7) {
    iVar7 = opt_verify(iVar7);
    if (iVar7 == 0) goto LAB_00100f52;
    iVar10 = iVar10 + 1;
    goto switchD_001009b7_caseD_0;
  }
  if (iVar7 < 0x645) {
    if (iVar7 < 0x641) {
      if (1 < iVar7 - 0x5ddU) goto switchD_001009b7_caseD_0;
      iVar7 = opt_rand(iVar7);
    }
    else {
      iVar7 = opt_provider(iVar7);
    }
    if (iVar7 == 0) goto LAB_00100f52;
    goto switchD_001009b7_caseD_0;
  }
  if (iVar7 != 0x646) goto switchD_001009b7_caseD_0;
  uVar15 = opt_arg();
  local_178 = (CONF *)app_load_config_modules(uVar15);
  if (local_178 != (CONF *)0x0) goto switchD_001009b7_caseD_0;
LAB_00101882:
  pXVar17 = (X509 *)0x0;
LAB_001018c7:
  local_200 = (CMS_ContentInfo *)0x0;
  local_1b0 = (X509 *)0x0;
  local_1c8 = (X509 *)0x0;
  local_1d0 = (void *)0x0;
  local_1f8 = (X509_STORE *)0x0;
  local_208 = (X509 *)0x0;
  local_220 = (EVP_PKEY *)0x0;
  pCVar22 = (CMS_SignerInfo *)0x0;
  local_210 = (CMS_ContentInfo *)0x0;
  iVar7 = 1;
  local_218 = (CMS_ContentInfo *)0x0;
  local_1c0 = (BIO *)0x0;
  local_1e8 = (BIO *)0x0;
  local_1d8 = (BIO *)0x0;
  goto LAB_0010054b;
LAB_00101e5c:
  ppBVar24 = (BIO **)0x0;
  pXVar17 = (X509 *)load_cert_pass(lVar19,0,1);
  if (pXVar17 != (X509 *)0x0) {
    iVar8 = OPENSSL_sk_push(lVar12);
    if (iVar8 != 0) goto code_r0x00101e4b;
    iVar7 = 2;
LAB_001019a5:
    local_1b0 = (X509 *)0x0;
    goto LAB_00100f8b;
  }
  local_208 = (X509 *)0x0;
  local_1c8 = (X509 *)0x0;
  local_1b0 = (X509 *)0x0;
  local_220 = (EVP_PKEY *)0x0;
  goto LAB_00101eb2;
code_r0x00101e4b:
  lVar19 = plVar16[1];
  plVar16 = plVar16 + 1;
  if (lVar19 == 0) goto LAB_00102509;
  goto LAB_00101e5c;
LAB_001029fa:
  iVar11 = OPENSSL_sk_num(uVar13);
  if (iVar11 <= iVar8) goto LAB_00102a07;
  uVar14 = OPENSSL_sk_value(uVar13,iVar8);
  iVar11 = pkey_ctrl_string(ctx,uVar14);
  if (iVar11 < 1) {
    BIO_printf(_bio_err,"parameter error \"%s\"\n");
    ERR_print_errors(_bio_err);
    goto LAB_00102ab3;
  }
  iVar8 = iVar8 + 1;
  goto LAB_001029fa;
LAB_00102f82:
  iVar8 = OPENSSL_sk_num(uVar13);
  if (iVar8 <= iVar11) goto LAB_00102f8e;
  OPENSSL_sk_value(uVar13,iVar11);
  iVar8 = pkey_ctrl_string(uVar14);
  if (iVar8 < 1) {
    pXVar17 = (X509 *)0x0;
    pCVar22 = (CMS_SignerInfo *)0x0;
    BIO_printf(_bio_err,"parameter error \"%s\"\n");
    ERR_print_errors(_bio_err);
    iVar7 = 3;
    goto LAB_0010054b;
  }
  iVar11 = iVar11 + 1;
  goto LAB_00102f82;
LAB_00100f52:
  iVar7 = 1;
LAB_00100f5b:
  pXVar17 = (X509 *)0x0;
  local_1b0 = (X509 *)0x0;
LAB_00100f8b:
  local_1c8 = (X509 *)0x0;
  local_208 = (X509 *)0x0;
  local_220 = (EVP_PKEY *)0x0;
LAB_00100f94:
  local_1d0 = (void *)0x0;
  local_1f8 = (X509_STORE *)0x0;
  pCVar22 = (CMS_SignerInfo *)0x0;
  local_200 = (CMS_ContentInfo *)0x0;
  local_210 = (CMS_ContentInfo *)0x0;
  local_218 = (CMS_ContentInfo *)0x0;
  local_1c0 = (BIO *)0x0;
  local_1e8 = (BIO *)0x0;
  local_1d8 = (BIO *)0x0;
  goto LAB_0010054b;
LAB_00102509:
  uVar9 = 0;
  bVar27 = false;
LAB_00100c84:
  uVar6 = uVar9;
  if (local_1b0 != (X509 *)0x0) {
LAB_00100c8c:
    uVar9 = uVar6;
    ppBVar24 = (BIO **)0x0;
    iVar8 = load_certs(local_1b0,0,&local_80);
    if (iVar8 == 0) {
      ERR_print_errors(_bio_err);
      iVar7 = 2;
      goto LAB_00100f5b;
    }
  }
  pcVar28 = (char *)(ulong)(local_16c == 0x202);
  if ((local_c8 == (EVP_PKEY *)0x0) || (local_16c != 0x202)) {
LAB_00101d12:
    if (local_208 != (X509 *)0x0) {
      ppBVar24 = (BIO **)0x0;
      local_208 = (X509 *)load_cert_pass(local_208,0,1);
      if (local_208 == (X509 *)0x0) {
LAB_001027d7:
        pXVar17 = (X509 *)0x0;
        ERR_print_errors(_bio_err);
        local_1b0 = local_208;
        iVar7 = 2;
        goto LAB_00100f8b;
      }
    }
    if (local_16c != 0x306) {
      if ((local_16c == 0x101) || ((char)pcVar28 != '\0')) {
        local_1b0 = (X509 *)0x0;
        pXVar17 = local_208;
        goto LAB_00100d4c;
      }
      if (local_16c == 0x503) {
        local_1c8 = (X509 *)0x0;
        goto LAB_0010222b;
      }
      local_1c8 = (X509 *)0x0;
      local_1b0 = (X509 *)0x0;
      local_220 = (EVP_PKEY *)0x0;
      if (local_140 != 0) goto LAB_00101dba;
      goto LAB_0010201c;
    }
    ppBVar24 = (BIO **)0x0;
    local_1c8 = (X509 *)load_cert_pass(local_168,0,1);
    if (local_1c8 != (X509 *)0x0) {
LAB_0010222b:
      local_1b0 = (X509 *)0x0;
      if (local_220 == (EVP_PKEY *)0x0) {
        local_220 = local_168;
        goto LAB_0010224d;
      }
      goto LAB_00100d61;
    }
    pXVar17 = (X509 *)0x0;
    ERR_print_errors(_bio_err);
    local_1b0 = (X509 *)0x0;
    local_220 = (EVP_PKEY *)0x0;
LAB_00101eb2:
    local_1d0 = (void *)0x0;
    local_1f8 = (X509_STORE *)0x0;
    pCVar22 = (CMS_SignerInfo *)0x0;
    local_200 = (CMS_ContentInfo *)0x0;
    iVar7 = 2;
    local_210 = (CMS_ContentInfo *)0x0;
    local_218 = (CMS_ContentInfo *)0x0;
    local_1c0 = (BIO *)0x0;
    local_1e8 = (BIO *)0x0;
    local_1d8 = (BIO *)0x0;
    goto LAB_0010054b;
  }
  ppBVar24 = (BIO **)0x0;
  local_1b0 = (X509 *)load_cert_pass(local_c8,0,1);
  if (local_1b0 == (X509 *)0x0) {
    pXVar17 = (X509 *)0x0;
    ERR_print_errors(_bio_err);
    local_208 = (X509 *)0x0;
    local_1c8 = (X509 *)0x0;
    local_220 = (EVP_PKEY *)0x0;
    goto LAB_00101eb2;
  }
  pXVar17 = local_208;
  if (local_208 != (X509 *)0x0) {
    ppBVar24 = (BIO **)0x0;
    pXVar17 = (X509 *)load_cert_pass(local_208,0,1);
    local_208 = local_1b0;
    if (pXVar17 == (X509 *)0x0) goto LAB_001027d7;
  }
LAB_00100d4c:
  local_208 = pXVar17;
  local_1c8 = (X509 *)0x0;
  if (local_220 == (EVP_PKEY *)0x0) {
    local_220 = local_c8;
LAB_0010224d:
    if (local_220 != (EVP_PKEY *)0x0) goto LAB_00100d61;
  }
  else {
LAB_00100d61:
    pcVar28 = "signing key";
    ppBVar24 = local_70;
    local_220 = (EVP_PKEY *)load_key(local_220,local_a8,0);
    if (local_220 == (EVP_PKEY *)0x0) {
      pXVar17 = (X509 *)0x0;
      goto LAB_00101eb2;
    }
  }
  if (local_140 != 0) {
    if (local_16c == 0x503) {
      if ((local_218 == (CMS_ContentInfo *)0x0) && (((uint)uVar26 & 0x1040) == 0x40)) {
        local_1d0 = (void *)OPENSSL_hexstr2buf(local_140,&local_78);
        local_1d8 = (BIO *)0x0;
        if (local_1d0 == (void *)0x0) {
          BIO_printf(_bio_err,"Invalid hex value after -digest\n");
          goto LAB_00102753;
        }
        goto LAB_00100e15;
      }
      pcVar28 = "Cannot use -digest when -in, -nodetach or streaming is used\n";
    }
    else {
LAB_00101dba:
      pcVar28 = "Cannot use -digest for non-signing operation\n";
    }
    pXVar17 = (X509 *)0x0;
    BIO_printf(_bio_err,pcVar28);
    iVar7 = 2;
    goto LAB_00100f94;
  }
LAB_0010201c:
  uVar25 = 2;
  if (uVar9 == 0) {
    uVar25 = local_b4;
  }
  local_1d8 = (BIO *)bio_open_default(local_218,0x72,uVar25);
  if (local_1d8 == (BIO *)0x0) {
    pCVar22 = (CMS_SignerInfo *)0x0;
    pXVar17 = (X509 *)0x0;
    local_1d0 = (void *)0x0;
    iVar7 = 2;
    local_1f8 = (X509_STORE *)0x0;
    local_200 = (CMS_ContentInfo *)0x0;
    local_210 = (CMS_ContentInfo *)0x0;
    local_218 = (CMS_ContentInfo *)0x0;
    local_1c0 = (BIO *)0x0;
    local_1e8 = (BIO *)0x0;
    goto LAB_0010054b;
  }
  if (bVar27) {
    ppBVar24 = &local_a0;
    local_218 = (CMS_ContentInfo *)load_content_info(local_b4,local_1d8,uVar26);
    if (local_218 == (CMS_ContentInfo *)0x0) {
      local_1d0 = (void *)0x0;
LAB_00102753:
      pCVar22 = (CMS_SignerInfo *)0x0;
      pXVar17 = (X509 *)0x0;
      iVar7 = 2;
      local_1f8 = (X509_STORE *)0x0;
      local_200 = (CMS_ContentInfo *)0x0;
      local_210 = (CMS_ContentInfo *)0x0;
      local_1c0 = (BIO *)0x0;
      local_1e8 = (BIO *)0x0;
      goto LAB_0010054b;
    }
    if (local_1c0 != (BIO *)0x0) {
      BIO_free(local_a0);
      local_a0 = BIO_new_file((char *)local_1c0,"rb");
      if (local_a0 == (BIO *)0x0) {
        pCVar22 = (CMS_SignerInfo *)0x0;
        pXVar17 = (X509 *)0x0;
        BIO_printf(_bio_err,"Can\'t read content file %s\n",local_1c0);
        iVar7 = 2;
        local_1d0 = (void *)0x0;
        local_1f8 = (X509_STORE *)0x0;
        local_210 = (CMS_ContentInfo *)0x0;
        local_1c0 = (BIO *)0x0;
        local_1e8 = (BIO *)0x0;
        local_200 = (CMS_ContentInfo *)0x0;
        goto LAB_0010054b;
      }
    }
    if (local_138 != 0) {
      psVar18 = CMS_get1_certs(local_218);
      iVar8 = save_certs(local_138,psVar18);
      if (iVar8 == 0) {
        pCVar22 = (CMS_SignerInfo *)0x0;
        pXVar17 = (X509 *)0x0;
        BIO_printf(_bio_err,"Error writing certs to %s\n",local_138);
        local_1d0 = (void *)0x0;
        iVar7 = 5;
        local_1f8 = (X509_STORE *)0x0;
        local_200 = (CMS_ContentInfo *)0x0;
        local_210 = (CMS_ContentInfo *)0x0;
        local_1c0 = (BIO *)0x0;
        local_1e8 = (BIO *)0x0;
        goto LAB_0010054b;
      }
      OSSL_STACK_OF_X509_free(psVar18);
    }
    local_1d0 = (void *)0x0;
  }
  else {
    local_1d0 = (void *)0x0;
    local_218 = (CMS_ContentInfo *)0x0;
  }
LAB_00100e15:
  local_160 = (uint)uVar26;
  if (local_210 != (CMS_ContentInfo *)0x0) {
    mode = "r";
    if (local_ac == 4) {
      mode = "rb";
    }
    local_1c0 = BIO_new_file((char *)local_210,mode);
    if (local_1c0 == (BIO *)0x0) {
      pCVar22 = (CMS_SignerInfo *)0x0;
      pXVar17 = (X509 *)0x0;
      BIO_printf(_bio_err,"Can\'t open receipt file %s\n",local_210);
      local_200 = (CMS_ContentInfo *)0x0;
      local_210 = (CMS_ContentInfo *)0x0;
      local_1e8 = (BIO *)0x0;
      iVar7 = 2;
      local_1f8 = (X509_STORE *)0x0;
    }
    else {
      ppBVar24 = (BIO **)0x0;
      local_210 = (CMS_ContentInfo *)load_content_info(local_ac,local_1c0,0);
      if (local_210 != (CMS_ContentInfo *)0x0) goto LAB_00100e8c;
      pCVar22 = (CMS_SignerInfo *)0x0;
      pXVar17 = (X509 *)0x0;
      iVar7 = 2;
      local_1f8 = (X509_STORE *)0x0;
      local_200 = (CMS_ContentInfo *)0x0;
      local_1e8 = (BIO *)0x0;
    }
    goto LAB_0010054b;
  }
  local_1c0 = (BIO *)0x0;
LAB_00100e8c:
  iVar8 = 2;
  if (uVar9 == 0) {
    iVar8 = local_b0;
  }
  local_1e8 = (BIO *)bio_open_default(local_e0,0x77,iVar8);
  if (local_1e8 == (BIO *)0x0) {
    pCVar22 = (CMS_SignerInfo *)0x0;
    pXVar17 = (X509 *)0x0;
    iVar7 = 2;
    local_1f8 = (X509_STORE *)0x0;
    local_200 = (CMS_ContentInfo *)0x0;
    goto LAB_0010054b;
  }
  if ((local_16c != 0x204) && (local_16c != 0x207)) {
    if (0x10e < local_16c) {
      if (local_16c == 0x306) {
        local_200 = (CMS_ContentInfo *)CMS_get0_SignerInfos(local_218);
        if (local_200 != (CMS_ContentInfo *)0x0) {
          pCVar22 = (CMS_SignerInfo *)OPENSSL_sk_value(local_200,0);
          local_200 = CMS_sign_receipt(pCVar22,local_1c8,local_220,local_80,local_160);
          if (local_200 != (CMS_ContentInfo *)0x0) {
            CMS_ContentInfo_free(local_218);
LAB_00102c01:
            local_218 = local_200;
            local_1f8 = (X509_STORE *)0x0;
            local_200 = (CMS_ContentInfo *)0x0;
            goto switchD_001023d2_caseD_203;
          }
        }
        pCVar22 = (CMS_SignerInfo *)0x0;
        pXVar17 = (X509 *)0x0;
        iVar7 = 3;
        local_1f8 = (X509_STORE *)0x0;
      }
      else {
switchD_00100f16_caseD_102:
        if (!bVar1) {
          local_1f8 = (X509_STORE *)0x0;
          goto LAB_0010239b;
        }
        if (local_16c != 0x503) goto LAB_001031c3;
        if ((((uVar26 & 0x40) != 0) && (local_1d0 == (void *)0x0)) && (local_b0 == 0x8007)) {
          local_160 = local_160 | 0x1000;
        }
        local_160 = local_160 | 0x4000;
        uVar14 = app_get0_propq();
        local_218 = (CMS_ContentInfo *)
                    CMS_sign_ex(0,0,local_80,local_1d8,local_160,uVar13,uVar14,ppBVar24);
        if (local_218 == (CMS_ContentInfo *)0x0) goto LAB_00102c27;
        if (local_190 != (ASN1_OBJECT *)0x0) {
          CMS_set1_eContentType(local_218,local_190);
        }
        if (local_1a0 == 0) {
          local_1f8 = (X509_STORE *)0x0;
          local_200 = (CMS_ContentInfo *)0x0;
          goto LAB_00102e1f;
        }
        lVar19 = make_names_stack();
        if (lVar19 == 0) {
LAB_00103116:
          lVar21 = 0;
        }
        else {
          if (local_1a8 == 0) {
            lVar21 = 0;
          }
          else {
            lVar21 = make_names_stack();
            if (lVar21 == 0) goto LAB_00103116;
          }
          uVar13 = app_get0_libctx();
          local_200 = (CMS_ContentInfo *)
                      CMS_ReceiptRequest_create0_ex(0,0xffffffff,iVar11,lVar21,lVar19,uVar13);
          local_1f8 = (X509_STORE *)0x0;
          if (local_200 != (CMS_ContentInfo *)0x0) goto LAB_00102e1f;
        }
        OPENSSL_sk_pop_free(lVar19,GENERAL_NAMES_free);
        OPENSSL_sk_pop_free(lVar21,GENERAL_NAMES_free);
        BIO_puts(_bio_err,"Signed Receipt Request Creation Error\n");
LAB_00102ab3:
        pCVar22 = (CMS_SignerInfo *)0x0;
        iVar7 = 3;
        local_1f8 = (X509_STORE *)0x0;
        pXVar17 = (X509 *)0x0;
        local_200 = (CMS_ContentInfo *)0x0;
      }
      goto LAB_0010054b;
    }
    if (local_16c < 0x101) {
      if (bVar1) {
LAB_001031c3:
        local_1f8 = (X509_STORE *)0x0;
        goto LAB_001031ca;
      }
    }
    else {
      switch(local_16c) {
      case 0x101:
        app_get0_propq();
        local_218 = (CMS_ContentInfo *)
                    CMS_encrypt_ex(0,local_1d8,local_98,local_160 | 0x4000,uVar13);
        if (local_218 != (CMS_ContentInfo *)0x0) {
          local_160 = local_160 | 0x4000;
          for (iVar10 = 0; iVar11 = OPENSSL_sk_num(), iVar10 < iVar11; iVar10 = iVar10 + 1) {
            uVar13 = OPENSSL_sk_value(lVar12,iVar10);
            for (piVar29 = ptr_00; piVar29 != (int *)0x0; piVar29 = *(int **)(piVar29 + 4)) {
              if (*piVar29 == iVar10) {
                pCVar20 = (CMS_RecipientInfo *)
                          CMS_add1_recipient(local_218,uVar13,local_220,local_208,uVar26 | 0x44000);
                if (pCVar20 == (CMS_RecipientInfo *)0x0) goto LAB_00102ab3;
                ctx = (EVP_PKEY_CTX *)CMS_RecipientInfo_get0_pkey_ctx(pCVar20);
                if (ctx == (EVP_PKEY_CTX *)0x0) goto LAB_00102a07;
                uVar13 = *(undefined8 *)(piVar29 + 2);
                iVar8 = 0;
                iVar11 = OPENSSL_sk_num(uVar13);
                if (0 < iVar11) goto LAB_001029fa;
                goto LAB_00102a07;
              }
            }
            pCVar20 = (CMS_RecipientInfo *)
                      CMS_add1_recipient(local_218,uVar13,local_220,local_208,uVar26 | 0x44000);
            if (pCVar20 == (CMS_RecipientInfo *)0x0) goto LAB_00102ab3;
            ctx = (EVP_PKEY_CTX *)CMS_RecipientInfo_get0_pkey_ctx(pCVar20);
LAB_00102a07:
            iVar11 = EVP_CIPHER_get_nid(local_98);
            iVar11 = EVP_PKEY_CTX_ctrl(ctx,-1,-1,0xc,iVar11,(void *)0x0);
            if ((iVar11 < 1) && (iVar11 != -2)) goto LAB_00102ab3;
            iVar11 = CMS_RecipientInfo_type(pCVar20);
            if ((iVar11 == 1) && (local_90 != (EVP_CIPHER *)0x0)) {
              ctx_00 = (EVP_CIPHER_CTX *)CMS_RecipientInfo_kari_get0_ctx(pCVar20);
              iVar11 = EVP_EncryptInit_ex(ctx_00,local_90,(ENGINE *)0x0,(uchar *)0x0,(uchar *)0x0);
              if (iVar11 != 1) goto LAB_00102ab3;
            }
          }
          if (local_1b8 != (uchar *)0x0) {
            pCVar20 = CMS_add0_recipient_key
                                (local_218,0,local_1b8,local_150,local_198,local_128,
                                 (ASN1_GENERALIZEDTIME *)0x0,(ASN1_OBJECT *)0x0,(ASN1_TYPE *)0x0);
            if (pCVar20 == (CMS_RecipientInfo *)0x0) goto LAB_00102ab3;
            local_198 = (uchar *)0x0;
          }
          if (local_158 != (uchar *)0x0) {
            pCVar22 = (CMS_SignerInfo *)CRYPTO_strdup((char *)local_158,"apps/cms.c",0x415);
            if (pCVar22 == (CMS_SignerInfo *)0x0) {
              pXVar17 = (X509 *)0x0;
              iVar7 = 3;
              local_1b8 = (uchar *)0x0;
              local_1f8 = (X509_STORE *)0x0;
              local_200 = (CMS_ContentInfo *)0x0;
            }
            else {
              pCVar20 = CMS_add0_recipient_password
                                  (local_218,-1,0,0,(uchar *)pCVar22,-1,(EVP_CIPHER *)0x0);
              if (pCVar20 != (CMS_RecipientInfo *)0x0) goto LAB_00102be4;
              pXVar17 = (X509 *)0x0;
              local_1b8 = (uchar *)0x0;
              local_1f8 = (X509_STORE *)0x0;
              iVar7 = 3;
              local_200 = (CMS_ContentInfo *)0x0;
            }
            goto LAB_0010054b;
          }
LAB_00102be4:
          if (((uVar26 & 0x1000) != 0) ||
             (iVar10 = CMS_final(local_218,local_1d8,(BIO *)0x0,local_160), iVar10 != 0)) {
            local_1b8 = (uchar *)0x0;
            local_200 = local_218;
            goto LAB_00102c01;
          }
          if (local_208 != (X509 *)0x0) {
            uVar26 = ERR_peek_error();
            uVar9 = (uint)uVar26 & 0x7fffff;
            if ((uVar26 & 0x80000000) != 0) {
              uVar9 = (uint)uVar26 & 0x7fffffff;
            }
            if (uVar9 == 0xc4) {
              BIO_printf(_bio_err,"Cannot use originator for encryption\n");
            }
            local_1b8 = (uchar *)0x0;
            goto LAB_00102ab3;
          }
          local_1b8 = (uchar *)0x0;
        }
LAB_00102c27:
        pCVar22 = (CMS_SignerInfo *)0x0;
        pXVar17 = (X509 *)0x0;
        local_1f8 = (X509_STORE *)0x0;
        iVar7 = 3;
        local_200 = (CMS_ContentInfo *)0x0;
        goto LAB_0010054b;
      default:
        goto switchD_00100f16_caseD_102;
      case 0x108:
        uVar14 = app_get0_propq();
        local_218 = (CMS_ContentInfo *)CMS_digest_create_ex(local_1d8,local_88,uVar26,uVar13,uVar14)
        ;
        break;
      case 0x10a:
        local_218 = CMS_compress(local_1d8,-1,local_160);
        break;
      case 0x10c:
        uVar14 = app_get0_propq();
        local_218 = (CMS_ContentInfo *)
                    CMS_EncryptedData_encrypt_ex
                              (local_1d8,local_98,local_1b8,local_150,uVar26,uVar13,uVar14,pcVar28);
        break;
      case 0x10e:
        uVar14 = app_get0_propq();
        local_218 = (CMS_ContentInfo *)CMS_data_create_ex(local_1d8,uVar26,uVar13,uVar14);
      }
    }
    local_1f8 = (X509_STORE *)0x0;
    if (local_218 == (CMS_ContentInfo *)0x0) goto LAB_001025dc;
    local_200 = (CMS_ContentInfo *)0x0;
switchD_001023d2_caseD_203:
    if (bVar2) {
      if (bVar3) {
        p = (ASN1_PCTX *)0x0;
        lVar19 = get_nameopt();
        if ((lVar19 != 0x82031f) && (p = ASN1_PCTX_new(), p != (ASN1_PCTX *)0x0)) {
          ASN1_PCTX_set_flags(p,1);
          uVar26 = get_nameopt();
          ASN1_PCTX_set_str_flags(p,uVar26);
          uVar26 = get_nameopt();
          ASN1_PCTX_set_nm_flags(p,uVar26);
        }
        CMS_ContentInfo_print_ctx(local_1e8,local_218,0,p);
        ASN1_PCTX_free(p);
      }
      goto LAB_001025c7;
    }
    if (local_b0 == 0x8007) {
      if (local_d8 != 0) {
        BIO_printf(local_1e8,"To: %s%s",local_d8,local_148);
      }
      if (local_d0 != 0) {
        BIO_printf(local_1e8,"From: %s%s",local_d0,local_148);
      }
      if (local_118 != 0) {
        BIO_printf(local_1e8,"Subject: %s%s",local_118,local_148);
      }
      if (local_16c == 0x705) {
        iVar10 = SMIME_write_CMS(local_1e8,local_218,local_a0,local_160);
      }
      else {
        iVar10 = SMIME_write_CMS(local_1e8,local_218,local_1d8,local_160);
      }
LAB_00102734:
      if (0 < iVar10) goto LAB_0010273c;
      pCVar22 = (CMS_SignerInfo *)0x0;
      iVar7 = 6;
      pXVar17 = (X509 *)0x0;
      goto LAB_0010054b;
    }
    if (local_b0 == 0x8005) {
      iVar10 = PEM_write_bio_CMS_stream(local_1e8,local_218,local_1d8,local_160);
      goto LAB_00102734;
    }
    if (local_b0 == 4) {
      iVar10 = i2d_CMS_bio_stream(local_1e8,local_218,local_1d8,local_160);
      goto LAB_00102734;
    }
    pcVar28 = "Bad output format for CMS file\n";
    goto LAB_00103415;
  }
  local_1f8 = (X509_STORE *)setup_verify(local_108,local_ec,local_100,local_e8,local_f8,local_e4);
  if (local_1f8 == (X509_STORE *)0x0) {
    pCVar22 = (CMS_SignerInfo *)0x0;
    pXVar17 = (X509 *)0x0;
    iVar7 = 2;
    local_200 = (CMS_ContentInfo *)0x0;
    goto LAB_0010054b;
  }
  X509_STORE_set_verify_cb(local_1f8,cms_cb);
  if (iVar10 != 0) {
    X509_STORE_set1_param(local_1f8,pm);
  }
  if (bVar1) {
LAB_001031ca:
    local_160 = local_160 | 0x8000;
    local_200 = (CMS_ContentInfo *)0x0;
LAB_00102e1f:
    local_138._0_4_ = local_160 | 0x40000;
    for (iVar10 = 0; iVar11 = OPENSSL_sk_num(local_1e0), iVar10 < iVar11; iVar10 = iVar10 + 1) {
      local_168 = (EVP_PKEY *)OPENSSL_sk_value(local_1e0,iVar10);
      uVar13 = OPENSSL_sk_value(local_1f0,iVar10);
      local_1c8 = (X509 *)load_cert_pass(local_168,0,1,0,"signer certificate");
      pk = local_220;
      if ((local_1c8 == (X509 *)0x0) ||
         (pk = (EVP_PKEY *)load_key(uVar13,local_a8,0,local_70,local_188,"signing key"),
         piVar29 = ptr_00, pk == (EVP_PKEY *)0x0)) {
        pXVar17 = (X509 *)0x0;
        pCVar22 = (CMS_SignerInfo *)0x0;
        iVar7 = 2;
        local_220 = pk;
        goto LAB_0010054b;
      }
      for (; local_220 = pk, piVar29 != (int *)0x0; piVar29 = *(int **)(piVar29 + 4)) {
        if (*piVar29 == iVar10) {
          pCVar22 = CMS_add1_signer(local_218,local_1c8,pk,local_88,(uint)local_138);
          if (pCVar22 == (CMS_SignerInfo *)0x0) goto LAB_00102ff4;
          uVar14 = CMS_SignerInfo_get0_pkey_ctx(pCVar22);
          uVar13 = *(undefined8 *)(piVar29 + 2);
          iVar11 = OPENSSL_sk_num(uVar13);
          if (iVar11 < 1) goto LAB_00102f8e;
          iVar11 = 0;
          goto LAB_00102f82;
        }
      }
      pCVar22 = CMS_add1_signer(local_218,local_1c8,pk,local_88,local_160);
      if (pCVar22 == (CMS_SignerInfo *)0x0) {
LAB_00102ff4:
        pXVar17 = (X509 *)0x0;
        iVar7 = 3;
        goto LAB_0010054b;
      }
LAB_00102f8e:
      if ((local_200 != (CMS_ContentInfo *)0x0) &&
         (iVar11 = CMS_add1_ReceiptRequest(pCVar22), iVar11 == 0)) {
        iVar7 = 3;
        pCVar22 = (CMS_SignerInfo *)0x0;
        pXVar17 = (X509 *)0x0;
        goto LAB_0010054b;
      }
      X509_free(local_1c8);
      local_220 = (EVP_PKEY *)0x0;
      EVP_PKEY_free(pk);
      local_1c8 = (X509 *)0x0;
    }
    uVar26 = (ulong)local_160;
    if (local_16c == 0x503) {
      if (local_1d0 == (void *)0x0) {
        if ((local_160 & 0x1000) == 0) {
          iVar10 = CMS_final(local_218,local_1d8,(BIO *)0x0,local_160);
          goto joined_r0x00103190;
        }
      }
      else if ((local_160 & 0x1000) == 0) {
        iVar10 = CMS_final_digest(local_218,local_1d0,local_78 & 0xffffffff);
joined_r0x00103190:
        if (iVar10 == 0) {
          pCVar22 = (CMS_SignerInfo *)0x0;
          iVar7 = 3;
          pXVar17 = (X509 *)0x0;
          goto LAB_0010054b;
        }
      }
    }
  }
  else {
LAB_0010239b:
    local_200 = (CMS_ContentInfo *)0x0;
  }
  local_160 = (uint)uVar26;
  if (local_218 == (CMS_ContentInfo *)0x0) {
    local_218 = local_200;
LAB_001025dc:
    pCVar22 = (CMS_SignerInfo *)0x0;
    pXVar17 = (X509 *)0x0;
    BIO_printf(_bio_err,"Error creating CMS structure\n");
    local_200 = local_218;
    iVar7 = 3;
    local_218 = (CMS_ContentInfo *)0x0;
    goto LAB_0010054b;
  }
  switch(local_16c) {
  case 0x202:
    if ((uVar26 & 0x20000) != 0) {
      CMS_decrypt(local_218,(EVP_PKEY *)0x0,(X509 *)0x0,(BIO *)0x0,(BIO *)0x0,local_160);
    }
    if (local_1b8 == (uchar *)0x0) {
LAB_0010348b:
      if ((local_220 != (EVP_PKEY *)0x0) &&
         (iVar10 = CMS_decrypt_set1_pkey_and_peer(local_218,local_220,local_1b0,local_208),
         iVar10 == 0)) {
        pcVar28 = "Error decrypting CMS using private key\n";
        goto LAB_0010358e;
      }
      if ((local_158 == (uchar *)0x0) ||
         (iVar10 = CMS_decrypt_set1_password(local_218,local_158,-1), iVar10 != 0)) {
        pCVar22 = (CMS_SignerInfo *)0x0;
        pXVar17 = (X509 *)0x0;
        iVar10 = CMS_decrypt(local_218,(EVP_PKEY *)0x0,(X509 *)0x0,local_a0,local_1e8,local_160);
        if (iVar10 != 0) goto LAB_00100567;
        BIO_printf(_bio_err,"Error decrypting CMS structure\n");
      }
      else {
        BIO_puts(_bio_err,"Error decrypting CMS using password\n");
      }
    }
    else {
      iVar10 = CMS_decrypt_set1_key(local_218,local_1b8,local_150,local_198,local_128);
      pcVar28 = "Error decrypting CMS using secret key\n";
      if (iVar10 != 0) goto LAB_0010348b;
LAB_0010358e:
      BIO_puts(_bio_err,pcVar28);
    }
    goto LAB_00103423;
  default:
    goto switchD_001023d2_caseD_203;
  case 0x204:
    iVar10 = CMS_verify(local_218,local_80,local_1f8,local_a0,local_1e8,local_160);
    if (0 < iVar10) {
      pcVar28 = "CMS";
      if ((uVar26 & 0x100000) != 0) {
        pcVar28 = "CAdES";
      }
      BIO_printf(_bio_err,"%s Verification successful\n",pcVar28);
      if (local_168 != (EVP_PKEY *)0x0) {
        psVar18 = CMS_get0_signers(local_218);
        iVar10 = save_certs(local_168,psVar18);
        if (iVar10 == 0) {
          pCVar22 = (CMS_SignerInfo *)0x0;
          pXVar17 = (X509 *)0x0;
          BIO_printf(_bio_err,"Error writing signers to %s\n",local_168);
          iVar7 = 5;
          goto LAB_0010054b;
        }
        OPENSSL_sk_free(psVar18);
      }
      if (bVar4) {
        psVar23 = CMS_get0_SignerInfos(local_218);
        uVar9 = 0;
        while (iVar10 = OPENSSL_sk_num(psVar23), (int)uVar9 < iVar10) {
          uVar13 = OPENSSL_sk_value(psVar23,uVar9);
          iVar10 = CMS_get1_ReceiptRequest(uVar13,&local_60);
          BIO_printf(_bio_err,"Signer %d:\n",(ulong)(uVar9 + 1));
          if (iVar10 == 0) {
            BIO_puts(_bio_err,"  No Receipt Request\n");
          }
          else if (iVar10 < 0) {
            BIO_puts(_bio_err,"  Receipt Request Parse Error\n");
            ERR_print_errors(_bio_err);
          }
          else {
            CMS_ReceiptRequest_get0_values(local_60,&local_48,&local_a4,&local_50,&local_58);
            BIO_puts(_bio_err,"  Signed Content ID:\n");
            iVar10 = ASN1_STRING_length(local_48);
            pcVar28 = (char *)ASN1_STRING_get0_data(local_48);
            BIO_dump_indent(_bio_err,pcVar28,iVar10,4);
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
          uVar9 = uVar9 + 1;
        }
        goto LAB_001025c7;
      }
LAB_0010273c:
      iVar7 = 0;
LAB_001025c7:
      pCVar22 = (CMS_SignerInfo *)0x0;
      pXVar17 = (X509 *)0x0;
      goto LAB_00100567;
    }
    pcVar28 = "CMS";
    if ((uVar26 & 0x100000) != 0) {
      pcVar28 = "CAdES";
    }
    BIO_printf(_bio_err,"%s Verification failure\n",pcVar28);
    if (!bVar5) goto LAB_00103423;
    iVar7 = verify_err + 0x20;
    goto LAB_0010385d;
  case 0x207:
    iVar10 = CMS_verify_receipt(local_210,local_218,local_80,local_1f8,local_160);
    if (0 < iVar10) {
      BIO_printf(_bio_err,"Verification successful\n");
      goto LAB_001025c7;
    }
    goto LAB_0010340e;
  case 0x209:
    iVar10 = CMS_digest_verify(local_218,local_a0,local_1e8,local_160);
    if (0 < iVar10) {
      pCVar22 = (CMS_SignerInfo *)0x0;
      pXVar17 = (X509 *)0x0;
      BIO_printf(_bio_err,"Verification successful\n");
      goto LAB_00100567;
    }
LAB_0010340e:
    pcVar28 = "Verification failure\n";
LAB_00103415:
    BIO_printf(_bio_err,pcVar28);
LAB_00103423:
    pCVar22 = (CMS_SignerInfo *)0x0;
    iVar7 = 4;
    pXVar17 = (X509 *)0x0;
    goto LAB_0010054b;
  case 0x20b:
    iVar10 = CMS_uncompress(local_218,local_a0,local_1e8,local_160);
    break;
  case 0x20d:
    iVar10 = CMS_EncryptedData_decrypt(local_218,local_1b8,local_150,local_a0,local_1e8,local_160);
    break;
  case 0x20f:
    iVar10 = CMS_data(local_218,local_1e8,local_160);
  }
  iVar7 = (uint)(iVar10 == 0) << 2;
LAB_0010385d:
  pXVar17 = (X509 *)0x0;
  pCVar22 = (CMS_SignerInfo *)0x0;
  if (iVar7 == 0) goto LAB_00100567;
LAB_0010054b:
  ERR_print_errors(_bio_err);
LAB_00100567:
  OSSL_STACK_OF_X509_free(lVar12);
  OSSL_STACK_OF_X509_free(local_80);
  X509_VERIFY_PARAM_free(pm);
  OPENSSL_sk_free(local_1e0);
  OPENSSL_sk_free(local_1f0);
  CRYPTO_free(local_1b8);
  CRYPTO_free(local_198);
  CRYPTO_free(pCVar22);
  ASN1_OBJECT_free(local_190);
  CMS_ReceiptRequest_free((CMS_ReceiptRequest *)local_200);
  OPENSSL_sk_free(local_1a0);
  OPENSSL_sk_free(local_1a8);
  while (ptr_00 != (int *)0x0) {
    OPENSSL_sk_free(*(undefined8 *)(ptr_00 + 2));
    piVar29 = *(int **)(ptr_00 + 4);
    CRYPTO_free(ptr_00);
    ptr_00 = piVar29;
  }
  X509_STORE_free(local_1f8);
  X509_free(pXVar17);
  X509_free(local_1b0);
  X509_free(local_1c8);
  X509_free(local_208);
  EVP_PKEY_free(local_220);
  EVP_CIPHER_free(local_98);
  EVP_CIPHER_free(local_90);
  EVP_MD_free(local_88);
  CMS_ContentInfo_free(local_218);
  CMS_ContentInfo_free(local_210);
  release_engine(local_188);
  BIO_free(local_1c0);
  BIO_free(local_1d8);
  BIO_free(local_a0);
  BIO_free_all(local_1e8);
  CRYPTO_free(local_1d0);
  CRYPTO_free(local_70);
  NCONF_free(local_178);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


