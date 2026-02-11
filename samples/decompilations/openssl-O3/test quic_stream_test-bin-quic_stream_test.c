
undefined8
test_single_copy_read(undefined8 param_1,void *param_2,ulong param_3,long *param_4,int *param_5)

{
  ulong uVar1;
  int iVar2;
  undefined8 uVar3;
  void *pvVar4;
  long in_FS_OFFSET;
  void *local_50;
  ulong local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *param_4 = 0;
  do {
    iVar2 = ossl_quic_rstream_get_record(param_1,&local_50,&local_48,param_5);
    uVar1 = local_48;
    if (iVar2 == 0) {
LAB_001000d9:
      uVar3 = 0;
      goto LAB_001000e5;
    }
    if (local_48 == 0) goto LAB_001000e0;
    if (param_3 < local_48) {
      *param_5 = 0;
      local_48 = param_3;
      memcpy(param_2,local_50,param_3);
      *param_4 = *param_4 + param_3;
      iVar2 = ossl_quic_rstream_release_record(param_1,param_3);
      if (iVar2 == 0) goto LAB_001000d9;
LAB_001000e0:
      uVar3 = 1;
LAB_001000e5:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return uVar3;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    param_3 = param_3 - local_48;
    pvVar4 = (void *)((long)param_2 + local_48);
    memcpy(param_2,local_50,local_48);
    *param_4 = *param_4 + uVar1;
    iVar2 = ossl_quic_rstream_release_record(param_1,uVar1);
    if (iVar2 == 0) goto LAB_001000d9;
    if ((*param_5 != 0) || (param_2 = pvVar4, param_3 == 0)) goto LAB_001000e0;
  } while( true );
}



uint test_rstream_random(uint param_1)

{
  bool bVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined1 *ptr;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  int iVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  ulong uVar16;
  long in_FS_OFFSET;
  int local_98;
  ulong local_88;
  void *local_80;
  undefined1 *local_60;
  int local_4c;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_4c = 0;
  local_48 = 0;
  ptr = (undefined1 *)CRYPTO_malloc(10000,"test/quic_stream_test.c",0x1e6);
  iVar4 = test_ptr("test/quic_stream_test.c",0x1e6,"bulk_data = OPENSSL_malloc(data_size)",ptr);
  if (iVar4 == 0) {
    local_80 = (void *)0x0;
    uVar7 = 0;
    uVar5 = 0;
    goto LAB_00100188;
  }
  uVar7 = 0;
  local_80 = CRYPTO_malloc(10000,"test/quic_stream_test.c",0x1e7);
  uVar5 = test_ptr("test/quic_stream_test.c",0x1e7,"read_buf = OPENSSL_malloc(data_size)",local_80);
  if (uVar5 == 0) goto LAB_00100188;
  uVar7 = ossl_quic_rstream_new(0,0,0);
  iVar4 = test_ptr("test/quic_stream_test.c",0x1e8,"rstream = ossl_quic_rstream_new(NULL, NULL, 0)",
                   uVar7);
  if (iVar4 == 0) {
LAB_00100499:
    uVar5 = 0;
  }
  else {
    iVar4 = (int)param_1 % 3;
    if (iVar4 == 0) {
      ossl_quic_rstream_set_cleanse(uVar7,1);
    }
    puVar14 = ptr;
    do {
      uVar3 = test_random();
      puVar15 = puVar14 + 1;
      *puVar14 = uVar3;
      puVar14 = puVar15;
    } while (ptr + 10000 != puVar15);
    local_98 = 100;
    uVar16 = 0;
    bVar1 = false;
    local_88 = 0;
    do {
      iVar13 = local_98 + -100;
      uVar12 = local_88;
      do {
        iVar6 = test_random();
        if (0x19999999 <
            ((uint)(iVar6 * -0x33333333) >> 1 | (uint)((iVar6 * -0x33333333 & 1U) != 0) << 0x1f)) {
          uVar10 = (ulong)iVar13;
          uVar11 = uVar10 + 10;
          uVar9 = uVar11;
          if (uVar11 <= uVar12) {
            uVar9 = uVar12;
          }
          if (uVar10 <= uVar12) {
            uVar12 = uVar9;
          }
          iVar6 = ossl_quic_rstream_queue_data(uVar7,0,uVar10,ptr + uVar10,10,0);
          iVar6 = test_true("test/quic_stream_test.c",0x1fd,
                            "ossl_quic_rstream_queue_data(rstream, NULL, off, bulk_data + off, size, 0)"
                            ,iVar6 != 0);
          if (iVar6 == 0) goto LAB_00100499;
          if (uVar16 < uVar11) {
            uVar16 = uVar11;
          }
          iVar6 = test_random();
          if ((uint)(iVar6 * -0x33333333) < 0x33333334) {
            uVar5 = test_random();
            uVar11 = uVar5 % 0x32 + local_88;
            if (uVar11 < 0x33) {
              uVar5 = test_random();
              uVar10 = (ulong)(uVar5 % 100 + 1);
              uVar9 = uVar11;
            }
            else {
              uVar5 = test_random();
              uVar10 = (ulong)(uVar5 % 100 + 1);
              uVar9 = uVar11 - 0x32;
              if (10000 < (uVar11 - 0x32) + uVar10) {
                uVar9 = 10000 - uVar10;
              }
            }
            uVar11 = uVar10 + uVar9;
            uVar8 = uVar11;
            if (uVar11 <= uVar12) {
              uVar8 = uVar12;
            }
            if (uVar9 <= uVar12) {
              uVar12 = uVar8;
            }
            iVar6 = ossl_quic_rstream_queue_data(uVar7,0,uVar9,ptr + uVar9,uVar10,0);
            iVar6 = test_true("test/quic_stream_test.c",0x211,
                              "ossl_quic_rstream_queue_data(rstream, NULL, off, bulk_data + off, size, 0)"
                              ,iVar6 != 0);
            if (iVar6 == 0) {
              uVar5 = 0;
              goto LAB_00100188;
            }
            if (uVar16 < uVar11) {
              uVar16 = uVar11;
            }
          }
        }
        iVar13 = iVar13 + 10;
      } while (local_98 != iVar13);
      if ((param_1 & 1) == 0) {
        iVar13 = test_single_copy_read();
        iVar13 = test_true("test/quic_stream_test.c",0x219,
                           "test_single_copy_read(rstream, read_buf, data_size, &readbytes, &fin)",
                           iVar13 != 0);
      }
      else {
        iVar13 = ossl_quic_rstream_read(uVar7,local_80,10000,&local_48,&local_4c);
        iVar13 = test_true("test/quic_stream_test.c",0x21c,
                           "ossl_quic_rstream_read(rstream, read_buf, data_size, &readbytes, &fin)",
                           iVar13 != 0);
      }
      if ((((iVar13 == 0) ||
           (iVar13 = test_size_t_ge("test/quic_stream_test.c",0x221,"readbytes",
                                    "queued_min - read_off",local_48,uVar12 - local_88), iVar13 == 0
           )) || (iVar13 = test_size_t_le("test/quic_stream_test.c",0x222,"readbytes + read_off",
                                          "data_size",local_88 + local_48,10000), iVar13 == 0)) ||
         ((iVar4 != 0 &&
          (iVar13 = test_mem_eq("test/quic_stream_test.c",0x224,"read_buf","bulk_data + read_off",
                                local_80,local_48,ptr + local_88,local_48), iVar13 == 0))))
      goto LAB_00100499;
      local_88 = local_88 + local_48;
      iVar13 = test_random();
      if (((uint)(iVar13 * -0x3d70a3d7) >> 1 | (uint)((iVar13 * -0x3d70a3d7 & 1U) != 0) << 0x1f) <
          0x51eb852) {
        iVar13 = ossl_quic_rstream_resize_rbuf(uVar7,(uVar16 - local_88) + 1);
        iVar13 = test_true("test/quic_stream_test.c",0x22a,
                           "ossl_quic_rstream_resize_rbuf(rstream, queued_max - read_off + 1)",
                           iVar13 != 0);
        if (iVar13 == 0) goto LAB_00100499;
        iVar13 = ossl_quic_rstream_move_to_rbuf(uVar7);
        iVar13 = test_true("test/quic_stream_test.c",0x22c,"ossl_quic_rstream_move_to_rbuf(rstream)"
                           ,iVar13 != 0);
        if (iVar13 == 0) goto LAB_00100499;
      }
      if (bVar1) {
LAB_001005d6:
        bVar1 = true;
        bVar2 = true;
      }
      else {
        uVar5 = test_random();
        bVar2 = false;
        if (10000 - (ulong)(uVar5 % 200) <= uVar16) {
          iVar13 = ossl_quic_rstream_queue_data(uVar7,0,10000,0,0,1);
          iVar13 = test_true("test/quic_stream_test.c",0x231,
                             "ossl_quic_rstream_queue_data(rstream, NULL, data_size, NULL, 0, 1)",
                             iVar13 != 0);
          if (iVar13 != 0) goto LAB_001005d6;
          goto LAB_00100499;
        }
      }
      local_98 = local_98 + 100;
    } while (local_98 != 0x2774);
    test_info("test/quic_stream_test.c",0x237,"Total read bytes: %zu Fin rcvd: %d",local_88,local_4c
             );
    if (iVar4 == 0) {
      if (local_88 != 0) {
        local_60 = ptr;
        do {
          iVar4 = test_uchar_eq("test/quic_stream_test.c",0x23b,"bulk_data[i]",&_LC17,*local_60,0);
          if (iVar4 == 0) {
            uVar5 = 0;
            goto LAB_00100188;
          }
          local_60 = local_60 + 1;
        } while (ptr + local_88 != local_60);
        goto LAB_001007be;
      }
    }
    else {
LAB_001007be:
      if (((local_88 == 10000) && (bVar2)) && (local_4c == 0)) {
        if ((param_1 & 1) == 0) {
          iVar4 = test_single_copy_read();
          iVar4 = test_true("test/quic_stream_test.c",0x241,
                            "test_single_copy_read(rstream, read_buf, data_size, &readbytes, &fin)",
                            iVar4 != 0);
          if (iVar4 == 0) goto LAB_00100499;
        }
        else {
          iVar4 = ossl_quic_rstream_read(uVar7,local_80,10000,&local_48,&local_4c);
          iVar4 = test_true("test/quic_stream_test.c",0x244,
                            "ossl_quic_rstream_read(rstream, read_buf, data_size, &readbytes, &fin)"
                            ,iVar4 != 0);
          if (iVar4 == 0) {
            uVar5 = 0;
            goto LAB_00100188;
          }
        }
        iVar4 = test_size_t_eq("test/quic_stream_test.c",0x249,"readbytes",&_LC17,local_48,0);
        if (iVar4 != 0) {
          iVar4 = test_true("test/quic_stream_test.c",0x249,&_LC19,local_4c != 0);
          uVar5 = (uint)(iVar4 != 0);
          goto LAB_00100188;
        }
        goto LAB_00100499;
      }
    }
    uVar5 = 1;
  }
LAB_00100188:
  ossl_quic_rstream_free(uVar7);
  CRYPTO_free(ptr);
  CRYPTO_free(local_80);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}



bool test_rstream_simple(uint param_1)

{
  int iVar1;
  undefined8 uVar2;
  code *pcVar3;
  long in_FS_OFFSET;
  bool bVar4;
  int local_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 local_78 [2];
  undefined1 local_76 [12];
  undefined1 local_6a [5];
  undefined1 local_65 [37];
  long local_40;
  
  pcVar3 = test_single_copy_read;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_8c = 0;
  local_88 = 0;
  local_80 = 0;
  if ((param_1 & 1) == 0) {
    pcVar3 = ossl_quic_rstream_read;
  }
  uVar2 = ossl_quic_rstream_new(0,0,0);
  iVar1 = test_ptr("test/quic_stream_test.c",0x185,"rstream = ossl_quic_rstream_new(NULL, NULL, 0)",
                   uVar2);
  if (iVar1 != 0) {
    iVar1 = ossl_quic_rstream_queue_data(uVar2,0,5," world! And thank you for all the fish!",10,0);
    iVar1 = test_true("test/quic_stream_test.c",0x188,
                      "ossl_quic_rstream_queue_data(rstream, NULL, 5, simple_data + 5, 10, 0)",
                      iVar1 != 0);
    if (iVar1 != 0) {
      iVar1 = ossl_quic_rstream_queue_data(uVar2,0,0x2c,"",1,1);
      iVar1 = test_true("test/quic_stream_test.c",0x18a,
                        "ossl_quic_rstream_queue_data(rstream, NULL, sizeof(simple_data) - 1, simple_data + sizeof(simple_data) - 1, 1, 1)"
                        ,iVar1 != 0);
      if (iVar1 != 0) {
        iVar1 = ossl_quic_rstream_peek(uVar2,local_78,0x2d,&local_88,&local_8c);
        iVar1 = test_true("test/quic_stream_test.c",0x18e,
                          "ossl_quic_rstream_peek(rstream, buf, sizeof(buf), &readbytes, &fin)",
                          iVar1 != 0);
        if (((iVar1 != 0) &&
            (iVar1 = test_false("test/quic_stream_test.c",400,&_LC19,local_8c != 0), iVar1 != 0)) &&
           (iVar1 = test_size_t_eq("test/quic_stream_test.c",0x191,"readbytes",&_LC17,local_88,0),
           iVar1 != 0)) {
          iVar1 = ossl_quic_rstream_queue_data(uVar2,0,0x23,"the fish!",10,1);
          iVar1 = test_true("test/quic_stream_test.c",0x192,
                            "ossl_quic_rstream_queue_data(rstream, NULL, sizeof(simple_data) - 10, simple_data + sizeof(simple_data) - 10, 10, 1)"
                            ,iVar1 != 0);
          if (iVar1 != 0) {
            iVar1 = ossl_quic_rstream_queue_data
                              (uVar2,0,0,"Hello world! And thank you for all the fish!",1,0);
            iVar1 = test_true("test/quic_stream_test.c",0x196,
                              "ossl_quic_rstream_queue_data(rstream, NULL, 0, simple_data, 1, 0)",
                              iVar1 != 0);
            if (iVar1 != 0) {
              iVar1 = ossl_quic_rstream_peek(uVar2,local_78,0x2d,&local_88,&local_8c);
              iVar1 = test_true("test/quic_stream_test.c",0x198,
                                "ossl_quic_rstream_peek(rstream, buf, sizeof(buf), &readbytes, &fin)"
                                ,iVar1 != 0);
              if (((iVar1 != 0) &&
                  (iVar1 = test_false("test/quic_stream_test.c",0x19a,&_LC19,local_8c != 0),
                  iVar1 != 0)) &&
                 ((iVar1 = test_size_t_eq("test/quic_stream_test.c",0x19b,"readbytes",&_LC25,
                                          local_88,1), iVar1 != 0 &&
                  (iVar1 = test_mem_eq("test/quic_stream_test.c",0x19c,&_LC27,"simple_data",local_78
                                       ,1,"Hello world! And thank you for all the fish!",1),
                  iVar1 != 0)))) {
                if ((int)param_1 < 2) {
LAB_00100bc9:
                  iVar1 = ossl_quic_rstream_queue_data
                                    (uVar2,0,0,"Hello world! And thank you for all the fish!",10,0);
                  iVar1 = test_true("test/quic_stream_test.c",0x1a2,
                                    "ossl_quic_rstream_queue_data(rstream, NULL, 0, simple_data, 10, 0)"
                                    ,iVar1 != 0);
                  if (iVar1 != 0) {
                    iVar1 = ossl_quic_rstream_queue_data(uVar2,0,0x2d,0,0,1);
                    iVar1 = test_true("test/quic_stream_test.c",0x1a5,
                                      "ossl_quic_rstream_queue_data(rstream, NULL, sizeof(simple_data), NULL, 0, 1)"
                                      ,iVar1 != 0);
                    if (iVar1 != 0) {
                      iVar1 = ossl_quic_rstream_peek(uVar2,local_78,0x2d,&local_88,&local_8c);
                      iVar1 = test_true("test/quic_stream_test.c",0x1a9,
                                        "ossl_quic_rstream_peek(rstream, buf, sizeof(buf), &readbytes, &fin)"
                                        ,iVar1 != 0);
                      if (((iVar1 != 0) &&
                          (iVar1 = test_false("test/quic_stream_test.c",0x1ab,&_LC19,local_8c != 0),
                          iVar1 != 0)) &&
                         ((iVar1 = test_size_t_eq("test/quic_stream_test.c",0x1ac,"readbytes",&_LC31
                                                  ,local_88,0xf), iVar1 != 0 &&
                          (iVar1 = test_mem_eq("test/quic_stream_test.c",0x1ad,&_LC27,"simple_data",
                                               local_78,0xf,
                                               "Hello world! And thank you for all the fish!",0xf),
                          iVar1 != 0)))) {
                        iVar1 = ossl_quic_rstream_queue_data
                                          (uVar2,0,0xf,"d thank you for all the fish!",0x1e,1);
                        iVar1 = test_true("test/quic_stream_test.c",0x1ae,
                                          "ossl_quic_rstream_queue_data(rstream, NULL, 15, simple_data + 15, sizeof(simple_data) - 15, 1)"
                                          ,iVar1 != 0);
                        if (iVar1 != 0) {
                          iVar1 = ossl_quic_rstream_available(uVar2,&local_80,&local_8c);
                          iVar1 = test_true("test/quic_stream_test.c",0x1b2,
                                            "ossl_quic_rstream_available(rstream, &avail, &fin)",
                                            iVar1 != 0);
                          if (((iVar1 != 0) &&
                              (iVar1 = test_true("test/quic_stream_test.c",0x1b3,&_LC19,
                                                 local_8c != 0), iVar1 != 0)) &&
                             (iVar1 = test_size_t_eq("test/quic_stream_test.c",0x1b4,"avail",
                                                     "sizeof(simple_data)",local_80,0x2d),
                             iVar1 != 0)) {
                            iVar1 = (*pcVar3)(uVar2,local_78,2,&local_88,&local_8c);
                            iVar1 = test_true("test/quic_stream_test.c",0x1b5,
                                              "read_fn(rstream, buf, 2, &readbytes, &fin)",
                                              iVar1 != 0);
                            if (((iVar1 != 0) &&
                                (iVar1 = test_false("test/quic_stream_test.c",0x1b6,&_LC19,
                                                    local_8c != 0), iVar1 != 0)) &&
                               ((iVar1 = test_size_t_eq("test/quic_stream_test.c",0x1b7,"readbytes",
                                                        &_LC37,local_88,2), iVar1 != 0 &&
                                (iVar1 = test_mem_eq("test/quic_stream_test.c",0x1b8,&_LC27,
                                                     "simple_data",local_78,2,
                                                     "Hello world! And thank you for all the fish!",
                                                     2), iVar1 != 0)))) {
                              iVar1 = (*pcVar3)(uVar2,local_76,0xc,&local_88,&local_8c);
                              iVar1 = test_true("test/quic_stream_test.c",0x1b9,
                                                "read_fn(rstream, buf + 2, 12, &readbytes, &fin)",
                                                iVar1 != 0);
                              if (((iVar1 != 0) &&
                                  (iVar1 = test_false("test/quic_stream_test.c",0x1ba,&_LC19,
                                                      local_8c != 0), iVar1 != 0)) &&
                                 ((iVar1 = test_size_t_eq("test/quic_stream_test.c",0x1bb,
                                                          "readbytes",&_LC39,local_88,0xc),
                                  iVar1 != 0 &&
                                  (iVar1 = test_mem_eq("test/quic_stream_test.c",0x1bc,"buf + 2",
                                                       "simple_data + 2",local_76,0xc,
                                                       "llo world! And thank you for all the fish!",
                                                       0xc), iVar1 != 0)))) {
                                iVar1 = ossl_quic_rstream_queue_data(uVar2,0,0x2d,0,0,1);
                                iVar1 = test_true("test/quic_stream_test.c",0x1bd,
                                                  "ossl_quic_rstream_queue_data(rstream, NULL, sizeof(simple_data), NULL, 0, 1)"
                                                  ,iVar1 != 0);
                                if (iVar1 != 0) {
                                  if ((int)param_1 < 2) {
LAB_00100fb5:
                                    iVar1 = (*pcVar3)(uVar2,local_6a,5,&local_88,&local_8c);
                                    iVar1 = test_true("test/quic_stream_test.c",0x1c5,
                                                                                                            
                                                  "read_fn(rstream, buf + 14, 5, &readbytes, &fin)",
                                                  iVar1 != 0);
                                    if ((((iVar1 != 0) &&
                                         (iVar1 = test_false("test/quic_stream_test.c",0x1c6,&_LC19,
                                                             local_8c != 0), iVar1 != 0)) &&
                                        (iVar1 = test_size_t_eq("test/quic_stream_test.c",0x1c7,
                                                                "readbytes",&_LC44,local_88,5),
                                        iVar1 != 0)) &&
                                       (iVar1 = test_mem_eq("test/quic_stream_test.c",0x1c8,&_LC27,
                                                            "simple_data",local_78,0x13,
                                                                                                                        
                                                  "Hello world! And thank you for all the fish!",
                                                  0x13), iVar1 != 0)) {
                                      iVar1 = (*pcVar3)(uVar2,local_65,0x1a,&local_88,&local_8c);
                                      iVar1 = test_true("test/quic_stream_test.c",0x1c9,
                                                                                                                
                                                  "read_fn(rstream, buf + 14 + 5, sizeof(buf) - 14 - 5, &readbytes, &fin)"
                                                  ,iVar1 != 0);
                                      if (((iVar1 != 0) &&
                                          (iVar1 = test_true("test/quic_stream_test.c",0x1cb,&_LC19,
                                                             local_8c != 0), iVar1 != 0)) &&
                                         ((iVar1 = test_size_t_eq("test/quic_stream_test.c",0x1cc,
                                                                  "readbytes","sizeof(buf) - 14 - 5"
                                                                  ,local_88,0x1a), iVar1 != 0 &&
                                          (iVar1 = test_mem_eq("test/quic_stream_test.c",0x1cd,
                                                               &_LC27,"simple_data",local_78,0x2d),
                                          iVar1 != 0)))) {
                                        if (1 < (int)param_1) {
                                          iVar1 = ossl_quic_rstream_move_to_rbuf(uVar2);
                                          iVar1 = test_true("test/quic_stream_test.c",0x1ce,
                                                                                                                        
                                                  "ossl_quic_rstream_move_to_rbuf(rstream)",
                                                  iVar1 != 0);
                                          if (iVar1 == 0) goto LAB_00100921;
                                        }
                                        iVar1 = (*pcVar3)(uVar2,local_78,0x2d,&local_88,&local_8c);
                                        iVar1 = test_true("test/quic_stream_test.c",0x1cf,
                                                                                                                    
                                                  "read_fn(rstream, buf, sizeof(buf), &readbytes, &fin)"
                                                  ,iVar1 != 0);
                                        if ((iVar1 != 0) &&
                                           (iVar1 = test_true("test/quic_stream_test.c",0x1d0,&_LC19
                                                              ,local_8c != 0), iVar1 != 0)) {
                                          iVar1 = test_size_t_eq("test/quic_stream_test.c",0x1d1,
                                                                 "readbytes",&_LC17,local_88,0);
                                          bVar4 = iVar1 != 0;
                                          goto LAB_00100923;
                                        }
                                      }
                                    }
                                  }
                                  else {
                                    iVar1 = ossl_quic_rstream_resize_rbuf(uVar2,0x5a);
                                    iVar1 = test_true("test/quic_stream_test.c",0x1c2,
                                                                                                            
                                                  "ossl_quic_rstream_resize_rbuf(rstream, 2 * sizeof(simple_data))"
                                                  ,iVar1 != 0);
                                    if (iVar1 != 0) {
                                      iVar1 = ossl_quic_rstream_move_to_rbuf(uVar2);
                                      iVar1 = test_true("test/quic_stream_test.c",0x1c4,
                                                        "ossl_quic_rstream_move_to_rbuf(rstream)",
                                                        iVar1 != 0);
                                      if (iVar1 != 0) goto LAB_00100fb5;
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
                  iVar1 = ossl_quic_rstream_move_to_rbuf(uVar2);
                  iVar1 = test_false("test/quic_stream_test.c",0x19d,
                                     "ossl_quic_rstream_move_to_rbuf(rstream)",iVar1 != 0);
                  if (iVar1 != 0) {
                    iVar1 = ossl_quic_rstream_resize_rbuf(uVar2,0x2d);
                    iVar1 = test_true("test/quic_stream_test.c",0x19f,
                                      "ossl_quic_rstream_resize_rbuf(rstream, sizeof(simple_data))",
                                      iVar1 != 0);
                    if (iVar1 != 0) {
                      iVar1 = ossl_quic_rstream_move_to_rbuf(uVar2);
                      iVar1 = test_true("test/quic_stream_test.c",0x1a1,
                                        "ossl_quic_rstream_move_to_rbuf(rstream)",iVar1 != 0);
                      if (iVar1 != 0) goto LAB_00100bc9;
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
LAB_00100921:
  bVar4 = false;
LAB_00100923:
  ossl_quic_rstream_free(uVar2);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar4;
}



uint test_sstream_bulk(void)

{
  size_t sVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 *__src;
  void *ptr;
  ulong uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  ulong uVar10;
  long lVar11;
  size_t *psVar12;
  void *pvVar13;
  void *pvVar14;
  long in_FS_OFFSET;
  undefined1 *local_e8;
  void *local_e0;
  undefined1 *local_d8;
  ulong local_d0;
  long local_c0;
  void *local_b8;
  ulong local_a8;
  size_t local_a0;
  undefined1 local_98 [16];
  undefined8 local_88;
  size_t local_68 [5];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_a8 = 0;
  local_a0 = 0;
  uVar5 = ossl_quic_sstream_new(0x2000);
  iVar3 = test_ptr("test/quic_stream_test.c",0xe4,"sstream = ossl_quic_sstream_new(init_size)",uVar5
                  );
  if (iVar3 != 0) {
    uVar6 = ossl_quic_sstream_get_buffer_size(uVar5);
    iVar3 = test_size_t_eq("test/quic_stream_test.c",0xe7,
                           "ossl_quic_sstream_get_buffer_size(sstream)","init_size",uVar6,0x2000);
    if (iVar3 != 0) {
      __src = (undefined1 *)CRYPTO_zalloc(0x2000,"test/quic_stream_test.c",0xea);
      iVar3 = test_ptr("test/quic_stream_test.c",0xea,"src_buf = OPENSSL_zalloc(init_size)",__src);
      if (iVar3 == 0) {
        local_e8 = (undefined1 *)0x0;
        ptr = (void *)0x0;
        local_e0 = (void *)0x0;
        uVar4 = 0;
      }
      else {
        ptr = CRYPTO_malloc(0x2000,"test/quic_stream_test.c",0xed);
        iVar3 = test_ptr("test/quic_stream_test.c",0xed,"dst_buf = OPENSSL_malloc(init_size)",ptr);
        if (iVar3 == 0) {
          local_e8 = (undefined1 *)0x0;
          local_e0 = (void *)0x0;
          uVar4 = 0;
        }
        else {
          local_e0 = CRYPTO_malloc(0x2000,"test/quic_stream_test.c",0xf0);
          uVar4 = test_ptr("test/quic_stream_test.c",0xf0,"ref_src_buf = OPENSSL_malloc(init_size)",
                           local_e0);
          local_e8 = (undefined1 *)0x0;
          if (uVar4 != 0) {
            local_e8 = (undefined1 *)CRYPTO_malloc(0x2000,"test/quic_stream_test.c",0xf3);
            iVar3 = test_ptr("test/quic_stream_test.c",0xf3,
                             "ref_dst_buf = OPENSSL_malloc(init_size)",local_e8);
            if (iVar3 != 0) {
              iVar3 = ossl_quic_sstream_append(uVar5,__src,0x1000,&local_a0);
              iVar3 = test_true("test/quic_stream_test.c",0xf9,
                                "ossl_quic_sstream_append(sstream, src_buf, init_size / 2, &consumed)"
                                ,iVar3 != 0);
              if ((iVar3 != 0) &&
                 (iVar3 = test_size_t_eq("test/quic_stream_test.c",0xfb,"consumed","init_size / 2",
                                         local_a0,0x1000), iVar3 != 0)) {
                iVar3 = ossl_quic_sstream_mark_transmitted(uVar5,0,0xfff);
                iVar3 = test_true("test/quic_stream_test.c",0xfc,
                                  "ossl_quic_sstream_mark_transmitted(sstream, 0, init_size / 2 - 1)"
                                  ,iVar3 != 0);
                if (iVar3 != 0) {
                  iVar3 = ossl_quic_sstream_mark_acked(uVar5,0,0xfff);
                  iVar3 = test_true("test/quic_stream_test.c",0xfe,
                                    "ossl_quic_sstream_mark_acked(sstream, 0, init_size / 2 - 1)",
                                    iVar3 != 0);
                  if (iVar3 != 0) {
                    puVar8 = __src;
                    do {
                      uVar2 = test_random();
                      puVar9 = puVar8 + 1;
                      *puVar8 = uVar2;
                      puVar8 = puVar9;
                    } while (__src + 0x2000 != puVar9);
                    uVar10 = 0;
                    pvVar14 = local_e0;
                    do {
                      uVar4 = test_random();
                      iVar3 = ossl_quic_sstream_append(uVar5,__src,(uVar4 & 0x1fff) + 1,&local_a0);
                      iVar3 = test_true("test/quic_stream_test.c",0x10c,
                                        "ossl_quic_sstream_append(sstream, src_buf, l, &consumed)",
                                        iVar3 != 0);
                      sVar1 = local_a0;
                      if (iVar3 == 0) {
                        uVar4 = 0;
                        goto LAB_00101387;
                      }
                      pvVar13 = (void *)((long)pvVar14 + local_a0);
                      uVar10 = uVar10 + local_a0;
                      memcpy(pvVar14,__src,local_a0);
                      pvVar14 = pvVar13;
                    } while (sVar1 != 0);
                    uVar6 = ossl_quic_sstream_get_buffer_used(uVar5);
                    iVar3 = test_size_t_eq("test/quic_stream_test.c",0x114,
                                           "ossl_quic_sstream_get_buffer_used(sstream)","init_size",
                                           uVar6,0x2000);
                    if (iVar3 != 0) {
                      uVar6 = ossl_quic_sstream_get_buffer_avail(uVar5);
                      iVar3 = test_size_t_eq("test/quic_stream_test.c",0x115,
                                             "ossl_quic_sstream_get_buffer_avail(sstream)",&_LC17,
                                             uVar6,0);
                      if (iVar3 != 0) {
                        local_d0 = uVar10;
                        if (uVar10 != 0) {
                          local_d0 = 0;
                          lVar11 = 0x1000;
                          local_d8 = local_e8;
                          do {
                            uVar7 = test_random();
                            if ((uVar7 & 1) == 0) {
                              iVar3 = ossl_quic_sstream_mark_transmitted(uVar5,lVar11,lVar11);
                              iVar3 = test_true("test/quic_stream_test.c",0x123,
                                                "ossl_quic_sstream_mark_transmitted(sstream, start_at + i, start_at + i)"
                                                ,iVar3 != 0);
                              if (iVar3 == 0) goto LAB_00101544;
                            }
                            else {
                              local_d0 = local_d0 + 1;
                              *local_d8 = *(undefined1 *)((long)local_e0 + lVar11 + -0x1000);
                              local_d8 = local_d8 + 1;
                            }
                            lVar11 = lVar11 + 1;
                          } while (uVar10 + 0x1000 != lVar11);
                        }
                        iVar3 = ossl_quic_sstream_set_buffer_size(uVar5,0x4000);
                        iVar3 = test_true("test/quic_stream_test.c",300,
                                          "ossl_quic_sstream_set_buffer_size(sstream, init_size * 2)"
                                          ,iVar3 != 0);
                        if (iVar3 != 0) {
                          iVar3 = ossl_quic_sstream_set_buffer_size(uVar5,0x2000);
                          iVar3 = test_true("test/quic_stream_test.c",0x12d,
                                            "ossl_quic_sstream_set_buffer_size(sstream, init_size)",
                                            iVar3 != 0);
                          if (iVar3 != 0) {
                            local_c0 = 0;
                            local_b8 = ptr;
                            for (uVar10 = 0; uVar10 < local_d0; uVar10 = uVar10 + lVar11) {
                              psVar12 = local_68;
                              local_a8 = 2;
                              iVar3 = ossl_quic_sstream_get_stream_frame
                                                (uVar5,local_c0,local_98,psVar12,&local_a8);
                              iVar3 = test_true("test/quic_stream_test.c",0x134,
                                                "ossl_quic_sstream_get_stream_frame(sstream, i, &hdr, iov, &num_iov)"
                                                ,iVar3 != 0);
                              if (iVar3 == 0) goto LAB_00101544;
                              lVar11 = 0;
                              for (uVar7 = 0; uVar7 < local_a8; uVar7 = uVar7 + 1) {
                                iVar3 = test_size_t_le("test/quic_stream_test.c",0x13a,
                                                       "iov[j].buf_len + rd","expected",
                                                       psVar12[1] + uVar10,local_d0);
                                if (iVar3 == 0) goto LAB_00101544;
                                sVar1 = psVar12[1];
                                pvVar14 = (void *)*psVar12;
                                psVar12 = psVar12 + 2;
                                lVar11 = lVar11 + sVar1;
                                memcpy(local_b8,pvVar14,sVar1);
                                local_b8 = (void *)((long)local_b8 + sVar1);
                              }
                              iVar3 = test_uint64_t_eq("test/quic_stream_test.c",0x142,"cur_rd",
                                                       "hdr.len",lVar11,local_88);
                              if (iVar3 == 0) goto LAB_00101544;
                              local_c0 = local_c0 + 1;
                            }
                            iVar3 = test_mem_eq("test/quic_stream_test.c",0x148,"dst_buf",
                                                "ref_dst_buf",ptr,uVar10,local_e8,local_d0);
                            uVar4 = (uint)(iVar3 != 0);
                            goto LAB_00101387;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
LAB_00101544:
            uVar4 = 0;
          }
        }
      }
      goto LAB_00101387;
    }
  }
  local_e8 = (undefined1 *)0x0;
  ptr = (void *)0x0;
  __src = (undefined1 *)0x0;
  uVar4 = 0;
  local_e0 = (void *)0x0;
LAB_00101387:
  CRYPTO_free(__src);
  CRYPTO_free(ptr);
  CRYPTO_free(local_e0);
  CRYPTO_free(local_e8);
  ossl_quic_sstream_free(uVar5);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}



undefined8 compare_iov(void *param_1,long param_2,undefined8 *param_3,ulong param_4)

{
  long *plVar1;
  long *plVar2;
  size_t __n;
  int iVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  if (param_4 == 0) {
    return 0;
  }
  uVar5 = param_4 - 1;
  if (uVar5 < 2) {
    lVar6 = 0;
    uVar5 = 0;
  }
  else {
    lVar6 = 0;
    lVar7 = 0;
    puVar4 = param_3;
    do {
      plVar1 = puVar4 + 1;
      plVar2 = puVar4 + 3;
      puVar4 = puVar4 + 4;
      lVar6 = lVar6 + *plVar1;
      lVar7 = lVar7 + *plVar2;
    } while (puVar4 != param_3 + (uVar5 >> 1) * 4);
    uVar5 = uVar5 & 0xfffffffffffffffe;
    lVar6 = lVar6 + lVar7;
  }
  lVar6 = lVar6 + param_3[uVar5 * 2 + 1];
  if (uVar5 + 1 < param_4) {
    lVar6 = lVar6 + param_3[uVar5 * 2 + 3];
  }
  if (param_2 == lVar6) {
    uVar5 = 0;
    while( true ) {
      __n = param_3[1];
      iVar3 = memcmp(param_1,(void *)*param_3,__n);
      if (iVar3 != 0) break;
      uVar5 = uVar5 + 1;
      param_1 = (void *)((long)param_1 + __n);
      param_3 = param_3 + 2;
      if (param_4 == uVar5) {
        return 1;
      }
    }
  }
  return 0;
}



bool test_sstream_simple(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  bool bVar4;
  long local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined1 local_98 [8];
  undefined8 local_90;
  undefined8 local_88;
  byte local_78;
  undefined1 local_68 [40];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_a8 = 0;
  local_a0 = 0;
  uVar2 = ossl_quic_sstream_new(0x2000);
  iVar1 = test_ptr("test/quic_stream_test.c",0x30,"sstream = ossl_quic_sstream_new(init_size)",uVar2
                  );
  if (iVar1 != 0) {
    iVar1 = ossl_quic_sstream_is_totally_acked(uVar2);
    iVar1 = test_true("test/quic_stream_test.c",0x34,"ossl_quic_sstream_is_totally_acked(sstream)",
                      iVar1 != 0);
    if (iVar1 != 0) {
      local_a8 = 2;
      iVar1 = ossl_quic_sstream_get_stream_frame(uVar2,0,local_98,local_68,&local_a8);
      iVar1 = test_false("test/quic_stream_test.c",0x39,
                         "ossl_quic_sstream_get_stream_frame(sstream, 0, &hdr, iov, &num_iov)",
                         iVar1 != 0);
      if (iVar1 != 0) {
        iVar1 = ossl_quic_sstream_append(uVar2,data_1,0x10,&local_a0);
        iVar1 = test_true("test/quic_stream_test.c",0x3e,
                          "ossl_quic_sstream_append(sstream, data_1, sizeof(data_1), &wr)",
                          iVar1 != 0);
        if (iVar1 != 0) {
          iVar1 = test_size_t_eq("test/quic_stream_test.c",0x40,&_LC77,"sizeof(data_1)",local_a0,
                                 0x10);
          if (iVar1 != 0) {
            iVar1 = ossl_quic_sstream_is_totally_acked(uVar2);
            iVar1 = test_false("test/quic_stream_test.c",0x44,
                               "ossl_quic_sstream_is_totally_acked(sstream)",iVar1 != 0);
            if (iVar1 != 0) {
              local_a8 = 2;
              iVar1 = ossl_quic_sstream_get_stream_frame(uVar2,0,local_98,local_68,&local_a8);
              iVar1 = test_true("test/quic_stream_test.c",0x49,
                                "ossl_quic_sstream_get_stream_frame(sstream, 0, &hdr, iov, &num_iov)"
                                ,iVar1 != 0);
              if (iVar1 != 0) {
                iVar1 = test_size_t_gt("test/quic_stream_test.c",0x4b,"num_iov",&_LC17,local_a8,0);
                if (iVar1 != 0) {
                  iVar1 = test_uint64_t_eq("test/quic_stream_test.c",0x4c,"hdr.offset",&_LC17,
                                           local_90,0);
                  if (iVar1 != 0) {
                    iVar1 = test_uint64_t_eq("test/quic_stream_test.c",0x4d,"hdr.len",
                                             "sizeof(data_1)",local_88,0x10);
                    if (iVar1 != 0) {
                      iVar1 = test_false("test/quic_stream_test.c",0x4e,"hdr.is_fin",
                                         local_78 >> 1 & 1);
                      if (iVar1 != 0) {
                        iVar1 = compare_iov(data_1,0x10,local_68,local_a8);
                        iVar1 = test_true("test/quic_stream_test.c",0x51,
                                          "compare_iov(data_1, sizeof(data_1), iov, num_iov)",
                                          iVar1 != 0);
                        if (iVar1 != 0) {
                          iVar1 = ossl_quic_sstream_mark_transmitted(uVar2,0,7);
                          iVar1 = test_true("test/quic_stream_test.c",0x55,
                                            "ossl_quic_sstream_mark_transmitted(sstream, 0, 7)",
                                            iVar1 != 0);
                          if (iVar1 != 0) {
                            local_a8 = 2;
                            iVar1 = ossl_quic_sstream_get_stream_frame
                                              (uVar2,0,local_98,local_68,&local_a8);
                            iVar1 = test_true("test/quic_stream_test.c",0x5a,
                                              "ossl_quic_sstream_get_stream_frame(sstream, 0, &hdr, iov, &num_iov)"
                                              ,iVar1 != 0);
                            if (iVar1 != 0) {
                              iVar1 = test_size_t_gt("test/quic_stream_test.c",0x5c,"num_iov",&_LC17
                                                     ,local_a8,0);
                              if (iVar1 != 0) {
                                iVar1 = test_uint64_t_eq("test/quic_stream_test.c",0x5d,"hdr.offset"
                                                         ,&_LC83,local_90,8);
                                if (iVar1 != 0) {
                                  iVar1 = test_uint64_t_eq("test/quic_stream_test.c",0x5e,"hdr.len",
                                                           "sizeof(data_1) - 8",local_88,8);
                                  if (iVar1 != 0) {
                                    iVar1 = test_false("test/quic_stream_test.c",0x5f,"hdr.is_fin",
                                                       local_78 >> 1 & 1);
                                    if (iVar1 != 0) {
                                      iVar1 = compare_iov(0x1036b8,8,local_68,local_a8);
                                      iVar1 = test_true("test/quic_stream_test.c",0x62,
                                                                                                                
                                                  "compare_iov(data_1 + 8, sizeof(data_1) - 8, iov, num_iov)"
                                                  ,iVar1 != 0);
                                      if (iVar1 != 0) {
                                        iVar1 = ossl_quic_sstream_mark_transmitted(uVar2,8,0xf);
                                        iVar1 = test_true("test/quic_stream_test.c",0x65,
                                                                                                                    
                                                  "ossl_quic_sstream_mark_transmitted(sstream, 8, 15)"
                                                  ,iVar1 != 0);
                                        if (iVar1 != 0) {
                                          local_a8 = 2;
                                          iVar1 = ossl_quic_sstream_get_stream_frame
                                                            (uVar2,0,local_98,local_68,&local_a8);
                                          iVar1 = test_false("test/quic_stream_test.c",0x6a,
                                                                                                                          
                                                  "ossl_quic_sstream_get_stream_frame(sstream, 0, &hdr, iov, &num_iov)"
                                                  ,iVar1 != 0);
                                          if (iVar1 != 0) {
                                            iVar1 = ossl_quic_sstream_mark_lost(uVar2,4,6);
                                            iVar1 = test_true("test/quic_stream_test.c",0x6f,
                                                                                                                            
                                                  "ossl_quic_sstream_mark_lost(sstream, 4, 6)",
                                                  iVar1 != 0);
                                            if (iVar1 != 0) {
                                              local_a8 = 2;
                                              iVar1 = ossl_quic_sstream_get_stream_frame
                                                                (uVar2,0,local_98,local_68,&local_a8
                                                                );
                                              iVar1 = test_true("test/quic_stream_test.c",0x74,
                                                                                                                                
                                                  "ossl_quic_sstream_get_stream_frame(sstream, 0, &hdr, iov, &num_iov)"
                                                  ,iVar1 != 0);
                                              if (iVar1 != 0) {
                                                iVar1 = test_size_t_gt("test/quic_stream_test.c",
                                                                       0x76,"num_iov",&_LC17,
                                                                       local_a8,0);
                                                if (iVar1 != 0) {
                                                  iVar1 = test_uint64_t_eq("test/quic_stream_test.c"
                                                                           ,0x77,"hdr.offset",&_LC88
                                                                           ,local_90,4);
                                                  if (iVar1 != 0) {
                                                    iVar1 = test_uint64_t_eq(
                                                  "test/quic_stream_test.c",0x78,"hdr.len",&_LC89,
                                                  local_88,3);
                                                  if (iVar1 != 0) {
                                                    iVar1 = test_false("test/quic_stream_test.c",
                                                                       0x79,"hdr.is_fin",
                                                                       local_78 >> 1 & 1);
                                                    if (iVar1 != 0) {
                                                      iVar1 = compare_iov(0x1036b4,3,local_68,
                                                                          local_a8);
                                                      iVar1 = test_true("test/quic_stream_test.c",
                                                                        0x7c,
                                                  "compare_iov(data_1 + 4, 3, iov, num_iov)",
                                                  iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = ossl_quic_sstream_mark_transmitted
                                                                      (uVar2,4,6);
                                                    iVar1 = test_true("test/quic_stream_test.c",0x80
                                                                      ,
                                                  "ossl_quic_sstream_mark_transmitted(sstream, 4, 6)"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    local_a8 = 2;
                                                    iVar1 = ossl_quic_sstream_get_stream_frame
                                                                      (uVar2,0,local_98,local_68,
                                                                       &local_a8);
                                                    iVar1 = test_false("test/quic_stream_test.c",
                                                                       0x85,
                                                  "ossl_quic_sstream_get_stream_frame(sstream, 0, &hdr, iov, &num_iov)"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    uVar3 = ossl_quic_sstream_get_buffer_used(uVar2)
                                                    ;
                                                    iVar1 = test_size_t_eq("test/quic_stream_test.c"
                                                                           ,0x89,
                                                  "ossl_quic_sstream_get_buffer_used(sstream)",
                                                  &_LC92,uVar3,0x10);
                                                  if (iVar1 != 0) {
                                                    iVar1 = ossl_quic_sstream_mark_acked(uVar2,1,7);
                                                    iVar1 = test_true("test/quic_stream_test.c",0x8d
                                                                      ,
                                                  "ossl_quic_sstream_mark_acked(sstream, 1, 7)",
                                                  iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    uVar3 = ossl_quic_sstream_get_buffer_used(uVar2)
                                                    ;
                                                    iVar1 = test_size_t_eq("test/quic_stream_test.c"
                                                                           ,0x8e,
                                                  "ossl_quic_sstream_get_buffer_used(sstream)",
                                                  &_LC92,uVar3,0x10);
                                                  if (iVar1 != 0) {
                                                    iVar1 = ossl_quic_sstream_mark_acked(uVar2,0,0);
                                                    iVar1 = test_true("test/quic_stream_test.c",0x92
                                                                      ,
                                                  "ossl_quic_sstream_mark_acked(sstream, 0, 0)",
                                                  iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    uVar3 = ossl_quic_sstream_get_buffer_used(uVar2)
                                                    ;
                                                    iVar1 = test_size_t_eq("test/quic_stream_test.c"
                                                                           ,0x93,
                                                  "ossl_quic_sstream_get_buffer_used(sstream)",
                                                  &_LC83,uVar3,8);
                                                  if (iVar1 != 0) {
                                                    iVar1 = ossl_quic_sstream_mark_acked
                                                                      (uVar2,0,0xf);
                                                    iVar1 = test_true("test/quic_stream_test.c",0x96
                                                                      ,
                                                  "ossl_quic_sstream_mark_acked(sstream, 0, 15)",
                                                  iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    uVar3 = ossl_quic_sstream_get_buffer_used(uVar2)
                                                    ;
                                                    iVar1 = test_size_t_eq("test/quic_stream_test.c"
                                                                           ,0x97,
                                                  "ossl_quic_sstream_get_buffer_used(sstream)",
                                                  &_LC17,uVar3,0);
                                                  if (iVar1 != 0) {
                                                    ossl_quic_sstream_fin(uVar2);
                                                    local_b0 = 2;
                                                    while( true ) {
                                                      local_a8 = 2;
                                                      iVar1 = ossl_quic_sstream_get_stream_frame
                                                                        (uVar2,0,local_98,local_68,
                                                                         &local_a8);
                                                      iVar1 = test_true("test/quic_stream_test.c",
                                                                        0xa0,
                                                  "ossl_quic_sstream_get_stream_frame(sstream, 0, &hdr, iov, &num_iov)"
                                                  ,iVar1 != 0);
                                                  if (iVar1 == 0) break;
                                                  iVar1 = test_uint64_t_eq("test/quic_stream_test.c"
                                                                           ,0xa2,"hdr.offset",&_LC92
                                                                           ,local_90,0x10);
                                                  if (iVar1 == 0) break;
                                                  iVar1 = test_uint64_t_eq("test/quic_stream_test.c"
                                                                           ,0xa3,"hdr.len",&_LC17,
                                                                           local_88,0);
                                                  if (iVar1 == 0) break;
                                                  iVar1 = test_true("test/quic_stream_test.c",0xa4,
                                                                    "hdr.is_fin",local_78 >> 1 & 1);
                                                  if (iVar1 == 0) break;
                                                  iVar1 = test_size_t_eq("test/quic_stream_test.c",
                                                                         0xa5,"num_iov",&_LC17,
                                                                         local_a8,0);
                                                  if (iVar1 == 0) break;
                                                  if (local_b0 == 1) {
                                                    iVar1 = ossl_quic_sstream_mark_transmitted_fin
                                                                      (uVar2,0x10);
                                                    iVar1 = test_true("test/quic_stream_test.c",0xa9
                                                                      ,
                                                  "ossl_quic_sstream_mark_transmitted_fin(sstream, 16)"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    local_a8 = 2;
                                                    iVar1 = ossl_quic_sstream_get_stream_frame
                                                                      (uVar2,0,local_98,local_68,
                                                                       &local_a8);
                                                    iVar1 = test_false("test/quic_stream_test.c",
                                                                       0xae,
                                                  "ossl_quic_sstream_get_stream_frame(sstream, 0, &hdr, iov, &num_iov)"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = ossl_quic_sstream_mark_lost_fin(uVar2);
                                                    iVar1 = test_true("test/quic_stream_test.c",0xb3
                                                                      ,
                                                  "ossl_quic_sstream_mark_lost_fin(sstream)",
                                                  iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    local_b0 = 2;
                                                    goto LAB_0010249a;
                                                  }
                                                  }
                                                  }
                                                  break;
                                                  }
                                                  local_b0 = 1;
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
LAB_00101b86:
  bVar4 = false;
LAB_00101b88:
  ossl_quic_sstream_free(uVar2);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_0010249a:
  local_a8 = 2;
  iVar1 = ossl_quic_sstream_get_stream_frame(uVar2,0,local_98,local_68,&local_a8);
  iVar1 = test_true("test/quic_stream_test.c",0xb9,
                    "ossl_quic_sstream_get_stream_frame(sstream, 0, &hdr, iov, &num_iov)",iVar1 != 0
                   );
  if (iVar1 == 0) goto LAB_00101b86;
  iVar1 = test_uint64_t_eq("test/quic_stream_test.c",0xbb,"hdr.offset",&_LC92,local_90,0x10);
  if (iVar1 == 0) goto LAB_00101b86;
  iVar1 = test_uint64_t_eq("test/quic_stream_test.c",0xbc,"hdr.len",&_LC17,local_88,0);
  if (iVar1 == 0) goto LAB_00101b86;
  iVar1 = test_true("test/quic_stream_test.c",0xbd,"hdr.is_fin",local_78 >> 1 & 1);
  if (iVar1 == 0) goto LAB_00101b86;
  iVar1 = test_size_t_eq("test/quic_stream_test.c",0xbe,"num_iov",&_LC17,local_a8,0);
  if (iVar1 == 0) goto LAB_00101b86;
  if (local_b0 == 1) {
    iVar1 = ossl_quic_sstream_mark_transmitted_fin(uVar2,0x10);
    iVar1 = test_true("test/quic_stream_test.c",0xc2,
                      "ossl_quic_sstream_mark_transmitted_fin(sstream, 16)",iVar1 != 0);
    if (iVar1 != 0) {
      local_a8 = 2;
      iVar1 = ossl_quic_sstream_get_stream_frame(uVar2,0,local_98,local_68,&local_a8);
      iVar1 = test_false("test/quic_stream_test.c",199,
                         "ossl_quic_sstream_get_stream_frame(sstream, 0, &hdr, iov, &num_iov)",
                         iVar1 != 0);
      if (iVar1 != 0) {
        iVar1 = ossl_quic_sstream_mark_acked_fin(uVar2);
        iVar1 = test_true("test/quic_stream_test.c",0xcc,"ossl_quic_sstream_mark_acked_fin(sstream)"
                          ,iVar1 != 0);
        if (iVar1 != 0) {
          iVar1 = ossl_quic_sstream_is_totally_acked(uVar2);
          iVar1 = test_true("test/quic_stream_test.c",0xcf,
                            "ossl_quic_sstream_is_totally_acked(sstream)",iVar1 != 0);
          bVar4 = iVar1 != 0;
          goto LAB_00101b88;
        }
      }
    }
    goto LAB_00101b86;
  }
  local_b0 = 1;
  goto LAB_0010249a;
}



undefined8 setup_tests(void)

{
  add_test("test_sstream_simple",test_sstream_simple);
  add_all_tests("test_sstream_bulk",test_sstream_bulk,100,1);
  add_all_tests("test_rstream_simple",test_rstream_simple,4,1);
  add_all_tests("test_rstream_random",test_rstream_random,100,1);
  return 1;
}


