
void BN_CTX_new_ex(undefined8 param_1)

{
  undefined1 (*pauVar1) [16];
  
  pauVar1 = (undefined1 (*) [16])CRYPTO_zalloc(0x48,"crypto/bn/bn_ctx.c",0x7a);
  if (pauVar1 != (undefined1 (*) [16])0x0) {
    *(undefined8 *)pauVar1[1] = 0;
    *(undefined8 *)(pauVar1[1] + 8) = 0;
    *(undefined8 *)pauVar1[2] = 0;
    *(undefined8 *)(pauVar1[2] + 8) = 0;
    *(undefined8 *)pauVar1[4] = param_1;
    *pauVar1 = (undefined1  [16])0x0;
  }
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

BN_CTX * BN_CTX_new(void)

{
  BN_CTX *pBVar1;
  
  pBVar1 = (BN_CTX *)BN_CTX_new_ex(0);
  return pBVar1;
}



void BN_CTX_secure_new_ex(void)

{
  long lVar1;
  
  lVar1 = BN_CTX_new_ex();
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x3c) = 8;
  }
  return;
}



void BN_CTX_secure_new(void)

{
  BN_CTX_secure_new_ex(0);
  return;
}



void BN_CTX_free(BN_CTX *c)

{
  BIGNUM *pBVar1;
  BIGNUM *a;
  
  if (c == (BN_CTX *)0x0) {
    return;
  }
  CRYPTO_free(*(void **)(c + 0x20));
  a = *(BIGNUM **)c;
  *(undefined8 *)(c + 0x20) = 0;
  while (a != (BIGNUM *)0x0) {
    pBVar1 = a + 0x10;
    do {
      if (a->d != (ulong *)0x0) {
        BN_clear_free(a);
      }
      a = a + 1;
    } while (a != pBVar1);
    *(undefined8 *)(c + 8) = *(undefined8 *)((long)*(void **)c + 0x188);
    CRYPTO_free(*(void **)c);
    a = *(BIGNUM **)(c + 8);
    *(BIGNUM **)c = a;
  }
  CRYPTO_free(c);
  return;
}



void BN_CTX_start(BN_CTX *ctx)

{
  undefined4 uVar1;
  uint uVar2;
  void *__src;
  void *__dest;
  int num;
  uint uVar3;
  
  if ((*(int *)(ctx + 0x34) != 0) || (*(int *)(ctx + 0x38) != 0)) {
    *(int *)(ctx + 0x34) = *(int *)(ctx + 0x34) + 1;
    return;
  }
  uVar1 = *(undefined4 *)(ctx + 0x30);
  uVar2 = *(uint *)(ctx + 0x28);
  if (uVar2 == *(uint *)(ctx + 0x2c)) {
    if (uVar2 == 0) {
      num = 0x80;
      uVar3 = 0x20;
    }
    else {
      uVar3 = uVar2 * 3 >> 1;
      num = uVar3 << 2;
    }
    __dest = CRYPTO_malloc(num,"crypto/bn/bn_ctx.c",0x10d);
    if (__dest == (void *)0x0) {
      ERR_new();
      ERR_set_debug("crypto/bn/bn_ctx.c",0xbb,"BN_CTX_start");
      ERR_set_error(3,0x6d,0);
      *(int *)(ctx + 0x34) = *(int *)(ctx + 0x34) + 1;
      return;
    }
    __src = *(void **)(ctx + 0x20);
    if (*(uint *)(ctx + 0x28) != 0) {
      memcpy(__dest,__src,(ulong)*(uint *)(ctx + 0x28) * 4);
    }
    CRYPTO_free(__src);
    *(void **)(ctx + 0x20) = __dest;
    uVar2 = *(uint *)(ctx + 0x28);
    *(uint *)(ctx + 0x2c) = uVar3;
  }
  else {
    __dest = *(void **)(ctx + 0x20);
  }
  *(uint *)(ctx + 0x28) = uVar2 + 1;
  *(undefined4 *)((long)__dest + (ulong)uVar2 * 4) = uVar1;
  return;
}



void BN_CTX_end(BN_CTX *ctx)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  
  if (ctx != (BN_CTX *)0x0) {
    if (*(int *)(ctx + 0x34) != 0) {
      *(int *)(ctx + 0x34) = *(int *)(ctx + 0x34) + -1;
      return;
    }
    iVar3 = *(int *)(ctx + 0x28);
    *(uint *)(ctx + 0x28) = iVar3 - 1U;
    uVar1 = *(uint *)(*(long *)(ctx + 0x20) + (ulong)(iVar3 - 1U) * 4);
    uVar2 = *(uint *)(ctx + 0x30);
    if (uVar1 < uVar2) {
      uVar4 = *(int *)(ctx + 0x18) - 1U & 0xf;
      iVar3 = (uVar2 - 1) - uVar1;
      *(uint *)(ctx + 0x18) = (*(int *)(ctx + 0x18) - uVar2) + uVar1;
      do {
        if (uVar4 == 0) {
          *(undefined8 *)(ctx + 8) = *(undefined8 *)(*(long *)(ctx + 8) + 0x180);
          if ((iVar3 == 0) || (iVar3 = iVar3 + -2, iVar3 == -1)) break;
          uVar4 = 0xe;
        }
        uVar4 = uVar4 - 1;
        bVar5 = iVar3 != 0;
        iVar3 = iVar3 + -1;
      } while (bVar5);
    }
    *(uint *)(ctx + 0x30) = uVar1;
    *(undefined4 *)(ctx + 0x38) = 0;
  }
  return;
}



BIGNUM * BN_CTX_get(BN_CTX *ctx)

{
  uint uVar1;
  uint uVar2;
  ulong *puVar3;
  long lVar4;
  BIGNUM *pBVar5;
  BIGNUM *pBVar6;
  BIGNUM *pBVar7;
  
  if (*(int *)(ctx + 0x34) != 0) {
    return (BIGNUM *)0x0;
  }
  if (*(int *)(ctx + 0x38) != 0) {
    return (BIGNUM *)0x0;
  }
  uVar1 = *(uint *)(ctx + 0x3c);
  uVar2 = *(uint *)(ctx + 0x18);
  if (uVar2 != *(uint *)(ctx + 0x1c)) {
    if (uVar2 == 0) {
      pBVar5 = *(BIGNUM **)ctx;
    }
    else {
      if ((uVar2 & 0xf) != 0) {
        *(uint *)(ctx + 0x18) = uVar2 + 1;
        pBVar5 = (BIGNUM *)(*(long *)(ctx + 8) + (ulong)(uVar2 & 0xf) * 0x18);
        goto LAB_00100358;
      }
      pBVar5 = *(BIGNUM **)(*(long *)(ctx + 8) + 0x188);
    }
    *(BIGNUM **)(ctx + 8) = pBVar5;
    *(uint *)(ctx + 0x18) = uVar2 + 1;
    if (pBVar5 == (BIGNUM *)0x0) goto LAB_00100488;
    goto LAB_00100358;
  }
  pBVar5 = (BIGNUM *)CRYPTO_malloc(400,"crypto/bn/bn_ctx.c",0x141);
  if (pBVar5 == (BIGNUM *)0x0) {
LAB_00100488:
    *(undefined4 *)(ctx + 0x38) = 1;
    ERR_new();
    ERR_set_debug("crypto/bn/bn_ctx.c",0xe1,"BN_CTX_get");
    ERR_set_error(3,0x6d,0);
    return (BIGNUM *)0x0;
  }
  pBVar6 = pBVar5;
  do {
    bn_init(pBVar6);
    if ((uVar1 & 8) != 0) goto LAB_00100408;
    pBVar6 = pBVar6 + 1;
  } while (pBVar5 + 0x10 != pBVar6);
LAB_0010041e:
  puVar3 = *(ulong **)(ctx + 0x10);
  lVar4 = *(long *)ctx;
  pBVar5[0x10].top = 0;
  pBVar5[0x10].dmax = 0;
  pBVar5[0x10].d = puVar3;
  if (lVar4 == 0) {
    *(BIGNUM **)(ctx + 0x10) = pBVar5;
    *(BIGNUM **)ctx = pBVar5;
    *(BIGNUM **)(ctx + 8) = pBVar5;
  }
  else {
    puVar3[0x31] = (ulong)pBVar5;
    *(BIGNUM **)(ctx + 8) = pBVar5;
    *(BIGNUM **)(ctx + 0x10) = pBVar5;
  }
  *(ulong *)(ctx + 0x18) =
       CONCAT44((int)((ulong)*(undefined8 *)(ctx + 0x18) >> 0x20) + _LC1._4_4_,
                (int)*(undefined8 *)(ctx + 0x18) + (int)_LC1);
LAB_00100358:
  BN_zero_ex(pBVar5);
  pBVar5->flags = pBVar5->flags & 0xfffffffb;
  *(int *)(ctx + 0x30) = *(int *)(ctx + 0x30) + 1;
  return pBVar5;
LAB_00100408:
  while( true ) {
    pBVar7 = pBVar6 + 1;
    BN_set_flags(pBVar6,8);
    if (pBVar5 + 0x10 == pBVar7) break;
    bn_init(pBVar7);
    pBVar6 = pBVar7;
  }
  goto LAB_0010041e;
}



undefined8 ossl_bn_get_libctx(long param_1)

{
  if (param_1 != 0) {
    return *(undefined8 *)(param_1 + 0x40);
  }
  return 0;
}


