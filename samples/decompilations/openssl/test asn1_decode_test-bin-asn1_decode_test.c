
uint test_reuse_asn1_object(void)

{
  uint uVar1;
  int iVar2;
  ASN1_OBJECT *pAVar3;
  long in_FS_OFFSET;
  ASN1_OBJECT *local_30;
  uchar *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = (uchar *)&oid_der_7;
  local_30 = ASN1_OBJECT_create(0,(uchar *)&cn_der_6,5,"C","countryName");
  uVar1 = test_ptr("test/asn1_decode_test.c",0x106,
                   "obj = ASN1_OBJECT_create(NID_undef, cn_der, sizeof(cn_der), \"C\", \"countryName\")"
                   ,local_30);
  if (uVar1 != 0) {
    pAVar3 = d2i_ASN1_OBJECT(&local_30,&local_28,8);
    iVar2 = test_ptr("test/asn1_decode_test.c",0x10a,"d2i_ASN1_OBJECT(&obj, &p, sizeof(oid_der))",
                     pAVar3);
    uVar1 = (uint)(iVar2 != 0);
  }
  ASN1_OBJECT_free(local_30);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool test_invalid_template(void)

{
  int iVar1;
  ASN1_VALUE *val;
  long in_FS_OFFSET;
  uchar *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = (uchar *)&t_invalid_template;
  val = ASN1_item_d2i((ASN1_VALUE **)0x0,&local_28,5,(ASN1_ITEM *)local_it_5);
  iVar1 = test_ptr_null("test/asn1_decode_test.c",0xf3,&_LC5,val);
  if (iVar1 == 0) {
    ASN1_item_free(val,(ASN1_ITEM *)local_it_5);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1 != 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool test_uint64(void)

{
  ASN1_VALUE *val;
  long in_FS_OFFSET;
  uchar *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = (uchar *)&t_invalid_zero;
  val = ASN1_item_d2i((ASN1_VALUE **)0x0,&local_18,4,(ASN1_ITEM *)local_it_4);
  if (val != (ASN1_VALUE *)0x0) {
    ASN1_item_free(val,(ASN1_ITEM *)local_it_4);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return val != (ASN1_VALUE *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool test_int64(void)

{
  ASN1_VALUE *val;
  long in_FS_OFFSET;
  uchar *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = (uchar *)&t_invalid_zero;
  val = ASN1_item_d2i((ASN1_VALUE **)0x0,&local_18,4,(ASN1_ITEM *)local_it_3);
  if (val != (ASN1_VALUE *)0x0) {
    ASN1_item_free(val,(ASN1_ITEM *)local_it_3);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return val != (ASN1_VALUE *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool test_uint32(void)

{
  ASN1_VALUE *val;
  long in_FS_OFFSET;
  uchar *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = (uchar *)&t_invalid_zero;
  val = ASN1_item_d2i((ASN1_VALUE **)0x0,&local_18,4,(ASN1_ITEM *)local_it_2);
  if (val != (ASN1_VALUE *)0x0) {
    ASN1_item_free(val,(ASN1_ITEM *)local_it_2);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return val != (ASN1_VALUE *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool test_int32(void)

{
  ASN1_VALUE *val;
  long in_FS_OFFSET;
  uchar *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = (uchar *)&t_invalid_zero;
  val = ASN1_item_d2i((ASN1_VALUE **)0x0,&local_18,4,(ASN1_ITEM *)local_it_1);
  if (val != (ASN1_VALUE *)0x0) {
    ASN1_item_free(val,(ASN1_ITEM *)local_it_1);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return val != (ASN1_VALUE *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool test_long(void)

{
  ASN1_VALUE *val;
  long in_FS_OFFSET;
  uchar *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = (uchar *)&t_invalid_zero;
  val = ASN1_item_d2i((ASN1_VALUE **)0x0,&local_18,4,(ASN1_ITEM *)local_it_0);
  if (val != (ASN1_VALUE *)0x0) {
    ASN1_item_free(val,(ASN1_ITEM *)local_it_0);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return val != (ASN1_VALUE *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool test_utctime(void)

{
  int iVar1;
  ASN1_UTCTIME *a;
  long in_FS_OFFSET;
  uchar *local_38;
  uchar local_2d [13];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  builtin_memcpy(local_2d,"\x17\v0205104700Z",0xd);
  local_38 = local_2d;
  a = d2i_ASN1_UTCTIME((ASN1_UTCTIME **)0x0,&local_38,0xd);
  iVar1 = test_ptr_null("test/asn1_decode_test.c",0xce,"utctime",a);
  ASN1_UTCTIME_free(a);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1 != 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool test_gentime(void)

{
  int iVar1;
  ASN1_GENERALIZEDTIME *a;
  long in_FS_OFFSET;
  uchar *local_38;
  uchar local_2f [15];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  builtin_memcpy(local_2f,"\x18\r161208193400Z",0xf);
  local_38 = local_2f;
  a = d2i_ASN1_GENERALIZEDTIME((ASN1_GENERALIZEDTIME **)0x0,&local_38,0xf);
  iVar1 = test_ptr_null("test/asn1_decode_test.c",0xb6,"gentime",a);
  ASN1_GENERALIZEDTIME_free(a);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1 != 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 setup_tests(void)

{
  add_test("test_long",test_long);
  add_test("test_int32",test_int32);
  add_test("test_uint32",test_uint32);
  add_test("test_int64",test_int64);
  add_test("test_uint64",test_uint64);
  add_test("test_gentime",test_gentime);
  add_test("test_utctime",test_utctime);
  add_test("test_invalid_template",test_invalid_template);
  add_test("test_reuse_asn1_object",0x100000);
  return 1;
}


