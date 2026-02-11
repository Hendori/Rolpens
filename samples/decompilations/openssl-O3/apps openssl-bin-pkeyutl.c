
int do_keyop(EVP_PKEY_CTX *param_1,int param_2,uchar *param_3,size_t *param_4,uchar *param_5,
            size_t param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  
  if (param_2 == 0x400) {
    iVar1 = EVP_PKEY_decrypt(param_1,param_3,param_4,param_5,param_6);
    return iVar1;
  }
  if (param_2 < 0x401) {
    if (param_2 == 0x40) {
      iVar1 = EVP_PKEY_verify_recover(param_1,param_3,param_4,param_5,param_6);
      return iVar1;
    }
    if (param_2 == 0x200) {
      iVar1 = EVP_PKEY_encrypt(param_1,param_3,param_4,param_5,param_6);
      return iVar1;
    }
    if (param_2 == 0x10) {
      iVar1 = EVP_PKEY_sign(param_1,param_3,param_4,param_5,param_6);
      return iVar1;
    }
  }
  else {
    if (param_2 == 0x1000) {
      iVar1 = EVP_PKEY_encapsulate();
      return iVar1;
    }
    if (param_2 == 0x2000) {
      iVar1 = EVP_PKEY_decapsulate(param_1,param_7,param_8);
      return iVar1;
    }
    if (param_2 == 0x800) {
      iVar1 = EVP_PKEY_derive(param_1,param_3,param_4);
      return iVar1;
    }
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int do_raw_keyop(int param_1,EVP_MD_CTX *param_2,undefined8 param_3,BIO *param_4,int param_5,
                uchar *param_6,int param_7,undefined8 *param_8,size_t *param_9)

{
  int iVar1;
  int iVar2;
  long lVar3;
  uchar *sigret;
  undefined8 uVar4;
  void *data;
  long in_FS_OFFSET;
  int local_848;
  short local_844;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = EVP_PKEY_get_default_digest_name(param_3,&local_848,100);
  if (((iVar1 == 2) && (local_848 == 0x45444e55)) && (local_844 == 0x46)) {
    iVar1 = 0;
    if (param_5 < 0) {
      data = (void *)0x0;
      BIO_printf(_bio_err,"Error: unable to determine file size for oneshot operation\n");
    }
    else {
      lVar3 = (long)param_5;
      data = (void *)app_malloc(lVar3,"oneshot sign/verify buffer");
      if (param_1 == 0x10) {
        iVar2 = BIO_read(param_4,data,param_5);
        if (param_5 == iVar2) {
          iVar1 = EVP_DigestSign(param_2,0,param_9,data,lVar3);
          if ((iVar1 == 1) && (param_8 != (undefined8 *)0x0)) {
            uVar4 = app_malloc(*param_9,"buffer output");
            *param_8 = uVar4;
            iVar1 = EVP_DigestSign(param_2,uVar4,param_9,data,lVar3);
          }
          goto LAB_00100174;
        }
      }
      else {
        if (param_1 != 0x20) goto LAB_00100174;
        iVar2 = BIO_read(param_4,data,param_5);
        if (param_5 == iVar2) {
          iVar1 = EVP_DigestVerify(param_2,param_6,(long)param_7,data,lVar3);
          goto LAB_00100174;
        }
      }
      BIO_printf(_bio_err,"Error reading raw input data\n");
    }
  }
  else if (param_1 == 0x10) {
    iVar1 = 0;
    do {
      iVar2 = BIO_read(param_4,&local_848,0x800);
      if (iVar2 == 0) {
        iVar1 = EVP_DigestSignFinal(param_2,(uchar *)0x0,param_9);
        if ((iVar1 == 1) && (param_8 != (undefined8 *)0x0)) {
          data = (void *)0x0;
          sigret = (uchar *)app_malloc(*param_9,"buffer output");
          *param_8 = sigret;
          iVar1 = EVP_DigestSignFinal(param_2,sigret,param_9);
        }
        else {
          data = (void *)0x0;
        }
        goto LAB_00100174;
      }
      if (iVar2 < 0) goto LAB_001002d0;
      iVar1 = EVP_DigestSignUpdate(param_2,&local_848,(long)iVar2);
    } while (iVar1 == 1);
    data = (void *)0x0;
    BIO_printf(_bio_err,"Error signing raw input data\n");
  }
  else if (param_1 == 0x20) {
    iVar1 = 0;
    do {
      iVar2 = BIO_read(param_4,&local_848,0x800);
      if (iVar2 == 0) {
        data = (void *)0x0;
        iVar1 = EVP_DigestVerifyFinal(param_2,param_6,(long)param_7);
        goto LAB_00100174;
      }
      if (iVar2 < 0) goto LAB_001002d0;
      iVar1 = EVP_DigestVerifyUpdate(param_2,&local_848,(long)iVar2);
    } while (iVar1 == 1);
    data = (void *)0x0;
    BIO_printf(_bio_err,"Error verifying raw input data\n");
  }
  else {
    data = (void *)0x0;
    iVar1 = 0;
  }
LAB_00100174:
  CRYPTO_free(data);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_001002d0:
  data = (void *)0x0;
  BIO_printf(_bio_err,"Error reading raw input data\n");
  goto LAB_00100174;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 pkeyutl_main(undefined4 param_1,undefined8 param_2)

{
  uchar uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ENGINE *pEVar15;
  EVP_PKEY_CTX *ctx;
  EVP_PKEY *pEVar16;
  EVP_PKEY *peer;
  char *pcVar17;
  undefined8 uVar18;
  X509 *x;
  BIO *bp;
  BIO *pBVar19;
  ENGINE *pEVar20;
  BIO *a;
  void *data;
  char *pcVar21;
  long lVar22;
  char *in_R9;
  ulong uVar23;
  uint uVar24;
  uchar *puVar25;
  long in_FS_OFFSET;
  bool bVar26;
  bool bVar27;
  BIO *local_11b8;
  long local_11b0;
  long local_11a8;
  ENGINE *local_11a0;
  long local_1198;
  CONF *local_1190;
  EVP_PKEY *local_1188;
  long *local_1180;
  long *local_1178;
  char *local_1170;
  long local_1168;
  long local_1160;
  int local_1154;
  char *local_1150;
  long local_1148;
  long local_1140;
  uint local_1134;
  char *local_1130;
  undefined4 local_1110;
  int local_110c;
  uchar *local_1108;
  uchar *local_1100;
  uchar *local_10f8;
  long local_10f0;
  long local_10e8;
  char *local_10e0;
  stat local_10d8;
  int local_1048;
  short local_1044;
  long local_40;
  
  iVar10 = 1;
  uVar24 = 0x10;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_1108 = (uchar *)0x0;
  local_1100 = (uchar *)0x0;
  local_10f8 = (uchar *)0x0;
  local_1110 = 0;
  local_110c = 0;
  local_10f0 = 0;
  local_10e8 = 0;
  uVar13 = app_get0_libctx();
  uVar14 = opt_init(param_1,param_2,pkeyutl_options);
  uVar8 = 0;
  local_11b0 = 0;
  local_11a8 = 0;
  local_1154 = 0;
  local_1140 = 0;
  local_1168 = 0;
  local_1170 = (char *)0x0;
  local_1160 = 0;
  local_1198 = 0;
  local_1134 = 0;
  bVar3 = false;
  bVar4 = false;
  bVar5 = false;
  local_1188 = (EVP_PKEY *)0x0;
  local_1150 = (char *)0x0;
  local_11b8 = (BIO *)0x0;
  local_1148 = 0;
  local_1130 = (char *)0x0;
  local_11a0 = (ENGINE *)0x0;
  local_1190 = (CONF *)0x0;
switchD_001005a6_caseD_0:
  iVar9 = opt_next();
joined_r0x00100587:
  if (iVar9 != 0) {
    if (iVar9 < 0x1b) {
      if (iVar9 < -1) goto switchD_001005a6_caseD_0;
      switch(iVar9) {
      default:
        goto switchD_001005a6_caseD_0;
      case 1:
        puVar25 = (uchar *)0x0;
        data = (void *)0x0;
        ctx = (EVP_PKEY_CTX *)0x0;
        opt_help(pkeyutl_options);
        bp = (BIO *)0x0;
        local_1198 = 0;
        a = (BIO *)0x0;
        local_1188 = (EVP_PKEY *)0x0;
        local_11b8 = (BIO *)0x0;
        goto LAB_001008f7;
      case 2:
        uVar18 = opt_arg();
        local_11a0 = (ENGINE *)setup_engine_methods(uVar18,0xffffffff,0);
        goto switchD_001005a6_caseD_0;
      case 3:
        local_1134 = 1;
        goto switchD_001005a6_caseD_0;
      case 4:
        local_1130 = (char *)opt_arg();
        goto switchD_001005a6_caseD_0;
      case 5:
        local_1148 = opt_arg();
        goto switchD_001005a6_caseD_0;
      case 6:
        iVar10 = 2;
        goto switchD_001005a6_caseD_0;
      case 7:
        iVar10 = 3;
        goto switchD_001005a6_caseD_0;
      case 8:
        bVar4 = true;
        goto switchD_001005a6_caseD_0;
      case 9:
        bVar5 = true;
        goto switchD_001005a6_caseD_0;
      case 10:
        uVar24 = 0x10;
        goto switchD_001005a6_caseD_0;
      case 0xb:
        uVar24 = 0x20;
        goto switchD_001005a6_caseD_0;
      case 0xc:
        uVar24 = 0x40;
        goto switchD_001005a6_caseD_0;
      case 0xd:
        bVar3 = true;
        goto switchD_001005a6_caseD_0;
      case 0xe:
        uVar24 = 0x200;
        goto switchD_001005a6_caseD_0;
      case 0xf:
        uVar24 = 0x400;
        goto switchD_001005a6_caseD_0;
      case 0x11:
        local_1150 = (char *)opt_arg();
        goto switchD_001005a6_caseD_0;
      case 0x12:
        local_1198 = opt_arg();
        goto switchD_001005a6_caseD_0;
      case 0x13:
        local_1160 = opt_arg();
        goto switchD_001005a6_caseD_0;
      case 0x14:
        local_1188 = (EVP_PKEY *)opt_arg();
        goto switchD_001005a6_caseD_0;
      case 0x15:
        uVar18 = opt_arg();
        iVar9 = opt_format(uVar18,0xffe,&local_110c);
        goto joined_r0x0010075c;
      case 0x16:
        uVar18 = opt_arg();
        iVar9 = opt_format(uVar18,0xffe,&local_1110);
joined_r0x0010075c:
        if (iVar9 != 0) goto switchD_001005a6_caseD_0;
switchD_001005a6_caseD_ffffffff:
        local_1188 = (EVP_PKEY *)0x0;
LAB_001005f2:
        pcVar21 = "%s: Use -help for summary.\n";
LAB_00100607:
        BIO_printf(_bio_err,pcVar21,uVar14);
LAB_0010060c:
        local_1198 = 0;
        goto LAB_00100618;
      case 0x17:
        if ((local_11a8 == 0) && (local_11a8 = OPENSSL_sk_new_null(), local_11a8 == 0)) break;
        opt_arg();
        iVar9 = OPENSSL_sk_push(local_11a8);
joined_r0x001006f0:
        if (iVar9 != 0) goto switchD_001005a6_caseD_0;
        break;
      case 0x18:
        if ((local_11b0 != 0) || (local_11b0 = OPENSSL_sk_new_null(), local_11b0 != 0)) {
          opt_arg();
          iVar9 = OPENSSL_sk_push(local_11b0);
          goto joined_r0x001006f0;
        }
        break;
      case 0x19:
        local_1170 = (char *)opt_arg();
        iVar10 = 0;
      case 0x10:
        uVar24 = 0x800;
        iVar9 = opt_next();
        goto joined_r0x00100587;
      case 0x1a:
        pcVar21 = (char *)opt_arg();
        lVar22 = strtol(pcVar21,(char **)0x0,10);
        local_1154 = (int)lVar22;
        goto switchD_001005a6_caseD_0;
      case -1:
        goto switchD_001005a6_caseD_ffffffff;
      }
      BIO_puts(_bio_err,"out of memory\n");
    }
    else if (iVar9 < 0x5df) {
      if ((iVar9 < 0x5dd) || (iVar9 = opt_rand(iVar9), iVar9 != 0)) goto switchD_001005a6_caseD_0;
    }
    else {
      switch(iVar9) {
      case 0x641:
      case 0x642:
      case 0x643:
      case 0x644:
        iVar9 = opt_provider(iVar9);
        if (iVar9 == 0) break;
      default:
        goto switchD_001005a6_caseD_0;
      case 0x646:
        uVar24 = 0x2000;
        goto switchD_001005a6_caseD_0;
      case 0x647:
        iVar10 = 2;
        uVar24 = 0x1000;
        goto switchD_001005a6_caseD_0;
      case 0x648:
        local_11b8 = (BIO *)opt_arg();
        goto switchD_001005a6_caseD_0;
      case 0x649:
        local_1140 = opt_arg();
        goto switchD_001005a6_caseD_0;
      case 0x64a:
        uVar18 = opt_arg();
        local_1190 = (CONF *)app_load_config_modules(uVar18);
        if (local_1190 != (CONF *)0x0) goto switchD_001005a6_caseD_0;
        break;
      case 0x64b:
        uVar8 = 1;
        goto switchD_001005a6_caseD_0;
      case 0x64c:
        local_1168 = opt_arg();
        goto switchD_001005a6_caseD_0;
      }
    }
LAB_00100667:
    local_11b8 = (BIO *)0x0;
    data = (void *)0x0;
    bp = (BIO *)0x0;
    local_1198 = 0;
    ctx = (EVP_PKEY_CTX *)0x0;
    a = (BIO *)0x0;
    local_1188 = (EVP_PKEY *)0x0;
    puVar25 = (uchar *)0x0;
    goto LAB_00100696;
  }
  iVar9 = opt_check_rest_arg(0);
  if (iVar9 == 0) goto switchD_001005a6_caseD_ffffffff;
  iVar9 = app_RAND_load();
  uVar7 = local_1110;
  if (iVar9 == 0) goto LAB_00100667;
  uVar12 = 1;
  if (local_1168 == 0) {
    uVar12 = uVar8;
  }
  if (local_1170 != (char *)0x0) {
    if (local_1154 != 0) {
      bVar26 = uVar24 == 0x10;
      goto LAB_00100b06;
    }
    BIO_printf(_bio_err,"%s: no KDF length given (-kdflen parameter).\n",uVar14);
    goto switchD_001005a6_caseD_ffffffff;
  }
  if (local_1198 == 0) {
    BIO_printf(_bio_err,"%s: no private key given (-inkey parameter).\n",uVar14);
    goto switchD_001005a6_caseD_ffffffff;
  }
  if (local_1160 != 0) {
    if (uVar24 == 0x800) {
      if (local_1160 == 0) goto LAB_001013e0;
      goto LAB_00100e08;
    }
    BIO_printf(_bio_err,"%s: -peerkey option not allowed without -derive.\n",uVar14);
    goto switchD_001005a6_caseD_ffffffff;
  }
LAB_001013e0:
  if (uVar24 == 0x800) {
    BIO_printf(_bio_err,"%s: missing -peerkey option for -derive operation.\n",uVar14);
    goto switchD_001005a6_caseD_ffffffff;
  }
LAB_00100e08:
  bVar26 = uVar24 == 0x10;
  local_10e0 = (char *)0x0;
  if ((uVar24 - 0x400 & 0xfffffbf0) == 0 || bVar26) {
    if (iVar10 == 1) goto LAB_00100b06;
    BIO_printf(_bio_err,"A private key is needed for this operation\n");
    local_1188 = (EVP_PKEY *)0x0;
    if (iVar10 == 0) goto LAB_00100b85;
LAB_00100e73:
    bp = (BIO *)0x0;
    puVar25 = (uchar *)0x0;
    data = (void *)0x0;
    ctx = (EVP_PKEY_CTX *)0x0;
    BIO_printf(_bio_err,"%s: Error loading key\n",uVar14);
    a = (BIO *)0x0;
    local_11b8 = (BIO *)0x0;
    local_1198 = 0;
    local_1188 = (EVP_PKEY *)0x0;
    goto LAB_00100696;
  }
  bVar26 = false;
LAB_00100b06:
  local_10e0 = (char *)0x0;
  iVar9 = app_passwd(local_1188,0,&local_10e0,0);
  if (iVar9 == 0) {
    bVar27 = true;
    BIO_printf(_bio_err,"Error getting password\n");
    local_1188 = (EVP_PKEY *)0x0;
  }
  else {
    if (iVar10 == 2) {
      in_R9 = "public key";
      local_1188 = (EVP_PKEY *)load_pubkey(local_1198,uVar7,0,0,local_11a0);
      bVar27 = local_1188 == (EVP_PKEY *)0x0;
    }
    else if (iVar10 == 3) {
      x = (X509 *)load_cert_pass(local_1198,uVar7,1,0,"Certificate");
      if (x == (X509 *)0x0) goto LAB_00100b42;
      local_1188 = X509_get_pubkey(x);
      X509_free(x);
      bVar27 = local_1188 == (EVP_PKEY *)0x0;
    }
    else if (iVar10 == 1) {
      in_R9 = "private key";
      local_1188 = (EVP_PKEY *)load_key(local_1198,uVar7,0,local_10e0,local_11a0);
      bVar27 = local_1188 == (EVP_PKEY *)0x0;
    }
    else {
LAB_00100b42:
      local_1188 = (EVP_PKEY *)0x0;
      bVar27 = true;
    }
    CRYPTO_free(local_10e0);
  }
  if ((iVar10 != 0) && (bVar27)) goto LAB_00100e73;
  if (uVar24 == 0x40) {
    iVar10 = EVP_PKEY_is_a(local_1188,&_LC21);
    if (iVar10 != 0) goto LAB_00100baa;
    pcVar21 = "%s: -verifyrecover can be used only with RSA\n";
    goto LAB_00100607;
  }
LAB_00100b85:
  bVar27 = uVar24 == 0x20;
  bVar26 = (bool)(bVar26 | bVar27);
  if (!bVar26) {
LAB_00100baa:
    local_1178._0_1_ = (char)uVar12;
    if (local_1168 == 0 && (char)local_1178 == '\0') {
      bVar6 = false;
      bVar26 = false;
      local_1198 = 0;
      bVar27 = false;
      bVar2 = true;
      goto LAB_00100beb;
    }
    BIO_printf(_bio_err,"%s: -digest and -rawin can only be used with -sign or -verify\n",uVar14);
    goto LAB_001005f2;
  }
  iVar10 = EVP_PKEY_get_default_digest_name(local_1188,&local_1048,100);
  if (((iVar10 == 2) && (local_1048 == 0x45444e55)) && (local_1044 == 0x46)) {
    if (local_1168 == 0) {
      if (!bVar3) goto LAB_00101112;
      goto LAB_00101467;
    }
    pcVar21 = (char *)EVP_PKEY_get0_type_name(local_1188);
    if (pcVar21 == (char *)0x0) {
      pcVar21 = "(unknown key type)";
    }
    BIO_printf(_bio_err,"%s: -digest (prehash) is not supported with %s\n",uVar14,pcVar21);
    goto LAB_0010060c;
  }
  if ((uVar12 != 0) && (bVar3)) {
LAB_00101467:
    BIO_printf(_bio_err,"%s: -rev cannot be used with raw input\n",uVar14);
    goto LAB_001005f2;
  }
  in_R9 = (char *)(ulong)uVar12;
  if (uVar12 != 0) {
LAB_00101112:
    local_1198 = EVP_MD_CTX_new();
    if (local_1198 != 0) {
      bVar2 = false;
      bVar6 = true;
      goto LAB_00100beb;
    }
    BIO_printf(_bio_err,"Error: out of memory\n");
    goto LAB_00100618;
  }
  local_1198 = 0;
  bVar6 = false;
  bVar2 = bVar26;
LAB_00100beb:
  pEVar15 = (ENGINE *)app_get0_propq();
  pEVar20 = (ENGINE *)(ulong)local_1134;
  if (local_1134 == 0) {
    if (local_1170 == (char *)0x0) {
      if (local_1188 != (EVP_PKEY *)0x0) {
        local_1170._0_4_ = EVP_PKEY_get_size(local_1188);
LAB_001014ec:
        ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(uVar13,local_1188,pEVar15);
        goto LAB_00100c3f;
      }
    }
    else {
      iVar10 = OBJ_sn2nid(local_1170);
      if ((iVar10 != 0) || (iVar10 = OBJ_ln2nid(local_1170), iVar10 != 0)) {
LAB_00100c1f:
        ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_name(uVar13,local_1170,pEVar15);
        local_1170._0_4_ = -1;
        goto LAB_00100c3f;
      }
LAB_00101630:
      BIO_printf(_bio_err,"The given KDF \"%s\" is unknown.\n",local_1170);
    }
  }
  else {
    if (local_1170 == (char *)0x0) {
      if (local_1188 == (EVP_PKEY *)0x0) goto LAB_00101445;
      local_1170._0_4_ = EVP_PKEY_get_size(local_1188);
      if (local_11a0 == (ENGINE *)0x0) goto LAB_001014ec;
      ctx = EVP_PKEY_CTX_new(local_1188,local_11a0);
    }
    else {
      iVar10 = OBJ_sn2nid(local_1170);
      if ((iVar10 == 0) && (iVar10 = OBJ_ln2nid(local_1170), iVar10 == 0)) goto LAB_00101630;
      if (local_11a0 == (ENGINE *)0x0) goto LAB_00100c1f;
      ctx = EVP_PKEY_CTX_new_id(iVar10,local_11a0);
      local_1170._0_4_ = -1;
    }
LAB_00100c3f:
    if (ctx != (EVP_PKEY_CTX *)0x0) {
      if (bVar6) {
        EVP_MD_CTX_set_pkey_ctx(local_1198,ctx);
        in_R9 = (char *)local_1188;
        if (uVar24 == 0x10) {
          iVar10 = EVP_DigestSignInit_ex(local_1198,0,local_1168,uVar13,pEVar15,local_1188,0);
        }
        else {
          if (uVar24 != 0x20) goto LAB_0010143d;
          iVar10 = EVP_DigestVerifyInit_ex(local_1198,0,local_1168,uVar13,pEVar15,local_1188,0);
        }
LAB_00100c93:
        iVar9 = local_110c;
        if (0 < iVar10) {
          if (local_1160 != 0) {
            pEVar16 = EVP_PKEY_CTX_get0_pkey(ctx);
            in_R9 = "peer key";
            pEVar15 = (ENGINE *)0x0;
            if (iVar9 == 8) {
              pEVar15 = local_11a0;
            }
            peer = (EVP_PKEY *)load_pubkey(local_1160,iVar9,0,0);
            if (peer == (EVP_PKEY *)0x0) {
              BIO_printf(_bio_err,"Error reading peer key %s\n",local_1160);
            }
            else {
              pcVar21 = (char *)EVP_PKEY_get0_type_name(pEVar16);
              pcVar17 = (char *)EVP_PKEY_get0_type_name(peer);
              iVar10 = strcmp(pcVar17,pcVar21);
              if (iVar10 == 0) {
                iVar10 = EVP_PKEY_derive_set_peer(ctx,peer);
                EVP_PKEY_free(peer);
                if (0 < iVar10) goto LAB_00100ed9;
              }
              else {
                uVar13 = EVP_PKEY_get0_type_name(pEVar16);
                uVar18 = EVP_PKEY_get0_type_name(peer);
                BIO_printf(_bio_err,
                           "Type of peer public key: %s does not match type of private key: %s\n",
                           uVar18,uVar13);
                EVP_PKEY_free(peer);
              }
            }
            BIO_printf(_bio_err,"%s: Error setting up peer key\n",uVar14);
            goto LAB_00100d62;
          }
LAB_00100ed9:
          if ((local_11a8 == 0) || (iVar10 = OPENSSL_sk_num(local_11a8), iVar10 < 1))
          goto LAB_00100f60;
          iVar9 = 0;
          goto LAB_00100f12;
        }
      }
      else {
        if (uVar24 == 0x400) {
          iVar10 = EVP_PKEY_decrypt_init(ctx);
          pEVar15 = pEVar20;
          goto LAB_00100c93;
        }
        if (uVar24 < 0x401) {
          if (uVar24 == 0x40) {
            iVar10 = EVP_PKEY_verify_recover_init(ctx);
            pEVar15 = pEVar20;
          }
          else if (uVar24 < 0x41) {
            if (uVar24 == 0x10) {
              iVar10 = EVP_PKEY_sign_init(ctx);
              pEVar15 = pEVar20;
            }
            else {
              if (uVar24 != 0x20) goto LAB_0010143d;
              iVar10 = EVP_PKEY_verify_init(ctx);
              pEVar15 = pEVar20;
            }
          }
          else {
            if (uVar24 != 0x200) goto LAB_0010143d;
            iVar10 = EVP_PKEY_encrypt_init(ctx);
            pEVar15 = pEVar20;
          }
          goto LAB_00100c93;
        }
        if (uVar24 == 0x1000) {
          iVar10 = EVP_PKEY_encapsulate_init(ctx,0);
        }
        else {
          if (uVar24 != 0x2000) {
            if (uVar24 != 0x800) goto LAB_0010143d;
            iVar10 = EVP_PKEY_derive_init(ctx);
            pEVar15 = pEVar20;
            goto LAB_00100c93;
          }
          iVar10 = EVP_PKEY_decapsulate_init(ctx,0);
        }
        if (0 < iVar10) {
          pEVar15 = pEVar20;
          if (local_1140 != 0) {
            iVar10 = EVP_PKEY_CTX_set_kem_op(ctx,local_1140);
            pEVar15 = pEVar20;
          }
          goto LAB_00100c93;
        }
      }
LAB_0010143d:
      EVP_PKEY_CTX_free(ctx);
    }
  }
LAB_00101445:
  BIO_printf(_bio_err,"%s: Error initializing context\n",uVar14);
LAB_00100618:
  local_11b8 = (BIO *)0x0;
  data = (void *)0x0;
  ctx = (EVP_PKEY_CTX *)0x0;
  bp = (BIO *)0x0;
  a = (BIO *)0x0;
  puVar25 = (uchar *)0x0;
  goto LAB_00100696;
LAB_00100f34:
  BIO_printf(_bio_err,"%s: Can\'t set parameter \"%s\":\n",uVar14,pcVar21);
LAB_00100d62:
  local_11b8 = (BIO *)0x0;
  data = (void *)0x0;
  bp = (BIO *)0x0;
  a = (BIO *)0x0;
  puVar25 = (uchar *)0x0;
  goto LAB_00100696;
  while (iVar9 = iVar9 + 1, iVar10 != iVar9) {
LAB_00100f12:
    pcVar21 = (char *)OPENSSL_sk_value(local_11a8,iVar9);
    iVar11 = pkey_ctrl_string(ctx,pcVar21);
    if (iVar11 < 1) goto LAB_00100f34;
  }
LAB_00100f60:
  if ((local_11b0 != 0) && (iVar10 = OPENSSL_sk_num(local_11b0), 0 < iVar10)) {
    iVar9 = 0;
    do {
      pcVar21 = (char *)OPENSSL_sk_value(local_11b0,iVar9);
      pcVar17 = strchr(pcVar21,0x3a);
      if (pcVar17 == (char *)0x0) {
        BIO_snprintf((char *)&local_1048,0x1000,"Enter %s: ");
        iVar11 = EVP_read_pw_string((char *)&local_1048,0xfff,(char *)&local_1048,0);
        if (iVar11 < 0) {
          if (iVar11 == -2) {
            BIO_puts(_bio_err,"user abort\n");
          }
          else {
            BIO_puts(_bio_err,"entry failed\n");
          }
          goto LAB_00100d62;
        }
        local_10e0 = CRYPTO_strdup((char *)&local_1048,"apps/pkeyutl.c",0x198);
        if (local_10e0 == (char *)0x0) {
          BIO_puts(_bio_err,"out of memory\n");
          goto LAB_00100d62;
        }
      }
      else {
        *pcVar17 = '\0';
        iVar11 = app_passwd(pcVar17 + 1,0,&local_10e0,0);
        if (iVar11 == 0) {
          BIO_printf(_bio_err,"failed to get \'%s\'\n",pcVar21);
          goto LAB_00100d62;
        }
      }
      iVar11 = EVP_PKEY_CTX_ctrl_str(ctx,pcVar21,local_10e0);
      if (iVar11 < 1) goto LAB_00100f34;
      iVar9 = iVar9 + 1;
      CRYPTO_free(local_10e0);
    } while (iVar10 != iVar9);
  }
  if ((local_1150 != (char *)0x0) && (uVar24 != 0x20)) {
    BIO_printf(_bio_err,"%s: Signature file specified for non verify\n",uVar14);
    goto LAB_00100d62;
  }
  if ((bool)(local_1150 == (char *)0x0 & bVar27)) {
    BIO_printf(_bio_err,"%s: No signature file specified for verify\n",uVar14);
    goto LAB_00100d62;
  }
  uVar23 = 0xffffffff;
  a = (BIO *)0x0;
  bVar27 = false;
  if ((uVar24 - 0x800 & 0xfffff7f0) == 0) {
LAB_0010126a:
    bp = (BIO *)bio_open_default(local_1148,0x77,2);
    if (bp == (BIO *)0x0) goto LAB_00101836;
    if ((uVar24 == 0x1000) || (bVar27)) {
      if (local_11b8 == (BIO *)0x0) {
        if (uVar24 == 0x1000) {
          BIO_printf(_bio_err,
                     "KEM-based shared-secret derivation requires the \'-secret <file>\' option\n");
          goto LAB_00101836;
        }
      }
      else {
        local_11b8 = (BIO *)bio_open_owner(local_11b8,0x77,2);
        if (local_11b8 == (BIO *)0x0) {
LAB_00101836:
          puVar25 = (uchar *)0x0;
          data = (void *)0x0;
          local_11b8 = (BIO *)0x0;
          goto LAB_00100696;
        }
      }
    }
    else {
      local_11b8 = (BIO *)0x0;
    }
LAB_001012b2:
    if (local_1150 == (char *)0x0) {
      iVar10 = -1;
LAB_0010130d:
      if ((a == (BIO *)0x0) || (!bVar2)) {
        if (bVar6) {
LAB_0010199e:
          if (uVar24 != 0x20) {
            data = (void *)0x0;
            iVar10 = do_raw_keyop(uVar24,local_1198,local_1188,a,uVar23,0,0,&local_1100,&local_10f0,
                                  pEVar15);
LAB_001019e0:
            if (iVar10 < 1) goto LAB_001019f0;
            goto LAB_00101907;
          }
          iVar10 = do_raw_keyop(0x20,local_1198,local_1188,a,uVar23,local_10f8,iVar10,0,0,in_R9);
LAB_00101aef:
          if (iVar10 != 1) {
            BIO_puts(bp,"Signature Verification Failure\n");
            goto LAB_001013d3;
          }
          puVar25 = (uchar *)0x0;
          data = (void *)0x0;
          BIO_puts(bp,"Signature Verified Successfully\n");
        }
        else {
          uVar12 = 0;
          uVar8 = 0;
          if (bVar26) {
LAB_001018bf:
            uVar12 = uVar8;
            if (uVar24 == 0x20) {
              iVar10 = EVP_PKEY_verify(ctx,local_10f8,(long)iVar10,local_1108,(long)(int)uVar12);
              goto LAB_00101aef;
            }
          }
LAB_001018c9:
          if (local_1154 == 0) {
            iVar10 = do_keyop(ctx,uVar24,0);
            if (0 < iVar10) {
              if (local_10e8 == 0) {
                if (((uVar24 - 0x1000 & 0xffffeff0) == 0) || (local_10f0 == 0)) goto LAB_00101904;
LAB_00101b60:
                data = (void *)0x0;
                local_1100 = (uchar *)app_malloc(local_10f0,"buffer output");
                if (local_10e8 != 0) goto LAB_00101c38;
              }
              else {
                if (local_10f0 != 0) goto LAB_00101b60;
                if (uVar24 != 0x2000) goto LAB_00101904;
LAB_00101c38:
                data = (void *)app_malloc(local_10e8,"secret output");
              }
              local_1178 = &local_10e8;
              local_1180 = &local_10f0;
              iVar10 = do_keyop(ctx,uVar24,local_1100,local_1180,local_1108,(long)(int)uVar12,data,
                                local_1178);
              goto LAB_001019e0;
            }
            data = (void *)0x0;
LAB_001019f0:
            if (uVar24 == 0x800) {
              BIO_puts(_bio_err,"Key derivation failed\n");
              puVar25 = local_1100;
            }
            else {
              BIO_puts(_bio_err,"Public Key operation error\n");
              puVar25 = local_1100;
            }
            goto LAB_00100696;
          }
          local_10f0 = (long)local_1154;
          if ((local_10e8 != 0) || ((uVar24 - 0x1000 & 0xffffeff0) != 0)) goto LAB_00101b60;
LAB_00101904:
          data = (void *)0x0;
LAB_00101907:
          puVar25 = local_1100;
          if (bVar4) {
            iVar10 = ASN1_parse_dump(bp,local_1100,local_10f0,1,-1);
            if (iVar10 == 0) {
              ERR_print_errors(_bio_err);
            }
          }
          else if (bVar5) {
            BIO_dump(bp,(char *)local_1100,(int)local_10f0);
          }
          else {
            BIO_write(bp,local_1100,(int)local_10f0);
          }
          if (local_10e8 != 0) {
            pBVar19 = local_11b8;
            if (local_11b8 == (BIO *)0x0) {
              pBVar19 = bp;
            }
            BIO_write(pBVar19,data,(int)local_10e8);
          }
        }
LAB_001008f7:
        local_1180 = (long *)0x0;
        goto LAB_001008ff;
      }
      uVar12 = bio_to_mem(&local_1108,0xffffffff,a);
      if ((int)uVar12 < 0) {
        BIO_printf(_bio_err,"Error reading input Data\n");
      }
      else {
        if (bVar3) {
          in_R9 = (char *)(long)(int)uVar12;
          pEVar15 = (ENGINE *)((ulong)in_R9 >> 1);
          if (pEVar15 != (ENGINE *)0x0) {
            in_R9 = (char *)((long)&((EVP_PKEY *)((long)in_R9 + -0x38))->attributes + 7);
            pEVar20 = (ENGINE *)0x0;
            do {
              lVar22 = (long)in_R9 - (long)pEVar20;
              puVar25 = local_1108 + (long)pEVar20;
              pEVar20 = pEVar20 + 1;
              uVar1 = *puVar25;
              *puVar25 = local_1108[lVar22];
              local_1108[lVar22] = uVar1;
            } while (pEVar20 != pEVar15);
          }
        }
        if (bVar6) goto LAB_0010199e;
        if (!bVar26) goto LAB_001018c9;
        uVar8 = uVar12;
        if ((int)uVar12 < 0x41) goto LAB_001018bf;
        BIO_printf(_bio_err,
                   "Error: The non-raw input data length %d is too long - max supported hashed size is %d\n"
                   ,(ulong)uVar12,0x40);
      }
    }
    else {
      pBVar19 = BIO_new_file(local_1150,"rb");
      if (pBVar19 == (BIO *)0x0) {
        BIO_printf(_bio_err,"Can\'t open signature file %s\n",local_1150);
      }
      else {
        iVar10 = bio_to_mem(&local_10f8,(int)local_1170 * 10);
        BIO_free(pBVar19);
        if (-1 < iVar10) goto LAB_0010130d;
        BIO_printf(_bio_err,"Error reading signature data\n");
      }
    }
LAB_001013d3:
    data = (void *)0x0;
    puVar25 = (uchar *)0x0;
  }
  else {
    a = (BIO *)bio_open_default(local_1130,0x72,2);
    if (((local_1130 != (char *)0x0) && (iVar10 = stat(local_1130,&local_10d8), iVar10 == 0)) &&
       (uVar23 = 0xffffffff, local_10d8.st_size < 0x80000000)) {
      uVar23 = local_10d8.st_size & 0xffffffff;
    }
    if (a == (BIO *)0x0) goto LAB_00100d62;
    bVar27 = uVar24 == 0x2000;
    if ((local_1148 == 0) || (!bVar27)) goto LAB_0010126a;
    if (local_11b8 == (BIO *)0x0) {
      bp = (BIO *)bio_open_owner(local_1148,0x77,2);
      if (bp != (BIO *)0x0) goto LAB_001012b2;
    }
    else {
      BIO_printf(_bio_err,
                 "%s: Decapsulation produces only a shared secret and no output. The \'-out\' option is not applicable.\n"
                 ,uVar14);
    }
    local_11b8 = (BIO *)0x0;
    puVar25 = (uchar *)0x0;
    data = (void *)0x0;
    bp = (BIO *)0x0;
  }
LAB_00100696:
  ERR_print_errors(_bio_err);
  local_1180 = (long *)0x1;
LAB_001008ff:
  EVP_MD_CTX_free(local_1198);
  EVP_PKEY_CTX_free(ctx);
  EVP_PKEY_free(local_1188);
  EVP_MD_free(0);
  release_engine(local_11a0);
  BIO_free(a);
  BIO_free_all(bp);
  BIO_free_all(local_11b8);
  CRYPTO_free(local_1108);
  CRYPTO_free(puVar25);
  CRYPTO_free(local_10f8);
  CRYPTO_free(data);
  OPENSSL_sk_free(local_11a8);
  OPENSSL_sk_free(local_11b0);
  NCONF_free(local_1190);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_1180;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


