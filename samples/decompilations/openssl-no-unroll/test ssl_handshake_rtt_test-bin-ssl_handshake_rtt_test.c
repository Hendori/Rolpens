
bool test_handshake_rtt(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  SSL *pSVar5;
  long in_FS_OFFSET;
  bool bVar6;
  SSL_CTX *local_48;
  SSL_CTX *local_40;
  SSL *local_38;
  SSL *local_30;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (SSL_CTX *)0x0;
  local_40 = (SSL_CTX *)0x0;
  local_38 = (SSL *)0x0;
  local_30 = (SSL *)0x0;
  uVar3 = TLS_client_method();
  uVar4 = TLS_server_method();
  iVar1 = create_ssl_ctx_pair(0,uVar4,uVar3,0x301,(1 < (int)param_1) + 0x303,&local_40,&local_48,0,0
                             );
  iVar1 = test_true("test/ssl_handshake_rtt_test.c",0x40,
                    "create_ssl_ctx_pair(libctx, TLS_server_method(), TLS_client_method(), TLS1_VERSION, (tst <= 1) ? TLS1_2_VERSION : TLS1_3_VERSION, &sctx, &cctx, cert, privkey)"
                    ,iVar1 != 0);
  if (iVar1 == 0) goto LAB_001000b1;
  iVar1 = create_ssl_objects(local_40,local_48,&local_30,&local_38,0,0);
  iVar1 = test_true("test/ssl_handshake_rtt_test.c",0x46,
                    "create_ssl_objects(sctx, cctx, &serverssl, &clientssl, NULL, NULL)",iVar1 != 0)
  ;
  if (iVar1 == 0) goto LAB_001000b1;
  pSVar5 = local_38;
  if ((param_1 & 1) != 0) {
    pSVar5 = local_30;
  }
  if ((pSVar5 != (SSL *)0x0) && (pSVar5->version != 0)) {
    if ((pSVar5->version & 0x80U) == 0) {
      pSVar5 = (SSL *)0x0;
    }
    else {
      pSVar5 = (SSL *)ossl_quic_obj_get0_handshake_layer(pSVar5);
    }
  }
  iVar1 = test_ptr("test/ssl_handshake_rtt_test.c",0x4b,&_LC3,pSVar5);
  if ((iVar1 == 0) ||
     (iVar1 = test_ptr("test/ssl_handshake_rtt_test.c",0x4b,"st = &s->statem",&pSVar5->msg_callback)
     , iVar1 == 0)) {
    bVar6 = false;
    goto LAB_001000da;
  }
  switch(param_1) {
  case 0:
  case 2:
    *(undefined4 *)&pSVar5->field_0xac = 0xd;
    goto LAB_001001ec;
  case 1:
  case 3:
    *(undefined4 *)&pSVar5->field_0xac = 0x1d;
    ossl_statem_server_write_transition(pSVar5);
    OSSL_sleep(1);
    *(undefined4 *)&pSVar5->field_0xac = 0x24;
    ossl_statem_server_write_transition(pSVar5);
    break;
  case 4:
    *(undefined4 *)&pSVar5->field_0xac = 0x32;
LAB_001001ec:
    ossl_statem_client_write_transition(pSVar5);
    OSSL_sleep(1);
    *(undefined4 *)&pSVar5->field_0xac = 9;
    ossl_statem_client_write_transition(pSVar5);
  }
  uVar2 = SSL_get_handshake_rtt(pSVar5,&local_28);
  iVar1 = test_int_gt("test/ssl_handshake_rtt_test.c",0x75,
                      "SSL_get_handshake_rtt(SSL_CONNECTION_GET_SSL(s), &rtt)",&_LC5,uVar2,0);
  if (iVar1 == 0) {
LAB_001000b1:
    bVar6 = false;
  }
  else {
    iVar1 = test_uint64_t_ge("test/ssl_handshake_rtt_test.c",0x78,&_LC8,&_LC7,local_28,1000);
    bVar6 = iVar1 != 0;
  }
  SSL_free(local_30);
  SSL_free(local_38);
  SSL_CTX_free(local_40);
  SSL_CTX_free(local_48);
LAB_001000da:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar6;
}



undefined8 setup_tests(void)

{
  add_all_tests("test_handshake_rtt",0x100000,5,1);
  return 1;
}


