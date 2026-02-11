
int BN_mod_exp2_mont(BIGNUM *r,BIGNUM *a1,BIGNUM *p1,BIGNUM *a2,BIGNUM *p2,BIGNUM *m,BN_CTX *ctx,
                    BN_MONT_CTX *m_ctx)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  BIGNUM *pBVar7;
  BIGNUM *r_00;
  BIGNUM *pBVar8;
  BIGNUM *rem;
  int n;
  BIGNUM **ppBVar9;
  int n_00;
  int n_01;
  uint uVar10;
  long in_FS_OFFSET;
  bool bVar11;
  BIGNUM *local_288;
  BN_MONT_CTX *local_278;
  BN_MONT_CTX *local_270;
  int local_268;
  int local_264;
  BIGNUM *local_248 [32];
  BIGNUM *local_148 [33];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = BN_is_odd(m);
  if (iVar2 == 0) {
    ERR_new();
    ERR_set_debug("crypto/bn/bn_exp2.c",0x24,"BN_mod_exp2_mont");
    ERR_set_error(3,0x66,0);
    uVar10 = 0;
  }
  else {
    iVar2 = BN_num_bits(p1);
    iVar3 = BN_num_bits(p2);
    if (iVar2 == 0 && iVar3 == 0) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        iVar2 = BN_set_word(r,1);
        return iVar2;
      }
      goto LAB_00100864;
    }
    BN_CTX_start(ctx);
    pBVar7 = BN_CTX_get(ctx);
    r_00 = BN_CTX_get(ctx);
    pBVar8 = BN_CTX_get(ctx);
    local_248[0] = pBVar8;
    rem = BN_CTX_get(ctx);
    local_148[0] = rem;
    if (rem == (BIGNUM *)0x0) {
      uVar10 = 0;
      local_270 = (BN_MONT_CTX *)0x0;
LAB_0010035a:
      if (m_ctx == (BN_MONT_CTX *)0x0) goto LAB_00100397;
    }
    else {
      local_278 = m_ctx;
      if (m_ctx != (BN_MONT_CTX *)0x0) {
LAB_001000ef:
        local_268 = 6;
        if (((iVar2 < 0x2a0) && (local_268 = 5, iVar2 < 0xf0)) && (local_268 = 4, iVar2 < 0x50)) {
          local_268 = (0x17 < iVar2) + 1 + (uint)(0x17 < iVar2);
        }
        local_264 = 6;
        if (((iVar3 < 0x2a0) && (local_264 = 5, iVar3 < 0xf0)) && (local_264 = 4, iVar3 < 0x50)) {
          local_264 = (uint)(0x17 < iVar3) * 2 + 1;
        }
        if (((a1->neg == 0) && (iVar4 = BN_ucmp(a1,m), iVar4 < 0)) ||
           (iVar4 = BN_div((BIGNUM *)0x0,pBVar8,a1,m,ctx), a1 = pBVar8, iVar4 != 0)) {
          iVar4 = BN_is_zero(a1);
          if (iVar4 != 0) {
LAB_00100340:
            uVar10 = 1;
            BN_zero_ex(r);
            local_270 = local_278;
            goto LAB_0010035a;
          }
          iVar4 = BN_to_montgomery(pBVar8,a1,local_278,ctx);
          if (iVar4 != 0) {
            if (local_268 != 1) {
              iVar4 = BN_mod_mul_montgomery(pBVar7,pBVar8,pBVar8,local_278,ctx);
              if (iVar4 == 0) goto LAB_00100270;
              ppBVar9 = local_248;
              do {
                pBVar8 = BN_CTX_get(ctx);
                ppBVar9[1] = pBVar8;
                if ((pBVar8 == (BIGNUM *)0x0) ||
                   (iVar4 = BN_mod_mul_montgomery(pBVar8,*ppBVar9,pBVar7,local_278,ctx), iVar4 == 0)
                   ) goto LAB_00100270;
                ppBVar9 = ppBVar9 + 1;
              } while (ppBVar9 != local_248 + (ulong)((1 << ((char)local_268 - 1U & 0x1f)) - 2) + 1)
              ;
            }
            if (((a2->neg == 0) && (iVar4 = BN_ucmp(a2,m), local_288 = a2, iVar4 < 0)) ||
               (iVar4 = BN_div((BIGNUM *)0x0,rem,a2,m,ctx), local_288 = rem, iVar4 != 0)) {
              iVar4 = BN_is_zero(local_288);
              if (iVar4 != 0) goto LAB_00100340;
              iVar4 = BN_to_montgomery(rem,local_288,local_278,ctx);
              if (iVar4 != 0) {
                if (local_264 != 1) {
                  iVar4 = BN_mod_mul_montgomery(pBVar7,rem,rem,local_278,ctx);
                  if (iVar4 == 0) goto LAB_00100270;
                  ppBVar9 = local_148;
                  do {
                    pBVar8 = BN_CTX_get(ctx);
                    ppBVar9[1] = pBVar8;
                    if ((pBVar8 == (BIGNUM *)0x0) ||
                       (iVar4 = BN_mod_mul_montgomery(pBVar8,*ppBVar9,pBVar7,local_278,ctx),
                       iVar4 == 0)) goto LAB_00100270;
                    ppBVar9 = ppBVar9 + 1;
                  } while (ppBVar9 !=
                           local_148 + (ulong)((1 << ((char)local_264 - 1U & 0x1f)) - 2) + 1);
                }
                pBVar7 = BN_value_one();
                iVar4 = BN_to_montgomery(r_00,pBVar7,local_278,ctx);
                if (iVar4 != 0) {
                  if (iVar2 < iVar3) {
                    iVar2 = iVar3;
                  }
                  if (0 < iVar2) {
                    iVar2 = iVar2 + -2;
                    iVar4 = 0;
                    bVar1 = true;
                    n_00 = 0;
                    n = 0;
                    iVar3 = 0;
                    do {
                      n_01 = iVar2 + 1;
                      if ((!bVar1) &&
                         (iVar5 = BN_mod_mul_montgomery(r_00,r_00,r_00,local_278,ctx), iVar5 == 0))
                      goto LAB_00100270;
                      bVar11 = true;
                      if (iVar3 == 0) {
                        iVar3 = BN_is_bit_set(p1,n_01);
                        if (iVar3 != 0) {
                          n = (2 - local_268) + iVar2;
                          while (iVar3 = BN_is_bit_set(p1,n), iVar3 == 0) {
                            n = n + 1;
                          }
                          if (iVar2 < n) {
                            bVar11 = true;
                            iVar3 = 1;
                          }
                          else {
                            iVar3 = 1;
                            iVar5 = iVar2;
                            do {
                              iVar6 = BN_is_bit_set(p1,iVar5);
                              iVar3 = (iVar3 * 2 + 1) - (uint)(iVar6 == 0);
                              iVar5 = iVar5 + -1;
                            } while (n <= iVar5);
                            bVar11 = iVar3 != 0;
                          }
                          goto LAB_0010058e;
                        }
                        iVar3 = 0;
                        if (iVar4 == 0) {
                          iVar3 = BN_is_bit_set(p2,n_01);
                          if (iVar3 != 0) {
                            iVar3 = 0;
                            bVar11 = false;
                            goto LAB_0010066d;
                          }
                          goto LAB_001005e5;
                        }
LAB_001005aa:
                        if (n_00 == n_01) {
                          iVar4 = BN_mod_mul_montgomery
                                            (r_00,r_00,local_148[iVar4 >> 1],local_278,ctx);
                          if (iVar4 == 0) goto LAB_00100270;
                          bVar1 = false;
                          iVar4 = 0;
                        }
                      }
                      else {
LAB_0010058e:
                        bVar11 = (bool)(n == n_01 & bVar11);
                        if (iVar4 == 0) {
                          iVar4 = BN_is_bit_set(p2,n_01);
                          if (iVar4 != 0) {
LAB_0010066d:
                            n_00 = (2 - local_264) + iVar2;
                            while (iVar4 = BN_is_bit_set(p2,n_00), iVar4 == 0) {
                              n_00 = n_00 + 1;
                            }
                            iVar4 = 1;
                            if (n_00 <= iVar2) {
                              iVar4 = 1;
                              iVar5 = iVar2;
                              do {
                                iVar6 = BN_is_bit_set(p2,iVar5);
                                iVar4 = (iVar4 * 2 + 1) - (uint)(iVar6 == 0);
                                iVar5 = iVar5 + -1;
                              } while (n_00 <= iVar5);
                            }
                            goto LAB_0010059e;
                          }
                          iVar4 = 0;
                          if (bVar11) {
                            iVar3 = BN_mod_mul_montgomery
                                              (r_00,r_00,local_248[iVar3 >> 1],local_278,ctx);
                            if (iVar3 == 0) goto LAB_00100270;
                            bVar1 = false;
                            iVar3 = 0;
                          }
                        }
                        else {
LAB_0010059e:
                          if (bVar11) {
                            iVar3 = BN_mod_mul_montgomery
                                              (r_00,r_00,local_248[iVar3 >> 1],local_278,ctx);
                            if (iVar3 == 0) goto LAB_00100270;
                            bVar1 = false;
                            iVar3 = 0;
                          }
                          if (iVar4 != 0) goto LAB_001005aa;
                        }
                      }
LAB_001005e5:
                      iVar2 = iVar2 + -1;
                    } while (iVar2 != -2);
                  }
                  local_270 = local_278;
                  iVar2 = BN_from_montgomery(r,r_00,local_278,ctx);
                  uVar10 = (uint)(iVar2 != 0);
                  goto LAB_0010035a;
                }
              }
            }
          }
        }
LAB_00100270:
        uVar10 = 0;
        local_270 = local_278;
        goto LAB_0010035a;
      }
      local_278 = BN_MONT_CTX_new();
      if (local_278 == (BN_MONT_CTX *)0x0) {
        local_270 = (BN_MONT_CTX *)0x0;
        uVar10 = 0;
      }
      else {
        iVar4 = BN_MONT_CTX_set(local_278,m,ctx);
        if (iVar4 != 0) goto LAB_001000ef;
        uVar10 = 0;
        local_270 = local_278;
      }
LAB_00100397:
      BN_MONT_CTX_free(local_270);
    }
    BN_CTX_end(ctx);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar10;
  }
LAB_00100864:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


