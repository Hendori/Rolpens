
undefined8 bn_from_montgomery_word(undefined8 *param_1,long *param_2,long param_3)

{
  int num;
  ulong *bp;
  int iVar1;
  long lVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  ulong *puVar9;
  long lVar10;
  
  num = *(int *)(param_3 + 0x28);
  if (num == 0) {
    *(undefined4 *)(param_1 + 1) = 0;
    return 1;
  }
  iVar1 = num * 2;
  lVar2 = bn_wexpand(param_2,iVar1);
  if (lVar2 != 0) {
    bp = *(ulong **)(param_3 + 0x20);
    *(uint *)(param_2 + 2) = *(uint *)(param_2 + 2) ^ *(uint *)(param_3 + 0x30);
    puVar9 = (ulong *)*param_2;
    lVar2 = param_2[1];
    if (iVar1 < 1) {
      *(int *)(param_2 + 1) = iVar1;
      lVar2 = bn_wexpand(param_1,num);
      if (lVar2 != 0) {
        lVar2 = param_2[2];
        *(int *)(param_1 + 1) = num;
        *(int *)(param_1 + 2) = (int)lVar2;
        bn_sub_words((ulong *)*param_1,(ulong *)(*param_2 + (long)num * 8),bp,num);
        return 1;
      }
    }
    else {
      puVar4 = puVar9;
      uVar6 = -(int)lVar2;
      do {
        uVar7 = uVar6 + 1;
        *puVar4 = *puVar4 & -(ulong)(uVar6 >> 0x1f);
        puVar4 = puVar4 + 1;
        uVar6 = uVar7;
      } while (iVar1 - (int)lVar2 != uVar7);
      lVar2 = *(long *)(param_3 + 0x50);
      lVar10 = (long)num;
      *(int *)(param_2 + 1) = iVar1;
      uVar8 = 0;
      puVar4 = puVar9 + lVar10;
      do {
        uVar3 = bn_mul_add_words(puVar9,bp,num,lVar2 * *puVar9);
        uVar5 = puVar9[lVar10];
        uVar3 = uVar3 + uVar8 + uVar5;
        puVar9[lVar10] = uVar3;
        puVar9 = puVar9 + 1;
        uVar8 = (ulong)(uVar3 <= uVar5) & (uVar5 != uVar3 | uVar8);
      } while (puVar9 != puVar4);
      lVar2 = bn_wexpand(param_1,num);
      if (lVar2 != 0) {
        *(int *)(param_1 + 2) = (int)param_2[2];
        lVar2 = *param_2;
        *(int *)(param_1 + 1) = num;
        puVar9 = (ulong *)*param_1;
        puVar4 = (ulong *)(lVar2 + lVar10 * 8);
        uVar5 = bn_sub_words(puVar9,puVar4,bp,num);
        lVar2 = 0;
        do {
          *(ulong *)((long)puVar9 + lVar2) =
               (*(ulong *)((long)puVar4 + lVar2) ^ *(ulong *)((long)puVar9 + lVar2)) & uVar8 - uVar5
               ^ *(ulong *)((long)puVar9 + lVar2);
          *(undefined8 *)((long)puVar4 + lVar2) = 0;
          lVar2 = lVar2 + 8;
        } while (lVar10 * 8 != lVar2);
        return 1;
      }
    }
  }
  return 0;
}



bool bn_mul_mont_fixed_top
               (undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,long param_4,
               BN_CTX *param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  BIGNUM *pBVar5;
  long lVar6;
  int iVar7;
  bool bVar8;
  
  iVar3 = *(int *)(param_4 + 0x28);
  iVar4 = *(int *)(param_2 + 1);
  iVar7 = *(int *)(param_3 + 1);
  if (((iVar3 - 2U < 0x1ff) && (iVar3 == iVar4)) && (iVar3 == iVar7)) {
    lVar6 = bn_wexpand(param_1,iVar3);
    if (lVar6 == 0) {
      return false;
    }
    iVar4 = bn_mul_mont(*param_1,*param_2,*param_3,*(undefined8 *)(param_4 + 0x20),param_4 + 0x50,
                        iVar3);
    if (iVar4 != 0) {
      uVar1 = *(uint *)(param_2 + 2);
      uVar2 = *(uint *)(param_3 + 2);
      *(int *)(param_1 + 1) = iVar3;
      *(uint *)(param_1 + 2) = uVar1 ^ uVar2;
      return true;
    }
    iVar4 = *(int *)(param_2 + 1);
    iVar7 = *(int *)(param_3 + 1);
  }
  if (iVar3 * 2 < iVar4 + iVar7) {
    return false;
  }
  BN_CTX_start(param_5);
  pBVar5 = BN_CTX_get(param_5);
  if (pBVar5 != (BIGNUM *)0x0) {
    if (param_2 == param_3) {
      iVar3 = bn_sqr_fixed_top(pBVar5,param_2,param_5);
    }
    else {
      iVar3 = bn_mul_fixed_top(pBVar5,param_2,param_3,param_5);
    }
    if (iVar3 != 0) {
      iVar3 = bn_from_montgomery_word(param_1,pBVar5,param_4);
      bVar8 = iVar3 != 0;
      goto LAB_00100287;
    }
  }
  bVar8 = false;
LAB_00100287:
  BN_CTX_end(param_5);
  return bVar8;
}



int BN_mod_mul_montgomery(BIGNUM *r,BIGNUM *a,BIGNUM *b,BN_MONT_CTX *mont,BN_CTX *ctx)

{
  int iVar1;
  
  iVar1 = bn_mul_mont_fixed_top();
  bn_correct_top(r);
  return iVar1;
}



undefined4
bn_from_mont_fixed_top(undefined8 param_1,BIGNUM *param_2,undefined8 param_3,BN_CTX *param_4)

{
  undefined4 uVar1;
  BIGNUM *a;
  BIGNUM *pBVar2;
  
  BN_CTX_start(param_4);
  a = BN_CTX_get(param_4);
  if (a != (BIGNUM *)0x0) {
    pBVar2 = BN_copy(a,param_2);
    if (pBVar2 != (BIGNUM *)0x0) {
      uVar1 = bn_from_montgomery_word(param_1,a,param_3);
      goto LAB_001003aa;
    }
  }
  uVar1 = 0;
LAB_001003aa:
  BN_CTX_end(param_4);
  return uVar1;
}



int BN_from_montgomery(BIGNUM *r,BIGNUM *a,BN_MONT_CTX *mont,BN_CTX *ctx)

{
  int iVar1;
  
  iVar1 = bn_from_mont_fixed_top();
  bn_correct_top(r);
  return iVar1;
}



void bn_to_mont_fixed_top(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  bn_mul_mont_fixed_top(param_1,param_2,param_3 + 8,param_3,param_4);
  return;
}



void BN_MONT_CTX_init(BN_MONT_CTX *ctx)

{
  ctx->ri = 0;
  bn_init();
  bn_init(&ctx->N);
  bn_init(&ctx->Ni);
  ctx->flags = 0;
  ctx->n0[0] = 0;
  ctx->n0[1] = 0;
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

BN_MONT_CTX * BN_MONT_CTX_new(void)

{
  BN_MONT_CTX *ctx;
  
  ctx = (BN_MONT_CTX *)CRYPTO_malloc(0x68,"crypto/bn/bn_mont.c",0xe8);
  if (ctx != (BN_MONT_CTX *)0x0) {
    BN_MONT_CTX_init(ctx);
    ctx->flags = 1;
  }
  return ctx;
}



void BN_MONT_CTX_free(BN_MONT_CTX *mont)

{
  if (mont == (BN_MONT_CTX *)0x0) {
    return;
  }
  BN_clear_free(&mont->RR);
  BN_clear_free(&mont->N);
  BN_clear_free(&mont->Ni);
  if ((mont->flags & 1) == 0) {
    return;
  }
  CRYPTO_free(mont);
  return;
}



int BN_MONT_CTX_set(BN_MONT_CTX *mont,BIGNUM *mod,BN_CTX *ctx)

{
  BIGNUM *a;
  int iVar1;
  BIGNUM *ret;
  BIGNUM *pBVar2;
  ulong uVar3;
  BIGNUM *pBVar4;
  int iVar5;
  long in_FS_OFFSET;
  BIGNUM local_78;
  ulong local_58;
  undefined8 local_50;
  long local_40;
  
  iVar5 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = BN_is_zero(mod);
  if (iVar1 != 0) goto LAB_00100519;
  BN_CTX_start(ctx);
  ret = BN_CTX_get(ctx);
  iVar5 = 0;
  if (ret != (BIGNUM *)0x0) {
    a = &mont->N;
    pBVar2 = BN_copy(a,mod);
    if (pBVar2 != (BIGNUM *)0x0) {
      iVar1 = BN_get_flags(mod,4);
      if (iVar1 != 0) {
        BN_set_flags(a,4);
      }
      (mont->N).neg = 0;
      bn_init();
      local_78.d = &local_58;
      local_78.dmax = 2;
      local_78.neg = 0;
      iVar1 = BN_get_flags(mod,4);
      if (iVar1 != 0) {
        BN_set_flags(&local_78,4);
      }
      pBVar2 = &mont->RR;
      iVar1 = BN_num_bits(mod);
      mont->ri = (iVar1 + 0x3f) - (iVar1 + 0x3f) % 0x40;
      BN_zero_ex(pBVar2);
      iVar1 = BN_set_bit(pBVar2,0x40);
      if (iVar1 != 0) {
        local_58 = *mod->d;
        local_50 = 0;
        local_78.top = (int)(local_58 != 0);
        iVar1 = BN_is_one(&local_78);
        if (iVar1 == 0) {
          pBVar4 = BN_mod_inverse(ret,pBVar2,&local_78,ctx);
          if (pBVar4 == (BIGNUM *)0x0) goto LAB_0010060c;
        }
        else {
          BN_zero_ex(ret);
        }
        iVar1 = BN_lshift(ret,ret,0x40);
        if (iVar1 != 0) {
          iVar1 = BN_is_zero(ret);
          if (iVar1 == 0) {
            iVar1 = BN_sub_word(ret,1);
          }
          else {
            iVar1 = BN_set_word(ret,0xffffffffffffffff);
          }
          if ((iVar1 != 0) && (iVar1 = BN_div(ret,(BIGNUM *)0x0,ret,&local_78,ctx), iVar1 != 0)) {
            uVar3 = 0;
            if (0 < ret->top) {
              uVar3 = *ret->d;
            }
            mont->n0[0] = uVar3;
            mont->n0[1] = 0;
            BN_zero_ex(pBVar2);
            iVar1 = BN_set_bit(pBVar2,mont->ri * 2);
            if ((iVar1 != 0) && (iVar1 = BN_div((BIGNUM *)0x0,pBVar2,pBVar2,a,ctx), iVar1 != 0)) {
              iVar5 = (mont->RR).top;
              iVar1 = (mont->N).top;
              if (iVar5 < iVar1) {
                memset((mont->RR).d + iVar5,0,(ulong)(uint)((iVar1 + -1) - iVar5) * 8 + 8);
              }
              (mont->RR).top = iVar1;
              iVar5 = 1;
            }
          }
        }
      }
    }
  }
LAB_0010060c:
  BN_CTX_end(ctx);
LAB_00100519:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



BN_MONT_CTX * BN_MONT_CTX_copy(BN_MONT_CTX *to,BN_MONT_CTX *from)

{
  ulong uVar1;
  ulong uVar2;
  BIGNUM *pBVar3;
  
  if (to == from) {
    return to;
  }
  pBVar3 = BN_copy(&to->RR,&from->RR);
  if (((pBVar3 != (BIGNUM *)0x0) && (pBVar3 = BN_copy(&to->N,&from->N), pBVar3 != (BIGNUM *)0x0)) &&
     (pBVar3 = BN_copy(&to->Ni,&from->Ni), pBVar3 != (BIGNUM *)0x0)) {
    uVar1 = from->n0[0];
    uVar2 = from->n0[1];
    to->ri = from->ri;
    to->n0[0] = uVar1;
    to->n0[1] = uVar2;
    return to;
  }
  return (BN_MONT_CTX *)0x0;
}



BN_MONT_CTX * BN_MONT_CTX_set_locked(BN_MONT_CTX **pmont,int lock,BIGNUM *mod,BN_CTX *ctx)

{
  int iVar1;
  BN_MONT_CTX *pBVar2;
  undefined4 in_register_00000034;
  undefined8 uVar3;
  
  uVar3 = CONCAT44(in_register_00000034,lock);
  iVar1 = CRYPTO_THREAD_read_lock(uVar3);
  if (iVar1 != 0) {
    pBVar2 = *pmont;
    CRYPTO_THREAD_unlock(uVar3);
    if (pBVar2 != (BN_MONT_CTX *)0x0) {
      return pBVar2;
    }
    pBVar2 = BN_MONT_CTX_new();
    if (pBVar2 != (BN_MONT_CTX *)0x0) {
      iVar1 = BN_MONT_CTX_set(pBVar2,mod,ctx);
      if ((iVar1 != 0) && (iVar1 = CRYPTO_THREAD_write_lock(uVar3), iVar1 != 0)) {
        if (*pmont == (BN_MONT_CTX *)0x0) {
          *pmont = pBVar2;
        }
        else {
          BN_MONT_CTX_free(pBVar2);
          pBVar2 = *pmont;
        }
        CRYPTO_THREAD_unlock(uVar3);
        return pBVar2;
      }
      BN_MONT_CTX_free(pBVar2);
    }
  }
  return (BN_MONT_CTX *)0x0;
}



undefined8
ossl_bn_mont_ctx_set
          (undefined4 *param_1,BIGNUM *param_2,undefined4 param_3,uchar *param_4,int param_5,
          undefined4 param_6,undefined4 param_7)

{
  BIGNUM *pBVar1;
  
  pBVar1 = BN_copy((BIGNUM *)(param_1 + 8),param_2);
  if (pBVar1 != (BIGNUM *)0x0) {
    pBVar1 = BN_bin2bn(param_4,param_5,(BIGNUM *)(param_1 + 2));
    if (pBVar1 != (BIGNUM *)0x0) {
      *param_1 = param_3;
      *(undefined8 *)(param_1 + 0x16) = 0;
      *(ulong *)(param_1 + 0x14) = CONCAT44(param_7,param_6);
      return 1;
    }
  }
  return 0;
}



bool ossl_bn_mont_ctx_eq(int *param_1,int *param_2)

{
  int iVar1;
  bool bVar2;
  
  if (*param_1 != *param_2) {
    return false;
  }
  iVar1 = BN_cmp((BIGNUM *)(param_1 + 2),(BIGNUM *)(param_2 + 2));
  if (((iVar1 == 0) && (param_1[0x18] == param_2[0x18])) &&
     (*(long *)(param_1 + 0x14) == *(long *)(param_2 + 0x14))) {
    bVar2 = *(long *)(param_1 + 0x16) == *(long *)(param_2 + 0x16);
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}


