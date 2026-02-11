
undefined1 *
msg_encode_part_0_constprop_0
          (void *param_1,size_t param_2,void *param_3,ulong param_4,undefined1 *param_5,
          ulong *param_6)

{
  ulong uVar1;
  
  if (0xff < param_4) {
    return (undefined1 *)0x0;
  }
  uVar1 = param_2 + 2 + param_4;
  *param_6 = uVar1;
  if (0x400 < uVar1) {
    param_5 = (undefined1 *)CRYPTO_malloc((int)uVar1,"crypto/ml_dsa/ml_dsa_sign.c",0x15f);
    if (param_5 == (undefined1 *)0x0) {
      return (undefined1 *)0x0;
    }
  }
  param_5[1] = (char)param_4;
  *param_5 = 0;
  memcpy(param_5 + 2,param_3,param_4);
  memcpy(param_5 + param_4 + 2,param_1,param_2);
  return param_5;
}



undefined4
ossl_ml_dsa_sign(long param_1,int param_2,undefined1 *param_3,size_t param_4,undefined8 param_5,
                undefined8 param_6,void *param_7,size_t param_8,int param_9,long param_10,
                undefined8 *param_11,ulong param_12)

{
  void *__dest;
  void *__dest_00;
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  void *d;
  EVP_MD_CTX *ctx;
  long lVar9;
  size_t sVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  int *piVar14;
  uint uVar15;
  void *__dest_01;
  long lVar16;
  long lVar17;
  int *piVar18;
  undefined4 uVar19;
  ulong uVar20;
  uint uVar21;
  ulong cnt;
  ulong uVar22;
  void *pvVar23;
  uint *puVar24;
  int *piVar25;
  long lVar26;
  uint *puVar27;
  uint *puVar28;
  ulong uVar29;
  int iVar30;
  void *pvVar31;
  void *pvVar32;
  long lVar33;
  size_t sVar34;
  void *pvVar35;
  uint *puVar36;
  int iVar37;
  long in_FS_OFFSET;
  undefined1 *local_6f0;
  undefined8 *local_6c0;
  undefined1 *local_6b0;
  ulong local_648;
  size_t local_5e0;
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
  int *local_578;
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
  local_5e0 = 0;
  lVar7 = ossl_ml_dsa_key_get_priv();
  if (lVar7 == 0) {
LAB_0010048b:
    uVar19 = 0;
    goto LAB_0010048d;
  }
  if (param_10 != 0) {
    lVar7 = *(long *)(param_1 + 8);
    if (param_12 < *(ulong *)(lVar7 + 0x50)) goto LAB_0010048b;
    local_6f0 = param_3;
    sVar10 = param_4;
    if (param_2 == 0) {
      if (param_9 == 0) {
        local_5e0 = param_4;
        sVar10 = param_4;
        if (param_3 == (undefined1 *)0x0) goto LAB_0010048b;
        goto LAB_001004dc;
      }
      local_6f0 = (undefined1 *)
                  msg_encode_part_0_constprop_0
                            (param_3,param_4,param_5,param_6,local_448,&local_5e0);
      if (local_6f0 == (undefined1 *)0x0) goto LAB_0010048b;
      lVar7 = *(long *)(param_1 + 8);
      sVar10 = local_5e0;
      if ((local_6f0 == local_448) || (local_6b0 = local_6f0, param_3 == local_6f0))
      goto LAB_001004dc;
    }
    else {
LAB_001004dc:
      local_5e0 = sVar10;
      local_6b0 = (undefined1 *)0x0;
    }
    sVar10 = local_5e0;
    uVar13 = *(ulong *)(lVar7 + 0x28);
    iVar1 = *(int *)(lVar7 + 0x14);
    uVar22 = *(ulong *)(lVar7 + 0x20);
    uVar2 = *(uint *)(lVar7 + 0x18);
    iVar6 = (int)uVar13;
    iVar37 = *(int *)(lVar7 + 0x10);
    iVar30 = (int)uVar22;
    iVar5 = 0x80;
    if (uVar2 == 0x17400) {
      iVar5 = 0xc0;
    }
    cnt = (ulong)(uint)(iVar5 * iVar30);
    lVar8 = ((ulong)(uint)(iVar30 * 2) + 1 + (ulong)(uint)(iVar30 * 5) + (ulong)(uint)(iVar6 * 3) +
            (ulong)(uint)(iVar6 * iVar30)) * 0x400 + cnt;
    d = CRYPTO_malloc((int)lVar8,"crypto/ml_dsa/ml_dsa_sign.c",0x55);
    if (d != (void *)0x0) {
      ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
      if (ctx != (EVP_MD_CTX *)0x0) {
        uVar22 = uVar22 & 0xffffffff;
        uVar13 = uVar13 & 0xffffffff;
        iVar37 = iVar37 >> 2;
        lVar9 = (long)d + cnt;
        lVar26 = uVar22 * 0x400;
        local_5a8 = lVar9 + 0x400;
        __dest = (void *)(local_5a8 + (ulong)(uint)(iVar6 * iVar30) * 0x400);
        __dest_00 = (void *)((long)__dest + lVar26);
        pvVar23 = (void *)((long)__dest_00 + lVar26);
        __dest_01 = (void *)((long)__dest + (ulong)(uint)(iVar30 * 5) * 0x400);
        local_5b8 = (void *)((ulong)(uint)(iVar6 * 2) * 0x400 + (long)__dest_01);
        local_578 = (int *)((ulong)(uint)(iVar6 * 3) * 0x400 + (long)__dest_01);
        local_588 = (uint *)(local_578 + uVar22 * 0x100);
        local_5d8 = pvVar23;
        local_5d0 = uVar22;
        local_5c8 = (uint *)((long)pvVar23 + lVar26);
        local_5c0 = uVar22;
        local_5b0 = uVar13;
        local_5a0 = uVar22;
        local_598 = uVar13;
        local_580 = uVar13;
        local_570 = uVar22;
        local_568 = local_4d8;
        local_560 = (long)iVar37;
        iVar6 = ossl_ml_dsa_matrix_expand_A
                          (ctx,*(undefined8 *)(param_1 + 0x10),param_1 + 0x20,&local_5a8);
        if (iVar6 != 0) {
          if (param_2 == 0) {
            iVar6 = EVP_DigestInit_ex2(ctx,*(undefined8 *)(param_1 + 0x18),0);
            if (((iVar6 != 0) &&
                (iVar6 = EVP_DigestUpdate(ctx,(void *)(param_1 + 0x40),0x40), iVar6 != 0)) &&
               (iVar6 = EVP_DigestUpdate(ctx,local_6f0,sVar10), iVar6 != 0)) {
              local_6f0 = local_558;
              iVar6 = EVP_DigestSqueeze(ctx,local_6f0,0x40);
              if (iVar6 != 0) goto LAB_00100405;
            }
          }
          else if (sVar10 == 0x40) {
LAB_00100405:
            iVar6 = EVP_DigestInit_ex2(ctx,*(undefined8 *)(param_1 + 0x18),0);
            if (((iVar6 != 0) &&
                (iVar6 = EVP_DigestUpdate(ctx,(void *)(param_1 + 0x80),0x20), iVar6 != 0)) &&
               ((iVar6 = EVP_DigestUpdate(ctx,param_7,param_8), iVar6 != 0 &&
                ((iVar6 = EVP_DigestUpdate(ctx,local_6f0,0x40), iVar6 != 0 &&
                 (iVar6 = EVP_DigestSqueeze(ctx,&local_518,0x40), iVar6 != 0)))))) {
              memcpy(__dest_01,*(void **)(param_1 + 0xf0),*(long *)(param_1 + 0xf8) << 10);
              pvVar32 = __dest_01;
              if (uVar13 != 0) {
                do {
                  pvVar31 = (void *)((long)pvVar32 + 0x400);
                  ossl_ml_dsa_poly_ntt(pvVar32);
                  pvVar32 = pvVar31;
                } while ((void *)(uVar13 * 0x400 + (long)__dest_01) != pvVar31);
              }
              memcpy(__dest,*(void **)(param_1 + 0xe0),*(long *)(param_1 + 0xe8) << 10);
              pvVar32 = __dest;
              if (uVar22 == 0) {
                memcpy(__dest_00,*(void **)(param_1 + 0xd0),*(long *)(param_1 + 0xd8) << 10);
              }
              else {
                do {
                  pvVar31 = (void *)((long)pvVar32 + 0x400);
                  ossl_ml_dsa_poly_ntt(pvVar32);
                  pvVar32 = pvVar31;
                } while (__dest_00 != pvVar31);
                memcpy(__dest_00,*(void **)(param_1 + 0xd0),*(long *)(param_1 + 0xd8) << 10);
                pvVar32 = __dest_00;
                do {
                  pvVar31 = (void *)((long)pvVar32 + 0x400);
                  ossl_ml_dsa_poly_ntt(pvVar32);
                  pvVar32 = pvVar31;
                } while (pvVar23 != pvVar31);
              }
              sVar10 = uVar13 * 0x400;
              pvVar32 = (void *)((long)__dest_01 + sVar10);
              puVar27 = (uint *)((long)pvVar23 + lVar26) + uVar22 * 0x100;
              local_648 = 0;
              do {
                uVar20 = local_648 & 0xffffffff;
                uVar3 = *(undefined8 *)(param_1 + 0x18);
                local_498 = local_518;
                uStack_490 = uStack_510;
                local_488 = local_508;
                uStack_480 = uStack_500;
                local_478 = local_4f8;
                uStack_470 = uStack_4f0;
                uVar29 = uVar13 + uVar20;
                local_468 = local_4e8;
                uStack_460 = uStack_4e0;
                pvVar23 = pvVar32;
                if (uVar13 != 0) {
                  do {
                    local_458 = (undefined2)uVar20;
                    uVar20 = uVar20 + 1;
                    ossl_ml_dsa_poly_expand_mask(pvVar23,&local_498,0x42,iVar1,ctx,uVar3);
                    pvVar23 = (void *)((long)pvVar23 + 0x400);
                  } while (uVar29 != uVar20);
                }
                memcpy(local_5b8,pvVar32,sVar10);
                uVar29 = 0;
                if (local_5b0 != 0) {
                  do {
                    uVar20 = uVar29 + 1;
                    ossl_ml_dsa_poly_ntt((void *)(uVar29 * 0x400 + (long)local_5b8));
                    uVar29 = uVar20;
                  } while (uVar20 < local_5b0);
                }
                ossl_ml_dsa_matrix_mult_vector(&local_5a8,&local_5b8,&local_5d8);
                uVar29 = 0;
                if (local_5d0 != 0) {
                  do {
                    uVar20 = uVar29 + 1;
                    ossl_ml_dsa_poly_ntt_inverse((void *)(uVar29 * 0x400 + (long)local_5d8));
                    uVar29 = uVar20;
                  } while (uVar20 < local_5d0);
                }
                uVar29 = 0;
                if (local_5c0 != 0) {
                  do {
                    puVar24 = local_5c8;
                    pvVar23 = local_5d8;
                    lVar33 = 0;
                    do {
                      uVar19 = ossl_ml_dsa_key_compress_high_bits
                                         (*(undefined4 *)((long)pvVar23 + lVar33 + uVar29 * 0x400),
                                          uVar2);
                      *(undefined4 *)((long)puVar24 + lVar33 + uVar29 * 0x400) = uVar19;
                      lVar33 = lVar33 + 4;
                    } while (lVar33 != 0x400);
                    uVar29 = uVar29 + 1;
                  } while (uVar29 < local_5c0);
                }
                ossl_ml_dsa_w1_encode(&local_5c8,uVar2,d,cnt);
                iVar6 = EVP_DigestInit_ex2(ctx,*(undefined8 *)(param_1 + 0x18),0);
                if ((((iVar6 == 0) || (iVar6 = EVP_DigestUpdate(ctx,local_6f0,0x40), iVar6 == 0)) ||
                    (iVar6 = EVP_DigestUpdate(ctx,d,cnt), iVar6 == 0)) ||
                   ((iVar6 = EVP_DigestSqueeze(ctx,local_4d8,(long)iVar37), iVar6 == 0 ||
                    (iVar6 = ossl_ml_dsa_poly_sample_in_ball
                                       (lVar9,local_4d8,iVar37,ctx,*(undefined8 *)(param_1 + 0x18),
                                        *(undefined4 *)(lVar7 + 0xc)), iVar6 == 0)))) break;
                sVar34 = 0;
                ossl_ml_dsa_poly_ntt(lVar9);
                pvVar23 = pvVar32;
                puVar24 = puVar27;
                if (uVar13 == 0) {
                  if (local_5b0 != 0) goto LAB_00100a6b;
                  pvVar31 = __dest;
                  if (uVar22 != 0) goto LAB_00100aad;
                }
                else {
                  do {
                    lVar33 = (long)__dest_01 + sVar34;
                    lVar16 = (long)local_5b8 + sVar34;
                    sVar34 = sVar34 + 0x400;
                    ossl_ml_dsa_poly_ntt_mult(lVar33,lVar9,lVar16);
                  } while (sVar10 != sVar34);
                  if (local_5b0 == 0) {
                    pvVar35 = local_5b8;
                    puVar28 = local_588;
                    pvVar31 = __dest;
                    if (uVar22 != 0) goto LAB_00100aad;
                  }
                  else {
LAB_00100a6b:
                    uVar29 = 0;
                    do {
                      uVar20 = uVar29 + 1;
                      ossl_ml_dsa_poly_ntt_inverse((void *)(uVar29 * 0x400 + (long)local_5b8));
                      uVar29 = uVar20;
                    } while (uVar20 < local_5b0);
                    pvVar31 = __dest;
                    if (uVar22 != 0) {
LAB_00100aad:
                      do {
                        pvVar35 = (void *)((long)pvVar31 + 0x400);
                        ossl_ml_dsa_poly_ntt_mult(pvVar31,lVar9,puVar24);
                        puVar28 = puVar27;
                        pvVar31 = pvVar35;
                        puVar24 = puVar24 + 0x100;
                      } while (__dest_00 != pvVar35);
                      do {
                        puVar24 = puVar28 + 0x100;
                        ossl_ml_dsa_poly_ntt_inverse(puVar28);
                        puVar28 = puVar24;
                      } while (puVar27 + uVar22 * 0x100 != puVar24);
                    }
                    pvVar35 = local_5b8;
                    puVar28 = local_588;
                    if (uVar13 == 0) goto LAB_00100b7a;
                  }
                  do {
                    lVar33 = 0;
                    do {
                      uVar11 = *(int *)((long)pvVar35 + lVar33) + *(int *)((long)pvVar23 + lVar33);
                      uVar15 = (int)((uVar11 ^ 0x7fe001 | uVar11 - 0x7fe001 ^ 0x7fe001) ^ uVar11) >>
                               0x1f;
                      *(uint *)((long)puVar28 + lVar33) =
                           uVar11 & uVar15 | uVar11 - 0x7fe001 & ~uVar15;
                      lVar33 = lVar33 + 4;
                    } while (lVar33 != 0x400);
                    pvVar23 = (void *)((long)pvVar23 + 0x400);
                    pvVar35 = (void *)((long)pvVar35 + 0x400);
                    puVar28 = puVar28 + 0x100;
                  } while ((void *)(sVar10 + (long)pvVar32) != pvVar23);
                }
LAB_00100b7a:
                if (local_5d0 != 0) {
                  puVar24 = puVar27;
                  pvVar23 = local_5d8;
                  puVar28 = local_5c8;
                  do {
                    lVar33 = 0;
                    do {
                      uVar21 = *(int *)((long)pvVar23 + lVar33) - *(int *)((long)puVar24 + lVar33);
                      uVar11 = uVar21 + 0x7fe001;
                      uVar15 = (int)((uVar11 ^ 0x7fe001 | uVar21 ^ 0x7fe001) ^ uVar11) >> 0x1f;
                      *(uint *)((long)puVar28 + lVar33) = uVar11 & uVar15 | uVar21 & ~uVar15;
                      lVar33 = lVar33 + 4;
                    } while (lVar33 != 0x400);
                    puVar24 = puVar24 + 0x100;
                    pvVar23 = (void *)((long)pvVar23 + 0x400);
                    puVar28 = puVar28 + 0x100;
                  } while (puVar27 + local_5d0 * 0x100 != puVar24);
                }
                uVar29 = 0;
                if (local_5c0 == 0) {
                  if (local_580 != 0) goto LAB_00100c81;
                  uVar15 = 0;
                  uVar11 = 0;
                }
                else {
                  do {
                    puVar24 = local_5c8 + uVar29 * 0x100;
                    puVar28 = puVar24;
                    do {
                      puVar36 = puVar28 + 1;
                      uVar11 = ossl_ml_dsa_key_compress_low_bits(*puVar28,uVar2);
                      *puVar28 = uVar11;
                      puVar28 = puVar36;
                    } while (puVar24 + 0x100 != puVar36);
                    uVar29 = uVar29 + 1;
                  } while (uVar29 < local_5c0);
                  if (local_580 == 0) {
                    uVar15 = 0;
                  }
                  else {
LAB_00100c81:
                    uVar15 = 0;
                    puVar24 = local_588;
                    do {
                      puVar28 = puVar24 + 0x100;
                      do {
                        uVar11 = *puVar24;
                        puVar24 = puVar24 + 1;
                        uVar21 = (int)(0x3ff000 - uVar11 ^ uVar11 | uVar11 ^ 0x3ff000) >> 0x1f;
                        uVar11 = 0x7fe001 - uVar11 & uVar21 | uVar11 & ~uVar21;
                        uVar21 = (int)((uVar15 - uVar11 ^ uVar11 | uVar11 ^ uVar15) ^ uVar15) >>
                                 0x1f;
                        uVar15 = uVar21 & uVar11 | ~uVar21 & uVar15;
                      } while (puVar28 != puVar24);
                      puVar24 = puVar28;
                    } while (local_588 + local_580 * 0x100 != puVar28);
                  }
                  if (local_5c0 == 0) {
                    uVar11 = 0;
                  }
                  else {
                    uVar11 = 0;
                    puVar24 = local_5c8;
                    do {
                      puVar28 = puVar24 + 0x100;
                      do {
                        uVar21 = *puVar24;
                        puVar24 = puVar24 + 1;
                        uVar12 = (int)((uVar21 + 0x80000000 | uVar21) ^ uVar21) >> 0x1f;
                        uVar12 = -uVar21 & ~uVar12 | uVar21 & uVar12;
                        uVar21 = (int)((uVar11 - uVar12 ^ uVar12 | uVar12 ^ uVar11) ^ uVar11) >>
                                 0x1f;
                        uVar11 = uVar21 & uVar12 | ~uVar21 & uVar11;
                      } while (puVar28 != puVar24);
                      puVar24 = puVar28;
                    } while (local_5c8 + local_5c0 * 0x100 != puVar28);
                  }
                }
                iVar6 = *(int *)(lVar7 + 0x34);
                if ((int)((((iVar6 - uVar2) + uVar11 ^ uVar2 - iVar6 | uVar2 - iVar6 ^ uVar11) ^
                          uVar11) &
                         (((iVar6 - iVar1) + uVar15 ^ iVar1 - iVar6 | iVar1 - iVar6 ^ uVar15) ^
                         uVar15)) < 0) {
                  lVar33 = 0;
                  if (uVar22 != 0) {
                    do {
                      lVar16 = (long)__dest_00 + lVar33;
                      lVar17 = (long)local_5c8 + lVar33;
                      lVar33 = lVar33 + 0x400;
                      ossl_ml_dsa_poly_ntt_mult(lVar16,lVar9,lVar17);
                    } while (lVar26 != lVar33);
                  }
                  uVar15 = 0;
                  uVar29 = 0;
                  uVar11 = uVar2;
                  if (local_5c0 == 0) {
                    if (local_570 != 0) goto LAB_00100e6b;
LAB_001010df:
                    uVar21 = 0;
                  }
                  else {
                    do {
                      uVar20 = uVar29 + 1;
                      ossl_ml_dsa_poly_ntt_inverse(local_5c8 + uVar29 * 0x100);
                      uVar29 = uVar20;
                    } while (uVar20 < local_5c0);
                    if (local_570 == 0) {
                      if (local_5c0 == 0) goto LAB_001010df;
LAB_00100f48:
                      uVar21 = 0;
                      puVar24 = local_5c8;
                      do {
                        puVar28 = puVar24 + 0x100;
                        do {
                          uVar11 = *puVar24;
                          puVar24 = puVar24 + 1;
                          uVar12 = (int)(0x3ff000 - uVar11 ^ uVar11 | uVar11 ^ 0x3ff000) >> 0x1f;
                          uVar12 = 0x7fe001 - uVar11 & uVar12 | uVar11 & ~uVar12;
                          uVar11 = (int)((uVar21 - uVar12 ^ uVar12 | uVar12 ^ uVar21) ^ uVar21) >>
                                   0x1f;
                          uVar21 = uVar11 & uVar12 | ~uVar11 & uVar21;
                        } while (puVar28 != puVar24);
                        puVar24 = puVar28;
                      } while (local_5c8 + local_5c0 * 0x100 != puVar28);
                      uVar11 = uVar2 ^ uVar21;
                    }
                    else {
LAB_00100e6b:
                      uVar29 = 0;
                      puVar24 = puVar27;
                      do {
                        piVar14 = local_578;
                        puVar28 = local_5c8;
                        pvVar23 = local_5d8;
                        lVar16 = 0;
                        lVar33 = uVar29 * 0x400;
                        do {
                          uVar19 = ossl_ml_dsa_key_compress_make_hint
                                             (*(undefined4 *)((long)puVar28 + lVar16 + lVar33),
                                              *(undefined4 *)((long)puVar24 + lVar16),uVar2,
                                              *(undefined4 *)((long)pvVar23 + lVar16 + lVar33));
                          *(undefined4 *)((long)piVar14 + lVar16 + lVar33) = uVar19;
                          lVar16 = lVar16 + 4;
                        } while (lVar16 != 0x400);
                        puVar24 = puVar24 + 0x100;
                        uVar29 = uVar29 + 1;
                      } while (uVar29 < local_570);
                      if (local_5c0 != 0) goto LAB_00100f48;
                      uVar21 = 0;
                    }
                    if (local_570 != 0) {
                      piVar14 = local_578 + 0x100;
                      uVar15 = 0;
                      piVar25 = local_578;
                      do {
                        iVar6 = 0;
                        iVar5 = 0;
                        piVar4 = piVar25;
                        do {
                          piVar18 = piVar4;
                          iVar6 = iVar6 + *piVar18 + piVar18[2];
                          iVar5 = iVar5 + piVar18[1] + piVar18[3];
                          piVar4 = piVar18 + 4;
                        } while (piVar18 + 4 != piVar14);
                        piVar25 = piVar25 + 0x100;
                        uVar15 = uVar15 + iVar6 + iVar5;
                        piVar14 = piVar18 + 0x104;
                      } while (piVar25 != local_578 + local_570 * 0x100);
                    }
                  }
                  uVar12 = *(uint *)(lVar7 + 0x38);
                  if ((int)(uVar21 ^ (uVar21 - uVar2 ^ uVar2 | uVar11)) < 0 &&
                      -1 < (int)((uVar12 - uVar15 ^ uVar15 | uVar15 ^ uVar12) ^ uVar12))
                  goto code_r0x00101097;
                }
                local_648 = local_648 + uVar13;
              } while( true );
            }
          }
        }
      }
      uVar19 = 0;
      goto LAB_0010042b;
    }
    uVar19 = 0;
    goto LAB_0010045e;
  }
  uVar19 = 1;
  goto LAB_001004bd;
code_r0x00101097:
  uVar19 = ossl_ml_dsa_sig_encode(&local_588,lVar7,param_10);
LAB_0010042b:
  local_6c0 = &local_518;
  EVP_MD_CTX_free(ctx);
  CRYPTO_clear_free(d,lVar8,"crypto/ml_dsa/ml_dsa_sign.c",199);
  OPENSSL_cleanse(local_6c0,0x40);
LAB_0010045e:
  CRYPTO_free(local_6b0);
LAB_001004bd:
  if (param_11 != (undefined8 *)0x0) {
    *param_11 = *(undefined8 *)(*(long *)(param_1 + 8) + 0x50);
  }
LAB_0010048d:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar19;
}



bool ossl_ml_dsa_verify(long param_1,int param_2,undefined1 *param_3,size_t param_4,
                       undefined8 param_5,undefined8 param_6,int param_7,undefined8 param_8,
                       undefined8 param_9)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  size_t sVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  long lVar10;
  ulong cnt;
  void *d;
  EVP_MD_CTX *ctx;
  long lVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  size_t __n;
  long lVar15;
  uint *puVar16;
  long lVar17;
  uint uVar18;
  long lVar19;
  long lVar20;
  uint *puVar21;
  uint uVar22;
  ulong uVar23;
  int iVar24;
  ulong uVar25;
  long in_FS_OFFSET;
  bool bVar26;
  undefined1 *local_5d8;
  undefined1 *local_5d0;
  size_t local_570;
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
  if (lVar10 == 0) goto LAB_001014df;
  local_5d8 = param_3;
  sVar4 = param_4;
  if (param_2 == 0) {
    if (param_7 == 0) {
      local_570 = param_4;
      sVar4 = param_4;
      if (param_3 == (undefined1 *)0x0) goto LAB_001014df;
      goto LAB_00101211;
    }
    local_5d8 = (undefined1 *)
                msg_encode_part_0_constprop_0(param_3,param_4,param_5,param_6,local_448,&local_570);
    if (local_5d8 == (undefined1 *)0x0) {
LAB_001014df:
      bVar26 = false;
      goto LAB_00101438;
    }
    sVar4 = local_570;
    if ((local_5d8 == local_448) || (local_5d0 = local_5d8, param_3 == local_5d8))
    goto LAB_00101211;
  }
  else {
LAB_00101211:
    local_570 = sVar4;
    local_5d0 = (undefined1 *)0x0;
  }
  sVar4 = local_570;
  lVar10 = *(long *)(param_1 + 8);
  uVar23 = *(ulong *)(lVar10 + 0x20);
  iVar9 = *(int *)(lVar10 + 0x18);
  iVar24 = *(int *)(lVar10 + 0x10);
  iVar6 = (int)*(ulong *)(lVar10 + 0x28);
  iVar3 = (int)uVar23;
  uVar22 = iVar6 + iVar3;
  uVar25 = *(ulong *)(lVar10 + 0x28) & 0xffffffff;
  uVar18 = iVar6 * iVar3;
  iVar5 = 0x80;
  if (iVar9 == 0x17400) {
    iVar5 = 0xc0;
  }
  cnt = (ulong)(uint)(iVar5 * iVar3);
  d = CRYPTO_malloc((uVar22 + 1 + iVar6 + iVar3 * 2 + uVar18) * 0x400 + iVar5 * iVar3,
                    "crypto/ml_dsa/ml_dsa_sign.c",0xec);
  if (d == (void *)0x0) {
    bVar26 = false;
  }
  else {
    ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
    if (ctx == (EVP_MD_CTX *)0x0) {
LAB_00101400:
      bVar26 = false;
    }
    else {
      uVar23 = uVar23 & 0xffffffff;
      iVar24 = iVar24 >> 2;
      __n = (size_t)iVar24;
      lVar11 = (long)d + cnt;
      local_558 = lVar11 + 0x400;
      lVar20 = uVar23 * 0x400;
      local_528 = local_558 + (ulong)uVar18 * 0x400;
      local_538 = (uint *)(local_528 + lVar20);
      lVar12 = local_528 + (ulong)uVar22 * 0x400;
      local_568 = lVar12;
      local_560 = uVar23;
      local_550 = uVar23;
      local_548 = uVar25;
      local_530 = uVar25;
      local_520 = uVar23;
      local_518 = local_488;
      local_510 = __n;
      iVar6 = ossl_ml_dsa_sig_decode(&local_538,param_8,param_9,*(undefined8 *)(param_1 + 8));
      if (iVar6 == 0) goto LAB_00101400;
      iVar6 = ossl_ml_dsa_matrix_expand_A
                        (ctx,*(undefined8 *)(param_1 + 0x10),param_1 + 0x20,&local_558);
      if (iVar6 == 0) goto LAB_00101400;
      if (param_2 == 0) {
        iVar6 = EVP_DigestInit_ex2(ctx,*(undefined8 *)(param_1 + 0x18),0);
        if (((iVar6 != 0) &&
            (iVar6 = EVP_DigestUpdate(ctx,(void *)(param_1 + 0x40),0x40), iVar6 != 0)) &&
           (iVar6 = EVP_DigestUpdate(ctx,local_5d8,sVar4), iVar6 != 0)) {
          local_5d8 = local_508;
          iVar6 = EVP_DigestSqueeze(ctx,local_5d8,0x40);
          if (iVar6 != 0) goto LAB_001013c8;
        }
        goto LAB_00101400;
      }
      if (sVar4 != 0x40) goto LAB_00101400;
LAB_001013c8:
      iVar24 = ossl_ml_dsa_poly_sample_in_ball
                         (lVar11,local_488,iVar24,ctx,*(undefined8 *)(param_1 + 0x18),
                          *(undefined4 *)(lVar10 + 0xc));
      if (iVar24 == 0) goto LAB_00101400;
      lVar12 = lVar20 + lVar12;
      ossl_ml_dsa_poly_ntt(lVar11);
      lVar17 = *(long *)(param_1 + 0xc0);
      if (*(long *)(param_1 + 200) != 0) {
        lVar19 = *(long *)(param_1 + 200) * 0x400 + lVar17;
        lVar15 = (uVar23 + 1 + (ulong)uVar22 + (ulong)uVar18) * 0x400 + cnt + (long)d;
        do {
          lVar13 = 0;
          do {
            piVar1 = (int *)(lVar17 + lVar13);
            iVar24 = piVar1[1];
            iVar6 = piVar1[2];
            iVar3 = piVar1[3];
            piVar2 = (int *)(lVar15 + lVar13);
            *piVar2 = *piVar1 << 0xd;
            piVar2[1] = iVar24 << 0xd;
            piVar2[2] = iVar6 << 0xd;
            piVar2[3] = iVar3 << 0xd;
            lVar13 = lVar13 + 0x10;
          } while (lVar13 != 0x400);
          lVar17 = lVar17 + 0x400;
          lVar15 = lVar15 + 0x400;
        } while (lVar19 != lVar17);
      }
      lVar17 = lVar12;
      if (uVar23 != 0) {
        do {
          lVar19 = lVar17 + 0x400;
          ossl_ml_dsa_poly_ntt(lVar17);
          lVar17 = lVar19;
          lVar15 = lVar12;
        } while (lVar20 + lVar12 != lVar19);
        do {
          lVar17 = lVar15 + 0x400;
          ossl_ml_dsa_poly_ntt_mult(lVar15,lVar11,lVar15);
          lVar15 = lVar17;
        } while (lVar20 + lVar12 != lVar17);
      }
      uVar18 = 0;
      if (local_530 != 0) {
        uVar18 = 0;
        puVar16 = local_538;
        do {
          puVar21 = puVar16 + 0x100;
          do {
            uVar22 = *puVar16;
            puVar16 = puVar16 + 1;
            uVar7 = (int)(0x3ff000 - uVar22 ^ uVar22 | uVar22 ^ 0x3ff000) >> 0x1f;
            uVar7 = 0x7fe001 - uVar22 & uVar7 | uVar22 & ~uVar7;
            uVar22 = (int)((uVar18 - uVar7 ^ uVar7 | uVar7 ^ uVar18) ^ uVar18) >> 0x1f;
            uVar18 = uVar22 & uVar7 | ~uVar22 & uVar18;
          } while (puVar21 != puVar16);
          puVar16 = puVar21;
        } while (local_538 + local_530 * 0x100 != puVar21);
        uVar23 = 0;
        do {
          uVar25 = uVar23 + 1;
          ossl_ml_dsa_poly_ntt(local_538 + uVar23 * 0x100);
          uVar23 = uVar25;
        } while (uVar25 < local_530);
      }
      ossl_ml_dsa_matrix_mult_vector(&local_558,&local_538,&local_568);
      if (local_560 != 0) {
        lVar11 = lVar12 + local_560 * 0x400;
        lVar20 = local_568;
        do {
          lVar17 = 0;
          do {
            uVar14 = *(int *)(lVar20 + lVar17) - *(int *)(lVar12 + lVar17);
            uVar22 = uVar14 + 0x7fe001;
            uVar7 = (int)((uVar22 ^ 0x7fe001 | uVar14 ^ 0x7fe001) ^ uVar22) >> 0x1f;
            *(uint *)(lVar20 + lVar17) = uVar22 & uVar7 | uVar14 & ~uVar7;
            lVar17 = lVar17 + 4;
          } while (lVar17 != 0x400);
          lVar12 = lVar12 + 0x400;
          lVar20 = lVar20 + 0x400;
        } while (lVar12 != lVar11);
        uVar23 = 0;
        do {
          uVar25 = uVar23 + 1;
          ossl_ml_dsa_poly_ntt_inverse(local_568 + uVar23 * 0x400);
          uVar23 = uVar25;
        } while (uVar25 < local_560);
        if (local_560 != 0) {
          uVar23 = 0;
          do {
            lVar20 = 0;
            lVar11 = local_568 + uVar23 * 0x400;
            lVar12 = uVar23 * 0x400 + local_528;
            do {
              uVar8 = ossl_ml_dsa_key_compress_use_hint
                                (*(undefined4 *)(lVar12 + lVar20),*(undefined4 *)(lVar11 + lVar20),
                                 iVar9);
              *(undefined4 *)(lVar11 + lVar20) = uVar8;
              lVar20 = lVar20 + 4;
            } while (lVar20 != 0x400);
            uVar23 = uVar23 + 1;
          } while (uVar23 < local_560);
        }
      }
      ossl_ml_dsa_w1_encode(&local_568,iVar9,d,cnt);
      iVar9 = EVP_DigestInit_ex2(ctx,*(undefined8 *)(param_1 + 0x18),0);
      if (((iVar9 == 0) || (iVar9 = EVP_DigestUpdate(ctx,local_5d8,0x40), iVar9 == 0)) ||
         ((iVar9 = EVP_DigestUpdate(ctx,d,cnt), iVar9 == 0 ||
          (iVar9 = EVP_DigestUpdate(ctx,(void *)0x0,0), iVar9 == 0)))) goto LAB_00101400;
      iVar9 = EVP_DigestSqueeze(ctx,local_4c8,__n);
      if ((iVar9 == 0) || ((uint)(*(int *)(lVar10 + 0x14) - *(int *)(lVar10 + 0x34)) <= uVar18))
      goto LAB_00101400;
      iVar9 = memcmp(local_4c8,local_518,__n);
      bVar26 = iVar9 == 0;
    }
    CRYPTO_free(d);
    EVP_MD_CTX_free(ctx);
  }
  CRYPTO_free(local_5d0);
LAB_00101438:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar26;
}


