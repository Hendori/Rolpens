
bool compare_addr(undefined8 param_1,undefined8 param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  long in_FS_OFFSET;
  bool bVar8;
  undefined1 *local_80;
  undefined1 local_78 [4];
  undefined1 local_74 [4];
  undefined8 local_70;
  undefined1 local_68 [16];
  undefined1 local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = BIO_ADDR_family();
  iVar4 = BIO_ADDR_family(param_2);
  if (iVar3 == iVar4) {
    iVar3 = BIO_ADDR_family(param_1);
    if (iVar3 == 2) {
      local_80 = local_74;
      uVar7 = 4;
      puVar6 = local_78;
    }
    else {
      iVar3 = BIO_ADDR_family(param_1);
      if (iVar3 != 10) goto LAB_00100039;
      local_80 = local_58;
      uVar7 = 0x10;
      puVar6 = local_68;
    }
    local_70 = uVar7;
    uVar5 = BIO_ADDR_rawaddress(param_1,puVar6,&local_70);
    iVar3 = test_int_eq("test/bio_dgram_test.c",0x30,"BIO_ADDR_rawaddress(a, pa, &tmplen)",&_LC0,
                        uVar5,1);
    if (iVar3 != 0) {
      local_70 = uVar7;
      uVar5 = BIO_ADDR_rawaddress(param_2,local_80,&local_70);
      iVar3 = test_int_eq("test/bio_dgram_test.c",0x34,"BIO_ADDR_rawaddress(b, pb, &tmplen)",&_LC0,
                          uVar5,1);
      if (iVar3 != 0) {
        iVar3 = test_mem_eq("test/bio_dgram_test.c",0x37,&_LC5,&_LC4,puVar6,uVar7);
        if (iVar3 != 0) {
          uVar1 = BIO_ADDR_rawport(param_2);
          uVar2 = BIO_ADDR_rawport(param_1);
          iVar3 = test_int_eq("test/bio_dgram_test.c",0x3a,"BIO_ADDR_rawport(a)",
                              "BIO_ADDR_rawport(b)",uVar2,uVar1);
          bVar8 = iVar3 != 0;
          goto LAB_0010003b;
        }
      }
    }
  }
LAB_00100039:
  bVar8 = false;
LAB_0010003b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4 random_data_constprop_0(undefined8 param_1,uchar *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  EVP_CIPHER_CTX *ctx;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  int local_5c;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_4c = 0;
  local_54 = 0;
  local_58 = param_3;
  ctx = EVP_CIPHER_CTX_new();
  if (ctx == (EVP_CIPHER_CTX *)0x0) {
LAB_001002e0:
    lVar3 = 0;
  }
  else {
    lVar3 = EVP_CIPHER_fetch(0,"ChaCha20",0);
    if (lVar3 == 0) goto LAB_001002e0;
    iVar1 = EVP_EncryptInit_ex2(ctx,lVar3,param_1,&local_58,0);
    if (iVar1 != 0) {
      uVar5 = 0x804;
      do {
        uVar4 = 0x800;
        if (uVar5 < 0x801) {
          uVar4 = uVar5;
        }
        local_5c = (int)uVar4;
        iVar1 = EVP_EncryptUpdate(ctx,param_2,&local_5c,zeroes_0,local_5c);
        if (iVar1 != 1) goto LAB_001002a0;
        param_2 = param_2 + local_5c;
        uVar5 = uVar5 - (long)local_5c;
        uVar2 = 1;
      } while (uVar5 != 0);
      goto LAB_001002a2;
    }
  }
LAB_001002a0:
  uVar2 = 0;
LAB_001002a2:
  EVP_CIPHER_CTX_free(ctx);
  EVP_CIPHER_free(lVar3);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint test_bio_dgram_pair(int param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  BIO_METHOD *type;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  ulong uVar13;
  ulong uVar14;
  long in_FS_OFFSET;
  byte bVar15;
  undefined8 uVar16;
  ulong local_1158;
  undefined4 *local_1140;
  undefined4 local_1124;
  BIO *local_1120;
  BIO *local_1118;
  undefined8 local_1110;
  undefined4 local_1108 [8];
  undefined1 local_10e8 [16];
  undefined1 local_10d8 [16];
  undefined1 local_10c8 [16];
  undefined1 local_10b8 [16];
  undefined1 local_10a8 [16];
  undefined4 *local_1098;
  undefined8 uStack_1090;
  undefined1 local_1088 [16];
  undefined8 local_1078;
  undefined1 *puStack_1070;
  undefined1 local_1068 [16];
  undefined1 local_1058 [16];
  undefined4 local_1048 [16];
  undefined1 local_1008 [1984];
  uint local_848;
  undefined1 local_844 [15];
  undefined1 local_835 [2037];
  long local_40;
  
  bVar15 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_1124 = 0x100007f;
  local_1120 = (BIO *)0x0;
  local_1118 = (BIO *)0x0;
  local_1110 = 0;
  local_10e8 = (undefined1  [16])0x0;
  local_10d8 = (undefined1  [16])0x0;
  local_10c8 = (undefined1  [16])0x0;
  local_10b8 = (undefined1  [16])0x0;
  local_10a8 = (undefined1  [16])0x0;
  local_1098 = (undefined4 *)0x0;
  uStack_1090 = 0;
  local_1088 = (undefined1  [16])0x0;
  local_1078 = 0;
  puStack_1070 = (undefined1 *)0x0;
  local_1068 = (undefined1  [16])0x0;
  local_1058 = (undefined1  [16])0x0;
  puVar11 = local_1108;
  do {
    uVar2 = test_random();
    puVar12 = puVar11 + 1;
    *puVar11 = uVar2;
    puVar11 = puVar12;
  } while (puVar12 != (undefined4 *)local_10e8);
  if (param_1 != 0) {
    type = (BIO_METHOD *)BIO_s_dgram_mem();
    local_1120 = BIO_new(type);
    local_1118 = local_1120;
    iVar3 = test_ptr("test/bio_dgram_test.c",0x209,"bio1 = bio2 = BIO_new(BIO_s_dgram_mem())");
    if (iVar3 != 0) {
      uVar5 = BIO_ctrl(local_1120,0x29,0,(void *)0x0);
      local_1158 = uVar5 & 0xffffffff;
      iVar3 = test_int_ge("test/bio_dgram_test.c",0x20e,&_LC14,&_LC12,uVar5 & 0xffffffff,0x500);
      if (iVar3 != 0) {
        if (param_1 != 1) goto LAB_00100462;
        BIO_ctrl(local_1120,0x88,(long)(int)uVar5 * 9 + 0x828,(void *)0x0);
        iVar3 = test_true("test/bio_dgram_test.c",0x219,"BIO_set_write_buf_size(bio1, bufsz)");
        if (iVar3 != 0) {
          lVar6 = BIO_ctrl(local_1118,0x29,0,(void *)0x0);
          uVar2 = (undefined4)lVar6;
          iVar3 = test_int_ge("test/bio_dgram_test.c",0x21e,&_LC13,&_LC12,lVar6,0x500);
          if (iVar3 != 0) goto LAB_00100680;
        }
      }
    }
LAB_001005e8:
    local_1158 = 0;
    uVar9 = 0;
    uVar8 = 0;
    uVar4 = 0;
    uVar7 = 0;
    goto LAB_001005fb;
  }
  uVar2 = BIO_new_bio_dgram_pair(&local_1120,0,&local_1118,0);
  iVar3 = test_int_eq("test/bio_dgram_test.c",0x206,"BIO_new_bio_dgram_pair(&bio1, 0, &bio2, 0)",
                      &_LC0,uVar2,1);
  if (iVar3 == 0) {
LAB_00100658:
    local_1158 = 0;
    uVar4 = 0;
    uVar9 = 0;
    uVar8 = 0;
    uVar7 = 0;
  }
  else {
    uVar5 = BIO_ctrl(local_1120,0x29,0,(void *)0x0);
    local_1158 = uVar5 & 0xffffffff;
    iVar3 = test_int_ge("test/bio_dgram_test.c",0x20e,&_LC14,&_LC12,uVar5 & 0xffffffff,0x500);
    if (iVar3 == 0) goto LAB_00100658;
LAB_00100462:
    lVar6 = BIO_ctrl(local_1118,0x29,0,(void *)0x0);
    uVar2 = (undefined4)lVar6;
    iVar3 = test_int_ge("test/bio_dgram_test.c",0x21e,&_LC13,&_LC12,lVar6,0x500);
    if (iVar3 == 0) {
LAB_001004a4:
      local_1158 = 0;
      uVar9 = 0;
      uVar8 = 0;
      uVar4 = 0;
      uVar7 = 0;
LAB_001004b7:
      if (param_1 != 0) goto LAB_001005fb;
    }
    else {
LAB_00100680:
      iVar3 = test_int_eq("test/bio_dgram_test.c",0x221,&_LC14,&_LC13,local_1158,uVar2);
      if ((iVar3 == 0) ||
         (iVar3 = test_int_le("test/bio_dgram_test.c",0x224,&_LC14,"sizeof(scratch) - 4",local_1158,
                              0x800), iVar3 == 0)) goto LAB_001004a4;
      uVar14 = 0;
      uVar13 = 0;
      do {
        uVar2 = random_data_constprop_0(local_1108,&local_848,uVar13);
        iVar3 = test_int_eq("test/bio_dgram_test.c",0x228,
                            "random_data(key, scratch, sizeof(scratch), i)",&_LC0,uVar2,1);
        if (iVar3 == 0) goto LAB_001004a4;
        iVar10 = (int)((ulong)local_848 % (uVar5 & 0xffffffff)) + 1;
        iVar3 = BIO_write(local_1120,local_844,iVar10);
        if (iVar3 == -1) break;
        iVar3 = test_int_eq("test/bio_dgram_test.c",0x230,&_LC18,&_LC17,iVar3,iVar10);
        if (iVar3 == 0) goto LAB_001004a4;
        uVar13 = uVar13 + 1;
        uVar14 = uVar14 + (long)iVar10;
      } while (uVar14 < 0x100000);
      if (param_1 < 2) {
        iVar3 = test_size_t_lt("test/bio_dgram_test.c",0x236,"total","1 * 1024 * 1024",uVar14,
                               0x100000);
        if ((iVar3 == 0) ||
           (iVar3 = test_int_ge("test/bio_dgram_test.c",0x243,&_LC22,&_LC21,uVar13 & 0xffffffff,9),
           iVar3 == 0)) goto LAB_001004a4;
      }
      else if (((param_1 == 2) &&
               (iVar3 = test_size_t_ge("test/bio_dgram_test.c",0x239,"total","1 * 1024 * 1024",
                                       uVar14,0x100000), iVar3 == 0)) ||
              (iVar3 = test_int_ge("test/bio_dgram_test.c",0x243,&_LC22,&_LC21,uVar13 & 0xffffffff,9
                                  ), iVar3 == 0)) goto LAB_001005e8;
      if (uVar13 != 0) {
        uVar14 = 0;
        do {
          uVar2 = random_data_constprop_0(local_1108,&local_848,uVar14);
          iVar3 = test_int_eq("test/bio_dgram_test.c",0x249,
                              "random_data(key, scratch, sizeof(scratch), i)",&_LC0,uVar2,1);
          if (iVar3 == 0) goto LAB_001004a4;
          iVar10 = local_848 % (uint)uVar5 + 1;
          iVar3 = BIO_read(local_1118,local_1048,0x800);
          iVar3 = test_int_eq("test/bio_dgram_test.c",0x24e,&_LC18,&_LC17,iVar3,iVar10);
          if ((iVar3 == 0) ||
             (iVar3 = test_mem_eq("test/bio_dgram_test.c",0x251,"scratch + 4","scratch2",local_844,
                                  (long)iVar10,local_1048,(long)iVar10), iVar3 == 0))
          goto LAB_001004a4;
          uVar14 = uVar14 + 1;
        } while (uVar13 != uVar14);
      }
      local_1140 = local_1048;
      iVar3 = BIO_read(local_1118,local_1140,0x800);
      iVar3 = test_int_eq("test/bio_dgram_test.c",0x256,"BIO_read(bio2, scratch2, sizeof(scratch2))"
                          ,&_LC25,iVar3,0xffffffff);
      if (iVar3 == 0) goto LAB_001004a4;
      uVar2 = random_data_constprop_0(local_1108,&local_848,0);
      iVar3 = test_int_eq("test/bio_dgram_test.c",0x25a,
                          "random_data(key, scratch, sizeof(scratch), 0)",&_LC0,uVar2,1);
      if (iVar3 == 0) goto LAB_001004a4;
      local_10e8._8_8_ = 0x13;
      local_10e8._0_8_ = &local_848;
      local_10c8._8_8_ = local_835;
      local_10b8._0_8_ = 0x2e;
      iVar3 = BIO_sendmmsg(local_1120,local_10e8,0x28,2,0,&local_1110);
      iVar3 = test_true("test/bio_dgram_test.c",0x262,
                        "BIO_sendmmsg(bio1, msgs, sizeof(BIO_MSG), OSSL_NELEM(msgs), 0, &num_processed)"
                        ,iVar3 != 0);
      if ((iVar3 == 0) ||
         (iVar3 = test_size_t_eq("test/bio_dgram_test.c",0x264,"num_processed",&_LC29,local_1110,2),
         iVar3 == 0)) goto LAB_001004a4;
      local_1098 = local_1140;
      uStack_1090 = 0x40;
      puStack_1070 = local_1008;
      local_1068._0_8_ = 0x40;
      iVar3 = BIO_recvmmsg(local_1118,&local_1098,0x28,2,0,&local_1110);
      iVar3 = test_true("test/bio_dgram_test.c",0x26b,
                        "BIO_recvmmsg(bio2, rmsgs, sizeof(BIO_MSG), OSSL_NELEM(rmsgs), 0, &num_processed)"
                        ,iVar3 != 0);
      if ((iVar3 == 0) ||
         ((iVar3 = test_size_t_eq("test/bio_dgram_test.c",0x26d,"num_processed",&_LC29,local_1110,2)
          , iVar3 == 0 ||
          (iVar3 = test_mem_eq("test/bio_dgram_test.c",0x270,"rmsgs[0].data","scratch",local_1098,
                               uStack_1090,&local_848,0x13), iVar3 == 0)))) goto LAB_001004a4;
      iVar3 = test_mem_eq("test/bio_dgram_test.c",0x273,"rmsgs[1].data","scratch + 19",puStack_1070,
                          local_1068._0_8_,local_835,0x2e);
      if (iVar3 == 0) goto LAB_001004a4;
      local_1158 = BIO_ADDR_new();
      uVar4 = test_ptr("test/bio_dgram_test.c",0x278,"addr1",local_1158);
      if (uVar4 == 0) {
LAB_00101551:
        uVar9 = 0;
        uVar8 = 0;
        uVar7 = 0;
        goto LAB_001004b7;
      }
      uVar2 = BIO_ADDR_rawmake(local_1158,2,&local_1124,4,0x4d2);
      uVar4 = test_int_eq("test/bio_dgram_test.c",0x27b,
                          "BIO_ADDR_rawmake(addr1, AF_INET, &in_local, sizeof(in_local), 1234)",
                          &_LC0,uVar2,1);
      if (uVar4 == 0) goto LAB_00101551;
      uVar7 = BIO_ADDR_new();
      uVar4 = test_ptr("test/bio_dgram_test.c",0x280,"addr2",uVar7);
      if (uVar4 == 0) {
LAB_00101547:
        uVar9 = 0;
        uVar8 = 0;
        goto LAB_001004b7;
      }
      uVar2 = BIO_ADDR_rawmake(uVar7,2,&local_1124,4,0x929);
      uVar4 = test_int_eq("test/bio_dgram_test.c",0x283,
                          "BIO_ADDR_rawmake(addr2, AF_INET, &in_local, sizeof(in_local), 2345)",
                          &_LC0,uVar2,1);
      if (uVar4 == 0) goto LAB_00101547;
      uVar8 = BIO_ADDR_new();
      uVar9 = 0;
      uVar4 = test_ptr("test/bio_dgram_test.c",0x288,"addr3",uVar8);
      if (uVar4 == 0) goto LAB_001004b7;
      uVar9 = BIO_ADDR_new();
      iVar3 = test_ptr("test/bio_dgram_test.c",0x28c,"addr4",uVar9);
      if (iVar3 == 0) {
LAB_00101540:
        uVar4 = 0;
        goto LAB_001004b7;
      }
      local_10d8._0_8_ = local_1158;
      iVar3 = BIO_sendmmsg(local_1120,local_10e8,0x28,2,0,&local_1110);
      iVar3 = test_false("test/bio_dgram_test.c",0x292,
                         "BIO_sendmmsg(bio1, msgs, sizeof(BIO_MSG), OSSL_NELEM(msgs), 0, &num_processed)"
                         ,iVar3 != 0);
      if (iVar3 == 0) goto LAB_00101540;
      uVar4 = test_size_t_eq("test/bio_dgram_test.c",0x294,"num_processed",&_LC42,local_1110,0);
      if (uVar4 == 0) goto LAB_001004b7;
      uVar5 = BIO_ctrl(local_1118,0x57,0xf,(void *)0x0);
      iVar3 = test_int_eq("test/bio_dgram_test.c",0x297,"BIO_dgram_set_caps(bio2, ref_caps)",&_LC0,
                          uVar5 & 0xffffffff,1);
      if (iVar3 == 0) goto LAB_00101540;
      uVar5 = BIO_ctrl(local_1118,0x56,0,(void *)0x0);
      iVar3 = test_int_eq("test/bio_dgram_test.c",0x29a,"BIO_dgram_get_caps(bio2)","ref_caps",
                          uVar5 & 0xffffffff,0xf);
      if (iVar3 == 0) goto LAB_00101540;
      uVar5 = BIO_ctrl(local_1120,0x55,0,(void *)0x0);
      iVar3 = test_int_eq("test/bio_dgram_test.c",0x29d,"BIO_dgram_get_effective_caps(bio1)",
                          "ref_caps",uVar5 & 0xffffffff,0xf);
      if (iVar3 == 0) goto LAB_00101540;
      if (param_1 != 0) {
        uVar5 = BIO_ctrl(local_1120,0x57,0xf,(void *)0x0);
        uVar4 = test_int_eq("test/bio_dgram_test.c",0x2a3,"BIO_dgram_set_caps(bio1, ref_caps)",&_LC0
                            ,uVar5 & 0xffffffff,1);
        if (uVar4 == 0) goto LAB_001005fb;
LAB_00100f12:
        iVar3 = BIO_sendmmsg(local_1120,local_10e8,0x28,1,0,&local_1110);
        iVar3 = test_true("test/bio_dgram_test.c",0x2a7,
                          "BIO_sendmmsg(bio1, msgs, sizeof(BIO_MSG), 1, 0, &num_processed)",
                          iVar3 != 0);
        if ((iVar3 != 0) &&
           (iVar3 = test_size_t_eq("test/bio_dgram_test.c",0x2a8,"num_processed",&_LC0,local_1110,1)
           , iVar3 != 0)) {
          uVar5 = BIO_ctrl(local_1118,0x54,1,(void *)0x0);
          iVar3 = test_int_eq("test/bio_dgram_test.c",0x2ac,
                              "BIO_dgram_set_local_addr_enable(bio2, 1)",&_LC0,uVar5 & 0xffffffff,1)
          ;
          if (iVar3 != 0) {
            local_1098 = local_1140;
            uStack_1090 = 0x40;
            local_1088._8_8_ = uVar9;
            local_1088._0_8_ = uVar8;
            iVar3 = BIO_recvmmsg(local_1118,&local_1098,0x28,2,0,&local_1110);
            iVar3 = test_true("test/bio_dgram_test.c",0x2b3,
                              "BIO_recvmmsg(bio2, rmsgs, sizeof(BIO_MSG), OSSL_NELEM(rmsgs), 0, &num_processed)"
                              ,iVar3 != 0);
            if (((iVar3 != 0) &&
                (iVar3 = test_size_t_eq("test/bio_dgram_test.c",0x2b5,"num_processed",&_LC0,
                                        local_1110,1), iVar3 != 0)) &&
               (iVar3 = test_mem_eq("test/bio_dgram_test.c",0x2b8,"rmsgs[0].data","msgs[0].data",
                                    local_1098,uStack_1090), iVar3 != 0)) {
              uVar2 = BIO_ADDR_family(uVar8);
              iVar3 = test_int_eq("test/bio_dgram_test.c",700,"BIO_ADDR_family(addr3)",&_LC42,uVar2,
                                  0);
              if (iVar3 != 0) {
                uVar2 = BIO_ADDR_family(uVar9);
                iVar3 = test_int_eq("test/bio_dgram_test.c",0x2bf,"BIO_ADDR_family(addr4)","AF_INET"
                                    ,uVar2,2);
                if (iVar3 != 0) {
                  uVar1 = BIO_ADDR_rawport(uVar9);
                  iVar3 = test_int_eq("test/bio_dgram_test.c",0x2c2,"BIO_ADDR_rawport(addr4)",&_LC54
                                      ,uVar1,0x4d2);
                  if (iVar3 != 0) {
                    local_10d8._8_8_ = uVar7;
                    uVar5 = BIO_ctrl(local_1120,0x54,1,(void *)0x0);
                    iVar3 = test_int_eq("test/bio_dgram_test.c",0x2c8,
                                        "BIO_dgram_set_local_addr_enable(bio1, 1)",&_LC0,
                                        uVar5 & 0xffffffff,1);
                    if (iVar3 != 0) {
                      iVar3 = BIO_sendmmsg(local_1120,local_10e8,0x28,1,0,&local_1110);
                      iVar3 = test_true("test/bio_dgram_test.c",0x2cb,
                                        "BIO_sendmmsg(bio1, msgs, sizeof(BIO_MSG), 1, 0, &num_processed)"
                                        ,iVar3 != 0);
                      if ((iVar3 != 0) &&
                         (iVar3 = test_size_t_eq("test/bio_dgram_test.c",0x2cc,"num_processed",&_LC0
                                                 ,local_1110,1), iVar3 != 0)) {
                        local_1098 = local_1140;
                        uStack_1090 = 0x40;
                        iVar3 = BIO_recvmmsg(local_1118,&local_1098,0x28,2,0,&local_1110);
                        iVar3 = test_true("test/bio_dgram_test.c",0x2d1,
                                          "BIO_recvmmsg(bio2, rmsgs, sizeof(BIO_MSG), OSSL_NELEM(rmsgs), 0, &num_processed)"
                                          ,iVar3 != 0);
                        if ((iVar3 != 0) &&
                           (iVar3 = test_size_t_eq("test/bio_dgram_test.c",0x2d2,"num_processed",
                                                   &_LC0,local_1110,1), iVar3 != 0)) {
                          uVar16 = local_10e8._0_8_;
                          iVar3 = test_mem_eq("test/bio_dgram_test.c",0x2d5,"rmsgs[0].data",
                                              "msgs[0].data",local_1098,uStack_1090,local_10e8._0_8_
                                              ,local_10e8._8_8_);
                          if (iVar3 != 0) {
                            uVar2 = BIO_ADDR_family(uVar8,uVar16);
                            iVar3 = test_int_eq("test/bio_dgram_test.c",0x2d9,
                                                "BIO_ADDR_family(addr3)","AF_INET",uVar2,2);
                            if (iVar3 != 0) {
                              uVar1 = BIO_ADDR_rawport(uVar8);
                              iVar3 = test_int_eq("test/bio_dgram_test.c",0x2dc,
                                                  "BIO_ADDR_rawport(addr3)",&_LC57,uVar1,0x929);
                              if (iVar3 != 0) {
                                uVar2 = BIO_ADDR_family(uVar9);
                                iVar3 = test_int_eq("test/bio_dgram_test.c",0x2df,
                                                    "BIO_ADDR_family(addr4)","AF_INET",uVar2,2);
                                if (iVar3 != 0) {
                                  uVar1 = BIO_ADDR_rawport(uVar9);
                                  iVar3 = test_int_eq("test/bio_dgram_test.c",0x2e2,
                                                      "BIO_ADDR_rawport(addr4)",&_LC54,uVar1,0x4d2);
                                  if (iVar3 != 0) {
                                    iVar3 = BIO_write(local_1120,&local_848,0x40);
                                    iVar3 = test_int_eq("test/bio_dgram_test.c",0x2e7,&_LC18,&_LC59,
                                                        iVar3,0x40);
                                    if (iVar3 != 0) {
                                      puVar11 = local_1140;
                                      for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
                                        *puVar11 = 0;
                                        puVar11 = puVar11 + (ulong)bVar15 * -2 + 1;
                                      }
                                      uVar5 = BIO_ctrl(local_1118,0x59,1,(void *)0x0);
                                      iVar3 = test_int_eq("test/bio_dgram_test.c",0x2eb,
                                                          "BIO_dgram_set_no_trunc(bio2, 1)",&_LC0,
                                                          uVar5 & 0xffffffff,1);
                                      if (iVar3 != 0) {
                                        iVar3 = BIO_read(local_1118,local_1140,0x20);
                                        iVar3 = test_int_eq("test/bio_dgram_test.c",0x2ee,
                                                            "BIO_read(bio2, scratch2, 32)",&_LC25,
                                                            iVar3,0xffffffff);
                                        if (iVar3 != 0) {
                                          uVar5 = BIO_ctrl(local_1118,10,0,(void *)0x0);
                                          iVar3 = test_int_eq("test/bio_dgram_test.c",0x2f1,
                                                              "BIO_pending(bio2)",&_LC59,
                                                              uVar5 & 0xffffffff,0x40);
                                          if (iVar3 != 0) {
                                            uVar5 = BIO_ctrl(local_1118,0x59,0,(void *)0x0);
                                            iVar3 = test_int_eq("test/bio_dgram_test.c",0x2f4,
                                                                "BIO_dgram_set_no_trunc(bio2, 0)",
                                                                &_LC0,uVar5 & 0xffffffff,1);
                                            if (iVar3 != 0) {
                                              iVar3 = BIO_read(local_1118,local_1140,0x20);
                                              iVar3 = test_int_eq("test/bio_dgram_test.c",0x2f7,
                                                                  "BIO_read(bio2, scratch2, 32)",
                                                                  &_LC64,iVar3,0x20);
                                              if (iVar3 != 0) {
                                                iVar3 = test_mem_eq("test/bio_dgram_test.c",0x2fa,
                                                                    "scratch","scratch2",&local_848,
                                                                    0x20,local_1140,0x20);
                                                uVar4 = (uint)(iVar3 != 0);
                                                goto LAB_001004b7;
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
        goto LAB_00101540;
      }
      uVar5 = BIO_ctrl(local_1118,0x55,0,(void *)0x0);
      iVar3 = test_int_eq("test/bio_dgram_test.c",0x2a0,"BIO_dgram_get_effective_caps(bio2)",&_LC42,
                          uVar5 & 0xffffffff,0);
      if (iVar3 != 0) {
        uVar5 = BIO_ctrl(local_1120,0x57,0xf,(void *)0x0);
        iVar3 = test_int_eq("test/bio_dgram_test.c",0x2a3,"BIO_dgram_set_caps(bio1, ref_caps)",&_LC0
                            ,uVar5 & 0xffffffff,1);
        if (iVar3 != 0) goto LAB_00100f12;
      }
      uVar4 = 0;
    }
  }
  BIO_free(local_1120);
LAB_001005fb:
  BIO_free(local_1118);
  BIO_ADDR_free(local_1158);
  BIO_ADDR_free(uVar7);
  BIO_ADDR_free(uVar8);
  BIO_ADDR_free(uVar9);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}



undefined8 do_recvmmsg_constprop_0(undefined8 param_1,long param_2,ulong param_3,ulong *param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar2 = 0;
  do {
    uVar1 = BIO_recvmmsg(param_1,param_2 + uVar2 * 0x28,0x28,param_3 - uVar2,0,param_4);
    if ((int)uVar1 == 0) {
      return uVar1;
    }
    uVar2 = uVar2 + *param_4;
  } while (uVar2 < param_3);
  *param_4 = uVar2;
  return 1;
}



undefined8 do_sendmmsg_constprop_0(undefined8 param_1,long param_2,ulong param_3,ulong *param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar2 = 0;
  do {
    uVar1 = BIO_sendmmsg(param_1,param_2 + uVar2 * 0x28,0x28,param_3 - uVar2,0,param_4);
    if ((int)uVar1 == 0) {
      return uVar1;
    }
    uVar2 = uVar2 + *param_4;
  } while (uVar2 < param_3);
  *param_4 = uVar2;
  return 1;
}



uint test_bio_dgram_impl(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  char *parg;
  void *parg_00;
  long lVar6;
  undefined8 uVar7;
  BIO *bp;
  ulong uVar8;
  long lVar9;
  char **ppcVar10;
  undefined8 ****ppppuVar11;
  char *pcVar12;
  undefined8 ****ppppuVar13;
  char *pcVar14;
  undefined4 *puVar15;
  undefined8 ****ppppuVar16;
  long in_FS_OFFSET;
  byte bVar17;
  undefined8 local_2a40;
  undefined8 local_2a28;
  BIO *local_2a10;
  int local_2a04;
  undefined4 local_29f4;
  char *local_29f0;
  char *local_29e8;
  undefined8 local_29e0;
  undefined4 local_29d8 [3];
  undefined1 local_29c9;
  char *local_29c8;
  undefined8 local_29c0;
  undefined1 local_29b8 [16];
  undefined8 local_29a8;
  char *local_29a0;
  undefined8 local_2998;
  undefined1 local_2990 [16];
  undefined8 local_2980;
  undefined8 ***local_15c8;
  ulong local_15c0;
  void *local_15b8;
  long lStack_15b0;
  ulong local_15a8;
  undefined4 *local_15a0;
  ulong local_1598;
  undefined8 local_1590;
  undefined8 local_1588;
  ulong local_1580;
  undefined8 **local_1c8 [16];
  undefined4 local_148 [32];
  char local_c8 [136];
  long local_40;
  
  bVar17 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_29f0 = (char *)0x0;
  local_29e8 = (char *)0x0;
  local_29e0 = 0;
  if (param_1 == 2) {
    test_info("test/bio_dgram_test.c",0x78,"# Testing with AF_INET, local=%d\n",param_2);
    puVar15 = &local_29f4;
    local_2a28 = 4;
LAB_0010179a:
    __memset_chk(puVar15,0,local_2a28);
    local_29f4 = 0x100007f;
    local_29c9 = 1;
    pcVar5 = (char *)BIO_ADDR_new();
    iVar1 = test_ptr("test/bio_dgram_test.c",0x8e,"addr1",pcVar5);
    if (iVar1 == 0) {
      uVar7 = 0;
      lVar6 = 0;
      parg_00 = (void *)0x0;
      parg = (char *)0x0;
      local_2a40 = 0;
    }
    else {
      parg = (char *)BIO_ADDR_new();
      iVar1 = test_ptr("test/bio_dgram_test.c",0x92,"addr2",parg);
      if (iVar1 == 0) {
        local_2a40 = 0;
        uVar7 = 0;
        lVar6 = 0;
        parg_00 = (void *)0x0;
      }
      else {
        parg_00 = (void *)BIO_ADDR_new();
        iVar1 = test_ptr("test/bio_dgram_test.c",0x96,"addr3",parg_00);
        if (iVar1 == 0) {
          local_2a40 = 0;
          uVar7 = 0;
          lVar6 = 0;
        }
        else {
          lVar6 = BIO_ADDR_new();
          iVar1 = test_ptr("test/bio_dgram_test.c",0x9a,"addr4",lVar6);
          if (iVar1 == 0) {
            local_2a40 = 0;
            uVar7 = 0;
          }
          else {
            local_2a40 = BIO_ADDR_new();
            uVar7 = 0;
            iVar1 = test_ptr("test/bio_dgram_test.c",0x9e,"addr5",local_2a40);
            if (iVar1 != 0) {
              uVar7 = BIO_ADDR_new();
              iVar1 = test_ptr("test/bio_dgram_test.c",0xa2,"addr6",uVar7);
              if (iVar1 != 0) {
                uVar2 = BIO_ADDR_rawmake(pcVar5,param_1,puVar15,local_2a28,0);
                iVar1 = test_int_eq("test/bio_dgram_test.c",0xa5,
                                    "BIO_ADDR_rawmake(addr1, af, pina, inal, 0)",&_LC0,uVar2,1);
                if (iVar1 != 0) {
                  uVar2 = BIO_ADDR_rawmake(parg,param_1,puVar15,local_2a28,0);
                  iVar1 = test_int_eq("test/bio_dgram_test.c",0xa8,
                                      "BIO_ADDR_rawmake(addr2, af, pina, inal, 0)",&_LC0,uVar2);
                  if (iVar1 != 0) {
                    iVar1 = BIO_socket(param_1,2,0x11,0);
                    iVar3 = test_int_ge("test/bio_dgram_test.c",0xac,&_LC72,&_LC42,iVar1);
                    if (iVar3 == 0) {
                      BIO_free((BIO *)0x0);
                      BIO_free((BIO *)0x0);
                      local_2a04 = -1;
                      uVar4 = 0;
                      if (iVar1 < 0) goto LAB_001016fc;
LAB_00101c10:
                      BIO_closesocket(iVar1);
                    }
                    else {
                      local_2a04 = BIO_socket(param_1,2,0x11,0);
                      iVar3 = test_int_ge("test/bio_dgram_test.c",0xb0,&_LC73,&_LC42);
                      if (iVar3 == 0) {
LAB_00101c51:
                        bp = (BIO *)0x0;
                        local_2a10 = (BIO *)0x0;
                        uVar4 = 0;
                      }
                      else {
                        iVar3 = BIO_bind(iVar1,pcVar5,0);
                        if ((0 < iVar3) && (iVar3 = BIO_bind(local_2a04,parg,0), 0 < iVar3)) {
                          local_29f0 = pcVar5;
                          BIO_sock_info(iVar1,0,&local_29f0);
                          iVar3 = test_int_gt("test/bio_dgram_test.c",0xba,
                                              "BIO_sock_info(fd1, BIO_SOCK_INFO_ADDRESS, &info1)",
                                              &_LC42);
                          if (iVar3 != 0) {
                            local_29e8 = parg;
                            BIO_sock_info(local_2a04,0,&local_29e8);
                            iVar3 = test_int_gt("test/bio_dgram_test.c",0xbe,
                                                "BIO_sock_info(fd2, BIO_SOCK_INFO_ADDRESS, &info2)",
                                                &_LC42);
                            if (iVar3 != 0) {
                              BIO_ADDR_rawport(pcVar5);
                              iVar3 = test_int_gt("test/bio_dgram_test.c",0xc1,
                                                  "BIO_ADDR_rawport(addr1)",&_LC42);
                              if (iVar3 != 0) {
                                BIO_ADDR_rawport(parg);
                                iVar3 = test_int_gt("test/bio_dgram_test.c",0xc4,
                                                    "BIO_ADDR_rawport(addr2)",&_LC42);
                                if (iVar3 != 0) {
                                  bp = BIO_new_dgram(iVar1,0);
                                  uVar4 = test_ptr("test/bio_dgram_test.c",200,&_LC79,bp);
                                  local_2a10 = (BIO *)0x0;
                                  if (uVar4 == 0) goto LAB_00101bf6;
                                  local_2a10 = BIO_new_dgram(local_2a04,0);
                                  iVar3 = test_ptr("test/bio_dgram_test.c",0xcc,&_LC80,local_2a10);
                                  if (iVar3 != 0) {
                                    uVar8 = BIO_ctrl(bp,0x2c,0,parg);
                                    iVar3 = test_int_gt("test/bio_dgram_test.c",0xcf,
                                                        "BIO_dgram_set_peer(b1, addr2)",&_LC42,
                                                        uVar8 & 0xffffffff,0);
                                    if (iVar3 != 0) {
                                      iVar3 = BIO_write(bp,"hello",5);
                                      iVar3 = test_int_gt("test/bio_dgram_test.c",0xd2,
                                                          "BIO_write(b1, \"hello\", 5)",&_LC42,iVar3
                                                          ,0);
                                      if (iVar3 != 0) {
                                        iVar3 = BIO_read(local_2a10,local_1c8,0x80);
                                        iVar3 = test_int_eq("test/bio_dgram_test.c",0xd6,
                                                            "BIO_read(b2, rx_buf, sizeof(rx_buf))",
                                                            &_LC84,iVar3,5);
                                        if ((iVar3 != 0) &&
                                           (iVar3 = test_mem_eq("test/bio_dgram_test.c",0xd9,
                                                                "rx_buf","\"hello\"",local_1c8,5,
                                                                "hello",5), iVar3 != 0)) {
                                          uVar8 = BIO_ctrl(local_2a10,0x2e,0,parg_00);
                                          iVar3 = test_int_gt("test/bio_dgram_test.c",0xdc,
                                                              "BIO_dgram_get_peer(b2, addr3)",&_LC42
                                                              ,uVar8 & 0xffffffff,0);
                                          if (iVar3 != 0) {
                                            uVar2 = compare_addr(parg_00,pcVar5);
                                            iVar3 = test_int_eq("test/bio_dgram_test.c",0xdf,
                                                                "compare_addr(addr3, addr1)",&_LC0,
                                                                uVar2,1);
                                            if (iVar3 != 0) {
                                              uVar2 = BIO_ADDR_rawmake(parg_00,param_1,puVar15,
                                                                       local_2a28,0);
                                              iVar3 = test_int_gt("test/bio_dgram_test.c",0xe3,
                                                                                                                                    
                                                  "BIO_ADDR_rawmake(addr3, af, pina, inal, 0)",
                                                  &_LC42,uVar2,0);
                                              if (iVar3 != 0) {
                                                uVar8 = BIO_ctrl(bp,0x2c,0,parg_00);
                                                iVar3 = test_int_gt("test/bio_dgram_test.c",0xe6,
                                                                    "BIO_dgram_set_peer(b1, addr3)",
                                                                    &_LC42,uVar8 & 0xffffffff,0);
                                                if (iVar3 != 0) {
                                                  uVar8 = BIO_ctrl(local_2a10,0x2c,0,parg_00);
                                                  iVar3 = test_int_gt("test/bio_dgram_test.c",0xe9,
                                                                                                                                            
                                                  "BIO_dgram_set_peer(b2, addr3)",&_LC42,
                                                  uVar8 & 0xffffffff,0);
                                                  if (iVar3 != 0) {
                                                    local_29c8 = "apple";
                                                    local_29a8 = 0;
                                                    local_29a0 = "orange";
                                                    local_2980 = 0;
                                                    local_29b8 = (undefined1  [16])0x0;
                                                    local_2990 = (undefined1  [16])0x0;
                                                    local_29c0 = 5;
                                                    local_2998 = 6;
                                                    iVar3 = do_sendmmsg_constprop_0
                                                                      (bp,&local_29c8,2,&local_29e0)
                                                    ;
                                                    iVar3 = test_false("test/bio_dgram_test.c",0xfa,
                                                                                                                                              
                                                  "do_sendmmsg(b1, tx_msg, 2, 0, &num_processed)",
                                                  iVar3 != 0);
                                                  if ((iVar3 != 0) &&
                                                     (iVar3 = test_size_t_eq("test/bio_dgram_test.c"
                                                                             ,0xfb,"num_processed",
                                                                             &_LC42,local_29e0,0),
                                                     iVar3 != 0)) {
                                                    local_29b8._8_8_ = pcVar5;
                                                    local_29b8._0_8_ = parg;
                                                    local_2990._8_8_ = pcVar5;
                                                    local_2990._0_8_ = parg;
                                                    iVar3 = do_sendmmsg_constprop_0
                                                                      (bp,&local_29c8,2,&local_29e0)
                                                    ;
                                                    if (iVar3 == 0) {
                                                      test_size_t_eq("test/bio_dgram_test.c",0x107,
                                                                     "num_processed",&_LC42,
                                                                     local_29e0,0);
                                                    }
                                                    iVar3 = test_false("test/bio_dgram_test.c",0x106
                                                                       ,
                                                  "do_sendmmsg(b1, tx_msg, 2, 0, &num_processed) || !TEST_size_t_eq(num_processed, 0)"
                                                  );
                                                  if (iVar3 != 0) {
                                                    lVar9 = BIO_ctrl(bp,0x52,0,(void *)0x0);
                                                    if (((int)lVar9 < 1) || (param_2 == 0)) {
                                                      local_29b8._8_8_ = 0;
                                                      local_2990._8_8_ = 0;
                                                      param_2 = 0;
                                                    }
                                                    else {
                                                      uVar8 = BIO_ctrl(bp,0x54,1,(void *)0x0);
                                                      iVar3 = test_int_eq("test/bio_dgram_test.c",
                                                                          0x10c,
                                                  "BIO_dgram_set_local_addr_enable(b1, 1)",&_LC0,
                                                  uVar8 & 0xffffffff,1);
                                                  if (iVar3 == 0) goto LAB_00101bf0;
                                                  }
                                                  iVar3 = do_sendmmsg_constprop_0
                                                                    (bp,&local_29c8,2,&local_29e0);
                                                  iVar3 = test_true("test/bio_dgram_test.c",0x115,
                                                                                                                                        
                                                  "do_sendmmsg(b1, tx_msg, 2, 0, &num_processed)",
                                                  iVar3 != 0);
                                                  if ((iVar3 != 0) &&
                                                     (iVar3 = test_size_t_eq("test/bio_dgram_test.c"
                                                                             ,0x116,"num_processed",
                                                                             &_LC29,local_29e0,2),
                                                     iVar3 != 0)) {
                                                    local_15a8 = 0x80000000;
                                                    local_15a0 = local_148;
                                                    ppppuVar16 = (undefined8 ****)local_1c8;
                                                    for (lVar9 = 0x20; lVar9 != 0;
                                                        lVar9 = lVar9 + -1) {
                                                      *(undefined4 *)ppppuVar16 = 0;
                                                      ppppuVar16 = (undefined8 ****)
                                                                   ((long)ppppuVar16 +
                                                                   (ulong)bVar17 * -8 + 4);
                                                    }
                                                    local_1580 = 0x80000000;
                                                    puVar15 = local_15a0;
                                                    for (lVar9 = 0x20; lVar9 != 0;
                                                        lVar9 = lVar9 + -1) {
                                                      *puVar15 = 0;
                                                      puVar15 = puVar15 + (ulong)bVar17 * -2 + 1;
                                                    }
                                                    local_15c0 = 0x80;
                                                    local_1598 = 0x80;
                                                    local_15c8 = local_1c8;
                                                    local_15b8 = parg_00;
                                                    lStack_15b0 = lVar6;
                                                    local_1590 = local_2a40;
                                                    local_1588 = uVar7;
                                                    iVar3 = do_recvmmsg_constprop_0
                                                                      (local_2a10,&local_15c8,2,
                                                                       &local_29e0);
                                                    iVar3 = test_false("test/bio_dgram_test.c",300,
                                                                                                                                              
                                                  "do_recvmmsg(b2, rx_msg, 2, 0, &num_processed)",
                                                  iVar3 != 0);
                                                  if (((((iVar3 != 0) &&
                                                        (iVar3 = test_size_t_eq(
                                                  "test/bio_dgram_test.c",0x12d,"num_processed",
                                                  &_LC42,local_29e0,0), iVar3 != 0)) &&
                                                  (iVar3 = test_int_eq("test/bio_dgram_test.c",0x131
                                                                       ,"(int)rx_msg[0].data_len",
                                                                       "sizeof(rx_buf)",
                                                                       local_15c0 & 0xffffffff,0x80)
                                                  , iVar3 != 0)) &&
                                                  ((iVar3 = test_int_eq("test/bio_dgram_test.c",
                                                                        0x134,
                                                  "(int)rx_msg[1].data_len","sizeof(rx_buf2)",
                                                  local_1598 & 0xffffffff,0x80), iVar3 != 0 &&
                                                  (iVar3 = test_ulong_eq("test/bio_dgram_test.c",
                                                                         0x137,
                                                  "(unsigned long)rx_msg[0].flags","1UL<<31",
                                                  local_15a8,0x80000000), iVar3 != 0)))) &&
                                                  (iVar3 = test_ulong_eq("test/bio_dgram_test.c",
                                                                         0x13a,
                                                  "(unsigned long)rx_msg[1].flags"), iVar3 != 0)) {
                                                    lVar9 = BIO_ctrl(local_2a10,0x52,0,(void *)0x0);
                                                    if (((int)lVar9 < 1) || (param_2 == 0)) {
                                                      lStack_15b0 = 0;
                                                      local_1588 = 0;
                                                      param_2 = 0;
                                                    }
                                                    else {
                                                      uVar8 = BIO_ctrl(local_2a10,0x54,1,(void *)0x0
                                                                      );
                                                      iVar3 = test_int_eq("test/bio_dgram_test.c",
                                                                          0x13f,
                                                  "BIO_dgram_set_local_addr_enable(b2, 1)",&_LC0,
                                                  uVar8 & 0xffffffff,1);
                                                  if (iVar3 == 0) goto LAB_00101bf0;
                                                  }
                                                  iVar3 = do_recvmmsg_constprop_0
                                                                    (local_2a10,&local_15c8,2,
                                                                     &local_29e0);
                                                  iVar3 = test_true("test/bio_dgram_test.c",0x148,
                                                                                                                                        
                                                  "do_recvmmsg(b2, rx_msg, 2, 0, &num_processed)",
                                                  iVar3 != 0);
                                                  if ((((iVar3 != 0) &&
                                                       (iVar3 = test_size_t_eq(
                                                  "test/bio_dgram_test.c",0x149,"num_processed",
                                                  &_LC29,local_29e0,2), iVar3 != 0)) &&
                                                  (iVar3 = test_int_eq("test/bio_dgram_test.c",0x14d
                                                                       ,"(int)rx_msg[0].data_len",
                                                                       &_LC84,local_15c0 &
                                                                              0xffffffff,5),
                                                  iVar3 != 0)) &&
                                                  (((iVar3 = test_int_eq("test/bio_dgram_test.c",
                                                                         0x150,
                                                  "(int)rx_msg[1].data_len",&_LC107,
                                                  local_1598 & 0xffffffff,6), iVar3 != 0 &&
                                                  (iVar3 = test_int_eq("test/bio_dgram_test.c",0x154
                                                                       ,"(int)rx_msg[0].flags",
                                                                       &_LC42,local_15a8 &
                                                                              0xffffffff,0),
                                                  iVar3 != 0)) &&
                                                  (iVar3 = test_int_eq("test/bio_dgram_test.c",0x157
                                                                       ,"(int)rx_msg[1].flags",
                                                                       &_LC42,local_1580 &
                                                                              0xffffffff,0),
                                                  iVar3 != 0)))) {
                                                    uVar2 = compare_addr(parg_00,pcVar5);
                                                    iVar3 = test_int_eq("test/bio_dgram_test.c",
                                                                        0x15b,
                                                  "compare_addr(addr3, addr1)",&_LC0,uVar2,1);
                                                  if (iVar3 != 0) {
                                                    uVar2 = compare_addr(local_2a40,pcVar5);
                                                    iVar3 = test_int_eq("test/bio_dgram_test.c",
                                                                        0x15e,
                                                  "compare_addr(addr5, addr1)",&_LC0,uVar2,1);
                                                  if (iVar3 != 0) {
                                                    iVar3 = do_sendmmsg_constprop_0
                                                                      (bp,&local_29c8,2,&local_29e0)
                                                    ;
                                                    iVar3 = test_true("test/bio_dgram_test.c",0x167,
                                                                                                                                            
                                                  "do_sendmmsg(b1, tx_msg, 2, 0, &num_processed)",
                                                  iVar3 != 0);
                                                  if ((iVar3 != 0) &&
                                                     (iVar3 = test_size_t_eq("test/bio_dgram_test.c"
                                                                             ,0x168,"num_processed",
                                                                             &_LC29,local_29e0,2),
                                                     iVar3 != 0)) {
                                                    local_15c0 = 0x80;
                                                    local_1598 = 0x80;
                                                    iVar3 = do_recvmmsg_constprop_0
                                                                      (local_2a10,&local_15c8,2,
                                                                       &local_29e0);
                                                    iVar3 = test_true("test/bio_dgram_test.c",0x16f,
                                                                                                                                            
                                                  "do_recvmmsg(b2, rx_msg, 2, 0, &num_processed)",
                                                  iVar3 != 0);
                                                  if ((iVar3 != 0) &&
                                                     (iVar3 = test_size_t_eq("test/bio_dgram_test.c"
                                                                             ,0x170,"num_processed",
                                                                             &_LC29,local_29e0,2),
                                                     iVar3 != 0)) {
                                                    if (lStack_15b0 == 0) {
LAB_001026af:
                                                      pcVar14 = (char *)0x0;
                                                      if (param_2 != 0) {
                                                        pcVar14 = pcVar5;
                                                      }
                                                      lVar9 = 0;
                                                      ppcVar10 = &local_29c8;
                                                      pcVar12 = local_c8;
                                                      do {
                                                        *pcVar12 = (char)lVar9;
                                                        lVar9 = lVar9 + 1;
                                                        *ppcVar10 = pcVar12;
                                                        pcVar12 = pcVar12 + 1;
                                                        ppcVar10[1] = (char *)0x1;
                                                        ppcVar10[2] = parg;
                                                        ppcVar10[3] = pcVar14;
                                                        ppcVar10[4] = (char *)0x0;
                                                        ppcVar10 = ppcVar10 + 5;
                                                      } while (lVar9 != 0x80);
                                                      iVar3 = do_sendmmsg_constprop_0
                                                                        (bp,&local_29c8,0x80,
                                                                         &local_29e0);
                                                      iVar3 = test_true("test/bio_dgram_test.c",
                                                                        0x188,
                                                  "do_sendmmsg(b1, tx_msg, OSSL_NELEM(tx_msg), 0, &num_processed)"
                                                  ,iVar3 != 0);
                                                  if ((iVar3 != 0) &&
                                                     (iVar3 = test_size_t_eq("test/bio_dgram_test.c"
                                                                             ,0x189,"num_processed",
                                                                             "OSSL_NELEM(tx_msg)",
                                                                             local_29e0,0x80),
                                                     iVar3 != 0)) {
                                                    ppppuVar16 = (undefined8 ****)local_1c8;
                                                    for (lVar9 = 0x20; ppppuVar11 = &local_15c8,
                                                        ppppuVar13 = (undefined8 ****)local_1c8,
                                                        lVar9 != 0; lVar9 = lVar9 + -1) {
                                                      *(undefined4 *)ppppuVar16 = 0;
                                                      ppppuVar16 = (undefined8 ****)
                                                                   ((long)ppppuVar16 +
                                                                   (ulong)bVar17 * -8 + 4);
                                                    }
                                                    do {
                                                      *ppppuVar11 = ppppuVar13;
                                                      ppppuVar16 = ppppuVar11 + 5;
                                                      ppppuVar11[1] = (undefined8 ***)0x1;
                                                      *(undefined1 (*) [16])(ppppuVar11 + 2) =
                                                           (undefined1  [16])0x0;
                                                      ppppuVar11[4] = (undefined8 ***)0x0;
                                                      ppppuVar11 = ppppuVar16;
                                                      ppppuVar13 = (undefined8 ****)
                                                                   ((long)ppppuVar13 + 1);
                                                    } while ((undefined8 ****)local_1c8 !=
                                                             ppppuVar16);
                                                    iVar3 = do_recvmmsg_constprop_0
                                                                      (local_2a10,&local_15c8,0x80,
                                                                       &local_29e0);
                                                    iVar3 = test_true("test/bio_dgram_test.c",0x198,
                                                                                                                                            
                                                  "do_recvmmsg(b2, rx_msg, OSSL_NELEM(rx_msg), 0, &num_processed)"
                                                  ,iVar3 != 0);
                                                  if ((iVar3 != 0) &&
                                                     (iVar3 = test_size_t_eq("test/bio_dgram_test.c"
                                                                             ,0x199,"num_processed",
                                                                             "OSSL_NELEM(rx_msg)",
                                                                             local_29e0,0x80),
                                                     iVar3 != 0)) {
                                                    iVar3 = test_mem_eq("test/bio_dgram_test.c",
                                                                        0x19c,"tx_buf","rx_buf",
                                                                        local_c8,0x80,local_1c8,0x80
                                                                       );
                                                    uVar4 = (uint)(iVar3 != 0);
                                                    goto LAB_00101bf6;
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = compare_addr(lVar6,parg);
                                                    iVar3 = test_int_eq("test/bio_dgram_test.c",
                                                                        0x175,
                                                  "compare_addr(addr4, addr2)",&_LC0,uVar2,1);
                                                  if (iVar3 != 0) {
                                                    uVar2 = compare_addr(uVar7,parg);
                                                    iVar3 = test_int_eq("test/bio_dgram_test.c",
                                                                        0x178,
                                                  "compare_addr(addr6, addr2)",&_LC0,uVar2,1);
                                                  if (iVar3 != 0) goto LAB_001026af;
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
LAB_00101bf0:
                                  uVar4 = 0;
                                  goto LAB_00101bf6;
                                }
                              }
                            }
                          }
                          goto LAB_00101c51;
                        }
                        uVar4 = test_skip("test/bio_dgram_test.c",0xb5,
                                          "BIO_bind() failed - assuming it\'s an unavailable address family"
                                         );
                        bp = (BIO *)0x0;
                        local_2a10 = (BIO *)0x0;
                      }
LAB_00101bf6:
                      BIO_free(bp);
                      BIO_free(local_2a10);
                      if (-1 < iVar1) goto LAB_00101c10;
                    }
                    if (-1 < local_2a04) {
                      BIO_closesocket();
                    }
                    goto LAB_001016fc;
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
    if (param_1 == 10) {
      test_info("test/bio_dgram_test.c",0x7e,"# Testing with AF_INET6, local=%d\n",param_2);
      puVar15 = local_29d8;
      local_2a28 = 0x10;
      goto LAB_0010179a;
    }
    uVar7 = 0;
    lVar6 = 0;
    parg_00 = (void *)0x0;
    parg = (char *)0x0;
    local_2a40 = 0;
    pcVar5 = (char *)0x0;
  }
  BIO_free((BIO *)0x0);
  BIO_free((BIO *)0x0);
  uVar4 = 0;
LAB_001016fc:
  BIO_ADDR_free(pcVar5);
  BIO_ADDR_free(parg);
  BIO_ADDR_free(parg_00);
  BIO_ADDR_free(lVar6);
  BIO_ADDR_free(local_2a40);
  BIO_ADDR_free(uVar7);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}



void test_bio_dgram(int param_1)

{
  test_bio_dgram_impl(*(undefined4 *)(bio_dgram_cases + (long)param_1 * 8),
                      *(undefined4 *)(bio_dgram_cases + (long)param_1 * 8 + 4));
  return;
}



undefined8 setup_tests(void)

{
  int iVar1;
  
  iVar1 = test_skip_common_options();
  if (iVar1 != 0) {
    add_all_tests("test_bio_dgram",test_bio_dgram,4,1);
    add_all_tests("test_bio_dgram_pair",test_bio_dgram_pair,3,1);
    return 1;
  }
  test_error("test/bio_dgram_test.c",0x30e,"Error parsing test options\n");
  return 0;
}


