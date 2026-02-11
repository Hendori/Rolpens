
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int test_sec_mem_clear(void)

{
  char *pcVar1;
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
  short sVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  int iVar33;
  int iVar34;
  char *pcVar35;
  char *pcVar36;
  undefined1 auVar37 [16];
  undefined1 auVar41 [16];
  undefined1 auVar45 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [12];
  undefined1 auVar50 [16];
  undefined1 auVar54 [16];
  undefined1 auVar58 [16];
  undefined1 auVar61 [16];
  int iVar63;
  undefined2 uVar64;
  undefined2 uVar65;
  int iVar66;
  undefined2 uVar67;
  int iVar68;
  undefined1 auVar70 [16];
  char *local_40;
  undefined1 auVar38 [16];
  undefined1 auVar42 [16];
  undefined1 auVar39 [16];
  undefined1 auVar43 [16];
  undefined1 auVar46 [16];
  undefined1 auVar40 [16];
  undefined1 auVar44 [16];
  undefined1 auVar47 [16];
  undefined1 auVar51 [16];
  undefined1 auVar55 [16];
  undefined1 auVar52 [16];
  undefined1 auVar56 [16];
  undefined1 auVar59 [16];
  undefined1 auVar53 [16];
  undefined1 auVar57 [16];
  undefined1 auVar60 [16];
  int iVar62;
  int iVar69;
  int iVar71;
  int iVar72;
  
  iVar33 = CRYPTO_secure_malloc_init(0x1000,0x20);
  pcVar35 = (char *)0x0;
  iVar33 = test_true("test/secmemtest.c",0x8f,"CRYPTO_secure_malloc_init(4096, 32)",iVar33 != 0);
  if (iVar33 != 0) {
    pcVar35 = (char *)CRYPTO_secure_malloc(0x40,"test/secmemtest.c",0x90);
    iVar33 = test_ptr("test/secmemtest.c",0x90,"p = OPENSSL_secure_malloc(size)",pcVar35);
    if (iVar33 == 0) {
LAB_001000ef:
      iVar33 = 0;
    }
    else {
      pcVar1 = pcVar35 + 0x40;
      pcVar36 = pcVar35;
      do {
        iVar34 = test_uchar_eq("test/secmemtest.c",0x94,&_LC5,&_LC4,*pcVar36,0);
        auVar32 = __LC11;
        auVar31 = __LC10;
        auVar30 = __LC9;
        auVar29 = __LC8;
        iVar28 = _UNK_00100a9c;
        iVar27 = _UNK_00100a98;
        iVar26 = _UNK_00100a94;
        iVar25 = __LC7;
        iVar24 = _UNK_00100a8c;
        iVar23 = _UNK_00100a88;
        iVar22 = _UNK_00100a84;
        iVar33 = __LC6;
        if (iVar34 == 0) goto LAB_001000ef;
        pcVar36 = pcVar36 + 1;
        auVar50 = __LC0;
        local_40 = pcVar35;
      } while (pcVar36 != pcVar1);
      do {
        iVar69 = auVar50._0_4_;
        auVar70._0_4_ = iVar69 + iVar33;
        iVar62 = auVar50._4_4_;
        auVar70._4_4_ = iVar62 + iVar22;
        iVar71 = auVar50._8_4_;
        iVar72 = auVar50._12_4_;
        auVar70._8_4_ = iVar71 + iVar23;
        auVar70._12_4_ = iVar72 + iVar24;
        pcVar36 = local_40 + 0x10;
        auVar40._0_12_ = auVar50._0_12_;
        auVar40._12_2_ = auVar50._6_2_;
        auVar40._14_2_ = (short)((uint)(iVar62 + iVar26) >> 0x10);
        auVar39._12_4_ = auVar40._12_4_;
        auVar39._0_10_ = auVar50._0_10_;
        uVar65 = (undefined2)(iVar62 + iVar26);
        auVar39._10_2_ = uVar65;
        auVar38._10_6_ = auVar39._10_6_;
        auVar38._0_8_ = auVar50._0_8_;
        auVar38._8_2_ = auVar50._4_2_;
        uVar64 = (undefined2)((uint)(iVar69 + iVar25) >> 0x10);
        auVar18._2_8_ = auVar38._8_8_;
        auVar18._0_2_ = uVar64;
        auVar18._10_6_ = 0;
        auVar48._0_2_ = auVar50._0_2_;
        auVar37._12_4_ = 0;
        auVar37._0_12_ = SUB1612(auVar18 << 0x30,4);
        auVar37 = auVar37 << 0x20;
        uVar67 = (undefined2)(iVar71 + iVar27);
        auVar44._0_12_ = auVar37._0_12_;
        auVar44._12_2_ = uVar64;
        auVar44._14_2_ = (short)((uint)(iVar71 + iVar27) >> 0x10);
        auVar43._12_4_ = auVar44._12_4_;
        auVar43._0_10_ = auVar37._0_10_;
        auVar43._10_2_ = auVar50._10_2_;
        auVar42._10_6_ = auVar43._10_6_;
        auVar42._0_8_ = auVar37._0_8_;
        auVar42._8_2_ = auVar50._2_2_;
        auVar19._2_8_ = auVar42._8_8_;
        auVar19._0_2_ = uVar67;
        auVar19._10_6_ = 0;
        auVar41._12_4_ = 0;
        auVar41._0_12_ = SUB1612(auVar19 << 0x30,4);
        auVar41 = auVar41 << 0x20;
        iVar63 = iVar69 + auVar30._0_4_;
        iVar66 = iVar62 + auVar30._4_4_;
        iVar68 = iVar71 + auVar30._8_4_;
        iVar34 = iVar69 + auVar29._0_4_;
        iVar62 = iVar62 + auVar29._4_4_;
        auVar49._0_8_ = CONCAT44(iVar62,iVar34);
        auVar49._8_4_ = iVar71 + auVar29._8_4_;
        auVar47._0_12_ = auVar41._0_12_;
        auVar47._12_2_ = uVar67;
        auVar47._14_2_ = (short)(iVar72 + iVar28);
        auVar46._12_4_ = auVar47._12_4_;
        auVar46._0_10_ = auVar41._0_10_;
        auVar46._10_2_ = uVar65;
        auVar45._10_6_ = auVar46._10_6_;
        auVar45._0_8_ = auVar41._0_8_;
        auVar45._8_2_ = (short)(iVar69 + iVar25);
        auVar48._8_8_ = auVar45._8_8_;
        auVar48._6_2_ = auVar50._12_2_;
        auVar48._4_2_ = auVar50._8_2_;
        auVar48._2_2_ = auVar50._4_2_;
        auVar53._12_2_ = (short)((uint)iVar62 >> 0x10);
        auVar53._0_12_ = auVar49;
        auVar53._14_2_ = (short)((uint)iVar66 >> 0x10);
        auVar52._12_4_ = auVar53._12_4_;
        auVar52._0_10_ = auVar49._0_10_;
        uVar65 = (undefined2)iVar66;
        auVar52._10_2_ = uVar65;
        auVar51._10_6_ = auVar52._10_6_;
        auVar51._8_2_ = (short)iVar62;
        auVar51._0_8_ = auVar49._0_8_;
        uVar64 = (undefined2)((uint)iVar63 >> 0x10);
        auVar20._2_8_ = auVar51._8_8_;
        auVar20._0_2_ = uVar64;
        auVar20._10_6_ = 0;
        auVar61._0_2_ = (undefined2)iVar34;
        auVar50._12_4_ = 0;
        auVar50._0_12_ = SUB1612(auVar20 << 0x30,4);
        auVar50 = auVar50 << 0x20;
        auVar48 = auVar48 & auVar31;
        uVar67 = (undefined2)iVar68;
        auVar57._0_12_ = auVar50._0_12_;
        auVar57._12_2_ = uVar64;
        auVar57._14_2_ = (short)((uint)iVar68 >> 0x10);
        auVar56._12_4_ = auVar57._12_4_;
        auVar56._0_10_ = auVar50._0_10_;
        auVar56._10_2_ = (short)((uint)auVar49._8_4_ >> 0x10);
        auVar55._10_6_ = auVar56._10_6_;
        auVar55._0_8_ = auVar50._0_8_;
        auVar55._8_2_ = (short)((uint)iVar34 >> 0x10);
        auVar21._2_8_ = auVar55._8_8_;
        auVar21._0_2_ = uVar67;
        auVar21._10_6_ = 0;
        auVar54._12_4_ = 0;
        auVar54._0_12_ = SUB1612(auVar21 << 0x30,4);
        auVar54 = auVar54 << 0x20;
        auVar60._0_12_ = auVar54._0_12_;
        auVar60._12_2_ = uVar67;
        auVar60._14_2_ = (short)(iVar72 + auVar30._12_4_);
        auVar59._12_4_ = auVar60._12_4_;
        auVar59._0_10_ = auVar54._0_10_;
        auVar59._10_2_ = uVar65;
        auVar58._10_6_ = auVar59._10_6_;
        auVar58._0_8_ = auVar54._0_8_;
        auVar58._8_2_ = (short)iVar63;
        auVar61._8_8_ = auVar58._8_8_;
        auVar61._6_2_ = (short)(iVar72 + auVar29._12_4_);
        auVar61._4_2_ = (short)auVar49._8_4_;
        auVar61._2_2_ = (short)iVar62;
        auVar61 = auVar61 & auVar31;
        sVar2 = auVar48._0_2_;
        sVar3 = auVar48._2_2_;
        sVar4 = auVar48._4_2_;
        sVar5 = auVar48._6_2_;
        sVar6 = auVar48._8_2_;
        sVar7 = auVar48._10_2_;
        sVar8 = auVar48._12_2_;
        sVar9 = auVar48._14_2_;
        sVar10 = auVar61._0_2_;
        sVar11 = auVar61._2_2_;
        sVar12 = auVar61._4_2_;
        sVar13 = auVar61._6_2_;
        sVar14 = auVar61._8_2_;
        sVar15 = auVar61._10_2_;
        sVar16 = auVar61._12_2_;
        sVar17 = auVar61._14_2_;
        *local_40 = ((0 < sVar2) * (sVar2 < 0x100) * auVar48[0] - (0xff < sVar2)) + auVar32[0];
        local_40[1] = ((0 < sVar3) * (sVar3 < 0x100) * auVar48[2] - (0xff < sVar3)) + auVar32[1];
        local_40[2] = ((0 < sVar4) * (sVar4 < 0x100) * auVar48[4] - (0xff < sVar4)) + auVar32[2];
        local_40[3] = ((0 < sVar5) * (sVar5 < 0x100) * auVar48[6] - (0xff < sVar5)) + auVar32[3];
        local_40[4] = ((0 < sVar6) * (sVar6 < 0x100) * auVar48[8] - (0xff < sVar6)) + auVar32[4];
        local_40[5] = ((0 < sVar7) * (sVar7 < 0x100) * auVar48[10] - (0xff < sVar7)) + auVar32[5];
        local_40[6] = ((0 < sVar8) * (sVar8 < 0x100) * auVar48[0xc] - (0xff < sVar8)) + auVar32[6];
        local_40[7] = ((0 < sVar9) * (sVar9 < 0x100) * auVar48[0xe] - (0xff < sVar9)) + auVar32[7];
        local_40[8] = ((0 < sVar10) * (sVar10 < 0x100) * auVar61[0] - (0xff < sVar10)) + auVar32[8];
        local_40[9] = ((0 < sVar11) * (sVar11 < 0x100) * auVar61[2] - (0xff < sVar11)) + auVar32[9];
        local_40[10] = ((0 < sVar12) * (sVar12 < 0x100) * auVar61[4] - (0xff < sVar12)) +
                       auVar32[10];
        local_40[0xb] =
             ((0 < sVar13) * (sVar13 < 0x100) * auVar61[6] - (0xff < sVar13)) + auVar32[0xb];
        local_40[0xc] =
             ((0 < sVar14) * (sVar14 < 0x100) * auVar61[8] - (0xff < sVar14)) + auVar32[0xc];
        local_40[0xd] =
             ((0 < sVar15) * (sVar15 < 0x100) * auVar61[10] - (0xff < sVar15)) + auVar32[0xd];
        local_40[0xe] =
             ((0 < sVar16) * (sVar16 < 0x100) * auVar61[0xc] - (0xff < sVar16)) + auVar32[0xe];
        local_40[0xf] =
             ((0 < sVar17) * (sVar17 < 0x100) * auVar61[0xe] - (0xff < sVar17)) + auVar32[0xf];
        auVar50 = auVar70;
        local_40 = pcVar36;
      } while (pcVar36 != pcVar1);
      pcVar36 = pcVar35 + 0x10;
      CRYPTO_secure_free(pcVar35,"test/secmemtest.c",0x9a);
      do {
        iVar33 = test_uchar_eq("test/secmemtest.c",0xa4,&_LC5,&_LC4,*pcVar36,0);
        if (iVar33 == 0) {
          return 0;
        }
        pcVar36 = pcVar36 + 1;
      } while (pcVar36 != pcVar1);
      iVar33 = 1;
      pcVar35 = (char *)0x0;
    }
  }
  CRYPTO_secure_free(pcVar35,"test/secmemtest.c",0xaa);
  CRYPTO_secure_malloc_done();
  return iVar33;
}



int test_sec_mem(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  void *ptr;
  
  test_info("test/secmemtest.c",0x15,"Secure memory is implemented.");
  uVar2 = CRYPTO_secure_malloc(0x14,"test/secmemtest.c",0x17);
  iVar1 = test_ptr("test/secmemtest.c",0x19,&_LC13,uVar2);
  if (iVar1 == 0) {
    iVar1 = 0;
    uVar3 = 0;
    ptr = (void *)0x0;
    uVar4 = 0;
    goto LAB_0010028e;
  }
  iVar1 = CRYPTO_secure_allocated(uVar2);
  iVar1 = test_false("test/secmemtest.c",0x1a,"CRYPTO_secure_allocated(s)",iVar1 != 0);
  if (iVar1 == 0) {
    uVar3 = 0;
    ptr = (void *)0x0;
    uVar4 = 0;
    iVar1 = 0;
    goto LAB_0010028e;
  }
  uVar3 = CRYPTO_secure_malloc(0x14,"test/secmemtest.c",0x1c);
  iVar1 = test_ptr("test/secmemtest.c",0x1e,&_LC15,uVar3);
  if (iVar1 == 0) {
LAB_0010033a:
    ptr = (void *)0x0;
    uVar4 = 0;
  }
  else {
    iVar1 = CRYPTO_secure_malloc_init(0x1000,0x20);
    iVar1 = test_true("test/secmemtest.c",0x1f,"CRYPTO_secure_malloc_init(4096, 32)",iVar1 != 0);
    if (iVar1 == 0) {
      ptr = (void *)0x0;
      uVar4 = 0;
      iVar1 = 0;
      goto LAB_0010028e;
    }
    iVar1 = CRYPTO_secure_allocated(uVar3);
    iVar1 = test_false("test/secmemtest.c",0x20,"CRYPTO_secure_allocated(r)",iVar1 != 0);
    if (iVar1 == 0) goto LAB_0010033a;
    uVar4 = CRYPTO_secure_malloc(0x14,"test/secmemtest.c",0x22);
    iVar1 = test_ptr("test/secmemtest.c",0x23,&_LC17,uVar4);
    if (iVar1 == 0) {
LAB_001003ef:
      ptr = (void *)0x0;
      iVar1 = 0;
      goto LAB_0010028e;
    }
    iVar1 = CRYPTO_secure_allocated(uVar4);
    ptr = (void *)0x0;
    iVar1 = test_true("test/secmemtest.c",0x25,"CRYPTO_secure_allocated(p)",iVar1 != 0);
    if (iVar1 == 0) goto LAB_0010028e;
    uVar5 = CRYPTO_secure_used();
    iVar1 = test_size_t_eq("test/secmemtest.c",0x27,"CRYPTO_secure_used()",&_LC19,uVar5,0x20);
    if (iVar1 == 0) goto LAB_001003ef;
    ptr = CRYPTO_malloc(0x14,"test/secmemtest.c",0x29);
    iVar1 = test_ptr("test/secmemtest.c",0x2a,&_LC21,ptr);
    if (iVar1 == 0) goto LAB_0010028e;
    iVar1 = CRYPTO_secure_allocated(ptr);
    iVar1 = test_false("test/secmemtest.c",0x2d,"CRYPTO_secure_allocated(q)",iVar1 != 0);
    if (iVar1 == 0) goto LAB_0010028e;
    CRYPTO_secure_clear_free(uVar2,0x14,"test/secmemtest.c",0x2f);
    uVar2 = CRYPTO_secure_malloc(0x14,"test/secmemtest.c",0x30);
    iVar1 = test_ptr("test/secmemtest.c",0x31,&_LC13,uVar2);
    if (iVar1 != 0) {
      iVar1 = CRYPTO_secure_allocated(uVar2);
      iVar1 = test_true("test/secmemtest.c",0x33,"CRYPTO_secure_allocated(s)",iVar1 != 0);
      if (iVar1 == 0) goto LAB_0010028e;
      uVar5 = CRYPTO_secure_used();
      iVar1 = test_size_t_eq("test/secmemtest.c",0x35,"CRYPTO_secure_used()",&_LC23,uVar5,0x40);
      if (iVar1 != 0) {
        CRYPTO_secure_clear_free(uVar4,0x14,"test/secmemtest.c",0x37);
        uVar4 = CRYPTO_secure_used();
        iVar1 = test_size_t_eq("test/secmemtest.c",0x3a,"CRYPTO_secure_used()",&_LC19,uVar4,0x20);
        uVar4 = 0;
        if (iVar1 == 0) goto LAB_0010028e;
        CRYPTO_free(ptr);
        iVar1 = CRYPTO_secure_malloc_done();
        ptr = (void *)0x0;
        iVar1 = test_false("test/secmemtest.c",0x3f,"CRYPTO_secure_malloc_done()",iVar1 != 0);
        uVar4 = 0;
        if (iVar1 == 0) goto LAB_0010028e;
        iVar1 = CRYPTO_secure_malloc_initialized();
        iVar1 = test_true("test/secmemtest.c",0x40,"CRYPTO_secure_malloc_initialized()",iVar1 != 0);
        uVar4 = 0;
        if (iVar1 == 0) goto LAB_0010028e;
        CRYPTO_secure_free(uVar2,"test/secmemtest.c",0x42);
        uVar2 = CRYPTO_secure_used();
        iVar1 = test_size_t_eq("test/secmemtest.c",0x45,"CRYPTO_secure_used()",&_LC4,uVar2,0);
        if (iVar1 != 0) {
          iVar1 = CRYPTO_secure_malloc_done();
          iVar1 = test_true("test/secmemtest.c",0x46,"CRYPTO_secure_malloc_done()",iVar1 != 0);
          if (iVar1 != 0) {
            iVar1 = CRYPTO_secure_malloc_initialized();
            iVar1 = test_false("test/secmemtest.c",0x47,"CRYPTO_secure_malloc_initialized()",
                               iVar1 != 0);
            if (iVar1 != 0) {
              test_info("test/secmemtest.c",0x4a,
                        "Possible infinite loop: allocate more than available");
              iVar1 = CRYPTO_secure_malloc_init(0x8000,0x10);
              iVar1 = test_true("test/secmemtest.c",0x4b,"CRYPTO_secure_malloc_init(32768, 16)",
                                iVar1 != 0);
              if (iVar1 != 0) {
                uVar2 = CRYPTO_secure_malloc(0xffffffffffffffff,"test/secmemtest.c",0x4d);
                test_ptr_null("test/secmemtest.c",0x4d,"OPENSSL_secure_malloc((size_t)-1)",uVar2);
                iVar1 = CRYPTO_secure_malloc_done();
                test_true("test/secmemtest.c",0x4e,"CRYPTO_secure_malloc_done()",iVar1 != 0);
                iVar1 = CRYPTO_secure_malloc_init(0x10,0x10);
                iVar1 = test_false("test/secmemtest.c",0x54,"CRYPTO_secure_malloc_init(16, 16)",
                                   iVar1 != 0);
                if (iVar1 != 0) {
                  iVar1 = CRYPTO_secure_malloc_initialized();
                  iVar1 = test_false("test/secmemtest.c",0x55,"CRYPTO_secure_malloc_initialized()",
                                     iVar1 != 0);
                  if (iVar1 == 0) {
                    iVar1 = CRYPTO_secure_malloc_done();
                    uVar2 = 0;
                    test_true("test/secmemtest.c",0x56,"CRYPTO_secure_malloc_done()",iVar1 != 0);
                    goto LAB_0010033a;
                  }
                }
                uVar2 = 0;
                ptr = (void *)0x0;
                uVar4 = 0;
                iVar1 = 1;
                goto LAB_0010028e;
              }
            }
          }
        }
        uVar2 = 0;
        goto LAB_0010033a;
      }
    }
  }
  iVar1 = 0;
LAB_0010028e:
  CRYPTO_secure_free(uVar4,"test/secmemtest.c",0x7c);
  CRYPTO_free(ptr);
  CRYPTO_secure_free(uVar3,"test/secmemtest.c",0x7e);
  CRYPTO_secure_free(uVar2,"test/secmemtest.c",0x7f);
  return iVar1;
}



undefined8 setup_tests(void)

{
  add_test("test_sec_mem",test_sec_mem);
  add_test("test_sec_mem_clear",0x100000);
  return 1;
}


