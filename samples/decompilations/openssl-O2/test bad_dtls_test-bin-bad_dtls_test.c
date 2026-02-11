
bool PACKET_get_net_2(undefined8 *param_1,uint *param_2)

{
  byte bVar1;
  ulong uVar2;
  byte *pbVar3;
  
  uVar2 = param_1[1];
  if (1 < uVar2) {
    pbVar3 = (byte *)*param_1;
    bVar1 = *pbVar3;
    *param_2 = (uint)bVar1 << 8;
    *param_2 = (uint)CONCAT11(bVar1,pbVar3[1]);
    param_1[1] = uVar2 - 2;
    *param_1 = pbVar3 + 2;
  }
  return 1 < uVar2;
}



int send_record(BIO *param_1,undefined1 param_2,undefined8 param_3,undefined8 *param_4,ulong param_5
               )

{
  uint uVar1;
  int iVar2;
  uchar *out;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  EVP_CIPHER_CTX *ctx;
  EVP_CIPHER *cipher;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  long in_FS_OFFSET;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined1 local_bc [4];
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
  undefined1 local_5a;
  char local_59;
  uchar local_58 [24];
  long local_40;
  
  uVar1 = (uint)((ulong)param_3 >> 0x20);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  seq_2._4_2_ = (ushort)param_3 << 8 | (ushort)param_3 >> 8;
  seq_2._0_4_ = ((((uint)((ulong)param_3 >> 0x10) & 0xff) << 8 | (uint)param_3 >> 0x18) << 8 |
                uVar1 & 0xff) << 8 | uVar1 >> 8 & 0xff;
  local_bc[0] = param_2;
  out = (uchar *)CRYPTO_malloc((int)param_5 + 0x18,"test/bad_dtls_test.c",0x12d);
  if (out == (uchar *)0x0) {
    iVar2 = 0;
    goto LAB_00100178;
  }
  *(undefined8 *)out = *param_4;
  *(undefined8 *)(out + ((param_5 & 0xffffffff) - 8)) =
       *(undefined8 *)((long)param_4 + ((param_5 & 0xffffffff) - 8));
  lVar3 = (long)out - ((ulong)(out + 8) & 0xfffffffffffffff8);
  uVar1 = (int)lVar3 + (int)param_5 & 0xfffffff8;
  if (7 < uVar1) {
    uVar6 = 0;
    do {
      uVar8 = (ulong)uVar6;
      uVar6 = uVar6 + 8;
      *(undefined8 *)(((ulong)(out + 8) & 0xfffffffffffffff8) + uVar8) =
           *(undefined8 *)((long)param_4 + (uVar8 - lVar3));
    } while (uVar6 < uVar1);
  }
  uVar4 = EVP_MAC_fetch(0,&_LC1,0);
  iVar2 = test_ptr("test/bad_dtls_test.c",0x135,"hmac = EVP_MAC_fetch(NULL, \"HMAC\", NULL)",uVar4);
  if (iVar2 == 0) {
    ctx = (EVP_CIPHER_CTX *)0x0;
    uVar5 = 0;
    iVar2 = 0;
    goto LAB_00100150;
  }
  uVar5 = EVP_MAC_CTX_new(uVar4);
  iVar2 = test_ptr("test/bad_dtls_test.c",0x136,"ctx = EVP_MAC_CTX_new(hmac)",uVar5);
  if (iVar2 == 0) {
LAB_00100272:
    iVar2 = 0;
    ctx = (EVP_CIPHER_CTX *)0x0;
  }
  else {
    OSSL_PARAM_construct_utf8_string(&local_f8,"digest",&_LC4,0);
    local_98 = local_d8;
    local_b8 = local_f8;
    uStack_b0 = uStack_f0;
    local_a8 = local_e8;
    uStack_a0 = uStack_e0;
    OSSL_PARAM_construct_end(&local_f8);
    local_5a = 0;
    local_70 = local_d8;
    local_59 = (char)param_5;
    local_90 = local_f8;
    uStack_88 = uStack_f0;
    local_80 = local_e8;
    uStack_78 = uStack_e0;
    iVar2 = EVP_MAC_init(uVar5,0x101874,0x14,&local_b8);
    if (iVar2 == 0) goto LAB_00100272;
    iVar2 = EVP_MAC_update(uVar5,&epoch_1,2);
    if (iVar2 == 0) goto LAB_00100272;
    iVar2 = EVP_MAC_update(uVar5,&seq_2,6);
    if (iVar2 == 0) goto LAB_00100272;
    iVar2 = EVP_MAC_update(uVar5,local_bc,1);
    if (iVar2 == 0) goto LAB_00100272;
    iVar2 = EVP_MAC_update(uVar5,&ver_0,2);
    if (iVar2 == 0) goto LAB_00100272;
    iVar2 = EVP_MAC_update(uVar5,&local_5a,2);
    if (iVar2 == 0) goto LAB_00100272;
    iVar2 = EVP_MAC_update(uVar5,out,param_5);
    if (iVar2 == 0) goto LAB_00100272;
    iVar2 = EVP_MAC_final(uVar5,out + param_5,0,0x14);
    if (iVar2 == 0) goto LAB_00100272;
    uVar8 = param_5 + 0x14;
    do {
      uVar7 = uVar8;
      uVar8 = uVar7 + 1;
      out[uVar7] = '\x03';
    } while ((uVar8 & 0xf) != 0);
    ctx = (EVP_CIPHER_CTX *)0x0;
    iVar2 = RAND_bytes(local_58,0x10);
    iVar2 = test_int_gt("test/bad_dtls_test.c",0x14e,"RAND_bytes(iv, sizeof(iv))",&_LC6,iVar2,0);
    if (iVar2 != 0) {
      ctx = EVP_CIPHER_CTX_new();
      iVar2 = test_ptr("test/bad_dtls_test.c",0x14f,"enc_ctx = EVP_CIPHER_CTX_new()",ctx);
      if (iVar2 == 0) {
LAB_001003cd:
        iVar2 = 0;
      }
      else {
        cipher = EVP_aes_128_cbc();
        iVar2 = EVP_CipherInit_ex(ctx,cipher,(ENGINE *)0x0,key_block + 0x38,local_58,1);
        iVar2 = test_true("test/bad_dtls_test.c",0x150,
                          "EVP_CipherInit_ex(enc_ctx, EVP_aes_128_cbc(), NULL, enc_key, iv, 1)",
                          iVar2 != 0);
        if (iVar2 != 0) {
          iVar2 = EVP_Cipher(ctx,out,out,(uint)uVar8);
          iVar2 = test_int_ge("test/bad_dtls_test.c",0x152,"EVP_Cipher(enc_ctx, enc, enc, len)",
                              &_LC6,iVar2,0);
          if (iVar2 == 0) goto LAB_001003cd;
          BIO_write(param_1,local_bc,1);
          BIO_write(param_1,&ver_0,2);
          BIO_write(param_1,&epoch_1,2);
          BIO_write(param_1,&seq_2,6);
          local_59 = (char)uVar8 + '\x10';
          local_5a = (undefined1)(uVar7 + 0x11 >> 8);
          BIO_write(param_1,&local_5a,2);
          BIO_write(param_1,local_58,0x10);
          iVar2 = 1;
          BIO_write(param_1,out,(uint)uVar8);
        }
      }
    }
  }
LAB_00100150:
  EVP_MAC_free(uVar4);
  EVP_MAC_CTX_free(uVar5);
  EVP_CIPHER_CTX_free(ctx);
  CRYPTO_free(out);
LAB_00100178:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void do_PRF_isra_0(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined4 param_6,uchar *param_7,int param_8)

{
  EVP_PKEY_CTX *ctx;
  undefined8 uVar1;
  long in_FS_OFFSET;
  size_t local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ctx = EVP_PKEY_CTX_new_id(0x3fd,(ENGINE *)0x0);
  local_48 = (size_t)param_8;
  EVP_PKEY_derive_init(ctx);
  uVar1 = EVP_md5_sha1();
  EVP_PKEY_CTX_set_tls1_prf_md(ctx,uVar1);
  EVP_PKEY_CTX_set1_tls1_prf_secret(ctx,master_secret,0x30);
  EVP_PKEY_CTX_add1_tls1_prf_seed(ctx,param_1,param_2);
  EVP_PKEY_CTX_add1_tls1_prf_seed(ctx,param_3,param_4);
  EVP_PKEY_CTX_add1_tls1_prf_seed(ctx,param_5,param_6);
  EVP_PKEY_derive(ctx,param_7,&local_48);
  EVP_PKEY_CTX_free(ctx);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int validate_client_hello(BIO *param_1)

{
  ulong cnt;
  byte *pbVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  long in_FS_OFFSET;
  uint local_64;
  char *local_60;
  byte *local_58;
  ulong local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_64 = 0;
  uVar5 = BIO_ctrl(param_1,3,0,&local_60);
  pcVar2 = local_60;
  if ((-1 < (long)uVar5) && (local_50 = uVar5, uVar5 != 0)) {
    local_58 = (byte *)(local_60 + 1);
    local_50 = uVar5 - 1;
    if ((*local_60 == '\x16') && (1 < local_50)) {
      local_50 = uVar5 - 3;
      local_64 = (uint)(ushort)(*(ushort *)(local_60 + 1) << 8 | *(ushort *)(local_60 + 1) >> 8);
      if ((local_64 == 0x100) && (9 < local_50)) {
        local_58 = (byte *)(local_60 + 0xd);
        local_50 = uVar5 - 0xd;
        if (uVar5 - 0xd != 0) {
          local_50 = uVar5 - 0xe;
          local_64 = (uint)(byte)local_60[0xd];
          if ((local_64 == 1) && (10 < local_50)) {
            cnt = uVar5 - 0x19;
            local_58 = (byte *)(local_60 + 0x19);
            local_50 = cnt;
            if (1 < cnt) {
              local_58 = (byte *)(local_60 + 0x1b);
              local_50 = uVar5 - 0x1b;
              local_64 = (uint)(ushort)(*(ushort *)(local_60 + 0x19) << 8 |
                                       *(ushort *)(local_60 + 0x19) >> 8);
              if ((local_64 == 0x100) && (0x1f < local_50)) {
                client_random._0_8_ = *(undefined8 *)(local_60 + 0x1b);
                client_random._8_8_ = *(undefined8 *)(local_60 + 0x23);
                client_random._16_8_ = *(undefined8 *)(local_60 + 0x2b);
                client_random._24_8_ = *(undefined8 *)(local_60 + 0x33);
                local_50 = uVar5 - 0x3b;
                if (local_50 != 0) {
                  uVar6 = (ulong)(byte)local_60[0x3b];
                  if (uVar6 <= uVar5 - 0x3c) {
                    uVar5 = (uVar5 - 0x3c) - uVar6;
                    pbVar1 = (byte *)(local_60 + 0x3c + uVar6);
                    local_58 = pbVar1;
                    local_50 = uVar5;
                    if (((uVar6 == 0x20) &&
                        (iVar3 = CRYPTO_memcmp(local_60 + 0x3c,session_id,0x20), iVar3 == 0)) &&
                       (uVar5 != 0)) {
                      uVar6 = (ulong)*pbVar1;
                      if (uVar6 <= uVar5 - 1) {
                        local_58 = (byte *)(pcVar2 + 0x5d + uVar6);
                        local_50 = (uVar5 - 1) - uVar6;
                        iVar3 = 0;
                        if (uVar6 != 0) {
                          if ((uVar6 != 0x14) ||
                             (iVar3 = CRYPTO_memcmp(pcVar2 + 0x5d,cookie,0x14), iVar3 != 0))
                          goto LAB_00100690;
                          iVar3 = 1;
                        }
                        iVar4 = PACKET_get_net_2(&local_58,&local_64);
                        if ((iVar4 != 0) && (uVar5 = (ulong)local_64, uVar5 <= local_50)) {
                          local_58 = local_58 + uVar5;
                          local_50 = local_50 - uVar5;
                          if (local_50 != 0) {
                            uVar5 = (ulong)*local_58;
                            local_50 = local_50 - 1;
                            local_64 = (uint)*local_58;
                            if (uVar5 <= local_50) {
                              local_50 = local_50 - uVar5;
                              local_58 = local_58 + uVar5 + 1;
                              iVar4 = PACKET_get_net_2();
                              if ((iVar4 != 0) && (uVar5 = (ulong)local_64, uVar5 <= local_50)) {
                                local_58 = local_58 + uVar5;
                                local_50 = local_50 - uVar5;
                                if ((local_50 == 0) &&
                                   ((iVar3 == 0 ||
                                    (iVar4 = EVP_DigestUpdate(handshake_md,local_60 + 0x19,cnt),
                                    iVar4 != 0)))) {
                                  BIO_ctrl(param_1,1,0,(void *)0x0);
                                  iVar3 = iVar3 + 1;
                                  goto LAB_00100692;
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
LAB_00100690:
  iVar3 = 0;
LAB_00100692:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar3;
}



uint test_bad_dtls(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  SSL_SESSION *session;
  EVP_MD *type;
  SSL_METHOD *meth;
  SSL_CTX *ctx;
  long lVar5;
  SSL *to;
  BIO_METHOD *pBVar6;
  ulong uVar7;
  long *plVar8;
  long in_FS_OFFSET;
  bool bVar9;
  undefined1 *puVar10;
  BIO *local_d0;
  BIO *local_c8;
  uint local_b4;
  char *local_b0;
  uchar *local_a8;
  ulong local_a0;
  long local_98 [2];
  uchar local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  RAND_bytes(session_id,0x20);
  RAND_bytes(master_secret,0x30);
  RAND_bytes(cookie,0x14);
  RAND_bytes(server_random + 4,0x1c);
  server_random._0_8_ = time((time_t *)0x0);
  local_a8 = session_asn1_7;
  session_asn1_7._15_8_ = session_id._0_8_;
  session_asn1_7._23_8_ = session_id._8_8_;
  session_asn1_7._31_8_ = session_id._16_8_;
  session_asn1_7._39_8_ = session_id._24_8_;
  session_asn1_7._49_8_ = master_secret._0_8_;
  session_asn1_7._57_8_ = master_secret._8_8_;
  session_asn1_7._65_8_ = master_secret._16_8_;
  session_asn1_7._73_8_ = master_secret._24_8_;
  session_asn1_7._81_8_ = master_secret._32_8_;
  session_asn1_7._89_8_ = master_secret._40_8_;
  session = d2i_SSL_SESSION((SSL_SESSION **)0x0,&local_a8,0x61);
  iVar1 = test_ptr("test/bad_dtls_test.c",0x1e8,&_LC11,session);
  if (iVar1 != 0) {
    handshake_md = (EVP_MD_CTX *)EVP_MD_CTX_new();
    iVar1 = test_ptr("test/bad_dtls_test.c",0x1ec,"handshake_md",handshake_md);
    if (iVar1 != 0) {
      type = (EVP_MD *)EVP_md5_sha1();
      iVar1 = EVP_DigestInit_ex(handshake_md,type,(ENGINE *)0x0);
      iVar1 = test_true("test/bad_dtls_test.c",0x1ed,
                        "EVP_DigestInit_ex(handshake_md, EVP_md5_sha1(), NULL)",iVar1 != 0);
      if (iVar1 != 0) {
        meth = (SSL_METHOD *)DTLS_client_method();
        ctx = SSL_CTX_new(meth);
        iVar1 = test_ptr("test/bad_dtls_test.c",0x1f2,&_LC14);
        if (iVar1 == 0) goto LAB_00100b4f;
        SSL_CTX_ctrl(ctx,0x7b,0x100,(void *)0x0);
        uVar2 = test_true("test/bad_dtls_test.c",499,
                          "SSL_CTX_set_min_proto_version(ctx, DTLS1_BAD_VER)");
        if (uVar2 != 0) {
          lVar5 = SSL_CTX_ctrl(ctx,0x7c,0x100,(void *)0x0);
          uVar2 = test_true("test/bad_dtls_test.c",500,
                            "SSL_CTX_set_max_proto_version(ctx, DTLS1_BAD_VER)",lVar5 != 0);
          if (uVar2 != 0) {
            lVar5 = SSL_CTX_set_options(ctx,4);
            iVar1 = test_true("test/bad_dtls_test.c",0x1f5,
                              "SSL_CTX_set_options(ctx, SSL_OP_LEGACY_SERVER_CONNECT)",lVar5 != 0);
            if (iVar1 != 0) {
              iVar1 = SSL_CTX_set_cipher_list(ctx,"AES128-SHA");
              iVar1 = test_true("test/bad_dtls_test.c",0x1f7,
                                "SSL_CTX_set_cipher_list(ctx, \"AES128-SHA\")",iVar1 != 0);
              if (iVar1 != 0) {
                SSL_CTX_set_security_level(ctx,0);
                to = SSL_new(ctx);
                uVar2 = test_ptr("test/bad_dtls_test.c",0x1fc,&_LC20,to);
                if (uVar2 != 0) {
                  iVar1 = SSL_set_session(to,session);
                  uVar2 = test_true("test/bad_dtls_test.c",0x1fd,"SSL_set_session(con, sess)",
                                    iVar1 != 0);
                  if (uVar2 != 0) {
                    pBVar6 = BIO_s_mem();
                    local_d0 = BIO_new(pBVar6);
                    pBVar6 = BIO_s_mem();
                    local_c8 = BIO_new(pBVar6);
                    iVar1 = test_ptr("test/bad_dtls_test.c",0x203,&_LC22,local_d0);
                    if (iVar1 == 0) goto LAB_00100d06;
                    uVar2 = test_ptr("test/bad_dtls_test.c",0x204,&_LC23,local_c8);
                    if (uVar2 == 0) goto LAB_00100a59;
                    SSL_set_bio(to,local_d0,local_c8);
                    iVar1 = BIO_up_ref(local_d0);
                    uVar2 = test_true("test/bad_dtls_test.c",0x209,"BIO_up_ref(rbio)",iVar1 != 0);
                    if (uVar2 == 0) goto LAB_00100d10;
                    iVar1 = BIO_up_ref(local_c8);
                    iVar1 = test_true("test/bad_dtls_test.c",0x212,"BIO_up_ref(wbio)",iVar1 != 0);
                    if (iVar1 == 0) {
                      local_c8 = (BIO *)0x0;
                      uVar2 = 0;
                      goto LAB_00100a59;
                    }
                    SSL_set_connect_state(to);
                    iVar1 = SSL_do_handshake(to);
                    iVar3 = test_int_le("test/bad_dtls_test.c",0x21b,&_LC26,&_LC6,iVar1,0);
                    if (iVar3 != 0) {
                      iVar1 = SSL_get_error(to,iVar1);
                      iVar1 = test_int_eq("test/bad_dtls_test.c",0x21c,"SSL_get_error(con, ret)",
                                          "SSL_ERROR_WANT_READ",iVar1,2);
                      if (iVar1 != 0) {
                        uVar4 = validate_client_hello(local_c8);
                        iVar1 = test_int_eq("test/bad_dtls_test.c",0x21d,
                                            "validate_client_hello(wbio)",&_LC29,uVar4,1);
                        if (iVar1 != 0) {
                          hello_verify_6._44_4_ = cookie._16_4_;
                          hello_verify_6._28_8_ = cookie._0_8_;
                          hello_verify_6._36_8_ = cookie._8_8_;
                          BIO_write(local_d0,hello_verify_6,0x30);
                          iVar1 = test_true("test/bad_dtls_test.c",0x21e,"send_hello_verify(rbio)",1
                                           );
                          if (iVar1 != 0) {
                            iVar1 = SSL_do_handshake(to);
                            iVar3 = test_int_le("test/bad_dtls_test.c",0x222,&_LC26,&_LC6,iVar1,0);
                            if (iVar3 != 0) {
                              iVar1 = SSL_get_error(to,iVar1);
                              iVar1 = test_int_eq("test/bad_dtls_test.c",0x223,
                                                  "SSL_get_error(con, ret)","SSL_ERROR_WANT_READ",
                                                  iVar1,2);
                              if (iVar1 != 0) {
                                uVar4 = validate_client_hello(local_c8);
                                iVar1 = test_int_eq("test/bad_dtls_test.c",0x224,
                                                    "validate_client_hello(wbio)",&_LC32,uVar4,2);
                                if (iVar1 != 0) {
                                  server_hello_5._27_8_ = server_random._0_8_;
                                  server_hello_5._35_8_ = server_random._8_8_;
                                  server_hello_5._43_8_ = server_random._16_8_;
                                  server_hello_5._51_8_ = server_random._24_8_;
                                  server_hello_5._60_8_ = session_id._0_8_;
                                  server_hello_5._68_8_ = session_id._8_8_;
                                  server_hello_5._76_8_ = session_id._16_8_;
                                  server_hello_5._84_8_ = session_id._24_8_;
                                  iVar1 = EVP_DigestUpdate(handshake_md,server_hello_5 + 0x19,0x46);
                                  if (iVar1 != 0) {
                                    BIO_write(local_d0,server_hello_5,0x5f);
                                    BIO_write(local_d0,change_cipher_spec_4,0x10);
                                    iVar1 = 1;
                                  }
                                  iVar1 = test_true("test/bad_dtls_test.c",0x225,
                                                    "send_server_hello(rbio)",iVar1);
                                  if (iVar1 != 0) {
                                    iVar1 = SSL_do_handshake(to);
                                    iVar3 = test_int_le("test/bad_dtls_test.c",0x229,&_LC26,&_LC6,
                                                        iVar1,0);
                                    if (iVar3 != 0) {
                                      iVar1 = SSL_get_error(to,iVar1);
                                      iVar1 = test_int_eq("test/bad_dtls_test.c",0x22a,
                                                          "SSL_get_error(con, ret)",
                                                          "SSL_ERROR_WANT_READ",iVar1,2);
                                      if (iVar1 != 0) {
                                        puVar10 = key_block;
                                        do_PRF_isra_0("key expansion",0xd,server_random,0x20,
                                                      client_random,0x20,key_block,0x68);
                                        iVar1 = EVP_DigestFinal_ex(handshake_md,local_88,(uint *)0x0
                                                                  );
                                        if (iVar1 == 0) {
LAB_001013fb:
                                          iVar1 = 0;
                                        }
                                        else {
                                          iVar1 = EVP_MD_CTX_get_size_ex(handshake_md,puVar10);
                                          if (iVar1 < 1) goto LAB_001013fb;
                                          do_PRF_isra_0("server finished",0xf,local_88,iVar1,0,0,
                                                        0x1014bc,0xc);
                                          iVar1 = send_record(local_d0,0x16,0,finished_msg_3,0x18);
                                        }
                                        iVar1 = test_true("test/bad_dtls_test.c",0x22b,
                                                          "send_finished(con, rbio)",iVar1 != 0);
                                        if (iVar1 != 0) {
                                          iVar1 = SSL_do_handshake(to);
                                          iVar1 = test_int_gt("test/bad_dtls_test.c",0x22f,&_LC26,
                                                              &_LC6,iVar1,0);
                                          if (iVar1 != 0) {
                                            uVar7 = BIO_ctrl(local_c8,3,0,&local_b0);
                                            if ((long)uVar7 < 0) {
LAB_001011c6:
                                              bVar9 = false;
                                            }
                                            else {
                                              local_a0 = uVar7;
                                              if (uVar7 == 0) goto LAB_001011c6;
                                              local_a8 = (uchar *)(local_b0 + 1);
                                              local_a0 = uVar7 - 1;
                                              if ((local_a0 < 2) || (*local_b0 != '\x14'))
                                              goto LAB_001011c6;
                                              local_a0 = uVar7 - 3;
                                              local_b4 = (uint)(ushort)(*(ushort *)(local_b0 + 1) <<
                                                                        8 | *(ushort *)
                                                                             (local_b0 + 1) >> 8);
                                              if ((local_b4 != 0x100) || (local_a0 < 10))
                                              goto LAB_001011c6;
                                              local_a8 = (uchar *)(local_b0 + 0xd);
                                              local_a0 = uVar7 - 0xd;
                                              if (local_a0 == 0) goto LAB_001011c6;
                                              local_a0 = uVar7 - 0xe;
                                              local_b4 = (uint)(byte)local_b0[0xd];
                                              if ((local_a0 < 2) || (local_b4 != 1))
                                              goto LAB_001011c6;
                                              local_a8 = (uchar *)(local_b0 + 0x10);
                                              local_a0 = uVar7 - 0x10;
                                              if ((*(short *)(local_b0 + 0xe) != 0x200) ||
                                                 (local_a0 == 0)) goto LAB_001011c6;
                                              local_a0 = uVar7 - 0x11;
                                              local_a8 = (uchar *)(local_b0 + 0x11);
                                              local_b4 = (uint)(byte)local_b0[0x10];
                                              if (local_b4 != 0x16) goto LAB_001011c6;
                                              iVar1 = PACKET_get_net_2(&local_a8,&local_b4);
                                              if ((iVar1 == 0) || (local_b4 != 0x100))
                                              goto LAB_001011c6;
                                              iVar1 = PACKET_get_net_2();
                                              if (iVar1 == 0) goto LAB_001011c6;
                                              bVar9 = local_b4 == 1;
                                            }
                                            iVar1 = test_true("test/bad_dtls_test.c",0x230,
                                                              "validate_ccs(wbio)",bVar9);
                                            if (iVar1 != 0) {
                                              plVar8 = &tests;
                                              iVar1 = 0;
                                              do {
                                                iVar3 = send_record(local_d0,0x17,*plVar8,plVar8,8);
                                                iVar3 = test_true("test/bad_dtls_test.c",0x23b,
                                                                                                                                    
                                                  "send_record(rbio, SSL3_RT_APPLICATION_DATA, tests[i].seq, &tests[i].seq, sizeof(uint64_t))"
                                                  ,iVar3 != 0);
                                                if (iVar3 == 0) {
                                                  test_error("test/bad_dtls_test.c",0x23d,
                                                                                                                          
                                                  "Failed to send data seq #0x%x%08x (%d)\n",
                                                  (ulong)(&tests)[(long)iVar1 * 2] >> 0x20,
                                                  (&tests)[(long)iVar1 * 2] & 0xffffffff,iVar1);
                                                  goto LAB_00100d06;
                                                }
                                                if ((int)plVar8[1] == 0) {
                                                  iVar3 = SSL_read(to,local_98,0x10);
                                                  iVar3 = test_int_eq("test/bad_dtls_test.c",0x246,
                                                                      &_LC26,"(int)sizeof(uint64_t)"
                                                                      ,iVar3,8);
                                                  if (iVar3 == 0) {
                                                    test_error("test/bad_dtls_test.c",0x247,
                                                                                                                              
                                                  "SSL_read failed or wrong size on seq#0x%x%08x (%d)\n"
                                                  ,(ulong)(&tests)[(long)iVar1 * 2] >> 0x20,
                                                  (&tests)[(long)iVar1 * 2] & 0xffffffff,iVar1);
                                                  goto LAB_00100d06;
                                                  }
                                                  iVar3 = test_true("test/bad_dtls_test.c",0x24b,
                                                                    "recv_buf[0] == tests[i].seq",
                                                                    local_98[0] == *plVar8);
                                                  if (iVar3 == 0) goto LAB_00100d06;
                                                }
                                                iVar1 = iVar1 + 1;
                                                plVar8 = plVar8 + 2;
                                              } while (iVar1 != 0x23);
                                              iVar1 = test_false("test/bad_dtls_test.c",0x250,
                                                                 "tests[i-1].drop",DAT_00101828 != 0
                                                                );
                                              uVar2 = (uint)(iVar1 != 0);
                                              goto LAB_00100a59;
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
LAB_00100d06:
                    uVar2 = 0;
                    goto LAB_00100a59;
                  }
                }
LAB_00100d10:
                local_c8 = (BIO *)0x0;
                local_d0 = (BIO *)0x0;
                goto LAB_00100a59;
              }
            }
LAB_00100b4f:
            local_c8 = (BIO *)0x0;
            uVar2 = 0;
            to = (SSL *)0x0;
            local_d0 = (BIO *)0x0;
            goto LAB_00100a59;
          }
        }
        local_c8 = (BIO *)0x0;
        to = (SSL *)0x0;
        local_d0 = (BIO *)0x0;
        goto LAB_00100a59;
      }
    }
  }
  local_c8 = (BIO *)0x0;
  uVar2 = 0;
  to = (SSL *)0x0;
  ctx = (SSL_CTX *)0x0;
  local_d0 = (BIO *)0x0;
LAB_00100a59:
  SSL_SESSION_free(session);
  BIO_free(local_d0);
  BIO_free(local_c8);
  SSL_free(to);
  SSL_CTX_free(ctx);
  EVP_MD_CTX_free(handshake_md);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 setup_tests(void)

{
  add_test("test_bad_dtls",test_bad_dtls);
  return 1;
}


