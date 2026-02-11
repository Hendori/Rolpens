
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int dsaparam_main(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  EVP_PKEY_CTX *ctx;
  EVP_PKEY *pkey;
  BIO *out;
  undefined8 uVar9;
  undefined8 uVar10;
  EVP_PKEY *pkey_00;
  char *format;
  long in_FS_OFFSET;
  undefined8 local_68;
  int local_60;
  uint local_50;
  uint local_4c;
  undefined4 local_48;
  int local_44;
  long local_40;
  
  uVar10 = 0;
  bVar1 = false;
  uVar9 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0xffffffff;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0x8005;
  uVar6 = opt_init(param_1,param_2,dsaparam_options);
  bVar2 = false;
  local_68 = 0;
  local_60 = 0;
switchD_001000ad_caseD_0:
  iVar4 = opt_next();
  if (iVar4 != 0) goto LAB_00100090;
LAB_00100128:
  iVar5 = opt_num_rest();
  puVar7 = (undefined8 *)opt_rest();
  if (iVar5 == 2) {
    iVar5 = opt_int(*puVar7,&local_4c);
    if ((iVar5 != 0) && (-1 < (int)local_4c)) {
      iVar5 = opt_int(puVar7[1],&local_50);
      uVar3 = local_50;
joined_r0x00100414:
      if ((iVar5 != 0) && (-1 < (int)uVar3)) goto LAB_00100158;
    }
    goto switchD_001000ad_caseD_ffffffff;
  }
  if (iVar5 == 1) {
    iVar5 = opt_int(*puVar7,&local_4c);
    uVar3 = local_4c;
    goto joined_r0x00100414;
  }
  iVar5 = opt_check_rest_arg(0);
  if (iVar5 == 0) goto switchD_001000ad_caseD_ffffffff;
LAB_00100158:
  iVar5 = app_RAND_load();
  uVar3 = local_4c;
  if (iVar5 != 0) {
    uVar6 = app_get0_propq();
    uVar8 = app_get0_libctx();
    ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_name(uVar8,&_LC1,uVar6);
    format = "Error, DSA parameter generation context allocation failed\n";
    if (ctx != (EVP_PKEY_CTX *)0x0) {
      if ((int)uVar3 < 1) {
        pkey = (EVP_PKEY *)load_keyparams(local_68,local_48,1);
LAB_0010022a:
        if (pkey == (EVP_PKEY *)0x0) goto LAB_001000d2;
        out = (BIO *)bio_open_owner(uVar10,local_44,local_60);
        if (out == (BIO *)0x0) goto LAB_001000d8;
        if (bVar2) {
          EVP_PKEY_print_params(out,pkey,0,(ASN1_PCTX *)0x0);
        }
        if (local_44 == 4) {
          if (local_60 != 0) {
LAB_00100567:
            EVP_PKEY_CTX_free(ctx);
            uVar6 = app_get0_propq();
            uVar10 = app_get0_libctx();
            ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(uVar10,pkey,uVar6);
            if (ctx == (EVP_PKEY_CTX *)0x0) {
              BIO_printf(_bio_err,"Error, DSA key generation context allocation failed\n");
              goto LAB_001000d8;
            }
            iVar5 = EVP_PKEY_keygen_init(ctx);
            if (iVar5 < 1) {
              BIO_printf(_bio_err,"Error, unable to initialise for key generation\n");
              goto LAB_001000d8;
            }
            pkey_00 = (EVP_PKEY *)app_keygen(ctx,&_LC1,uVar3);
            if (pkey_00 == (EVP_PKEY *)0x0) goto LAB_001000d8;
            if (local_44 == 4) {
              i2d_PrivateKey_bio(out,pkey_00);
            }
            else {
              PEM_write_bio_PrivateKey
                        (out,pkey_00,(EVP_CIPHER *)0x0,(uchar *)0x0,0,(undefined1 *)0x0,(void *)0x0)
              ;
            }
            goto LAB_00100346;
          }
          if (bVar1) {
            iVar4 = 0;
          }
          else {
            iVar5 = i2d_KeyParams_bio(out,pkey);
            if (iVar5 == 0) goto LAB_00100607;
          }
        }
        else {
          if ((!bVar1) && (iVar5 = PEM_write_bio_Parameters(out,pkey), iVar5 == 0)) {
LAB_00100607:
            BIO_printf(_bio_err,"Error, unable to write DSA parameters\n");
            goto LAB_001000d8;
          }
          if (local_60 != 0) goto LAB_00100567;
        }
        pkey_00 = (EVP_PKEY *)0x0;
        goto LAB_00100346;
      }
      if (10000 < (int)uVar3) {
        BIO_printf(_bio_err,
                   "Warning: It is not recommended to use more than %d bit for DSA keys.\n         Your key size is %d! Larger key size may behave not as expected.\n"
                   ,10000);
      }
      EVP_PKEY_CTX_set_app_data(ctx,_bio_err);
      if (verbose != 0) {
        EVP_PKEY_CTX_set_cb(ctx,&progress_cb);
        BIO_printf(_bio_err,"Generating DSA parameters, %d bit long prime\n",(ulong)local_4c);
        BIO_printf(_bio_err,"This could take some time\n");
      }
      iVar5 = EVP_PKEY_paramgen_init(ctx);
      if (iVar5 < 1) {
        BIO_printf(_bio_err,"Error, DSA key generation paramgen init failed\n");
        goto LAB_001000d2;
      }
      iVar5 = EVP_PKEY_CTX_set_dsa_paramgen_bits(ctx,local_4c);
      format = "Error, DSA key generation setting bit length failed\n";
      if (0 < iVar5) {
        if (((int)local_50 < 1) || (iVar5 = EVP_PKEY_CTX_set_dsa_paramgen_q_bits(ctx), 0 < iVar5)) {
          pkey = (EVP_PKEY *)app_paramgen(ctx,&_LC1);
          goto LAB_0010022a;
        }
        format = "Error, DSA key generation setting subprime bit length failed\n";
      }
    }
    BIO_printf(_bio_err,format);
    goto LAB_001000d2;
  }
  goto LAB_001000d0;
LAB_00100090:
  while (0xb < iVar4) {
    if (iVar4 < 0x5df) {
      if ((iVar4 < 0x5dd) || (iVar4 = opt_rand(), iVar4 != 0)) goto switchD_001000ad_caseD_0;
      goto LAB_001000d0;
    }
    if (3 < iVar4 - 0x641U) goto switchD_001000ad_caseD_0;
    iVar4 = opt_provider(iVar4);
    if (iVar4 == 0) goto LAB_001000d0;
    iVar4 = opt_next();
    if (iVar4 == 0) goto LAB_00100128;
  }
  if (iVar4 < -1) goto switchD_001000ad_caseD_0;
  switch(iVar4) {
  default:
    goto switchD_001000ad_caseD_0;
  case 1:
    iVar4 = 0;
    ctx = (EVP_PKEY_CTX *)0x0;
    pkey_00 = (EVP_PKEY *)0x0;
    opt_help(dsaparam_options);
    pkey = (EVP_PKEY *)0x0;
    out = (BIO *)0x0;
    goto LAB_00100346;
  case 2:
    uVar8 = opt_arg();
    iVar4 = opt_format(uVar8,6,&local_48);
    break;
  case 3:
    uVar8 = opt_arg();
    iVar4 = opt_format(uVar8,6,&local_44);
    break;
  case 4:
    local_68 = opt_arg();
    goto switchD_001000ad_caseD_0;
  case 5:
    uVar10 = opt_arg();
    goto switchD_001000ad_caseD_0;
  case 6:
    bVar2 = true;
    goto switchD_001000ad_caseD_0;
  case 7:
    bVar1 = true;
    goto switchD_001000ad_caseD_0;
  case 8:
    local_60 = 1;
    goto switchD_001000ad_caseD_0;
  case 9:
    uVar9 = opt_arg();
    uVar9 = setup_engine_methods(uVar9,0xffffffff,0);
    goto switchD_001000ad_caseD_0;
  case 10:
    verbose = 1;
    goto switchD_001000ad_caseD_0;
  case 0xb:
    verbose = 0;
    goto switchD_001000ad_caseD_0;
  case -1:
    goto switchD_001000ad_caseD_ffffffff;
  }
  if (iVar4 != 0) goto switchD_001000ad_caseD_0;
switchD_001000ad_caseD_ffffffff:
  BIO_printf(_bio_err,"%s: Use -help for summary.\n",uVar6);
LAB_001000d0:
  ctx = (EVP_PKEY_CTX *)0x0;
LAB_001000d2:
  pkey = (EVP_PKEY *)0x0;
  out = (BIO *)0x0;
LAB_001000d8:
  iVar4 = 1;
  pkey_00 = (EVP_PKEY *)0x0;
  ERR_print_errors(_bio_err);
LAB_00100346:
  BIO_free_all(out);
  EVP_PKEY_CTX_free(ctx);
  EVP_PKEY_free(pkey_00);
  EVP_PKEY_free(pkey);
  release_engine(uVar9);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar4;
}


