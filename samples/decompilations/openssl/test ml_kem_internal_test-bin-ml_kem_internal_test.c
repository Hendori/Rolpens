
bool sanity_test(void)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  EVP_MD *type;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  void *ptr;
  undefined4 *puVar8;
  long in_FS_OFFSET;
  bool bVar9;
  long local_1c8;
  void *local_1c0;
  int local_1b4;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  uchar local_12d;
  undefined4 local_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  uchar local_a8 [32];
  undefined1 local_88 [32];
  undefined1 local_68 [40];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  type = (EVP_MD *)EVP_MD_fetch(0,"sha256",0);
  iVar2 = test_ptr("test/ml_kem_internal_test.c",0x6a,"sha256",type);
  if (iVar2 != 0) {
    uVar4 = RAND_get0_private(0);
    iVar2 = test_ptr("test/ml_kem_internal_test.c",0x6d,"privctx = RAND_get0_private(NULL)",uVar4);
    if (iVar2 != 0) {
      uVar5 = RAND_get0_public(0);
      iVar2 = test_ptr("test/ml_kem_internal_test.c",0x6e,"pubctx = RAND_get0_public(NULL)",uVar5);
      if (iVar2 != 0) {
        local_1c8 = 0;
        local_1b4 = 0;
        puVar8 = &alg_0;
        do {
          local_12c = 0x100;
          OSSL_PARAM_construct_octet_string(&local_168,"test_entropy",ml_kem_private_entropy,0x40);
          local_128 = local_168;
          uStack_120 = uStack_160;
          local_118 = local_158;
          uStack_110 = uStack_150;
          local_108 = local_148;
          OSSL_PARAM_construct_uint(&local_168,"strength",&local_12c);
          local_100 = local_168;
          uStack_f8 = uStack_160;
          local_e0 = local_148;
          local_f0 = local_158;
          uStack_e8 = uStack_150;
          OSSL_PARAM_construct_end(&local_168);
          local_d8 = local_168;
          uStack_d0 = uStack_160;
          local_b8 = local_148;
          local_c8 = local_158;
          uStack_c0 = uStack_150;
          iVar2 = EVP_RAND_CTX_set_params(uVar4,&local_128);
          iVar2 = test_true("test/ml_kem_internal_test.c",0x89,
                            "EVP_RAND_CTX_set_params(privctx, params)",iVar2 != 0);
          if (iVar2 == 0) goto LAB_0010005c;
          uVar3 = *puVar8;
          plVar6 = (long *)ossl_ml_kem_key_new(0,0,uVar3);
          lVar7 = ossl_ml_kem_key_new(0,0,uVar3);
          if ((lVar7 == 0) || (plVar6 == (long *)0x0)) {
            local_1c0 = (void *)0x0;
            ptr = (void *)0x0;
            local_1b4 = -1;
          }
          else {
            lVar1 = *plVar6;
            if (lVar1 == 0) {
              local_1c0 = (void *)0x0;
              local_1b4 = -1;
              ptr = (void *)0x0;
            }
            else {
              ptr = CRYPTO_malloc((int)*(undefined8 *)(lVar1 + 0x18),"test/ml_kem_internal_test.c",
                                  0x92);
              local_1c0 = CRYPTO_malloc((int)*(undefined8 *)(lVar1 + 0x28),
                                        "test/ml_kem_internal_test.c",0x93);
              if ((ptr == (void *)0x0) || (local_1c0 == (void *)0x0)) {
                local_1b4 = -1;
              }
              else {
                iVar2 = ossl_ml_kem_genkey(ptr,*(undefined8 *)(lVar1 + 0x18),lVar7);
                if (iVar2 != 0) {
                  uVar3 = RAND_priv_bytes(&local_12d,1);
                  iVar2 = test_int_le("test/ml_kem_internal_test.c",0x9e,"RAND_priv_bytes(&c, 1)",
                                      &_LC7,uVar3,0);
                  if (iVar2 != 0) {
                    iVar2 = test_mem_eq("test/ml_kem_internal_test.c",0xa3,
                                        "encoded_public_key + v->vector_bytes",
                                        "ml_kem_expected_rho[i]",(long)ptr + *(long *)(lVar1 + 0x30)
                                        ,0x20,ml_kem_expected_rho + local_1c8);
                    if (iVar2 == 0) {
                      local_1b4 = -3;
                      goto LAB_00100291;
                    }
                    iVar2 = ossl_ml_kem_parse_public_key(ptr,*(undefined8 *)(lVar1 + 0x18),plVar6);
                    if (iVar2 != 0) {
                      OSSL_PARAM_construct_octet_string
                                (&local_168,"test_entropy",ml_kem_public_entropy,0x40);
                      local_128 = local_168;
                      uStack_120 = uStack_160;
                      local_108 = local_148;
                      local_118 = local_158;
                      uStack_110 = uStack_150;
                      iVar2 = EVP_RAND_CTX_set_params(uVar5,&local_128);
                      iVar2 = test_true("test/ml_kem_internal_test.c",0xb4,
                                        "EVP_RAND_CTX_set_params(pubctx, params)",iVar2 != 0);
                      if (iVar2 != 0) {
                        iVar2 = ossl_ml_kem_encap_rand
                                          (local_1c0,*(undefined8 *)(lVar1 + 0x28),local_88,0x20,
                                           plVar6);
                        if (iVar2 == 0) {
                          local_1b4 = -5;
                        }
                        else {
                          iVar2 = EVP_Digest(local_1c0,*(size_t *)(lVar1 + 0x28),local_a8,
                                             (uint *)0x0,type,(ENGINE *)0x0);
                          iVar2 = test_true("test/ml_kem_internal_test.c",0xc0,
                                            "EVP_Digest(ciphertext, v->ctext_bytes, hash, NULL, sha256, NULL)"
                                            ,iVar2 != 0);
                          if (((iVar2 == 0) ||
                              (iVar2 = test_mem_eq("test/ml_kem_internal_test.c",0xc2,&_LC14,
                                                   "ml_kem_expected_ctext_sha256[i]",local_a8,0x20,
                                                   ml_kem_expected_ctext_sha256 + local_1c8,0x20),
                              iVar2 == 0)) ||
                             (iVar2 = test_mem_eq("test/ml_kem_internal_test.c",200,"shared_secret",
                                                  "ml_kem_expected_shared_secret[i]",local_88,0x20,
                                                  ml_kem_expected_shared_secret + local_1c8,0x20),
                             iVar2 == 0)) {
                            local_1b4 = -6;
                          }
                          else {
                            iVar2 = ossl_ml_kem_decap(local_68,0x20,local_1c0,
                                                      *(undefined8 *)(lVar1 + 0x28),lVar7);
                            if ((iVar2 == 0) ||
                               (iVar2 = test_mem_eq("test/ml_kem_internal_test.c",0xd4,
                                                    "shared_secret","shared_secret2",local_88,0x20,
                                                    local_68,0x20), iVar2 == 0)) {
                              local_1b4 = -7;
                            }
                            else {
                              memset(local_1c0,0,*(size_t *)(lVar1 + 0x28));
                              iVar2 = ossl_ml_kem_decap(local_68,0x20,local_1c0,
                                                        *(undefined8 *)(lVar1 + 0x28),lVar7);
                              iVar2 = test_true("test/ml_kem_internal_test.c",0xdb,
                                                "ossl_ml_kem_decap(shared_secret2, sizeof(shared_secret2), ciphertext, v->ctext_bytes, private_key)"
                                                ,iVar2 != 0);
                              if ((iVar2 == 0) ||
                                 (iVar2 = test_mem_ne("test/ml_kem_internal_test.c",0xe1,
                                                      "shared_secret","shared_secret2",local_88,0x20
                                                      ,local_68,0x20), iVar2 == 0)) {
                                local_1b4 = -8;
                              }
                              else {
                                iVar2 = ossl_ml_kem_decap(local_68,0x20,local_1c0,
                                                          *(long *)(lVar1 + 0x28) + -1,lVar7);
                                iVar2 = test_false("test/ml_kem_internal_test.c",0xea,
                                                                                                      
                                                  "ossl_ml_kem_decap(shared_secret2, sizeof(shared_secret2), ciphertext, v->ctext_bytes - 1, private_key)"
                                                  ,iVar2 != 0);
                                if ((iVar2 != 0) &&
                                   (iVar2 = test_mem_eq("test/ml_kem_internal_test.c",0xef,
                                                        "shared_secret2","decap_entropy",local_68,
                                                        0x20,0x100940,0x20), iVar2 != 0)) {
                                  iVar2 = RAND_bytes(&local_12d,1);
                                  iVar2 = test_int_le("test/ml_kem_internal_test.c",0xf4,
                                                      "RAND_bytes(&c, 1)",&_LC7,iVar2,0);
                                  if (iVar2 != 0) goto LAB_00100291;
                                }
                                local_1b4 = -9;
                              }
                            }
                          }
                        }
                        goto LAB_00100291;
                      }
                    }
                    local_1b4 = -4;
                    goto LAB_00100291;
                  }
                }
                local_1b4 = -2;
              }
            }
          }
LAB_00100291:
          puVar8 = puVar8 + 1;
          ossl_ml_kem_key_free(lVar7);
          ossl_ml_kem_key_free(plVar6);
          CRYPTO_free(ptr);
          CRYPTO_free(local_1c0);
          local_1c8 = local_1c8 + 0x20;
        } while (local_1c8 != 0x60);
        EVP_MD_free(type);
        bVar9 = local_1b4 == 0;
        goto LAB_001002ef;
      }
    }
  }
LAB_0010005c:
  bVar9 = false;
LAB_001002ef:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar9;
}



undefined8 setup_tests(void)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = RAND_set_DRBG_type(0,"TEST-RAND","fips=no",0,0);
  uVar2 = test_true("test/ml_kem_internal_test.c",0x107,
                    "RAND_set_DRBG_type(NULL, \"TEST-RAND\", \"fips=no\", NULL, NULL)",iVar1 != 0);
  if ((int)uVar2 != 0) {
    add_test("sanity_test",0x100000);
    uVar2 = 1;
  }
  return uVar2;
}


