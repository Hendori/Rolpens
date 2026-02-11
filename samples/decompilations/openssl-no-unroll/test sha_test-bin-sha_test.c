
bool test_static_sha384(void)

{
  int iVar1;
  uchar *puVar2;
  long in_FS_OFFSET;
  bool bVar3;
  uchar auStack_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar2 = SHA384("abc",3,auStack_88);
  iVar1 = test_ptr("test/sha_test.c",0x19,&_LC1,puVar2);
  if (iVar1 != 0) {
    iVar1 = test_ptr_eq("test/sha_test.c",0x1a,&_LC1,&_LC3,puVar2,auStack_88);
    if (iVar1 != 0) {
      iVar1 = test_mem_eq("test/sha_test.c",0x1b,&_LC1,&_LC4,puVar2,0x30,output_3,0x30);
      if (iVar1 != 0) {
        puVar2 = SHA384("abc",3,(uchar *)0x0);
        iVar1 = test_ptr("test/sha_test.c",0x1e,&_LC1,puVar2);
        if (iVar1 != 0) {
          iVar1 = test_ptr_ne("test/sha_test.c",0x1f,&_LC1,&_LC3,puVar2,auStack_88);
          if (iVar1 != 0) {
            iVar1 = test_mem_eq("test/sha_test.c",0x20,&_LC1,&_LC4,puVar2,0x30,output_3,0x30);
            bVar3 = iVar1 != 0;
            goto LAB_00100066;
          }
        }
      }
    }
  }
  bVar3 = false;
LAB_00100066:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool test_static_sha512(void)

{
  int iVar1;
  uchar *puVar2;
  long in_FS_OFFSET;
  bool bVar3;
  uchar auStack_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar2 = SHA512("abc",3,auStack_88);
  iVar1 = test_ptr("test/sha_test.c",0x19,&_LC1,puVar2);
  if (iVar1 != 0) {
    iVar1 = test_ptr_eq("test/sha_test.c",0x1a,&_LC1,&_LC3,puVar2,auStack_88);
    if (iVar1 != 0) {
      iVar1 = test_mem_eq("test/sha_test.c",0x1b,&_LC1,&_LC4,puVar2,0x40,output_4,0x40);
      if (iVar1 != 0) {
        puVar2 = SHA512("abc",3,(uchar *)0x0);
        iVar1 = test_ptr("test/sha_test.c",0x1e,&_LC1,puVar2);
        if (iVar1 != 0) {
          iVar1 = test_ptr_ne("test/sha_test.c",0x1f,&_LC1,&_LC3,puVar2,auStack_88);
          if (iVar1 != 0) {
            iVar1 = test_mem_eq("test/sha_test.c",0x20,&_LC1,&_LC4,puVar2,0x40,output_4,0x40);
            bVar3 = iVar1 != 0;
            goto LAB_001001e6;
          }
        }
      }
    }
  }
  bVar3 = false;
LAB_001001e6:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool test_static_sha1(void)

{
  int iVar1;
  uchar *puVar2;
  long in_FS_OFFSET;
  bool bVar3;
  uchar auStack_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar2 = SHA1("abc",3,auStack_88);
  iVar1 = test_ptr("test/sha_test.c",0x19,&_LC1,puVar2);
  if (iVar1 != 0) {
    iVar1 = test_ptr_eq("test/sha_test.c",0x1a,&_LC1,&_LC3,puVar2,auStack_88);
    if (iVar1 != 0) {
      iVar1 = test_mem_eq("test/sha_test.c",0x1b,&_LC1,&_LC4,puVar2,0x14,output_0,0x14);
      if (iVar1 != 0) {
        puVar2 = SHA1("abc",3,(uchar *)0x0);
        iVar1 = test_ptr("test/sha_test.c",0x1e,&_LC1,puVar2);
        if (iVar1 != 0) {
          iVar1 = test_ptr_ne("test/sha_test.c",0x1f,&_LC1,&_LC3,puVar2,auStack_88);
          if (iVar1 != 0) {
            iVar1 = test_mem_eq("test/sha_test.c",0x20,&_LC1,&_LC4,puVar2,0x14,output_0,0x14);
            bVar3 = iVar1 != 0;
            goto LAB_00100366;
          }
        }
      }
    }
  }
  bVar3 = false;
LAB_00100366:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool test_static_sha224(void)

{
  int iVar1;
  uchar *puVar2;
  long in_FS_OFFSET;
  bool bVar3;
  uchar auStack_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar2 = SHA224("abc",3,auStack_88);
  iVar1 = test_ptr("test/sha_test.c",0x19,&_LC1,puVar2);
  if (iVar1 != 0) {
    iVar1 = test_ptr_eq("test/sha_test.c",0x1a,&_LC1,&_LC3,puVar2,auStack_88);
    if (iVar1 != 0) {
      iVar1 = test_mem_eq("test/sha_test.c",0x1b,&_LC1,&_LC4,puVar2,0x1c,output_1,0x1c);
      if (iVar1 != 0) {
        puVar2 = SHA224("abc",3,(uchar *)0x0);
        iVar1 = test_ptr("test/sha_test.c",0x1e,&_LC1,puVar2);
        if (iVar1 != 0) {
          iVar1 = test_ptr_ne("test/sha_test.c",0x1f,&_LC1,&_LC3,puVar2,auStack_88);
          if (iVar1 != 0) {
            iVar1 = test_mem_eq("test/sha_test.c",0x20,&_LC1,&_LC4,puVar2,0x1c,output_1,0x1c);
            bVar3 = iVar1 != 0;
            goto LAB_001004e6;
          }
        }
      }
    }
  }
  bVar3 = false;
LAB_001004e6:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool test_static_sha256(void)

{
  int iVar1;
  uchar *puVar2;
  long in_FS_OFFSET;
  bool bVar3;
  uchar auStack_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar2 = SHA256("abc",3,auStack_88);
  iVar1 = test_ptr("test/sha_test.c",0x19,&_LC1,puVar2);
  if (iVar1 != 0) {
    iVar1 = test_ptr_eq("test/sha_test.c",0x1a,&_LC1,&_LC3,puVar2,auStack_88);
    if (iVar1 != 0) {
      iVar1 = test_mem_eq("test/sha_test.c",0x1b,&_LC1,&_LC4,puVar2,0x20,output_2,0x20);
      if (iVar1 != 0) {
        puVar2 = SHA256("abc",3,(uchar *)0x0);
        iVar1 = test_ptr("test/sha_test.c",0x1e,&_LC1,puVar2);
        if (iVar1 != 0) {
          iVar1 = test_ptr_ne("test/sha_test.c",0x1f,&_LC1,&_LC3,puVar2,auStack_88);
          if (iVar1 != 0) {
            iVar1 = test_mem_eq("test/sha_test.c",0x20,&_LC1,&_LC4,puVar2,0x20,output_2,0x20);
            bVar3 = iVar1 != 0;
            goto LAB_00100666;
          }
        }
      }
    }
  }
  bVar3 = false;
LAB_00100666:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 setup_tests(void)

{
  add_test("test_static_sha1",test_static_sha1);
  add_test("test_static_sha224",test_static_sha224);
  add_test("test_static_sha256",test_static_sha256);
  add_test("test_static_sha384",0x100000);
  add_test("test_static_sha512",test_static_sha512);
  return 1;
}


