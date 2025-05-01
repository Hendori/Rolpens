
void * multihexstr2buf(long *param_1,ulong *param_2)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  size_t sVar6;
  size_t sVar7;
  size_t sVar8;
  void *ptr;
  long lVar9;
  ulong uVar10;
  long lVar11;
  
  sVar6 = strlen((char *)*param_1);
  if ((sVar6 & 1) == 0) {
    sVar7 = strlen((char *)param_1[1]);
    if ((sVar6 + sVar7 & 1) == 0) {
      sVar8 = strlen((char *)param_1[2]);
      uVar10 = sVar8 + sVar6 + sVar7;
      if ((uVar10 & 1) == 0) {
        uVar10 = uVar10 >> 1;
        ptr = CRYPTO_malloc((int)uVar10,"test/tls13encryptiontest.c",0xda);
        if (ptr != (void *)0x0) {
          plVar1 = param_1 + 3;
          lVar11 = 0;
          do {
            lVar9 = 0;
            cVar2 = *(char *)*param_1;
            while (cVar2 != '\0') {
              uVar4 = OPENSSL_hexchar2int();
              uVar5 = OPENSSL_hexchar2int(*(undefined1 *)(*param_1 + 1 + lVar9));
              if ((int)(uVar4 | uVar5) < 0) {
                CRYPTO_free(ptr);
                return (void *)0x0;
              }
              lVar9 = lVar9 + 2;
              lVar3 = *param_1;
              *(byte *)((long)ptr + lVar11) = (byte)(uVar4 << 4) | (byte)uVar5;
              lVar11 = lVar11 + 1;
              cVar2 = *(char *)(lVar3 + lVar9);
            }
            param_1 = param_1 + 1;
          } while (param_1 != plVar1);
          *param_2 = uVar10;
          return ptr;
        }
      }
    }
  }
  return (void *)0x0;
}



bool test_record(long param_1,long param_2,int param_3)

{
  int iVar1;
  void *ptr;
  long in_FS_OFFSET;
  bool bVar2;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = 0;
  if (param_3 == 0) {
    ptr = (void *)multihexstr2buf(param_2,&local_38);
  }
  else {
    ptr = (void *)multihexstr2buf(param_2 + 0x18,&local_38);
  }
  iVar1 = test_ptr("test/tls13encryptiontest.c",0x122,&_LC1,ptr);
  if (iVar1 == 0) {
    test_info("test/tls13encryptiontest.c",0x123,"Failed to get reference data");
    bVar2 = false;
  }
  else {
    iVar1 = test_mem_eq("test/tls13encryptiontest.c",0x127,"rec->data",&_LC1,
                        *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 8),ptr,local_38);
    bVar2 = iVar1 != 0;
  }
  CRYPTO_free(ptr);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 test_tls13_encryption(void)

{
  size_t __n;
  int iVar1;
  undefined4 uVar2;
  EVP_CIPHER *pEVar3;
  long lVar4;
  void *ptr;
  void *ptr_00;
  undefined8 *ptr_01;
  void *ptr_02;
  EVP_CIPHER *pEVar5;
  void *pvVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  long in_FS_OFFSET;
  long local_e8;
  long local_c0;
  long local_b8;
  size_t local_b0;
  undefined8 local_a8;
  size_t local_a0;
  void *local_88;
  void *pvStack_80;
  undefined1 local_58 [24];
  long local_40;
  
  puVar8 = refdata;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pEVar3 = EVP_aes_128_gcm();
  local_c0 = 0;
  local_b8 = 0;
  local_a8 = _LC4;
  local_e8 = 0;
  do {
    local_88 = (void *)0x0;
    iVar1 = EVP_CIPHER_get_iv_length(pEVar3);
    lVar4 = (long)iVar1;
    ptr = (void *)OPENSSL_hexstr2buf(*(undefined8 *)(puVar8 + 0x30),0);
    ptr_00 = (void *)OPENSSL_hexstr2buf(*(undefined8 *)(puVar8 + 0x38),0);
    ptr_01 = (undefined8 *)OPENSSL_hexstr2buf(*(undefined8 *)(puVar8 + 0x40),0);
    ptr_02 = (void *)multihexstr2buf(puVar8,&local_b0);
    __n = local_b0;
    if ((((ptr == (void *)0x0) || (ptr_00 == (void *)0x0)) || (ptr_01 == (undefined8 *)0x0)) ||
       (ptr_02 == (void *)0x0)) {
LAB_001006b8:
      pvVar6 = (void *)0x0;
      CRYPTO_free(ptr);
      CRYPTO_free(ptr_00);
      CRYPTO_free(ptr_01);
      CRYPTO_free(ptr_02);
      uVar7 = 0;
      test_error("test/tls13encryptiontest.c",0x14a,"Failed loading key into EVP_CIPHER_CTX");
      goto LAB_00100650;
    }
    local_88 = CRYPTO_malloc((int)local_b0 + 0x10,"test/tls13encryptiontest.c",0x100);
    pvStack_80 = local_88;
    if (local_88 == (void *)0x0) goto LAB_001006b8;
    local_a0 = __n;
    memcpy(local_88,ptr_02,__n);
    CRYPTO_free(ptr_02);
    uVar7 = *ptr_01;
    CRYPTO_free(ptr_01);
    __memcpy_chk(local_58,ptr_00,lVar4,0x10);
    CRYPTO_free(ptr_00);
    pEVar5 = EVP_aes_128_gcm();
    iVar1 = (*_ossl_tls_record_method)
                      (0,0,0x304,1,1,3,0,0,0,ptr,0x10,local_58,lVar4,0,0,pEVar5,0x10,0,0,0,0,0,0,0,0
                       ,0,0,0,0,0,0,&local_b8);
    iVar1 = test_true("test/tls13encryptiontest.c",0x14f,
                      "ossl_tls_record_method.new_record_layer( NULL, NULL, TLS1_3_VERSION, OSSL_RECORD_ROLE_SERVER, OSSL_RECORD_DIRECTION_WRITE, OSSL_RECORD_PROTECTION_LEVEL_APPLICATION, 0, NULL, 0, key, 16, iv, ivlen, NULL, 0, EVP_aes_128_gcm(), EVP_GCM_TLS_TAG_LEN, 0, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, &wrl)"
                      ,iVar1 != 0);
    pvVar6 = ptr;
    if (iVar1 == 0) {
      uVar7 = 0;
      goto LAB_00100650;
    }
    *(undefined8 *)(local_b8 + 0x1000) = uVar7;
    iVar1 = (**(code **)(*(long *)(local_b8 + 0x1148) + 8))(local_b8,&local_a8,1,1,0,0);
    iVar1 = test_size_t_eq("test/tls13encryptiontest.c",0x15b,
                           "wrl->funcs->cipher(wrl, &rec, 1, 1, NULL, 0)",&_LC7,(long)iVar1,1);
    if (iVar1 == 0) {
      test_info("test/tls13encryptiontest.c",0x15c,"Failed to encrypt record %zu",local_e8);
LAB_00100749:
      uVar7 = 0;
      goto LAB_00100650;
    }
    iVar1 = test_record(&local_a8,puVar8,1);
    iVar1 = test_true("test/tls13encryptiontest.c",0x160,"test_record(&rec, &refdata[ctr], 1)",
                      iVar1 != 0);
    if (iVar1 == 0) {
      test_info("test/tls13encryptiontest.c",0x161,"Record %zu encryption test failed",local_e8);
      goto LAB_00100749;
    }
    pEVar5 = EVP_aes_128_gcm();
    iVar1 = (*_ossl_tls_record_method)
                      (0,0,0x304,1,0,3,0,0,0,ptr,0x10,local_58,lVar4,0,0,pEVar5,0x10,0,0,0,0,0,0,0,0
                       ,0,0,0,0,0,0,&local_c0);
    iVar1 = test_true("test/tls13encryptiontest.c",0x166,
                      "ossl_tls_record_method.new_record_layer( NULL, NULL, TLS1_3_VERSION, OSSL_RECORD_ROLE_SERVER, OSSL_RECORD_DIRECTION_READ, OSSL_RECORD_PROTECTION_LEVEL_APPLICATION, 0, NULL, 0, key, 16, iv, ivlen, NULL, 0, EVP_aes_128_gcm(), EVP_GCM_TLS_TAG_LEN, 0, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, &rrl)"
                      ,iVar1 != 0);
    if (iVar1 == 0) goto LAB_00100749;
    *(undefined8 *)(local_c0 + 0x1000) = uVar7;
    uVar2 = (**(code **)(*(long *)(local_c0 + 0x1148) + 8))(local_c0,&local_a8,1,0,0,0);
    iVar1 = test_int_eq("test/tls13encryptiontest.c",0x172,
                        "rrl->funcs->cipher(rrl, &rec, 1, 0, NULL, 0)",&_LC7,uVar2,1);
    if (iVar1 == 0) {
      test_info("test/tls13encryptiontest.c",0x173,"Failed to decrypt record %zu",local_e8);
      goto LAB_00100749;
    }
    iVar1 = test_record(&local_a8,puVar8,0);
    iVar1 = test_true("test/tls13encryptiontest.c",0x177,"test_record(&rec, &refdata[ctr], 0)",
                      iVar1 != 0);
    if (iVar1 == 0) {
      test_info("test/tls13encryptiontest.c",0x178,"Record %zu decryption test failed",local_e8);
      goto LAB_00100749;
    }
    puVar8 = puVar8 + 0x48;
    (*_test_true)(local_c0);
    (*_test_true)(local_b8);
    local_b8 = 0;
    local_c0 = 0;
    CRYPTO_free(local_88);
    CRYPTO_free(ptr);
    local_e8 = local_e8 + 1;
    local_88 = (void *)0x0;
    if (local_e8 == 7) {
      test_note("PASS: %zu records tested",7);
      uVar7 = 1;
      pvVar6 = (void *)0x0;
LAB_00100650:
      (*_test_true)(local_c0);
      (*_test_true)(local_b8);
      CRYPTO_free(local_88);
      CRYPTO_free(pvVar6);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return uVar7;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  } while( true );
}



undefined8 setup_tests(void)

{
  add_test("test_tls13_encryption",test_tls13_encryption);
  return 1;
}


