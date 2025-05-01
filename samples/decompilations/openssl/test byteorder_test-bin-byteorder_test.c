
undefined8 test_byteorder(void)

{
  long lVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  short sVar5;
  long in_FS_OFFSET;
  
  lVar2 = DAT_001005ca;
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  sVar5 = (short)DAT_001005ca;
  iVar3 = test_true("test/byteorder_test.c",0x14,
                    "u16 == 0x0100U && memcmp(in, out, (size_t) 2) == 0 && restin == in + 2 && restout == out + 2"
                    ,sVar5 == 0x100);
  if (iVar3 == 0) {
    test_info("test/byteorder_test.c",0x18,"Failed byteorder.h u16 LE load/store");
  }
  else {
    iVar3 = test_true("test/byteorder_test.c",0x1f,
                      "u16 == 0x0001U && memcmp(in, out, (size_t) 2) == 0 && restin == in + 2 && restout == out + 2"
                      ,sVar5 == 0x100);
    if (iVar3 == 0) {
      test_info("test/byteorder_test.c",0x23,"Failed byteorder.h u16 BE load/store");
    }
    else {
      iVar3 = test_true("test/byteorder_test.c",0x2a,
                        "u32 == 0x03020100UL && memcmp(in, out, (size_t) 4) == 0 && restin == in + 4 && restout == out + 4"
                        ,(int)lVar2 == 0x3020100);
      if (iVar3 == 0) {
        test_info("test/byteorder_test.c",0x2e,"Failed byteorder.h u32 LE load/store");
      }
      else {
        iVar3 = test_true("test/byteorder_test.c",0x35,
                          "u32 == 0x00010203UL && memcmp(in, out, (size_t) 4) == 0 && restin == in + 4 && restout == out + 4"
                          ,(int)lVar2 == 0x3020100);
        if (iVar3 == 0) {
          test_info("test/byteorder_test.c",0x39,"Failed byteorder.h u32 BE load/store");
        }
        else {
          iVar3 = test_true("test/byteorder_test.c",0x40,
                            "u64 == 0x0706050403020100ULL && memcmp(in, out, (size_t) 8) == 0 && restin == in + 8 && restout == out + 8"
                            ,lVar2 == 0x706050403020100);
          if (iVar3 == 0) {
            test_info("test/byteorder_test.c",0x44,"Failed byteorder.h u64 LE load/store");
          }
          else {
            iVar3 = test_true("test/byteorder_test.c",0x4b,
                              "u64 == 0x0001020304050607ULL && memcmp(in, out, (size_t) 8) == 0 && restin == in + 8 && restout == out + 8"
                              ,lVar2 == 0x706050403020100);
            uVar4 = 1;
            if (iVar3 != 0) goto LAB_00100162;
            test_info("test/byteorder_test.c",0x4f,"Failed byteorder.h u64 BE load/store");
          }
        }
      }
    }
  }
  uVar4 = 0;
LAB_00100162:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 setup_tests(void)

{
  add_test("test_byteorder",0x100000);
  return 1;
}


