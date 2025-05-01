
uint test_bio_meth(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  BIO_METHOD *type;
  BIO_METHOD *type_00;
  BIO_METHOD *type_01;
  BIO_METHOD *type_02;
  BIO *a;
  BIO *pBVar6;
  BIO *local_68;
  BIO *local_60;
  BIO *local_58;
  
  iVar1 = BIO_get_new_index();
  iVar2 = test_int_eq("test/bio_meth_test.c",0x14,&_LC1,"BIO_TYPE_START + 1",iVar1,0x81);
  if (iVar2 == 0) {
    local_68 = (BIO *)0x0;
    uVar3 = 0;
    a = (BIO *)0x0;
    type = (BIO_METHOD *)0x0;
    local_58 = (BIO *)0x0;
    type_01 = (BIO_METHOD *)0x0;
    type_00 = (BIO_METHOD *)0x0;
    local_60 = (BIO *)0x0;
  }
  else {
    type = (BIO_METHOD *)BIO_meth_new(iVar1,"Method1");
    iVar2 = test_ptr("test/bio_meth_test.c",0x17,"meth1 = BIO_meth_new(id, \"Method1\")",type);
    if (iVar2 == 0) {
      local_58 = (BIO *)0x0;
      a = (BIO *)0x0;
      type_01 = (BIO_METHOD *)0x0;
      type_00 = (BIO_METHOD *)0x0;
      local_68 = (BIO *)0x0;
      local_60 = (BIO *)0x0;
      uVar3 = 0;
    }
    else {
      type_00 = (BIO_METHOD *)BIO_meth_new(0,"Method2");
      iVar2 = test_ptr("test/bio_meth_test.c",0x18,
                       "meth2 = BIO_meth_new(BIO_TYPE_NONE, \"Method2\")",type_00);
      if (iVar2 == 0) {
        local_58 = (BIO *)0x0;
        a = (BIO *)0x0;
        type_01 = (BIO_METHOD *)0x0;
        local_68 = (BIO *)0x0;
        local_60 = (BIO *)0x0;
        uVar3 = 0;
      }
      else {
        type_01 = (BIO_METHOD *)BIO_meth_new(0x200,"Method3");
        iVar2 = test_ptr("test/bio_meth_test.c",0x19,
                         "meth3 = BIO_meth_new(BIO_TYPE_NONE|BIO_TYPE_FILTER, \"Method3\")",type_01)
        ;
        if (iVar2 == 0) {
          local_58 = (BIO *)0x0;
          a = (BIO *)0x0;
          local_68 = (BIO *)0x0;
          local_60 = (BIO *)0x0;
          uVar3 = 0;
        }
        else {
          local_60 = BIO_new(type);
          iVar2 = test_ptr("test/bio_meth_test.c",0x1a,"bio1 = BIO_new(meth1)",local_60);
          if (iVar2 == 0) {
            local_58 = (BIO *)0x0;
            a = (BIO *)0x0;
            local_68 = (BIO *)0x0;
            uVar3 = 0;
          }
          else {
            local_68 = BIO_new(type_00);
            iVar2 = test_ptr("test/bio_meth_test.c",0x1b,"bio2 = BIO_new(meth2)",local_68);
            if (iVar2 == 0) {
              local_58 = (BIO *)0x0;
              a = (BIO *)0x0;
              uVar3 = 0;
            }
            else {
              local_58 = BIO_new(type_01);
              uVar3 = test_ptr("test/bio_meth_test.c",0x1c,"bio3 = BIO_new(meth3)",local_58);
              a = (BIO *)0x0;
              if (uVar3 != 0) {
                type_02 = BIO_s_mem();
                a = BIO_new(type_02);
                uVar3 = test_ptr("test/bio_meth_test.c",0x1d,"membio = BIO_new(BIO_s_mem())",a);
                if (uVar3 != 0) {
                  BIO_set_next(local_58,local_68);
                  BIO_set_next(local_68,local_60);
                  iVar2 = iVar1 + 1;
                  BIO_set_next(local_60,a);
                  if (iVar2 < 0x100) {
                    do {
                      uVar4 = BIO_get_new_index();
                      iVar5 = test_int_eq("test/bio_meth_test.c",0x26,"BIO_get_new_index()",&_LC13,
                                          uVar4,iVar2);
                      if (iVar5 == 0) goto LAB_00100348;
                      iVar2 = iVar2 + 1;
                    } while (iVar2 != 0x100);
                  }
                  uVar4 = BIO_get_new_index();
                  iVar2 = test_int_eq("test/bio_meth_test.c",0x29,"BIO_get_new_index()",&_LC15,uVar4
                                      ,0xffffffff);
                  if (iVar2 != 0) {
                    pBVar6 = BIO_find_type(local_58,0x401);
                    iVar2 = test_ptr_eq("test/bio_meth_test.c",0x2d,
                                        "BIO_find_type(bio3, BIO_TYPE_MEM)","membio",pBVar6,a);
                    if (iVar2 != 0) {
                      pBVar6 = BIO_find_type(local_58,iVar1);
                      iVar1 = test_ptr_eq("test/bio_meth_test.c",0x2e,"BIO_find_type(bio3, id)",
                                          &_LC18,pBVar6,local_60);
                      if (iVar1 != 0) {
                        pBVar6 = BIO_find_type(local_58,0);
                        iVar1 = test_ptr_null("test/bio_meth_test.c",0x32,
                                              "BIO_find_type(bio3, BIO_TYPE_NONE)",pBVar6);
                        if (iVar1 != 0) {
                          pBVar6 = BIO_find_type(local_58,0x200);
                          iVar1 = test_ptr_eq("test/bio_meth_test.c",0x35,
                                              "BIO_find_type(bio3, BIO_TYPE_FILTER)",&_LC21,pBVar6,
                                              local_58);
                          uVar3 = (uint)(iVar1 != 0);
                          goto LAB_00100070;
                        }
                      }
                    }
                  }
LAB_00100348:
                  uVar3 = 0;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_00100070:
  BIO_free(a);
  BIO_free(local_58);
  BIO_free(local_68);
  BIO_free(local_60);
  BIO_meth_free(type_01);
  BIO_meth_free(type_00);
  BIO_meth_free(type);
  return uVar3;
}



undefined8 setup_tests(void)

{
  add_test("test_bio_meth",0x100000);
  return 1;
}


