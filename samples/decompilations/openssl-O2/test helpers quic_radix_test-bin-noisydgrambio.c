
ulong bandwidth_limit(long param_1,ulong param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  
  uVar1 = *(ulong *)(param_1 + 0x4018);
  uVar12 = param_4;
  if (uVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x4008);
    uVar12 = 0x400;
    if (param_4 < 0x401) {
      uVar12 = param_4;
    }
    uVar5 = (uint)*(undefined8 *)(param_1 + 0x4000);
    if (lVar2 == 0) {
      uVar6 = (ulong)(uVar5 & 0x3ff);
      lVar9 = 0;
    }
    else {
      uVar11 = 10000000;
      if (9999999 < param_2) {
        uVar11 = param_2;
      }
      lVar9 = 0;
      do {
        uVar6 = (ulong)((int)lVar9 + uVar5 & 0x3ff);
        plVar10 = (long *)(uVar6 * 0x10 + param_1);
        if (uVar11 - 10000000 <= (ulong)plVar10[1]) {
          lVar9 = lVar2 - lVar9;
          goto LAB_0010007b;
        }
        lVar9 = lVar9 + 1;
        *(long *)(param_1 + 0x4010) = *(long *)(param_1 + 0x4010) - *plVar10;
      } while (lVar9 != lVar2);
      lVar9 = 0;
      uVar6 = (ulong)((int)lVar2 + uVar5 & 0x3ff);
    }
LAB_0010007b:
    *(ulong *)(param_1 + 0x4000) = uVar6;
    *(long *)(param_1 + 0x4008) = lVar9;
    if (param_4 != 0) {
      plVar10 = (long *)(param_3 + 8);
      uVar11 = 0;
      uVar6 = *(ulong *)(param_1 + 0x4010);
      do {
        lVar2 = *plVar10;
        uVar7 = lVar2 + uVar6;
        if (uVar1 < uVar7 / 10) {
          return uVar11;
        }
        uVar8 = *(ulong *)(param_1 + 0x4008);
        uVar3 = *(ulong *)(param_1 + 0x4000);
        if (uVar8 < 0x400) {
          uVar8 = uVar8 + 1;
          *(ulong *)(param_1 + 0x4008) = uVar8;
        }
        else {
          lVar9 = uVar3 * 0x10;
          uVar3 = (ulong)((int)uVar3 + 1U & 0x3ff);
          lVar9 = *(long *)(param_1 + lVar9);
          *(ulong *)(param_1 + 0x4000) = uVar3;
          uVar7 = (uVar6 - lVar9) + lVar2;
        }
        uVar11 = uVar11 + 1;
        plVar10 = plVar10 + 5;
        plVar4 = (long *)((ulong)((int)uVar3 + (int)uVar8 & 0x3ff) * 0x10 + param_1);
        *plVar4 = lVar2;
        plVar4[1] = param_2;
        *(ulong *)(param_1 + 0x4010) = uVar7;
        uVar6 = uVar7;
      } while (uVar11 < uVar12);
    }
  }
  return uVar12;
}



undefined8
noisy_dgram_sendmmsg
          (BIO *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
          undefined8 *param_6)

{
  int iVar1;
  BIO *pBVar2;
  long lVar3;
  undefined8 uVar4;
  
  pBVar2 = BIO_next(param_1);
  if (pBVar2 != (BIO *)0x0) {
    lVar3 = BIO_get_data(param_1);
    iVar1 = test_ptr("test/helpers/noisydgrambio.c",0xb5,&_LC0,lVar3);
    if (iVar1 != 0) {
      if (*(code **)(lVar3 + 0x8080) == (code *)0x0) {
        uVar4 = ossl_time_now();
      }
      else {
        uVar4 = (**(code **)(lVar3 + 0x8080))(*(undefined8 *)(lVar3 + 0x8088));
      }
      lVar3 = bandwidth_limit(lVar3 + 0x4060,uVar4,param_2,param_4);
      if (lVar3 != 0) {
        uVar4 = BIO_sendmmsg(pBVar2,param_2,param_3,lVar3,param_5,param_6);
        return uVar4;
      }
      *param_6 = 0;
      ERR_new();
      ERR_set_debug("test/helpers/noisydgrambio.c",0xbf,"noisy_dgram_sendmmsg");
      ERR_set_error(0x20,0x70,0);
    }
  }
  return 0;
}



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
  char cVar1;
  long lVar2;
  ulong uVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  BIO *pBVar9;
  long *plVar10;
  undefined8 uVar11;
  ulong uVar12;
  uint uVar13;
  long *plVar14;
  ushort uVar15;
  long *plVar16;
  ulong uVar17;
  bool bVar18;
  ulong local_60;
  
  pBVar9 = BIO_next(param_1);
  iVar5 = test_ptr("test/helpers/noisydgrambio.c",0x138,&_LC2,pBVar9);
  if (iVar5 != 0) {
    plVar10 = (long *)BIO_get_data(param_1);
    iVar5 = test_ptr("test/helpers/noisydgrambio.c",0x13c,&_LC0,plVar10);
    if (iVar5 != 0) {
      if (param_4 == 0) {
LAB_0010069f:
        iVar5 = BIO_recvmmsg(pBVar9,param_2,param_3,param_4,param_5,param_6);
        if (iVar5 != 0) {
          if ((code *)plVar10[0x1010] == (code *)0x0) {
            uVar11 = ossl_time_now();
          }
          else {
            uVar11 = (*(code *)plVar10[0x1010])(plVar10[0x1011]);
          }
          uVar17 = bandwidth_limit(plVar10 + 8,uVar11,param_2,*param_6);
          if (uVar17 == 0) {
            *param_6 = 0;
          }
          else {
            if (*(int *)((long)plVar10 + 0x3c) == 0) {
              *param_6 = uVar17;
              return 1;
            }
            local_60 = 1;
            plVar14 = param_2;
            do {
              if ((plVar10[6] == 0) || (plVar10[6] != *plVar10)) {
LAB_00100742:
                uVar6 = *(uint *)((long)plVar10 + 0x3c);
                cVar1 = *(char *)*plVar14;
                uVar12 = test_random();
                if ((int)((uVar12 & 0xffffffff) % (ulong)uVar6) == 0) {
                  uVar6 = test_random();
                  uVar7 = ~uVar6;
                  if ((uVar6 & 3) - 1 < 2) {
                    uVar13 = uVar7 & 1;
                    uVar8 = test_random();
                    if ((int)plVar10[7] == 0) {
                      uVar7 = uVar7 & 1;
                      if (plVar10[6] != 0) goto LAB_001007cb;
                    }
                    else {
                      *(int *)(plVar10 + 7) = (int)plVar10[7] + -1;
                      if (plVar10[6] != 0) goto LAB_0010081f;
                      uVar7 = 0;
                    }
                    uVar13 = uVar7;
                    iVar5 = bio_msg_copy(plVar10 + 1,plVar14);
                    if (iVar5 == 0) {
                      return 0;
                    }
                    plVar10[6] = *plVar10 + (ulong)(uVar8 & 3) + 1 + (ulong)((uVar6 & 3) == 2);
                  }
                  else {
                    uVar12 = 0;
                    uVar15 = 0;
                    if ((uVar6 & 3) == 3) {
                      uVar6 = test_random();
                      bVar4 = test_random();
                      uVar15 = (ushort)(uVar6 % 0xff + 1 << (bVar4 & 7));
                      uVar12 = test_random();
                      uVar12 = (uVar12 & 0xffffffff) %
                               (ulong)(uint)((((int)cVar1 >> 0x1f) * -5 + 5) * 5);
                    }
                    uVar13 = uVar7 & 1;
                    if ((int)plVar10[7] != 0) {
                      *(int *)(plVar10 + 7) = (int)plVar10[7] + -1;
                      goto LAB_0010081f;
                    }
                    uVar3 = plVar14[1];
                    if ((1 < uVar3) && (uVar15 != 0)) {
                      if (uVar3 < uVar12 + 2) {
                        uVar12 = uVar3 - 2;
                      }
                      *(ushort *)(*plVar14 + uVar12) =
                           *(ushort *)(*plVar14 + uVar12) ^ (uVar15 << 8 | uVar15 >> 8);
                    }
                  }
LAB_001007cb:
                  plVar16 = plVar14;
                  uVar12 = local_60;
                  if (uVar13 != 0) {
                    for (; uVar12 < uVar17; uVar12 = uVar12 + 1) {
                      iVar5 = bio_msg_copy(plVar16,plVar16 + 5);
                      if (iVar5 == 0) {
                        return 0;
                      }
                      plVar16 = plVar16 + 5;
                    }
                    uVar17 = uVar17 - 1;
                  }
                }
                else if ((int)plVar10[7] != 0) {
                  *(int *)(plVar10 + 7) = (int)plVar10[7] + -1;
                }
              }
              else {
                if (param_4 <= uVar17) {
                  plVar10[6] = 0;
                  goto LAB_00100742;
                }
                if (local_60 - 1 < uVar17) {
                  uVar12 = uVar17;
                  plVar16 = param_2 + uVar17 * 5;
                  do {
                    iVar5 = bio_msg_copy(plVar16,plVar16 + -5);
                    if (iVar5 == 0) {
                      return 0;
                    }
                    bVar18 = uVar12 != local_60;
                    uVar12 = uVar12 - 1;
                    plVar16 = plVar16 + -5;
                  } while (bVar18);
                }
                iVar5 = bio_msg_copy(plVar14,plVar10 + 1);
                if (iVar5 == 0) {
                  return 0;
                }
                plVar10[6] = 0;
                uVar17 = uVar17 + 1;
              }
LAB_0010081f:
              *plVar10 = *plVar10 + 1;
              plVar14 = plVar14 + 5;
              bVar18 = local_60 < uVar17;
              local_60 = local_60 + 1;
            } while (bVar18);
            *param_6 = uVar17;
            if (uVar17 != 0) {
              return 1;
            }
          }
          ERR_new();
          ERR_set_debug("test/helpers/noisydgrambio.c",0x1d3,"noisy_dgram_recvmmsg");
          ERR_set_error(0x20,0x70,0);
        }
      }
      else {
        plVar14 = param_2 + 1;
        lVar2 = param_2[1];
        iVar5 = test_size_t_le("test/helpers/noisydgrambio.c",0x149,"data_len","MSG_DATA_LEN_MAX",
                               lVar2,0x5c0);
        if (iVar5 != 0) {
          uVar17 = 0;
          do {
            uVar17 = uVar17 + 1;
            plVar14 = plVar14 + 5;
            if (param_4 == uVar17) goto LAB_0010069f;
            iVar5 = test_size_t_eq("test/helpers/noisydgrambio.c",0x14b,"msg[i].data_len","data_len"
                                   ,*plVar14,lVar2);
          } while (iVar5 != 0);
        }
      }
    }
  }
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



long bio_f_noisy_dgram_filter(void)

{
  int iVar1;
  long lVar2;
  
  lVar2 = method_noisy_dgram;
  if ((((method_noisy_dgram == 0) &&
       (method_noisy_dgram = BIO_meth_new(0x280,"Noisy datagram filter"), method_noisy_dgram != 0))
      && (iVar1 = BIO_meth_set_ctrl(method_noisy_dgram,noisy_dgram_ctrl), iVar1 != 0)) &&
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


