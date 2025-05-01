
undefined4 set_enc_pubkey_test(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  BIO *a;
  undefined8 uVar5;
  int *piVar6;
  long in_FS_OFFSET;
  EVP_PKEY *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (EVP_PKEY *)0x0;
  lVar4 = (long)param_1 * 0x108;
  piVar6 = (int *)(pkey_params + lVar4 + 0x18);
  uVar2 = *(undefined4 *)(pkey_params + lVar4);
  if (*(long *)(pkey_params + lVar4 + 0x20) == 0) {
    uVar2 = test_skip("test/evp_pkey_dparams_test.c",0x11a,"Not applicable test");
    goto LAB_001000a3;
  }
  a = BIO_new_mem_buf(*(void **)(pkey_params + lVar4 + 8),*(int *)(pkey_params + lVar4 + 0x10));
  iVar1 = test_ptr("test/evp_pkey_dparams_test.c",0x11c,
                   "in = BIO_new_mem_buf(pkey_params[id].param_bin, (int)pkey_params[id].param_bin_len)"
                   ,a);
  if (iVar1 == 0) {
LAB_00100090:
    uVar2 = 0;
  }
  else {
    uVar5 = d2i_KeyParams_bio(uVar2,&local_48,a);
    iVar1 = test_ptr("test/evp_pkey_dparams_test.c",0x11f,"d2i_KeyParams_bio(type, &in_key, in)",
                     uVar5);
    if (iVar1 == 0) goto LAB_00100090;
    iVar1 = 0;
    do {
      if (*(long *)(piVar6 + 2) == 0) break;
      if (*piVar6 == 0) {
        uVar2 = EVP_PKEY_set1_encoded_public_key
                          (local_48,*(long *)(piVar6 + 2),*(undefined8 *)(piVar6 + 4));
        iVar3 = test_int_gt("test/evp_pkey_dparams_test.c",300,
                            "EVP_PKEY_set1_encoded_public_key(in_key, keys[i].key_bin, keys[i].key_bin_len)"
                            ,&_LC4,uVar2,0);
        if (iVar3 == 0) goto LAB_001001a2;
      }
      else {
        ERR_set_mark();
        uVar2 = EVP_PKEY_set1_encoded_public_key
                          (local_48,*(undefined8 *)(piVar6 + 2),*(undefined8 *)(piVar6 + 4));
        iVar3 = test_int_le("test/evp_pkey_dparams_test.c",0x125,
                            "EVP_PKEY_set1_encoded_public_key(in_key, keys[i].key_bin, keys[i].key_bin_len)"
                            ,&_LC4,uVar2);
        if (iVar3 == 0) {
          ERR_pop_to_mark();
LAB_001001a2:
          test_info("test/evp_pkey_dparams_test.c",0x132,"Test key index #%d",iVar1);
          goto LAB_00100090;
        }
        ERR_pop_to_mark();
      }
      iVar1 = iVar1 + 1;
      piVar6 = piVar6 + 6;
    } while (iVar1 != 10);
    uVar2 = 1;
  }
  BIO_free(a);
  EVP_PKEY_free(local_48);
LAB_001000a3:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



bool params_bio_test(int param_1)

{
  long lVar1;
  undefined8 uVar2;
  void *buf;
  int iVar3;
  undefined4 uVar4;
  BIO *a;
  undefined8 uVar5;
  BIO_METHOD *type;
  BIO *bp;
  ulong uVar6;
  long in_FS_OFFSET;
  bool bVar7;
  EVP_PKEY *local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = (EVP_PKEY *)0x0;
  lVar1 = (long)param_1 * 0x108;
  uVar2 = *(undefined8 *)(pkey_params + lVar1 + 0x10);
  buf = *(void **)(pkey_params + lVar1 + 8);
  uVar4 = *(undefined4 *)(pkey_params + lVar1);
  a = BIO_new_mem_buf(buf,(int)uVar2);
  iVar3 = test_ptr("test/evp_pkey_dparams_test.c",0xfd,
                   "in = BIO_new_mem_buf(pkey_params[id].param_bin, (int)pkey_params[id].param_bin_len)"
                   ,a);
  if (iVar3 != 0) {
    uVar5 = d2i_KeyParams_bio(uVar4,&local_50,a);
    iVar3 = test_ptr("test/evp_pkey_dparams_test.c",0x100,"d2i_KeyParams_bio(type, &in_key, in)",
                     uVar5);
    if (iVar3 != 0) {
      type = BIO_s_mem();
      bp = BIO_new(type);
      iVar3 = test_ptr("test/evp_pkey_dparams_test.c",0x101,"out = BIO_new(BIO_s_mem())",bp);
      if (iVar3 != 0) {
        uVar4 = i2d_KeyParams_bio(bp,local_50);
        iVar3 = test_int_gt("test/evp_pkey_dparams_test.c",0x103,"i2d_KeyParams_bio(out, in_key)",
                            &_LC4,uVar4,0);
        if (iVar3 != 0) {
          uVar6 = BIO_ctrl(bp,3,0,&local_48);
          iVar3 = test_int_gt("test/evp_pkey_dparams_test.c",0x105,
                              "out_len = BIO_get_mem_data(out, &out_bin)",&_LC4,uVar6 & 0xffffffff,0
                             );
          if (iVar3 != 0) {
            iVar3 = test_mem_eq("test/evp_pkey_dparams_test.c",0x106,"pkey_params[id].param_bin",
                                "out_bin",buf,(long)(int)uVar2,local_48,(long)(int)uVar6);
            bVar7 = iVar3 != 0;
            goto LAB_00100283;
          }
        }
      }
      bVar7 = false;
      goto LAB_00100283;
    }
  }
  bVar7 = false;
  bp = (BIO *)0x0;
LAB_00100283:
  BIO_free(a);
  BIO_free(bp);
  EVP_PKEY_free(local_50);
  EVP_PKEY_free((EVP_PKEY *)0x0);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 setup_tests(void)

{
  add_all_tests("params_bio_test",params_bio_test,3,1);
  add_all_tests("set_enc_pubkey_test",0x100000,3,1);
  return 1;
}


