
bool using_fips_rng(void)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  
  uVar2 = RAND_get0_primary(0);
  iVar1 = test_ptr("test/drbgtest.c",0x8a,"primary",uVar2);
  if (iVar1 != 0) {
    uVar2 = EVP_RAND_CTX_get0_rand(uVar2);
    uVar2 = EVP_RAND_get0_provider(uVar2);
    iVar1 = test_ptr("test/drbgtest.c",0x8e,&_LC2,uVar2);
    if (iVar1 != 0) {
      pcVar3 = (char *)OSSL_PROVIDER_get0_name(uVar2);
      pcVar3 = strstr(pcVar3,"FIPS Provider");
      return pcVar3 != (char *)0x0;
    }
  }
  return false;
}



undefined8 new_drbg(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  OSSL_PARAM_construct_utf8_string(&local_a8,"cipher","AES-256-CTR",0);
  local_58 = local_88;
  local_78 = local_a8;
  uStack_70 = uStack_a0;
  local_68 = local_98;
  uStack_60 = uStack_90;
  OSSL_PARAM_construct_end(&local_a8);
  local_50 = local_a8;
  uStack_48 = uStack_a0;
  local_30 = local_88;
  local_40 = local_98;
  uStack_38 = uStack_90;
  uVar2 = EVP_RAND_fetch(0,"CTR-DRBG",0);
  iVar1 = test_ptr("test/drbgtest.c",0x318,"rand = EVP_RAND_fetch(NULL, \"CTR-DRBG\", NULL)",uVar2);
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = EVP_RAND_CTX_new(uVar2,param_1);
    iVar1 = test_ptr("test/drbgtest.c",0x319,"drbg = EVP_RAND_CTX_new(rand, parent)",uVar3);
    if (iVar1 != 0) {
      iVar1 = EVP_RAND_CTX_set_params(uVar3,&local_78);
      iVar1 = test_true("test/drbgtest.c",0x31a,"EVP_RAND_CTX_set_params(drbg, params)",iVar1 != 0);
      uVar4 = uVar3;
      if (iVar1 != 0) goto LAB_001001ba;
    }
  }
  uVar4 = 0;
  EVP_RAND_CTX_free(uVar3);
LAB_001001ba:
  EVP_RAND_free(uVar2);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void compare_rand_chunk(void *param_1,void *param_2)

{
  memcmp(param_1,param_2,2);
  return;
}



undefined8 reseed_time(undefined8 param_1)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined1 local_a8 [32];
  undefined8 local_88;
  undefined8 local_70;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  local_48 = (undefined1  [16])0x0;
  local_38 = (undefined1  [16])0x0;
  local_28 = (undefined1  [16])0x0;
  OSSL_PARAM_construct_time_t(local_a8,"reseed_time",&local_70);
  local_48._0_8_ = local_88;
  iVar1 = EVP_RAND_CTX_get_params(param_1,local_68);
  if (iVar1 == 0) {
    local_70 = 0;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_70;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int gen_bytes(long param_1,uchar *param_2,int param_3)

{
  int iVar1;
  RAND_METHOD *pRVar2;
  RAND_METHOD *pRVar3;
  
  pRVar2 = RAND_get_rand_method();
  if ((pRVar2 != (RAND_METHOD *)0x0) && (pRVar3 = (RAND_METHOD *)RAND_OpenSSL(), pRVar2 != pRVar3))
  {
    if (pRVar2->bytes == (_func_3913 *)0x0) {
      return -1;
    }
                    /* WARNING: Could not recover jumptable at 0x00100303. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (*pRVar2->bytes)(param_2,param_3);
    return iVar1;
  }
  if (param_1 == 0) {
    return 0;
  }
  iVar1 = EVP_RAND_generate(param_1,param_2,(long)param_3,0,0,0,0);
  return iVar1;
}



int compare_drbg_fork_result(void *param_1,void *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)((long)param_1 + 0x18) - *(int *)((long)param_2 + 0x18);
  if (iVar1 == 0) {
    iVar1 = memcmp(param_1,param_2,0x10);
    if (iVar1 == 0) {
      iVar1 = *(int *)((long)param_1 + 0x10) - *(int *)((long)param_2 + 0x10);
    }
    return iVar1;
  }
  return iVar1;
}



undefined4 query_rand_uint_constprop_0(undefined8 param_1)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined1 local_a8 [32];
  undefined8 local_88;
  undefined4 local_6c;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  local_48 = (undefined1  [16])0x0;
  local_38 = (undefined1  [16])0x0;
  local_28 = (undefined1  [16])0x0;
  OSSL_PARAM_construct_uint(local_a8,"reseed_counter",&local_6c);
  local_48._0_8_ = local_88;
  iVar1 = EVP_RAND_CTX_get_params(param_1,local_68);
  if (iVar1 == 0) {
    local_6c = 0;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_6c;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void run_multi_thread_test(void)

{
  int iVar1;
  time_t tVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  time_t tVar5;
  long in_FS_OFFSET;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined1 local_148 [264];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  tVar2 = time((time_t *)0x0);
  uVar3 = RAND_get0_public(0);
  iVar1 = test_ptr("test/drbgtest.c",0x2ae,"public = RAND_get0_public(NULL)",uVar3);
  if (iVar1 != 0) {
    uVar4 = RAND_get0_private(0);
    iVar1 = test_ptr("test/drbgtest.c",0x2af,"private = RAND_get0_private(NULL)",uVar4);
    if (iVar1 != 0) {
      local_1a0 = 1;
      OSSL_PARAM_construct_int(&local_1d8,"reseed_time_interval",&local_1a0);
      local_178 = local_1b8;
      local_198 = local_1d8;
      uStack_190 = uStack_1d0;
      local_188 = local_1c8;
      uStack_180 = uStack_1c0;
      OSSL_PARAM_construct_end(&local_1d8);
      local_150 = local_1b8;
      local_170 = local_1d8;
      uStack_168 = uStack_1d0;
      local_160 = local_1c8;
      uStack_158 = uStack_1c0;
      iVar1 = EVP_RAND_CTX_set_params(uVar4,&local_198);
      iVar1 = test_true("test/drbgtest.c",0x2b0,"set_reseed_time_interval(private, 1)",iVar1 != 0);
      if (iVar1 != 0) {
        local_19c = 1;
        OSSL_PARAM_construct_int(&local_1d8,"reseed_time_interval",&local_19c);
        local_178 = local_1b8;
        local_198 = local_1d8;
        uStack_190 = uStack_1d0;
        local_188 = local_1c8;
        uStack_180 = uStack_1c0;
        OSSL_PARAM_construct_end(&local_1d8);
        local_170 = local_1d8;
        uStack_168 = uStack_1d0;
        local_150 = local_1b8;
        local_160 = local_1c8;
        uStack_158 = uStack_1c0;
        iVar1 = EVP_RAND_CTX_set_params(uVar3,&local_198);
        iVar1 = test_true("test/drbgtest.c",0x2b1,"set_reseed_time_interval(public, 1)",iVar1 != 0);
        if (iVar1 != 0) {
          do {
            uVar3 = RAND_get0_public(0);
            iVar1 = gen_bytes(uVar3,local_148,0x100);
            if (iVar1 < 1) {
              multi_thread_rand_bytes_succeeded = 0;
            }
            uVar3 = RAND_get0_private(0);
            iVar1 = gen_bytes(uVar3,local_148,0x100);
            if (iVar1 < 1) {
              multi_thread_rand_priv_bytes_succeeded = 0;
            }
            tVar5 = time((time_t *)0x0);
          } while (tVar5 - tVar2 < 5);
          goto LAB_001004a4;
        }
      }
    }
  }
  multi_thread_rand_bytes_succeeded = 0;
LAB_001004a4:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



undefined8 thread_run(void)

{
  run_multi_thread_test();
  OPENSSL_thread_stop();
  return 0;
}



ulong test_multi_thread(void)

{
  int iVar1;
  ulong uVar2;
  pthread_t *__newthread;
  long in_FS_OFFSET;
  pthread_t local_38;
  pthread_t local_30;
  pthread_t local_28;
  pthread_t local_20;
  
  __newthread = &local_38;
  local_20 = *(pthread_t *)(in_FS_OFFSET + 0x28);
  do {
    pthread_create(__newthread,(pthread_attr_t *)0x0,thread_run,(void *)0x0);
    __newthread = __newthread + 1;
  } while (&local_20 != __newthread);
  run_multi_thread_test();
  pthread_join(local_38,(void **)0x0);
  pthread_join(local_30,(void **)0x0);
  pthread_join(local_28,(void **)0x0);
  uVar2 = test_true("test/drbgtest.c",0x305,"multi_thread_rand_bytes_succeeded",
                    multi_thread_rand_bytes_succeeded != 0);
  if ((int)uVar2 != 0) {
    iVar1 = test_true("test/drbgtest.c",0x307,"multi_thread_rand_priv_bytes_succeeded",
                      multi_thread_rand_priv_bytes_succeeded != 0);
    uVar2 = (ulong)(iVar1 != 0);
  }
  if (local_20 == *(pthread_t *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void inc_reseed_counter(long param_1)

{
  int iVar1;
  int iVar2;
  long in_FS_OFFSET;
  undefined1 local_a8 [32];
  undefined8 local_88;
  int local_6c;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  local_48 = (undefined1  [16])0x0;
  local_38 = (undefined1  [16])0x0;
  local_28 = (undefined1  [16])0x0;
  OSSL_PARAM_construct_uint(local_a8,"reseed_counter",&local_6c);
  local_48._0_8_ = local_88;
  iVar1 = EVP_RAND_CTX_get_params(param_1,local_68);
  iVar2 = 1;
  if (iVar1 != 0) {
    iVar2 = local_6c + 1;
  }
  LOCK();
  *(int *)(*(long *)(param_1 + 8) + 0xd0) = iVar2;
  UNLOCK();
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong test_rand_prediction_resistance(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  long in_FS_OFFSET;
  int local_15c;
  undefined1 local_148 [32];
  undefined8 local_128;
  int local_10c;
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [64];
  undefined1 local_78 [56];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = using_fips_rng();
  if (iVar1 != 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar13 = test_skip("test/drbgtest.c",0x329,"CRNGT cannot be disabled");
      return uVar13;
    }
    goto LAB_001011de;
  }
  uVar13 = 0;
  uVar10 = new_drbg(0);
  iVar1 = test_ptr("test/drbgtest.c",0x32c,"x = new_drbg(NULL)",uVar10);
  if (iVar1 == 0) {
LAB_001008d3:
    uVar12 = 0;
    uVar11 = 0;
  }
  else {
    iVar1 = test_true("test/drbgtest.c",0x32d,"disable_crngt(x)",1);
    if (iVar1 == 0) goto LAB_001008d3;
    iVar1 = EVP_RAND_instantiate(uVar10,0,0,0,0,0);
    iVar1 = test_true("test/drbgtest.c",0x32e,"EVP_RAND_instantiate(x, 0, 0, NULL, 0, NULL)",
                      iVar1 != 0);
    if (iVar1 == 0) goto LAB_001008d3;
    uVar12 = 0;
    uVar11 = new_drbg(uVar10);
    iVar1 = test_ptr("test/drbgtest.c",0x32f,"y = new_drbg(x)",uVar11);
    if (iVar1 != 0) {
      iVar1 = EVP_RAND_instantiate(uVar11,0,0,0,0,0);
      iVar1 = test_true("test/drbgtest.c",0x330,"EVP_RAND_instantiate(y, 0, 0, NULL, 0, NULL)",
                        iVar1 != 0);
      if (iVar1 != 0) {
        uVar12 = new_drbg(uVar11);
        iVar1 = test_ptr("test/drbgtest.c",0x331,"z = new_drbg(y)",uVar12);
        if (iVar1 != 0) {
          iVar1 = EVP_RAND_instantiate(uVar12,0,0,0,0,0);
          iVar1 = test_true("test/drbgtest.c",0x332,"EVP_RAND_instantiate(z, 0, 0, NULL, 0, NULL)",
                            iVar1 != 0);
          if (iVar1 != 0) {
            inc_reseed_counter(uVar11);
            local_108 = (undefined1  [16])0x0;
            local_f8 = (undefined1  [16])0x0;
            local_e8 = (undefined1  [16])0x0;
            local_d8 = (undefined1  [16])0x0;
            local_c8 = (undefined1  [16])0x0;
            OSSL_PARAM_construct_uint(local_148,"reseed_counter",&local_10c);
            local_e8._0_8_ = local_128;
            local_15c = EVP_RAND_CTX_get_params(uVar10,local_108);
            if (local_15c != 0) {
              local_15c = local_10c;
            }
            local_108 = (undefined1  [16])0x0;
            local_f8 = (undefined1  [16])0x0;
            local_e8 = (undefined1  [16])0x0;
            local_d8 = (undefined1  [16])0x0;
            local_c8 = (undefined1  [16])0x0;
            OSSL_PARAM_construct_uint(local_148,"reseed_counter",&local_10c);
            local_e8._0_8_ = local_128;
            iVar1 = EVP_RAND_CTX_get_params(uVar11,local_108);
            if (iVar1 != 0) {
              iVar1 = local_10c;
            }
            local_108 = (undefined1  [16])0x0;
            local_f8 = (undefined1  [16])0x0;
            local_e8 = (undefined1  [16])0x0;
            local_d8 = (undefined1  [16])0x0;
            local_c8 = (undefined1  [16])0x0;
            OSSL_PARAM_construct_uint(local_148,"reseed_counter",&local_10c);
            local_e8._0_8_ = local_128;
            iVar2 = EVP_RAND_CTX_get_params(uVar12,local_108);
            if (iVar2 != 0) {
              iVar2 = local_10c;
            }
            iVar3 = EVP_RAND_reseed(uVar12,0,0,0,0,0);
            iVar3 = test_true("test/drbgtest.c",0x33d,"EVP_RAND_reseed(z, 0, NULL, 0, NULL, 0)",
                              iVar3 != 0);
            if (iVar3 != 0) {
              local_108 = (undefined1  [16])0x0;
              local_f8 = (undefined1  [16])0x0;
              local_e8 = (undefined1  [16])0x0;
              local_d8 = (undefined1  [16])0x0;
              local_c8 = (undefined1  [16])0x0;
              OSSL_PARAM_construct_uint(local_148,"reseed_counter",&local_10c);
              local_e8._0_8_ = local_128;
              iVar3 = EVP_RAND_CTX_get_params(uVar10,local_108);
              if (iVar3 != 0) {
                iVar3 = local_10c;
              }
              iVar3 = test_int_eq("test/drbgtest.c",0x33e,"reseed_counter(x)","xreseed",iVar3,
                                  local_15c);
              if (iVar3 != 0) {
                local_108 = (undefined1  [16])0x0;
                local_f8 = (undefined1  [16])0x0;
                local_e8 = (undefined1  [16])0x0;
                local_d8 = (undefined1  [16])0x0;
                local_c8 = (undefined1  [16])0x0;
                OSSL_PARAM_construct_uint(local_148,"reseed_counter",&local_10c);
                local_e8._0_8_ = local_128;
                iVar4 = EVP_RAND_CTX_get_params(uVar11,local_108);
                iVar3 = 0;
                if (iVar4 != 0) {
                  iVar3 = local_10c;
                }
                iVar3 = test_int_eq("test/drbgtest.c",0x33f,"reseed_counter(y)","yreseed",iVar3,
                                    iVar1);
                if (iVar3 != 0) {
                  uVar5 = query_rand_uint_constprop_0(uVar12);
                  iVar2 = test_int_gt("test/drbgtest.c",0x340,"reseed_counter(z)","zreseed",uVar5,
                                      iVar2);
                  if (iVar2 != 0) {
                    uVar6 = query_rand_uint_constprop_0(uVar12);
                    iVar2 = EVP_RAND_reseed(uVar12,1,0,0,0,0);
                    iVar2 = test_true("test/drbgtest.c",0x348,
                                      "EVP_RAND_reseed(z, 1, NULL, 0, NULL, 0)",iVar2 != 0);
                    if (iVar2 != 0) {
                      uVar5 = query_rand_uint_constprop_0(uVar10);
                      iVar2 = test_int_gt("test/drbgtest.c",0x349,"reseed_counter(x)","xreseed",
                                          uVar5,local_15c);
                      if (iVar2 == 0) {
                        uVar13 = 0;
                      }
                      else {
                        uVar5 = query_rand_uint_constprop_0(uVar11);
                        iVar1 = test_int_gt("test/drbgtest.c",0x34a,"reseed_counter(y)","yreseed",
                                            uVar5,iVar1);
                        if (iVar1 != 0) {
                          uVar5 = query_rand_uint_constprop_0(uVar12);
                          uVar14 = (ulong)uVar6;
                          iVar1 = test_int_gt("test/drbgtest.c",0x34b,"reseed_counter(z)","zreseed",
                                              uVar5);
                          if (iVar1 != 0) {
                            inc_reseed_counter(uVar11);
                            uVar5 = query_rand_uint_constprop_0(uVar10);
                            uVar7 = query_rand_uint_constprop_0(uVar11);
                            uVar8 = query_rand_uint_constprop_0(uVar12);
                            iVar1 = EVP_RAND_generate(uVar12,local_b8,0x33,0,0,0,0,uVar14);
                            iVar1 = test_true("test/drbgtest.c",0x354,
                                              "EVP_RAND_generate(z, buf1, sizeof(buf1), 0, 0, NULL, 0)"
                                              ,iVar1 != 0);
                            if (iVar1 != 0) {
                              uVar9 = query_rand_uint_constprop_0(uVar10);
                              iVar1 = test_int_eq("test/drbgtest.c",0x355,"reseed_counter(x)",
                                                  "xreseed",uVar9,uVar5);
                              if (iVar1 != 0) {
                                uVar9 = query_rand_uint_constprop_0(uVar11);
                                iVar1 = test_int_eq("test/drbgtest.c",0x356,"reseed_counter(y)",
                                                    "yreseed",uVar9,uVar7);
                                if (iVar1 != 0) {
                                  uVar9 = query_rand_uint_constprop_0(uVar12);
                                  iVar1 = test_int_gt("test/drbgtest.c",0x357,"reseed_counter(z)",
                                                      "zreseed",uVar9,uVar8);
                                  if (iVar1 != 0) {
                                    uVar8 = query_rand_uint_constprop_0(uVar12);
                                    iVar1 = EVP_RAND_generate(uVar12,local_78,0x33,0,1,0,0);
                                    iVar1 = test_true("test/drbgtest.c",0x35f,
                                                                                                            
                                                  "EVP_RAND_generate(z, buf2, sizeof(buf2), 0, 1, NULL, 0)"
                                                  ,iVar1 != 0);
                                    if (iVar1 != 0) {
                                      uVar9 = query_rand_uint_constprop_0(uVar10);
                                      iVar1 = test_int_gt("test/drbgtest.c",0x360,
                                                          "reseed_counter(x)","xreseed",uVar9,uVar5)
                                      ;
                                      if (iVar1 != 0) {
                                        uVar5 = query_rand_uint_constprop_0(uVar11);
                                        iVar1 = test_int_gt("test/drbgtest.c",0x361,
                                                            "reseed_counter(y)","yreseed",uVar5,
                                                            uVar7);
                                        if (iVar1 != 0) {
                                          uVar5 = query_rand_uint_constprop_0(uVar12);
                                          iVar1 = test_int_gt("test/drbgtest.c",0x362,
                                                              "reseed_counter(z)","zreseed",uVar5,
                                                              uVar8);
                                          if (iVar1 != 0) {
                                            iVar1 = test_mem_ne("test/drbgtest.c",0x363,&_LC38,
                                                                &_LC37,local_b8,0x33);
                                            if (iVar1 != 0) {
                                              inc_reseed_counter(uVar11);
                                              uVar5 = query_rand_uint_constprop_0(uVar10);
                                              uVar7 = query_rand_uint_constprop_0(uVar11);
                                              uVar8 = query_rand_uint_constprop_0(uVar12);
                                              iVar1 = EVP_RAND_reseed(uVar12,0,0,0,0,0);
                                              iVar1 = test_true("test/drbgtest.c",0x36b,
                                                                                                                                
                                                  "EVP_RAND_reseed(z, 0, NULL, 0, NULL, 0)",
                                                  iVar1 != 0);
                                              if (iVar1 != 0) {
                                                uVar9 = query_rand_uint_constprop_0(uVar10);
                                                iVar1 = test_int_eq("test/drbgtest.c",0x36c,
                                                                    "reseed_counter(x)","xreseed",
                                                                    uVar9,uVar5);
                                                if (iVar1 != 0) {
                                                  uVar5 = query_rand_uint_constprop_0(uVar11);
                                                  iVar1 = test_int_eq("test/drbgtest.c",0x36d,
                                                                      "reseed_counter(y)","yreseed",
                                                                      uVar5,uVar7);
                                                  if (iVar1 != 0) {
                                                    uVar5 = query_rand_uint_constprop_0(uVar12);
                                                    iVar1 = test_int_gt("test/drbgtest.c",0x36e,
                                                                        "reseed_counter(z)",
                                                                        "zreseed",uVar5,uVar8);
                                                    uVar13 = (ulong)(iVar1 != 0);
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
  EVP_RAND_CTX_free(uVar12);
  EVP_RAND_CTX_free(uVar11);
  EVP_RAND_CTX_free(uVar10);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar13;
  }
LAB_001011de:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool test_drbg_reseed_constprop_0
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4,
               undefined1 *param_5,int param_6,undefined8 param_7,undefined8 param_8,time_t param_9)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  time_t tVar6;
  undefined8 uVar7;
  time_t tVar8;
  undefined8 uVar9;
  long in_FS_OFFSET;
  bool bVar10;
  int local_f0;
  int local_ec;
  undefined1 local_e8 [32];
  undefined8 local_c8;
  int local_ac;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_a8 = (undefined1  [16])0x0;
  if (param_4 == (undefined1 *)0x0) {
    param_4 = local_58;
  }
  local_98 = (undefined1  [16])0x0;
  if (param_5 == (undefined1 *)0x0) {
    param_5 = local_58;
  }
  local_88 = (undefined1  [16])0x0;
  local_78 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  OSSL_PARAM_construct_uint(local_e8,"reseed_counter",&local_ac);
  local_88._0_8_ = local_c8;
  iVar1 = EVP_RAND_CTX_get_params(param_1,local_a8);
  iVar3 = local_ac;
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  iVar1 = test_int_ne("test/drbgtest.c",0xca,"primary_reseed = reseed_counter(primary)",&_LC39,iVar3
                      ,0);
  if (iVar1 != 0) {
    local_a8 = (undefined1  [16])0x0;
    local_98 = (undefined1  [16])0x0;
    local_88 = (undefined1  [16])0x0;
    local_78 = (undefined1  [16])0x0;
    local_68 = (undefined1  [16])0x0;
    OSSL_PARAM_construct_uint(local_e8,"reseed_counter",&local_ac);
    local_88._0_8_ = local_c8;
    local_f0 = EVP_RAND_CTX_get_params(param_2,local_a8);
    if (local_f0 != 0) {
      local_f0 = local_ac;
    }
    iVar1 = test_int_ne("test/drbgtest.c",0xcb,"public_reseed = reseed_counter(public)",&_LC39,
                        local_f0,0);
    if (iVar1 != 0) {
      local_a8 = (undefined1  [16])0x0;
      local_98 = (undefined1  [16])0x0;
      local_88 = (undefined1  [16])0x0;
      local_78 = (undefined1  [16])0x0;
      local_68 = (undefined1  [16])0x0;
      OSSL_PARAM_construct_uint(local_e8,"reseed_counter",&local_ac);
      local_88._0_8_ = local_c8;
      local_ec = EVP_RAND_CTX_get_params(param_3,local_a8);
      if (local_ec != 0) {
        local_ec = local_ac;
      }
      iVar1 = test_int_ne("test/drbgtest.c",0xcc,"private_reseed = reseed_counter(private)",&_LC39,
                          local_ec,0);
      if (iVar1 != 0) {
        if (param_9 == 0) {
          param_9 = time((time_t *)0x0);
        }
        tVar6 = 0;
        if (param_6 == 1) {
          tVar6 = param_9;
        }
        uVar7 = RAND_get0_public(0);
        uVar2 = gen_bytes(uVar7,param_4,0x10);
        iVar1 = test_int_eq("test/drbgtest.c",0xd8,
                            "rand_bytes((unsigned char*)public_random, RANDOM_SIZE)",
                            "expect_success",uVar2,1);
        if (iVar1 != 0) {
          uVar7 = RAND_get0_private(0);
          uVar2 = gen_bytes(uVar7,param_5,0x10);
          iVar1 = test_int_eq("test/drbgtest.c",0xda,
                              "rand_priv_bytes((unsigned char*) private_random, RANDOM_SIZE)",
                              "expect_success",uVar2,1);
          if (iVar1 != 0) {
            tVar8 = time((time_t *)0x0);
            uVar2 = EVP_RAND_get_state(param_1);
            iVar1 = test_int_eq("test/drbgtest.c",0xe5,"state(primary)","expected_state",uVar2,1);
            if (iVar1 != 0) {
              uVar2 = EVP_RAND_get_state(param_2);
              iVar1 = test_int_eq("test/drbgtest.c",0xe6,"state(public)","expected_state",uVar2,1);
              if (iVar1 != 0) {
                uVar2 = EVP_RAND_get_state(param_3);
                iVar1 = test_int_eq("test/drbgtest.c",0xe7,"state(private)","expected_state",uVar2,1
                                   );
                if (iVar1 != 0) {
                  local_a8 = (undefined1  [16])0x0;
                  local_98 = (undefined1  [16])0x0;
                  local_88 = (undefined1  [16])0x0;
                  local_78 = (undefined1  [16])0x0;
                  local_68 = (undefined1  [16])0x0;
                  OSSL_PARAM_construct_uint(local_e8,"reseed_counter",&local_ac);
                  local_88._0_8_ = local_c8;
                  iVar1 = EVP_RAND_CTX_get_params(param_1,local_a8);
                  if (iVar1 != 0) {
                    iVar1 = local_ac;
                  }
                  iVar3 = test_int_ge("test/drbgtest.c",0xec,"reseed_counter(primary)",
                                      "primary_reseed",iVar1,iVar3);
                  if (iVar3 != 0) {
                    local_a8 = (undefined1  [16])0x0;
                    local_98 = (undefined1  [16])0x0;
                    local_88 = (undefined1  [16])0x0;
                    local_78 = (undefined1  [16])0x0;
                    local_68 = (undefined1  [16])0x0;
                    OSSL_PARAM_construct_uint(local_e8,"reseed_counter",&local_ac);
                    local_88._0_8_ = local_c8;
                    iVar3 = EVP_RAND_CTX_get_params(param_2,local_a8);
                    if (iVar3 != 0) {
                      iVar3 = local_ac;
                    }
                    iVar3 = test_int_ge("test/drbgtest.c",0xf2,"reseed_counter(public)",
                                        "public_reseed",iVar3);
                    if (iVar3 != 0) {
                      local_a8 = (undefined1  [16])0x0;
                      local_98 = (undefined1  [16])0x0;
                      local_88 = (undefined1  [16])0x0;
                      local_78 = (undefined1  [16])0x0;
                      local_68 = (undefined1  [16])0x0;
                      OSSL_PARAM_construct_uint(local_e8,"reseed_counter",&local_ac);
                      local_88._0_8_ = local_c8;
                      iVar1 = EVP_RAND_CTX_get_params(param_1,local_a8);
                      iVar3 = 0;
                      if (iVar1 != 0) {
                        iVar3 = local_ac;
                      }
                      local_a8 = (undefined1  [16])0x0;
                      local_98 = (undefined1  [16])0x0;
                      local_88 = (undefined1  [16])0x0;
                      local_78 = (undefined1  [16])0x0;
                      local_68 = (undefined1  [16])0x0;
                      OSSL_PARAM_construct_uint(local_e8,"reseed_counter",&local_ac);
                      local_88._0_8_ = local_c8;
                      iVar4 = EVP_RAND_CTX_get_params(param_2,local_a8);
                      iVar1 = 0;
                      if (iVar4 != 0) {
                        iVar1 = local_ac;
                      }
                      iVar3 = test_uint_ge("test/drbgtest.c",0xf3,"reseed_counter(public)",
                                           "reseed_counter(primary)",iVar1,iVar3);
                      if (iVar3 != 0) {
                        local_a8 = (undefined1  [16])0x0;
                        local_98 = (undefined1  [16])0x0;
                        local_88 = (undefined1  [16])0x0;
                        local_78 = (undefined1  [16])0x0;
                        local_68 = (undefined1  [16])0x0;
                        OSSL_PARAM_construct_uint(local_e8,"reseed_counter",&local_ac);
                        local_88._0_8_ = local_c8;
                        iVar3 = EVP_RAND_CTX_get_params(param_3,local_a8);
                        if (iVar3 != 0) {
                          iVar3 = local_ac;
                        }
                        iVar3 = test_int_ge("test/drbgtest.c",0xfa,"reseed_counter(private)",
                                            "private_reseed",iVar3,local_ec);
                        if (iVar3 != 0) {
                          uVar2 = query_rand_uint_constprop_0(param_1);
                          uVar5 = query_rand_uint_constprop_0(param_3);
                          iVar3 = test_uint_ge("test/drbgtest.c",0xfb,"reseed_counter(private)",
                                               "reseed_counter(primary)",uVar5,uVar2);
                          if (iVar3 != 0) {
                            uVar7 = reseed_time(param_1);
                            iVar3 = test_time_t_le("test/drbgtest.c",0x102,"before_reseed",
                                                   "reseed_time(primary)",tVar6,uVar7);
                            if (iVar3 != 0) {
                              uVar7 = reseed_time(param_1);
                              iVar3 = test_time_t_le("test/drbgtest.c",0x103,"reseed_time(primary)",
                                                     "after_reseed",uVar7,tVar8);
                              if (iVar3 != 0) {
                                uVar7 = reseed_time(param_1);
                                uVar9 = reseed_time(param_2);
                                iVar3 = test_time_t_ge("test/drbgtest.c",0x107,"reseed_time(public)"
                                                       ,"reseed_time(primary)",uVar9,uVar7);
                                if (iVar3 != 0) {
                                  uVar7 = reseed_time(param_1);
                                  uVar9 = reseed_time(param_3);
                                  iVar3 = test_time_t_ge("test/drbgtest.c",0x108,
                                                         "reseed_time(private)",
                                                         "reseed_time(primary)",uVar9,uVar7);
                                  bVar10 = iVar3 != 0;
                                  goto LAB_00101300;
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
  bVar10 = false;
LAB_00101300:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong test_rand_reseed(void)

{
  int iVar1;
  undefined8 uVar2;
  RAND_METHOD *pRVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  time_t tVar7;
  undefined8 extraout_RAX;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 extraout_RDX;
  char *pcVar11;
  undefined8 *puVar12;
  long in_FS_OFFSET;
  byte bVar13;
  undefined8 auStack_148 [33];
  long local_40;
  
  bVar13 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = using_fips_rng();
  if (iVar1 == 0) {
    uVar8 = 0;
    uVar2 = RAND_OpenSSL();
    pRVar3 = RAND_get_rand_method();
    iVar1 = test_ptr_eq("test/drbgtest.c",0x230,"RAND_get_rand_method()","RAND_OpenSSL()",pRVar3,
                        uVar2);
    if (iVar1 != 0) {
      lVar4 = RAND_get0_primary(0);
      iVar1 = test_ptr("test/drbgtest.c",0x235,"primary = RAND_get0_primary(NULL)",lVar4);
      if (iVar1 != 0) {
        lVar5 = RAND_get0_public(0);
        iVar1 = test_ptr("test/drbgtest.c",0x236,"public = RAND_get0_public(NULL)",lVar5);
        if (iVar1 != 0) {
          lVar6 = RAND_get0_private(0);
          iVar1 = test_ptr("test/drbgtest.c",0x237,"private = RAND_get0_private(NULL)",lVar6);
          if (iVar1 != 0) {
            iVar1 = test_ptr_ne("test/drbgtest.c",0x23b,"public","private",lVar5,lVar6);
            if (iVar1 != 0) {
              iVar1 = test_ptr_ne("test/drbgtest.c",0x23c,"public","primary",lVar5,lVar4);
              if (iVar1 != 0) {
                iVar1 = test_ptr_ne("test/drbgtest.c",0x23d,"private","primary",lVar6,lVar4);
                if (iVar1 != 0) {
                  iVar1 = test_ptr_eq("test/drbgtest.c",0x23e,"prov_rand(public)->parent",
                                      "prov_rand(primary)",
                                      *(undefined8 *)(*(long *)(lVar5 + 8) + 0x30),
                                      *(undefined8 *)(lVar4 + 8));
                  if (iVar1 != 0) {
                    uVar2 = *(undefined8 *)(*(long *)(lVar6 + 8) + 0x30);
                    iVar1 = test_ptr_eq("test/drbgtest.c",0x23f,"prov_rand(private)->parent",
                                        "prov_rand(primary)",uVar2,*(undefined8 *)(lVar4 + 8));
                    if (iVar1 != 0) {
                      iVar1 = test_true("test/drbgtest.c",0x243,"disable_crngt(primary)",1);
                      if (iVar1 != 0) {
                        EVP_RAND_uninstantiate(lVar4);
                        EVP_RAND_uninstantiate(lVar6);
                        EVP_RAND_uninstantiate(lVar5);
                        iVar1 = test_drbg_reseed_constprop_0(lVar4,lVar5,lVar6,0,0,1,1,1,0,uVar2);
                        pcVar11 = "test/drbgtest.c";
                        iVar1 = test_true("test/drbgtest.c",0x24e,
                                          "test_drbg_reseed(1, primary, public, private, NULL, NULL, 1, 1, 1, 0)"
                                          ,iVar1 != 0);
                        if (iVar1 != 0) {
                          iVar1 = test_drbg_reseed_constprop_0
                                            (lVar4,lVar5,lVar6,0,0,0,0,0,0,pcVar11);
                          uVar2 = 599;
                          iVar1 = test_true("test/drbgtest.c",599,
                                            "test_drbg_reseed(1, primary, public, private, NULL, NULL, 0, 0, 0, 0)"
                                            ,iVar1 != 0);
                          if (iVar1 != 0) {
                            inc_reseed_counter(lVar4);
                            iVar1 = test_drbg_reseed_constprop_0
                                              (lVar4,lVar5,lVar6,0,0,0,1,1,0,uVar2);
                            uVar9 = (ulong)(iVar1 != 0);
                            iVar1 = test_true("test/drbgtest.c",0x262,
                                              "test_drbg_reseed(1, primary, public, private, NULL, NULL, 0, 1, 1, 0)"
                                             );
                            if (iVar1 != 0) {
                              inc_reseed_counter(lVar4);
                              inc_reseed_counter(lVar6);
                              iVar1 = test_drbg_reseed_constprop_0
                                                (lVar4,lVar5,lVar6,0,0,0,1,0,0,uVar9);
                              iVar1 = test_true("test/drbgtest.c",0x26e,
                                                "test_drbg_reseed(1, primary, public, private, NULL, NULL, 0, 1, 0, 0)"
                                                ,iVar1 != 0);
                              if (iVar1 != 0) {
                                inc_reseed_counter(lVar4);
                                inc_reseed_counter(lVar5);
                                iVar1 = test_drbg_reseed_constprop_0
                                                  (lVar4,lVar5,lVar6,0,0,0,0,1,0,extraout_RDX);
                                iVar1 = test_true("test/drbgtest.c",0x27a,
                                                  "test_drbg_reseed(1, primary, public, private, NULL, NULL, 0, 0, 1, 0)"
                                                  ,iVar1 != 0);
                                if (iVar1 != 0) {
                                  puVar12 = auStack_148;
                                  for (lVar10 = 0x20; lVar10 != 0; lVar10 = lVar10 + -1) {
                                    *puVar12 = 0x7272727272727272;
                                    puVar12 = puVar12 + (ulong)bVar13 * -2 + 1;
                                  }
                                  tVar7 = time((time_t *)0x0);
                                  RAND_add(auStack_148,0x100,_LC75);
                                  iVar1 = test_drbg_reseed_constprop_0
                                                    (lVar4,lVar5,lVar6,0,0,1,1,1,tVar7,extraout_RAX)
                                  ;
                                  iVar1 = test_true("test/drbgtest.c",0x28d,
                                                                                                        
                                                  "test_drbg_reseed(1, primary, public, private, NULL, NULL, 1, 1, 1, before_reseed)"
                                                  ,iVar1 != 0);
                                  uVar8 = (ulong)(iVar1 != 0);
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
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return uVar8;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    uVar8 = test_skip("test/drbgtest.c",0x22c,"CRNGT cannot be disabled");
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool test_rand_reseed_on_fork(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  short *psVar1;
  byte *pbVar2;
  byte *pbVar3;
  short sVar4;
  bool bVar5;
  __pid_t _Var6;
  int iVar7;
  __pid_t __pid;
  __pid_t _Var8;
  char *pcVar9;
  ssize_t sVar10;
  ulong *puVar11;
  void *ptr;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 extraout_RDX;
  ulong uVar15;
  ulong *__base;
  uint uVar16;
  ulong *puVar17;
  short *psVar18;
  bool bVar19;
  ulong uVar20;
  undefined8 uVar21;
  long in_FS_OFFSET;
  byte bVar22;
  int local_4dc;
  int local_4d8 [4];
  ulong local_4c8;
  undefined8 uStack_4c0;
  __pid_t local_4b4;
  undefined4 local_4b0;
  undefined4 local_4ac;
  undefined3 uStack_4a8;
  ulong local_4a0;
  undefined8 uStack_498;
  __pid_t local_48c;
  undefined4 local_488;
  undefined4 local_484;
  undefined3 uStack_480;
  ulong local_478 [90];
  ulong local_1a8;
  undefined8 uStack_1a0;
  ulong local_198;
  undefined8 uStack_190;
  short local_188 [8];
  undefined1 local_178 [304];
  short local_48 [4];
  long local_40;
  
  bVar22 = 0;
  uVar16 = 1;
  uVar15 = 0x2d0;
  puVar11 = local_478;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _Var6 = getpid();
  pcVar9 = getenv("V");
  __base = &local_4c8;
  puVar17 = __base;
  for (lVar12 = 100; lVar12 != 0; lVar12 = lVar12 + -1) {
    *puVar17 = 0;
    puVar17 = puVar17 + (ulong)bVar22 * -2 + 1;
  }
  local_4d8[0] = 0;
  local_4d8[1] = 0;
  do {
    *(uint *)(puVar11 + 7) = uVar16;
    *(uint *)(puVar11 + 2) = uVar16;
    BIO_snprintf((char *)((long)puVar11 + 0x1c),10,"child %d",(ulong)uVar16);
    uVar14 = 0x28;
    if (0x27 < uVar15) {
      uVar14 = uVar15;
    }
    uVar14 = uVar14 - 0x28;
    if (uVar14 < 0x1c) {
      uVar14 = 0x1c;
    }
    uVar14 = uVar14 - 0x1c;
    if (0x28c < uVar14) {
      uVar14 = 0x28c;
    }
    __strcpy_chk((long)puVar11 + 0x44,(char *)((long)puVar11 + 0x1c),uVar14);
    iVar7 = pipe(local_4d8 + 2);
    iVar7 = test_int_ge("test/drbgtest.c",0x154,"pipe(fd)",&_LC39,iVar7,0);
    if (iVar7 == 0) {
LAB_00101f50:
      uVar21 = 0;
    }
    else {
      __pid = fork();
      iVar7 = test_int_ge("test/drbgtest.c",0x157,"pid = fork()",&_LC39,__pid,0);
      if (iVar7 == 0) {
        close(local_4d8[2]);
        close(local_4d8[3]);
        goto LAB_00101f50;
      }
      if (__pid < 1) {
        close(local_4d8[2]);
        iVar7 = test_drbg_reseed_constprop_0
                          (param_1,param_2,param_3,local_188,local_178,1,1,1,0,extraout_RDX);
        iVar7 = test_true("test/drbgtest.c",0x17e,
                          "test_drbg_reseed(1, primary, public, private, &random[0], &random[RANDOM_SIZE], 1, 1, 1, 0)"
                          ,iVar7 != 0);
        if (iVar7 != 0) {
          sVar10 = write(local_4d8[3],local_188,0x20);
          iVar7 = test_true("test/drbgtest.c",0x181,
                            "write(fd[1], random, sizeof(random)) == sizeof(random)",sVar10 == 0x20)
          ;
          if (iVar7 != 0) {
            uVar16 = 1;
            goto LAB_00102528;
          }
        }
        uVar16 = 0;
LAB_00102528:
        close(local_4d8[3]);
                    /* WARNING: Subroutine does not return */
        exit(uVar16 ^ 1);
      }
      close(local_4d8[3]);
      _Var8 = waitpid(__pid,&local_4dc,0);
      iVar7 = test_int_eq("test/drbgtest.c",0x161,"waitpid(pid, &status, 0)",&_LC81,_Var8);
      if ((iVar7 == 0) ||
         (iVar7 = test_int_eq("test/drbgtest.c",0x162,"status",&_LC39,local_4dc), iVar7 == 0)) {
LAB_001020ad:
        uVar21 = 0;
      }
      else {
        sVar10 = read(local_4d8[2],local_188,0x20);
        iVar7 = test_true("test/drbgtest.c",0x163,
                          "read(fd[0], &random[0], sizeof(random)) == sizeof(random)",sVar10 == 0x20
                         );
        if (iVar7 == 0) goto LAB_001020ad;
        *(__pid_t *)((long)puVar11 + 0x14) = __pid;
        *(undefined4 *)(puVar11 + 3) = 0;
        uVar14 = 800;
        if (799 < uVar15) {
          uVar14 = uVar15;
        }
        uVar20 = uVar14 - uVar15;
        uVar13 = uVar20;
        if (uVar20 <= uVar14) {
          uVar13 = uVar14;
        }
        __memcpy_chk(puVar11,local_188,0x10,uVar13 + (uVar15 - uVar14));
        *(__pid_t *)((long)puVar11 + 0x3c) = __pid;
        *(undefined4 *)(puVar11 + 8) = 1;
        uVar21 = 1;
        uVar13 = uVar20 + 0x28;
        if (uVar20 + 0x28 < uVar14) {
          uVar13 = uVar14;
        }
        __memcpy_chk(puVar11 + 5,local_178,0x10,(uVar15 - uVar14) + -0x28 + uVar13);
      }
      close(local_4d8[2]);
    }
    iVar7 = test_true("test/drbgtest.c",0x1a8,
                      "test_drbg_reseed_in_child(primary, public, private, presult)",uVar21);
    if (iVar7 == 0) goto LAB_0010221c;
    uVar14 = 800;
    if (799 < uVar15) {
      uVar14 = uVar15;
    }
    uVar13 = (uVar14 - uVar15) + 0x50;
    if (uVar13 < uVar14) {
      uVar13 = uVar14;
    }
    puVar11 = puVar11 + 10;
    uVar16 = uVar16 + 1;
    uVar15 = (uVar15 - uVar14) + -0x50 + uVar13;
  } while (puVar11 != &local_1a8);
  iVar7 = test_drbg_reseed_constprop_0(param_1,param_2,param_3,puVar11,&local_198,0,0,0,0);
  iVar7 = test_true("test/drbgtest.c",0x1b2,
                    "test_drbg_reseed(1, primary, public, private, &random[0], &random[RANDOM_SIZE], 0, 0, 0, 0)"
                    ,iVar7 != 0);
  if (iVar7 == 0) {
LAB_0010221c:
    bVar19 = false;
  }
  else {
    uVar15 = 0x140;
    local_4ac = 0x65726170;
    uStack_4a8 = 0x746e;
    local_484 = 0x65726170;
    uStack_480 = 0x746e;
    local_4b0 = 0;
    local_488 = 1;
    local_4c8 = local_1a8;
    uStack_4c0 = uStack_1a0;
    local_4a0 = local_198;
    uStack_498 = uStack_190;
    psVar18 = local_188;
    puVar11 = __base;
    local_4b4 = _Var6;
    local_48c = _Var6;
    do {
      lVar12 = __memcpy_chk(psVar18,puVar11,0x10,uVar15);
      uVar14 = 0x140;
      if (0x13f < uVar15) {
        uVar14 = uVar15;
      }
      uVar13 = (uVar14 - uVar15) + 0x10;
      if (uVar13 < uVar14) {
        uVar13 = uVar14;
      }
      psVar18 = (short *)(lVar12 + 0x10);
      puVar11 = puVar11 + 5;
      uVar15 = (uVar15 - uVar14) + -0x10 + uVar13;
    } while (psVar18 != local_48);
    qsort(__base,0x14,0x28,compare_drbg_fork_result);
    puVar11 = &local_4a0;
    uVar15 = local_4c8 & 0xff;
    do {
      uVar14 = *puVar11;
      if ((byte)uVar14 == (byte)uVar15) {
        local_4d8[(int)puVar11[3]] = local_4d8[(int)puVar11[3]] + 1;
      }
      puVar11 = puVar11 + 5;
      uVar15 = (ulong)(byte)uVar14;
    } while (puVar11 != &local_1a8);
    bVar19 = 7 < local_4d8[0];
    if (bVar19) {
      test_note("ERROR: %d duplicate prefixes in public random output");
    }
    bVar5 = 7 < local_4d8[1];
    if (bVar5) {
      test_note("ERROR: %d duplicate prefixes in private random output");
    }
    bVar19 = !bVar5 && !bVar19;
    qsort(local_188,0xa0,2,compare_rand_chunk);
    iVar7 = 0;
    psVar18 = local_188 + 1;
    do {
      sVar4 = *psVar18;
      psVar1 = psVar18 + -1;
      psVar18 = psVar18 + 1;
      iVar7 = iVar7 + (uint)(*psVar1 == sVar4);
    } while (psVar18 != local_48);
    if (iVar7 < 8) {
      if ((pcVar9 == (char *)0x0) && (bVar19)) goto LAB_0010221f;
    }
    else {
      test_note("ERROR: %d duplicate chunks in random output");
      bVar19 = false;
    }
    do {
      ptr = (void *)OPENSSL_buf2hexstr(__base,0x10);
      pcVar9 = "private";
      pbVar2 = (byte *)((long)__base + 0x14);
      pbVar3 = (byte *)((long)__base + 0x1c);
      if ((int)__base[3] == 0) {
        pcVar9 = "public";
      }
      __base = __base + 5;
      test_note("    random: %s, pid: %d (%s, %s)",ptr,*(undefined4 *)pbVar2,pbVar3,pcVar9);
      CRYPTO_free(ptr);
    } while (__base != &local_1a8);
  }
LAB_0010221f:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar19;
}



bool test_rand_fork_safety(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  bool bVar7;
  uchar local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar4 = RAND_get0_primary(0);
  iVar1 = test_ptr("test/drbgtest.c",0x20e,"primary = RAND_get0_primary(NULL)",uVar4);
  if (iVar1 != 0) {
    uVar5 = RAND_get0_public(0);
    iVar1 = test_ptr("test/drbgtest.c",0x20f,"public = RAND_get0_public(NULL)",uVar5);
    if (iVar1 != 0) {
      uVar6 = RAND_get0_private(0);
      iVar1 = test_ptr("test/drbgtest.c",0x210,"private = RAND_get0_private(NULL)",uVar6);
      if (iVar1 != 0) {
        iVar1 = test_rand_reseed_on_fork(uVar4,uVar5,uVar6);
        iVar1 = test_true("test/drbgtest.c",0x214,
                          "test_rand_reseed_on_fork(primary, public, private)",iVar1 != 0);
        iVar2 = RAND_bytes(&local_31,1);
        iVar2 = test_int_gt("test/drbgtest.c",0x218,"RAND_bytes(random, 1)",&_LC39,iVar2,0);
        if (iVar2 != 0) {
          uVar3 = RAND_priv_bytes(&local_31,1);
          iVar2 = test_int_gt("test/drbgtest.c",0x218,"RAND_priv_bytes(random, 1)",&_LC39,uVar3,0);
          if (iVar2 != 0) {
            bVar7 = iVar1 != 0;
            goto LAB_001025cc;
          }
        }
      }
    }
  }
  bVar7 = false;
LAB_001025cc:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 setup_tests(void)

{
  add_test("test_rand_reseed",test_rand_reseed);
  add_all_tests("test_rand_fork_safety",test_rand_fork_safety,0x10,1);
  add_test("test_rand_prediction_resistance",test_rand_prediction_resistance);
  add_test("test_multi_thread",test_multi_thread);
  return 1;
}


