
long EC_ec_pre_comp_dup(long param_1)

{
  if (param_1 != 0) {
    LOCK();
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
    UNLOCK();
  }
  return param_1;
}



void EC_ec_pre_comp_free(void *param_1)

{
  int *piVar1;
  int iVar2;
  long *ptr;
  EC_POINT *point;
  
  if (param_1 == (void *)0x0) {
    return;
  }
  LOCK();
  piVar1 = (int *)((long)param_1 + 0x30);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if ((iVar2 != 1) && (0 < iVar2 + -1)) {
    return;
  }
  ptr = *(long **)((long)param_1 + 0x20);
  if (ptr != (long *)0x0) {
    point = (EC_POINT *)*ptr;
    if (point != (EC_POINT *)0x0) {
      do {
        EC_POINT_free(point);
        point = (EC_POINT *)ptr[1];
        ptr = ptr + 1;
      } while (point != (EC_POINT *)0x0);
      ptr = *(long **)((long)param_1 + 0x20);
    }
    CRYPTO_free(ptr);
  }
  CRYPTO_free(param_1);
  return;
}



int ossl_ec_scalar_mul_ladder
              (EC_GROUP *param_1,EC_POINT *param_2,BIGNUM *param_3,EC_POINT *param_4,BN_CTX *param_5
              )

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  EC_POINT *dst;
  EC_POINT *dst_00;
  BIGNUM *r;
  BIGNUM *r_00;
  BIGNUM *a;
  long lVar7;
  BIGNUM *pBVar8;
  undefined8 uVar9;
  bool bVar10;
  int local_64;
  
  if ((param_4 != (EC_POINT *)0x0) && (iVar1 = EC_POINT_is_at_infinity(param_1,param_4), iVar1 != 0)
     ) {
    iVar1 = EC_POINT_set_to_infinity(param_1,param_2);
    return iVar1;
  }
  iVar1 = BN_is_zero(*(undefined8 *)(param_1 + 0x10));
  if (iVar1 != 0) {
    ERR_new();
    ERR_set_debug("crypto/ec/ec_mult.c",0x9c,"ossl_ec_scalar_mul_ladder");
    ERR_set_error(0x10,0x72,0);
    return 0;
  }
  iVar1 = BN_is_zero(*(undefined8 *)(param_1 + 0x18));
  if (iVar1 != 0) {
    ERR_new();
    ERR_set_debug("crypto/ec/ec_mult.c",0xa0,"ossl_ec_scalar_mul_ladder");
    ERR_set_error(0x10,0xa4,0);
    return 0;
  }
  BN_CTX_start(param_5);
  dst = EC_POINT_new(param_1);
  local_64 = 0;
  if ((dst == (EC_POINT *)0x0) || (dst_00 = EC_POINT_new(param_1), dst_00 == (EC_POINT *)0x0)) {
    ERR_new();
    dst_00 = (EC_POINT *)0x0;
    ERR_set_debug("crypto/ec/ec_mult.c",0xa8,"ossl_ec_scalar_mul_ladder");
    ERR_set_error(0x10,0x80010,0);
    goto LAB_001006e3;
  }
  if (param_4 == (EC_POINT *)0x0) {
    iVar1 = EC_POINT_copy(dst,*(EC_POINT **)(param_1 + 8));
    if (iVar1 != 0) goto LAB_0010016a;
    ERR_new();
    uVar9 = 0xae;
  }
  else {
    iVar1 = EC_POINT_copy(dst,param_4);
    if (iVar1 != 0) {
LAB_0010016a:
      BN_set_flags(*(undefined8 *)(dst + 0x10),4);
      BN_set_flags(*(undefined8 *)(dst + 0x18),4);
      BN_set_flags(*(undefined8 *)(dst + 0x20),4);
      BN_set_flags(*(undefined8 *)(param_2 + 0x10),4);
      BN_set_flags(*(undefined8 *)(param_2 + 0x18),4);
      BN_set_flags(*(undefined8 *)(param_2 + 0x20),4);
      BN_set_flags(*(undefined8 *)(dst_00 + 0x10),4);
      BN_set_flags(*(undefined8 *)(dst_00 + 0x18),4);
      BN_set_flags(*(undefined8 *)(dst_00 + 0x20),4);
      r = BN_CTX_get(param_5);
      r_00 = BN_CTX_get(param_5);
      a = BN_CTX_get(param_5);
      if (a == (BIGNUM *)0x0) {
        ERR_new();
        uVar9 = 0xc0;
      }
      else {
        iVar1 = BN_mul(r,*(BIGNUM **)(param_1 + 0x10),*(BIGNUM **)(param_1 + 0x18),param_5);
        if (iVar1 == 0) {
          ERR_new();
          uVar9 = 0xc5;
        }
        else {
          iVar2 = BN_num_bits(r);
          iVar1 = bn_get_top(r);
          iVar1 = iVar1 + 2;
          lVar7 = bn_wexpand(a,iVar1);
          if ((lVar7 == 0) || (lVar7 = bn_wexpand(r_00,iVar1), lVar7 == 0)) {
            ERR_new();
            uVar9 = 0xd3;
          }
          else {
            pBVar8 = BN_copy(a,param_3);
            if (pBVar8 == (BIGNUM *)0x0) {
              ERR_new();
              uVar9 = 0xd8;
            }
            else {
              BN_set_flags(a,4);
              iVar3 = BN_num_bits(a);
              if (((iVar2 < iVar3) || (iVar3 = BN_is_negative(a), iVar3 != 0)) &&
                 (iVar3 = BN_nnmod(a,a,r,param_5), iVar3 == 0)) {
                ERR_new();
                uVar9 = 0xe4;
              }
              else {
                iVar3 = BN_add(r_00,a,r);
                if (iVar3 == 0) {
                  ERR_new();
                  uVar9 = 0xea;
                }
                else {
                  BN_set_flags(r_00,4);
                  iVar3 = BN_add(a,r_00,r);
                  if (iVar3 == 0) {
                    ERR_new();
                    uVar9 = 0xef;
                  }
                  else {
                    iVar3 = BN_is_bit_set(r_00,iVar2);
                    BN_consttime_swap((long)iVar3,a,r_00,iVar1);
                    uVar4 = bn_get_top(*(undefined8 *)(param_1 + 0x40));
                    lVar7 = bn_wexpand(*(undefined8 *)(dst_00 + 0x10),uVar4);
                    if (((((lVar7 != 0) &&
                          (lVar7 = bn_wexpand(*(undefined8 *)(dst_00 + 0x18),uVar4), lVar7 != 0)) &&
                         ((lVar7 = bn_wexpand(*(undefined8 *)(dst_00 + 0x20),uVar4), lVar7 != 0 &&
                          ((lVar7 = bn_wexpand(*(undefined8 *)(param_2 + 0x10),uVar4), lVar7 != 0 &&
                           (lVar7 = bn_wexpand(*(undefined8 *)(param_2 + 0x18),uVar4), lVar7 != 0)))
                          ))) && (lVar7 = bn_wexpand(*(undefined8 *)(param_2 + 0x20),uVar4),
                                 lVar7 != 0)) &&
                       (((lVar7 = bn_wexpand(*(undefined8 *)(dst + 0x10),uVar4), lVar7 != 0 &&
                         (lVar7 = bn_wexpand(*(undefined8 *)(dst + 0x18),uVar4), lVar7 != 0)) &&
                        (lVar7 = bn_wexpand(*(undefined8 *)(dst + 0x20),uVar4), lVar7 != 0)))) {
                      lVar7 = *(long *)param_1;
                      if (*(int *)(dst + 0x28) == 0) {
                        if ((*(code **)(lVar7 + 0xd0) == (code *)0x0) ||
                           (iVar1 = (**(code **)(lVar7 + 0xd0))(param_1,dst,param_5), iVar1 == 0)) {
                          ERR_new();
                          uVar9 = 0x10a;
                          goto LAB_0010066d;
                        }
                        lVar7 = *(long *)param_1;
                      }
                      if (*(code **)(lVar7 + 0x1a0) == (code *)0x0) {
                        iVar1 = EC_POINT_copy(dst_00,dst);
                        if (iVar1 != 0) {
                          iVar1 = EC_POINT_dbl(param_1,param_2,dst_00,param_5);
                          goto joined_r0x001008f9;
                        }
                      }
                      else {
                        iVar1 = (**(code **)(lVar7 + 0x1a0))(param_1,param_2,dst_00,dst,param_5);
joined_r0x001008f9:
                        if (iVar1 != 0) {
                          iVar2 = iVar2 + -1;
                          if (iVar2 < 0) {
                            uVar5 = 1;
                          }
                          else {
                            uVar6 = 1;
                            do {
                              uVar5 = BN_is_bit_set(a,iVar2);
                              lVar7 = (long)(int)(uVar6 ^ uVar5);
                              BN_consttime_swap(lVar7,*(undefined8 *)(param_2 + 0x10),
                                                *(undefined8 *)(dst_00 + 0x10),uVar4);
                              BN_consttime_swap(lVar7,*(undefined8 *)(param_2 + 0x18),
                                                *(undefined8 *)(dst_00 + 0x18),uVar4);
                              BN_consttime_swap(lVar7,*(undefined8 *)(param_2 + 0x20),
                                                *(undefined8 *)(dst_00 + 0x20),uVar4);
                              uVar6 = (*(uint *)(dst_00 + 0x28) ^ *(uint *)(param_2 + 0x28)) &
                                      (uVar6 ^ uVar5);
                              *(uint *)(param_2 + 0x28) = *(uint *)(param_2 + 0x28) ^ uVar6;
                              *(uint *)(dst_00 + 0x28) = *(uint *)(dst_00 + 0x28) ^ uVar6;
                              if (*(code **)(*(long *)param_1 + 0x1a8) == (code *)0x0) {
                                iVar1 = EC_POINT_add(param_1,dst_00,param_2,dst_00,param_5);
                                if (iVar1 != 0) {
                                  iVar1 = EC_POINT_dbl(param_1,param_2,param_2,param_5);
                                  goto joined_r0x00100572;
                                }
LAB_00100578:
                                ERR_new();
                                ERR_set_debug("crypto/ec/ec_mult.c",0x160,
                                              "ossl_ec_scalar_mul_ladder");
                                ERR_set_error(0x10,0xa2,0);
                                goto LAB_001006e3;
                              }
                              iVar1 = (**(code **)(*(long *)param_1 + 0x1a8))
                                                (param_1,param_2,dst_00,dst,param_5);
joined_r0x00100572:
                              if (iVar1 == 0) goto LAB_00100578;
                              bVar10 = iVar2 != 0;
                              iVar2 = iVar2 + -1;
                              uVar6 = uVar5;
                            } while (bVar10);
                          }
                          lVar7 = (long)(int)uVar5;
                          BN_consttime_swap(lVar7,*(undefined8 *)(param_2 + 0x10),
                                            *(undefined8 *)(dst_00 + 0x10),uVar4);
                          BN_consttime_swap(lVar7,*(undefined8 *)(param_2 + 0x18),
                                            *(undefined8 *)(dst_00 + 0x18),uVar4);
                          BN_consttime_swap(lVar7,*(undefined8 *)(param_2 + 0x20),
                                            *(undefined8 *)(dst_00 + 0x20),uVar4);
                          uVar5 = (*(uint *)(dst_00 + 0x28) ^ *(uint *)(param_2 + 0x28)) & uVar5;
                          *(uint *)(param_2 + 0x28) = *(uint *)(param_2 + 0x28) ^ uVar5;
                          *(uint *)(dst_00 + 0x28) = *(uint *)(dst_00 + 0x28) ^ uVar5;
                          if ((*(code **)(*(long *)param_1 + 0x1b0) == (code *)0x0) ||
                             (iVar1 = (**(code **)(*(long *)param_1 + 0x1b0))
                                                (param_1,param_2,dst_00,dst,param_5), iVar1 != 0)) {
                            local_64 = 1;
                          }
                          else {
                            ERR_new();
                            ERR_set_debug("crypto/ec/ec_mult.c",0x16f,"ossl_ec_scalar_mul_ladder");
                            ERR_set_error(0x10,0x88,0);
                          }
                          goto LAB_001006e3;
                        }
                      }
                      ERR_new();
                      ERR_set_debug("crypto/ec/ec_mult.c",0x110,"ossl_ec_scalar_mul_ladder");
                      ERR_set_error(0x10,0x99,0);
                      goto LAB_001006e3;
                    }
                    ERR_new();
                    uVar9 = 0x103;
                  }
                }
              }
            }
          }
        }
      }
      ERR_set_debug("crypto/ec/ec_mult.c",uVar9,"ossl_ec_scalar_mul_ladder");
      ERR_set_error(0x10,0x80003,0);
      goto LAB_001006e3;
    }
    ERR_new();
    uVar9 = 0xb3;
  }
LAB_0010066d:
  ERR_set_debug("crypto/ec/ec_mult.c",uVar9,"ossl_ec_scalar_mul_ladder");
  ERR_set_error(0x10,0x80010,0);
LAB_001006e3:
  EC_POINT_free(dst);
  EC_POINT_clear_free(dst_00);
  BN_CTX_end(param_5);
  return local_64;
}



ulong ossl_ec_wNAF_mul(EC_GROUP *param_1,EC_POINT *param_2,BIGNUM *param_3,ulong param_4,
                      undefined8 *param_5,long *param_6,BN_CTX *param_7)

{
  char cVar1;
  EC_POINT *pEVar2;
  size_t __n;
  bool bVar3;
  int iVar4;
  uint uVar5;
  undefined4 *ptr;
  ulong *ptr_00;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  void *pvVar9;
  void *__dest;
  byte bVar10;
  uint uVar11;
  undefined8 uVar12;
  BIGNUM *pBVar13;
  long lVar14;
  uint uVar15;
  undefined4 *puVar16;
  long lVar17;
  void *__src;
  ulong uVar18;
  ulong uVar19;
  undefined8 *puVar20;
  long *plVar21;
  ulong *puVar22;
  ulong uVar23;
  ulong uVar24;
  long in_FS_OFFSET;
  undefined8 *local_d8;
  void *local_a0;
  EC_POINT *local_90;
  ulong local_88;
  ulong local_78;
  EC_POINT *local_70;
  long local_58;
  ulong local_50;
  ulong local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar4 = BN_is_zero(*(undefined8 *)(param_1 + 0x10));
  if ((iVar4 == 0) && (iVar4 = BN_is_zero(*(undefined8 *)(param_1 + 0x18)), iVar4 == 0)) {
    if (*(BIGNUM **)(param_1 + 0x10) == param_3) {
LAB_00100fb1:
      if (param_3 == (BIGNUM *)0x0) goto LAB_00100fbc;
      goto LAB_001009ec;
    }
    if (param_3 != (BIGNUM *)0x0) {
      if (param_4 == 0) {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar12 = 0;
          goto LAB_001013c6;
        }
        goto LAB_0010193a;
      }
      goto LAB_00100fb1;
    }
LAB_00100fbc:
    if (param_4 != 1) goto LAB_001009e1;
    if (*(BIGNUM **)(param_1 + 0x10) != (BIGNUM *)*param_6) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar12 = *param_5;
        param_3 = (BIGNUM *)*param_6;
LAB_001013c6:
        uVar7 = ossl_ec_scalar_mul_ladder(param_1,param_2,param_3,uVar12,param_7);
        return uVar7;
      }
      goto LAB_0010193a;
    }
LAB_00100fe0:
    uVar15 = 0;
    local_90 = (EC_POINT *)0x0;
    local_58 = 0;
    local_78 = 0;
    local_50 = 0;
    local_70 = (EC_POINT *)0x0;
    local_88 = param_4;
LAB_00100a68:
    iVar4 = (int)local_88 * 8;
    ptr = (undefined4 *)CRYPTO_malloc(iVar4,"crypto/ec/ec_mult.c",0x1fb);
    ptr_00 = (ulong *)CRYPTO_malloc(iVar4,"crypto/ec/ec_mult.c",0x1fc);
    puVar6 = (undefined8 *)CRYPTO_malloc(iVar4 + 8,"crypto/ec/ec_mult.c",0x1fe);
    local_a0 = CRYPTO_malloc(iVar4,"crypto/ec/ec_mult.c",0x1ff);
    if (puVar6 == (undefined8 *)0x0) {
LAB_0010195b:
      EC_POINT_free((EC_POINT *)0x0);
      CRYPTO_free(ptr);
      CRYPTO_free(ptr_00);
      uVar15 = 0;
      if (puVar6 == (undefined8 *)0x0) goto LAB_00100f35;
LAB_0010199a:
      uVar15 = 0;
      local_d8 = (undefined8 *)0x0;
    }
    else {
      *puVar6 = 0;
      if ((ptr == (undefined4 *)0x0) || (ptr_00 == (ulong *)0x0)) {
        EC_POINT_free((EC_POINT *)0x0);
        CRYPTO_free(ptr);
        CRYPTO_free(ptr_00);
        goto LAB_0010199a;
      }
      if (local_a0 == (void *)0x0) goto LAB_0010195b;
      uVar7 = (long)(int)uVar15 + param_4;
      if (uVar7 == 0) {
        lVar17 = 0;
        uVar18 = 0;
      }
      else {
        lVar17 = 0;
        uVar19 = 0;
        uVar18 = 0;
        puVar22 = ptr_00;
        do {
          pBVar13 = param_3;
          if (uVar19 < param_4) {
            uVar5 = BN_num_bits((BIGNUM *)param_6[uVar19]);
            if (uVar5 < 2000) goto LAB_00100bf0;
            lVar17 = lVar17 + 0x20;
            iVar4 = 6;
            puVar6[uVar19 + 1] = 0;
            *(undefined8 *)(ptr + uVar19 * 2) = 6;
LAB_00100b6b:
            pBVar13 = (BIGNUM *)param_6[uVar19];
          }
          else {
            uVar5 = BN_num_bits(param_3);
            if (uVar5 < 2000) {
LAB_00100bf0:
              if (uVar5 < 800) {
                if (uVar5 < 300) {
                  if (uVar5 < 0x46) {
                    iVar4 = 2 - (uint)(uVar5 < 0x14);
                    lVar14 = 2 - (ulong)(uVar5 < 0x14);
                    lVar8 = lVar14;
                  }
                  else {
                    iVar4 = 3;
                    lVar8 = 4;
                    lVar14 = 3;
                  }
                }
                else {
                  iVar4 = 4;
                  lVar8 = 8;
                  lVar14 = 4;
                }
              }
              else {
                iVar4 = 5;
                lVar8 = 0x10;
                lVar14 = 5;
              }
              lVar17 = lVar17 + lVar8;
              puVar6[uVar19 + 1] = 0;
              *(long *)(ptr + uVar19 * 2) = lVar14;
              if (uVar19 < param_4) goto LAB_00100b6b;
            }
            else {
              lVar17 = lVar17 + 0x20;
              puVar6[uVar19 + 1] = 0;
              iVar4 = 6;
              *(undefined8 *)(ptr + uVar19 * 2) = 6;
            }
          }
          lVar8 = bn_compute_wNAF(pBVar13,iVar4,puVar22);
          puVar6[uVar19] = lVar8;
          if (lVar8 == 0) {
            local_d8 = (undefined8 *)0x0;
            local_90 = (EC_POINT *)0x0;
            goto LAB_00100e78;
          }
          if (uVar18 < *puVar22) {
            uVar18 = *puVar22;
          }
          uVar19 = uVar19 + 1;
          puVar22 = puVar22 + 1;
        } while (uVar19 != uVar7);
      }
      if (local_78 == 0) {
LAB_00100d50:
        local_d8 = (undefined8 *)CRYPTO_malloc((int)lVar17 * 8 + 8,"crypto/ec/ec_mult.c",0x28e);
        if (local_d8 == (undefined8 *)0x0) goto LAB_0010108e;
        local_d8[lVar17] = 0;
        puVar20 = local_d8;
        if (uVar7 != 0) {
          uVar19 = 0;
          puVar16 = ptr;
          do {
            uVar23 = 0;
            *(undefined8 **)((long)local_a0 + uVar19 * 8) = puVar20;
            do {
              local_90 = EC_POINT_new(param_1);
              *puVar20 = local_90;
              if (local_90 == (EC_POINT *)0x0) goto LAB_00100e78;
              uVar23 = uVar23 + 1;
              puVar20 = puVar20 + 1;
            } while (uVar23 < (ulong)(1L << ((char)*puVar16 - 1U & 0x3f)));
            uVar19 = uVar19 + 1;
            puVar16 = puVar16 + 2;
          } while (uVar19 != uVar7);
        }
        if (local_d8 + lVar17 == puVar20) {
          local_90 = EC_POINT_new(param_1);
          if (local_90 == (EC_POINT *)0x0) goto LAB_00100e55;
          uVar19 = 0;
          if (uVar7 != 0) {
            do {
              pEVar2 = (EC_POINT *)**(undefined8 **)((long)local_a0 + uVar19 * 8);
              if (uVar19 < param_4) {
                iVar4 = EC_POINT_copy(pEVar2,(EC_POINT *)param_5[uVar19]);
              }
              else {
                iVar4 = EC_POINT_copy(pEVar2,local_70);
              }
              if (iVar4 == 0) goto LAB_00100e78;
              if (1 < *(ulong *)(ptr + uVar19 * 2)) {
                iVar4 = EC_POINT_dbl(param_1,local_90,
                                     (EC_POINT *)**(undefined8 **)((long)local_a0 + uVar19 * 8),
                                     param_7);
                if (iVar4 == 0) goto LAB_00100e78;
                if (ptr[uVar19 * 2] != 1) {
                  uVar23 = 1;
                  do {
                    lVar8 = *(long *)((long)local_a0 + uVar19 * 8);
                    iVar4 = EC_POINT_add(param_1,*(EC_POINT **)(lVar8 + uVar23 * 8),
                                         *(EC_POINT **)(lVar8 + -8 + uVar23 * 8),local_90,param_7);
                    if (iVar4 == 0) goto LAB_00100e78;
                    uVar23 = uVar23 + 1;
                  } while (uVar23 < (ulong)(1L << ((char)ptr[uVar19 * 2] - 1U & 0x3f)));
                }
              }
              uVar19 = uVar19 + 1;
            } while (uVar19 != uVar7);
          }
          if ((*(code **)(*(long *)param_1 + 0xd8) == (code *)0x0) ||
             (iVar4 = (**(code **)(*(long *)param_1 + 0xd8))(param_1,lVar17,local_d8,param_7),
             iVar4 == 0)) {
LAB_001018d1:
            uVar15 = 0;
          }
          else {
            uVar15 = (int)uVar18 - 1;
            if (-1 < (int)uVar15) {
              uVar7 = (ulong)uVar15;
              uVar5 = 0;
              bVar3 = true;
              do {
                uVar18 = 0;
                if (local_88 != 0) {
                  do {
                    if (uVar7 < ptr_00[uVar18]) {
                      cVar1 = *(char *)(puVar6[uVar18] + uVar7);
                      if (cVar1 != '\0') {
                        uVar11 = (uint)(byte)-cVar1;
                        if ('\0' < cVar1) {
                          uVar11 = (int)cVar1;
                        }
                        if ((uint)(int)cVar1 >> 0x1f == uVar5) {
                          if (!bVar3) goto LAB_00101840;
LAB_00101784:
                          iVar4 = EC_POINT_copy(param_2,*(EC_POINT **)
                                                         (*(long *)((long)local_a0 + uVar18 * 8) +
                                                         (long)((int)(uVar11 & 0xff) >> 1) * 8));
                          if (iVar4 == 0) goto LAB_00100e78;
                          iVar4 = ossl_ec_point_blind_coordinates(param_1,param_2,param_7);
                          if (iVar4 == 0) {
                            ERR_new();
                            ERR_set_debug("crypto/ec/ec_mult.c",0x2ef,"ossl_ec_wNAF_mul");
                            ERR_set_error(0x10,0xa3,0);
                            goto LAB_001018d1;
                          }
                        }
                        else {
                          if (bVar3) {
                            uVar5 = uVar5 ^ 1;
                            goto LAB_00101784;
                          }
                          iVar4 = EC_POINT_invert(param_1,param_2,param_7);
                          if (iVar4 == 0) goto LAB_00100e78;
                          uVar5 = uVar5 ^ 1;
LAB_00101840:
                          iVar4 = EC_POINT_add(param_1,param_2,param_2,
                                               *(EC_POINT **)
                                                (*(long *)((long)local_a0 + uVar18 * 8) +
                                                (long)((int)(uVar11 & 0xff) >> 1) * 8),param_7);
                          if (iVar4 == 0) goto LAB_00100e78;
                        }
                        bVar3 = false;
                      }
                    }
                    uVar18 = uVar18 + 1;
                  } while (local_88 != uVar18);
                }
                uVar15 = uVar15 - 1;
                uVar7 = uVar7 - 1;
                if (uVar15 == 0xffffffff) {
                  if (bVar3) goto LAB_001018dc;
                  uVar15 = 1;
                  if (uVar5 != 0) {
                    iVar4 = EC_POINT_invert(param_1,param_2,param_7);
                    uVar15 = (uint)(iVar4 != 0);
                  }
                  goto LAB_001010a7;
                }
              } while ((bVar3) ||
                      (iVar4 = EC_POINT_dbl(param_1,param_2,param_2,param_7), iVar4 != 0));
LAB_00100e78:
              EC_POINT_free(local_90);
              CRYPTO_free(ptr);
              CRYPTO_free(ptr_00);
              uVar15 = 0;
              goto LAB_00100eb1;
            }
LAB_001018dc:
            iVar4 = EC_POINT_set_to_infinity(param_1,param_2);
            uVar15 = (uint)(iVar4 != 0);
          }
        }
        else {
          ERR_new();
          ERR_set_debug("crypto/ec/ec_mult.c",0x29f,"ossl_ec_wNAF_mul");
          ERR_set_error(0x10,0xc0103,0);
LAB_00100e55:
          uVar15 = 0;
          local_90 = (EC_POINT *)0x0;
        }
      }
      else {
        if (local_90 == (EC_POINT *)0x0) {
          if (uVar15 == 1) goto LAB_00100d50;
          ERR_new();
          ERR_set_debug("crypto/ec/ec_mult.c",0x222,"ossl_ec_wNAF_mul");
          ERR_set_error(0x10,0xc0103,0);
          local_d8 = (undefined8 *)0x0;
          goto LAB_001010a7;
        }
        local_48 = 0;
        if (uVar15 == 0) {
          uVar12 = *(undefined8 *)(local_90 + 0x18);
          *(undefined8 *)(ptr + param_4 * 2) = uVar12;
          pvVar9 = (void *)bn_compute_wNAF(param_3,uVar12,&local_48);
          if (pvVar9 != (void *)0x0) {
            if (uVar18 < local_48) {
              if ((local_48 < local_78 * local_50) &&
                 (uVar19 = ((local_50 - 1) + local_48) / local_50, local_88 = param_4 + uVar19,
                 *(ulong *)(local_90 + 0x10) < uVar19)) {
                ERR_new();
                ERR_set_debug("crypto/ec/ec_mult.c",0x256,"ossl_ec_wNAF_mul");
                ERR_set_error(0x10,0xc0103,0);
                CRYPTO_free(pvVar9);
                goto LAB_0010108e;
              }
              plVar21 = *(long **)(local_90 + 0x20);
              if (param_4 < local_88) {
                __src = pvVar9;
                uVar19 = param_4;
                do {
                  if (uVar19 < local_88 - 1) {
                    ptr_00[uVar19] = local_50;
                    if (local_48 < local_50) {
                      ERR_new();
                      ERR_set_debug("crypto/ec/ec_mult.c",0x265,"ossl_ec_wNAF_mul");
                      ERR_set_error(0x10,0xc0103,0);
                      CRYPTO_free(pvVar9);
                      goto LAB_0010108e;
                    }
                    local_48 = local_48 - local_50;
                    uVar23 = local_50;
                  }
                  else {
                    ptr_00[uVar19] = local_48;
                    uVar23 = local_48;
                  }
                  uVar24 = uVar19 + 1;
                  puVar6[uVar24] = 0;
                  __dest = CRYPTO_malloc((int)uVar23,"crypto/ec/ec_mult.c",0x272);
                  puVar6[uVar19] = __dest;
                  if (__dest == (void *)0x0) {
                    CRYPTO_free(pvVar9);
                    goto LAB_0010108e;
                  }
                  __n = ptr_00[uVar19];
                  memcpy(__dest,__src,__n);
                  if (uVar18 < __n) {
                    uVar18 = __n;
                  }
                  if (*plVar21 == 0) {
                    ERR_new();
                    ERR_set_debug("crypto/ec/ec_mult.c",0x27c,"ossl_ec_wNAF_mul");
                    ERR_set_error(0x10,0xc0103,0);
                    CRYPTO_free(pvVar9);
                    goto LAB_0010108e;
                  }
                  __src = (void *)((long)__src + local_50);
                  *(long **)((long)local_a0 + uVar24 * 8 + -8) = plVar21;
                  plVar21 = plVar21 + local_58;
                  uVar19 = uVar24;
                } while (uVar24 < local_88);
              }
              CRYPTO_free(pvVar9);
            }
            else {
              local_88 = param_4 + 1;
              puVar6[param_4] = pvVar9;
              puVar6[param_4 + 1] = 0;
              ptr_00[param_4] = local_48;
              *(undefined8 *)((long)local_a0 + param_4 * 8) = *(undefined8 *)(local_90 + 0x20);
            }
            goto LAB_00100d50;
          }
        }
        else {
          ERR_new();
          ERR_set_debug("crypto/ec/ec_mult.c",0x22b,"ossl_ec_wNAF_mul");
          ERR_set_error(0x10,0xc0103,0);
        }
LAB_0010108e:
        uVar15 = 0;
        local_d8 = (undefined8 *)0x0;
        local_90 = (EC_POINT *)0x0;
      }
LAB_001010a7:
      EC_POINT_free(local_90);
      CRYPTO_free(ptr);
      CRYPTO_free(ptr_00);
    }
LAB_00100eb1:
    pvVar9 = (void *)*puVar6;
    puVar20 = puVar6;
    while (pvVar9 != (void *)0x0) {
      puVar20 = puVar20 + 1;
      CRYPTO_free(pvVar9);
      pvVar9 = (void *)*puVar20;
    }
    CRYPTO_free(puVar6);
    if (local_d8 != (undefined8 *)0x0) {
      pEVar2 = (EC_POINT *)*local_d8;
      puVar6 = local_d8;
      while (pEVar2 != (EC_POINT *)0x0) {
        EC_POINT_clear_free(pEVar2);
        puVar20 = puVar6 + 1;
        puVar6 = puVar6 + 1;
        pEVar2 = (EC_POINT *)*puVar20;
      }
      CRYPTO_free(local_d8);
    }
  }
  else {
LAB_001009e1:
    if (param_3 == (BIGNUM *)0x0) goto LAB_00100fe0;
LAB_001009ec:
    local_70 = EC_GROUP_get0_generator(param_1);
    if (local_70 != (EC_POINT *)0x0) {
      local_90 = *(EC_POINT **)(param_1 + 0xa0);
      if (local_90 == (EC_POINT *)0x0) {
        local_88 = param_4 + 1;
        uVar15 = 1;
        local_58 = 0;
        local_78 = 1;
        local_50 = 0;
      }
      else if (*(long *)(local_90 + 0x10) == 0) {
        local_88 = param_4 + 1;
        local_50 = 0;
        uVar15 = 1;
        local_90 = (EC_POINT *)0x0;
        local_78 = 1;
        local_58 = 0;
      }
      else {
        iVar4 = EC_POINT_cmp(param_1,local_70,(EC_POINT *)**(undefined8 **)(local_90 + 0x20),param_7
                            );
        if (iVar4 == 0) {
          local_50 = *(ulong *)(local_90 + 8);
          iVar4 = BN_num_bits(param_3);
          local_78 = *(ulong *)(local_90 + 0x10);
          bVar10 = (char)*(undefined8 *)(local_90 + 0x18) - 1;
          if (*(long *)(local_90 + 0x28) != local_78 << (bVar10 & 0x3f)) {
            ERR_new();
            ERR_set_debug("crypto/ec/ec_mult.c",0x1ed,"ossl_ec_wNAF_mul");
            ERR_set_error(0x10,0xc0103,0);
            goto LAB_001011ce;
          }
          uVar7 = (ulong)(long)iVar4 / local_50 + 1;
          if (uVar7 <= local_78) {
            local_78 = uVar7;
          }
          local_58 = 1L << (bVar10 & 0x3f);
          local_88 = local_78 + param_4;
          uVar15 = 0;
        }
        else {
          local_88 = param_4 + 1;
          uVar15 = 1;
          local_90 = (EC_POINT *)0x0;
          local_58 = 0;
          local_78 = 1;
          local_50 = 0;
        }
      }
      goto LAB_00100a68;
    }
    ERR_new();
    ERR_set_debug("crypto/ec/ec_mult.c",0x1d1,"ossl_ec_wNAF_mul");
    ERR_set_error(0x10,0x71,0);
LAB_001011ce:
    EC_POINT_free((EC_POINT *)0x0);
    CRYPTO_free((void *)0x0);
    CRYPTO_free((void *)0x0);
    uVar15 = 0;
    local_a0 = (void *)0x0;
  }
LAB_00100f35:
  CRYPTO_free(local_a0);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (ulong)uVar15;
  }
LAB_0010193a:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4 ossl_ec_wNAF_precompute_mult(EC_GROUP *param_1,BN_CTX *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  EC_POINT *pEVar3;
  BIGNUM *a;
  ulong uVar4;
  undefined8 *ptr;
  EC_POINT *pEVar5;
  sbyte sVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined4 local_84;
  EC_POINT *local_80;
  BN_CTX *local_78;
  ulong local_70;
  long local_68;
  ulong local_60;
  long local_58;
  undefined8 local_50;
  
  EC_pre_comp_free();
  if ((param_1 == (EC_GROUP *)0x0) ||
     (puVar2 = (undefined8 *)CRYPTO_zalloc(0x38,"crypto/ec/ec_mult.c",0x39),
     puVar2 == (undefined8 *)0x0)) {
    return 0;
  }
  *puVar2 = param_1;
  puVar2[1] = 8;
  puVar2[3] = 4;
  LOCK();
  *(undefined4 *)(puVar2 + 6) = 1;
  UNLOCK();
  pEVar3 = EC_GROUP_get0_generator(param_1);
  if (pEVar3 == (EC_POINT *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/ec/ec_mult.c",0x348,"ossl_ec_wNAF_precompute_mult");
    ERR_set_error(0x10,0x71,0);
  }
  else {
    local_78 = (BN_CTX *)0x0;
    if ((param_2 != (BN_CTX *)0x0) ||
       (param_2 = BN_CTX_new(), local_78 = param_2, param_2 != (BN_CTX *)0x0)) {
      BN_CTX_start(param_2);
      a = (BIGNUM *)EC_GROUP_get0_order(param_1);
      if (a == (BIGNUM *)0x0) {
LAB_00101c30:
        local_84 = 0;
        pEVar5 = (EC_POINT *)0x0;
        local_80 = (EC_POINT *)0x0;
      }
      else {
        iVar1 = BN_is_zero(a);
        if (iVar1 != 0) {
          ERR_new();
          ERR_set_debug("crypto/ec/ec_mult.c",0x35a,"ossl_ec_wNAF_precompute_mult");
          ERR_set_error(0x10,0x72,0);
          goto LAB_00101c30;
        }
        iVar1 = BN_num_bits(a);
        uVar4 = (ulong)iVar1;
        if (uVar4 < 2000) {
          if (uVar4 < 800) {
            local_58 = 8;
            sVar6 = 3;
            local_50 = 4;
            goto LAB_00101ac8;
          }
          local_60 = uVar4 + 7 >> 3;
          local_68 = local_60 << 4;
          ptr = (undefined8 *)CRYPTO_malloc((int)local_60 * 0x80 + 8,"crypto/ec/ec_mult.c",0x374);
          if (ptr == (undefined8 *)0x0) goto LAB_00101c30;
          ptr[local_60 * 0x10] = 0;
          local_58 = 0x10;
          local_50 = 5;
LAB_00101b1a:
          lVar9 = 0;
          do {
            pEVar5 = EC_POINT_new(param_1);
            ptr[lVar9] = pEVar5;
            if (pEVar5 == (EC_POINT *)0x0) {
              ERR_new();
              uVar8 = 0x37c;
              pEVar5 = (EC_POINT *)0x0;
              goto LAB_00101b5b;
            }
            lVar9 = lVar9 + 1;
          } while (lVar9 != local_68);
        }
        else {
          local_58 = 0x20;
          sVar6 = 5;
          local_50 = 6;
LAB_00101ac8:
          local_60 = uVar4 + 7 >> 3;
          local_68 = local_60 << sVar6;
          ptr = (undefined8 *)CRYPTO_malloc((int)local_68 * 8 + 8,"crypto/ec/ec_mult.c",0x374);
          if (ptr == (undefined8 *)0x0) goto LAB_00101c30;
          ptr[local_68] = 0;
          if (local_68 != 0) goto LAB_00101b1a;
        }
        pEVar5 = EC_POINT_new(param_1);
        if ((pEVar5 == (EC_POINT *)0x0) ||
           (local_80 = EC_POINT_new(param_1), local_80 == (EC_POINT *)0x0)) {
          ERR_new();
          uVar8 = 899;
LAB_00101b5b:
          ERR_set_debug("crypto/ec/ec_mult.c",uVar8,"ossl_ec_wNAF_precompute_mult");
          ERR_set_error(0x10,0x80010,0);
          local_80 = (EC_POINT *)0x0;
LAB_00101b83:
          BN_CTX_end(param_2);
          BN_CTX_free(local_78);
          EC_ec_pre_comp_free(puVar2);
          pEVar3 = (EC_POINT *)*ptr;
          puVar2 = ptr;
          while (pEVar3 != (EC_POINT *)0x0) {
            EC_POINT_free(pEVar3);
            puVar10 = puVar2 + 1;
            puVar2 = puVar2 + 1;
            pEVar3 = (EC_POINT *)*puVar10;
          }
          CRYPTO_free(ptr);
          local_84 = 0;
          goto LAB_00101c60;
        }
        iVar1 = EC_POINT_copy(local_80,pEVar3);
        if (iVar1 == 0) goto LAB_00101b83;
        if (local_60 != 0) {
          local_70 = 0;
          puVar10 = ptr;
          do {
            iVar1 = EC_POINT_dbl(param_1,pEVar5,local_80,param_2);
            if (iVar1 == 0) goto LAB_00101b83;
            puVar7 = puVar10 + 1;
            iVar1 = EC_POINT_copy((EC_POINT *)*puVar10,local_80);
            if (iVar1 == 0) goto LAB_00101b83;
            do {
              iVar1 = EC_POINT_add(param_1,(EC_POINT *)*puVar7,pEVar5,(EC_POINT *)puVar7[-1],param_2
                                  );
              if (iVar1 == 0) goto LAB_00101b83;
              puVar7 = puVar7 + 1;
            } while (puVar7 != puVar10 + local_58);
            if (local_70 < local_60 - 1) {
              iVar1 = EC_POINT_dbl(param_1,local_80,pEVar5,param_2);
              if (iVar1 == 0) goto LAB_00101b83;
              lVar9 = 6;
              do {
                iVar1 = EC_POINT_dbl(param_1,local_80,local_80,param_2);
                if (iVar1 == 0) goto LAB_00101b83;
                lVar9 = lVar9 + -1;
              } while (lVar9 != 0);
            }
            local_70 = local_70 + 1;
            puVar10 = puVar7;
          } while (local_70 != local_60);
        }
        if ((*(code **)(*(long *)param_1 + 0xd8) == (code *)0x0) ||
           (iVar1 = (**(code **)(*(long *)param_1 + 0xd8))(param_1,local_68,ptr,param_2), iVar1 == 0
           )) goto LAB_00101b83;
        *puVar2 = param_1;
        puVar2[1] = 8;
        puVar2[2] = local_60;
        puVar2[4] = ptr;
        puVar2[3] = local_50;
        puVar2[5] = local_68;
        *(undefined8 **)(param_1 + 0xa0) = puVar2;
        puVar2 = (undefined8 *)0x0;
        *(undefined4 *)(param_1 + 0x98) = 6;
        local_84 = 1;
      }
      BN_CTX_end(param_2);
      BN_CTX_free(local_78);
      EC_ec_pre_comp_free(puVar2);
      goto LAB_00101c60;
    }
  }
  pEVar5 = (EC_POINT *)0x0;
  BN_CTX_free((BN_CTX *)0x0);
  EC_ec_pre_comp_free(puVar2);
  local_84 = 0;
  local_80 = (EC_POINT *)0x0;
LAB_00101c60:
  EC_POINT_free(pEVar5);
  EC_POINT_free(local_80);
  return local_84;
}



bool ossl_ec_wNAF_have_precompute_mult(long param_1)

{
  if (*(int *)(param_1 + 0x98) != 6) {
    return false;
  }
  return *(long *)(param_1 + 0xa0) != 0;
}


