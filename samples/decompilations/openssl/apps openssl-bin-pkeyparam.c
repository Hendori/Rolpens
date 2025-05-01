
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int pkeyparam_main(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  BIO *a;
  EVP_PKEY *pkey;
  BIO *bio;
  EVP_PKEY_CTX *ctx;
  undefined8 uVar4;
  ENGINE *e;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  undefined8 local_48;
  
  iVar7 = 0;
  uVar5 = 0;
  e = (ENGINE *)0x0;
  iVar6 = 0;
  uVar3 = opt_init(param_1,param_2,pkeyparam_options);
  bVar1 = false;
  local_48 = 0;
switchD_0010006b_caseD_0:
  iVar2 = opt_next();
  do {
    if (iVar2 == 0) {
      iVar2 = opt_check_rest_arg(0);
      if (iVar2 == 0) goto switchD_0010006b_caseD_ffffffff;
      a = (BIO *)bio_open_default(uVar5,0x72,0x8005);
      if (a != (BIO *)0x0) {
        app_get0_propq();
        uVar3 = app_get0_libctx();
        pkey = (EVP_PKEY *)PEM_read_bio_Parameters_ex(a,0,uVar3);
        if (pkey == (EVP_PKEY *)0x0) {
          bio = (BIO *)0x0;
          iVar7 = 1;
          BIO_printf(_bio_err,"Error reading parameters\n");
          ERR_print_errors(_bio_err);
          ctx = (EVP_PKEY_CTX *)0x0;
        }
        else {
          bio = (BIO *)bio_open_default(local_48,0x77,0x8005);
          if (bio == (BIO *)0x0) {
            ctx = (EVP_PKEY_CTX *)0x0;
            iVar7 = 1;
          }
          else {
            if (iVar7 == 0) {
              ctx = (EVP_PKEY_CTX *)0x0;
            }
            else {
              if (e == (ENGINE *)0x0) {
                uVar3 = app_get0_propq();
                uVar5 = app_get0_libctx();
                ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(uVar5,pkey,uVar3);
              }
              else {
                ctx = EVP_PKEY_CTX_new(pkey,e);
              }
              if (ctx == (EVP_PKEY_CTX *)0x0) {
                ERR_print_errors(_bio_err);
                goto LAB_001001c2;
              }
              iVar2 = EVP_PKEY_param_check(ctx);
              if (iVar2 != 1) {
                BIO_printf(_bio_err,"Parameters are invalid\n");
                ERR_print_errors(_bio_err);
                goto LAB_001001c2;
              }
              BIO_printf(bio,"Parameters are valid\n");
            }
            if (!bVar1) {
              PEM_write_bio_Parameters(bio,pkey);
            }
            iVar7 = iVar6;
            if (iVar6 != 0) {
              iVar7 = 0;
              EVP_PKEY_print_params(bio,pkey,0,(ASN1_PCTX *)0x0);
            }
          }
        }
        goto LAB_001001c2;
      }
LAB_001001b2:
      iVar7 = 1;
      ctx = (EVP_PKEY_CTX *)0x0;
      pkey = (EVP_PKEY *)0x0;
      bio = (BIO *)0x0;
      a = (BIO *)0x0;
LAB_001001c2:
      EVP_PKEY_CTX_free(ctx);
      EVP_PKEY_free(pkey);
      release_engine(e);
      BIO_free_all(bio);
      BIO_free(a);
      return iVar7;
    }
    if (iVar2 < 8) {
      if (-2 < iVar2) {
        switch(iVar2) {
        case 1:
          iVar7 = 0;
          pkey = (EVP_PKEY *)0x0;
          bio = (BIO *)0x0;
          opt_help(pkeyparam_options);
          a = (BIO *)0x0;
          ctx = (EVP_PKEY_CTX *)0x0;
          goto LAB_001001c2;
        case 2:
          uVar5 = opt_arg();
          break;
        case 3:
          local_48 = opt_arg();
          break;
        case 4:
          iVar6 = 1;
          break;
        case 5:
          bVar1 = true;
          break;
        case 6:
          uVar4 = opt_arg();
          e = (ENGINE *)setup_engine_methods(uVar4,0xffffffff,0);
          break;
        case 7:
          iVar7 = 1;
          break;
        case -1:
switchD_0010006b_caseD_ffffffff:
          BIO_printf(_bio_err,"%s: Use -help for summary.\n",uVar3);
          goto LAB_001001b2;
        }
      }
      goto switchD_0010006b_caseD_0;
    }
    if (3 < iVar2 - 0x641U) goto switchD_0010006b_caseD_0;
    iVar2 = opt_provider(iVar2);
    if (iVar2 == 0) goto LAB_001001b2;
    iVar2 = opt_next();
  } while( true );
}


