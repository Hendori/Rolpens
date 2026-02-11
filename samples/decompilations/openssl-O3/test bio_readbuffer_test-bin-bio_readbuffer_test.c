
ulong test_readbuffer_file_bio(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  BIO *a;
  BIO_METHOD *type;
  BIO *b;
  BIO *append;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long in_FS_OFFSET;
  ulong local_1158;
  long local_1150;
  char local_1148 [256];
  undefined1 local_1048 [4104];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_1158 = 0;
  local_1150 = 0;
  a = BIO_new_file(filename,"r");
  iVar1 = test_ptr("test/bio_readbuffer_test.c",0x23,"in = BIO_new_file(filename, \"r\")",a);
  if (iVar1 == 0) {
    uVar6 = 0;
    b = (BIO *)0x0;
    append = (BIO *)0x0;
    goto LAB_0010008d;
  }
  uVar2 = BIO_read_ex(a,local_1048,0x1000,&local_1158);
  uVar3 = test_int_eq("test/bio_readbuffer_test.c",0x24,
                      "BIO_read_ex(in, expected, sizeof(expected), &readbytes)",&_LC3,uVar2,1);
  if ((uVar3 == 0) ||
     (uVar3 = test_int_lt("test/bio_readbuffer_test.c",0x26,"readbytes","sizeof(expected)",
                          local_1158 & 0xffffffff,0x1000), uVar3 == 0)) {
    uVar6 = (ulong)uVar3;
    b = (BIO *)0x0;
    append = (BIO *)0x0;
    goto LAB_0010008d;
  }
  BIO_free(a);
  type = (BIO_METHOD *)BIO_f_readbuffer();
  b = BIO_new(type);
  uVar3 = test_ptr("test/bio_readbuffer_test.c",0x2c,"readbuf_bio = BIO_new(BIO_f_readbuffer())",b);
  uVar6 = (ulong)uVar3;
  if (uVar3 == 0) {
    append = (BIO *)0x0;
    a = (BIO *)0x0;
    goto LAB_0010008d;
  }
  a = (BIO *)0x0;
  append = BIO_new_file(filename,"r");
  uVar3 = test_ptr("test/bio_readbuffer_test.c",0x2d,"in_bio = BIO_new_file(filename, \"r\")");
  uVar6 = (ulong)uVar3;
  if (uVar3 == 0) goto LAB_0010008d;
  append = BIO_push(b,append);
  uVar6 = BIO_ctrl(append,0x85,0,(void *)0x0);
  iVar1 = test_int_eq("test/bio_readbuffer_test.c",0x33,"BIO_tell(in_bio)",&_LC9,uVar6 & 0xffffffff,
                      0);
  if (iVar1 == 0) {
LAB_00100608:
    b = (BIO *)0x0;
    a = (BIO *)0x0;
    uVar6 = 0;
  }
  else {
    if (param_1 == 0) {
LAB_00100390:
      uVar6 = BIO_ctrl(append,0x80,0,(void *)0x0);
      iVar1 = test_int_eq("test/bio_readbuffer_test.c",0x4d,"BIO_seek(in_bio, 0)",&_LC3,
                          uVar6 & 0xffffffff,1);
      if (iVar1 == 0) goto LAB_00100608;
      uVar6 = 0;
      uVar2 = 8;
      while (lVar8 = BIO_ctrl(append,2,0,(void *)0x0), (int)lVar8 == 0) {
        uVar2 = BIO_read_ex(append,local_1148,uVar2,&local_1150);
        iVar1 = test_int_eq("test/bio_readbuffer_test.c",0x52,
                            "BIO_read_ex(in_bio, buf, len, &bytes)",&_LC3,uVar2,1);
        if (iVar1 == 0) break;
        iVar1 = test_mem_eq("test/bio_readbuffer_test.c",0x54,&_LC20,"expected + count",local_1148,
                            local_1150,local_1048 + uVar6,local_1150);
        if (iVar1 == 0) goto LAB_00100608;
        uVar6 = uVar6 + local_1150;
        uVar2 = 0xff;
      }
      iVar1 = test_int_eq("test/bio_readbuffer_test.c",0x59,"count","readbytes",uVar6 & 0xffffffff,
                          local_1158 & 0xffffffff);
      uVar6 = (ulong)(iVar1 != 0);
    }
    else {
      if (param_1 == 1) {
        iVar1 = 4;
        do {
          lVar8 = BIO_ctrl(append,2,0,(void *)0x0);
          if ((int)lVar8 != 0) break;
          iVar4 = BIO_gets(append,local_1148,0xff);
          if (iVar4 == 0) {
            BIO_ctrl(append,2,0,(void *)0x0);
            iVar4 = test_true("test/bio_readbuffer_test.c",0x3b,"BIO_eof(in_bio)");
joined_r0x001004f6:
            if (iVar4 == 0) goto LAB_00100608;
          }
          else {
            iVar5 = test_int_gt("test/bio_readbuffer_test.c",0x3e,&_LC11,&_LC9,iVar4,0);
            if (((iVar5 == 0) ||
                (iVar5 = test_int_le("test/bio_readbuffer_test.c",0x3f,&_LC11,"(int)sizeof(buf) - 1"
                                     ,iVar4), iVar5 == 0)) ||
               (iVar5 = test_true("test/bio_readbuffer_test.c",0x41,"buf[len] == 0"), iVar5 == 0))
            goto LAB_00100608;
            if (((1 < iVar4) && (lVar8 = BIO_ctrl(append,2,0,(void *)0x0), iVar4 != 0xfe)) &&
               ((int)lVar8 == 0)) {
              iVar4 = test_true("test/bio_readbuffer_test.c",0x46,"buf[len - 1] == \'\\n\'");
              goto joined_r0x001004f6;
            }
          }
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
        goto LAB_00100390;
      }
      do {
        while( true ) {
          uVar7 = BIO_ctrl(append,2,0,(void *)0x0);
          uVar6 = uVar7 & 0xffffffff;
          if ((int)uVar7 != 0) goto LAB_00100390;
          iVar1 = BIO_gets(append,local_1148,0xff);
          if (iVar1 == 0) break;
          iVar4 = test_int_gt("test/bio_readbuffer_test.c",0x3e,&_LC11,&_LC9,iVar1,0);
          if (((iVar4 == 0) ||
              (iVar4 = test_int_le("test/bio_readbuffer_test.c",0x3f,&_LC11,"(int)sizeof(buf) - 1",
                                   iVar1), iVar4 == 0)) ||
             ((iVar4 = test_true("test/bio_readbuffer_test.c",0x41,"buf[len] == 0"), iVar4 == 0 ||
              ((((1 < iVar1 && (lVar8 = BIO_ctrl(append,2,0,(void *)0x0), iVar1 != 0xfe)) &&
                ((int)lVar8 == 0)) &&
               (iVar1 = test_true("test/bio_readbuffer_test.c",0x46,"buf[len - 1] == \'\\n\'"),
               iVar1 == 0)))))) goto LAB_0010033b;
        }
        BIO_ctrl(append,2,0,(void *)0x0);
        iVar1 = test_true("test/bio_readbuffer_test.c",0x3b,"BIO_eof(in_bio)");
      } while (iVar1 != 0);
    }
LAB_0010033b:
    b = (BIO *)0x0;
    a = (BIO *)0x0;
  }
LAB_0010008d:
  BIO_free(a);
  BIO_free_all(append);
  BIO_free(b);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined1 * test_get_options(void)

{
  return test_options_0;
}



undefined8 setup_tests(void)

{
  int iVar1;
  
  do {
    iVar1 = opt_next();
    if (iVar1 == 0) {
      filename = test_get_argument(0);
      add_all_tests("test_readbuffer_file_bio",0x100000,3,1);
      return 1;
    }
  } while (iVar1 - 500U < 6);
  return 0;
}


