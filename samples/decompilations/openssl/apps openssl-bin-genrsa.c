
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 genrsa_main(undefined4 param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  BIGNUM *a;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  BIO *bp;
  EVP_PKEY *x;
  char *ptr;
  char *ptr_00;
  long in_FS_OFFSET;
  ulong w;
  char *pcVar7;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_6c;
  int local_64;
  EVP_PKEY_CTX *local_60;
  EVP_CIPHER *local_58;
  void *local_50;
  BIGNUM *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = BN_GENCB_new();
  a = BN_new();
  local_64 = 0x800;
  local_60 = (EVP_PKEY_CTX *)0x0;
  local_58 = (EVP_CIPHER *)0x0;
  local_50 = (void *)0x0;
  if ((a == (BIGNUM *)0x0) || (lVar3 == 0)) {
    x = (EVP_PKEY *)0x0;
    bp = (BIO *)0x0;
    uVar5 = 0;
LAB_00100108:
    BN_free(a);
    BN_GENCB_free(lVar3);
    EVP_PKEY_CTX_free(local_60);
    EVP_PKEY_free(x);
    EVP_CIPHER_free(local_58);
  }
  else {
    bVar1 = false;
    opt_set_unknown_name("cipher");
    uVar4 = opt_init(param_1,param_2,genrsa_options);
    w = 0x10001;
    uVar5 = 0;
    local_90 = 0;
    local_80 = 0;
    local_78 = 0;
    local_6c = 2;
switchD_001000fb_caseD_0:
    do {
      iVar2 = opt_next();
      if (iVar2 == 0) {
        iVar2 = opt_num_rest();
        puVar6 = (undefined8 *)opt_rest();
        if (iVar2 == 1) {
          iVar2 = opt_int(*puVar6,&local_64);
          if ((iVar2 == 0) || (local_64 < 1)) goto LAB_001001aa;
          if (0x4000 < local_64) {
            BIO_printf(_bio_err,
                       "Warning: It is not recommended to use more than %d bit for RSA keys.\n         Your key size is %d! Larger key size may behave not as expected.\n"
                       ,0x4000);
          }
        }
        else {
          iVar2 = opt_check_rest_arg(0);
          if (iVar2 == 0) goto switchD_001000fb_caseD_ffffffff;
        }
        iVar2 = app_RAND_load();
        if ((iVar2 != 0) && (iVar2 = opt_cipher(local_90,&local_58), iVar2 != 0)) {
          iVar2 = app_passwd(0,local_80,0,&local_50);
          if (iVar2 == 0) {
            BIO_printf(_bio_err,"Error getting password\n");
          }
          else {
            bp = (BIO *)bio_open_owner(local_78,0x8005,1);
            if (bp != (BIO *)0x0) {
              app_get0_propq();
              uVar4 = app_get0_libctx();
              iVar2 = init_gen_str(&local_60,&_LC5,uVar5,0);
              if (iVar2 != 0) {
                if (verbose != 0) {
                  EVP_PKEY_CTX_set_cb(local_60,&progress_cb);
                }
                EVP_PKEY_CTX_set_app_data(local_60,_bio_err);
                iVar2 = EVP_PKEY_CTX_set_rsa_keygen_bits(local_60,local_64);
                if (iVar2 < 1) {
                  x = (EVP_PKEY *)0x0;
                  BIO_printf(_bio_err,"Error setting RSA length\n");
                  goto LAB_00100108;
                }
                iVar2 = BN_set_word(a,w);
                if (iVar2 == 0) {
                  BIO_printf(_bio_err,"Error allocating RSA public exponent\n");
                }
                else {
                  iVar2 = EVP_PKEY_CTX_set1_rsa_keygen_pubexp(local_60,a);
                  if (iVar2 < 1) {
                    BIO_printf(_bio_err,"Error setting RSA public exponent\n");
                  }
                  else {
                    iVar2 = EVP_PKEY_CTX_set_rsa_keygen_primes(local_60,local_6c);
                    if (iVar2 < 1) {
                      BIO_printf(_bio_err,"Error setting number of primes\n");
                    }
                    else {
                      x = (EVP_PKEY *)app_keygen(local_60,&_LC5,local_64);
                      if (x != (EVP_PKEY *)0x0) {
                        pcVar7 = "apps/genrsa.c";
                        if (verbose != 0) {
                          local_48 = (BIGNUM *)0x0;
                          EVP_PKEY_get_bn_param(x,&_LC10,&local_48);
                          if (local_48 == (BIGNUM *)0x0) {
                            BIO_printf(_bio_err,"Error cannot access RSA e\n");
                            goto LAB_00100108;
                          }
                          ptr = BN_bn2hex(local_48);
                          ptr_00 = BN_bn2dec(local_48);
                          if ((ptr != (char *)0x0) && (ptr_00 != (char *)0x0)) {
                            BIO_printf(_bio_err,"e is %s (0x%s)\n",ptr_00);
                          }
                          pcVar7 = "apps/genrsa.c";
                          CRYPTO_free(ptr);
                          CRYPTO_free(ptr_00);
                          BN_free(local_48);
                        }
                        if (bVar1) {
                          iVar2 = PEM_write_bio_PrivateKey_traditional
                                            (bp,x,local_58,0,0,0,local_50,uVar4,pcVar7);
                        }
                        else {
                          iVar2 = PEM_write_bio_PrivateKey
                                            (bp,x,local_58,(uchar *)0x0,0,(undefined1 *)0x0,local_50
                                            );
                        }
                        BN_free(a);
                        BN_GENCB_free(lVar3);
                        EVP_PKEY_CTX_free(local_60);
                        EVP_PKEY_free(x);
                        EVP_CIPHER_free(local_58);
                        BIO_free_all(bp);
                        release_engine(uVar5);
                        CRYPTO_free(local_50);
                        if (iVar2 == 0) goto LAB_0010015a;
                        uVar4 = 0;
                        goto LAB_0010016b;
                      }
                    }
                  }
                }
              }
              x = (EVP_PKEY *)0x0;
              goto LAB_00100108;
            }
          }
        }
LAB_001001aa:
        x = (EVP_PKEY *)0x0;
        bp = (BIO *)0x0;
        goto LAB_00100108;
      }
      if (iVar2 < 0xb) {
        if (-2 < iVar2) {
          switch(iVar2) {
          case 1:
            opt_help(genrsa_options);
            BN_free(a);
            BN_GENCB_free(lVar3);
            EVP_PKEY_CTX_free(local_60);
            EVP_PKEY_free((EVP_PKEY *)0x0);
            EVP_CIPHER_free();
            BIO_free_all((BIO *)0x0);
            release_engine(uVar5);
            CRYPTO_free(local_50);
            uVar4 = 0;
            goto LAB_0010016b;
          case 2:
            w = 3;
            break;
          case 3:
            w = 0x10001;
            break;
          case 4:
            uVar5 = opt_arg();
            uVar5 = setup_engine_methods(uVar5,0xffffffff,0);
            break;
          case 5:
            local_78 = opt_arg();
            break;
          case 6:
            local_80 = opt_arg();
            break;
          case 7:
            local_90 = opt_unknown();
            break;
          case 8:
            local_6c = opt_int_arg();
            break;
          case 9:
            verbose = 1;
            break;
          case 10:
            verbose = 0;
            break;
          case -1:
switchD_001000fb_caseD_ffffffff:
            BIO_printf(_bio_err,"%s: Use -help for summary.\n",uVar4);
            goto LAB_001001aa;
          }
        }
        goto switchD_001000fb_caseD_0;
      }
      if (0x644 < iVar2) {
        if (iVar2 == 0x646) {
          bVar1 = true;
        }
        goto switchD_001000fb_caseD_0;
      }
      if (0x640 < iVar2) {
        iVar2 = opt_provider();
        if (iVar2 == 0) break;
        goto switchD_001000fb_caseD_0;
      }
    } while ((1 < iVar2 - 0x5ddU) || (iVar2 = opt_rand(), iVar2 != 0));
    BN_free(a);
    BN_GENCB_free(lVar3);
    EVP_PKEY_CTX_free(local_60);
    EVP_PKEY_free((EVP_PKEY *)0x0);
    EVP_CIPHER_free();
    bp = (BIO *)0x0;
  }
  BIO_free_all(bp);
  release_engine(uVar5);
  CRYPTO_free(local_50);
LAB_0010015a:
  ERR_print_errors(_bio_err);
  uVar4 = 1;
LAB_0010016b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


