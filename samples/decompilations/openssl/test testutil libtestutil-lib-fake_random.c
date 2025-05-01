
undefined8 fake_rand_instantiate(long param_1)

{
  *(undefined4 *)(param_1 + 8) = 1;
  return 1;
}



undefined8 fake_rand_uninstantiate(long param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  return 1;
}



undefined8 fake_rand_enable_locking(void)

{
  return 1;
}



undefined1 * fake_rand_gettable_ctx_params(void)

{
  return known_gettable_ctx_params_0;
}



undefined1 * fake_rand_query(undefined8 param_1,int param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  
  *param_3 = 0;
  puVar1 = fake_rand_rand;
  if (param_2 != 5) {
    puVar1 = (undefined1 *)0x0;
  }
  return puVar1;
}



undefined8
fake_rand_provider_init
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  uVar1 = OSSL_LIB_CTX_new();
  *param_4 = uVar1;
  uVar1 = test_ptr("test/testutil/fake_random.c",0xa8,"*provctx = OSSL_LIB_CTX_new()",uVar1);
  if ((int)uVar1 != 0) {
    *param_3 = fake_rand_method;
    uVar1 = 1;
  }
  return uVar1;
}



bool fake_rand_get_ctx_params(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = OSSL_PARAM_locate(param_2,"state");
  if ((lVar2 != 0) && (iVar1 = OSSL_PARAM_set_int(lVar2,*(undefined4 *)(param_1 + 8)), iVar1 == 0))
  {
    return false;
  }
  lVar2 = OSSL_PARAM_locate(param_2,"strength");
  if ((lVar2 != 0) && (iVar1 = OSSL_PARAM_set_int(lVar2,0x100), iVar1 == 0)) {
    return false;
  }
  lVar2 = OSSL_PARAM_locate(param_2,"max_request");
  if (lVar2 == 0) {
    return true;
  }
  iVar1 = OSSL_PARAM_set_size_t(lVar2,0x7fffffff);
  return iVar1 != 0;
}



void fake_rand_freectx(void *param_1)

{
  CRYPTO_free(param_1);
  return;
}



void fake_rand_newctx(void)

{
  long lVar1;
  
  lVar1 = CRYPTO_zalloc(0x20,"test/testutil/fake_random.c",0x26);
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 8) = 0;
  }
  return;
}



undefined8 fake_rand_generate(undefined8 *param_1,long param_2,ulong param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  undefined4 local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((code *)*param_1 == (code *)0x0) {
    if (param_3 != 0) {
      do {
        local_24 = test_random();
        uVar2 = 4;
        if (param_3 < 5) {
          uVar2 = param_3;
        }
        if ((uint)uVar2 != 0) {
          uVar4 = 0;
          do {
            uVar3 = (int)uVar4 + 1;
            *(undefined1 *)(param_2 + uVar4) = *(undefined1 *)((long)&local_24 + uVar4);
            uVar4 = (ulong)uVar3;
          } while (uVar3 < (uint)uVar2);
        }
        param_2 = param_2 + uVar2;
        param_3 = param_3 - uVar2;
      } while (param_3 != 0);
    }
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
  else if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010021e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)*param_1)(param_2,param_3,param_1[2],param_1[3]);
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 fake_rand_start(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  
  iVar2 = OSSL_PROVIDER_add_builtin(param_1,"fake-rand",fake_rand_provider_init);
  iVar2 = test_true("test/testutil/fake_random.c",0xc0,
                    "OSSL_PROVIDER_add_builtin(libctx, \"fake-rand\", fake_rand_provider_init)",
                    iVar2 != 0);
  if (iVar2 != 0) {
    iVar2 = RAND_set_DRBG_type(param_1,&_LC7,0,0,0);
    iVar2 = test_true("test/testutil/fake_random.c",0xc2,
                      "RAND_set_DRBG_type(libctx, \"fake\", NULL, NULL, NULL)",iVar2 != 0);
    if (iVar2 != 0) {
      uVar3 = OSSL_PROVIDER_try_load(param_1,"fake-rand",1);
      iVar2 = test_ptr("test/testutil/fake_random.c",0xc3,
                       "p = OSSL_PROVIDER_try_load(libctx, \"fake-rand\", 1)",uVar3);
      if (iVar2 != 0) {
        lVar4 = RAND_get0_primary(param_1);
        iVar2 = test_ptr("test/testutil/fake_random.c",0xb2,&_LC10,lVar4);
        if (iVar2 == 0) {
          test_info("test/testutil/fake_random.c",0xb3,"random: %s","primary");
        }
        else {
          lVar1 = *(long *)(lVar4 + 8);
          *(char **)(lVar1 + 0x10) = "primary";
          *(long *)(lVar1 + 0x18) = lVar4;
        }
        iVar2 = test_true("test/testutil/fake_random.c",199,
                          "check_rng(RAND_get0_primary(libctx), \"primary\")",iVar2 != 0);
        if (iVar2 != 0) {
          lVar4 = RAND_get0_private(param_1);
          iVar2 = test_ptr("test/testutil/fake_random.c",0xb2,&_LC10,lVar4);
          if (iVar2 == 0) {
            test_info("test/testutil/fake_random.c",0xb3,"random: %s","private");
          }
          else {
            lVar1 = *(long *)(lVar4 + 8);
            *(char **)(lVar1 + 0x10) = "private";
            *(long *)(lVar1 + 0x18) = lVar4;
          }
          iVar2 = test_true("test/testutil/fake_random.c",200,
                            "check_rng(RAND_get0_private(libctx), \"private\")",iVar2 != 0);
          if (iVar2 != 0) {
            lVar4 = RAND_get0_public(param_1);
            iVar2 = test_ptr("test/testutil/fake_random.c",0xb2,&_LC10,lVar4);
            if (iVar2 == 0) {
              test_info("test/testutil/fake_random.c",0xb3,"random: %s","public");
            }
            else {
              lVar1 = *(long *)(lVar4 + 8);
              *(long *)(lVar1 + 0x18) = lVar4;
              *(char **)(lVar1 + 0x10) = "public";
            }
            iVar2 = test_true("test/testutil/fake_random.c",0xc9,
                              "check_rng(RAND_get0_public(libctx), \"public\")",iVar2 != 0);
            if (iVar2 != 0) {
              return uVar3;
            }
          }
        }
        OSSL_PROVIDER_unload(uVar3);
      }
    }
  }
  return 0;
}



void fake_rand_finish(void)

{
  OSSL_PROVIDER_unload();
  return;
}



void fake_rand_set_callback(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    **(undefined8 **)(param_1 + 8) = param_2;
  }
  return;
}



void fake_rand_set_public_private_callbacks(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = RAND_get0_private();
  fake_rand_set_callback(uVar1,param_2);
  uVar1 = RAND_get0_public(param_1);
  fake_rand_set_callback(uVar1,param_2);
  return;
}


