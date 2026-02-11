
void slh_dsa_clean_keys(EVP_PKEY *param_1,EVP_PKEY *param_2,EVP_PKEY *param_3,EVP_PKEY *param_4)

{
  EVP_PKEY_free(param_1);
  EVP_PKEY_free(param_2);
  EVP_PKEY_free(param_3);
  EVP_PKEY_free(param_4);
  return;
}



void slh_dsa_export_import
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  EVP_PKEY_CTX *pEVar2;
  long in_FS_OFFSET;
  EVP_PKEY *local_40;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = (EVP_PKEY *)0x0;
  local_38 = 0;
  iVar1 = EVP_PKEY_todata(param_3,0x87,&local_38);
  if (iVar1 != 1) {
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: EVP_PKEY_todata(alice, EVP_PKEY_KEYPAIR, &params) == 1",
                "fuzz/slh-dsa.c",0x1ab);
  }
  pEVar2 = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(0,param_3,0);
  if (pEVar2 == (EVP_PKEY_CTX *)0x0) {
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: ctx != NULL","fuzz/slh-dsa.c",0x1ae);
  }
  iVar1 = EVP_PKEY_fromdata_init(pEVar2);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: EVP_PKEY_fromdata_init(ctx)","fuzz/slh-dsa.c",0x1b0);
  }
  local_40 = EVP_PKEY_new();
  if (local_40 == (EVP_PKEY *)0x0) {
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: new != NULL","fuzz/slh-dsa.c",0x1b3);
  }
  iVar1 = EVP_PKEY_fromdata(pEVar2,&local_40,0x87,local_38);
  if (iVar1 != 1) {
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: EVP_PKEY_fromdata(ctx, &new, EVP_PKEY_KEYPAIR, params) == 1",
                "fuzz/slh-dsa.c",0x1b4);
  }
  iVar1 = EVP_PKEY_eq(param_3,local_40);
  if (iVar1 != 1) {
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: EVP_PKEY_eq(alice, new) == 1","fuzz/slh-dsa.c",0x1bd);
  }
  EVP_PKEY_free(local_40);
  EVP_PKEY_CTX_free(pEVar2);
  OSSL_PARAM_free(local_38);
  local_38 = 0;
  local_40 = (EVP_PKEY *)0x0;
  iVar1 = EVP_PKEY_todata(param_4,0x87,&local_38);
  if (iVar1 != 1) {
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: EVP_PKEY_todata(bob, EVP_PKEY_KEYPAIR, &params) == 1",
                "fuzz/slh-dsa.c",0x1c5);
  }
  pEVar2 = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(0,param_4,0);
  if (pEVar2 != (EVP_PKEY_CTX *)0x0) {
    iVar1 = EVP_PKEY_fromdata_init(pEVar2);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      OPENSSL_die("assertion failed: EVP_PKEY_fromdata_init(ctx)","fuzz/slh-dsa.c",0x1ca);
    }
    local_40 = EVP_PKEY_new();
    if (local_40 == (EVP_PKEY *)0x0) {
                    /* WARNING: Subroutine does not return */
      OPENSSL_die("assertion failed: new != NULL","fuzz/slh-dsa.c",0x1cd);
    }
    iVar1 = EVP_PKEY_fromdata(pEVar2,&local_40,0x87,local_38);
    if (iVar1 != 1) {
                    /* WARNING: Subroutine does not return */
      OPENSSL_die("assertion failed: EVP_PKEY_fromdata(ctx, &new, EVP_PKEY_KEYPAIR, params) == 1",
                  "fuzz/slh-dsa.c",0x1ce);
    }
    iVar1 = EVP_PKEY_eq(param_4,local_40);
    if (iVar1 == 1) {
      iVar1 = EVP_PKEY_eq(param_3,local_40);
      if (1 < iVar1 + 1U) {
                    /* WARNING: Subroutine does not return */
        OPENSSL_die("assertion failed: rc == 0 || rc == -1","fuzz/slh-dsa.c",0x1d7);
      }
      EVP_PKEY_CTX_free(pEVar2);
      EVP_PKEY_free(local_40);
      OSSL_PARAM_free(local_38);
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: EVP_PKEY_eq(bob, new) == 1","fuzz/slh-dsa.c",0x1d0);
  }
                    /* WARNING: Subroutine does not return */
  OPENSSL_die("assertion failed: ctx != NULL","fuzz/slh-dsa.c",0x1c8);
}



EVP_PKEY * slh_dsa_gen_key_isra_0(undefined8 param_1,long param_2,char *param_3)

{
  int iVar1;
  EVP_PKEY_CTX *ctx;
  long in_FS_OFFSET;
  EVP_PKEY *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = (EVP_PKEY *)0x0;
  ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_name(0,param_1,0);
  if (ctx == (EVP_PKEY_CTX *)0x0) {
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: ctx != NULL","fuzz/slh-dsa.c",0x45);
  }
  if (param_2 == 0) {
    iVar1 = EVP_PKEY_keygen_init(ctx);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      OPENSSL_die("assertion failed: EVP_PKEY_keygen_init(ctx)","fuzz/slh-dsa.c",0x54);
    }
    iVar1 = EVP_PKEY_generate(ctx,&local_28);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      OPENSSL_die("assertion failed: EVP_PKEY_generate(ctx, &new)","fuzz/slh-dsa.c",0x55);
    }
  }
  else {
    local_28 = EVP_PKEY_new();
    iVar1 = EVP_PKEY_fromdata_init(ctx);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      OPENSSL_die("assertion failed: EVP_PKEY_fromdata_init(ctx)","fuzz/slh-dsa.c",0x48);
    }
    if (*param_3 == '\0') {
      iVar1 = EVP_PKEY_fromdata(ctx,&local_28,0x87,param_2);
      if (iVar1 != 1) {
                    /* WARNING: Subroutine does not return */
        OPENSSL_die("assertion failed: EVP_PKEY_fromdata(ctx, &new, EVP_PKEY_KEYPAIR, params) == 1",
                    "fuzz/slh-dsa.c",0x4f);
      }
    }
    else {
      iVar1 = EVP_PKEY_fromdata(ctx,&local_28,0x87,param_2);
      if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
        OPENSSL_die("assertion failed: rc == 0","fuzz/slh-dsa.c",0x4b);
      }
      EVP_PKEY_free(local_28);
      local_28 = (EVP_PKEY *)0x0;
    }
  }
  EVP_PKEY_CTX_free(ctx);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_28;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void slh_dsa_sign_verify(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                        long *param_5)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  long lVar5;
  EVP_PKEY_CTX *ctx;
  uchar *sig;
  ulong tbslen;
  byte *pbVar6;
  long in_FS_OFFSET;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  uint local_f8;
  uint local_f4;
  size_t local_f0;
  undefined8 local_e8 [21];
  long local_40;
  
  pbVar6 = (byte *)*param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_2 != 0) {
    bVar1 = *pbVar6;
    *param_2 = *param_2 + -1;
    *param_1 = pbVar6 + 1;
    pcVar4 = OBJ_nid2ln(((uint)bVar1 + (uint)(ushort)(bVar1 / 0xc) * -0xc & 0xff) + 0x5b4);
    if (*param_2 != 0) {
      bVar1 = *(byte *)*param_1;
      tbslen = *param_2 - 1;
      pbVar6 = (byte *)*param_1 + 1;
      *param_1 = pbVar6;
      *param_2 = 0;
      if (tbslen < 0x100) {
        if ((bVar1 & 1) != 0) {
          iVar3 = 1;
          goto LAB_0010075b;
        }
LAB_0010059c:
        iVar3 = 1;
        lVar5 = 0;
      }
      else {
        if ((bVar1 & 1) == 0) goto LAB_0010059c;
        iVar3 = 0;
LAB_0010075b:
        OSSL_PARAM_construct_octet_string(&local_128,"context-string",pbVar6,tbslen);
        lVar5 = 1;
      }
      if ((bVar1 & 2) != 0) {
        local_f8 = bVar1 & 4;
        OSSL_PARAM_construct_int(&local_128,"message-encoding",&local_f8);
        local_e8[lVar5 * 5] = local_128;
        local_e8[lVar5 * 5 + 1] = uStack_120;
        local_e8[lVar5 * 5 + 2] = local_118;
        local_e8[lVar5 * 5 + 3] = uStack_110;
        local_e8[lVar5 * 5 + 4] = local_108;
        lVar5 = (long)((int)lVar5 + 1);
      }
      if ((bVar1 & 8) != 0) {
        local_f4 = bVar1 & 0x10;
        OSSL_PARAM_construct_int(&local_128,"deterministic",&local_f4);
        local_e8[lVar5 * 5] = local_128;
        local_e8[lVar5 * 5 + 1] = uStack_120;
        local_e8[lVar5 * 5 + 2] = local_118;
        local_e8[lVar5 * 5 + 3] = uStack_110;
        local_e8[lVar5 * 5 + 4] = local_108;
        lVar5 = (long)((int)lVar5 + 1);
      }
      OSSL_PARAM_construct_end(&local_128);
      local_e8[lVar5 * 5] = local_128;
      local_e8[lVar5 * 5 + 1] = uStack_120;
      local_e8[lVar5 * 5 + 2] = local_118;
      local_e8[lVar5 * 5 + 3] = uStack_110;
      local_e8[lVar5 * 5 + 4] = local_108;
      lVar5 = slh_dsa_gen_key_isra_0(pcVar4,0,0);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        OPENSSL_die("assertion failed: key != NULL","fuzz/slh-dsa.c",0x170);
      }
      *param_5 = lVar5;
      ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(0,lVar5,0);
      if (ctx == (EVP_PKEY_CTX *)0x0) {
                    /* WARNING: Subroutine does not return */
        OPENSSL_die("assertion failed: ctx != NULL","fuzz/slh-dsa.c",0x174);
      }
      lVar5 = EVP_SIGNATURE_fetch(0,pcVar4,0);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        OPENSSL_die("assertion failed: sig_alg != NULL","fuzz/slh-dsa.c",0x177);
      }
      iVar2 = EVP_PKEY_sign_message_init(ctx,lVar5,local_e8);
      if (iVar2 != iVar3) {
                    /* WARNING: Subroutine does not return */
        OPENSSL_die("assertion failed: EVP_PKEY_sign_message_init(ctx, sig_alg, params) == expect_init_rc"
                    ,"fuzz/slh-dsa.c",0x179);
      }
      sig = (uchar *)0x0;
      if (iVar3 != 0) {
        iVar3 = EVP_PKEY_sign(ctx,(uchar *)0x0,&local_f0,pbVar6,tbslen);
        if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          OPENSSL_die("assertion failed: EVP_PKEY_sign(ctx, NULL, &sig_len, msg, msg_len)",
                      "fuzz/slh-dsa.c",0x183);
        }
        sig = (uchar *)CRYPTO_zalloc(local_f0,"fuzz/slh-dsa.c",0x184);
        if (sig == (uchar *)0x0) {
                    /* WARNING: Subroutine does not return */
          OPENSSL_die("assertion failed: sig != NULL","fuzz/slh-dsa.c",0x185);
        }
        iVar3 = EVP_PKEY_sign(ctx,sig,&local_f0,pbVar6,tbslen);
        if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          OPENSSL_die("assertion failed: EVP_PKEY_sign(ctx, sig, &sig_len, msg, msg_len)",
                      "fuzz/slh-dsa.c",0x187);
        }
        iVar3 = EVP_PKEY_verify_message_init(ctx,lVar5,local_e8);
        if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          OPENSSL_die("assertion failed: EVP_PKEY_verify_message_init(ctx, sig_alg, params)",
                      "fuzz/slh-dsa.c",0x189);
        }
        iVar3 = EVP_PKEY_verify(ctx,sig,local_f0,pbVar6,tbslen);
        if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          OPENSSL_die("assertion failed: EVP_PKEY_verify(ctx, sig, sig_len, msg, msg_len)",
                      "fuzz/slh-dsa.c",0x18a);
        }
      }
      CRYPTO_free(sig);
      EVP_SIGNATURE_free(lVar5);
      EVP_PKEY_CTX_free(ctx);
      goto LAB_00100721;
    }
  }
  *param_1 = 0;
LAB_00100721:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



void slh_dsa_gen_keys(long *param_1,long *param_2,undefined8 *param_3,undefined8 *param_4)

{
  byte bVar1;
  long lVar2;
  char *pcVar3;
  undefined8 uVar4;
  byte *pbVar5;
  int n;
  
  if (*param_2 == 0) {
    n = 0x5b4;
    pbVar5 = (byte *)0x0;
  }
  else {
    bVar1 = *(byte *)*param_1;
    pbVar5 = (byte *)*param_1 + 1;
    *param_2 = *param_2 + -1;
    n = ((uint)bVar1 + (uint)(ushort)(bVar1 / 0xc) * -0xc & 0xff) + 0x5b4;
  }
  *param_1 = (long)pbVar5;
  pcVar3 = OBJ_nid2ln(n);
  uVar4 = slh_dsa_gen_key_isra_0(pcVar3,0,0);
  lVar2 = *param_2;
  *param_3 = uVar4;
  if (lVar2 == 0) {
    pbVar5 = (byte *)0x0;
  }
  else {
    bVar1 = *(byte *)*param_1;
    pbVar5 = (byte *)*param_1 + 1;
    *param_2 = lVar2 + -1;
    n = ((uint)bVar1 + (uint)(ushort)(bVar1 / 0xc) * -0xc & 0xff) + 0x5b4;
  }
  *param_1 = (long)pbVar5;
  pcVar3 = OBJ_nid2ln(n);
  uVar4 = slh_dsa_gen_key_isra_0(pcVar3,0,0);
  *param_4 = uVar4;
  return;
}



void slh_dsa_gen_key_with_params(undefined8 *param_1,long *param_2,long *param_3)

{
  uint n;
  byte bVar1;
  byte *pbVar2;
  char *pcVar3;
  long lVar4;
  uchar *puVar5;
  uint uVar6;
  long lVar7;
  long in_FS_OFFSET;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3e8;
  byte local_3c9;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  undefined8 local_3a0;
  undefined8 uStack_398;
  undefined8 local_390;
  undefined8 uStack_388;
  undefined8 local_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  uchar local_348 [256];
  uchar local_248 [256];
  uchar local_148 [264];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar4 = *param_2;
  *param_3 = 0;
  local_3c9 = 0;
  pbVar2 = (byte *)*param_1;
  if (lVar4 == 0) {
    *param_1 = 0;
    lVar7 = 0x20;
    pcVar3 = OBJ_nid2ln(0x5b4);
  }
  else {
    bVar1 = *pbVar2;
    lVar7 = 0x40;
    *param_2 = lVar4 + -1;
    *param_1 = pbVar2 + 1;
    uVar6 = (uint)bVar1 + (uint)(ushort)(bVar1 / 0xc) * -0xc & 0xff;
    n = uVar6 + 0x5b4;
    pcVar3 = OBJ_nid2ln(n);
    if ((n < 0x5be) && (lVar7 = 0x30, n < 0x5bc)) {
      if (n < 0x5b8) {
        if (n < 0x5b6) {
          lVar7 = 0x20;
        }
      }
      else {
        lVar7 = (ulong)(-(uint)(uVar6 - 4 < 2) & 0x20) + 0x20;
      }
    }
  }
  RAND_bytes(local_348,0x100);
  RAND_bytes(local_248,0x100);
  RAND_bytes(local_148,0x100);
  bVar1 = *(byte *)*param_1;
  local_3c9 = bVar1 & 1;
  if ((bVar1 & 1) == 0) {
    local_3c9 = bVar1 & 4;
    lVar4 = lVar7;
    puVar5 = local_348;
    if ((bVar1 & 4) != 0) {
      local_3c9 = 1;
      puVar5 = (uchar *)0x0;
    }
  }
  else {
    lVar4 = lVar7 + 1;
    if ((bVar1 & 2) != 0) {
      lVar4 = lVar7 + -1;
    }
    puVar5 = (uchar *)0x0;
    if ((bVar1 & 4) == 0) {
      puVar5 = local_348;
    }
  }
  OSSL_PARAM_construct_octet_string(&local_408,&_LC24,puVar5,lVar4);
  local_3a8 = local_3e8;
  local_3c8 = local_408;
  uStack_3c0 = uStack_400;
  local_3b8 = local_3f8;
  uStack_3b0 = uStack_3f0;
  bVar1 = *(byte *)*param_1;
  if ((bVar1 & 8) == 0) {
    puVar5 = (uchar *)0x0;
    if ((bVar1 & 0x10) == 0) {
      puVar5 = local_248;
    }
    if (local_3c9 != 0) goto LAB_00100c21;
    local_3c9 = puVar5 == (uchar *)0x0;
    OSSL_PARAM_construct_octet_string(&local_408,&_LC25,puVar5,lVar7);
    local_380 = local_3e8;
    local_3a0 = local_408;
    uStack_398 = uStack_400;
    local_390 = local_3f8;
    uStack_388 = uStack_3f0;
    OSSL_PARAM_construct_end(&local_408);
    local_378 = local_408;
    uStack_370 = uStack_400;
    local_358 = local_3e8;
    local_368 = local_3f8;
    uStack_360 = uStack_3f0;
    lVar4 = slh_dsa_gen_key_isra_0(pcVar3,&local_3c8,&local_3c9);
    *param_3 = lVar4;
    if (puVar5 != (uchar *)0x0) {
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        OPENSSL_die("assertion failed: *out1 != NULL","fuzz/slh-dsa.c",0x10b);
      }
      goto LAB_00100ca7;
    }
  }
  else {
    lVar4 = lVar7 + -1;
    local_3c9 = 1;
    lVar7 = lVar7 + 1;
    if ((bVar1 & 1) != 0) {
      lVar7 = lVar4;
    }
    puVar5 = (uchar *)0x0;
    if ((bVar1 & 0x10) == 0) {
      puVar5 = local_248;
    }
LAB_00100c21:
    OSSL_PARAM_construct_octet_string(&local_408,&_LC25,puVar5,lVar7);
    local_380 = local_3e8;
    local_3a0 = local_408;
    uStack_398 = uStack_400;
    local_390 = local_3f8;
    uStack_388 = uStack_3f0;
    OSSL_PARAM_construct_end(&local_408);
    local_378 = local_408;
    uStack_370 = uStack_400;
    local_358 = local_3e8;
    local_368 = local_3f8;
    uStack_360 = uStack_3f0;
    lVar4 = slh_dsa_gen_key_isra_0(pcVar3,&local_3c8,&local_3c9);
    *param_3 = lVar4;
  }
  if (lVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: *out1 == NULL","fuzz/slh-dsa.c",0x109);
  }
LAB_00100ca7:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



undefined8 FuzzerInitialize(void)

{
  return 0;
}



undefined8 FuzzerTestOneInput(byte *param_1,ulong param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  long in_FS_OFFSET;
  ulong local_50;
  byte *local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  if (param_2 < 0x20) {
    uVar1 = 0xffffffff;
    local_50 = param_2;
  }
  else {
    local_48 = param_1 + 1;
    local_50 = param_2 - 1;
    uVar2 = (ulong)(*param_1 & 3);
    if (*(code **)(ops + uVar2 * 0x20 + 8) != (code *)0x0) {
      (**(code **)(ops + uVar2 * 0x20 + 8))(&local_48,&local_50,&local_40,&local_38);
    }
    if (*(code **)(ops + uVar2 * 0x20 + 0x10) != (code *)0x0) {
      (**(code **)(ops + uVar2 * 0x20 + 0x10))
                (&local_48,&local_50,local_40,local_38,&local_30,&local_28);
    }
    if (*(code **)(ops + uVar2 * 0x20 + 0x18) != (code *)0x0) {
      (**(code **)(ops + uVar2 * 0x20 + 0x18))(local_40,local_38,local_30,local_28);
    }
    uVar1 = 0;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void FuzzerCleanup(void)

{
  OPENSSL_cleanup();
  return;
}


