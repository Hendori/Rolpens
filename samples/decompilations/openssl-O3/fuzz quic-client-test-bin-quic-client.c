
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



/* WARNING: Type propagation algorithm not settling */

undefined8 FuzzerTestOneInput(ushort *param_1,ulong param_2)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  SSL_METHOD *meth;
  SSL_CTX *ctx;
  SSL *ssl;
  long lVar7;
  BIO_METHOD *pBVar8;
  BIO *a;
  BIO *bp;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long in_FS_OFFSET;
  bool bVar13;
  long local_4c8;
  ulong local_4b8;
  long local_4b0;
  SSL *local_4a8;
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
    lVar7 = 0;
  }
  else {
    fake_now = 1000000;
    iVar3 = ossl_quic_set_override_now_cb(ssl,0x100000,0);
    if ((iVar3 == 0) || (lVar7 = BIO_ADDR_new(), lVar7 == 0)) goto LAB_0010012b;
    local_480 = 0x100007f;
    iVar3 = BIO_ADDR_rawmake(lVar7,2,&local_480,4,0x5111);
    if (iVar3 != 0) {
      SSL_ctrl(ssl,0x37,0,"localhost");
      pBVar8 = (BIO_METHOD *)BIO_s_dgram_mem();
      a = BIO_new(pBVar8);
      if (a != (BIO *)0x0) {
        pBVar8 = (BIO_METHOD *)BIO_s_dgram_mem();
        bp = BIO_new(pBVar8);
        if (bp == (BIO *)0x0) {
          BIO_free(a);
        }
        else {
          lVar9 = BIO_ctrl(bp,0x57,2,(void *)0x0);
          if ((int)lVar9 == 0) {
            BIO_free(a);
            BIO_free(bp);
          }
          else {
            SSL_set_bio(ssl,a,bp);
            iVar3 = SSL_set_alpn_protos(ssl,&_LC1,9);
            if ((iVar3 == 0) && (iVar3 = SSL_set1_initial_peer_addr(ssl,lVar7), iVar3 == 1)) {
              SSL_set_connect_state(ssl);
              iVar3 = SSL_set_incoming_stream_policy(ssl,1,0);
              if (iVar3 != 0) {
                local_468._0_8_ = ssl;
                local_4b0 = 0;
                iVar4 = 0;
                iVar3 = 0;
                lVar9 = 1;
                local_4a8 = ssl;
LAB_00100292:
                if (param_2 < 2) {
                  local_4b8 = 0;
                }
                else if (param_2 < 5) {
                  local_4b8 = (ulong)*param_1 * 1000000 + fake_now;
                  if (CARRY8((ulong)*param_1 * 1000000,fake_now)) {
                    local_4b8 = 0xffffffffffffffff;
                  }
                }
                else {
                  if (((char)*param_1 == -1) && (*(char *)((long)param_1 + 1) == -1)) {
                    cVar1 = (char)param_1[1];
                    if (cVar1 == '\x01') {
                      if (iVar4 == 1) {
                        iVar4 = 4;
                      }
                    }
                    else if (cVar1 == '\x02') {
                      if (iVar4 == 1) {
                        iVar4 = 5;
                      }
                    }
                    else if ((cVar1 == '\0') && (iVar4 == 1)) {
                      iVar4 = 3;
                    }
                    param_2 = param_2 - 3;
                    param_1 = (ushort *)((long)param_1 + 3);
                  }
                  local_4b8 = (ulong)*param_1 * 1000000 + fake_now;
                  if (CARRY8((ulong)*param_1 * 1000000,fake_now)) {
                    local_4b8 = 0xffffffffffffffff;
                  }
                  if (3 < param_2 - 2) {
LAB_001002d9:
                    lVar12 = lVar9;
                    switch(iVar4) {
                    case 0:
                      goto LAB_001002f9;
                    case 1:
                      goto switchD_001002f2_caseD_1;
                    case 2:
                      goto LAB_001005a5;
                    case 3:
                      if (lVar9 != 4) {
                        lVar10 = SSL_get_accept_stream_queue_len(ssl);
                        if (lVar10 == 0) goto LAB_00100475;
                        local_4a8 = (SSL *)SSL_accept_stream(ssl,0);
                        *(SSL **)(local_468 + lVar9 * 8) = local_4a8;
                        if (local_4a8 != (SSL *)0x0) {
LAB_001003ed:
                          local_4b0 = lVar9 + 1;
                          iVar4 = SSL_get_event_timeout(ssl,&local_478,&local_47c);
                          if (iVar4 != 0) {
                            lVar12 = local_4b0;
                            if ((local_47c == 0) &&
                               (((local_478 < 0 ||
                                 (uVar11 = local_478 * 1000000000 + local_470 * 1000,
                                 bVar13 = CARRY8(uVar11,fake_now), fake_now = uVar11 + fake_now,
                                 !bVar13)) && (fake_now < local_4b8)))) goto LAB_001004f1;
                            iVar4 = 1;
                            local_4b0 = lVar9;
                            goto LAB_00100388;
                          }
                        }
                        local_4b0 = lVar9 + 1;
                        lVar9 = local_4b0;
                        goto LAB_00100846;
                      }
                      break;
                    case 4:
                      if (lVar9 != 4) {
                        local_4a8 = (SSL *)SSL_new_stream(ssl,0);
                        if (local_4a8 != (SSL *)0x0) {
                          *(SSL **)(local_468 + lVar9 * 8) = local_4a8;
                          goto LAB_001003ed;
                        }
                        goto LAB_00100667;
                      }
                      break;
                    case 5:
                      if (lVar9 == 1) {
                        iVar4 = SSL_get_event_timeout(ssl,&local_478,&local_47c);
                        if (iVar4 == 0) goto LAB_001009a7;
                        goto LAB_0010048f;
                      }
                      local_4b0 = local_4b0 + 1;
                      if (lVar9 == local_4b0) {
                        local_4b0 = 0;
                      }
LAB_00100667:
                      local_4a8 = *(SSL **)(local_468 + local_4b0 * 8);
                      goto LAB_00100475;
                    default:
                      iVar6 = SSL_get_error(local_4a8,0);
                      if ((1 < iVar6 - 2U) ||
                         (iVar6 = SSL_get_event_timeout(ssl,&local_478,&local_47c), iVar6 == 0))
                      goto LAB_00100846;
                      if (local_47c == 0) goto code_r0x00100939;
                      goto LAB_00100388;
                    }
                    iVar4 = SSL_get_event_timeout(ssl,&local_478,&local_47c);
                    if (iVar4 != 0) goto LAB_0010048f;
                    lVar9 = 4;
                    goto LAB_001009a7;
                  }
                }
                iVar6 = 0;
                lVar12 = lVar9;
                local_4c8 = local_4b0;
                do {
                  lVar9 = lVar12;
                  switch(iVar4) {
                  case 0:
                    iVar6 = SSL_do_handshake(local_4a8);
                    if (iVar6 != 1) goto switchD_001006ed_default;
LAB_001007a4:
                    iVar6 = 1;
                    iVar4 = 1;
                    break;
                  case 1:
                    iVar6 = SSL_read(local_4a8,local_448,0x400);
                    if (iVar6 < 1) goto LAB_0010081f;
                    iVar4 = 2;
                    iVar3 = iVar6;
                    break;
                  case 2:
                    iVar6 = SSL_write(local_4a8,local_448,iVar3);
                    if (iVar6 < 1) goto LAB_0010081f;
                    iVar4 = 1;
                    break;
                  case 3:
                    if ((lVar12 == 4) ||
                       (lVar10 = SSL_get_accept_stream_queue_len(ssl), lVar10 == 0))
                    goto LAB_001007a4;
                    local_4a8 = (SSL *)SSL_accept_stream(ssl,0);
                    *(SSL **)(local_468 + lVar12 * 8) = local_4a8;
                    lVar9 = lVar12 + 1;
                    if (local_4a8 != (SSL *)0x0) {
                      iVar6 = 1;
                      iVar4 = 1;
                      local_4c8 = lVar12;
                      break;
                    }
                    goto LAB_00100846;
                  case 4:
                    if (lVar12 == 4) goto LAB_001007a4;
                    local_4a8 = (SSL *)SSL_new_stream(ssl,0);
                    if (local_4a8 == (SSL *)0x0) {
                      iVar6 = 1;
                      iVar4 = 1;
                      local_4a8 = *(SSL **)(local_468 + local_4c8 * 8);
                    }
                    else {
                      iVar6 = 1;
                      iVar4 = 1;
                      *(SSL **)(local_468 + lVar12 * 8) = local_4a8;
                      lVar9 = lVar12 + 1;
                      local_4c8 = lVar12;
                    }
                    break;
                  case 5:
                    if (lVar12 == 1) goto LAB_001007a4;
                    iVar6 = 1;
                    iVar4 = 1;
                    lVar10 = 0;
                    if (local_4c8 + 1 != lVar12) {
                      lVar10 = local_4c8 + 1;
                    }
                    local_4a8 = *(SSL **)(local_468 + lVar10 * 8);
                    local_4c8 = lVar10;
                    break;
                  default:
switchD_001006ed_default:
                    if (iVar6 < 1) {
LAB_0010081f:
                      iVar5 = SSL_get_error(local_4a8,iVar6);
                      if (1 < iVar5 - 2U) goto LAB_00100846;
                    }
                  }
                  iVar5 = SSL_get_event_timeout(ssl,&local_478,&local_47c);
                  if (iVar5 == 0) goto LAB_00100846;
                  if (local_47c != 0) {
                    fake_now = local_4b8;
LAB_00100846:
                    if (lVar9 != 0) {
LAB_001009a7:
                      lVar12 = 0;
                      do {
                        lVar10 = lVar12 * 8;
                        lVar12 = lVar12 + 1;
                        SSL_free(*(SSL **)(local_468 + lVar10));
                      } while (lVar12 != lVar9);
                    }
                    goto LAB_00100138;
                  }
                  uVar11 = 0;
                  if (-1 < local_478) {
                    uVar11 = local_470 * 1000 + local_478 * 1000000000;
                  }
                  bVar13 = CARRY8(uVar11,fake_now);
                  fake_now = uVar11 + fake_now;
                  lVar12 = lVar9;
                  if (bVar13) {
                    fake_now = 0xffffffffffffffff;
                  }
                } while( true );
              }
            }
          }
        }
      }
    }
  }
  SSL_free((SSL *)local_468._0_8_);
LAB_00100138:
  ERR_clear_error();
  SSL_CTX_free(ctx);
  BIO_ADDR_free(lVar7);
LAB_001000b3:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
code_r0x00100939:
  uVar11 = 0;
  if (-1 < local_478) {
    uVar11 = local_470 * 1000 + local_478 * 1000000000;
  }
  bVar13 = CARRY8(uVar11,fake_now);
  fake_now = uVar11 + fake_now;
  if ((bVar13) || (local_4b8 <= fake_now)) goto LAB_00100388;
  goto LAB_001002d9;
  while (fake_now < local_4b8) {
LAB_001002f9:
    iVar6 = SSL_do_handshake(local_4a8);
    if (iVar6 == 1) goto LAB_00100475;
    if (iVar6 < 1) {
      iVar6 = SSL_get_error(local_4a8,iVar6);
      if ((1 < iVar6 - 2U) || (iVar6 = SSL_get_event_timeout(ssl,&local_478,&local_47c), iVar6 == 0)
         ) goto LAB_00100846;
      if (local_47c != 0) break;
      if (-1 < local_478) goto LAB_00100361;
    }
    else {
      iVar6 = SSL_get_event_timeout(ssl,&local_478,&local_47c);
      if (iVar6 == 0) goto LAB_00100846;
      if (local_47c != 0) break;
      if (local_478 < 0) {
        if (local_4b8 <= fake_now) break;
        goto LAB_001002f9;
      }
LAB_00100361:
      uVar11 = local_470 * 1000 + local_478 * 1000000000;
      bVar13 = CARRY8(uVar11,fake_now);
      fake_now = uVar11 + fake_now;
      if (bVar13) break;
    }
  }
  goto LAB_00100388;
LAB_00100475:
  iVar4 = SSL_get_event_timeout(ssl,&local_478,&local_47c);
  if (iVar4 == 0) goto LAB_00100846;
LAB_0010048f:
  if (local_47c == 0) {
    if (-1 < local_478) {
      iVar4 = 1;
      uVar11 = local_478 * 1000000000 + local_470 * 1000;
      bVar13 = CARRY8(uVar11,fake_now);
      fake_now = uVar11 + fake_now;
      if (bVar13) goto LAB_00100388;
    }
    iVar4 = 1;
    if (fake_now < local_4b8) {
switchD_001002f2_caseD_1:
      lVar9 = local_4b0;
LAB_001004f1:
      do {
        local_4b0 = lVar9;
        iVar4 = SSL_read(local_4a8,local_448,0x400);
        lVar9 = lVar12;
        if (iVar4 < 1) {
          iVar4 = SSL_get_error(local_4a8,iVar4);
          if ((1 < iVar4 - 2U) ||
             (iVar4 = SSL_get_event_timeout(ssl,&local_478,&local_47c), iVar4 == 0))
          goto LAB_00100846;
          if (((local_47c != 0) ||
              ((-1 < local_478 &&
               (uVar11 = local_470 * 1000 + local_478 * 1000000000, bVar13 = CARRY8(uVar11,fake_now)
               , fake_now = uVar11 + fake_now, bVar13)))) ||
             (lVar9 = local_4b0, local_4b8 <= fake_now)) {
            iVar4 = 1;
            break;
          }
          goto LAB_001004f1;
        }
        iVar3 = SSL_get_event_timeout(ssl,&local_478,&local_47c);
        if (iVar3 == 0) goto LAB_00100846;
        iVar3 = iVar4;
        if (local_47c != 0) {
LAB_00100c17:
          iVar4 = 2;
          break;
        }
        if (local_478 < 0) {
          if (local_4b8 <= fake_now) goto LAB_00100c17;
        }
        else {
          iVar4 = 2;
          uVar11 = local_478 * 1000000000 + local_470 * 1000;
          bVar13 = CARRY8(uVar11,fake_now);
          fake_now = uVar11 + fake_now;
          if ((bVar13) || (local_4b8 <= fake_now)) break;
        }
LAB_001005a5:
        while (iVar4 = SSL_write(local_4a8,local_448,iVar3), lVar9 = lVar12, iVar4 < 1) {
          iVar4 = SSL_get_error(local_4a8,iVar4);
          if ((1 < iVar4 - 2U) ||
             (iVar4 = SSL_get_event_timeout(ssl,&local_478,&local_47c), iVar4 == 0))
          goto LAB_00100846;
          if ((local_47c != 0) ||
             (((-1 < local_478 &&
               (uVar11 = local_470 * 1000 + local_478 * 1000000000, bVar13 = CARRY8(uVar11,fake_now)
               , fake_now = uVar11 + fake_now, bVar13)) || (local_4b8 <= fake_now)))) {
            iVar4 = 2;
            goto LAB_00100388;
          }
        }
        iVar4 = SSL_get_event_timeout(ssl,&local_478,&local_47c);
        if (iVar4 == 0) goto LAB_00100846;
        if (local_47c != 0) goto LAB_00100bf1;
        if (-1 < local_478) {
          iVar4 = 1;
          uVar11 = local_478 * 1000000000 + local_470 * 1000;
          bVar13 = CARRY8(uVar11,fake_now);
          fake_now = uVar11 + fake_now;
          if (bVar13) break;
        }
        iVar4 = 1;
        lVar9 = local_4b0;
        if (local_4b8 <= fake_now) break;
      } while( true );
    }
  }
  else {
LAB_00100bf1:
    iVar4 = 1;
  }
LAB_00100388:
  uVar2 = param_1[1];
  uVar11 = (ulong)uVar2;
  lVar9 = lVar12;
  fake_now = local_4b8;
  if (param_2 - 4 < uVar11) goto LAB_00100846;
  if (uVar2 != 0) {
    BIO_write(a,param_1 + 2,(uint)uVar2);
  }
  param_2 = (param_2 - 4) - uVar11;
  param_1 = (ushort *)((long)param_1 + uVar11 + 4);
  goto LAB_00100292;
}



void FuzzerCleanup(void)

{
  FuzzerClearRand();
  return;
}


