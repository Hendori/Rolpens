
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
  long *plVar10;
  long in_FS_OFFSET;
  long local_108;
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  long local_a8 [13];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_f8 = (undefined1  [16])0x0;
  plVar6 = (long *)local_f8;
  local_e8 = (undefined1  [16])0x0;
  local_d8 = (undefined1  [16])0x0;
  local_c8 = (undefined1  [16])0x0;
  local_b8 = (undefined1  [16])0x0;
  lVar2 = ossl_quic_txpim_new();
  iVar1 = test_ptr("test/quic_txpim_test.c",0x17,"txpim = ossl_quic_txpim_new()",lVar2);
  if (iVar1 == 0) {
LAB_001002aa:
    uVar4 = 0;
  }
  else {
    local_108 = 0;
    plVar8 = plVar6;
    do {
      lVar3 = ossl_quic_txpim_pkt_alloc(lVar2);
      *plVar8 = lVar3;
      iVar1 = test_ptr("test/quic_txpim_test.c",0x1b,"pkts[i] = ossl_quic_txpim_pkt_alloc(txpim)",
                       lVar3);
      if (iVar1 == 0) goto LAB_001002aa;
      uVar4 = ossl_quic_txpim_pkt_get_num_chunks(lVar3);
      iVar1 = test_size_t_eq("test/quic_txpim_test.c",0x1e,
                             "ossl_quic_txpim_pkt_get_num_chunks(pkts[i])",&_LC3,uVar4,0);
      if (iVar1 == 0) goto LAB_001002aa;
      lVar7 = 100;
      lVar9 = local_108;
      plVar10 = local_a8;
      do {
        *plVar10 = lVar7;
        plVar10[1] = lVar9;
        plVar10[2] = lVar9 + 5;
        iVar1 = ossl_quic_txpim_pkt_append_chunk(lVar3,plVar10);
        iVar1 = test_true("test/quic_txpim_test.c",0x26,
                          "ossl_quic_txpim_pkt_append_chunk(pkts[i], chunks + j)",iVar1 != 0);
        if (iVar1 == 0) goto LAB_001002aa;
        lVar7 = lVar7 + -1;
        plVar10 = plVar10 + 4;
        lVar9 = lVar9 + 10;
      } while (lVar7 != 0x61);
      uVar4 = ossl_quic_txpim_pkt_get_num_chunks(lVar3);
      iVar1 = test_size_t_eq("test/quic_txpim_test.c",0x2a,
                             "ossl_quic_txpim_pkt_get_num_chunks(pkts[i])","OSSL_NELEM(chunks)",
                             uVar4,3);
      if (iVar1 == 0) goto LAB_001002aa;
      puVar5 = (undefined8 *)ossl_quic_txpim_pkt_get_chunks(lVar3);
      iVar1 = test_uint64_t_eq("test/quic_txpim_test.c",0x2f,"rchunks[0].stream_id",&_LC7,*puVar5,
                               0x62);
      if (((iVar1 == 0) ||
          (iVar1 = test_uint64_t_eq("test/quic_txpim_test.c",0x30,"rchunks[1].stream_id",&_LC9,
                                    puVar5[4],99), iVar1 == 0)) ||
         (iVar1 = test_uint64_t_eq("test/quic_txpim_test.c",0x31,"rchunks[2].stream_id",&_LC11,
                                   puVar5[8]), iVar1 == 0)) goto LAB_001002aa;
      plVar8 = plVar8 + 1;
      local_108 = local_108 + 1000;
    } while (plVar8 != local_a8);
    uVar4 = 1;
  }
  if (lVar2 == 0) {
    do {
      plVar6 = plVar6 + 1;
    } while (plVar6 != local_a8);
  }
  else {
    do {
      if (*plVar6 != 0) {
        ossl_quic_txpim_pkt_release(lVar2);
      }
      plVar6 = plVar6 + 1;
    } while (local_a8 != plVar6);
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


