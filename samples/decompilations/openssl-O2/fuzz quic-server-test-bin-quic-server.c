
undefined8 fake_now_cb(void)

{
  return fake_now;
}



undefined8 select_alpn(void)

{
  return 0;
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
  byte bVar2;
  ushort uVar3;
  int iVar4;
  int ret_code;
  int iVar5;
  SSL_METHOD *meth;
  SSL_CTX *pSVar6;
  SSL *s;
  BIO_METHOD *pBVar7;
  BIO *a;
  BIO *bp;
  long lVar8;
  SSL *ssl;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long in_FS_OFFSET;
  bool bVar12;
  long local_4b8;
  long local_4b0;
  int local_49c;
  int local_47c;
  long local_478;
  long local_470;
  undefined1 local_468 [16];
  undefined1 local_458 [16];
  undefined1 local_448 [1032];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_468 = (undefined1  [16])0x0;
  local_458 = (undefined1  [16])0x0;
  if (param_2 == 0) goto LAB_001000bb;
  meth = (SSL_METHOD *)OSSL_QUIC_server_method();
  pSVar6 = SSL_CTX_new(meth);
  if (pSVar6 != (SSL_CTX *)0x0) {
    SSL_CTX_set_alpn_select_cb(pSVar6,select_alpn,0);
    s = (SSL *)SSL_new_listener(pSVar6,0);
    local_468._0_8_ = s;
    if (s != (SSL *)0x0) {
      fake_now = 1000000;
      iVar4 = ossl_quic_set_override_now_cb(s,0x100000,0);
      if (iVar4 != 0) {
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
            if ((int)lVar8 != 0) {
              iVar4 = 0;
              SSL_set_bio(s,a,bp);
              SSL_set_accept_state(s);
              local_49c = 0;
              local_4b0 = 0;
              local_4b8 = 1;
              ssl = s;
              do {
                uVar11 = 0;
                if (1 < param_2) {
                  if ((4 < param_2) && (((byte)*param_1 & *(byte *)((long)param_1 + 1)) == 0xff)) {
                    bVar2 = (byte)param_1[1];
                    if (bVar2 == 1) {
                      if (iVar4 == 1) {
                        iVar4 = 4;
                      }
                    }
                    else if (bVar2 == 2) {
                      if (iVar4 == 1) {
                        iVar4 = 5;
                      }
                    }
                    else if ((bVar2 == 0) && (iVar4 == 1)) {
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
LAB_0010025b:
                do {
                  switch(iVar4) {
                  case 0:
                    lVar8 = SSL_accept_connection(ssl,0);
                    ret_code = iVar4;
                    if (lVar8 == 0) goto LAB_001004ea;
LAB_0010042e:
                    ret_code = 1;
LAB_00100407:
                    iVar4 = 1;
                    break;
                  case 1:
                    ret_code = SSL_read(ssl,local_448,0x400);
                    if (ret_code < 1) goto LAB_001004ea;
                    iVar4 = 2;
                    local_49c = ret_code;
                    break;
                  case 2:
                    ret_code = SSL_write(ssl,local_448,local_49c);
                    if (0 < ret_code) goto LAB_00100407;
LAB_001004ea:
                    iVar5 = SSL_get_error(ssl,ret_code);
                    lVar8 = local_4b8;
                    if (1 < iVar5 - 2U) goto LAB_0010050b;
                    break;
                  case 3:
                    if (local_4b8 == 4) goto LAB_0010042e;
                    ret_code = 1;
                    iVar4 = 1;
                    lVar8 = SSL_get_accept_stream_queue_len(s);
                    if (lVar8 != 0) {
                      ssl = (SSL *)SSL_accept_stream(s,0);
                      *(SSL **)(local_468 + local_4b8 * 8) = ssl;
                      lVar8 = local_4b8 + 1;
                      if (ssl == (SSL *)0x0) goto LAB_0010050b;
                      local_4b0 = local_4b8;
                      local_4b8 = local_4b8 + 1;
                    }
                    break;
                  case 4:
                    if (local_4b8 == 4) goto LAB_0010042e;
                    ssl = (SSL *)SSL_new_stream(s,0);
                    if (ssl == (SSL *)0x0) {
                      ret_code = 1;
                      iVar4 = 1;
                      ssl = *(SSL **)(local_468 + local_4b0 * 8);
                    }
                    else {
                      ret_code = 1;
                      iVar4 = 1;
                      *(SSL **)(local_468 + local_4b8 * 8) = ssl;
                      local_4b0 = local_4b8;
                      local_4b8 = local_4b8 + 1;
                    }
                    break;
                  case 5:
                    if (local_4b8 == 1) goto LAB_0010042e;
                    lVar8 = local_4b0 + 1;
                    ret_code = 1;
                    iVar4 = 1;
                    local_4b0 = 0;
                    if (local_4b8 != lVar8) {
                      local_4b0 = lVar8;
                    }
                    ssl = *(SSL **)(local_468 + local_4b0 * 8);
                    break;
                  default:
                    if (ret_code < 1) goto LAB_001004ea;
                  }
                  iVar5 = SSL_get_event_timeout(s,&local_478,&local_47c);
                  lVar8 = local_4b8;
                  if (iVar5 == 0) goto LAB_0010050b;
                  if (local_47c != 0) {
                    fake_now = uVar11;
                    if (param_2 < 4) goto LAB_0010050b;
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
                    goto LAB_0010025b;
                  }
                } while ((param_2 < 4) || (fake_now < uVar11));
                uVar3 = *param_1;
                uVar9 = (ulong)uVar3;
                fake_now = uVar11;
                if (param_2 - 2 < uVar9) goto LAB_0010050b;
                if (uVar3 != 0) {
                  BIO_write(a,param_1 + 1,(uint)uVar3);
                }
                param_2 = (param_2 - 2) - uVar9;
                param_1 = (ushort *)((long)param_1 + uVar9 + 2);
              } while( true );
            }
            BIO_free(a);
            BIO_free(bp);
          }
        }
      }
    }
  }
  SSL_free((SSL *)local_468._0_8_);
  goto LAB_0010015d;
LAB_0010050b:
  if (lVar8 != 0) {
    lVar10 = 0;
    do {
      lVar1 = lVar10 * 8;
      lVar10 = lVar10 + 1;
      SSL_free(*(SSL **)(local_468 + lVar1));
    } while (lVar8 != lVar10);
  }
LAB_0010015d:
  ERR_clear_error();
  SSL_CTX_free(pSVar6);
LAB_001000bb:
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


