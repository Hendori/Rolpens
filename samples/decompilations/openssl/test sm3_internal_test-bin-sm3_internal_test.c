
bool test_sm3(void)

{
  int iVar1;
  long in_FS_OFFSET;
  bool bVar2;
  undefined1 *puVar3;
  undefined1 auStack_148 [112];
  undefined1 local_d8 [112];
  undefined1 local_68 [32];
  undefined1 local_48 [40];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = ossl_sm3_init(auStack_148);
  iVar1 = test_true("test/sm3_internal_test.c",0x3e,"ossl_sm3_init(&ctx1)",iVar1 != 0);
  if (iVar1 != 0) {
    iVar1 = ossl_sm3_update(auStack_148,&input1_3,3);
    iVar1 = test_true("test/sm3_internal_test.c",0x3f,
                      "ossl_sm3_update(&ctx1, input1, sizeof(input1))",iVar1 != 0);
    if (iVar1 != 0) {
      iVar1 = ossl_sm3_final(local_68,auStack_148);
      iVar1 = test_true("test/sm3_internal_test.c",0x40,"ossl_sm3_final(md1, &ctx1)",iVar1 != 0);
      if (iVar1 != 0) {
        puVar3 = expected1_2;
        iVar1 = test_mem_eq("test/sm3_internal_test.c",0x41,&_LC5,"expected1",local_68,0x20,
                            expected1_2,0x20);
        if (iVar1 != 0) {
          iVar1 = ossl_sm3_init(local_d8,puVar3);
          iVar1 = test_true("test/sm3_internal_test.c",0x44,"ossl_sm3_init(&ctx2)",iVar1 != 0);
          if (iVar1 != 0) {
            iVar1 = ossl_sm3_update(local_d8,input2_1,0x40);
            iVar1 = test_true("test/sm3_internal_test.c",0x45,
                              "ossl_sm3_update(&ctx2, input2, sizeof(input2))",iVar1 != 0);
            if (iVar1 != 0) {
              iVar1 = ossl_sm3_final(local_48,local_d8);
              iVar1 = test_true("test/sm3_internal_test.c",0x46,"ossl_sm3_final(md2, &ctx2)",
                                iVar1 != 0);
              if (iVar1 != 0) {
                iVar1 = test_mem_eq("test/sm3_internal_test.c",0x47,&_LC10,"expected2",local_48,0x20
                                    ,expected2_0,0x20);
                bVar2 = iVar1 != 0;
                goto LAB_00100055;
              }
            }
          }
        }
      }
    }
  }
  bVar2 = false;
LAB_00100055:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 setup_tests(void)

{
  add_test("test_sm3",0x100000);
  return 1;
}


