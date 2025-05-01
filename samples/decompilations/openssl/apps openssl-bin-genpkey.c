
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
init_gen_str(long *param_1,undefined8 param_2,ENGINE *param_3,int param_4,undefined8 param_5,
            undefined8 param_6)

{
  int iVar1;
  EVP_PKEY_CTX *ctx;
  
  if (*param_1 == 0) {
    iVar1 = get_legacy_pkey_id(param_5);
    if (iVar1 == 0) {
      ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_name(param_5,param_2,param_6);
    }
    else {
      ctx = EVP_PKEY_CTX_new_id(iVar1,param_3);
    }
    if (ctx != (EVP_PKEY_CTX *)0x0) {
      if (param_4 == 0) {
        iVar1 = EVP_PKEY_keygen_init(ctx);
      }
      else {
        iVar1 = EVP_PKEY_paramgen_init(ctx);
      }
      if (0 < iVar1) {
        *param_1 = (long)ctx;
        return 1;
      }
    }
    BIO_printf(_bio_err,"Error initializing %s context\n",param_2);
    ERR_print_errors(_bio_err);
    EVP_PKEY_CTX_free(ctx);
  }
  else {
    BIO_puts(_bio_err,"Algorithm already set!\n");
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int genpkey_main(undefined4 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  BIO *pBVar8;
  EVP_PKEY *pkey;
  EVP_PKEY_CTX *ctx;
  long lVar9;
  long *plVar10;
  BIO_METHOD *pBVar11;
  BIO *bp;
  EVP_PKEY *x;
  int *piVar12;
  char *pcVar13;
  undefined *puVar14;
  EVP_PKEY_CTX *pEVar15;
  long in_FS_OFFSET;
  bool bVar16;
  ENGINE *local_b8;
  CONF *local_b0;
  uint local_a8;
  uint local_a4;
  long local_a0;
  undefined8 local_98;
  long local_80;
  undefined8 local_78;
  int local_5c;
  EVP_PKEY_CTX *local_58;
  void *local_50;
  EVP_CIPHER *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_5c = 0x8005;
  local_58 = (EVP_PKEY_CTX *)0x0;
  local_50 = (void *)0x0;
  local_48 = (EVP_CIPHER *)0x0;
  uVar4 = app_get0_libctx();
  opt_set_unknown_name("cipher");
  uVar5 = opt_init(param_1,param_2,genpkey_options);
  lVar6 = OPENSSL_sk_new_null();
  if (lVar6 != 0) {
    local_a4 = 0;
    lVar9 = 0;
    pcVar13 = (char *)0x0;
    local_a8 = 0;
    local_80 = 0;
    local_a0 = 0;
    local_78 = 0;
    local_98 = 0;
    local_b8 = (ENGINE *)0x0;
    local_b0 = (CONF *)0x0;
switchD_00100207_caseD_0:
    iVar1 = opt_next();
    if (iVar1 != 0) goto LAB_001001ed;
LAB_00100270:
    iVar2 = opt_check_rest_arg(0);
    if (iVar2 == 0) goto switchD_00100207_caseD_ffffffff;
    iVar2 = app_RAND_load();
    if (iVar2 == 0) {
      pEVar15 = (EVP_PKEY_CTX *)0x0;
      x = (EVP_PKEY *)0x0;
      bp = (BIO *)0x0;
      pBVar8 = (BIO *)0x0;
      goto LAB_001004c5;
    }
    if (pcVar13 == (char *)0x0) {
      if (lVar9 == 0) goto switchD_00100207_caseD_ffffffff;
LAB_0010070a:
      uVar7 = app_get0_propq();
      iVar2 = init_gen_str(&local_58,lVar9,local_b8,local_a4,uVar4,uVar7);
      pEVar15 = local_58;
      if (iVar2 == 0) goto LAB_001007d8;
      if (local_58 == (EVP_PKEY_CTX *)0x0) goto LAB_001004a3;
    }
    else {
      uVar7 = app_get0_propq();
      pBVar8 = BIO_new_file(pcVar13,"r");
      if (pBVar8 == (BIO *)0x0) {
        pEVar15 = (EVP_PKEY_CTX *)0x0;
        x = (EVP_PKEY *)0x0;
        bp = (BIO *)0x0;
        BIO_printf(_bio_err,"Can\'t open parameter file %s\n",pcVar13);
        pBVar8 = (BIO *)0x0;
        goto LAB_001004c5;
      }
      pkey = (EVP_PKEY *)PEM_read_bio_Parameters_ex(pBVar8,0,uVar4);
      BIO_free(pBVar8);
      if (pkey == (EVP_PKEY *)0x0) {
        pEVar15 = (EVP_PKEY_CTX *)0x0;
        x = (EVP_PKEY *)0x0;
        pBVar8 = (BIO *)0x0;
        BIO_printf(_bio_err,"Error reading parameter file %s\n",pcVar13);
        bp = (BIO *)0x0;
        goto LAB_001004c5;
      }
      if (local_b8 == (ENGINE *)0x0) {
        ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(uVar4,pkey,uVar7);
      }
      else {
        ctx = EVP_PKEY_CTX_new(pkey,local_b8);
      }
      if ((ctx == (EVP_PKEY_CTX *)0x0) || (iVar2 = EVP_PKEY_keygen_init(ctx), iVar2 < 1)) {
        x = (EVP_PKEY *)0x0;
        pBVar8 = (BIO *)0x0;
        BIO_puts(_bio_err,"Error initializing context\n");
        ERR_print_errors(_bio_err);
        pEVar15 = (EVP_PKEY_CTX *)0x0;
        EVP_PKEY_CTX_free(ctx);
        bp = (BIO *)0x0;
        EVP_PKEY_free(pkey);
        goto LAB_001004c5;
      }
      EVP_PKEY_free(pkey);
      local_58 = ctx;
      if (lVar9 != 0) goto LAB_0010070a;
    }
    pEVar15 = local_58;
    iVar2 = 0;
    goto LAB_00100353;
  }
  local_b8 = (ENGINE *)0x0;
  pEVar15 = (EVP_PKEY_CTX *)0x0;
  x = (EVP_PKEY *)0x0;
  bp = (BIO *)0x0;
  local_b0 = (CONF *)0x0;
  pBVar8 = (BIO *)0x0;
  goto LAB_001004c5;
LAB_001001ed:
  while (0xf < iVar1) {
    if (iVar1 < 0x5df) {
      if ((iVar1 < 0x5dd) || (iVar1 = opt_rand(), iVar1 != 0)) goto switchD_00100207_caseD_0;
      goto LAB_00100229;
    }
    if (3 < iVar1 - 0x641U) goto switchD_00100207_caseD_0;
    iVar1 = opt_provider(iVar1);
    if (iVar1 == 0) goto LAB_00100229;
    iVar1 = opt_next();
    if (iVar1 == 0) {
      iVar1 = 0;
      goto LAB_00100270;
    }
  }
  if (-2 < iVar1) {
    switch(iVar1) {
    default:
      goto switchD_00100207_caseD_0;
    case 1:
      opt_help(genpkey_options);
      uVar5 = app_get0_propq();
      if ((lVar9 == 0) ||
         (pEVar15 = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_name(uVar4,lVar9,uVar5),
         pEVar15 == (EVP_PKEY_CTX *)0x0)) goto LAB_001005fc;
      iVar1 = EVP_PKEY_keygen_init(pEVar15);
      if ((iVar1 < 1) ||
         (plVar10 = (long *)EVP_PKEY_CTX_settable_params(pEVar15), plVar10 == (long *)0x0))
      goto LAB_001005f4;
      BIO_printf(_bio_err,"\nThe possible -pkeyopt arguments are:\n");
      lVar9 = *plVar10;
      if (lVar9 == 0) goto LAB_001005f4;
      goto LAB_00100590;
    case 2:
      uVar7 = opt_arg();
      local_b8 = (ENGINE *)setup_engine_methods(uVar7,0xffffffff,0);
      goto switchD_00100207_caseD_0;
    case 3:
      uVar7 = opt_arg();
      iVar1 = opt_format(uVar7,6,&local_5c);
      if (iVar1 != 0) goto switchD_00100207_caseD_0;
      break;
    case 4:
      local_98 = opt_arg();
      goto switchD_00100207_caseD_0;
    case 5:
      local_78 = opt_arg();
      goto switchD_00100207_caseD_0;
    case 6:
      if (local_a4 != 1) {
        pcVar13 = (char *)opt_arg();
        goto switchD_00100207_caseD_0;
      }
      break;
    case 7:
      lVar9 = opt_arg();
      goto switchD_00100207_caseD_0;
    case 8:
      uVar7 = opt_arg();
      iVar1 = OPENSSL_sk_push(lVar6,uVar7);
      if (iVar1 == 0) goto LAB_00100229;
      goto switchD_00100207_caseD_0;
    case 9:
      local_a4 = 1;
      goto switchD_00100207_caseD_0;
    case 10:
      local_a8 = 1;
      goto switchD_00100207_caseD_0;
    case 0xb:
      local_80 = opt_unknown();
      goto switchD_00100207_caseD_0;
    case 0xc:
      verbose = 1;
      goto switchD_00100207_caseD_0;
    case 0xd:
      verbose = 0;
      goto switchD_00100207_caseD_0;
    case 0xe:
      opt_arg();
      local_b0 = (CONF *)app_load_config_modules();
      if (local_b0 == (CONF *)0x0) goto LAB_00100229;
      goto switchD_00100207_caseD_0;
    case 0xf:
      local_a0 = opt_arg();
      goto switchD_00100207_caseD_0;
    case -1:
      break;
    }
switchD_00100207_caseD_ffffffff:
    pEVar15 = (EVP_PKEY_CTX *)0x0;
    goto LAB_001004a3;
  }
  goto switchD_00100207_caseD_0;
LAB_00100229:
  pEVar15 = (EVP_PKEY_CTX *)0x0;
  x = (EVP_PKEY *)0x0;
  bp = (BIO *)0x0;
  OPENSSL_sk_free(lVar6);
  pBVar8 = (BIO *)0x0;
  goto LAB_001004cd;
LAB_00100590:
  do {
    switch((int)plVar10[1]) {
    default:
      goto switchD_001005a2_caseD_0;
    case 1:
      pcVar13 = "int";
      puVar14 = &_LC5;
      break;
    case 2:
      pcVar13 = "uint";
      puVar14 = &_LC5;
      break;
    case 3:
      pcVar13 = "float";
      puVar14 = &_LC5;
      break;
    case 4:
      pcVar13 = "string";
      puVar14 = &_LC5;
      break;
    case 5:
      pcVar13 = "string";
      puVar14 = &_LC3;
    }
    BIO_printf(_bio_err,"    %s%s:%s\n",puVar14,lVar9,pcVar13);
switchD_001005a2_caseD_0:
    lVar9 = plVar10[5];
    plVar10 = plVar10 + 5;
  } while (lVar9 != 0);
LAB_001005f4:
  EVP_PKEY_CTX_free(pEVar15);
LAB_001005fc:
  pEVar15 = (EVP_PKEY_CTX *)0x0;
  iVar1 = 0;
  x = (EVP_PKEY *)0x0;
  OPENSSL_sk_free(lVar6);
  bp = (BIO *)0x0;
  pBVar8 = (BIO *)0x0;
  goto LAB_00100612;
LAB_00100353:
  iVar3 = OPENSSL_sk_num(lVar6);
  if (iVar3 <= iVar2) goto code_r0x0010035f;
  uVar4 = OPENSSL_sk_value(lVar6,iVar2);
  iVar3 = pkey_ctrl_string(pEVar15,uVar4);
  if (iVar3 < 1) {
    bp = (BIO *)0x0;
    x = (EVP_PKEY *)0x0;
    pBVar8 = (BIO *)0x0;
    BIO_printf(_bio_err,"%s: Error setting %s parameter:\n",uVar5,uVar4);
    ERR_print_errors(_bio_err);
    goto LAB_001004c5;
  }
  iVar2 = iVar2 + 1;
  goto LAB_00100353;
code_r0x0010035f:
  iVar2 = opt_cipher(local_80,&local_48);
  if (iVar2 == 0) {
LAB_001004a3:
    bp = (BIO *)0x0;
    x = (EVP_PKEY *)0x0;
    pBVar8 = (BIO *)0x0;
    BIO_printf(_bio_err,"%s: Use -help for summary.\n",uVar5);
  }
  else {
    if ((local_80 != 0) && (local_a4 != 0)) {
      BIO_printf(_bio_err,"Cannot use cipher with -genparam option\n");
      goto LAB_001004a3;
    }
    iVar2 = app_passwd(local_78,0,&local_50);
    if (iVar2 == 0) {
      BIO_puts(_bio_err,"Error getting password\n");
LAB_001007d8:
      x = (EVP_PKEY *)0x0;
      bp = (BIO *)0x0;
      pBVar8 = (BIO *)0x0;
    }
    else {
      pBVar11 = BIO_s_mem();
      pBVar8 = BIO_new(pBVar11);
      if (pBVar8 == (BIO *)0x0) {
        x = (EVP_PKEY *)0x0;
        bp = (BIO *)0x0;
      }
      else {
        BIO_ctrl(pBVar8,0x82,0,(void *)0x0);
        if (local_a0 == 0) {
          bp = (BIO *)0x0;
LAB_00100876:
          if (verbose != 0) {
            EVP_PKEY_CTX_set_cb(pEVar15,&progress_cb);
          }
          EVP_PKEY_CTX_set_app_data(pEVar15,_bio_err);
          if (local_a4 == 0) {
            x = (EVP_PKEY *)app_keygen(pEVar15,lVar9,0);
            if (x == (EVP_PKEY *)0x0) goto LAB_00100aa4;
            if (local_5c != 0x8005) {
              if (local_5c != 4) {
                BIO_printf(_bio_err,"Bad format specified for key\n");
                goto LAB_001004c5;
              }
              iVar2 = i2d_PrivateKey_bio(pBVar8,x);
              if (0 < iVar2) {
                if (bp == (BIO *)0x0) goto LAB_00100ac0;
                iVar2 = i2d_PUBKEY_bio(bp,x);
                if (0 < iVar2) goto LAB_00100a65;
              }
LAB_00100b23:
              BIO_puts(_bio_err,"Error writing key(s)\n");
              if (local_a8 == 0) goto LAB_001004c5;
LAB_00100b41:
              iVar2 = EVP_PKEY_print_private(pBVar8,x,0,(ASN1_PCTX *)0x0);
              goto LAB_001008f5;
            }
            iVar2 = PEM_write_bio_PrivateKey
                              (pBVar8,x,local_48,(uchar *)0x0,0,(undefined1 *)0x0,local_50);
            if (iVar2 < 1) goto LAB_00100b23;
            if (bp == (BIO *)0x0) {
LAB_00100ac0:
              if (iVar2 < 1) goto LAB_00100b23;
              if (local_a8 == 0) {
                local_a8 = 1;
                goto LAB_00100ad7;
              }
LAB_00100b98:
              local_a8 = 0;
              goto LAB_00100b41;
            }
            iVar2 = PEM_write_bio_PUBKEY(bp,x);
            if (iVar2 < 1) goto LAB_00100b23;
LAB_00100a65:
            if (local_a8 != 0) goto LAB_00100b98;
            OPENSSL_sk_free(lVar6);
            local_a8 = 1;
LAB_00100921:
            iVar2 = mem_bio_to_file(bp,local_a0,local_5c,local_a8);
            if (iVar2 == 0) {
              piVar12 = __errno_location();
              pcVar13 = strerror(*piVar12);
              BIO_printf(_bio_err,"Error writing to outpubkey: \'%s\'. Error: %s\n",local_a0,pcVar13
                        );
            }
          }
          else {
            x = (EVP_PKEY *)app_paramgen(pEVar15,lVar9);
            if (x == (EVP_PKEY *)0x0) goto LAB_00100aa4;
            iVar2 = PEM_write_bio_Parameters(pBVar8,x);
            if (iVar2 < 1) {
              BIO_puts(_bio_err,"Error writing key(s)\n");
              if (local_a8 == 0) goto LAB_001004c5;
LAB_001008de:
              iVar2 = EVP_PKEY_print_params(pBVar8,x,0,(ASN1_PCTX *)0x0);
LAB_001008f5:
              if (iVar2 < 1) {
                BIO_puts(_bio_err,"Error printing key\n");
                goto LAB_001004c5;
              }
              OPENSSL_sk_free(lVar6);
              bVar16 = local_a8 != 0;
              local_a8 = local_a4 ^ 1;
              if (bVar16) goto LAB_001004cd;
            }
            else {
              if (local_a8 != 0) {
                local_a8 = 0;
                goto LAB_001008de;
              }
LAB_00100ad7:
              OPENSSL_sk_free(lVar6);
            }
            if (bp != (BIO *)0x0) goto LAB_00100921;
          }
          iVar2 = mem_bio_to_file(pBVar8,local_98,local_5c,local_a8);
          if (iVar2 == 0) {
            piVar12 = __errno_location();
            pcVar13 = strerror(*piVar12);
            BIO_printf(_bio_err,"Error writing to outfile: \'%s\'. Error: %s\n",local_a0,pcVar13);
          }
          goto LAB_00100612;
        }
        pBVar11 = BIO_s_mem();
        bp = BIO_new(pBVar11);
        if (bp != (BIO *)0x0) {
          BIO_ctrl(bp,0x82,0,(void *)0x0);
          goto LAB_00100876;
        }
LAB_00100aa4:
        x = (EVP_PKEY *)0x0;
      }
    }
  }
LAB_001004c5:
  OPENSSL_sk_free(lVar6);
LAB_001004cd:
  iVar1 = 1;
  ERR_print_errors(_bio_err);
LAB_00100612:
  EVP_PKEY_free(x);
  EVP_PKEY_CTX_free(pEVar15);
  EVP_CIPHER_free(local_48);
  BIO_free_all(pBVar8);
  BIO_free_all(bp);
  release_engine(local_b8);
  CRYPTO_free(local_50);
  NCONF_free(local_b0);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


