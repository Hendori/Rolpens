
undefined8 test_WPACKET_quic_vlint_random(void)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  byte *pbVar8;
  ulong uVar9;
  long in_FS_OFFSET;
  undefined8 uVar10;
  byte *local_b0;
  ulong local_a8;
  ulong local_90;
  undefined1 local_88 [63];
  ulong local_49;
  byte local_41;
  long local_40;
  
  lVar7 = 10000;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_a8 = 0;
  local_b0 = (byte *)0x0;
  uVar10 = 0;
  do {
    iVar2 = RAND_bytes((uchar *)&local_49,9);
    iVar2 = test_int_gt("test/wpackettest.c",0x24e,"RAND_bytes(rand_data, sizeof(rand_data))",&_LC0,
                        iVar2,0,uVar10);
    if (iVar2 == 0) {
LAB_00100280:
      WPACKET_cleanup(local_88);
      uVar10 = 0;
      goto LAB_0010028a;
    }
    bVar1 = local_41 & 3;
    uVar5 = (uint)local_49;
    uVar6 = (ulong)(uVar5 & 0x3fffffff);
    if ((bVar1 != 2) && (uVar6 = local_49 & 0x3fffffffffffffff, bVar1 != 3)) {
      uVar6 = (ulong)(uVar5 & 0x3f);
      if (bVar1 == 1) {
        uVar6 = (ulong)(uVar5 & 0x3fff);
      }
    }
    iVar2 = WPACKET_init(local_88,buf);
    iVar2 = test_true("test/wpackettest.c",0x265,"WPACKET_init(&pkt, buf)",iVar2 != 0);
    if (iVar2 == 0) goto LAB_00100280;
    iVar2 = WPACKET_quic_write_vlint(local_88,uVar6);
    iVar2 = test_true("test/wpackettest.c",0x266,"WPACKET_quic_write_vlint(&pkt, expected)",
                      iVar2 != 0);
    if (iVar2 == 0) goto LAB_00100280;
    iVar2 = WPACKET_get_total_written(local_88,&local_90);
    iVar2 = test_true("test/wpackettest.c",0x267,"WPACKET_get_total_written(&pkt, &written)",
                      iVar2 != 0);
    if (iVar2 == 0) goto LAB_00100280;
    pbVar8 = *(byte **)(buf + 8);
    uVar9 = local_90;
    if ((long)local_90 < 0) {
      pbVar8 = local_b0;
      uVar9 = local_a8;
    }
    iVar2 = test_true("test/wpackettest.c",0x26a,
                      "PACKET_buf_init(&read_pkt, (unsigned char *)buf->data, written)",
                      (long)local_90 >= 0);
    if (iVar2 == 0) goto LAB_00100280;
    local_b0 = pbVar8;
    if (uVar9 == 0) {
      local_a8 = 0;
      uVar3 = 0;
    }
    else {
      uVar4 = (ulong)(uint)(1 << (*pbVar8 >> 6));
      if (uVar9 < uVar4) {
        uVar3 = 0;
        local_a8 = uVar9;
      }
      else {
        uVar10 = ossl_quic_vlint_decode_unchecked(pbVar8);
        uVar3 = 1;
        local_b0 = pbVar8 + uVar4;
        local_a8 = uVar9 - uVar4;
      }
    }
    iVar2 = test_true("test/wpackettest.c",0x26b,"PACKET_get_quic_vlint(&read_pkt, &actual)",uVar3);
    if (iVar2 == 0) goto LAB_00100280;
    iVar2 = test_uint64_t_eq("test/wpackettest.c",0x26c,"expected","actual",uVar6);
    if (iVar2 == 0) goto LAB_00100280;
    WPACKET_cleanup(local_88);
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  WPACKET_cleanup(local_88);
  uVar10 = 1;
LAB_0010028a:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 test_WPACKET_quic(void)

{
  int iVar1;
  undefined8 extraout_RDX;
  long in_FS_OFFSET;
  undefined2 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 *local_80;
  undefined1 local_78 [56];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = WPACKET_init(local_78,buf);
  iVar1 = test_true("test/wpackettest.c",0x1d0,"WPACKET_init(&pkt, buf)",iVar1 != 0);
  if (iVar1 != 0) {
    iVar1 = WPACKET_start_quic_sub_packet(local_78);
    iVar1 = test_true("test/wpackettest.c",0x1d1,"WPACKET_start_quic_sub_packet(&pkt)",iVar1 != 0);
    if (iVar1 != 0) {
      iVar1 = WPACKET_quic_write_vlint(local_78,9);
      iVar1 = test_true("test/wpackettest.c",0x1d2,"WPACKET_quic_write_vlint(&pkt, 0x09)",iVar1 != 0
                       );
      if (iVar1 != 0) {
        iVar1 = WPACKET_finish(local_78);
        iVar1 = test_false("test/wpackettest.c",0x1d4,"WPACKET_finish(&pkt)",iVar1 != 0);
        if (iVar1 != 0) {
          iVar1 = WPACKET_close(local_78);
          iVar1 = test_true("test/wpackettest.c",0x1d5,"WPACKET_close(&pkt)",iVar1 != 0);
          if (iVar1 != 0) {
            iVar1 = WPACKET_close(local_78);
            iVar1 = test_false("test/wpackettest.c",0x1d7,"WPACKET_close(&pkt)",iVar1 != 0);
            if (iVar1 != 0) {
              iVar1 = WPACKET_finish(local_78);
              iVar1 = test_true("test/wpackettest.c",0x1d9,"WPACKET_finish(&pkt)",iVar1 != 0);
              if (iVar1 != 0) {
                iVar1 = WPACKET_get_total_written(local_78,&local_90);
                iVar1 = test_true("test/wpackettest.c",0x1da,
                                  "WPACKET_get_total_written(&pkt, &written)",iVar1 != 0);
                if (iVar1 != 0) {
                  iVar1 = test_mem_eq("test/wpackettest.c",0x1db,"buf->data","quic1",
                                      *(undefined8 *)(buf + 8),local_90,&quic1);
                  if (iVar1 != 0) {
                    iVar1 = WPACKET_init(local_78,buf);
                    iVar1 = test_true("test/wpackettest.c",0x1df,"WPACKET_init(&pkt, buf)",
                                      iVar1 != 0);
                    if (iVar1 != 0) {
                      iVar1 = WPACKET_start_quic_sub_packet_bound(local_78,0x3f);
                      iVar1 = test_true("test/wpackettest.c",0x1e0,
                                        "WPACKET_start_quic_sub_packet_bound(&pkt, OSSL_QUIC_VLINT_1B_MAX)"
                                        ,iVar1 != 0);
                      if (iVar1 != 0) {
                        iVar1 = WPACKET_quic_write_vlint(local_78,9);
                        iVar1 = test_true("test/wpackettest.c",0x1e1,
                                          "WPACKET_quic_write_vlint(&pkt, 0x09)",iVar1 != 0);
                        if (iVar1 != 0) {
                          iVar1 = WPACKET_finish(local_78);
                          iVar1 = test_false("test/wpackettest.c",0x1e2,"WPACKET_finish(&pkt)",
                                             iVar1 != 0);
                          if (iVar1 != 0) {
                            iVar1 = WPACKET_close(local_78);
                            iVar1 = test_true("test/wpackettest.c",0x1e3,"WPACKET_close(&pkt)",
                                              iVar1 != 0);
                            if (iVar1 != 0) {
                              iVar1 = WPACKET_close(local_78);
                              iVar1 = test_false("test/wpackettest.c",0x1e4,"WPACKET_close(&pkt)",
                                                 iVar1 != 0);
                              if (iVar1 != 0) {
                                iVar1 = WPACKET_finish(local_78);
                                iVar1 = test_true("test/wpackettest.c",0x1e5,"WPACKET_finish(&pkt)",
                                                  iVar1 != 0);
                                if (iVar1 != 0) {
                                  iVar1 = WPACKET_get_total_written(local_78,&local_90);
                                  iVar1 = test_true("test/wpackettest.c",0x1e6,
                                                    "WPACKET_get_total_written(&pkt, &written)",
                                                    iVar1 != 0);
                                  if (iVar1 != 0) {
                                    puVar2 = &quic2;
                                    iVar1 = test_mem_eq("test/wpackettest.c",0x1e7,"buf->data",
                                                        "quic2",*(undefined8 *)(buf + 8),local_90,
                                                        &quic2,2);
                                    if (iVar1 != 0) {
                                      iVar1 = WPACKET_init(local_78,buf,extraout_RDX,puVar2);
                                      iVar1 = test_true("test/wpackettest.c",0x1eb,
                                                        "WPACKET_init(&pkt, buf)",iVar1 != 0);
                                      if (iVar1 != 0) {
                                        iVar1 = WPACKET_start_quic_sub_packet_bound(local_78,0x40);
                                        iVar1 = test_true("test/wpackettest.c",0x1ec,
                                                                                                                    
                                                  "WPACKET_start_quic_sub_packet_bound(&pkt, OSSL_QUIC_VLINT_2B_MIN)"
                                                  ,iVar1 != 0);
                                        if (iVar1 != 0) {
                                          iVar1 = WPACKET_quic_write_vlint(local_78,0x41);
                                          iVar1 = test_true("test/wpackettest.c",0x1ed,
                                                            "WPACKET_quic_write_vlint(&pkt, 0x41)",
                                                            iVar1 != 0);
                                          if (iVar1 != 0) {
                                            iVar1 = WPACKET_finish(local_78);
                                            iVar1 = test_false("test/wpackettest.c",0x1ee,
                                                               "WPACKET_finish(&pkt)",iVar1 != 0);
                                            if (iVar1 != 0) {
                                              iVar1 = WPACKET_close(local_78);
                                              iVar1 = test_true("test/wpackettest.c",0x1ef,
                                                                "WPACKET_close(&pkt)",iVar1 != 0);
                                              if (iVar1 != 0) {
                                                iVar1 = WPACKET_close(local_78);
                                                iVar1 = test_false("test/wpackettest.c",0x1f0,
                                                                   "WPACKET_close(&pkt)",iVar1 != 0)
                                                ;
                                                if (iVar1 != 0) {
                                                  iVar1 = WPACKET_finish(local_78);
                                                  iVar1 = test_true("test/wpackettest.c",0x1f1,
                                                                    "WPACKET_finish(&pkt)",
                                                                    iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = WPACKET_get_total_written
                                                                      (local_78,&local_90);
                                                    iVar1 = test_true("test/wpackettest.c",0x1f2,
                                                                                                                                            
                                                  "WPACKET_get_total_written(&pkt, &written)",
                                                  iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    uVar4 = 4;
                                                    iVar1 = test_mem_eq("test/wpackettest.c",499,
                                                                        "buf->data","quic3",
                                                                        *(undefined8 *)(buf + 8),
                                                                        local_90,&quic3);
                                                    if (iVar1 != 0) {
                                                      iVar1 = WPACKET_init(local_78,buf,uVar4);
                                                      iVar1 = test_true("test/wpackettest.c",0x1f7,
                                                                        "WPACKET_init(&pkt, buf)",
                                                                        iVar1 != 0);
                                                      if (iVar1 != 0) {
                                                        iVar1 = WPACKET_start_quic_sub_packet_bound
                                                                          (local_78,0x40000000);
                                                        iVar1 = test_true("test/wpackettest.c",0x1f8
                                                                          ,
                                                  "WPACKET_start_quic_sub_packet_bound(&pkt, OSSL_QUIC_VLINT_8B_MIN)"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = WPACKET_quic_write_vlint
                                                                      (local_78,0x13c6a);
                                                    iVar1 = test_true("test/wpackettest.c",0x1f9,
                                                                                                                                            
                                                  "WPACKET_quic_write_vlint(&pkt, 0x13c6a)",
                                                  iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = WPACKET_finish(local_78);
                                                    iVar1 = test_false("test/wpackettest.c",0x1fa,
                                                                       "WPACKET_finish(&pkt)",
                                                                       iVar1 != 0);
                                                    if (iVar1 != 0) {
                                                      iVar1 = WPACKET_close(local_78);
                                                      iVar1 = test_true("test/wpackettest.c",0x1fb,
                                                                        "WPACKET_close(&pkt)",
                                                                        iVar1 != 0);
                                                      if (iVar1 != 0) {
                                                        iVar1 = WPACKET_close(local_78);
                                                        iVar1 = test_false("test/wpackettest.c",
                                                                           0x1fc,
                                                  "WPACKET_close(&pkt)",iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = WPACKET_finish(local_78);
                                                    iVar1 = test_true("test/wpackettest.c",0x1fd,
                                                                      "WPACKET_finish(&pkt)",
                                                                      iVar1 != 0);
                                                    if (iVar1 != 0) {
                                                      iVar1 = WPACKET_get_total_written
                                                                        (local_78,&local_90);
                                                      iVar1 = test_true("test/wpackettest.c",0x1fe,
                                                                                                                                                
                                                  "WPACKET_get_total_written(&pkt, &written)",
                                                  iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = test_mem_eq("test/wpackettest.c",0x1ff,
                                                                        "buf->data","quic4",
                                                                        *(undefined8 *)(buf + 8),
                                                                        local_90,quic4,0xc);
                                                    if (iVar1 != 0) {
                                                      iVar1 = WPACKET_init(local_78,buf);
                                                      iVar1 = test_true("test/wpackettest.c",0x203,
                                                                        "WPACKET_init(&pkt, buf)",
                                                                        iVar1 != 0);
                                                      if (iVar1 != 0) {
                                                        iVar1 = WPACKET_start_quic_sub_packet_bound
                                                                          (local_78,0x40000000);
                                                        iVar1 = test_true("test/wpackettest.c",0x204
                                                                          ,
                                                  "WPACKET_start_quic_sub_packet_bound(&pkt, OSSL_QUIC_VLINT_8B_MIN)"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = WPACKET_quic_write_vlint
                                                                      (local_78,0x2f77213f3f505ba5);
                                                    iVar1 = test_true("test/wpackettest.c",0x205,
                                                                                                                                            
                                                  "WPACKET_quic_write_vlint(&pkt, 0x2f77213f3f505ba5ULL)"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = WPACKET_finish(local_78);
                                                    iVar1 = test_false("test/wpackettest.c",0x206,
                                                                       "WPACKET_finish(&pkt)",
                                                                       iVar1 != 0);
                                                    if (iVar1 != 0) {
                                                      iVar1 = WPACKET_close(local_78);
                                                      iVar1 = test_true("test/wpackettest.c",0x207,
                                                                        "WPACKET_close(&pkt)",
                                                                        iVar1 != 0);
                                                      if (iVar1 != 0) {
                                                        iVar1 = WPACKET_close(local_78);
                                                        iVar1 = test_false("test/wpackettest.c",
                                                                           0x208,
                                                  "WPACKET_close(&pkt)",iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = WPACKET_finish(local_78);
                                                    iVar1 = test_true("test/wpackettest.c",0x209,
                                                                      "WPACKET_finish(&pkt)",
                                                                      iVar1 != 0);
                                                    if (iVar1 != 0) {
                                                      iVar1 = WPACKET_get_total_written
                                                                        (local_78,&local_90);
                                                      iVar1 = test_true("test/wpackettest.c",0x20a,
                                                                                                                                                
                                                  "WPACKET_get_total_written(&pkt, &written)",
                                                  iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = test_mem_eq("test/wpackettest.c",0x20b,
                                                                        "buf->data","quic5",
                                                                        *(undefined8 *)(buf + 8),
                                                                        local_90);
                                                    if (iVar1 != 0) {
                                                      iVar1 = WPACKET_init(local_78,buf);
                                                      iVar1 = test_true("test/wpackettest.c",0x20f,
                                                                        "WPACKET_init(&pkt, buf)",
                                                                        iVar1 != 0);
                                                      if (iVar1 != 0) {
                                                        iVar1 = WPACKET_quic_sub_allocate_bytes
                                                                          (local_78,3,&local_80);
                                                        iVar1 = test_true("test/wpackettest.c",0x210
                                                                          ,
                                                  "WPACKET_quic_sub_allocate_bytes(&pkt, 3, &bytes)"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    *local_80 = 0x55;
                                                    local_80[1] = 0x66;
                                                    local_80[2] = 0x77;
                                                    iVar1 = WPACKET_finish(local_78);
                                                    iVar1 = test_true("test/wpackettest.c",0x217,
                                                                      "WPACKET_finish(&pkt)",
                                                                      iVar1 != 0);
                                                    if (iVar1 != 0) {
                                                      iVar1 = WPACKET_get_total_written
                                                                        (local_78,&local_90);
                                                      iVar1 = test_true("test/wpackettest.c",0x218,
                                                                                                                                                
                                                  "WPACKET_get_total_written(&pkt, &written)",
                                                  iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = test_mem_eq("test/wpackettest.c",0x219,
                                                                        "buf->data","quic6",
                                                                        *(undefined8 *)(buf + 8),
                                                                        local_90,&quic6,4);
                                                    if (iVar1 != 0) {
                                                      iVar1 = WPACKET_init(local_78,buf);
                                                      iVar1 = test_true("test/wpackettest.c",0x21d,
                                                                        "WPACKET_init(&pkt, buf)",
                                                                        iVar1 != 0);
                                                      if (iVar1 != 0) {
                                                        iVar1 = WPACKET_quic_write_vlint(local_78,7)
                                                        ;
                                                        iVar1 = test_true("test/wpackettest.c",0x21e
                                                                          ,
                                                  "WPACKET_quic_write_vlint(&pkt, 0x07)",iVar1 != 0)
                                                  ;
                                                  if (iVar1 != 0) {
                                                    iVar1 = WPACKET_get_length(local_78,&local_88);
                                                    iVar1 = test_true("test/wpackettest.c",0x21f,
                                                                                                                                            
                                                  "WPACKET_get_length(&pkt, &len)",iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = test_size_t_eq("test/wpackettest.c",
                                                                           0x220,&_LC31,&_LC30,
                                                                           local_88,1);
                                                    if (iVar1 != 0) {
                                                      iVar1 = WPACKET_start_quic_sub_packet_bound
                                                                        (local_78,0x4000);
                                                      iVar1 = test_true("test/wpackettest.c",0x221,
                                                                                                                                                
                                                  "WPACKET_start_quic_sub_packet_bound(&pkt, OSSL_QUIC_VLINT_4B_MIN)"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = WPACKET_quic_write_vlint
                                                                      (local_78,0x2514);
                                                    iVar1 = test_true("test/wpackettest.c",0x222,
                                                                                                                                            
                                                  "WPACKET_quic_write_vlint(&pkt, 0x2514)",
                                                  iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = WPACKET_get_length(local_78,&local_88);
                                                    iVar1 = test_true("test/wpackettest.c",0x223,
                                                                                                                                            
                                                  "WPACKET_get_length(&pkt, &len)",iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = test_size_t_eq("test/wpackettest.c",
                                                                           0x224,&_LC31,&_LC34,
                                                                           local_88,2);
                                                    if (iVar1 != 0) {
                                                      iVar1 = WPACKET_start_quic_sub_packet_bound
                                                                        (local_78,0x40);
                                                      iVar1 = test_true("test/wpackettest.c",0x225,
                                                                                                                                                
                                                  "WPACKET_start_quic_sub_packet_bound(&pkt, OSSL_QUIC_VLINT_2B_MIN)"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = WPACKET_quic_write_vlint(local_78,5);
                                                    iVar1 = test_true("test/wpackettest.c",0x226,
                                                                                                                                            
                                                  "WPACKET_quic_write_vlint(&pkt, 0x05)",iVar1 != 0)
                                                  ;
                                                  if (iVar1 != 0) {
                                                    iVar1 = WPACKET_get_length(local_78,&local_88);
                                                    iVar1 = test_true("test/wpackettest.c",0x227,
                                                                                                                                            
                                                  "WPACKET_get_length(&pkt, &len)",iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = test_size_t_eq("test/wpackettest.c",
                                                                           0x228,&_LC31,&_LC30,
                                                                           local_88,1);
                                                    if (iVar1 != 0) {
                                                      iVar1 = WPACKET_close(local_78);
                                                      iVar1 = test_true("test/wpackettest.c",0x229,
                                                                        "WPACKET_close(&pkt)",
                                                                        iVar1 != 0);
                                                      if (iVar1 != 0) {
                                                        iVar1 = WPACKET_start_quic_sub_packet_bound
                                                                          (local_78,0x40);
                                                        iVar1 = test_true("test/wpackettest.c",0x22a
                                                                          ,
                                                  "WPACKET_start_quic_sub_packet_bound(&pkt, OSSL_QUIC_VLINT_2B_MIN)"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = WPACKET_quic_write_vlint(local_78,0x11);
                                                    iVar1 = test_true("test/wpackettest.c",0x22b,
                                                                                                                                            
                                                  "WPACKET_quic_write_vlint(&pkt, 0x11)",iVar1 != 0)
                                                  ;
                                                  if (iVar1 != 0) {
                                                    iVar1 = WPACKET_close(local_78);
                                                    iVar1 = test_true("test/wpackettest.c",0x22c,
                                                                      "WPACKET_close(&pkt)",
                                                                      iVar1 != 0);
                                                    if (iVar1 != 0) {
                                                      iVar1 = WPACKET_get_length(local_78,&local_88)
                                                      ;
                                                      iVar1 = test_true("test/wpackettest.c",0x22d,
                                                                                                                                                
                                                  "WPACKET_get_length(&pkt, &len)",iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = test_size_t_eq("test/wpackettest.c",
                                                                           0x22e,&_LC31,&_LC37,
                                                                           local_88,8);
                                                    if (iVar1 != 0) {
                                                      iVar1 = WPACKET_close(local_78);
                                                      iVar1 = test_true("test/wpackettest.c",0x22f,
                                                                        "WPACKET_close(&pkt)",
                                                                        iVar1 != 0);
                                                      if (iVar1 != 0) {
                                                        iVar1 = WPACKET_start_quic_sub_packet_bound
                                                                          (local_78,0x40);
                                                        iVar1 = test_true("test/wpackettest.c",0x230
                                                                          ,
                                                  "WPACKET_start_quic_sub_packet_bound(&pkt, OSSL_QUIC_VLINT_2B_MIN)"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = WPACKET_quic_write_vlint(local_78,0x12);
                                                    iVar1 = test_true("test/wpackettest.c",0x231,
                                                                                                                                            
                                                  "WPACKET_quic_write_vlint(&pkt, 0x12)",iVar1 != 0)
                                                  ;
                                                  if (iVar1 != 0) {
                                                    iVar1 = WPACKET_close(local_78);
                                                    iVar1 = test_true("test/wpackettest.c",0x232,
                                                                      "WPACKET_close(&pkt)",
                                                                      iVar1 != 0);
                                                    if (iVar1 != 0) {
                                                      iVar1 = WPACKET_start_quic_sub_packet_bound
                                                                        (local_78,0x40);
                                                      iVar1 = test_true("test/wpackettest.c",0x233,
                                                                                                                                                
                                                  "WPACKET_start_quic_sub_packet_bound(&pkt, OSSL_QUIC_VLINT_2B_MIN)"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = WPACKET_quic_write_vlint(local_78,0x13);
                                                    iVar1 = test_true("test/wpackettest.c",0x234,
                                                                                                                                            
                                                  "WPACKET_quic_write_vlint(&pkt, 0x13)",iVar1 != 0)
                                                  ;
                                                  if (iVar1 != 0) {
                                                    iVar1 = WPACKET_close(local_78);
                                                    iVar1 = test_true("test/wpackettest.c",0x235,
                                                                      "WPACKET_close(&pkt)",
                                                                      iVar1 != 0);
                                                    if (iVar1 != 0) {
                                                      iVar1 = WPACKET_finish(local_78);
                                                      iVar1 = test_true("test/wpackettest.c",0x236,
                                                                        "WPACKET_finish(&pkt)",
                                                                        iVar1 != 0);
                                                      if (iVar1 != 0) {
                                                        iVar1 = WPACKET_get_total_written
                                                                          (local_78,&local_90);
                                                        iVar1 = test_true("test/wpackettest.c",0x237
                                                                          ,
                                                  "WPACKET_get_total_written(&pkt, &written)",
                                                  iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    uVar4 = 0x13;
                                                    puVar3 = quic7;
                                                    iVar1 = test_mem_eq("test/wpackettest.c",0x238,
                                                                        "buf->data","quic7",
                                                                        *(undefined8 *)(buf + 8),
                                                                        local_90);
                                                    if (iVar1 != 0) {
                                                      iVar1 = WPACKET_init(local_78,buf,puVar3,uVar4
                                                                          );
                                                      iVar1 = test_true("test/wpackettest.c",0x23c,
                                                                        "WPACKET_init(&pkt, buf)",
                                                                        iVar1 != 0);
                                                      if (iVar1 != 0) {
                                                        iVar1 = WPACKET_quic_write_vlint
                                                                          (local_78,
                                                  0x4000000000000000);
                                                  iVar1 = test_false("test/wpackettest.c",0x23d,
                                                                                                                                          
                                                  "WPACKET_quic_write_vlint(&pkt, OSSL_QUIC_VLINT_MAX+1)"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = WPACKET_quic_write_vlint
                                                                      (local_78,0x3fffffffffffffff);
                                                    iVar1 = test_true("test/wpackettest.c",0x23e,
                                                                                                                                            
                                                  "WPACKET_quic_write_vlint(&pkt, OSSL_QUIC_VLINT_MAX)"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    WPACKET_cleanup(local_78);
                                                    uVar4 = 1;
                                                    goto LAB_00100350;
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
  WPACKET_cleanup(local_78);
  uVar4 = 0;
LAB_00100350:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool test_WPACKET_init_der(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  long in_FS_OFFSET;
  bool bVar6;
  undefined8 *local_5e8;
  undefined8 local_5c8;
  undefined8 local_5c0;
  undefined1 local_5b8 [64];
  undefined8 local_578;
  undefined8 local_570;
  undefined4 local_55c;
  undefined8 local_558;
  undefined8 local_550;
  undefined8 local_548;
  undefined1 local_448 [1032];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_55c = 0x3020100;
  local_558 = 0x182;
  local_550 = 0;
  puVar5 = &local_548;
  for (lVar4 = 0x1e; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined2 *)puVar5 = 0;
  *(undefined1 *)((long)puVar5 + 2) = 0;
  iVar1 = WPACKET_init_der(local_5b8,local_448,0x400);
  iVar1 = test_true("test/wpackettest.c",0x18c,"WPACKET_init_der(&pkt, sbuf, sizeof(sbuf))",
                    iVar1 != 0);
  if (iVar1 != 0) {
    iVar1 = WPACKET_put_bytes__(local_5b8,0xfffefd,3);
    iVar1 = test_true("test/wpackettest.c",0x18d,"WPACKET_put_bytes_u24(&pkt, 0xfffefd)",iVar1 != 0)
    ;
    if (iVar1 != 0) {
      iVar1 = WPACKET_start_sub_packet(local_5b8);
      iVar1 = test_true("test/wpackettest.c",399,"WPACKET_start_sub_packet(&pkt)",iVar1 != 0);
      if (iVar1 != 0) {
        iVar1 = WPACKET_memcpy(local_5b8,&local_55c,4);
        iVar1 = test_true("test/wpackettest.c",400,
                          "WPACKET_memcpy(&pkt, testdata, sizeof(testdata))",iVar1 != 0);
        if (iVar1 != 0) {
          iVar1 = WPACKET_close(local_5b8);
          iVar1 = test_true("test/wpackettest.c",0x191,"WPACKET_close(&pkt)",iVar1 != 0);
          if (iVar1 != 0) {
            iVar1 = WPACKET_put_bytes__(local_5b8,0xfc,1);
            iVar1 = test_true("test/wpackettest.c",0x192,"WPACKET_put_bytes_u8(&pkt, 0xfc)",
                              iVar1 != 0);
            if (iVar1 != 0) {
              iVar1 = WPACKET_start_sub_packet(local_5b8);
              iVar1 = test_true("test/wpackettest.c",0x194,"WPACKET_start_sub_packet(&pkt)",
                                iVar1 != 0);
              if (iVar1 != 0) {
                iVar1 = WPACKET_set_flags(local_5b8,2);
                iVar1 = test_true("test/wpackettest.c",0x195,"WPACKET_set_flags(&pkt, flags)",
                                  iVar1 != 0);
                if (iVar1 != 0) {
                  iVar1 = WPACKET_get_total_written(local_5b8,&local_5c8);
                  iVar1 = test_true("test/wpackettest.c",0x196,
                                    "WPACKET_get_total_written(&pkt, &size1)",iVar1 != 0);
                  if (iVar1 != 0) {
                    iVar1 = WPACKET_close(local_5b8);
                    iVar1 = test_true("test/wpackettest.c",0x197,"WPACKET_close(&pkt)",iVar1 != 0);
                    if (iVar1 != 0) {
                      iVar1 = WPACKET_get_total_written(local_5b8,&local_5c0);
                      iVar1 = test_true("test/wpackettest.c",0x198,
                                        "WPACKET_get_total_written(&pkt, &size2)",iVar1 != 0);
                      if ((iVar1 != 0) &&
                         (iVar1 = test_size_t_eq("test/wpackettest.c",0x199,"size1","size2",
                                                 local_5c8,local_5c0), iVar1 != 0)) {
                        iVar1 = WPACKET_finish(local_5b8);
                        iVar1 = test_true("test/wpackettest.c",0x19a,"WPACKET_finish(&pkt)",
                                          iVar1 != 0);
                        if (iVar1 != 0) {
                          local_5e8 = &local_578;
                          iVar1 = WPACKET_get_total_written(local_5b8,local_5e8);
                          iVar1 = test_true("test/wpackettest.c",0x19b,
                                            "WPACKET_get_total_written(&pkt, &written[0])",
                                            iVar1 != 0);
                          uVar3 = local_578;
                          if (iVar1 != 0) {
                            uVar2 = WPACKET_get_curr(local_5b8);
                            iVar1 = test_mem_eq("test/wpackettest.c",0x19c,"WPACKET_get_curr(&pkt)",
                                                "simpleder",uVar2,uVar3,simpleder,9);
                            if (iVar1 != 0) {
                              iVar1 = RAND_bytes((uchar *)((long)&local_558 + 3),0x100);
                              iVar1 = test_int_gt("test/wpackettest.c",0x1a1,
                                                  "RAND_bytes(&testdata2[3], sizeof(testdata2) - 3)"
                                                  ,&_LC0,iVar1,0);
                              if (iVar1 != 0) {
                                iVar1 = WPACKET_init_null_der(local_5b8);
                                iVar1 = test_true("test/wpackettest.c",0x1ab,
                                                  "WPACKET_init_null_der(&pkt)",iVar1 != 0);
                                if (iVar1 != 0) {
                                  bVar6 = false;
                                  do {
                                    iVar1 = WPACKET_start_sub_packet(local_5b8);
                                    iVar1 = test_true("test/wpackettest.c",0x1b1,
                                                      "WPACKET_start_sub_packet(&pkt)",iVar1 != 0);
                                    if (iVar1 == 0) goto LAB_001012ed;
                                    iVar1 = WPACKET_memcpy(local_5b8,(uchar *)((long)&local_558 + 3)
                                                           ,0x100);
                                    iVar1 = test_true("test/wpackettest.c",0x1b2,
                                                                                                            
                                                  "WPACKET_memcpy(&pkt, &testdata2[3], sizeof(testdata2) - 3)"
                                                  ,iVar1 != 0);
                                    if (iVar1 == 0) goto LAB_001012ed;
                                    iVar1 = WPACKET_close(local_5b8);
                                    iVar1 = test_true("test/wpackettest.c",0x1b4,
                                                      "WPACKET_close(&pkt)",iVar1 != 0);
                                    if (iVar1 == 0) goto LAB_001012ed;
                                    iVar1 = WPACKET_finish(local_5b8);
                                    iVar1 = test_true("test/wpackettest.c",0x1b5,
                                                      "WPACKET_finish(&pkt)",iVar1 != 0);
                                    if (iVar1 == 0) goto LAB_001012ed;
                                    iVar1 = WPACKET_get_total_written(local_5b8,local_5e8);
                                    iVar1 = test_true("test/wpackettest.c",0x1b6,
                                                      "WPACKET_get_total_written(&pkt, &written[i])"
                                                      ,iVar1 != 0);
                                    if (iVar1 == 0) goto LAB_001012ed;
                                    local_5e8 = local_5e8 + 1;
                                    if (bVar6) {
                                      iVar1 = test_size_t_eq("test/wpackettest.c",0x1bf,"written[0]"
                                                             ,"written[1]",local_578,local_570);
                                      if (iVar1 != 0) {
                                        uVar3 = WPACKET_get_curr(local_5b8);
                                        iVar1 = test_mem_eq("test/wpackettest.c",0x1c0,
                                                            "WPACKET_get_curr(&pkt)","testdata2",
                                                            uVar3,local_570,&local_558,0x103);
                                        bVar6 = iVar1 != 0;
                                        goto LAB_001012f7;
                                      }
                                      break;
                                    }
                                    iVar1 = WPACKET_init_der(local_5b8,local_448,0x400);
                                    iVar1 = test_true("test/wpackettest.c",0x1ae,
                                                      "WPACKET_init_der(&pkt, sbuf, sizeof(sbuf))",
                                                      iVar1 != 0);
                                    bVar6 = true;
                                  } while (iVar1 != 0);
                                }
                              }
                              goto LAB_001012f5;
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
LAB_001012ed:
  WPACKET_cleanup(local_5b8);
LAB_001012f5:
  bVar6 = false;
LAB_001012f7:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar6;
}



undefined8 test_WPACKET_memcpy(void)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined1 local_88 [70];
  undefined2 local_42;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_42 = 0xfffe;
  iVar1 = WPACKET_init_len(local_88,buf,1);
  iVar1 = test_true("test/wpackettest.c",0x16e,"WPACKET_init_len(&pkt, buf, 1)",iVar1 != 0);
  if (iVar1 != 0) {
    iVar1 = WPACKET_memcpy(local_88,&local_42,2);
    iVar1 = test_true("test/wpackettest.c",0x16f,"WPACKET_memcpy(&pkt, bytes, sizeof(bytes))",
                      iVar1 != 0);
    if (iVar1 != 0) {
      iVar1 = WPACKET_finish(local_88);
      iVar1 = test_true("test/wpackettest.c",0x170,"WPACKET_finish(&pkt)",iVar1 != 0);
      if (iVar1 != 0) {
        iVar1 = WPACKET_get_total_written(local_88,&local_90);
        iVar1 = test_true("test/wpackettest.c",0x171,"WPACKET_get_total_written(&pkt, &written)",
                          iVar1 != 0);
        if (iVar1 != 0) {
          iVar1 = test_mem_eq("test/wpackettest.c",0x172,"buf->data","alloc",
                              *(undefined8 *)(buf + 8),local_90,&alloc,3);
          if (iVar1 != 0) {
            iVar1 = WPACKET_init_len(local_88,buf,1);
            iVar1 = test_true("test/wpackettest.c",0x176,"WPACKET_init_len(&pkt, buf, 1)",iVar1 != 0
                             );
            if (iVar1 != 0) {
              iVar1 = WPACKET_sub_memcpy__(local_88,&local_42,2,1);
              iVar1 = test_true("test/wpackettest.c",0x177,
                                "WPACKET_sub_memcpy_u8(&pkt, bytes, sizeof(bytes))",iVar1 != 0);
              if (iVar1 != 0) {
                iVar1 = WPACKET_finish(local_88);
                iVar1 = test_true("test/wpackettest.c",0x178,"WPACKET_finish(&pkt)",iVar1 != 0);
                if (iVar1 != 0) {
                  iVar1 = WPACKET_get_total_written(local_88,&local_90);
                  iVar1 = test_true("test/wpackettest.c",0x179,
                                    "WPACKET_get_total_written(&pkt, &written)",iVar1 != 0);
                  if (iVar1 != 0) {
                    iVar1 = test_mem_eq("test/wpackettest.c",0x17a,"buf->data","submem",
                                        *(undefined8 *)(buf + 8),local_90,&submem,4);
                    if (iVar1 != 0) {
                      uVar2 = 1;
                      goto LAB_0010186e;
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
  WPACKET_cleanup(local_88);
  uVar2 = 0;
LAB_0010186e:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 test_WPACKET_allocate_bytes(void)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined8 local_88;
  undefined1 *local_80;
  undefined1 local_78 [56];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = WPACKET_init_len(local_78,buf,1);
  iVar1 = test_true("test/wpackettest.c",0x150,"WPACKET_init_len(&pkt, buf, 1)",iVar1 != 0);
  if (iVar1 != 0) {
    iVar1 = WPACKET_allocate_bytes(local_78,2,&local_80);
    iVar1 = test_true("test/wpackettest.c",0x151,"WPACKET_allocate_bytes(&pkt, 2, &bytes)",
                      iVar1 != 0);
    if (iVar1 != 0) {
      *local_80 = 0xfe;
      local_80[1] = 0xff;
      iVar1 = WPACKET_finish(local_78);
      iVar1 = test_true("test/wpackettest.c",0x155,"WPACKET_finish(&pkt)",iVar1 != 0);
      if (iVar1 != 0) {
        iVar1 = WPACKET_get_total_written(local_78,&local_88);
        iVar1 = test_true("test/wpackettest.c",0x156,"WPACKET_get_total_written(&pkt, &written)",
                          iVar1 != 0);
        if (iVar1 != 0) {
          iVar1 = test_mem_eq("test/wpackettest.c",0x157,"buf->data","alloc",
                              *(undefined8 *)(buf + 8),local_88,&alloc,3);
          if (iVar1 != 0) {
            iVar1 = WPACKET_init_len(local_78,buf,1);
            iVar1 = test_true("test/wpackettest.c",0x15b,"WPACKET_init_len(&pkt, buf, 1)",iVar1 != 0
                             );
            if (iVar1 != 0) {
              iVar1 = WPACKET_sub_allocate_bytes__(local_78,2,&local_80,1);
              iVar1 = test_true("test/wpackettest.c",0x15c,
                                "WPACKET_sub_allocate_bytes_u8(&pkt, 2, &bytes)",iVar1 != 0);
              if (iVar1 != 0) {
                *local_80 = 0xfe;
                local_80[1] = 0xff;
                iVar1 = WPACKET_finish(local_78);
                iVar1 = test_true("test/wpackettest.c",0x160,"WPACKET_finish(&pkt)",iVar1 != 0);
                if (iVar1 != 0) {
                  iVar1 = WPACKET_get_total_written(local_78,&local_88);
                  iVar1 = test_true("test/wpackettest.c",0x161,
                                    "WPACKET_get_total_written(&pkt, &written)",iVar1 != 0);
                  if (iVar1 != 0) {
                    iVar1 = test_mem_eq("test/wpackettest.c",0x162,"buf->data","submem",
                                        *(undefined8 *)(buf + 8),local_88,&submem,4);
                    if (iVar1 != 0) {
                      uVar2 = 1;
                      goto LAB_00101af2;
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
  WPACKET_cleanup(local_78);
  uVar2 = 0;
LAB_00101af2:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 test_WPACKET_set_flags(void)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined8 local_80;
  undefined1 local_78 [56];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = WPACKET_init(local_78,buf);
  iVar1 = test_true("test/wpackettest.c",0x114,"WPACKET_init(&pkt, buf)",iVar1 != 0);
  if (iVar1 != 0) {
    iVar1 = WPACKET_set_flags(local_78,1);
    iVar1 = test_true("test/wpackettest.c",0x115,
                      "WPACKET_set_flags(&pkt, WPACKET_FLAGS_NON_ZERO_LENGTH)",iVar1 != 0);
    if (iVar1 != 0) {
      iVar1 = WPACKET_finish(local_78);
      iVar1 = test_false("test/wpackettest.c",0x117,"WPACKET_finish(&pkt)",iVar1 != 0);
      if (iVar1 != 0) {
        iVar1 = WPACKET_put_bytes__(local_78,0xff,1);
        iVar1 = test_true("test/wpackettest.c",0x118,"WPACKET_put_bytes_u8(&pkt, 0xff)",iVar1 != 0);
        if (iVar1 != 0) {
          iVar1 = WPACKET_finish(local_78);
          iVar1 = test_true("test/wpackettest.c",0x119,"WPACKET_finish(&pkt)",iVar1 != 0);
          if (iVar1 != 0) {
            iVar1 = WPACKET_get_total_written(local_78,&local_80);
            iVar1 = test_true("test/wpackettest.c",0x11a,"WPACKET_get_total_written(&pkt, &written)"
                              ,iVar1 != 0);
            if (iVar1 != 0) {
              iVar1 = test_mem_eq("test/wpackettest.c",0x11b,"buf->data","simple1",
                                  *(undefined8 *)(buf + 8),local_80,&simple1,1);
              if (iVar1 != 0) {
                iVar1 = WPACKET_init(local_78,buf);
                iVar1 = test_true("test/wpackettest.c",0x11f,"WPACKET_init(&pkt, buf)",iVar1 != 0);
                if (iVar1 != 0) {
                  iVar1 = WPACKET_start_sub_packet(local_78);
                  iVar1 = test_true("test/wpackettest.c",0x120,"WPACKET_start_sub_packet(&pkt)",
                                    iVar1 != 0);
                  if (iVar1 != 0) {
                    iVar1 = WPACKET_set_flags(local_78,1);
                    iVar1 = test_true("test/wpackettest.c",0x121,
                                      "WPACKET_set_flags(&pkt, WPACKET_FLAGS_NON_ZERO_LENGTH)",
                                      iVar1 != 0);
                    if (iVar1 != 0) {
                      iVar1 = WPACKET_close(local_78);
                      iVar1 = test_false("test/wpackettest.c",0x123,"WPACKET_close(&pkt)",iVar1 != 0
                                        );
                      if (iVar1 != 0) {
                        iVar1 = WPACKET_put_bytes__(local_78,0xff,1);
                        iVar1 = test_true("test/wpackettest.c",0x124,
                                          "WPACKET_put_bytes_u8(&pkt, 0xff)",iVar1 != 0);
                        if (iVar1 != 0) {
                          iVar1 = WPACKET_close(local_78);
                          iVar1 = test_true("test/wpackettest.c",0x125,"WPACKET_close(&pkt)",
                                            iVar1 != 0);
                          if (iVar1 != 0) {
                            iVar1 = WPACKET_finish(local_78);
                            iVar1 = test_true("test/wpackettest.c",0x126,"WPACKET_finish(&pkt)",
                                              iVar1 != 0);
                            if (iVar1 != 0) {
                              iVar1 = WPACKET_get_total_written(local_78,&local_80);
                              iVar1 = test_true("test/wpackettest.c",0x127,
                                                "WPACKET_get_total_written(&pkt, &written)",
                                                iVar1 != 0);
                              if (iVar1 != 0) {
                                iVar1 = test_mem_eq("test/wpackettest.c",0x128,"buf->data","simple1"
                                                    ,*(undefined8 *)(buf + 8),local_80);
                                if (iVar1 != 0) {
                                  iVar1 = WPACKET_init_len(local_78,buf,1);
                                  iVar1 = test_true("test/wpackettest.c",300,
                                                    "WPACKET_init_len(&pkt, buf, 1)",iVar1 != 0);
                                  if (iVar1 != 0) {
                                    iVar1 = WPACKET_set_flags(local_78,2);
                                    iVar1 = test_true("test/wpackettest.c",0x12d,
                                                                                                            
                                                  "WPACKET_set_flags(&pkt, WPACKET_FLAGS_ABANDON_ON_ZERO_LENGTH)"
                                                  ,iVar1 != 0);
                                    if (iVar1 != 0) {
                                      iVar1 = WPACKET_finish(local_78);
                                      iVar1 = test_true("test/wpackettest.c",0x12e,
                                                        "WPACKET_finish(&pkt)",iVar1 != 0);
                                      if (iVar1 != 0) {
                                        iVar1 = WPACKET_get_total_written(local_78,&local_80);
                                        iVar1 = test_true("test/wpackettest.c",0x12f,
                                                                                                                    
                                                  "WPACKET_get_total_written(&pkt, &written)",
                                                  iVar1 != 0);
                                        if (iVar1 != 0) {
                                          iVar1 = test_size_t_eq("test/wpackettest.c",0x130,
                                                                 "written",&_LC0,local_80,0);
                                          if (iVar1 != 0) {
                                            iVar1 = WPACKET_init_len(local_78,buf,1);
                                            iVar1 = test_true("test/wpackettest.c",0x134,
                                                              "WPACKET_init_len(&pkt, buf, 1)",
                                                              iVar1 != 0);
                                            if (iVar1 != 0) {
                                              iVar1 = WPACKET_start_sub_packet_len__(local_78,1);
                                              iVar1 = test_true("test/wpackettest.c",0x135,
                                                                "WPACKET_start_sub_packet_u8(&pkt)",
                                                                iVar1 != 0);
                                              if (iVar1 != 0) {
                                                iVar1 = WPACKET_set_flags(local_78,2);
                                                iVar1 = test_true("test/wpackettest.c",0x136,
                                                                                                                                    
                                                  "WPACKET_set_flags(&pkt, WPACKET_FLAGS_ABANDON_ON_ZERO_LENGTH)"
                                                  ,iVar1 != 0);
                                                if (iVar1 != 0) {
                                                  iVar1 = WPACKET_close(local_78);
                                                  iVar1 = test_true("test/wpackettest.c",0x137,
                                                                    "WPACKET_close(&pkt)",iVar1 != 0
                                                                   );
                                                  if (iVar1 != 0) {
                                                    iVar1 = WPACKET_finish(local_78);
                                                    iVar1 = test_true("test/wpackettest.c",0x138,
                                                                      "WPACKET_finish(&pkt)",
                                                                      iVar1 != 0);
                                                    if (iVar1 != 0) {
                                                      iVar1 = WPACKET_get_total_written
                                                                        (local_78,&local_80);
                                                      iVar1 = test_true("test/wpackettest.c",0x139,
                                                                                                                                                
                                                  "WPACKET_get_total_written(&pkt, &written)",
                                                  iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = test_mem_eq("test/wpackettest.c",0x13a,
                                                                        "buf->data","empty",
                                                                        *(undefined8 *)(buf + 8),
                                                                        local_80,&empty,1);
                                                    if (iVar1 != 0) {
                                                      iVar1 = WPACKET_init(local_78,buf);
                                                      iVar1 = test_true("test/wpackettest.c",0x13e,
                                                                        "WPACKET_init(&pkt, buf)",
                                                                        iVar1 != 0);
                                                      if (iVar1 != 0) {
                                                        iVar1 = WPACKET_start_sub_packet_len__
                                                                          (local_78,1);
                                                        iVar1 = test_true("test/wpackettest.c",0x13f
                                                                          ,
                                                  "WPACKET_start_sub_packet_u8(&pkt)",iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = WPACKET_set_flags(local_78,2);
                                                    iVar1 = test_true("test/wpackettest.c",0x140,
                                                                                                                                            
                                                  "WPACKET_set_flags(&pkt, WPACKET_FLAGS_ABANDON_ON_ZERO_LENGTH)"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = WPACKET_put_bytes__(local_78,0xff,1);
                                                    iVar1 = test_true("test/wpackettest.c",0x141,
                                                                                                                                            
                                                  "WPACKET_put_bytes_u8(&pkt, 0xff)",iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = WPACKET_close(local_78);
                                                    iVar1 = test_true("test/wpackettest.c",0x142,
                                                                      "WPACKET_close(&pkt)",
                                                                      iVar1 != 0);
                                                    if (iVar1 != 0) {
                                                      iVar1 = WPACKET_finish(local_78);
                                                      iVar1 = test_true("test/wpackettest.c",0x143,
                                                                        "WPACKET_finish(&pkt)",
                                                                        iVar1 != 0);
                                                      if (iVar1 != 0) {
                                                        iVar1 = WPACKET_get_total_written
                                                                          (local_78,&local_80);
                                                        iVar1 = test_true("test/wpackettest.c",0x144
                                                                          ,
                                                  "WPACKET_get_total_written(&pkt, &written)",
                                                  iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = test_mem_eq("test/wpackettest.c",0x145,
                                                                        "buf->data","simple2",
                                                                        *(undefined8 *)(buf + 8),
                                                                        local_80,&simple2,2);
                                                    if (iVar1 != 0) {
                                                      uVar2 = 1;
                                                      goto LAB_00101d88;
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
    }
  }
  WPACKET_cleanup(local_78);
  uVar2 = 0;
LAB_00101d88:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 test_WPACKET_start_sub_packet(void)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 local_78 [56];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = WPACKET_init(local_78,buf);
  iVar1 = test_true("test/wpackettest.c",0xc2,"WPACKET_init(&pkt, buf)",iVar1 != 0);
  if (iVar1 != 0) {
    iVar1 = WPACKET_start_sub_packet(local_78);
    iVar1 = test_true("test/wpackettest.c",0xc3,"WPACKET_start_sub_packet(&pkt)",iVar1 != 0);
    if (iVar1 != 0) {
      iVar1 = WPACKET_put_bytes__(local_78,0xff,1);
      iVar1 = test_true("test/wpackettest.c",0xc4,"WPACKET_put_bytes_u8(&pkt, 0xff)",iVar1 != 0);
      if (iVar1 != 0) {
        iVar1 = WPACKET_finish(local_78);
        iVar1 = test_false("test/wpackettest.c",0xc6,"WPACKET_finish(&pkt)",iVar1 != 0);
        if (iVar1 != 0) {
          iVar1 = WPACKET_close(local_78);
          iVar1 = test_true("test/wpackettest.c",199,"WPACKET_close(&pkt)",iVar1 != 0);
          if (iVar1 != 0) {
            iVar1 = WPACKET_close(local_78);
            iVar1 = test_false("test/wpackettest.c",0xc9,"WPACKET_close(&pkt)",iVar1 != 0);
            if (iVar1 != 0) {
              iVar1 = WPACKET_finish(local_78);
              iVar1 = test_true("test/wpackettest.c",0xcb,"WPACKET_finish(&pkt)",iVar1 != 0);
              if (iVar1 != 0) {
                iVar1 = WPACKET_get_total_written(local_78,&local_88);
                iVar1 = test_true("test/wpackettest.c",0xcc,
                                  "WPACKET_get_total_written(&pkt, &written)",iVar1 != 0);
                if (iVar1 != 0) {
                  uVar3 = 1;
                  puVar2 = &simple1;
                  iVar1 = test_mem_eq("test/wpackettest.c",0xcd,"buf->data","simple1",
                                      *(undefined8 *)(buf + 8),local_88);
                  if (iVar1 != 0) {
                    iVar1 = WPACKET_init(local_78,buf,puVar2,uVar3);
                    iVar1 = test_true("test/wpackettest.c",0xd1,"WPACKET_init(&pkt, buf)",iVar1 != 0
                                     );
                    if (iVar1 != 0) {
                      iVar1 = WPACKET_start_sub_packet_len__(local_78,1);
                      iVar1 = test_true("test/wpackettest.c",0xd2,
                                        "WPACKET_start_sub_packet_u8(&pkt)",iVar1 != 0);
                      if (iVar1 != 0) {
                        iVar1 = WPACKET_put_bytes__(local_78,0xff,1);
                        iVar1 = test_true("test/wpackettest.c",0xd3,
                                          "WPACKET_put_bytes_u8(&pkt, 0xff)",iVar1 != 0);
                        if (iVar1 != 0) {
                          iVar1 = WPACKET_close(local_78);
                          iVar1 = test_true("test/wpackettest.c",0xd4,"WPACKET_close(&pkt)",
                                            iVar1 != 0);
                          if (iVar1 != 0) {
                            iVar1 = WPACKET_finish(local_78);
                            iVar1 = test_true("test/wpackettest.c",0xd5,"WPACKET_finish(&pkt)",
                                              iVar1 != 0);
                            if (iVar1 != 0) {
                              iVar1 = WPACKET_get_total_written(local_78,&local_88);
                              iVar1 = test_true("test/wpackettest.c",0xd6,
                                                "WPACKET_get_total_written(&pkt, &written)",
                                                iVar1 != 0);
                              if (iVar1 != 0) {
                                iVar1 = test_mem_eq("test/wpackettest.c",0xd7,"buf->data","simple2",
                                                    *(undefined8 *)(buf + 8),local_88,&simple2,2);
                                if (iVar1 != 0) {
                                  iVar1 = WPACKET_init(local_78,buf);
                                  iVar1 = test_true("test/wpackettest.c",0xdb,
                                                    "WPACKET_init(&pkt, buf)",iVar1 != 0);
                                  if (iVar1 != 0) {
                                    iVar1 = WPACKET_start_sub_packet_len__(local_78,1);
                                    iVar1 = test_true("test/wpackettest.c",0xdc,
                                                      "WPACKET_start_sub_packet_u8(&pkt)",iVar1 != 0
                                                     );
                                    if (iVar1 != 0) {
                                      iVar1 = WPACKET_put_bytes__(local_78,0xff,1);
                                      iVar1 = test_true("test/wpackettest.c",0xdd,
                                                        "WPACKET_put_bytes_u8(&pkt, 0xff)",
                                                        iVar1 != 0);
                                      if (iVar1 != 0) {
                                        iVar1 = WPACKET_start_sub_packet_len__(local_78,1);
                                        iVar1 = test_true("test/wpackettest.c",0xde,
                                                          "WPACKET_start_sub_packet_u8(&pkt)",
                                                          iVar1 != 0);
                                        if (iVar1 != 0) {
                                          iVar1 = WPACKET_put_bytes__(local_78,0xff,1);
                                          iVar1 = test_true("test/wpackettest.c",0xdf,
                                                            "WPACKET_put_bytes_u8(&pkt, 0xff)",
                                                            iVar1 != 0);
                                          if (iVar1 != 0) {
                                            iVar1 = WPACKET_get_length(local_78,&local_80);
                                            iVar1 = test_true("test/wpackettest.c",0xe0,
                                                              "WPACKET_get_length(&pkt, &len)",
                                                              iVar1 != 0);
                                            if (iVar1 != 0) {
                                              iVar1 = test_size_t_eq("test/wpackettest.c",0xe1,
                                                                     &_LC31,&_LC30,local_80,1);
                                              if (iVar1 != 0) {
                                                iVar1 = WPACKET_close(local_78);
                                                iVar1 = test_true("test/wpackettest.c",0xe2,
                                                                  "WPACKET_close(&pkt)",iVar1 != 0);
                                                if (iVar1 != 0) {
                                                  iVar1 = WPACKET_get_length(local_78,&local_80);
                                                  iVar1 = test_true("test/wpackettest.c",0xe3,
                                                                    "WPACKET_get_length(&pkt, &len)"
                                                                    ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = test_size_t_eq("test/wpackettest.c",0xe4
                                                                           ,&_LC31,&_LC78,local_80,3
                                                                          );
                                                    if (iVar1 != 0) {
                                                      iVar1 = WPACKET_close(local_78);
                                                      iVar1 = test_true("test/wpackettest.c",0xe5,
                                                                        "WPACKET_close(&pkt)",
                                                                        iVar1 != 0);
                                                      if (iVar1 != 0) {
                                                        iVar1 = WPACKET_finish(local_78);
                                                        iVar1 = test_true("test/wpackettest.c",0xe6,
                                                                          "WPACKET_finish(&pkt)",
                                                                          iVar1 != 0);
                                                        if (iVar1 != 0) {
                                                          iVar1 = WPACKET_get_total_written
                                                                            (local_78,&local_88);
                                                          iVar1 = test_true("test/wpackettest.c",
                                                                            0xe7,
                                                  "WPACKET_get_total_written(&pkt, &written)",
                                                  iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = test_mem_eq("test/wpackettest.c",0xe8,
                                                                        "buf->data","nestedsub",
                                                                        *(undefined8 *)(buf + 8),
                                                                        local_88);
                                                    if (iVar1 != 0) {
                                                      iVar1 = WPACKET_init(local_78,buf);
                                                      iVar1 = test_true("test/wpackettest.c",0xec,
                                                                        "WPACKET_init(&pkt, buf)",
                                                                        iVar1 != 0);
                                                      if (iVar1 != 0) {
                                                        iVar1 = WPACKET_start_sub_packet_len__
                                                                          (local_78,1);
                                                        iVar1 = test_true("test/wpackettest.c",0xed,
                                                                                                                                                    
                                                  "WPACKET_start_sub_packet_u8(&pkt)",iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = WPACKET_put_bytes__(local_78,0xff,1);
                                                    iVar1 = test_true("test/wpackettest.c",0xee,
                                                                                                                                            
                                                  "WPACKET_put_bytes_u8(&pkt, 0xff)",iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = WPACKET_close(local_78);
                                                    iVar1 = test_true("test/wpackettest.c",0xef,
                                                                      "WPACKET_close(&pkt)",
                                                                      iVar1 != 0);
                                                    if (iVar1 != 0) {
                                                      iVar1 = WPACKET_start_sub_packet_len__
                                                                        (local_78,1);
                                                      iVar1 = test_true("test/wpackettest.c",0xf0,
                                                                                                                                                
                                                  "WPACKET_start_sub_packet_u8(&pkt)",iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = WPACKET_put_bytes__(local_78,0xff,1);
                                                    iVar1 = test_true("test/wpackettest.c",0xf1,
                                                                                                                                            
                                                  "WPACKET_put_bytes_u8(&pkt, 0xff)",iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = WPACKET_close(local_78);
                                                    iVar1 = test_true("test/wpackettest.c",0xf2,
                                                                      "WPACKET_close(&pkt)",
                                                                      iVar1 != 0);
                                                    if (iVar1 != 0) {
                                                      iVar1 = WPACKET_finish(local_78);
                                                      iVar1 = test_true("test/wpackettest.c",0xf3,
                                                                        "WPACKET_finish(&pkt)",
                                                                        iVar1 != 0);
                                                      if (iVar1 != 0) {
                                                        iVar1 = WPACKET_get_total_written
                                                                          (local_78,&local_88);
                                                        iVar1 = test_true("test/wpackettest.c",0xf4,
                                                                                                                                                    
                                                  "WPACKET_get_total_written(&pkt, &written)",
                                                  iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = test_mem_eq("test/wpackettest.c",0xf5,
                                                                        "buf->data","seqsub",
                                                                        *(undefined8 *)(buf + 8),
                                                                        local_88,&seqsub,4);
                                                    if (iVar1 != 0) {
                                                      iVar1 = WPACKET_init(local_78,buf);
                                                      iVar1 = test_true("test/wpackettest.c",0xf9,
                                                                        "WPACKET_init(&pkt, buf)",
                                                                        iVar1 != 0);
                                                      if (iVar1 != 0) {
                                                        iVar1 = WPACKET_start_sub_packet_len__
                                                                          (local_78,1);
                                                        iVar1 = test_true("test/wpackettest.c",0xfa,
                                                                                                                                                    
                                                  "WPACKET_start_sub_packet_u8(&pkt)",iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = WPACKET_put_bytes__(local_78,0xff,1);
                                                    iVar1 = test_true("test/wpackettest.c",0xfb,
                                                                                                                                            
                                                  "WPACKET_put_bytes_u8(&pkt, 0xff)",iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = WPACKET_start_sub_packet_len__
                                                                      (local_78,1);
                                                    iVar1 = test_true("test/wpackettest.c",0xfc,
                                                                                                                                            
                                                  "WPACKET_start_sub_packet_u8(&pkt)",iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = WPACKET_put_bytes__(local_78,0xff,1);
                                                    iVar1 = test_true("test/wpackettest.c",0xfd,
                                                                                                                                            
                                                  "WPACKET_put_bytes_u8(&pkt, 0xff)",iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = WPACKET_get_length(local_78,&local_80);
                                                    iVar1 = test_true("test/wpackettest.c",0xfe,
                                                                                                                                            
                                                  "WPACKET_get_length(&pkt, &len)",iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = test_size_t_eq("test/wpackettest.c",0xff
                                                                           ,&_LC31,&_LC30,local_80,1
                                                                          );
                                                    if (iVar1 != 0) {
                                                      iVar1 = WPACKET_close(local_78);
                                                      iVar1 = test_true("test/wpackettest.c",0x100,
                                                                        "WPACKET_close(&pkt)",
                                                                        iVar1 != 0);
                                                      if (iVar1 != 0) {
                                                        iVar1 = WPACKET_get_length(local_78,&
                                                  local_80);
                                                  iVar1 = test_true("test/wpackettest.c",0x101,
                                                                    "WPACKET_get_length(&pkt, &len)"
                                                                    ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = test_size_t_eq("test/wpackettest.c",
                                                                           0x102,&_LC31,&_LC78,
                                                                           local_80,3);
                                                    if (iVar1 != 0) {
                                                      iVar1 = WPACKET_close(local_78);
                                                      iVar1 = test_true("test/wpackettest.c",0x103,
                                                                        "WPACKET_close(&pkt)",
                                                                        iVar1 != 0);
                                                      if (iVar1 != 0) {
                                                        iVar1 = WPACKET_fill_lengths(local_78);
                                                        iVar1 = test_true("test/wpackettest.c",0x104
                                                                          ,
                                                  "WPACKET_fill_lengths(&pkt)",iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = WPACKET_get_total_written
                                                                      (local_78,&local_88);
                                                    iVar1 = test_true("test/wpackettest.c",0x105,
                                                                                                                                            
                                                  "WPACKET_get_total_written(&pkt, &written)",
                                                  iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = test_mem_eq("test/wpackettest.c",0x106,
                                                                        "buf->data","nestedsub",
                                                                        *(undefined8 *)(buf + 8),
                                                                        local_88);
                                                    if (iVar1 != 0) {
                                                      iVar1 = WPACKET_finish(local_78);
                                                      iVar1 = test_true("test/wpackettest.c",0x107,
                                                                        "WPACKET_finish(&pkt)",
                                                                        iVar1 != 0);
                                                      if (iVar1 != 0) {
                                                        uVar3 = 1;
                                                        goto LAB_001024b0;
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
  WPACKET_cleanup(local_78);
  uVar3 = 0;
LAB_001024b0:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 test_WPACKET_set_max_size(void)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined1 local_68 [56];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = WPACKET_init(local_68,buf);
  iVar1 = test_true("test/wpackettest.c",0x92,"WPACKET_init(&pkt, buf)",iVar1 != 0);
  if (iVar1 != 0) {
    iVar1 = WPACKET_set_max_size(local_68,0xffffffffffffffff);
    iVar1 = test_true("test/wpackettest.c",0x97,"WPACKET_set_max_size(&pkt, SIZE_MAX)",iVar1 != 0);
    if (iVar1 != 0) {
      iVar1 = WPACKET_set_max_size(local_68,0xfffffffffffffffe);
      iVar1 = test_true("test/wpackettest.c",0x99,"WPACKET_set_max_size(&pkt, SIZE_MAX -1)",
                        iVar1 != 0);
      if (iVar1 != 0) {
        iVar1 = WPACKET_set_max_size(local_68,0xffffffffffffffff);
        iVar1 = test_true("test/wpackettest.c",0x9b,"WPACKET_set_max_size(&pkt, SIZE_MAX)",
                          iVar1 != 0);
        if (iVar1 != 0) {
          iVar1 = WPACKET_finish(local_68);
          iVar1 = test_true("test/wpackettest.c",0x9c,"WPACKET_finish(&pkt)",iVar1 != 0);
          if (iVar1 != 0) {
            iVar1 = WPACKET_init_len(local_68,buf,1);
            iVar1 = test_true("test/wpackettest.c",0x9f,"WPACKET_init_len(&pkt, buf, 1)",iVar1 != 0)
            ;
            if (iVar1 != 0) {
              iVar1 = WPACKET_set_max_size(local_68,0);
              iVar1 = test_false("test/wpackettest.c",0xa4,"WPACKET_set_max_size(&pkt, 0)",
                                 iVar1 != 0);
              if (iVar1 != 0) {
                iVar1 = WPACKET_set_max_size(local_68,0x101);
                iVar1 = test_false("test/wpackettest.c",0xa9,"WPACKET_set_max_size(&pkt, 0x0101)",
                                   iVar1 != 0);
                if (iVar1 != 0) {
                  iVar1 = WPACKET_set_max_size(local_68,0x100);
                  iVar1 = test_true("test/wpackettest.c",0xab,"WPACKET_set_max_size(&pkt, 0x0100)",
                                    iVar1 != 0);
                  if (iVar1 != 0) {
                    iVar1 = WPACKET_set_max_size(local_68,1);
                    iVar1 = test_true("test/wpackettest.c",0xad,"WPACKET_set_max_size(&pkt, 0x01)",
                                      iVar1 != 0);
                    if (iVar1 != 0) {
                      iVar1 = WPACKET_put_bytes__(local_68,0xff,1);
                      iVar1 = test_false("test/wpackettest.c",0xaf,
                                         "WPACKET_put_bytes_u8(&pkt, 0xff)",iVar1 != 0);
                      if (iVar1 != 0) {
                        iVar1 = WPACKET_set_max_size(local_68,2);
                        iVar1 = test_true("test/wpackettest.c",0xb1,
                                          "WPACKET_set_max_size(&pkt, 0x02)",iVar1 != 0);
                        if (iVar1 != 0) {
                          iVar1 = WPACKET_put_bytes__(local_68,0xff,1);
                          iVar1 = test_true("test/wpackettest.c",0xb2,
                                            "WPACKET_put_bytes_u8(&pkt, 0xff)",iVar1 != 0);
                          if (iVar1 != 0) {
                            iVar1 = WPACKET_put_bytes__(local_68,0xff,1);
                            iVar1 = test_false("test/wpackettest.c",0xb3,
                                               "WPACKET_put_bytes_u8(&pkt, 0xff)",iVar1 != 0);
                            if (iVar1 != 0) {
                              iVar1 = WPACKET_finish(local_68);
                              iVar1 = test_true("test/wpackettest.c",0xb4,"WPACKET_finish(&pkt)",
                                                iVar1 != 0);
                              if (iVar1 != 0) {
                                iVar1 = WPACKET_get_total_written(local_68,&local_70);
                                iVar1 = test_true("test/wpackettest.c",0xb5,
                                                  "WPACKET_get_total_written(&pkt, &written)",
                                                  iVar1 != 0);
                                if (iVar1 != 0) {
                                  iVar1 = test_mem_eq("test/wpackettest.c",0xb6,"buf->data",
                                                      "simple2",*(undefined8 *)(buf + 8),local_70,
                                                      &simple2,2);
                                  if (iVar1 != 0) {
                                    uVar2 = 1;
                                    goto LAB_00102f43;
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
  WPACKET_cleanup(local_68);
  uVar2 = 0;
LAB_00102f43:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 test_WPACKET_init(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  long in_FS_OFFSET;
  undefined8 uVar4;
  undefined8 local_90;
  undefined1 local_88 [69];
  undefined1 local_43 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = WPACKET_init(local_88,buf);
  iVar1 = test_true("test/wpackettest.c",0x48,"WPACKET_init(&pkt, buf)",iVar1 != 0);
  if (iVar1 != 0) {
    iVar1 = WPACKET_put_bytes__(local_88,0xff,1);
    iVar1 = test_true("test/wpackettest.c",0x49,"WPACKET_put_bytes_u8(&pkt, 0xff)",iVar1 != 0);
    if (iVar1 != 0) {
      iVar1 = WPACKET_close(local_88);
      iVar1 = test_false("test/wpackettest.c",0x4b,"WPACKET_close(&pkt)",iVar1 != 0);
      if (iVar1 != 0) {
        iVar1 = WPACKET_finish(local_88);
        iVar1 = test_true("test/wpackettest.c",0x4d,"WPACKET_finish(&pkt)",iVar1 != 0);
        if (iVar1 != 0) {
          iVar1 = WPACKET_close(local_88);
          iVar1 = test_false("test/wpackettest.c",0x52,"WPACKET_close(&pkt)",iVar1 != 0);
          if (iVar1 != 0) {
            iVar1 = WPACKET_finish(local_88);
            iVar1 = test_false("test/wpackettest.c",0x53,"WPACKET_finish(&pkt)",iVar1 != 0);
            if (iVar1 != 0) {
              iVar1 = WPACKET_get_total_written(local_88,&local_90);
              iVar1 = test_true("test/wpackettest.c",0x54,
                                "WPACKET_get_total_written(&pkt, &written)",iVar1 != 0);
              if (iVar1 != 0) {
                uVar4 = 1;
                iVar1 = test_mem_eq("test/wpackettest.c",0x55,"buf->data","simple1",
                                    *(undefined8 *)(buf + 8),local_90);
                if (iVar1 != 0) {
                  iVar1 = WPACKET_init_len(local_88,buf,1,uVar4);
                  iVar1 = test_true("test/wpackettest.c",0x59,"WPACKET_init_len(&pkt, buf, 1)",
                                    iVar1 != 0);
                  if (iVar1 != 0) {
                    iVar1 = WPACKET_put_bytes__(local_88,0xff,1);
                    iVar1 = test_true("test/wpackettest.c",0x5a,"WPACKET_put_bytes_u8(&pkt, 0xff)",
                                      iVar1 != 0);
                    if (iVar1 != 0) {
                      iVar1 = WPACKET_finish(local_88);
                      iVar1 = test_true("test/wpackettest.c",0x5b,"WPACKET_finish(&pkt)",iVar1 != 0)
                      ;
                      if (iVar1 != 0) {
                        iVar1 = WPACKET_get_total_written(local_88,&local_90);
                        iVar1 = test_true("test/wpackettest.c",0x5c,
                                          "WPACKET_get_total_written(&pkt, &written)",iVar1 != 0);
                        if ((iVar1 != 0) &&
                           (iVar1 = test_mem_eq("test/wpackettest.c",0x5d,"buf->data","simple2",
                                                *(undefined8 *)(buf + 8),local_90,&simple2,2),
                           iVar1 != 0)) {
                          iVar1 = WPACKET_init_len(local_88,buf,4);
                          iVar1 = test_true("test/wpackettest.c",0x61,
                                            "WPACKET_init_len(&pkt, buf, 4)",iVar1 != 0);
                          if (iVar1 != 0) {
                            iVar1 = WPACKET_put_bytes__(local_88,0xff,1);
                            iVar1 = test_true("test/wpackettest.c",0x62,
                                              "WPACKET_put_bytes_u8(&pkt, 0xff)",iVar1 != 0);
                            if (iVar1 != 0) {
                              iVar1 = WPACKET_finish(local_88);
                              iVar1 = test_true("test/wpackettest.c",99,"WPACKET_finish(&pkt)",
                                                iVar1 != 0);
                              if (iVar1 != 0) {
                                iVar1 = WPACKET_get_total_written(local_88,&local_90);
                                iVar1 = test_true("test/wpackettest.c",100,
                                                  "WPACKET_get_total_written(&pkt, &written)",
                                                  iVar1 != 0);
                                if ((iVar1 != 0) &&
                                   (iVar1 = test_mem_eq("test/wpackettest.c",0x65,"buf->data",
                                                        "simple3",*(undefined8 *)(buf + 8),local_90)
                                   , iVar1 != 0)) {
                                  iVar1 = WPACKET_init_len(local_88,buf,1);
                                  iVar1 = test_true("test/wpackettest.c",0x68,
                                                    "WPACKET_init_len(&pkt, buf, 1)",iVar1 != 0);
                                  if (iVar1 != 0) {
                                    iVar1 = 1;
                                    do {
                                      uVar2 = WPACKET_put_bytes__(local_88,0xff,1);
                                      iVar3 = test_int_eq("test/wpackettest.c",0x6f,
                                                          "WPACKET_put_bytes_u8(&pkt, 0xff)",
                                                          "i < 256",uVar2,iVar1 < 0x100);
                                      if (iVar3 == 0) goto LAB_001032f0;
                                      iVar1 = iVar1 + 1;
                                    } while (iVar1 != 0x101);
                                    iVar1 = WPACKET_finish(local_88);
                                    iVar1 = test_true("test/wpackettest.c",0x72,
                                                      "WPACKET_finish(&pkt)",iVar1 != 0);
                                    if (iVar1 != 0) {
                                      iVar1 = WPACKET_init_static_len(local_88,local_43,3,0);
                                      iVar1 = test_true("test/wpackettest.c",0x76,
                                                                                                                
                                                  "WPACKET_init_static_len(&pkt, sbuf, sizeof(sbuf), 0)"
                                                  ,iVar1 != 0);
                                      if (iVar1 != 0) {
                                        iVar1 = WPACKET_put_bytes__(local_88,0xffffff,3);
                                        iVar1 = test_true("test/wpackettest.c",0x78,
                                                          "WPACKET_put_bytes_u24(&pkt, 0xffffff)",
                                                          iVar1 != 0);
                                        if (iVar1 != 0) {
                                          iVar1 = WPACKET_put_bytes__(local_88,0xff,1);
                                          iVar1 = test_false("test/wpackettest.c",0x7a,
                                                             "WPACKET_put_bytes_u8(&pkt, 0xff)",
                                                             iVar1 != 0);
                                          if (iVar1 != 0) {
                                            iVar1 = WPACKET_finish(local_88);
                                            iVar1 = test_true("test/wpackettest.c",0x7c,
                                                              "WPACKET_finish(&pkt)",iVar1 != 0);
                                            if (iVar1 != 0) {
                                              iVar1 = WPACKET_get_total_written(local_88,&local_90);
                                              iVar1 = test_true("test/wpackettest.c",0x7d,
                                                                                                                                
                                                  "WPACKET_get_total_written(&pkt, &written)",
                                                  iVar1 != 0);
                                              if ((iVar1 != 0) &&
                                                 (iVar1 = test_mem_eq("test/wpackettest.c",0x7e,
                                                                      &_LC95,"fixed",local_43,
                                                                      local_90,&fixed,3), iVar1 != 0
                                                 )) {
                                                iVar1 = WPACKET_init_static_len
                                                                  (local_88,local_43,3,1);
                                                iVar1 = test_true("test/wpackettest.c",0x80,
                                                                                                                                    
                                                  "WPACKET_init_static_len(&pkt, sbuf, sizeof(sbuf), 1)"
                                                  ,iVar1 != 0);
                                                if (iVar1 != 0) {
                                                  iVar1 = WPACKET_put_bytes__(local_88,0xfeff,2);
                                                  iVar1 = test_true("test/wpackettest.c",0x82,
                                                                                                                                        
                                                  "WPACKET_put_bytes_u16(&pkt, 0xfeff)",iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = WPACKET_put_bytes__(local_88,0xff,1);
                                                    iVar1 = test_false("test/wpackettest.c",0x84,
                                                                                                                                              
                                                  "WPACKET_put_bytes_u8(&pkt, 0xff)",iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = WPACKET_finish(local_88);
                                                    iVar1 = test_true("test/wpackettest.c",0x85,
                                                                      "WPACKET_finish(&pkt)",
                                                                      iVar1 != 0);
                                                    if (iVar1 != 0) {
                                                      iVar1 = WPACKET_get_total_written
                                                                        (local_88,&local_90);
                                                      iVar1 = test_true("test/wpackettest.c",0x86,
                                                                                                                                                
                                                  "WPACKET_get_total_written(&pkt, &written)",
                                                  iVar1 != 0);
                                                  if ((iVar1 != 0) &&
                                                     (iVar1 = test_mem_eq("test/wpackettest.c",0x87,
                                                                          &_LC95,"alloc",local_43,
                                                                          local_90,&alloc,3),
                                                     iVar1 != 0)) {
                                                    uVar4 = 1;
                                                    goto LAB_001032fa;
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
LAB_001032f0:
  WPACKET_cleanup(local_88);
  uVar4 = 0;
LAB_001032fa:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}



undefined8 setup_tests(void)

{
  undefined8 uVar1;
  
  buf = BUF_MEM_new();
  uVar1 = test_ptr("test/wpackettest.c",0x27a,"buf = BUF_MEM_new()",buf);
  if ((int)uVar1 != 0) {
    add_test("test_WPACKET_init",test_WPACKET_init);
    add_test("test_WPACKET_set_max_size",test_WPACKET_set_max_size);
    add_test("test_WPACKET_start_sub_packet",test_WPACKET_start_sub_packet);
    add_test("test_WPACKET_set_flags",test_WPACKET_set_flags);
    add_test("test_WPACKET_allocate_bytes",test_WPACKET_allocate_bytes);
    add_test("test_WPACKET_memcpy",test_WPACKET_memcpy);
    add_test("test_WPACKET_init_der",test_WPACKET_init_der);
    add_test("test_WPACKET_quic",test_WPACKET_quic);
    add_test("test_WPACKET_quic_vlint_random",0x100000);
    uVar1 = 1;
  }
  return uVar1;
}



void cleanup_tests(void)

{
  BUF_MEM_free(buf);
  return;
}


