
void tst_bio_core_puts(long param_1,char *param_2)

{
  BIO_puts(*(BIO **)(param_1 + 8),param_2);
  return;
}



void tst_bio_core_ctrl(long param_1,int param_2,long param_3,void *param_4)

{
  BIO_ctrl(*(BIO **)(param_1 + 8),param_2,param_3,param_4);
  return;
}



void tst_bio_core_gets(long param_1,char *param_2,int param_3)

{
  BIO_gets(*(BIO **)(param_1 + 8),param_2,param_3);
  return;
}



void tst_bio_core_free(long param_1)

{
  BIO_free(*(BIO **)(param_1 + 8));
  return;
}



uint test_bio_core(void)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  BIO_METHOD *type;
  BIO *a;
  BIO *bp;
  long lVar4;
  long in_FS_OFFSET;
  undefined1 local_a8 [8];
  BIO *local_a0;
  char local_98 [88];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = OSSL_LIB_CTX_new_from_dispatch(0,biocbs);
  type = BIO_s_mem();
  local_a0 = BIO_new(type);
  iVar1 = test_ptr("test/bio_core_test.c",0x4d,"corebio.bio",local_a0);
  if (iVar1 != 0) {
    iVar1 = test_ptr("test/bio_core_test.c",0x4e,"libctx",uVar3);
    if (iVar1 != 0) {
      bp = (BIO *)0x0;
      a = (BIO *)BIO_new_from_core_bio(0,local_a8);
      uVar2 = test_ptr_null("test/bio_core_test.c",0x53,
                            "(cbiobad = BIO_new_from_core_bio(NULL, &corebio))",a);
      if (uVar2 != 0) {
        bp = (BIO *)BIO_new_from_core_bio(uVar3,local_a8);
        iVar1 = test_ptr("test/bio_core_test.c",0x54,
                         "(cbio = BIO_new_from_core_bio(libctx, &corebio))",bp);
        if (iVar1 != 0) {
          iVar1 = BIO_puts(local_a0,"Hello world");
          iVar1 = test_int_gt("test/bio_core_test.c",0x57,"BIO_puts(corebio.bio, msg)",&_LC6,iVar1,0
                             );
          if (iVar1 != 0) {
            lVar4 = BIO_ctrl(bp,2,0,(void *)0x0);
            iVar1 = test_false("test/bio_core_test.c",0x59,"BIO_eof(cbio)",(int)lVar4 != 0);
            if (iVar1 != 0) {
              iVar1 = BIO_gets(bp,local_98,0x50);
              iVar1 = test_int_gt("test/bio_core_test.c",0x5a,"BIO_gets(cbio, buf, sizeof(buf))",
                                  &_LC6,iVar1,0);
              if (iVar1 != 0) {
                lVar4 = BIO_ctrl(bp,2,0,(void *)0x0);
                iVar1 = test_true("test/bio_core_test.c",0x5b,"BIO_eof(cbio)",(int)lVar4 != 0);
                if (iVar1 != 0) {
                  iVar1 = test_str_eq("test/bio_core_test.c",0x5c,&_LC11,&_LC10,local_98,
                                      "Hello world");
                  if (iVar1 != 0) {
                    local_98[0] = '\0';
                    iVar1 = BIO_write(bp,"Hello world",0xc);
                    iVar1 = test_int_gt("test/bio_core_test.c",0x60,
                                        "BIO_write(cbio, msg, strlen(msg) + 1)",&_LC6,iVar1,0);
                    if (iVar1 != 0) {
                      iVar1 = BIO_read(bp,local_98,0x50);
                      iVar1 = test_int_gt("test/bio_core_test.c",0x61,
                                          "BIO_read(cbio, buf, sizeof(buf))",&_LC6,iVar1,0);
                      if (iVar1 != 0) {
                        iVar1 = test_str_eq("test/bio_core_test.c",0x62,&_LC11,&_LC10,local_98,
                                            "Hello world");
                        uVar2 = (uint)(iVar1 != 0);
                        goto LAB_001000b3;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        uVar2 = 0;
      }
      goto LAB_001000b3;
    }
  }
  uVar2 = 0;
  a = (BIO *)0x0;
  bp = (BIO *)0x0;
LAB_001000b3:
  BIO_free(a);
  BIO_free(bp);
  BIO_free(local_a0);
  OSSL_LIB_CTX_free(uVar3);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void tst_bio_core_up_ref(long param_1)

{
  BIO_up_ref(*(undefined8 *)(param_1 + 8));
  return;
}



void tst_bio_core_write_ex(long param_1)

{
  BIO_write_ex(*(undefined8 *)(param_1 + 8));
  return;
}



void tst_bio_core_read_ex(long param_1)

{
  BIO_read_ex(*(undefined8 *)(param_1 + 8));
  return;
}



undefined8 setup_tests(void)

{
  int iVar1;
  
  iVar1 = test_skip_common_options();
  if (iVar1 != 0) {
    add_test("test_bio_core",test_bio_core);
    return 1;
  }
  test_error("test/bio_core_test.c",0x71,"Error parsing test options\n");
  return 0;
}


