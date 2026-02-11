
undefined8 convert_tm_to_asn1_time(void)

{
  ASN1_TIME *a;
  
  a = ASN1_TIME_set((ASN1_TIME *)0x0,0xf0c2a5cdf1ce29);
  ASN1_STRING_free(a);
  return 1;
}



undefined8 convert_asn1_to_time_t(int param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(asn1_to_utc + (long)param_1 * 0x10);
  uVar4 = test_asn1_string_to_time_t(uVar1);
  uVar2 = *(undefined8 *)(asn1_to_utc + (long)param_1 * 0x10 + 8);
  iVar3 = test_time_t_eq("test/asn1_time_test.c",0x1b7,"testdateutc","asn1_to_utc[idx].expected",
                         uVar4,uVar2);
  if (iVar3 != 0) {
    return 1;
  }
  test_info("test/asn1_time_test.c",0x1b8,
            "test_asn1_string_to_time_t (%s) failed: expected %lli, got %lli\n",uVar1,uVar2,uVar4);
  return 0;
}



void test_table_compare(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  
  lVar3 = (long)param_1 * 0x38;
  uVar1 = *(undefined4 *)(tbl_compare_testdata + lVar3 + 0x30);
  uVar2 = ASN1_TIME_compare(tbl_compare_testdata + lVar3,lVar3 + 0x102018);
  test_int_eq("test/asn1_time_test.c",0x173,"ASN1_TIME_compare(&td->t1, &td->t2)","td->result",uVar2
              ,uVar1);
  return;
}



undefined4 test_time_dup(void)

{
  int iVar1;
  undefined4 uVar2;
  time_t t;
  ASN1_TIME *t_00;
  ASN1_GENERALIZEDTIME *a;
  ASN1_STRING *a_00;
  
  t = time((time_t *)0x0);
  t_00 = ASN1_TIME_adj((ASN1_TIME *)0x0,t,0,0);
  if (t_00 == (ASN1_TIME *)0x0) {
    a_00 = (ASN1_STRING *)0x0;
    a = (ASN1_STRING *)0x0;
    uVar2 = 0;
    test_info("test/asn1_time_test.c",0x17f,"Internal error.");
  }
  else {
    a = ASN1_TIME_to_generalizedtime(t_00,(ASN1_GENERALIZEDTIME **)0x0);
    if (a == (ASN1_GENERALIZEDTIME *)0x0) {
      a_00 = (ASN1_STRING *)0x0;
      uVar2 = 0;
      test_info("test/asn1_time_test.c",0x185,"Internal error.");
    }
    else {
      a_00 = (ASN1_STRING *)ASN1_TIME_dup(t_00);
      iVar1 = test_ptr_ne("test/asn1_time_test.c",0x18a,"asn1_time_dup",&_LC7,a_00,0);
      if (iVar1 == 0) {
        test_info("test/asn1_time_test.c",0x18b,"ASN1_TIME_dup() failed.");
        uVar2 = 0;
      }
      else {
        uVar2 = ASN1_TIME_compare(t_00,a_00);
        iVar1 = test_int_eq("test/asn1_time_test.c",0x18e,
                            "ASN1_TIME_compare(asn1_time, asn1_time_dup)",&_LC10,uVar2,0);
        if (iVar1 == 0) {
          test_info("test/asn1_time_test.c",399,"ASN1_TIME_dup() duplicated non-identical value.");
          uVar2 = 0;
        }
        else {
          ASN1_STRING_free(a_00);
          a_00 = (ASN1_STRING *)ASN1_UTCTIME_dup(t_00);
          iVar1 = test_ptr_ne("test/asn1_time_test.c",0x195,"asn1_time_dup",&_LC7,a_00,0);
          if (iVar1 == 0) {
            test_info("test/asn1_time_test.c",0x196,"ASN1_UTCTIME_dup() failed.");
            uVar2 = 0;
          }
          else {
            uVar2 = ASN1_TIME_compare(t_00,a_00);
            iVar1 = test_int_eq("test/asn1_time_test.c",0x199,
                                "ASN1_TIME_compare(asn1_time, asn1_time_dup)",&_LC10,uVar2,0);
            if (iVar1 == 0) {
              test_info("test/asn1_time_test.c",0x19a,
                        "ASN1_UTCTIME_dup() duplicated non-identical UTCTIME value.");
              uVar2 = 0;
            }
            else {
              ASN1_STRING_free(a_00);
              a_00 = (ASN1_STRING *)ASN1_GENERALIZEDTIME_dup(a);
              iVar1 = test_ptr_ne("test/asn1_time_test.c",0x1a0,"asn1_time_dup",&_LC7,a_00,0);
              if (iVar1 == 0) {
                test_info("test/asn1_time_test.c",0x1a1,"ASN1_GENERALIZEDTIME_dup() failed.");
                uVar2 = 0;
              }
              else {
                uVar2 = ASN1_TIME_compare(a,a_00);
                iVar1 = test_int_eq("test/asn1_time_test.c",0x1a4,
                                    "ASN1_TIME_compare(asn1_gentime, asn1_time_dup)",&_LC10,uVar2,0)
                ;
                if (iVar1 == 0) {
                  test_info("test/asn1_time_test.c",0x1a5,
                            "ASN1_GENERALIZEDTIME_dup() dup\'ed non-identical value.");
                  uVar2 = 0;
                }
                else {
                  uVar2 = 1;
                }
              }
            }
          }
        }
      }
    }
  }
  ASN1_STRING_free(t_00);
  ASN1_STRING_free(a);
  ASN1_STRING_free(a_00);
  return uVar2;
}



undefined8 test_table(long param_1,int param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  size_t sVar9;
  undefined8 uVar10;
  ASN1_TIME *pAVar11;
  ASN1_GENERALIZEDTIME *a;
  long in_FS_OFFSET;
  uint local_60;
  uint local_5c;
  ASN1_TIME local_58;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)(param_1 + (long)param_2 * 0x28);
  local_58.data = (uchar *)*puVar1;
  sVar9 = strlen((char *)local_58.data);
  uVar4 = *(undefined4 *)(puVar1 + 2);
  local_58.flags = 0;
  local_58.length = (int)sVar9;
  local_58.type = *(int *)(puVar1 + 1);
  iVar3 = ASN1_TIME_check(&local_58);
  iVar3 = test_int_eq("test/asn1_time_test.c",0xae,"ASN1_TIME_check(&atime)","td->check_result",
                      iVar3,uVar4);
  if (iVar3 == 0) {
    test_info("test/asn1_time_test.c",0xaf,"ASN1_TIME_check(%s) unexpected result",local_58.data);
  }
  uVar10 = 1;
  if (*(int *)(puVar1 + 2) == 0) goto LAB_001004b5;
  uVar4 = ASN1_TIME_cmp_time_t(&local_58,puVar1[3]);
  iVar5 = test_int_eq("test/asn1_time_test.c",0xb5,"ASN1_TIME_cmp_time_t(&atime, td->t)",&_LC10,
                      uVar4,0);
  if (iVar5 == 0) {
    test_info("test/asn1_time_test.c",0xb6,"ASN1_TIME_cmp_time_t(%s vs %ld) compare failed",
              local_58.data,puVar1[3]);
  }
  iVar6 = ASN1_TIME_diff(&local_60,&local_5c,&local_58,&local_58);
  iVar6 = test_true("test/asn1_time_test.c",0xba,"ASN1_TIME_diff(&day, &sec, &atime, &atime)",
                    iVar6 != 0);
  if (iVar6 == 0) {
    test_info("test/asn1_time_test.c",0xbb,"ASN1_TIME_diff(%s) to self failed",local_58.data);
  }
  bVar2 = iVar6 == 0 || (iVar5 == 0 || iVar3 == 0);
  iVar3 = test_int_eq("test/asn1_time_test.c",0xbe,&_LC25,&_LC10,local_60,0);
  if ((iVar3 == 0) ||
     (iVar3 = test_int_eq("test/asn1_time_test.c",0xbe,&_LC27,&_LC10,local_5c,0), iVar3 == 0)) {
    bVar2 = true;
    test_info("test/asn1_time_test.c",0xbf,"ASN1_TIME_diff(%s) to self not equal",local_58.data);
  }
  iVar3 = ASN1_TIME_diff(&local_60,&local_5c,gtime,&local_58);
  iVar3 = test_true("test/asn1_time_test.c",0xc3,"ASN1_TIME_diff(&day, &sec, &gtime, &atime)",
                    iVar3 != 0);
  if (iVar3 == 0) {
    test_info("test/asn1_time_test.c",0xc4,"ASN1_TIME_diff(%s) to baseline failed",local_58.data);
LAB_0010066f:
    bVar2 = true;
  }
  else {
    iVar3 = *(int *)(puVar1 + 4);
    if (iVar3 == 0) {
      iVar3 = test_true("test/asn1_time_test.c",0xc6,"(day == 0 && sec == 0)",
                        local_60 == 0 && local_5c == 0);
      if (iVar3 == 0) {
        iVar3 = *(int *)(puVar1 + 4);
        goto LAB_0010061b;
      }
    }
    else {
LAB_0010061b:
      if (iVar3 == -1) {
        iVar3 = test_true("test/asn1_time_test.c",199,"(day < 0 || sec < 0)",
                          (local_60 | local_5c) >> 0x1f);
        if (iVar3 != 0) goto LAB_00100675;
        iVar3 = *(int *)(puVar1 + 4);
      }
      if ((iVar3 != 1) ||
         (iVar3 = test_true("test/asn1_time_test.c",200,"(day > 0 || sec > 0)",
                            0 < (int)local_60 || 0 < (int)local_5c), iVar3 == 0)) {
        test_info("test/asn1_time_test.c",0xc9,"ASN1_TIME_diff(%s) to baseline bad comparison",
                  local_58.data);
        goto LAB_0010066f;
      }
    }
  }
LAB_00100675:
  uVar4 = *(undefined4 *)(puVar1 + 4);
  uVar7 = ASN1_TIME_cmp_time_t(&local_58,0x386bf200);
  iVar3 = test_int_eq("test/asn1_time_test.c",0xcd,"ASN1_TIME_cmp_time_t(&atime, gtime_t)",
                      "td->cmp_result",uVar7,uVar4);
  if (iVar3 == 0) {
    bVar2 = true;
    test_info("test/asn1_time_test.c",0xce,"ASN1_TIME_cmp_time_t(%s) to baseline bad comparison",
              local_58.data);
  }
  pAVar11 = ASN1_TIME_set((ASN1_TIME *)0x0,puVar1[3]);
  iVar3 = test_ptr("test/asn1_time_test.c",0xd3,"ptime",pAVar11);
  if (iVar3 == 0) {
    bVar2 = true;
    test_info("test/asn1_time_test.c",0xd4,"ASN1_TIME_set(%ld) failed",puVar1[3]);
  }
  else {
    uVar4 = ASN1_TIME_cmp_time_t(pAVar11,puVar1[3]);
    iVar3 = test_int_eq("test/asn1_time_test.c",0xd8,"ASN1_TIME_cmp_time_t(ptime, td->t)",&_LC10,
                        uVar4,0);
    if (iVar3 == 0) {
      test_info("test/asn1_time_test.c",0xd9,"ASN1_TIME_set(%ld) compare failed (%s->%s)",puVar1[3],
                *puVar1,pAVar11->data);
      iVar3 = test_int_eq("test/asn1_time_test.c",0xdd,"ptime->type","td->expected_type",
                          pAVar11->type,*(undefined4 *)((long)puVar1 + 0xc));
      if (iVar3 == 0) goto LAB_00100bbc;
LAB_00100bd6:
      bVar2 = true;
      test_info("test/asn1_time_test.c",0xe2,"ASN1_TIME_set() = %*s",pAVar11->length,pAVar11->data);
    }
    else {
      iVar3 = test_int_eq("test/asn1_time_test.c",0xdd,"ptime->type","td->expected_type",
                          pAVar11->type,*(undefined4 *)((long)puVar1 + 0xc));
      if (iVar3 == 0) {
LAB_00100bbc:
        test_info("test/asn1_time_test.c",0xde,"ASN1_TIME_set(%ld) unexpected type",puVar1[3]);
        goto LAB_00100bd6;
      }
    }
    ASN1_TIME_free(pAVar11);
  }
  pAVar11 = ASN1_TIME_new();
  iVar3 = test_ptr("test/asn1_time_test.c",0xe7,"ptime",pAVar11);
  if (iVar3 == 0) {
    bVar2 = true;
    test_info("test/asn1_time_test.c",0xe8,"ASN1_TIME_new() failed");
  }
  else {
    uVar4 = *(undefined4 *)(puVar1 + 2);
    iVar3 = ASN1_TIME_set_string(pAVar11,(char *)*puVar1);
    iVar3 = test_int_eq("test/asn1_time_test.c",0xec,"ASN1_TIME_set_string(ptime, td->data)",
                        "td->check_result",iVar3,uVar4);
    if (iVar3 == 0) {
      bVar2 = true;
      test_info("test/asn1_time_test.c",0xed,"ASN1_TIME_set_string_gmt(%s) failed",*puVar1);
    }
    uVar4 = *(undefined4 *)(puVar1 + 2);
    uVar7 = ASN1_TIME_normalize(pAVar11);
    iVar5 = test_int_eq("test/asn1_time_test.c",0xf0,"ASN1_TIME_normalize(ptime)","td->check_result"
                        ,uVar7,uVar4);
    if (iVar5 == 0) {
      bVar2 = true;
      test_info("test/asn1_time_test.c",0xf1,"ASN1_TIME_normalize(%s) failed",*puVar1);
    }
    iVar6 = test_int_eq("test/asn1_time_test.c",0xf4,"ptime->type","td->expected_type",pAVar11->type
                        ,*(undefined4 *)((long)puVar1 + 0xc));
    if (iVar6 == 0) {
      bVar2 = true;
      test_info("test/asn1_time_test.c",0xf5,"ASN1_TIME_set_string_gmt(%s) unexpected type",*puVar1)
      ;
    }
    local_5c = 0;
    local_60 = 0;
    iVar8 = ASN1_TIME_diff(&local_60,&local_5c,pAVar11,&local_58);
    iVar8 = test_true("test/asn1_time_test.c",0xf9,"ASN1_TIME_diff(&day, &sec, ptime, &atime)",
                      iVar8 != 0);
    if (((iVar8 == 0) ||
        (iVar8 = test_int_eq("test/asn1_time_test.c",0xf9,&_LC25,&_LC10,local_60,0), iVar8 == 0)) ||
       (iVar8 = test_int_eq("test/asn1_time_test.c",0xf9,&_LC27,&_LC10,local_5c,0), iVar8 == 0)) {
      test_info("test/asn1_time_test.c",0xfa,
                "ASN1_TIME_diff(day=%d, sec=%d, %s) after ASN1_TIME_set_string_gmt() failed",
                local_60,local_5c,*puVar1);
      uVar4 = *(undefined4 *)(puVar1 + 4);
      uVar7 = ASN1_TIME_cmp_time_t(pAVar11,0x386bf200);
      iVar3 = test_int_eq("test/asn1_time_test.c",0xfd,"ASN1_TIME_cmp_time_t(ptime, gtime_t)",
                          "td->cmp_result",uVar7,uVar4);
      if (iVar3 == 0) goto LAB_00100b0f;
LAB_00100b29:
      bVar2 = true;
LAB_00100b2f:
      test_info("test/asn1_time_test.c",0x102,"ASN1_TIME_set_string_gmt() = %*s",pAVar11->length,
                pAVar11->data);
    }
    else {
      uVar4 = *(undefined4 *)(puVar1 + 4);
      uVar7 = ASN1_TIME_cmp_time_t(pAVar11,0x386bf200);
      iVar8 = test_int_eq("test/asn1_time_test.c",0xfd,"ASN1_TIME_cmp_time_t(ptime, gtime_t)",
                          "td->cmp_result",uVar7,uVar4);
      if (iVar8 == 0) {
LAB_00100b0f:
        test_info("test/asn1_time_test.c",0xfe,
                  "ASN1_TIME_cmp_time_t(%s) after ASN1_TIME_set_string_gnt() to baseline bad comparison"
                  ,*puVar1);
        goto LAB_00100b29;
      }
      if (iVar6 == 0 || (iVar5 == 0 || iVar3 == 0)) goto LAB_00100b2f;
    }
    ASN1_TIME_free(pAVar11);
  }
  pAVar11 = ASN1_TIME_new();
  iVar3 = test_ptr("test/asn1_time_test.c",0x107,"ptime",pAVar11);
  if (iVar3 == 0) {
    test_info("test/asn1_time_test.c",0x108,"ASN1_TIME_new() failed");
    if (*(int *)(puVar1 + 1) == 0x17) {
      bVar2 = true;
LAB_00100cb6:
      a = ASN1_TIME_to_generalizedtime(&local_58,(ASN1_GENERALIZEDTIME **)0x0);
      iVar3 = *(int *)((long)puVar1 + 0x24);
      if (iVar3 != 1) {
LAB_00100ccf:
        if ((iVar3 == 0) &&
           (iVar3 = test_ptr_null("test/asn1_time_test.c",0x123,"ptime",a), iVar3 == 0)) {
          test_info("test/asn1_time_test.c",0x124,
                    "ASN1_TIME_to_generalizedtime(%s) should have failed",local_58.data);
          if (a == (ASN1_GENERALIZEDTIME *)0x0) goto LAB_00100ff3;
LAB_00100f9d:
          bVar2 = true;
LAB_00100cdc:
          uVar4 = ASN1_TIME_cmp_time_t(a,puVar1[3]);
          iVar3 = test_int_eq("test/asn1_time_test.c",0x127,"ASN1_TIME_cmp_time_t(ptime, td->t)",
                              &_LC10,uVar4,0);
          if (iVar3 == 0) {
            test_info("test/asn1_time_test.c",0x128,
                      "ASN1_TIME_to_generalizedtime(%s->%s) bad result",local_58.data,a->data);
            ASN1_TIME_free(a);
            goto LAB_00100780;
          }
        }
        else if (a != (ASN1_GENERALIZEDTIME *)0x0) goto LAB_00100cdc;
        ASN1_TIME_free(a);
        goto LAB_00100986;
      }
      iVar3 = test_ptr("test/asn1_time_test.c",0x120,"ptime",a);
      if (iVar3 != 0) {
        iVar3 = *(int *)((long)puVar1 + 0x24);
        goto LAB_00100ccf;
      }
      test_info("test/asn1_time_test.c",0x121,"ASN1_TIME_to_generalizedtime(%s) failed",
                local_58.data);
      if (a != (ASN1_GENERALIZEDTIME *)0x0) goto LAB_00100f9d;
LAB_00100ff3:
      ASN1_TIME_free((ASN1_TIME *)0x0);
    }
  }
  else {
    uVar4 = *(undefined4 *)(puVar1 + 2);
    iVar3 = ASN1_TIME_set_string(pAVar11,(char *)*puVar1);
    iVar3 = test_int_eq("test/asn1_time_test.c",0x10c,"ASN1_TIME_set_string(ptime, td->data)",
                        "td->check_result",iVar3,uVar4);
    if (iVar3 == 0) {
      bVar2 = true;
      test_info("test/asn1_time_test.c",0x10d,"ASN1_TIME_set_string(%s) failed",*puVar1);
    }
    local_5c = 0;
    local_60 = 0;
    iVar5 = ASN1_TIME_diff(&local_60,&local_5c,pAVar11,&local_58);
    iVar5 = test_true("test/asn1_time_test.c",0x111,"ASN1_TIME_diff(&day, &sec, ptime, &atime)",
                      iVar5 != 0);
    if (((iVar5 == 0) ||
        (iVar5 = test_int_eq("test/asn1_time_test.c",0x111,&_LC25,&_LC10,local_60,0), iVar5 == 0))
       || (iVar5 = test_int_eq("test/asn1_time_test.c",0x111,&_LC27,&_LC10,local_5c,0), iVar5 == 0))
    {
      test_info("test/asn1_time_test.c",0x112,
                "ASN1_TIME_diff(day=%d, sec=%d, %s) after ASN1_TIME_set_string() failed",local_60,
                local_5c,*puVar1);
      uVar4 = *(undefined4 *)(puVar1 + 4);
      uVar7 = ASN1_TIME_cmp_time_t(pAVar11,0x386bf200);
      iVar3 = test_int_eq("test/asn1_time_test.c",0x115,"ASN1_TIME_cmp_time_t(ptime, gtime_t)",
                          "td->cmp_result",uVar7,uVar4);
      if (iVar3 == 0) goto LAB_00100937;
LAB_00100951:
      bVar2 = true;
LAB_00100957:
      test_info("test/asn1_time_test.c",0x11a,"ASN1_TIME_set_string() = %*s",pAVar11->length,
                pAVar11->data);
    }
    else {
      uVar4 = *(undefined4 *)(puVar1 + 4);
      uVar7 = ASN1_TIME_cmp_time_t(pAVar11,0x386bf200);
      iVar5 = test_int_eq("test/asn1_time_test.c",0x115,"ASN1_TIME_cmp_time_t(ptime, gtime_t)",
                          "td->cmp_result",uVar7,uVar4);
      if (iVar5 == 0) {
LAB_00100937:
        test_info("test/asn1_time_test.c",0x116,
                  "ASN1_TIME_cmp_time_t(%s) after ASN1_TIME_set_string() to baseline bad comparison"
                  ,*puVar1);
        goto LAB_00100951;
      }
      if (iVar3 == 0) goto LAB_00100957;
    }
    ASN1_TIME_free(pAVar11);
    if (*(int *)(puVar1 + 1) == 0x17) goto LAB_00100cb6;
LAB_00100986:
    if (!bVar2) {
      uVar10 = 1;
      goto LAB_001004b5;
    }
  }
LAB_00100780:
  test_error("test/asn1_time_test.c",0x130,"atime=%s",local_58.data);
  uVar10 = 0;
LAB_001004b5:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void test_table_neg_64bit(undefined4 param_1)

{
  test_table(tbl_testdata_neg_64bit,param_1);
  return;
}



void test_table_pos_64bit(undefined4 param_1)

{
  test_table(tbl_testdata_pos_64bit,param_1);
  return;
}



void test_table_neg(undefined4 param_1)

{
  test_table(tbl_testdata_neg,param_1);
  return;
}



void test_table_pos(undefined4 param_1)

{
  test_table(tbl_testdata_pos,param_1);
  return;
}



undefined8 setup_tests(void)

{
  tm *ptVar1;
  long in_FS_OFFSET;
  time_t local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = -1;
  ptVar1 = localtime(&local_28);
  add_all_tests("test_table_pos",test_table_pos,0x30,1);
  if ((local_28 < 1) && (ptVar1 != (tm *)0x0)) {
    test_info("test/asn1_time_test.c",0x1ed,"Adding negative-sign time_t tests");
    add_all_tests("test_table_neg",test_table_neg,3,1);
  }
  test_info("test/asn1_time_test.c",0x1f1,"Adding 64-bit time_t tests");
  add_all_tests("test_table_pos_64bit",test_table_pos_64bit,4,1);
  if ((local_28 < 1) && (ptVar1 != (tm *)0x0)) {
    test_info("test/asn1_time_test.c",0x1f5,"Adding negative-sign 64-bit time_t tests");
    add_all_tests("test_table_neg_64bit",test_table_neg_64bit,2,1);
  }
  add_all_tests("test_table_compare",test_table_compare,0x10,1);
  add_test("test_time_dup",test_time_dup);
  add_all_tests("convert_asn1_to_time_t",convert_asn1_to_time_t,5,1);
  add_test("convert_tm_to_asn1_time",0x100000);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


