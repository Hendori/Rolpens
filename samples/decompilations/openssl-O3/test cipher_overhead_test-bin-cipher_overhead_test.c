
undefined8 cipher_overhead(void)

{
  int iVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;
  EVP_CIPHER *pEVar5;
  EVP_MD *pEVar6;
  int iVar7;
  undefined8 uVar8;
  long in_FS_OFFSET;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = ssl3_num_ciphers();
  if (iVar1 < 1) {
    uVar8 = 1;
  }
  else {
    iVar7 = 0;
    uVar8 = 1;
    do {
      while (lVar3 = ssl3_get_cipher(iVar7), *(int *)(lVar3 + 0x34) == 0) {
LAB_00100067:
        iVar7 = iVar7 + 1;
        if (iVar1 == iVar7) goto LAB_00100148;
      }
      if ((*(byte *)(lVar3 + 0x28) & 0x40) == 0) {
        if (*(int *)(lVar3 + 0x24) == 0x20) {
LAB_001000af:
          iVar2 = SSL_CIPHER_get_digest_nid(lVar3);
          pcVar4 = OBJ_nid2sn(iVar2);
          pEVar6 = EVP_get_digestbyname(pcVar4);
          if (pEVar6 != (EVP_MD *)0x0) goto LAB_001000cf;
        }
        else {
          iVar2 = SSL_CIPHER_get_cipher_nid(lVar3);
          pcVar4 = OBJ_nid2sn(iVar2);
          pEVar5 = EVP_get_cipherbyname(pcVar4);
          if (pEVar5 != (EVP_CIPHER *)0x0) goto LAB_001000af;
        }
        test_skip("test/cipher_overhead_test.c",0x2c,"Skipping disabled cipher %s",
                  *(undefined8 *)(lVar3 + 8));
        goto LAB_00100067;
      }
LAB_001000cf:
      iVar2 = ssl_cipher_get_overhead(lVar3,&local_60,&local_58,&local_50,&local_48);
      iVar2 = test_true("test/cipher_overhead_test.c",0x2f,
                        "ssl_cipher_get_overhead(ciph, &mac, &in, &blk, &ex)",iVar2 != 0);
      if (iVar2 == 0) {
        uVar8 = 0;
        test_info("test/cipher_overhead_test.c",0x30,"Failed getting %s",*(undefined8 *)(lVar3 + 8))
        ;
        goto LAB_00100067;
      }
      iVar7 = iVar7 + 1;
      test_info("test/cipher_overhead_test.c",0x33,"Cipher %s: %zu %zu %zu %zu",
                *(undefined8 *)(lVar3 + 8),local_60,local_58,local_50,local_48);
    } while (iVar1 != iVar7);
  }
LAB_00100148:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar8;
}



undefined8 setup_tests(void)

{
  add_test("cipher_overhead",0x100000);
  return 1;
}


