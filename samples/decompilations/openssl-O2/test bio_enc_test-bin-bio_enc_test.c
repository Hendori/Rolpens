
undefined8 do_bio_cipher_constprop_0(EVP_CIPHER *param_1,uchar *param_2)

{
  int iVar1;
  int extraout_EAX;
  uint len;
  int extraout_EAX_00;
  int iVar2;
  int extraout_EAX_01;
  int iVar3;
  int extraout_EAX_02;
  int extraout_EAX_03;
  int extraout_EAX_04;
  BIO_METHOD *pBVar4;
  BIO *b;
  BIO *pBVar5;
  undefined8 uVar6;
  long lVar7;
  byte *pbVar8;
  ulong uVar9;
  long in_FS_OFFSET;
  byte bVar10;
  int local_8a4;
  byte local_888 [1056];
  byte local_468 [1064];
  long local_40;
  
  bVar10 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = RAND_bytes(inp_0,0x400);
  iVar1 = test_int_gt("test/bio_enc_test.c",0x2f,"RAND_bytes(inp, DATA_SIZE)",&_LC0,iVar1,0);
  if (iVar1 != 0) {
    pBVar4 = BIO_f_cipher();
    b = BIO_new(pBVar4);
    iVar1 = test_ptr("test/bio_enc_test.c",0x36,&_LC3,b);
    if (iVar1 != 0) {
      BIO_set_cipher(b,param_1,KEY,param_2,1);
      iVar1 = test_true("test/bio_enc_test.c",0x38,"BIO_set_cipher(b, cipher, key, iv, ENCRYPT)",
                        extraout_EAX != 0);
      if (iVar1 != 0) {
        pBVar5 = BIO_new_mem_buf(inp_0,0x400);
        iVar1 = test_ptr("test/bio_enc_test.c",0x3b,&_LC5,pBVar5);
        if (iVar1 != 0) {
          BIO_push(b,pBVar5);
          len = BIO_read(b,local_468,0x420);
          BIO_free_all(b);
          if ((int)len < 2) {
            local_8a4 = (int)len / 2;
          }
          else {
            uVar9 = 1;
            do {
              pBVar4 = BIO_f_cipher();
              b = BIO_new(pBVar4);
              iVar1 = test_ptr("test/bio_enc_test.c",0x44,&_LC3,b);
              if (iVar1 == 0) goto LAB_00100074;
              BIO_set_cipher(b,param_1,KEY,param_2,1);
              iVar1 = test_true("test/bio_enc_test.c",0x46,
                                "BIO_set_cipher(b, cipher, key, iv, ENCRYPT)",extraout_EAX_00 != 0);
              if (iVar1 == 0) {
                test_info("test/bio_enc_test.c",0x47,"Split encrypt failed @ operation %d",
                          uVar9 & 0xffffffff);
                goto LAB_00100105;
              }
              pBVar5 = BIO_new_mem_buf(inp_0,0x400);
              iVar1 = test_ptr("test/bio_enc_test.c",0x4b,&_LC5,pBVar5);
              if (iVar1 == 0) goto LAB_00100105;
              BIO_push(b,pBVar5);
              pbVar8 = local_888;
              for (lVar7 = 0x84; lVar7 != 0; lVar7 = lVar7 + -1) {
                pbVar8[0] = 0;
                pbVar8[1] = 0;
                pbVar8[2] = 0;
                pbVar8[3] = 0;
                pbVar8[4] = 0;
                pbVar8[5] = 0;
                pbVar8[6] = 0;
                pbVar8[7] = 0;
                pbVar8 = pbVar8 + ((ulong)bVar10 * -2 + 1) * 8;
              }
              local_888[uVar9] = ~local_468[uVar9];
              iVar1 = BIO_read(b,local_888,(int)uVar9);
              if (iVar1 < 0) goto LAB_00100105;
              iVar2 = test_uchar_eq("test/bio_enc_test.c",0x55,"out[i]","(unsigned char)~ref[i]",
                                    local_888[uVar9],~local_468[uVar9]);
              if (iVar2 == 0) {
                test_info("test/bio_enc_test.c",0x56,"Encrypt overstep check failed @ operation %d",
                          uVar9 & 0xffffffff);
                goto LAB_00100105;
              }
              iVar2 = BIO_read(b,local_888 + iVar1,0x420 - iVar1);
              if (iVar2 < 0) goto LAB_00100105;
              BIO_free_all(b);
              iVar1 = test_mem_eq("test/bio_enc_test.c",0x60,&_LC11,&_LC10,local_888,
                                  (long)(iVar1 + iVar2),local_468,(long)(int)len);
              if (iVar1 == 0) {
                test_info("test/bio_enc_test.c",0x61,"Encrypt compare failed @ operation %d",
                          uVar9 & 0xffffffff);
                goto LAB_00100074;
              }
              uVar9 = uVar9 + 1;
            } while (uVar9 != len);
            local_8a4 = (int)len >> 1;
            if ((int)len < 4) {
              local_8a4 = 1;
            }
            else {
              iVar1 = 1;
              do {
                pBVar4 = BIO_f_cipher();
                b = BIO_new(pBVar4);
                iVar2 = test_ptr("test/bio_enc_test.c",0x6b,&_LC3,b);
                if (iVar2 == 0) goto LAB_00100074;
                BIO_set_cipher(b,param_1,KEY,param_2,1);
                iVar2 = test_true("test/bio_enc_test.c",0x6d,
                                  "BIO_set_cipher(b, cipher, key, iv, ENCRYPT)",extraout_EAX_01 != 0
                                 );
                if (iVar2 == 0) {
                  test_info("test/bio_enc_test.c",0x6e,"Small chunk encrypt failed @ operation %d",
                            iVar1);
                  goto LAB_00100105;
                }
                pBVar5 = BIO_new_mem_buf(inp_0,0x400);
                iVar2 = test_ptr("test/bio_enc_test.c",0x72,&_LC5,pBVar5);
                if (iVar2 == 0) goto LAB_00100105;
                iVar2 = 0;
                BIO_push(b,pBVar5);
                pbVar8 = local_888;
                for (lVar7 = 0x84; lVar7 != 0; lVar7 = lVar7 + -1) {
                  pbVar8[0] = 0;
                  pbVar8[1] = 0;
                  pbVar8[2] = 0;
                  pbVar8[3] = 0;
                  pbVar8[4] = 0;
                  pbVar8[5] = 0;
                  pbVar8[6] = 0;
                  pbVar8[7] = 0;
                  pbVar8 = pbVar8 + ((ulong)bVar10 * -2 + 1) * 8;
                }
                while( true ) {
                  iVar3 = BIO_read(b,local_888 + iVar2,iVar1);
                  if (iVar3 == 0) break;
                  iVar2 = iVar2 + iVar3;
                }
                BIO_free_all(b);
                iVar2 = test_mem_eq("test/bio_enc_test.c",0x7b,&_LC11,&_LC10,local_888,(long)iVar2,
                                    local_468,(long)(int)len);
                if (iVar2 == 0) {
                  test_info("test/bio_enc_test.c",0x7c,
                            "Small chunk encrypt compare failed @ operation %d",iVar1);
                  goto LAB_00100074;
                }
                iVar1 = iVar1 + 1;
              } while (iVar1 < local_8a4);
            }
          }
          pBVar4 = BIO_f_cipher();
          b = BIO_new(pBVar4);
          iVar1 = test_ptr("test/bio_enc_test.c",0x85,&_LC3,b);
          if (iVar1 == 0) goto LAB_00100074;
          BIO_set_cipher(b,param_1,KEY,param_2,0);
          iVar1 = test_true("test/bio_enc_test.c",0x87,"BIO_set_cipher(b, cipher, key, iv, DECRYPT)"
                            ,extraout_EAX_02 != 0);
          if (iVar1 != 0) {
            pBVar5 = BIO_new_mem_buf(local_468,len);
            iVar1 = test_ptr("test/bio_enc_test.c",0x8b,&_LC5);
            if (iVar1 != 0) {
              BIO_push(b,pBVar5);
              BIO_ctrl(b,0xb,0,(void *)0x0);
              pbVar8 = local_888;
              for (lVar7 = 0x84; lVar7 != 0; lVar7 = lVar7 + -1) {
                pbVar8[0] = 0;
                pbVar8[1] = 0;
                pbVar8[2] = 0;
                pbVar8[3] = 0;
                pbVar8[4] = 0;
                pbVar8[5] = 0;
                pbVar8[6] = 0;
                pbVar8[7] = 0;
                pbVar8 = pbVar8 + ((ulong)bVar10 * -2 + 1) * 8;
              }
              iVar1 = BIO_read(b,local_888,0x420);
              BIO_free_all(b);
              iVar1 = test_mem_eq("test/bio_enc_test.c",0x93,&_LC16,&_LC11,inp_0,0x400,local_888,
                                  (long)iVar1);
              if (iVar1 != 0) {
                if (1 < (int)len) {
                  uVar9 = 1;
                  do {
                    pBVar4 = BIO_f_cipher();
                    b = BIO_new(pBVar4);
                    iVar1 = test_ptr("test/bio_enc_test.c",0x99,&_LC3,b);
                    if (iVar1 == 0) goto LAB_00100074;
                    BIO_set_cipher(b,param_1,KEY,param_2,0);
                    iVar1 = test_true("test/bio_enc_test.c",0x9b,
                                      "BIO_set_cipher(b, cipher, key, iv, DECRYPT)",
                                      extraout_EAX_03 != 0);
                    if (iVar1 == 0) {
                      test_info("test/bio_enc_test.c",0x9c,"Split decrypt failed @ operation %d",
                                uVar9 & 0xffffffff);
                      goto LAB_00100105;
                    }
                    pBVar5 = BIO_new_mem_buf(local_468,len);
                    iVar1 = test_ptr("test/bio_enc_test.c",0xa0,&_LC5,pBVar5);
                    if (iVar1 == 0) goto LAB_00100105;
                    BIO_push(b,pBVar5);
                    pbVar8 = local_888;
                    for (lVar7 = 0x84; lVar7 != 0; lVar7 = lVar7 + -1) {
                      pbVar8[0] = 0;
                      pbVar8[1] = 0;
                      pbVar8[2] = 0;
                      pbVar8[3] = 0;
                      pbVar8[4] = 0;
                      pbVar8[5] = 0;
                      pbVar8[6] = 0;
                      pbVar8[7] = 0;
                      pbVar8 = pbVar8 + ((ulong)bVar10 * -2 + 1) * 8;
                    }
                    local_888[uVar9] = ~local_468[uVar9];
                    iVar1 = BIO_read(b,local_888,(int)uVar9);
                    iVar2 = test_uchar_eq("test/bio_enc_test.c",0xa7,"out[i]",
                                          "(unsigned char)~ref[i]",local_888[uVar9],
                                          ~local_468[uVar9]);
                    if (iVar2 == 0) {
                      test_info("test/bio_enc_test.c",0xa8,
                                "Decrypt overstep check failed @ operation %d",uVar9 & 0xffffffff);
                      goto LAB_00100105;
                    }
                    iVar2 = BIO_read(b,local_888 + iVar1,0x420 - iVar1);
                    BIO_free_all(b);
                    iVar1 = test_mem_eq("test/bio_enc_test.c",0xae,&_LC16,&_LC11,inp_0,0x400,
                                        local_888,(long)(iVar1 + iVar2));
                    if (iVar1 == 0) {
                      test_info("test/bio_enc_test.c",0xaf,"Decrypt compare failed @ operation %d",
                                uVar9 & 0xffffffff);
                      goto LAB_00100074;
                    }
                    uVar9 = uVar9 + 1;
                  } while (uVar9 != len);
                }
                for (iVar1 = 1; iVar1 < local_8a4; iVar1 = iVar1 + 1) {
                  pBVar4 = BIO_f_cipher();
                  b = BIO_new(pBVar4);
                  iVar2 = test_ptr("test/bio_enc_test.c",0xb9,&_LC3,b);
                  if (iVar2 == 0) goto LAB_00100074;
                  BIO_set_cipher(b,param_1,KEY,param_2,0);
                  iVar2 = test_true("test/bio_enc_test.c",0xbb,
                                    "BIO_set_cipher(b, cipher, key, iv, DECRYPT)",
                                    extraout_EAX_04 != 0);
                  if (iVar2 == 0) {
                    test_info("test/bio_enc_test.c",0xbc,"Small chunk decrypt failed @ operation %d"
                              ,iVar1);
                    goto LAB_00100105;
                  }
                  pBVar5 = BIO_new_mem_buf(local_468,len);
                  iVar2 = test_ptr("test/bio_enc_test.c",0xc0,&_LC5,pBVar5);
                  if (iVar2 == 0) goto LAB_00100105;
                  BIO_push(b,pBVar5);
                  pbVar8 = local_888;
                  for (lVar7 = 0x84; lVar7 != 0; lVar7 = lVar7 + -1) {
                    pbVar8[0] = 0;
                    pbVar8[1] = 0;
                    pbVar8[2] = 0;
                    pbVar8[3] = 0;
                    pbVar8[4] = 0;
                    pbVar8[5] = 0;
                    pbVar8[6] = 0;
                    pbVar8[7] = 0;
                    pbVar8 = pbVar8 + ((ulong)bVar10 * -2 + 1) * 8;
                  }
                  iVar2 = 0;
                  while( true ) {
                    iVar3 = BIO_read(b,local_888 + iVar2,iVar1);
                    if (iVar3 == 0) break;
                    iVar2 = iVar2 + iVar3;
                  }
                  BIO_free_all(b);
                  iVar2 = test_mem_eq("test/bio_enc_test.c",0xc9,&_LC16,&_LC11,inp_0,0x400,local_888
                                      ,(long)iVar2);
                  if (iVar2 == 0) {
                    test_info("test/bio_enc_test.c",0xca,
                              "Small chunk decrypt compare failed @ operation %d",iVar1);
                    goto LAB_00100074;
                  }
                }
                uVar6 = 1;
                goto LAB_00100076;
              }
              goto LAB_00100074;
            }
          }
        }
      }
LAB_00100105:
      BIO_free_all(b);
    }
  }
LAB_00100074:
  uVar6 = 0;
LAB_00100076:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
}



undefined8 test_bio_enc_aes_256_ofb(int param_1)

{
  EVP_CIPHER *pEVar1;
  undefined8 uVar2;
  
  pEVar1 = EVP_aes_256_ofb();
  if (param_1 == 0) {
    uVar2 = do_bio_cipher_constprop_0(pEVar1,0);
    return uVar2;
  }
  if (param_1 != 1) {
    return 0;
  }
  uVar2 = do_bio_cipher_constprop_0(pEVar1,IV);
  return uVar2;
}



undefined8 test_bio_enc_chacha20_poly1305(int param_1)

{
  undefined8 uVar1;
  
  uVar1 = EVP_chacha20_poly1305();
  if (param_1 == 0) {
    uVar1 = do_bio_cipher_constprop_0(uVar1,0);
    return uVar1;
  }
  if (param_1 != 1) {
    return 0;
  }
  uVar1 = do_bio_cipher_constprop_0(uVar1,IV);
  return uVar1;
}



undefined8 test_bio_enc_aes_128_cbc(int param_1)

{
  EVP_CIPHER *pEVar1;
  undefined8 uVar2;
  
  pEVar1 = EVP_aes_128_cbc();
  if (param_1 == 0) {
    uVar2 = do_bio_cipher_constprop_0(pEVar1,0);
    return uVar2;
  }
  if (param_1 != 1) {
    return 0;
  }
  uVar2 = do_bio_cipher_constprop_0(pEVar1,IV);
  return uVar2;
}



undefined8 test_bio_enc_aes_128_ctr(int param_1)

{
  EVP_CIPHER *pEVar1;
  undefined8 uVar2;
  
  pEVar1 = EVP_aes_128_ctr();
  if (param_1 == 0) {
    uVar2 = do_bio_cipher_constprop_0(pEVar1,0);
    return uVar2;
  }
  if (param_1 != 1) {
    return 0;
  }
  uVar2 = do_bio_cipher_constprop_0(pEVar1,IV);
  return uVar2;
}



undefined8 test_bio_enc_chacha20(int param_1)

{
  undefined8 uVar1;
  
  uVar1 = EVP_chacha20();
  if (param_1 == 0) {
    uVar1 = do_bio_cipher_constprop_0(uVar1,0);
    return uVar1;
  }
  if (param_1 != 1) {
    return 0;
  }
  uVar1 = do_bio_cipher_constprop_0(uVar1,IV);
  return uVar1;
}



undefined8 test_bio_enc_aes_256_cfb(int param_1)

{
  EVP_CIPHER *pEVar1;
  undefined8 uVar2;
  
  pEVar1 = EVP_aes_256_cfb128();
  if (param_1 == 0) {
    uVar2 = do_bio_cipher_constprop_0(pEVar1,0);
    return uVar2;
  }
  if (param_1 != 1) {
    return 0;
  }
  uVar2 = do_bio_cipher_constprop_0(pEVar1,IV);
  return uVar2;
}



undefined8 setup_tests(void)

{
  add_all_tests("test_bio_enc_aes_128_cbc",test_bio_enc_aes_128_cbc,2,1);
  add_all_tests("test_bio_enc_aes_128_ctr",test_bio_enc_aes_128_ctr,2,1);
  add_all_tests("test_bio_enc_aes_256_cfb",test_bio_enc_aes_256_cfb,2,1);
  add_all_tests("test_bio_enc_aes_256_ofb",test_bio_enc_aes_256_ofb,2,1);
  add_all_tests("test_bio_enc_chacha20",test_bio_enc_chacha20,2,1);
  add_all_tests("test_bio_enc_chacha20_poly1305",test_bio_enc_chacha20_poly1305,2,1);
  return 1;
}


