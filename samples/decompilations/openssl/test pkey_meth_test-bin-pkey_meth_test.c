
int test_pkey_meths(void)

{
  ulong uVar1;
  EVP_PKEY_METHOD *pEVar2;
  char *pcVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  long in_FS_OFFSET;
  int local_34;
  long local_30;
  
  iVar5 = 1;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar6 = -1;
  for (uVar4 = 0; uVar1 = EVP_PKEY_meth_get_count(), uVar4 < uVar1; uVar4 = uVar4 + 1) {
    pEVar2 = (EVP_PKEY_METHOD *)EVP_PKEY_meth_get0(uVar4);
    EVP_PKEY_meth_get0_info(&local_34,(int *)0x0,pEVar2);
    if (local_34 < iVar6) {
      iVar5 = 0;
    }
    iVar6 = local_34;
  }
  if (iVar5 == 0) {
    test_error("test/pkey_meth_test.c",0x48,"EVP_PKEY_METHOD table out of order");
    for (uVar4 = 0; uVar1 = EVP_PKEY_meth_get_count(), uVar4 < uVar1; uVar4 = uVar4 + 1) {
      pEVar2 = (EVP_PKEY_METHOD *)EVP_PKEY_meth_get0(uVar4);
      EVP_PKEY_meth_get0_info(&local_34,(int *)0x0,pEVar2);
      pcVar3 = OBJ_nid2ln(local_34);
      test_note("%d : %s",local_34,pcVar3);
    }
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar5;
}



int test_asn1_meths(void)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  EVP_PKEY_ASN1_METHOD *pEVar5;
  int iVar6;
  int iVar7;
  long in_FS_OFFSET;
  int local_4c;
  char *local_48;
  long local_40;
  
  iVar7 = 1;
  iVar3 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar6 = -1;
  while( true ) {
    iVar2 = EVP_PKEY_asn1_get_count();
    if (iVar2 <= iVar3) break;
    pEVar5 = EVP_PKEY_asn1_get0(iVar3);
    EVP_PKEY_asn1_get0_info(&local_4c,(int *)0x0,(int *)0x0,(char **)0x0,(char **)0x0,pEVar5);
    if (local_4c < iVar6) {
      iVar7 = 0;
    }
    iVar3 = iVar3 + 1;
    iVar6 = local_4c;
  }
  if (iVar7 == 0) {
    iVar6 = 0;
    test_error("test/pkey_meth_test.c",0x27,"EVP_PKEY_ASN1_METHOD table out of order");
    while( true ) {
      iVar3 = EVP_PKEY_asn1_get_count();
      if (iVar3 <= iVar6) break;
      pEVar5 = EVP_PKEY_asn1_get0(iVar6);
      EVP_PKEY_asn1_get0_info(&local_4c,(int *)0x0,(int *)0x0,&local_48,(char **)0x0,pEVar5);
      if (local_48 == (char *)0x0) {
        local_48 = "<NO NAME>";
      }
      pcVar1 = local_48;
      iVar6 = iVar6 + 1;
      pcVar4 = OBJ_nid2ln(local_4c);
      test_note("%d : %s : %s",local_4c,pcVar4,pcVar1);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 setup_tests(void)

{
  add_test("test_asn1_meths",test_asn1_meths);
  add_test("test_pkey_meths",0x100000);
  return 1;
}


