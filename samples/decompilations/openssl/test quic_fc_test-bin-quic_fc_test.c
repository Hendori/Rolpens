
undefined8 fake_now(void)

{
  return cur_time;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 run_rxfc_script(char *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  long in_FS_OFFSET;
  bool bVar9;
  undefined8 local_1c8 [12];
  undefined8 local_168 [36];
  undefined2 local_43;
  undefined1 local_41;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_41 = 0;
  cur_time = 0;
  puVar8 = local_1c8;
  for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  puVar8 = local_168;
  for (lVar7 = 0x24; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  local_43 = 0;
  cVar1 = *param_1;
  if (cVar1 == '\0') {
LAB_001000dd:
    uVar5 = 1;
LAB_00100192:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return uVar5;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  iVar4 = 0;
LAB_00100090:
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(cVar1) {
  case '\x01':
    iVar4 = ossl_quic_rxfc_init(local_1c8,0,*(undefined8 *)(param_1 + 0x10),
                                *(undefined8 *)(param_1 + 0x18),0x100000,0);
    iVar4 = test_true("test/quic_fc_test.c",0x1ec,
                      "ossl_quic_rxfc_init(&conn_rxfc, 0, op->arg0, op->arg1, fake_now, NULL)",
                      iVar4 != 0);
    if (iVar4 == 0) break;
    iVar4 = 1;
    goto LAB_001000d0;
  case '\x02':
    iVar2 = test_size_t_lt("test/quic_fc_test.c",0x1f5,"op->stream_idx","OSSL_NELEM(stream_rxfc)",
                           *(undefined8 *)(param_1 + 8),3);
    if ((iVar2 != 0) &&
       (iVar2 = test_true("test/quic_fc_test.c",0x1f6,"conn_init_done",iVar4), iVar2 != 0)) {
      iVar2 = ossl_quic_rxfc_init(local_168 + *(long *)(param_1 + 8) * 0xc,local_1c8,
                                  *(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
                                  0x100000,0);
      iVar2 = test_true("test/quic_fc_test.c",0x1f9,
                        "ossl_quic_rxfc_init(&stream_rxfc[op->stream_idx], &conn_rxfc, op->arg0, op->arg1, fake_now, NULL)"
                        ,iVar2 != 0);
      if (iVar2 != 0) {
        *(undefined1 *)((long)&local_43 + *(long *)(param_1 + 8)) = 1;
        goto LAB_001000d0;
      }
    }
    break;
  case '\x03':
    bVar9 = false;
    if ((iVar4 != 0) && (*(ulong *)(param_1 + 8) < 3)) {
      bVar9 = *(char *)((long)&local_43 + *(ulong *)(param_1 + 8)) != '\0';
    }
    iVar2 = test_true("test/quic_fc_test.c",0x203,
                      "conn_init_done && op->stream_idx < OSSL_NELEM(stream_rxfc) && stream_init_done[op->stream_idx]"
                      ,bVar9);
    if (iVar2 != 0) {
      iVar2 = ossl_quic_rxfc_on_rx_stream_frame
                        (local_168 + *(long *)(param_1 + 8) * 0xc,*(undefined8 *)(param_1 + 0x10),
                         *(undefined4 *)(param_1 + 0x18));
      iVar2 = test_true("test/quic_fc_test.c",0x207,
                        "ossl_quic_rxfc_on_rx_stream_frame(&stream_rxfc[op->stream_idx], op->arg0, (int)op->arg1)"
                        ,iVar2 != 0);
joined_r0x00100185:
      if (iVar2 != 0) goto LAB_001000d0;
    }
    break;
  case '\x04':
    bVar9 = false;
    if ((iVar4 != 0) && (*(ulong *)(param_1 + 8) < 3)) {
      bVar9 = *(char *)((long)&local_43 + *(ulong *)(param_1 + 8)) != '\0';
    }
    iVar2 = test_true("test/quic_fc_test.c",0x20f,
                      "conn_init_done && op->stream_idx < OSSL_NELEM(stream_rxfc) && stream_init_done[op->stream_idx]"
                      ,bVar9);
    if (iVar2 != 0) {
      cVar1 = param_1[0x20];
      uVar3 = ossl_quic_rxfc_on_retire
                        (local_168 + *(long *)(param_1 + 8) * 0xc,*(undefined8 *)(param_1 + 0x10),
                         *(undefined8 *)(param_1 + 0x18));
      iVar2 = test_int_eq("test/quic_fc_test.c",0x213,
                          "ossl_quic_rxfc_on_retire(&stream_rxfc[op->stream_idx], op->arg0, ossl_ticks2time(op->arg1))"
                          ,"!op->expect_fail",uVar3,cVar1 == '\0');
      goto joined_r0x00100185;
    }
    break;
  case '\x05':
    iVar2 = test_true("test/quic_fc_test.c",0x21b,"conn_init_done",iVar4);
    if (iVar2 != 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x10);
      uVar6 = ossl_quic_rxfc_get_cwm(local_1c8);
      iVar2 = test_uint64_t_eq("test/quic_fc_test.c",0x21d,"ossl_quic_rxfc_get_cwm(&conn_rxfc)",
                               "op->arg0",uVar6,uVar5);
      goto joined_r0x00100185;
    }
    break;
  case '\x06':
    bVar9 = false;
    if (*(ulong *)(param_1 + 8) < 3) {
      bVar9 = *(char *)((long)&local_43 + *(ulong *)(param_1 + 8)) != '\0';
    }
    iVar2 = test_true("test/quic_fc_test.c",0x222,
                      "op->stream_idx < OSSL_NELEM(stream_rxfc) && stream_init_done[op->stream_idx]"
                      ,bVar9);
    if (iVar2 != 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x10);
      uVar6 = ossl_quic_rxfc_get_cwm(local_168 + *(long *)(param_1 + 8) * 0xc);
      iVar2 = test_uint64_t_eq("test/quic_fc_test.c",0x225,
                               "ossl_quic_rxfc_get_cwm(&stream_rxfc[op->stream_idx])","op->arg0",
                               uVar6,uVar5);
      goto joined_r0x00100185;
    }
    break;
  case '\a':
    iVar2 = test_true("test/quic_fc_test.c",0x22a,"conn_init_done",iVar4);
    if (iVar2 != 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x10);
      uVar6 = ossl_quic_rxfc_get_swm(local_1c8);
      iVar2 = test_uint64_t_eq("test/quic_fc_test.c",0x22c,"ossl_quic_rxfc_get_swm(&conn_rxfc)",
                               "op->arg0",uVar6,uVar5);
      goto joined_r0x00100185;
    }
    break;
  case '\b':
    bVar9 = false;
    if (*(ulong *)(param_1 + 8) < 3) {
      bVar9 = *(char *)((long)&local_43 + *(ulong *)(param_1 + 8)) != '\0';
    }
    iVar2 = test_true("test/quic_fc_test.c",0x231,
                      "op->stream_idx < OSSL_NELEM(stream_rxfc) && stream_init_done[op->stream_idx]"
                      ,bVar9);
    if (iVar2 != 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x10);
      uVar6 = ossl_quic_rxfc_get_swm(local_168 + *(long *)(param_1 + 8) * 0xc);
      iVar2 = test_uint64_t_eq("test/quic_fc_test.c",0x234,
                               "ossl_quic_rxfc_get_swm(&stream_rxfc[op->stream_idx])","op->arg0",
                               uVar6,uVar5);
      goto joined_r0x00100185;
    }
    break;
  case '\t':
    iVar2 = test_true("test/quic_fc_test.c",0x239,"conn_init_done",iVar4);
    if (iVar2 != 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x10);
      uVar6 = ossl_quic_rxfc_get_rwm(local_1c8);
      iVar2 = test_uint64_t_eq("test/quic_fc_test.c",0x23b,"ossl_quic_rxfc_get_rwm(&conn_rxfc)",
                               "op->arg0",uVar6,uVar5);
      goto joined_r0x00100185;
    }
    break;
  case '\n':
    bVar9 = false;
    if (*(ulong *)(param_1 + 8) < 3) {
      bVar9 = *(char *)((long)&local_43 + *(ulong *)(param_1 + 8)) != '\0';
    }
    iVar2 = test_true("test/quic_fc_test.c",0x240,
                      "op->stream_idx < OSSL_NELEM(stream_rxfc) && stream_init_done[op->stream_idx]"
                      ,bVar9);
    if (iVar2 != 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x10);
      uVar6 = ossl_quic_rxfc_get_rwm(local_168 + *(long *)(param_1 + 8) * 0xc);
      iVar2 = test_uint64_t_eq("test/quic_fc_test.c",0x243,
                               "ossl_quic_rxfc_get_rwm(&stream_rxfc[op->stream_idx])","op->arg0",
                               uVar6,uVar5);
      goto joined_r0x00100185;
    }
    break;
  case '\v':
    iVar2 = test_true("test/quic_fc_test.c",0x248,"conn_init_done",iVar4);
    if (iVar2 != 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x10);
      uVar3 = ossl_quic_rxfc_has_cwm_changed(local_1c8,*(undefined4 *)(param_1 + 0x18));
      iVar2 = test_int_eq("test/quic_fc_test.c",0x24a,
                          "ossl_quic_rxfc_has_cwm_changed(&conn_rxfc, (int)op->arg1)",
                          "(int)op->arg0",uVar3,uVar5);
      goto joined_r0x00100185;
    }
    break;
  case '\f':
    bVar9 = false;
    if (*(ulong *)(param_1 + 8) < 3) {
      bVar9 = *(char *)((long)&local_43 + *(ulong *)(param_1 + 8)) != '\0';
    }
    iVar2 = test_true("test/quic_fc_test.c",0x250,
                      "op->stream_idx < OSSL_NELEM(stream_rxfc) && stream_init_done[op->stream_idx]"
                      ,bVar9);
    if (iVar2 != 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x10);
      uVar3 = ossl_quic_rxfc_has_cwm_changed
                        (local_168 + *(long *)(param_1 + 8) * 0xc,*(undefined4 *)(param_1 + 0x18));
      iVar2 = test_int_eq("test/quic_fc_test.c",0x253,
                          "ossl_quic_rxfc_has_cwm_changed(&stream_rxfc[op->stream_idx], (int)op->arg1)"
                          ,"(int)op->arg0",uVar3,uVar5);
      goto joined_r0x00100185;
    }
    break;
  case '\r':
    iVar2 = test_true("test/quic_fc_test.c",0x259,"conn_init_done",iVar4);
    if (iVar2 != 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x10);
      uVar3 = ossl_quic_rxfc_get_error(local_1c8,*(undefined4 *)(param_1 + 0x18));
      iVar2 = test_int_eq("test/quic_fc_test.c",0x25b,
                          "ossl_quic_rxfc_get_error(&conn_rxfc, (int)op->arg1)","(int)op->arg0",
                          uVar3,uVar5);
      goto joined_r0x00100185;
    }
    break;
  case '\x0e':
    bVar9 = false;
    if (*(ulong *)(param_1 + 8) < 3) {
      bVar9 = *(char *)((long)&local_43 + *(ulong *)(param_1 + 8)) != '\0';
    }
    iVar2 = test_true("test/quic_fc_test.c",0x261,
                      "op->stream_idx < OSSL_NELEM(stream_rxfc) && stream_init_done[op->stream_idx]"
                      ,bVar9);
    if (iVar2 != 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x10);
      uVar3 = ossl_quic_rxfc_get_error
                        (local_168 + *(long *)(param_1 + 8) * 0xc,*(undefined4 *)(param_1 + 0x18));
      iVar2 = test_int_eq("test/quic_fc_test.c",0x264,
                          "ossl_quic_rxfc_get_error(&stream_rxfc[op->stream_idx], (int)op->arg1)",
                          "(int)op->arg0",uVar3,uVar5);
      goto joined_r0x00100185;
    }
    break;
  case '\x0f':
    bVar9 = CARRY8(cur_time,*(ulong *)(param_1 + 0x10));
    cur_time = cur_time + *(ulong *)(param_1 + 0x10);
    if (bVar9) {
      cur_time = 0xffffffffffffffff;
    }
    goto LAB_001000d0;
  case '\x10':
    __fprintf_chk(_stderr,2,"# %s\n",*(undefined8 *)(param_1 + 0x28));
LAB_001000d0:
    cVar1 = param_1[0x30];
    param_1 = param_1 + 0x30;
    if (cVar1 == '\0') goto LAB_001000dd;
    goto LAB_00100090;
  }
  uVar5 = 0;
  goto LAB_00100192;
}



void test_rxfc(int param_1)

{
  run_rxfc_script(*(undefined8 *)(rx_scripts + (long)param_1 * 8));
  return;
}



bool test_txfc(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined1 *puVar4;
  long in_FS_OFFSET;
  bool bVar5;
  undefined1 *local_90;
  undefined1 local_88 [32];
  undefined1 local_68 [40];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = ossl_quic_txfc_init(local_88,0);
  iVar1 = test_true("test/quic_fc_test.c",0x13,"ossl_quic_txfc_init(&conn_txfc, 0)",iVar1 != 0);
  if (iVar1 != 0) {
    if (param_1 == 0) {
      iVar1 = ossl_quic_txfc_bump_cwm(local_88,2000);
      iVar1 = test_true("test/quic_fc_test.c",0x1c,"ossl_quic_txfc_bump_cwm(txfc, 2000)",iVar1 != 0)
      ;
      if (iVar1 != 0) {
        local_90 = (undefined1 *)0x0;
        puVar4 = local_88;
LAB_001009f0:
        uVar2 = ossl_quic_txfc_get_swm(puVar4);
        iVar1 = test_uint64_t_eq("test/quic_fc_test.c",0x22,"ossl_quic_txfc_get_swm(txfc)",&_LC27,
                                 uVar2,0);
        if (iVar1 != 0) {
          uVar2 = ossl_quic_txfc_get_cwm(puVar4);
          iVar1 = test_uint64_t_eq("test/quic_fc_test.c",0x25,"ossl_quic_txfc_get_cwm(txfc)",&_LC29,
                                   uVar2,2000);
          if (iVar1 != 0) {
            uVar2 = ossl_quic_txfc_get_credit_local(puVar4,0);
            iVar1 = test_uint64_t_eq("test/quic_fc_test.c",0x28,
                                     "ossl_quic_txfc_get_credit_local(txfc, 0)",&_LC29,uVar2,2000);
            if (iVar1 != 0) {
              uVar2 = ossl_quic_txfc_get_credit_local(puVar4,100);
              iVar1 = test_uint64_t_eq("test/quic_fc_test.c",0x2b,
                                       "ossl_quic_txfc_get_credit_local(txfc, 100)",&_LC32,uVar2,
                                       0x76c);
              if (iVar1 != 0) {
                if (param_1 == 0) {
LAB_00100b9c:
                  iVar1 = ossl_quic_txfc_has_become_blocked(puVar4,0);
                  iVar1 = test_false("test/quic_fc_test.c",0x36,
                                     "ossl_quic_txfc_has_become_blocked(txfc, 0)",iVar1 != 0);
                  if (iVar1 != 0) {
                    iVar1 = ossl_quic_txfc_consume_credit(puVar4,500);
                    iVar1 = test_true("test/quic_fc_test.c",0x39,
                                      "ossl_quic_txfc_consume_credit(txfc, 500)",iVar1 != 0);
                    if (iVar1 != 0) {
                      uVar2 = ossl_quic_txfc_get_credit_local(puVar4,0);
                      iVar1 = test_uint64_t_eq("test/quic_fc_test.c",0x3c,
                                               "ossl_quic_txfc_get_credit_local(txfc, 0)",&_LC38,
                                               uVar2,0x5dc);
                      if (iVar1 != 0) {
                        if (param_1 != 0) {
                          uVar2 = ossl_quic_txfc_get_credit(puVar4,0);
                          iVar1 = test_uint64_t_eq("test/quic_fc_test.c",0x3f,
                                                   "ossl_quic_txfc_get_credit(txfc, 0)",&_LC38,uVar2
                                                   ,0x5dc);
                          if (iVar1 == 0) goto LAB_00100a88;
                        }
                        iVar1 = ossl_quic_txfc_has_become_blocked(puVar4,0);
                        iVar1 = test_false("test/quic_fc_test.c",0x43,
                                           "ossl_quic_txfc_has_become_blocked(txfc, 0)",iVar1 != 0);
                        if (iVar1 != 0) {
                          uVar2 = ossl_quic_txfc_get_swm(puVar4);
                          iVar1 = test_uint64_t_eq("test/quic_fc_test.c",0x46,
                                                   "ossl_quic_txfc_get_swm(txfc)",&_LC39,uVar2,500);
                          if (iVar1 != 0) {
                            iVar1 = ossl_quic_txfc_consume_credit(puVar4,100);
                            iVar1 = test_true("test/quic_fc_test.c",0x49,
                                              "ossl_quic_txfc_consume_credit(txfc, 100)",iVar1 != 0)
                            ;
                            if (iVar1 != 0) {
                              uVar2 = ossl_quic_txfc_get_swm(puVar4);
                              iVar1 = test_uint64_t_eq("test/quic_fc_test.c",0x4c,
                                                       "ossl_quic_txfc_get_swm(txfc)",&_LC41,uVar2,
                                                       600);
                              if (iVar1 != 0) {
                                uVar2 = ossl_quic_txfc_get_credit_local(puVar4,0);
                                iVar1 = test_uint64_t_eq("test/quic_fc_test.c",0x4f,
                                                         "ossl_quic_txfc_get_credit_local(txfc, 0)",
                                                         &_LC42,uVar2,0x578);
                                if (iVar1 != 0) {
                                  if (param_1 != 0) {
                                    uVar2 = ossl_quic_txfc_get_credit(puVar4,0);
                                    iVar1 = test_uint64_t_eq("test/quic_fc_test.c",0x52,
                                                             "ossl_quic_txfc_get_credit(txfc, 0)",
                                                             &_LC42,uVar2,0x578);
                                    if (iVar1 == 0) goto LAB_00100a88;
                                  }
                                  iVar1 = ossl_quic_txfc_has_become_blocked(puVar4,0);
                                  iVar1 = test_false("test/quic_fc_test.c",0x56,
                                                     "ossl_quic_txfc_has_become_blocked(txfc, 0)",
                                                     iVar1 != 0);
                                  if (iVar1 != 0) {
                                    iVar1 = ossl_quic_txfc_consume_credit(puVar4,0x578);
                                    iVar1 = test_true("test/quic_fc_test.c",0x59,
                                                      "ossl_quic_txfc_consume_credit(txfc, 1400)",
                                                      iVar1 != 0);
                                    if (iVar1 != 0) {
                                      uVar2 = ossl_quic_txfc_get_credit_local(puVar4,0);
                                      iVar1 = test_uint64_t_eq("test/quic_fc_test.c",0x5c,
                                                                                                                              
                                                  "ossl_quic_txfc_get_credit_local(txfc, 0)",&_LC27,
                                                  uVar2,0);
                                      if (iVar1 != 0) {
                                        if (param_1 != 0) {
                                          uVar2 = ossl_quic_txfc_get_credit(puVar4,0);
                                          iVar1 = test_uint64_t_eq("test/quic_fc_test.c",0x5f,
                                                                                                                                      
                                                  "ossl_quic_txfc_get_credit(txfc, 0)",&_LC27,uVar2,
                                                  0);
                                          if (iVar1 == 0) goto LAB_00100a88;
                                        }
                                        uVar2 = ossl_quic_txfc_get_swm(puVar4);
                                        iVar1 = test_uint64_t_eq("test/quic_fc_test.c",99,
                                                                 "ossl_quic_txfc_get_swm(txfc)",
                                                                 &_LC29,uVar2,2000);
                                        if (iVar1 != 0) {
                                          iVar1 = ossl_quic_txfc_has_become_blocked(puVar4,0);
                                          iVar1 = test_true("test/quic_fc_test.c",0x66,
                                                                                                                        
                                                  "ossl_quic_txfc_has_become_blocked(txfc, 0)",
                                                  iVar1 != 0);
                                          if (iVar1 != 0) {
                                            iVar1 = ossl_quic_txfc_has_become_blocked(puVar4,0);
                                            iVar1 = test_true("test/quic_fc_test.c",0x69,
                                                                                                                            
                                                  "ossl_quic_txfc_has_become_blocked(txfc, 0)",
                                                  iVar1 != 0);
                                            if (iVar1 != 0) {
                                              iVar1 = ossl_quic_txfc_has_become_blocked(puVar4,1);
                                              iVar1 = test_true("test/quic_fc_test.c",0x6c,
                                                                                                                                
                                                  "ossl_quic_txfc_has_become_blocked(txfc, 1)",
                                                  iVar1 != 0);
                                              if (iVar1 != 0) {
                                                iVar1 = ossl_quic_txfc_has_become_blocked(puVar4,0);
                                                iVar1 = test_false("test/quic_fc_test.c",0x6f,
                                                                                                                                      
                                                  "ossl_quic_txfc_has_become_blocked(txfc, 0)",
                                                  iVar1 != 0);
                                                if (iVar1 != 0) {
                                                  iVar1 = ossl_quic_txfc_has_become_blocked
                                                                    (puVar4,0);
                                                  iVar1 = test_false("test/quic_fc_test.c",0x72,
                                                                                                                                          
                                                  "ossl_quic_txfc_has_become_blocked(txfc, 0)",
                                                  iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = ossl_quic_txfc_consume_credit(puVar4,1);
                                                    iVar1 = test_false("test/quic_fc_test.c",0x75,
                                                                                                                                              
                                                  "ossl_quic_txfc_consume_credit(txfc, 1)",
                                                  iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    uVar2 = ossl_quic_txfc_get_cwm(puVar4);
                                                    iVar1 = test_uint64_t_eq("test/quic_fc_test.c",
                                                                             0x78,
                                                  "ossl_quic_txfc_get_cwm(txfc)",&_LC29,uVar2,2000);
                                                  if (iVar1 != 0) {
                                                    uVar2 = ossl_quic_txfc_get_swm(puVar4);
                                                    iVar1 = test_uint64_t_eq("test/quic_fc_test.c",
                                                                             0x7b,
                                                  "ossl_quic_txfc_get_swm(txfc)",&_LC29,uVar2,2000);
                                                  if (iVar1 != 0) {
                                                    iVar1 = ossl_quic_txfc_bump_cwm(puVar4,2000);
                                                    iVar1 = test_false("test/quic_fc_test.c",0x7e,
                                                                                                                                              
                                                  "ossl_quic_txfc_bump_cwm(txfc, 2000)",iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = ossl_quic_txfc_bump_cwm(puVar4,0x9c4);
                                                    iVar1 = test_true("test/quic_fc_test.c",0x81,
                                                                                                                                            
                                                  "ossl_quic_txfc_bump_cwm(txfc, 2500)",iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    if (param_1 != 0) {
                                                      iVar1 = ossl_quic_txfc_bump_cwm
                                                                        (local_90,0x960);
                                                      iVar1 = test_true("test/quic_fc_test.c",0x84,
                                                                                                                                                
                                                  "ossl_quic_txfc_bump_cwm(parent_txfc, 2400)",
                                                  iVar1 != 0);
                                                  if (iVar1 == 0) goto LAB_00100a88;
                                                  }
                                                  uVar2 = ossl_quic_txfc_get_cwm(puVar4);
                                                  iVar1 = test_uint64_t_eq("test/quic_fc_test.c",
                                                                           0x87,
                                                  "ossl_quic_txfc_get_cwm(txfc)",&_LC48,uVar2,0x9c4)
                                                  ;
                                                  if (iVar1 != 0) {
                                                    uVar2 = ossl_quic_txfc_get_swm(puVar4);
                                                    iVar1 = test_uint64_t_eq("test/quic_fc_test.c",
                                                                             0x8a,
                                                  "ossl_quic_txfc_get_swm(txfc)",&_LC29,uVar2,2000);
                                                  if (iVar1 != 0) {
                                                    uVar2 = ossl_quic_txfc_get_credit_local
                                                                      (puVar4,0);
                                                    iVar1 = test_uint64_t_eq("test/quic_fc_test.c",
                                                                             0x8d,
                                                  "ossl_quic_txfc_get_credit_local(txfc, 0)",&_LC39,
                                                  uVar2,500);
                                                  if (iVar1 != 0) {
                                                    if (param_1 == 0) {
                                                      iVar1 = ossl_quic_txfc_consume_credit
                                                                        (puVar4,499);
                                                      iVar1 = test_true("test/quic_fc_test.c",0xac,
                                                                                                                                                
                                                  "ossl_quic_txfc_consume_credit(txfc, 499)",
                                                  iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = ossl_quic_txfc_has_become_blocked
                                                                      (puVar4,0);
                                                    iVar1 = test_false("test/quic_fc_test.c",0xaf,
                                                                                                                                              
                                                  "ossl_quic_txfc_has_become_blocked(txfc, 0)",
                                                  iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = ossl_quic_txfc_consume_credit(puVar4,1);
                                                    iVar1 = test_true("test/quic_fc_test.c",0xb5,
                                                                                                                                            
                                                  "ossl_quic_txfc_consume_credit(txfc, 1)",
                                                  iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = ossl_quic_txfc_has_become_blocked
                                                                      (puVar4,0);
                                                    iVar1 = test_true("test/quic_fc_test.c",0xb8,
                                                                                                                                            
                                                  "ossl_quic_txfc_has_become_blocked(txfc, 0)",
                                                  iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = ossl_quic_txfc_has_become_blocked
                                                                      (puVar4,1);
                                                    iVar1 = test_true("test/quic_fc_test.c",0xbb,
                                                                                                                                            
                                                  "ossl_quic_txfc_has_become_blocked(txfc, 1)",
                                                  iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = ossl_quic_txfc_has_become_blocked
                                                                      (puVar4,0);
                                                    uVar2 = 0xbe;
                                                    pcVar3 = 
                                                  "ossl_quic_txfc_has_become_blocked(txfc, 0)";
LAB_00101238:
                                                  iVar1 = test_false("test/quic_fc_test.c",uVar2,
                                                                     pcVar3,iVar1 != 0);
                                                  bVar5 = iVar1 != 0;
                                                  goto LAB_00100a8a;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    ossl_quic_txfc_has_become_blocked(local_90,1);
                                                    uVar2 = ossl_quic_txfc_get_credit(puVar4,400);
                                                    iVar1 = test_uint64_t_eq("test/quic_fc_test.c",
                                                                             0x94,
                                                  "ossl_quic_txfc_get_credit(txfc, 400)",&_LC27,
                                                  uVar2,0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = ossl_quic_txfc_consume_credit
                                                                      (puVar4,399);
                                                    iVar1 = test_true("test/quic_fc_test.c",0x97,
                                                                                                                                            
                                                  "ossl_quic_txfc_consume_credit(txfc, 399)",
                                                  iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = ossl_quic_txfc_has_become_blocked
                                                                      (puVar4,0);
                                                    iVar1 = test_false("test/quic_fc_test.c",0x9a,
                                                                                                                                              
                                                  "ossl_quic_txfc_has_become_blocked(txfc, 0)",
                                                  iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    uVar2 = ossl_quic_txfc_get_credit(puVar4,0);
                                                    iVar1 = test_uint64_t_eq("test/quic_fc_test.c",
                                                                             0x9d,
                                                  "ossl_quic_txfc_get_credit(txfc, 0)",&_LC53,uVar2,
                                                  1);
                                                  if (iVar1 != 0) {
                                                    iVar1 = ossl_quic_txfc_consume_credit(puVar4,1);
                                                    iVar1 = test_true("test/quic_fc_test.c",0xa0,
                                                                                                                                            
                                                  "ossl_quic_txfc_consume_credit(txfc, 1)",
                                                  iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    pcVar3 = 
                                                  "ossl_quic_txfc_has_become_blocked(parent_txfc, 0)"
                                                  ;
                                                  iVar1 = ossl_quic_txfc_has_become_blocked
                                                                    (local_90,0);
                                                  iVar1 = test_true("test/quic_fc_test.c",0xa3,
                                                                                                                                        
                                                  "ossl_quic_txfc_has_become_blocked(parent_txfc, 0)"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = ossl_quic_txfc_has_become_blocked
                                                                      (local_90,1);
                                                    iVar1 = test_true("test/quic_fc_test.c",0xa6,
                                                                                                                                            
                                                  "ossl_quic_txfc_has_become_blocked(parent_txfc, 1)"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = ossl_quic_txfc_has_become_blocked
                                                                      (local_90,0);
                                                    uVar2 = 0xa9;
                                                    goto LAB_00101238;
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
                      }
                    }
                  }
                }
                else {
                  uVar2 = ossl_quic_txfc_get_credit(puVar4,0);
                  iVar1 = test_uint64_t_eq("test/quic_fc_test.c",0x2f,
                                           "ossl_quic_txfc_get_credit(txfc, 0)",&_LC29,uVar2,2000);
                  if (iVar1 != 0) {
                    uVar2 = ossl_quic_txfc_get_credit(puVar4,100);
                    iVar1 = test_uint64_t_eq("test/quic_fc_test.c",0x32,
                                             "ossl_quic_txfc_get_credit(txfc, 100)",&_LC32,uVar2,
                                             0x76c);
                    if (iVar1 != 0) goto LAB_00100b9c;
                  }
                }
              }
            }
          }
        }
      }
    }
    else {
      puVar4 = local_68;
      iVar1 = ossl_quic_txfc_init(puVar4,local_88);
      iVar1 = test_true("test/quic_fc_test.c",0x16,"ossl_quic_txfc_init(&stream_txfc, &conn_txfc)",
                        iVar1 != 0);
      if (iVar1 != 0) {
        iVar1 = ossl_quic_txfc_bump_cwm(puVar4,2000);
        iVar1 = test_true("test/quic_fc_test.c",0x1c,"ossl_quic_txfc_bump_cwm(txfc, 2000)",
                          iVar1 != 0);
        if (iVar1 != 0) {
          iVar1 = ossl_quic_txfc_bump_cwm(local_88,2000);
          iVar1 = test_true("test/quic_fc_test.c",0x1f,"ossl_quic_txfc_bump_cwm(parent_txfc, 2000)",
                            iVar1 != 0);
          local_90 = local_88;
          if (iVar1 != 0) goto LAB_001009f0;
        }
      }
    }
  }
LAB_00100a88:
  bVar5 = false;
LAB_00100a8a:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar5;
}



undefined8 setup_tests(void)

{
  add_all_tests("test_txfc",test_txfc,2,1);
  add_all_tests("test_rxfc",test_rxfc,2,1);
  return 1;
}


