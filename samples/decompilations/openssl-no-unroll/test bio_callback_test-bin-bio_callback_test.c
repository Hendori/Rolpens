
long my_bio_cb_ex(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5,undefined8 param_6,int param_7,undefined8 *param_8)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (my_param_count < 5) {
    lVar1 = (long)my_param_count;
    (&my_param_b)[lVar1] = param_1;
    (&my_param_oper)[lVar1] = param_2;
    (&my_param_argp)[lVar1] = param_3;
    (&my_param_argi)[lVar1] = param_5;
    (&my_param_argl)[lVar1] = param_6;
    lVar2 = (long)param_7;
    *(long *)(&my_param_ret + lVar1 * 2) = lVar2;
    (&my_param_len)[lVar1] = param_4;
    uVar3 = 0;
    if (param_8 != (undefined8 *)0x0) {
      uVar3 = *param_8;
    }
    my_param_count = my_param_count + 1;
    *(undefined8 *)(my_param_processed + lVar1 * 8) = uVar3;
  }
  else {
    lVar2 = -1;
  }
  return lVar2;
}



undefined8
my_bio_callback(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
               undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  
  if (my_param_count < 5) {
    lVar1 = (long)my_param_count;
    (&my_param_b)[lVar1] = param_1;
    (&my_param_oper)[lVar1] = param_2;
    (&my_param_argp)[lVar1] = param_3;
    (&my_param_argi)[lVar1] = param_4;
    (&my_param_argl)[lVar1] = param_5;
    *(undefined8 *)(&my_param_ret + lVar1 * 2) = param_6;
    my_param_count = my_param_count + 1;
    return param_6;
  }
  return 0xffffffffffffffff;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool test_bio_callback(void)

{
  char *data;
  int iVar1;
  BIO_METHOD *type;
  BIO *b;
  long in_FS_OFFSET;
  bool bVar2;
  undefined4 local_63;
  undefined1 local_5f;
  char local_5e [30];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  builtin_strncpy(local_5e,"hello",6);
  local_63 = 0x74736574;
  local_5f = 0;
  my_param_count = 0;
  type = BIO_s_mem();
  b = BIO_new(type);
  if (b == (BIO *)0x0) {
LAB_001001db:
    BIO_free(b);
  }
  else {
    BIO_set_callback(b,my_bio_callback);
    iVar1 = BIO_write(b,&local_63,4);
    iVar1 = test_int_eq("test/bio_callback_test.c",0xec,&_LC1,"test1len",iVar1,4);
    if (iVar1 == 0) goto LAB_001001db;
    iVar1 = test_int_eq("test/bio_callback_test.c",0xed,"my_param_count",&_LC3,my_param_count,2);
    if (iVar1 == 0) goto LAB_001001db;
    iVar1 = test_ptr_eq("test/bio_callback_test.c",0xee,"my_param_b[0]",&_LC5,my_param_b,b);
    if (iVar1 == 0) goto LAB_001001db;
    iVar1 = test_int_eq("test/bio_callback_test.c",0xef,"my_param_oper[0]","BIO_CB_WRITE",
                        my_param_oper,3);
    if (iVar1 == 0) goto LAB_001001db;
    iVar1 = test_ptr_eq("test/bio_callback_test.c",0xf0,"my_param_argp[0]","test1",my_param_argp,
                        &local_63);
    if (iVar1 == 0) goto LAB_001001db;
    iVar1 = test_int_eq("test/bio_callback_test.c",0xf1,"my_param_argi[0]","test1len",my_param_argi,
                        4);
    if (iVar1 == 0) goto LAB_001001db;
    iVar1 = test_long_eq("test/bio_callback_test.c",0xf2,"my_param_argl[0]",&_LC12,my_param_argl,0);
    if (iVar1 == 0) goto LAB_001001db;
    iVar1 = test_long_eq("test/bio_callback_test.c",0xf3,"my_param_ret[0]",&_LC14,_my_param_ret,1);
    if (iVar1 == 0) goto LAB_001001db;
    iVar1 = test_ptr_eq("test/bio_callback_test.c",0xf4,"my_param_b[1]",&_LC5,DAT_00102528,b);
    if (iVar1 == 0) goto LAB_001001db;
    iVar1 = test_int_eq("test/bio_callback_test.c",0xf5,"my_param_oper[1]",
                        "BIO_CB_WRITE | BIO_CB_RETURN",DAT_001024f4,0x83);
    if (iVar1 == 0) goto LAB_001001db;
    iVar1 = test_ptr_eq("test/bio_callback_test.c",0xf6,"my_param_argp[1]","test1",DAT_001024c8,
                        &local_63);
    if (iVar1 == 0) goto LAB_001001db;
    iVar1 = test_int_eq("test/bio_callback_test.c",0xf7,"my_param_argi[1]","test1len",DAT_00102494,4
                       );
    if (iVar1 == 0) goto LAB_001001db;
    iVar1 = test_long_eq("test/bio_callback_test.c",0xf8,"my_param_argl[1]",&_LC12,DAT_00102468,0);
    if (iVar1 == 0) goto LAB_001001db;
    iVar1 = test_long_eq("test/bio_callback_test.c",0xf9,"my_param_ret[1]","(long)test1len",
                         _DAT_00102428,4);
    if (iVar1 == 0) goto LAB_001001db;
    data = local_5e + 6;
    my_param_count = 0;
    iVar1 = BIO_read(b,data,0x10);
    iVar1 = test_mem_eq("test/bio_callback_test.c",0xfe,&_LC24,"test1",data,(long)iVar1,&local_63,4)
    ;
    if (iVar1 == 0) goto LAB_001001db;
    iVar1 = test_int_eq("test/bio_callback_test.c",0xff,"my_param_count",&_LC3,my_param_count,2);
    if (iVar1 == 0) goto LAB_001001db;
    iVar1 = test_ptr_eq("test/bio_callback_test.c",0x100,"my_param_b[0]",&_LC5,my_param_b,b);
    if (iVar1 == 0) goto LAB_001001db;
    iVar1 = test_int_eq("test/bio_callback_test.c",0x101,"my_param_oper[0]","BIO_CB_READ",
                        my_param_oper,2);
    if (iVar1 == 0) goto LAB_001001db;
    iVar1 = test_ptr_eq("test/bio_callback_test.c",0x102,"my_param_argp[0]",&_LC24,my_param_argp,
                        data);
    if (iVar1 == 0) goto LAB_001001db;
    iVar1 = test_int_eq("test/bio_callback_test.c",0x103,"my_param_argi[0]","sizeof(buf)",
                        my_param_argi,0x10);
    if (iVar1 == 0) goto LAB_001001db;
    iVar1 = test_long_eq("test/bio_callback_test.c",0x104,"my_param_argl[0]",&_LC12,my_param_argl,0)
    ;
    if (iVar1 == 0) goto LAB_001001db;
    iVar1 = test_long_eq("test/bio_callback_test.c",0x105,"my_param_ret[0]",&_LC14,_my_param_ret,1);
    if (iVar1 == 0) goto LAB_001001db;
    iVar1 = test_ptr_eq("test/bio_callback_test.c",0x106,"my_param_b[1]",&_LC5,DAT_00102528,b);
    if (iVar1 == 0) goto LAB_001001db;
    iVar1 = test_int_eq("test/bio_callback_test.c",0x107,"my_param_oper[1]",
                        "BIO_CB_READ | BIO_CB_RETURN",DAT_001024f4,0x82);
    if (iVar1 == 0) goto LAB_001001db;
    iVar1 = test_ptr_eq("test/bio_callback_test.c",0x108,"my_param_argp[1]",&_LC24,DAT_001024c8,data
                       );
    if (iVar1 == 0) goto LAB_001001db;
    iVar1 = test_int_eq("test/bio_callback_test.c",0x109,"my_param_argi[1]","sizeof(buf)",
                        DAT_00102494,0x10);
    if (iVar1 == 0) goto LAB_001001db;
    iVar1 = test_long_eq("test/bio_callback_test.c",0x10a,"my_param_argl[1]",&_LC12,DAT_00102468,0);
    if (iVar1 == 0) goto LAB_001001db;
    iVar1 = test_long_eq("test/bio_callback_test.c",0x10b,"my_param_ret[1]","(long)test1len",
                         _DAT_00102428,4);
    if (iVar1 == 0) goto LAB_001001db;
    my_param_count = 0;
    iVar1 = BIO_read(b,data,0x10);
    iVar1 = test_int_eq("test/bio_callback_test.c",0x111,&_LC1,&_LC28,iVar1,0xffffffff);
    if (iVar1 == 0) goto LAB_001001db;
    iVar1 = test_int_eq("test/bio_callback_test.c",0x112,"my_param_count",&_LC3,my_param_count,2);
    if (iVar1 == 0) goto LAB_001001db;
    iVar1 = test_ptr_eq("test/bio_callback_test.c",0x113,"my_param_b[0]",&_LC5,my_param_b,b);
    if (iVar1 == 0) goto LAB_001001db;
    iVar1 = test_int_eq("test/bio_callback_test.c",0x114,"my_param_oper[0]","BIO_CB_READ",
                        my_param_oper,2);
    if (iVar1 == 0) goto LAB_001001db;
    iVar1 = test_ptr_eq("test/bio_callback_test.c",0x115,"my_param_argp[0]",&_LC24,my_param_argp,
                        data);
    if (iVar1 == 0) goto LAB_001001db;
    iVar1 = test_int_eq("test/bio_callback_test.c",0x116,"my_param_argi[0]","sizeof(buf)",
                        my_param_argi,0x10);
    if (iVar1 == 0) goto LAB_001001db;
    iVar1 = test_long_eq("test/bio_callback_test.c",0x117,"my_param_argl[0]",&_LC12,my_param_argl,0)
    ;
    if (iVar1 == 0) goto LAB_001001db;
    iVar1 = test_long_eq("test/bio_callback_test.c",0x118,"my_param_ret[0]",&_LC14,_my_param_ret,1);
    if (iVar1 == 0) goto LAB_001001db;
    iVar1 = test_ptr_eq("test/bio_callback_test.c",0x119,"my_param_b[1]",&_LC5,DAT_00102528,b);
    if (iVar1 == 0) goto LAB_001001db;
    iVar1 = test_int_eq("test/bio_callback_test.c",0x11a,"my_param_oper[1]",
                        "BIO_CB_READ | BIO_CB_RETURN",DAT_001024f4,0x82);
    if (iVar1 == 0) goto LAB_001001db;
    iVar1 = test_ptr_eq("test/bio_callback_test.c",0x11b,"my_param_argp[1]",&_LC24,DAT_001024c8,data
                       );
    if (iVar1 == 0) goto LAB_001001db;
    iVar1 = test_int_eq("test/bio_callback_test.c",0x11c,"my_param_argi[1]","sizeof(buf)",
                        DAT_00102494,0x10);
    if (iVar1 == 0) goto LAB_001001db;
    iVar1 = test_long_eq("test/bio_callback_test.c",0x11d,"my_param_argl[1]",&_LC12,DAT_00102468,0);
    if (iVar1 == 0) goto LAB_001001db;
    iVar1 = test_long_eq("test/bio_callback_test.c",0x11e,"my_param_ret[1]",&_LC29,_DAT_00102428,
                         0xffffffffffffffff);
    if (iVar1 == 0) goto LAB_001001db;
    BIO_ctrl(b,0x82,0,(void *)0x0);
    my_param_count = 0;
    iVar1 = BIO_read(b,data,0x10);
    iVar1 = test_int_eq("test/bio_callback_test.c",0x125,&_LC1,&_LC30,iVar1,0);
    if (iVar1 == 0) goto LAB_001001db;
    iVar1 = test_int_eq("test/bio_callback_test.c",0x126,"my_param_count",&_LC3,my_param_count,2);
    if (iVar1 == 0) goto LAB_001001db;
    iVar1 = test_ptr_eq("test/bio_callback_test.c",0x127,"my_param_b[0]",&_LC5,my_param_b,b);
    if (iVar1 == 0) goto LAB_001001db;
    iVar1 = test_int_eq("test/bio_callback_test.c",0x128,"my_param_oper[0]","BIO_CB_READ",
                        my_param_oper,2);
    if (iVar1 == 0) goto LAB_001001db;
    iVar1 = test_ptr_eq("test/bio_callback_test.c",0x129,"my_param_argp[0]",&_LC24,my_param_argp,
                        data);
    if (iVar1 == 0) goto LAB_001001db;
    iVar1 = test_int_eq("test/bio_callback_test.c",0x12a,"my_param_argi[0]","sizeof(buf)",
                        my_param_argi,0x10);
    if (iVar1 == 0) goto LAB_001001db;
    iVar1 = test_long_eq("test/bio_callback_test.c",299,"my_param_argl[0]",&_LC12,my_param_argl,0);
    if (iVar1 == 0) goto LAB_001001db;
    iVar1 = test_long_eq("test/bio_callback_test.c",300,"my_param_ret[0]",&_LC14,_my_param_ret,1);
    if (iVar1 == 0) goto LAB_001001db;
    iVar1 = test_ptr_eq("test/bio_callback_test.c",0x12d,"my_param_b[1]",&_LC5,DAT_00102528,b);
    if (iVar1 == 0) goto LAB_001001db;
    iVar1 = test_int_eq("test/bio_callback_test.c",0x12e,"my_param_oper[1]",
                        "BIO_CB_READ | BIO_CB_RETURN",DAT_001024f4,0x82);
    if (iVar1 == 0) goto LAB_001001db;
    iVar1 = test_ptr_eq("test/bio_callback_test.c",0x12f,"my_param_argp[1]",&_LC24,DAT_001024c8,data
                       );
    if (iVar1 == 0) goto LAB_001001db;
    iVar1 = test_int_eq("test/bio_callback_test.c",0x130,"my_param_argi[1]","sizeof(buf)",
                        DAT_00102494,0x10);
    if (iVar1 == 0) goto LAB_001001db;
    iVar1 = test_long_eq("test/bio_callback_test.c",0x131,"my_param_argl[1]",&_LC12,DAT_00102468,0);
    if (iVar1 == 0) goto LAB_001001db;
    iVar1 = test_long_eq("test/bio_callback_test.c",0x132,"my_param_ret[1]",&_LC12,_DAT_00102428,0);
    if (iVar1 == 0) goto LAB_001001db;
    my_param_count = 0;
    iVar1 = BIO_puts(b,local_5e);
    iVar1 = test_int_eq("test/bio_callback_test.c",0x137,&_LC1,&_LC31,iVar1,5);
    if (iVar1 == 0) goto LAB_001001db;
    iVar1 = test_int_eq("test/bio_callback_test.c",0x138,"my_param_count",&_LC3,my_param_count,2);
    if (iVar1 == 0) goto LAB_001001db;
    iVar1 = test_ptr_eq("test/bio_callback_test.c",0x139,"my_param_b[0]",&_LC5,my_param_b,b);
    if (iVar1 == 0) goto LAB_001001db;
    iVar1 = test_int_eq("test/bio_callback_test.c",0x13a,"my_param_oper[0]","BIO_CB_PUTS",
                        my_param_oper,4);
    if (iVar1 == 0) goto LAB_001001db;
    iVar1 = test_ptr_eq("test/bio_callback_test.c",0x13b,"my_param_argp[0]","test2",my_param_argp,
                        local_5e);
    if (iVar1 == 0) goto LAB_001001db;
    iVar1 = test_int_eq("test/bio_callback_test.c",0x13c,"my_param_argi[0]",&_LC30,my_param_argi,0);
    if (iVar1 == 0) goto LAB_001001db;
    iVar1 = test_long_eq("test/bio_callback_test.c",0x13d,"my_param_argl[0]",&_LC12,my_param_argl,0)
    ;
    if (iVar1 == 0) goto LAB_001001db;
    iVar1 = test_long_eq("test/bio_callback_test.c",0x13e,"my_param_ret[0]",&_LC14,_my_param_ret,1);
    if (iVar1 == 0) goto LAB_001001db;
    iVar1 = test_ptr_eq("test/bio_callback_test.c",0x13f,"my_param_b[1]",&_LC5,DAT_00102528,b);
    if (iVar1 == 0) goto LAB_001001db;
    iVar1 = test_int_eq("test/bio_callback_test.c",0x140,"my_param_oper[1]",
                        "BIO_CB_PUTS | BIO_CB_RETURN",DAT_001024f4,0x84);
    if (iVar1 == 0) goto LAB_001001db;
    iVar1 = test_ptr_eq("test/bio_callback_test.c",0x141,"my_param_argp[1]","test2",DAT_001024c8,
                        local_5e);
    if (iVar1 == 0) goto LAB_001001db;
    iVar1 = test_int_eq("test/bio_callback_test.c",0x142,"my_param_argi[1]",&_LC30,DAT_00102494,0);
    if (iVar1 == 0) goto LAB_001001db;
    iVar1 = test_long_eq("test/bio_callback_test.c",0x143,"my_param_argl[1]",&_LC12,DAT_00102468,0);
    if (iVar1 == 0) goto LAB_001001db;
    iVar1 = test_long_eq("test/bio_callback_test.c",0x144,"my_param_ret[1]","(long)test2len",
                         _DAT_00102428,5);
    if (iVar1 == 0) goto LAB_001001db;
    my_param_count = 0;
    iVar1 = BIO_free(b);
    iVar1 = test_int_eq("test/bio_callback_test.c",0x149,&_LC1,&_LC36,iVar1,1);
    if (iVar1 != 0) {
      iVar1 = test_int_eq("test/bio_callback_test.c",0x14a,"my_param_count",&_LC36,my_param_count,1)
      ;
      if (iVar1 != 0) {
        iVar1 = test_ptr_eq("test/bio_callback_test.c",0x14b,"my_param_b[0]",&_LC5,my_param_b,b);
        if (iVar1 != 0) {
          iVar1 = test_int_eq("test/bio_callback_test.c",0x14c,"my_param_oper[0]","BIO_CB_FREE",
                              my_param_oper,1);
          if (iVar1 != 0) {
            iVar1 = test_ptr_eq("test/bio_callback_test.c",0x14d,"my_param_argp[0]",&_LC38,
                                my_param_argp,0);
            if (iVar1 != 0) {
              iVar1 = test_int_eq("test/bio_callback_test.c",0x14e,"my_param_argi[0]",&_LC30,
                                  my_param_argi,0);
              if (iVar1 != 0) {
                iVar1 = test_long_eq("test/bio_callback_test.c",0x14f,"my_param_argl[0]",&_LC12,
                                     my_param_argl,0);
                if (iVar1 != 0) {
                  iVar1 = test_long_eq("test/bio_callback_test.c",0x150,"my_param_ret[0]",&_LC14,
                                       _my_param_ret,1);
                  bVar2 = iVar1 != 0;
                  goto LAB_001001e5;
                }
              }
            }
          }
        }
      }
    }
  }
  bVar2 = false;
LAB_001001e5:
  _DAT_00102540 = 0;
  _DAT_001024e0 = 0;
  _my_param_b = (undefined1  [16])0x0;
  _DAT_00102530 = (undefined1  [16])0x0;
  _my_param_argp = (undefined1  [16])0x0;
  _DAT_001024d0 = (undefined1  [16])0x0;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool test_bio_callback_ex(void)

{
  char *data;
  int iVar1;
  BIO_METHOD *type;
  BIO *b;
  ulong uVar2;
  long in_FS_OFFSET;
  bool bVar3;
  undefined4 local_63;
  undefined1 local_5f;
  char local_5e [30];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  builtin_strncpy(local_5e,"hello",6);
  local_63 = 0x74736574;
  local_5f = 0;
  my_param_count = 0;
  type = BIO_s_mem();
  b = BIO_new(type);
  if (b == (BIO *)0x0) {
LAB_0010113b:
    BIO_free(b);
  }
  else {
    BIO_set_callback_ex(b,0x100000);
    iVar1 = BIO_write(b,&local_63,4);
    iVar1 = test_int_eq("test/bio_callback_test.c",0x40,&_LC1,"test1len",iVar1,4);
    if (iVar1 == 0) goto LAB_0010113b;
    iVar1 = test_int_eq("test/bio_callback_test.c",0x41,"my_param_count",&_LC3,my_param_count,2);
    if (iVar1 == 0) goto LAB_0010113b;
    iVar1 = test_ptr_eq("test/bio_callback_test.c",0x42,"my_param_b[0]",&_LC5,my_param_b,b);
    if (iVar1 == 0) goto LAB_0010113b;
    iVar1 = test_int_eq("test/bio_callback_test.c",0x43,"my_param_oper[0]","BIO_CB_WRITE",
                        my_param_oper,3);
    if (iVar1 == 0) goto LAB_0010113b;
    iVar1 = test_ptr_eq("test/bio_callback_test.c",0x44,"my_param_argp[0]","test1",my_param_argp,
                        &local_63);
    if (iVar1 == 0) goto LAB_0010113b;
    iVar1 = test_size_t_eq("test/bio_callback_test.c",0x45,"my_param_len[0]","test1len",my_param_len
                           ,4);
    if (iVar1 == 0) goto LAB_0010113b;
    iVar1 = test_long_eq("test/bio_callback_test.c",0x46,"my_param_argl[0]",&_LC12,my_param_argl,0);
    if (iVar1 == 0) goto LAB_0010113b;
    iVar1 = test_int_eq("test/bio_callback_test.c",0x47,"(int)my_param_ret[0]",&_LC36,my_param_ret,1
                       );
    if (iVar1 == 0) goto LAB_0010113b;
    iVar1 = test_ptr_eq("test/bio_callback_test.c",0x48,"my_param_b[1]",&_LC5,DAT_00102528,b);
    if (iVar1 == 0) goto LAB_0010113b;
    iVar1 = test_int_eq("test/bio_callback_test.c",0x49,"my_param_oper[1]",
                        "BIO_CB_WRITE | BIO_CB_RETURN",DAT_001024f4,0x83);
    if (iVar1 == 0) goto LAB_0010113b;
    iVar1 = test_ptr_eq("test/bio_callback_test.c",0x4a,"my_param_argp[1]","test1",DAT_001024c8,
                        &local_63);
    if (iVar1 == 0) goto LAB_0010113b;
    iVar1 = test_size_t_eq("test/bio_callback_test.c",0x4b,"my_param_len[1]","test1len",DAT_001023e8
                           ,4);
    if (iVar1 == 0) goto LAB_0010113b;
    iVar1 = test_long_eq("test/bio_callback_test.c",0x4c,"my_param_argl[1]",&_LC12,DAT_00102468,0);
    if (iVar1 == 0) goto LAB_0010113b;
    iVar1 = test_size_t_eq("test/bio_callback_test.c",0x4d,"my_param_processed[1]","test1len",
                           my_param_processed._8_8_,4);
    if (iVar1 == 0) goto LAB_0010113b;
    iVar1 = test_int_eq("test/bio_callback_test.c",0x4e,"(int)my_param_ret[1]",&_LC36,DAT_00102428,1
                       );
    if (iVar1 == 0) goto LAB_0010113b;
    data = local_5e + 6;
    my_param_count = 0;
    iVar1 = BIO_read(b,data,0x10);
    iVar1 = test_mem_eq("test/bio_callback_test.c",0x53,&_LC24,"test1",data,(long)iVar1,&local_63,4)
    ;
    if (iVar1 == 0) goto LAB_0010113b;
    iVar1 = test_int_eq("test/bio_callback_test.c",0x54,"my_param_count",&_LC3,my_param_count,2);
    if (iVar1 == 0) goto LAB_0010113b;
    iVar1 = test_ptr_eq("test/bio_callback_test.c",0x55,"my_param_b[0]",&_LC5,my_param_b,b);
    if (iVar1 == 0) goto LAB_0010113b;
    iVar1 = test_int_eq("test/bio_callback_test.c",0x56,"my_param_oper[0]","BIO_CB_READ",
                        my_param_oper,2);
    if (iVar1 == 0) goto LAB_0010113b;
    iVar1 = test_ptr_eq("test/bio_callback_test.c",0x57,"my_param_argp[0]",&_LC24,my_param_argp,data
                       );
    if (iVar1 == 0) goto LAB_0010113b;
    iVar1 = test_size_t_eq("test/bio_callback_test.c",0x58,"my_param_len[0]","sizeof(buf)",
                           my_param_len,0x10);
    if (iVar1 == 0) goto LAB_0010113b;
    iVar1 = test_long_eq("test/bio_callback_test.c",0x59,"my_param_argl[0]",&_LC12,my_param_argl,0);
    if (iVar1 == 0) goto LAB_0010113b;
    iVar1 = test_int_eq("test/bio_callback_test.c",0x5a,"(int)my_param_ret[0]",&_LC36,my_param_ret,1
                       );
    if (iVar1 == 0) goto LAB_0010113b;
    iVar1 = test_ptr_eq("test/bio_callback_test.c",0x5b,"my_param_b[1]",&_LC5,DAT_00102528,b);
    if (iVar1 == 0) goto LAB_0010113b;
    iVar1 = test_int_eq("test/bio_callback_test.c",0x5c,"my_param_oper[1]",
                        "BIO_CB_READ | BIO_CB_RETURN",DAT_001024f4,0x82);
    if (iVar1 == 0) goto LAB_0010113b;
    iVar1 = test_ptr_eq("test/bio_callback_test.c",0x5d,"my_param_argp[1]",&_LC24,DAT_001024c8,data)
    ;
    if (iVar1 == 0) goto LAB_0010113b;
    iVar1 = test_size_t_eq("test/bio_callback_test.c",0x5e,"my_param_len[1]","sizeof(buf)",
                           DAT_001023e8,0x10);
    if (iVar1 == 0) goto LAB_0010113b;
    iVar1 = test_long_eq("test/bio_callback_test.c",0x5f,"my_param_argl[1]",&_LC12,DAT_00102468,0);
    if (iVar1 == 0) goto LAB_0010113b;
    iVar1 = test_size_t_eq("test/bio_callback_test.c",0x60,"my_param_processed[1]","test1len",
                           my_param_processed._8_8_,4);
    if (iVar1 == 0) goto LAB_0010113b;
    iVar1 = test_int_eq("test/bio_callback_test.c",0x61,"(int)my_param_ret[1]",&_LC36,DAT_00102428,1
                       );
    if (iVar1 == 0) goto LAB_0010113b;
    my_param_count = 0;
    iVar1 = BIO_read(b,data,0x10);
    iVar1 = test_int_eq("test/bio_callback_test.c",0x67,&_LC1,&_LC28,iVar1,0xffffffff);
    if (iVar1 == 0) goto LAB_0010113b;
    iVar1 = test_int_eq("test/bio_callback_test.c",0x68,"my_param_count",&_LC3,my_param_count,2);
    if (iVar1 == 0) goto LAB_0010113b;
    iVar1 = test_ptr_eq("test/bio_callback_test.c",0x69,"my_param_b[0]",&_LC5,my_param_b,b);
    if (iVar1 == 0) goto LAB_0010113b;
    iVar1 = test_int_eq("test/bio_callback_test.c",0x6a,"my_param_oper[0]","BIO_CB_READ",
                        my_param_oper,2);
    if (iVar1 == 0) goto LAB_0010113b;
    iVar1 = test_ptr_eq("test/bio_callback_test.c",0x6b,"my_param_argp[0]",&_LC24,my_param_argp,data
                       );
    if (iVar1 == 0) goto LAB_0010113b;
    iVar1 = test_size_t_eq("test/bio_callback_test.c",0x6c,"my_param_len[0]","sizeof(buf)",
                           my_param_len,0x10);
    if (iVar1 == 0) goto LAB_0010113b;
    iVar1 = test_long_eq("test/bio_callback_test.c",0x6d,"my_param_argl[0]",&_LC12,my_param_argl,0);
    if (iVar1 == 0) goto LAB_0010113b;
    iVar1 = test_int_eq("test/bio_callback_test.c",0x6e,"(int)my_param_ret[0]",&_LC36,my_param_ret,1
                       );
    if (iVar1 == 0) goto LAB_0010113b;
    iVar1 = test_ptr_eq("test/bio_callback_test.c",0x6f,"my_param_b[1]",&_LC5,DAT_00102528,b);
    if (iVar1 == 0) goto LAB_0010113b;
    iVar1 = test_int_eq("test/bio_callback_test.c",0x70,"my_param_oper[1]",
                        "BIO_CB_READ | BIO_CB_RETURN",DAT_001024f4,0x82);
    if (iVar1 == 0) goto LAB_0010113b;
    iVar1 = test_ptr_eq("test/bio_callback_test.c",0x71,"my_param_argp[1]",&_LC24,DAT_001024c8,data)
    ;
    if (iVar1 == 0) goto LAB_0010113b;
    iVar1 = test_size_t_eq("test/bio_callback_test.c",0x72,"my_param_len[1]","sizeof(buf)",
                           DAT_001023e8,0x10);
    if (iVar1 == 0) goto LAB_0010113b;
    iVar1 = test_long_eq("test/bio_callback_test.c",0x73,"my_param_argl[1]",&_LC12,DAT_00102468,0);
    if (iVar1 == 0) goto LAB_0010113b;
    iVar1 = test_size_t_eq("test/bio_callback_test.c",0x74,"my_param_processed[1]",&_LC30,
                           my_param_processed._8_8_,0);
    if (iVar1 == 0) goto LAB_0010113b;
    iVar1 = test_int_eq("test/bio_callback_test.c",0x75,"(int)my_param_ret[1]",&_LC28,DAT_00102428,
                        0xffffffff);
    if (iVar1 == 0) goto LAB_0010113b;
    my_param_count = 0;
    uVar2 = BIO_ctrl(b,0x82,0,(void *)0x0);
    iVar1 = test_int_eq("test/bio_callback_test.c",0x7b,&_LC1,&_LC36,uVar2 & 0xffffffff,1);
    if (iVar1 == 0) goto LAB_0010113b;
    iVar1 = test_int_eq("test/bio_callback_test.c",0x7c,"my_param_count",&_LC3,my_param_count,2);
    if (iVar1 == 0) goto LAB_0010113b;
    iVar1 = test_ptr_eq("test/bio_callback_test.c",0x7d,"my_param_b[0]",&_LC5,my_param_b,b);
    if (iVar1 == 0) goto LAB_0010113b;
    iVar1 = test_int_eq("test/bio_callback_test.c",0x7e,"my_param_oper[0]","BIO_CB_CTRL",
                        my_param_oper,6);
    if (iVar1 == 0) goto LAB_0010113b;
    iVar1 = test_ptr_eq("test/bio_callback_test.c",0x7f,"my_param_argp[0]",&_LC38,my_param_argp,0);
    if (iVar1 == 0) goto LAB_0010113b;
    iVar1 = test_int_eq("test/bio_callback_test.c",0x80,"my_param_argi[0]",
                        "BIO_C_SET_BUF_MEM_EOF_RETURN",my_param_argi,0x82);
    if (iVar1 == 0) goto LAB_0010113b;
    iVar1 = test_long_eq("test/bio_callback_test.c",0x81,"my_param_argl[0]",&_LC12,my_param_argl,0);
    if (iVar1 == 0) goto LAB_0010113b;
    iVar1 = test_int_eq("test/bio_callback_test.c",0x82,"(int)my_param_ret[0]",&_LC36,my_param_ret,1
                       );
    if (iVar1 == 0) goto LAB_0010113b;
    iVar1 = test_ptr_eq("test/bio_callback_test.c",0x83,"my_param_b[1]",&_LC5,DAT_00102528,b);
    if (iVar1 == 0) goto LAB_0010113b;
    iVar1 = test_int_eq("test/bio_callback_test.c",0x84,"my_param_oper[1]",
                        "BIO_CB_CTRL | BIO_CB_RETURN",DAT_001024f4,0x86);
    if (iVar1 == 0) goto LAB_0010113b;
    iVar1 = test_ptr_eq("test/bio_callback_test.c",0x85,"my_param_argp[1]",&_LC38,DAT_001024c8,0);
    if (iVar1 == 0) goto LAB_0010113b;
    iVar1 = test_int_eq("test/bio_callback_test.c",0x86,"my_param_argi[1]",
                        "BIO_C_SET_BUF_MEM_EOF_RETURN",DAT_00102494,0x82);
    if (iVar1 == 0) goto LAB_0010113b;
    iVar1 = test_long_eq("test/bio_callback_test.c",0x87,"my_param_argl[1]",&_LC12,DAT_00102468,0);
    if (iVar1 == 0) goto LAB_0010113b;
    iVar1 = test_int_eq("test/bio_callback_test.c",0x88,"(int)my_param_ret[1]",&_LC36,DAT_00102428,1
                       );
    if (iVar1 == 0) goto LAB_0010113b;
    my_param_count = 0;
    iVar1 = BIO_read(b,data,0x10);
    iVar1 = test_int_eq("test/bio_callback_test.c",0x8c,&_LC1,&_LC30,iVar1,0);
    if (iVar1 == 0) goto LAB_0010113b;
    iVar1 = test_int_eq("test/bio_callback_test.c",0x8d,"my_param_count",&_LC3,my_param_count,2);
    if (iVar1 == 0) goto LAB_0010113b;
    iVar1 = test_ptr_eq("test/bio_callback_test.c",0x8e,"my_param_b[0]",&_LC5,my_param_b,b);
    if (iVar1 == 0) goto LAB_0010113b;
    iVar1 = test_int_eq("test/bio_callback_test.c",0x8f,"my_param_oper[0]","BIO_CB_READ",
                        my_param_oper,2);
    if (iVar1 == 0) goto LAB_0010113b;
    iVar1 = test_ptr_eq("test/bio_callback_test.c",0x90,"my_param_argp[0]",&_LC24,my_param_argp,data
                       );
    if (iVar1 == 0) goto LAB_0010113b;
    iVar1 = test_size_t_eq("test/bio_callback_test.c",0x91,"my_param_len[0]","sizeof(buf)",
                           my_param_len,0x10);
    if (iVar1 == 0) goto LAB_0010113b;
    iVar1 = test_long_eq("test/bio_callback_test.c",0x92,"my_param_argl[0]",&_LC12,my_param_argl,0);
    if (iVar1 == 0) goto LAB_0010113b;
    iVar1 = test_int_eq("test/bio_callback_test.c",0x93,"(int)my_param_ret[0]",&_LC36,my_param_ret,1
                       );
    if (iVar1 == 0) goto LAB_0010113b;
    iVar1 = test_ptr_eq("test/bio_callback_test.c",0x94,"my_param_b[1]",&_LC5,DAT_00102528,b);
    if (iVar1 == 0) goto LAB_0010113b;
    iVar1 = test_int_eq("test/bio_callback_test.c",0x95,"my_param_oper[1]",
                        "BIO_CB_READ | BIO_CB_RETURN",DAT_001024f4,0x82);
    if (iVar1 == 0) goto LAB_0010113b;
    iVar1 = test_ptr_eq("test/bio_callback_test.c",0x96,"my_param_argp[1]",&_LC24,DAT_001024c8,data)
    ;
    if (iVar1 == 0) goto LAB_0010113b;
    iVar1 = test_size_t_eq("test/bio_callback_test.c",0x97,"my_param_len[1]","sizeof(buf)",
                           DAT_001023e8,0x10);
    if (iVar1 == 0) goto LAB_0010113b;
    iVar1 = test_long_eq("test/bio_callback_test.c",0x98,"my_param_argl[1]",&_LC12,DAT_00102468,0);
    if (iVar1 == 0) goto LAB_0010113b;
    iVar1 = test_size_t_eq("test/bio_callback_test.c",0x99,"my_param_processed[1]",&_LC30,
                           my_param_processed._8_8_,0);
    if (iVar1 == 0) goto LAB_0010113b;
    iVar1 = test_int_eq("test/bio_callback_test.c",0x9a,"(int)my_param_ret[1]",&_LC30,DAT_00102428,0
                       );
    if (iVar1 == 0) goto LAB_0010113b;
    my_param_count = 0;
    iVar1 = BIO_puts(b,local_5e);
    iVar1 = test_int_eq("test/bio_callback_test.c",0x9f,&_LC1,&_LC31,iVar1,5);
    if (iVar1 == 0) goto LAB_0010113b;
    iVar1 = test_int_eq("test/bio_callback_test.c",0xa0,"my_param_count",&_LC3,my_param_count,2);
    if (iVar1 == 0) goto LAB_0010113b;
    iVar1 = test_ptr_eq("test/bio_callback_test.c",0xa1,"my_param_b[0]",&_LC5,my_param_b,b);
    if (iVar1 == 0) goto LAB_0010113b;
    iVar1 = test_int_eq("test/bio_callback_test.c",0xa2,"my_param_oper[0]","BIO_CB_PUTS",
                        my_param_oper,4);
    if (iVar1 == 0) goto LAB_0010113b;
    iVar1 = test_ptr_eq("test/bio_callback_test.c",0xa3,"my_param_argp[0]","test2",my_param_argp,
                        local_5e);
    if (iVar1 == 0) goto LAB_0010113b;
    iVar1 = test_int_eq("test/bio_callback_test.c",0xa4,"my_param_argi[0]",&_LC30,my_param_argi,0);
    if (iVar1 == 0) goto LAB_0010113b;
    iVar1 = test_long_eq("test/bio_callback_test.c",0xa5,"my_param_argl[0]",&_LC12,my_param_argl,0);
    if (iVar1 == 0) goto LAB_0010113b;
    iVar1 = test_int_eq("test/bio_callback_test.c",0xa6,"(int)my_param_ret[0]",&_LC36,my_param_ret,1
                       );
    if (iVar1 == 0) goto LAB_0010113b;
    iVar1 = test_ptr_eq("test/bio_callback_test.c",0xa7,"my_param_b[1]",&_LC5,DAT_00102528,b);
    if (iVar1 == 0) goto LAB_0010113b;
    iVar1 = test_int_eq("test/bio_callback_test.c",0xa8,"my_param_oper[1]",
                        "BIO_CB_PUTS | BIO_CB_RETURN",DAT_001024f4,0x84);
    if (iVar1 == 0) goto LAB_0010113b;
    iVar1 = test_ptr_eq("test/bio_callback_test.c",0xa9,"my_param_argp[1]","test2",DAT_001024c8,
                        local_5e);
    if (iVar1 == 0) goto LAB_0010113b;
    iVar1 = test_int_eq("test/bio_callback_test.c",0xaa,"my_param_argi[1]",&_LC30,DAT_00102494,0);
    if (iVar1 == 0) goto LAB_0010113b;
    iVar1 = test_long_eq("test/bio_callback_test.c",0xab,"my_param_argl[1]",&_LC12,DAT_00102468,0);
    if (iVar1 == 0) goto LAB_0010113b;
    iVar1 = test_size_t_eq("test/bio_callback_test.c",0xac,"my_param_processed[1]","test2len",
                           my_param_processed._8_8_,5);
    if (iVar1 == 0) goto LAB_0010113b;
    iVar1 = test_int_eq("test/bio_callback_test.c",0xad,"(int)my_param_ret[1]",&_LC36,DAT_00102428,1
                       );
    if (iVar1 == 0) goto LAB_0010113b;
    my_param_count = 0;
    iVar1 = BIO_free(b);
    iVar1 = test_int_eq("test/bio_callback_test.c",0xb2,&_LC1,&_LC36,iVar1,1);
    if (iVar1 != 0) {
      iVar1 = test_int_eq("test/bio_callback_test.c",0xb3,"my_param_count",&_LC36,my_param_count,1);
      if (iVar1 != 0) {
        iVar1 = test_ptr_eq("test/bio_callback_test.c",0xb4,"my_param_b[0]",&_LC5,my_param_b,b);
        if (iVar1 != 0) {
          iVar1 = test_int_eq("test/bio_callback_test.c",0xb5,"my_param_oper[0]","BIO_CB_FREE",
                              my_param_oper,1);
          if (iVar1 != 0) {
            iVar1 = test_ptr_eq("test/bio_callback_test.c",0xb6,"my_param_argp[0]",&_LC38,
                                my_param_argp,0);
            if (iVar1 != 0) {
              iVar1 = test_int_eq("test/bio_callback_test.c",0xb7,"my_param_argi[0]",&_LC30,
                                  my_param_argi,0);
              if (iVar1 != 0) {
                iVar1 = test_long_eq("test/bio_callback_test.c",0xb8,"my_param_argl[0]",&_LC12,
                                     my_param_argl,0);
                if (iVar1 != 0) {
                  iVar1 = test_int_eq("test/bio_callback_test.c",0xb9,"(int)my_param_ret[0]",&_LC36,
                                      my_param_ret,1);
                  bVar3 = iVar1 != 0;
                  goto LAB_00101145;
                }
              }
            }
          }
        }
      }
    }
  }
  bVar3 = false;
LAB_00101145:
  _DAT_00102540 = 0;
  _DAT_001024e0 = 0;
  _my_param_b = (undefined1  [16])0x0;
  _DAT_00102530 = (undefined1  [16])0x0;
  _my_param_argp = (undefined1  [16])0x0;
  _DAT_001024d0 = (undefined1  [16])0x0;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 setup_tests(void)

{
  add_test("test_bio_callback_ex",test_bio_callback_ex);
  add_test("test_bio_callback",test_bio_callback);
  return 1;
}


