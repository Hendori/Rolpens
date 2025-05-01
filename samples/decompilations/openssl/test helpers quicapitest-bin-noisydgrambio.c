
long noisy_dgram_ctrl(BIO *param_1,int param_2,long param_3,undefined8 *param_4)

{
  int iVar1;
  BIO *bp;
  long lVar2;
  
  bp = BIO_next(param_1);
  if ((bp != (BIO *)0x0) && (param_2 != 0xc)) {
    if (4 < param_2 - 0x3e9U) {
      lVar2 = BIO_ctrl(bp,param_2,param_3,param_4);
      return lVar2;
    }
    switch(param_2) {
    case 0x3ea:
      lVar2 = BIO_get_data(param_1);
      iVar1 = test_ptr("test/helpers/noisydgrambio.c",0x43,&_LC0,lVar2);
      if (iVar1 != 0) {
        *(int *)(lVar2 + 0x3c) = (int)param_3;
        return 1;
      }
      break;
    case 0x3eb:
      lVar2 = BIO_get_data(param_1);
      iVar1 = test_ptr("test/helpers/noisydgrambio.c",0x4d,&_LC0,lVar2);
      if (iVar1 != 0) {
        *(long *)(lVar2 + 0x4058) = param_3;
        return 1;
      }
      break;
    case 0x3ec:
      lVar2 = BIO_get_data(param_1);
      iVar1 = test_ptr("test/helpers/noisydgrambio.c",0x57,&_LC0,lVar2);
      if (iVar1 != 0) {
        *(long *)(lVar2 + 0x8078) = param_3;
        return 1;
      }
      break;
    case 0x3ed:
      lVar2 = BIO_get_data(param_1);
      iVar1 = test_ptr("test/helpers/noisydgrambio.c",0x62,&_LC0,lVar2);
      if (iVar1 != 0) {
        *(undefined8 *)(lVar2 + 0x8080) = *param_4;
        *(undefined8 *)(lVar2 + 0x8088) = param_4[1];
        return 1;
      }
      break;
    default:
      lVar2 = BIO_get_data(param_1);
      iVar1 = test_ptr("test/helpers/noisydgrambio.c",0x39,&_LC0,lVar2);
      if (iVar1 != 0) {
        *(int *)(lVar2 + 0x38) = (int)param_3;
        return 1;
      }
    }
  }
  return 0;
}



undefined8 noisy_dgram_new(undefined8 param_1)

{
  int iVar1;
  void *ptr;
  void *pvVar2;
  undefined8 uVar3;
  long lVar4;
  
  ptr = (void *)CRYPTO_zalloc(0x8090,"test/helpers/noisydgrambio.c",0x1e7);
  iVar1 = test_ptr("test/helpers/noisydgrambio.c",0x1e9,&_LC0,ptr);
  if (iVar1 != 0) {
    *(undefined4 *)((long)ptr + 0x3c) = 5;
    pvVar2 = CRYPTO_malloc(0x5c0,"test/helpers/noisydgrambio.c",0x1ed);
    *(void **)((long)ptr + 8) = pvVar2;
    uVar3 = BIO_ADDR_new();
    *(undefined8 *)((long)ptr + 0x18) = uVar3;
    lVar4 = BIO_ADDR_new();
    *(long *)((long)ptr + 0x20) = lVar4;
    if (((*(void **)((long)ptr + 8) != (void *)0x0) && (*(long *)((long)ptr + 0x18) != 0)) &&
       (lVar4 != 0)) {
      BIO_set_data(param_1,ptr);
      BIO_set_init(param_1,1);
      return 1;
    }
    CRYPTO_free(*(void **)((long)ptr + 8));
    BIO_ADDR_free(*(undefined8 *)((long)ptr + 0x18));
    BIO_ADDR_free(*(undefined8 *)((long)ptr + 0x20));
    CRYPTO_free(ptr);
  }
  return 0;
}



undefined8
noisy_dgram_recvmmsg
          (BIO *param_1,long *param_2,undefined8 param_3,ulong param_4,undefined8 param_5,
          ulong *param_6)

{
  ulong uVar1;
  char cVar2;
  long lVar3;
  ulong uVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  BIO *pBVar9;
  long *plVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  uint uVar16;
  long *plVar17;
  ulong uVar18;
  ushort uVar19;
  long *plVar20;
  ulong uVar21;
  ulong uVar22;
  bool bVar23;
  ulong local_58;
  
  pBVar9 = BIO_next(param_1);
  iVar6 = test_ptr("test/helpers/noisydgrambio.c",0x138,&_LC2,pBVar9);
  if (iVar6 == 0) {
    return 0;
  }
  plVar10 = (long *)BIO_get_data(param_1);
  iVar6 = test_ptr("test/helpers/noisydgrambio.c",0x13c,&_LC0,plVar10);
  if (iVar6 == 0) {
    return 0;
  }
  if (param_4 != 0) {
    lVar3 = param_2[1];
    plVar17 = param_2 + 1;
    iVar6 = test_size_t_le("test/helpers/noisydgrambio.c",0x149,"data_len","MSG_DATA_LEN_MAX",lVar3,
                           0x5c0);
    if (iVar6 == 0) {
      return 0;
    }
    uVar13 = 0;
    while( true ) {
      uVar13 = uVar13 + 1;
      plVar17 = plVar17 + 5;
      if (param_4 == uVar13) break;
      iVar6 = test_size_t_eq("test/helpers/noisydgrambio.c",0x14b,"msg[i].data_len","data_len",
                             *plVar17,lVar3);
      if (iVar6 == 0) {
        return 0;
      }
    }
  }
  iVar6 = BIO_recvmmsg(pBVar9,param_2,param_3,param_4,param_5,param_6);
  if (iVar6 == 0) {
    return 0;
  }
  if ((code *)plVar10[0x1010] == (code *)0x0) {
    uVar13 = ossl_time_now();
  }
  else {
    uVar13 = (*(code *)plVar10[0x1010])(plVar10[0x1011]);
  }
  uVar4 = plVar10[0x80b];
  uVar21 = *param_6;
  if (uVar4 == 0) {
LAB_001005c0:
    uVar22 = uVar21;
    if (uVar22 == 0) {
LAB_00100857:
      *param_6 = 0;
      goto LAB_00100863;
    }
  }
  else {
    lVar3 = plVar10[0x809];
    uVar22 = 0x400;
    if (uVar21 < 0x401) {
      uVar22 = uVar21;
    }
    uVar11 = (uint)plVar10[0x808];
    if (lVar3 == 0) {
      uVar12 = (ulong)(uVar11 & 0x3ff);
      uVar15 = 0;
    }
    else {
      uVar15 = 10000000;
      if (9999999 < uVar13) {
        uVar15 = uVar13;
      }
      lVar14 = 0;
      do {
        uVar12 = (ulong)((int)lVar14 + uVar11 & 0x3ff);
        if (uVar15 - 10000000 <= (ulong)plVar10[uVar12 * 2 + 9]) {
          uVar15 = lVar3 - lVar14;
          goto LAB_001004c9;
        }
        lVar14 = lVar14 + 1;
        plVar10[0x80a] = plVar10[0x80a] - plVar10[uVar12 * 2 + 8];
      } while (lVar3 != lVar14);
      uVar15 = 0;
      uVar12 = (ulong)((int)lVar3 + uVar11 & 0x3ff);
    }
LAB_001004c9:
    plVar10[0x808] = uVar12;
    plVar10[0x809] = uVar15;
    if (uVar21 == 0) goto LAB_00100857;
    uVar21 = 0;
    plVar17 = param_2 + 1;
    uVar18 = plVar10[0x80a];
    do {
      while( true ) {
        lVar3 = *plVar17;
        uVar1 = lVar3 + uVar18;
        if (uVar4 < uVar1 / 10) goto LAB_001005c0;
        if (0x3ff < uVar15) break;
        uVar15 = uVar15 + 1;
        uVar21 = uVar21 + 1;
        plVar17 = plVar17 + 5;
        plVar10[0x809] = uVar15;
        plVar10[(ulong)((int)uVar15 + (int)uVar12 & 0x3ff) * 2 + 8] = lVar3;
        (plVar10 + (ulong)((int)uVar15 + (int)uVar12 & 0x3ff) * 2 + 8)[1] = uVar13;
        plVar10[0x80a] = uVar1;
        uVar18 = uVar1;
        if (uVar22 <= uVar21) goto LAB_001005c9;
      }
      uVar21 = uVar21 + 1;
      plVar17 = plVar17 + 5;
      uVar11 = (int)uVar12 + 1U & 0x3ff;
      lVar14 = plVar10[uVar12 * 2 + 8];
      plVar10[0x808] = (ulong)uVar11;
      uVar18 = uVar18 + (lVar3 - lVar14);
      plVar10[(ulong)(uVar11 + (int)uVar15 & 0x3ff) * 2 + 8] = lVar3;
      (plVar10 + (ulong)(uVar11 + (int)uVar15 & 0x3ff) * 2 + 8)[1] = uVar13;
      plVar10[0x80a] = uVar18;
      uVar12 = (ulong)uVar11;
    } while (uVar21 < uVar22);
  }
LAB_001005c9:
  local_58 = 1;
  plVar17 = param_2;
  if (*(int *)((long)plVar10 + 0x3c) == 0) {
    *param_6 = uVar22;
    return 1;
  }
  do {
    if ((plVar10[6] == 0) || (plVar10[6] != *plVar10)) {
LAB_0010065a:
      uVar11 = *(uint *)((long)plVar10 + 0x3c);
      cVar2 = *(char *)*plVar17;
      uVar13 = test_random();
      if ((int)((uVar13 & 0xffffffff) % (ulong)uVar11) == 0) {
        uVar11 = test_random();
        uVar7 = ~uVar11;
        if ((uVar11 & 3) - 1 < 2) {
          uVar16 = uVar7 & 1;
          uVar8 = test_random();
          if ((int)plVar10[7] == 0) {
            uVar7 = uVar7 & 1;
            if (plVar10[6] != 0) goto LAB_0010075c;
          }
          else {
            *(int *)(plVar10 + 7) = (int)plVar10[7] + -1;
            if (plVar10[6] != 0) goto LAB_0010062d;
            uVar7 = 0;
          }
          uVar16 = uVar7;
          iVar6 = bio_msg_copy(plVar10 + 1,plVar17);
          if (iVar6 == 0) {
            return 0;
          }
          plVar10[6] = *plVar10 + (ulong)(uVar8 & 3) + 1 + (ulong)((uVar11 & 3) == 2);
        }
        else {
          uVar13 = 0;
          uVar19 = 0;
          if ((uVar11 & 3) == 3) {
            uVar11 = test_random();
            bVar5 = test_random();
            uVar19 = (ushort)(uVar11 % 0xff + 1 << (bVar5 & 7));
            uVar13 = test_random();
            uVar13 = (uVar13 & 0xffffffff) % (ulong)(uint)((((int)cVar2 >> 0x1f) * -5 + 5) * 5);
          }
          uVar16 = uVar7 & 1;
          if ((int)plVar10[7] != 0) {
            *(int *)(plVar10 + 7) = (int)plVar10[7] + -1;
            goto LAB_0010062d;
          }
          uVar4 = plVar17[1];
          if ((uVar19 != 0) && (1 < uVar4)) {
            if (uVar4 < uVar13 + 2) {
              uVar13 = uVar4 - 2;
            }
            *(ushort *)(*plVar17 + uVar13) =
                 *(ushort *)(*plVar17 + uVar13) ^ (uVar19 << 8 | uVar19 >> 8);
          }
        }
LAB_0010075c:
        plVar20 = plVar17;
        uVar13 = local_58;
        if (uVar16 != 0) {
          for (; uVar13 < uVar22; uVar13 = uVar13 + 1) {
            iVar6 = bio_msg_copy(plVar20,plVar20 + 5);
            if (iVar6 == 0) {
              return 0;
            }
            plVar20 = plVar20 + 5;
          }
          uVar22 = uVar22 - 1;
        }
      }
      else if ((int)plVar10[7] != 0) {
        *(int *)(plVar10 + 7) = (int)plVar10[7] + -1;
      }
    }
    else {
      if (param_4 <= uVar22) {
        plVar10[6] = 0;
        goto LAB_0010065a;
      }
      if (local_58 - 1 < uVar22) {
        uVar13 = uVar22;
        plVar20 = param_2 + uVar22 * 5;
        do {
          iVar6 = bio_msg_copy(plVar20,plVar20 + -5);
          if (iVar6 == 0) {
            return 0;
          }
          bVar23 = uVar13 != local_58;
          uVar13 = uVar13 - 1;
          plVar20 = plVar20 + -5;
        } while (bVar23);
      }
      iVar6 = bio_msg_copy(plVar17,plVar10 + 1);
      if (iVar6 == 0) {
        return 0;
      }
      plVar10[6] = 0;
      uVar22 = uVar22 + 1;
    }
LAB_0010062d:
    *plVar10 = *plVar10 + 1;
    plVar17 = plVar17 + 5;
    bVar23 = local_58 < uVar22;
    local_58 = local_58 + 1;
  } while (bVar23);
  *param_6 = uVar22;
  if (uVar22 != 0) {
    return 1;
  }
LAB_00100863:
  ERR_new();
  ERR_set_debug("test/helpers/noisydgrambio.c",0x1d3,"noisy_dgram_recvmmsg");
  ERR_set_error(0x20,0x70,0);
  return 0;
}



undefined8 noisy_dgram_free(undefined8 param_1)

{
  void *ptr;
  
  ptr = (void *)BIO_get_data();
  if (ptr != (void *)0x0) {
    CRYPTO_free(*(void **)((long)ptr + 8));
    BIO_ADDR_free(*(undefined8 *)((long)ptr + 0x18));
    BIO_ADDR_free(*(undefined8 *)((long)ptr + 0x20));
    CRYPTO_free(ptr);
  }
  BIO_set_data(param_1,0);
  BIO_set_init(param_1,0);
  return 1;
}



undefined8
noisy_dgram_sendmmsg
          (BIO *param_1,long param_2,undefined8 param_3,ulong param_4,undefined8 param_5,
          undefined8 *param_6)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  BIO *pBVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  ulong uVar17;
  
  pBVar5 = BIO_next(param_1);
  if (pBVar5 != (BIO *)0x0) {
    lVar6 = BIO_get_data(param_1);
    iVar4 = test_ptr("test/helpers/noisydgrambio.c",0xb5,&_LC0,lVar6);
    if (iVar4 != 0) {
      if (*(code **)(lVar6 + 0x8080) == (code *)0x0) {
        uVar7 = ossl_time_now();
      }
      else {
        uVar7 = (**(code **)(lVar6 + 0x8080))(*(undefined8 *)(lVar6 + 0x8088));
      }
      uVar2 = *(ulong *)(lVar6 + 0x8078);
      if (uVar2 == 0) {
LAB_00100b60:
        uVar11 = param_4;
        if (uVar11 != 0) {
LAB_00100bb3:
          uVar10 = BIO_sendmmsg(pBVar5,param_2,param_3,uVar11,param_5,param_6);
          return uVar10;
        }
      }
      else {
        lVar3 = *(long *)(lVar6 + 0x8068);
        uVar11 = 0x400;
        if (param_4 < 0x401) {
          uVar11 = param_4;
        }
        uVar12 = (uint)*(undefined8 *)(lVar6 + 0x8060);
        if (lVar3 == 0) {
          uVar13 = (ulong)(uVar12 & 0x3ff);
          uVar14 = 0;
        }
        else {
          uVar14 = 10000000;
          if (9999999 < uVar7) {
            uVar14 = uVar7;
          }
          lVar9 = 0;
          do {
            uVar13 = (ulong)((int)lVar9 + uVar12 & 0x3ff);
            lVar8 = uVar13 * 0x10 + lVar6;
            if (uVar14 - 10000000 <= *(ulong *)(lVar8 + 0x4068)) {
              uVar14 = lVar3 - lVar9;
              goto LAB_00100a9a;
            }
            lVar9 = lVar9 + 1;
            *(long *)(lVar6 + 0x8070) = *(long *)(lVar6 + 0x8070) - *(long *)(lVar8 + 0x4060);
          } while (lVar9 != lVar3);
          uVar14 = 0;
          uVar13 = (ulong)((int)lVar3 + uVar12 & 0x3ff);
        }
LAB_00100a9a:
        *(ulong *)(lVar6 + 0x8060) = uVar13;
        *(ulong *)(lVar6 + 0x8068) = uVar14;
        if (param_4 != 0) {
          param_4 = 0;
          plVar16 = (long *)(param_2 + 8);
          uVar17 = *(ulong *)(lVar6 + 0x8070);
          do {
            lVar3 = *plVar16;
            uVar15 = lVar3 + uVar17;
            if (uVar2 < uVar15 / 10) goto LAB_00100b60;
            if (uVar14 < 0x400) {
              uVar14 = uVar14 + 1;
              *(ulong *)(lVar6 + 0x8068) = uVar14;
            }
            else {
              lVar9 = uVar13 * 0x10;
              uVar13 = (ulong)((int)uVar13 + 1U & 0x3ff);
              lVar9 = *(long *)(lVar6 + 0x4060 + lVar9);
              *(ulong *)(lVar6 + 0x8060) = uVar13;
              uVar15 = (lVar3 - lVar9) + uVar17;
            }
            param_4 = param_4 + 1;
            plVar16 = plVar16 + 5;
            plVar1 = (long *)(lVar6 + 0x4060 + (ulong)((int)uVar14 + (int)uVar13 & 0x3ff) * 0x10);
            *plVar1 = lVar3;
            plVar1[1] = uVar7;
            *(ulong *)(lVar6 + 0x8070) = uVar15;
            uVar17 = uVar15;
          } while (param_4 < uVar11);
          goto LAB_00100bb3;
        }
      }
      *param_6 = 0;
      ERR_new();
      ERR_set_debug("test/helpers/noisydgrambio.c",0xbf,"noisy_dgram_sendmmsg");
      ERR_set_error(0x20,0x70,0);
    }
  }
  return 0;
}



long bio_f_noisy_dgram_filter(void)

{
  int iVar1;
  long lVar2;
  
  lVar2 = method_noisy_dgram;
  if ((((method_noisy_dgram == 0) &&
       (method_noisy_dgram = BIO_meth_new(0x280,"Noisy datagram filter"), method_noisy_dgram != 0))
      && (iVar1 = BIO_meth_set_ctrl(method_noisy_dgram,0x100000), iVar1 != 0)) &&
     (((iVar1 = BIO_meth_set_sendmmsg(method_noisy_dgram,noisy_dgram_sendmmsg), iVar1 != 0 &&
       (iVar1 = BIO_meth_set_recvmmsg(method_noisy_dgram,noisy_dgram_recvmmsg), iVar1 != 0)) &&
      ((iVar1 = BIO_meth_set_create(method_noisy_dgram,noisy_dgram_new), iVar1 != 0 &&
       (iVar1 = BIO_meth_set_destroy(method_noisy_dgram,noisy_dgram_free), iVar1 != 0)))))) {
    lVar2 = method_noisy_dgram;
  }
  return lVar2;
}



void bio_f_noisy_dgram_filter_free(void)

{
  BIO_meth_free(method_noisy_dgram);
  return;
}


