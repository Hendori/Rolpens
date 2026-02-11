
undefined1 * ossl_bn_get0_small_factors(void)

{
  return _bignum_small_prime_factors;
}



int BN_GENCB_call(BN_GENCB *cb,int a,int b)

{
  int iVar1;
  
  if (cb != (BN_GENCB *)0x0) {
    if (cb->ver != 1) {
      if (cb->ver != 2) {
        return 0;
      }
                    /* WARNING: Could not recover jumptable at 0x00100037. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar1 = (*(cb->cb).cb_1)(a,b,cb);
      return iVar1;
    }
    if ((cb->cb).cb_1 != (_func_414 *)0x0) {
      (*(cb->cb).cb_1)(a,b,cb->arg);
      return 1;
    }
  }
  return 1;
}



undefined4
ossl_bn_miller_rabin_is_prime
          (BIGNUM *param_1,int param_2,BN_CTX *param_3,BN_GENCB *param_4,int param_5,int *param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  BIGNUM *r;
  BIGNUM *a;
  BIGNUM *a_00;
  BIGNUM *a_01;
  BIGNUM *r_00;
  BIGNUM *r_01;
  BIGNUM *a_02;
  BIGNUM *pBVar4;
  undefined4 uVar5;
  int local_94;
  BN_MONT_CTX *local_80;
  int local_58;
  
  iVar1 = BN_is_odd();
  if (iVar1 == 0) {
    return 0;
  }
  BN_CTX_start(param_3);
  r = BN_CTX_get(param_3);
  a = BN_CTX_get(param_3);
  a_00 = BN_CTX_get(param_3);
  a_01 = BN_CTX_get(param_3);
  r_00 = BN_CTX_get(param_3);
  r_01 = BN_CTX_get(param_3);
  a_02 = BN_CTX_get(param_3);
  if (((((a_02 != (BIGNUM *)0x0) && (pBVar4 = BN_copy(a,param_1), pBVar4 != (BIGNUM *)0x0)) &&
       (iVar1 = BN_sub_word(a,1), iVar1 != 0)) &&
      ((pBVar4 = BN_copy(a_00,param_1), pBVar4 != (BIGNUM *)0x0 &&
       (iVar1 = BN_sub_word(a_00,3), iVar1 != 0)))) &&
     ((iVar1 = BN_is_zero(a_00), iVar1 == 0 && (iVar1 = BN_is_negative(a_00), iVar1 == 0)))) {
    iVar1 = 1;
    while (iVar2 = BN_is_bit_set(a,iVar1), iVar2 == 0) {
      iVar1 = iVar1 + 1;
    }
    iVar2 = BN_rshift(r_00,a,iVar1);
    if ((iVar2 != 0) && (local_80 = BN_MONT_CTX_new(), local_80 != (BN_MONT_CTX *)0x0)) {
      iVar2 = BN_MONT_CTX_set(local_80,param_1,param_3);
      uVar5 = 0;
      if (iVar2 == 0) goto LAB_00100149;
      if (param_2 == 0) {
        iVar2 = BN_num_bits(param_1);
        local_94 = 0x80;
        if (iVar2 < 0x801) {
          local_94 = 0x40;
        }
LAB_00100295:
        local_58 = 0;
        do {
          iVar2 = BN_priv_rand_range_ex(a_02,a_00,0,param_3);
          if ((iVar2 == 0) || (iVar2 = BN_add_word(a_02,2), iVar2 == 0)) goto LAB_00100149;
          if (param_5 != 0) {
            iVar2 = BN_gcd(r,a_02,param_1,param_3);
            if (iVar2 == 0) goto LAB_00100149;
            iVar2 = BN_is_one(r);
            if (iVar2 != 0) goto LAB_00100320;
LAB_0010056e:
            param_5 = 1;
            goto LAB_001003a5;
          }
LAB_00100320:
          iVar2 = BN_mod_exp_mont(r_01,a_02,r_00,param_1,param_3,local_80);
          if (iVar2 == 0) goto LAB_00100149;
          iVar2 = BN_is_one(r_01);
          if ((iVar2 == 0) && (iVar2 = BN_cmp(r_01,a), iVar2 != 0)) {
            if (iVar1 == 1) {
LAB_00100492:
              pBVar4 = BN_copy(a_01,r_01);
              if (((pBVar4 == (BIGNUM *)0x0) ||
                  (iVar1 = BN_mod_mul(r_01,a_01,a_01,param_1,param_3), iVar1 == 0)) ||
                 ((iVar1 = BN_is_one(r_01), iVar1 == 0 &&
                  (pBVar4 = BN_copy(a_01,r_01), pBVar4 == (BIGNUM *)0x0)))) goto LAB_00100149;
LAB_00100509:
              if (param_5 == 0) goto LAB_001003a5;
              iVar1 = BN_sub_word(a_01,1);
              if ((iVar1 == 0) || (iVar1 = BN_gcd(r,a_01,param_1,param_3), iVar1 == 0))
              goto LAB_00100149;
              param_5 = 2;
              iVar1 = BN_is_one(r);
              if (iVar1 == 0) goto LAB_0010056e;
              goto LAB_001003a5;
            }
            iVar2 = 1;
            while( true ) {
              pBVar4 = BN_copy(a_01,r_01);
              if ((pBVar4 == (BIGNUM *)0x0) ||
                 (iVar3 = BN_mod_mul(r_01,a_01,a_01,param_1,param_3), iVar3 == 0))
              goto LAB_00100149;
              iVar3 = BN_cmp(r_01,a);
              if (iVar3 == 0) break;
              iVar3 = BN_is_one(r_01);
              if (iVar3 != 0) goto LAB_00100509;
              iVar2 = iVar2 + 1;
              if (iVar1 == iVar2) goto LAB_00100492;
            }
          }
          iVar2 = BN_GENCB_call(param_4,1,local_58);
          if (iVar2 == 0) goto LAB_00100149;
          local_58 = local_58 + 1;
        } while (local_58 < local_94);
      }
      else {
        local_94 = param_2;
        if (0 < param_2) goto LAB_00100295;
      }
      param_5 = 3;
LAB_001003a5:
      *param_6 = param_5;
      uVar5 = 1;
      goto LAB_00100149;
    }
  }
  local_80 = (BN_MONT_CTX *)0x0;
  uVar5 = 0;
LAB_00100149:
  BN_clear(r);
  BN_clear(a);
  BN_clear(a_00);
  BN_clear(a_01);
  BN_clear(r_00);
  BN_clear(r_01);
  BN_clear(a_02);
  BN_CTX_end(param_3);
  BN_MONT_CTX_free(local_80);
  return uVar5;
}



ulong bn_is_prime_int(BIGNUM *param_1,undefined4 param_2,BN_CTX *param_3,int param_4,
                     BN_GENCB *param_5)

{
  int iVar1;
  int iVar2;
  BIGNUM *b;
  ulong uVar3;
  ulong uVar4;
  BN_CTX *c;
  ushort *puVar5;
  long in_FS_OFFSET;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  b = BN_value_one();
  iVar1 = BN_cmp(param_1,b);
  if (iVar1 < 1) {
    uVar4 = 0;
  }
  else {
    iVar1 = BN_is_odd(param_1);
    if (iVar1 == 0) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar4 = 2;
LAB_001006c9:
        uVar4 = BN_is_word(param_1,uVar4);
        return uVar4;
      }
      goto LAB_001007f0;
    }
    iVar1 = BN_is_word(param_1,3);
    if (iVar1 == 0) {
      if (param_4 != 0) {
        iVar2 = BN_num_bits(param_1);
        iVar1 = 0x40;
        if (((0x200 < iVar2) && (iVar1 = 0x80, 0x400 < iVar2)) && (iVar1 = 0x180, 0x800 < iVar2)) {
          iVar1 = 0x400;
          if (0x1000 < iVar2) {
            iVar1 = 0x800;
          }
        }
        puVar5 = (ushort *)(primes + 2);
        do {
          uVar4 = (ulong)*puVar5;
          uVar3 = BN_mod_word(param_1,uVar4);
          if (uVar3 == 0xffffffffffffffff) goto LAB_0010076c;
          if (uVar3 == 0) {
            if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) goto LAB_001006c9;
            goto LAB_001007f0;
          }
          puVar5 = puVar5 + 1;
        } while (puVar5 != (ushort *)(primes + (ulong)(iVar1 - 2) * 2 + 4));
        iVar1 = BN_GENCB_call(param_5,1,-1);
        if (iVar1 == 0) {
LAB_0010076c:
          uVar4 = 0xffffffff;
          goto LAB_0010068a;
        }
      }
      c = (BN_CTX *)0x0;
      if ((param_3 == (BN_CTX *)0x0) &&
         (param_3 = BN_CTX_new(), c = param_3, param_3 == (BN_CTX *)0x0)) {
        c = (BN_CTX *)0x0;
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = 0xffffffff;
        iVar1 = ossl_bn_miller_rabin_is_prime(param_1,param_2,param_3,param_5,0,&local_44);
        if (iVar1 != 0) {
          uVar4 = (ulong)(local_44 == 3);
        }
      }
      BN_CTX_free(c);
    }
    else {
      uVar4 = 1;
    }
  }
LAB_0010068a:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
LAB_001007f0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8
BN_generate_prime_ex2
          (BIGNUM *param_1,int param_2,int param_3,BIGNUM *param_4,BIGNUM *param_5,BN_GENCB *param_6
          ,BN_CTX *param_7)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  void *ptr;
  BIGNUM *r;
  BIGNUM *rem;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  bool bVar9;
  ushort *puVar10;
  int iVar11;
  ushort *puVar12;
  bool bVar13;
  bool bVar14;
  int local_a8;
  ulong local_68;
  ulong local_58;
  
  if (param_2 < 0x801) {
    if (param_2 < 2) {
      ERR_new();
      uVar8 = 0x87;
LAB_00101170:
      ERR_set_debug("crypto/bn/bn_prime.c",uVar8,"BN_generate_prime_ex2");
      ERR_set_error(3,0x76,0);
      return 0;
    }
    bVar13 = param_4 == (BIGNUM *)0x0;
    bVar14 = param_3 != 0;
    bVar9 = bVar13 && bVar14;
    if (bVar13 && bVar14) {
      if ((param_2 < 6) && (param_2 != 3)) {
        ERR_new();
        uVar8 = 0x8f;
        goto LAB_00101170;
      }
      iVar11 = 0x40;
      bVar13 = bVar9;
      bVar14 = bVar9;
    }
    else {
      iVar11 = 0x40;
    }
  }
  else {
    bVar13 = param_4 == (BIGNUM *)0x0;
    iVar11 = 0x80;
    bVar14 = param_3 != 0;
  }
  ptr = (void *)CRYPTO_zalloc(0x1000,"crypto/bn/bn_prime.c",0x93);
  if (ptr == (void *)0x0) {
    return 0;
  }
  BN_CTX_start(param_7);
  r = BN_CTX_get(param_7);
  if (r != (BIGNUM *)0x0) {
    local_a8 = 0;
    iVar2 = local_a8;
LAB_001008d7:
    local_a8 = iVar2;
    if (bVar13) {
      if (param_2 < 0x201) {
        local_58 = 0xfffffffffffffec8;
        uVar1 = 0x40;
      }
      else if (param_2 < 0x401) {
        local_58 = 0xfffffffffffffd30;
        uVar1 = 0x80;
      }
      else if (param_2 < 0x801) {
        local_58 = 0xfffffffffffff59e;
        uVar1 = 0x180;
      }
      else {
        local_58 = 0xffffffffffffba38;
        if (param_2 < 0x1001) {
          local_58 = 0xffffffffffffe01e;
        }
        uVar1 = 0x400;
        if (0x1000 < param_2) {
          uVar1 = 0x800;
        }
      }
LAB_00100b3b:
      do {
        iVar2 = BN_priv_rand_ex(param_1,param_2,1,1,0,param_7);
        if ((iVar2 == 0) || ((bVar14 && (iVar2 = BN_set_bit(param_1,1), iVar2 == 0))))
        goto LAB_00100a94;
        puVar12 = (ushort *)(primes + 2);
        puVar10 = (ushort *)((long)ptr + 2);
        do {
          uVar5 = BN_mod_word(param_1,(ulong)*puVar12);
          if (uVar5 == 0xffffffffffffffff) goto LAB_00100a94;
          puVar12 = puVar12 + 1;
          *puVar10 = (ushort)uVar5;
          puVar10 = puVar10 + 1;
        } while (puVar12 != (ushort *)(primes + (ulong)(uVar1 - 2) * 2 + 4));
        uVar5 = 0;
        if (param_2 < 0x20) goto LAB_00100c42;
        if (bVar14) goto LAB_00100cfa;
        while( true ) {
          uVar7 = 1;
          uVar6 = 3;
          while ((*(ushort *)((long)ptr + uVar7 * 2) + uVar5) % uVar6 != 0) {
            uVar7 = uVar7 + 1;
            if (uVar1 == uVar7) goto LAB_00100d8c;
            uVar6 = (ulong)*(ushort *)(primes + uVar7 * 2);
          }
          uVar5 = uVar5 + 2;
          if (local_58 < uVar5) break;
          while ((uVar5 < 0x80000000 && (param_2 < 0x20))) {
LAB_00100c42:
            while( true ) {
              uVar7 = 3;
              puVar12 = (ushort *)(primes + 4);
              puVar10 = (ushort *)((long)ptr + 2);
              while( true ) {
                uVar6 = BN_get_word(param_1);
                if (uVar6 + uVar5 < uVar7 * uVar7) goto LAB_00100d8c;
                uVar7 = (*puVar10 + uVar5) % uVar7;
                if (bVar14) {
                  bVar9 = uVar7 < 2;
                }
                else {
                  bVar9 = uVar7 == 0;
                }
                if (bVar9) break;
                puVar10 = puVar10 + 1;
                if (puVar12 == (ushort *)(primes + (ulong)(uVar1 - 2) * 2 + 4)) goto LAB_00100d8c;
                uVar7 = (ulong)*puVar12;
                puVar12 = puVar12 + 1;
              }
              if (!bVar14) break;
              uVar5 = uVar5 + 4;
              if (0x7fffffff < uVar5) {
LAB_00100cfa:
                do {
                  uVar6 = 1;
                  uVar7 = 3;
                  while (1 < (*(ushort *)((long)ptr + uVar6 * 2) + uVar5) % uVar7) {
                    uVar6 = uVar6 + 1;
                    if (uVar1 == uVar6) goto LAB_00100d8c;
                    uVar7 = (ulong)*(ushort *)(primes + uVar6 * 2);
                  }
                  uVar5 = uVar5 + 4;
                  if (local_58 < uVar5) goto LAB_00100b3b;
                } while ((0x7fffffff < uVar5) || (param_2 >= 0x20));
              }
            }
            uVar5 = uVar5 + 2;
          }
        }
      } while( true );
    }
    if (param_2 < 0x201) {
      local_68 = 0xfffffffffffffec8;
      uVar1 = 0x40;
    }
    else if (param_2 < 0x401) {
      local_68 = 0xfffffffffffffd30;
      uVar1 = 0x80;
    }
    else if (param_2 < 0x801) {
      local_68 = 0xfffffffffffff59e;
      uVar1 = 0x180;
    }
    else {
      local_68 = 0xffffffffffffba38;
      if (param_2 < 0x1001) {
        local_68 = 0xffffffffffffe01e;
      }
      uVar1 = 0x800;
      if (param_2 < 0x1001) {
        uVar1 = 0x400;
      }
    }
    BN_CTX_start(param_7);
    rem = BN_CTX_get(param_7);
    if (rem != (BIGNUM *)0x0) {
      uVar5 = BN_get_word(param_4);
      if (CARRY8(uVar5,local_68)) {
        local_68 = BN_get_word(param_4);
        local_68 = ~local_68;
      }
      while (((iVar2 = BN_rand_ex(param_1,param_2,0,1,0,param_7), iVar2 != 0 &&
              (iVar2 = BN_div((BIGNUM *)0x0,rem,param_1,param_4,param_7), iVar2 != 0)) &&
             (iVar2 = BN_sub(param_1,param_1,rem), iVar2 != 0))) {
        if (param_5 == (BIGNUM *)0x0) {
          iVar2 = BN_add_word(param_1,(-(ulong)!bVar14 & 0xfffffffffffffffe) + 3);
        }
        else {
          iVar2 = BN_add(param_1,param_1,param_5);
        }
        if ((iVar2 == 0) ||
           (((iVar2 = BN_num_bits(param_1), iVar2 < param_2 ||
             (uVar5 = BN_get_word(param_1), uVar5 < (-(ulong)!bVar14 & 0xfffffffffffffffe) + 5)) &&
            (iVar2 = BN_add(param_1,param_1,param_4), iVar2 == 0)))) break;
        puVar12 = (ushort *)(primes + 2);
        puVar10 = (ushort *)((long)ptr + 2);
        do {
          uVar5 = BN_mod_word(param_1,(ulong)*puVar12);
          if (uVar5 == 0xffffffffffffffff) goto LAB_00100a87;
          puVar12 = puVar12 + 1;
          *puVar10 = (ushort)uVar5;
          puVar10 = puVar10 + 1;
        } while (puVar12 != (ushort *)(primes + (ulong)(uVar1 - 2) * 2 + 4));
        uVar5 = 0;
        do {
          if ((uVar5 < 0x80000000) && (param_2 < 0x20)) {
            puVar12 = (ushort *)(primes + 4);
            uVar7 = 3;
            puVar10 = (ushort *)((long)ptr + 2);
            while( true ) {
              uVar6 = BN_get_word(param_1);
              if (uVar6 + uVar5 < uVar7 * uVar7) goto LAB_00100f68;
              uVar7 = (*puVar10 + uVar5) % uVar7;
              if (bVar14) {
                bVar9 = uVar7 < 2;
              }
              else {
                bVar9 = uVar7 == 0;
              }
              if (bVar9) break;
              puVar10 = puVar10 + 1;
              if (puVar12 == (ushort *)(primes + (ulong)(uVar1 - 2) * 2 + 4)) goto LAB_00100f68;
              uVar7 = (ulong)*puVar12;
              puVar12 = puVar12 + 1;
            }
          }
          else {
            uVar6 = 1;
            uVar7 = 3;
            if (bVar14) {
              while (1 < (*(ushort *)((long)ptr + uVar6 * 2) + uVar5) % uVar7) {
                uVar6 = uVar6 + 1;
                if (uVar6 == uVar1) goto LAB_00100f68;
                uVar7 = (ulong)*(ushort *)(primes + uVar6 * 2);
              }
            }
            else {
              while ((*(ushort *)((long)ptr + uVar6 * 2) + uVar5) % uVar7 != 0) {
                uVar6 = uVar6 + 1;
                if (uVar6 == uVar1) goto LAB_00100f68;
                uVar7 = (ulong)*(ushort *)(primes + uVar6 * 2);
              }
            }
          }
          uVar7 = BN_get_word(param_4);
          uVar5 = uVar5 + uVar7;
        } while (uVar5 <= local_68);
      }
    }
    goto LAB_00100a87;
  }
LAB_00100a94:
  uVar8 = 0;
  goto LAB_00100a96;
LAB_00100d8c:
  iVar2 = BN_add_word(param_1,uVar5);
  if (iVar2 == 0) goto LAB_00100a94;
  iVar2 = BN_num_bits(param_1);
  if (param_2 == iVar2) goto LAB_00100f93;
  goto LAB_00100b3b;
LAB_00100f68:
  iVar2 = BN_add_word(param_1,uVar5);
  if (iVar2 == 0) {
LAB_00100a87:
    BN_CTX_end(param_7);
    goto LAB_00100a94;
  }
  BN_CTX_end(param_7);
LAB_00100f93:
  iVar2 = local_a8 + 1;
  iVar3 = BN_GENCB_call(param_6,0,local_a8);
  if (iVar3 == 0) goto LAB_00100a94;
  if (param_3 != 0) {
    iVar3 = BN_rshift1(r,param_1);
    if (iVar3 == 0) goto LAB_00100a94;
    iVar3 = 0;
    while( true ) {
      iVar4 = bn_is_prime_int(param_1,1,param_7,0);
      if (iVar4 == -1) goto LAB_00100a94;
      if (iVar4 == 0) break;
      iVar4 = bn_is_prime_int(r,1,param_7,0);
      if (iVar4 == -1) goto LAB_00100a94;
      if (iVar4 == 0) break;
      iVar4 = BN_GENCB_call(param_6,2,local_a8);
      if (iVar4 == 0) goto LAB_00100a94;
      iVar3 = iVar3 + 1;
      if (iVar3 == iVar11) goto LAB_001011b8;
    }
    goto LAB_001008d7;
  }
  iVar3 = bn_is_prime_int(param_1,iVar11,param_7,0);
  if (iVar3 == -1) goto LAB_00100a94;
  if (iVar3 == 0) goto LAB_001008d7;
LAB_001011b8:
  uVar8 = 1;
LAB_00100a96:
  CRYPTO_free(ptr);
  BN_CTX_end(param_7);
  return uVar8;
}



int BN_generate_prime_ex(BIGNUM *ret,int bits,int safe,BIGNUM *add,BIGNUM *rem,BN_GENCB *cb)

{
  int iVar1;
  BN_CTX *c;
  
  c = BN_CTX_new();
  iVar1 = 0;
  if (c != (BN_CTX *)0x0) {
    iVar1 = BN_generate_prime_ex2(ret,bits,safe,add,rem,cb,c);
    BN_CTX_free(c);
  }
  return iVar1;
}



ulong ossl_bn_check_generated_prime
                (BIGNUM *param_1,undefined4 param_2,BN_CTX *param_3,BN_GENCB *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  BIGNUM *b;
  ulong uVar4;
  ulong uVar5;
  BN_CTX *c;
  BN_CTX *pBVar6;
  ushort *puVar7;
  long in_FS_OFFSET;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  b = BN_value_one();
  iVar1 = BN_cmp(param_1,b);
  if (iVar1 < 1) {
    uVar5 = 0;
  }
  else {
    iVar1 = BN_is_odd(param_1);
    if (iVar1 == 0) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar5 = 2;
LAB_001013c9:
        uVar5 = BN_is_word(param_1,uVar5);
        return uVar5;
      }
      goto LAB_00101499;
    }
    iVar1 = BN_is_word(param_1,3);
    if (iVar1 == 0) {
      iVar2 = BN_num_bits(param_1);
      iVar1 = 0x40;
      if (((0x200 < iVar2) && (iVar1 = 0x80, 0x400 < iVar2)) && (iVar1 = 0x180, 0x800 < iVar2)) {
        iVar1 = 0x400;
        if (0x1000 < iVar2) {
          iVar1 = 0x800;
        }
      }
      puVar7 = (ushort *)(primes + 2);
      do {
        uVar5 = (ulong)*puVar7;
        uVar4 = BN_mod_word(param_1,uVar5);
        if (uVar4 == 0xffffffffffffffff) goto LAB_0010137b;
        if (uVar4 == 0) {
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) goto LAB_001013c9;
          goto LAB_00101499;
        }
        puVar7 = puVar7 + 1;
      } while (puVar7 != (ushort *)(primes + (ulong)(iVar1 - 2) * 2 + 4));
      iVar1 = BN_GENCB_call(param_4,1,-1);
      if (iVar1 == 0) {
LAB_0010137b:
        uVar5 = 0xffffffff;
      }
      else {
        c = (BN_CTX *)0x0;
        pBVar6 = c;
        if ((param_3 == (BN_CTX *)0x0) &&
           (param_3 = BN_CTX_new(), pBVar6 = param_3, param_3 == (BN_CTX *)0x0)) {
          uVar3 = 0xffffffff;
        }
        else {
          iVar1 = ossl_bn_miller_rabin_is_prime(param_1,param_2,param_3,param_4,0,&local_44);
          uVar3 = 0xffffffff;
          c = pBVar6;
          if (iVar1 != 0) {
            uVar3 = (uint)(local_44 == 3);
          }
        }
        BN_CTX_free(c);
        uVar5 = (ulong)uVar3;
      }
    }
    else {
      uVar5 = 1;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
LAB_00101499:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong ossl_bn_check_prime(BIGNUM *param_1,int param_2,BN_CTX *param_3,int param_4,BN_GENCB *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  BIGNUM *b;
  ulong uVar4;
  ulong uVar5;
  BN_CTX *c;
  ushort *puVar6;
  long in_FS_OFFSET;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = BN_num_bits(param_1);
  iVar2 = 0x80;
  if (iVar1 < 0x801) {
    iVar2 = 0x40;
  }
  b = BN_value_one();
  iVar1 = BN_cmp(param_1,b);
  if (iVar1 < 1) {
    uVar5 = 0;
  }
  else {
    iVar1 = BN_is_odd(param_1);
    if (iVar1 == 0) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar5 = 2;
LAB_001015b9:
        uVar5 = BN_is_word(param_1,uVar5);
        return uVar5;
      }
      goto LAB_001016e0;
    }
    iVar1 = BN_is_word(param_1,3);
    if (iVar1 == 0) {
      if (param_4 != 0) {
        iVar3 = BN_num_bits(param_1);
        iVar1 = 0x40;
        if (((0x200 < iVar3) && (iVar1 = 0x80, 0x400 < iVar3)) && (iVar1 = 0x180, 0x800 < iVar3)) {
          iVar1 = 0x400;
          if (0x1000 < iVar3) {
            iVar1 = 0x800;
          }
        }
        puVar6 = (ushort *)(primes + 2);
        do {
          uVar5 = (ulong)*puVar6;
          uVar4 = BN_mod_word(param_1,uVar5);
          if (uVar4 == 0xffffffffffffffff) goto LAB_0010165c;
          if (uVar4 == 0) {
            if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) goto LAB_001015b9;
            goto LAB_001016e0;
          }
          puVar6 = puVar6 + 1;
        } while (puVar6 != (ushort *)(primes + (ulong)(iVar1 - 2) * 2 + 4));
        iVar1 = BN_GENCB_call(param_5,1,-1);
        if (iVar1 == 0) {
LAB_0010165c:
          uVar5 = 0xffffffff;
          goto LAB_0010157a;
        }
      }
      c = (BN_CTX *)0x0;
      if ((param_3 == (BN_CTX *)0x0) &&
         (param_3 = BN_CTX_new(), c = param_3, param_3 == (BN_CTX *)0x0)) {
        c = (BN_CTX *)0x0;
        uVar5 = 0xffffffff;
      }
      else {
        if (param_2 <= iVar2) {
          param_2 = iVar2;
        }
        uVar5 = 0xffffffff;
        iVar2 = ossl_bn_miller_rabin_is_prime(param_1,param_2,param_3,param_5,0,&local_44);
        if (iVar2 != 0) {
          uVar5 = (ulong)(local_44 == 3);
        }
      }
      BN_CTX_free(c);
    }
    else {
      uVar5 = 1;
    }
  }
LAB_0010157a:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
LAB_001016e0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int BN_is_prime_ex(BIGNUM *p,int nchecks,BN_CTX *ctx,BN_GENCB *cb)

{
  int iVar1;
  
  iVar1 = ossl_bn_check_prime();
  return iVar1;
}



void BN_is_prime_fasttest_ex(void)

{
  ossl_bn_check_prime();
  return;
}



void BN_check_prime(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ossl_bn_check_prime(param_1,0,param_2,1,param_3);
  return;
}


