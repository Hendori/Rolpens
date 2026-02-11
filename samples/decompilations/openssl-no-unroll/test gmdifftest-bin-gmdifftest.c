
bool check_time(long param_1)

{
  int iVar1;
  long in_FS_OFFSET;
  bool bVar2;
  int local_f0;
  int local_ec;
  long local_e8;
  long local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined1 local_58 [24];
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  time(&local_e8);
  local_e0 = local_e8 + param_1;
  OPENSSL_gmtime(&local_e0,&local_98);
  OPENSSL_gmtime(&local_e8,&local_d8);
  uStack_40 = uStack_c0;
  local_28 = local_a8;
  local_38 = local_b8;
  uStack_30 = uStack_b0;
  iVar1 = OPENSSL_gmtime_adj(&local_d8,0,param_1);
  iVar1 = test_true("test/gmdifftest.c",0x23,"OPENSSL_gmtime_adj(&tm1, 0, offset)",iVar1 != 0);
  if (iVar1 != 0) {
    iVar1 = test_int_eq("test/gmdifftest.c",0x24,"tm1.tm_year","tm2.tm_year",uStack_c4,local_84);
    if (iVar1 != 0) {
      iVar1 = test_int_eq("test/gmdifftest.c",0x25,"tm1.tm_mon","tm2.tm_mon",local_c8,local_88);
      if (iVar1 != 0) {
        iVar1 = test_int_eq("test/gmdifftest.c",0x26,"tm1.tm_mday","tm2.tm_mday",uStack_cc,local_8c)
        ;
        if (iVar1 != 0) {
          iVar1 = test_int_eq("test/gmdifftest.c",0x27,"tm1.tm_hour","tm2.tm_hour",uStack_d0,
                              local_90);
          if (iVar1 != 0) {
            iVar1 = test_int_eq("test/gmdifftest.c",0x28,"tm1.tm_min","tm2.tm_min",uStack_d4,
                                local_94);
            if (iVar1 != 0) {
              iVar1 = test_int_eq("test/gmdifftest.c",0x29,"tm1.tm_sec","tm2.tm_sec",local_d8,
                                  local_98);
              if (iVar1 != 0) {
                iVar1 = OPENSSL_gmtime_diff(&local_f0,&local_ec,local_58,&local_d8);
                iVar1 = test_true("test/gmdifftest.c",0x2a,
                                  "OPENSSL_gmtime_diff(&off_day, &off_sec, &o1, &tm1)",iVar1 != 0);
                if (iVar1 != 0) {
                  iVar1 = test_long_eq("test/gmdifftest.c",0x2d,"offset","toffset",param_1,
                                       (long)local_ec + (long)local_f0 * 0x15180);
                  bVar2 = iVar1 != 0;
                  goto LAB_001000c6;
                }
              }
            }
          }
        }
      }
    }
  }
  bVar2 = false;
LAB_001000c6:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool test_gmtime(int param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = (long)param_1;
  iVar1 = check_time(lVar2);
  if ((((iVar1 != 0) && (iVar1 = check_time((long)-param_1), iVar1 != 0)) &&
      (iVar1 = check_time(lVar2 * 1000), iVar1 != 0)) &&
     ((iVar1 = check_time(lVar2 * -1000), iVar1 != 0 &&
      (iVar1 = check_time(lVar2 * 1000000), iVar1 != 0)))) {
    iVar1 = check_time(lVar2 * -1000000);
    return iVar1 != 0;
  }
  return false;
}



undefined8 setup_tests(void)

{
  add_all_tests("test_gmtime",test_gmtime,1000,0);
  return 1;
}


