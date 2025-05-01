
undefined8 dummy_decoder_decode(void)

{
  return 0;
}



undefined8 dummy_encoder_encode(void)

{
  return 0;
}



undefined8 dummy_store_open(void)

{
  return 0;
}



undefined8 dummy_store_load(void)

{
  return 0;
}



undefined8 dumm_store_eof(void)

{
  return 0;
}



undefined8 dummy_rand_newctx(undefined8 param_1)

{
  return param_1;
}



void dummy_rand_freectx(void)

{
  return;
}



undefined8 dummy_rand_instantiate(void)

{
  return 1;
}



undefined8 dummy_rand_uninstantiate(void)

{
  return 1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 dummy_rand_generate(undefined8 param_1,char *param_2,ulong param_3)

{
  ulong uVar1;
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
  undefined1 auVar22 [12];
  undefined1 auVar23 [12];
  undefined1 auVar24 [12];
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  undefined1 auVar41 [16];
  char *pcVar42;
  char *pcVar43;
  ulong uVar44;
  undefined1 auVar45 [16];
  undefined1 auVar47 [16];
  undefined1 auVar51 [16];
  undefined1 auVar54 [16];
  undefined2 uVar67;
  undefined2 uVar68;
  long lVar55;
  undefined2 uVar69;
  undefined1 auVar56 [16];
  undefined1 auVar59 [16];
  undefined1 auVar63 [16];
  undefined1 auVar66 [16];
  undefined1 auVar71 [16];
  long lVar73;
  undefined1 auVar48 [16];
  undefined1 auVar46 [16];
  undefined1 auVar49 [16];
  undefined1 auVar52 [16];
  undefined1 auVar50 [16];
  undefined1 auVar53 [16];
  undefined1 auVar57 [16];
  undefined1 auVar60 [16];
  undefined1 auVar58 [16];
  undefined1 auVar61 [16];
  undefined1 auVar64 [16];
  undefined1 auVar62 [16];
  undefined1 auVar65 [16];
  long lVar70;
  long lVar72;
  
  auVar41 = __LC9;
  lVar40 = _UNK_00100cf8;
  lVar39 = __LC8;
  lVar38 = _UNK_00100ce8;
  lVar37 = __LC7;
  lVar36 = _UNK_00100cd8;
  lVar35 = __LC6;
  lVar34 = _UNK_00100cc8;
  lVar33 = __LC5;
  lVar32 = _UNK_00100cb8;
  lVar31 = __LC4;
  lVar30 = _UNK_00100ca8;
  lVar29 = __LC3;
  lVar28 = _UNK_00100c98;
  lVar27 = __LC2;
  lVar26 = _UNK_00100c88;
  lVar25 = __LC1;
  if (param_3 != 0) {
    if (param_3 - 1 < 0xf) {
      uVar44 = 0;
    }
    else {
      uVar44 = param_3 & 0xfffffffffffffff0;
      pcVar42 = param_2;
      auVar56 = __LC0;
      do {
        pcVar43 = pcVar42 + 0x10;
        lVar70 = auVar56._0_8_;
        lVar72 = auVar56._8_8_;
        auVar71._0_8_ = lVar70 + lVar25;
        auVar71._8_8_ = lVar72 + lVar26;
        lVar55 = lVar70 + lVar27;
        uVar1 = CONCAT44((int)lVar55,auVar56._8_4_);
        auVar46._0_10_ = (unkuint10)uVar1 << 0x20;
        auVar23._8_2_ = auVar56._10_2_;
        auVar23._0_8_ = uVar1;
        auVar23._10_2_ = (short)((ulong)(lVar72 + lVar30) >> 0x10);
        auVar46._12_4_ = auVar23._8_4_;
        uVar68 = (undefined2)(lVar72 + lVar30);
        auVar46._10_2_ = uVar68;
        auVar22._4_2_ = auVar56._8_2_;
        auVar22._0_4_ = auVar56._8_4_;
        auVar22._6_6_ = auVar46._10_6_;
        uVar67 = (undefined2)((ulong)(lVar70 + lVar29) >> 0x10);
        auVar18._2_8_ = auVar22._4_8_;
        auVar18._0_2_ = uVar67;
        auVar18._10_6_ = 0;
        auVar54._0_2_ = auVar56._0_2_;
        auVar45._12_4_ = 0;
        auVar45._0_12_ = SUB1612(auVar18 << 0x30,4);
        auVar45 = auVar45 << 0x20;
        uVar69 = (undefined2)(lVar70 + lVar31);
        auVar50._0_12_ = auVar45._0_12_;
        auVar50._12_2_ = uVar67;
        auVar50._14_2_ = (short)((ulong)(lVar70 + lVar31) >> 0x10);
        auVar49._12_4_ = auVar50._12_4_;
        auVar49._0_10_ = auVar45._0_10_;
        auVar49._10_2_ = (short)((ulong)lVar55 >> 0x10);
        auVar48._10_6_ = auVar49._10_6_;
        auVar48._0_8_ = auVar45._0_8_;
        auVar48._8_2_ = auVar56._2_2_;
        auVar19._2_8_ = auVar48._8_8_;
        auVar19._0_2_ = uVar69;
        auVar19._10_6_ = 0;
        auVar47._12_4_ = 0;
        auVar47._0_12_ = SUB1612(auVar19 << 0x30,4);
        auVar47 = auVar47 << 0x20;
        auVar53._0_12_ = auVar47._0_12_;
        auVar53._12_2_ = uVar69;
        auVar53._14_2_ = (short)(lVar72 + lVar32);
        auVar52._12_4_ = auVar53._12_4_;
        auVar52._0_10_ = auVar47._0_10_;
        auVar52._10_2_ = uVar68;
        auVar51._10_6_ = auVar52._10_6_;
        auVar51._0_8_ = auVar47._0_8_;
        auVar51._8_2_ = (short)(lVar70 + lVar29);
        auVar54._8_8_ = auVar51._8_8_;
        auVar54._6_2_ = (short)(lVar72 + lVar28);
        auVar54._4_2_ = (short)lVar55;
        auVar54._2_2_ = auVar56._8_2_;
        lVar73 = lVar70 + lVar35;
        lVar55 = lVar72 + lVar34;
        auVar54 = auVar54 & auVar41;
        auVar57._0_8_ = lVar55 << 0x20;
        uVar1 = CONCAT44((int)lVar73,(int)lVar55);
        auVar58._0_10_ = (unkuint10)uVar1 << 0x20;
        auVar24._8_2_ = (short)((ulong)lVar55 >> 0x10);
        auVar24._0_8_ = uVar1;
        auVar24._10_2_ = (short)((ulong)(lVar72 + lVar38) >> 0x10);
        auVar58._12_4_ = auVar24._8_4_;
        uVar68 = (undefined2)(lVar72 + lVar38);
        auVar58._10_2_ = uVar68;
        auVar57._10_6_ = auVar58._10_6_;
        auVar57._8_2_ = (short)lVar55;
        uVar67 = (undefined2)((ulong)(lVar70 + lVar37) >> 0x10);
        auVar20._2_8_ = auVar57._8_8_;
        auVar20._0_2_ = uVar67;
        auVar20._10_6_ = 0;
        auVar66._0_2_ = (undefined2)(lVar70 + lVar33);
        auVar56._12_4_ = 0;
        auVar56._0_12_ = SUB1612(auVar20 << 0x30,4);
        auVar56 = auVar56 << 0x20;
        uVar69 = (undefined2)(lVar70 + lVar39);
        auVar62._0_12_ = auVar56._0_12_;
        auVar62._12_2_ = uVar67;
        auVar62._14_2_ = (short)((ulong)(lVar70 + lVar39) >> 0x10);
        auVar61._12_4_ = auVar62._12_4_;
        auVar61._0_10_ = auVar56._0_10_;
        auVar61._10_2_ = (short)((ulong)lVar73 >> 0x10);
        auVar60._10_6_ = auVar61._10_6_;
        auVar60._0_8_ = auVar56._0_8_;
        auVar60._8_2_ = (short)((ulong)(lVar70 + lVar33) >> 0x10);
        auVar21._2_8_ = auVar60._8_8_;
        auVar21._0_2_ = uVar69;
        auVar21._10_6_ = 0;
        auVar59._12_4_ = 0;
        auVar59._0_12_ = SUB1612(auVar21 << 0x30,4);
        auVar59 = auVar59 << 0x20;
        auVar65._0_12_ = auVar59._0_12_;
        auVar65._12_2_ = uVar69;
        auVar65._14_2_ = (short)(lVar72 + lVar40);
        auVar64._12_4_ = auVar65._12_4_;
        auVar64._0_10_ = auVar59._0_10_;
        auVar64._10_2_ = uVar68;
        auVar63._10_6_ = auVar64._10_6_;
        auVar63._0_8_ = auVar59._0_8_;
        auVar63._8_2_ = (short)(lVar70 + lVar37);
        auVar66._8_8_ = auVar63._8_8_;
        auVar66._6_2_ = (short)(lVar72 + lVar36);
        auVar66._4_2_ = (short)lVar73;
        auVar66._2_2_ = (short)lVar55;
        auVar66 = auVar66 & auVar41;
        sVar2 = auVar54._0_2_;
        sVar3 = auVar54._2_2_;
        sVar4 = auVar54._4_2_;
        sVar5 = auVar54._6_2_;
        sVar6 = auVar54._8_2_;
        sVar7 = auVar54._10_2_;
        sVar8 = auVar54._12_2_;
        sVar9 = auVar54._14_2_;
        sVar10 = auVar66._0_2_;
        sVar11 = auVar66._2_2_;
        sVar12 = auVar66._4_2_;
        sVar13 = auVar66._6_2_;
        sVar14 = auVar66._8_2_;
        sVar15 = auVar66._10_2_;
        sVar16 = auVar66._12_2_;
        sVar17 = auVar66._14_2_;
        *pcVar42 = (0 < sVar2) * (sVar2 < 0x100) * auVar54[0] - (0xff < sVar2);
        pcVar42[1] = (0 < sVar3) * (sVar3 < 0x100) * auVar54[2] - (0xff < sVar3);
        pcVar42[2] = (0 < sVar4) * (sVar4 < 0x100) * auVar54[4] - (0xff < sVar4);
        pcVar42[3] = (0 < sVar5) * (sVar5 < 0x100) * auVar54[6] - (0xff < sVar5);
        pcVar42[4] = (0 < sVar6) * (sVar6 < 0x100) * auVar54[8] - (0xff < sVar6);
        pcVar42[5] = (0 < sVar7) * (sVar7 < 0x100) * auVar54[10] - (0xff < sVar7);
        pcVar42[6] = (0 < sVar8) * (sVar8 < 0x100) * auVar54[0xc] - (0xff < sVar8);
        pcVar42[7] = (0 < sVar9) * (sVar9 < 0x100) * auVar54[0xe] - (0xff < sVar9);
        pcVar42[8] = (0 < sVar10) * (sVar10 < 0x100) * auVar66[0] - (0xff < sVar10);
        pcVar42[9] = (0 < sVar11) * (sVar11 < 0x100) * auVar66[2] - (0xff < sVar11);
        pcVar42[10] = (0 < sVar12) * (sVar12 < 0x100) * auVar66[4] - (0xff < sVar12);
        pcVar42[0xb] = (0 < sVar13) * (sVar13 < 0x100) * auVar66[6] - (0xff < sVar13);
        pcVar42[0xc] = (0 < sVar14) * (sVar14 < 0x100) * auVar66[8] - (0xff < sVar14);
        pcVar42[0xd] = (0 < sVar15) * (sVar15 < 0x100) * auVar66[10] - (0xff < sVar15);
        pcVar42[0xe] = (0 < sVar16) * (sVar16 < 0x100) * auVar66[0xc] - (0xff < sVar16);
        pcVar42[0xf] = (0 < sVar17) * (sVar17 < 0x100) * auVar66[0xe] - (0xff < sVar17);
        pcVar42 = pcVar43;
        auVar56 = auVar71;
      } while (pcVar43 != param_2 + uVar44);
      if (param_3 == uVar44) {
        return 1;
      }
    }
    uVar1 = uVar44 + 1;
    param_2[uVar44] = (char)uVar44;
    if (uVar1 < param_3) {
      param_2[uVar1] = (char)uVar1;
      uVar1 = uVar44 + 2;
      if (uVar1 < param_3) {
        param_2[uVar1] = (char)uVar1;
        uVar1 = uVar44 + 3;
        if (uVar1 < param_3) {
          param_2[uVar1] = (char)uVar1;
          uVar1 = uVar44 + 4;
          if (uVar1 < param_3) {
            param_2[uVar1] = (char)uVar1;
            uVar1 = uVar44 + 5;
            if (uVar1 < param_3) {
              param_2[uVar1] = (char)uVar1;
              uVar1 = uVar44 + 6;
              if (uVar1 < param_3) {
                param_2[uVar1] = (char)uVar1;
                uVar1 = uVar44 + 7;
                if (uVar1 < param_3) {
                  param_2[uVar1] = (char)uVar1;
                  uVar1 = uVar44 + 8;
                  if (uVar1 < param_3) {
                    param_2[uVar1] = (char)uVar1;
                    uVar1 = uVar44 + 9;
                    if (uVar1 < param_3) {
                      param_2[uVar1] = (char)uVar1;
                      uVar1 = uVar44 + 10;
                      if (uVar1 < param_3) {
                        param_2[uVar1] = (char)uVar1;
                        uVar1 = uVar44 + 0xb;
                        if (uVar1 < param_3) {
                          param_2[uVar1] = (char)uVar1;
                          uVar1 = uVar44 + 0xc;
                          if (uVar1 < param_3) {
                            param_2[uVar1] = (char)uVar1;
                            uVar1 = uVar44 + 0xd;
                            if (uVar1 < param_3) {
                              uVar44 = uVar44 + 0xe;
                              param_2[uVar1] = (char)uVar1;
                              if (uVar44 < param_3) {
                                param_2[uVar44] = (char)uVar44;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 1;
}



undefined1 * dummy_rand_gettable_ctx_params(void)

{
  return known_gettable_ctx_params_0;
}



undefined1 * dummy_query(undefined8 param_1,int param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  
  *param_3 = 0;
  puVar1 = dummy_decoders;
  if (param_2 != 0x15) {
    if (param_2 < 0x16) {
      puVar1 = dummy_rand;
      if (param_2 != 5) {
        puVar1 = dummy_encoders;
        if (param_2 != 0x14) {
          puVar1 = (undefined1 *)0x0;
        }
        return puVar1;
      }
    }
    else {
      puVar1 = dummy_store;
      if (param_2 != 0x16) {
        puVar1 = (undefined1 *)0x0;
      }
    }
  }
  return puVar1;
}



bool fetch_test(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined8 uVar8;
  long in_FS_OFFSET;
  bool bVar9;
  undefined8 local_78;
  undefined1 local_68 [40];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = OSSL_LIB_CTX_new();
  iVar1 = test_ptr("test/provfetchtest.c",0xf2,"libctx",uVar3);
  if (iVar1 != 0) {
    iVar1 = OSSL_PROVIDER_add_builtin(uVar3,"dummy-prov",dummy_provider_init);
    iVar1 = test_true("test/provfetchtest.c",0xf5,
                      "OSSL_PROVIDER_add_builtin(libctx, \"dummy-prov\", dummy_provider_init)",
                      iVar1 != 0);
    if (iVar1 != 0) {
      uVar4 = OSSL_PROVIDER_load(uVar3,"default");
      iVar1 = test_ptr("test/provfetchtest.c",0xf7,
                       "nullprov = OSSL_PROVIDER_load(libctx, \"default\")",uVar4);
      if (iVar1 == 0) {
        local_78 = 0;
        uVar8 = 0;
        uVar6 = 0;
        uVar5 = 0;
        bVar9 = false;
        goto LAB_00100373;
      }
      uVar5 = OSSL_PROVIDER_load(uVar3,"dummy-prov");
      iVar1 = test_ptr("test/provfetchtest.c",0xf8,
                       "dummyprov = OSSL_PROVIDER_load(libctx, \"dummy-prov\")",uVar5);
      if (iVar1 != 0) {
        iVar1 = (int)param_1 % 4;
        if (iVar1 == 2) {
          pcVar7 = "provider=dummy";
          if ((int)param_1 < 4) {
            pcVar7 = (char *)0x0;
          }
          uVar8 = OSSL_STORE_LOADER_fetch(uVar3,"DUMMY",pcVar7);
          iVar1 = test_ptr("test/provfetchtest.c",0x10b,"loader",uVar8);
          local_78 = 0;
          bVar9 = iVar1 != 0;
          uVar6 = 0;
          goto LAB_00100373;
        }
        if (iVar1 == 3) {
          pcVar7 = "provider=dummy";
          if (param_1 == 3) {
            pcVar7 = (char *)0x0;
          }
          iVar1 = RAND_set_DRBG_type(uVar3,"DUMMY",pcVar7,0,0);
          iVar1 = test_true("test/provfetchtest.c",0x10f,
                            "RAND_set_DRBG_type(libctx, \"DUMMY\", query ? \"provider=dummy\" : NULL, NULL, NULL)"
                            ,iVar1 != 0);
          if (iVar1 != 0) {
            uVar2 = RAND_bytes_ex(uVar3,local_68,0x20,0);
            iVar1 = test_int_ge("test/provfetchtest.c",0x112,
                                "RAND_bytes_ex(libctx, buf, sizeof(buf), 0)",&_LC23,uVar2,1);
            local_78 = 0;
            bVar9 = iVar1 != 0;
            uVar8 = 0;
            uVar6 = 0;
            goto LAB_00100373;
          }
        }
        else {
          if ((param_1 & 3) == 0) {
            pcVar7 = "provider=dummy";
            if ((int)param_1 < 4) {
              pcVar7 = (char *)0x0;
            }
            uVar6 = OSSL_DECODER_fetch(uVar3,"DUMMY",pcVar7);
            iVar1 = test_ptr("test/provfetchtest.c",0xff,"decoder",uVar6);
            local_78 = 0;
            bVar9 = iVar1 != 0;
            uVar8 = 0;
            goto LAB_00100373;
          }
          if (iVar1 == 1) {
            pcVar7 = "provider=dummy";
            if ((int)param_1 < 4) {
              pcVar7 = (char *)0x0;
            }
            local_78 = OSSL_ENCODER_fetch(uVar3,"DUMMY",pcVar7);
            iVar1 = test_ptr("test/provfetchtest.c",0x105,"encoder",local_78);
            bVar9 = iVar1 != 0;
            uVar8 = 0;
            uVar6 = 0;
            goto LAB_00100373;
          }
        }
      }
      local_78 = 0;
      bVar9 = false;
      uVar8 = 0;
      uVar6 = 0;
      goto LAB_00100373;
    }
  }
  local_78 = 0;
  bVar9 = false;
  uVar8 = 0;
  uVar6 = 0;
  uVar4 = 0;
  uVar5 = 0;
LAB_00100373:
  OSSL_DECODER_free(uVar6);
  OSSL_ENCODER_free(local_78);
  OSSL_STORE_LOADER_free(uVar8);
  OSSL_PROVIDER_unload(uVar5);
  OSSL_PROVIDER_unload(uVar4);
  OSSL_LIB_CTX_free(uVar3);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool dummy_provider_init(undefined8 param_1,undefined8 param_2,undefined8 *param_3,
                        undefined8 *param_4)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined1 auStack_48 [40];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = OSSL_LIB_CTX_new_child();
  *param_4 = uVar2;
  *param_3 = dummy_dispatch_table;
  iVar1 = RAND_bytes_ex(uVar2,auStack_48,0x20,0);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0 < iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool dummy_rand_get_ctx_params(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  
  lVar2 = OSSL_PARAM_locate(param_2,"max_request");
  bVar3 = true;
  if (lVar2 != 0) {
    iVar1 = OSSL_PARAM_set_size_t(lVar2,0x7fffffff);
    bVar3 = iVar1 != 0;
  }
  return bVar3;
}



undefined8 dummy_rand_enable_locking(void)

{
  return 1;
}



void dummy_rand_unlock(void)

{
  return;
}



undefined8 dummy_store_close(void)

{
  return 0;
}



undefined8 dummy_rand_lock(void)

{
  return 1;
}



undefined8 setup_tests(void)

{
  add_all_tests("fetch_test",fetch_test,8,1);
  return 1;
}


