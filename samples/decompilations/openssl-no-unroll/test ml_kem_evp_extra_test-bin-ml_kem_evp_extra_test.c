
uint test_ml_kem(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  EVP_PKEY *from;
  undefined8 uVar4;
  EVP_PKEY *to;
  EVP_PKEY_CTX *ctx;
  void *ptr;
  void *ptr_00;
  long lVar5;
  void *ptr_01;
  long in_FS_OFFSET;
  void *local_60;
  undefined8 local_58;
  long local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = (void *)0x0;
  from = (EVP_PKEY *)EVP_PKEY_Q_keygen(0,0,"ML-KEM-768");
  iVar1 = test_ptr("test/ml_kem_evp_extra_test.c",0x7f,&_LC1,from);
  if (iVar1 != 0) {
    uVar4 = EVP_PKEY_get1_encoded_public_key(from,&local_60);
    iVar1 = test_size_t_gt("test/ml_kem_evp_extra_test.c",0x84,"publen",&_LC3,uVar4,0);
    if (iVar1 != 0) {
      to = EVP_PKEY_new();
      uVar2 = test_ptr("test/ml_kem_evp_extra_test.c",0x89,&_LC5,to);
      if (uVar2 != 0) {
        iVar1 = EVP_PKEY_copy_parameters(to,from);
        uVar2 = test_int_gt("test/ml_kem_evp_extra_test.c",0x8c,
                            "EVP_PKEY_copy_parameters(bkey, akey)",&_LC3,iVar1,0);
        if (uVar2 != 0) {
          iVar1 = EVP_PKEY_set1_encoded_public_key(to,local_60,uVar4);
          uVar2 = test_true("test/ml_kem_evp_extra_test.c",0x8f,
                            "EVP_PKEY_set1_encoded_public_key(bkey, rawpub, publen)",iVar1 != 0);
          if (uVar2 != 0) {
            ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(0,to,0);
            iVar1 = test_ptr("test/ml_kem_evp_extra_test.c",0x94,&_LC8,ctx);
            if (iVar1 != 0) {
              uVar3 = EVP_PKEY_encapsulate_init(ctx,0);
              iVar1 = test_int_gt("test/ml_kem_evp_extra_test.c",0x97,
                                  "EVP_PKEY_encapsulate_init(ctx, NULL)",&_LC3,uVar3,0);
              if (iVar1 == 0) {
                ptr_00 = (void *)0x0;
                ptr_01 = (void *)0x0;
                ptr = (void *)0x0;
                uVar2 = 0;
                goto LAB_00100075;
              }
              uVar3 = EVP_PKEY_encapsulate(ctx,0,&local_58,0,&local_48);
              iVar1 = test_int_gt("test/ml_kem_evp_extra_test.c",0x9a,
                                  "EVP_PKEY_encapsulate(ctx, NULL, &wrpkeylen, NULL, &bgenkeylen)",
                                  &_LC3,uVar3,0);
              if (iVar1 != 0) {
                iVar1 = test_size_t_gt("test/ml_kem_evp_extra_test.c",0x9e,"wrpkeylen",&_LC3,
                                       local_58,0);
                if (iVar1 != 0) {
                  iVar1 = test_size_t_gt("test/ml_kem_evp_extra_test.c",0x9e,"bgenkeylen",&_LC3,
                                         local_48,0);
                  if (iVar1 != 0) {
                    ptr = (void *)CRYPTO_zalloc(local_58,"test/ml_kem_evp_extra_test.c",0xa1);
                    ptr_00 = (void *)CRYPTO_zalloc(local_48,"test/ml_kem_evp_extra_test.c",0xa2);
                    iVar1 = test_ptr("test/ml_kem_evp_extra_test.c",0xa3,"wrpkey",ptr);
                    if (iVar1 != 0) {
                      iVar1 = test_ptr("test/ml_kem_evp_extra_test.c",0xa3,"bgenkey",ptr_00);
                      if (iVar1 != 0) {
                        ptr_01 = (void *)0x0;
                        uVar3 = EVP_PKEY_encapsulate(ctx,ptr,&local_58,ptr_00,&local_48);
                        uVar2 = test_int_gt("test/ml_kem_evp_extra_test.c",0xa6,
                                            "EVP_PKEY_encapsulate(ctx, wrpkey, &wrpkeylen, bgenkey, &bgenkeylen)"
                                            ,&_LC3,uVar3,0);
                        if (uVar2 == 0) goto LAB_00100075;
                        EVP_PKEY_CTX_free(ctx);
                        ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(0,from,0);
                        iVar1 = test_ptr("test/ml_kem_evp_extra_test.c",0xae,&_LC8,ctx);
                        if (iVar1 != 0) {
                          uVar3 = EVP_PKEY_decapsulate_init(ctx,0);
                          uVar2 = test_int_gt("test/ml_kem_evp_extra_test.c",0xb1,
                                              "EVP_PKEY_decapsulate_init(ctx, NULL)",&_LC3,uVar3,0);
                          if (uVar2 == 0) goto LAB_00100075;
                          uVar3 = EVP_PKEY_decapsulate(ctx,0,&local_50,ptr,local_58);
                          iVar1 = test_int_gt("test/ml_kem_evp_extra_test.c",0xb4,
                                              "EVP_PKEY_decapsulate(ctx, NULL, &agenkeylen, wrpkey, wrpkeylen)"
                                              ,&_LC3,uVar3,0);
                          if (iVar1 != 0) {
                            iVar1 = test_size_t_gt("test/ml_kem_evp_extra_test.c",0xb8,"agenkeylen",
                                                   &_LC3,local_50,0);
                            if (iVar1 != 0) {
                              ptr_01 = (void *)CRYPTO_zalloc(local_50,"test/ml_kem_evp_extra_test.c"
                                                             ,0xbb);
                              iVar1 = test_ptr("test/ml_kem_evp_extra_test.c",0xbc,"agenkey",ptr_01)
                              ;
                              if (iVar1 != 0) {
                                uVar3 = EVP_PKEY_decapsulate(ctx,ptr_01,&local_50,ptr,local_58);
                                uVar2 = test_int_gt("test/ml_kem_evp_extra_test.c",0xbf,
                                                                                                        
                                                  "EVP_PKEY_decapsulate(ctx, agenkey, &agenkeylen, wrpkey, wrpkeylen)"
                                                  ,&_LC3,uVar3,0);
                                if (uVar2 == 0) goto LAB_00100075;
                                iVar1 = test_mem_eq("test/ml_kem_evp_extra_test.c",0xc4,"agenkey",
                                                    "bgenkey",ptr_01,local_50,ptr_00,local_48);
                                if (iVar1 != 0) {
                                  for (lVar5 = 0;
                                      (local_50 != lVar5 &&
                                      (*(char *)((long)ptr_01 + lVar5) == '\0')); lVar5 = lVar5 + 1)
                                  {
                                  }
                                  iVar1 = test_size_t_ne("test/ml_kem_evp_extra_test.c",0xcb,&_LC21,
                                                         "agenkeylen");
                                  uVar2 = (uint)(iVar1 != 0);
                                  goto LAB_00100075;
                                }
                              }
                              uVar2 = 0;
                              goto LAB_00100075;
                            }
                          }
                        }
                      }
                    }
                    ptr_01 = (void *)0x0;
                    uVar2 = 0;
                    goto LAB_00100075;
                  }
                }
              }
            }
            ptr_00 = (void *)0x0;
            ptr_01 = (void *)0x0;
            ptr = (void *)0x0;
            uVar2 = 0;
            goto LAB_00100075;
          }
        }
      }
      ptr_00 = (void *)0x0;
      ptr_01 = (void *)0x0;
      ptr = (void *)0x0;
      ctx = (EVP_PKEY_CTX *)0x0;
      goto LAB_00100075;
    }
  }
  ptr_00 = (void *)0x0;
  ptr_01 = (void *)0x0;
  ptr = (void *)0x0;
  ctx = (EVP_PKEY_CTX *)0x0;
  uVar2 = 0;
  to = (EVP_PKEY *)0x0;
LAB_00100075:
  EVP_PKEY_CTX_free(ctx);
  EVP_PKEY_free(from);
  EVP_PKEY_free(to);
  CRYPTO_free(local_60);
  CRYPTO_free(ptr);
  CRYPTO_free(ptr_01);
  CRYPTO_free(ptr_00);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool test_non_derandomised_ml_kem(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  EVP_MD *type;
  undefined8 *puVar5;
  EVP_PKEY *from;
  undefined8 uVar6;
  long lVar7;
  EVP_PKEY_CTX *ctx;
  void *ptr;
  undefined8 *puVar8;
  long lVar9;
  long in_FS_OFFSET;
  bool bVar10;
  byte bVar11;
  void *pvVar12;
  int local_1ac;
  EVP_PKEY *local_1a8;
  void *local_1a0;
  void *local_198;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  uchar local_10d;
  undefined4 local_10c;
  void *local_108;
  long local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  uchar local_68 [40];
  long local_40;
  
  bVar11 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = RAND_get0_private(0);
  iVar1 = test_ptr("test/ml_kem_evp_extra_test.c",0xe6,"privctx = RAND_get0_private(NULL)",uVar3);
  if (iVar1 != 0) {
    uVar4 = RAND_get0_public(0);
    iVar1 = test_ptr("test/ml_kem_evp_extra_test.c",0xe7,"pubctx = RAND_get0_public(NULL)",uVar4);
    if (iVar1 != 0) {
      type = (EVP_MD *)EVP_MD_fetch(0,"sha256",0);
      iVar1 = test_ptr("test/ml_kem_evp_extra_test.c",0xea,
                       "sha256 = EVP_MD_fetch(NULL, \"sha256\", NULL)",type);
      if (iVar1 != 0) {
        lVar9 = 0;
        local_1ac = 0;
        do {
          local_10c = 0x100;
          local_108 = (void *)0x0;
          puVar5 = (undefined8 *)ossl_ml_kem_get_vinfo((&alg_0)[lVar9]);
          if (puVar5 == (undefined8 *)0x0) {
LAB_00100850:
            local_1ac = -1;
            ptr = (void *)0x0;
            ctx = (EVP_PKEY_CTX *)0x0;
            from = (EVP_PKEY *)0x0;
            local_198 = (void *)0x0;
            local_1a0 = (void *)0x0;
            local_1a8 = (EVP_PKEY *)0x0;
          }
          else {
            OSSL_PARAM_construct_octet_string(&local_148,"test_entropy",gen_seed,0x40);
            local_e8 = local_148;
            uStack_e0 = uStack_140;
            local_d8 = local_138;
            uStack_d0 = uStack_130;
            local_c8 = local_128;
            OSSL_PARAM_construct_uint(&local_148,"strength",&local_10c);
            local_a0 = local_128;
            local_c0 = local_148;
            uStack_b8 = uStack_140;
            local_b0 = local_138;
            uStack_a8 = uStack_130;
            OSSL_PARAM_construct_end(&local_148);
            local_98 = local_148;
            uStack_90 = uStack_140;
            local_78 = local_128;
            local_88 = local_138;
            uStack_80 = uStack_130;
            iVar1 = EVP_RAND_CTX_set_params(uVar3,&local_e8);
            iVar1 = test_true("test/ml_kem_evp_extra_test.c",0x104,
                              "EVP_RAND_CTX_set_params(privctx, params)",iVar1 != 0);
            if (iVar1 == 0) goto LAB_00100850;
            from = (EVP_PKEY *)EVP_PKEY_Q_keygen(0,0,*puVar5);
            iVar1 = test_ptr("test/ml_kem_evp_extra_test.c",0x10a,&_LC1,from);
            if (iVar1 == 0) {
LAB_00100824:
              local_1ac = -2;
LAB_0010082c:
              local_198 = (void *)0x0;
              ptr = (void *)0x0;
              ctx = (EVP_PKEY_CTX *)0x0;
              local_1a0 = (void *)0x0;
              local_1a8 = (EVP_PKEY *)0x0;
            }
            else {
              uVar2 = RAND_priv_bytes(&local_10d,1);
              iVar1 = test_int_le("test/ml_kem_evp_extra_test.c",0x10e,"RAND_priv_bytes(&c, 1)",
                                  &_LC3,uVar2,0);
              if (iVar1 == 0) goto LAB_00100824;
              uVar6 = EVP_PKEY_get1_encoded_public_key(from,&local_108);
              iVar1 = test_size_t_eq("test/ml_kem_evp_extra_test.c",0x113,"publen","v->pubkey_bytes"
                                     ,uVar6);
              if (iVar1 == 0) goto LAB_00100824;
              lVar7 = lVar9 * 0x20;
              iVar1 = test_mem_eq("test/ml_kem_evp_extra_test.c",0x118,"rawpub + v->vector_bytes",
                                  "expected_rho[i]",puVar5[6] + (long)local_108,0x20,
                                  expected_rho + lVar7,0x20);
              if (iVar1 == 0) {
                local_1ac = -3;
                goto LAB_0010082c;
              }
              local_1a8 = EVP_PKEY_new();
              iVar1 = test_ptr("test/ml_kem_evp_extra_test.c",0x11f,&_LC5,local_1a8);
              if (iVar1 == 0) {
LAB_00100a08:
                local_1ac = -4;
                ptr = (void *)0x0;
                ctx = (EVP_PKEY_CTX *)0x0;
                local_198 = (void *)0x0;
                local_1a0 = (void *)0x0;
              }
              else {
                iVar1 = EVP_PKEY_copy_parameters(local_1a8,from);
                iVar1 = test_int_gt("test/ml_kem_evp_extra_test.c",0x121,
                                    "EVP_PKEY_copy_parameters(bkey, akey)",&_LC3,iVar1);
                if (iVar1 == 0) goto LAB_00100a08;
                iVar1 = EVP_PKEY_set1_encoded_public_key(local_1a8,local_108,uVar6);
                iVar1 = test_true("test/ml_kem_evp_extra_test.c",0x123,
                                  "EVP_PKEY_set1_encoded_public_key(bkey, rawpub, publen)",
                                  iVar1 != 0);
                if (iVar1 == 0) goto LAB_00100a08;
                OSSL_PARAM_construct_octet_string(&local_148,"test_entropy",enc_seed,0x20);
                local_e8 = local_148;
                uStack_e0 = uStack_140;
                local_c8 = local_128;
                local_d8 = local_138;
                uStack_d0 = uStack_130;
                iVar1 = EVP_RAND_CTX_set_params(uVar4,&local_e8);
                iVar1 = test_true("test/ml_kem_evp_extra_test.c",0x12a,
                                  "EVP_RAND_CTX_set_params(pubctx, params)",iVar1 != 0);
                if (iVar1 == 0) goto LAB_00100a08;
                ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(0,local_1a8,0);
                iVar1 = test_ptr("test/ml_kem_evp_extra_test.c",0x130,&_LC8,ctx);
                if (iVar1 == 0) {
LAB_00100b55:
                  local_1ac = -5;
                  ptr = (void *)0x0;
                  local_198 = (void *)0x0;
                  local_1a0 = (void *)0x0;
                }
                else {
                  uVar2 = EVP_PKEY_encapsulate_init(ctx,0);
                  iVar1 = test_int_gt("test/ml_kem_evp_extra_test.c",0x132,
                                      "EVP_PKEY_encapsulate_init(ctx, NULL)",&_LC3,uVar2);
                  if (iVar1 == 0) goto LAB_00100b55;
                  uVar2 = EVP_PKEY_encapsulate(ctx,0,&local_100,0);
                  iVar1 = test_int_gt("test/ml_kem_evp_extra_test.c",0x134,
                                      "EVP_PKEY_encapsulate(ctx, NULL, &wrpkeylen, NULL, &bgenkeylen)"
                                      ,&_LC3,uVar2);
                  if (iVar1 == 0) goto LAB_00100b55;
                  iVar1 = test_size_t_eq("test/ml_kem_evp_extra_test.c",0x137,"wrpkeylen",
                                         "v->ctext_bytes",local_100);
                  if (iVar1 == 0) goto LAB_00100b55;
                  iVar1 = test_size_t_eq("test/ml_kem_evp_extra_test.c",0x138,"bgenkeylen",
                                         "ML_KEM_SHARED_SECRET_BYTES",local_f0);
                  if (iVar1 == 0) goto LAB_00100b55;
                  local_1a0 = (void *)CRYPTO_zalloc(local_100,"test/ml_kem_evp_extra_test.c",0x13a);
                  local_198 = (void *)CRYPTO_zalloc(local_f0,"test/ml_kem_evp_extra_test.c",0x13b);
                  iVar1 = test_ptr("test/ml_kem_evp_extra_test.c",0x13c,"wrpkey",local_1a0);
                  if (iVar1 == 0) {
LAB_00100e9a:
                    local_1ac = -5;
                    ptr = (void *)0x0;
                  }
                  else {
                    iVar1 = test_ptr("test/ml_kem_evp_extra_test.c",0x13c,"bgenkey",local_198);
                    if (iVar1 == 0) goto LAB_00100e9a;
                    iVar1 = EVP_PKEY_encapsulate(ctx,local_1a0,&local_100,local_198,&local_f0);
                    iVar1 = test_true("test/ml_kem_evp_extra_test.c",0x13e,
                                      "EVP_PKEY_encapsulate(ctx, wrpkey, &wrpkeylen, bgenkey, &bgenkeylen)"
                                      ,iVar1 != 0);
                    if (iVar1 == 0) goto LAB_00100e9a;
                    EVP_PKEY_CTX_free(ctx);
                    iVar1 = RAND_bytes(&local_10d,1);
                    iVar1 = test_int_le("test/ml_kem_evp_extra_test.c",0x144,"RAND_bytes(&c, 1)",
                                        &_LC3,iVar1);
                    if (iVar1 == 0) {
                      local_1ac = -5;
                      ptr = (void *)0x0;
                      ctx = (EVP_PKEY_CTX *)0x0;
                    }
                    else {
                      iVar1 = EVP_Digest(local_1a0,puVar5[5],local_68,(uint *)0x0,type,(ENGINE *)0x0
                                        );
                      iVar1 = test_true("test/ml_kem_evp_extra_test.c",0x149,
                                        "EVP_Digest(wrpkey, v->ctext_bytes, hash, NULL, sha256, NULL)"
                                        ,iVar1 != 0);
                      if (iVar1 != 0) {
                        iVar1 = test_mem_eq("test/ml_kem_evp_extra_test.c",0x14b,&_LC39,
                                            "expected_ctext_sha256[i]",local_68,0x20,
                                            expected_ctext_sha256 + lVar7,0x20);
                        if (iVar1 != 0) {
                          uVar6 = 0x20;
                          iVar1 = test_mem_eq("test/ml_kem_evp_extra_test.c",0x150,"bgenkey",
                                              "expected_shared_secret[i]",local_198,local_f0,
                                              expected_shared_secret + lVar7);
                          if (iVar1 != 0) {
                            ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(0,from,0,uVar6);
                            iVar1 = test_ptr("test/ml_kem_evp_extra_test.c",0x15a,&_LC8,ctx);
                            if (iVar1 != 0) {
                              uVar2 = EVP_PKEY_decapsulate_init(ctx,0);
                              iVar1 = test_int_gt("test/ml_kem_evp_extra_test.c",0x15c,
                                                  "EVP_PKEY_decapsulate_init(ctx, NULL)",&_LC3,uVar2
                                                 );
                              if (iVar1 != 0) {
                                iVar1 = EVP_PKEY_decapsulate(ctx,0,&local_f8,local_1a0,local_100);
                                iVar1 = test_true("test/ml_kem_evp_extra_test.c",0x15e,
                                                  "EVP_PKEY_decapsulate(ctx, NULL, &agenkeylen, wrpkey, wrpkeylen)"
                                                  ,iVar1 != 0);
                                if (iVar1 != 0) {
                                  iVar1 = test_size_t_eq("test/ml_kem_evp_extra_test.c",0x161,
                                                         "agenkeylen","ML_KEM_SHARED_SECRET_BYTES",
                                                         local_f8);
                                  if (iVar1 != 0) {
                                    ptr = (void *)CRYPTO_zalloc(local_f8,
                                                  "test/ml_kem_evp_extra_test.c",0x163);
                                    iVar1 = test_ptr("test/ml_kem_evp_extra_test.c",0x164,"agenkey",
                                                     ptr);
                                    if (iVar1 != 0) {
                                      iVar1 = EVP_PKEY_decapsulate
                                                        (ctx,ptr,&local_f8,local_1a0,local_100);
                                      iVar1 = test_true("test/ml_kem_evp_extra_test.c",0x166,
                                                                                                                
                                                  "EVP_PKEY_decapsulate(ctx, agenkey, &agenkeylen, wrpkey, wrpkeylen)"
                                                  ,iVar1 != 0);
                                      if (iVar1 != 0) {
                                        iVar1 = test_mem_eq("test/ml_kem_evp_extra_test.c",0x16a,
                                                            "agenkey","bgenkey",ptr,local_f8,
                                                            local_198,local_f0);
                                        if (iVar1 != 0) {
                                          memset(local_1a0,0,puVar5[5]);
                                          iVar1 = EVP_PKEY_decapsulate
                                                            (ctx,ptr,&local_f8,local_1a0,local_100);
                                          iVar1 = test_true("test/ml_kem_evp_extra_test.c",0x170,
                                                                                                                        
                                                  "EVP_PKEY_decapsulate(ctx, agenkey, &agenkeylen, wrpkey, wrpkeylen)"
                                                  ,iVar1 != 0);
                                          if (iVar1 != 0) {
                                            pvVar12 = local_198;
                                            iVar1 = test_mem_ne("test/ml_kem_evp_extra_test.c",0x173
                                                                ,"agenkey","bgenkey",ptr,local_f8,
                                                                local_198,local_f0);
                                            if (iVar1 != 0) {
                                              OSSL_PARAM_construct_octet_string
                                                        (&local_148,"test_entropy",dec_seed,0x20,
                                                         pvVar12);
                                              puVar5 = &local_148;
                                              puVar8 = &local_e8;
                                              for (lVar7 = 10; lVar7 != 0; lVar7 = lVar7 + -1) {
                                                *(undefined4 *)puVar8 = *(undefined4 *)puVar5;
                                                puVar5 = (undefined8 *)
                                                         ((long)puVar5 + (ulong)bVar11 * -8 + 4);
                                                puVar8 = (undefined8 *)
                                                         ((long)puVar8 + (ulong)bVar11 * -8 + 4);
                                              }
                                              iVar1 = EVP_RAND_CTX_set_params(uVar4,&local_e8);
                                              iVar1 = test_true("test/ml_kem_evp_extra_test.c",0x17b
                                                                ,
                                                  "EVP_RAND_CTX_set_params(pubctx, params)",
                                                  iVar1 != 0);
                                              if (iVar1 != 0) {
                                                iVar1 = EVP_PKEY_decapsulate
                                                                  (ctx,ptr,&local_f8,local_1a0,
                                                                   local_100 + -1);
                                                iVar1 = test_false("test/ml_kem_evp_extra_test.c",
                                                                   0x17f,
                                                  "EVP_PKEY_decapsulate(ctx, agenkey, &agenkeylen, wrpkey, wrpkeylen - 1)"
                                                  ,iVar1 != 0);
                                                if (iVar1 != 0) {
                                                  iVar1 = test_mem_eq("test/ml_kem_evp_extra_test.c"
                                                                      ,0x182,"agenkey","dec_seed",
                                                                      ptr,local_f8,dec_seed,0x20);
                                                  if (iVar1 != 0) goto LAB_0010087c;
                                                }
                                              }
                                              local_1ac = -9;
                                              goto LAB_0010087c;
                                            }
                                          }
                                          local_1ac = -8;
                                          goto LAB_0010087c;
                                        }
                                      }
                                    }
                                    local_1ac = -7;
                                    goto LAB_0010087c;
                                  }
                                }
                              }
                            }
                            local_1ac = -7;
                            ptr = (void *)0x0;
                            goto LAB_0010087c;
                          }
                        }
                      }
                      local_1ac = -6;
                      ptr = (void *)0x0;
                      ctx = (EVP_PKEY_CTX *)0x0;
                    }
                  }
                }
              }
            }
          }
LAB_0010087c:
          lVar9 = lVar9 + 1;
          EVP_PKEY_CTX_free(ctx);
          EVP_PKEY_free(from);
          EVP_PKEY_free(local_1a8);
          CRYPTO_free(local_108);
          CRYPTO_free(local_1a0);
          CRYPTO_free(ptr);
          CRYPTO_free(local_198);
        } while (lVar9 != 3);
        EVP_MD_free(type);
        bVar10 = local_1ac == 0;
        goto LAB_00100626;
      }
    }
  }
  bVar10 = false;
LAB_00100626:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined1 * test_get_options(void)

{
  return options_1;
}



undefined8 setup_tests(void)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = false;
  do {
    iVar2 = opt_next();
    while( true ) {
      if (iVar2 == 0) {
        if (bVar1) {
          iVar2 = RAND_set_DRBG_type(0,"TEST-RAND","fips=no",0,0);
          iVar2 = test_true("test/ml_kem_evp_extra_test.c",0x1aa,
                            "RAND_set_DRBG_type(NULL, \"TEST-RAND\", \"fips=no\", NULL, NULL)",
                            iVar2 != 0);
          if (iVar2 == 0) {
            return 0;
          }
          add_test("test_non_derandomised_ml_kem",test_non_derandomised_ml_kem);
        }
        else {
          add_test("test_ml_kem",0x100000);
        }
        return 1;
      }
      if (iVar2 != 2) break;
      bVar1 = true;
      iVar2 = opt_next();
    }
  } while (iVar2 - 500U < 6);
  return 0;
}


