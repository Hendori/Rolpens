
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int gendsa_main(undefined4 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  EVP_PKEY *pkey;
  BIO *bp;
  undefined8 uVar7;
  EVP_PKEY_CTX *ctx;
  undefined8 uVar8;
  long in_FS_OFFSET;
  void *pvVar9;
  undefined8 local_68;
  undefined8 local_60;
  EVP_CIPHER *local_50;
  void *local_48;
  long local_40;
  
  uVar7 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = (EVP_CIPHER *)0x0;
  local_48 = (void *)0x0;
  opt_set_unknown_name("cipher");
  uVar5 = opt_init(param_1,param_2,gendsa_options);
  uVar8 = 0;
  local_68 = 0;
  local_60 = 0;
switchD_001000a8_caseD_0:
  iVar1 = opt_next();
  if (iVar1 != 0) goto LAB_0010008b;
LAB_001000e8:
  iVar2 = opt_check_rest_arg("params file");
  if (iVar2 == 0) goto switchD_001000a8_caseD_ffffffff;
  puVar6 = (undefined8 *)opt_rest();
  uVar5 = *puVar6;
  iVar2 = app_RAND_load();
  if ((iVar2 != 0) && (iVar2 = opt_cipher(uVar7,&local_50), iVar2 != 0)) {
    iVar2 = app_passwd(0,local_68,0,&local_48);
    if (iVar2 != 0) {
      pkey = (EVP_PKEY *)load_keyparams(uVar5,0,1,&_LC5);
      bp = (BIO *)bio_open_owner(local_60,0x8005,1);
      if (bp == (BIO *)0x0) {
        ctx = (EVP_PKEY_CTX *)0x0;
        iVar1 = 1;
        goto LAB_00100313;
      }
      iVar2 = EVP_PKEY_get_bits(pkey);
      if (10000 < iVar2) {
        uVar4 = EVP_PKEY_get_bits(pkey);
        BIO_printf(_bio_err,
                   "Warning: It is not recommended to use more than %d bit for DSA keys.\n         Your key size is %d! Larger key size may behave not as expected.\n"
                   ,10000,(ulong)uVar4);
      }
      uVar5 = app_get0_propq();
      uVar7 = app_get0_libctx();
      ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(uVar7,pkey,uVar5);
      if (ctx == (EVP_PKEY_CTX *)0x0) {
        BIO_printf(_bio_err,"unable to create PKEY context\n");
        goto LAB_00100240;
      }
      EVP_PKEY_free(pkey);
      iVar3 = EVP_PKEY_keygen_init(ctx);
      if (iVar3 < 1) {
        BIO_printf(_bio_err,"unable to set up for key generation\n");
      }
      else {
        pkey = (EVP_PKEY *)app_keygen(ctx,&_LC5,iVar2);
        if (pkey != (EVP_PKEY *)0x0) {
          pvVar9 = local_48;
          iVar2 = PEM_write_bio_PrivateKey
                            (bp,pkey,local_50,(uchar *)0x0,0,(undefined1 *)0x0,local_48);
          if (iVar2 != 0) goto LAB_00100313;
          BIO_printf(_bio_err,"unable to output generated key\n",pvVar9,0x1001ed);
          goto LAB_00100240;
        }
      }
      pkey = (EVP_PKEY *)0x0;
      goto LAB_00100240;
    }
    BIO_printf(_bio_err,"Error getting password\n");
  }
  goto LAB_001002a2;
LAB_0010008b:
  while (7 < iVar1) {
    if (0x5de < iVar1) {
      if ((3 < iVar1 - 0x641U) || (iVar1 = opt_provider(iVar1), iVar1 != 0))
      goto switchD_001000a8_caseD_0;
      goto LAB_001002a2;
    }
    if (iVar1 < 0x5dd) goto switchD_001000a8_caseD_0;
    iVar1 = opt_rand(iVar1);
    if (iVar1 == 0) goto LAB_001002a2;
    iVar1 = opt_next();
    if (iVar1 == 0) {
      iVar1 = 0;
      goto LAB_001000e8;
    }
  }
  if (-2 < iVar1) {
    switch(iVar1) {
    case 1:
      iVar1 = 0;
      ctx = (EVP_PKEY_CTX *)0x0;
      pkey = (EVP_PKEY *)0x0;
      opt_help();
      bp = (BIO *)0x0;
      goto LAB_00100313;
    case 2:
      local_60 = opt_arg();
      break;
    case 3:
      local_68 = opt_arg();
      break;
    case 4:
      uVar8 = opt_arg();
      uVar8 = setup_engine_methods(uVar8,0xffffffff,0);
      break;
    case 5:
      uVar7 = opt_unknown();
      break;
    case 6:
      break;
    case 7:
      break;
    case -1:
switchD_001000a8_caseD_ffffffff:
      BIO_printf(_bio_err,"%s: Use -help for summary.\n",uVar5);
LAB_001002a2:
      ctx = (EVP_PKEY_CTX *)0x0;
      pkey = (EVP_PKEY *)0x0;
      bp = (BIO *)0x0;
LAB_00100240:
      iVar1 = 1;
      ERR_print_errors(_bio_err);
LAB_00100313:
      BIO_free((BIO *)0x0);
      BIO_free_all(bp);
      EVP_PKEY_free(pkey);
      EVP_PKEY_CTX_free(ctx);
      EVP_CIPHER_free(local_50);
      release_engine(uVar8);
      CRYPTO_free(local_48);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return iVar1;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  goto switchD_001000a8_caseD_0;
}


