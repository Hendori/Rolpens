
undefined8 test_poly1305(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined1 *extraout_RDX;
  undefined1 *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  long in_FS_OFFSET;
  undefined1 local_d78 [256];
  ulong local_c78;
  undefined1 local_c70 [1032];
  undefined1 local_868 [1024];
  undefined8 local_468;
  undefined1 local_460 [1032];
  undefined1 local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar6 = (ulong *)(&tests + (long)param_1 * 0xc18);
  puVar7 = &local_c78;
  for (lVar4 = 0x183; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  iVar1 = test_size_t_eq("test/poly1305_internal_test.c",0x5ed,"expectedlen","sizeof(out)",local_468
                         ,0x10);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    Poly1305_Init(local_d78,local_868);
    Poly1305_Update(local_d78,local_c70,local_c78);
    Poly1305_Final(local_d78,local_58);
    iVar1 = test_mem_eq("test/poly1305_internal_test.c",0x5f4,&_LC4,"expected",local_58,local_468,
                        local_460,local_468);
    if (iVar1 == 0) {
      test_info("test/poly1305_internal_test.c",0x5f5,"Poly1305 test #%d failed.",param_1);
      uVar2 = 0;
    }
    else {
      if (0x10 < local_c78) {
        Poly1305_Init(local_d78,local_868);
        Poly1305_Update(local_d78,local_c70,1);
        Poly1305_Update(local_d78,local_c70 + 1,local_c78 - 1);
        Poly1305_Final(local_d78,local_58);
        puVar5 = local_460;
        uVar2 = local_468;
        iVar1 = test_mem_eq("test/poly1305_internal_test.c",0x5ff,&_LC4,"expected",local_58,
                            local_468);
        if (iVar1 == 0) {
          test_info("test/poly1305_internal_test.c",0x600,"Poly1305 test #%d/1+(N-1) failed.",
                    param_1,puVar5,uVar2);
          uVar2 = 0;
          goto LAB_0010012a;
        }
        if (0x20 < local_c78) {
          uVar3 = local_c78 >> 1;
          Poly1305_Init(local_d78,local_868);
          Poly1305_Update(local_d78,local_c70,uVar3);
          Poly1305_Update(local_d78,local_c70 + uVar3,local_c78 - uVar3);
          Poly1305_Final(local_d78,local_58);
          iVar1 = test_mem_eq("test/poly1305_internal_test.c",0x60d,&_LC4,"expected",local_58,
                              local_468,local_460,local_468);
          if (iVar1 == 0) {
            test_info("test/poly1305_internal_test.c",0x60e,"Poly1305 test #%d/2 failed.",param_1);
            uVar2 = 0;
            goto LAB_0010012a;
          }
          uVar3 = 0x10;
          puVar5 = extraout_RDX;
          do {
            Poly1305_Init(local_d78,local_868,puVar5);
            Poly1305_Update(local_d78,local_c70,uVar3);
            Poly1305_Update(local_d78,local_c70 + uVar3,local_c78 - uVar3);
            Poly1305_Final(local_d78,local_58);
            puVar5 = local_460;
            iVar1 = test_mem_eq("test/poly1305_internal_test.c",0x618,&_LC4,"expected",local_58,
                                local_468,local_460,local_468);
            if (iVar1 == 0) {
              test_info("test/poly1305_internal_test.c",0x619,"Poly1305 test #%d/%zu+%zu failed.",
                        param_1,uVar3,local_c78 - uVar3);
              uVar2 = 0;
              goto LAB_0010012a;
            }
            uVar3 = uVar3 + 0x10;
          } while (uVar3 < local_c78);
        }
      }
      uVar2 = 1;
    }
  }
LAB_0010012a:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 setup_tests(void)

{
  add_all_tests("test_poly1305",0x100000,0x23,1);
  return 1;
}


