
undefined1 * pt(long param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 != 0) {
    uVar1 = 0;
    do {
      BIO_snprintf(buf_0 + uVar1 * 2,3,"%02x",(ulong)*(byte *)(param_1 + uVar1));
      if (uVar1 == param_2 - 1) {
        return buf_0;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 != 0x28);
  }
  return buf_0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool test_cmac_bad(void)

{
  int iVar1;
  CMAC_CTX *ctx;
  EVP_CIPHER *pEVar2;
  bool bVar3;
  
  ctx = CMAC_CTX_new();
  iVar1 = test_ptr("test/cmactest.c",0x92,&_LC1);
  if (iVar1 != 0) {
    iVar1 = CMAC_Init(ctx,(void *)0x0,0,(EVP_CIPHER *)0x0,(ENGINE *)0x0);
    iVar1 = test_false("test/cmactest.c",0x93,"CMAC_Init(ctx, NULL, 0, NULL, NULL)",iVar1 != 0);
    if (iVar1 != 0) {
      iVar1 = CMAC_Update(ctx,s_My_test_data_001017c4,(long)_DAT_001027c4);
      iVar1 = test_false("test/cmactest.c",0x94,"CMAC_Update(ctx, test[0].data, test[0].data_len)",
                         iVar1 != 0);
      if (iVar1 != 0) {
        pEVar2 = EVP_aes_128_cbc();
        iVar1 = CMAC_Init(ctx,(void *)0x0,0,pEVar2,(ENGINE *)0x0);
        iVar1 = test_true("test/cmactest.c",0x96,"CMAC_Init(ctx, NULL, 0, EVP_aes_128_cbc(), NULL)",
                          iVar1 != 0);
        if (iVar1 != 0) {
          CMAC_Update(ctx,s_My_test_data_001017c4,(long)_DAT_001027c4);
          iVar1 = test_false("test/cmactest.c",0x98,
                             "CMAC_Update(ctx, test[0].data, test[0].data_len)");
          if (iVar1 != 0) {
            iVar1 = CMAC_Init(ctx,&test,(long)_DAT_001017c0,(EVP_CIPHER *)0x0,(ENGINE *)0x0);
            iVar1 = test_true("test/cmactest.c",0x9a,
                              "CMAC_Init(ctx, test[0].key, test[0].key_len, NULL, NULL)",iVar1 != 0)
            ;
            if (iVar1 != 0) {
              iVar1 = CMAC_Update(ctx,s_My_test_data_001017c4,(long)_DAT_001027c4);
              iVar1 = test_true("test/cmactest.c",0x9c,
                                "CMAC_Update(ctx, test[0].data, test[0].data_len)",iVar1 != 0);
              if (iVar1 != 0) {
                pEVar2 = EVP_aes_128_xts();
                iVar1 = CMAC_Init(ctx,xtskey,0x20,pEVar2,(ENGINE *)0x0);
                iVar1 = test_false("test/cmactest.c",0x9e,
                                   "CMAC_Init(ctx, xtskey, sizeof(xtskey), EVP_aes_128_xts(), NULL)"
                                   ,iVar1 != 0);
                if (iVar1 != 0) {
                  iVar1 = CMAC_Update(ctx,s_My_test_data_001017c4,(long)_DAT_001027c4);
                  iVar1 = test_false("test/cmactest.c",0xa0,
                                     "CMAC_Update(ctx, test[0].data, test[0].data_len)",iVar1 != 0);
                  bVar3 = iVar1 != 0;
                  goto LAB_0010009a;
                }
              }
            }
          }
        }
      }
    }
  }
  bVar3 = false;
LAB_0010009a:
  CMAC_CTX_free(ctx);
  return bVar3;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool test_cmac_copy(void)

{
  int iVar1;
  CMAC_CTX *ctx;
  CMAC_CTX *out;
  EVP_CIPHER *cipher;
  ulong uVar2;
  long in_FS_OFFSET;
  bool bVar3;
  int local_60 [2];
  byte local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ctx = CMAC_CTX_new();
  out = CMAC_CTX_new();
  iVar1 = test_ptr("test/cmactest.c",0x135,&_LC1,ctx);
  if (iVar1 != 0) {
    iVar1 = test_ptr("test/cmactest.c",0x135,&_LC8,out);
    if (iVar1 != 0) {
      cipher = EVP_aes_128_cbc();
      iVar1 = CMAC_Init(ctx,&test,(long)_DAT_001017c0,cipher,(ENGINE *)0x0);
      iVar1 = test_true("test/cmactest.c",0x138,
                        "CMAC_Init(ctx, test[0].key, test[0].key_len, EVP_aes_128_cbc(), NULL)",
                        iVar1 != 0);
      if (iVar1 != 0) {
        iVar1 = CMAC_Update(ctx,s_My_test_data_001017c4,(long)_DAT_001027c4);
        iVar1 = test_true("test/cmactest.c",0x13a,"CMAC_Update(ctx, test[0].data, test[0].data_len)"
                          ,iVar1 != 0);
        if (iVar1 != 0) {
          iVar1 = CMAC_CTX_copy(out,ctx);
          iVar1 = test_true("test/cmactest.c",0x13b,"CMAC_CTX_copy(ctx2, ctx)",iVar1 != 0);
          if (iVar1 != 0) {
            iVar1 = CMAC_Final(out,local_58,(size_t *)local_60);
            iVar1 = test_true("test/cmactest.c",0x13c,"CMAC_Final(ctx2, buf, &len)",iVar1 != 0);
            if (iVar1 != 0) {
              if (local_60[0] != 0) {
                uVar2 = 0;
                do {
                  BIO_snprintf(buf_0 + uVar2 * 2,3,"%02x",(ulong)local_58[uVar2]);
                  if (uVar2 == local_60[0] - 1) break;
                  uVar2 = uVar2 + 1;
                } while (uVar2 != 0x28);
              }
              iVar1 = test_str_eq("test/cmactest.c",0x140,&_LC13,"test[0].mac",buf_0,_DAT_001027c8);
              bVar3 = iVar1 != 0;
              goto LAB_001002c7;
            }
          }
        }
      }
    }
  }
  bVar3 = false;
LAB_001002c7:
  CMAC_CTX_free(out);
  CMAC_CTX_free(ctx);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool test_cmac_run(void)

{
  undefined *puVar1;
  int iVar2;
  CMAC_CTX *ctx;
  size_t sVar3;
  EVP_CIPHER *pEVar4;
  undefined8 uVar5;
  char *__s;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  size_t sVar10;
  long in_FS_OFFSET;
  bool bVar11;
  long local_80;
  int local_60 [2];
  byte local_58 [24];
  long local_40;
  
  __s = s_My_test_data_001017c4;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ctx = CMAC_CTX_new();
  local_80 = 0;
  do {
    sVar3 = strlen(__s);
    iVar2 = *(int *)(__s + 0x1000);
    uVar9 = (long)iVar2 - sVar3;
    if (uVar9 != 0) {
      uVar8 = (sVar3 + 0x24) - local_80;
      sVar10 = sVar3;
      for (; sVar3 < uVar9; uVar9 = uVar9 - sVar3) {
        uVar7 = 0x8180;
        if (0x817f < uVar8) {
          uVar7 = uVar8;
        }
        sVar10 = sVar10 + sVar3;
        puVar1 = &test + uVar8;
        uVar8 = uVar8 + sVar3;
        __memcpy_chk(puVar1,__s,sVar3,(local_80 - iVar2) + -0x24 + uVar9 + uVar7);
      }
      uVar7 = (sVar10 - local_80) + 0x24;
      uVar8 = 0x8180;
      if (0x817f < uVar7) {
        uVar8 = uVar7;
      }
      __memcpy_chk(s_My_test_data_001017c4 + (sVar10 - local_80),__s,uVar9,
                   (local_80 - sVar10) + -0x24 + uVar8);
    }
    local_80 = local_80 + -0x1030;
    __s = __s + 0x1030;
  } while (local_80 != -0x8180);
  pEVar4 = EVP_aes_128_cbc();
  iVar2 = CMAC_Init(ctx,&test,(long)_DAT_001017c0,pEVar4,(ENGINE *)0x0);
  iVar2 = test_true("test/cmactest.c",0xc5,
                    "CMAC_Init(ctx, test[0].key, test[0].key_len, EVP_aes_128_cbc(), NULL)",
                    iVar2 != 0);
  if (iVar2 != 0) {
    iVar2 = CMAC_Update(ctx,s_My_test_data_001017c4,(long)_DAT_001027c4);
    iVar2 = test_true("test/cmactest.c",199,"CMAC_Update(ctx, test[0].data, test[0].data_len)",
                      iVar2 != 0);
    if (iVar2 != 0) {
      iVar2 = CMAC_Final(ctx,local_58,(size_t *)local_60);
      iVar2 = test_true("test/cmactest.c",200,"CMAC_Final(ctx, buf, &len)",iVar2 != 0);
      if (iVar2 != 0) {
        uVar9 = 0;
        uVar6 = local_60[0] - 1;
        if (local_60[0] != 0) {
          do {
            BIO_snprintf(buf_0 + uVar9 * 2,3,"%02x",(ulong)local_58[uVar9]);
            if (uVar6 == uVar9) break;
            uVar9 = uVar9 + 1;
          } while (uVar9 != 0x28);
        }
        iVar2 = test_str_eq("test/cmactest.c",0xcc,&_LC13,"test[0].mac",buf_0,_DAT_001027c8);
        if (iVar2 != 0) {
          pEVar4 = EVP_aes_256_cbc();
          iVar2 = CMAC_Init(ctx,&DAT_001027d0,(long)_DAT_001027f0,pEVar4,(ENGINE *)0x0);
          iVar2 = test_true("test/cmactest.c",0xcf,
                            "CMAC_Init(ctx, test[1].key, test[1].key_len, EVP_aes_256_cbc(), NULL)",
                            iVar2 != 0);
          if (iVar2 != 0) {
            iVar2 = CMAC_Update(ctx,s_My_test_data_001027f4,(long)_DAT_001037f4);
            iVar2 = test_true("test/cmactest.c",0xd1,
                              "CMAC_Update(ctx, test[1].data, test[1].data_len)",iVar2 != 0);
            if (iVar2 != 0) {
              iVar2 = CMAC_Final(ctx,local_58,(size_t *)local_60);
              iVar2 = test_true("test/cmactest.c",0xd2,"CMAC_Final(ctx, buf, &len)",iVar2 != 0);
              if (iVar2 != 0) {
                uVar9 = 0;
                uVar6 = local_60[0] - 1;
                if (local_60[0] != 0) {
                  do {
                    BIO_snprintf(buf_0 + uVar9 * 2,3,"%02x",(ulong)local_58[uVar9]);
                    if (uVar6 == uVar9) break;
                    uVar9 = uVar9 + 1;
                  } while (uVar9 != 0x28);
                }
                iVar2 = test_str_eq("test/cmactest.c",0xd6,&_LC13,"test[1].mac",buf_0,_DAT_001037f8)
                ;
                if (iVar2 != 0) {
                  iVar2 = CMAC_Init(ctx,&DAT_00103800,(long)_DAT_00103820,(EVP_CIPHER *)0x0,
                                    (ENGINE *)0x0);
                  iVar2 = test_true("test/cmactest.c",0xd9,
                                    "CMAC_Init(ctx, test[2].key, test[2].key_len, NULL, NULL)",
                                    iVar2 != 0);
                  if (iVar2 != 0) {
                    iVar2 = CMAC_Update(ctx,s_My_test_data_again_00103824,(long)_DAT_00104824);
                    iVar2 = test_true("test/cmactest.c",0xda,
                                      "CMAC_Update(ctx, test[2].data, test[2].data_len)",iVar2 != 0)
                    ;
                    if (iVar2 != 0) {
                      iVar2 = CMAC_Final(ctx,local_58,(size_t *)local_60);
                      iVar2 = test_true("test/cmactest.c",0xdb,"CMAC_Final(ctx, buf, &len)",
                                        iVar2 != 0);
                      if (iVar2 != 0) {
                        uVar5 = pt(local_58,local_60[0]);
                        iVar2 = test_str_eq("test/cmactest.c",0xde,&_LC13,"test[2].mac",uVar5,
                                            _DAT_00104828);
                        if (iVar2 != 0) {
                          iVar2 = CMAC_Init(ctx,(void *)0x0,0,(EVP_CIPHER *)0x0,(ENGINE *)0x0);
                          iVar2 = test_true("test/cmactest.c",0xe1,
                                            "CMAC_Init(ctx, NULL, 0, NULL, NULL)",iVar2 != 0);
                          if (iVar2 != 0) {
                            iVar2 = CMAC_Update(ctx,s_My_test_data_again_00103824,
                                                (long)_DAT_00104824);
                            iVar2 = test_true("test/cmactest.c",0xe2,
                                              "CMAC_Update(ctx, test[2].data, test[2].data_len)",
                                              iVar2 != 0);
                            if (iVar2 != 0) {
                              iVar2 = CMAC_Final(ctx,local_58,(size_t *)local_60);
                              iVar2 = test_true("test/cmactest.c",0xe3,"CMAC_Final(ctx, buf, &len)",
                                                iVar2 != 0);
                              if (iVar2 != 0) {
                                uVar5 = pt(local_58,local_60[0]);
                                iVar2 = test_str_eq("test/cmactest.c",0xe6,&_LC13,"test[2].mac",
                                                    uVar5,_DAT_00104828);
                                if (iVar2 != 0) {
                                  pEVar4 = EVP_aes_256_cbc();
                                  CMAC_Init(ctx,(void *)0x0,0,pEVar4,(ENGINE *)0x0);
                                  iVar2 = test_true("test/cmactest.c",0xea,
                                                                                                        
                                                  "CMAC_Init(ctx, NULL, 0, EVP_aes_256_cbc(), NULL)"
                                                  );
                                  if (iVar2 != 0) {
                                    iVar2 = CMAC_Init(ctx,&DAT_00103800,(long)_DAT_00103820,
                                                      (EVP_CIPHER *)0x0,(ENGINE *)0x0);
                                    iVar2 = test_true("test/cmactest.c",0xeb,
                                                                                                            
                                                  "CMAC_Init(ctx, test[2].key, test[2].key_len, NULL, NULL)"
                                                  ,iVar2 != 0);
                                    if (iVar2 != 0) {
                                      iVar2 = CMAC_Update(ctx,s_My_test_data_again_00103824,
                                                          (long)_DAT_00104824);
                                      iVar2 = test_true("test/cmactest.c",0xec,
                                                                                                                
                                                  "CMAC_Update(ctx, test[2].data, test[2].data_len)"
                                                  ,iVar2 != 0);
                                      if (iVar2 != 0) {
                                        iVar2 = CMAC_Final(ctx,local_58,(size_t *)local_60);
                                        iVar2 = test_true("test/cmactest.c",0xed,
                                                          "CMAC_Final(ctx, buf, &len)",iVar2 != 0);
                                        if (iVar2 != 0) {
                                          uVar5 = pt(local_58,local_60[0]);
                                          iVar2 = test_str_eq("test/cmactest.c",0xf0,&_LC13,
                                                              "test[2].mac",uVar5,_DAT_00104828);
                                          if (iVar2 != 0) {
                                            pEVar4 = EVP_aes_128_cbc();
                                            iVar2 = CMAC_Init(ctx,&DAT_00104830,(long)_DAT_00104850,
                                                              pEVar4,(ENGINE *)0x0);
                                            iVar2 = test_true("test/cmactest.c",0xf4,
                                                                                                                            
                                                  "CMAC_Init(ctx, test[3].key, test[3].key_len, EVP_aes_128_cbc(), NULL)"
                                                  ,iVar2 != 0);
                                            if (iVar2 != 0) {
                                              iVar2 = CMAC_Update(ctx,
                                                  s__abcdefghijklmnopqrstuvwxyzABCDE_00104854,
                                                  (long)_DAT_00105854);
                                              iVar2 = test_true("test/cmactest.c",0xf6,
                                                                                                                                
                                                  "CMAC_Update(ctx, test[3].data, test[3].data_len)"
                                                  ,iVar2 != 0);
                                              if (iVar2 != 0) {
                                                iVar2 = CMAC_Final(ctx,local_58,(size_t *)local_60);
                                                iVar2 = test_true("test/cmactest.c",0xf7,
                                                                  "CMAC_Final(ctx, buf, &len)",
                                                                  iVar2 != 0);
                                                if (iVar2 != 0) {
                                                  uVar5 = pt(local_58,local_60[0]);
                                                  iVar2 = test_str_eq("test/cmactest.c",0xfa,&_LC13,
                                                                      "test[3].mac",uVar5,
                                                                      _DAT_00105858);
                                                  if (iVar2 != 0) {
                                                    pEVar4 = EVP_aes_192_cbc();
                                                    iVar2 = CMAC_Init(ctx,&DAT_00105860,
                                                                      (long)_DAT_00105880,pEVar4,
                                                                      (ENGINE *)0x0);
                                                    iVar2 = test_true("test/cmactest.c",0xfd,
                                                                                                                                            
                                                  "CMAC_Init(ctx, test[4].key, test[4].key_len, EVP_aes_192_cbc(), NULL)"
                                                  ,iVar2 != 0);
                                                  if (iVar2 != 0) {
                                                    iVar2 = CMAC_Update(ctx,
                                                  s__abcdefghijklmnopqrstuvwxyzABCDE_00105884,
                                                  (long)_DAT_00106884);
                                                  iVar2 = test_true("test/cmactest.c",0xff,
                                                                                                                                        
                                                  "CMAC_Update(ctx, test[4].data, test[4].data_len)"
                                                  ,iVar2 != 0);
                                                  if (iVar2 != 0) {
                                                    iVar2 = CMAC_Final(ctx,local_58,
                                                                       (size_t *)local_60);
                                                    iVar2 = test_true("test/cmactest.c",0x100,
                                                                      "CMAC_Final(ctx, buf, &len)",
                                                                      iVar2 != 0);
                                                    if (iVar2 != 0) {
                                                      uVar5 = pt(local_58,local_60[0]);
                                                      iVar2 = test_str_eq("test/cmactest.c",0x103,
                                                                          &_LC13,"test[4].mac",uVar5
                                                                          ,_DAT_00106888);
                                                      if (iVar2 != 0) {
                                                        pEVar4 = EVP_aes_256_cbc();
                                                        iVar2 = CMAC_Init(ctx,&DAT_00106890,
                                                                          (long)_DAT_001068b0,pEVar4
                                                                          ,(ENGINE *)0x0);
                                                        iVar2 = test_true("test/cmactest.c",0x106,
                                                                                                                                                    
                                                  "CMAC_Init(ctx, test[5].key, test[5].key_len, EVP_aes_256_cbc(), NULL)"
                                                  ,iVar2 != 0);
                                                  if (iVar2 != 0) {
                                                    iVar2 = CMAC_Update(ctx,
                                                  s__abcdefghijklmnopqrstuvwxyzABCDE_001068b4,
                                                  (long)_DAT_001078b4);
                                                  iVar2 = test_true("test/cmactest.c",0x108,
                                                                                                                                        
                                                  "CMAC_Update(ctx, test[5].data, test[5].data_len)"
                                                  ,iVar2 != 0);
                                                  if (iVar2 != 0) {
                                                    iVar2 = CMAC_Final(ctx,local_58,
                                                                       (size_t *)local_60);
                                                    iVar2 = test_true("test/cmactest.c",0x109,
                                                                      "CMAC_Final(ctx, buf, &len)",
                                                                      iVar2 != 0);
                                                    if (iVar2 != 0) {
                                                      uVar5 = pt(local_58,local_60[0]);
                                                      iVar2 = test_str_eq("test/cmactest.c",0x10c,
                                                                          &_LC13,"test[5].mac",uVar5
                                                                          ,_DAT_001078b8);
                                                      if (iVar2 != 0) {
                                                        pEVar4 = EVP_des_ede3_cbc();
                                                        iVar2 = CMAC_Init(ctx,&DAT_001078c0,
                                                                          (long)_DAT_001078e0,pEVar4
                                                                          ,(ENGINE *)0x0);
                                                        iVar2 = test_true("test/cmactest.c",0x110,
                                                                                                                                                    
                                                  "CMAC_Init(ctx, test[6].key, test[6].key_len, EVP_des_ede3_cbc(), NULL)"
                                                  ,iVar2 != 0);
                                                  if (iVar2 != 0) {
                                                    iVar2 = CMAC_Update(ctx,
                                                  s__abcdefghijklmnopqrstuvwxyzABCDE_001078e4,
                                                  (long)_DAT_001088e4);
                                                  iVar2 = test_true("test/cmactest.c",0x112,
                                                                                                                                        
                                                  "CMAC_Update(ctx, test[6].data, test[6].data_len)"
                                                  ,iVar2 != 0);
                                                  if (iVar2 != 0) {
                                                    iVar2 = CMAC_Final(ctx,local_58,
                                                                       (size_t *)local_60);
                                                    iVar2 = test_true("test/cmactest.c",0x113,
                                                                      "CMAC_Final(ctx, buf, &len)",
                                                                      iVar2 != 0);
                                                    if (iVar2 != 0) {
                                                      uVar5 = pt(local_58,local_60[0]);
                                                      iVar2 = test_str_eq("test/cmactest.c",0x116,
                                                                          &_LC13,"test[6].mac",uVar5
                                                                          ,_DAT_001088e8);
                                                      if (iVar2 != 0) {
                                                        pEVar4 = (EVP_CIPHER *)EVP_sm4_cbc();
                                                        iVar2 = CMAC_Init(ctx,&DAT_001088f0,
                                                                          (long)_DAT_00108910,pEVar4
                                                                          ,(ENGINE *)0x0);
                                                        iVar2 = test_true("test/cmactest.c",0x11b,
                                                                                                                                                    
                                                  "CMAC_Init(ctx, test[7].key, test[7].key_len, EVP_sm4_cbc(), NULL)"
                                                  ,iVar2 != 0);
                                                  if (iVar2 != 0) {
                                                    iVar2 = CMAC_Update(ctx,
                                                  s__abcdefghijklmnopqrstuvwxyzABCDE_00108914,
                                                  (long)_DAT_00109914);
                                                  iVar2 = test_true("test/cmactest.c",0x11d,
                                                                                                                                        
                                                  "CMAC_Update(ctx, test[7].data, test[7].data_len)"
                                                  ,iVar2 != 0);
                                                  if (iVar2 != 0) {
                                                    iVar2 = CMAC_Final(ctx,local_58,
                                                                       (size_t *)local_60);
                                                    iVar2 = test_true("test/cmactest.c",0x11e,
                                                                      "CMAC_Final(ctx, buf, &len)",
                                                                      iVar2 != 0);
                                                    if (iVar2 != 0) {
                                                      uVar5 = pt(local_58,local_60[0]);
                                                      iVar2 = test_str_eq("test/cmactest.c",0x121,
                                                                          &_LC13,"test[7].mac",uVar5
                                                                          ,_DAT_00109918);
                                                      bVar11 = iVar2 != 0;
                                                      goto LAB_001005e1;
                                                    }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  bVar11 = false;
LAB_001005e1:
  CMAC_CTX_free(ctx);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar11;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 setup_tests(void)

{
  add_test("test_cmac_bad",test_cmac_bad);
  add_test("test_cmac_run",test_cmac_run);
  add_test("test_cmac_copy",test_cmac_copy);
  return 1;
}


