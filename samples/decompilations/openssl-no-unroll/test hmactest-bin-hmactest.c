
bool test_hmac_copy_uninited(void)

{
  int iVar1;
  EVP_MD_CTX *ctx;
  EVP_PKEY *pkey;
  EVP_MD *type;
  EVP_MD_CTX *out;
  EVP_MD_CTX *pEVar2;
  long in_FS_OFFSET;
  bool bVar3;
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [14];
  undefined2 uStack_3a;
  undefined6 uStack_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = SUB1614((undefined1  [16])0x0,0);
  local_e8 = 0;
  uStack_3a = 0;
  uStack_38 = 0;
  local_f8 = (undefined1  [16])0x0;
  local_d8 = (undefined1  [16])0x0;
  local_c8 = (undefined1  [16])0x0;
  local_b8 = (undefined1  [16])0x0;
  local_a8 = (undefined1  [16])0x0;
  local_98 = (undefined1  [16])0x0;
  local_88 = (undefined1  [16])0x0;
  local_78 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
  iVar1 = test_ptr("test/hmactest.c",0x101,"ctx = EVP_MD_CTX_new()",ctx);
  if (iVar1 == 0) {
    bVar3 = false;
    pkey = (EVP_PKEY *)0x0;
    pEVar2 = (EVP_MD_CTX *)0x0;
  }
  else {
    pkey = EVP_PKEY_new_mac_key(0x357,(ENGINE *)0x0,local_f8,0x18);
    iVar1 = test_ptr("test/hmactest.c",0x102,
                     "pkey = EVP_PKEY_new_mac_key(EVP_PKEY_HMAC, NULL, key, sizeof(key))");
    if (iVar1 != 0) {
      type = EVP_sha1();
      iVar1 = EVP_DigestSignInit(ctx,(EVP_PKEY_CTX **)0x0,type,(ENGINE *)0x0,pkey);
      iVar1 = test_true("test/hmactest.c",0x104,
                        "EVP_DigestSignInit(ctx, NULL, EVP_sha1(), NULL, pkey)",iVar1 != 0);
      if (iVar1 != 0) {
        out = (EVP_MD_CTX *)EVP_MD_CTX_new();
        iVar1 = test_ptr("test/hmactest.c",0x105,"ctx_tmp = EVP_MD_CTX_new()",out);
        if (iVar1 != 0) {
          iVar1 = EVP_MD_CTX_copy(out,ctx);
          iVar1 = test_true("test/hmactest.c",0x106,"EVP_MD_CTX_copy(ctx_tmp, ctx)",iVar1 != 0);
          if (iVar1 != 0) {
            EVP_MD_CTX_free(ctx);
            iVar1 = EVP_DigestSignUpdate(out,local_d8,0xa6);
            iVar1 = test_true("test/hmactest.c",0x10c,"EVP_DigestSignUpdate(ctx, ct, sizeof(ct))",
                              iVar1 != 0);
            bVar3 = iVar1 != 0;
            pEVar2 = (EVP_MD_CTX *)0x0;
            ctx = out;
            goto LAB_001000b3;
          }
        }
        bVar3 = false;
        pEVar2 = out;
        goto LAB_001000b3;
      }
    }
    bVar3 = false;
    pEVar2 = (EVP_MD_CTX *)0x0;
  }
LAB_001000b3:
  EVP_MD_CTX_free(ctx);
  EVP_MD_CTX_free(pEVar2);
  EVP_PKEY_free(pkey);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool test_hmac_bad(void)

{
  int iVar1;
  HMAC_CTX *ctx;
  EVP_MD *md;
  bool bVar2;
  
  ctx = (HMAC_CTX *)HMAC_CTX_new();
  iVar1 = test_ptr("test/hmactest.c",0x71,&_LC7,ctx);
  if (iVar1 != 0) {
    HMAC_CTX_get_md(ctx);
    iVar1 = test_ptr_null("test/hmactest.c",0x72,"HMAC_CTX_get_md(ctx)");
    if (iVar1 != 0) {
      iVar1 = HMAC_Init_ex(ctx,(void *)0x0,0,(EVP_MD *)0x0,(ENGINE *)0x0);
      iVar1 = test_false("test/hmactest.c",0x73,"HMAC_Init_ex(ctx, NULL, 0, NULL, NULL)",iVar1 != 0)
      ;
      if (iVar1 != 0) {
        iVar1 = HMAC_Update(ctx,(uchar *)s_My_test_data_001030d4,(long)_DAT_00103114);
        iVar1 = test_false("test/hmactest.c",0x74,"HMAC_Update(ctx, test[4].data, test[4].data_len)"
                           ,iVar1 != 0);
        if (iVar1 != 0) {
          md = EVP_sha1();
          iVar1 = HMAC_Init_ex(ctx,(void *)0x0,0,md,(ENGINE *)0x0);
          iVar1 = test_false("test/hmactest.c",0x75,"HMAC_Init_ex(ctx, NULL, 0, EVP_sha1(), NULL)",
                             iVar1 != 0);
          if (iVar1 != 0) {
            iVar1 = HMAC_Update(ctx,(uchar *)s_My_test_data_001030d4,(long)_DAT_00103114);
            iVar1 = test_false("test/hmactest.c",0x76,
                               "HMAC_Update(ctx, test[4].data, test[4].data_len)",iVar1 != 0);
            bVar2 = iVar1 != 0;
            goto LAB_0010025a;
          }
        }
      }
    }
  }
  bVar2 = false;
LAB_0010025a:
  HMAC_CTX_free(ctx);
  return bVar2;
}



undefined1 * pt_part_0(long param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 != 0) {
    uVar1 = 0;
    do {
      BIO_snprintf(buf_0 + uVar1 * 2,3,"%02x",(ulong)*(byte *)(param_1 + uVar1));
      if (param_2 - 1 == uVar1) {
        return buf_0;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 != 100);
  }
  return buf_0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong test_hmac_single_shot(void)

{
  byte bVar1;
  int iVar2;
  EVP_MD *evp_md;
  undefined1 *puVar3;
  ulong uVar4;
  size_t n;
  char *buf;
  char *pcVar5;
  
  n = (size_t)_DAT_00103114;
  evp_md = EVP_sha1();
  puVar3 = HMAC(evp_md,(void *)0x0,0,(uchar *)s_My_test_data_001030d4,n,(uchar *)0x0,(uint *)0x0);
  if (puVar3 != (byte *)0x0) {
    buf = buf_0;
    do {
      bVar1 = *puVar3;
      pcVar5 = buf + 2;
      puVar3 = puVar3 + 1;
      BIO_snprintf(buf,3,"%02x",(ulong)bVar1);
      buf = pcVar5;
    } while (pcVar5 != buf_0 + 0x28);
    puVar3 = buf_0;
  }
  uVar4 = test_ptr("test/hmactest.c",0xd3,&_LC13,puVar3);
  if ((int)uVar4 != 0) {
    iVar2 = test_str_eq("test/hmactest.c",0xd3,&_LC13,"test[4].digest",puVar3,_DAT_00103118);
    uVar4 = (ulong)(iVar2 != 0);
  }
  return uVar4;
}



ulong test_hmac_md5(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  EVP_MD *evp_md;
  undefined1 *puVar4;
  ulong uVar5;
  long lVar6;
  char *buf;
  char *pcVar7;
  
  lVar6 = (long)param_1 * 0x60;
  iVar3 = *(int *)(&DAT_00102f50 + lVar6);
  iVar2 = *(int *)(&DAT_00102f94 + lVar6);
  evp_md = EVP_md5();
  puVar4 = HMAC(evp_md,&test + lVar6,iVar3,
                (uchar *)(s_More_text_test_vectors_to_stuff_u_00102f54 + lVar6),(long)iVar2,
                (uchar *)0x0,(uint *)0x0);
  if (puVar4 != (byte *)0x0) {
    buf = buf_0;
    do {
      bVar1 = *puVar4;
      pcVar7 = buf + 2;
      puVar4 = puVar4 + 1;
      BIO_snprintf(buf,3,"%02x",(ulong)bVar1);
      buf = pcVar7;
    } while (pcVar7 != buf_0 + 0x20);
    puVar4 = buf_0;
  }
  uVar5 = test_ptr("test/hmactest.c",0x67,&_LC13,puVar4);
  if ((int)uVar5 == 0) {
    return uVar5;
  }
  iVar3 = test_str_eq("test/hmactest.c",0x67,&_LC13,"test[idx].digest",puVar4,
                      *(undefined8 *)(&DAT_00102f98 + (long)param_1 * 0x60));
  return (ulong)(iVar3 != 0);
}



undefined4 test_hmac_chunks(int param_1)

{
  byte bVar1;
  char *name;
  undefined8 uVar2;
  undefined1 *puVar3;
  uint uVar4;
  int iVar5;
  EVP_MD *md;
  HMAC_CTX *ctx;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long in_FS_OFFSET;
  byte abStack_8048 [32792];
  
  puVar3 = &stack0xffffffffffffffd0;
  do {
    puVar6 = puVar3;
    *(undefined8 *)(puVar6 + -0x1000) = *(undefined8 *)(puVar6 + -0x1000);
    puVar3 = puVar6 + -0x1000;
  } while (puVar6 + -0x1000 != abStack_8048 + 0x18);
  ctx = (HMAC_CTX *)0x0;
  *(undefined8 *)(puVar6 + 0x6ff0) = *(undefined8 *)(in_FS_OFFSET + 0x28);
  lVar7 = (long)param_1 * 0x140;
  name = *(char **)(&test_chunks + lVar7);
  *(undefined8 *)(puVar6 + -0x1040) = 0x100637;
  md = EVP_get_digestbyname(name);
  *(undefined8 *)(puVar6 + -0x1040) = 0x100651;
  uVar4 = test_ptr("test/hmactest.c",0x18b,"md = EVP_get_digestbyname(test_chunks[idx].md_name)",md)
  ;
  if (uVar4 != 0) {
    *(undefined8 *)(puVar6 + -0x1040) = 0x100695;
    ctx = (HMAC_CTX *)HMAC_CTX_new();
    *(undefined8 *)(puVar6 + -0x1040) = 0x1006af;
    iVar5 = test_ptr("test/hmactest.c",0x18e,"ctx = HMAC_CTX_new()",ctx);
    if (iVar5 != 0) {
      iVar5 = *(int *)(&DAT_00102148 + lVar7);
      *(undefined8 *)(puVar6 + -0x1040) = 0x1006e0;
      iVar5 = HMAC_Init_ex(ctx,s_0123456789abcdef0123456789abcdef_00102048 + lVar7,iVar5,md,
                           (ENGINE *)0x0);
      *(undefined8 *)(puVar6 + -0x1040) = 0x1006fb;
      uVar4 = test_true("test/hmactest.c",0x196,
                        "HMAC_Init_ex(ctx, test_chunks[idx].key, test_chunks[idx].key_len, md, NULL)"
                        ,iVar5 != 0);
      if (uVar4 == 0) goto LAB_00100655;
      if (0 < *(int *)(&DAT_0010214c + lVar7)) {
        lVar8 = 0;
        do {
          *(int *)(puVar6 + -0x1038) = (int)lVar8;
          iVar5 = *(int *)(&DAT_00102150 + lVar8 * 4 + lVar7);
          *(undefined8 *)(puVar6 + -0x1040) = 0x1007ab;
          iVar5 = test_true("test/hmactest.c",0x19b,
                            "(test_chunks[idx].chunk_size[i] < (int)sizeof(buf))",iVar5 < 0x8000);
          if (iVar5 == 0) {
            uVar4 = 0;
            goto LAB_00100655;
          }
          iVar5 = *(int *)(&DAT_00102150 + lVar8 * 4 + lVar7);
          *(long *)(puVar6 + -0x1030) = (long)iVar5;
          *(undefined8 *)(puVar6 + -0x1040) = 0x100742;
          __memset_chk(puVar6 + -0x1018,*(undefined4 *)(puVar6 + -0x1038),(long)iVar5,0x8000);
          *(undefined8 *)(puVar6 + -0x1040) = 0x100752;
          iVar5 = HMAC_Update(ctx,puVar6 + -0x1018,*(size_t *)(puVar6 + -0x1030));
          *(undefined8 *)(puVar6 + -0x1040) = 0x10076d;
          iVar5 = test_true("test/hmactest.c",0x19e,
                            "HMAC_Update(ctx, buf, test_chunks[idx].chunk_size[i])",iVar5 != 0);
          if (iVar5 == 0) goto LAB_001006b3;
          lVar8 = lVar8 + 1;
        } while ((int)lVar8 < *(int *)(&DAT_0010214c + lVar7));
      }
      *(undefined8 *)(puVar6 + -0x1040) = 0x1007d0;
      iVar5 = HMAC_Final(ctx,puVar6 + -0x1018,(uint *)(puVar6 + -0x101c));
      *(undefined8 *)(puVar6 + -0x1040) = 0x1007eb;
      iVar5 = test_true("test/hmactest.c",0x1a2,"HMAC_Final(ctx, buf, &len)",iVar5 != 0);
      if (iVar5 != 0) {
        if (*(int *)(puVar6 + -0x101c) != 0) {
          lVar7 = 0;
          *(ulong *)(puVar6 + -0x1038) = (ulong)(*(int *)(puVar6 + -0x101c) - 1);
          do {
            bVar1 = (puVar6 + -0x1018)[lVar7];
            *(undefined8 *)(puVar6 + -0x1040) = 0x100836;
            BIO_snprintf(buf_0 + lVar7 * 2,3,"%02x",(ulong)bVar1);
            if (*(long *)(puVar6 + -0x1038) == lVar7) break;
            lVar7 = lVar7 + 1;
          } while (lVar7 != 100);
        }
        *(undefined8 *)(puVar6 + -0x1040) = 0x100856;
        iVar5 = test_ptr("test/hmactest.c",0x1a6,&_LC13,buf_0);
        if (iVar5 != 0) {
          uVar2 = *(undefined8 *)(&DAT_00102178 + (long)param_1 * 0x140);
          *(undefined8 *)(puVar6 + -0x1040) = 0x100894;
          iVar5 = test_str_eq("test/hmactest.c",0x1a6,&_LC13,"test_chunks[idx].digest",buf_0,uVar2);
          uVar4 = (uint)(iVar5 != 0);
          goto LAB_00100655;
        }
      }
    }
LAB_001006b3:
    uVar4 = 0;
  }
LAB_00100655:
  *(uint *)(puVar6 + -0x1038) = uVar4;
  *(undefined8 *)(puVar6 + -0x1040) = 0x100660;
  HMAC_CTX_free(ctx);
  if (*(long *)(puVar6 + 0x6ff0) == *(long *)(in_FS_OFFSET + 0x28)) {
    return *(undefined4 *)(puVar6 + -0x1038);
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar6 + -0x1040) = &UNK_001008a6;
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool test_hmac_copy(void)

{
  int iVar1;
  HMAC_CTX *ctx;
  HMAC_CTX *dctx;
  EVP_MD *md;
  ulong uVar2;
  long in_FS_OFFSET;
  bool bVar3;
  uint local_8c;
  byte local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ctx = (HMAC_CTX *)HMAC_CTX_new();
  dctx = (HMAC_CTX *)HMAC_CTX_new();
  iVar1 = test_ptr("test/hmactest.c",0xe4,&_LC7,ctx);
  if (iVar1 != 0) {
    iVar1 = test_ptr("test/hmactest.c",0xe4,&_LC23,dctx);
    if (iVar1 != 0) {
      md = EVP_sha1();
      iVar1 = HMAC_Init_ex(ctx,&DAT_001031e0,_DAT_001031f0,md,(ENGINE *)0x0);
      iVar1 = test_true("test/hmactest.c",0xe7,
                        "HMAC_Init_ex(ctx, test[7].key, test[7].key_len, EVP_sha1(), NULL)",
                        iVar1 != 0);
      if (iVar1 != 0) {
        iVar1 = HMAC_Update(ctx,(uchar *)s_My_test_data_again_001031f4,(long)_DAT_00103234);
        iVar1 = test_true("test/hmactest.c",0xe8,"HMAC_Update(ctx, test[7].data, test[7].data_len)",
                          iVar1 != 0);
        if (iVar1 != 0) {
          iVar1 = HMAC_CTX_copy(dctx,ctx);
          iVar1 = test_true("test/hmactest.c",0xe9,"HMAC_CTX_copy(ctx2, ctx)",iVar1 != 0);
          if (iVar1 != 0) {
            iVar1 = HMAC_Final(dctx,local_88,&local_8c);
            iVar1 = test_true("test/hmactest.c",0xea,"HMAC_Final(ctx2, buf, &len)",iVar1 != 0);
            if (iVar1 != 0) {
              if (local_8c != 0) {
                uVar2 = 0;
                do {
                  BIO_snprintf(buf_0 + uVar2 * 2,3,"%02x",(ulong)local_88[uVar2]);
                  if (local_8c - 1 == uVar2) break;
                  uVar2 = uVar2 + 1;
                } while (uVar2 != 100);
              }
              iVar1 = test_ptr("test/hmactest.c",0xee,&_LC13,buf_0);
              if (iVar1 != 0) {
                iVar1 = test_str_eq("test/hmactest.c",0xee,&_LC13,"test[7].digest",buf_0,
                                    _DAT_00103238);
                bVar3 = iVar1 != 0;
                goto LAB_00100907;
              }
            }
          }
        }
      }
    }
  }
  bVar3 = false;
LAB_00100907:
  HMAC_CTX_free(dctx);
  HMAC_CTX_free(ctx);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint test_hmac_run(void)

{
  uint uVar1;
  int iVar2;
  HMAC_CTX *ctx;
  EVP_MD *pEVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long in_FS_OFFSET;
  uint local_8c;
  byte local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ctx = (HMAC_CTX *)HMAC_CTX_new();
  uVar1 = test_ptr("test/hmactest.c",0x87,"ctx = HMAC_CTX_new()",ctx);
  if (uVar1 == 0) goto LAB_00100b42;
  HMAC_CTX_reset(ctx);
  iVar2 = test_ptr("test/hmactest.c",0x8b,&_LC7,ctx);
  if (iVar2 == 0) {
LAB_00100bb9:
    uVar1 = 0;
  }
  else {
    HMAC_CTX_get_md(ctx);
    iVar2 = test_ptr_null("test/hmactest.c",0x8c,"HMAC_CTX_get_md(ctx)");
    if (iVar2 == 0) goto LAB_00100bb9;
    iVar2 = HMAC_Init_ex(ctx,(void *)0x0,0,(EVP_MD *)0x0,(ENGINE *)0x0);
    iVar2 = test_false("test/hmactest.c",0x8d,"HMAC_Init_ex(ctx, NULL, 0, NULL, NULL)",iVar2 != 0);
    if (iVar2 == 0) goto LAB_00100bb9;
    iVar2 = HMAC_Update(ctx,(uchar *)s_My_test_data_001030d4,(long)_DAT_00103114);
    iVar2 = test_false("test/hmactest.c",0x8e,"HMAC_Update(ctx, test[4].data, test[4].data_len)",
                       iVar2 != 0);
    if (iVar2 == 0) goto LAB_00100bb9;
    pEVar3 = EVP_sha1();
    iVar2 = HMAC_Init_ex(ctx,&DAT_001030c0,-1,pEVar3,(ENGINE *)0x0);
    iVar2 = test_false("test/hmactest.c",0x8f,"HMAC_Init_ex(ctx, test[4].key, -1, EVP_sha1(), NULL)"
                       ,iVar2 != 0);
    if (iVar2 == 0) goto LAB_00100bb9;
    pEVar3 = EVP_sha1();
    iVar2 = HMAC_Init_ex(ctx,&DAT_001030c0,_DAT_001030d0,pEVar3,(ENGINE *)0x0);
    iVar2 = test_true("test/hmactest.c",0x92,
                      "HMAC_Init_ex(ctx, test[4].key, test[4].key_len, EVP_sha1(), NULL)",iVar2 != 0
                     );
    if (iVar2 == 0) goto LAB_00100bb9;
    iVar2 = HMAC_Update(ctx,(uchar *)s_My_test_data_001030d4,(long)_DAT_00103114);
    iVar2 = test_true("test/hmactest.c",0x93,"HMAC_Update(ctx, test[4].data, test[4].data_len)",
                      iVar2 != 0);
    if (iVar2 == 0) goto LAB_00100bb9;
    iVar2 = HMAC_Final(ctx,local_88,&local_8c);
    iVar2 = test_true("test/hmactest.c",0x94,"HMAC_Final(ctx, buf, &len)",iVar2 != 0);
    if (iVar2 == 0) goto LAB_00100bb9;
    if (local_8c != 0) {
      uVar6 = 0;
      uVar5 = (ulong)(local_8c - 1);
      do {
        BIO_snprintf(buf_0 + uVar6 * 2,3,"%02x",(ulong)local_88[uVar6]);
        if (uVar5 == uVar6) break;
        uVar6 = uVar6 + 1;
      } while (uVar6 != 100);
    }
    iVar2 = test_ptr("test/hmactest.c",0x98,&_LC13,buf_0);
    if ((iVar2 == 0) ||
       (iVar2 = test_str_eq("test/hmactest.c",0x98,&_LC13,"test[4].digest",buf_0,_DAT_00103118),
       iVar2 == 0)) goto LAB_00100bb9;
    pEVar3 = EVP_sha256();
    iVar2 = HMAC_Init_ex(ctx,(void *)0x0,0,pEVar3,(ENGINE *)0x0);
    iVar2 = test_false("test/hmactest.c",0x9b,"HMAC_Init_ex(ctx, NULL, 0, EVP_sha256(), NULL)",
                       iVar2 != 0);
    if (iVar2 == 0) goto LAB_00100bb9;
    pEVar3 = EVP_sha256();
    iVar2 = HMAC_Init_ex(ctx,&DAT_00103120,_DAT_00103130,pEVar3,(ENGINE *)0x0);
    iVar2 = test_true("test/hmactest.c",0x9e,
                      "HMAC_Init_ex(ctx, test[5].key, test[5].key_len, EVP_sha256(), NULL)",
                      iVar2 != 0);
    if (iVar2 == 0) goto LAB_00100bb9;
    pEVar3 = EVP_sha256();
    uVar4 = HMAC_CTX_get_md(ctx);
    iVar2 = test_ptr_eq("test/hmactest.c",0x9f,"HMAC_CTX_get_md(ctx)","EVP_sha256()",uVar4,pEVar3);
    if (iVar2 == 0) goto LAB_00100bb9;
    iVar2 = HMAC_Update(ctx,(uchar *)s_My_test_data_00103134,(long)_DAT_00103174);
    iVar2 = test_true("test/hmactest.c",0xa0,"HMAC_Update(ctx, test[5].data, test[5].data_len)",
                      iVar2 != 0);
    if (iVar2 == 0) goto LAB_00100bb9;
    iVar2 = HMAC_Final(ctx,local_88,&local_8c);
    iVar2 = test_true("test/hmactest.c",0xa1,"HMAC_Final(ctx, buf, &len)",iVar2 != 0);
    if (iVar2 == 0) goto LAB_00100bb9;
    uVar4 = pt_part_0(local_88,local_8c);
    iVar2 = test_ptr("test/hmactest.c",0xa5,&_LC13,uVar4);
    if ((iVar2 == 0) ||
       (iVar2 = test_str_eq("test/hmactest.c",0xa5,&_LC13,"test[5].digest",uVar4,_DAT_00103178),
       iVar2 == 0)) goto LAB_00100bb9;
    iVar2 = HMAC_Init_ex(ctx,&DAT_00103180,_DAT_00103190,(EVP_MD *)0x0,(ENGINE *)0x0);
    iVar2 = test_true("test/hmactest.c",0xa8,
                      "HMAC_Init_ex(ctx, test[6].key, test[6].key_len, NULL, NULL)",iVar2 != 0);
    if (iVar2 == 0) goto LAB_00100bb9;
    iVar2 = HMAC_Update(ctx,(uchar *)s_My_test_data_00103194,(long)_DAT_001031d4);
    iVar2 = test_true("test/hmactest.c",0xa9,"HMAC_Update(ctx, test[6].data, test[6].data_len)",
                      iVar2 != 0);
    if (iVar2 == 0) goto LAB_00100bb9;
    iVar2 = HMAC_Final(ctx,local_88,&local_8c);
    iVar2 = test_true("test/hmactest.c",0xaa,"HMAC_Final(ctx, buf, &len)",iVar2 != 0);
    if (iVar2 == 0) goto LAB_00100bb9;
    uVar4 = pt_part_0(local_88,local_8c);
    iVar2 = test_ptr("test/hmactest.c",0xad,&_LC13,uVar4);
    if ((iVar2 == 0) ||
       (iVar2 = test_str_eq("test/hmactest.c",0xad,&_LC13,"test[6].digest",uVar4,_DAT_001031d8,uVar4
                           ), iVar2 == 0)) goto LAB_00100bb9;
    iVar2 = HMAC_Init_ex(ctx,(void *)0x0,0,(EVP_MD *)0x0,(ENGINE *)0x0);
    iVar2 = test_true("test/hmactest.c",0xb1,"HMAC_Init_ex(ctx, NULL, 0, NULL, NULL)",iVar2 != 0);
    if (iVar2 == 0) goto LAB_00100bb9;
    iVar2 = HMAC_Update(ctx,(uchar *)s_My_test_data_00103194,(long)_DAT_001031d4);
    iVar2 = test_true("test/hmactest.c",0xb2,"HMAC_Update(ctx, test[6].data, test[6].data_len)",
                      iVar2 != 0);
    if (iVar2 == 0) goto LAB_00100bb9;
    iVar2 = HMAC_Final(ctx,local_88,&local_8c);
    iVar2 = test_true("test/hmactest.c",0xb3,"HMAC_Final(ctx, buf, &len)",iVar2 != 0);
    if (iVar2 == 0) goto LAB_00100bb9;
    uVar4 = pt_part_0(local_88,local_8c);
    iVar2 = test_ptr("test/hmactest.c",0xb6,&_LC13,uVar4);
    if ((iVar2 == 0) ||
       (iVar2 = test_str_eq("test/hmactest.c",0xb6,&_LC13,"test[6].digest",uVar4,_DAT_001031d8,uVar4
                           ), iVar2 == 0)) goto LAB_00100bb9;
    pEVar3 = EVP_sha256();
    iVar2 = HMAC_Init_ex(ctx,(void *)0x0,0,pEVar3,(ENGINE *)0x0);
    iVar2 = test_true("test/hmactest.c",0xbd,"HMAC_Init_ex(ctx, NULL, 0, EVP_sha256(), NULL)",
                      iVar2 != 0);
    if (iVar2 == 0) goto LAB_00100bb9;
    iVar2 = HMAC_Update(ctx,(uchar *)s_My_test_data_00103194,(long)_DAT_001031d4);
    iVar2 = test_true("test/hmactest.c",0xbe,"HMAC_Update(ctx, test[6].data, test[6].data_len)",
                      iVar2 != 0);
    if (iVar2 == 0) goto LAB_00100bb9;
    iVar2 = HMAC_Final(ctx,local_88,&local_8c);
    iVar2 = test_true("test/hmactest.c",0xbf,"HMAC_Final(ctx, buf, &len)",iVar2 != 0);
    if (iVar2 == 0) goto LAB_00100bb9;
    uVar4 = pt_part_0(local_88,local_8c);
    iVar2 = test_ptr("test/hmactest.c",0xc2,&_LC13,uVar4);
    if (iVar2 == 0) goto LAB_00100bb9;
    iVar2 = test_str_eq("test/hmactest.c",0xc2,&_LC13,"test[6].digest",uVar4,_DAT_001031d8);
    uVar1 = (uint)(iVar2 != 0);
  }
  HMAC_CTX_free(ctx);
LAB_00100b42:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}



undefined8 setup_tests(void)

{
  add_all_tests("test_hmac_md5",test_hmac_md5,4,1);
  add_test("test_hmac_single_shot",test_hmac_single_shot);
  add_test("test_hmac_bad",test_hmac_bad);
  add_test("test_hmac_run",test_hmac_run);
  add_test("test_hmac_copy",test_hmac_copy);
  add_test("test_hmac_copy_uninited",0x100000);
  add_all_tests("test_hmac_chunks",test_hmac_chunks,0xc,1);
  return 1;
}


