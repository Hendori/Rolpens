
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool test_sm4_ecb(void)

{
  int iVar1;
  int iVar2;
  long in_FS_OFFSET;
  bool bVar3;
  undefined1 auStack_c8 [128];
  undefined8 local_48;
  undefined8 uStack_40;
  long local_30;
  
  iVar2 = 999999;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  ossl_sm4_set_key(k_3,auStack_c8);
  local_48 = __LC5;
  uStack_40 = _UNK_00100238;
  ossl_sm4_encrypt(&local_48,&local_48,auStack_c8);
  iVar1 = test_mem_eq("test/sm4_internal_test.c",0x3d,"block","expected",&local_48,0x10,expected_1,
                      0x10);
  if (iVar1 != 0) {
    do {
      ossl_sm4_encrypt(&local_48,&local_48,auStack_c8);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    iVar1 = test_mem_eq("test/sm4_internal_test.c",0x43,"block","expected_iter",&local_48,0x10,
                        expected_iter_0,0x10);
    if (iVar1 != 0) {
      iVar1 = 1000000;
      do {
        ossl_sm4_decrypt(&local_48,&local_48,auStack_c8);
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
      iVar1 = test_mem_eq("test/sm4_internal_test.c",0x49,"block","input",&local_48,0x10,input_2,
                          0x10);
      bVar3 = iVar1 != 0;
      goto LAB_0010014b;
    }
  }
  bVar3 = false;
LAB_0010014b:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar3;
}



undefined8 setup_tests(void)

{
  add_test("test_sm4_ecb",0x100000);
  return 1;
}


