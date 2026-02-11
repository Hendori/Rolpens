
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong cast_test_iterations(void)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long in_FS_OFFSET;
  CAST_KEY local_188;
  CAST_KEY local_f8;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 auStack_50 [2];
  long local_40;
  
  lVar3 = 1000000;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = __LC5;
  uStack_60 = _UNK_00100498;
  local_58 = __LC5;
  auStack_50[0] = _UNK_00100498;
  do {
    CAST_set_key(&local_f8,0x10,(uchar *)&local_58);
    CAST_ecb_encrypt((uchar *)&local_68,(uchar *)&local_68,&local_f8,1);
    CAST_ecb_encrypt((uchar *)&uStack_60,(uchar *)&uStack_60,&local_f8,1);
    CAST_set_key(&local_188,0x10,(uchar *)&local_68);
    CAST_ecb_encrypt((uchar *)&local_58,(uchar *)&local_58,&local_188,1);
    CAST_ecb_encrypt((uchar *)auStack_50,(uchar *)auStack_50,&local_188,1);
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  uVar2 = test_mem_eq("test/casttest.c",0x68,"out_a",&_LC0,&local_68,0x10,c_a,0x10);
  if ((int)uVar2 != 0) {
    iVar1 = test_mem_eq("test/casttest.c",0x69,"out_b",&_LC3,&local_58,0x10,c_b,0x10);
    uVar2 = (ulong)(iVar1 != 0);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool cast_test_vector(int param_1)

{
  int len;
  int iVar1;
  int iVar2;
  long in_FS_OFFSET;
  CAST_KEY local_128;
  uchar local_98 [88];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  len = *(int *)(k_len + (long)param_1 * 4);
  CAST_set_key(&local_128,len,k);
  CAST_ecb_encrypt((uchar *)&in,local_98,&local_128,1);
  iVar1 = test_mem_eq("test/casttest.c",0x48,&_LC7,&_LC6,local_98,8,c + (long)param_1 * 8,8);
  if (iVar1 == 0) {
    test_info("test/casttest.c",0x49,"CAST_ENCRYPT iteration %d failed (len=%d)",param_1,len);
  }
  CAST_ecb_encrypt(local_98,local_98,&local_128,0);
  iVar2 = test_mem_eq("test/casttest.c",0x4e,&_LC7,&_LC9,local_98,8,&in,8);
  if (iVar2 == 0) {
    test_info("test/casttest.c",0x4f,"CAST_DECRYPT iteration %d failed (len=%d)",param_1,len);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2 != 0 && iVar1 != 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 setup_tests(void)

{
  add_all_tests("cast_test_vector",cast_test_vector,3,1);
  add_test("cast_test_iterations",0x100000);
  return 1;
}


