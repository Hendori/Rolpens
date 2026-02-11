
undefined8
MOD_EXP_CTIME_COPY_FROM_PREBUF(long *param_1,int param_2,ulong *param_3,uint param_4,int param_5)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  byte bVar8;
  ulong uVar9;
  ulong *puVar10;
  uint uVar11;
  ulong *puVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  
  iVar15 = 1 << ((byte)param_5 & 0x1f);
  lVar7 = bn_wexpand();
  if (lVar7 == 0) {
    return 0;
  }
  if (param_5 < 4) {
    if (0 < param_2) {
      puVar12 = (ulong *)*param_1;
      puVar1 = puVar12 + param_2;
      uVar9 = *param_3;
      while( true ) {
        uVar9 = param_3[1] & -(ulong)(((param_4 ^ 1) - 1 & (param_4 ^ 0xfffffffe)) >> 0x1f) |
                uVar9 & -(ulong)((param_4 - 1 & ~param_4) >> 0x1f);
        if ((param_5 != 1) &&
           (uVar9 = param_3[3] & -(ulong)(((param_4 ^ 3) - 1 & (param_4 ^ 0xfffffffc)) >> 0x1f) |
                    param_3[2] & -(ulong)(((param_4 ^ 2) - 1 & (param_4 ^ 0xfffffffd)) >> 0x1f) |
                    uVar9, param_5 != 2)) {
          uVar9 = param_3[7] & -(ulong)(((param_4 ^ 7) - 1 & (param_4 ^ 0xfffffff8)) >> 0x1f) |
                  param_3[6] & -(ulong)(((param_4 ^ 6) - 1 & (param_4 ^ 0xfffffff9)) >> 0x1f) |
                  param_3[5] & -(ulong)(((param_4 ^ 5) - 1 & (param_4 ^ 0xfffffffa)) >> 0x1f) |
                  param_3[4] & -(ulong)(((param_4 ^ 4) - 1 & (param_4 ^ 0xfffffffb)) >> 0x1f) |
                  uVar9;
        }
        *puVar12 = uVar9;
        puVar12 = puVar12 + 1;
        param_3 = param_3 + iVar15;
        if (puVar1 == puVar12) break;
        uVar9 = *param_3;
      }
    }
  }
  else {
    bVar8 = (byte)param_5 - 2;
    uVar13 = 1 << (bVar8 & 0x1f);
    uVar6 = (int)param_4 >> (bVar8 & 0x1f);
    if (0 < param_2) {
      puVar12 = (ulong *)*param_1;
      puVar1 = puVar12 + param_2;
      do {
        uVar9 = 0;
        uVar14 = 0;
        puVar10 = param_3;
        do {
          puVar2 = puVar10 + (int)uVar13;
          uVar5 = *puVar10;
          puVar3 = puVar10 + (3 << (bVar8 & 0x1f));
          puVar4 = puVar10 + (2 << (bVar8 & 0x1f));
          puVar10 = puVar10 + 1;
          uVar11 = uVar13 - 1 & param_4 ^ uVar14;
          uVar14 = uVar14 + 1;
          uVar9 = uVar9 | (uVar5 & -(ulong)((~uVar6 & uVar6 - 1) >> 0x1f) |
                           *puVar4 & -(ulong)(((uVar6 ^ 2) - 1 & (uVar6 ^ 0xfffffffd)) >> 0x1f) |
                           *puVar2 & -(ulong)(((uVar6 ^ 1) - 1 & (uVar6 ^ 0xfffffffe)) >> 0x1f) |
                          *puVar3 & -(ulong)(((uVar6 ^ 3) - 1 & (uVar6 ^ 0xfffffffc)) >> 0x1f)) &
                          -(ulong)((~uVar11 & uVar11 - 1) >> 0x1f);
        } while (uVar13 != uVar14);
        param_3 = param_3 + iVar15;
        *puVar12 = uVar9;
        puVar12 = puVar12 + 1;
      } while (puVar12 != puVar1);
    }
  }
  *(int *)(param_1 + 1) = param_2;
  return 1;
}



int BN_mod_exp_recp_part_0
              (BIGNUM *param_1,BIGNUM *param_2,BIGNUM *param_3,BIGNUM *param_4,BN_CTX *param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  BIGNUM *pBVar5;
  BIGNUM *pBVar6;
  BIGNUM *pBVar7;
  int iVar8;
  long lVar9;
  long in_FS_OFFSET;
  bool bVar10;
  int local_198;
  int local_190;
  uint local_18c;
  BN_RECP_CTX local_188;
  BIGNUM *local_148 [33];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = BN_num_bits(param_3);
  if (iVar2 == 0) {
    iVar2 = BN_abs_is_word(param_4,1);
    if (iVar2 == 0) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        iVar2 = BN_set_word(param_1,1);
        return iVar2;
      }
      goto LAB_001007e8;
    }
    iVar2 = 1;
    BN_zero_ex(param_1);
  }
  else {
    BN_RECP_CTX_init(&local_188);
    BN_CTX_start(param_5);
    pBVar5 = BN_CTX_get(param_5);
    pBVar6 = BN_CTX_get(param_5);
    local_148[0] = pBVar6;
    if (pBVar6 == (BIGNUM *)0x0) {
LAB_00100404:
      iVar2 = 0;
    }
    else {
      if (param_4->neg != 0) {
        pBVar7 = BN_copy(pBVar5,param_4);
        if (pBVar7 != (BIGNUM *)0x0) {
          pBVar5->neg = 0;
          iVar3 = BN_RECP_CTX_set(&local_188,pBVar5,param_5);
          if (0 < iVar3) goto LAB_001003e9;
        }
        goto LAB_00100404;
      }
      iVar3 = BN_RECP_CTX_set(&local_188,param_4,param_5);
      if (iVar3 < 1) goto LAB_00100404;
LAB_001003e9:
      iVar3 = BN_nnmod(pBVar6,param_2,param_4,param_5);
      if (iVar3 == 0) goto LAB_00100404;
      iVar3 = BN_is_zero(pBVar6);
      if (iVar3 == 0) {
        if (iVar2 < 0x2a0) {
          if (0xef < iVar2) {
            local_198 = 0x10;
            local_190 = 5;
            goto LAB_00100502;
          }
          if (0x4f < iVar2) {
            local_198 = 8;
            local_190 = 4;
            goto LAB_00100502;
          }
          if (0x17 < iVar2) {
            local_198 = 4;
            local_190 = 3;
            goto LAB_00100502;
          }
          local_190 = 1;
        }
        else {
          local_198 = 0x20;
          local_190 = 6;
LAB_00100502:
          iVar3 = BN_mod_mul_reciprocal(pBVar5,pBVar6,pBVar6,&local_188,param_5);
          if (iVar3 == 0) goto LAB_00100404;
          lVar9 = 1;
          do {
            pBVar6 = BN_CTX_get(param_5);
            local_148[lVar9] = pBVar6;
            if ((pBVar6 == (BIGNUM *)0x0) ||
               (iVar3 = BN_mod_mul_reciprocal
                                  (pBVar6,local_148[lVar9 + -1],pBVar5,&local_188,param_5),
               iVar3 == 0)) goto LAB_00100404;
            lVar9 = lVar9 + 1;
          } while ((int)lVar9 < local_198);
        }
        pBVar5 = param_3;
        if (((param_3 == param_1) &&
            ((pBVar5 = BN_CTX_get(param_5), pBVar5 == (BIGNUM *)0x0 ||
             (pBVar6 = BN_copy(pBVar5,param_3), pBVar6 == (BIGNUM *)0x0)))) ||
           (iVar3 = BN_set_word(param_1,1), iVar3 == 0)) goto LAB_00100404;
        local_18c = 1;
        do {
          iVar2 = iVar2 + -1;
          iVar3 = BN_is_bit_set(pBVar5,iVar2);
          if (iVar3 != 0) {
            if (local_190 == 1) {
              if (local_18c == 0) goto LAB_00100793;
            }
            else {
              if (0 < iVar2) goto LAB_001006c0;
              if (local_18c == 0) {
                local_18c = 1;
                iVar3 = 0;
                goto LAB_00100795;
              }
            }
            iVar3 = 0;
LAB_00100723:
            iVar8 = BN_mod_mul_reciprocal
                              (param_1,param_1,local_148[(int)local_18c >> 1],&local_188,param_5);
            if (iVar8 == 0) goto LAB_00100404;
            iVar2 = iVar2 - (iVar3 + 1);
            if (iVar2 < 0) break;
            iVar3 = BN_is_bit_set(pBVar5,iVar2);
            if (iVar3 != 0) {
              if ((local_190 != 1) && (iVar2 != 0)) goto code_r0x0010077f;
LAB_00100793:
              local_18c = 1;
              iVar3 = 0;
              goto LAB_00100795;
            }
            goto LAB_00100681;
          }
          if (local_18c == 0) {
LAB_00100681:
            iVar3 = BN_mod_mul_reciprocal(param_1,param_1,param_1,&local_188,param_5);
            if (iVar3 == 0) goto LAB_00100404;
            local_18c = 0;
          }
        } while (iVar2 != 0);
      }
      else {
        BN_zero_ex(param_1);
      }
      iVar2 = 1;
    }
    BN_CTX_end(param_5);
    BN_RECP_CTX_free(&local_188);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
LAB_001007e8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x0010077f:
  local_18c = 0;
LAB_001006c0:
  uVar1 = 1;
  iVar3 = 0;
  iVar8 = 1;
  do {
    iVar4 = BN_is_bit_set(pBVar5,iVar2 - iVar8);
    if (iVar4 != 0) {
      uVar1 = uVar1 << ((char)iVar8 - (char)iVar3 & 0x1fU) | 1;
      iVar3 = iVar8;
    }
    iVar8 = iVar8 + 1;
  } while ((iVar8 != local_190) && (iVar8 != iVar2 + 1));
  bVar10 = local_18c == 0;
  local_18c = uVar1;
  if (bVar10) {
LAB_00100795:
    iVar8 = 0;
    do {
      iVar4 = BN_mod_mul_reciprocal(param_1,param_1,param_1,&local_188,param_5);
      if (iVar4 == 0) goto LAB_00100404;
      iVar8 = iVar8 + 1;
    } while (iVar8 != iVar3 + 1);
  }
  goto LAB_00100723;
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
      if (iVar2 == 0) goto LAB_00100970;
    }
    else {
      pBVar5 = BN_copy(local_48,a);
      if (pBVar5 == (BIGNUM *)0x0) goto LAB_00100970;
    }
    iVar2 = 1;
    if (1 < iVar1) {
      do {
        iVar3 = BN_sqr(pBVar4,pBVar4,ctx);
        if ((iVar3 == 0) ||
           ((iVar3 = BN_is_bit_set(p,iVar2), iVar3 != 0 &&
            (iVar3 = BN_mul(local_48,local_48,pBVar4,ctx), iVar3 == 0)))) goto LAB_00100970;
        iVar2 = iVar2 + 1;
      } while (iVar1 != iVar2);
    }
    uVar6 = 1;
    if (local_48 != r) {
      pBVar4 = BN_copy(r,local_48);
      uVar6 = (uint)(pBVar4 != (BIGNUM *)0x0);
    }
  }
LAB_00100970:
  BN_CTX_end(ctx);
  return uVar6;
}



int BN_mod_exp_recp(BIGNUM *r,BIGNUM *a,BIGNUM *p,BIGNUM *m,BN_CTX *ctx)

{
  int iVar1;
  
  iVar1 = BN_get_flags(p,4);
  if (iVar1 == 0) {
    iVar1 = BN_get_flags(a,4);
    if (iVar1 == 0) {
      iVar1 = BN_get_flags(m,4);
      if (iVar1 == 0) {
        iVar1 = BN_mod_exp_recp_part_0(r,a,p,m,ctx);
        return iVar1;
      }
    }
  }
  ERR_new();
  ERR_set_debug("crypto/bn/bn_exp.c",0xb7,"BN_mod_exp_recp");
  ERR_set_error(3,0xc0101,0);
  return 0;
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
  uint *puVar1;
  uint *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  BIGNUM *pBVar12;
  BIGNUM *a_00;
  BIGNUM *r_00;
  BIGNUM *pBVar13;
  ulong uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  long lVar18;
  long in_FS_OFFSET;
  bool bVar19;
  BN_MONT_CTX *local_190;
  uint local_184;
  int local_160;
  BIGNUM *local_150 [34];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar8 = BN_is_odd(m);
  if (iVar8 == 0) {
    ERR_new();
    ERR_set_debug("crypto/bn/bn_exp.c",0x148,"BN_mod_exp_mont");
    ERR_set_error(3,0x66,0);
    uVar16 = 0;
  }
  else {
    if ((m->top < 0x100000) &&
       (((iVar8 = BN_get_flags(p,4), iVar8 != 0 || (iVar8 = BN_get_flags(a,4), iVar8 != 0)) ||
        (iVar8 = BN_get_flags(m,4), iVar8 != 0)))) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        iVar8 = BN_mod_exp_mont_consttime(r,a,p,m,ctx,m_ctx);
        return iVar8;
      }
      goto LAB_0010128b;
    }
    iVar8 = BN_num_bits(p);
    if (iVar8 == 0) {
      iVar8 = BN_abs_is_word(m,1);
      if (iVar8 == 0) {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          iVar8 = BN_set_word(r,1);
          return iVar8;
        }
        goto LAB_0010128b;
      }
      BN_zero_ex(r);
      uVar16 = 1;
      goto LAB_00100d46;
    }
    BN_CTX_start(ctx);
    pBVar12 = BN_CTX_get(ctx);
    a_00 = BN_CTX_get(ctx);
    r_00 = BN_CTX_get(ctx);
    local_150[1] = r_00;
    if (r_00 == (BIGNUM *)0x0) {
      uVar16 = 0;
      local_190 = (BN_MONT_CTX *)0x0;
LAB_00100e22:
      if (m_ctx == (BN_MONT_CTX *)0x0) goto LAB_00100e45;
    }
    else {
      local_190 = m_ctx;
      if (m_ctx != (BN_MONT_CTX *)0x0) {
LAB_00100b75:
        if ((((a->neg == 0) && (iVar9 = BN_ucmp(a,m), iVar9 < 0)) ||
            (iVar9 = BN_nnmod(r_00,a,m,ctx), a = r_00, iVar9 != 0)) &&
           (iVar9 = bn_to_mont_fixed_top(r_00,a,local_190), iVar9 != 0)) {
          if (iVar8 < 0x2a0) {
            if (0xef < iVar8) {
              local_160 = 0x10;
              iVar9 = 5;
              goto LAB_00100bf7;
            }
            if (0x4f < iVar8) {
              local_160 = 8;
              iVar9 = 4;
              goto LAB_00100bf7;
            }
            if (0x17 < iVar8) {
              local_160 = 4;
              iVar9 = 3;
              goto LAB_00100bf7;
            }
            iVar9 = 1;
          }
          else {
            local_160 = 0x20;
            iVar9 = 6;
LAB_00100bf7:
            iVar10 = bn_mul_mont_fixed_top(pBVar12,r_00,r_00,local_190,ctx);
            if (iVar10 == 0) goto LAB_00100c8d;
            lVar18 = 1;
            local_150[0] = m;
            do {
              pBVar13 = BN_CTX_get(ctx);
              local_150[lVar18 + 1] = pBVar13;
              if ((pBVar13 == (BIGNUM *)0x0) ||
                 (iVar10 = bn_mul_mont_fixed_top(pBVar13,local_150[lVar18],pBVar12,local_190,ctx),
                 iVar10 == 0)) goto LAB_00100c8d;
              lVar18 = lVar18 + 1;
              m = local_150[0];
            } while ((int)lVar18 < local_160);
          }
          uVar16 = m->top;
          if ((long)m->d[(long)(int)uVar16 + -1] < 0) {
            lVar18 = bn_wexpand(a_00,uVar16);
            if (lVar18 != 0) {
              puVar3 = m->d;
              puVar4 = a_00->d;
              *puVar4 = -*puVar3;
              if (1 < (int)uVar16) {
                if ((uVar16 - 2 < 3) || (puVar3 + 2 == puVar4 + 1)) {
                  uVar14 = 1;
                  do {
                    puVar4[uVar14] = ~puVar3[uVar14];
                    uVar14 = uVar14 + 1;
                  } while (uVar14 != uVar16);
                }
                else {
                  uVar17 = uVar16 - 1;
                  lVar18 = 8;
                  do {
                    puVar1 = (uint *)((long)puVar3 + lVar18);
                    uVar5 = puVar1[1];
                    uVar6 = puVar1[2];
                    uVar7 = puVar1[3];
                    puVar2 = (uint *)((long)puVar4 + lVar18);
                    *puVar2 = *puVar1 ^ 0xffffffff;
                    puVar2[1] = uVar5 ^ 0xffffffff;
                    puVar2[2] = uVar6 ^ 0xffffffff;
                    puVar2[3] = uVar7 ^ 0xffffffff;
                    lVar18 = lVar18 + 0x10;
                  } while (lVar18 != (ulong)(uVar17 >> 1) * 0x10 + 8);
                  if ((uVar17 & 1) != 0) {
                    puVar4[(int)(uVar17 | 1)] = ~puVar3[(int)(uVar17 | 1)];
                  }
                }
              }
              a_00->top = uVar16;
              goto LAB_00100f2f;
            }
          }
          else {
            pBVar12 = BN_value_one();
            iVar10 = bn_to_mont_fixed_top(a_00,pBVar12,local_190);
            if (iVar10 != 0) {
LAB_00100f2f:
              local_184 = 1;
              do {
                iVar8 = iVar8 + -1;
                iVar10 = BN_is_bit_set(p,iVar8);
                if (iVar10 != 0) {
                  if (iVar9 == 1) {
                    if (local_184 != 0) {
                      iVar10 = 0;
                      goto LAB_00101101;
                    }
                    local_184 = 1;
                    iVar10 = 0;
                  }
                  else {
                    if (0 < iVar8) goto LAB_001010a2;
                    if (local_184 != 0) {
                      iVar8 = bn_mul_mont_fixed_top(a_00,a_00,r_00,local_190,ctx);
                      if (iVar8 == 0) goto LAB_00100c8d;
                      break;
                    }
                    iVar10 = 0;
                    local_184 = 1;
                  }
                  do {
                    iVar15 = 0;
                    local_150[0] = p;
                    do {
                      iVar11 = bn_mul_mont_fixed_top(a_00,a_00,a_00,local_190,ctx);
                      if (iVar11 == 0) goto LAB_00100c8d;
                      iVar15 = iVar15 + 1;
                      p = local_150[0];
                    } while (iVar15 != iVar10 + 1);
LAB_00101101:
                    do {
                      iVar15 = bn_mul_mont_fixed_top
                                         (a_00,a_00,local_150[(long)((int)local_184 >> 1) + 1],
                                          local_190,ctx);
                      if (iVar15 == 0) goto LAB_00100c8d;
                      iVar8 = iVar8 - (iVar10 + 1);
                      if (iVar8 < 0) goto LAB_00100f86;
                      iVar10 = BN_is_bit_set(p,iVar8);
                      if (iVar10 == 0) goto LAB_00101046;
                      iVar10 = 0;
                      local_184 = 1;
                      if ((iVar9 == 1) || (iVar8 == 0)) break;
                      local_184 = 0;
LAB_001010a2:
                      iVar10 = 0;
                      iVar15 = 1;
                      uVar16 = 1;
                      do {
                        iVar11 = BN_is_bit_set(p,iVar8 - iVar15);
                        if (iVar11 != 0) {
                          uVar16 = uVar16 << ((char)iVar15 - (char)iVar10 & 0x1fU) | 1;
                          iVar10 = iVar15;
                        }
                        iVar15 = iVar15 + 1;
                      } while ((iVar9 != iVar15) && (iVar8 + 1 != iVar15));
                      bVar19 = local_184 != 0;
                      local_184 = uVar16;
                    } while (bVar19);
                  } while( true );
                }
                if (local_184 == 0) {
LAB_00101046:
                  iVar10 = bn_mul_mont_fixed_top(a_00,a_00,a_00,local_190,ctx);
                  if (iVar10 == 0) goto LAB_00100c8d;
                  local_184 = 0;
                }
              } while (iVar8 != 0);
LAB_00100f86:
              iVar8 = BN_from_montgomery(r,a_00,local_190,ctx);
              uVar16 = (uint)(iVar8 != 0);
              goto LAB_00100e22;
            }
          }
        }
LAB_00100c8d:
        uVar16 = 0;
        goto LAB_00100e22;
      }
      local_190 = BN_MONT_CTX_new();
      if (local_190 == (BN_MONT_CTX *)0x0) {
        local_190 = (BN_MONT_CTX *)0x0;
        uVar16 = 0;
      }
      else {
        iVar9 = BN_MONT_CTX_set(local_190,m,ctx);
        if (iVar9 != 0) goto LAB_00100b75;
        uVar16 = 0;
      }
LAB_00100e45:
      BN_MONT_CTX_free(local_190);
    }
    BN_CTX_end(ctx);
  }
LAB_00100d46:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar16;
  }
LAB_0010128b:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x00101657) */
/* WARNING: Removing unreachable block (ram,0x00101644) */
/* WARNING: Removing unreachable block (ram,0x0010166a) */

int bn_mod_exp_mont_fixed_top
              (BIGNUM *param_1,BIGNUM *param_2,BIGNUM *param_3,BIGNUM *param_4,BN_CTX *param_5,
              BN_MONT_CTX *param_6)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  ulong *puVar4;
  ulong *puVar5;
  uint uVar6;
  BN_MONT_CTX *pBVar7;
  BN_CTX *pBVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  BIGNUM *pBVar13;
  ulong uVar14;
  long **pplVar15;
  undefined8 uVar16;
  long *plVar17;
  long *plVar18;
  uint uVar19;
  uint uVar20;
  undefined8 extraout_RDX;
  long *plVar21;
  long ***ppplVar22;
  long ***ppplVar23;
  long ***ppplVar25;
  long ***ppplVar26;
  uint uVar27;
  long **pplVar28;
  ulong *puVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long in_FS_OFFSET;
  byte bVar33;
  long **local_e8;
  uint local_dc;
  char *local_d8;
  void *local_d0;
  ulong local_c8;
  long **local_c0;
  long **local_b8;
  BN_MONT_CTX *local_b0;
  BIGNUM *local_a8;
  long *local_a0;
  ulong *local_98;
  BN_MONT_CTX *local_90;
  BIGNUM *local_88;
  BN_CTX *local_80;
  long *local_78;
  uint local_70;
  uint local_6c;
  undefined8 local_68;
  long *local_58;
  uint local_50;
  uint local_4c;
  undefined8 local_48;
  long local_40;
  long ***ppplVar24;
  
  bVar33 = 0;
  ppplVar23 = &local_e8;
  ppplVar24 = &local_e8;
  ppplVar25 = &local_e8;
  ppplVar22 = &local_e8;
  ppplVar26 = &local_e8;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_a8 = param_1;
  local_90 = param_6;
  local_88 = param_3;
  local_80 = param_5;
  iVar9 = BN_is_odd(param_4);
  if (iVar9 == 0) {
    iVar9 = 0;
    ERR_new();
    ERR_set_debug("crypto/bn/bn_exp.c",0x273,"bn_mod_exp_mont_fixed_top");
    ERR_set_error(3,0x66,0);
    goto LAB_00101462;
  }
  uVar3 = param_4->top;
  if (0xfffff < (int)uVar3) {
    iVar9 = BN_mod_exp_mont(local_a8,param_2,local_88,param_4,local_80,local_90);
    ppplVar22 = &local_e8;
    goto LAB_00101462;
  }
  iVar9 = local_88->top;
  if (iVar9 == 0) {
    iVar9 = BN_abs_is_word(param_4,1);
    if (iVar9 == 0) {
      iVar9 = BN_set_word(local_a8,1);
      ppplVar22 = &local_e8;
    }
    else {
      iVar9 = 1;
      BN_zero_ex(local_a8);
      ppplVar22 = &local_e8;
    }
    goto LAB_00101462;
  }
  BN_CTX_start(local_80);
  local_b0 = local_90;
  if (local_90 == (BN_MONT_CTX *)0x0) {
    local_b0 = BN_MONT_CTX_new();
    if (local_b0 == (BN_MONT_CTX *)0x0) {
      iVar9 = 0;
      BN_MONT_CTX_free((BN_MONT_CTX *)0x0);
    }
    else {
      iVar10 = BN_MONT_CTX_set(local_b0,param_4,local_80);
      if (iVar10 != 0) goto LAB_00101345;
LAB_001016bc:
      iVar9 = 0;
      BN_MONT_CTX_free(local_b0);
      ppplVar26 = &local_e8;
    }
  }
  else {
LAB_00101345:
    if (((param_2->neg == 0) && (iVar10 = BN_ucmp(param_2,param_4), iVar10 < 0)) ||
       ((pBVar13 = BN_CTX_get(local_80), pBVar13 != (BIGNUM *)0x0 &&
        (iVar10 = BN_nnmod(pBVar13,param_2,param_4,local_80), param_2 = pBVar13, iVar10 != 0)))) {
      iVar10 = param_2->top;
      if (iVar10 == 0x10) {
        if (local_88->top == 0x10) {
          iVar10 = BN_num_bits(param_4);
          if ((iVar10 != 0x400) || (iVar10 = rsaz_avx2_eligible(), pBVar13 = local_a8, iVar10 == 0))
          {
            iVar10 = param_2->top;
            goto LAB_0010138d;
          }
          lVar31 = bn_wexpand(local_a8,0x10);
          if (lVar31 == 0) goto LAB_001014f8;
          RSAZ_1024_mod_exp_avx2
                    (pBVar13->d,param_2->d,local_88->d,param_4->d,(local_b0->RR).d,local_b0->n0[0]);
          pBVar13->top = 0x10;
LAB_0010173e:
          pBVar13->neg = 0;
          bn_correct_top(pBVar13);
          if (local_90 == (BN_MONT_CTX *)0x0) {
            BN_MONT_CTX_free(local_b0);
          }
          iVar9 = 1;
          ppplVar26 = &local_e8;
          goto LAB_001020e0;
        }
      }
      else {
LAB_0010138d:
        if (((iVar10 == 8) && (local_88->top == 8)) &&
           (iVar10 = BN_num_bits(param_4), iVar10 == 0x200)) {
          lVar31 = bn_wexpand(local_a8,8);
          pBVar13 = local_a8;
          if (lVar31 != 0) {
            RSAZ_512_mod_exp(local_a8->d,param_2->d,local_88->d,param_4->d,local_b0->n0[0],
                             (local_b0->RR).d);
            pBVar13->top = 8;
            goto LAB_0010173e;
          }
          goto LAB_001014f8;
        }
      }
      local_dc = iVar9 * 0x40;
      if ((int)local_dc < 0x3aa) {
        if (0x132 < (int)local_dc) {
          local_98 = (ulong *)CONCAT44(local_98._4_4_,0x20);
          lVar31 = 0x20;
          local_b8 = (long **)CONCAT44(local_b8._4_4_,5);
          goto LAB_0010155a;
        }
        if ((int)local_dc < 0x5a) {
          lVar31 = 2;
          if (0x16 < (int)local_dc) {
            lVar31 = 8;
          }
          uVar11 = 8;
          if ((int)local_dc < 0x17) {
            uVar11 = 2;
          }
          iVar9 = 0;
          local_98 = (ulong *)CONCAT44(local_98._4_4_,uVar11);
          local_b8 = (long **)CONCAT44(local_b8._4_4_,
                                       (0x16 < (int)local_dc) + 1 + (uint)(0x16 < (int)local_dc));
        }
        else {
          local_98 = (ulong *)CONCAT44(local_98._4_4_,0x10);
          lVar31 = 0x10;
          iVar9 = 0;
          local_b8 = (long **)CONCAT44(local_b8._4_4_,4);
        }
LAB_00101587:
        iVar10 = uVar3 * 2;
        if ((int)(uVar3 * 2) < (int)(uint)local_98) {
          iVar10 = (uint)local_98;
        }
        iVar9 = iVar9 + (iVar10 + (uVar3 << (sbyte)local_b8)) * 8;
        iVar10 = iVar9 + 0x40;
        if (0xbff < iVar9) goto LAB_0010177f;
        ppplVar26 = &local_e8;
        while (ppplVar24 !=
               (long ***)((long)&local_e8 - ((long)iVar10 + 0x17U & 0xfffffffffffff000))) {
          ppplVar23 = (long ***)((long)ppplVar26 + -0x1000);
          *(undefined8 *)((long)ppplVar26 + -8) = *(undefined8 *)((long)ppplVar26 + -8);
          ppplVar24 = (long ***)((long)ppplVar26 + -0x1000);
          ppplVar26 = (long ***)((long)ppplVar26 + -0x1000);
        }
        uVar14 = (ulong)((uint)((long)iVar10 + 0x17U) & 0xff0);
        lVar30 = -uVar14;
        ppplVar25 = (long ***)((long)ppplVar23 + lVar30);
        if (uVar14 != 0) {
          *(undefined8 *)((long)ppplVar23 + -8) = *(undefined8 *)((long)ppplVar23 + -8);
        }
        local_c8 = (ulong)iVar9;
        local_a0 = (long *)((((ulong)((long)ppplVar23 + lVar30 + 0xf) & 0xfffffffffffffff0) -
                            (ulong)((uint)(undefined1 *)((long)ppplVar23 + lVar30 + 0xf) & 0x30)) +
                           0x40);
        if (7 < local_c8) {
          plVar17 = local_a0;
          for (uVar14 = local_c8 >> 3; uVar14 != 0; uVar14 = uVar14 - 1) {
            *plVar17 = 0;
            plVar17 = plVar17 + (ulong)bVar33 * -2 + 1;
          }
        }
        local_d0 = (void *)0x0;
        local_d8 = "crypto/bn/bn_exp.c";
      }
      else {
        local_98 = (ulong *)CONCAT44(local_98._4_4_,0x40);
        lVar31 = 0x40;
        local_b8 = (long **)CONCAT44(local_b8._4_4_,6);
LAB_0010155a:
        if ((int)uVar3 < 0x201) {
          local_98 = (ulong *)CONCAT44(local_98._4_4_,0x20);
          iVar9 = uVar3 * 8;
          lVar31 = 0x20;
          local_b8 = (long **)CONCAT44(local_b8._4_4_,5);
          goto LAB_00101587;
        }
        iVar9 = ((uVar3 << (sbyte)local_b8) + uVar3 * 2) * 8;
        iVar10 = iVar9 + 0x40;
LAB_0010177f:
        local_d8 = "crypto/bn/bn_exp.c";
        local_d0 = CRYPTO_malloc(iVar10,"crypto/bn/bn_exp.c",0x2e5);
        if (local_d0 == (void *)0x0) goto LAB_001014f8;
        local_a0 = (long *)(((ulong)local_d0 & 0xffffffffffffffc0) + 0x40);
        local_c8 = (ulong)iVar9;
        memset(local_a0,0,local_c8);
      }
      lVar30 = (long)(int)uVar3;
      puVar4 = param_4->d;
      local_50 = 0;
      local_c0 = (long **)(lVar30 * 8);
      local_70 = 0;
      local_78 = local_a0 + lVar31 * lVar30;
      local_58 = local_78 + lVar30;
      local_48 = 0x200000000;
      local_68 = 0x200000000;
      local_6c = uVar3;
      local_4c = uVar3;
      if ((long)(puVar4 + -1)[lVar30] < 0) {
        *local_78 = -*puVar4;
        local_70 = uVar3;
        if (1 < (int)uVar3) {
          if ((uVar3 - 2 < 3) || ((ulong *)(local_a0 + lVar31 * lVar30 + 1) == puVar4 + 2)) {
            uVar14 = 1;
            do {
              local_78[uVar14] = ~puVar4[uVar14];
              uVar14 = uVar14 + 1;
            } while (uVar3 != uVar14);
          }
          else {
            uVar27 = uVar3 - 1;
            lVar32 = 0;
            do {
              puVar2 = (uint *)((long)puVar4 + lVar32 + 8);
              uVar19 = puVar2[1];
              uVar20 = puVar2[2];
              uVar6 = puVar2[3];
              puVar1 = (uint *)((long)(local_a0 + lVar31 * lVar30 + 1) + lVar32);
              *puVar1 = *puVar2 ^ 0xffffffff;
              puVar1[1] = uVar19 ^ 0xffffffff;
              puVar1[2] = uVar20 ^ 0xffffffff;
              puVar1[3] = uVar6 ^ 0xffffffff;
              lVar32 = lVar32 + 0x10;
            } while (lVar32 != (ulong)(uVar27 >> 1) << 4);
            if ((uVar27 & 1) != 0) {
              local_78[(int)(uVar27 | 1)] = ~puVar4[(int)(uVar27 | 1)];
            }
          }
        }
LAB_0010188b:
        pBVar7 = local_b0;
        *(undefined8 *)((long)ppplVar25 + -8) = 0x1018b6;
        local_e8 = local_c0;
        local_c0 = &local_58;
        iVar9 = bn_to_mont_fixed_top(&local_58,param_2,local_b0,local_80);
        plVar17 = local_58;
        if (iVar9 == 0) goto LAB_001020a5;
        if ((0x1fe < uVar3 - 2) || ((int)local_b8 != 5)) {
          uVar27 = local_70;
          if ((int)uVar3 <= (int)local_70) {
            uVar27 = uVar3;
          }
          if (0 < (int)uVar27) {
            plVar17 = local_78;
            plVar18 = local_a0;
            do {
              lVar31 = *plVar17;
              plVar17 = plVar17 + 1;
              *plVar18 = lVar31;
              plVar18 = plVar18 + (int)(uint)local_98;
            } while (local_78 + (int)uVar27 != plVar17);
          }
          uVar27 = local_50;
          if ((int)uVar3 <= (int)local_50) {
            uVar27 = uVar3;
          }
          if (0 < (int)uVar27) {
            plVar17 = local_a0 + 1;
            plVar18 = local_58;
            do {
              lVar31 = *plVar18;
              plVar18 = plVar18 + 1;
              *plVar17 = lVar31;
              plVar17 = plVar17 + (int)(uint)local_98;
            } while (local_58 + (int)uVar27 != plVar18);
          }
          if ((int)local_b8 != 1) {
            *(undefined8 *)((long)ppplVar25 + -8) = 0x101e58;
            iVar9 = bn_mul_mont_fixed_top(&local_78,local_c0,local_c0,local_b0,local_80);
            if (iVar9 == 0) goto LAB_001020a5;
            uVar27 = local_70;
            if ((int)uVar3 <= (int)local_70) {
              uVar27 = uVar3;
            }
            if (0 < (int)uVar27) {
              plVar17 = local_a0 + 2;
              plVar18 = local_78;
              do {
                lVar31 = *plVar18;
                plVar18 = plVar18 + 1;
                *plVar17 = lVar31;
                plVar17 = plVar17 + (int)(uint)local_98;
              } while (local_78 + (int)uVar27 != plVar18);
            }
            lVar31 = (long)(int)(uint)local_98;
            plVar17 = local_a0 + 3;
            iVar9 = 3;
            do {
              *(undefined8 *)((long)ppplVar25 + -8) = 0x101eed;
              iVar10 = bn_mul_mont_fixed_top(&local_78,local_c0,&local_78,local_b0,local_80);
              if (iVar10 == 0) goto LAB_00102055;
              uVar27 = local_70;
              if ((int)uVar3 <= (int)local_70) {
                uVar27 = uVar3;
              }
              if (0 < (int)uVar27) {
                plVar18 = local_78;
                plVar21 = plVar17;
                do {
                  lVar30 = *plVar18;
                  plVar18 = plVar18 + 1;
                  *plVar21 = lVar30;
                  plVar21 = plVar21 + lVar31;
                } while (local_78 + (int)uVar27 != plVar18);
              }
              iVar9 = iVar9 + 1;
              plVar17 = plVar17 + 1;
            } while (iVar9 < (int)(uint)local_98);
          }
          uVar19 = 0;
          iVar9 = (int)(local_dc - 1) % (int)local_b8 + 1;
          uVar27 = local_dc - iVar9;
          if (-0x40 < (int)uVar27) {
            uVar20 = uVar27 + 0x3f;
            if (-1 < (int)uVar27) {
              uVar20 = uVar27;
            }
            uVar19 = 0;
            iVar10 = (int)uVar20 >> 6;
            if (iVar10 < local_88->top) {
              uVar14 = local_88->d[iVar10];
              uVar19 = (1 << ((byte)iVar9 & 0x1f)) - 1;
              if (((uVar27 & 0x3f) == 0) ||
                 (uVar14 = uVar14 >> (sbyte)(uVar27 & 0x3f), local_88->top <= iVar10 + 1)) {
                uVar19 = uVar19 & (uint)uVar14;
              }
              else {
                bVar33 = (byte)((int)uVar27 >> 0x1f);
                uVar19 = uVar19 & ((uint)(local_88->d[(long)iVar10 + 1] <<
                                         (((bVar33 >> 2) - ((char)uVar27 + (bVar33 >> 2) & 0x3f)) +
                                          0x40 & 0x3f)) | (uint)uVar14);
              }
            }
          }
          *(undefined8 *)((long)ppplVar25 + -8) = 0x101fe2;
          iVar9 = MOD_EXP_CTIME_COPY_FROM_PREBUF
                            (&local_78,uVar3,local_a0,uVar19,(ulong)local_b8 & 0xffffffff);
          pBVar8 = local_80;
          pBVar7 = local_b0;
          pplVar28 = local_b8;
          if (iVar9 == 0) goto LAB_001020a5;
          iVar9 = (int)local_b8;
          local_e8 = (long **)CONCAT44(local_e8._4_4_,(uint)local_98 + -1);
          local_dc = uVar3;
          do {
            uVar3 = local_70;
            if ((int)uVar27 < 1) goto LAB_00101d5a;
            local_98 = (ulong *)CONCAT44(local_98._4_4_,uVar27);
            iVar10 = 0;
            do {
              *(undefined8 *)((long)ppplVar25 + -8) = 0x102051;
              iVar12 = bn_mul_mont_fixed_top(&local_78,&local_78,&local_78,pBVar7,pBVar8);
              pplVar15 = local_c0;
              if (iVar12 == 0) goto LAB_00102055;
              iVar10 = iVar10 + 1;
            } while (iVar10 != iVar9);
            uVar27 = (uint)local_98 - iVar9;
            uVar3 = uVar27 + 0x3f;
            if (-1 < (int)uVar27) {
              uVar3 = uVar27;
            }
            uVar19 = 0;
            iVar10 = (int)uVar3 >> 6;
            if (iVar10 < local_88->top) {
              uVar14 = local_88->d[iVar10];
              if (((uVar27 & 0x3f) == 0) ||
                 (uVar14 = uVar14 >> (sbyte)(uVar27 & 0x3f), local_88->top <= iVar10 + 1)) {
                uVar19 = (uint)local_e8 & (uint)uVar14;
              }
              else {
                bVar33 = (byte)((int)uVar27 >> 0x1f);
                uVar19 = ((uint)(local_88->d[(long)iVar10 + 1] <<
                                (((bVar33 >> 2) - ((char)uVar27 + (bVar33 >> 2) & 0x3f)) + 0x40 &
                                0x3f)) | (uint)uVar14) & (uint)local_e8;
              }
            }
            local_98 = (ulong *)CONCAT44(local_98._4_4_,uVar27);
            *(undefined8 *)((long)ppplVar25 + -8) = 0x102266;
            iVar10 = MOD_EXP_CTIME_COPY_FROM_PREBUF
                               (local_c0,local_dc,local_a0,uVar19,(ulong)pplVar28 & 0xffffffff);
            if (iVar10 == 0) break;
            *(undefined8 *)((long)ppplVar25 + -8) = 0x102282;
            iVar10 = bn_mul_mont_fixed_top(&local_78,&local_78,pplVar15,pBVar7,pBVar8);
            uVar27 = (uint)local_98;
          } while (iVar10 != 0);
LAB_00102055:
          if (local_90 != (BN_MONT_CTX *)0x0) {
            iVar9 = 0;
            goto LAB_001020b5;
          }
          goto LAB_001021c0;
        }
        local_98 = pBVar7->n0;
        pplVar28 = local_e8;
        if ((int)local_50 < (int)uVar3) {
          local_b8 = local_e8;
          *(undefined8 *)((long)ppplVar25 + -8) = 0x10191a;
          memset(local_58 + (int)local_50,0,(ulong)((uVar3 - local_50) - 1) * 8 + 8);
          pplVar28 = local_b8;
        }
        plVar18 = local_78;
        if ((int)local_70 < (int)uVar3) {
          *(undefined8 *)((long)ppplVar25 + -8) = 0x10194e;
          local_b8 = pplVar28;
          memset(local_78 + (int)local_70,0,(ulong)((uVar3 - local_70) - 1) * 8 + 8);
          pplVar28 = local_b8;
        }
        plVar21 = local_a0;
        puVar29 = (ulong *)((long)plVar17 + (long)pplVar28);
        puVar4 = (local_b0->N).d;
        if ((uVar3 - 1 < 3) || (puVar29 == puVar4 + 1)) {
          pplVar15 = (long **)0x0;
          do {
            *(undefined8 *)((long)puVar29 + (long)pplVar15) =
                 *(undefined8 *)((long)puVar4 + (long)pplVar15);
            pplVar15 = pplVar15 + 1;
          } while (pplVar28 != pplVar15);
        }
        else {
          lVar31 = 0;
          do {
            uVar16 = ((undefined8 *)((long)puVar4 + lVar31))[1];
            *(undefined8 *)((long)puVar29 + lVar31) = *(undefined8 *)((long)puVar4 + lVar31);
            ((undefined8 *)((long)puVar29 + lVar31))[1] = uVar16;
            lVar31 = lVar31 + 0x10;
          } while ((ulong)(uVar3 >> 1) << 4 != lVar31);
          if ((uVar3 & 1) != 0) {
            puVar29[uVar3 & 0xfffffffe] = puVar4[uVar3 & 0xfffffffe];
          }
        }
        iVar9 = 4;
        *(undefined8 *)((long)ppplVar25 + -8) = 0x1019b5;
        bn_scatter5(plVar18,lVar30,local_a0,0);
        *(undefined8 *)((long)ppplVar25 + -8) = 0x1019ca;
        bn_scatter5(local_58,(long)(int)local_50,plVar21,1);
        *(undefined8 *)((long)ppplVar25 + -8) = 0x1019e7;
        bn_mul_mont(local_78,local_58,local_58,puVar29,local_98,uVar3);
        iVar10 = 3;
        *(undefined8 *)((long)ppplVar25 + -8) = 0x101a01;
        bn_scatter5(local_78,lVar30,plVar21,2);
        do {
          *(undefined8 *)((long)ppplVar25 + -8) = 0x101a1d;
          bn_mul_mont(local_78,local_78,local_78,puVar29,local_98,uVar3);
          lVar31 = (long)iVar9;
          iVar9 = iVar9 * 2;
          *(undefined8 *)((long)ppplVar25 + -8) = 0x101a36;
          bn_scatter5(local_78,lVar30,local_a0,lVar31);
          plVar17 = local_a0;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
        local_b8 = (long **)0x3;
        do {
          pplVar28 = local_b8;
          iVar9 = (int)local_b8;
          *(ulong *)((long)ppplVar25 + -0x10) = (ulong)(iVar9 - 1);
          *(undefined8 *)((long)ppplVar25 + -0x18) = 0x101a7f;
          bn_mul_mont_gather5(local_78,local_58,plVar17,puVar29,local_98,uVar3);
          iVar9 = iVar9 * 2;
          *(undefined8 *)((long)ppplVar25 + -0x18) = 0x101a95;
          bn_scatter5(local_78,lVar30,plVar17,pplVar28);
          do {
            *(undefined8 *)((long)ppplVar25 + -8) = 0x101abc;
            bn_mul_mont(local_78,local_78,local_78,puVar29,local_98,uVar3);
            lVar31 = (long)iVar9;
            iVar9 = iVar9 * 2;
            *(undefined8 *)((long)ppplVar25 + -8) = 0x101ad1;
            bn_scatter5(local_78,lVar30,plVar17,lVar31);
          } while (iVar9 < 0x20);
          local_b8 = (long **)((long)local_b8 + 2);
        } while (local_b8 != (long **)0x9);
        lVar31 = 9;
        local_b8 = (long **)0x9;
        do {
          *(ulong *)((long)ppplVar25 + -0x10) = (ulong)((int)lVar31 - 1);
          *(undefined8 *)((long)ppplVar25 + -0x18) = 0x101b26;
          bn_mul_mont_gather5(local_78,local_58,plVar17,puVar29,local_98,uVar3);
          *(undefined8 *)((long)ppplVar25 + -0x18) = 0x101b38;
          bn_scatter5(local_78,lVar30,plVar17,lVar31);
          *(undefined8 *)((long)ppplVar25 + -0x18) = 0x101b54;
          bn_mul_mont(local_78,local_78,local_78,puVar29,local_98,uVar3);
          lVar32 = lVar31 * 2;
          lVar31 = lVar31 + 2;
          *(undefined8 *)((long)ppplVar25 + -0x18) = 0x101b6b;
          bn_scatter5(local_78,lVar30,plVar17,lVar32);
        } while (lVar31 != 0x11);
        do {
          *(ulong *)((long)ppplVar25 + -0x10) = (ulong)((int)lVar31 - 1);
          *(undefined8 *)((long)ppplVar25 + -0x18) = 0x101b9e;
          bn_mul_mont_gather5(local_78,local_58,plVar17,puVar29,local_98,uVar3);
          lVar32 = lVar31 + 2;
          *(undefined8 *)((long)ppplVar25 + -0x18) = 0x101bb4;
          bn_scatter5(local_78,lVar30,plVar17,lVar31);
          uVar14 = *(ulong *)((long)ppplVar25 + -8);
          lVar31 = lVar32;
        } while (lVar32 != 0x21);
        iVar9 = (int)(local_dc - 1) % 5 + 1;
        uVar27 = local_dc - iVar9;
        local_a0 = plVar17;
        if ((int)uVar27 < -0x3f) {
          *(undefined8 *)((long)ppplVar25 + -8) = 0x1022bf;
          bn_gather5(local_78,lVar30,plVar17,0,uVar14);
        }
        else {
          uVar19 = uVar27 + 0x3f;
          if (-1 < (int)uVar27) {
            uVar19 = uVar27;
          }
          lVar31 = 0;
          iVar10 = (int)uVar19 >> 6;
          if (iVar10 < local_88->top) {
            uVar14 = local_88->d[iVar10];
            uVar19 = (1 << ((byte)iVar9 & 0x1f)) - 1;
            if (((uVar27 & 0x3f) == 0) ||
               (uVar14 = uVar14 >> (sbyte)(uVar27 & 0x3f), local_88->top <= iVar10 + 1)) {
              lVar31 = (long)(int)(uVar19 & (uint)uVar14);
            }
            else {
              bVar33 = (byte)((int)uVar27 >> 0x1f);
              lVar31 = (long)(int)(uVar19 & ((uint)(local_88->d[(long)iVar10 + 1] <<
                                                   (((bVar33 >> 2) -
                                                    ((char)uVar27 + (bVar33 >> 2) & 0x3f)) + 0x40 &
                                                   0x3f)) | (uint)uVar14));
            }
          }
          *(undefined8 *)((long)ppplVar25 + -8) = 0x101c82;
          bn_gather5(local_78,lVar30,plVar17,lVar31,uVar14);
          pBVar13 = local_88;
          puVar4 = local_98;
          uVar16 = extraout_RDX;
          if ((uVar3 & 7) == 0) {
            while (0 < (int)uVar27) {
              puVar5 = pBVar13->d;
              uVar27 = uVar27 - 5;
              *(undefined8 *)((long)ppplVar25 + -8) = 0x102377;
              uVar16 = bn_get_bits5(puVar5,uVar27,uVar16);
              *(undefined8 *)((long)ppplVar25 + -0x10) = uVar16;
              *(undefined8 *)((long)ppplVar25 + -0x18) = 0x102398;
              bn_power5(local_78,local_78,local_a0,puVar29,puVar4,uVar3);
              uVar16 = *(undefined8 *)((long)ppplVar25 + -8);
            }
          }
          else {
            while (0 < (int)uVar27) {
              uVar27 = uVar27 - 5;
              *(undefined8 *)((long)ppplVar25 + -8) = 0x101cbc;
              bn_mul_mont(local_78,local_78,local_78,puVar29,puVar4,uVar3);
              *(undefined8 *)((long)ppplVar25 + -8) = 0x101cd4;
              bn_mul_mont(local_78,local_78,local_78,puVar29,puVar4,uVar3);
              *(undefined8 *)((long)ppplVar25 + -8) = 0x101cec;
              bn_mul_mont(local_78,local_78,local_78,puVar29,puVar4,uVar3);
              *(undefined8 *)((long)ppplVar25 + -8) = 0x101d04;
              bn_mul_mont(local_78,local_78,local_78,puVar29,puVar4,uVar3);
              *(undefined8 *)((long)ppplVar25 + -8) = 0x101d1c;
              bn_mul_mont(local_78,local_78,local_78,puVar29,puVar4,uVar3);
              puVar5 = pBVar13->d;
              *(undefined8 *)((long)ppplVar25 + -8) = 0x101d27;
              uVar16 = bn_get_bits5(puVar5,uVar27);
              *(undefined8 *)((long)ppplVar25 + -0x10) = uVar16;
              *(undefined8 *)((long)ppplVar25 + -0x18) = 0x101d48;
              bn_mul_mont_gather5(local_78,local_78,local_a0,puVar29,puVar4,uVar3);
            }
          }
        }
LAB_00101d5a:
        local_70 = uVar3;
        *(undefined8 *)((long)ppplVar25 + -8) = 0x101d74;
        iVar9 = bn_from_mont_fixed_top(local_a8,&local_78,local_b0,local_80);
        if (iVar9 == 0) goto LAB_001020a5;
        iVar9 = 1;
        if (local_90 != (BN_MONT_CTX *)0x0) goto LAB_001020b5;
LAB_00101d90:
        *(undefined8 *)((long)ppplVar25 + -8) = 0x101d9c;
        BN_MONT_CTX_free(local_b0);
      }
      else {
        *(undefined8 *)((long)ppplVar25 + -8) = 0x102080;
        pBVar13 = BN_value_one();
        *(undefined8 *)((long)ppplVar25 + -8) = 0x102096;
        iVar9 = bn_to_mont_fixed_top(&local_78,pBVar13,local_b0,local_80);
        if (iVar9 != 0) goto LAB_0010188b;
LAB_001020a5:
        iVar9 = 0;
        if (local_90 == (BN_MONT_CTX *)0x0) {
LAB_001021c0:
          iVar9 = 0;
          goto LAB_00101d90;
        }
      }
LAB_001020b5:
      *(undefined8 *)((long)ppplVar25 + -8) = 0x1020c8;
      OPENSSL_cleanse(local_a0,local_c8);
      *(undefined8 *)((long)ppplVar25 + -8) = 0x1020e0;
      CRYPTO_free(local_d0);
      ppplVar26 = ppplVar25;
    }
    else {
LAB_001014f8:
      if (local_90 == (BN_MONT_CTX *)0x0) goto LAB_001016bc;
      iVar9 = 0;
      ppplVar26 = &local_e8;
    }
  }
LAB_001020e0:
  *(undefined8 *)((long)ppplVar26 + -8) = 0x1020e9;
  BN_CTX_end(local_80);
  ppplVar22 = ppplVar26;
LAB_00101462:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar9;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)((long)ppplVar22 + -8) = 0x1023a9;
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
LAB_00102621:
    BN_zero_ex(r);
    return 1;
  }
  if (local_70 == 0) goto LAB_00102621;
  BN_CTX_start(ctx);
  a_00 = BN_CTX_get(ctx);
  rem = BN_CTX_get(ctx);
  uVar9 = 0;
  if (rem == (BIGNUM *)0x0) {
    local_68 = (BN_MONT_CTX *)0x0;
    goto LAB_001025d0;
  }
  local_68 = m_ctx;
  if (m_ctx == (BN_MONT_CTX *)0x0) {
    local_68 = BN_MONT_CTX_new();
    if (local_68 != (BN_MONT_CTX *)0x0) {
      iVar7 = BN_MONT_CTX_set(local_68,m,ctx);
      if (iVar7 != 0) goto LAB_001024e4;
      uVar9 = 0;
    }
  }
  else {
LAB_001024e4:
    iVar6 = iVar6 + -2;
    if (iVar6 < 0) {
      if (local_70 == 1) {
LAB_00102761:
        iVar6 = BN_set_word(r,1);
        uVar9 = (uint)(iVar6 != 0);
      }
      else {
LAB_00102717:
        iVar6 = BN_set_word(a_00,local_70);
        if ((iVar6 != 0) &&
           (iVar6 = BN_to_montgomery(a_00,a_00,local_68,ctx), rem = a_00, iVar6 != 0))
        goto LAB_001025ae;
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
          if (!bVar5) goto LAB_00102788;
        }
        else {
          if (bVar5) {
            iVar7 = BN_set_word(a_00,w_00);
            if (iVar7 == 0) {
LAB_00102828:
              uVar9 = 0;
              goto LAB_001025d0;
            }
            iVar7 = BN_to_montgomery(a_00,a_00,local_68,ctx);
            if (iVar7 == 0) goto LAB_001025d0;
            w = 1;
          }
          else {
            iVar7 = BN_mul_word(a_00,w_00);
            if (iVar7 == 0) goto LAB_001025d0;
            iVar7 = BN_div((BIGNUM *)0x0,rem,a_00,m,ctx);
            if (iVar7 == 0) goto LAB_00102828;
            w = 1;
            pBVar8 = rem;
            rem = a_00;
          }
LAB_00102788:
          iVar7 = BN_mod_mul_montgomery(pBVar8,pBVar8,pBVar8,local_68,ctx);
          if (iVar7 == 0) goto LAB_001025d0;
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
            goto LAB_001025d0;
            bVar5 = false;
            w_00 = local_70;
          }
          else {
            iVar7 = BN_mul_word(pBVar8,w);
            if ((iVar7 == 0) ||
               (iVar7 = BN_div((BIGNUM *)0x0,rem,pBVar8,m,ctx), a_00 = rem, w_00 = local_70,
               rem = pBVar8, iVar7 == 0)) goto LAB_001025d0;
          }
        }
        bVar10 = iVar6 != 0;
        iVar6 = iVar6 + -1;
      } while (bVar10);
      if (w_00 == 1) {
        rem = a_00;
        if (bVar5) goto LAB_00102761;
      }
      else {
        local_70 = w_00;
        if (bVar5) goto LAB_00102717;
        iVar6 = BN_mul_word(a_00,w_00);
        if ((iVar6 == 0) || (iVar6 = BN_div((BIGNUM *)0x0,rem,a_00,m,ctx), iVar6 == 0))
        goto LAB_001025d0;
      }
LAB_001025ae:
      iVar6 = BN_from_montgomery(r,rem,local_68,ctx);
      uVar9 = (uint)(iVar6 != 0);
    }
LAB_001025d0:
    if (m_ctx != (BN_MONT_CTX *)0x0) goto LAB_001025dc;
  }
  BN_MONT_CTX_free(local_68);
LAB_001025dc:
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
  uint n;
  int iVar3;
  int iVar4;
  BIGNUM *pBVar5;
  BIGNUM *pBVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  long in_FS_OFFSET;
  int local_160;
  uint local_150 [2];
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
      goto LAB_00102a09;
    }
    n = BN_num_bits(p);
    if (n == 0) {
      iVar2 = BN_abs_is_word(m,1);
      if (iVar2 == 0) {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          iVar2 = BN_set_word(r,1);
          return iVar2;
        }
        goto LAB_00102f14;
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
          if ((int)n < 0x2a0) {
            if (0xef < (int)n) {
              local_160 = 0x10;
              uVar1 = 5;
              goto LAB_00102b90;
            }
            if (0x4f < (int)n) {
              local_160 = 8;
              uVar1 = 4;
              goto LAB_00102b90;
            }
            if (0x17 < (int)n) {
              local_160 = 4;
              uVar1 = 3;
              goto LAB_00102b90;
            }
            uVar1 = 1;
          }
          else {
            local_160 = 0x20;
            uVar1 = 6;
LAB_00102b90:
            iVar3 = BN_mod_mul(pBVar5,pBVar6,pBVar6,m,ctx);
            if (iVar3 == 0) goto LAB_00102abd;
            lVar10 = 1;
            local_150[0] = n;
            do {
              pBVar6 = BN_CTX_get(ctx);
              local_148[lVar10] = pBVar6;
              if ((pBVar6 == (BIGNUM *)0x0) ||
                 (iVar3 = BN_mod_mul(pBVar6,*(BIGNUM **)(local_150 + lVar10 * 2),pBVar5,m,ctx),
                 iVar3 == 0)) goto LAB_00102abd;
              lVar10 = lVar10 + 1;
              n = local_150[0];
            } while ((int)lVar10 < local_160);
          }
          pBVar5 = p;
          if (((p == r) &&
              ((pBVar5 = BN_CTX_get(ctx), pBVar5 == (BIGNUM *)0x0 ||
               (pBVar6 = BN_copy(pBVar5,p), pBVar6 == (BIGNUM *)0x0)))) ||
             (iVar3 = BN_set_word(r,1), iVar3 == 0)) goto LAB_00102abd;
          uVar8 = 1;
          do {
            n = n - 1;
            iVar3 = BN_is_bit_set(pBVar5,n);
            if (iVar3 != 0) {
              if ((uVar1 == 1) || ((int)n < 1)) {
                if (uVar8 == 0) {
                  uVar7 = 1;
                  goto LAB_00102e9f;
                }
                uVar9 = 0;
                uVar7 = uVar8;
                goto LAB_00102e43;
              }
              do {
                uVar7 = 1;
                uVar11 = 1;
                uVar9 = 0;
                local_150[0] = uVar8;
                do {
                  iVar3 = BN_is_bit_set(pBVar5,n - uVar11);
                  uVar8 = uVar9;
                  if (iVar3 != 0) {
                    uVar7 = uVar7 << ((char)uVar11 - (char)uVar9 & 0x1fU) | 1;
                    uVar8 = uVar11;
                  }
                  uVar11 = uVar11 + 1;
                } while ((uVar1 != uVar11) && (uVar9 = uVar8, uVar11 != n + 1));
                uVar9 = uVar8;
                if (local_150[0] == 0) goto LAB_00102e9f;
LAB_00102e43:
                while( true ) {
                  iVar3 = BN_mod_mul(r,r,local_148[(int)uVar7 >> 1],m,ctx);
                  if (iVar3 == 0) goto LAB_00102abd;
                  n = n - (uVar9 + 1);
                  if ((int)n < 0) goto LAB_00102cad;
                  iVar3 = BN_is_bit_set(pBVar5,n);
                  if (iVar3 == 0) goto LAB_00102d8f;
                  uVar8 = 0;
                  uVar7 = 1;
                  if ((uVar1 != 1) && (n != 0)) break;
LAB_00102e9f:
                  iVar3 = 0;
                  local_150[0] = uVar8;
                  local_150[1] = uVar7;
                  do {
                    iVar4 = BN_mod_mul(r,r,r,m,ctx);
                    if (iVar4 == 0) goto LAB_00102abd;
                    iVar3 = iVar3 + 1;
                    uVar9 = local_150[0];
                    uVar7 = local_150[1];
                  } while (iVar3 != uVar8 + 1);
                }
              } while( true );
            }
            if (uVar8 == 0) {
LAB_00102d8f:
              iVar3 = BN_mod_mul(r,r,r,m,ctx);
              if (iVar3 == 0) goto LAB_00102abd;
              uVar8 = 0;
            }
          } while (n != 0);
        }
        else {
          BN_zero_ex(r);
        }
LAB_00102cad:
        iVar2 = 1;
      }
LAB_00102abd:
      BN_CTX_end(ctx);
    }
  }
  else {
    ERR_new();
    ERR_set_debug("crypto/bn/bn_exp.c",0x535,"BN_mod_exp_simple");
    ERR_set_error(3,0xc0101,0);
LAB_00102a09:
    iVar2 = 0;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
LAB_00102f14:
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
      if (iVar1 == 0x10) goto LAB_00103050;
      goto LAB_00102f7d;
    }
LAB_00102f97:
    uVar2 = BN_mod_exp_mont_consttime(param_1,param_2,param_3,param_4,param_11,param_5);
    uVar3 = BN_mod_exp_mont_consttime(param_6,param_7,param_8,param_9,param_11,param_10);
    mont = (BN_MONT_CTX *)0x0;
    mont_00 = (BN_MONT_CTX *)0x0;
    uVar6 = (ulong)(uVar3 & uVar2);
LAB_00102fe1:
    if (param_10 == (BN_MONT_CTX *)0x0) goto LAB_001030f0;
  }
  else {
    iVar1 = param_2->top;
    if (iVar1 == 0x10) {
LAB_00103050:
      if (param_3->top != 0x10) goto LAB_00102f97;
      iVar1 = BN_num_bits(param_4);
      if ((((iVar1 != 0x400) || (param_7->top != 0x10)) || (param_8->top != 0x10)) ||
         (iVar1 = BN_num_bits(param_9), iVar1 != 0x400)) {
        iVar1 = param_2->top;
        goto LAB_00102f7d;
      }
    }
    else {
LAB_00102f7d:
      if (iVar1 == 0x18) {
        if (param_3->top != 0x18) goto LAB_00102f97;
        iVar1 = BN_num_bits(param_4);
        if (((iVar1 == 0x600) && (param_7->top == 0x18)) &&
           ((param_8->top == 0x18 && (iVar1 = BN_num_bits(param_9), iVar1 == 0x600))))
        goto LAB_00103156;
        iVar1 = param_2->top;
      }
      if (((iVar1 != 0x20) || (param_3->top != 0x20)) ||
         ((iVar1 = BN_num_bits(param_4), iVar1 != 0x800 ||
          (((param_7->top != 0x20 || (param_8->top != 0x20)) ||
           (iVar1 = BN_num_bits(param_9), iVar1 != 0x800)))))) goto LAB_00102f97;
    }
LAB_00103156:
    iVar1 = param_2->top;
    iVar4 = BN_num_bits(param_4);
    lVar5 = bn_wexpand(param_1,iVar1);
    if ((lVar5 == 0) || (uVar6 = bn_wexpand(param_6,iVar1), uVar6 == 0)) {
      mont = (BN_MONT_CTX *)0x0;
      mont_00 = (BN_MONT_CTX *)0x0;
      uVar6 = 0;
      goto LAB_00102fe1;
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
        if (uVar2 != 0) goto LAB_0010319c;
      }
      if (param_10 == (BN_MONT_CTX *)0x0) {
        BN_MONT_CTX_free((BN_MONT_CTX *)0x0);
      }
      goto LAB_00103085;
    }
LAB_0010319c:
    mont = param_10;
    if (param_10 != (BN_MONT_CTX *)0x0) {
LAB_001031aa:
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
      goto LAB_00102fe1;
    }
    mont = BN_MONT_CTX_new();
    if (mont == (BN_MONT_CTX *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar2 = BN_MONT_CTX_set(mont,param_9,param_11);
      uVar6 = (ulong)uVar2;
      if (uVar2 != 0) goto LAB_001031aa;
    }
LAB_001030f0:
    BN_MONT_CTX_free(mont);
  }
  if (param_5 != (BN_MONT_CTX *)0x0) {
    return uVar6;
  }
LAB_00103085:
  BN_MONT_CTX_free(mont_00);
  return uVar6;
}


