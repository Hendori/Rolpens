
BIGNUM * int_bn_mod_inverse(BIGNUM *param_1,BIGNUM *param_2,BIGNUM *param_3,BN_CTX *param_4,
                           undefined4 *param_5)

{
  int iVar1;
  int iVar2;
  BIGNUM *pBVar3;
  BIGNUM *pBVar4;
  BIGNUM *pBVar5;
  BIGNUM *pBVar6;
  BIGNUM *pBVar7;
  BIGNUM *pBVar8;
  BIGNUM *pBVar9;
  BIGNUM *a;
  long in_FS_OFFSET;
  BIGNUM *local_98;
  BIGNUM *local_90;
  BIGNUM *local_88;
  int local_68;
  BIGNUM local_58;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = BN_abs_is_word(param_3,1);
  if ((iVar1 != 0) || (iVar1 = BN_is_zero(param_3), iVar1 != 0)) {
    local_88 = (BIGNUM *)0x0;
    *param_5 = 1;
    goto LAB_001002d4;
  }
  *param_5 = 0;
  iVar1 = BN_get_flags(param_2,4);
  if ((iVar1 == 0) && (iVar1 = BN_get_flags(param_3,4), iVar1 == 0)) {
    BN_CTX_start(param_4);
    pBVar8 = BN_CTX_get(param_4);
    pBVar4 = BN_CTX_get(param_4);
    pBVar5 = BN_CTX_get(param_4);
    pBVar7 = BN_CTX_get(param_4);
    pBVar3 = BN_CTX_get(param_4);
    local_98 = BN_CTX_get(param_4);
    pBVar6 = BN_CTX_get(param_4);
    local_90 = pBVar6;
    if (pBVar6 == (BIGNUM *)0x0) {
LAB_0010053f:
      if (param_1 == (BIGNUM *)0x0) {
LAB_0010054b:
        BN_free(local_90);
      }
      goto LAB_00100311;
    }
    if (param_1 == (BIGNUM *)0x0) {
      local_90 = BN_new();
      if (local_90 == (BIGNUM *)0x0) {
        local_90 = (BIGNUM *)0x0;
      }
      else {
        iVar1 = BN_set_word(pBVar5,1);
        local_88 = local_90;
        if (iVar1 != 0) goto LAB_001003b8;
      }
      goto LAB_0010054b;
    }
    iVar1 = BN_set_word(pBVar5,1);
    local_88 = param_1;
    if (iVar1 == 0) goto LAB_00100311;
LAB_001003b8:
    BN_zero_ex(local_98);
    pBVar9 = BN_copy(pBVar4,param_2);
    if (((pBVar9 == (BIGNUM *)0x0) || (pBVar9 = BN_copy(pBVar8,param_3), pBVar9 == (BIGNUM *)0x0))
       || (((pBVar8->neg = 0, pBVar4->neg != 0 || (iVar1 = BN_ucmp(pBVar4,pBVar8), -1 < iVar1)) &&
           (iVar1 = BN_nnmod(pBVar4,pBVar4,pBVar8,param_4), iVar1 == 0)))) {
LAB_00100535:
      local_90 = local_88;
      goto LAB_0010053f;
    }
    iVar1 = BN_is_odd(param_3);
    if ((iVar1 != 0) && (iVar1 = BN_num_bits(param_3), iVar1 < 0x801)) {
      do {
        iVar1 = BN_is_zero(pBVar4);
        if (iVar1 != 0) goto LAB_00100954;
        iVar1 = 0;
        while (iVar2 = BN_is_bit_set(pBVar4,iVar1), iVar2 == 0) {
          iVar1 = iVar1 + 1;
          iVar2 = BN_is_odd(pBVar5);
          if (((iVar2 != 0) && (iVar2 = BN_uadd(pBVar5,pBVar5,param_3), iVar2 == 0)) ||
             (iVar2 = BN_rshift1(pBVar5,pBVar5), iVar2 == 0)) goto LAB_00100535;
        }
        iVar2 = 0;
        if (iVar1 != 0) {
          iVar1 = BN_rshift(pBVar4,pBVar4,iVar1);
          goto joined_r0x00100992;
        }
        while (iVar1 = BN_is_bit_set(pBVar8,iVar2), iVar1 == 0) {
          iVar2 = iVar2 + 1;
          iVar1 = BN_is_odd(local_98);
          if ((iVar1 != 0) && (iVar1 = BN_uadd(local_98,local_98,param_3), iVar1 == 0))
          goto LAB_00100535;
          iVar1 = BN_rshift1(local_98,local_98);
joined_r0x00100992:
          if (iVar1 == 0) goto LAB_00100535;
        }
        if ((iVar2 != 0) && (iVar1 = BN_rshift(pBVar8,pBVar8,iVar2), iVar1 == 0)) break;
        iVar1 = BN_ucmp(pBVar4,pBVar8);
        if (iVar1 < 0) {
          iVar1 = BN_uadd(local_98,local_98,pBVar5);
          if (iVar1 == 0) break;
          iVar1 = BN_usub(pBVar8,pBVar8,pBVar4);
        }
        else {
          iVar1 = BN_uadd(pBVar5,pBVar5,local_98);
          if (iVar1 == 0) break;
          iVar1 = BN_usub(pBVar4,pBVar4,pBVar8);
        }
      } while (iVar1 != 0);
      goto LAB_00100535;
    }
    local_68 = -1;
    pBVar9 = pBVar8;
    while (a = pBVar5, pBVar5 = pBVar3, pBVar8 = pBVar9, iVar1 = BN_is_zero(pBVar4), iVar1 == 0) {
      iVar1 = BN_num_bits(pBVar8);
      iVar2 = BN_num_bits(pBVar4);
      if (iVar1 == iVar2) {
LAB_00100598:
        iVar1 = BN_set_word(pBVar7,1);
        if (iVar1 == 0) goto LAB_00100535;
        iVar1 = BN_sub(pBVar5,pBVar8,pBVar4);
      }
      else {
        iVar1 = BN_num_bits(pBVar8);
        iVar2 = BN_num_bits(pBVar4);
        if (iVar1 == iVar2 + 1) {
          iVar1 = BN_lshift1(pBVar6,pBVar4);
          if (iVar1 == 0) goto LAB_00100535;
          iVar1 = BN_ucmp(pBVar8,pBVar6);
          if (iVar1 < 0) goto LAB_00100598;
          iVar1 = BN_sub(pBVar5,pBVar8,pBVar6);
          if ((iVar1 == 0) || (iVar1 = BN_add(pBVar7,pBVar6,pBVar4), iVar1 == 0)) goto LAB_00100535;
          iVar1 = BN_ucmp(pBVar8,pBVar7);
          if (iVar1 < 0) {
            iVar1 = BN_set_word(pBVar7,2);
          }
          else {
            iVar1 = BN_set_word(pBVar7,3);
            if (iVar1 == 0) goto LAB_00100535;
            iVar1 = BN_sub(pBVar5,pBVar5,pBVar4);
          }
        }
        else {
          iVar1 = BN_div(pBVar7,pBVar5,pBVar8,pBVar4,param_4);
        }
      }
      if (iVar1 == 0) goto LAB_00100535;
      iVar1 = BN_is_one(pBVar7);
      if (iVar1 == 0) {
        iVar1 = BN_is_word(pBVar7,2);
        if (iVar1 == 0) {
          iVar1 = BN_is_word(pBVar7,4);
          if (iVar1 == 0) {
            if (pBVar7->top == 1) {
              pBVar3 = BN_copy(pBVar8,a);
              if (pBVar3 == (BIGNUM *)0x0) goto LAB_00100535;
              iVar1 = BN_mul_word(pBVar8,*pBVar7->d);
            }
            else {
              iVar1 = BN_mul(pBVar8,pBVar7,a,param_4);
            }
          }
          else {
            iVar1 = BN_lshift(pBVar8,a,2);
          }
        }
        else {
          iVar1 = BN_lshift1(pBVar8,a);
        }
        if (iVar1 == 0) goto LAB_00100535;
        iVar1 = BN_add(pBVar8,pBVar8,local_98);
      }
      else {
        iVar1 = BN_add(pBVar8,a,local_98);
      }
      if (iVar1 == 0) goto LAB_00100535;
      local_68 = -local_68;
      pBVar9 = pBVar4;
      pBVar3 = local_98;
      pBVar4 = pBVar5;
      pBVar5 = pBVar8;
      local_98 = a;
    }
    if (local_68 < 0) {
LAB_00100954:
      iVar1 = BN_sub(local_98,param_3,local_98);
      if (iVar1 == 0) goto LAB_00100535;
    }
    iVar1 = BN_is_one(pBVar8);
    if (iVar1 == 0) {
      *param_5 = 1;
      goto LAB_00100535;
    }
    if ((local_98->neg == 0) && (iVar1 = BN_ucmp(local_98,param_3), iVar1 < 0)) {
      pBVar3 = BN_copy(local_88,local_98);
      if (pBVar3 == (BIGNUM *)0x0) goto LAB_00100535;
    }
    else {
      iVar1 = BN_nnmod(local_88,local_98,param_3,param_4);
      if (iVar1 == 0) goto LAB_00100535;
    }
  }
  else {
    BN_CTX_start(param_4);
    pBVar3 = BN_CTX_get(param_4);
    pBVar4 = BN_CTX_get(param_4);
    pBVar5 = BN_CTX_get(param_4);
    pBVar6 = BN_CTX_get(param_4);
    pBVar7 = BN_CTX_get(param_4);
    pBVar8 = BN_CTX_get(param_4);
    local_88 = BN_CTX_get(param_4);
    if (local_88 == (BIGNUM *)0x0) {
LAB_00100305:
      if (param_1 != (BIGNUM *)0x0) goto LAB_00100311;
    }
    else {
      if (param_1 != (BIGNUM *)0x0) {
        iVar1 = BN_set_word(pBVar5,1);
        local_88 = param_1;
        if (iVar1 == 0) goto LAB_00100311;
LAB_0010011f:
        BN_zero_ex(pBVar8);
        pBVar9 = BN_copy(pBVar4,param_2);
        if ((pBVar9 != (BIGNUM *)0x0) && (pBVar9 = BN_copy(pBVar3,param_3), pBVar9 != (BIGNUM *)0x0)
           ) {
          pBVar3->neg = 0;
          if ((pBVar4->neg != 0) || (iVar1 = BN_ucmp(pBVar4,pBVar3), -1 < iVar1)) {
            bn_init(&local_58);
            BN_with_flags(&local_58,pBVar4,4);
            iVar1 = BN_nnmod(pBVar4,&local_58,pBVar3,param_4);
            if (iVar1 == 0) goto LAB_00100305;
          }
          local_68 = -1;
          while (pBVar9 = pBVar8, pBVar8 = pBVar5, pBVar5 = pBVar3, iVar1 = BN_is_zero(pBVar4),
                iVar1 == 0) {
            bn_init(&local_58);
            BN_with_flags(&local_58,pBVar5,4);
            iVar1 = BN_div(pBVar6,pBVar7,&local_58,pBVar4,param_4);
            if (((iVar1 == 0) || (iVar1 = BN_mul(pBVar5,pBVar6,pBVar8,param_4), iVar1 == 0)) ||
               (iVar1 = BN_add(pBVar5,pBVar5,pBVar9), iVar1 == 0)) goto LAB_00100305;
            local_68 = -local_68;
            pBVar3 = pBVar4;
            pBVar4 = pBVar7;
            pBVar7 = pBVar9;
          }
          if ((-1 < local_68) || (iVar1 = BN_sub(pBVar9,param_3,pBVar9), iVar1 != 0)) {
            iVar1 = BN_is_one(pBVar5);
            if (iVar1 == 0) {
              *param_5 = 1;
            }
            else if ((pBVar9->neg == 0) && (iVar1 = BN_ucmp(pBVar9,param_3), iVar1 < 0)) {
              pBVar3 = BN_copy(local_88,pBVar9);
              if (pBVar3 != (BIGNUM *)0x0) {
LAB_001002ae:
                *param_5 = 0;
                goto LAB_0010031a;
              }
            }
            else {
              iVar1 = BN_nnmod(local_88,pBVar9,param_3,param_4);
              if (iVar1 != 0) goto LAB_001002ae;
            }
          }
        }
        goto LAB_00100305;
      }
      local_88 = BN_new();
      if ((local_88 != (BIGNUM *)0x0) && (iVar1 = BN_set_word(pBVar5,1), iVar1 != 0))
      goto LAB_0010011f;
    }
    BN_free(local_88);
LAB_00100311:
    local_88 = (BIGNUM *)0x0;
  }
LAB_0010031a:
  BN_CTX_end(param_4);
LAB_001002d4:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_88;
}



/* WARNING: Removing unreachable block (ram,0x00100a60) */

BIGNUM * BN_mod_inverse(BIGNUM *ret,BIGNUM *a,BIGNUM *n,BN_CTX *ctx)

{
  long lVar1;
  BIGNUM *pBVar2;
  BN_CTX *c;
  long in_FS_OFFSET;
  
  c = (BN_CTX *)0x0;
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if ((ctx == (BN_CTX *)0x0) && (c = (BN_CTX *)BN_CTX_new_ex(0), c == (BN_CTX *)0x0)) {
    ERR_new();
    pBVar2 = (BIGNUM *)0x0;
    ERR_set_debug("crypto/bn/bn_gcd.c",0x20e,"BN_mod_inverse");
    ERR_set_error(3,0x80003,0);
  }
  else {
    pBVar2 = (BIGNUM *)int_bn_mod_inverse(ret);
    BN_CTX_free(c);
  }
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pBVar2;
}



bool BN_are_coprime(BIGNUM *param_1,BIGNUM *param_2,BN_CTX *param_3)

{
  BIGNUM *pBVar1;
  bool bVar2;
  
  bVar2 = false;
  BN_CTX_start(param_3);
  pBVar1 = BN_CTX_get(param_3);
  if (pBVar1 != (BIGNUM *)0x0) {
    ERR_set_mark();
    BN_set_flags(param_1,4);
    pBVar1 = BN_mod_inverse(pBVar1,param_1,param_2,param_3);
    bVar2 = pBVar1 != (BIGNUM *)0x0;
    ERR_pop_to_mark();
  }
  BN_CTX_end(param_3);
  return bVar2;
}



int BN_gcd(BIGNUM *r,BIGNUM *a,BIGNUM *b,BN_CTX *ctx)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  BIGNUM *pBVar5;
  BIGNUM *r_00;
  ulong uVar6;
  long lVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  uint uVar13;
  int local_44;
  
  iVar1 = BN_is_zero(b);
  pBVar5 = a;
  if ((iVar1 == 0) && (iVar1 = BN_is_zero(a), pBVar5 = b, iVar1 == 0)) {
    BN_CTX_start(ctx);
    pBVar5 = BN_CTX_get(ctx);
    r_00 = BN_CTX_get(ctx);
    uVar12 = 0;
    if ((r_00 != (BIGNUM *)0x0) &&
       ((iVar1 = BN_lshift1(r_00,b), iVar1 != 0 && (iVar1 = BN_lshift1(r,a), iVar1 != 0)))) {
      if (r->dmax < 1) {
        iVar1 = 0;
        uVar6 = 0xffffffffffffffff;
      }
      else {
        iVar1 = 0;
        lVar7 = 0;
        uVar11 = 1;
        uVar6 = 0;
        do {
          if (r_00->dmax <= (int)lVar7) break;
          uVar9 = r->d[lVar7] | r_00->d[lVar7];
          lVar7 = lVar7 + 1;
          uVar10 = (long)(~uVar11 & uVar11 - 1) >> 0x3f;
          uVar11 = uVar11 & (long)(~uVar9 & uVar9 - 1) >> 0x3f;
          iVar1 = iVar1 + (int)uVar11;
          uVar6 = uVar10 & uVar6 | uVar9 & ~uVar10;
        } while (lVar7 != r->dmax);
        uVar6 = ~uVar6;
        iVar1 = iVar1 << 6;
      }
      iVar8 = 0x40;
      uVar11 = 1;
      do {
        uVar11 = uVar11 & uVar6;
        uVar6 = uVar6 >> 1;
        iVar1 = iVar1 + (int)uVar11;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
      iVar8 = BN_rshift(r,r,iVar1);
      if ((iVar8 != 0) && (iVar8 = BN_rshift(r_00,r_00,iVar1), iVar8 != 0)) {
        iVar8 = r->top;
        if (r->top < r_00->top) {
          iVar8 = r_00->top;
        }
        iVar8 = iVar8 + 1;
        lVar7 = bn_wexpand(r,iVar8);
        if (((lVar7 != 0) && (lVar7 = bn_wexpand(r_00,iVar8), lVar7 != 0)) &&
           (lVar7 = bn_wexpand(pBVar5,iVar8), lVar7 != 0)) {
          BN_consttime_swap(~(uint)*r->d & 1,r,r_00,iVar8);
          iVar2 = BN_num_bits(r);
          iVar3 = BN_num_bits(r_00);
          local_44 = 0;
          if (iVar2 < iVar3) {
            iVar2 = iVar3;
          }
          uVar13 = 1;
          if (-4 < iVar2 * 3) {
            do {
              uVar4 = ~(r_00->top - 1U >> 0x1f) & (uint)*r_00->d & -uVar13 >> 0x1f;
              r->neg = r->neg ^ uVar4;
              BN_consttime_swap(uVar4,r,r_00,iVar8);
              uVar13 = (-uVar13 & -uVar4 | uVar4 - 1 & uVar13) + 1;
              iVar3 = BN_add(pBVar5,r_00,r);
              if (iVar3 == 0) goto LAB_00100bf0;
              BN_consttime_swap(~(r_00->top - 1U >> 0x1f) & (uint)*r_00->d & 1,r_00,pBVar5,iVar8);
              iVar3 = BN_rshift1(r_00,r_00);
              if (iVar3 == 0) goto LAB_00100bf0;
              local_44 = local_44 + 1;
            } while (local_44 != iVar2 * 3 + 4);
          }
          r->neg = 0;
          iVar1 = BN_lshift(r,r,iVar1);
          if (iVar1 != 0) {
            iVar1 = BN_rshift1(r,r);
            uVar12 = (uint)(iVar1 != 0);
          }
        }
      }
    }
LAB_00100bf0:
    BN_CTX_end(ctx);
  }
  else {
    pBVar5 = BN_copy(r,pBVar5);
    r->neg = 0;
    uVar12 = (uint)(pBVar5 != (BIGNUM *)0x0);
  }
  return uVar12;
}


