
void restore_rand(void)

{
  fake_rand_set_public_private_callbacks(0,0);
  CRYPTO_free(fake_rand_bytes);
  fake_rand_bytes = (void *)0x0;
  fake_rand_bytes_offset = 0;
  return;
}



undefined8 get_faked_bytes(undefined1 *param_1,long param_2)

{
  ulong uVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  
  iVar3 = test_ptr("test/sm2_internal_test.c",0x2a,"fake_rand_bytes",fake_rand_bytes);
  if ((iVar3 == 0) ||
     (iVar3 = test_size_t_gt("test/sm2_internal_test.c",0x2a,"fake_rand_size",&_LC2,fake_rand_size,0
                            ), puVar2 = fake_rand_bytes, uVar1 = fake_rand_size, iVar3 == 0)) {
    uVar4 = 0;
  }
  else {
    if (param_2 != 0) {
      puVar6 = param_1;
      do {
        while (fake_rand_bytes_offset < uVar1) {
          puVar7 = puVar2 + fake_rand_bytes_offset;
          puVar5 = puVar6 + 1;
          fake_rand_bytes_offset = fake_rand_bytes_offset + 1;
          *puVar6 = *puVar7;
          puVar6 = puVar5;
          if (puVar5 == param_1 + param_2) goto LAB_0010010a;
        }
        puVar7 = puVar6 + 1;
        fake_rand_bytes_offset = 1;
        *puVar6 = *puVar2;
        puVar6 = puVar7;
      } while (puVar7 != param_1 + param_2);
    }
LAB_0010010a:
    uVar4 = 1;
  }
  return uVar4;
}



EC_GROUP *
create_EC_group_constprop_0
          (char *param_1,char *param_2,char *param_3,char *param_4,char *param_5,char *param_6)

{
  int iVar1;
  uint uVar2;
  EC_GROUP *group;
  EC_POINT *generator;
  EC_GROUP *pEVar3;
  long in_FS_OFFSET;
  BIGNUM *local_78;
  BIGNUM *local_70;
  BIGNUM *local_68;
  BIGNUM *local_60;
  BIGNUM *local_58;
  BIGNUM *local_50;
  BIGNUM *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = (BIGNUM *)0x0;
  local_70 = (BIGNUM *)0x0;
  local_68 = (BIGNUM *)0x0;
  local_60 = (BIGNUM *)0x0;
  local_58 = (BIGNUM *)0x0;
  local_50 = (BIGNUM *)0x0;
  local_48 = (BIGNUM *)0x0;
  iVar1 = BN_hex2bn(&local_78,param_1);
  iVar1 = test_true("test/sm2_internal_test.c",0x5c,"BN_hex2bn(&p, p_hex)",iVar1 != 0);
  if (iVar1 != 0) {
    iVar1 = BN_hex2bn(&local_70,param_2);
    iVar1 = test_true("test/sm2_internal_test.c",0x5d,"BN_hex2bn(&a, a_hex)",iVar1 != 0);
    if (iVar1 != 0) {
      BN_hex2bn(&local_68,param_3);
      iVar1 = test_true("test/sm2_internal_test.c",0x5e,"BN_hex2bn(&b, b_hex)");
      if (iVar1 != 0) {
        generator = (EC_POINT *)0x0;
        group = EC_GROUP_new_curve_GFp(local_78,local_70,local_68,(BN_CTX *)0x0);
        uVar2 = test_ptr("test/sm2_internal_test.c",0x62,"group",group);
        if (uVar2 != 0) {
          generator = EC_POINT_new(group);
          iVar1 = test_ptr("test/sm2_internal_test.c",0x66,"generator",generator);
          if (iVar1 != 0) {
            iVar1 = BN_hex2bn(&local_60,param_4);
            iVar1 = test_true("test/sm2_internal_test.c",0x69,"BN_hex2bn(&g_x, x_hex)",iVar1 != 0);
            if (iVar1 != 0) {
              iVar1 = BN_hex2bn(&local_58,param_5);
              uVar2 = test_true("test/sm2_internal_test.c",0x6a,"BN_hex2bn(&g_y, y_hex)",iVar1 != 0)
              ;
              if (uVar2 == 0) goto LAB_001001cf;
              iVar1 = EC_POINT_set_affine_coordinates(group,generator,local_60,local_58,0);
              iVar1 = test_true("test/sm2_internal_test.c",0x6b,
                                "EC_POINT_set_affine_coordinates(group, generator, g_x, g_y, NULL)",
                                iVar1 != 0);
              if (iVar1 != 0) {
                iVar1 = BN_hex2bn(&local_50,param_6);
                iVar1 = test_true("test/sm2_internal_test.c",0x6f,"BN_hex2bn(&order, order_hex)",
                                  iVar1 != 0);
                if (iVar1 != 0) {
                  iVar1 = BN_hex2bn(&local_48,"1");
                  iVar1 = test_true("test/sm2_internal_test.c",0x70,"BN_hex2bn(&cof, cof_hex)",
                                    iVar1 != 0);
                  if (iVar1 != 0) {
                    iVar1 = EC_GROUP_set_generator(group,generator,local_50,local_48);
                    iVar1 = test_true("test/sm2_internal_test.c",0x71,
                                      "EC_GROUP_set_generator(group, generator, order, cof)",
                                      iVar1 != 0);
                    uVar2 = (uint)(iVar1 != 0);
                    goto LAB_001001cf;
                  }
                }
              }
            }
          }
          uVar2 = 0;
        }
        goto LAB_001001cf;
      }
    }
  }
  uVar2 = 0;
  group = (EC_GROUP *)0x0;
  generator = (EC_POINT *)0x0;
LAB_001001cf:
  BN_free(local_78);
  BN_free(local_70);
  BN_free(local_68);
  BN_free(local_60);
  BN_free(local_58);
  EC_POINT_free(generator);
  BN_free(local_50);
  BN_free(local_48);
  pEVar3 = group;
  if (uVar2 == 0) {
    pEVar3 = (EC_GROUP *)0x0;
    EC_GROUP_free(group);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pEVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void start_fake_rand_isra_0(char *param_1)

{
  int iVar1;
  size_t sVar2;
  
  CRYPTO_free(fake_rand_bytes);
  fake_rand_bytes_offset = 0;
  sVar2 = strlen(param_1);
  fake_rand_size = sVar2 >> 1;
  fake_rand_bytes = (void *)OPENSSL_hexstr2buf(param_1,0);
  iVar1 = test_ptr("test/sm2_internal_test.c",0x3b,
                   "fake_rand_bytes = OPENSSL_hexstr2buf(hex_bytes, NULL)",fake_rand_bytes);
  if (iVar1 == 0) {
    return;
  }
  fake_rand_set_public_private_callbacks(0,get_faked_bytes);
  return;
}



bool test_sm2_crypt_constprop_0
               (EC_GROUP *param_1,undefined8 param_2,char *param_3,undefined8 param_4,
               undefined8 param_5)

{
  int iVar1;
  void *ptr;
  EC_KEY *key;
  EC_POINT *r;
  void *ptr_00;
  void *ptr_01;
  long in_FS_OFFSET;
  bool bVar2;
  BIGNUM *local_60;
  undefined8 local_58;
  ulong local_50;
  ulong local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = (BIGNUM *)0x0;
  ptr = (void *)OPENSSL_hexstr2buf(param_5,0);
  local_58 = 0;
  local_50 = 0;
  local_48 = 0x13;
  iVar1 = test_ptr("test/sm2_internal_test.c",0x98,"expected",ptr);
  if (iVar1 != 0) {
    iVar1 = BN_hex2bn(&local_60,param_3);
    iVar1 = test_true("test/sm2_internal_test.c",0x99,"BN_hex2bn(&priv, privkey_hex)",iVar1 != 0);
    if (iVar1 != 0) {
      key = EC_KEY_new();
      iVar1 = test_ptr("test/sm2_internal_test.c",0x9d,&_LC19,key);
      if (iVar1 == 0) {
        ptr_01 = (void *)0x0;
        ptr_00 = (void *)0x0;
        r = (EC_POINT *)0x0;
        bVar2 = false;
        goto LAB_001005a6;
      }
      iVar1 = EC_KEY_set_group(key,param_1);
      iVar1 = test_true("test/sm2_internal_test.c",0x9e,"EC_KEY_set_group(key, group)",iVar1 != 0);
      if (iVar1 != 0) {
        iVar1 = EC_KEY_set_private_key(key,local_60);
        iVar1 = test_true("test/sm2_internal_test.c",0x9f,"EC_KEY_set_private_key(key, priv)",
                          iVar1 != 0);
        if (iVar1 != 0) {
          r = EC_POINT_new(param_1);
          iVar1 = test_ptr("test/sm2_internal_test.c",0xa3,&_LC22);
          if (iVar1 != 0) {
            iVar1 = EC_POINT_mul(param_1,r,local_60,(EC_POINT *)0x0,(BIGNUM *)0x0,(BN_CTX *)0x0);
            iVar1 = test_true("test/sm2_internal_test.c",0xa4,
                              "EC_POINT_mul(group, pt, priv, NULL, NULL, NULL)",iVar1 != 0);
            if (iVar1 == 0) {
              ptr_01 = (void *)0x0;
              ptr_00 = (void *)0x0;
              bVar2 = false;
              goto LAB_001005a6;
            }
            iVar1 = EC_KEY_set_public_key(key,r);
            iVar1 = test_true("test/sm2_internal_test.c",0xa5,"EC_KEY_set_public_key(key, pt)",
                              iVar1 != 0);
            if (iVar1 != 0) {
              iVar1 = ossl_sm2_ciphertext_size(key,param_2,0x13,&local_58);
              iVar1 = test_true("test/sm2_internal_test.c",0xa6,
                                "ossl_sm2_ciphertext_size(key, digest, msg_len, &ctext_len)",
                                iVar1 != 0);
              if (iVar1 != 0) {
                ptr_00 = (void *)CRYPTO_zalloc(local_58,"test/sm2_internal_test.c",0xaa);
                iVar1 = test_ptr("test/sm2_internal_test.c",0xab,"ctext",ptr_00);
                if (iVar1 != 0) {
                  start_fake_rand_isra_0(param_4);
                  iVar1 = ossl_sm2_encrypt(key,param_2,"encryption standard",0x13,ptr_00,&local_58);
                  iVar1 = test_true("test/sm2_internal_test.c",0xaf,
                                    "ossl_sm2_encrypt(key, digest, (const uint8_t *)message, msg_len, ctext, &ctext_len)"
                                    ,iVar1 != 0);
                  if (iVar1 == 0) {
                    ptr_01 = (void *)0x0;
                    restore_rand();
                    bVar2 = false;
                    goto LAB_001005a6;
                  }
                  restore_rand();
                  iVar1 = test_mem_eq("test/sm2_internal_test.c",0xb7,"ctext","expected",ptr_00,
                                      local_58,ptr,local_58);
                  if (iVar1 != 0) {
                    iVar1 = ossl_sm2_plaintext_size(ptr_00,local_58,&local_50);
                    iVar1 = test_true("test/sm2_internal_test.c",0xba,
                                      "ossl_sm2_plaintext_size(ctext, ctext_len, &ptext_len)",
                                      iVar1 != 0);
                    if (iVar1 != 0) {
                      iVar1 = test_int_eq("test/sm2_internal_test.c",0xbb,"ptext_len","msg_len",
                                          local_50 & 0xffffffff,0x13);
                      if (iVar1 != 0) {
                        ptr_01 = (void *)CRYPTO_zalloc(local_50,"test/sm2_internal_test.c",0xbe);
                        iVar1 = test_ptr("test/sm2_internal_test.c",0xbf,"recovered",ptr_01);
                        if (iVar1 != 0) {
                          iVar1 = ossl_sm2_decrypt(key,param_2,ptr_00,local_58,ptr_01,&local_48);
                          iVar1 = test_true("test/sm2_internal_test.c",0xc0,
                                            "ossl_sm2_decrypt(key, digest, ctext, ctext_len, recovered, &recovered_len)"
                                            ,iVar1 != 0);
                          if (iVar1 != 0) {
                            iVar1 = test_int_eq("test/sm2_internal_test.c",0xc2,"recovered_len",
                                                "msg_len",local_48 & 0xffffffff,0x13);
                            if (iVar1 != 0) {
                              iVar1 = test_mem_eq("test/sm2_internal_test.c",0xc3,"recovered",
                                                  "message",ptr_01,local_48,"encryption standard",
                                                  0x13);
                              bVar2 = iVar1 != 0;
                              goto LAB_001005a6;
                            }
                          }
                        }
                        bVar2 = false;
                        goto LAB_001005a6;
                      }
                    }
                  }
                }
                bVar2 = false;
                ptr_01 = (void *)0x0;
                goto LAB_001005a6;
              }
            }
          }
          bVar2 = false;
          ptr_01 = (void *)0x0;
          ptr_00 = (void *)0x0;
          goto LAB_001005a6;
        }
      }
      bVar2 = false;
      ptr_01 = (void *)0x0;
      ptr_00 = (void *)0x0;
      r = (EC_POINT *)0x0;
      goto LAB_001005a6;
    }
  }
  bVar2 = false;
  ptr_01 = (void *)0x0;
  ptr_00 = (void *)0x0;
  r = (EC_POINT *)0x0;
  key = (EC_KEY *)0x0;
LAB_001005a6:
  BN_free(local_60);
  EC_POINT_free(r);
  CRYPTO_free(ptr_00);
  CRYPTO_free(ptr_01);
  CRYPTO_free(ptr);
  EC_KEY_free(key);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint sm2_crypt_test(void)

{
  int iVar1;
  uint uVar2;
  EC_GROUP *group;
  undefined8 uVar3;
  EVP_MD *pEVar4;
  EC_GROUP *group_00;
  
  group = (EC_GROUP *)
          create_EC_group_constprop_0
                    ("8542D69E4C044F18E8B92435BF6FF7DE457283915C45517D722EDB8B08F1DFC3",
                     "787968B4FA32C3FD2417842E73BBFEFF2F3C848B6831D7E0EC65228B3937E498",
                     "63E4C6D3B23B0C849CF84241484BFE48F61D59A5B16BA06E6E12D1DA27C5249A",
                     "421DEBD61B62EAB6746434EBC3CC315E32220B3BADD50BDC4C4E6C147FEDD43D",
                     "0680512BCBB42C07D47349D2153B70C4E5D7FDFCBFA36EA1A85841B9E46E09A2",
                     "8542D69E4C044F18E8B92435BF6FF7DD297720630485628D5AE74EE7C32E79B7");
  iVar1 = test_ptr("test/sm2_internal_test.c",0xdf,"test_group",group);
  if (iVar1 != 0) {
    uVar3 = EVP_sm3();
    iVar1 = test_sm2_crypt_constprop_0
                      (group,uVar3,
                       "1649AB77A00637BD5E2EFE283FBF353534AA7F7CB89463F208DDBC2920BB0DA0",
                       "004C62EEFD6ECFC2B95B92FD6C3D9575148AFA17425546D49018E5388D49DD7B4F0092e8ff62146873c258557548500ab2df2a365e0609ab67640a1f6d57d7b17820008349312695a3e1d2f46905f39a766487f2432e95d6be0cb009fe8c69fd8825a7"
                       ,
                       "307B0220245C26FB68B1DDDDB12C4B6BF9F2B6D5FE60A383B0D18D1C4144ABF17F6252E7022076CB9264C2A7E88E52B19903FDC47378F605E36811F5C07423A24B84400F01B804209C3D7360C30156FAB7C80A0276712DA9D8094A634B766D3A285E07480653426D0413650053A89B41C418B0C3AAD00D886C00286467"
                      );
    if (iVar1 != 0) {
      pEVar4 = EVP_sha256();
      iVar1 = test_sm2_crypt_constprop_0
                        (group,pEVar4,
                         "1649AB77A00637BD5E2EFE283FBF353534AA7F7CB89463F208DDBC2920BB0DA0",
                         "004C62EEFD6ECFC2B95B92FD6C3D9575148AFA17425546D49018E5388D49DD7B4F003da18008784352192d70f22c26c243174a447ba272fec64163dd4742bae8bc9800df17605cf304e9dd1dfeb90c015e93b393a6f046792f790a6fa4228af67d9588"
                         ,
                         "307B0220245C26FB68B1DDDDB12C4B6BF9F2B6D5FE60A383B0D18D1C4144ABF17F6252E7022076CB9264C2A7E88E52B19903FDC47378F605E36811F5C07423A24B84400F01B80420BE89139D07853100EFA763F60CBE30099EA3DF7F8F364F9D10A5E988E3C5AAFC0413229E6C9AEE2BB92CAD649FE2C035689785DA33"
                        );
      if (iVar1 != 0) {
        group_00 = (EC_GROUP *)
                   create_EC_group_constprop_0
                             ("fffffffeffffffffffffffffffffffffffffffff00000000ffffffffffffffff",
                              "fffffffeffffffffffffffffffffffffffffffff00000000fffffffffffffffc",
                              "28e9fa9e9d9f5e344d5a9e4bcf6509a7f39789f515ab8f92ddbcbd414d940e93",
                              "32c4ae2c1f1981195f9904466a39c9948fe30bbff2660be1715a4589334c74c7",
                              "bc3736a2f4f6779c59bdcee36b692153d0a9877cc62a474002df32e52139f0a0",
                              "fffffffeffffffffffffffffffffffff7203df6b21c6052b53bbf40939d54123");
        uVar2 = test_ptr("test/sm2_internal_test.c",0x109,"gm_group",group_00);
        if (uVar2 != 0) {
          uVar3 = EVP_sm3();
          iVar1 = test_sm2_crypt_constprop_0
                            (group_00,uVar3,
                             "3945208F7B2144B13F36E38AC6D39F95889393692860B51A42FB81EF4DF7C5B8",
                             "59276E27D506861A16680F3AD9C02DCCEF3CC1FA3CDBE4CE6D54B80DEAC1BC21",
                             "307C022004EBFC718E8D1798620432268E77FEB6415E2EDE0E073C0F4F640ECD2E149A73022100E858F9D81E5430A57B36DAAB8F950A3C64E6EE6A63094D99283AFF767E124DF0042059983C18F809E262923C53AEC295D30383B54E39D609D160AFCB1908D0BD8766041321886CA989CA9C7D58087307CA93092D651EFA"
                            );
          uVar2 = (uint)(iVar1 != 0);
        }
        goto LAB_00100a61;
      }
    }
  }
  group_00 = (EC_GROUP *)0x0;
  uVar2 = 0;
LAB_00100a61:
  EC_GROUP_free(group);
  EC_GROUP_free(group_00);
  return uVar2;
}



int test_sm2_sign_constprop_0
              (EC_GROUP *param_1,char *param_2,char *param_3,undefined8 param_4,char *param_5,
              char *param_6,int param_7)

{
  int iVar1;
  EC_KEY *key;
  size_t sVar2;
  undefined8 uVar3;
  ECDSA_SIG *sig;
  EC_POINT *r;
  long in_FS_OFFSET;
  BIGNUM *local_68;
  undefined8 local_60;
  undefined8 local_58;
  BIGNUM *local_50;
  BIGNUM *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = (BIGNUM *)0x0;
  local_60 = 0;
  local_58 = 0;
  local_50 = (BIGNUM *)0x0;
  local_48 = (BIGNUM *)0x0;
  iVar1 = BN_hex2bn(&local_68,param_3);
  iVar1 = test_true("test/sm2_internal_test.c",0x142,"BN_hex2bn(&priv, privkey_hex)",iVar1 != 0);
  if (iVar1 == 0) {
    iVar1 = 0;
    sig = (ECDSA_SIG *)0x0;
    key = (EC_KEY *)0x0;
    r = (EC_POINT *)0x0;
    goto LAB_00100bfd;
  }
  key = EC_KEY_new();
  iVar1 = test_ptr("test/sm2_internal_test.c",0x146,&_LC19,key);
  if (iVar1 != 0) {
    iVar1 = EC_KEY_set_group(key,param_1);
    iVar1 = test_true("test/sm2_internal_test.c",0x147,"EC_KEY_set_group(key, group)",iVar1 != 0);
    if (iVar1 == 0) {
      sig = (ECDSA_SIG *)0x0;
      r = (EC_POINT *)0x0;
      iVar1 = 0;
      goto LAB_00100bfd;
    }
    iVar1 = EC_KEY_set_private_key(key,local_68);
    iVar1 = test_true("test/sm2_internal_test.c",0x148,"EC_KEY_set_private_key(key, priv)",
                      iVar1 != 0);
    if (iVar1 != 0) {
      if (param_7 == 0) {
        r = EC_POINT_new(param_1);
        iVar1 = test_ptr("test/sm2_internal_test.c",0x14d,&_LC22);
        if (iVar1 != 0) {
          iVar1 = EC_POINT_mul(param_1,r,local_68,(EC_POINT *)0x0,(BIGNUM *)0x0,(BN_CTX *)0x0);
          sig = (ECDSA_SIG *)0x0;
          iVar1 = test_true("test/sm2_internal_test.c",0x14e,
                            "EC_POINT_mul(group, pt, priv, NULL, NULL, NULL)",iVar1 != 0);
          if (iVar1 == 0) goto LAB_00100bfd;
          iVar1 = EC_KEY_set_public_key(key,r);
          iVar1 = test_true("test/sm2_internal_test.c",0x14f,"EC_KEY_set_public_key(key, pt)",
                            iVar1 != 0);
          if (iVar1 != 0) goto LAB_00100d0e;
        }
        iVar1 = 0;
        sig = (ECDSA_SIG *)0x0;
      }
      else {
        r = (EC_POINT *)0x0;
LAB_00100d0e:
        start_fake_rand_isra_0(param_4);
        sVar2 = strlen(param_2);
        uVar3 = EVP_sm3();
        sig = (ECDSA_SIG *)ossl_sm2_do_sign(key,uVar3,param_2,sVar2,"message digest",0xe);
        iVar1 = test_ptr("test/sm2_internal_test.c",0x156,&_LC59,sig);
        if (iVar1 == 0) {
          fake_rand_set_public_private_callbacks(0,0);
          CRYPTO_free(fake_rand_bytes);
          fake_rand_bytes = (void *)0x0;
          fake_rand_bytes_offset = 0;
        }
        else {
          fake_rand_set_public_private_callbacks(0,0);
          CRYPTO_free(fake_rand_bytes);
          fake_rand_bytes = (void *)0x0;
          fake_rand_bytes_offset = 0;
          ECDSA_SIG_get0(sig,&local_60,&local_58);
          iVar1 = BN_hex2bn(&local_50,param_5);
          iVar1 = test_true("test/sm2_internal_test.c",0x15e,"BN_hex2bn(&r, r_hex)",iVar1 != 0);
          if (iVar1 != 0) {
            iVar1 = BN_hex2bn(&local_48,param_6);
            iVar1 = test_true("test/sm2_internal_test.c",0x15f,"BN_hex2bn(&s, s_hex)",iVar1 != 0);
            if (((iVar1 != 0) &&
                (iVar1 = test_BN_eq("test/sm2_internal_test.c",0x160,&_LC63,"sig_r",local_50,
                                    local_60), iVar1 != 0)) &&
               (iVar1 = test_BN_eq("test/sm2_internal_test.c",0x161,&_LC65,"sig_s",local_48,local_58
                                  ), iVar1 != 0)) {
              sVar2 = strlen(param_2);
              uVar3 = EVP_sm3();
              iVar1 = ossl_sm2_do_verify(key,uVar3,sig,param_2,sVar2,"message digest",0xe);
              test_true("test/sm2_internal_test.c",0x168,&_LC66,iVar1 != 0);
              goto LAB_00100bfd;
            }
          }
        }
        iVar1 = 0;
      }
      goto LAB_00100bfd;
    }
  }
  sig = (ECDSA_SIG *)0x0;
  r = (EC_POINT *)0x0;
  iVar1 = 0;
LAB_00100bfd:
  ECDSA_SIG_free(sig);
  EC_POINT_free(r);
  EC_KEY_free(key);
  BN_free(local_68);
  BN_free(local_50);
  BN_free(local_48);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}



bool sm2_sig_test(void)

{
  int iVar1;
  EC_GROUP *group;
  EC_GROUP *group_00;
  bool bVar2;
  
  group = (EC_GROUP *)
          create_EC_group_constprop_0
                    ("8542D69E4C044F18E8B92435BF6FF7DE457283915C45517D722EDB8B08F1DFC3",
                     "787968B4FA32C3FD2417842E73BBFEFF2F3C848B6831D7E0EC65228B3937E498",
                     "63E4C6D3B23B0C849CF84241484BFE48F61D59A5B16BA06E6E12D1DA27C5249A",
                     "421DEBD61B62EAB6746434EBC3CC315E32220B3BADD50BDC4C4E6C147FEDD43D",
                     "0680512BCBB42C07D47349D2153B70C4E5D7FDFCBFA36EA1A85841B9E46E09A2",
                     "8542D69E4C044F18E8B92435BF6FF7DD297720630485628D5AE74EE7C32E79B7");
  iVar1 = test_ptr("test/sm2_internal_test.c",0x184,"test_group",group);
  if (iVar1 != 0) {
    iVar1 = test_sm2_sign_constprop_0
                      (group,"ALICE123@YAHOO.COM",
                       "128B2FA8BD433C6C068C8D803DFF79792A519A55171B1B650C23661D15897263",
                       "006CB28D99385C175C94F94E934817663FC176D925DD72B727260DBAAE1FB2F96F007c47811054c6f99613a578eb8453706ccb96384fe7df5c171671e760bfa8be3a"
                       ,"40F1EC59F793D9F49E09DCEF49130D4194F79FB1EED2CAA55BACDB49C4E755D1",
                       "6FC6DAC32C5D5CF10C77DFB20F7C2EB667A457872FB09EC56327A67EC7DEEBE7",0);
    iVar1 = test_true("test/sm2_internal_test.c",0x187,
                      "test_sm2_sign( test_group, \"ALICE123@YAHOO.COM\", \"128B2FA8BD433C6C068C8D803DFF79792A519A55171B1B650C23661D15897263\", \"message digest\", \"006CB28D99385C175C94F94E934817663FC176D925DD72B727260DBAAE1FB2F96F\" \"007c47811054c6f99613a578eb8453706ccb96384fe7df5c171671e760bfa8be3a\", \"40F1EC59F793D9F49E09DCEF49130D4194F79FB1EED2CAA55BACDB49C4E755D1\", \"6FC6DAC32C5D5CF10C77DFB20F7C2EB667A457872FB09EC56327A67EC7DEEBE7\", 0)"
                      ,iVar1 != 0);
    if (iVar1 != 0) {
      group_00 = (EC_GROUP *)
                 create_EC_group_constprop_0
                           ("fffffffeffffffffffffffffffffffffffffffff00000000ffffffffffffffff",
                            "fffffffeffffffffffffffffffffffffffffffff00000000fffffffffffffffc",
                            "28e9fa9e9d9f5e344d5a9e4bcf6509a7f39789f515ab8f92ddbcbd414d940e93",
                            "32c4ae2c1f1981195f9904466a39c9948fe30bbff2660be1715a4589334c74c7",
                            "bc3736a2f4f6779c59bdcee36b692153d0a9877cc62a474002df32e52139f0a0",
                            "fffffffeffffffffffffffffffffffff7203df6b21c6052b53bbf40939d54123");
      iVar1 = test_ptr("test/sm2_internal_test.c",0x19c,"gm_group",group_00);
      if (iVar1 != 0) {
        iVar1 = test_sm2_sign_constprop_0
                          (group_00,"1234567812345678",
                           "3945208F7B2144B13F36E38AC6D39F95889393692860B51A42FB81EF4DF7C5B8",
                           "59276E27D506861A16680F3AD9C02DCCEF3CC1FA3CDBE4CE6D54B80DEAC1BC21",
                           "F5A03B0648D2C4630EEAC513E1BB81A15944DA3827D5B74143AC7EACEEE720B3",
                           "B1B6AA29DF212FD8763182BC0D421CA1BB9038FD1F7F42D4840B69C485BBC1AA",0);
        iVar1 = test_true("test/sm2_internal_test.c",0x19f,
                          "test_sm2_sign( gm_group, SM2_DEFAULT_USERID, \"3945208F7B2144B13F36E38AC6D39F95889393692860B51A42FB81EF4DF7C5B8\", \"message digest\", \"59276E27D506861A16680F3AD9C02DCCEF3CC1FA3CDBE4CE6D54B80DEAC1BC21\", \"F5A03B0648D2C4630EEAC513E1BB81A15944DA3827D5B74143AC7EACEEE720B3\", \"B1B6AA29DF212FD8763182BC0D421CA1BB9038FD1F7F42D4840B69C485BBC1AA\", 0)"
                          ,iVar1 != 0);
        if (iVar1 != 0) {
          iVar1 = test_sm2_sign_constprop_0
                            (group_00,"1234567812345678",
                             "3945208F7B2144B13F36E38AC6D39F95889393692860B51A42FB81EF4DF7C5B8",
                             "59276E27D506861A16680F3AD9C02DCCEF3CC1FA3CDBE4CE6D54B80DEAC1BC21",
                             "F5A03B0648D2C4630EEAC513E1BB81A15944DA3827D5B74143AC7EACEEE720B3",
                             "B1B6AA29DF212FD8763182BC0D421CA1BB9038FD1F7F42D4840B69C485BBC1AA",1);
          iVar1 = test_false("test/sm2_internal_test.c",0x1b3,
                             "test_sm2_sign( gm_group, SM2_DEFAULT_USERID, \"3945208F7B2144B13F36E38AC6D39F95889393692860B51A42FB81EF4DF7C5B8\", \"message digest\", \"59276E27D506861A16680F3AD9C02DCCEF3CC1FA3CDBE4CE6D54B80DEAC1BC21\", \"F5A03B0648D2C4630EEAC513E1BB81A15944DA3827D5B74143AC7EACEEE720B3\", \"B1B6AA29DF212FD8763182BC0D421CA1BB9038FD1F7F42D4840B69C485BBC1AA\", 1)"
                             ,iVar1 != 0);
          bVar2 = iVar1 != 0;
          goto LAB_0010101b;
        }
      }
      bVar2 = false;
      goto LAB_0010101b;
    }
  }
  group_00 = (EC_GROUP *)0x0;
  bVar2 = false;
LAB_0010101b:
  EC_GROUP_free(group);
  EC_GROUP_free(group_00);
  return bVar2;
}



bool setup_tests(void)

{
  bool bVar1;
  
  fake_rand = fake_rand_start(0);
  bVar1 = fake_rand != 0;
  if (bVar1) {
    add_test("sm2_crypt_test",sm2_crypt_test);
    add_test("sm2_sig_test",sm2_sig_test);
  }
  return bVar1;
}



void cleanup_tests(void)

{
  fake_rand_finish(fake_rand);
  return;
}


