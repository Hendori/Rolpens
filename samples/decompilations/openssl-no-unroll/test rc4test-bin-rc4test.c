
void test_rc_bulk(void)

{
  long lVar1;
  int iVar2;
  uchar *puVar3;
  long in_FS_OFFSET;
  byte bVar4;
  SHA_CTX SStack_6c8;
  RC4_KEY local_668;
  uchar local_258 [32];
  uchar local_238 [520];
  long local_30;
  
  bVar4 = 0;
  iVar2 = 0xa0b;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  RC4_set_key(&local_668,(uint)keys,&DAT_0010065b);
  puVar3 = local_238;
  for (lVar1 = 0x40; lVar1 != 0; lVar1 = lVar1 + -1) {
    puVar3[0] = '\0';
    puVar3[1] = '\0';
    puVar3[2] = '\0';
    puVar3[3] = '\0';
    puVar3[4] = '\0';
    puVar3[5] = '\0';
    puVar3[6] = '\0';
    puVar3[7] = '\0';
    puVar3 = puVar3 + (ulong)bVar4 * -0x10 + 8;
  }
  *puVar3 = '\0';
  SHA1_Init(&SStack_6c8);
  do {
    RC4(&local_668,0x201,local_238,local_238);
    SHA1_Update(&SStack_6c8,local_238,0x201);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  SHA1_Final(local_258,&SStack_6c8);
  test_mem_eq("test/rc4test.c",0x79,&_LC1,"expected",local_258,0x14,expected_0);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void test_rc4_multi_call(int param_1)

{
  long lVar1;
  uchar *puVar2;
  size_t len;
  long in_FS_OFFSET;
  byte bVar3;
  RC4_KEY RStack_648;
  uchar local_238 [520];
  long local_30;
  
  bVar3 = 0;
  len = (size_t)param_1;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  RC4_set_key(&RStack_648,(uint)DAT_0010065a,&DAT_0010065b);
  puVar2 = local_238;
  for (lVar1 = 0x40; lVar1 != 0; lVar1 = lVar1 + -1) {
    puVar2[0] = '\0';
    puVar2[1] = '\0';
    puVar2[2] = '\0';
    puVar2[3] = '\0';
    puVar2[4] = '\0';
    puVar2[5] = '\0';
    puVar2[6] = '\0';
    puVar2[7] = '\0';
    puVar2 = puVar2 + (ulong)bVar3 * -0x10 + 8;
  }
  RC4(&RStack_648,len,data + 0x5a,local_238);
  RC4(&RStack_648,(long)(0x14 - param_1),data + len + 0x5a,local_238 + len);
  test_mem_eq("test/rc4test.c",0x61,&_LC4,"output[3]",local_238,0x15,0x1004da,0x15);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void test_rc4_encrypt(int param_1)

{
  long lVar1;
  long lVar2;
  ulong len;
  uchar *puVar3;
  long in_FS_OFFSET;
  byte bVar4;
  RC4_KEY RStack_648;
  uchar local_238 [520];
  long local_30;
  
  bVar4 = 0;
  lVar1 = (long)param_1 * 0x1e;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  RC4_set_key(&RStack_648,(uint)(byte)(&keys)[lVar1],(uchar *)(lVar1 + 0x100601));
  puVar3 = local_238;
  for (lVar2 = 0x40; lVar2 != 0; lVar2 = lVar2 + -1) {
    puVar3[0] = '\0';
    puVar3[1] = '\0';
    puVar3[2] = '\0';
    puVar3[3] = '\0';
    puVar3[4] = '\0';
    puVar3[5] = '\0';
    puVar3[6] = '\0';
    puVar3[7] = '\0';
    puVar3 = puVar3 + (ulong)bVar4 * -0x10 + 8;
  }
  len = (ulong)*(byte *)((long)&data_len + (long)param_1);
  RC4(&RStack_648,len,data + lVar1,local_238);
  lVar2 = len + 1;
  test_mem_eq("test/rc4test.c",0x48,&_LC4,"output[i]",local_238,lVar2,output + lVar1,lVar2);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void test_rc4_end_processing(int param_1)

{
  int iVar1;
  long lVar2;
  size_t len;
  uchar *puVar3;
  long in_FS_OFFSET;
  byte bVar4;
  RC4_KEY RStack_638;
  uchar local_228 [520];
  long local_20;
  
  bVar4 = 0;
  len = (size_t)param_1;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  RC4_set_key(&RStack_638,(uint)DAT_0010065a,&DAT_0010065b);
  puVar3 = local_228;
  for (lVar2 = 0x40; lVar2 != 0; lVar2 = lVar2 + -1) {
    puVar3[0] = '\0';
    puVar3[1] = '\0';
    puVar3[2] = '\0';
    puVar3[3] = '\0';
    puVar3[4] = '\0';
    puVar3[5] = '\0';
    puVar3[6] = '\0';
    puVar3[7] = '\0';
    puVar3 = puVar3 + (ulong)bVar4 * -0x10 + 8;
  }
  RC4(&RStack_638,len,data + 0x5a,local_228);
  iVar1 = test_mem_eq("test/rc4test.c",0x53,&_LC4,"output[3]",local_228,len,0x1004da,len);
  if (iVar1 != 0) {
    test_uchar_eq("test/rc4test.c",0x55,"obuf[i]",&_LC6,local_228[len],0);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 setup_tests(void)

{
  add_all_tests("test_rc4_encrypt",test_rc4_encrypt,6,1);
  add_all_tests("test_rc4_end_processing",test_rc4_end_processing,0x14,1);
  add_all_tests("test_rc4_multi_call",test_rc4_multi_call,0x14,1);
  add_test("test_rc_bulk",0x100000);
  return 1;
}


