
undefined8 FuzzerInitialize(void)

{
  FuzzerSetRand();
  OPENSSL_init_crypto(0xe,0);
  pctx = ASN1_PCTX_new();
  ASN1_PCTX_set_flags(pctx,0x8f);
  ASN1_PCTX_set_str_flags(pctx,0xd0);
  ERR_clear_error();
  CRYPTO_free_ex_index(0,0xffffffff);
  return 1;
}



undefined8 FuzzerTestOneInput(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  BIO_METHOD *type;
  BIO *out;
  long lVar2;
  EVP_PKEY *pkey;
  EVP_PKEY_CTX *ctx;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined8 local_38;
  undefined8 local_30;
  EVP_PKEY *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = (EVP_PKEY *)0x0;
  local_38 = param_2;
  local_30 = param_1;
  type = BIO_s_null();
  out = BIO_new(type);
  lVar2 = OSSL_DECODER_CTX_new_for_pkey(&local_28,0,0,0,0,0);
  if (lVar2 == 0) goto LAB_001000ed;
  iVar1 = OSSL_DECODER_from_data(lVar2,&local_30,&local_38,0x10009b);
  if (iVar1 != 0) {
    EVP_PKEY_print_public(out,local_28,1,pctx);
    EVP_PKEY_print_private(out,local_28,1,pctx);
    EVP_PKEY_print_params(out,local_28,1,pctx);
    pkey = (EVP_PKEY *)EVP_PKEY_dup(local_28);
    if (pkey == (EVP_PKEY *)0x0) {
      OPENSSL_die("assertion failed: pkey2 != NULL","fuzz/decoder.c",0x3e);
      goto LAB_0010024f;
    }
    EVP_PKEY_eq(local_28);
    EVP_PKEY_free(pkey);
    ctx = EVP_PKEY_CTX_new(local_28,(ENGINE *)0x0);
    iVar1 = EVP_PKEY_is_a(local_28,&_LC2);
    if (iVar1 == 0) {
      iVar1 = EVP_PKEY_is_a(local_28,&_LC3);
      if (iVar1 != 0) goto LAB_00100200;
      EVP_PKEY_param_check(ctx);
    }
    else {
LAB_00100200:
      iVar1 = EVP_PKEY_get_bits(local_28);
      if (iVar1 < 0x801) {
        EVP_PKEY_param_check(ctx);
      }
    }
    EVP_PKEY_public_check(ctx);
    iVar1 = EVP_PKEY_get_bits(local_28);
    if (iVar1 < 0x1001) {
      EVP_PKEY_private_check(ctx);
      EVP_PKEY_pairwise_check(ctx);
    }
    if (ctx == (EVP_PKEY_CTX *)0x0) {
LAB_0010024f:
      OPENSSL_die("assertion failed: ctx != NULL","fuzz/decoder.c",0x51);
      ASN1_PCTX_free(pctx);
      uVar3 = FuzzerClearRand();
      return uVar3;
    }
    EVP_PKEY_CTX_free(ctx);
    EVP_PKEY_free(local_28);
  }
  OSSL_DECODER_CTX_free(lVar2);
  BIO_free(out);
  ERR_clear_error();
LAB_001000ed:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void FuzzerCleanup(void)

{
  ASN1_PCTX_free(pctx);
  FuzzerClearRand();
  return;
}


