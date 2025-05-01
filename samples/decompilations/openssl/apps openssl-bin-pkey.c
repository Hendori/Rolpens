
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int pkey_main(undefined4 param_1,undefined8 param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  ENGINE *e;
  EVP_PKEY *pkey;
  BIO *bio;
  ENGINE *pEVar10;
  EVP_PKEY_CTX *ctx;
  uint uVar11;
  ENGINE *pEVar12;
  uint uVar13;
  uint uVar14;
  long in_FS_OFFSET;
  uint local_15c;
  uint local_158;
  uint local_154;
  undefined8 *local_150;
  undefined8 local_148;
  long local_140;
  undefined8 local_138;
  undefined8 local_128;
  long local_120;
  undefined8 local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined4 local_d8;
  int local_d4;
  EVP_CIPHER *local_d0;
  void *local_c8;
  void *local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  ENGINE local_90 [80];
  long local_40;
  
  uVar14 = 0;
  lVar8 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_d0 = (EVP_CIPHER *)0x0;
  local_c8 = (void *)0x0;
  local_c0 = (void *)0x0;
  local_d8 = 0;
  local_d4 = 0x8005;
  opt_set_unknown_name("cipher");
  uVar7 = opt_init(param_1,param_2,pkey_options);
  bVar4 = false;
  e = (ENGINE *)0x0;
  local_120 = 0;
  bVar3 = false;
  bVar1 = false;
  local_154 = 0;
  local_15c = 0;
  local_158 = 0;
  bVar2 = false;
  local_148 = 0;
  local_140 = 0;
  local_138 = 0;
  local_118 = 0;
  local_128 = 0;
switchD_00100136_caseD_0:
  do {
    iVar5 = opt_next();
    if (iVar5 == 0) {
LAB_001001d0:
      iVar6 = opt_check_rest_arg(0);
      if (iVar6 != 0) {
        uVar11 = local_158 & local_15c;
        if (uVar11 == 0) {
          if ((bVar1) && ((local_154 != 0 || (local_d4 != 0x8005)))) {
LAB_0010020b:
            BIO_printf(_bio_err,
                       "Warning: The -traditional is ignored since there is no PEM output\n");
          }
          uVar11 = local_158 ^ 1;
          if ((uVar14 & uVar11) == 0) {
LAB_0010062c:
            uVar13 = 1;
            if ((local_154 != 0 || uVar14 != 0) && (uVar13 = local_15c & uVar11, uVar13 != 0)) {
              local_15c = uVar13;
            }
          }
          else {
            uVar11 = local_15c;
            uVar13 = 0;
            if (local_15c != 0) {
              local_15c = 0;
              local_158 = uVar11;
            }
          }
        }
        else {
          BIO_printf(_bio_err,"Warning: The -text option is ignored with -text_pub\n");
          if (bVar1) {
            if ((local_154 != 0) || (uVar11 = 0, local_d4 != 0x8005)) goto LAB_0010020b;
            goto LAB_0010062c;
          }
          uVar13 = (local_154 | uVar14) ^ 1;
          local_15c = uVar11;
          local_158 = uVar11;
        }
        iVar6 = opt_cipher(local_148,&local_d0);
        if (iVar6 != 0) {
          if (local_d0 == (EVP_CIPHER *)0x0) {
            if (local_140 != 0) {
              BIO_printf(_bio_err,
                         "Warning: The -passout option is ignored without a cipher option\n");
            }
          }
          else if ((local_154 != 0) || (local_d4 != 0x8005)) {
            BIO_printf(_bio_err,"Error: Cipher options are supported only for PEM output\n");
            goto LAB_0010017a;
          }
          iVar6 = app_passwd(local_138,local_140,&local_c8,&local_c0);
          if (iVar6 == 0) {
            BIO_printf(_bio_err,"Error getting passwords\n");
            goto LAB_0010017a;
          }
          pEVar12 = e;
          if (bVar2) {
            pkey = (EVP_PKEY *)load_pubkey(local_128,local_d8,1);
          }
          else {
            pkey = (EVP_PKEY *)load_key(local_128,local_d8,1);
          }
          if (pkey == (EVP_PKEY *)0x0) goto LAB_0010017a;
          bio = (BIO *)bio_open_owner(local_118,local_d4,uVar13);
          if (bio == (BIO *)0x0) {
LAB_0010077b:
            ctx = (EVP_PKEY_CTX *)0x0;
            goto LAB_00100182;
          }
          if (local_120 != 0 || lVar8 != 0) {
            iVar6 = EVP_PKEY_is_a(pkey,&_LC9);
            if (iVar6 == 0) goto LAB_0010077b;
            if (local_120 == 0) {
              pEVar12 = (ENGINE *)&local_b8;
LAB_0010087c:
              pEVar10 = pEVar12 + 0x28;
              OSSL_PARAM_construct_utf8_string(&local_108,"point-format",lVar8);
              *(undefined8 *)pEVar12 = local_108;
              *(undefined8 *)(pEVar12 + 8) = uStack_100;
              *(undefined8 *)(pEVar12 + 0x10) = local_f8;
              *(undefined8 *)(pEVar12 + 0x18) = uStack_f0;
              *(undefined8 *)(pEVar12 + 0x20) = local_e8;
            }
            else {
              OSSL_PARAM_construct_utf8_string(&local_108,"encoding",local_120,0);
              local_98 = local_e8;
              pEVar10 = local_90;
              local_b8 = local_108;
              uStack_b0 = uStack_100;
              local_a8 = local_f8;
              uStack_a0 = uStack_f0;
              pEVar12 = pEVar10;
              if (lVar8 != 0) goto LAB_0010087c;
            }
            local_150 = &local_b8;
            OSSL_PARAM_construct_end(&local_108);
            *(undefined8 *)pEVar10 = local_108;
            *(undefined8 *)(pEVar10 + 8) = uStack_100;
            *(undefined8 *)(pEVar10 + 0x10) = local_f8;
            *(undefined8 *)(pEVar10 + 0x18) = uStack_f0;
            *(undefined8 *)(pEVar10 + 0x20) = local_e8;
            iVar6 = EVP_PKEY_set_params(pkey,local_150);
            if (iVar6 < 1) goto LAB_0010077b;
          }
          ctx = (EVP_PKEY_CTX *)0x0;
          if (bVar4 || bVar3) {
            ctx = EVP_PKEY_CTX_new(pkey,e);
            if (ctx != (EVP_PKEY_CTX *)0x0) {
              if ((bool)(bVar3 & (bVar2 ^ 1U))) {
                iVar6 = EVP_PKEY_check();
              }
              else {
                iVar6 = EVP_PKEY_public_check(ctx);
              }
              if (iVar6 == 1) {
                BIO_printf(bio,"Key is valid\n");
                goto LAB_00100591;
              }
              BIO_printf(_bio_err,"Key is invalid\n");
            }
            ERR_print_errors(_bio_err);
            goto LAB_00100182;
          }
LAB_00100591:
          if (local_154 == 0) {
            if (local_d4 != 0x8005) {
              if (local_d4 != 4) {
                BIO_printf(_bio_err,"Bad format specified for key\n");
                goto LAB_00100182;
              }
              if (local_158 != 0 || local_15c != 0) {
                BIO_printf(_bio_err,"Error: Text output cannot be combined with DER output\n");
                goto LAB_00100182;
              }
              if (uVar14 == 0) {
                iVar6 = i2d_PrivateKey_bio(bio,pkey);
              }
              else {
                iVar6 = i2d_PUBKEY_bio(bio,pkey);
              }
              if (iVar6 != 0) goto LAB_00100413;
              goto LAB_00100182;
            }
            if (uVar14 == 0) {
              if (!bVar1) {
                iVar6 = PEM_write_bio_PrivateKey
                                  (bio,pkey,local_d0,(uchar *)0x0,0,(undefined1 *)0x0,local_c0);
                if (iVar6 != 0) goto LAB_001007cc;
                goto LAB_00100182;
              }
              iVar6 = PEM_write_bio_PrivateKey_traditional(bio,pkey,local_d0,0,0,0,local_c0,pEVar12)
              ;
            }
            else {
              iVar6 = PEM_write_bio_PUBKEY(bio,pkey);
            }
            if (iVar6 == 0) goto LAB_00100182;
          }
LAB_001007cc:
          if (local_158 == 0) {
            if (local_15c == 0) goto LAB_00100413;
            iVar6 = EVP_PKEY_print_private(bio,pkey,0,(ASN1_PCTX *)0x0);
          }
          else {
            iVar6 = EVP_PKEY_print_public(bio,pkey,0,(ASN1_PCTX *)0x0);
          }
          if (0 < iVar6) goto LAB_00100413;
          goto LAB_00100182;
        }
      }
      goto switchD_00100136_caseD_ffffffff;
    }
    while (0x13 < iVar5) {
      if (3 < iVar5 - 0x641U) goto switchD_00100136_caseD_0;
      iVar5 = opt_provider(iVar5);
      if (iVar5 == 0) goto LAB_0010017a;
      iVar5 = opt_next();
      if (iVar5 == 0) {
        iVar5 = 0;
        goto LAB_001001d0;
      }
    }
  } while (iVar5 < -1);
  switch(iVar5) {
  default:
    goto switchD_00100136_caseD_0;
  case 1:
    iVar5 = 0;
    ctx = (EVP_PKEY_CTX *)0x0;
    pkey = (EVP_PKEY *)0x0;
    opt_help(pkey_options);
    bio = (BIO *)0x0;
    goto LAB_00100413;
  case 2:
    uVar9 = opt_arg();
    iVar5 = opt_format(uVar9,0xffe,&local_d8);
    break;
  case 3:
    uVar9 = opt_arg();
    iVar5 = opt_format(uVar9,6,&local_d4);
    break;
  case 4:
    local_138 = opt_arg();
    goto switchD_00100136_caseD_0;
  case 5:
    local_140 = opt_arg();
    goto switchD_00100136_caseD_0;
  case 6:
    uVar9 = opt_arg();
    e = (ENGINE *)setup_engine_methods(uVar9,0xffffffff,0);
    goto switchD_00100136_caseD_0;
  case 7:
    local_128 = opt_arg();
    goto switchD_00100136_caseD_0;
  case 8:
    local_118 = opt_arg();
    goto switchD_00100136_caseD_0;
  case 9:
    bVar2 = true;
    uVar14 = 1;
    goto switchD_00100136_caseD_0;
  case 10:
    uVar14 = 1;
    goto switchD_00100136_caseD_0;
  case 0xb:
    local_158 = 1;
    goto switchD_00100136_caseD_0;
  case 0xc:
    local_15c = 1;
    goto switchD_00100136_caseD_0;
  case 0xd:
    local_154 = 1;
    goto switchD_00100136_caseD_0;
  case 0xe:
    local_148 = opt_unknown();
    goto switchD_00100136_caseD_0;
  case 0xf:
    bVar1 = true;
    goto switchD_00100136_caseD_0;
  case 0x10:
    bVar3 = true;
    goto switchD_00100136_caseD_0;
  case 0x11:
    bVar4 = true;
    goto switchD_00100136_caseD_0;
  case 0x12:
    local_120 = opt_arg();
    iVar5 = opt_string(local_120,asn1_encoding_options);
    break;
  case 0x13:
    lVar8 = opt_arg();
    iVar5 = opt_string(lVar8,point_format_options);
    break;
  case -1:
    goto switchD_00100136_caseD_ffffffff;
  }
  if (iVar5 == 0) goto switchD_00100136_caseD_ffffffff;
  goto switchD_00100136_caseD_0;
switchD_00100136_caseD_ffffffff:
  BIO_printf(_bio_err,"%s: Use -help for summary.\n",uVar7);
LAB_0010017a:
  ctx = (EVP_PKEY_CTX *)0x0;
  pkey = (EVP_PKEY *)0x0;
  bio = (BIO *)0x0;
LAB_00100182:
  iVar5 = 1;
  ERR_print_errors(_bio_err);
LAB_00100413:
  EVP_PKEY_CTX_free(ctx);
  EVP_PKEY_free(pkey);
  EVP_CIPHER_free(local_d0);
  release_engine(e);
  BIO_free_all(bio);
  CRYPTO_free(local_c8);
  CRYPTO_free(local_c0);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


