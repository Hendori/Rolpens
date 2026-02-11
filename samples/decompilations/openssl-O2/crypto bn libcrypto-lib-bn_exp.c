
ulong bn_get_bits(long *param_1,uint param_2)

{
  byte bVar1;
  int iVar2;
  ulong uVar4;
  uint uVar3;
  
  uVar4 = 0;
  if (-0x40 < (int)param_2) {
    uVar3 = param_2 + 0x3f;
    if (-1 < (int)param_2) {
      uVar3 = param_2;
    }
    iVar2 = (int)uVar3 >> 6;
    if (iVar2 < (int)param_1[1]) {
      uVar4 = *(ulong *)(*param_1 + (long)iVar2 * 8);
      if (((param_2 & 0x3f) != 0) &&
         (uVar4 = uVar4 >> (sbyte)(param_2 & 0x3f), iVar2 + 1 < (int)param_1[1])) {
        bVar1 = (byte)((int)param_2 >> 0x1f);
        uVar4 = uVar4 | *(long *)(*param_1 + 8 + (long)iVar2 * 8) <<
                        (((bVar1 >> 2) - ((char)param_2 + (bVar1 >> 2) & 0x3f)) + 0x40 & 0x3f);
      }
    }
  }
  return uVar4;
}



undefined8
MOD_EXP_CTIME_COPY_FROM_PREBUF(long *param_1,int param_2,ulong *param_3,uint param_4,int param_5)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  long lVar6;
  byte bVar7;
  ulong *puVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  ulong *puVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  
  uVar14 = 1 << ((byte)param_5 & 0x1f);
  lVar6 = bn_wexpand();
  if (lVar6 == 0) {
    return 0;
  }
  if (param_5 < 4) {
    if (0 < param_2) {
      puVar12 = (ulong *)*param_1;
      puVar1 = puVar12 + param_2;
      do {
        uVar11 = 0;
        uVar9 = 0;
        puVar8 = param_3;
        do {
          uVar5 = *puVar8;
          puVar8 = puVar8 + 1;
          uVar15 = param_4 ^ uVar9;
          uVar9 = uVar9 + 1;
          uVar11 = uVar11 | -(ulong)((uVar15 - 1 & ~uVar15) >> 0x1f) & uVar5;
        } while (uVar14 != uVar9);
        *puVar12 = uVar11;
        puVar12 = puVar12 + 1;
        param_3 = param_3 + (int)uVar14;
      } while (puVar12 != puVar1);
    }
  }
  else {
    bVar7 = (byte)param_5 - 2;
    uVar15 = 1 << (bVar7 & 0x1f);
    uVar9 = (int)param_4 >> (bVar7 & 0x1f);
    if (0 < param_2) {
      puVar12 = (ulong *)*param_1;
      puVar1 = puVar12 + param_2;
      do {
        uVar11 = 0;
        uVar13 = 0;
        puVar8 = param_3;
        do {
          puVar2 = puVar8 + (int)uVar15;
          uVar5 = *puVar8;
          puVar3 = puVar8 + (3 << (bVar7 & 0x1f));
          puVar4 = puVar8 + (2 << (bVar7 & 0x1f));
          puVar8 = puVar8 + 1;
          uVar10 = uVar15 - 1 & param_4 ^ uVar13;
          uVar13 = uVar13 + 1;
          uVar11 = uVar11 | (uVar5 & -(ulong)((~uVar9 & uVar9 - 1) >> 0x1f) |
                             *puVar4 & -(ulong)(((uVar9 ^ 2) - 1 & (uVar9 ^ 0xfffffffd)) >> 0x1f) |
                             *puVar2 & -(ulong)(((uVar9 ^ 1) - 1 & (uVar9 ^ 0xfffffffe)) >> 0x1f) |
                            *puVar3 & -(ulong)(((uVar9 ^ 3) - 1 & (uVar9 ^ 0xfffffffc)) >> 0x1f)) &
                            -(ulong)((~uVar10 & uVar10 - 1) >> 0x1f);
        } while (uVar15 != uVar13);
        param_3 = param_3 + (int)uVar14;
        *puVar12 = uVar11;
        puVar12 = puVar12 + 1;
      } while (puVar12 != puVar1);
    }
  }
  *(int *)(param_1 + 1) = param_2;
  return 1;
}



int BN_exp(BIGNUM *r,BIGNUM *a,BIGNUM *p,BN_CTX *ctx)

{
  int iVar1;
  int iVar2;
  int iVar3;
  BIGNUM *pBVar4;
  BIGNUM *pBVar5;
  uint uVar6;
  BIGNUM *local_48;
  
  iVar1 = BN_get_flags(p,4);
  if ((iVar1 != 0) || (iVar1 = BN_get_flags(a,4), iVar1 != 0)) {
    ERR_new();
    ERR_set_debug("crypto/bn/bn_exp.c",0x39,"BN_exp");
    ERR_set_error(3,0xc0101,0);
    return 0;
  }
  BN_CTX_start(ctx);
  if ((a == r) || (local_48 = r, p == r)) {
    local_48 = BN_CTX_get(ctx);
  }
  pBVar4 = BN_CTX_get(ctx);
  uVar6 = 0;
  if (((local_48 != (BIGNUM *)0x0) && (pBVar4 != (BIGNUM *)0x0)) &&
     (pBVar5 = BN_copy(pBVar4,a), pBVar5 != (BIGNUM *)0x0)) {
    iVar1 = BN_num_bits(p);
    iVar2 = BN_is_odd(p);
    if (iVar2 == 0) {
      iVar2 = BN_set_word(local_48,1);
      if (iVar2 == 0) goto LAB_00100430;
    }
    else {
      pBVar5 = BN_copy(local_48,a);
      if (pBVar5 == (BIGNUM *)0x0) goto LAB_00100430;
    }
    iVar2 = 1;
    if (1 < iVar1) {
      do {
        iVar3 = BN_sqr(pBVar4,pBVar4,ctx);
        if ((iVar3 == 0) ||
           ((iVar3 = BN_is_bit_set(p,iVar2), iVar3 != 0 &&
            (iVar3 = BN_mul(local_48,local_48,pBVar4,ctx), iVar3 == 0)))) goto LAB_00100430;
        iVar2 = iVar2 + 1;
      } while (iVar1 != iVar2);
    }
    uVar6 = 1;
    if (local_48 != r) {
      pBVar4 = BN_copy(r,local_48);
      uVar6 = (uint)(pBVar4 != (BIGNUM *)0x0);
    }
  }
LAB_00100430:
  BN_CTX_end(ctx);
  return uVar6;
}



int BN_mod_exp_recp(BIGNUM *r,BIGNUM *a,BIGNUM *p,BIGNUM *m,BN_CTX *ctx)

{
  uint uVar1;
  int iVar2;
  int n;
  int iVar3;
  int iVar4;
  BIGNUM *pBVar5;
  BIGNUM *pBVar6;
  BIGNUM *pBVar7;
  BIGNUM **ppBVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  long in_FS_OFFSET;
  BN_RECP_CTX local_188;
  BIGNUM *local_148 [33];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = BN_get_flags(p,4);
  if (((iVar2 == 0) && (iVar2 = BN_get_flags(a,4), iVar2 == 0)) &&
     (iVar2 = BN_get_flags(m,4), iVar2 == 0)) {
    n = BN_num_bits(p);
    if (n == 0) {
      iVar2 = BN_abs_is_word(m,1);
      if (iVar2 == 0) {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          iVar2 = BN_set_word(r,1);
          return iVar2;
        }
        goto LAB_00100a74;
      }
      BN_zero_ex(r);
      iVar2 = 1;
    }
    else {
      BN_RECP_CTX_init(&local_188);
      BN_CTX_start(ctx);
      pBVar5 = BN_CTX_get(ctx);
      pBVar6 = BN_CTX_get(ctx);
      iVar2 = 0;
      local_148[0] = pBVar6;
      if (pBVar6 != (BIGNUM *)0x0) {
        if (m->neg == 0) {
          iVar3 = BN_RECP_CTX_set(&local_188,m,ctx);
        }
        else {
          pBVar7 = BN_copy(pBVar5,m);
          if (pBVar7 == (BIGNUM *)0x0) goto LAB_00100740;
          pBVar5->neg = 0;
          iVar3 = BN_RECP_CTX_set(&local_188,pBVar5,ctx);
        }
        if ((0 < iVar3) && (iVar3 = BN_nnmod(pBVar6,a,m,ctx), iVar3 != 0)) {
          iVar3 = BN_is_zero(pBVar6);
          if (iVar3 == 0) {
            if (n < 0x2a0) {
              if (0xef < n) {
                uVar1 = 5;
                goto LAB_00100698;
              }
              if (0x4f < n) {
                uVar1 = 4;
                goto LAB_00100698;
              }
              if (0x17 < n) {
                uVar1 = 3;
                goto LAB_00100698;
              }
              uVar1 = 1;
            }
            else {
              uVar1 = 6;
LAB_00100698:
              iVar3 = BN_mod_mul_reciprocal(pBVar5,pBVar6,pBVar6,&local_188,ctx);
              if (iVar3 == 0) goto LAB_00100740;
              ppBVar8 = local_148;
              do {
                pBVar6 = BN_CTX_get(ctx);
                ppBVar8[1] = pBVar6;
                if ((pBVar6 == (BIGNUM *)0x0) ||
                   (iVar3 = BN_mod_mul_reciprocal(pBVar6,*ppBVar8,pBVar5,&local_188,ctx), iVar3 == 0
                   )) goto LAB_00100740;
                ppBVar8 = ppBVar8 + 1;
              } while (ppBVar8 != local_148 + (ulong)((1 << ((char)uVar1 - 1U & 0x1f)) - 2) + 1);
            }
            pBVar5 = p;
            if (((p == r) &&
                ((pBVar5 = BN_CTX_get(ctx), pBVar5 == (BIGNUM *)0x0 ||
                 (pBVar6 = BN_copy(pBVar5,p), pBVar6 == (BIGNUM *)0x0)))) ||
               (iVar3 = BN_set_word(r,1), iVar3 == 0)) goto LAB_00100740;
            uVar10 = 1;
            do {
              n = n + -1;
              iVar3 = BN_is_bit_set(pBVar5,n);
              if (iVar3 != 0) {
                if ((uVar1 == 1) || (n < 1)) {
                  if (uVar10 != 0) {
                    uVar12 = 0;
                    uVar9 = uVar10;
                    goto LAB_001009ca;
                  }
                  uVar9 = 1;
                  uVar12 = 0;
                  goto LAB_00100a26;
                }
                do {
                  uVar12 = 0;
                  uVar11 = 1;
                  uVar9 = 1;
                  do {
                    iVar3 = BN_is_bit_set(pBVar5,n - uVar11);
                    if (iVar3 != 0) {
                      uVar9 = uVar9 << ((char)uVar11 - (char)uVar12 & 0x1fU) | 1;
                      uVar12 = uVar11;
                    }
                    uVar11 = uVar11 + 1;
                  } while ((uVar1 != uVar11) && (uVar11 != n + 1U));
                  if (uVar10 == 0) goto LAB_00100a26;
LAB_001009ca:
                  while( true ) {
                    iVar3 = BN_mod_mul_reciprocal(r,r,local_148[(int)uVar9 >> 1],&local_188,ctx);
                    if (iVar3 == 0) goto LAB_00100740;
                    n = n - (uVar12 + 1);
                    if (n < 0) goto LAB_0010083d;
                    iVar3 = BN_is_bit_set(pBVar5,n);
                    if (iVar3 == 0) goto LAB_00100918;
                    uVar10 = 0;
                    uVar9 = 1;
                    uVar12 = uVar10;
                    if ((uVar1 != 1) && (n != 0)) break;
LAB_00100a26:
                    iVar3 = 0;
                    do {
                      iVar4 = BN_mod_mul_reciprocal(r,r,r,&local_188,ctx);
                      if (iVar4 == 0) goto LAB_00100740;
                      iVar3 = iVar3 + 1;
                    } while (uVar12 + 1 != iVar3);
                  }
                } while( true );
              }
              if (uVar10 == 0) {
LAB_00100918:
                iVar3 = BN_mod_mul_reciprocal(r,r,r,&local_188,ctx);
                if (iVar3 == 0) goto LAB_00100740;
                uVar10 = 0;
              }
            } while (n != 0);
          }
          else {
            BN_zero_ex(r);
          }
LAB_0010083d:
          iVar2 = 1;
        }
      }
LAB_00100740:
      BN_CTX_end(ctx);
      BN_RECP_CTX_free(&local_188);
    }
  }
  else {
    ERR_new();
    ERR_set_debug("crypto/bn/bn_exp.c",0xb7,"BN_mod_exp_recp");
    ERR_set_error(3,0xc0101,0);
    iVar2 = 0;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
LAB_00100a74:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int BN_mod_exp_mont_consttime
              (BIGNUM *rr,BIGNUM *a,BIGNUM *p,BIGNUM *m,BN_CTX *ctx,BN_MONT_CTX *in_mont)

{
  int iVar1;
  
  iVar1 = bn_mod_exp_mont_fixed_top();
  if (iVar1 == 0) {
    return 0;
  }
  bn_correct_top(rr);
  return 1;
}



int BN_mod_exp_mont(BIGNUM *r,BIGNUM *a,BIGNUM *p,BIGNUM *m,BN_CTX *ctx,BN_MONT_CTX *m_ctx)

{
  ulong *puVar1;
  ulong *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  BIGNUM *pBVar7;
  BIGNUM *a_00;
  BIGNUM *r_00;
  BIGNUM *pBVar8;
  long lVar9;
  ulong uVar10;
  int iVar11;
  uint uVar12;
  BIGNUM **ppBVar13;
  long in_FS_OFFSET;
  bool bVar14;
  BN_MONT_CTX *local_190;
  uint local_184;
  BIGNUM *local_148 [33];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = BN_is_odd(m);
  if (iVar3 == 0) {
    ERR_new();
    ERR_set_debug("crypto/bn/bn_exp.c",0x148,"BN_mod_exp_mont");
    ERR_set_error(3,0x66,0);
    uVar12 = 0;
  }
  else {
    if ((m->top < 0x100000) &&
       (((iVar3 = BN_get_flags(p,4), iVar3 != 0 || (iVar3 = BN_get_flags(a,4), iVar3 != 0)) ||
        (iVar3 = BN_get_flags(m,4), iVar3 != 0)))) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        iVar3 = BN_mod_exp_mont_consttime(r,a,p,m,ctx,m_ctx);
        return iVar3;
      }
      goto LAB_0010122b;
    }
    iVar3 = BN_num_bits(p);
    if (iVar3 == 0) {
      iVar3 = BN_abs_is_word(m,1);
      if (iVar3 == 0) {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          iVar3 = BN_set_word(r,1);
          return iVar3;
        }
        goto LAB_0010122b;
      }
      BN_zero_ex(r);
      uVar12 = 1;
      goto LAB_00100d66;
    }
    BN_CTX_start(ctx);
    pBVar7 = BN_CTX_get(ctx);
    a_00 = BN_CTX_get(ctx);
    r_00 = BN_CTX_get(ctx);
    local_148[0] = r_00;
    if (r_00 == (BIGNUM *)0x0) {
      uVar12 = 0;
      local_190 = (BN_MONT_CTX *)0x0;
LAB_00100e42:
      if (m_ctx == (BN_MONT_CTX *)0x0) goto LAB_00100e65;
    }
    else {
      local_190 = m_ctx;
      if (m_ctx != (BN_MONT_CTX *)0x0) {
LAB_00100b95:
        if ((((a->neg == 0) && (iVar4 = BN_ucmp(a,m), iVar4 < 0)) ||
            (iVar4 = BN_nnmod(r_00,a,m,ctx), a = r_00, iVar4 != 0)) &&
           (iVar4 = bn_to_mont_fixed_top(r_00,a,local_190), iVar4 != 0)) {
          if (iVar3 < 0x2a0) {
            if (0xef < iVar3) {
              iVar4 = 5;
              goto LAB_00100c0f;
            }
            if (0x4f < iVar3) {
              iVar4 = 4;
              goto LAB_00100c0f;
            }
            if (0x17 < iVar3) {
              iVar4 = 3;
              goto LAB_00100c0f;
            }
            iVar4 = 1;
          }
          else {
            iVar4 = 6;
LAB_00100c0f:
            iVar5 = bn_mul_mont_fixed_top(pBVar7,r_00,r_00,local_190,ctx);
            if (iVar5 == 0) goto LAB_00100cb0;
            ppBVar13 = local_148;
            do {
              pBVar8 = BN_CTX_get(ctx);
              ppBVar13[1] = pBVar8;
              if ((pBVar8 == (BIGNUM *)0x0) ||
                 (iVar5 = bn_mul_mont_fixed_top(pBVar8,*ppBVar13,pBVar7,local_190,ctx), iVar5 == 0))
              goto LAB_00100cb0;
              ppBVar13 = ppBVar13 + 1;
            } while (ppBVar13 != local_148 + (ulong)((1 << ((char)iVar4 - 1U & 0x1f)) - 2) + 1);
          }
          uVar12 = m->top;
          if ((long)m->d[(long)(int)uVar12 + -1] < 0) {
            lVar9 = bn_wexpand(a_00,uVar12);
            if (lVar9 != 0) {
              puVar1 = m->d;
              puVar2 = a_00->d;
              *puVar2 = -*puVar1;
              uVar10 = 1;
              if (1 < (int)uVar12) {
                do {
                  puVar2[uVar10] = ~puVar1[uVar10];
                  uVar10 = uVar10 + 1;
                } while (uVar10 != uVar12);
              }
              a_00->top = uVar12;
              goto LAB_00100f42;
            }
          }
          else {
            pBVar7 = BN_value_one();
            iVar5 = bn_to_mont_fixed_top(a_00,pBVar7,local_190);
            if (iVar5 != 0) {
LAB_00100f42:
              local_184 = 1;
              do {
                iVar3 = iVar3 + -1;
                iVar5 = BN_is_bit_set(p,iVar3);
                if (iVar5 != 0) {
                  if (iVar4 == 1) {
                    if (local_184 != 0) {
                      iVar5 = 0;
                      goto LAB_001010f9;
                    }
                    local_184 = 1;
                    iVar5 = 0;
                  }
                  else {
                    if (0 < iVar3) goto LAB_0010109a;
                    if (local_184 != 0) {
                      iVar3 = bn_mul_mont_fixed_top(a_00,a_00,r_00,local_190,ctx);
                      if (iVar3 == 0) goto LAB_00100cb0;
                      break;
                    }
                    iVar5 = 0;
                    local_184 = 1;
                  }
                  do {
                    iVar11 = 0;
                    do {
                      iVar6 = bn_mul_mont_fixed_top(a_00,a_00,a_00,local_190,ctx);
                      if (iVar6 == 0) goto LAB_00100cb0;
                      iVar11 = iVar11 + 1;
                    } while (iVar5 + 1 != iVar11);
LAB_001010f9:
                    do {
                      iVar11 = bn_mul_mont_fixed_top
                                         (a_00,a_00,local_148[(int)local_184 >> 1],local_190,ctx);
                      if (iVar11 == 0) goto LAB_00100cb0;
                      iVar3 = iVar3 - (iVar5 + 1);
                      if (iVar3 < 0) goto LAB_00100f99;
                      iVar5 = BN_is_bit_set(p,iVar3);
                      if (iVar5 == 0) goto LAB_0010103a;
                      iVar5 = 0;
                      local_184 = 1;
                      if ((iVar4 == 1) || (iVar3 == 0)) break;
                      local_184 = 0;
LAB_0010109a:
                      iVar5 = 0;
                      iVar11 = 1;
                      uVar12 = 1;
                      do {
                        iVar6 = BN_is_bit_set(p,iVar3 - iVar11);
                        if (iVar6 != 0) {
                          uVar12 = uVar12 << ((char)iVar11 - (char)iVar5 & 0x1fU) | 1;
                          iVar5 = iVar11;
                        }
                        iVar11 = iVar11 + 1;
                      } while ((iVar4 != iVar11) && (iVar11 != iVar3 + 1));
                      bVar14 = local_184 != 0;
                      local_184 = uVar12;
                    } while (bVar14);
                  } while( true );
                }
                if (local_184 == 0) {
LAB_0010103a:
                  iVar5 = bn_mul_mont_fixed_top(a_00,a_00,a_00,local_190,ctx);
                  if (iVar5 == 0) goto LAB_00100cb0;
                  local_184 = 0;
                }
              } while (iVar3 != 0);
LAB_00100f99:
              iVar3 = BN_from_montgomery(r,a_00,local_190,ctx);
              uVar12 = (uint)(iVar3 != 0);
              goto LAB_00100e42;
            }
          }
        }
LAB_00100cb0:
        uVar12 = 0;
        goto LAB_00100e42;
      }
      local_190 = BN_MONT_CTX_new();
      if (local_190 == (BN_MONT_CTX *)0x0) {
        local_190 = (BN_MONT_CTX *)0x0;
        uVar12 = 0;
      }
      else {
        iVar4 = BN_MONT_CTX_set(local_190,m,ctx);
        if (iVar4 != 0) goto LAB_00100b95;
        uVar12 = 0;
      }
LAB_00100e65:
      BN_MONT_CTX_free(local_190);
    }
    BN_CTX_end(ctx);
  }
LAB_00100d66:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar12;
  }
LAB_0010122b:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x001015cd) */
/* WARNING: Removing unreachable block (ram,0x001015ba) */
/* WARNING: Removing unreachable block (ram,0x001015e0) */

int bn_mod_exp_mont_fixed_top
              (BIGNUM *param_1,BIGNUM *param_2,BIGNUM *param_3,BIGNUM *param_4,BN_CTX *param_5,
              BN_MONT_CTX *param_6)

{
  BN_MONT_CTX *pBVar1;
  BIGNUM *pBVar2;
  BN_CTX *pBVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  BIGNUM *pBVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  long *plVar13;
  ulong *puVar14;
  long *plVar15;
  long lVar16;
  undefined8 extraout_RDX;
  ulong *puVar17;
  long *plVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  undefined1 *puVar22;
  undefined1 *puVar23;
  int iVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long in_FS_OFFSET;
  byte bVar28;
  undefined1 auStack_e8 [8];
  ulong local_e0;
  uint local_d4;
  char *local_d0;
  void *local_c8;
  ulong local_c0;
  ulong local_b8;
  BN_MONT_CTX *local_b0;
  long *local_a8;
  BIGNUM *local_a0;
  BIGNUM *local_98;
  BN_MONT_CTX *local_90;
  BIGNUM *local_88;
  BN_CTX *local_80;
  long *local_78;
  uint local_70;
  uint local_6c;
  undefined8 local_68;
  BIGNUM local_58;
  long local_40;
  undefined1 *puVar21;
  
  bVar28 = 0;
  puVar20 = auStack_e8;
  puVar21 = auStack_e8;
  puVar22 = auStack_e8;
  puVar19 = auStack_e8;
  puVar23 = auStack_e8;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_a0 = param_1;
  local_90 = param_6;
  local_88 = param_3;
  local_80 = param_5;
  iVar4 = BN_is_odd(param_4);
  if (iVar4 == 0) {
    iVar4 = 0;
    ERR_new();
    ERR_set_debug("crypto/bn/bn_exp.c",0x273,"bn_mod_exp_mont_fixed_top");
    ERR_set_error(3,0x66,0);
    goto LAB_00101402;
  }
  uVar8 = param_4->top;
  if (0xfffff < (int)uVar8) {
    iVar4 = BN_mod_exp_mont(local_a0,param_2,local_88,param_4,local_80,local_90);
    puVar19 = auStack_e8;
    goto LAB_00101402;
  }
  iVar4 = local_88->top;
  if (iVar4 == 0) {
    iVar4 = BN_abs_is_word(param_4,1);
    if (iVar4 == 0) {
      iVar4 = BN_set_word(local_a0,1);
      puVar19 = auStack_e8;
    }
    else {
      iVar4 = 1;
      BN_zero_ex(local_a0);
      puVar19 = auStack_e8;
    }
    goto LAB_00101402;
  }
  BN_CTX_start(local_80);
  local_b0 = local_90;
  if (local_90 == (BN_MONT_CTX *)0x0) {
    local_b0 = BN_MONT_CTX_new();
    if (local_b0 == (BN_MONT_CTX *)0x0) {
      iVar4 = 0;
      BN_MONT_CTX_free((BN_MONT_CTX *)0x0);
    }
    else {
      iVar5 = BN_MONT_CTX_set(local_b0,param_4,local_80);
      if (iVar5 != 0) goto LAB_001012e5;
LAB_00101638:
      iVar4 = 0;
      BN_MONT_CTX_free(local_b0);
      puVar23 = auStack_e8;
    }
  }
  else {
LAB_001012e5:
    if (((param_2->neg == 0) && (iVar5 = BN_ucmp(param_2,param_4), pBVar9 = param_2, iVar5 < 0)) ||
       ((pBVar9 = BN_CTX_get(local_80), pBVar9 != (BIGNUM *)0x0 &&
        (local_98 = pBVar9, iVar5 = BN_nnmod(pBVar9,param_2,param_4,local_80), pBVar9 = local_98,
        iVar5 != 0)))) {
      local_98 = pBVar9;
      iVar5 = local_98->top;
      if (iVar5 == 0x10) {
        if (local_88->top == 0x10) {
          iVar5 = BN_num_bits(param_4);
          if ((iVar5 != 0x400) || (iVar5 = rsaz_avx2_eligible(), pBVar9 = local_a0, iVar5 == 0)) {
            iVar5 = local_98->top;
            goto LAB_00101338;
          }
          lVar26 = bn_wexpand(local_a0,0x10);
          if (lVar26 == 0) goto LAB_001014a0;
          RSAZ_1024_mod_exp_avx2
                    (pBVar9->d,local_98->d,local_88->d,param_4->d,(local_b0->RR).d,local_b0->n0[0]);
          pBVar9->top = 0x10;
LAB_001016d3:
          pBVar9->neg = 0;
          bn_correct_top(pBVar9);
          if (local_90 == (BN_MONT_CTX *)0x0) {
            BN_MONT_CTX_free(local_b0);
          }
          iVar4 = 1;
          puVar23 = auStack_e8;
          goto LAB_00101f1a;
        }
      }
      else {
LAB_00101338:
        if (((iVar5 == 8) && (local_88->top == 8)) && (iVar5 = BN_num_bits(param_4), iVar5 == 0x200)
           ) {
          lVar26 = bn_wexpand(local_a0,8);
          pBVar9 = local_a0;
          if (lVar26 != 0) {
            RSAZ_512_mod_exp(local_a0->d,local_98->d,local_88->d,param_4->d,local_b0->n0[0],
                             (local_b0->RR).d);
            pBVar9->top = 8;
            goto LAB_001016d3;
          }
          goto LAB_001014a0;
        }
      }
      local_d4 = iVar4 * 0x40;
      if ((int)local_d4 < 0x3aa) {
        if (0x132 < (int)local_d4) {
          iVar4 = 5;
          goto LAB_001014e6;
        }
        iVar5 = 0;
        if ((int)local_d4 < 0x5a) {
          iVar7 = 8;
          if ((int)local_d4 < 0x17) {
            iVar7 = 2;
          }
          iVar4 = (0x16 < (int)local_d4) + 1 + (uint)(0x16 < (int)local_d4);
          iVar5 = 0;
        }
        else {
          iVar7 = 0x10;
          iVar4 = 4;
        }
LAB_00101505:
        iVar24 = uVar8 * 2;
        if ((int)(uVar8 * 2) < iVar7) {
          iVar24 = iVar7;
        }
        iVar5 = iVar5 + (iVar24 + (uVar8 << (sbyte)iVar4)) * 8;
        iVar24 = iVar5 + 0x40;
        if (0xbff < iVar5) goto LAB_0010171d;
        puVar23 = auStack_e8;
        while (puVar21 != auStack_e8 + -((long)iVar24 + 0x17U & 0xfffffffffffff000)) {
          puVar20 = puVar23 + -0x1000;
          *(undefined8 *)(puVar23 + -8) = *(undefined8 *)(puVar23 + -8);
          puVar21 = puVar23 + -0x1000;
          puVar23 = puVar23 + -0x1000;
        }
        uVar10 = (ulong)((uint)((long)iVar24 + 0x17U) & 0xff0);
        lVar26 = -uVar10;
        puVar22 = puVar20 + lVar26;
        if (uVar10 != 0) {
          *(undefined8 *)(puVar20 + -8) = *(undefined8 *)(puVar20 + -8);
        }
        local_c0 = (ulong)iVar5;
        local_a8 = (long *)((((ulong)(puVar20 + lVar26 + 0xf) & 0xfffffffffffffff0) -
                            (ulong)((uint)(puVar20 + lVar26 + 0xf) & 0x30)) + 0x40);
        if (7 < local_c0) {
          plVar13 = local_a8;
          for (uVar10 = local_c0 >> 3; uVar10 != 0; uVar10 = uVar10 - 1) {
            *plVar13 = 0;
            plVar13 = plVar13 + (ulong)bVar28 * -2 + 1;
          }
        }
        local_c8 = (void *)0x0;
        local_d0 = "crypto/bn/bn_exp.c";
      }
      else {
        iVar4 = 6;
LAB_001014e6:
        if ((int)uVar8 < 0x201) {
          iVar5 = uVar8 * 8;
          iVar7 = 0x20;
          iVar4 = 5;
          goto LAB_00101505;
        }
        iVar7 = 1 << (sbyte)iVar4;
        iVar5 = ((uVar8 << (sbyte)iVar4) + uVar8 * 2) * 8;
        iVar24 = iVar5 + 0x40;
LAB_0010171d:
        local_d0 = "crypto/bn/bn_exp.c";
        local_c8 = CRYPTO_malloc(iVar24,"crypto/bn/bn_exp.c",0x2e5);
        if (local_c8 == (void *)0x0) goto LAB_001014a0;
        local_a8 = (long *)(((ulong)local_c8 & 0xffffffffffffffc0) + 0x40);
        local_c0 = (ulong)iVar5;
        memset(local_a8,0,local_c0);
      }
      local_b8 = (ulong)iVar7;
      lVar26 = (long)(int)uVar8;
      puVar17 = param_4->d;
      local_e0 = lVar26 * 8;
      local_58.top = 0;
      local_70 = 0;
      local_78 = (long *)(local_b8 * local_e0 + (long)local_a8);
      local_58.d = (ulong *)(local_78 + lVar26);
      local_58.neg = 0;
      local_58.flags = 2;
      local_68 = 0x200000000;
      local_6c = uVar8;
      local_58.dmax = uVar8;
      if ((long)puVar17[lVar26 + -1] < 0) {
        *local_78 = -*puVar17;
        uVar10 = 1;
        local_70 = uVar8;
        if (1 < (int)uVar8) {
          do {
            local_78[uVar10] = ~puVar17[uVar10];
            uVar10 = uVar10 + 1;
          } while (uVar8 != uVar10);
        }
LAB_00101827:
        pBVar1 = local_b0;
        *(undefined8 *)(puVar22 + -8) = 0x101852;
        pBVar9 = local_98;
        local_98 = &local_58;
        iVar5 = bn_to_mont_fixed_top(&local_58,pBVar9,local_b0,local_80);
        puVar17 = local_58.d;
        if (iVar5 == 0) goto LAB_00101ee3;
        if ((0x1fe < uVar8 - 2) || (iVar4 != 5)) {
          uVar6 = local_70;
          if ((int)uVar8 <= (int)local_70) {
            uVar6 = uVar8;
          }
          if (0 < (int)uVar6) {
            plVar13 = local_78;
            plVar15 = local_a8;
            do {
              lVar26 = *plVar13;
              plVar13 = plVar13 + 1;
              *plVar15 = lVar26;
              plVar15 = plVar15 + local_b8;
            } while (local_78 + (int)uVar6 != plVar13);
          }
          uVar10 = (long)local_58.top;
          if ((int)uVar8 <= local_58.top) {
            uVar10 = (long)(int)uVar8;
          }
          if (0 < (int)uVar10) {
            puVar17 = (ulong *)(local_a8 + 1);
            puVar14 = local_58.d;
            do {
              uVar11 = *puVar14;
              puVar14 = puVar14 + 1;
              *puVar17 = uVar11;
              puVar17 = puVar17 + local_b8;
            } while (puVar14 != local_58.d + uVar10);
          }
          if (iVar4 != 1) {
            *(undefined8 *)(puVar22 + -8) = 0x101ced;
            iVar5 = bn_mul_mont_fixed_top(&local_78,local_98,local_98,local_b0,local_80);
            uVar10 = local_b8;
            if (iVar5 == 0) goto LAB_00101ee3;
            uVar6 = local_70;
            if ((int)uVar8 <= (int)local_70) {
              uVar6 = uVar8;
            }
            if (0 < (int)uVar6) {
              plVar13 = local_a8 + 2;
              plVar15 = local_78;
              do {
                lVar26 = *plVar15;
                plVar15 = plVar15 + 1;
                *plVar13 = lVar26;
                plVar13 = plVar13 + local_b8;
              } while (local_78 + (int)uVar6 != plVar15);
            }
            local_e0 = CONCAT44(local_e0._4_4_,iVar4);
            local_b8 = CONCAT44(local_b8._4_4_,iVar7);
            iVar4 = 3;
            plVar13 = local_a8 + 3;
            do {
              *(undefined8 *)(puVar22 + -8) = 0x101d8d;
              iVar5 = bn_mul_mont_fixed_top(&local_78,local_98,&local_78,local_b0,local_80);
              if (iVar5 == 0) goto LAB_00101e8d;
              uVar6 = local_70;
              if ((int)uVar8 <= (int)local_70) {
                uVar6 = uVar8;
              }
              if (0 < (int)uVar6) {
                plVar15 = local_78;
                plVar18 = plVar13;
                do {
                  lVar26 = *plVar15;
                  plVar15 = plVar15 + 1;
                  *plVar18 = lVar26;
                  plVar18 = plVar18 + uVar10;
                } while (plVar15 != local_78 + (int)uVar6);
              }
              iVar4 = iVar4 + 1;
              plVar13 = plVar13 + 1;
            } while (iVar4 < (int)local_b8);
            iVar4 = (int)local_e0;
            iVar7 = (int)local_b8;
          }
          iVar24 = (int)(local_d4 - 1) % iVar4 + 1;
          bVar28 = (byte)iVar24;
          iVar24 = local_d4 - iVar24;
          *(undefined8 *)(puVar22 + -8) = 0x101e01;
          uVar6 = bn_get_bits(local_88);
          *(undefined8 *)(puVar22 + -8) = 0x101e27;
          iVar5 = MOD_EXP_CTIME_COPY_FROM_PREBUF
                            (&local_78,uVar8,local_a8,(1 << (bVar28 & 0x1f)) - 1U & uVar6,iVar4);
          pBVar3 = local_80;
          pBVar1 = local_b0;
          if (iVar5 == 0) goto LAB_00101ee3;
          local_d4 = iVar7 - 1;
          local_e0 = CONCAT44(local_e0._4_4_,uVar8);
          local_b8 = CONCAT44(local_b8._4_4_,iVar24);
          do {
            uVar8 = local_70;
            if ((int)local_b8 < 1) goto LAB_00101bee;
            iVar5 = 0;
            do {
              *(undefined8 *)(puVar22 + -8) = 0x101e89;
              iVar7 = bn_mul_mont_fixed_top(&local_78,&local_78,&local_78,pBVar1,pBVar3);
              if (iVar7 == 0) goto LAB_00101e8d;
              iVar5 = iVar5 + 1;
            } while (iVar4 != iVar5);
            iVar5 = (int)local_b8 - iVar4;
            local_b8 = CONCAT44(local_b8._4_4_,iVar5);
            *(undefined8 *)(puVar22 + -8) = 0x101f6d;
            uVar8 = bn_get_bits(local_88,iVar5);
            pBVar9 = local_98;
            *(undefined8 *)(puVar22 + -8) = 0x101f94;
            iVar5 = MOD_EXP_CTIME_COPY_FROM_PREBUF
                              (local_98,local_e0 & 0xffffffff,local_a8,local_d4 & uVar8,iVar4);
            if (iVar5 == 0) break;
            *(undefined8 *)(puVar22 + -8) = 0x101fb0;
            iVar5 = bn_mul_mont_fixed_top(&local_78,&local_78,pBVar9,pBVar1,pBVar3);
          } while (iVar5 != 0);
LAB_00101e8d:
          if (local_90 != (BN_MONT_CTX *)0x0) {
            iVar4 = 0;
            goto LAB_00101eef;
          }
          goto LAB_00101f50;
        }
        local_98 = (BIGNUM *)pBVar1->n0;
        uVar10 = local_e0;
        if (local_58.top < (int)uVar8) {
          local_b8 = local_e0;
          *(undefined8 *)(puVar22 + -8) = 0x1018b2;
          memset(local_58.d + local_58.top,0,(ulong)((uVar8 - local_58.top) - 1) * 8 + 8);
          uVar10 = local_b8;
        }
        plVar13 = local_78;
        if ((int)local_70 < (int)uVar8) {
          *(undefined8 *)(puVar22 + -8) = 0x1018e6;
          local_b8 = uVar10;
          memset(local_78 + (int)local_70,0,(ulong)((uVar8 - local_70) - 1) * 8 + 8);
          uVar10 = local_b8;
        }
        plVar15 = local_a8;
        lVar25 = (long)puVar17 + uVar10;
        puVar17 = (local_b0->N).d;
        uVar11 = 0;
        do {
          *(undefined8 *)(lVar25 + uVar11) = *(undefined8 *)((long)puVar17 + uVar11);
          uVar11 = uVar11 + 8;
        } while (uVar10 != uVar11);
        iVar4 = 4;
        *(undefined8 *)(puVar22 + -8) = 0x10192e;
        bn_scatter5(plVar13,lVar26,local_a8,0);
        *(undefined8 *)(puVar22 + -8) = 0x101943;
        bn_scatter5(local_58.d,(long)local_58.top,plVar15,1);
        *(undefined8 *)(puVar22 + -8) = 0x101960;
        bn_mul_mont(local_78,local_58.d,local_58.d,lVar25,local_98,uVar8);
        iVar5 = 3;
        *(undefined8 *)(puVar22 + -8) = 0x10197a;
        bn_scatter5(local_78,lVar26,plVar15,2);
        do {
          *(undefined8 *)(puVar22 + -8) = 0x101996;
          bn_mul_mont(local_78,local_78,local_78,lVar25,local_98,uVar8);
          lVar16 = (long)iVar4;
          iVar4 = iVar4 * 2;
          *(undefined8 *)(puVar22 + -8) = 0x1019af;
          bn_scatter5(local_78,lVar26,local_a8,lVar16);
          plVar13 = local_a8;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        local_b8 = 3;
        do {
          uVar10 = local_b8;
          iVar4 = (int)local_b8;
          *(ulong *)(puVar22 + -0x10) = (ulong)(iVar4 - 1);
          *(undefined8 *)(puVar22 + -0x18) = 0x1019f8;
          bn_mul_mont_gather5(local_78,local_58.d,plVar13,lVar25,local_98,uVar8);
          iVar4 = iVar4 * 2;
          *(undefined8 *)(puVar22 + -0x18) = 0x101a0e;
          bn_scatter5(local_78,lVar26,plVar13,uVar10);
          do {
            *(undefined8 *)(puVar22 + -8) = 0x101a2c;
            bn_mul_mont(local_78,local_78,local_78,lVar25,local_98,uVar8);
            lVar16 = (long)iVar4;
            iVar4 = iVar4 * 2;
            *(undefined8 *)(puVar22 + -8) = 0x101a41;
            bn_scatter5(local_78,lVar26,plVar13,lVar16);
          } while (iVar4 < 0x20);
          local_b8 = local_b8 + 2;
        } while (local_b8 != 9);
        lVar16 = 9;
        local_b8 = 9;
        do {
          *(ulong *)(puVar22 + -0x10) = (ulong)((int)lVar16 - 1);
          *(undefined8 *)(puVar22 + -0x18) = 0x101a96;
          bn_mul_mont_gather5(local_78,local_58.d,plVar13,lVar25,local_98,uVar8);
          *(undefined8 *)(puVar22 + -0x18) = 0x101aa8;
          bn_scatter5(local_78,lVar26,plVar13,lVar16);
          *(undefined8 *)(puVar22 + -0x18) = 0x101ac4;
          bn_mul_mont(local_78,local_78,local_78,lVar25,local_98,uVar8);
          lVar27 = lVar16 * 2;
          lVar16 = lVar16 + 2;
          *(undefined8 *)(puVar22 + -0x18) = 0x101adb;
          bn_scatter5(local_78,lVar26,plVar13,lVar27);
        } while (lVar16 != 0x11);
        do {
          *(ulong *)(puVar22 + -0x10) = (ulong)((int)lVar16 - 1);
          *(undefined8 *)(puVar22 + -0x18) = 0x101b0e;
          bn_mul_mont_gather5(local_78,local_58.d,plVar13,lVar25,local_98,uVar8);
          lVar27 = lVar16 + 2;
          *(undefined8 *)(puVar22 + -0x18) = 0x101b24;
          bn_scatter5(local_78,lVar26,plVar13,lVar16);
          lVar16 = lVar27;
        } while (lVar27 != 0x21);
        iVar4 = (int)(local_d4 - 1) % 5 + 1;
        bVar28 = (byte)iVar4;
        iVar4 = local_d4 - iVar4;
        *(undefined8 *)(puVar22 + -8) = 0x101b6e;
        local_a8 = plVar13;
        uVar6 = bn_get_bits(local_88);
        *(undefined8 *)(puVar22 + -8) = 0x101b92;
        bn_gather5(local_78,lVar26,plVar13,(long)(int)((1 << (bVar28 & 0x1f)) - 1U & uVar6));
        pBVar2 = local_88;
        pBVar9 = local_98;
        uVar12 = extraout_RDX;
        if (((long)(int)uVar8 & 7U) == 0) {
          while (0 < iVar4) {
            puVar17 = pBVar2->d;
            iVar4 = iVar4 + -5;
            *(undefined8 *)(puVar22 + -8) = 0x101bbf;
            uVar12 = bn_get_bits5(puVar17,iVar4,uVar12);
            *(undefined8 *)(puVar22 + -0x10) = uVar12;
            *(undefined8 *)(puVar22 + -0x18) = 0x101be0;
            bn_power5(local_78,local_78,local_a8,lVar25,pBVar9,uVar8);
            uVar12 = *(undefined8 *)(puVar22 + -0x10);
          }
        }
        else {
          while (0 < iVar4) {
            iVar4 = iVar4 + -5;
            *(undefined8 *)(puVar22 + -8) = 0x102004;
            bn_mul_mont(local_78,local_78,local_78,lVar25,pBVar9,uVar8);
            *(undefined8 *)(puVar22 + -8) = 0x10201c;
            bn_mul_mont(local_78,local_78,local_78,lVar25,pBVar9,uVar8);
            *(undefined8 *)(puVar22 + -8) = 0x102034;
            bn_mul_mont(local_78,local_78,local_78,lVar25,pBVar9,uVar8);
            *(undefined8 *)(puVar22 + -8) = 0x10204c;
            bn_mul_mont(local_78,local_78,local_78,lVar25,pBVar9,uVar8);
            *(undefined8 *)(puVar22 + -8) = 0x102064;
            bn_mul_mont(local_78,local_78,local_78,lVar25,pBVar9,uVar8);
            puVar17 = pBVar2->d;
            *(undefined8 *)(puVar22 + -8) = 0x10206f;
            uVar12 = bn_get_bits5(puVar17,iVar4);
            *(undefined8 *)(puVar22 + -0x10) = uVar12;
            *(undefined8 *)(puVar22 + -0x18) = 0x102090;
            bn_mul_mont_gather5(local_78,local_78,local_a8,lVar25,pBVar9,uVar8);
          }
        }
LAB_00101bee:
        local_70 = uVar8;
        *(undefined8 *)(puVar22 + -8) = 0x101c08;
        iVar4 = bn_from_mont_fixed_top(local_a0,&local_78,local_b0,local_80);
        if (iVar4 == 0) goto LAB_00101ee3;
        iVar4 = 1;
        if (local_90 != (BN_MONT_CTX *)0x0) goto LAB_00101eef;
LAB_00101c28:
        *(undefined8 *)(puVar22 + -8) = 0x101c34;
        BN_MONT_CTX_free(local_b0);
      }
      else {
        *(undefined8 *)(puVar22 + -8) = 0x101eb7;
        pBVar9 = BN_value_one();
        *(undefined8 *)(puVar22 + -8) = 0x101ecd;
        iVar5 = bn_to_mont_fixed_top(&local_78,pBVar9,local_b0,local_80);
        if (iVar5 != 0) goto LAB_00101827;
LAB_00101ee3:
        iVar4 = 0;
        if (local_90 == (BN_MONT_CTX *)0x0) {
LAB_00101f50:
          iVar4 = 0;
          goto LAB_00101c28;
        }
      }
LAB_00101eef:
      *(undefined8 *)(puVar22 + -8) = 0x101f02;
      OPENSSL_cleanse(local_a8,local_c0);
      *(undefined8 *)(puVar22 + -8) = 0x101f1a;
      CRYPTO_free(local_c8);
      puVar23 = puVar22;
    }
    else {
LAB_001014a0:
      if (local_90 == (BN_MONT_CTX *)0x0) goto LAB_00101638;
      iVar4 = 0;
      puVar23 = auStack_e8;
    }
  }
LAB_00101f1a:
  *(undefined8 *)(puVar23 + -8) = 0x101f23;
  BN_CTX_end(local_80);
  puVar19 = puVar23;
LAB_00101402:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)(puVar19 + -8) = 0x102130;
  __stack_chk_fail();
}



int BN_mod_exp_mont_word(BIGNUM *r,ulong a,BIGNUM *p,BIGNUM *m,BN_CTX *ctx,BN_MONT_CTX *m_ctx)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  bool bVar5;
  int iVar6;
  int iVar7;
  BIGNUM *a_00;
  BIGNUM *rem;
  ulong w;
  ulong w_00;
  BIGNUM *pBVar8;
  uint uVar9;
  bool bVar10;
  ulong local_70;
  BN_MONT_CTX *local_68;
  
  iVar6 = BN_get_flags(p,4);
  if ((iVar6 != 0) || (iVar6 = BN_get_flags(m,4), iVar6 != 0)) {
    ERR_new();
    ERR_set_debug("crypto/bn/bn_exp.c",0x4b1,"BN_mod_exp_mont_word");
    ERR_set_error(3,0xc0101,0);
    return 0;
  }
  iVar6 = BN_is_odd(m);
  if (iVar6 == 0) {
    ERR_new();
    ERR_set_debug("crypto/bn/bn_exp.c",0x4b9,"BN_mod_exp_mont_word");
    ERR_set_error(3,0x66,0);
    return 0;
  }
  local_70 = a;
  if (m->top == 1) {
    local_70 = a % *m->d;
  }
  iVar6 = BN_num_bits(p);
  if (iVar6 == 0) {
    iVar6 = BN_abs_is_word(m,1);
    if (iVar6 == 0) {
      iVar6 = BN_set_word(r,1);
      return iVar6;
    }
LAB_001023b1:
    BN_zero_ex(r);
    return 1;
  }
  if (local_70 == 0) goto LAB_001023b1;
  BN_CTX_start(ctx);
  a_00 = BN_CTX_get(ctx);
  rem = BN_CTX_get(ctx);
  uVar9 = 0;
  if (rem == (BIGNUM *)0x0) {
    local_68 = (BN_MONT_CTX *)0x0;
    goto LAB_00102360;
  }
  local_68 = m_ctx;
  if (m_ctx == (BN_MONT_CTX *)0x0) {
    local_68 = BN_MONT_CTX_new();
    if (local_68 != (BN_MONT_CTX *)0x0) {
      iVar7 = BN_MONT_CTX_set(local_68,m,ctx);
      if (iVar7 != 0) goto LAB_00102274;
      uVar9 = 0;
    }
  }
  else {
LAB_00102274:
    iVar6 = iVar6 + -2;
    if (iVar6 < 0) {
      if (local_70 == 1) {
LAB_001024f1:
        iVar6 = BN_set_word(r,1);
        uVar9 = (uint)(iVar6 != 0);
      }
      else {
LAB_001024a7:
        iVar6 = BN_set_word(a_00,local_70);
        if ((iVar6 != 0) &&
           (iVar6 = BN_to_montgomery(a_00,a_00,local_68,ctx), rem = a_00, iVar6 != 0))
        goto LAB_0010233e;
      }
    }
    else {
      bVar5 = true;
      w_00 = local_70;
      do {
        auVar1._8_8_ = 0;
        auVar1._0_8_ = w_00;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = w_00;
        w = SUB168(auVar1 * auVar3,0);
        pBVar8 = a_00;
        if (SUB168(auVar1 * auVar3,8) == 0) {
          if (!bVar5) goto LAB_00102518;
        }
        else {
          if (bVar5) {
            iVar7 = BN_set_word(a_00,w_00);
            if (iVar7 == 0) {
LAB_001025b8:
              uVar9 = 0;
              goto LAB_00102360;
            }
            iVar7 = BN_to_montgomery(a_00,a_00,local_68,ctx);
            if (iVar7 == 0) goto LAB_00102360;
            w = 1;
          }
          else {
            iVar7 = BN_mul_word(a_00,w_00);
            if (iVar7 == 0) goto LAB_00102360;
            iVar7 = BN_div((BIGNUM *)0x0,rem,a_00,m,ctx);
            if (iVar7 == 0) goto LAB_001025b8;
            w = 1;
            pBVar8 = rem;
            rem = a_00;
          }
LAB_00102518:
          iVar7 = BN_mod_mul_montgomery(pBVar8,pBVar8,pBVar8,local_68,ctx);
          if (iVar7 == 0) goto LAB_00102360;
          bVar5 = false;
        }
        iVar7 = BN_is_bit_set(p,iVar6);
        a_00 = pBVar8;
        w_00 = w;
        if ((iVar7 != 0) &&
           (auVar2._8_8_ = 0, auVar2._0_8_ = local_70, auVar4._8_8_ = 0, auVar4._0_8_ = w,
           w_00 = SUB168(auVar2 * auVar4,0), SUB168(auVar2 * auVar4,8) != 0)) {
          if (bVar5) {
            iVar7 = BN_set_word(pBVar8,w);
            if ((iVar7 == 0) || (iVar7 = BN_to_montgomery(pBVar8,pBVar8,local_68,ctx), iVar7 == 0))
            goto LAB_00102360;
            bVar5 = false;
            w_00 = local_70;
          }
          else {
            iVar7 = BN_mul_word(pBVar8,w);
            if ((iVar7 == 0) ||
               (iVar7 = BN_div((BIGNUM *)0x0,rem,pBVar8,m,ctx), a_00 = rem, w_00 = local_70,
               rem = pBVar8, iVar7 == 0)) goto LAB_00102360;
          }
        }
        bVar10 = iVar6 != 0;
        iVar6 = iVar6 + -1;
      } while (bVar10);
      if (w_00 == 1) {
        rem = a_00;
        if (bVar5) goto LAB_001024f1;
      }
      else {
        local_70 = w_00;
        if (bVar5) goto LAB_001024a7;
        iVar6 = BN_mul_word(a_00,w_00);
        if ((iVar6 == 0) || (iVar6 = BN_div((BIGNUM *)0x0,rem,a_00,m,ctx), iVar6 == 0))
        goto LAB_00102360;
      }
LAB_0010233e:
      iVar6 = BN_from_montgomery(r,rem,local_68,ctx);
      uVar9 = (uint)(iVar6 != 0);
    }
LAB_00102360:
    if (m_ctx != (BN_MONT_CTX *)0x0) goto LAB_0010236c;
  }
  BN_MONT_CTX_free(local_68);
LAB_0010236c:
  BN_CTX_end(ctx);
  return uVar9;
}



int BN_mod_exp(BIGNUM *r,BIGNUM *a,BIGNUM *p,BIGNUM *m,BN_CTX *ctx)

{
  int iVar1;
  
  iVar1 = BN_is_odd(m);
  if (iVar1 == 0) {
    iVar1 = BN_mod_exp_recp(r,a,p,m,ctx);
    return iVar1;
  }
  if ((a->top == 1) && (a->neg == 0)) {
    iVar1 = BN_get_flags(p,4);
    if (iVar1 == 0) {
      iVar1 = BN_get_flags(a,4);
      if (iVar1 == 0) {
        iVar1 = BN_get_flags(m,4);
        if (iVar1 == 0) {
          iVar1 = BN_mod_exp_mont_word(r,*a->d,p,m,ctx,(BN_MONT_CTX *)0x0);
          return iVar1;
        }
      }
    }
  }
  iVar1 = BN_mod_exp_mont(r,a,p,m,ctx,(BN_MONT_CTX *)0x0);
  return iVar1;
}



int BN_mod_exp_simple(BIGNUM *r,BIGNUM *a,BIGNUM *p,BIGNUM *m,BN_CTX *ctx)

{
  uint uVar1;
  int iVar2;
  int n;
  int iVar3;
  int iVar4;
  BIGNUM *pBVar5;
  BIGNUM *pBVar6;
  BIGNUM **ppBVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  long in_FS_OFFSET;
  BIGNUM *local_148 [33];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = BN_get_flags(p,4);
  if (((iVar2 == 0) && (iVar2 = BN_get_flags(a,4), iVar2 == 0)) &&
     (iVar2 = BN_get_flags(m,4), iVar2 == 0)) {
    if (m == r) {
      ERR_new();
      ERR_set_debug("crypto/bn/bn_exp.c",0x53a,"BN_mod_exp_simple");
      ERR_set_error(3,0x80106,0);
      goto LAB_00102799;
    }
    n = BN_num_bits(p);
    if (n == 0) {
      iVar2 = BN_abs_is_word(m,1);
      if (iVar2 == 0) {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          iVar2 = BN_set_word(r,1);
          return iVar2;
        }
        goto LAB_00102c84;
      }
      BN_zero_ex(r);
      iVar2 = 1;
    }
    else {
      BN_CTX_start(ctx);
      pBVar5 = BN_CTX_get(ctx);
      pBVar6 = BN_CTX_get(ctx);
      iVar2 = 0;
      local_148[0] = pBVar6;
      if ((pBVar6 != (BIGNUM *)0x0) && (iVar3 = BN_nnmod(pBVar6,a,m,ctx), iVar3 != 0)) {
        iVar3 = BN_is_zero();
        if (iVar3 == 0) {
          if (n < 0x2a0) {
            if (0xef < n) {
              uVar1 = 5;
              goto LAB_00102910;
            }
            if (0x4f < n) {
              uVar1 = 4;
              goto LAB_00102910;
            }
            if (0x17 < n) {
              uVar1 = 3;
              goto LAB_00102910;
            }
            uVar1 = 1;
          }
          else {
            uVar1 = 6;
LAB_00102910:
            iVar3 = BN_mod_mul(pBVar5,pBVar6,pBVar6,m,ctx);
            if (iVar3 == 0) goto LAB_0010284e;
            ppBVar7 = local_148;
            do {
              pBVar6 = BN_CTX_get(ctx);
              ppBVar7[1] = pBVar6;
              if ((pBVar6 == (BIGNUM *)0x0) ||
                 (iVar3 = BN_mod_mul(pBVar6,*ppBVar7,pBVar5,m,ctx), iVar3 == 0)) goto LAB_0010284e;
              ppBVar7 = ppBVar7 + 1;
            } while (ppBVar7 != local_148 + (ulong)((1 << ((char)uVar1 - 1U & 0x1f)) - 2) + 1);
          }
          pBVar5 = p;
          if (((p == r) &&
              ((pBVar5 = BN_CTX_get(ctx), pBVar5 == (BIGNUM *)0x0 ||
               (pBVar6 = BN_copy(pBVar5,p), pBVar6 == (BIGNUM *)0x0)))) ||
             (iVar3 = BN_set_word(r,1), iVar3 == 0)) goto LAB_0010284e;
          uVar9 = 1;
          do {
            n = n + -1;
            iVar3 = BN_is_bit_set(pBVar5,n);
            if (iVar3 != 0) {
              if ((uVar1 == 1) || (n < 1)) {
                if (uVar9 == 0) {
                  uVar8 = 1;
                  uVar10 = 0;
                  goto LAB_00102c0e;
                }
                uVar10 = 0;
                uVar8 = uVar9;
                goto LAB_00102bb2;
              }
              do {
                uVar10 = 0;
                uVar8 = 1;
                uVar11 = 1;
                do {
                  iVar3 = BN_is_bit_set(pBVar5,n - uVar11);
                  if (iVar3 != 0) {
                    uVar8 = uVar8 << ((char)uVar11 - (char)uVar10 & 0x1fU) | 1;
                    uVar10 = uVar11;
                  }
                  uVar11 = uVar11 + 1;
                } while ((uVar1 != uVar11) && (uVar11 != n + 1U));
                if (uVar9 == 0) goto LAB_00102c0e;
LAB_00102bb2:
                while( true ) {
                  iVar3 = BN_mod_mul(r,r,local_148[(int)uVar8 >> 1],m,ctx);
                  if (iVar3 == 0) goto LAB_0010284e;
                  n = n - (uVar10 + 1);
                  if (n < 0) goto LAB_00102a24;
                  iVar3 = BN_is_bit_set(pBVar5,n);
                  if (iVar3 == 0) goto LAB_00102b02;
                  uVar9 = 0;
                  uVar8 = 1;
                  uVar10 = uVar9;
                  if ((uVar1 != 1) && (n != 0)) break;
LAB_00102c0e:
                  iVar3 = 0;
                  do {
                    iVar4 = BN_mod_mul(r,r,r,m,ctx);
                    if (iVar4 == 0) goto LAB_0010284e;
                    iVar3 = iVar3 + 1;
                  } while (uVar10 + 1 != iVar3);
                }
              } while( true );
            }
            if (uVar9 == 0) {
LAB_00102b02:
              iVar3 = BN_mod_mul(r,r,r,m,ctx);
              if (iVar3 == 0) goto LAB_0010284e;
              uVar9 = 0;
            }
          } while (n != 0);
        }
        else {
          BN_zero_ex(r);
        }
LAB_00102a24:
        iVar2 = 1;
      }
LAB_0010284e:
      BN_CTX_end(ctx);
    }
  }
  else {
    ERR_new();
    ERR_set_debug("crypto/bn/bn_exp.c",0x535,"BN_mod_exp_simple");
    ERR_set_error(3,0xc0101,0);
LAB_00102799:
    iVar2 = 0;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
LAB_00102c84:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong BN_mod_exp_mont_consttime_x2
                (BIGNUM *param_1,BIGNUM *param_2,BIGNUM *param_3,BIGNUM *param_4,
                BN_MONT_CTX *param_5,BIGNUM *param_6,BIGNUM *param_7,BIGNUM *param_8,BIGNUM *param_9
                ,BN_MONT_CTX *param_10,BN_CTX *param_11)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  BN_MONT_CTX *mont;
  long lVar5;
  ulong uVar6;
  BN_MONT_CTX *mont_00;
  
  iVar1 = ossl_rsaz_avx512ifma_eligible();
  if (iVar1 == 0) {
    iVar1 = ossl_rsaz_avxifma_eligible();
    if (iVar1 != 0) {
      iVar1 = param_2->top;
      if (iVar1 == 0x10) goto LAB_00102dc0;
      goto LAB_00102ced;
    }
LAB_00102d07:
    uVar2 = BN_mod_exp_mont_consttime(param_1,param_2,param_3,param_4,param_11,param_5);
    uVar3 = BN_mod_exp_mont_consttime(param_6,param_7,param_8,param_9,param_11,param_10);
    mont = (BN_MONT_CTX *)0x0;
    mont_00 = (BN_MONT_CTX *)0x0;
    uVar6 = (ulong)(uVar3 & uVar2);
LAB_00102d51:
    if (param_10 == (BN_MONT_CTX *)0x0) goto LAB_00102e60;
  }
  else {
    iVar1 = param_2->top;
    if (iVar1 == 0x10) {
LAB_00102dc0:
      if (param_3->top != 0x10) goto LAB_00102d07;
      iVar1 = BN_num_bits(param_4);
      if ((((iVar1 != 0x400) || (param_7->top != 0x10)) || (param_8->top != 0x10)) ||
         (iVar1 = BN_num_bits(param_9), iVar1 != 0x400)) {
        iVar1 = param_2->top;
        goto LAB_00102ced;
      }
    }
    else {
LAB_00102ced:
      if (iVar1 == 0x18) {
        if (param_3->top != 0x18) goto LAB_00102d07;
        iVar1 = BN_num_bits(param_4);
        if (((iVar1 == 0x600) && (param_7->top == 0x18)) &&
           ((param_8->top == 0x18 && (iVar1 = BN_num_bits(param_9), iVar1 == 0x600))))
        goto LAB_00102ec6;
        iVar1 = param_2->top;
      }
      if (((iVar1 != 0x20) || (param_3->top != 0x20)) ||
         ((iVar1 = BN_num_bits(param_4), iVar1 != 0x800 ||
          (((param_7->top != 0x20 || (param_8->top != 0x20)) ||
           (iVar1 = BN_num_bits(param_9), iVar1 != 0x800)))))) goto LAB_00102d07;
    }
LAB_00102ec6:
    iVar1 = param_2->top;
    iVar4 = BN_num_bits(param_4);
    lVar5 = bn_wexpand(param_1,iVar1);
    if ((lVar5 == 0) || (uVar6 = bn_wexpand(param_6,iVar1), uVar6 == 0)) {
      mont = (BN_MONT_CTX *)0x0;
      mont_00 = (BN_MONT_CTX *)0x0;
      uVar6 = 0;
      goto LAB_00102d51;
    }
    mont_00 = param_5;
    if (param_5 == (BN_MONT_CTX *)0x0) {
      mont_00 = BN_MONT_CTX_new();
      if (mont_00 == (BN_MONT_CTX *)0x0) {
        uVar6 = 0;
      }
      else {
        uVar2 = BN_MONT_CTX_set(mont_00,param_4,param_11);
        uVar6 = (ulong)uVar2;
        if (uVar2 != 0) goto LAB_00102f0c;
      }
      if (param_10 == (BN_MONT_CTX *)0x0) {
        BN_MONT_CTX_free((BN_MONT_CTX *)0x0);
      }
      goto LAB_00102df5;
    }
LAB_00102f0c:
    mont = param_10;
    if (param_10 != (BN_MONT_CTX *)0x0) {
LAB_00102f1a:
      uVar2 = ossl_rsaz_mod_exp_avx512_x2
                        (param_1->d,param_2->d,param_3->d,param_4->d,(mont_00->RR).d,mont_00->n0[0],
                         param_6->d,param_7->d,param_8->d,param_9->d,(mont->RR).d,mont->n0[0],iVar4,
                         uVar6);
      param_1->neg = 0;
      param_1->top = iVar1;
      bn_correct_top(param_1);
      param_6->top = iVar1;
      param_6->neg = 0;
      bn_correct_top(param_6);
      uVar6 = (ulong)uVar2;
      goto LAB_00102d51;
    }
    mont = BN_MONT_CTX_new();
    if (mont == (BN_MONT_CTX *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar2 = BN_MONT_CTX_set(mont,param_9,param_11);
      uVar6 = (ulong)uVar2;
      if (uVar2 != 0) goto LAB_00102f1a;
    }
LAB_00102e60:
    BN_MONT_CTX_free(mont);
  }
  if (param_5 != (BN_MONT_CTX *)0x0) {
    return uVar6;
  }
LAB_00102df5:
  BN_MONT_CTX_free(mont_00);
  return uVar6;
}


