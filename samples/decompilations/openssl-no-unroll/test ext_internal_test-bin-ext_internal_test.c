
undefined4 test_extension_list(void)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined4 local_3c;
  
  lVar7 = 0;
  puVar6 = &ext_list;
  local_3c = 1;
  do {
    while( true ) {
      uVar3 = *puVar6;
      iVar5 = test_size_t_eq("test/ext_internal_test.c",0x58,&_LC1,"ext_list[i].idx",lVar7,uVar3);
      if (iVar5 == 0) {
        test_error("test/ext_internal_test.c",0x5a,"TLSEXT_IDX_%s=%zd, found at=%zd\n",puVar6[2],
                   uVar3,lVar7);
        local_3c = 0;
      }
      uVar4 = ossl_get_extension_type(uVar3);
      uVar2 = *(undefined4 *)(puVar6 + 1);
      iVar5 = test_uint_eq("test/ext_internal_test.c",0x5e,&_LC5,"ext_list[i].type",uVar4,uVar2);
      if (iVar5 != 0) break;
      puVar1 = puVar6 + 2;
      lVar7 = lVar7 + 1;
      puVar6 = puVar6 + 3;
      test_error("test/ext_internal_test.c",0x60,"TLSEXT_IDX_%s=%zd expected=0x%05X got=0x%05X",
                 *puVar1,uVar3,uVar2,uVar4);
      local_3c = 0;
      if (lVar7 == 0x1e) {
        return 0;
      }
    }
    lVar7 = lVar7 + 1;
    puVar6 = puVar6 + 3;
  } while (lVar7 != 0x1e);
  return local_3c;
}



undefined8 setup_tests(void)

{
  add_test("test_extension_list",0x100000);
  return 1;
}


