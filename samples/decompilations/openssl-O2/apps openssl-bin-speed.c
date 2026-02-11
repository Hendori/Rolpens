
void alarmed(void)

{
  signal(0xe,alarmed);
  run = 0;
  return;
}



uint have_cipher(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  EVP_CIPHER_CTX *ctx;
  long in_FS_OFFSET;
  EVP_CIPHER *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = (EVP_CIPHER *)0x0;
  uVar1 = opt_cipher_silent(param_1,&local_28);
  if (uVar1 != 0) {
    ctx = EVP_CIPHER_CTX_new();
    uVar1 = 0;
    if (ctx != (EVP_CIPHER_CTX *)0x0) {
      iVar2 = EVP_CipherInit_ex(ctx,local_28,(ENGINE *)0x0,(uchar *)0x0,(uchar *)0x0,1);
      uVar1 = (uint)(0 < iVar2);
    }
    EVP_CIPHER_CTX_free(ctx);
    EVP_CIPHER_free(local_28);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
      if (((run == 0) || (testmode != 0)) || (iVar2 == 0x7fffffff)) goto LAB_00100260;
      iVar1 = EVP_PKEY_keygen(ctx,&local_28);
    }
    iVar2 = -1;
  }
LAB_00100260:
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
      if (((run == 0) || (testmode != 0)) || (iVar6 == 0x7fffffff)) goto LAB_00100497;
    }
    iVar6 = -1;
  }
LAB_00100497:
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
      if (((run == 0) || (testmode != 0)) || (iVar7 == 0x7fffffff)) goto LAB_00100577;
    }
    iVar7 = -1;
  }
LAB_00100577:
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
      if (((run == 0) || (testmode != 0)) || (uVar4 == 0x7fffffff)) goto LAB_00100652;
    }
    uVar3 = (ulong)uVar4;
    uVar4 = 0xffffffff;
    BIO_printf(_bio_err,"SIG verify failure at count %d\n",uVar3);
    ERR_print_errors(_bio_err);
    testmoderesult = 1;
  }
LAB_00100652:
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
        goto LAB_001007cf;
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
LAB_001007cf:
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
        goto LAB_0010095f;
      }
      iVar6 = iVar6 + 1;
      *(long *)(lVar1 + 0x50) = local_48;
      if (((run == 0) || (testmode != 0)) || (iVar6 == 0x7fffffff)) goto LAB_0010090c;
    }
    BIO_printf(_bio_err,"SM2 init sign failure\n");
    ERR_print_errors(_bio_err);
LAB_0010095f:
    testmoderesult = 1;
    iVar6 = -1;
  }
LAB_0010090c:
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
      if (((run == 0) || (testmode != 0)) || (iVar3 == 0x7fffffff)) goto LAB_00100fb7;
    }
    iVar3 = -1;
    BIO_printf(_bio_err,"RSA decrypt failure\n");
    ERR_print_errors(_bio_err);
    testmoderesult = 1;
  }
LAB_00100fb7:
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
          goto LAB_0010148f;
        }
        if (((1 < mode_op - 0x10004U) && (mode_op != 6)) &&
           (iVar2 = EVP_CIPHER_CTX_ctrl(ctx,0x11,0x10,(void *)0x0), iVar2 == 0)) {
          format = "\nFailed to set tag length\n";
          goto LAB_0010148f;
        }
      }
      iVar2 = EVP_CipherInit_ex(ctx,(EVP_CIPHER *)0x0,(ENGINE *)0x0,key,aead_iv,-1);
      if (iVar2 == 0) {
        format = "\nFailed to set key and iv\n";
LAB_0010148f:
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
        goto LAB_0010148f;
      }
      if ((aead != 0) && (iVar2 = EVP_EncryptUpdate(ctx,(uchar *)0x0,&local_44,aad,0xd), iVar2 == 0)
         ) {
        format = "\nCouldn\'t insert AAD when encrypting\n";
        goto LAB_0010148f;
      }
      iVar2 = EVP_EncryptUpdate(ctx,out,&local_44,out,*(int *)(lengths + (ulong)testnum * 4));
      if (iVar2 == 0) {
        format = "\nFailed to encrypt the data\n";
        goto LAB_0010148f;
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
      if (((run == 0) || (testmode != 0)) || (uVar4 == 0x7fffffff)) goto LAB_00101675;
    }
    uVar3 = (ulong)uVar4;
    uVar4 = 0xffffffff;
    BIO_printf(_bio_err,"SIG sign failure at count %d\n",uVar3);
    ERR_print_errors(_bio_err);
    testmoderesult = 1;
  }
LAB_00101675:
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
        if ((run == 0) || (testmode != 0)) goto LAB_00101845;
      } while (iVar2 != 0x7fffffff);
      goto LAB_001018c4;
    }
LAB_0010184f:
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
        if ((run == 0) || (testmode != 0)) goto LAB_00101845;
      } while (iVar2 != 0x7fffffff);
LAB_001018c4:
      iVar2 = 0x7fffffff;
LAB_00101845:
      if (decrypt == 0) goto LAB_0010184f;
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
          goto LAB_00101b97;
        }
        if (((1 < mode_op - 0x10004U) && (mode_op != 6)) &&
           (iVar2 = EVP_CIPHER_CTX_ctrl(ctx,0x11,0x10,(void *)0x0), iVar2 == 0)) {
          format = "\nFailed to set tag length\n";
          goto LAB_00101b97;
        }
      }
      iVar2 = EVP_CipherInit_ex(ctx,(EVP_CIPHER *)0x0,(ENGINE *)0x0,key,aead_iv,-1);
      if (iVar2 == 0) {
        format = "\nFailed to set key and iv\n";
LAB_00101b97:
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
        goto LAB_00101b97;
      }
      local_58 = *(undefined8 *)(lVar1 + 0x38);
      uStack_50 = *(undefined8 *)(lVar1 + 0x40);
      iVar2 = EVP_CIPHER_CTX_ctrl(ctx,0x11,0x10,&local_58);
      if (iVar2 == 0) {
        format = "\nFailed to set tag\n";
        goto LAB_00101b97;
      }
      if ((mode_op == 7) &&
         (iVar2 = EVP_DecryptUpdate(ctx,(uchar *)0x0,&local_5c,(uchar *)0x0,
                                    *(int *)(lengths + (ulong)testnum * 4)), iVar2 == 0)) {
        format = "\nCouldn\'t set cipher text length\n";
        goto LAB_00101b97;
      }
      if ((aead != 0) && (iVar2 = EVP_DecryptUpdate(ctx,(uchar *)0x0,&local_5c,aad,0xd), iVar2 == 0)
         ) {
        format = "\nCouldn\'t insert AAD when decrypting\n";
        goto LAB_00101b97;
      }
      iVar2 = EVP_DecryptUpdate(ctx,out,&local_5c,in,*(int *)(lengths + (ulong)testnum * 4));
      if (iVar2 == 0) {
        format = "\nFailed to decrypt the data\n";
        goto LAB_00101b97;
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



uint have_md(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  EVP_MD_CTX *ctx;
  long in_FS_OFFSET;
  EVP_MD *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = (EVP_MD *)0x0;
  uVar1 = opt_md_silent(param_1,&local_28);
  if (uVar1 != 0) {
    ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
    uVar1 = 0;
    if (ctx != (EVP_MD_CTX *)0x0) {
      iVar2 = EVP_DigestInit(ctx,local_28);
      uVar1 = (uint)(0 < iVar2);
    }
    EVP_MD_CTX_free(ctx);
    EVP_MD_free(local_28);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
            goto LAB_00101e74;
          }
        }
      }
      EVP_CIPHER_CTX_free(ctx);
    }
    ctx = (EVP_CIPHER_CTX *)0x0;
    EVP_CIPHER_free(local_28);
  }
LAB_00101e74:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return ctx;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 check_block_size(undefined8 param_1,int param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = EVP_CIPHER_CTX_get0_cipher();
  iVar1 = EVP_CIPHER_CTX_get_block_size(param_1);
  if ((lVar2 == 0) || (iVar1 < 1)) {
    BIO_printf(_bio_err,"\nInvalid cipher!\n");
  }
  else {
    if (param_2 % iVar1 == 0) {
      return 1;
    }
    uVar3 = EVP_CIPHER_get0_name(lVar2);
    BIO_printf(_bio_err,"\nRequested encryption length not a multiple of block size for %s!\n",uVar3
              );
  }
  return 0;
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

void print_message(undefined8 param_1,uint param_2,uint param_3)

{
  char *format;
  
  format = "+DT:%s:%d:%d\n";
  if (mr == 0) {
    format = "Doing %s ops for %ds on %d size blocks: ";
  }
  BIO_printf(_bio_err,format,param_1,(ulong)param_3,(ulong)param_2);
  BIO_ctrl(_bio_err,0xb,0,(void *)0x0);
  run = 1;
  alarm(param_3);
  return;
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
      goto LAB_00102205;
    }
    pEVar4 = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_name(0,&_LC45,0);
    if (((pEVar4 == (EVP_PKEY_CTX *)0x0) || (iVar1 = EVP_PKEY_paramgen_init(pEVar4), iVar1 < 1)) ||
       ((iVar1 = EVP_PKEY_CTX_set_ec_paramgen_curve_nid(pEVar4,*(undefined4 *)(param_1 + 8)),
        iVar1 < 1 || (iVar1 = EVP_PKEY_paramgen(pEVar4,&local_28), iVar1 < 1)))) {
      BIO_printf(_bio_err,"EC params init failure.\n");
      ERR_print_errors(_bio_err);
      testmoderesult = 1;
      EVP_PKEY_CTX_free(pEVar4);
      goto LAB_00102205;
    }
    EVP_PKEY_CTX_free(pEVar4);
    pEVar4 = EVP_PKEY_CTX_new(local_28,(ENGINE *)0x0);
    EVP_PKEY_free(local_28);
    if (pEVar4 != (EVP_PKEY_CTX *)0x0) goto LAB_001021b8;
LAB_001021c4:
    BIO_printf(_bio_err,"EC key generation failure.\n");
    ERR_print_errors(_bio_err);
    testmoderesult = 1;
    local_30 = (EVP_PKEY *)0x0;
  }
  else {
LAB_001021b8:
    iVar1 = EVP_PKEY_keygen_init(pEVar4);
    if ((iVar1 < 1) || (iVar1 = EVP_PKEY_keygen(pEVar4,&local_30), iVar1 < 1)) goto LAB_001021c4;
  }
  EVP_PKEY_CTX_free(pEVar4);
  pEVar6 = local_30;
LAB_00102205:
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
  int *piVar5;
  long lVar6;
  ulong uVar7;
  fd_set *pfVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  long in_FS_OFFSET;
  byte bVar12;
  int local_fc;
  long local_f0 [2];
  int local_e0;
  uint local_dc;
  ulong local_d8;
  long local_d0;
  fd_set local_c8;
  long local_40;
  
  bVar12 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_e0 = 0;
  local_dc = 0;
  local_d8 = 0;
  local_f0[0] = param_3;
  if (param_1 == 0) {
    local_fc = (*param_2)(local_f0);
  }
  else if (param_1 < 1) {
    local_fc = 0;
  }
  else {
    lVar6 = 0;
    iVar10 = 0;
    lVar9 = (long)param_1 * 0x3560;
    local_fc = 0;
    do {
      while( true ) {
        local_d0 = local_f0[0] + lVar6;
        uVar2 = ASYNC_start_job(local_d0,*(undefined8 *)(local_d0 + 8),&local_e0,param_2,&local_d0,8
                               );
        if (uVar2 != 2) break;
        iVar10 = iVar10 + 1;
LAB_001027b4:
        lVar6 = lVar6 + 0x3560;
        if (lVar9 - lVar6 == 0) goto LAB_001027c4;
      }
      if ((int)uVar2 < 3) {
        if (1 < uVar2) goto LAB_001027b4;
        BIO_printf(_bio_err,"Failure in the job\n");
        ERR_print_errors(_bio_err);
        testmoderesult = 1;
LAB_001024c8:
        if (iVar10 < 1) goto LAB_001027a1;
        bVar1 = true;
        goto LAB_001024d9;
      }
      if (uVar2 != 3) goto LAB_001027b4;
      if (local_e0 == -1) goto LAB_001024c8;
      lVar6 = lVar6 + 0x3560;
      local_fc = local_fc + local_e0;
    } while (lVar9 - lVar6 != 0);
LAB_001027c4:
    if (0 < iVar10) {
      bVar1 = false;
LAB_001024d9:
LAB_001024e8:
      do {
        lVar11 = 0;
        uVar7 = 0;
        pfVar8 = &local_c8;
        for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
          pfVar8->fds_bits[0] = 0;
          pfVar8 = (fd_set *)((long)pfVar8 + ((ulong)bVar12 * -2 + 1) * 8);
        }
        do {
          iVar4 = (int)uVar7;
          if (*(long *)(local_f0[0] + lVar11) != 0) {
            iVar3 = ASYNC_WAIT_CTX_get_all_fds(((long *)(local_f0[0] + lVar11))[1],0,&local_d8);
            if ((iVar3 == 0) || (1 < local_d8)) {
              BIO_printf(_bio_err,"Too many fds in ASYNC_WAIT_CTX\n");
              ERR_print_errors(_bio_err);
              bVar1 = true;
              testmoderesult = 1;
              break;
            }
            ASYNC_WAIT_CTX_get_all_fds
                      (*(undefined8 *)(local_f0[0] + 8 + lVar11),&local_dc,&local_d8);
            lVar6 = __fdelt_chk((long)(int)local_dc);
            local_c8.fds_bits[lVar6] = local_c8.fds_bits[lVar6] | 1L << ((byte)local_dc & 0x3f);
            if (iVar4 < (int)local_dc) {
              uVar7 = (ulong)local_dc;
            }
          }
          iVar4 = (int)uVar7;
          lVar11 = lVar11 + 0x3560;
        } while (lVar9 - lVar11 != 0);
        if (0x3ff < iVar4) {
          BIO_printf(_bio_err,
                     "Error: max_fd (%d) must be smaller than FD_SETSIZE (%d). Decrease the value of async_jobs\n"
                     ,uVar7,0x400);
          ERR_print_errors(_bio_err);
          goto LAB_00102797;
        }
        iVar4 = select(iVar4 + 1,&local_c8,(fd_set *)0x0,(fd_set *)0x0,(timeval *)0x0);
        if (iVar4 != -1) {
          if (iVar4 != 0) {
            lVar6 = 0;
            do {
              while( true ) {
                if (*(long *)(local_f0[0] + lVar6) == 0) goto LAB_001025f8;
                iVar4 = ASYNC_WAIT_CTX_get_all_fds(((long *)(local_f0[0] + lVar6))[1],0,&local_d8);
                if ((iVar4 == 0) || (1 < local_d8)) {
                  BIO_printf(_bio_err,"Too many fds in ASYNC_WAIT_CTX\n");
                  ERR_print_errors(_bio_err);
                  bVar1 = true;
                  testmoderesult = 1;
                  goto joined_r0x00102883;
                }
                ASYNC_WAIT_CTX_get_all_fds
                          (*(undefined8 *)(local_f0[0] + 8 + lVar6),&local_dc,&local_d8);
                if ((local_d8 != 1) ||
                   (lVar11 = __fdelt_chk((long)(int)local_dc),
                   (1L << ((byte)local_dc & 0x3f) & local_c8.fds_bits[lVar11]) != 0)) break;
LAB_001025f8:
                lVar6 = lVar6 + 0x3560;
                if (lVar9 - lVar6 == 0) goto joined_r0x00102883;
              }
              lVar11 = local_f0[0] + lVar6;
              iVar4 = ASYNC_start_job(lVar11,*(undefined8 *)(lVar11 + 8),&local_e0,param_2,lVar11,
                                      0x3560);
              bio = _bio_err;
              if (iVar4 < 2) {
                if (-1 < iVar4) {
                  iVar10 = iVar10 + -1;
                  *(undefined8 *)(local_f0[0] + lVar6) = 0;
                  BIO_printf(bio,"Failure in the job\n");
                  ERR_print_errors(_bio_err);
                  bVar1 = true;
                  testmoderesult = 1;
                }
                goto LAB_001025f8;
              }
              if (iVar4 != 3) goto LAB_001025f8;
              if (local_e0 == -1) {
                bVar1 = true;
              }
              else {
                local_fc = local_fc + local_e0;
              }
              iVar10 = iVar10 + -1;
              *(undefined8 *)(local_f0[0] + lVar6) = 0;
              lVar6 = lVar6 + 0x3560;
            } while (lVar9 - lVar6 != 0);
joined_r0x00102883:
            if (iVar10 < 1) {
              if (!bVar1) goto LAB_001026f9;
              goto LAB_001027a1;
            }
          }
          goto LAB_001024e8;
        }
        piVar5 = __errno_location();
      } while (*piVar5 == 4);
      BIO_printf(_bio_err,"Failure in the select\n");
      ERR_print_errors(_bio_err);
LAB_00102797:
      testmoderesult = 1;
LAB_001027a1:
      local_fc = -1;
    }
  }
LAB_001026f9:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_fc;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 Time_F(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = app_tminterval(param_1,usertime);
  if ((int)param_1 != 1) {
    return uVar1;
  }
  alarm(0);
  return uVar1;
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



undefined4 strtoint_constprop_0(char *param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  long lVar2;
  undefined4 uVar3;
  long in_FS_OFFSET;
  char *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = (char *)0x0;
  piVar1 = __errno_location();
  *piVar1 = 0;
  lVar2 = strtol(param_1,&local_38,10);
  if (*piVar1 == 0) {
    uVar3 = 0;
    if ((((param_1 != local_38) && (*local_38 == '\0')) && (-1 < lVar2)) && (lVar2 < param_2)) {
      *param_3 = (int)lVar2;
      uVar3 = 1;
    }
  }
  else {
    uVar3 = 0;
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



byte * sstrsep_constprop_0(long *param_1)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  ulong uVar4;
  long lVar5;
  byte *pbVar6;
  undefined8 *puVar7;
  long in_FS_OFFSET;
  char local_118 [8];
  undefined8 auStack_110 [30];
  undefined8 local_20;
  long local_10;
  
  pbVar3 = (byte *)*param_1;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  stack0xfffffffffffffee9 = 0;
  local_20 = 0;
  puVar7 = auStack_110;
  for (lVar5 = 0x1f; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  local_118[0] = '\x01';
  uVar4 = (ulong)sep_1;
  if (sep_1 != 0) {
    pbVar6 = &sep_1;
    do {
      pbVar6 = pbVar6 + 1;
      local_118[uVar4] = '\x01';
      uVar4 = (ulong)*pbVar6;
    } while (*pbVar6 != 0);
  }
  bVar1 = *pbVar3;
  cVar2 = local_118[bVar1];
  pbVar6 = pbVar3;
  while (cVar2 == '\0') {
    pbVar6 = pbVar6 + 1;
    *param_1 = (long)pbVar6;
    bVar1 = *pbVar6;
    cVar2 = local_118[bVar1];
  }
  if (bVar1 != 0) {
    *pbVar6 = 0;
    *param_1 = *param_1 + 1;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pbVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 do_multi(int param_1,int param_2)

{
  int iVar1;
  __pid_t _Var2;
  byte bVar8;
  void *ptr;
  FILE *__stream;
  long lVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  uint *puVar7;
  double *pdVar9;
  double *pdVar10;
  char *pcVar11;
  ulong uVar12;
  undefined4 uVar13;
  ulong uVar14;
  long in_FS_OFFSET;
  bool bVar15;
  double dVar16;
  int local_460;
  int local_45c;
  char *local_458;
  int local_450;
  int local_44c;
  undefined4 local_448;
  char local_444;
  char local_443 [1027];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ptr = (void *)app_malloc((long)param_1 * 4,"fd buffer for do_multi");
  if (0 < param_1) {
    uVar14 = 0;
    do {
      uVar12 = uVar14;
      iVar1 = pipe(&local_450);
      if (iVar1 == -1) {
        pcVar11 = "pipe failure\n";
LAB_001034b0:
        BIO_printf(_bio_err,pcVar11);
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      fflush(_stdout);
      BIO_ctrl(_bio_err,0xb,0,(void *)0x0);
      _Var2 = fork();
      if (_Var2 == 0) {
        close(local_450);
        close(1);
        iVar1 = dup(local_44c);
        if (iVar1 == -1) {
          pcVar11 = "dup failed\n";
          goto LAB_001034b0;
        }
        close(local_44c);
        mr = 1;
        usertime = 0;
        CRYPTO_free(ptr);
        uVar13 = 0;
        goto LAB_00102cc1;
      }
      close(local_44c);
      *(int *)((long)ptr + uVar12 * 4) = local_450;
      __printf_chk(2,"Forked child %d\n",uVar12 & 0xffffffff);
      uVar14 = uVar12 + 1;
    } while ((long)param_1 != uVar12 + 1);
    uVar14 = 0;
LAB_00102d08:
    __stream = fdopen(*(int *)((long)ptr + uVar14 * 4),"r");
    if (__stream != (FILE *)0x0) {
LAB_00102d30:
      do {
        pcVar11 = fgets((char *)&local_448,0x400,__stream);
        if (pcVar11 == (char *)0x0) goto LAB_00102f08;
        local_458 = strchr((char *)&local_448,10);
        if (local_458 != (char *)0x0) {
          *local_458 = '\0';
        }
        if ((char)local_448 == '+') {
          __printf_chk(2,"Got: %s from %d\n",&local_448,uVar14 & 0xffffffff);
          if (((short)local_448 == 0x462b) && (local_448._2_1_ == ':')) {
            local_458 = (char *)((long)&local_448 + 3);
            uVar5 = sstrsep_constprop_0(&local_458);
            iVar1 = strtoint_constprop_0(uVar5,0x1f,&local_45c);
            if (iVar1 != 0) {
              sstrsep_constprop_0(&local_458);
              if (0 < param_2) {
                lVar3 = (long)local_45c;
                pdVar9 = (double *)(&results + lVar3 * 6);
                do {
                  pdVar10 = pdVar9 + 1;
                  pcVar11 = (char *)sstrsep_constprop_0(&local_458);
                  dVar16 = strtod(pcVar11,(char **)0x0);
                  *pdVar9 = dVar16 + *pdVar9;
                  pdVar9 = pdVar10;
                } while (pdVar10 != (double *)(&results + (long)param_2 + lVar3 * 6));
              }
            }
            goto LAB_00102d30;
          }
          if (local_448 == 0x3a32462b) {
            local_458 = &local_444;
            uVar5 = sstrsep_constprop_0(&local_458);
            iVar1 = strtoint_constprop_0(uVar5,7,&local_460);
            if (iVar1 != 0) {
              sstrsep_constprop_0(&local_458);
              pcVar11 = (char *)sstrsep_constprop_0(&local_458);
              dVar16 = strtod(pcVar11,(char **)0x0);
              lVar3 = (long)local_460;
              (&rsa_results)[lVar3 * 4] = dVar16 + (double)(&rsa_results)[lVar3 * 4];
              pcVar11 = (char *)sstrsep_constprop_0(&local_458);
              dVar16 = strtod(pcVar11,(char **)0x0);
              (&DAT_00113a28)[lVar3 * 4] = dVar16 + (double)(&DAT_00113a28)[lVar3 * 4];
              pcVar11 = (char *)sstrsep_constprop_0(&local_458);
              dVar16 = strtod(pcVar11,(char **)0x0);
              (&DAT_00113a30)[lVar3 * 4] = dVar16 + (double)(&DAT_00113a30)[lVar3 * 4];
              pcVar11 = (char *)sstrsep_constprop_0(&local_458);
              dVar16 = strtod(pcVar11,(char **)0x0);
              (&DAT_00113a38)[lVar3 * 4] = dVar16 + (double)(&DAT_00113a38)[lVar3 * 4];
            }
            goto LAB_00102d30;
          }
          if (local_448 == 0x3a33462b) {
            local_458 = &local_444;
            uVar5 = sstrsep_constprop_0(&local_458);
            iVar1 = strtoint_constprop_0(uVar5,2,&local_460);
            if (iVar1 == 0) goto LAB_00102d30;
            sstrsep_constprop_0(&local_458);
            pcVar11 = (char *)sstrsep_constprop_0(&local_458);
            dVar16 = strtod(pcVar11,(char **)0x0);
            puVar6 = &dsa_results;
            lVar3 = (long)local_460 << 4;
          }
          else if (local_448 == 0x3a34462b) {
            local_458 = &local_444;
            uVar5 = sstrsep_constprop_0(&local_458);
            iVar1 = strtoint_constprop_0(uVar5,0x16,&local_460);
            if (iVar1 == 0) goto LAB_00102d30;
            sstrsep_constprop_0(&local_458);
            pcVar11 = (char *)sstrsep_constprop_0(&local_458);
            dVar16 = strtod(pcVar11,(char **)0x0);
            puVar6 = &ecdsa_results;
            lVar3 = (long)local_460 << 4;
          }
          else {
            if (local_448 == 0x3a35462b) {
              local_458 = &local_444;
              uVar5 = sstrsep_constprop_0(&local_458);
              iVar1 = strtoint_constprop_0(uVar5,0x18,&local_460);
              if (iVar1 != 0) {
                sstrsep_constprop_0(&local_458);
                pcVar11 = (char *)sstrsep_constprop_0(&local_458);
                dVar16 = strtod(pcVar11,(char **)0x0);
                (&ecdh_results)[local_460] = dVar16 + (double)(&ecdh_results)[local_460];
              }
              goto LAB_00102d30;
            }
            if (local_448 == 0x3a36462b) {
              local_458 = &local_444;
              uVar5 = sstrsep_constprop_0(&local_458);
              iVar1 = strtoint_constprop_0(uVar5,2,&local_460);
              if (iVar1 == 0) goto LAB_00102d30;
              sstrsep_constprop_0(&local_458);
              sstrsep_constprop_0(&local_458);
              pcVar11 = (char *)sstrsep_constprop_0(&local_458);
              dVar16 = strtod(pcVar11,(char **)0x0);
              puVar6 = &eddsa_results;
              lVar3 = (long)local_460 << 4;
            }
            else {
              if (local_448 != 0x3a37462b) {
                if (local_448 == 0x3a38462b) {
                  local_458 = &local_444;
                  uVar5 = sstrsep_constprop_0(&local_458);
                  iVar1 = strtoint_constprop_0(uVar5,5,&local_460);
                  if (iVar1 != 0) {
                    sstrsep_constprop_0(&local_458);
                    pcVar11 = (char *)sstrsep_constprop_0(&local_458);
                    dVar16 = strtod(pcVar11,(char **)0x0);
                    (&ffdh_results)[local_460] = dVar16 + (double)(&ffdh_results)[local_460];
                  }
                  goto LAB_00102d30;
                }
                if (local_448 == 0x3a39462b) {
                  local_458 = &local_444;
                  uVar5 = sstrsep_constprop_0(&local_458);
                  iVar1 = strtoint_constprop_0(uVar5,0x6f,&local_460);
                  if (iVar1 == 0) goto LAB_00102d30;
                  pcVar11 = (char *)sstrsep_constprop_0(&local_458);
                  dVar16 = strtod(pcVar11,(char **)0x0);
                  puVar6 = &kems_results;
                }
                else {
                  if ((local_448 != 0x3031462b) || (local_444 != ':')) {
                    if (((short)local_448 != 0x482b) || (local_448._2_1_ != ':')) {
                      BIO_printf(_bio_err,"Unknown type \'%s\' from child %d\n",&local_448,
                                 uVar14 & 0xffffffff);
                    }
                    goto LAB_00102d30;
                  }
                  local_458 = local_443;
                  uVar5 = sstrsep_constprop_0(&local_458);
                  iVar1 = strtoint_constprop_0(uVar5,0x6f,&local_460);
                  if (iVar1 == 0) goto LAB_00102d30;
                  pcVar11 = (char *)sstrsep_constprop_0(&local_458);
                  dVar16 = strtod(pcVar11,(char **)0x0);
                  puVar6 = &sigs_results;
                }
                pdVar9 = (double *)(puVar6 + (long)local_460 * 3);
                *pdVar9 = dVar16 + *pdVar9;
                pcVar11 = (char *)sstrsep_constprop_0(&local_458);
                dVar16 = strtod(pcVar11,(char **)0x0);
                pdVar9[1] = dVar16 + pdVar9[1];
                pcVar11 = (char *)sstrsep_constprop_0(&local_458);
                dVar16 = strtod(pcVar11,(char **)0x0);
                pdVar9[2] = dVar16 + pdVar9[2];
                goto LAB_00102d30;
              }
              local_458 = &local_444;
              uVar5 = sstrsep_constprop_0(&local_458);
              iVar1 = strtoint_constprop_0(uVar5,1,&local_460);
              if (iVar1 == 0) goto LAB_00102d30;
              sstrsep_constprop_0(&local_458);
              sstrsep_constprop_0(&local_458);
              pcVar11 = (char *)sstrsep_constprop_0(&local_458);
              dVar16 = strtod(pcVar11,(char **)0x0);
              puVar6 = &sm2_results;
              lVar3 = (long)local_460 << 4;
            }
          }
          pdVar9 = (double *)((long)puVar6 + lVar3);
          *pdVar9 = dVar16 + *pdVar9;
          pcVar11 = (char *)sstrsep_constprop_0(&local_458);
          dVar16 = strtod(pcVar11,(char **)0x0);
          pdVar9[1] = dVar16 + pdVar9[1];
          goto LAB_00102d30;
        }
        BIO_printf(_bio_err,"Don\'t understand line \'%s\' from child %d\n");
      } while( true );
    }
    puVar7 = (uint *)__errno_location();
    BIO_printf(_bio_err,"fdopen failure with 0x%x\n",(ulong)*puVar7);
    CRYPTO_free(ptr);
    goto LAB_001033d5;
  }
  CRYPTO_free(ptr);
  goto LAB_001033d5;
LAB_00102f08:
  fclose(__stream);
  bVar15 = uVar14 == uVar12;
  uVar14 = uVar14 + 1;
  if (bVar15) goto LAB_00103359;
  goto LAB_00102d08;
LAB_00103359:
  iVar1 = 0;
  CRYPTO_free(ptr);
  do {
    while (_Var2 = wait(&local_458), _Var2 == -1) {
      piVar4 = __errno_location();
      if (*piVar4 != 4) {
        uVar13 = 1;
        BIO_printf(_bio_err,"Waitng for child failed with 0x%x\n");
        goto LAB_00102cc1;
      }
    }
    if ((((ulong)local_458 & 0x7f) == 0) && (bVar8 = (byte)((ulong)local_458 >> 8), bVar8 != 0)) {
      BIO_printf(_bio_err,"Child exited with %d\n",(ulong)bVar8);
    }
    else if ('\x01' < (char)(((byte)local_458 & 0x7f) + 1)) {
      BIO_printf(_bio_err,"Child terminated by signal %d\n");
    }
    iVar1 = iVar1 + 1;
  } while (param_1 != iVar1);
LAB_001033d5:
  uVar13 = 1;
LAB_00102cc1:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar13;
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
      if (((run == 0) || (testmode != 0)) || (iVar4 == 0x7fffffff)) goto LAB_001035b2;
    }
    iVar4 = -1;
  }
LAB_001035b2:
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
            goto LAB_001036f9;
          }
          iVar2 = EVP_Digest(d,(long)*(int *)(lengths + (ulong)testnum * 4),local_78,(uint *)0x0,
                             local_80,(ENGINE *)0x0);
          if (iVar2 == 0) goto LAB_001037f0;
          iVar1 = iVar1 + 1;
        } while ((run != 0) && (iVar2 = 0x7fffffff, testmode == 0));
      }
      ctx = (EVP_MD_CTX *)0x0;
    }
    else {
      ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
      if (ctx == (EVP_MD_CTX *)0x0) {
LAB_001037f0:
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
LAB_001036f9:
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
  EVP_Digest_loop_isra_0(&_LC75,param_1);
  return;
}



void EVP_Digest_MDC2_loop(undefined8 param_1)

{
  EVP_Digest_loop_isra_0(&_LC76,param_1);
  return;
}



void EVP_Digest_MD4_loop(undefined8 param_1)

{
  EVP_Digest_loop_isra_0(&_LC77,param_1);
  return;
}



void MD5_loop(undefined8 param_1)

{
  EVP_Digest_loop_isra_0(&_LC78,param_1);
  return;
}



void SHA1_loop(undefined8 param_1)

{
  EVP_Digest_loop_isra_0(&_LC79,param_1);
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

void multiblock_speed(EVP_CIPHER *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  uint uVar2;
  uchar *buf;
  uchar *out;
  EVP_CIPHER_CTX *ctx;
  uchar *key;
  int *piVar3;
  int *piVar4;
  char *format;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  long in_FS_OFFSET;
  double dVar11;
  int *local_e8;
  undefined8 *local_b0;
  int local_9c;
  uchar *local_98;
  uchar *local_90;
  long local_88;
  undefined4 local_80;
  uchar local_78 [16];
  undefined1 local_68 [40];
  long local_40;
  
  lVar5 = (long)param_2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == 0) {
    piVar3 = (int *)&DAT_00116c20;
    lVar5 = 0x20000;
    iVar8 = 5;
    local_e8 = &mblengths_list_0;
  }
  else {
    piVar3 = &local_9c;
    iVar8 = 1;
    local_e8 = piVar3;
  }
  piVar4 = local_e8;
  local_9c = param_2;
  buf = (uchar *)app_malloc(lVar5,"multiblock input buffer");
  out = (uchar *)app_malloc((long)(*piVar3 + 0x400),"multiblock output buffer");
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
    lVar5 = EVP_CIPHER_get0_name(param_1);
    if (lVar5 == 0) {
      app_bail_out("failed to get cipher name\n");
    }
    local_e8._0_4_ = 1;
    local_b0 = &results;
    piVar3 = piVar4 + iVar8;
    puVar6 = &results;
    piVar9 = piVar4;
    do {
      print_message(lVar5,*piVar9,*param_3);
      app_tminterval(0,usertime);
      uVar2 = run;
      if (run != 0) {
        uVar2 = 0;
        do {
          while( true ) {
            if ((run == 0) || ((int)((-(uint)(testmode == 0) & 0x7ffffffe) + 1) <= (int)uVar2))
            goto LAB_00103c65;
            lVar7 = (long)*piVar9;
            aad._0_8_ = 0;
            aad._8_4_ = _LC94;
            aad[0xc] = 0;
            local_98 = (uchar *)0x0;
            local_90 = aad;
            local_80 = 8;
            local_88 = lVar7;
            iVar1 = EVP_CIPHER_CTX_ctrl(ctx,0x19,0x20,&local_98);
            if (0 < iVar1) break;
            iVar1 = RAND_bytes(buf,0x10);
            if (iVar1 < 1) {
              app_bail_out("error setting random bytes\n");
            }
            lVar7 = lVar7 + 0x10;
            uVar2 = uVar2 + 1;
            aad[0xb] = (undefined1)((ulong)lVar7 >> 8);
            aad[0xc] = (undefined1)lVar7;
            iVar1 = EVP_CIPHER_CTX_ctrl(ctx,0x16,0xd,aad);
            local_e8._0_4_ = EVP_Cipher(ctx,out,buf,iVar1 + (int)lVar7);
            if (run == 0) goto LAB_00103c65;
          }
          uVar2 = uVar2 + 1;
          local_98 = out;
          local_90 = buf;
          local_88 = lVar7;
          EVP_CIPHER_CTX_ctrl(ctx,0x1a,0x20,&local_98);
        } while (run != 0);
      }
LAB_00103c65:
      dVar11 = (double)app_tminterval(1,usertime);
      alarm(0);
      format = "%d %s ops in %.2fs\n";
      if (mr != 0) {
        format = "+R:%d:%s:%f\n";
      }
      BIO_printf(_bio_err,format,dVar11,(ulong)uVar2,&_LC96);
      if (((int)local_e8 < 1) && (mr == 0)) {
        BIO_printf(_bio_err,"Error performing cipher op\n");
      }
      piVar10 = piVar9 + 1;
      puVar6[0x96] = ((double)(int)uVar2 / dVar11) * (double)*piVar9;
      puVar6 = puVar6 + 1;
      piVar9 = piVar10;
    } while (piVar10 != piVar3);
    if (mr == 0) {
      fwrite("The \'numbers\' are in 1000s of bytes per second processed.\n",1,0x3a,_stdout);
      fwrite("type                    ",1,0x18,_stdout);
      do {
        iVar1 = *piVar4;
        piVar4 = piVar4 + 1;
        __fprintf_chk(_stdout,2,"%7d bytes",iVar1);
      } while (piVar4 != piVar3);
      fputc(10,_stdout);
      __fprintf_chk(_stdout,2,"%-24s",lVar5);
      do {
        if (__LC106 < (double)local_b0[0x96]) {
          __fprintf_chk((double)local_b0[0x96] / __LC107,_stdout,2," %11.2fk");
        }
        else {
          __fprintf_chk(_stdout,2," %11.2f ");
        }
        local_b0 = local_b0 + 1;
      } while (local_b0 != &results + iVar8);
    }
    else {
      fwrite(&_LC98,1,2,_stdout);
      do {
        iVar1 = *piVar4;
        piVar4 = piVar4 + 1;
        __fprintf_chk(_stdout,2,&_LC99,iVar1);
      } while (piVar4 != piVar3);
      fputc(10,_stdout);
      __fprintf_chk(_stdout,2,"+F:%d:%s",0x19,lVar5);
      do {
        puVar6 = local_b0 + 0x96;
        local_b0 = local_b0 + 1;
        __fprintf_chk(*puVar6,_stdout,2,":%.2f");
      } while (&results + iVar8 != local_b0);
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
LAB_00104117:
    ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_name(0,&_LC110,0);
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
        iVar1 = OSSL_PARAM_BLD_push_BN(lVar2,&_LC111,a_01);
        if ((iVar1 == 0) || (iVar1 = OSSL_PARAM_BLD_push_BN(lVar2,&_LC112,a_02), iVar1 == 0)) {
LAB_001041db:
          lVar4 = 0;
        }
        else {
          iVar1 = OSSL_PARAM_BLD_push_BN(lVar2,&_LC113,a_03);
          lVar4 = 0;
          if (iVar1 != 0) {
            iVar1 = OSSL_PARAM_BLD_push_BN(lVar2,&_LC114,a);
            if (((iVar1 == 0) || (iVar1 = OSSL_PARAM_BLD_push_BN(lVar2,&_LC115,a_00), iVar1 == 0))
               || (lVar4 = OSSL_PARAM_BLD_to_param(lVar2), lVar4 == 0)) goto LAB_001041db;
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
      goto LAB_0010426b;
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
      goto LAB_00104117;
    }
    if (param_1 == 0x200) {
      len = 0x40;
      iVar1 = 0x41;
      local_50 = dsa512_q;
      s_00 = dsa512_p;
      local_58 = dsa512_g;
      s_01 = dsa512_pub;
      s = dsa512_priv;
      goto LAB_00104117;
    }
  }
  uVar3 = 0;
LAB_0010426b:
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
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  undefined8 uVar14;
  EVP_PKEY_CTX *pEVar15;
  undefined8 uVar16;
  char *pcVar17;
  byte *pbVar18;
  void *__s;
  long lVar19;
  ulong uVar20;
  undefined *puVar21;
  code *pcVar22;
  EVP_CIPHER_CTX *pEVar23;
  uchar *puVar24;
  BIGNUM *a;
  EVP_PKEY *pEVar25;
  EVP_PKEY *peer;
  EVP_PKEY_CTX *pEVar26;
  long lVar27;
  long lVar28;
  void *pvVar29;
  EVP_PKEY_CTX *ctx;
  EVP_MD *pEVar30;
  byte bVar31;
  byte *pbVar32;
  undefined8 *puVar33;
  size_t sVar34;
  undefined4 *puVar35;
  long *plVar36;
  long *plVar37;
  long *plVar38;
  undefined8 *puVar39;
  void *pvVar40;
  size_t *psVar41;
  undefined1 *puVar42;
  uint uVar43;
  byte *pbVar44;
  char *pcVar45;
  undefined8 *puVar46;
  int iVar47;
  undefined8 *puVar48;
  ulong uVar49;
  void *pvVar50;
  undefined **ppuVar51;
  long *plVar52;
  double *pdVar53;
  undefined4 *puVar54;
  char cVar55;
  uint uVar56;
  ulong uVar57;
  long in_FS_OFFSET;
  bool bVar58;
  byte bVar59;
  double dVar60;
  long *local_438;
  undefined8 *local_430;
  long local_428;
  uint local_41c;
  long local_418;
  char *local_400;
  undefined8 local_3f8;
  uint local_3f0;
  int local_3ec;
  CONF *local_3e8;
  void *local_3e0;
  void *local_3d8;
  int local_390;
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
  EVP_PKEY *local_310;
  EVP_PKEY *local_308;
  EVP_PKEY *local_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined1 local_2c8 [16];
  undefined1 local_2b8 [16];
  undefined1 local_2a8 [16];
  undefined1 local_298 [16];
  undefined1 local_288 [16];
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
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
  char local_1d8 [11];
  undefined4 uStack_1cd;
  undefined4 uStack_1c9;
  undefined2 local_1c5;
  char local_1c3;
  char local_1c2 [10];
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [16];
  undefined1 local_198 [112];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [15];
  undefined1 uStack_c9;
  undefined1 auStack_c8 [15];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [15];
  undefined1 uStack_59;
  undefined1 auStack_58 [15];
  long local_40;
  
  bVar59 = 0;
  uVar56 = 6;
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
  uStack_1cd = 0;
  local_2f8 = __LC155;
  uStack_2f0 = _UNK_00117b48;
  local_2d8 = _LC157;
  uStack_1c9 = 0;
  local_1c5 = 0;
  local_1c3 = '\0';
  local_1c2[0] = '\0';
  local_1c2[1] = '\0';
  local_1c2[2] = '\0';
  local_1c2[3] = '\0';
  local_1c2[4] = '\0';
  local_1c2[5] = '\0';
  local_1c2[6] = '\0';
  local_1c2[7] = '\0';
  local_1c2[8] = '\0';
  local_2e8 = _LC157;
  uStack_2e0 = _UNK_00117b58;
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
  local_d8 = SUB1615((undefined1  [16])0x0,0);
  local_68 = SUB1615((undefined1  [16])0x0,0);
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
  uStack_c9 = 0;
  auStack_c8 = SUB1615((undefined1  [16])0x0,1);
  local_b8 = (undefined1  [16])0x0;
  local_a8 = (undefined1  [16])0x0;
  local_98 = (undefined1  [16])0x0;
  local_88 = (undefined1  [16])0x0;
  local_78 = (undefined1  [16])0x0;
  uStack_59 = 0;
  auStack_58 = SUB1615((undefined1  [16])0x0,1);
  uVar14 = opt_init(param_1,param_2,speed_options);
  bVar6 = false;
  bVar5 = false;
  iVar13 = 2;
  iVar10 = 0;
  local_41c = 0;
  iVar11 = 0;
  bVar58 = false;
  local_3f8 = 0;
  local_3e8 = (CONF *)0x0;
LAB_00104588:
  iVar7 = opt_next();
joined_r0x0010458f:
  if (iVar7 == 0) {
    uVar43 = 0;
    local_428 = OPENSSL_sk_new(kems_cmp);
    uVar16 = app_get0_libctx();
    EVP_KEM_do_all_provided(uVar16,collect_kem,local_428);
    kems_algs_len = 0;
    goto LAB_00104d7c;
  }
  if (iVar7 < 0x5df) {
    if (0x5dc < iVar7) {
      iVar7 = opt_rand(iVar7);
      if (iVar7 == 0) goto LAB_001045e0;
      goto LAB_00104588;
    }
    switch(iVar7) {
    default:
      goto LAB_00104588;
    case 1:
      __s = (void *)0x0;
      func_0x00119428(speed_options);
      local_400 = (char *)0x0;
      local_3f0 = 0;
      local_3ec = 0;
      local_3f8 = 0;
      goto LAB_00104bc8;
    case 2:
      usertime = 0;
      goto LAB_00104588;
    case 3:
      if (local_1c2[3] != '\0') {
        BIO_printf(_bio_err,"%s: -evp option cannot be used more than once\n",uVar14);
        break;
      }
      ERR_set_mark();
      uVar16 = func_0x00119430();
      iVar7 = opt_cipher_silent(uVar16,&local_338);
      if (iVar7 == 0) {
        uVar16 = func_0x00119430();
        iVar7 = have_md(uVar16);
        if (iVar7 != 0) {
          evp_md_name = (undefined *)func_0x00119430();
        }
      }
      if ((local_338 != (EVP_CIPHER *)0x0) || (evp_md_name != (undefined *)0x0))
      goto code_r0x00104c40;
      func_0x00119488();
      uVar16 = func_0x00119430();
      BIO_printf(_bio_err,"%s: %s is an unknown cipher or digest\n",uVar14,uVar16);
      goto LAB_00104660;
    case 4:
      uVar16 = func_0x00119430();
      iVar7 = have_md(uVar16);
      if (iVar7 == 0) {
        uVar16 = func_0x00119430();
        BIO_printf(_bio_err,"%s: %s is an unknown digest\n",uVar14,uVar16);
        goto LAB_00104660;
      }
      evp_mac_mdname = (undefined *)func_0x00119430();
      local_1d8[9] = '\x01';
      goto LAB_00104588;
    case 5:
      decrypt = 1;
      goto LAB_00104588;
    case 6:
      local_3f8 = func_0x00119430();
      goto LAB_00104588;
    case 7:
      iVar10 = func_0x00119460();
      if (iVar10 < 0) {
        BIO_printf(_bio_err,"%s: multi argument too large\n",uVar14);
code_r0x00104e80:
        local_390 = 0;
        goto code_r0x00104b60;
      }
      goto LAB_00104588;
    case 8:
      mr = 1;
      goto LAB_00104588;
    case 9:
      bVar58 = true;
      goto LAB_00104588;
    case 10:
      iVar11 = func_0x00119460();
      if (iVar11 < 0x41) goto LAB_00104588;
      BIO_printf(_bio_err,"%s: Maximum offset is %d\n",uVar14,0x40);
      break;
    case 0xb:
      local_41c = func_0x00119460();
      if (local_41c < 100000) {
        iVar7 = func_0x00119468();
        if (iVar7 != 0) goto LAB_00104588;
        BIO_printf(_bio_err,"%s: async_jobs specified but async not supported\n",uVar14);
        if (testmode != 0) goto code_r0x00104e80;
      }
      else {
        BIO_printf(_bio_err,"%s: too many async_jobs\n",uVar14);
      }
      break;
    case -1:
      break;
    }
    BIO_printf(_bio_err,"%s: Use -help for summary.\n",uVar14);
    goto LAB_00104660;
  }
  switch(iVar7) {
  case 0x641:
  case 0x642:
  case 0x643:
  case 0x644:
    iVar7 = func_0x001193f8(iVar7);
    if (iVar7 != 0) goto LAB_00104588;
    break;
  default:
    goto LAB_00104588;
  case 0x646:
    uVar16 = func_0x00119430();
    local_3e8 = (CONF *)func_0x00119470(uVar16);
    if (local_3e8 != (CONF *)0x0) goto LAB_00104588;
    break;
  case 0x647:
    iVar13 = func_0x00119460();
    goto LAB_00104588;
  case 0x648:
    uVar12 = func_0x00119460();
    local_2d8 = CONCAT44(uVar12,uVar12);
    local_2f8 = CONCAT44(uVar12,uVar12);
    uStack_2f0 = CONCAT44(uVar12,uVar12);
    local_2e8 = CONCAT44(uVar12,uVar12);
    uStack_2e0 = CONCAT44(uVar12,uVar12);
    goto LAB_00104588;
  case 0x649:
    local_340 = func_0x00119460();
    uVar56 = 1;
    lengths = (undefined *)&local_340;
    goto LAB_00104588;
  case 0x64a:
    aead = 1;
    goto LAB_00104588;
  case 0x64b:
    uVar16 = func_0x00119430();
    iVar7 = have_cipher(uVar16);
    if (iVar7 == 0) {
      uVar16 = func_0x00119430();
      BIO_printf(_bio_err,"%s: %s is an unknown cipher\n",uVar14,uVar16);
      goto LAB_00104660;
    }
    evp_mac_ciphername = (undefined *)func_0x00119430();
    local_1c2[6] = '\x01';
    goto LAB_00104588;
  case 0x64c:
    domlock = 1;
    goto LAB_00104588;
  case 0x64d:
    testmode = 1;
    goto LAB_00104588;
  case 0x64e:
    bVar5 = true;
    goto LAB_00104588;
  case 0x64f:
    bVar6 = true;
    goto LAB_00104588;
  }
LAB_001045e0:
  local_400 = (char *)0x0;
  __s = (void *)0x0;
  local_3f0 = 0;
  local_418 = 0;
  local_428 = 0;
  local_3ec = 0;
  local_3f8 = 0;
  local_390 = 1;
  goto LAB_001046ad;
LAB_00104d7c:
  uVar8 = OPENSSL_sk_num(local_428);
  if (uVar8 <= uVar43) goto LAB_0010515c;
  uVar16 = OPENSSL_sk_value(local_428,uVar43);
  pcVar17 = (char *)EVP_KEM_get0_name(uVar16);
  iVar7 = strcmp(pcVar17,"RSA");
  if (iVar7 == 0) {
    if (0x6e < kems_algs_len + 7) {
LAB_00105c00:
      BIO_printf(_bio_err,"Too many KEMs registered. Change MAX_KEM_NUM.\n");
LAB_00105c1d:
      local_3ec = 0;
      __s = (void *)0x0;
      local_400 = (char *)0x0;
      local_3f0 = 0;
      local_418 = 0;
      local_3f8 = 0;
      goto LAB_001046a2;
    }
    ppuVar51 = &rsa_choices;
    uVar49 = kems_algs_len;
    do {
      pcVar17 = *ppuVar51;
      kems_algs_len = uVar49 + 1;
      local_128[uVar49] = 1;
      ppuVar51 = ppuVar51 + 2;
      pcVar17 = CRYPTO_strdup(pcVar17,"apps/speed.c",0x8ae);
      (&kems_algname)[uVar49] = pcVar17;
      uVar49 = kems_algs_len;
    } while (ppuVar51 != (undefined **)&DAT_00117410);
  }
  else {
    pcVar17 = (char *)EVP_KEM_get0_name(uVar16);
    uVar49 = kems_algs_len;
    if (((*pcVar17 == 'E') && (pcVar17[1] == 'C')) && (pcVar17[2] == '\0')) {
      if (0x6e < kems_algs_len + 3) {
        BIO_printf(_bio_err,"Too many KEMs registered. Change MAX_KEM_NUM.\n");
        goto LAB_00105c1d;
      }
      local_128[kems_algs_len] = 1;
      kems_algs_len = kems_algs_len + 1;
      pcVar17 = CRYPTO_strdup("ECP-256","apps/speed.c",0x8b7);
      (&kems_algname)[uVar49] = pcVar17;
      uVar49 = kems_algs_len;
      local_128[kems_algs_len] = 1;
      kems_algs_len = kems_algs_len + 1;
      pcVar17 = CRYPTO_strdup("ECP-384","apps/speed.c",0x8b9);
      (&kems_algname)[uVar49] = pcVar17;
      uVar49 = kems_algs_len;
      local_128[kems_algs_len] = 1;
      kems_algs_len = kems_algs_len + 1;
      pcVar17 = CRYPTO_strdup("ECP-521","apps/speed.c",0x8bb);
      (&kems_algname)[uVar49] = pcVar17;
    }
    else {
      if (0x6e < kems_algs_len + 1) goto LAB_00105c00;
      local_128[kems_algs_len] = 1;
      pcVar17 = (char *)EVP_KEM_get0_name(uVar16);
      uVar49 = kems_algs_len;
      kems_algs_len = kems_algs_len + 1;
      pcVar17 = CRYPTO_strdup(pcVar17,"apps/speed.c",0x8c3);
      (&kems_algname)[uVar49] = pcVar17;
    }
  }
  uVar43 = uVar43 + 1;
  goto LAB_00104d7c;
LAB_00108f1d:
  pEVar15 = EVP_PKEY_CTX_new(local_308,(ENGINE *)0x0);
  psVar41[uVar49 + 0xf] = (size_t)pEVar15;
  *psVar41 = psVar41[-2];
  if ((((EVP_PKEY_CTX *)psVar41[(ulong)testnum + 0xf] == (EVP_PKEY_CTX *)0x0) ||
      (iVar10 = EVP_PKEY_encrypt_init((EVP_PKEY_CTX *)psVar41[(ulong)testnum + 0xf]), iVar10 < 1))
     || (iVar10 = EVP_PKEY_encrypt((EVP_PKEY_CTX *)psVar41[(ulong)testnum + 0xf],
                                   (uchar *)psVar41[-8],psVar41,(uchar *)psVar41[-9],0x24),
        iVar10 < 1)) goto LAB_00108322;
  psVar41 = psVar41 + 0x6ac;
  if (psVar41 == (size_t *)((long)__s + 0x58) + (long)local_430 * 0x6ac) {
    pkey_print_message("public","rsa encrypt",*(undefined4 *)(&DAT_00116d4c + (ulong)testnum * 0x10)
                       ,uVar12);
    app_tminterval(0,usertime);
    iVar10 = run_benchmark(local_41c,RSA_encrypt_loop,__s);
    dVar60 = (double)app_tminterval(1,usertime);
    alarm(0);
    pcVar17 = "+R3:%ld:%d:%.2f\n";
    if (mr == 0) {
      pcVar17 = "%ld %u bits public RSA encrypt ops in %.2fs\n";
    }
    BIO_printf(_bio_err,pcVar17,dVar60,(long)iVar10,
               (ulong)*(uint *)(&DAT_00116d4c + (ulong)testnum * 0x10));
    uVar49 = (ulong)testnum;
    (&DAT_00113a30)[uVar49 * 4] = (double)iVar10 / dVar60;
    pvVar40 = __s;
    goto LAB_0010937e;
  }
  uVar49 = (ulong)testnum;
  goto LAB_00108f1d;
LAB_0010937e:
  pEVar15 = EVP_PKEY_CTX_new(local_308,(ENGINE *)0x0);
  *(EVP_PKEY_CTX **)((long)pvVar40 + uVar49 * 8 + 0x108) = pEVar15;
  local_328 = *(size_t *)((long)pvVar40 + 0x48);
  pEVar15 = *(EVP_PKEY_CTX **)((long)pvVar40 + (ulong)testnum * 8 + 0x108);
  if (((pEVar15 == (EVP_PKEY_CTX *)0x0) || (iVar10 = EVP_PKEY_decrypt_init(pEVar15), iVar10 < 1)) ||
     (iVar10 = EVP_PKEY_decrypt(*(EVP_PKEY_CTX **)((long)pvVar40 + (ulong)testnum * 8 + 0x108),
                                *(uchar **)((long)pvVar40 + 0x10),&local_328,
                                *(uchar **)((long)pvVar40 + 0x18),*(size_t *)((long)pvVar40 + 0x58))
     , iVar10 < 1)) goto LAB_0010834d;
  pvVar40 = (void *)((long)pvVar40 + 0x3560);
  if (pvVar40 == pvVar50) {
    pkey_print_message("private","rsa decrypt",
                       *(undefined4 *)(&DAT_00116d4c + (ulong)testnum * 0x10),uVar12);
    app_tminterval(0,usertime);
    iVar10 = run_benchmark(local_41c,RSA_decrypt_loop,__s);
    dVar60 = (double)app_tminterval(1,usertime);
    alarm(0);
    pcVar17 = "+R4:%ld:%d:%.2f\n";
    if (mr == 0) {
      pcVar17 = "%ld %u bits private RSA decrypt ops in %.2fs\n";
    }
    BIO_printf(_bio_err,pcVar17,dVar60,(long)iVar10,
               (ulong)*(uint *)(&DAT_00116d4c + (ulong)testnum * 0x10));
    uVar49 = (ulong)testnum;
    (&DAT_00113a38)[uVar49 * 4] = (double)iVar10 / dVar60;
    if (1 < (long)iVar10) goto LAB_001083ab;
    goto LAB_0010837e;
  }
  uVar49 = (ulong)testnum;
  goto LAB_0010937e;
  while (pvVar29 = (void *)((long)pvVar29 + 0x3560), pvVar29 != pvVar50) {
LAB_0010b845:
    iVar10 = EVP_DigestSign(*(undefined8 *)((long)pvVar29 + (ulong)testnum * 8 + 0x3a0),
                            *(undefined8 *)((long)pvVar29 + 0x18),(long)pvVar29 + 0x50,
                            *(undefined8 *)((long)pvVar29 + 0x10),0x14);
    pvVar40 = __s;
    if (iVar10 == 0) {
      lVar19 = 1;
      BIO_printf(_bio_err,"SM2 sign failure.  No SM2 sign will be done.\n");
      ERR_print_errors(_bio_err);
      uVar49 = (ulong)testnum;
      testmoderesult = 1;
      goto LAB_0010bbc0;
    }
  }
  pkey_print_message(&_LC249,(&sm2_curves_9)[(ulong)testnum * 3],(&DAT_00116dbc)[(ulong)testnum * 6]
                     ,uStack_2e0 & 0xffffffff);
  Time_F(0);
  iVar10 = run_benchmark(local_41c,SM2_sign_loop,__s);
  lVar19 = (long)iVar10;
  dVar60 = (double)Time_F(1);
  pcVar17 = "%ld %u bits %s sign ops in %.2fs \n";
  if (mr != 0) {
    pcVar17 = "+R12:%ld:%u:%s:%.2f\n";
  }
  BIO_printf(_bio_err,pcVar17,lVar19,(ulong)(uint)(&DAT_00116dbc)[(ulong)testnum * 6],
             (&sm2_curves_9)[(ulong)testnum * 3]);
  uVar49 = (ulong)testnum;
  (&sm2_results)[uVar49 * 2] = (double)iVar10 / dVar60;
LAB_0010bbc0:
  do {
    iVar10 = EVP_DigestVerify(*(undefined8 *)((long)pvVar40 + uVar49 * 8 + 0x3a8),
                              *(undefined8 *)((long)pvVar40 + 0x18),
                              *(undefined8 *)((long)pvVar40 + 0x50),
                              *(undefined8 *)((long)pvVar40 + 0x10),0x14);
    if (iVar10 != 1) {
      BIO_printf(_bio_err,"SM2 verify failure.  No SM2 verify will be done.\n");
      ERR_print_errors(_bio_err);
      cVar55 = '\0';
      testmoderesult = 1;
      goto LAB_0010bcd2;
    }
    pvVar40 = (void *)((long)pvVar40 + 0x3560);
    uVar49 = (ulong)testnum;
  } while (pvVar40 != pvVar50);
  pkey_print_message("verify",(&sm2_curves_9)[uVar49 * 3],(&DAT_00116dbc)[uVar49 * 6],
                     uStack_2e0 & 0xffffffff);
  Time_F(0);
  iVar10 = run_benchmark(local_41c,SM2_verify_loop,__s);
  dVar60 = (double)Time_F(1);
  pcVar17 = "%ld %u bits %s verify ops in %.2fs\n";
  if (mr != 0) {
    pcVar17 = "+R13:%ld:%u:%s:%.2f\n";
  }
  BIO_printf(_bio_err,pcVar17,(long)iVar10,(ulong)(uint)(&DAT_00116dbc)[(ulong)testnum * 6],
             (&sm2_curves_9)[(ulong)testnum * 3]);
  (&DAT_00113788)[(ulong)testnum * 2] = (double)iVar10 / dVar60;
LAB_0010bcd2:
  uVar43 = testnum + 1;
  if (lVar19 < 2) {
    if (uVar43 == 0) goto LAB_00109bb4;
    uVar43 = testnum + 2;
  }
  testnum = uVar43;
  if (uVar43 != 0) goto LAB_00109bb9;
  goto LAB_00109ba0;
LAB_00109bb9:
  uVar49 = 0;
  testnum = 0;
  do {
    uVar43 = testnum;
    if (*(char *)((long)&local_224 + uVar49) != '\0') {
      pvVar40 = __s;
      do {
        local_318 = (EVP_PKEY *)0x0;
        local_310 = (EVP_PKEY *)0x0;
        uVar49 = ERR_peek_error();
        if (uVar49 != 0) {
          BIO_printf(_bio_err,"WARNING: the error queue contains previous unhandled errors.\n");
          ERR_print_errors(_bio_err);
          testmoderesult = 1;
        }
        local_318 = EVP_PKEY_new();
        if ((local_318 == (EVP_PKEY *)0x0) ||
           (local_310 = EVP_PKEY_new(), local_310 == (EVP_PKEY *)0x0)) {
          pcVar17 = "Error while initialising EVP_PKEY (out of memory?).\n";
LAB_0010b032:
          BIO_printf(_bio_err,pcVar17);
          ERR_print_errors(_bio_err);
          testmoderesult = 1;
          uVar43 = testnum;
          goto LAB_00109f3c;
        }
        pEVar15 = EVP_PKEY_CTX_new_id(0x1c,(ENGINE *)0x0);
        if (pEVar15 == (EVP_PKEY_CTX *)0x0) {
LAB_0010b0e9:
          pcVar17 = "Error while allocating EVP_PKEY_CTX.\n";
          goto LAB_0010b032;
        }
        iVar10 = EVP_PKEY_keygen_init(pEVar15);
        if (iVar10 < 1) {
          pcVar17 = "Error while initialising EVP_PKEY_CTX.\n";
          goto LAB_0010b032;
        }
        iVar10 = EVP_PKEY_CTX_set_dh_nid
                           (pEVar15,*(undefined4 *)(ffdh_params_2 + (ulong)testnum * 0x10 + 8));
        if (iVar10 < 1) {
          pcVar17 = "Error setting DH key size for keygen.\n";
          goto LAB_0010b032;
        }
        iVar10 = EVP_PKEY_keygen(pEVar15,&local_318);
        if ((iVar10 < 1) || (iVar10 = EVP_PKEY_keygen(pEVar15,&local_310), iVar10 < 1)) {
          pcVar17 = "FFDH key generation failure.\n";
          goto LAB_0010b032;
        }
        EVP_PKEY_CTX_free(pEVar15);
        pEVar15 = EVP_PKEY_CTX_new(local_318,(ENGINE *)0x0);
        if (pEVar15 == (EVP_PKEY_CTX *)0x0) goto LAB_0010b0e9;
        iVar10 = EVP_PKEY_derive_init(pEVar15);
        if (iVar10 < 1) {
          pcVar17 = "FFDH derivation context init failure.\n";
          goto LAB_0010b032;
        }
        iVar10 = EVP_PKEY_derive_set_peer(pEVar15,local_310);
        if (iVar10 < 1) {
          pcVar17 = "Assigning peer key for derivation failed.\n";
          goto LAB_0010b032;
        }
        iVar10 = EVP_PKEY_derive(pEVar15,(uchar *)0x0,(size_t *)&local_308);
        if (iVar10 < 1) {
          pcVar17 = "Checking size of shared secret failed.\n";
          goto LAB_0010b032;
        }
        if ((EVP_PKEY *)0x400 < local_308) {
          BIO_printf(_bio_err,"Assertion failure: shared secret too large.\n");
          uVar43 = testnum;
          goto LAB_00109f3c;
        }
        iVar10 = EVP_PKEY_derive(pEVar15,*(uchar **)((long)pvVar40 + 0x4b0),(size_t *)&local_308);
        if (iVar10 < 1) {
          pcVar17 = "Shared secret derive failure.\n";
          goto LAB_0010b032;
        }
        pEVar26 = EVP_PKEY_CTX_new(local_310,(ENGINE *)0x0);
        if (pEVar26 == (EVP_PKEY_CTX *)0x0) goto LAB_0010b0e9;
        iVar10 = EVP_PKEY_derive_init(pEVar26);
        if ((iVar10 < 1) || (iVar10 = EVP_PKEY_derive_set_peer(pEVar26,local_318), iVar10 < 1)) {
LAB_0010b058:
          BIO_printf(_bio_err,"FFDH computation failure.\n");
          uVar43 = testnum;
          goto LAB_00109f3c;
        }
        iVar10 = EVP_PKEY_derive(pEVar26,(uchar *)0x0,(size_t *)&local_300);
        if ((iVar10 < 1) ||
           ((iVar10 = EVP_PKEY_derive(pEVar26,*(uchar **)((long)pvVar40 + 0x4b8),
                                      (size_t *)&local_300), iVar10 < 1 || (local_300 != local_308))
           )) goto LAB_0010b058;
        iVar10 = CRYPTO_memcmp(*(void **)((long)pvVar40 + 0x4b0),*(void **)((long)pvVar40 + 0x4b8),
                               (size_t)local_308);
        if (iVar10 != 0) {
          pcVar17 = "FFDH computations don\'t match.\n";
          goto LAB_0010b032;
        }
        *(EVP_PKEY_CTX **)((long)pvVar40 + (ulong)testnum * 8 + 0x488) = pEVar15;
        pvVar40 = (void *)((long)pvVar40 + 0x3560);
        EVP_PKEY_free(local_318);
        local_318 = (EVP_PKEY *)0x0;
        EVP_PKEY_free(local_310);
        local_310 = (EVP_PKEY *)0x0;
        EVP_PKEY_CTX_free(pEVar26);
      } while (pvVar40 != pvVar50);
      pkey_print_message(&_LC246,&_LC186,
                         *(undefined4 *)(ffdh_params_2 + (ulong)testnum * 0x10 + 0xc),
                         uStack_2e0._4_4_);
      Time_F(0);
      iVar10 = run_benchmark(local_41c,FFDH_derive_key_loop,__s);
      dVar60 = (double)Time_F(1);
      pcVar17 = "%ld %u-bits FFDH ops in %.2fs\n";
      if (mr != 0) {
        pcVar17 = "+R14:%ld:%d:%.2f\n";
      }
      BIO_printf(_bio_err,pcVar17,(long)iVar10,
                 (ulong)*(uint *)(ffdh_params_2 + (ulong)testnum * 0x10 + 0xc));
      uVar43 = testnum;
      (&ffdh_results)[testnum] = (double)iVar10 / dVar60;
      if ((long)iVar10 < 2) {
LAB_00109f3c:
        uVar20 = (ulong)uVar43;
        uVar49 = 5;
        if (4 < uVar20) {
          uVar49 = uVar20;
        }
        __memset_chk((long)&local_224 + uVar20,0,5 - uVar20,uVar49 - uVar20);
      }
    }
    testnum = uVar43 + 1;
    uVar49 = (ulong)testnum;
  } while (testnum < 5);
  testnum = 0;
  uVar49 = 0;
  if (kems_algs_len != 0) {
    do {
      pcVar17 = (char *)(&kems_algname)[uVar49];
      if ((local_128[uVar49] != '\0') && (local_3e0 = __s, !(bool)(bVar5 ^ 1))) {
        do {
          local_318 = (EVP_PKEY *)0x0;
          local_2c8 = (undefined1  [16])0x0;
          local_2b8 = (undefined1  [16])0x0;
          local_2a8 = (undefined1  [16])0x0;
          local_298 = (undefined1  [16])0x0;
          local_288 = (undefined1  [16])0x0;
          sVar34 = strlen(pcVar17);
          if (sVar34 < 0x68) {
            iVar10 = __isoc99_sscanf(pcVar17,"rsa%u%s",local_33c,local_198);
            if (iVar10 != 1) goto LAB_0010a1b2;
            uVar49 = ERR_peek_error();
            if (uVar49 != 0) {
              BIO_printf(_bio_err,"WARNING: the error queue contains previous unhandled errors.\n");
              ERR_print_errors(_bio_err);
              testmoderesult = 1;
            }
            iVar10 = 1;
            pcVar45 = "RSA";
            OSSL_PARAM_construct_uint(&local_378,&_LC271,local_33c);
            puVar39 = &local_378;
            puVar35 = (undefined4 *)local_2c8;
            for (lVar19 = 10; lVar19 != 0; lVar19 = lVar19 + -1) {
              *puVar35 = *(undefined4 *)puVar39;
              puVar39 = (undefined8 *)((long)puVar39 + (ulong)bVar59 * -8 + 4);
              puVar35 = puVar35 + (ulong)bVar59 * -2 + 1;
            }
            uVar14 = app_get0_propq();
            bVar58 = true;
          }
          else {
LAB_0010a1b2:
            if ((*pcVar17 == 'E') && (pcVar17[1] == 'C')) {
              uVar49 = ERR_peek_error();
              if (uVar49 != 0) {
                BIO_printf(_bio_err,"WARNING: the error queue contains previous unhandled errors.\n"
                          );
                ERR_print_errors(_bio_err);
                testmoderesult = 1;
              }
              bVar58 = true;
              OSSL_PARAM_construct_utf8_string(&local_378,"group",pcVar17 + 2,0);
              puVar39 = &local_378;
              puVar35 = (undefined4 *)local_2c8;
              for (lVar19 = 10; lVar19 != 0; lVar19 = lVar19 + -1) {
                *puVar35 = *(undefined4 *)puVar39;
                puVar39 = (undefined8 *)((long)puVar39 + (ulong)bVar59 * -8 + 4);
                puVar35 = puVar35 + (ulong)bVar59 * -2 + 1;
              }
              iVar10 = 2;
              uVar14 = app_get0_propq();
              pcVar45 = "EC";
            }
            else {
              iVar10 = strcmp(pcVar17,"X25519");
              if (iVar10 == 0) {
                uVar49 = ERR_peek_error();
                iVar10 = 3;
              }
              else {
                iVar10 = strcmp(pcVar17,"X448");
                if (iVar10 == 0) {
                  uVar49 = ERR_peek_error();
                  iVar10 = 4;
                }
                else {
                  uVar49 = ERR_peek_error();
                  iVar10 = 0;
                }
              }
              if (uVar49 != 0) {
                BIO_printf(_bio_err,"WARNING: the error queue contains previous unhandled errors.\n"
                          );
                ERR_print_errors(_bio_err);
                testmoderesult = 1;
              }
              uVar14 = app_get0_propq();
              bVar58 = false;
              pcVar45 = pcVar17;
            }
          }
          uVar16 = app_get0_libctx();
          pEVar15 = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_name(uVar16,pcVar45,uVar14);
          if (((pEVar15 == (EVP_PKEY_CTX *)0x0) ||
              (iVar13 = EVP_PKEY_keygen_init(pEVar15), iVar13 < 1)) ||
             ((bVar58 && (iVar13 = EVP_PKEY_CTX_set_params(pEVar15,local_2c8), iVar13 < 1)))) {
            BIO_printf(_bio_err,"Error initializing keygen ctx for %s.\n",pcVar17);
LAB_0010a4b6:
            ERR_print_errors(_bio_err);
            testmoderesult = 1;
            EVP_PKEY_free(local_318);
            uVar49 = (ulong)testnum;
            goto LAB_0010a4df;
          }
          iVar13 = EVP_PKEY_keygen(pEVar15,&local_318);
          if (iVar13 < 1) {
            BIO_printf(_bio_err,"Error while generating KEM EVP_PKEY.\n");
            goto LAB_0010a4b6;
          }
          uVar14 = app_get0_propq();
          pEVar25 = local_318;
          uVar16 = app_get0_libctx();
          lVar19 = EVP_PKEY_CTX_new_from_pkey(uVar16,pEVar25,uVar14);
          if ((lVar19 == 0) || (iVar13 = EVP_PKEY_encapsulate_init(lVar19,0), iVar13 < 1)) {
LAB_0010ae25:
            BIO_printf(_bio_err,"Error while initializing encaps data structs for %s.\n",pcVar17);
            goto LAB_0010a4b6;
          }
          if (iVar10 == 1) {
            iVar13 = EVP_PKEY_CTX_set_kem_op(lVar19,"RSASVE");
            if (iVar13 < 1) goto LAB_0010ae25;
            uVar43 = 0xffffffff;
          }
          else {
            uVar43 = iVar10 - 2;
            if (uVar43 < 3) {
              iVar13 = EVP_PKEY_CTX_set_kem_op(lVar19,"DHKEM");
              if (iVar13 < 1) goto LAB_0010ae25;
            }
            else {
              uVar43 = 0xfffffffe;
            }
          }
          iVar13 = EVP_PKEY_encapsulate(lVar19,0,&local_308,0,&local_310);
          if (iVar13 < 1) goto LAB_0010ae25;
          lVar27 = app_malloc(local_308,"encaps result");
          pvVar40 = (void *)app_malloc(local_310,"encaps secret");
          if ((lVar27 == 0) || (pvVar40 == (void *)0x0)) {
            BIO_printf(_bio_err,"MemAlloc error in encaps for %s.\n",pcVar17);
            goto LAB_0010a4b6;
          }
          iVar13 = EVP_PKEY_encapsulate(lVar19,lVar27,&local_308,pvVar40,&local_310);
          if (iVar13 < 1) {
            BIO_printf(_bio_err,"Encaps error for %s.\n",pcVar17);
            goto LAB_0010a4b6;
          }
          uVar14 = app_get0_propq();
          pEVar25 = local_318;
          uVar16 = app_get0_libctx();
          lVar28 = EVP_PKEY_CTX_new_from_pkey(uVar16,pEVar25,uVar14);
          if ((lVar28 == 0) || (iVar13 = EVP_PKEY_decapsulate_init(lVar28,0), iVar13 < 1)) {
LAB_0010ad7f:
            BIO_printf(_bio_err,"Error while initializing decaps data structs for %s.\n",pcVar17);
            goto LAB_0010a4b6;
          }
          if (iVar10 == 1) {
            iVar10 = EVP_PKEY_CTX_set_kem_op(lVar28,"RSASVE");
joined_r0x0010ad79:
            if (iVar10 < 1) goto LAB_0010ad7f;
          }
          else if (uVar43 < 3) {
            iVar10 = EVP_PKEY_CTX_set_kem_op(lVar28,"DHKEM");
            goto joined_r0x0010ad79;
          }
          iVar10 = EVP_PKEY_decapsulate(lVar28,0,&local_300,lVar27,local_308);
          if (iVar10 < 1) goto LAB_0010ad7f;
          pvVar29 = (void *)app_malloc(local_300,"KEM decaps secret");
          if (pvVar29 == (void *)0x0) {
            BIO_printf(_bio_err,"MemAlloc failure in decaps for %s.\n",pcVar17);
            goto LAB_0010a4b6;
          }
          iVar10 = EVP_PKEY_decapsulate(lVar28,pvVar29,&local_300,lVar27,local_308);
          pEVar25 = local_310;
          if (((iVar10 < 1) || (local_300 != local_310)) ||
             (iVar10 = memcmp(pvVar40,pvVar29,(size_t)local_310), uVar43 = testnum, iVar10 != 0)) {
            BIO_printf(_bio_err,"Decaps error for %s.\n",pcVar17);
            goto LAB_0010a4b6;
          }
          *(EVP_PKEY_CTX **)((long)local_3e0 + (ulong)testnum * 8 + 0x4d0) = pEVar15;
          *(long *)((long)local_3e0 + (ulong)uVar43 * 8 + 0x848) = lVar19;
          *(long *)((long)local_3e0 + (ulong)uVar43 * 8 + 0xbc0) = lVar28;
          *(EVP_PKEY **)((long)local_3e0 + (ulong)uVar43 * 8 + 0x12b0) = pEVar25;
          *(EVP_PKEY **)((long)local_3e0 + (ulong)uVar43 * 8 + 0xf38) = local_308;
          *(long *)((long)local_3e0 + (ulong)uVar43 * 8 + 0x1628) = lVar27;
          *(void **)((long)local_3e0 + (ulong)uVar43 * 8 + 0x19a0) = pvVar40;
          *(void **)((long)local_3e0 + (ulong)uVar43 * 8 + 0x1d18) = pvVar29;
          EVP_PKEY_free(local_318);
          uVar49 = local_2d8;
          local_3e0 = (void *)((long)local_3e0 + 0x3560);
        } while (local_3e0 != pvVar50);
        kskey_print_message(pcVar17,"keygen",local_2d8 & 0xffffffff);
        Time_F(0);
        iVar10 = run_benchmark(local_41c,KEM_keygen_loop,__s);
        dVar60 = (double)Time_F(1);
        pcVar45 = "%ld %s KEM keygen ops in %.2fs\n";
        if (mr != 0) {
          pcVar45 = "+R15:%ld:%s:%.2f\n";
        }
        BIO_printf(_bio_err,pcVar45,(long)iVar10,pcVar17);
        (&kems_results)[(ulong)testnum * 3] = (double)iVar10 / dVar60;
        kskey_print_message(pcVar17,"encaps",uVar49 & 0xffffffff);
        Time_F(0);
        iVar10 = run_benchmark(local_41c,KEM_encaps_loop,__s);
        dVar60 = (double)Time_F(1);
        pcVar45 = "%ld %s KEM encaps ops in %.2fs\n";
        if (mr != 0) {
          pcVar45 = "+R16:%ld:%s:%.2f\n";
        }
        BIO_printf(_bio_err,pcVar45,(long)iVar10,pcVar17);
        (&DAT_00112988)[(ulong)testnum * 3] = (double)iVar10 / dVar60;
        kskey_print_message(pcVar17,"decaps",uVar49 & 0xffffffff);
        Time_F(0);
        iVar10 = run_benchmark(local_41c,KEM_decaps_loop,__s);
        dVar60 = (double)Time_F(1);
        pcVar45 = "%ld %s KEM decaps ops in %.2fs\n";
        if (mr != 0) {
          pcVar45 = "+R17:%ld:%s:%.2f\n";
        }
        BIO_printf(_bio_err,pcVar45,(long)iVar10,pcVar17);
        uVar49 = (ulong)testnum;
        (&DAT_00112990)[uVar49 * 3] = (double)iVar10 / dVar60;
        if ((long)iVar10 < 2) {
LAB_0010a4df:
          uVar20 = 0x6f;
          if (0x6e < uVar49) {
            uVar20 = uVar49;
          }
          __memset_chk(local_128 + uVar49,0,0x6f - uVar49,uVar20 - uVar49);
        }
      }
      testnum = testnum + 1;
      uVar49 = (ulong)testnum;
    } while (uVar49 < kems_algs_len);
  }
  testnum = 0;
  uVar49 = 0;
  if (sigs_algs_len != 0) {
    do {
      pcVar17 = (char *)(&sigs_algname)[uVar49];
      if ((local_b8[uVar49] != '\0') && (bVar6)) {
        local_3d8 = __s;
        do {
          local_318 = (EVP_PKEY *)0x0;
          local_310 = (EVP_PKEY *)0x0;
          local_2c8 = (undefined1  [16])0x0;
          local_2b8 = (undefined1  [16])0x0;
          local_2a8 = (undefined1  [16])0x0;
          local_298 = (undefined1  [16])0x0;
          local_288 = (undefined1  [16])0x0;
          local_1b8 = (undefined1  [16])0x0;
          local_1a8 = (undefined1  [16])0x0;
          uVar49 = ERR_peek_error();
          if (uVar49 != 0) {
            BIO_printf(_bio_err,"WARNING: the error queue contains previous unhandled errors.\n");
            ERR_print_errors(_bio_err);
            testmoderesult = 1;
          }
          sVar34 = strlen(pcVar17);
          if (0x67 < sVar34) {
LAB_0010a5fd:
            if (((*pcVar17 != 'd') || (pcVar17[1] != 's')) ||
               (iVar10 = (byte)pcVar17[2] - 0x61, iVar10 != 0)) {
              uVar14 = app_get0_propq();
              iVar10 = 0;
              pcVar45 = pcVar17;
              goto LAB_0010a614;
            }
LAB_0010b309:
            pEVar15 = EVP_PKEY_CTX_new_id(0x74,(ENGINE *)0x0);
            if ((pEVar15 != (EVP_PKEY_CTX *)0x0) &&
               (iVar13 = EVP_PKEY_paramgen_init(pEVar15), 0 < iVar13)) {
              uVar49 = strtol(pcVar17 + 3,(char **)0x0,10);
              iVar13 = EVP_PKEY_CTX_set_dsa_paramgen_bits(pEVar15,uVar49 & 0xffffffff);
              if ((iVar13 < 1) ||
                 (((iVar13 = EVP_PKEY_paramgen(pEVar15,&local_310), iVar13 < 1 ||
                   (pEVar15 = EVP_PKEY_CTX_new(local_310,(ENGINE *)0x0),
                   pEVar15 == (EVP_PKEY_CTX *)0x0)) ||
                  (iVar13 = EVP_PKEY_keygen_init(pEVar15), iVar13 < 1)))) goto LAB_0010b382;
              goto LAB_0010a633;
            }
LAB_0010b382:
            BIO_printf(_bio_err,"Error initializing classic keygen ctx for %s.\n",pcVar17);
            goto LAB_0010b159;
          }
          iVar10 = __isoc99_sscanf(pcVar17,"rsa%u%s",local_33c,local_198);
          if (iVar10 != 1) goto LAB_0010a5fd;
          OSSL_PARAM_construct_uint(&local_378,&_LC271,local_33c);
          puVar39 = &local_378;
          puVar35 = (undefined4 *)local_2c8;
          for (lVar19 = 10; lVar19 != 0; lVar19 = lVar19 + -1) {
            *puVar35 = *(undefined4 *)puVar39;
            puVar39 = (undefined8 *)((long)puVar39 + (ulong)bVar59 * -8 + 4);
            puVar35 = puVar35 + (ulong)bVar59 * -2 + 1;
          }
          iVar13 = strncmp(pcVar17,"dsa",3);
          iVar10 = 1;
          if (iVar13 == 0) goto LAB_0010b309;
          uVar14 = app_get0_propq();
          pcVar45 = "RSA";
          iVar10 = 1;
LAB_0010a614:
          uVar16 = app_get0_libctx();
          pEVar15 = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_name(uVar16,pcVar45,uVar14);
          if (pEVar15 == (EVP_PKEY_CTX *)0x0) {
LAB_0010b138:
            BIO_printf(_bio_err,"Error initializing keygen ctx for %s.\n",pcVar17);
LAB_0010b159:
            ERR_print_errors(_bio_err);
            testmoderesult = 1;
            EVP_PKEY_free(local_318);
            uVar49 = (ulong)testnum;
            goto LAB_0010b182;
          }
LAB_0010a633:
          iVar13 = EVP_PKEY_keygen_init(pEVar15);
          if ((iVar13 < 1) ||
             ((iVar10 != 0 && (iVar13 = EVP_PKEY_CTX_set_params(pEVar15,local_2c8), iVar13 < 1))))
          goto LAB_0010b138;
          iVar13 = EVP_PKEY_keygen(pEVar15,&local_318);
          if (iVar13 < 1) {
            BIO_printf(_bio_err,"Error while generating signature EVP_PKEY for %s.\n",pcVar17);
            goto LAB_0010b159;
          }
          uVar14 = app_get0_propq();
          pEVar25 = local_318;
          uVar16 = app_get0_libctx();
          pEVar26 = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(uVar16,pEVar25,uVar14);
          if (((pEVar26 == (EVP_PKEY_CTX *)0x0) ||
              (iVar13 = EVP_PKEY_sign_init(pEVar26), iVar13 < 1)) ||
             (((iVar10 == 1 && (iVar13 = EVP_PKEY_CTX_set_rsa_padding(pEVar26), iVar13 < 1)) ||
              (iVar13 = EVP_PKEY_sign(pEVar26,(uchar *)0x0,(size_t *)&local_308,local_1b8,0x20),
              iVar13 < 1)))) {
            BIO_printf(_bio_err,"Error while initializing signing data structs for %s.\n",pcVar17);
            goto LAB_0010b159;
          }
          local_300 = local_308;
          puVar24 = (uchar *)app_malloc(local_308,"signature buffer");
          if (puVar24 == (uchar *)0x0) {
            BIO_printf(_bio_err,"MemAlloc error in sign for %s.\n",pcVar17);
            goto LAB_0010b159;
          }
          iVar13 = EVP_PKEY_sign(pEVar26,puVar24,(size_t *)&local_300,local_1b8,0x20);
          if (iVar13 < 1) {
            BIO_printf(_bio_err,"Signing error for %s.\n",pcVar17);
            goto LAB_0010b159;
          }
          local_1b8 = (undefined1  [16])0x0;
          local_1a8 = (undefined1  [16])0x0;
          uVar14 = app_get0_propq();
          pEVar25 = local_318;
          uVar16 = app_get0_libctx();
          ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(uVar16,pEVar25,uVar14);
          if (((ctx == (EVP_PKEY_CTX *)0x0) || (iVar13 = EVP_PKEY_verify_init(ctx), iVar13 < 1)) ||
             ((iVar10 == 1 && (iVar10 = EVP_PKEY_CTX_set_rsa_padding(ctx,1), iVar10 < 1)))) {
            BIO_printf(_bio_err,"Error while initializing verify data structs for %s.\n",pcVar17);
            goto LAB_0010b159;
          }
          iVar10 = EVP_PKEY_verify(ctx,puVar24,(size_t)local_300,local_1b8,0x20);
          if (iVar10 < 1) {
            BIO_printf(_bio_err,"Verify error for %s.\n",pcVar17);
            goto LAB_0010b159;
          }
          iVar10 = EVP_PKEY_verify(ctx,puVar24,(size_t)local_300,local_1b8,0x20);
          uVar43 = testnum;
          if (iVar10 < 1) {
            BIO_printf(_bio_err,"Verify 2 error for %s.\n",pcVar17);
            goto LAB_0010b159;
          }
          pvVar40 = (void *)((long)local_3d8 + 0x3560);
          *(EVP_PKEY_CTX **)((long)local_3d8 + (ulong)testnum * 8 + 0x2090) = pEVar15;
          *(EVP_PKEY_CTX **)((long)local_3d8 + (ulong)uVar43 * 8 + 0x2408) = pEVar26;
          *(EVP_PKEY_CTX **)((long)local_3d8 + (ulong)uVar43 * 8 + 0x2780) = ctx;
          *(EVP_PKEY **)((long)local_3d8 + (ulong)uVar43 * 8 + 11000) = local_308;
          *(uchar **)((long)local_3d8 + (ulong)uVar43 * 8 + 0x31e8) = puVar24;
          *(EVP_PKEY **)((long)local_3d8 + (ulong)uVar43 * 8 + 0x2e70) = local_300;
          EVP_PKEY_free(local_318);
          local_3d8 = pvVar40;
        } while (pvVar40 != pvVar50);
        uVar12 = local_2d8._4_4_;
        kskey_print_message(pcVar17,"keygen",local_2d8._4_4_);
        Time_F(0);
        iVar10 = run_benchmark(local_41c,SIG_keygen_loop,__s);
        dVar60 = (double)Time_F(1);
        pcVar45 = "%ld %s signature keygen ops in %.2fs\n";
        if (mr != 0) {
          pcVar45 = "+R18:%ld:%s:%.2f\n";
        }
        BIO_printf(_bio_err,pcVar45,(long)iVar10,pcVar17);
        (&sigs_results)[(ulong)testnum * 3] = (double)iVar10 / dVar60;
        kskey_print_message(pcVar17,"signs",uVar12);
        Time_F(0);
        iVar10 = run_benchmark(local_41c,SIG_sign_loop,__s);
        dVar60 = (double)Time_F(1);
        pcVar45 = "%ld %s signature sign ops in %.2fs\n";
        if (mr != 0) {
          pcVar45 = "+R19:%ld:%s:%.2f\n";
        }
        BIO_printf(_bio_err,pcVar45,(long)iVar10,pcVar17);
        (&DAT_00111b88)[(ulong)testnum * 3] = (double)iVar10 / dVar60;
        kskey_print_message(pcVar17,"verify",uVar12);
        Time_F(0);
        iVar10 = run_benchmark(local_41c,SIG_verify_loop,__s);
        dVar60 = (double)Time_F(1);
        pcVar45 = "%ld %s signature verify ops in %.2fs\n";
        if (mr != 0) {
          pcVar45 = "+R20:%ld:%s:%.2f\n";
        }
        BIO_printf(_bio_err,pcVar45,(long)iVar10,pcVar17);
        uVar49 = (ulong)testnum;
        (&DAT_00111b90)[uVar49 * 3] = (double)iVar10 / dVar60;
        if ((long)iVar10 < 2) {
LAB_0010b182:
          uVar20 = 0x6f;
          if (0x6e < uVar49) {
            uVar20 = uVar49;
          }
          __memset_chk(local_b8 + uVar49,0,0x6f - uVar49,uVar20 - uVar49);
        }
      }
      testnum = testnum + 1;
      uVar49 = (ulong)testnum;
    } while (uVar49 < sigs_algs_len);
  }
  if (mr == 0) {
    uVar14 = OpenSSL_version(7);
    __printf_chk(2,"version: %s\n",uVar14);
    pcVar17 = (char *)OpenSSL_version(2);
    puts(pcVar17);
    pcVar17 = BN_options();
    __printf_chk(2,"options: %s\n",pcVar17);
    pcVar17 = (char *)OpenSSL_version(1);
    puts(pcVar17);
    pcVar17 = (char *)OpenSSL_version(9);
    puts(pcVar17);
    if (iVar11 == 0) goto LAB_00105fcf;
    if (mr != 0) goto LAB_0010aa64;
    puts("The \'numbers\' are in 1000s of bytes per second processed.");
    __printf_chk(2,"type        ");
  }
  else {
    if (iVar11 == 0) goto LAB_00105fcf;
LAB_0010aa64:
    __printf_chk(2,&_LC98);
  }
  testnum = 0;
  if (uVar56 != 0) {
    do {
      pcVar17 = ":%d";
      if (mr == 0) {
        pcVar17 = "%7d bytes";
      }
      __printf_chk(2,pcVar17,*(undefined4 *)(lengths + (ulong)testnum * 4));
      testnum = testnum + 1;
    } while (testnum < uVar56);
  }
  putchar(10);
  goto LAB_00105fcf;
LAB_0010bf08:
  puVar54 = &DAT_00116dec;
  pdVar53 = (double *)&ecdsa_results;
  uVar49 = 0;
  testnum = 1;
  puVar35 = &DAT_00116dec;
  do {
    if (*(char *)((long)&local_218 + uVar49) != '\0') {
      if (testnum == 0) {
LAB_0010bf8f:
        if (mr == 0) {
          __printf_chk(_LC310 / *pdVar53,_LC310 / pdVar53[1],2,
                       "%4u bits ecdsa (%s) %8.4fs %8.4fs %8.1f %8.1f\n",*puVar35,
                       *(undefined8 *)(puVar35 + -3));
          goto LAB_0010bf58;
        }
      }
      else if (mr == 0) {
        __printf_chk(2,"%30ssign    verify    sign/s verify/s\n",&_LC308);
        testnum = 0;
        goto LAB_0010bf8f;
      }
      __printf_chk(*pdVar53,pdVar53[1],2,"+F4:%u:%u:%f:%f\n",uVar49 & 0xffffffff,*puVar35);
    }
LAB_0010bf58:
    uVar49 = uVar49 + 1;
    pdVar53 = pdVar53 + 2;
    puVar35 = puVar35 + 6;
  } while (uVar49 != 0x16);
  testnum = 1;
  uVar49 = 0;
  do {
    if (local_1f8[uVar49] != '\0') {
      if (testnum == 0) {
LAB_0010c083:
        if (mr == 0) {
          __printf_chk(_LC310 / (double)(&ecdh_results)[uVar49],(&ecdh_results)[uVar49],2,
                       "%4u bits ecdh (%s) %8.4fs %8.1f\n",*puVar54,*(undefined8 *)(puVar54 + -3));
          goto LAB_0010c052;
        }
      }
      else if (mr == 0) {
        __printf_chk(2,"%30sop      op/s\n",&_LC308);
        testnum = 0;
        goto LAB_0010c083;
      }
      __printf_chk((&ecdh_results)[uVar49],_LC310 / (double)(&ecdh_results)[uVar49],2,
                   "+F5:%u:%u:%f:%f\n",uVar49 & 0xffffffff,*puVar54);
    }
LAB_0010c052:
    uVar49 = uVar49 + 1;
    puVar54 = puVar54 + 6;
  } while (uVar49 != 0x18);
  testnum = 1;
  pdVar53 = (double *)&eddsa_results;
  ppuVar51 = &ed_curves_11;
  lVar27 = 0;
  cVar3 = (char)local_226;
  do {
    if (cVar3 != '\0') {
      if (testnum == 0) {
LAB_0010c1b0:
        if (mr == 0) {
          __printf_chk(_LC310 / *pdVar53,_LC310 / pdVar53[1],2,
                       "%4u bits EdDSA (%s) %8.4fs %8.4fs %8.1f %8.1f\n",
                       *(undefined4 *)((long)ppuVar51 + 0xc),*ppuVar51);
          goto LAB_0010c167;
        }
      }
      else if (mr == 0) {
        __printf_chk(2,"%30ssign    verify    sign/s verify/s\n",&_LC308);
        testnum = 0;
        goto LAB_0010c1b0;
      }
      __printf_chk(*pdVar53,pdVar53[1],2,"+F6:%u:%u:%s:%f:%f\n",lVar27,
                   *(undefined4 *)((long)ppuVar51 + 0xc),*ppuVar51);
    }
LAB_0010c167:
    pdVar53 = pdVar53 + 2;
    ppuVar51 = ppuVar51 + 3;
    if (lVar27 != 0) break;
    cVar3 = *(char *)((long)&local_226 + lVar19);
    lVar27 = lVar19;
  } while( true );
  testnum = 1;
  if (cVar55 != '\0') {
    if (mr == 0) {
      __printf_chk(2,"%30ssign    verify    sign/s verify/s\n",&_LC308);
      testnum = 0;
      if (mr == 0) {
        __printf_chk(_LC310 / sm2_results,_LC310 / DAT_00113788,2,
                     "%4u bits SM2 (%s) %8.4fs %8.4fs %8.1f %8.1f\n",0x100,"CurveSM2");
        goto LAB_0010c25e;
      }
    }
    __printf_chk(sm2_results,DAT_00113788,2,"+F7:%u:%u:%s:%f:%f\n",0,0x100,"CurveSM2");
  }
LAB_0010c25e:
  testnum = 1;
  puVar42 = ffdh_params_2;
  uVar49 = 0;
  do {
    if (*(char *)((long)&local_224 + uVar49) != '\0') {
      if (testnum == 0) {
LAB_0010c564:
        if (mr == 0) {
          __printf_chk(_LC310 / (double)(&ffdh_results)[uVar49],(&ffdh_results)[uVar49],2,
                       "%4u bits ffdh %8.4fs %8.1f\n",*(undefined4 *)(puVar42 + 0xc));
          goto LAB_0010c2b1;
        }
      }
      else if (mr == 0) {
        __printf_chk(2,"%23sop     op/s\n",&_LC308);
        testnum = 0;
        goto LAB_0010c564;
      }
      __printf_chk((&ffdh_results)[uVar49],_LC310 / (double)(&ffdh_results)[uVar49],2,
                   "+F8:%u:%u:%f:%f\n",uVar49 & 0xffffffff,*(undefined4 *)(puVar42 + 0xc));
    }
LAB_0010c2b1:
    uVar49 = uVar49 + 1;
    puVar42 = puVar42 + 0x10;
  } while (uVar49 != 5);
  testnum = 1;
  if (kems_algs_len != 0) {
    pdVar53 = (double *)&kems_results;
    uVar49 = 0;
    do {
      if ((local_128[uVar49] != '\0') && (bVar5)) {
        uVar14 = (&kems_algname)[uVar49];
        if (testnum == 0) {
LAB_0010c5d9:
          if (mr == 0) {
            __printf_chk(_LC310 / *pdVar53,_LC310 / pdVar53[1],_LC310 / pdVar53[2],2,
                         "%27s %8.6fs %8.6fs %8.6fs %9.1f %9.1f %9.1f\n",uVar14);
            goto LAB_0010c3cf;
          }
        }
        else if (mr == 0) {
          __printf_chk(2,"%31skeygen    encaps    decaps keygens/s  encaps/s  decaps/s\n",&_LC308);
          testnum = 0;
          goto LAB_0010c5d9;
        }
        __printf_chk(*pdVar53,pdVar53[1],pdVar53[2],2,"+F9:%u:%f:%f:%f\n",uVar49 & 0xffffffff);
      }
LAB_0010c3cf:
      uVar49 = uVar49 + 1;
      pdVar53 = pdVar53 + 3;
    } while (uVar49 < kems_algs_len);
  }
  local_400 = (char *)local_330;
  testnum = 1;
  if (sigs_algs_len != 0) {
    pdVar53 = (double *)&sigs_results;
    uVar49 = 0;
    do {
      if ((local_b8[uVar49] != '\0') && (bVar6)) {
        uVar14 = (&sigs_algname)[uVar49];
        if (testnum == 0) {
LAB_0010c4df:
          if (mr == 0) {
            __printf_chk(_LC310 / *pdVar53,_LC310 / pdVar53[1],_LC310 / pdVar53[2],2,
                         "%27s %8.6fs %8.6fs %8.6fs %9.1f %9.1f %9.1f\n",uVar14);
            goto LAB_0010c47e;
          }
        }
        else if (mr == 0) {
          __printf_chk(2,"%31skeygen     signs    verify keygens/s    sign/s  verify/s\n",&_LC308);
          testnum = 0;
          goto LAB_0010c4df;
        }
        __printf_chk(*pdVar53,pdVar53[1],pdVar53[2],2,"+F10:%u:%f:%f:%f\n",uVar49 & 0xffffffff);
      }
LAB_0010c47e:
      uVar49 = uVar49 + 1;
      pdVar53 = pdVar53 + 3;
    } while (uVar49 < sigs_algs_len);
  }
LAB_00104bc8:
  local_390 = testmode;
  if (testmode == 0) {
    local_418 = 0;
    local_428 = 0;
  }
  else {
    local_418 = 0;
    local_390 = testmoderesult;
    local_428 = 0;
  }
  goto LAB_001046ad;
code_r0x00104c40:
  ERR_pop_to_mark();
  local_1c2[3] = '\x01';
  iVar7 = opt_next();
  goto joined_r0x0010458f;
LAB_0010515c:
  uVar43 = 0;
  OPENSSL_sk_pop_free(local_428,EVP_KEM_free);
  local_418 = OPENSSL_sk_new(signatures_cmp);
  uVar16 = app_get0_libctx();
  EVP_SIGNATURE_do_all_provided(uVar16,collect_signatures,local_418);
  sigs_algs_len = 0;
  while (uVar8 = OPENSSL_sk_num(local_418), uVar43 < uVar8) {
    uVar16 = OPENSSL_sk_value(local_418,uVar43);
    pcVar17 = (char *)EVP_SIGNATURE_get0_name(uVar16);
    iVar7 = strcmp(pcVar17,"RSA");
    if (iVar7 == 0) {
      if (0x6e < sigs_algs_len + 7) {
LAB_00105dec:
        BIO_printf(_bio_err,"Too many signatures registered. Change MAX_SIG_NUM.\n");
        goto LAB_00105cb2;
      }
      ppuVar51 = &rsa_choices;
      uVar49 = sigs_algs_len;
      do {
        pcVar17 = *ppuVar51;
        sigs_algs_len = uVar49 + 1;
        local_b8[uVar49] = 1;
        ppuVar51 = ppuVar51 + 2;
        pcVar17 = CRYPTO_strdup(pcVar17,"apps/speed.c",0x8db);
        (&sigs_algname)[uVar49] = pcVar17;
        uVar49 = sigs_algs_len;
      } while (ppuVar51 != (undefined **)&DAT_00117410);
      uVar43 = uVar43 + 1;
    }
    else {
      iVar7 = strcmp(pcVar17,"DSA");
      uVar49 = sigs_algs_len;
      if (iVar7 == 0) {
        if (0x6e < sigs_algs_len + 2) {
          BIO_printf(_bio_err,"Too many signatures registered. Change MAX_SIG_NUM.\n");
          goto LAB_00105cb2;
        }
        local_b8[sigs_algs_len] = 1;
        uVar43 = uVar43 + 1;
        sigs_algs_len = sigs_algs_len + 1;
        pcVar17 = CRYPTO_strdup("dsa1024","apps/speed.c",0x8e7);
        (&sigs_algname)[uVar49] = pcVar17;
        uVar49 = sigs_algs_len;
        local_b8[sigs_algs_len] = 1;
        sigs_algs_len = sigs_algs_len + 1;
        pcVar17 = CRYPTO_strdup("dsa2048","apps/speed.c",0x8e7);
        (&sigs_algname)[uVar49] = pcVar17;
      }
      else {
        iVar7 = strcmp(pcVar17,"ED25519");
        if ((((((iVar7 != 0) && (iVar7 = strcmp(pcVar17,"ED448"), iVar7 != 0)) &&
              (iVar7 = strcmp(pcVar17,"ECDSA"), iVar7 != 0)) &&
             ((iVar7 = strcmp(pcVar17,"HMAC"), iVar7 != 0 &&
              (iVar7 = strcmp(pcVar17,"SIPHASH"), iVar7 != 0)))) &&
            (iVar7 = strcmp(pcVar17,"POLY1305"), iVar7 != 0)) &&
           ((iVar7 = strcmp(pcVar17,"CMAC"), iVar7 != 0 &&
            (iVar7 = strcmp(pcVar17,"SM2"), uVar49 = sigs_algs_len, iVar7 != 0)))) {
          if (0x6e < sigs_algs_len + 1) goto LAB_00105dec;
          local_b8[sigs_algs_len] = 1;
          sigs_algs_len = sigs_algs_len + 1;
          pcVar17 = CRYPTO_strdup(pcVar17,"apps/speed.c",0x8fb);
          (&sigs_algname)[uVar49] = pcVar17;
        }
        uVar43 = uVar43 + 1;
      }
    }
  }
  OPENSSL_sk_pop_free(local_418,EVP_SIGNATURE_free);
  iVar7 = opt_num_rest();
  local_438 = (long *)opt_rest();
  iVar9 = app_RAND_load();
  uVar20 = kems_algs_len;
  uVar49 = sigs_algs_len;
  if (iVar9 == 0) {
LAB_00104660:
    __s = (void *)0x0;
    local_400 = (char *)0x0;
    local_3f0 = 0;
    local_418 = 0;
    local_428 = 0;
    local_3ec = 0;
    local_3f8 = 0;
  }
  else {
    pcVar17 = (char *)*local_438;
    if (pcVar17 == (char *)0x0) {
      cVar55 = '\0';
    }
    else {
      cVar55 = '\0';
      do {
        ppuVar51 = &doit_choices;
        do {
          iVar9 = strcmp(pcVar17,*ppuVar51);
          if (iVar9 == 0) {
            bVar4 = true;
            local_1d8[*(uint *)(ppuVar51 + 1)] = '\x01';
            goto LAB_001054d0;
          }
          ppuVar51 = ppuVar51 + 2;
        } while (ppuVar51 != (undefined **)0x117690);
        bVar4 = false;
LAB_001054d0:
        iVar9 = strcmp(pcVar17,"des");
        if (iVar9 == 0) {
          bVar4 = true;
          local_1d8[10] = (char)_LC183;
          uStack_1cd._0_1_ = (char)((ushort)_LC183 >> 8);
        }
        iVar9 = strcmp(pcVar17,"sha");
        if (iVar9 == 0) {
          local_1d8[4] = '\x01';
          bVar4 = true;
          local_1d8[6] = '\x01';
          local_1d8[7] = '\x01';
        }
        iVar9 = strcmp(pcVar17,"openssl");
        cVar3 = *pcVar17;
        if (iVar9 == 0) {
          bVar4 = true;
        }
        if (((cVar3 == 'r') && (pcVar17[1] == 's')) && (pcVar17[2] == 'a')) {
          if (pcVar17[3] == '\0') {
            bVar4 = true;
            local_21f = 0x1010101;
            uStack_21b = 0x10101;
          }
          ppuVar51 = &rsa_choices;
          do {
            iVar9 = strcmp(pcVar17,*ppuVar51);
            if (iVar9 == 0) {
              bVar4 = true;
              *(undefined1 *)((long)&local_21f + (ulong)*(uint *)(ppuVar51 + 1)) = 1;
              break;
            }
            ppuVar51 = ppuVar51 + 2;
          } while (ppuVar51 != (undefined **)&DAT_00117410);
        }
        iVar9 = strncmp(pcVar17,"ffdh",4);
        if (iVar9 == 0) {
          if (pcVar17[4] == '\0') {
            local_220 = 1;
            bVar4 = true;
            local_224 = 0x1010101;
          }
          ppuVar51 = &ffdh_choices;
          do {
            iVar9 = strcmp(pcVar17,*ppuVar51);
            if (iVar9 == 0) {
              bVar4 = true;
              *(undefined1 *)((long)&local_224 + (ulong)*(uint *)(ppuVar51 + 1)) = 2;
              break;
            }
            ppuVar51 = ppuVar51 + 2;
          } while (ppuVar51 != (undefined **)&DAT_00117390);
        }
        if (((cVar3 == 'd') && (pcVar17[1] == 's')) && (pcVar17[2] == 'a')) {
          if (pcVar17[3] == '\0') {
            bVar4 = true;
            local_228 = 0x101;
          }
          iVar9 = strcmp(pcVar17,"dsa1024");
          if (iVar9 == 0) {
            lVar19 = 0;
          }
          else {
            iVar9 = strcmp(pcVar17,"dsa2048");
            if (iVar9 != 0) goto LAB_0010564c;
            lVar19 = 1;
          }
          *(undefined1 *)((long)&local_228 + lVar19) = 2;
          bVar4 = true;
        }
LAB_0010564c:
        iVar9 = strcmp(pcVar17,"aes");
        if (iVar9 == 0) {
          local_1c3 = '\x01';
          bVar4 = true;
          local_1c5 = 0x101;
        }
        iVar9 = strcmp(pcVar17,"camellia");
        if (iVar9 == 0) {
          local_1c2[2] = '\x01';
          bVar4 = true;
          local_1c2[0] = '\x01';
          local_1c2[1] = '\x01';
        }
        iVar9 = strncmp(pcVar17,"ecdsa",5);
        if (iVar9 == 0) {
          if (pcVar17[5] == '\0') {
            local_218 = CONCAT62(_UNK_00117b62,_LC183);
            bVar4 = true;
            uStack_210 = (undefined6)_UNK_00117b68;
            uStack_20a = 0x101;
            uStack_208 = 0x10101010101;
          }
          ppuVar51 = &ecdsa_choices;
          do {
            iVar9 = strcmp(pcVar17,*ppuVar51);
            if (iVar9 == 0) {
              bVar4 = true;
              *(undefined1 *)((long)&local_218 + (ulong)*(uint *)(ppuVar51 + 1)) = 2;
              break;
            }
            ppuVar51 = ppuVar51 + 2;
          } while (ppuVar51 != &ffdh_choices);
        }
        iVar9 = strncmp(pcVar17,"ecdh",4);
        if (iVar9 == 0) {
          if (pcVar17[4] == '\0') {
            local_1f8._2_6_ = _UNK_00117b62;
            local_1f8._0_2_ = _LC183;
            bVar4 = true;
            local_1e8 = 0x101010101010101;
            local_1f8._8_8_ = _UNK_00117b68;
          }
          ppuVar51 = &ecdh_choices;
          do {
            iVar9 = strcmp(pcVar17,*ppuVar51);
            if (iVar9 == 0) {
              bVar4 = true;
              local_1f8[*(uint *)(ppuVar51 + 1)] = 2;
              break;
            }
            ppuVar51 = ppuVar51 + 2;
          } while (ppuVar51 != &ecdsa_choices);
        }
        iVar9 = strcmp(pcVar17,"eddsa");
        if (iVar9 == 0) {
          bVar4 = true;
          local_226 = 0x101;
        }
        iVar9 = strcmp(pcVar17,"ed25519");
        if (iVar9 == 0) {
          lVar19 = 0;
LAB_00105dce:
          *(undefined1 *)((long)&local_226 + lVar19) = 2;
          bVar4 = true;
        }
        else {
          iVar9 = strcmp(pcVar17,"ed448");
          if (iVar9 == 0) {
            lVar19 = 1;
            goto LAB_00105dce;
          }
        }
        iVar9 = strcmp(pcVar17,"sm2");
        if (iVar9 == 0) {
          cVar55 = '\x01';
          bVar4 = true;
        }
        iVar9 = strcmp(pcVar17,"curveSM2");
        if (iVar9 == 0) {
          bVar4 = true;
          cVar55 = '\x02';
        }
        if (uVar20 != 0) {
          uVar57 = 0;
          do {
            iVar9 = strcmp((char *)(&kems_algname)[uVar57],pcVar17);
            if (iVar9 == 0) {
              bVar5 = true;
              bVar4 = true;
              local_128[uVar57 & 0xffffffff] = local_128[uVar57 & 0xffffffff] + '\x01';
              break;
            }
            uVar57 = uVar57 + 1;
          } while (uVar20 != uVar57);
        }
        if (uVar49 != 0) {
          uVar57 = 0;
          do {
            iVar9 = strcmp((char *)(&sigs_algname)[uVar57],pcVar17);
            if (iVar9 == 0) {
              bVar6 = true;
              bVar4 = true;
              local_b8[uVar57 & 0xffffffff] = local_b8[uVar57 & 0xffffffff] + '\x01';
              break;
            }
            uVar57 = uVar57 + 1;
          } while (uVar49 != uVar57);
        }
        iVar9 = strcmp(pcVar17,"kmac");
        if (iVar9 != 0) {
          iVar9 = strcmp(pcVar17,"cmac");
          if (iVar9 == 0) goto LAB_001058dd;
          if (bVar4) goto LAB_001058e5;
          BIO_printf(_bio_err,"%s: Unknown algorithm %s\n",uVar14,pcVar17);
          local_418 = 0;
LAB_00105cb2:
          local_3ec = 0;
          local_3f0 = 0;
          local_400 = (char *)0x0;
          __s = (void *)0x0;
          local_428 = 0;
          local_3f8 = 0;
          goto LAB_001046a2;
        }
        local_1c2[7] = '\x01';
        local_1c2[8] = '\x01';
        iVar9 = strcmp(pcVar17,"cmac");
        if (iVar9 == 0) {
LAB_001058dd:
          local_1c2[6] = '\x01';
        }
LAB_001058e5:
        local_438 = local_438 + 1;
        pcVar17 = (char *)*local_438;
      } while (pcVar17 != (char *)0x0);
    }
    if (aead != 0) {
      if (local_338 == (EVP_CIPHER *)0x0) {
        BIO_printf(_bio_err,"-aead can be used only with an AEAD cipher\n");
      }
      else {
        uVar49 = EVP_CIPHER_get_flags();
        if ((uVar49 & 0x200000) != 0) goto LAB_0010592c;
        uVar14 = EVP_CIPHER_get0_name(local_338);
        BIO_printf(_bio_err,"%s is not an AEAD cipher\n",uVar14);
      }
      goto LAB_00104660;
    }
LAB_0010592c:
    if (kems_algs_len != 0) {
      pbVar18 = local_128;
      bVar31 = 0;
      pbVar32 = pbVar18 + kems_algs_len;
      pbVar44 = pbVar18;
      do {
        if (bVar31 < *pbVar44) {
          bVar31 = *pbVar44;
        }
        pbVar44 = pbVar44 + 1;
      } while (pbVar44 != pbVar32);
      if (1 < bVar31) {
        if (((ulong)pbVar32 & 1) != 0) {
          pbVar18 = local_128 + 1;
          local_128[0] = local_128[0] - 1;
          if (pbVar18 == pbVar32) goto LAB_00105983;
        }
        do {
          *pbVar18 = *pbVar18 - 1;
          pbVar18[1] = pbVar18[1] - 1;
          pbVar18 = pbVar18 + 2;
        } while (pbVar18 != pbVar32);
      }
    }
LAB_00105983:
    if (sigs_algs_len != 0) {
      pbVar18 = local_b8;
      bVar31 = 0;
      pbVar32 = pbVar18 + sigs_algs_len;
      pbVar44 = pbVar18;
      do {
        if (bVar31 < *pbVar44) {
          bVar31 = *pbVar44;
        }
        pbVar44 = pbVar44 + 1;
      } while (pbVar44 != pbVar32);
      if (1 < bVar31) {
        if (((ulong)pbVar32 & 1) != 0) {
          pbVar18 = local_b8 + 1;
          local_b8[0] = local_b8[0] - 1;
          if (pbVar18 == pbVar32) goto LAB_001059da;
        }
        do {
          *pbVar18 = *pbVar18 - 1;
          pbVar18[1] = pbVar18[1] - 1;
          pbVar18 = pbVar18 + 2;
        } while (pbVar18 != pbVar32);
      }
    }
LAB_001059da:
    if (bVar58) {
      if (local_338 == (EVP_CIPHER *)0x0) {
        BIO_printf(_bio_err,"-mb can be used only with a multi-block capable cipher\n");
      }
      else {
        uVar49 = EVP_CIPHER_get_flags();
        if ((uVar49 & 0x400000) == 0) {
          uVar14 = EVP_CIPHER_get0_name(local_338);
          BIO_printf(_bio_err,"%s is not a multi-block capable\n",uVar14);
        }
        else {
          if (local_41c == 0) goto LAB_00105a13;
          BIO_printf(_bio_err,"Async mode is not supported with -mb");
        }
      }
      goto LAB_00104660;
    }
    if (local_41c == 0) {
LAB_00105a13:
      local_3ec = 0;
      sVar34 = 0x3560;
      local_3f0 = 1;
    }
    else {
      local_3f0 = local_41c;
      uVar49 = (ulong)local_41c;
      local_3ec = ASYNC_init_thread(uVar49,uVar49);
      if (local_3ec == 0) {
        BIO_printf(_bio_err,"Error creating the ASYNC job pool\n");
        goto LAB_00104660;
      }
      sVar34 = uVar49 * 0x3560;
    }
    __s = (void *)app_malloc(sVar34);
    memset(__s,0,sVar34);
    iVar9 = *(int *)(lengths + (ulong)(uVar56 - 1) * 4);
    if (iVar9 < 0x24) {
      iVar47 = 100;
LAB_00105a6d:
      local_430 = (undefined8 *)(ulong)local_3f0;
      plVar52 = (long *)((long)__s + 8);
      do {
        if (local_41c != 0) {
          lVar19 = ASYNC_WAIT_CTX_new();
          *plVar52 = lVar19;
          if (lVar19 == 0) {
            BIO_printf(_bio_err,"Error creating the ASYNC_WAIT_CTX\n");
            goto LAB_00105ef9;
          }
        }
        sVar34 = (size_t)iVar47;
        plVar36 = plVar52 + 0x6ac;
        lVar19 = app_malloc(sVar34,"input buffer");
        plVar52[3] = lVar19;
        lVar19 = app_malloc(sVar34,"input buffer");
        plVar52[4] = lVar19;
        plVar52[1] = plVar52[3] + (long)iVar11;
        plVar52[2] = lVar19 + iVar11;
        plVar52[8] = (long)(iVar47 - iVar11);
        plVar52[9] = (long)(iVar47 - iVar11);
        lVar19 = app_malloc(0x100,"ECDH secret a");
        plVar52[0x76] = lVar19;
        lVar19 = app_malloc(0x100,"ECDH secret b");
        plVar52[0x77] = lVar19;
        lVar19 = app_malloc(0x400,"FFDH secret a");
        plVar52[0x95] = lVar19;
        lVar19 = app_malloc(0x400);
        plVar52[0x96] = lVar19;
        plVar52 = plVar36;
      } while (plVar36 != (long *)((long)__s + 8) + (long)local_430 * 0x6ac);
      if ((iVar10 != 0) && (iVar11 = do_multi(iVar10), iVar11 != 0)) {
        if (mr == 0) {
          uVar14 = OpenSSL_version(7);
          __printf_chk(2,"version: %s\n",uVar14);
          pcVar17 = (char *)OpenSSL_version(2);
          puts(pcVar17);
          pcVar17 = BN_options();
          __printf_chk(2,"options: %s\n",pcVar17);
          pcVar17 = (char *)OpenSSL_version(1);
          puts(pcVar17);
          pcVar17 = (char *)OpenSSL_version(9);
          puts(pcVar17);
        }
        local_3f8 = 0;
LAB_00105fcf:
        uVar49 = 0;
        do {
          if (local_1d8[uVar49] != '\0') {
            puVar21 = (&names)[uVar49];
            if (((uVar49 == 0x19) && (puVar21 = evp_md_name, local_338 != (EVP_CIPHER *)0x0)) &&
               (puVar21 = (undefined *)EVP_CIPHER_get0_name(), puVar21 == (undefined *)0x0)) {
              app_bail_out("failed to get name of cipher \'%s\'\n",local_338);
            }
            if (mr == 0) {
              __printf_chk(2,"%-13s",puVar21);
            }
            else {
              __printf_chk(2,"+F:%u:%s",uVar49 & 0xffffffff,puVar21);
            }
            uVar20 = 0;
            testnum = 0;
            if (uVar56 != 0) {
              do {
                if (__LC106 < (double)(&results)[uVar20 + (uVar49 & 0xffffffff) * 6]) {
                  pcVar17 = ":%.2f";
                  if (mr != 0) goto LAB_00106063;
                  __printf_chk((double)(&results)[uVar20 + (uVar49 & 0xffffffff) * 6] / __LC107,2,
                               " %11.2fk");
                }
                else {
                  pcVar17 = ":%.2f";
                  if (mr == 0) {
                    pcVar17 = " %11.2f ";
                  }
LAB_00106063:
                  __printf_chk(2,pcVar17);
                }
                testnum = testnum + 1;
                uVar20 = (ulong)testnum;
              } while (testnum < uVar56);
            }
            putchar(10);
          }
          uVar49 = uVar49 + 1;
        } while (uVar49 != 0x1f);
        testnum = 1;
        pdVar53 = (double *)&rsa_results;
        puVar35 = (undefined4 *)&DAT_00116d4c;
        uVar49 = 0;
        do {
          if (*(char *)((long)&local_21f + uVar49) != '\0') {
            if (testnum == 0) {
LAB_001067ce:
              if (mr == 0) {
                __printf_chk(_LC310 / *pdVar53,_LC310 / pdVar53[1],_LC310 / pdVar53[2],
                             _LC310 / pdVar53[3],2,
                             "rsa %5u bits %8.6fs %8.6fs %8.6fs %8.6fs %8.1f %8.1f %8.1f %8.1f\n",
                             *puVar35);
                goto LAB_001065bb;
              }
            }
            else if (mr == 0) {
              __printf_chk(2,
                           "%19ssign    verify    encrypt   decrypt   sign/s verify/s  encr./s  decr./s\n"
                           ,&_LC308);
              testnum = 0;
              goto LAB_001067ce;
            }
            __printf_chk(*pdVar53,pdVar53[1],pdVar53[2],pdVar53[3],2,"+F2:%u:%u:%f:%f:%f:%f\n",
                         uVar49 & 0xffffffff,*puVar35);
          }
LAB_001065bb:
          uVar49 = uVar49 + 1;
          pdVar53 = pdVar53 + 4;
          puVar35 = puVar35 + 4;
        } while (uVar49 != 7);
        lVar19 = 0;
        pdVar53 = (double *)&dsa_results;
        testnum = 1;
        cVar3 = (char)local_228;
        do {
          if (cVar3 != '\0') {
            if (testnum == 0) {
LAB_0010bd8d:
              if (mr == 0) {
                __printf_chk(_LC310 / *pdVar53,_LC310 / pdVar53[1],2,
                             "dsa %4u bits %8.6fs %8.6fs %8.1f %8.1f\n",(&dsa_bits_3)[lVar19]);
                goto LAB_001068ad;
              }
            }
            else if (mr == 0) {
              __printf_chk(2,"%18ssign    verify    sign/s verify/s\n",&_LC308);
              testnum = 0;
              goto LAB_0010bd8d;
            }
            __printf_chk(*pdVar53,pdVar53[1],2,"+F3:%u:%u:%f:%f\n",lVar19,(&dsa_bits_3)[lVar19]);
          }
LAB_001068ad:
          pdVar53 = pdVar53 + 2;
          if (lVar19 != 0) goto LAB_0010bf08;
          lVar19 = 1;
          cVar3 = local_228._1_1_;
        } while( true );
      }
      iVar11 = domlock;
      puVar39 = (undefined8 *)((long)__s + 0x20);
      do {
        if (iVar11 != 0) {
          mlock((void *)*puVar39,sVar34);
          mlock((void *)*puVar39,sVar34);
        }
        puVar33 = puVar39 + 0x6ac;
        memset((void *)*puVar39,0,sVar34);
        memset((void *)puVar39[1],0,sVar34);
        puVar39 = puVar33;
      } while (puVar33 != (undefined8 *)((long)__s + 0x20) + (long)local_430 * 0x6ac);
      local_3f8 = setup_engine_methods(local_3f8,0xffffffff,0);
      if ((iVar7 == 0) &&
         ((((local_1c2[3] == '\0' && local_1d8[9] == '\0') && local_1c2[6] == '\0') && !bVar6) &&
          !bVar5)) {
        lVar19 = 0;
        local_1d8[0] = (char)_LC183;
        local_1d8[1] = (char)((ushort)_LC183 >> 8);
        local_1d8[2] = (char)_UNK_00117b62;
        local_1d8[3] = (char)((uint6)_UNK_00117b62 >> 8);
        local_1d8[4] = (char)((uint6)_UNK_00117b62 >> 0x10);
        local_1d8[5] = (char)((uint6)_UNK_00117b62 >> 0x18);
        local_1d8[6] = (char)((uint6)_UNK_00117b62 >> 0x20);
        local_1d8[7] = (char)((uint6)_UNK_00117b62 >> 0x28);
        local_1d8[8] = (char)_UNK_00117b68;
        local_1d8[9] = (char)((ulong)_UNK_00117b68 >> 8);
        local_1d8[10] = (char)((ulong)_UNK_00117b68 >> 0x10);
        uStack_1cd = (undefined4)((ulong)_UNK_00117b68 >> 0x18);
        uStack_1c9._0_1_ = (char)((ulong)_UNK_00117b68 >> 0x38);
        local_1c2[8] = (char)uStack_1c9;
        uStack_1c9 = (undefined4)CONCAT62(_UNK_00117b62,_LC183);
        local_1c5 = (undefined2)((uint6)_UNK_00117b62 >> 0x10);
        local_1c2[4] = (char)((ulong)_UNK_00117b68 >> 0x18);
        local_1c2[5] = (char)((ulong)_UNK_00117b68 >> 0x20);
        local_1c2[7] = (char)((ulong)_UNK_00117b68 >> 0x30);
        local_1c2[6] = '\0';
        local_1c2[3] = '\0';
        local_1c3 = local_1d8[6];
        local_1c2[0] = local_1d8[7];
        local_1c2[1] = local_1d8[8];
        local_1c2[2] = local_1d8[9];
        ERR_set_mark();
        do {
          iVar11 = have_md((&names)[lVar19]);
          if (iVar11 == 0) {
            local_1d8[lVar19] = '\0';
          }
          lVar19 = lVar19 + 1;
        } while (lVar19 != 9);
        lVar19 = 10;
        do {
          iVar11 = have_cipher((&names)[lVar19]);
          if (iVar11 == 0) {
            local_1d8[lVar19] = '\0';
          }
          lVar19 = lVar19 + 1;
        } while (lVar19 != 0x19);
        uVar14 = app_get0_propq();
        uVar16 = app_get0_libctx();
        local_330 = EVP_MAC_fetch(uVar16,&_LC214,uVar14);
        if (local_330 == 0) {
          local_1c2[4] = '\0';
        }
        else {
          EVP_MAC_free(local_330);
        }
        uVar14 = app_get0_propq();
        uVar16 = app_get0_libctx();
        local_330 = EVP_MAC_fetch(uVar16,&_LC177,uVar14);
        if (local_330 == 0) {
          local_1d8[9] = '\0';
        }
        else {
          EVP_MAC_free(local_330);
        }
        local_330 = 0;
        ERR_pop_to_mark();
        local_218 = CONCAT62(_UNK_00117b62,_LC183);
        cVar55 = '\x01';
        bVar5 = true;
        local_1e8 = 0x101010101010101;
        uStack_210 = (undefined6)_UNK_00117b68;
        uStack_20a = 0x101;
        uStack_208 = 0x10101010101;
        puVar42 = local_128;
        for (lVar19 = 0x6f; lVar19 != 0; lVar19 = lVar19 + -1) {
          *puVar42 = 1;
          puVar42 = puVar42 + (ulong)bVar59 * -2 + 1;
        }
        puVar42 = local_b8;
        for (lVar19 = 0x6f; lVar19 != 0; lVar19 = lVar19 + -1) {
          *puVar42 = 1;
          puVar42 = puVar42 + (ulong)bVar59 * -2 + 1;
        }
        local_21f = 0x1010101;
        uStack_21b = 0x10101;
        local_224 = 0x1010101;
        local_220 = 1;
        local_228 = 0x101;
        local_226 = 0x101;
        bVar6 = true;
        local_1f8._8_8_ = _UNK_00117b68;
        local_1f8._0_8_ = local_218;
      }
      cVar3 = local_1d8[9];
      local_400 = local_1d8;
      iVar11 = 0;
      do {
        iVar11 = (iVar11 + 1) - (uint)(*local_400 == '\0');
        local_400 = local_400 + 1;
      } while (local_400 != local_1c2 + 9);
      if (usertime == 0 && mr == 0) {
        BIO_printf(_bio_err,"You have chosen to measure elapsed time instead of user CPU time.\n");
      }
      signal(0xe,alarmed);
      if (local_1d8[0] == '\0') {
        if (local_1d8[1] == '\0') {
          if (local_1d8[2] != '\0') {
            if (uVar56 != 0) goto LAB_00106eda;
            goto LAB_00107266;
          }
          if (local_1d8[3] != '\0') {
            if (uVar56 == 0) goto LAB_00106e9f;
            goto LAB_00106cac;
          }
LAB_00106e80:
          if (local_1d8[4] != '\0') {
            if (uVar56 == 0) goto LAB_00106e9f;
            goto LAB_0010717d;
          }
LAB_00106462:
          if (local_1d8[6] == '\0') goto LAB_0010709a;
          if (uVar56 == 0) goto LAB_00106481;
LAB_00106fab:
          uVar49 = local_2f8;
          testnum = 0;
          uVar20 = 0;
          do {
            print_message(PTR__LC80_001176f0,*(undefined4 *)(lengths + uVar20 * 4),
                          uVar49 & 0xffffffff);
            app_tminterval(0,usertime);
            iVar10 = run_benchmark(local_41c,SHA256_loop,__s);
            uVar14 = app_tminterval(1,usertime);
            alarm(0);
            print_result(uVar14,6,testnum,iVar10);
            if (iVar10 < 0) break;
            testnum = testnum + 1;
            uVar20 = (ulong)testnum;
          } while (testnum < uVar56);
          if (local_1d8[7] != '\0') goto LAB_001070b9;
LAB_00107156:
          if (local_1d8[8] != '\0') {
LAB_00106d94:
            uVar49 = local_2f8;
            testnum = 0;
            uVar20 = 0;
            do {
              print_message(PTR__LC82_00117700,*(undefined4 *)(lengths + uVar20 * 4),
                            uVar49 & 0xffffffff);
              app_tminterval(0,usertime);
              iVar10 = run_benchmark(local_41c,WHIRLPOOL_loop,__s);
              uVar14 = app_tminterval(1,usertime);
              alarm(0);
              print_result(uVar14,8,testnum,iVar10);
              if (iVar10 < 0) break;
              testnum = testnum + 1;
              uVar20 = (ulong)testnum;
            } while (testnum < uVar56);
          }
          if (local_1d8[5] != '\0') goto LAB_001064be;
        }
        else {
          testnum = 0;
          if (uVar56 != 0) {
LAB_0010639b:
            testnum = 0;
            uVar20 = local_2f8 & 0xffffffff;
            uVar49 = 0;
            do {
              print_message(PTR__LC76_001176c8,*(undefined4 *)(lengths + uVar49 * 4),uVar20);
              app_tminterval(0,usertime);
              iVar10 = run_benchmark(local_41c,EVP_Digest_MDC2_loop,__s);
              uVar14 = app_tminterval(1,usertime);
              alarm(0);
              print_result(uVar14,1,testnum,iVar10);
              if (iVar10 < 0) break;
              testnum = testnum + 1;
              uVar49 = (ulong)testnum;
            } while (testnum < uVar56);
            if (local_1d8[2] != '\0') goto LAB_00106eda;
            if (local_1d8[3] != '\0') goto LAB_00106cac;
            if (local_1d8[4] == '\0') goto LAB_00106462;
            goto LAB_0010717d;
          }
          if (local_1d8[2] != '\0') goto LAB_00107266;
          if ((local_1d8[3] != '\0') || (local_1d8[4] != '\0')) goto LAB_00106e9f;
          if (local_1d8[6] == '\0') {
            if (local_1d8[7] != '\0') goto LAB_00106924;
            goto LAB_00106d73;
          }
LAB_00106481:
          testnum = 0;
          if ((local_1d8[7] == '\0') && (local_1d8[8] == '\0')) goto LAB_0010649d;
LAB_00106924:
          testnum = 0;
          if (local_1d8[5] != '\0') {
            testnum = 0;
          }
        }
      }
      else {
        testnum = 0;
        if (uVar56 == 0) {
          if (local_1d8[1] == '\0') {
            if (local_1d8[2] == '\0') {
              if ((local_1d8[3] == '\0') && (local_1d8[4] == '\0')) {
                if (local_1d8[6] != '\0') goto LAB_00106481;
                goto LAB_0010709a;
              }
            }
            else {
LAB_00107266:
              if ((local_1d8[3] == '\0') && (local_1d8[4] == '\0')) goto LAB_00106481;
            }
          }
          else {
            if (local_1d8[2] != '\0') goto LAB_00107266;
            if ((local_1d8[3] == '\0') && (local_1d8[4] == '\0')) goto LAB_00106462;
          }
LAB_00106e9f:
          if (local_1d8[6] != '\0') goto LAB_00106481;
          goto LAB_00106924;
        }
        uVar20 = local_2f8 & 0xffffffff;
        uVar49 = 0;
        do {
          print_message(names,*(undefined4 *)(lengths + uVar49 * 4),uVar20);
          app_tminterval(0,usertime);
          iVar10 = run_benchmark(local_41c,EVP_Digest_MD2_loop,__s);
          uVar14 = app_tminterval(1,usertime);
          alarm(0);
          print_result(uVar14,0,testnum,iVar10);
          if (iVar10 < 0) break;
          testnum = testnum + 1;
          uVar49 = (ulong)testnum;
        } while (testnum < uVar56);
        if (local_1d8[1] != '\0') goto LAB_0010639b;
        if (local_1d8[2] == '\0') {
          if (local_1d8[3] != '\0') goto LAB_00106cac;
          goto LAB_00106e80;
        }
LAB_00106eda:
        testnum = 0;
        uVar20 = local_2f8 & 0xffffffff;
        uVar49 = 0;
        do {
          print_message(PTR__LC77_001176d0,*(undefined4 *)(lengths + uVar49 * 4),uVar20);
          app_tminterval(0,usertime);
          iVar10 = run_benchmark(local_41c,EVP_Digest_MD4_loop,__s);
          uVar14 = app_tminterval(1,usertime);
          alarm(0);
          print_result(uVar14,2,testnum,iVar10);
          if (iVar10 < 0) break;
          testnum = testnum + 1;
          uVar49 = (ulong)testnum;
        } while (testnum < uVar56);
        if (local_1d8[3] == '\0') {
          if (local_1d8[4] != '\0') goto LAB_0010717d;
          if (local_1d8[6] != '\0') goto LAB_00106fab;
LAB_0010709a:
          if (local_1d8[7] == '\0') goto LAB_00106d73;
          if (uVar56 == 0) goto LAB_00106924;
LAB_001070b9:
          uVar49 = local_2f8;
          testnum = 0;
          uVar20 = 0;
          do {
            print_message(PTR__LC81_001176f8,*(undefined4 *)(lengths + uVar20 * 4),
                          uVar49 & 0xffffffff);
            app_tminterval(0,usertime);
            iVar10 = run_benchmark(local_41c,SHA512_loop,__s);
            uVar14 = app_tminterval(1,usertime);
            alarm(0);
            print_result(uVar14,7,testnum,iVar10);
            if (iVar10 < 0) break;
            testnum = testnum + 1;
            uVar20 = (ulong)testnum;
          } while (testnum < uVar56);
          goto LAB_00107156;
        }
LAB_00106cac:
        testnum = 0;
        uVar20 = local_2f8 & 0xffffffff;
        uVar49 = 0;
        do {
          print_message(PTR__LC78_001176d8,*(undefined4 *)(lengths + uVar49 * 4),uVar20);
          app_tminterval(0,usertime);
          iVar10 = run_benchmark(local_41c,MD5_loop,__s);
          uVar14 = app_tminterval(1,usertime);
          alarm(0);
          print_result(uVar14,3,testnum,iVar10);
          if (iVar10 < 0) break;
          testnum = testnum + 1;
          uVar49 = (ulong)testnum;
        } while (testnum < uVar56);
        if (local_1d8[4] == '\0') {
          if (local_1d8[6] != '\0') goto LAB_00106fab;
          if (local_1d8[7] != '\0') goto LAB_001070b9;
LAB_00106d73:
          if (local_1d8[8] != '\0') {
            if (uVar56 != 0) goto LAB_00106d94;
            goto LAB_00106924;
          }
        }
        else {
LAB_0010717d:
          uVar49 = local_2f8;
          testnum = 0;
          uVar20 = 0;
          do {
            print_message(PTR__LC79_001176e0,*(undefined4 *)(lengths + uVar20 * 4),
                          uVar49 & 0xffffffff);
            app_tminterval(0,usertime);
            iVar10 = run_benchmark(local_41c,SHA1_loop,__s);
            uVar14 = app_tminterval(1,usertime);
            alarm(0);
            print_result(uVar14,4,testnum,iVar10);
            if (iVar10 < 0) break;
            testnum = testnum + 1;
            uVar20 = (ulong)testnum;
          } while (testnum < uVar56);
          if (local_1d8[6] != '\0') goto LAB_00106fab;
          if (local_1d8[7] != '\0') goto LAB_001070b9;
          if (local_1d8[8] != '\0') goto LAB_00106d94;
        }
LAB_0010649d:
        if ((local_1d8[5] != '\0') && (testnum = 0, uVar56 != 0)) {
LAB_001064be:
          uVar49 = local_2f8;
          testnum = 0;
          do {
            print_message(PTR_s_rmd160_001176e8,*(undefined4 *)(lengths + (ulong)testnum * 4),
                          uVar49 & 0xffffffff);
            app_tminterval(0,usertime);
            iVar10 = run_benchmark(local_41c,EVP_Digest_RMD160_loop,__s);
            uVar14 = app_tminterval(1,usertime);
            alarm(0);
            print_result(uVar14,5,testnum,iVar10);
            if (iVar10 < 0) break;
            testnum = testnum + 1;
          } while (testnum < uVar56);
        }
      }
      if (cVar3 == '\0') {
LAB_0010693f:
        plVar52 = (long *)((long)__s + 0x4c0);
        if (local_1d8[10] != '\0') {
          plVar36 = plVar52;
          do {
            lVar19 = init_evp_cipher_ctx("des-cbc",deskey_7,8);
            *plVar36 = lVar19;
            if (lVar19 == 0) {
              algindex = 10;
              testnum = 0;
              plVar36 = plVar52;
              goto LAB_00106a63;
            }
            plVar36 = plVar36 + 0x6ac;
          } while (plVar36 != plVar52 + (long)local_430 * 0x6ac);
          algindex = 10;
          testnum = 0;
          uVar49 = 0;
          while ((plVar36 = plVar52, (uint)uVar49 < uVar56 &&
                 (iVar10 = check_block_size(*(undefined8 *)((long)__s + 0x4c0),
                                            *(undefined4 *)(lengths + uVar49 * 4)), iVar10 != 0))) {
            print_message(PTR__LC220_00117710,*(undefined4 *)(lengths + (ulong)testnum * 4),
                          local_2f8 & 0xffffffff);
            app_tminterval(0,usertime);
            uVar12 = run_benchmark(local_41c,EVP_Cipher_loop,__s);
            uVar14 = app_tminterval(1,usertime);
            alarm(0);
            print_result(uVar14,10,testnum,uVar12);
            testnum = testnum + 1;
            uVar49 = (ulong)testnum;
          }
LAB_00106a63:
          do {
            plVar38 = plVar36 + 0x6ac;
            EVP_CIPHER_CTX_free((EVP_CIPHER_CTX *)*plVar36);
            plVar36 = plVar38;
          } while (plVar38 != plVar52 + (long)local_430 * 0x6ac);
        }
        if ((char)uStack_1cd != '\0') {
          plVar36 = plVar52;
          do {
            lVar19 = init_evp_cipher_ctx("des-ede3-cbc",deskey_7,0x18);
            *plVar36 = lVar19;
            if (lVar19 == 0) {
              algindex = 0xb;
              testnum = 0;
              plVar36 = plVar52;
              goto LAB_00106b94;
            }
            plVar36 = plVar36 + 0x6ac;
          } while (plVar36 != plVar52 + (long)local_430 * 0x6ac);
          algindex = 0xb;
          testnum = 0;
          uVar49 = 0;
          while ((plVar36 = plVar52, (uint)uVar49 < uVar56 &&
                 (iVar10 = check_block_size(*(undefined8 *)((long)__s + 0x4c0),
                                            *(undefined4 *)(lengths + uVar49 * 4)), iVar10 != 0))) {
            print_message(PTR_s_des_ede3_00117718,*(undefined4 *)(lengths + (ulong)testnum * 4),
                          local_2f8 & 0xffffffff);
            app_tminterval(0,usertime);
            uVar12 = run_benchmark(local_41c,EVP_Cipher_loop,__s);
            uVar14 = app_tminterval(1,usertime);
            alarm(0);
            print_result(uVar14,0xb,testnum,uVar12);
            testnum = testnum + 1;
            uVar49 = (ulong)testnum;
          }
LAB_00106b94:
          do {
            plVar38 = plVar36 + 0x6ac;
            EVP_CIPHER_CTX_free((EVP_CIPHER_CTX *)*plVar36);
            plVar36 = plVar38;
          } while (plVar38 != plVar52 + (long)local_430 * 0x6ac);
        }
        lVar19 = 0;
        do {
          algindex = (int)lVar19 + 0x13;
          if (*(char *)((long)&local_1c5 + lVar19) != '\0') {
            plVar36 = plVar52;
            do {
              lVar27 = init_evp_cipher_ctx((&names)[algindex],key32_6,(int)lVar19 * 8 + 0x10);
              *plVar36 = lVar27;
              if (lVar27 == 0) {
                testnum = 0;
                plVar36 = plVar52;
                goto LAB_0010784f;
              }
              plVar36 = plVar36 + 0x6ac;
            } while (plVar36 != plVar52 + (long)local_430 * 0x6ac);
            testnum = 0;
            uVar49 = 0;
            while ((plVar36 = plVar52, (uint)uVar49 < uVar56 &&
                   (iVar10 = check_block_size(*(undefined8 *)((long)__s + 0x4c0),
                                              *(undefined4 *)(lengths + uVar49 * 4)), iVar10 != 0)))
            {
              print_message((&names)[algindex],*(undefined4 *)(lengths + (ulong)testnum * 4),
                            local_2f8 & 0xffffffff);
              app_tminterval(0,usertime);
              uVar12 = run_benchmark(local_41c,EVP_Cipher_loop,__s);
              uVar14 = app_tminterval(1,usertime);
              alarm(0);
              print_result(uVar14,algindex,testnum,uVar12);
              testnum = testnum + 1;
              uVar49 = (ulong)testnum;
            }
LAB_0010784f:
            do {
              plVar38 = plVar36 + 0x6ac;
              EVP_CIPHER_CTX_free((EVP_CIPHER_CTX *)*plVar36);
              plVar36 = plVar38;
            } while (plVar38 != plVar52 + (long)local_430 * 0x6ac);
          }
          lVar19 = lVar19 + 1;
        } while (lVar19 != 3);
        lVar19 = 0;
        plVar36 = plVar52 + (long)local_430 * 0x6ac;
        do {
          algindex = (int)lVar19 + 0x16;
          if (local_1c2[lVar19] != '\0') {
            plVar38 = plVar52;
            do {
              lVar27 = init_evp_cipher_ctx((&names)[algindex],key32_6,(int)lVar19 * 8 + 0x10);
              *plVar38 = lVar27;
              if (lVar27 == 0) {
                testnum = 0;
                plVar38 = plVar52;
                goto LAB_00107d00;
              }
              plVar38 = plVar38 + 0x6ac;
            } while (plVar38 != plVar36);
            testnum = 0;
            uVar49 = 0;
            while ((plVar38 = plVar52, (uint)uVar49 < uVar56 &&
                   (iVar10 = check_block_size(*(undefined8 *)((long)__s + 0x4c0),
                                              *(undefined4 *)(lengths + uVar49 * 4)), iVar10 != 0)))
            {
              print_message((&names)[algindex],*(undefined4 *)(lengths + (ulong)testnum * 4),
                            local_2f8 & 0xffffffff);
              app_tminterval(0,usertime);
              uVar12 = run_benchmark(local_41c,EVP_Cipher_loop,__s);
              uVar14 = app_tminterval(1,usertime);
              alarm(0);
              print_result(uVar14,algindex,testnum,uVar12);
              testnum = testnum + 1;
              uVar49 = (ulong)testnum;
            }
LAB_00107d00:
            do {
              plVar37 = plVar38 + 0x6ac;
              EVP_CIPHER_CTX_free((EVP_CIPHER_CTX *)*plVar38);
              plVar38 = plVar37;
            } while (plVar37 != plVar36);
          }
          lVar19 = lVar19 + 1;
        } while (lVar19 != 3);
        algindex = 0xc;
        do {
          lVar19 = (long)algindex;
          plVar38 = plVar52;
          if (local_1d8[lVar19] != '\0') {
            while( true ) {
              lVar19 = init_evp_cipher_ctx((&names)[lVar19],key32_6,0x10);
              *plVar38 = lVar19;
              if (lVar19 == 0) break;
              if (plVar38 + 0x6ac == plVar36) {
                testnum = 0;
                uVar49 = 0;
                while ((plVar38 = plVar52, (uint)uVar49 < uVar56 &&
                       (iVar10 = check_block_size(*(undefined8 *)((long)__s + 0x4c0),
                                                  *(undefined4 *)(lengths + uVar49 * 4)),
                       iVar10 != 0))) {
                  print_message((&names)[algindex],*(undefined4 *)(lengths + (ulong)testnum * 4),
                                local_2f8 & 0xffffffff);
                  app_tminterval(0,usertime);
                  uVar12 = run_benchmark(local_41c,EVP_Cipher_loop,__s);
                  uVar14 = app_tminterval(1,usertime);
                  alarm(0);
                  print_result(uVar14,algindex,testnum,uVar12);
                  testnum = testnum + 1;
                  uVar49 = (ulong)testnum;
                }
                goto LAB_00107e01;
              }
              lVar19 = (long)algindex;
              plVar38 = plVar38 + 0x6ac;
            }
            testnum = 0;
            plVar38 = plVar52;
LAB_00107e01:
            do {
              plVar37 = plVar38 + 0x6ac;
              EVP_CIPHER_CTX_free((EVP_CIPHER_CTX *)*plVar38);
              plVar38 = plVar37;
            } while (plVar37 != plVar36);
          }
          algindex = algindex + 1;
        } while (algindex < 0x13);
        if (local_1c2[4] != '\0') {
          OSSL_PARAM_construct_utf8_string(&local_378,"cipher","aes-128-gcm",0);
          local_2c8._8_8_ = uStack_370;
          local_2c8._0_8_ = local_378;
          local_2b8._8_8_ = uStack_360;
          local_2b8._0_8_ = local_368;
          local_2a8._0_8_ = local_358;
          OSSL_PARAM_construct_octet_string(&local_378,&_LC224,gmac_iv_5,0xc);
          local_2a8._8_8_ = local_378;
          local_298._8_8_ = local_368;
          local_298._0_8_ = uStack_370;
          local_288._8_8_ = local_358;
          local_288._0_8_ = uStack_360;
          OSSL_PARAM_construct_octet_string(&local_378,&_LC219,key32_6,0x10);
          local_258 = local_358;
          local_278 = local_378;
          uStack_270 = uStack_370;
          local_268 = local_368;
          uStack_260 = uStack_360;
          OSSL_PARAM_construct_end(&local_378);
          local_230 = local_358;
          local_250 = local_378;
          uStack_248 = uStack_370;
          local_240 = local_368;
          uStack_238 = uStack_360;
          iVar10 = mac_setup(&_LC214,&local_330,local_2c8,__s);
          if (iVar10 < 1) goto LAB_001076ce;
          puVar39 = (undefined8 *)((long)__s + 0x4c8);
          puVar33 = puVar39 + (long)local_430 * 0x6ac;
          puVar46 = puVar39;
          do {
            iVar10 = EVP_MAC_init(*puVar46,0,0,0);
            uVar49 = local_2f8;
            if (iVar10 == 0) goto LAB_001076ce;
            puVar46 = puVar46 + 0x6ac;
          } while (puVar46 != puVar33);
          testnum = 0;
          if (uVar56 != 0) {
            do {
              print_message(PTR_s_ghash_00117790,*(undefined4 *)(lengths + (ulong)testnum * 4),
                            uVar49 & 0xffffffff);
              app_tminterval(0,usertime);
              iVar10 = run_benchmark(local_41c,GHASH_loop,__s);
              uVar14 = app_tminterval(1,usertime);
              alarm(0);
              print_result(uVar14,0x1a,testnum,iVar10);
              if (iVar10 < 0) break;
              testnum = testnum + 1;
            } while (testnum < uVar56);
          }
          do {
            uVar14 = *puVar39;
            puVar39 = puVar39 + 0x6ac;
            EVP_MAC_CTX_free(uVar14);
          } while (puVar39 != puVar33);
          EVP_MAC_free(local_330);
          local_330 = 0;
        }
        uVar49 = local_2f8;
        if ((local_1c2[5] != '\0') && (testnum = 0, uVar56 != 0)) {
          do {
            print_message(PTR_DAT_00117798,*(undefined4 *)(lengths + (ulong)testnum * 4),
                          uVar49 & 0xffffffff);
            app_tminterval(0,usertime);
            uVar12 = run_benchmark(local_41c,RAND_bytes_loop,__s);
            uVar14 = app_tminterval(1,usertime);
            alarm(0);
            print_result(uVar14,0x1b,testnum,uVar12);
            testnum = testnum + 1;
          } while (testnum < uVar56);
        }
        uVar49 = local_2f8;
        if (local_1c2[3] != '\0') {
          if (local_338 == (EVP_CIPHER *)0x0) {
            if (evp_md_name != (undefined *)0x0) {
              PTR__LC96_00117788 = evp_md_name;
              testnum = 0;
              if (uVar56 != 0) {
                do {
                  print_message(PTR__LC96_00117788,*(undefined4 *)(lengths + (ulong)testnum * 4),
                                uVar49 & 0xffffffff);
                  app_tminterval(0,usertime);
                  iVar10 = run_benchmark(local_41c,EVP_Digest_md_loop,__s);
                  uVar14 = app_tminterval(1,usertime);
                  alarm(0);
                  print_result(uVar14,0x19,testnum,iVar10);
                  if (iVar10 < 0) break;
                  testnum = testnum + 1;
                } while (testnum < uVar56);
              }
            }
          }
          else {
            local_300 = (EVP_PKEY *)((ulong)local_300 & 0xffffffff00000000);
            if ((bVar58) && (uVar49 = EVP_CIPHER_get_flags(), (uVar49 & 0x400000) != 0)) {
              multiblock_speed(local_338,local_340,&local_2f8);
              local_400 = (char *)local_330;
              goto LAB_00104bc8;
            }
            PTR__LC96_00117788 = (undefined *)EVP_CIPHER_get0_name(local_338);
            mode_op = EVP_CIPHER_get_mode(local_338);
            uVar49 = local_2f8;
            if ((aead == 0) || ((undefined4 *)lengths != &lengths_list)) {
              if (mode_op - 0x10003U < 3) {
LAB_00107a5a:
                pcVar22 = EVP_Update_loop_aead_enc;
                bVar58 = true;
                if (decrypt != 0) {
                  pcVar22 = EVP_Update_loop_aead_dec;
                }
              }
              else {
                bVar58 = false;
                pcVar22 = EVP_Update_loop;
                if (mode_op - 6U < 2) goto LAB_00107a5a;
              }
              testnum = 0;
              if (uVar56 == 0) goto LAB_00108135;
            }
            else {
              lengths = (undefined *)&aead_lengths_list;
              if ((mode_op - 0x10003U < 3) || (mode_op - 6U < 2)) {
                bVar58 = true;
                if (decrypt == 0) {
                  pcVar22 = EVP_Update_loop_aead_enc;
                  uVar56 = 6;
                }
                else {
                  pcVar22 = EVP_Update_loop_aead_dec;
                  uVar56 = 6;
                }
              }
              else {
                bVar58 = false;
                pcVar22 = EVP_Update_loop;
                uVar56 = 6;
              }
            }
            testnum = 0;
            do {
              print_message(PTR__LC96_00117788,*(undefined4 *)(lengths + (ulong)testnum * 4),
                            uVar49 & 0xffffffff);
              pvVar50 = (void *)((long)__s + 0x38);
              do {
                pEVar23 = EVP_CIPHER_CTX_new();
                *(EVP_CIPHER_CTX **)((long)pvVar50 + 0x488) = pEVar23;
                if (pEVar23 == (EVP_CIPHER_CTX *)0x0) goto LAB_0010c840;
                uVar43 = 1;
                if (!bVar58) {
                  uVar43 = (uint)(decrypt == 0);
                }
                iVar10 = EVP_CipherInit_ex(pEVar23,local_338,(ENGINE *)0x0,(uchar *)0x0,(uchar *)0x0
                                           ,uVar43);
                if (iVar10 == 0) {
                  pcVar17 = "\nCouldn\'t init the context\n";
                  goto LAB_00107c01;
                }
                EVP_CIPHER_CTX_set_padding(*(EVP_CIPHER_CTX **)((long)pvVar50 + 0x488),0);
                iVar10 = EVP_CIPHER_CTX_get_key_length(*(undefined8 *)((long)pvVar50 + 0x488));
                puVar24 = (uchar *)app_malloc((long)iVar10,"evp_cipher key");
                *(uchar **)((long)pvVar50 + -8) = puVar24;
                EVP_CIPHER_CTX_rand_key(*(EVP_CIPHER_CTX **)((long)pvVar50 + 0x488),puVar24);
                if (!bVar58) {
                  iVar7 = EVP_CipherInit_ex(*(EVP_CIPHER_CTX **)((long)pvVar50 + 0x488),
                                            (EVP_CIPHER *)0x0,(ENGINE *)0x0,
                                            *(uchar **)((long)pvVar50 + -8),iv,-1);
                  if (iVar7 != 0) goto LAB_00107b22;
LAB_00107bf3:
                  pcVar17 = "\nFailed to set the key\n";
LAB_00107c01:
                  BIO_printf(_bio_err,pcVar17);
                  ERR_print_errors(_bio_err);
                  testmoderesult = 1;
                    /* WARNING: Subroutine does not return */
                  exit(1);
                }
                if (mode_op - 0x10004U < 2) {
                  EVP_CIPHER_CTX_ctrl(*(EVP_CIPHER_CTX **)((long)pvVar50 + 0x488),0x27,1,(void *)0x0
                                     );
                  if (decrypt != 0) {
                    if (mode_op != 0x10004) goto LAB_00107fcd;
LAB_00107e70:
                    pEVar23 = *(EVP_CIPHER_CTX **)((long)pvVar50 + 0x488);
                    goto LAB_00107e77;
                  }
                }
                else if (decrypt != 0) {
LAB_00107fcd:
                  iVar7 = EVP_CIPHER_CTX_ctrl(*(EVP_CIPHER_CTX **)((long)pvVar50 + 0x488),9,0xc,
                                              (void *)0x0);
                  if (iVar7 == 0) {
                    pcVar17 = "\nFailed to set iv length\n";
                    goto LAB_00107c01;
                  }
                  pEVar23 = *(EVP_CIPHER_CTX **)((long)pvVar50 + 0x488);
                  if ((1 < mode_op - 0x10004U) && (mode_op != 6)) {
                    iVar7 = EVP_CIPHER_CTX_ctrl(pEVar23,0x11,0x10,(void *)0x0);
                    if (iVar7 == 0) {
                      pcVar17 = "\nFailed to set tag length\n";
                      goto LAB_00107c01;
                    }
                    goto LAB_00107e70;
                  }
LAB_00107e77:
                  iVar7 = EVP_CipherInit_ex(pEVar23,(EVP_CIPHER *)0x0,(ENGINE *)0x0,
                                            *(uchar **)((long)pvVar50 + -8),aead_iv,-1);
                  if (iVar7 == 0) goto LAB_00107bf3;
                  pEVar23 = *(EVP_CIPHER_CTX **)((long)pvVar50 + 0x488);
                  if (mode_op == 7) {
                    iVar7 = EVP_EncryptUpdate(pEVar23,(uchar *)0x0,(int *)&local_300,(uchar *)0x0,
                                              *(int *)(lengths + (ulong)testnum * 4));
                    if (iVar7 == 0) {
                      pcVar17 = "\nCouldn\'t set input text length\n";
                      goto LAB_00107c01;
                    }
                    pEVar23 = *(EVP_CIPHER_CTX **)((long)pvVar50 + 0x488);
                  }
                  if (aead != 0) {
                    iVar7 = EVP_EncryptUpdate(pEVar23,(uchar *)0x0,(int *)&local_300,aad,0xd);
                    if (iVar7 == 0) {
                      pcVar17 = "\nCouldn\'t insert AAD when encrypting\n";
                      goto LAB_00107c01;
                    }
                    pEVar23 = *(EVP_CIPHER_CTX **)((long)pvVar50 + 0x488);
                  }
                  iVar7 = EVP_EncryptUpdate(pEVar23,*(uchar **)((long)pvVar50 + -0x28),
                                            (int *)&local_300,*(uchar **)((long)pvVar50 + -0x28),
                                            *(int *)(lengths + (ulong)testnum * 4));
                  if (iVar7 == 0) {
                    pcVar17 = "\nFailed to to encrypt the data\n";
                    goto LAB_00107c01;
                  }
                  iVar7 = EVP_EncryptFinal_ex(*(EVP_CIPHER_CTX **)((long)pvVar50 + 0x488),
                                              *(uchar **)((long)pvVar50 + -0x28),(int *)&local_300);
                  if (iVar7 == 0) {
                    pcVar17 = "\nFailed finalize the encryption\n";
                    goto LAB_00107c01;
                  }
                  iVar7 = EVP_CIPHER_CTX_ctrl(*(EVP_CIPHER_CTX **)((long)pvVar50 + 0x488),0x10,0x10,
                                              pvVar50);
                  if (iVar7 == 0) {
                    pcVar17 = "\nFailed to get the tag\n";
                    goto LAB_00107c01;
                  }
                  EVP_CIPHER_CTX_free(*(EVP_CIPHER_CTX **)((long)pvVar50 + 0x488));
                  pEVar23 = EVP_CIPHER_CTX_new();
                  *(EVP_CIPHER_CTX **)((long)pvVar50 + 0x488) = pEVar23;
                  if (pEVar23 == (EVP_CIPHER_CTX *)0x0) {
LAB_0010c840:
                    BIO_printf(_bio_err,"\nEVP_CIPHER_CTX_new failure\n");
                    /* WARNING: Subroutine does not return */
                    exit(1);
                  }
                  iVar7 = EVP_CipherInit_ex(pEVar23,local_338,(ENGINE *)0x0,(uchar *)0x0,
                                            (uchar *)0x0,0);
                  if (iVar7 == 0) {
                    pcVar17 = "\nFailed initializing the context\n";
                    goto LAB_00107c01;
                  }
                  EVP_CIPHER_CTX_set_padding(*(EVP_CIPHER_CTX **)((long)pvVar50 + 0x488),0);
                  if (mode_op - 0x10004U < 2) {
                    EVP_CIPHER_CTX_ctrl(*(EVP_CIPHER_CTX **)((long)pvVar50 + 0x488),0x27,1,
                                        (void *)0x0);
                  }
                }
LAB_00107b22:
                pvVar50 = (void *)((long)pvVar50 + 0x3560);
              } while ((void *)((long)__s + 0x38 + (long)local_430 * 0x3560) != pvVar50);
              app_tminterval(0,usertime);
              uVar12 = run_benchmark(local_41c,pcVar22,__s);
              uVar14 = app_tminterval(1,usertime);
              alarm(0);
              puVar39 = (undefined8 *)((long)__s + 0x30);
              do {
                puVar33 = puVar39 + 0x6ac;
                CRYPTO_clear_free(*puVar39,(long)iVar10,"apps/speed.c");
                EVP_CIPHER_CTX_free((EVP_CIPHER_CTX *)puVar39[0x92]);
                puVar39 = puVar33;
              } while (puVar33 != (undefined8 *)((long)__s + 0x30) + (long)local_430 * 0x6ac);
              print_result(uVar14,0x19,testnum,uVar12);
              testnum = testnum + 1;
            } while (testnum < uVar56);
          }
        }
LAB_00108135:
        puVar21 = evp_mac_ciphername;
        if (local_1c2[6] == '\0') {
LAB_00108143:
          if (local_1c2[7] != '\0') {
            OSSL_PARAM_construct_octet_string(&local_378,&_LC219,key32_6,0x10);
            local_2a8._0_8_ = local_358;
            local_2c8._8_8_ = uStack_370;
            local_2c8._0_8_ = local_378;
            local_2b8._8_8_ = uStack_360;
            local_2b8._0_8_ = local_368;
            OSSL_PARAM_construct_end(&local_378);
            local_2a8._8_8_ = local_378;
            local_298._8_8_ = local_368;
            local_298._0_8_ = uStack_370;
            local_288._8_8_ = local_358;
            local_288._0_8_ = uStack_360;
            iVar10 = mac_setup("KMAC-128",&local_330,local_2c8,__s,local_3f0);
            if (iVar10 < 1) goto LAB_001088f9;
            testnum = 0;
            if (uVar56 != 0) {
              uVar49 = local_2f8 & 0xffffffff;
              do {
                print_message(PTR_s_kmac128_001177a8,*(undefined4 *)(lengths + (ulong)testnum * 4),
                              uVar49);
                app_tminterval(0,usertime);
                iVar10 = run_benchmark(local_41c,KMAC128_loop,__s);
                uVar14 = app_tminterval(1,usertime);
                alarm(0);
                print_result(uVar14,0x1d,testnum,iVar10);
                if (iVar10 < 0) break;
                testnum = testnum + 1;
              } while (testnum < uVar56);
            }
            mac_teardown(&local_330,__s,local_3f0);
          }
          if (local_1c2[8] == '\0') {
LAB_0010815f:
            puVar39 = (undefined8 *)((long)__s + 0x10);
            puVar33 = puVar39 + (long)local_430 * 0x6ac;
            do {
              iVar10 = RAND_bytes((uchar *)*puVar39,0x24);
              if (iVar10 < 1) {
                local_400 = (char *)local_330;
                ERR_print_errors(_bio_err);
                local_428 = 0;
                local_418 = 0;
                local_390 = 1;
                goto LAB_001046ca;
              }
              puVar39 = puVar39 + 0x6ac;
            } while (puVar39 != puVar33);
            psVar1 = (size_t *)((long)__s + 0x50);
            uVar49 = 0;
            testnum = 0;
            psVar2 = psVar1 + (long)local_430 * 0x6ac;
            pvVar50 = (void *)((long)__s + (long)local_430 * 0x3560);
            do {
              local_308 = (EVP_PKEY *)0x0;
              if (*(char *)((long)&local_21f + uVar49) != '\0') {
                if (iVar13 < 3) {
                  local_300 = (EVP_PKEY *)(&rsa_keys_4)[uVar49 * 2];
                  local_308 = d2i_PrivateKey(6,(EVP_PKEY **)0x0,(uchar **)&local_300,
                                             (ulong)(uint)(&DAT_00116d48)[uVar49 * 4]);
                  bVar58 = local_308 != (EVP_PKEY *)0x0;
LAB_00108c2c:
                  psVar41 = psVar1;
                  if (!bVar58) goto LAB_001082be;
                  do {
                    uVar43 = testnum;
                    pEVar15 = EVP_PKEY_CTX_new(local_308,(ENGINE *)0x0);
                    psVar41[(ulong)uVar43 + 2] = (size_t)pEVar15;
                    *psVar41 = psVar41[-1];
                    if ((((EVP_PKEY_CTX *)psVar41[(ulong)testnum + 2] == (EVP_PKEY_CTX *)0x0) ||
                        (iVar10 = EVP_PKEY_sign_init((EVP_PKEY_CTX *)psVar41[(ulong)testnum + 2]),
                        iVar10 < 1)) ||
                       (iVar10 = EVP_PKEY_sign((EVP_PKEY_CTX *)psVar41[(ulong)testnum + 2],
                                               (uchar *)psVar41[-7],psVar41,(uchar *)psVar41[-8],
                                               0x24), iVar10 < 1)) goto LAB_001082be;
                    psVar41 = psVar41 + 0x6ac;
                  } while (psVar41 != psVar2);
                  uVar12 = local_2f8._4_4_;
                  pkey_print_message("private","rsa sign",
                                     *(undefined4 *)(&DAT_00116d4c + (ulong)testnum * 0x10),
                                     local_2f8._4_4_);
                  app_tminterval(0,usertime);
                  iVar10 = run_benchmark(local_41c,RSA_sign_loop,__s);
                  dVar60 = (double)app_tminterval(1,usertime);
                  alarm(0);
                  pcVar17 = "+R1:%ld:%d:%.2f\n";
                  if (mr == 0) {
                    pcVar17 = "%ld %u bits private RSA sign ops in %.2fs\n";
                  }
                  BIO_printf(_bio_err,pcVar17,dVar60,(long)iVar10,
                             (ulong)*(uint *)(&DAT_00116d4c + (ulong)testnum * 0x10));
                  uVar49 = (ulong)testnum;
                  (&rsa_results)[uVar49 * 4] = (double)iVar10 / dVar60;
                  pvVar40 = __s;
                  while( true ) {
                    pEVar15 = EVP_PKEY_CTX_new(local_308,(ENGINE *)0x0);
                    *(EVP_PKEY_CTX **)((long)pvVar40 + uVar49 * 8 + 0x98) = pEVar15;
                    pEVar15 = *(EVP_PKEY_CTX **)((long)pvVar40 + (ulong)testnum * 8 + 0x98);
                    if (((pEVar15 == (EVP_PKEY_CTX *)0x0) ||
                        (iVar10 = EVP_PKEY_verify_init(pEVar15), iVar10 < 1)) ||
                       (iVar10 = EVP_PKEY_verify(*(EVP_PKEY_CTX **)
                                                  ((long)pvVar40 + (ulong)testnum * 8 + 0x98),
                                                 *(uchar **)((long)pvVar40 + 0x18),
                                                 *(size_t *)((long)pvVar40 + 0x50),
                                                 *(uchar **)((long)pvVar40 + 0x10),0x24), iVar10 < 1
                       )) break;
                    pvVar40 = (void *)((long)pvVar40 + 0x3560);
                    if (pvVar50 == pvVar40) {
                      pkey_print_message("public","rsa verify",
                                         *(undefined4 *)(&DAT_00116d4c + (ulong)testnum * 0x10),
                                         uVar12);
                      app_tminterval(0,usertime);
                      iVar10 = run_benchmark(local_41c,RSA_verify_loop,__s);
                      dVar60 = (double)app_tminterval(1,usertime);
                      alarm(0);
                      pcVar17 = "+R2:%ld:%d:%.2f\n";
                      if (mr == 0) {
                        pcVar17 = "%ld %u bits public RSA verify ops in %.2fs\n";
                      }
                      BIO_printf(_bio_err,pcVar17,dVar60,(long)iVar10,
                                 (ulong)*(uint *)(&DAT_00116d4c + (ulong)testnum * 0x10));
                      uVar49 = (ulong)testnum;
                      (&DAT_00113a28)[uVar49 * 4] = (double)iVar10 / dVar60;
                      psVar41 = (size_t *)((long)__s + 0x58);
                      goto LAB_00108f1d;
                    }
                    uVar49 = (ulong)testnum;
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
                    iVar10 = BN_set_word(a,0x10001);
                    if ((((iVar10 != 0) &&
                         (iVar10 = init_gen_str(&local_320,&_LC142,0,0,0,0), iVar10 != 0)) &&
                        (iVar10 = EVP_PKEY_CTX_set_rsa_keygen_bits
                                            (local_320,
                                             *(undefined4 *)(&DAT_00116d4c + (ulong)testnum * 0x10))
                        , 0 < iVar10)) &&
                       ((iVar10 = EVP_PKEY_CTX_set1_rsa_keygen_pubexp(local_320,a), 0 < iVar10 &&
                        (iVar10 = EVP_PKEY_CTX_set_rsa_keygen_primes(local_320,iVar13), 0 < iVar10))
                       )) {
                      iVar10 = EVP_PKEY_keygen(local_320,&local_308);
                      bVar58 = 0 < iVar10;
                      BN_free(a);
                      EVP_PKEY_CTX_free(local_320);
                      local_320 = (EVP_PKEY_CTX *)0x0;
                      goto LAB_00108c2c;
                    }
                    BN_free(a);
                    EVP_PKEY_CTX_free(local_320);
                    local_320 = (EVP_PKEY_CTX *)0x0;
                  }
LAB_001082be:
                  BIO_printf(_bio_err,"RSA sign setup failure.  No RSA sign will be done.\n");
                  ERR_print_errors(_bio_err);
                  testmoderesult = 1;
                }
                BIO_printf(_bio_err,"RSA verify setup failure.  No RSA verify will be done.\n");
                ERR_print_errors(_bio_err);
                testmoderesult = 1;
                *(undefined1 *)((long)&local_21f + (ulong)testnum) = 0;
LAB_00108322:
                BIO_printf(_bio_err,"RSA encrypt setup failure.  No RSA encrypt will be done.\n");
                ERR_print_errors(_bio_err);
                testmoderesult = 1;
LAB_0010834d:
                BIO_printf(_bio_err,"RSA decrypt setup failure.  No RSA decrypt will be done.\n");
                ERR_print_errors(_bio_err);
                uVar49 = (ulong)testnum;
                testmoderesult = 1;
LAB_0010837e:
                __memset_chk((long)&local_21f + uVar49,0,7 - uVar49);
LAB_001083ab:
                EVP_PKEY_free(local_308);
              }
              testnum = testnum + 1;
              uVar49 = (ulong)testnum;
            } while (testnum < 7);
            testnum = 0;
            do {
              if (*(char *)((long)&local_228 + (ulong)testnum) != '\0') {
                pEVar25 = (EVP_PKEY *)get_dsa((&dsa_bits_3)[testnum]);
                psVar41 = psVar1;
                if (pEVar25 == (EVP_PKEY *)0x0) {
LAB_001089c8:
                  lVar19 = 1;
                  BIO_printf(_bio_err,"DSA sign setup failure.  No DSA sign will be done.\n");
                  ERR_print_errors(_bio_err);
                  testmoderesult = 1;
                }
                else {
                  do {
                    uVar49 = (ulong)testnum;
                    pEVar15 = EVP_PKEY_CTX_new(pEVar25,(ENGINE *)0x0);
                    psVar41[uVar49 + 0x1e] = (size_t)pEVar15;
                    *psVar41 = psVar41[-1];
                    if ((((EVP_PKEY_CTX *)psVar41[(ulong)testnum + 0x1e] == (EVP_PKEY_CTX *)0x0) ||
                        (iVar10 = EVP_PKEY_sign_init((EVP_PKEY_CTX *)psVar41[(ulong)testnum + 0x1e])
                        , iVar10 < 1)) ||
                       (iVar10 = EVP_PKEY_sign((EVP_PKEY_CTX *)psVar41[(ulong)testnum + 0x1e],
                                               (uchar *)psVar41[-7],psVar41,(uchar *)psVar41[-8],
                                               0x14), uVar49 = uStack_2f0, iVar10 < 1))
                    goto LAB_001089c8;
                    psVar41 = psVar41 + 0x6ac;
                  } while (psVar2 != psVar41);
                  pkey_print_message(&_LC249,&_LC289,(&dsa_bits_3)[testnum],uStack_2f0 & 0xffffffff)
                  ;
                  app_tminterval(0,usertime);
                  iVar10 = run_benchmark(local_41c,DSA_sign_loop,__s);
                  lVar19 = (long)iVar10;
                  dVar60 = (double)app_tminterval(1,usertime);
                  alarm(0);
                  pcVar17 = "+R5:%ld:%u:%.2f\n";
                  if (mr == 0) {
                    pcVar17 = "%ld %u bits DSA sign ops in %.2fs\n";
                  }
                  BIO_printf(_bio_err,pcVar17,dVar60,lVar19,(ulong)(uint)(&dsa_bits_3)[testnum]);
                  uVar20 = (ulong)testnum;
                  (&dsa_results)[uVar20 * 2] = (double)iVar10 / dVar60;
                  pvVar40 = __s;
                  while( true ) {
                    pEVar15 = EVP_PKEY_CTX_new(pEVar25,(ENGINE *)0x0);
                    *(EVP_PKEY_CTX **)((long)pvVar40 + uVar20 * 8 + 0x150) = pEVar15;
                    pEVar15 = *(EVP_PKEY_CTX **)((long)pvVar40 + (ulong)testnum * 8 + 0x150);
                    if (((pEVar15 == (EVP_PKEY_CTX *)0x0) ||
                        (iVar10 = EVP_PKEY_verify_init(pEVar15), iVar10 < 1)) ||
                       (iVar10 = EVP_PKEY_verify(*(EVP_PKEY_CTX **)
                                                  ((long)pvVar40 + (ulong)testnum * 8 + 0x150),
                                                 *(uchar **)((long)pvVar40 + 0x18),
                                                 *(size_t *)((long)pvVar40 + 0x50),
                                                 *(uchar **)((long)pvVar40 + 0x10),0x24), iVar10 < 1
                       )) break;
                    pvVar40 = (void *)((long)pvVar40 + 0x3560);
                    if (pvVar40 == pvVar50) {
                      pkey_print_message("verify",&_LC289,(&dsa_bits_3)[testnum],uVar49 & 0xffffffff
                                        );
                      app_tminterval(0,usertime);
                      iVar10 = run_benchmark(local_41c,DSA_verify_loop,__s);
                      dVar60 = (double)app_tminterval(1,usertime);
                      alarm(0);
                      pcVar17 = "+R6:%ld:%u:%.2f\n";
                      if (mr == 0) {
                        pcVar17 = "%ld %u bits DSA verify ops in %.2fs\n";
                      }
                      BIO_printf(_bio_err,pcVar17,dVar60,(long)iVar10,
                                 (ulong)(uint)(&dsa_bits_3)[testnum]);
                      uVar49 = (ulong)testnum;
                      (&DAT_00113b08)[uVar49 * 2] = (double)iVar10 / dVar60;
                      goto LAB_00108a32;
                    }
                    uVar20 = (ulong)testnum;
                  }
                }
                BIO_printf(_bio_err,"DSA verify setup failure.  No DSA verify will be done.\n");
                ERR_print_errors(_bio_err);
                uVar49 = (ulong)testnum;
                testmoderesult = 1;
                *(undefined1 *)((long)&local_228 + uVar49) = 0;
LAB_00108a32:
                if (lVar19 < 2) {
                  uVar20 = 2;
                  if (1 < uVar49) {
                    uVar20 = uVar49;
                  }
                  __memset_chk((long)&local_228 + uVar49,0,2 - uVar49,uVar20 - uVar49);
                }
                EVP_PKEY_free(pEVar25);
              }
              testnum = testnum + 1;
            } while (testnum < 2);
            testnum = 0;
            do {
              if (*(char *)((long)&local_218 + (ulong)testnum) != '\0') {
                pEVar25 = (EVP_PKEY *)get_ecdsa(&ec_curves_10 + (ulong)testnum * 3);
                psVar41 = psVar1;
                if (pEVar25 == (EVP_PKEY *)0x0) {
LAB_00108aec:
                  lVar19 = 1;
                  BIO_printf(_bio_err,"ECDSA sign setup failure.  No ECDSA sign will be done.\n");
                  ERR_print_errors(_bio_err);
                  testmoderesult = 1;
                }
                else {
                  do {
                    uVar49 = (ulong)testnum;
                    pEVar15 = EVP_PKEY_CTX_new(pEVar25,(ENGINE *)0x0);
                    psVar41[uVar49 + 0x22] = (size_t)pEVar15;
                    *psVar41 = psVar41[-1];
                    if ((((EVP_PKEY_CTX *)psVar41[(ulong)testnum + 0x22] == (EVP_PKEY_CTX *)0x0) ||
                        (iVar10 = EVP_PKEY_sign_init((EVP_PKEY_CTX *)psVar41[(ulong)testnum + 0x22])
                        , iVar10 < 1)) ||
                       (iVar10 = EVP_PKEY_sign((EVP_PKEY_CTX *)psVar41[(ulong)testnum + 0x22],
                                               (uchar *)psVar41[-7],psVar41,(uchar *)psVar41[-8],
                                               0x14), iVar10 < 1)) goto LAB_00108aec;
                    psVar41 = psVar41 + 0x6ac;
                  } while (psVar41 != psVar2);
                  uVar12 = uStack_2f0._4_4_;
                  pkey_print_message(&_LC249,"ecdsa",(&DAT_00116dec)[(ulong)testnum * 6],
                                     uStack_2f0._4_4_);
                  app_tminterval(0,usertime);
                  iVar10 = run_benchmark(local_41c,ECDSA_sign_loop,__s);
                  lVar19 = (long)iVar10;
                  dVar60 = (double)app_tminterval(1,usertime);
                  alarm(0);
                  pcVar17 = "+R7:%ld:%u:%.2f\n";
                  if (mr == 0) {
                    pcVar17 = "%ld %u bits ECDSA sign ops in %.2fs\n";
                  }
                  BIO_printf(_bio_err,pcVar17,dVar60,lVar19,
                             (ulong)(uint)(&DAT_00116dec)[(ulong)testnum * 6]);
                  uVar49 = (ulong)testnum;
                  (&ecdsa_results)[uVar49 * 2] = (double)iVar10 / dVar60;
                  pvVar40 = __s;
                  while( true ) {
                    pEVar15 = EVP_PKEY_CTX_new(pEVar25,(ENGINE *)0x0);
                    *(EVP_PKEY_CTX **)((long)pvVar40 + uVar49 * 8 + 0x210) = pEVar15;
                    pEVar15 = *(EVP_PKEY_CTX **)((long)pvVar40 + (ulong)testnum * 8 + 0x210);
                    if (((pEVar15 == (EVP_PKEY_CTX *)0x0) ||
                        (iVar10 = EVP_PKEY_verify_init(pEVar15), iVar10 < 1)) ||
                       (iVar10 = EVP_PKEY_verify(*(EVP_PKEY_CTX **)
                                                  ((long)pvVar40 + (ulong)testnum * 8 + 0x210),
                                                 *(uchar **)((long)pvVar40 + 0x18),
                                                 *(size_t *)((long)pvVar40 + 0x50),
                                                 *(uchar **)((long)pvVar40 + 0x10),0x14), iVar10 < 1
                       )) break;
                    pvVar40 = (void *)((long)pvVar40 + 0x3560);
                    if (pvVar40 == pvVar50) {
                      pkey_print_message("verify","ecdsa",(&DAT_00116dec)[(ulong)testnum * 6],uVar12
                                        );
                      app_tminterval(0,usertime);
                      iVar10 = run_benchmark(local_41c,ECDSA_verify_loop,__s);
                      dVar60 = (double)app_tminterval(1,usertime);
                      alarm(0);
                      pcVar17 = "+R8:%ld:%u:%.2f\n";
                      if (mr == 0) {
                        pcVar17 = "%ld %u bits ECDSA verify ops in %.2fs\n";
                      }
                      BIO_printf(_bio_err,pcVar17,dVar60,(long)iVar10,
                                 (ulong)(uint)(&DAT_00116dec)[(ulong)testnum * 6]);
                      uVar49 = (ulong)testnum;
                      (&DAT_001137c8)[uVar49 * 2] = (double)iVar10 / dVar60;
                      goto LAB_00108b56;
                    }
                    uVar49 = (ulong)testnum;
                  }
                }
                BIO_printf(_bio_err,"ECDSA verify setup failure.  No ECDSA verify will be done.\n");
                ERR_print_errors(_bio_err);
                uVar49 = (ulong)testnum;
                testmoderesult = 1;
                *(undefined1 *)((long)&local_218 + uVar49) = 0;
LAB_00108b56:
                if (lVar19 < 2) {
                  uVar20 = 0x16;
                  if (0x15 < uVar49) {
                    uVar20 = uVar49;
                  }
                  __memset_chk((long)&local_218 + uVar49,0,0x16 - uVar49,uVar20 - uVar49);
                }
                EVP_PKEY_free(pEVar25);
              }
              testnum = testnum + 1;
            } while (testnum < 0x16);
            uVar49 = 0;
            testnum = 0;
            do {
              uVar43 = (uint)uVar49;
              if (local_1f8[uVar49] != '\0') {
                pvVar40 = __s;
                while (((pEVar25 = (EVP_PKEY *)get_ecdsa(&ec_curves_10 + uVar49 * 3),
                        pEVar25 != (EVP_PKEY *)0x0 &&
                        (peer = (EVP_PKEY *)get_ecdsa(&ec_curves_10 + (ulong)testnum * 3),
                        peer != (EVP_PKEY *)0x0)) &&
                       ((((pEVar15 = EVP_PKEY_CTX_new(pEVar25,(ENGINE *)0x0),
                          pEVar15 != (EVP_PKEY_CTX *)0x0 &&
                          ((iVar10 = EVP_PKEY_derive_init(pEVar15), 0 < iVar10 &&
                           (iVar10 = EVP_PKEY_derive_set_peer(pEVar15,peer), 0 < iVar10)))) &&
                         (iVar10 = EVP_PKEY_derive(pEVar15,(uchar *)0x0,(size_t *)&local_308),
                         0 < iVar10)) &&
                        ((undefined1 *)((long)&local_308[-1].attributes + 7U) < (undefined1 *)0x100)
                        )))) {
                  pEVar26 = EVP_PKEY_CTX_new(peer,(ENGINE *)0x0);
                  if (((pEVar26 == (EVP_PKEY_CTX *)0x0) ||
                      (iVar10 = EVP_PKEY_derive_init(pEVar26), iVar10 < 1)) ||
                     (iVar10 = EVP_PKEY_derive_set_peer(pEVar26,pEVar25), iVar10 < 1)) {
LAB_0010a0be:
                    pcVar17 = "ECDH computation failure.\n";
                    goto LAB_0010a092;
                  }
                  iVar10 = EVP_PKEY_derive(pEVar26,(uchar *)0x0,(size_t *)&local_300);
                  if (((iVar10 < 1) ||
                      (iVar10 = EVP_PKEY_derive(pEVar15,*(uchar **)((long)pvVar40 + 0x3b8),
                                                (size_t *)&local_308), iVar10 < 1)) ||
                     ((iVar10 = EVP_PKEY_derive(pEVar26,*(uchar **)((long)pvVar40 + 0x3c0),
                                                (size_t *)&local_300), iVar10 < 1 ||
                      (local_300 != local_308)))) goto LAB_0010a0be;
                  iVar10 = CRYPTO_memcmp(*(void **)((long)pvVar40 + 0x3b8),
                                         *(void **)((long)pvVar40 + 0x3c0),(size_t)local_308);
                  if (iVar10 != 0) {
                    pcVar17 = "ECDH computations don\'t match.\n";
                    goto LAB_0010a092;
                  }
                  uVar49 = (ulong)testnum;
                  *(EVP_PKEY_CTX **)((long)pvVar40 + uVar49 * 8 + 0x2c0) = pEVar15;
                  *(EVP_PKEY **)((long)pvVar40 + uVar49 * 8 + 0x3c8) = local_308;
                  pvVar40 = (void *)((long)pvVar40 + 0x3560);
                  EVP_PKEY_free(pEVar25);
                  EVP_PKEY_free(peer);
                  EVP_PKEY_CTX_free(pEVar26);
                  if (pvVar40 == pvVar50) {
                    pkey_print_message(&_LC246,&_LC191,(&DAT_00116dec)[(ulong)testnum * 6],
                                       local_2e8 & 0xffffffff);
                    Time_F(0);
                    iVar10 = run_benchmark(local_41c,ECDH_EVP_derive_key_loop,__s);
                    dVar60 = (double)Time_F(1);
                    pcVar17 = "%ld %u-bits ECDH ops in %.2fs\n";
                    if (mr != 0) {
                      pcVar17 = "+R9:%ld:%d:%.2f\n";
                    }
                    BIO_printf(_bio_err,pcVar17,(long)iVar10,
                               (ulong)(uint)(&DAT_00116dec)[(ulong)testnum * 6]);
                    uVar43 = testnum;
                    (&ecdh_results)[testnum] = (double)iVar10 / dVar60;
                    if ((long)iVar10 < 2) goto LAB_0010a04a;
                    goto LAB_0010953e;
                  }
                  uVar49 = (ulong)testnum;
                }
                pcVar17 = "ECDH key generation failure.\n";
LAB_0010a092:
                BIO_printf(_bio_err,pcVar17);
                ERR_print_errors(_bio_err);
                testmoderesult = 1;
                uVar43 = testnum;
LAB_0010a04a:
                uVar20 = (ulong)uVar43;
                uVar49 = 0x18;
                if (0x17 < uVar20) {
                  uVar49 = uVar20;
                }
                __memset_chk(local_1f8 + uVar20,0,0x18 - uVar20,uVar49 - uVar20);
              }
LAB_0010953e:
              testnum = uVar43 + 1;
              uVar49 = (ulong)testnum;
            } while (testnum < 0x18);
            testnum = 0;
            do {
              local_300 = (EVP_PKEY *)0x0;
              if (*(char *)((long)&local_226 + (ulong)testnum) != '\0') {
                pvVar40 = __s;
                do {
                  local_300 = (EVP_PKEY *)0x0;
                  uVar49 = (ulong)testnum;
                  uVar14 = EVP_MD_CTX_new();
                  *(undefined8 *)((long)pvVar40 + uVar49 * 8 + 0x380) = uVar14;
                  uVar49 = (ulong)testnum;
                  if (*(long *)((long)pvVar40 + uVar49 * 8 + 0x380) == 0) {
LAB_0010bd06:
                    BIO_printf(_bio_err,"EdDSA failure.\n");
                    ERR_print_errors(_bio_err);
                    testmoderesult = 1;
                    goto LAB_00109a37;
                  }
                  uVar14 = EVP_MD_CTX_new();
                  *(undefined8 *)((long)pvVar40 + uVar49 * 8 + 0x390) = uVar14;
                  if (*(long *)((long)pvVar40 + (ulong)testnum * 8 + 0x390) == 0) goto LAB_0010bd06;
                  pEVar15 = EVP_PKEY_CTX_new_id((&DAT_00117028)[(ulong)testnum * 6],(ENGINE *)0x0);
                  if (((pEVar15 == (EVP_PKEY_CTX *)0x0) ||
                      (iVar10 = EVP_PKEY_keygen_init(pEVar15), iVar10 < 1)) ||
                     (iVar10 = EVP_PKEY_keygen(pEVar15,&local_300), iVar10 < 1)) {
                    EVP_PKEY_CTX_free(pEVar15);
                    goto LAB_0010bd06;
                  }
                  EVP_PKEY_CTX_free(pEVar15);
                  iVar10 = EVP_DigestSignInit(*(EVP_MD_CTX **)
                                               ((long)pvVar40 + (ulong)testnum * 8 + 0x380),
                                              (EVP_PKEY_CTX **)0x0,(EVP_MD *)0x0,(ENGINE *)0x0,
                                              local_300);
                  if (iVar10 == 0) {
                    EVP_PKEY_free(local_300);
                    goto LAB_0010bd06;
                  }
                  iVar10 = EVP_DigestVerifyInit
                                     (*(EVP_MD_CTX **)((long)pvVar40 + (ulong)testnum * 8 + 0x390),
                                      (EVP_PKEY_CTX **)0x0,(EVP_MD *)0x0,(ENGINE *)0x0,local_300);
                  if (iVar10 == 0) {
                    EVP_PKEY_free(local_300);
                    goto LAB_0010bd06;
                  }
                  EVP_PKEY_free(local_300);
                  pvVar40 = (void *)((long)pvVar40 + 0x3560);
                  local_300 = (EVP_PKEY *)0x0;
                  psVar41 = psVar1;
                } while (pvVar40 != pvVar50);
                do {
                  sVar34 = psVar41[(ulong)testnum + 0x66];
                  *psVar41 = (&DAT_00117030)[(ulong)testnum * 3];
                  iVar10 = EVP_DigestSign(sVar34,psVar41[-7],psVar41,psVar41[-8],0x14);
                  pvVar40 = __s;
                  if (iVar10 == 0) {
                    lVar19 = 1;
                    BIO_printf(_bio_err,"EdDSA sign failure.  No EdDSA sign will be done.\n");
                    ERR_print_errors(_bio_err);
                    uVar49 = (ulong)testnum;
                    testmoderesult = 1;
                    goto LAB_0010b983;
                  }
                  psVar41 = psVar41 + 0x6ac;
                } while (psVar2 != psVar41);
                pkey_print_message(&_LC249,(&ed_curves_11)[(ulong)testnum * 3],
                                   (&DAT_0011702c)[(ulong)testnum * 6],local_2e8._4_4_);
                Time_F(0);
                iVar10 = run_benchmark(local_41c,EdDSA_sign_loop,__s);
                lVar19 = (long)iVar10;
                dVar60 = (double)Time_F(1);
                pcVar17 = "%ld %u bits %s sign ops in %.2fs \n";
                if (mr != 0) {
                  pcVar17 = "+R10:%ld:%u:%s:%.2f\n";
                }
                BIO_printf(_bio_err,pcVar17,lVar19,(ulong)(uint)(&DAT_0011702c)[(ulong)testnum * 6],
                           (&ed_curves_11)[(ulong)testnum * 3]);
                uVar49 = (ulong)testnum;
                (&eddsa_results)[uVar49 * 2] = (double)iVar10 / dVar60;
LAB_0010b983:
                do {
                  iVar10 = EVP_DigestVerify(*(undefined8 *)((long)pvVar40 + uVar49 * 8 + 0x390),
                                            *(undefined8 *)((long)pvVar40 + 0x18),
                                            *(undefined8 *)((long)pvVar40 + 0x50),
                                            *(undefined8 *)((long)pvVar40 + 0x10),0x14);
                  if (iVar10 != 1) {
                    BIO_printf(_bio_err,"EdDSA verify failure.  No EdDSA verify will be done.\n");
                    ERR_print_errors(_bio_err);
                    uVar49 = (ulong)testnum;
                    testmoderesult = 1;
                    *(undefined1 *)((long)&local_226 + uVar49) = 0;
                    goto LAB_0010baac;
                  }
                  pvVar40 = (void *)((long)pvVar40 + 0x3560);
                  uVar49 = (ulong)testnum;
                } while (pvVar40 != pvVar50);
                pkey_print_message("verify",(&ed_curves_11)[uVar49 * 3],(&DAT_0011702c)[uVar49 * 6],
                                   local_2e8._4_4_);
                Time_F(0);
                iVar10 = run_benchmark(local_41c,EdDSA_verify_loop,__s);
                dVar60 = (double)Time_F(1);
                pcVar17 = "%ld %u bits %s verify ops in %.2fs\n";
                if (mr != 0) {
                  pcVar17 = "+R11:%ld:%u:%s:%.2f\n";
                }
                BIO_printf(_bio_err,pcVar17,(long)iVar10,
                           (ulong)(uint)(&DAT_0011702c)[(ulong)testnum * 6],
                           (&ed_curves_11)[(ulong)testnum * 3]);
                uVar49 = (ulong)testnum;
                (&DAT_001137a8)[uVar49 * 2] = (double)iVar10 / dVar60;
LAB_0010baac:
                if (lVar19 < 2) {
                  __memset_chk((long)&local_226 + uVar49,0,2 - uVar49);
                }
              }
LAB_00109a37:
              testnum = testnum + 1;
            } while (testnum < 2);
            testnum = 0;
LAB_00109ba0:
            if (cVar55 == '\0') {
              do {
                testnum = testnum + 1;
              } while (testnum == 0);
LAB_00109bb4:
              cVar55 = '\0';
            }
            else {
              do {
                local_300 = (EVP_PKEY *)0x0;
                pvVar40 = __s;
                while( true ) {
                  uVar49 = (ulong)testnum;
                  uVar14 = EVP_MD_CTX_new();
                  *(undefined8 *)((long)pvVar40 + uVar49 * 8 + 0x3a0) = uVar14;
                  uVar20 = (ulong)testnum;
                  lVar19 = EVP_MD_CTX_new();
                  uVar49 = (ulong)testnum;
                  *(long *)((long)pvVar40 + uVar20 * 8 + 0x3a8) = lVar19;
                  if ((*(long *)((long)pvVar40 + uVar49 * 8 + 0x3a0) == 0) || (lVar19 == 0))
                  goto LAB_0010b600;
                  local_300 = (EVP_PKEY *)0x0;
                  pEVar15 = EVP_PKEY_CTX_new_id(0x494,(ENGINE *)0x0);
                  if (pEVar15 == (EVP_PKEY_CTX *)0x0) break;
                  iVar10 = EVP_PKEY_keygen_init(pEVar15);
                  if (((iVar10 < 1) ||
                      (iVar10 = EVP_PKEY_CTX_set_ec_paramgen_curve_nid
                                          (pEVar15,*(undefined4 *)
                                                    (&DAT_00116db8 + (ulong)testnum * 0x18)),
                      iVar10 < 1)) || (iVar10 = EVP_PKEY_keygen(pEVar15,&local_300), iVar10 < 1)) {
LAB_0010b5fb:
                    EVP_PKEY_CTX_free(pEVar15);
                    goto LAB_0010b600;
                  }
                  EVP_PKEY_CTX_free(pEVar15);
                  *(EVP_PKEY **)((long)pvVar40 + (ulong)testnum * 8 + 0x3b0) = local_300;
                  iVar10 = EVP_PKEY_get_size();
                  *(long *)((long)pvVar40 + 0x50) = (long)iVar10;
                  pEVar26 = EVP_PKEY_CTX_new(local_300,(ENGINE *)0x0);
                  pEVar15 = EVP_PKEY_CTX_new(local_300,(ENGINE *)0x0);
                  if ((pEVar26 == (EVP_PKEY_CTX *)0x0) || (pEVar15 == (EVP_PKEY_CTX *)0x0))
                  goto LAB_0010b5fb;
                  EVP_MD_CTX_set_pkey_ctx
                            (*(undefined8 *)((long)pvVar40 + (ulong)testnum * 8 + 0x3a0),pEVar26);
                  EVP_MD_CTX_set_pkey_ctx
                            (*(undefined8 *)((long)pvVar40 + (ulong)testnum * 8 + 0x3a8),pEVar15);
                  iVar10 = EVP_PKEY_CTX_set1_id(pEVar26,"TLSv1.3+GM+Cipher+Suite",0x17);
                  if ((iVar10 != 1) ||
                     (iVar10 = EVP_PKEY_CTX_set1_id(pEVar15,"TLSv1.3+GM+Cipher+Suite",0x17),
                     pEVar25 = local_300, iVar10 != 1)) goto LAB_0010b600;
                  pEVar30 = (EVP_MD *)EVP_sm3();
                  iVar10 = EVP_DigestSignInit(*(EVP_MD_CTX **)
                                               ((long)pvVar40 + (ulong)testnum * 8 + 0x3a0),
                                              (EVP_PKEY_CTX **)0x0,pEVar30,(ENGINE *)0x0,pEVar25);
                  pEVar25 = local_300;
                  if (iVar10 == 0) goto LAB_0010b600;
                  pEVar30 = (EVP_MD *)EVP_sm3();
                  iVar10 = EVP_DigestVerifyInit
                                     (*(EVP_MD_CTX **)((long)pvVar40 + (ulong)testnum * 8 + 0x3a8),
                                      (EVP_PKEY_CTX **)0x0,pEVar30,(ENGINE *)0x0,pEVar25);
                  if (iVar10 == 0) goto LAB_0010b600;
                  pvVar40 = (void *)((long)pvVar40 + 0x3560);
                  pvVar29 = __s;
                  if (pvVar40 == pvVar50) goto LAB_0010b845;
                }
                EVP_PKEY_CTX_free((EVP_PKEY_CTX *)0x0);
LAB_0010b600:
                BIO_printf(_bio_err,"SM2 init failure.\n");
                ERR_print_errors(_bio_err);
                testnum = testnum + 1;
                testmoderesult = 1;
              } while (testnum == 0);
            }
            goto LAB_00109bb9;
          }
          OSSL_PARAM_construct_octet_string(&local_378,&_LC219,key32_6,0x20);
          local_2a8._0_8_ = local_358;
          local_2c8._8_8_ = uStack_370;
          local_2c8._0_8_ = local_378;
          local_2b8._8_8_ = uStack_360;
          local_2b8._0_8_ = local_368;
          OSSL_PARAM_construct_end(&local_378);
          local_2a8._8_8_ = local_378;
          local_298._8_8_ = local_368;
          local_298._0_8_ = uStack_370;
          local_288._8_8_ = local_358;
          local_288._0_8_ = uStack_360;
          iVar10 = mac_setup("KMAC-256",&local_330,local_2c8,__s,local_3f0);
          if (0 < iVar10) {
            testnum = 0;
            if (uVar56 != 0) {
              uVar49 = local_2f8 & 0xffffffff;
              do {
                print_message(PTR_s_kmac256_001177b0,*(undefined4 *)(lengths + (ulong)testnum * 4),
                              uVar49);
                app_tminterval(0,usertime);
                iVar10 = run_benchmark(local_41c,KMAC256_loop,__s);
                uVar14 = app_tminterval(1,usertime);
                alarm(0);
                print_result(uVar14,0x1e,testnum,iVar10);
                if (iVar10 < 0) break;
                testnum = testnum + 1;
              } while (testnum < uVar56);
            }
            mac_teardown(&local_330,__s,local_3f0);
            goto LAB_0010815f;
          }
        }
        else {
          sVar34 = strlen(evp_mac_ciphername);
          local_300 = (EVP_PKEY *)0x0;
          iVar10 = opt_cipher(puVar21,&local_300);
          if (iVar10 != 0) {
            iVar10 = EVP_CIPHER_get_key_length(local_300);
            EVP_CIPHER_free(local_300);
            if (iVar10 - 1U < 0x20) {
              evp_cmac_name = (char *)app_malloc(sVar34 + 7,"CMAC name");
              BIO_snprintf(evp_cmac_name,sVar34 + 7,"cmac(%s)",evp_mac_ciphername);
              PTR__LC198_001177a0 = evp_cmac_name;
              OSSL_PARAM_construct_utf8_string(&local_378,"cipher",evp_mac_ciphername,0);
              puVar39 = &local_378;
              puVar35 = (undefined4 *)local_2c8;
              for (lVar19 = 10; lVar19 != 0; lVar19 = lVar19 + -1) {
                *puVar35 = *(undefined4 *)puVar39;
                puVar39 = (undefined8 *)((long)puVar39 + (ulong)bVar59 * -8 + 4);
                puVar35 = puVar35 + (ulong)bVar59 * -2 + 1;
              }
              OSSL_PARAM_construct_octet_string(&local_378,&_LC219,key32_6,(long)iVar10);
              puVar39 = &local_378;
              puVar35 = (undefined4 *)(local_2a8 + 8);
              for (lVar19 = 10; lVar19 != 0; lVar19 = lVar19 + -1) {
                *puVar35 = *(undefined4 *)puVar39;
                puVar39 = (undefined8 *)((long)puVar39 + (ulong)bVar59 * -8 + 4);
                puVar35 = puVar35 + (ulong)bVar59 * -2 + 1;
              }
              OSSL_PARAM_construct_end(&local_378);
              puVar39 = &local_378;
              puVar33 = &local_278;
              for (lVar19 = 10; lVar19 != 0; lVar19 = lVar19 + -1) {
                *(undefined4 *)puVar33 = *(undefined4 *)puVar39;
                puVar39 = (undefined8 *)((long)puVar39 + (ulong)bVar59 * -8 + 4);
                puVar33 = (undefined8 *)((long)puVar33 + (ulong)bVar59 * -8 + 4);
              }
              iVar10 = mac_setup(&_LC180,&local_330,local_2c8,__s,local_3f0);
              if (0 < iVar10) {
                testnum = 0;
                if (uVar56 != 0) {
                  uVar49 = local_2f8 & 0xffffffff;
                  do {
                    print_message(PTR__LC198_001177a0,*(undefined4 *)(lengths + (ulong)testnum * 4),
                                  uVar49);
                    app_tminterval(0,usertime);
                    iVar10 = run_benchmark(local_41c,CMAC_loop,__s);
                    uVar14 = app_tminterval(1,usertime);
                    alarm(0);
                    print_result(uVar14,0x1c,testnum,iVar10);
                    if (iVar10 < 0) break;
                    testnum = testnum + 1;
                  } while (testnum < uVar56);
                }
                mac_teardown(&local_330,__s,local_3f0);
                goto LAB_00108143;
              }
            }
            else {
              BIO_printf(_bio_err,"\nRequested CMAC cipher with unsupported key length.\n");
            }
          }
        }
LAB_001088f9:
        local_400 = (char *)local_330;
        local_418 = 0;
        local_428 = 0;
      }
      else {
        sVar34 = strlen(evp_mac_mdname);
        evp_hmac_name = (char *)app_malloc(sVar34 + 7,"HMAC name");
        BIO_snprintf(evp_hmac_name,sVar34 + 7,"hmac(%s)",evp_mac_mdname);
        PTR_s_hmac_sha256__00117708 = evp_hmac_name;
        OSSL_PARAM_construct_utf8_string(&local_378,"digest",evp_mac_mdname,0);
        local_2c8._8_8_ = uStack_370;
        local_2c8._0_8_ = local_378;
        local_2b8._8_8_ = uStack_360;
        local_2b8._0_8_ = local_368;
        local_2a8._0_8_ = local_358;
        OSSL_PARAM_construct_octet_string(&local_378,&_LC219,"This is a key...",0x10);
        local_2a8._8_8_ = local_378;
        local_298._8_8_ = local_368;
        local_298._0_8_ = uStack_370;
        local_288._8_8_ = local_358;
        local_288._0_8_ = uStack_360;
        OSSL_PARAM_construct_end(&local_378);
        local_258 = local_358;
        local_278 = local_378;
        uStack_270 = uStack_370;
        local_268 = local_368;
        uStack_260 = uStack_360;
        iVar10 = mac_setup(&_LC177,&local_330,local_2c8,__s);
        uVar49 = local_2f8;
        if (0 < iVar10) {
          testnum = 0;
          if (uVar56 != 0) {
            do {
              print_message(PTR_s_hmac_sha256__00117708,
                            *(undefined4 *)(lengths + (ulong)testnum * 4),uVar49 & 0xffffffff);
              app_tminterval(0,usertime);
              iVar10 = run_benchmark(local_41c,HMAC_loop,__s);
              uVar14 = app_tminterval(1,usertime);
              alarm(0);
              print_result(uVar14,9,testnum,iVar10);
              if (iVar10 < 0) break;
              testnum = testnum + 1;
            } while (testnum < uVar56);
          }
          puVar39 = (undefined8 *)((long)__s + 0x4c8);
          puVar33 = puVar39 + (long)local_430 * 0x6ac;
          do {
            uVar14 = *puVar39;
            puVar39 = puVar39 + 0x6ac;
            EVP_MAC_CTX_free(uVar14);
          } while (puVar39 != puVar33);
          EVP_MAC_free(local_330);
          local_330 = 0;
          goto LAB_0010693f;
        }
LAB_001076ce:
        local_418 = 0;
        local_428 = 0;
        local_400 = (char *)local_330;
      }
    }
    else {
      iVar47 = iVar9 + 0x40;
      if (iVar9 < 0x7fffffc0) goto LAB_00105a6d;
      BIO_printf(_bio_err,"Error: buffer size too large\n");
LAB_00105ef9:
      local_400 = (char *)0x0;
      local_418 = 0;
      local_428 = 0;
      local_3f8 = 0;
    }
  }
LAB_001046a2:
  local_390 = 1;
LAB_001046ad:
  ERR_print_errors(_bio_err);
  local_430 = (undefined8 *)(ulong)local_3f0;
  if (local_3f0 != 0) {
LAB_001046ca:
    local_438 = (long *)((long)__s + 0x98);
    puVar39 = (undefined8 *)((long)__s + 0x210);
    lVar19 = (long)local_430 * 0x6ac;
    puVar33 = (undefined8 *)((long)__s + 0x380);
    local_430 = (undefined8 *)((long)__s + 0x4b0);
    do {
      CRYPTO_free((void *)puVar33[-0x6c]);
      CRYPTO_free((void *)puVar33[-0x6b]);
      BN_free((BIGNUM *)0x0);
      EVP_PKEY_CTX_free(local_320);
      puVar46 = puVar33 + -100;
      do {
        puVar48 = puVar46 + 1;
        EVP_PKEY_CTX_free((EVP_PKEY_CTX *)*puVar46);
        EVP_PKEY_CTX_free((EVP_PKEY_CTX *)puVar46[7]);
        EVP_PKEY_CTX_free((EVP_PKEY_CTX *)puVar46[0xe]);
        EVP_PKEY_CTX_free((EVP_PKEY_CTX *)puVar46[0x15]);
        puVar46 = puVar48;
      } while (puVar48 != local_438);
      puVar46 = puVar33 + 0x21;
      CRYPTO_free((void *)puVar33[0x26]);
      CRYPTO_free((void *)puVar33[0x27]);
      do {
        pEVar15 = (EVP_PKEY_CTX *)*puVar46;
        puVar46 = puVar46 + 1;
        EVP_PKEY_CTX_free(pEVar15);
      } while (puVar46 != local_430);
      EVP_PKEY_CTX_free((EVP_PKEY_CTX *)puVar33[-0x48]);
      EVP_PKEY_CTX_free((EVP_PKEY_CTX *)puVar33[-0x46]);
      EVP_PKEY_CTX_free((EVP_PKEY_CTX *)puVar33[-0x47]);
      EVP_PKEY_CTX_free((EVP_PKEY_CTX *)puVar33[-0x45]);
      puVar46 = puVar33 + -0x44;
      do {
        puVar48 = puVar46 + 1;
        EVP_PKEY_CTX_free((EVP_PKEY_CTX *)*puVar46);
        EVP_PKEY_CTX_free((EVP_PKEY_CTX *)puVar46[0x16]);
        puVar46 = puVar48;
      } while (puVar48 != puVar39);
      puVar46 = puVar33 + -0x18;
      do {
        pEVar15 = (EVP_PKEY_CTX *)*puVar46;
        puVar46 = puVar46 + 1;
        EVP_PKEY_CTX_free(pEVar15);
      } while (puVar46 != puVar33);
      EVP_MD_CTX_free(*puVar33);
      EVP_MD_CTX_free(puVar33[2]);
      EVP_MD_CTX_free(puVar33[1]);
      EVP_MD_CTX_free(puVar33[3]);
      lVar27 = puVar33[4];
      if (lVar27 != 0) {
        pEVar15 = (EVP_PKEY_CTX *)EVP_MD_CTX_get_pkey_ctx();
        if (pEVar15 != (EVP_PKEY_CTX *)0x0) {
          EVP_PKEY_CTX_free(pEVar15);
        }
        lVar27 = puVar33[4];
      }
      EVP_MD_CTX_free(lVar27);
      lVar27 = puVar33[5];
      if (lVar27 != 0) {
        pEVar15 = (EVP_PKEY_CTX *)EVP_MD_CTX_get_pkey_ctx();
        if (pEVar15 != (EVP_PKEY_CTX *)0x0) {
          EVP_PKEY_CTX_free(pEVar15);
        }
        lVar27 = puVar33[5];
      }
      EVP_MD_CTX_free(lVar27);
      uVar49 = 0;
      puVar46 = puVar33 + 0x2a;
      EVP_PKEY_free((EVP_PKEY *)puVar33[6]);
      if (kems_algs_len != 0) {
        do {
          uVar49 = uVar49 + 1;
          EVP_PKEY_CTX_free((EVP_PKEY_CTX *)*puVar46);
          EVP_PKEY_CTX_free((EVP_PKEY_CTX *)puVar46[0x6f]);
          EVP_PKEY_CTX_free((EVP_PKEY_CTX *)puVar46[0xde]);
          CRYPTO_free((void *)puVar46[0x22b]);
          CRYPTO_free((void *)puVar46[0x29a]);
          CRYPTO_free((void *)puVar46[0x309]);
          puVar46 = puVar46 + 1;
        } while (uVar49 < kems_algs_len);
      }
      uVar49 = 0;
      if (sigs_algs_len != 0) {
        do {
          EVP_PKEY_CTX_free((EVP_PKEY_CTX *)puVar33[uVar49 + 0x3a2]);
          EVP_PKEY_CTX_free((EVP_PKEY_CTX *)puVar33[uVar49 + 0x411]);
          EVP_PKEY_CTX_free((EVP_PKEY_CTX *)puVar33[uVar49 + 0x480]);
          lVar27 = uVar49 + 0x5cd;
          uVar49 = uVar49 + 1;
          CRYPTO_free((void *)puVar33[lVar27]);
        } while (uVar49 < sigs_algs_len);
      }
      puVar46 = puVar33 + 0x6ac;
      puVar39 = puVar39 + 0x6ac;
      CRYPTO_free((void *)puVar33[7]);
      CRYPTO_free((void *)puVar33[8]);
      local_438 = local_438 + 0x6ac;
      local_430 = local_430 + 0x6ac;
      puVar33 = puVar46;
    } while ((undefined8 *)((long)__s + 0x380) + lVar19 != puVar46);
  }
  CRYPTO_free(evp_hmac_name);
  uVar49 = 0;
  CRYPTO_free(evp_cmac_name);
  if (kems_algs_len != 0) {
    do {
      puVar39 = &kems_algname + uVar49;
      uVar49 = uVar49 + 1;
      CRYPTO_free((void *)*puVar39);
    } while (uVar49 < kems_algs_len);
  }
  if (local_428 != 0) {
    OPENSSL_sk_pop_free(local_428,EVP_KEM_free);
  }
  uVar49 = 0;
  if (sigs_algs_len != 0) {
    do {
      puVar39 = &sigs_algname + uVar49;
      uVar49 = uVar49 + 1;
      CRYPTO_free((void *)*puVar39);
    } while (uVar49 < sigs_algs_len);
  }
  if (local_418 != 0) {
    OPENSSL_sk_pop_free(local_418,EVP_SIGNATURE_free);
  }
  if ((local_41c != 0) && (local_3f0 != 0)) {
    puVar39 = (undefined8 *)((long)__s + 8);
    puVar33 = puVar39 + (ulong)local_3f0 * 0x6ac;
    do {
      uVar14 = *puVar39;
      puVar39 = puVar39 + 0x6ac;
      ASYNC_WAIT_CTX_free(uVar14);
    } while (puVar39 != puVar33);
  }
  if (local_3ec != 0) {
    ASYNC_cleanup_thread();
  }
  CRYPTO_free(__s);
  release_engine(local_3f8);
  EVP_CIPHER_free(local_338);
  EVP_MAC_free(local_400);
  NCONF_free(local_3e8);
code_r0x00104b60:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_390;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


