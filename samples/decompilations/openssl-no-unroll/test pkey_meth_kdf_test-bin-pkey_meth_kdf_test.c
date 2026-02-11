
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 test_kdf_scrypt(void)

{
  int iVar1;
  EVP_PKEY_CTX *ctx;
  undefined8 uVar2;
  long in_FS_OFFSET;
  size_t local_b0;
  uchar local_a8 [64];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_b0 = 0x40;
  ctx = EVP_PKEY_CTX_new_id(0x3cd,(ENGINE *)0x0);
  if (ctx == (EVP_PKEY_CTX *)0x0) {
    test_error("test/pkey_meth_kdf_test.c",0x9c,"EVP_PKEY_SCRYPT");
  }
  else {
    iVar1 = EVP_PKEY_derive_init(ctx);
    if (iVar1 < 1) {
      test_error("test/pkey_meth_kdf_test.c",0xa0,"EVP_PKEY_derive_init");
    }
    else {
      iVar1 = EVP_PKEY_CTX_set1_pbe_pass(ctx,"password",8);
      if (iVar1 < 1) {
        test_error("test/pkey_meth_kdf_test.c",0xa4,"EVP_PKEY_CTX_set1_pbe_pass");
      }
      else {
        iVar1 = EVP_PKEY_CTX_set1_scrypt_salt(ctx,&_LC5,4);
        if (iVar1 < 1) {
          test_error("test/pkey_meth_kdf_test.c",0xa8,"EVP_PKEY_CTX_set1_scrypt_salt");
        }
        else {
          iVar1 = EVP_PKEY_CTX_set_scrypt_N(ctx,0x400);
          if (iVar1 < 1) {
            test_error("test/pkey_meth_kdf_test.c",0xac,"EVP_PKEY_CTX_set_scrypt_N");
          }
          else {
            iVar1 = EVP_PKEY_CTX_set_scrypt_r(ctx,8);
            if (iVar1 < 1) {
              test_error("test/pkey_meth_kdf_test.c",0xb0,"EVP_PKEY_CTX_set_scrypt_r");
            }
            else {
              iVar1 = EVP_PKEY_CTX_set_scrypt_p(ctx,0x10);
              if (iVar1 < 1) {
                test_error("test/pkey_meth_kdf_test.c",0xb4,"EVP_PKEY_CTX_set_scrypt_p");
              }
              else {
                iVar1 = EVP_PKEY_CTX_set_scrypt_maxmem_bytes(ctx,0x10);
                if (iVar1 < 1) {
                  test_error("test/pkey_meth_kdf_test.c",0xb8,"EVP_PKEY_CTX_set_maxmem_bytes");
                }
                else {
                  iVar1 = EVP_PKEY_derive(ctx,local_a8,&local_b0);
                  if (iVar1 < 1) {
                    iVar1 = EVP_PKEY_CTX_set_scrypt_maxmem_bytes(ctx,0xa00000);
                    if (iVar1 < 1) {
                      test_error("test/pkey_meth_kdf_test.c",0xc0,"EVP_PKEY_CTX_set_maxmem_bytes");
                    }
                    else {
                      iVar1 = EVP_PKEY_derive(ctx,local_a8,&local_b0);
                      if (iVar1 < 1) {
                        test_error("test/pkey_meth_kdf_test.c",0xc4,"EVP_PKEY_derive");
                      }
                      else {
                        uVar2 = 1;
                        local_68 = __LC15;
                        uStack_60 = _UNK_00100b98;
                        local_58 = __LC16;
                        uStack_50 = _UNK_00100ba8;
                        local_48 = __LC17;
                        uStack_40 = _UNK_00100bb8;
                        local_38 = __LC18;
                        uStack_30 = _UNK_00100bc8;
                        iVar1 = test_mem_eq("test/pkey_meth_kdf_test.c",0xd3,&_LC14,"expected",
                                            local_a8,0x40,&local_68,0x40);
                        if (iVar1 != 0) goto LAB_001001a2;
                      }
                    }
                  }
                  else {
                    test_error("test/pkey_meth_kdf_test.c",0xbc,"EVP_PKEY_derive should have failed"
                              );
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  uVar2 = 0;
LAB_001001a2:
  EVP_PKEY_CTX_free(ctx);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 test_kdf_hkdf(int param_1)

{
  int iVar1;
  EVP_PKEY_CTX *ctx;
  EVP_MD *pEVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  size_t local_40;
  uchar local_34 [10];
  undefined8 local_2a;
  undefined2 local_22;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = 10;
  ctx = EVP_PKEY_CTX_new_id(0x40c,(ENGINE *)0x0);
  if (ctx == (EVP_PKEY_CTX *)0x0) {
    test_error("test/pkey_meth_kdf_test.c",0x59,"EVP_PKEY_HKDF");
  }
  else {
    iVar1 = EVP_PKEY_derive_init(ctx);
    if (iVar1 < 1) {
      test_error("test/pkey_meth_kdf_test.c",0x5d,"EVP_PKEY_derive_init");
    }
    else {
      pEVar2 = EVP_sha256();
      iVar1 = EVP_PKEY_CTX_set_hkdf_md(ctx,pEVar2);
      if (iVar1 < 1) {
        test_error("test/pkey_meth_kdf_test.c",0x61,"EVP_PKEY_CTX_set_hkdf_md");
      }
      else {
        iVar1 = EVP_PKEY_CTX_set1_hkdf_salt(ctx,&_LC21,4);
        if (iVar1 < 1) {
          test_error("test/pkey_meth_kdf_test.c",0x66,"EVP_PKEY_CTX_set1_hkdf_salt");
        }
        else {
          iVar1 = EVP_PKEY_CTX_set1_hkdf_key(ctx,"secret",6);
          if (iVar1 < 1) {
            test_error("test/pkey_meth_kdf_test.c",0x6b,"EVP_PKEY_CTX_set1_hkdf_key");
          }
          else if (param_1 == 0) {
            iVar1 = EVP_PKEY_CTX_add1_hkdf_info(ctx,"label",5);
            if (iVar1 < 1) {
              test_error("test/pkey_meth_kdf_test.c",0x71,"EVP_PKEY_CTX_add1_hkdf_info");
            }
            else {
LAB_0010041d:
              iVar1 = EVP_PKEY_derive(ctx,local_34,&local_40);
              if (iVar1 < 1) {
                test_error("test/pkey_meth_kdf_test.c",0x81,"EVP_PKEY_derive");
              }
              else {
                local_2a = 0xf89659529f36c42a;
                local_22 = 0x13de;
                uVar3 = 1;
                iVar1 = test_mem_eq("test/pkey_meth_kdf_test.c",0x89,&_LC14,"expected",local_34,10,
                                    &local_2a,10);
                if (iVar1 != 0) goto LAB_00100492;
              }
            }
          }
          else {
            iVar1 = EVP_PKEY_CTX_add1_hkdf_info(ctx,&_LC27,3);
            if (iVar1 < 1) {
              test_error("test/pkey_meth_kdf_test.c",0x77,"EVP_PKEY_CTX_add1_hkdf_info");
            }
            else {
              iVar1 = EVP_PKEY_CTX_add1_hkdf_info(ctx,&_LC28,2);
              if (0 < iVar1) goto LAB_0010041d;
              test_error("test/pkey_meth_kdf_test.c",0x7c,"EVP_PKEY_CTX_add1_hkdf_info");
            }
          }
        }
      }
    }
  }
  uVar3 = 0;
LAB_00100492:
  EVP_PKEY_CTX_free(ctx);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 test_kdf_tls1_prf(int param_1)

{
  int iVar1;
  EVP_PKEY_CTX *ctx;
  EVP_MD *pEVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  size_t local_50;
  uchar local_48 [16];
  undefined8 local_38;
  undefined8 uStack_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0x10;
  ctx = EVP_PKEY_CTX_new_id(0x3fd,(ENGINE *)0x0);
  if (ctx == (EVP_PKEY_CTX *)0x0) {
    test_error("test/pkey_meth_kdf_test.c",0x1b,"EVP_PKEY_TLS1_PRF");
  }
  else {
    iVar1 = EVP_PKEY_derive_init(ctx);
    if (iVar1 < 1) {
      test_error("test/pkey_meth_kdf_test.c",0x1f,"EVP_PKEY_derive_init");
    }
    else {
      pEVar2 = EVP_sha256();
      iVar1 = EVP_PKEY_CTX_set_tls1_prf_md(ctx,pEVar2);
      if (iVar1 < 1) {
        test_error("test/pkey_meth_kdf_test.c",0x23,"EVP_PKEY_CTX_set_tls1_prf_md");
      }
      else {
        iVar1 = EVP_PKEY_CTX_set1_tls1_prf_secret(ctx,"secret",6);
        if (iVar1 < 1) {
          test_error("test/pkey_meth_kdf_test.c",0x28,"EVP_PKEY_CTX_set1_tls1_prf_secret");
        }
        else if (param_1 == 0) {
          iVar1 = EVP_PKEY_CTX_add1_tls1_prf_seed(ctx,&_LC32,4);
          if (iVar1 < 1) {
            test_error("test/pkey_meth_kdf_test.c",0x2e,"EVP_PKEY_CTX_add1_tls1_prf_seed");
          }
          else {
LAB_001006d1:
            iVar1 = EVP_PKEY_derive(ctx,local_48,&local_50);
            if (iVar1 < 1) {
              test_error("test/pkey_meth_kdf_test.c",0x3e,"EVP_PKEY_derive");
            }
            else {
              uVar3 = 1;
              local_38 = __LC36;
              uStack_30 = _UNK_00100bd8;
              iVar1 = test_mem_eq("test/pkey_meth_kdf_test.c",0x47,&_LC14,"expected",local_48,0x10,
                                  &local_38,0x10);
              if (iVar1 != 0) goto LAB_00100742;
            }
          }
        }
        else {
          iVar1 = EVP_PKEY_CTX_add1_tls1_prf_seed(ctx,&_LC34,2);
          if (iVar1 < 1) {
            test_error("test/pkey_meth_kdf_test.c",0x34,"EVP_PKEY_CTX_add1_tls1_prf_seed");
          }
          else {
            iVar1 = EVP_PKEY_CTX_add1_tls1_prf_seed(ctx,&_LC35,2);
            if (0 < iVar1) goto LAB_001006d1;
            test_error("test/pkey_meth_kdf_test.c",0x39,"EVP_PKEY_CTX_add1_tls1_prf_seed");
          }
        }
      }
    }
  }
  uVar3 = 0;
LAB_00100742:
  EVP_PKEY_CTX_free(ctx);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



undefined8 setup_tests(void)

{
  int iVar1;
  
  iVar1 = fips_provider_version_ge(0,3,3,1);
  iVar1 = 2 - (uint)(iVar1 == 0);
  add_all_tests("test_kdf_tls1_prf",test_kdf_tls1_prf,iVar1,1);
  add_all_tests("test_kdf_hkdf",test_kdf_hkdf,iVar1,1);
  add_test("test_kdf_scrypt",0x100000);
  return 1;
}


