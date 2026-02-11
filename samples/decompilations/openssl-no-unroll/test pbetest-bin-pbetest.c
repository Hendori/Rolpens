
uint test_pkcs5_pbe(EVP_CIPHER *param_1,EVP_MD *param_2,uchar *param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  EVP_CIPHER_CTX *ctx;
  X509_ALGOR *algor;
  long in_FS_OFFSET;
  int local_6c;
  uchar local_68 [40];
  long local_40;
  
  algor = (X509_ALGOR *)0x0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ctx = EVP_CIPHER_CTX_new();
  uVar1 = test_ptr("test/pbetest.c",0x45,&_LC0,ctx);
  if (uVar1 != 0) {
    algor = X509_ALGOR_new();
    iVar2 = test_ptr("test/pbetest.c",0x49,"algor",algor);
    if (iVar2 != 0) {
      iVar2 = EVP_CIPHER_get_nid(param_1);
      iVar2 = PKCS5_pbe_set0_algor(algor,iVar2,1000,(uchar *)&pbe_salt,8);
      iVar2 = test_true("test/pbetest.c",0x4c,
                        "PKCS5_pbe_set0_algor(algor, EVP_CIPHER_nid(cipher), pbe_iter, pbe_salt, sizeof(pbe_salt))"
                        ,iVar2 != 0);
      if (iVar2 != 0) {
        iVar2 = PKCS5_PBE_keyivgen(ctx,"MyVoiceIsMyPassport",0x13,algor->parameter,param_1,param_2,1
                                  );
        iVar2 = test_true("test/pbetest.c",0x4e,
                          "PKCS5_PBE_keyivgen(ctx, pbe_password, strlen(pbe_password), algor->parameter, cipher, md, 1)"
                          ,iVar2 != 0);
        if (iVar2 != 0) {
          iVar2 = EVP_CipherUpdate(ctx,local_68,&local_6c,pbe_plaintext,0x18);
          iVar3 = test_true("test/pbetest.c",0x50,
                            "EVP_CipherUpdate(ctx, out, &i, pbe_plaintext, sizeof(pbe_plaintext))",
                            iVar2 != 0);
          iVar2 = local_6c;
          if (iVar3 != 0) {
            iVar3 = EVP_CipherFinal_ex(ctx,local_68 + local_6c,&local_6c);
            iVar3 = test_true("test/pbetest.c",0x55,"EVP_CipherFinal_ex(ctx, out + i, &i)",
                              iVar3 != 0);
            if (iVar3 != 0) {
              iVar2 = test_mem_eq("test/pbetest.c",0x59,&_LC8,&_LC7,local_68,
                                  (long)(iVar2 + local_6c),param_3,(long)param_4);
              if (iVar2 != 0) {
                iVar2 = PKCS5_PBE_keyivgen(ctx,"MyVoiceIsMyPassport",0x13,algor->parameter,param_1,
                                           param_2,0);
                iVar2 = test_true("test/pbetest.c",0x5e,
                                  "PKCS5_PBE_keyivgen(ctx, pbe_password, strlen(pbe_password), algor->parameter, cipher, md, 0)"
                                  ,iVar2 != 0);
                if (iVar2 != 0) {
                  iVar2 = EVP_CipherUpdate(ctx,local_68,&local_6c,param_3,param_4);
                  iVar2 = test_true("test/pbetest.c",0x60,
                                    "EVP_CipherUpdate(ctx, out, &i, exp, exp_len)",iVar2 != 0);
                  if (iVar2 != 0) {
                    iVar2 = EVP_CipherFinal_ex(ctx,local_68 + local_6c,&local_6c);
                    iVar2 = test_true("test/pbetest.c",100,"EVP_CipherFinal_ex(ctx, out + i, &i)",
                                      iVar2 != 0);
                    if (iVar2 != 0) {
                      iVar2 = test_mem_eq("test/pbetest.c",0x67,&_LC8,"pbe_plaintext",local_68,
                                          (long)local_6c,pbe_plaintext,0x18);
                      uVar1 = (uint)(iVar2 != 0);
                      goto LAB_0010005b;
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
LAB_0010005b:
  EVP_CIPHER_CTX_free(ctx);
  X509_ALGOR_free(algor);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void test_pkcs5_pbe_des_sha1(void)

{
  EVP_MD *pEVar1;
  EVP_CIPHER *pEVar2;
  
  pEVar1 = EVP_sha1();
  pEVar2 = EVP_des_cbc();
  test_pkcs5_pbe(pEVar2,pEVar1,pbe_ciphertext_des_sha1,0x20);
  return;
}



void test_pkcs5_pbe_rc4_md5(void)

{
  EVP_MD *pEVar1;
  EVP_CIPHER *pEVar2;
  
  pEVar1 = EVP_md5();
  pEVar2 = EVP_rc4();
  test_pkcs5_pbe(pEVar2,pEVar1,pbe_ciphertext_rc4_md5,0x18);
  return;
}



undefined8 setup_tests(void)

{
  add_test("test_pkcs5_pbe_rc4_md5",test_pkcs5_pbe_rc4_md5);
  add_test("test_pkcs5_pbe_des_sha1",test_pkcs5_pbe_des_sha1);
  return 1;
}


