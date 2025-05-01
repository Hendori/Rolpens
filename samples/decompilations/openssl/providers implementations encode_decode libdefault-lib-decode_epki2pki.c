
undefined1 * epki2pki_settable_ctx_params(void)

{
  return settables_0;
}



void epki2pki_freectx(void *param_1)

{
  CRYPTO_free(param_1);
  return;
}



bool epki2pki_set_ctx_params(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long in_FS_OFFSET;
  bool bVar3;
  long local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = param_1 + 8;
  lVar2 = OSSL_PARAM_locate_const(param_2,"properties",0);
  bVar3 = true;
  if (lVar2 != 0) {
    iVar1 = OSSL_PARAM_get_utf8_string(lVar2,&local_18,0x100);
    bVar3 = iVar1 != 0;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void epki2pki_newctx(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           CRYPTO_zalloc(0x108,"providers/implementations/encode_decode/decode_epki2pki.c",0x2b);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
  }
  return;
}



uint ossl_epki2pki_der_decode
               (uchar *param_1,long param_2,undefined8 param_3,code *param_4,undefined8 param_5,
               code *param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  int iVar1;
  uint uVar2;
  X509_SIG *a;
  long lVar3;
  PKCS8_PRIV_KEY_INFO *p8;
  long in_FS_OFFSET;
  undefined8 local_598;
  undefined8 uStack_590;
  undefined8 local_588;
  undefined8 uStack_580;
  undefined8 local_578;
  int local_564;
  uchar *local_560;
  uchar *local_558;
  X509_ALGOR *local_550;
  ulong local_548;
  undefined4 local_540;
  undefined4 uStack_53c;
  undefined8 local_538;
  undefined8 uStack_530;
  undefined8 local_528;
  undefined8 uStack_520;
  undefined8 local_518;
  undefined8 local_510;
  undefined8 uStack_508;
  undefined8 local_500;
  undefined8 uStack_4f8;
  undefined8 local_4f0;
  undefined8 local_4e8;
  undefined8 uStack_4e0;
  undefined8 local_4d8;
  undefined8 uStack_4d0;
  undefined8 local_4c8;
  undefined8 local_4c0;
  undefined8 uStack_4b8;
  undefined8 local_4b0;
  undefined8 uStack_4a8;
  undefined8 local_4a0;
  undefined8 local_498;
  undefined8 uStack_490;
  undefined8 local_488;
  undefined8 uStack_480;
  undefined8 local_478;
  undefined8 local_470;
  undefined8 uStack_468;
  undefined8 local_460;
  undefined8 uStack_458;
  undefined8 local_450;
  char local_448 [1032];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_558 = (uchar *)0x0;
  local_550 = (X509_ALGOR *)0x0;
  local_560 = param_1;
  ERR_set_mark();
  a = d2i_X509_SIG((X509_SIG **)0x0,&local_560,param_2);
  if (a == (X509_SIG *)0x0) {
    ERR_pop_to_mark();
    uVar2 = 1;
  }
  else {
    local_548 = 0;
    ERR_clear_last_mark();
    iVar1 = (*param_6)(local_448,0x400,&local_548,0,param_7);
    if (iVar1 == 0) {
      ERR_new();
      ERR_set_debug("providers/implementations/encode_decode/decode_epki2pki.c",0x88,
                    "ossl_epki2pki_der_decode");
      ERR_set_error(0x39,0x9f,0);
      uVar2 = 0;
    }
    else {
      local_564 = 0;
      X509_SIG_get0(a,&local_550,&local_540);
      lVar3 = PKCS12_pbe_crypt_ex(local_550,local_448,local_548 & 0xffffffff,
                                  *(undefined8 *)((undefined4 *)CONCAT44(uStack_53c,local_540) + 2),
                                  *(undefined4 *)CONCAT44(uStack_53c,local_540),&local_558,
                                  &local_564,0,param_8,param_9);
      if (lVar3 != 0) {
        param_2 = (long)local_564;
        param_1 = local_558;
      }
      uVar2 = (uint)(lVar3 != 0);
      local_550 = (X509_ALGOR *)0x0;
    }
    X509_SIG_free(a);
  }
  ERR_set_mark();
  local_560 = param_1;
  p8 = d2i_PKCS8_PRIV_KEY_INFO((PKCS8_PRIV_KEY_INFO **)0x0,&local_560,param_2);
  ERR_pop_to_mark();
  if (p8 != (PKCS8_PRIV_KEY_INFO *)0x0) {
    iVar1 = PKCS8_pkey_get0((ASN1_OBJECT **)0x0,(uchar **)0x0,(int *)0x0,&local_550,p8);
    if (iVar1 != 0) {
      local_540 = 2;
      OBJ_obj2txt(local_448,0x32,local_550->algorithm,0);
      OSSL_PARAM_construct_utf8_string(&local_598,"data-type",local_448,0);
      local_538 = local_598;
      uStack_530 = uStack_590;
      local_528 = local_588;
      uStack_520 = uStack_580;
      local_518 = local_578;
      OSSL_PARAM_construct_utf8_string(&local_598,"input-type",&_LC3,0);
      local_510 = local_598;
      uStack_508 = uStack_590;
      local_500 = local_588;
      uStack_4f8 = uStack_580;
      local_4f0 = local_578;
      OSSL_PARAM_construct_utf8_string(&local_598,"data-structure","PrivateKeyInfo",0);
      local_4c8 = local_578;
      local_4e8 = local_598;
      uStack_4e0 = uStack_590;
      local_4d8 = local_588;
      uStack_4d0 = uStack_580;
      OSSL_PARAM_construct_octet_string(&local_598,&_LC7,param_1,param_2);
      local_4c0 = local_598;
      uStack_4b8 = uStack_590;
      local_4b0 = local_588;
      uStack_4a8 = uStack_580;
      local_4a0 = local_578;
      OSSL_PARAM_construct_int(&local_598,&_LC8,&local_540);
      local_478 = local_578;
      local_498 = local_598;
      uStack_490 = uStack_590;
      local_488 = local_588;
      uStack_480 = uStack_580;
      OSSL_PARAM_construct_end(&local_598);
      local_450 = local_578;
      local_470 = local_598;
      uStack_468 = uStack_590;
      local_460 = local_588;
      uStack_458 = uStack_580;
      uVar2 = (*param_4)(&local_538,param_5);
    }
  }
  PKCS8_PRIV_KEY_INFO_free(p8);
  CRYPTO_free(local_558);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4
epki2pki_decode(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  void *ptr;
  int iVar2;
  undefined4 uVar3;
  BIO *a;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined8 *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (undefined8 *)0x0;
  a = (BIO *)ossl_bio_new_from_core_bio(*param_1);
  uVar3 = 0;
  if (a != (BIO *)0x0) {
    iVar2 = asn1_d2i_read_bio(a,&local_48);
    BIO_free(a);
    uVar3 = 1;
    if (-1 < iVar2) {
      uVar1 = *local_48;
      ptr = (void *)local_48[1];
      CRYPTO_free(local_48);
      uVar4 = ossl_prov_ctx_get0_libctx(*param_1);
      uVar3 = ossl_epki2pki_der_decode
                        (ptr,uVar1,param_3,param_4,param_5,param_6,param_7,uVar4,param_1 + 1);
      CRYPTO_free(ptr);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


