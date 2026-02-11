
uint test_bad_asn1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  BIO *in;
  ASN1_VALUE *val;
  void *pvVar5;
  ulong uVar6;
  long in_FS_OFFSET;
  uchar *local_858;
  uchar *local_850;
  uchar local_848 [2056];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_850 = (uchar *)0x0;
  local_858 = local_848;
  in = BIO_new_file(test_file,"r");
  uVar1 = test_ptr("test/d2i_test.c",0x38,&_LC1,in);
  if (uVar1 == 0) goto LAB_001001ce;
  if (expected_error == 2) {
    pvVar5 = ASN1_item_d2i_bio(item_type,in,(void *)0x0);
    iVar2 = test_ptr_null("test/d2i_test.c",0x3c,"ASN1_item_d2i_bio(item_type, bio, NULL)",pvVar5);
joined_r0x0010019a:
    if (iVar2 == 0) {
LAB_001001a0:
      val = (ASN1_VALUE *)0x0;
      uVar1 = 0;
    }
    else {
      val = (ASN1_VALUE *)0x0;
LAB_00100233:
      uVar6 = ERR_peek_error();
      uVar1 = (uint)uVar6 & 0x7fffffff;
      if ((uVar6 & 0x80000000) == 0) {
        uVar1 = (uint)uVar6 & 0x7fffff;
      }
      iVar2 = test_false("test/d2i_test.c",0x65,
                         "ERR_GET_REASON(ERR_peek_error()) == ERR_R_MALLOC_FAILURE",uVar1 == 0xc0100
                        );
      uVar1 = (uint)(iVar2 != 0);
    }
  }
  else {
    iVar2 = BIO_read(in,local_848,0x800);
    iVar3 = test_int_ge("test/d2i_test.c",0x47,&_LC5,&_LC4,iVar2,0);
    if (iVar3 == 0) goto LAB_001001a0;
    val = ASN1_item_d2i((ASN1_VALUE **)0x0,&local_858,(long)iVar2,item_type);
    if (val == (ASN1_VALUE *)0x0) {
      iVar2 = test_int_eq("test/d2i_test.c",0x4c,"expected_error","ASN1_DECODE",expected_error,3);
      goto joined_r0x0010019a;
    }
    iVar4 = ASN1_item_i2d(val,&local_850,item_type);
    iVar3 = expected_error;
    if ((local_850 == (uchar *)0x0) || (iVar4 < 0)) {
      iVar2 = test_int_eq("test/d2i_test.c",0x54,"expected_error","ASN1_ENCODE",expected_error,4);
      if (iVar2 != 0) goto LAB_00100233;
      uVar1 = 0;
    }
    else if ((iVar2 == iVar4) && (iVar2 = memcmp(local_850,local_848,(long)iVar2), iVar2 == 0)) {
      iVar2 = test_int_eq("test/d2i_test.c",0x5f,"expected_error","ASN1_OK",iVar3,1);
      if (iVar2 != 0) goto LAB_00100233;
      uVar1 = 0;
    }
    else {
      uVar1 = test_int_eq("test/d2i_test.c",0x5a,"expected_error","ASN1_COMPARE",iVar3,5);
      if (uVar1 != 0) goto LAB_00100233;
    }
  }
  BIO_free(in);
  CRYPTO_free(local_850);
  ASN1_item_free(val,item_type);
LAB_001001ce:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
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
  undefined8 uVar2;
  char *__s2;
  long lVar3;
  long lVar4;
  undefined **ppuVar5;
  
  iVar1 = test_skip_common_options();
  if (iVar1 == 0) {
    test_error("test/d2i_test.c",0x83,"Error parsing test options\n");
  }
  else {
    uVar2 = test_get_argument(0);
    iVar1 = test_ptr("test/d2i_test.c",0x87,"test_type_name = test_get_argument(0)",uVar2);
    if (iVar1 != 0) {
      __s2 = (char *)test_get_argument(1);
      iVar1 = test_ptr("test/d2i_test.c",0x88,"expected_error_string = test_get_argument(1)",__s2);
      if (iVar1 != 0) {
        test_file = test_get_argument(2);
        iVar1 = test_ptr("test/d2i_test.c",0x89,"test_file = test_get_argument(2)",test_file);
        if (iVar1 != 0) {
          lVar4 = 0;
          item_type = ASN1_ITEM_lookup(uVar2);
          ppuVar5 = &expected_errors_0;
          if (item_type == 0) {
            lVar4 = 0;
            test_error("test/d2i_test.c",0x8f,"Unknown type %s",uVar2);
            test_note("Supported types:");
            while (lVar3 = ASN1_ITEM_get(lVar4), lVar3 != 0) {
              lVar4 = lVar4 + 1;
              test_note(&_LC18,*(undefined8 *)(lVar3 + 0x30));
            }
          }
          else {
            do {
              iVar1 = strcmp(*ppuVar5,__s2);
              if (iVar1 == 0) {
                expected_error = (&DAT_00100808)[lVar4 * 4];
                break;
              }
              lVar4 = lVar4 + 1;
              ppuVar5 = ppuVar5 + 2;
            } while (lVar4 != 5);
            if (expected_error != 0) {
              add_test("test_bad_asn1",0x100000);
              return 1;
            }
            test_error("test/d2i_test.c",0xa3,"Unknown expected error %s\n",__s2);
          }
        }
      }
    }
  }
  return 0;
}


