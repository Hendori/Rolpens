
undefined4
ossl_ml_dsa_sign(long param_1,int param_2,undefined1 *param_3,size_t param_4,void *param_5,
                ulong param_6,void *param_7,size_t param_8,int param_9,long param_10,
                undefined8 *param_11,ulong param_12)

{
  void *__dest;
  void *__dest_00;
  void *__dest_01;
  void *pvVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  long lVar12;
  void *d;
  EVP_MD_CTX *ctx;
  long lVar13;
  size_t __n;
  uint *puVar14;
  long lVar15;
  uint *puVar16;
  uint *puVar17;
  uint uVar18;
  ulong uVar19;
  long lVar20;
  undefined4 uVar21;
  ulong uVar22;
  ulong uVar23;
  uint uVar24;
  uint uVar25;
  ulong cnt;
  ulong uVar26;
  long lVar27;
  uint *puVar28;
  void *pvVar29;
  size_t sVar30;
  long lVar31;
  void *pvVar32;
  int iVar33;
  long in_FS_OFFSET;
  undefined1 *local_6c8;
  size_t local_6b8;
  long local_6a8;
  undefined1 *local_688;
  ulong local_618;
  void *local_5d8;
  ulong local_5d0;
  uint *local_5c8;
  ulong local_5c0;
  void *local_5b8;
  ulong local_5b0;
  long local_5a8;
  ulong local_5a0;
  ulong local_598;
  uint *local_588;
  ulong local_580;
  uint *local_578;
  ulong local_570;
  undefined1 *local_568;
  long local_560;
  undefined1 local_558 [64];
  undefined8 local_518;
  undefined8 uStack_510;
  undefined8 local_508;
  undefined8 uStack_500;
  undefined8 local_4f8;
  undefined8 uStack_4f0;
  undefined8 local_4e8;
  undefined8 uStack_4e0;
  undefined1 local_4d8 [64];
  undefined8 local_498;
  undefined8 uStack_490;
  undefined8 local_488;
  undefined8 uStack_480;
  undefined8 local_478;
  undefined8 uStack_470;
  undefined8 local_468;
  undefined8 uStack_460;
  undefined2 local_458;
  undefined1 local_448 [1032];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar12 = ossl_ml_dsa_key_get_priv();
  if (lVar12 == 0) {
LAB_00100382:
    uVar21 = 0;
    goto LAB_00100384;
  }
  if (param_10 != 0) {
    local_6a8 = *(long *)(param_1 + 8);
    if (param_12 < *(ulong *)(local_6a8 + 0x50)) goto LAB_00100382;
    if (param_2 == 0) {
      if (param_9 == 0) {
        if (param_3 == (undefined1 *)0x0) goto LAB_00100382;
        goto LAB_001000a7;
      }
      if (0xff < param_6) goto LAB_00100382;
      lVar12 = param_6 + 2;
      local_6b8 = param_4 + lVar12;
      if (local_6b8 < 0x401) {
        local_448[0] = 0;
        local_6c8 = local_448;
        local_448[1] = (char)param_6;
        memcpy(local_448 + 2,param_5,param_6);
        memcpy(local_6c8 + lVar12,param_3,param_4);
        local_688 = (undefined1 *)0x0;
      }
      else {
        local_6c8 = (undefined1 *)CRYPTO_malloc((int)local_6b8,"crypto/ml_dsa/ml_dsa_sign.c",0x15f);
        if (local_6c8 == (undefined1 *)0x0) goto LAB_00100382;
        *local_6c8 = 0;
        local_6c8[1] = (char)param_6;
        memcpy(local_6c8 + 2,param_5,param_6);
        memcpy(local_6c8 + lVar12,param_3,param_4);
        if (param_3 == local_6c8) {
          local_6a8 = *(long *)(param_1 + 8);
          local_688 = (undefined1 *)0x0;
          local_6c8 = param_3;
        }
        else {
          local_6a8 = *(long *)(param_1 + 8);
          local_688 = local_6c8;
        }
      }
    }
    else {
LAB_001000a7:
      local_688 = (undefined1 *)0x0;
      local_6c8 = param_3;
      local_6b8 = param_4;
    }
    uVar19 = *(ulong *)(local_6a8 + 0x28);
    iVar2 = *(int *)(local_6a8 + 0x14);
    uVar26 = *(ulong *)(local_6a8 + 0x20);
    iVar33 = *(int *)(local_6a8 + 0x10);
    iVar10 = (int)uVar19;
    uVar3 = *(uint *)(local_6a8 + 0x18);
    iVar5 = (int)uVar26;
    iVar9 = 0x80;
    if (uVar3 == 0x17400) {
      iVar9 = 0xc0;
    }
    cnt = (ulong)(uint)(iVar9 * iVar5);
    lVar12 = ((ulong)(uint)(iVar5 * 2) + 1 + (ulong)(uint)(iVar5 * 5) + (ulong)(uint)(iVar10 * 3) +
             (ulong)(uint)(iVar10 * iVar5)) * 0x400 + cnt;
    d = CRYPTO_malloc((int)lVar12,"crypto/ml_dsa/ml_dsa_sign.c",0x55);
    if (d != (void *)0x0) {
      ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
      if (ctx != (EVP_MD_CTX *)0x0) {
        uVar19 = uVar19 & 0xffffffff;
        iVar33 = iVar33 >> 2;
        lVar13 = (long)d + cnt;
        uVar26 = uVar26 & 0xffffffff;
        local_5a8 = lVar13 + 0x400;
        __dest = (void *)(local_5a8 + (ulong)(uint)(iVar10 * iVar5) * 0x400);
        __dest_00 = (void *)((long)__dest + (ulong)(uint)(iVar5 * 5) * 0x400);
        lVar27 = uVar26 * 0x400;
        __dest_01 = (void *)((long)__dest + lVar27);
        pvVar1 = (void *)((long)__dest_01 + lVar27);
        local_5b8 = (void *)((ulong)(uint)(iVar10 * 2) * 0x400 + (long)__dest_00);
        local_578 = (uint *)((ulong)(uint)(iVar10 * 3) * 0x400 + (long)__dest_00);
        local_588 = local_578 + uVar26 * 0x100;
        local_5d8 = pvVar1;
        local_5d0 = uVar26;
        local_5c8 = (uint *)((long)pvVar1 + lVar27);
        local_5c0 = uVar26;
        local_5b0 = uVar19;
        local_5a0 = uVar26;
        local_598 = uVar19;
        local_580 = uVar19;
        local_570 = uVar26;
        local_568 = local_4d8;
        local_560 = (long)iVar33;
        iVar10 = ossl_ml_dsa_matrix_expand_A
                           (ctx,*(undefined8 *)(param_1 + 0x10),param_1 + 0x20,&local_5a8);
        if (iVar10 != 0) {
          if (param_2 == 0) {
            iVar10 = EVP_DigestInit_ex2(ctx,*(undefined8 *)(param_1 + 0x18),0);
            if (((iVar10 != 0) &&
                (iVar10 = EVP_DigestUpdate(ctx,(void *)(param_1 + 0x40),0x40), iVar10 != 0)) &&
               (iVar10 = EVP_DigestUpdate(ctx,local_6c8,local_6b8), iVar10 != 0)) {
              local_6c8 = local_558;
              iVar10 = EVP_DigestSqueeze(ctx,local_6c8,0x40);
              if (iVar10 != 0) goto LAB_001002f6;
            }
          }
          else if (local_6b8 == 0x40) {
LAB_001002f6:
            iVar10 = EVP_DigestInit_ex2(ctx,*(undefined8 *)(param_1 + 0x18),0);
            if (((iVar10 != 0) &&
                (iVar10 = EVP_DigestUpdate(ctx,(void *)(param_1 + 0x80),0x20), iVar10 != 0)) &&
               ((iVar10 = EVP_DigestUpdate(ctx,param_7,param_8), iVar10 != 0 &&
                ((iVar10 = EVP_DigestUpdate(ctx,local_6c8,0x40), iVar10 != 0 &&
                 (iVar10 = EVP_DigestSqueeze(ctx,&local_518,0x40), iVar10 != 0)))))) {
              memcpy(__dest_00,*(void **)(param_1 + 0xf0),*(long *)(param_1 + 0xf8) << 10);
              pvVar32 = __dest_00;
              if (uVar19 != 0) {
                do {
                  pvVar29 = (void *)((long)pvVar32 + 0x400);
                  ossl_ml_dsa_poly_ntt(pvVar32);
                  pvVar32 = pvVar29;
                } while ((void *)(uVar19 * 0x400 + (long)__dest_00) != pvVar29);
              }
              memcpy(__dest,*(void **)(param_1 + 0xe0),*(long *)(param_1 + 0xe8) << 10);
              pvVar32 = __dest;
              if (uVar26 == 0) {
                memcpy(__dest_01,*(void **)(param_1 + 0xd0),*(long *)(param_1 + 0xd8) << 10);
              }
              else {
                do {
                  pvVar29 = (void *)((long)pvVar32 + 0x400);
                  ossl_ml_dsa_poly_ntt(pvVar32);
                  pvVar32 = pvVar29;
                } while (__dest_01 != pvVar29);
                memcpy(__dest_01,*(void **)(param_1 + 0xd0),*(long *)(param_1 + 0xd8) << 10);
                pvVar32 = __dest_01;
                do {
                  pvVar29 = (void *)((long)pvVar32 + 0x400);
                  ossl_ml_dsa_poly_ntt(pvVar32);
                  pvVar32 = pvVar29;
                } while (pvVar1 != pvVar29);
              }
              local_618 = 0;
              puVar28 = (uint *)((long)pvVar1 + lVar27) + uVar26 * 0x100;
              __n = uVar19 * 0x400;
              pvVar1 = (void *)((long)__dest_00 + __n);
              do {
                uVar22 = local_618 & 0xffffffff;
                uVar4 = *(undefined8 *)(param_1 + 0x18);
                local_498 = local_518;
                uStack_490 = uStack_510;
                local_488 = local_508;
                uStack_480 = uStack_500;
                local_478 = local_4f8;
                uStack_470 = uStack_4f0;
                local_468 = local_4e8;
                uStack_460 = uStack_4e0;
                uVar23 = uVar19 + uVar22;
                pvVar32 = pvVar1;
                if (uVar19 != 0) {
                  do {
                    local_458 = (undefined2)uVar22;
                    uVar22 = uVar22 + 1;
                    ossl_ml_dsa_poly_expand_mask(pvVar32,&local_498,0x42,iVar2,ctx,uVar4);
                    pvVar32 = (void *)((long)pvVar32 + 0x400);
                  } while (uVar23 != uVar22);
                }
                memcpy(local_5b8,pvVar1,__n);
                uVar23 = 0;
                if (local_5b0 != 0) {
                  do {
                    uVar22 = uVar23 + 1;
                    ossl_ml_dsa_poly_ntt((void *)(uVar23 * 0x400 + (long)local_5b8));
                    uVar23 = uVar22;
                  } while (uVar22 < local_5b0);
                }
                ossl_ml_dsa_matrix_mult_vector(&local_5a8,&local_5b8,&local_5d8);
                uVar23 = 0;
                if (local_5d0 != 0) {
                  do {
                    uVar22 = uVar23 + 1;
                    ossl_ml_dsa_poly_ntt_inverse((void *)(uVar23 * 0x400 + (long)local_5d8));
                    uVar23 = uVar22;
                  } while (uVar22 < local_5d0);
                }
                uVar23 = 0;
                if (local_5c0 != 0) {
                  do {
                    puVar16 = local_5c8;
                    pvVar32 = local_5d8;
                    lVar31 = 0;
                    do {
                      uVar21 = ossl_ml_dsa_key_compress_high_bits
                                         (*(undefined4 *)((long)pvVar32 + lVar31 + uVar23 * 0x400),
                                          uVar3);
                      *(undefined4 *)((long)puVar16 + lVar31 + uVar23 * 0x400) = uVar21;
                      lVar31 = lVar31 + 4;
                    } while (lVar31 != 0x400);
                    uVar23 = uVar23 + 1;
                  } while (uVar23 < local_5c0);
                }
                ossl_ml_dsa_w1_encode(&local_5c8,uVar3,d,cnt);
                iVar10 = EVP_DigestInit_ex2(ctx,*(undefined8 *)(param_1 + 0x18),0);
                if ((((iVar10 == 0) || (iVar10 = EVP_DigestUpdate(ctx,local_6c8,0x40), iVar10 == 0))
                    || (iVar10 = EVP_DigestUpdate(ctx,d,cnt), iVar10 == 0)) ||
                   ((iVar10 = EVP_DigestSqueeze(ctx,local_4d8,(long)iVar33), iVar10 == 0 ||
                    (iVar10 = ossl_ml_dsa_poly_sample_in_ball
                                        (lVar13,local_4d8,iVar33,ctx,*(undefined8 *)(param_1 + 0x18)
                                        ), iVar10 == 0)))) break;
                sVar30 = 0;
                ossl_ml_dsa_poly_ntt();
                puVar16 = puVar28;
                if (uVar19 == 0) {
                  if (local_5b0 != 0) goto LAB_00100a2f;
                  pvVar32 = __dest;
                  if (uVar26 != 0) goto LAB_00100a7c;
                }
                else {
                  do {
                    lVar31 = (long)__dest_00 + sVar30;
                    lVar20 = (long)local_5b8 + sVar30;
                    sVar30 = sVar30 + 0x400;
                    ossl_ml_dsa_poly_ntt_mult(lVar31,lVar13,lVar20);
                  } while (__n != sVar30);
                  if (local_5b0 == 0) {
                    pvVar32 = __dest;
                    if (uVar26 != 0) goto LAB_00100a7c;
                  }
                  else {
LAB_00100a2f:
                    uVar23 = 0;
                    do {
                      uVar23 = uVar23 + 1;
                      ossl_ml_dsa_poly_ntt_inverse();
                    } while (uVar23 < local_5b0);
                    pvVar32 = __dest;
                    if (uVar26 != 0) {
LAB_00100a7c:
                      do {
                        pvVar29 = (void *)((long)pvVar32 + 0x400);
                        ossl_ml_dsa_poly_ntt_mult(pvVar32,lVar13,puVar16);
                        puVar16 = puVar16 + 0x100;
                        pvVar32 = pvVar29;
                      } while (__dest_01 != pvVar29);
                      puVar16 = puVar28;
                      do {
                        puVar16 = puVar16 + 0x100;
                        ossl_ml_dsa_poly_ntt_inverse();
                      } while (puVar28 + uVar26 * 0x100 != puVar16);
                    }
                    if (uVar19 == 0) goto LAB_00100c5d;
                  }
                  if (uVar19 < 3) {
                    uVar23 = 0;
                  }
                  else {
                    lVar31 = 0;
                    uVar22 = 0;
                    lVar20 = 0x800;
                    uVar23 = (uVar19 - 3 & 0xfffffffffffffffe) + 2;
                    do {
                      lVar15 = 0x400 - lVar31;
                      do {
                        uVar24 = *(int *)((long)local_5b8 + lVar15 + -0x400) +
                                 *(int *)(lVar15 + -0x400 + (long)pvVar1);
                        uVar11 = (int)((uVar24 ^ 0x7fe001 | uVar24 - 0x7fe001 ^ 0x7fe001) ^ uVar24)
                                 >> 0x1f;
                        *(uint *)((long)local_588 + lVar15 + -0x400) =
                             uVar24 & uVar11 | uVar24 - 0x7fe001 & ~uVar11;
                        uVar24 = *(int *)((long)pvVar1 + lVar15) +
                                 *(int *)((long)local_5b8 + lVar15);
                        uVar11 = (int)((uVar24 - 0x7fe001 ^ 0x7fe001 | uVar24 ^ 0x7fe001) ^ uVar24)
                                 >> 0x1f;
                        *(uint *)((long)local_588 + lVar15) =
                             ~uVar11 & uVar24 - 0x7fe001 | uVar11 & uVar24;
                        lVar15 = lVar15 + 4;
                      } while (lVar20 != lVar15);
                      uVar22 = uVar22 + 2;
                      lVar31 = lVar31 + -0x800;
                      lVar20 = lVar20 + 0x800;
                    } while (uVar23 != uVar22);
                  }
                  pvVar32 = (void *)((long)pvVar1 + uVar23 * 0x400);
                  pvVar29 = (void *)((long)local_5b8 + uVar23 * 0x400);
                  puVar16 = local_588 + uVar23 * 0x100;
                  do {
                    lVar31 = 0;
                    do {
                      uVar24 = *(int *)((long)pvVar32 + lVar31) + *(int *)((long)pvVar29 + lVar31);
                      uVar11 = (int)((uVar24 - 0x7fe001 ^ 0x7fe001 | uVar24 ^ 0x7fe001) ^ uVar24) >>
                               0x1f;
                      *(uint *)((long)puVar16 + lVar31) =
                           ~uVar11 & uVar24 - 0x7fe001 | uVar11 & uVar24;
                      lVar31 = lVar31 + 4;
                    } while (lVar31 != 0x400);
                    uVar23 = uVar23 + 1;
                    pvVar32 = (void *)((long)pvVar32 + 0x400);
                    pvVar29 = (void *)((long)pvVar29 + 0x400);
                    puVar16 = puVar16 + 0x100;
                  } while (uVar23 < uVar19);
                }
LAB_00100c5d:
                if (local_5d0 != 0) {
                  if (local_5d0 < 3) {
                    uVar23 = 0;
                  }
                  else {
                    lVar20 = 0x800;
                    lVar31 = 0;
                    uVar23 = (local_5d0 - 3 & 0xfffffffffffffffe) + 2;
                    uVar22 = 0;
                    do {
                      lVar15 = 0x400 - lVar31;
                      do {
                        uVar24 = *(int *)((long)local_5d8 + lVar15 + -0x400) -
                                 *(int *)((long)puVar28 + lVar15 + -0x400);
                        uVar11 = uVar24 + 0x7fe001;
                        uVar18 = (int)((uVar11 ^ 0x7fe001 | uVar24 ^ 0x7fe001) ^ uVar11) >> 0x1f;
                        *(uint *)((long)local_5c8 + lVar15 + -0x400) =
                             uVar11 & uVar18 | uVar24 & ~uVar18;
                        uVar18 = *(int *)((long)local_5d8 + lVar15) -
                                 *(int *)((long)puVar28 + lVar15);
                        uVar11 = uVar18 + 0x7fe001;
                        uVar24 = (int)((uVar18 ^ 0x7fe001 | uVar11 ^ 0x7fe001) ^ uVar11) >> 0x1f;
                        *(uint *)((long)local_5c8 + lVar15) = ~uVar24 & uVar18 | uVar24 & uVar11;
                        lVar15 = lVar15 + 4;
                      } while (lVar20 != lVar15);
                      uVar22 = uVar22 + 2;
                      lVar31 = lVar31 + -0x800;
                      lVar20 = lVar20 + 0x800;
                    } while (uVar23 != uVar22);
                  }
                  puVar16 = puVar28 + uVar23 * 0x100;
                  pvVar32 = (void *)((long)local_5d8 + uVar23 * 0x400);
                  puVar14 = local_5c8 + uVar23 * 0x100;
                  do {
                    lVar31 = 0;
                    do {
                      uVar18 = *(int *)((long)pvVar32 + lVar31) - *(int *)((long)puVar16 + lVar31);
                      uVar11 = uVar18 + 0x7fe001;
                      uVar24 = (int)((uVar18 ^ 0x7fe001 | uVar11 ^ 0x7fe001) ^ uVar11) >> 0x1f;
                      *(uint *)((long)puVar14 + lVar31) = ~uVar24 & uVar18 | uVar24 & uVar11;
                      lVar31 = lVar31 + 4;
                    } while (lVar31 != 0x400);
                    uVar23 = uVar23 + 1;
                    puVar16 = puVar16 + 0x100;
                    pvVar32 = (void *)((long)pvVar32 + 0x400);
                    puVar14 = puVar14 + 0x100;
                  } while (uVar23 < local_5d0);
                }
                uVar23 = 0;
                if (local_5c0 == 0) {
                  uVar23 = local_580;
                  if (local_580 != 0) goto LAB_00100e81;
LAB_00100faf:
                  uVar11 = (uint)uVar23;
                  uVar24 = 0;
                }
                else {
                  do {
                    puVar16 = local_5c8 + uVar23 * 0x100;
                    puVar14 = puVar16;
                    do {
                      puVar17 = puVar14 + 1;
                      uVar11 = ossl_ml_dsa_key_compress_low_bits(*puVar14,uVar3);
                      *puVar14 = uVar11;
                      puVar14 = puVar17;
                    } while (puVar16 + 0x100 != puVar17);
                    uVar23 = uVar23 + 1;
                  } while (uVar23 < local_5c0);
                  if (local_580 == 0) {
                    uVar23 = 0;
                  }
                  else {
LAB_00100e81:
                    uVar23 = 0;
                    puVar16 = local_588;
                    do {
                      puVar14 = puVar16 + 0x100;
                      do {
                        uVar11 = *puVar16;
                        puVar16 = puVar16 + 1;
                        uVar24 = (int)(0x3ff000 - uVar11 ^ uVar11 | uVar11 ^ 0x3ff000) >> 0x1f;
                        uVar18 = (uint)uVar23;
                        uVar24 = 0x7fe001 - uVar11 & uVar24 | uVar11 & ~uVar24;
                        uVar11 = (int)((uVar18 - uVar24 ^ uVar24 | uVar24 ^ uVar18) ^ uVar18) >>
                                 0x1f;
                        uVar23 = (ulong)(uVar24 & uVar11 | ~uVar11 & uVar18);
                      } while (puVar14 != puVar16);
                      puVar16 = puVar14;
                    } while (local_588 + local_580 * 0x100 != puVar14);
                  }
                  uVar11 = (uint)uVar23;
                  if (local_5c0 == 0) goto LAB_00100faf;
                  uVar24 = 0;
                  puVar16 = local_5c8;
                  do {
                    puVar14 = puVar16 + 0x100;
                    do {
                      uVar18 = *puVar16;
                      puVar16 = puVar16 + 1;
                      uVar25 = (int)((uVar18 + 0x80000000 | uVar18) ^ uVar18) >> 0x1f;
                      uVar25 = -uVar18 & ~uVar25 | uVar18 & uVar25;
                      uVar18 = (int)((uVar24 - uVar25 ^ uVar25 | uVar25 ^ uVar24) ^ uVar24) >> 0x1f;
                      uVar24 = uVar25 & uVar18 | ~uVar18 & uVar24;
                    } while (puVar14 != puVar16);
                    puVar16 = puVar14;
                  } while (local_5c8 + local_5c0 * 0x100 != puVar14);
                }
                iVar10 = *(int *)(local_6a8 + 0x34);
                if ((int)((uVar11 ^ ((iVar10 - iVar2) + uVar11 ^ iVar2 - iVar10 |
                                    iVar2 - iVar10 ^ uVar11)) &
                         (uVar24 ^ ((iVar10 - uVar3) + uVar24 ^ uVar3 - iVar10 |
                                   uVar3 - iVar10 ^ uVar24))) < 0) {
                  if (uVar26 != 0) {
                    lVar31 = 0;
                    do {
                      lVar20 = (long)local_5c8 + lVar31;
                      lVar15 = (long)__dest_01 + lVar31;
                      lVar31 = lVar31 + 0x400;
                      ossl_ml_dsa_poly_ntt_mult(lVar15,lVar13,lVar20);
                    } while (lVar27 != lVar31);
                  }
                  uVar11 = 0;
                  if (local_5c0 == 0) {
                    if (local_570 != 0) goto LAB_0010109f;
                    uVar23 = 0;
                  }
                  else {
                    uVar23 = 0;
                    do {
                      uVar22 = uVar23 + 1;
                      ossl_ml_dsa_poly_ntt_inverse(local_5c8 + uVar23 * 0x100);
                      uVar23 = uVar22;
                    } while (uVar22 < local_5c0);
                    if (local_570 == 0) {
                      if (local_5c0 == 0) {
                        uVar23 = 0;
                        goto LAB_0010129f;
                      }
LAB_0010117c:
                      uVar11 = 0;
                      puVar16 = local_5c8;
                      do {
                        puVar14 = puVar16 + 0x100;
                        do {
                          uVar24 = *puVar16;
                          puVar16 = puVar16 + 1;
                          uVar18 = (int)(0x3ff000 - uVar24 ^ uVar24 | uVar24 ^ 0x3ff000) >> 0x1f;
                          uVar18 = 0x7fe001 - uVar24 & uVar18 | uVar24 & ~uVar18;
                          uVar24 = (int)((uVar11 - uVar18 ^ uVar18 | uVar18 ^ uVar11) ^ uVar11) >>
                                   0x1f;
                          uVar11 = uVar18 & uVar24 | ~uVar24 & uVar11;
                        } while (puVar14 != puVar16);
                        puVar16 = puVar14;
                      } while (local_5c8 + local_5c0 * 0x100 != puVar14);
                    }
                    else {
LAB_0010109f:
                      uVar23 = 0;
                      puVar16 = puVar28;
                      do {
                        puVar17 = local_578;
                        puVar14 = local_5c8;
                        pvVar32 = local_5d8;
                        lVar20 = 0;
                        lVar31 = uVar23 * 0x400;
                        do {
                          uVar21 = ossl_ml_dsa_key_compress_make_hint
                                             (*(undefined4 *)((long)puVar14 + lVar20 + lVar31),
                                              *(undefined4 *)((long)puVar16 + lVar20),uVar3,
                                              *(undefined4 *)((long)pvVar32 + lVar20 + lVar31));
                          *(undefined4 *)((long)puVar17 + lVar20 + lVar31) = uVar21;
                          lVar20 = lVar20 + 4;
                        } while (lVar20 != 0x400);
                        puVar16 = puVar16 + 0x100;
                        uVar23 = uVar23 + 1;
                      } while (uVar23 < local_570);
                      if (local_5c0 != 0) goto LAB_0010117c;
                    }
                    uVar23 = local_570;
                    if (local_570 != 0) {
                      uVar23 = 0;
                      puVar16 = local_578 + 0x100;
                      puVar14 = local_578;
                      puVar17 = puVar16;
                      while( true ) {
                        lVar31 = 0;
                        lVar20 = 0;
                        do {
                          uVar24 = *puVar14;
                          puVar6 = puVar14 + 1;
                          puVar7 = puVar14 + 2;
                          puVar8 = puVar14 + 3;
                          puVar14 = puVar14 + 4;
                          lVar31 = lVar31 + (ulong)uVar24 + (ulong)*puVar7;
                          lVar20 = lVar20 + (ulong)*puVar6 + (ulong)*puVar8;
                        } while (puVar14 != puVar16);
                        puVar16 = puVar16 + 0x100;
                        uVar23 = uVar23 + lVar31 + lVar20;
                        if (puVar17 == local_578 + local_570 * 0x100) break;
                        puVar14 = puVar17;
                        puVar17 = puVar17 + 0x100;
                      }
                    }
                  }
LAB_0010129f:
                  uVar24 = *(uint *)(local_6a8 + 0x38);
                  uVar18 = (uint)uVar23;
                  if ((int)((uVar11 - uVar3 ^ uVar3 | uVar3 ^ uVar11) ^ uVar11) < 0 &&
                      -1 < (int)((uVar24 - uVar18 ^ uVar18 | uVar18 ^ uVar24) ^ uVar24))
                  goto code_r0x001012d6;
                }
                local_618 = local_618 + uVar19;
              } while( true );
            }
          }
        }
      }
      uVar21 = 0;
      goto LAB_00100318;
    }
    uVar21 = 0;
    goto LAB_0010034b;
  }
  uVar21 = 1;
  goto LAB_0010035f;
code_r0x001012d6:
  uVar21 = ossl_ml_dsa_sig_encode(&local_588,local_6a8,param_10);
LAB_00100318:
  EVP_MD_CTX_free(ctx);
  CRYPTO_clear_free(d,lVar12,"crypto/ml_dsa/ml_dsa_sign.c",199);
  OPENSSL_cleanse(&local_518,0x40);
LAB_0010034b:
  CRYPTO_free(local_688);
LAB_0010035f:
  if (param_11 != (undefined8 *)0x0) {
    *param_11 = *(undefined8 *)(*(long *)(param_1 + 8) + 0x50);
  }
LAB_00100384:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar21;
}



bool ossl_ml_dsa_verify(long param_1,int param_2,undefined1 *param_3,size_t param_4,void *param_5,
                       ulong param_6,int param_7,undefined8 param_8,undefined8 param_9)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  long lVar10;
  ulong cnt;
  void *d;
  EVP_MD_CTX *ctx;
  long lVar11;
  long lVar12;
  size_t __n;
  long lVar13;
  ulong uVar14;
  uint *puVar15;
  uint uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  uint *puVar22;
  uint uVar23;
  ulong uVar24;
  ulong uVar25;
  long lVar26;
  int iVar27;
  ulong uVar28;
  long in_FS_OFFSET;
  bool bVar29;
  size_t local_5d0;
  undefined1 *local_5c8;
  undefined1 *local_5b8;
  long local_568;
  ulong local_560;
  long local_558;
  ulong local_550;
  ulong local_548;
  uint *local_538;
  ulong local_530;
  long local_528;
  ulong local_520;
  undefined1 *local_518;
  size_t local_510;
  undefined1 local_508 [64];
  undefined1 local_4c8 [64];
  undefined1 local_488 [64];
  undefined1 local_448 [1032];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar10 = ossl_ml_dsa_key_get_pub();
  if (lVar10 == 0) goto LAB_00101732;
  if (param_2 == 0) {
    if (param_7 == 0) {
      if (param_3 == (undefined1 *)0x0) goto LAB_00101732;
      goto LAB_00101426;
    }
    if (0xff < param_6) {
LAB_00101732:
      bVar29 = false;
      goto LAB_00101654;
    }
    lVar10 = param_6 + 2;
    local_5d0 = param_4 + lVar10;
    if (local_5d0 < 0x401) {
      local_448[0] = 0;
      local_5c8 = local_448;
      local_448[1] = (char)param_6;
      memcpy(local_448 + 2,param_5,param_6);
      memcpy(local_5c8 + lVar10,param_3,param_4);
      local_5b8 = (undefined1 *)0x0;
    }
    else {
      local_5c8 = (undefined1 *)CRYPTO_malloc((int)local_5d0,"crypto/ml_dsa/ml_dsa_sign.c",0x15f);
      if (local_5c8 == (undefined1 *)0x0) goto LAB_00101732;
      local_5c8[1] = (char)param_6;
      *local_5c8 = 0;
      memcpy(local_5c8 + 2,param_5,param_6);
      memcpy(local_5c8 + lVar10,param_3,param_4);
      local_5b8 = local_5c8;
      if (param_3 == local_5c8) {
        local_5b8 = (undefined1 *)0x0;
        local_5c8 = param_3;
      }
    }
  }
  else {
LAB_00101426:
    local_5b8 = (undefined1 *)0x0;
    local_5d0 = param_4;
    local_5c8 = param_3;
  }
  lVar10 = *(long *)(param_1 + 8);
  uVar20 = *(ulong *)(lVar10 + 0x20);
  iVar9 = *(int *)(lVar10 + 0x18);
  iVar27 = *(int *)(lVar10 + 0x10);
  iVar5 = (int)*(ulong *)(lVar10 + 0x28);
  iVar3 = (int)uVar20;
  uVar21 = (ulong)(uint)(iVar5 + iVar3);
  uVar25 = *(ulong *)(lVar10 + 0x28) & 0xffffffff;
  uVar28 = (ulong)(uint)(iVar5 * iVar3);
  iVar4 = 0x80;
  if (iVar9 == 0x17400) {
    iVar4 = 0xc0;
  }
  cnt = (ulong)(uint)(iVar4 * iVar3);
  d = CRYPTO_malloc((iVar5 + iVar3 + 1U + iVar5 + iVar3 * 2 + iVar5 * iVar3) * 0x400 + iVar4 * iVar3
                    ,"crypto/ml_dsa/ml_dsa_sign.c",0xec);
  if (d == (void *)0x0) {
    bVar29 = false;
  }
  else {
    ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
    if (ctx == (EVP_MD_CTX *)0x0) {
LAB_00101620:
      bVar29 = false;
    }
    else {
      uVar20 = uVar20 & 0xffffffff;
      iVar27 = iVar27 >> 2;
      __n = (size_t)iVar27;
      lVar11 = (long)d + cnt;
      local_558 = lVar11 + 0x400;
      lVar19 = uVar20 * 0x400;
      local_528 = local_558 + uVar28 * 0x400;
      local_538 = (uint *)(local_528 + lVar19);
      lVar26 = local_528 + uVar21 * 0x400;
      local_568 = lVar26;
      local_560 = uVar20;
      local_550 = uVar20;
      local_548 = uVar25;
      local_530 = uVar25;
      local_520 = uVar20;
      local_518 = local_488;
      local_510 = __n;
      iVar5 = ossl_ml_dsa_sig_decode(&local_538,param_8,param_9,*(undefined8 *)(param_1 + 8));
      if (iVar5 == 0) goto LAB_00101620;
      iVar5 = ossl_ml_dsa_matrix_expand_A
                        (ctx,*(undefined8 *)(param_1 + 0x10),param_1 + 0x20,&local_558);
      if (iVar5 == 0) goto LAB_00101620;
      if (param_2 == 0) {
        iVar5 = EVP_DigestInit_ex2(ctx,*(undefined8 *)(param_1 + 0x18),0);
        if (((iVar5 != 0) &&
            (iVar5 = EVP_DigestUpdate(ctx,(void *)(param_1 + 0x40),0x40), iVar5 != 0)) &&
           (iVar5 = EVP_DigestUpdate(ctx,local_5c8,local_5d0), iVar5 != 0)) {
          local_5c8 = local_508;
          iVar5 = EVP_DigestSqueeze(ctx,local_5c8,0x40);
          if (iVar5 != 0) goto LAB_001015ee;
        }
        goto LAB_00101620;
      }
      if (local_5d0 != 0x40) goto LAB_00101620;
LAB_001015ee:
      iVar27 = ossl_ml_dsa_poly_sample_in_ball
                         (lVar11,local_488,iVar27,ctx,*(undefined8 *)(param_1 + 0x18));
      if (iVar27 == 0) goto LAB_00101620;
      lVar26 = lVar26 + lVar19;
      ossl_ml_dsa_poly_ntt(lVar11);
      uVar25 = *(ulong *)(param_1 + 200);
      lVar18 = *(long *)(param_1 + 0xc0);
      if (uVar25 != 0) {
        if (uVar25 < 3) {
          uVar14 = 0;
        }
        else {
          uVar24 = 0;
          lVar13 = (uVar20 + 1 + uVar21 + uVar28) * 0x400 + cnt + (long)d;
          uVar14 = (uVar25 - 3 & 0xfffffffffffffffe) + 2;
          lVar17 = lVar18;
          do {
            lVar12 = 0;
            do {
              piVar1 = (int *)(lVar17 + lVar12);
              iVar27 = piVar1[1];
              iVar5 = piVar1[2];
              iVar3 = piVar1[3];
              piVar2 = (int *)(lVar13 + lVar12);
              *piVar2 = *piVar1 << 0xd;
              piVar2[1] = iVar27 << 0xd;
              piVar2[2] = iVar5 << 0xd;
              piVar2[3] = iVar3 << 0xd;
              piVar1 = (int *)(lVar17 + 0x400 + lVar12);
              iVar27 = piVar1[1];
              iVar5 = piVar1[2];
              iVar3 = piVar1[3];
              piVar2 = (int *)(lVar13 + 0x400 + lVar12);
              *piVar2 = *piVar1 << 0xd;
              piVar2[1] = iVar27 << 0xd;
              piVar2[2] = iVar5 << 0xd;
              piVar2[3] = iVar3 << 0xd;
              lVar12 = lVar12 + 0x10;
            } while (lVar12 != 0x400);
            uVar24 = uVar24 + 2;
            lVar17 = lVar17 + 0x800;
            lVar13 = lVar13 + 0x800;
          } while (uVar24 != uVar14);
        }
        lVar18 = uVar14 * 0x400 + lVar18;
        lVar17 = cnt + 0x400 + (uVar21 + uVar28 + uVar20 + uVar14) * 0x400 + (long)d;
        do {
          lVar13 = 0;
          do {
            piVar1 = (int *)(lVar18 + lVar13);
            iVar27 = piVar1[1];
            iVar5 = piVar1[2];
            iVar3 = piVar1[3];
            piVar2 = (int *)(lVar17 + lVar13);
            *piVar2 = *piVar1 << 0xd;
            piVar2[1] = iVar27 << 0xd;
            piVar2[2] = iVar5 << 0xd;
            piVar2[3] = iVar3 << 0xd;
            lVar13 = lVar13 + 0x10;
          } while (lVar13 != 0x400);
          uVar14 = uVar14 + 1;
          lVar18 = lVar18 + 0x400;
          lVar17 = lVar17 + 0x400;
        } while (uVar14 < uVar25);
      }
      lVar18 = lVar26;
      if (uVar20 != 0) {
        do {
          lVar13 = lVar18 + 0x400;
          ossl_ml_dsa_poly_ntt(lVar18);
          lVar18 = lVar13;
          lVar17 = lVar26;
        } while (lVar13 != lVar19 + lVar26);
        do {
          lVar18 = lVar17 + 0x400;
          ossl_ml_dsa_poly_ntt_mult(lVar17,lVar11,lVar17);
          lVar17 = lVar18;
        } while (lVar18 != lVar19 + lVar26);
      }
      uVar16 = 0;
      if (local_530 != 0) {
        uVar16 = 0;
        puVar15 = local_538;
        do {
          puVar22 = puVar15 + 0x100;
          do {
            uVar7 = *puVar15;
            puVar15 = puVar15 + 1;
            uVar6 = (int)(0x3ff000 - uVar7 ^ uVar7 | uVar7 ^ 0x3ff000) >> 0x1f;
            uVar6 = 0x7fe001 - uVar7 & uVar6 | uVar7 & ~uVar6;
            uVar7 = (int)((uVar16 - uVar6 ^ uVar6 | uVar6 ^ uVar16) ^ uVar16) >> 0x1f;
            uVar16 = uVar6 & uVar7 | ~uVar7 & uVar16;
          } while (puVar22 != puVar15);
          puVar15 = puVar22;
        } while (local_538 + local_530 * 0x100 != puVar22);
        uVar20 = 0;
        do {
          uVar28 = uVar20 + 1;
          ossl_ml_dsa_poly_ntt(local_538 + uVar20 * 0x100);
          uVar20 = uVar28;
        } while (uVar28 < local_530);
      }
      ossl_ml_dsa_matrix_mult_vector(&local_558,&local_538,&local_568);
      if (local_560 != 0) {
        if (local_560 < 3) {
          uVar20 = 0;
        }
        else {
          lVar11 = 0;
          uVar28 = 0;
          lVar19 = 0x800;
          uVar20 = (local_560 - 3 & 0xfffffffffffffffe) + 2;
          do {
            lVar18 = 0x400 - lVar11;
            do {
              uVar23 = *(int *)(local_568 + -0x400 + lVar18) - *(int *)(lVar26 + -0x400 + lVar18);
              uVar7 = uVar23 + 0x7fe001;
              uVar6 = (int)((uVar7 ^ 0x7fe001 | uVar23 ^ 0x7fe001) ^ uVar7) >> 0x1f;
              *(uint *)(local_568 + -0x400 + lVar18) = uVar7 & uVar6 | uVar23 & ~uVar6;
              uVar23 = *(int *)(local_568 + lVar18) - *(int *)(lVar26 + lVar18);
              uVar7 = uVar23 + 0x7fe001;
              uVar6 = (int)((uVar23 ^ 0x7fe001 | uVar7 ^ 0x7fe001) ^ uVar7) >> 0x1f;
              *(uint *)(local_568 + lVar18) = ~uVar6 & uVar23 | uVar6 & uVar7;
              lVar18 = lVar18 + 4;
            } while (lVar19 != lVar18);
            lVar11 = lVar11 + -0x800;
            lVar19 = lVar19 + 0x800;
            uVar28 = uVar28 + 2;
          } while (uVar28 != uVar20);
        }
        lVar26 = lVar26 + uVar20 * 0x400;
        lVar11 = uVar20 * 0x400 + local_568;
        do {
          lVar19 = 0;
          do {
            uVar23 = *(int *)(lVar11 + lVar19) - *(int *)(lVar26 + lVar19);
            uVar7 = uVar23 + 0x7fe001;
            uVar6 = (int)((uVar23 ^ 0x7fe001 | uVar7 ^ 0x7fe001) ^ uVar7) >> 0x1f;
            *(uint *)(lVar11 + lVar19) = ~uVar6 & uVar23 | uVar6 & uVar7;
            lVar19 = lVar19 + 4;
          } while (lVar19 != 0x400);
          uVar20 = uVar20 + 1;
          lVar26 = lVar26 + 0x400;
          lVar11 = lVar11 + 0x400;
        } while (uVar20 < local_560);
        uVar20 = 0;
        do {
          uVar28 = uVar20 + 1;
          ossl_ml_dsa_poly_ntt_inverse(local_568 + uVar20 * 0x400);
          uVar20 = uVar28;
        } while (uVar28 < local_560);
        if (local_560 != 0) {
          uVar20 = 0;
          do {
            lVar19 = 0;
            lVar11 = local_568 + uVar20 * 0x400;
            lVar26 = uVar20 * 0x400 + local_528;
            do {
              uVar8 = ossl_ml_dsa_key_compress_use_hint
                                (*(undefined4 *)(lVar26 + lVar19),*(undefined4 *)(lVar11 + lVar19),
                                 iVar9);
              *(undefined4 *)(lVar11 + lVar19) = uVar8;
              lVar19 = lVar19 + 4;
            } while (lVar19 != 0x400);
            uVar20 = uVar20 + 1;
          } while (uVar20 < local_560);
        }
      }
      ossl_ml_dsa_w1_encode(&local_568,iVar9,d,cnt);
      iVar9 = EVP_DigestInit_ex2(ctx,*(undefined8 *)(param_1 + 0x18),0);
      if (((iVar9 == 0) || (iVar9 = EVP_DigestUpdate(ctx,local_5c8,0x40), iVar9 == 0)) ||
         ((iVar9 = EVP_DigestUpdate(ctx,d,cnt), iVar9 == 0 ||
          (iVar9 = EVP_DigestUpdate(ctx,(void *)0x0,0), iVar9 == 0)))) goto LAB_00101620;
      iVar9 = EVP_DigestSqueeze(ctx,local_4c8,__n);
      if ((iVar9 == 0) || ((uint)(*(int *)(lVar10 + 0x14) - *(int *)(lVar10 + 0x34)) <= uVar16))
      goto LAB_00101620;
      iVar9 = memcmp(local_4c8,local_518,__n);
      bVar29 = iVar9 == 0;
    }
    CRYPTO_free(d);
    EVP_MD_CTX_free(ctx);
  }
  CRYPTO_free(local_5b8);
LAB_00101654:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar29;
}


