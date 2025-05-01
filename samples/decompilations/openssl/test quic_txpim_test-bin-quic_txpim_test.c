
undefined8 test_txpim(void)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long in_FS_OFFSET;
  long local_110;
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  long local_a8 [13];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_f8 = (undefined1  [16])0x0;
  local_e8 = (undefined1  [16])0x0;
  local_d8 = (undefined1  [16])0x0;
  local_c8 = (undefined1  [16])0x0;
  local_b8 = (undefined1  [16])0x0;
  lVar2 = ossl_quic_txpim_new();
  iVar1 = test_ptr("test/quic_txpim_test.c",0x17,"txpim = ossl_quic_txpim_new()",lVar2);
  if (iVar1 == 0) {
LAB_00100275:
    uVar4 = 0;
  }
  else {
    plVar6 = (long *)local_f8;
    local_110 = 0;
    do {
      lVar3 = ossl_quic_txpim_pkt_alloc(lVar2);
      *plVar6 = lVar3;
      iVar1 = test_ptr("test/quic_txpim_test.c",0x1b,"pkts[i] = ossl_quic_txpim_pkt_alloc(txpim)",
                       lVar3);
      if (iVar1 == 0) goto LAB_00100275;
      uVar4 = ossl_quic_txpim_pkt_get_num_chunks(lVar3);
      iVar1 = test_size_t_eq("test/quic_txpim_test.c",0x1e,
                             "ossl_quic_txpim_pkt_get_num_chunks(pkts[i])",&_LC3,uVar4,0);
      if (iVar1 == 0) goto LAB_00100275;
      lVar9 = 100;
      lVar7 = local_110;
      plVar8 = local_a8;
      do {
        *plVar8 = lVar9;
        plVar8[1] = lVar7;
        plVar8[2] = lVar7 + 5;
        iVar1 = ossl_quic_txpim_pkt_append_chunk(lVar3,plVar8);
        iVar1 = test_true("test/quic_txpim_test.c",0x26,
                          "ossl_quic_txpim_pkt_append_chunk(pkts[i], chunks + j)",iVar1 != 0);
        if (iVar1 == 0) goto LAB_00100275;
        lVar9 = lVar9 + -1;
        plVar8 = plVar8 + 4;
        lVar7 = lVar7 + 10;
      } while (lVar9 != 0x61);
      uVar4 = ossl_quic_txpim_pkt_get_num_chunks(lVar3);
      iVar1 = test_size_t_eq("test/quic_txpim_test.c",0x2a,
                             "ossl_quic_txpim_pkt_get_num_chunks(pkts[i])","OSSL_NELEM(chunks)",
                             uVar4,3);
      if (iVar1 == 0) goto LAB_00100275;
      puVar5 = (undefined8 *)ossl_quic_txpim_pkt_get_chunks(lVar3);
      iVar1 = test_uint64_t_eq("test/quic_txpim_test.c",0x2f,"rchunks[0].stream_id",&_LC7,*puVar5,
                               0x62);
      if (((iVar1 == 0) ||
          (iVar1 = test_uint64_t_eq("test/quic_txpim_test.c",0x30,"rchunks[1].stream_id",&_LC9,
                                    puVar5[4],99), iVar1 == 0)) ||
         (iVar1 = test_uint64_t_eq("test/quic_txpim_test.c",0x31,"rchunks[2].stream_id",&_LC11,
                                   puVar5[8]), iVar1 == 0)) goto LAB_00100275;
      plVar6 = plVar6 + 1;
      local_110 = local_110 + 1000;
    } while (plVar6 != local_a8);
    uVar4 = 1;
  }
  if (lVar2 != 0) {
    plVar6 = (long *)local_f8;
    do {
      if (*plVar6 != 0) {
        ossl_quic_txpim_pkt_release(lVar2);
      }
      plVar6 = plVar6 + 1;
    } while (plVar6 != local_a8);
  }
  ossl_quic_txpim_free(lVar2);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 setup_tests(void)

{
  add_test("test_txpim",0x100000);
  return 1;
}


