
undefined8 fake_now_cb(void)

{
  return fake_now;
}



undefined8 FuzzerInitialize(void)

{
  stack_st_SSL_COMP *psVar1;
  
  FuzzerSetRand();
  OPENSSL_init_crypto(0x102,0);
  OPENSSL_init_ssl(0x200000,0);
  ERR_clear_error();
  CRYPTO_free_ex_index(0,0xffffffff);
  SSL_get_ex_data_X509_STORE_CTX_idx();
  psVar1 = SSL_COMP_get_compression_methods();
  if (psVar1 != (stack_st_SSL_COMP *)0x0) {
    OPENSSL_sk_sort(psVar1);
  }
  return 1;
}



undefined8 FuzzerTestOneInput(ushort *param_1,ulong param_2)

{
  long lVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  int ret_code;
  int iVar5;
  SSL_METHOD *meth;
  SSL_CTX *ctx;
  SSL *ssl;
  long lVar6;
  BIO_METHOD *pBVar7;
  BIO *a;
  BIO *bp;
  long lVar8;
  SSL *ssl_00;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long in_FS_OFFSET;
  bool bVar12;
  long local_4b8;
  long local_4a8;
  int local_48c;
  undefined4 local_480;
  int local_47c;
  long local_478;
  long local_470;
  undefined1 local_468 [16];
  undefined1 local_458 [16];
  undefined1 local_448 [1032];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_480 = 0;
  local_468 = (undefined1  [16])0x0;
  local_458 = (undefined1  [16])0x0;
  if (param_2 == 0) goto LAB_001000b3;
  meth = (SSL_METHOD *)OSSL_QUIC_client_method();
  ctx = SSL_CTX_new(meth);
  if ((ctx == (SSL_CTX *)0x0) || (ssl = SSL_new(ctx), ssl == (SSL *)0x0)) {
LAB_0010012b:
    lVar6 = 0;
  }
  else {
    fake_now = 1000000;
    iVar4 = ossl_quic_set_override_now_cb(ssl,0x100000,0);
    if ((iVar4 == 0) || (lVar6 = BIO_ADDR_new(), lVar6 == 0)) goto LAB_0010012b;
    local_480 = 0x100007f;
    iVar4 = BIO_ADDR_rawmake(lVar6,2,&local_480,4,0x5111);
    if (iVar4 != 0) {
      SSL_ctrl(ssl,0x37,0,"localhost");
      pBVar7 = (BIO_METHOD *)BIO_s_dgram_mem();
      a = BIO_new(pBVar7);
      if (a != (BIO *)0x0) {
        pBVar7 = (BIO_METHOD *)BIO_s_dgram_mem();
        bp = BIO_new(pBVar7);
        if (bp == (BIO *)0x0) {
          BIO_free(a);
        }
        else {
          lVar8 = BIO_ctrl(bp,0x57,2,(void *)0x0);
          if ((int)lVar8 == 0) {
            BIO_free(a);
            BIO_free(bp);
          }
          else {
            SSL_set_bio(ssl,a,bp);
            iVar4 = SSL_set_alpn_protos(ssl,&_LC1,9);
            if ((iVar4 == 0) && (iVar4 = SSL_set1_initial_peer_addr(ssl,lVar6), iVar4 == 1)) {
              SSL_set_connect_state(ssl);
              iVar4 = SSL_set_incoming_stream_policy(ssl,1,0);
              if (iVar4 != 0) {
                local_468._0_8_ = ssl;
                local_48c = 0;
                local_4a8 = 0;
                local_4b8 = 1;
                iVar4 = 0;
                ssl_00 = ssl;
                do {
                  uVar11 = 0;
                  if (1 < param_2) {
                    if (((4 < param_2) && ((char)*param_1 == -1)) &&
                       (*(char *)((long)param_1 + 1) == -1)) {
                      cVar2 = (char)param_1[1];
                      if (cVar2 == '\x01') {
                        if (iVar4 == 1) {
                          iVar4 = 4;
                        }
                      }
                      else if (cVar2 == '\x02') {
                        if (iVar4 == 1) {
                          iVar4 = 5;
                        }
                      }
                      else if ((cVar2 == '\0') && (iVar4 == 1)) {
                        iVar4 = 3;
                      }
                      param_2 = param_2 - 3;
                      param_1 = (ushort *)((long)param_1 + 3);
                    }
                    uVar11 = (ulong)*param_1 * 1000000 + fake_now;
                    if (CARRY8((ulong)*param_1 * 1000000,fake_now)) {
                      uVar11 = 0xffffffffffffffff;
                    }
                    param_2 = param_2 - 2;
                    param_1 = param_1 + 1;
                  }
                  ret_code = 0;
LAB_001002cc:
                  do {
                    switch(iVar4) {
                    case 0:
                      ret_code = SSL_do_handshake(ssl_00);
                      if (ret_code != 1) goto switchD_001002e7_default;
                      goto LAB_00100457;
                    case 1:
                      ret_code = SSL_read(ssl_00,local_448,0x400);
                      if (ret_code < 1) goto LAB_0010047b;
                      iVar4 = 2;
                      local_48c = ret_code;
                      break;
                    case 2:
                      ret_code = SSL_write(ssl_00,local_448,local_48c);
                      if (ret_code < 1) goto LAB_0010047b;
LAB_00100457:
                      iVar4 = 1;
                      break;
                    case 3:
                      if (local_4b8 == 4) {
LAB_00100584:
                        ret_code = 1;
                        goto LAB_00100457;
                      }
                      ret_code = 1;
                      iVar4 = 1;
                      lVar8 = SSL_get_accept_stream_queue_len(ssl);
                      if (lVar8 != 0) {
                        ssl_00 = (SSL *)SSL_accept_stream(ssl,0);
                        *(SSL **)(local_468 + local_4b8 * 8) = ssl_00;
                        lVar8 = local_4b8 + 1;
                        if (ssl_00 == (SSL *)0x0) goto LAB_001004a7;
                        local_4a8 = local_4b8;
                        local_4b8 = local_4b8 + 1;
                      }
                      break;
                    case 4:
                      if (local_4b8 == 4) goto LAB_00100584;
                      ssl_00 = (SSL *)SSL_new_stream(ssl,0);
                      if (ssl_00 == (SSL *)0x0) {
                        ret_code = 1;
                        iVar4 = 1;
                        ssl_00 = *(SSL **)(local_468 + local_4a8 * 8);
                      }
                      else {
                        ret_code = 1;
                        iVar4 = 1;
                        *(SSL **)(local_468 + local_4b8 * 8) = ssl_00;
                        local_4a8 = local_4b8;
                        local_4b8 = local_4b8 + 1;
                      }
                      break;
                    case 5:
                      if (local_4b8 == 1) goto LAB_00100584;
                      lVar8 = local_4a8 + 1;
                      ret_code = 1;
                      iVar4 = 1;
                      local_4a8 = 0;
                      if (local_4b8 != lVar8) {
                        local_4a8 = lVar8;
                      }
                      ssl_00 = *(SSL **)(local_468 + local_4a8 * 8);
                      break;
                    default:
switchD_001002e7_default:
                      if (ret_code < 1) {
LAB_0010047b:
                        iVar5 = SSL_get_error(ssl_00,ret_code);
                        lVar8 = local_4b8;
                        if (1 < iVar5 - 2U) goto LAB_001004a7;
                      }
                    }
                    iVar5 = SSL_get_event_timeout(ssl,&local_478,&local_47c);
                    lVar8 = local_4b8;
                    if (iVar5 == 0) goto LAB_001004a7;
                    if (local_47c != 0) {
                      fake_now = uVar11;
                      if (param_2 < 4) goto LAB_001004a7;
                      break;
                    }
                    uVar9 = 0;
                    if (-1 < local_478) {
                      uVar9 = local_478 * 1000000000 + local_470 * 1000;
                    }
                    bVar12 = CARRY8(uVar9,fake_now);
                    fake_now = uVar9 + fake_now;
                    if (bVar12) {
                      if (3 < param_2) break;
                      fake_now = 0xffffffffffffffff;
                      goto LAB_001002cc;
                    }
                  } while ((param_2 < 4) || (fake_now < uVar11));
                  uVar3 = *param_1;
                  uVar9 = (ulong)uVar3;
                  fake_now = uVar11;
                  if (param_2 - 2 < uVar9) goto LAB_001004a7;
                  if (uVar3 != 0) {
                    BIO_write(a,param_1 + 1,(uint)uVar3);
                  }
                  param_2 = (param_2 - 2) - uVar9;
                  param_1 = (ushort *)((long)param_1 + uVar9 + 2);
                } while( true );
              }
            }
          }
        }
      }
    }
  }
  SSL_free((SSL *)local_468._0_8_);
  goto LAB_00100138;
LAB_001004a7:
  if (lVar8 != 0) {
    lVar10 = 0;
    do {
      lVar1 = lVar10 * 8;
      lVar10 = lVar10 + 1;
      SSL_free(*(SSL **)(local_468 + lVar1));
    } while (lVar8 != lVar10);
  }
LAB_00100138:
  ERR_clear_error();
  SSL_CTX_free(ctx);
  BIO_ADDR_free(lVar6);
LAB_001000b3:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}



void FuzzerCleanup(void)

{
  FuzzerClearRand();
  return;
}


