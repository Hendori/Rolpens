
void free_cb(void)

{
  return;
}



undefined8 check(undefined8 param_1)

{
  uint uVar1;
  uint *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *local_50;
  uint *local_48;
  
  iVar7 = 0;
  local_50 = &items;
  local_48 = &DAT_00100824;
  do {
    uVar5 = ossl_quic_cfq_get_priority_head(param_1,iVar7);
    uVar1 = local_48[-1];
    puVar8 = local_50;
    puVar2 = local_48;
    while (uVar1 != 0xffffffff) {
      *puVar8 = uVar5;
      iVar4 = test_ptr("test/quic_cfq_test.c",0x56,&_LC0,uVar5);
      if (iVar4 == 0) {
        return 0;
      }
      uVar6 = ossl_quic_cfq_item_get_encoded(uVar5);
      iVar4 = test_ptr_eq("test/quic_cfq_test.c",0x57,"ossl_quic_cfq_item_get_encoded(item)",
                          "ref_buf + expect[pn_space][i]",uVar6,ref_buf + uVar1);
      if (iVar4 == 0) {
        return 0;
      }
      uVar3 = ossl_quic_cfq_item_get_pn_space(uVar5);
      iVar4 = test_int_eq("test/quic_cfq_test.c",0x59,"ossl_quic_cfq_item_get_pn_space(item)",
                          "pn_space",uVar3,iVar7);
      if (iVar4 == 0) {
        return 0;
      }
      uVar3 = ossl_quic_cfq_item_get_state(uVar5);
      iVar4 = test_int_eq("test/quic_cfq_test.c",0x5a,"ossl_quic_cfq_item_get_state(item)",
                          "QUIC_CFQ_STATE_NEW",uVar3,0);
      if (iVar4 == 0) {
        return 0;
      }
      puVar8 = puVar8 + 1;
      uVar5 = ossl_quic_cfq_item_get_priority_next(uVar5,iVar7);
      uVar1 = *puVar2;
      puVar2 = puVar2 + 1;
    }
    iVar4 = test_ptr_null("test/quic_cfq_test.c",0x4e,&_LC0,uVar5);
    if (iVar4 == 0) {
      return 0;
    }
    iVar7 = iVar7 + 1;
    local_50 = local_50 + 10;
    local_48 = local_48 + 0xb;
    if (iVar7 == 3) {
      return 1;
    }
  } while( true );
}



undefined8 test_cfq(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  
  uVar5 = ossl_quic_cfq_new();
  iVar2 = test_ptr("test/quic_cfq_test.c",0x6c,"cfq = ossl_quic_cfq_new()",uVar5);
  if (iVar2 != 0) {
    lVar10 = 0;
    do {
      uVar8 = (&ref_frame_type)[lVar10];
      uVar1 = (&ref_pn_space)[lVar10];
      uVar6 = ossl_quic_cfq_add_frame
                        (uVar5,(&ref_priority)[lVar10],uVar1,uVar8,0,ref_buf + lVar10,1,0x100000,0);
      iVar2 = test_ptr("test/quic_cfq_test.c",0x73,
                       "item = ossl_quic_cfq_add_frame(cfq, ref_priority[i], ref_pn_space[i], ref_frame_type[i], 0, ref_buf + i, 1, free_cb, NULL)"
                       ,uVar6);
      if (iVar2 == 0) goto LAB_001004a5;
      uVar3 = ossl_quic_cfq_item_get_state(uVar6);
      iVar2 = test_int_eq("test/quic_cfq_test.c",0x7a,"ossl_quic_cfq_item_get_state(item)",
                          "QUIC_CFQ_STATE_NEW",uVar3,0);
      if (iVar2 == 0) goto LAB_001004a5;
      uVar3 = ossl_quic_cfq_item_get_pn_space(uVar6);
      iVar2 = test_uint_eq("test/quic_cfq_test.c",0x7c,"ossl_quic_cfq_item_get_pn_space(item)",
                           "ref_pn_space[i]",uVar3,uVar1);
      if (iVar2 == 0) goto LAB_001004a5;
      uVar7 = ossl_quic_cfq_item_get_frame_type(uVar6);
      iVar2 = test_uint64_t_eq("test/quic_cfq_test.c",0x7e,"ossl_quic_cfq_item_get_frame_type(item)"
                               ,"ref_frame_type[i]",uVar7,uVar8);
      if (iVar2 == 0) goto LAB_001004a5;
      uVar8 = ossl_quic_cfq_item_get_encoded(uVar6);
      iVar2 = test_ptr_eq("test/quic_cfq_test.c",0x80,"ossl_quic_cfq_item_get_encoded(item)",
                          "ref_buf + i",uVar8,ref_buf + lVar10);
      if (iVar2 == 0) goto LAB_001004a5;
      uVar8 = ossl_quic_cfq_item_get_encoded_len(uVar6);
      iVar2 = test_size_t_eq("test/quic_cfq_test.c",0x82,"ossl_quic_cfq_item_get_encoded_len(item)",
                             &_LC14,uVar8,1);
      if (iVar2 == 0) goto LAB_001004a5;
      lVar10 = lVar10 + 1;
    } while (lVar10 != 10);
    iVar2 = check(uVar5);
    if (iVar2 != 0) {
      iVar2 = 0;
      do {
        lVar10 = ossl_quic_cfq_get_priority_head(uVar5,iVar2);
        while (lVar10 != 0) {
          lVar9 = ossl_quic_cfq_item_get_priority_next(lVar10,iVar2);
          ossl_quic_cfq_mark_tx(uVar5,lVar10);
          lVar10 = lVar9;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 != 3);
      iVar2 = 0;
      do {
        uVar8 = ossl_quic_cfq_get_priority_head(uVar5,iVar2);
        iVar4 = test_ptr_null("test/quic_cfq_test.c",0x93,
                              "ossl_quic_cfq_get_priority_head(cfq, pn_space)",uVar8);
        if (iVar4 == 0) goto LAB_001004a5;
        iVar2 = iVar2 + 1;
      } while (iVar2 != 3);
      puVar11 = &items;
      puVar12 = &items;
      do {
        lVar10 = 0;
        do {
          if (puVar12[lVar10] != 0) {
            ossl_quic_cfq_mark_lost(uVar5,puVar12[lVar10],0xffffffff);
          }
          lVar10 = lVar10 + 1;
        } while (lVar10 != 10);
        puVar12 = puVar12 + 10;
      } while (puVar12 != (undefined8 *)&_LC0);
      iVar2 = check(uVar5);
      if (iVar2 != 0) {
        do {
          lVar10 = 0;
          do {
            if (puVar11[lVar10] != 0) {
              ossl_quic_cfq_release(uVar5);
            }
            lVar10 = lVar10 + 1;
          } while (lVar10 != 10);
          puVar11 = puVar11 + 10;
        } while (puVar11 != (undefined8 *)&_LC0);
        iVar2 = 0;
        do {
          uVar8 = ossl_quic_cfq_get_priority_head(uVar5,iVar2);
          iVar4 = test_ptr_null("test/quic_cfq_test.c",0xa4,
                                "ossl_quic_cfq_get_priority_head(cfq, pn_space)",uVar8);
          if (iVar4 == 0) goto LAB_001004a5;
          iVar2 = iVar2 + 1;
        } while (iVar2 != 3);
        uVar8 = 1;
        goto LAB_001004a7;
      }
    }
  }
LAB_001004a5:
  uVar8 = 0;
LAB_001004a7:
  ossl_quic_cfq_free(uVar5);
  return uVar8;
}



undefined8 setup_tests(void)

{
  add_test("test_cfq",test_cfq);
  return 1;
}


