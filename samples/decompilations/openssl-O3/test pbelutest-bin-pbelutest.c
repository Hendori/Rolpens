
undefined8 test_pbelu(void)

{
  ulong uVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  ulong uVar5;
  long lVar6;
  char *pcVar7;
  int iVar8;
  long in_FS_OFFSET;
  int local_48;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = 0;
  do {
    uVar5 = uVar1;
    iVar2 = EVP_PBE_get(&local_48,&local_44,uVar5);
    if (iVar2 == 0) {
      uVar3 = 1;
      goto LAB_0010008c;
    }
    EVP_PBE_find(local_48,local_44,(int *)0x0,(int *)0x0,(undefined1 **)0x0);
    iVar2 = test_true("test/pbelutest.c",0x18,"EVP_PBE_find(pbe_type, pbe_nid, NULL, NULL, 0)");
    uVar1 = uVar5 + 1;
  } while (iVar2 != 0);
  lVar6 = 0;
  test_note("i=%d, pbe_type=%d, pbe_nid=%d",uVar5 & 0xffffffff,local_48,local_44);
  iVar2 = -1;
  iVar8 = -1;
  while (uVar3 = EVP_PBE_get(&local_48,&local_44,lVar6), (int)uVar3 != 0) {
    pcVar7 = "ERROR";
    if (((iVar2 <= local_48) && (pcVar7 = "OK", local_48 == iVar2)) && (local_44 < iVar8)) {
      pcVar7 = "ERROR";
    }
    pcVar4 = OBJ_nid2sn(local_44);
    lVar6 = lVar6 + 1;
    test_note("PBE type=%d %d (%s): %s\n",local_48,local_44,pcVar4,pcVar7);
    iVar2 = local_48;
    iVar8 = local_44;
  }
LAB_0010008c:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



undefined8 setup_tests(void)

{
  add_test("test_pbelu",0x100000);
  return 1;
}


