
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
  byte bVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  SSL_METHOD *meth;
  SSL_CTX *pSVar6;
  SSL *s;
  BIO_METHOD *pBVar7;
  BIO *a;
  BIO *bp;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long in_FS_OFFSET;
  bool bVar13;
  long local_4b8;
  SSL *local_4b0;
  long local_4a8;
  int local_48c;
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
  if (pSVar6 == (SSL_CTX *)0x0) {
LAB_00100153:
    SSL_free((SSL *)local_468._0_8_);
    goto LAB_0010015d;
  }
  SSL_CTX_set_alpn_select_cb(pSVar6,select_alpn,0);
  s = (SSL *)SSL_new_listener(pSVar6,0);
  local_468._0_8_ = s;
  if (s == (SSL *)0x0) goto LAB_00100153;
  fake_now = 1000000;
  iVar3 = ossl_quic_set_override_now_cb(s,0x100000,0);
  if (iVar3 == 0) goto LAB_00100153;
  pBVar7 = (BIO_METHOD *)BIO_s_dgram_mem();
  a = BIO_new(pBVar7);
  if (a == (BIO *)0x0) goto LAB_00100153;
  pBVar7 = (BIO_METHOD *)BIO_s_dgram_mem();
  bp = BIO_new(pBVar7);
  if (bp == (BIO *)0x0) {
    BIO_free(a);
    goto LAB_00100153;
  }
  lVar8 = BIO_ctrl(bp,0x57,2,(void *)0x0);
  if ((int)lVar8 == 0) {
    BIO_free(a);
    BIO_free(bp);
    goto LAB_00100153;
  }
  SSL_set_bio(s,a,bp);
  SSL_set_accept_state(s);
  local_4b8 = 1;
  iVar4 = 0;
  iVar3 = 0;
  local_48c = 0;
  local_4a8 = 0;
  local_4b0 = s;
  if (param_2 < 2) {
LAB_00100347:
    uVar12 = 0;
LAB_00100355:
    iVar4 = 0;
    lVar8 = local_4b8;
LAB_0010036f:
    local_4b8 = lVar8;
    switch(iVar3) {
    case 0:
      lVar8 = SSL_accept_connection(local_4b0,0);
      iVar4 = iVar3;
      if (lVar8 == 0) {
LAB_001007f8:
        iVar5 = SSL_get_error(local_4b0,iVar4);
        uVar10 = fake_now;
        if (1 < iVar5 - 2U) goto LAB_001005a8;
      }
      else {
LAB_00100780:
        iVar4 = 1;
        iVar3 = 1;
      }
      break;
    case 1:
      iVar4 = SSL_read(local_4b0,local_448,0x400);
      if (iVar4 < 1) goto LAB_001007f8;
      iVar3 = 2;
      local_48c = iVar4;
      break;
    case 2:
      iVar4 = SSL_write(local_4b0,local_448,local_48c);
      if (iVar4 < 1) goto LAB_001007f8;
      iVar3 = 1;
      break;
    case 3:
      if ((lVar8 == 4) || (lVar9 = SSL_get_accept_stream_queue_len(s), lVar9 == 0))
      goto LAB_00100780;
      local_4b0 = (SSL *)SSL_accept_stream(s,0);
      *(SSL **)(local_468 + lVar8 * 8) = local_4b0;
      local_4b8 = lVar8 + 1;
      uVar10 = fake_now;
      if (local_4b0 == (SSL *)0x0) goto LAB_001005a8;
      iVar3 = 1;
      iVar4 = 1;
      local_4a8 = lVar8;
      break;
    case 4:
      if (lVar8 == 4) goto LAB_00100780;
      local_4b0 = (SSL *)SSL_new_stream(s,0);
      if (local_4b0 == (SSL *)0x0) {
        iVar4 = 1;
        iVar3 = 1;
        local_4b0 = *(SSL **)(local_468 + local_4a8 * 8);
      }
      else {
        *(SSL **)(local_468 + lVar8 * 8) = local_4b0;
        iVar4 = 1;
        iVar3 = 1;
        local_4b8 = lVar8 + 1;
        local_4a8 = lVar8;
      }
      break;
    case 5:
      if (lVar8 == 1) goto LAB_00100780;
      iVar4 = 1;
      iVar3 = 1;
      lVar9 = 0;
      if (local_4a8 + 1 != lVar8) {
        lVar9 = local_4a8 + 1;
      }
      local_4b0 = *(SSL **)(local_468 + lVar9 * 8);
      local_4a8 = lVar9;
      break;
    default:
      if (iVar4 < 1) goto LAB_001007f8;
    }
    iVar5 = SSL_get_event_timeout(s,&local_478,&local_47c);
    uVar10 = fake_now;
    if ((iVar5 == 0) || (uVar10 = uVar12, local_47c != 0)) goto LAB_001005a8;
    uVar10 = 0;
    if (-1 < local_478) {
      uVar10 = local_470 * 1000 + local_478 * 1000000000;
    }
    bVar13 = CARRY8(uVar10,fake_now);
    fake_now = uVar10 + fake_now;
    lVar8 = local_4b8;
    if (bVar13) {
      fake_now = 0xffffffffffffffff;
    }
    goto LAB_0010036f;
  }
LAB_00100210:
  if (param_2 < 5) {
    uVar12 = (ulong)*param_1 * 1000000 + fake_now;
    if (CARRY8((ulong)*param_1 * 1000000,fake_now)) {
      uVar12 = 0xffffffffffffffff;
    }
    goto LAB_00100355;
  }
  if (((byte)*param_1 & *(byte *)((long)param_1 + 1)) == 0xff) {
    bVar1 = (byte)param_1[1];
    if (bVar1 == 1) {
      bVar13 = iVar3 == 1;
      iVar3 = iVar4;
      if (bVar13) {
        iVar3 = 4;
        iVar4 = 4;
      }
    }
    else if (bVar1 == 2) {
      bVar13 = iVar3 == 1;
      iVar3 = iVar4;
      if (bVar13) {
        iVar3 = 5;
        iVar4 = 5;
      }
    }
    else if ((bVar1 == 0) && (bVar13 = iVar3 == 1, iVar3 = iVar4, bVar13)) {
      iVar3 = 3;
      iVar4 = 3;
    }
    param_2 = param_2 - 3;
    param_1 = (ushort *)((long)param_1 + 3);
  }
  uVar12 = (ulong)*param_1 * 1000000 + fake_now;
  if (CARRY8((ulong)*param_1 * 1000000,fake_now)) {
    uVar12 = 0xffffffffffffffff;
  }
  if (param_2 - 2 < 4) goto LAB_00100355;
  switch(iVar3) {
  case 0:
    do {
      lVar8 = SSL_accept_connection(local_4b0);
      if (lVar8 != 0) goto LAB_001003bf;
      iVar5 = SSL_get_error(local_4b0,0);
      uVar10 = fake_now;
      if ((1 < iVar5 - 2U) ||
         (iVar5 = SSL_get_event_timeout(s,&local_478,&local_47c), uVar10 = fake_now, iVar5 == 0))
      goto LAB_001005a8;
      if (local_47c != 0) goto LAB_00100310;
    } while (((local_478 < 0) ||
             (uVar10 = local_470 * 1000 + local_478 * 1000000000, bVar13 = CARRY8(uVar10,fake_now),
             fake_now = uVar10 + fake_now, !bVar13)) && (fake_now < uVar12));
    iVar3 = 0;
    iVar4 = iVar3;
    goto LAB_00100310;
  case 1:
    goto switchD_0010026c_caseD_1;
  case 2:
    goto LAB_001004c0;
  case 3:
    if (local_4b8 != 4) {
      lVar8 = SSL_get_accept_stream_queue_len(s);
      if (lVar8 == 0) {
LAB_001003bf:
        iVar3 = SSL_get_event_timeout(s,&local_478,&local_47c);
        uVar10 = fake_now;
        if (iVar3 != 0) break;
      }
      else {
        local_4b0 = (SSL *)SSL_accept_stream(s,0);
        *(SSL **)(local_468 + local_4b8 * 8) = local_4b0;
        if (local_4b0 != (SSL *)0x0) goto LAB_001002a3;
LAB_00100599:
        local_4b8 = local_4b8 + 1;
        uVar10 = fake_now;
      }
      goto LAB_001005a8;
    }
LAB_001008a8:
    iVar3 = SSL_get_event_timeout(s,&local_478,&local_47c);
    if (iVar3 == 0) {
      local_4b8 = 4;
      goto LAB_001005b1;
    }
    break;
  case 4:
    if (local_4b8 == 4) goto LAB_001008a8;
    local_4b0 = (SSL *)SSL_new_stream(s,0);
    if (local_4b0 == (SSL *)0x0) goto LAB_001003b5;
    *(SSL **)(local_468 + local_4b8 * 8) = local_4b0;
LAB_001002a3:
    iVar3 = SSL_get_event_timeout(s,&local_478,&local_47c);
    if (iVar3 == 0) goto LAB_00100599;
    if (local_47c == 0) {
      if (local_478 < 0) {
        if (fake_now < uVar12) goto LAB_00100b0d;
        goto LAB_001002fb;
      }
      uVar10 = local_478 * 1000000000 + local_470 * 1000;
      bVar13 = CARRY8(uVar10,fake_now);
      fake_now = uVar10 + fake_now;
      if ((bVar13) || (uVar12 <= fake_now)) goto LAB_001002fb;
LAB_00100b0d:
      local_4a8 = local_4b8;
      local_4b8 = local_4b8 + 1;
      goto LAB_00100434;
    }
LAB_001002fb:
    local_4a8 = local_4b8;
    local_4b8 = local_4b8 + 1;
    goto LAB_00100308;
  case 5:
    if (local_4b8 != 1) {
      lVar8 = local_4a8 + 1;
      local_4a8 = 0;
      if (local_4b8 != lVar8) {
        local_4a8 = lVar8;
      }
LAB_001003b5:
      local_4b0 = *(SSL **)(local_468 + local_4a8 * 8);
      goto LAB_001003bf;
    }
    iVar3 = SSL_get_event_timeout(s,&local_478,&local_47c);
    if (iVar3 == 0) goto LAB_001005b1;
    break;
  default:
    do {
      while( true ) {
        iVar5 = SSL_get_error(local_4b0,0);
        uVar10 = fake_now;
        if ((1 < iVar5 - 2U) ||
           (iVar5 = SSL_get_event_timeout(s,&local_478,&local_47c), uVar10 = fake_now, iVar5 == 0))
        goto LAB_001005a8;
        if (local_47c != 0) goto LAB_00100310;
        if (local_478 < 0) break;
        uVar10 = local_470 * 1000 + local_478 * 1000000000;
        bVar13 = CARRY8(uVar10,fake_now);
        fake_now = uVar10 + fake_now;
        if ((bVar13) || (uVar12 <= fake_now)) goto LAB_00100310;
      }
    } while (fake_now < uVar12);
    goto LAB_00100310;
  }
  if (local_47c == 0) {
    if (-1 < local_478) {
      iVar3 = 1;
      uVar10 = local_478 * 1000000000 + local_470 * 1000;
      bVar13 = CARRY8(uVar10,fake_now);
      fake_now = uVar10 + fake_now;
      iVar4 = 1;
      if (bVar13) goto LAB_00100310;
    }
    iVar3 = 1;
    iVar4 = 1;
    if (fake_now < uVar12) {
switchD_0010026c_caseD_1:
LAB_00100434:
      do {
        while (iVar3 = SSL_read(local_4b0,local_448,0x400), iVar3 < 1) {
          iVar3 = SSL_get_error(local_4b0,iVar3);
          uVar10 = fake_now;
          if ((1 < iVar3 - 2U) ||
             (iVar3 = SSL_get_event_timeout(s,&local_478,&local_47c), uVar10 = fake_now, iVar3 == 0)
             ) goto LAB_001005a8;
          if (((local_47c != 0) ||
              ((-1 < local_478 &&
               (uVar10 = local_470 * 1000 + local_478 * 1000000000, bVar13 = CARRY8(uVar10,fake_now)
               , fake_now = uVar10 + fake_now, bVar13)))) || (uVar12 <= fake_now)) {
            iVar3 = 1;
            iVar4 = 1;
            goto LAB_00100310;
          }
        }
        iVar4 = SSL_get_event_timeout(s,&local_478,&local_47c);
        uVar10 = fake_now;
        if (iVar4 == 0) goto LAB_001005a8;
        local_48c = iVar3;
        if (local_47c != 0) {
LAB_0010096e:
          iVar3 = 2;
          iVar4 = 2;
          break;
        }
        if (-1 < local_478) {
          iVar3 = 2;
          uVar10 = local_478 * 1000000000 + local_470 * 1000;
          bVar13 = CARRY8(uVar10,fake_now);
          fake_now = uVar10 + fake_now;
          iVar4 = 2;
          if (bVar13) break;
        }
        iVar3 = 2;
        iVar4 = 2;
        if (uVar12 <= fake_now) break;
LAB_001004c0:
        while (iVar3 = SSL_write(local_4b0,local_448,local_48c), iVar3 < 1) {
          iVar3 = SSL_get_error(local_4b0,iVar3);
          uVar10 = fake_now;
          if ((1 < iVar3 - 2U) ||
             (iVar3 = SSL_get_event_timeout(s,&local_478,&local_47c), uVar10 = fake_now, iVar3 == 0)
             ) goto LAB_001005a8;
          if ((local_47c != 0) ||
             (((-1 < local_478 &&
               (uVar10 = local_470 * 1000 + local_478 * 1000000000, bVar13 = CARRY8(uVar10,fake_now)
               , fake_now = uVar10 + fake_now, bVar13)) || (uVar12 <= fake_now))))
          goto LAB_0010096e;
        }
        iVar3 = SSL_get_event_timeout(s,&local_478,&local_47c);
        uVar10 = fake_now;
        if (iVar3 == 0) goto LAB_001005a8;
        if (local_47c != 0) goto LAB_00100308;
        if (-1 < local_478) {
          iVar3 = 1;
          uVar10 = local_478 * 1000000000 + local_470 * 1000;
          bVar13 = CARRY8(uVar10,fake_now);
          fake_now = uVar10 + fake_now;
          iVar4 = 1;
          if (bVar13) break;
        }
        iVar3 = 1;
        iVar4 = 1;
      } while (fake_now < uVar12);
    }
  }
  else {
LAB_00100308:
    iVar3 = 1;
    iVar4 = 1;
  }
LAB_00100310:
  uVar2 = param_1[1];
  uVar11 = (ulong)uVar2;
  uVar10 = uVar12;
  if (param_2 - 4 < uVar11) goto LAB_001005a8;
  fake_now = uVar12;
  if (uVar2 != 0) {
    BIO_write(a,param_1 + 2,(uint)uVar2);
  }
  param_2 = (param_2 - 4) - uVar11;
  param_1 = (ushort *)((long)param_1 + uVar11 + 4);
  if (param_2 < 2) goto LAB_00100347;
  goto LAB_00100210;
LAB_001005a8:
  fake_now = uVar10;
  if (local_4b8 != 0) {
LAB_001005b1:
    lVar8 = 0;
    do {
      lVar9 = lVar8 * 8;
      lVar8 = lVar8 + 1;
      SSL_free(*(SSL **)(local_468 + lVar9));
    } while (lVar8 != local_4b8);
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


