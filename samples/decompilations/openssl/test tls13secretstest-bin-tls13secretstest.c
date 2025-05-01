
bool test_secret(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  EVP_MD *pEVar2;
  long in_FS_OFFSET;
  bool bVar3;
  undefined8 uVar4;
  undefined1 local_e4 [12];
  undefined1 local_d8 [16];
  undefined1 local_c8 [64];
  undefined8 local_88 [9];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pEVar2 = EVP_sha256();
  if (full_hash == 0) {
    local_88[0] = hs_start_hash._0_8_;
    local_88[1] = hs_start_hash._8_8_;
    local_88[2] = hs_start_hash._16_8_;
    local_88[3] = hs_start_hash._24_8_;
  }
  else {
    local_88[0] = hs_full_hash._0_8_;
    local_88[1] = hs_full_hash._8_8_;
    local_88[2] = hs_full_hash._16_8_;
    local_88[3] = hs_full_hash._24_8_;
  }
  iVar1 = tls13_hkdf_expand(param_1,pEVar2,param_2,param_3,param_4,local_88,0x20,local_c8,0x20,1);
  if (iVar1 == 0) {
    test_error("test/tls13secretstest.c",0x105,"Secret generation failed");
  }
  else {
    uVar4 = 0x20;
    iVar1 = test_mem_eq("test/tls13secretstest.c",0x109,"gensecret","ref_secret",local_c8,0x20,
                        param_5);
    if (iVar1 != 0) {
      iVar1 = tls13_derive_key(param_1,pEVar2,local_c8,local_d8,0x10,uVar4);
      if (iVar1 == 0) {
        test_error("test/tls13secretstest.c",0x10d,"Key generation failed");
      }
      else {
        iVar1 = test_mem_eq("test/tls13secretstest.c",0x111,&_LC6,"ref_key",local_d8,0x10,param_6,
                            0x10);
        if (iVar1 != 0) {
          iVar1 = tls13_derive_iv(param_1,pEVar2,local_c8,local_e4,0xc);
          if (iVar1 != 0) {
            iVar1 = test_mem_eq("test/tls13secretstest.c",0x119,&_LC9,"ref_iv",local_e4,0xc,param_7,
                                0xc);
            bVar3 = iVar1 != 0;
            goto LAB_001000ef;
          }
          test_error("test/tls13secretstest.c",0x115,"IV generation failed");
        }
      }
    }
  }
  bVar3 = false;
LAB_001000ef:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int test_handshake_secrets(void)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  SSL_METHOD *meth;
  SSL_CTX *ctx;
  SSL *ssl;
  SSL_SESSION *pSVar4;
  EVP_MD *pEVar5;
  SSL *pSVar6;
  long lVar7;
  long in_FS_OFFSET;
  undefined8 uVar8;
  undefined8 local_90;
  undefined1 local_88 [72];
  long local_40;
  
  ssl = (SSL *)0x0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  meth = (SSL_METHOD *)TLS_method();
  ctx = SSL_CTX_new(meth);
  iVar2 = test_ptr("test/tls13secretstest.c",0x12a,&_LC10,ctx);
  if (iVar2 != 0) {
    ssl = SSL_new(ctx);
    iVar2 = test_ptr("test/tls13secretstest.c",0x12e,&_LC11,ssl);
    if (iVar2 != 0) {
      pSVar6 = (SSL *)0x0;
      if ((ssl != (SSL *)0x0) && (ssl->version == 0)) {
        pSVar6 = ssl;
      }
      iVar2 = test_ptr("test/tls13secretstest.c",0x12e,"s = SSL_CONNECTION_FROM_SSL_ONLY(ssl)",
                       pSVar6);
      if (iVar2 != 0) {
        pSVar4 = SSL_SESSION_new();
        pSVar6[3].write_hash = (EVP_MD_CTX *)pSVar4;
        iVar2 = test_ptr("test/tls13secretstest.c",0x132,"s->session",pSVar4);
        if (iVar2 == 0) goto LAB_001002ba;
        pEVar5 = EVP_sha256();
        puVar1 = (undefined1 *)((long)&pSVar6[2].wbio + 4);
        iVar2 = tls13_generate_secret(pSVar6,pEVar5,0,0,0,puVar1);
        iVar2 = test_true("test/tls13secretstest.c",0x135,
                          "tls13_generate_secret(s, ssl_handshake_md(s), NULL, NULL, 0, (unsigned char *)&s->early_secret)"
                          ,iVar2 != 0);
        if (iVar2 == 0) {
          test_info("test/tls13secretstest.c",0x137,"Early secret generation failed");
        }
        else {
          uVar8 = 0x20;
          iVar2 = test_mem_eq("test/tls13secretstest.c",0x13b,"s->early_secret","early_secret",
                              puVar1,0x20,early_secret);
          if (iVar2 == 0) {
            test_info("test/tls13secretstest.c",0x13d,"Early secret does not match");
          }
          else {
            iVar2 = tls13_generate_handshake_secret(pSVar6,ecdhe_secret,0x20);
            iVar2 = test_true("test/tls13secretstest.c",0x141,
                              "tls13_generate_handshake_secret(s, ecdhe_secret, sizeof(ecdhe_secret))"
                              ,iVar2 != 0);
            if (iVar2 == 0) {
              test_info("test/tls13secretstest.c",0x143,"Handshake secret generation failed");
            }
            else {
              puVar1 = (undefined1 *)((long)&pSVar6[2].init_msg + 4);
              iVar2 = test_mem_eq("test/tls13secretstest.c",0x147,"s->handshake_secret",
                                  "handshake_secret",puVar1,0x20,handshake_secret,0x20);
              if (iVar2 != 0) {
                pEVar5 = EVP_sha256();
                iVar2 = EVP_MD_get_size(pEVar5);
                lVar7 = (long)iVar2;
                iVar2 = test_size_t_eq("test/tls13secretstest.c",0x14c,"sizeof(client_hts)",
                                       "hashsize",0x20,lVar7);
                if (iVar2 != 0) {
                  iVar2 = test_size_t_eq("test/tls13secretstest.c",0x14e,"sizeof(client_hts_key)",
                                         "KEYLEN",0x10,0x10);
                  if (iVar2 != 0) {
                    iVar2 = test_size_t_eq("test/tls13secretstest.c",0x150,"sizeof(client_hts_iv)",
                                           "IVLEN",0xc,0xc);
                    if (iVar2 != 0) {
                      iVar2 = test_secret(pSVar6,puVar1,"c hs traffic",0xc,client_hts,client_hts_key
                                          ,client_hts_iv);
                      iVar2 = test_true("test/tls13secretstest.c",0x153,
                                        "test_secret(s, s->handshake_secret, (unsigned char *)client_hts_label, strlen(client_hts_label), client_hts, client_hts_key, client_hts_iv)"
                                        ,iVar2 != 0);
                      if (iVar2 == 0) {
                        test_info("test/tls13secretstest.c",0x157,
                                  "Client handshake secret test failed");
                      }
                      else {
                        iVar2 = test_size_t_eq("test/tls13secretstest.c",0x15b,"sizeof(server_hts)",
                                               "hashsize",0x20,lVar7);
                        if (iVar2 != 0) {
                          iVar2 = test_size_t_eq("test/tls13secretstest.c",0x15d,
                                                 "sizeof(server_hts_key)","KEYLEN",0x10,0x10);
                          if (iVar2 != 0) {
                            iVar2 = test_size_t_eq("test/tls13secretstest.c",0x15f,
                                                   "sizeof(server_hts_iv)","IVLEN",0xc,0xc);
                            if (iVar2 != 0) {
                              iVar2 = test_secret(pSVar6,puVar1,"s hs traffic",0xc,server_hts,
                                                  server_hts_key,server_hts_iv);
                              iVar2 = test_true("test/tls13secretstest.c",0x162,
                                                "test_secret(s, s->handshake_secret, (unsigned char *)server_hts_label, strlen(server_hts_label), server_hts, server_hts_key, server_hts_iv)"
                                                ,iVar2 != 0);
                              if (iVar2 == 0) {
                                test_info("test/tls13secretstest.c",0x166,
                                          "Server handshake secret test failed",uVar8);
                              }
                              else {
                                full_hash = 1;
                                iVar2 = tls13_generate_master_secret
                                                  (pSVar6,local_88,puVar1,lVar7,&local_90);
                                iVar2 = test_true("test/tls13secretstest.c",0x170,
                                                  "tls13_generate_master_secret(s, out_master_secret, s->handshake_secret, hashsize, &master_secret_length)"
                                                  ,iVar2 != 0);
                                if (iVar2 == 0) {
                                  test_info("test/tls13secretstest.c",0x173,
                                            "Master secret generation failed");
                                }
                                else {
                                  iVar2 = test_mem_eq("test/tls13secretstest.c",0x177,
                                                      "out_master_secret","master_secret",local_88,
                                                      local_90,master_secret,0x20);
                                  if (iVar2 == 0) {
                                    test_info("test/tls13secretstest.c",0x179,
                                              "Master secret does not match");
                                  }
                                  else {
                                    iVar2 = test_size_t_eq("test/tls13secretstest.c",0x17d,
                                                           "sizeof(client_ats)","hashsize",0x20,
                                                           lVar7);
                                    if (iVar2 != 0) {
                                      iVar2 = test_size_t_eq("test/tls13secretstest.c",0x17f,
                                                             "sizeof(client_ats_key)","KEYLEN",0x10,
                                                             0x10);
                                      if (iVar2 != 0) {
                                        iVar2 = test_size_t_eq("test/tls13secretstest.c",0x181,
                                                               "sizeof(client_ats_iv)","IVLEN",0xc,
                                                               0xc);
                                        if (iVar2 != 0) {
                                          iVar2 = test_secret(pSVar6,local_88,"c ap traffic",0xc,
                                                              client_ats,client_ats_key,
                                                              client_ats_iv);
                                          iVar2 = test_true("test/tls13secretstest.c",0x184,
                                                                                                                        
                                                  "test_secret(s, out_master_secret, (unsigned char *)client_ats_label, strlen(client_ats_label), client_ats, client_ats_key, client_ats_iv)"
                                                  ,iVar2 != 0);
                                          if (iVar2 == 0) {
                                            test_info("test/tls13secretstest.c",0x188,
                                                      "Client application data secret test failed");
                                          }
                                          else {
                                            iVar2 = test_size_t_eq("test/tls13secretstest.c",0x18c,
                                                                   "sizeof(server_ats)","hashsize",
                                                                   0x20,lVar7);
                                            if (iVar2 != 0) {
                                              iVar2 = test_size_t_eq("test/tls13secretstest.c",0x18e
                                                                     ,"sizeof(server_ats_key)",
                                                                     "KEYLEN",0x10,0x10);
                                              if (iVar2 != 0) {
                                                uVar8 = test_size_t_eq("test/tls13secretstest.c",400
                                                                       ,"sizeof(server_ats_iv)",
                                                                       "IVLEN",0xc,0xc);
                                                if ((int)uVar8 != 0) {
                                                  iVar2 = 1;
                                                  iVar3 = test_secret(pSVar6,local_88,"s ap traffic"
                                                                      ,0xc,server_ats,server_ats_key
                                                                      ,server_ats_iv);
                                                  iVar3 = test_true("test/tls13secretstest.c",0x193,
                                                                                                                                        
                                                  "test_secret(s, out_master_secret, (unsigned char *)server_ats_label, strlen(server_ats_label), server_ats, server_ats_key, server_ats_iv)"
                                                  ,iVar3 != 0);
                                                  if (iVar3 != 0) goto LAB_001002ba;
                                                  test_info("test/tls13secretstest.c",0x197,
                                                                                                                        
                                                  "Server application data secret test failed",uVar8
                                                  );
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
        }
      }
    }
    iVar2 = 0;
  }
LAB_001002ba:
  SSL_free(ssl);
  SSL_CTX_free(ctx);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 ssl3_digest_cached_records(void)

{
  return 1;
}



undefined8
ssl_handshake_hash(undefined8 param_1,undefined8 *param_2,ulong param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = hs_start_hash._8_8_;
  uVar1 = hs_full_hash._8_8_;
  uVar3 = 0;
  if (0x1f < param_3) {
    if (full_hash == 0) {
      *param_2 = hs_start_hash._0_8_;
      param_2[1] = uVar2;
      uVar1 = hs_start_hash._24_8_;
      param_2[2] = hs_start_hash._16_8_;
      param_2[3] = uVar1;
      *param_4 = 0x20;
    }
    else {
      *param_2 = hs_full_hash._0_8_;
      param_2[1] = uVar1;
      uVar1 = hs_full_hash._24_8_;
      param_2[2] = hs_full_hash._16_8_;
      param_2[3] = uVar1;
      *param_4 = 0x20;
    }
    uVar3 = 1;
  }
  return uVar3;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

EVP_MD * ssl_handshake_md(void)

{
  EVP_MD *pEVar1;
  
  pEVar1 = EVP_sha256();
  return pEVar1;
}



undefined8 ssl_cipher_get_evp_cipher(void)

{
  return 0;
}



undefined8 ssl_cipher_get_evp_md_mac(void)

{
  return 0;
}



undefined8 ssl_cipher_get_evp(void)

{
  return 0;
}



undefined4 tls1_alert_code(undefined4 param_1)

{
  return param_1;
}



undefined8 ssl_log_secret(void)

{
  return 1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

EVP_MD * ssl_md(void)

{
  EVP_MD *pEVar1;
  
  pEVar1 = EVP_sha256();
  return pEVar1;
}



void ossl_statem_send_fatal(void)

{
  return;
}



void ossl_statem_fatal(void)

{
  return;
}



undefined8 ossl_statem_export_allowed(void)

{
  return 1;
}



undefined8 ossl_statem_export_early_allowed(void)

{
  return 1;
}



void ssl_evp_cipher_free(void)

{
  return;
}



void ssl_evp_md_free(void)

{
  return;
}



undefined8 ssl_set_new_record_layer(void)

{
  return 0;
}



undefined8 setup_tests(void)

{
  add_test("test_handshake_secrets",test_handshake_secrets);
  return 1;
}


