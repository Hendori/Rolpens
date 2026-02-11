
void alarmed(void)

{
  signal(0xe,alarmed);
  run = 0;
  return;
}



int RAND_bytes_loop(long *param_1)

{
  uchar *buf;
  int iVar1;
  
  buf = *(uchar **)(*param_1 + 0x10);
  iVar1 = run;
  if (run != 0) {
    iVar1 = 0;
    do {
      iVar1 = iVar1 + 1;
      RAND_bytes(buf,*(int *)(lengths + (ulong)testnum * 4));
      if (run == 0) {
        return iVar1;
      }
      if (testmode != 0) {
        return iVar1;
      }
    } while (iVar1 != 0x7fffffff);
  }
  return iVar1;
}



int SIG_keygen_loop(long *param_1)

{
  EVP_PKEY_CTX *ctx;
  int iVar1;
  long in_FS_OFFSET;
  EVP_PKEY *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  ctx = *(EVP_PKEY_CTX **)(*param_1 + 0x2090 + (ulong)testnum * 8);
  iVar1 = run;
  if (run != 0) {
    iVar1 = 0;
    do {
      local_28 = (EVP_PKEY *)0x0;
      iVar1 = iVar1 + 1;
      EVP_PKEY_keygen(ctx,&local_28);
      EVP_PKEY_free(local_28);
      if ((run == 0) || (testmode != 0)) break;
    } while (iVar1 != 0x7fffffff);
  }
  local_28 = (EVP_PKEY *)0x0;
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}



int KEM_keygen_loop(long *param_1)

{
  EVP_PKEY_CTX *ctx;
  int iVar1;
  int iVar2;
  long in_FS_OFFSET;
  EVP_PKEY *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = (EVP_PKEY *)0x0;
  ctx = *(EVP_PKEY_CTX **)(*param_1 + 0x4d0 + (ulong)testnum * 8);
  iVar2 = run;
  if (run != 0) {
    iVar2 = 0;
    iVar1 = EVP_PKEY_keygen(ctx,&local_28);
    while (0 < iVar1) {
      iVar2 = iVar2 + 1;
      EVP_PKEY_free(local_28);
      local_28 = (EVP_PKEY *)0x0;
      if (((run == 0) || (testmode != 0)) || (iVar2 == 0x7fffffff)) goto LAB_001001d0;
      iVar1 = EVP_PKEY_keygen(ctx,&local_28);
    }
    iVar2 = -1;
  }
LAB_001001d0:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}



int FFDH_derive_key_loop(long *param_1)

{
  EVP_PKEY_CTX *ctx;
  uchar *key;
  int iVar1;
  long in_FS_OFFSET;
  size_t local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  ctx = *(EVP_PKEY_CTX **)(*param_1 + 0x488 + (ulong)testnum * 8);
  key = *(uchar **)(*param_1 + 0x4b0);
  iVar1 = run;
  if (run != 0) {
    iVar1 = 0;
    do {
      iVar1 = iVar1 + 1;
      local_38 = 0x400;
      EVP_PKEY_derive(ctx,key,&local_38);
      if ((run == 0) || (testmode != 0)) break;
    } while (iVar1 != 0x7fffffff);
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}



int ECDH_EVP_derive_key_loop(long *param_1)

{
  long lVar1;
  EVP_PKEY_CTX *ctx;
  uchar *key;
  ulong uVar2;
  int iVar3;
  
  lVar1 = *param_1;
  uVar2 = (ulong)testnum;
  ctx = *(EVP_PKEY_CTX **)(lVar1 + 0x2c0 + uVar2 * 8);
  key = *(uchar **)(lVar1 + 0x3b8);
  iVar3 = run;
  if (run != 0) {
    iVar3 = 0;
    do {
      iVar3 = iVar3 + 1;
      EVP_PKEY_derive(ctx,key,(size_t *)(lVar1 + 0x3c8 + uVar2 * 8));
      if (run == 0) {
        return iVar3;
      }
      if (testmode != 0) {
        return iVar3;
      }
    } while (iVar3 != 0x7fffffff);
  }
  return iVar3;
}



int KEM_encaps_loop(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  long in_FS_OFFSET;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = *param_1 + (ulong)testnum * 8;
  local_50 = *(undefined8 *)(lVar1 + 0xf38);
  uVar2 = *(undefined8 *)(lVar1 + 0x848);
  uVar3 = *(undefined8 *)(lVar1 + 0x1628);
  uVar4 = *(undefined8 *)(lVar1 + 0x19a0);
  local_48 = *(undefined8 *)(lVar1 + 0x12b0);
  iVar6 = run;
  if (run != 0) {
    iVar6 = 0;
    while (iVar5 = EVP_PKEY_encapsulate(uVar2,uVar3,&local_50,uVar4,&local_48), 0 < iVar5) {
      iVar6 = iVar6 + 1;
      if (((run == 0) || (testmode != 0)) || (iVar6 == 0x7fffffff)) goto LAB_00100407;
    }
    iVar6 = -1;
  }
LAB_00100407:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar6;
}



int KEM_decaps_loop(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  long in_FS_OFFSET;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = *param_1 + (ulong)testnum * 8;
  local_48 = *(undefined8 *)(lVar1 + 0x12b0);
  uVar2 = *(undefined8 *)(lVar1 + 0xbc0);
  uVar3 = *(undefined8 *)(lVar1 + 0xf38);
  uVar4 = *(undefined8 *)(lVar1 + 0x1628);
  uVar5 = *(undefined8 *)(lVar1 + 0x19a0);
  iVar7 = run;
  if (run != 0) {
    iVar7 = 0;
    while (iVar6 = EVP_PKEY_decapsulate(uVar2,uVar5,&local_48,uVar4,uVar3), 0 < iVar6) {
      iVar7 = iVar7 + 1;
      if (((run == 0) || (testmode != 0)) || (iVar7 == 0x7fffffff)) goto LAB_001004e7;
    }
    iVar7 = -1;
  }
LAB_001004e7:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar7;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint SIG_verify_loop(long *param_1)

{
  long lVar1;
  EVP_PKEY_CTX *ctx;
  size_t siglen;
  uchar *sig;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  long in_FS_OFFSET;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = (undefined1  [16])0x0;
  local_48 = (undefined1  [16])0x0;
  lVar1 = *param_1 + (ulong)testnum * 8;
  ctx = *(EVP_PKEY_CTX **)(lVar1 + 0x2780);
  siglen = *(size_t *)(lVar1 + 0x2e70);
  sig = *(uchar **)(lVar1 + 0x31e8);
  uVar4 = run;
  if (run != 0) {
    uVar4 = 0;
    while (iVar2 = EVP_PKEY_verify(ctx,sig,siglen,local_58,0x20), 0 < iVar2) {
      uVar4 = uVar4 + 1;
      if (((run == 0) || (testmode != 0)) || (uVar4 == 0x7fffffff)) goto LAB_001005c2;
    }
    uVar3 = (ulong)uVar4;
    uVar4 = 0xffffffff;
    BIO_printf(_bio_err,"SIG verify failure at count %d\n",uVar3);
    ERR_print_errors(_bio_err);
    testmoderesult = 1;
  }
LAB_001005c2:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int SM2_verify_loop(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  EVP_PKEY *pkey;
  int iVar5;
  EVP_MD *type;
  int iVar6;
  
  lVar1 = *param_1;
  uVar2 = *(undefined8 *)(lVar1 + 0x10);
  uVar3 = *(undefined8 *)(lVar1 + 0x18);
  uVar4 = *(undefined8 *)(lVar1 + 0x50);
  iVar6 = run;
  if (run != 0) {
    iVar6 = 0;
    while( true ) {
      pkey = *(EVP_PKEY **)(lVar1 + 0x3b0 + (ulong)testnum * 8);
      type = (EVP_MD *)EVP_sm3();
      iVar5 = EVP_DigestVerifyInit
                        (*(EVP_MD_CTX **)(lVar1 + 0x3a8 + (ulong)testnum * 8),(EVP_PKEY_CTX **)0x0,
                         type,(ENGINE *)0x0,pkey);
      if (iVar5 == 0) break;
      iVar5 = EVP_DigestVerify(*(undefined8 *)(lVar1 + 0x3a8 + (ulong)testnum * 8),uVar3,uVar4,uVar2
                               ,0x14);
      if (iVar5 != 1) {
        BIO_printf(_bio_err,"SM2 verify failure\n");
        ERR_print_errors(_bio_err);
        goto LAB_0010073f;
      }
      iVar6 = iVar6 + 1;
      if (run == 0) {
        return iVar6;
      }
      if (testmode != 0) {
        return iVar6;
      }
      if (iVar6 == 0x7fffffff) {
        return 0x7fffffff;
      }
    }
    BIO_printf(_bio_err,"SM2 verify init failure\n");
    ERR_print_errors(_bio_err);
LAB_0010073f:
    testmoderesult = 1;
    iVar6 = -1;
  }
  return iVar6;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int SM2_sign_loop(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  EVP_PKEY *pkey;
  int iVar4;
  int iVar5;
  EVP_MD *type;
  int iVar6;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  
  lVar1 = *param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = *(undefined8 *)(lVar1 + 0x10);
  uVar3 = *(undefined8 *)(lVar1 + 0x18);
  iVar4 = EVP_PKEY_get_size(*(undefined8 *)(lVar1 + 0x3b0 + (ulong)testnum * 8));
  iVar6 = run;
  if (run != 0) {
    iVar6 = 0;
    while( true ) {
      pkey = *(EVP_PKEY **)(lVar1 + 0x3b0 + (ulong)testnum * 8);
      local_48 = (long)iVar4;
      type = (EVP_MD *)EVP_sm3();
      iVar5 = EVP_DigestSignInit(*(EVP_MD_CTX **)(lVar1 + 0x3a0 + (ulong)testnum * 8),
                                 (EVP_PKEY_CTX **)0x0,type,(ENGINE *)0x0,pkey);
      if (iVar5 == 0) break;
      iVar5 = EVP_DigestSign(*(undefined8 *)(lVar1 + 0x3a0 + (ulong)testnum * 8),uVar3,&local_48,
                             uVar2,0x14);
      if (iVar5 == 0) {
        BIO_printf(_bio_err,"SM2 sign failure\n");
        ERR_print_errors(_bio_err);
        goto LAB_001008cf;
      }
      iVar6 = iVar6 + 1;
      *(long *)(lVar1 + 0x50) = local_48;
      if (((run == 0) || (testmode != 0)) || (iVar6 == 0x7fffffff)) goto LAB_0010087c;
    }
    BIO_printf(_bio_err,"SM2 init sign failure\n");
    ERR_print_errors(_bio_err);
LAB_001008cf:
    testmoderesult = 1;
    iVar6 = -1;
  }
LAB_0010087c:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar6;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int EdDSA_verify_loop(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  
  lVar1 = *param_1;
  uVar2 = *(undefined8 *)(lVar1 + 0x18);
  uVar3 = *(undefined8 *)(lVar1 + 0x50);
  iVar5 = run;
  if (run != 0) {
    iVar5 = 0;
    do {
      iVar4 = EVP_DigestVerifyInit
                        (*(EVP_MD_CTX **)(lVar1 + 0x390 + (ulong)testnum * 8),(EVP_PKEY_CTX **)0x0,
                         (EVP_MD *)0x0,(ENGINE *)0x0,(EVP_PKEY *)0x0);
      if (iVar4 == 0) {
        BIO_printf(_bio_err,"EdDSA verify init failure\n");
        ERR_print_errors(_bio_err);
        testmoderesult = 1;
        return -1;
      }
      iVar4 = EVP_DigestVerify(*(undefined8 *)(lVar1 + 0x390 + (ulong)testnum * 8),uVar2,uVar3);
      if (iVar4 != 1) {
        BIO_printf(_bio_err,"EdDSA verify failure\n");
        ERR_print_errors(_bio_err);
        testmoderesult = 1;
        return -1;
      }
      iVar5 = iVar5 + 1;
    } while (((run != 0) && (testmode == 0)) && (iVar5 != 0x7fffffff));
  }
  return iVar5;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int EdDSA_sign_loop(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  lVar1 = *param_1;
  uVar2 = *(undefined8 *)(lVar1 + 0x18);
  iVar4 = run;
  if (run != 0) {
    iVar4 = 0;
    do {
      iVar3 = EVP_DigestSignInit(*(EVP_MD_CTX **)(lVar1 + 0x380 + (ulong)testnum * 8),
                                 (EVP_PKEY_CTX **)0x0,(EVP_MD *)0x0,(ENGINE *)0x0,(EVP_PKEY *)0x0);
      if (iVar3 == 0) {
        BIO_printf(_bio_err,"EdDSA sign init failure\n");
        ERR_print_errors(_bio_err);
        testmoderesult = 1;
        return -1;
      }
      iVar3 = EVP_DigestSign(*(undefined8 *)(lVar1 + 0x380 + (ulong)testnum * 8),uVar2,lVar1 + 0x50)
      ;
      if (iVar3 == 0) {
        BIO_printf(_bio_err,"EdDSA sign failure\n");
        ERR_print_errors(_bio_err);
        testmoderesult = 1;
        return -1;
      }
      iVar4 = iVar4 + 1;
    } while (((run != 0) && (testmode == 0)) && (iVar4 != 0x7fffffff));
  }
  return iVar4;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int EVP_Update_loop_aead_enc(long *param_1)

{
  long lVar1;
  uchar *out;
  uchar *key;
  EVP_CIPHER_CTX *ctx;
  int iVar2;
  char *format;
  int iVar3;
  int iVar4;
  long in_FS_OFFSET;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = *param_1;
  out = *(uchar **)(lVar1 + 0x10);
  key = *(uchar **)(lVar1 + 0x30);
  ctx = *(EVP_CIPHER_CTX **)(lVar1 + 0x4c0);
  iVar3 = run;
  if (run != 0) {
    iVar3 = 0;
    iVar4 = 0;
    do {
      if (mode_op != 0x10004) {
        iVar2 = EVP_CIPHER_CTX_ctrl(ctx,9,0xc,(void *)0x0);
        if (iVar2 == 0) {
          format = "\nFailed to set iv length\n";
          goto LAB_00100d0f;
        }
        if (((1 < mode_op - 0x10004U) && (mode_op != 6)) &&
           (iVar2 = EVP_CIPHER_CTX_ctrl(ctx,0x11,0x10,(void *)0x0), iVar2 == 0)) {
          format = "\nFailed to set tag length\n";
          goto LAB_00100d0f;
        }
      }
      iVar2 = EVP_CipherInit_ex(ctx,(EVP_CIPHER *)0x0,(ENGINE *)0x0,key,aead_iv,-1);
      if (iVar2 == 0) {
        format = "\nFailed to set key and iv\n";
LAB_00100d0f:
        BIO_printf(_bio_err,format);
        ERR_print_errors(_bio_err);
        testmoderesult = 1;
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      if ((mode_op == 7) &&
         (iVar2 = EVP_EncryptUpdate(ctx,(uchar *)0x0,&local_44,(uchar *)0x0,
                                    *(int *)(lengths + (ulong)testnum * 4)), iVar2 == 0)) {
        format = "\nCouldn\'t set input text length\n";
        goto LAB_00100d0f;
      }
      if ((aead != 0) && (iVar2 = EVP_EncryptUpdate(ctx,(uchar *)0x0,&local_44,aad,0xd), iVar2 == 0)
         ) {
        format = "\nCouldn\'t insert AAD when encrypting\n";
        goto LAB_00100d0f;
      }
      iVar2 = EVP_EncryptUpdate(ctx,out,&local_44,out,*(int *)(lengths + (ulong)testnum * 4));
      if (iVar2 == 0) {
        format = "\nFailed to encrypt the data\n";
        goto LAB_00100d0f;
      }
      iVar2 = EVP_EncryptFinal_ex(ctx,out,&local_44);
      iVar3 = (iVar3 + 1) - (uint)(iVar2 == 0);
    } while (((run != 0) && (testmode == 0)) && (iVar4 = iVar4 + 1, iVar4 != 0x7fffffff));
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar3;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint SIG_sign_loop(long *param_1)

{
  long lVar1;
  EVP_PKEY_CTX *ctx;
  int iVar2;
  uchar *sig;
  ulong uVar3;
  uint uVar4;
  long in_FS_OFFSET;
  size_t local_70;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  long local_40;
  
  lVar1 = *param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ctx = *(EVP_PKEY_CTX **)(lVar1 + 0x2408 + (ulong)testnum * 8);
  sig = (uchar *)app_malloc(*(undefined8 *)(lVar1 + 11000 + (ulong)testnum * 8),"sig sign loop");
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  uVar4 = run;
  if (run != 0) {
    uVar4 = 0;
    while( true ) {
      local_70 = *(size_t *)(lVar1 + 11000 + (ulong)testnum * 8);
      iVar2 = EVP_PKEY_sign(ctx,sig,&local_70,local_68,0x20);
      if (iVar2 < 1) break;
      uVar4 = uVar4 + 1;
      if (((run == 0) || (testmode != 0)) || (uVar4 == 0x7fffffff)) goto LAB_00100e25;
    }
    uVar3 = (ulong)uVar4;
    uVar4 = 0xffffffff;
    BIO_printf(_bio_err,"SIG sign failure at count %d\n",uVar3);
    ERR_print_errors(_bio_err);
    testmoderesult = 1;
  }
LAB_00100e25:
  CRYPTO_free(sig);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}



int GHASH_loop(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = *(undefined8 *)(*param_1 + 0x10);
  uVar2 = *(undefined8 *)(*param_1 + 0x4c8);
  iVar4 = run;
  if (run != 0) {
    iVar4 = 0;
    do {
      iVar3 = EVP_MAC_update(uVar2,uVar1,(long)*(int *)(lengths + (ulong)testnum * 4));
      if (iVar3 == 0) {
        return -1;
      }
      iVar4 = iVar4 + 1;
    } while (((run != 0) && (testmode == 0)) && (iVar4 != 0x7fffffff));
  }
  return iVar4;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int EVP_Update_loop(long *param_1)

{
  uchar *out;
  EVP_CIPHER_CTX *ctx;
  int iVar1;
  int iVar2;
  long in_FS_OFFSET;
  int local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  out = *(uchar **)(*param_1 + 0x10);
  ctx = *(EVP_CIPHER_CTX **)(*param_1 + 0x4c0);
  if (decrypt == 0) {
    iVar2 = 0;
    if (run != 0) {
      iVar2 = 0;
      do {
        iVar1 = EVP_EncryptUpdate(ctx,out,&local_34,out,*(int *)(lengths + (ulong)testnum * 4));
        if (iVar1 != 1) {
          EVP_CipherInit_ex(ctx,(EVP_CIPHER *)0x0,(ENGINE *)0x0,(uchar *)0x0,iv,-1);
        }
        iVar2 = iVar2 + 1;
        if ((run == 0) || (testmode != 0)) goto LAB_00100ff5;
      } while (iVar2 != 0x7fffffff);
      goto LAB_00101074;
    }
LAB_00100fff:
    iVar1 = EVP_EncryptFinal_ex(ctx,out,&local_34);
  }
  else {
    iVar2 = run;
    if (run != 0) {
      iVar2 = 0;
      do {
        iVar1 = EVP_DecryptUpdate(ctx,out,&local_34,out,*(int *)(lengths + (ulong)testnum * 4));
        if (iVar1 != 1) {
          EVP_CipherInit_ex(ctx,(EVP_CIPHER *)0x0,(ENGINE *)0x0,(uchar *)0x0,iv,-1);
        }
        iVar2 = iVar2 + 1;
        if ((run == 0) || (testmode != 0)) goto LAB_00100ff5;
      } while (iVar2 != 0x7fffffff);
LAB_00101074:
      iVar2 = 0x7fffffff;
LAB_00100ff5:
      if (decrypt == 0) goto LAB_00100fff;
    }
    iVar1 = EVP_DecryptFinal_ex(ctx,out,&local_34);
  }
  if (iVar1 == 0) {
    BIO_printf(_bio_err,"Error finalizing cipher loop\n");
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int EVP_Update_loop_aead_dec(long *param_1)

{
  long lVar1;
  uchar *in;
  uchar *out;
  EVP_CIPHER_CTX *ctx;
  uchar *key;
  int iVar2;
  char *format;
  int iVar3;
  int iVar4;
  long in_FS_OFFSET;
  int local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  lVar1 = *param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  in = *(uchar **)(lVar1 + 0x10);
  out = *(uchar **)(lVar1 + 0x18);
  ctx = *(EVP_CIPHER_CTX **)(lVar1 + 0x4c0);
  key = *(uchar **)(lVar1 + 0x30);
  iVar3 = run;
  if (run != 0) {
    iVar4 = 0;
    iVar3 = 0;
    do {
      if (mode_op != 0x10004) {
        iVar2 = EVP_CIPHER_CTX_ctrl(ctx,9,0xc,(void *)0x0);
        if (iVar2 == 0) {
          format = "\nFailed to set iv length\n";
          goto LAB_00101347;
        }
        if (((1 < mode_op - 0x10004U) && (mode_op != 6)) &&
           (iVar2 = EVP_CIPHER_CTX_ctrl(ctx,0x11,0x10,(void *)0x0), iVar2 == 0)) {
          format = "\nFailed to set tag length\n";
          goto LAB_00101347;
        }
      }
      iVar2 = EVP_CipherInit_ex(ctx,(EVP_CIPHER *)0x0,(ENGINE *)0x0,key,aead_iv,-1);
      if (iVar2 == 0) {
        format = "\nFailed to set key and iv\n";
LAB_00101347:
        BIO_printf(_bio_err,format);
        ERR_print_errors(_bio_err);
        testmoderesult = 1;
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      if ((mode_op != 0x10004) &&
         (iVar2 = EVP_DecryptInit_ex(ctx,(EVP_CIPHER *)0x0,(ENGINE *)0x0,(uchar *)0x0,aead_iv),
         iVar2 == 0)) {
        format = "\nFailed to set iv\n";
        goto LAB_00101347;
      }
      local_58 = *(undefined8 *)(lVar1 + 0x38);
      uStack_50 = *(undefined8 *)(lVar1 + 0x40);
      iVar2 = EVP_CIPHER_CTX_ctrl(ctx,0x11,0x10,&local_58);
      if (iVar2 == 0) {
        format = "\nFailed to set tag\n";
        goto LAB_00101347;
      }
      if ((mode_op == 7) &&
         (iVar2 = EVP_DecryptUpdate(ctx,(uchar *)0x0,&local_5c,(uchar *)0x0,
                                    *(int *)(lengths + (ulong)testnum * 4)), iVar2 == 0)) {
        format = "\nCouldn\'t set cipher text length\n";
        goto LAB_00101347;
      }
      if ((aead != 0) && (iVar2 = EVP_DecryptUpdate(ctx,(uchar *)0x0,&local_5c,aad,0xd), iVar2 == 0)
         ) {
        format = "\nCouldn\'t insert AAD when decrypting\n";
        goto LAB_00101347;
      }
      iVar2 = EVP_DecryptUpdate(ctx,out,&local_5c,in,*(int *)(lengths + (ulong)testnum * 4));
      if (iVar2 == 0) {
        format = "\nFailed to decrypt the data\n";
        goto LAB_00101347;
      }
      iVar2 = EVP_DecryptFinal_ex(ctx,out,&local_5c);
      iVar3 = (iVar3 + 1) - (uint)(iVar2 == 0);
    } while (((run != 0) && (testmode == 0)) && (iVar4 = iVar4 + 1, iVar4 != 0x7fffffff));
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar3;
}



int EVP_Cipher_loop(long *param_1)

{
  long lVar1;
  uchar *out;
  int iVar2;
  int iVar3;
  
  lVar1 = *param_1;
  out = *(uchar **)(lVar1 + 0x10);
  if (*(long *)(lVar1 + 0x4c0) == 0) {
    return -1;
  }
  iVar3 = run;
  if (run != 0) {
    iVar3 = 0;
    do {
      iVar2 = EVP_Cipher(*(EVP_CIPHER_CTX **)(lVar1 + 0x4c0),out,out,
                         *(uint *)(lengths + (ulong)testnum * 4));
      if (iVar2 < 1) {
        return -1;
      }
      iVar3 = iVar3 + 1;
    } while (((run != 0) && (testmode == 0)) && (iVar3 != 0x7fffffff));
  }
  return iVar3;
}



void signatures_cmp(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char *__s2;
  char *__s1;
  
  uVar1 = EVP_SIGNATURE_get0_provider(*param_2);
  __s2 = (char *)OSSL_PROVIDER_get0_name(uVar1);
  uVar1 = EVP_SIGNATURE_get0_provider(*param_1);
  __s1 = (char *)OSSL_PROVIDER_get0_name(uVar1);
  strcmp(__s1,__s2);
  return;
}



void kems_cmp(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char *__s2;
  char *__s1;
  
  uVar1 = EVP_KEM_get0_provider(*param_2);
  __s2 = (char *)OSSL_PROVIDER_get0_name(uVar1);
  uVar1 = EVP_KEM_get0_provider(*param_1);
  __s1 = (char *)OSSL_PROVIDER_get0_name(uVar1);
  strcmp(__s1,__s2);
  return;
}



EVP_CIPHER_CTX * init_evp_cipher_ctx(undefined8 param_1,uchar *param_2,int param_3)

{
  int iVar1;
  EVP_CIPHER_CTX *ctx;
  long in_FS_OFFSET;
  EVP_CIPHER *local_28;
  long local_20;
  
  ctx = (EVP_CIPHER_CTX *)0x0;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = (EVP_CIPHER *)0x0;
  iVar1 = opt_cipher_silent(param_1,&local_28);
  if (iVar1 != 0) {
    ctx = EVP_CIPHER_CTX_new();
    if (ctx != (EVP_CIPHER_CTX *)0x0) {
      iVar1 = EVP_CipherInit_ex(ctx,local_28,(ENGINE *)0x0,(uchar *)0x0,(uchar *)0x0,1);
      if (iVar1 != 0) {
        iVar1 = EVP_CIPHER_CTX_set_key_length(ctx,param_3);
        if (0 < iVar1) {
          iVar1 = EVP_CipherInit_ex(ctx,(EVP_CIPHER *)0x0,(ENGINE *)0x0,param_2,iv,1);
          if (iVar1 != 0) {
            EVP_CIPHER_free(local_28);
            goto LAB_00101594;
          }
        }
      }
      EVP_CIPHER_CTX_free(ctx);
    }
    ctx = (EVP_CIPHER_CTX *)0x0;
    EVP_CIPHER_free(local_28);
  }
LAB_00101594:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return ctx;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 mac_setup(undefined8 param_1,long *param_2,undefined8 param_3,long param_4,uint param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  
  uVar2 = app_get0_propq();
  uVar3 = app_get0_libctx();
  lVar4 = EVP_MAC_fetch(uVar3,param_1,uVar2);
  *param_2 = lVar4;
  if (lVar4 != 0) {
    plVar5 = (long *)(param_4 + 0x4c8);
    plVar6 = plVar5 + (ulong)param_5 * 0x6ac;
    while( true ) {
      lVar4 = EVP_MAC_CTX_new(lVar4);
      *plVar5 = lVar4;
      if (lVar4 == 0) break;
      iVar1 = EVP_MAC_CTX_set_params(lVar4,param_3);
      if (iVar1 == 0) {
        return 0;
      }
      plVar5 = plVar5 + 0x6ac;
      if (plVar5 == plVar6) {
        return 1;
      }
      lVar4 = *param_2;
    }
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void pkey_print_message(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  char *format;
  
  format = "+DTP:%d:%s:%s:%d\n";
  if (mr == 0) {
    format = "Doing %u bits %s %s ops for %ds: ";
  }
  BIO_printf(_bio_err,format,param_3,param_1,param_2,(ulong)param_4);
  BIO_ctrl(_bio_err,0xb,0,(void *)0x0);
  run = 1;
  alarm(param_4);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void kskey_print_message(undefined8 param_1,undefined8 param_2,uint param_3)

{
  char *format;
  
  format = "+DTP:%s:%s:%d\n";
  if (mr == 0) {
    format = "Doing %s %s ops for %ds: ";
  }
  BIO_printf(_bio_err,format,param_1,param_2,(ulong)param_3);
  BIO_ctrl(_bio_err,0xb,0,(void *)0x0);
  run = 1;
  alarm(param_3);
  return;
}



void mac_teardown(undefined8 *param_1,long param_2,uint param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)(param_2 + 0x4c8);
  puVar3 = puVar2 + (ulong)param_3 * 0x6ac;
  do {
    uVar1 = *puVar2;
    puVar2 = puVar2 + 0x6ac;
    EVP_MAC_CTX_free(uVar1);
  } while (puVar2 != puVar3);
  EVP_MAC_free(*param_1);
  *param_1 = 0;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

EVP_PKEY * get_ecdsa(long param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  EVP_PKEY_CTX *pEVar4;
  ulong uVar5;
  EVP_PKEY *pEVar6;
  long in_FS_OFFSET;
  EVP_PKEY *local_30;
  EVP_PKEY *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_30 = (EVP_PKEY *)0x0;
  uVar3 = ERR_peek_error();
  if (uVar3 != 0) {
    BIO_printf(_bio_err,"WARNING: the error queue contains previous unhandled errors.\n");
    ERR_print_errors(_bio_err);
    testmoderesult = 1;
  }
  pEVar4 = EVP_PKEY_CTX_new_id(*(int *)(param_1 + 8),(ENGINE *)0x0);
  if (pEVar4 == (EVP_PKEY_CTX *)0x0) {
    local_28 = (EVP_PKEY *)0x0;
    uVar3 = ERR_peek_error();
    uVar5 = ERR_peek_last_error();
    if ((((uVar5 == uVar3) && ((uVar5 & 0x80000000) == 0)) && ((char)(uVar5 >> 0x17) == '\x06')) &&
       ((uVar2 = (uint)uVar5 & 0x7fffff, uVar2 == 0x8010c || (uVar2 == 0x9c)))) {
      ERR_get_error();
    }
    uVar3 = ERR_peek_error();
    pEVar6 = (EVP_PKEY *)0x0;
    if (uVar3 != 0) {
      BIO_printf(_bio_err,"Unhandled error in the error queue during EC key setup.\n");
      ERR_print_errors(_bio_err);
      testmoderesult = 1;
      goto LAB_00101835;
    }
    pEVar4 = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_name(0,&_LC30,0);
    if (((pEVar4 == (EVP_PKEY_CTX *)0x0) || (iVar1 = EVP_PKEY_paramgen_init(pEVar4), iVar1 < 1)) ||
       ((iVar1 = EVP_PKEY_CTX_set_ec_paramgen_curve_nid(pEVar4,*(undefined4 *)(param_1 + 8)),
        iVar1 < 1 || (iVar1 = EVP_PKEY_paramgen(pEVar4,&local_28), iVar1 < 1)))) {
      BIO_printf(_bio_err,"EC params init failure.\n");
      ERR_print_errors(_bio_err);
      testmoderesult = 1;
      EVP_PKEY_CTX_free(pEVar4);
      goto LAB_00101835;
    }
    EVP_PKEY_CTX_free(pEVar4);
    pEVar4 = EVP_PKEY_CTX_new(local_28,(ENGINE *)0x0);
    EVP_PKEY_free(local_28);
    if (pEVar4 != (EVP_PKEY_CTX *)0x0) goto LAB_001017e8;
LAB_001017f4:
    BIO_printf(_bio_err,"EC key generation failure.\n");
    ERR_print_errors(_bio_err);
    testmoderesult = 1;
    local_30 = (EVP_PKEY *)0x0;
  }
  else {
LAB_001017e8:
    iVar1 = EVP_PKEY_keygen_init(pEVar4);
    if ((iVar1 < 1) || (iVar1 = EVP_PKEY_keygen(pEVar4,&local_30), iVar1 < 1)) goto LAB_001017f4;
  }
  EVP_PKEY_CTX_free(pEVar4);
  pEVar6 = local_30;
LAB_00101835:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pEVar6;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int run_benchmark(int param_1,code *param_2,long param_3)

{
  bool bVar1;
  BIO *bio;
  uint uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  int *piVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  long in_FS_OFFSET;
  int local_f4;
  long local_f0 [2];
  int local_e0;
  uint local_dc;
  ulong local_d8;
  long local_d0;
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_e0 = 0;
  local_dc = 0;
  local_d8 = 0;
  local_f0[0] = param_3;
  if (param_1 == 0) {
    local_f4 = (*param_2)(local_f0);
  }
  else if (param_1 < 1) {
    local_f4 = 0;
  }
  else {
    lVar10 = 0;
    iVar9 = 0;
    lVar8 = (long)param_1 * 0x3560;
    local_f4 = 0;
    do {
      while( true ) {
        local_d0 = local_f0[0] + lVar10;
        uVar2 = ASYNC_start_job(local_d0,*(undefined8 *)(local_d0 + 8),&local_e0,param_2,&local_d0,8
                               );
        if (uVar2 != 2) break;
        iVar9 = iVar9 + 1;
LAB_00101e04:
        lVar10 = lVar10 + 0x3560;
        if (lVar8 - lVar10 == 0) goto LAB_00101e14;
      }
      if ((int)uVar2 < 3) {
        if (1 < uVar2) goto LAB_00101e04;
        BIO_printf(_bio_err,"Failure in the job\n");
        ERR_print_errors(_bio_err);
        testmoderesult = 1;
LAB_00101afa:
        if (iVar9 < 1) goto LAB_00101df1;
        bVar1 = true;
        goto LAB_00101b10;
      }
      if (uVar2 != 3) goto LAB_00101e04;
      if (local_e0 == -1) goto LAB_00101afa;
      lVar10 = lVar10 + 0x3560;
      local_f4 = local_f4 + local_e0;
    } while (lVar8 - lVar10 != 0);
LAB_00101e14:
    if (0 < iVar9) {
      bVar1 = false;
LAB_00101b10:
      do {
        lVar10 = 0;
        uVar7 = 0;
        local_c8 = (undefined1  [16])0x0;
        local_b8 = (undefined1  [16])0x0;
        local_a8 = (undefined1  [16])0x0;
        local_98 = (undefined1  [16])0x0;
        local_88 = (undefined1  [16])0x0;
        local_78 = (undefined1  [16])0x0;
        local_68 = (undefined1  [16])0x0;
        local_58 = (undefined1  [16])0x0;
        do {
          iVar4 = (int)uVar7;
          if (*(long *)(local_f0[0] + lVar10) != 0) {
            iVar3 = ASYNC_WAIT_CTX_get_all_fds(((long *)(local_f0[0] + lVar10))[1],0,&local_d8);
            if ((iVar3 == 0) || (1 < local_d8)) {
              BIO_printf(_bio_err,"Too many fds in ASYNC_WAIT_CTX\n");
              ERR_print_errors(_bio_err);
              bVar1 = true;
              testmoderesult = 1;
              break;
            }
            ASYNC_WAIT_CTX_get_all_fds
                      (*(undefined8 *)(local_f0[0] + 8 + lVar10),&local_dc,&local_d8);
            lVar5 = __fdelt_chk((long)(int)local_dc);
            *(ulong *)(local_c8 + lVar5 * 8) =
                 *(ulong *)(local_c8 + lVar5 * 8) | 1L << ((byte)local_dc & 0x3f);
            if (iVar4 < (int)local_dc) {
              uVar7 = (ulong)local_dc;
            }
          }
          iVar4 = (int)uVar7;
          lVar10 = lVar10 + 0x3560;
        } while (lVar10 != lVar8);
        if (0x3ff < iVar4) {
          BIO_printf(_bio_err,
                     "Error: max_fd (%d) must be smaller than FD_SETSIZE (%d). Decrease the value of async_jobs\n"
                     ,uVar7,0x400);
          ERR_print_errors(_bio_err);
          goto LAB_00101de7;
        }
        iVar4 = select(iVar4 + 1,(fd_set *)local_c8,(fd_set *)0x0,(fd_set *)0x0,(timeval *)0x0);
        if (iVar4 != -1) {
          if (iVar4 != 0) {
            lVar10 = 0;
            do {
              while( true ) {
                if (*(long *)(local_f0[0] + lVar10) == 0) goto LAB_00101c50;
                iVar4 = ASYNC_WAIT_CTX_get_all_fds(((long *)(local_f0[0] + lVar10))[1],0,&local_d8);
                if ((iVar4 == 0) || (1 < local_d8)) {
                  BIO_printf(_bio_err,"Too many fds in ASYNC_WAIT_CTX\n");
                  ERR_print_errors(_bio_err);
                  bVar1 = true;
                  testmoderesult = 1;
                  goto joined_r0x00101ed3;
                }
                ASYNC_WAIT_CTX_get_all_fds
                          (*(undefined8 *)(local_f0[0] + 8 + lVar10),&local_dc,&local_d8);
                if ((local_d8 != 1) ||
                   (lVar5 = __fdelt_chk((long)(int)local_dc),
                   (1L << ((byte)local_dc & 0x3f) & *(ulong *)(local_c8 + lVar5 * 8)) != 0)) break;
LAB_00101c50:
                lVar10 = lVar10 + 0x3560;
                if (lVar10 == lVar8) goto joined_r0x00101ed3;
              }
              lVar5 = local_f0[0] + lVar10;
              iVar4 = ASYNC_start_job(lVar5,*(undefined8 *)(lVar5 + 8),&local_e0,param_2,lVar5,
                                      0x3560);
              bio = _bio_err;
              if (iVar4 < 2) {
                if (-1 < iVar4) {
                  iVar9 = iVar9 + -1;
                  *(undefined8 *)(local_f0[0] + lVar10) = 0;
                  BIO_printf(bio,"Failure in the job\n");
                  ERR_print_errors(_bio_err);
                  bVar1 = true;
                  testmoderesult = 1;
                }
                goto LAB_00101c50;
              }
              if (iVar4 != 3) goto LAB_00101c50;
              if (local_e0 == -1) {
                bVar1 = true;
              }
              else {
                local_f4 = local_f4 + local_e0;
              }
              iVar9 = iVar9 + -1;
              *(undefined8 *)(local_f0[0] + lVar10) = 0;
              lVar10 = lVar10 + 0x3560;
            } while (lVar10 != lVar8);
joined_r0x00101ed3:
            if (iVar9 < 1) {
              if (!bVar1) goto LAB_00101d53;
              goto LAB_00101df1;
            }
          }
          goto LAB_00101b10;
        }
        piVar6 = __errno_location();
      } while (*piVar6 == 4);
      BIO_printf(_bio_err,"Failure in the select\n");
      ERR_print_errors(_bio_err);
LAB_00101de7:
      testmoderesult = 1;
LAB_00101df1:
      local_f4 = -1;
    }
  }
LAB_00101d53:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_f4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int ECDSA_verify_loop(long *param_1)

{
  long lVar1;
  uchar *tbs;
  uchar *sig;
  size_t siglen;
  int iVar2;
  int iVar3;
  
  lVar1 = *param_1;
  tbs = *(uchar **)(lVar1 + 0x10);
  sig = *(uchar **)(lVar1 + 0x18);
  siglen = *(size_t *)(lVar1 + 0x50);
  iVar3 = run;
  if (run != 0) {
    iVar3 = 0;
    do {
      iVar2 = EVP_PKEY_verify(*(EVP_PKEY_CTX **)(lVar1 + 0x210 + (ulong)testnum * 8),sig,siglen,tbs,
                              0x14);
      if (iVar2 < 1) {
        BIO_printf(_bio_err,"ECDSA verify failure\n");
        ERR_print_errors(_bio_err);
        testmoderesult = 1;
        return -1;
      }
      iVar3 = iVar3 + 1;
    } while (((run != 0) && (testmode == 0)) && (iVar3 != 0x7fffffff));
  }
  return iVar3;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int ECDSA_sign_loop(long *param_1)

{
  long lVar1;
  uchar *tbs;
  uchar *sig;
  int iVar2;
  int iVar3;
  
  lVar1 = *param_1;
  tbs = *(uchar **)(lVar1 + 0x10);
  sig = *(uchar **)(lVar1 + 0x18);
  iVar3 = run;
  if (run != 0) {
    iVar3 = 0;
    while( true ) {
      *(undefined8 *)(lVar1 + 0x50) = *(undefined8 *)(lVar1 + 0x48);
      iVar2 = EVP_PKEY_sign(*(EVP_PKEY_CTX **)(lVar1 + 0x160 + (ulong)testnum * 8),sig,
                            (size_t *)(lVar1 + 0x50),tbs,0x14);
      if (iVar2 < 1) break;
      iVar3 = iVar3 + 1;
      if (run == 0) {
        return iVar3;
      }
      if (testmode != 0) {
        return iVar3;
      }
      if (iVar3 == 0x7fffffff) {
        return 0x7fffffff;
      }
    }
    iVar3 = -1;
    BIO_printf(_bio_err,"ECDSA sign failure\n");
    ERR_print_errors(_bio_err);
    testmoderesult = 1;
  }
  return iVar3;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int DSA_verify_loop(long *param_1)

{
  long lVar1;
  uchar *tbs;
  uchar *sig;
  size_t siglen;
  int iVar2;
  int iVar3;
  
  lVar1 = *param_1;
  tbs = *(uchar **)(lVar1 + 0x10);
  sig = *(uchar **)(lVar1 + 0x18);
  siglen = *(size_t *)(lVar1 + 0x50);
  iVar3 = run;
  if (run != 0) {
    iVar3 = 0;
    do {
      iVar2 = EVP_PKEY_verify(*(EVP_PKEY_CTX **)(lVar1 + 0x150 + (ulong)testnum * 8),sig,siglen,tbs,
                              0x14);
      if (iVar2 < 1) {
        BIO_printf(_bio_err,"DSA verify failure\n");
        ERR_print_errors(_bio_err);
        testmoderesult = 1;
        return -1;
      }
      iVar3 = iVar3 + 1;
    } while (((run != 0) && (testmode == 0)) && (iVar3 != 0x7fffffff));
  }
  return iVar3;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int DSA_sign_loop(long *param_1)

{
  long lVar1;
  uchar *tbs;
  uchar *sig;
  int iVar2;
  int iVar3;
  
  lVar1 = *param_1;
  tbs = *(uchar **)(lVar1 + 0x10);
  sig = *(uchar **)(lVar1 + 0x18);
  iVar3 = run;
  if (run != 0) {
    iVar3 = 0;
    while( true ) {
      *(undefined8 *)(lVar1 + 0x50) = *(undefined8 *)(lVar1 + 0x48);
      iVar2 = EVP_PKEY_sign(*(EVP_PKEY_CTX **)(lVar1 + 0x140 + (ulong)testnum * 8),sig,
                            (size_t *)(lVar1 + 0x50),tbs,0x14);
      if (iVar2 < 1) break;
      iVar3 = iVar3 + 1;
      if (run == 0) {
        return iVar3;
      }
      if (testmode != 0) {
        return iVar3;
      }
      if (iVar3 == 0x7fffffff) {
        return 0x7fffffff;
      }
    }
    iVar3 = -1;
    BIO_printf(_bio_err,"DSA sign failure\n");
    ERR_print_errors(_bio_err);
    testmoderesult = 1;
  }
  return iVar3;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int RSA_decrypt_loop(long *param_1)

{
  long lVar1;
  uchar *out;
  uchar *in;
  int iVar2;
  int iVar3;
  long in_FS_OFFSET;
  size_t local_48;
  long local_40;
  
  lVar1 = *param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  out = *(uchar **)(lVar1 + 0x10);
  in = *(uchar **)(lVar1 + 0x18);
  iVar3 = run;
  if (run != 0) {
    iVar3 = 0;
    while( true ) {
      local_48 = *(size_t *)(lVar1 + 0x48);
      iVar2 = EVP_PKEY_decrypt(*(EVP_PKEY_CTX **)(lVar1 + 0x108 + (ulong)testnum * 8),out,&local_48,
                               in,*(size_t *)(lVar1 + 0x58));
      if (iVar2 < 1) break;
      iVar3 = iVar3 + 1;
      if (((run == 0) || (testmode != 0)) || (iVar3 == 0x7fffffff)) goto LAB_001022e7;
    }
    iVar3 = -1;
    BIO_printf(_bio_err,"RSA decrypt failure\n");
    ERR_print_errors(_bio_err);
    testmoderesult = 1;
  }
LAB_001022e7:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar3;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int RSA_encrypt_loop(long *param_1)

{
  long lVar1;
  uchar *in;
  uchar *out;
  int iVar2;
  int iVar3;
  
  lVar1 = *param_1;
  in = *(uchar **)(lVar1 + 0x10);
  out = *(uchar **)(lVar1 + 0x18);
  iVar3 = run;
  if (run != 0) {
    iVar3 = 0;
    while( true ) {
      *(undefined8 *)(lVar1 + 0x58) = *(undefined8 *)(lVar1 + 0x48);
      iVar2 = EVP_PKEY_encrypt(*(EVP_PKEY_CTX **)(lVar1 + 0xd0 + (ulong)testnum * 8),out,
                               (size_t *)(lVar1 + 0x58),in,0x24);
      if (iVar2 < 1) break;
      iVar3 = iVar3 + 1;
      if (run == 0) {
        return iVar3;
      }
      if (testmode != 0) {
        return iVar3;
      }
      if (iVar3 == 0x7fffffff) {
        return 0x7fffffff;
      }
    }
    iVar3 = -1;
    BIO_printf(_bio_err,"RSA encrypt failure\n");
    ERR_print_errors(_bio_err);
    testmoderesult = 1;
  }
  return iVar3;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int RSA_verify_loop(long *param_1)

{
  long lVar1;
  uchar *tbs;
  uchar *sig;
  size_t siglen;
  int iVar2;
  int iVar3;
  
  lVar1 = *param_1;
  tbs = *(uchar **)(lVar1 + 0x10);
  sig = *(uchar **)(lVar1 + 0x18);
  siglen = *(size_t *)(lVar1 + 0x50);
  iVar3 = run;
  if (run != 0) {
    iVar3 = 0;
    do {
      iVar2 = EVP_PKEY_verify(*(EVP_PKEY_CTX **)(lVar1 + 0x98 + (ulong)testnum * 8),sig,siglen,tbs,
                              0x24);
      if (iVar2 < 1) {
        BIO_printf(_bio_err,"RSA verify failure\n");
        ERR_print_errors(_bio_err);
        testmoderesult = 1;
        return -1;
      }
      iVar3 = iVar3 + 1;
    } while (((run != 0) && (testmode == 0)) && (iVar3 != 0x7fffffff));
  }
  return iVar3;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int RSA_sign_loop(long *param_1)

{
  long lVar1;
  uchar *tbs;
  uchar *sig;
  int iVar2;
  int iVar3;
  
  lVar1 = *param_1;
  tbs = *(uchar **)(lVar1 + 0x10);
  sig = *(uchar **)(lVar1 + 0x18);
  iVar3 = run;
  if (run != 0) {
    iVar3 = 0;
    while( true ) {
      *(undefined8 *)(lVar1 + 0x50) = *(undefined8 *)(lVar1 + 0x48);
      iVar2 = EVP_PKEY_sign(*(EVP_PKEY_CTX **)(lVar1 + 0x60 + (ulong)testnum * 8),sig,
                            (size_t *)(lVar1 + 0x50),tbs,0x24);
      if (iVar2 < 1) break;
      iVar3 = iVar3 + 1;
      if (run == 0) {
        return iVar3;
      }
      if (testmode != 0) {
        return iVar3;
      }
      if (iVar3 == 0x7fffffff) {
        return 0x7fffffff;
      }
    }
    iVar3 = -1;
    BIO_printf(_bio_err,"RSA sign failure\n");
    ERR_print_errors(_bio_err);
    testmoderesult = 1;
  }
  return iVar3;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void print_result(double param_1,int param_2,int param_3,int param_4)

{
  char *format;
  
  if (param_4 != -1) {
    format = "%d %s ops in %.2fs\n";
    if (mr != 0) {
      format = "+R:%d:%s:%f\n";
    }
    BIO_printf(_bio_err,format);
    (&results)[(long)param_3 + (long)param_2 * 6] =
         (double)*(int *)(lengths + (long)param_3 * 4) * ((double)param_4 / param_1);
    return;
  }
  BIO_printf(_bio_err,"%s error!\n",(&names)[param_2]);
  ERR_print_errors(_bio_err);
  testmoderesult = 1;
  return;
}



void collect_signatures(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  
  uVar1 = app_get0_propq();
  uVar2 = app_get0_libctx();
  uVar3 = EVP_SIGNATURE_get0_name(param_1);
  ERR_set_mark();
  lVar4 = EVP_SIGNATURE_fetch(uVar2,uVar3,uVar1);
  ERR_pop_to_mark();
  if (lVar4 != 0) {
    EVP_SIGNATURE_free(lVar4);
    iVar5 = EVP_SIGNATURE_up_ref(param_1);
    if (iVar5 != 0) {
      iVar5 = OPENSSL_sk_push(param_2,param_1);
      if (iVar5 < 1) {
        EVP_SIGNATURE_free(param_1);
        return;
      }
    }
  }
  return;
}



void collect_kem(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  
  uVar1 = app_get0_propq();
  uVar2 = app_get0_libctx();
  uVar3 = EVP_KEM_get0_name(param_1);
  ERR_set_mark();
  lVar4 = EVP_KEM_fetch(uVar2,uVar3,uVar1);
  ERR_pop_to_mark();
  if (lVar4 != 0) {
    EVP_KEM_free(lVar4);
    iVar5 = EVP_KEM_up_ref(param_1);
    if (iVar5 != 0) {
      iVar5 = OPENSSL_sk_push(param_2,param_1);
      if (iVar5 < 1) {
        EVP_KEM_free(param_1);
        return;
      }
    }
  }
  return;
}



int EVP_MAC_loop_isra_0(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  long in_FS_OFFSET;
  undefined1 local_80 [8];
  undefined1 local_78 [72];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = *(undefined8 *)(*param_1 + 0x10);
  uVar2 = *(undefined8 *)(*param_1 + 0x4c8);
  iVar4 = run;
  if (run != 0) {
    iVar4 = 0;
    while (((iVar3 = EVP_MAC_init(uVar2,0,0,0), iVar3 != 0 &&
            (iVar3 = EVP_MAC_update(uVar2,uVar1,(long)*(int *)(lengths + (ulong)testnum * 4)),
            iVar3 != 0)) && (iVar3 = EVP_MAC_final(uVar2,local_78,local_80), iVar3 != 0))) {
      iVar4 = iVar4 + 1;
      if (((run == 0) || (testmode != 0)) || (iVar4 == 0x7fffffff)) goto LAB_00102882;
    }
    iVar4 = -1;
  }
LAB_00102882:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar4;
}



void HMAC_loop(void)

{
  EVP_MAC_loop_isra_0();
  return;
}



void CMAC_loop(void)

{
  EVP_MAC_loop_isra_0();
  return;
}



void KMAC128_loop(void)

{
  EVP_MAC_loop_isra_0();
  return;
}



void KMAC256_loop(void)

{
  EVP_MAC_loop_isra_0();
  return;
}



int EVP_Digest_loop_isra_0(undefined8 param_1,long *param_2)

{
  void *d;
  int iVar1;
  int iVar2;
  EVP_MD_CTX *ctx;
  long in_FS_OFFSET;
  EVP_MD *local_80;
  uchar local_78 [72];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_80 = (EVP_MD *)0x0;
  d = *(void **)(*param_2 + 0x10);
  iVar1 = opt_md_silent(param_1,&local_80);
  if (iVar1 == 0) {
    iVar1 = -1;
  }
  else {
    iVar1 = EVP_MD_xof(local_80);
    if (iVar1 == 0) {
      iVar1 = 0;
      if (run != 0) {
        iVar2 = (-(uint)(testmode == 0) & 0x7ffffffe) + 1;
        iVar1 = 0;
        do {
          if (iVar2 <= iVar1) {
            ctx = (EVP_MD_CTX *)0x0;
            goto LAB_001029c9;
          }
          iVar2 = EVP_Digest(d,(long)*(int *)(lengths + (ulong)testnum * 4),local_78,(uint *)0x0,
                             local_80,(ENGINE *)0x0);
          if (iVar2 == 0) goto LAB_00102ac0;
          iVar1 = iVar1 + 1;
        } while ((run != 0) && (iVar2 = 0x7fffffff, testmode == 0));
      }
      ctx = (EVP_MD_CTX *)0x0;
    }
    else {
      ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
      if (ctx == (EVP_MD_CTX *)0x0) {
LAB_00102ac0:
        ctx = (EVP_MD_CTX *)0x0;
        iVar1 = -1;
      }
      else {
        iVar1 = run;
        if (run != 0) {
          iVar1 = 0;
          iVar2 = (-(uint)(testmode == 0) & 0x7ffffffe) + 1;
          while (iVar1 < iVar2) {
            iVar2 = EVP_DigestInit_ex2(ctx,local_80,0);
            if (((iVar2 == 0) ||
                (iVar2 = EVP_DigestUpdate(ctx,d,(long)*(int *)(lengths + (ulong)testnum * 4)),
                iVar2 == 0)) || (iVar2 = EVP_DigestFinalXOF(ctx,local_78,0x40), iVar2 == 0)) {
              iVar1 = -1;
              break;
            }
            iVar1 = iVar1 + 1;
            if ((run == 0) || (iVar2 = 0x7fffffff, testmode != 0)) break;
          }
        }
      }
    }
LAB_001029c9:
    EVP_MD_free(local_80);
    EVP_MD_CTX_free(ctx);
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}



void EVP_Digest_MD2_loop(undefined8 param_1)

{
  EVP_Digest_loop_isra_0(&_LC48,param_1);
  return;
}



void EVP_Digest_MDC2_loop(undefined8 param_1)

{
  EVP_Digest_loop_isra_0(&_LC49,param_1);
  return;
}



void EVP_Digest_MD4_loop(undefined8 param_1)

{
  EVP_Digest_loop_isra_0(&_LC50,param_1);
  return;
}



void MD5_loop(undefined8 param_1)

{
  EVP_Digest_loop_isra_0(&_LC51,param_1);
  return;
}



void SHA1_loop(undefined8 param_1)

{
  EVP_Digest_loop_isra_0(&_LC52,param_1);
  return;
}



void SHA256_loop(undefined8 param_1)

{
  EVP_Digest_loop_isra_0("sha256",param_1);
  return;
}



void SHA512_loop(undefined8 param_1)

{
  EVP_Digest_loop_isra_0("sha512",param_1);
  return;
}



void WHIRLPOOL_loop(undefined8 param_1)

{
  EVP_Digest_loop_isra_0("whirlpool",param_1);
  return;
}



void EVP_Digest_RMD160_loop(undefined8 param_1)

{
  EVP_Digest_loop_isra_0("ripemd160",param_1);
  return;
}



void EVP_Digest_md_loop(undefined8 param_1)

{
  EVP_Digest_loop_isra_0(evp_md_name,param_1);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void multiblock_speed(EVP_CIPHER *param_1,uint param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  uchar *buf;
  uchar *out;
  EVP_CIPHER_CTX *ctx;
  uchar *key;
  uint *puVar3;
  uint *puVar4;
  char *pcVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  int iVar9;
  uint *puVar10;
  uint *puVar11;
  long in_FS_OFFSET;
  double dVar12;
  uint *local_e8;
  undefined8 *local_b8;
  uint local_9c;
  uchar *local_98;
  uchar *local_90;
  long local_88;
  undefined4 local_80;
  uchar local_78 [16];
  undefined1 local_68 [40];
  long local_40;
  
  lVar6 = (long)(int)param_2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == 0) {
    puVar3 = (uint *)&DAT_0011ad40;
    lVar6 = 0x20000;
    iVar9 = 5;
    local_e8 = &mblengths_list_0;
  }
  else {
    puVar3 = &local_9c;
    iVar9 = 1;
    local_e8 = puVar3;
  }
  puVar4 = local_e8;
  local_9c = param_2;
  buf = (uchar *)app_malloc(lVar6,"multiblock input buffer");
  out = (uchar *)app_malloc((long)(int)(*puVar3 + 0x400),"multiblock output buffer");
  ctx = EVP_CIPHER_CTX_new();
  if (ctx == (EVP_CIPHER_CTX *)0x0) {
    app_bail_out("failed to allocate cipher context\n");
  }
  iVar1 = EVP_EncryptInit_ex(ctx,param_1,(ENGINE *)0x0,(uchar *)0x0,local_78);
  if (iVar1 == 0) {
    app_bail_out("failed to initialise cipher context\n");
    uVar2 = EVP_CIPHER_CTX_get_key_length(ctx);
  }
  else {
    uVar2 = EVP_CIPHER_CTX_get_key_length(ctx);
  }
  if ((int)uVar2 < 0) {
    BIO_printf(_bio_err,"Impossible negative key length: %d\n",(ulong)uVar2);
  }
  else {
    key = (uchar *)app_malloc((long)(int)uVar2,"evp_cipher key");
    iVar1 = EVP_CIPHER_CTX_rand_key(ctx,key);
    if (iVar1 < 1) {
      app_bail_out("failed to generate random cipher key\n");
    }
    iVar1 = EVP_EncryptInit_ex(ctx,(EVP_CIPHER *)0x0,(ENGINE *)0x0,key,(uchar *)0x0);
    if (iVar1 == 0) {
      app_bail_out("failed to set cipher key\n");
    }
    CRYPTO_clear_free(key,(long)(int)uVar2,"apps/speed.c",0x13dc);
    iVar1 = EVP_CIPHER_CTX_ctrl(ctx,0x17,0x20,local_68);
    if (iVar1 < 1) {
      app_bail_out("failed to set AEAD key\n");
    }
    lVar6 = EVP_CIPHER_get0_name(param_1);
    if (lVar6 == 0) {
      app_bail_out("failed to get cipher name\n");
    }
    local_e8._0_4_ = 1;
    local_b8 = &results;
    puVar3 = puVar4 + iVar9;
    puVar7 = &results;
    puVar10 = puVar4;
    iVar1 = mr;
    do {
      pcVar5 = "+DT:%s:%d:%d\n";
      uVar2 = *param_3;
      if (iVar1 == 0) {
        pcVar5 = "Doing %s ops for %ds on %d size blocks: ";
      }
      BIO_printf(_bio_err,pcVar5,lVar6,(ulong)uVar2,(ulong)*puVar10);
      BIO_ctrl(_bio_err,0xb,0,(void *)0x0);
      run = 1;
      alarm(uVar2);
      app_tminterval(0,usertime);
      uVar2 = run;
      if (run != 0) {
        uVar2 = 0;
        do {
          while( true ) {
            if ((run == 0) || ((int)((-(uint)(testmode == 0) & 0x7ffffffe) + 1) <= (int)uVar2))
            goto LAB_00102f95;
            lVar8 = (long)(int)*puVar10;
            aad._0_8_ = 0;
            aad._8_4_ = _LC69;
            aad[0xc] = 0;
            local_98 = (uchar *)0x0;
            local_90 = aad;
            local_80 = 8;
            local_88 = lVar8;
            iVar1 = EVP_CIPHER_CTX_ctrl(ctx,0x19,0x20,&local_98);
            if (0 < iVar1) break;
            iVar1 = RAND_bytes(buf,0x10);
            if (iVar1 < 1) {
              app_bail_out("error setting random bytes\n");
            }
            lVar8 = lVar8 + 0x10;
            uVar2 = uVar2 + 1;
            aad[0xb] = (undefined1)((ulong)lVar8 >> 8);
            aad[0xc] = (undefined1)lVar8;
            iVar1 = EVP_CIPHER_CTX_ctrl(ctx,0x16,0xd,aad);
            local_e8._0_4_ = EVP_Cipher(ctx,out,buf,iVar1 + (int)lVar8);
            if (run == 0) goto LAB_00102f95;
          }
          uVar2 = uVar2 + 1;
          local_98 = out;
          local_90 = buf;
          local_88 = lVar8;
          EVP_CIPHER_CTX_ctrl(ctx,0x1a,0x20,&local_98);
        } while (run != 0);
      }
LAB_00102f95:
      dVar12 = (double)app_tminterval(1,usertime);
      alarm(0);
      pcVar5 = "%d %s ops in %.2fs\n";
      if (mr != 0) {
        pcVar5 = "+R:%d:%s:%f\n";
      }
      BIO_printf(_bio_err,pcVar5,dVar12,(ulong)uVar2,&_LC71);
      if (((int)local_e8 < 1) && (mr == 0)) {
        BIO_printf(_bio_err,"Error performing cipher op\n");
      }
      iVar1 = mr;
      puVar11 = puVar10 + 1;
      puVar7[0x96] = ((double)(int)uVar2 / dVar12) * (double)(int)*puVar10;
      puVar7 = puVar7 + 1;
      puVar10 = puVar11;
    } while (puVar11 != puVar3);
    if (iVar1 == 0) {
      fwrite("The \'numbers\' are in 1000s of bytes per second processed.\n",1,0x3a,_stdout);
      fwrite("type                    ",1,0x18,_stdout);
      do {
        uVar2 = *puVar4;
        puVar4 = puVar4 + 1;
        __fprintf_chk(_stdout,2,"%7d bytes",uVar2);
      } while (puVar4 != puVar3);
      fputc(10,_stdout);
      __fprintf_chk(_stdout,2,"%-24s",lVar6);
      do {
        if (__LC81 < (double)local_b8[0x96]) {
          __fprintf_chk((double)local_b8[0x96] / __LC82,_stdout,2," %11.2fk");
        }
        else {
          __fprintf_chk(_stdout,2," %11.2f ");
        }
        local_b8 = local_b8 + 1;
      } while (&results + iVar9 != local_b8);
    }
    else {
      fwrite(&_LC73,1,2,_stdout);
      do {
        uVar2 = *puVar4;
        puVar4 = puVar4 + 1;
        __fprintf_chk(_stdout,2,&_LC74,uVar2);
      } while (puVar4 != puVar3);
      fputc(10,_stdout);
      __fprintf_chk(_stdout,2,"+F:%d:%s",0x19,lVar6);
      do {
        puVar7 = local_b8 + 0x96;
        local_b8 = local_b8 + 1;
        __fprintf_chk(*puVar7,_stdout,2,":%.2f");
      } while (local_b8 != &results + iVar9);
    }
    fputc(10,_stdout);
  }
  CRYPTO_free(buf);
  CRYPTO_free(out);
  EVP_CIPHER_CTX_free(ctx);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 do_multi(int param_1,int param_2)

{
  byte bVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  __pid_t _Var6;
  void *ptr;
  FILE *__stream;
  int *piVar7;
  uint *puVar8;
  undefined4 uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  byte *pbVar13;
  byte bVar14;
  uint uVar15;
  byte *pbVar16;
  long lVar17;
  char *pcVar18;
  undefined8 *puVar19;
  double *pdVar20;
  ulong uVar21;
  long in_FS_OFFSET;
  bool bVar22;
  byte bVar23;
  double dVar24;
  ulong local_5a0;
  byte *local_558;
  int local_550;
  int local_54c;
  char local_548;
  undefined1 local_547 [247];
  undefined8 local_450;
  undefined4 local_448;
  byte local_444;
  byte local_443 [1027];
  long local_40;
  
  local_448 = CONCAT13(local_448._3_1_,CONCAT21(local_448._1_2_,(char)local_448));
  bVar23 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ptr = (void *)app_malloc((long)param_1 * 4,"fd buffer for do_multi");
  if (param_1 < 1) {
    CRYPTO_free(ptr);
  }
  else {
    uVar11 = 0;
    do {
      uVar21 = uVar11;
      iVar5 = pipe(&local_550);
      if (iVar5 == -1) {
        pcVar18 = "pipe failure\n";
LAB_001057e6:
        BIO_printf(_bio_err,pcVar18);
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      fflush(_stdout);
      BIO_ctrl(_bio_err,0xb,0,(void *)0x0);
      _Var6 = fork();
      if (_Var6 == 0) {
        close(local_550);
        close(1);
        iVar5 = dup(local_54c);
        if (iVar5 == -1) {
          pcVar18 = "dup failed\n";
          goto LAB_001057e6;
        }
        close(local_54c);
        mr = 1;
        usertime = 0;
        CRYPTO_free(ptr);
        uVar9 = 0;
        goto LAB_001034f4;
      }
      close(local_54c);
      *(int *)((long)ptr + uVar21 * 4) = local_550;
      __printf_chk(2,"Forked child %d\n",uVar21 & 0xffffffff);
      uVar11 = uVar21 + 1;
    } while ((long)param_1 != uVar21 + 1);
    local_5a0 = 0;
    do {
      __stream = fdopen(*(int *)((long)ptr + local_5a0 * 4),"r");
      if (__stream == (FILE *)0x0) {
        puVar8 = (uint *)__errno_location();
        BIO_printf(_bio_err,"fdopen failure with 0x%x\n",(ulong)*puVar8);
        CRYPTO_free(ptr);
        goto LAB_001053f5;
      }
      while (pcVar18 = fgets((char *)&local_448,0x400,__stream), pcVar18 != (char *)0x0) {
        pcVar18 = strchr((char *)&local_448,10);
        if (pcVar18 != (char *)0x0) {
          *pcVar18 = '\0';
        }
        if ((char)local_448 == '+') {
          __printf_chk(2,"Got: %s from %d\n",&local_448,(int)local_5a0);
          if (((short)local_448 == 0x462b) && (local_448._2_1_ == ':')) {
            local_547._0_8_ = 0;
            local_450 = 0;
            pbVar16 = &sep_1;
            iVar5 = (int)local_547;
            puVar19 = (undefined8 *)(local_547 + 7);
            for (uVar11 = (ulong)((iVar5 - (int)(local_547 + 7)) + 0xffU >> 3); uVar11 != 0;
                uVar11 = uVar11 - 1) {
              *puVar19 = 0;
              puVar19 = puVar19 + (ulong)bVar23 * -2 + 1;
            }
            local_548 = '\x01';
            bVar14 = sep_1;
            while (bVar14 != 0) {
              pbVar16 = pbVar16 + 1;
              (&local_548)[bVar14] = '\x01';
              bVar14 = *pbVar16;
            }
            local_448._3_1_ = (byte)((uint)local_448 >> 0x18);
            pbVar16 = (byte *)((long)&local_448 + 3);
            if ((&local_548)[local_448._3_1_] == '\0') {
              do {
                local_448._3_1_ = pbVar16[1];
                pbVar16 = pbVar16 + 1;
              } while ((&local_548)[local_448._3_1_] == '\0');
            }
            else {
              pbVar16 = (byte *)((long)&local_448 + 3);
            }
            if (local_448._3_1_ != 0) {
              *pbVar16 = 0;
              pbVar16 = pbVar16 + 1;
            }
            local_558 = (byte *)0x0;
            piVar7 = __errno_location();
            *piVar7 = 0;
            uVar11 = strtol((char *)((long)&local_448 + 3),(char **)&local_558,10);
            if (((*piVar7 == 0) && (local_558 != (byte *)((long)&local_448 + 3))) &&
               ((*local_558 == 0 && (uVar11 < 0x1f)))) {
              local_547._0_8_ = 0;
              local_450 = 0;
              puVar19 = (undefined8 *)(local_547 + 7);
              for (uVar12 = (ulong)((iVar5 - (int)(local_547 + 7)) + 0xffU >> 3); uVar12 != 0;
                  uVar12 = uVar12 - 1) {
                *puVar19 = 0;
                puVar19 = puVar19 + (ulong)bVar23 * -2 + 1;
              }
              local_548 = '\x01';
              pbVar13 = &sep_1;
              uVar12 = (ulong)sep_1;
              uVar10 = uVar12;
              if (sep_1 == 0) goto LAB_0010382c;
              do {
                pbVar13 = pbVar13 + 1;
                (&local_548)[uVar10] = '\x01';
                uVar10 = (ulong)*pbVar13;
              } while (*pbVar13 != 0);
              bVar14 = *pbVar16;
              cVar2 = (&local_548)[bVar14];
              while (cVar2 == '\0') {
                pbVar16 = pbVar16 + 1;
LAB_0010382c:
                bVar14 = *pbVar16;
                cVar2 = (&local_548)[bVar14];
              }
              if (bVar14 != 0) {
                *pbVar16 = 0;
                pbVar16 = pbVar16 + 1;
              }
              if (0 < param_2) {
                pdVar20 = (double *)(&results + uVar11 * 6);
                while( true ) {
                  local_547._0_8_ = 0;
                  local_450 = 0;
                  puVar19 = (undefined8 *)(local_547 + 7);
                  for (uVar10 = (ulong)((iVar5 - (int)(local_547 + 7)) + 0xffU >> 3); uVar10 != 0;
                      uVar10 = uVar10 - 1) {
                    *puVar19 = 0;
                    puVar19 = puVar19 + (ulong)bVar23 * -2 + 1;
                  }
                  local_548 = '\x01';
                  pbVar13 = &sep_1;
                  bVar14 = (byte)uVar12;
                  while (bVar14 != 0) {
                    pbVar13 = pbVar13 + 1;
                    (&local_548)[uVar12] = '\x01';
                    bVar14 = *pbVar13;
                    uVar12 = (ulong)bVar14;
                  }
                  bVar14 = *pbVar16;
                  cVar2 = (&local_548)[bVar14];
                  pbVar13 = pbVar16;
                  while (cVar2 == '\0') {
                    bVar14 = pbVar13[1];
                    pbVar13 = pbVar13 + 1;
                    cVar2 = (&local_548)[bVar14];
                  }
                  if (bVar14 != 0) {
                    *pbVar13 = 0;
                    pbVar13 = pbVar13 + 1;
                  }
                  dVar24 = strtod((char *)pbVar16,(char **)0x0);
                  *pdVar20 = dVar24 + *pdVar20;
                  if ((double *)(&results + (long)param_2 + uVar11 * 6) == pdVar20 + 1) break;
                  uVar12 = (ulong)sep_1;
                  pbVar16 = pbVar13;
                  pdVar20 = pdVar20 + 1;
                }
              }
            }
          }
          else if (local_448 == 0x3a32462b) {
            local_547._0_8_ = 0;
            local_450 = 0;
            pbVar16 = &sep_1;
            iVar5 = (int)local_547;
            puVar19 = (undefined8 *)(local_547 + 7);
            for (uVar11 = (ulong)((iVar5 - (int)(local_547 + 7)) + 0xffU >> 3); uVar11 != 0;
                uVar11 = uVar11 - 1) {
              *puVar19 = 0;
              puVar19 = puVar19 + (ulong)bVar23 * -2 + 1;
            }
            local_548 = '\x01';
            bVar14 = sep_1;
            while (bVar14 != 0) {
              pbVar16 = pbVar16 + 1;
              (&local_548)[bVar14] = '\x01';
              bVar14 = *pbVar16;
            }
            cVar2 = (&local_548)[local_444];
            pbVar16 = &local_444;
            bVar14 = local_444;
            while (cVar2 == '\0') {
              bVar14 = pbVar16[1];
              pbVar16 = pbVar16 + 1;
              cVar2 = (&local_548)[bVar14];
            }
            if (bVar14 != 0) {
              *pbVar16 = 0;
              pbVar16 = pbVar16 + 1;
            }
            local_558 = (byte *)0x0;
            piVar7 = __errno_location();
            *piVar7 = 0;
            uVar11 = strtol((char *)&local_444,(char **)&local_558,10);
            if ((((*piVar7 == 0) && (local_558 != &local_444)) && (*local_558 == 0)) && (uVar11 < 7)
               ) {
              local_547._0_8_ = 0;
              local_450 = 0;
              puVar19 = (undefined8 *)(local_547 + 7);
              for (uVar12 = (ulong)((iVar5 - (int)(local_547 + 7)) + 0xffU >> 3); bVar14 = sep_1,
                  uVar12 != 0; uVar12 = uVar12 - 1) {
                *puVar19 = 0;
                puVar19 = puVar19 + (ulong)bVar23 * -2 + 1;
              }
              local_548 = '\x01';
              pbVar13 = &sep_1;
              uVar12 = (ulong)sep_1;
              uVar10 = uVar12;
              if (sep_1 == 0) goto LAB_00103b0c;
              do {
                pbVar13 = pbVar13 + 1;
                (&local_548)[uVar10] = '\x01';
                uVar10 = (ulong)*pbVar13;
              } while (*pbVar13 != 0);
              bVar1 = *pbVar16;
              cVar2 = (&local_548)[bVar1];
              while (cVar2 == '\0') {
                pbVar16 = pbVar16 + 1;
LAB_00103b0c:
                bVar1 = *pbVar16;
                cVar2 = (&local_548)[bVar1];
              }
              if (bVar1 != 0) {
                *pbVar16 = 0;
                pbVar16 = pbVar16 + 1;
              }
              local_547._0_8_ = 0;
              local_450 = 0;
              puVar19 = (undefined8 *)(local_547 + 7);
              for (uVar10 = (ulong)((iVar5 - (int)(local_547 + 7)) + 0xffU >> 3); uVar10 != 0;
                  uVar10 = uVar10 - 1) {
                *puVar19 = 0;
                puVar19 = puVar19 + (ulong)bVar23 * -2 + 1;
              }
              local_548 = '\x01';
              pbVar13 = &sep_1;
              while (bVar14 != 0) {
                pbVar13 = pbVar13 + 1;
                (&local_548)[uVar12] = '\x01';
                bVar14 = *pbVar13;
                uVar12 = (ulong)bVar14;
              }
              bVar14 = *pbVar16;
              cVar2 = (&local_548)[bVar14];
              pbVar13 = pbVar16;
              while (cVar2 == '\0') {
                bVar14 = pbVar13[1];
                pbVar13 = pbVar13 + 1;
                cVar2 = (&local_548)[bVar14];
              }
              if (bVar14 != 0) {
                *pbVar13 = 0;
                pbVar13 = pbVar13 + 1;
              }
              dVar24 = strtod((char *)pbVar16,(char **)0x0);
              lVar17 = (long)(int)uVar11;
              (&rsa_results)[lVar17 * 4] = dVar24 + (double)(&rsa_results)[lVar17 * 4];
              local_547._0_8_ = 0;
              local_450 = 0;
              puVar19 = (undefined8 *)(local_547 + 7);
              for (uVar11 = (ulong)((iVar5 - (int)(local_547 + 7)) + 0xffU >> 3); uVar11 != 0;
                  uVar11 = uVar11 - 1) {
                *puVar19 = 0;
                puVar19 = puVar19 + (ulong)bVar23 * -2 + 1;
              }
              local_548 = '\x01';
              pbVar16 = &sep_1;
              bVar14 = sep_1;
              while (bVar14 != 0) {
                pbVar16 = pbVar16 + 1;
                (&local_548)[bVar14] = '\x01';
                bVar14 = *pbVar16;
              }
              bVar14 = *pbVar13;
              cVar2 = (&local_548)[bVar14];
              pbVar16 = pbVar13;
              while (cVar2 == '\0') {
                bVar14 = pbVar16[1];
                pbVar16 = pbVar16 + 1;
                cVar2 = (&local_548)[bVar14];
              }
              if (bVar14 != 0) {
                *pbVar16 = 0;
                pbVar16 = pbVar16 + 1;
              }
              dVar24 = strtod((char *)pbVar13,(char **)0x0);
              pbVar13 = &sep_1;
              (&DAT_00117b48)[lVar17 * 4] = dVar24 + (double)(&DAT_00117b48)[lVar17 * 4];
              local_547._0_8_ = 0;
              local_450 = 0;
              puVar19 = (undefined8 *)(local_547 + 7);
              for (uVar11 = (ulong)((iVar5 - (int)(local_547 + 7)) + 0xffU >> 3); uVar11 != 0;
                  uVar11 = uVar11 - 1) {
                *puVar19 = 0;
                puVar19 = puVar19 + (ulong)bVar23 * -2 + 1;
              }
              local_548 = '\x01';
              bVar14 = sep_1;
              while (bVar14 != 0) {
                pbVar13 = pbVar13 + 1;
                (&local_548)[bVar14] = '\x01';
                bVar14 = *pbVar13;
              }
              bVar14 = *pbVar16;
              cVar2 = (&local_548)[bVar14];
              pbVar13 = pbVar16;
              while (cVar2 == '\0') {
                bVar14 = pbVar13[1];
                pbVar13 = pbVar13 + 1;
                cVar2 = (&local_548)[bVar14];
              }
              if (bVar14 != 0) {
                *pbVar13 = 0;
                pbVar13 = pbVar13 + 1;
              }
              dVar24 = strtod((char *)pbVar16,(char **)0x0);
              (&DAT_00117b50)[lVar17 * 4] = dVar24 + (double)(&DAT_00117b50)[lVar17 * 4];
              local_547._0_8_ = 0;
              local_450 = 0;
              puVar19 = (undefined8 *)(local_547 + 7);
              for (uVar11 = (ulong)((iVar5 - (int)(local_547 + 7)) + 0xffU >> 3); uVar11 != 0;
                  uVar11 = uVar11 - 1) {
                *puVar19 = 0;
                puVar19 = puVar19 + (ulong)bVar23 * -2 + 1;
              }
              local_548 = '\x01';
              pbVar16 = &sep_1;
              bVar14 = sep_1;
              uVar3 = local_448._3_1_;
              while (bVar14 != 0) {
                local_448 = CONCAT13(uVar3,(undefined3)local_448);
                pbVar16 = pbVar16 + 1;
                (&local_548)[bVar14] = '\x01';
                uVar3 = local_448._3_1_;
                bVar14 = *pbVar16;
              }
              local_448 = CONCAT13(uVar3,(undefined3)local_448);
              bVar14 = *pbVar13;
              cVar2 = (&local_548)[bVar14];
              pbVar16 = pbVar13;
              while (cVar2 == '\0') {
                bVar14 = pbVar16[1];
                pbVar16 = pbVar16 + 1;
                cVar2 = (&local_548)[bVar14];
              }
              if (bVar14 != 0) {
                *pbVar16 = 0;
              }
              dVar24 = strtod((char *)pbVar13,(char **)0x0);
              (&DAT_00117b58)[lVar17 * 4] = dVar24 + (double)(&DAT_00117b58)[lVar17 * 4];
            }
          }
          else if (local_448 == 0x3a33462b) {
            local_547._0_8_ = 0;
            local_450 = 0;
            pbVar16 = &sep_1;
            iVar5 = (int)local_547;
            uVar11 = (ulong)((iVar5 - (int)(local_547 + 7)) + 0xffU >> 3);
            puVar19 = (undefined8 *)(local_547 + 7);
            while( true ) {
              if (uVar11 == 0) break;
              uVar11 = uVar11 - 1;
              *puVar19 = 0;
              puVar19 = puVar19 + (ulong)bVar23 * -2 + 1;
            }
            local_548 = '\x01';
            bVar14 = sep_1;
            uVar3 = local_448._3_1_;
            while (bVar14 != 0) {
              local_448 = CONCAT13(uVar3,(undefined3)local_448);
              pbVar16 = pbVar16 + 1;
              (&local_548)[bVar14] = '\x01';
              uVar3 = local_448._3_1_;
              bVar14 = *pbVar16;
            }
            local_448 = CONCAT13(uVar3,(undefined3)local_448);
            cVar2 = (&local_548)[local_444];
            pbVar16 = &local_444;
            bVar14 = local_444;
            while (cVar2 == '\0') {
              bVar14 = pbVar16[1];
              pbVar16 = pbVar16 + 1;
              cVar2 = (&local_548)[bVar14];
            }
            if (bVar14 != 0) {
              *pbVar16 = 0;
              pbVar16 = pbVar16 + 1;
            }
            local_558 = (byte *)0x0;
            piVar7 = __errno_location();
            *piVar7 = 0;
            uVar11 = strtol((char *)&local_444,(char **)&local_558,10);
            if (((*piVar7 == 0) && (local_558 != &local_444)) && ((*local_558 == 0 && (uVar11 < 2)))
               ) {
              local_547._0_8_ = 0;
              local_450 = 0;
              puVar19 = (undefined8 *)(local_547 + 7);
              for (uVar12 = (ulong)((iVar5 - (int)(local_547 + 7)) + 0xffU >> 3); bVar14 = sep_1,
                  uVar12 != 0; uVar12 = uVar12 - 1) {
                *puVar19 = 0;
                puVar19 = puVar19 + (ulong)bVar23 * -2 + 1;
              }
              local_548 = '\x01';
              pbVar13 = &sep_1;
              uVar12 = (ulong)sep_1;
              uVar10 = uVar12;
              if (sep_1 == 0) goto LAB_00103f94;
              do {
                pbVar13 = pbVar13 + 1;
                (&local_548)[uVar10] = '\x01';
                uVar10 = (ulong)*pbVar13;
              } while (*pbVar13 != 0);
              bVar1 = *pbVar16;
              cVar2 = (&local_548)[bVar1];
              iVar4 = local_448;
              while (cVar2 == '\0') {
                pbVar16 = pbVar16 + 1;
                local_448 = iVar4;
LAB_00103f94:
                bVar1 = *pbVar16;
                iVar4 = local_448;
                cVar2 = (&local_548)[bVar1];
              }
              local_448._3_1_ = (byte)((uint)iVar4 >> 0x18);
              local_448._0_1_ = (char)iVar4;
              if (bVar1 != 0) {
                *pbVar16 = 0;
                pbVar16 = pbVar16 + 1;
              }
              local_547._0_8_ = 0;
              local_450 = 0;
              puVar19 = (undefined8 *)(local_547 + 7);
              for (uVar10 = (ulong)((iVar5 - (int)(local_547 + 7)) + 0xffU >> 3); uVar10 != 0;
                  uVar10 = uVar10 - 1) {
                *puVar19 = 0;
                puVar19 = puVar19 + (ulong)bVar23 * -2 + 1;
              }
              local_548 = '\x01';
              pbVar13 = &sep_1;
              uVar3 = local_448._3_1_;
              while (local_448 = iVar4, bVar14 != 0) {
                local_448 = CONCAT13(uVar3,(undefined3)local_448);
                pbVar13 = pbVar13 + 1;
                (&local_548)[uVar12] = '\x01';
                bVar14 = *pbVar13;
                uVar12 = (ulong)bVar14;
                uVar3 = local_448._3_1_;
                iVar4 = local_448;
              }
              local_448 = CONCAT13(uVar3,(undefined3)local_448);
              bVar14 = *pbVar16;
              cVar2 = (&local_548)[bVar14];
              pbVar13 = pbVar16;
              while (cVar2 == '\0') {
                bVar14 = pbVar13[1];
                pbVar13 = pbVar13 + 1;
                cVar2 = (&local_548)[bVar14];
              }
              if (bVar14 != 0) {
                *pbVar13 = 0;
                pbVar13 = pbVar13 + 1;
              }
              dVar24 = strtod((char *)pbVar16,(char **)0x0);
              lVar17 = (long)(int)uVar11;
              (&dsa_results)[lVar17 * 2] = dVar24 + (double)(&dsa_results)[lVar17 * 2];
              local_547._0_8_ = 0;
              local_450 = 0;
              puVar19 = (undefined8 *)(local_547 + 7);
              for (uVar11 = (ulong)((iVar5 - (int)(local_547 + 7)) + 0xffU >> 3); uVar11 != 0;
                  uVar11 = uVar11 - 1) {
                *puVar19 = 0;
                puVar19 = puVar19 + (ulong)bVar23 * -2 + 1;
              }
              local_548 = '\x01';
              pbVar16 = &sep_1;
              bVar14 = sep_1;
              uVar3 = local_448._3_1_;
              while (bVar14 != 0) {
                local_448 = CONCAT13(uVar3,(undefined3)local_448);
                pbVar16 = pbVar16 + 1;
                (&local_548)[bVar14] = '\x01';
                uVar3 = local_448._3_1_;
                bVar14 = *pbVar16;
              }
              local_448 = CONCAT13(uVar3,(undefined3)local_448);
              bVar14 = *pbVar13;
              cVar2 = (&local_548)[bVar14];
              pbVar16 = pbVar13;
              while (cVar2 == '\0') {
                bVar14 = pbVar16[1];
                pbVar16 = pbVar16 + 1;
                cVar2 = (&local_548)[bVar14];
              }
              if (bVar14 != 0) {
                *pbVar16 = 0;
              }
              dVar24 = strtod((char *)pbVar13,(char **)0x0);
              (&DAT_00117c28)[lVar17 * 2] = dVar24 + (double)(&DAT_00117c28)[lVar17 * 2];
            }
          }
          else if (local_448 == 0x3a34462b) {
            local_547._0_8_ = 0;
            local_450 = 0;
            pbVar16 = &sep_1;
            iVar5 = (int)local_547;
            uVar11 = (ulong)((iVar5 - (int)(local_547 + 7)) + 0xffU >> 3);
            puVar19 = (undefined8 *)(local_547 + 7);
            while( true ) {
              if (uVar11 == 0) break;
              uVar11 = uVar11 - 1;
              *puVar19 = 0;
              puVar19 = puVar19 + (ulong)bVar23 * -2 + 1;
            }
            local_548 = '\x01';
            bVar14 = sep_1;
            uVar3 = local_448._3_1_;
            while (bVar14 != 0) {
              local_448 = CONCAT13(uVar3,(undefined3)local_448);
              pbVar16 = pbVar16 + 1;
              (&local_548)[bVar14] = '\x01';
              uVar3 = local_448._3_1_;
              bVar14 = *pbVar16;
            }
            local_448 = CONCAT13(uVar3,(undefined3)local_448);
            cVar2 = (&local_548)[local_444];
            pbVar16 = &local_444;
            bVar14 = local_444;
            while (cVar2 == '\0') {
              bVar14 = pbVar16[1];
              pbVar16 = pbVar16 + 1;
              cVar2 = (&local_548)[bVar14];
            }
            if (bVar14 != 0) {
              *pbVar16 = 0;
              pbVar16 = pbVar16 + 1;
            }
            local_558 = (byte *)0x0;
            piVar7 = __errno_location();
            *piVar7 = 0;
            uVar11 = strtol((char *)&local_444,(char **)&local_558,10);
            if (((*piVar7 == 0) && (local_558 != &local_444)) &&
               ((*local_558 == 0 && (uVar11 < 0x16)))) {
              local_547._0_8_ = 0;
              local_450 = 0;
              puVar19 = (undefined8 *)(local_547 + 7);
              for (uVar12 = (ulong)((iVar5 - (int)(local_547 + 7)) + 0xffU >> 3); bVar14 = sep_1,
                  uVar12 != 0; uVar12 = uVar12 - 1) {
                *puVar19 = 0;
                puVar19 = puVar19 + (ulong)bVar23 * -2 + 1;
              }
              local_548 = '\x01';
              pbVar13 = &sep_1;
              uVar12 = (ulong)sep_1;
              uVar10 = uVar12;
              if (sep_1 == 0) goto LAB_001042b4;
              do {
                pbVar13 = pbVar13 + 1;
                (&local_548)[uVar10] = '\x01';
                uVar10 = (ulong)*pbVar13;
              } while (*pbVar13 != 0);
              bVar1 = *pbVar16;
              cVar2 = (&local_548)[bVar1];
              iVar4 = local_448;
              while (cVar2 == '\0') {
                pbVar16 = pbVar16 + 1;
                local_448 = iVar4;
LAB_001042b4:
                bVar1 = *pbVar16;
                iVar4 = local_448;
                cVar2 = (&local_548)[bVar1];
              }
              local_448._3_1_ = (byte)((uint)iVar4 >> 0x18);
              local_448._0_1_ = (char)iVar4;
              if (bVar1 != 0) {
                *pbVar16 = 0;
                pbVar16 = pbVar16 + 1;
              }
              local_547._0_8_ = 0;
              local_450 = 0;
              puVar19 = (undefined8 *)(local_547 + 7);
              for (uVar10 = (ulong)((iVar5 - (int)(local_547 + 7)) + 0xffU >> 3); uVar10 != 0;
                  uVar10 = uVar10 - 1) {
                *puVar19 = 0;
                puVar19 = puVar19 + (ulong)bVar23 * -2 + 1;
              }
              local_548 = '\x01';
              pbVar13 = &sep_1;
              uVar3 = local_448._3_1_;
              while (local_448 = iVar4, bVar14 != 0) {
                local_448 = CONCAT13(uVar3,(undefined3)local_448);
                pbVar13 = pbVar13 + 1;
                (&local_548)[uVar12] = '\x01';
                bVar14 = *pbVar13;
                uVar12 = (ulong)bVar14;
                uVar3 = local_448._3_1_;
                iVar4 = local_448;
              }
              local_448 = CONCAT13(uVar3,(undefined3)local_448);
              bVar14 = *pbVar16;
              cVar2 = (&local_548)[bVar14];
              pbVar13 = pbVar16;
              while (cVar2 == '\0') {
                bVar14 = pbVar13[1];
                pbVar13 = pbVar13 + 1;
                cVar2 = (&local_548)[bVar14];
              }
              if (bVar14 != 0) {
                *pbVar13 = 0;
                pbVar13 = pbVar13 + 1;
              }
              dVar24 = strtod((char *)pbVar16,(char **)0x0);
              lVar17 = (long)(int)uVar11;
              (&ecdsa_results)[lVar17 * 2] = dVar24 + (double)(&ecdsa_results)[lVar17 * 2];
              local_547._0_8_ = 0;
              local_450 = 0;
              puVar19 = (undefined8 *)(local_547 + 7);
              for (uVar11 = (ulong)((iVar5 - (int)(local_547 + 7)) + 0xffU >> 3); uVar11 != 0;
                  uVar11 = uVar11 - 1) {
                *puVar19 = 0;
                puVar19 = puVar19 + (ulong)bVar23 * -2 + 1;
              }
              local_548 = '\x01';
              pbVar16 = &sep_1;
              bVar14 = sep_1;
              uVar3 = local_448._3_1_;
              while (bVar14 != 0) {
                local_448 = CONCAT13(uVar3,(undefined3)local_448);
                pbVar16 = pbVar16 + 1;
                (&local_548)[bVar14] = '\x01';
                uVar3 = local_448._3_1_;
                bVar14 = *pbVar16;
              }
              local_448 = CONCAT13(uVar3,(undefined3)local_448);
              bVar14 = *pbVar13;
              cVar2 = (&local_548)[bVar14];
              pbVar16 = pbVar13;
              while (cVar2 == '\0') {
                bVar14 = pbVar16[1];
                pbVar16 = pbVar16 + 1;
                cVar2 = (&local_548)[bVar14];
              }
              if (bVar14 != 0) {
                *pbVar16 = 0;
              }
              dVar24 = strtod((char *)pbVar13,(char **)0x0);
              (&DAT_001178e8)[lVar17 * 2] = dVar24 + (double)(&DAT_001178e8)[lVar17 * 2];
            }
          }
          else if (local_448 == 0x3a35462b) {
            local_547._0_8_ = 0;
            local_450 = 0;
            pbVar16 = &sep_1;
            iVar5 = (int)local_547;
            uVar11 = (ulong)((iVar5 - (int)(local_547 + 7)) + 0xffU >> 3);
            puVar19 = (undefined8 *)(local_547 + 7);
            while( true ) {
              if (uVar11 == 0) break;
              uVar11 = uVar11 - 1;
              *puVar19 = 0;
              puVar19 = puVar19 + (ulong)bVar23 * -2 + 1;
            }
            local_548 = '\x01';
            bVar14 = sep_1;
            uVar3 = local_448._3_1_;
            while (bVar14 != 0) {
              local_448 = CONCAT13(uVar3,(undefined3)local_448);
              pbVar16 = pbVar16 + 1;
              (&local_548)[bVar14] = '\x01';
              uVar3 = local_448._3_1_;
              bVar14 = *pbVar16;
            }
            local_448 = CONCAT13(uVar3,(undefined3)local_448);
            cVar2 = (&local_548)[local_444];
            pbVar16 = &local_444;
            bVar14 = local_444;
            while (cVar2 == '\0') {
              bVar14 = pbVar16[1];
              pbVar16 = pbVar16 + 1;
              cVar2 = (&local_548)[bVar14];
            }
            if (bVar14 != 0) {
              *pbVar16 = 0;
              pbVar16 = pbVar16 + 1;
            }
            local_558 = (byte *)0x0;
            piVar7 = __errno_location();
            *piVar7 = 0;
            uVar11 = strtol((char *)&local_444,(char **)&local_558,10);
            if ((((*piVar7 == 0) && (local_558 != &local_444)) && (*local_558 == 0)) &&
               (uVar11 < 0x18)) {
              local_547._0_8_ = 0;
              local_450 = 0;
              puVar19 = (undefined8 *)(local_547 + 7);
              for (uVar12 = (ulong)((iVar5 - (int)(local_547 + 7)) + 0xffU >> 3); bVar14 = sep_1,
                  uVar12 != 0; uVar12 = uVar12 - 1) {
                *puVar19 = 0;
                puVar19 = puVar19 + (ulong)bVar23 * -2 + 1;
              }
              local_548 = '\x01';
              pbVar13 = &sep_1;
              uVar12 = (ulong)sep_1;
              uVar10 = uVar12;
              if (sep_1 == 0) goto LAB_001045d4;
              do {
                pbVar13 = pbVar13 + 1;
                (&local_548)[uVar10] = '\x01';
                uVar10 = (ulong)*pbVar13;
              } while (*pbVar13 != 0);
              bVar1 = *pbVar16;
              cVar2 = (&local_548)[bVar1];
              iVar4 = local_448;
              while (cVar2 == '\0') {
                pbVar16 = pbVar16 + 1;
                local_448 = iVar4;
LAB_001045d4:
                bVar1 = *pbVar16;
                iVar4 = local_448;
                cVar2 = (&local_548)[bVar1];
              }
              local_448._3_1_ = (byte)((uint)iVar4 >> 0x18);
              local_448._0_1_ = (char)iVar4;
              if (bVar1 != 0) {
                *pbVar16 = 0;
                pbVar16 = pbVar16 + 1;
              }
              local_547._0_8_ = 0;
              local_450 = 0;
              puVar19 = (undefined8 *)(local_547 + 7);
              for (uVar10 = (ulong)((iVar5 - (int)(local_547 + 7)) + 0xffU >> 3); uVar10 != 0;
                  uVar10 = uVar10 - 1) {
                *puVar19 = 0;
                puVar19 = puVar19 + (ulong)bVar23 * -2 + 1;
              }
              local_548 = '\x01';
              pbVar13 = &sep_1;
              uVar3 = local_448._3_1_;
              while (local_448 = iVar4, bVar14 != 0) {
                local_448 = CONCAT13(uVar3,(undefined3)local_448);
                pbVar13 = pbVar13 + 1;
                (&local_548)[uVar12] = '\x01';
                bVar14 = *pbVar13;
                uVar12 = (ulong)bVar14;
                uVar3 = local_448._3_1_;
                iVar4 = local_448;
              }
              local_448 = CONCAT13(uVar3,(undefined3)local_448);
              bVar14 = *pbVar16;
              cVar2 = (&local_548)[bVar14];
              pbVar13 = pbVar16;
              while (cVar2 == '\0') {
                bVar14 = pbVar13[1];
                pbVar13 = pbVar13 + 1;
                cVar2 = (&local_548)[bVar14];
              }
              if (bVar14 != 0) {
                *pbVar13 = 0;
              }
              dVar24 = strtod((char *)pbVar16,(char **)0x0);
              (&ecdh_results)[(int)uVar11] = dVar24 + (double)(&ecdh_results)[(int)uVar11];
            }
          }
          else if (local_448 == 0x3a36462b) {
            local_547._0_8_ = 0;
            local_450 = 0;
            pbVar16 = &sep_1;
            iVar5 = (int)local_547;
            uVar11 = (ulong)((iVar5 - (int)(local_547 + 7)) + 0xffU >> 3);
            puVar19 = (undefined8 *)(local_547 + 7);
            while( true ) {
              if (uVar11 == 0) break;
              uVar11 = uVar11 - 1;
              *puVar19 = 0;
              puVar19 = puVar19 + (ulong)bVar23 * -2 + 1;
            }
            local_548 = '\x01';
            bVar14 = sep_1;
            uVar3 = local_448._3_1_;
            while (bVar14 != 0) {
              local_448 = CONCAT13(uVar3,(undefined3)local_448);
              pbVar16 = pbVar16 + 1;
              (&local_548)[bVar14] = '\x01';
              uVar3 = local_448._3_1_;
              bVar14 = *pbVar16;
            }
            local_448 = CONCAT13(uVar3,(undefined3)local_448);
            cVar2 = (&local_548)[local_444];
            pbVar16 = &local_444;
            bVar14 = local_444;
            while (cVar2 == '\0') {
              bVar14 = pbVar16[1];
              pbVar16 = pbVar16 + 1;
              cVar2 = (&local_548)[bVar14];
            }
            if (bVar14 != 0) {
              *pbVar16 = 0;
              pbVar16 = pbVar16 + 1;
            }
            local_558 = (byte *)0x0;
            piVar7 = __errno_location();
            *piVar7 = 0;
            uVar11 = strtol((char *)&local_444,(char **)&local_558,10);
            if (((*piVar7 == 0) && (local_558 != &local_444)) && ((*local_558 == 0 && (uVar11 < 2)))
               ) {
              local_547._0_8_ = 0;
              local_450 = 0;
              puVar19 = (undefined8 *)(local_547 + 7);
              for (uVar12 = (ulong)((iVar5 - (int)(local_547 + 7)) + 0xffU >> 3); bVar14 = sep_1,
                  uVar12 != 0; uVar12 = uVar12 - 1) {
                *puVar19 = 0;
                puVar19 = puVar19 + (ulong)bVar23 * -2 + 1;
              }
              local_548 = '\x01';
              pbVar13 = &sep_1;
              uVar15 = (uint)sep_1;
              uVar12 = (ulong)uVar15;
              uVar10 = uVar12;
              if (sep_1 == 0) goto LAB_00104824;
              do {
                pbVar13 = pbVar13 + 1;
                (&local_548)[uVar10] = '\x01';
                uVar10 = (ulong)*pbVar13;
              } while (*pbVar13 != 0);
              bVar1 = *pbVar16;
              cVar2 = (&local_548)[bVar1];
              while (cVar2 == '\0') {
                pbVar16 = pbVar16 + 1;
LAB_00104824:
                bVar1 = *pbVar16;
                cVar2 = (&local_548)[bVar1];
              }
              if (bVar1 != 0) {
                *pbVar16 = 0;
                pbVar16 = pbVar16 + 1;
              }
              local_547._0_8_ = 0;
              local_450 = 0;
              puVar19 = (undefined8 *)(local_547 + 7);
              for (uVar10 = (ulong)((iVar5 - (int)(local_547 + 7)) + 0xffU >> 3); uVar10 != 0;
                  uVar10 = uVar10 - 1) {
                *puVar19 = 0;
                puVar19 = puVar19 + (ulong)bVar23 * -2 + 1;
              }
              local_548 = '\x01';
              uVar10 = (ulong)uVar15;
              pbVar13 = &sep_1;
              if (bVar14 == 0) goto LAB_001048a4;
              do {
                pbVar13 = pbVar13 + 1;
                (&local_548)[uVar10] = '\x01';
                uVar10 = (ulong)*pbVar13;
              } while (*pbVar13 != 0);
              bVar1 = *pbVar16;
              cVar2 = (&local_548)[bVar1];
              iVar4 = local_448;
              while (cVar2 == '\0') {
                pbVar16 = pbVar16 + 1;
                local_448 = iVar4;
LAB_001048a4:
                bVar1 = *pbVar16;
                iVar4 = local_448;
                cVar2 = (&local_548)[bVar1];
              }
              local_448._3_1_ = (byte)((uint)iVar4 >> 0x18);
              local_448._0_1_ = (char)iVar4;
              if (bVar1 != 0) {
                *pbVar16 = 0;
                pbVar16 = pbVar16 + 1;
              }
              local_547._0_8_ = 0;
              local_450 = 0;
              puVar19 = (undefined8 *)(local_547 + 7);
              for (uVar10 = (ulong)((iVar5 - (int)(local_547 + 7)) + 0xffU >> 3); uVar10 != 0;
                  uVar10 = uVar10 - 1) {
                *puVar19 = 0;
                puVar19 = puVar19 + (ulong)bVar23 * -2 + 1;
              }
              local_548 = '\x01';
              pbVar13 = &sep_1;
              uVar3 = local_448._3_1_;
              while (local_448 = iVar4, bVar14 != 0) {
                local_448 = CONCAT13(uVar3,(undefined3)local_448);
                pbVar13 = pbVar13 + 1;
                (&local_548)[uVar12] = '\x01';
                bVar14 = *pbVar13;
                uVar12 = (ulong)bVar14;
                uVar3 = local_448._3_1_;
                iVar4 = local_448;
              }
              local_448 = CONCAT13(uVar3,(undefined3)local_448);
              bVar14 = *pbVar16;
              cVar2 = (&local_548)[bVar14];
              pbVar13 = pbVar16;
              while (cVar2 == '\0') {
                bVar14 = pbVar13[1];
                pbVar13 = pbVar13 + 1;
                cVar2 = (&local_548)[bVar14];
              }
              if (bVar14 != 0) {
                *pbVar13 = 0;
                pbVar13 = pbVar13 + 1;
              }
              dVar24 = strtod((char *)pbVar16,(char **)0x0);
              lVar17 = (long)(int)uVar11;
              (&eddsa_results)[lVar17 * 2] = dVar24 + (double)(&eddsa_results)[lVar17 * 2];
              local_547._0_8_ = 0;
              local_450 = 0;
              puVar19 = (undefined8 *)(local_547 + 7);
              for (uVar11 = (ulong)((iVar5 - (int)(local_547 + 7)) + 0xffU >> 3); uVar11 != 0;
                  uVar11 = uVar11 - 1) {
                *puVar19 = 0;
                puVar19 = puVar19 + (ulong)bVar23 * -2 + 1;
              }
              local_548 = '\x01';
              pbVar16 = &sep_1;
              bVar14 = sep_1;
              uVar3 = local_448._3_1_;
              while (bVar14 != 0) {
                local_448 = CONCAT13(uVar3,(undefined3)local_448);
                pbVar16 = pbVar16 + 1;
                (&local_548)[bVar14] = '\x01';
                uVar3 = local_448._3_1_;
                bVar14 = *pbVar16;
              }
              local_448 = CONCAT13(uVar3,(undefined3)local_448);
              bVar14 = *pbVar13;
              cVar2 = (&local_548)[bVar14];
              pbVar16 = pbVar13;
              while (cVar2 == '\0') {
                bVar14 = pbVar16[1];
                pbVar16 = pbVar16 + 1;
                cVar2 = (&local_548)[bVar14];
              }
              if (bVar14 != 0) {
                *pbVar16 = 0;
              }
              dVar24 = strtod((char *)pbVar13,(char **)0x0);
              (&DAT_001178c8)[lVar17 * 2] = dVar24 + (double)(&DAT_001178c8)[lVar17 * 2];
            }
          }
          else if (local_448 == 0x3a37462b) {
            local_547._0_8_ = 0;
            local_450 = 0;
            pbVar16 = &sep_1;
            iVar5 = (int)local_547;
            uVar11 = (ulong)((iVar5 - (int)(local_547 + 7)) + 0xffU >> 3);
            puVar19 = (undefined8 *)(local_547 + 7);
            while( true ) {
              if (uVar11 == 0) break;
              uVar11 = uVar11 - 1;
              *puVar19 = 0;
              puVar19 = puVar19 + (ulong)bVar23 * -2 + 1;
            }
            local_548 = '\x01';
            bVar14 = sep_1;
            uVar3 = local_448._3_1_;
            while (bVar14 != 0) {
              local_448 = CONCAT13(uVar3,(undefined3)local_448);
              pbVar16 = pbVar16 + 1;
              (&local_548)[bVar14] = '\x01';
              uVar3 = local_448._3_1_;
              bVar14 = *pbVar16;
            }
            local_448 = CONCAT13(uVar3,(undefined3)local_448);
            cVar2 = (&local_548)[local_444];
            pbVar16 = &local_444;
            bVar14 = local_444;
            while (cVar2 == '\0') {
              bVar14 = pbVar16[1];
              pbVar16 = pbVar16 + 1;
              cVar2 = (&local_548)[bVar14];
            }
            if (bVar14 != 0) {
              *pbVar16 = 0;
              pbVar16 = pbVar16 + 1;
            }
            local_558 = (byte *)0x0;
            piVar7 = __errno_location();
            *piVar7 = 0;
            lVar17 = strtol((char *)&local_444,(char **)&local_558,10);
            if (((*piVar7 == 0) && (local_558 != &local_444)) &&
               ((*local_558 == 0 && (lVar17 == 0)))) {
              local_547._0_8_ = 0;
              local_450 = 0;
              puVar19 = (undefined8 *)(local_547 + 7);
              for (uVar11 = (ulong)((iVar5 - (int)(local_547 + 7)) + 0xffU >> 3); bVar14 = sep_1,
                  uVar11 != 0; uVar11 = uVar11 - 1) {
                *puVar19 = 0;
                puVar19 = puVar19 + (ulong)bVar23 * -2 + 1;
              }
              local_548 = '\x01';
              pbVar13 = &sep_1;
              uVar15 = (uint)sep_1;
              uVar11 = (ulong)uVar15;
              uVar12 = uVar11;
              if (sep_1 == 0) goto LAB_00104bec;
              do {
                pbVar13 = pbVar13 + 1;
                (&local_548)[uVar12] = '\x01';
                uVar12 = (ulong)*pbVar13;
              } while (*pbVar13 != 0);
              bVar1 = *pbVar16;
              cVar2 = (&local_548)[bVar1];
              while (cVar2 == '\0') {
                pbVar16 = pbVar16 + 1;
LAB_00104bec:
                bVar1 = *pbVar16;
                cVar2 = (&local_548)[bVar1];
              }
              if (bVar1 != 0) {
                *pbVar16 = 0;
                pbVar16 = pbVar16 + 1;
              }
              local_547._0_8_ = 0;
              local_450 = 0;
              puVar19 = (undefined8 *)(local_547 + 7);
              for (uVar12 = (ulong)((iVar5 - (int)(local_547 + 7)) + 0xffU >> 3); uVar12 != 0;
                  uVar12 = uVar12 - 1) {
                *puVar19 = 0;
                puVar19 = puVar19 + (ulong)bVar23 * -2 + 1;
              }
              local_548 = '\x01';
              uVar12 = (ulong)uVar15;
              pbVar13 = &sep_1;
              if (bVar14 == 0) goto LAB_00104c6c;
              do {
                pbVar13 = pbVar13 + 1;
                (&local_548)[uVar12] = '\x01';
                uVar12 = (ulong)*pbVar13;
              } while (*pbVar13 != 0);
              bVar1 = *pbVar16;
              cVar2 = (&local_548)[bVar1];
              iVar4 = local_448;
              while (cVar2 == '\0') {
                pbVar16 = pbVar16 + 1;
                local_448 = iVar4;
LAB_00104c6c:
                bVar1 = *pbVar16;
                iVar4 = local_448;
                cVar2 = (&local_548)[bVar1];
              }
              local_448._3_1_ = (byte)((uint)iVar4 >> 0x18);
              local_448._0_1_ = (char)iVar4;
              if (bVar1 != 0) {
                *pbVar16 = 0;
                pbVar16 = pbVar16 + 1;
              }
              local_547._0_8_ = 0;
              local_450 = 0;
              puVar19 = (undefined8 *)(local_547 + 7);
              for (uVar12 = (ulong)((iVar5 - (int)(local_547 + 7)) + 0xffU >> 3); uVar12 != 0;
                  uVar12 = uVar12 - 1) {
                *puVar19 = 0;
                puVar19 = puVar19 + (ulong)bVar23 * -2 + 1;
              }
              local_548 = '\x01';
              pbVar13 = &sep_1;
              uVar3 = local_448._3_1_;
              while (local_448 = iVar4, bVar14 != 0) {
                local_448 = CONCAT13(uVar3,(undefined3)local_448);
                pbVar13 = pbVar13 + 1;
                (&local_548)[uVar11] = '\x01';
                bVar14 = *pbVar13;
                uVar11 = (ulong)bVar14;
                uVar3 = local_448._3_1_;
                iVar4 = local_448;
              }
              local_448 = CONCAT13(uVar3,(undefined3)local_448);
              bVar14 = *pbVar16;
              cVar2 = (&local_548)[bVar14];
              pbVar13 = pbVar16;
              while (cVar2 == '\0') {
                bVar14 = pbVar13[1];
                pbVar13 = pbVar13 + 1;
                cVar2 = (&local_548)[bVar14];
              }
              if (bVar14 != 0) {
                *pbVar13 = 0;
                pbVar13 = pbVar13 + 1;
              }
              dVar24 = strtod((char *)pbVar16,(char **)0x0);
              sm2_results = dVar24 + sm2_results;
              pbVar16 = &sep_1;
              local_547._0_8_ = 0;
              local_450 = 0;
              puVar19 = (undefined8 *)(local_547 + 7);
              for (uVar11 = (ulong)((iVar5 - (int)(local_547 + 7)) + 0xffU >> 3); uVar11 != 0;
                  uVar11 = uVar11 - 1) {
                *puVar19 = 0;
                puVar19 = puVar19 + (ulong)bVar23 * -2 + 1;
              }
              local_548 = '\x01';
              bVar14 = sep_1;
              uVar3 = local_448._3_1_;
              while (bVar14 != 0) {
                local_448 = CONCAT13(uVar3,(undefined3)local_448);
                pbVar16 = pbVar16 + 1;
                (&local_548)[bVar14] = '\x01';
                uVar3 = local_448._3_1_;
                bVar14 = *pbVar16;
              }
              local_448 = CONCAT13(uVar3,(undefined3)local_448);
              bVar14 = *pbVar13;
              cVar2 = (&local_548)[bVar14];
              pbVar16 = pbVar13;
              while (cVar2 == '\0') {
                bVar14 = pbVar16[1];
                pbVar16 = pbVar16 + 1;
                cVar2 = (&local_548)[bVar14];
              }
              if (bVar14 != 0) {
                *pbVar16 = 0;
              }
              dVar24 = strtod((char *)pbVar13,(char **)0x0);
              DAT_001178a8 = dVar24 + DAT_001178a8;
            }
          }
          else if (local_448 == 0x3a38462b) {
            local_547._0_8_ = 0;
            local_450 = 0;
            pbVar16 = &sep_1;
            iVar5 = (int)local_547;
            uVar11 = (ulong)((iVar5 - (int)(local_547 + 7)) + 0xffU >> 3);
            puVar19 = (undefined8 *)(local_547 + 7);
            while( true ) {
              if (uVar11 == 0) break;
              uVar11 = uVar11 - 1;
              *puVar19 = 0;
              puVar19 = puVar19 + (ulong)bVar23 * -2 + 1;
            }
            local_548 = '\x01';
            bVar14 = sep_1;
            uVar3 = local_448._3_1_;
            while (bVar14 != 0) {
              local_448 = CONCAT13(uVar3,(undefined3)local_448);
              pbVar16 = pbVar16 + 1;
              (&local_548)[bVar14] = '\x01';
              uVar3 = local_448._3_1_;
              bVar14 = *pbVar16;
            }
            local_448 = CONCAT13(uVar3,(undefined3)local_448);
            cVar2 = (&local_548)[local_444];
            pbVar16 = &local_444;
            bVar14 = local_444;
            while (cVar2 == '\0') {
              bVar14 = pbVar16[1];
              pbVar16 = pbVar16 + 1;
              cVar2 = (&local_548)[bVar14];
            }
            if (bVar14 != 0) {
              *pbVar16 = 0;
              pbVar16 = pbVar16 + 1;
            }
            local_558 = (byte *)0x0;
            piVar7 = __errno_location();
            *piVar7 = 0;
            uVar11 = strtol((char *)&local_444,(char **)&local_558,10);
            if ((((*piVar7 == 0) && (local_558 != &local_444)) && (*local_558 == 0)) && (uVar11 < 5)
               ) {
              local_547._0_8_ = 0;
              local_450 = 0;
              puVar19 = (undefined8 *)(local_547 + 7);
              for (uVar12 = (ulong)((iVar5 - (int)(local_547 + 7)) + 0xffU >> 3); bVar14 = sep_1,
                  uVar12 != 0; uVar12 = uVar12 - 1) {
                *puVar19 = 0;
                puVar19 = puVar19 + (ulong)bVar23 * -2 + 1;
              }
              local_548 = '\x01';
              pbVar13 = &sep_1;
              uVar12 = (ulong)sep_1;
              uVar10 = uVar12;
              if (sep_1 == 0) goto LAB_00104f54;
              do {
                pbVar13 = pbVar13 + 1;
                (&local_548)[uVar10] = '\x01';
                uVar10 = (ulong)*pbVar13;
              } while (*pbVar13 != 0);
              bVar1 = *pbVar16;
              cVar2 = (&local_548)[bVar1];
              iVar4 = local_448;
              while (cVar2 == '\0') {
                pbVar16 = pbVar16 + 1;
                local_448 = iVar4;
LAB_00104f54:
                bVar1 = *pbVar16;
                iVar4 = local_448;
                cVar2 = (&local_548)[bVar1];
              }
              local_448._3_1_ = (byte)((uint)iVar4 >> 0x18);
              local_448._0_1_ = (char)iVar4;
              if (bVar1 != 0) {
                *pbVar16 = 0;
                pbVar16 = pbVar16 + 1;
              }
              local_547._0_8_ = 0;
              local_450 = 0;
              puVar19 = (undefined8 *)(local_547 + 7);
              for (uVar10 = (ulong)((iVar5 - (int)(local_547 + 7)) + 0xffU >> 3); uVar10 != 0;
                  uVar10 = uVar10 - 1) {
                *puVar19 = 0;
                puVar19 = puVar19 + (ulong)bVar23 * -2 + 1;
              }
              local_548 = '\x01';
              pbVar13 = &sep_1;
              uVar3 = local_448._3_1_;
              while (local_448 = iVar4, bVar14 != 0) {
                local_448 = CONCAT13(uVar3,(undefined3)local_448);
                pbVar13 = pbVar13 + 1;
                (&local_548)[uVar12] = '\x01';
                bVar14 = *pbVar13;
                uVar12 = (ulong)bVar14;
                uVar3 = local_448._3_1_;
                iVar4 = local_448;
              }
              local_448 = CONCAT13(uVar3,(undefined3)local_448);
              bVar14 = *pbVar16;
              cVar2 = (&local_548)[bVar14];
              pbVar13 = pbVar16;
              while (cVar2 == '\0') {
                bVar14 = pbVar13[1];
                pbVar13 = pbVar13 + 1;
                cVar2 = (&local_548)[bVar14];
              }
              if (bVar14 != 0) {
                *pbVar13 = 0;
              }
              dVar24 = strtod((char *)pbVar16,(char **)0x0);
              (&ffdh_results)[(int)uVar11] = dVar24 + (double)(&ffdh_results)[(int)uVar11];
            }
          }
          else if (local_448 == 0x3a39462b) {
            local_547._0_8_ = 0;
            local_450 = 0;
            pbVar16 = &sep_1;
            iVar5 = (int)local_547;
            uVar11 = (ulong)((iVar5 - (int)(local_547 + 7)) + 0xffU >> 3);
            puVar19 = (undefined8 *)(local_547 + 7);
            while( true ) {
              if (uVar11 == 0) break;
              uVar11 = uVar11 - 1;
              *puVar19 = 0;
              puVar19 = puVar19 + (ulong)bVar23 * -2 + 1;
            }
            local_548 = '\x01';
            bVar14 = sep_1;
            uVar3 = local_448._3_1_;
            while (bVar14 != 0) {
              local_448 = CONCAT13(uVar3,(undefined3)local_448);
              pbVar16 = pbVar16 + 1;
              (&local_548)[bVar14] = '\x01';
              uVar3 = local_448._3_1_;
              bVar14 = *pbVar16;
            }
            local_448 = CONCAT13(uVar3,(undefined3)local_448);
            cVar2 = (&local_548)[local_444];
            pbVar16 = &local_444;
            bVar14 = local_444;
            while (cVar2 == '\0') {
              bVar14 = pbVar16[1];
              pbVar16 = pbVar16 + 1;
              cVar2 = (&local_548)[bVar14];
            }
            if (bVar14 != 0) {
              *pbVar16 = 0;
              pbVar16 = pbVar16 + 1;
            }
            local_558 = (byte *)0x0;
            piVar7 = __errno_location();
            *piVar7 = 0;
            uVar11 = strtol((char *)&local_444,(char **)&local_558,10);
            if (((*piVar7 == 0) && (local_558 != &local_444)) &&
               ((*local_558 == 0 && (uVar11 < 0x6f)))) {
              local_547._0_8_ = 0;
              local_450 = 0;
              puVar19 = (undefined8 *)(local_547 + 7);
              for (uVar12 = (ulong)((iVar5 - (int)(local_547 + 7)) + 0xffU >> 3); uVar12 != 0;
                  uVar12 = uVar12 - 1) {
                *puVar19 = 0;
                puVar19 = puVar19 + (ulong)bVar23 * -2 + 1;
              }
              local_548 = '\x01';
              pbVar13 = &sep_1;
              bVar14 = sep_1;
              while (bVar14 != 0) {
                pbVar13 = pbVar13 + 1;
                (&local_548)[bVar14] = '\x01';
                bVar14 = *pbVar13;
              }
              bVar14 = *pbVar16;
              cVar2 = (&local_548)[bVar14];
              pbVar13 = pbVar16;
              while (cVar2 == '\0') {
                bVar14 = pbVar13[1];
                pbVar13 = pbVar13 + 1;
                cVar2 = (&local_548)[bVar14];
              }
              if (bVar14 != 0) {
                *pbVar13 = 0;
                pbVar13 = pbVar13 + 1;
              }
              dVar24 = strtod((char *)pbVar16,(char **)0x0);
              lVar17 = (long)(int)uVar11;
              (&kems_results)[lVar17 * 3] = dVar24 + (double)(&kems_results)[lVar17 * 3];
              local_547._0_8_ = 0;
              local_450 = 0;
              puVar19 = (undefined8 *)(local_547 + 7);
              for (uVar11 = (ulong)((iVar5 - (int)(local_547 + 7)) + 0xffU >> 3); uVar11 != 0;
                  uVar11 = uVar11 - 1) {
                *puVar19 = 0;
                puVar19 = puVar19 + (ulong)bVar23 * -2 + 1;
              }
              local_548 = '\x01';
              pbVar16 = &sep_1;
              bVar14 = sep_1;
              while (bVar14 != 0) {
                pbVar16 = pbVar16 + 1;
                (&local_548)[bVar14] = '\x01';
                bVar14 = *pbVar16;
              }
              bVar14 = *pbVar13;
              cVar2 = (&local_548)[bVar14];
              pbVar16 = pbVar13;
              while (cVar2 == '\0') {
                bVar14 = pbVar16[1];
                pbVar16 = pbVar16 + 1;
                cVar2 = (&local_548)[bVar14];
              }
              if (bVar14 != 0) {
                *pbVar16 = 0;
                pbVar16 = pbVar16 + 1;
              }
              dVar24 = strtod((char *)pbVar13,(char **)0x0);
              (&DAT_00116aa8)[lVar17 * 3] = dVar24 + (double)(&DAT_00116aa8)[lVar17 * 3];
              local_547._0_8_ = 0;
              local_450 = 0;
              puVar19 = (undefined8 *)(local_547 + 7);
              for (uVar11 = (ulong)((iVar5 - (int)(local_547 + 7)) + 0xffU >> 3); uVar11 != 0;
                  uVar11 = uVar11 - 1) {
                *puVar19 = 0;
                puVar19 = puVar19 + (ulong)bVar23 * -2 + 1;
              }
              local_548 = '\x01';
              pbVar13 = &sep_1;
              bVar14 = sep_1;
              uVar3 = local_448._3_1_;
              while (bVar14 != 0) {
                local_448 = CONCAT13(uVar3,(undefined3)local_448);
                pbVar13 = pbVar13 + 1;
                (&local_548)[bVar14] = '\x01';
                uVar3 = local_448._3_1_;
                bVar14 = *pbVar13;
              }
              local_448 = CONCAT13(uVar3,(undefined3)local_448);
              bVar14 = *pbVar16;
              cVar2 = (&local_548)[bVar14];
              pbVar13 = pbVar16;
              while (cVar2 == '\0') {
                bVar14 = pbVar13[1];
                pbVar13 = pbVar13 + 1;
                cVar2 = (&local_548)[bVar14];
              }
              if (bVar14 != 0) {
                *pbVar13 = 0;
              }
              dVar24 = strtod((char *)pbVar16,(char **)0x0);
              (&DAT_00116ab0)[lVar17 * 3] = dVar24 + (double)(&DAT_00116ab0)[lVar17 * 3];
            }
          }
          else if ((local_448 == 0x3031462b) && (local_444 == 0x3a)) {
            local_547._0_8_ = 0;
            local_450 = 0;
            pbVar16 = &sep_1;
            iVar5 = (int)local_547;
            uVar11 = (ulong)((iVar5 - (int)(local_547 + 7)) + 0xffU >> 3);
            puVar19 = (undefined8 *)(local_547 + 7);
            while( true ) {
              if (uVar11 == 0) break;
              uVar11 = uVar11 - 1;
              *puVar19 = 0;
              puVar19 = puVar19 + (ulong)bVar23 * -2 + 1;
            }
            local_548 = '\x01';
            bVar14 = sep_1;
            uVar3 = local_448._3_1_;
            while (bVar14 != 0) {
              local_448 = CONCAT13(uVar3,(undefined3)local_448);
              pbVar16 = pbVar16 + 1;
              (&local_548)[bVar14] = '\x01';
              uVar3 = local_448._3_1_;
              bVar14 = *pbVar16;
            }
            local_448 = CONCAT13(uVar3,(undefined3)local_448);
            cVar2 = (&local_548)[local_443[0]];
            pbVar16 = local_443;
            bVar14 = local_443[0];
            while (cVar2 == '\0') {
              bVar14 = pbVar16[1];
              pbVar16 = pbVar16 + 1;
              cVar2 = (&local_548)[bVar14];
            }
            if (bVar14 != 0) {
              *pbVar16 = 0;
              pbVar16 = pbVar16 + 1;
            }
            local_558 = (byte *)0x0;
            piVar7 = __errno_location();
            *piVar7 = 0;
            uVar11 = strtol((char *)local_443,(char **)&local_558,10);
            if ((((*piVar7 == 0) && (local_558 != local_443)) && (*local_558 == 0)) &&
               (uVar11 < 0x6f)) {
              local_547._0_8_ = 0;
              local_450 = 0;
              puVar19 = (undefined8 *)(local_547 + 7);
              for (uVar12 = (ulong)((iVar5 - (int)(local_547 + 7)) + 0xffU >> 3); uVar12 != 0;
                  uVar12 = uVar12 - 1) {
                *puVar19 = 0;
                puVar19 = puVar19 + (ulong)bVar23 * -2 + 1;
              }
              local_548 = '\x01';
              pbVar13 = &sep_1;
              bVar14 = sep_1;
              uVar3 = local_448._3_1_;
              while (bVar14 != 0) {
                local_448 = CONCAT13(uVar3,(undefined3)local_448);
                pbVar13 = pbVar13 + 1;
                (&local_548)[bVar14] = '\x01';
                uVar3 = local_448._3_1_;
                bVar14 = *pbVar13;
              }
              local_448 = CONCAT13(uVar3,(undefined3)local_448);
              bVar14 = *pbVar16;
              cVar2 = (&local_548)[bVar14];
              pbVar13 = pbVar16;
              while (cVar2 == '\0') {
                bVar14 = pbVar13[1];
                pbVar13 = pbVar13 + 1;
                cVar2 = (&local_548)[bVar14];
              }
              if (bVar14 != 0) {
                *pbVar13 = 0;
                pbVar13 = pbVar13 + 1;
              }
              dVar24 = strtod((char *)pbVar16,(char **)0x0);
              lVar17 = (long)(int)uVar11;
              (&sigs_results)[lVar17 * 3] = dVar24 + (double)(&sigs_results)[lVar17 * 3];
              local_547._0_8_ = 0;
              local_450 = 0;
              puVar19 = (undefined8 *)(local_547 + 7);
              for (uVar11 = (ulong)((iVar5 - (int)(local_547 + 7)) + 0xffU >> 3); uVar11 != 0;
                  uVar11 = uVar11 - 1) {
                *puVar19 = 0;
                puVar19 = puVar19 + (ulong)bVar23 * -2 + 1;
              }
              local_548 = '\x01';
              pbVar16 = &sep_1;
              bVar14 = sep_1;
              uVar3 = local_448._3_1_;
              while (bVar14 != 0) {
                local_448 = CONCAT13(uVar3,(undefined3)local_448);
                pbVar16 = pbVar16 + 1;
                (&local_548)[bVar14] = '\x01';
                uVar3 = local_448._3_1_;
                bVar14 = *pbVar16;
              }
              local_448 = CONCAT13(uVar3,(undefined3)local_448);
              bVar14 = *pbVar13;
              cVar2 = (&local_548)[bVar14];
              pbVar16 = pbVar13;
              while (cVar2 == '\0') {
                bVar14 = pbVar16[1];
                pbVar16 = pbVar16 + 1;
                cVar2 = (&local_548)[bVar14];
              }
              if (bVar14 != 0) {
                *pbVar16 = 0;
                pbVar16 = pbVar16 + 1;
              }
              dVar24 = strtod((char *)pbVar13,(char **)0x0);
              (&DAT_00115ca8)[lVar17 * 3] = dVar24 + (double)(&DAT_00115ca8)[lVar17 * 3];
              local_547._0_8_ = 0;
              local_450 = 0;
              puVar19 = (undefined8 *)(local_547 + 7);
              for (uVar11 = (ulong)((iVar5 - (int)(local_547 + 7)) + 0xffU >> 3); uVar11 != 0;
                  uVar11 = uVar11 - 1) {
                *puVar19 = 0;
                puVar19 = puVar19 + (ulong)bVar23 * -2 + 1;
              }
              local_548 = '\x01';
              pbVar13 = &sep_1;
              bVar14 = sep_1;
              uVar3 = local_448._3_1_;
              while (bVar14 != 0) {
                local_448 = CONCAT13(uVar3,(undefined3)local_448);
                pbVar13 = pbVar13 + 1;
                (&local_548)[bVar14] = '\x01';
                uVar3 = local_448._3_1_;
                bVar14 = *pbVar13;
              }
              local_448 = CONCAT13(uVar3,(undefined3)local_448);
              bVar14 = *pbVar16;
              cVar2 = (&local_548)[bVar14];
              pbVar13 = pbVar16;
              while (cVar2 == '\0') {
                bVar14 = pbVar13[1];
                pbVar13 = pbVar13 + 1;
                cVar2 = (&local_548)[bVar14];
              }
              if (bVar14 != 0) {
                *pbVar13 = 0;
              }
              dVar24 = strtod((char *)pbVar16,(char **)0x0);
              (&DAT_00115cb0)[lVar17 * 3] = dVar24 + (double)(&DAT_00115cb0)[lVar17 * 3];
            }
          }
          else if (((short)local_448 != 0x482b) || (local_448._2_1_ != ':')) {
            BIO_printf(_bio_err,"Unknown type \'%s\' from child %d\n",&local_448,
                       local_5a0 & 0xffffffff);
          }
        }
        else {
          BIO_printf(_bio_err,"Don\'t understand line \'%s\' from child %d\n");
        }
      }
      fclose(__stream);
      bVar22 = uVar21 != local_5a0;
      local_5a0 = local_5a0 + 1;
    } while (bVar22);
    iVar5 = 0;
    CRYPTO_free(ptr);
    do {
      while (_Var6 = wait(&local_558), _Var6 == -1) {
        piVar7 = __errno_location();
        if (*piVar7 != 4) {
          BIO_printf(_bio_err,"Waitng for child failed with 0x%x\n");
          uVar9 = 1;
          goto LAB_001034f4;
        }
      }
      if ((((ulong)local_558 & 0x7f) == 0) && (bVar23 = (byte)((ulong)local_558 >> 8), bVar23 != 0))
      {
        BIO_printf(_bio_err,"Child exited with %d\n",(ulong)bVar23);
      }
      else if ('\x01' < (char)(((byte)local_558 & 0x7f) + 1)) {
        BIO_printf(_bio_err,"Child terminated by signal %d\n");
      }
      iVar5 = iVar5 + 1;
    } while (param_1 != iVar5);
  }
LAB_001053f5:
  uVar9 = 1;
LAB_001034f4:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar9;
}



undefined8 get_dsa(int param_1)

{
  int iVar1;
  EVP_PKEY_CTX *ctx;
  BIGNUM *a;
  BIGNUM *a_00;
  BIGNUM *a_01;
  BIGNUM *a_02;
  BIGNUM *a_03;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 *s;
  undefined1 *s_00;
  undefined1 *s_01;
  int len;
  long in_FS_OFFSET;
  uchar *local_58;
  uchar *local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  if (param_1 == 0x400) {
    len = 0x80;
    iVar1 = 0x80;
    local_50 = dsa1024_q;
    s_00 = dsa1024_p;
    local_58 = dsa1024_g;
    s_01 = dsa1024_pub;
    s = dsa1024_priv;
LAB_001058d7:
    ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_name(0,&_LC108,0);
    if (ctx != (EVP_PKEY_CTX *)0x0) {
      a = BN_bin2bn(s,0x14,(BIGNUM *)0x0);
      a_00 = BN_bin2bn(s_01,iVar1,(BIGNUM *)0x0);
      a_01 = BN_bin2bn(s_00,len,(BIGNUM *)0x0);
      a_02 = BN_bin2bn(local_50,0x14,(BIGNUM *)0x0);
      a_03 = BN_bin2bn(local_58,len,(BIGNUM *)0x0);
      if ((((a == (BIGNUM *)0x0) || (a_00 == (BIGNUM *)0x0)) ||
          (a_01 == (BIGNUM *)0x0 || a_02 == (BIGNUM *)0x0)) ||
         ((a_03 == (BIGNUM *)0x0 || (lVar2 = OSSL_PARAM_BLD_new(), lVar2 == 0)))) {
        lVar4 = 0;
        lVar2 = 0;
      }
      else {
        iVar1 = OSSL_PARAM_BLD_push_BN(lVar2,&_LC109,a_01);
        if ((iVar1 == 0) || (iVar1 = OSSL_PARAM_BLD_push_BN(lVar2,&_LC110,a_02), iVar1 == 0)) {
LAB_0010599b:
          lVar4 = 0;
        }
        else {
          iVar1 = OSSL_PARAM_BLD_push_BN(lVar2,&_LC111,a_03);
          lVar4 = 0;
          if (iVar1 != 0) {
            iVar1 = OSSL_PARAM_BLD_push_BN(lVar2,&_LC112,a);
            if (((iVar1 == 0) || (iVar1 = OSSL_PARAM_BLD_push_BN(lVar2,&_LC113,a_00), iVar1 == 0))
               || (lVar4 = OSSL_PARAM_BLD_to_param(lVar2), lVar4 == 0)) goto LAB_0010599b;
            iVar1 = EVP_PKEY_fromdata_init(ctx);
            if ((iVar1 < 1) || (iVar1 = EVP_PKEY_fromdata(ctx,&local_48,0x87), iVar1 < 1)) {
              local_48 = 0;
            }
          }
        }
      }
      OSSL_PARAM_free(lVar4);
      OSSL_PARAM_BLD_free(lVar2);
      BN_free(a);
      BN_free(a_00);
      BN_free(a_01);
      BN_free(a_02);
      BN_free(a_03);
      EVP_PKEY_CTX_free(ctx);
      uVar3 = local_48;
      goto LAB_00105a2b;
    }
  }
  else {
    if (param_1 == 0x800) {
      len = 0x100;
      iVar1 = 0x100;
      local_50 = dsa2048_q;
      s_00 = dsa2048_p;
      local_58 = dsa2048_g;
      s_01 = dsa2048_pub;
      s = dsa2048_priv;
      goto LAB_001058d7;
    }
    if (param_1 == 0x200) {
      len = 0x40;
      iVar1 = 0x41;
      local_50 = dsa512_q;
      s_00 = dsa512_p;
      local_58 = dsa512_g;
      s_01 = dsa512_pub;
      s = dsa512_priv;
      goto LAB_001058d7;
    }
  }
  uVar3 = 0;
LAB_00105a2b:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int speed_main(undefined8 param_1,undefined8 param_2)

{
  size_t *psVar1;
  size_t *psVar2;
  char cVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  undefined1 auVar10 [14];
  undefined1 auVar11 [15];
  undefined1 auVar12 [14];
  undefined1 auVar13 [15];
  undefined1 auVar14 [15];
  undefined1 auVar15 [15];
  undefined1 auVar16 [15];
  undefined1 auVar17 [13];
  undefined1 auVar18 [13];
  undefined1 auVar19 [13];
  undefined1 auVar20 [13];
  undefined1 auVar21 [13];
  undefined1 auVar22 [15];
  undefined1 auVar23 [14];
  undefined1 auVar24 [15];
  undefined1 auVar25 [13];
  undefined1 auVar26 [15];
  undefined1 auVar27 [15];
  undefined1 auVar28 [15];
  undefined1 auVar29 [15];
  undefined1 auVar30 [15];
  undefined1 auVar31 [15];
  undefined1 auVar32 [15];
  undefined1 auVar33 [15];
  unkuint9 Var34;
  undefined1 auVar35 [11];
  undefined1 auVar36 [13];
  undefined1 auVar37 [14];
  unkbyte10 Var38;
  undefined1 auVar39 [13];
  undefined1 auVar40 [13];
  undefined1 auVar41 [15];
  undefined1 auVar42 [11];
  undefined1 auVar43 [13];
  undefined1 auVar44 [14];
  undefined1 auVar45 [14];
  undefined1 auVar46 [12];
  undefined1 auVar47 [14];
  undefined1 auVar48 [12];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [12];
  undefined1 auVar52 [15];
  undefined1 auVar53 [15];
  undefined1 auVar54 [15];
  undefined1 auVar55 [15];
  unkbyte9 Var56;
  uint6 uVar57;
  uint uVar58;
  undefined6 uVar59;
  undefined2 uVar60;
  bool bVar61;
  bool bVar62;
  EVP_MD *pEVar63;
  char cVar64;
  char cVar65;
  char cVar66;
  char cVar67;
  char cVar68;
  char cVar69;
  int iVar70;
  uint uVar71;
  int iVar72;
  int iVar73;
  uint uVar74;
  int iVar75;
  undefined4 uVar76;
  int iVar77;
  uint uVar78;
  undefined8 uVar79;
  EVP_PKEY_CTX *pEVar80;
  undefined8 uVar81;
  char *pcVar82;
  undefined1 (*pauVar83) [16];
  void *__s;
  long lVar84;
  EVP_MD_CTX *pEVar85;
  code *pcVar86;
  EVP_CIPHER_CTX *pEVar87;
  uchar *puVar88;
  BIGNUM *a;
  EVP_PKEY *pEVar89;
  EVP_PKEY *peer;
  EVP_PKEY_CTX *pEVar90;
  long lVar91;
  long lVar92;
  void *pvVar93;
  EVP_PKEY_CTX *ctx;
  undefined *puVar94;
  EVP_MD *pEVar95;
  ulong uVar96;
  size_t sVar97;
  long *plVar98;
  long *plVar99;
  undefined8 *puVar100;
  undefined8 *puVar101;
  void *pvVar102;
  undefined4 *puVar103;
  undefined1 *puVar104;
  long *plVar105;
  uint uVar106;
  ulong uVar107;
  char *pcVar108;
  uint uVar109;
  undefined8 *puVar110;
  undefined8 *puVar111;
  ulong uVar112;
  undefined **ppuVar113;
  void *pvVar114;
  size_t *psVar115;
  double *pdVar116;
  undefined4 *puVar117;
  char cVar118;
  long *plVar119;
  long *plVar120;
  long in_FS_OFFSET;
  bool bVar121;
  bool bVar122;
  byte bVar123;
  undefined4 uVar124;
  char cVar142;
  undefined1 auVar128 [12];
  char cVar138;
  char cVar143;
  double dVar126;
  char cVar139;
  char cVar140;
  char cVar141;
  short sVar144;
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  ushort uVar145;
  undefined1 auVar146 [12];
  char cVar163;
  short sVar164;
  char cVar166;
  byte bVar167;
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  undefined1 auVar149 [16];
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  char cVar162;
  char cVar165;
  undefined1 auVar152 [16];
  undefined1 auVar159 [16];
  undefined1 auVar168 [16];
  undefined1 auVar169 [16];
  undefined1 auVar170 [16];
  undefined1 auVar171 [16];
  undefined1 auVar174 [16];
  undefined1 auVar175 [12];
  short sVar198;
  short sVar199;
  short sVar200;
  undefined1 auVar176 [16];
  undefined1 auVar177 [16];
  undefined1 auVar179 [16];
  undefined1 auVar184 [16];
  undefined1 auVar191 [16];
  undefined1 auVar194 [16];
  undefined1 auVar201 [16];
  undefined1 auVar204 [16];
  undefined1 auVar205 [16];
  undefined1 auVar206 [16];
  undefined1 auVar207 [16];
  undefined8 *local_438;
  undefined8 *local_428;
  long *local_420;
  long local_418;
  void *local_400;
  undefined8 local_3f0;
  uint local_3e8;
  int local_3e4;
  CONF *local_3e0;
  void *local_3d8;
  long *local_3d0;
  int local_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined4 local_340;
  undefined1 local_33c [4];
  EVP_CIPHER *local_338;
  long local_330;
  size_t local_328;
  EVP_PKEY_CTX *local_320;
  EVP_PKEY *local_318;
  EVP_MD *local_310;
  EVP_MD *local_308;
  EVP_MD *local_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined1 local_2c8 [16];
  undefined1 local_2b8 [16];
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined4 local_278 [8];
  undefined8 local_258;
  undefined8 local_230;
  undefined2 local_228;
  undefined2 local_226;
  undefined4 local_224;
  undefined1 local_220;
  undefined4 local_21f;
  undefined3 uStack_21b;
  undefined8 local_218;
  undefined6 uStack_210;
  undefined2 uStack_20a;
  undefined6 uStack_208;
  undefined1 local_1f8 [16];
  undefined8 local_1e8;
  char local_1d8 [15];
  undefined4 uStack_1c9;
  undefined2 uStack_1c5;
  char cStack_1c3;
  char acStack_1c2 [10];
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [16];
  undefined1 local_198 [112];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  char local_d8;
  char cStack_d7;
  char cStack_d6;
  char cStack_d5;
  char cStack_d4;
  char cStack_d3;
  char cStack_d2;
  char cStack_d1;
  char cStack_d0;
  char cStack_cf;
  char cStack_ce;
  char cStack_cd;
  char cStack_cc;
  char cStack_cb;
  char cStack_ca;
  char cStack_c9;
  undefined1 auStack_c8 [15];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  char local_68;
  char cStack_67;
  char cStack_66;
  char cStack_65;
  char cStack_64;
  char cStack_63;
  char cStack_62;
  char cStack_61;
  char cStack_60;
  char cStack_5f;
  char cStack_5e;
  char cStack_5d;
  char cStack_5c;
  char cStack_5b;
  char cStack_5a;
  char cStack_59;
  undefined1 auStack_58 [15];
  long local_40;
  undefined6 uVar125;
  undefined1 auVar127 [12];
  undefined1 auVar129 [14];
  undefined1 auVar137 [16];
  undefined1 auVar136 [16];
  undefined1 auVar153 [16];
  undefined1 auVar154 [16];
  undefined1 auVar160 [16];
  undefined1 auVar155 [16];
  undefined1 auVar156 [16];
  undefined1 auVar161 [16];
  undefined1 auVar157 [16];
  undefined1 auVar158 [16];
  undefined1 auVar172 [16];
  undefined1 auVar173 [16];
  undefined1 auVar180 [16];
  undefined1 auVar181 [16];
  undefined1 auVar195 [16];
  undefined1 auVar185 [16];
  undefined1 auVar182 [16];
  undefined1 auVar186 [16];
  undefined1 auVar192 [16];
  undefined1 auVar196 [16];
  undefined1 auVar187 [16];
  undefined1 auVar178 [16];
  undefined1 auVar183 [16];
  undefined1 auVar188 [16];
  undefined1 auVar193 [16];
  undefined1 auVar197 [16];
  undefined1 auVar189 [16];
  undefined1 auVar190 [16];
  undefined1 auVar202 [16];
  undefined1 auVar203 [16];
  
  bVar123 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_1d8[0] = '\0';
  local_1d8[1] = '\0';
  local_1d8[2] = '\0';
  local_1d8[3] = '\0';
  local_1d8[4] = '\0';
  local_1d8[5] = '\0';
  local_1d8[6] = '\0';
  local_1d8[7] = '\0';
  local_1d8[8] = '\0';
  local_1d8[9] = '\0';
  local_1d8[10] = '\0';
  local_1d8[0xb] = '\0';
  local_1d8[0xc] = '\0';
  local_1d8[0xd] = '\0';
  local_1d8[0xe] = '\0';
  local_2f8 = __LC153;
  uStack_2f0 = _UNK_0011bc18;
  local_2d8 = _LC155;
  uStack_1c9 = 0;
  uStack_1c5 = 0;
  cStack_1c3 = '\0';
  acStack_1c2[0] = '\0';
  acStack_1c2[1] = '\0';
  acStack_1c2[2] = '\0';
  acStack_1c2[3] = '\0';
  acStack_1c2[4] = '\0';
  acStack_1c2[5] = '\0';
  acStack_1c2[6] = '\0';
  acStack_1c2[7] = '\0';
  acStack_1c2[8] = '\0';
  local_2e8 = _LC155;
  uStack_2e0 = _UNK_0011bc28;
  local_338 = (EVP_CIPHER *)0x0;
  local_330 = 0;
  local_340 = 0;
  local_320 = (EVP_PKEY_CTX *)0x0;
  local_21f = 0;
  uStack_21b = 0;
  local_224 = 0;
  local_220 = 0;
  local_228 = 0;
  local_218 = 0;
  uStack_210 = 0;
  local_d8 = '\0';
  cStack_d7 = '\0';
  cStack_d6 = '\0';
  cStack_d5 = '\0';
  cStack_d4 = '\0';
  cStack_d3 = '\0';
  cStack_d2 = '\0';
  cStack_d1 = '\0';
  cStack_d0 = '\0';
  cStack_cf = '\0';
  cStack_ce = '\0';
  cStack_cd = '\0';
  cStack_cc = '\0';
  cStack_cb = '\0';
  cStack_ca = '\0';
  local_68 = '\0';
  cStack_67 = '\0';
  cStack_66 = '\0';
  cStack_65 = '\0';
  cStack_64 = '\0';
  cStack_63 = '\0';
  cStack_62 = '\0';
  cStack_61 = '\0';
  cStack_60 = '\0';
  cStack_5f = '\0';
  cStack_5e = '\0';
  cStack_5d = '\0';
  cStack_5c = '\0';
  cStack_5b = '\0';
  cStack_5a = '\0';
  uStack_20a = 0;
  uStack_208 = 0;
  local_1e8 = 0;
  local_226 = 0;
  local_1f8 = (undefined1  [16])0x0;
  local_128 = (undefined1  [16])0x0;
  local_118 = (undefined1  [16])0x0;
  local_108 = (undefined1  [16])0x0;
  local_f8 = (undefined1  [16])0x0;
  local_e8 = (undefined1  [16])0x0;
  cStack_c9 = '\0';
  auStack_c8 = SUB1615((undefined1  [16])0x0,1);
  local_b8 = (undefined1  [16])0x0;
  local_a8 = (undefined1  [16])0x0;
  local_98 = (undefined1  [16])0x0;
  local_88 = (undefined1  [16])0x0;
  local_78 = (undefined1  [16])0x0;
  cStack_59 = '\0';
  auStack_58 = SUB1615((undefined1  [16])0x0,1);
  uVar79 = opt_init(param_1,param_2,speed_options);
  bVar61 = false;
  bVar62 = false;
  iVar72 = 2;
  iVar75 = 0;
  local_3e8 = 0;
  uVar58 = 6;
  iVar77 = 0;
  bVar122 = false;
  local_3f0 = 0;
  local_3e0 = (CONF *)0x0;
LAB_00105d50:
  iVar70 = opt_next();
joined_r0x00105d57:
  if (iVar70 == 0) {
    uVar106 = 0;
    local_420 = (long *)OPENSSL_sk_new(kems_cmp);
    uVar81 = app_get0_libctx();
    EVP_KEM_do_all_provided(uVar81,collect_kem,local_420);
    kems_algs_len = 0;
    goto LAB_0010653c;
  }
  if (iVar70 < 0x5df) {
    if (0x5dc < iVar70) {
      iVar70 = opt_rand(iVar70);
      if (iVar70 == 0) goto LAB_00105db0;
      goto LAB_00105d50;
    }
    switch(iVar70) {
    default:
      goto LAB_00105d50;
    case 1:
      __s = (void *)0x0;
      func_0x0011d410(speed_options);
      local_400 = (void *)0x0;
      uVar106 = 0;
      local_3e4 = 0;
      local_3f0 = 0;
      goto LAB_00106386;
    case 2:
      usertime = 0;
      goto LAB_00105d50;
    case 3:
      if (acStack_1c2[3] != '\0') {
        BIO_printf(_bio_err,"%s: -evp option cannot be used more than once\n",uVar79);
        break;
      }
      ERR_set_mark();
      uVar81 = func_0x0011d418();
      iVar70 = opt_cipher_silent(uVar81,&local_338);
      if (iVar70 == 0) {
        uVar81 = func_0x0011d418();
        local_300 = (EVP_MD *)0x0;
        iVar70 = opt_md_silent(uVar81,&local_300);
        if (iVar70 != 0) {
          pEVar85 = (EVP_MD_CTX *)EVP_MD_CTX_new();
          if (pEVar85 == (EVP_MD_CTX *)0x0) {
            EVP_MD_CTX_free(0);
            EVP_MD_free(local_300);
          }
          else {
            iVar70 = EVP_DigestInit(pEVar85,local_300);
            if (iVar70 < 1) {
              EVP_MD_CTX_free(pEVar85);
              EVP_MD_free(local_300);
            }
            else {
              EVP_MD_CTX_free(pEVar85);
              EVP_MD_free(local_300);
              evp_md_name = (undefined *)func_0x0011d418();
            }
          }
        }
      }
      if ((local_338 != (EVP_CIPHER *)0x0) || (evp_md_name != (undefined *)0x0))
      goto code_r0x001063fe;
      func_0x0011d470();
      uVar81 = func_0x0011d418();
      BIO_printf(_bio_err,"%s: %s is an unknown cipher or digest\n",uVar79,uVar81);
      goto LAB_00105e28;
    case 4:
      uVar81 = func_0x0011d418();
      local_300 = (EVP_MD *)0x0;
      iVar70 = opt_md_silent(uVar81,&local_300);
      if (iVar70 != 0) {
        pEVar85 = (EVP_MD_CTX *)EVP_MD_CTX_new();
        if (pEVar85 == (EVP_MD_CTX *)0x0) {
          EVP_MD_CTX_free(0);
          EVP_MD_free(local_300);
        }
        else {
          iVar70 = EVP_DigestInit(pEVar85,local_300);
          if (0 < iVar70) {
            EVP_MD_CTX_free(pEVar85);
            EVP_MD_free(local_300);
            evp_mac_mdname = (undefined *)func_0x0011d418();
            local_1d8[9] = '\x01';
            goto LAB_00105d50;
          }
          EVP_MD_CTX_free(pEVar85);
          EVP_MD_free(local_300);
        }
      }
      uVar81 = func_0x0011d418();
      BIO_printf(_bio_err,"%s: %s is an unknown digest\n",uVar79,uVar81);
      goto LAB_00105e28;
    case 5:
      decrypt = 1;
      goto LAB_00105d50;
    case 6:
      local_3f0 = func_0x0011d418();
      goto LAB_00105d50;
    case 7:
      iVar75 = func_0x0011d448();
      if (iVar75 < 0) {
        BIO_printf(_bio_err,"%s: multi argument too large\n",uVar79);
code_r0x00106641:
        local_380 = 0;
        goto code_r0x0010631e;
      }
      goto LAB_00105d50;
    case 8:
      mr = 1;
      goto LAB_00105d50;
    case 9:
      bVar122 = true;
      goto LAB_00105d50;
    case 10:
      iVar77 = func_0x0011d448();
      if (iVar77 < 0x41) goto LAB_00105d50;
      BIO_printf(_bio_err,"%s: Maximum offset is %d\n",uVar79,0x40);
      break;
    case 0xb:
      local_3e8 = func_0x0011d448();
      if (local_3e8 < 100000) {
        iVar70 = func_0x0011d450();
        if (iVar70 != 0) goto LAB_00105d50;
        BIO_printf(_bio_err,"%s: async_jobs specified but async not supported\n",uVar79);
        if (testmode != 0) goto code_r0x00106641;
      }
      else {
        BIO_printf(_bio_err,"%s: too many async_jobs\n",uVar79);
      }
      break;
    case -1:
      break;
    }
    BIO_printf(_bio_err,"%s: Use -help for summary.\n",uVar79);
    goto LAB_00105e28;
  }
  switch(iVar70) {
  case 0x641:
  case 0x642:
  case 0x643:
  case 0x644:
    iVar70 = func_0x0011d3e0(iVar70);
    if (iVar70 != 0) goto LAB_00105d50;
    break;
  default:
    goto LAB_00105d50;
  case 0x646:
    uVar81 = func_0x0011d418();
    local_3e0 = (CONF *)func_0x0011d458(uVar81);
    if (local_3e0 != (CONF *)0x0) goto LAB_00105d50;
    break;
  case 0x647:
    iVar72 = func_0x0011d448();
    goto LAB_00105d50;
  case 0x648:
    uVar76 = func_0x0011d448();
    local_2d8 = CONCAT44(uVar76,uVar76);
    local_2f8 = CONCAT44(uVar76,uVar76);
    uStack_2f0 = CONCAT44(uVar76,uVar76);
    local_2e8 = CONCAT44(uVar76,uVar76);
    uStack_2e0 = CONCAT44(uVar76,uVar76);
    goto LAB_00105d50;
  case 0x649:
    local_340 = func_0x0011d448();
    uVar58 = 1;
    lengths = (undefined *)&local_340;
    goto LAB_00105d50;
  case 0x64a:
    aead = 1;
    goto LAB_00105d50;
  case 0x64b:
    uVar81 = func_0x0011d418();
    local_300 = (EVP_MD *)0x0;
    iVar70 = opt_cipher_silent(uVar81,&local_300);
    if (iVar70 != 0) {
      pEVar87 = EVP_CIPHER_CTX_new();
      if (pEVar87 == (EVP_CIPHER_CTX *)0x0) {
        EVP_CIPHER_CTX_free((EVP_CIPHER_CTX *)0x0);
        EVP_CIPHER_free(local_300);
      }
      else {
        iVar70 = EVP_CipherInit_ex(pEVar87,(EVP_CIPHER *)local_300,(ENGINE *)0x0,(uchar *)0x0,
                                   (uchar *)0x0,1);
        if (0 < iVar70) {
          EVP_CIPHER_CTX_free(pEVar87);
          EVP_CIPHER_free(local_300);
          evp_mac_ciphername = (undefined *)func_0x0011d418();
          acStack_1c2[6] = '\x01';
          goto LAB_00105d50;
        }
        EVP_CIPHER_CTX_free(pEVar87);
        EVP_CIPHER_free(local_300);
      }
    }
    uVar81 = func_0x0011d418();
    BIO_printf(_bio_err,"%s: %s is an unknown cipher\n",uVar79,uVar81);
    goto LAB_00105e28;
  case 0x64c:
    domlock = 1;
    goto LAB_00105d50;
  case 0x64d:
    testmode = 1;
    goto LAB_00105d50;
  case 0x64e:
    bVar62 = true;
    goto LAB_00105d50;
  case 0x64f:
    bVar61 = true;
    goto LAB_00105d50;
  }
LAB_00105db0:
  __s = (void *)0x0;
  local_380 = 1;
  local_400 = (void *)0x0;
  uVar106 = 0;
  local_418 = 0;
  local_420 = (long *)0x0;
  local_3e4 = 0;
  local_3f0 = 0;
  goto LAB_00105e75;
LAB_0010653c:
  uVar71 = OPENSSL_sk_num(local_420);
  if (uVar71 <= uVar106) goto LAB_00106a81;
  uVar81 = OPENSSL_sk_value(local_420,uVar106);
  pcVar82 = (char *)EVP_KEM_get0_name(uVar81);
  iVar70 = strcmp(pcVar82,"RSA");
  if (iVar70 == 0) {
    if (0x6e < kems_algs_len + 7) {
LAB_00107b6a:
      BIO_printf(_bio_err,"Too many KEMs registered. Change MAX_KEM_NUM.\n");
LAB_00107b87:
      local_3e4 = 0;
      __s = (void *)0x0;
      local_400 = (void *)0x0;
      local_418 = 0;
      local_3f0 = 0;
      uVar106 = 0;
      goto LAB_00105e6a;
    }
    ppuVar113 = &rsa_choices;
    uVar112 = kems_algs_len;
    do {
      pcVar82 = *ppuVar113;
      kems_algs_len = uVar112 + 1;
      local_128[uVar112] = 1;
      ppuVar113 = ppuVar113 + 2;
      pcVar82 = CRYPTO_strdup(pcVar82,"apps/speed.c",0x8ae);
      (&kems_algname)[uVar112] = pcVar82;
      uVar112 = kems_algs_len;
    } while (ppuVar113 != (undefined **)&DAT_0011b4d0);
  }
  else {
    pcVar82 = (char *)EVP_KEM_get0_name(uVar81);
    uVar112 = kems_algs_len;
    if (((*pcVar82 == 'E') && (pcVar82[1] == 'C')) && (pcVar82[2] == '\0')) {
      if (0x6e < kems_algs_len + 3) {
        BIO_printf(_bio_err,"Too many KEMs registered. Change MAX_KEM_NUM.\n");
        goto LAB_00107b87;
      }
      local_128[kems_algs_len] = 1;
      kems_algs_len = kems_algs_len + 1;
      pcVar82 = CRYPTO_strdup("ECP-256","apps/speed.c",0x8b7);
      (&kems_algname)[uVar112] = pcVar82;
      uVar112 = kems_algs_len;
      local_128[kems_algs_len] = 1;
      kems_algs_len = kems_algs_len + 1;
      pcVar82 = CRYPTO_strdup("ECP-384","apps/speed.c",0x8b9);
      (&kems_algname)[uVar112] = pcVar82;
      uVar112 = kems_algs_len;
      local_128[kems_algs_len] = 1;
      kems_algs_len = kems_algs_len + 1;
      pcVar82 = CRYPTO_strdup("ECP-521","apps/speed.c",0x8bb);
      (&kems_algname)[uVar112] = pcVar82;
    }
    else {
      if (0x6e < kems_algs_len + 1) goto LAB_00107b6a;
      local_128[kems_algs_len] = 1;
      pcVar82 = (char *)EVP_KEM_get0_name(uVar81);
      uVar112 = kems_algs_len;
      kems_algs_len = kems_algs_len + 1;
      pcVar82 = CRYPTO_strdup(pcVar82,"apps/speed.c",0x8c3);
      (&kems_algname)[uVar112] = pcVar82;
    }
  }
  uVar106 = uVar106 + 1;
  goto LAB_0010653c;
LAB_00106a81:
  uVar106 = 0;
  OPENSSL_sk_pop_free(local_420,EVP_KEM_free);
  local_418 = OPENSSL_sk_new(signatures_cmp);
  uVar81 = app_get0_libctx();
  EVP_SIGNATURE_do_all_provided(uVar81,collect_signatures,local_418);
  sigs_algs_len = 0;
  while (uVar71 = OPENSSL_sk_num(local_418), uVar106 < uVar71) {
    uVar81 = OPENSSL_sk_value(local_418,uVar106);
    pcVar82 = (char *)EVP_SIGNATURE_get0_name(uVar81);
    iVar70 = strcmp(pcVar82,"RSA");
    if (iVar70 == 0) {
      if (0x6e < sigs_algs_len + 7) {
LAB_00107e74:
        BIO_printf(_bio_err,"Too many signatures registered. Change MAX_SIG_NUM.\n");
        goto LAB_00107c4a;
      }
      ppuVar113 = &rsa_choices;
      uVar112 = sigs_algs_len;
      do {
        pcVar82 = *ppuVar113;
        sigs_algs_len = uVar112 + 1;
        local_b8[uVar112] = 1;
        ppuVar113 = ppuVar113 + 2;
        pcVar82 = CRYPTO_strdup(pcVar82,"apps/speed.c",0x8db);
        (&sigs_algname)[uVar112] = pcVar82;
        uVar112 = sigs_algs_len;
      } while (ppuVar113 != (undefined **)&DAT_0011b4d0);
      uVar106 = uVar106 + 1;
    }
    else {
      iVar70 = strcmp(pcVar82,"DSA");
      uVar112 = sigs_algs_len;
      if (iVar70 == 0) {
        if (0x6e < sigs_algs_len + 2) {
          BIO_printf(_bio_err,"Too many signatures registered. Change MAX_SIG_NUM.\n");
          goto LAB_00107c4a;
        }
        local_b8[sigs_algs_len] = 1;
        uVar106 = uVar106 + 1;
        sigs_algs_len = sigs_algs_len + 1;
        pcVar82 = CRYPTO_strdup("dsa1024","apps/speed.c",0x8e7);
        (&sigs_algname)[uVar112] = pcVar82;
        uVar112 = sigs_algs_len;
        local_b8[sigs_algs_len] = 1;
        sigs_algs_len = sigs_algs_len + 1;
        pcVar82 = CRYPTO_strdup("dsa2048","apps/speed.c",0x8e7);
        (&sigs_algname)[uVar112] = pcVar82;
      }
      else {
        iVar70 = strcmp(pcVar82,"ED25519");
        if ((((((iVar70 != 0) && (iVar70 = strcmp(pcVar82,"ED448"), iVar70 != 0)) &&
              (iVar70 = strcmp(pcVar82,"ECDSA"), iVar70 != 0)) &&
             ((iVar70 = strcmp(pcVar82,"HMAC"), iVar70 != 0 &&
              (iVar70 = strcmp(pcVar82,"SIPHASH"), iVar70 != 0)))) &&
            (iVar70 = strcmp(pcVar82,"POLY1305"), iVar70 != 0)) &&
           ((iVar70 = strcmp(pcVar82,"CMAC"), iVar70 != 0 &&
            (iVar70 = strcmp(pcVar82,"SM2"), uVar112 = sigs_algs_len, iVar70 != 0)))) {
          if (0x6e < sigs_algs_len + 1) goto LAB_00107e74;
          local_b8[sigs_algs_len] = 1;
          sigs_algs_len = sigs_algs_len + 1;
          pcVar82 = CRYPTO_strdup(pcVar82,"apps/speed.c",0x8fb);
          (&sigs_algname)[uVar112] = pcVar82;
        }
        uVar106 = uVar106 + 1;
      }
    }
  }
  OPENSSL_sk_pop_free(local_418,EVP_SIGNATURE_free);
  iVar70 = opt_num_rest();
  local_420 = (long *)opt_rest();
  iVar73 = app_RAND_load();
  uVar96 = kems_algs_len;
  uVar112 = sigs_algs_len;
  if (iVar73 == 0) {
LAB_00105e28:
    __s = (void *)0x0;
    local_400 = (void *)0x0;
    local_418 = 0;
    local_420 = (long *)0x0;
    local_3e4 = 0;
    local_3f0 = 0;
    uVar106 = 0;
  }
  else {
    pcVar82 = (char *)*local_420;
    if (pcVar82 == (char *)0x0) {
      cVar118 = '\0';
    }
    else {
      cVar118 = '\0';
      do {
        ppuVar113 = &doit_choices;
        do {
          iVar73 = strcmp(pcVar82,*ppuVar113);
          if (iVar73 == 0) {
            bVar5 = true;
            local_1d8[*(uint *)(ppuVar113 + 1)] = '\x01';
            goto LAB_00106dd0;
          }
          ppuVar113 = ppuVar113 + 2;
        } while (ppuVar113 != (undefined **)0x11b750);
        bVar5 = false;
LAB_00106dd0:
        iVar73 = strcmp(pcVar82,"des");
        if (iVar73 == 0) {
          bVar5 = true;
          local_1d8[10] = (char)_LC181;
          local_1d8[0xb] = (char)((ushort)_LC181 >> 8);
        }
        iVar73 = strcmp(pcVar82,"sha");
        if (iVar73 == 0) {
          local_1d8[4] = '\x01';
          bVar5 = true;
          local_1d8[6] = '\x01';
          local_1d8[7] = '\x01';
        }
        iVar73 = strcmp(pcVar82,"openssl");
        cVar3 = *pcVar82;
        if (iVar73 == 0) {
          bVar5 = true;
        }
        if (((cVar3 == 'r') && (pcVar82[1] == 's')) && (pcVar82[2] == 'a')) {
          if (pcVar82[3] == '\0') {
            bVar5 = true;
            local_21f = 0x1010101;
            uStack_21b = 0x10101;
          }
          iVar73 = strcmp(pcVar82,"rsa512");
          if (iVar73 == 0) {
            lVar84 = 0;
          }
          else {
            iVar73 = strcmp(pcVar82,"rsa1024");
            if (iVar73 == 0) {
              lVar84 = 1;
            }
            else {
              iVar73 = strcmp(pcVar82,"rsa2048");
              if (iVar73 == 0) {
                lVar84 = 2;
              }
              else {
                iVar73 = strcmp(pcVar82,"rsa3072");
                if (iVar73 == 0) {
                  lVar84 = 3;
                }
                else {
                  iVar73 = strcmp(pcVar82,"rsa4096");
                  if (iVar73 == 0) {
                    lVar84 = 4;
                  }
                  else {
                    iVar73 = strcmp(pcVar82,"rsa7680");
                    if (iVar73 == 0) {
                      lVar84 = 5;
                    }
                    else {
                      iVar73 = strcmp(pcVar82,"rsa15360");
                      if (iVar73 != 0) goto LAB_00106f0d;
                      lVar84 = 6;
                    }
                  }
                }
              }
            }
          }
          *(undefined1 *)((long)&local_21f + lVar84) = 1;
          bVar5 = true;
        }
LAB_00106f0d:
        iVar73 = strncmp(pcVar82,"ffdh",4);
        if (iVar73 == 0) {
          if (pcVar82[4] == '\0') {
            local_220 = 1;
            bVar5 = true;
            local_224 = 0x1010101;
          }
          iVar73 = strcmp(pcVar82,"ffdh2048");
          if (iVar73 == 0) {
            lVar84 = 0;
          }
          else {
            iVar73 = strcmp(pcVar82,"ffdh3072");
            if (iVar73 == 0) {
              lVar84 = 1;
            }
            else {
              iVar73 = strcmp(pcVar82,"ffdh4096");
              if (iVar73 == 0) {
                lVar84 = 2;
              }
              else {
                iVar73 = strcmp(pcVar82,"ffdh6144");
                if (iVar73 == 0) {
                  lVar84 = 3;
                }
                else {
                  iVar73 = strcmp(pcVar82,"ffdh8192");
                  if (iVar73 != 0) goto LAB_00106f29;
                  lVar84 = 4;
                }
              }
            }
          }
          *(undefined1 *)((long)&local_224 + lVar84) = 2;
          bVar5 = true;
        }
LAB_00106f29:
        if (((cVar3 == 'd') && (pcVar82[1] == 's')) && (pcVar82[2] == 'a')) {
          if (pcVar82[3] == '\0') {
            bVar5 = true;
            local_228 = 0x101;
          }
          iVar73 = strcmp(pcVar82,"dsa1024");
          if (iVar73 == 0) {
            lVar84 = 0;
          }
          else {
            iVar73 = strcmp(pcVar82,"dsa2048");
            if (iVar73 != 0) goto LAB_00106f73;
            lVar84 = 1;
          }
          *(undefined1 *)((long)&local_228 + lVar84) = 2;
          bVar5 = true;
        }
LAB_00106f73:
        iVar73 = strcmp(pcVar82,"aes");
        if (iVar73 == 0) {
          cStack_1c3 = '\x01';
          bVar5 = true;
          uStack_1c5 = 0x101;
        }
        iVar73 = strcmp(pcVar82,"camellia");
        if (iVar73 == 0) {
          acStack_1c2[2] = '\x01';
          bVar5 = true;
          acStack_1c2[0] = '\x01';
          acStack_1c2[1] = '\x01';
        }
        iVar73 = strncmp(pcVar82,"ecdsa",5);
        if (iVar73 == 0) {
          if (pcVar82[5] == '\0') {
            local_218 = CONCAT62(_UNK_0011bc32,_LC181);
            bVar5 = true;
            uStack_210 = (undefined6)_UNK_0011bc38;
            uStack_20a = 0x101;
            uStack_208 = 0x10101010101;
          }
          ppuVar113 = &ecdsa_choices;
          do {
            iVar73 = strcmp(pcVar82,*ppuVar113);
            if (iVar73 == 0) {
              bVar5 = true;
              *(undefined1 *)((long)&local_218 + (ulong)*(uint *)(ppuVar113 + 1)) = 2;
              break;
            }
            ppuVar113 = ppuVar113 + 2;
          } while (ppuVar113 != &rsa_choices);
        }
        iVar73 = strncmp(pcVar82,"ecdh",4);
        if (iVar73 == 0) {
          if (pcVar82[4] == '\0') {
            local_1f8._2_6_ = _UNK_0011bc32;
            local_1f8._0_2_ = _LC181;
            local_1f8._8_8_ = _UNK_0011bc38;
            bVar5 = true;
            local_1e8 = 0x101010101010101;
          }
          ppuVar113 = &ecdh_choices;
          do {
            iVar73 = strcmp(pcVar82,*ppuVar113);
            if (iVar73 == 0) {
              bVar5 = true;
              local_1f8[*(uint *)(ppuVar113 + 1)] = 2;
              break;
            }
            ppuVar113 = ppuVar113 + 2;
          } while (ppuVar113 != &ecdsa_choices);
        }
        iVar73 = strcmp(pcVar82,"eddsa");
        if (iVar73 == 0) {
          local_226 = 0x101;
          bVar5 = true;
        }
        iVar73 = strcmp(pcVar82,"ed25519");
        if (iVar73 == 0) {
          lVar84 = 0;
LAB_00107ee0:
          *(undefined1 *)((long)&local_226 + lVar84) = 2;
          bVar5 = true;
        }
        else {
          iVar73 = strcmp(pcVar82,"ed448");
          if (iVar73 == 0) {
            lVar84 = 1;
            goto LAB_00107ee0;
          }
        }
        iVar73 = strcmp(pcVar82,"sm2");
        if (iVar73 == 0) {
          cVar118 = '\x01';
          bVar5 = true;
        }
        iVar73 = strcmp(pcVar82,"curveSM2");
        if (iVar73 == 0) {
          bVar5 = true;
          cVar118 = '\x02';
        }
        if (uVar96 != 0) {
          uVar107 = 0;
          do {
            iVar73 = strcmp((char *)(&kems_algname)[uVar107],pcVar82);
            if (iVar73 == 0) {
              bVar62 = true;
              bVar5 = true;
              local_128[uVar107 & 0xffffffff] = local_128[uVar107 & 0xffffffff] + '\x01';
              break;
            }
            uVar107 = uVar107 + 1;
          } while (uVar96 != uVar107);
        }
        if (uVar112 != 0) {
          uVar107 = 0;
          do {
            iVar73 = strcmp((char *)(&sigs_algname)[uVar107],pcVar82);
            if (iVar73 == 0) {
              bVar61 = true;
              bVar5 = true;
              local_b8[uVar107 & 0xffffffff] = local_b8[uVar107 & 0xffffffff] + '\x01';
              break;
            }
            uVar107 = uVar107 + 1;
          } while (uVar112 != uVar107);
        }
        iVar73 = strcmp(pcVar82,"kmac");
        if (iVar73 != 0) {
          iVar73 = strcmp(pcVar82,"cmac");
          if (iVar73 == 0) goto LAB_0010717d;
          if (bVar5) goto LAB_00107185;
          BIO_printf(_bio_err,"%s: Unknown algorithm %s\n",uVar79,pcVar82);
          local_418 = 0;
LAB_00107c4a:
          local_3e4 = 0;
          local_400 = (void *)0x0;
          __s = (void *)0x0;
          local_420 = (long *)0x0;
          local_3f0 = 0;
          uVar106 = 0;
          goto LAB_00105e6a;
        }
        acStack_1c2[7] = '\x01';
        acStack_1c2[8] = '\x01';
        iVar73 = strcmp(pcVar82,"cmac");
        if (iVar73 == 0) {
LAB_0010717d:
          acStack_1c2[6] = '\x01';
        }
LAB_00107185:
        local_420 = local_420 + 1;
        pcVar82 = (char *)*local_420;
      } while (pcVar82 != (char *)0x0);
    }
    if (aead != 0) {
      if (local_338 == (EVP_CIPHER *)0x0) {
        BIO_printf(_bio_err,"-aead can be used only with an AEAD cipher\n");
      }
      else {
        uVar112 = EVP_CIPHER_get_flags();
        if ((uVar112 & 0x200000) != 0) goto LAB_001071c9;
        uVar79 = EVP_CIPHER_get0_name(local_338);
        BIO_printf(_bio_err,"%s is not an AEAD cipher\n",uVar79);
      }
      goto LAB_00105e28;
    }
LAB_001071c9:
    if (kems_algs_len != 0) {
      if (kems_algs_len - 1 < 0xf) {
        uVar106 = 0;
        uVar112 = 0;
LAB_001072e2:
        if ((int)uVar106 <= (int)(uint)(byte)local_128[uVar112]) {
          uVar106 = (uint)(byte)local_128[uVar112];
        }
        if (uVar112 + 1 < kems_algs_len) {
          if ((int)uVar106 < (int)(uint)(byte)local_128[uVar112 + 1]) {
            uVar106 = (uint)(byte)local_128[uVar112 + 1];
          }
          if (uVar112 + 2 < kems_algs_len) {
            if ((int)uVar106 < (int)(uint)(byte)local_128[uVar112 + 2]) {
              uVar106 = (uint)(byte)local_128[uVar112 + 2];
            }
            if (uVar112 + 3 < kems_algs_len) {
              if ((int)uVar106 < (int)(uint)(byte)local_128[uVar112 + 3]) {
                uVar106 = (uint)(byte)local_128[uVar112 + 3];
              }
              if (uVar112 + 4 < kems_algs_len) {
                if ((int)uVar106 < (int)(uint)(byte)local_128[uVar112 + 4]) {
                  uVar106 = (uint)(byte)local_128[uVar112 + 4];
                }
                if (uVar112 + 5 < kems_algs_len) {
                  if ((int)uVar106 < (int)(uint)(byte)local_128[uVar112 + 5]) {
                    uVar106 = (uint)(byte)local_128[uVar112 + 5];
                  }
                  if (uVar112 + 6 < kems_algs_len) {
                    if ((int)uVar106 < (int)(uint)(byte)local_128[uVar112 + 6]) {
                      uVar106 = (uint)(byte)local_128[uVar112 + 6];
                    }
                    if (uVar112 + 7 < kems_algs_len) {
                      if ((int)uVar106 < (int)(uint)(byte)local_128[uVar112 + 7]) {
                        uVar106 = (uint)(byte)local_128[uVar112 + 7];
                      }
                      if (uVar112 + 8 < kems_algs_len) {
                        if ((int)uVar106 < (int)(uint)(byte)local_128[uVar112 + 8]) {
                          uVar106 = (uint)(byte)local_128[uVar112 + 8];
                        }
                        if (uVar112 + 9 < kems_algs_len) {
                          if ((int)uVar106 < (int)(uint)(byte)local_128[uVar112 + 9]) {
                            uVar106 = (uint)(byte)local_128[uVar112 + 9];
                          }
                          if (uVar112 + 10 < kems_algs_len) {
                            if ((int)uVar106 < (int)(uint)(byte)local_128[uVar112 + 10]) {
                              uVar106 = (uint)(byte)local_128[uVar112 + 10];
                            }
                            if (uVar112 + 0xb < kems_algs_len) {
                              if ((int)uVar106 < (int)(uint)(byte)local_128[uVar112 + 0xb]) {
                                uVar106 = (uint)(byte)local_128[uVar112 + 0xb];
                              }
                              if (uVar112 + 0xc < kems_algs_len) {
                                if ((int)uVar106 < (int)(uint)(byte)local_128[uVar112 + 0xc]) {
                                  uVar106 = (uint)(byte)local_128[uVar112 + 0xc];
                                }
                                if (uVar112 + 0xd < kems_algs_len) {
                                  if ((int)uVar106 < (int)(uint)(byte)local_128[uVar112 + 0xd]) {
                                    uVar106 = (uint)(byte)local_128[uVar112 + 0xd];
                                  }
                                  if ((uVar112 + 0xe < kems_algs_len) &&
                                     ((int)uVar106 < (int)(uint)(byte)local_128[uVar112 + 0xe])) {
                                    uVar106 = (uint)(byte)local_128[uVar112 + 0xe];
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
        if (1 < (int)uVar106) {
          if (0xe < kems_algs_len - 1) goto LAB_00107456;
          uVar96 = 0;
          uVar112 = 0;
          goto LAB_0010750b;
        }
      }
      else {
        auVar176 = (undefined1  [16])0x0;
        pauVar83 = &local_128;
        uVar112 = kems_algs_len & 0xfffffffffffffff0;
        puVar104 = *pauVar83;
        do {
          auVar130 = *pauVar83;
          pauVar83 = pauVar83 + 1;
          bVar167 = auVar130[7];
          auVar11[0xd] = 0;
          auVar11._0_13_ = auVar130._0_13_;
          auVar11[0xe] = bVar167;
          auVar14[0xc] = auVar130[6];
          auVar14._0_12_ = auVar130._0_12_;
          auVar14._13_2_ = auVar11._13_2_;
          auVar16[0xb] = 0;
          auVar16._0_11_ = auVar130._0_11_;
          auVar16._12_3_ = auVar14._12_3_;
          auVar24[10] = auVar130[5];
          auVar24._0_10_ = auVar130._0_10_;
          auVar24._11_4_ = auVar16._11_4_;
          auVar27[9] = 0;
          auVar27._0_9_ = auVar130._0_9_;
          auVar27._10_5_ = auVar24._10_5_;
          auVar29[8] = auVar130[4];
          auVar29._0_8_ = auVar130._0_8_;
          auVar29._9_6_ = auVar27._9_6_;
          auVar33._7_8_ = 0;
          auVar33._0_7_ = auVar29._8_7_;
          Var34 = CONCAT81(SUB158(auVar33 << 0x40,7),auVar130[3]);
          auVar52._9_6_ = 0;
          auVar52._0_9_ = Var34;
          auVar35._1_10_ = SUB1510(auVar52 << 0x30,5);
          auVar35[0] = auVar130[2];
          auVar53._11_4_ = 0;
          auVar53._0_11_ = auVar35;
          auVar36._1_12_ = SUB1512(auVar53 << 0x20,3);
          auVar36[0] = auVar130[1];
          uVar145 = CONCAT11(0,auVar130[0]);
          auVar31._2_13_ = auVar36;
          auVar31._0_2_ = uVar145;
          uVar106 = CONCAT13(0,CONCAT12(auVar130[9],(ushort)auVar130[8]));
          auVar12._10_2_ = 0;
          auVar12._0_10_ = auVar31._0_10_;
          auVar12._12_2_ = (short)Var34;
          uVar57 = CONCAT42(auVar12._10_4_,auVar35._0_2_);
          auVar37._6_8_ = 0;
          auVar37._0_6_ = uVar57;
          Var38 = CONCAT82(SUB148(auVar37 << 0x40,6),auVar36._0_2_);
          auVar147._0_4_ = CONCAT22(0,uVar145);
          auVar147._4_10_ = Var38;
          auVar147._14_2_ = 0;
          auVar204._0_4_ = CONCAT22(0,auVar29._8_2_);
          auVar204._4_2_ = auVar24._10_2_;
          auVar204._6_2_ = 0;
          auVar204._8_2_ = auVar14._12_2_;
          auVar204._10_2_ = 0;
          auVar204[0xc] = bVar167;
          auVar204._13_3_ = 0;
          auVar148._0_4_ = -(uint)(auVar147._0_4_ < auVar204._0_4_);
          auVar148._4_4_ = -(uint)((uint)Var38 < (uint)auVar24._10_2_);
          auVar148._8_4_ = -(uint)((int)uVar57 < (int)(uint)auVar14._12_2_);
          auVar148._12_4_ = -(uint)(auVar12._10_4_ >> 0x10 < (uint)bVar167);
          auVar148 = ~auVar148 & auVar147 | auVar204 & auVar148;
          auVar17[0xc] = auVar130[0xb];
          auVar17._0_12_ = ZEXT112(auVar130[0xc]) << 0x40;
          auVar18._10_3_ = auVar17._10_3_;
          auVar18._0_10_ = (unkuint10)auVar130[10] << 0x40;
          auVar39._5_8_ = 0;
          auVar39._0_5_ = auVar18._8_5_;
          auVar19[4] = auVar130[9];
          auVar19._0_4_ = uVar106;
          auVar19[5] = 0;
          auVar19._6_7_ = SUB137(auVar39 << 0x40,6);
          auVar169._0_4_ = uVar106 & 0xffff;
          auVar169._4_9_ = auVar19._4_9_;
          auVar169._13_3_ = 0;
          auVar205._0_4_ = CONCAT31(0,auVar130[0xc]);
          auVar205[4] = auVar130[0xd];
          auVar205._5_3_ = 0;
          auVar205[8] = auVar130[0xe];
          auVar205._9_3_ = 0;
          auVar205[0xc] = auVar130[0xf];
          auVar205._13_3_ = 0;
          auVar168._0_4_ = -(uint)(auVar169._0_4_ < auVar205._0_4_);
          auVar168._4_4_ = -(uint)(auVar19._4_4_ < (uint)auVar130[0xd]);
          auVar168._8_4_ = -(uint)(auVar18._8_4_ < (int)(uint)auVar130[0xe]);
          auVar168._12_4_ = -(uint)((uint3)(auVar17._10_3_ >> 0x10) < (uint3)auVar130[0xf]);
          auVar169 = ~auVar168 & auVar169 | auVar205 & auVar168;
          auVar130._0_4_ = -(uint)(auVar169._0_4_ < auVar148._0_4_);
          auVar130._4_4_ = -(uint)(auVar169._4_4_ < auVar148._4_4_);
          auVar130._8_4_ = -(uint)(auVar169._8_4_ < auVar148._8_4_);
          auVar130._12_4_ = -(uint)(auVar169._12_4_ < auVar148._12_4_);
          auVar130 = ~auVar130 & auVar169 | auVar148 & auVar130;
          auVar149._0_4_ = -(uint)(auVar176._0_4_ < auVar130._0_4_);
          auVar149._4_4_ = -(uint)(auVar176._4_4_ < auVar130._4_4_);
          auVar149._8_4_ = -(uint)(auVar176._8_4_ < auVar130._8_4_);
          auVar149._12_4_ = -(uint)(auVar176._12_4_ < auVar130._12_4_);
          auVar176 = ~auVar149 & auVar176 | auVar130 & auVar149;
        } while (pauVar83 != (undefined1 (*) [16])(puVar104 + uVar112));
        auVar131._0_4_ = -(uint)(auVar176._0_4_ < auVar176._8_4_);
        auVar131._4_4_ = -(uint)(auVar176._4_4_ < auVar176._12_4_);
        auVar131._8_4_ = -(uint)(auVar176._8_4_ < 0);
        auVar131._12_4_ = -(uint)(auVar176._12_4_ < 0);
        auVar176 = auVar176 >> 0x40 & auVar131 | ~auVar131 & auVar176;
        uVar106 = auVar176._4_4_;
        uVar109 = auVar176._0_4_;
        uVar71 = -(uint)((int)uVar109 < (int)uVar106);
        uVar106 = ~uVar71 & uVar109 | uVar106 & uVar71;
        if (kems_algs_len != uVar112) goto LAB_001072e2;
        if ((int)uVar106 < 2) goto LAB_001075af;
LAB_00107456:
        uVar112 = kems_algs_len >> 4;
        local_128[1] = local_128[1] + -1;
        local_128[0] = local_128[0] + -1;
        local_128[2] = local_128[2] + -1;
        local_128[3] = local_128[3] + -1;
        local_128[4] = local_128[4] + -1;
        local_128[5] = local_128[5] + -1;
        local_128[6] = local_128[6] + -1;
        local_128[7] = local_128[7] + -1;
        local_128[8] = local_128[8] + -1;
        local_128[9] = local_128[9] + -1;
        local_128[10] = local_128[10] + -1;
        local_128[0xb] = local_128[0xb] + -1;
        local_128[0xc] = local_128[0xc] + -1;
        local_128[0xd] = local_128[0xd] + -1;
        local_128[0xe] = local_128[0xe] + -1;
        local_128[0xf] = local_128[0xf] + -1;
        if (uVar112 != 1) {
          local_118[1] = local_118[1] + -1;
          local_118[0] = local_118[0] + -1;
          local_118[2] = local_118[2] + -1;
          local_118[3] = local_118[3] + -1;
          local_118[4] = local_118[4] + -1;
          local_118[5] = local_118[5] + -1;
          local_118[6] = local_118[6] + -1;
          local_118[7] = local_118[7] + -1;
          local_118[8] = local_118[8] + -1;
          local_118[9] = local_118[9] + -1;
          local_118[10] = local_118[10] + -1;
          local_118[0xb] = local_118[0xb] + -1;
          local_118[0xc] = local_118[0xc] + -1;
          local_118[0xd] = local_118[0xd] + -1;
          local_118[0xe] = local_118[0xe] + -1;
          local_118[0xf] = local_118[0xf] + -1;
          if (uVar112 != 2) {
            local_108[1] = local_108[1] + -1;
            local_108[0] = local_108[0] + -1;
            local_108[2] = local_108[2] + -1;
            local_108[3] = local_108[3] + -1;
            local_108[4] = local_108[4] + -1;
            local_108[5] = local_108[5] + -1;
            local_108[6] = local_108[6] + -1;
            local_108[7] = local_108[7] + -1;
            local_108[8] = local_108[8] + -1;
            local_108[9] = local_108[9] + -1;
            local_108[10] = local_108[10] + -1;
            local_108[0xb] = local_108[0xb] + -1;
            local_108[0xc] = local_108[0xc] + -1;
            local_108[0xd] = local_108[0xd] + -1;
            local_108[0xe] = local_108[0xe] + -1;
            local_108[0xf] = local_108[0xf] + -1;
            if (uVar112 != 3) {
              local_f8[1] = local_f8[1] + -1;
              local_f8[0] = local_f8[0] + -1;
              local_f8[2] = local_f8[2] + -1;
              local_f8[3] = local_f8[3] + -1;
              local_f8[4] = local_f8[4] + -1;
              local_f8[5] = local_f8[5] + -1;
              local_f8[6] = local_f8[6] + -1;
              local_f8[7] = local_f8[7] + -1;
              local_f8[8] = local_f8[8] + -1;
              local_f8[9] = local_f8[9] + -1;
              local_f8[10] = local_f8[10] + -1;
              local_f8[0xb] = local_f8[0xb] + -1;
              local_f8[0xc] = local_f8[0xc] + -1;
              local_f8[0xd] = local_f8[0xd] + -1;
              local_f8[0xe] = local_f8[0xe] + -1;
              local_f8[0xf] = local_f8[0xf] + -1;
              if (uVar112 != 4) {
                local_e8[1] = local_e8[1] + -1;
                local_e8[0] = local_e8[0] + -1;
                local_e8[2] = local_e8[2] + -1;
                local_e8[3] = local_e8[3] + -1;
                local_e8[4] = local_e8[4] + -1;
                local_e8[5] = local_e8[5] + -1;
                local_e8[6] = local_e8[6] + -1;
                local_e8[7] = local_e8[7] + -1;
                local_e8[8] = local_e8[8] + -1;
                local_e8[9] = local_e8[9] + -1;
                local_e8[10] = local_e8[10] + -1;
                local_e8[0xb] = local_e8[0xb] + -1;
                local_e8[0xc] = local_e8[0xc] + -1;
                local_e8[0xd] = local_e8[0xd] + -1;
                local_e8[0xe] = local_e8[0xe] + -1;
                local_e8[0xf] = local_e8[0xf] + -1;
                if (uVar112 != 5) {
                  local_d8 = local_d8 + -1;
                  cStack_d7 = cStack_d7 + -1;
                  cStack_d6 = cStack_d6 + -1;
                  cStack_d5 = cStack_d5 + -1;
                  cStack_d4 = cStack_d4 + -1;
                  cStack_d3 = cStack_d3 + -1;
                  cStack_d2 = cStack_d2 + -1;
                  cStack_d1 = cStack_d1 + -1;
                  cStack_d0 = cStack_d0 + -1;
                  cStack_cf = cStack_cf + -1;
                  cStack_ce = cStack_ce + -1;
                  cStack_cd = cStack_cd + -1;
                  cStack_cc = cStack_cc + -1;
                  cStack_cb = cStack_cb + -1;
                  cStack_ca = cStack_ca + -1;
                  cStack_c9 = cStack_c9 + -1;
                }
              }
            }
          }
        }
        uVar96 = kems_algs_len & 0xfffffffffffffff0;
        uVar112 = kems_algs_len & 0xfffffff0;
        if ((kems_algs_len & 0xf) != 0) {
LAB_0010750b:
          uVar107 = kems_algs_len - uVar96;
          if (6 < uVar107 - 1) {
            uVar79 = *(undefined8 *)(local_128 + uVar96);
            *(ulong *)(local_128 + uVar96) =
                 CONCAT17((char)((ulong)uVar79 >> 0x38) + _LC212._7_1_,
                          CONCAT16((char)((ulong)uVar79 >> 0x30) + _LC212._6_1_,
                                   CONCAT15((char)((ulong)uVar79 >> 0x28) + _LC212._5_1_,
                                            CONCAT14((char)((ulong)uVar79 >> 0x20) + _LC212._4_1_,
                                                     CONCAT13((char)((ulong)uVar79 >> 0x18) +
                                                              _LC212._3_1_,
                                                              CONCAT12((char)((ulong)uVar79 >> 0x10)
                                                                       + _LC212._2_1_,
                                                                       CONCAT11((char)((ulong)uVar79
                                                                                      >> 8) +
                                                                                _LC212._1_1_,
                                                                                (char)uVar79 +
                                                                                (char)_LC212)))))));
            uVar112 = (ulong)((int)uVar112 + ((uint)uVar107 & 0xfffffff8));
            if ((uVar107 & 7) == 0) goto LAB_001075af;
          }
          iVar73 = (int)uVar112;
          local_128[uVar112] = local_128[uVar112] + -1;
          if (iVar73 + 1 < kems_algs_len) {
            local_128[iVar73 + 1] = local_128[iVar73 + 1] + -1;
            if (iVar73 + 2 < kems_algs_len) {
              local_128[iVar73 + 2] = local_128[iVar73 + 2] + -1;
              if (iVar73 + 3 < kems_algs_len) {
                local_128[iVar73 + 3] = local_128[iVar73 + 3] + -1;
                if (iVar73 + 4 < kems_algs_len) {
                  local_128[iVar73 + 4] = local_128[iVar73 + 4] + -1;
                  if (iVar73 + 5 < kems_algs_len) {
                    local_128[iVar73 + 5] = local_128[iVar73 + 5] + -1;
                    if (iVar73 + 6 < kems_algs_len) {
                      local_128[iVar73 + 6] = local_128[iVar73 + 6] + -1;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LAB_001075af:
    if (sigs_algs_len != 0) {
      if (sigs_algs_len - 1 < 0xf) {
        uVar106 = 0;
        uVar112 = 0;
LAB_001076c4:
        if ((int)uVar106 <= (int)(uint)(byte)local_b8[uVar112]) {
          uVar106 = (uint)(byte)local_b8[uVar112];
        }
        if (uVar112 + 1 < sigs_algs_len) {
          if ((int)uVar106 < (int)(uint)(byte)local_b8[uVar112 + 1]) {
            uVar106 = (uint)(byte)local_b8[uVar112 + 1];
          }
          if (uVar112 + 2 < sigs_algs_len) {
            if ((int)uVar106 < (int)(uint)(byte)local_b8[uVar112 + 2]) {
              uVar106 = (uint)(byte)local_b8[uVar112 + 2];
            }
            if (uVar112 + 3 < sigs_algs_len) {
              if ((int)uVar106 < (int)(uint)(byte)local_b8[uVar112 + 3]) {
                uVar106 = (uint)(byte)local_b8[uVar112 + 3];
              }
              if (uVar112 + 4 < sigs_algs_len) {
                if ((int)uVar106 < (int)(uint)(byte)local_b8[uVar112 + 4]) {
                  uVar106 = (uint)(byte)local_b8[uVar112 + 4];
                }
                if (uVar112 + 5 < sigs_algs_len) {
                  if ((int)uVar106 < (int)(uint)(byte)local_b8[uVar112 + 5]) {
                    uVar106 = (uint)(byte)local_b8[uVar112 + 5];
                  }
                  if (uVar112 + 6 < sigs_algs_len) {
                    if ((int)uVar106 < (int)(uint)(byte)local_b8[uVar112 + 6]) {
                      uVar106 = (uint)(byte)local_b8[uVar112 + 6];
                    }
                    if (uVar112 + 7 < sigs_algs_len) {
                      if ((int)uVar106 < (int)(uint)(byte)local_b8[uVar112 + 7]) {
                        uVar106 = (uint)(byte)local_b8[uVar112 + 7];
                      }
                      if (uVar112 + 8 < sigs_algs_len) {
                        if ((int)uVar106 < (int)(uint)(byte)local_b8[uVar112 + 8]) {
                          uVar106 = (uint)(byte)local_b8[uVar112 + 8];
                        }
                        if (uVar112 + 9 < sigs_algs_len) {
                          if ((int)uVar106 < (int)(uint)(byte)local_b8[uVar112 + 9]) {
                            uVar106 = (uint)(byte)local_b8[uVar112 + 9];
                          }
                          if (uVar112 + 10 < sigs_algs_len) {
                            if ((int)uVar106 < (int)(uint)(byte)local_b8[uVar112 + 10]) {
                              uVar106 = (uint)(byte)local_b8[uVar112 + 10];
                            }
                            if (uVar112 + 0xb < sigs_algs_len) {
                              if ((int)uVar106 < (int)(uint)(byte)local_b8[uVar112 + 0xb]) {
                                uVar106 = (uint)(byte)local_b8[uVar112 + 0xb];
                              }
                              if (uVar112 + 0xc < sigs_algs_len) {
                                if ((int)uVar106 < (int)(uint)(byte)local_b8[uVar112 + 0xc]) {
                                  uVar106 = (uint)(byte)local_b8[uVar112 + 0xc];
                                }
                                if (uVar112 + 0xd < sigs_algs_len) {
                                  if ((int)uVar106 < (int)(uint)(byte)local_b8[uVar112 + 0xd]) {
                                    uVar106 = (uint)(byte)local_b8[uVar112 + 0xd];
                                  }
                                  if ((uVar112 + 0xe < sigs_algs_len) &&
                                     ((int)uVar106 < (int)(uint)(byte)local_b8[uVar112 + 0xe])) {
                                    uVar106 = (uint)(byte)local_b8[uVar112 + 0xe];
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
        if (1 < (int)uVar106) {
          if (0xe < sigs_algs_len - 1) goto LAB_00107838;
          uVar96 = 0;
          uVar112 = 0;
          goto LAB_001078ed;
        }
      }
      else {
        auVar176 = (undefined1  [16])0x0;
        pauVar83 = &local_b8;
        uVar112 = sigs_algs_len & 0xfffffffffffffff0;
        puVar104 = *pauVar83;
        do {
          auVar130 = *pauVar83;
          pauVar83 = pauVar83 + 1;
          uVar106 = CONCAT13(0,CONCAT12(auVar130[9],(ushort)auVar130[8]));
          auVar20[0xc] = auVar130[0xb];
          auVar20._0_12_ = ZEXT112(auVar130[0xc]) << 0x40;
          auVar21._10_3_ = auVar20._10_3_;
          auVar21._0_10_ = (unkuint10)auVar130[10] << 0x40;
          auVar40._5_8_ = 0;
          auVar40._0_5_ = auVar21._8_5_;
          auVar25[4] = auVar130[9];
          auVar25._0_4_ = uVar106;
          auVar25[5] = 0;
          auVar25._6_7_ = SUB137(auVar40 << 0x40,6);
          auVar150._0_4_ = uVar106 & 0xffff;
          auVar150._4_9_ = auVar25._4_9_;
          auVar150._13_3_ = 0;
          bVar167 = auVar130[7];
          auVar13[0xd] = 0;
          auVar13._0_13_ = auVar130._0_13_;
          auVar13[0xe] = bVar167;
          auVar15[0xc] = auVar130[6];
          auVar15._0_12_ = auVar130._0_12_;
          auVar15._13_2_ = auVar13._13_2_;
          auVar22[0xb] = 0;
          auVar22._0_11_ = auVar130._0_11_;
          auVar22._12_3_ = auVar15._12_3_;
          auVar26[10] = auVar130[5];
          auVar26._0_10_ = auVar130._0_10_;
          auVar26._11_4_ = auVar22._11_4_;
          auVar28[9] = 0;
          auVar28._0_9_ = auVar130._0_9_;
          auVar28._10_5_ = auVar26._10_5_;
          auVar30[8] = auVar130[4];
          auVar30._0_8_ = auVar130._0_8_;
          auVar30._9_6_ = auVar28._9_6_;
          auVar41._7_8_ = 0;
          auVar41._0_7_ = auVar30._8_7_;
          Var34 = CONCAT81(SUB158(auVar41 << 0x40,7),auVar130[3]);
          auVar54._9_6_ = 0;
          auVar54._0_9_ = Var34;
          auVar42._1_10_ = SUB1510(auVar54 << 0x30,5);
          auVar42[0] = auVar130[2];
          auVar55._11_4_ = 0;
          auVar55._0_11_ = auVar42;
          auVar43._1_12_ = SUB1512(auVar55 << 0x20,3);
          auVar43[0] = auVar130[1];
          auVar32[1] = 0;
          auVar32[0] = auVar130[0];
          auVar32._2_13_ = auVar43;
          auVar206._0_4_ = CONCAT31(0,auVar130[0xc]);
          auVar206[4] = auVar130[0xd];
          auVar206._5_3_ = 0;
          auVar206[8] = auVar130[0xe];
          auVar206._9_3_ = 0;
          auVar206[0xc] = auVar130[0xf];
          auVar206._13_3_ = 0;
          auVar132._0_4_ = -(uint)(auVar150._0_4_ < auVar206._0_4_);
          auVar132._4_4_ = -(uint)(auVar25._4_4_ < (uint)auVar130[0xd]);
          auVar132._8_4_ = -(uint)(auVar21._8_4_ < (int)(uint)auVar130[0xe]);
          auVar132._12_4_ = -(uint)((uint3)(auVar20._10_3_ >> 0x10) < (uint3)auVar130[0xf]);
          auVar130 = ~auVar132 & auVar150 | auVar206 & auVar132;
          auVar10._10_2_ = 0;
          auVar10._0_10_ = auVar32._0_10_;
          auVar10._12_2_ = (short)Var34;
          uVar57 = CONCAT42(auVar10._10_4_,auVar42._0_2_);
          auVar44._6_8_ = 0;
          auVar44._0_6_ = uVar57;
          auVar23._4_2_ = auVar43._0_2_;
          auVar23._0_4_ = auVar32._0_4_;
          auVar23._6_8_ = SUB148(auVar44 << 0x40,6);
          auVar170._0_4_ = auVar32._0_4_ & 0xffff;
          auVar170._4_10_ = auVar23._4_10_;
          auVar170._14_2_ = 0;
          auVar207._0_4_ = CONCAT22(0,auVar30._8_2_);
          auVar207._4_2_ = auVar26._10_2_;
          auVar207._6_2_ = 0;
          auVar207._8_2_ = auVar15._12_2_;
          auVar207._10_2_ = 0;
          auVar207[0xc] = bVar167;
          auVar207._13_3_ = 0;
          auVar133._0_4_ = -(uint)(auVar170._0_4_ < auVar207._0_4_);
          auVar133._4_4_ = -(uint)(auVar23._4_4_ < (uint)auVar26._10_2_);
          auVar133._8_4_ = -(uint)((int)uVar57 < (int)(uint)auVar15._12_2_);
          auVar133._12_4_ = -(uint)(auVar10._10_4_ >> 0x10 < (uint)bVar167);
          auVar148 = ~auVar133 & auVar170 | auVar207 & auVar133;
          auVar134._0_4_ = -(uint)(auVar148._0_4_ < auVar130._0_4_);
          auVar134._4_4_ = -(uint)(auVar148._4_4_ < auVar130._4_4_);
          auVar134._8_4_ = -(uint)(auVar148._8_4_ < auVar130._8_4_);
          auVar134._12_4_ = -(uint)(auVar148._12_4_ < auVar130._12_4_);
          auVar130 = ~auVar134 & auVar148 | auVar130 & auVar134;
          auVar151._0_4_ = -(uint)(auVar176._0_4_ < auVar130._0_4_);
          auVar151._4_4_ = -(uint)(auVar176._4_4_ < auVar130._4_4_);
          auVar151._8_4_ = -(uint)(auVar176._8_4_ < auVar130._8_4_);
          auVar151._12_4_ = -(uint)(auVar176._12_4_ < auVar130._12_4_);
          auVar176 = ~auVar151 & auVar176 | auVar130 & auVar151;
        } while (pauVar83 != (undefined1 (*) [16])(puVar104 + uVar112));
        auVar135._0_4_ = -(uint)(auVar176._0_4_ < auVar176._8_4_);
        auVar135._4_4_ = -(uint)(auVar176._4_4_ < auVar176._12_4_);
        auVar135._8_4_ = -(uint)(auVar176._8_4_ < 0);
        auVar135._12_4_ = -(uint)(auVar176._12_4_ < 0);
        auVar176 = auVar176 >> 0x40 & auVar135 | ~auVar135 & auVar176;
        uVar106 = auVar176._4_4_;
        uVar109 = auVar176._0_4_;
        uVar71 = -(uint)((int)uVar109 < (int)uVar106);
        uVar106 = ~uVar71 & uVar109 | uVar106 & uVar71;
        if (sigs_algs_len != uVar112) goto LAB_001076c4;
        if ((int)uVar106 < 2) goto LAB_00107991;
LAB_00107838:
        uVar112 = sigs_algs_len >> 4;
        local_b8[1] = local_b8[1] + -1;
        local_b8[0] = local_b8[0] + -1;
        local_b8[2] = local_b8[2] + -1;
        local_b8[3] = local_b8[3] + -1;
        local_b8[4] = local_b8[4] + -1;
        local_b8[5] = local_b8[5] + -1;
        local_b8[6] = local_b8[6] + -1;
        local_b8[7] = local_b8[7] + -1;
        local_b8[8] = local_b8[8] + -1;
        local_b8[9] = local_b8[9] + -1;
        local_b8[10] = local_b8[10] + -1;
        local_b8[0xb] = local_b8[0xb] + -1;
        local_b8[0xc] = local_b8[0xc] + -1;
        local_b8[0xd] = local_b8[0xd] + -1;
        local_b8[0xe] = local_b8[0xe] + -1;
        local_b8[0xf] = local_b8[0xf] + -1;
        if (uVar112 != 1) {
          local_a8[1] = local_a8[1] + -1;
          local_a8[0] = local_a8[0] + -1;
          local_a8[2] = local_a8[2] + -1;
          local_a8[3] = local_a8[3] + -1;
          local_a8[4] = local_a8[4] + -1;
          local_a8[5] = local_a8[5] + -1;
          local_a8[6] = local_a8[6] + -1;
          local_a8[7] = local_a8[7] + -1;
          local_a8[8] = local_a8[8] + -1;
          local_a8[9] = local_a8[9] + -1;
          local_a8[10] = local_a8[10] + -1;
          local_a8[0xb] = local_a8[0xb] + -1;
          local_a8[0xc] = local_a8[0xc] + -1;
          local_a8[0xd] = local_a8[0xd] + -1;
          local_a8[0xe] = local_a8[0xe] + -1;
          local_a8[0xf] = local_a8[0xf] + -1;
          if (uVar112 != 2) {
            local_98[1] = local_98[1] + -1;
            local_98[0] = local_98[0] + -1;
            local_98[2] = local_98[2] + -1;
            local_98[3] = local_98[3] + -1;
            local_98[4] = local_98[4] + -1;
            local_98[5] = local_98[5] + -1;
            local_98[6] = local_98[6] + -1;
            local_98[7] = local_98[7] + -1;
            local_98[8] = local_98[8] + -1;
            local_98[9] = local_98[9] + -1;
            local_98[10] = local_98[10] + -1;
            local_98[0xb] = local_98[0xb] + -1;
            local_98[0xc] = local_98[0xc] + -1;
            local_98[0xd] = local_98[0xd] + -1;
            local_98[0xe] = local_98[0xe] + -1;
            local_98[0xf] = local_98[0xf] + -1;
            if (uVar112 != 3) {
              local_88[1] = local_88[1] + -1;
              local_88[0] = local_88[0] + -1;
              local_88[2] = local_88[2] + -1;
              local_88[3] = local_88[3] + -1;
              local_88[4] = local_88[4] + -1;
              local_88[5] = local_88[5] + -1;
              local_88[6] = local_88[6] + -1;
              local_88[7] = local_88[7] + -1;
              local_88[8] = local_88[8] + -1;
              local_88[9] = local_88[9] + -1;
              local_88[10] = local_88[10] + -1;
              local_88[0xb] = local_88[0xb] + -1;
              local_88[0xc] = local_88[0xc] + -1;
              local_88[0xd] = local_88[0xd] + -1;
              local_88[0xe] = local_88[0xe] + -1;
              local_88[0xf] = local_88[0xf] + -1;
              if (uVar112 != 4) {
                local_78[1] = local_78[1] + -1;
                local_78[0] = local_78[0] + -1;
                local_78[2] = local_78[2] + -1;
                local_78[3] = local_78[3] + -1;
                local_78[4] = local_78[4] + -1;
                local_78[5] = local_78[5] + -1;
                local_78[6] = local_78[6] + -1;
                local_78[7] = local_78[7] + -1;
                local_78[8] = local_78[8] + -1;
                local_78[9] = local_78[9] + -1;
                local_78[10] = local_78[10] + -1;
                local_78[0xb] = local_78[0xb] + -1;
                local_78[0xc] = local_78[0xc] + -1;
                local_78[0xd] = local_78[0xd] + -1;
                local_78[0xe] = local_78[0xe] + -1;
                local_78[0xf] = local_78[0xf] + -1;
                if (uVar112 != 5) {
                  local_68 = local_68 + -1;
                  cStack_67 = cStack_67 + -1;
                  cStack_66 = cStack_66 + -1;
                  cStack_65 = cStack_65 + -1;
                  cStack_64 = cStack_64 + -1;
                  cStack_63 = cStack_63 + -1;
                  cStack_62 = cStack_62 + -1;
                  cStack_61 = cStack_61 + -1;
                  cStack_60 = cStack_60 + -1;
                  cStack_5f = cStack_5f + -1;
                  cStack_5e = cStack_5e + -1;
                  cStack_5d = cStack_5d + -1;
                  cStack_5c = cStack_5c + -1;
                  cStack_5b = cStack_5b + -1;
                  cStack_5a = cStack_5a + -1;
                  cStack_59 = cStack_59 + -1;
                }
              }
            }
          }
        }
        uVar96 = sigs_algs_len & 0xfffffffffffffff0;
        uVar112 = sigs_algs_len & 0xfffffff0;
        if ((sigs_algs_len & 0xf) != 0) {
LAB_001078ed:
          uVar107 = sigs_algs_len - uVar96;
          if (6 < uVar107 - 1) {
            uVar79 = *(undefined8 *)(local_b8 + uVar96);
            *(ulong *)(local_b8 + uVar96) =
                 CONCAT17((char)((ulong)uVar79 >> 0x38) + _LC212._7_1_,
                          CONCAT16((char)((ulong)uVar79 >> 0x30) + _LC212._6_1_,
                                   CONCAT15((char)((ulong)uVar79 >> 0x28) + _LC212._5_1_,
                                            CONCAT14((char)((ulong)uVar79 >> 0x20) + _LC212._4_1_,
                                                     CONCAT13((char)((ulong)uVar79 >> 0x18) +
                                                              _LC212._3_1_,
                                                              CONCAT12((char)((ulong)uVar79 >> 0x10)
                                                                       + _LC212._2_1_,
                                                                       CONCAT11((char)((ulong)uVar79
                                                                                      >> 8) +
                                                                                _LC212._1_1_,
                                                                                (char)uVar79 +
                                                                                (char)_LC212)))))));
            uVar112 = (ulong)((int)uVar112 + ((uint)uVar107 & 0xfffffff8));
            if ((uVar107 & 7) == 0) goto LAB_00107991;
          }
          iVar73 = (int)uVar112;
          local_b8[uVar112] = local_b8[uVar112] + -1;
          if (iVar73 + 1 < sigs_algs_len) {
            local_b8[iVar73 + 1] = local_b8[iVar73 + 1] + -1;
            if (iVar73 + 2 < sigs_algs_len) {
              local_b8[iVar73 + 2] = local_b8[iVar73 + 2] + -1;
              if (iVar73 + 3 < sigs_algs_len) {
                local_b8[iVar73 + 3] = local_b8[iVar73 + 3] + -1;
                if (iVar73 + 4 < sigs_algs_len) {
                  local_b8[iVar73 + 4] = local_b8[iVar73 + 4] + -1;
                  if (iVar73 + 5 < sigs_algs_len) {
                    local_b8[iVar73 + 5] = local_b8[iVar73 + 5] + -1;
                    if (iVar73 + 6 < sigs_algs_len) {
                      local_b8[iVar73 + 6] = local_b8[iVar73 + 6] + -1;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LAB_00107991:
    if (bVar122) {
      if (local_338 == (EVP_CIPHER *)0x0) {
        BIO_printf(_bio_err,"-mb can be used only with a multi-block capable cipher\n");
      }
      else {
        uVar112 = EVP_CIPHER_get_flags();
        if ((uVar112 & 0x400000) == 0) {
          uVar79 = EVP_CIPHER_get0_name(local_338);
          BIO_printf(_bio_err,"%s is not a multi-block capable\n",uVar79);
        }
        else {
          if (local_3e8 == 0) goto LAB_001079ce;
          BIO_printf(_bio_err,"Async mode is not supported with -mb");
        }
      }
      goto LAB_00105e28;
    }
    if (local_3e8 != 0) {
      uVar112 = (ulong)local_3e8;
      local_3e4 = ASYNC_init_thread(uVar112,uVar112);
      if (local_3e4 == 0) {
        BIO_printf(_bio_err,"Error creating the ASYNC job pool\n");
        goto LAB_00105e28;
      }
      __s = (void *)app_malloc(uVar112 * 0x3560);
      iVar73 = 100;
      memset(__s,0,uVar112 * 0x3560);
      iVar4 = *(int *)(lengths + (ulong)(uVar58 - 1) * 4);
      uVar106 = local_3e8;
      if (0x23 < iVar4) {
        if (0x7fffffbf < iVar4) goto LAB_00109781;
        iVar73 = iVar4 + 0x40;
      }
      plVar98 = (long *)((long)__s + 8);
      do {
        lVar84 = ASYNC_WAIT_CTX_new();
        *plVar98 = lVar84;
        if (lVar84 == 0) {
          BIO_printf(_bio_err,"Error creating the ASYNC_WAIT_CTX\n");
          local_400 = (void *)0x0;
          local_418 = 0;
          local_420 = (long *)0x0;
          local_3f0 = 0;
          goto LAB_00105e6a;
        }
        sVar97 = (size_t)iVar73;
        plVar105 = plVar98 + 0x6ac;
        lVar84 = app_malloc(sVar97,"input buffer");
        plVar98[3] = lVar84;
        lVar84 = app_malloc(sVar97,"input buffer");
        plVar98[4] = lVar84;
        plVar98[1] = plVar98[3] + (long)iVar77;
        plVar98[2] = lVar84 + iVar77;
        plVar98[8] = (long)(iVar73 - iVar77);
        plVar98[9] = (long)(iVar73 - iVar77);
        lVar84 = app_malloc(0x100,"ECDH secret a");
        plVar98[0x76] = lVar84;
        lVar84 = app_malloc(0x100,"ECDH secret b");
        plVar98[0x77] = lVar84;
        lVar84 = app_malloc(0x400,"FFDH secret a");
        plVar98[0x95] = lVar84;
        lVar84 = app_malloc(0x400,"FFDH secret b");
        plVar98[0x96] = lVar84;
        plVar98 = plVar105;
      } while (plVar105 != (long *)((long)__s + 8) + uVar112 * 0x6ac);
LAB_00108108:
      if ((iVar75 != 0) && (iVar77 = do_multi(iVar75), iVar77 != 0)) {
        if (mr == 0) {
          uVar79 = OpenSSL_version(7);
          __printf_chk(2,"version: %s\n",uVar79);
          pcVar82 = (char *)OpenSSL_version(2);
          puts(pcVar82);
          pcVar82 = BN_options();
          __printf_chk(2,"options: %s\n",pcVar82);
          pcVar82 = (char *)OpenSSL_version(1);
          puts(pcVar82);
          pcVar82 = (char *)OpenSSL_version(9);
          puts(pcVar82);
        }
        local_3f0 = 0;
LAB_0010d7fe:
        uVar112 = 0;
        do {
          if (local_1d8[uVar112] != '\0') {
            puVar94 = (&names)[uVar112];
            if (((uVar112 == 0x19) && (puVar94 = evp_md_name, local_338 != (EVP_CIPHER *)0x0)) &&
               (puVar94 = (undefined *)EVP_CIPHER_get0_name(), puVar94 == (undefined *)0x0)) {
              app_bail_out("failed to get name of cipher \'%s\'\n",local_338);
            }
            if (mr == 0) {
              __printf_chk(2,"%-13s",puVar94);
            }
            else {
              __printf_chk(2,"+F:%u:%s",uVar112 & 0xffffffff,puVar94);
            }
            uVar96 = 0;
            testnum = 0;
            if (uVar58 != 0) {
              do {
                if (__LC81 < (double)(&results)[uVar96 + (uVar112 & 0xffffffff) * 6]) {
                  pcVar82 = ":%.2f";
                  if (mr != 0) goto LAB_0010d89b;
                  __printf_chk((double)(&results)[uVar96 + (uVar112 & 0xffffffff) * 6] / __LC82,2,
                               " %11.2fk");
                }
                else {
                  pcVar82 = ":%.2f";
                  if (mr == 0) {
                    pcVar82 = " %11.2f ";
                  }
LAB_0010d89b:
                  __printf_chk(2,pcVar82);
                }
                testnum = testnum + 1;
                uVar96 = (ulong)testnum;
              } while (testnum < uVar58);
            }
            putchar(10);
          }
          uVar112 = uVar112 + 1;
        } while (uVar112 != 0x1f);
        testnum = 1;
        pdVar116 = (double *)&rsa_results;
        puVar103 = (undefined4 *)&DAT_0011ae6c;
        uVar112 = 0;
        do {
          if (*(char *)((long)&local_21f + uVar112) != '\0') {
            if (testnum == 0) {
LAB_0010e21a:
              if (mr == 0) {
                __printf_chk(_LC330 / *pdVar116,_LC330 / pdVar116[1],_LC330 / pdVar116[2],
                             _LC330 / pdVar116[3],2,
                             "rsa %5u bits %8.6fs %8.6fs %8.6fs %8.6fs %8.1f %8.1f %8.1f %8.1f\n",
                             *puVar103);
                goto LAB_0010d98f;
              }
            }
            else if (mr == 0) {
              __printf_chk(2,
                           "%19ssign    verify    encrypt   decrypt   sign/s verify/s  encr./s  decr./s\n"
                           ,&_LC328);
              testnum = 0;
              goto LAB_0010e21a;
            }
            __printf_chk(*pdVar116,pdVar116[1],pdVar116[2],pdVar116[3],2,"+F2:%u:%u:%f:%f:%f:%f\n",
                         uVar112 & 0xffffffff,*puVar103);
          }
LAB_0010d98f:
          uVar112 = uVar112 + 1;
          pdVar116 = pdVar116 + 4;
          puVar103 = puVar103 + 4;
        } while (uVar112 != 7);
        lVar84 = 0;
        pdVar116 = (double *)&dsa_results;
        testnum = 1;
        cVar3 = (char)local_228;
        do {
          if (cVar3 != '\0') {
            if (testnum == 0) {
LAB_0010dab2:
              if (mr == 0) {
                __printf_chk(_LC330 / *pdVar116,_LC330 / pdVar116[1],2,
                             "dsa %4u bits %8.6fs %8.6fs %8.1f %8.1f\n",(&dsa_bits_3)[lVar84]);
                goto LAB_0010da6f;
              }
            }
            else if (mr == 0) {
              __printf_chk(2,"%18ssign    verify    sign/s verify/s\n",&_LC328);
              testnum = 0;
              goto LAB_0010dab2;
            }
            __printf_chk(*pdVar116,pdVar116[1],2,"+F3:%u:%u:%f:%f\n",lVar84,(&dsa_bits_3)[lVar84]);
          }
LAB_0010da6f:
          pdVar116 = pdVar116 + 2;
          if (lVar84 != 0) goto LAB_0010db08;
          lVar84 = 1;
          cVar3 = local_228._1_1_;
        } while( true );
      }
      local_438 = (undefined8 *)(ulong)uVar106;
      puVar101 = (undefined8 *)((long)__s + 0x20);
      if (domlock == 0) {
        puVar100 = puVar101;
        do {
          puVar111 = puVar100 + 0x6ac;
          memset((void *)*puVar100,0,sVar97);
          memset((void *)puVar100[1],0,sVar97);
          puVar100 = puVar111;
        } while (puVar111 != puVar101 + (long)local_438 * 0x6ac);
      }
      else {
        puVar100 = puVar101;
        do {
          puVar111 = puVar100 + 0x6ac;
          mlock((void *)*puVar100,sVar97);
          mlock((void *)*puVar100,sVar97);
          memset((void *)*puVar100,0,sVar97);
          memset((void *)puVar100[1],0,sVar97);
          puVar100 = puVar111;
        } while (puVar111 != puVar101 + (long)local_438 * 0x6ac);
      }
      local_3f0 = setup_engine_methods(local_3f0,0xffffffff,0);
      if ((iVar70 == 0) &&
         ((((acStack_1c2[3] == '\0' && local_1d8[9] == '\0') && acStack_1c2[6] == '\0') && !bVar62)
          && !bVar61)) {
        lVar84 = 0;
        local_1d8[0] = (char)_LC181;
        local_1d8[1] = (char)((ushort)_LC181 >> 8);
        local_1d8[2] = (char)_UNK_0011bc32;
        local_1d8[3] = (char)((uint6)_UNK_0011bc32 >> 8);
        local_1d8[4] = (char)((uint6)_UNK_0011bc32 >> 0x10);
        local_1d8[5] = (char)((uint6)_UNK_0011bc32 >> 0x18);
        local_1d8[6] = (char)((uint6)_UNK_0011bc32 >> 0x20);
        local_1d8[7] = (char)((uint6)_UNK_0011bc32 >> 0x28);
        local_1d8[8] = (char)_UNK_0011bc38;
        local_1d8[9] = (char)((ulong)_UNK_0011bc38 >> 8);
        local_1d8[10] = (char)((ulong)_UNK_0011bc38 >> 0x10);
        local_1d8[0xb] = (char)((ulong)_UNK_0011bc38 >> 0x18);
        local_1d8[0xc] = (char)((ulong)_UNK_0011bc38 >> 0x20);
        local_1d8[0xd] = (char)((ulong)_UNK_0011bc38 >> 0x28);
        local_1d8[0xe] = (char)((ulong)_UNK_0011bc38 >> 0x30);
        uStack_1c9._0_1_ = (char)((ulong)_UNK_0011bc38 >> 0x38);
        acStack_1c2[8] = (char)uStack_1c9;
        uStack_1c9 = (undefined4)CONCAT62(_UNK_0011bc32,_LC181);
        uStack_1c5 = (undefined2)((uint6)_UNK_0011bc32 >> 0x10);
        acStack_1c2[6] = '\0';
        acStack_1c2[3] = '\0';
        cStack_1c3 = local_1d8[6];
        acStack_1c2[0] = local_1d8[7];
        acStack_1c2[1] = local_1d8[8];
        acStack_1c2[2] = local_1d8[9];
        acStack_1c2[4] = local_1d8[0xb];
        acStack_1c2[5] = local_1d8[0xc];
        acStack_1c2[7] = local_1d8[0xe];
        ERR_set_mark();
        do {
          local_300 = (EVP_MD *)0x0;
          iVar77 = opt_md_silent((&names)[lVar84],&local_300);
          if (iVar77 == 0) {
LAB_001088cc:
            local_1d8[lVar84] = '\0';
          }
          else {
            pEVar85 = (EVP_MD_CTX *)EVP_MD_CTX_new();
            if (pEVar85 == (EVP_MD_CTX *)0x0) {
              EVP_MD_CTX_free(0);
              EVP_MD_free(local_300);
              goto LAB_001088cc;
            }
            iVar77 = EVP_DigestInit(pEVar85,local_300);
            if (iVar77 < 1) {
              EVP_MD_CTX_free(pEVar85);
              EVP_MD_free(local_300);
              goto LAB_001088cc;
            }
            EVP_MD_CTX_free(pEVar85);
            EVP_MD_free(local_300);
          }
          lVar84 = lVar84 + 1;
        } while (lVar84 != 9);
        lVar84 = 10;
        do {
          local_300 = (EVP_MD *)0x0;
          iVar77 = opt_cipher_silent((&names)[lVar84],&local_300);
          if (iVar77 == 0) {
LAB_0010fdbf:
            local_1d8[lVar84] = '\0';
          }
          else {
            pEVar87 = EVP_CIPHER_CTX_new();
            if (pEVar87 == (EVP_CIPHER_CTX *)0x0) {
              EVP_CIPHER_CTX_free((EVP_CIPHER_CTX *)0x0);
              EVP_CIPHER_free(local_300);
              goto LAB_0010fdbf;
            }
            iVar77 = EVP_CipherInit_ex(pEVar87,(EVP_CIPHER *)local_300,(ENGINE *)0x0,(uchar *)0x0,
                                       (uchar *)0x0,1);
            if (iVar77 < 1) {
              EVP_CIPHER_CTX_free(pEVar87);
              EVP_CIPHER_free(local_300);
              goto LAB_0010fdbf;
            }
            EVP_CIPHER_CTX_free(pEVar87);
            EVP_CIPHER_free(local_300);
          }
          lVar84 = lVar84 + 1;
        } while (lVar84 != 0x19);
        uVar79 = app_get0_propq();
        uVar81 = app_get0_libctx();
        local_330 = EVP_MAC_fetch(uVar81,&_LC225,uVar79);
        if (local_330 == 0) {
          acStack_1c2[4] = '\0';
        }
        else {
          EVP_MAC_free(local_330);
        }
        uVar79 = app_get0_propq();
        uVar81 = app_get0_libctx();
        local_330 = EVP_MAC_fetch(uVar81,&_LC175,uVar79);
        if (local_330 == 0) {
          local_1d8[9] = '\0';
        }
        else {
          EVP_MAC_free(local_330);
        }
        local_330 = 0;
        ERR_pop_to_mark();
        local_218 = CONCAT62(_UNK_0011bc32,_LC181);
        cVar118 = '\x01';
        bVar62 = true;
        local_1e8 = 0x101010101010101;
        uStack_210 = (undefined6)_UNK_0011bc38;
        uStack_20a = 0x101;
        uStack_208 = 0x10101010101;
        puVar104 = local_128;
        for (lVar84 = 0x6f; lVar84 != 0; lVar84 = lVar84 + -1) {
          *puVar104 = 1;
          puVar104 = puVar104 + (ulong)bVar123 * -2 + 1;
        }
        puVar104 = local_b8;
        for (lVar84 = 0x6f; lVar84 != 0; lVar84 = lVar84 + -1) {
          *puVar104 = 1;
          puVar104 = puVar104 + (ulong)bVar123 * -2 + 1;
        }
        local_21f = 0x1010101;
        uStack_21b = 0x10101;
        local_224 = 0x1010101;
        local_220 = 1;
        local_228 = 0x101;
        local_226 = 0x101;
        bVar61 = true;
        local_1f8._8_8_ = _UNK_0011bc38;
        local_1f8._0_8_ = local_218;
      }
      cVar69 = acStack_1c2[8];
      cVar68 = acStack_1c2[7];
      cVar67 = acStack_1c2[6];
      cVar66 = acStack_1c2[5];
      cVar65 = acStack_1c2[4];
      cVar64 = acStack_1c2[3];
      cVar3 = local_1d8[9];
      bVar5 = local_1d8[0] != '\0';
      bVar6 = local_1d8[8] != '\0';
      bVar121 = local_1d8[9] != '\0';
      bVar7 = local_1d8[10] != '\0';
      bVar8 = local_1d8[0xb] != '\0';
      cVar142 = -(local_1d8[7] != '\0');
      uVar60 = CONCAT11(-(local_1d8[7] != '\0'),cVar142);
      uVar76 = CONCAT31(CONCAT21(uVar60,-(local_1d8[6] != '\0')),-(local_1d8[6] != '\0'));
      uVar59 = CONCAT51(CONCAT41(uVar76,-(local_1d8[5] != '\0')),-(local_1d8[5] != '\0'));
      Var56 = CONCAT72(CONCAT61(uVar59,-(local_1d8[4] != '\0')),
                       CONCAT11(-(local_1d8[4] != '\0'),cVar142));
      lVar84 = (long)((unkuint9)Var56 >> 8);
      Var38 = CONCAT91(CONCAT81(lVar84,-(local_1d8[3] != '\0')),-(local_1d8[3] != '\0'));
      auVar46._2_10_ = Var38;
      auVar46[1] = -(local_1d8[2] != '\0');
      auVar46[0] = -(local_1d8[2] != '\0');
      auVar45._2_12_ = auVar46;
      auVar45[1] = -(local_1d8[1] != '\0');
      auVar45[0] = -(local_1d8[1] != '\0');
      auVar177._0_2_ = CONCAT11(-bVar5,-bVar5);
      auVar177._2_14_ = auVar45;
      uVar124 = CONCAT13(-bVar121,CONCAT12(-bVar121,CONCAT11(-bVar6,-bVar6)));
      uVar125 = CONCAT15(-bVar7,CONCAT14(-bVar7,uVar124));
      uVar79 = CONCAT17(-bVar8,CONCAT16(-bVar8,uVar125));
      auVar127._0_10_ =
           CONCAT19(-(local_1d8[0xc] != '\0'),CONCAT18(-(local_1d8[0xc] != '\0'),uVar79));
      auVar127[10] = -(local_1d8[0xd] != '\0');
      auVar127[0xb] = -(local_1d8[0xd] != '\0');
      auVar129[0xc] = -(local_1d8[0xe] != '\0');
      auVar129._0_12_ = auVar127;
      auVar129[0xd] = -(local_1d8[0xe] != '\0');
      auVar136[0xe] = -((char)uStack_1c9 != '\0');
      auVar136._0_14_ = auVar129;
      auVar136[0xf] = -((char)uStack_1c9 != '\0');
      sVar144 = (short)((unkuint10)auVar127._0_10_ >> 0x40);
      sVar164 = (short)Var38;
      sVar198 = (short)((unkuint9)Var56 >> 8);
      sVar199 = (short)uVar59;
      sVar200 = (short)uVar76;
      auVar173._0_12_ = auVar177._0_12_;
      auVar173._12_2_ = sVar164;
      auVar173._14_2_ = -(ushort)(sVar164 < 0);
      auVar172._12_4_ = auVar173._12_4_;
      auVar172._0_10_ = auVar177._0_10_;
      auVar172._10_2_ = -(ushort)(auVar46._0_2_ < 0);
      auVar171._10_6_ = auVar172._10_6_;
      auVar171._0_8_ = auVar177._0_8_;
      auVar171._8_2_ = auVar46._0_2_;
      auVar174._8_8_ = auVar171._8_8_;
      auVar174._6_2_ = -(ushort)(auVar45._0_2_ < 0);
      auVar174._4_2_ = auVar45._0_2_;
      auVar174._2_2_ = -(ushort)bVar5;
      auVar174._0_2_ = auVar177._0_2_;
      auVar174 = auVar174 & __LC226;
      iVar70 = CONCAT22(-(ushort)(sVar198 < 0),sVar198);
      auVar175._0_8_ = CONCAT26(-(ushort)(sVar199 < 0),CONCAT24(sVar199,iVar70));
      auVar175._8_2_ = sVar200;
      auVar175._10_2_ = -(ushort)(sVar200 < 0);
      auVar178._12_2_ = uVar60;
      auVar178._0_12_ = auVar175;
      auVar178._14_2_ = -(ushort)(lVar84 < 0);
      iVar77 = CONCAT22(-(ushort)(sVar144 < 0),sVar144);
      auVar128._0_8_ = CONCAT26(-(ushort)(auVar127._10_2_ < 0),CONCAT24(auVar127._10_2_,iVar77));
      auVar128._8_2_ = auVar129._12_2_;
      auVar128._10_2_ = -(ushort)(auVar129._12_2_ < 0);
      auVar137._12_2_ = auVar136._14_2_;
      auVar137._0_12_ = auVar128;
      auVar137._14_2_ = -(ushort)(auVar136._14_2_ < 0);
      auVar183._12_2_ = (short)((ulong)uVar79 >> 0x30);
      auVar183._0_12_ = auVar127;
      auVar183._14_2_ = -(ushort)bVar8;
      auVar182._12_4_ = auVar183._12_4_;
      auVar182._10_2_ = -(ushort)bVar7;
      auVar182._0_10_ = auVar127._0_10_;
      auVar181._10_6_ = auVar182._10_6_;
      auVar181._8_2_ = (short)((uint6)uVar125 >> 0x20);
      auVar181._0_8_ = uVar79;
      auVar180._8_8_ = auVar181._8_8_;
      auVar180._6_2_ = -(ushort)bVar121;
      auVar180._0_6_ = uVar125;
      auVar179._6_10_ = auVar180._6_10_;
      auVar179._4_2_ = (short)((uint)uVar124 >> 0x10);
      auVar179._0_4_ = uVar124;
      bVar5 = (char)((uint)uStack_1c9 >> 8) != '\0';
      bVar121 = (char)((uint)uStack_1c9 >> 0x10) != '\0';
      bVar7 = (char)((uint)uStack_1c9 >> 0x18) != '\0';
      bVar8 = (char)uStack_1c5 != '\0';
      bVar9 = (char)((ushort)uStack_1c5 >> 8) != '\0';
      auVar152[0] = -bVar5;
      cVar162 = -bVar121;
      cVar163 = -bVar9;
      cVar165 = -(cStack_1c3 != '\0');
      cVar166 = -(acStack_1c2[0] != '\0');
      bVar167 = -(acStack_1c2[1] != '\0');
      auVar153._0_9_ = (unkuint9)bVar167 << 0x38;
      auVar154._0_10_ = (unkuint10)bVar167 << 0x38;
      auVar155._0_11_ = ZEXT111(bVar167) << 0x38;
      auVar156._0_12_ = ZEXT112(bVar167) << 0x38;
      auVar157._0_13_ = ZEXT113(bVar167) << 0x38;
      auVar158._0_14_ = ZEXT114(bVar167) << 0x38;
      cVar142 = -bVar121;
      cVar138 = -bVar8;
      cVar139 = -bVar9;
      cVar140 = -(cStack_1c3 != '\0');
      cVar141 = -(acStack_1c2[0] != '\0');
      cVar143 = -(acStack_1c2[1] != '\0');
      auVar190[0xe] = bVar167;
      auVar190._0_14_ = auVar158._0_14_;
      auVar190[0xf] = cVar143;
      auVar189._14_2_ = auVar190._14_2_;
      auVar189[0xd] = cVar141;
      auVar189._0_13_ = auVar157._0_13_;
      auVar188._13_3_ = auVar189._13_3_;
      auVar188[0xc] = cVar166;
      auVar188._0_12_ = auVar156._0_12_;
      auVar187._12_4_ = auVar188._12_4_;
      auVar187[0xb] = cVar140;
      auVar187._0_11_ = auVar155._0_11_;
      auVar186._11_5_ = auVar187._11_5_;
      auVar186[10] = cVar165;
      auVar186._0_10_ = auVar154._0_10_;
      auVar185._10_6_ = auVar186._10_6_;
      auVar185[9] = cVar139;
      auVar185._0_9_ = auVar153._0_9_;
      Var38 = CONCAT91(CONCAT81((long)(CONCAT72(auVar185._9_7_,CONCAT11(cVar163,bVar167)) >> 8),
                                cVar138),-bVar8);
      auVar48._2_10_ = Var38;
      auVar48[1] = -bVar7;
      auVar48[0] = -bVar7;
      auVar47._2_12_ = auVar48;
      auVar47[1] = cVar142;
      auVar47[0] = cVar162;
      auVar184._0_2_ = CONCAT11(-bVar5,auVar152[0]);
      auVar184._2_14_ = auVar47;
      auVar158[0xe] = bVar167;
      auVar158[0xf] = cVar143;
      auVar157._14_2_ = auVar158._14_2_;
      auVar157[0xd] = cVar141;
      auVar156._13_3_ = auVar157._13_3_;
      auVar156[0xc] = cVar166;
      auVar155._12_4_ = auVar156._12_4_;
      auVar155[0xb] = cVar140;
      auVar154._11_5_ = auVar155._11_5_;
      auVar154[10] = cVar165;
      auVar153._10_6_ = auVar154._10_6_;
      auVar153[9] = cVar139;
      Var56 = CONCAT72(auVar153._9_7_,CONCAT11(cVar163,bVar167));
      lVar84 = (long)((unkuint9)Var56 >> 8);
      auVar50._1_8_ = lVar84;
      auVar50[0] = cVar138;
      auVar50._9_7_ = 0;
      auVar49._10_6_ = 0;
      auVar49._0_10_ = SUB1610(auVar50 << 0x38,6);
      auVar176._11_5_ = 0;
      auVar176._0_11_ = SUB1611(auVar49 << 0x30,5);
      auVar152._4_12_ = SUB1612(auVar176 << 0x28,4);
      auVar152[3] = cVar142;
      auVar152[2] = cVar162;
      auVar152[1] = -bVar5;
      iVar75 = (int)((unkuint9)Var56 >> 8);
      auVar146._8_4_ = auVar152._0_4_;
      auVar146._0_8_ = lVar84;
      sVar198 = auVar48._0_2_;
      sVar199 = (short)Var38;
      sVar144 = (short)((unkuint9)Var56 >> 8);
      sVar164 = auVar156._12_2_;
      auVar203._0_12_ = auVar184._0_12_;
      auVar203._12_2_ = sVar199;
      auVar203._14_2_ = -(ushort)(sVar199 < 0);
      auVar202._12_4_ = auVar203._12_4_;
      auVar202._0_10_ = auVar184._0_10_;
      auVar202._10_2_ = -(ushort)(sVar198 < 0);
      auVar201._10_6_ = auVar202._10_6_;
      auVar201._0_8_ = auVar184._0_8_;
      auVar201._8_2_ = sVar198;
      auVar51._4_8_ = auVar201._8_8_;
      auVar51._2_2_ = -(ushort)(auVar47._0_2_ < 0);
      auVar51._0_2_ = auVar47._0_2_;
      auVar193._12_2_ = sVar199;
      auVar193._0_12_ = auVar203._0_12_;
      auVar193._14_2_ = -(ushort)(sVar199 < 0);
      auVar192._12_4_ = auVar193._12_4_;
      auVar192._10_2_ = -(ushort)(sVar198 < 0);
      auVar192._0_10_ = auVar202._0_10_;
      auVar191._10_6_ = auVar192._10_6_;
      auVar191._8_2_ = sVar198;
      auVar191._0_8_ = auVar201._0_8_;
      auVar161._12_2_ = auVar157._14_2_;
      auVar161._0_12_ = auVar146;
      auVar161._14_2_ = -(ushort)(lVar84 < 0);
      auVar160._12_4_ = auVar161._12_4_;
      auVar160._0_10_ = auVar146._0_10_;
      auVar160._10_2_ = -(ushort)(sVar164 < 0);
      auVar159._10_6_ = auVar160._10_6_;
      auVar159._8_2_ = sVar164;
      auVar159._0_8_ = lVar84;
      auVar197._12_2_ = auVar157._14_2_;
      auVar197._0_12_ = auVar146;
      auVar197._14_2_ = -(ushort)(lVar84 < 0);
      auVar196._12_4_ = auVar197._12_4_;
      auVar196._10_2_ = -(ushort)(sVar164 < 0);
      auVar196._0_10_ = auVar160._0_10_;
      auVar195._10_6_ = auVar196._10_6_;
      auVar195._8_2_ = sVar164;
      auVar195._0_8_ = lVar84;
      auVar194._8_8_ = auVar195._8_8_;
      auVar194._6_2_ = -(ushort)(iVar75 < 0);
      auVar194._4_2_ = auVar154._10_2_;
      auVar194._0_4_ = iVar75;
      bVar121 = acStack_1c2[8] == '\0';
      uVar71 = (((((((((((((((auVar174._12_4_ - auVar178._12_4_) - auVar182._12_4_) -
                           auVar137._12_4_) +
                          (((auVar174._4_4_ - (int)((ulong)auVar175._0_8_ >> 0x20)) - auVar179._4_4_
                           ) - (int)((ulong)auVar128._0_8_ >> 0x20))) - auVar51._0_4_) -
                        auVar192._12_4_) - auVar194._4_4_) - auVar160._12_4_) +
                     ((((((((auVar174._8_4_ - auVar175._8_4_) - auVar181._8_4_) - auVar128._8_4_) +
                         (((auVar174._0_4_ - iVar70) -
                          CONCAT22(-(ushort)bVar6,CONCAT11(-bVar6,-bVar6))) - iVar77)) -
                        CONCAT22(-(ushort)bVar5,auVar184._0_2_)) - auVar191._8_4_) -
                      CONCAT22(-(ushort)(sVar144 < 0),sVar144)) - auVar159._8_4_)) -
                    (uint)(acStack_1c2[2] == '\0')) - (uint)(acStack_1c2[3] == '\0')) -
                  (uint)(acStack_1c2[4] == '\0')) - (uint)(acStack_1c2[5] == '\0')) -
                (uint)(acStack_1c2[6] == '\0')) - (uint)(acStack_1c2[7] == '\0')) + 7;
      if (usertime == 0 && mr == 0) {
        BIO_printf(_bio_err,"You have chosen to measure elapsed time instead of user CPU time.\n");
      }
      signal(0xe,alarmed);
      if (local_1d8[0] == '\0') {
        if (local_1d8[1] == '\0') {
          if (local_1d8[2] == '\0') {
LAB_0010faf2:
            if (local_1d8[3] != '\0') {
              if (uVar58 != 0) goto LAB_001098cb;
              goto LAB_0010fb1c;
            }
LAB_0010895b:
            if (local_1d8[4] == '\0') goto LAB_0010851f;
            if (uVar58 != 0) goto LAB_00108983;
            goto LAB_00109cde;
          }
          if (uVar58 != 0) goto LAB_00109ad4;
        }
        else {
          testnum = 0;
          if (uVar58 != 0) goto LAB_00108375;
          if (local_1d8[2] == '\0') {
            if (local_1d8[3] != '\0') goto LAB_0010fb1c;
            if ((local_1d8[4] != '\0') || (local_1d8[6] != '\0')) goto LAB_00109cde;
            goto LAB_00109ca4;
          }
        }
        goto LAB_0010fab5;
      }
      testnum = 0;
      if (uVar58 == 0) {
        if (local_1d8[1] == '\0') {
          if (local_1d8[2] == '\0') {
            if (local_1d8[3] == '\0') {
              if (local_1d8[4] != '\0') goto LAB_00109cde;
              goto LAB_0010851f;
            }
          }
          else {
LAB_0010fab5:
            testnum = 0;
            if (local_1d8[3] == '\0') {
              if (((local_1d8[4] == '\0') && (local_1d8[6] == '\0')) && (local_1d8[7] == '\0'))
              goto LAB_00109a78;
              goto LAB_00109cde;
            }
          }
        }
        else {
          if (local_1d8[2] != '\0') goto LAB_0010fab5;
          if (local_1d8[3] == '\0') goto LAB_0010895b;
        }
LAB_0010fb1c:
        testnum = 0;
        if ((((local_1d8[4] == '\0') && (local_1d8[6] == '\0')) && (local_1d8[7] == '\0')) &&
           (local_1d8[8] == '\0')) goto LAB_00108b5f;
      }
      else {
        uVar109 = (uint)local_2f8;
        do {
          pcVar82 = "+DT:%s:%d:%d\n";
          if (mr == 0) {
            pcVar82 = "Doing %s ops for %ds on %d size blocks: ";
          }
          BIO_printf(_bio_err,pcVar82,names);
          BIO_ctrl(_bio_err,0xb,0,(void *)0x0);
          run = 1;
          alarm(uVar109);
          app_tminterval(0,usertime);
          uVar74 = run_benchmark(local_3e8,EVP_Digest_MD2_loop,__s);
          dVar126 = (double)app_tminterval(1,usertime);
          alarm(0);
          uVar78 = testnum;
          if (uVar74 == 0xffffffff) {
            BIO_printf(_bio_err,"%s error!\n",names);
            ERR_print_errors(_bio_err);
            testmoderesult = 1;
            if (local_1d8[1] != '\0') goto LAB_00108375;
            if (local_1d8[2] != '\0') goto LAB_00109d9e;
            if (local_1d8[3] != '\0') goto LAB_00109d88;
            goto LAB_0010895b;
          }
          pcVar82 = "%d %s ops in %.2fs\n";
          if (mr != 0) {
            pcVar82 = "+R:%d:%s:%f\n";
          }
          BIO_printf(_bio_err,pcVar82,dVar126,(ulong)uVar74,names);
          (&results)[(int)uVar78] =
               (double)*(int *)(lengths + (long)(int)uVar78 * 4) * ((double)(int)uVar74 / dVar126);
        } while ((-1 < (int)uVar74) && (testnum = testnum + 1, testnum < uVar58));
        if (local_1d8[1] == '\0') {
          if (local_1d8[2] == '\0') goto LAB_0010faf2;
        }
        else {
LAB_00108375:
          testnum = 0;
          uVar109 = (uint)local_2f8;
          do {
            pcVar82 = "+DT:%s:%d:%d\n";
            if (mr == 0) {
              pcVar82 = "Doing %s ops for %ds on %d size blocks: ";
            }
            BIO_printf(_bio_err,pcVar82,PTR__LC49_0011b788);
            BIO_ctrl(_bio_err,0xb,0,(void *)0x0);
            run = 1;
            alarm(uVar109);
            app_tminterval(0,usertime);
            uVar74 = run_benchmark(local_3e8,EVP_Digest_MDC2_loop,__s);
            dVar126 = (double)app_tminterval(1,usertime);
            alarm(0);
            uVar78 = testnum;
            if (uVar74 == 0xffffffff) {
              BIO_printf(_bio_err,"%s error!\n",PTR__LC49_0011b788);
              ERR_print_errors(_bio_err);
              testmoderesult = 1;
              if (local_1d8[2] != '\0') goto LAB_00109d9e;
              if (local_1d8[3] != '\0') goto LAB_00109d88;
              if (local_1d8[4] == '\0') goto LAB_0010851f;
              goto LAB_00108b2d;
            }
            pcVar82 = "%d %s ops in %.2fs\n";
            if (mr != 0) {
              pcVar82 = "+R:%d:%s:%f\n";
            }
            BIO_printf(_bio_err,pcVar82,dVar126,(ulong)uVar74,PTR__LC49_0011b788);
            (&DAT_00117c70)[(int)uVar78] =
                 (double)*(int *)(lengths + (long)(int)uVar78 * 4) * ((double)(int)uVar74 / dVar126)
            ;
          } while ((-1 < (int)uVar74) && (testnum = testnum + 1, testnum < uVar58));
          if (local_1d8[2] == '\0') {
            if (local_1d8[3] != '\0') goto LAB_001098cb;
            goto LAB_0010895b;
          }
        }
LAB_00109ad4:
        testnum = 0;
        uVar109 = (uint)local_2f8;
        do {
          pcVar82 = "+DT:%s:%d:%d\n";
          if (mr == 0) {
            pcVar82 = "Doing %s ops for %ds on %d size blocks: ";
          }
          BIO_printf(_bio_err,pcVar82,PTR__LC50_0011b790);
          BIO_ctrl(_bio_err,0xb,0,(void *)0x0);
          run = 1;
          alarm(uVar109);
          app_tminterval(0,usertime);
          uVar74 = run_benchmark(local_3e8,EVP_Digest_MD4_loop,__s);
          dVar126 = (double)app_tminterval(1,usertime);
          alarm(0);
          uVar78 = testnum;
          if (uVar74 == 0xffffffff) {
            BIO_printf(_bio_err,"%s error!\n",PTR__LC50_0011b790);
            ERR_print_errors(_bio_err);
            testmoderesult = 1;
            if (local_1d8[3] != '\0') goto LAB_00109d88;
            if (local_1d8[4] != '\0') goto LAB_00108b2d;
            if (local_1d8[6] != '\0') goto LAB_00109c76;
            goto LAB_00109ca4;
          }
          pcVar82 = "%d %s ops in %.2fs\n";
          if (mr != 0) {
            pcVar82 = "+R:%d:%s:%f\n";
          }
          BIO_printf(_bio_err,pcVar82,dVar126,(ulong)uVar74,PTR__LC50_0011b790);
          (&DAT_00117ca0)[(int)uVar78] =
               (double)*(int *)(lengths + (long)(int)uVar78 * 4) * ((double)(int)uVar74 / dVar126);
        } while ((-1 < (int)uVar74) && (testnum = testnum + 1, testnum < uVar58));
        if (local_1d8[3] != '\0') goto LAB_001098cb;
        if (local_1d8[4] != '\0') goto LAB_00108983;
LAB_0010851f:
        if (local_1d8[6] == '\0') goto LAB_00109ca4;
        if (uVar58 != 0) goto LAB_00108547;
      }
      goto LAB_00109cde;
    }
LAB_001079ce:
    __s = (void *)app_malloc(0x3560);
    memset(__s,0,0x3560);
    iVar73 = *(int *)(lengths + (ulong)(uVar58 - 1) * 4);
    if (iVar73 < 0x24) {
      iVar73 = 100;
LAB_00107a19:
      sVar97 = (size_t)iVar73;
      plVar98 = (long *)((long)__s + 0x10);
      do {
        plVar105 = plVar98 + 0x6ac;
        lVar84 = app_malloc(sVar97,"input buffer");
        plVar98[2] = lVar84;
        lVar84 = app_malloc(sVar97,"input buffer");
        plVar98[3] = lVar84;
        plVar98[7] = (long)(iVar73 - iVar77);
        plVar98[8] = (long)(iVar73 - iVar77);
        *plVar98 = plVar98[2] + (long)iVar77;
        plVar98[1] = lVar84 + iVar77;
        lVar84 = app_malloc(0x100,"ECDH secret a");
        plVar98[0x75] = lVar84;
        lVar84 = app_malloc(0x100,"ECDH secret b");
        plVar98[0x76] = lVar84;
        lVar84 = app_malloc(0x400,"FFDH secret a");
        plVar98[0x94] = lVar84;
        lVar84 = app_malloc(0x400,"FFDH secret b");
        plVar98[0x95] = lVar84;
        plVar98 = plVar105;
      } while (plVar105 != (long *)((long)__s + 0x3570));
      local_3e4 = 0;
      uVar106 = 1;
      goto LAB_00108108;
    }
    if (iVar73 < 0x7fffffc0) {
      iVar73 = iVar73 + 0x40;
      goto LAB_00107a19;
    }
    local_3e4 = 0;
    uVar106 = 1;
LAB_00109781:
    BIO_printf(_bio_err,"Error: buffer size too large\n");
    local_400 = (void *)0x0;
    local_418 = 0;
    local_420 = (long *)0x0;
    local_3f0 = 0;
  }
  goto LAB_00105e6a;
LAB_00109d9e:
  testmoderesult = 1;
  goto LAB_00109ad4;
LAB_00109d88:
  testmoderesult = 1;
LAB_001098cb:
  testnum = 0;
  uVar109 = (uint)local_2f8;
  do {
    pcVar82 = "+DT:%s:%d:%d\n";
    if (mr == 0) {
      pcVar82 = "Doing %s ops for %ds on %d size blocks: ";
    }
    BIO_printf(_bio_err,pcVar82,PTR__LC51_0011b798);
    BIO_ctrl(_bio_err,0xb,0,(void *)0x0);
    run = 1;
    alarm(uVar109);
    app_tminterval(0,usertime);
    uVar74 = run_benchmark(local_3e8,MD5_loop,__s);
    dVar126 = (double)app_tminterval(1,usertime);
    alarm(0);
    uVar78 = testnum;
    if (uVar74 == 0xffffffff) {
      BIO_printf(_bio_err,"%s error!\n",PTR__LC51_0011b798);
      ERR_print_errors(_bio_err);
      testmoderesult = 1;
      if (local_1d8[4] != '\0') goto LAB_00108b2d;
      if (local_1d8[6] != '\0') goto LAB_00109c76;
      if (local_1d8[7] == '\0') goto LAB_00109a78;
      goto LAB_001086d8;
    }
    pcVar82 = "%d %s ops in %.2fs\n";
    if (mr != 0) {
      pcVar82 = "+R:%d:%s:%f\n";
    }
    BIO_printf(_bio_err,pcVar82,dVar126,(ulong)uVar74,PTR__LC51_0011b798);
    (&DAT_00117cd0)[(int)uVar78] =
         (double)*(int *)(lengths + (long)(int)uVar78 * 4) * ((double)(int)uVar74 / dVar126);
  } while ((-1 < (int)uVar74) && (testnum = testnum + 1, testnum < uVar58));
  if (local_1d8[4] == '\0') {
    if (local_1d8[6] == '\0') {
LAB_00109ca4:
      if (local_1d8[7] != '\0') {
        if (uVar58 != 0) goto LAB_001086e9;
        goto LAB_00109cde;
      }
      goto LAB_00109a78;
    }
    goto LAB_00108547;
  }
LAB_00108983:
  testnum = 0;
  uVar109 = (uint)local_2f8;
  do {
    pcVar82 = "+DT:%s:%d:%d\n";
    if (mr == 0) {
      pcVar82 = "Doing %s ops for %ds on %d size blocks: ";
    }
    BIO_printf(_bio_err,pcVar82,PTR__LC52_0011b7a0);
    BIO_ctrl(_bio_err,0xb,0,(void *)0x0);
    run = 1;
    alarm(uVar109);
    app_tminterval(0,usertime);
    uVar74 = run_benchmark(local_3e8,SHA1_loop,__s);
    dVar126 = (double)app_tminterval(1,usertime);
    alarm(0);
    uVar78 = testnum;
    if (uVar74 == 0xffffffff) {
      BIO_printf(_bio_err,"%s error!\n",PTR__LC52_0011b7a0);
      ERR_print_errors(_bio_err);
      testmoderesult = 1;
      if (local_1d8[6] != '\0') goto LAB_00109c76;
      if (local_1d8[7] != '\0') goto LAB_001086d8;
      if (local_1d8[8] == '\0') goto LAB_00108b5f;
      goto LAB_00108876;
    }
    pcVar82 = "%d %s ops in %.2fs\n";
    if (mr != 0) {
      pcVar82 = "+R:%d:%s:%f\n";
    }
    BIO_printf(_bio_err,pcVar82,dVar126,(ulong)uVar74,PTR__LC52_0011b7a0);
    (&DAT_00117d00)[(int)uVar78] =
         (double)*(int *)(lengths + (long)(int)uVar78 * 4) * ((double)(int)uVar74 / dVar126);
  } while ((-1 < (int)uVar74) && (testnum = testnum + 1, testnum < uVar58));
  if (local_1d8[6] != '\0') goto LAB_00108547;
  if (local_1d8[7] != '\0') goto LAB_001086e9;
LAB_00109a78:
  if (local_1d8[8] != '\0') {
    if (uVar58 != 0) goto LAB_00109098;
LAB_00109cde:
    testnum = 0;
    if (local_1d8[5] != '\0') {
      testnum = 0;
    }
    goto LAB_00108d0a;
  }
  goto LAB_00108b5f;
LAB_00108b2d:
  testmoderesult = 1;
  goto LAB_00108983;
LAB_001086d8:
  testmoderesult = 1;
  goto LAB_001086e9;
LAB_001086f8:
  pcVar82 = "%d %s ops in %.2fs\n";
  if (mr != 0) {
    pcVar82 = "+R:%d:%s:%f\n";
  }
  BIO_printf(_bio_err,pcVar82,dVar126,(ulong)uVar74,PTR__LC54_0011b7b8);
  (&DAT_00117d90)[(int)uVar78] =
       (double)*(int *)(lengths + (long)(int)uVar78 * 4) * ((double)(int)uVar74 / dVar126);
  if (((int)uVar74 < 0) || (testnum = testnum + 1, uVar58 <= testnum)) goto LAB_00109080;
  goto LAB_0010878a;
LAB_00109080:
  if (local_1d8[8] != '\0') goto LAB_00109098;
joined_r0x00109247:
  if (local_1d8[5] != '\0') goto LAB_00108b89;
  goto LAB_00108d0a;
LAB_001090a7:
  pcVar82 = "%d %s ops in %.2fs\n";
  if (mr != 0) {
    pcVar82 = "+R:%d:%s:%f\n";
  }
  BIO_printf(_bio_err,pcVar82,dVar126,(ulong)uVar74,PTR__LC55_0011b7c0);
  (&DAT_00117dc0)[(int)uVar78] =
       (double)*(int *)(lengths + (long)(int)uVar78 * 4) * ((double)(int)uVar74 / dVar126);
  if (((int)uVar74 < 0) || (testnum = testnum + 1, uVar58 <= testnum)) goto joined_r0x00109247;
  goto LAB_0010913b;
LAB_0010a2db:
  uVar79 = *(undefined8 *)((long)__s + 0x4c0);
  plVar105 = local_3d0;
  if (uVar58 <= (uint)uVar112) goto LAB_0010a355;
  iVar77 = *(int *)(lengths + uVar112 * 4);
  lVar84 = EVP_CIPHER_CTX_get0_cipher();
  iVar75 = EVP_CIPHER_CTX_get_block_size(uVar79);
  if ((lVar84 == 0) || (iVar75 < 1)) {
    BIO_printf(_bio_err,"\nInvalid cipher!\n");
    goto LAB_0010a355;
  }
  if (iVar77 % iVar75 != 0) {
    uVar79 = EVP_CIPHER_get0_name(lVar84);
    BIO_printf(_bio_err,"\nRequested encryption length not a multiple of block size for %s!\n",
               uVar79);
    goto LAB_0010a355;
  }
  uVar109 = (uint)local_2f8;
  pcVar82 = "+DT:%s:%d:%d\n";
  if (mr == 0) {
    pcVar82 = "Doing %s ops for %ds on %d size blocks: ";
  }
  BIO_printf(_bio_err,pcVar82,(&names)[algindex]);
  BIO_ctrl(_bio_err,0xb,0,(void *)0x0);
  run = 1;
  alarm(uVar109);
  app_tminterval(0,usertime);
  uVar76 = run_benchmark(local_3e8,EVP_Cipher_loop,__s);
  uVar79 = app_tminterval(1,usertime);
  alarm(0);
  print_result(uVar79,algindex,testnum,uVar76);
  testnum = testnum + 1;
  uVar112 = (ulong)testnum;
  goto LAB_0010a2db;
LAB_0010abe8:
  pcVar82 = "\nCouldn\'t init the context\n";
  goto LAB_0010a811;
LAB_0010b45e:
  pEVar80 = EVP_PKEY_CTX_new((EVP_PKEY *)local_308,(ENGINE *)0x0);
  psVar115[uVar112 + 0xf] = (size_t)pEVar80;
  *psVar115 = psVar115[-2];
  if ((((EVP_PKEY_CTX *)psVar115[(ulong)testnum + 0xf] == (EVP_PKEY_CTX *)0x0) ||
      (iVar77 = EVP_PKEY_encrypt_init((EVP_PKEY_CTX *)psVar115[(ulong)testnum + 0xf]), iVar77 < 1))
     || (iVar77 = EVP_PKEY_encrypt((EVP_PKEY_CTX *)psVar115[(ulong)testnum + 0xf],
                                   (uchar *)psVar115[-8],psVar115,(uchar *)psVar115[-9],0x24),
        iVar77 < 1)) goto LAB_0010ad20;
  psVar115 = psVar115 + 0x6ac;
  if ((size_t *)((long)__s + 0x58) + (long)local_438 * 0x6ac == psVar115) {
    pcVar82 = "Doing %u bits %s %s ops for %ds: ";
    if (mr != 0) {
      pcVar82 = "+DTP:%d:%s:%s:%d\n";
    }
    BIO_printf(_bio_err,pcVar82,(ulong)*(uint *)(&DAT_0011ae6c + (ulong)testnum * 0x10));
    BIO_ctrl(_bio_err,0xb,0,(void *)0x0);
    run = 1;
    alarm(uVar109);
    app_tminterval(0,usertime);
    iVar77 = run_benchmark(local_3e8,RSA_encrypt_loop,__s);
    dVar126 = (double)app_tminterval(1,usertime);
    alarm(0);
    pcVar82 = "%ld %u bits public RSA encrypt ops in %.2fs\n";
    if (mr != 0) {
      pcVar82 = "+R3:%ld:%d:%.2f\n";
    }
    BIO_printf(_bio_err,pcVar82,dVar126,(long)iVar77,
               (ulong)*(uint *)(&DAT_0011ae6c + (ulong)testnum * 0x10));
    uVar112 = (ulong)testnum;
    (&DAT_00117b50)[uVar112 * 4] = (double)iVar77 / dVar126;
    pvVar102 = __s;
    goto LAB_0010b626;
  }
  uVar112 = (ulong)testnum;
  goto LAB_0010b45e;
LAB_0010b626:
  pEVar80 = EVP_PKEY_CTX_new((EVP_PKEY *)local_308,(ENGINE *)0x0);
  *(EVP_PKEY_CTX **)((long)pvVar102 + uVar112 * 8 + 0x108) = pEVar80;
  local_328 = *(size_t *)((long)pvVar102 + 0x48);
  pEVar80 = *(EVP_PKEY_CTX **)((long)pvVar102 + (ulong)testnum * 8 + 0x108);
  if (((pEVar80 == (EVP_PKEY_CTX *)0x0) || (iVar77 = EVP_PKEY_decrypt_init(pEVar80), iVar77 < 1)) ||
     (iVar77 = EVP_PKEY_decrypt(*(EVP_PKEY_CTX **)((long)pvVar102 + (ulong)testnum * 8 + 0x108),
                                *(uchar **)((long)pvVar102 + 0x10),&local_328,
                                *(uchar **)((long)pvVar102 + 0x18),
                                *(size_t *)((long)pvVar102 + 0x58)), iVar77 < 1)) goto LAB_0010ad4b;
  pvVar102 = (void *)((long)pvVar102 + 0x3560);
  if (pvVar114 == pvVar102) {
    pcVar82 = "Doing %u bits %s %s ops for %ds: ";
    if (mr != 0) {
      pcVar82 = "+DTP:%d:%s:%s:%d\n";
    }
    BIO_printf(_bio_err,pcVar82,(ulong)*(uint *)(&DAT_0011ae6c + (ulong)testnum * 0x10));
    BIO_ctrl(_bio_err,0xb,0,(void *)0x0);
    run = 1;
    alarm(uVar109);
    app_tminterval(0,usertime);
    iVar77 = run_benchmark(local_3e8,RSA_decrypt_loop,__s);
    dVar126 = (double)app_tminterval(1,usertime);
    alarm(0);
    pcVar82 = "%ld %u bits private RSA decrypt ops in %.2fs\n";
    if (mr != 0) {
      pcVar82 = "+R4:%ld:%d:%.2f\n";
    }
    BIO_printf(_bio_err,pcVar82,dVar126,(long)iVar77,
               (ulong)*(uint *)(&DAT_0011ae6c + (ulong)testnum * 0x10));
    uVar112 = (ulong)testnum;
    (&DAT_00117b58)[uVar112 * 4] = (double)iVar77 / dVar126;
    if (1 < (long)iVar77) goto LAB_0010ada9;
    goto LAB_0010ad7c;
  }
  uVar112 = (ulong)testnum;
  goto LAB_0010b626;
  while (psVar115 = psVar115 + 0x6ac, psVar2 != psVar115) {
LAB_0010ed53:
    sVar97 = psVar115[(ulong)testnum + 0x66];
    *psVar115 = (&DAT_0011b150)[(ulong)testnum * 3];
    iVar77 = EVP_DigestSign(sVar97,psVar115[-7],psVar115,psVar115[-8],0x14);
    pvVar102 = __s;
    if (iVar77 == 0) {
      lVar84 = 1;
      BIO_printf(_bio_err,"EdDSA sign failure.  No EdDSA sign will be done.\n");
      ERR_print_errors(_bio_err);
      uVar112 = (ulong)testnum;
      testmoderesult = 1;
      goto LAB_0010f411;
    }
  }
  pkey_print_message(&_LC262,(&ed_curves_11)[(ulong)testnum * 3],(&DAT_0011b14c)[(ulong)testnum * 6]
                     ,local_2e8._4_4_);
  app_tminterval(0,usertime);
  iVar77 = run_benchmark(local_3e8,EdDSA_sign_loop,__s);
  lVar84 = (long)iVar77;
  dVar126 = (double)app_tminterval(1,usertime);
  alarm(0);
  pcVar82 = "%ld %u bits %s sign ops in %.2fs \n";
  if (mr != 0) {
    pcVar82 = "+R10:%ld:%u:%s:%.2f\n";
  }
  BIO_printf(_bio_err,pcVar82,dVar126,lVar84,(ulong)(uint)(&DAT_0011b14c)[(ulong)testnum * 6],
             (&ed_curves_11)[(ulong)testnum * 3]);
  uVar112 = (ulong)testnum;
  (&eddsa_results)[uVar112 * 2] = (double)iVar77 / dVar126;
LAB_0010f411:
  do {
    iVar77 = EVP_DigestVerify(*(undefined8 *)((long)pvVar102 + uVar112 * 8 + 0x390),
                              *(undefined8 *)((long)pvVar102 + 0x18),
                              *(undefined8 *)((long)pvVar102 + 0x50),
                              *(undefined8 *)((long)pvVar102 + 0x10),0x14);
    if (iVar77 != 1) {
      BIO_printf(_bio_err,"EdDSA verify failure.  No EdDSA verify will be done.\n");
      ERR_print_errors(_bio_err);
      uVar112 = (ulong)testnum;
      testmoderesult = 1;
      *(undefined1 *)((long)&local_226 + uVar112) = 0;
      goto LAB_0010f550;
    }
    pvVar102 = (void *)((long)pvVar102 + 0x3560);
    uVar112 = (ulong)testnum;
  } while (pvVar102 != pvVar114);
  pkey_print_message("verify",(&ed_curves_11)[uVar112 * 3],(&DAT_0011b14c)[uVar112 * 6],
                     local_2e8._4_4_);
  app_tminterval(0,usertime);
  iVar77 = run_benchmark(local_3e8,EdDSA_verify_loop,__s);
  dVar126 = (double)app_tminterval(1,usertime);
  alarm(0);
  pcVar82 = "%ld %u bits %s verify ops in %.2fs\n";
  if (mr != 0) {
    pcVar82 = "+R11:%ld:%u:%s:%.2f\n";
  }
  BIO_printf(_bio_err,pcVar82,dVar126,(long)iVar77,(ulong)(uint)(&DAT_0011b14c)[(ulong)testnum * 6],
             (&ed_curves_11)[(ulong)testnum * 3]);
  uVar112 = (ulong)testnum;
  (&DAT_001178c8)[uVar112 * 2] = (double)iVar77 / dVar126;
LAB_0010f550:
  if (lVar84 < 2) {
    uVar96 = 2;
    if (1 < uVar112) {
      uVar96 = uVar112;
    }
    __memset_chk((long)&local_226 + uVar112,0,2 - uVar112,uVar96 - uVar112);
  }
LAB_0010c8a0:
  testnum = testnum + 1;
  if (1 < testnum) goto LAB_0010c9f6;
  goto LAB_0010c8b2;
LAB_0010c9f6:
  testnum = 0;
LAB_0010ca00:
  if (cVar118 == '\0') goto LAB_0010ca0b;
  do {
    local_300 = (EVP_MD *)0x0;
    uVar112 = 0;
    pvVar102 = __s;
    while( true ) {
      uVar79 = EVP_MD_CTX_new();
      *(undefined8 *)((long)pvVar102 + uVar112 * 8 + 0x3a0) = uVar79;
      uVar96 = (ulong)testnum;
      lVar84 = EVP_MD_CTX_new();
      uVar112 = (ulong)testnum;
      *(long *)((long)pvVar102 + uVar96 * 8 + 0x3a8) = lVar84;
      if ((*(long *)((long)pvVar102 + uVar112 * 8 + 0x3a0) == 0) || (lVar84 == 0))
      goto LAB_0010e431;
      local_300 = (EVP_MD *)0x0;
      pEVar80 = EVP_PKEY_CTX_new_id(0x494,(ENGINE *)0x0);
      if (pEVar80 == (EVP_PKEY_CTX *)0x0) break;
      iVar77 = EVP_PKEY_keygen_init(pEVar80);
      if (((iVar77 < 1) ||
          (iVar77 = EVP_PKEY_CTX_set_ec_paramgen_curve_nid
                              (pEVar80,*(undefined4 *)(&DAT_0011aed8 + (ulong)testnum * 0x18)),
          iVar77 < 1)) || (iVar77 = EVP_PKEY_keygen(pEVar80,(EVP_PKEY **)&local_300), iVar77 < 1)) {
LAB_0010e42c:
        EVP_PKEY_CTX_free(pEVar80);
        goto LAB_0010e431;
      }
      EVP_PKEY_CTX_free(pEVar80);
      *(EVP_MD **)((long)pvVar102 + (ulong)testnum * 8 + 0x3b0) = local_300;
      iVar77 = EVP_PKEY_get_size();
      *(long *)((long)pvVar102 + 0x50) = (long)iVar77;
      pEVar90 = EVP_PKEY_CTX_new((EVP_PKEY *)local_300,(ENGINE *)0x0);
      pEVar80 = EVP_PKEY_CTX_new((EVP_PKEY *)local_300,(ENGINE *)0x0);
      if ((pEVar90 == (EVP_PKEY_CTX *)0x0) || (pEVar80 == (EVP_PKEY_CTX *)0x0)) goto LAB_0010e42c;
      EVP_MD_CTX_set_pkey_ctx(*(undefined8 *)((long)pvVar102 + (ulong)testnum * 8 + 0x3a0),pEVar90);
      EVP_MD_CTX_set_pkey_ctx(*(undefined8 *)((long)pvVar102 + (ulong)testnum * 8 + 0x3a8),pEVar80);
      iVar77 = EVP_PKEY_CTX_set1_id(pEVar90,"TLSv1.3+GM+Cipher+Suite",0x17);
      if ((iVar77 != 1) ||
         (iVar77 = EVP_PKEY_CTX_set1_id(pEVar80,"TLSv1.3+GM+Cipher+Suite",0x17), pEVar63 = local_300
         , iVar77 != 1)) goto LAB_0010e431;
      pEVar95 = (EVP_MD *)EVP_sm3();
      iVar77 = EVP_DigestSignInit(*(EVP_MD_CTX **)((long)pvVar102 + (ulong)testnum * 8 + 0x3a0),
                                  (EVP_PKEY_CTX **)0x0,pEVar95,(ENGINE *)0x0,(EVP_PKEY *)pEVar63);
      pEVar63 = local_300;
      if (iVar77 == 0) goto LAB_0010e431;
      pEVar95 = (EVP_MD *)EVP_sm3();
      iVar77 = EVP_DigestVerifyInit
                         (*(EVP_MD_CTX **)((long)pvVar102 + (ulong)testnum * 8 + 0x3a8),
                          (EVP_PKEY_CTX **)0x0,pEVar95,(ENGINE *)0x0,(EVP_PKEY *)pEVar63);
      if (iVar77 == 0) goto LAB_0010e431;
      pvVar102 = (void *)((long)pvVar102 + 0x3560);
      pvVar93 = __s;
      if (pvVar102 == pvVar114) goto LAB_0010e655;
      uVar112 = (ulong)testnum;
    }
    EVP_PKEY_CTX_free((EVP_PKEY_CTX *)0x0);
LAB_0010e431:
    BIO_printf(_bio_err,"SM2 init failure.\n");
    ERR_print_errors(_bio_err);
    testnum = testnum + 1;
    testmoderesult = 1;
  } while (testnum == 0);
  goto LAB_0010ca10;
  while (pvVar93 = (void *)((long)pvVar93 + 0x3560), pvVar93 != pvVar114) {
LAB_0010e655:
    iVar77 = EVP_DigestSign(*(undefined8 *)((long)pvVar93 + (ulong)testnum * 8 + 0x3a0),
                            *(undefined8 *)((long)pvVar93 + 0x18),(long)pvVar93 + 0x50,
                            *(undefined8 *)((long)pvVar93 + 0x10),0x14);
    pvVar102 = __s;
    if (iVar77 == 0) {
      lVar84 = 1;
      BIO_printf(_bio_err,"SM2 sign failure.  No SM2 sign will be done.\n");
      ERR_print_errors(_bio_err);
      uVar112 = (ulong)testnum;
      testmoderesult = 1;
      goto LAB_0010e820;
    }
  }
  pkey_print_message(&_LC262,(&sm2_curves_9)[(ulong)testnum * 3],(&DAT_0011aedc)[(ulong)testnum * 6]
                     ,uStack_2e0 & 0xffffffff);
  app_tminterval(0,usertime);
  iVar77 = run_benchmark(local_3e8,SM2_sign_loop,__s);
  lVar84 = (long)iVar77;
  dVar126 = (double)app_tminterval(1,usertime);
  alarm(0);
  pcVar82 = "%ld %u bits %s sign ops in %.2fs \n";
  if (mr != 0) {
    pcVar82 = "+R12:%ld:%u:%s:%.2f\n";
  }
  BIO_printf(_bio_err,pcVar82,dVar126,lVar84,(ulong)(uint)(&DAT_0011aedc)[(ulong)testnum * 6],
             (&sm2_curves_9)[(ulong)testnum * 3]);
  uVar112 = (ulong)testnum;
  (&sm2_results)[uVar112 * 2] = (double)iVar77 / dVar126;
LAB_0010e820:
  do {
    iVar77 = EVP_DigestVerify(*(undefined8 *)((long)pvVar102 + uVar112 * 8 + 0x3a8),
                              *(undefined8 *)((long)pvVar102 + 0x18),
                              *(undefined8 *)((long)pvVar102 + 0x50),
                              *(undefined8 *)((long)pvVar102 + 0x10),0x14);
    if (iVar77 != 1) {
      BIO_printf(_bio_err,"SM2 verify failure.  No SM2 verify will be done.\n");
      ERR_print_errors(_bio_err);
      cVar118 = '\0';
      testmoderesult = 1;
      goto LAB_0010e94c;
    }
    pvVar102 = (void *)((long)pvVar102 + 0x3560);
    uVar112 = (ulong)testnum;
  } while (pvVar102 != pvVar114);
  pkey_print_message("verify",(&sm2_curves_9)[uVar112 * 3],(&DAT_0011aedc)[uVar112 * 6],
                     uStack_2e0 & 0xffffffff);
  app_tminterval(0,usertime);
  iVar77 = run_benchmark(local_3e8,SM2_verify_loop,__s);
  dVar126 = (double)app_tminterval(1,usertime);
  alarm(0);
  pcVar82 = "%ld %u bits %s verify ops in %.2fs\n";
  if (mr != 0) {
    pcVar82 = "+R13:%ld:%u:%s:%.2f\n";
  }
  BIO_printf(_bio_err,pcVar82,dVar126,(long)iVar77,(ulong)(uint)(&DAT_0011aedc)[(ulong)testnum * 6],
             (&sm2_curves_9)[(ulong)testnum * 3]);
  (&DAT_001178a8)[(ulong)testnum * 2] = (double)iVar77 / dVar126;
LAB_0010e94c:
  uVar109 = testnum + 1;
  if (lVar84 < 2) {
    if (uVar109 == 0) {
LAB_0010ca0b:
      cVar118 = '\0';
      goto LAB_0010ca10;
    }
    uVar109 = testnum + 2;
  }
  testnum = uVar109;
  if (uVar109 != 0) goto LAB_0010ca10;
  goto LAB_0010ca00;
LAB_0010ca10:
  uVar112 = 0;
  testnum = 0;
  do {
    uVar109 = (uint)uVar112;
    if (*(char *)((long)&local_224 + uVar112) != '\0') {
      pvVar102 = __s;
      do {
        local_318 = (EVP_PKEY *)0x0;
        local_310 = (EVP_MD *)0x0;
        uVar112 = ERR_peek_error();
        if (uVar112 != 0) {
          BIO_printf(_bio_err,"WARNING: the error queue contains previous unhandled errors.\n");
          ERR_print_errors(_bio_err);
          testmoderesult = 1;
        }
        local_318 = EVP_PKEY_new();
        if ((local_318 == (EVP_PKEY *)0x0) ||
           (local_310 = (EVP_MD *)EVP_PKEY_new(), local_310 == (EVP_MD *)0x0)) {
          pcVar82 = "Error while initialising EVP_PKEY (out of memory?).\n";
LAB_0010e602:
          BIO_printf(_bio_err,pcVar82);
          ERR_print_errors(_bio_err);
          testmoderesult = 1;
          uVar109 = testnum;
          goto LAB_0010cda4;
        }
        pEVar80 = EVP_PKEY_CTX_new_id(0x1c,(ENGINE *)0x0);
        if (pEVar80 == (EVP_PKEY_CTX *)0x0) {
LAB_0010e709:
          pcVar82 = "Error while allocating EVP_PKEY_CTX.\n";
          goto LAB_0010e602;
        }
        iVar77 = EVP_PKEY_keygen_init(pEVar80);
        if (iVar77 < 1) {
          pcVar82 = "Error while initialising EVP_PKEY_CTX.\n";
          goto LAB_0010e602;
        }
        iVar77 = EVP_PKEY_CTX_set_dh_nid
                           (pEVar80,*(undefined4 *)(ffdh_params_2 + (ulong)testnum * 0x10 + 8));
        if (iVar77 < 1) {
          pcVar82 = "Error setting DH key size for keygen.\n";
          goto LAB_0010e602;
        }
        iVar77 = EVP_PKEY_keygen(pEVar80,&local_318);
        if ((iVar77 < 1) || (iVar77 = EVP_PKEY_keygen(pEVar80,(EVP_PKEY **)&local_310), iVar77 < 1))
        {
          pcVar82 = "FFDH key generation failure.\n";
          goto LAB_0010e602;
        }
        EVP_PKEY_CTX_free(pEVar80);
        pEVar80 = EVP_PKEY_CTX_new(local_318,(ENGINE *)0x0);
        if (pEVar80 == (EVP_PKEY_CTX *)0x0) goto LAB_0010e709;
        iVar77 = EVP_PKEY_derive_init(pEVar80);
        if (iVar77 < 1) {
          pcVar82 = "FFDH derivation context init failure.\n";
          goto LAB_0010e602;
        }
        iVar77 = EVP_PKEY_derive_set_peer(pEVar80,(EVP_PKEY *)local_310);
        if (iVar77 < 1) {
          pcVar82 = "Assigning peer key for derivation failed.\n";
          goto LAB_0010e602;
        }
        iVar77 = EVP_PKEY_derive(pEVar80,(uchar *)0x0,(size_t *)&local_308);
        if (iVar77 < 1) {
          pcVar82 = "Checking size of shared secret failed.\n";
          goto LAB_0010e602;
        }
        if ((EVP_MD *)0x400 < local_308) {
          BIO_printf(_bio_err,"Assertion failure: shared secret too large.\n");
          uVar109 = testnum;
          goto LAB_0010cda4;
        }
        iVar77 = EVP_PKEY_derive(pEVar80,*(uchar **)((long)pvVar102 + 0x4b0),(size_t *)&local_308);
        if (iVar77 < 1) {
          pcVar82 = "Shared secret derive failure.\n";
          goto LAB_0010e602;
        }
        pEVar90 = EVP_PKEY_CTX_new((EVP_PKEY *)local_310,(ENGINE *)0x0);
        if (pEVar90 == (EVP_PKEY_CTX *)0x0) goto LAB_0010e709;
        iVar77 = EVP_PKEY_derive_init(pEVar90);
        if ((iVar77 < 1) || (iVar77 = EVP_PKEY_derive_set_peer(pEVar90,local_318), iVar77 < 1)) {
LAB_0010e5d2:
          BIO_printf(_bio_err,"FFDH computation failure.\n");
          uVar109 = testnum;
          goto LAB_0010cda4;
        }
        iVar77 = EVP_PKEY_derive(pEVar90,(uchar *)0x0,(size_t *)&local_300);
        if ((iVar77 < 1) ||
           ((iVar77 = EVP_PKEY_derive(pEVar90,*(uchar **)((long)pvVar102 + 0x4b8),
                                      (size_t *)&local_300), iVar77 < 1 || (local_300 != local_308))
           )) goto LAB_0010e5d2;
        iVar77 = CRYPTO_memcmp(*(void **)((long)pvVar102 + 0x4b0),*(void **)((long)pvVar102 + 0x4b8)
                               ,(size_t)local_308);
        if (iVar77 != 0) {
          pcVar82 = "FFDH computations don\'t match.\n";
          goto LAB_0010e602;
        }
        *(EVP_PKEY_CTX **)((long)pvVar102 + (ulong)testnum * 8 + 0x488) = pEVar80;
        pvVar102 = (void *)((long)pvVar102 + 0x3560);
        EVP_PKEY_free(local_318);
        local_318 = (EVP_PKEY *)0x0;
        EVP_PKEY_free((EVP_PKEY *)local_310);
        local_310 = (EVP_MD *)0x0;
        EVP_PKEY_CTX_free(pEVar90);
      } while (pvVar102 != pvVar114);
      pkey_print_message(&_LC269,&_LC191,
                         *(undefined4 *)(ffdh_params_2 + (ulong)testnum * 0x10 + 0xc),
                         uStack_2e0._4_4_);
      app_tminterval(0,usertime);
      iVar77 = run_benchmark(local_3e8,FFDH_derive_key_loop,__s);
      dVar126 = (double)app_tminterval(1,usertime);
      alarm(0);
      pcVar82 = "%ld %u-bits FFDH ops in %.2fs\n";
      if (mr != 0) {
        pcVar82 = "+R14:%ld:%d:%.2f\n";
      }
      BIO_printf(_bio_err,pcVar82,dVar126,(long)iVar77,
                 (ulong)*(uint *)(ffdh_params_2 + (ulong)testnum * 0x10 + 0xc));
      uVar109 = testnum;
      (&ffdh_results)[testnum] = (double)iVar77 / dVar126;
      if ((long)iVar77 < 2) {
LAB_0010cda4:
        uVar96 = (ulong)uVar109;
        uVar112 = 5;
        if (4 < uVar96) {
          uVar112 = uVar96;
        }
        __memset_chk((long)&local_224 + uVar96,0,5 - uVar96,uVar112 - uVar96);
      }
    }
    testnum = uVar109 + 1;
    uVar112 = (ulong)testnum;
  } while (testnum < 5);
  testnum = 0;
  if (kems_algs_len != 0) {
    uVar96 = 0;
    uVar112 = kems_algs_len;
    do {
      uVar109 = (uint)uVar96;
      if ((local_128[uVar96] != '\0') && (bVar62)) {
        pcVar82 = (char *)(&kems_algname)[uVar96];
        local_400 = __s;
        do {
          local_318 = (EVP_PKEY *)0x0;
          local_2c8 = (undefined1  [16])0x0;
          local_2b8 = (undefined1  [16])0x0;
          local_2a8 = 0;
          uStack_2a0 = 0;
          local_298 = 0;
          uStack_290 = 0;
          local_288 = 0;
          uStack_280 = 0;
          sVar97 = strlen(pcVar82);
          if (sVar97 < 0x68) {
            iVar77 = __isoc99_sscanf(pcVar82,"rsa%u%s",local_33c,local_198);
            if (iVar77 != 1) goto LAB_0010ce99;
            uVar112 = ERR_peek_error();
            if (uVar112 != 0) {
              BIO_printf(_bio_err,"WARNING: the error queue contains previous unhandled errors.\n");
              ERR_print_errors(_bio_err);
              testmoderesult = 1;
            }
            pcVar108 = "RSA";
            OSSL_PARAM_construct_uint(&local_378,&_LC292,local_33c);
            puVar101 = &local_378;
            puVar103 = (undefined4 *)local_2c8;
            for (lVar84 = 10; lVar84 != 0; lVar84 = lVar84 + -1) {
              *puVar103 = *(undefined4 *)puVar101;
              puVar101 = (undefined8 *)((long)puVar101 + (ulong)bVar123 * -8 + 4);
              puVar103 = puVar103 + (ulong)bVar123 * -2 + 1;
            }
            iVar77 = 1;
            uVar79 = app_get0_propq();
            bVar122 = true;
          }
          else {
LAB_0010ce99:
            if ((*pcVar82 == 'E') && (pcVar82[1] == 'C')) {
              uVar112 = ERR_peek_error();
              if (uVar112 != 0) {
                BIO_printf(_bio_err,"WARNING: the error queue contains previous unhandled errors.\n"
                          );
                ERR_print_errors(_bio_err);
                testmoderesult = 1;
              }
              bVar122 = true;
              OSSL_PARAM_construct_utf8_string(&local_378,"group",pcVar82 + 2,0);
              puVar101 = &local_378;
              puVar103 = (undefined4 *)local_2c8;
              for (lVar84 = 10; lVar84 != 0; lVar84 = lVar84 + -1) {
                *puVar103 = *(undefined4 *)puVar101;
                puVar101 = (undefined8 *)((long)puVar101 + (ulong)bVar123 * -8 + 4);
                puVar103 = puVar103 + (ulong)bVar123 * -2 + 1;
              }
              iVar77 = 2;
              uVar79 = app_get0_propq();
              pcVar108 = "EC";
            }
            else {
              iVar77 = strcmp(pcVar82,"X25519");
              if (iVar77 == 0) {
                uVar112 = ERR_peek_error();
                iVar77 = 3;
              }
              else {
                iVar77 = strcmp(pcVar82,"X448");
                if (iVar77 == 0) {
                  uVar112 = ERR_peek_error();
                  iVar77 = 4;
                }
                else {
                  uVar112 = ERR_peek_error();
                  iVar77 = 0;
                }
              }
              if (uVar112 != 0) {
                BIO_printf(_bio_err,"WARNING: the error queue contains previous unhandled errors.\n"
                          );
                ERR_print_errors(_bio_err);
                testmoderesult = 1;
              }
              uVar79 = app_get0_propq();
              bVar122 = false;
              pcVar108 = pcVar82;
            }
          }
          uVar81 = app_get0_libctx();
          pEVar80 = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_name(uVar81,pcVar108,uVar79);
          if (((pEVar80 == (EVP_PKEY_CTX *)0x0) ||
              (iVar75 = EVP_PKEY_keygen_init(pEVar80), iVar75 < 1)) ||
             ((bVar122 && (iVar75 = EVP_PKEY_CTX_set_params(pEVar80,local_2c8), iVar75 < 1)))) {
            BIO_printf(_bio_err,"Error initializing keygen ctx for %s.\n",pcVar82);
LAB_0010d196:
            ERR_print_errors(_bio_err);
            testmoderesult = 1;
            EVP_PKEY_free(local_318);
            uVar109 = testnum;
            goto LAB_0010d1bf;
          }
          iVar75 = EVP_PKEY_keygen(pEVar80,&local_318);
          if (iVar75 < 1) {
            BIO_printf(_bio_err,"Error while generating KEM EVP_PKEY.\n");
            goto LAB_0010d196;
          }
          uVar79 = app_get0_propq();
          pEVar89 = local_318;
          uVar81 = app_get0_libctx();
          lVar84 = EVP_PKEY_CTX_new_from_pkey(uVar81,pEVar89,uVar79);
          if ((lVar84 == 0) || (iVar75 = EVP_PKEY_encapsulate_init(lVar84,0), iVar75 < 1)) {
LAB_0010f12d:
            BIO_printf(_bio_err,"Error while initializing encaps data structs for %s.\n",pcVar82);
            goto LAB_0010d196;
          }
          if (iVar77 == 1) {
            iVar75 = EVP_PKEY_CTX_set_kem_op(lVar84,"RSASVE");
            if (iVar75 < 1) goto LAB_0010f12d;
            uVar109 = 0xffffffff;
          }
          else {
            uVar109 = iVar77 - 2;
            if (uVar109 < 3) {
              iVar75 = EVP_PKEY_CTX_set_kem_op(lVar84,"DHKEM");
              if (iVar75 < 1) goto LAB_0010f12d;
            }
            else {
              uVar109 = 0xfffffffe;
            }
          }
          iVar75 = EVP_PKEY_encapsulate(lVar84,0,&local_308,0,&local_310);
          if (iVar75 < 1) goto LAB_0010f12d;
          lVar91 = app_malloc(local_308,"encaps result");
          pvVar102 = (void *)app_malloc(local_310,"encaps secret");
          if ((lVar91 == 0) || (pvVar102 == (void *)0x0)) {
            BIO_printf(_bio_err,"MemAlloc error in encaps for %s.\n",pcVar82);
            goto LAB_0010d196;
          }
          iVar75 = EVP_PKEY_encapsulate(lVar84,lVar91,&local_308,pvVar102,&local_310);
          if (iVar75 < 1) {
            BIO_printf(_bio_err,"Encaps error for %s.\n",pcVar82);
            goto LAB_0010d196;
          }
          uVar79 = app_get0_propq();
          pEVar89 = local_318;
          uVar81 = app_get0_libctx();
          lVar92 = EVP_PKEY_CTX_new_from_pkey(uVar81,pEVar89,uVar79);
          if ((lVar92 == 0) || (iVar75 = EVP_PKEY_decapsulate_init(lVar92,0), iVar75 < 1)) {
LAB_0010f099:
            BIO_printf(_bio_err,"Error while initializing decaps data structs for %s.\n",pcVar82);
            goto LAB_0010d196;
          }
          if (iVar77 == 1) {
            iVar77 = EVP_PKEY_CTX_set_kem_op(lVar92,"RSASVE");
joined_r0x0010f093:
            if (iVar77 < 1) goto LAB_0010f099;
          }
          else if (uVar109 < 3) {
            iVar77 = EVP_PKEY_CTX_set_kem_op(lVar92,"DHKEM");
            goto joined_r0x0010f093;
          }
          iVar77 = EVP_PKEY_decapsulate(lVar92,0,&local_300,lVar91,local_308);
          if (iVar77 < 1) goto LAB_0010f099;
          pvVar93 = (void *)app_malloc(local_300,"KEM decaps secret");
          if (pvVar93 == (void *)0x0) {
            BIO_printf(_bio_err,"MemAlloc failure in decaps for %s.\n",pcVar82);
            goto LAB_0010d196;
          }
          iVar77 = EVP_PKEY_decapsulate(lVar92,pvVar93,&local_300,lVar91,local_308);
          pEVar63 = local_310;
          if (((iVar77 < 1) || (local_300 != local_310)) ||
             (iVar77 = memcmp(pvVar102,pvVar93,(size_t)local_310), uVar109 = testnum, iVar77 != 0))
          {
            BIO_printf(_bio_err,"Decaps error for %s.\n",pcVar82);
            goto LAB_0010d196;
          }
          *(EVP_PKEY_CTX **)((long)local_400 + (ulong)testnum * 8 + 0x4d0) = pEVar80;
          *(long *)((long)local_400 + (ulong)uVar109 * 8 + 0x848) = lVar84;
          *(long *)((long)local_400 + (ulong)uVar109 * 8 + 0xbc0) = lVar92;
          *(EVP_MD **)((long)local_400 + (ulong)uVar109 * 8 + 0x12b0) = pEVar63;
          *(EVP_MD **)((long)local_400 + (ulong)uVar109 * 8 + 0xf38) = local_308;
          *(long *)((long)local_400 + (ulong)uVar109 * 8 + 0x1628) = lVar91;
          *(void **)((long)local_400 + (ulong)uVar109 * 8 + 0x19a0) = pvVar102;
          *(void **)((long)local_400 + (ulong)uVar109 * 8 + 0x1d18) = pvVar93;
          EVP_PKEY_free(local_318);
          uVar112 = local_2d8;
          local_400 = (void *)((long)local_400 + 0x3560);
        } while (local_400 != pvVar114);
        kskey_print_message(pcVar82,"keygen",local_2d8 & 0xffffffff);
        app_tminterval(0,usertime);
        iVar77 = run_benchmark(local_3e8,KEM_keygen_loop,__s);
        dVar126 = (double)app_tminterval(1,usertime);
        alarm(0);
        pcVar108 = "%ld %s KEM keygen ops in %.2fs\n";
        if (mr != 0) {
          pcVar108 = "+R15:%ld:%s:%.2f\n";
        }
        BIO_printf(_bio_err,pcVar108,dVar126,(long)iVar77,pcVar82);
        (&kems_results)[(ulong)testnum * 3] = (double)iVar77 / dVar126;
        kskey_print_message(pcVar82,"encaps",uVar112 & 0xffffffff);
        app_tminterval(0,usertime);
        iVar77 = run_benchmark(local_3e8,KEM_encaps_loop,__s);
        dVar126 = (double)app_tminterval(1,usertime);
        alarm(0);
        pcVar108 = "%ld %s KEM encaps ops in %.2fs\n";
        if (mr != 0) {
          pcVar108 = "+R16:%ld:%s:%.2f\n";
        }
        BIO_printf(_bio_err,pcVar108,dVar126,(long)iVar77,pcVar82);
        (&DAT_00116aa8)[(ulong)testnum * 3] = (double)iVar77 / dVar126;
        kskey_print_message(pcVar82,"decaps",uVar112 & 0xffffffff);
        app_tminterval(0,usertime);
        iVar77 = run_benchmark(local_3e8,KEM_decaps_loop,__s);
        dVar126 = (double)app_tminterval(1,usertime);
        alarm(0);
        pcVar108 = "%ld %s KEM decaps ops in %.2fs\n";
        if (mr != 0) {
          pcVar108 = "+R17:%ld:%s:%.2f\n";
        }
        BIO_printf(_bio_err,pcVar108,dVar126,(long)iVar77,pcVar82);
        uVar109 = testnum;
        (&DAT_00116ab0)[(ulong)testnum * 3] = (double)iVar77 / dVar126;
        uVar112 = kems_algs_len;
        if ((long)iVar77 < 2) {
LAB_0010d1bf:
          uVar96 = (ulong)uVar109;
          uVar112 = 0x6f;
          if (0x6e < uVar96) {
            uVar112 = uVar96;
          }
          __memset_chk(local_128 + uVar96,0,0x6f - uVar96,uVar112 - uVar96);
          uVar112 = kems_algs_len;
        }
      }
      testnum = uVar109 + 1;
      uVar96 = (ulong)testnum;
    } while (uVar96 < uVar112);
  }
  testnum = 0;
  if (sigs_algs_len != 0) {
    uVar96 = 0;
    uVar112 = sigs_algs_len;
    do {
      uVar109 = (uint)uVar96;
      if ((local_b8[uVar96] != '\0') && (!(bool)(bVar61 ^ 1))) {
        pcVar82 = (char *)(&sigs_algname)[uVar96];
        local_3d8 = __s;
        do {
          local_318 = (EVP_PKEY *)0x0;
          local_310 = (EVP_MD *)0x0;
          local_2c8 = (undefined1  [16])0x0;
          local_2b8 = (undefined1  [16])0x0;
          local_2a8 = 0;
          uStack_2a0 = 0;
          local_298 = 0;
          uStack_290 = 0;
          local_288 = 0;
          uStack_280 = 0;
          local_1b8 = (undefined1  [16])0x0;
          local_1a8 = (undefined1  [16])0x0;
          uVar112 = ERR_peek_error();
          if (uVar112 != 0) {
            BIO_printf(_bio_err,"WARNING: the error queue contains previous unhandled errors.\n");
            ERR_print_errors(_bio_err);
            testmoderesult = 1;
          }
          sVar97 = strlen(pcVar82);
          if (0x67 < sVar97) {
LAB_0010d2ea:
            if (((*pcVar82 != 'd') || (pcVar82[1] != 's')) ||
               (iVar77 = (byte)pcVar82[2] - 0x61, iVar77 != 0)) {
              uVar79 = app_get0_propq();
              iVar77 = 0;
              pcVar108 = pcVar82;
              goto LAB_0010d301;
            }
LAB_0010f624:
            pEVar80 = EVP_PKEY_CTX_new_id(0x74,(ENGINE *)0x0);
            if ((pEVar80 != (EVP_PKEY_CTX *)0x0) &&
               (iVar75 = EVP_PKEY_paramgen_init(pEVar80), 0 < iVar75)) {
              uVar112 = strtol(pcVar82 + 3,(char **)0x0,10);
              iVar75 = EVP_PKEY_CTX_set_dsa_paramgen_bits(pEVar80,uVar112 & 0xffffffff);
              if ((iVar75 < 1) ||
                 (((iVar75 = EVP_PKEY_paramgen(pEVar80,(EVP_PKEY **)&local_310), iVar75 < 1 ||
                   (pEVar80 = EVP_PKEY_CTX_new((EVP_PKEY *)local_310,(ENGINE *)0x0),
                   pEVar80 == (EVP_PKEY_CTX *)0x0)) ||
                  (iVar75 = EVP_PKEY_keygen_init(pEVar80), iVar75 < 1)))) goto LAB_0010f69d;
              goto LAB_0010d320;
            }
LAB_0010f69d:
            BIO_printf(_bio_err,"Error initializing classic keygen ctx for %s.\n",pcVar82);
            goto LAB_0010f5a5;
          }
          iVar77 = __isoc99_sscanf(pcVar82,"rsa%u%s",local_33c,local_198);
          if (iVar77 != 1) goto LAB_0010d2ea;
          OSSL_PARAM_construct_uint(&local_378,&_LC292,local_33c);
          puVar101 = &local_378;
          puVar103 = (undefined4 *)local_2c8;
          for (lVar84 = 10; lVar84 != 0; lVar84 = lVar84 + -1) {
            *puVar103 = *(undefined4 *)puVar101;
            puVar101 = (undefined8 *)((long)puVar101 + (ulong)bVar123 * -8 + 4);
            puVar103 = puVar103 + (ulong)bVar123 * -2 + 1;
          }
          iVar75 = strncmp(pcVar82,"dsa",3);
          iVar77 = 1;
          if (iVar75 == 0) goto LAB_0010f624;
          uVar79 = app_get0_propq();
          pcVar108 = "RSA";
          iVar77 = 1;
LAB_0010d301:
          uVar81 = app_get0_libctx();
          pEVar80 = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_name(uVar81,pcVar108,uVar79);
          if (pEVar80 == (EVP_PKEY_CTX *)0x0) {
LAB_0010f589:
            BIO_printf(_bio_err,"Error initializing keygen ctx for %s.\n",pcVar82);
LAB_0010f5a5:
            ERR_print_errors(_bio_err);
            testmoderesult = 1;
            EVP_PKEY_free(local_318);
            uVar109 = testnum;
            goto LAB_0010f5ce;
          }
LAB_0010d320:
          iVar75 = EVP_PKEY_keygen_init(pEVar80);
          if ((iVar75 < 1) ||
             ((iVar77 != 0 && (iVar75 = EVP_PKEY_CTX_set_params(pEVar80,local_2c8), iVar75 < 1))))
          goto LAB_0010f589;
          iVar75 = EVP_PKEY_keygen(pEVar80,&local_318);
          if (iVar75 < 1) {
            BIO_printf(_bio_err,"Error while generating signature EVP_PKEY for %s.\n",pcVar82);
            goto LAB_0010f5a5;
          }
          uVar79 = app_get0_propq();
          pEVar89 = local_318;
          uVar81 = app_get0_libctx();
          pEVar90 = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(uVar81,pEVar89,uVar79);
          if (((pEVar90 == (EVP_PKEY_CTX *)0x0) ||
              (iVar75 = EVP_PKEY_sign_init(pEVar90), iVar75 < 1)) ||
             (((iVar77 == 1 && (iVar75 = EVP_PKEY_CTX_set_rsa_padding(pEVar90), iVar75 < 1)) ||
              (iVar75 = EVP_PKEY_sign(pEVar90,(uchar *)0x0,(size_t *)&local_308,local_1b8,0x20),
              iVar75 < 1)))) {
            BIO_printf(_bio_err,"Error while initializing signing data structs for %s.\n",pcVar82);
            goto LAB_0010f5a5;
          }
          local_300 = local_308;
          puVar88 = (uchar *)app_malloc(local_308,"signature buffer");
          if (puVar88 == (uchar *)0x0) {
            BIO_printf(_bio_err,"MemAlloc error in sign for %s.\n",pcVar82);
            goto LAB_0010f5a5;
          }
          iVar75 = EVP_PKEY_sign(pEVar90,puVar88,(size_t *)&local_300,local_1b8,0x20);
          if (iVar75 < 1) {
            BIO_printf(_bio_err,"Signing error for %s.\n",pcVar82);
            goto LAB_0010f5a5;
          }
          local_1b8 = (undefined1  [16])0x0;
          local_1a8 = (undefined1  [16])0x0;
          uVar79 = app_get0_propq();
          pEVar89 = local_318;
          uVar81 = app_get0_libctx();
          ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(uVar81,pEVar89,uVar79);
          if (((ctx == (EVP_PKEY_CTX *)0x0) || (iVar75 = EVP_PKEY_verify_init(ctx), iVar75 < 1)) ||
             ((iVar77 == 1 && (iVar77 = EVP_PKEY_CTX_set_rsa_padding(ctx,1), iVar77 < 1)))) {
            BIO_printf(_bio_err,"Error while initializing verify data structs for %s.\n",pcVar82);
            goto LAB_0010f5a5;
          }
          iVar77 = EVP_PKEY_verify(ctx,puVar88,(size_t)local_300,local_1b8,0x20);
          if (iVar77 < 1) {
            BIO_printf(_bio_err,"Verify error for %s.\n",pcVar82);
            goto LAB_0010f5a5;
          }
          iVar77 = EVP_PKEY_verify(ctx,puVar88,(size_t)local_300,local_1b8,0x20);
          uVar109 = testnum;
          if (iVar77 < 1) {
            BIO_printf(_bio_err,"Verify 2 error for %s.\n",pcVar82);
            goto LAB_0010f5a5;
          }
          pvVar102 = (void *)((long)local_3d8 + 0x3560);
          *(EVP_PKEY_CTX **)((long)local_3d8 + (ulong)testnum * 8 + 0x2090) = pEVar80;
          *(EVP_PKEY_CTX **)((long)local_3d8 + (ulong)uVar109 * 8 + 0x2408) = pEVar90;
          *(EVP_PKEY_CTX **)((long)local_3d8 + (ulong)uVar109 * 8 + 0x2780) = ctx;
          *(EVP_MD **)((long)local_3d8 + (ulong)uVar109 * 8 + 11000) = local_308;
          *(uchar **)((long)local_3d8 + (ulong)uVar109 * 8 + 0x31e8) = puVar88;
          *(EVP_MD **)((long)local_3d8 + (ulong)uVar109 * 8 + 0x2e70) = local_300;
          EVP_PKEY_free(local_318);
          local_3d8 = pvVar102;
        } while (pvVar102 != pvVar114);
        uVar76 = local_2d8._4_4_;
        kskey_print_message(pcVar82,"keygen",local_2d8._4_4_);
        app_tminterval(0,usertime);
        iVar77 = run_benchmark(local_3e8,SIG_keygen_loop,__s);
        dVar126 = (double)app_tminterval(1,usertime);
        alarm(0);
        pcVar108 = "%ld %s signature keygen ops in %.2fs\n";
        if (mr != 0) {
          pcVar108 = "+R18:%ld:%s:%.2f\n";
        }
        BIO_printf(_bio_err,pcVar108,dVar126,(long)iVar77,pcVar82);
        (&sigs_results)[(ulong)testnum * 3] = (double)iVar77 / dVar126;
        kskey_print_message(pcVar82,"signs",uVar76);
        app_tminterval(0,usertime);
        iVar77 = run_benchmark(local_3e8,SIG_sign_loop,__s);
        dVar126 = (double)app_tminterval(1,usertime);
        alarm(0);
        pcVar108 = "%ld %s signature sign ops in %.2fs\n";
        if (mr != 0) {
          pcVar108 = "+R19:%ld:%s:%.2f\n";
        }
        BIO_printf(_bio_err,pcVar108,dVar126,(long)iVar77,pcVar82);
        (&DAT_00115ca8)[(ulong)testnum * 3] = (double)iVar77 / dVar126;
        kskey_print_message(pcVar82,"verify",uVar76);
        app_tminterval(0,usertime);
        iVar77 = run_benchmark(local_3e8,SIG_verify_loop,__s);
        dVar126 = (double)app_tminterval(1,usertime);
        alarm(0);
        pcVar108 = "%ld %s signature verify ops in %.2fs\n";
        if (mr != 0) {
          pcVar108 = "+R20:%ld:%s:%.2f\n";
        }
        BIO_printf(_bio_err,pcVar108,dVar126,(long)iVar77,pcVar82);
        uVar109 = testnum;
        (&DAT_00115cb0)[(ulong)testnum * 3] = (double)iVar77 / dVar126;
        uVar112 = sigs_algs_len;
        if ((long)iVar77 < 2) {
LAB_0010f5ce:
          uVar96 = (ulong)uVar109;
          uVar112 = 0x6f;
          if (0x6e < uVar96) {
            uVar112 = uVar96;
          }
          __memset_chk(local_b8 + uVar96,0,0x6f - uVar96,uVar112 - uVar96);
          uVar112 = sigs_algs_len;
        }
      }
      testnum = uVar109 + 1;
      uVar96 = (ulong)testnum;
    } while (uVar96 < uVar112);
  }
  if (mr == 0) {
    uVar79 = OpenSSL_version(7);
    __printf_chk(2,"version: %s\n",uVar79);
    pcVar82 = (char *)OpenSSL_version(2);
    puts(pcVar82);
    pcVar82 = BN_options();
    __printf_chk(2,"options: %s\n",pcVar82);
    pcVar82 = (char *)OpenSSL_version(1);
    puts(pcVar82);
    pcVar82 = (char *)OpenSSL_version(9);
    puts(pcVar82);
    if (uVar71 == bVar121) goto LAB_0010d7fe;
    if (mr != 0) goto LAB_0010d783;
    puts("The \'numbers\' are in 1000s of bytes per second processed.");
    __printf_chk(2,"type        ");
  }
  else {
    if (uVar71 == bVar121) goto LAB_0010d7fe;
LAB_0010d783:
    __printf_chk(2,&_LC73);
  }
  uVar112 = 0;
  testnum = 0;
  if (uVar58 != 0) {
    do {
      pcVar82 = ":%d";
      if (mr == 0) {
        pcVar82 = "%7d bytes";
      }
      __printf_chk(2,pcVar82,*(undefined4 *)(lengths + uVar112 * 4));
      testnum = testnum + 1;
      uVar112 = (ulong)testnum;
    } while (testnum < uVar58);
  }
  putchar(10);
  goto LAB_0010d7fe;
LAB_0010db08:
  puVar117 = &DAT_0011af0c;
  pdVar116 = (double *)&ecdsa_results;
  uVar112 = 0;
  testnum = 1;
  puVar103 = &DAT_0011af0c;
  do {
    if (*(char *)((long)&local_218 + uVar112) != '\0') {
      if (testnum == 0) {
LAB_0010db8f:
        if (mr == 0) {
          __printf_chk(_LC330 / *pdVar116,_LC330 / pdVar116[1],2,
                       "%4u bits ecdsa (%s) %8.4fs %8.4fs %8.1f %8.1f\n",*puVar103,
                       *(undefined8 *)(puVar103 + -3));
          goto LAB_0010db58;
        }
      }
      else if (mr == 0) {
        __printf_chk(2,"%30ssign    verify    sign/s verify/s\n",&_LC328);
        testnum = 0;
        goto LAB_0010db8f;
      }
      __printf_chk(*pdVar116,pdVar116[1],2,"+F4:%u:%u:%f:%f\n",uVar112 & 0xffffffff,*puVar103);
    }
LAB_0010db58:
    uVar112 = uVar112 + 1;
    pdVar116 = pdVar116 + 2;
    puVar103 = puVar103 + 6;
  } while (uVar112 != 0x16);
  testnum = 1;
  uVar112 = 0;
  do {
    if (local_1f8[uVar112] != '\0') {
      if (testnum == 0) {
LAB_0010dc83:
        if (mr == 0) {
          __printf_chk(_LC330 / (double)(&ecdh_results)[uVar112],(&ecdh_results)[uVar112],2,
                       "%4u bits ecdh (%s) %8.4fs %8.1f\n",*puVar117,*(undefined8 *)(puVar117 + -3))
          ;
          goto LAB_0010dc52;
        }
      }
      else if (mr == 0) {
        __printf_chk(2,"%30sop      op/s\n",&_LC328);
        testnum = 0;
        goto LAB_0010dc83;
      }
      __printf_chk((&ecdh_results)[uVar112],_LC330 / (double)(&ecdh_results)[uVar112],2,
                   "+F5:%u:%u:%f:%f\n",uVar112 & 0xffffffff,*puVar117);
    }
LAB_0010dc52:
    uVar112 = uVar112 + 1;
    puVar117 = puVar117 + 6;
  } while (uVar112 != 0x18);
  testnum = 1;
  pdVar116 = (double *)&eddsa_results;
  ppuVar113 = &ed_curves_11;
  lVar91 = 0;
  cVar3 = (char)local_226;
  do {
    if (cVar3 != '\0') {
      if (testnum == 0) {
LAB_0010dda8:
        if (mr == 0) {
          __printf_chk(_LC330 / *pdVar116,_LC330 / pdVar116[1],2,
                       "%4u bits EdDSA (%s) %8.4fs %8.4fs %8.1f %8.1f\n",
                       *(undefined4 *)((long)ppuVar113 + 0xc),*ppuVar113);
          goto LAB_0010dd64;
        }
      }
      else if (mr == 0) {
        __printf_chk(2,"%30ssign    verify    sign/s verify/s\n",&_LC328);
        testnum = 0;
        goto LAB_0010dda8;
      }
      __printf_chk(*pdVar116,pdVar116[1],2,"+F6:%u:%u:%s:%f:%f\n",lVar91,
                   *(undefined4 *)((long)ppuVar113 + 0xc),*ppuVar113);
    }
LAB_0010dd64:
    pdVar116 = pdVar116 + 2;
    ppuVar113 = ppuVar113 + 3;
    if (lVar91 != 0) break;
    cVar3 = *(char *)((long)&local_226 + lVar84);
    lVar91 = lVar84;
  } while( true );
  testnum = 1;
  if (cVar118 != '\0') {
    if (mr == 0) {
      __printf_chk(2,"%30ssign    verify    sign/s verify/s\n",&_LC328);
      testnum = 0;
      if (mr == 0) {
        __printf_chk(_LC330 / sm2_results,_LC330 / DAT_001178a8,2,
                     "%4u bits SM2 (%s) %8.4fs %8.4fs %8.1f %8.1f\n",0x100,"CurveSM2");
        goto LAB_0010de54;
      }
    }
    __printf_chk(sm2_results,DAT_001178a8,2,"+F7:%u:%u:%s:%f:%f\n",0,0x100,"CurveSM2");
  }
LAB_0010de54:
  testnum = 1;
  puVar104 = ffdh_params_2;
  uVar112 = 0;
  do {
    if (*(char *)((long)&local_224 + uVar112) != '\0') {
      if (testnum == 0) {
LAB_0010e2b2:
        if (mr == 0) {
          __printf_chk(_LC330 / (double)(&ffdh_results)[uVar112],(&ffdh_results)[uVar112],2,
                       "%4u bits ffdh %8.4fs %8.1f\n",*(undefined4 *)(puVar104 + 0xc));
          goto LAB_0010dea7;
        }
      }
      else if (mr == 0) {
        __printf_chk(2,"%23sop     op/s\n",&_LC328);
        testnum = 0;
        goto LAB_0010e2b2;
      }
      __printf_chk((&ffdh_results)[uVar112],_LC330 / (double)(&ffdh_results)[uVar112],2,
                   "+F8:%u:%u:%f:%f\n",uVar112 & 0xffffffff,*(undefined4 *)(puVar104 + 0xc));
    }
LAB_0010dea7:
    uVar112 = uVar112 + 1;
    puVar104 = puVar104 + 0x10;
  } while (uVar112 != 5);
  testnum = 1;
  if (kems_algs_len != 0) {
    pdVar116 = (double *)&kems_results;
    uVar96 = 0;
    uVar112 = kems_algs_len;
    do {
      if ((local_128[uVar96] != '\0') && (bVar62)) {
        uVar79 = (&kems_algname)[uVar96];
        if (testnum == 0) {
LAB_0010e329:
          if (mr == 0) {
            __printf_chk(_LC330 / *pdVar116,_LC330 / pdVar116[1],_LC330 / pdVar116[2],2,
                         "%27s %8.6fs %8.6fs %8.6fs %9.1f %9.1f %9.1f\n",uVar79);
            uVar112 = kems_algs_len;
            goto LAB_0010dfce;
          }
        }
        else if (mr == 0) {
          __printf_chk(2,"%31skeygen    encaps    decaps keygens/s  encaps/s  decaps/s\n",&_LC328);
          testnum = 0;
          goto LAB_0010e329;
        }
        __printf_chk(*pdVar116,pdVar116[1],pdVar116[2],2,"+F9:%u:%f:%f:%f\n",uVar96 & 0xffffffff);
        uVar112 = kems_algs_len;
      }
LAB_0010dfce:
      uVar96 = uVar96 + 1;
      pdVar116 = pdVar116 + 3;
    } while (uVar96 < uVar112);
  }
  local_400 = (void *)local_330;
  testnum = 1;
  if (sigs_algs_len != 0) {
    pdVar116 = (double *)&sigs_results;
    uVar96 = 0;
    uVar112 = sigs_algs_len;
    do {
      if ((local_b8[uVar96] != '\0') && (bVar61)) {
        uVar79 = (&sigs_algname)[uVar96];
        if (testnum == 0) {
LAB_0010e0e3:
          if (mr == 0) {
            __printf_chk(_LC330 / *pdVar116,_LC330 / pdVar116[1],_LC330 / pdVar116[2],2,
                         "%27s %8.6fs %8.6fs %8.6fs %9.1f %9.1f %9.1f\n",uVar79);
            uVar112 = sigs_algs_len;
            goto LAB_0010e084;
          }
        }
        else if (mr == 0) {
          __printf_chk(2,"%31skeygen     signs    verify keygens/s    sign/s  verify/s\n",&_LC328);
          testnum = 0;
          goto LAB_0010e0e3;
        }
        __printf_chk(*pdVar116,pdVar116[1],pdVar116[2],2,"+F10:%u:%f:%f:%f\n",uVar96 & 0xffffffff);
        uVar112 = sigs_algs_len;
      }
LAB_0010e084:
      uVar96 = uVar96 + 1;
      pdVar116 = pdVar116 + 3;
    } while (uVar96 < uVar112);
  }
  goto LAB_00106386;
code_r0x001063fe:
  ERR_pop_to_mark();
  acStack_1c2[3] = '\x01';
  iVar70 = opt_next();
  goto joined_r0x00105d57;
LAB_0010aa4b:
  pcVar82 = "\nFailed to set the key\n";
LAB_0010a811:
  BIO_printf(_bio_err,pcVar82);
  ERR_print_errors(_bio_err);
  testmoderesult = 1;
                    /* WARNING: Subroutine does not return */
  exit(1);
LAB_00109c76:
  testmoderesult = 1;
LAB_00108547:
  testnum = 0;
  uVar109 = (uint)local_2f8;
  do {
    pcVar82 = "+DT:%s:%d:%d\n";
    if (mr == 0) {
      pcVar82 = "Doing %s ops for %ds on %d size blocks: ";
    }
    BIO_printf(_bio_err,pcVar82,PTR__LC53_0011b7b0);
    BIO_ctrl(_bio_err,0xb,0,(void *)0x0);
    run = 1;
    alarm(uVar109);
    app_tminterval(0,usertime);
    uVar74 = run_benchmark(local_3e8,SHA256_loop,__s);
    dVar126 = (double)app_tminterval(1,usertime);
    alarm(0);
    uVar78 = testnum;
    if (uVar74 == 0xffffffff) {
      BIO_printf(_bio_err,"%s error!\n",PTR__LC53_0011b7b0);
      ERR_print_errors(_bio_err);
      if (local_1d8[7] != '\0') goto LAB_001086d8;
      goto LAB_00108868;
    }
    pcVar82 = "%d %s ops in %.2fs\n";
    if (mr != 0) {
      pcVar82 = "+R:%d:%s:%f\n";
    }
    BIO_printf(_bio_err,pcVar82,dVar126,(ulong)uVar74,PTR__LC53_0011b7b0);
    (&DAT_00117d60)[(int)uVar78] =
         (double)*(int *)(lengths + (long)(int)uVar78 * 4) * ((double)(int)uVar74 / dVar126);
  } while ((-1 < (int)uVar74) && (testnum = testnum + 1, testnum < uVar58));
  if (local_1d8[7] != '\0') {
LAB_001086e9:
    testnum = 0;
    uVar109 = (uint)local_2f8;
LAB_0010878a:
    pcVar82 = "+DT:%s:%d:%d\n";
    if (mr == 0) {
      pcVar82 = "Doing %s ops for %ds on %d size blocks: ";
    }
    BIO_printf(_bio_err,pcVar82,PTR__LC54_0011b7b8);
    BIO_ctrl(_bio_err,0xb,0,(void *)0x0);
    run = 1;
    alarm(uVar109);
    app_tminterval(0,usertime);
    uVar74 = run_benchmark(local_3e8,SHA512_loop,__s);
    dVar126 = (double)app_tminterval(1,usertime);
    alarm(0);
    uVar78 = testnum;
    if (uVar74 != 0xffffffff) goto LAB_001086f8;
    BIO_printf(_bio_err,"%s error!\n",PTR__LC54_0011b7b8);
    ERR_print_errors(_bio_err);
LAB_00108868:
    if (local_1d8[8] != '\0') {
LAB_00108876:
      testmoderesult = 1;
      goto LAB_00109098;
    }
    goto LAB_0010921b;
  }
  if (local_1d8[8] != '\0') {
LAB_00109098:
    testnum = 0;
    uVar109 = (uint)local_2f8;
LAB_0010913b:
    pcVar82 = "+DT:%s:%d:%d\n";
    if (mr == 0) {
      pcVar82 = "Doing %s ops for %ds on %d size blocks: ";
    }
    BIO_printf(_bio_err,pcVar82,PTR__LC55_0011b7c0);
    BIO_ctrl(_bio_err,0xb,0,(void *)0x0);
    run = 1;
    alarm(uVar109);
    app_tminterval(0,usertime);
    uVar74 = run_benchmark(local_3e8,WHIRLPOOL_loop,__s);
    dVar126 = (double)app_tminterval(1,usertime);
    alarm(0);
    uVar78 = testnum;
    if (uVar74 != 0xffffffff) goto LAB_001090a7;
    BIO_printf(_bio_err,"%s error!\n",PTR__LC55_0011b7c0);
    ERR_print_errors(_bio_err);
LAB_0010921b:
    testmoderesult = 1;
    goto joined_r0x00109247;
  }
LAB_00108b5f:
  if ((local_1d8[5] != '\0') && (testnum = 0, uVar58 != 0)) {
LAB_00108b89:
    testnum = 0;
    uVar109 = (uint)local_2f8;
    while( true ) {
      pcVar82 = "+DT:%s:%d:%d\n";
      if (mr == 0) {
        pcVar82 = "Doing %s ops for %ds on %d size blocks: ";
      }
      BIO_printf(_bio_err,pcVar82,PTR_s_rmd160_0011b7a8);
      BIO_ctrl(_bio_err,0xb,0,(void *)0x0);
      run = 1;
      alarm(uVar109);
      app_tminterval(0,usertime);
      uVar74 = run_benchmark(local_3e8,EVP_Digest_RMD160_loop,__s);
      dVar126 = (double)app_tminterval(1,usertime);
      alarm(0);
      uVar78 = testnum;
      if (uVar74 == 0xffffffff) break;
      pcVar82 = "%d %s ops in %.2fs\n";
      if (mr != 0) {
        pcVar82 = "+R:%d:%s:%f\n";
      }
      BIO_printf(_bio_err,pcVar82,dVar126,(ulong)uVar74,PTR_s_rmd160_0011b7a8);
      (&DAT_00117d30)[(int)uVar78] =
           (double)*(int *)(lengths + (long)(int)uVar78 * 4) * ((double)(int)uVar74 / dVar126);
      if (((int)uVar74 < 0) || (testnum = testnum + 1, uVar58 <= testnum)) goto LAB_00108d0a;
    }
    BIO_printf(_bio_err,"%s error!\n",PTR_s_rmd160_0011b7a8);
    ERR_print_errors(_bio_err);
    testmoderesult = 1;
  }
LAB_00108d0a:
  if (cVar3 == '\0') {
LAB_00108d13:
    if (local_1d8[10] != '\0') {
      plVar98 = (long *)((long)__s + 0x4c0);
      plVar105 = plVar98 + (long)local_438 * 0x6ac;
      plVar99 = plVar98;
      do {
        lVar84 = init_evp_cipher_ctx("des-cbc",deskey_7,8);
        *plVar99 = lVar84;
        if (lVar84 == 0) {
          algindex = 10;
          testnum = 0;
          goto LAB_0010950f;
        }
        plVar99 = plVar99 + 0x6ac;
      } while (plVar99 != plVar105);
      algindex = 10;
      testnum = 0;
      uVar112 = 0;
      while (uVar79 = *(undefined8 *)((long)__s + 0x4c0), (uint)uVar112 < uVar58) {
        iVar77 = *(int *)(lengths + uVar112 * 4);
        lVar84 = EVP_CIPHER_CTX_get0_cipher();
        iVar75 = EVP_CIPHER_CTX_get_block_size(uVar79);
        if ((lVar84 == 0) || (iVar75 < 1)) {
          BIO_printf(_bio_err,"\nInvalid cipher!\n");
          break;
        }
        if (iVar77 % iVar75 != 0) {
          uVar79 = EVP_CIPHER_get0_name(lVar84);
          BIO_printf(_bio_err,"\nRequested encryption length not a multiple of block size for %s!\n"
                     ,uVar79);
          break;
        }
        pcVar82 = "+DT:%s:%d:%d\n";
        uVar109 = (uint)local_2f8;
        if (mr == 0) {
          pcVar82 = "Doing %s ops for %ds on %d size blocks: ";
        }
        BIO_printf(_bio_err,pcVar82,PTR__LC232_0011b7d0);
        BIO_ctrl(_bio_err,0xb,0,(void *)0x0);
        run = 1;
        alarm(uVar109);
        app_tminterval(0,usertime);
        uVar78 = run_benchmark(local_3e8,EVP_Cipher_loop,__s);
        dVar126 = (double)app_tminterval(1,usertime);
        alarm(0);
        uVar109 = testnum;
        if (uVar78 == 0xffffffff) {
          BIO_printf(_bio_err,"%s error!\n",PTR__LC232_0011b7d0);
          ERR_print_errors(_bio_err);
          testmoderesult = 1;
        }
        else {
          pcVar82 = "%d %s ops in %.2fs\n";
          if (mr != 0) {
            pcVar82 = "+R:%d:%s:%f\n";
          }
          BIO_printf(_bio_err,pcVar82,dVar126,(ulong)uVar78,PTR__LC232_0011b7d0);
          (&DAT_00117e20)[(int)uVar109] =
               (double)*(int *)(lengths + (long)(int)uVar109 * 4) * ((double)(int)uVar78 / dVar126);
        }
        testnum = testnum + 1;
        uVar112 = (ulong)testnum;
      }
LAB_0010950f:
      do {
        pEVar87 = (EVP_CIPHER_CTX *)*plVar98;
        plVar98 = plVar98 + 0x6ac;
        EVP_CIPHER_CTX_free(pEVar87);
      } while (plVar98 != plVar105);
    }
    local_3d0 = (long *)((long)__s + 0x4c0);
    if (local_1d8[0xb] != '\0') {
      plVar98 = local_3d0;
      do {
        lVar84 = init_evp_cipher_ctx("des-ede3-cbc",deskey_7,0x18);
        *plVar98 = lVar84;
        if (lVar84 == 0) {
          algindex = 0xb;
          testnum = 0;
          plVar98 = local_3d0;
          goto LAB_00108f53;
        }
        plVar98 = plVar98 + 0x6ac;
      } while (plVar98 != local_3d0 + (long)local_438 * 0x6ac);
      algindex = 0xb;
      testnum = 0;
      uVar112 = 0;
      while (uVar79 = *(undefined8 *)((long)__s + 0x4c0), plVar98 = local_3d0,
            (uint)uVar112 < uVar58) {
        iVar77 = *(int *)(lengths + uVar112 * 4);
        lVar84 = EVP_CIPHER_CTX_get0_cipher();
        iVar75 = EVP_CIPHER_CTX_get_block_size(uVar79);
        if ((lVar84 == 0) || (iVar75 < 1)) {
          BIO_printf(_bio_err,"\nInvalid cipher!\n");
          break;
        }
        if (iVar77 % iVar75 != 0) {
          uVar79 = EVP_CIPHER_get0_name(lVar84);
          BIO_printf(_bio_err,"\nRequested encryption length not a multiple of block size for %s!\n"
                     ,uVar79);
          break;
        }
        pcVar82 = "+DT:%s:%d:%d\n";
        uVar109 = (uint)local_2f8;
        if (mr == 0) {
          pcVar82 = "Doing %s ops for %ds on %d size blocks: ";
        }
        BIO_printf(_bio_err,pcVar82,PTR_s_des_ede3_0011b7d8);
        BIO_ctrl(_bio_err,0xb,0,(void *)0x0);
        run = 1;
        alarm(uVar109);
        app_tminterval(0,usertime);
        uVar78 = run_benchmark(local_3e8,EVP_Cipher_loop,__s);
        dVar126 = (double)app_tminterval(1,usertime);
        alarm(0);
        uVar109 = testnum;
        if (uVar78 == 0xffffffff) {
          BIO_printf(_bio_err,"%s error!\n",PTR_s_des_ede3_0011b7d8);
          ERR_print_errors(_bio_err);
          testmoderesult = 1;
        }
        else {
          pcVar82 = "%d %s ops in %.2fs\n";
          if (mr != 0) {
            pcVar82 = "+R:%d:%s:%f\n";
          }
          BIO_printf(_bio_err,pcVar82,dVar126,(ulong)uVar78,PTR_s_des_ede3_0011b7d8);
          (&DAT_00117e50)[(int)uVar109] =
               (double)*(int *)(lengths + (long)(int)uVar109 * 4) * ((double)(int)uVar78 / dVar126);
        }
        testnum = testnum + 1;
        uVar112 = (ulong)testnum;
      }
LAB_00108f53:
      do {
        plVar105 = plVar98 + 0x6ac;
        EVP_CIPHER_CTX_free((EVP_CIPHER_CTX *)*plVar98);
        plVar98 = plVar105;
      } while (plVar105 != local_3d0 + (long)local_438 * 0x6ac);
    }
    lVar84 = 0;
    plVar98 = local_3d0 + (long)local_438 * 0x6ac;
    do {
      algindex = (int)lVar84 + 0x13;
      if (*(char *)((long)&uStack_1c5 + lVar84) != '\0') {
        plVar105 = local_3d0;
        do {
          lVar91 = init_evp_cipher_ctx((&names)[algindex],key32_6,(int)lVar84 * 8 + 0x10);
          *plVar105 = lVar91;
          if (lVar91 == 0) {
            testnum = 0;
            plVar105 = local_3d0;
            goto LAB_0011039f;
          }
          plVar105 = plVar105 + 0x6ac;
        } while (plVar98 != plVar105);
        testnum = 0;
        uVar112 = 0;
        while (uVar79 = *(undefined8 *)((long)__s + 0x4c0), plVar105 = local_3d0,
              (uint)uVar112 < uVar58) {
          iVar77 = *(int *)(lengths + uVar112 * 4);
          lVar91 = EVP_CIPHER_CTX_get0_cipher();
          iVar75 = EVP_CIPHER_CTX_get_block_size(uVar79);
          if ((lVar91 == 0) || (iVar75 < 1)) {
            BIO_printf(_bio_err,"\nInvalid cipher!\n");
            break;
          }
          if (iVar77 % iVar75 != 0) {
            uVar79 = EVP_CIPHER_get0_name(lVar91);
            BIO_printf(_bio_err,
                       "\nRequested encryption length not a multiple of block size for %s!\n",uVar79
                      );
            break;
          }
          pcVar82 = "+DT:%s:%d:%d\n";
          uVar109 = (uint)local_2f8;
          if (mr == 0) {
            pcVar82 = "Doing %s ops for %ds on %d size blocks: ";
          }
          BIO_printf(_bio_err,pcVar82,(&names)[algindex]);
          BIO_ctrl(_bio_err,0xb,0,(void *)0x0);
          run = 1;
          alarm(uVar109);
          app_tminterval(0,usertime);
          uVar76 = run_benchmark(local_3e8,EVP_Cipher_loop,__s);
          uVar79 = app_tminterval(1,usertime);
          alarm(0);
          print_result(uVar79,algindex,testnum,uVar76);
          testnum = testnum + 1;
          uVar112 = (ulong)testnum;
        }
LAB_0011039f:
        do {
          plVar99 = plVar105 + 0x6ac;
          EVP_CIPHER_CTX_free((EVP_CIPHER_CTX *)*plVar105);
          plVar105 = plVar99;
        } while (plVar99 != plVar98);
      }
      lVar84 = lVar84 + 1;
    } while (lVar84 != 3);
    lVar84 = 0;
    do {
      algindex = (int)lVar84 + 0x16;
      if (acStack_1c2[lVar84] != '\0') {
        plVar105 = local_3d0;
        do {
          lVar91 = init_evp_cipher_ctx((&names)[algindex],key32_6,(int)lVar84 * 8 + 0x10);
          *plVar105 = lVar91;
          if (lVar91 == 0) {
            testnum = 0;
            plVar105 = local_3d0;
            goto LAB_0010a1bc;
          }
          plVar105 = plVar105 + 0x6ac;
        } while (plVar105 != plVar98);
        testnum = 0;
        uVar112 = 0;
        while (uVar79 = *(undefined8 *)((long)__s + 0x4c0), plVar105 = local_3d0,
              (uint)uVar112 < uVar58) {
          iVar77 = *(int *)(lengths + uVar112 * 4);
          lVar91 = EVP_CIPHER_CTX_get0_cipher();
          iVar75 = EVP_CIPHER_CTX_get_block_size(uVar79);
          if ((lVar91 == 0) || (iVar75 < 1)) {
            BIO_printf(_bio_err,"\nInvalid cipher!\n");
            break;
          }
          if (iVar77 % iVar75 != 0) {
            uVar79 = EVP_CIPHER_get0_name(lVar91);
            BIO_printf(_bio_err,
                       "\nRequested encryption length not a multiple of block size for %s!\n",uVar79
                      );
            break;
          }
          pcVar82 = "+DT:%s:%d:%d\n";
          uVar109 = (uint)local_2f8;
          if (mr == 0) {
            pcVar82 = "Doing %s ops for %ds on %d size blocks: ";
          }
          BIO_printf(_bio_err,pcVar82,(&names)[algindex]);
          BIO_ctrl(_bio_err,0xb,0,(void *)0x0);
          run = 1;
          alarm(uVar109);
          app_tminterval(0,usertime);
          uVar76 = run_benchmark(local_3e8,EVP_Cipher_loop,__s);
          uVar79 = app_tminterval(1,usertime);
          alarm(0);
          print_result(uVar79,algindex,testnum,uVar76);
          testnum = testnum + 1;
          uVar112 = (ulong)testnum;
        }
LAB_0010a1bc:
        do {
          plVar99 = plVar105 + 0x6ac;
          EVP_CIPHER_CTX_free((EVP_CIPHER_CTX *)*plVar105);
          plVar105 = plVar99;
        } while (plVar98 != plVar99);
      }
      lVar84 = lVar84 + 1;
    } while (lVar84 != 3);
    algindex = 0xc;
    do {
      lVar84 = (long)algindex;
      plVar105 = local_3d0;
      if (local_1d8[lVar84] != '\0') {
        while( true ) {
          lVar84 = init_evp_cipher_ctx((&names)[lVar84],key32_6,0x10);
          *plVar105 = lVar84;
          if (lVar84 == 0) break;
          if (plVar105 + 0x6ac == plVar98) {
            testnum = 0;
            uVar112 = 0;
            goto LAB_0010a2db;
          }
          lVar84 = (long)algindex;
          plVar105 = plVar105 + 0x6ac;
        }
        testnum = 0;
        plVar105 = local_3d0;
LAB_0010a355:
        do {
          plVar99 = plVar105 + 0x6ac;
          EVP_CIPHER_CTX_free((EVP_CIPHER_CTX *)*plVar105);
          plVar105 = plVar99;
        } while (plVar99 != plVar98);
      }
      algindex = algindex + 1;
    } while (algindex < 0x13);
    if (cVar65 != '\0') {
      OSSL_PARAM_construct_utf8_string(&local_378,"cipher","aes-128-gcm",0);
      local_2c8._8_8_ = uStack_370;
      local_2c8._0_8_ = local_378;
      local_2b8._8_8_ = uStack_360;
      local_2b8._0_8_ = local_368;
      local_2a8 = local_358;
      OSSL_PARAM_construct_octet_string(&local_378,&_LC238,gmac_iv_5,0xc);
      uStack_2a0 = local_378;
      local_298 = uStack_370;
      uStack_290 = local_368;
      local_288 = uStack_360;
      uStack_280 = local_358;
      OSSL_PARAM_construct_octet_string(&local_378,&_LC231,key32_6,0x10);
      local_258 = local_358;
      OSSL_PARAM_construct_end(&local_378);
      local_230 = local_358;
      uVar79 = app_get0_propq();
      uVar81 = app_get0_libctx();
      local_400 = (void *)EVP_MAC_fetch(uVar81,&_LC225,uVar79);
      local_330 = (long)local_400;
      if (local_400 == (void *)0x0) goto LAB_001096d4;
      plVar105 = (long *)((long)__s + 0x4c8);
      plVar99 = plVar105 + (long)local_438 * 0x6ac;
      plVar119 = plVar105;
      do {
        lVar84 = EVP_MAC_CTX_new(local_400);
        *plVar119 = lVar84;
        if ((lVar84 == 0) || (iVar77 = EVP_MAC_CTX_set_params(lVar84,local_2c8), iVar77 == 0))
        goto LAB_001096d4;
        plVar119 = plVar119 + 0x6ac;
        plVar120 = plVar105;
      } while (plVar119 != plVar99);
      do {
        iVar77 = EVP_MAC_init(*plVar120,0,0,0);
        if (iVar77 == 0) goto LAB_001096d4;
        plVar120 = plVar120 + 0x6ac;
      } while (plVar120 != plVar99);
      testnum = 0;
      if (uVar58 != 0) {
        uVar109 = (uint)local_2f8;
        while( true ) {
          pcVar82 = "+DT:%s:%d:%d\n";
          if (mr == 0) {
            pcVar82 = "Doing %s ops for %ds on %d size blocks: ";
          }
          BIO_printf(_bio_err,pcVar82,PTR_s_ghash_0011b850);
          BIO_ctrl(_bio_err,0xb,0,(void *)0x0);
          run = 1;
          alarm(uVar109);
          app_tminterval(0,usertime);
          iVar77 = run_benchmark(local_3e8,GHASH_loop,__s);
          dVar126 = (double)app_tminterval(1,usertime);
          alarm(0);
          uVar78 = testnum;
          if (iVar77 == -1) break;
          pcVar82 = "%d %s ops in %.2fs\n";
          if (mr != 0) {
            pcVar82 = "+R:%d:%s:%f\n";
          }
          BIO_printf(_bio_err,pcVar82,dVar126,iVar77,PTR_s_ghash_0011b850);
          (&DAT_00118120)[(int)uVar78] =
               (double)*(int *)(lengths + (long)(int)uVar78 * 4) * ((double)iVar77 / dVar126);
          if ((iVar77 < 0) || (testnum = testnum + 1, uVar58 <= testnum)) goto LAB_001109e5;
        }
        BIO_printf(_bio_err,"%s error!\n",PTR_s_ghash_0011b850);
        ERR_print_errors(_bio_err);
        testmoderesult = 1;
      }
LAB_001109e5:
      do {
        lVar84 = *plVar105;
        plVar105 = plVar105 + 0x6ac;
        EVP_MAC_CTX_free(lVar84);
      } while (plVar105 != plVar99);
      EVP_MAC_free(local_400);
      local_330 = 0;
    }
    if ((cVar66 != '\0') && (testnum = 0, uVar58 != 0)) {
      uVar109 = (uint)local_2f8;
      do {
        pcVar82 = "+DT:%s:%d:%d\n";
        if (mr == 0) {
          pcVar82 = "Doing %s ops for %ds on %d size blocks: ";
        }
        BIO_printf(_bio_err,pcVar82,PTR_DAT_0011b858);
        BIO_ctrl(_bio_err,0xb,0,(void *)0x0);
        run = 1;
        alarm(uVar109);
        app_tminterval(0,usertime);
        uVar74 = run_benchmark(local_3e8,RAND_bytes_loop,__s);
        dVar126 = (double)app_tminterval(1,usertime);
        alarm(0);
        uVar78 = testnum;
        if (uVar74 == 0xffffffff) {
          BIO_printf(_bio_err,"%s error!\n",PTR_DAT_0011b858);
          ERR_print_errors(_bio_err);
          testmoderesult = 1;
        }
        else {
          pcVar82 = "%d %s ops in %.2fs\n";
          if (mr != 0) {
            pcVar82 = "+R:%d:%s:%f\n";
          }
          BIO_printf(_bio_err,pcVar82,dVar126,(ulong)uVar74,PTR_DAT_0011b858);
          (&DAT_00118150)[(int)uVar78] =
               (double)*(int *)(lengths + (long)(int)uVar78 * 4) * ((double)(int)uVar74 / dVar126);
        }
        testnum = testnum + 1;
      } while (testnum < uVar58);
    }
    uVar112 = local_2f8;
    if (cVar64 != '\0') {
      if (local_338 == (EVP_CIPHER *)0x0) {
        if (evp_md_name != (undefined *)0x0) {
          PTR__LC71_0011b848 = evp_md_name;
          testnum = 0;
          if (uVar58 != 0) {
            uVar109 = (uint)local_2f8;
            uVar96 = 0;
            puVar94 = lengths;
            do {
              pcVar82 = "+DT:%s:%d:%d\n";
              if (mr == 0) {
                pcVar82 = "Doing %s ops for %ds on %d size blocks: ";
              }
              BIO_printf(_bio_err,pcVar82,PTR__LC71_0011b848,uVar112 & 0xffffffff,
                         (ulong)*(uint *)(puVar94 + uVar96 * 4));
              BIO_ctrl(_bio_err,0xb,0,(void *)0x0);
              run = 1;
              alarm(uVar109);
              app_tminterval(0,usertime);
              uVar78 = run_benchmark(local_3e8,EVP_Digest_md_loop,__s);
              dVar126 = (double)app_tminterval(1,usertime);
              alarm(0);
              lVar84 = (long)(int)testnum;
              if (uVar78 == 0xffffffff) {
                BIO_printf(_bio_err,"%s error!\n",PTR__LC71_0011b848);
                ERR_print_errors(_bio_err);
                testmoderesult = 1;
                break;
              }
              pcVar82 = "%d %s ops in %.2fs\n";
              if (mr != 0) {
                pcVar82 = "+R:%d:%s:%f\n";
              }
              BIO_printf(_bio_err,pcVar82,dVar126,(ulong)uVar78,PTR__LC71_0011b848);
              puVar94 = lengths;
              (&DAT_001180f0)[lVar84] =
                   (double)*(int *)(lengths + lVar84 * 4) * ((double)(int)uVar78 / dVar126);
              if ((int)uVar78 < 0) break;
              testnum = testnum + 1;
              uVar96 = (ulong)testnum;
            } while (testnum < uVar58);
          }
        }
      }
      else {
        local_300 = (EVP_MD *)((ulong)local_300 & 0xffffffff00000000);
        if ((bVar122) && (uVar112 = EVP_CIPHER_get_flags(), (uVar112 & 0x400000) != 0)) {
          multiblock_speed(local_338,local_340,&local_2f8);
          local_400 = (void *)local_330;
LAB_00106386:
          local_380 = testmode;
          if (testmode == 0) {
            local_418 = 0;
            local_420 = (long *)0x0;
          }
          else {
            local_418 = 0;
            local_380 = testmoderesult;
            local_420 = (long *)0x0;
          }
          goto LAB_00105e75;
        }
        PTR__LC71_0011b848 = (undefined *)EVP_CIPHER_get0_name(local_338);
        mode_op = EVP_CIPHER_get_mode(local_338);
        if ((aead == 0) || ((undefined4 *)lengths != &lengths_list)) {
          if (mode_op - 6U < 2) {
LAB_0010a45d:
            pcVar86 = EVP_Update_loop_aead_enc;
            bVar122 = true;
            if (decrypt != 0) {
              pcVar86 = EVP_Update_loop_aead_dec;
            }
          }
          else {
            bVar122 = false;
            pcVar86 = EVP_Update_loop;
            if (mode_op - 0x10003U < 3) goto LAB_0010a45d;
          }
          testnum = 0;
          if (uVar58 == 0) goto LAB_0010a9b8;
        }
        else {
          lengths = (undefined *)&aead_lengths_list;
          if ((mode_op - 0x10003U < 3) || (mode_op - 6U < 2)) {
            bVar122 = true;
            if (decrypt == 0) {
              uVar58 = 6;
              pcVar86 = EVP_Update_loop_aead_enc;
            }
            else {
              uVar58 = 6;
              pcVar86 = EVP_Update_loop_aead_dec;
            }
          }
          else {
            bVar122 = false;
            uVar58 = 6;
            pcVar86 = EVP_Update_loop;
          }
        }
        testnum = 0;
        uVar109 = (uint)local_2f8;
        do {
          pcVar82 = "+DT:%s:%d:%d\n";
          if (mr == 0) {
            pcVar82 = "Doing %s ops for %ds on %d size blocks: ";
          }
          BIO_printf(_bio_err,pcVar82,PTR__LC71_0011b848);
          BIO_ctrl(_bio_err,0xb,0,(void *)0x0);
          run = 1;
          alarm(uVar109);
          pvVar114 = (void *)((long)__s + 0x38);
          plVar105 = local_3d0;
          if (bVar122) {
            do {
              pEVar87 = EVP_CIPHER_CTX_new();
              *(EVP_CIPHER_CTX **)((long)pvVar114 + 0x488) = pEVar87;
              if (pEVar87 == (EVP_CIPHER_CTX *)0x0) {
LAB_0010ab30:
                BIO_printf(_bio_err,"\nEVP_CIPHER_CTX_new failure\n");
                    /* WARNING: Subroutine does not return */
                exit(1);
              }
              iVar77 = EVP_CipherInit_ex(pEVar87,local_338,(ENGINE *)0x0,(uchar *)0x0,(uchar *)0x0,1
                                        );
              if (iVar77 == 0) goto LAB_0010abe8;
              EVP_CIPHER_CTX_set_padding(*(EVP_CIPHER_CTX **)((long)pvVar114 + 0x488),0);
              iVar77 = EVP_CIPHER_CTX_get_key_length(*(undefined8 *)((long)pvVar114 + 0x488));
              lVar84 = (long)iVar77;
              puVar88 = (uchar *)app_malloc(lVar84,"evp_cipher key");
              *(uchar **)((long)pvVar114 + -8) = puVar88;
              EVP_CIPHER_CTX_rand_key(*(EVP_CIPHER_CTX **)((long)pvVar114 + 0x488),puVar88);
              if (mode_op - 0x10004U < 2) {
                EVP_CIPHER_CTX_ctrl(*(EVP_CIPHER_CTX **)((long)pvVar114 + 0x488),0x27,1,(void *)0x0)
                ;
                if (decrypt != 0) {
                  if (mode_op != 0x10004) goto LAB_0010a7ac;
LAB_0010a651:
                  pEVar87 = *(EVP_CIPHER_CTX **)((long)pvVar114 + 0x488);
LAB_0010a658:
                  iVar77 = EVP_CipherInit_ex(pEVar87,(EVP_CIPHER *)0x0,(ENGINE *)0x0,
                                             *(uchar **)((long)pvVar114 + -8),aead_iv,-1);
                  if (iVar77 == 0) goto LAB_0010aa4b;
                  pEVar87 = *(EVP_CIPHER_CTX **)((long)pvVar114 + 0x488);
                  if (mode_op == 7) {
                    iVar77 = EVP_EncryptUpdate(pEVar87,(uchar *)0x0,(int *)&local_300,(uchar *)0x0,
                                               *(int *)(lengths + (ulong)testnum * 4));
                    if (iVar77 == 0) {
                      pcVar82 = "\nCouldn\'t set input text length\n";
                      goto LAB_0010a811;
                    }
                    pEVar87 = *(EVP_CIPHER_CTX **)((long)pvVar114 + 0x488);
                  }
                  if (aead != 0) {
                    iVar77 = EVP_EncryptUpdate(pEVar87,(uchar *)0x0,(int *)&local_300,aad,0xd);
                    if (iVar77 == 0) {
                      pcVar82 = "\nCouldn\'t insert AAD when encrypting\n";
                      goto LAB_0010a811;
                    }
                    pEVar87 = *(EVP_CIPHER_CTX **)((long)pvVar114 + 0x488);
                  }
                  iVar77 = EVP_EncryptUpdate(pEVar87,*(uchar **)((long)pvVar114 + -0x28),
                                             (int *)&local_300,*(uchar **)((long)pvVar114 + -0x28),
                                             *(int *)(lengths + (ulong)testnum * 4));
                  if (iVar77 == 0) {
                    pcVar82 = "\nFailed to to encrypt the data\n";
                    goto LAB_0010a811;
                  }
                  iVar77 = EVP_EncryptFinal_ex(*(EVP_CIPHER_CTX **)((long)pvVar114 + 0x488),
                                               *(uchar **)((long)pvVar114 + -0x28),(int *)&local_300
                                              );
                  if (iVar77 == 0) {
                    pcVar82 = "\nFailed finalize the encryption\n";
                    goto LAB_0010a811;
                  }
                  iVar77 = EVP_CIPHER_CTX_ctrl(*(EVP_CIPHER_CTX **)((long)pvVar114 + 0x488),0x10,
                                               0x10,pvVar114);
                  if (iVar77 == 0) {
                    pcVar82 = "\nFailed to get the tag\n";
                    goto LAB_0010a811;
                  }
                  EVP_CIPHER_CTX_free(*(EVP_CIPHER_CTX **)((long)pvVar114 + 0x488));
                  pEVar87 = EVP_CIPHER_CTX_new();
                  *(EVP_CIPHER_CTX **)((long)pvVar114 + 0x488) = pEVar87;
                  if (pEVar87 == (EVP_CIPHER_CTX *)0x0) goto LAB_0010ab30;
                  iVar77 = EVP_CipherInit_ex(pEVar87,local_338,(ENGINE *)0x0,(uchar *)0x0,
                                             (uchar *)0x0,0);
                  if (iVar77 == 0) {
                    pcVar82 = "\nFailed initializing the context\n";
                    goto LAB_0010a811;
                  }
                  EVP_CIPHER_CTX_set_padding(*(EVP_CIPHER_CTX **)((long)pvVar114 + 0x488),0);
                  if (mode_op - 0x10004U < 2) {
                    EVP_CIPHER_CTX_ctrl(*(EVP_CIPHER_CTX **)((long)pvVar114 + 0x488),0x27,1,
                                        (void *)0x0);
                  }
                }
              }
              else if (decrypt != 0) {
LAB_0010a7ac:
                iVar77 = EVP_CIPHER_CTX_ctrl(*(EVP_CIPHER_CTX **)((long)pvVar114 + 0x488),9,0xc,
                                             (void *)0x0);
                if (iVar77 == 0) {
                  pcVar82 = "\nFailed to set iv length\n";
                }
                else {
                  pEVar87 = *(EVP_CIPHER_CTX **)((long)pvVar114 + 0x488);
                  if ((mode_op - 0x10004U < 2) || (mode_op == 6)) goto LAB_0010a658;
                  iVar77 = EVP_CIPHER_CTX_ctrl(pEVar87,0x11,0x10,(void *)0x0);
                  if (iVar77 != 0) goto LAB_0010a651;
                  pcVar82 = "\nFailed to set tag length\n";
                }
                goto LAB_0010a811;
              }
              pvVar114 = (void *)((long)pvVar114 + 0x3560);
            } while ((void *)((long)__s + 0x38 + (long)local_438 * 0x3560) != pvVar114);
          }
          else {
            do {
              pEVar87 = EVP_CIPHER_CTX_new();
              *plVar105 = (long)pEVar87;
              if (pEVar87 == (EVP_CIPHER_CTX *)0x0) goto LAB_0010ab30;
              iVar77 = EVP_CipherInit_ex(pEVar87,local_338,(ENGINE *)0x0,(uchar *)0x0,(uchar *)0x0,
                                         (uint)(decrypt == 0));
              if (iVar77 == 0) goto LAB_0010abe8;
              EVP_CIPHER_CTX_set_padding((EVP_CIPHER_CTX *)*plVar105,0);
              iVar77 = EVP_CIPHER_CTX_get_key_length(*plVar105);
              lVar84 = (long)iVar77;
              puVar88 = (uchar *)app_malloc(lVar84,"evp_cipher key");
              plVar105[-0x92] = (long)puVar88;
              EVP_CIPHER_CTX_rand_key((EVP_CIPHER_CTX *)*plVar105,puVar88);
              iVar77 = EVP_CipherInit_ex((EVP_CIPHER_CTX *)*plVar105,(EVP_CIPHER *)0x0,(ENGINE *)0x0
                                         ,(uchar *)plVar105[-0x92],iv,-1);
              if (iVar77 == 0) goto LAB_0010aa4b;
              plVar105 = plVar105 + 0x6ac;
            } while (plVar105 != plVar98);
          }
          app_tminterval(0,usertime);
          uVar78 = run_benchmark(local_3e8,pcVar86,__s);
          dVar126 = (double)app_tminterval(1,usertime);
          alarm(0);
          puVar101 = (undefined8 *)((long)__s + 0x30);
          do {
            puVar100 = puVar101 + 0x6ac;
            CRYPTO_clear_free(*puVar101,lVar84,"apps/speed.c",0xc2c);
            EVP_CIPHER_CTX_free((EVP_CIPHER_CTX *)puVar101[0x92]);
            puVar101 = puVar100;
          } while (puVar100 != (undefined8 *)((long)__s + 0x30) + (long)local_438 * 0x6ac);
          lVar84 = (long)(int)testnum;
          if (uVar78 == 0xffffffff) {
            BIO_printf(_bio_err,"%s error!\n");
            ERR_print_errors(_bio_err);
            testmoderesult = 1;
          }
          else {
            pcVar82 = "%d %s ops in %.2fs\n";
            if (mr != 0) {
              pcVar82 = "+R:%d:%s:%f\n";
            }
            BIO_printf(_bio_err,pcVar82,dVar126,(ulong)uVar78,PTR__LC71_0011b848);
            (&DAT_001180f0)[lVar84] =
                 (double)*(int *)(lengths + lVar84 * 4) * ((double)(int)uVar78 / dVar126);
          }
          testnum = testnum + 1;
        } while (testnum < uVar58);
      }
    }
LAB_0010a9b8:
    if (cVar67 == '\0') {
LAB_0010a9c6:
      if (cVar68 == '\0') {
LAB_0010a9d4:
        if (cVar69 == '\0') {
LAB_0010a9e2:
          puVar101 = (undefined8 *)((long)__s + 0x10);
          puVar100 = puVar101 + (long)local_438 * 0x6ac;
          do {
            iVar77 = RAND_bytes((uchar *)*puVar101,0x24);
            if (iVar77 < 1) {
              local_400 = (void *)local_330;
              ERR_print_errors(_bio_err);
              local_420 = (long *)0x0;
              local_418 = 0;
              local_380 = 1;
              goto LAB_00105e91;
            }
            puVar101 = puVar101 + 0x6ac;
          } while (puVar101 != puVar100);
          psVar1 = (size_t *)((long)__s + 0x50);
          psVar2 = psVar1 + (long)local_438 * 0x6ac;
          testnum = 0;
          pvVar114 = (void *)((long)__s + (long)local_438 * 0x3560);
          do {
            local_308 = (EVP_MD *)0x0;
            uVar112 = (ulong)testnum;
            if (*(char *)((long)&local_21f + uVar112) != '\0') {
              if (iVar72 < 3) {
                local_300 = (EVP_MD *)(&rsa_keys_4)[uVar112 * 2];
                local_308 = (EVP_MD *)
                            d2i_PrivateKey(6,(EVP_PKEY **)0x0,(uchar **)&local_300,
                                           (ulong)(uint)(&DAT_0011ae68)[uVar112 * 4]);
                bVar122 = local_308 != (EVP_MD *)0x0;
LAB_0010b0cd:
                psVar115 = psVar1;
                if (!bVar122) goto LAB_0010acbc;
                do {
                  uVar109 = testnum;
                  pEVar80 = EVP_PKEY_CTX_new((EVP_PKEY *)local_308,(ENGINE *)0x0);
                  psVar115[(ulong)uVar109 + 2] = (size_t)pEVar80;
                  *psVar115 = psVar115[-1];
                  if ((((EVP_PKEY_CTX *)psVar115[(ulong)testnum + 2] == (EVP_PKEY_CTX *)0x0) ||
                      (iVar77 = EVP_PKEY_sign_init((EVP_PKEY_CTX *)psVar115[(ulong)testnum + 2]),
                      iVar77 < 1)) ||
                     (iVar77 = EVP_PKEY_sign((EVP_PKEY_CTX *)psVar115[(ulong)testnum + 2],
                                             (uchar *)psVar115[-7],psVar115,(uchar *)psVar115[-8],
                                             0x24), iVar77 < 1)) goto LAB_0010acbc;
                  psVar115 = psVar115 + 0x6ac;
                } while (psVar2 != psVar115);
                pcVar82 = "Doing %u bits %s %s ops for %ds: ";
                uVar109 = local_2f8._4_4_;
                if (mr != 0) {
                  pcVar82 = "+DTP:%d:%s:%s:%d\n";
                }
                BIO_printf(_bio_err,pcVar82,(ulong)*(uint *)(&DAT_0011ae6c + (ulong)testnum * 0x10))
                ;
                BIO_ctrl(_bio_err,0xb,0,(void *)0x0);
                run = 1;
                alarm(uVar109);
                app_tminterval(0,usertime);
                iVar77 = run_benchmark(local_3e8,RSA_sign_loop,__s);
                dVar126 = (double)app_tminterval(1,usertime);
                alarm(0);
                pcVar82 = "%ld %u bits private RSA sign ops in %.2fs\n";
                if (mr != 0) {
                  pcVar82 = "+R1:%ld:%d:%.2f\n";
                }
                BIO_printf(_bio_err,pcVar82,dVar126,(long)iVar77,
                           (ulong)*(uint *)(&DAT_0011ae6c + (ulong)testnum * 0x10));
                uVar112 = (ulong)testnum;
                (&rsa_results)[uVar112 * 4] = (double)iVar77 / dVar126;
                pvVar102 = __s;
                while( true ) {
                  pEVar80 = EVP_PKEY_CTX_new((EVP_PKEY *)local_308,(ENGINE *)0x0);
                  *(EVP_PKEY_CTX **)((long)pvVar102 + uVar112 * 8 + 0x98) = pEVar80;
                  pEVar80 = *(EVP_PKEY_CTX **)((long)pvVar102 + (ulong)testnum * 8 + 0x98);
                  if (((pEVar80 == (EVP_PKEY_CTX *)0x0) ||
                      (iVar77 = EVP_PKEY_verify_init(pEVar80), iVar77 < 1)) ||
                     (iVar77 = EVP_PKEY_verify(*(EVP_PKEY_CTX **)
                                                ((long)pvVar102 + (ulong)testnum * 8 + 0x98),
                                               *(uchar **)((long)pvVar102 + 0x18),
                                               *(size_t *)((long)pvVar102 + 0x50),
                                               *(uchar **)((long)pvVar102 + 0x10),0x24), iVar77 < 1)
                     ) break;
                  pvVar102 = (void *)((long)pvVar102 + 0x3560);
                  if (pvVar102 == pvVar114) {
                    pcVar82 = "Doing %u bits %s %s ops for %ds: ";
                    if (mr != 0) {
                      pcVar82 = "+DTP:%d:%s:%s:%d\n";
                    }
                    BIO_printf(_bio_err,pcVar82,
                               (ulong)*(uint *)(&DAT_0011ae6c + (ulong)testnum * 0x10));
                    BIO_ctrl(_bio_err,0xb,0,(void *)0x0);
                    run = 1;
                    alarm(uVar109);
                    app_tminterval(0,usertime);
                    iVar77 = run_benchmark(local_3e8,RSA_verify_loop,__s);
                    dVar126 = (double)app_tminterval(1,usertime);
                    alarm(0);
                    pcVar82 = "%ld %u bits public RSA verify ops in %.2fs\n";
                    if (mr != 0) {
                      pcVar82 = "+R2:%ld:%d:%.2f\n";
                    }
                    BIO_printf(_bio_err,pcVar82,dVar126,(long)iVar77,
                               (ulong)*(uint *)(&DAT_0011ae6c + (ulong)testnum * 0x10));
                    uVar112 = (ulong)testnum;
                    (&DAT_00117b48)[uVar112 * 4] = (double)iVar77 / dVar126;
                    psVar115 = (size_t *)((long)__s + 0x58);
                    goto LAB_0010b45e;
                  }
                  uVar112 = (ulong)testnum;
                }
              }
              else {
                a = BN_new();
                if (a == (BIGNUM *)0x0) {
                  BN_free((BIGNUM *)0x0);
                  EVP_PKEY_CTX_free(local_320);
                  local_320 = (EVP_PKEY_CTX *)0x0;
                }
                else {
                  iVar77 = BN_set_word(a,0x10001);
                  if ((((iVar77 != 0) &&
                       (iVar77 = init_gen_str(&local_320,&_LC140,0,0,0,0), iVar77 != 0)) &&
                      (iVar77 = EVP_PKEY_CTX_set_rsa_keygen_bits
                                          (local_320,
                                           *(undefined4 *)(&DAT_0011ae6c + (ulong)testnum * 0x10)),
                      0 < iVar77)) &&
                     ((iVar77 = EVP_PKEY_CTX_set1_rsa_keygen_pubexp(local_320,a), 0 < iVar77 &&
                      (iVar77 = EVP_PKEY_CTX_set_rsa_keygen_primes(local_320,iVar72), 0 < iVar77))))
                  {
                    iVar77 = EVP_PKEY_keygen(local_320,(EVP_PKEY **)&local_308);
                    bVar122 = 0 < iVar77;
                    BN_free(a);
                    EVP_PKEY_CTX_free(local_320);
                    local_320 = (EVP_PKEY_CTX *)0x0;
                    goto LAB_0010b0cd;
                  }
                  BN_free(a);
                  EVP_PKEY_CTX_free(local_320);
                  local_320 = (EVP_PKEY_CTX *)0x0;
                }
LAB_0010acbc:
                BIO_printf(_bio_err,"RSA sign setup failure.  No RSA sign will be done.\n");
                ERR_print_errors(_bio_err);
                testmoderesult = 1;
              }
              BIO_printf(_bio_err,"RSA verify setup failure.  No RSA verify will be done.\n");
              ERR_print_errors(_bio_err);
              testmoderesult = 1;
              *(undefined1 *)((long)&local_21f + (ulong)testnum) = 0;
LAB_0010ad20:
              BIO_printf(_bio_err,"RSA encrypt setup failure.  No RSA encrypt will be done.\n");
              ERR_print_errors(_bio_err);
              testmoderesult = 1;
LAB_0010ad4b:
              BIO_printf(_bio_err,"RSA decrypt setup failure.  No RSA decrypt will be done.\n");
              ERR_print_errors(_bio_err);
              uVar112 = (ulong)testnum;
              testmoderesult = 1;
LAB_0010ad7c:
              __memset_chk((long)&local_21f + uVar112,0,7 - uVar112);
LAB_0010ada9:
              EVP_PKEY_free((EVP_PKEY *)local_308);
            }
            testnum = testnum + 1;
          } while (testnum < 7);
          testnum = 0;
          do {
            if (*(char *)((long)&local_228 + (ulong)testnum) != '\0') {
              pEVar89 = (EVP_PKEY *)get_dsa((&dsa_bits_3)[testnum]);
              psVar115 = psVar1;
              if (pEVar89 == (EVP_PKEY *)0x0) {
LAB_0010ae65:
                lVar84 = 1;
                BIO_printf(_bio_err,"DSA sign setup failure.  No DSA sign will be done.\n");
                ERR_print_errors(_bio_err);
                testmoderesult = 1;
              }
              else {
                do {
                  uVar112 = (ulong)testnum;
                  pEVar80 = EVP_PKEY_CTX_new(pEVar89,(ENGINE *)0x0);
                  psVar115[uVar112 + 0x1e] = (size_t)pEVar80;
                  *psVar115 = psVar115[-1];
                  if ((((EVP_PKEY_CTX *)psVar115[(ulong)testnum + 0x1e] == (EVP_PKEY_CTX *)0x0) ||
                      (iVar77 = EVP_PKEY_sign_init((EVP_PKEY_CTX *)psVar115[(ulong)testnum + 0x1e]),
                      iVar77 < 1)) ||
                     (iVar77 = EVP_PKEY_sign((EVP_PKEY_CTX *)psVar115[(ulong)testnum + 0x1e],
                                             (uchar *)psVar115[-7],psVar115,(uchar *)psVar115[-8],
                                             0x14), uVar112 = uStack_2f0, iVar77 < 1))
                  goto LAB_0010ae65;
                  psVar115 = psVar115 + 0x6ac;
                } while (psVar115 != psVar2);
                uVar109 = (uint)uStack_2f0;
                pcVar82 = "+DTP:%d:%s:%s:%d\n";
                if (mr == 0) {
                  pcVar82 = "Doing %u bits %s %s ops for %ds: ";
                }
                BIO_printf(_bio_err,pcVar82,(ulong)(uint)(&dsa_bits_3)[testnum],&_LC262,&_LC261,
                           uStack_2f0 & 0xffffffff);
                BIO_ctrl(_bio_err,0xb,0,(void *)0x0);
                run = 1;
                alarm(uVar109);
                app_tminterval(0,usertime);
                iVar77 = run_benchmark(local_3e8,DSA_sign_loop,__s);
                lVar84 = (long)iVar77;
                dVar126 = (double)app_tminterval(1,usertime);
                alarm(0);
                pcVar82 = "%ld %u bits DSA sign ops in %.2fs\n";
                if (mr != 0) {
                  pcVar82 = "+R5:%ld:%u:%.2f\n";
                }
                BIO_printf(_bio_err,pcVar82,dVar126,lVar84,(ulong)(uint)(&dsa_bits_3)[testnum]);
                uVar96 = (ulong)testnum;
                (&dsa_results)[uVar96 * 2] = (double)iVar77 / dVar126;
                pvVar102 = __s;
                while( true ) {
                  pEVar80 = EVP_PKEY_CTX_new(pEVar89,(ENGINE *)0x0);
                  *(EVP_PKEY_CTX **)((long)pvVar102 + uVar96 * 8 + 0x150) = pEVar80;
                  pEVar80 = *(EVP_PKEY_CTX **)((long)pvVar102 + (ulong)testnum * 8 + 0x150);
                  if (((pEVar80 == (EVP_PKEY_CTX *)0x0) ||
                      (iVar77 = EVP_PKEY_verify_init(pEVar80), iVar77 < 1)) ||
                     (iVar77 = EVP_PKEY_verify(*(EVP_PKEY_CTX **)
                                                ((long)pvVar102 + (ulong)testnum * 8 + 0x150),
                                               *(uchar **)((long)pvVar102 + 0x18),
                                               *(size_t *)((long)pvVar102 + 0x50),
                                               *(uchar **)((long)pvVar102 + 0x10),0x24), iVar77 < 1)
                     ) break;
                  pvVar102 = (void *)((long)pvVar102 + 0x3560);
                  if (pvVar102 == pvVar114) {
                    pcVar82 = "+DTP:%d:%s:%s:%d\n";
                    if (mr == 0) {
                      pcVar82 = "Doing %u bits %s %s ops for %ds: ";
                    }
                    BIO_printf(_bio_err,pcVar82,(ulong)(uint)(&dsa_bits_3)[testnum],"verify",&_LC261
                               ,uVar112 & 0xffffffff);
                    BIO_ctrl(_bio_err,0xb,0,(void *)0x0);
                    run = 1;
                    alarm(uVar109);
                    app_tminterval(0,usertime);
                    iVar77 = run_benchmark(local_3e8,DSA_verify_loop,__s);
                    dVar126 = (double)app_tminterval(1,usertime);
                    alarm(0);
                    pcVar82 = "%ld %u bits DSA verify ops in %.2fs\n";
                    if (mr != 0) {
                      pcVar82 = "+R6:%ld:%u:%.2f\n";
                    }
                    BIO_printf(_bio_err,pcVar82,dVar126,(long)iVar77,
                               (ulong)(uint)(&dsa_bits_3)[testnum]);
                    uVar112 = (ulong)testnum;
                    (&DAT_00117c28)[uVar112 * 2] = (double)iVar77 / dVar126;
                    goto LAB_0010aecf;
                  }
                  uVar96 = (ulong)testnum;
                }
              }
              BIO_printf(_bio_err,"DSA verify setup failure.  No DSA verify will be done.\n");
              ERR_print_errors(_bio_err);
              uVar112 = (ulong)testnum;
              testmoderesult = 1;
              *(undefined1 *)((long)&local_228 + uVar112) = 0;
LAB_0010aecf:
              if (lVar84 < 2) {
                uVar96 = 2;
                if (1 < uVar112) {
                  uVar96 = uVar112;
                }
                __memset_chk((long)&local_228 + uVar112,0,2 - uVar112,uVar96 - uVar112);
              }
              EVP_PKEY_free(pEVar89);
            }
            testnum = testnum + 1;
          } while (testnum < 2);
          testnum = 0;
          do {
            if (*(char *)((long)&local_218 + (ulong)testnum) != '\0') {
              pEVar89 = (EVP_PKEY *)get_ecdsa(&ec_curves_10 + (ulong)testnum * 3);
              psVar115 = psVar1;
              if (pEVar89 == (EVP_PKEY *)0x0) {
LAB_0010af88:
                lVar84 = 1;
                BIO_printf(_bio_err,"ECDSA sign setup failure.  No ECDSA sign will be done.\n");
                ERR_print_errors(_bio_err);
                testmoderesult = 1;
              }
              else {
                do {
                  uVar112 = (ulong)testnum;
                  pEVar80 = EVP_PKEY_CTX_new(pEVar89,(ENGINE *)0x0);
                  psVar115[uVar112 + 0x22] = (size_t)pEVar80;
                  *psVar115 = psVar115[-1];
                  if ((((EVP_PKEY_CTX *)psVar115[(ulong)testnum + 0x22] == (EVP_PKEY_CTX *)0x0) ||
                      (iVar77 = EVP_PKEY_sign_init((EVP_PKEY_CTX *)psVar115[(ulong)testnum + 0x22]),
                      iVar77 < 1)) ||
                     (iVar77 = EVP_PKEY_sign((EVP_PKEY_CTX *)psVar115[(ulong)testnum + 0x22],
                                             (uchar *)psVar115[-7],psVar115,(uchar *)psVar115[-8],
                                             0x14), iVar77 < 1)) goto LAB_0010af88;
                  psVar115 = psVar115 + 0x6ac;
                } while (psVar2 != psVar115);
                pcVar82 = "+DTP:%d:%s:%s:%d\n";
                uVar109 = uStack_2f0._4_4_;
                if (mr == 0) {
                  pcVar82 = "Doing %u bits %s %s ops for %ds: ";
                }
                BIO_printf(_bio_err,pcVar82,(ulong)(uint)(&DAT_0011af0c)[(ulong)testnum * 6],&_LC262
                           ,"ecdsa",(ulong)uStack_2f0._4_4_);
                BIO_ctrl(_bio_err,0xb,0,(void *)0x0);
                run = 1;
                alarm(uVar109);
                app_tminterval(0,usertime);
                iVar77 = run_benchmark(local_3e8,ECDSA_sign_loop,__s);
                lVar84 = (long)iVar77;
                dVar126 = (double)app_tminterval(1,usertime);
                alarm(0);
                pcVar82 = "%ld %u bits ECDSA sign ops in %.2fs\n";
                if (mr != 0) {
                  pcVar82 = "+R7:%ld:%u:%.2f\n";
                }
                BIO_printf(_bio_err,pcVar82,dVar126,lVar84,
                           (ulong)(uint)(&DAT_0011af0c)[(ulong)testnum * 6]);
                uVar112 = (ulong)testnum;
                (&ecdsa_results)[uVar112 * 2] = (double)iVar77 / dVar126;
                pvVar102 = __s;
                while( true ) {
                  pEVar80 = EVP_PKEY_CTX_new(pEVar89,(ENGINE *)0x0);
                  *(EVP_PKEY_CTX **)((long)pvVar102 + uVar112 * 8 + 0x210) = pEVar80;
                  pEVar80 = *(EVP_PKEY_CTX **)((long)pvVar102 + (ulong)testnum * 8 + 0x210);
                  if (((pEVar80 == (EVP_PKEY_CTX *)0x0) ||
                      (iVar77 = EVP_PKEY_verify_init(pEVar80), iVar77 < 1)) ||
                     (iVar77 = EVP_PKEY_verify(*(EVP_PKEY_CTX **)
                                                ((long)pvVar102 + (ulong)testnum * 8 + 0x210),
                                               *(uchar **)((long)pvVar102 + 0x18),
                                               *(size_t *)((long)pvVar102 + 0x50),
                                               *(uchar **)((long)pvVar102 + 0x10),0x14), iVar77 < 1)
                     ) break;
                  pvVar102 = (void *)((long)pvVar102 + 0x3560);
                  if (pvVar102 == pvVar114) {
                    pcVar82 = "+DTP:%d:%s:%s:%d\n";
                    if (mr == 0) {
                      pcVar82 = "Doing %u bits %s %s ops for %ds: ";
                    }
                    BIO_printf(_bio_err,pcVar82,(ulong)(uint)(&DAT_0011af0c)[(ulong)testnum * 6],
                               "verify","ecdsa",(ulong)uVar109);
                    BIO_ctrl(_bio_err,0xb,0,(void *)0x0);
                    run = 1;
                    alarm(uVar109);
                    app_tminterval(0,usertime);
                    iVar77 = run_benchmark(local_3e8,ECDSA_verify_loop,__s);
                    dVar126 = (double)app_tminterval(1,usertime);
                    alarm(0);
                    pcVar82 = "%ld %u bits ECDSA verify ops in %.2fs\n";
                    if (mr != 0) {
                      pcVar82 = "+R8:%ld:%u:%.2f\n";
                    }
                    BIO_printf(_bio_err,pcVar82,dVar126,(long)iVar77,
                               (ulong)(uint)(&DAT_0011af0c)[(ulong)testnum * 6]);
                    uVar112 = (ulong)testnum;
                    (&DAT_001178e8)[uVar112 * 2] = (double)iVar77 / dVar126;
                    goto LAB_0010aff2;
                  }
                  uVar112 = (ulong)testnum;
                }
              }
              BIO_printf(_bio_err,"ECDSA verify setup failure.  No ECDSA verify will be done.\n");
              ERR_print_errors(_bio_err);
              uVar112 = (ulong)testnum;
              testmoderesult = 1;
              *(undefined1 *)((long)&local_218 + uVar112) = 0;
LAB_0010aff2:
              if (lVar84 < 2) {
                uVar96 = 0x16;
                if (0x15 < uVar112) {
                  uVar96 = uVar112;
                }
                __memset_chk((long)&local_218 + uVar112,0,0x16 - uVar112,uVar96 - uVar112);
              }
              EVP_PKEY_free(pEVar89);
            }
            testnum = testnum + 1;
          } while (testnum < 0x16);
          uVar112 = 0;
          testnum = 0;
          do {
            uVar109 = (uint)uVar112;
            if (local_1f8[uVar112] != '\0') {
              pvVar102 = __s;
              while ((((pEVar89 = (EVP_PKEY *)get_ecdsa(&ec_curves_10 + uVar112 * 3),
                       pEVar89 != (EVP_PKEY *)0x0 &&
                       (peer = (EVP_PKEY *)get_ecdsa(&ec_curves_10 + (ulong)testnum * 3),
                       peer != (EVP_PKEY *)0x0)) &&
                      ((pEVar80 = EVP_PKEY_CTX_new(pEVar89,(ENGINE *)0x0),
                       pEVar80 != (EVP_PKEY_CTX *)0x0 &&
                       ((iVar77 = EVP_PKEY_derive_init(pEVar80), 0 < iVar77 &&
                        (iVar77 = EVP_PKEY_derive_set_peer(pEVar80,peer), 0 < iVar77)))))) &&
                     ((iVar77 = EVP_PKEY_derive(pEVar80,(uchar *)0x0,(size_t *)&local_308),
                      0 < iVar77 &&
                      ((undefined1 *)((long)&local_308[-1].md_ctrl + 7U) < (undefined1 *)0x100)))))
              {
                pEVar90 = EVP_PKEY_CTX_new(peer,(ENGINE *)0x0);
                if (((pEVar90 == (EVP_PKEY_CTX *)0x0) ||
                    (iVar77 = EVP_PKEY_derive_init(pEVar90), iVar77 < 1)) ||
                   (iVar77 = EVP_PKEY_derive_set_peer(pEVar90,pEVar89), iVar77 < 1)) {
LAB_0010eccd:
                  pcVar82 = "ECDH computation failure.\n";
                  goto LAB_0010eca1;
                }
                iVar77 = EVP_PKEY_derive(pEVar90,(uchar *)0x0,(size_t *)&local_300);
                if (((iVar77 < 1) ||
                    (iVar77 = EVP_PKEY_derive(pEVar80,*(uchar **)((long)pvVar102 + 0x3b8),
                                              (size_t *)&local_308), iVar77 < 1)) ||
                   ((iVar77 = EVP_PKEY_derive(pEVar90,*(uchar **)((long)pvVar102 + 0x3c0),
                                              (size_t *)&local_300), iVar77 < 1 ||
                    (local_300 != local_308)))) goto LAB_0010eccd;
                iVar77 = CRYPTO_memcmp(*(void **)((long)pvVar102 + 0x3b8),
                                       *(void **)((long)pvVar102 + 0x3c0),(size_t)local_308);
                if (iVar77 != 0) {
                  pcVar82 = "ECDH computations don\'t match.\n";
                  goto LAB_0010eca1;
                }
                uVar112 = (ulong)testnum;
                *(EVP_PKEY_CTX **)((long)pvVar102 + uVar112 * 8 + 0x2c0) = pEVar80;
                *(EVP_MD **)((long)pvVar102 + uVar112 * 8 + 0x3c8) = local_308;
                pvVar102 = (void *)((long)pvVar102 + 0x3560);
                EVP_PKEY_free(pEVar89);
                EVP_PKEY_free(peer);
                EVP_PKEY_CTX_free(pEVar90);
                if (pvVar102 == pvVar114) {
                  pkey_print_message(&_LC269,&_LC201,(&DAT_0011af0c)[(ulong)testnum * 6],
                                     local_2e8 & 0xffffffff);
                  app_tminterval(0,usertime);
                  iVar77 = run_benchmark(local_3e8,ECDH_EVP_derive_key_loop,__s);
                  dVar126 = (double)app_tminterval(1,usertime);
                  alarm(0);
                  pcVar82 = "%ld %u-bits ECDH ops in %.2fs\n";
                  if (mr != 0) {
                    pcVar82 = "+R9:%ld:%d:%.2f\n";
                  }
                  BIO_printf(_bio_err,pcVar82,dVar126,(long)iVar77,
                             (ulong)(uint)(&DAT_0011af0c)[(ulong)testnum * 6]);
                  uVar109 = testnum;
                  (&ecdh_results)[testnum] = (double)iVar77 / dVar126;
                  if ((long)iVar77 < 2) goto LAB_0010ec5e;
                  goto LAB_0010c320;
                }
                uVar112 = (ulong)testnum;
              }
              pcVar82 = "ECDH key generation failure.\n";
LAB_0010eca1:
              BIO_printf(_bio_err,pcVar82);
              ERR_print_errors(_bio_err);
              testmoderesult = 1;
              uVar109 = testnum;
LAB_0010ec5e:
              uVar96 = (ulong)uVar109;
              uVar112 = 0x18;
              if (0x17 < uVar96) {
                uVar112 = uVar96;
              }
              __memset_chk(local_1f8 + uVar96,0,0x18 - uVar96,uVar112 - uVar96);
            }
LAB_0010c320:
            testnum = uVar109 + 1;
            uVar112 = (ulong)testnum;
          } while (testnum < 0x18);
          testnum = 0;
LAB_0010c8b2:
          local_300 = (EVP_MD *)0x0;
          uVar112 = (ulong)testnum;
          if (*(char *)((long)&local_226 + uVar112) != '\0') {
            pvVar102 = __s;
            while( true ) {
              local_300 = (EVP_MD *)0x0;
              uVar79 = EVP_MD_CTX_new();
              *(undefined8 *)((long)pvVar102 + uVar112 * 8 + 0x380) = uVar79;
              uVar112 = (ulong)testnum;
              if (*(long *)((long)pvVar102 + uVar112 * 8 + 0x380) == 0) break;
              uVar79 = EVP_MD_CTX_new();
              *(undefined8 *)((long)pvVar102 + uVar112 * 8 + 0x390) = uVar79;
              if (*(long *)((long)pvVar102 + (ulong)testnum * 8 + 0x390) == 0) break;
              pEVar80 = EVP_PKEY_CTX_new_id((&DAT_0011b148)[(ulong)testnum * 6],(ENGINE *)0x0);
              if (((pEVar80 == (EVP_PKEY_CTX *)0x0) ||
                  (iVar77 = EVP_PKEY_keygen_init(pEVar80), iVar77 < 1)) ||
                 (iVar77 = EVP_PKEY_keygen(pEVar80,(EVP_PKEY **)&local_300), iVar77 < 1)) {
                EVP_PKEY_CTX_free(pEVar80);
                break;
              }
              EVP_PKEY_CTX_free(pEVar80);
              iVar77 = EVP_DigestSignInit(*(EVP_MD_CTX **)
                                           ((long)pvVar102 + (ulong)testnum * 8 + 0x380),
                                          (EVP_PKEY_CTX **)0x0,(EVP_MD *)0x0,(ENGINE *)0x0,
                                          (EVP_PKEY *)local_300);
              if (iVar77 == 0) {
                EVP_PKEY_free((EVP_PKEY *)local_300);
                break;
              }
              iVar77 = EVP_DigestVerifyInit
                                 (*(EVP_MD_CTX **)((long)pvVar102 + (ulong)testnum * 8 + 0x390),
                                  (EVP_PKEY_CTX **)0x0,(EVP_MD *)0x0,(ENGINE *)0x0,
                                  (EVP_PKEY *)local_300);
              if (iVar77 == 0) {
                EVP_PKEY_free((EVP_PKEY *)local_300);
                break;
              }
              EVP_PKEY_free((EVP_PKEY *)local_300);
              pvVar102 = (void *)((long)pvVar102 + 0x3560);
              local_300 = (EVP_MD *)0x0;
              psVar115 = psVar1;
              if (pvVar102 == pvVar114) goto LAB_0010ed53;
              uVar112 = (ulong)testnum;
            }
            BIO_printf(_bio_err,"EdDSA failure.\n");
            ERR_print_errors(_bio_err);
            testmoderesult = 1;
          }
          goto LAB_0010c8a0;
        }
        OSSL_PARAM_construct_octet_string(&local_378,&_LC231,key32_6,0x20);
        local_2b8._8_8_ = uStack_360;
        local_2b8._0_8_ = local_368;
        local_2c8._8_8_ = uStack_370;
        local_2c8._0_8_ = local_378;
        local_2a8 = local_358;
        OSSL_PARAM_construct_end(&local_378);
        uStack_2a0 = local_378;
        local_298 = uStack_370;
        uStack_290 = local_368;
        local_288 = uStack_360;
        uStack_280 = local_358;
        uVar79 = app_get0_propq();
        uVar81 = app_get0_libctx();
        plVar98 = (long *)((long)__s + 0x4c8);
        plVar105 = plVar98 + (long)local_438 * 0x6ac;
        local_400 = (void *)EVP_MAC_fetch(uVar81,"KMAC-256",uVar79);
        local_330 = (long)local_400;
        if (local_400 != (void *)0x0) {
          do {
            lVar84 = EVP_MAC_CTX_new(local_400);
            *plVar98 = lVar84;
            if ((lVar84 == 0) ||
               (iVar77 = EVP_MAC_CTX_set_params(lVar84,local_2c8), uVar112 = local_2f8, iVar77 == 0)
               ) goto LAB_0010bc39;
            plVar98 = plVar98 + 0x6ac;
          } while (plVar98 != plVar105);
          testnum = 0;
          if (uVar58 != 0) {
            uVar109 = (uint)local_2f8;
            uVar96 = 0;
            puVar94 = lengths;
            do {
              pcVar82 = "+DT:%s:%d:%d\n";
              if (mr == 0) {
                pcVar82 = "Doing %s ops for %ds on %d size blocks: ";
              }
              BIO_printf(_bio_err,pcVar82,PTR_s_kmac256_0011b870,uVar112 & 0xffffffff,
                         (ulong)*(uint *)(puVar94 + uVar96 * 4));
              BIO_ctrl(_bio_err,0xb,0,(void *)0x0);
              run = 1;
              alarm(uVar109);
              app_tminterval(0,usertime);
              uVar74 = run_benchmark(local_3e8,KMAC256_loop,__s);
              dVar126 = (double)app_tminterval(1,usertime);
              alarm(0);
              uVar78 = testnum;
              if (uVar74 == 0xffffffff) {
                BIO_printf(_bio_err,"%s error!\n",PTR_s_kmac256_0011b870);
                ERR_print_errors(_bio_err);
                testmoderesult = 1;
                break;
              }
              pcVar82 = "%d %s ops in %.2fs\n";
              if (mr != 0) {
                pcVar82 = "+R:%d:%s:%f\n";
              }
              BIO_printf(_bio_err,pcVar82,dVar126,(ulong)uVar74,PTR_s_kmac256_0011b870);
              puVar94 = lengths;
              (&DAT_001181e0)[(int)uVar78] =
                   (double)*(int *)(lengths + (long)(int)uVar78 * 4) *
                   ((double)(int)uVar74 / dVar126);
              if ((int)uVar74 < 0) break;
              testnum = testnum + 1;
              uVar96 = (ulong)testnum;
            } while (testnum < uVar58);
          }
          mac_teardown(&local_330,__s,uVar106);
          goto LAB_0010a9e2;
        }
      }
      else {
        OSSL_PARAM_construct_octet_string(&local_378,&_LC231,key32_6,0x10);
        local_2b8._8_8_ = uStack_360;
        local_2b8._0_8_ = local_368;
        local_2c8._8_8_ = uStack_370;
        local_2c8._0_8_ = local_378;
        local_2a8 = local_358;
        OSSL_PARAM_construct_end(&local_378);
        uStack_2a0 = local_378;
        local_298 = uStack_370;
        uStack_290 = local_368;
        local_288 = uStack_360;
        uStack_280 = local_358;
        uVar79 = app_get0_propq();
        uVar81 = app_get0_libctx();
        plVar98 = (long *)((long)__s + 0x4c8);
        plVar105 = plVar98 + (long)local_438 * 0x6ac;
        local_400 = (void *)EVP_MAC_fetch(uVar81,"KMAC-128",uVar79);
        local_330 = (long)local_400;
        if (local_400 != (void *)0x0) {
          do {
            lVar84 = EVP_MAC_CTX_new(local_400);
            *plVar98 = lVar84;
            if ((lVar84 == 0) ||
               (iVar77 = EVP_MAC_CTX_set_params(lVar84,local_2c8), uVar112 = local_2f8, iVar77 == 0)
               ) goto LAB_0010bc39;
            plVar98 = plVar98 + 0x6ac;
          } while (plVar98 != plVar105);
          testnum = 0;
          if (uVar58 != 0) {
            uVar109 = (uint)local_2f8;
            uVar96 = 0;
            puVar94 = lengths;
            do {
              pcVar82 = "+DT:%s:%d:%d\n";
              if (mr == 0) {
                pcVar82 = "Doing %s ops for %ds on %d size blocks: ";
              }
              BIO_printf(_bio_err,pcVar82,PTR_s_kmac128_0011b868,uVar112 & 0xffffffff,
                         (ulong)*(uint *)(puVar94 + uVar96 * 4));
              BIO_ctrl(_bio_err,0xb,0,(void *)0x0);
              run = 1;
              alarm(uVar109);
              app_tminterval(0,usertime);
              uVar74 = run_benchmark(local_3e8,KMAC128_loop,__s);
              dVar126 = (double)app_tminterval(1,usertime);
              alarm(0);
              uVar78 = testnum;
              if (uVar74 == 0xffffffff) {
                BIO_printf(_bio_err,"%s error!\n",PTR_s_kmac128_0011b868);
                ERR_print_errors(_bio_err);
                testmoderesult = 1;
                break;
              }
              pcVar82 = "%d %s ops in %.2fs\n";
              if (mr != 0) {
                pcVar82 = "+R:%d:%s:%f\n";
              }
              BIO_printf(_bio_err,pcVar82,dVar126,(ulong)uVar74,PTR_s_kmac128_0011b868);
              puVar94 = lengths;
              (&DAT_001181b0)[(int)uVar78] =
                   (double)*(int *)(lengths + (long)(int)uVar78 * 4) *
                   ((double)(int)uVar74 / dVar126);
              if ((int)uVar74 < 0) break;
              testnum = testnum + 1;
              uVar96 = (ulong)testnum;
            } while (testnum < uVar58);
          }
          mac_teardown(&local_330,__s,uVar106);
          goto LAB_0010a9d4;
        }
      }
LAB_0010bc39:
      local_418 = 0;
      local_420 = (long *)0x0;
    }
    else {
      sVar97 = strlen(evp_mac_ciphername);
      local_300 = (EVP_MD *)0x0;
      iVar77 = opt_cipher(evp_mac_ciphername,&local_300);
      if (iVar77 != 0) {
        iVar77 = EVP_CIPHER_get_key_length(local_300);
        EVP_CIPHER_free(local_300);
        if (iVar77 - 1U < 0x20) {
          evp_cmac_name = (char *)app_malloc(sVar97 + 7,"CMAC name");
          BIO_snprintf(evp_cmac_name,sVar97 + 7,"cmac(%s)",evp_mac_ciphername);
          PTR__LC208_0011b860 = evp_cmac_name;
          OSSL_PARAM_construct_utf8_string(&local_378,"cipher",evp_mac_ciphername,0);
          puVar101 = &local_378;
          puVar103 = (undefined4 *)local_2c8;
          for (lVar84 = 10; lVar84 != 0; lVar84 = lVar84 + -1) {
            *puVar103 = *(undefined4 *)puVar101;
            puVar101 = (undefined8 *)((long)puVar101 + (ulong)bVar123 * -8 + 4);
            puVar103 = puVar103 + (ulong)bVar123 * -2 + 1;
          }
          OSSL_PARAM_construct_octet_string(&local_378,&_LC231,key32_6,(long)iVar77);
          puVar101 = &local_378;
          puVar100 = &uStack_2a0;
          for (lVar84 = 10; lVar84 != 0; lVar84 = lVar84 + -1) {
            *(undefined4 *)puVar100 = *(undefined4 *)puVar101;
            puVar101 = (undefined8 *)((long)puVar101 + (ulong)bVar123 * -8 + 4);
            puVar100 = (undefined8 *)((long)puVar100 + (ulong)bVar123 * -8 + 4);
          }
          OSSL_PARAM_construct_end(&local_378);
          puVar101 = &local_378;
          puVar103 = local_278;
          for (lVar84 = 10; lVar84 != 0; lVar84 = lVar84 + -1) {
            *puVar103 = *(undefined4 *)puVar101;
            puVar101 = (undefined8 *)((long)puVar101 + (ulong)bVar123 * -8 + 4);
            puVar103 = puVar103 + (ulong)bVar123 * -2 + 1;
          }
          iVar77 = mac_setup(&_LC178,&local_330,local_2c8,__s,uVar106);
          uVar112 = local_2f8;
          if (0 < iVar77) {
            testnum = 0;
            if (uVar58 != 0) {
              uVar109 = (uint)local_2f8;
              uVar96 = 0;
              puVar94 = lengths;
              do {
                pcVar82 = "+DT:%s:%d:%d\n";
                if (mr == 0) {
                  pcVar82 = "Doing %s ops for %ds on %d size blocks: ";
                }
                BIO_printf(_bio_err,pcVar82,PTR__LC208_0011b860,uVar112 & 0xffffffff,
                           (ulong)*(uint *)(puVar94 + uVar96 * 4));
                BIO_ctrl(_bio_err,0xb,0,(void *)0x0);
                run = 1;
                alarm(uVar109);
                app_tminterval(0,usertime);
                uVar74 = run_benchmark(local_3e8,CMAC_loop,__s);
                dVar126 = (double)app_tminterval(1,usertime);
                alarm(0);
                uVar78 = testnum;
                if (uVar74 == 0xffffffff) {
                  BIO_printf(_bio_err,"%s error!\n",PTR__LC208_0011b860);
                  ERR_print_errors(_bio_err);
                  testmoderesult = 1;
                  break;
                }
                pcVar82 = "%d %s ops in %.2fs\n";
                if (mr != 0) {
                  pcVar82 = "+R:%d:%s:%f\n";
                }
                BIO_printf(_bio_err,pcVar82,dVar126,(ulong)uVar74,PTR__LC208_0011b860);
                puVar94 = lengths;
                (&DAT_00118180)[(int)uVar78] =
                     (double)*(int *)(lengths + (long)(int)uVar78 * 4) *
                     ((double)(int)uVar74 / dVar126);
                if ((int)uVar74 < 0) break;
                testnum = testnum + 1;
                uVar96 = (ulong)testnum;
              } while (testnum < uVar58);
            }
            mac_teardown(&local_330,__s,uVar106);
            goto LAB_0010a9c6;
          }
        }
        else {
          BIO_printf(_bio_err,"\nRequested CMAC cipher with unsupported key length.\n");
        }
      }
      local_400 = (void *)local_330;
      local_418 = 0;
      local_420 = (long *)0x0;
    }
  }
  else {
    sVar97 = strlen(evp_mac_mdname);
    evp_hmac_name = (char *)app_malloc(sVar97 + 7,"HMAC name");
    BIO_snprintf(evp_hmac_name,sVar97 + 7,"hmac(%s)",evp_mac_mdname);
    PTR_s_hmac_sha256__0011b7c8 = evp_hmac_name;
    OSSL_PARAM_construct_utf8_string(&local_378,"digest",evp_mac_mdname,0);
    local_2c8._8_8_ = uStack_370;
    local_2c8._0_8_ = local_378;
    local_2b8._8_8_ = uStack_360;
    local_2b8._0_8_ = local_368;
    local_2a8 = local_358;
    OSSL_PARAM_construct_octet_string(&local_378,&_LC231,"This is a key...",0x10);
    uStack_2a0 = local_378;
    local_298 = uStack_370;
    uStack_290 = local_368;
    local_288 = uStack_360;
    uStack_280 = local_358;
    OSSL_PARAM_construct_end(&local_378);
    local_258 = local_358;
    uVar79 = app_get0_propq();
    uVar81 = app_get0_libctx();
    local_400 = (void *)EVP_MAC_fetch(uVar81,&_LC175,uVar79);
    local_330 = (long)local_400;
    if (local_400 != (void *)0x0) {
      plVar98 = (long *)((long)__s + 0x4c8);
      plVar105 = plVar98 + (long)local_438 * 0x6ac;
      plVar99 = plVar98;
      do {
        lVar84 = EVP_MAC_CTX_new(local_400);
        *plVar99 = lVar84;
        if ((lVar84 == 0) || (iVar77 = EVP_MAC_CTX_set_params(lVar84,local_2c8), iVar77 == 0))
        goto LAB_001096d4;
        plVar99 = plVar99 + 0x6ac;
      } while (plVar99 != plVar105);
      testnum = 0;
      if (uVar58 != 0) {
        uVar109 = (uint)local_2f8;
        while( true ) {
          pcVar82 = "+DT:%s:%d:%d\n";
          if (mr == 0) {
            pcVar82 = "Doing %s ops for %ds on %d size blocks: ";
          }
          BIO_printf(_bio_err,pcVar82,PTR_s_hmac_sha256__0011b7c8);
          BIO_ctrl(_bio_err,0xb,0,(void *)0x0);
          run = 1;
          alarm(uVar109);
          app_tminterval(0,usertime);
          uVar78 = run_benchmark(local_3e8,HMAC_loop,__s);
          dVar126 = (double)app_tminterval(1,usertime);
          alarm(0);
          lVar84 = (long)(int)testnum;
          if (uVar78 == 0xffffffff) break;
          pcVar82 = "%d %s ops in %.2fs\n";
          if (mr != 0) {
            pcVar82 = "+R:%d:%s:%f\n";
          }
          BIO_printf(_bio_err,pcVar82,dVar126,(ulong)uVar78,PTR_s_hmac_sha256__0011b7c8);
          (&DAT_00117df0)[lVar84] =
               (double)*(int *)(lengths + lVar84 * 4) * ((double)(int)uVar78 / dVar126);
          if (((int)uVar78 < 0) || (testnum = testnum + 1, uVar58 <= testnum)) goto LAB_001101fe;
        }
        BIO_printf(_bio_err,"%s error!\n",PTR_s_hmac_sha256__0011b7c8);
        ERR_print_errors(_bio_err);
        testmoderesult = 1;
      }
LAB_001101fe:
      do {
        lVar84 = *plVar98;
        plVar98 = plVar98 + 0x6ac;
        EVP_MAC_CTX_free(lVar84);
      } while (plVar98 != plVar105);
      EVP_MAC_free(local_400);
      local_330 = 0;
      goto LAB_00108d13;
    }
LAB_001096d4:
    local_418 = 0;
    local_420 = (long *)0x0;
  }
LAB_00105e6a:
  local_380 = 1;
LAB_00105e75:
  ERR_print_errors(_bio_err);
  local_438 = (undefined8 *)(ulong)uVar106;
  if (uVar106 != 0) {
LAB_00105e91:
    local_428 = (undefined8 *)((long)__s + 0x98);
    puVar101 = (undefined8 *)((long)__s + 0x210);
    lVar84 = (long)local_438 * 0x6ac;
    puVar100 = (undefined8 *)((long)__s + 0x380);
    local_438 = (undefined8 *)((long)__s + 0x4b0);
    do {
      CRYPTO_free((void *)puVar100[-0x6c]);
      CRYPTO_free((void *)puVar100[-0x6b]);
      BN_free((BIGNUM *)0x0);
      EVP_PKEY_CTX_free(local_320);
      puVar111 = puVar100 + -100;
      do {
        puVar110 = puVar111 + 1;
        EVP_PKEY_CTX_free((EVP_PKEY_CTX *)*puVar111);
        EVP_PKEY_CTX_free((EVP_PKEY_CTX *)puVar111[7]);
        EVP_PKEY_CTX_free((EVP_PKEY_CTX *)puVar111[0xe]);
        EVP_PKEY_CTX_free((EVP_PKEY_CTX *)puVar111[0x15]);
        puVar111 = puVar110;
      } while (local_428 != puVar110);
      puVar111 = puVar100 + 0x21;
      CRYPTO_free((void *)puVar100[0x26]);
      CRYPTO_free((void *)puVar100[0x27]);
      do {
        pEVar80 = (EVP_PKEY_CTX *)*puVar111;
        puVar111 = puVar111 + 1;
        EVP_PKEY_CTX_free(pEVar80);
      } while (local_438 != puVar111);
      EVP_PKEY_CTX_free((EVP_PKEY_CTX *)puVar100[-0x48]);
      EVP_PKEY_CTX_free((EVP_PKEY_CTX *)puVar100[-0x46]);
      EVP_PKEY_CTX_free((EVP_PKEY_CTX *)puVar100[-0x47]);
      EVP_PKEY_CTX_free((EVP_PKEY_CTX *)puVar100[-0x45]);
      puVar111 = puVar100 + -0x44;
      do {
        puVar110 = puVar111 + 1;
        EVP_PKEY_CTX_free((EVP_PKEY_CTX *)*puVar111);
        EVP_PKEY_CTX_free((EVP_PKEY_CTX *)puVar111[0x16]);
        puVar111 = puVar110;
      } while (puVar101 != puVar110);
      puVar111 = puVar100 + -0x18;
      do {
        pEVar80 = (EVP_PKEY_CTX *)*puVar111;
        puVar111 = puVar111 + 1;
        EVP_PKEY_CTX_free(pEVar80);
      } while (puVar100 != puVar111);
      EVP_MD_CTX_free(*puVar100);
      EVP_MD_CTX_free(puVar100[2]);
      EVP_MD_CTX_free(puVar100[1]);
      EVP_MD_CTX_free(puVar100[3]);
      lVar91 = puVar100[4];
      if (lVar91 != 0) {
        pEVar80 = (EVP_PKEY_CTX *)EVP_MD_CTX_get_pkey_ctx();
        if (pEVar80 != (EVP_PKEY_CTX *)0x0) {
          EVP_PKEY_CTX_free(pEVar80);
        }
        lVar91 = puVar100[4];
      }
      EVP_MD_CTX_free(lVar91);
      lVar91 = puVar100[5];
      if (lVar91 != 0) {
        pEVar80 = (EVP_PKEY_CTX *)EVP_MD_CTX_get_pkey_ctx();
        if (pEVar80 != (EVP_PKEY_CTX *)0x0) {
          EVP_PKEY_CTX_free(pEVar80);
        }
        lVar91 = puVar100[5];
      }
      EVP_MD_CTX_free(lVar91);
      uVar112 = 0;
      puVar111 = puVar100 + 0x2a;
      EVP_PKEY_free((EVP_PKEY *)puVar100[6]);
      if (kems_algs_len != 0) {
        do {
          uVar112 = uVar112 + 1;
          EVP_PKEY_CTX_free((EVP_PKEY_CTX *)*puVar111);
          EVP_PKEY_CTX_free((EVP_PKEY_CTX *)puVar111[0x6f]);
          EVP_PKEY_CTX_free((EVP_PKEY_CTX *)puVar111[0xde]);
          CRYPTO_free((void *)puVar111[0x22b]);
          CRYPTO_free((void *)puVar111[0x29a]);
          CRYPTO_free((void *)puVar111[0x309]);
          puVar111 = puVar111 + 1;
        } while (uVar112 < kems_algs_len);
      }
      uVar112 = 0;
      if (sigs_algs_len != 0) {
        do {
          EVP_PKEY_CTX_free((EVP_PKEY_CTX *)puVar100[uVar112 + 0x3a2]);
          EVP_PKEY_CTX_free((EVP_PKEY_CTX *)puVar100[uVar112 + 0x411]);
          EVP_PKEY_CTX_free((EVP_PKEY_CTX *)puVar100[uVar112 + 0x480]);
          lVar91 = uVar112 + 0x5cd;
          uVar112 = uVar112 + 1;
          CRYPTO_free((void *)puVar100[lVar91]);
        } while (uVar112 < sigs_algs_len);
      }
      puVar111 = puVar100 + 0x6ac;
      puVar101 = puVar101 + 0x6ac;
      CRYPTO_free((void *)puVar100[7]);
      CRYPTO_free((void *)puVar100[8]);
      local_438 = local_438 + 0x6ac;
      local_428 = local_428 + 0x6ac;
      puVar100 = puVar111;
    } while ((undefined8 *)((long)__s + 0x380) + lVar84 != puVar111);
  }
  CRYPTO_free(evp_hmac_name);
  uVar112 = 0;
  CRYPTO_free(evp_cmac_name);
  if (kems_algs_len != 0) {
    do {
      puVar101 = &kems_algname + uVar112;
      uVar112 = uVar112 + 1;
      CRYPTO_free((void *)*puVar101);
    } while (uVar112 < kems_algs_len);
  }
  if (local_420 != (long *)0x0) {
    OPENSSL_sk_pop_free(local_420,EVP_KEM_free);
  }
  uVar112 = 0;
  if (sigs_algs_len != 0) {
    do {
      puVar101 = &sigs_algname + uVar112;
      uVar112 = uVar112 + 1;
      CRYPTO_free((void *)*puVar101);
    } while (uVar112 < sigs_algs_len);
  }
  if (local_418 != 0) {
    OPENSSL_sk_pop_free(local_418,EVP_SIGNATURE_free);
  }
  if ((local_3e8 != 0) && (uVar106 != 0)) {
    puVar101 = (undefined8 *)((long)__s + 8);
    puVar100 = puVar101 + (ulong)uVar106 * 0x6ac;
    do {
      uVar79 = *puVar101;
      puVar101 = puVar101 + 0x6ac;
      ASYNC_WAIT_CTX_free(uVar79);
    } while (puVar100 != puVar101);
  }
  if (local_3e4 != 0) {
    ASYNC_cleanup_thread();
  }
  CRYPTO_free(__s);
  release_engine(local_3f0);
  EVP_CIPHER_free(local_338);
  EVP_MAC_free(local_400);
  NCONF_free(local_3e0);
code_r0x0010631e:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_380;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


