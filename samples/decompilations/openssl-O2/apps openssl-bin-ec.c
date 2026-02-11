
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int ec_main(undefined4 param_1,undefined8 param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  EVP_PKEY *pkey;
  BIO *out;
  undefined8 uVar8;
  size_t sVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  EVP_PKEY_CTX *ctx;
  char *pcVar13;
  undefined *puVar14;
  uint uVar15;
  long in_FS_OFFSET;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 local_98;
  uint local_90;
  uint local_8c;
  undefined8 local_88;
  undefined8 local_80;
  uint local_78;
  undefined4 local_60;
  int local_5c;
  long local_58;
  char *local_50;
  char *local_48;
  long local_40;
  
  lVar10 = 0;
  lVar11 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = 0;
  local_58 = 0;
  local_50 = (char *)0x0;
  local_48 = (char *)0x0;
  local_5c = 0x8005;
  opt_set_unknown_name("cipher");
  uVar7 = opt_init(param_1,param_2,ec_options);
  bVar2 = false;
  uVar12 = 0;
  bVar3 = false;
  local_90 = 0;
  local_8c = 0;
  bVar1 = false;
  bVar4 = false;
  local_78 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_b0 = 0;
  local_80 = 0;
  local_88 = 0;
switchD_00100116_caseD_0:
  do {
    iVar5 = opt_next();
    if (iVar5 == 0) {
LAB_001001b0:
      iVar6 = opt_check_rest_arg(0);
      if ((iVar6 != 0) && (iVar6 = opt_cipher(local_b0,&local_58), iVar6 != 0)) {
        if (bVar1) {
          iVar6 = app_passwd(local_a0,local_98,&local_50,&local_48);
          if (iVar6 == 0) {
LAB_001006aa:
            BIO_printf(_bio_err,"Error getting passwords\n");
            goto LAB_00100159;
          }
          uVar15 = 0;
          BIO_printf(_bio_err,"read EC key\n");
          pkey = (EVP_PKEY *)load_pubkey(local_88,local_60,1,local_50,uVar12,"public key");
        }
        else {
          uVar15 = (local_8c | local_90) ^ 1;
          if (local_78 != 0) {
            uVar15 = local_78;
          }
          iVar6 = app_passwd(local_a0,local_98,&local_50,&local_48);
          if (iVar6 == 0) goto LAB_001006aa;
          BIO_printf(_bio_err,"read EC key\n");
          pkey = (EVP_PKEY *)load_key(local_88,local_60,1,local_50,uVar12,"private key");
        }
        if (pkey == (EVP_PKEY *)0x0) {
          out = (BIO *)0x0;
          ctx = (EVP_PKEY_CTX *)0x0;
          uVar7 = 0;
          BIO_printf(_bio_err,"unable to load Key\n");
          goto LAB_00100164;
        }
        out = (BIO *)bio_open_owner(local_80,local_5c,uVar15);
        if (out != (BIO *)0x0) {
          if ((lVar10 == 0) ||
             (iVar6 = EVP_PKEY_set_utf8_string_param(pkey,"point-format",lVar10), iVar6 != 0)) {
            if ((lVar11 == 0) ||
               (iVar6 = EVP_PKEY_set_utf8_string_param(pkey,"encoding",lVar11), iVar6 != 0)) {
              if (bVar2) {
                iVar6 = EVP_PKEY_set_int_param(pkey,"include-public",0);
                if (iVar6 != 0) {
LAB_001002cc:
                  if (local_78 != 0) {
                    if (bVar1) {
                      iVar6 = EVP_PKEY_print_public(out,pkey,0,(ASN1_PCTX *)0x0);
                    }
                    else {
                      iVar6 = EVP_PKEY_print_private(out,pkey,0,(ASN1_PCTX *)0x0);
                    }
                    if (iVar6 < 1) {
                      BIO_printf(_bio_err,"unable to print EC key\n");
                      goto LAB_001006f3;
                    }
                  }
                  ctx = (EVP_PKEY_CTX *)0x0;
                  if (bVar3) {
                    ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(0,pkey,0);
                    if (ctx == (EVP_PKEY_CTX *)0x0) {
                      BIO_printf(_bio_err,"unable to check EC key\n");
                      goto LAB_001006f3;
                    }
                    iVar6 = EVP_PKEY_check(ctx);
                    if (iVar6 < 1) {
                      BIO_printf(_bio_err,"EC Key Invalid!\n");
                    }
                    else {
                      BIO_printf(_bio_err,"EC Key valid.\n");
                    }
                    ERR_print_errors(_bio_err);
                  }
                  uVar7 = 0;
                  if (bVar4) goto LAB_0010055e;
                  puVar14 = &_LC1;
                  if (local_5c == 4) {
                    puVar14 = &_LC0;
                  }
                  BIO_printf(_bio_err,"writing EC key\n");
                  iVar5 = 4;
                  pcVar13 = "type-specific";
                  if (local_90 == 0) {
                    if (bVar1 || local_8c != 0) {
                      pcVar13 = "SubjectPublicKeyInfo";
                    }
                    iVar5 = (-(uint)(!bVar1 && local_8c == 0) & 0x81) + 6;
                  }
                  uVar7 = OSSL_ENCODER_CTX_new_for_pkey(pkey,iVar5,puVar14,pcVar13,0);
                  if (local_58 != 0) {
                    uVar8 = EVP_CIPHER_get0_name();
                    OSSL_ENCODER_CTX_set_cipher(uVar7,uVar8,0);
                    uVar8 = get_ui_method();
                    OSSL_ENCODER_CTX_set_passphrase_ui(uVar7,uVar8,0);
                    pcVar13 = local_48;
                    if (local_48 != (char *)0x0) {
                      sVar9 = strlen(local_48);
                      OSSL_ENCODER_CTX_set_passphrase(uVar7,pcVar13,sVar9);
                    }
                  }
                  iVar5 = 0;
                  iVar6 = OSSL_ENCODER_to_bio(uVar7,out);
                  if (iVar6 != 0) goto LAB_0010055e;
                  BIO_printf(_bio_err,"unable to write EC key\n");
                  goto LAB_00100164;
                }
                BIO_printf(_bio_err,"unable to disable public key encoding\n");
              }
              else {
                iVar6 = EVP_PKEY_set_int_param(pkey,"include-public",1);
                if (iVar6 != 0) goto LAB_001002cc;
                BIO_printf(_bio_err,"unable to enable public key encoding\n");
              }
            }
            else {
              BIO_printf(_bio_err,"unable to set asn1 encoding format\n");
            }
          }
          else {
            BIO_printf(_bio_err,"unable to set point conversion format\n");
          }
        }
LAB_001006f3:
        ctx = (EVP_PKEY_CTX *)0x0;
        uVar7 = 0;
        goto LAB_00100164;
      }
      goto switchD_00100116_caseD_ffffffff;
    }
    while (0x12 < iVar5) {
      if (3 < iVar5 - 0x641U) goto switchD_00100116_caseD_0;
      iVar5 = opt_provider(iVar5);
      if (iVar5 == 0) goto LAB_00100159;
      iVar5 = opt_next();
      if (iVar5 == 0) {
        iVar5 = 0;
        goto LAB_001001b0;
      }
    }
  } while (iVar5 < -1);
  switch(iVar5) {
  default:
    goto switchD_00100116_caseD_0;
  case 1:
    iVar5 = 0;
    out = (BIO *)0x0;
    pkey = (EVP_PKEY *)0x0;
    opt_help(ec_options);
    ctx = (EVP_PKEY_CTX *)0x0;
    uVar7 = 0;
    goto LAB_0010055e;
  case 2:
    uVar8 = opt_arg();
    iVar5 = opt_format(uVar8,0xffe,&local_60);
    break;
  case 3:
    uVar8 = opt_arg();
    iVar5 = opt_format(uVar8,6,&local_5c);
    break;
  case 4:
    uVar12 = opt_arg();
    uVar12 = setup_engine_methods(uVar12,0xffffffff,0);
    goto switchD_00100116_caseD_0;
  case 5:
    local_88 = opt_arg();
    goto switchD_00100116_caseD_0;
  case 6:
    local_80 = opt_arg();
    goto switchD_00100116_caseD_0;
  case 7:
    bVar4 = true;
    goto switchD_00100116_caseD_0;
  case 8:
    local_78 = 1;
    goto switchD_00100116_caseD_0;
  case 9:
    local_90 = 1;
    goto switchD_00100116_caseD_0;
  case 10:
    bVar1 = true;
    goto switchD_00100116_caseD_0;
  case 0xb:
    local_8c = 1;
    goto switchD_00100116_caseD_0;
  case 0xc:
    local_a0 = opt_arg();
    goto switchD_00100116_caseD_0;
  case 0xd:
    local_98 = opt_arg();
    goto switchD_00100116_caseD_0;
  case 0xe:
    lVar11 = opt_arg();
    iVar5 = opt_string(lVar11,asn1_encoding_options);
    break;
  case 0xf:
    lVar10 = opt_arg();
    iVar5 = opt_string(lVar10,point_format_options);
    break;
  case 0x10:
    local_b0 = opt_unknown();
    goto switchD_00100116_caseD_0;
  case 0x11:
    bVar2 = true;
    goto switchD_00100116_caseD_0;
  case 0x12:
    bVar3 = true;
    goto switchD_00100116_caseD_0;
  case -1:
    goto switchD_00100116_caseD_ffffffff;
  }
  if (iVar5 == 0) goto switchD_00100116_caseD_ffffffff;
  goto switchD_00100116_caseD_0;
switchD_00100116_caseD_ffffffff:
  BIO_printf(_bio_err,"%s: Use -help for summary.\n",uVar7);
LAB_00100159:
  out = (BIO *)0x0;
  pkey = (EVP_PKEY *)0x0;
  ctx = (EVP_PKEY_CTX *)0x0;
  uVar7 = 0;
LAB_00100164:
  iVar5 = 1;
  ERR_print_errors(_bio_err);
LAB_0010055e:
  BIO_free_all(out);
  EVP_PKEY_free(pkey);
  EVP_CIPHER_free(local_58);
  OSSL_ENCODER_CTX_free(uVar7);
  OSSL_DECODER_CTX_free(0);
  EVP_PKEY_CTX_free(ctx);
  release_engine(uVar12);
  pcVar13 = local_50;
  if (local_50 != (char *)0x0) {
    sVar9 = strlen(local_50);
    CRYPTO_clear_free(pcVar13,sVar9,"apps/ec.c",0x11e);
  }
  pcVar13 = local_48;
  if (local_48 != (char *)0x0) {
    sVar9 = strlen(local_48);
    CRYPTO_clear_free(pcVar13,sVar9,"apps/ec.c",0x120);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar5;
}


