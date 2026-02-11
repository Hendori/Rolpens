
undefined8 r_random_bytes(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  bool bVar2;
  
  lVar1 = param_4 + -1;
  if (param_4 != 0) {
    do {
      *(char *)(param_3 + lVar1) = (char)lVar1;
      bVar2 = lVar1 != 0;
      lVar1 = lVar1 + -1;
    } while (bVar2);
  }
  return 1;
}



bool r_init(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)malloc(8);
  if (puVar1 != (undefined8 *)0x0) {
    *param_4 = puVar1;
    *puVar1 = param_1;
    *param_3 = r_test_table;
  }
  return puVar1 != (undefined8 *)0x0;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void r_teardown(void *__ptr)

{
  free(__ptr);
  return;
}



int fips_health_test_one(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined8 local_4b8;
  undefined8 uStack_4b0;
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  undefined8 local_498;
  undefined4 local_47c;
  undefined8 local_478;
  undefined8 uStack_470;
  undefined8 local_468;
  undefined8 uStack_460;
  undefined8 local_458;
  undefined8 local_450;
  undefined8 uStack_448;
  undefined8 local_440;
  undefined8 uStack_438;
  undefined8 local_430;
  undefined1 local_428 [1000];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_47c = 0xffffffff;
  OSSL_PARAM_construct_octet_string(&local_4b8,"test_entropy",param_1,param_2);
  local_458 = local_498;
  local_478 = local_4b8;
  uStack_470 = uStack_4b0;
  local_468 = local_4a8;
  uStack_460 = uStack_4a0;
  OSSL_PARAM_construct_end(&local_4b8);
  local_450 = local_4b8;
  uStack_448 = uStack_4b0;
  local_430 = local_498;
  local_440 = local_4a8;
  uStack_438 = uStack_4a0;
  uVar2 = EVP_RAND_fetch(0,"TEST-RAND","-fips");
  iVar1 = test_ptr("test/rand_test.c",0x6f,
                   "parent_alg = EVP_RAND_fetch(NULL, \"TEST-RAND\", \"-fips\")",uVar2);
  if (iVar1 == 0) {
    iVar1 = 0;
    uVar4 = 0;
    uVar5 = 0;
    uVar3 = 0;
  }
  else {
    uVar3 = EVP_RAND_fetch(0,"CRNG-TEST","-fips");
    iVar1 = test_ptr("test/rand_test.c",0x70,
                     "crngt_alg = EVP_RAND_fetch(NULL, \"CRNG-TEST\", \"-fips\")",uVar3);
    if (iVar1 == 0) {
      uVar4 = 0;
      uVar5 = 0;
      iVar1 = 0;
    }
    else {
      uVar4 = EVP_RAND_CTX_new(uVar2,0);
      iVar1 = test_ptr("test/rand_test.c",0x71,"parent = EVP_RAND_CTX_new(parent_alg, NULL)",uVar4);
      uVar5 = 0;
      if (iVar1 != 0) {
        uVar5 = EVP_RAND_CTX_new(uVar3,uVar4);
        iVar1 = test_ptr("test/rand_test.c",0x72,"crngt = EVP_RAND_CTX_new(crngt_alg, parent)",uVar5
                        );
        if (iVar1 != 0) {
          iVar1 = EVP_RAND_instantiate(uVar4,0,0,&_LC9,3,&local_478);
          iVar1 = test_true("test/rand_test.c",0x73,
                            "EVP_RAND_instantiate(parent, 0, 0, (unsigned char *)\"abc\", 3, p)",
                            iVar1 != 0);
          if (iVar1 == 0) goto LAB_00100157;
          iVar1 = EVP_RAND_instantiate(uVar5,0,0,&_LC11,3,0);
          iVar1 = test_true("test/rand_test.c",0x75,
                            "EVP_RAND_instantiate(crngt, 0, 0, (unsigned char *)\"def\", 3, NULL)",
                            iVar1 != 0);
          if (iVar1 != 0) {
            iVar1 = test_size_t_le("test/rand_test.c",0x77,&_LC14,"sizeof(out)",param_3,1000);
            if (iVar1 != 0) {
              OSSL_PARAM_construct_int(&local_4b8,"fips-indicator",&local_47c);
              local_478 = local_4b8;
              uStack_470 = uStack_4b0;
              local_468 = local_4a8;
              uStack_460 = uStack_4a0;
              local_458 = local_498;
              iVar1 = EVP_RAND_CTX_get_params(uVar5,&local_478);
              iVar1 = test_true("test/rand_test.c",0x7d,"EVP_RAND_CTX_get_params(crngt, p)",
                                iVar1 != 0);
              if (iVar1 != 0) {
                iVar1 = test_int_le("test/rand_test.c",0x7e,"indicator",&_LC17,local_47c,0);
                if (iVar1 != 0) {
                  ERR_set_mark();
                  iVar1 = EVP_RAND_generate(uVar5,local_428,param_3,0,0,0,0);
                  ERR_pop_to_mark();
                  goto LAB_00100157;
                }
              }
            }
          }
        }
        iVar1 = 0;
      }
    }
  }
LAB_00100157:
  EVP_RAND_CTX_free(uVar5);
  EVP_RAND_CTX_free(uVar4);
  EVP_RAND_free(uVar3);
  EVP_RAND_free(uVar2);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool fips_health_tests(void)

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
  undefined1 auVar21 [12];
  undefined1 auVar22 [12];
  undefined1 auVar23 [12];
  int iVar24;
  char *pcVar25;
  char *pcVar26;
  ulong uVar27;
  char cVar28;
  long in_FS_OFFSET;
  bool bVar29;
  undefined1 auVar30 [16];
  undefined1 auVar32 [16];
  undefined1 auVar36 [16];
  undefined1 auVar39 [16];
  undefined2 uVar52;
  undefined2 uVar53;
  long lVar40;
  undefined2 uVar54;
  undefined1 auVar41 [16];
  undefined1 auVar44 [16];
  undefined1 auVar48 [16];
  undefined1 auVar51 [16];
  undefined1 auVar56 [16];
  long lVar58;
  char local_408 [992];
  undefined8 local_28;
  long local_20;
  undefined1 auVar33 [16];
  undefined1 auVar31 [16];
  undefined1 auVar34 [16];
  undefined1 auVar37 [16];
  undefined1 auVar35 [16];
  undefined1 auVar38 [16];
  undefined1 auVar42 [16];
  undefined1 auVar45 [16];
  undefined1 auVar43 [16];
  undefined1 auVar46 [16];
  undefined1 auVar49 [16];
  undefined1 auVar47 [16];
  undefined1 auVar50 [16];
  long lVar55;
  long lVar57;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar25 = local_408;
  auVar41 = __LC19;
  do {
    pcVar26 = pcVar25 + 0x10;
    lVar55 = auVar41._0_8_;
    lVar57 = auVar41._8_8_;
    auVar56._0_8_ = lVar55 + __LC20;
    auVar56._8_8_ = lVar57 + _UNK_00101688;
    lVar40 = lVar55 + __LC21;
    uVar27 = CONCAT44((int)lVar40,auVar41._8_4_);
    auVar31._0_10_ = (unkuint10)uVar27 << 0x20;
    auVar22._8_2_ = auVar41._10_2_;
    auVar22._0_8_ = uVar27;
    auVar22._10_2_ = (short)((ulong)(lVar57 + _UNK_001016a8) >> 0x10);
    auVar31._12_4_ = auVar22._8_4_;
    uVar53 = (undefined2)(lVar57 + _UNK_001016a8);
    auVar31._10_2_ = uVar53;
    auVar21._4_2_ = auVar41._8_2_;
    auVar21._0_4_ = auVar41._8_4_;
    auVar21._6_6_ = auVar31._10_6_;
    uVar52 = (undefined2)((ulong)(lVar55 + __LC22) >> 0x10);
    auVar17._2_8_ = auVar21._4_8_;
    auVar17._0_2_ = uVar52;
    auVar17._10_6_ = 0;
    auVar39._0_2_ = auVar41._0_2_;
    auVar30._12_4_ = 0;
    auVar30._0_12_ = SUB1612(auVar17 << 0x30,4);
    auVar30 = auVar30 << 0x20;
    uVar54 = (undefined2)(lVar55 + __LC23);
    auVar35._0_12_ = auVar30._0_12_;
    auVar35._12_2_ = uVar52;
    auVar35._14_2_ = (short)((ulong)(lVar55 + __LC23) >> 0x10);
    auVar34._12_4_ = auVar35._12_4_;
    auVar34._0_10_ = auVar30._0_10_;
    auVar34._10_2_ = (short)((ulong)lVar40 >> 0x10);
    auVar33._10_6_ = auVar34._10_6_;
    auVar33._0_8_ = auVar30._0_8_;
    auVar33._8_2_ = auVar41._2_2_;
    auVar18._2_8_ = auVar33._8_8_;
    auVar18._0_2_ = uVar54;
    auVar18._10_6_ = 0;
    auVar32._12_4_ = 0;
    auVar32._0_12_ = SUB1612(auVar18 << 0x30,4);
    auVar32 = auVar32 << 0x20;
    auVar38._0_12_ = auVar32._0_12_;
    auVar38._12_2_ = uVar54;
    auVar38._14_2_ = (short)(lVar57 + _UNK_001016b8);
    auVar37._12_4_ = auVar38._12_4_;
    auVar37._0_10_ = auVar32._0_10_;
    auVar37._10_2_ = uVar53;
    auVar36._10_6_ = auVar37._10_6_;
    auVar36._0_8_ = auVar32._0_8_;
    auVar36._8_2_ = (short)(lVar55 + __LC22);
    auVar39._8_8_ = auVar36._8_8_;
    auVar39._6_2_ = (short)(lVar57 + _UNK_00101698);
    auVar39._4_2_ = (short)lVar40;
    auVar39._2_2_ = auVar41._8_2_;
    lVar58 = lVar55 + __LC25;
    lVar40 = lVar57 + _UNK_001016c8;
    auVar39 = auVar39 & __LC28;
    auVar42._0_8_ = lVar40 << 0x20;
    uVar27 = CONCAT44((int)lVar58,(int)lVar40);
    auVar43._0_10_ = (unkuint10)uVar27 << 0x20;
    auVar23._8_2_ = (short)((ulong)lVar40 >> 0x10);
    auVar23._0_8_ = uVar27;
    auVar23._10_2_ = (short)((ulong)(lVar57 + _UNK_001016e8) >> 0x10);
    auVar43._12_4_ = auVar23._8_4_;
    uVar53 = (undefined2)(lVar57 + _UNK_001016e8);
    auVar43._10_2_ = uVar53;
    auVar42._10_6_ = auVar43._10_6_;
    auVar42._8_2_ = (short)lVar40;
    uVar52 = (undefined2)((ulong)(lVar55 + __LC26) >> 0x10);
    auVar19._2_8_ = auVar42._8_8_;
    auVar19._0_2_ = uVar52;
    auVar19._10_6_ = 0;
    auVar51._0_2_ = (undefined2)(lVar55 + __LC24);
    auVar41._12_4_ = 0;
    auVar41._0_12_ = SUB1612(auVar19 << 0x30,4);
    auVar41 = auVar41 << 0x20;
    uVar54 = (undefined2)(lVar55 + __LC27);
    auVar47._0_12_ = auVar41._0_12_;
    auVar47._12_2_ = uVar52;
    auVar47._14_2_ = (short)((ulong)(lVar55 + __LC27) >> 0x10);
    auVar46._12_4_ = auVar47._12_4_;
    auVar46._0_10_ = auVar41._0_10_;
    auVar46._10_2_ = (short)((ulong)lVar58 >> 0x10);
    auVar45._10_6_ = auVar46._10_6_;
    auVar45._0_8_ = auVar41._0_8_;
    auVar45._8_2_ = (short)((ulong)(lVar55 + __LC24) >> 0x10);
    auVar20._2_8_ = auVar45._8_8_;
    auVar20._0_2_ = uVar54;
    auVar20._10_6_ = 0;
    auVar44._12_4_ = 0;
    auVar44._0_12_ = SUB1612(auVar20 << 0x30,4);
    auVar44 = auVar44 << 0x20;
    auVar50._0_12_ = auVar44._0_12_;
    auVar50._12_2_ = uVar54;
    auVar50._14_2_ = (short)(lVar57 + _UNK_001016f8);
    auVar49._12_4_ = auVar50._12_4_;
    auVar49._0_10_ = auVar44._0_10_;
    auVar49._10_2_ = uVar53;
    auVar48._10_6_ = auVar49._10_6_;
    auVar48._0_8_ = auVar44._0_8_;
    auVar48._8_2_ = (short)(lVar55 + __LC26);
    auVar51._8_8_ = auVar48._8_8_;
    auVar51._6_2_ = (short)(lVar57 + _UNK_001016d8);
    auVar51._4_2_ = (short)lVar58;
    auVar51._2_2_ = (short)lVar40;
    auVar51 = auVar51 & __LC28;
    sVar1 = auVar39._0_2_;
    sVar2 = auVar39._2_2_;
    sVar3 = auVar39._4_2_;
    sVar4 = auVar39._6_2_;
    sVar5 = auVar39._8_2_;
    sVar6 = auVar39._10_2_;
    sVar7 = auVar39._12_2_;
    sVar8 = auVar39._14_2_;
    sVar9 = auVar51._0_2_;
    sVar10 = auVar51._2_2_;
    sVar11 = auVar51._4_2_;
    sVar12 = auVar51._6_2_;
    sVar13 = auVar51._8_2_;
    sVar14 = auVar51._10_2_;
    sVar15 = auVar51._12_2_;
    sVar16 = auVar51._14_2_;
    *pcVar25 = (0 < sVar1) * (sVar1 < 0x100) * auVar39[0] - (0xff < sVar1);
    pcVar25[1] = (0 < sVar2) * (sVar2 < 0x100) * auVar39[2] - (0xff < sVar2);
    pcVar25[2] = (0 < sVar3) * (sVar3 < 0x100) * auVar39[4] - (0xff < sVar3);
    pcVar25[3] = (0 < sVar4) * (sVar4 < 0x100) * auVar39[6] - (0xff < sVar4);
    pcVar25[4] = (0 < sVar5) * (sVar5 < 0x100) * auVar39[8] - (0xff < sVar5);
    pcVar25[5] = (0 < sVar6) * (sVar6 < 0x100) * auVar39[10] - (0xff < sVar6);
    pcVar25[6] = (0 < sVar7) * (sVar7 < 0x100) * auVar39[0xc] - (0xff < sVar7);
    pcVar25[7] = (0 < sVar8) * (sVar8 < 0x100) * auVar39[0xe] - (0xff < sVar8);
    pcVar25[8] = (0 < sVar9) * (sVar9 < 0x100) * auVar51[0] - (0xff < sVar9);
    pcVar25[9] = (0 < sVar10) * (sVar10 < 0x100) * auVar51[2] - (0xff < sVar10);
    pcVar25[10] = (0 < sVar11) * (sVar11 < 0x100) * auVar51[4] - (0xff < sVar11);
    pcVar25[0xb] = (0 < sVar12) * (sVar12 < 0x100) * auVar51[6] - (0xff < sVar12);
    pcVar25[0xc] = (0 < sVar13) * (sVar13 < 0x100) * auVar51[8] - (0xff < sVar13);
    pcVar25[0xd] = (0 < sVar14) * (sVar14 < 0x100) * auVar51[10] - (0xff < sVar14);
    pcVar25[0xe] = (0 < sVar15) * (sVar15 < 0x100) * auVar51[0xc] - (0xff < sVar15);
    pcVar25[0xf] = (0 < sVar16) * (sVar16 < 0x100) * auVar51[0xe] - (0xff < sVar16);
    pcVar25 = pcVar26;
    auVar41 = auVar56;
  } while ((char *)&local_28 != pcVar26);
  local_28 = _LC29;
  iVar24 = fips_health_test_one(local_408,1000,1000);
  iVar24 = test_true("test/rand_test.c",0x94,"fips_health_test_one(buf, i, i)",iVar24 != 0);
  uVar27 = 0;
  if (iVar24 != 0) {
    do {
      for (; uVar27 < 0xb; uVar27 = uVar27 + 1) {
        local_408[uVar27] = (char)uVar27;
      }
      local_408[uVar27] = -0x38;
      uVar27 = uVar27 + 1;
    } while (uVar27 != 0x14);
    iVar24 = fips_health_test_one(local_408,0x14,0x14);
    iVar24 = test_false("test/rand_test.c",0x9a,"fips_health_test_one(buf, i, i)",iVar24 != 0);
    if (iVar24 != 0) {
      uVar27 = 0;
      do {
        for (; uVar27 < 0x200; uVar27 = uVar27 + 1) {
          local_408[uVar27] = (char)uVar27;
        }
        cVar28 = -0x80;
        if ((uVar27 & 7) != 0) {
          cVar28 = (char)uVar27;
        }
        local_408[uVar27] = cVar28;
        uVar27 = uVar27 + 1;
      } while (uVar27 != 1000);
      iVar24 = fips_health_test_one(local_408,1000,1000);
      iVar24 = test_false("test/rand_test.c",0xa0,"fips_health_test_one(buf, i, i)",iVar24 != 0);
      bVar29 = iVar24 != 0;
      goto LAB_0010067c;
    }
  }
  bVar29 = false;
LAB_0010067c:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar29;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 test_rand_uniform(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  long in_FS_OFFSET;
  undefined4 local_4c;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_4c = 0;
  iVar1 = test_get_libctx(&local_48,0,0,0,0);
  if (iVar1 == 0) {
    uVar4 = 0;
  }
  else {
    iVar1 = 1;
    do {
      uVar2 = ossl_rand_uniform_uint32(local_48,iVar1,&local_4c);
      iVar3 = test_int_eq("test/rand_test.c",0x4d,&_LC31,&_LC17,local_4c,0);
      if (iVar3 == 0) goto LAB_00100838;
      iVar3 = test_uint_ge("test/rand_test.c",0x4e,&_LC32,&_LC17,uVar2,0);
      if (iVar3 == 0) goto LAB_00100838;
      iVar3 = test_uint_lt("test/rand_test.c",0x4f,&_LC32,&_LC33,uVar2);
      if (iVar3 == 0) goto LAB_00100838;
      iVar1 = iVar1 + 0xd;
    } while (iVar1 != 0x69);
    iVar1 = 1;
    do {
      uVar5 = iVar1 + 1;
      do {
        uVar2 = ossl_rand_range_uint32(local_48,iVar1,uVar5,&local_4c);
        iVar3 = test_int_eq("test/rand_test.c",0x55,&_LC31,&_LC17,local_4c,0);
        if (iVar3 == 0) goto LAB_00100838;
        iVar3 = test_uint_ge("test/rand_test.c",0x56,&_LC32,&_LC33,uVar2,iVar1);
        if (iVar3 == 0) goto LAB_00100838;
        iVar3 = test_uint_lt("test/rand_test.c",0x57,&_LC32,&_LC34,uVar2);
        if (iVar3 == 0) goto LAB_00100838;
        uVar5 = uVar5 + 0xb;
      } while (uVar5 < 0x96);
      iVar1 = iVar1 + 0x11;
    } while (iVar1 != 0x67);
    uVar4 = 1;
  }
  OSSL_LIB_CTX_free(local_48);
LAB_0010083a:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00100838:
  uVar4 = 0;
  goto LAB_0010083a;
}



bool test_rand(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  char *__s1;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long in_FS_OFFSET;
  bool bVar8;
  byte bVar9;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined2 local_4c;
  undefined1 local_4a;
  undefined1 local_49 [3];
  undefined4 local_46;
  undefined2 local_42;
  long local_40;
  
  bVar9 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_42 = 0x504;
  local_4c = 0xfeff;
  local_ac = 1;
  local_46 = 0x3020100;
  local_4a = 0xfd;
  OSSL_PARAM_construct_octet_string(&local_e8,"test_entropy",&local_46,6);
  local_88 = local_c8;
  local_a8 = local_e8;
  uStack_a0 = uStack_e0;
  local_98 = local_d8;
  uStack_90 = uStack_d0;
  OSSL_PARAM_construct_end(&local_e8);
  local_80 = local_e8;
  uStack_78 = uStack_e0;
  local_60 = local_c8;
  local_70 = local_d8;
  uStack_68 = uStack_d0;
  uVar3 = RAND_get0_private(0);
  iVar1 = test_ptr("test/rand_test.c",0x20,"privctx = RAND_get0_private(NULL)",uVar3);
  if (iVar1 != 0) {
    iVar1 = EVP_RAND_CTX_set_params(uVar3,&local_a8);
    iVar1 = test_true("test/rand_test.c",0x21,"EVP_RAND_CTX_set_params(privctx, params)",iVar1 != 0)
    ;
    if (iVar1 != 0) {
      uVar2 = RAND_priv_bytes(local_49,3);
      iVar1 = test_int_gt("test/rand_test.c",0x22,"RAND_priv_bytes(outbuf, sizeof(outbuf))",&_LC17,
                          uVar2,0);
      if (iVar1 != 0) {
        iVar1 = test_mem_eq("test/rand_test.c",0x23,"outbuf","entropy1",local_49,3);
        if (iVar1 != 0) {
          uVar2 = RAND_priv_bytes(local_49,4);
          iVar1 = test_int_le("test/rand_test.c",0x24,"RAND_priv_bytes(outbuf, sizeof(outbuf) + 1)",
                              &_LC17,uVar2,0);
          if (iVar1 != 0) {
            uVar2 = RAND_priv_bytes(local_49,3);
            iVar1 = test_int_gt("test/rand_test.c",0x25,"RAND_priv_bytes(outbuf, sizeof(outbuf))",
                                &_LC17,uVar2,0);
            if (iVar1 != 0) {
              iVar1 = test_mem_eq("test/rand_test.c",0x26,"outbuf","entropy1 + sizeof(outbuf)",
                                  local_49,3,(long)&local_46 + 3,3);
              if (iVar1 != 0) {
                OSSL_PARAM_construct_octet_string(&local_e8,"test_entropy",&local_4c,3);
                local_88 = local_c8;
                local_a8 = local_e8;
                uStack_a0 = uStack_e0;
                local_98 = local_d8;
                uStack_90 = uStack_d0;
                iVar1 = EVP_RAND_CTX_set_params(uVar3,&local_a8);
                iVar1 = test_true("test/rand_test.c",0x2c,"EVP_RAND_CTX_set_params(privctx, params)"
                                  ,iVar1 != 0);
                if (iVar1 != 0) {
                  uVar2 = RAND_priv_bytes(local_49,3);
                  iVar1 = test_int_gt("test/rand_test.c",0x2d,
                                      "RAND_priv_bytes(outbuf, sizeof(outbuf))",&_LC17,uVar2,0);
                  if (iVar1 != 0) {
                    iVar1 = test_mem_eq("test/rand_test.c",0x2e,"outbuf","entropy2",local_49,3,
                                        &local_4c,3);
                    if (iVar1 != 0) {
                      iVar1 = fips_provider_version_lt(0,3,4,0);
                      if (iVar1 == 0) {
                        uVar4 = EVP_RAND_CTX_get0_rand(uVar3);
                        lVar5 = EVP_RAND_get0_provider(uVar4);
                        if (lVar5 != 0) {
                          __s1 = (char *)OSSL_PROVIDER_get0_name(lVar5);
                          iVar1 = strcmp(__s1,"fips");
                          if (iVar1 == 0) {
                            OSSL_PARAM_construct_int(&local_e8,"fips-indicator",&local_ac);
                            puVar6 = &local_e8;
                            puVar7 = &local_a8;
                            for (lVar5 = 10; lVar5 != 0; lVar5 = lVar5 + -1) {
                              *(undefined4 *)puVar7 = *(undefined4 *)puVar6;
                              puVar6 = (undefined8 *)((long)puVar6 + (ulong)bVar9 * -8 + 4);
                              puVar7 = (undefined8 *)((long)puVar7 + (ulong)bVar9 * -8 + 4);
                            }
                            iVar1 = EVP_RAND_CTX_get_params(uVar3,&local_a8);
                            iVar1 = test_true("test/rand_test.c",0x3b,
                                              "EVP_RAND_CTX_get_params(privctx, params)",iVar1 != 0)
                            ;
                            if (iVar1 != 0) {
                              iVar1 = test_int_eq("test/rand_test.c",0x3c,"indicator",&_LC17,
                                                  local_ac,0);
                              bVar8 = iVar1 != 0;
                              goto LAB_00100994;
                            }
                            goto LAB_00100992;
                          }
                        }
                      }
                      bVar8 = true;
                      goto LAB_00100994;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_00100992:
  bVar8 = false;
LAB_00100994:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool test_rand_random_provider(void)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  bool bVar3;
  undefined8 local_60;
  undefined7 local_56;
  undefined4 uStack_4f;
  undefined7 local_4b;
  undefined4 uStack_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_56 = 0xffffffffffffff;
  local_4b = 0xffffffffffffff;
  local_60 = 0;
  uStack_4f = 0xffffffff;
  uStack_44 = 0xffffffff;
  iVar1 = test_get_libctx(&local_60,0,0,0,0);
  if (iVar1 != 0) {
    iVar1 = OSSL_PROVIDER_add_builtin(local_60,"r_prov",r_init);
    iVar1 = test_true("test/rand_test.c",0xdb,"OSSL_PROVIDER_add_builtin(ctx, \"r_prov\", &r_init)",
                      iVar1 != 0);
    if (iVar1 != 0) {
      uVar2 = OSSL_PROVIDER_try_load(local_60,"r_prov",1);
      iVar1 = test_ptr("test/rand_test.c",0xdc,"prov = OSSL_PROVIDER_try_load(ctx, \"r_prov\", 1)",
                       uVar2);
      if (iVar1 != 0) {
        iVar1 = RAND_set1_random_provider(local_60,uVar2);
        iVar1 = test_true("test/rand_test.c",0xdd,"RAND_set1_random_provider(ctx, prov)",iVar1 != 0)
        ;
        if (iVar1 != 0) {
          iVar1 = RAND_bytes_ex(local_60,&local_56,0xb,0x100);
          if (iVar1 != 0) {
            iVar1 = test_mem_eq("test/rand_test.c",0xdf,&_LC50,&_LC49,&local_56,0xb,data_0,0xb);
            if (iVar1 != 0) {
              iVar1 = RAND_priv_bytes_ex(local_60,&local_4b,0xb,0x100);
              if (iVar1 != 0) {
                iVar1 = test_mem_eq("test/rand_test.c",0xe1,"privbuf",&_LC49,&local_4b,0xb);
                if (iVar1 != 0) {
                  iVar1 = RAND_set1_random_provider(local_60,0);
                  iVar1 = test_true("test/rand_test.c",0xe5,"RAND_set1_random_provider(ctx, NULL)",
                                    iVar1 != 0);
                  if (iVar1 != 0) {
                    iVar1 = RAND_bytes_ex(local_60,&local_56,0xb,0x100);
                    if (iVar1 != 0) {
                      iVar1 = test_mem_ne("test/rand_test.c",0xe7,&_LC50,&_LC49,&local_56,0xb,data_0
                                          ,0xb);
                      if (iVar1 != 0) {
                        iVar1 = RAND_set1_random_provider(local_60,uVar2);
                        iVar1 = test_true("test/rand_test.c",0xeb,
                                          "RAND_set1_random_provider(ctx, prov)",iVar1 != 0);
                        if (iVar1 != 0) {
                          iVar1 = RAND_bytes_ex(local_60,&local_56,0xb,0x100);
                          if (iVar1 != 0) {
                            iVar1 = test_mem_eq("test/rand_test.c",0xed,&_LC50,&_LC49,&local_56,0xb,
                                                data_0,0xb);
                            bVar3 = iVar1 != 0;
                            goto LAB_00100d29;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      bVar3 = false;
      goto LAB_00100d29;
    }
  }
  bVar3 = false;
  uVar2 = 0;
LAB_00100d29:
  OSSL_PROVIDER_unload(uVar2);
  OSSL_LIB_CTX_free(local_60);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 setup_tests(void)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = test_get_argument(0);
  iVar1 = test_ptr("test/rand_test.c",0xfb,"configfile = test_get_argument(0)",uVar2);
  if (iVar1 != 0) {
    iVar1 = RAND_set_DRBG_type(0,"TEST-RAND","fips=no",0,0);
    iVar1 = test_true("test/rand_test.c",0xfc,
                      "RAND_set_DRBG_type(NULL, \"TEST-RAND\", \"fips=no\", NULL, NULL)",iVar1 != 0)
    ;
    if (iVar1 != 0) {
      iVar1 = fips_provider_version_ge(0,3,0,8);
      if (iVar1 != 0) {
        iVar1 = OSSL_LIB_CTX_load_config(0,uVar2);
        iVar1 = test_true("test/rand_test.c",0xff,"OSSL_LIB_CTX_load_config(NULL, configfile)",
                          iVar1 != 0);
        if (iVar1 == 0) {
          return 0;
        }
      }
      add_test("test_rand",test_rand);
      add_test("test_rand_uniform",test_rand_uniform);
      iVar1 = OSSL_PROVIDER_available(0,&_LC43);
      if ((iVar1 != 0) && (iVar1 = fips_provider_version_ge(0,3,4,0), iVar1 != 0)) {
        add_test("fips_health_tests",fips_health_tests);
      }
      add_test("test_rand_random_provider",test_rand_random_provider);
      return 1;
    }
  }
  return 0;
}


