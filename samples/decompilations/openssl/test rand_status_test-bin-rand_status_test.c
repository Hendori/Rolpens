
void test_rand_status(void)

{
  int iVar1;
  
  iVar1 = RAND_status();
  test_true("test/rand_status_test.c",0x14,"RAND_status()",iVar1 != 0);
  return;
}



undefined8 setup_tests(void)

{
  add_test("test_rand_status",0x100000);
  return 1;
}


