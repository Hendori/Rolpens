
/* WARNING: Removing unreachable block (ram,0x001003be) */

undefined8
bn_div_fixed_top(BIGNUM *param_1,long param_2,long param_3,BIGNUM *param_4,BN_CTX *param_5)

{
  int iVar1;
  long *plVar2;
  uint uVar3;
  ulong *puVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  BIGNUM *pBVar15;
  BIGNUM *pBVar16;
  BIGNUM *a;
  BIGNUM *pBVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong *puVar24;
  long lVar25;
  ulong *puVar26;
  ulong uVar27;
  ulong w;
  ulong *puVar28;
  long *local_90;
  long local_48;
  
  BN_CTX_start(param_5);
  if (param_1 == (BIGNUM *)0x0) {
    param_1 = BN_CTX_get(param_5);
  }
  pBVar15 = BN_CTX_get(param_5);
  pBVar16 = BN_CTX_get(param_5);
  a = BN_CTX_get(param_5);
  if ((a != (BIGNUM *)0x0) && (pBVar17 = BN_copy(a,param_4), pBVar17 != (BIGNUM *)0x0)) {
    iVar13 = a->top;
    puVar28 = a->d;
    iVar11 = BN_num_bits_word(puVar28[(long)iVar13 + -1]);
    iVar12 = 0x40 - iVar11;
    if (0 < iVar13) {
      uVar23 = 0;
      puVar24 = puVar28;
      do {
        uVar27 = *puVar24;
        puVar26 = puVar24 + 1;
        *puVar24 = uVar27 << ((byte)iVar12 & 0x3f) | uVar23;
        uVar23 = uVar27 >> ((byte)iVar11 & 0x3f) &
                 (-(long)(iVar11 % 0x40) | (ulong)-(long)(iVar11 % 0x40) >> 8);
        puVar24 = puVar26;
      } while (puVar28 + iVar13 != puVar26);
    }
    a->neg = 0;
    iVar13 = bn_lshift_fixed_top(pBVar16,param_3,iVar12);
    if (iVar13 != 0) {
      iVar13 = a->top;
      iVar11 = pBVar16->top;
      if (iVar13 < iVar11) {
        iVar14 = iVar11 - iVar13;
        local_48 = (long)iVar14 << 3;
        iVar1 = iVar11;
      }
      else {
        iVar1 = iVar13 + 1;
        lVar25 = bn_wexpand(pBVar16);
        if (lVar25 == 0) goto LAB_00100370;
        memset(pBVar16->d + iVar11,0,(long)((iVar13 - iVar11) + 1) << 3);
        pBVar16->top = iVar1;
        local_48 = 8;
        iVar14 = 1;
      }
      lVar25 = (long)iVar13;
      uVar27 = 0;
      puVar28 = pBVar16->d;
      uVar23 = a->d[lVar25 + -1];
      if (iVar13 != 1) {
        uVar27 = a->d[lVar25 + -2];
      }
      lVar18 = bn_wexpand(param_1,iVar14);
      if (lVar18 != 0) {
        uVar3 = *(uint *)(param_3 + 0x10);
        param_1->neg = uVar3 ^ param_4->neg;
        param_1->top = iVar14;
        puVar24 = param_1->d;
        lVar18 = bn_wexpand(pBVar15,iVar13 + 1);
        if (lVar18 != 0) {
          puVar26 = puVar28 + (long)iVar1 + -1;
          local_90 = (long *)((long)puVar24 + local_48);
          puVar28 = (ulong *)((long)puVar28 + local_48);
          plVar2 = local_90 + -(long)iVar14;
          do {
            w = 0xffffffffffffffff;
            if (uVar23 != *puVar26) {
              uVar19 = 0;
              if (puVar28 != puVar26) {
                uVar19 = puVar26[-2];
              }
              auVar5._8_8_ = 0;
              auVar5._0_8_ = uVar23;
              auVar6._8_8_ = *puVar26;
              auVar6._0_8_ = puVar26[-1];
              w = SUB168(auVar6 / auVar5,0);
              uVar20 = SUB168(auVar6 % auVar5,0);
              auVar10._8_8_ = uVar20;
              auVar10._0_8_ = uVar19;
              auVar7._8_8_ = 0;
              auVar7._0_8_ = uVar27;
              auVar8._8_8_ = 0;
              auVar8._0_8_ = w;
              auVar9 = auVar7 * auVar8;
              if ((auVar10 < auVar9) && (w = w - 1, !CARRY8(uVar20,uVar23))) {
                while( true ) {
                  uVar20 = uVar20 + uVar23;
                  uVar22 = auVar9._8_8_ - (ulong)(auVar9._0_8_ < uVar27);
                  uVar21 = auVar9._0_8_ - uVar27;
                  auVar9._8_8_ = uVar22;
                  auVar9._0_8_ = uVar21;
                  if (uVar22 < uVar20) break;
                  if (((uVar22 == uVar20) && (uVar21 <= uVar19)) ||
                     (w = w - 1, CARRY8(uVar20,uVar23))) break;
                }
              }
            }
            puVar28 = puVar28 + -1;
            uVar19 = bn_mul_words(pBVar15->d,a->d,iVar13,w);
            puVar24 = pBVar15->d;
            puVar24[lVar25] = uVar19;
            uVar19 = bn_sub_words(puVar28,puVar28,puVar24,iVar13 + 1);
            if (iVar13 < 1) {
              puVar24 = pBVar15->d;
            }
            else {
              puVar24 = pBVar15->d;
              lVar18 = 0;
              puVar4 = a->d;
              do {
                *(ulong *)((long)puVar24 + lVar18) = *(ulong *)((long)puVar4 + lVar18) & -uVar19;
                lVar18 = lVar18 + 8;
              } while (lVar25 * 8 - lVar18 != 0);
            }
            uVar20 = bn_add_words(puVar28,puVar28,puVar24,iVar13);
            local_90 = local_90 + -1;
            *puVar26 = *puVar26 + uVar20;
            puVar26 = puVar26 + -1;
            *local_90 = w - uVar19;
          } while (local_90 != plVar2);
          pBVar16->neg = uVar3;
          pBVar16->top = iVar13;
          if ((param_2 == 0) || (iVar13 = bn_rshift_fixed_top(param_2,pBVar16,iVar12), iVar13 != 0))
          {
            BN_CTX_end(param_5);
            return 1;
          }
        }
      }
    }
  }
LAB_00100370:
  BN_CTX_end(param_5);
  return 0;
}



int BN_div(BIGNUM *dv,BIGNUM *rem,BIGNUM *m,BIGNUM *d,BN_CTX *ctx)

{
  int iVar1;
  
  iVar1 = BN_is_zero(d);
  if (iVar1 == 0) {
    if (d->d[(long)d->top + -1] == 0) {
      ERR_new();
      ERR_set_debug("crypto/bn/bn_div.c",0xe1,"BN_div");
      ERR_set_error(3,0x6b,0);
    }
    else {
      iVar1 = bn_div_fixed_top(dv,rem,m,d,ctx);
      if (iVar1 != 0) {
        if (dv != (BIGNUM *)0x0) {
          bn_correct_top(dv);
        }
        if (rem == (BIGNUM *)0x0) {
          return iVar1;
        }
        bn_correct_top(rem);
        return iVar1;
      }
    }
  }
  else {
    ERR_new();
    ERR_set_debug("crypto/bn/bn_div.c",0xd7,"BN_div");
    ERR_set_error(3,0x67,0);
  }
  return 0;
}


