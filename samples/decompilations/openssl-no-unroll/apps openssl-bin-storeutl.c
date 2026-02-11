
int indent_printf(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 ulong param_9,BIO *param_10,char *param_11,undefined8 param_12,undefined8 param_13,
                 undefined8 param_14)

{
  char in_AL;
  int iVar1;
  int iVar2;
  long in_FS_OFFSET;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined1 *local_e0;
  undefined1 *local_d8;
  long local_d0;
  undefined1 local_c8 [24];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_28;
  
  if (in_AL != '\0') {
    local_98 = param_1;
    local_88 = param_2;
    local_78 = param_3;
    local_68 = param_4;
    local_58 = param_5;
    local_48 = param_6;
    local_38 = param_7;
    local_28 = param_8;
  }
  local_d0 = *(long *)(in_FS_OFFSET + 0x28);
  local_e0 = &stack0x00000008;
  local_d8 = local_c8;
  local_e8 = 0x18;
  local_e4 = 0x30;
  local_b0 = param_12;
  local_a8 = param_13;
  local_a0 = param_14;
  iVar1 = BIO_printf(param_10,"%*s",param_9 & 0xffffffff,&_LC0);
  iVar2 = BIO_vprintf(param_10,param_11,&local_e8);
  if (local_d0 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2 + iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int process(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,int param_5,
           undefined8 param_6,int param_7,int param_8,int param_9,int param_10,undefined8 param_11,
           undefined8 param_12,undefined8 param_13)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  X509 *pXVar7;
  EVP_PKEY *pEVar8;
  X509_CRL *pXVar9;
  undefined8 uVar10;
  
  uVar3 = app_get0_propq();
  uVar10 = 0;
  lVar4 = OSSL_STORE_open_ex(param_1,param_13,uVar3,param_2,param_3);
  if (lVar4 == 0) {
    BIO_printf(_bio_err,"Couldn\'t open file or uri %s\n",param_1,0);
    ERR_print_errors(_bio_err);
    return 1;
  }
  if ((param_4 == 0) || (iVar2 = OSSL_STORE_expect(lVar4,param_4,uVar10), iVar2 != 0)) {
    if (param_5 != 0) {
      iVar2 = OSSL_STORE_supports_search(lVar4,param_5);
      if (iVar2 == 0) {
        BIO_printf(_bio_err,"%s: the store scheme doesn\'t support the given search criteria.\n",
                   param_12);
        goto LAB_0010089b;
      }
      iVar2 = OSSL_STORE_find(lVar4,param_6);
      if (iVar2 == 0) goto LAB_001007e4;
    }
    iVar2 = 0;
    if (param_9 == 0) {
      do {
        while (lVar6 = OSSL_STORE_load(lVar4), lVar6 == 0) {
          iVar1 = OSSL_STORE_error(lVar4);
          if (iVar1 == 0) goto LAB_00100a78;
          ERR_print_errors(_bio_err);
          iVar1 = OSSL_STORE_eof(lVar4);
          if (iVar1 != 0) goto LAB_001002b2;
          param_9 = param_9 + 1;
        }
        iVar1 = OSSL_STORE_INFO_get_type(lVar6);
        uVar3 = OSSL_STORE_INFO_type_string(iVar1);
        if (iVar1 == 1) {
          OSSL_STORE_INFO_get0_NAME(lVar6);
          lVar5 = OSSL_STORE_INFO_get0_NAME_description(lVar6);
          indent_printf(param_10,_bio_out,"%d: %s: %s\n",iVar2,uVar3);
          if (lVar5 != 0) {
            indent_printf(param_10,_bio_out,&_LC6,lVar5);
          }
          if ((out == (BIO *)0x0) &&
             (out = (BIO *)bio_open_default(param_11,0x77,0x8001), out == (BIO *)0x0))
          goto LAB_00100761;
        }
        else {
          indent_printf(param_10,_bio_out,"%d: %s\n",iVar2,uVar3);
          if ((out == (BIO *)0x0) &&
             (out = (BIO *)bio_open_default(param_11,0x77,0x8001), out == (BIO *)0x0))
          goto LAB_00100761;
          switch(iVar1) {
          default:
            BIO_printf(_bio_err,"!!! Unknown code\n");
            param_9 = param_9 + 1;
            break;
          case 2:
            if (param_7 != 0) {
              pEVar8 = (EVP_PKEY *)OSSL_STORE_INFO_get0_PARAMS(lVar6);
              EVP_PKEY_print_params(out,pEVar8,0,(ASN1_PCTX *)0x0);
            }
            if (param_8 == 0) {
              pEVar8 = (EVP_PKEY *)OSSL_STORE_INFO_get0_PARAMS(lVar6);
              PEM_write_bio_Parameters(out,pEVar8);
            }
            break;
          case 3:
            if (param_7 != 0) {
              pEVar8 = (EVP_PKEY *)OSSL_STORE_INFO_get0_PUBKEY(lVar6);
              EVP_PKEY_print_public(out,pEVar8,0,(ASN1_PCTX *)0x0);
            }
            if (param_8 == 0) {
              pEVar8 = (EVP_PKEY *)OSSL_STORE_INFO_get0_PUBKEY(lVar6);
              PEM_write_bio_PUBKEY(out,pEVar8);
            }
            break;
          case 4:
            if (param_7 != 0) {
              pEVar8 = (EVP_PKEY *)OSSL_STORE_INFO_get0_PKEY(lVar6);
              EVP_PKEY_print_private(out,pEVar8,0,(ASN1_PCTX *)0x0);
            }
            if (param_8 == 0) {
              pEVar8 = (EVP_PKEY *)OSSL_STORE_INFO_get0_PKEY(lVar6);
              PEM_write_bio_PrivateKey
                        (out,pEVar8,(EVP_CIPHER *)0x0,(uchar *)0x0,0,(undefined1 *)0x0,(void *)0x0);
            }
            break;
          case 5:
            if (param_7 != 0) {
              pXVar7 = (X509 *)OSSL_STORE_INFO_get0_CERT(lVar6);
              X509_print(out,pXVar7);
            }
            if (param_8 == 0) {
              pXVar7 = (X509 *)OSSL_STORE_INFO_get0_CERT(lVar6);
              PEM_write_bio_X509(out,pXVar7);
            }
            break;
          case 6:
            if (param_7 != 0) {
              pXVar9 = (X509_CRL *)OSSL_STORE_INFO_get0_CRL(lVar6);
              X509_CRL_print(out,pXVar9);
            }
            if (param_8 == 0) {
              pXVar9 = (X509_CRL *)OSSL_STORE_INFO_get0_CRL(lVar6);
              PEM_write_bio_X509_CRL(out,pXVar9);
            }
          }
        }
        iVar2 = iVar2 + 1;
        OSSL_STORE_INFO_free(lVar6);
      } while( true );
    }
    param_9 = 0;
    while( true ) {
      while (lVar6 = OSSL_STORE_load(lVar4), lVar6 != 0) {
        iVar1 = OSSL_STORE_INFO_get_type(lVar6);
        uVar3 = OSSL_STORE_INFO_type_string(iVar1);
        if (iVar1 == 1) {
          uVar10 = OSSL_STORE_INFO_get0_NAME(lVar6);
          lVar5 = OSSL_STORE_INFO_get0_NAME_description(lVar6);
          indent_printf(param_10,_bio_out,"%d: %s: %s\n",iVar2,uVar3,uVar10);
          if (lVar5 != 0) {
            indent_printf(param_10,_bio_out,&_LC6,lVar5);
          }
          if ((out == (BIO *)0x0) &&
             (out = (BIO *)bio_open_default(param_11,0x77,0x8001), out == (BIO *)0x0))
          goto LAB_00100761;
          uVar3 = OSSL_STORE_INFO_get0_NAME(lVar6);
          iVar1 = process(uVar3,param_2,param_3,param_4,param_5,param_6,param_7,param_8,1,
                          param_10 + 2,param_11,param_12,param_13);
          param_9 = param_9 + iVar1;
        }
        else {
          indent_printf(param_10,_bio_out,"%d: %s\n",iVar2);
          if ((out == (BIO *)0x0) &&
             (out = (BIO *)bio_open_default(param_11,0x77,0x8001), out == (BIO *)0x0))
          goto LAB_00100761;
          switch(iVar1) {
          default:
            param_9 = param_9 + 1;
            BIO_printf(_bio_err,"!!! Unknown code\n");
            break;
          case 2:
            if (param_7 != 0) {
              pEVar8 = (EVP_PKEY *)OSSL_STORE_INFO_get0_PARAMS(lVar6);
              EVP_PKEY_print_params(out,pEVar8,0,(ASN1_PCTX *)0x0);
            }
            if (param_8 == 0) {
              pEVar8 = (EVP_PKEY *)OSSL_STORE_INFO_get0_PARAMS(lVar6);
              PEM_write_bio_Parameters(out,pEVar8);
            }
            break;
          case 3:
            if (param_7 != 0) {
              pEVar8 = (EVP_PKEY *)OSSL_STORE_INFO_get0_PUBKEY(lVar6);
              EVP_PKEY_print_public(out,pEVar8,0,(ASN1_PCTX *)0x0);
            }
            if (param_8 == 0) {
              pEVar8 = (EVP_PKEY *)OSSL_STORE_INFO_get0_PUBKEY(lVar6);
              PEM_write_bio_PUBKEY(out,pEVar8);
            }
            break;
          case 4:
            if (param_7 != 0) {
              pEVar8 = (EVP_PKEY *)OSSL_STORE_INFO_get0_PKEY(lVar6);
              EVP_PKEY_print_private(out,pEVar8,0,(ASN1_PCTX *)0x0);
            }
            if (param_8 == 0) {
              pEVar8 = (EVP_PKEY *)OSSL_STORE_INFO_get0_PKEY(lVar6);
              PEM_write_bio_PrivateKey
                        (out,pEVar8,(EVP_CIPHER *)0x0,(uchar *)0x0,0,(undefined1 *)0x0,(void *)0x0);
            }
            break;
          case 5:
            if (param_7 != 0) {
              pXVar7 = (X509 *)OSSL_STORE_INFO_get0_CERT(lVar6);
              X509_print(out,pXVar7);
            }
            if (param_8 == 0) {
              pXVar7 = (X509 *)OSSL_STORE_INFO_get0_CERT(lVar6);
              PEM_write_bio_X509(out,pXVar7);
            }
            break;
          case 6:
            if (param_7 != 0) {
              pXVar9 = (X509_CRL *)OSSL_STORE_INFO_get0_CRL(lVar6);
              X509_CRL_print(out,pXVar9);
            }
            if (param_8 == 0) {
              pXVar9 = (X509_CRL *)OSSL_STORE_INFO_get0_CRL(lVar6);
              PEM_write_bio_X509_CRL(out,pXVar9);
            }
          }
        }
        iVar2 = iVar2 + 1;
        OSSL_STORE_INFO_free(lVar6);
      }
      iVar1 = OSSL_STORE_error(lVar4);
      if (iVar1 == 0) goto LAB_00100a78;
      ERR_clear_error();
      iVar1 = OSSL_STORE_eof(lVar4);
      if (iVar1 != 0) break;
      param_9 = param_9 + 1;
    }
    goto LAB_001002b2;
  }
LAB_001007e4:
  ERR_print_errors(_bio_err);
LAB_0010089b:
  param_9 = 1;
LAB_001002cc:
  iVar2 = OSSL_STORE_close(lVar4);
joined_r0x0010076b:
  if (iVar2 == 0) {
    param_9 = param_9 + 1;
    ERR_print_errors(_bio_err);
  }
  return param_9;
LAB_00100761:
  param_9 = param_9 + 1;
  iVar2 = OSSL_STORE_close(lVar4);
  goto joined_r0x0010076b;
LAB_00100a78:
  iVar1 = OSSL_STORE_eof(lVar4);
  if (iVar1 == 0) {
    param_9 = param_9 + 1;
    BIO_printf(_bio_err,"ERROR: OSSL_STORE_load() returned NULL without eof or error indications\n")
    ;
    BIO_printf(_bio_err,"       This is an error in the loader\n");
    ERR_print_errors(_bio_err);
  }
LAB_001002b2:
  indent_printf(param_10,out,"Total found: %d\n",iVar2);
  goto LAB_001002cc;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 storeutl_main(undefined4 param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  void *ptr;
  ASN1_INTEGER *a;
  X509_NAME *a_00;
  uint uVar9;
  char *pcVar10;
  long in_FS_OFFSET;
  X509_NAME *local_c8;
  char *local_c0;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_94;
  undefined8 local_90;
  void *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  void *local_68;
  undefined8 local_60;
  void *local_58;
  undefined8 local_50;
  long local_40;
  
  ptr = (void *)0x0;
  a = (ASN1_INTEGER *)0x0;
  a_00 = (X509_NAME *)0x0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = (void *)0x0;
  local_60 = 0;
  uVar4 = app_get0_libctx();
  opt_set_unknown_name("digest");
  uVar9 = 0;
  uVar5 = opt_init(param_1,param_2,storeutl_options);
  local_c8 = (X509_NAME *)0x0;
  local_a8 = 0;
  local_c0 = (char *)0x0;
  local_88 = (void *)0x0;
  cVar1 = '\0';
  local_b8 = 0;
  local_a0 = 0;
  local_90 = 0;
  local_94 = 0;
  local_7c = 0;
  local_80 = 0;
switchD_00100bda_caseD_0:
  iVar2 = opt_next();
joined_r0x00100bbf:
  if (iVar2 == 0) {
    iVar2 = opt_check_rest_arg(&_LC26);
    if (iVar2 != 0) {
      puVar6 = (undefined8 *)opt_rest();
      iVar2 = opt_md(local_a8,&local_60);
      if (iVar2 != 0) {
        if (uVar9 == 0) {
LAB_00101039:
          lVar7 = 0;
        }
        else {
          if (uVar9 == 3) {
            lVar7 = OSSL_STORE_SEARCH_by_key_fingerprint(local_60,ptr,local_88);
          }
          else if (uVar9 < 4) {
            if (uVar9 == 1) {
              lVar7 = OSSL_STORE_SEARCH_by_name(local_c8);
            }
            else {
              if (uVar9 != 2) goto LAB_00101039;
              if ((a_00 == (X509_NAME *)0x0) || (a == (ASN1_INTEGER *)0x0)) {
                pcVar10 = "%s: both -issuer and -serial must be given.\n";
                goto LAB_00101095;
              }
              lVar7 = OSSL_STORE_SEARCH_by_issuer_serial(a_00,a);
            }
          }
          else {
            if (uVar9 != 4) goto LAB_00101039;
            lVar7 = OSSL_STORE_SEARCH_by_alias(local_c0);
          }
          if (lVar7 == 0) {
            ERR_print_errors(_bio_err);
            goto LAB_00100d62;
          }
        }
        iVar2 = app_passwd(local_a0,0,&local_68,0);
        if (iVar2 == 0) {
          uVar3 = 1;
          BIO_printf(_bio_err,"Error getting passwords\n");
        }
        else {
          local_58 = local_68;
          local_50 = *puVar6;
          uVar8 = get_ui_method();
          uVar3 = process(*puVar6,uVar8,&local_58,cVar1,uVar9,lVar7,local_7c,local_80,local_94,0,
                          local_90,uVar5,uVar4);
        }
        goto LAB_00100d69;
      }
    }
switchD_00100bda_caseD_ffffffff:
    BIO_printf(_bio_err,"%s: Use -help for summary.\n",uVar5);
  }
  else {
    if (0x10 < iVar2) {
      if (3 < iVar2 - 0x641U) goto switchD_00100bda_caseD_0;
      iVar2 = opt_provider();
      if (iVar2 == 0) goto LAB_00100d62;
      iVar2 = opt_next();
      goto joined_r0x00100bbf;
    }
    if (iVar2 < -1) goto switchD_00100bda_caseD_0;
    switch(iVar2) {
    default:
      goto switchD_00100bda_caseD_0;
    case 1:
      lVar7 = 0;
      uVar3 = 0;
      opt_help(storeutl_options);
      goto LAB_00100d69;
    case 2:
      uVar8 = opt_arg();
      local_b8 = setup_engine_methods(uVar8,0xffffffff,0);
      goto switchD_00100bda_caseD_0;
    case 3:
      local_90 = opt_arg();
      goto switchD_00100bda_caseD_0;
    case 4:
      local_a0 = opt_arg();
      goto switchD_00100bda_caseD_0;
    case 5:
      local_80 = 1;
      goto switchD_00100bda_caseD_0;
    case 6:
      local_7c = 1;
      goto switchD_00100bda_caseD_0;
    case 7:
      local_94 = 1;
      goto switchD_00100bda_caseD_0;
    case 8:
    case 9:
    case 10:
      if (cVar1 != '\0') {
        BIO_printf(_bio_err,"%s: only one search type can be given.\n",uVar5);
        break;
      }
      if (iVar2 == 8) {
        cVar1 = '\x05';
      }
      else {
        cVar1 = (iVar2 != 9) * '\x02' + '\x04';
      }
      goto switchD_00100bda_caseD_0;
    case 0xb:
      if (uVar9 == 0) {
        if (local_c8 == (X509_NAME *)0x0) {
          uVar8 = opt_arg();
          local_c8 = (X509_NAME *)parse_name(uVar8,0x1000,1);
          if (local_c8 != (X509_NAME *)0x0) {
            uVar9 = 1;
            goto switchD_00100bda_caseD_0;
          }
        }
        else {
          BIO_printf(_bio_err,"%s: subject already given.\n",uVar5);
        }
      }
      else {
LAB_0010100d:
        BIO_printf(_bio_err,"%s: criterion already given.\n",uVar5);
      }
      break;
    case 0xc:
      if ((uVar9 & 5) != 0) goto LAB_0010100d;
      if (a_00 == (X509_NAME *)0x0) {
        uVar8 = opt_arg();
        a_00 = (X509_NAME *)parse_name(uVar8,0x1000,1);
        if (a_00 != (X509_NAME *)0x0) {
LAB_00100ee5:
          uVar9 = 2;
          goto switchD_00100bda_caseD_0;
        }
      }
      else {
        BIO_printf(_bio_err,"%s: issuer already given.\n",uVar5);
      }
      break;
    case 0xd:
      if ((uVar9 & 5) != 0) goto LAB_0010100d;
      if (a == (ASN1_INTEGER *)0x0) {
        pcVar10 = (char *)opt_arg();
        a = s2i_ASN1_INTEGER((X509V3_EXT_METHOD *)0x0,pcVar10);
        if (a != (ASN1_INTEGER *)0x0) goto LAB_00100ee5;
        pcVar10 = "%s: can\'t parse serial number argument.\n";
        goto LAB_00101095;
      }
      BIO_printf(_bio_err,"%s: serial number already given.\n",uVar5);
      break;
    case 0xe:
      if (uVar9 == 0) {
        if (ptr == (void *)0x0) {
          local_58 = (void *)0x0;
          uVar8 = opt_arg();
          ptr = (void *)OPENSSL_hexstr2buf(uVar8,&local_58);
          if (ptr == (void *)0x0) {
            lVar7 = 0;
            uVar3 = 1;
            BIO_printf(_bio_err,"%s: can\'t parse fingerprint argument.\n",uVar5);
            goto LAB_00100d69;
          }
          local_88 = local_58;
          uVar9 = 3;
          goto switchD_00100bda_caseD_0;
        }
        BIO_printf(_bio_err,"%s: fingerprint already given.\n",uVar5);
      }
      else {
        pcVar10 = "%s: criterion already given.\n";
LAB_00101095:
        BIO_printf(_bio_err,pcVar10,uVar5);
      }
      break;
    case 0xf:
      if (uVar9 != 0) goto LAB_0010100d;
      if (local_c0 == (char *)0x0) {
        pcVar10 = (char *)opt_arg();
        local_c0 = CRYPTO_strdup(pcVar10,"apps/storeutl.c",0xf2);
        if (local_c0 == (char *)0x0) {
          lVar7 = 0;
          uVar3 = 1;
          BIO_printf(_bio_err,"%s: can\'t parse alias argument.\n",uVar5);
          goto LAB_00100d69;
        }
        uVar9 = 4;
        goto switchD_00100bda_caseD_0;
      }
      BIO_printf(_bio_err,"%s: alias already given.\n",uVar5);
      break;
    case 0x10:
      local_a8 = opt_unknown();
      goto switchD_00100bda_caseD_0;
    case -1:
      goto switchD_00100bda_caseD_ffffffff;
    }
  }
LAB_00100d62:
  lVar7 = 0;
  uVar3 = 1;
LAB_00100d69:
  EVP_MD_free(local_60);
  CRYPTO_free(ptr);
  CRYPTO_free(local_c0);
  ASN1_INTEGER_free(a);
  X509_NAME_free(local_c8);
  X509_NAME_free(a_00);
  OSSL_STORE_SEARCH_free(lVar7);
  BIO_free_all(out);
  CRYPTO_free(local_68);
  release_engine(local_b8);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}


