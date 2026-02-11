
uint test_mdc2(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  size_t cnt;
  undefined8 uVar4;
  EVP_MD_CTX *ctx;
  EVP_MD *pEVar5;
  long in_FS_OFFSET;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  uchar local_58 [24];
  long local_40;
  
  ctx = (EVP_MD_CTX *)0x0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_ac = 2;
  cnt = strlen(text_0);
  OSSL_PARAM_construct_uint(&local_e8,"pad-type",&local_ac);
  local_a8 = local_e8;
  uStack_a0 = uStack_e0;
  local_98 = local_d8;
  uStack_90 = uStack_d0;
  local_88 = local_c8;
  OSSL_PARAM_construct_end(&local_e8);
  local_80 = local_e8;
  uStack_78 = uStack_e0;
  local_70 = local_d8;
  uStack_68 = uStack_d0;
  local_60 = local_c8;
  uVar4 = OSSL_PROVIDER_load(0,"legacy");
  uVar1 = test_ptr("test/mdc2test.c",0x3d,&_LC2,uVar4);
  if (uVar1 != 0) {
    ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
    iVar2 = test_ptr("test/mdc2test.c",0x45,&_LC4,ctx);
    if (iVar2 != 0) {
      pEVar5 = (EVP_MD *)EVP_mdc2();
      iVar2 = EVP_DigestInit_ex(ctx,pEVar5,(ENGINE *)0x0);
      iVar2 = test_true("test/mdc2test.c",0x46,"EVP_DigestInit_ex(c, EVP_mdc2(), NULL)",iVar2 != 0);
      if (iVar2 != 0) {
        iVar2 = EVP_DigestUpdate(ctx,text_0,cnt);
        iVar2 = test_true("test/mdc2test.c",0x47,"EVP_DigestUpdate(c, (unsigned char *)text, tlen)",
                          iVar2 != 0);
        if (iVar2 != 0) {
          iVar2 = EVP_DigestFinal_ex(ctx,local_58,(uint *)0x0);
          iVar2 = test_true("test/mdc2test.c",0x48,"EVP_DigestFinal_ex(c, &(md[0]), NULL)",
                            iVar2 != 0);
          if (iVar2 != 0) {
            uVar7 = 0x10;
            puVar6 = pad1;
            iVar2 = test_mem_eq("test/mdc2test.c",0x49,&_LC9,&_LC8,local_58,0x10);
            if (iVar2 != 0) {
              pEVar5 = (EVP_MD *)EVP_mdc2(uVar7,puVar6);
              iVar2 = EVP_DigestInit_ex(ctx,pEVar5,(ENGINE *)0x0);
              iVar2 = test_true("test/mdc2test.c",0x4a,"EVP_DigestInit_ex(c, EVP_mdc2(), NULL)",
                                iVar2 != 0);
              if (iVar2 != 0) {
                uVar3 = EVP_MD_CTX_set_params(ctx,&local_a8);
                iVar2 = test_int_gt("test/mdc2test.c",0x4d,"EVP_MD_CTX_set_params(c, params)",&_LC10
                                    ,uVar3,0);
                if (iVar2 != 0) {
                  iVar2 = EVP_DigestUpdate(ctx,text_0,cnt);
                  iVar2 = test_true("test/mdc2test.c",0x4e,
                                    "EVP_DigestUpdate(c, (unsigned char *)text, tlen)",iVar2 != 0);
                  if (iVar2 != 0) {
                    iVar2 = EVP_DigestFinal_ex(ctx,local_58,(uint *)0x0);
                    iVar2 = test_true("test/mdc2test.c",0x4f,"EVP_DigestFinal_ex(c, &(md[0]), NULL)"
                                      ,iVar2 != 0);
                    if (iVar2 != 0) {
                      iVar2 = test_mem_eq("test/mdc2test.c",0x50,&_LC9,&_LC12,local_58,0x10,pad2,
                                          0x10);
                      uVar1 = (uint)(iVar2 != 0);
                      goto LAB_001000e2;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    uVar1 = 0;
  }
LAB_001000e2:
  EVP_MD_CTX_free(ctx);
  OSSL_PROVIDER_unload(uVar4);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 setup_tests(void)

{
  add_test("test_mdc2",0x100000);
  return 1;
}


