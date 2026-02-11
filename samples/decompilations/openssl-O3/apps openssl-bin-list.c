
void provider_cmp(undefined8 *param_1,undefined8 *param_2)

{
  char *__s2;
  char *__s1;
  
  __s2 = (char *)OSSL_PROVIDER_get0_name(*param_2);
  __s1 = (char *)OSSL_PROVIDER_get0_name(*param_1);
  strcmp(__s1,__s2);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void display_random(undefined8 param_1,long param_2)

{
  undefined1 auVar1 [16];
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  char *pcVar6;
  long lVar7;
  long in_FS_OFFSET;
  undefined1 local_470 [8];
  undefined1 local_468 [16];
  undefined1 local_458 [16];
  undefined1 local_448 [16];
  undefined1 local_438 [16];
  undefined1 local_428 [16];
  undefined1 local_418 [1000];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_468 = (undefined1  [16])0x0;
  local_458 = (undefined1  [16])0x0;
  local_448 = (undefined1  [16])0x0;
  local_438 = (undefined1  [16])0x0;
  local_428 = (undefined1  [16])0x0;
  BIO_printf(_bio_out,"%s:\n",param_1);
  if (param_2 != 0) {
    uVar3 = EVP_RAND_CTX_get0_rand(param_2);
    uVar4 = EVP_RAND_get0_name(uVar3);
    BIO_printf(_bio_out,"  %s",uVar4);
    uVar4 = EVP_RAND_get0_provider(uVar3);
    uVar4 = OSSL_PROVIDER_get0_name(uVar4);
    BIO_printf(_bio_out," @ %s\n",uVar4);
    iVar2 = EVP_RAND_get_state(param_2);
    pcVar6 = "ready";
    if (((iVar2 != 1) && (pcVar6 = "error", iVar2 != 2)) && (pcVar6 = "uninitialised", iVar2 != 0))
    {
      pcVar6 = "unknown";
    }
    BIO_printf(_bio_out,"  state = %s\n",pcVar6);
    plVar5 = (long *)EVP_RAND_gettable_ctx_params(uVar3);
    if (plVar5 != (long *)0x0) {
      lVar7 = *plVar5;
joined_r0x00100155:
      if (lVar7 != 0) {
        do {
          iVar2 = OPENSSL_strcasecmp(lVar7,"state");
          if ((iVar2 != 0) && (((*(uint *)(plVar5 + 1) & 0xfffffffd) == 4 || (verbose != 0)))) {
            local_468._8_4_ = *(uint *)(plVar5 + 1);
            local_458._8_8_ = 1000;
            local_468._0_8_ = *plVar5;
            local_458._0_8_ = local_418;
            if ((int)plVar5[1] - 1U < 2) {
              local_458._8_8_ = 8;
              local_458._0_8_ = local_470;
            }
            auVar1._8_8_ = 0;
            auVar1._0_8_ = local_448._8_8_;
            local_448 = auVar1 << 0x40;
            iVar2 = EVP_RAND_CTX_get_params(param_2,local_468);
            if (iVar2 != 0) goto code_r0x001001f2;
          }
          lVar7 = plVar5[5];
          plVar5 = plVar5 + 5;
          if (lVar7 == 0) break;
        } while( true );
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x001001f2:
  plVar5 = plVar5 + 5;
  print_param_value(local_468,2);
  lVar7 = *plVar5;
  goto joined_r0x00100155;
}



bool collect_providers(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = OPENSSL_sk_push(param_2,param_1);
  return 0 < iVar1;
}



void md_cmp(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char *__s2;
  char *__s1;
  
  uVar1 = EVP_MD_get0_provider(*param_2);
  __s2 = (char *)OSSL_PROVIDER_get0_name(uVar1);
  uVar1 = EVP_MD_get0_provider(*param_1);
  __s1 = (char *)OSSL_PROVIDER_get0_name(uVar1);
  strcmp(__s1,__s2);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void list_digests(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  
  lVar2 = OPENSSL_sk_new(md_cmp);
  if (lVar2 == 0) {
    BIO_printf(_bio_err,"ERROR: Memory allocation\n");
    return;
  }
  lVar3 = app_get0_propq();
  if (lVar3 == 0) {
    BIO_printf(_bio_out,"%sLegacy:\n",param_1);
    EVP_MD_do_all_sorted(legacy_md_fn,_bio_out);
  }
  iVar7 = 0;
  BIO_printf(_bio_out,"%sProvided:\n",param_1);
  uVar4 = app_get0_libctx();
  EVP_MD_do_all_provided(uVar4,collect_digests,lVar2);
  OPENSSL_sk_sort(lVar2);
  do {
    iVar1 = OPENSSL_sk_num(lVar2);
    if (iVar1 <= iVar7) {
      OPENSSL_sk_pop_free(lVar2,EVP_MD_free);
      return;
    }
    uVar4 = OPENSSL_sk_value(lVar2,iVar7);
    if (select_name == 0) {
LAB_0010038b:
      lVar3 = OPENSSL_sk_new(&name_cmp);
      if (lVar3 != 0) {
        iVar1 = EVP_MD_names_do_all(uVar4,&collect_names,lVar3);
        if (iVar1 != 0) {
          BIO_printf(_bio_out,"  ");
          print_names(_bio_out,lVar3);
          uVar5 = EVP_MD_get0_provider(uVar4);
          uVar5 = OSSL_PROVIDER_get0_name(uVar5);
          BIO_printf(_bio_out," @ %s\n",uVar5);
          if (verbose != 0) {
            lVar6 = EVP_MD_get0_description(uVar4);
            if (lVar6 != 0) {
              BIO_printf(_bio_out,"    description: %s\n",lVar6);
            }
            uVar5 = EVP_MD_gettable_params(uVar4);
            print_param_types("retrievable algorithm parameters",uVar5,4);
            uVar5 = EVP_MD_gettable_ctx_params(uVar4);
            print_param_types("retrievable operation parameters",uVar5,4);
            uVar4 = EVP_MD_settable_ctx_params(uVar4);
            print_param_types("settable operation parameters",uVar4,4);
          }
        }
      }
      OPENSSL_sk_free(lVar3);
    }
    else {
      iVar1 = EVP_MD_is_a(uVar4);
      if (iVar1 != 0) goto LAB_0010038b;
    }
    iVar7 = iVar7 + 1;
  } while( true );
}



void kdf_cmp(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char *__s2;
  char *__s1;
  
  uVar1 = EVP_KDF_get0_provider(*param_2);
  __s2 = (char *)OSSL_PROVIDER_get0_name(uVar1);
  uVar1 = EVP_KDF_get0_provider(*param_1);
  __s1 = (char *)OSSL_PROVIDER_get0_name(uVar1);
  strcmp(__s1,__s2);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void list_kdfs(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  
  lVar2 = OPENSSL_sk_new(kdf_cmp);
  if (lVar2 == 0) {
    BIO_printf(_bio_err,"ERROR: Memory allocation\n");
    return;
  }
  iVar7 = 0;
  BIO_printf(_bio_out,"Provided KDFs and PDFs:\n");
  uVar3 = app_get0_libctx();
  EVP_KDF_do_all_provided(uVar3,collect_kdfs,lVar2);
  OPENSSL_sk_sort(lVar2);
  do {
    iVar1 = OPENSSL_sk_num(lVar2);
    if (iVar1 <= iVar7) {
      OPENSSL_sk_pop_free(lVar2,EVP_KDF_free);
      return;
    }
    uVar3 = OPENSSL_sk_value(lVar2,iVar7);
    if (select_name == 0) {
LAB_00100603:
      lVar4 = OPENSSL_sk_new(&name_cmp);
      if (lVar4 != 0) {
        iVar1 = EVP_KDF_names_do_all(uVar3,&collect_names,lVar4);
        if (iVar1 != 0) {
          BIO_printf(_bio_out,"  ");
          print_names(_bio_out,lVar4);
          uVar5 = EVP_KDF_get0_provider(uVar3);
          uVar5 = OSSL_PROVIDER_get0_name(uVar5);
          BIO_printf(_bio_out," @ %s\n",uVar5);
          if (verbose != 0) {
            lVar6 = EVP_KDF_get0_description(uVar3);
            if (lVar6 != 0) {
              BIO_printf(_bio_out,"    description: %s\n",lVar6);
            }
            uVar5 = EVP_KDF_gettable_params(uVar3);
            print_param_types("retrievable algorithm parameters",uVar5,4);
            uVar5 = EVP_KDF_gettable_ctx_params(uVar3);
            print_param_types("retrievable operation parameters",uVar5,4);
            uVar3 = EVP_KDF_settable_ctx_params(uVar3);
            print_param_types("settable operation parameters",uVar3,4);
          }
        }
      }
      OPENSSL_sk_free(lVar4);
    }
    else {
      iVar1 = EVP_KDF_is_a(uVar3);
      if (iVar1 != 0) goto LAB_00100603;
    }
    iVar7 = iVar7 + 1;
  } while( true );
}



void mac_cmp(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char *__s2;
  char *__s1;
  
  uVar1 = EVP_MAC_get0_provider(*param_2);
  __s2 = (char *)OSSL_PROVIDER_get0_name(uVar1);
  uVar1 = EVP_MAC_get0_provider(*param_1);
  __s1 = (char *)OSSL_PROVIDER_get0_name(uVar1);
  strcmp(__s1,__s2);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void list_macs(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  
  lVar2 = OPENSSL_sk_new(mac_cmp);
  if (lVar2 == 0) {
    BIO_printf(_bio_err,"ERROR: Memory allocation\n");
    return;
  }
  iVar7 = 0;
  BIO_printf(_bio_out,"Provided MACs:\n");
  uVar3 = app_get0_libctx();
  EVP_MAC_do_all_provided(uVar3,collect_macs,lVar2);
  OPENSSL_sk_sort(lVar2);
  do {
    iVar1 = OPENSSL_sk_num(lVar2);
    if (iVar1 <= iVar7) {
      OPENSSL_sk_pop_free(lVar2,EVP_MAC_free);
      return;
    }
    uVar3 = OPENSSL_sk_value(lVar2,iVar7);
    if (select_name == 0) {
LAB_00100853:
      lVar4 = OPENSSL_sk_new(&name_cmp);
      if (lVar4 != 0) {
        iVar1 = EVP_MAC_names_do_all(uVar3,&collect_names,lVar4);
        if (iVar1 != 0) {
          BIO_printf(_bio_out,"  ");
          print_names(_bio_out,lVar4);
          uVar5 = EVP_MAC_get0_provider(uVar3);
          uVar5 = OSSL_PROVIDER_get0_name(uVar5);
          BIO_printf(_bio_out," @ %s\n",uVar5);
          if (verbose != 0) {
            lVar6 = EVP_MAC_get0_description(uVar3);
            if (lVar6 != 0) {
              BIO_printf(_bio_out,"    description: %s\n",lVar6);
            }
            uVar5 = EVP_MAC_gettable_params(uVar3);
            print_param_types("retrievable algorithm parameters",uVar5,4);
            uVar5 = EVP_MAC_gettable_ctx_params(uVar3);
            print_param_types("retrievable operation parameters",uVar5,4);
            uVar3 = EVP_MAC_settable_ctx_params(uVar3);
            print_param_types("settable operation parameters",uVar3,4);
          }
        }
      }
      OPENSSL_sk_free(lVar4);
    }
    else {
      iVar1 = EVP_MAC_is_a(uVar3);
      if (iVar1 != 0) goto LAB_00100853;
    }
    iVar7 = iVar7 + 1;
  } while( true );
}



void cipher_cmp(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char *__s2;
  char *__s1;
  
  uVar1 = EVP_CIPHER_get0_provider(*param_2);
  __s2 = (char *)OSSL_PROVIDER_get0_name(uVar1);
  uVar1 = EVP_CIPHER_get0_provider(*param_1);
  __s1 = (char *)OSSL_PROVIDER_get0_name(uVar1);
  strcmp(__s1,__s2);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void list_ciphers(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  
  lVar2 = OPENSSL_sk_new(cipher_cmp);
  if (lVar2 == 0) {
    BIO_printf(_bio_err,"ERROR: Memory allocation\n");
    return;
  }
  lVar3 = app_get0_propq();
  if (lVar3 == 0) {
    BIO_printf(_bio_out,"%sLegacy:\n",param_1);
    EVP_CIPHER_do_all_sorted(legacy_cipher_fn,_bio_out);
  }
  iVar7 = 0;
  BIO_printf(_bio_out,"%sProvided:\n",param_1);
  uVar4 = app_get0_libctx();
  EVP_CIPHER_do_all_provided(uVar4,collect_ciphers,lVar2);
  OPENSSL_sk_sort(lVar2);
  do {
    iVar1 = OPENSSL_sk_num(lVar2);
    if (iVar1 <= iVar7) {
      OPENSSL_sk_pop_free(lVar2,EVP_CIPHER_free);
      return;
    }
    uVar4 = OPENSSL_sk_value(lVar2,iVar7);
    if (select_name == 0) {
LAB_00100abb:
      lVar3 = OPENSSL_sk_new(&name_cmp);
      if (lVar3 != 0) {
        iVar1 = EVP_CIPHER_names_do_all(uVar4,&collect_names,lVar3);
        if (iVar1 != 0) {
          BIO_printf(_bio_out,"  ");
          print_names(_bio_out,lVar3);
          uVar5 = EVP_CIPHER_get0_provider(uVar4);
          uVar5 = OSSL_PROVIDER_get0_name(uVar5);
          BIO_printf(_bio_out," @ %s\n",uVar5);
          if (verbose != 0) {
            lVar6 = EVP_CIPHER_get0_description(uVar4);
            if (lVar6 != 0) {
              BIO_printf(_bio_out,"    description: %s\n",lVar6);
            }
            uVar5 = EVP_CIPHER_gettable_params(uVar4);
            print_param_types("retrievable algorithm parameters",uVar5,4);
            uVar5 = EVP_CIPHER_gettable_ctx_params(uVar4);
            print_param_types("retrievable operation parameters",uVar5,4);
            uVar4 = EVP_CIPHER_settable_ctx_params(uVar4);
            print_param_types("settable operation parameters",uVar4,4);
          }
        }
      }
      OPENSSL_sk_free(lVar3);
    }
    else {
      iVar1 = EVP_CIPHER_is_a(uVar4);
      if (iVar1 != 0) goto LAB_00100abb;
    }
    iVar7 = iVar7 + 1;
  } while( true );
}



void encoder_cmp(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char *__s2;
  char *__s1;
  
  uVar1 = OSSL_ENCODER_get0_provider(*param_2);
  __s2 = (char *)OSSL_PROVIDER_get0_name(uVar1);
  uVar1 = OSSL_ENCODER_get0_provider(*param_1);
  __s1 = (char *)OSSL_PROVIDER_get0_name(uVar1);
  strcmp(__s1,__s2);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void list_encoders(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  int iVar8;
  
  lVar2 = OPENSSL_sk_new(encoder_cmp);
  if (lVar2 == 0) {
    BIO_printf(_bio_err,"ERROR: Memory allocation\n");
    return;
  }
  iVar8 = 0;
  BIO_printf(_bio_out,"Provided ENCODERs:\n");
  uVar3 = app_get0_libctx();
  OSSL_ENCODER_do_all_provided(uVar3,collect_encoders,lVar2);
  OPENSSL_sk_sort(lVar2);
  do {
    iVar1 = OPENSSL_sk_num(lVar2);
    if (iVar1 <= iVar8) {
      OPENSSL_sk_pop_free(lVar2,OSSL_ENCODER_free);
      return;
    }
    uVar3 = OPENSSL_sk_value(lVar2,iVar8);
    if (select_name == 0) {
LAB_00100d33:
      lVar4 = OPENSSL_sk_new(&name_cmp);
      if (lVar4 != 0) {
        iVar1 = OSSL_ENCODER_names_do_all(uVar3,&collect_names,lVar4);
        if (iVar1 != 0) {
          BIO_printf(_bio_out,"  ");
          print_names(_bio_out,lVar4);
          uVar5 = OSSL_ENCODER_get0_properties(uVar3);
          uVar6 = OSSL_ENCODER_get0_provider(uVar3);
          uVar6 = OSSL_PROVIDER_get0_name(uVar6);
          BIO_printf(_bio_out," @ %s (%s)\n",uVar6,uVar5);
          if (verbose != 0) {
            lVar7 = OSSL_ENCODER_get0_description(uVar3);
            if (lVar7 != 0) {
              BIO_printf(_bio_out,"    description: %s\n",lVar7);
            }
            uVar3 = OSSL_ENCODER_settable_ctx_params(uVar3);
            print_param_types("settable operation parameters",uVar3,4);
          }
        }
      }
      OPENSSL_sk_free(lVar4);
    }
    else {
      iVar1 = OSSL_ENCODER_is_a(uVar3);
      if (iVar1 != 0) goto LAB_00100d33;
    }
    iVar8 = iVar8 + 1;
  } while( true );
}



void decoder_cmp(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char *__s2;
  char *__s1;
  
  uVar1 = OSSL_DECODER_get0_provider(*param_2);
  __s2 = (char *)OSSL_PROVIDER_get0_name(uVar1);
  uVar1 = OSSL_DECODER_get0_provider(*param_1);
  __s1 = (char *)OSSL_PROVIDER_get0_name(uVar1);
  strcmp(__s1,__s2);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void list_decoders(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  int iVar8;
  
  lVar2 = OPENSSL_sk_new(decoder_cmp);
  if (lVar2 == 0) {
    BIO_printf(_bio_err,"ERROR: Memory allocation\n");
    return;
  }
  iVar8 = 0;
  BIO_printf(_bio_out,"Provided DECODERs:\n");
  uVar3 = app_get0_libctx();
  OSSL_DECODER_do_all_provided(uVar3,collect_decoders,lVar2);
  OPENSSL_sk_sort(lVar2);
  do {
    iVar1 = OPENSSL_sk_num(lVar2);
    if (iVar1 <= iVar8) {
      OPENSSL_sk_pop_free(lVar2,OSSL_DECODER_free);
      return;
    }
    uVar3 = OPENSSL_sk_value(lVar2,iVar8);
    if (select_name == 0) {
LAB_00100f63:
      lVar4 = OPENSSL_sk_new(&name_cmp);
      if (lVar4 != 0) {
        iVar1 = OSSL_DECODER_names_do_all(uVar3,&collect_names,lVar4);
        if (iVar1 != 0) {
          BIO_printf(_bio_out,"  ");
          print_names(_bio_out,lVar4);
          uVar5 = OSSL_DECODER_get0_properties(uVar3);
          uVar6 = OSSL_DECODER_get0_provider(uVar3);
          uVar6 = OSSL_PROVIDER_get0_name(uVar6);
          BIO_printf(_bio_out," @ %s (%s)\n",uVar6,uVar5);
          if (verbose != 0) {
            lVar7 = OSSL_DECODER_get0_description(uVar3);
            if (lVar7 != 0) {
              BIO_printf(_bio_out,"    description: %s\n",lVar7);
            }
            uVar3 = OSSL_DECODER_settable_ctx_params(uVar3);
            print_param_types("settable operation parameters",uVar3,4);
          }
        }
      }
      OPENSSL_sk_free(lVar4);
    }
    else {
      iVar1 = OSSL_DECODER_is_a(uVar3);
      if (iVar1 != 0) goto LAB_00100f63;
    }
    iVar8 = iVar8 + 1;
  } while( true );
}



void keymanager_cmp(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char *__s2;
  char *__s1;
  
  uVar1 = EVP_KEYMGMT_get0_provider(*param_2);
  __s2 = (char *)OSSL_PROVIDER_get0_name(uVar1);
  uVar1 = EVP_KEYMGMT_get0_provider(*param_1);
  __s1 = (char *)OSSL_PROVIDER_get0_name(uVar1);
  strcmp(__s1,__s2);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void list_keymanagers(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  
  iVar7 = 0;
  uVar2 = OPENSSL_sk_new(keymanager_cmp);
  uVar3 = app_get0_libctx();
  EVP_KEYMGMT_do_all_provided(uVar3,collect_keymanagers,uVar2);
  OPENSSL_sk_sort(uVar2);
  do {
    iVar1 = OPENSSL_sk_num(uVar2);
    if (iVar1 <= iVar7) {
      OPENSSL_sk_pop_free(uVar2,EVP_KEYMGMT_free);
      return;
    }
    uVar3 = OPENSSL_sk_value(uVar2,iVar7);
    if (select_name == 0) {
LAB_00101170:
      lVar4 = OPENSSL_sk_new(&name_cmp);
      if (lVar4 != 0) {
        iVar1 = EVP_KEYMGMT_names_do_all(uVar3,&collect_names,lVar4);
        if (iVar1 != 0) {
          lVar5 = EVP_KEYMGMT_get0_description(uVar3);
          BIO_printf(_bio_out,"  Name: ");
          if (lVar5 == 0) {
            uVar6 = OPENSSL_sk_value(lVar4,0);
            BIO_printf(_bio_out,"%s",uVar6);
          }
          else {
            BIO_printf(_bio_out,"%s",lVar5);
          }
          BIO_printf(_bio_out,"\n");
          BIO_printf(_bio_out,"    Type: Provider Algorithm\n");
          BIO_printf(_bio_out,"    IDs: ");
          print_names(_bio_out,lVar4);
          uVar6 = EVP_KEYMGMT_get0_provider(uVar3);
          uVar6 = OSSL_PROVIDER_get0_name(uVar6);
          BIO_printf(_bio_out," @ %s\n",uVar6);
          if (verbose != 0) {
            uVar6 = EVP_KEYMGMT_gen_settable_params(uVar3);
            print_param_types("settable key generation parameters",uVar6,4);
            uVar6 = EVP_KEYMGMT_settable_params(uVar3);
            print_param_types("settable operation parameters",uVar6,4);
            uVar3 = EVP_KEYMGMT_gettable_params(uVar3);
            print_param_types("retrievable operation parameters",uVar3,4);
          }
        }
      }
      OPENSSL_sk_free(lVar4);
    }
    else {
      iVar1 = EVP_KEYMGMT_is_a(uVar3);
      if (iVar1 != 0) goto LAB_00101170;
    }
    iVar7 = iVar7 + 1;
  } while( true );
}



void skeymanager_cmp(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char *__s2;
  char *__s1;
  
  uVar1 = EVP_SKEYMGMT_get0_provider(*param_2);
  __s2 = (char *)OSSL_PROVIDER_get0_name(uVar1);
  uVar1 = EVP_SKEYMGMT_get0_provider(*param_1);
  __s1 = (char *)OSSL_PROVIDER_get0_name(uVar1);
  strcmp(__s1,__s2);
  return;
}



void signature_cmp(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char *__s2;
  char *__s1;
  
  uVar1 = EVP_SIGNATURE_get0_provider(*param_2);
  __s2 = (char *)OSSL_PROVIDER_get0_name(uVar1);
  uVar1 = EVP_SIGNATURE_get0_provider(*param_1);
  __s1 = (char *)OSSL_PROVIDER_get0_name(uVar1);
  strcmp(__s1,__s2);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void list_signatures(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = 0;
  iVar7 = 0;
  uVar2 = OPENSSL_sk_new(signature_cmp);
  uVar3 = app_get0_libctx();
  EVP_SIGNATURE_do_all_provided(uVar3,collect_signatures,uVar2);
  OPENSSL_sk_sort(uVar2);
  do {
    iVar1 = OPENSSL_sk_num(uVar2);
    if (iVar1 <= iVar7) {
      OPENSSL_sk_pop_free(uVar2,EVP_SIGNATURE_free);
      if (iVar8 != 0) {
        return;
      }
      BIO_printf(_bio_out," -\n");
      return;
    }
    uVar3 = OPENSSL_sk_value(uVar2,iVar7);
    if (select_name == 0) {
LAB_00101430:
      lVar4 = OPENSSL_sk_new(&name_cmp);
      if (lVar4 != 0) {
        iVar1 = EVP_SIGNATURE_names_do_all(uVar3,&collect_names,lVar4);
        if (iVar1 != 0) {
          BIO_printf(_bio_out,"  ");
          print_names(_bio_out,lVar4);
          uVar5 = EVP_SIGNATURE_get0_provider(uVar3);
          uVar5 = OSSL_PROVIDER_get0_name(uVar5);
          BIO_printf(_bio_out," @ %s\n",uVar5);
          if (verbose != 0) {
            lVar6 = EVP_SIGNATURE_get0_description(uVar3);
            if (lVar6 != 0) {
              BIO_printf(_bio_out,"    description: %s\n",lVar6);
            }
            uVar5 = EVP_SIGNATURE_settable_ctx_params(uVar3);
            print_param_types("settable operation parameters",uVar5,4);
            uVar3 = EVP_SIGNATURE_gettable_ctx_params(uVar3);
            print_param_types("retrievable operation parameters",uVar3,4);
          }
          iVar8 = iVar8 + 1;
        }
      }
      OPENSSL_sk_free(lVar4);
    }
    else {
      iVar1 = EVP_SIGNATURE_is_a(uVar3);
      if (iVar1 != 0) goto LAB_00101430;
    }
    iVar7 = iVar7 + 1;
  } while( true );
}



undefined8 list_tls_sigalg_caps(undefined8 param_1,undefined8 param_2)

{
  OSSL_PROVIDER_get_capabilities(param_1,"TLS-SIGALG",list_provider_tls_sigalgs,param_2);
  return 1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 list_provider_tls_sigalgs(undefined8 param_1,int *param_2)

{
  long lVar1;
  
  lVar1 = OSSL_PARAM_locate_const(param_1,"tls-sigalg-iana-name");
  if ((lVar1 != 0) && (*(int *)(lVar1 + 8) == 4)) {
    if (0 < *param_2) {
      BIO_printf(_bio_out,":");
    }
    BIO_printf(_bio_out,"%s",*(undefined8 *)(lVar1 + 0x10));
    *param_2 = 2;
    return 1;
  }
  return 1;
}



void asymcipher_cmp(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char *__s2;
  char *__s1;
  
  uVar1 = EVP_ASYM_CIPHER_get0_provider(*param_2);
  __s2 = (char *)OSSL_PROVIDER_get0_name(uVar1);
  uVar1 = EVP_ASYM_CIPHER_get0_provider(*param_1);
  __s1 = (char *)OSSL_PROVIDER_get0_name(uVar1);
  strcmp(__s1,__s2);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void list_asymciphers(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = 0;
  iVar7 = 0;
  uVar2 = OPENSSL_sk_new(asymcipher_cmp);
  uVar3 = app_get0_libctx();
  EVP_ASYM_CIPHER_do_all_provided(uVar3,collect_asymciph,uVar2);
  OPENSSL_sk_sort(uVar2);
  do {
    iVar1 = OPENSSL_sk_num(uVar2);
    if (iVar1 <= iVar7) {
      OPENSSL_sk_pop_free(uVar2,EVP_ASYM_CIPHER_free);
      if (iVar8 != 0) {
        return;
      }
      BIO_printf(_bio_out," -\n");
      return;
    }
    uVar3 = OPENSSL_sk_value(uVar2,iVar7);
    if (select_name == 0) {
LAB_00101710:
      lVar4 = OPENSSL_sk_new(&name_cmp);
      if (lVar4 != 0) {
        iVar1 = EVP_ASYM_CIPHER_names_do_all(uVar3,&collect_names,lVar4);
        if (iVar1 != 0) {
          BIO_printf(_bio_out,"  ");
          print_names(_bio_out,lVar4);
          uVar5 = EVP_ASYM_CIPHER_get0_provider(uVar3);
          uVar5 = OSSL_PROVIDER_get0_name(uVar5);
          BIO_printf(_bio_out," @ %s\n",uVar5);
          if (verbose != 0) {
            lVar6 = EVP_ASYM_CIPHER_get0_description(uVar3);
            if (lVar6 != 0) {
              BIO_printf(_bio_out,"    description: %s\n",lVar6);
            }
            uVar5 = EVP_ASYM_CIPHER_settable_ctx_params(uVar3);
            print_param_types("settable operation parameters",uVar5,4);
            uVar3 = EVP_ASYM_CIPHER_gettable_ctx_params(uVar3);
            print_param_types("retrievable operation parameters",uVar3,4);
          }
          iVar8 = iVar8 + 1;
        }
      }
      OPENSSL_sk_free(lVar4);
    }
    else {
      iVar1 = EVP_ASYM_CIPHER_is_a(uVar3);
      if (iVar1 != 0) goto LAB_00101710;
    }
    iVar7 = iVar7 + 1;
  } while( true );
}



void kex_cmp(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char *__s2;
  char *__s1;
  
  uVar1 = EVP_KEYEXCH_get0_provider(*param_2);
  __s2 = (char *)OSSL_PROVIDER_get0_name(uVar1);
  uVar1 = EVP_KEYEXCH_get0_provider(*param_1);
  __s1 = (char *)OSSL_PROVIDER_get0_name(uVar1);
  strcmp(__s1,__s2);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void list_keyexchanges(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = 0;
  iVar7 = 0;
  uVar2 = OPENSSL_sk_new(kex_cmp);
  uVar3 = app_get0_libctx();
  EVP_KEYEXCH_do_all_provided(uVar3,collect_kex,uVar2);
  OPENSSL_sk_sort(uVar2);
  do {
    iVar1 = OPENSSL_sk_num(uVar2);
    if (iVar1 <= iVar7) {
      OPENSSL_sk_pop_free(uVar2,EVP_KEYEXCH_free);
      if (iVar8 != 0) {
        return;
      }
      BIO_printf(_bio_out," -\n");
      return;
    }
    uVar3 = OPENSSL_sk_value(uVar2,iVar7);
    if (select_name == 0) {
LAB_00101930:
      lVar4 = OPENSSL_sk_new(&name_cmp);
      if (lVar4 != 0) {
        iVar1 = EVP_KEYEXCH_names_do_all(uVar3,&collect_names,lVar4);
        if (iVar1 != 0) {
          BIO_printf(_bio_out,"  ");
          print_names(_bio_out,lVar4);
          uVar5 = EVP_KEYEXCH_get0_provider(uVar3);
          uVar5 = OSSL_PROVIDER_get0_name(uVar5);
          BIO_printf(_bio_out," @ %s\n",uVar5);
          if (verbose != 0) {
            lVar6 = EVP_KEYEXCH_get0_description(uVar3);
            if (lVar6 != 0) {
              BIO_printf(_bio_out,"    description: %s\n",lVar6);
            }
            uVar5 = EVP_KEYEXCH_settable_ctx_params(uVar3);
            print_param_types("settable operation parameters",uVar5,4);
            uVar3 = EVP_KEYEXCH_gettable_ctx_params(uVar3);
            print_param_types("retrievable operation parameters",uVar3,4);
          }
          iVar8 = iVar8 + 1;
        }
      }
      OPENSSL_sk_free(lVar4);
    }
    else {
      iVar1 = EVP_KEYEXCH_is_a(uVar3);
      if (iVar1 != 0) goto LAB_00101930;
    }
    iVar7 = iVar7 + 1;
  } while( true );
}



void kem_cmp(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char *__s2;
  char *__s1;
  
  uVar1 = EVP_KEM_get0_provider(*param_2);
  __s2 = (char *)OSSL_PROVIDER_get0_name(uVar1);
  uVar1 = EVP_KEM_get0_provider(*param_1);
  __s1 = (char *)OSSL_PROVIDER_get0_name(uVar1);
  strcmp(__s1,__s2);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void list_kems(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = 0;
  iVar7 = 0;
  uVar2 = OPENSSL_sk_new(kem_cmp);
  uVar3 = app_get0_libctx();
  EVP_KEM_do_all_provided(uVar3,collect_kem,uVar2);
  OPENSSL_sk_sort(uVar2);
  do {
    iVar1 = OPENSSL_sk_num(uVar2);
    if (iVar1 <= iVar7) {
      OPENSSL_sk_pop_free(uVar2,EVP_KEM_free);
      if (iVar8 != 0) {
        return;
      }
      BIO_printf(_bio_out," -\n");
      return;
    }
    uVar3 = OPENSSL_sk_value(uVar2,iVar7);
    if (select_name == 0) {
LAB_00101b50:
      lVar4 = OPENSSL_sk_new(&name_cmp);
      if (lVar4 != 0) {
        iVar1 = EVP_KEM_names_do_all(uVar3,&collect_names,lVar4);
        if (iVar1 != 0) {
          BIO_printf(_bio_out,"  ");
          print_names(_bio_out,lVar4);
          uVar5 = EVP_KEM_get0_provider(uVar3);
          uVar5 = OSSL_PROVIDER_get0_name(uVar5);
          BIO_printf(_bio_out," @ %s\n",uVar5);
          if (verbose != 0) {
            lVar6 = EVP_KEM_get0_description(uVar3);
            if (lVar6 != 0) {
              BIO_printf(_bio_out,"    description: %s\n",lVar6);
            }
            uVar5 = EVP_KEM_settable_ctx_params(uVar3);
            print_param_types("settable operation parameters",uVar5,4);
            uVar3 = EVP_KEM_gettable_ctx_params(uVar3);
            print_param_types("retrievable operation parameters",uVar3,4);
          }
          iVar8 = iVar8 + 1;
        }
      }
      OPENSSL_sk_free(lVar4);
    }
    else {
      iVar1 = EVP_KEM_is_a(uVar3);
      if (iVar1 != 0) goto LAB_00101b50;
    }
    iVar7 = iVar7 + 1;
  } while( true );
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void list_store_loaders(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  
  lVar2 = OPENSSL_sk_new(store_cmp);
  if (lVar2 == 0) {
    BIO_printf(_bio_err,"ERROR: Memory allocation\n");
    return;
  }
  iVar5 = 0;
  BIO_printf(_bio_out,"Provided STORE LOADERs:\n");
  uVar3 = app_get0_libctx();
  OSSL_STORE_LOADER_do_all_provided(uVar3,collect_store_loaders,lVar2);
  OPENSSL_sk_sort(lVar2);
  do {
    iVar1 = OPENSSL_sk_num(lVar2);
    if (iVar1 <= iVar5) {
      OPENSSL_sk_pop_free(lVar2,OSSL_STORE_LOADER_free);
      return;
    }
    uVar3 = OPENSSL_sk_value(lVar2,iVar5);
    if (select_name == 0) {
LAB_00101d40:
      lVar4 = OPENSSL_sk_new(&name_cmp);
      if (lVar4 != 0) {
        iVar1 = OSSL_STORE_LOADER_names_do_all(uVar3,&collect_names,lVar4);
        if (iVar1 != 0) {
          BIO_printf(_bio_out,"  ");
          print_names(_bio_out,lVar4);
          uVar3 = OSSL_STORE_LOADER_get0_provider(uVar3);
          uVar3 = OSSL_PROVIDER_get0_name(uVar3);
          BIO_printf(_bio_out," @ %s\n",uVar3);
        }
      }
      OPENSSL_sk_free(lVar4);
    }
    else {
      iVar1 = OSSL_STORE_LOADER_is_a(uVar3);
      if (iVar1 != 0) goto LAB_00101d40;
    }
    iVar5 = iVar5 + 1;
  } while( true );
}



void store_cmp(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char *__s2;
  char *__s1;
  
  uVar1 = OSSL_STORE_LOADER_get0_provider(*param_2);
  __s2 = (char *)OSSL_PROVIDER_get0_name(uVar1);
  uVar1 = OSSL_STORE_LOADER_get0_provider(*param_1);
  __s1 = (char *)OSSL_PROVIDER_get0_name(uVar1);
  strcmp(__s1,__s2);
  return;
}



void collect_rands(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  
  uVar1 = app_get0_propq();
  uVar2 = app_get0_libctx();
  uVar3 = EVP_RAND_get0_name(param_1);
  ERR_set_mark();
  lVar4 = EVP_RAND_fetch(uVar2,uVar3,uVar1);
  ERR_pop_to_mark();
  if (lVar4 != 0) {
    EVP_RAND_free(lVar4);
    iVar5 = EVP_RAND_up_ref(param_1);
    if (iVar5 != 0) {
      iVar5 = OPENSSL_sk_push(param_2,param_1);
      if (iVar5 < 1) {
        EVP_RAND_free(param_1);
        return;
      }
    }
  }
  return;
}



void legacy_cipher_fn(long param_1,char *param_2,char *param_3,BIO *param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  if (select_name != 0) {
    if (param_1 != 0) {
      uVar2 = EVP_CIPHER_get0_name();
      iVar1 = OPENSSL_strcasecmp(select_name,uVar2);
      if (iVar1 == 0) goto LAB_00101f17;
    }
    return;
  }
  if (param_1 == 0) {
    if (param_2 == (char *)0x0) {
      param_2 = "<undefined>";
    }
    if (param_3 == (char *)0x0) {
      param_3 = "<undefined>";
    }
    BIO_printf(param_4,"  %s => %s\n",param_2,param_3);
    return;
  }
LAB_00101f17:
  uVar2 = EVP_CIPHER_get0_name(param_1);
  BIO_printf(param_4,"  %s\n",uVar2);
  return;
}



void collect_digests(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  
  uVar1 = app_get0_propq();
  uVar2 = app_get0_libctx();
  uVar3 = EVP_MD_get0_name(param_1);
  ERR_set_mark();
  lVar4 = EVP_MD_fetch(uVar2,uVar3,uVar1);
  ERR_pop_to_mark();
  if (lVar4 != 0) {
    EVP_MD_free(lVar4);
    iVar5 = EVP_MD_up_ref(param_1);
    if (iVar5 != 0) {
      iVar5 = OPENSSL_sk_push(param_2,param_1);
      if (iVar5 < 1) {
        EVP_MD_free(param_1);
        return;
      }
    }
  }
  return;
}



void collect_kdfs(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  
  uVar1 = app_get0_propq();
  uVar2 = app_get0_libctx();
  uVar3 = EVP_KDF_get0_name(param_1);
  ERR_set_mark();
  lVar4 = EVP_KDF_fetch(uVar2,uVar3,uVar1);
  ERR_pop_to_mark();
  if (lVar4 != 0) {
    EVP_KDF_free(lVar4);
    iVar5 = EVP_KDF_up_ref(param_1);
    if (iVar5 != 0) {
      iVar5 = OPENSSL_sk_push(param_2,param_1);
      if (iVar5 < 1) {
        EVP_KDF_free(param_1);
        return;
      }
    }
  }
  return;
}



void collect_macs(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  
  uVar1 = app_get0_propq();
  uVar2 = app_get0_libctx();
  uVar3 = EVP_MAC_get0_name(param_1);
  ERR_set_mark();
  lVar4 = EVP_MAC_fetch(uVar2,uVar3,uVar1);
  ERR_pop_to_mark();
  if (lVar4 != 0) {
    EVP_MAC_free(lVar4);
    iVar5 = OPENSSL_sk_push(param_2,param_1);
    if (0 < iVar5) {
      EVP_MAC_up_ref(param_1);
      return;
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void list_type(int param_1,int param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  int iVar6;
  long in_FS_OFFSET;
  ulong local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  if (param_2 == 0) {
    piVar5 = (int *)&functions;
    calculate_columns(&functions,&local_48);
    if (_EVP_CIPHER_fetch != 0) {
      iVar6 = 0;
      lVar4 = _EVP_CIPHER_fetch;
      if (param_1 == 2) {
        iVar6 = 0;
        do {
          if (*piVar5 == 2) {
            lVar1 = app_get0_propq();
            ERR_set_mark();
            uVar2 = app_get0_libctx();
            lVar3 = EVP_MD_fetch(uVar2,lVar4,lVar1);
            ERR_pop_to_mark();
            if (lVar3 == 0) {
              if ((lVar1 != 0) || (lVar4 = get_digest_from_engine(lVar4), lVar4 == 0))
              goto LAB_001023e0;
            }
            else {
              EVP_MD_free(lVar3);
            }
            if ((iVar6 % (int)local_48 == 0) && (0 < iVar6)) {
              BIO_printf(_bio_out,"\n");
            }
            iVar6 = iVar6 + 1;
            BIO_printf(_bio_out,"%-*s",local_48 >> 0x20,*(undefined8 *)(piVar5 + 2));
          }
LAB_001023e0:
          lVar4 = *(long *)(piVar5 + 0xe);
          piVar5 = piVar5 + 0xc;
        } while (lVar4 != 0);
      }
      else {
        do {
          while (param_1 != *piVar5) {
LAB_001022f0:
            lVar4 = *(long *)(piVar5 + 0xe);
            piVar5 = piVar5 + 0xc;
            if (lVar4 == 0) goto LAB_00102348;
          }
          if (param_1 == 3) {
            lVar1 = app_get0_propq();
            ERR_set_mark();
            uVar2 = app_get0_libctx();
            lVar3 = EVP_CIPHER_fetch(uVar2,lVar4,lVar1);
            ERR_pop_to_mark();
            if (lVar3 == 0) {
              if ((lVar1 != 0) || (lVar4 = get_cipher_from_engine(lVar4), lVar4 == 0))
              goto LAB_001022f0;
            }
            else {
              EVP_CIPHER_free(lVar3);
            }
          }
          if ((iVar6 % (int)local_48 == 0) && (0 < iVar6)) {
            BIO_printf(_bio_out,"\n");
          }
          iVar6 = iVar6 + 1;
          BIO_printf(_bio_out,"%-*s",local_48 >> 0x20,*(undefined8 *)(piVar5 + 2));
          lVar4 = *(long *)(piVar5 + 0xe);
          piVar5 = piVar5 + 0xc;
        } while (lVar4 != 0);
      }
    }
LAB_00102348:
    BIO_printf(_bio_out,"\n\n");
  }
  else {
    piVar5 = (int *)&functions;
    lVar4 = _EVP_CIPHER_fetch;
    if (_EVP_CIPHER_fetch != 0) {
      do {
        if (*piVar5 != param_1) goto LAB_001021a4;
        if (param_1 == 2) {
          lVar1 = app_get0_propq();
          ERR_set_mark();
          uVar2 = app_get0_libctx();
          lVar3 = EVP_MD_fetch(uVar2,lVar4,lVar1);
          ERR_pop_to_mark();
          if (lVar3 != 0) {
            EVP_MD_free(lVar3);
            goto LAB_0010218f;
          }
          if (lVar1 == 0) {
            lVar4 = get_digest_from_engine(lVar4);
joined_r0x0010226d:
            if (lVar4 != 0) goto LAB_0010218f;
          }
        }
        else {
          if (param_1 == 3) {
            lVar1 = app_get0_propq();
            ERR_set_mark();
            uVar2 = app_get0_libctx();
            lVar3 = EVP_CIPHER_fetch(uVar2,lVar4,lVar1);
            ERR_pop_to_mark();
            if (lVar3 == 0) {
              if (lVar1 == 0) {
                lVar4 = get_cipher_from_engine(lVar4);
                goto joined_r0x0010226d;
              }
              goto LAB_001021a4;
            }
            EVP_CIPHER_free(lVar3);
          }
LAB_0010218f:
          BIO_printf(_bio_out,"%s\n",*(undefined8 *)(piVar5 + 2));
        }
LAB_001021a4:
        lVar4 = *(long *)(piVar5 + 0xe);
        piVar5 = piVar5 + 0xc;
      } while (lVar4 != 0);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void collect_ciphers(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  
  uVar1 = app_get0_propq();
  uVar2 = app_get0_libctx();
  uVar3 = EVP_CIPHER_get0_name(param_1);
  ERR_set_mark();
  lVar4 = EVP_CIPHER_fetch(uVar2,uVar3,uVar1);
  ERR_pop_to_mark();
  if (lVar4 != 0) {
    EVP_CIPHER_free(lVar4);
    iVar5 = EVP_CIPHER_up_ref(param_1);
    if (iVar5 != 0) {
      iVar5 = OPENSSL_sk_push(param_2,param_1);
      if (iVar5 < 1) {
        EVP_CIPHER_free(param_1);
        return;
      }
    }
  }
  return;
}



void collect_encoders(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  
  uVar1 = app_get0_propq();
  uVar2 = app_get0_libctx();
  uVar3 = OSSL_ENCODER_get0_name(param_1);
  ERR_set_mark();
  lVar4 = OSSL_ENCODER_fetch(uVar2,uVar3,uVar1);
  ERR_pop_to_mark();
  if (lVar4 != 0) {
    OSSL_ENCODER_free(lVar4);
    iVar5 = OSSL_ENCODER_up_ref(param_1);
    if (iVar5 != 0) {
      iVar5 = OPENSSL_sk_push(param_2,param_1);
      if (iVar5 < 1) {
        OSSL_ENCODER_free(param_1);
        return;
      }
    }
  }
  return;
}



void collect_decoders(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  
  uVar1 = app_get0_propq();
  uVar2 = app_get0_libctx();
  uVar3 = OSSL_DECODER_get0_name(param_1);
  ERR_set_mark();
  lVar4 = OSSL_DECODER_fetch(uVar2,uVar3,uVar1);
  ERR_pop_to_mark();
  if (lVar4 != 0) {
    OSSL_DECODER_free(lVar4);
    iVar5 = OSSL_DECODER_up_ref(param_1);
    if (iVar5 != 0) {
      iVar5 = OPENSSL_sk_push(param_2,param_1);
      if (iVar5 < 1) {
        OSSL_DECODER_free(param_1);
        return;
      }
    }
  }
  return;
}



void collect_keymanagers(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  
  uVar1 = app_get0_propq();
  uVar2 = app_get0_libctx();
  uVar3 = EVP_KEYMGMT_get0_name(param_1);
  ERR_set_mark();
  lVar4 = EVP_KEYMGMT_fetch(uVar2,uVar3,uVar1);
  ERR_pop_to_mark();
  if (lVar4 != 0) {
    EVP_KEYMGMT_free(lVar4);
    iVar5 = EVP_KEYMGMT_up_ref(param_1);
    if (iVar5 != 0) {
      iVar5 = OPENSSL_sk_push(param_2,param_1);
      if (iVar5 < 1) {
        EVP_KEYMGMT_free(param_1);
        return;
      }
    }
  }
  return;
}



void collect_skeymanagers(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  
  uVar1 = app_get0_propq();
  uVar2 = app_get0_libctx();
  uVar3 = EVP_SKEYMGMT_get0_name(param_1);
  ERR_set_mark();
  lVar4 = EVP_SKEYMGMT_fetch(uVar2,uVar3,uVar1);
  ERR_pop_to_mark();
  if (lVar4 != 0) {
    EVP_SKEYMGMT_free(lVar4);
    iVar5 = OPENSSL_sk_push(param_2,param_1);
    if (0 < iVar5) {
      EVP_SKEYMGMT_up_ref(param_1);
      return;
    }
  }
  return;
}



void collect_signatures(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  
  uVar1 = app_get0_propq();
  uVar2 = app_get0_libctx();
  uVar3 = EVP_SIGNATURE_get0_name(param_1);
  ERR_set_mark();
  lVar4 = EVP_SIGNATURE_fetch(uVar2,uVar3,uVar1);
  ERR_pop_to_mark();
  if (lVar4 != 0) {
    EVP_SIGNATURE_free(lVar4);
    iVar5 = EVP_SIGNATURE_up_ref(param_1);
    if (iVar5 != 0) {
      iVar5 = OPENSSL_sk_push(param_2,param_1);
      if (iVar5 < 1) {
        EVP_SIGNATURE_free(param_1);
        return;
      }
    }
  }
  return;
}



void collect_asymciph(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  
  uVar1 = app_get0_propq();
  uVar2 = app_get0_libctx();
  uVar3 = EVP_ASYM_CIPHER_get0_name(param_1);
  ERR_set_mark();
  lVar4 = EVP_ASYM_CIPHER_fetch(uVar2,uVar3,uVar1);
  ERR_pop_to_mark();
  if (lVar4 != 0) {
    EVP_ASYM_CIPHER_free(lVar4);
    iVar5 = EVP_ASYM_CIPHER_up_ref(param_1);
    if (iVar5 != 0) {
      iVar5 = OPENSSL_sk_push(param_2,param_1);
      if (iVar5 < 1) {
        EVP_ASYM_CIPHER_free(param_1);
        return;
      }
    }
  }
  return;
}



void collect_kex(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  
  uVar1 = app_get0_propq();
  uVar2 = app_get0_libctx();
  uVar3 = EVP_KEYEXCH_get0_name(param_1);
  ERR_set_mark();
  lVar4 = EVP_KEYEXCH_fetch(uVar2,uVar3,uVar1);
  ERR_pop_to_mark();
  if (lVar4 != 0) {
    EVP_KEYEXCH_free(lVar4);
    iVar5 = EVP_KEYEXCH_up_ref(param_1);
    if (iVar5 != 0) {
      iVar5 = OPENSSL_sk_push(param_2,param_1);
      if (iVar5 < 1) {
        EVP_KEYEXCH_free(param_1);
        return;
      }
    }
  }
  return;
}



void collect_kem(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  
  uVar1 = app_get0_propq();
  uVar2 = app_get0_libctx();
  uVar3 = EVP_KEM_get0_name(param_1);
  ERR_set_mark();
  lVar4 = EVP_KEM_fetch(uVar2,uVar3,uVar1);
  ERR_pop_to_mark();
  if (lVar4 != 0) {
    EVP_KEM_free(lVar4);
    iVar5 = EVP_KEM_up_ref(param_1);
    if (iVar5 != 0) {
      iVar5 = OPENSSL_sk_push(param_2,param_1);
      if (iVar5 < 1) {
        EVP_KEM_free(param_1);
        return;
      }
    }
  }
  return;
}



void collect_store_loaders(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = OSSL_STORE_LOADER_up_ref();
  if (iVar1 != 0) {
    iVar1 = OPENSSL_sk_push(param_2,param_1);
    if (iVar1 < 1) {
      OSSL_STORE_LOADER_free(param_1);
      return;
    }
  }
  return;
}



void rand_cmp(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *__s2;
  char *__s1;
  int iVar3;
  
  uVar1 = EVP_RAND_get0_name(*param_2);
  uVar2 = EVP_RAND_get0_name(*param_1);
  iVar3 = OPENSSL_strcasecmp(uVar2,uVar1);
  if (iVar3 != 0) {
    return;
  }
  uVar1 = EVP_RAND_get0_provider(*param_2);
  __s2 = (char *)OSSL_PROVIDER_get0_name(uVar1);
  uVar1 = EVP_RAND_get0_provider(*param_1);
  __s1 = (char *)OSSL_PROVIDER_get0_name(uVar1);
  strcmp(__s1,__s2);
  return;
}



void legacy_md_fn(long param_1,char *param_2,char *param_3,BIO *param_4)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = EVP_MD_get0_name();
    BIO_printf(param_4,"  %s\n",uVar1);
    return;
  }
  if (param_2 == (char *)0x0) {
    param_2 = "<undefined>";
  }
  if (param_3 == (char *)0x0) {
    param_3 = "<undefined>";
  }
  BIO_printf(param_4,"  %s => %s\n",param_2,param_3);
  return;
}



/* WARNING: Removing unreachable block (ram,0x0010364b) */
/* WARNING: Removing unreachable block (ram,0x001035ce) */
/* WARNING: Removing unreachable block (ram,0x001040a3) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 list_main(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  BIO *bio;
  char cVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  long lVar32;
  undefined8 uVar33;
  long lVar34;
  ASN1_OBJECT *o;
  char *pcVar35;
  char *__s2;
  char *pcVar36;
  void *parg;
  SSL_METHOD *meth;
  SSL_CTX *ctx;
  ulong uVar37;
  ENGINE *e;
  EVP_PKEY_METHOD *meth_00;
  EVP_PKEY_ASN1_METHOD *ameth;
  ulong uVar38;
  undefined *puVar39;
  int iVar40;
  ulong uVar41;
  undefined8 *puVar42;
  ulong uVar43;
  undefined1 uVar44;
  long in_FS_OFFSET;
  int local_1d8;
  int local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  int local_128;
  int local_124;
  byte local_120;
  undefined7 uStack_11f;
  undefined8 local_118;
  char *local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  long local_40;
  
  uVar44 = false;
  uVar16 = false;
  uVar2 = false;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  verbose = 0;
  uVar30 = opt_init(param_1,param_2,list_options);
  uVar15 = false;
  uVar14 = false;
  uVar13 = false;
  uVar25 = false;
  uVar24 = false;
  uVar23 = false;
  uVar18 = false;
  uVar17 = false;
  uVar12 = false;
  uVar11 = false;
  uVar22 = false;
  uVar21 = false;
  uVar20 = false;
  uVar19 = false;
  uVar10 = false;
  uVar8 = false;
  uVar7 = false;
  uVar6 = false;
  uVar5 = false;
  uVar9 = false;
  uVar4 = false;
  uVar3 = false;
  local_1d8 = 0x304;
  local_160 = 0;
  iVar27 = opt_next();
  while (iVar27 != 0) {
    if (0x23 < iVar27) {
      if (3 < iVar27 - 0x641U) goto switchD_00102bd5_caseD_0;
      iVar27 = opt_provider();
      if (iVar27 != 0) goto LAB_00102c68;
      goto LAB_00102c1d;
    }
    if (iVar27 < -1) goto switchD_00102bd5_caseD_0;
    switch(iVar27) {
    default:
      goto switchD_00102bd5_caseD_0;
    case 1:
      opt_help(list_options);
      goto LAB_00103380;
    case 2:
      break;
    case 3:
      verbose = 1;
      break;
    case 4:
      uVar44 = true;
      break;
    case 5:
      uVar16 = true;
      break;
    case 6:
      uVar9 = true;
      break;
    case 7:
      break;
    case 8:
      pcVar36 = (char *)opt_arg();
      if (_EVP_CIPHER_fetch != (char *)0x0) {
        puVar39 = &functions;
        pcVar35 = _EVP_CIPHER_fetch;
LAB_00103259:
        iVar27 = strcmp(pcVar35,pcVar36);
        if (iVar27 != 0) goto LAB_00103248;
        puVar42 = *(undefined8 **)(puVar39 + 0x18);
        if (puVar42 != (undefined8 *)0x0) {
          pcVar36 = (char *)*puVar42;
          while ((pcVar36 != (char *)0x0 && (pcVar36 != &OPT_PARAM_STR))) {
            if ((pcVar36 != &OPT_HELP_STR && pcVar36 != &OPT_MORE_STR) &&
               ((pcVar36 != &OPT_SECTION_STR && (*pcVar36 != '\0')))) {
              cVar26 = (char)*(undefined4 *)((long)puVar42 + 0xc);
              if (cVar26 == '\0') {
                cVar26 = '-';
              }
              BIO_printf(_bio_out,"%s %c\n",pcVar36,(ulong)(uint)(int)cVar26);
            }
            puVar1 = puVar42 + 3;
            puVar42 = puVar42 + 3;
            pcVar36 = (char *)*puVar1;
          }
          BIO_printf(_bio_out,"- -\n");
          break;
        }
        goto switchD_00102bd5_caseD_0;
      }
LAB_00104678:
      BIO_printf(_bio_err,"Invalid command \'%s\'; type \"help\" for a list.\n",pcVar36);
      goto switchD_00102bd5_caseD_0;
    case 9:
      uVar5 = true;
      break;
    case 10:
      uVar7 = true;
      break;
    case 0xb:
      uVar8 = true;
switchD_00102bd5_caseD_0:
      break;
    case 0xc:
      uVar23 = true;
      break;
    case 0xd:
      uVar24 = true;
      break;
    case 0xe:
      uVar14 = true;
      break;
    case 0xf:
      uVar6 = true;
      break;
    case 0x10:
      uVar3 = true;
      break;
    case 0x11:
      uVar4 = true;
      break;
    case 0x12:
      uVar10 = true;
      break;
    case 0x13:
      uVar19 = true;
      break;
    case 0x14:
      uVar20 = true;
      break;
    case 0x15:
      uVar11 = true;
      break;
    case 0x16:
      uVar21 = true;
      break;
    case 0x17:
      uVar12 = true;
      break;
    case 0x18:
      uVar22 = true;
      break;
    case 0x19:
      break;
    case 0x1a:
      uVar18 = true;
      break;
    case 0x1b:
      uVar25 = true;
      break;
    case 0x1c:
      break;
    case 0x1d:
      uVar15 = true;
      break;
    case 0x1e:
      select_name = opt_arg();
      break;
    case 0x1f:
      uVar17 = true;
      local_160 = 1;
      break;
    case 0x20:
      uVar17 = true;
      break;
    case 0x21:
      local_1d8 = 0x303;
      break;
    case 0x22:
      local_1d8 = 0x304;
      break;
    case 0x23:
      uVar13 = true;
      break;
    case -1:
      goto switchD_00102bd5_caseD_ffffffff;
    }
LAB_00102c68:
    uVar2 = true;
    iVar27 = opt_next();
  }
  iVar27 = opt_check_rest_arg();
  if (iVar27 != 0) {
    if ((bool)uVar16) {
      list_type();
      if ((bool)uVar44) {
        iVar40 = 3;
        iVar27 = 2;
        BIO_printf(_bio_out,"\n");
        goto LAB_00102d0b;
      }
      if ((bool)uVar3) {
        iVar40 = 2;
        goto LAB_00102e46;
      }
      iVar40 = 2;
      if ((bool)uVar4) goto LAB_00102ead;
      iVar27 = 1;
      if (!(bool)uVar9) goto LAB_0010362c;
LAB_0010343b:
      BIO_printf(_bio_out,"\n");
LAB_0010344c:
      list_type();
LAB_0010345a:
      iVar27 = iVar40;
      if ((bool)uVar5) {
        iVar40 = iVar40 + 1;
LAB_00103467:
        BIO_printf(_bio_out,"\n");
LAB_0010347f:
        list_digests();
        iVar27 = iVar40;
      }
joined_r0x001035bf:
      if ((bool)uVar6) {
        iVar40 = iVar27 + 1;
LAB_00103498:
        BIO_printf(_bio_out,"\n");
LAB_001034b0:
        list_kdfs();
        iVar27 = iVar40;
      }
LAB_001034be:
      if ((bool)uVar7) {
        BIO_printf(_bio_out,"\n");
LAB_0010458f:
        list_type();
        if (!(bool)uVar8) {
          if ((bool)uVar10) {
            iVar27 = iVar27 + 2;
            goto LAB_0010366c;
          }
          if ((bool)uVar19) {
            iVar27 = iVar27 + 2;
            goto LAB_00103693;
          }
          iVar27 = iVar27 + 1;
          goto LAB_001039f6;
        }
        iVar27 = iVar27 + 2;
LAB_0010353f:
        BIO_printf(_bio_out,"\n");
LAB_00103554:
        list_ciphers();
        if ((bool)uVar10) {
LAB_00103669:
          iVar27 = iVar27 + 1;
LAB_0010366c:
          BIO_printf(_bio_out,"\n");
          goto LAB_00103681;
        }
        if ((bool)uVar19) goto LAB_00103690;
        if ((bool)uVar20) goto LAB_001036b3;
        if (!(bool)uVar21) goto LAB_00103a0a;
LAB_001036da:
        iVar27 = iVar27 + 1;
        BIO_printf(_bio_out,"\n");
LAB_001036f2:
        uVar31 = OPENSSL_sk_new(skeymanager_cmp);
        uVar33 = app_get0_libctx();
        EVP_SKEYMGMT_do_all_provided(uVar33,collect_skeymanagers,uVar31);
        OPENSSL_sk_sort(uVar31);
        for (iVar40 = 0; iVar28 = OPENSSL_sk_num(uVar31), iVar40 < iVar28; iVar40 = iVar40 + 1) {
          uVar33 = OPENSSL_sk_value(uVar31,iVar40);
          if ((select_name == 0) || (iVar28 = EVP_SKEYMGMT_is_a(uVar33), iVar28 != 0)) {
            lVar32 = OPENSSL_sk_new(&name_cmp);
            if ((lVar32 != 0) &&
               (iVar28 = EVP_SKEYMGMT_names_do_all(uVar33,&collect_names,lVar32), iVar28 != 0)) {
              lVar34 = EVP_SKEYMGMT_get0_description(uVar33);
              BIO_printf(_bio_out,"  Name: ");
              if (lVar34 == 0) {
                lVar34 = OPENSSL_sk_value(lVar32,0);
              }
              BIO_printf(_bio_out,"%s",lVar34);
              BIO_printf(_bio_out,"\n");
              BIO_printf(_bio_out,"    Type: Provider Algorithm\n");
              BIO_printf(_bio_out,"    IDs: ");
              print_names(_bio_out,lVar32);
              uVar33 = EVP_SKEYMGMT_get0_provider(uVar33);
              uVar33 = OSSL_PROVIDER_get0_name(uVar33);
              BIO_printf(_bio_out," @ %s\n",uVar33);
            }
            OPENSSL_sk_free(lVar32);
          }
        }
        OPENSSL_sk_pop_free();
        goto LAB_00103870;
      }
      if ((bool)uVar8) {
        iVar27 = iVar27 + 1;
        goto LAB_0010353f;
      }
      if ((bool)uVar10) goto LAB_00103669;
LAB_001040e1:
      if ((bool)uVar19) {
        if (iVar27 != 0) goto LAB_00103690;
        iVar27 = 1;
        goto LAB_001036a8;
      }
      if ((bool)uVar20) {
        if (iVar27 != 0) goto LAB_001036b3;
        iVar27 = 1;
        goto LAB_001036cb;
      }
      if ((bool)uVar21) {
        if (iVar27 != 0) goto LAB_001036da;
        iVar27 = 1;
        goto LAB_001036f2;
      }
      if (!(bool)uVar22) {
        if (!(bool)uVar7) goto LAB_00103a1d;
        if (iVar27 == 0) {
          iVar27 = 1;
        }
        else {
          iVar27 = iVar27 + 1;
          BIO_printf(_bio_out,"\n");
        }
        local_110 = (char *)((ulong)local_110 & 0xffffffff00000000);
        uVar31 = app_get0_libctx();
        pcVar36 = (char *)SSL_get1_builtin_sigalgs(uVar31);
        if (pcVar36 != (char *)0x0) {
          if (*pcVar36 != '\0') {
            BIO_printf(_bio_out,"%s",pcVar36);
            local_110 = (char *)CONCAT44(local_110._4_4_,1);
          }
          CRYPTO_free(pcVar36);
        }
        iVar40 = OSSL_PROVIDER_do_all(0,list_tls_sigalg_caps,&local_110);
        if (iVar40 == 0) {
          BIO_printf(_bio_err,"ERROR: could not list all provider signature algorithms\n");
        }
        if ((int)local_110 < 2) {
          BIO_printf(_bio_out,"\nNo TLS sig algs registered by currently active providers");
        }
        BIO_printf(_bio_out,"\n");
        goto LAB_001038a0;
      }
      if (iVar27 != 0) goto LAB_0010387a;
      iVar27 = 1;
LAB_00103892:
      list_signatures();
LAB_001038a0:
      if (!(bool)uVar18) {
        if ((bool)uVar11) {
LAB_00103932:
          iVar27 = iVar27 + 1;
          goto LAB_00103ac1;
        }
        if ((bool)uVar12) goto LAB_00103b83;
LAB_001040fd:
        if ((bool)uVar17) {
          if (iVar27 != 0) goto LAB_00103f3e;
          iVar27 = 1;
          goto LAB_00103f56;
        }
        if ((bool)uVar23) {
          if (iVar27 != 0) goto LAB_00103bb4;
          iVar27 = 1;
          goto LAB_00103bcc;
        }
        if ((bool)uVar24) {
          if (iVar27 != 0) goto LAB_00103c16;
          goto LAB_00103c2b;
        }
        if (!(bool)uVar25) {
          if (!(bool)uVar11) goto LAB_001045bd;
          if (iVar27 != 0) {
            BIO_printf(_bio_out,"\n");
          }
          lVar32 = OPENSSL_sk_new(0x100000);
          if (lVar32 == 0) {
LAB_00103b61:
            BIO_printf(_bio_err,"ERROR: Memory allocation\n");
          }
          else {
            iVar27 = OSSL_PROVIDER_do_all(0,collect_providers,lVar32);
            if (iVar27 != 1) {
              OPENSSL_sk_free(lVar32);
              goto LAB_00103b61;
            }
            BIO_printf(_bio_out,"Providers:\n");
            OPENSSL_sk_sort(lVar32);
            for (iVar27 = 0; iVar40 = OPENSSL_sk_num(lVar32), iVar27 < iVar40; iVar27 = iVar27 + 1)
            {
              uVar31 = OPENSSL_sk_value(lVar32,iVar27);
              uVar33 = OSSL_PROVIDER_get0_name(uVar31);
              BIO_printf(_bio_out,"  %s\n",uVar33);
              OSSL_PARAM_construct_utf8_ptr(&local_158,&_LC80,&local_120,0);
              local_108 = local_158;
              uStack_100 = uStack_150;
              local_f8 = local_148;
              uStack_f0 = uStack_140;
              local_e8 = local_138;
              OSSL_PARAM_construct_utf8_ptr(&local_158,"version",&local_118);
              local_e0 = local_158;
              uStack_d8 = uStack_150;
              local_d0 = local_148;
              uStack_c8 = uStack_140;
              local_c0 = local_138;
              OSSL_PARAM_construct_int(&local_158,"status",&local_124);
              local_b8 = local_158;
              uStack_b0 = uStack_150;
              local_a8 = local_148;
              uStack_a0 = uStack_140;
              local_98 = local_138;
              OSSL_PARAM_construct_utf8_ptr(&local_158,"buildinfo",&local_110);
              local_70 = local_138;
              local_90 = local_158;
              uStack_88 = uStack_150;
              local_80 = local_148;
              uStack_78 = uStack_140;
              OSSL_PARAM_construct_end(&local_158);
              local_48 = local_138;
              local_68 = local_158;
              uStack_60 = uStack_150;
              local_58 = local_148;
              uStack_50 = uStack_140;
              OSSL_PARAM_set_all_unmodified(&local_108);
              iVar40 = OSSL_PROVIDER_get_params(uVar31,&local_108);
              if (iVar40 == 0) {
                BIO_printf(_bio_err,"WARNING: Unable to query provider parameters for %s\n",uVar33);
              }
              else {
                iVar40 = OSSL_PARAM_modified(&local_108);
                if (iVar40 != 0) {
                  BIO_printf(_bio_out,"    name: %s\n",CONCAT71(uStack_11f,local_120));
                }
                iVar40 = OSSL_PARAM_modified(&local_e0);
                if (iVar40 != 0) {
                  BIO_printf(_bio_out,"    version: %s\n",CONCAT44(local_118._4_4_,(int)local_118));
                }
                iVar40 = OSSL_PARAM_modified(&local_b8);
                if (iVar40 != 0) {
                  puVar39 = &_LC43;
                  if (local_124 != 0) {
                    puVar39 = &_LC42;
                  }
                  BIO_printf(_bio_out,"    status: %sactive\n",puVar39);
                }
                if (verbose != 0) {
                  iVar40 = OSSL_PARAM_modified(&local_90);
                  if (iVar40 != 0) {
                    BIO_printf(_bio_out,"    build info: %s\n",local_110);
                  }
                  uVar31 = OSSL_PROVIDER_gettable_params(uVar31);
                  print_param_types("gettable provider parameters",uVar31,4);
                }
              }
            }
            OPENSSL_sk_free(lVar32);
          }
          goto LAB_00103ce3;
        }
        if (iVar27 != 0) goto LAB_00103cc0;
LAB_00103cd5:
        list_store_loaders();
        goto LAB_00103ce3;
      }
LAB_0010454e:
      BIO_printf(_bio_out,"\n");
LAB_00103aaf:
      list_asymciphers();
      if ((bool)uVar11) {
        iVar27 = iVar27 + 2;
LAB_00103ac1:
        BIO_printf(_bio_out,"\n");
LAB_00103ad6:
        list_keyexchanges();
        if ((bool)uVar12) {
LAB_00103b83:
          iVar27 = iVar27 + 1;
LAB_00103b86:
          BIO_printf(_bio_out,"\n");
          goto LAB_00103b9b;
        }
        if ((bool)uVar17) goto LAB_00103f3e;
        if ((bool)uVar23) goto LAB_00103bb4;
        if (!(bool)uVar24) goto LAB_00103b03;
        goto LAB_00103c16;
      }
      if ((bool)uVar12) {
        iVar27 = iVar27 + 2;
        goto LAB_00103b86;
      }
      if ((bool)uVar17) {
        iVar27 = iVar27 + 2;
        goto LAB_00103f41;
      }
      iVar27 = iVar27 + 1;
      if ((bool)uVar23) goto LAB_00103bb4;
      if ((bool)uVar24) goto LAB_00103c16;
LAB_00103b03:
      if ((bool)uVar25) goto LAB_00103cc0;
LAB_001045bd:
      if ((bool)uVar13) {
        if (iVar27 != 0) goto LAB_001045f8;
        goto LAB_0010460d;
      }
      if (!(bool)uVar14) goto LAB_00104054;
      if (iVar27 != 0) goto LAB_00103d22;
LAB_00103d37:
      BIO_puts(_bio_out,"Disabled algorithms:\n");
      BIO_puts(_bio_out,"MD2\n");
      BIO_puts(_bio_out,"RC5\n");
      BIO_puts(_bio_out,"SCTP\n");
      BIO_puts(_bio_out,"SSL3\n");
      BIO_puts(_bio_out,"ZLIB\n");
      BIO_puts(_bio_out,"BROTLI\n");
      BIO_puts(_bio_out,"ZSTD\n");
joined_r0x00104084:
      if ((bool)uVar15) {
LAB_00103dd9:
        BIO_printf(_bio_out,"\n");
LAB_00103dee:
        iVar27 = OBJ_new_nid(0);
        if (iVar27 < 2) {
LAB_001049d4:
          pcVar36 = (char *)0x0;
        }
        else {
          pcVar36 = (char *)0x0;
          iVar28 = 1;
          iVar40 = 0;
          do {
            o = OBJ_nid2obj(iVar28);
            pcVar35 = OBJ_nid2sn(iVar28);
            __s2 = OBJ_nid2ln(iVar28);
            ERR_clear_error();
            iVar29 = OBJ_obj2nid(o);
            if (iVar29 != 0) {
              iVar29 = OBJ_obj2txt((char *)0x0,0,o,1);
              if (iVar29 == 0) {
                BIO_printf(_bio_out,"# None-OID object: %s, %s\n",pcVar35,__s2);
              }
              else {
                if (iVar29 < 0) break;
                if (iVar40 < iVar29) {
                  iVar40 = iVar29 + 1;
                  pcVar36 = (char *)CRYPTO_realloc(pcVar36,iVar40,"apps/list.c",0x45e);
                  if (pcVar36 == (char *)0x0) {
                    BIO_printf(_bio_err,"ERROR: Memory allocation\n");
                    goto LAB_001049d4;
                  }
                }
                iVar29 = OBJ_obj2txt(pcVar36,iVar40,o,1);
                bio = _bio_out;
                if (iVar29 < 0) break;
                if ((__s2 == (char *)0x0) || (iVar29 = strcmp(pcVar35,__s2), iVar29 == 0)) {
                  BIO_printf(bio,"%s = %s\n",pcVar35,pcVar36);
                }
                else {
                  BIO_printf(bio,"%s = %s, %s\n",pcVar35,__s2,pcVar36);
                }
              }
            }
            iVar28 = iVar28 + 1;
          } while (iVar27 != iVar28);
        }
        CRYPTO_free(pcVar36);
      }
    }
    else {
      if ((bool)uVar44) {
        iVar40 = 2;
        iVar27 = 1;
LAB_00102d0b:
        BIO_printf(_bio_out,"Digests:\n");
        list_digests(&_LC49);
        BIO_printf(_bio_out,"\nSymmetric Ciphers:\n");
        list_ciphers(&_LC49);
        BIO_printf(_bio_out,"\n");
        list_kdfs();
        BIO_printf(_bio_out,"\n");
        list_macs();
        BIO_printf(_bio_out,"\nProvided Asymmetric Encryption:\n");
        list_asymciphers();
        BIO_printf(_bio_out,"\nProvided Key Exchange:\n");
        list_keyexchanges();
        BIO_printf(_bio_out,"\nProvided Signatures:\n");
        list_signatures();
        BIO_printf(_bio_out,"\nProvided Key encapsulation:\n");
        list_kems();
        BIO_printf(_bio_out,"\nProvided Key managers:\n");
        list_keymanagers();
        BIO_printf(_bio_out,"\n");
        list_encoders();
        BIO_printf(_bio_out,"\n");
        list_decoders();
        BIO_printf(_bio_out,"\n");
        list_store_loaders();
        if ((bool)uVar3) {
LAB_00102e46:
          BIO_printf(_bio_out,"\n");
          goto LAB_00102e57;
        }
        if ((bool)uVar4) goto LAB_00102ead;
        if ((bool)uVar9) goto LAB_0010343b;
LAB_0010362c:
        if ((bool)uVar5) goto LAB_00103467;
        if ((bool)uVar6) goto LAB_00103498;
        goto LAB_001034be;
      }
      if ((bool)uVar3) {
        iVar40 = 1;
LAB_00102e57:
        uVar31 = RAND_get0_primary(0);
        display_random("primary",uVar31);
        uVar31 = RAND_get0_public(0);
        display_random("public",uVar31);
        RAND_get0_private(0);
        display_random();
        if (!(bool)uVar4) {
          if ((bool)uVar9) {
            iVar40 = iVar40 + 1;
            goto LAB_0010343b;
          }
          goto LAB_0010345a;
        }
        iVar40 = iVar40 + 1;
LAB_00102ead:
        BIO_printf(_bio_out,"\n");
LAB_00102ebe:
        lVar32 = OPENSSL_sk_new(rand_cmp);
        iVar27 = iVar40;
        if (lVar32 == 0) {
          BIO_printf(_bio_err,"ERROR: Memory allocation\n");
        }
        else {
          BIO_printf(_bio_out,"Provided RNGs and seed sources:\n");
          uVar31 = app_get0_libctx();
          EVP_RAND_do_all_provided(uVar31,collect_rands,lVar32);
          OPENSSL_sk_sort(lVar32);
          for (iVar40 = 0; iVar28 = OPENSSL_sk_num(lVar32), iVar40 < iVar28; iVar40 = iVar40 + 1) {
            uVar31 = OPENSSL_sk_value(lVar32,iVar40);
            lVar34 = select_name;
            if (select_name == 0) {
LAB_00102f76:
              uVar33 = EVP_RAND_get0_name(uVar31);
              BIO_printf(_bio_out,"  %s",uVar33);
              uVar33 = EVP_RAND_get0_provider(uVar31);
              uVar33 = OSSL_PROVIDER_get0_name(uVar33);
              BIO_printf(_bio_out," @ %s\n",uVar33);
              if (verbose != 0) {
                lVar34 = EVP_RAND_get0_description(uVar31);
                if (lVar34 != 0) {
                  BIO_printf(_bio_out,"    description: %s\n",lVar34);
                }
                uVar33 = EVP_RAND_gettable_params(uVar31);
                print_param_types("retrievable algorithm parameters",uVar33,4);
                uVar33 = EVP_RAND_gettable_ctx_params(uVar31);
                print_param_types("retrievable operation parameters",uVar33,4);
                uVar31 = EVP_RAND_settable_ctx_params(uVar31);
                print_param_types("settable operation parameters",uVar31,4);
              }
            }
            else {
              uVar33 = EVP_RAND_get0_name(uVar31);
              iVar28 = OPENSSL_strcasecmp(uVar33,lVar34);
              if (iVar28 == 0) goto LAB_00102f76;
            }
          }
          OPENSSL_sk_pop_free();
        }
        goto joined_r0x001035bf;
      }
      if ((bool)uVar4) {
        iVar40 = 1;
        goto LAB_00102ebe;
      }
      if ((bool)uVar9) {
        iVar40 = 1;
        goto LAB_0010344c;
      }
      if ((bool)uVar5) {
        iVar40 = 1;
        goto LAB_0010347f;
      }
      iVar40 = 1;
      if ((bool)uVar6) goto LAB_001034b0;
      if ((bool)uVar16) {
        list_macs();
        iVar27 = 1;
        goto LAB_001034be;
      }
      if ((bool)uVar7) {
        iVar27 = 0;
        goto LAB_0010458f;
      }
      if ((bool)uVar8) {
        iVar27 = 1;
        goto LAB_00103554;
      }
      iVar27 = 0;
      if (!(bool)uVar10) goto LAB_001040e1;
      iVar27 = 1;
LAB_00103681:
      list_encoders();
      if ((bool)uVar19) {
LAB_00103690:
        iVar27 = iVar27 + 1;
LAB_00103693:
        BIO_printf(_bio_out,"\n");
LAB_001036a8:
        list_decoders();
        if ((bool)uVar20) goto LAB_001036b3;
LAB_001036d0:
        if ((bool)uVar21) goto LAB_001036da;
LAB_00103870:
        if ((bool)uVar22) {
LAB_0010387a:
          iVar27 = iVar27 + 1;
          BIO_printf(_bio_out,"\n");
          goto LAB_00103892;
        }
        goto LAB_001038a0;
      }
LAB_001039f6:
      if ((bool)uVar20) {
LAB_001036b3:
        iVar27 = iVar27 + 1;
        BIO_printf(_bio_out,"\n");
LAB_001036cb:
        list_keymanagers();
        goto LAB_001036d0;
      }
      if ((bool)uVar21) goto LAB_001036da;
LAB_00103a0a:
      if ((bool)uVar22) goto LAB_0010387a;
LAB_00103a1d:
      if ((bool)uVar18) {
        if (iVar27 != 0) goto LAB_0010454e;
        goto LAB_00103aaf;
      }
      if ((bool)uVar11) {
        if (iVar27 != 0) goto LAB_00103932;
        iVar27 = 1;
        goto LAB_00103ad6;
      }
      if (!(bool)uVar12) goto LAB_001040fd;
      if (iVar27 != 0) goto LAB_00103b83;
      iVar27 = 1;
LAB_00103b9b:
      list_kems();
      if ((bool)uVar17) {
LAB_00103f3e:
        iVar27 = iVar27 + 1;
LAB_00103f41:
        BIO_printf(_bio_out,"\n");
LAB_00103f56:
        parg = (void *)OPENSSL_sk_new_null();
        if (parg != (void *)0x0) {
          meth = (SSL_METHOD *)TLS_method();
          ctx = SSL_CTX_new(meth);
          if (ctx == (SSL_CTX *)0x0) {
            BIO_printf(_bio_err,"ERROR: Memory allocation\n");
          }
          else {
            lVar32 = SSL_CTX_ctrl(ctx,0x7b,(long)local_1d8,(void *)0x0);
            if ((lVar32 == 0) ||
               (lVar32 = SSL_CTX_ctrl(ctx,0x7c,(long)local_1d8,(void *)0x0), lVar32 == 0)) {
              BIO_printf(_bio_err,"ERROR: setting TLS protocol version\n");
            }
            else {
              lVar32 = SSL_CTX_ctrl(ctx,0x8b,(long)local_160,parg);
              if (lVar32 == 0) {
                BIO_printf(_bio_err,"ERROR: getting implemented TLS group list\n");
              }
              else {
                iVar40 = OPENSSL_sk_num(parg);
                uVar38 = (ulong)iVar40;
                if (uVar38 != 0) {
                  uVar37 = uVar38 - 1;
                  if (uVar37 == 0) {
                    uVar31 = OPENSSL_sk_value(parg,0);
                    BIO_printf(_bio_out,"%s%c",uVar31);
                  }
                  else {
                    if (uVar38 <= uVar37) {
                      uVar37 = uVar38;
                    }
                    uVar41 = 0;
                    do {
                      uVar43 = uVar41 & 0xffffffff;
                      uVar41 = uVar41 + 1;
                      uVar31 = OPENSSL_sk_value(parg,uVar43);
                      BIO_printf(_bio_out,"%s%c",uVar31,0x3a);
                    } while (uVar41 < uVar37);
                    for (; uVar41 < uVar38; uVar41 = uVar41 + 1) {
                      uVar31 = OPENSSL_sk_value(parg,uVar41 & 0xffffffff);
                      BIO_printf(_bio_out,"%s%c",uVar31);
                    }
                  }
                }
              }
            }
          }
          SSL_CTX_free(ctx);
          OPENSSL_sk_free();
          goto joined_r0x00103ff5;
        }
        BIO_printf(_bio_err,"ERROR: Memory allocation\n");
        if (!(bool)uVar23) goto joined_r0x00104000;
LAB_00103bb4:
        iVar27 = iVar27 + 1;
        BIO_printf(_bio_out,"\n");
LAB_00103bcc:
        if ((select_name == 0) && (lVar32 = app_get0_propq(), lVar32 == 0)) {
          BIO_printf(_bio_out,"Legacy:\n");
          for (iVar40 = 0; iVar28 = EVP_PKEY_asn1_get_count(), iVar40 < iVar28; iVar40 = iVar40 + 1)
          {
            ameth = EVP_PKEY_asn1_get0(iVar40);
            EVP_PKEY_asn1_get0_info
                      (&local_128,&local_124,(int *)&local_120,(char **)&local_118,&local_110,ameth)
            ;
            if ((local_120 & 1) == 0) {
              BIO_printf(_bio_out," Name: %s\n",CONCAT44(local_118._4_4_,(int)local_118));
              pcVar36 = "External";
              if ((local_120 & 2) == 0) {
                pcVar36 = "Builtin";
              }
              BIO_printf(_bio_out,"\tType: %s Algorithm\n",pcVar36);
              pcVar36 = OBJ_nid2ln(local_128);
              BIO_printf(_bio_out,"\tOID: %s\n",pcVar36);
              if (local_110 == (char *)0x0) {
                local_110 = "(none)";
              }
              BIO_printf(_bio_out,"\tPEM string: %s\n");
            }
            else {
              pcVar36 = OBJ_nid2ln(local_128);
              BIO_printf(_bio_out," Name: %s\n",pcVar36);
              pcVar36 = OBJ_nid2ln(local_124);
              BIO_printf(_bio_out,"\tAlias for: %s\n",pcVar36);
            }
          }
        }
        BIO_printf(_bio_out,"Provided:\n");
        BIO_printf(_bio_out," Key Managers:\n");
        list_keymanagers();
        if (!(bool)uVar24) goto joined_r0x00104006;
LAB_00103c16:
        BIO_printf(_bio_out,"\n");
LAB_00103c2b:
        lVar32 = EVP_PKEY_meth_get_count();
        if (((select_name == 0) && (lVar34 = app_get0_propq(), lVar34 == 0)) &&
           (BIO_printf(_bio_out,"Legacy:\n"), lVar32 != 0)) {
          lVar34 = 0;
          do {
            meth_00 = (EVP_PKEY_METHOD *)EVP_PKEY_meth_get0(lVar34);
            EVP_PKEY_meth_get0_info((int *)&local_118,(int *)&local_110,meth_00);
            pcVar36 = OBJ_nid2ln((int)local_118);
            BIO_printf(_bio_out," %s\n",pcVar36);
            pcVar36 = "External";
            if (((ulong)local_110 & 2) == 0) {
              pcVar36 = "Builtin";
            }
            lVar34 = lVar34 + 1;
            BIO_printf(_bio_out,"\tType: %s Algorithm\n",pcVar36);
          } while (lVar32 != lVar34);
        }
        BIO_printf(_bio_out,"Provided:\n");
        BIO_printf(_bio_out," Encryption:\n");
        list_asymciphers();
        BIO_printf(_bio_out," Key Exchange:\n");
        list_keyexchanges();
        BIO_printf(_bio_out," Signatures:\n");
        list_signatures();
        BIO_printf(_bio_out," Key encapsulation:\n");
        list_kems();
        if ((bool)uVar25) goto LAB_00103cc0;
LAB_00103ce3:
        if ((bool)uVar13) {
LAB_001045f8:
          BIO_printf(_bio_out,"\n");
LAB_0010460d:
          BIO_puts(_bio_out,"Engines:\n");
          for (e = ENGINE_get_first(); e != (ENGINE *)0x0; e = ENGINE_get_next(e)) {
            pcVar36 = ENGINE_get_id(e);
            BIO_printf(_bio_out,"%s\n",pcVar36);
          }
        }
        if ((bool)uVar14) {
LAB_00103d22:
          BIO_printf(_bio_out,"\n");
          goto LAB_00103d37;
        }
        goto joined_r0x00104084;
      }
joined_r0x00103ff5:
      if ((bool)uVar23) goto LAB_00103bb4;
joined_r0x00104000:
      if ((bool)uVar24) goto LAB_00103c16;
joined_r0x00104006:
      if ((bool)uVar25) {
LAB_00103cc0:
        BIO_printf(_bio_out,"\n");
        goto LAB_00103cd5;
      }
      if ((bool)uVar13) goto LAB_001045f8;
      if ((bool)uVar14) goto LAB_00103d22;
LAB_00104054:
      if ((bool)uVar15) {
        if (iVar27 != 0) goto LAB_00103dd9;
        goto LAB_00103dee;
      }
    }
    if ((bool)uVar2) {
LAB_00103380:
      uVar30 = 0;
      goto LAB_00102c28;
    }
  }
switchD_00102bd5_caseD_ffffffff:
  BIO_printf(_bio_err,"%s: Use -help for summary.\n",uVar30);
LAB_00102c1d:
  uVar30 = 1;
LAB_00102c28:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar30;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00103248:
  pcVar35 = *(char **)(puVar39 + 0x38);
  puVar39 = puVar39 + 0x30;
  if (pcVar35 == (char *)0x0) goto LAB_00104678;
  goto LAB_00103259;
}


