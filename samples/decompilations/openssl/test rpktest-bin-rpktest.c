
uint test_rpk(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  X509 *a;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  ulong uVar19;
  char *pcVar20;
  long in_FS_OFFSET;
  X509 *local_f0;
  X509 *local_e8;
  SSL_SESSION *local_e0;
  SSL_SESSION *local_d8;
  char *local_c8;
  char *local_c0;
  undefined8 local_b8;
  uint local_ac;
  undefined8 local_98;
  SSL_CTX *local_60;
  SSL_CTX *local_58;
  SSL *local_50;
  SSL *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = (SSL_CTX *)0x0;
  local_58 = (SSL_CTX *)0x0;
  local_50 = (SSL *)0x0;
  local_48 = (SSL *)0x0;
  uVar8 = test_int_le("test/rpktest.c",0x7c,&_LC1,"RPK_TESTS * RPK_DIMS",param_1,0x900);
  if (uVar8 == 0) goto LAB_0010008c;
  iVar1 = param_1 / 0x480;
  uVar2 = (param_1 % 0x480) / 0x240;
  iVar9 = (param_1 % 0x480) % 0x240;
  uVar3 = iVar9 / 0x120;
  iVar9 = iVar9 % 0x120;
  uVar4 = iVar9 / 0x90;
  iVar9 = iVar9 % 0x90;
  iVar5 = iVar9 / 0x24;
  iVar9 = iVar9 % 0x24;
  iVar6 = iVar9 / 0x12;
  iVar9 = iVar9 % 0x12;
  a = (X509 *)load_cert_pem(rootcert,0);
  iVar10 = test_ptr("test/rpktest.c",0x8e,"root_x509",a);
  if (iVar10 == 0) {
LAB_001002b0:
    local_d8 = (SSL_SESSION *)0x0;
    uVar8 = 0;
    local_e0 = (SSL_SESSION *)0x0;
    local_e8 = (X509 *)0x0;
    local_f0 = (X509 *)0x0;
    goto LAB_001002d7;
  }
  uVar13 = X509_get0_pubkey(a);
  iVar10 = test_ptr("test/rpktest.c",0x91,"root_pkey",uVar13);
  if (iVar10 == 0) goto LAB_001002b0;
  if (iVar5 != 2) {
    if (iVar5 == 3) {
      local_c8 = cert25519;
      local_c0 = privkey25519;
      local_e8 = (X509 *)cert;
      goto LAB_0010021a;
    }
    if (iVar5 == 0) {
      local_c8 = cert;
      local_c0 = privkey;
      local_e8 = (X509 *)cert2;
      goto LAB_0010021a;
    }
    if (iVar5 == 1) {
      local_c8 = cert2;
      local_c0 = privkey2;
      local_e8 = (X509 *)cert;
      goto LAB_0010021a;
    }
    uVar8 = test_skip("test/rpktest.c",0xb2,"EDCSA disabled");
    local_d8 = (SSL_SESSION *)0x0;
    local_e0 = (SSL_SESSION *)0x0;
    local_e8 = (X509 *)0x0;
    local_f0 = (X509 *)0x0;
    goto LAB_001002d7;
  }
  local_c8 = cert448;
  local_c0 = privkey448;
  local_e8 = (X509 *)cert;
LAB_0010021a:
  local_f0 = (X509 *)load_cert_pem(local_c8,0);
  iVar10 = test_ptr("test/rpktest.c",0xb7,&_LC6,local_f0);
  if (iVar10 == 0) {
    local_d8 = (SSL_SESSION *)0x0;
    local_e0 = (SSL_SESSION *)0x0;
    local_e8 = (X509 *)0x0;
    uVar8 = 0;
    goto LAB_001002d7;
  }
  uVar14 = X509_get0_pubkey(local_f0);
  local_e8 = (X509 *)load_cert_pem(local_e8,0);
  iVar10 = test_ptr("test/rpktest.c",0xbc,"other_x509",local_e8);
  if (iVar10 == 0) goto LAB_0010028f;
  uVar15 = X509_get0_pubkey(local_e8);
  if (iVar6 == 0) {
    local_ac = 0x304;
  }
  else {
    if (iVar6 != 1) goto LAB_0010028f;
    local_ac = 0x303;
  }
  local_b8 = 0;
  if (iVar9 == 0xf) {
    local_b8 = libctx;
    defctxnull = OSSL_PROVIDER_load(0,&_LC8);
    uVar8 = test_ptr("test/rpktest.c",0xe0,"defctxnull",defctxnull);
    if (uVar8 != 0) goto LAB_001004d4;
    goto LAB_001008f0;
  }
LAB_001004d4:
  uVar16 = TLS_client_method();
  uVar17 = TLS_server_method();
  iVar10 = create_ssl_ctx_pair(local_b8,uVar17,uVar16,local_ac,local_ac,&local_58,&local_60,0,0);
  iVar10 = test_true("test/rpktest.c",0xe3,
                     "create_ssl_ctx_pair(test_libctx, TLS_server_method(), TLS_client_method(), tls_version, tls_version, &sctx, &cctx, NULL, NULL)"
                     ,iVar10 != 0);
  if (iVar10 == 0) goto LAB_0010028f;
  if (iVar1 != 0) {
    iVar10 = SSL_CTX_set1_server_cert_type(local_58,&cert_type_rpk,2);
    iVar10 = test_true("test/rpktest.c",0xea,
                       "SSL_CTX_set1_server_cert_type(sctx, cert_type_rpk, sizeof(cert_type_rpk))",
                       iVar10 != 0);
    if (iVar10 == 0) goto LAB_0010028f;
  }
  if (uVar2 != 0) {
    iVar10 = SSL_CTX_set1_client_cert_type(local_58,&cert_type_rpk,2);
    iVar10 = test_true("test/rpktest.c",0xed,
                       "SSL_CTX_set1_client_cert_type(sctx, cert_type_rpk, sizeof(cert_type_rpk))",
                       iVar10 != 0);
    if (iVar10 == 0) goto LAB_0010028f;
  }
  if (uVar3 != 0) {
    iVar10 = SSL_CTX_set1_server_cert_type(local_60,&cert_type_rpk,2);
    iVar10 = test_true("test/rpktest.c",0xf0,
                       "SSL_CTX_set1_server_cert_type(cctx, cert_type_rpk, sizeof(cert_type_rpk))",
                       iVar10 != 0);
    if (iVar10 == 0) goto LAB_0010028f;
  }
  if (uVar4 != 0) {
    iVar10 = SSL_CTX_set1_client_cert_type(local_60,&cert_type_rpk,2);
    iVar10 = test_true("test/rpktest.c",0xf3,
                       "SSL_CTX_set1_client_cert_type(cctx, cert_type_rpk, sizeof(cert_type_rpk))",
                       iVar10 != 0);
    if (iVar10 == 0) goto LAB_0010028f;
  }
  iVar10 = SSL_CTX_set_session_id_context(local_58,"rpk\x02",3);
  iVar10 = test_true("test/rpktest.c",0xf5,
                     "SSL_CTX_set_session_id_context(sctx, SID_CTX, sizeof(SID_CTX))",iVar10 != 0);
  if (iVar10 == 0) goto LAB_0010028f;
  iVar10 = SSL_CTX_set_session_id_context(local_60,"rpk\x02",3);
  iVar10 = test_true("test/rpktest.c",0xf7,
                     "SSL_CTX_set_session_id_context(cctx, SID_CTX, sizeof(SID_CTX))",iVar10 != 0);
  if (iVar10 == 0) goto LAB_0010028f;
  uVar11 = SSL_CTX_dane_enable(local_58);
  iVar10 = test_int_gt("test/rpktest.c",0xfa,"SSL_CTX_dane_enable(sctx)",&_LC17,uVar11,0);
  if (iVar10 == 0) goto LAB_0010028f;
  uVar11 = SSL_CTX_dane_enable(local_60);
  iVar10 = test_int_gt("test/rpktest.c",0xfc,"SSL_CTX_dane_enable(cctx)",&_LC17,uVar11,0);
  if (iVar10 == 0) goto LAB_0010028f;
  SSL_CTX_set_verify(local_60,1,rpk_verify_client_cb);
  iVar10 = create_ssl_objects(local_58,local_60,&local_48,&local_50,0,0);
  iVar10 = test_true("test/rpktest.c",0x102,
                     "create_ssl_objects(sctx, cctx, &serverssl, &clientssl, NULL, NULL)",
                     iVar10 != 0);
  if (iVar10 == 0) goto LAB_0010028f;
  uVar11 = SSL_dane_enable(local_48,0);
  iVar10 = test_int_gt("test/rpktest.c",0x106,"SSL_dane_enable(serverssl, NULL)",&_LC17,uVar11,0);
  if (iVar10 == 0) goto LAB_0010028f;
  uVar11 = SSL_dane_enable(local_50,"example.com");
  iVar10 = test_int_gt("test/rpktest.c",0x108,"SSL_dane_enable(clientssl, \"example.com\")",&_LC17,
                       uVar11,0);
  if (iVar10 == 0) goto LAB_0010028f;
  SSL_use_PrivateKey_file(local_48,local_c0,1);
  iVar10 = test_int_eq("test/rpktest.c",0x10c,
                       "SSL_use_PrivateKey_file(serverssl, privkey_file, SSL_FILETYPE_PEM)",&_LC24);
  if (iVar10 == 0) goto LAB_0010028f;
  if (iVar9 == 1) {
    if ((iVar1 == 0) || ((uVar3 & 1) == 0)) {
      uVar8 = 1;
      iVar10 = 0;
    }
    else {
      uVar8 = 0;
      iVar10 = 1;
    }
LAB_001007da:
    iVar12 = SSL_add_expected_rpk(local_50,uVar14);
    iVar12 = test_true("test/rpktest.c",0x126,"SSL_add_expected_rpk(clientssl, pkey)",iVar12 != 0);
    if (iVar12 == 0) goto LAB_0010028f;
LAB_00100814:
    uVar7 = 0;
LAB_00100821:
    uVar11 = create_ssl_connection(local_48,local_50,uVar8);
    iVar12 = test_int_eq("test/rpktest.c",0x1e4,"expected",&_LC39,iVar10,uVar11);
    if (iVar12 == 0) goto LAB_0010028f;
    if (iVar10 != 0) {
      uVar13 = 0;
      local_ac = 0;
      iVar10 = 0;
      goto LAB_001009dc;
    }
    goto LAB_0010087f;
  }
  iVar10 = SSL_use_certificate_file(local_48,local_c8,1);
  iVar10 = test_int_eq("test/rpktest.c",0x116,
                       "SSL_use_certificate_file(serverssl, cert_file, SSL_FILETYPE_PEM)",&_LC24,
                       iVar10,1);
  if (iVar10 == 0) goto LAB_0010028f;
  SSL_check_private_key(local_48);
  iVar10 = test_int_eq("test/rpktest.c",0x118,"SSL_check_private_key(serverssl)",&_LC24);
  if (iVar10 == 0) goto LAB_0010028f;
  switch(iVar9) {
  case 0:
    iVar10 = SSL_add_expected_rpk(local_50,uVar14);
    iVar10 = test_true("test/rpktest.c",0x122,"SSL_add_expected_rpk(clientssl, pkey)",iVar10 != 0);
    goto joined_r0x001016f4;
  case 1:
    uVar8 = 0;
    iVar10 = iVar9;
    goto LAB_001007da;
  case 2:
    iVar10 = SSL_add_expected_rpk(local_50,uVar14);
    iVar10 = test_true("test/rpktest.c",0x12a,"SSL_add_expected_rpk(clientssl, pkey)",iVar10 != 0);
    if (iVar10 != 0) {
      iVar10 = SSL_add_expected_rpk(local_48,uVar14);
      iVar10 = test_true("test/rpktest.c",300,"SSL_add_expected_rpk(serverssl, pkey)",iVar10 != 0);
      if (iVar10 != 0) {
        iVar10 = SSL_use_PrivateKey_file(local_50,local_c0,1);
        iVar10 = test_int_eq("test/rpktest.c",0x12f,
                             "SSL_use_PrivateKey_file(clientssl, privkey_file, SSL_FILETYPE_PEM)",
                             &_LC24,iVar10,1);
        if (iVar10 != 0) {
          iVar10 = SSL_use_certificate_file(local_50,local_c8,1);
          iVar10 = test_int_eq("test/rpktest.c",0x131,
                               "SSL_use_certificate_file(clientssl, cert_file, SSL_FILETYPE_PEM)",
                               &_LC24,iVar10,1);
          if (iVar10 != 0) {
            iVar10 = SSL_check_private_key(local_50);
            iVar10 = test_int_eq("test/rpktest.c",0x133,"SSL_check_private_key(clientssl)",&_LC24,
                                 iVar10,1);
            if (iVar10 != 0) {
              SSL_set_verify(local_48,3,rpk_verify_server_cb);
LAB_00101eb0:
              uVar7 = 1;
              uVar13 = 0;
              local_ac = 0;
              iVar10 = 0;
              goto LAB_00101713;
            }
          }
        }
      }
    }
    break;
  case 3:
    iVar10 = SSL_add_expected_rpk(local_50,uVar14);
    iVar10 = test_true("test/rpktest.c",0x139,"SSL_add_expected_rpk(clientssl, pkey)",iVar10 != 0);
    if (iVar10 != 0) {
      iVar10 = SSL_add_expected_rpk(local_50,uVar13);
      iVar10 = test_true("test/rpktest.c",0x13b,"SSL_add_expected_rpk(clientssl, root_pkey)",
                         iVar10 != 0);
      goto joined_r0x001016f4;
    }
    break;
  case 4:
    iVar10 = SSL_add_expected_rpk(local_50,uVar14);
    iVar10 = test_true("test/rpktest.c",0x13f,"SSL_add_expected_rpk(clientssl, pkey)",iVar10 != 0);
    if (iVar10 != 0) {
      iVar10 = SSL_add_expected_rpk(local_50,uVar15);
      iVar10 = test_true("test/rpktest.c",0x141,"SSL_add_expected_rpk(clientssl, other_pkey)",
                         iVar10 != 0);
      goto joined_r0x001016f4;
    }
    break;
  case 5:
    iVar10 = SSL_add_expected_rpk(local_50,uVar13);
    iVar10 = test_true("test/rpktest.c",0x145,"SSL_add_expected_rpk(clientssl, root_pkey)",
                       iVar10 != 0);
    if (iVar10 != 0) {
      iVar10 = SSL_add_expected_rpk(local_50,uVar14);
      iVar10 = test_true("test/rpktest.c",0x147,"SSL_add_expected_rpk(clientssl, pkey)",iVar10 != 0)
      ;
      goto joined_r0x001016f4;
    }
    break;
  case 6:
    iVar10 = SSL_add_expected_rpk(local_50,uVar15);
    iVar10 = test_true("test/rpktest.c",0x14b,"SSL_add_expected_rpk(clientssl, other_pkey)",
                       iVar10 != 0);
    if (iVar10 != 0) {
      iVar10 = SSL_add_expected_rpk(local_50,uVar14);
      iVar10 = test_true("test/rpktest.c",0x14d,"SSL_add_expected_rpk(clientssl, pkey)",iVar10 != 0)
      ;
      goto joined_r0x001016f4;
    }
    break;
  case 7:
    iVar10 = SSL_add_expected_rpk(local_50,uVar15);
    iVar10 = test_true("test/rpktest.c",0x153,"SSL_add_expected_rpk(clientssl, other_pkey)",
                       iVar10 != 0);
    if (iVar10 != 0) {
      uVar13 = 0x41;
      iVar10 = -(iVar1 == 1 & uVar3);
      SSL_set_verify(local_50,0,rpk_verify_client_cb);
      local_ac = 0;
      uVar7 = 0;
      goto LAB_00101713;
    }
    break;
  case 8:
    uVar13 = 0x5f;
    iVar10 = -(iVar1 == 1 & uVar3);
    SSL_set_verify(local_50,0,rpk_verify_client_cb);
    local_ac = 0;
    uVar7 = 0;
    goto LAB_00101713;
  case 9:
    if (local_ac != 0x304) {
      pcVar20 = "PHA requires TLSv1.3";
      uVar13 = 0x161;
      goto LAB_00101b92;
    }
    iVar10 = SSL_add_expected_rpk(local_50,uVar14);
    iVar10 = test_true("test/rpktest.c",0x164,"SSL_add_expected_rpk(clientssl, pkey)",iVar10 != 0);
    if (iVar10 != 0) {
      iVar10 = SSL_add_expected_rpk(local_48,uVar14);
      uVar8 = test_true("test/rpktest.c",0x166,"SSL_add_expected_rpk(serverssl, pkey)",iVar10 != 0);
      if (uVar8 == 0) goto LAB_001008f0;
      iVar10 = SSL_use_PrivateKey_file(local_50,local_c0,1);
      iVar10 = test_int_eq("test/rpktest.c",0x169,
                           "SSL_use_PrivateKey_file(clientssl, privkey_file, SSL_FILETYPE_PEM)",
                           &_LC24,iVar10,1);
      if (iVar10 != 0) {
        iVar10 = SSL_use_certificate_file(local_50,local_c8,1);
        iVar10 = test_int_eq("test/rpktest.c",0x16b,
                             "SSL_use_certificate_file(clientssl, cert_file, SSL_FILETYPE_PEM)",
                             &_LC24,iVar10,1);
        if (iVar10 != 0) {
          iVar10 = SSL_check_private_key(local_50);
          iVar10 = test_int_eq("test/rpktest.c",0x16d,"SSL_check_private_key(clientssl)",&_LC24,
                               iVar10,1);
          if (iVar10 != 0) {
            SSL_set_verify(local_48,0xb,rpk_verify_server_cb);
            SSL_set_post_handshake_auth(local_50,1);
            goto LAB_00101eb0;
          }
        }
      }
    }
    break;
  case 10:
    iVar10 = SSL_add_expected_rpk(local_50,uVar14);
    iVar10 = test_true("test/rpktest.c",0x174,"SSL_add_expected_rpk(clientssl, pkey)",iVar10 != 0);
    if (iVar10 != 0) {
      iVar10 = SSL_add_expected_rpk(local_48,uVar14);
      iVar10 = test_true("test/rpktest.c",0x176,"SSL_add_expected_rpk(serverssl, pkey)",iVar10 != 0)
      ;
      if (iVar10 != 0) {
        iVar10 = SSL_use_PrivateKey_file(local_50,local_c0,1);
        iVar10 = test_int_eq("test/rpktest.c",0x179,
                             "SSL_use_PrivateKey_file(clientssl, privkey_file, SSL_FILETYPE_PEM)",
                             &_LC24,iVar10,1);
        if (iVar10 != 0) {
          uVar8 = uVar2 ^ 1 | uVar4 ^ 1;
          if (uVar8 != 0) {
            SSL_set_verify(local_48,3,(callback *)0x0);
            iVar10 = 0;
            uVar7 = uVar8;
            goto LAB_00100821;
          }
          SSL_set_verify(local_48,3,rpk_verify_server_cb);
          local_ac = 0;
          iVar10 = 0;
          uVar13 = 0;
          uVar7 = 1;
          goto LAB_00101713;
        }
      }
    }
    break;
  case 0xb:
    if ((iVar1 == 0) || ((uVar3 & 1) == 0)) {
      pcVar20 = "Only testing resumption with server RPK";
      uVar13 = 0x187;
      goto LAB_00101b92;
    }
    iVar10 = SSL_add_expected_rpk(local_50,uVar14);
    iVar10 = test_true("test/rpktest.c",0x18a,"SSL_add_expected_rpk(clientssl, pkey)",iVar10 != 0);
    if (iVar10 == 0) {
      uVar8 = 0;
      goto LAB_001008f0;
    }
LAB_001022f7:
    local_ac = 1;
    uVar13 = 0;
    uVar7 = 0;
    iVar10 = 0;
    goto LAB_00101713;
  case 0xc:
    if ((iVar1 == 0) || ((uVar3 & 1) == 0)) {
      pcVar20 = "Only testing resumption with server RPK";
      uVar13 = 400;
      goto LAB_00101b92;
    }
    iVar10 = SSL_add_expected_rpk(local_50,uVar14);
    uVar8 = test_true("test/rpktest.c",0x193,"SSL_add_expected_rpk(clientssl, pkey)",iVar10 != 0);
    if (uVar8 != 0) {
      SSL_set_options(local_48,0x4000);
      SSL_set_options(local_50,0x4000);
      goto LAB_001022f7;
    }
    goto LAB_001008f0;
  case 0xd:
    if ((iVar1 == 0) || ((uVar3 & 1) == 0)) {
      pcVar20 = "Only testing resumption with server RPK";
      uVar13 = 0x19b;
    }
    else {
      uVar13 = 0x19f;
      pcVar20 = "Only testing client authentication resumption with client RPK";
      if (uVar2 == 1 && uVar4 == 1) {
        iVar10 = SSL_add_expected_rpk
                           (local_50,uVar14,
                            "Only testing client authentication resumption with client RPK");
        iVar10 = test_true("test/rpktest.c",0x1a2,"SSL_add_expected_rpk(clientssl, pkey)",
                           iVar10 != 0);
        if (iVar10 != 0) {
          iVar10 = SSL_add_expected_rpk(local_48,uVar14);
          uVar8 = test_true("test/rpktest.c",0x1a4,"SSL_add_expected_rpk(serverssl, pkey)",
                            iVar10 != 0);
          if (uVar8 == 0) goto LAB_001008f0;
          iVar10 = SSL_use_PrivateKey_file(local_50,local_c0,1);
          iVar10 = test_int_eq("test/rpktest.c",0x1a7,
                               "SSL_use_PrivateKey_file(clientssl, privkey_file, SSL_FILETYPE_PEM)",
                               &_LC24,iVar10,1);
          if (iVar10 != 0) {
            iVar10 = SSL_use_certificate_file(local_50,local_c8,1);
            iVar10 = test_int_eq("test/rpktest.c",0x1a9,
                                 "SSL_use_certificate_file(clientssl, cert_file, SSL_FILETYPE_PEM)",
                                 &_LC24,iVar10,1);
            if (iVar10 != 0) {
              iVar10 = SSL_check_private_key(local_50);
              iVar10 = test_int_eq("test/rpktest.c",0x1ab,"SSL_check_private_key(clientssl)",&_LC24,
                                   iVar10,1);
              if (iVar10 != 0) {
                uVar13 = 0;
                SSL_set_verify(local_48,3,rpk_verify_server_cb);
                local_ac = 1;
                uVar7 = 1;
                iVar10 = 0;
                goto LAB_00101713;
              }
            }
          }
        }
        break;
      }
    }
    goto LAB_00101b92;
  case 0xe:
    if ((iVar1 == 0) || ((uVar3 & 1) == 0)) {
      pcVar20 = "Only testing resumption with server RPK";
      uVar13 = 0x1b3;
    }
    else {
      uVar13 = 0x1b7;
      pcVar20 = "Only testing client authentication resumption with client RPK";
      if (uVar2 == 1 && uVar4 == 1) {
        iVar10 = SSL_add_expected_rpk
                           (local_50,uVar14,
                            "Only testing client authentication resumption with client RPK");
        iVar10 = test_true("test/rpktest.c",0x1ba,"SSL_add_expected_rpk(clientssl, pkey)",
                           iVar10 != 0);
        if (iVar10 != 0) {
          iVar10 = SSL_add_expected_rpk(local_48,uVar14);
          uVar8 = test_true("test/rpktest.c",0x1bc,"SSL_add_expected_rpk(serverssl, pkey)",
                            iVar10 != 0);
          if (uVar8 == 0) goto LAB_001008f0;
          iVar10 = SSL_use_PrivateKey_file(local_50,local_c0,1);
          iVar10 = test_int_eq("test/rpktest.c",0x1bf,
                               "SSL_use_PrivateKey_file(clientssl, privkey_file, SSL_FILETYPE_PEM)",
                               &_LC24,iVar10,1);
          if (iVar10 != 0) {
            iVar10 = SSL_use_certificate_file(local_50,local_c8,1);
            iVar10 = test_int_eq("test/rpktest.c",0x1c1,
                                 "SSL_use_certificate_file(clientssl, cert_file, SSL_FILETYPE_PEM)",
                                 &_LC24,iVar10,1);
            if (iVar10 != 0) {
              iVar10 = SSL_check_private_key(local_50);
              iVar10 = test_int_eq("test/rpktest.c",0x1c3,"SSL_check_private_key(clientssl)",&_LC24,
                                   iVar10,1);
              if (iVar10 != 0) {
                uVar13 = 0;
                SSL_set_verify(local_48,3,rpk_verify_server_cb);
                SSL_set_options(local_48,0x4000);
                SSL_set_options(local_50,0x4000);
                local_ac = 1;
                uVar7 = 1;
                iVar10 = 0;
                goto LAB_00101713;
              }
            }
          }
        }
        break;
      }
    }
LAB_00101b92:
    uVar8 = test_skip("test/rpktest.c",uVar13,pcVar20);
    local_d8 = (SSL_SESSION *)0x0;
    local_e0 = (SSL_SESSION *)0x0;
    goto LAB_001002d7;
  case 0xf:
    iVar10 = SSL_add_expected_rpk(local_50,uVar14);
    iVar10 = test_true("test/rpktest.c",0x1cc,"SSL_add_expected_rpk(clientssl, pkey)",iVar10 != 0);
    goto joined_r0x001016f4;
  case 0x10:
    if ((iVar1 == 1) && ((uVar3 & 1) != 0)) {
      uVar8 = 1;
      SSL_set_verify(local_48,1,(callback *)0x0);
      iVar10 = 0;
    }
    else {
      uVar8 = 0;
      iVar10 = 1;
    }
    iVar12 = SSL_add_expected_rpk(local_50,uVar15);
    iVar12 = test_true("test/rpktest.c",0x1d6,"SSL_add_expected_rpk(clientssl, other_pkey)",
                       iVar12 != 0);
    if (iVar12 != 0) goto LAB_00100814;
    break;
  case 0x11:
    if ((iVar1 == 1) && ((uVar3 & 1) != 0)) {
      uVar8 = 1;
      SSL_set_verify(local_48,1,(callback *)0x0);
      iVar10 = 0;
      uVar7 = 0;
      goto LAB_00100821;
    }
    goto LAB_00101702;
  default:
    iVar10 = test_true("test/rpktest.c",0x11e,"idx < RPK_TESTS",1);
joined_r0x001016f4:
    if (iVar10 == 0) break;
LAB_00101702:
    uVar13 = 0;
    local_ac = 0;
    uVar7 = 0;
    iVar10 = 0;
LAB_00101713:
    uVar11 = create_ssl_connection(local_48,local_50,0);
    iVar12 = test_int_eq("test/rpktest.c",0x1e4,"expected",&_LC39,1,uVar11);
    if (iVar12 == 0) break;
LAB_001009dc:
    if ((iVar1 != 0) && (uVar3 != 0)) {
      lVar18 = SSL_get_verify_result(local_50);
      iVar12 = test_long_eq("test/rpktest.c",0x1ee,"SSL_get_verify_result(clientssl)",
                            "client_verify_result",lVar18,uVar13);
      if (iVar12 != 0) {
        uVar13 = SSL_get0_peer_rpk(local_50);
        uVar8 = test_ptr("test/rpktest.c",0x1f0,"SSL_get0_peer_rpk(clientssl)",uVar13);
        if (uVar8 == 0) {
LAB_001008f0:
          local_d8 = (SSL_SESSION *)0x0;
          local_e0 = (SSL_SESSION *)0x0;
          goto LAB_001002d7;
        }
        uVar11 = SSL_get_negotiated_server_cert_type(local_48);
        iVar12 = test_int_eq("test/rpktest.c",0x1f2,"SSL_get_negotiated_server_cert_type(serverssl)"
                             ,"TLSEXT_cert_type_rpk",uVar11,2);
        if (iVar12 != 0) {
          uVar11 = SSL_get_negotiated_server_cert_type(local_50);
          iVar12 = test_int_eq("test/rpktest.c",500,"SSL_get_negotiated_server_cert_type(clientssl)"
                               ,"TLSEXT_cert_type_rpk",uVar11,2);
          if (iVar12 != 0) goto LAB_00100ad5;
        }
      }
      break;
    }
    uVar13 = SSL_get0_peer_certificate();
    iVar12 = test_ptr("test/rpktest.c",0x1f7,"SSL_get0_peer_certificate(clientssl)",uVar13);
    if (iVar12 == 0) break;
    uVar11 = SSL_get_negotiated_server_cert_type(local_48);
    iVar12 = test_int_eq("test/rpktest.c",0x1f9,"SSL_get_negotiated_server_cert_type(serverssl)",
                         "TLSEXT_cert_type_x509",uVar11,0);
    if (iVar12 == 0) break;
    uVar11 = SSL_get_negotiated_server_cert_type(local_50);
    iVar12 = test_int_eq("test/rpktest.c",0x1fb,"SSL_get_negotiated_server_cert_type(clientssl)",
                         "TLSEXT_cert_type_x509",uVar11,0);
    if (iVar12 == 0) break;
LAB_00100ad5:
    if (iVar9 == 9) {
      iVar12 = SSL_verify_client_post_handshake(local_48);
      iVar12 = test_true("test/rpktest.c",0x201,"SSL_verify_client_post_handshake(serverssl)",
                         iVar12 != 0);
      if (iVar12 != 0) {
        iVar12 = SSL_do_handshake(local_48);
        iVar12 = test_true("test/rpktest.c",0x203,"SSL_do_handshake(serverssl)",iVar12 != 0);
        if (iVar12 != 0) {
          iVar12 = SSL_read(local_50,(void *)0x0,0);
          iVar12 = test_int_le("test/rpktest.c",0x205,"SSL_read(clientssl, NULL, 0)",&_LC17,iVar12,0
                              );
          if (iVar12 != 0) {
            iVar12 = SSL_read(local_48,(void *)0x0,0);
            iVar12 = test_int_le("test/rpktest.c",0x207,"SSL_read(serverssl, NULL, 0)",&_LC17,iVar12
                                 ,0);
            if (iVar12 != 0) goto LAB_00100ae0;
          }
        }
      }
      break;
    }
LAB_00100ae0:
    if (uVar7 != 0) {
      if ((uVar2 == 0) || (uVar4 == 0)) {
        uVar13 = SSL_get0_peer_certificate();
        iVar12 = test_ptr("test/rpktest.c",0x217,"SSL_get0_peer_certificate(serverssl)",uVar13);
        if (iVar12 != 0) {
          uVar11 = SSL_get_negotiated_client_cert_type(local_48);
          iVar12 = test_int_eq("test/rpktest.c",0x219,
                               "SSL_get_negotiated_client_cert_type(serverssl)",
                               "TLSEXT_cert_type_x509",uVar11,0);
          if (iVar12 != 0) {
            uVar11 = SSL_get_negotiated_client_cert_type(local_50);
            iVar12 = test_int_eq("test/rpktest.c",0x21b,
                                 "SSL_get_negotiated_client_cert_type(clientssl)",
                                 "TLSEXT_cert_type_x509",uVar11,0);
joined_r0x0010162a:
            if (iVar12 != 0) goto LAB_00100bd2;
          }
        }
      }
      else {
        lVar18 = SSL_get_verify_result(local_48);
        iVar12 = test_long_eq("test/rpktest.c",0x20e,"SSL_get_verify_result(serverssl)",
                              "server_verify_result",lVar18,0);
        if (iVar12 != 0) {
          uVar13 = SSL_get0_peer_rpk(local_48);
          iVar12 = test_ptr("test/rpktest.c",0x210,"SSL_get0_peer_rpk(serverssl)",uVar13);
          if (iVar12 != 0) {
            uVar11 = SSL_get_negotiated_client_cert_type(local_48);
            iVar12 = test_int_eq("test/rpktest.c",0x212,
                                 "SSL_get_negotiated_client_cert_type(serverssl)",
                                 "TLSEXT_cert_type_rpk",uVar11,2);
            if (iVar12 != 0) {
              uVar11 = SSL_get_negotiated_client_cert_type(local_50);
              iVar12 = test_int_eq("test/rpktest.c",0x214,
                                   "SSL_get_negotiated_client_cert_type(clientssl)",
                                   "TLSEXT_cert_type_rpk",uVar11,2);
              goto joined_r0x0010162a;
            }
          }
        }
      }
      break;
    }
LAB_00100bd2:
    if (local_ac != 0) {
      local_e0 = SSL_get1_session(local_50);
      uVar8 = test_ptr("test/rpktest.c",0x224,"(client_sess = SSL_get1_session(clientssl))",local_e0
                      );
      local_d8 = (SSL_SESSION *)0x0;
      if (uVar8 == 0) goto LAB_001002d7;
      uVar13 = SSL_SESSION_get0_peer_rpk(local_e0);
      uVar8 = test_ptr("test/rpktest.c",0x225,
                       "(client_pkey = SSL_SESSION_get0_peer_rpk(client_sess))");
      if (uVar8 == 0) goto LAB_001002d7;
      if (uVar7 != 0) {
        local_d8 = SSL_get1_session(local_48);
        uVar8 = test_ptr("test/rpktest.c",0x228,"(server_sess = SSL_get1_session(serverssl))",
                         local_d8);
        if (uVar8 != 0) {
          local_98 = SSL_SESSION_get0_peer_rpk(local_d8);
          uVar8 = test_ptr("test/rpktest.c",0x229,
                           "(server_pkey = SSL_SESSION_get0_peer_rpk(server_sess))",local_98);
          if (uVar8 != 0) goto LAB_00100cb9;
        }
        goto LAB_001002d7;
      }
      local_98 = 0;
LAB_00100cb9:
      SSL_shutdown(local_50);
      SSL_shutdown(local_48);
      SSL_free(local_50);
      SSL_free(local_48);
      local_50 = (SSL *)0x0;
      local_48 = (SSL *)0x0;
      iVar12 = create_ssl_objects(local_58,local_60,&local_48,&local_50,0,0);
      iVar12 = test_true("test/rpktest.c",0x232,
                         "create_ssl_objects(sctx, cctx, &serverssl, &clientssl, NULL, NULL)",
                         iVar12 != 0);
      if (iVar12 != 0) {
        iVar12 = SSL_set_session(local_50,local_e0);
        iVar12 = test_true("test/rpktest.c",0x234,"SSL_set_session(clientssl, client_sess)",
                           iVar12 != 0);
        if (iVar12 != 0) {
          iVar12 = SSL_use_PrivateKey_file(local_48,local_c0,1);
          uVar8 = test_int_eq("test/rpktest.c",0x238,
                              "SSL_use_PrivateKey_file(serverssl, privkey_file, SSL_FILETYPE_PEM)",
                              &_LC24,iVar12,1);
          if (uVar8 == 0) goto LAB_001002d7;
          iVar12 = SSL_use_certificate_file(local_48,local_c8,1);
          iVar12 = test_int_eq("test/rpktest.c",0x23a,
                               "SSL_use_certificate_file(serverssl, cert_file, SSL_FILETYPE_PEM)",
                               &_LC24,iVar12,1);
          if (iVar12 != 0) {
            iVar12 = SSL_check_private_key(local_48);
            iVar12 = test_int_eq("test/rpktest.c",0x23c,"SSL_check_private_key(serverssl)",&_LC24,
                                 iVar12,1);
            if (iVar12 != 0) {
              uVar11 = SSL_dane_enable(local_48,"example.com");
              iVar12 = test_int_gt("test/rpktest.c",0x23e,
                                   "SSL_dane_enable(serverssl, \"example.com\")",&_LC17,uVar11,0);
              if (iVar12 != 0) {
                uVar11 = SSL_dane_enable(local_50,"example.com");
                iVar12 = test_int_gt("test/rpktest.c",0x240,
                                     "SSL_dane_enable(clientssl, \"example.com\")",&_LC17,uVar11,0);
                if (iVar12 != 0) {
                  if (iVar9 == 0xd) {
                    iVar12 = SSL_add_expected_rpk(local_50,uVar13);
                    iVar12 = test_true("test/rpktest.c",0x251,
                                       "SSL_add_expected_rpk(clientssl, client_pkey)",iVar12 != 0);
                    if (iVar12 != 0) {
                      iVar12 = SSL_add_expected_rpk(local_48,local_98);
                      iVar12 = test_true("test/rpktest.c",0x253,
                                         "SSL_add_expected_rpk(serverssl, server_pkey)",iVar12 != 0)
                      ;
                      if (iVar12 != 0) {
                        iVar12 = SSL_use_PrivateKey_file(local_50,local_c0,1);
                        iVar12 = test_int_eq("test/rpktest.c",0x256,
                                             "SSL_use_PrivateKey_file(clientssl, privkey_file, SSL_FILETYPE_PEM)"
                                             ,&_LC24,iVar12,1);
                        if (iVar12 != 0) {
                          iVar12 = SSL_use_certificate_file(local_50,local_c8,1);
                          iVar12 = test_int_eq("test/rpktest.c",600,
                                               "SSL_use_certificate_file(clientssl, cert_file, SSL_FILETYPE_PEM)"
                                               ,&_LC24,iVar12,1);
                          if (iVar12 != 0) {
                            iVar12 = SSL_check_private_key(local_50);
                            iVar12 = test_int_eq("test/rpktest.c",0x25a,
                                                 "SSL_check_private_key(clientssl)",&_LC24,iVar12,1)
                            ;
                            if (iVar12 != 0) {
                              SSL_set_verify(local_48,3,rpk_verify_server_cb);
                              goto LAB_00100f40;
                            }
                          }
                        }
                      }
                    }
                  }
                  else {
                    if (iVar9 < 0xe) {
                      if (iVar9 == 0xb) {
                        iVar12 = SSL_add_expected_rpk(local_50,uVar13);
                        iVar12 = test_true("test/rpktest.c",0x247,
                                           "SSL_add_expected_rpk(clientssl, client_pkey)",
                                           iVar12 != 0);
                        if (iVar12 == 0) goto LAB_001002a1;
                      }
                      else if (iVar9 == 0xc) {
                        iVar12 = SSL_add_expected_rpk(local_50,uVar13);
                        iVar12 = test_true("test/rpktest.c",0x24b,
                                           "SSL_add_expected_rpk(clientssl, client_pkey)",
                                           iVar12 != 0);
                        if (iVar12 == 0) goto LAB_001002a1;
                        SSL_set_options(local_50,0x4000);
                        SSL_set_options(local_48,0x4000);
                      }
                    }
                    else if (iVar9 == 0xe) {
                      iVar12 = SSL_add_expected_rpk(local_50,uVar13);
                      iVar12 = test_true("test/rpktest.c",0x25f,
                                         "SSL_add_expected_rpk(clientssl, client_pkey)",iVar12 != 0)
                      ;
                      if (iVar12 != 0) {
                        iVar12 = SSL_add_expected_rpk(local_48,local_98);
                        iVar12 = test_true("test/rpktest.c",0x261,
                                           "SSL_add_expected_rpk(serverssl, server_pkey)",
                                           iVar12 != 0);
                        if (iVar12 != 0) {
                          iVar12 = SSL_use_PrivateKey_file(local_50,local_c0,1);
                          iVar12 = test_int_eq("test/rpktest.c",0x264,
                                               "SSL_use_PrivateKey_file(clientssl, privkey_file, SSL_FILETYPE_PEM)"
                                               ,&_LC24,iVar12,1);
                          if (iVar12 != 0) {
                            iVar12 = SSL_use_certificate_file(local_50,local_c8,1);
                            iVar12 = test_int_eq("test/rpktest.c",0x266,
                                                 "SSL_use_certificate_file(clientssl, cert_file, SSL_FILETYPE_PEM)"
                                                 ,&_LC24,iVar12,1);
                            if (iVar12 != 0) {
                              iVar12 = SSL_check_private_key(local_50);
                              iVar12 = test_int_eq("test/rpktest.c",0x268,
                                                   "SSL_check_private_key(clientssl)",&_LC24,iVar12,
                                                   1);
                              if (iVar12 != 0) {
                                SSL_set_verify(local_48,3,rpk_verify_server_cb);
                                SSL_set_options(local_48,0x4000);
                                SSL_set_options(local_50,0x4000);
                                goto LAB_00100f40;
                              }
                            }
                          }
                        }
                      }
                      goto LAB_001002a1;
                    }
LAB_00100f40:
                    iVar12 = create_ssl_connection(local_48,local_50,0);
                    iVar12 = test_true("test/rpktest.c",0x271,&_LC39,iVar12 != 0);
                    if (iVar12 != 0) {
                      uVar19 = SSL_get_verify_result(local_50);
                      iVar10 = test_int_eq("test/rpktest.c",0x274,"client_expected","verify",iVar10,
                                           uVar19 & 0xffffffff);
                      if (iVar10 != 0) {
                        iVar10 = SSL_session_reused(local_50);
                        iVar10 = test_true("test/rpktest.c",0x276,"SSL_session_reused(clientssl)",
                                           iVar10 != 0);
                        if (iVar10 != 0) {
                          uVar13 = SSL_get0_peer_rpk(local_50);
                          iVar10 = test_ptr("test/rpktest.c",0x279,"SSL_get0_peer_rpk(clientssl)",
                                            uVar13);
                          if (iVar10 != 0) {
                            uVar11 = SSL_get_negotiated_server_cert_type(local_48);
                            iVar10 = test_int_eq("test/rpktest.c",0x27b,
                                                 "SSL_get_negotiated_server_cert_type(serverssl)",
                                                 "TLSEXT_cert_type_rpk",uVar11,2);
                            if (iVar10 != 0) {
                              uVar11 = SSL_get_negotiated_server_cert_type(local_50);
                              iVar10 = test_int_eq("test/rpktest.c",0x27d,
                                                   "SSL_get_negotiated_server_cert_type(clientssl)",
                                                   "TLSEXT_cert_type_rpk",uVar11,2);
                              if (iVar10 != 0) {
                                uVar8 = local_ac;
                                if (uVar7 == 0) goto LAB_001002d7;
                                uVar13 = SSL_get0_peer_rpk(local_48);
                                iVar10 = test_ptr("test/rpktest.c",0x281,
                                                  "SSL_get0_peer_rpk(serverssl)",uVar13);
                                if (iVar10 != 0) {
                                  uVar11 = SSL_get_negotiated_client_cert_type(local_48);
                                  iVar10 = test_int_eq("test/rpktest.c",0x283,
                                                                                                              
                                                  "SSL_get_negotiated_client_cert_type(serverssl)",
                                                  "TLSEXT_cert_type_rpk",uVar11,2);
                                  if (iVar10 != 0) {
                                    uVar11 = SSL_get_negotiated_client_cert_type(local_50);
                                    iVar10 = test_int_eq("test/rpktest.c",0x285,
                                                                                                                  
                                                  "SSL_get_negotiated_client_cert_type(clientssl)",
                                                  "TLSEXT_cert_type_rpk",uVar11,2);
                                    uVar8 = (uint)(iVar10 != 0);
                                    goto LAB_001002d7;
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
      goto LAB_001002a1;
    }
LAB_0010087f:
    local_d8 = (SSL_SESSION *)0x0;
    local_e0 = (SSL_SESSION *)0x0;
    uVar8 = 1;
    goto LAB_001002d7;
  }
LAB_0010028f:
  local_d8 = (SSL_SESSION *)0x0;
  local_e0 = (SSL_SESSION *)0x0;
LAB_001002a1:
  uVar8 = 0;
LAB_001002d7:
  OSSL_PROVIDER_unload(defctxnull);
  defctxnull = 0;
  SSL_SESSION_free(local_e0);
  SSL_SESSION_free(local_d8);
  SSL_free(local_48);
  SSL_free(local_50);
  SSL_CTX_free(local_58);
  SSL_CTX_free(local_60);
  X509_free(local_f0);
  X509_free(local_e8);
  X509_free(a);
  if (uVar8 == 0) {
    test_info("test/rpktest.c",0x29a,
              "idx_ss_rpk=%d, idx_sc_rpk=%d, idx_cs_rpk=%d, idx_cc_rpk=%d, idx_cert=%d, idx_prot=%d, idx=%d"
              ,iVar1,uVar2,uVar3,uVar4,iVar5,iVar6,iVar9);
  }
LAB_0010008c:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar8;
}



undefined8 rpk_verify_server_cb(undefined4 param_1,X509_STORE_CTX *param_2)

{
  int iVar1;
  long lVar2;
  
  iVar1 = X509_STORE_CTX_get_error(param_2);
  lVar2 = X509_STORE_CTX_get0_rpk(param_2);
  if ((iVar1 != 0) && (lVar2 != 0)) {
    test_info("test/rpktest.c",0x3b,"rpk_verify_server_cb: ok=%d err=%d",param_1,iVar1);
    return 0;
  }
  return 1;
}



undefined8 rpk_verify_client_cb(undefined4 param_1,X509_STORE_CTX *param_2)

{
  int iVar1;
  long lVar2;
  
  iVar1 = X509_STORE_CTX_get_error(param_2);
  lVar2 = X509_STORE_CTX_get0_rpk(param_2);
  if ((iVar1 != 0) && (lVar2 != 0)) {
    test_info("test/rpktest.c",0x2f,"rpk_verify_client_cb: ok=%d err=%d",param_1,iVar1);
    return 0;
  }
  return 1;
}



bool test_rpk_api(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  bool bVar4;
  SSL_CTX *local_30;
  SSL_CTX *local_28;
  undefined1 local_1b;
  undefined1 local_1a;
  undefined1 local_19;
  undefined2 local_18;
  undefined2 local_16;
  undefined1 local_14;
  undefined2 local_13;
  undefined1 local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_13 = 2;
  local_18 = 0x301;
  local_30 = (SSL_CTX *)0x0;
  local_28 = (SSL_CTX *)0x0;
  local_16 = 2;
  local_14 = 0;
  local_1b = 0xff;
  local_11 = 0xff;
  local_1a = 0;
  local_19 = 2;
  uVar2 = TLS_client_method();
  uVar3 = TLS_server_method();
  iVar1 = create_ssl_ctx_pair(0,uVar3,uVar2,0x303,0x303,&local_28,&local_30,0,0);
  iVar1 = test_true("test/rpktest.c",0x2b2,
                    "create_ssl_ctx_pair(NULL, TLS_server_method(), TLS_client_method(), TLS1_2_VERSION, TLS1_2_VERSION, &sctx, &cctx, NULL, NULL)"
                    ,iVar1 != 0);
  if (iVar1 != 0) {
    iVar1 = SSL_CTX_set1_server_cert_type(local_28,&local_16,3);
    iVar1 = test_false("test/rpktest.c",0x2b8,
                       "SSL_CTX_set1_server_cert_type(sctx, cert_type_dups, sizeof(cert_type_dups))"
                       ,iVar1 != 0);
    if (iVar1 != 0) {
      iVar1 = SSL_CTX_set1_server_cert_type(local_28,&local_1b,1);
      iVar1 = test_false("test/rpktest.c",699,
                         "SSL_CTX_set1_server_cert_type(sctx, cert_type_bad, sizeof(cert_type_bad))"
                         ,iVar1 != 0);
      if (iVar1 != 0) {
        iVar1 = SSL_CTX_set1_server_cert_type(local_28,&local_13,3);
        iVar1 = test_false("test/rpktest.c",0x2be,
                           "SSL_CTX_set1_server_cert_type(sctx, cert_type_extra, sizeof(cert_type_extra))"
                           ,iVar1 != 0);
        if (iVar1 != 0) {
          iVar1 = SSL_CTX_set1_server_cert_type(local_28,&local_18,2);
          iVar1 = test_false("test/rpktest.c",0x2c1,
                             "SSL_CTX_set1_server_cert_type(sctx, cert_type_unsup, sizeof(cert_type_unsup))"
                             ,iVar1 != 0);
          if (iVar1 != 0) {
            iVar1 = SSL_CTX_set1_server_cert_type(local_28,&local_1a,1);
            iVar1 = test_true("test/rpktest.c",0x2c4,
                              "SSL_CTX_set1_server_cert_type(sctx, cert_type_just_x509, sizeof(cert_type_just_x509))"
                              ,iVar1 != 0);
            if (iVar1 != 0) {
              iVar1 = SSL_CTX_set1_server_cert_type(local_28,&local_19,1);
              iVar1 = test_true("test/rpktest.c",0x2c7,
                                "SSL_CTX_set1_server_cert_type(sctx, cert_type_just_rpk, sizeof(cert_type_just_rpk))"
                                ,iVar1 != 0);
              bVar4 = iVar1 != 0;
              goto LAB_00102536;
            }
          }
        }
      }
    }
  }
  bVar4 = false;
LAB_00102536:
  SSL_CTX_free(local_28);
  SSL_CTX_free(local_30);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined1 * test_get_options(void)

{
  return options_0;
}



undefined8 setup_tests(void)

{
  int iVar1;
  
  iVar1 = test_skip_common_options();
  if (iVar1 == 0) {
    test_error("test/rpktest.c",0x2d5,"Error parsing test options\n");
  }
  else {
    certsdir = test_get_argument(0);
    iVar1 = test_ptr("test/rpktest.c",0x2d9,"certsdir = test_get_argument(0)",certsdir);
    if ((((((iVar1 != 0) && (rootcert = test_mk_file_path(certsdir,"rootcert.pem"), rootcert != 0))
          && (cert = test_mk_file_path(certsdir,"servercert.pem"), cert != 0)) &&
         ((privkey = test_mk_file_path(certsdir,"serverkey.pem"), privkey != 0 &&
          (cert2 = test_mk_file_path(certsdir,"server-ecdsa-cert.pem"), cert2 != 0)))) &&
        ((privkey2 = test_mk_file_path(certsdir,"server-ecdsa-key.pem"), privkey2 != 0 &&
         ((cert448 = test_mk_file_path(certsdir,"server-ed448-cert.pem"), cert2 != 0 &&
          (privkey448 = test_mk_file_path(certsdir,"server-ed448-key.pem"), privkey2 != 0)))))) &&
       ((cert25519 = test_mk_file_path(certsdir,"server-ed25519-cert.pem"), cert2 != 0 &&
        ((privkey25519 = test_mk_file_path(certsdir,"server-ed25519-key.pem"), privkey2 != 0 &&
         (libctx = OSSL_LIB_CTX_new(), libctx != 0)))))) {
      add_test("test_rpk_api",test_rpk_api);
      add_all_tests("test_rpk",0x100000,0x900,1);
      return 1;
    }
  }
  return 0;
}



void cleanup_tests(void)

{
  CRYPTO_free(rootcert);
  CRYPTO_free(cert);
  CRYPTO_free(privkey);
  CRYPTO_free(cert2);
  CRYPTO_free(privkey2);
  CRYPTO_free(cert448);
  CRYPTO_free(privkey448);
  CRYPTO_free(cert25519);
  CRYPTO_free(privkey25519);
  OSSL_LIB_CTX_free(libctx);
  return;
}


