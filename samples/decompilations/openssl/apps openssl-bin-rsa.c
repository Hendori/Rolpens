
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong rsa_main(undefined4 param_1,undefined8 param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  BIO *out;
  undefined8 uVar10;
  RSA *rsa;
  EVP_PKEY *pkey;
  EVP_PKEY_CTX *ctx;
  size_t sVar11;
  ulong uVar12;
  bool bVar13;
  char *pcVar14;
  long in_FS_OFFSET;
  bool bVar15;
  char *local_138;
  undefined8 local_128;
  undefined8 local_120;
  int local_118;
  char *local_110;
  undefined8 local_108;
  uint local_100;
  undefined1 local_f8 [32];
  undefined8 local_d8;
  int local_c4;
  int local_c0;
  int local_bc;
  long local_b8;
  void *local_b0;
  char *local_a8;
  BIGNUM *local_a0;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  long local_40;
  
  uVar10 = 0;
  bVar1 = false;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_c4 = 0;
  local_b8 = 0;
  local_b0 = (void *)0x0;
  local_a8 = (char *)0x0;
  local_c0 = 0x8005;
  local_bc = 2;
  opt_set_unknown_name("cipher");
  uVar7 = opt_init(param_1,param_2,rsa_options);
  iVar6 = 0;
  bVar13 = false;
  uVar8 = 0;
  local_118 = 0;
  bVar3 = false;
  local_100 = 0;
  bVar2 = false;
  local_128 = 0;
  local_120 = 0;
  local_110 = (char *)0x0;
  local_108 = 0;
switchD_0010011a_caseD_0:
  iVar5 = opt_next();
  if (iVar5 != 0) goto LAB_001000fd;
LAB_00100220:
  iVar5 = opt_check_rest_arg(0);
  if ((iVar5 == 0) || (iVar5 = opt_cipher(uVar10,&local_b8), iVar5 == 0))
  goto switchD_0010011a_caseD_ffffffff;
  if ((iVar6 == 0) && (bVar2)) {
    iVar5 = app_passwd(local_120,local_128,&local_b0,&local_a8);
    if (iVar5 != 0) {
      bVar15 = true;
LAB_00100632:
      pkey = (EVP_PKEY *)load_key(local_108,local_c4,1,local_b0,uVar8,"private key");
      bVar4 = false;
LAB_001004a8:
      if (pkey != (EVP_PKEY *)0x0) {
        iVar5 = EVP_PKEY_is_a(pkey,&_LC13);
        if ((iVar5 == 0) && (iVar5 = EVP_PKEY_is_a(pkey,"RSA-PSS"), iVar5 == 0)) {
          BIO_printf(_bio_err,"Not an RSA key\n");
        }
        else {
          out = (BIO *)bio_open_owner(local_110,local_c0,bVar15);
          if (out != (BIO *)0x0) {
            if (bVar2) {
              if (bVar4) {
                iVar5 = EVP_PKEY_print_public(out,pkey,0,(ASN1_PCTX *)0x0);
                if (iVar5 < 1) {
                  uVar12 = rsa_main_cold();
                  return uVar12;
                }
                goto LAB_00100522;
              }
              iVar5 = EVP_PKEY_print_private(out,pkey,0,(ASN1_PCTX *)0x0);
              if (0 < iVar5) goto LAB_00100522;
              perror(local_110);
              ERR_print_errors(_bio_err);
LAB_001006fe:
              uVar10 = 0;
              local_100 = 1;
              goto LAB_00100168;
            }
LAB_00100522:
            if (bVar3) {
              local_a0 = (BIGNUM *)0x0;
              EVP_PKEY_get_bn_param(pkey,&_LC16,&local_a0);
              BIO_printf(out,"Modulus=");
              BN_print(out,local_a0);
              BIO_printf(out,"\n");
              BN_free(local_a0);
            }
            if (local_100 != 0) {
              ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(0,pkey,0);
              if (ctx == (EVP_PKEY_CTX *)0x0) {
                BIO_printf(_bio_err,"RSA unable to create PKEY context\n");
                ERR_print_errors(_bio_err);
                uVar10 = 0;
                goto LAB_00100168;
              }
              iVar5 = EVP_PKEY_check(ctx);
              EVP_PKEY_CTX_free(ctx);
              if (iVar5 == 1) {
                BIO_printf(out,"RSA key ok\n");
              }
              else if (iVar5 == 0) {
                BIO_printf(_bio_err,"RSA key not ok\n");
                ERR_print_errors(_bio_err);
              }
              else if (iVar5 < 0) {
                ERR_print_errors(_bio_err);
                goto LAB_001006fe;
              }
            }
            if (bVar13) {
              local_100 = 0;
              uVar10 = 0;
              goto LAB_00100168;
            }
            BIO_printf(_bio_err,"writing RSA key\n");
            local_100 = 0;
            if (local_c0 == 4) {
              local_138 = "DER";
              if (iVar6 == 0 && local_118 == 0) goto LAB_001009da;
LAB_0010094b:
              pcVar14 = "pkcs1";
              if (local_118 != 2) {
                pcVar14 = "SubjectPublicKeyInfo";
              }
LAB_00100962:
              uVar10 = OSSL_ENCODER_CTX_new_for_pkey(pkey,2,local_138,pcVar14,0);
              iVar6 = OSSL_ENCODER_CTX_get_num_encoders(uVar10);
              if (iVar6 != 0) goto LAB_001007c7;
LAB_001005cb:
              iVar6 = local_c0;
              rsa = (RSA *)EVP_PKEY_get0_RSA(pkey);
              if (rsa == (RSA *)0x0) goto LAB_00100605;
              if (iVar6 == 4) {
                if (local_118 == 2) {
                  iVar6 = i2d_RSAPublicKey_bio(out,rsa);
                  bVar1 = 0 < iVar6;
                }
                else {
                  iVar6 = i2d_RSA_PUBKEY_bio(out,rsa);
                  bVar1 = 0 < iVar6;
                }
LAB_00100ac6:
                if (bVar1) goto LAB_00100168;
              }
              else if (iVar6 == 0x8005) {
                if (local_118 != 2) {
                  iVar6 = PEM_write_bio_RSA_PUBKEY(out,rsa);
                  bVar1 = 0 < iVar6;
                  goto LAB_00100ac6;
                }
                iVar6 = PEM_write_bio_RSAPublicKey(out,rsa);
                if (0 < iVar6) goto LAB_00100168;
              }
              else if (iVar6 - 0xbU < 2) {
                iVar6 = i2b_PublicKey_bio(out,pkey);
                bVar1 = 0 < iVar6;
                goto LAB_00100ac6;
              }
            }
            else {
              if (local_c0 == 0x8005) {
                local_138 = "PEM";
                if (iVar6 != 0 || local_118 != 0) goto LAB_0010094b;
LAB_001009da:
                pcVar14 = "pkcs1";
                if (!bVar1) {
                  pcVar14 = "PrivateKeyInfo";
                }
              }
              else {
                if (local_c0 != 0xb) {
                  if (local_c0 == 0xc) {
                    if (!bVar4) {
                      if (local_118 == 0) {
                        uVar10 = OSSL_ENCODER_CTX_new_for_pkey(pkey,0x87,&_LC2,0,0);
                        iVar6 = OSSL_ENCODER_CTX_get_num_encoders(uVar10);
                        local_138 = "PVK";
                        if (iVar6 == 0) goto LAB_00100605;
                      }
                      else {
                        uVar10 = OSSL_ENCODER_CTX_new_for_pkey(pkey,2,&_LC2,0,0);
                        iVar6 = OSSL_ENCODER_CTX_get_num_encoders(uVar10);
                        local_138 = "PVK";
                        if (iVar6 == 0) goto LAB_001005cb;
                      }
                      goto LAB_001007c7;
                    }
                    pcVar14 = "PVK form impossible with public key input\n";
                  }
                  else {
                    pcVar14 = "bad output format specified for outfile\n";
                  }
                  BIO_printf(_bio_err,pcVar14);
                  goto LAB_001006fe;
                }
                pcVar14 = (char *)0x0;
                local_138 = "MSBLOB";
                if (iVar6 != 0 || local_118 != 0) goto LAB_00100962;
              }
              uVar10 = OSSL_ENCODER_CTX_new_for_pkey(pkey,0x87,local_138,pcVar14,0);
              iVar6 = OSSL_ENCODER_CTX_get_num_encoders(uVar10);
              if (iVar6 != 0) {
LAB_001007c7:
                if (local_b8 == 0) {
LAB_0010098e:
                  if (local_c0 == 0xc) goto LAB_001007f9;
                }
                else {
                  uVar7 = EVP_CIPHER_get0_name();
                  OSSL_ENCODER_CTX_set_cipher(uVar10,uVar7,0);
                  if (local_b8 == 0) goto LAB_0010098e;
LAB_001007f9:
                  uVar7 = get_ui_method();
                  OSSL_ENCODER_CTX_set_passphrase_ui(uVar10,uVar7,0);
                  pcVar14 = local_a8;
                  if (local_a8 != (char *)0x0) {
                    sVar11 = strlen(local_a8);
                    OSSL_ENCODER_CTX_set_passphrase(uVar10,pcVar14,sVar11);
                  }
                  if (local_c0 == 0xc) {
                    local_98 = (undefined1  [16])0x0;
                    local_88 = (undefined1  [16])0x0;
                    local_78 = (undefined1  [16])0x0;
                    local_68 = (undefined1  [16])0x0;
                    local_58 = (undefined1  [16])0x0;
                    OSSL_PARAM_construct_int(local_f8,"encrypt-level",&local_bc);
                    local_78._0_8_ = local_d8;
                    iVar6 = OSSL_ENCODER_CTX_set_params(uVar10,local_98);
                    if (iVar6 == 0) {
                      local_100 = 1;
                      BIO_printf(_bio_err,"invalid PVK encryption level\n");
                      goto LAB_00100168;
                    }
                  }
                }
                iVar6 = OSSL_ENCODER_to_bio(uVar10,out);
                if (iVar6 == 0) {
                  local_100 = 1;
                  BIO_printf(_bio_err,"unable to write key\n");
                  ERR_print_errors(_bio_err);
                }
                goto LAB_00100168;
              }
            }
LAB_00100605:
            local_100 = 1;
            BIO_printf(_bio_err,"%s format not supported\n",local_138);
            goto LAB_00100168;
          }
        }
        uVar10 = 0;
        local_100 = 1;
        out = (BIO *)0x0;
        goto LAB_00100168;
      }
      ERR_print_errors(_bio_err);
      goto LAB_0010029e;
    }
  }
  else {
    bVar15 = local_118 == 0 && !bVar13;
    iVar5 = app_passwd(local_120,local_128,&local_b0,&local_a8);
    if (iVar5 != 0) {
      if ((iVar6 == 0) || (local_100 == 0)) {
        if (iVar6 == 0) goto LAB_00100632;
        iVar5 = local_c4;
        if (((iVar6 == 2) && (iVar5 = 0x8009, local_c4 != 0x8005)) && (iVar5 = 10, local_c4 != 4)) {
          iVar5 = 0;
        }
        pkey = (EVP_PKEY *)load_pubkey(local_108,iVar5,1,local_b0,uVar8,"public key");
        bVar4 = true;
        goto LAB_001004a8;
      }
      BIO_printf(_bio_err,"Only private keys can be checked\n");
LAB_0010029e:
      uVar10 = 0;
      local_100 = 1;
      pkey = (EVP_PKEY *)0x0;
      out = (BIO *)0x0;
LAB_00100168:
      OSSL_ENCODER_CTX_free(uVar10);
      release_engine(uVar8);
      BIO_free_all(out);
      EVP_PKEY_free(pkey);
      EVP_CIPHER_free(local_b8);
      CRYPTO_free(local_b0);
      CRYPTO_free(local_a8);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return (ulong)local_100;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  BIO_printf(_bio_err,"Error getting passwords\n");
  goto LAB_0010029e;
LAB_001000fd:
  while (0x14 < iVar5) {
    if (iVar5 < 0x645) {
      if ((iVar5 < 0x641) || (iVar5 = opt_provider(iVar5), iVar5 != 0))
      goto switchD_0010011a_caseD_0;
      goto LAB_0010029e;
    }
    if (iVar5 == 0x646) {
      bVar1 = true;
    }
    iVar5 = opt_next();
    if (iVar5 == 0) goto LAB_00100220;
  }
  if (iVar5 < -1) goto switchD_0010011a_caseD_0;
  switch(iVar5) {
  default:
    goto switchD_0010011a_caseD_0;
  case 1:
    uVar10 = 0;
    local_100 = 0;
    pkey = (EVP_PKEY *)0x0;
    opt_help(rsa_options);
    out = (BIO *)0x0;
    goto LAB_00100168;
  case 2:
    uVar9 = opt_arg();
    iVar5 = opt_format(uVar9,0xffe,&local_c4);
    break;
  case 3:
    uVar9 = opt_arg();
    iVar5 = opt_format(uVar9,0xffe,&local_c0);
    break;
  case 4:
    uVar8 = opt_arg();
    uVar8 = setup_engine_methods(uVar8,0xffffffff,0);
    goto switchD_0010011a_caseD_0;
  case 5:
    local_108 = opt_arg();
    goto switchD_0010011a_caseD_0;
  case 6:
    local_110 = (char *)opt_arg();
    goto switchD_0010011a_caseD_0;
  case 7:
    iVar6 = 1;
    goto switchD_0010011a_caseD_0;
  case 8:
    local_118 = 1;
    goto switchD_0010011a_caseD_0;
  case 9:
    local_128 = opt_arg();
    goto switchD_0010011a_caseD_0;
  case 10:
    local_120 = opt_arg();
    goto switchD_0010011a_caseD_0;
  case 0xb:
    iVar6 = 2;
    goto switchD_0010011a_caseD_0;
  case 0xc:
    local_118 = 2;
    goto switchD_0010011a_caseD_0;
  case 0xd:
  case 0xe:
  case 0xf:
    local_bc = iVar5 + -0xd;
    goto switchD_0010011a_caseD_0;
  case 0x10:
    bVar13 = true;
    goto switchD_0010011a_caseD_0;
  case 0x11:
    bVar2 = true;
    goto switchD_0010011a_caseD_0;
  case 0x12:
    bVar3 = true;
    goto switchD_0010011a_caseD_0;
  case 0x13:
    local_100 = 1;
    goto switchD_0010011a_caseD_0;
  case 0x14:
    uVar10 = opt_unknown();
    goto switchD_0010011a_caseD_0;
  case -1:
    goto switchD_0010011a_caseD_ffffffff;
  }
  if (iVar5 != 0) goto switchD_0010011a_caseD_0;
switchD_0010011a_caseD_ffffffff:
  uVar10 = 0;
  local_100 = 1;
  pkey = (EVP_PKEY *)0x0;
  out = (BIO *)0x0;
  BIO_printf(_bio_err,"%s: Use -help for summary.\n",uVar7);
  goto LAB_00100168;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 rsa_main_cold(void)

{
  EVP_PKEY *unaff_R12;
  BIO *unaff_R13;
  long in_FS_OFFSET;
  char *in_stack_00000028;
  undefined8 in_stack_00000080;
  void *in_stack_00000088;
  void *in_stack_00000090;
  long in_stack_000000f8;
  
  perror(in_stack_00000028);
  ERR_print_errors(_bio_err);
  OSSL_ENCODER_CTX_free(0);
  release_engine();
  BIO_free_all(unaff_R13);
  EVP_PKEY_free(unaff_R12);
  EVP_CIPHER_free(in_stack_00000080);
  CRYPTO_free(in_stack_00000088);
  CRYPTO_free(in_stack_00000090);
  if (in_stack_000000f8 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


