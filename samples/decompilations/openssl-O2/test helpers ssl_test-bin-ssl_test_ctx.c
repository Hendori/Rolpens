
void ssl_test_extra_conf_free_data(long param_1)

{
  CRYPTO_free(*(void **)(param_1 + 0x10));
  CRYPTO_free(*(void **)(param_1 + 0x50));
  CRYPTO_free(*(void **)(param_1 + 0x90));
  CRYPTO_free(*(void **)(param_1 + 0x18));
  CRYPTO_free(*(void **)(param_1 + 0x58));
  CRYPTO_free(*(void **)(param_1 + 0x98));
  CRYPTO_free(*(void **)(param_1 + 0x28));
  CRYPTO_free(*(void **)(param_1 + 0x68));
  CRYPTO_free(*(void **)(param_1 + 0x70));
  CRYPTO_free(*(void **)(param_1 + 0xa8));
  CRYPTO_free(*(void **)(param_1 + 0xb0));
  CRYPTO_free(*(void **)(param_1 + 0x30));
  CRYPTO_free(*(void **)(param_1 + 0x38));
  CRYPTO_free(*(void **)(param_1 + 0x80));
  CRYPTO_free(*(void **)(param_1 + 0xc0));
  return;
}



undefined8 parse_max_fragment_len_mode(long param_1,char *param_2)

{
  int iVar1;
  undefined **ppuVar2;
  
  ppuVar2 = &ssl_max_fragment_len_mode;
  do {
    iVar1 = strcmp(*ppuVar2,param_2);
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(ppuVar2 + 1);
      return 1;
    }
    ppuVar2 = ppuVar2 + 2;
  } while (ppuVar2 != (undefined **)&DAT_00102c90);
  return 0;
}



undefined8 parse_client_options(undefined8 param_1,CONF *param_2,char *param_3)

{
  char *__s1;
  int iVar1;
  stack_st_CONF_VALUE *psVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  undefined **ppuVar7;
  
  iVar6 = 0;
  psVar2 = NCONF_get_section(param_2,param_3);
  iVar1 = test_ptr("test/helpers/ssl_test_ctx.c",799,
                   "sk_conf = NCONF_get_section(conf, client_section)",psVar2);
  if (iVar1 == 0) {
LAB_0010024a:
    uVar4 = 0;
  }
  else {
    while( true ) {
      iVar1 = OPENSSL_sk_num(psVar2);
      if (iVar1 <= iVar6) break;
      ppuVar7 = &ssl_test_client_options;
      lVar5 = 0;
      lVar3 = OPENSSL_sk_value(psVar2,iVar6);
      __s1 = *(char **)(lVar3 + 8);
      while( true ) {
        iVar1 = strcmp(__s1,*ppuVar7);
        if (iVar1 == 0) break;
        lVar5 = lVar5 + 1;
        ppuVar7 = ppuVar7 + 2;
        if (lVar5 == 0xb) {
          test_info("test/helpers/ssl_test_ctx.c",0x331,"Unknown test option: %s",__s1);
          goto LAB_0010024a;
        }
      }
      iVar1 = (*(code *)(&PTR_parse_client_verify_callback_00102988)[lVar5 * 2])
                        (param_1,*(undefined8 *)(lVar3 + 0x10));
      if (iVar1 == 0) {
        test_info("test/helpers/ssl_test_ctx.c",0x328,"Bad value %s for option %s",
                  *(undefined8 *)(lVar3 + 0x10),*(undefined8 *)(lVar3 + 8));
        goto LAB_0010024a;
      }
      iVar6 = iVar6 + 1;
    }
    uVar4 = 1;
  }
  return uVar4;
}



undefined8 parse_server_options(undefined8 param_1,CONF *param_2,char *param_3)

{
  char *__s1;
  int iVar1;
  stack_st_CONF_VALUE *psVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  undefined **ppuVar7;
  
  iVar6 = 0;
  psVar2 = NCONF_get_section(param_2,param_3);
  iVar1 = test_ptr("test/helpers/ssl_test_ctx.c",0x340,
                   "sk_conf = NCONF_get_section(conf, server_section)",psVar2);
  if (iVar1 == 0) {
LAB_0010036a:
    uVar4 = 0;
  }
  else {
    while( true ) {
      iVar1 = OPENSSL_sk_num(psVar2);
      if (iVar1 <= iVar6) break;
      ppuVar7 = &ssl_test_server_options;
      lVar5 = 0;
      lVar3 = OPENSSL_sk_value(psVar2,iVar6);
      __s1 = *(char **)(lVar3 + 8);
      while( true ) {
        iVar1 = strcmp(__s1,*ppuVar7);
        if (iVar1 == 0) break;
        lVar5 = lVar5 + 1;
        ppuVar7 = ppuVar7 + 2;
        if (lVar5 == 9) {
          test_info("test/helpers/ssl_test_ctx.c",0x352,"Unknown test option: %s",__s1);
          goto LAB_0010036a;
        }
      }
      iVar1 = (*(code *)(&PTR_parse_servername_callback_001028e8)[lVar5 * 2])
                        (param_1,*(undefined8 *)(lVar3 + 0x10));
      if (iVar1 == 0) {
        test_info("test/helpers/ssl_test_ctx.c",0x349,"Bad value %s for option %s",
                  *(undefined8 *)(lVar3 + 0x10),*(undefined8 *)(lVar3 + 8));
        goto LAB_0010036a;
      }
      iVar6 = iVar6 + 1;
    }
    uVar4 = 1;
  }
  return uVar4;
}



void parse_test_fips_version(long param_1,char *param_2)

{
  char *pcVar1;
  
  CRYPTO_free(*(void **)(param_1 + 0x240));
  pcVar1 = CRYPTO_strdup(param_2,"test/helpers/ssl_test_ctx.c",0x290);
  *(char **)(param_1 + 0x240) = pcVar1;
  test_ptr("test/helpers/ssl_test_ctx.c",0x290,"ctx->fips_version",pcVar1);
  return;
}



void parse_test_expected_session_ticket_app_data(long param_1,char *param_2)

{
  char *pcVar1;
  
  CRYPTO_free(*(void **)(param_1 + 0x230));
  pcVar1 = CRYPTO_strdup(param_2,"test/helpers/ssl_test_ctx.c",0x16e);
  *(char **)(param_1 + 0x230) = pcVar1;
  test_ptr("test/helpers/ssl_test_ctx.c",0x16e,"ctx->expected_session_ticket_app_data",pcVar1);
  return;
}



void parse_test_expected_cipher(long param_1,char *param_2)

{
  char *pcVar1;
  
  CRYPTO_free(*(void **)(param_1 + 0x228));
  pcVar1 = CRYPTO_strdup(param_2,"test/helpers/ssl_test_ctx.c",0x287);
  *(char **)(param_1 + 0x228) = pcVar1;
  test_ptr("test/helpers/ssl_test_ctx.c",0x287,"ctx->expected_cipher",pcVar1);
  return;
}



void parse_test_expected_alpn_protocol(long param_1,char *param_2)

{
  char *pcVar1;
  
  CRYPTO_free(*(void **)(param_1 + 0x1d0));
  pcVar1 = CRYPTO_strdup(param_2,"test/helpers/ssl_test_ctx.c",0x165);
  *(char **)(param_1 + 0x1d0) = pcVar1;
  test_ptr("test/helpers/ssl_test_ctx.c",0x165,"ctx->expected_alpn_protocol",pcVar1);
  return;
}



void parse_test_expected_npn_protocol(long param_1,char *param_2)

{
  char *pcVar1;
  
  CRYPTO_free(*(void **)(param_1 + 0x1c8));
  pcVar1 = CRYPTO_strdup(param_2,"test/helpers/ssl_test_ctx.c",0x162);
  *(char **)(param_1 + 0x1c8) = pcVar1;
  test_ptr("test/helpers/ssl_test_ctx.c",0x162,"ctx->expected_npn_protocol",pcVar1);
  return;
}



void parse_client_srp_password(long param_1,char *param_2)

{
  char *pcVar1;
  
  CRYPTO_free(*(void **)(param_1 + 0x38));
  pcVar1 = CRYPTO_strdup(param_2,"test/helpers/ssl_test_ctx.c",0x16a);
  *(char **)(param_1 + 0x38) = pcVar1;
  test_ptr("test/helpers/ssl_test_ctx.c",0x16a,"ctx->srp_password",pcVar1);
  return;
}



void parse_client_srp_user(long param_1,char *param_2)

{
  char *pcVar1;
  
  CRYPTO_free(*(void **)(param_1 + 0x30));
  pcVar1 = CRYPTO_strdup(param_2,"test/helpers/ssl_test_ctx.c",0x168);
  *(char **)(param_1 + 0x30) = pcVar1;
  test_ptr("test/helpers/ssl_test_ctx.c",0x168,"ctx->srp_user",pcVar1);
  return;
}



void parse_client_reneg_ciphers(long param_1,char *param_2)

{
  char *pcVar1;
  
  CRYPTO_free(*(void **)(param_1 + 0x28));
  pcVar1 = CRYPTO_strdup(param_2,"test/helpers/ssl_test_ctx.c",400);
  *(char **)(param_1 + 0x28) = pcVar1;
  test_ptr("test/helpers/ssl_test_ctx.c",400,"ctx->reneg_ciphers",pcVar1);
  return;
}



void parse_client_alpn_protocols(long param_1,char *param_2)

{
  char *pcVar1;
  
  CRYPTO_free(*(void **)(param_1 + 0x18));
  pcVar1 = CRYPTO_strdup(param_2,"test/helpers/ssl_test_ctx.c",0x163);
  *(char **)(param_1 + 0x18) = pcVar1;
  test_ptr("test/helpers/ssl_test_ctx.c",0x163,"ctx->alpn_protocols",pcVar1);
  return;
}



void parse_client_npn_protocols(long param_1,char *param_2)

{
  char *pcVar1;
  
  CRYPTO_free(*(void **)(param_1 + 0x10));
  pcVar1 = CRYPTO_strdup(param_2,"test/helpers/ssl_test_ctx.c",0x160);
  *(char **)(param_1 + 0x10) = pcVar1;
  test_ptr("test/helpers/ssl_test_ctx.c",0x160,"ctx->npn_protocols",pcVar1);
  return;
}



void parse_server_session_ticket_app_data(long param_1,char *param_2)

{
  char *pcVar1;
  
  CRYPTO_free(*(void **)(param_1 + 0x38));
  pcVar1 = CRYPTO_strdup(param_2,"test/helpers/ssl_test_ctx.c",0x16f);
  *(char **)(param_1 + 0x38) = pcVar1;
  test_ptr("test/helpers/ssl_test_ctx.c",0x16f,"ctx->session_ticket_app_data",pcVar1);
  return;
}



void parse_server_srp_password(long param_1,char *param_2)

{
  char *pcVar1;
  
  CRYPTO_free(*(void **)(param_1 + 0x28));
  pcVar1 = CRYPTO_strdup(param_2,"test/helpers/ssl_test_ctx.c",0x16b);
  *(char **)(param_1 + 0x28) = pcVar1;
  test_ptr("test/helpers/ssl_test_ctx.c",0x16b,"ctx->srp_password",pcVar1);
  return;
}



void parse_server_srp_user(long param_1,char *param_2)

{
  char *pcVar1;
  
  CRYPTO_free(*(void **)(param_1 + 0x20));
  pcVar1 = CRYPTO_strdup(param_2,"test/helpers/ssl_test_ctx.c",0x169);
  *(char **)(param_1 + 0x20) = pcVar1;
  test_ptr("test/helpers/ssl_test_ctx.c",0x169,"ctx->srp_user",pcVar1);
  return;
}



void parse_server_alpn_protocols(long param_1,char *param_2)

{
  char *pcVar1;
  
  CRYPTO_free(*(void **)(param_1 + 0x10));
  pcVar1 = CRYPTO_strdup(param_2,"test/helpers/ssl_test_ctx.c",0x164);
  *(char **)(param_1 + 0x10) = pcVar1;
  test_ptr("test/helpers/ssl_test_ctx.c",0x164,"ctx->alpn_protocols",pcVar1);
  return;
}



void parse_server_npn_protocols(long param_1,char *param_2)

{
  char *pcVar1;
  
  CRYPTO_free(*(void **)(param_1 + 8));
  pcVar1 = CRYPTO_strdup(param_2,"test/helpers/ssl_test_ctx.c",0x161);
  *(char **)(param_1 + 8) = pcVar1;
  test_ptr("test/helpers/ssl_test_ctx.c",0x161,"ctx->npn_protocols",pcVar1);
  return;
}



bool parse_expected_client_ca_names(long param_1,char *param_2)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  
  if (param_2 != (char *)0x0) {
    uVar1 = *(undefined8 *)(param_1 + 0x238);
    iVar2 = strcmp(param_2,"empty");
    if (iVar2 == 0) {
      lVar3 = OPENSSL_sk_new_null();
    }
    else {
      lVar3 = SSL_load_client_CA_file_ex(param_2,uVar1,0);
    }
    *(long *)(param_1 + 0x208) = lVar3;
    return lVar3 != 0;
  }
  return false;
}



undefined8 parse_expected_client_sign_hash(long param_1,char *param_2)

{
  int iVar1;
  
  if (param_2 == (char *)0x0) {
    return 0;
  }
  iVar1 = OBJ_sn2nid(param_2);
  if (iVar1 == 0) {
    iVar1 = OBJ_ln2nid(param_2);
    if (iVar1 == 0) {
      return 0;
    }
  }
  *(int *)(param_1 + 0x1fc) = iVar1;
  return 1;
}



undefined8 parse_expected_key_type(int *param_1,char *param_2)

{
  int iVar1;
  EVP_PKEY_ASN1_METHOD *ameth;
  undefined8 uVar2;
  long in_FS_OFFSET;
  int local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == (char *)0x0) {
LAB_00100b01:
    uVar2 = 0;
    goto LAB_00100b03;
  }
  ameth = EVP_PKEY_asn1_find_str((ENGINE **)0x0,param_2,-1);
  if (ameth == (EVP_PKEY_ASN1_METHOD *)0x0) {
    local_24 = OBJ_sn2nid(param_2);
  }
  else {
    EVP_PKEY_asn1_get0_info(&local_24,(int *)0x0,(int *)0x0,(char **)0x0,(char **)0x0,ameth);
  }
  if (local_24 == 0) {
    local_24 = OBJ_ln2nid(param_2);
    if (local_24 != 0) goto LAB_00100aa8;
    iVar1 = EC_curve_nist2nid(param_2);
    if (iVar1 == 0x506) goto LAB_00100b50;
    if (iVar1 == 0x507) goto LAB_00100aba;
    if (iVar1 == 0x505) goto LAB_00100b3f;
    if (iVar1 == 0) goto LAB_00100b01;
  }
  else {
LAB_00100aa8:
    if (local_24 == 0x506) {
LAB_00100b50:
      iVar1 = 0x3a3;
    }
    else if (local_24 == 0x507) {
LAB_00100aba:
      iVar1 = 0x3a5;
    }
    else {
      iVar1 = local_24;
      if (local_24 == 0x505) {
LAB_00100b3f:
        iVar1 = 0x39f;
      }
    }
  }
  *param_1 = iVar1;
  uVar2 = 1;
LAB_00100b03:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void parse_expected_client_sign_type(long param_1)

{
  parse_expected_key_type(param_1 + 0x200);
  return;
}



void parse_expected_client_cert_type(long param_1)

{
  parse_expected_key_type(param_1 + 0x1f8);
  return;
}



void parse_expected_server_sign_type(long param_1)

{
  parse_expected_key_type(param_1 + 0x1e8);
  return;
}



void parse_expected_server_cert_type(long param_1)

{
  parse_expected_key_type(param_1 + 0x1e0);
  return;
}



void parse_expected_tmp_key_type(long param_1)

{
  parse_expected_key_type(param_1 + 0x1dc);
  return;
}



undefined8 parse_test_app_data_size(long param_1,char *param_2)

{
  long lVar1;
  
  lVar1 = strtol(param_2,(char **)0x0,10);
  *(int *)(param_1 + 8) = (int)lVar1;
  return 1;
}



undefined8 parse_test_max_fragment_size(long param_1,char *param_2)

{
  long lVar1;
  
  lVar1 = strtol(param_2,(char **)0x0,10);
  *(int *)(param_1 + 0xc) = (int)lVar1;
  return 1;
}



undefined8 parse_server_force_pha(long param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = OPENSSL_strcasecmp(param_2,&_LC17);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x30) = 1;
  }
  else {
    iVar1 = OPENSSL_strcasecmp(param_2,&_LC18);
    if (iVar1 != 0) {
      test_error("test/helpers/ssl_test_ctx.c",0x21,"parse_boolean given: \'%s\'",param_2);
      return 0;
    }
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  return 1;
}



void SSL_TEST_CTX_free_part_0(void *param_1)

{
  ssl_test_extra_conf_free_data((long)param_1 + 0x18);
  ssl_test_extra_conf_free_data((long)param_1 + 0xe0);
  CRYPTO_free(*(void **)((long)param_1 + 0x1c8));
  CRYPTO_free(*(void **)((long)param_1 + 0x1d0));
  CRYPTO_free(*(void **)((long)param_1 + 0x230));
  OPENSSL_sk_pop_free(*(undefined8 *)((long)param_1 + 0x1f0),&X509_NAME_free);
  OPENSSL_sk_pop_free(*(undefined8 *)((long)param_1 + 0x208),&X509_NAME_free);
  CRYPTO_free(*(void **)((long)param_1 + 0x228));
  CRYPTO_free(*(void **)((long)param_1 + 0x240));
  CRYPTO_free(param_1);
  return;
}



undefined8 parse_expected_server_sign_hash(long param_1,char *param_2)

{
  int iVar1;
  
  if (param_2 == (char *)0x0) {
    return 0;
  }
  iVar1 = OBJ_sn2nid(param_2);
  if (iVar1 == 0) {
    iVar1 = OBJ_ln2nid(param_2);
    if (iVar1 == 0) {
      return 0;
    }
  }
  *(int *)(param_1 + 0x1e4) = iVar1;
  return 1;
}



bool parse_expected_server_ca_names(long param_1,char *param_2)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  
  if (param_2 != (char *)0x0) {
    uVar1 = *(undefined8 *)(param_1 + 0x238);
    iVar2 = strcmp(param_2,"empty");
    if (iVar2 == 0) {
      lVar3 = OPENSSL_sk_new_null();
    }
    else {
      lVar3 = SSL_load_client_CA_file_ex(param_2,uVar1,0);
    }
    *(long *)(param_1 + 0x1f0) = lVar3;
    return lVar3 != 0;
  }
  return false;
}



undefined8 parse_client_alert(long param_1,char *param_2)

{
  int iVar1;
  undefined **ppuVar2;
  
  ppuVar2 = &ssl_alerts;
  do {
    iVar1 = strcmp(*ppuVar2,param_2);
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x1ac) = *(undefined4 *)(ppuVar2 + 1);
      return 1;
    }
    ppuVar2 = ppuVar2 + 2;
  } while (ppuVar2 != (undefined **)&DAT_00103030);
  return 0;
}



undefined8 parse_server_alert(long param_1,char *param_2)

{
  int iVar1;
  undefined **ppuVar2;
  
  ppuVar2 = &ssl_alerts;
  do {
    iVar1 = strcmp(*ppuVar2,param_2);
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x1b0) = *(undefined4 *)(ppuVar2 + 1);
      return 1;
    }
    ppuVar2 = ppuVar2 + 2;
  } while (ppuVar2 != (undefined **)&DAT_00103030);
  return 0;
}



undefined8 parse_protocol(long param_1,char *param_2)

{
  int iVar1;
  undefined **ppuVar2;
  
  ppuVar2 = &ssl_protocols;
  do {
    iVar1 = strcmp(*ppuVar2,param_2);
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x1b4) = *(undefined4 *)(ppuVar2 + 1);
      return 1;
    }
    ppuVar2 = ppuVar2 + 2;
  } while (ppuVar2 != (undefined **)&DAT_00102fb0);
  return 0;
}



undefined8 parse_client_verify_callback(undefined4 *param_1,char *param_2)

{
  int iVar1;
  undefined **ppuVar2;
  
  ppuVar2 = &ssl_verify_callbacks;
  do {
    iVar1 = strcmp(*ppuVar2,param_2);
    if (iVar1 == 0) {
      *param_1 = *(undefined4 *)(ppuVar2 + 1);
      return 1;
    }
    ppuVar2 = ppuVar2 + 2;
  } while (ppuVar2 != &ssl_protocols);
  return 0;
}



undefined8 parse_servername(long param_1,char *param_2)

{
  int iVar1;
  undefined **ppuVar2;
  
  ppuVar2 = &ssl_servername;
  do {
    iVar1 = strcmp(*ppuVar2,param_2);
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 4) = *(undefined4 *)(ppuVar2 + 1);
      return 1;
    }
    ppuVar2 = ppuVar2 + 2;
  } while (ppuVar2 != &ssl_verify_callbacks);
  return 0;
}



undefined8 parse_expected_servername(long param_1,char *param_2)

{
  int iVar1;
  undefined **ppuVar2;
  
  ppuVar2 = &ssl_servername;
  do {
    iVar1 = strcmp(*ppuVar2,param_2);
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x1b8) = *(undefined4 *)(ppuVar2 + 1);
      return 1;
    }
    ppuVar2 = ppuVar2 + 2;
  } while (ppuVar2 != &ssl_verify_callbacks);
  return 0;
}



undefined8 parse_expected_result(long param_1,char *param_2)

{
  int iVar1;
  undefined **ppuVar2;
  
  ppuVar2 = &ssl_test_results;
  do {
    iVar1 = strcmp(*ppuVar2,param_2);
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x1a8) = *(undefined4 *)(ppuVar2 + 1);
      return 1;
    }
    ppuVar2 = ppuVar2 + 2;
  } while (ppuVar2 != (undefined **)&_LC32);
  return 0;
}



undefined8 parse_servername_callback(undefined4 *param_1,char *param_2)

{
  int iVar1;
  undefined **ppuVar2;
  
  ppuVar2 = &ssl_servername_callbacks;
  do {
    iVar1 = strcmp(*ppuVar2,param_2);
    if (iVar1 == 0) {
      *param_1 = *(undefined4 *)(ppuVar2 + 1);
      return 1;
    }
    ppuVar2 = ppuVar2 + 2;
  } while (ppuVar2 != &ssl_servername);
  return 0;
}



undefined8 parse_session_ticket(long param_1,char *param_2)

{
  int iVar1;
  undefined **ppuVar2;
  
  ppuVar2 = &ssl_session_ticket;
  do {
    iVar1 = strcmp(*ppuVar2,param_2);
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x1bc) = *(undefined4 *)(ppuVar2 + 1);
      return 1;
    }
    ppuVar2 = ppuVar2 + 2;
  } while (ppuVar2 != (undefined **)&DAT_00102e50);
  return 0;
}



undefined8 parse_session_id(long param_1,char *param_2)

{
  int iVar1;
  undefined **ppuVar2;
  
  ppuVar2 = &ssl_session_id;
  do {
    iVar1 = strcmp(*ppuVar2,param_2);
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x220) = *(undefined4 *)(ppuVar2 + 1);
      return 1;
    }
    ppuVar2 = ppuVar2 + 2;
  } while (ppuVar2 != (undefined **)&DAT_00102e10);
  return 0;
}



undefined8 parse_test_method(undefined4 *param_1,char *param_2)

{
  int iVar1;
  undefined **ppuVar2;
  
  ppuVar2 = &ssl_test_methods;
  do {
    iVar1 = strcmp(*ppuVar2,param_2);
    if (iVar1 == 0) {
      *param_1 = *(undefined4 *)(ppuVar2 + 1);
      return 1;
    }
    ppuVar2 = ppuVar2 + 2;
  } while (ppuVar2 != (undefined **)&DAT_00102dd0);
  return 0;
}



undefined8 parse_handshake_mode(long param_1,char *param_2)

{
  int iVar1;
  undefined **ppuVar2;
  
  ppuVar2 = &ssl_handshake_modes;
  do {
    iVar1 = strcmp(*ppuVar2,param_2);
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 4) = *(undefined4 *)(ppuVar2 + 1);
      return 1;
    }
    ppuVar2 = ppuVar2 + 2;
  } while (ppuVar2 != (undefined **)&DAT_00102d90);
  return 0;
}



undefined8 parse_key_update_type(long param_1,char *param_2)

{
  int iVar1;
  
  iVar1 = strcmp("KeyUpdateRequested",param_2);
  if (iVar1 == 0) {
    iVar1 = 1;
  }
  else {
    iVar1 = strcmp("KeyUpdateNotRequested",param_2);
    if (iVar1 != 0) {
      return 0;
    }
  }
  *(int *)(param_1 + 0x10) = iVar1;
  return 1;
}



undefined8 parse_ct_validation(long param_1,char *param_2)

{
  int iVar1;
  undefined **ppuVar2;
  
  ppuVar2 = &ssl_ct_validation_modes;
  do {
    iVar1 = strcmp(*ppuVar2,param_2);
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(ppuVar2 + 1);
      return 1;
    }
    ppuVar2 = ppuVar2 + 2;
  } while (ppuVar2 != (undefined **)&DAT_00102d10);
  return 0;
}



undefined8 parse_certstatus(long param_1,char *param_2)

{
  int iVar1;
  undefined **ppuVar2;
  
  ppuVar2 = &ssl_certstatus;
  do {
    iVar1 = strcmp(*ppuVar2,param_2);
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(ppuVar2 + 1);
      return 1;
    }
    ppuVar2 = ppuVar2 + 2;
  } while (ppuVar2 != (undefined **)&DAT_00102cd0);
  return 0;
}



undefined8 parse_test_compress_certificates(long param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = OPENSSL_strcasecmp(param_2,&_LC17);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x214) = 1;
  }
  else {
    iVar1 = OPENSSL_strcasecmp(param_2,&_LC18);
    if (iVar1 != 0) {
      test_error("test/helpers/ssl_test_ctx.c",0x21,"parse_boolean given: \'%s\'",param_2);
      return 0;
    }
    *(undefined4 *)(param_1 + 0x214) = 0;
  }
  return 1;
}



undefined8 parse_test_enable_client_sctp_label_bug(long param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = OPENSSL_strcasecmp(param_2,&_LC17);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x218) = 1;
  }
  else {
    iVar1 = OPENSSL_strcasecmp(param_2,&_LC18);
    if (iVar1 != 0) {
      test_error("test/helpers/ssl_test_ctx.c",0x21,"parse_boolean given: \'%s\'",param_2);
      return 0;
    }
    *(undefined4 *)(param_1 + 0x218) = 0;
  }
  return 1;
}



undefined8 parse_test_enable_server_sctp_label_bug(long param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = OPENSSL_strcasecmp(param_2,&_LC17);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x21c) = 1;
  }
  else {
    iVar1 = OPENSSL_strcasecmp(param_2,&_LC18);
    if (iVar1 != 0) {
      test_error("test/helpers/ssl_test_ctx.c",0x21,"parse_boolean given: \'%s\'",param_2);
      return 0;
    }
    *(undefined4 *)(param_1 + 0x21c) = 0;
  }
  return 1;
}



undefined8 parse_test_use_sctp(long param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = OPENSSL_strcasecmp(param_2,&_LC17);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x210) = 1;
  }
  else {
    iVar1 = OPENSSL_strcasecmp(param_2,&_LC18);
    if (iVar1 != 0) {
      test_error("test/helpers/ssl_test_ctx.c",0x21,"parse_boolean given: \'%s\'",param_2);
      return 0;
    }
    *(undefined4 *)(param_1 + 0x210) = 0;
  }
  return 1;
}



undefined8 parse_test_resumption_expected(long param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = OPENSSL_strcasecmp(param_2,&_LC17);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x1d8) = 1;
  }
  else {
    iVar1 = OPENSSL_strcasecmp(param_2,&_LC18);
    if (iVar1 != 0) {
      test_error("test/helpers/ssl_test_ctx.c",0x21,"parse_boolean given: \'%s\'",param_2);
      return 0;
    }
    *(undefined4 *)(param_1 + 0x1d8) = 0;
  }
  return 1;
}



undefined8 parse_server_broken_session_ticket(long param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = OPENSSL_strcasecmp(param_2,&_LC17);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x18) = 1;
  }
  else {
    iVar1 = OPENSSL_strcasecmp(param_2,&_LC18);
    if (iVar1 != 0) {
      test_error("test/helpers/ssl_test_ctx.c",0x21,"parse_boolean given: \'%s\'",param_2);
      return 0;
    }
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  return 1;
}



undefined8 parse_client_no_extms_on_reneg(long param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = OPENSSL_strcasecmp(param_2,&_LC17);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x44) = 1;
  }
  else {
    iVar1 = OPENSSL_strcasecmp(param_2,&_LC18);
    if (iVar1 != 0) {
      test_error("test/helpers/ssl_test_ctx.c",0x21,"parse_boolean given: \'%s\'",param_2);
      return 0;
    }
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  return 1;
}



undefined8 parse_test_compression_expected(long param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = OPENSSL_strcasecmp(param_2,&_LC17);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x1c0) = 1;
  }
  else {
    iVar1 = OPENSSL_strcasecmp(param_2,&_LC18);
    if (iVar1 != 0) {
      test_error("test/helpers/ssl_test_ctx.c",0x21,"parse_boolean given: \'%s\'",param_2);
      return 0;
    }
    *(undefined4 *)(param_1 + 0x1c0) = 0;
  }
  return 1;
}



undefined8 parse_client_enable_pha(long param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = OPENSSL_strcasecmp(param_2,&_LC17);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x40) = 1;
  }
  else {
    iVar1 = OPENSSL_strcasecmp(param_2,&_LC18);
    if (iVar1 != 0) {
      test_error("test/helpers/ssl_test_ctx.c",0x21,"parse_boolean given: \'%s\'",param_2);
      return 0;
    }
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  return 1;
}



char * ssl_test_result_name(int param_1)

{
  undefined **ppuVar1;
  
  ppuVar1 = &ssl_test_results;
  do {
    if (param_1 == *(int *)(ppuVar1 + 1)) {
      return *ppuVar1;
    }
    ppuVar1 = ppuVar1 + 2;
  } while (ppuVar1 != (undefined **)&_LC32);
  return "InvalidValue";
}



char * ssl_alert_name(int param_1)

{
  undefined **ppuVar1;
  
  ppuVar1 = &ssl_alerts;
  do {
    if (param_1 == *(int *)(ppuVar1 + 1)) {
      return *ppuVar1;
    }
    ppuVar1 = ppuVar1 + 2;
  } while (ppuVar1 != (undefined **)&DAT_00103030);
  return "InvalidValue";
}



char * ssl_protocol_name(int param_1)

{
  undefined **ppuVar1;
  
  ppuVar1 = &ssl_protocols;
  do {
    if (param_1 == *(int *)(ppuVar1 + 1)) {
      return *ppuVar1;
    }
    ppuVar1 = ppuVar1 + 2;
  } while (ppuVar1 != (undefined **)&DAT_00102fb0);
  return "InvalidValue";
}



char * ssl_verify_callback_name(int param_1)

{
  undefined **ppuVar1;
  
  ppuVar1 = &ssl_verify_callbacks;
  do {
    if (param_1 == *(int *)(ppuVar1 + 1)) {
      return *ppuVar1;
    }
    ppuVar1 = ppuVar1 + 2;
  } while (ppuVar1 != &ssl_protocols);
  return "InvalidValue";
}



char * ssl_servername_name(int param_1)

{
  undefined **ppuVar1;
  
  ppuVar1 = &ssl_servername;
  do {
    if (param_1 == *(int *)(ppuVar1 + 1)) {
      return *ppuVar1;
    }
    ppuVar1 = ppuVar1 + 2;
  } while (ppuVar1 != &ssl_verify_callbacks);
  return "InvalidValue";
}



char * ssl_servername_callback_name(int param_1)

{
  undefined **ppuVar1;
  
  ppuVar1 = &ssl_servername_callbacks;
  do {
    if (param_1 == *(int *)(ppuVar1 + 1)) {
      return *ppuVar1;
    }
    ppuVar1 = ppuVar1 + 2;
  } while (ppuVar1 != &ssl_servername);
  return "InvalidValue";
}



char * ssl_session_ticket_name(int param_1)

{
  char *pcVar1;
  
  pcVar1 = "Ignore";
  if (((param_1 != 0) && (pcVar1 = "Yes", param_1 != 1)) && (pcVar1 = "InvalidValue", param_1 == 2))
  {
    pcVar1 = "No";
  }
  return pcVar1;
}



char * ssl_session_id_name(int param_1)

{
  char *pcVar1;
  
  pcVar1 = "Ignore";
  if (((param_1 != 0) && (pcVar1 = "Yes", param_1 != 1)) && (pcVar1 = "InvalidValue", param_1 == 2))
  {
    pcVar1 = "No";
  }
  return pcVar1;
}



char * ssl_test_method_name(int param_1)

{
  char *pcVar1;
  
  pcVar1 = "TLS";
  if (((param_1 != 0) && (pcVar1 = "DTLS", param_1 != 1)) && (pcVar1 = "InvalidValue", param_1 == 2)
     ) {
    pcVar1 = "QUIC";
  }
  return pcVar1;
}



char * ssl_handshake_mode_name(int param_1)

{
  undefined **ppuVar1;
  
  ppuVar1 = &ssl_handshake_modes;
  do {
    if (param_1 == *(int *)(ppuVar1 + 1)) {
      return *ppuVar1;
    }
    ppuVar1 = ppuVar1 + 2;
  } while (ppuVar1 != (undefined **)&DAT_00102d90);
  return "InvalidValue";
}



char * ssl_ct_validation_name(int param_1)

{
  char *pcVar1;
  
  pcVar1 = "None";
  if (((param_1 != 0) && (pcVar1 = "Permissive", param_1 != 1)) &&
     (pcVar1 = "InvalidValue", param_1 == 2)) {
    pcVar1 = "Strict";
  }
  return pcVar1;
}



char * ssl_certstatus_name(int param_1)

{
  char *pcVar1;
  
  pcVar1 = "None";
  if (((param_1 != 0) && (pcVar1 = "GoodResponse", param_1 != 1)) &&
     (pcVar1 = "InvalidValue", param_1 == 2)) {
    pcVar1 = "BadResponse";
  }
  return pcVar1;
}



char * ssl_max_fragment_len_name(int param_1)

{
  undefined **ppuVar1;
  
  ppuVar1 = &ssl_max_fragment_len_mode;
  do {
    if (param_1 == *(int *)(ppuVar1 + 1)) {
      return *ppuVar1;
    }
    ppuVar1 = ppuVar1 + 2;
  } while (ppuVar1 != (undefined **)&DAT_00102c90);
  return "InvalidValue";
}



void SSL_TEST_CTX_new(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = CRYPTO_zalloc(0x248,"test/helpers/ssl_test_ctx.c",0x2e8);
  uVar1 = _LC32;
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x238) = param_1;
    *(undefined8 *)(lVar2 + 8) = uVar1;
  }
  return;
}



void SSL_TEST_CTX_free(long param_1)

{
  if (param_1 != 0) {
    SSL_TEST_CTX_free_part_0();
    return;
  }
  return;
}



/* WARNING: Type propagation algorithm not settling */

long SSL_TEST_CTX_create(CONF *param_1,char *param_2,undefined8 param_3)

{
  char *__s1;
  int iVar1;
  int iVar2;
  stack_st_CONF_VALUE *psVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined **ppuVar7;
  
  psVar3 = NCONF_get_section(param_1,param_2);
  iVar1 = test_ptr("test/helpers/ssl_test_ctx.c",0x362,
                   "sk_conf = NCONF_get_section(conf, test_section)",psVar3);
  if (iVar1 != 0) {
    lVar4 = CRYPTO_zalloc(0x248,"test/helpers/ssl_test_ctx.c",0x2e8);
    if (lVar4 == 0) {
      iVar1 = test_ptr("test/helpers/ssl_test_ctx.c",0x363,"ctx = SSL_TEST_CTX_new(libctx)",0);
      if (iVar1 != 0) goto LAB_00101dfc;
    }
    else {
      *(undefined8 *)(lVar4 + 0x238) = param_3;
      *(undefined8 *)(lVar4 + 8) = _LC32;
      iVar1 = test_ptr("test/helpers/ssl_test_ctx.c",0x363,"ctx = SSL_TEST_CTX_new(libctx)",lVar4);
      if (iVar1 != 0) {
LAB_00101dfc:
        iVar1 = 0;
        do {
          iVar2 = OPENSSL_sk_num(psVar3);
          if (iVar2 <= iVar1) {
            return lVar4;
          }
          lVar5 = OPENSSL_sk_value(psVar3,iVar1);
          __s1 = *(char **)(lVar5 + 8);
          iVar2 = strcmp(__s1,"client");
          if (iVar2 == 0) {
            iVar2 = parse_client_options(lVar4 + 0x18,param_1,*(undefined8 *)(lVar5 + 0x10));
joined_r0x00101f5b:
            if (iVar2 == 0) {
LAB_00101ef9:
              if (lVar4 == 0) {
                return 0;
              }
              break;
            }
          }
          else {
            iVar2 = strcmp(__s1,"server");
            if (iVar2 == 0) {
              iVar2 = parse_server_options(lVar4 + 0x60,param_1,*(undefined8 *)(lVar5 + 0x10));
              goto joined_r0x00101f5b;
            }
            iVar2 = strcmp(__s1,"server2");
            if (iVar2 == 0) {
              iVar2 = parse_server_options(lVar4 + 0xa0,param_1,*(undefined8 *)(lVar5 + 0x10));
              goto joined_r0x00101f5b;
            }
            iVar2 = strcmp(__s1,"resume-client");
            if (iVar2 == 0) {
              iVar2 = parse_client_options(lVar4 + 0xe0,param_1,*(undefined8 *)(lVar5 + 0x10));
              goto joined_r0x00101f5b;
            }
            iVar2 = strcmp(__s1,"resume-server");
            if (iVar2 == 0) {
              iVar2 = parse_server_options(lVar4 + 0x128,param_1,*(undefined8 *)(lVar5 + 0x10));
              goto joined_r0x00101f5b;
            }
            iVar2 = strcmp(__s1,"resume-server2");
            if (iVar2 == 0) {
              iVar2 = parse_server_options(lVar4 + 0x168,param_1,*(undefined8 *)(lVar5 + 0x10));
              goto joined_r0x00101f5b;
            }
            ppuVar7 = &ssl_test_ctx_options;
            lVar6 = 0;
            while (iVar2 = strcmp(__s1,*ppuVar7), iVar2 != 0) {
              lVar6 = lVar6 + 1;
              ppuVar7 = ppuVar7 + 2;
              if (lVar6 == 0x20) {
                test_info("test/helpers/ssl_test_ctx.c",0x38d,"Unknown test option: %s",__s1);
                goto LAB_00101ef9;
              }
            }
            iVar2 = (*(code *)(&PTR_parse_expected_result_00102a48)[lVar6 * 2])
                              (lVar4,*(undefined8 *)(lVar5 + 0x10));
            if (iVar2 == 0) {
              test_info("test/helpers/ssl_test_ctx.c",900,"Bad value %s for option %s",
                        *(undefined8 *)(lVar5 + 0x10),*(undefined8 *)(lVar5 + 8));
              goto LAB_00101ef9;
            }
          }
          iVar1 = iVar1 + 1;
        } while( true );
      }
      SSL_TEST_CTX_free_part_0(lVar4);
    }
  }
  return 0;
}


