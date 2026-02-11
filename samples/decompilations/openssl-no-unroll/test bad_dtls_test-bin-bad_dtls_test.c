
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
    goto LAB_00100138;
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
    goto LAB_00100110;
  }
  uVar5 = EVP_MAC_CTX_new(uVar4);
  iVar2 = test_ptr("test/bad_dtls_test.c",0x136,"ctx = EVP_MAC_CTX_new(hmac)",uVar5);
  if (iVar2 == 0) {
LAB_00100232:
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
    iVar2 = EVP_MAC_init(uVar5,0x1016b4,0x14,&local_b8);
    if (iVar2 == 0) goto LAB_00100232;
    iVar2 = EVP_MAC_update(uVar5,&epoch_1,2);
    if (iVar2 == 0) goto LAB_00100232;
    iVar2 = EVP_MAC_update(uVar5,&seq_2,6);
    if (iVar2 == 0) goto LAB_00100232;
    iVar2 = EVP_MAC_update(uVar5,local_bc,1);
    if (iVar2 == 0) goto LAB_00100232;
    iVar2 = EVP_MAC_update(uVar5,&ver_0,2);
    if (iVar2 == 0) goto LAB_00100232;
    iVar2 = EVP_MAC_update(uVar5,&local_5a,2);
    if (iVar2 == 0) goto LAB_00100232;
    iVar2 = EVP_MAC_update(uVar5,out,param_5);
    if (iVar2 == 0) goto LAB_00100232;
    iVar2 = EVP_MAC_final(uVar5,out + param_5,0,0x14);
    if (iVar2 == 0) goto LAB_00100232;
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
LAB_0010038d:
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
          if (iVar2 == 0) goto LAB_0010038d;
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
LAB_00100110:
  EVP_MAC_free(uVar4);
  EVP_MAC_CTX_free(uVar5);
  EVP_CIPHER_CTX_free(ctx);
  CRYPTO_free(out);
LAB_00100138:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int validate_client_hello(BIO *param_1)

{
  byte *pbVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  char *pcVar10;
  long in_FS_OFFSET;
  char *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar5 = BIO_ctrl(param_1,3,0,&local_48);
  pcVar10 = local_48;
  if (((((((-1 < lVar5) && (lVar5 != 0)) && (*local_48 == '\x16')) &&
        ((1 < lVar5 - 1U && (*(short *)(local_48 + 1) == 1)))) &&
       ((10 < lVar5 - 3U && ((10 < lVar5 - 0xeU && (local_48[0xd] == '\x01')))))) &&
      (1 < lVar5 - 0x19U)) && ((0x1f < lVar5 - 0x1bU && (*(short *)(local_48 + 0x19) == 1)))) {
    client_random._0_8_ = *(undefined8 *)(local_48 + 0x1b);
    client_random._8_8_ = *(undefined8 *)(local_48 + 0x23);
    client_random._16_8_ = *(undefined8 *)(local_48 + 0x2b);
    client_random._24_8_ = *(undefined8 *)(local_48 + 0x33);
    if ((lVar5 != 0x3b) &&
       (((ulong)(byte)local_48[0x3b] <= lVar5 - 0x3cU && ((ulong)(byte)local_48[0x3b] == 0x20)))) {
      iVar3 = CRYPTO_memcmp(local_48 + 0x3c,session_id,0x20);
      if ((lVar5 != 0x5c) && (iVar3 == 0)) {
        uVar7 = (ulong)(byte)pcVar10[0x5c];
        if (uVar7 <= lVar5 - 0x5dU) {
          pcVar10 = pcVar10 + 0x5d;
          if (uVar7 == 0) {
            iVar3 = 0;
LAB_0010065b:
            uVar9 = (lVar5 - 0x5dU) - uVar7;
            if (1 < uVar9) {
              uVar9 = uVar9 - 2;
              uVar2 = *(ushort *)(pcVar10 + uVar7);
              uVar8 = (ulong)(ushort)(uVar2 << 8 | uVar2 >> 8);
              if ((uVar8 <= uVar9) && (lVar6 = uVar9 - uVar8, lVar6 != 0)) {
                pbVar1 = (byte *)((long)(pcVar10 + uVar7) + uVar8 + 2);
                uVar7 = lVar6 - 1;
                uVar9 = (ulong)*pbVar1;
                if ((uVar9 <= uVar7) && (uVar7 = uVar7 - uVar9, 1 < uVar7)) {
                  uVar2 = *(ushort *)(pbVar1 + uVar9 + 1);
                  uVar7 = uVar7 - 2;
                  uVar9 = (ulong)(ushort)(uVar2 << 8 | uVar2 >> 8);
                  if ((uVar9 <= uVar7) && (uVar9 == uVar7)) {
                    if (iVar3 != 0) {
                      iVar4 = EVP_DigestUpdate(handshake_md,local_48 + 0x19,lVar5 - 0x19U);
                      if (iVar4 == 0) goto LAB_001006f0;
                    }
                    BIO_ctrl(param_1,1,0,(void *)0x0);
                    iVar3 = iVar3 + 1;
                    goto LAB_001006f2;
                  }
                }
              }
            }
          }
          else if (uVar7 == 0x14) {
            iVar3 = CRYPTO_memcmp(pcVar10,cookie,0x14);
            if (iVar3 == 0) {
              iVar3 = 1;
              goto LAB_0010065b;
            }
          }
        }
      }
    }
  }
LAB_001006f0:
  iVar3 = 0;
LAB_001006f2:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
  BIO_METHOD *pBVar6;
  EVP_PKEY_CTX *pEVar7;
  undefined8 uVar8;
  long *plVar9;
  long in_FS_OFFSET;
  bool bVar10;
  SSL *local_d0;
  BIO *local_c8;
  BIO *local_c0;
  uchar *local_a0;
  long local_98 [2];
  uchar local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  RAND_bytes(session_id,0x20);
  RAND_bytes(master_secret,0x30);
  RAND_bytes(cookie,0x14);
  RAND_bytes(server_random + 4,0x1c);
  server_random._0_8_ = time((time_t *)0x0);
  local_a0 = session_asn1_7;
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
  session = d2i_SSL_SESSION((SSL_SESSION **)0x0,&local_a0,0x61);
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
        if (iVar1 == 0) goto LAB_0010094f;
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
                local_d0 = SSL_new(ctx);
                uVar2 = test_ptr("test/bad_dtls_test.c",0x1fc,&_LC20,local_d0);
                if (uVar2 != 0) {
                  iVar1 = SSL_set_session(local_d0,session);
                  uVar2 = test_true("test/bad_dtls_test.c",0x1fd,"SSL_set_session(con, sess)",
                                    iVar1 != 0);
                  if (uVar2 != 0) {
                    pBVar6 = BIO_s_mem();
                    local_c8 = BIO_new(pBVar6);
                    pBVar6 = BIO_s_mem();
                    local_c0 = BIO_new(pBVar6);
                    iVar1 = test_ptr("test/bad_dtls_test.c",0x203,&_LC22,local_c8);
                    if (iVar1 == 0) goto LAB_00100b16;
                    uVar2 = test_ptr("test/bad_dtls_test.c",0x204,&_LC23,local_c0);
                    if (uVar2 == 0) goto LAB_00100852;
                    SSL_set_bio(local_d0,local_c8,local_c0);
                    iVar1 = BIO_up_ref(local_c8);
                    uVar2 = test_true("test/bad_dtls_test.c",0x209,"BIO_up_ref(rbio)",iVar1 != 0);
                    if (uVar2 == 0) goto LAB_00100b20;
                    iVar1 = BIO_up_ref(local_c0);
                    iVar1 = test_true("test/bad_dtls_test.c",0x212,"BIO_up_ref(wbio)",iVar1 != 0);
                    if (iVar1 == 0) {
                      local_c0 = (BIO *)0x0;
                      uVar2 = 0;
                      goto LAB_00100852;
                    }
                    SSL_set_connect_state(local_d0);
                    iVar1 = SSL_do_handshake(local_d0);
                    iVar3 = test_int_le("test/bad_dtls_test.c",0x21b,&_LC26,&_LC6,iVar1,0);
                    if (iVar3 != 0) {
                      iVar1 = SSL_get_error(local_d0,iVar1);
                      iVar1 = test_int_eq("test/bad_dtls_test.c",0x21c,"SSL_get_error(con, ret)",
                                          "SSL_ERROR_WANT_READ",iVar1,2);
                      if (iVar1 != 0) {
                        uVar4 = validate_client_hello(local_c0);
                        iVar1 = test_int_eq("test/bad_dtls_test.c",0x21d,
                                            "validate_client_hello(wbio)",&_LC29,uVar4,1);
                        if (iVar1 != 0) {
                          hello_verify_6._44_4_ = cookie._16_4_;
                          hello_verify_6._28_8_ = cookie._0_8_;
                          hello_verify_6._36_8_ = cookie._8_8_;
                          BIO_write(local_c8,hello_verify_6,0x30);
                          iVar1 = test_true("test/bad_dtls_test.c",0x21e,"send_hello_verify(rbio)",1
                                           );
                          if (iVar1 != 0) {
                            iVar1 = SSL_do_handshake(local_d0);
                            iVar3 = test_int_le("test/bad_dtls_test.c",0x222,&_LC26,&_LC6,iVar1,0);
                            if (iVar3 != 0) {
                              iVar1 = SSL_get_error(local_d0,iVar1);
                              iVar1 = test_int_eq("test/bad_dtls_test.c",0x223,
                                                  "SSL_get_error(con, ret)","SSL_ERROR_WANT_READ",
                                                  iVar1,2);
                              if (iVar1 != 0) {
                                uVar4 = validate_client_hello(local_c0);
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
                                    BIO_write(local_c8,server_hello_5,0x5f);
                                    BIO_write(local_c8,change_cipher_spec_4,0x10);
                                    iVar1 = 1;
                                  }
                                  iVar1 = test_true("test/bad_dtls_test.c",0x225,
                                                    "send_server_hello(rbio)",iVar1);
                                  if (iVar1 != 0) {
                                    iVar1 = SSL_do_handshake(local_d0);
                                    iVar3 = test_int_le("test/bad_dtls_test.c",0x229,&_LC26,&_LC6,
                                                        iVar1,0);
                                    if (iVar3 != 0) {
                                      iVar1 = SSL_get_error(local_d0,iVar1);
                                      iVar1 = test_int_eq("test/bad_dtls_test.c",0x22a,
                                                          "SSL_get_error(con, ret)",
                                                          "SSL_ERROR_WANT_READ",iVar1,2);
                                      if (iVar1 != 0) {
                                        pEVar7 = EVP_PKEY_CTX_new_id(0x3fd,(ENGINE *)0x0);
                                        local_a0 = (uchar *)0x68;
                                        EVP_PKEY_derive_init(pEVar7);
                                        uVar8 = EVP_md5_sha1();
                                        EVP_PKEY_CTX_set_tls1_prf_md(pEVar7,uVar8);
                                        EVP_PKEY_CTX_set1_tls1_prf_secret(pEVar7,master_secret,0x30)
                                        ;
                                        EVP_PKEY_CTX_add1_tls1_prf_seed(pEVar7,"key expansion",0xd);
                                        EVP_PKEY_CTX_add1_tls1_prf_seed(pEVar7,server_random,0x20);
                                        EVP_PKEY_CTX_add1_tls1_prf_seed(pEVar7,client_random,0x20);
                                        EVP_PKEY_derive(pEVar7,key_block,(size_t *)&local_a0);
                                        EVP_PKEY_CTX_free(pEVar7);
                                        iVar1 = EVP_DigestFinal_ex(handshake_md,local_88,(uint *)0x0
                                                                  );
                                        if (iVar1 == 0) {
LAB_00101235:
                                          iVar1 = 0;
                                        }
                                        else {
                                          iVar1 = EVP_MD_CTX_get_size_ex(handshake_md);
                                          if (iVar1 < 1) goto LAB_00101235;
                                          pEVar7 = EVP_PKEY_CTX_new_id(0x3fd,(ENGINE *)0x0);
                                          local_a0 = &DAT_0000000c;
                                          EVP_PKEY_derive_init(pEVar7);
                                          uVar8 = EVP_md5_sha1();
                                          EVP_PKEY_CTX_set_tls1_prf_md(pEVar7,uVar8);
                                          EVP_PKEY_CTX_set1_tls1_prf_secret
                                                    (pEVar7,master_secret,0x30);
                                          EVP_PKEY_CTX_add1_tls1_prf_seed
                                                    (pEVar7,"server finished",0xf);
                                          EVP_PKEY_CTX_add1_tls1_prf_seed(pEVar7,local_88,iVar1);
                                          EVP_PKEY_CTX_add1_tls1_prf_seed(pEVar7,0,0);
                                          EVP_PKEY_derive(pEVar7,finished_msg_3 + 0xc,
                                                          (size_t *)&local_a0);
                                          EVP_PKEY_CTX_free(pEVar7);
                                          iVar1 = send_record(local_c8,0x16,0,finished_msg_3,0x18);
                                        }
                                        iVar1 = test_true("test/bad_dtls_test.c",0x22b,
                                                          "send_finished(con, rbio)",iVar1 != 0);
                                        if (iVar1 != 0) {
                                          iVar1 = SSL_do_handshake(local_d0);
                                          iVar1 = test_int_gt("test/bad_dtls_test.c",0x22f,&_LC26,
                                                              &_LC6,iVar1,0);
                                          if (iVar1 != 0) {
                                            lVar5 = BIO_ctrl(local_c0,3,0,&local_a0);
                                            if ((((((lVar5 < 0) || (lVar5 == 0)) || (lVar5 - 1U < 2)
                                                  ) || (((*local_a0 != '\x14' ||
                                                         (*(short *)(local_a0 + 1) != 1)) ||
                                                        ((lVar5 - 3U < 0xb ||
                                                         ((lVar5 - 0xeU < 2 ||
                                                          (local_a0[0xd] != '\x01')))))))) ||
                                                (*(short *)(local_a0 + 0xe) != 0x200)) ||
                                               (((lVar5 == 0x10 || (lVar5 - 0x11U < 2)) ||
                                                (local_a0[0x10] != '\x16')))) {
                                              bVar10 = false;
                                            }
                                            else {
                                              bVar10 = false;
                                              if ((*(short *)(local_a0 + 0x11) == 1) &&
                                                 (1 < lVar5 - 0x13U)) {
                                                bVar10 = *(short *)(local_a0 + 0x13) == 0x100;
                                              }
                                            }
                                            iVar1 = test_true("test/bad_dtls_test.c",0x230,
                                                              "validate_ccs(wbio)",bVar10);
                                            if (iVar1 != 0) {
                                              iVar1 = 0;
                                              plVar9 = &tests;
                                              do {
                                                iVar3 = send_record(local_c8,0x17,*plVar9,plVar9,8);
                                                iVar3 = test_true("test/bad_dtls_test.c",0x23b,
                                                                                                                                    
                                                  "send_record(rbio, SSL3_RT_APPLICATION_DATA, tests[i].seq, &tests[i].seq, sizeof(uint64_t))"
                                                  ,iVar3 != 0);
                                                if (iVar3 == 0) {
                                                  test_error("test/bad_dtls_test.c",0x23d,
                                                                                                                          
                                                  "Failed to send data seq #0x%x%08x (%d)\n",
                                                  (ulong)(&tests)[(long)iVar1 * 2] >> 0x20,
                                                  (&tests)[(long)iVar1 * 2] & 0xffffffff,iVar1);
                                                  goto LAB_00100b16;
                                                }
                                                if ((int)plVar9[1] == 0) {
                                                  iVar3 = SSL_read(local_d0,local_98,0x10);
                                                  iVar3 = test_int_eq("test/bad_dtls_test.c",0x246,
                                                                      &_LC26,"(int)sizeof(uint64_t)"
                                                                      ,iVar3,8);
                                                  if (iVar3 == 0) {
                                                    test_error("test/bad_dtls_test.c",0x247,
                                                                                                                              
                                                  "SSL_read failed or wrong size on seq#0x%x%08x (%d)\n"
                                                  ,(ulong)(&tests)[(long)iVar1 * 2] >> 0x20,
                                                  (&tests)[(long)iVar1 * 2] & 0xffffffff,iVar1);
                                                  goto LAB_00100b16;
                                                  }
                                                  iVar3 = test_true("test/bad_dtls_test.c",0x24b,
                                                                    "recv_buf[0] == tests[i].seq",
                                                                    local_98[0] == *plVar9);
                                                  if (iVar3 == 0) goto LAB_00100b16;
                                                }
                                                iVar1 = iVar1 + 1;
                                                plVar9 = plVar9 + 2;
                                              } while (iVar1 != 0x23);
                                              iVar1 = test_false("test/bad_dtls_test.c",0x250,
                                                                 "tests[i-1].drop",DAT_00101668 != 0
                                                                );
                                              uVar2 = (uint)(iVar1 != 0);
                                              goto LAB_00100852;
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
LAB_00100b16:
                    uVar2 = 0;
                    goto LAB_00100852;
                  }
                }
LAB_00100b20:
                local_c0 = (BIO *)0x0;
                local_c8 = (BIO *)0x0;
                goto LAB_00100852;
              }
            }
LAB_0010094f:
            local_c0 = (BIO *)0x0;
            uVar2 = 0;
            local_c8 = (BIO *)0x0;
            local_d0 = (SSL *)0x0;
            goto LAB_00100852;
          }
        }
        local_c0 = (BIO *)0x0;
        local_c8 = (BIO *)0x0;
        local_d0 = (SSL *)0x0;
        goto LAB_00100852;
      }
    }
  }
  local_c0 = (BIO *)0x0;
  uVar2 = 0;
  ctx = (SSL_CTX *)0x0;
  local_c8 = (BIO *)0x0;
  local_d0 = (SSL *)0x0;
LAB_00100852:
  SSL_SESSION_free(session);
  BIO_free(local_c8);
  BIO_free(local_c0);
  SSL_free(local_d0);
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


