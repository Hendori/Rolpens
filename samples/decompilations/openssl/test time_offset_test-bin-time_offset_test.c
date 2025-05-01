
undefined8 test_offset(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  size_t sVar4;
  undefined8 uVar5;
  long lVar6;
  long in_FS_OFFSET;
  int local_50;
  int local_4c;
  undefined8 local_48;
  char *local_40;
  undefined8 local_38;
  long local_30;
  
  lVar6 = (long)param_1 * 0x10;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = *(char **)(tests + lVar6);
  sVar4 = strlen(local_40);
  local_38 = 0;
  local_48 = CONCAT44(*(undefined4 *)(tests + lVar6 + 0xc),(int)sVar4);
  iVar2 = ASN1_TIME_diff(&local_50,&local_4c,the_asn1_time,&local_48);
  iVar2 = test_true("test/time_offset_test.c",0x4f,"ASN1_TIME_diff(&day, &sec, &the_asn1_time, &at)"
                    ,iVar2 != 0);
  if (iVar2 == 0) {
    test_info("test/time_offset_test.c",0x50,"ASN1_TIME_diff() failed for %s\n",local_40);
    uVar5 = 0;
  }
  else {
    iVar2 = 1;
    if ((local_50 < 1) && (iVar2 = -1, local_50 == 0)) {
      iVar2 = 1;
      if (local_4c < 1) {
        iVar2 = -(uint)(local_4c != 0);
      }
    }
    uVar1 = *(undefined4 *)(tests + (long)param_1 * 0x10 + 8);
    iVar2 = test_int_eq("test/time_offset_test.c",0x5e,"testdata->time_result",&_LC3,uVar1,iVar2);
    if (iVar2 == 0) {
      test_info("test/time_offset_test.c",0x5f,"ASN1_TIME_diff() test failed for %s day=%d sec=%d\n"
                ,local_40,local_50,local_4c);
      uVar5 = 0;
    }
    else {
      uVar3 = ASN1_TIME_cmp_time_t(&local_48,0x3a26ea00);
      iVar2 = test_int_eq("test/time_offset_test.c",0x65,"testdata->time_result",&_LC3,uVar1,uVar3);
      uVar5 = 1;
      if (iVar2 == 0) {
        test_info("test/time_offset_test.c",0x66,"ASN1_UTCTIME_cmp_time_t() test failed for %s\n",
                  local_40);
        uVar5 = 0;
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 setup_tests(void)

{
  add_all_tests("test_offset",0x100000,0x16,1);
  return 1;
}


