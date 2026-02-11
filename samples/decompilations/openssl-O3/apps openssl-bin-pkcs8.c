
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int pkcs8_main(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  BIO *bp;
  PKCS8_PRIV_KEY_INFO *x;
  EVP_PKEY *pkey;
  BIO *bp_00;
  undefined8 uVar6;
  undefined8 uVar7;
  char *pcVar8;
  long lVar9;
  X509_SIG *x_00;
  size_t sVar10;
  X509_ALGOR *a;
  int iVar11;
  undefined8 in_R10;
  long in_FS_OFFSET;
  undefined8 local_4c0;
  int local_4b8;
  undefined8 local_4a8;
  undefined8 local_4a0;
  undefined8 local_498;
  int local_490;
  int local_484;
  int local_480;
  int local_47c;
  EVP_CIPHER *local_478;
  char *local_470;
  char *local_468;
  long local_460;
  long local_458;
  long local_450;
  char local_448 [1032];
  long local_40;
  
  uVar7 = 0;
  lVar9 = 0;
  iVar11 = 0;
  iVar4 = -1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_484 = 0;
  local_478 = (EVP_CIPHER *)0x0;
  local_470 = (char *)0x0;
  local_468 = (char *)0x0;
  local_480 = 0x8005;
  local_460 = 0;
  local_458 = 0;
  local_450 = 0;
  local_47c = 0;
  uVar5 = opt_init(param_1,param_2,pkcs8_options);
  bVar1 = false;
  local_4b8 = 0x800;
  local_490 = 0;
  local_4a0 = 0;
  local_498 = 0;
  local_4a8 = 0;
  local_4c0 = 0;
switchD_0010010a_caseD_0:
  iVar3 = opt_next();
  if (iVar3 != 0) goto LAB_001000ed;
LAB_00100268:
  iVar3 = opt_check_rest_arg(0);
  if (iVar3 != 0) {
    iVar3 = app_RAND_load();
    if (iVar3 != 0) {
      if ((lVar9 != 0) && (iVar3 = opt_cipher(lVar9,&local_478), iVar3 == 0))
      goto switchD_0010010a_caseD_ffffffff;
      iVar3 = app_passwd(uVar7,local_4a0,&local_470);
      if (iVar3 == 0) {
        BIO_printf(_bio_err,"Error getting passwords\n");
      }
      else {
        if ((iVar4 == -1) && (local_478 == (EVP_CIPHER *)0x0)) {
          local_478 = EVP_aes_256_cbc();
        }
        iVar3 = local_484;
        if (local_484 == 0) {
          iVar3 = 0x8005;
        }
        bp = (BIO *)bio_open_default(local_4a8,0x72,iVar3);
        if (bp != (BIO *)0x0) {
          if (iVar11 == 0) {
            if (local_490 == 0) {
              if (local_484 == 0x8005 || local_484 == 0) {
                x_00 = PEM_read_bio_PKCS8(bp,(X509_SIG **)0x0,(undefined1 *)0x0,(void *)0x0);
              }
              else {
                if (local_484 != 4) goto LAB_0010072b;
                x_00 = d2i_PKCS8_bio(bp,(X509_SIG **)0x0);
              }
              if (x_00 == (X509_SIG *)0x0) {
                BIO_printf(_bio_err,"Error reading key\n");
                ERR_print_errors(_bio_err);
LAB_00100740:
                x_00 = (X509_SIG *)0x0;
                x = (PKCS8_PRIV_KEY_INFO *)0x0;
                pkey = (EVP_PKEY *)0x0;
                bp_00 = (BIO *)0x0;
                iVar11 = 1;
                goto LAB_00100175;
              }
              pcVar8 = local_470;
              if (local_470 == (char *)0x0) {
                pcVar8 = local_448;
                iVar4 = EVP_read_pw_string(pcVar8,0x400,"Enter Password:",0);
                if (iVar4 != 0) {
                  x = (PKCS8_PRIV_KEY_INFO *)0x0;
                  pkey = (EVP_PKEY *)0x0;
                  BIO_printf(_bio_err,"Can\'t read Password\n");
                  bp_00 = (BIO *)0x0;
                  iVar11 = 1;
                  goto LAB_00100175;
                }
              }
              sVar10 = strlen(pcVar8);
              x = PKCS8_decrypt(x_00,pcVar8,(int)sVar10);
            }
            else if (local_484 == 0x8005 || local_484 == 0) {
              x = PEM_read_bio_PKCS8_PRIV_KEY_INFO
                            (bp,(PKCS8_PRIV_KEY_INFO **)0x0,(undefined1 *)0x0,(void *)0x0);
              x_00 = (X509_SIG *)0x0;
            }
            else {
              if (local_484 != 4) {
LAB_0010072b:
                BIO_printf(_bio_err,"Bad format specified for key\n");
                goto LAB_00100740;
              }
              x_00 = (X509_SIG *)0x0;
              x = d2i_PKCS8_PRIV_KEY_INFO_bio(bp,(PKCS8_PRIV_KEY_INFO **)0x0);
            }
            if (x == (PKCS8_PRIV_KEY_INFO *)0x0) {
              pkey = (EVP_PKEY *)0x0;
              bp_00 = (BIO *)0x0;
              BIO_printf(_bio_err,"Error decrypting key\n");
              ERR_print_errors(_bio_err);
              iVar11 = 1;
            }
            else {
              pkey = EVP_PKCS82PKEY(x);
              if (pkey == (EVP_PKEY *)0x0) {
                bp_00 = (BIO *)0x0;
                BIO_printf(_bio_err,"Error converting key\n");
                ERR_print_errors(_bio_err);
                iVar11 = 1;
              }
              else {
                bp_00 = (BIO *)bio_open_owner(local_498,local_480,1);
                if (bp_00 == (BIO *)0x0) {
                  iVar11 = 1;
                }
                else if (local_480 == 0x8005) {
                  if (bVar1) {
                    PEM_write_bio_PrivateKey_traditional(bp_00,pkey,0,0,0,0,local_468);
                  }
                  else {
                    PEM_write_bio_PrivateKey
                              (bp_00,pkey,(EVP_CIPHER *)0x0,(uchar *)0x0,0,(undefined1 *)0x0,
                               local_468);
                    iVar11 = 0;
                  }
                }
                else if (local_480 == 4) {
                  i2d_PrivateKey_bio(bp_00,pkey);
                }
                else {
                  BIO_printf(_bio_err,"Bad format specified for key\n");
                  iVar11 = 1;
                }
              }
            }
            goto LAB_00100175;
          }
          pkey = (EVP_PKEY *)load_key(local_4a8,local_484,1,local_470,local_4c0,&_LC4);
          if (pkey == (EVP_PKEY *)0x0) {
            x_00 = (X509_SIG *)0x0;
            x = (PKCS8_PRIV_KEY_INFO *)0x0;
            bp_00 = (BIO *)0x0;
            goto LAB_00100175;
          }
          x = EVP_PKEY2PKCS8(pkey);
          if (x == (PKCS8_PRIV_KEY_INFO *)0x0) {
            x_00 = (X509_SIG *)0x0;
            bp_00 = (BIO *)0x0;
            BIO_printf(_bio_err,"Error converting key\n");
            ERR_print_errors(_bio_err);
            goto LAB_00100175;
          }
          bp_00 = (BIO *)bio_open_owner(local_498,local_480,1);
          if (bp_00 == (BIO *)0x0) {
            x_00 = (X509_SIG *)0x0;
            goto LAB_00100175;
          }
          if (local_490 != 0) {
            if (local_480 == 0x8005) {
              PEM_write_bio_PKCS8_PRIV_KEY_INFO(bp_00,x);
            }
            else {
              if (local_480 != 4) {
                x_00 = (X509_SIG *)0x0;
                BIO_printf(_bio_err,"Bad format specified for key\n");
                iVar11 = local_490;
                goto LAB_00100175;
              }
              i2d_PKCS8_PRIV_KEY_INFO_bio(bp_00,x);
            }
            iVar11 = 0;
            x_00 = (X509_SIG *)0x0;
            goto LAB_00100175;
          }
          if (local_478 == (EVP_CIPHER *)0x0) {
            a = PKCS5_pbe_set(iVar4,local_4b8,(uchar *)0x0,local_47c);
          }
          else if (((local_460 == 0) || (local_458 == 0)) || (local_450 == 0)) {
            a = PKCS5_pbe2_set_iv(local_478,local_4b8,(uchar *)0x0,local_47c,(uchar *)0x0,iVar4);
          }
          else {
            a = (X509_ALGOR *)
                PKCS5_pbe2_set_scrypt(local_478,0,local_47c,0,local_460,local_458,local_450,in_R10);
          }
          if (a == (X509_ALGOR *)0x0) {
            x_00 = (X509_SIG *)0x0;
            BIO_printf(_bio_err,"Error setting PBE algorithm\n");
            ERR_print_errors(_bio_err);
            goto LAB_00100175;
          }
          pcVar8 = local_468;
          if (local_468 == (char *)0x0) {
            pcVar8 = local_448;
            iVar4 = EVP_read_pw_string(pcVar8,0x400,"Enter Encryption Password:",1);
            if (iVar4 != 0) {
              X509_ALGOR_free(a);
              x_00 = (X509_SIG *)0x0;
              goto LAB_00100175;
            }
          }
          sVar10 = strlen(pcVar8);
          x_00 = (X509_SIG *)PKCS8_set0_pbe(pcVar8,sVar10 & 0xffffffff,x,a);
          if (x_00 == (X509_SIG *)0x0) {
            X509_ALGOR_free(a);
            BIO_printf(_bio_err,"Error encrypting key\n");
            ERR_print_errors(_bio_err);
          }
          else if (local_480 == 0x8005) {
            iVar11 = 0;
            PEM_write_bio_PKCS8(bp_00,x_00);
          }
          else if (local_480 == 4) {
            iVar11 = 0;
            i2d_PKCS8_bio(bp_00,x_00);
          }
          else {
            BIO_printf(_bio_err,"Bad format specified for key\n");
          }
          goto LAB_00100175;
        }
      }
    }
LAB_00100235:
    iVar11 = 1;
LAB_00100167:
    x_00 = (X509_SIG *)0x0;
    x = (PKCS8_PRIV_KEY_INFO *)0x0;
    pkey = (EVP_PKEY *)0x0;
    bp_00 = (BIO *)0x0;
    bp = (BIO *)0x0;
LAB_00100175:
    X509_SIG_free(x_00);
    PKCS8_PRIV_KEY_INFO_free(x);
    EVP_PKEY_free(pkey);
    EVP_CIPHER_free(local_478);
    release_engine(local_4c0);
    BIO_free_all(bp_00);
    BIO_free(bp);
    CRYPTO_free(local_470);
    CRYPTO_free(local_468);
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return iVar11;
  }
  goto switchD_0010010a_caseD_ffffffff;
LAB_001000ed:
  while (0x15 < iVar3) {
    if (0x5de < iVar3) {
      if ((3 < iVar3 - 0x641U) || (iVar3 = opt_provider(), iVar3 != 0))
      goto switchD_0010010a_caseD_0;
      goto LAB_00100235;
    }
    if (iVar3 < 0x5dd) goto switchD_0010010a_caseD_0;
    iVar3 = opt_rand(iVar3);
    if (iVar3 == 0) goto LAB_00100235;
    iVar3 = opt_next();
    if (iVar3 == 0) goto LAB_00100268;
  }
  if (iVar3 < -1) goto switchD_0010010a_caseD_0;
  switch(iVar3) {
  default:
    goto switchD_0010010a_caseD_0;
  case 1:
    iVar11 = 0;
    opt_help(pkcs8_options);
    goto LAB_00100167;
  case 2:
    uVar6 = opt_arg();
    iVar3 = opt_format(uVar6,6,&local_484);
    goto joined_r0x001003b4;
  case 3:
    uVar6 = opt_arg();
    iVar3 = opt_format(uVar6,6,&local_480);
    goto joined_r0x001003b4;
  case 4:
    uVar6 = opt_arg();
    local_4c0 = setup_engine_methods(uVar6,0xffffffff,0);
    goto switchD_0010010a_caseD_0;
  case 5:
    local_4a8 = opt_arg();
    goto switchD_0010010a_caseD_0;
  case 6:
    local_498 = opt_arg();
    goto switchD_0010010a_caseD_0;
  case 7:
    iVar11 = 1;
    goto switchD_0010010a_caseD_0;
  case 8:
    local_4b8 = 1;
    goto switchD_0010010a_caseD_0;
  case 9:
    local_490 = 1;
    goto switchD_0010010a_caseD_0;
  case 10:
    local_460 = 0x4000;
    local_458 = 8;
    local_450 = 1;
LAB_0010042a:
    if (local_478 == (EVP_CIPHER *)0x0) {
      local_478 = EVP_aes_256_cbc();
    }
    goto switchD_0010010a_caseD_0;
  case 0xb:
    uVar6 = opt_arg();
    iVar3 = opt_long(uVar6,&local_460);
    lVar2 = local_460;
    if (iVar3 == 0) break;
    goto joined_r0x00100478;
  case 0xc:
    uVar6 = opt_arg();
    iVar3 = opt_long(uVar6,&local_458);
    lVar2 = local_458;
    goto joined_r0x0010046c;
  case 0xd:
    uVar6 = opt_arg();
    iVar3 = opt_long(uVar6,&local_450);
    lVar2 = local_450;
joined_r0x0010046c:
    if (iVar3 != 0) {
joined_r0x00100478:
      if (0 < lVar2) goto switchD_0010010a_caseD_0;
    }
    break;
  case 0xe:
    lVar9 = opt_arg();
    goto switchD_0010010a_caseD_0;
  case 0xf:
    pcVar8 = (char *)opt_arg();
    iVar4 = OBJ_txt2nid(pcVar8);
    if (iVar4 != 0) goto switchD_0010010a_caseD_0;
    uVar7 = opt_arg();
    BIO_printf(_bio_err,"%s: Unknown PBE algorithm %s\n",uVar5,uVar7);
    break;
  case 0x10:
    pcVar8 = (char *)opt_arg();
    iVar4 = OBJ_txt2nid(pcVar8);
    iVar3 = EVP_PBE_find(1,iVar4,(int *)0x0,(int *)0x0,(undefined1 **)0x0);
    if (iVar3 != 0) goto LAB_0010042a;
    uVar7 = opt_arg();
    BIO_printf(_bio_err,"%s: Unknown PRF algorithm %s\n",uVar5,uVar7);
    break;
  case 0x11:
    local_4b8 = opt_int_arg();
    goto switchD_0010010a_caseD_0;
  case 0x12:
    uVar7 = opt_arg();
    goto switchD_0010010a_caseD_0;
  case 0x13:
    local_4a0 = opt_arg();
    goto switchD_0010010a_caseD_0;
  case 0x14:
    bVar1 = true;
    goto switchD_0010010a_caseD_0;
  case 0x15:
    uVar6 = opt_arg();
    iVar3 = opt_int(uVar6,&local_47c);
joined_r0x001003b4:
    if (iVar3 != 0) goto switchD_0010010a_caseD_0;
    break;
  case -1:
    break;
  }
switchD_0010010a_caseD_ffffffff:
  iVar11 = 1;
  BIO_printf(_bio_err,"%s: Use -help for summary.\n",uVar5);
  goto LAB_00100167;
}


