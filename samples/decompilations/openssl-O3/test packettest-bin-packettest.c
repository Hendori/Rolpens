
bool test_PACKET_end(void)

{
  int iVar1;
  
  iVar1 = test_true("test/packettest.c",0x24,"PACKET_buf_init(&pkt, smbuf, BUF_LEN)",1);
  if ((((iVar1 != 0) &&
       (iVar1 = test_size_t_eq("test/packettest.c",0x25,"PACKET_remaining(&pkt)","BUF_LEN",0xff,0xff
                              ), iVar1 != 0)) &&
      (iVar1 = test_ptr_eq("test/packettest.c",0x26,"PACKET_end(&pkt)","smbuf + BUF_LEN",
                           &DAT_00102f1f), iVar1 != 0)) &&
     (((iVar1 = test_true("test/packettest.c",0x27,"PACKET_forward(&pkt, BUF_LEN - 1)",1),
       iVar1 != 0 &&
       (iVar1 = test_ptr_eq("test/packettest.c",0x28,"PACKET_end(&pkt)","smbuf + BUF_LEN",
                            &DAT_00102f1f), iVar1 != 0)) &&
      (iVar1 = test_true("test/packettest.c",0x29,"PACKET_forward(&pkt, 1)",1), iVar1 != 0)))) {
    iVar1 = test_ptr_eq("test/packettest.c",0x2a,"PACKET_end(&pkt)","smbuf + BUF_LEN",&DAT_00102f1f)
    ;
    return iVar1 != 0;
  }
  return false;
}



bool test_PACKET_remaining(void)

{
  int iVar1;
  
  iVar1 = test_true("test/packettest.c",0x15,"PACKET_buf_init(&pkt, smbuf, BUF_LEN)",1);
  if ((((iVar1 != 0) &&
       (iVar1 = test_size_t_eq("test/packettest.c",0x16,"PACKET_remaining(&pkt)","BUF_LEN",0xff,0xff
                              ), iVar1 != 0)) &&
      (iVar1 = test_true("test/packettest.c",0x17,"PACKET_forward(&pkt, BUF_LEN - 1)",1), iVar1 != 0
      )) && ((iVar1 = test_size_t_eq("test/packettest.c",0x18,"PACKET_remaining(&pkt)",&_LC8,1,1),
             iVar1 != 0 &&
             (iVar1 = test_true("test/packettest.c",0x19,"PACKET_forward(&pkt, 1)",1), iVar1 != 0)))
     ) {
    iVar1 = test_size_t_eq("test/packettest.c",0x1a,"PACKET_remaining(&pkt)",&_LC9,0,0);
    return iVar1 != 0;
  }
  return false;
}



ulong test_PACKET_null_init(void)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = test_size_t_eq("test/packettest.c",0x144,"PACKET_remaining(&pkt)",&_LC9,0,0);
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  iVar1 = test_false("test/packettest.c",0x145,"PACKET_forward(&pkt, 1)",0);
  return (ulong)(iVar1 != 0);
}



bool test_PACKET_buf_init(void)

{
  int iVar1;
  
  iVar1 = test_true("test/packettest.c",0x135,"PACKET_buf_init(&pkt, buf1, 4)",1);
  if ((((iVar1 != 0) &&
       (iVar1 = test_size_t_eq("test/packettest.c",0x136,"PACKET_remaining(&pkt)",&_LC11,4,4),
       iVar1 != 0)) &&
      (iVar1 = test_true("test/packettest.c",0x137,"PACKET_buf_init(&pkt, buf1, BUF_LEN)",1),
      iVar1 != 0)) &&
     (iVar1 = test_size_t_eq("test/packettest.c",0x138,"PACKET_remaining(&pkt)","BUF_LEN",0xff,0xff)
     , iVar1 != 0)) {
    iVar1 = test_false("test/packettest.c",0x139,"PACKET_buf_init(&pkt, buf1, -1)",0);
    return iVar1 != 0;
  }
  return false;
}



bool test_PACKET_get_net_2(void)

{
  ushort uVar1;
  int iVar2;
  
  iVar2 = test_true("test/packettest.c",0x57,"PACKET_buf_init(&pkt, smbuf, BUF_LEN)",1);
  uVar1 = (ushort)smbuf;
  if ((((iVar2 != 0) &&
       (iVar2 = test_true("test/packettest.c",0x58,"PACKET_get_net_2(&pkt, &i)",1), iVar2 != 0)) &&
      (iVar2 = test_uint_eq("test/packettest.c",0x59,&_LC16,"0x0204",uVar1 << 8 | uVar1 >> 8,0x204),
      iVar2 != 0)) &&
     (((iVar2 = test_true("test/packettest.c",0x5a,"PACKET_forward(&pkt, BUF_LEN - 4)",1),
       uVar1 = DAT_00102f1b._2_2_, iVar2 != 0 &&
       (iVar2 = test_true("test/packettest.c",0x5b,"PACKET_get_net_2(&pkt, &i)",1), iVar2 != 0)) &&
      (iVar2 = test_uint_eq("test/packettest.c",0x5c,&_LC16,"0xfcfe",uVar1 << 8 | uVar1 >> 8,0xfcfe)
      , iVar2 != 0)))) {
    iVar2 = test_false("test/packettest.c",0x5d,"PACKET_get_net_2(&pkt, &i)",0);
    return iVar2 != 0;
  }
  return false;
}



bool test_PACKET_get_1(void)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = test_true("test/packettest.c",0x35,"PACKET_buf_init(&pkt, smbuf, BUF_LEN)",1);
  uVar1 = (undefined1)smbuf;
  if ((((iVar2 != 0) &&
       (iVar2 = test_true("test/packettest.c",0x36,"PACKET_get_1(&pkt, &i)",1), iVar2 != 0)) &&
      (iVar2 = test_uint_eq("test/packettest.c",0x37,&_LC16,&_LC20,uVar1,2), iVar2 != 0)) &&
     (((iVar2 = test_true("test/packettest.c",0x38,"PACKET_forward(&pkt, BUF_LEN - 2)",1),
       uVar1 = DAT_00102f1b._3_1_, iVar2 != 0 &&
       (iVar2 = test_true("test/packettest.c",0x39,"PACKET_get_1(&pkt, &i)",1), iVar2 != 0)) &&
      (iVar2 = test_uint_eq("test/packettest.c",0x3a,&_LC16,&_LC22,uVar1,0xfe), iVar2 != 0)))) {
    iVar2 = test_false("test/packettest.c",0x3b,"PACKET_get_1(&pkt, &i)",0);
    return iVar2 != 0;
  }
  return false;
}



bool test_PACKET_forward(void)

{
  int iVar1;
  
  iVar1 = test_true("test/packettest.c",0x123,"PACKET_buf_init(&pkt, smbuf, BUF_LEN)",1);
  if ((((iVar1 != 0) &&
       (iVar1 = test_true("test/packettest.c",0x124,"PACKET_forward(&pkt, 1)",1), iVar1 != 0)) &&
      (iVar1 = test_true("test/packettest.c",0x125,"PACKET_get_bytes(&pkt, &byte, 1)",1), iVar1 != 0
      )) && (((iVar1 = test_uchar_eq("test/packettest.c",0x126,"byte[0]",&_LC11,smbuf._1_1_,4),
              iVar1 != 0 &&
              (iVar1 = test_true("test/packettest.c",0x127,"PACKET_forward(&pkt, BUF_LEN - 3)",1),
              iVar1 != 0)) &&
             (iVar1 = test_true("test/packettest.c",0x128,"PACKET_get_bytes(&pkt, &byte, 1)",1),
             iVar1 != 0)))) {
    iVar1 = test_uchar_eq("test/packettest.c",0x129,"byte[0]",&_LC22,DAT_00102f1b._3_1_,0xfe);
    return iVar1 != 0;
  }
  return false;
}



bool test_PACKET_get_bytes(void)

{
  int iVar1;
  
  iVar1 = test_true("test/packettest.c",0x9f,"PACKET_buf_init(&pkt, smbuf, BUF_LEN)",1);
  if (((((iVar1 != 0) &&
        (iVar1 = test_true("test/packettest.c",0xa0,"PACKET_get_bytes(&pkt, &bytes, 4)",1),
        iVar1 != 0)) &&
       (iVar1 = test_uchar_eq("test/packettest.c",0xa1,"bytes[0]",&_LC27,(undefined1)smbuf,2),
       iVar1 != 0)) &&
      (((iVar1 = test_uchar_eq("test/packettest.c",0xa2,"bytes[1]",&_LC11,smbuf._1_1_,4), iVar1 != 0
        && (iVar1 = test_uchar_eq("test/packettest.c",0xa3,"bytes[2]",&_LC30,smbuf._2_1_,6),
           iVar1 != 0)) &&
       ((iVar1 = test_uchar_eq("test/packettest.c",0xa4,"bytes[3]",&_LC32,smbuf._3_1_,8), iVar1 != 0
        && ((iVar1 = test_size_t_eq("test/packettest.c",0xa5,"PACKET_remaining(&pkt)","BUF_LEN -4",
                                    0xfb,0xfb), iVar1 != 0 &&
            (iVar1 = test_true("test/packettest.c",0xa6,"PACKET_forward(&pkt, BUF_LEN - 8)",1),
            iVar1 != 0)))))))) &&
     ((iVar1 = test_true("test/packettest.c",0xa7,"PACKET_get_bytes(&pkt, &bytes, 4)",1), iVar1 != 0
      && ((((iVar1 = test_uchar_eq("test/packettest.c",0xa8,"bytes[0]",&_LC36,
                                   (undefined1)DAT_00102f1b,0xf8), iVar1 != 0 &&
            (iVar1 = test_uchar_eq("test/packettest.c",0xa9,"bytes[1]",&_LC37,DAT_00102f1b._1_1_,
                                   0xfa), iVar1 != 0)) &&
           (iVar1 = test_uchar_eq("test/packettest.c",0xaa,"bytes[2]",&_LC38,DAT_00102f1b._2_1_,0xfc
                                 ), iVar1 != 0)) &&
          (iVar1 = test_uchar_eq("test/packettest.c",0xab,"bytes[3]",&_LC22,DAT_00102f1b._3_1_,0xfe)
          , iVar1 != 0)))))) {
    iVar1 = test_false("test/packettest.c",0xac,"PACKET_remaining(&pkt)",0);
    return iVar1 != 0;
  }
  return false;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool test_PACKET_as_length_prefixed_2(void)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  ushort uVar21;
  char *pcVar22;
  char *pcVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  long in_FS_OFFSET;
  bool bVar26;
  undefined1 auVar27 [16];
  undefined1 auVar31 [16];
  undefined1 auVar35 [16];
  undefined1 auVar38 [16];
  int iVar39;
  int iVar53;
  undefined1 auVar41 [16];
  undefined1 auVar45 [16];
  undefined1 auVar49 [16];
  undefined1 auVar52 [16];
  int iVar54;
  undefined2 uVar55;
  undefined2 uVar56;
  int iVar57;
  undefined2 uVar58;
  int iVar59;
  undefined1 auVar61 [16];
  undefined2 local_438;
  char acStack_436 [1030];
  long local_30;
  undefined1 auVar28 [16];
  undefined1 auVar32 [16];
  undefined1 auVar29 [16];
  undefined1 auVar33 [16];
  undefined1 auVar36 [16];
  undefined1 auVar30 [16];
  undefined1 auVar34 [16];
  undefined1 auVar37 [16];
  undefined1 auVar40 [12];
  undefined1 auVar42 [16];
  undefined1 auVar46 [16];
  undefined1 auVar43 [16];
  undefined1 auVar47 [16];
  undefined1 auVar50 [16];
  undefined1 auVar44 [16];
  undefined1 auVar48 [16];
  undefined1 auVar51 [16];
  int iVar60;
  int iVar62;
  int iVar63;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar22 = (char *)&local_438;
  auVar41 = __LC39;
  do {
    pcVar23 = pcVar22 + 0x10;
    iVar60 = auVar41._0_4_;
    auVar61._0_4_ = iVar60 + __LC40;
    iVar53 = auVar41._4_4_;
    auVar61._4_4_ = iVar53 + _UNK_00104134;
    iVar62 = auVar41._8_4_;
    iVar63 = auVar41._12_4_;
    auVar61._8_4_ = iVar62 + _UNK_00104138;
    auVar61._12_4_ = iVar63 + _UNK_0010413c;
    auVar30._0_12_ = auVar41._0_12_;
    auVar30._12_2_ = auVar41._6_2_;
    auVar30._14_2_ = (short)((uint)(iVar53 + _UNK_00104144) >> 0x10);
    auVar29._12_4_ = auVar30._12_4_;
    auVar29._0_10_ = auVar41._0_10_;
    uVar56 = (undefined2)(iVar53 + _UNK_00104144);
    auVar29._10_2_ = uVar56;
    auVar28._10_6_ = auVar29._10_6_;
    auVar28._0_8_ = auVar41._0_8_;
    auVar28._8_2_ = auVar41._4_2_;
    uVar55 = (undefined2)((uint)(iVar60 + __LC41) >> 0x10);
    auVar17._2_8_ = auVar28._8_8_;
    auVar17._0_2_ = uVar55;
    auVar17._10_6_ = 0;
    auVar38._0_2_ = auVar41._0_2_;
    auVar27._12_4_ = 0;
    auVar27._0_12_ = SUB1612(auVar17 << 0x30,4);
    auVar27 = auVar27 << 0x20;
    uVar58 = (undefined2)(iVar62 + _UNK_00104148);
    auVar34._0_12_ = auVar27._0_12_;
    auVar34._12_2_ = uVar55;
    auVar34._14_2_ = (short)((uint)(iVar62 + _UNK_00104148) >> 0x10);
    auVar33._12_4_ = auVar34._12_4_;
    auVar33._0_10_ = auVar27._0_10_;
    auVar33._10_2_ = auVar41._10_2_;
    auVar32._10_6_ = auVar33._10_6_;
    auVar32._0_8_ = auVar27._0_8_;
    auVar32._8_2_ = auVar41._2_2_;
    auVar18._2_8_ = auVar32._8_8_;
    auVar18._0_2_ = uVar58;
    auVar18._10_6_ = 0;
    auVar31._12_4_ = 0;
    auVar31._0_12_ = SUB1612(auVar18 << 0x30,4);
    auVar31 = auVar31 << 0x20;
    iVar54 = iVar60 + SUB164(__LC43,0);
    iVar57 = iVar53 + SUB164(__LC43,4);
    iVar59 = iVar62 + SUB164(__LC43,8);
    iVar39 = iVar60 + SUB164(__LC42,0);
    iVar53 = iVar53 + SUB164(__LC42,4);
    auVar40._0_8_ = CONCAT44(iVar53,iVar39);
    auVar40._8_4_ = iVar62 + SUB164(__LC42,8);
    auVar37._0_12_ = auVar31._0_12_;
    auVar37._12_2_ = uVar58;
    auVar37._14_2_ = (short)(iVar63 + _UNK_0010414c);
    auVar36._12_4_ = auVar37._12_4_;
    auVar36._0_10_ = auVar31._0_10_;
    auVar36._10_2_ = uVar56;
    auVar35._10_6_ = auVar36._10_6_;
    auVar35._0_8_ = auVar31._0_8_;
    auVar35._8_2_ = (short)(iVar60 + __LC41);
    auVar38._8_8_ = auVar35._8_8_;
    auVar38._6_2_ = auVar41._12_2_;
    auVar38._4_2_ = auVar41._8_2_;
    auVar38._2_2_ = auVar41._4_2_;
    auVar44._12_2_ = (short)((uint)iVar53 >> 0x10);
    auVar44._0_12_ = auVar40;
    auVar44._14_2_ = (short)((uint)iVar57 >> 0x10);
    auVar43._12_4_ = auVar44._12_4_;
    auVar43._0_10_ = auVar40._0_10_;
    uVar56 = (undefined2)iVar57;
    auVar43._10_2_ = uVar56;
    auVar42._10_6_ = auVar43._10_6_;
    auVar42._8_2_ = (short)iVar53;
    auVar42._0_8_ = auVar40._0_8_;
    uVar55 = (undefined2)((uint)iVar54 >> 0x10);
    auVar19._2_8_ = auVar42._8_8_;
    auVar19._0_2_ = uVar55;
    auVar19._10_6_ = 0;
    auVar52._0_2_ = (undefined2)iVar39;
    auVar41._12_4_ = 0;
    auVar41._0_12_ = SUB1612(auVar19 << 0x30,4);
    auVar41 = auVar41 << 0x20;
    auVar38 = auVar38 & __LC44;
    uVar58 = (undefined2)iVar59;
    auVar48._0_12_ = auVar41._0_12_;
    auVar48._12_2_ = uVar55;
    auVar48._14_2_ = (short)((uint)iVar59 >> 0x10);
    auVar47._12_4_ = auVar48._12_4_;
    auVar47._0_10_ = auVar41._0_10_;
    auVar47._10_2_ = (short)((uint)auVar40._8_4_ >> 0x10);
    auVar46._10_6_ = auVar47._10_6_;
    auVar46._0_8_ = auVar41._0_8_;
    auVar46._8_2_ = (short)((uint)iVar39 >> 0x10);
    auVar20._2_8_ = auVar46._8_8_;
    auVar20._0_2_ = uVar58;
    auVar20._10_6_ = 0;
    auVar45._12_4_ = 0;
    auVar45._0_12_ = SUB1612(auVar20 << 0x30,4);
    auVar45 = auVar45 << 0x20;
    auVar51._0_12_ = auVar45._0_12_;
    auVar51._12_2_ = uVar58;
    auVar51._14_2_ = (short)(iVar63 + SUB164(__LC43,0xc));
    auVar50._12_4_ = auVar51._12_4_;
    auVar50._0_10_ = auVar45._0_10_;
    auVar50._10_2_ = uVar56;
    auVar49._10_6_ = auVar50._10_6_;
    auVar49._0_8_ = auVar45._0_8_;
    auVar49._8_2_ = (short)iVar54;
    auVar52._8_8_ = auVar49._8_8_;
    auVar52._6_2_ = (short)(iVar63 + SUB164(__LC42,0xc));
    auVar52._4_2_ = (short)auVar40._8_4_;
    auVar52._2_2_ = (short)iVar53;
    auVar52 = auVar52 & __LC44;
    sVar1 = auVar38._0_2_;
    sVar2 = auVar38._2_2_;
    sVar3 = auVar38._4_2_;
    sVar4 = auVar38._6_2_;
    sVar5 = auVar38._8_2_;
    sVar6 = auVar38._10_2_;
    sVar7 = auVar38._12_2_;
    sVar8 = auVar38._14_2_;
    sVar9 = auVar52._0_2_;
    sVar10 = auVar52._2_2_;
    sVar11 = auVar52._4_2_;
    sVar12 = auVar52._6_2_;
    sVar13 = auVar52._8_2_;
    sVar14 = auVar52._10_2_;
    sVar15 = auVar52._12_2_;
    sVar16 = auVar52._14_2_;
    *pcVar22 = ((0 < sVar1) * (sVar1 < 0x100) * auVar38[0] - (0xff < sVar1)) * '\x02';
    pcVar22[1] = ((0 < sVar2) * (sVar2 < 0x100) * auVar38[2] - (0xff < sVar2)) * '\x02';
    pcVar22[2] = ((0 < sVar3) * (sVar3 < 0x100) * auVar38[4] - (0xff < sVar3)) * '\x02';
    pcVar22[3] = ((0 < sVar4) * (sVar4 < 0x100) * auVar38[6] - (0xff < sVar4)) * '\x02';
    pcVar22[4] = ((0 < sVar5) * (sVar5 < 0x100) * auVar38[8] - (0xff < sVar5)) * '\x02';
    pcVar22[5] = ((0 < sVar6) * (sVar6 < 0x100) * auVar38[10] - (0xff < sVar6)) * '\x02';
    pcVar22[6] = ((0 < sVar7) * (sVar7 < 0x100) * auVar38[0xc] - (0xff < sVar7)) * '\x02';
    pcVar22[7] = ((0 < sVar8) * (sVar8 < 0x100) * auVar38[0xe] - (0xff < sVar8)) * '\x02';
    pcVar22[8] = ((0 < sVar9) * (sVar9 < 0x100) * auVar52[0] - (0xff < sVar9)) * '\x02';
    pcVar22[9] = ((0 < sVar10) * (sVar10 < 0x100) * auVar52[2] - (0xff < sVar10)) * '\x02';
    pcVar22[10] = ((0 < sVar11) * (sVar11 < 0x100) * auVar52[4] - (0xff < sVar11)) * '\x02';
    pcVar22[0xb] = ((0 < sVar12) * (sVar12 < 0x100) * auVar52[6] - (0xff < sVar12)) * '\x02';
    pcVar22[0xc] = ((0 < sVar13) * (sVar13 < 0x100) * auVar52[8] - (0xff < sVar13)) * '\x02';
    pcVar22[0xd] = ((0 < sVar14) * (sVar14 < 0x100) * auVar52[10] - (0xff < sVar14)) * '\x02';
    pcVar22[0xe] = ((0 < sVar15) * (sVar15 < 0x100) * auVar52[0xc] - (0xff < sVar15)) * '\x02';
    pcVar22[0xf] = ((0 < sVar16) * (sVar16 < 0x100) * auVar52[0xe] - (0xff < sVar16)) * '\x02';
    pcVar22 = pcVar23;
    auVar41 = auVar61;
  } while (acStack_436 + 0x3fe != pcVar23);
  iVar39 = test_true("test/packettest.c",0x1c8,"PACKET_buf_init(&pkt, buf, 1024)",1);
  if (iVar39 != 0) {
    iVar39 = test_true("test/packettest.c",0x1c9,"PACKET_buf_init(&exact_pkt, buf, len + 2)",1);
    if (iVar39 != 0) {
      uVar21 = local_438 << 8 | local_438 >> 8;
      if (uVar21 == 0x3fe) {
        uVar24 = 0x3fe;
        uVar25 = 0;
      }
      else {
        uVar24 = 0;
        uVar25 = 0x400;
      }
      iVar39 = test_false("test/packettest.c",0x1ca,"PACKET_as_length_prefixed_2(&pkt, &subpkt)",
                          uVar21 == 0x3fe);
      if (iVar39 != 0) {
        iVar39 = test_size_t_eq("test/packettest.c",0x1cb,"PACKET_remaining(&pkt)",&_LC48,uVar25,
                                0x400);
        if (iVar39 != 0) {
          uVar25 = 0x206;
          if (uVar21 == 0x204) {
            uVar24 = 0x204;
            uVar25 = 0;
          }
          iVar39 = test_true("test/packettest.c",0x1cc,
                             "PACKET_as_length_prefixed_2(&exact_pkt, &subpkt)",uVar21 == 0x204);
          if (iVar39 != 0) {
            iVar39 = test_size_t_eq("test/packettest.c",0x1cd,"PACKET_remaining(&exact_pkt)",&_LC9,
                                    uVar25,0);
            if (iVar39 != 0) {
              iVar39 = test_size_t_eq("test/packettest.c",0x1ce,"PACKET_remaining(&subpkt)",&_LC51,
                                      uVar24,0x204);
              bVar26 = iVar39 != 0;
              goto LAB_00100a7d;
            }
          }
        }
      }
    }
  }
  bVar26 = false;
LAB_00100a7d:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar26;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool test_PACKET_as_length_prefixed_1(void)

{
  int iVar1;
  undefined8 in_R8;
  undefined8 in_R9;
  long in_FS_OFFSET;
  bool bVar2;
  undefined1 auVar3 [16];
  undefined8 local_117;
  undefined8 uStack_10f;
  undefined8 local_107;
  undefined8 uStack_ff;
  undefined8 local_f7;
  undefined8 uStack_ef;
  undefined8 local_e7;
  undefined8 uStack_df;
  undefined8 local_d7;
  undefined8 uStack_cf;
  undefined8 local_c7;
  undefined8 uStack_bf;
  undefined8 local_b7;
  undefined8 uStack_af;
  undefined8 local_a7;
  undefined8 uStack_9f;
  undefined8 local_97;
  undefined8 uStack_8f;
  undefined8 local_87;
  undefined8 uStack_7f;
  undefined8 local_77;
  undefined8 uStack_6f;
  undefined8 local_67;
  undefined8 uStack_5f;
  undefined8 local_57;
  undefined8 uStack_4f;
  undefined8 local_47;
  undefined8 uStack_3f;
  undefined8 local_37;
  undefined8 uStack_2f;
  undefined8 local_27;
  undefined4 local_1f;
  undefined2 local_1b;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_117 = __LC54;
  uStack_10f = _UNK_00104188;
  local_107 = __LC55;
  uStack_ff = _UNK_00104198;
  local_f7 = __LC56;
  uStack_ef = _UNK_001041a8;
  local_e7 = __LC57;
  uStack_df = _UNK_001041b8;
  local_d7 = __LC58;
  uStack_cf = _UNK_001041c8;
  local_c7 = __LC59;
  uStack_bf = _UNK_001041d8;
  local_b7 = __LC60;
  uStack_af = _UNK_001041e8;
  local_a7 = _LC62;
  uStack_9f = _UNK_001041f8;
  local_97 = __LC54;
  uStack_8f = _UNK_00104188;
  local_87 = __LC55;
  uStack_7f = _UNK_00104198;
  local_77 = __LC56;
  uStack_6f = _UNK_001041a8;
  local_67 = __LC57;
  uStack_5f = _UNK_001041b8;
  local_57 = __LC58;
  uStack_4f = _UNK_001041c8;
  local_47 = __LC59;
  uStack_3f = _UNK_001041d8;
  local_37 = __LC60;
  uStack_2f = _UNK_001041e8;
  local_27 = _LC62;
  local_1f = 0xf8f6f4f2;
  local_1b = 0xfcfa;
  iVar1 = test_true("test/packettest.c",0x1b1,"PACKET_buf_init(&pkt, buf1, BUF_LEN)",1,in_R8,in_R9,
                    (undefined1  [16])0x0,0x10);
  if (iVar1 != 0) {
    iVar1 = test_true("test/packettest.c",0x1b2,"PACKET_buf_init(&exact_pkt, buf1, len + 1)",1);
    if (iVar1 != 0) {
      iVar1 = test_false("test/packettest.c",0x1b3,"PACKET_as_length_prefixed_1(&pkt, &subpkt)",0);
      if (iVar1 != 0) {
        iVar1 = test_size_t_eq("test/packettest.c",0x1b4,"PACKET_remaining(&pkt)","BUF_LEN",0xff,
                               0xff);
        if (iVar1 != 0) {
          auVar3._8_8_ = 0x10;
          auVar3._0_8_ = &local_117;
          iVar1 = test_true("test/packettest.c",0x1b5,
                            "PACKET_as_length_prefixed_1(&exact_pkt, &subpkt)",1);
          if (iVar1 != 0) {
            iVar1 = test_size_t_eq("test/packettest.c",0x1b6,"PACKET_remaining(&exact_pkt)",&_LC9,0,
                                   0,auVar3);
            if (iVar1 != 0) {
              iVar1 = test_size_t_eq("test/packettest.c",0x1b7,"PACKET_remaining(&subpkt)",&_LC51,
                                     0x10,0x10);
              bVar2 = iVar1 != 0;
              goto LAB_00100d1c;
            }
          }
        }
      }
    }
  }
  bVar2 = false;
LAB_00100d1c:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool test_PACKET_get_length_prefixed_2(void)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  ushort uVar21;
  char *pcVar22;
  char *pcVar23;
  long lVar24;
  ushort *puVar25;
  ushort uVar26;
  ulong uVar27;
  long in_FS_OFFSET;
  bool bVar28;
  undefined1 auVar29 [16];
  undefined1 auVar33 [16];
  undefined1 auVar37 [16];
  undefined1 auVar40 [16];
  int iVar41;
  int iVar55;
  undefined1 auVar43 [16];
  undefined1 auVar47 [16];
  undefined1 auVar51 [16];
  undefined1 auVar54 [16];
  int iVar56;
  undefined2 uVar57;
  undefined2 uVar58;
  int iVar59;
  undefined2 uVar60;
  int iVar61;
  undefined1 auVar63 [16];
  undefined2 local_448;
  undefined2 uStack_446;
  char acStack_444 [1028];
  long local_40;
  undefined1 auVar30 [16];
  undefined1 auVar34 [16];
  undefined1 auVar31 [16];
  undefined1 auVar35 [16];
  undefined1 auVar38 [16];
  undefined1 auVar32 [16];
  undefined1 auVar36 [16];
  undefined1 auVar39 [16];
  undefined1 auVar42 [12];
  undefined1 auVar44 [16];
  undefined1 auVar48 [16];
  undefined1 auVar45 [16];
  undefined1 auVar49 [16];
  undefined1 auVar52 [16];
  undefined1 auVar46 [16];
  undefined1 auVar50 [16];
  undefined1 auVar53 [16];
  int iVar62;
  int iVar64;
  int iVar65;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar22 = (char *)&local_448;
  auVar43 = __LC39;
  do {
    pcVar23 = pcVar22 + 0x10;
    iVar62 = auVar43._0_4_;
    auVar63._0_4_ = iVar62 + __LC40;
    iVar55 = auVar43._4_4_;
    auVar63._4_4_ = iVar55 + _UNK_00104134;
    iVar64 = auVar43._8_4_;
    iVar65 = auVar43._12_4_;
    auVar63._8_4_ = iVar64 + _UNK_00104138;
    auVar63._12_4_ = iVar65 + _UNK_0010413c;
    auVar32._0_12_ = auVar43._0_12_;
    auVar32._12_2_ = auVar43._6_2_;
    auVar32._14_2_ = (short)((uint)(iVar55 + _UNK_00104144) >> 0x10);
    auVar31._12_4_ = auVar32._12_4_;
    auVar31._0_10_ = auVar43._0_10_;
    uVar58 = (undefined2)(iVar55 + _UNK_00104144);
    auVar31._10_2_ = uVar58;
    auVar30._10_6_ = auVar31._10_6_;
    auVar30._0_8_ = auVar43._0_8_;
    auVar30._8_2_ = auVar43._4_2_;
    uVar57 = (undefined2)((uint)(iVar62 + __LC41) >> 0x10);
    auVar17._2_8_ = auVar30._8_8_;
    auVar17._0_2_ = uVar57;
    auVar17._10_6_ = 0;
    auVar40._0_2_ = auVar43._0_2_;
    auVar29._12_4_ = 0;
    auVar29._0_12_ = SUB1612(auVar17 << 0x30,4);
    auVar29 = auVar29 << 0x20;
    uVar60 = (undefined2)(iVar64 + _UNK_00104148);
    auVar36._0_12_ = auVar29._0_12_;
    auVar36._12_2_ = uVar57;
    auVar36._14_2_ = (short)((uint)(iVar64 + _UNK_00104148) >> 0x10);
    auVar35._12_4_ = auVar36._12_4_;
    auVar35._0_10_ = auVar29._0_10_;
    auVar35._10_2_ = auVar43._10_2_;
    auVar34._10_6_ = auVar35._10_6_;
    auVar34._0_8_ = auVar29._0_8_;
    auVar34._8_2_ = auVar43._2_2_;
    auVar18._2_8_ = auVar34._8_8_;
    auVar18._0_2_ = uVar60;
    auVar18._10_6_ = 0;
    auVar33._12_4_ = 0;
    auVar33._0_12_ = SUB1612(auVar18 << 0x30,4);
    auVar33 = auVar33 << 0x20;
    iVar56 = iVar62 + SUB164(__LC43,0);
    iVar59 = iVar55 + SUB164(__LC43,4);
    iVar61 = iVar64 + SUB164(__LC43,8);
    iVar41 = iVar62 + SUB164(__LC42,0);
    iVar55 = iVar55 + SUB164(__LC42,4);
    auVar42._0_8_ = CONCAT44(iVar55,iVar41);
    auVar42._8_4_ = iVar64 + SUB164(__LC42,8);
    auVar39._0_12_ = auVar33._0_12_;
    auVar39._12_2_ = uVar60;
    auVar39._14_2_ = (short)(iVar65 + _UNK_0010414c);
    auVar38._12_4_ = auVar39._12_4_;
    auVar38._0_10_ = auVar33._0_10_;
    auVar38._10_2_ = uVar58;
    auVar37._10_6_ = auVar38._10_6_;
    auVar37._0_8_ = auVar33._0_8_;
    auVar37._8_2_ = (short)(iVar62 + __LC41);
    auVar40._8_8_ = auVar37._8_8_;
    auVar40._6_2_ = auVar43._12_2_;
    auVar40._4_2_ = auVar43._8_2_;
    auVar40._2_2_ = auVar43._4_2_;
    auVar46._12_2_ = (short)((uint)iVar55 >> 0x10);
    auVar46._0_12_ = auVar42;
    auVar46._14_2_ = (short)((uint)iVar59 >> 0x10);
    auVar45._12_4_ = auVar46._12_4_;
    auVar45._0_10_ = auVar42._0_10_;
    uVar58 = (undefined2)iVar59;
    auVar45._10_2_ = uVar58;
    auVar44._10_6_ = auVar45._10_6_;
    auVar44._8_2_ = (short)iVar55;
    auVar44._0_8_ = auVar42._0_8_;
    uVar57 = (undefined2)((uint)iVar56 >> 0x10);
    auVar19._2_8_ = auVar44._8_8_;
    auVar19._0_2_ = uVar57;
    auVar19._10_6_ = 0;
    auVar54._0_2_ = (undefined2)iVar41;
    auVar43._12_4_ = 0;
    auVar43._0_12_ = SUB1612(auVar19 << 0x30,4);
    auVar43 = auVar43 << 0x20;
    auVar40 = auVar40 & __LC44;
    uVar60 = (undefined2)iVar61;
    auVar50._0_12_ = auVar43._0_12_;
    auVar50._12_2_ = uVar57;
    auVar50._14_2_ = (short)((uint)iVar61 >> 0x10);
    auVar49._12_4_ = auVar50._12_4_;
    auVar49._0_10_ = auVar43._0_10_;
    auVar49._10_2_ = (short)((uint)auVar42._8_4_ >> 0x10);
    auVar48._10_6_ = auVar49._10_6_;
    auVar48._0_8_ = auVar43._0_8_;
    auVar48._8_2_ = (short)((uint)iVar41 >> 0x10);
    auVar20._2_8_ = auVar48._8_8_;
    auVar20._0_2_ = uVar60;
    auVar20._10_6_ = 0;
    auVar47._12_4_ = 0;
    auVar47._0_12_ = SUB1612(auVar20 << 0x30,4);
    auVar47 = auVar47 << 0x20;
    auVar53._0_12_ = auVar47._0_12_;
    auVar53._12_2_ = uVar60;
    auVar53._14_2_ = (short)(iVar65 + SUB164(__LC43,0xc));
    auVar52._12_4_ = auVar53._12_4_;
    auVar52._0_10_ = auVar47._0_10_;
    auVar52._10_2_ = uVar58;
    auVar51._10_6_ = auVar52._10_6_;
    auVar51._0_8_ = auVar47._0_8_;
    auVar51._8_2_ = (short)iVar56;
    auVar54._8_8_ = auVar51._8_8_;
    auVar54._6_2_ = (short)(iVar65 + SUB164(__LC42,0xc));
    auVar54._4_2_ = (short)auVar42._8_4_;
    auVar54._2_2_ = (short)iVar55;
    auVar54 = auVar54 & __LC44;
    sVar1 = auVar40._0_2_;
    sVar2 = auVar40._2_2_;
    sVar3 = auVar40._4_2_;
    sVar4 = auVar40._6_2_;
    sVar5 = auVar40._8_2_;
    sVar6 = auVar40._10_2_;
    sVar7 = auVar40._12_2_;
    sVar8 = auVar40._14_2_;
    sVar9 = auVar54._0_2_;
    sVar10 = auVar54._2_2_;
    sVar11 = auVar54._4_2_;
    sVar12 = auVar54._6_2_;
    sVar13 = auVar54._8_2_;
    sVar14 = auVar54._10_2_;
    sVar15 = auVar54._12_2_;
    sVar16 = auVar54._14_2_;
    *pcVar22 = ((0 < sVar1) * (sVar1 < 0x100) * auVar40[0] - (0xff < sVar1)) * '\x02';
    pcVar22[1] = ((0 < sVar2) * (sVar2 < 0x100) * auVar40[2] - (0xff < sVar2)) * '\x02';
    pcVar22[2] = ((0 < sVar3) * (sVar3 < 0x100) * auVar40[4] - (0xff < sVar3)) * '\x02';
    pcVar22[3] = ((0 < sVar4) * (sVar4 < 0x100) * auVar40[6] - (0xff < sVar4)) * '\x02';
    pcVar22[4] = ((0 < sVar5) * (sVar5 < 0x100) * auVar40[8] - (0xff < sVar5)) * '\x02';
    pcVar22[5] = ((0 < sVar6) * (sVar6 < 0x100) * auVar40[10] - (0xff < sVar6)) * '\x02';
    pcVar22[6] = ((0 < sVar7) * (sVar7 < 0x100) * auVar40[0xc] - (0xff < sVar7)) * '\x02';
    pcVar22[7] = ((0 < sVar8) * (sVar8 < 0x100) * auVar40[0xe] - (0xff < sVar8)) * '\x02';
    pcVar22[8] = ((0 < sVar9) * (sVar9 < 0x100) * auVar54[0] - (0xff < sVar9)) * '\x02';
    pcVar22[9] = ((0 < sVar10) * (sVar10 < 0x100) * auVar54[2] - (0xff < sVar10)) * '\x02';
    pcVar22[10] = ((0 < sVar11) * (sVar11 < 0x100) * auVar54[4] - (0xff < sVar11)) * '\x02';
    pcVar22[0xb] = ((0 < sVar12) * (sVar12 < 0x100) * auVar54[6] - (0xff < sVar12)) * '\x02';
    pcVar22[0xc] = ((0 < sVar13) * (sVar13 < 0x100) * auVar54[8] - (0xff < sVar13)) * '\x02';
    pcVar22[0xd] = ((0 < sVar14) * (sVar14 < 0x100) * auVar54[10] - (0xff < sVar14)) * '\x02';
    pcVar22[0xe] = ((0 < sVar15) * (sVar15 < 0x100) * auVar54[0xc] - (0xff < sVar15)) * '\x02';
    pcVar22[0xf] = ((0 < sVar16) * (sVar16 < 0x100) * auVar54[0xe] - (0xff < sVar16)) * '\x02';
    pcVar22 = pcVar23;
    auVar43 = auVar63;
  } while (acStack_444 + 0x3fc != pcVar23);
  iVar41 = test_true("test/packettest.c",0x180,"PACKET_buf_init(&pkt, buf1, 1024)",1);
  if (iVar41 != 0) {
    iVar41 = test_true("test/packettest.c",0x181,"PACKET_buf_init(&short_pkt, buf1, len)",1);
    if (iVar41 != 0) {
      uVar21 = local_448 << 8 | local_448 >> 8;
      if (0x3fe < uVar21) {
        puVar25 = (ushort *)0x0;
        uVar27 = 0;
      }
      else {
        puVar25 = &uStack_446;
        uVar27 = (ulong)uVar21;
      }
      iVar41 = test_true("test/packettest.c",0x182,"PACKET_get_length_prefixed_2(&pkt, &subpkt)",
                         0x3fe >= uVar21);
      if (iVar41 != 0) {
        iVar41 = test_size_t_eq("test/packettest.c",0x183,"PACKET_remaining(&subpkt)",&_LC51,uVar27,
                                0x204);
        if (iVar41 != 0) {
          if (uVar27 < 2) {
            uVar26 = 0x401;
          }
          else {
            uVar26 = *puVar25 << 8 | *puVar25 >> 8;
          }
          iVar41 = test_true("test/packettest.c",0x184,"PACKET_get_net_2(&subpkt, &i)",uVar27 >= 2);
          if (iVar41 != 0) {
            iVar41 = test_uint_eq("test/packettest.c",0x185,&_LC16,"0x0608",uVar26,0x608);
            if (iVar41 != 0) {
              if (0x202 < uVar21) {
                lVar24 = 0x204;
              }
              else {
                lVar24 = 0x202 - (ulong)uVar21;
              }
              iVar41 = test_false("test/packettest.c",0x186,
                                  "PACKET_get_length_prefixed_2(&short_pkt, &subpkt)",
                                  0x202 >= uVar21);
              if (iVar41 != 0) {
                iVar41 = test_size_t_eq("test/packettest.c",0x187,"PACKET_remaining(&short_pkt)",
                                        &_LC51,lVar24,0x204);
                bVar28 = iVar41 != 0;
                goto LAB_00100f4d;
              }
            }
          }
        }
      }
    }
  }
  bVar28 = false;
LAB_00100f4d:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar28;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool test_PACKET_get_length_prefixed_1(void)

{
  int iVar1;
  undefined8 in_R8;
  undefined8 in_R9;
  long in_FS_OFFSET;
  bool bVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 local_127;
  undefined8 uStack_11f;
  undefined8 local_117;
  undefined8 uStack_10f;
  undefined8 local_107;
  undefined8 uStack_ff;
  undefined8 local_f7;
  undefined8 uStack_ef;
  undefined8 local_e7;
  undefined8 uStack_df;
  undefined8 local_d7;
  undefined8 uStack_cf;
  undefined8 local_c7;
  undefined8 uStack_bf;
  undefined8 local_b7;
  undefined8 uStack_af;
  undefined8 local_a7;
  undefined8 uStack_9f;
  undefined8 local_97;
  undefined8 uStack_8f;
  undefined8 local_87;
  undefined8 uStack_7f;
  undefined8 local_77;
  undefined8 uStack_6f;
  undefined8 local_67;
  undefined8 uStack_5f;
  undefined8 local_57;
  undefined8 uStack_4f;
  undefined8 local_47;
  undefined8 uStack_3f;
  undefined8 local_37;
  undefined4 local_2f;
  undefined2 local_2b;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_127 = __LC54;
  uStack_11f = _UNK_00104188;
  local_117 = __LC55;
  uStack_10f = _UNK_00104198;
  local_107 = __LC56;
  uStack_ff = _UNK_001041a8;
  local_f7 = __LC57;
  uStack_ef = _UNK_001041b8;
  local_e7 = __LC58;
  uStack_df = _UNK_001041c8;
  local_d7 = __LC59;
  uStack_cf = _UNK_001041d8;
  local_c7 = __LC60;
  uStack_bf = _UNK_001041e8;
  local_b7 = _LC62;
  uStack_af = _UNK_001041f8;
  local_a7 = __LC54;
  uStack_9f = _UNK_00104188;
  local_97 = __LC55;
  uStack_8f = _UNK_00104198;
  local_87 = __LC56;
  uStack_7f = _UNK_001041a8;
  local_77 = __LC57;
  uStack_6f = _UNK_001041b8;
  local_67 = __LC58;
  uStack_5f = _UNK_001041c8;
  local_57 = __LC59;
  uStack_4f = _UNK_001041d8;
  local_47 = __LC60;
  uStack_3f = _UNK_001041e8;
  local_2f = 0xf8f6f4f2;
  local_37 = _LC62;
  local_2b = 0xfcfa;
  iVar1 = test_true("test/packettest.c",0x168,"PACKET_buf_init(&pkt, buf1, BUF_LEN)",1,in_R8,in_R9,
                    (undefined1  [16])0x0,0x10);
  if (iVar1 != 0) {
    iVar1 = test_true("test/packettest.c",0x169,"PACKET_buf_init(&short_pkt, buf1, len)",1);
    if (iVar1 != 0) {
      auVar3._8_8_ = 0x10;
      auVar3._0_8_ = &local_127;
      iVar1 = test_true("test/packettest.c",0x16a,"PACKET_get_length_prefixed_1(&pkt, &subpkt)",1);
      if (iVar1 != 0) {
        iVar1 = test_size_t_eq("test/packettest.c",0x16b,"PACKET_remaining(&subpkt)",&_LC51,0x10,
                               0x10,auVar3);
        if (iVar1 != 0) {
          auVar4._8_8_ = 0xe;
          auVar4._0_8_ = (long)&local_127 + 2;
          iVar1 = test_true("test/packettest.c",0x16c,"PACKET_get_net_2(&subpkt, &i)",1);
          if (iVar1 != 0) {
            iVar1 = test_uint_eq("test/packettest.c",0x16d,&_LC16,"0x0204",0x204,0x204,auVar4);
            if (iVar1 != 0) {
              iVar1 = test_false("test/packettest.c",0x16e,
                                 "PACKET_get_length_prefixed_1(&short_pkt, &subpkt)",0);
              if (iVar1 != 0) {
                iVar1 = test_size_t_eq("test/packettest.c",0x16f,"PACKET_remaining(&short_pkt)",
                                       &_LC51,0x10,0x10);
                bVar2 = iVar1 != 0;
                goto LAB_0010124d;
              }
            }
          }
        }
      }
    }
  }
  bVar2 = false;
LAB_0010124d:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool test_PACKET_contains_zero_byte(void)

{
  int iVar1;
  void *pvVar2;
  long in_FS_OFFSET;
  bool bVar3;
  undefined8 local_34;
  undefined2 local_2c;
  undefined8 local_2a;
  undefined2 local_22;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_22 = 0x7979;
  local_34 = 0x7878787878787878;
  local_2c = 0x7878;
  local_2a = 0x7979007979797979;
  iVar1 = test_true("test/packettest.c",0x115,"PACKET_buf_init(&pkt, (unsigned char*)buf1, 10)",1);
  if (iVar1 != 0) {
    pvVar2 = memchr(&local_34,0,10);
    iVar1 = test_false("test/packettest.c",0x116,"PACKET_contains_zero_byte(&pkt)",
                       pvVar2 != (void *)0x0);
    if (iVar1 != 0) {
      iVar1 = test_true("test/packettest.c",0x117,"PACKET_buf_init(&pkt, (unsigned char*)buf2, 10)",
                        1);
      if (iVar1 != 0) {
        pvVar2 = memchr(&local_2a,0,10);
        iVar1 = test_true("test/packettest.c",0x118,"PACKET_contains_zero_byte(&pkt)",
                          pvVar2 != (void *)0x0);
        bVar3 = iVar1 != 0;
        goto LAB_00101427;
      }
    }
  }
  bVar3 = false;
LAB_00101427:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 test_PACKET_get_quic_vlint(void)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  byte *pbVar4;
  
  pbVar4 = &cases_0;
  while( true ) {
    iVar2 = test_true("test/packettest.c",0x1fd,
                      "PACKET_buf_init(&pkt, cases[i].buf, sizeof(cases[i].buf))",1);
    if (iVar2 == 0) {
      return 0;
    }
    bVar1 = *pbVar4;
    uVar3 = ossl_quic_vlint_decode_unchecked(pbVar4);
    iVar2 = test_true("test/packettest.c",0x1fe,"PACKET_get_quic_vlint(&pkt, &v)",1);
    if (iVar2 == 0) {
      return 0;
    }
    iVar2 = test_uint64_t_eq("test/packettest.c",0x1ff,&_LC83,"cases[i].value",uVar3,
                             *(undefined8 *)(pbVar4 + 0x18));
    if (iVar2 == 0) {
      return 0;
    }
    iVar2 = test_size_t_eq("test/packettest.c",0x200,"PACKET_remaining(&pkt)",
                           "sizeof(cases[i].buf) - cases[i].expected_read_count",
                           0x10 - (ulong)(uint)(1 << (bVar1 >> 6)),0x10 - *(long *)(pbVar4 + 0x10));
    if (iVar2 == 0) break;
    pbVar4 = pbVar4 + 0x20;
    if (pbVar4 == &cases_1) {
      return 1;
    }
  }
  return 0;
}



undefined8 test_PACKET_get_quic_length_prefixed(void)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  long in_FS_OFFSET;
  bool bVar10;
  ulong local_68;
  byte *local_58;
  
  pbVar9 = &cases_1;
  pbVar8 = (byte *)0x0;
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = 0;
  do {
    iVar3 = *(int *)(pbVar9 + 0x20);
    local_58 = (byte *)0x0;
    if (iVar3 == 0) {
      uVar7 = *(long *)(pbVar9 + 0x18) + *(long *)(pbVar9 + 0x10);
      if (-1 < (long)uVar7) goto LAB_0010166f;
      iVar2 = test_true("test/packettest.c",0x225,
                        "PACKET_buf_init(&pkt, cases[i].buf, cases[i].fail ? sizeof(cases[i].buf) : cases[i].enclen + cases[i].len)"
                        ,0);
      if (iVar2 != 0) {
        bVar10 = true;
        goto LAB_001016bb;
      }
LAB_0010170b:
      uVar4 = 0;
      goto LAB_0010170d;
    }
    uVar7 = 0x10;
LAB_0010166f:
    iVar2 = test_true("test/packettest.c",0x225,
                      "PACKET_buf_init(&pkt, cases[i].buf, cases[i].fail ? sizeof(cases[i].buf) : cases[i].enclen + cases[i].len)"
                      ,1);
    if (iVar2 == 0) goto LAB_0010170b;
    bVar10 = iVar3 == 0;
    local_58 = pbVar9;
    if (uVar7 == 0) {
LAB_001016bb:
      uVar4 = 0;
    }
    else {
      uVar6 = (ulong)(uint)(1 << (*pbVar9 >> 6));
      if (uVar7 < uVar6) goto LAB_001016bb;
      uVar5 = ossl_quic_vlint_decode_unchecked(pbVar9);
      if (uVar7 - uVar6 < uVar5) goto LAB_001016bb;
      pbVar8 = pbVar9 + uVar6;
      local_58 = pbVar8 + uVar5;
      uVar4 = 1;
      local_68 = uVar5;
    }
    iVar2 = test_int_eq("test/packettest.c",0x22b,"PACKET_get_quic_length_prefixed(&pkt, &subpkt)",
                        "!cases[i].fail",uVar4,bVar10);
    if (iVar2 == 0) goto LAB_0010170b;
    if (iVar3 == 0) {
      iVar3 = test_ptr_eq("test/packettest.c",0x234,"subpkt.curr","cases[i].buf + cases[i].enclen",
                          pbVar8,pbVar9 + *(long *)(pbVar9 + 0x10));
      if (iVar3 != 0) {
        iVar3 = test_size_t_eq("test/packettest.c",0x237,"subpkt.remaining","cases[i].len",local_68,
                               *(undefined8 *)(pbVar9 + 0x18));
        if (iVar3 != 0) goto LAB_0010177e;
      }
      goto LAB_0010170b;
    }
    iVar3 = test_ptr_eq("test/packettest.c",0x22f,"pkt.curr","cases[i].buf",local_58,pbVar9);
    if (iVar3 == 0) goto LAB_0010170b;
LAB_0010177e:
    pbVar9 = pbVar9 + 0x28;
  } while (pbVar9 != &_LC39);
  uVar4 = 1;
LAB_0010170d:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool test_PACKET_copy_all(void)

{
  int iVar1;
  long in_FS_OFFSET;
  bool bVar2;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined7 uStack_40;
  undefined1 uStack_39;
  undefined7 uStack_38;
  undefined8 uStack_31;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = test_true("test/packettest.c",0xd0,"PACKET_buf_init(&pkt, smbuf, BUF_LEN)",1);
  if (iVar1 != 0) {
    local_128 = _smbuf;
    uStack_120 = uRam0000000000102e28;
    local_118 = _DAT_00102e30;
    uStack_110 = uRam0000000000102e38;
    local_108 = _DAT_00102e40;
    uStack_100 = uRam0000000000102e48;
    local_f8 = _DAT_00102e50;
    uStack_f0 = uRam0000000000102e58;
    local_e8 = _DAT_00102e60;
    uStack_e0 = uRam0000000000102e68;
    local_d8 = _DAT_00102e70;
    uStack_d0 = uRam0000000000102e78;
    local_c8 = _DAT_00102e80;
    uStack_c0 = uRam0000000000102e88;
    local_b8 = _DAT_00102e90;
    uStack_b0 = uRam0000000000102e98;
    local_48 = _DAT_00102f00;
    uStack_40 = uRam0000000000102f08;
    local_a8 = _DAT_00102ea0;
    uStack_a0 = uRam0000000000102ea8;
    local_98 = _DAT_00102eb0;
    uStack_90 = uRam0000000000102eb8;
    local_88 = _DAT_00102ec0;
    uStack_80 = uRam0000000000102ec8;
    local_78 = _DAT_00102ed0;
    uStack_70 = uRam0000000000102ed8;
    local_68 = _DAT_00102ee0;
    uStack_60 = uRam0000000000102ee8;
    local_58 = _DAT_00102ef0;
    uStack_50 = uRam0000000000102ef8;
    uStack_39 = DAT_00102f0f;
    uStack_38 = _DAT_00102f10;
    uStack_31 = uRam0000000000102f17;
    iVar1 = test_true("test/packettest.c",0xd1,"PACKET_copy_all(&pkt, tmp, BUF_LEN, &len)",1);
    if (iVar1 != 0) {
      iVar1 = test_size_t_eq("test/packettest.c",0xd2,&_LC51,"BUF_LEN",0xff,0xff);
      if (iVar1 != 0) {
        iVar1 = test_mem_eq("test/packettest.c",0xd3,"smbuf",&_LC95,&smbuf,0xff,&local_128,0xff);
        if (iVar1 != 0) {
          iVar1 = test_size_t_eq("test/packettest.c",0xd4,"PACKET_remaining(&pkt)","BUF_LEN",0xff,
                                 0xff);
          if (iVar1 != 0) {
            iVar1 = test_false("test/packettest.c",0xd5,
                               "PACKET_copy_all(&pkt, tmp, BUF_LEN - 1, &len)",0);
            bVar2 = iVar1 != 0;
            goto LAB_00101876;
          }
        }
      }
    }
  }
  bVar2 = false;
LAB_00101876:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint test_PACKET_strndup(void)

{
  uint uVar1;
  int iVar2;
  char *__s;
  size_t sVar3;
  long in_FS_OFFSET;
  undefined8 local_54;
  undefined2 local_4c;
  undefined8 local_4a;
  undefined2 local_42;
  long local_40;
  
  __s = (char *)0x0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_4c = 0x7878;
  local_42 = 0x7979;
  local_54 = 0x7878787878787878;
  local_4a = 0x7979007979797979;
  uVar1 = test_true("test/packettest.c",0xfc,"PACKET_buf_init(&pkt, (unsigned char*)buf1, 10)",1);
  if (uVar1 != 0) {
    CRYPTO_free((void *)0x0);
    __s = (char *)CRYPTO_strndup(&local_54,10,"include/internal/packet.h",0x1e6);
    uVar1 = test_true("test/packettest.c",0xfd,"PACKET_strndup(&pkt, &data)",__s != (char *)0x0);
    if (uVar1 != 0) {
      sVar3 = strlen(__s);
      uVar1 = test_size_t_eq("test/packettest.c",0xfe,"strlen(data)",&_LC100,sVar3,10);
      if (uVar1 != 0) {
        iVar2 = test_strn_eq("test/packettest.c",0xff,&_LC103,&_LC102,__s,10,&local_54,10);
        if (iVar2 != 0) {
          iVar2 = test_true("test/packettest.c",0x100,
                            "PACKET_buf_init(&pkt, (unsigned char*)buf2, 10)",1);
          if (iVar2 != 0) {
            CRYPTO_free(__s);
            __s = (char *)CRYPTO_strndup(&local_4a,10,"include/internal/packet.h",0x1e6);
            iVar2 = test_true("test/packettest.c",0x101,"PACKET_strndup(&pkt, &data)",
                              __s != (char *)0x0);
            if (iVar2 != 0) {
              sVar3 = strlen(__s);
              iVar2 = test_size_t_eq("test/packettest.c",0x102,"strlen(data)",&_LC104,sVar3,5);
              if (iVar2 != 0) {
                iVar2 = test_str_eq("test/packettest.c",0x103,&_LC103,&_LC105,__s,&local_4a);
                uVar1 = (uint)(iVar2 != 0);
                goto LAB_00101af1;
              }
            }
          }
        }
        uVar1 = 0;
      }
    }
  }
LAB_00101af1:
  CRYPTO_free(__s);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool test_PACKET_copy_bytes(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = test_true("test/packettest.c",0xb7,"PACKET_buf_init(&pkt, smbuf, BUF_LEN)",1);
  iVar3 = smbuf;
  if (((((iVar2 != 0) &&
        (iVar2 = test_true("test/packettest.c",0xb8,"PACKET_copy_bytes(&pkt, bytes, 4)",1),
        iVar2 != 0)) &&
       (iVar2 = test_char_eq("test/packettest.c",0xb9,"bytes[0]",&_LC27,(int)(char)iVar3,2),
       iVar2 != 0)) &&
      (((iVar2 = test_char_eq("test/packettest.c",0xba,"bytes[1]",&_LC11,
                              (int)(char)((uint)iVar3 >> 8),4), iVar2 != 0 &&
        (iVar2 = test_char_eq("test/packettest.c",0xbb,"bytes[2]",&_LC30,
                              (int)(char)((uint)iVar3 >> 0x10),6), iVar2 != 0)) &&
       ((iVar3 = test_char_eq("test/packettest.c",0xbc,"bytes[3]",&_LC32,iVar3 >> 0x18,8),
        iVar3 != 0 &&
        ((iVar3 = test_size_t_eq("test/packettest.c",0xbd,"PACKET_remaining(&pkt)","BUF_LEN - 4",
                                 0xfb,0xfb), iVar3 != 0 &&
         (iVar3 = test_true("test/packettest.c",0xbe,"PACKET_forward(&pkt, BUF_LEN - 8)",1),
         uVar1 = DAT_00102f1b, iVar3 != 0)))))))) &&
     ((iVar3 = test_true("test/packettest.c",0xbf,"PACKET_copy_bytes(&pkt, bytes, 4)",1), iVar3 != 0
      && ((((iVar3 = test_uchar_eq("test/packettest.c",0xc0,"bytes[0]",&_LC36,uVar1 & 0xff,0xf8),
            iVar3 != 0 &&
            (iVar3 = test_uchar_eq("test/packettest.c",0xc1,"bytes[1]",&_LC37,uVar1 >> 8 & 0xff,0xfa
                                  ), iVar3 != 0)) &&
           (iVar3 = test_uchar_eq("test/packettest.c",0xc2,"bytes[2]",&_LC38,uVar1 >> 0x10 & 0xff,
                                  0xfc), iVar3 != 0)) &&
          (iVar3 = test_uchar_eq("test/packettest.c",0xc3,"bytes[3]",&_LC22,uVar1 >> 0x18,0xfe),
          iVar3 != 0)))))) {
    iVar3 = test_false("test/packettest.c",0xc4,"PACKET_remaining(&pkt)",0);
    return iVar3 != 0;
  }
  return false;
}



uint test_PACKET_memdup(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  void *ptr;
  byte bVar4;
  
  ptr = (void *)0x0;
  uVar2 = test_true("test/packettest.c",0xe2,"PACKET_buf_init(&pkt, smbuf, BUF_LEN)",1);
  if (uVar2 != 0) {
    CRYPTO_free((void *)0x0);
    ptr = (void *)CRYPTO_memdup(&smbuf,0xff,"include/internal/packet.h",0x1cf);
    cVar1 = -(ptr != (void *)0x0);
    uVar2 = test_true("test/packettest.c",0xe3,"PACKET_memdup(&pkt, &data, &len)",ptr != (void *)0x0
                     );
    if (uVar2 != 0) {
      uVar2 = test_size_t_eq("test/packettest.c",0xe4,&_LC51,"BUF_LEN",cVar1,0xff);
      if (uVar2 != 0) {
        iVar3 = test_mem_eq("test/packettest.c",0xe5,&_LC103,"PACKET_data(&pkt)",ptr,cVar1,&smbuf,
                            cVar1);
        if (iVar3 != 0) {
          iVar3 = test_true("test/packettest.c",0xe6,"PACKET_forward(&pkt, 10)",1);
          if (iVar3 != 0) {
            CRYPTO_free(ptr);
            ptr = (void *)CRYPTO_memdup(&DAT_00102e2a,0xf5,"include/internal/packet.h",0x1cf);
            bVar4 = -(ptr != (void *)0x0) & 0xf5;
            iVar3 = test_true("test/packettest.c",0xe7,"PACKET_memdup(&pkt, &data, &len)",
                              ptr != (void *)0x0);
            if (iVar3 != 0) {
              iVar3 = test_size_t_eq("test/packettest.c",0xe8,&_LC51,"BUF_LEN - 10",bVar4,0xf5);
              if (iVar3 != 0) {
                iVar3 = test_mem_eq("test/packettest.c",0xe9,&_LC103,"PACKET_data(&pkt)",ptr,bVar4,
                                    &DAT_00102e2a,bVar4);
                uVar2 = (uint)(iVar3 != 0);
                goto LAB_00101fab;
              }
            }
          }
        }
        uVar2 = 0;
      }
    }
  }
LAB_00101fab:
  CRYPTO_free(ptr);
  return uVar2;
}



bool test_PACKET_equal(void)

{
  int iVar1;
  
  iVar1 = test_true("test/packettest.c",0x14f,"PACKET_buf_init(&pkt, smbuf, 4)",1);
  if (iVar1 != 0) {
    iVar1 = CRYPTO_memcmp(&smbuf,&smbuf,4);
    iVar1 = test_true("test/packettest.c",0x150,"PACKET_equal(&pkt, smbuf, 4)",iVar1 == 0);
    if (iVar1 != 0) {
      iVar1 = CRYPTO_memcmp(&smbuf,(void *)((long)&smbuf + 1),4);
      iVar1 = test_false("test/packettest.c",0x151,"PACKET_equal(&pkt, smbuf + 1, 4)",iVar1 == 0);
      if ((iVar1 != 0) &&
         (iVar1 = test_true("test/packettest.c",0x152,"PACKET_buf_init(&pkt, smbuf, BUF_LEN)",1),
         iVar1 != 0)) {
        iVar1 = CRYPTO_memcmp(&smbuf,&smbuf,0xff);
        iVar1 = test_true("test/packettest.c",0x153,"PACKET_equal(&pkt, smbuf, BUF_LEN)",iVar1 == 0)
        ;
        if ((iVar1 != 0) &&
           ((iVar1 = test_false("test/packettest.c",0x154,"PACKET_equal(&pkt, smbuf, BUF_LEN - 1)",0
                               ), iVar1 != 0 &&
            (iVar1 = test_false("test/packettest.c",0x155,"PACKET_equal(&pkt, smbuf, BUF_LEN + 1)",0
                               ), iVar1 != 0)))) {
          iVar1 = test_false("test/packettest.c",0x156,"PACKET_equal(&pkt, smbuf, 0)",0);
          return iVar1 != 0;
        }
      }
    }
  }
  return false;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool test_PACKET_get_length_prefixed_3(void)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  byte *pbVar21;
  byte *pbVar22;
  ulong uVar23;
  ushort uVar24;
  long lVar25;
  ushort *puVar26;
  ulong uVar27;
  long in_FS_OFFSET;
  bool bVar28;
  undefined1 auVar29 [16];
  undefined1 auVar33 [16];
  undefined1 auVar37 [16];
  undefined1 auVar40 [16];
  int iVar41;
  int iVar55;
  undefined1 auVar43 [16];
  undefined1 auVar47 [16];
  undefined1 auVar51 [16];
  undefined1 auVar54 [16];
  int iVar56;
  undefined2 uVar57;
  undefined2 uVar58;
  int iVar59;
  undefined2 uVar60;
  int iVar61;
  undefined1 auVar63 [16];
  undefined1 auVar66 [16];
  byte local_448 [3];
  undefined2 uStack_445;
  byte abStack_443 [1027];
  long local_40;
  undefined1 auVar30 [16];
  undefined1 auVar34 [16];
  undefined1 auVar31 [16];
  undefined1 auVar35 [16];
  undefined1 auVar38 [16];
  undefined1 auVar32 [16];
  undefined1 auVar36 [16];
  undefined1 auVar39 [16];
  undefined1 auVar42 [12];
  undefined1 auVar44 [16];
  undefined1 auVar48 [16];
  undefined1 auVar45 [16];
  undefined1 auVar49 [16];
  undefined1 auVar52 [16];
  undefined1 auVar46 [16];
  undefined1 auVar50 [16];
  undefined1 auVar53 [16];
  int iVar62;
  int iVar64;
  int iVar65;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  auVar66 = (undefined1  [16])0x0;
  pbVar21 = local_448;
  auVar43 = __LC119;
  do {
    pbVar22 = pbVar21 + 0x10;
    iVar62 = auVar43._0_4_;
    auVar63._0_4_ = iVar62 + __LC40;
    iVar55 = auVar43._4_4_;
    auVar63._4_4_ = iVar55 + _UNK_00104134;
    iVar64 = auVar43._8_4_;
    iVar65 = auVar43._12_4_;
    auVar63._8_4_ = iVar64 + _UNK_00104138;
    auVar63._12_4_ = iVar65 + _UNK_0010413c;
    auVar32._0_12_ = auVar43._0_12_;
    auVar32._12_2_ = auVar43._6_2_;
    auVar32._14_2_ = (short)((uint)(iVar55 + _UNK_00104144) >> 0x10);
    auVar31._12_4_ = auVar32._12_4_;
    auVar31._0_10_ = auVar43._0_10_;
    uVar58 = (undefined2)(iVar55 + _UNK_00104144);
    auVar31._10_2_ = uVar58;
    auVar30._10_6_ = auVar31._10_6_;
    auVar30._0_8_ = auVar43._0_8_;
    auVar30._8_2_ = auVar43._4_2_;
    uVar57 = (undefined2)((uint)(iVar62 + __LC41) >> 0x10);
    auVar17._2_8_ = auVar30._8_8_;
    auVar17._0_2_ = uVar57;
    auVar17._10_6_ = 0;
    auVar40._0_2_ = auVar43._0_2_;
    auVar29._12_4_ = 0;
    auVar29._0_12_ = SUB1612(auVar17 << 0x30,4);
    auVar29 = auVar29 << 0x20;
    uVar60 = (undefined2)(iVar64 + _UNK_00104148);
    auVar36._0_12_ = auVar29._0_12_;
    auVar36._12_2_ = uVar57;
    auVar36._14_2_ = (short)((uint)(iVar64 + _UNK_00104148) >> 0x10);
    auVar35._12_4_ = auVar36._12_4_;
    auVar35._0_10_ = auVar29._0_10_;
    auVar35._10_2_ = auVar43._10_2_;
    auVar34._10_6_ = auVar35._10_6_;
    auVar34._0_8_ = auVar29._0_8_;
    auVar34._8_2_ = auVar43._2_2_;
    auVar18._2_8_ = auVar34._8_8_;
    auVar18._0_2_ = uVar60;
    auVar18._10_6_ = 0;
    auVar33._12_4_ = 0;
    auVar33._0_12_ = SUB1612(auVar18 << 0x30,4);
    auVar33 = auVar33 << 0x20;
    iVar56 = iVar62 + SUB164(__LC43,0);
    iVar59 = iVar55 + SUB164(__LC43,4);
    iVar61 = iVar64 + SUB164(__LC43,8);
    iVar41 = iVar62 + SUB164(__LC42,0);
    iVar55 = iVar55 + SUB164(__LC42,4);
    auVar42._0_8_ = CONCAT44(iVar55,iVar41);
    auVar42._8_4_ = iVar64 + SUB164(__LC42,8);
    auVar39._0_12_ = auVar33._0_12_;
    auVar39._12_2_ = uVar60;
    auVar39._14_2_ = (short)(iVar65 + _UNK_0010414c);
    auVar38._12_4_ = auVar39._12_4_;
    auVar38._0_10_ = auVar33._0_10_;
    auVar38._10_2_ = uVar58;
    auVar37._10_6_ = auVar38._10_6_;
    auVar37._0_8_ = auVar33._0_8_;
    auVar37._8_2_ = (short)(iVar62 + __LC41);
    auVar40._8_8_ = auVar37._8_8_;
    auVar40._6_2_ = auVar43._12_2_;
    auVar40._4_2_ = auVar43._8_2_;
    auVar40._2_2_ = auVar43._4_2_;
    auVar46._12_2_ = (short)((uint)iVar55 >> 0x10);
    auVar46._0_12_ = auVar42;
    auVar46._14_2_ = (short)((uint)iVar59 >> 0x10);
    auVar45._12_4_ = auVar46._12_4_;
    auVar45._0_10_ = auVar42._0_10_;
    uVar58 = (undefined2)iVar59;
    auVar45._10_2_ = uVar58;
    auVar44._10_6_ = auVar45._10_6_;
    auVar44._8_2_ = (short)iVar55;
    auVar44._0_8_ = auVar42._0_8_;
    uVar57 = (undefined2)((uint)iVar56 >> 0x10);
    auVar19._2_8_ = auVar44._8_8_;
    auVar19._0_2_ = uVar57;
    auVar19._10_6_ = 0;
    auVar54._0_2_ = (undefined2)iVar41;
    auVar43._12_4_ = 0;
    auVar43._0_12_ = SUB1612(auVar19 << 0x30,4);
    auVar43 = auVar43 << 0x20;
    auVar40 = auVar40 & __LC44;
    uVar60 = (undefined2)iVar61;
    auVar50._0_12_ = auVar43._0_12_;
    auVar50._12_2_ = uVar57;
    auVar50._14_2_ = (short)((uint)iVar61 >> 0x10);
    auVar49._12_4_ = auVar50._12_4_;
    auVar49._0_10_ = auVar43._0_10_;
    auVar49._10_2_ = (short)((uint)auVar42._8_4_ >> 0x10);
    auVar48._10_6_ = auVar49._10_6_;
    auVar48._0_8_ = auVar43._0_8_;
    auVar48._8_2_ = (short)((uint)iVar41 >> 0x10);
    auVar20._2_8_ = auVar48._8_8_;
    auVar20._0_2_ = uVar60;
    auVar20._10_6_ = 0;
    auVar47._12_4_ = 0;
    auVar47._0_12_ = SUB1612(auVar20 << 0x30,4);
    auVar47 = auVar47 << 0x20;
    auVar53._0_12_ = auVar47._0_12_;
    auVar53._12_2_ = uVar60;
    auVar53._14_2_ = (short)(iVar65 + SUB164(__LC43,0xc));
    auVar52._12_4_ = auVar53._12_4_;
    auVar52._0_10_ = auVar47._0_10_;
    auVar52._10_2_ = uVar58;
    auVar51._10_6_ = auVar52._10_6_;
    auVar51._0_8_ = auVar47._0_8_;
    auVar51._8_2_ = (short)iVar56;
    auVar54._8_8_ = auVar51._8_8_;
    auVar54._6_2_ = (short)(iVar65 + SUB164(__LC42,0xc));
    auVar54._4_2_ = (short)auVar42._8_4_;
    auVar54._2_2_ = (short)iVar55;
    auVar54 = auVar54 & __LC44;
    sVar1 = auVar40._0_2_;
    sVar2 = auVar40._2_2_;
    sVar3 = auVar40._4_2_;
    sVar4 = auVar40._6_2_;
    sVar5 = auVar40._8_2_;
    sVar6 = auVar40._10_2_;
    sVar7 = auVar40._12_2_;
    sVar8 = auVar40._14_2_;
    sVar9 = auVar54._0_2_;
    sVar10 = auVar54._2_2_;
    sVar11 = auVar54._4_2_;
    sVar12 = auVar54._6_2_;
    sVar13 = auVar54._8_2_;
    sVar14 = auVar54._10_2_;
    sVar15 = auVar54._12_2_;
    sVar16 = auVar54._14_2_;
    *pbVar21 = ((0 < sVar1) * (sVar1 < 0x100) * auVar40[0] - (0xff < sVar1)) * '\x02';
    pbVar21[1] = ((0 < sVar2) * (sVar2 < 0x100) * auVar40[2] - (0xff < sVar2)) * '\x02';
    pbVar21[2] = ((0 < sVar3) * (sVar3 < 0x100) * auVar40[4] - (0xff < sVar3)) * '\x02';
    pbVar21[3] = ((0 < sVar4) * (sVar4 < 0x100) * auVar40[6] - (0xff < sVar4)) * '\x02';
    pbVar21[4] = ((0 < sVar5) * (sVar5 < 0x100) * auVar40[8] - (0xff < sVar5)) * '\x02';
    pbVar21[5] = ((0 < sVar6) * (sVar6 < 0x100) * auVar40[10] - (0xff < sVar6)) * '\x02';
    pbVar21[6] = ((0 < sVar7) * (sVar7 < 0x100) * auVar40[0xc] - (0xff < sVar7)) * '\x02';
    pbVar21[7] = ((0 < sVar8) * (sVar8 < 0x100) * auVar40[0xe] - (0xff < sVar8)) * '\x02';
    pbVar21[8] = ((0 < sVar9) * (sVar9 < 0x100) * auVar54[0] - (0xff < sVar9)) * '\x02';
    pbVar21[9] = ((0 < sVar10) * (sVar10 < 0x100) * auVar54[2] - (0xff < sVar10)) * '\x02';
    pbVar21[10] = ((0 < sVar11) * (sVar11 < 0x100) * auVar54[4] - (0xff < sVar11)) * '\x02';
    pbVar21[0xb] = ((0 < sVar12) * (sVar12 < 0x100) * auVar54[6] - (0xff < sVar12)) * '\x02';
    pbVar21[0xc] = ((0 < sVar13) * (sVar13 < 0x100) * auVar54[8] - (0xff < sVar13)) * '\x02';
    pbVar21[0xd] = ((0 < sVar14) * (sVar14 < 0x100) * auVar54[10] - (0xff < sVar14)) * '\x02';
    pbVar21[0xe] = ((0 < sVar15) * (sVar15 < 0x100) * auVar54[0xc] - (0xff < sVar15)) * '\x02';
    pbVar21[0xf] = ((0 < sVar16) * (sVar16 < 0x100) * auVar54[0xe] - (0xff < sVar16)) * '\x02';
    pbVar21 = pbVar22;
    auVar43 = auVar63;
  } while (pbVar22 != local_448 + 0x400);
  iVar41 = test_true("test/packettest.c",0x198,"PACKET_buf_init(&pkt, buf1, 1024)",1);
  if (iVar41 != 0) {
    iVar41 = test_true("test/packettest.c",0x199,"PACKET_buf_init(&short_pkt, buf1, len)",1);
    if (iVar41 != 0) {
      uVar23 = (ulong)local_448[0] << 0x10 | (ulong)local_448[1] << 8 | (ulong)local_448[2];
      if (0x3fd < uVar23) {
        puVar26 = (ushort *)0x0;
        uVar27 = 0;
      }
      else {
        puVar26 = (ushort *)(local_448 + 3);
        auVar66._8_8_ = uVar23;
        auVar66._0_8_ = puVar26;
        uVar27 = uVar23;
      }
      iVar41 = test_true("test/packettest.c",0x19a,"PACKET_get_length_prefixed_3(&pkt, &subpkt)",
                         0x3fd >= uVar23);
      if (iVar41 != 0) {
        iVar41 = test_size_t_eq("test/packettest.c",0x19b,"PACKET_remaining(&subpkt)",&_LC51,uVar27,
                                0x204,auVar66);
        if (iVar41 != 0) {
          if (uVar27 < 2) {
            uVar24 = 0x400;
          }
          else {
            auVar66._8_8_ = uVar27 - 2;
            auVar66._0_8_ = puVar26 + 1;
            uVar24 = *puVar26 << 8 | *puVar26 >> 8;
          }
          iVar41 = test_true("test/packettest.c",0x19c,"PACKET_get_net_2(&subpkt, &i)",uVar27 >= 2);
          if (iVar41 != 0) {
            iVar41 = test_uint_eq("test/packettest.c",0x19d,&_LC16,"0x0608",uVar24,0x608);
            if (iVar41 != 0) {
              if (0x201 < uVar23) {
                lVar25 = 0x204;
              }
              else {
                auVar66._8_8_ = uVar23;
                auVar66._0_8_ = local_448 + 3;
                lVar25 = 0x201 - uVar23;
              }
              iVar41 = test_false("test/packettest.c",0x19e,
                                  "PACKET_get_length_prefixed_3(&short_pkt, &subpkt)",
                                  0x201 >= uVar23);
              if (iVar41 != 0) {
                iVar41 = test_size_t_eq("test/packettest.c",0x19f,"PACKET_remaining(&short_pkt)",
                                        &_LC51,lVar25,0x204,auVar66);
                bVar28 = iVar41 != 0;
                goto LAB_001023ed;
              }
            }
          }
        }
      }
    }
  }
  bVar28 = false;
LAB_001023ed:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar28;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool test_PACKET_get_4(void)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = test_true("test/packettest.c",0x46,"PACKET_buf_init(&pkt, smbuf, BUF_LEN)",1);
  uVar1 = smbuf;
  if ((((iVar2 != 0) &&
       (iVar2 = test_true("test/packettest.c",0x47,"PACKET_get_4(&pkt, &i)",1), iVar2 != 0)) &&
      (iVar2 = test_ulong_eq("test/packettest.c",0x48,&_LC16,"0x08060402UL",uVar1,0x8060402),
      iVar2 != 0)) &&
     (((iVar2 = test_true("test/packettest.c",0x49,"PACKET_forward(&pkt, BUF_LEN - 8)",1),
       uVar1 = DAT_00102f1b, iVar2 != 0 &&
       (iVar2 = test_true("test/packettest.c",0x4a,"PACKET_get_4(&pkt, &i)",1), iVar2 != 0)) &&
      (iVar2 = test_ulong_eq("test/packettest.c",0x4b,&_LC16,"0xfefcfaf8UL",uVar1,0xfefcfaf8),
      iVar2 != 0)))) {
    iVar2 = test_false("test/packettest.c",0x4c,"PACKET_get_4(&pkt, &i)",0);
    return iVar2 != 0;
  }
  return false;
}



bool test_PACKET_get_net_3(void)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  
  iVar2 = test_true("test/packettest.c",0x68,"PACKET_buf_init(&pkt, smbuf, BUF_LEN)",1);
  bVar1 = smbuf._2_1_;
  if (iVar2 != 0) {
    uVar3 = (ulong)(byte)smbuf;
    uVar4 = (ulong)smbuf._1_1_;
    iVar2 = test_true("test/packettest.c",0x69,"PACKET_get_net_3(&pkt, &i)",1);
    if (((iVar2 != 0) &&
        (iVar2 = test_ulong_eq("test/packettest.c",0x6a,&_LC16,"0x020406UL",
                               (ulong)bVar1 | uVar3 << 0x10 | uVar4 << 8,0x20406), iVar2 != 0)) &&
       (iVar2 = test_true("test/packettest.c",0x6b,"PACKET_forward(&pkt, BUF_LEN - 6)",1),
       bVar1 = DAT_00102f1b._3_1_, iVar2 != 0)) {
      uVar3 = (ulong)DAT_00102f1b._1_1_;
      uVar4 = (ulong)DAT_00102f1b._2_1_;
      iVar2 = test_true("test/packettest.c",0x6c,"PACKET_get_net_3(&pkt, &i)",1);
      if ((iVar2 != 0) &&
         (iVar2 = test_ulong_eq("test/packettest.c",0x6d,&_LC16,"0xfafcfeUL",
                                (ulong)bVar1 | uVar3 << 0x10 | uVar4 << 8,0xfafcfe), iVar2 != 0)) {
        iVar2 = test_false("test/packettest.c",0x6e,"PACKET_get_net_3(&pkt, &i)",0);
        return iVar2 != 0;
      }
    }
  }
  return false;
}



bool test_PACKET_get_sub_packet(void)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = test_true("test/packettest.c",0x8a,"PACKET_buf_init(&pkt, smbuf, BUF_LEN)",1);
  if ((((((iVar2 != 0) &&
         (iVar2 = test_true("test/packettest.c",0x8b,"PACKET_get_sub_packet(&pkt, &subpkt, 4)",1),
         uVar1 = smbuf, iVar2 != 0)) &&
        (iVar2 = test_true("test/packettest.c",0x8c,"PACKET_get_net_4(&subpkt, &i)",1), iVar2 != 0))
       && ((iVar2 = test_ulong_eq("test/packettest.c",0x8d,&_LC16,"0x02040608UL",
                                  uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 |
                                  uVar1 << 0x18,0x2040608), iVar2 != 0 &&
           (iVar2 = test_size_t_eq("test/packettest.c",0x8e,"PACKET_remaining(&subpkt)",&_LC9,0,0),
           iVar2 != 0)))) &&
      ((iVar2 = test_true("test/packettest.c",0x8f,"PACKET_forward(&pkt, BUF_LEN - 8)",1),
       iVar2 != 0 &&
       ((iVar2 = test_true("test/packettest.c",0x90,"PACKET_get_sub_packet(&pkt, &subpkt, 4)",1),
        uVar1 = DAT_00102f1b, iVar2 != 0 &&
        (iVar2 = test_true("test/packettest.c",0x91,"PACKET_get_net_4(&subpkt, &i)",1), iVar2 != 0))
       )))) && ((iVar2 = test_ulong_eq("test/packettest.c",0x92,&_LC16,"0xf8fafcfeUL",
                                       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 |
                                       (uVar1 & 0xff00) << 8 | uVar1 << 0x18,0xf8fafcfe), iVar2 != 0
                && (iVar2 = test_size_t_eq("test/packettest.c",0x93,"PACKET_remaining(&subpkt)",
                                           &_LC9,0,0), iVar2 != 0)))) {
    iVar2 = test_false("test/packettest.c",0x94,"PACKET_get_sub_packet(&pkt, &subpkt, 4)",0);
    return iVar2 != 0;
  }
  return false;
}



bool test_PACKET_get_net_4(void)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = test_true("test/packettest.c",0x79,"PACKET_buf_init(&pkt, smbuf, BUF_LEN)",1);
  uVar1 = smbuf;
  if ((((iVar2 != 0) &&
       (iVar2 = test_true("test/packettest.c",0x7a,"PACKET_get_net_4(&pkt, &i)",1), iVar2 != 0)) &&
      (iVar2 = test_ulong_eq("test/packettest.c",0x7b,&_LC16,"0x02040608UL",
                             uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 |
                             uVar1 << 0x18,0x2040608), iVar2 != 0)) &&
     (((iVar2 = test_true("test/packettest.c",0x7c,"PACKET_forward(&pkt, BUF_LEN - 8)",1),
       uVar1 = DAT_00102f1b, iVar2 != 0 &&
       (iVar2 = test_true("test/packettest.c",0x7d,"PACKET_get_net_4(&pkt, &i)",1), iVar2 != 0)) &&
      (iVar2 = test_ulong_eq("test/packettest.c",0x7e,&_LC16,"0xf8fafcfeUL",
                             uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 |
                             uVar1 << 0x18,0xf8fafcfe), iVar2 != 0)))) {
    iVar2 = test_false("test/packettest.c",0x7f,"PACKET_get_net_4(&pkt, &i)",0);
    return iVar2 != 0;
  }
  return false;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 setup_tests(void)

{
  _DAT_00102f18 = 0xf8f6f4f2;
  _DAT_00102f10 = _LC62;
  DAT_00102f1b._1_2_ = 0xfcfa;
  _smbuf = __LC54;
  uRam0000000000102e28 = _UNK_00104188;
  _DAT_00102e30 = __LC55;
  uRam0000000000102e38 = _UNK_00104198;
  _DAT_00102e40 = __LC56;
  uRam0000000000102e48 = _UNK_001041a8;
  _DAT_00102e50 = __LC57;
  uRam0000000000102e58 = _UNK_001041b8;
  _DAT_00102e60 = __LC58;
  uRam0000000000102e68 = _UNK_001041c8;
  _DAT_00102e70 = __LC59;
  uRam0000000000102e78 = _UNK_001041d8;
  _DAT_00102e80 = __LC60;
  uRam0000000000102e88 = _UNK_001041e8;
  _DAT_00102e90 = _LC62;
  uRam0000000000102e98 = _UNK_001041f8;
  _DAT_00102ea0 = __LC54;
  uRam0000000000102ea8 = _UNK_00104188;
  _DAT_00102eb0 = __LC55;
  uRam0000000000102eb8 = _UNK_00104198;
  _DAT_00102ec0 = __LC56;
  uRam0000000000102ec8 = _UNK_001041a8;
  _DAT_00102ed0 = __LC57;
  uRam0000000000102ed8 = _UNK_001041b8;
  _DAT_00102ee0 = __LC58;
  uRam0000000000102ee8 = _UNK_001041c8;
  _DAT_00102ef0 = __LC59;
  uRam0000000000102ef8 = _UNK_001041d8;
  _DAT_00102f00 = __LC60;
  uRam0000000000102f08 = _UNK_001041e8;
  DAT_00102f1b._3_1_ = 0xfe;
  add_test("test_PACKET_buf_init",test_PACKET_buf_init);
  add_test("test_PACKET_null_init",test_PACKET_null_init);
  add_test("test_PACKET_remaining",test_PACKET_remaining);
  add_test("test_PACKET_end",0x100000);
  add_test("test_PACKET_equal",test_PACKET_equal);
  add_test("test_PACKET_get_1",test_PACKET_get_1);
  add_test("test_PACKET_get_4",test_PACKET_get_4);
  add_test("test_PACKET_get_net_2",test_PACKET_get_net_2);
  add_test("test_PACKET_get_net_3",test_PACKET_get_net_3);
  add_test("test_PACKET_get_net_4",test_PACKET_get_net_4);
  add_test("test_PACKET_get_sub_packet",test_PACKET_get_sub_packet);
  add_test("test_PACKET_get_bytes",test_PACKET_get_bytes);
  add_test("test_PACKET_copy_bytes",test_PACKET_copy_bytes);
  add_test("test_PACKET_copy_all",test_PACKET_copy_all);
  add_test("test_PACKET_memdup",test_PACKET_memdup);
  add_test("test_PACKET_strndup",test_PACKET_strndup);
  add_test("test_PACKET_contains_zero_byte",test_PACKET_contains_zero_byte);
  add_test("test_PACKET_forward",test_PACKET_forward);
  add_test("test_PACKET_get_length_prefixed_1",test_PACKET_get_length_prefixed_1);
  add_test("test_PACKET_get_length_prefixed_2",test_PACKET_get_length_prefixed_2);
  add_test("test_PACKET_get_length_prefixed_3",test_PACKET_get_length_prefixed_3);
  add_test("test_PACKET_as_length_prefixed_1",test_PACKET_as_length_prefixed_1);
  add_test("test_PACKET_as_length_prefixed_2",test_PACKET_as_length_prefixed_2);
  add_test("test_PACKET_get_quic_vlint",test_PACKET_get_quic_vlint);
  add_test("test_PACKET_get_quic_length_prefixed",test_PACKET_get_quic_length_prefixed);
  return 1;
}


