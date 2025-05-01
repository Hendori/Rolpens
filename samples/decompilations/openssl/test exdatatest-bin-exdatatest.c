
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



bool test_exdata(void)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  char *val;
  CRYPTO_EX_DATA *ad;
  CRYPTO_EX_DATA *ad_00;
  void *pvVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  CRYPTO_EX_DATA *ad_01;
  bool bVar8;
  
  gbl_result = 1;
  val = CRYPTO_strdup("hello world","test/exdatatest.c",0xe6);
  iVar3 = test_ptr("test/exdatatest.c",0xe6,"p = OPENSSL_strdup(\"hello world\")",val);
  if (iVar3 == 0) {
    return false;
  }
  saved_argl = 0x15;
  saved_argp = CRYPTO_malloc(1,"test/exdatatest.c",0xe9);
  iVar3 = test_ptr("test/exdatatest.c",0xe9,"saved_argp = OPENSSL_malloc(1)",saved_argp);
  if (iVar3 == 0) {
LAB_001008f1:
    bVar8 = false;
    goto LAB_001008f4;
  }
  saved_idx = CRYPTO_get_ex_new_index(0xd,saved_argl,saved_argp,exnew,exdup,exfree);
  saved_idx2 = CRYPTO_get_ex_new_index(0xd,saved_argl,saved_argp,exnew2,exdup2,exfree2);
  ad = (CRYPTO_EX_DATA *)CRYPTO_malloc(0x18,"test/exdatatest.c",0x88);
  if (ad != (CRYPTO_EX_DATA *)0x0) {
    count_0 = count_0 + 1;
    *(int *)&ad[1].sk = count_0;
    iVar3 = CRYPTO_new_ex_data(0xd,ad,ad);
    *(int *)((long)&ad[1].sk + 4) = iVar3;
  }
  ad_00 = (CRYPTO_EX_DATA *)CRYPTO_malloc(0x18,"test/exdatatest.c",0x88);
  if (ad_00 == (CRYPTO_EX_DATA *)0x0) {
    iVar3 = test_int_eq("test/exdatatest.c",0xf3,"t1->st",&_LC19,
                        *(undefined4 *)((long)&ad[1].sk + 4),1);
    if (iVar3 == 0) {
      CRYPTO_free_ex_data(0xd,ad,ad);
      CRYPTO_free(ad);
      goto LAB_001008f1;
    }
  }
  else {
    count_0 = count_0 + 1;
    *(int *)&ad_00[1].sk = count_0;
    iVar3 = CRYPTO_new_ex_data(0xd,ad_00,ad_00);
    uVar2 = *(undefined4 *)((long)&ad[1].sk + 4);
    *(int *)((long)&ad_00[1].sk + 4) = iVar3;
    iVar3 = test_int_eq("test/exdatatest.c",0xf3,"t1->st",&_LC19,uVar2,1);
    if (iVar3 == 0) {
      CRYPTO_free_ex_data(0xd,ad,ad);
      CRYPTO_free(ad);
      CRYPTO_free_ex_data(0xd,ad_00,ad_00);
      CRYPTO_free(ad_00);
      goto LAB_001008f1;
    }
  }
  iVar3 = test_int_eq("test/exdatatest.c",0xf3,"t2->st",&_LC19,
                      *(undefined4 *)((long)&ad_00[1].sk + 4),1);
  if (iVar3 == 0) {
LAB_0010097e:
    bVar8 = false;
    ad_01 = (CRYPTO_EX_DATA *)0x0;
  }
  else {
    pvVar5 = CRYPTO_get_ex_data(ad,saved_idx2);
    iVar3 = test_ptr("test/exdatatest.c",0xf5,"CRYPTO_get_ex_data(&t1->ex_data, saved_idx2)",pvVar5)
    ;
    if (iVar3 == 0) goto LAB_0010097e;
    saved_idx3 = CRYPTO_get_ex_new_index(0xd,saved_argl,saved_argp,exnew2,exdup2,exfree2);
    pvVar5 = CRYPTO_get_ex_data(ad,saved_idx3);
    iVar3 = test_ptr_null("test/exdatatest.c",0xff,"CRYPTO_get_ex_data(&t1->ex_data, saved_idx3)",
                          pvVar5);
    if (iVar3 == 0) goto LAB_0010097e;
    iVar3 = CRYPTO_set_ex_data(ad,saved_idx,val);
    *(int *)((long)&ad[1].sk + 4) = iVar3;
    iVar3 = test_int_eq("test/exdatatest.c",0x94,"obj->st",&_LC19,iVar3,1);
    if (iVar3 == 0) {
      gbl_result = 0;
    }
    pvVar5 = CRYPTO_get_ex_data(ad,saved_idx);
    iVar3 = test_ptr_eq("test/exdatatest.c",0x104,&_LC26,&_LC25,pvVar5,val);
    if (iVar3 == 0) goto LAB_0010097e;
    puVar6 = (undefined8 *)CRYPTO_get_ex_data(ad,saved_idx2);
    iVar3 = test_ptr("test/exdatatest.c",0xa1,"ex_data",puVar6);
    if (iVar3 == 0) {
      gbl_result = 0;
      *(undefined4 *)((long)&ad[1].sk + 4) = 0;
    }
    else {
      *puVar6 = val;
    }
    puVar6 = (undefined8 *)CRYPTO_get_ex_data(ad,saved_idx2);
    iVar3 = test_ptr("test/exdatatest.c",0xab,"ex_data",puVar6);
    if (iVar3 == 0) {
      gbl_result = 0;
      uVar7 = 0;
      *(undefined4 *)((long)&ad[1].sk + 4) = 0;
    }
    else {
      uVar7 = *puVar6;
    }
    iVar3 = test_ptr_eq("test/exdatatest.c",0x109,&_LC26,&_LC25,uVar7,val);
    if (iVar3 == 0) goto LAB_0010097e;
    pvVar5 = CRYPTO_get_ex_data(ad,saved_idx3);
    iVar3 = test_ptr_null("test/exdatatest.c",0xb6,
                          "ex_data = CRYPTO_get_ex_data(&obj->ex_data, saved_idx3)",pvVar5);
    if (iVar3 == 0) {
LAB_00100b87:
      gbl_result = 0;
      *(undefined4 *)((long)&ad[1].sk + 4) = 0;
    }
    else {
      iVar3 = CRYPTO_alloc_ex_data(0xd,ad,ad,saved_idx3);
      iVar3 = test_true("test/exdatatest.c",0xb7,
                        "CRYPTO_alloc_ex_data(CRYPTO_EX_INDEX_APP, obj, &obj->ex_data, saved_idx3)",
                        iVar3 != 0);
      if (iVar3 == 0) goto LAB_00100b87;
      puVar6 = (undefined8 *)CRYPTO_get_ex_data(ad,saved_idx3);
      iVar3 = test_ptr("test/exdatatest.c",0xb9,
                       "ex_data = CRYPTO_get_ex_data(&obj->ex_data, saved_idx3)",puVar6);
      if (iVar3 == 0) goto LAB_00100b87;
      *puVar6 = val;
    }
    puVar6 = (undefined8 *)CRYPTO_get_ex_data(ad,saved_idx3);
    iVar3 = test_ptr("test/exdatatest.c",0xc3,"ex_data",puVar6);
    if (iVar3 == 0) {
      gbl_result = 0;
      uVar7 = 0;
      *(undefined4 *)((long)&ad[1].sk + 4) = 0;
    }
    else {
      uVar7 = *puVar6;
    }
    iVar3 = test_ptr_eq("test/exdatatest.c",0x10e,&_LC26,&_LC25,uVar7,val);
    if (iVar3 == 0) goto LAB_0010097e;
    pvVar5 = CRYPTO_get_ex_data(ad_00,saved_idx);
    iVar3 = test_ptr_null("test/exdatatest.c",0x112,&_LC26,pvVar5);
    if (iVar3 == 0) goto LAB_0010097e;
    uVar7 = MYOBJ_gethello2(ad_00);
    iVar3 = test_ptr_null("test/exdatatest.c",0x116,&_LC26,uVar7);
    if (iVar3 == 0) goto LAB_0010097e;
    ad_01 = (CRYPTO_EX_DATA *)CRYPTO_malloc(0x18,"test/exdatatest.c",0x88);
    if (ad_01 != (CRYPTO_EX_DATA *)0x0) {
      count_0 = count_0 + 1;
      *(int *)&ad_01[1].sk = count_0;
      iVar3 = CRYPTO_new_ex_data(0xd,ad_01,ad_01);
      *(int *)((long)&ad_01[1].sk + 4) = iVar3;
      uVar4 = CRYPTO_dup_ex_data(0xd,ad_01,ad);
      puVar1 = (uint *)((long)&ad_01[1].sk + 4);
      *puVar1 = *puVar1 | uVar4;
    }
    iVar3 = test_int_eq("test/exdatatest.c",0x11a,"t3->st",&_LC19,
                        *(undefined4 *)((long)&ad_01[1].sk + 4),1);
    if (iVar3 == 0) {
LAB_00100cc5:
      bVar8 = false;
    }
    else {
      pvVar5 = CRYPTO_get_ex_data(ad_01,saved_idx2);
      iVar3 = test_ptr("test/exdatatest.c",0x11e,"ex_data",pvVar5);
      if ((iVar3 == 0) ||
         (iVar3 = test_int_eq("test/exdatatest.c",0x120,"ex_data->dup",&_LC19,
                              *(undefined4 *)((long)pvVar5 + 0xc),1), iVar3 == 0))
      goto LAB_00100cc5;
      pvVar5 = CRYPTO_get_ex_data(ad_01,saved_idx);
      iVar3 = test_ptr_eq("test/exdatatest.c",0x124,&_LC26,&_LC25,pvVar5,val);
      if (iVar3 == 0) goto LAB_00100cc5;
      uVar7 = MYOBJ_gethello2(ad_01);
      iVar3 = test_ptr_eq("test/exdatatest.c",0x128,&_LC26,&_LC25,uVar7,val);
      if (iVar3 == 0) goto LAB_00100cc5;
      puVar6 = (undefined8 *)CRYPTO_get_ex_data(ad_01,saved_idx3);
      iVar3 = test_ptr("test/exdatatest.c",0xc3,"ex_data",puVar6);
      if (iVar3 == 0) {
        uVar7 = 0;
        gbl_result = 0;
        *(undefined4 *)((long)&ad_01[1].sk + 4) = 0;
      }
      else {
        uVar7 = *puVar6;
      }
      iVar3 = test_ptr_eq("test/exdatatest.c",300,&_LC26,&_LC25,uVar7,val);
      if (iVar3 == 0) goto LAB_00100cc5;
      bVar8 = gbl_result != 0;
    }
  }
  CRYPTO_free_ex_data(0xd,ad,ad);
  CRYPTO_free(ad);
  CRYPTO_free_ex_data(0xd,ad_00,ad_00);
  CRYPTO_free(ad_00);
  if (ad_01 != (CRYPTO_EX_DATA *)0x0) {
    CRYPTO_free_ex_data(0xd,ad_01,ad_01);
    CRYPTO_free(ad_01);
  }
LAB_001008f4:
  CRYPTO_free(saved_argp);
  saved_argp = (void *)0x0;
  CRYPTO_free(val);
  return bVar8;
}



undefined8 setup_tests(void)

{
  add_test("test_exdata",test_exdata);
  return 1;
}


