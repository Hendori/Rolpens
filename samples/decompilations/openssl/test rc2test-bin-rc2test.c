
ulong test_rc2(int param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long in_FS_OFFSET;
  RC2_KEY RStack_158;
  uchar local_50 [8];
  uchar local_48 [8];
  long local_40;
  
  lVar3 = (long)param_1 * 8;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  RC2_set_key(&RStack_158,0x10,RC2key + (long)param_1 * 0x10,0);
  RC2_ecb_encrypt(RC2plain + lVar3,local_50,&RStack_158,1);
  iVar1 = test_mem_eq("test/rc2test.c",0x38,"&RC2cipher[n][0]",&_LC0,RC2cipher + lVar3,8,local_50,8)
  ;
  RC2_ecb_encrypt(local_50,local_48,&RStack_158,0);
  uVar2 = test_mem_eq("test/rc2test.c",0x3c,"&RC2plain[n][0]",&_LC3,RC2plain + lVar3,8,local_48,8);
  if ((int)uVar2 != 0) {
    uVar2 = (ulong)(iVar1 != 0);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 setup_tests(void)

{
  add_all_tests("test_rc2",0x100000,4,1);
  return 1;
}


