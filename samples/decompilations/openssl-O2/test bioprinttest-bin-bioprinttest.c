
bool test_j(int param_1)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  char acStack_78 [88];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = (long)param_1 * 0x18;
  BIO_snprintf(acStack_78,0x4f,*(char **)(jf_data + lVar1 + 8),*(undefined8 *)(jf_data + lVar1));
  iVar2 = test_str_eq("test/bioprinttest.c",0xa4,"bio_buf","data->expected",acStack_78,
                      *(undefined8 *)(jf_data + lVar1 + 0x10));
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool test_zu(int param_1)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  char acStack_78 [88];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = (long)param_1 * 0x18;
  BIO_snprintf(acStack_78,0x4f,*(char **)(zu_data + lVar1 + 8),*(undefined8 *)(zu_data + lVar1));
  iVar2 = test_str_eq("test/bioprinttest.c",0x88,"bio_buf","data->expected",acStack_78,
                      *(undefined8 *)(zu_data + lVar1 + 0x10));
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4 dofptest(undefined8 param_1,int param_2,int param_3,undefined8 param_4,uint param_5)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  long in_FS_OFFSET;
  undefined4 local_f0;
  char local_e8 [80];
  char local_98 [88];
  long local_40;
  
  lVar3 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_f0 = 1;
LAB_001001a0:
  do {
    if ((int)param_5 < 0) {
      BIO_snprintf(local_e8,0x50,"%%%s%s",param_4,(&fspecs_0)[lVar3]);
    }
    else {
      BIO_snprintf(local_e8,0x50,"%%%s.%d%s",param_4,(ulong)param_5);
    }
    BIO_snprintf(local_98,0x50,local_e8,param_1);
    if (justprint == 0) {
      uVar1 = *(undefined8 *)(fpexpected + lVar3 * 8 + (long)param_2 * 400 + (long)param_3 * 0x28);
      iVar2 = test_str_eq("test/bioprinttest.c",0xd1,"fpexpected[test][sub][i]","result",uVar1,
                          local_98);
      if (iVar2 == 0) {
        test_info("test/bioprinttest.c",0xd2,"test %d format=|%s| exp=|%s|, ret=|%s|",param_2,
                  local_e8,uVar1,local_98);
        local_f0 = 0;
      }
    }
    else {
      if (lVar3 == 0) {
        lVar3 = 1;
        __printf_chk(2,"    /*  %d%d */ { \"%s\"",param_2,param_3,local_98);
        goto LAB_001001a0;
      }
      __printf_chk(2,", \"%s\"",local_98);
    }
    lVar3 = lVar3 + 1;
    if (lVar3 == 5) {
      if (justprint != 0) {
        puts(" },");
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return local_f0;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  } while( true );
}



bool test_fp(int param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int iVar3;
  bool bVar4;
  
  if (justprint != 0) {
    puts("    {");
  }
  uVar1 = *(undefined4 *)(pw_params + (long)param_1 * 0x10);
  uVar2 = *(undefined8 *)(pw_params + (long)param_1 * 0x10 + 8);
  iVar3 = dofptest(0,param_1,0,uVar2,uVar1);
  iVar3 = test_true("test/bioprinttest.c",0xe4,"dofptest(i, t++, 0.0, pwp->w, pwp->p)",iVar3 != 0);
  if (iVar3 != 0) {
    iVar3 = dofptest(_LC14,param_1,1,uVar2,uVar1);
    iVar3 = test_true("test/bioprinttest.c",0xe5,"dofptest(i, t++, 0.67, pwp->w, pwp->p)",iVar3 != 0
                     );
    if (iVar3 != 0) {
      iVar3 = dofptest(_LC16,param_1,2,uVar2,uVar1);
      iVar3 = test_true("test/bioprinttest.c",0xe6,"dofptest(i, t++, frac, pwp->w, pwp->p)",
                        iVar3 != 0);
      if (iVar3 != 0) {
        iVar3 = dofptest(_LC18,param_1,3,uVar2,uVar1);
        iVar3 = test_true("test/bioprinttest.c",0xe7,"dofptest(i, t++, frac / 1000, pwp->w, pwp->p)"
                          ,iVar3 != 0);
        if (iVar3 != 0) {
          iVar3 = dofptest(_LC20,param_1,4,uVar2,uVar1);
          iVar3 = test_true("test/bioprinttest.c",0xe8,
                            "dofptest(i, t++, frac / 10000, pwp->w, pwp->p)",iVar3 != 0);
          if (iVar3 != 0) {
            iVar3 = dofptest(_LC22,param_1,5,uVar2,uVar1);
            iVar3 = test_true("test/bioprinttest.c",0xe9,
                              "dofptest(i, t++, 6.0 + frac, pwp->w, pwp->p)",iVar3 != 0);
            if (iVar3 != 0) {
              iVar3 = dofptest(_LC24,param_1,6,uVar2,uVar1);
              iVar3 = test_true("test/bioprinttest.c",0xea,
                                "dofptest(i, t++, 66.0 + frac, pwp->w, pwp->p)",iVar3 != 0);
              if (iVar3 != 0) {
                iVar3 = dofptest(_LC26,param_1,7,uVar2,uVar1);
                iVar3 = test_true("test/bioprinttest.c",0xeb,
                                  "dofptest(i, t++, 666.0 + frac, pwp->w, pwp->p)",iVar3 != 0);
                if (iVar3 != 0) {
                  iVar3 = dofptest(_LC28,param_1,8,uVar2,uVar1);
                  iVar3 = test_true("test/bioprinttest.c",0xec,
                                    "dofptest(i, t++, 6666.0 + frac, pwp->w, pwp->p)",iVar3 != 0);
                  if (iVar3 != 0) {
                    iVar3 = dofptest(_LC30,param_1,9,uVar2,uVar1);
                    iVar3 = test_true("test/bioprinttest.c",0xed,
                                      "dofptest(i, t++, 66666.0 + frac, pwp->w, pwp->p)",iVar3 != 0)
                    ;
                    bVar4 = iVar3 != 0;
                    goto LAB_001003c1;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  bVar4 = false;
LAB_001003c1:
  if (justprint == 0) {
    return bVar4;
  }
  puts("    },");
  return bVar4;
}



bool test_big(void)

{
  int iVar1;
  long in_FS_OFFSET;
  char acStack_68 [88];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = BIO_snprintf(acStack_68,0x50,"%f\n",_LC33);
  iVar1 = test_int_eq("test/bioprinttest.c",0xf8,
                      "BIO_snprintf(buf, sizeof(buf), \"%f\\n\", 2 * (double)ULONG_MAX)",&_LC35,
                      iVar1,0xffffffff);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1 != 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined1 * test_get_options(void)

{
  return options_1;
}



undefined8 setup_tests(void)

{
  int iVar1;
  
  do {
    iVar1 = opt_next();
    while( true ) {
      if (iVar1 == 0) {
        add_test("test_big",test_big);
        add_all_tests("test_fp",test_fp,7,1);
        add_all_tests("test_zu",test_zu,4,1);
        add_all_tests("test_j",0x100000,4,1);
        return 1;
      }
      if (iVar1 != 1) break;
      justprint = 1;
      iVar1 = opt_next();
    }
  } while (iVar1 - 500U < 6);
  return 0;
}



void test_open_streams(void)

{
  return;
}



void test_adjust_streams_tap_level(undefined4 param_1)

{
  tap_level = param_1;
  return;
}



void test_close_streams(void)

{
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int test_vprintf_stdout(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = __fprintf_chk(_stdout,2,"%*s# ",tap_level,&_LC41);
  iVar2 = __vfprintf_chk(_stdout,2,param_1,param_2);
  return iVar2 + iVar1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int test_vprintf_stderr(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = __fprintf_chk(_stderr,2,"%*s# ",tap_level,&_LC41);
  iVar2 = __vfprintf_chk(_stderr,2,param_1,param_2);
  return iVar2 + iVar1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void test_flush_stdout(void)

{
  fflush(_stdout);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void test_flush_stderr(void)

{
  fflush(_stderr);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int test_vprintf_tapout(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = __fprintf_chk(_stdout,2,&_LC43,tap_level,&_LC41);
  iVar2 = __vfprintf_chk(_stdout,2,param_1,param_2);
  return iVar2 + iVar1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int test_vprintf_taperr(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = __fprintf_chk(_stderr,2,&_LC43,tap_level,&_LC41);
  iVar2 = __vfprintf_chk(_stderr,2,param_1,param_2);
  return iVar2 + iVar1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void test_flush_tapout(void)

{
  fflush(_stdout);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void test_flush_taperr(void)

{
  fflush(_stderr);
  return;
}


