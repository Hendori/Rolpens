
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



undefined8 dummy_rand_generate(undefined8 param_1,undefined1 *param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  
  if (param_3 != 0) {
    uVar2 = 0;
    if ((param_3 & 1) != 0) {
      *param_2 = 0;
      uVar2 = 1;
      if (param_3 == 1) {
        return 1;
      }
    }
    do {
      param_2[uVar2] = (char)uVar2;
      lVar1 = uVar2 + 1;
      uVar2 = uVar2 + 2;
      param_2[lVar1] = (char)lVar1;
    } while (param_3 != uVar2);
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
        goto LAB_001001a3;
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
          goto LAB_001001a3;
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
                                "RAND_bytes_ex(libctx, buf, sizeof(buf), 0)",&_LC13,uVar2,1);
            local_78 = 0;
            bVar9 = iVar1 != 0;
            uVar8 = 0;
            uVar6 = 0;
            goto LAB_001001a3;
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
            goto LAB_001001a3;
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
            goto LAB_001001a3;
          }
        }
      }
      local_78 = 0;
      bVar9 = false;
      uVar8 = 0;
      uVar6 = 0;
      goto LAB_001001a3;
    }
  }
  local_78 = 0;
  bVar9 = false;
  uVar8 = 0;
  uVar6 = 0;
  uVar4 = 0;
  uVar5 = 0;
LAB_001001a3:
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



undefined8 dummy_rand_lock(void)

{
  return 1;
}



undefined8 dummy_store_close(void)

{
  return 0;
}



undefined8 dummy_rand_enable_locking(void)

{
  return 1;
}



void dummy_rand_unlock(void)

{
  return;
}



undefined8 setup_tests(void)

{
  add_all_tests("fetch_test",fetch_test,8,1);
  return 1;
}


