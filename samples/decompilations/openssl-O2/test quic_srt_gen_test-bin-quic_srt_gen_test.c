
undefined8 test_srt_gen(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long in_FS_OFFSET;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  long local_40;
  
  lVar4 = (long)param_1 * 0x38;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = ossl_quic_srt_gen_new
                    (0,0,*(undefined8 *)(tests + lVar4),*(undefined8 *)(tests + lVar4 + 8));
  iVar1 = test_ptr("test/quic_srt_gen_test.c",0x39,
                   "srt_gen = ossl_quic_srt_gen_new(NULL, NULL, t->key, t->key_len)",uVar2);
  if (iVar1 != 0) {
    lVar5 = 2;
    while( true ) {
      local_58 = 0xffffffff;
      uStack_54 = 0xffffffff;
      uStack_50 = 0xffffffff;
      uStack_4c = 0xffffffff;
      iVar1 = ossl_quic_srt_gen_calculate_token(uVar2,lVar4 + 0x100250,&local_58);
      iVar1 = test_true("test/quic_srt_gen_test.c",0x40,
                        "ossl_quic_srt_gen_calculate_token(srt_gen, &t->dcid, &token)",iVar1 != 0);
      if (iVar1 == 0) break;
      iVar1 = test_mem_eq("test/quic_srt_gen_test.c",0x44,"token.token","&t->expected",&local_58,
                          0x10,lVar4 + 0x100265,0x10);
      if (iVar1 == 0) break;
      if (lVar5 == 1) {
        uVar3 = 1;
        goto LAB_00100102;
      }
      lVar5 = 1;
    }
  }
  uVar3 = 0;
LAB_00100102:
  ossl_quic_srt_gen_free(uVar2);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 setup_tests(void)

{
  add_all_tests("test_srt_gen",0x100000,3,1);
  return 1;
}


