
bool test_time_to_timeval(void)

{
  int iVar1;
  
  iVar1 = test_long_eq("test/time_test.c",0x15,"tv.tv_sec",&_LC0,0,0);
  if (((((((iVar1 != 0) &&
          (iVar1 = test_long_eq("test/time_test.c",0x15,"tv.tv_usec",&_LC0,0,0), iVar1 != 0)) &&
         (iVar1 = test_true("test/time_test.c",0x19,"ossl_time_is_zero(ossl_time_from_timeval(tv))",
                            1), iVar1 != 0)) &&
        ((iVar1 = test_long_eq("test/time_test.c",0x1f,"tv.tv_sec",&_LC0,0,0), iVar1 != 0 &&
         (iVar1 = test_long_eq("test/time_test.c",0x1f,"tv.tv_usec",&_LC5,1,1), iVar1 != 0)))) &&
       (((iVar1 = test_long_eq("test/time_test.c",0x23,"tv.tv_sec",&_LC0,0,0), iVar1 != 0 &&
         ((iVar1 = test_long_eq("test/time_test.c",0x23,"tv.tv_usec",&_LC5,1,1), iVar1 != 0 &&
          (iVar1 = test_long_eq("test/time_test.c",0x27,"tv.tv_sec",&_LC0,0,0), iVar1 != 0)))) &&
        (iVar1 = test_long_eq("test/time_test.c",0x27,"tv.tv_usec",&_LC5,1,1), iVar1 != 0)))) &&
      ((((iVar1 = test_long_eq("test/time_test.c",0x2b,"tv.tv_sec",&_LC0,0,0), iVar1 != 0 &&
         (iVar1 = test_long_eq("test/time_test.c",0x2b,"tv.tv_usec",&_LC6,2,2), iVar1 != 0)) &&
        (iVar1 = test_long_eq("test/time_test.c",0x2f,"tv.tv_sec",&_LC0,0,0), iVar1 != 0)) &&
       (((iVar1 = test_long_eq("test/time_test.c",0x2f,"tv.tv_usec",&_LC7,999,999), iVar1 != 0 &&
         (iVar1 = test_long_eq("test/time_test.c",0x33,"tv.tv_sec",&_LC5,1,1), iVar1 != 0)) &&
        ((iVar1 = test_long_eq("test/time_test.c",0x33,"tv.tv_usec",&_LC0,0,0), iVar1 != 0 &&
         ((iVar1 = test_long_eq("test/time_test.c",0x37,"tv.tv_sec",&_LC5,1,1), iVar1 != 0 &&
          (iVar1 = test_long_eq("test/time_test.c",0x37,"tv.tv_usec",&_LC0,0,0), iVar1 != 0)))))))))
      ) && ((iVar1 = test_long_eq("test/time_test.c",0x3b,"tv.tv_sec",&_LC5,1,1), iVar1 != 0 &&
            ((iVar1 = test_long_eq("test/time_test.c",0x3b,"tv.tv_usec",&_LC0,0,0), iVar1 != 0 &&
             (iVar1 = test_long_eq("test/time_test.c",0x3f,"tv.tv_sec",&_LC5,1,1), iVar1 != 0))))))
  {
    iVar1 = test_long_eq("test/time_test.c",0x3f,"tv.tv_usec",&_LC5,1,1);
    return iVar1 != 0;
  }
  return false;
}



undefined8 setup_tests(void)

{
  add_test("test_time_to_timeval",0x100000);
  return 1;
}


