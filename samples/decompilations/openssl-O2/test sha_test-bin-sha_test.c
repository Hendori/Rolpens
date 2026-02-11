
bool test_static_sha_common_constprop_0(undefined8 param_1,undefined8 param_2,code *param_3)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  bool bVar3;
  undefined1 local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = (*param_3)(&_LC0,3,local_88);
  iVar1 = test_ptr("test/sha_test.c",0x19,&_LC1,uVar2);
  if (iVar1 != 0) {
    iVar1 = test_ptr_eq("test/sha_test.c",0x1a,&_LC1,&_LC3,uVar2,local_88);
    if (iVar1 != 0) {
      iVar1 = test_mem_eq("test/sha_test.c",0x1b,&_LC1,&_LC4,uVar2,param_1,param_2,param_1,param_1);
      if (iVar1 != 0) {
        uVar2 = (*param_3)(&_LC0,3,0);
        iVar1 = test_ptr("test/sha_test.c",0x1e,&_LC1,uVar2);
        if (iVar1 != 0) {
          iVar1 = test_ptr_ne("test/sha_test.c",0x1f,&_LC1,&_LC3,uVar2,local_88);
          if (iVar1 != 0) {
            iVar1 = test_mem_eq("test/sha_test.c",0x20,&_LC1,&_LC4,uVar2,param_1,param_2,param_1);
            bVar3 = iVar1 != 0;
            goto LAB_0010006d;
          }
        }
      }
    }
  }
  bVar3 = false;
LAB_0010006d:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void test_static_sha1(void)

{
  test_static_sha_common_constprop_0(0x14,output_0,&SHA1);
  return;
}



void test_static_sha224(void)

{
  test_static_sha_common_constprop_0(0x1c,output_1,&SHA224);
  return;
}



void test_static_sha256(void)

{
  test_static_sha_common_constprop_0(0x20,output_2,&SHA256);
  return;
}



void test_static_sha384(void)

{
  test_static_sha_common_constprop_0(0x30,output_3,&SHA384);
  return;
}



void test_static_sha512(void)

{
  test_static_sha_common_constprop_0(0x40,output_4,&SHA512);
  return;
}



undefined8 setup_tests(void)

{
  add_test("test_static_sha1",test_static_sha1);
  add_test("test_static_sha224",test_static_sha224);
  add_test("test_static_sha256",test_static_sha256);
  add_test("test_static_sha384",test_static_sha384);
  add_test("test_static_sha512",test_static_sha512);
  return 1;
}


