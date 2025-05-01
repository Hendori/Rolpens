
undefined8 test_string_tbl(void)

{
  int iVar1;
  ASN1_STRING_TABLE *pAVar2;
  
  pAVar2 = ASN1_STRING_TABLE_get(0xbc614e);
  iVar1 = test_ptr_null("test/asn1_string_table_test.c",0x18,&_LC0,pAVar2);
  if (iVar1 == 0) {
    test_info("test/asn1_string_table_test.c",0x19,
              "asn1 string table: ASN1_STRING_TABLE_get non-exist nid");
  }
  else {
    iVar1 = ASN1_STRING_TABLE_add(0xbc614e,-1,-1,0x1001,0);
    iVar1 = test_true("test/asn1_string_table_test.c",0x1e,&_LC3,iVar1 != 0);
    if (iVar1 == 0) {
      test_info("test/asn1_string_table_test.c",0x1f,"asn1 string table: add NID(%d) failed",
                0xbc614e);
    }
    else {
      iVar1 = ASN1_STRING_TABLE_add(0x5397fb1,-1,-1,0x1001,0);
      iVar1 = test_true("test/asn1_string_table_test.c",0x24,&_LC3,iVar1 != 0);
      if (iVar1 == 0) {
        test_info("test/asn1_string_table_test.c",0x25,"asn1 string table: add NID(%d) failed",
                  0x5397fb1);
      }
      else {
        pAVar2 = ASN1_STRING_TABLE_get(0xbc614e);
        iVar1 = test_ptr("test/asn1_string_table_test.c",0x2a,&_LC0,pAVar2);
        if (iVar1 == 0) {
          test_info("test/asn1_string_table_test.c",0x2b,"asn1 string table: get NID(%d) failed",
                    0xbc614e);
        }
        else {
          pAVar2 = ASN1_STRING_TABLE_get(0x5397fb1);
          iVar1 = test_ptr("test/asn1_string_table_test.c",0x30,&_LC0,pAVar2);
          if (iVar1 == 0) {
            test_info("test/asn1_string_table_test.c",0x31,"asn1 string table: get NID(%d) failed",
                      0x5397fb1);
          }
          else {
            ASN1_STRING_TABLE_cleanup();
            pAVar2 = ASN1_STRING_TABLE_get(0xbc614e);
            iVar1 = test_ptr_null("test/asn1_string_table_test.c",0x39,&_LC0,pAVar2);
            if (iVar1 == 0) {
              test_info("test/asn1_string_table_test.c",0x3a,"asn1 string table: get NID(%d) failed"
                        ,0xbc614e);
            }
            else {
              pAVar2 = ASN1_STRING_TABLE_get(0x5397fb1);
              iVar1 = test_ptr_null("test/asn1_string_table_test.c",0x3f,&_LC0,pAVar2);
              if (iVar1 != 0) {
                return 1;
              }
              test_info("test/asn1_string_table_test.c",0x40,"asn1 string table: get NID(%d) failed"
                        ,0x5397fb1);
            }
          }
        }
      }
    }
  }
  return 0;
}



undefined8 setup_tests(void)

{
  add_test("test_string_tbl",0x100000);
  return 1;
}


