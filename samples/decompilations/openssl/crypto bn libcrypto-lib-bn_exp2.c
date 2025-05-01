
int BN_mod_exp2_mont(BIGNUM *r,BIGNUM *a1,BIGNUM *p1,BIGNUM *a2,BIGNUM *p2,BIGNUM *m,BN_CTX *ctx,
                    BN_MONT_CTX *m_ctx)

{
  int n;
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  BIGNUM *pBVar9;
  BIGNUM *r_00;
  BIGNUM *pBVar10;
  BIGNUM *rem;
  long lVar11;
  uint uVar12;
  long in_FS_OFFSET;
  bool bVar13;
  BIGNUM *local_290;
  BN_MONT_CTX *local_280;
  BN_MONT_CTX *local_278;
  int local_258;
  int local_254;
  int local_250 [2];
  BIGNUM *local_248 [31];
  BIGNUM *apBStack_150 [34];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = BN_is_odd(m);
  if (iVar2 == 0) {
    ERR_new();
    ERR_set_debug("crypto/bn/bn_exp2.c",0x24,"BN_mod_exp2_mont");
    ERR_set_error(3,0x66,0);
    uVar12 = 0;
  }
  else {
    iVar2 = BN_num_bits(p1);
    iVar3 = BN_num_bits(p2);
    if (iVar2 == 0 && iVar3 == 0) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        iVar2 = BN_set_word(r,1);
        return iVar2;
      }
      goto LAB_001008d4;
    }
    BN_CTX_start(ctx);
    pBVar9 = BN_CTX_get(ctx);
    r_00 = BN_CTX_get(ctx);
    pBVar10 = BN_CTX_get(ctx);
    local_248[0] = pBVar10;
    rem = BN_CTX_get(ctx);
    apBStack_150[1] = rem;
    if (rem == (BIGNUM *)0x0) {
      uVar12 = 0;
      local_278 = (BN_MONT_CTX *)0x0;
LAB_0010036a:
      if (m_ctx == (BN_MONT_CTX *)0x0) goto LAB_001003d7;
    }
    else {
      local_280 = m_ctx;
      if (m_ctx != (BN_MONT_CTX *)0x0) {
LAB_001000f1:
        if (iVar2 < 0x2a0) {
          if (iVar2 < 0xf0) {
            if (iVar2 < 0x50) {
              iVar5 = (uint)(0x17 < iVar2) * 3 + 1;
              local_258 = (0x17 < iVar2) + 1 + (uint)(0x17 < iVar2);
            }
            else {
              iVar5 = 8;
              local_258 = 4;
            }
          }
          else {
            iVar5 = 0x10;
            local_258 = 5;
          }
        }
        else {
          iVar5 = 0x20;
          local_258 = 6;
        }
        if (iVar3 < 0x2a0) {
          if (iVar3 < 0xf0) {
            if (iVar3 < 0x50) {
              local_250[0] = (uint)(0x17 < iVar3) * 3 + 1;
              local_254 = (0x17 < iVar3) + 1 + (uint)(0x17 < iVar3);
            }
            else {
              local_250[0] = 8;
              local_254 = 4;
            }
          }
          else {
            local_250[0] = 0x10;
            local_254 = 5;
          }
        }
        else {
          local_250[0] = 0x20;
          local_254 = 6;
        }
        if (((a1->neg == 0) && (iVar4 = BN_ucmp(a1,m), iVar4 < 0)) ||
           (iVar4 = BN_div((BIGNUM *)0x0,pBVar10,a1,m,ctx), a1 = pBVar10, iVar4 != 0)) {
          iVar4 = BN_is_zero(a1);
          if (iVar4 != 0) {
LAB_00100350:
            uVar12 = 1;
            BN_zero_ex(r);
            local_278 = local_280;
            goto LAB_0010036a;
          }
          iVar4 = BN_to_montgomery(pBVar10,a1,local_280,ctx);
          if (iVar4 != 0) {
            if (local_258 != 1) {
              iVar4 = BN_mod_mul_montgomery(pBVar9,pBVar10,pBVar10,local_280,ctx);
              if (iVar4 == 0) goto LAB_00100340;
              lVar11 = 1;
              local_250[1] = iVar3;
              do {
                pBVar10 = BN_CTX_get(ctx);
                local_248[lVar11] = pBVar10;
                if ((pBVar10 == (BIGNUM *)0x0) ||
                   (iVar3 = BN_mod_mul_montgomery
                                      (pBVar10,*(BIGNUM **)(local_250 + lVar11 * 2),pBVar9,local_280
                                       ,ctx), iVar3 == 0)) goto LAB_00100340;
                lVar11 = lVar11 + 1;
                iVar3 = local_250[1];
              } while ((int)lVar11 < iVar5);
            }
            if (((a2->neg == 0) && (iVar5 = BN_ucmp(a2,m), local_290 = a2, iVar5 < 0)) ||
               (iVar5 = BN_div((BIGNUM *)0x0,rem,a2,m,ctx), local_290 = rem, iVar5 != 0)) {
              iVar5 = BN_is_zero(local_290);
              if (iVar5 != 0) goto LAB_00100350;
              iVar5 = BN_to_montgomery(rem,local_290,local_280,ctx);
              if (iVar5 != 0) {
                if (local_254 != 1) {
                  iVar4 = BN_mod_mul_montgomery(pBVar9,rem,rem,local_280,ctx);
                  iVar5 = local_250[0];
                  if (iVar4 == 0) goto LAB_00100340;
                  lVar11 = 1;
                  do {
                    pBVar10 = BN_CTX_get(ctx);
                    apBStack_150[lVar11 + 1] = pBVar10;
                    if ((pBVar10 == (BIGNUM *)0x0) ||
                       (iVar4 = BN_mod_mul_montgomery
                                          (pBVar10,apBStack_150[lVar11],pBVar9,local_280,ctx),
                       iVar4 == 0)) goto LAB_00100340;
                    lVar11 = lVar11 + 1;
                  } while ((int)lVar11 < iVar5);
                }
                pBVar9 = BN_value_one();
                iVar5 = BN_to_montgomery(r_00,pBVar9,local_280,ctx);
                if (iVar5 != 0) {
                  if (iVar2 < iVar3) {
                    iVar2 = iVar3;
                  }
                  if (0 < iVar2) {
                    iVar2 = iVar2 + -2;
                    iVar4 = 0;
                    bVar1 = true;
                    iVar3 = 0;
                    iVar5 = 0;
                    iVar6 = iVar4;
                    do {
                      n = iVar2 + 1;
                      if ((!bVar1) &&
                         (iVar7 = BN_mod_mul_montgomery(r_00,r_00,r_00,local_280,ctx), iVar7 == 0))
                      goto LAB_00100340;
                      bVar13 = true;
                      if (iVar4 == 0) {
                        iVar4 = BN_is_bit_set(p1,n);
                        if (iVar4 != 0) {
                          iVar5 = (2 - local_258) + iVar2;
                          while (iVar4 = BN_is_bit_set(p1,iVar5), iVar4 == 0) {
                            iVar5 = iVar5 + 1;
                          }
                          if (iVar2 < iVar5) {
                            bVar13 = true;
                            iVar4 = 1;
                          }
                          else {
                            iVar4 = 1;
                            iVar7 = iVar2;
                            do {
                              iVar8 = BN_is_bit_set(p1,iVar7);
                              iVar4 = (iVar4 * 2 + 1) - (uint)(iVar8 == 0);
                              iVar7 = iVar7 + -1;
                            } while (iVar5 <= iVar7);
                            bVar13 = iVar4 != 0;
                          }
                          goto LAB_001005f6;
                        }
                        iVar4 = 0;
                        if (iVar6 == 0) {
                          iVar4 = BN_is_bit_set(p2,n);
                          if (iVar4 != 0) {
                            iVar4 = 0;
                            bVar13 = false;
                            goto LAB_001006d2;
                          }
                          goto LAB_00100650;
                        }
LAB_00100614:
                        if (iVar3 == n) {
                          iVar6 = BN_mod_mul_montgomery
                                            (r_00,r_00,apBStack_150[(long)(iVar6 >> 1) + 1],
                                             local_280,ctx);
                          if (iVar6 == 0) goto LAB_00100340;
                          bVar1 = false;
                          iVar6 = 0;
                        }
                      }
                      else {
LAB_001005f6:
                        bVar13 = (bool)(iVar5 == n & bVar13);
                        if (iVar6 == 0) {
                          iVar6 = BN_is_bit_set(p2,n);
                          if (iVar6 != 0) {
LAB_001006d2:
                            iVar3 = (2 - local_254) + iVar2;
                            while (iVar6 = BN_is_bit_set(p2,iVar3), iVar6 == 0) {
                              iVar3 = iVar3 + 1;
                            }
                            iVar6 = 1;
                            if (iVar3 <= iVar2) {
                              iVar6 = 1;
                              iVar7 = iVar2;
                              do {
                                iVar8 = BN_is_bit_set(p2,iVar7);
                                iVar6 = (iVar6 * 2 + 1) - (uint)(iVar8 == 0);
                                iVar7 = iVar7 + -1;
                              } while (iVar3 <= iVar7);
                            }
                            goto LAB_00100607;
                          }
                          iVar6 = 0;
                          if (bVar13) {
                            iVar4 = BN_mod_mul_montgomery
                                              (r_00,r_00,local_248[iVar4 >> 1],local_280,ctx);
                            if (iVar4 == 0) goto LAB_00100340;
                            bVar1 = false;
                            iVar4 = 0;
                          }
                        }
                        else {
LAB_00100607:
                          if (bVar13) {
                            iVar4 = BN_mod_mul_montgomery
                                              (r_00,r_00,local_248[iVar4 >> 1],local_280,ctx);
                            if (iVar4 == 0) goto LAB_00100340;
                            bVar1 = false;
                            iVar4 = 0;
                          }
                          if (iVar6 != 0) goto LAB_00100614;
                        }
                      }
LAB_00100650:
                      iVar2 = iVar2 + -1;
                    } while (iVar2 != -2);
                  }
                  local_278 = local_280;
                  iVar2 = BN_from_montgomery(r,r_00,local_280,ctx);
                  uVar12 = (uint)(iVar2 != 0);
                  goto LAB_0010036a;
                }
              }
            }
          }
        }
LAB_00100340:
        uVar12 = 0;
        local_278 = local_280;
        goto LAB_0010036a;
      }
      local_280 = BN_MONT_CTX_new();
      if (local_280 == (BN_MONT_CTX *)0x0) {
        local_278 = (BN_MONT_CTX *)0x0;
        uVar12 = 0;
      }
      else {
        iVar5 = BN_MONT_CTX_set(local_280,m,ctx);
        if (iVar5 != 0) goto LAB_001000f1;
        uVar12 = 0;
        local_278 = local_280;
      }
LAB_001003d7:
      BN_MONT_CTX_free(local_278);
    }
    BN_CTX_end(ctx);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar12;
  }
LAB_001008d4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


