
undefined8 write_record(undefined8 param_1,ulong param_2,undefined1 param_3,undefined1 param_4)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long in_FS_OFFSET;
  ulong local_148;
  undefined1 local_13d;
  undefined1 local_13c;
  undefined1 local_13b;
  ushort local_13a;
  undefined8 local_138 [33];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_13c = 3;
  puVar5 = local_138;
  for (lVar3 = 0x20; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  local_13a = (ushort)param_2 << 8 | (ushort)param_2 >> 8;
  local_13d = param_3;
  local_13b = param_4;
  iVar1 = BIO_write_ex(param_1,&local_13d,5,&local_148);
  if ((iVar1 == 0) || (local_148 != 5)) {
LAB_001000b0:
    uVar2 = 0;
  }
  else {
    if (param_2 != 0) {
      do {
        uVar4 = 0x100;
        if (param_2 < 0x101) {
          uVar4 = param_2;
        }
        iVar1 = BIO_write_ex(param_1,local_138,uVar4,&local_148);
        if ((iVar1 == 0) || (local_148 != uVar4)) goto LAB_001000b0;
        param_2 = param_2 - uVar4;
      } while (param_2 != 0);
    }
    uVar2 = 1;
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



bool test_record_overflow(uint param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  BIO *pBVar4;
  ulong uVar5;
  char *pcVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long in_FS_OFFSET;
  bool bVar10;
  undefined1 local_59;
  SSL_CTX *local_58;
  SSL_CTX *local_50;
  SSL *local_48;
  SSL *local_40;
  undefined1 local_38 [8];
  long local_30;
  
  uVar9 = cert;
  uVar8 = privkey;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = (SSL_CTX *)0x0;
  local_50 = (SSL_CTX *)0x0;
  local_48 = (SSL *)0x0;
  local_40 = (SSL *)0x0;
  uVar2 = TLS_client_method();
  uVar3 = TLS_server_method();
  create_ssl_ctx_pair(0,uVar3,uVar2,0x301,0,&local_50,&local_58,uVar9,uVar8);
  iVar1 = test_true("test/recordlentest.c",0x68,
                    "create_ssl_ctx_pair(NULL, TLS_server_method(), TLS_client_method(), TLS1_VERSION, 0, &sctx, &cctx, cert, privkey)"
                   );
  if (iVar1 == 0) goto LAB_00100290;
  if (param_1 - 4 < 2) {
    uVar8 = 0x4141;
    uVar9 = 0x4140;
    SSL_CTX_ctrl(local_50,0x7c,0x303,(void *)0x0);
LAB_001002ec:
    iVar1 = create_ssl_objects(local_50,local_58,&local_40,&local_48,0,0);
    iVar1 = test_true("test/recordlentest.c",0x7a,
                      "create_ssl_objects(sctx, cctx, &serverssl, &clientssl, NULL, NULL)",
                      iVar1 != 0);
    if (iVar1 != 0) {
      pBVar4 = SSL_get_rbio(local_40);
LAB_0010033b:
      iVar1 = create_ssl_connection(local_40,local_48,0);
      iVar1 = test_true("test/recordlentest.c",0x95,
                        "create_ssl_connection(serverssl, clientssl, SSL_ERROR_NONE)",iVar1 != 0);
      if (iVar1 != 0) {
        uVar7 = param_1 - 3 & 0xfffffffd;
        if (uVar7 != 0) {
          uVar8 = uVar9;
        }
        iVar1 = write_record(pBVar4,uVar8,0x17,0x303);
        iVar1 = test_true("test/recordlentest.c",0xa3,
                          "write_record(serverbio, len, SSL3_RT_APPLICATION_DATA, recversion)",
                          iVar1 != 0);
        if (iVar1 != 0) {
          iVar1 = SSL_read_ex(local_40,&local_59,1,local_38);
          iVar1 = test_false("test/recordlentest.c",0xa7,
                             "SSL_read_ex(serverssl, &buf, sizeof(buf), &written)",iVar1 != 0);
          if (iVar1 != 0) {
            uVar5 = ERR_peek_error();
            bVar10 = false;
            if (((uVar5 & 0x80000000) == 0) && ((char)(uVar5 >> 0x17) == '\x14')) {
              bVar10 = ((uint)uVar5 & 0x7fffff) == 0x96;
            }
            param_1 = (uint)(uVar7 == 0);
            uVar8 = 0xaa;
            pcVar6 = "fail_due_to_record_overflow(1)";
            goto LAB_001004b2;
          }
        }
      }
    }
LAB_00100290:
    bVar10 = false;
  }
  else {
    if (param_1 - 2 < 2) {
      uVar8 = 0x4101;
      uVar9 = 0x4100;
      goto LAB_001002ec;
    }
    iVar1 = create_ssl_objects(local_50,local_58,&local_40,&local_48,0,0);
    iVar1 = test_true("test/recordlentest.c",0x7a,
                      "create_ssl_objects(sctx, cctx, &serverssl, &clientssl, NULL, NULL)",
                      iVar1 != 0);
    if (iVar1 == 0) goto LAB_00100290;
    pBVar4 = SSL_get_rbio(local_40);
    if (1 < param_1) {
      uVar9 = 0;
      uVar8 = 1;
      goto LAB_0010033b;
    }
    iVar1 = write_record(pBVar4,(ulong)(param_1 == 1) + 0x4000,0x16,0x301);
    iVar1 = test_true("test/recordlentest.c",0x87,
                      "write_record(serverbio, len, SSL3_RT_HANDSHAKE, TLS1_VERSION)",iVar1 != 0);
    if (iVar1 == 0) goto LAB_00100290;
    iVar1 = SSL_accept(local_40);
    iVar1 = test_int_le("test/recordlentest.c",0x8b,"SSL_accept(serverssl)",&_LC4,iVar1,0);
    if (iVar1 == 0) goto LAB_00100290;
    uVar5 = ERR_peek_error();
    bVar10 = false;
    if (((uVar5 & 0x80000000) == 0) && ((char)(uVar5 >> 0x17) == '\x14')) {
      bVar10 = ((uint)uVar5 & 0x7fffff) == 0x92;
    }
    uVar8 = 0x8f;
    pcVar6 = "fail_due_to_record_overflow(0)";
LAB_001004b2:
    iVar1 = test_int_eq("test/recordlentest.c",uVar8,pcVar6,"overf_expected",bVar10,param_1);
    bVar10 = iVar1 != 0;
  }
  SSL_free(local_40);
  SSL_free(local_48);
  SSL_CTX_free(local_50);
  SSL_CTX_free(local_58);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar10;
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
    test_error("test/recordlentest.c",0xbd,"Error parsing test options\n");
  }
  else {
    cert = test_get_argument(0);
    iVar1 = test_ptr("test/recordlentest.c",0xc1,"cert = test_get_argument(0)",cert);
    if (iVar1 != 0) {
      privkey = test_get_argument(1);
      iVar1 = test_ptr("test/recordlentest.c",0xc2,"privkey = test_get_argument(1)",privkey);
      if (iVar1 != 0) {
        add_all_tests("test_record_overflow",test_record_overflow,6,1);
        return 1;
      }
    }
  }
  return 0;
}



void cleanup_tests(void)

{
  bio_s_mempacket_test_free();
  return;
}


