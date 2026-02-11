
void BN_BLINDING_free(BN_BLINDING *b)

{
  if (b != (BN_BLINDING *)0x0) {
    BN_free(*(BIGNUM **)b);
    BN_free(*(BIGNUM **)(b + 8));
    BN_free(*(BIGNUM **)(b + 0x10));
    BN_free(*(BIGNUM **)(b + 0x18));
    CRYPTO_THREAD_lock_free(*(undefined8 *)(b + 0x48));
    CRYPTO_free(b);
    return;
  }
  return;
}



int BN_BLINDING_invert_ex(BIGNUM *n,BIGNUM *r,BN_BLINDING *b,BN_CTX *param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong *puVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  if ((r == (BIGNUM *)0x0) && (r = *(BIGNUM **)(b + 8), r == (BIGNUM *)0x0)) {
    ERR_new();
    iVar5 = 0;
    ERR_set_debug("crypto/bn/bn_blind.c",0xad,"BN_BLINDING_invert_ex");
    ERR_set_error(3,0x6b,0);
  }
  else {
    lVar3 = *(long *)(b + 0x38);
    if (lVar3 == 0) {
      iVar5 = BN_mod_mul(n,n,r,*(BIGNUM **)(b + 0x18),param_4);
      return iVar5;
    }
    uVar1 = r->top;
    if ((int)uVar1 <= n->dmax) {
      uVar2 = n->top;
      lVar8 = (long)(int)uVar2;
      lVar7 = (long)(int)uVar1;
      if (lVar7 != 0) {
        puVar4 = n->d;
        lVar6 = -lVar8;
        do {
          puVar4[lVar8 + lVar6] = puVar4[lVar8 + lVar6] & lVar6 >> 0x3f;
          lVar6 = lVar6 + 1;
        } while (lVar6 != lVar7 - lVar8);
      }
      n->top = (uVar2 ^ uVar1) & (uint)(lVar7 - lVar8 >> 0x3f) ^ uVar1;
    }
    iVar5 = bn_mul_mont_fixed_top(n,n,r,lVar3);
    bn_correct_top_consttime(n);
  }
  return iVar5;
}



int BN_BLINDING_invert(BIGNUM *n,BN_BLINDING *b,BN_CTX *ctx)

{
  int iVar1;
  
  iVar1 = BN_BLINDING_invert_ex(n,(BIGNUM *)0x0,b,ctx);
  return iVar1;
}



void BN_BLINDING_is_current_thread(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = CRYPTO_THREAD_get_current_id();
  CRYPTO_THREAD_compare_id(uVar2,uVar1);
  return;
}



void BN_BLINDING_set_current_thread(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = CRYPTO_THREAD_get_current_id();
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  return;
}



BN_BLINDING * BN_BLINDING_new(BIGNUM *A,BIGNUM *Ai,BIGNUM *mod)

{
  int iVar1;
  BN_BLINDING *b;
  long lVar2;
  BIGNUM *pBVar3;
  
  b = (BN_BLINDING *)CRYPTO_zalloc(0x50,"crypto/bn/bn_blind.c",0x24);
  if (b == (BN_BLINDING *)0x0) {
    return (BN_BLINDING *)0x0;
  }
  lVar2 = CRYPTO_THREAD_lock_new();
  *(long *)(b + 0x48) = lVar2;
  if (lVar2 == 0) {
    ERR_new();
    ERR_set_debug("crypto/bn/bn_blind.c",0x29,"BN_BLINDING_new");
    ERR_set_error(3,0x8000f,0);
    CRYPTO_free(b);
    return (BN_BLINDING *)0x0;
  }
  BN_BLINDING_set_current_thread(b);
  if (A != (BIGNUM *)0x0) {
    pBVar3 = BN_dup(A);
    *(BIGNUM **)b = pBVar3;
    if (pBVar3 == (BIGNUM *)0x0) goto LAB_00100290;
  }
  if (Ai != (BIGNUM *)0x0) {
    pBVar3 = BN_dup(Ai);
    *(BIGNUM **)(b + 8) = pBVar3;
    if (pBVar3 == (BIGNUM *)0x0) goto LAB_00100290;
  }
  pBVar3 = BN_dup(mod);
  *(BIGNUM **)(b + 0x18) = pBVar3;
  if (pBVar3 != (BIGNUM *)0x0) {
    iVar1 = BN_get_flags(mod,4);
    if (iVar1 != 0) {
      BN_set_flags(*(undefined8 *)(b + 0x18),4);
    }
    *(undefined4 *)(b + 0x28) = 0xffffffff;
    return b;
  }
LAB_00100290:
  BN_BLINDING_free(b);
  return (BN_BLINDING *)0x0;
}



void BN_BLINDING_lock(long param_1)

{
  CRYPTO_THREAD_write_lock(*(undefined8 *)(param_1 + 0x48));
  return;
}



void BN_BLINDING_unlock(long param_1)

{
  CRYPTO_THREAD_unlock(*(undefined8 *)(param_1 + 0x48));
  return;
}



ulong BN_BLINDING_get_flags(BN_BLINDING *param_1)

{
  return *(ulong *)(param_1 + 0x30);
}



void BN_BLINDING_set_flags(BN_BLINDING *param_1,ulong param_2)

{
  *(ulong *)(param_1 + 0x30) = param_2;
  return;
}



BN_BLINDING *
BN_BLINDING_create_param
          (BN_BLINDING *b,BIGNUM *e,BIGNUM *m,BN_CTX *ctx,bn_mod_exp *bn_mod_exp,BN_MONT_CTX *m_ctx)

{
  int iVar1;
  BIGNUM *pBVar2;
  long lVar3;
  BN_BLINDING *b_00;
  int iVar4;
  long in_FS_OFFSET;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  b_00 = b;
  if ((b != (BN_BLINDING *)0x0) ||
     (b_00 = BN_BLINDING_new((BIGNUM *)0x0,(BIGNUM *)0x0,m), b_00 != (BN_BLINDING *)0x0)) {
    if (*(long *)b_00 == 0) {
      pBVar2 = BN_new();
      *(BIGNUM **)b_00 = pBVar2;
      if (pBVar2 != (BIGNUM *)0x0) {
        lVar3 = *(long *)(b_00 + 8);
        goto joined_r0x00100506;
      }
    }
    else {
      lVar3 = *(long *)(b_00 + 8);
joined_r0x00100506:
      if (lVar3 == 0) {
        pBVar2 = BN_new();
        *(BIGNUM **)(b_00 + 8) = pBVar2;
        if (pBVar2 == (BIGNUM *)0x0) goto LAB_00100425;
      }
      pBVar2 = *(BIGNUM **)(b_00 + 0x10);
      if (e != (BIGNUM *)0x0) {
        BN_free(pBVar2);
        pBVar2 = BN_dup(e);
        *(BIGNUM **)(b_00 + 0x10) = pBVar2;
      }
      if (pBVar2 != (BIGNUM *)0x0) {
        if (bn_mod_exp != (bn_mod_exp *)0x0) {
          *(bn_mod_exp **)(b_00 + 0x40) = bn_mod_exp;
        }
        if (m_ctx != (BN_MONT_CTX *)0x0) {
          *(BN_MONT_CTX **)(b_00 + 0x38) = m_ctx;
        }
        iVar4 = 0x21;
        do {
          iVar1 = BN_priv_rand_range_ex(*(long *)b_00,*(long *)(b_00 + 0x18),0,ctx);
          if (iVar1 == 0) goto LAB_00100425;
          lVar3 = int_bn_mod_inverse(*(long *)(b_00 + 8),*(long *)b_00,*(long *)(b_00 + 0x18),ctx,
                                     &local_44);
          if (lVar3 != 0) {
            if ((*(code **)(b_00 + 0x40) == (code *)0x0) || (*(long *)(b_00 + 0x38) == 0)) {
              iVar4 = BN_mod_exp(*(BIGNUM **)b_00,*(BIGNUM **)b_00,*(BIGNUM **)(b_00 + 0x10),
                                 *(BIGNUM **)(b_00 + 0x18),ctx);
            }
            else {
              iVar4 = (**(code **)(b_00 + 0x40))();
            }
            if ((iVar4 == 0) ||
               ((*(long *)(b_00 + 0x38) != 0 &&
                ((iVar4 = bn_to_mont_fixed_top
                                    (*(long *)(b_00 + 8),*(long *)(b_00 + 8),*(long *)(b_00 + 0x38),
                                     ctx), iVar4 == 0 ||
                 (iVar4 = bn_to_mont_fixed_top
                                    (*(long *)b_00,*(long *)b_00,*(long *)(b_00 + 0x38),ctx),
                 iVar4 == 0)))))) goto LAB_00100425;
            goto LAB_0010042e;
          }
          if (local_44 == 0) goto LAB_00100425;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        ERR_new();
        ERR_set_debug("crypto/bn/bn_blind.c",0x11c,"BN_BLINDING_create_param");
        ERR_set_error(3,0x71,0);
      }
    }
LAB_00100425:
    if (b != (BN_BLINDING *)0x0) goto LAB_0010042e;
  }
  BN_BLINDING_free(b_00);
  b_00 = (BN_BLINDING *)0x0;
LAB_0010042e:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return b_00;
}



int BN_BLINDING_update(BN_BLINDING *b,BN_CTX *ctx)

{
  BIGNUM *pBVar1;
  ulong uVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  BN_BLINDING *pBVar6;
  
  if ((*(long *)b == 0) || (pBVar1 = *(BIGNUM **)(b + 8), pBVar1 == (BIGNUM *)0x0)) {
    ERR_new();
    ERR_set_debug("crypto/bn/bn_blind.c",0x60,"BN_BLINDING_update");
    ERR_set_error(3,0x6b,0);
    goto LAB_001005c7;
  }
  uVar2 = *(ulong *)(b + 0x30);
  if (*(int *)(b + 0x28) == -1) {
    *(undefined4 *)(b + 0x28) = 1;
LAB_001005e7:
    if ((uVar2 & 1) != 0) {
      return 1;
    }
LAB_001005a8:
    if (*(long *)(b + 0x38) == 0) {
      iVar4 = BN_mod_mul(pBVar1,pBVar1,pBVar1,*(BIGNUM **)(b + 0x18),ctx);
      if (iVar4 == 0) goto LAB_001005c7;
      pBVar1 = *(BIGNUM **)b;
      iVar4 = BN_mod_mul(pBVar1,pBVar1,pBVar1,*(BIGNUM **)(b + 0x18),ctx);
      uVar5 = (uint)(iVar4 != 0);
    }
    else {
      iVar4 = bn_mul_mont_fixed_top(pBVar1,pBVar1,pBVar1,*(long *)(b + 0x38),ctx);
      if (iVar4 == 0) {
LAB_001005c7:
        uVar5 = 0;
      }
      else {
        uVar3 = *(undefined8 *)b;
        iVar4 = bn_mul_mont_fixed_top(uVar3,uVar3,uVar3,*(undefined8 *)(b + 0x38),ctx);
        uVar5 = (uint)(iVar4 != 0);
      }
    }
  }
  else {
    iVar4 = *(int *)(b + 0x28) + 1;
    *(int *)(b + 0x28) = iVar4;
    if (iVar4 != 0x20) goto LAB_001005e7;
    if ((*(long *)(b + 0x10) == 0) || ((uVar2 & 2) != 0)) {
      uVar5 = 1;
      if ((uVar2 & 1) != 0) goto LAB_001005cf;
      goto LAB_001005a8;
    }
    pBVar6 = BN_BLINDING_create_param
                       (b,(BIGNUM *)0x0,(BIGNUM *)0x0,ctx,(bn_mod_exp *)0x0,(BN_MONT_CTX *)0x0);
    uVar5 = (uint)(pBVar6 != (BN_BLINDING *)0x0);
  }
  if (*(int *)(b + 0x28) != 0x20) {
    return uVar5;
  }
LAB_001005cf:
  *(undefined4 *)(b + 0x28) = 0;
  return uVar5;
}



int BN_BLINDING_convert_ex(BIGNUM *n,BIGNUM *r,BN_BLINDING *b,BN_CTX *param_4)

{
  int iVar1;
  BIGNUM *pBVar2;
  
  if ((*(long *)b == 0) || (*(long *)(b + 8) == 0)) {
    ERR_new();
    ERR_set_debug("crypto/bn/bn_blind.c",0x8b,"BN_BLINDING_convert_ex");
    ERR_set_error(3,0x6b,0);
    return 0;
  }
  if (*(int *)(b + 0x28) == -1) {
    *(undefined4 *)(b + 0x28) = 0;
  }
  else {
    iVar1 = BN_BLINDING_update(b,param_4);
    if (iVar1 == 0) {
      return 0;
    }
  }
  if ((r != (BIGNUM *)0x0) && (pBVar2 = BN_copy(r,*(BIGNUM **)(b + 8)), pBVar2 == (BIGNUM *)0x0)) {
    return 0;
  }
  if (*(BN_MONT_CTX **)(b + 0x38) == (BN_MONT_CTX *)0x0) {
    iVar1 = BN_mod_mul(n,n,*(BIGNUM **)b,*(BIGNUM **)(b + 0x18),param_4);
    return iVar1;
  }
  iVar1 = BN_mod_mul_montgomery(n,n,*(BIGNUM **)b,*(BN_MONT_CTX **)(b + 0x38),param_4);
  return iVar1;
}



int BN_BLINDING_convert(BIGNUM *n,BN_BLINDING *b,BN_CTX *ctx)

{
  int iVar1;
  
  iVar1 = BN_BLINDING_convert_ex(n,(BIGNUM *)0x0,b,ctx);
  return iVar1;
}


