
void test_idea_cfb64(void)

{
  undefined8 uVar1;
  int iVar2;
  long in_FS_OFFSET;
  undefined4 uVar4;
  ulong uVar3;
  undefined4 local_1fc;
  undefined1 local_1f8 [224];
  undefined1 local_118 [216];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  IDEA_set_encrypt_key(cfb_key,local_1f8);
  IDEA_set_decrypt_key(local_1f8,local_118);
  uVar1 = cfb_iv;
  local_1fc = 0;
  uVar4 = 0;
  cfb_tmp = cfb_iv;
  IDEA_cfb64_encrypt("Now is the time for all ",cfb_buf1,0xc,local_1f8,&cfb_tmp,&local_1fc,1);
  IDEA_cfb64_encrypt("ime for all ",0x1004ac,0xc,local_1f8,&cfb_tmp,&local_1fc,CONCAT44(uVar4,1));
  iVar2 = test_mem_eq("test/ideatest.c",0x6a,"cfb_cipher64","cfb_buf1",cfb_cipher64,0x18,cfb_buf1,
                      0x18);
  if (iVar2 != 0) {
    local_1fc = 0;
    uVar3 = 0;
    cfb_tmp = uVar1;
    IDEA_cfb64_encrypt(cfb_buf1,cfb_buf2,0xd,local_1f8,&cfb_tmp,&local_1fc,0);
    IDEA_cfb64_encrypt(0x1004ad,0x10046d,0xb,local_1f8,&cfb_tmp,&local_1fc,
                       uVar3 & 0xffffffff00000000);
    test_mem_eq("test/ideatest.c",0x73,"plain","cfb_buf2","Now is the time for all ",0x18,cfb_buf2,
                0x18);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void test_idea_cbc(void)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined1 auStack_1f8 [224];
  undefined1 local_118 [224];
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  IDEA_set_encrypt_key(&k,auStack_1f8);
  IDEA_set_decrypt_key(auStack_1f8,local_118);
  uVar1 = k;
  local_38 = k;
  IDEA_cbc_encrypt("Hello to all people out there",out,0x1e,auStack_1f8,&local_38,1);
  local_38 = uVar1;
  IDEA_cbc_encrypt(out,out,8,local_118,&local_38,0);
  IDEA_cbc_encrypt(0x1004e8,0x1004e8,0x16,local_118,&local_38,0);
  test_mem_eq("test/ideatest.c",0x59,&_LC6,&_LC5,"Hello to all people out there",0x1e,out);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void test_idea_ecb(void)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined1 local_1f8 [224];
  undefined1 local_118 [216];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  IDEA_set_encrypt_key(&k,local_1f8);
  IDEA_ecb_encrypt(&in,out,local_1f8);
  iVar1 = test_mem_eq("test/ideatest.c",0x44,&_LC5,&_LC7,out,8,&c,8);
  if (iVar1 != 0) {
    IDEA_set_decrypt_key(local_1f8,local_118);
    IDEA_ecb_encrypt(&c,out,local_118);
    test_mem_eq("test/ideatest.c",0x49,&_LC5,&_LC8,out,8,&in,8);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 setup_tests(void)

{
  add_test("test_idea_ecb",test_idea_ecb);
  add_test("test_idea_cbc",test_idea_cbc);
  add_test("test_idea_cfb64",0x100000);
  return 1;
}


