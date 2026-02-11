
undefined4 test_cha_cha_internal(int param_1)

{
  int iVar1;
  ulong uVar2;
  undefined4 uVar3;
  ulong uVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  undefined1 local_448 [1032];
  long local_40;
  
  uVar4 = (ulong)(param_1 + 1U);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  __memset_chk(local_448,0,uVar4,0x400);
  uVar2 = 0x400;
  if (0x3ff < uVar4) {
    uVar2 = uVar4;
  }
  uVar5 = 0;
  __memcpy_chk(local_448 + uVar4,&ref + uVar4,0x400 - uVar4,uVar2 - uVar4);
  ChaCha20_ctr32(local_448,local_448,uVar4,key,ivp);
  do {
    iVar1 = test_uchar_eq("test/chacha_internal_test.c",0xaf,"buf[j]","ref[j]",local_448[uVar5],
                          (&ref)[uVar5]);
    if (iVar1 == 0) {
      test_info("test/chacha_internal_test.c",0xb0,"%d failed at %u (%02x)\n",param_1 + 1U,
                uVar5 & 0xffffffff,local_448[uVar5 & 0xffffffff]);
      uVar3 = 0;
      goto LAB_0010010e;
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 != 0x400);
  uVar3 = 1;
LAB_0010010e:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 setup_tests(void)

{
  add_all_tests("test_cha_cha_internal",0x100000,0x400,1);
  return 1;
}


