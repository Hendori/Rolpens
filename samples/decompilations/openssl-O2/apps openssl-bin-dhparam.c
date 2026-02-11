
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 dsa_to_dh(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  EVP_PKEY_CTX *ctx;
  long in_FS_OFFSET;
  BIGNUM *local_50;
  BIGNUM *local_48;
  BIGNUM *local_40;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = (BIGNUM *)0x0;
  local_48 = (BIGNUM *)0x0;
  local_40 = (BIGNUM *)0x0;
  local_38 = 0;
  iVar1 = EVP_PKEY_get_bn_param(param_1,&_LC0,&local_50);
  if (iVar1 != 0) {
    iVar1 = EVP_PKEY_get_bn_param(param_1,&_LC2,&local_48);
    if (iVar1 != 0) {
      iVar1 = EVP_PKEY_get_bn_param(param_1,&_LC3,&local_40);
      if (iVar1 != 0) {
        lVar2 = OSSL_PARAM_BLD_new();
        if (lVar2 != 0) {
          iVar1 = OSSL_PARAM_BLD_push_BN(lVar2,&_LC0,local_50);
          if (iVar1 != 0) {
            iVar1 = OSSL_PARAM_BLD_push_BN(lVar2,&_LC2,local_48);
            if (iVar1 != 0) {
              iVar1 = OSSL_PARAM_BLD_push_BN(lVar2,&_LC3,local_40);
              if (iVar1 != 0) {
                lVar3 = OSSL_PARAM_BLD_to_param(lVar2);
                if (lVar3 != 0) {
                  uVar4 = app_get0_propq();
                  uVar5 = app_get0_libctx();
                  ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_name(uVar5,&_LC4,uVar4);
                  if (ctx != (EVP_PKEY_CTX *)0x0) {
                    iVar1 = EVP_PKEY_fromdata_init(ctx);
                    if (0 < iVar1) {
                      iVar1 = EVP_PKEY_fromdata(ctx,&local_38,0x84,lVar3);
                      if (0 < iVar1) goto LAB_00100090;
                    }
                  }
                  BIO_printf(_bio_err,"Error, failed to set DH parameters\n");
                  goto LAB_00100090;
                }
              }
            }
          }
        }
        ctx = (EVP_PKEY_CTX *)0x0;
        lVar3 = 0;
        BIO_printf(_bio_err,"Error, failed to set DH parameters\n");
        goto LAB_00100090;
      }
    }
  }
  ctx = (EVP_PKEY_CTX *)0x0;
  lVar3 = 0;
  lVar2 = 0;
  BIO_printf(_bio_err,"Error, failed to set DH parameters\n");
LAB_00100090:
  EVP_PKEY_CTX_free(ctx);
  OSSL_PARAM_free(lVar3);
  OSSL_PARAM_BLD_free(lVar2);
  BN_free(local_50);
  BN_free(local_48);
  BN_free(local_40);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_38;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int dhparam_main(undefined8 param_1,undefined8 param_2)

{
  short *psVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  EVP_PKEY_CTX *ctx;
  undefined8 uVar12;
  BIO *bp;
  BIO *out;
  long lVar13;
  long lVar14;
  EVP_PKEY *pkey;
  undefined *puVar15;
  short *psVar16;
  char *pcVar17;
  undefined2 *puVar18;
  long in_FS_OFFSET;
  undefined8 local_70;
  uint local_54;
  int local_50;
  int local_4c;
  EVP_PKEY *local_48;
  long local_40;
  
  iVar8 = 0;
  uVar12 = 0;
  lVar13 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_54 = 0;
  local_48 = (EVP_PKEY *)0x0;
  local_50 = 0x8005;
  local_4c = 0x8005;
  uVar9 = opt_init(param_1,param_2,dhparam_options);
  bVar4 = false;
  bVar3 = false;
  bVar2 = false;
  bVar5 = false;
  local_70 = 0;
switchD_001002b2_caseD_0:
  iVar6 = opt_next();
  if (iVar6 != 0) goto LAB_00100299;
LAB_001002e8:
  iVar7 = opt_num_rest();
  puVar10 = (undefined8 *)opt_rest();
  if (iVar7 != 1) {
    iVar7 = opt_check_rest_arg(0);
    if (iVar7 != 0) goto LAB_0010030f;
    goto switchD_001002b2_caseD_ffffffff;
  }
  iVar7 = opt_int(*puVar10,&local_54);
  if ((iVar7 == 0) || ((int)local_54 < 1)) goto switchD_001002b2_caseD_ffffffff;
LAB_0010030f:
  iVar7 = app_RAND_load();
  if (iVar7 == 0) goto LAB_0010045a;
  if (iVar8 == 0) {
    if (local_54 == 0) {
      bp = (BIO *)bio_open_default(lVar13,0x72,local_50);
      if (bp != (BIO *)0x0) {
        psVar16 = &_LC6;
        goto LAB_00100695;
      }
      goto LAB_0010045a;
    }
    iVar8 = 2;
    puVar18 = (undefined2 *)&_LC5;
    if (!bVar5) goto LAB_001007f4;
  }
  else {
    if (local_54 == 0) {
      local_54 = 0x800;
    }
    if (bVar5) {
      ctx = (EVP_PKEY_CTX *)0x0;
      pkey = (EVP_PKEY *)0x0;
      out = (BIO *)0x0;
      bp = (BIO *)0x0;
      BIO_printf(_bio_err,"Error, generator may not be chosen for DSA parameters\n");
      goto LAB_00100464;
    }
LAB_001007f4:
    puVar18 = &_LC6;
  }
  if (lVar13 != 0) {
    BIO_printf(_bio_err,"Warning, input file %s ignored\n",lVar13);
  }
  uVar9 = app_get0_propq();
  uVar11 = app_get0_libctx();
  ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_name(uVar11,puVar18,uVar9);
  if (ctx == (EVP_PKEY_CTX *)0x0) {
    BIO_printf(_bio_err,"Error, %s param generation context allocation failed\n",puVar18);
    goto LAB_0010045a;
  }
  EVP_PKEY_CTX_set_app_data(ctx,_bio_err);
  if (verbose != 0) {
    EVP_PKEY_CTX_set_cb(ctx,&progress_cb);
    pcVar17 = "safe ";
    if (bVar5) {
      pcVar17 = "";
    }
    BIO_printf(_bio_err,"Generating %s parameters, %d bit long %sprime\n",puVar18,(ulong)local_54,
               pcVar17);
  }
  iVar7 = EVP_PKEY_paramgen_init(ctx);
  if (iVar7 < 1) {
    BIO_printf(_bio_err,"Error, unable to initialise %s parameters\n",puVar18);
LAB_001003f8:
    pkey = (EVP_PKEY *)0x0;
    out = (BIO *)0x0;
    bp = (BIO *)0x0;
    goto LAB_00100464;
  }
  if (!bVar5) {
    iVar7 = EVP_PKEY_CTX_set_dh_paramgen_prime_len(ctx,local_54);
    if (iVar7 < 1) {
      BIO_printf(_bio_err,"Error, unable to set DH prime length\n");
    }
    else {
      iVar8 = EVP_PKEY_CTX_set_dh_paramgen_generator(ctx,iVar8);
      if (iVar8 < 1) {
        BIO_printf(_bio_err,"Error, unable to set generator\n");
      }
      else {
        local_48 = (EVP_PKEY *)app_paramgen(ctx,puVar18);
        if (local_48 != (EVP_PKEY *)0x0) {
          EVP_PKEY_CTX_free(ctx);
          pkey = local_48;
          goto LAB_0010087d;
        }
      }
    }
    goto LAB_001003f8;
  }
  iVar8 = EVP_PKEY_CTX_set_dsa_paramgen_bits();
  if (iVar8 < 1) {
    pkey = (EVP_PKEY *)0x0;
    out = (BIO *)0x0;
    bp = (BIO *)0x0;
    BIO_printf(_bio_err,"Error, unable to set DSA prime length\n");
    goto LAB_00100464;
  }
  local_48 = (EVP_PKEY *)app_paramgen(ctx,puVar18);
  if (local_48 == (EVP_PKEY *)0x0) goto LAB_001003f8;
  EVP_PKEY_CTX_free(ctx);
  pkey = (EVP_PKEY *)dsa_to_dh(local_48);
  if (pkey != (EVP_PKEY *)0x0) {
    EVP_PKEY_free(local_48);
LAB_0010087d:
    local_48 = (EVP_PKEY *)0x0;
    bp = (BIO *)0x0;
    goto LAB_00100747;
  }
LAB_0010045a:
  ctx = (EVP_PKEY_CTX *)0x0;
  pkey = (EVP_PKEY *)0x0;
  out = (BIO *)0x0;
  bp = (BIO *)0x0;
  goto LAB_00100464;
LAB_00100299:
  while (0xf < iVar6) {
    if (0x5de < iVar6) {
      if ((3 < iVar6 - 0x641U) || (iVar6 = opt_provider(iVar6), iVar6 != 0))
      goto switchD_001002b2_caseD_0;
      goto LAB_0010045a;
    }
    if (iVar6 < 0x5dd) goto switchD_001002b2_caseD_0;
    iVar6 = opt_rand(iVar6);
    if (iVar6 == 0) goto LAB_0010045a;
    iVar6 = opt_next();
    if (iVar6 == 0) {
      iVar6 = 0;
      goto LAB_001002e8;
    }
  }
  if (iVar6 < -1) goto switchD_001002b2_caseD_0;
  switch(iVar6) {
  default:
    goto switchD_001002b2_caseD_0;
  case 1:
    iVar6 = 0;
    ctx = (EVP_PKEY_CTX *)0x0;
    pkey = (EVP_PKEY *)0x0;
    opt_help(dhparam_options);
    out = (BIO *)0x0;
    bp = (BIO *)0x0;
    goto LAB_00100476;
  case 2:
    uVar11 = opt_arg();
    iVar6 = opt_format(uVar11,6,&local_50);
    break;
  case 3:
    uVar11 = opt_arg();
    iVar6 = opt_format(uVar11,6,&local_4c);
    break;
  case 4:
    lVar13 = opt_arg();
    goto switchD_001002b2_caseD_0;
  case 5:
    local_70 = opt_arg();
    goto switchD_001002b2_caseD_0;
  case 6:
    uVar12 = opt_arg();
    uVar12 = setup_engine_methods(uVar12,0xffffffff,0);
    goto switchD_001002b2_caseD_0;
  case 7:
    bVar3 = true;
    goto switchD_001002b2_caseD_0;
  case 8:
    bVar2 = true;
    goto switchD_001002b2_caseD_0;
  case 9:
    bVar4 = true;
    goto switchD_001002b2_caseD_0;
  case 10:
    bVar5 = true;
    goto switchD_001002b2_caseD_0;
  case 0xb:
    iVar8 = 2;
    goto switchD_001002b2_caseD_0;
  case 0xc:
    iVar8 = 3;
    goto switchD_001002b2_caseD_0;
  case 0xd:
    iVar8 = 5;
    goto switchD_001002b2_caseD_0;
  case 0xe:
    verbose = 1;
    goto switchD_001002b2_caseD_0;
  case 0xf:
    verbose = 0;
    goto switchD_001002b2_caseD_0;
  case -1:
    goto switchD_001002b2_caseD_ffffffff;
  }
  if (iVar6 != 0) goto switchD_001002b2_caseD_0;
switchD_001002b2_caseD_ffffffff:
  BIO_printf(_bio_err,"%s: Use -help for summary.\n",uVar9);
  goto LAB_0010045a;
LAB_00100695:
  puVar15 = &_LC10;
  psVar1 = (short *)0x0;
  if (local_50 == 4) {
    puVar15 = &_LC9;
    psVar1 = psVar16;
  }
  lVar13 = OSSL_DECODER_CTX_new_for_pkey(&local_48,puVar15,0,psVar1,4,0,0);
  if (lVar13 == 0) {
    OSSL_DECODER_CTX_free(0);
    goto LAB_00100703;
  }
  iVar8 = OSSL_DECODER_from_bio(lVar13,bp);
  if ((((iVar8 != 0) || (local_50 != 4)) || (*psVar16 != 0x4844)) ||
     (((char)psVar16[1] != '\0' || (lVar14 = BIO_ctrl(bp,1,0,(void *)0x0), (int)lVar14 != 0))))
  goto LAB_001006fb;
  psVar16 = (short *)&_LC4;
  OSSL_DECODER_CTX_free(lVar13);
  goto LAB_00100695;
LAB_001006fb:
  OSSL_DECODER_CTX_free(lVar13);
LAB_00100703:
  if (local_48 == (EVP_PKEY *)0x0) {
    BIO_printf(_bio_err,"Error, unable to load parameters\n");
LAB_00100a3a:
    ctx = (EVP_PKEY_CTX *)0x0;
    pkey = (EVP_PKEY *)0x0;
    out = (BIO *)0x0;
  }
  else {
    if (bVar5) {
      iVar8 = EVP_PKEY_is_a(local_48,&_LC5);
      if (iVar8 == 0) {
        BIO_printf(_bio_err,"Error, unable to load DSA parameters\n");
      }
      else {
        pkey = (EVP_PKEY *)dsa_to_dh(local_48);
        if (pkey != (EVP_PKEY *)0x0) goto LAB_00100747;
      }
      goto LAB_00100a3a;
    }
    iVar8 = EVP_PKEY_is_a(local_48,&_LC6);
    if ((iVar8 == 0) && (iVar8 = EVP_PKEY_is_a(local_48,&_LC4), iVar8 == 0)) {
      BIO_printf(_bio_err,"Error, unable to load DH parameters\n");
      goto LAB_00100a3a;
    }
    pkey = local_48;
    local_48 = (EVP_PKEY *)0x0;
LAB_00100747:
    out = (BIO *)bio_open_default(local_70,0x77,local_4c);
    if (out == (BIO *)0x0) {
      ctx = (EVP_PKEY_CTX *)0x0;
    }
    else {
      if (bVar2) {
        EVP_PKEY_print_params(out,pkey,4,(ASN1_PCTX *)0x0);
      }
      ctx = (EVP_PKEY_CTX *)0x0;
      if (bVar3) {
        uVar9 = app_get0_propq();
        uVar11 = app_get0_libctx();
        ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(uVar11,pkey,uVar9);
        if (ctx == (EVP_PKEY_CTX *)0x0) {
          BIO_printf(_bio_err,"Error, failed to check DH parameters\n");
        }
        else {
          iVar8 = EVP_PKEY_param_check(ctx);
          if (0 < iVar8) {
            BIO_printf(_bio_err,"DH parameters appear to be ok.\n");
            goto LAB_00100780;
          }
          BIO_printf(_bio_err,"Error, invalid parameters generated\n");
        }
      }
      else {
LAB_00100780:
        if (bVar4) goto LAB_00100476;
        puVar15 = &_LC10;
        if (local_4c == 4) {
          puVar15 = &_LC9;
        }
        lVar13 = OSSL_ENCODER_CTX_new_for_pkey(pkey,4,puVar15,0,0);
        if ((lVar13 != 0) && (iVar8 = OSSL_ENCODER_to_bio(lVar13,out), iVar8 != 0)) {
          OSSL_ENCODER_CTX_free(lVar13);
          goto LAB_00100476;
        }
        OSSL_ENCODER_CTX_free(lVar13);
        BIO_printf(_bio_err,"Error, unable to write DH parameters\n");
      }
    }
  }
LAB_00100464:
  iVar6 = 1;
  ERR_print_errors(_bio_err);
LAB_00100476:
  BIO_free(bp);
  BIO_free_all(out);
  EVP_PKEY_free(pkey);
  EVP_PKEY_free(local_48);
  EVP_PKEY_CTX_free(ctx);
  release_engine(uVar12);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar6;
}


