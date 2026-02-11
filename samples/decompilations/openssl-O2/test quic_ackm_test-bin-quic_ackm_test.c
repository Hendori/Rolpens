
undefined8 fake_now(void)

{
  return fake_time;
}



void on_lost(long param_1)

{
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  return;
}



void on_acked(long param_1)

{
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  return;
}



void on_discarded(long param_1)

{
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  return;
}



void on_loss_detection_deadline_callback(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  return;
}



void on_ack_deadline_callback(undefined8 param_1,int param_2,long param_3)

{
  *(undefined8 *)(param_3 + (long)param_2 * 8) = param_1;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void helper_destroy(long *param_1)

{
  ulong uVar1;
  ulong uVar2;
  void *ptr;
  
  if (*param_1 != 0) {
    ossl_ackm_free();
    *param_1 = 0;
  }
  if (param_1[3] != 0) {
    (*_CRYPTO_free)();
    param_1[3] = 0;
  }
  if ((int)param_1[9] != 0) {
    ossl_statm_destroy(param_1 + 4);
    *(undefined4 *)(param_1 + 9) = 0;
  }
  ptr = (void *)param_1[1];
  if (ptr != (void *)0x0) {
    if (param_1[2] != 0) {
      uVar1 = 0;
      do {
        uVar2 = uVar1 + 1;
        CRYPTO_free(*(void **)((long)ptr + uVar1 * 0x18));
        ptr = (void *)param_1[1];
        *(undefined8 *)((long)ptr + uVar1 * 0x18) = 0;
        uVar1 = uVar2;
      } while (uVar2 < (ulong)param_1[2]);
    }
    CRYPTO_free(ptr);
    param_1[1] = 0;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 helper_init(undefined1 (*param_1) [16],long param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  *param_1 = (undefined1  [16])0x0;
  param_1[1] = (undefined1  [16])0x0;
  param_1[2] = (undefined1  [16])0x0;
  param_1[3] = (undefined1  [16])0x0;
  param_1[4] = (undefined1  [16])0x0;
  fake_time = 123000000000;
  uVar1 = ossl_statm_init(param_1 + 2);
  iVar2 = test_int_eq("test/quic_ackm_test.c",0x5f,"ossl_statm_init(&h->statm)",&_LC1,uVar1,1);
  if (iVar2 != 0) {
    *(undefined4 *)(param_1[4] + 8) = 1;
    uVar3 = (*_ossl_cc_dummy_method)(0x100000,0);
    *(undefined8 *)(param_1[1] + 8) = uVar3;
    iVar2 = test_ptr("test/quic_ackm_test.c",0x66,"h->ccdata",uVar3);
    if (iVar2 != 0) {
      uVar3 = ossl_ackm_new(0x100000,0,param_1 + 2,&ossl_cc_dummy_method,
                            *(undefined8 *)(param_1[1] + 8));
      *(undefined8 *)*param_1 = uVar3;
      iVar2 = test_ptr("test/quic_ackm_test.c",0x6c,"h->ackm",uVar3);
      if (iVar2 != 0) {
        *(long *)param_1[1] = param_2;
        if (param_2 == 0) {
          *(undefined8 *)(*param_1 + 8) = 0;
        }
        else {
          uVar3 = CRYPTO_zalloc(param_2 * 0x18,"test/quic_ackm_test.c",0x72);
          *(undefined8 *)(*param_1 + 8) = uVar3;
          iVar2 = test_ptr("test/quic_ackm_test.c",0x73,"h->pkts",uVar3);
          if (iVar2 == 0) goto LAB_001001d9;
        }
        return 1;
      }
    }
  }
LAB_001001d9:
  helper_destroy(param_1);
  return 0;
}



/* WARNING: Type propagation algorithm not settling */

undefined8 test_rx_ack(uint param_1)

{
  char cVar1;
  ulong uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  ulong uVar6;
  int iVar7;
  int *piVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long in_FS_OFFSET;
  bool bVar13;
  void *local_170;
  void *local_168;
  long local_148;
  undefined8 local_a8 [10];
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  piVar8 = (int *)(&rx_test_scripts)[param_1 & 3];
  local_48 = 0xffffffffffffffff;
  local_58._0_4_ = 0xffffffff;
  local_58._4_4_ = 0xffffffff;
  uStack_50 = 0xffffffff;
  uStack_4c = 0xffffffff;
  uVar3 = helper_init(local_a8,0);
  iVar4 = test_int_eq("test/quic_ackm_test.c",0x399,"helper_init(&h, 0)",&_LC1,uVar3,1);
  if (iVar4 == 0) {
    local_170 = (void *)0x0;
    local_148 = 1;
    local_168 = (void *)0x0;
  }
  else {
    ossl_ackm_set_ack_deadline_callback(local_a8[0],on_ack_deadline_callback,&local_58);
    iVar4 = *piVar8;
    if (iVar4 == 0) {
      lVar10 = 0;
      lVar12 = 0;
    }
    else {
      lVar12 = 0;
      piVar5 = piVar8;
      do {
        if (iVar4 == 6) {
          lVar12 = lVar12 + *(long *)(piVar5 + 6);
        }
        iVar4 = piVar5[0x10];
        piVar5 = piVar5 + 0x10;
      } while (iVar4 != 0);
      lVar10 = lVar12 * 0x68;
    }
    local_170 = (void *)CRYPTO_zalloc(lVar10,"test/quic_ackm_test.c",0x3a9);
    iVar4 = test_ptr("test/quic_ackm_test.c",0x3aa,&_LC7,local_170);
    if (iVar4 == 0) {
      local_168 = (void *)0x0;
      local_148 = 1;
    }
    else {
      local_168 = (void *)CRYPTO_zalloc(lVar12 * 0x18,"test/quic_ackm_test.c",0x3ad);
      iVar4 = test_ptr("test/quic_ackm_test.c",0x3ae,&_LC8,local_168);
      if (iVar4 != 0) {
        iVar4 = *piVar8;
        if (iVar4 != 0) {
          local_148 = 0;
          iVar7 = (int)((ulong)(long)(int)param_1 >> 2);
LAB_001004fc:
          bVar13 = CARRY8(fake_time,*(ulong *)(piVar8 + 2));
          fake_time = fake_time + *(ulong *)(piVar8 + 2);
          if (bVar13) {
            fake_time = 0xffffffffffffffff;
          }
                    /* WARNING: Could not find normalized switch variable to match jumptable */
          switch(iVar4) {
          case 0:
          case 2:
            iVar4 = piVar8[8];
            uVar3 = ossl_ackm_is_ack_desired(local_a8[0],iVar7);
            iVar4 = test_int_eq("test/quic_ackm_test.c",0x3d6,
                                "ossl_ackm_is_ack_desired(h.ackm, space)","s->expect_desired",uVar3,
                                (int)(char)iVar4);
            if (iVar4 != 0) {
              cVar1 = *(char *)((long)piVar8 + 0x21);
              lVar10 = ossl_ackm_get_ack_deadline(local_a8[0],iVar7);
              bVar13 = false;
              if (lVar10 != -1) {
                lVar10 = ossl_ackm_get_ack_deadline(local_a8[0],iVar7);
                bVar13 = lVar10 != 0;
              }
              iVar4 = test_int_eq("test/quic_ackm_test.c",0x3da,
                                  "!ossl_time_is_infinite(ossl_ackm_get_ack_deadline(h.ackm, space)) && !ossl_time_is_zero(ossl_ackm_get_ack_deadline(h.ackm, space))"
                                  ,"s->expect_deadline",bVar13,(int)cVar1);
              if (iVar4 != 0) {
                uVar11 = 0;
                do {
                  if ((long)iVar7 != uVar11) {
                    lVar10 = ossl_ackm_get_ack_deadline(local_a8[0],uVar11 & 0xffffffff);
                    iVar4 = test_true("test/quic_ackm_test.c",0x3e1,
                                      "ossl_time_is_infinite(ossl_ackm_get_ack_deadline(h.ackm, i))"
                                      ,lVar10 == -1);
                    if (iVar4 == 0) goto switchD_0010052b_default;
                  }
                  uVar6 = ossl_ackm_get_ack_deadline(local_a8[0],uVar11 & 0xffffffff);
                  iVar4 = 1;
                  uVar2 = *(ulong *)((long)&local_58 + uVar11 * 2 * 4);
                  if (uVar6 <= uVar2) {
                    iVar4 = -(uint)(uVar6 < uVar2);
                  }
                  iVar4 = test_int_eq("test/quic_ackm_test.c",0x3e4,
                                      "ossl_time_compare(ossl_ackm_get_ack_deadline(h.ackm, i), ack_deadline[i])"
                                      ,&_LC18,iVar4,0);
                  if (iVar4 == 0) goto switchD_0010052b_default;
                  uVar11 = uVar11 + 1;
                } while (uVar11 != 3);
                goto LAB_001005db;
              }
            }
          default:
switchD_0010052b_default:
            local_148 = local_148 + 1;
            goto LAB_0010036f;
          case 1:
          case 3:
            if (iVar7 != piVar8[4]) goto LAB_001005db;
          }
        }
LAB_001005f0:
        uVar9 = 1;
        goto LAB_0010038c;
      }
      local_148 = 1;
    }
  }
LAB_0010036f:
  uVar9 = 0;
  test_error("test/quic_ackm_test.c",0x432,"error in ACKM RX script %d, op %zu",(param_1 & 3) + 1,
             local_148);
LAB_0010038c:
  helper_destroy(local_a8);
  CRYPTO_free(local_168);
  CRYPTO_free(local_170);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar9;
LAB_001005db:
  iVar4 = piVar8[0x10];
  piVar8 = piVar8 + 0x10;
  local_148 = local_148 + 1;
  if (iVar4 == 0) goto LAB_001005f0;
  goto LAB_001004fc;
}



undefined4 test_tx_ack_time_script(void)

{
  ulong *puVar1;
  long *plVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long in_FS_OFFSET;
  bool bVar12;
  long local_100;
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 local_98;
  long local_90;
  long local_40;
  
  lVar11 = 0;
  iVar4 = 1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_d8 = (undefined1  [16])0x0;
  puVar6 = tx_ack_time_script_1;
  local_a8 = 0;
  local_c8 = (undefined1  [16])0x0;
  local_b8 = (undefined1  [16])0x0;
  local_e8 = (undefined1  [16])0x0;
  do {
    if (iVar4 == 1) {
      lVar11 = lVar11 + *(long *)(puVar6 + 0x18);
    }
    iVar4 = *(int *)(puVar6 + 0x28);
    puVar6 = puVar6 + 0x28;
  } while (iVar4 != 0);
  uVar3 = helper_init(&local_98,lVar11);
  iVar4 = test_int_eq("test/quic_ackm_test.c",0x214,"helper_init(&h, num_pkts)",&_LC1,uVar3,1);
  uVar3 = 0;
  if (iVar4 != 0) {
    lVar8 = 0;
    if (lVar11 != 0) {
      do {
        uVar7 = CRYPTO_zalloc(0x68,"test/quic_ackm_test.c",0x218);
        *(undefined8 *)(local_90 + lVar8 * 0x18) = uVar7;
        iVar4 = test_ptr("test/quic_ackm_test.c",0x219,&_LC31);
        if (iVar4 == 0) goto LAB_00100bdd;
        lVar8 = lVar8 + 1;
      } while (lVar11 != lVar8);
    }
    local_100 = 0;
    iVar4 = 1;
    puVar6 = tx_ack_time_script_1;
    do {
      while (iVar4 == 2) {
        local_d8._8_8_ = 1;
        local_d8._0_8_ = local_e8;
        local_e8._8_8_ = *(long *)((long)puVar6 + 0x18) + *(long *)((long)puVar6 + 0x10);
        local_e8._0_8_ = *(long *)((long)puVar6 + 0x10);
        bVar12 = CARRY8(fake_time,*(ulong *)((long)puVar6 + 8));
        fake_time = fake_time + *(ulong *)((long)puVar6 + 8);
        if (bVar12) {
          fake_time = 0xffffffffffffffff;
        }
        uVar5 = ossl_ackm_on_rx_ack_frame(local_98,local_d8,0);
        iVar4 = test_int_eq("test/quic_ackm_test.c",0x244,
                            "ossl_ackm_on_rx_ack_frame(h.ackm, &ack, QUIC_PN_SPACE_INITIAL, fake_time)"
                            ,&_LC1,uVar5,1);
        if (iVar4 == 0) goto LAB_00100bdd;
LAB_00100e01:
        iVar4 = *(int *)((long)puVar6 + 0x28);
        puVar6 = (undefined1 *)((long)puVar6 + 0x28);
        if (iVar4 == 0) goto LAB_00100e11;
      }
      if (iVar4 == 3) {
        lVar8 = 0;
        if (lVar11 != 0) {
          do {
            lVar9 = lVar8 * 0x18;
            iVar4 = test_int_eq("test/quic_ackm_test.c",0x24d,"h.pkts[i].acked",
                                "(s->expect[i] & 1) != 0 ? 1 : 0",
                                *(undefined4 *)(local_90 + 0xc + lVar9),
                                *(byte *)(*(long *)((long)puVar6 + 0x20) + lVar8) & 1);
            if (((iVar4 == 0) ||
                (iVar4 = test_int_eq("test/quic_ackm_test.c",0x250,"h.pkts[i].lost",
                                     "(s->expect[i] & 2) != 0 ? 1 : 0",
                                     *(undefined4 *)(local_90 + 8 + lVar9),
                                     *(char *)(*(long *)((long)puVar6 + 0x20) + lVar8) >> 1 & 1),
                iVar4 == 0)) ||
               (iVar4 = test_int_eq("test/quic_ackm_test.c",0x253,"h.pkts[i].discarded",
                                    "(s->expect[i] & 4) != 0 ? 1 : 0",
                                    *(undefined4 *)(local_90 + 0x10 + lVar9),
                                    *(char *)(*(long *)((long)puVar6 + 0x20) + lVar8) >> 2 & 1),
               iVar4 == 0)) goto LAB_00100bdd;
            lVar8 = lVar8 + 1;
          } while (lVar11 != lVar8);
        }
        goto LAB_00100e01;
      }
      if ((iVar4 != 1) || (*(long *)((long)puVar6 + 0x18) == 0)) goto LAB_00100e01;
      uVar10 = 0;
      lVar8 = local_100 * 0x18;
      do {
        plVar2 = *(long **)(local_90 + lVar8);
        *plVar2 = *(long *)((long)puVar6 + 0x10) + uVar10;
        plVar2[1] = 0x7b;
        plVar2[3] = -1;
        plVar2[7] = (long)on_discarded;
        *(byte *)(plVar2 + 4) = *(byte *)(plVar2 + 4) & 0xf0 | 0xc;
        plVar2[8] = (long)(local_90 + lVar8);
        plVar2[5] = (long)on_lost;
        plVar2[6] = (long)on_acked;
        bVar12 = CARRY8(fake_time,*(ulong *)((long)puVar6 + 8));
        fake_time = fake_time + *(ulong *)((long)puVar6 + 8);
        if (bVar12) {
          fake_time = 0xffffffffffffffff;
        }
        plVar2[2] = fake_time;
        uVar5 = ossl_ackm_on_tx_packet(local_98);
        iVar4 = test_int_eq("test/quic_ackm_test.c",0x233,"ossl_ackm_on_tx_packet(h.ackm, tx)",&_LC1
                            ,uVar5,1);
        if (iVar4 == 0) goto LAB_00100bdd;
        puVar1 = (ulong *)((long)puVar6 + 0x18);
        uVar10 = uVar10 + 1;
        lVar8 = lVar8 + 0x18;
      } while (uVar10 < *puVar1);
      puVar6 = (undefined1 *)((long)puVar6 + 0x28);
      local_100 = local_100 + *puVar1;
      iVar4 = *(int *)puVar6;
    } while (iVar4 != 0);
LAB_00100e11:
    uVar3 = 1;
  }
LAB_00100bdd:
  helper_destroy(&local_98);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



bool test_probe_counts_constprop_0
               (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = test_uint_eq("test/quic_ackm_test.c",0x13e,"p->anti_deadlock_handshake",
                       "anti_deadlock_handshake",param_1[1],0);
  if ((((iVar1 != 0) &&
       (iVar1 = test_uint_eq("test/quic_ackm_test.c",0x140,"p->anti_deadlock_initial",
                             "anti_deadlock_initial",*param_1,0), iVar1 != 0)) &&
      (iVar1 = test_uint_eq("test/quic_ackm_test.c",0x142,"p->pto[QUIC_PN_SPACE_INITIAL]",
                            "pto_initial",param_1[2],param_2), iVar1 != 0)) &&
     (iVar1 = test_uint_eq("test/quic_ackm_test.c",0x144,"p->pto[QUIC_PN_SPACE_HANDSHAKE]",
                           "pto_handshake",param_1[3],param_3), iVar1 != 0)) {
    iVar1 = test_uint_eq("test/quic_ackm_test.c",0x146,"p->pto[QUIC_PN_SPACE_APP]","pto_app",
                         param_1[4],param_4);
    return iVar1 != 0;
  }
  return false;
}



undefined8 test_tx_ack_case(int param_1)

{
  long *plVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined1 (*pauVar6) [16];
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int iVar10;
  long in_FS_OFFSET;
  ulong local_f0;
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined8 local_b8;
  undefined8 local_a8;
  long local_a0;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_e8 = (undefined1  [16])0x0;
  local_d8 = (undefined1  [16])0x0;
  local_b8 = 0;
  local_f0 = 0;
  local_c8 = (undefined1  [16])0x0;
  iVar3 = (int)((ulong)(long)param_1 / 0xd);
  iVar4 = iVar3 / 3;
  iVar10 = iVar3 % 3;
  plVar1 = *(long **)(tx_ack_cases + (long)(param_1 + iVar3 * -0xd) * 8);
  if ((iVar4 == 1) && (iVar10 == 2)) {
    test_skip("test/quic_ackm_test.c",0x15c,"skipping test for app space");
    uVar7 = 1;
    goto LAB_00101194;
  }
  uVar2 = helper_init(&local_a8,plVar1[1]);
  iVar3 = test_int_eq("test/quic_ackm_test.c",0x160,"helper_init(&h, c->pn_table_len)",&_LC1,uVar2,1
                     );
  if (iVar3 == 0) {
LAB_00101188:
    uVar7 = 0;
  }
  else {
    uVar9 = 0;
    ossl_ackm_set_loss_detection_deadline_callback
              (local_a8,on_loss_detection_deadline_callback,&local_f0);
    if (plVar1[1] != 0) {
      do {
        puVar5 = (undefined8 *)CRYPTO_zalloc(0x68,"test/quic_ackm_test.c",0x16a);
        *(undefined8 **)(local_a0 + uVar9 * 0x18) = puVar5;
        iVar3 = test_ptr("test/quic_ackm_test.c",0x16b,&_LC31,puVar5);
        if (iVar3 == 0) goto LAB_00101188;
        uVar7 = *(undefined8 *)(*plVar1 + uVar9 * 8);
        puVar5[1] = 0x7b;
        puVar5[3] = 0xffffffffffffffff;
        *puVar5 = uVar7;
        puVar5[8] = uVar9 * 0x18 + local_a0;
        puVar5[5] = on_lost;
        puVar5[6] = on_acked;
        *(byte *)(puVar5 + 4) = *(byte *)(puVar5 + 4) & 0xf0 | (byte)iVar10 & 3 | 0xc;
        puVar5[7] = on_discarded;
        puVar5[2] = fake_time;
        uVar2 = ossl_ackm_on_tx_packet(local_a8,puVar5);
        iVar3 = test_int_eq("test/quic_ackm_test.c",0x17b,"ossl_ackm_on_tx_packet(h.ackm, tx)",&_LC1
                            ,uVar2,1);
        if (iVar3 == 0) goto LAB_00101188;
        uVar9 = uVar9 + 1;
      } while (uVar9 < (ulong)plVar1[1]);
    }
    if (iVar4 != 1) {
      if (iVar4 == 0) {
        local_e8 = *(undefined1 (*) [16])(plVar1 + 2);
        uVar2 = ossl_ackm_on_rx_ack_frame(local_a8,local_e8,iVar10,fake_time);
        iVar4 = test_int_eq("test/quic_ackm_test.c",0x191,
                            "ossl_ackm_on_rx_ack_frame(h.ackm, &ack, space, fake_time)",&_LC1,uVar2,
                            1);
        if (iVar4 != 0) {
          if (plVar1[1] != 0) {
            uVar9 = 0;
            do {
              lVar8 = uVar9 * 0x18;
              iVar4 = test_int_eq("test/quic_ackm_test.c",0x196,"h.pkts[i].acked",
                                  "(c->expect_ack[i] & 1) != 0 ? 1 : 0",
                                  *(undefined4 *)(local_a0 + 0xc + lVar8),
                                  *(byte *)(plVar1[4] + uVar9) & 1);
              if (((iVar4 == 0) ||
                  (iVar4 = test_int_eq("test/quic_ackm_test.c",0x199,"h.pkts[i].lost",
                                       "(c->expect_ack[i] & 2) != 0 ? 1 : 0",
                                       *(undefined4 *)(local_a0 + 8 + lVar8),
                                       *(char *)(plVar1[4] + uVar9) >> 1 & 1), iVar4 == 0)) ||
                 (iVar4 = test_int_eq("test/quic_ackm_test.c",0x19c,"h.pkts[i].discarded",
                                      "(c->expect_ack[i] & 4) != 0 ? 1 : 0",
                                      *(undefined4 *)(local_a0 + 0x10 + lVar8),
                                      *(char *)(plVar1[4] + uVar9) >> 2 & 1), iVar4 == 0))
              goto LAB_00101188;
              uVar9 = uVar9 + 1;
            } while (uVar9 < (ulong)plVar1[1]);
          }
          goto LAB_00101564;
        }
      }
      else if (iVar4 == 2) {
        uVar9 = ossl_ackm_get_loss_detection_deadline(local_a8);
        iVar4 = 1;
        if (uVar9 <= local_f0) {
          iVar4 = -(uint)(uVar9 < local_f0);
        }
        iVar4 = test_int_eq("test/quic_ackm_test.c",0x1a4,
                            "ossl_time_compare(deadline, loss_detection_deadline)",&_LC18,iVar4,0);
        if (iVar4 != 0) {
          iVar4 = 1;
          if (uVar9 <= fake_time) {
            iVar4 = -(uint)(uVar9 < fake_time);
          }
          iVar4 = test_int_gt("test/quic_ackm_test.c",0x1a8,"ossl_time_compare(deadline, fake_time)"
                              ,&_LC18,iVar4,0);
          if (iVar4 != 0) {
            puVar5 = (undefined8 *)ossl_ackm_get0_probe_request(local_a8);
            local_58 = *puVar5;
            uStack_50 = puVar5[1];
            local_48 = *(undefined4 *)(puVar5 + 2);
            uVar2 = test_probe_counts_constprop_0(&local_58,0,0,0);
            iVar4 = test_int_eq("test/quic_ackm_test.c",0x1ad,
                                "test_probe_counts(&probe, 0, 0, 0, 0, 0)",&_LC1,uVar2,1);
            if (iVar4 != 0) {
              if (iVar10 == 2) {
                uVar2 = ossl_ackm_on_handshake_confirmed(local_a8);
                iVar4 = test_int_eq("test/quic_ackm_test.c",0x1b5,
                                    "ossl_ackm_on_handshake_confirmed(h.ackm)",&_LC1,uVar2,1);
                if (iVar4 == 0) goto LAB_00101188;
              }
              fake_time = uVar9 + 1;
              if (0xfffffffffffffffe < uVar9) {
                fake_time = 0xffffffffffffffff;
              }
              uVar2 = ossl_ackm_on_timeout(local_a8);
              iVar4 = test_int_eq("test/quic_ackm_test.c",0x1bb,"ossl_ackm_on_timeout(h.ackm)",&_LC1
                                  ,uVar2,1);
              if (iVar4 != 0) {
                lVar8 = 0;
                do {
                  puVar5 = (undefined8 *)ossl_ackm_get0_probe_request(local_a8);
                  local_58 = *puVar5;
                  uStack_50 = puVar5[1];
                  local_48 = *(undefined4 *)(puVar5 + 2);
                  if (lVar8 != 0) {
                    pauVar6 = (undefined1 (*) [16])ossl_ackm_get0_probe_request(local_a8);
                    *(undefined4 *)pauVar6[1] = 0;
                    *pauVar6 = (undefined1  [16])0x0;
                    if (lVar8 == 2) {
                      uVar2 = test_probe_counts_constprop_0(&local_58,0,0,0);
                      iVar4 = test_int_eq("test/quic_ackm_test.c",0x1c5,
                                          "test_probe_counts(&probe, 0, 0, 0, 0, 0)",&_LC1,uVar2,1);
                      if (iVar4 != 0) goto LAB_00101564;
                      break;
                    }
                  }
                  uVar2 = test_probe_counts_constprop_0
                                    (&local_58,iVar10 == 0,iVar10 == 1,iVar10 == 2);
                  iVar4 = test_int_eq("test/quic_ackm_test.c",0x1c8,
                                      "test_probe_counts(&probe, 0, 0, space == QUIC_PN_SPACE_INITIAL, space == QUIC_PN_SPACE_HANDSHAKE, space == QUIC_PN_SPACE_APP)"
                                      ,&_LC1,uVar2,1);
                  if (iVar4 == 0) break;
                  lVar8 = lVar8 + 1;
                } while( true );
              }
            }
          }
        }
      }
      goto LAB_00101188;
    }
    uVar2 = ossl_ackm_on_pkt_space_discarded(local_a8,iVar10);
    iVar4 = test_int_eq("test/quic_ackm_test.c",0x181,
                        "ossl_ackm_on_pkt_space_discarded(h.ackm, space)",&_LC1,uVar2,1);
    if (iVar4 == 0) goto LAB_00101188;
    uVar9 = 0;
    if (plVar1[1] != 0) {
      do {
        lVar8 = uVar9 * 0x18;
        iVar4 = test_int_eq("test/quic_ackm_test.c",0x186,"h.pkts[i].acked",&_LC18,
                            *(undefined4 *)(local_a0 + 0xc + lVar8),0);
        if (((iVar4 == 0) ||
            (iVar4 = test_int_eq("test/quic_ackm_test.c",0x188,"h.pkts[i].lost",&_LC18,
                                 *(undefined4 *)(local_a0 + 8 + lVar8),0), iVar4 == 0)) ||
           (iVar4 = test_int_eq("test/quic_ackm_test.c",0x18a,"h.pkts[i].discarded",&_LC1,
                                *(undefined4 *)(local_a0 + 0x10 + lVar8),1), iVar4 == 0))
        goto LAB_00101188;
        uVar9 = uVar9 + 1;
      } while (uVar9 < (ulong)plVar1[1]);
    }
LAB_00101564:
    uVar7 = 1;
  }
  helper_destroy(&local_a8);
LAB_00101194:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7;
}



undefined8 setup_tests(void)

{
  add_all_tests("test_tx_ack_case",test_tx_ack_case,0x75,1);
  add_all_tests("test_tx_ack_time_script",test_tx_ack_time_script,1,1);
  add_all_tests("test_rx_ack",test_rx_ack,0xc,1);
  return 1;
}


