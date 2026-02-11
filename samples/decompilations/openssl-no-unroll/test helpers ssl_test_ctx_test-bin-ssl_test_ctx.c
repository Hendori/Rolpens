
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



undefined8 parse_client_options(undefined8 param_1,CONF *param_2,char *param_3)

{
  char *__s1;
  int iVar1;
  stack_st_CONF_VALUE *psVar2;
  long lVar3;
  undefined8 uVar4;
  code *pcVar5;
  int iVar6;
  
  iVar6 = 0;
  psVar2 = NCONF_get_section(param_2,param_3);
  iVar1 = test_ptr("test/helpers/ssl_test_ctx.c",799,
                   "sk_conf = NCONF_get_section(conf, client_section)",psVar2);
  if (iVar1 == 0) {
LAB_001002b6:
    uVar4 = 0;
  }
  else {
    while( true ) {
      iVar1 = OPENSSL_sk_num(psVar2);
      if (iVar1 <= iVar6) break;
      lVar3 = OPENSSL_sk_value(psVar2,iVar6);
      __s1 = *(char **)(lVar3 + 8);
      iVar1 = strcmp(__s1,"VerifyCallback");
      if (iVar1 == 0) {
        pcVar5 = parse_client_verify_callback;
      }
      else {
        iVar1 = strcmp(__s1,"ServerName");
        if (iVar1 == 0) {
          pcVar5 = parse_servername;
        }
        else {
          iVar1 = strcmp(__s1,"NPNProtocols");
          if (iVar1 == 0) {
            pcVar5 = parse_client_npn_protocols;
          }
          else {
            iVar1 = strcmp(__s1,"ALPNProtocols");
            if (iVar1 == 0) {
              pcVar5 = parse_client_alpn_protocols;
            }
            else {
              iVar1 = strcmp(__s1,"CTValidation");
              if (iVar1 == 0) {
                pcVar5 = parse_ct_validation;
              }
              else {
                iVar1 = strcmp(__s1,"RenegotiateCiphers");
                if (iVar1 == 0) {
                  pcVar5 = parse_client_reneg_ciphers;
                }
                else {
                  iVar1 = strcmp(__s1,"SRPUser");
                  if (iVar1 == 0) {
                    pcVar5 = parse_client_srp_user;
                  }
                  else {
                    iVar1 = strcmp(__s1,"SRPPassword");
                    if (iVar1 == 0) {
                      pcVar5 = parse_client_srp_password;
                    }
                    else {
                      iVar1 = strcmp(__s1,"MaxFragmentLenExt");
                      if (iVar1 == 0) {
                        pcVar5 = parse_max_fragment_len_mode;
                      }
                      else {
                        iVar1 = strcmp(__s1,"EnablePHA");
                        if (iVar1 == 0) {
                          pcVar5 = parse_client_enable_pha;
                        }
                        else {
                          iVar1 = strcmp(__s1,"RenegotiateNoExtms");
                          if (iVar1 != 0) {
                            test_info("test/helpers/ssl_test_ctx.c",0x331,"Unknown test option: %s",
                                      __s1);
                            goto LAB_001002b6;
                          }
                          pcVar5 = parse_client_no_extms_on_reneg;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      iVar1 = (*pcVar5)(param_1,*(undefined8 *)(lVar3 + 0x10));
      if (iVar1 == 0) {
        test_info("test/helpers/ssl_test_ctx.c",0x328,"Bad value %s for option %s",
                  *(undefined8 *)(lVar3 + 0x10),*(undefined8 *)(lVar3 + 8));
        goto LAB_001002b6;
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
  code *pcVar5;
  int iVar6;
  
  iVar6 = 0;
  psVar2 = NCONF_get_section(param_2,param_3);
  iVar1 = test_ptr("test/helpers/ssl_test_ctx.c",0x340,
                   "sk_conf = NCONF_get_section(conf, server_section)",psVar2);
  if (iVar1 == 0) {
LAB_001004c8:
    uVar4 = 0;
  }
  else {
    while( true ) {
      iVar1 = OPENSSL_sk_num(psVar2);
      if (iVar1 <= iVar6) break;
      lVar3 = OPENSSL_sk_value(psVar2,iVar6);
      __s1 = *(char **)(lVar3 + 8);
      iVar1 = strcmp(__s1,"ServerNameCallback");
      if (iVar1 == 0) {
        pcVar5 = parse_servername_callback;
      }
      else {
        iVar1 = strcmp(__s1,"NPNProtocols");
        if (iVar1 == 0) {
          pcVar5 = parse_server_npn_protocols;
        }
        else {
          iVar1 = strcmp(__s1,"ALPNProtocols");
          if (iVar1 == 0) {
            pcVar5 = parse_server_alpn_protocols;
          }
          else {
            iVar1 = strcmp(__s1,"BrokenSessionTicket");
            if (iVar1 == 0) {
              pcVar5 = parse_server_broken_session_ticket;
            }
            else {
              iVar1 = strcmp(__s1,"CertStatus");
              if (iVar1 == 0) {
                pcVar5 = parse_certstatus;
              }
              else {
                iVar1 = strcmp(__s1,"SRPUser");
                if (iVar1 == 0) {
                  pcVar5 = parse_server_srp_user;
                }
                else {
                  iVar1 = strcmp(__s1,"SRPPassword");
                  if (iVar1 == 0) {
                    pcVar5 = parse_server_srp_password;
                  }
                  else {
                    iVar1 = strcmp(__s1,"ForcePHA");
                    if (iVar1 == 0) {
                      pcVar5 = parse_server_force_pha;
                    }
                    else {
                      iVar1 = strcmp(__s1,"SessionTicketAppData");
                      if (iVar1 != 0) {
                        test_info("test/helpers/ssl_test_ctx.c",0x352,"Unknown test option: %s",__s1
                                 );
                        goto LAB_001004c8;
                      }
                      pcVar5 = parse_server_session_ticket_app_data;
                    }
                  }
                }
              }
            }
          }
        }
      }
      iVar1 = (*pcVar5)(param_1,*(undefined8 *)(lVar3 + 0x10));
      if (iVar1 == 0) {
        test_info("test/helpers/ssl_test_ctx.c",0x349,"Bad value %s for option %s",
                  *(undefined8 *)(lVar3 + 0x10),*(undefined8 *)(lVar3 + 8));
        goto LAB_001004c8;
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



undefined8 parse_expected_client_sign_type(long param_1,char *param_2)

{
  int iVar1;
  EVP_PKEY_ASN1_METHOD *ameth;
  undefined8 uVar2;
  long in_FS_OFFSET;
  int local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == (char *)0x0) {
LAB_00100c91:
    uVar2 = 0;
    goto LAB_00100c93;
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
    if (local_24 != 0) goto LAB_00100c3c;
    iVar1 = EC_curve_nist2nid(param_2);
    if (iVar1 == 0x506) goto LAB_00100ce0;
    if (iVar1 == 0x507) goto LAB_00100c4e;
    if (iVar1 == 0x505) goto LAB_00100cd3;
    if (iVar1 == 0) goto LAB_00100c91;
  }
  else {
LAB_00100c3c:
    if (local_24 == 0x506) {
LAB_00100ce0:
      iVar1 = 0x3a3;
    }
    else if (local_24 == 0x507) {
LAB_00100c4e:
      iVar1 = 0x3a5;
    }
    else {
      iVar1 = local_24;
      if (local_24 == 0x505) {
LAB_00100cd3:
        iVar1 = 0x39f;
      }
    }
  }
  *(int *)(param_1 + 0x200) = iVar1;
  uVar2 = 1;
LAB_00100c93:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



undefined8 parse_client_enable_pha(long param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = OPENSSL_strcasecmp(param_2,&_LC33);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x40) = 1;
  }
  else {
    iVar1 = OPENSSL_strcasecmp(param_2,&_LC34);
    if (iVar1 != 0) {
      test_error("test/helpers/ssl_test_ctx.c",0x21,"parse_boolean given: \'%s\'",param_2);
      return 0;
    }
    *(undefined4 *)(param_1 + 0x40) = 0;
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



undefined8 parse_expected_result(long param_1,char *param_2)

{
  int iVar1;
  undefined **ppuVar2;
  
  iVar1 = strcmp("Success",param_2);
  if (iVar1 == 0) {
    ppuVar2 = &ssl_test_results;
  }
  else {
    iVar1 = strcmp("ServerFail",param_2);
    if (iVar1 == 0) {
      ppuVar2 = &PTR__LC37_00103a50;
    }
    else {
      iVar1 = strcmp("ClientFail",param_2);
      if (iVar1 == 0) {
        ppuVar2 = &PTR__LC38_00103a60;
      }
      else {
        iVar1 = strcmp("InternalError",param_2);
        if (iVar1 == 0) {
          ppuVar2 = &PTR__LC39_00103a70;
        }
        else {
          iVar1 = strcmp("FirstHandshakeFailed",param_2);
          if (iVar1 != 0) {
            return 0;
          }
          ppuVar2 = &PTR__LC40_00103a80;
        }
      }
    }
  }
  *(undefined4 *)(param_1 + 0x1a8) = *(undefined4 *)(ppuVar2 + 1);
  return 1;
}



undefined8 parse_certstatus(long param_1,char *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  
  iVar1 = strcmp("None",param_2);
  if (iVar1 == 0) {
    puVar2 = ssl_certstatus;
  }
  else {
    iVar1 = strcmp("GoodResponse",param_2);
    if (iVar1 == 0) {
      puVar2 = (undefined1 *)0x1036b0;
    }
    else {
      iVar1 = strcmp("BadResponse",param_2);
      if (iVar1 != 0) {
        return 0;
      }
      puVar2 = (undefined1 *)0x1036c0;
    }
  }
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(puVar2 + 8);
  return 1;
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



undefined8 parse_handshake_mode(long param_1,char *param_2)

{
  int iVar1;
  undefined **ppuVar2;
  
  iVar1 = strcmp("Simple",param_2);
  if (iVar1 == 0) {
    ppuVar2 = &ssl_handshake_modes;
  }
  else {
    iVar1 = strcmp("Resume",param_2);
    if (iVar1 == 0) {
      ppuVar2 = &PTR__LC47_00103730;
    }
    else {
      iVar1 = strcmp("RenegotiateServer",param_2);
      if (iVar1 == 0) {
        ppuVar2 = &PTR__LC48_00103740;
      }
      else {
        iVar1 = strcmp("RenegotiateClient",param_2);
        if (iVar1 == 0) {
          ppuVar2 = &PTR__LC49_00103750;
        }
        else {
          iVar1 = strcmp("KeyUpdateServer",param_2);
          if (iVar1 == 0) {
            ppuVar2 = &PTR__LC50_00103760;
          }
          else {
            iVar1 = strcmp("KeyUpdateClient",param_2);
            if (iVar1 == 0) {
              ppuVar2 = &PTR__LC51_00103770;
            }
            else {
              iVar1 = strcmp("PostHandshakeAuth",param_2);
              if (iVar1 != 0) {
                return 0;
              }
              ppuVar2 = &PTR__LC52_00103780;
            }
          }
        }
      }
    }
  }
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(ppuVar2 + 1);
  return 1;
}



undefined8 parse_servername_callback(undefined4 *param_1,char *param_2)

{
  int iVar1;
  undefined **ppuVar2;
  
  iVar1 = strcmp("None",param_2);
  if (iVar1 == 0) {
    ppuVar2 = &ssl_servername_callbacks;
  }
  else {
    iVar1 = strcmp("IgnoreMismatch",param_2);
    if (iVar1 == 0) {
      ppuVar2 = &PTR__LC53_00103870;
    }
    else {
      iVar1 = strcmp("RejectMismatch",param_2);
      if (iVar1 == 0) {
        ppuVar2 = &PTR__LC54_00103880;
      }
      else {
        iVar1 = strcmp("ClientHelloIgnoreMismatch",param_2);
        if (iVar1 == 0) {
          ppuVar2 = &PTR__LC55_00103890;
        }
        else {
          iVar1 = strcmp("ClientHelloRejectMismatch",param_2);
          if (iVar1 == 0) {
            ppuVar2 = &PTR__LC56_001038a0;
          }
          else {
            iVar1 = strcmp("ClientHelloNoV12",param_2);
            if (iVar1 != 0) {
              return 0;
            }
            ppuVar2 = &PTR__LC57_001038b0;
          }
        }
      }
    }
  }
  *param_1 = *(undefined4 *)(ppuVar2 + 1);
  return 1;
}



undefined8 parse_expected_servername(long param_1,char *param_2)

{
  int iVar1;
  undefined **ppuVar2;
  
  iVar1 = strcmp("None",param_2);
  if (iVar1 == 0) {
    ppuVar2 = &ssl_servername;
  }
  else {
    iVar1 = strcmp("server1",param_2);
    if (iVar1 == 0) {
      ppuVar2 = &PTR__LC58_001038d0;
    }
    else {
      iVar1 = strcmp("server2",param_2);
      if (iVar1 == 0) {
        ppuVar2 = &PTR__LC59_001038e0;
      }
      else {
        iVar1 = strcmp("invalid",param_2);
        if (iVar1 != 0) {
          return 0;
        }
        ppuVar2 = &PTR__LC60_001038f0;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x1b8) = *(undefined4 *)(ppuVar2 + 1);
  return 1;
}



undefined8 parse_max_fragment_len_mode(long param_1,char *param_2)

{
  int iVar1;
  undefined **ppuVar2;
  
  iVar1 = strcmp("None",param_2);
  if (iVar1 == 0) {
    ppuVar2 = &ssl_max_fragment_len_mode;
  }
  else {
    iVar1 = strcmp("512",param_2);
    if (iVar1 == 0) {
      ppuVar2 = &PTR__LC61_00103650;
    }
    else {
      iVar1 = strcmp("1024",param_2);
      if (iVar1 == 0) {
        ppuVar2 = &PTR__LC62_00103660;
      }
      else {
        iVar1 = strcmp("2048",param_2);
        if (iVar1 == 0) {
          ppuVar2 = &PTR__LC63_00103670;
        }
        else {
          iVar1 = strcmp("4096",param_2);
          if (iVar1 != 0) {
            return 0;
          }
          ppuVar2 = &PTR__LC64_00103680;
        }
      }
    }
  }
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(ppuVar2 + 1);
  return 1;
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



undefined8 parse_client_verify_callback(undefined4 *param_1,char *param_2)

{
  int iVar1;
  undefined **ppuVar2;
  
  iVar1 = strcmp("None",param_2);
  if (iVar1 == 0) {
    ppuVar2 = &ssl_verify_callbacks;
  }
  else {
    iVar1 = strcmp("AcceptAll",param_2);
    if (iVar1 == 0) {
      ppuVar2 = &PTR__LC65_00103910;
    }
    else {
      iVar1 = strcmp("RetryOnce",param_2);
      if (iVar1 == 0) {
        ppuVar2 = &PTR__LC66_00103920;
      }
      else {
        iVar1 = strcmp("RejectAll",param_2);
        if (iVar1 != 0) {
          return 0;
        }
        ppuVar2 = &PTR__LC67_00103930;
      }
    }
  }
  *param_1 = *(undefined4 *)(ppuVar2 + 1);
  return 1;
}



undefined8 parse_servername(long param_1,char *param_2)

{
  int iVar1;
  undefined **ppuVar2;
  
  iVar1 = strcmp("None",param_2);
  if (iVar1 == 0) {
    ppuVar2 = &ssl_servername;
  }
  else {
    iVar1 = strcmp("server1",param_2);
    if (iVar1 == 0) {
      ppuVar2 = &PTR__LC58_001038d0;
    }
    else {
      iVar1 = strcmp("server2",param_2);
      if (iVar1 == 0) {
        ppuVar2 = &PTR__LC59_001038e0;
      }
      else {
        iVar1 = strcmp("invalid",param_2);
        if (iVar1 != 0) {
          return 0;
        }
        ppuVar2 = &PTR__LC60_001038f0;
      }
    }
  }
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(ppuVar2 + 1);
  return 1;
}



undefined8 parse_client_alert(long param_1,char *param_2)

{
  int iVar1;
  undefined **ppuVar2;
  
  iVar1 = strcmp("UnknownCA",param_2);
  if (iVar1 == 0) {
    ppuVar2 = &ssl_alerts;
  }
  else {
    iVar1 = strcmp("HandshakeFailure",param_2);
    if (iVar1 == 0) {
      ppuVar2 = &PTR__LC69_001039d0;
    }
    else {
      iVar1 = strcmp("UnrecognizedName",param_2);
      if (iVar1 == 0) {
        ppuVar2 = &PTR__LC70_001039e0;
      }
      else {
        iVar1 = strcmp("NoRenegotiation",param_2);
        if (iVar1 == 0) {
          ppuVar2 = &PTR__LC71_001039f0;
        }
        else {
          iVar1 = strcmp("BadCertificate",param_2);
          if (iVar1 == 0) {
            ppuVar2 = &PTR__LC72_00103a00;
          }
          else {
            iVar1 = strcmp("NoApplicationProtocol",param_2);
            if (iVar1 == 0) {
              ppuVar2 = &PTR__LC73_00103a10;
            }
            else {
              iVar1 = strcmp("CertificateRequired",param_2);
              if (iVar1 != 0) {
                return 0;
              }
              ppuVar2 = &PTR__LC74_00103a20;
            }
          }
        }
      }
    }
  }
  *(undefined4 *)(param_1 + 0x1ac) = *(undefined4 *)(ppuVar2 + 1);
  return 1;
}



undefined8 parse_server_alert(long param_1,char *param_2)

{
  int iVar1;
  undefined **ppuVar2;
  
  iVar1 = strcmp("UnknownCA",param_2);
  if (iVar1 == 0) {
    ppuVar2 = &ssl_alerts;
  }
  else {
    iVar1 = strcmp("HandshakeFailure",param_2);
    if (iVar1 == 0) {
      ppuVar2 = &PTR__LC69_001039d0;
    }
    else {
      iVar1 = strcmp("UnrecognizedName",param_2);
      if (iVar1 == 0) {
        ppuVar2 = &PTR__LC70_001039e0;
      }
      else {
        iVar1 = strcmp("NoRenegotiation",param_2);
        if (iVar1 == 0) {
          ppuVar2 = &PTR__LC71_001039f0;
        }
        else {
          iVar1 = strcmp("BadCertificate",param_2);
          if (iVar1 == 0) {
            ppuVar2 = &PTR__LC72_00103a00;
          }
          else {
            iVar1 = strcmp("NoApplicationProtocol",param_2);
            if (iVar1 == 0) {
              ppuVar2 = &PTR__LC73_00103a10;
            }
            else {
              iVar1 = strcmp("CertificateRequired",param_2);
              if (iVar1 != 0) {
                return 0;
              }
              ppuVar2 = &PTR__LC74_00103a20;
            }
          }
        }
      }
    }
  }
  *(undefined4 *)(param_1 + 0x1b0) = *(undefined4 *)(ppuVar2 + 1);
  return 1;
}



undefined8 parse_protocol(long param_1,char *param_2)

{
  int iVar1;
  undefined **ppuVar2;
  
  iVar1 = strcmp("TLSv1.3",param_2);
  if (iVar1 == 0) {
    ppuVar2 = &ssl_protocols;
  }
  else {
    iVar1 = strcmp("TLSv1.2",param_2);
    if (iVar1 == 0) {
      ppuVar2 = &PTR__LC76_00103950;
    }
    else {
      iVar1 = strcmp("TLSv1.1",param_2);
      if (iVar1 == 0) {
        ppuVar2 = &PTR__LC77_00103960;
      }
      else {
        iVar1 = strcmp("TLSv1",param_2);
        if (iVar1 == 0) {
          ppuVar2 = &PTR__LC78_00103970;
        }
        else {
          iVar1 = strcmp("SSLv3",param_2);
          if (iVar1 == 0) {
            ppuVar2 = &PTR__LC79_00103980;
          }
          else {
            iVar1 = strcmp("DTLSv1",param_2);
            if (iVar1 == 0) {
              ppuVar2 = &PTR__LC80_00103990;
            }
            else {
              iVar1 = strcmp("DTLSv1.2",param_2);
              if (iVar1 != 0) {
                return 0;
              }
              ppuVar2 = &PTR__LC81_001039a0;
            }
          }
        }
      }
    }
  }
  *(undefined4 *)(param_1 + 0x1b4) = *(undefined4 *)(ppuVar2 + 1);
  return 1;
}



undefined8 parse_session_ticket(long param_1,char *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  
  iVar1 = strcmp("Ignore",param_2);
  if (iVar1 == 0) {
    puVar2 = ssl_session_ticket;
  }
  else {
    iVar1 = strcmp("Yes",param_2);
    if (iVar1 == 0) {
      puVar2 = (undefined1 *)0x103830;
    }
    else if (((*param_2 != 'N') || (param_2[1] != 'o')) ||
            (puVar2 = (undefined1 *)0x103840, param_2[2] != '\0')) {
      return 0;
    }
  }
  *(undefined4 *)(param_1 + 0x1bc) = *(undefined4 *)(puVar2 + 8);
  return 1;
}



undefined8 parse_session_id(long param_1,char *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  
  iVar1 = strcmp("Ignore",param_2);
  if (iVar1 == 0) {
    puVar2 = ssl_session_id;
  }
  else {
    iVar1 = strcmp("Yes",param_2);
    if (iVar1 == 0) {
      puVar2 = (undefined1 *)0x1037f0;
    }
    else if (((*param_2 != 'N') || (param_2[1] != 'o')) ||
            (puVar2 = (undefined1 *)0x103800, param_2[2] != '\0')) {
      return 0;
    }
  }
  *(undefined4 *)(param_1 + 0x220) = *(undefined4 *)(puVar2 + 8);
  return 1;
}



undefined8 parse_test_method(undefined4 *param_1,char *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  
  iVar1 = strcmp("TLS",param_2);
  if (iVar1 == 0) {
    puVar2 = ssl_test_methods;
  }
  else {
    iVar1 = strcmp("DTLS",param_2);
    if (iVar1 == 0) {
      puVar2 = (undefined1 *)0x1037b0;
    }
    else {
      iVar1 = strcmp("QUIC",param_2);
      if (iVar1 != 0) {
        return 0;
      }
      puVar2 = (undefined1 *)0x1037c0;
    }
  }
  *param_1 = *(undefined4 *)(puVar2 + 8);
  return 1;
}



undefined8 parse_ct_validation(long param_1,char *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  
  iVar1 = strcmp("None",param_2);
  if (iVar1 == 0) {
    puVar2 = ssl_ct_validation_modes;
  }
  else {
    iVar1 = strcmp("Permissive",param_2);
    if (iVar1 == 0) {
      puVar2 = (undefined1 *)0x1036f0;
    }
    else {
      iVar1 = strcmp("Strict",param_2);
      if (iVar1 != 0) {
        return 0;
      }
      puVar2 = (undefined1 *)0x103700;
    }
  }
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(puVar2 + 8);
  return 1;
}



undefined8 parse_server_force_pha(long param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = OPENSSL_strcasecmp(param_2,&_LC33);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x30) = 1;
  }
  else {
    iVar1 = OPENSSL_strcasecmp(param_2,&_LC34);
    if (iVar1 != 0) {
      test_error("test/helpers/ssl_test_ctx.c",0x21,"parse_boolean given: \'%s\'",param_2);
      return 0;
    }
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  return 1;
}



undefined8 parse_client_no_extms_on_reneg(long param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = OPENSSL_strcasecmp(param_2,&_LC33);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x44) = 1;
  }
  else {
    iVar1 = OPENSSL_strcasecmp(param_2,&_LC34);
    if (iVar1 != 0) {
      test_error("test/helpers/ssl_test_ctx.c",0x21,"parse_boolean given: \'%s\'",param_2);
      return 0;
    }
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  return 1;
}



undefined8 parse_server_broken_session_ticket(long param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = OPENSSL_strcasecmp(param_2,&_LC33);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x18) = 1;
  }
  else {
    iVar1 = OPENSSL_strcasecmp(param_2,&_LC34);
    if (iVar1 != 0) {
      test_error("test/helpers/ssl_test_ctx.c",0x21,"parse_boolean given: \'%s\'",param_2);
      return 0;
    }
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  return 1;
}



undefined8 parse_test_use_sctp(long param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = OPENSSL_strcasecmp(param_2,&_LC33);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x210) = 1;
  }
  else {
    iVar1 = OPENSSL_strcasecmp(param_2,&_LC34);
    if (iVar1 != 0) {
      test_error("test/helpers/ssl_test_ctx.c",0x21,"parse_boolean given: \'%s\'",param_2);
      return 0;
    }
    *(undefined4 *)(param_1 + 0x210) = 0;
  }
  return 1;
}



undefined8 parse_test_compress_certificates(long param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = OPENSSL_strcasecmp(param_2,&_LC33);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x214) = 1;
  }
  else {
    iVar1 = OPENSSL_strcasecmp(param_2,&_LC34);
    if (iVar1 != 0) {
      test_error("test/helpers/ssl_test_ctx.c",0x21,"parse_boolean given: \'%s\'",param_2);
      return 0;
    }
    *(undefined4 *)(param_1 + 0x214) = 0;
  }
  return 1;
}



undefined8 parse_test_resumption_expected(long param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = OPENSSL_strcasecmp(param_2,&_LC33);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x1d8) = 1;
  }
  else {
    iVar1 = OPENSSL_strcasecmp(param_2,&_LC34);
    if (iVar1 != 0) {
      test_error("test/helpers/ssl_test_ctx.c",0x21,"parse_boolean given: \'%s\'",param_2);
      return 0;
    }
    *(undefined4 *)(param_1 + 0x1d8) = 0;
  }
  return 1;
}



undefined8 parse_test_enable_server_sctp_label_bug(long param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = OPENSSL_strcasecmp(param_2,&_LC33);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x21c) = 1;
  }
  else {
    iVar1 = OPENSSL_strcasecmp(param_2,&_LC34);
    if (iVar1 != 0) {
      test_error("test/helpers/ssl_test_ctx.c",0x21,"parse_boolean given: \'%s\'",param_2);
      return 0;
    }
    *(undefined4 *)(param_1 + 0x21c) = 0;
  }
  return 1;
}



undefined8 parse_test_enable_client_sctp_label_bug(long param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = OPENSSL_strcasecmp(param_2,&_LC33);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x218) = 1;
  }
  else {
    iVar1 = OPENSSL_strcasecmp(param_2,&_LC34);
    if (iVar1 != 0) {
      test_error("test/helpers/ssl_test_ctx.c",0x21,"parse_boolean given: \'%s\'",param_2);
      return 0;
    }
    *(undefined4 *)(param_1 + 0x218) = 0;
  }
  return 1;
}



undefined8 parse_test_compression_expected(long param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = OPENSSL_strcasecmp(param_2,&_LC33);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x1c0) = 1;
  }
  else {
    iVar1 = OPENSSL_strcasecmp(param_2,&_LC34);
    if (iVar1 != 0) {
      test_error("test/helpers/ssl_test_ctx.c",0x21,"parse_boolean given: \'%s\'",param_2);
      return 0;
    }
    *(undefined4 *)(param_1 + 0x1c0) = 0;
  }
  return 1;
}



undefined8 parse_expected_tmp_key_type(long param_1,char *param_2)

{
  int iVar1;
  EVP_PKEY_ASN1_METHOD *ameth;
  undefined8 uVar2;
  long in_FS_OFFSET;
  int local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == (char *)0x0) {
LAB_00102061:
    uVar2 = 0;
    goto LAB_00102063;
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
    if (local_24 != 0) goto LAB_0010200c;
    iVar1 = EC_curve_nist2nid(param_2);
    if (iVar1 == 0x506) goto LAB_001020b0;
    if (iVar1 == 0x507) goto LAB_0010201e;
    if (iVar1 == 0x505) goto LAB_0010209f;
    if (iVar1 == 0) goto LAB_00102061;
  }
  else {
LAB_0010200c:
    if (local_24 == 0x506) {
LAB_001020b0:
      iVar1 = 0x3a3;
    }
    else if (local_24 == 0x507) {
LAB_0010201e:
      iVar1 = 0x3a5;
    }
    else {
      iVar1 = local_24;
      if (local_24 == 0x505) {
LAB_0010209f:
        iVar1 = 0x39f;
      }
    }
  }
  *(int *)(param_1 + 0x1dc) = iVar1;
  uVar2 = 1;
LAB_00102063:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 parse_expected_server_cert_type(long param_1,char *param_2)

{
  int iVar1;
  EVP_PKEY_ASN1_METHOD *ameth;
  undefined8 uVar2;
  long in_FS_OFFSET;
  int local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == (char *)0x0) {
LAB_00102171:
    uVar2 = 0;
    goto LAB_00102173;
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
    if (local_24 != 0) goto LAB_0010211c;
    iVar1 = EC_curve_nist2nid(param_2);
    if (iVar1 == 0x506) goto LAB_001021c0;
    if (iVar1 == 0x507) goto LAB_0010212e;
    if (iVar1 == 0x505) goto LAB_001021af;
    if (iVar1 == 0) goto LAB_00102171;
  }
  else {
LAB_0010211c:
    if (local_24 == 0x506) {
LAB_001021c0:
      iVar1 = 0x3a3;
    }
    else if (local_24 == 0x507) {
LAB_0010212e:
      iVar1 = 0x3a5;
    }
    else {
      iVar1 = local_24;
      if (local_24 == 0x505) {
LAB_001021af:
        iVar1 = 0x39f;
      }
    }
  }
  *(int *)(param_1 + 0x1e0) = iVar1;
  uVar2 = 1;
LAB_00102173:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 parse_expected_server_sign_type(long param_1,char *param_2)

{
  int iVar1;
  EVP_PKEY_ASN1_METHOD *ameth;
  undefined8 uVar2;
  long in_FS_OFFSET;
  int local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == (char *)0x0) {
LAB_00102281:
    uVar2 = 0;
    goto LAB_00102283;
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
    if (local_24 != 0) goto LAB_0010222c;
    iVar1 = EC_curve_nist2nid(param_2);
    if (iVar1 == 0x506) goto LAB_001022d0;
    if (iVar1 == 0x507) goto LAB_0010223e;
    if (iVar1 == 0x505) goto LAB_001022bf;
    if (iVar1 == 0) goto LAB_00102281;
  }
  else {
LAB_0010222c:
    if (local_24 == 0x506) {
LAB_001022d0:
      iVar1 = 0x3a3;
    }
    else if (local_24 == 0x507) {
LAB_0010223e:
      iVar1 = 0x3a5;
    }
    else {
      iVar1 = local_24;
      if (local_24 == 0x505) {
LAB_001022bf:
        iVar1 = 0x39f;
      }
    }
  }
  *(int *)(param_1 + 0x1e8) = iVar1;
  uVar2 = 1;
LAB_00102283:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 parse_expected_client_cert_type(long param_1,char *param_2)

{
  int iVar1;
  EVP_PKEY_ASN1_METHOD *ameth;
  undefined8 uVar2;
  long in_FS_OFFSET;
  int local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == (char *)0x0) {
LAB_00102391:
    uVar2 = 0;
    goto LAB_00102393;
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
    if (local_24 != 0) goto LAB_0010233c;
    iVar1 = EC_curve_nist2nid(param_2);
    if (iVar1 == 0x506) goto LAB_001023e0;
    if (iVar1 == 0x507) goto LAB_0010234e;
    if (iVar1 == 0x505) goto LAB_001023cf;
    if (iVar1 == 0) goto LAB_00102391;
  }
  else {
LAB_0010233c:
    if (local_24 == 0x506) {
LAB_001023e0:
      iVar1 = 0x3a3;
    }
    else if (local_24 == 0x507) {
LAB_0010234e:
      iVar1 = 0x3a5;
    }
    else {
      iVar1 = local_24;
      if (local_24 == 0x505) {
LAB_001023cf:
        iVar1 = 0x39f;
      }
    }
  }
  *(int *)(param_1 + 0x1f8) = iVar1;
  uVar2 = 1;
LAB_00102393:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



char * ssl_test_result_name(int param_1)

{
  undefined **ppuVar1;
  
  if (param_1 == 0) {
    ppuVar1 = &ssl_test_results;
  }
  else if (param_1 == 1) {
    ppuVar1 = &PTR__LC37_00103a50;
  }
  else if (param_1 == 2) {
    ppuVar1 = &PTR__LC38_00103a60;
  }
  else if (param_1 == 3) {
    ppuVar1 = &PTR__LC39_00103a70;
  }
  else {
    if (param_1 != 4) {
      return "InvalidValue";
    }
    ppuVar1 = &PTR__LC40_00103a80;
  }
  return *ppuVar1;
}



char * ssl_alert_name(int param_1)

{
  undefined **ppuVar1;
  
  if (param_1 == 0x30) {
    ppuVar1 = &ssl_alerts;
  }
  else if (param_1 == 0x28) {
    ppuVar1 = &PTR__LC69_001039d0;
  }
  else if (param_1 == 0x70) {
    ppuVar1 = &PTR__LC70_001039e0;
  }
  else if (param_1 == 100) {
    ppuVar1 = &PTR__LC71_001039f0;
  }
  else if (param_1 == 0x2a) {
    ppuVar1 = &PTR__LC72_00103a00;
  }
  else if (param_1 == 0x78) {
    ppuVar1 = &PTR__LC73_00103a10;
  }
  else {
    if (param_1 != 0x74) {
      return "InvalidValue";
    }
    ppuVar1 = &PTR__LC74_00103a20;
  }
  return *ppuVar1;
}



char * ssl_protocol_name(int param_1)

{
  undefined **ppuVar1;
  
  if (param_1 == 0x304) {
    ppuVar1 = &ssl_protocols;
  }
  else if (param_1 == 0x303) {
    ppuVar1 = &PTR__LC76_00103950;
  }
  else if (param_1 == 0x302) {
    ppuVar1 = &PTR__LC77_00103960;
  }
  else if (param_1 == 0x301) {
    ppuVar1 = &PTR__LC78_00103970;
  }
  else if (param_1 == 0x300) {
    ppuVar1 = &PTR__LC79_00103980;
  }
  else if (param_1 == 0xfeff) {
    ppuVar1 = &PTR__LC80_00103990;
  }
  else {
    if (param_1 != 0xfefd) {
      return "InvalidValue";
    }
    ppuVar1 = &PTR__LC81_001039a0;
  }
  return *ppuVar1;
}



char * ssl_verify_callback_name(int param_1)

{
  undefined **ppuVar1;
  
  if (param_1 == 0) {
    ppuVar1 = &ssl_verify_callbacks;
  }
  else if (param_1 == 1) {
    ppuVar1 = &PTR__LC65_00103910;
  }
  else if (param_1 == 2) {
    ppuVar1 = &PTR__LC66_00103920;
  }
  else {
    if (param_1 != 3) {
      return "InvalidValue";
    }
    ppuVar1 = &PTR__LC67_00103930;
  }
  return *ppuVar1;
}



char * ssl_servername_name(int param_1)

{
  undefined **ppuVar1;
  
  if (param_1 == 0) {
    ppuVar1 = &ssl_servername;
  }
  else if (param_1 == 1) {
    ppuVar1 = &PTR__LC58_001038d0;
  }
  else if (param_1 == 2) {
    ppuVar1 = &PTR__LC59_001038e0;
  }
  else {
    if (param_1 != 3) {
      return "InvalidValue";
    }
    ppuVar1 = &PTR__LC60_001038f0;
  }
  return *ppuVar1;
}



char * ssl_servername_callback_name(int param_1)

{
  undefined **ppuVar1;
  
  if (param_1 == 0) {
    ppuVar1 = &ssl_servername_callbacks;
  }
  else if (param_1 == 1) {
    ppuVar1 = &PTR__LC53_00103870;
  }
  else if (param_1 == 2) {
    ppuVar1 = &PTR__LC54_00103880;
  }
  else if (param_1 == 3) {
    ppuVar1 = &PTR__LC55_00103890;
  }
  else if (param_1 == 4) {
    ppuVar1 = &PTR__LC56_001038a0;
  }
  else {
    if (param_1 != 5) {
      return "InvalidValue";
    }
    ppuVar1 = &PTR__LC57_001038b0;
  }
  return *ppuVar1;
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
  
  if (param_1 == 0) {
    ppuVar1 = &ssl_handshake_modes;
  }
  else if (param_1 == 1) {
    ppuVar1 = &PTR__LC47_00103730;
  }
  else if (param_1 == 2) {
    ppuVar1 = &PTR__LC48_00103740;
  }
  else if (param_1 == 3) {
    ppuVar1 = &PTR__LC49_00103750;
  }
  else if (param_1 == 4) {
    ppuVar1 = &PTR__LC50_00103760;
  }
  else if (param_1 == 5) {
    ppuVar1 = &PTR__LC51_00103770;
  }
  else {
    if (param_1 != 6) {
      return "InvalidValue";
    }
    ppuVar1 = &PTR__LC52_00103780;
  }
  return *ppuVar1;
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
  
  if (param_1 == 0) {
    ppuVar1 = &ssl_max_fragment_len_mode;
  }
  else if (param_1 == 1) {
    ppuVar1 = &PTR__LC61_00103650;
  }
  else if (param_1 == 2) {
    ppuVar1 = &PTR__LC62_00103660;
  }
  else if (param_1 == 3) {
    ppuVar1 = &PTR__LC63_00103670;
  }
  else {
    if (param_1 != 4) {
      return "InvalidValue";
    }
    ppuVar1 = &PTR__LC64_00103680;
  }
  return *ppuVar1;
}



void SSL_TEST_CTX_new(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = CRYPTO_zalloc(0x248,"test/helpers/ssl_test_ctx.c",0x2e8);
  uVar1 = _LC89;
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
      if (iVar1 != 0) goto LAB_0010296c;
    }
    else {
      *(undefined8 *)(lVar4 + 0x238) = param_3;
      *(undefined8 *)(lVar4 + 8) = _LC89;
      iVar1 = test_ptr("test/helpers/ssl_test_ctx.c",0x363,"ctx = SSL_TEST_CTX_new(libctx)",lVar4);
      if (iVar1 != 0) {
LAB_0010296c:
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
joined_r0x00102acb:
            if (iVar2 == 0) {
LAB_00102a69:
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
              goto joined_r0x00102acb;
            }
            iVar2 = strcmp(__s1,"server2");
            if (iVar2 == 0) {
              iVar2 = parse_server_options(lVar4 + 0xa0,param_1,*(undefined8 *)(lVar5 + 0x10));
              goto joined_r0x00102acb;
            }
            iVar2 = strcmp(__s1,"resume-client");
            if (iVar2 == 0) {
              iVar2 = parse_client_options(lVar4 + 0xe0,param_1,*(undefined8 *)(lVar5 + 0x10));
              goto joined_r0x00102acb;
            }
            iVar2 = strcmp(__s1,"resume-server");
            if (iVar2 == 0) {
              iVar2 = parse_server_options(lVar4 + 0x128,param_1,*(undefined8 *)(lVar5 + 0x10));
              goto joined_r0x00102acb;
            }
            iVar2 = strcmp(__s1,"resume-server2");
            if (iVar2 == 0) {
              iVar2 = parse_server_options(lVar4 + 0x168,param_1,*(undefined8 *)(lVar5 + 0x10));
              goto joined_r0x00102acb;
            }
            ppuVar7 = &ssl_test_ctx_options;
            lVar6 = 0;
            while (iVar2 = strcmp(__s1,*ppuVar7), iVar2 != 0) {
              lVar6 = lVar6 + 1;
              ppuVar7 = ppuVar7 + 2;
              if (lVar6 == 0x20) {
                test_info("test/helpers/ssl_test_ctx.c",0x38d,"Unknown test option: %s",__s1);
                goto LAB_00102a69;
              }
            }
            iVar2 = (*(code *)(&PTR_parse_expected_result_00103448)[lVar6 * 2])
                              (lVar4,*(undefined8 *)(lVar5 + 0x10));
            if (iVar2 == 0) {
              test_info("test/helpers/ssl_test_ctx.c",900,"Bad value %s for option %s",
                        *(undefined8 *)(lVar5 + 0x10),*(undefined8 *)(lVar5 + 8));
              goto LAB_00102a69;
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


