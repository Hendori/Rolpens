
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int ecparam_main(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  EVP_PKEY *pEVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  EVP_PKEY_CTX *ctx;
  BIO *bio;
  long lVar13;
  long lVar14;
  size_t nitems;
  EC_builtin_curve *r;
  char *pcVar15;
  EVP_PKEY_CTX *ctx_00;
  undefined8 uVar16;
  EVP_PKEY_CTX *ctx_01;
  undefined *puVar17;
  char *pcVar18;
  size_t sVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  EC_builtin_curve *pEVar22;
  long in_FS_OFFSET;
  undefined8 local_178;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined4 local_100;
  int local_fc;
  EVP_PKEY *local_f8;
  EVP_PKEY *local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98 [11];
  long local_40;
  
  bVar1 = false;
  lVar14 = 0;
  lVar13 = 0;
  pcVar18 = (char *)0x0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_100 = 0x8005;
  local_f8 = (EVP_PKEY *)0x0;
  local_f0 = (EVP_PKEY *)0x0;
  local_fc = 0x8005;
  uVar11 = opt_init(param_1,param_2,ecparam_options);
  iVar10 = 0;
  bVar3 = false;
  bVar5 = false;
  bVar4 = false;
  bVar2 = false;
  bVar6 = false;
  local_160 = 0;
  local_158 = 0;
  local_178 = 0;
switchD_001000e7_caseD_0:
  iVar8 = opt_next();
  if (iVar8 != 0) goto LAB_001000cd;
LAB_00100188:
  iVar9 = opt_check_rest_arg(0);
  if (iVar9 == 0) goto switchD_001000e7_caseD_ffffffff;
  iVar9 = app_RAND_load();
  if (iVar9 == 0) goto LAB_0010012a;
  if (bVar1) {
    bio = (BIO *)bio_open_owner(local_160,local_fc,0);
    if (bio != (BIO *)0x0) {
      sVar19 = 0;
      nitems = EC_get_builtin_curves((EC_builtin_curve *)0x0,0);
      r = (EC_builtin_curve *)app_malloc(nitems << 4,"list curves");
      EC_get_builtin_curves(r,nitems);
      pEVar22 = r;
      if (nitems != 0) {
        do {
          pcVar18 = pEVar22->comment;
          pcVar15 = OBJ_nid2sn(pEVar22->nid);
          if (pcVar18 == (char *)0x0) {
            pcVar18 = "CURVE DESCRIPTION NOT AVAILABLE";
          }
          if (pcVar15 == (char *)0x0) {
            pcVar15 = "";
          }
          sVar19 = sVar19 + 1;
          BIO_printf(bio,"  %-10s: ",pcVar15);
          BIO_printf(bio,"%s\n",pcVar18);
          pEVar22 = pEVar22 + 1;
        } while (nitems != sVar19);
      }
      ctx = (EVP_PKEY_CTX *)0x0;
      uVar11 = 0;
      uVar12 = 0;
      ctx_00 = (EVP_PKEY_CTX *)0x0;
      CRYPTO_free(r);
      ctx_01 = (EVP_PKEY_CTX *)0x0;
      goto LAB_00100582;
    }
    goto LAB_0010012a;
  }
  if (pcVar18 == (char *)0x0) {
    local_f8 = (EVP_PKEY *)load_keyparams_suppress(local_158,local_100,1,&_LC23,"EC parameters",1);
    if ((local_f8 == (EVP_PKEY *)0x0) &&
       (local_f8 = (EVP_PKEY *)
                   load_keyparams_suppress(local_158,local_100,1,&_LC18,"SM2 parameters",1),
       local_f8 == (EVP_PKEY *)0x0)) {
      BIO_printf(_bio_err,"Unable to load parameters from %s\n",local_158);
      goto LAB_0010012a;
    }
    if ((lVar14 != 0) &&
       (iVar8 = EVP_PKEY_set_utf8_string_param(local_f8,"point-format",lVar14), iVar8 == 0)) {
      BIO_printf(_bio_err,"unable to set point conversion format\n");
      goto LAB_0010012a;
    }
    ctx = (EVP_PKEY_CTX *)0x0;
    if ((lVar13 != 0) &&
       (iVar8 = EVP_PKEY_set_utf8_string_param(local_f8,"encoding",lVar13), iVar8 == 0)) {
      BIO_printf(_bio_err,"unable to set asn1 encoding format\n");
LAB_0010012a:
      bio = (BIO *)0x0;
      uVar11 = 0;
      uVar12 = 0;
      ctx_00 = (EVP_PKEY_CTX *)0x0;
      ctx_01 = (EVP_PKEY_CTX *)0x0;
      ctx = (EVP_PKEY_CTX *)0x0;
LAB_0010013a:
      ERR_print_errors(_bio_err);
      iVar8 = 1;
LAB_00100582:
      release_engine(local_178);
      EVP_PKEY_free(local_f8);
      EVP_PKEY_free(local_f0);
      EVP_PKEY_CTX_free(ctx_00);
      EVP_PKEY_CTX_free(ctx);
      EVP_PKEY_CTX_free(ctx_01);
      OSSL_DECODER_CTX_free(0);
      OSSL_ENCODER_CTX_free(uVar11);
      OSSL_ENCODER_CTX_free(uVar12);
      BIO_free_all(bio);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return iVar8;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
LAB_00100362:
    if ((!bVar2) || (iVar8 = EVP_PKEY_set_octet_string_param(local_f8,&_LC28,0), iVar8 != 0)) {
      bio = (BIO *)bio_open_owner(local_160,local_fc,iVar10);
      if (bio == (BIO *)0x0) {
        uVar11 = 0;
        uVar12 = 0;
        ctx_00 = (EVP_PKEY_CTX *)0x0;
        ctx_01 = (EVP_PKEY_CTX *)0x0;
        goto LAB_0010013a;
      }
      if ((bVar3) && (iVar8 = EVP_PKEY_print_params(bio,local_f8,0,(ASN1_PCTX *)0x0), iVar8 < 1)) {
        uVar11 = 0;
        uVar12 = 0;
        ctx_00 = (EVP_PKEY_CTX *)0x0;
        ctx_01 = (EVP_PKEY_CTX *)0x0;
        BIO_printf(_bio_err,"unable to print params\n");
        goto LAB_0010013a;
      }
      ctx_00 = (EVP_PKEY_CTX *)0x0;
      if (bVar4 || bVar5) {
        BIO_printf(_bio_err,"checking elliptic curve parameters: ");
        if ((bVar5) &&
           (iVar8 = EVP_PKEY_set_utf8_string_param(local_f8,"group-check","named"), iVar8 == 0)) {
          uVar11 = 0;
          uVar12 = 0;
          ctx_01 = (EVP_PKEY_CTX *)0x0;
          BIO_printf(_bio_err,"unable to set check_type\n");
          goto LAB_0010013a;
        }
        uVar11 = app_get0_propq();
        pEVar7 = local_f8;
        uVar12 = app_get0_libctx();
        ctx_00 = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(uVar12,pEVar7,uVar11);
        if ((ctx_00 == (EVP_PKEY_CTX *)0x0) || (iVar8 = EVP_PKEY_param_check(ctx_00), iVar8 < 1)) {
          uVar11 = 0;
          uVar12 = 0;
          ctx_01 = (EVP_PKEY_CTX *)0x0;
          BIO_printf(_bio_err,"failed\n");
          goto LAB_0010013a;
        }
        BIO_printf(_bio_err,"ok\n");
      }
      if (local_fc == 4) {
        if (iVar10 != 0) {
          uVar11 = 0;
          goto LAB_0010095a;
        }
        if (bVar6) {
          iVar8 = 0;
          uVar11 = 0;
          uVar12 = 0;
          ctx_01 = (EVP_PKEY_CTX *)0x0;
          goto LAB_00100582;
        }
        uVar11 = OSSL_ENCODER_CTX_new_for_pkey(local_f8,4,&_LC4,0,0);
        iVar10 = OSSL_ENCODER_to_bio(uVar11,bio);
        if (iVar10 == 0) goto LAB_00100a5d;
      }
      else {
        uVar11 = 0;
        if (!bVar6) {
          uVar11 = OSSL_ENCODER_CTX_new_for_pkey(local_f8,4,&_LC5,0,0);
          iVar8 = OSSL_ENCODER_to_bio(uVar11,bio);
          if (iVar8 == 0) {
LAB_00100a5d:
            uVar12 = 0;
            ctx_01 = (EVP_PKEY_CTX *)0x0;
            BIO_printf(_bio_err,"unable to write elliptic curve parameters\n");
            goto LAB_0010013a;
          }
        }
        if (iVar10 != 0) {
LAB_0010095a:
          uVar12 = app_get0_propq();
          pEVar7 = local_f8;
          uVar16 = app_get0_libctx();
          ctx_01 = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(uVar16,pEVar7,uVar12);
          iVar10 = EVP_PKEY_keygen_init(ctx_01);
          if ((iVar10 < 1) || (iVar10 = EVP_PKEY_keygen(ctx_01,&local_f0), iVar10 < 1)) {
            uVar12 = 0;
            BIO_printf(_bio_err,"unable to generate key\n");
            goto LAB_0010013a;
          }
          puVar17 = &_LC5;
          if (local_fc == 4) {
            puVar17 = &_LC4;
          }
          uVar12 = OSSL_ENCODER_CTX_new_for_pkey(local_f0,0x87,puVar17,0,0);
          iVar10 = OSSL_ENCODER_to_bio(uVar12,bio);
          iVar8 = 0;
          if (iVar10 != 0) goto LAB_00100582;
          BIO_printf(_bio_err,"unable to write elliptic curve parameters\n");
          goto LAB_0010013a;
        }
      }
      iVar8 = 0;
      uVar12 = 0;
      ctx_01 = (EVP_PKEY_CTX *)0x0;
      goto LAB_00100582;
    }
    pcVar18 = "unable to clear seed\n";
  }
  else {
    iVar8 = strcmp(pcVar18,"secp192r1");
    if (iVar8 == 0) {
      pcVar18 = "prime192v1";
      BIO_printf(_bio_err,"using curve name prime192v1 instead of secp192r1\n");
    }
    else {
      iVar8 = strcmp(pcVar18,"secp256r1");
      if (iVar8 == 0) {
        pcVar18 = "prime256v1";
        BIO_printf(_bio_err,"using curve name prime256v1 instead of secp256r1\n");
      }
    }
    puVar20 = &local_c0;
    OSSL_PARAM_construct_utf8_string(&local_138,"group",pcVar18);
    local_e8 = local_138;
    uStack_e0 = uStack_130;
    local_c8 = local_118;
    local_d8 = local_128;
    uStack_d0 = uStack_120;
    if (lVar13 != 0) {
      OSSL_PARAM_construct_utf8_string(&local_138,"encoding",lVar13);
      puVar20 = local_98;
      local_a0 = local_118;
      local_c0 = local_138;
      uStack_b8 = uStack_130;
      local_b0 = local_128;
      uStack_a8 = uStack_120;
    }
    puVar21 = puVar20;
    if (lVar14 != 0) {
      OSSL_PARAM_construct_utf8_string(&local_138,"point-format",lVar14);
      puVar21 = puVar20 + 5;
      *puVar20 = local_138;
      puVar20[1] = uStack_130;
      puVar20[2] = local_128;
      puVar20[3] = uStack_120;
      puVar20[4] = local_118;
    }
    OSSL_PARAM_construct_end(&local_138);
    *puVar21 = local_138;
    puVar21[1] = uStack_130;
    puVar21[2] = local_128;
    puVar21[3] = uStack_120;
    puVar21[4] = local_118;
    iVar8 = OPENSSL_strcasecmp(pcVar18,&_LC18);
    if (iVar8 == 0) {
      uVar11 = app_get0_propq();
      uVar12 = app_get0_libctx();
      ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_name(uVar12,&_LC19,uVar11);
    }
    else {
      uVar11 = app_get0_propq();
      uVar12 = app_get0_libctx();
      ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_name(uVar12,&_LC20,uVar11);
    }
    if ((((ctx != (EVP_PKEY_CTX *)0x0) && (iVar8 = EVP_PKEY_keygen_init(ctx), 0 < iVar8)) &&
        (iVar8 = EVP_PKEY_CTX_set_params(ctx,&local_e8), 0 < iVar8)) &&
       (iVar8 = EVP_PKEY_keygen(ctx,&local_f8), 0 < iVar8)) goto LAB_00100362;
    pcVar18 = "unable to generate key\n";
  }
  BIO_printf(_bio_err,pcVar18);
  bio = (BIO *)0x0;
  uVar11 = 0;
  uVar12 = 0;
  ctx_00 = (EVP_PKEY_CTX *)0x0;
  ctx_01 = (EVP_PKEY_CTX *)0x0;
  goto LAB_0010013a;
LAB_001000cd:
  while (0x10 < iVar8) {
    if (iVar8 < 0x5df) {
      if ((iVar8 < 0x5dd) || (iVar8 = opt_rand(iVar8), iVar8 != 0)) goto switchD_001000e7_caseD_0;
      goto LAB_0010012a;
    }
    if (3 < iVar8 - 0x641U) goto switchD_001000e7_caseD_0;
    iVar8 = opt_provider(iVar8);
    if (iVar8 == 0) goto LAB_0010012a;
    iVar8 = opt_next();
    if (iVar8 == 0) {
      iVar8 = 0;
      goto LAB_00100188;
    }
  }
  if (iVar8 < -1) goto switchD_001000e7_caseD_0;
  switch(iVar8) {
  default:
    goto switchD_001000e7_caseD_0;
  case 1:
    bio = (BIO *)0x0;
    uVar11 = 0;
    uVar12 = 0;
    opt_help(ecparam_options);
    ctx_00 = (EVP_PKEY_CTX *)0x0;
    iVar8 = 0;
    ctx_01 = (EVP_PKEY_CTX *)0x0;
    ctx = (EVP_PKEY_CTX *)0x0;
    goto LAB_00100582;
  case 2:
    uVar12 = opt_arg();
    iVar8 = opt_format(uVar12,6,&local_100);
    break;
  case 3:
    uVar12 = opt_arg();
    iVar8 = opt_format(uVar12,6,&local_fc);
    break;
  case 4:
    local_158 = opt_arg();
    goto switchD_001000e7_caseD_0;
  case 5:
    local_160 = opt_arg();
    goto switchD_001000e7_caseD_0;
  case 6:
    bVar3 = true;
    goto switchD_001000e7_caseD_0;
  case 7:
    bVar4 = true;
    goto switchD_001000e7_caseD_0;
  case 8:
    bVar1 = true;
    goto switchD_001000e7_caseD_0;
  case 9:
    bVar2 = true;
    goto switchD_001000e7_caseD_0;
  case 10:
    bVar6 = true;
    goto switchD_001000e7_caseD_0;
  case 0xb:
    pcVar18 = (char *)opt_arg();
    goto switchD_001000e7_caseD_0;
  case 0xc:
    lVar14 = opt_arg();
    iVar8 = opt_string(lVar14,point_format_options);
    break;
  case 0xd:
    lVar13 = opt_arg();
    iVar8 = opt_string(lVar13,asn1_encoding_options);
    break;
  case 0xe:
    iVar10 = 1;
    goto switchD_001000e7_caseD_0;
  case 0xf:
    uVar12 = opt_arg();
    local_178 = setup_engine_methods(uVar12,0xffffffff,0);
    goto switchD_001000e7_caseD_0;
  case 0x10:
    bVar5 = true;
    goto switchD_001000e7_caseD_0;
  case -1:
    goto switchD_001000e7_caseD_ffffffff;
  }
  if (iVar8 != 0) goto switchD_001000e7_caseD_0;
switchD_001000e7_caseD_ffffffff:
  BIO_printf(_bio_err,"%s: Use -help for summary.\n",uVar11);
  goto LAB_0010012a;
}


