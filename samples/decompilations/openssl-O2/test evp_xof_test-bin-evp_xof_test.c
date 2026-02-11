
undefined8 shake_setup(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = EVP_MD_fetch(0,param_1,0);
  iVar1 = test_ptr("test/evp_xof_test.c",0xa3,"md = EVP_MD_fetch(NULL, name, NULL)",uVar2);
  if (iVar1 != 0) {
    uVar3 = EVP_MD_CTX_new();
    iVar1 = test_ptr("test/evp_xof_test.c",0xa6,"ctx = EVP_MD_CTX_new()",uVar3);
    if (iVar1 != 0) {
      iVar1 = EVP_DigestInit_ex2(uVar3,uVar2,0);
      iVar1 = test_true("test/evp_xof_test.c",0xa8,"EVP_DigestInit_ex2(ctx, md, NULL)",iVar1 != 0);
      if (iVar1 != 0) {
        EVP_MD_free(uVar2);
        return uVar3;
      }
    }
    EVP_MD_free(uVar2);
    EVP_MD_CTX_free(uVar3);
  }
  return 0;
}



bool shake_squeeze_no_absorb_test(void)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  bool bVar3;
  undefined1 auStack_808 [1008];
  undefined1 local_418 [500];
  undefined1 local_224 [500];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = shake_setup("SHAKE128");
  iVar1 = test_ptr("test/evp_xof_test.c",0x200,"ctx = shake_setup(alg)",uVar2);
  if (iVar1 != 0) {
    iVar1 = EVP_DigestFinalXOF(uVar2,auStack_808,1000);
    iVar1 = test_true("test/evp_xof_test.c",0x201,"EVP_DigestFinalXOF(ctx, out, sizeof(out))",
                      iVar1 != 0);
    if (iVar1 != 0) {
      iVar1 = EVP_DigestInit_ex2(uVar2,0,0);
      iVar1 = test_true("test/evp_xof_test.c",0x204,"EVP_DigestInit_ex2(ctx, NULL, NULL)",iVar1 != 0
                       );
      if (iVar1 != 0) {
        iVar1 = EVP_DigestSqueeze(uVar2,local_418,500);
        iVar1 = test_true("test/evp_xof_test.c",0x205,
                          "EVP_DigestSqueeze(ctx, out2, sizeof(out2) / 2)",iVar1 != 0);
        if (iVar1 != 0) {
          iVar1 = EVP_DigestSqueeze(uVar2,local_224,500);
          iVar1 = test_true("test/evp_xof_test.c",0x206,
                            "EVP_DigestSqueeze(ctx, out2 + sizeof(out2) / 2, sizeof(out2) / 2)",
                            iVar1 != 0);
          if (iVar1 != 0) {
            iVar1 = test_mem_eq("test/evp_xof_test.c",0x20a,&_LC11,&_LC10,local_418,1000,auStack_808
                                ,1000);
            bVar3 = iVar1 != 0;
            goto LAB_00100117;
          }
        }
      }
    }
  }
  bVar3 = false;
LAB_00100117:
  EVP_MD_CTX_free(uVar2);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool xof_fail_test(void)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = EVP_MD_fetch(0,"SHA256",0);
  iVar1 = test_ptr("test/evp_xof_test.c",0x218,"md = EVP_MD_fetch(NULL, \"SHA256\", NULL)",uVar2);
  if (iVar1 == 0) {
    EVP_MD_free(uVar2);
    return false;
  }
  iVar1 = EVP_MD_xof(uVar2);
  iVar1 = test_false("test/evp_xof_test.c",0x219,"EVP_MD_xof(md)",iVar1 != 0);
  EVP_MD_free(uVar2);
  return iVar1 != 0;
}



undefined8 shake_absorb_test(void)

{
  int iVar1;
  EVP_MD_CTX *ctx;
  long lVar2;
  undefined8 uVar3;
  size_t cnt;
  ulong uVar4;
  long in_FS_OFFSET;
  undefined1 auStack_68 [40];
  long local_40;
  
  lVar2 = 1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ctx = (EVP_MD_CTX *)shake_setup("SHAKE256");
  iVar1 = test_ptr("test/evp_xof_test.c",0x125,"ctx = shake_setup(\"SHAKE256\")",ctx);
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    do {
      cnt = 0;
      uVar4 = 0;
      do {
        cnt = cnt + lVar2;
        if (0x2ac < cnt + uVar4) {
          cnt = 0x2ac - uVar4;
        }
        iVar1 = EVP_DigestUpdate(ctx,shake256_largemsg_input + uVar4,cnt);
        iVar1 = test_true("test/evp_xof_test.c",0x12e,
                          "EVP_DigestUpdate(ctx, shake256_largemsg_input + i, sz)",iVar1 != 0);
        if (iVar1 == 0) goto LAB_001003c9;
        uVar4 = uVar4 + cnt;
      } while (uVar4 < 0x2ac);
      iVar1 = EVP_DigestFinalXOF(ctx,auStack_68,0x20);
      iVar1 = test_true("test/evp_xof_test.c",0x132,"EVP_DigestFinalXOF(ctx, out, sizeof(out))",
                        iVar1 != 0);
      if (iVar1 == 0) {
LAB_001003c9:
        uVar3 = 0;
        goto LAB_001003cc;
      }
      iVar1 = test_mem_eq("test/evp_xof_test.c",0x133,&_LC10,"shake256_largemsg_output",auStack_68,
                          0x20,shake256_largemsg_output,0x20);
      if (iVar1 == 0) goto LAB_001003c9;
      iVar1 = EVP_DigestInit_ex2(ctx,0,0);
      iVar1 = test_true("test/evp_xof_test.c",0x137,"EVP_DigestInit_ex2(ctx, NULL, NULL)",iVar1 != 0
                       );
      if (iVar1 == 0) goto LAB_001003c9;
      lVar2 = lVar2 + 1;
    } while (lVar2 != 0x2ac);
    uVar3 = 1;
LAB_001003cc:
    EVP_MD_CTX_free(ctx);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint shake_kat_test(void)

{
  uint uVar1;
  int iVar2;
  EVP_MD_CTX *ctx;
  long in_FS_OFFSET;
  undefined1 auStack_138 [264];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  ctx = (EVP_MD_CTX *)shake_setup("SHAKE256");
  uVar1 = test_ptr("test/evp_xof_test.c",0xb8,"ctx = shake_setup(\"SHAKE256\")",ctx);
  if (uVar1 == 0) goto LAB_00100527;
  iVar2 = EVP_DigestUpdate(ctx,shake256_input,0x20);
  iVar2 = test_true("test/evp_xof_test.c",0xba,
                    "EVP_DigestUpdate(ctx, shake256_input, sizeof(shake256_input))",iVar2 != 0);
  if (iVar2 == 0) {
LAB_001005b8:
    uVar1 = 0;
  }
  else {
    iVar2 = EVP_DigestFinalXOF(ctx,auStack_138,0xfa);
    iVar2 = test_true("test/evp_xof_test.c",0xbc,"EVP_DigestFinalXOF(ctx, out, sizeof(out))",
                      iVar2 != 0);
    if (iVar2 == 0) goto LAB_001005b8;
    iVar2 = test_mem_eq("test/evp_xof_test.c",0xbd,&_LC10,"shake256_output",auStack_138,0xfa,
                        shake256_output,0xfa);
    if (iVar2 == 0) goto LAB_001005b8;
    iVar2 = EVP_DigestFinalXOF(ctx,auStack_138,0xfa);
    iVar2 = test_false("test/evp_xof_test.c",0xc0,"EVP_DigestFinalXOF(ctx, out, sizeof(out))",
                       iVar2 != 0);
    if (iVar2 == 0) goto LAB_001005b8;
    iVar2 = EVP_DigestSqueeze(ctx,auStack_138,0xfa);
    iVar2 = test_false("test/evp_xof_test.c",0xc2,"EVP_DigestSqueeze(ctx, out, sizeof(out))",
                       iVar2 != 0);
    uVar1 = (uint)(iVar2 != 0);
  }
  EVP_MD_CTX_free(ctx);
LAB_00100527:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong do_shake_squeeze_test
                (int param_1,void *param_2,size_t param_3,undefined8 param_4,ulong param_5)

{
  int iVar1;
  uint uVar2;
  EVP_MD_CTX *ctx;
  ulong uVar3;
  void *ptr;
  long lVar4;
  
  lVar4 = *(long *)(stride_tests + (long)param_1 * 0x10);
  ctx = (EVP_MD_CTX *)shake_setup("SHAKE256");
  uVar3 = test_ptr("test/evp_xof_test.c",0x17b,"ctx = shake_setup(\"SHAKE256\")",ctx);
  if ((int)uVar3 == 0) {
    return uVar3;
  }
  ptr = CRYPTO_malloc((int)param_5,"test/evp_xof_test.c",0x17d);
  iVar1 = test_ptr("test/evp_xof_test.c",0x17d,"out = OPENSSL_malloc(expected_outlen)",ptr);
  if (iVar1 != 0) {
    iVar1 = EVP_DigestUpdate(ctx,param_2,param_3);
    iVar1 = test_true("test/evp_xof_test.c",0x17f,"EVP_DigestUpdate(ctx, in, inlen)",iVar1 != 0);
    if (iVar1 != 0) {
      uVar3 = 0;
      do {
        if (param_5 < uVar3 + lVar4) {
          lVar4 = param_5 - uVar3;
        }
        iVar1 = EVP_DigestSqueeze(ctx,(long)ptr + uVar3,lVar4);
        iVar1 = test_true("test/evp_xof_test.c",0x185,"EVP_DigestSqueeze(ctx, out + i, sz)",
                          iVar1 != 0);
        if (iVar1 == 0) goto LAB_001007b0;
        uVar3 = uVar3 + lVar4;
        lVar4 = *(long *)(stride_tests + (long)param_1 * 0x10 + 8);
      } while (uVar3 < param_5);
      iVar1 = test_mem_eq("test/evp_xof_test.c",0x18a,&_LC10,"expected_out",ptr,param_5,param_4,
                          param_5);
      uVar2 = (uint)(iVar1 != 0);
      goto LAB_001007b2;
    }
  }
LAB_001007b0:
  uVar2 = 0;
LAB_001007b2:
  CRYPTO_free(ptr);
  EVP_MD_CTX_free(ctx);
  return (ulong)uVar2;
}



int shake_squeeze_large_test(undefined4 param_1)

{
  int iVar1;
  EVP_MD_CTX *ctx;
  long in_FS_OFFSET;
  uchar auStack_818 [16];
  undefined1 local_808 [2008];
  long local_30;
  
  ctx = (EVP_MD_CTX *)0x0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = RAND_bytes(auStack_818,0x10);
  iVar1 = test_int_gt("test/evp_xof_test.c",0x1a6,"RAND_bytes(msg, sizeof(msg))",&_LC26,iVar1,0);
  if (iVar1 == 0) goto LAB_00100889;
  ctx = (EVP_MD_CTX *)shake_setup("SHAKE256");
  iVar1 = test_ptr("test/evp_xof_test.c",0x1a7,"ctx = shake_setup(\"SHAKE256\")",ctx);
  if (iVar1 != 0) {
    iVar1 = EVP_DigestUpdate(ctx,auStack_818,0x10);
    iVar1 = test_true("test/evp_xof_test.c",0x1a8,"EVP_DigestUpdate(ctx, msg, sizeof(msg))",
                      iVar1 != 0);
    if (iVar1 == 0) goto LAB_00100889;
    iVar1 = EVP_DigestFinalXOF(ctx,local_808,2000);
    iVar1 = test_true("test/evp_xof_test.c",0x1a9,"EVP_DigestFinalXOF(ctx, out, sizeof(out))",
                      iVar1 != 0);
    if (iVar1 != 0) {
      iVar1 = do_shake_squeeze_test(param_1,auStack_818,0x10,local_808,2000);
      goto LAB_00100889;
    }
  }
  iVar1 = 0;
LAB_00100889:
  EVP_MD_CTX_free(ctx);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void shake_squeeze_kat_test(undefined8 param_1)

{
  do_shake_squeeze_test(param_1,shake256_input,0x20,shake256_output,0xfa);
  return;
}



bool shake_kat_digestfinal_test(void)

{
  int iVar1;
  EVP_MD_CTX *pEVar2;
  long in_FS_OFFSET;
  bool bVar3;
  uint local_14c;
  uchar local_148 [264];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_14c = 0;
  pEVar2 = (EVP_MD_CTX *)shake_setup("SHAKE256");
  iVar1 = test_ptr("test/evp_xof_test.c",0xd2,"ctx = shake_setup(\"SHAKE256\")",pEVar2);
  if (iVar1 != 0) {
    iVar1 = EVP_DigestUpdate(pEVar2,shake256_input,0x20);
    iVar1 = test_true("test/evp_xof_test.c",0xd4,
                      "EVP_DigestUpdate(ctx, shake256_input, sizeof(shake256_input))",iVar1 != 0);
    if (iVar1 != 0) {
      ERR_set_mark();
      iVar1 = EVP_DigestFinal(pEVar2,local_148,&local_14c);
      iVar1 = test_false("test/evp_xof_test.c",0xd8,"EVP_DigestFinal(ctx, out, &digest_length)",
                         iVar1 != 0);
      if (iVar1 == 0) {
        ERR_clear_last_mark();
      }
      else {
        ERR_pop_to_mark();
        EVP_MD_CTX_free(pEVar2);
        pEVar2 = (EVP_MD_CTX *)shake_setup("SHAKE256");
        iVar1 = test_ptr("test/evp_xof_test.c",0xe0,"ctx = shake_setup(\"SHAKE256\")",pEVar2);
        if (iVar1 != 0) {
          iVar1 = EVP_DigestUpdate(pEVar2,shake256_input,0x20);
          iVar1 = test_true("test/evp_xof_test.c",0xe2,
                            "EVP_DigestUpdate(ctx, shake256_input, sizeof(shake256_input))",
                            iVar1 != 0);
          if (iVar1 != 0) {
            iVar1 = EVP_DigestFinalXOF(pEVar2,local_148,0xfa);
            iVar1 = test_true("test/evp_xof_test.c",0xe5,"EVP_DigestFinalXOF(ctx, out, sizeof(out))"
                              ,iVar1 != 0);
            if (iVar1 == 0) {
LAB_00100bf0:
              bVar3 = false;
            }
            else {
              iVar1 = test_mem_eq("test/evp_xof_test.c",0xe6,&_LC10,"shake256_output",local_148,0xfa
                                 );
              if (iVar1 == 0) goto LAB_00100bf0;
              iVar1 = EVP_DigestFinalXOF(pEVar2,local_148,0xfa,0xfa);
              iVar1 = test_false("test/evp_xof_test.c",0xe8,
                                 "EVP_DigestFinalXOF(ctx, out, sizeof(out))",iVar1 != 0);
              bVar3 = iVar1 != 0;
            }
            EVP_MD_CTX_free(pEVar2);
            goto LAB_00100a19;
          }
        }
      }
    }
  }
  bVar3 = false;
LAB_00100a19:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint shake_kat_digestfinal_xoflen_test(void)

{
  ulong uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  EVP_MD_CTX *ctx;
  undefined8 uVar5;
  long lVar6;
  uchar *puVar7;
  long in_FS_OFFSET;
  byte bVar8;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  uint local_1a4;
  ulong local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  uchar local_148 [264];
  long local_40;
  
  bVar8 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_1a4 = 0;
  local_1a0 = 0xc;
  ctx = (EVP_MD_CTX *)shake_setup("SHAKE256");
  uVar2 = test_ptr("test/evp_xof_test.c",0xfe,"ctx = shake_setup(\"SHAKE256\")",ctx);
  if (uVar2 == 0) goto LAB_00100c6c;
  uVar5 = EVP_MD_CTX_get0_md(ctx);
  puVar7 = local_148;
  for (lVar6 = 0x1f; lVar6 != 0; lVar6 = lVar6 + -1) {
    puVar7[0] = '\0';
    puVar7[1] = '\0';
    puVar7[2] = '\0';
    puVar7[3] = '\0';
    puVar7[4] = '\0';
    puVar7[5] = '\0';
    puVar7[6] = '\0';
    puVar7[7] = '\0';
    puVar7 = puVar7 + (ulong)bVar8 * -0x10 + 8;
  }
  puVar7[0] = '\0';
  puVar7[1] = '\0';
  OSSL_PARAM_construct_size_t(&local_1d8,"xoflen",&local_1a0);
  local_178 = local_1b8;
  local_198 = local_1d8;
  uStack_190 = uStack_1d0;
  local_188 = local_1c8;
  uStack_180 = uStack_1c0;
  OSSL_PARAM_construct_end(&local_1d8);
  local_150 = local_1b8;
  local_170 = local_1d8;
  uStack_168 = uStack_1d0;
  local_160 = local_1c8;
  uStack_158 = uStack_1c0;
  uVar3 = EVP_MD_CTX_get_size_ex(ctx);
  iVar4 = test_int_eq("test/evp_xof_test.c",0x106,"EVP_MD_CTX_size(ctx)",&_LC31,uVar3,0xffffffff);
  if (iVar4 == 0) {
LAB_00100d8d:
    uVar2 = 0;
  }
  else {
    uVar3 = EVP_MD_CTX_set_params(ctx,&local_198);
    iVar4 = test_int_eq("test/evp_xof_test.c",0x107,"EVP_MD_CTX_set_params(ctx, params)",&_LC33,
                        uVar3,1);
    uVar1 = local_1a0;
    if (iVar4 == 0) goto LAB_00100d8d;
    uVar3 = EVP_MD_CTX_get_size_ex(ctx);
    iVar4 = test_int_eq("test/evp_xof_test.c",0x108,"EVP_MD_CTX_size(ctx)",&_LC35,uVar3,
                        uVar1 & 0xffffffff);
    if (iVar4 == 0) goto LAB_00100d8d;
    uVar3 = EVP_MD_get_size(uVar5);
    iVar4 = test_int_eq("test/evp_xof_test.c",0x109,"EVP_MD_get_size(md)",&_LC26,uVar3,0);
    if (iVar4 == 0) goto LAB_00100d8d;
    iVar4 = EVP_MD_xof(uVar5);
    iVar4 = test_true("test/evp_xof_test.c",0x10a,"EVP_MD_xof(md)",iVar4 != 0);
    if (iVar4 == 0) goto LAB_00100d8d;
    iVar4 = EVP_DigestUpdate(ctx,shake256_input,0x20);
    iVar4 = test_true("test/evp_xof_test.c",0x10b,
                      "EVP_DigestUpdate(ctx, shake256_input, sizeof(shake256_input))",iVar4 != 0);
    if (iVar4 == 0) goto LAB_00100d8d;
    iVar4 = EVP_DigestFinal(ctx,local_148,&local_1a4);
    iVar4 = test_true("test/evp_xof_test.c",0x10d,"EVP_DigestFinal(ctx, out, &digest_length)",
                      iVar4 != 0);
    if (iVar4 == 0) goto LAB_00100d8d;
    iVar4 = test_uint_eq("test/evp_xof_test.c",0x10e,"digest_length","(unsigned int)sz",local_1a4,
                         local_1a0 & 0xffffffff);
    if (iVar4 == 0) goto LAB_00100d8d;
    iVar4 = test_mem_eq("test/evp_xof_test.c",0x10f,&_LC10,"shake256_output",local_148,local_1a4,
                        shake256_output,local_1a4);
    if (iVar4 == 0) goto LAB_00100d8d;
    iVar4 = test_uchar_eq("test/evp_xof_test.c",0x111,"out[digest_length]",&_LC26,
                          local_148[local_1a4],0);
    uVar2 = (uint)(iVar4 != 0);
  }
  EVP_MD_CTX_free(ctx);
LAB_00100c6c:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint shake_squeeze_dup_test(int param_1)

{
  ulong uVar1;
  int iVar2;
  uint uVar3;
  EVP_MD_CTX *ctx;
  EVP_MD_CTX *ctx_00;
  void *ptr;
  EVP_MD_CTX *pEVar4;
  EVP_MD_CTX *pEVar5;
  ulong uVar6;
  long lVar7;
  long in_FS_OFFSET;
  uchar local_438 [16];
  undefined1 local_428 [1000];
  long local_40;
  
  ctx = (EVP_MD_CTX *)0x0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = RAND_bytes(local_438,0x10);
  uVar3 = test_int_gt("test/evp_xof_test.c",0x1ea,"RAND_bytes(msg, sizeof(msg))",&_LC26,iVar2,0);
  if (uVar3 == 0) goto LAB_00100f9e;
  ctx = (EVP_MD_CTX *)shake_setup("SHAKE128");
  iVar2 = test_ptr("test/evp_xof_test.c",0x1eb,"ctx = shake_setup(alg)",ctx);
  if (iVar2 != 0) {
    iVar2 = EVP_DigestUpdate(ctx,local_438,0x10);
    iVar2 = test_true("test/evp_xof_test.c",0x1ec,"EVP_DigestUpdate(ctx, msg, sizeof(msg))",
                      iVar2 != 0);
    if (iVar2 != 0) {
      iVar2 = EVP_DigestFinalXOF(ctx,local_428,1000);
      iVar2 = test_true("test/evp_xof_test.c",0x1ed,"EVP_DigestFinalXOF(ctx, out, sizeof(out))",
                        iVar2 != 0);
      if (iVar2 != 0) {
        uVar1 = *(ulong *)(dupoffset_tests + (long)param_1 * 8);
        ctx_00 = (EVP_MD_CTX *)shake_setup("SHAKE128");
        iVar2 = test_ptr("test/evp_xof_test.c",0x1c2,"ctx = shake_setup(alg)",ctx_00);
        if (iVar2 != 0) {
          ptr = CRYPTO_malloc(1000,"test/evp_xof_test.c",0x1c5);
          iVar2 = test_ptr("test/evp_xof_test.c",0x1c5,"out = OPENSSL_malloc(expected_outlen)",ptr);
          if (iVar2 == 0) {
LAB_00101218:
            pEVar4 = (EVP_MD_CTX *)0x0;
            uVar3 = 0;
          }
          else {
            iVar2 = EVP_DigestUpdate(ctx_00,local_438,0x10);
            iVar2 = test_true("test/evp_xof_test.c",0x1c7,"EVP_DigestUpdate(ctx, in, inlen)",
                              iVar2 != 0);
            if (iVar2 == 0) goto LAB_00101218;
            uVar6 = 0;
            pEVar4 = (EVP_MD_CTX *)0x0;
            lVar7 = 10;
            pEVar5 = ctx_00;
            do {
              if (1000 < uVar6 + lVar7) {
                lVar7 = 1000 - uVar6;
              }
              iVar2 = EVP_DigestSqueeze(pEVar5,(long)ptr + uVar6,lVar7);
              iVar2 = test_true("test/evp_xof_test.c",0x1cd,"EVP_DigestSqueeze(cur, out + i, sz)",
                                iVar2 != 0);
              if (iVar2 == 0) {
                uVar3 = 0;
                goto LAB_001011e8;
              }
              uVar6 = uVar6 + lVar7;
              if ((pEVar4 == (EVP_MD_CTX *)0x0) && (uVar1 <= uVar6)) {
                pEVar4 = (EVP_MD_CTX *)EVP_MD_CTX_dup(ctx_00);
                iVar2 = test_ptr("test/evp_xof_test.c",0x1d2,"dupctx = EVP_MD_CTX_dup(ctx)",pEVar4);
                pEVar5 = pEVar4;
                if (iVar2 == 0) {
                  uVar3 = 0;
                  goto LAB_001011e8;
                }
              }
            } while (uVar6 < 1000);
            iVar2 = test_mem_eq("test/evp_xof_test.c",0x1d7,&_LC10,"expected_out",ptr,1000,local_428
                                ,1000);
            uVar3 = (uint)(iVar2 != 0);
          }
LAB_001011e8:
          CRYPTO_free(ptr);
          EVP_MD_CTX_free(ctx_00);
          EVP_MD_CTX_free(pEVar4);
          goto LAB_00100f9e;
        }
      }
    }
  }
  uVar3 = 0;
LAB_00100f9e:
  EVP_MD_CTX_free(ctx);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



undefined8 setup_tests(void)

{
  add_test("shake_kat_test",shake_kat_test);
  add_test("shake_kat_digestfinal_test",shake_kat_digestfinal_test);
  add_test("shake_kat_digestfinal_xoflen_test",shake_kat_digestfinal_xoflen_test);
  add_test("shake_absorb_test",shake_absorb_test);
  add_all_tests("shake_squeeze_kat_test",shake_squeeze_kat_test,0x20,1);
  add_all_tests("shake_squeeze_large_test",shake_squeeze_large_test,0x20,1);
  add_all_tests("shake_squeeze_dup_test",shake_squeeze_dup_test,7,1);
  add_test("xof_fail_test",xof_fail_test);
  add_test("shake_squeeze_no_absorb_test",shake_squeeze_no_absorb_test);
  return 1;
}


