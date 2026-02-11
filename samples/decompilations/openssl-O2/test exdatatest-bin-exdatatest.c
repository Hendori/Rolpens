
undefined8 MYOBJ_gethello2(CRYPTO_EX_DATA *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)CRYPTO_get_ex_data(param_1,saved_idx2);
  iVar1 = test_ptr("test/exdatatest.c",0xab,"ex_data",puVar2);
  if (iVar1 != 0) {
    return *puVar2;
  }
  *(undefined4 *)((long)&param_1[1].sk + 4) = 0;
  gbl_result = 0;
  return 0;
}



undefined8
exdup2(CRYPTO_EX_DATA *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 param_5
      ,undefined8 param_6)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *puVar3;
  
  iVar2 = test_true("test/exdatatest.c",0x5f,"idx == saved_idx2 || idx == saved_idx3",
                    saved_idx2 == param_4 || saved_idx3 == param_4);
  if ((((iVar2 != 0) &&
       (iVar2 = test_long_eq("test/exdatatest.c",0x60,&_LC4,"saved_argl",param_5,saved_argl),
       iVar2 != 0)) &&
      (iVar2 = test_ptr_eq("test/exdatatest.c",0x61,&_LC6,"saved_argp",param_6,saved_argp),
      iVar2 != 0)) &&
     ((iVar2 = test_ptr("test/exdatatest.c",0x62,"from_d",param_3), iVar2 != 0 &&
      (iVar2 = test_ptr("test/exdatatest.c",99,"*update_ex_data",*param_3), iVar2 != 0)))) {
    puVar3 = (undefined8 *)CRYPTO_get_ex_data(param_1,param_4);
    iVar2 = test_ptr("test/exdatatest.c",100,"ex_data = CRYPTO_get_ex_data(to, idx)",puVar3);
    if ((iVar2 != 0) &&
       (iVar2 = test_true("test/exdatatest.c",0x65,"ex_data->new",*(int *)(puVar3 + 1) != 0),
       iVar2 != 0)) {
      uVar1 = *(undefined8 *)*param_3;
      *(undefined4 *)((long)puVar3 + 0xc) = 1;
      *puVar3 = uVar1;
      *param_3 = puVar3;
      return 1;
    }
  }
  gbl_result = 0;
  return 1;
}



void exfree(void)

{
  int iVar1;
  undefined4 in_ECX;
  undefined8 in_R8;
  undefined8 in_R9;
  
  iVar1 = test_int_eq("test/exdatatest.c",0x35,&_LC12,"saved_idx",in_ECX,saved_idx);
  if (((iVar1 == 0) ||
      (iVar1 = test_long_eq("test/exdatatest.c",0x36,&_LC4,"saved_argl",in_R8,saved_argl),
      iVar1 == 0)) ||
     (iVar1 = test_ptr_eq("test/exdatatest.c",0x37,&_LC6,"saved_argp",in_R9,saved_argp), iVar1 == 0)
     ) {
    gbl_result = 0;
  }
  return;
}



undefined8
exdup(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,undefined8 param_5
     ,undefined8 param_6)

{
  int iVar1;
  
  iVar1 = test_int_eq("test/exdatatest.c",0x2a,&_LC12,"saved_idx",param_4,saved_idx);
  if ((((iVar1 == 0) ||
       (iVar1 = test_long_eq("test/exdatatest.c",0x2b,&_LC4,"saved_argl",param_5,saved_argl),
       iVar1 == 0)) ||
      (iVar1 = test_ptr_eq("test/exdatatest.c",0x2c,&_LC6,"saved_argp",param_6,saved_argp),
      iVar1 == 0)) || (iVar1 = test_ptr("test/exdatatest.c",0x2d,"from_d",param_3), iVar1 == 0)) {
    gbl_result = 0;
  }
  return 1;
}



void exnew(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
          undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  
  iVar1 = test_int_eq("test/exdatatest.c",0x20,&_LC12,"saved_idx",param_4,saved_idx);
  if ((((iVar1 == 0) ||
       (iVar1 = test_long_eq("test/exdatatest.c",0x21,&_LC4,"saved_argl",param_5,saved_argl),
       iVar1 == 0)) ||
      (iVar1 = test_ptr_eq("test/exdatatest.c",0x22,&_LC6,"saved_argp",param_6,saved_argp),
      iVar1 == 0)) || (iVar1 = test_ptr_null("test/exdatatest.c",0x23,&_LC13,param_2), iVar1 == 0))
  {
    gbl_result = 0;
  }
  return;
}



void exfree2(undefined8 param_1,undefined8 param_2,CRYPTO_EX_DATA *param_3,int param_4,
            undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  void *ptr;
  
  ptr = CRYPTO_get_ex_data(param_3,param_4);
  iVar1 = test_true("test/exdatatest.c",0x77,"idx == saved_idx2 || idx == saved_idx3",
                    saved_idx2 == param_4 || saved_idx3 == param_4);
  if (((iVar1 != 0) &&
      (iVar1 = test_long_eq("test/exdatatest.c",0x78,&_LC4,"saved_argl",param_5,saved_argl),
      iVar1 != 0)) &&
     (iVar1 = test_ptr_eq("test/exdatatest.c",0x79,&_LC6,"saved_argp",param_6,saved_argp),
     iVar1 != 0)) {
    iVar1 = CRYPTO_set_ex_data(param_3,param_4,(void *)0x0);
    iVar1 = test_true("test/exdatatest.c",0x7a,"CRYPTO_set_ex_data(ad, idx, NULL)",iVar1 != 0);
    if (iVar1 != 0) goto LAB_001004bb;
  }
  gbl_result = 0;
LAB_001004bb:
  CRYPTO_free(ptr);
  return;
}



void exnew2(undefined8 param_1,undefined8 param_2,CRYPTO_EX_DATA *param_3,int param_4,
           undefined8 param_5,undefined8 param_6)

{
  void *val;
  int iVar1;
  
  val = (void *)CRYPTO_zalloc(0x10,"test/exdatatest.c",0x4a);
  iVar1 = test_true("test/exdatatest.c",0x4c,"idx == saved_idx2 || idx == saved_idx3",
                    saved_idx2 == param_4 || saved_idx3 == param_4);
  if ((((iVar1 != 0) &&
       (iVar1 = test_long_eq("test/exdatatest.c",0x4d,&_LC4,"saved_argl",param_5,saved_argl),
       iVar1 != 0)) &&
      (iVar1 = test_ptr_eq("test/exdatatest.c",0x4e,&_LC6,"saved_argp",param_6,saved_argp),
      iVar1 != 0)) &&
     ((iVar1 = test_ptr_null("test/exdatatest.c",0x4f,&_LC13,param_2), iVar1 != 0 &&
      (iVar1 = test_ptr("test/exdatatest.c",0x50,"ex_data",val), iVar1 != 0)))) {
    iVar1 = CRYPTO_set_ex_data(param_3,param_4,val);
    iVar1 = test_true("test/exdatatest.c",0x51,"CRYPTO_set_ex_data(ad, idx, ex_data)",iVar1 != 0);
    if (iVar1 != 0) {
      *(undefined4 *)((long)val + 8) = 1;
      return;
    }
  }
  gbl_result = 0;
  CRYPTO_free(val);
  return;
}



void * MYOBJ_new(void)

{
  int iVar1;
  void *ad;
  
  ad = CRYPTO_malloc(0x18,"test/exdatatest.c",0x88);
  if (ad != (void *)0x0) {
    count_0 = count_0 + 1;
    *(int *)((long)ad + 0x10) = count_0;
    iVar1 = CRYPTO_new_ex_data(0xd,ad,(CRYPTO_EX_DATA *)ad);
    *(int *)((long)ad + 0x14) = iVar1;
  }
  return ad;
}



bool test_exdata(void)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  char *val;
  CRYPTO_EX_DATA *ad;
  CRYPTO_EX_DATA *ad_00;
  void *pvVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  CRYPTO_EX_DATA *to;
  bool bVar7;
  
  gbl_result = 1;
  val = CRYPTO_strdup("hello world","test/exdatatest.c",0xe6);
  iVar2 = test_ptr("test/exdatatest.c",0xe6,"p = OPENSSL_strdup(\"hello world\")",val);
  if (iVar2 == 0) {
    return false;
  }
  saved_argl = 0x15;
  saved_argp = CRYPTO_malloc(1,"test/exdatatest.c",0xe9);
  iVar2 = test_ptr("test/exdatatest.c",0xe9,"saved_argp = OPENSSL_malloc(1)",saved_argp);
  if (iVar2 != 0) {
    saved_idx = CRYPTO_get_ex_new_index(0xd,saved_argl,saved_argp,exnew,exdup,exfree);
    saved_idx2 = CRYPTO_get_ex_new_index(0xd,saved_argl,saved_argp,exnew2,exdup2,exfree2);
    ad = (CRYPTO_EX_DATA *)MYOBJ_new();
    ad_00 = (CRYPTO_EX_DATA *)MYOBJ_new();
    iVar2 = test_int_eq("test/exdatatest.c",0xf3,"t1->st",&_LC19,
                        *(undefined4 *)((long)&ad[1].sk + 4),1);
    if (iVar2 != 0) {
      iVar2 = test_int_eq("test/exdatatest.c",0xf3,"t2->st",&_LC19,
                          *(undefined4 *)((long)&ad_00[1].sk + 4),1);
      if (iVar2 == 0) {
LAB_00100966:
        bVar7 = false;
        to = (CRYPTO_EX_DATA *)0x0;
      }
      else {
        pvVar4 = CRYPTO_get_ex_data(ad,saved_idx2);
        iVar2 = test_ptr("test/exdatatest.c",0xf5,"CRYPTO_get_ex_data(&t1->ex_data, saved_idx2)",
                         pvVar4);
        if (iVar2 == 0) goto LAB_00100966;
        saved_idx3 = CRYPTO_get_ex_new_index(0xd,saved_argl,saved_argp,exnew2,exdup2,exfree2);
        pvVar4 = CRYPTO_get_ex_data(ad,saved_idx3);
        iVar2 = test_ptr_null("test/exdatatest.c",0xff,
                              "CRYPTO_get_ex_data(&t1->ex_data, saved_idx3)",pvVar4);
        if (iVar2 == 0) goto LAB_00100966;
        iVar2 = CRYPTO_set_ex_data(ad,saved_idx,val);
        *(int *)((long)&ad[1].sk + 4) = iVar2;
        iVar2 = test_int_eq("test/exdatatest.c",0x94,"obj->st",&_LC19,iVar2,1);
        if (iVar2 == 0) {
          gbl_result = 0;
        }
        pvVar4 = CRYPTO_get_ex_data(ad,saved_idx);
        iVar2 = test_ptr_eq("test/exdatatest.c",0x104,&_LC26,&_LC25,pvVar4,val);
        if (iVar2 == 0) goto LAB_00100966;
        puVar5 = (undefined8 *)CRYPTO_get_ex_data(ad,saved_idx2);
        iVar2 = test_ptr("test/exdatatest.c",0xa1,"ex_data",puVar5);
        if (iVar2 == 0) {
          gbl_result = 0;
          *(undefined4 *)((long)&ad[1].sk + 4) = 0;
        }
        else {
          *puVar5 = val;
        }
        puVar5 = (undefined8 *)CRYPTO_get_ex_data(ad,saved_idx2);
        iVar2 = test_ptr("test/exdatatest.c",0xab,"ex_data",puVar5);
        if (iVar2 == 0) {
          gbl_result = 0;
          uVar6 = 0;
          *(undefined4 *)((long)&ad[1].sk + 4) = 0;
        }
        else {
          uVar6 = *puVar5;
        }
        iVar2 = test_ptr_eq("test/exdatatest.c",0x109,&_LC26,&_LC25,uVar6,val);
        if (iVar2 == 0) goto LAB_00100966;
        pvVar4 = CRYPTO_get_ex_data(ad,saved_idx3);
        iVar2 = test_ptr_null("test/exdatatest.c",0xb6,
                              "ex_data = CRYPTO_get_ex_data(&obj->ex_data, saved_idx3)",pvVar4);
        if (iVar2 == 0) {
LAB_00100b6f:
          gbl_result = 0;
          *(undefined4 *)((long)&ad[1].sk + 4) = 0;
        }
        else {
          iVar2 = CRYPTO_alloc_ex_data(0xd,ad,ad,saved_idx3);
          iVar2 = test_true("test/exdatatest.c",0xb7,
                            "CRYPTO_alloc_ex_data(CRYPTO_EX_INDEX_APP, obj, &obj->ex_data, saved_idx3)"
                            ,iVar2 != 0);
          if (iVar2 == 0) goto LAB_00100b6f;
          puVar5 = (undefined8 *)CRYPTO_get_ex_data(ad,saved_idx3);
          iVar2 = test_ptr("test/exdatatest.c",0xb9,
                           "ex_data = CRYPTO_get_ex_data(&obj->ex_data, saved_idx3)",puVar5);
          if (iVar2 == 0) goto LAB_00100b6f;
          *puVar5 = val;
        }
        puVar5 = (undefined8 *)CRYPTO_get_ex_data(ad,saved_idx3);
        iVar2 = test_ptr("test/exdatatest.c",0xc3,"ex_data",puVar5);
        if (iVar2 == 0) {
          gbl_result = 0;
          uVar6 = 0;
          *(undefined4 *)((long)&ad[1].sk + 4) = 0;
        }
        else {
          uVar6 = *puVar5;
        }
        iVar2 = test_ptr_eq("test/exdatatest.c",0x10e,&_LC26,&_LC25,uVar6,val);
        if (iVar2 == 0) goto LAB_00100966;
        pvVar4 = CRYPTO_get_ex_data(ad_00,saved_idx);
        iVar2 = test_ptr_null("test/exdatatest.c",0x112,&_LC26,pvVar4);
        if (iVar2 == 0) goto LAB_00100966;
        uVar6 = MYOBJ_gethello2(ad_00);
        iVar2 = test_ptr_null("test/exdatatest.c",0x116,&_LC26,uVar6);
        if (iVar2 == 0) goto LAB_00100966;
        to = (CRYPTO_EX_DATA *)MYOBJ_new();
        if (to != (CRYPTO_EX_DATA *)0x0) {
          uVar3 = CRYPTO_dup_ex_data(0xd,to,ad);
          puVar1 = (uint *)((long)&to[1].sk + 4);
          *puVar1 = *puVar1 | uVar3;
        }
        iVar2 = test_int_eq("test/exdatatest.c",0x11a,"t3->st",&_LC19,
                            *(undefined4 *)((long)&to[1].sk + 4),1);
        if (iVar2 == 0) {
LAB_00100c79:
          bVar7 = false;
        }
        else {
          pvVar4 = CRYPTO_get_ex_data(to,saved_idx2);
          iVar2 = test_ptr("test/exdatatest.c",0x11e,"ex_data",pvVar4);
          if ((iVar2 == 0) ||
             (iVar2 = test_int_eq("test/exdatatest.c",0x120,"ex_data->dup",&_LC19,
                                  *(undefined4 *)((long)pvVar4 + 0xc),1), iVar2 == 0))
          goto LAB_00100c79;
          pvVar4 = CRYPTO_get_ex_data(to,saved_idx);
          iVar2 = test_ptr_eq("test/exdatatest.c",0x124,&_LC26,&_LC25,pvVar4,val);
          if (iVar2 == 0) goto LAB_00100c79;
          uVar6 = MYOBJ_gethello2(to);
          iVar2 = test_ptr_eq("test/exdatatest.c",0x128,&_LC26,&_LC25,uVar6,val);
          if (iVar2 == 0) goto LAB_00100c79;
          puVar5 = (undefined8 *)CRYPTO_get_ex_data(to,saved_idx3);
          iVar2 = test_ptr("test/exdatatest.c",0xc3,"ex_data",puVar5);
          if (iVar2 == 0) {
            uVar6 = 0;
            gbl_result = 0;
            *(undefined4 *)((long)&to[1].sk + 4) = 0;
          }
          else {
            uVar6 = *puVar5;
          }
          iVar2 = test_ptr_eq("test/exdatatest.c",300,&_LC26,&_LC25,uVar6,val);
          if (iVar2 == 0) goto LAB_00100c79;
          bVar7 = gbl_result != 0;
        }
      }
      CRYPTO_free_ex_data(0xd,ad,ad);
      CRYPTO_free(ad);
      CRYPTO_free_ex_data(0xd,ad_00,ad_00);
      CRYPTO_free(ad_00);
      if (to != (CRYPTO_EX_DATA *)0x0) {
        CRYPTO_free_ex_data(0xd,to,to);
        CRYPTO_free(to);
      }
      goto LAB_001007e2;
    }
    CRYPTO_free_ex_data(0xd,ad,ad);
    CRYPTO_free(ad);
    if (ad_00 != (CRYPTO_EX_DATA *)0x0) {
      CRYPTO_free_ex_data(0xd,ad_00,ad_00);
      CRYPTO_free(ad_00);
    }
  }
  bVar7 = false;
LAB_001007e2:
  CRYPTO_free(saved_argp);
  saved_argp = (void *)0x0;
  CRYPTO_free(val);
  return bVar7;
}



undefined8 setup_tests(void)

{
  add_test("test_exdata",test_exdata);
  return 1;
}


