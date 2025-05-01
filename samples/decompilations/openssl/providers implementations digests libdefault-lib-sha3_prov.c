
void keccak_copyctx(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  for (lVar1 = 0x36; lVar1 != 0; lVar1 = lVar1 + -1) {
    *param_1 = *param_2;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}



undefined1 * shake_gettable_ctx_params(void)

{
  return known_shake_gettable_ctx_params_3;
}



undefined1 * shake_settable_ctx_params(void)

{
  return known_shake_settable_ctx_params_1;
}



undefined8 keccak_init(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = ossl_prov_is_running();
  if ((int)uVar1 == 0) {
    return uVar1;
  }
  ossl_sha3_reset(param_1);
  return 1;
}



void sha3_224_get_params(undefined8 param_1)

{
  ossl_digest_default_get_params(param_1,0x90,0x1c,2);
  return;
}



void sha3_256_get_params(undefined8 param_1)

{
  ossl_digest_default_get_params(param_1,0x88,0x20,2);
  return;
}



void sha3_384_get_params(undefined8 param_1)

{
  ossl_digest_default_get_params(param_1,0x68,0x30,2);
  return;
}



void sha3_512_get_params(undefined8 param_1)

{
  ossl_digest_default_get_params(param_1,0x48,0x40,2);
  return;
}



void shake_128_get_params(undefined8 param_1)

{
  ossl_digest_default_get_params(param_1,0xa8,0,1);
  return;
}



void shake_256_get_params(undefined8 param_1)

{
  ossl_digest_default_get_params(param_1,0x88,0,1);
  return;
}



void keccak_kmac_128_get_params(undefined8 param_1)

{
  ossl_digest_default_get_params(param_1,0xa8,0x20,1);
  return;
}



void keccak_kmac_256_get_params(undefined8 param_1)

{
  ossl_digest_default_get_params(param_1,0x88,0x40,1);
  return;
}



undefined8 * keccak_dupctx(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  byte bVar5;
  
  bVar5 = 0;
  iVar1 = ossl_prov_is_running();
  puVar2 = (undefined8 *)0x0;
  if (iVar1 != 0) {
    puVar2 = (undefined8 *)
             CRYPTO_malloc(0x1b0,"providers/implementations/digests/sha3_prov.c",0x240);
    if (puVar2 != (undefined8 *)0x0) {
      puVar4 = puVar2;
      for (lVar3 = 0x36; lVar3 != 0; lVar3 = lVar3 + -1) {
        *puVar4 = *param_1;
        param_1 = param_1 + (ulong)bVar5 * -2 + 1;
        puVar4 = puVar4 + (ulong)bVar5 * -2 + 1;
      }
    }
  }
  return puVar2;
}



void keccak_freectx(undefined8 param_1)

{
  CRYPTO_clear_free(param_1,0x1b0,"providers/implementations/digests/sha3_prov.c",0x232);
  return;
}



undefined8 keccak_final(long param_1,undefined8 param_2,long *param_3,long param_4)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    lVar3 = *(long *)(param_1 + 0x178);
    if (lVar3 != -1) {
      uVar2 = 1;
      if (param_4 != 0) {
        uVar2 = (**(code **)(param_1 + 0x198))(param_1,param_2);
        lVar3 = *(long *)(param_1 + 0x178);
      }
      *param_3 = lVar3;
      return uVar2;
    }
    ERR_new();
    ERR_set_debug("providers/implementations/digests/sha3_prov.c",0x78,"keccak_final");
    ERR_set_error(0x39,0xa6,0);
  }
  return 0;
}



undefined8 keccak_update(long param_1,void *param_2,size_t param_3)

{
  long lVar1;
  long lVar2;
  size_t __n;
  void *pvVar3;
  ulong __n_00;
  
  lVar1 = *(long *)(param_1 + 0x170);
  if (param_3 != 0) {
    lVar2 = *(long *)(param_1 + 0x180);
    pvVar3 = param_2;
    if (lVar2 != 0) {
      __n_00 = lVar1 - lVar2;
      if (param_3 < __n_00) {
        memcpy((void *)(param_1 + 200 + lVar2),param_2,param_3);
        *(long *)(param_1 + 0x180) = *(long *)(param_1 + 0x180) + param_3;
        return 1;
      }
      pvVar3 = (void *)((long)param_2 + __n_00);
      memcpy((void *)(param_1 + 200 + lVar2),param_2,__n_00);
      (**(code **)(param_1 + 400))(param_1,param_1 + 200,lVar1);
      *(undefined8 *)(param_1 + 0x180) = 0;
      param_3 = (lVar2 + param_3) - lVar1;
    }
    __n = (**(code **)(param_1 + 400))(param_1,pvVar3,param_3);
    if (__n != 0) {
      memcpy((void *)(param_1 + 200),(void *)((long)pvVar3 + (param_3 - __n)),__n);
      *(size_t *)(param_1 + 0x180) = __n;
    }
  }
  return 1;
}



long sha3_224_newctx(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  
  lVar4 = 0;
  iVar3 = ossl_prov_is_running();
  if (iVar3 != 0) {
    lVar4 = CRYPTO_zalloc(0x1b0,"providers/implementations/digests/sha3_prov.c",0x2a6);
    if (lVar4 != 0) {
      ossl_sha3_init(lVar4,6,0xe0);
      uVar2 = sha3_generic_md._8_8_;
      uVar1 = sha3_generic_md._0_8_;
      *(undefined8 *)(lVar4 + 0x1a0) = sha3_generic_md._16_8_;
      *(undefined8 *)(lVar4 + 400) = uVar1;
      *(undefined8 *)(lVar4 + 0x198) = uVar2;
    }
  }
  return lVar4;
}



long sha3_256_newctx(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  
  lVar4 = 0;
  iVar3 = ossl_prov_is_running();
  if (iVar3 != 0) {
    lVar4 = CRYPTO_zalloc(0x1b0,"providers/implementations/digests/sha3_prov.c",0x2a8);
    if (lVar4 != 0) {
      ossl_sha3_init(lVar4,6,0x100);
      uVar2 = sha3_generic_md._8_8_;
      uVar1 = sha3_generic_md._0_8_;
      *(undefined8 *)(lVar4 + 0x1a0) = sha3_generic_md._16_8_;
      *(undefined8 *)(lVar4 + 400) = uVar1;
      *(undefined8 *)(lVar4 + 0x198) = uVar2;
    }
  }
  return lVar4;
}



long sha3_384_newctx(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  
  lVar4 = 0;
  iVar3 = ossl_prov_is_running();
  if (iVar3 != 0) {
    lVar4 = CRYPTO_zalloc(0x1b0,"providers/implementations/digests/sha3_prov.c",0x2aa);
    if (lVar4 != 0) {
      ossl_sha3_init(lVar4,6,0x180);
      uVar2 = sha3_generic_md._8_8_;
      uVar1 = sha3_generic_md._0_8_;
      *(undefined8 *)(lVar4 + 0x1a0) = sha3_generic_md._16_8_;
      *(undefined8 *)(lVar4 + 400) = uVar1;
      *(undefined8 *)(lVar4 + 0x198) = uVar2;
    }
  }
  return lVar4;
}



long sha3_512_newctx(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  
  lVar4 = 0;
  iVar3 = ossl_prov_is_running();
  if (iVar3 != 0) {
    lVar4 = CRYPTO_zalloc(0x1b0,"providers/implementations/digests/sha3_prov.c",0x2ac);
    if (lVar4 != 0) {
      ossl_sha3_init(lVar4,6,0x200);
      uVar2 = sha3_generic_md._8_8_;
      uVar1 = sha3_generic_md._0_8_;
      *(undefined8 *)(lVar4 + 0x1a0) = sha3_generic_md._16_8_;
      *(undefined8 *)(lVar4 + 400) = uVar1;
      *(undefined8 *)(lVar4 + 0x198) = uVar2;
    }
  }
  return lVar4;
}



long keccak_224_newctx(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  
  lVar4 = 0;
  iVar3 = ossl_prov_is_running();
  if (iVar3 != 0) {
    lVar4 = CRYPTO_zalloc(0x1b0,"providers/implementations/digests/sha3_prov.c",0x2ae);
    if (lVar4 != 0) {
      ossl_sha3_init(lVar4,1,0xe0);
      uVar2 = sha3_generic_md._8_8_;
      uVar1 = sha3_generic_md._0_8_;
      *(undefined8 *)(lVar4 + 0x1a0) = sha3_generic_md._16_8_;
      *(undefined8 *)(lVar4 + 400) = uVar1;
      *(undefined8 *)(lVar4 + 0x198) = uVar2;
    }
  }
  return lVar4;
}



long keccak_256_newctx(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  
  lVar4 = 0;
  iVar3 = ossl_prov_is_running();
  if (iVar3 != 0) {
    lVar4 = CRYPTO_zalloc(0x1b0,"providers/implementations/digests/sha3_prov.c",0x2b0);
    if (lVar4 != 0) {
      ossl_sha3_init(lVar4,1,0x100);
      uVar2 = sha3_generic_md._8_8_;
      uVar1 = sha3_generic_md._0_8_;
      *(undefined8 *)(lVar4 + 0x1a0) = sha3_generic_md._16_8_;
      *(undefined8 *)(lVar4 + 400) = uVar1;
      *(undefined8 *)(lVar4 + 0x198) = uVar2;
    }
  }
  return lVar4;
}



long keccak_384_newctx(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  
  lVar4 = 0;
  iVar3 = ossl_prov_is_running();
  if (iVar3 != 0) {
    lVar4 = CRYPTO_zalloc(0x1b0,"providers/implementations/digests/sha3_prov.c",0x2b2);
    if (lVar4 != 0) {
      ossl_sha3_init(lVar4,1,0x180);
      uVar2 = sha3_generic_md._8_8_;
      uVar1 = sha3_generic_md._0_8_;
      *(undefined8 *)(lVar4 + 0x1a0) = sha3_generic_md._16_8_;
      *(undefined8 *)(lVar4 + 400) = uVar1;
      *(undefined8 *)(lVar4 + 0x198) = uVar2;
    }
  }
  return lVar4;
}



long keccak_512_newctx(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  
  lVar4 = 0;
  iVar3 = ossl_prov_is_running();
  if (iVar3 != 0) {
    lVar4 = CRYPTO_zalloc(0x1b0,"providers/implementations/digests/sha3_prov.c",0x2b4);
    if (lVar4 != 0) {
      ossl_sha3_init(lVar4,1,0x200);
      uVar2 = sha3_generic_md._8_8_;
      uVar1 = sha3_generic_md._0_8_;
      *(undefined8 *)(lVar4 + 0x1a0) = sha3_generic_md._16_8_;
      *(undefined8 *)(lVar4 + 400) = uVar1;
      *(undefined8 *)(lVar4 + 0x198) = uVar2;
    }
  }
  return lVar4;
}



void generic_sha3_final(void)

{
  ossl_sha3_final();
  return;
}



undefined8 shake_get_ctx_params(long param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_2 == (long *)0x0) || (*param_2 == 0)) {
    return 1;
  }
  lVar2 = OSSL_PARAM_locate(param_2,"xoflen");
  if ((lVar2 == 0) ||
     (iVar1 = OSSL_PARAM_set_size_t(lVar2,*(undefined8 *)(param_1 + 0x178)), iVar1 != 0)) {
    lVar2 = OSSL_PARAM_locate(param_2,&_LC2);
    if (lVar2 == 0) {
      return 1;
    }
    iVar1 = OSSL_PARAM_set_size_t(lVar2,*(undefined8 *)(param_1 + 0x178));
    if (iVar1 != 0) {
      return 1;
    }
    ERR_new();
    uVar3 = 0x265;
  }
  else {
    ERR_new();
    uVar3 = 0x25f;
  }
  ERR_set_debug("providers/implementations/digests/sha3_prov.c",uVar3,"shake_get_ctx_params");
  ERR_set_error(0x39,0x67,0);
  return 0;
}



undefined8 shake_set_ctx_params(long param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (param_1 != 0) {
    if ((((param_2 == (long *)0x0) || (*param_2 == 0)) ||
        ((lVar2 = OSSL_PARAM_locate_const(param_2,"xoflen"), lVar2 == 0 &&
         (lVar2 = OSSL_PARAM_locate_const(param_2,&_LC2), lVar2 == 0)))) ||
       (iVar1 = OSSL_PARAM_get_size_t(lVar2,param_1 + 0x178), iVar1 != 0)) {
      uVar3 = 1;
    }
    else {
      ERR_new();
      ERR_set_debug("providers/implementations/digests/sha3_prov.c",0x286,"shake_set_ctx_params");
      ERR_set_error(0x39,0x67,0);
      uVar3 = 0;
    }
    return uVar3;
  }
  return 0;
}



long shake_128_newctx(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  
  lVar5 = 0;
  iVar4 = ossl_prov_is_running();
  if (iVar4 != 0) {
    lVar5 = CRYPTO_zalloc(0x1b0,"providers/implementations/digests/sha3_prov.c",0x2b6);
    if (lVar5 != 0) {
      ossl_keccak_init(lVar5,0x1f,0x80,0);
      uVar3 = shake_generic_md._16_8_;
      uVar2 = shake_generic_md._8_8_;
      uVar1 = shake_generic_md._0_8_;
      *(undefined8 *)(lVar5 + 0x178) = 0xffffffffffffffff;
      *(undefined8 *)(lVar5 + 0x1a0) = uVar3;
      *(undefined8 *)(lVar5 + 400) = uVar1;
      *(undefined8 *)(lVar5 + 0x198) = uVar2;
    }
  }
  return lVar5;
}



long shake_256_newctx(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  
  lVar5 = 0;
  iVar4 = ossl_prov_is_running();
  if (iVar4 != 0) {
    lVar5 = CRYPTO_zalloc(0x1b0,"providers/implementations/digests/sha3_prov.c",0x2b8);
    if (lVar5 != 0) {
      ossl_keccak_init(lVar5,0x1f,0x100,0);
      uVar3 = shake_generic_md._16_8_;
      uVar2 = shake_generic_md._8_8_;
      uVar1 = shake_generic_md._0_8_;
      *(undefined8 *)(lVar5 + 0x178) = 0xffffffffffffffff;
      *(undefined8 *)(lVar5 + 0x1a0) = uVar3;
      *(undefined8 *)(lVar5 + 400) = uVar1;
      *(undefined8 *)(lVar5 + 0x198) = uVar2;
    }
  }
  return lVar5;
}



long keccak_kmac_128_newctx(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  
  lVar4 = 0;
  iVar3 = ossl_prov_is_running();
  if (iVar3 != 0) {
    lVar4 = CRYPTO_zalloc(0x1b0,"providers/implementations/digests/sha3_prov.c",0x2ba);
    if (lVar4 != 0) {
      ossl_keccak_init(lVar4,4,0x80,0x100);
      uVar2 = sha3_generic_md._8_8_;
      uVar1 = sha3_generic_md._0_8_;
      *(undefined8 *)(lVar4 + 0x1a0) = sha3_generic_md._16_8_;
      *(undefined8 *)(lVar4 + 400) = uVar1;
      *(undefined8 *)(lVar4 + 0x198) = uVar2;
    }
  }
  return lVar4;
}



long keccak_kmac_256_newctx(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  
  lVar4 = 0;
  iVar3 = ossl_prov_is_running();
  if (iVar3 != 0) {
    lVar4 = CRYPTO_zalloc(0x1b0,"providers/implementations/digests/sha3_prov.c",700);
    if (lVar4 != 0) {
      ossl_keccak_init(lVar4,4,0x100,0x200);
      uVar2 = sha3_generic_md._8_8_;
      uVar1 = sha3_generic_md._0_8_;
      *(undefined8 *)(lVar4 + 0x1a0) = sha3_generic_md._16_8_;
      *(undefined8 *)(lVar4 + 400) = uVar1;
      *(undefined8 *)(lVar4 + 0x198) = uVar2;
    }
  }
  return lVar4;
}



void generic_sha3_squeeze(void)

{
  ossl_sha3_squeeze();
  return;
}



undefined8 shake_squeeze(long param_1,undefined8 param_2,long *param_3,long param_4)

{
  undefined8 uVar1;
  
  uVar1 = ossl_prov_is_running();
  if ((int)uVar1 != 0) {
    if (*(code **)(param_1 + 0x1a0) == (code *)0x0) {
      return 0;
    }
    uVar1 = 1;
    if (param_4 != 0) {
      uVar1 = (**(code **)(param_1 + 0x1a0))(param_1,param_2,param_4);
    }
    *param_3 = param_4;
  }
  return uVar1;
}



undefined8 generic_sha3_absorb(long param_1)

{
  undefined8 uVar1;
  
  if (1 < *(uint *)(param_1 + 0x1a8)) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x1a8) = 1;
  uVar1 = SHA3_absorb();
  return uVar1;
}



void keccak_224_get_params(undefined8 param_1)

{
  ossl_digest_default_get_params(param_1,0x90,0x1c,2);
  return;
}



void keccak_256_get_params(undefined8 param_1)

{
  ossl_digest_default_get_params(param_1,0x88,0x20,2);
  return;
}



void keccak_384_get_params(undefined8 param_1)

{
  ossl_digest_default_get_params(param_1,0x68,0x30,2);
  return;
}



void keccak_512_get_params(undefined8 param_1)

{
  ossl_digest_default_get_params(param_1,0x48,0x40,2);
  return;
}



undefined8 keccak_init_params(long param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  
  iVar1 = ossl_prov_is_running();
  if ((iVar1 != 0) && (ossl_sha3_reset(param_1), param_1 != 0)) {
    if (((param_2 == (long *)0x0) || (*param_2 == 0)) ||
       (((lVar2 = OSSL_PARAM_locate_const(param_2,"xoflen"), lVar2 == 0 &&
         (lVar2 = OSSL_PARAM_locate_const(param_2,&_LC2), lVar2 == 0)) ||
        (iVar1 = OSSL_PARAM_get_size_t(lVar2,param_1 + 0x178), iVar1 != 0)))) {
      return 1;
    }
    ERR_new();
    ERR_set_debug("providers/implementations/digests/sha3_prov.c",0x286,"shake_set_ctx_params");
    ERR_set_error(0x39,0x67,0);
  }
  return 0;
}


