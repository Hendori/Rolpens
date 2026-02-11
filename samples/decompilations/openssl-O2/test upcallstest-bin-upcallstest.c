
undefined8 obj_query(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  *param_3 = 0;
  return 0;
}



bool obj_provider_init(undefined8 param_1,int *param_2,undefined8 *param_3,undefined8 *param_4,
                      code *param_5,code *param_6)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  bool bVar4;
  
  *param_4 = param_1;
  *param_3 = obj_dispatch_table;
  iVar3 = *param_2;
  bVar4 = false;
  bVar2 = false;
  if (iVar3 != 0) {
    do {
      while (bVar1 = bVar2, iVar3 != 0xb) {
        if (iVar3 == 0xc) {
          param_5 = *(code **)(param_2 + 2);
          bVar4 = true;
        }
        iVar3 = param_2[4];
        param_2 = param_2 + 4;
        bVar2 = bVar1;
        if (iVar3 == 0) goto LAB_0010007a;
      }
      param_6 = *(code **)(param_2 + 2);
      iVar3 = param_2[4];
      param_2 = param_2 + 4;
      bVar1 = true;
      bVar2 = true;
    } while (iVar3 != 0);
LAB_0010007a:
    if (bVar4) {
      c_obj_create = param_5;
    }
    if (bVar1) {
      c_obj_add_sigid = param_6;
    }
  }
  iVar3 = (*c_obj_create)(param_1,"1.3.6.1.4.1.16604.998877.2","my-digest","my-digest-long");
  if ((((iVar3 == 0) ||
       (iVar3 = (*c_obj_create)(param_1,"1.3.6.1.4.1.16604.998877.1","my-sig","my-sig-long"),
       iVar3 == 0)) ||
      (iVar3 = (*c_obj_create)(param_1,"1.3.6.1.4.1.16604.998877.3","my-sigalg","my-sigalg-long"),
      iVar3 == 0)) ||
     (((iVar3 = (*c_obj_create)(param_1,"1.3.6.1.4.1.16604.998877.4","my-nodig-sig",
                                "my-nodig-sig-long"), iVar3 == 0 ||
       (iVar3 = (*c_obj_create)(param_1,"1.3.6.1.4.1.16604.998877.5","my-nodig-sigalg",
                                "my-nodig-sigalg-long"), iVar3 == 0)) ||
      ((iVar3 = (*c_obj_add_sigid)(param_1,"1.3.6.1.4.1.16604.998877.3","my-digest","my-sig-long"),
       iVar3 == 0 ||
       (iVar3 = (*c_obj_add_sigid)(param_1,"1.3.6.1.4.1.16604.998877.5",&_LC15,"my-nodig-sig-long"),
       iVar3 == 0)))))) {
    bVar4 = false;
  }
  else {
    iVar3 = (*c_obj_add_sigid)(param_1,"1.3.6.1.4.1.16604.998877.5","NonsenseAlg",
                               "my-nodig-sig-long");
    bVar4 = iVar3 == 0;
  }
  return bVar4;
}



undefined8 obj_create_test(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  int local_4c;
  int local_48;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar4 = OSSL_LIB_CTX_new();
  iVar1 = test_ptr("test/upcallstest.c",0x65,"libctx",uVar4);
  if (iVar1 == 0) {
LAB_0010023c:
    uVar6 = 0;
    uVar5 = 0;
  }
  else {
    iVar1 = OSSL_PROVIDER_add_builtin(uVar4,"obj-prov",obj_provider_init);
    iVar1 = test_true("test/upcallstest.c",0x68,
                      "OSSL_PROVIDER_add_builtin(libctx, \"obj-prov\", obj_provider_init)",
                      iVar1 != 0);
    if (iVar1 == 0) goto LAB_0010023c;
    uVar5 = OSSL_PROVIDER_load(uVar4,"obj-prov");
    iVar1 = test_ptr("test/upcallstest.c",0x6a,"objprov = OSSL_PROVIDER_load(libctx, \"obj-prov\")",
                     uVar5);
    if (iVar1 == 0) {
LAB_001002e1:
      uVar6 = 0;
    }
    else {
      iVar1 = OBJ_txt2nid("1.3.6.1.4.1.16604.998877.3");
      iVar2 = test_int_ne("test/upcallstest.c",0x6f,"sigalgnid","NID_undef",iVar1,0);
      if (iVar2 == 0) goto LAB_001002e1;
      iVar1 = OBJ_find_sigid_algs(iVar1,&local_4c,&local_48);
      iVar1 = test_true("test/upcallstest.c",0x70,
                        "OBJ_find_sigid_algs(sigalgnid, &digestnid, &signid)",iVar1 != 0);
      if (iVar1 == 0) goto LAB_001002e1;
      iVar1 = test_int_ne("test/upcallstest.c",0x71,"digestnid","NID_undef",local_4c,0);
      if (iVar1 == 0) goto LAB_001002e1;
      iVar1 = test_int_ne("test/upcallstest.c",0x72,"signid","NID_undef",local_48,0);
      if (iVar1 == 0) goto LAB_001002e1;
      iVar1 = OBJ_sn2nid("my-digest");
      iVar1 = test_int_eq("test/upcallstest.c",0x73,"digestnid","OBJ_sn2nid(DIGEST_SN)",local_4c,
                          iVar1);
      if (iVar1 == 0) goto LAB_001002e1;
      iVar1 = OBJ_ln2nid("my-sig-long");
      iVar1 = test_int_eq("test/upcallstest.c",0x74,"signid","OBJ_ln2nid(SIG_LN)",local_48,iVar1);
      if (iVar1 == 0) goto LAB_001002e1;
      iVar1 = OBJ_txt2nid("1.3.6.1.4.1.16604.998877.5");
      iVar2 = test_int_ne("test/upcallstest.c",0x79,"sigalgnid","NID_undef",iVar1,0);
      if (iVar2 == 0) goto LAB_001002e1;
      iVar1 = OBJ_find_sigid_algs(iVar1,&local_4c,&local_48);
      iVar1 = test_true("test/upcallstest.c",0x7a,
                        "OBJ_find_sigid_algs(sigalgnid, &digestnid, &signid)",iVar1 != 0);
      if (iVar1 == 0) goto LAB_001002e1;
      iVar1 = test_int_eq("test/upcallstest.c",0x7b,"digestnid","NID_undef",local_4c,0);
      if (iVar1 == 0) goto LAB_001002e1;
      iVar1 = test_int_ne("test/upcallstest.c",0x7c,"signid","NID_undef",local_48,0);
      if (iVar1 == 0) goto LAB_001002e1;
      iVar2 = OBJ_sn2nid("my-sigalg");
      local_4c = OBJ_sn2nid("my-digest");
      local_48 = OBJ_ln2nid("my-sig-long");
      iVar3 = OBJ_find_sigid_by_algs(&local_44,local_4c,local_48);
      iVar1 = local_48;
      if ((iVar3 == 0) || (local_44 != iVar2)) {
LAB_00100528:
        uVar6 = 0;
        goto LAB_00100251;
      }
      iVar3 = OBJ_sn2nid("SHA512");
      iVar1 = OBJ_find_sigid_by_algs(&local_44,iVar3,iVar1);
      if ((iVar1 != 0) && (local_44 == iVar2)) goto LAB_00100528;
      iVar1 = OBJ_sn2nid("my-nodig-sigalg");
      local_4c = OBJ_sn2nid("SHA512");
      local_48 = OBJ_ln2nid("my-nodig-sig-long");
      iVar2 = OBJ_find_sigid_by_algs(&local_44,local_4c,local_48);
      if ((iVar2 == 0) || (local_44 != iVar1)) goto LAB_00100528;
      local_4c = 0;
      iVar2 = OBJ_find_sigid_by_algs(&local_44,0,local_48);
      if ((iVar2 == 0) || (local_44 != iVar1)) goto LAB_00100528;
      uVar6 = 1;
    }
  }
  OSSL_PROVIDER_unload(uVar5);
  OSSL_LIB_CTX_free(uVar4);
LAB_00100251:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 setup_tests(void)

{
  add_test("obj_create_test",obj_create_test);
  return 1;
}


