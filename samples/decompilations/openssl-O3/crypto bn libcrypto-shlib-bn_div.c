
/* WARNING: Removing unreachable block (ram,0x001003fe) */

undefined8
bn_div_fixed_top(BIGNUM *param_1,long param_2,long param_3,BIGNUM *param_4,BN_CTX *param_5)

{
  long *plVar1;
  uint num;
  uint uVar2;
  ulong *puVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  BIGNUM *pBVar14;
  BIGNUM *pBVar15;
  BIGNUM *a;
  BIGNUM *pBVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong w;
  ulong uVar22;
  ulong *puVar23;
  ulong uVar24;
  ulong *puVar25;
  long lVar26;
  ulong *puVar27;
  long *local_90;
  long local_48;
  
  BN_CTX_start(param_5);
  if (param_1 == (BIGNUM *)0x0) {
    param_1 = BN_CTX_get(param_5);
  }
  pBVar14 = BN_CTX_get(param_5);
  pBVar15 = BN_CTX_get(param_5);
  a = BN_CTX_get(param_5);
  if ((a != (BIGNUM *)0x0) && (pBVar16 = BN_copy(a,param_4), pBVar16 != (BIGNUM *)0x0)) {
    iVar12 = a->top;
    puVar25 = a->d;
    puVar23 = puVar25 + iVar12;
    iVar10 = BN_num_bits_word(puVar25[(long)iVar12 + -1]);
    uVar22 = 0;
    iVar11 = 0x40 - iVar10;
    if (0 < iVar12) {
      do {
        uVar24 = *puVar25;
        puVar27 = puVar25 + 1;
        *puVar25 = uVar24 << ((byte)iVar11 & 0x3f) | uVar22;
        uVar22 = uVar24 >> ((byte)iVar10 & 0x3f) &
                 (-(long)(iVar10 % 0x40) | (ulong)-(long)(iVar10 % 0x40) >> 8);
        puVar25 = puVar27;
      } while (puVar23 != puVar27);
    }
    a->neg = 0;
    iVar12 = bn_lshift_fixed_top(pBVar15,param_3,iVar11);
    if (iVar12 != 0) {
      num = a->top;
      iVar12 = pBVar15->top;
      if ((int)num < iVar12) {
        iVar13 = iVar12 - num;
        local_48 = (long)iVar13 << 3;
        iVar10 = iVar12;
      }
      else {
        iVar10 = num + 1;
        lVar26 = bn_wexpand(pBVar15);
        if (lVar26 == 0) goto LAB_001003b0;
        memset(pBVar15->d + iVar12,0,(long)(int)((num - iVar12) + 1) << 3);
        pBVar15->top = iVar10;
        local_48 = 8;
        iVar13 = 1;
      }
      lVar26 = (long)(int)num;
      uVar24 = 0;
      puVar25 = pBVar15->d;
      uVar22 = a->d[lVar26 + -1];
      if (num != 1) {
        uVar24 = a->d[lVar26 + -2];
      }
      lVar17 = bn_wexpand(param_1,iVar13);
      if (lVar17 != 0) {
        uVar2 = *(uint *)(param_3 + 0x10);
        param_1->neg = uVar2 ^ param_4->neg;
        param_1->top = iVar13;
        puVar23 = param_1->d;
        lVar17 = bn_wexpand(pBVar14,num + 1);
        if (lVar17 != 0) {
          puVar27 = (ulong *)((long)puVar25 + local_48);
          puVar25 = puVar25 + (long)iVar10 + -1;
          local_90 = (long *)((long)puVar23 + local_48);
          plVar1 = local_90 + -(long)iVar13;
          do {
            w = 0xffffffffffffffff;
            if (uVar22 != *puVar25) {
              uVar18 = 0;
              if (puVar27 != puVar25) {
                uVar18 = puVar25[-2];
              }
              auVar4._8_8_ = 0;
              auVar4._0_8_ = uVar22;
              auVar5._8_8_ = *puVar25;
              auVar5._0_8_ = puVar25[-1];
              w = SUB168(auVar5 / auVar4,0);
              uVar19 = SUB168(auVar5 % auVar4,0);
              auVar9._8_8_ = uVar19;
              auVar9._0_8_ = uVar18;
              auVar6._8_8_ = 0;
              auVar6._0_8_ = uVar24;
              auVar7._8_8_ = 0;
              auVar7._0_8_ = w;
              auVar8 = auVar6 * auVar7;
              if ((auVar9 < auVar8) && (w = w - 1, !CARRY8(uVar19,uVar22))) {
                while( true ) {
                  uVar19 = uVar19 + uVar22;
                  uVar21 = auVar8._8_8_ - (ulong)(auVar8._0_8_ < uVar24);
                  uVar20 = auVar8._0_8_ - uVar24;
                  auVar8._8_8_ = uVar21;
                  auVar8._0_8_ = uVar20;
                  if (uVar21 < uVar19) break;
                  if (((uVar21 == uVar19) && (uVar20 <= uVar18)) ||
                     (w = w - 1, CARRY8(uVar19,uVar22))) break;
                }
              }
            }
            puVar27 = puVar27 + -1;
            uVar18 = bn_mul_words(pBVar14->d,a->d,num,w);
            puVar23 = pBVar14->d;
            puVar23[lVar26] = uVar18;
            uVar18 = bn_sub_words(puVar27,puVar27,puVar23,num + 1);
            uVar19 = -uVar18;
            if ((int)num < 1) {
              puVar23 = pBVar14->d;
            }
            else {
              puVar3 = a->d;
              puVar23 = pBVar14->d;
              if (num - 1 < 3) {
                lVar17 = 0;
              }
              else {
                lVar17 = 0;
                if (puVar23 != puVar3 + 1) {
                  do {
                    uVar20 = ((ulong *)((long)puVar3 + lVar17))[1];
                    *(ulong *)((long)puVar23 + lVar17) = *(ulong *)((long)puVar3 + lVar17) & uVar19;
                    ((ulong *)((long)puVar23 + lVar17))[1] = uVar20 & uVar19;
                    lVar17 = lVar17 + 0x10;
                  } while ((ulong)(num >> 1) << 4 != lVar17);
                  if ((num & 1) != 0) {
                    puVar23[(int)(num & 0xfffffffe)] = uVar19 & puVar3[(int)(num & 0xfffffffe)];
                  }
                  goto LAB_00100318;
                }
              }
              do {
                *(ulong *)((long)puVar23 + lVar17) = *(ulong *)((long)puVar3 + lVar17) & uVar19;
                lVar17 = lVar17 + 8;
              } while (lVar26 * 8 != lVar17);
            }
LAB_00100318:
            uVar19 = bn_add_words(puVar27,puVar27,puVar23,num);
            local_90 = local_90 + -1;
            *puVar25 = *puVar25 + uVar19;
            puVar25 = puVar25 + -1;
            *local_90 = w - uVar18;
          } while (local_90 != plVar1);
          pBVar15->top = num;
          pBVar15->neg = uVar2;
          if ((param_2 == 0) || (iVar12 = bn_rshift_fixed_top(param_2,pBVar15,iVar11), iVar12 != 0))
          {
            BN_CTX_end(param_5);
            return 1;
          }
        }
      }
    }
  }
LAB_001003b0:
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


