
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
  undefined4 uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ENGINE *pEVar14;
  EVP_PKEY_CTX *ctx;
  EVP_PKEY *pEVar15;
  EVP_PKEY *peer;
  char *pcVar16;
  undefined8 uVar17;
  X509 *x;
  BIO *bp;
  BIO *pBVar18;
  ENGINE *pEVar19;
  BIO *a;
  void *data;
  char *pcVar20;
  long lVar21;
  char *pcVar22;
  uint uVar23;
  uchar *puVar24;
  long in_FS_OFFSET;
  bool bVar25;
  bool bVar26;
  BIO *local_11b8;
  long local_11b0;
  long local_11a8;
  ENGINE *local_11a0;
  long local_1198;
  CONF *local_1190;
  EVP_PKEY *local_1188;
  long *local_1180;
  ENGINE *local_1178;
  long local_1170;
  long local_1168;
  int local_115c;
  char *local_1158;
  long local_1150;
  long local_1148;
  uint local_113c;
  char *local_1138;
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
  
  pcVar20 = (char *)0x0;
  iVar9 = 1;
  uVar23 = 0x10;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_1108 = (uchar *)0x0;
  local_1100 = (uchar *)0x0;
  local_10f8 = (uchar *)0x0;
  local_1110 = 0;
  local_110c = 0;
  local_10f0 = 0;
  local_10e8 = 0;
  uVar12 = app_get0_libctx();
  uVar13 = opt_init(param_1,param_2,pkeyutl_options);
  uVar6 = 0;
  local_11b0 = 0;
  local_11a8 = 0;
  local_115c = 0;
  local_1148 = 0;
  local_1170 = 0;
  local_1168 = 0;
  local_1198 = 0;
  local_113c = 0;
  bVar3 = false;
  bVar4 = false;
  bVar5 = false;
  local_1188 = (EVP_PKEY *)0x0;
  local_1158 = (char *)0x0;
  local_11b8 = (BIO *)0x0;
  local_1150 = 0;
  local_1138 = (char *)0x0;
  local_11a0 = (ENGINE *)0x0;
  local_1190 = (CONF *)0x0;
switchD_0010059e_caseD_0:
  iVar7 = opt_next();
  if (iVar7 != 0) {
LAB_00100581:
    if (0x1a < iVar7) goto LAB_00100630;
    if (iVar7 < -1) goto switchD_0010059e_caseD_0;
    switch(iVar7) {
    default:
      goto switchD_0010059e_caseD_0;
    case 1:
      puVar24 = (uchar *)0x0;
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
      uVar17 = opt_arg();
      local_11a0 = (ENGINE *)setup_engine_methods(uVar17,0xffffffff,0);
      goto switchD_0010059e_caseD_0;
    case 3:
      local_113c = 1;
      goto switchD_0010059e_caseD_0;
    case 4:
      local_1138 = (char *)opt_arg();
      goto switchD_0010059e_caseD_0;
    case 5:
      local_1150 = opt_arg();
      goto switchD_0010059e_caseD_0;
    case 6:
      iVar9 = 2;
      goto switchD_0010059e_caseD_0;
    case 7:
      iVar9 = 3;
      goto switchD_0010059e_caseD_0;
    case 8:
      bVar4 = true;
      goto switchD_0010059e_caseD_0;
    case 9:
      bVar5 = true;
      goto switchD_0010059e_caseD_0;
    case 10:
      uVar23 = 0x10;
      goto switchD_0010059e_caseD_0;
    case 0xb:
      uVar23 = 0x20;
      goto switchD_0010059e_caseD_0;
    case 0xc:
      uVar23 = 0x40;
      goto switchD_0010059e_caseD_0;
    case 0xd:
      bVar3 = true;
      goto switchD_0010059e_caseD_0;
    case 0xe:
      uVar23 = 0x200;
      goto switchD_0010059e_caseD_0;
    case 0xf:
      uVar23 = 0x400;
      goto switchD_0010059e_caseD_0;
    case 0x11:
      local_1158 = (char *)opt_arg();
      goto switchD_0010059e_caseD_0;
    case 0x12:
      local_1198 = opt_arg();
      goto switchD_0010059e_caseD_0;
    case 0x13:
      local_1168 = opt_arg();
      goto switchD_0010059e_caseD_0;
    case 0x14:
      local_1188 = (EVP_PKEY *)opt_arg();
      goto switchD_0010059e_caseD_0;
    case 0x15:
      uVar17 = opt_arg();
      iVar7 = opt_format(uVar17,0xffe,&local_110c);
      goto joined_r0x0010075c;
    case 0x16:
      uVar17 = opt_arg();
      iVar7 = opt_format(uVar17,0xffe,&local_1110);
joined_r0x0010075c:
      if (iVar7 == 0) goto switchD_0010059e_caseD_ffffffff;
      goto switchD_0010059e_caseD_0;
    case 0x17:
      if ((local_11a8 == 0) && (local_11a8 = OPENSSL_sk_new_null(), local_11a8 == 0)) break;
      opt_arg();
      iVar7 = OPENSSL_sk_push(local_11a8);
joined_r0x001006f0:
      if (iVar7 != 0) goto switchD_0010059e_caseD_0;
      break;
    case 0x18:
      if ((local_11b0 != 0) || (local_11b0 = OPENSSL_sk_new_null(), local_11b0 != 0)) {
        opt_arg();
        iVar7 = OPENSSL_sk_push(local_11b0);
        goto joined_r0x001006f0;
      }
      break;
    case 0x19:
      pcVar20 = (char *)opt_arg();
      iVar9 = 0;
    case 0x10:
      uVar23 = 0x800;
      iVar7 = opt_next();
      if (iVar7 == 0) {
        iVar7 = 0;
        goto LAB_001005c8;
      }
      goto LAB_00100581;
    case 0x1a:
      pcVar22 = (char *)opt_arg();
      lVar21 = strtol(pcVar22,(char **)0x0,10);
      local_115c = (int)lVar21;
      goto switchD_0010059e_caseD_0;
    case -1:
      goto switchD_0010059e_caseD_ffffffff;
    }
    BIO_puts(_bio_err,"out of memory\n");
    goto LAB_00100667;
  }
LAB_001005c8:
  iVar8 = opt_check_rest_arg(0);
  if (iVar8 == 0) {
switchD_0010059e_caseD_ffffffff:
    local_1188 = (EVP_PKEY *)0x0;
LAB_001005ee:
    pcVar20 = "%s: Use -help for summary.\n";
LAB_00100603:
    BIO_printf(_bio_err,pcVar20,uVar13);
LAB_00100608:
    local_1198 = 0;
    puVar24 = (uchar *)0x0;
  }
  else {
    iVar8 = app_RAND_load();
    uVar2 = local_1110;
    if (iVar8 == 0) goto LAB_00100667;
    uVar11 = 1;
    if (local_1170 == 0) {
      uVar11 = uVar6;
    }
    local_1178 = (ENGINE *)(ulong)uVar11;
    if (pcVar20 != (char *)0x0) {
      if (local_115c != 0) {
        bVar25 = uVar23 == 0x10;
        goto LAB_00100b09;
      }
      BIO_printf(_bio_err,"%s: no KDF length given (-kdflen parameter).\n",uVar13);
      goto switchD_0010059e_caseD_ffffffff;
    }
    if (local_1198 == 0) {
      BIO_printf(_bio_err,"%s: no private key given (-inkey parameter).\n",uVar13);
      goto switchD_0010059e_caseD_ffffffff;
    }
    if (local_1168 == 0) {
LAB_00101470:
      if (uVar23 == 0x800) {
        BIO_printf(_bio_err,"%s: missing -peerkey option for -derive operation.\n",uVar13);
        goto switchD_0010059e_caseD_ffffffff;
      }
    }
    else {
      if (uVar23 != 0x800) {
        BIO_printf(_bio_err,"%s: -peerkey option not allowed without -derive.\n",uVar13);
        goto switchD_0010059e_caseD_ffffffff;
      }
      if (local_1168 == 0) goto LAB_00101470;
    }
    bVar25 = uVar23 == 0x10;
    local_10e0 = (char *)0x0;
    if ((uVar23 - 0x400 & 0xfffffbf0) != 0 && !bVar25) {
      bVar25 = false;
LAB_00100b09:
      local_10e0 = (char *)0x0;
      iVar8 = app_passwd(local_1188,0,&local_10e0,0);
      if (iVar8 == 0) {
        bVar26 = true;
        BIO_printf(_bio_err,"Error getting password\n");
        local_1188 = (EVP_PKEY *)0x0;
      }
      else {
        if (iVar9 == 2) {
          local_1188 = (EVP_PKEY *)load_pubkey(local_1198,uVar2,0,0,local_11a0,"public key");
          bVar26 = local_1188 == (EVP_PKEY *)0x0;
        }
        else if (iVar9 == 3) {
          x = (X509 *)load_cert_pass(local_1198,uVar2,1,0,"Certificate");
          if (x == (X509 *)0x0) goto LAB_00100b55;
          local_1188 = X509_get_pubkey(x);
          X509_free(x);
          bVar26 = local_1188 == (EVP_PKEY *)0x0;
        }
        else if (iVar9 == 1) {
          local_1188 = (EVP_PKEY *)load_key(local_1198,uVar2,0,local_10e0,local_11a0,"private key");
          bVar26 = local_1188 == (EVP_PKEY *)0x0;
        }
        else {
LAB_00100b55:
          local_1188 = (EVP_PKEY *)0x0;
          bVar26 = true;
        }
        CRYPTO_free(local_10e0);
      }
      if ((iVar9 == 0) || (!bVar26)) {
        if (uVar23 != 0x40) goto LAB_00100ba1;
        iVar9 = EVP_PKEY_is_a(local_1188,&_LC21);
        if (iVar9 != 0) goto LAB_00100bc6;
        pcVar20 = "%s: -verifyrecover can be used only with RSA\n";
        goto LAB_00100603;
      }
LAB_00100ece:
      data = (void *)0x0;
      puVar24 = (uchar *)0x0;
      ctx = (EVP_PKEY_CTX *)0x0;
      bp = (BIO *)0x0;
      BIO_printf(_bio_err,"%s: Error loading key\n",uVar13);
      a = (BIO *)0x0;
      local_11b8 = (BIO *)0x0;
      local_1198 = 0;
      local_1188 = (EVP_PKEY *)0x0;
      goto LAB_00100696;
    }
    if (iVar9 == 1) goto LAB_00100b09;
    BIO_printf(_bio_err,"A private key is needed for this operation\n");
    local_1188 = (EVP_PKEY *)0x0;
    if (iVar9 != 0) goto LAB_00100ece;
LAB_00100ba1:
    bVar26 = uVar23 == 0x20;
    bVar25 = (bool)(bVar25 | bVar26);
    if (!bVar25) {
LAB_00100bc6:
      local_1178._0_1_ = (char)uVar11;
      if (local_1170 != 0 || (char)local_1178 != '\0') {
        BIO_printf(_bio_err,"%s: -digest and -rawin can only be used with -sign or -verify\n",uVar13
                  );
        goto LAB_001005ee;
      }
      local_1178 = (ENGINE *)0x0;
      bVar25 = false;
      bVar26 = false;
LAB_00100bf6:
      local_1198 = 0;
LAB_00100bff:
      pEVar14 = (ENGINE *)app_get0_propq();
      pcVar22 = (char *)(ulong)local_113c;
      if (local_113c == 0) {
        if (pcVar20 == (char *)0x0) {
          if (local_1188 != (EVP_PKEY *)0x0) {
            local_113c = EVP_PKEY_get_size(local_1188);
LAB_00101600:
            ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(uVar12,local_1188,pEVar14);
            goto LAB_00100c76;
          }
        }
        else {
          iVar9 = OBJ_sn2nid(pcVar20);
          if ((iVar9 != 0) || (iVar9 = OBJ_ln2nid(pcVar20), iVar9 != 0)) {
LAB_00100c48:
            ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_name(uVar12,pcVar20,pEVar14);
            local_113c = -1;
            goto LAB_00100c76;
          }
LAB_00101783:
          BIO_printf(_bio_err,"The given KDF \"%s\" is unknown.\n",pcVar20);
        }
      }
      else {
        if (pcVar20 == (char *)0x0) {
          if (local_1188 == (EVP_PKEY *)0x0) goto LAB_001014f6;
          local_113c = EVP_PKEY_get_size(local_1188);
          if (local_11a0 == (ENGINE *)0x0) goto LAB_00101600;
          ctx = EVP_PKEY_CTX_new(local_1188,local_11a0);
        }
        else {
          iVar9 = OBJ_sn2nid(pcVar20);
          if ((iVar9 == 0) && (iVar9 = OBJ_ln2nid(pcVar20), iVar9 == 0)) goto LAB_00101783;
          if (local_11a0 == (ENGINE *)0x0) goto LAB_00100c48;
          ctx = EVP_PKEY_CTX_new_id(iVar9,local_11a0);
          local_113c = -1;
        }
LAB_00100c76:
        if (ctx != (EVP_PKEY_CTX *)0x0) {
          if ((int)local_1178 == 0) {
            pEVar14 = local_1178;
            if (uVar23 == 0x400) {
              iVar9 = EVP_PKEY_decrypt_init(ctx);
              goto LAB_00100cd6;
            }
            if (uVar23 < 0x401) {
              if (uVar23 == 0x40) {
                iVar9 = EVP_PKEY_verify_recover_init(ctx);
              }
              else if (uVar23 < 0x41) {
                if (uVar23 == 0x10) {
                  iVar9 = EVP_PKEY_sign_init(ctx);
                }
                else {
                  if (uVar23 != 0x20) goto LAB_001014ee;
                  iVar9 = EVP_PKEY_verify_init(ctx);
                }
              }
              else {
                if (uVar23 != 0x200) goto LAB_001014ee;
                iVar9 = EVP_PKEY_encrypt_init(ctx);
              }
              goto LAB_00100cd6;
            }
            if (uVar23 == 0x1000) {
              iVar9 = EVP_PKEY_encapsulate_init(ctx,0);
            }
            else {
              if (uVar23 != 0x2000) {
                if (uVar23 != 0x800) goto LAB_001014ee;
                iVar9 = EVP_PKEY_derive_init(ctx);
                goto LAB_00100cd6;
              }
              iVar9 = EVP_PKEY_decapsulate_init(ctx,0);
            }
            if (0 < iVar9) {
              if (local_1148 != 0) {
                iVar9 = EVP_PKEY_CTX_set_kem_op(ctx);
              }
              goto LAB_00100cd6;
            }
          }
          else {
            EVP_MD_CTX_set_pkey_ctx(local_1198,ctx);
            pcVar22 = (char *)local_1188;
            if (uVar23 == 0x10) {
              iVar9 = EVP_DigestSignInit_ex(local_1198,0,local_1170,uVar12,pEVar14,local_1188,0);
            }
            else {
              if (uVar23 != 0x20) goto LAB_001014ee;
              iVar9 = EVP_DigestVerifyInit_ex(local_1198,0,local_1170,uVar12,pEVar14,local_1188,0);
            }
LAB_00100cd6:
            iVar8 = local_110c;
            if (0 < iVar9) {
              if (local_1168 != 0) {
                pEVar15 = EVP_PKEY_CTX_get0_pkey(ctx);
                pcVar22 = "peer key";
                pEVar14 = (ENGINE *)0x0;
                if (iVar8 == 8) {
                  pEVar14 = local_11a0;
                }
                peer = (EVP_PKEY *)load_pubkey(local_1168,iVar8,0,0);
                if (peer == (EVP_PKEY *)0x0) {
                  BIO_printf(_bio_err,"Error reading peer key %s\n",local_1168);
                }
                else {
                  pcVar20 = (char *)EVP_PKEY_get0_type_name(pEVar15);
                  pcVar16 = (char *)EVP_PKEY_get0_type_name(peer);
                  iVar9 = strcmp(pcVar16,pcVar20);
                  if (iVar9 == 0) {
                    iVar9 = EVP_PKEY_derive_set_peer(ctx,peer);
                    EVP_PKEY_free(peer);
                    if (0 < iVar9) goto LAB_00100f3e;
                  }
                  else {
                    uVar12 = EVP_PKEY_get0_type_name(pEVar15);
                    uVar17 = EVP_PKEY_get0_type_name(peer);
                    BIO_printf(_bio_err,
                               "Type of peer public key: %s does not match type of private key: %s\n"
                               ,uVar17,uVar12);
                    EVP_PKEY_free(peer);
                  }
                }
                BIO_printf(_bio_err,"%s: Error setting up peer key\n",uVar13);
                goto LAB_00100db5;
              }
LAB_00100f3e:
              if ((local_11a8 == 0) || (iVar9 = OPENSSL_sk_num(local_11a8), iVar9 < 1))
              goto LAB_00100fd8;
              iVar8 = 0;
              goto LAB_00100f89;
            }
          }
LAB_001014ee:
          EVP_PKEY_CTX_free(ctx);
        }
      }
LAB_001014f6:
      BIO_printf(_bio_err,"%s: Error initializing context\n",uVar13);
      puVar24 = local_1100;
      goto LAB_00100614;
    }
    iVar9 = EVP_PKEY_get_default_digest_name(local_1188,&local_1048,100);
    if (((iVar9 == 2) && (local_1048 == 0x45444e55)) && (local_1044 == 0x46)) {
      if (local_1170 == 0) {
        if (bVar3) goto LAB_00101554;
        goto LAB_00101152;
      }
      pcVar20 = (char *)EVP_PKEY_get0_type_name(local_1188);
      if (pcVar20 == (char *)0x0) {
        pcVar20 = "(unknown key type)";
      }
      BIO_printf(_bio_err,"%s: -digest (prehash) is not supported with %s\n",uVar13,pcVar20);
      goto LAB_00100608;
    }
    if ((uVar11 != 0) && (bVar3)) {
LAB_00101554:
      BIO_printf(_bio_err,"%s: -rev cannot be used with raw input\n",uVar13);
      goto LAB_001005ee;
    }
    if (uVar11 == 0) goto LAB_00100bf6;
LAB_00101152:
    local_1198 = EVP_MD_CTX_new();
    if (local_1198 != 0) {
      local_1178 = (ENGINE *)0x1;
      goto LAB_00100bff;
    }
    puVar24 = (uchar *)0x0;
    BIO_printf(_bio_err,"Error: out of memory\n");
  }
LAB_00100614:
  local_11b8 = (BIO *)0x0;
  data = (void *)0x0;
  ctx = (EVP_PKEY_CTX *)0x0;
  bp = (BIO *)0x0;
  a = (BIO *)0x0;
  goto LAB_00100696;
LAB_00100630:
  if (iVar7 < 0x5df) {
    if (iVar7 < 0x5dd) goto switchD_0010059e_caseD_0;
    iVar7 = opt_rand(iVar7);
  }
  else {
    switch(iVar7) {
    case 0x641:
    case 0x642:
    case 0x643:
    case 0x644:
      iVar7 = opt_provider(iVar7);
      break;
    default:
      goto switchD_0010059e_caseD_0;
    case 0x646:
      uVar23 = 0x2000;
      goto switchD_0010059e_caseD_0;
    case 0x647:
      iVar9 = 2;
      uVar23 = 0x1000;
      goto switchD_0010059e_caseD_0;
    case 0x648:
      local_11b8 = (BIO *)opt_arg();
      goto switchD_0010059e_caseD_0;
    case 0x649:
      local_1148 = opt_arg();
      goto switchD_0010059e_caseD_0;
    case 0x64a:
      uVar17 = opt_arg();
      local_1190 = (CONF *)app_load_config_modules(uVar17);
      if (local_1190 == (CONF *)0x0) goto LAB_00100667;
      goto switchD_0010059e_caseD_0;
    case 0x64b:
      uVar6 = 1;
      goto switchD_0010059e_caseD_0;
    case 0x64c:
      local_1170 = opt_arg();
      goto switchD_0010059e_caseD_0;
    }
  }
  if (iVar7 == 0) goto LAB_00100667;
  goto switchD_0010059e_caseD_0;
LAB_00100667:
  local_11b8 = (BIO *)0x0;
  data = (void *)0x0;
  ctx = (EVP_PKEY_CTX *)0x0;
  local_1198 = 0;
  bp = (BIO *)0x0;
  a = (BIO *)0x0;
  local_1188 = (EVP_PKEY *)0x0;
  puVar24 = (uchar *)0x0;
  goto LAB_00100696;
LAB_00100fa9:
  BIO_printf(_bio_err,"%s: Can\'t set parameter \"%s\":\n",uVar13,pcVar20);
  goto LAB_00100db5;
  while (iVar8 = iVar8 + 1, iVar9 != iVar8) {
LAB_00100f89:
    pcVar20 = (char *)OPENSSL_sk_value(local_11a8,iVar8);
    iVar10 = pkey_ctrl_string(ctx,pcVar20);
    if (iVar10 < 1) goto LAB_00100fa9;
  }
LAB_00100fd8:
  if ((local_11b0 != 0) && (iVar9 = OPENSSL_sk_num(local_11b0), 0 < iVar9)) {
    do {
      pcVar20 = (char *)OPENSSL_sk_value(local_11b0,iVar7);
      pcVar16 = strchr(pcVar20,0x3a);
      if (pcVar16 == (char *)0x0) {
        BIO_snprintf((char *)&local_1048,0x1000,"Enter %s: ");
        iVar8 = EVP_read_pw_string((char *)&local_1048,0xfff,(char *)&local_1048,0);
        if (iVar8 < 0) {
          if (iVar8 == -2) {
            BIO_puts(_bio_err,"user abort\n");
          }
          else {
            BIO_puts(_bio_err,"entry failed\n");
          }
          goto LAB_00100db5;
        }
        local_10e0 = CRYPTO_strdup((char *)&local_1048,"apps/pkeyutl.c",0x198);
        if (local_10e0 == (char *)0x0) {
          BIO_puts(_bio_err,"out of memory\n");
          goto LAB_00100db5;
        }
      }
      else {
        *pcVar16 = '\0';
        iVar8 = app_passwd(pcVar16 + 1,0,&local_10e0,0);
        if (iVar8 == 0) {
          BIO_printf(_bio_err,"failed to get \'%s\'\n",pcVar20);
          goto LAB_00100db5;
        }
      }
      iVar8 = EVP_PKEY_CTX_ctrl_str(ctx,pcVar20,local_10e0);
      if (iVar8 < 1) goto LAB_00100fa9;
      iVar7 = iVar7 + 1;
      CRYPTO_free(local_10e0);
    } while (iVar9 != iVar7);
  }
  if ((local_1158 == (char *)0x0) || (uVar23 == 0x20)) {
    if (!(bool)(local_1158 == (char *)0x0 & bVar26)) {
      uVar2 = 0xffffffff;
      a = (BIO *)0x0;
      bVar26 = false;
      if ((uVar23 - 0x800 & 0xfffff7f0) != 0) {
        a = (BIO *)bio_open_default(local_1138,0x72,2);
        if (((local_1138 != (char *)0x0) && (iVar9 = stat(local_1138,&local_10d8), iVar9 == 0)) &&
           (uVar2 = (undefined4)local_10d8.st_size, 0x7fffffff < local_10d8.st_size)) {
          uVar2 = 0xffffffff;
        }
        if (a == (BIO *)0x0) {
LAB_00101926:
          local_11b8 = (BIO *)0x0;
          data = (void *)0x0;
          bp = (BIO *)0x0;
          puVar24 = local_1100;
          goto LAB_00100696;
        }
        bVar26 = uVar23 == 0x2000;
        if ((local_1150 == 0) || (!bVar26)) goto LAB_00101305;
        if (local_11b8 != (BIO *)0x0) {
          BIO_printf(_bio_err,
                     "%s: Decapsulation produces only a shared secret and no output. The \'-out\' option is not applicable.\n"
                     ,uVar13);
          goto LAB_00101926;
        }
        bp = (BIO *)bio_open_owner(local_1150,0x77,2);
        if (bp == (BIO *)0x0) goto LAB_00101960;
        goto LAB_00101345;
      }
LAB_00101305:
      bp = (BIO *)bio_open_default(local_1150,0x77,2);
      if (bp == (BIO *)0x0) {
LAB_001019b6:
        data = (void *)0x0;
        local_11b8 = (BIO *)0x0;
        puVar24 = local_1100;
        goto LAB_00100696;
      }
      if ((uVar23 == 0x1000) || (bVar26)) {
        if (local_11b8 == (BIO *)0x0) {
          if (uVar23 == 0x1000) {
            BIO_printf(_bio_err,
                       "KEM-based shared-secret derivation requires the \'-secret <file>\' option\n"
                      );
            goto LAB_001019b6;
          }
          goto LAB_00101345;
        }
        local_11b8 = (BIO *)bio_open_owner(local_11b8,0x77,2);
        if (local_11b8 != (BIO *)0x0) goto LAB_00101345;
LAB_00101960:
        data = (void *)0x0;
        puVar24 = local_1100;
        goto LAB_00100696;
      }
      local_11b8 = (BIO *)0x0;
LAB_00101345:
      if (local_1158 != (char *)0x0) {
        pBVar18 = BIO_new_file(local_1158,"rb");
        if (pBVar18 == (BIO *)0x0) {
          BIO_printf(_bio_err,"Can\'t open signature file %s\n",local_1158);
          data = (void *)0x0;
          puVar24 = local_1100;
          goto LAB_00100696;
        }
        iVar9 = bio_to_mem(&local_10f8,local_113c * 10,pBVar18);
        BIO_free(pBVar18);
        pcVar20 = "Error reading signature data\n";
        if (-1 < iVar9) goto LAB_001013a3;
LAB_00101be2:
        data = (void *)0x0;
        BIO_printf(_bio_err,pcVar20);
        puVar24 = local_1100;
        goto LAB_00100696;
      }
      iVar9 = -1;
LAB_001013a3:
      if ((a == (BIO *)0x0) || (local_1178 != (ENGINE *)0x0)) {
        if ((int)local_1178 != 0) goto LAB_00101ae0;
        uVar11 = 0;
        uVar6 = 0;
        if (!bVar25) {
LAB_00101a63:
          if (local_115c == 0) {
            iVar9 = do_keyop(ctx,uVar23,0);
            if (0 < iVar9) {
              if (local_10e8 == 0) {
                if ((uVar23 - 0x1000 & 0xffffeff0) == 0) goto LAB_00101a9f;
                if (local_10f0 != 0) goto LAB_00101d62;
                data = (void *)0x0;
                goto LAB_00101b33;
              }
              if (local_10f0 == 0) {
                if (uVar23 != 0x2000) goto LAB_00101a9f;
LAB_00101e3c:
                data = (void *)app_malloc(local_10e8,"secret output");
              }
              else {
LAB_00101d62:
                data = (void *)0x0;
                local_1100 = (uchar *)app_malloc(local_10f0,"buffer output");
                if (local_10e8 != 0) goto LAB_00101e3c;
              }
              local_1178 = (ENGINE *)&local_10e8;
              local_1180 = &local_10f0;
              iVar9 = do_keyop(ctx,uVar23,local_1100,local_1180,local_1108,(long)(int)uVar11,data,
                               local_1178);
              goto LAB_00101b23;
            }
            data = (void *)0x0;
            goto LAB_00101ca8;
          }
          local_10f0 = (long)local_115c;
          if ((local_10e8 != 0) || ((uVar23 - 0x1000 & 0xffffeff0) != 0)) goto LAB_00101d62;
LAB_00101a9f:
          data = (void *)0x0;
          goto LAB_00101b33;
        }
LAB_00101a59:
        uVar11 = uVar6;
        if (uVar23 != 0x20) goto LAB_00101a63;
        iVar9 = EVP_PKEY_verify(ctx,local_10f8,(long)iVar9,local_1108,(long)(int)uVar11);
LAB_00101c31:
        puVar24 = local_1100;
        if (iVar9 != 1) {
          data = (void *)0x0;
          BIO_puts(bp,"Signature Verification Failure\n");
          goto LAB_00100696;
        }
        data = (void *)0x0;
        BIO_puts(bp,"Signature Verified Successfully\n");
      }
      else {
        uVar11 = bio_to_mem(&local_1108,0xffffffff,a);
        if ((int)uVar11 < 0) {
          pcVar20 = "Error reading input Data\n";
          goto LAB_00101be2;
        }
        if (bVar3) {
          pcVar22 = (char *)(long)(int)uVar11;
          pEVar14 = (ENGINE *)((ulong)pcVar22 >> 1);
          if (pEVar14 != (ENGINE *)0x0) {
            pcVar22 = (char *)((long)&((EVP_PKEY *)((long)pcVar22 + -0x38))->attributes + 7);
            pEVar19 = (ENGINE *)0x0;
            do {
              lVar21 = (long)pcVar22 - (long)pEVar19;
              puVar24 = local_1108 + (long)pEVar19;
              pEVar19 = pEVar19 + 1;
              uVar1 = *puVar24;
              *puVar24 = local_1108[lVar21];
              local_1108[lVar21] = uVar1;
            } while (pEVar19 != pEVar14);
          }
        }
        if ((int)local_1178 == 0) {
          if (!bVar25) goto LAB_00101a63;
          uVar6 = uVar11;
          if ((int)uVar11 < 0x41) goto LAB_00101a59;
          BIO_printf(_bio_err,
                     "Error: The non-raw input data length %d is too long - max supported hashed size is %d\n"
                     ,(ulong)uVar11,0x40);
          goto LAB_00101960;
        }
LAB_00101ae0:
        if (uVar23 == 0x20) {
          iVar9 = do_raw_keyop(0x20,local_1198,local_1188,a,uVar2,local_10f8,iVar9,0,0,pcVar22);
          goto LAB_00101c31;
        }
        data = (void *)0x0;
        iVar9 = do_raw_keyop(uVar23,local_1198,local_1188,a,uVar2,0,0,&local_1100,&local_10f0,
                             pEVar14);
LAB_00101b23:
        if (iVar9 < 1) {
LAB_00101ca8:
          if (uVar23 == 0x800) {
            BIO_puts(_bio_err,"Key derivation failed\n");
            puVar24 = local_1100;
          }
          else {
            BIO_puts(_bio_err,"Public Key operation error\n");
            puVar24 = local_1100;
          }
          goto LAB_00100696;
        }
LAB_00101b33:
        puVar24 = local_1100;
        if (bVar4) {
          iVar9 = ASN1_parse_dump(bp,local_1100,local_10f0,1,-1);
          if (iVar9 == 0) {
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
          pBVar18 = local_11b8;
          if (local_11b8 == (BIO *)0x0) {
            pBVar18 = bp;
          }
          BIO_write(pBVar18,data,(int)local_10e8);
        }
      }
LAB_001008f7:
      local_1180 = (long *)0x0;
      goto LAB_001008ff;
    }
    BIO_printf(_bio_err,"%s: No signature file specified for verify\n",uVar13);
  }
  else {
    BIO_printf(_bio_err,"%s: Signature file specified for non verify\n",uVar13);
  }
LAB_00100db5:
  local_11b8 = (BIO *)0x0;
  data = (void *)0x0;
  bp = (BIO *)0x0;
  a = (BIO *)0x0;
  puVar24 = local_1100;
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
  CRYPTO_free(puVar24);
  CRYPTO_free(local_10f8);
  CRYPTO_free(data);
  OPENSSL_sk_free(local_11a8);
  OPENSSL_sk_free(local_11b0);
  NCONF_free(local_1190);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_1180;
}


