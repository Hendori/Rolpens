
long BIO_error_callback(undefined8 param_1,uint param_2)

{
  int in_stack_00000008;
  
  if ((param_2 & 0x82) == 0) {
    return (long)in_stack_00000008;
  }
  error_callback_fired = 1;
  return 0;
}



uint test_bio_i2d_ASN1_mime(void)

{
  int iVar1;
  uint uVar2;
  BIO_METHOD *pBVar3;
  BIO *bp;
  BIO *out;
  PKCS7 *p7;
  ASN1_ITEM *it;
  long in_FS_OFFSET;
  undefined8 local_58;
  char *local_50;
  undefined8 local_48;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  pBVar3 = BIO_s_mem();
  bp = BIO_new(pBVar3);
  iVar1 = test_ptr("test/bio_memleak_test.c",0xf5,"bio = BIO_new(BIO_s_mem())",bp);
  if (iVar1 == 0) {
    uVar2 = 0;
    p7 = (PKCS7 *)0x0;
    out = (BIO *)0x0;
  }
  else {
    local_50 = "BIO mime test\n";
    p7 = (PKCS7 *)0x0;
    local_58 = 0xf;
    local_48 = 0xf;
    BIO_ctrl(bp,0x72,0,&local_58);
    BIO_set_flags(bp,0x200);
    BIO_set_callback_ex(bp,0x100000);
    pBVar3 = BIO_s_mem();
    out = BIO_new(pBVar3);
    uVar2 = test_ptr("test/bio_memleak_test.c",0xff,"out = BIO_new(BIO_s_mem())",out);
    if (uVar2 != 0) {
      p7 = PKCS7_new();
      iVar1 = test_ptr("test/bio_memleak_test.c",0x101,"p7 = PKCS7_new()",p7);
      if (iVar1 != 0) {
        iVar1 = PKCS7_set_type(p7,0x15);
        iVar1 = test_true("test/bio_memleak_test.c",0x103,"PKCS7_set_type(p7, NID_pkcs7_data)",
                          iVar1 != 0);
        if (iVar1 != 0) {
          error_callback_fired = 0;
          it = (ASN1_ITEM *)PKCS7_it();
          iVar1 = i2d_ASN1_bio_stream(out,(ASN1_VALUE *)p7,bp,0x1080,it);
          iVar1 = test_false("test/bio_memleak_test.c",0x108,
                             "i2d_ASN1_bio_stream(out, (ASN1_VALUE*) p7, bio, SMIME_STREAM | SMIME_BINARY, ASN1_ITEM_rptr(PKCS7))"
                             ,iVar1 != 0);
          if (iVar1 != 0) {
            iVar1 = test_int_eq("test/bio_memleak_test.c",0x10d,"error_callback_fired",&_LC6,
                                error_callback_fired,1);
            uVar2 = (uint)(iVar1 != 0);
            goto LAB_0010008a;
          }
        }
      }
      uVar2 = 0;
    }
  }
LAB_0010008a:
  BIO_free(bp);
  BIO_free(out);
  PKCS7_free(p7);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool test_bio_memleak(void)

{
  int iVar1;
  BIO_METHOD *type;
  BIO *bp;
  long in_FS_OFFSET;
  bool bVar2;
  undefined8 local_b8;
  char *local_b0;
  undefined8 local_a8;
  undefined1 local_98 [104];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  type = BIO_s_mem();
  bp = BIO_new(type);
  iVar1 = test_ptr("test/bio_memleak_test.c",0x19,&_LC8,bp);
  if (iVar1 != 0) {
    local_b8 = 10;
    local_b0 = "BIO test\n";
    local_a8 = 10;
    BIO_ctrl(bp,0x72,0,&local_b8);
    BIO_set_flags(bp,0x200);
    iVar1 = BIO_read(bp,local_98,100);
    iVar1 = test_int_eq("test/bio_memleak_test.c",0x20,"BIO_read(bio, buf, sizeof(buf))",
                        "sizeof(str)",iVar1,10);
    if (iVar1 != 0) {
      iVar1 = test_mem_eq("test/bio_memleak_test.c",0x22,&_LC12,&_LC11,local_98,10,"BIO test\n",10);
      bVar2 = iVar1 != 0;
      goto LAB_00100288;
    }
  }
  bVar2 = false;
LAB_00100288:
  BIO_free(bp);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool test_bio_rdwr_rdonly(void)

{
  int iVar1;
  BIO_METHOD *type;
  BIO *bp;
  ulong uVar2;
  long in_FS_OFFSET;
  bool bVar3;
  undefined1 auStack_48 [24];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  type = BIO_s_mem();
  bp = BIO_new(type);
  iVar1 = test_ptr("test/bio_memleak_test.c",0x9b,&_LC8,bp);
  if (iVar1 != 0) {
    iVar1 = BIO_puts(bp,"Hello World\n");
    iVar1 = test_int_eq("test/bio_memleak_test.c",0x9d,"BIO_puts(bio, \"Hello World\\n\")",&_LC14,
                        iVar1,0xc);
    if (iVar1 != 0) {
      BIO_set_flags(bp,0x200);
      iVar1 = BIO_read(bp,auStack_48,0x10);
      iVar1 = test_int_eq("test/bio_memleak_test.c",0xa1,"BIO_read(bio, data, 16)",&_LC14,iVar1,0xc)
      ;
      if (iVar1 != 0) {
        iVar1 = test_mem_eq("test/bio_memleak_test.c",0xa3,&_LC18,"\"Hello World\\n\"",auStack_48,
                            0xc,"Hello World\n",0xc);
        if (iVar1 != 0) {
          uVar2 = BIO_ctrl(bp,1,0,(void *)0x0);
          iVar1 = test_int_gt("test/bio_memleak_test.c",0xa5,"BIO_reset(bio)",&_LC19,
                              uVar2 & 0xffffffff,0);
          if (iVar1 != 0) {
            BIO_clear_flags(bp,0x200);
            iVar1 = BIO_puts(bp,"Hi!\n");
            iVar1 = test_int_eq("test/bio_memleak_test.c",0xa9,"BIO_puts(bio, \"Hi!\\n\")",&_LC22,
                                iVar1,4);
            if (iVar1 != 0) {
              iVar1 = BIO_read(bp,auStack_48,0x10);
              iVar1 = test_int_eq("test/bio_memleak_test.c",0xab,"BIO_read(bio, data, 16)",&_LC24,
                                  iVar1,0x10);
              if (iVar1 != 0) {
                iVar1 = test_mem_eq("test/bio_memleak_test.c",0xae,&_LC18,"\"Hello World\\nHi!\\n\""
                                    ,auStack_48,0x10,"Hello World\nHi!\n",0x10);
                bVar3 = iVar1 != 0;
                goto LAB_001003d4;
              }
            }
          }
        }
      }
    }
  }
  bVar3 = false;
LAB_001003d4:
  BIO_free(bp);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool test_bio_nonclear_rst(void)

{
  int iVar1;
  BIO_METHOD *type;
  BIO *bp;
  ulong uVar2;
  long in_FS_OFFSET;
  bool bVar3;
  undefined1 auStack_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  type = BIO_s_mem();
  bp = BIO_new(type);
  iVar1 = test_ptr("test/bio_memleak_test.c",0xbf,&_LC8,bp);
  if (iVar1 != 0) {
    iVar1 = BIO_puts(bp,"Hello World\n");
    iVar1 = test_int_eq("test/bio_memleak_test.c",0xc1,"BIO_puts(bio, \"Hello World\\n\")",&_LC14,
                        iVar1,0xc);
    if (iVar1 != 0) {
      BIO_set_flags(bp,0x400);
      iVar1 = BIO_read(bp,auStack_58,0x10);
      iVar1 = test_int_eq("test/bio_memleak_test.c",0xc6,"BIO_read(bio, data, 16)",&_LC14,iVar1,0xc)
      ;
      if (iVar1 != 0) {
        iVar1 = test_mem_eq("test/bio_memleak_test.c",200,&_LC18,"\"Hello World\\n\"",auStack_58,0xc
                            ,"Hello World\n",0xc);
        if (iVar1 != 0) {
          uVar2 = BIO_ctrl(bp,1,0,(void *)0x0);
          iVar1 = test_int_gt("test/bio_memleak_test.c",0xca,"BIO_reset(bio)",&_LC19,
                              uVar2 & 0xffffffff,0);
          if (iVar1 != 0) {
            iVar1 = BIO_read(bp,auStack_58,0x10);
            iVar1 = test_int_eq("test/bio_memleak_test.c",0xcd,"BIO_read(bio, data, 16)",&_LC14,
                                iVar1,0xc);
            if (iVar1 != 0) {
              iVar1 = test_mem_eq("test/bio_memleak_test.c",0xcf,&_LC18,"\"Hello World\\n\"",
                                  auStack_58,0xc,"Hello World\n",0xc);
              if (iVar1 != 0) {
                BIO_clear_flags(bp,0x400);
                uVar2 = BIO_ctrl(bp,1,0,(void *)0x0);
                iVar1 = test_int_gt("test/bio_memleak_test.c",0xd3,"BIO_reset(bio)",&_LC19,
                                    uVar2 & 0xffffffff,0);
                if (iVar1 != 0) {
                  iVar1 = BIO_read(bp,auStack_58,0x10);
                  iVar1 = test_int_lt("test/bio_memleak_test.c",0xd6,"BIO_read(bio, data, 16)",&_LC6
                                      ,iVar1,1);
                  bVar3 = iVar1 != 0;
                  goto LAB_00100616;
                }
              }
            }
          }
        }
      }
    }
  }
  bVar3 = false;
LAB_00100616:
  BIO_free(bp);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool test_bio_rdonly_mem_buf(void)

{
  int iVar1;
  BIO *b;
  ulong uVar2;
  BIO_METHOD *type;
  BIO *bp;
  long in_FS_OFFSET;
  bool bVar3;
  void *local_60;
  undefined1 local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  b = BIO_new_mem_buf("Hello World\n",0xc);
  iVar1 = test_ptr("test/bio_memleak_test.c",0x72,&_LC8,b);
  if (iVar1 != 0) {
    iVar1 = BIO_read(b,local_58,5);
    iVar1 = test_int_eq("test/bio_memleak_test.c",0x74,"BIO_read(bio, data, 5)",&_LC27,iVar1,5);
    if (iVar1 != 0) {
      iVar1 = test_mem_eq("test/bio_memleak_test.c",0x76,&_LC18,"\"Hello\"",local_58,5,"Hello",5);
      if (iVar1 != 0) {
        uVar2 = BIO_ctrl(b,0x73,0,&local_60);
        iVar1 = test_int_gt("test/bio_memleak_test.c",0x78,"BIO_get_mem_ptr(bio, &bufmem)",&_LC19,
                            uVar2 & 0xffffffff,0);
        if (iVar1 != 0) {
          BIO_ctrl(b,9,0,(void *)0x0);
          type = BIO_s_mem();
          bp = BIO_new(type);
          iVar1 = test_ptr("test/bio_memleak_test.c",0x7d,&_LC32,bp);
          if (iVar1 != 0) {
            BIO_ctrl(bp,0x72,1,local_60);
            BIO_set_flags(bp,0x200);
            iVar1 = BIO_read(bp,local_58,0x10);
            iVar1 = test_int_eq("test/bio_memleak_test.c",0x82,"BIO_read(bio2, data, 16)",&_LC33,
                                iVar1,7);
            if (iVar1 != 0) {
              iVar1 = test_mem_eq("test/bio_memleak_test.c",0x84,&_LC18,"\" World\\n\"",local_58,7,
                                  " World\n",7);
              if (iVar1 != 0) {
                uVar2 = BIO_ctrl(bp,1,0,(void *)0x0);
                iVar1 = test_int_gt("test/bio_memleak_test.c",0x86,"BIO_reset(bio2)",&_LC19,
                                    uVar2 & 0xffffffff,0);
                if (iVar1 != 0) {
                  iVar1 = BIO_read(bp,local_58,0x10);
                  iVar1 = test_int_eq("test/bio_memleak_test.c",0x88,"BIO_read(bio2, data, 16)",
                                      &_LC33,iVar1,7);
                  if (iVar1 != 0) {
                    iVar1 = test_mem_eq("test/bio_memleak_test.c",0x8a,&_LC18,"\" World\\n\"",
                                        local_58,7," World\n",7);
                    bVar3 = iVar1 != 0;
                    goto LAB_0010088d;
                  }
                }
              }
            }
          }
          bVar3 = false;
          goto LAB_0010088d;
        }
      }
    }
  }
  bp = (BIO *)0x0;
  bVar3 = false;
LAB_0010088d:
  BIO_free(b);
  BIO_free(bp);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool test_bio_new_mem_buf(void)

{
  int iVar1;
  BIO *b;
  ulong uVar2;
  long in_FS_OFFSET;
  bool bVar3;
  undefined1 local_60 [8];
  undefined1 local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  b = BIO_new_mem_buf("Hello World\n",0xc);
  iVar1 = test_ptr("test/bio_memleak_test.c",0x4f,&_LC8,b);
  if (iVar1 != 0) {
    iVar1 = BIO_read(b,local_58,5);
    iVar1 = test_int_eq("test/bio_memleak_test.c",0x51,"BIO_read(bio, data, 5)",&_LC27,iVar1,5);
    if (iVar1 != 0) {
      iVar1 = test_mem_eq("test/bio_memleak_test.c",0x53,&_LC18,"\"Hello\"",local_58,5,"Hello",5);
      if (iVar1 != 0) {
        uVar2 = BIO_ctrl(b,0x73,0,local_60);
        iVar1 = test_int_gt("test/bio_memleak_test.c",0x55,"BIO_get_mem_ptr(bio, &bufmem)",&_LC19,
                            uVar2 & 0xffffffff,0);
        if (iVar1 != 0) {
          iVar1 = BIO_write(b,&_LC38,4);
          iVar1 = test_int_lt("test/bio_memleak_test.c",0x57,"BIO_write(bio, \"test\", 4)",&_LC19,
                              iVar1,0);
          if (iVar1 != 0) {
            iVar1 = BIO_read(b,local_58,0x10);
            iVar1 = test_int_eq("test/bio_memleak_test.c",0x59,"BIO_read(bio, data, 16)",&_LC33,
                                iVar1,7);
            if (iVar1 != 0) {
              iVar1 = test_mem_eq("test/bio_memleak_test.c",0x5b,&_LC18,"\" World\\n\"",local_58,7,
                                  " World\n",7);
              if (iVar1 != 0) {
                uVar2 = BIO_ctrl(b,1,0,(void *)0x0);
                iVar1 = test_int_gt("test/bio_memleak_test.c",0x5d,"BIO_reset(bio)",&_LC19,
                                    uVar2 & 0xffffffff,0);
                if (iVar1 != 0) {
                  iVar1 = BIO_read(b,local_58,0x10);
                  iVar1 = test_int_eq("test/bio_memleak_test.c",0x5f,"BIO_read(bio, data, 16)",
                                      &_LC14,iVar1,0xc);
                  if (iVar1 != 0) {
                    iVar1 = test_mem_eq("test/bio_memleak_test.c",0x61,&_LC18,"\"Hello World\\n\"",
                                        local_58,0xc,"Hello World\n",0xc);
                    bVar3 = iVar1 != 0;
                    goto LAB_00100b6d;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  bVar3 = false;
LAB_00100b6d:
  BIO_free(b);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool test_bio_get_mem(void)

{
  int iVar1;
  BIO_METHOD *type;
  BIO *bp;
  ulong uVar2;
  long in_FS_OFFSET;
  bool bVar3;
  BUF_MEM *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = (BUF_MEM *)0x0;
  type = BIO_s_mem();
  bp = BIO_new(type);
  iVar1 = test_ptr("test/bio_memleak_test.c",0x32,&_LC8,bp);
  if (iVar1 != 0) {
    iVar1 = BIO_puts(bp,"Hello World\n");
    iVar1 = test_int_eq("test/bio_memleak_test.c",0x34,"BIO_puts(bio, \"Hello World\\n\")",&_LC14,
                        iVar1,0xc);
    if (iVar1 != 0) {
      BIO_ctrl(bp,0x73,0,&local_28);
      iVar1 = test_ptr("test/bio_memleak_test.c",0x37,"bufmem");
      if (iVar1 != 0) {
        uVar2 = BIO_ctrl(bp,9,0,(void *)0x0);
        iVar1 = test_int_gt("test/bio_memleak_test.c",0x39,"BIO_set_close(bio, BIO_NOCLOSE)",&_LC19,
                            uVar2 & 0xffffffff,0);
        if (iVar1 != 0) {
          BIO_free(bp);
          iVar1 = test_mem_eq("test/bio_memleak_test.c",0x3d,"bufmem->data","\"Hello World\\n\"",
                              local_28->data,local_28->length,"Hello World\n",0xc);
          bVar3 = iVar1 != 0;
          bp = (BIO *)0x0;
          goto LAB_00100e08;
        }
      }
    }
  }
  bVar3 = false;
LAB_00100e08:
  BIO_free(bp);
  BUF_MEM_free(local_28);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 setup_tests(void)

{
  add_test("test_bio_memleak",test_bio_memleak);
  add_test("test_bio_get_mem",test_bio_get_mem);
  add_test("test_bio_new_mem_buf",test_bio_new_mem_buf);
  add_test("test_bio_rdonly_mem_buf",test_bio_rdonly_mem_buf);
  add_test("test_bio_rdwr_rdonly",test_bio_rdwr_rdonly);
  add_test("test_bio_nonclear_rst",test_bio_nonclear_rst);
  add_test("test_bio_i2d_ASN1_mime",test_bio_i2d_ASN1_mime);
  return 1;
}


