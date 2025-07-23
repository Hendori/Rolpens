/* void 
   embree::radixsort32<embree::sse2::BVHBuilderMorton::BuildPrim>(embree::sse2::BVHBuilderMorton::BuildPrim*,
   unsigned long, unsigned int) [clone .constprop.0] */

void embree::radixsort32<embree::sse2::BVHBuilderMorton::BuildPrim>
               (BuildPrim *param_1,ulong param_2,uint param_3)

{
  long lVar1;
  int *piVar2;
  BuildPrim BVar3;
  uint uVar4;
  undefined8 uVar5;
  uint *puVar6;
  uint uVar7;
  long lVar8;
  BuildPrim *pBVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  BuildPrim *pBVar13;
  long lVar14;
  undefined1 *puVar15;
  ulong uVar16;
  uint *puVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  undefined8 *puVar21;
  uint *puVar22;
  BuildPrim *pBVar23;
  long lVar24;
  uint uVar25;
  uint *puVar26;
  long lVar27;
  long in_FS_OFFSET;
  uint *local_3090;
  ulong local_3088;
  uint local_3080 [255];
  int local_2c84;
  uint local_2c80;
  undefined8 local_2c7c [127];
  int local_2884;
  uint local_2880 [256];
  undefined8 local_2480 [127];
  int local_2084;
  uint local_2080;
  undefined8 local_207c [127];
  int local_1c84;
  uint local_1c80 [256];
  undefined8 local_1880 [127];
  int local_1484;
  uint local_1480;
  undefined8 local_147c [127];
  int local_1084;
  uint local_1080 [256];
  undefined8 local_c80 [127];
  int local_884;
  uint local_880 [256];
  uint local_480 [270];
  long local_48;
  
  local_48 = *(long *)(in_FS_OFFSET + 0x28);
  puVar26 = local_3080;
  puVar17 = puVar26;
  for (lVar8 = 0x80; lVar8 != 0; lVar8 = lVar8 + -1) {
    puVar17[0] = 0;
    puVar17[1] = 0;
    puVar17 = puVar17 + 2;
  }
  pBVar9 = param_1;
  if (param_2 != 0) {
    do {
      uVar7 = *(uint *)pBVar9;
      pBVar9 = pBVar9 + 8;
      local_3080[uVar7 >> 0x18] = local_3080[uVar7 >> 0x18] + 1;
    } while (pBVar9 != param_1 + param_2 * 8);
  }
  uVar7 = 0;
  lVar8 = 1;
  local_2c80 = 0;
  do {
    uVar7 = uVar7 + local_3080[lVar8 + -1];
    (&local_2c80)[lVar8] = uVar7;
    lVar8 = lVar8 + 1;
  } while (lVar8 != 0x100);
  puVar17 = (uint *)local_2c7c;
  puVar6 = local_2880;
  for (lVar8 = 0x7f; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined8 *)puVar6 = *(undefined8 *)puVar17;
    puVar17 = puVar17 + 2;
    puVar6 = puVar6 + 2;
  }
  *puVar6 = *puVar17;
  uVar18 = 0;
  local_2880[0xff] = local_2c84 + local_2884;
  uVar7 = 0;
  puVar17 = &local_2c80;
  while( true ) {
    uVar25 = local_2880[uVar18];
    while (uVar7 < uVar25) {
      uVar19 = *(ulong *)(param_1 + (ulong)uVar7 * 8);
      uVar4 = *(uint *)(param_1 + (ulong)uVar7 * 8);
      uVar20 = (ulong)uVar4;
      uVar10 = (ulong)(uVar4 >> 0x18);
      if (uVar10 != uVar18) {
        do {
          uVar7 = *(uint *)((long)local_2c7c + uVar10 * 4 + -4);
          *(uint *)((long)local_2c7c + uVar10 * 4 + -4) = uVar7 + 1;
          pBVar9 = param_1 + (ulong)uVar7 * 8;
          uVar10 = uVar19 & 0xffffffff00000000 | uVar20;
          uVar7 = *(uint *)pBVar9;
          uVar20 = (ulong)uVar7;
          uVar19 = *(ulong *)pBVar9;
          *(ulong *)pBVar9 = uVar10;
          uVar10 = (ulong)(uVar7 >> 0x18);
        } while (uVar10 != uVar18);
        uVar7 = *puVar17;
      }
      uVar10 = (ulong)uVar7;
      uVar7 = uVar7 + 1;
      *puVar17 = uVar7;
      *(ulong *)(param_1 + uVar10 * 8) = uVar20 | uVar19 & 0xffffffff00000000;
    }
    uVar18 = uVar18 + 1;
    puVar17 = puVar17 + 1;
    if (uVar18 == 0x100) break;
    uVar7 = *puVar17;
  }
  lVar8 = 0;
  do {
    uVar7 = *puVar26;
    uVar18 = (ulong)uVar7;
    lVar27 = lVar8;
    if (uVar7 != 0) {
      lVar27 = uVar18 + lVar8;
      if (uVar7 < 0x10) {
        if (uVar18 != 1) {
          pBVar9 = param_1 + lVar8 * 8;
          lVar8 = 0;
          pBVar23 = pBVar9;
          do {
            uVar5 = *(undefined8 *)(pBVar23 + 8);
            uVar7 = *(uint *)(pBVar23 + 8);
            pBVar13 = pBVar23 + 8;
            if ((((uVar7 < *(uint *)pBVar23) &&
                 (*(undefined8 *)(pBVar23 + 8) = *(undefined8 *)pBVar23, pBVar13 = pBVar9,
                 lVar8 != 0)) && (pBVar13 = pBVar23, uVar7 < *(uint *)(pBVar23 + -8))) &&
               (*(undefined8 *)pBVar23 = *(undefined8 *)(pBVar23 + -8), pBVar13 = pBVar9, lVar8 != 1
               )) {
              if (uVar7 < *(uint *)(pBVar23 + -0x10)) {
                *(undefined8 *)(pBVar23 + -8) = *(undefined8 *)(pBVar23 + -0x10);
                if (lVar8 != 2) {
                  if (uVar7 < *(uint *)(pBVar23 + -0x18)) {
                    *(undefined8 *)(pBVar23 + -0x10) = *(undefined8 *)(pBVar23 + -0x18);
                    if ((((((lVar8 != 3) &&
                           (pBVar13 = pBVar23 + -0x18, uVar7 < *(uint *)(pBVar23 + -0x20))) &&
                          ((*(undefined8 *)(pBVar23 + -0x18) = *(undefined8 *)(pBVar23 + -0x20),
                           pBVar13 = pBVar9, lVar8 != 4 &&
                           ((pBVar13 = pBVar23 + -0x20, uVar7 < *(uint *)(pBVar23 + -0x28) &&
                            (*(undefined8 *)(pBVar23 + -0x20) = *(undefined8 *)(pBVar23 + -0x28),
                            pBVar13 = pBVar9, lVar8 != 5)))))) &&
                         (pBVar13 = pBVar23 + -0x28, uVar7 < *(uint *)(pBVar23 + -0x30))) &&
                        ((((*(undefined8 *)(pBVar23 + -0x28) = *(undefined8 *)(pBVar23 + -0x30),
                           pBVar13 = pBVar9, lVar8 != 6 &&
                           (pBVar13 = pBVar23 + -0x30, uVar7 < *(uint *)(pBVar23 + -0x38))) &&
                          (*(undefined8 *)(pBVar23 + -0x30) = *(undefined8 *)(pBVar23 + -0x38),
                          pBVar13 = pBVar9, lVar8 != 7)) &&
                         ((pBVar13 = pBVar23 + -0x38, uVar7 < *(uint *)(pBVar23 + -0x40) &&
                          (*(undefined8 *)(pBVar23 + -0x38) = *(undefined8 *)(pBVar23 + -0x40),
                          pBVar13 = pBVar9, lVar8 != 8)))))) &&
                       ((((pBVar13 = pBVar23 + -0x40, uVar7 < *(uint *)(pBVar23 + -0x48) &&
                          ((*(undefined8 *)(pBVar23 + -0x40) = *(undefined8 *)(pBVar23 + -0x48),
                           pBVar13 = pBVar9, lVar8 != 9 &&
                           (pBVar13 = pBVar23 + -0x48, uVar7 < *(uint *)(pBVar23 + -0x50))))) &&
                         (*(undefined8 *)(pBVar23 + -0x48) = *(undefined8 *)(pBVar23 + -0x50),
                         pBVar13 = pBVar9, lVar8 != 10)) &&
                        ((((pBVar13 = pBVar23 + -0x50, uVar7 < *(uint *)(pBVar23 + -0x58) &&
                           (*(undefined8 *)(pBVar23 + -0x50) = *(undefined8 *)(pBVar23 + -0x58),
                           pBVar13 = pBVar9, lVar8 != 0xb)) &&
                          (pBVar13 = pBVar23 + -0x58, uVar7 < *(uint *)(pBVar23 + -0x60))) &&
                         ((*(undefined8 *)(pBVar23 + -0x58) = *(undefined8 *)(pBVar23 + -0x60),
                          pBVar13 = pBVar9, lVar8 != 0xc &&
                          (pBVar13 = pBVar23 + -0x60, uVar7 < *(uint *)(pBVar23 + -0x68))))))))) {
                      *(undefined8 *)(pBVar23 + -0x60) = *(undefined8 *)(pBVar23 + -0x68);
                      pBVar13 = pBVar9;
                    }
                  }
                  else {
                    pBVar13 = pBVar23 + -0x10;
                  }
                }
              }
              else {
                pBVar13 = pBVar23 + -8;
              }
            }
            lVar8 = lVar8 + 1;
            *(undefined8 *)pBVar13 = uVar5;
            pBVar23 = pBVar23 + 8;
          } while (lVar8 != uVar18 - 1);
        }
      }
      else {
        local_3090 = (uint *)local_2480;
        puVar17 = local_3090;
        for (lVar11 = 0x80; lVar11 != 0; lVar11 = lVar11 + -1) {
          puVar17[0] = 0;
          puVar17[1] = 0;
          puVar17 = puVar17 + 2;
        }
        pBVar9 = param_1 + lVar8 * 8;
        do {
          pBVar23 = pBVar9 + 2;
          pBVar9 = pBVar9 + 8;
          piVar2 = (int *)((long)local_2480 + (ulong)(byte)*pBVar23 * 4);
          *piVar2 = *piVar2 + 1;
        } while (pBVar9 != param_1 + lVar27 * 8);
        uVar7 = 0;
        lVar11 = 1;
        local_2080 = 0;
        do {
          uVar7 = uVar7 + *(int *)((long)local_2480 + lVar11 * 4 + -4);
          (&local_2080)[lVar11] = uVar7;
          lVar11 = lVar11 + 1;
        } while (lVar11 != 0x100);
        uVar18 = 0;
        puVar17 = (uint *)local_207c;
        puVar6 = local_1c80;
        for (lVar11 = 0x7f; lVar11 != 0; lVar11 = lVar11 + -1) {
          *(undefined8 *)puVar6 = *(undefined8 *)puVar17;
          puVar17 = puVar17 + 2;
          puVar6 = puVar6 + 2;
        }
        *puVar6 = *puVar17;
        uVar19 = 0;
        local_1c80[0xff] = local_2084 + local_1c84;
        puVar17 = &local_2080;
        while( true ) {
          uVar7 = local_1c80[uVar19];
          uVar25 = (uint)uVar18;
          while (uVar25 < uVar7) {
            uVar20 = *(ulong *)(param_1 + (uVar18 + lVar8) * 8);
            uVar25 = *(uint *)(param_1 + (uVar18 + lVar8) * 8);
            uVar16 = (ulong)uVar25;
            uVar10 = (ulong)(uVar25 >> 0x10) & 0xff;
            if (uVar10 != uVar19) {
              do {
                uVar25 = *(uint *)((long)local_207c + uVar10 * 4 + -4);
                *(uint *)((long)local_207c + uVar10 * 4 + -4) = uVar25 + 1;
                pBVar9 = param_1 + ((ulong)uVar25 + lVar8) * 8;
                uVar18 = uVar20 & 0xffffffff00000000 | uVar16;
                uVar25 = *(uint *)pBVar9;
                uVar16 = (ulong)uVar25;
                uVar20 = *(ulong *)pBVar9;
                *(ulong *)pBVar9 = uVar18;
                uVar10 = (ulong)(uVar25 >> 0x10) & 0xff;
              } while (uVar10 != uVar19);
              uVar18 = (ulong)*puVar17;
            }
            uVar25 = (int)uVar18 + 1;
            *puVar17 = uVar25;
            *(ulong *)(param_1 + (uVar18 + lVar8) * 8) = uVar20 & 0xffffffff00000000 | uVar16;
            uVar18 = (ulong)uVar25;
          }
          uVar19 = uVar19 + 1;
          puVar17 = puVar17 + 1;
          if (uVar19 == 0x100) break;
          uVar18 = (ulong)*puVar17;
        }
        lVar11 = 0;
        do {
          uVar7 = *local_3090;
          lVar24 = lVar11;
          if (uVar7 != 0) {
            uVar18 = (ulong)uVar7;
            lVar24 = uVar18 + lVar11;
            lVar11 = lVar11 + lVar8;
            if (uVar7 < 0x10) {
              if (uVar18 != 1) {
                pBVar9 = param_1 + lVar11 * 8;
                lVar11 = 0;
                pBVar23 = pBVar9;
                do {
                  uVar5 = *(undefined8 *)(pBVar23 + 8);
                  uVar7 = *(uint *)(pBVar23 + 8);
                  pBVar13 = pBVar23 + 8;
                  if (((uVar7 < *(uint *)pBVar23) &&
                      (*(undefined8 *)(pBVar23 + 8) = *(undefined8 *)pBVar23, pBVar13 = pBVar9,
                      lVar11 != 0)) &&
                     ((pBVar13 = pBVar23, uVar7 < *(uint *)(pBVar23 + -8) &&
                      (*(undefined8 *)pBVar23 = *(undefined8 *)(pBVar23 + -8), pBVar13 = pBVar9,
                      lVar11 != 1)))) {
                    if (uVar7 < *(uint *)(pBVar23 + -0x10)) {
                      *(undefined8 *)(pBVar23 + -8) = *(undefined8 *)(pBVar23 + -0x10);
                      if (lVar11 != 2) {
                        if (uVar7 < *(uint *)(pBVar23 + -0x18)) {
                          *(undefined8 *)(pBVar23 + -0x10) = *(undefined8 *)(pBVar23 + -0x18);
                          if (((((lVar11 != 3) &&
                                (pBVar13 = pBVar23 + -0x18, uVar7 < *(uint *)(pBVar23 + -0x20))) &&
                               (*(undefined8 *)(pBVar23 + -0x18) = *(undefined8 *)(pBVar23 + -0x20),
                               pBVar13 = pBVar9, lVar11 != 4)) &&
                              (((pBVar13 = pBVar23 + -0x20, uVar7 < *(uint *)(pBVar23 + -0x28) &&
                                (*(undefined8 *)(pBVar23 + -0x20) = *(undefined8 *)(pBVar23 + -0x28)
                                , pBVar13 = pBVar9, lVar11 != 5)) &&
                               ((pBVar13 = pBVar23 + -0x28, uVar7 < *(uint *)(pBVar23 + -0x30) &&
                                ((*(undefined8 *)(pBVar23 + -0x28) =
                                       *(undefined8 *)(pBVar23 + -0x30), pBVar13 = pBVar9,
                                 lVar11 != 6 &&
                                 (pBVar13 = pBVar23 + -0x30, uVar7 < *(uint *)(pBVar23 + -0x38))))))
                               ))) && ((*(undefined8 *)(pBVar23 + -0x30) =
                                             *(undefined8 *)(pBVar23 + -0x38), pBVar13 = pBVar9,
                                       lVar11 != 7 &&
                                       (((((((pBVar13 = pBVar23 + -0x38,
                                             uVar7 < *(uint *)(pBVar23 + -0x40) &&
                                             (*(undefined8 *)(pBVar23 + -0x38) =
                                                   *(undefined8 *)(pBVar23 + -0x40),
                                             pBVar13 = pBVar9, lVar11 != 8)) &&
                                            (pBVar13 = pBVar23 + -0x40,
                                            uVar7 < *(uint *)(pBVar23 + -0x48))) &&
                                           ((*(undefined8 *)(pBVar23 + -0x40) =
                                                  *(undefined8 *)(pBVar23 + -0x48), pBVar13 = pBVar9
                                            , lVar11 != 9 &&
                                            (pBVar13 = pBVar23 + -0x48,
                                            uVar7 < *(uint *)(pBVar23 + -0x50))))) &&
                                          ((*(undefined8 *)(pBVar23 + -0x48) =
                                                 *(undefined8 *)(pBVar23 + -0x50), pBVar13 = pBVar9,
                                           lVar11 != 10 &&
                                           ((pBVar13 = pBVar23 + -0x50,
                                            uVar7 < *(uint *)(pBVar23 + -0x58) &&
                                            (*(undefined8 *)(pBVar23 + -0x50) =
                                                  *(undefined8 *)(pBVar23 + -0x58), pBVar13 = pBVar9
                                            , lVar11 != 0xb)))))) &&
                                         (pBVar13 = pBVar23 + -0x58,
                                         uVar7 < *(uint *)(pBVar23 + -0x60))) &&
                                        ((*(undefined8 *)(pBVar23 + -0x58) =
                                               *(undefined8 *)(pBVar23 + -0x60), pBVar13 = pBVar9,
                                         lVar11 != 0xc &&
                                         (pBVar13 = pBVar23 + -0x60,
                                         uVar7 < *(uint *)(pBVar23 + -0x68))))))))) {
                            *(undefined8 *)(pBVar23 + -0x60) = *(undefined8 *)(pBVar23 + -0x68);
                            pBVar13 = pBVar9;
                          }
                        }
                        else {
                          pBVar13 = pBVar23 + -0x10;
                        }
                      }
                    }
                    else {
                      pBVar13 = pBVar23 + -8;
                    }
                  }
                  lVar11 = lVar11 + 1;
                  *(undefined8 *)pBVar13 = uVar5;
                  pBVar23 = pBVar23 + 8;
                } while (lVar11 != uVar18 - 1);
              }
            }
            else {
              puVar17 = (uint *)local_1880;
              puVar6 = puVar17;
              for (lVar12 = 0x80; lVar12 != 0; lVar12 = lVar12 + -1) {
                puVar6[0] = 0;
                puVar6[1] = 0;
                puVar6 = puVar6 + 2;
              }
              pBVar9 = param_1 + lVar11 * 8;
              do {
                uVar7 = *(uint *)pBVar9;
                pBVar9 = pBVar9 + 8;
                piVar2 = (int *)((long)local_1880 + (ulong)(uVar7 >> 8 & 0xff) * 4);
                *piVar2 = *piVar2 + 1;
              } while (pBVar9 != param_1 + (uVar18 + lVar11) * 8);
              uVar7 = 0;
              lVar12 = 1;
              local_1480 = 0;
              do {
                uVar7 = uVar7 + *(int *)((long)local_1880 + lVar12 * 4 + -4);
                (&local_1480)[lVar12] = uVar7;
                lVar12 = lVar12 + 1;
              } while (lVar12 != 0x100);
              uVar7 = 0;
              uVar18 = 0;
              puVar6 = (uint *)local_147c;
              puVar22 = local_1080;
              for (lVar12 = 0x7f; lVar12 != 0; lVar12 = lVar12 + -1) {
                *(undefined8 *)puVar22 = *(undefined8 *)puVar6;
                puVar6 = puVar6 + 2;
                puVar22 = puVar22 + 2;
              }
              *puVar22 = *puVar6;
              local_1080[0xff] = local_1484 + local_1084;
              puVar6 = &local_1480;
              while( true ) {
                uVar25 = local_1080[uVar18];
                while (uVar7 < uVar25) {
                  uVar10 = (ulong)uVar7;
                  uVar19 = *(ulong *)(param_1 + (uVar10 + lVar11) * 8);
                  uVar7 = *(uint *)(param_1 + (uVar10 + lVar11) * 8);
                  uVar16 = (ulong)uVar7;
                  uVar20 = (ulong)(byte)(uVar7 >> 8);
                  if (uVar20 != uVar18) {
                    do {
                      uVar7 = *(uint *)((long)local_147c + uVar20 * 4 + -4);
                      *(uint *)((long)local_147c + uVar20 * 4 + -4) = uVar7 + 1;
                      pBVar9 = param_1 + ((ulong)uVar7 + lVar11) * 8;
                      uVar20 = uVar19 & 0xffffffff00000000 | uVar16;
                      uVar7 = *(uint *)pBVar9;
                      uVar16 = (ulong)uVar7;
                      uVar19 = *(ulong *)pBVar9;
                      *(ulong *)pBVar9 = uVar20;
                      uVar20 = (ulong)(byte)(uVar7 >> 8);
                    } while (uVar20 != uVar18);
                    uVar10 = (ulong)*puVar6;
                  }
                  uVar7 = (int)uVar10 + 1;
                  *puVar6 = uVar7;
                  *(ulong *)(param_1 + (uVar10 + lVar11) * 8) = uVar19 & 0xffffffff00000000 | uVar16
                  ;
                }
                uVar18 = uVar18 + 1;
                puVar6 = puVar6 + 1;
                if (uVar18 == 0x100) break;
                uVar7 = *puVar6;
              }
              lVar12 = 0;
              do {
                while (uVar7 = *puVar17, uVar7 == 0) {
                  puVar17 = puVar17 + 1;
                  if (puVar17 == &local_1480) goto LAB_00100523;
                }
                uVar18 = (ulong)uVar7;
                lVar1 = lVar12 + lVar11;
                lVar12 = uVar18 + lVar12;
                if (uVar7 < 0x10) {
                  if (uVar18 != 1) {
                    pBVar9 = param_1 + lVar1 * 8;
                    puVar15 = (undefined1 *)0x0;
                    pBVar23 = pBVar9;
                    do {
                      uVar5 = *(undefined8 *)(pBVar23 + 8);
                      uVar7 = *(uint *)(pBVar23 + 8);
                      pBVar13 = pBVar23 + 8;
                      if ((((uVar7 < *(uint *)pBVar23) &&
                           (*(undefined8 *)(pBVar23 + 8) = *(undefined8 *)pBVar23, pBVar13 = pBVar9,
                           puVar15 != (undefined1 *)0x0)) &&
                          (pBVar13 = pBVar23, uVar7 < *(uint *)(pBVar23 + -8))) &&
                         (*(undefined8 *)pBVar23 = *(undefined8 *)(pBVar23 + -8), pBVar13 = pBVar9,
                         puVar15 != (undefined1 *)0x1)) {
                        if (uVar7 < *(uint *)(pBVar23 + -0x10)) {
                          *(undefined8 *)(pBVar23 + -8) = *(undefined8 *)(pBVar23 + -0x10);
                          if (puVar15 != (undefined1 *)0x2) {
                            if (uVar7 < *(uint *)(pBVar23 + -0x18)) {
                              *(undefined8 *)(pBVar23 + -0x10) = *(undefined8 *)(pBVar23 + -0x18);
                              if (((((puVar15 != (undefined1 *)0x3) &&
                                    (pBVar13 = pBVar23 + -0x18, uVar7 < *(uint *)(pBVar23 + -0x20)))
                                   && ((*(undefined8 *)(pBVar23 + -0x18) =
                                             *(undefined8 *)(pBVar23 + -0x20), pBVar13 = pBVar9,
                                       puVar15 != (undefined1 *)0x4 &&
                                       ((pBVar13 = pBVar23 + -0x20,
                                        uVar7 < *(uint *)(pBVar23 + -0x28) &&
                                        (*(undefined8 *)(pBVar23 + -0x20) =
                                              *(undefined8 *)(pBVar23 + -0x28), pBVar13 = pBVar9,
                                        puVar15 != (undefined1 *)0x5)))))) &&
                                  ((((pBVar13 = pBVar23 + -0x28, uVar7 < *(uint *)(pBVar23 + -0x30)
                                     && (((*(undefined8 *)(pBVar23 + -0x28) =
                                                *(undefined8 *)(pBVar23 + -0x30), pBVar13 = pBVar9,
                                          puVar15 != (undefined1 *)0x6 &&
                                          (pBVar13 = pBVar23 + -0x30,
                                          uVar7 < *(uint *)(pBVar23 + -0x38))) &&
                                         (*(undefined8 *)(pBVar23 + -0x30) =
                                               *(undefined8 *)(pBVar23 + -0x38), pBVar13 = pBVar9,
                                         puVar15 != (undefined1 *)0x7)))) &&
                                    ((pBVar13 = pBVar23 + -0x38, uVar7 < *(uint *)(pBVar23 + -0x40)
                                     && (*(undefined8 *)(pBVar23 + -0x38) =
                                              *(undefined8 *)(pBVar23 + -0x40), pBVar13 = pBVar9,
                                        puVar15 != &DAT_00000008)))) &&
                                   (((pBVar13 = pBVar23 + -0x40, uVar7 < *(uint *)(pBVar23 + -0x48)
                                     && ((*(undefined8 *)(pBVar23 + -0x40) =
                                               *(undefined8 *)(pBVar23 + -0x48), pBVar13 = pBVar9,
                                         puVar15 != (undefined1 *)0x9 &&
                                         (pBVar13 = pBVar23 + -0x48,
                                         uVar7 < *(uint *)(pBVar23 + -0x50))))) &&
                                    (*(undefined8 *)(pBVar23 + -0x48) =
                                          *(undefined8 *)(pBVar23 + -0x50), pBVar13 = pBVar9,
                                    puVar15 != (undefined1 *)0xa)))))) &&
                                 ((((pBVar13 = pBVar23 + -0x50, uVar7 < *(uint *)(pBVar23 + -0x58)
                                    && (*(undefined8 *)(pBVar23 + -0x50) =
                                             *(undefined8 *)(pBVar23 + -0x58), pBVar13 = pBVar9,
                                       puVar15 != (undefined1 *)0xb)) &&
                                   (pBVar13 = pBVar23 + -0x58, uVar7 < *(uint *)(pBVar23 + -0x60)))
                                  && ((*(undefined8 *)(pBVar23 + -0x58) =
                                            *(undefined8 *)(pBVar23 + -0x60), pBVar13 = pBVar9,
                                      puVar15 != (undefined1 *)0xc &&
                                      (pBVar13 = pBVar23 + -0x60, uVar7 < *(uint *)(pBVar23 + -0x68)
                                      )))))) {
                                *(undefined8 *)(pBVar23 + -0x60) = *(undefined8 *)(pBVar23 + -0x68);
                                pBVar13 = pBVar9;
                              }
                            }
                            else {
                              pBVar13 = pBVar23 + -0x10;
                            }
                          }
                        }
                        else {
                          pBVar13 = pBVar23 + -8;
                        }
                      }
                      puVar15 = puVar15 + 1;
                      *(undefined8 *)pBVar13 = uVar5;
                      pBVar23 = pBVar23 + 8;
                    } while (puVar15 != (undefined1 *)(uVar18 - 1));
                  }
                }
                else {
                  puVar21 = local_c80;
                  for (lVar14 = 0x80; lVar14 != 0; lVar14 = lVar14 + -1) {
                    *puVar21 = 0;
                    puVar21 = puVar21 + 1;
                  }
                  pBVar9 = param_1 + lVar1 * 8;
                  do {
                    BVar3 = *pBVar9;
                    pBVar9 = pBVar9 + 8;
                    piVar2 = (int *)((long)local_c80 + (ulong)(byte)BVar3 * 4);
                    *piVar2 = *piVar2 + 1;
                  } while (pBVar9 != param_1 + (uVar18 + lVar1) * 8);
                  uVar7 = 0;
                  lVar14 = 1;
                  local_880[0] = 0;
                  do {
                    uVar7 = uVar7 + *(int *)((long)local_c80 + lVar14 * 4 + -4);
                    local_880[lVar14] = uVar7;
                    lVar14 = lVar14 + 1;
                  } while (lVar14 != 0x100);
                  uVar7 = 0;
                  puVar6 = local_880 + 1;
                  puVar22 = local_480;
                  for (lVar14 = 0x7f; lVar14 != 0; lVar14 = lVar14 + -1) {
                    *(undefined8 *)puVar22 = *(undefined8 *)puVar6;
                    puVar6 = puVar6 + 2;
                    puVar22 = puVar22 + 2;
                  }
                  uVar18 = 0;
                  *puVar22 = *puVar6;
                  local_480[0xff] = local_884 + local_880[0xff];
                  puVar6 = local_880;
                  while( true ) {
                    uVar25 = local_480[uVar18];
                    while (uVar7 < uVar25) {
                      local_3088 = *(ulong *)(param_1 + ((ulong)uVar7 + lVar1) * 8);
                      uVar20 = (ulong)*(uint *)(param_1 + ((ulong)uVar7 + lVar1) * 8);
                      uVar19 = uVar20 & 0xff;
                      if (uVar19 != uVar18) {
                        do {
                          pBVar9 = param_1 + ((ulong)local_880[uVar19] + lVar1) * 8;
                          local_880[uVar19] = local_880[uVar19] + 1;
                          uVar19 = local_3088 & 0xffffffff00000000 | uVar20;
                          local_3088 = *(ulong *)pBVar9;
                          uVar20 = (ulong)*(uint *)pBVar9;
                          *(ulong *)pBVar9 = uVar19;
                          uVar19 = uVar20 & 0xff;
                        } while (uVar19 != uVar18);
                        uVar7 = *puVar6;
                      }
                      uVar19 = (ulong)uVar7;
                      uVar7 = uVar7 + 1;
                      *puVar6 = uVar7;
                      *(ulong *)(param_1 + (uVar19 + lVar1) * 8) =
                           uVar20 | local_3088 & 0xffffffff00000000;
                    }
                    uVar18 = uVar18 + 1;
                    puVar6 = puVar6 + 1;
                    if (uVar18 == 0x100) break;
                    uVar7 = *puVar6;
                  }
                }
                puVar17 = puVar17 + 1;
              } while (puVar17 != &local_1480);
            }
          }
LAB_00100523:
          local_3090 = local_3090 + 1;
          lVar11 = lVar24;
        } while (local_3090 != &local_2080);
      }
    }
    puVar26 = puVar26 + 1;
    lVar8 = lVar27;
    if (puVar26 == &local_2c80) {
      if (local_48 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
  } while( true );
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__adjust_heap<embree::sse2::BVHBuilderMorton::BuildPrim*, long,
   embree::sse2::BVHBuilderMorton::BuildPrim,
   __gnu_cxx::__ops::_Iter_less_iter>(embree::sse2::BVHBuilderMorton::BuildPrim*, long, long,
   embree::sse2::BVHBuilderMorton::BuildPrim, __gnu_cxx::__ops::_Iter_less_iter) [clone .isra.0] */

void std::
     __adjust_heap<embree::sse2::BVHBuilderMorton::BuildPrim*,long,embree::sse2::BVHBuilderMorton::BuildPrim,__gnu_cxx::__ops::_Iter_less_iter>
               (long param_1,long param_2,ulong param_3,undefined8 param_4)

{
  uint *puVar1;
  long lVar2;
  uint *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = (long)(param_3 - 1) / 2;
  lVar2 = param_2;
  if (param_2 < lVar6) {
    do {
      lVar5 = (lVar2 + 1) * 2;
      lVar4 = (lVar2 + 1) * 0x10;
      puVar3 = (uint *)(param_1 + lVar4);
      if (*puVar3 < *(uint *)(param_1 + -8 + lVar4)) {
        lVar5 = lVar5 + -1;
        puVar3 = (uint *)(param_1 + lVar5 * 8);
        *(undefined8 *)(param_1 + lVar2 * 8) = *(undefined8 *)puVar3;
        lVar2 = lVar5;
      }
      else {
        *(undefined8 *)(param_1 + lVar2 * 8) = *(undefined8 *)puVar3;
        lVar2 = lVar5;
      }
    } while (lVar2 < lVar6);
    if ((param_3 & 1) == 0) goto LAB_00100d40;
  }
  else {
    puVar3 = (uint *)(param_1 + param_2 * 8);
    if ((param_3 & 1) != 0) goto LAB_00100d22;
LAB_00100d40:
    if ((long)(param_3 - 2) / 2 == lVar2) {
      lVar6 = lVar2 * 2;
      lVar2 = lVar6 + 1;
      *(undefined8 *)puVar3 = *(undefined8 *)(param_1 + -8 + (lVar6 + 2) * 8);
      puVar3 = (uint *)(param_1 + lVar2 * 8);
    }
  }
  lVar6 = (lVar2 + -1) - (lVar2 + -1 >> 0x3f);
  if (param_2 < lVar2) {
    while( true ) {
      lVar5 = lVar6 >> 1;
      puVar1 = (uint *)(param_1 + lVar5 * 8);
      puVar3 = (uint *)(param_1 + lVar2 * 8);
      if ((uint)param_4 <= *puVar1) break;
      *(undefined8 *)puVar3 = *(undefined8 *)puVar1;
      lVar6 = (lVar5 + -1) - (lVar5 + -1 >> 0x3f);
      lVar2 = lVar5;
      if (lVar5 <= param_2) {
        *(undefined8 *)puVar1 = param_4;
        return;
      }
    }
  }
LAB_00100d22:
  *(undefined8 *)puVar3 = param_4;
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__introsort_loop<embree::sse2::BVHBuilderMorton::BuildPrim*, long,
   __gnu_cxx::__ops::_Iter_less_iter>(embree::sse2::BVHBuilderMorton::BuildPrim*,
   embree::sse2::BVHBuilderMorton::BuildPrim*, long, __gnu_cxx::__ops::_Iter_less_iter) [clone
   .isra.0] */

void std::
     __introsort_loop<embree::sse2::BVHBuilderMorton::BuildPrim*,long,__gnu_cxx::__ops::_Iter_less_iter>
               (uint *param_1,uint *param_2,long param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  long lVar10;
  
  lVar6 = (long)param_2 - (long)param_1;
  if (lVar6 < 0x81) {
    return;
  }
  puVar1 = param_1 + 2;
  puVar9 = param_2;
  if (param_3 != 0) {
    do {
      uVar2 = param_1[2];
      uVar3 = puVar9[-2];
      param_3 = param_3 + -1;
      puVar7 = param_1 + (lVar6 >> 4) * 2;
      uVar4 = *puVar7;
      puVar8 = puVar9;
      param_2 = puVar1;
      if (uVar2 < uVar4) {
        if (uVar4 < uVar3) {
LAB_00100e8e:
          uVar5 = *(undefined8 *)param_1;
          *(undefined8 *)param_1 = *(undefined8 *)puVar7;
          *(undefined8 *)puVar7 = uVar5;
        }
        else {
          if (uVar3 <= uVar2) goto LAB_00100de4;
LAB_00100e53:
          uVar5 = *(undefined8 *)param_1;
          *(undefined8 *)param_1 = *(undefined8 *)(puVar9 + -2);
          *(undefined8 *)(puVar9 + -2) = uVar5;
        }
      }
      else {
        if (uVar3 <= uVar2) {
          if (uVar4 < uVar3) goto LAB_00100e53;
          goto LAB_00100e8e;
        }
LAB_00100de4:
        uVar5 = *(undefined8 *)(param_1 + 2);
        *(undefined8 *)(param_1 + 2) = *(undefined8 *)param_1;
        *(undefined8 *)param_1 = uVar5;
      }
      while( true ) {
        uVar2 = *param_2;
        while (uVar2 < *param_1) {
          param_2 = param_2 + 2;
          uVar2 = *param_2;
        }
        puVar7 = puVar8 + -2;
        uVar2 = puVar8[-2];
        while (*param_1 < uVar2) {
          puVar7 = puVar7 + -2;
          uVar2 = *puVar7;
        }
        if (puVar7 <= param_2) break;
        uVar5 = *(undefined8 *)param_2;
        *(undefined8 *)param_2 = *(undefined8 *)puVar7;
        *(undefined8 *)puVar7 = uVar5;
        puVar8 = puVar7;
        param_2 = param_2 + 2;
      }
      __introsort_loop<embree::sse2::BVHBuilderMorton::BuildPrim*,long,__gnu_cxx::__ops::_Iter_less_iter>
                (param_2,puVar9,param_3);
      lVar6 = (long)param_2 - (long)param_1;
      if (lVar6 < 0x81) {
        return;
      }
      puVar9 = param_2;
    } while (param_3 != 0);
  }
  for (lVar10 = (lVar6 >> 3) + -2 >> 1;
      __adjust_heap<embree::sse2::BVHBuilderMorton::BuildPrim*,long,embree::sse2::BVHBuilderMorton::BuildPrim,__gnu_cxx::__ops::_Iter_less_iter>
                (param_1,lVar10,lVar6 >> 3,*(undefined8 *)(param_1 + lVar10 * 2)), lVar10 != 0;
      lVar10 = lVar10 + -1) {
  }
  do {
    param_2 = param_2 + -2;
    uVar5 = *(undefined8 *)param_2;
    *(undefined8 *)param_2 = *(undefined8 *)param_1;
    __adjust_heap<embree::sse2::BVHBuilderMorton::BuildPrim*,long,embree::sse2::BVHBuilderMorton::BuildPrim,__gnu_cxx::__ops::_Iter_less_iter>
              (param_1,0,(long)param_2 - (long)param_1 >> 3,uVar5);
  } while (8 < (long)param_2 - (long)param_1);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__insertion_sort<embree::sse2::BVHBuilderMorton::BuildPrim*,
   __gnu_cxx::__ops::_Iter_less_iter>(embree::sse2::BVHBuilderMorton::BuildPrim*,
   embree::sse2::BVHBuilderMorton::BuildPrim*, __gnu_cxx::__ops::_Iter_less_iter) [clone .isra.0] */

void std::
     __insertion_sort<embree::sse2::BVHBuilderMorton::BuildPrim*,__gnu_cxx::__ops::_Iter_less_iter>
               (uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  uint *puVar4;
  uint *puVar5;
  size_t __n;
  uint *puVar6;
  uint *puVar7;
  
  if (param_1 == param_2) {
    return;
  }
  puVar6 = param_1 + 2;
  do {
    if (param_2 == puVar6) {
      return;
    }
    while( true ) {
      uVar2 = *puVar6;
      puVar7 = puVar6 + 2;
      if (uVar2 < *param_1) break;
      uVar3 = *(undefined8 *)puVar6;
      uVar1 = puVar6[-2];
      puVar5 = puVar6 + -2;
      while (puVar4 = puVar5, uVar2 < uVar1) {
        *(undefined8 *)(puVar4 + 2) = *(undefined8 *)puVar4;
        puVar5 = puVar4 + -2;
        puVar6 = puVar4;
        uVar1 = puVar4[-2];
      }
      *(undefined8 *)puVar6 = uVar3;
      puVar6 = puVar7;
      if (param_2 == puVar7) {
        return;
      }
    }
    uVar3 = *(undefined8 *)puVar6;
    __n = (long)puVar6 - (long)param_1;
    if ((long)__n < 9) {
      if (__n == 8) {
        *(undefined8 *)puVar6 = *(undefined8 *)param_1;
      }
    }
    else {
      memmove((void *)((long)puVar6 + (8 - __n)),param_1,__n);
    }
    *(undefined8 *)param_1 = uVar3;
    puVar6 = puVar7;
  } while( true );
}



/* embree::sse2::BVH4Triangle4MeshBuilderMortonGeneral(void*, embree::TriangleMesh*, unsigned int,
   unsigned long) */

void embree::sse2::BVH4Triangle4MeshBuilderMortonGeneral
               (void *param_1,TriangleMesh *param_2,uint param_3,ulong param_4)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = (undefined8 *)operator_new(0x78);
  lVar2 = *(long *)((long)param_1 + 0x60);
  puVar1[1] = 0;
  *puVar1 = &PTR__BVHNMeshBuilderMorton_00117558;
  if (lVar2 != 0) {
    lVar2 = lVar2 + 0x548;
  }
  puVar1[2] = param_1;
  puVar1[3] = param_2;
  puVar1[4] = lVar2;
  *(undefined1 *)(puVar1 + 5) = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 4;
  puVar1[10] = 0x20;
  puVar1[0xb] = 4;
  puVar1[0xc] = 4;
  puVar1[0xd] = 0x400;
  *(uint *)(puVar1 + 0xe) = param_3;
  *(undefined4 *)((long)puVar1 + 0x74) = 0;
  return;
}



/* embree::sse2::BVH4Triangle4vMeshBuilderMortonGeneral(void*, embree::TriangleMesh*, unsigned int,
   unsigned long) */

void embree::sse2::BVH4Triangle4vMeshBuilderMortonGeneral
               (void *param_1,TriangleMesh *param_2,uint param_3,ulong param_4)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = (undefined8 *)operator_new(0x78);
  lVar2 = *(long *)((long)param_1 + 0x60);
  puVar1[1] = 0;
  *puVar1 = &PTR__BVHNMeshBuilderMorton_001175a0;
  if (lVar2 != 0) {
    lVar2 = lVar2 + 0x548;
  }
  puVar1[2] = param_1;
  puVar1[3] = param_2;
  puVar1[4] = lVar2;
  *(undefined1 *)(puVar1 + 5) = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 4;
  puVar1[10] = 0x20;
  puVar1[0xb] = 4;
  puVar1[0xc] = 4;
  puVar1[0xd] = 0x400;
  *(uint *)(puVar1 + 0xe) = param_3;
  *(undefined4 *)((long)puVar1 + 0x74) = 0;
  return;
}



/* embree::sse2::BVH4Triangle4iMeshBuilderMortonGeneral(void*, embree::TriangleMesh*, unsigned int,
   unsigned long) */

void embree::sse2::BVH4Triangle4iMeshBuilderMortonGeneral
               (void *param_1,TriangleMesh *param_2,uint param_3,ulong param_4)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = (undefined8 *)operator_new(0x78);
  lVar2 = *(long *)((long)param_1 + 0x60);
  puVar1[1] = 0;
  *puVar1 = &PTR__BVHNMeshBuilderMorton_001175e8;
  if (lVar2 != 0) {
    lVar2 = lVar2 + 0x548;
  }
  puVar1[2] = param_1;
  puVar1[3] = param_2;
  puVar1[4] = lVar2;
  *(undefined1 *)(puVar1 + 5) = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 4;
  puVar1[10] = 0x20;
  puVar1[0xb] = 4;
  puVar1[0xc] = 4;
  puVar1[0xd] = 0x400;
  *(uint *)(puVar1 + 0xe) = param_3;
  *(undefined4 *)((long)puVar1 + 0x74) = 0;
  return;
}



/* embree::Builder::deleteGeometry(unsigned long) */

void embree::Builder::deleteGeometry(ulong param_1)

{
  return;
}



/* bool embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim, unsigned
   int>::compare<embree::sse2::BVHBuilderMorton::BuildPrim>(embree::sse2::BVHBuilderMorton::BuildPrim
   const&, embree::sse2::BVHBuilderMorton::BuildPrim const&) */

bool embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::
     compare<embree::sse2::BVHBuilderMorton::BuildPrim>(BuildPrim *param_1,BuildPrim *param_2)

{
  return *(uint *)param_1 < *(uint *)param_2;
}



/* embree::BBox<embree::Vec3fa>::merge(embree::BBox<embree::Vec3fa> const&,
   embree::BBox<embree::Vec3fa> const&) */

BBox<embree::Vec3fa> * __thiscall
embree::BBox<embree::Vec3fa>::merge(BBox<embree::Vec3fa> *this,BBox *param_1,BBox *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  auVar1 = maxps(*(undefined1 (*) [16])(param_1 + 0x10),*(undefined1 (*) [16])(param_2 + 0x10));
  auVar2 = minps(*(undefined1 (*) [16])param_1,*(undefined1 (*) [16])param_2);
  *(undefined1 (*) [16])(this + 0x10) = auVar1;
  *(undefined1 (*) [16])this = auVar2;
  return this;
}



/* embree::sse2::BVHNMeshBuilderMorton<4, embree::TriangleMesh, embree::TriangleM<4> >::clear() */

void __thiscall
embree::sse2::BVHNMeshBuilderMorton<4,embree::TriangleMesh,embree::TriangleM<4>>::clear
          (BVHNMeshBuilderMorton<4,embree::TriangleMesh,embree::TriangleM<4>> *this)

{
  long lVar1;
  void *pvVar2;
  
  lVar1 = *(long *)(this + 0x38);
  pvVar2 = *(void **)(this + 0x40);
  if (pvVar2 != (void *)0x0) {
    if ((ulong)(lVar1 * 8) < 0x1c00000) {
      embree::alignedFree(pvVar2);
    }
    else {
      embree::os_free(pvVar2,lVar1 * 8,(bool)this[0x28]);
    }
  }
  if (lVar1 != 0) {
    (**(code **)**(undefined8 **)(this + 0x20))(*(undefined8 **)(this + 0x20),lVar1 * -8,1);
  }
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  return;
}



/* embree::sse2::BVHNMeshBuilderMorton<4, embree::TriangleMesh, embree::TriangleMi<4> >::clear() */

void __thiscall
embree::sse2::BVHNMeshBuilderMorton<4,embree::TriangleMesh,embree::TriangleMi<4>>::clear
          (BVHNMeshBuilderMorton<4,embree::TriangleMesh,embree::TriangleMi<4>> *this)

{
  long lVar1;
  void *pvVar2;
  
  lVar1 = *(long *)(this + 0x38);
  pvVar2 = *(void **)(this + 0x40);
  if (pvVar2 != (void *)0x0) {
    if ((ulong)(lVar1 * 8) < 0x1c00000) {
      embree::alignedFree(pvVar2);
    }
    else {
      embree::os_free(pvVar2,lVar1 * 8,(bool)this[0x28]);
    }
  }
  if (lVar1 != 0) {
    (**(code **)**(undefined8 **)(this + 0x20))(*(undefined8 **)(this + 0x20),lVar1 * -8,1);
  }
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  return;
}



/* embree::sse2::BVHNMeshBuilderMorton<4, embree::TriangleMesh, embree::TriangleMi<4>
   >::~BVHNMeshBuilderMorton() */

void __thiscall
embree::sse2::BVHNMeshBuilderMorton<4,embree::TriangleMesh,embree::TriangleMi<4>>::
~BVHNMeshBuilderMorton(BVHNMeshBuilderMorton<4,embree::TriangleMesh,embree::TriangleMi<4>> *this)

{
  long lVar1;
  void *pvVar2;
  
  *(undefined ***)this = &PTR__BVHNMeshBuilderMorton_001175e8;
  lVar1 = *(long *)(this + 0x38);
  pvVar2 = *(void **)(this + 0x40);
  if (pvVar2 != (void *)0x0) {
    if ((ulong)(lVar1 * 8) < 0x1c00000) {
      embree::alignedFree(pvVar2);
    }
    else {
      embree::os_free(pvVar2,lVar1 * 8,(bool)this[0x28]);
    }
  }
  if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00101353. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(this + 0x20))(*(undefined8 **)(this + 0x20),lVar1 * -8,1);
  return;
}



/* embree::sse2::BVHNMeshBuilderMorton<4, embree::TriangleMesh, embree::TriangleMv<4>
   >::~BVHNMeshBuilderMorton() */

void __thiscall
embree::sse2::BVHNMeshBuilderMorton<4,embree::TriangleMesh,embree::TriangleMv<4>>::
~BVHNMeshBuilderMorton(BVHNMeshBuilderMorton<4,embree::TriangleMesh,embree::TriangleMv<4>> *this)

{
  long lVar1;
  void *pvVar2;
  
  *(undefined ***)this = &PTR__BVHNMeshBuilderMorton_001175a0;
  lVar1 = *(long *)(this + 0x38);
  pvVar2 = *(void **)(this + 0x40);
  if (pvVar2 != (void *)0x0) {
    if ((ulong)(lVar1 * 8) < 0x1c00000) {
      embree::alignedFree(pvVar2);
    }
    else {
      embree::os_free(pvVar2,lVar1 * 8,(bool)this[0x28]);
    }
  }
  if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x001013d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(this + 0x20))(*(undefined8 **)(this + 0x20),lVar1 * -8,1);
  return;
}



/* embree::sse2::BVHNMeshBuilderMorton<4, embree::TriangleMesh, embree::TriangleM<4>
   >::~BVHNMeshBuilderMorton() */

void __thiscall
embree::sse2::BVHNMeshBuilderMorton<4,embree::TriangleMesh,embree::TriangleM<4>>::
~BVHNMeshBuilderMorton(BVHNMeshBuilderMorton<4,embree::TriangleMesh,embree::TriangleM<4>> *this)

{
  long lVar1;
  void *pvVar2;
  
  *(undefined ***)this = &PTR__BVHNMeshBuilderMorton_00117558;
  lVar1 = *(long *)(this + 0x38);
  pvVar2 = *(void **)(this + 0x40);
  if (pvVar2 != (void *)0x0) {
    if ((ulong)(lVar1 * 8) < 0x1c00000) {
      embree::alignedFree(pvVar2);
    }
    else {
      embree::os_free(pvVar2,lVar1 * 8,(bool)this[0x28]);
    }
  }
  if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00101453. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(this + 0x20))(*(undefined8 **)(this + 0x20),lVar1 * -8,1);
  return;
}



/* embree::sse2::BVHNMeshBuilderMorton<4, embree::TriangleMesh, embree::TriangleMv<4> >::clear() */

void __thiscall
embree::sse2::BVHNMeshBuilderMorton<4,embree::TriangleMesh,embree::TriangleMv<4>>::clear
          (BVHNMeshBuilderMorton<4,embree::TriangleMesh,embree::TriangleMv<4>> *this)

{
  long lVar1;
  void *pvVar2;
  
  lVar1 = *(long *)(this + 0x38);
  pvVar2 = *(void **)(this + 0x40);
  if (pvVar2 != (void *)0x0) {
    if ((ulong)(lVar1 * 8) < 0x1c00000) {
      embree::alignedFree(pvVar2);
    }
    else {
      embree::os_free(pvVar2,lVar1 * 8,(bool)this[0x28]);
    }
  }
  if (lVar1 != 0) {
    (**(code **)**(undefined8 **)(this + 0x20))(*(undefined8 **)(this + 0x20),lVar1 * -8,1);
  }
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  return;
}



/* embree::Scene::BuildProgressMonitorInterface::TEMPNAMEPLACEHOLDERVALUE(unsigned long) const */

void __thiscall
embree::Scene::BuildProgressMonitorInterface::operator()
          (BuildProgressMonitorInterface *this,ulong param_1)

{
  if (-1 < (long)param_1) {
    embree::Scene::progressMonitor((double)(long)param_1);
    return;
  }
  embree::Scene::progressMonitor((double)param_1);
  return;
}



/* embree::RefCount::refInc() */

RefCount * __thiscall embree::RefCount::refInc(RefCount *this)

{
  LOCK();
  *(long *)(this + 8) = *(long *)(this + 8) + 1;
  UNLOCK();
  return this;
}



/* embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim, unsigned
   int>::tbbRadixIteration1(unsigned int, embree::sse2::BVHBuilderMorton::BuildPrim const*,
   embree::sse2::BVHBuilderMorton::BuildPrim*, unsigned long, unsigned long) [clone .isra.0] */

void embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::
     tbbRadixIteration1(uint param_1,BuildPrim *param_2,BuildPrim *param_3,ulong param_4,
                       ulong param_5)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  long lVar13;
  uint uVar14;
  undefined4 in_register_0000003c;
  long lVar15;
  ulong uVar16;
  ulong in_R9;
  long lVar17;
  int *piVar18;
  int *piVar19;
  long in_FS_OFFSET;
  ulong in_stack_00000008;
  undefined8 local_888;
  uint local_880 [526];
  long local_48;
  
  lVar15 = CONCAT44(in_register_0000003c,param_1);
  local_48 = *(long *)(in_FS_OFFSET + 0x28);
  uVar8 = (in_R9 * (long)param_2) / in_stack_00000008;
  puVar10 = local_880;
  for (lVar13 = 0x80; lVar13 != 0; lVar13 = lVar13 + -1) {
    puVar10[0] = 0;
    puVar10[1] = 0;
    puVar10 = puVar10 + 2;
  }
  if (in_stack_00000008 != 0) {
    uVar16 = 0;
    if (2 < in_stack_00000008) {
      lVar17 = 0x400;
      uVar16 = 0;
      local_888 = (in_stack_00000008 - 3 >> 1) * 0x800 + 0xc00;
      lVar13 = lVar15;
      do {
        lVar9 = 0;
        puVar10 = local_880;
        do {
          piVar19 = (int *)(lVar13 + lVar9 * 4);
          iVar2 = piVar19[1];
          iVar3 = piVar19[2];
          iVar4 = piVar19[3];
          piVar18 = (int *)(lVar13 + 0x400 + lVar9 * 4);
          iVar5 = piVar18[1];
          iVar6 = piVar18[2];
          iVar7 = piVar18[3];
          lVar9 = lVar9 + 4;
          *puVar10 = *puVar10 + *piVar19 + *piVar18;
          puVar10[1] = puVar10[1] + iVar2 + iVar5;
          puVar10[2] = puVar10[2] + iVar3 + iVar6;
          puVar10[3] = puVar10[3] + iVar4 + iVar7;
          puVar10 = puVar10 + 4;
        } while (lVar9 != 0x100);
        lVar17 = lVar17 + 0x800;
        uVar16 = uVar16 + 2;
        lVar13 = lVar13 + 0x800;
      } while (lVar17 != local_888);
    }
    piVar18 = (int *)(uVar16 * 0x400 + lVar15);
    puVar10 = local_880;
    piVar19 = piVar18;
    do {
      do {
        iVar2 = *piVar18;
        iVar3 = piVar18[1];
        iVar4 = piVar18[2];
        iVar5 = piVar18[3];
        puVar11 = puVar10 + 4;
        piVar18 = piVar18 + 4;
        *puVar10 = iVar2 + *puVar10;
        puVar10[1] = iVar3 + puVar10[1];
        puVar10[2] = iVar4 + puVar10[2];
        puVar10[3] = iVar5 + puVar10[3];
        puVar10 = puVar11;
      } while (puVar11 != local_880 + 0x100);
      uVar16 = uVar16 + 1;
      piVar18 = piVar19 + 0x100;
      puVar10 = local_880;
      piVar19 = piVar18;
    } while (uVar16 < in_stack_00000008);
  }
  puVar10 = local_880 + 0x100;
  local_880[0x100] = 0;
  uVar14 = 0;
  lVar13 = 1;
  do {
    uVar14 = uVar14 + *(int *)((long)&local_888 + lVar13 * 4 + 4);
    puVar10[lVar13] = uVar14;
    lVar13 = lVar13 + 1;
  } while (lVar13 != 0x100);
  if (in_R9 != 0) {
    uVar16 = 0;
    if (2 < in_R9) {
      lVar17 = 0x400;
      uVar16 = 0;
      lVar13 = lVar15;
      do {
        lVar9 = 0;
        puVar11 = puVar10;
        do {
          piVar19 = (int *)(lVar13 + lVar9 * 4);
          iVar2 = piVar19[1];
          iVar3 = piVar19[2];
          iVar4 = piVar19[3];
          piVar18 = (int *)(lVar13 + 0x400 + lVar9 * 4);
          iVar5 = piVar18[1];
          iVar6 = piVar18[2];
          iVar7 = piVar18[3];
          lVar9 = lVar9 + 4;
          *puVar11 = *puVar11 + *piVar19 + *piVar18;
          puVar11[1] = puVar11[1] + iVar2 + iVar5;
          puVar11[2] = puVar11[2] + iVar3 + iVar6;
          puVar11[3] = puVar11[3] + iVar4 + iVar7;
          puVar11 = puVar11 + 4;
        } while (lVar9 != 0x100);
        lVar17 = lVar17 + 0x800;
        uVar16 = uVar16 + 2;
        lVar13 = lVar13 + 0x800;
      } while (lVar17 != (in_R9 - 3 >> 1) * 0x800 + 0xc00);
    }
    piVar18 = (int *)(lVar15 + uVar16 * 0x400);
    puVar11 = puVar10;
    piVar19 = piVar18;
    do {
      do {
        iVar2 = *piVar18;
        iVar3 = piVar18[1];
        iVar4 = piVar18[2];
        iVar5 = piVar18[3];
        puVar12 = puVar11 + 4;
        piVar18 = piVar18 + 4;
        *puVar11 = iVar2 + *puVar11;
        puVar11[1] = iVar3 + puVar11[1];
        puVar11[2] = iVar4 + puVar11[2];
        puVar11[3] = iVar5 + puVar11[3];
        puVar11 = puVar12;
      } while (puVar12 != local_880 + 0x200);
      uVar16 = uVar16 + 1;
      piVar18 = piVar19 + 0x100;
      puVar11 = puVar10;
      piVar19 = piVar18;
    } while (uVar16 < in_R9);
  }
  if (uVar8 < (ulong)(param_2 + in_R9 * (long)param_2) / in_stack_00000008) {
    puVar10 = (uint *)(param_4 + uVar8 * 8);
    do {
      uVar14 = *puVar10;
      uVar1 = *(undefined8 *)puVar10;
      puVar10 = puVar10 + 2;
      uVar8 = (ulong)(byte)(uVar14 >> ((byte)param_3 & 0x3f));
      uVar14 = local_880[uVar8 + 0x100];
      *(undefined8 *)(param_5 + (ulong)uVar14 * 8) = uVar1;
      local_880[uVar8 + 0x100] = uVar14 + 1;
    } while ((uint *)(param_4 + ((ulong)(param_2 + in_R9 * (long)param_2) / in_stack_00000008) * 8)
             != puVar10);
  }
  if (local_48 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* embree::RefCount::refDec() */

void __thiscall embree::RefCount::refDec(RefCount *this)

{
  RefCount *pRVar1;
  
  LOCK();
  pRVar1 = this + 8;
  *(long *)pRVar1 = *(long *)pRVar1 + -1;
  UNLOCK();
  if ((this != (RefCount *)0x0) && (*(long *)pRVar1 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00101809. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 8))();
    return;
  }
  return;
}



/* embree::sse2::BVHNMeshBuilderMorton<4, embree::TriangleMesh, embree::TriangleMi<4>
   >::~BVHNMeshBuilderMorton() */

void __thiscall
embree::sse2::BVHNMeshBuilderMorton<4,embree::TriangleMesh,embree::TriangleMi<4>>::
~BVHNMeshBuilderMorton(BVHNMeshBuilderMorton<4,embree::TriangleMesh,embree::TriangleMi<4>> *this)

{
  long lVar1;
  void *pvVar2;
  
  *(undefined ***)this = &PTR__BVHNMeshBuilderMorton_001175e8;
  lVar1 = *(long *)(this + 0x38);
  pvVar2 = *(void **)(this + 0x40);
  if (pvVar2 != (void *)0x0) {
    if ((ulong)(lVar1 * 8) < 0x1c00000) {
      embree::alignedFree(pvVar2);
    }
    else {
      embree::os_free(pvVar2,lVar1 * 8,(bool)this[0x28]);
    }
  }
  if (lVar1 != 0) {
    (**(code **)**(undefined8 **)(this + 0x20))(*(undefined8 **)(this + 0x20),lVar1 * -8,1);
  }
  operator_delete(this,0x78);
  return;
}



/* embree::sse2::BVHNMeshBuilderMorton<4, embree::TriangleMesh, embree::TriangleMv<4>
   >::~BVHNMeshBuilderMorton() */

void __thiscall
embree::sse2::BVHNMeshBuilderMorton<4,embree::TriangleMesh,embree::TriangleMv<4>>::
~BVHNMeshBuilderMorton(BVHNMeshBuilderMorton<4,embree::TriangleMesh,embree::TriangleMv<4>> *this)

{
  long lVar1;
  void *pvVar2;
  
  *(undefined ***)this = &PTR__BVHNMeshBuilderMorton_001175a0;
  lVar1 = *(long *)(this + 0x38);
  pvVar2 = *(void **)(this + 0x40);
  if (pvVar2 != (void *)0x0) {
    if ((ulong)(lVar1 * 8) < 0x1c00000) {
      embree::alignedFree(pvVar2);
    }
    else {
      embree::os_free(pvVar2,lVar1 * 8,(bool)this[0x28]);
    }
  }
  if (lVar1 != 0) {
    (**(code **)**(undefined8 **)(this + 0x20))(*(undefined8 **)(this + 0x20),lVar1 * -8,1);
  }
  operator_delete(this,0x78);
  return;
}



/* embree::sse2::BVHNMeshBuilderMorton<4, embree::TriangleMesh, embree::TriangleM<4>
   >::~BVHNMeshBuilderMorton() */

void __thiscall
embree::sse2::BVHNMeshBuilderMorton<4,embree::TriangleMesh,embree::TriangleM<4>>::
~BVHNMeshBuilderMorton(BVHNMeshBuilderMorton<4,embree::TriangleMesh,embree::TriangleM<4>> *this)

{
  long lVar1;
  void *pvVar2;
  
  *(undefined ***)this = &PTR__BVHNMeshBuilderMorton_00117558;
  lVar1 = *(long *)(this + 0x38);
  pvVar2 = *(void **)(this + 0x40);
  if (pvVar2 != (void *)0x0) {
    if ((ulong)(lVar1 * 8) < 0x1c00000) {
      embree::alignedFree(pvVar2);
    }
    else {
      embree::os_free(pvVar2,lVar1 * 8,(bool)this[0x28]);
    }
  }
  if (lVar1 != 0) {
    (**(code **)**(undefined8 **)(this + 0x20))(*(undefined8 **)(this + 0x20),lVar1 * -8,1);
  }
  operator_delete(this,0x78);
  return;
}



/* embree::FastAllocator::init(unsigned long, unsigned long, unsigned long) */

void __thiscall
embree::FastAllocator::init(FastAllocator *this,ulong param_1,ulong param_2,ulong param_3)

{
  FastAllocator *pFVar1;
  long *plVar2;
  FastAllocator FVar3;
  ulong *puVar4;
  long *plVar5;
  FastAllocator *pFVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  FastAllocator *pFVar10;
  ulong uVar11;
  FastAllocator *pFVar12;
  ulong uVar13;
  long *plVar14;
  void *pvVar15;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  
  pFVar1 = this + 0xb8;
  pFVar10 = this + 0xf8;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pFVar6 = pFVar1;
  do {
    while (*(long *)pFVar6 != 0) {
      lVar9 = *(long *)(*(long *)pFVar6 + 0x18);
      *(long *)(*(long *)pFVar6 + 0x18) = *(long *)pFVar10;
      LOCK();
      *(long *)pFVar10 = *(long *)pFVar6;
      UNLOCK();
      LOCK();
      *(long *)pFVar6 = lVar9;
      UNLOCK();
    }
    LOCK();
    *(long *)pFVar6 = 0;
    UNLOCK();
    pFVar6 = pFVar6 + 8;
  } while (pFVar10 != pFVar6);
  *(undefined8 *)(this + 8) = 7;
  pFVar6 = this + 0x100;
  pFVar12 = pFVar1;
  if ((*(long *)(this + 0xf8) != 0) || (*(long *)(this + 0x100) != 0)) {
    do {
      while (*(long *)pFVar12 != 0) {
        lVar9 = *(long *)(*(long *)pFVar12 + 0x18);
        *(long *)(*(long *)pFVar12 + 0x18) = *(long *)pFVar10;
        LOCK();
        *(long *)pFVar10 = *(long *)pFVar12;
        UNLOCK();
        LOCK();
        *(long *)pFVar12 = lVar9;
        UNLOCK();
      }
      LOCK();
      *(long *)pFVar12 = 0;
      UNLOCK();
      pFVar12 = pFVar12 + 8;
    } while (pFVar10 != pFVar12);
    LOCK();
    *(undefined8 *)(this + 0x118) = 0;
    UNLOCK();
    LOCK();
    *(undefined8 *)(this + 0x120) = 0;
    UNLOCK();
    LOCK();
    *(undefined8 *)(this + 0x128) = 0;
    UNLOCK();
    while (*(long *)pFVar10 != 0) {
      puVar4 = *(ulong **)pFVar10;
      uVar8 = *puVar4;
      if (*puVar4 < puVar4[1]) {
        uVar8 = puVar4[1];
      }
      LOCK();
      puVar4[1] = uVar8;
      UNLOCK();
      LOCK();
      *puVar4 = 0;
      UNLOCK();
      lVar9 = *(long *)(*(long *)pFVar10 + 0x18);
      *(long *)(*(long *)pFVar10 + 0x18) = *(long *)pFVar6;
      LOCK();
      *(long *)pFVar6 = *(long *)pFVar10;
      UNLOCK();
      LOCK();
      *(long *)pFVar10 = lVar9;
      UNLOCK();
    }
    lVar9 = *(long *)(this + 0x100);
    local_48 = lVar9;
    if (lVar9 != 0) {
      plVar14 = &local_48;
      do {
        while (*(int *)(lVar9 + 0x28) != 2) {
          plVar14 = (long *)(lVar9 + 0x18);
          lVar9 = *(long *)(lVar9 + 0x18);
          if (lVar9 == 0) goto LAB_00101cf4;
        }
        lVar9 = *(long *)(lVar9 + 0x18);
        *plVar14 = lVar9;
      } while (lVar9 != 0);
    }
LAB_00101cf4:
    LOCK();
    *(long *)pFVar6 = local_48;
    UNLOCK();
    pFVar10 = this + 0x78;
    do {
      LOCK();
      *(long *)pFVar10 = 0;
      UNLOCK();
      LOCK();
      *(long *)(pFVar10 + 0x40) = 0;
      UNLOCK();
      pFVar10 = pFVar10 + 8;
    } while (pFVar1 != pFVar10);
    plVar14 = *(long **)(this + 0x130);
    plVar5 = *(long **)(this + 0x138);
    if (plVar14 != plVar5) {
      do {
        while( true ) {
          lVar9 = *plVar14;
          if (this != *(FastAllocator **)(lVar9 + 8)) break;
          embree::MutexSys::lock();
          if (this == *(FastAllocator **)(lVar9 + 8)) {
            LOCK();
            plVar2 = (long *)(*(long *)(lVar9 + 8) + 0x118);
            *plVar2 = *plVar2 + *(long *)(lVar9 + 0xa8) + *(long *)(lVar9 + 0x68);
            UNLOCK();
            LOCK();
            plVar2 = (long *)(*(long *)(lVar9 + 8) + 0x120);
            *plVar2 = *plVar2 + (((*(long *)(lVar9 + 0x98) + *(long *)(lVar9 + 0x58)) -
                                 *(long *)(lVar9 + 0x50)) - *(long *)(lVar9 + 0x90));
            UNLOCK();
            LOCK();
            plVar2 = (long *)(*(long *)(lVar9 + 8) + 0x128);
            *plVar2 = *plVar2 + *(long *)(lVar9 + 0xb0) + *(long *)(lVar9 + 0x70);
            UNLOCK();
            *(undefined8 *)(lVar9 + 0x48) = 0;
            *(undefined8 *)(lVar9 + 0x58) = 0;
            *(undefined8 *)(lVar9 + 0x50) = 0;
            *(undefined8 *)(lVar9 + 0x68) = 0;
            *(undefined8 *)(lVar9 + 0x70) = 0;
            *(undefined8 *)(lVar9 + 0x60) = 0;
            *(undefined8 *)(lVar9 + 0x88) = 0;
            *(undefined8 *)(lVar9 + 0x98) = 0;
            *(undefined8 *)(lVar9 + 0x90) = 0;
            *(undefined8 *)(lVar9 + 0xa8) = 0;
            *(undefined8 *)(lVar9 + 0xb0) = 0;
            *(undefined8 *)(lVar9 + 0xa0) = 0;
            LOCK();
            *(undefined8 *)(lVar9 + 8) = 0;
            UNLOCK();
          }
          plVar14 = plVar14 + 1;
          embree::MutexSys::unlock();
          if (plVar5 == plVar14) goto LAB_00101e48;
        }
        plVar14 = plVar14 + 1;
      } while (plVar5 != plVar14);
LAB_00101e48:
      if (*(long *)(this + 0x130) != *(long *)(this + 0x138)) {
        *(long *)(this + 0x138) = *(long *)(this + 0x130);
      }
    }
    goto LAB_00101bfa;
  }
  FVar3 = this[0x108];
  if (param_2 == 0) {
    param_2 = param_1;
  }
  plVar14 = *(long **)this;
  if (*(int *)(this + 0x148) == 1) {
    if (param_1 < 0x1fffc0) {
LAB_00101a73:
      if (plVar14 != (long *)0x0) {
        (**(code **)(*plVar14 + 0x20))(plVar14,param_1 + 0x80,0);
      }
      if (FVar3 == (FastAllocator)0x0) {
        puVar7 = (undefined8 *)embree::alignedMalloc(param_1 + 0x40,0x40);
      }
      else {
        puVar7 = (undefined8 *)(**(code **)(*plVar14 + 0x38))(plVar14,param_1 + 0x40,0x40);
      }
      *puVar7 = 0;
      puVar7[1] = param_1;
      puVar7[2] = param_1;
      puVar7[3] = 0;
      puVar7[4] = 0x40;
      *(undefined4 *)(puVar7 + 5) = 0;
      *(undefined1 *)((long)puVar7 + 0x2c) = 0;
    }
    else {
      uVar8 = param_1 + 0x103f & 0xfffffffffffff000;
      uVar13 = param_2 + 0x103f & 0xfffffffffffff000;
      if (plVar14 != (long *)0x0) {
        (**(code **)(*plVar14 + 0x20))(plVar14,uVar8,0);
      }
      puVar7 = (undefined8 *)embree::os_malloc(uVar13,(bool *)&local_48);
      *puVar7 = 0;
      puVar7[1] = uVar8 - 0x40;
      puVar7[2] = uVar13 - 0x40;
      puVar7[3] = 0;
      puVar7[4] = 0;
      *(undefined4 *)(puVar7 + 5) = 1;
      *(bool *)((long)puVar7 + 0x2c) = local_48._0_1_;
    }
  }
  else {
    puVar7 = (undefined8 *)0x0;
    if (*(int *)(this + 0x148) == 0) {
      if (param_1 != 0x3fffc0) goto LAB_00101a73;
      if (plVar14 != (long *)0x0) {
        (**(code **)(*plVar14 + 0x20))(plVar14,0x400040,0);
      }
      if (FVar3 == (FastAllocator)0x0) {
        puVar7 = (undefined8 *)embree::alignedMalloc(0x400000,0x40);
      }
      else {
        puVar7 = (undefined8 *)(**(code **)(*plVar14 + 0x38))(plVar14,0x400000,0x40);
      }
      pvVar15 = (void *)((ulong)puVar7 & 0xffffffffffe00000);
      embree::os_advise(pvVar15,0x200000);
      embree::os_advise((void *)((long)pvVar15 + 0x200000),0x200000);
      embree::os_advise((void *)((long)pvVar15 + 0x400000),0x200000);
      *puVar7 = 0;
      puVar7[1] = 0x3fffc0;
      puVar7[2] = 0x3fffc0;
      puVar7[3] = 0;
      puVar7[4] = 0x40;
      *(undefined4 *)(puVar7 + 5) = 0;
      *(undefined1 *)((long)puVar7 + 0x2c) = 0;
    }
  }
  LOCK();
  *(undefined8 **)pFVar6 = puVar7;
  UNLOCK();
  *(ulong *)(this + 0x18) = param_3;
  this[0x10a] = (FastAllocator)0x0;
  uVar13 = (param_3 >> 3) + 0x7f & 0xffffffffffffff80;
  uVar8 = 0x1fffc0;
  if (uVar13 < 0x1fffc1) {
    uVar8 = uVar13;
  }
  if (uVar8 < 0x400) {
    uVar8 = 0x400;
  }
  uVar11 = 3;
  *(ulong *)(this + 0x28) = uVar8;
  *(ulong *)(this + 0x20) = uVar8;
  if (param_3 <= uVar8 << 5) {
    uVar11 = (ulong)(uVar8 << 4 < param_3);
  }
  *(ulong *)(this + 8) = uVar11;
  if (uVar8 << 6 < param_3) {
    *(undefined8 *)(this + 8) = 7;
    if (uVar8 << 7 < param_3) {
LAB_00101b66:
      *(undefined8 *)(this + 0x10) = 0x1040;
      *(ulong *)(this + 0x20) = uVar8 * 2;
    }
    else {
LAB_00101ebb:
      *(undefined8 *)(this + 0x10) = 0x1040;
    }
  }
  else {
    if (uVar8 << 7 < param_3) goto LAB_00101b66;
    if (0x1040 < uVar13) {
      uVar13 = 0x1040;
    }
    if (uVar13 < 0x400) {
      uVar13 = 0x400;
    }
    *(ulong *)(this + 0x10) = uVar13;
    if (param_3 == 0) {
      *(undefined8 *)(this + 0x28) = 0x1fffc0;
      goto LAB_00101ebb;
    }
  }
  LOCK();
  *(undefined8 *)(this + 0x110) = 0;
  UNLOCK();
  lVar9 = *(long *)this;
  if (*(long *)(lVar9 + 0x4e0) != 0) {
    *(long *)(this + 0x20) = *(long *)(lVar9 + 0x4e0);
  }
  if ((((0 < *(int *)(lVar9 + 0x4e8)) &&
       (*(undefined8 *)(this + 8) = 0, 1 < *(int *)(lVar9 + 0x4e8))) &&
      (*(undefined8 *)(this + 8) = 1, 3 < *(int *)(lVar9 + 0x4e8))) &&
     (*(undefined8 *)(this + 8) = 3, 7 < *(int *)(lVar9 + 0x4e8))) {
    *(undefined8 *)(this + 8) = 7;
  }
  if (*(long *)(lVar9 + 0x4f0) != 0) {
    *(long *)(this + 0x10) = *(long *)(lVar9 + 0x4f0);
  }
  if (*(int *)(lVar9 + 0x4f8) != -1) {
    this[0x10a] = (FastAllocator)(*(int *)(lVar9 + 0x4f8) != 0);
  }
LAB_00101bfa:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* embree::FastAllocator::Block::create(embree::Device*, bool, unsigned long, unsigned long,
   embree::FastAllocator::Block*, embree::FastAllocator::AllocationType) */

undefined8 *
embree::FastAllocator::Block::create
          (long *param_1,char param_2,ulong param_3,long param_4,undefined8 param_5,int param_6)

{
  undefined8 *puVar1;
  ulong uVar2;
  void *pvVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  bool local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_6 == 1) {
    if (0x1fffbf < param_3) {
      uVar2 = param_3 + 0x103f & 0xfffffffffffff000;
      if (param_1 != (long *)0x0) {
        (**(code **)(*param_1 + 0x20))(param_1,uVar2,0);
      }
      uVar4 = param_4 + 0x103fU & 0xfffffffffffff000;
      puVar1 = (undefined8 *)embree::os_malloc(uVar4,&local_31);
      *puVar1 = 0;
      puVar1[1] = uVar2 - 0x40;
      puVar1[2] = uVar4 - 0x40;
      puVar1[3] = param_5;
      puVar1[4] = 0;
      *(undefined4 *)(puVar1 + 5) = 1;
      *(bool *)((long)puVar1 + 0x2c) = local_31;
      goto LAB_001020e0;
    }
  }
  else {
    puVar1 = (undefined8 *)0x0;
    if (param_6 != 0) goto LAB_001020e0;
    if (param_3 == 0x3fffc0) {
      if (param_1 != (long *)0x0) {
        (**(code **)(*param_1 + 0x20))(param_1,0x400040,0);
      }
      if (param_2 == '\0') {
        puVar1 = (undefined8 *)embree::alignedMalloc(0x400000,0x40);
      }
      else {
        puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x38))(param_1,0x400000,0x40);
      }
      pvVar3 = (void *)((ulong)puVar1 & 0xffffffffffe00000);
      embree::os_advise(pvVar3,0x200000);
      embree::os_advise((void *)((long)pvVar3 + 0x200000),0x200000);
      embree::os_advise((void *)((long)pvVar3 + 0x400000),0x200000);
      *puVar1 = 0;
      puVar1[1] = 0x3fffc0;
      puVar1[2] = 0x3fffc0;
      puVar1[3] = param_5;
      puVar1[4] = 0x40;
      *(undefined4 *)(puVar1 + 5) = 0;
      *(undefined1 *)((long)puVar1 + 0x2c) = 0;
      goto LAB_001020e0;
    }
  }
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x20))(param_1,param_3 + 0x80,0);
  }
  if (param_2 == '\0') {
    puVar1 = (undefined8 *)embree::alignedMalloc(param_3 + 0x40,0x40);
  }
  else {
    puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x38))(param_1,param_3 + 0x40,0x40);
  }
  *puVar1 = 0;
  puVar1[1] = param_3;
  puVar1[2] = param_3;
  puVar1[3] = param_5;
  puVar1[4] = 0x40;
  *(undefined4 *)(puVar1 + 5) = 0;
  *(undefined1 *)((long)puVar1 + 0x2c) = 0;
LAB_001020e0:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar1;
}



/* embree::FastAllocator::malloc(unsigned long&, unsigned long, bool) */

void __thiscall
embree::FastAllocator::malloc(FastAllocator *this,ulong *param_1,ulong param_2,bool param_3)

{
  FastAllocator *pFVar1;
  long lVar2;
  FastAllocator *pFVar3;
  FastAllocator FVar4;
  ulong *puVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  void *pvVar14;
  long in_FS_OFFSET;
  bool local_41;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar7 = param_2 - 1;
  if (param_3) {
LAB_001022c8:
    uVar9 = embree::TaskScheduler::threadID();
    lVar2 = (uVar9 & *(ulong *)(this + 8)) * 8;
    pFVar3 = this + lVar2 + 0x78;
    puVar5 = *(ulong **)pFVar3;
    if (puVar5 != (ulong *)0x0) {
      puVar10 = *(undefined8 **)this;
      if (puVar10 != (undefined8 *)0x0) {
        puVar10 = puVar10 + 0xa9;
      }
      uVar8 = -param_2 & lVar7 + *param_1;
      uVar13 = puVar5[2];
      LOCK();
      uVar9 = *puVar5;
      *puVar5 = *puVar5 + uVar8;
      UNLOCK();
      if (uVar9 <= puVar5[2]) {
        uVar12 = puVar5[2] - uVar9;
        if (uVar8 < puVar5[2] - uVar9) {
          uVar12 = uVar8;
        }
        *param_1 = uVar12;
        if ((puVar5[1] < uVar12 + uVar9) && (puVar10 != (undefined8 *)0x0)) {
          uVar8 = puVar5[1];
          if (puVar5[1] <= uVar9) {
            uVar8 = uVar9;
          }
          (**(code **)*puVar10)(puVar10,(uVar12 + uVar9) - uVar8,1,uVar13);
        }
        if ((long)puVar5 + uVar9 + 0x40 != 0) goto LAB_00102610;
      }
      if (this[0x109] == (FastAllocator)0x0) goto LAB_00102b6a;
    }
    if (0x1fffc0 < *param_1) goto LAB_00102b6a;
    if (*(long *)(this + 0x100) == 0) {
      embree::MutexSys::lock();
      if (puVar5 == *(ulong **)pFVar3) {
        uVar13 = lVar7 + *param_1 & -param_2;
        uVar9 = *(ulong *)(this + 0x28);
        if (*(ulong *)(this + 0x20) < *(ulong *)(this + 0x28)) {
          uVar9 = *(ulong *)(this + 0x20);
        }
        if (uVar13 < uVar9) {
          uVar13 = uVar9;
        }
        uVar11 = *(undefined8 *)(this + lVar2 + 0xb8);
        FVar4 = this[0x108];
        plVar6 = *(long **)this;
        if (*(int *)(this + 0x148) == 1) {
          if (uVar13 < 0x1fffc0) {
LAB_00102436:
            if (plVar6 != (long *)0x0) {
              (**(code **)(*plVar6 + 0x20))(plVar6,uVar13 + 0x80,0);
            }
            if (FVar4 == (FastAllocator)0x0) {
              puVar10 = (undefined8 *)embree::alignedMalloc(uVar13 + 0x40,0x40);
            }
            else {
              puVar10 = (undefined8 *)(**(code **)(*plVar6 + 0x38))(plVar6,uVar13 + 0x40,0x40);
            }
            *puVar10 = 0;
            puVar10[1] = uVar13;
            puVar10[2] = uVar13;
LAB_0010248c:
            puVar10[4] = 0x40;
            *(undefined4 *)(puVar10 + 5) = 0;
            puVar10[3] = uVar11;
            *(undefined1 *)((long)puVar10 + 0x2c) = 0;
          }
          else {
            uVar9 = uVar13 + 0x103f & 0xfffffffffffff000;
            if (plVar6 != (long *)0x0) {
              (**(code **)(*plVar6 + 0x20))(plVar6,uVar9,0);
            }
            puVar10 = (undefined8 *)embree::os_malloc(uVar9,&local_41);
            *puVar10 = 0;
            puVar10[1] = uVar9 - 0x40;
            puVar10[2] = uVar9 - 0x40;
            puVar10[3] = uVar11;
            puVar10[4] = 0;
            *(undefined4 *)(puVar10 + 5) = 1;
            *(bool *)((long)puVar10 + 0x2c) = local_41;
          }
        }
        else {
          puVar10 = (undefined8 *)0x0;
          if (*(int *)(this + 0x148) == 0) {
            if (uVar13 != 0x3fffc0) goto LAB_00102436;
            if (plVar6 != (long *)0x0) {
              (**(code **)(*plVar6 + 0x20))(plVar6,0x400040);
            }
            if (FVar4 == (FastAllocator)0x0) {
              puVar10 = (undefined8 *)embree::alignedMalloc(0x400000,0x40);
            }
            else {
              puVar10 = (undefined8 *)(**(code **)(*plVar6 + 0x38))(plVar6,0x400000,0x40);
            }
            pvVar14 = (void *)((ulong)puVar10 & 0xffffffffffe00000);
            embree::os_advise(pvVar14,0x200000);
            embree::os_advise((void *)((long)pvVar14 + 0x200000),0x200000);
            embree::os_advise((void *)((long)pvVar14 + 0x400000),0x200000);
            *puVar10 = 0;
            puVar10[1] = 0x3fffc0;
            puVar10[2] = 0x3fffc0;
            goto LAB_0010248c;
          }
        }
        LOCK();
        *(undefined8 **)pFVar3 = puVar10;
        UNLOCK();
        LOCK();
        *(undefined8 **)(this + lVar2 + 0xb8) = puVar10;
        UNLOCK();
      }
      embree::MutexSys::unlock();
    }
    else {
      embree::MutexSys::lock();
      if (puVar5 == *(ulong **)pFVar3) {
        if (*(long *)(this + 0x100) == 0) {
          LOCK();
          pFVar1 = this + 0x110;
          lVar2 = *(long *)pFVar1;
          *(long *)pFVar1 = *(long *)pFVar1 + 1;
          UNLOCK();
          uVar9 = 0x10;
          if (lVar2 + 1U < 0x11) {
            uVar9 = lVar2 + 1U;
          }
          uVar9 = *(long *)(this + 0x20) << ((byte)uVar9 & 0x3f);
          if (*(ulong *)(this + 0x28) < uVar9) {
            uVar9 = *(ulong *)(this + 0x28);
          }
          uVar11 = Block::create(*(undefined8 *)this,this[0x108],uVar9,uVar9,
                                 *(undefined8 *)(this + 0xf8),*(undefined4 *)(this + 0x148));
          LOCK();
          *(undefined8 *)pFVar3 = uVar11;
          UNLOCK();
          LOCK();
          *(undefined8 *)(this + 0xf8) = uVar11;
          UNLOCK();
        }
        else {
          uVar11 = *(undefined8 *)(*(long *)(this + 0x100) + 0x18);
          *(undefined8 *)(*(long *)(this + 0x100) + 0x18) = *(undefined8 *)(this + 0xf8);
          LOCK();
          *(undefined8 *)(this + 0xf8) = *(undefined8 *)(this + 0x100);
          UNLOCK();
          LOCK();
          *(undefined8 *)pFVar3 = *(undefined8 *)(this + 0x100);
          UNLOCK();
          LOCK();
          *(undefined8 *)(this + 0x100) = uVar11;
          UNLOCK();
        }
      }
      embree::MutexSys::unlock();
    }
    goto LAB_001022c8;
  }
  do {
    uVar9 = embree::TaskScheduler::threadID();
    lVar2 = (uVar9 & *(ulong *)(this + 8)) * 8;
    pFVar3 = this + lVar2 + 0x78;
    puVar5 = *(ulong **)pFVar3;
    if (puVar5 != (ulong *)0x0) {
      puVar10 = *(undefined8 **)this;
      if (puVar10 != (undefined8 *)0x0) {
        puVar10 = puVar10 + 0xa9;
      }
      uVar9 = -param_2 & lVar7 + *param_1;
      if (*puVar5 + uVar9 <= puVar5[2]) {
        LOCK();
        uVar13 = *puVar5;
        *puVar5 = *puVar5 + uVar9;
        UNLOCK();
        if ((uVar9 + uVar13 <= puVar5[2]) && (uVar13 <= puVar5[2])) {
          uVar8 = puVar5[2] - uVar13;
          if (uVar9 < puVar5[2] - uVar13) {
            uVar8 = uVar9;
          }
          *param_1 = uVar8;
          if (puVar10 != (undefined8 *)0x0) {
            if (uVar8 + uVar13 <= puVar5[1]) {
              if ((long)puVar5 + uVar13 + 0x40 == 0) goto LAB_001024ed;
              goto LAB_00102610;
            }
            uVar9 = puVar5[1];
            if (puVar5[1] < uVar13) {
              uVar9 = uVar13;
            }
            (**(code **)*puVar10)(puVar10,(uVar8 + uVar13) - uVar9,1);
          }
          if ((long)puVar5 + uVar13 + 0x40 != 0) {
LAB_00102610:
            if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
              return;
            }
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
        }
      }
LAB_001024ed:
      if (this[0x109] == (FastAllocator)0x0) {
LAB_00102b6a:
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
    if (0x1fffc0 < *param_1) goto LAB_00102b6a;
    if (*(long *)(this + 0x100) == 0) {
      embree::MutexSys::lock();
      if (puVar5 == *(ulong **)pFVar3) {
        uVar13 = lVar7 + *param_1 & -param_2;
        uVar9 = *(ulong *)(this + 0x28);
        if (*(ulong *)(this + 0x20) < *(ulong *)(this + 0x28)) {
          uVar9 = *(ulong *)(this + 0x20);
        }
        if (uVar13 < uVar9) {
          uVar13 = uVar9;
        }
        uVar11 = *(undefined8 *)(this + lVar2 + 0xb8);
        FVar4 = this[0x108];
        plVar6 = *(long **)this;
        if (*(int *)(this + 0x148) == 1) {
          if (uVar13 < 0x1fffc0) {
LAB_00102840:
            if (plVar6 != (long *)0x0) {
              (**(code **)(*plVar6 + 0x20))(plVar6,uVar13 + 0x80,0);
            }
            if (FVar4 == (FastAllocator)0x0) {
              puVar10 = (undefined8 *)embree::alignedMalloc(uVar13 + 0x40,0x40);
            }
            else {
              puVar10 = (undefined8 *)(**(code **)(*plVar6 + 0x38))(plVar6,uVar13 + 0x40,0x40);
            }
            *puVar10 = 0;
            puVar10[1] = uVar13;
            puVar10[2] = uVar13;
LAB_00102896:
            puVar10[4] = 0x40;
            *(undefined4 *)(puVar10 + 5) = 0;
            puVar10[3] = uVar11;
            *(undefined1 *)((long)puVar10 + 0x2c) = 0;
          }
          else {
            uVar9 = uVar13 + 0x103f & 0xfffffffffffff000;
            if (plVar6 != (long *)0x0) {
              (**(code **)(*plVar6 + 0x20))(plVar6,uVar9,0);
            }
            puVar10 = (undefined8 *)embree::os_malloc(uVar9,&local_41);
            *puVar10 = 0;
            puVar10[1] = uVar9 - 0x40;
            puVar10[2] = uVar9 - 0x40;
            puVar10[3] = uVar11;
            puVar10[4] = 0;
            *(undefined4 *)(puVar10 + 5) = 1;
            *(bool *)((long)puVar10 + 0x2c) = local_41;
          }
        }
        else {
          puVar10 = (undefined8 *)0x0;
          if (*(int *)(this + 0x148) == 0) {
            if (uVar13 != 0x3fffc0) goto LAB_00102840;
            if (plVar6 != (long *)0x0) {
              (**(code **)(*plVar6 + 0x20))(plVar6,0x400040,0);
            }
            if (FVar4 == (FastAllocator)0x0) {
              puVar10 = (undefined8 *)embree::alignedMalloc(0x400000,0x40);
            }
            else {
              puVar10 = (undefined8 *)(**(code **)(*plVar6 + 0x38))(plVar6,0x400000,0x40);
            }
            pvVar14 = (void *)((ulong)puVar10 & 0xffffffffffe00000);
            embree::os_advise(pvVar14,0x200000);
            embree::os_advise((void *)((long)pvVar14 + 0x200000),0x200000);
            embree::os_advise((void *)((long)pvVar14 + 0x400000),0x200000);
            *puVar10 = 0;
            puVar10[1] = 0x3fffc0;
            puVar10[2] = 0x3fffc0;
            goto LAB_00102896;
          }
        }
        LOCK();
        *(undefined8 **)pFVar3 = puVar10;
        UNLOCK();
        LOCK();
        *(undefined8 **)(this + lVar2 + 0xb8) = puVar10;
        UNLOCK();
      }
      embree::MutexSys::unlock();
    }
    else {
      embree::MutexSys::lock();
      if (puVar5 == *(ulong **)pFVar3) {
        if (*(long *)(this + 0x100) == 0) {
          LOCK();
          pFVar1 = this + 0x110;
          lVar2 = *(long *)pFVar1;
          *(long *)pFVar1 = *(long *)pFVar1 + 1;
          UNLOCK();
          uVar9 = 0x10;
          if (lVar2 + 1U < 0x11) {
            uVar9 = lVar2 + 1U;
          }
          uVar9 = *(long *)(this + 0x20) << ((byte)uVar9 & 0x3f);
          if (*(ulong *)(this + 0x28) < uVar9) {
            uVar9 = *(ulong *)(this + 0x28);
          }
          uVar11 = Block::create(*(undefined8 *)this,this[0x108],uVar9,uVar9,
                                 *(undefined8 *)(this + 0xf8),*(undefined4 *)(this + 0x148));
          LOCK();
          *(undefined8 *)pFVar3 = uVar11;
          UNLOCK();
          LOCK();
          *(undefined8 *)(this + 0xf8) = uVar11;
          UNLOCK();
        }
        else {
          uVar11 = *(undefined8 *)(*(long *)(this + 0x100) + 0x18);
          *(undefined8 *)(*(long *)(this + 0x100) + 0x18) = *(undefined8 *)(this + 0xf8);
          LOCK();
          *(undefined8 *)(this + 0xf8) = *(undefined8 *)(this + 0x100);
          UNLOCK();
          LOCK();
          *(undefined8 *)pFVar3 = *(undefined8 *)(this + 0x100);
          UNLOCK();
          LOCK();
          *(undefined8 *)(this + 0x100) = uVar11;
          UNLOCK();
        }
      }
      embree::MutexSys::unlock();
    }
  } while( true );
}



/* WARNING: Control flow encountered bad instruction data */
/* void std::vector<embree::FastAllocator::ThreadLocal2*,
   std::allocator<embree::FastAllocator::ThreadLocal2*>
   >::_M_realloc_insert<embree::FastAllocator::ThreadLocal2*
   const&>(__gnu_cxx::__normal_iterator<embree::FastAllocator::ThreadLocal2**,
   std::vector<embree::FastAllocator::ThreadLocal2*,
   std::allocator<embree::FastAllocator::ThreadLocal2*> > >, embree::FastAllocator::ThreadLocal2*
   const&) */

void __thiscall
std::
vector<embree::FastAllocator::ThreadLocal2*,std::allocator<embree::FastAllocator::ThreadLocal2*>>::
_M_realloc_insert<embree::FastAllocator::ThreadLocal2*const&>
          (vector<embree::FastAllocator::ThreadLocal2*,std::allocator<embree::FastAllocator::ThreadLocal2*>>
           *this,void *param_2,undefined8 *param_3)

{
  void *__src;
  ulong uVar1;
  void *pvVar2;
  void *__dest;
  size_t __n;
  long lVar3;
  ulong uVar4;
  size_t __n_00;
  
  pvVar2 = *(void **)(this + 8);
  __src = *(void **)this;
  uVar1 = (long)pvVar2 - (long)__src >> 3;
  if (uVar1 == 0xfffffffffffffff) {
    std::__throw_length_error("vector::_M_realloc_insert");
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  __n = (long)param_2 - (long)__src;
  if (__src == pvVar2) {
    if (0xfffffffffffffffe < uVar1) goto LAB_00102c70;
    uVar4 = 0xfffffffffffffff;
    if (uVar1 + 1 < 0x1000000000000000) {
      uVar4 = uVar1 + 1;
    }
    uVar4 = uVar4 << 3;
  }
  else {
    uVar4 = uVar1 * 2;
    if (uVar4 < uVar1) {
LAB_00102c70:
      uVar4 = 0x7ffffffffffffff8;
    }
    else {
      if (uVar4 == 0) {
        lVar3 = 0;
        __dest = (void *)0x0;
        goto LAB_00102bf9;
      }
      if (0xfffffffffffffff < uVar4) {
        uVar4 = 0xfffffffffffffff;
      }
      uVar4 = uVar4 * 8;
    }
  }
  __dest = operator_new(uVar4);
  lVar3 = uVar4 + (long)__dest;
LAB_00102bf9:
  *(undefined8 *)((long)__dest + __n) = *param_3;
  if (0 < (long)__n) {
    memmove(__dest,__src,__n);
  }
  __n_00 = (long)pvVar2 - (long)param_2;
  pvVar2 = (void *)((long)__dest + __n + 8);
  if (0 < (long)__n_00) {
    pvVar2 = memmove(pvVar2,param_2,__n_00);
  }
  if (__src != (void *)0x0) {
    operator_delete(__src,*(long *)(this + 0x10) - (long)__src);
  }
  *(void **)this = __dest;
  *(size_t *)(this + 8) = __n_00 + (long)pvVar2;
  *(long *)(this + 0x10) = lVar3;
  return;
}



/* embree::sse2::CreateMortonLeaf<4, embree::TriangleMi<4>
   >::TEMPNAMEPLACEHOLDERVALUE(embree::range<unsigned int> const&,
   embree::FastAllocator::CachedAllocator const&) [clone .isra.0] */

range * embree::sse2::CreateMortonLeaf<4,embree::TriangleMi<4>>::operator()
                  (range *param_1,CachedAllocator *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined4 uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  uint uVar9;
  FastAllocator *in_RCX;
  undefined8 *puVar10;
  uint uVar11;
  uint *in_RDX;
  ulong uVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  uint *puVar19;
  long *in_R8;
  long in_FS_OFFSET;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  ulong local_c0;
  undefined1 local_b8 [12];
  int iStack_ac;
  undefined1 local_98 [8];
  undefined8 uStack_90;
  undefined1 local_88 [8];
  undefined8 uStack_80;
  undefined1 local_78 [8];
  undefined8 uStack_70;
  undefined4 local_68 [2];
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  uint auStack_50 [4];
  long local_40;
  
  uVar14 = (ulong)*in_RDX;
  uVar18 = (ulong)(in_RDX[1] - *in_RDX);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar15 = *in_R8;
  local_c0 = 0x50;
  if (in_RCX != *(FastAllocator **)(lVar15 + 8)) {
    embree::MutexSys::lock();
    if (*(long *)(lVar15 + 8) != 0) {
      LOCK();
      plVar1 = (long *)(*(long *)(lVar15 + 8) + 0x118);
      *plVar1 = *plVar1 + *(long *)(lVar15 + 0xa8) + *(long *)(lVar15 + 0x68);
      UNLOCK();
      LOCK();
      plVar1 = (long *)(*(long *)(lVar15 + 8) + 0x120);
      *plVar1 = *plVar1 + (((*(long *)(lVar15 + 0x98) + *(long *)(lVar15 + 0x58)) -
                           *(long *)(lVar15 + 0x50)) - *(long *)(lVar15 + 0x90));
      UNLOCK();
      LOCK();
      plVar1 = (long *)(*(long *)(lVar15 + 8) + 0x128);
      *plVar1 = *plVar1 + *(long *)(lVar15 + 0xb0) + *(long *)(lVar15 + 0x70);
      UNLOCK();
    }
    *(undefined8 *)(lVar15 + 0x48) = 0;
    *(undefined8 *)(lVar15 + 0x58) = 0;
    *(undefined8 *)(lVar15 + 0x50) = 0;
    *(undefined8 *)(lVar15 + 0x68) = 0;
    *(undefined8 *)(lVar15 + 0x70) = 0;
    *(undefined8 *)(lVar15 + 0x60) = 0;
    if (in_RCX == (FastAllocator *)0x0) {
      *(undefined8 *)(lVar15 + 0x88) = 0;
      uVar13 = 0;
      *(undefined8 *)(lVar15 + 0x98) = 0;
      *(undefined8 *)(lVar15 + 0x90) = 0;
      *(undefined8 *)(lVar15 + 0xa8) = 0;
      *(undefined8 *)(lVar15 + 0xb0) = 0;
    }
    else {
      uVar13 = *(undefined8 *)(in_RCX + 0x10);
      *(undefined8 *)(lVar15 + 0x88) = 0;
      *(undefined8 *)(lVar15 + 0x98) = 0;
      *(undefined8 *)(lVar15 + 0x60) = uVar13;
      *(undefined8 *)(lVar15 + 0x90) = 0;
      *(undefined8 *)(lVar15 + 0xa8) = 0;
      *(undefined8 *)(lVar15 + 0xb0) = 0;
      *(undefined8 *)(lVar15 + 0xa0) = 0;
      uVar13 = *(undefined8 *)(in_RCX + 0x10);
    }
    *(undefined8 *)(lVar15 + 0xa0) = uVar13;
    LOCK();
    *(FastAllocator **)(lVar15 + 8) = in_RCX;
    UNLOCK();
    local_b8._0_8_ = lVar15;
    embree::MutexSys::lock();
    plVar1 = *(long **)(in_RCX + 0x138);
    if (plVar1 == *(long **)(in_RCX + 0x140)) {
      std::
      vector<embree::FastAllocator::ThreadLocal2*,std::allocator<embree::FastAllocator::ThreadLocal2*>>
      ::_M_realloc_insert<embree::FastAllocator::ThreadLocal2*const&>
                ((vector<embree::FastAllocator::ThreadLocal2*,std::allocator<embree::FastAllocator::ThreadLocal2*>>
                  *)(in_RCX + 0x130),plVar1,local_b8);
    }
    else {
      *plVar1 = lVar15;
      *(long *)(in_RCX + 0x138) = *(long *)(in_RCX + 0x138) + 8;
    }
    embree::MutexSys::unlock();
    embree::MutexSys::unlock();
  }
  uVar17 = local_c0;
  lVar15 = in_R8[2];
  in_R8[5] = in_R8[5] + local_c0;
  uVar12 = (ulong)(-(int)lVar15 & 0xf);
  uVar7 = local_c0 + lVar15 + uVar12;
  in_R8[2] = uVar7;
  if ((ulong)in_R8[3] < uVar7) {
    in_R8[2] = lVar15;
    if ((ulong)in_R8[4] < local_c0 * 4) {
      puVar8 = (undefined8 *)FastAllocator::malloc(in_RCX,&local_c0,0x40,false);
    }
    else {
      local_b8._0_8_ = in_R8[4];
      puVar8 = (undefined8 *)FastAllocator::malloc(in_RCX,(ulong *)local_b8,0x40,true);
      in_R8[1] = (long)puVar8;
      in_R8[6] = (in_R8[3] + in_R8[6]) - in_R8[2];
      in_R8[2] = uVar17;
      in_R8[3] = local_b8._0_8_;
      if ((ulong)local_b8._0_8_ < uVar17) {
        in_R8[2] = 0;
        local_b8._0_8_ = in_R8[4];
        puVar8 = (undefined8 *)FastAllocator::malloc(in_RCX,(ulong *)local_b8,0x40,false);
        in_R8[1] = (long)puVar8;
        in_R8[6] = (in_R8[3] + in_R8[6]) - in_R8[2];
        in_R8[2] = uVar17;
        in_R8[3] = local_b8._0_8_;
        if ((ulong)local_b8._0_8_ < uVar17) {
          in_R8[2] = 0;
          puVar8 = (undefined8 *)0x0;
        }
      }
    }
  }
  else {
    in_R8[6] = in_R8[6] + uVar12;
    puVar8 = (undefined8 *)((uVar7 - local_c0) + in_R8[1]);
  }
  _local_98 = (undefined1  [16])0x0;
  _local_88 = (undefined1  [16])0x0;
  _local_78 = (undefined1  [16])0x0;
  lVar15 = *(long *)param_2;
  local_68[1] = 0xffffffff;
  uStack_60._0_4_ = 0xffffffff;
  uStack_60._4_4_ = 0xffffffff;
  local_58 = 0xffffffff;
  uStack_54 = 0xffffffff;
  auStack_50[0] = 0xffffffff;
  auStack_50[1] = 0xffffffff;
  if (uVar18 == 0) {
    local_68[0] = 0xffffffff;
    local_68[1] = 0xffffffff;
    uStack_60._0_4_ = 0xffffffff;
    local_b8._4_4_ = _LC2;
    local_b8._0_4_ = _LC2;
    local_b8._8_4_ = _LC2;
    auVar22._4_4_ = _LC4;
    auVar22._0_4_ = _LC4;
    auVar22._8_4_ = _LC4;
    auVar22._12_4_ = _LC4;
    uStack_60._4_4_ = 0xffffffff;
    uVar6 = uStack_60._4_4_;
  }
  else {
    lVar2 = *(long *)(param_2 + 8);
    lVar3 = *(long *)(lVar15 + 0x58);
    lVar4 = *(long *)(lVar15 + 0x60);
    local_68[0] = *(undefined4 *)(param_2 + 0x10);
    lVar5 = *(long *)(lVar15 + 0x88);
    uVar17 = *(ulong *)(lVar15 + 0x90);
    uVar11 = (uint)(uVar17 >> 2) & 0x3fffffff;
    if (((uVar18 != 1) && (local_68[1] = local_68[0], uVar18 != 2)) &&
       (uStack_60._0_4_ = local_68[0], uVar18 != 3)) {
      uStack_60._4_4_ = local_68[0];
    }
    auVar24._4_4_ = _LC2;
    auVar24._0_4_ = _LC2;
    auVar24._8_4_ = _LC2;
    auVar24._12_4_ = _LC2;
    puVar19 = (uint *)((ulong)*(uint *)(lVar2 + 4 + uVar14 * 8) * lVar4 + lVar3);
    local_98._0_4_ = *puVar19 * uVar11;
    auVar22 = *(undefined1 (*) [16])(lVar5 + *puVar19 * uVar17);
    local_88._0_4_ = puVar19[1] * uVar11;
    stack0xffffffffffffff6c = SUB1612((undefined1  [16])0x0,4);
    auVar20 = minps(auVar24,auVar22);
    auVar24 = *(undefined1 (*) [16])(lVar5 + puVar19[1] * uVar17);
    stack0xffffffffffffff7c = SUB1612((undefined1  [16])0x0,4);
    local_78._0_4_ = puVar19[2] * uVar11;
    auVar21 = *(undefined1 (*) [16])(lVar5 + puVar19[2] * uVar17);
    local_58 = *(undefined4 *)(lVar2 + 4 + uVar14 * 8);
    stack0xffffffffffffff8c = SUB1612((undefined1  [16])0x0,4);
    auVar23 = minps(auVar24,auVar21);
    auVar20 = minps(auVar20,auVar23);
    local_b8 = auVar20._0_12_;
    auVar24 = maxps(auVar24,auVar21);
    auVar21._4_4_ = _LC4;
    auVar21._0_4_ = _LC4;
    auVar21._8_4_ = _LC4;
    auVar21._12_4_ = _LC4;
    auVar22 = maxps(auVar21,auVar22);
    auVar22 = maxps(auVar22,auVar24);
    if (uVar18 != 1) {
      puVar19 = (uint *)((ulong)*(uint *)(lVar2 + 0xc + uVar14 * 8) * lVar4 + lVar3);
      auVar24 = *(undefined1 (*) [16])(lVar5 + *puVar19 * uVar17);
      local_98._4_4_ = *puVar19 * uVar11;
      uStack_90 = 0;
      auVar21 = minps(auVar20,auVar24);
      auVar20 = maxps(auVar22,auVar24);
      auVar22 = *(undefined1 (*) [16])(lVar5 + puVar19[1] * uVar17);
      local_88._4_4_ = puVar19[1] * uVar11;
      uStack_80 = 0;
      auVar24 = *(undefined1 (*) [16])(lVar5 + puVar19[2] * uVar17);
      uStack_54 = *(undefined4 *)(lVar2 + 0xc + uVar14 * 8);
      local_78._4_4_ = puVar19[2] * uVar11;
      uStack_70 = 0;
      auVar23 = minps(auVar22,auVar24);
      auVar22 = maxps(auVar22,auVar24);
      auVar24 = minps(auVar21,auVar23);
      local_b8 = auVar24._0_12_;
      auVar22 = maxps(auVar20,auVar22);
      if (uVar18 != 2) {
        puVar19 = (uint *)((ulong)*(uint *)(lVar2 + 0x14 + uVar14 * 8) * lVar4 + lVar3);
        auVar21 = *(undefined1 (*) [16])(lVar5 + *puVar19 * uVar17);
        uStack_90._0_4_ = *puVar19 * uVar11;
        uStack_90._4_4_ = 0;
        auVar20 = minps(auVar24,auVar21);
        auVar21 = maxps(auVar22,auVar21);
        auVar22 = *(undefined1 (*) [16])(lVar5 + puVar19[1] * uVar17);
        uStack_80._0_4_ = puVar19[1] * uVar11;
        uStack_80._4_4_ = 0;
        auVar24 = *(undefined1 (*) [16])(lVar5 + puVar19[2] * uVar17);
        auStack_50[0] = *(uint *)(lVar2 + 0x14 + uVar14 * 8);
        uStack_70._0_4_ = puVar19[2] * uVar11;
        uStack_70._4_4_ = 0;
        auVar23 = minps(auVar22,auVar24);
        auVar22 = maxps(auVar22,auVar24);
        auVar24 = minps(auVar20,auVar23);
        local_b8 = auVar24._0_12_;
        auVar22 = maxps(auVar21,auVar22);
        uVar6 = local_68[0];
        if (uVar18 == 3) goto LAB_001032a3;
        auStack_50[1] = *(uint *)(lVar2 + 0x1c + uVar14 * 8);
        puVar19 = (uint *)(lVar3 + (ulong)auStack_50[1] * lVar4);
        auVar21 = *(undefined1 (*) [16])(lVar5 + *puVar19 * uVar17);
        uStack_90._4_4_ = *puVar19 * uVar11;
        auVar20 = minps(auVar24,auVar21);
        auVar21 = maxps(auVar22,auVar21);
        auVar22 = *(undefined1 (*) [16])(lVar5 + puVar19[1] * uVar17);
        uStack_80._4_4_ = puVar19[1] * uVar11;
        auVar24 = *(undefined1 (*) [16])(lVar5 + uVar17 * puVar19[2]);
        uStack_70._4_4_ = puVar19[2] * uVar11;
        auVar23 = minps(auVar22,auVar24);
        auVar24 = maxps(auVar22,auVar24);
        auVar22 = minps(auVar20,auVar23);
        local_b8 = auVar22._0_12_;
        auVar22 = maxps(auVar21,auVar24);
        if (uVar18 == 4) goto LAB_001031b1;
      }
    }
    local_68[uVar18] = local_68[0];
    local_68[uVar18 + 1] = local_68[0];
    uVar6 = uStack_60._4_4_;
    if (uVar18 != 2) {
      uStack_60._4_4_ = local_68[0];
      uVar6 = uStack_60._4_4_;
    }
  }
LAB_001032a3:
  uStack_60._4_4_ = uVar6;
  lVar15 = uVar18 * 4;
  uVar14 = (4 - uVar18) * 4;
  puVar10 = (undefined8 *)(&local_58 + uVar18);
  uVar11 = (uint)uVar14;
  if (uVar11 < 8) {
    if ((uVar14 & 4) == 0) {
      if (uVar11 != 0) {
        *(undefined1 *)puVar10 = 0xff;
      }
    }
    else {
      *(undefined4 *)puVar10 = 0xffffffff;
      *(undefined4 *)((long)&uStack_60 + (uVar14 & 0xffffffff) + lVar15 + 4) = 0xffffffff;
    }
LAB_001032dc:
    puVar10 = (undefined8 *)(local_98 + lVar15);
    if (uVar11 < 8) goto LAB_001032ed;
LAB_001033ef:
    *puVar10 = 0;
    *(undefined8 *)((long)puVar10 + ((uVar14 & 0xffffffff) - 8)) = 0;
    uVar9 = ((int)puVar10 - (int)((ulong)(puVar10 + 1) & 0xfffffffffffffff8)) + uVar11 & 0xfffffff8;
    if (uVar9 < 8) goto LAB_001032fe;
    uVar18 = 0;
    do {
      uVar16 = (int)uVar18 + 8;
      *(undefined8 *)(((ulong)(puVar10 + 1) & 0xfffffffffffffff8) + uVar18) = 0;
      uVar18 = (ulong)uVar16;
    } while (uVar16 < uVar9);
    puVar10 = (undefined8 *)(local_88 + lVar15);
    if (uVar11 < 8) goto LAB_0010330f;
LAB_0010343e:
    *puVar10 = 0;
    *(undefined8 *)((long)puVar10 + ((uVar14 & 0xffffffff) - 8)) = 0;
    uVar9 = ((int)puVar10 - (int)((ulong)(puVar10 + 1) & 0xfffffffffffffff8)) + uVar11 & 0xfffffff8;
    if (7 < uVar9) {
      uVar18 = 0;
      do {
        uVar16 = (int)uVar18 + 8;
        *(undefined8 *)(((ulong)(puVar10 + 1) & 0xfffffffffffffff8) + uVar18) = 0;
        uVar18 = (ulong)uVar16;
      } while (uVar16 < uVar9);
    }
  }
  else {
    *puVar10 = 0xffffffffffffffff;
    *(undefined8 *)((long)&uStack_60 + (uVar14 & 0xffffffff) + lVar15) = 0xffffffffffffffff;
    uVar9 = ((int)puVar10 - (int)((ulong)(auStack_50 + uVar18) & 0xfffffffffffffff8)) + uVar11 &
            0xfffffff8;
    if (uVar9 < 8) goto LAB_001032dc;
    uVar17 = 0;
    do {
      uVar16 = (int)uVar17 + 8;
      *(undefined8 *)(((ulong)(auStack_50 + uVar18) & 0xfffffffffffffff8) + uVar17) =
           0xffffffffffffffff;
      uVar17 = (ulong)uVar16;
    } while (uVar16 < uVar9);
    puVar10 = (undefined8 *)(local_98 + lVar15);
    if (7 < uVar11) goto LAB_001033ef;
LAB_001032ed:
    if ((uVar14 & 4) == 0) {
      if (uVar11 != 0) {
        *(undefined1 *)puVar10 = 0;
      }
    }
    else {
      *(undefined4 *)puVar10 = 0;
      *(undefined4 *)((long)puVar10 + ((uVar14 & 0xffffffff) - 4)) = 0;
    }
LAB_001032fe:
    puVar10 = (undefined8 *)(local_88 + lVar15);
    if (7 < uVar11) goto LAB_0010343e;
LAB_0010330f:
    if ((uVar14 & 4) == 0) {
      if (uVar11 != 0) {
        *(undefined1 *)puVar10 = 0;
      }
    }
    else {
      *(undefined4 *)puVar10 = 0;
      *(undefined4 *)((long)puVar10 + ((uVar14 & 0xffffffff) - 4)) = 0;
    }
  }
  puVar10 = (undefined8 *)(local_78 + lVar15);
  if (uVar11 < 8) {
    if ((uVar14 & 4) == 0) {
      if (uVar11 != 0) {
        *(undefined1 *)puVar10 = 0;
      }
    }
    else {
      *(undefined4 *)puVar10 = 0;
      *(undefined4 *)(local_78 + (uVar14 & 0xffffffff) + lVar15 + -4) = 0;
    }
  }
  else {
    *puVar10 = 0;
    *(undefined8 *)(local_78 + (uVar14 & 0xffffffff) + lVar15 + -8) = 0;
    uVar18 = (long)&uStack_70 + lVar15 & 0xfffffffffffffff8;
    uVar11 = uVar11 + ((int)puVar10 - (int)uVar18) & 0xfffffff8;
    if (7 < uVar11) {
      uVar14 = 0;
      do {
        uVar9 = (int)uVar14 + 8;
        *(undefined8 *)(uVar18 + uVar14) = 0;
        uVar14 = (ulong)uVar9;
      } while (uVar9 < uVar11);
    }
  }
LAB_001031b1:
  *puVar8 = local_98;
  puVar8[1] = uStack_90;
  puVar8[2] = local_88;
  puVar8[3] = uStack_80;
  puVar8[4] = local_78;
  puVar8[5] = uStack_70;
  puVar8[6] = CONCAT44(local_68[1],local_68[0]);
  puVar8[7] = CONCAT44(uStack_60._4_4_,(undefined4)uStack_60);
  puVar8[8] = CONCAT44(uStack_54,local_58);
  puVar8[9] = CONCAT44(auStack_50[1],auStack_50[0]);
  iStack_ac = in_RDX[1] - *in_RDX;
  auVar24 = _local_b8;
  stack0xffffffffffffff50 = auVar24._8_8_;
  *(undefined1 (*) [16])(param_1 + 0x20) = auVar22;
  *(ulong *)param_1 = (ulong)puVar8 | 9;
  *(undefined8 *)(param_1 + 0x10) = local_b8._0_8_;
  *(undefined8 *)(param_1 + 0x18) = stack0xffffffffffffff50;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
  _local_b8 = auVar24;
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* embree::sse2::CreateMortonLeaf<4, embree::TriangleMv<4>
   >::TEMPNAMEPLACEHOLDERVALUE(embree::range<unsigned int> const&,
   embree::FastAllocator::CachedAllocator const&) [clone .isra.0] */

range * embree::sse2::CreateMortonLeaf<4,embree::TriangleMv<4>>::operator()
                  (range *param_1,CachedAllocator *param_2)

{
  long *plVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined4 *puVar12;
  FastAllocator *in_RCX;
  uint *in_RDX;
  ulong uVar13;
  undefined8 uVar14;
  uint *puVar15;
  long *in_R8;
  ulong uVar16;
  int iVar17;
  long in_FS_OFFSET;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  ulong local_120;
  undefined1 local_118 [12];
  int iStack_10c;
  undefined1 local_f8 [8];
  undefined8 uStack_f0;
  undefined1 local_e8 [8];
  undefined8 uStack_e0;
  undefined1 local_d8 [8];
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined1 local_c8 [8];
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [8];
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined1 local_a8 [8];
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 local_98 [8];
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 local_88 [8];
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 local_78 [8];
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 local_68 [8];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58 [8];
  undefined8 uStack_50;
  long local_40;
  
  lVar5 = *in_R8;
  uVar3 = *in_RDX;
  uVar16 = (ulong)uVar3;
  uVar4 = in_RDX[1];
  iVar17 = uVar4 - uVar3;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_120 = 0xb0;
  if (in_RCX != *(FastAllocator **)(lVar5 + 8)) {
    embree::MutexSys::lock();
    if (*(long *)(lVar5 + 8) != 0) {
      LOCK();
      plVar1 = (long *)(*(long *)(lVar5 + 8) + 0x118);
      *plVar1 = *plVar1 + *(long *)(lVar5 + 0xa8) + *(long *)(lVar5 + 0x68);
      UNLOCK();
      LOCK();
      plVar1 = (long *)(*(long *)(lVar5 + 8) + 0x120);
      *plVar1 = *plVar1 + (((*(long *)(lVar5 + 0x98) + *(long *)(lVar5 + 0x58)) -
                           *(long *)(lVar5 + 0x50)) - *(long *)(lVar5 + 0x90));
      UNLOCK();
      LOCK();
      plVar1 = (long *)(*(long *)(lVar5 + 8) + 0x128);
      *plVar1 = *plVar1 + *(long *)(lVar5 + 0xb0) + *(long *)(lVar5 + 0x70);
      UNLOCK();
    }
    *(undefined8 *)(lVar5 + 0x48) = 0;
    *(undefined8 *)(lVar5 + 0x58) = 0;
    *(undefined8 *)(lVar5 + 0x50) = 0;
    *(undefined8 *)(lVar5 + 0x68) = 0;
    *(undefined8 *)(lVar5 + 0x70) = 0;
    *(undefined8 *)(lVar5 + 0x60) = 0;
    if (in_RCX == (FastAllocator *)0x0) {
      *(undefined8 *)(lVar5 + 0x88) = 0;
      uVar14 = 0;
      *(undefined8 *)(lVar5 + 0x98) = 0;
      *(undefined8 *)(lVar5 + 0x90) = 0;
      *(undefined8 *)(lVar5 + 0xa8) = 0;
      *(undefined8 *)(lVar5 + 0xb0) = 0;
    }
    else {
      uVar14 = *(undefined8 *)(in_RCX + 0x10);
      *(undefined8 *)(lVar5 + 0x88) = 0;
      *(undefined8 *)(lVar5 + 0x98) = 0;
      *(undefined8 *)(lVar5 + 0x60) = uVar14;
      *(undefined8 *)(lVar5 + 0x90) = 0;
      *(undefined8 *)(lVar5 + 0xa8) = 0;
      *(undefined8 *)(lVar5 + 0xb0) = 0;
      *(undefined8 *)(lVar5 + 0xa0) = 0;
      uVar14 = *(undefined8 *)(in_RCX + 0x10);
    }
    *(undefined8 *)(lVar5 + 0xa0) = uVar14;
    LOCK();
    *(FastAllocator **)(lVar5 + 8) = in_RCX;
    UNLOCK();
    local_118._0_8_ = lVar5;
    embree::MutexSys::lock();
    plVar1 = *(long **)(in_RCX + 0x138);
    if (plVar1 == *(long **)(in_RCX + 0x140)) {
      std::
      vector<embree::FastAllocator::ThreadLocal2*,std::allocator<embree::FastAllocator::ThreadLocal2*>>
      ::_M_realloc_insert<embree::FastAllocator::ThreadLocal2*const&>
                ((vector<embree::FastAllocator::ThreadLocal2*,std::allocator<embree::FastAllocator::ThreadLocal2*>>
                  *)(in_RCX + 0x130),plVar1,local_118);
    }
    else {
      *plVar1 = lVar5;
      *(long *)(in_RCX + 0x138) = *(long *)(in_RCX + 0x138) + 8;
    }
    embree::MutexSys::unlock();
    embree::MutexSys::unlock();
  }
  uVar10 = local_120;
  lVar5 = in_R8[2];
  in_R8[5] = in_R8[5] + local_120;
  uVar13 = (ulong)(-(int)lVar5 & 0xf);
  uVar11 = local_120 + lVar5 + uVar13;
  in_R8[2] = uVar11;
  if ((ulong)in_R8[3] < uVar11) {
    in_R8[2] = lVar5;
    if ((ulong)in_R8[4] < local_120 * 4) {
      puVar12 = (undefined4 *)FastAllocator::malloc(in_RCX,&local_120,0x40,false);
    }
    else {
      local_118._0_8_ = in_R8[4];
      puVar12 = (undefined4 *)FastAllocator::malloc(in_RCX,(ulong *)local_118,0x40,true);
      in_R8[1] = (long)puVar12;
      in_R8[6] = (in_R8[3] + in_R8[6]) - in_R8[2];
      in_R8[2] = uVar10;
      in_R8[3] = local_118._0_8_;
      if ((ulong)local_118._0_8_ < uVar10) {
        in_R8[2] = 0;
        local_118._0_8_ = in_R8[4];
        puVar12 = (undefined4 *)FastAllocator::malloc(in_RCX,(ulong *)local_118,0x40,false);
        in_R8[1] = (long)puVar12;
        in_R8[6] = (in_R8[3] + in_R8[6]) - in_R8[2];
        in_R8[2] = uVar10;
        in_R8[3] = local_118._0_8_;
        if ((ulong)local_118._0_8_ < uVar10) {
          in_R8[2] = 0;
          puVar12 = (undefined4 *)0x0;
        }
      }
    }
  }
  else {
    in_R8[6] = in_R8[6] + uVar13;
    puVar12 = (undefined4 *)((uVar11 - local_120) + in_R8[1]);
  }
  uStack_e0._0_4_ = 0xffffffff;
  local_e8 = (undefined1  [8])0xffffffffffffffff;
  uStack_e0._4_4_ = 0xffffffff;
  _local_d8 = (undefined1  [16])0x0;
  _local_c8 = (undefined1  [16])0x0;
  _local_b8 = (undefined1  [16])0x0;
  _local_a8 = (undefined1  [16])0x0;
  _local_98 = (undefined1  [16])0x0;
  _local_88 = (undefined1  [16])0x0;
  _local_78 = (undefined1  [16])0x0;
  _local_68 = (undefined1  [16])0x0;
  _local_58 = (undefined1  [16])0x0;
  if (uVar4 == uVar3) {
    local_58 = (undefined1  [8])0x0;
    uStack_50 = 0;
    local_78._0_4_ = 0;
    local_78._4_4_ = 0;
    uStack_70 = 0;
    auVar25._0_12_ = ZEXT812(0);
    uStack_6c = 0;
    auVar25._12_4_ = 0;
    local_88._0_4_ = 0;
    local_a8._4_4_ = 0;
    auVar18._4_4_ = _LC4;
    auVar18._0_4_ = _LC4;
    auVar18._8_4_ = _LC4;
    auVar18._12_4_ = _LC4;
    local_118._4_4_ = _LC2;
    local_118._0_4_ = _LC2;
    local_118._8_4_ = _LC2;
    local_88._4_4_ = local_78._4_4_;
    uStack_80 = uStack_70;
    uStack_7c = uStack_6c;
    local_98._0_4_ = local_88._0_4_;
    local_98._4_4_ = local_78._4_4_;
    uStack_90 = uStack_70;
    uStack_8c = uStack_6c;
    local_a8._0_4_ = local_88._0_4_;
    uStack_a0 = uStack_70;
    uStack_9c = uStack_6c;
    local_b8._0_4_ = local_88._0_4_;
    local_b8._4_4_ = local_a8._4_4_;
    uStack_b0 = uStack_70;
    uStack_ac = uStack_6c;
    local_c8._0_4_ = local_88._0_4_;
    local_c8._4_4_ = local_a8._4_4_;
    uStack_c0 = uStack_70;
    uStack_bc = uStack_6c;
    local_d8._0_4_ = local_88._0_4_;
    local_d8._4_4_ = local_a8._4_4_;
    uStack_d0 = uStack_70;
    uStack_cc = uStack_6c;
    _local_f8 = _local_e8;
  }
  else {
    lVar5 = *(long *)param_2;
    lVar6 = *(long *)(param_2 + 8);
    local_f8._0_4_ = *(undefined4 *)(param_2 + 0x10);
    lVar7 = *(long *)(lVar5 + 0x58);
    lVar8 = *(long *)(lVar5 + 0x60);
    lVar9 = *(long *)(lVar5 + 0x88);
    stack0xffffffffffffff0c = SUB1612(_local_e8,4);
    unique0x100008e8 = stack0xffffffffffffff0c;
    auVar25 = _local_f8;
    lVar5 = *(long *)(lVar5 + 0x90);
    uStack_f0 = SUB168(_local_e8,8);
    uVar14 = uStack_f0;
    if (((iVar17 != 1) && (local_f8._4_4_ = local_f8._0_4_, auVar25 = _local_f8, iVar17 != 2)) &&
       (uStack_f0._0_4_ = local_f8._0_4_, uStack_f0._4_4_ = 0xffffffff, auVar25 = _local_f8,
       iVar17 != 3)) {
      uStack_f0._4_4_ = local_f8._0_4_;
      auVar25 = _local_f8;
    }
    _local_f8 = auVar25;
    local_e8._0_4_ = *(uint *)(lVar6 + 4 + uVar16 * 8);
    auVar19._4_4_ = _LC2;
    auVar19._0_4_ = _LC2;
    auVar19._8_4_ = _LC2;
    auVar19._12_4_ = _LC2;
    puVar15 = (uint *)((ulong)(uint)local_e8._0_4_ * lVar8 + lVar7);
    auVar25 = *(undefined1 (*) [16])(lVar9 + (ulong)*puVar15 * lVar5);
    auVar20 = minps(auVar19,auVar25);
    stack0xffffffffffffff2c = SUB1612((undefined1  [16])0x0,4);
    local_d8._0_4_ = auVar25._0_4_;
    auVar19 = *(undefined1 (*) [16])(lVar9 + (ulong)puVar15[1] * lVar5);
    auVar2 = *(undefined1 (*) [16])(lVar9 + (ulong)puVar15[2] * lVar5);
    stack0xffffffffffffff5c = SUB1612((undefined1  [16])0x0,4);
    local_a8._0_4_ = auVar19._0_4_;
    stack0xffffffffffffff8c = SUB1612((undefined1  [16])0x0,4);
    local_78._0_4_ = auVar2._0_4_;
    auVar18 = minps(auVar19,auVar2);
    auVar23 = maxps(auVar19,auVar2);
    auVar21 = minps(auVar20,auVar18);
    local_118 = auVar21._0_12_;
    auVar20._4_4_ = _LC4;
    auVar20._0_4_ = _LC4;
    auVar20._8_4_ = _LC4;
    auVar20._12_4_ = _LC4;
    auVar18 = maxps(auVar20,auVar25);
    auVar18 = maxps(auVar18,auVar23);
    stack0xffffffffffffff3c = SUB1612((undefined1  [16])0x0,4);
    local_c8._0_4_ = auVar25._4_4_;
    stack0xffffffffffffff4c = SUB1612((undefined1  [16])0x0,4);
    local_b8._0_4_ = auVar25._8_4_;
    stack0xffffffffffffff6c = SUB1612((undefined1  [16])0x0,4);
    local_98._0_4_ = auVar19._4_4_;
    stack0xffffffffffffff7c = SUB1612((undefined1  [16])0x0,4);
    local_88._0_4_ = auVar19._8_4_;
    stack0xffffffffffffff9c = SUB1612((undefined1  [16])0x0,4);
    local_68._0_4_ = auVar2._4_4_;
    stack0xffffffffffffffac = SUB1612((undefined1  [16])0x0,4);
    local_58._0_4_ = auVar2._8_4_;
    if (iVar17 != 1) {
      local_e8._4_4_ = *(uint *)(lVar6 + 0xc + uVar16 * 8);
      uStack_e0 = uVar14;
      puVar15 = (uint *)((ulong)(uint)local_e8._4_4_ * lVar8 + lVar7);
      auVar20 = *(undefined1 (*) [16])(lVar9 + (ulong)*puVar15 * lVar5);
      auVar22 = minps(auVar21,auVar20);
      local_d8._4_4_ = auVar20._0_4_;
      _uStack_d0 = 0;
      auVar18 = maxps(auVar18,auVar20);
      auVar21 = *(undefined1 (*) [16])(lVar9 + (ulong)puVar15[1] * lVar5);
      auVar23 = *(undefined1 (*) [16])(lVar9 + (ulong)puVar15[2] * lVar5);
      local_a8._4_4_ = auVar21._0_4_;
      _uStack_a0 = 0;
      local_78._4_4_ = auVar23._0_4_;
      _uStack_70 = 0;
      auVar24 = minps(auVar21,auVar23);
      auVar22 = minps(auVar22,auVar24);
      local_118 = auVar22._0_12_;
      auVar24 = maxps(auVar21,auVar23);
      auVar18 = maxps(auVar18,auVar24);
      local_c8._4_4_ = auVar20._4_4_;
      _uStack_c0 = 0;
      local_b8._4_4_ = auVar20._8_4_;
      _uStack_b0 = 0;
      local_98._4_4_ = auVar21._4_4_;
      _uStack_90 = 0;
      local_88._4_4_ = auVar21._8_4_;
      _uStack_80 = 0;
      local_68._4_4_ = auVar23._4_4_;
      _uStack_60 = 0;
      local_58._4_4_ = auVar23._8_4_;
      uStack_50 = 0;
      if (iVar17 != 2) {
        uStack_e0._0_4_ = *(uint *)(lVar6 + 0x14 + uVar16 * 8);
        uStack_e0._4_4_ = 0xffffffff;
        puVar15 = (uint *)((ulong)(uint)uStack_e0 * lVar8 + lVar7);
        auVar25 = *(undefined1 (*) [16])(lVar9 + (ulong)*puVar15 * lVar5);
        auVar20 = minps(auVar22,auVar25);
        uStack_d0 = auVar25._0_4_;
        uStack_cc = 0;
        auVar18 = maxps(auVar18,auVar25);
        auVar19 = *(undefined1 (*) [16])(lVar9 + (ulong)puVar15[1] * lVar5);
        auVar2 = *(undefined1 (*) [16])(lVar9 + (ulong)puVar15[2] * lVar5);
        uStack_a0 = auVar19._0_4_;
        uStack_9c = 0;
        uStack_70 = auVar2._0_4_;
        uStack_6c = 0;
        auVar21 = minps(auVar19,auVar2);
        auVar20 = minps(auVar20,auVar21);
        local_118 = auVar20._0_12_;
        auVar21 = maxps(auVar19,auVar2);
        auVar18 = maxps(auVar18,auVar21);
        uStack_c0 = auVar25._4_4_;
        uStack_bc = 0;
        uStack_b0 = auVar25._8_4_;
        uStack_ac = 0;
        uStack_90 = auVar19._4_4_;
        uStack_8c = 0;
        uStack_80 = auVar19._8_4_;
        uStack_7c = 0;
        uStack_60 = auVar2._4_4_;
        uStack_5c = 0;
        uStack_50._0_4_ = auVar2._8_4_;
        uStack_50._4_4_ = 0;
        if (iVar17 != 3) {
          uStack_e0._4_4_ = *(uint *)(lVar6 + 0x1c + uVar16 * 8);
          puVar15 = (uint *)(lVar7 + (ulong)uStack_e0._4_4_ * lVar8);
          auVar25 = *(undefined1 (*) [16])(lVar9 + (ulong)*puVar15 * lVar5);
          auVar20 = minps(auVar20,auVar25);
          uStack_cc = auVar25._0_4_;
          auVar18 = maxps(auVar18,auVar25);
          auVar19 = *(undefined1 (*) [16])(lVar9 + (ulong)puVar15[1] * lVar5);
          uStack_9c = auVar19._0_4_;
          auVar2 = *(undefined1 (*) [16])(lVar9 + lVar5 * (ulong)puVar15[2]);
          uStack_6c = auVar2._0_4_;
          auVar21 = minps(auVar19,auVar2);
          auVar20 = minps(auVar20,auVar21);
          local_118 = auVar20._0_12_;
          auVar20 = maxps(auVar19,auVar2);
          auVar18 = maxps(auVar18,auVar20);
          uStack_bc = auVar25._4_4_;
          uStack_ac = auVar25._8_4_;
          uStack_8c = auVar19._4_4_;
          uStack_7c = auVar19._8_4_;
          uStack_5c = auVar2._4_4_;
          uStack_50._4_4_ = auVar2._8_4_;
        }
      }
    }
    auVar25 = _local_68;
  }
  puVar12[0x18] = local_78._0_4_;
  puVar12[0x19] = local_78._4_4_;
  puVar12[0x1a] = uStack_70;
  puVar12[0x1b] = uStack_6c;
  *puVar12 = local_d8._0_4_;
  puVar12[1] = local_d8._4_4_;
  puVar12[2] = uStack_d0;
  puVar12[3] = uStack_cc;
  puVar12[4] = local_c8._0_4_;
  puVar12[5] = local_c8._4_4_;
  puVar12[6] = uStack_c0;
  puVar12[7] = uStack_bc;
  puVar12[8] = local_b8._0_4_;
  puVar12[9] = local_b8._4_4_;
  puVar12[10] = uStack_b0;
  puVar12[0xb] = uStack_ac;
  puVar12[0xc] = local_a8._0_4_;
  puVar12[0xd] = local_a8._4_4_;
  puVar12[0xe] = uStack_a0;
  puVar12[0xf] = uStack_9c;
  puVar12[0x10] = local_98._0_4_;
  puVar12[0x11] = local_98._4_4_;
  puVar12[0x12] = uStack_90;
  puVar12[0x13] = uStack_8c;
  puVar12[0x14] = local_88._0_4_;
  puVar12[0x15] = local_88._4_4_;
  puVar12[0x16] = uStack_80;
  puVar12[0x17] = uStack_7c;
  *(undefined1 (*) [16])(puVar12 + 0x1c) = auVar25;
  *(undefined1 (*) [8])(puVar12 + 0x20) = local_58;
  *(undefined8 *)(puVar12 + 0x22) = uStack_50;
  *(undefined1 (*) [16])(puVar12 + 0x24) = _local_f8;
  *(undefined1 (*) [16])(puVar12 + 0x28) = _local_e8;
  uVar3 = in_RDX[1];
  uVar4 = *in_RDX;
  *(ulong *)param_1 = (ulong)puVar12 | 9;
  iStack_10c = uVar3 - uVar4;
  auVar25 = _local_118;
  *(undefined1 (*) [16])(param_1 + 0x20) = auVar18;
  *(undefined4 *)(param_1 + 0x10) = local_118._0_4_;
  *(undefined4 *)(param_1 + 0x14) = local_118._4_4_;
  *(undefined4 *)(param_1 + 0x18) = local_118._8_4_;
  *(uint *)(param_1 + 0x1c) = uVar3 - uVar4;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
  _local_118 = auVar25;
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* embree::sse2::CreateMortonLeaf<4, embree::TriangleM<4>
   >::TEMPNAMEPLACEHOLDERVALUE(embree::range<unsigned int> const&,
   embree::FastAllocator::CachedAllocator const&) [clone .isra.0] */

range * embree::sse2::CreateMortonLeaf<4,embree::TriangleM<4>>::operator()
                  (range *param_1,CachedAllocator *param_2)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  float *pfVar13;
  FastAllocator *in_RCX;
  uint *in_RDX;
  ulong uVar14;
  undefined8 uVar15;
  uint *puVar16;
  long *in_R8;
  ulong uVar17;
  int iVar18;
  long in_FS_OFFSET;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar32;
  float fVar35;
  float fVar36;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  ulong local_120;
  undefined1 local_118 [12];
  int iStack_10c;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  undefined1 local_d8 [4];
  undefined1 auStack_d4 [8];
  float fStack_cc;
  undefined1 local_c8 [4];
  undefined1 auStack_c4 [8];
  float fStack_bc;
  undefined1 local_b8 [4];
  undefined1 auStack_b4 [8];
  float fStack_ac;
  undefined1 local_a8 [4];
  undefined1 auStack_a4 [8];
  float fStack_9c;
  undefined1 local_98 [4];
  undefined1 auStack_94 [8];
  float fStack_8c;
  undefined1 local_88 [4];
  undefined1 auStack_84 [8];
  float fStack_7c;
  undefined1 local_78 [4];
  undefined1 auStack_74 [8];
  float fStack_6c;
  undefined1 local_68 [4];
  undefined1 auStack_64 [8];
  float fStack_5c;
  undefined1 local_58 [4];
  undefined1 auStack_54 [8];
  float fStack_4c;
  long local_40;
  
  lVar6 = *in_R8;
  uVar4 = *in_RDX;
  uVar17 = (ulong)uVar4;
  uVar5 = in_RDX[1];
  iVar18 = uVar5 - uVar4;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_120 = 0xb0;
  if (in_RCX != *(FastAllocator **)(lVar6 + 8)) {
    embree::MutexSys::lock();
    if (*(long *)(lVar6 + 8) != 0) {
      LOCK();
      plVar1 = (long *)(*(long *)(lVar6 + 8) + 0x118);
      *plVar1 = *plVar1 + *(long *)(lVar6 + 0xa8) + *(long *)(lVar6 + 0x68);
      UNLOCK();
      LOCK();
      plVar1 = (long *)(*(long *)(lVar6 + 8) + 0x120);
      *plVar1 = *plVar1 + (((*(long *)(lVar6 + 0x98) + *(long *)(lVar6 + 0x58)) -
                           *(long *)(lVar6 + 0x50)) - *(long *)(lVar6 + 0x90));
      UNLOCK();
      LOCK();
      plVar1 = (long *)(*(long *)(lVar6 + 8) + 0x128);
      *plVar1 = *plVar1 + *(long *)(lVar6 + 0xb0) + *(long *)(lVar6 + 0x70);
      UNLOCK();
    }
    *(undefined8 *)(lVar6 + 0x48) = 0;
    *(undefined8 *)(lVar6 + 0x58) = 0;
    *(undefined8 *)(lVar6 + 0x50) = 0;
    *(undefined8 *)(lVar6 + 0x68) = 0;
    *(undefined8 *)(lVar6 + 0x70) = 0;
    *(undefined8 *)(lVar6 + 0x60) = 0;
    if (in_RCX == (FastAllocator *)0x0) {
      *(undefined8 *)(lVar6 + 0x88) = 0;
      uVar15 = 0;
      *(undefined8 *)(lVar6 + 0x98) = 0;
      *(undefined8 *)(lVar6 + 0x90) = 0;
      *(undefined8 *)(lVar6 + 0xa8) = 0;
      *(undefined8 *)(lVar6 + 0xb0) = 0;
    }
    else {
      uVar15 = *(undefined8 *)(in_RCX + 0x10);
      *(undefined8 *)(lVar6 + 0x88) = 0;
      *(undefined8 *)(lVar6 + 0x98) = 0;
      *(undefined8 *)(lVar6 + 0x60) = uVar15;
      *(undefined8 *)(lVar6 + 0x90) = 0;
      *(undefined8 *)(lVar6 + 0xa8) = 0;
      *(undefined8 *)(lVar6 + 0xb0) = 0;
      *(undefined8 *)(lVar6 + 0xa0) = 0;
      uVar15 = *(undefined8 *)(in_RCX + 0x10);
    }
    *(undefined8 *)(lVar6 + 0xa0) = uVar15;
    LOCK();
    *(FastAllocator **)(lVar6 + 8) = in_RCX;
    UNLOCK();
    local_118._0_8_ = lVar6;
    embree::MutexSys::lock();
    plVar1 = *(long **)(in_RCX + 0x138);
    if (plVar1 == *(long **)(in_RCX + 0x140)) {
      std::
      vector<embree::FastAllocator::ThreadLocal2*,std::allocator<embree::FastAllocator::ThreadLocal2*>>
      ::_M_realloc_insert<embree::FastAllocator::ThreadLocal2*const&>
                ((vector<embree::FastAllocator::ThreadLocal2*,std::allocator<embree::FastAllocator::ThreadLocal2*>>
                  *)(in_RCX + 0x130),plVar1,local_118);
    }
    else {
      *plVar1 = lVar6;
      *(long *)(in_RCX + 0x138) = *(long *)(in_RCX + 0x138) + 8;
    }
    embree::MutexSys::unlock();
    embree::MutexSys::unlock();
  }
  uVar11 = local_120;
  lVar6 = in_R8[2];
  in_R8[5] = in_R8[5] + local_120;
  uVar14 = (ulong)(-(int)lVar6 & 0xf);
  uVar12 = local_120 + lVar6 + uVar14;
  in_R8[2] = uVar12;
  if ((ulong)in_R8[3] < uVar12) {
    in_R8[2] = lVar6;
    if ((ulong)in_R8[4] < local_120 * 4) {
      pfVar13 = (float *)FastAllocator::malloc(in_RCX,&local_120,0x40,false);
    }
    else {
      local_118._0_8_ = in_R8[4];
      pfVar13 = (float *)FastAllocator::malloc(in_RCX,(ulong *)local_118,0x40,true);
      in_R8[1] = (long)pfVar13;
      in_R8[6] = (in_R8[3] + in_R8[6]) - in_R8[2];
      in_R8[2] = uVar11;
      in_R8[3] = local_118._0_8_;
      if ((ulong)local_118._0_8_ < uVar11) {
        in_R8[2] = 0;
        local_118._0_8_ = in_R8[4];
        pfVar13 = (float *)FastAllocator::malloc(in_RCX,(ulong *)local_118,0x40,false);
        in_R8[1] = (long)pfVar13;
        in_R8[6] = (in_R8[3] + in_R8[6]) - in_R8[2];
        in_R8[2] = uVar11;
        in_R8[3] = local_118._0_8_;
        if ((ulong)local_118._0_8_ < uVar11) {
          in_R8[2] = 0;
          pfVar13 = (float *)0x0;
        }
      }
    }
  }
  else {
    in_R8[6] = in_R8[6] + uVar14;
    pfVar13 = (float *)((uVar12 - local_120) + in_R8[1]);
  }
  local_f8 = -NAN;
  fStack_f4 = -NAN;
  fStack_f0 = -NAN;
  fStack_ec = -NAN;
  local_e8 = -NAN;
  fStack_e4 = -NAN;
  fStack_e0 = -NAN;
  fStack_dc = -NAN;
  _local_d8 = (undefined1  [16])0x0;
  _local_c8 = (undefined1  [16])0x0;
  _local_b8 = (undefined1  [16])0x0;
  _local_a8 = (undefined1  [16])0x0;
  _local_98 = (undefined1  [16])0x0;
  _local_88 = (undefined1  [16])0x0;
  _local_78 = (undefined1  [16])0x0;
  _local_68 = (undefined1  [16])0x0;
  _local_58 = (undefined1  [16])0x0;
  if (uVar5 == uVar4) {
    fVar32 = 0.0;
    fVar35 = 0.0;
    fVar36 = 0.0;
    fVar37 = 0.0;
    fVar23 = 0.0;
    fVar24 = 0.0;
    fVar25 = 0.0;
    fVar26 = 0.0;
    fVar19 = 0.0;
    fVar20 = 0.0;
    fVar21 = 0.0;
    fVar22 = 0.0;
    local_b8 = (undefined1  [4])0x0;
    auStack_b4._0_4_ = 0.0;
    auVar27._4_4_ = _LC4;
    auVar27._0_4_ = _LC4;
    auVar27._8_4_ = _LC4;
    auVar27._12_4_ = _LC4;
    local_118._4_4_ = _LC2;
    local_118._0_4_ = _LC2;
    local_118._8_4_ = _LC2;
    auStack_b4._4_4_ = fVar25;
    fStack_ac = fVar26;
    local_c8 = local_b8;
    auStack_c4._0_4_ = auStack_b4._0_4_;
    auStack_c4._4_4_ = fVar25;
    fStack_bc = fVar26;
    local_d8 = local_b8;
    auStack_d4._0_4_ = auStack_b4._0_4_;
    auStack_d4._4_4_ = fVar25;
    fStack_cc = fVar26;
    fVar38 = (float)local_b8;
    fVar39 = (float)auStack_b4._0_4_;
    fVar40 = fVar25;
    fVar41 = fVar26;
    fVar42 = (float)local_b8;
    fVar43 = fVar24;
    fVar44 = fVar25;
    fVar45 = fVar26;
    fVar46 = (float)local_b8;
    fVar47 = fVar24;
    fVar48 = fVar25;
    fVar49 = fVar26;
  }
  else {
    lVar6 = *(long *)param_2;
    lVar7 = *(long *)(param_2 + 8);
    local_f8 = *(float *)(param_2 + 0x10);
    lVar8 = *(long *)(lVar6 + 0x58);
    lVar9 = *(long *)(lVar6 + 0x60);
    lVar10 = *(long *)(lVar6 + 0x88);
    lVar6 = *(long *)(lVar6 + 0x90);
    if (((iVar18 != 1) && (fStack_f4 = local_f8, iVar18 != 2)) &&
       (fStack_f0 = local_f8, iVar18 != 3)) {
      fStack_ec = local_f8;
    }
    local_e8 = *(float *)(lVar7 + 4 + uVar17 * 8);
    auVar28._4_4_ = _LC2;
    auVar28._0_4_ = _LC2;
    auVar28._8_4_ = _LC2;
    auVar28._12_4_ = _LC2;
    puVar16 = (uint *)((ulong)(uint)local_e8 * lVar9 + lVar8);
    auVar2 = *(undefined1 (*) [16])(lVar10 + (ulong)*puVar16 * lVar6);
    auVar29 = minps(auVar28,auVar2);
    _auStack_d4 = SUB1612((undefined1  [16])0x0,4);
    local_d8 = (undefined1  [4])auVar2._0_4_;
    auVar28 = *(undefined1 (*) [16])(lVar10 + (ulong)puVar16[1] * lVar6);
    auVar3 = *(undefined1 (*) [16])(lVar10 + (ulong)puVar16[2] * lVar6);
    _auStack_a4 = SUB1612((undefined1  [16])0x0,4);
    local_a8 = (undefined1  [4])auVar28._0_4_;
    _auStack_74 = SUB1612((undefined1  [16])0x0,4);
    local_78 = (undefined1  [4])auVar3._0_4_;
    auVar27 = minps(auVar28,auVar3);
    auVar33 = maxps(auVar28,auVar3);
    auVar30 = minps(auVar29,auVar27);
    local_118 = auVar30._0_12_;
    auVar29._4_4_ = _LC4;
    auVar29._0_4_ = _LC4;
    auVar29._8_4_ = _LC4;
    auVar29._12_4_ = _LC4;
    auVar27 = maxps(auVar29,auVar2);
    auVar27 = maxps(auVar27,auVar33);
    _auStack_c4 = SUB1612((undefined1  [16])0x0,4);
    local_c8 = (undefined1  [4])auVar2._4_4_;
    _auStack_b4 = SUB1612((undefined1  [16])0x0,4);
    local_b8 = (undefined1  [4])auVar2._8_4_;
    _auStack_94 = SUB1612((undefined1  [16])0x0,4);
    local_98 = (undefined1  [4])auVar28._4_4_;
    _auStack_84 = SUB1612((undefined1  [16])0x0,4);
    local_88 = (undefined1  [4])auVar28._8_4_;
    _auStack_64 = SUB1612((undefined1  [16])0x0,4);
    local_68 = (undefined1  [4])auVar3._4_4_;
    _auStack_54 = SUB1612((undefined1  [16])0x0,4);
    local_58 = (undefined1  [4])auVar3._8_4_;
    if (iVar18 != 1) {
      fStack_e4 = *(float *)(lVar7 + 0xc + uVar17 * 8);
      puVar16 = (uint *)((ulong)(uint)fStack_e4 * lVar9 + lVar8);
      auVar29 = *(undefined1 (*) [16])(lVar10 + (ulong)*puVar16 * lVar6);
      auVar31 = minps(auVar30,auVar29);
      _local_d8 = CONCAT44(auVar29._0_4_,auVar2._0_4_);
      stack0xffffffffffffff30 = 0;
      auVar27 = maxps(auVar27,auVar29);
      auVar30 = *(undefined1 (*) [16])(lVar10 + (ulong)puVar16[1] * lVar6);
      auVar33 = *(undefined1 (*) [16])(lVar10 + (ulong)puVar16[2] * lVar6);
      _local_a8 = CONCAT44(auVar30._0_4_,auVar28._0_4_);
      stack0xffffffffffffff60 = 0;
      _local_78 = CONCAT44(auVar33._0_4_,auVar3._0_4_);
      stack0xffffffffffffff90 = 0;
      auVar34 = minps(auVar30,auVar33);
      auVar31 = minps(auVar31,auVar34);
      local_118 = auVar31._0_12_;
      auVar34 = maxps(auVar30,auVar33);
      auVar27 = maxps(auVar27,auVar34);
      _local_c8 = CONCAT44(auVar29._4_4_,auVar2._4_4_);
      stack0xffffffffffffff40 = 0;
      _local_b8 = CONCAT44(auVar29._8_4_,auVar2._8_4_);
      stack0xffffffffffffff50 = 0;
      _local_98 = CONCAT44(auVar30._4_4_,auVar28._4_4_);
      stack0xffffffffffffff70 = 0;
      _local_88 = CONCAT44(auVar30._8_4_,auVar28._8_4_);
      stack0xffffffffffffff80 = 0;
      _local_68 = CONCAT44(auVar33._4_4_,auVar3._4_4_);
      stack0xffffffffffffffa0 = 0;
      _local_58 = CONCAT44(auVar33._8_4_,auVar3._8_4_);
      stack0xffffffffffffffb0 = 0;
      if (iVar18 != 2) {
        fStack_e0 = *(float *)(lVar7 + 0x14 + uVar17 * 8);
        puVar16 = (uint *)((ulong)(uint)fStack_e0 * lVar9 + lVar8);
        auVar2 = *(undefined1 (*) [16])(lVar10 + (ulong)*puVar16 * lVar6);
        auVar29 = minps(auVar31,auVar2);
        auStack_d4._4_4_ = auVar2._0_4_;
        fStack_cc = 0.0;
        auVar27 = maxps(auVar27,auVar2);
        auVar28 = *(undefined1 (*) [16])(lVar10 + (ulong)puVar16[1] * lVar6);
        auVar3 = *(undefined1 (*) [16])(lVar10 + (ulong)puVar16[2] * lVar6);
        auStack_a4._4_4_ = auVar28._0_4_;
        fStack_9c = 0.0;
        auStack_74._4_4_ = auVar3._0_4_;
        fStack_6c = 0.0;
        auVar30 = minps(auVar28,auVar3);
        auVar29 = minps(auVar29,auVar30);
        local_118 = auVar29._0_12_;
        auVar30 = maxps(auVar28,auVar3);
        auVar27 = maxps(auVar27,auVar30);
        auStack_c4._4_4_ = auVar2._4_4_;
        fStack_bc = 0.0;
        auStack_b4._4_4_ = auVar2._8_4_;
        fStack_ac = 0.0;
        auStack_94._4_4_ = auVar28._4_4_;
        fStack_8c = 0.0;
        auStack_84._4_4_ = auVar28._8_4_;
        fStack_7c = 0.0;
        auStack_64._4_4_ = auVar3._4_4_;
        fStack_5c = 0.0;
        auStack_54._4_4_ = auVar3._8_4_;
        fStack_4c = 0.0;
        if (iVar18 != 3) {
          fStack_dc = *(float *)(lVar7 + 0x1c + uVar17 * 8);
          puVar16 = (uint *)(lVar8 + (ulong)(uint)fStack_dc * lVar9);
          auVar2 = *(undefined1 (*) [16])(lVar10 + (ulong)*puVar16 * lVar6);
          auVar29 = minps(auVar29,auVar2);
          fStack_cc = (float)auVar2._0_4_;
          auVar27 = maxps(auVar27,auVar2);
          auVar28 = *(undefined1 (*) [16])(lVar10 + (ulong)puVar16[1] * lVar6);
          fStack_9c = (float)auVar28._0_4_;
          auVar3 = *(undefined1 (*) [16])(lVar10 + lVar6 * (ulong)puVar16[2]);
          fStack_6c = (float)auVar3._0_4_;
          auVar30 = minps(auVar28,auVar3);
          auVar29 = minps(auVar29,auVar30);
          local_118 = auVar29._0_12_;
          auVar29 = maxps(auVar28,auVar3);
          auVar27 = maxps(auVar27,auVar29);
          fStack_bc = (float)auVar2._4_4_;
          fStack_ac = (float)auVar2._8_4_;
          fStack_8c = (float)auVar28._4_4_;
          fStack_7c = (float)auVar28._8_4_;
          fStack_5c = (float)auVar3._4_4_;
          fStack_4c = (float)auVar3._8_4_;
        }
      }
    }
    fVar19 = (float)local_58 - (float)local_b8;
    fVar20 = (float)auStack_54._0_4_ - (float)auStack_b4._0_4_;
    fVar21 = (float)auStack_54._4_4_ - (float)auStack_b4._4_4_;
    fVar22 = fStack_4c - fStack_ac;
    fVar23 = (float)local_68 - (float)local_c8;
    fVar24 = (float)auStack_64._0_4_ - (float)auStack_c4._0_4_;
    fVar25 = (float)auStack_64._4_4_ - (float)auStack_c4._4_4_;
    fVar26 = fStack_5c - fStack_bc;
    fVar32 = (float)local_78 - (float)local_d8;
    fVar35 = (float)auStack_74._0_4_ - (float)auStack_d4._0_4_;
    fVar36 = (float)auStack_74._4_4_ - (float)auStack_d4._4_4_;
    fVar37 = fStack_6c - fStack_cc;
    fVar38 = (float)local_b8 - (float)local_88;
    fVar39 = (float)auStack_b4._0_4_ - (float)auStack_84._0_4_;
    fVar40 = (float)auStack_b4._4_4_ - (float)auStack_84._4_4_;
    fVar41 = fStack_ac - fStack_7c;
    fVar42 = (float)local_c8 - (float)local_98;
    fVar43 = (float)auStack_c4._0_4_ - (float)auStack_94._0_4_;
    fVar44 = (float)auStack_c4._4_4_ - (float)auStack_94._4_4_;
    fVar45 = fStack_bc - fStack_8c;
    fVar46 = (float)local_d8 - (float)local_a8;
    fVar47 = (float)auStack_d4._0_4_ - (float)auStack_a4._0_4_;
    fVar48 = (float)auStack_d4._4_4_ - (float)auStack_a4._4_4_;
    fVar49 = fStack_cc - fStack_9c;
  }
  pfVar13[8] = (float)local_b8;
  pfVar13[9] = (float)auStack_b4._0_4_;
  pfVar13[10] = (float)auStack_b4._4_4_;
  pfVar13[0xb] = fStack_ac;
  *pfVar13 = (float)local_d8;
  pfVar13[1] = (float)auStack_d4._0_4_;
  pfVar13[2] = (float)auStack_d4._4_4_;
  pfVar13[3] = fStack_cc;
  pfVar13[4] = (float)local_c8;
  pfVar13[5] = (float)auStack_c4._0_4_;
  pfVar13[6] = (float)auStack_c4._4_4_;
  pfVar13[7] = fStack_bc;
  pfVar13[0xc] = fVar46;
  pfVar13[0xd] = fVar47;
  pfVar13[0xe] = fVar48;
  pfVar13[0xf] = fVar49;
  pfVar13[0x10] = fVar42;
  pfVar13[0x11] = fVar43;
  pfVar13[0x12] = fVar44;
  pfVar13[0x13] = fVar45;
  pfVar13[0x14] = fVar38;
  pfVar13[0x15] = fVar39;
  pfVar13[0x16] = fVar40;
  pfVar13[0x17] = fVar41;
  pfVar13[0x18] = fVar32;
  pfVar13[0x19] = fVar35;
  pfVar13[0x1a] = fVar36;
  pfVar13[0x1b] = fVar37;
  pfVar13[0x1c] = fVar23;
  pfVar13[0x1d] = fVar24;
  pfVar13[0x1e] = fVar25;
  pfVar13[0x1f] = fVar26;
  pfVar13[0x20] = fVar19;
  pfVar13[0x21] = fVar20;
  pfVar13[0x22] = fVar21;
  pfVar13[0x23] = fVar22;
  pfVar13[0x24] = local_f8;
  pfVar13[0x25] = fStack_f4;
  pfVar13[0x26] = fStack_f0;
  pfVar13[0x27] = fStack_ec;
  pfVar13[0x28] = local_e8;
  pfVar13[0x29] = fStack_e4;
  pfVar13[0x2a] = fStack_e0;
  pfVar13[0x2b] = fStack_dc;
  uVar4 = in_RDX[1];
  uVar5 = *in_RDX;
  *(ulong *)param_1 = (ulong)pfVar13 | 9;
  iStack_10c = uVar4 - uVar5;
  auVar2 = _local_118;
  *(undefined1 (*) [16])(param_1 + 0x20) = auVar27;
  *(undefined4 *)(param_1 + 0x10) = local_118._0_4_;
  *(undefined4 *)(param_1 + 0x14) = local_118._4_4_;
  *(undefined4 *)(param_1 + 0x18) = local_118._8_4_;
  *(uint *)(param_1 + 0x1c) = uVar4 - uVar5;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
  _local_118 = auVar2;
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */
/* void std::vector<std::unique_ptr<embree::FastAllocator::ThreadLocal2,
   std::default_delete<embree::FastAllocator::ThreadLocal2> >,
   std::allocator<std::unique_ptr<embree::FastAllocator::ThreadLocal2,
   std::default_delete<embree::FastAllocator::ThreadLocal2> > >
   >::_M_realloc_insert<std::unique_ptr<embree::FastAllocator::ThreadLocal2,
   std::default_delete<embree::FastAllocator::ThreadLocal2> >
   >(__gnu_cxx::__normal_iterator<std::unique_ptr<embree::FastAllocator::ThreadLocal2,
   std::default_delete<embree::FastAllocator::ThreadLocal2> >*,
   std::vector<std::unique_ptr<embree::FastAllocator::ThreadLocal2,
   std::default_delete<embree::FastAllocator::ThreadLocal2> >,
   std::allocator<std::unique_ptr<embree::FastAllocator::ThreadLocal2,
   std::default_delete<embree::FastAllocator::ThreadLocal2> > > > >,
   std::unique_ptr<embree::FastAllocator::ThreadLocal2,
   std::default_delete<embree::FastAllocator::ThreadLocal2> >&&) */

void __thiscall
std::
vector<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>,std::allocator<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>>>
::
_M_realloc_insert<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>>
          (vector<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>,std::allocator<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>>>
           *this,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  
  puVar5 = *(undefined8 **)(this + 8);
  puVar1 = *(undefined8 **)this;
  uVar3 = (long)puVar5 - (long)puVar1 >> 3;
  if (uVar3 == 0xfffffffffffffff) {
    std::__throw_length_error("vector::_M_realloc_insert");
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (puVar1 == puVar5) {
    if (0xfffffffffffffffe < uVar3) goto LAB_00104880;
    uVar8 = 0xfffffffffffffff;
    if (uVar3 + 1 < 0x1000000000000000) {
      uVar8 = uVar3 + 1;
    }
    uVar8 = uVar8 << 3;
LAB_0010488a:
    puVar7 = (undefined8 *)operator_new(uVar8);
    lVar10 = uVar8 + (long)puVar7;
    *(undefined8 *)((long)puVar7 + ((long)param_2 - (long)puVar1)) = *param_3;
    puVar4 = puVar7 + 1;
    *param_3 = 0;
    if (param_2 != puVar1) {
LAB_001047f1:
      puVar4 = puVar1;
      puVar9 = puVar7;
      do {
        uVar2 = *puVar4;
        puVar4 = puVar4 + 1;
        *puVar9 = uVar2;
        puVar9 = puVar9 + 1;
      } while (puVar4 != param_2);
      puVar4 = (undefined8 *)((long)puVar7 + (long)param_2 + (8 - (long)puVar1));
    }
    if (param_2 == puVar5) goto LAB_00104844;
  }
  else {
    uVar8 = uVar3 * 2;
    if (uVar8 < uVar3) {
LAB_00104880:
      uVar8 = 0x7ffffffffffffff8;
      goto LAB_0010488a;
    }
    if (uVar8 != 0) {
      if (0xfffffffffffffff < uVar8) {
        uVar8 = 0xfffffffffffffff;
      }
      uVar8 = uVar8 * 8;
      goto LAB_0010488a;
    }
    lVar10 = 0;
    puVar7 = (undefined8 *)0x0;
    *(undefined8 *)((long)param_2 - (long)puVar1) = *param_3;
    puVar4 = (undefined8 *)&DAT_00000008;
    *param_3 = 0;
    if (param_2 != puVar1) goto LAB_001047f1;
  }
  puVar9 = (undefined8 *)(((long)puVar5 - (long)param_2) + (long)puVar4);
  puVar5 = puVar4;
  do {
    uVar2 = *param_2;
    puVar6 = puVar5 + 1;
    param_2 = param_2 + 1;
    *puVar5 = uVar2;
    puVar5 = puVar6;
    puVar4 = puVar9;
  } while (puVar9 != puVar6);
LAB_00104844:
  if (puVar1 != (undefined8 *)0x0) {
    operator_delete(puVar1,*(long *)(this + 0x10) - (long)puVar1);
  }
  *(undefined8 **)this = puVar7;
  *(undefined8 **)(this + 8) = puVar4;
  *(long *)(this + 0x10) = lVar10;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleMi<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::createLargeLeaf(unsigned long,
   embree::range<unsigned int> const&, embree::FastAllocator::CachedAllocator) */

range * embree::sse2::BVHBuilderMorton::
        BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMi<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>
        ::createLargeLeaf(range *param_1,ulong *param_2,ulong param_3,int *param_4,
                         undefined8 param_5,undefined8 param_6,FastAllocator *param_7,long *param_8)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  ulong *puVar15;
  uint *puVar16;
  uint *puVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  ulong *puVar21;
  uint *puVar22;
  long in_FS_OFFSET;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 local_278 [16];
  ulong *local_260;
  ulong local_258;
  ulong local_240;
  undefined1 local_238 [16];
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined8 local_208;
  uint local_200 [5];
  int local_1ec;
  int local_1e8;
  int local_1e4;
  int local_1e0;
  int local_1dc;
  int local_1d8;
  int local_1d4;
  int local_1d0;
  int local_1cc;
  ulong local_1c8 [2];
  undefined1 local_1b8 [12];
  int iStack_1ac;
  undefined1 local_1a8 [16];
  ulong local_198;
  undefined1 local_188 [12];
  int iStack_17c;
  undefined1 local_178 [16];
  ulong local_168;
  undefined1 local_158 [12];
  int iStack_14c;
  undefined1 local_148 [16];
  ulong local_138;
  undefined1 local_128 [12];
  int iStack_11c;
  undefined1 local_118 [16];
  int local_ec;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_278._8_8_ = local_278._0_8_;
  local_278._0_8_ = param_7;
  if (param_2[1] < param_3) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar3 = param_2[3];
  if ((uint)(param_4[1] - *param_4) <= uVar3) {
    CreateMortonLeaf<4,embree::TriangleMi<4>>::operator()(param_1,(CachedAllocator *)param_2[8]);
LAB_00104ebd:
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return param_1;
  }
  local_208 = *(undefined8 *)param_4;
  puVar22 = (uint *)&local_208;
  uVar18 = 1;
  if (uVar3 < (uint)((int)((ulong)local_208 >> 0x20) - (int)local_208)) {
    uVar18 = 1;
    lVar19 = 0;
    puVar16 = puVar22;
LAB_00104ef8:
    do {
      uVar11 = local_200[lVar19 * 2 + -2];
      uVar18 = uVar18 + 1;
      puVar17 = puVar16 + 2;
      uVar2 = local_200[lVar19 * 2 + -1];
      *(undefined8 *)(local_200 + lVar19 * 2 + -2) = *(undefined8 *)puVar16;
      *puVar16 = uVar11;
      uVar11 = uVar11 + uVar2 >> 1;
      puVar16[3] = uVar2;
      puVar16[1] = uVar11;
      *puVar17 = uVar11;
      if (*param_2 <= uVar18) break;
      uVar12 = (ulong)(local_208._4_4_ - (uint)local_208);
      lVar19 = 0;
      if (uVar12 <= uVar3) {
        uVar12 = 0;
        lVar19 = -1;
      }
      uVar13 = (ulong)(local_200[1] - local_200[0]);
      uVar20 = uVar12;
      if (uVar12 <= uVar3) {
        uVar20 = uVar3;
      }
      puVar16 = puVar17;
      if (uVar20 < uVar13) {
        lVar19 = 1;
        if (uVar18 == 2) goto LAB_00104ef8;
LAB_00104f6a:
        uVar12 = (ulong)(local_200[3] - local_200[2]);
        uVar20 = uVar13;
        if (uVar13 <= uVar3) {
          uVar20 = uVar3;
        }
        if (uVar20 < uVar12) {
          lVar19 = 2;
          if (uVar18 == 3) goto LAB_00104ef8;
        }
        else {
          uVar12 = uVar13;
          if (uVar18 == 3) goto LAB_00105049;
        }
        uVar13 = (ulong)(local_1ec - local_200[4]);
        uVar20 = uVar12;
        if (uVar12 <= uVar3) {
          uVar20 = uVar3;
        }
        if (uVar20 < uVar13) {
          lVar19 = 3;
          if (uVar18 == 4) goto LAB_00104ef8;
        }
        else {
          uVar13 = uVar12;
          if (uVar18 == 4) goto LAB_00105049;
        }
        uVar12 = (ulong)(uint)(local_1e4 - local_1e8);
        uVar20 = uVar13;
        if (uVar13 <= uVar3) {
          uVar20 = uVar3;
        }
        if (uVar20 < uVar12) {
          lVar19 = 4;
          if (uVar18 == 5) goto LAB_00104ef8;
        }
        else {
          uVar12 = uVar13;
          if (uVar18 == 5) goto LAB_00105049;
        }
        uVar13 = (ulong)(uint)(local_1dc - local_1e0);
        uVar20 = uVar12;
        if (uVar12 <= uVar3) {
          uVar20 = uVar3;
        }
        if (uVar20 < uVar13) {
          lVar19 = 5;
          if (uVar18 == 6) goto LAB_00104ef8;
        }
        else {
          uVar13 = uVar12;
          if (uVar18 == 6) goto LAB_00105049;
        }
        uVar12 = (ulong)(uint)(local_1d4 - local_1d8);
        if (uVar13 <= uVar3) {
          uVar13 = uVar3;
        }
        if (uVar13 < uVar12) {
          if (uVar18 == 8) {
            if (uVar12 <= uVar3) {
              uVar12 = uVar3;
            }
            lVar19 = (ulong)(uVar12 < (uint)(local_1cc - local_1d0)) + 6;
          }
          else {
            uVar18 = 7;
            lVar19 = 6;
          }
          goto LAB_00104ef8;
        }
        if ((uVar18 == 8) && (uVar13 < (uint)(local_1cc - local_1d0))) {
          lVar19 = 7;
          goto LAB_00104ef8;
        }
      }
      else {
        uVar13 = uVar12;
        if (uVar18 != 2) goto LAB_00104f6a;
      }
LAB_00105049:
    } while (lVar19 != -1);
  }
  local_240 = 0x80;
  lVar19 = *param_8;
  if (param_7 != *(FastAllocator **)(lVar19 + 8)) {
    embree::MutexSys::lock();
    if (*(long *)(lVar19 + 8) != 0) {
      LOCK();
      plVar1 = (long *)(*(long *)(lVar19 + 8) + 0x118);
      *plVar1 = *plVar1 + *(long *)(lVar19 + 0xa8) + *(long *)(lVar19 + 0x68);
      UNLOCK();
      LOCK();
      plVar1 = (long *)(*(long *)(lVar19 + 8) + 0x120);
      *plVar1 = *plVar1 + (((*(long *)(lVar19 + 0x98) + *(long *)(lVar19 + 0x58)) -
                           *(long *)(lVar19 + 0x50)) - *(long *)(lVar19 + 0x90));
      UNLOCK();
      LOCK();
      plVar1 = (long *)(*(long *)(lVar19 + 8) + 0x128);
      *plVar1 = *plVar1 + *(long *)(lVar19 + 0xb0) + *(long *)(lVar19 + 0x70);
      UNLOCK();
    }
    *(undefined8 *)(lVar19 + 0x48) = 0;
    *(undefined8 *)(lVar19 + 0x58) = 0;
    *(undefined8 *)(lVar19 + 0x50) = 0;
    *(undefined8 *)(lVar19 + 0x68) = 0;
    *(undefined8 *)(lVar19 + 0x70) = 0;
    *(undefined8 *)(lVar19 + 0x60) = 0;
    if (param_7 == (FastAllocator *)0x0) {
      *(undefined8 *)(lVar19 + 0x88) = 0;
      uVar14 = 0;
      *(undefined8 *)(lVar19 + 0x98) = 0;
      *(undefined8 *)(lVar19 + 0x90) = 0;
      *(undefined8 *)(lVar19 + 0xa8) = 0;
      *(undefined8 *)(lVar19 + 0xb0) = 0;
    }
    else {
      uVar14 = *(undefined8 *)(param_7 + 0x10);
      *(undefined8 *)(lVar19 + 0x88) = 0;
      *(undefined8 *)(lVar19 + 0x98) = 0;
      *(undefined8 *)(lVar19 + 0x60) = uVar14;
      *(undefined8 *)(lVar19 + 0x90) = 0;
      *(undefined8 *)(lVar19 + 0xa8) = 0;
      *(undefined8 *)(lVar19 + 0xb0) = 0;
      *(undefined8 *)(lVar19 + 0xa0) = 0;
      uVar14 = *(undefined8 *)(param_7 + 0x10);
    }
    *(undefined8 *)(lVar19 + 0xa0) = uVar14;
    LOCK();
    *(FastAllocator **)(lVar19 + 8) = param_7;
    UNLOCK();
    local_238._0_8_ = lVar19;
    embree::MutexSys::lock();
    if (*(long **)(param_7 + 0x138) == *(long **)(param_7 + 0x140)) {
      std::
      vector<embree::FastAllocator::ThreadLocal2*,std::allocator<embree::FastAllocator::ThreadLocal2*>>
      ::_M_realloc_insert<embree::FastAllocator::ThreadLocal2*const&>
                ((vector<embree::FastAllocator::ThreadLocal2*,std::allocator<embree::FastAllocator::ThreadLocal2*>>
                  *)(param_7 + 0x130));
    }
    else {
      **(long **)(param_7 + 0x138) = lVar19;
      *(long *)(param_7 + 0x138) = *(long *)(param_7 + 0x138) + 8;
    }
    embree::MutexSys::unlock();
    embree::MutexSys::unlock();
  }
  local_260 = (ulong *)local_238;
  lVar19 = param_8[2];
  param_8[5] = param_8[5] + 0x80;
  uVar12 = (ulong)(-(int)lVar19 & 0xf);
  uVar3 = lVar19 + 0x80 + uVar12;
  param_8[2] = uVar3;
  local_258 = param_3;
  if ((ulong)param_8[3] < uVar3) {
    param_8[2] = lVar19;
    if ((ulong)param_8[4] < 0x200) goto LAB_001053a7;
    local_238._0_8_ = param_8[4];
    puVar15 = (ulong *)FastAllocator::malloc(param_7,local_260,0x40,true);
    param_8[1] = (long)puVar15;
    lVar19 = param_8[2];
    param_8[2] = 0x80;
    param_8[6] = (param_8[3] + param_8[6]) - lVar19;
    param_8[3] = local_238._0_8_;
    if ((ulong)local_238._0_8_ < 0x80) {
      param_8[2] = 0;
      local_238._0_8_ = param_8[4];
      puVar15 = (ulong *)FastAllocator::malloc(param_7,local_260,0x40,false);
      param_8[1] = (long)puVar15;
      lVar19 = param_8[2];
      param_8[2] = 0x80;
      param_8[6] = (param_8[3] + param_8[6]) - lVar19;
      param_8[3] = local_238._0_8_;
      if ((ulong)local_238._0_8_ < 0x80) {
        puVar15 = (ulong *)0x0;
        param_8[2] = 0;
      }
    }
  }
  else {
    param_8[6] = param_8[6] + uVar12;
    puVar15 = (ulong *)(param_8[1] + -0x80 + uVar3);
  }
LAB_00104b81:
  uVar12 = _UNK_00117628;
  uVar3 = CONCAT44(_UNK_00117624,_LC2);
  *puVar15 = 8;
  uVar10 = _UNK_0011763c;
  uVar9 = _UNK_00117638;
  uVar8 = _UNK_00117634;
  uVar7 = _LC4;
  puVar15[1] = 8;
  puVar16 = puVar22 + uVar18 * 2;
  local_258 = local_258 + 1;
  puVar15[2] = 8;
  puVar15[3] = 8;
  puVar15[0xc] = uVar3;
  puVar15[0xd] = uVar12;
  puVar15[8] = uVar3;
  puVar15[9] = uVar12;
  puVar15[4] = uVar3;
  puVar15[5] = uVar12;
  *(undefined4 *)(puVar15 + 0xe) = uVar7;
  *(undefined4 *)((long)puVar15 + 0x74) = uVar8;
  *(undefined4 *)(puVar15 + 0xf) = uVar9;
  *(undefined4 *)((long)puVar15 + 0x7c) = uVar10;
  *(undefined4 *)(puVar15 + 10) = uVar7;
  *(undefined4 *)((long)puVar15 + 0x54) = uVar8;
  *(undefined4 *)(puVar15 + 0xb) = uVar9;
  *(undefined4 *)((long)puVar15 + 0x5c) = uVar10;
  *(undefined4 *)(puVar15 + 6) = uVar7;
  *(undefined4 *)((long)puVar15 + 0x34) = uVar8;
  *(undefined4 *)(puVar15 + 7) = uVar9;
  *(undefined4 *)((long)puVar15 + 0x3c) = uVar10;
  puVar21 = local_1c8;
  do {
    puVar22 = puVar22 + 2;
    createLargeLeaf(local_260,param_2,local_258);
    uVar7 = _LC4;
    *puVar21 = local_238._0_8_;
    *(undefined4 *)(puVar21 + 2) = local_228;
    *(undefined4 *)((long)puVar21 + 0x14) = uStack_224;
    *(undefined4 *)(puVar21 + 3) = uStack_220;
    *(undefined4 *)((long)puVar21 + 0x1c) = uStack_21c;
    *(undefined4 *)(puVar21 + 4) = local_218;
    *(undefined4 *)((long)puVar21 + 0x24) = uStack_214;
    *(undefined4 *)(puVar21 + 5) = uStack_210;
    *(undefined4 *)((long)puVar21 + 0x2c) = uStack_20c;
    puVar21 = puVar21 + 6;
  } while (puVar22 != puVar16);
  auVar24._12_4_ = iStack_1ac;
  auVar24._0_12_ = local_1b8;
  auVar25._4_4_ = _LC2;
  auVar25._0_4_ = _LC2;
  auVar25._8_4_ = _LC2;
  auVar25._12_4_ = _LC2;
  *(int *)(puVar15 + 4) = local_1b8._0_4_;
  auVar23._4_4_ = uVar7;
  auVar23._0_4_ = uVar7;
  auVar23._8_4_ = uVar7;
  auVar23._12_4_ = uVar7;
  local_238 = minps(auVar25,auVar24);
  auVar24 = maxps(auVar23,local_1a8);
  *puVar15 = local_1c8[0];
  *(int *)(puVar15 + 0xc) = local_1b8._8_4_;
  *(int *)(puVar15 + 6) = local_1a8._0_4_;
  *(int *)(puVar15 + 8) = local_1b8._4_4_;
  *(int *)(puVar15 + 10) = local_1a8._4_4_;
  *(int *)(puVar15 + 0xe) = local_1a8._8_4_;
  if (uVar18 == 1) {
    param_2 = (ulong *)(long)iStack_1ac;
    if ((param_2 < (ulong *)0x1000) || (0xfff < iStack_1ac)) goto LAB_00104ea4;
LAB_00105182:
    embree::sse2::BVHNRotate<4>::rotate(*puVar15,1);
    *puVar15 = *puVar15 | 0x8000000000000000;
    local_278 = auVar24;
    if (uVar18 == 1) goto LAB_00104ea4;
LAB_001051a6:
    if (iStack_17c < 0x1000) {
LAB_00105287:
      embree::sse2::BVHNRotate<4>::rotate(puVar15[1],1);
      puVar15[1] = puVar15[1] | 0x8000000000000000;
      local_278 = auVar24;
    }
    if (uVar18 < 3) goto LAB_00104ea4;
    if (iStack_14c < 0x1000) {
LAB_00105378:
      embree::sse2::BVHNRotate<4>::rotate(puVar15[2],1);
      puVar15[2] = puVar15[2] | 0x8000000000000000;
      local_278 = auVar24;
    }
    if (uVar18 < 4) goto LAB_00104ea4;
  }
  else {
    auVar4._12_4_ = iStack_17c;
    auVar4._0_12_ = local_188;
    local_238 = minps(local_238,auVar4);
    *(int *)((long)puVar15 + 0x24) = local_188._0_4_;
    auVar24 = maxps(auVar24,local_178);
    *(int *)((long)puVar15 + 0x34) = local_178._0_4_;
    *(int *)((long)puVar15 + 100) = local_188._8_4_;
    puVar15[1] = local_198;
    *(int *)((long)puVar15 + 0x44) = local_188._4_4_;
    *(int *)((long)puVar15 + 0x54) = local_178._4_4_;
    *(int *)((long)puVar15 + 0x74) = local_178._8_4_;
    if (uVar18 == 2) {
      param_2 = (ulong *)((long)iStack_17c + (long)iStack_1ac);
LAB_0010523f:
      if ((ulong *)0xfff < param_2) {
        if (iStack_1ac < 0x1000) goto LAB_00105182;
        goto LAB_001051a6;
      }
LAB_00104ea4:
      local_238._12_4_ = (int)param_2;
      auVar23 = local_238;
      local_238._8_8_ = auVar23._8_8_;
      *(ulong **)param_1 = puVar15;
      *(undefined8 *)(param_1 + 0x10) = local_238._0_8_;
      *(undefined8 *)(param_1 + 0x18) = local_238._8_8_;
      *(undefined1 (*) [16])(param_1 + 0x20) = auVar24;
      local_238 = auVar23;
      goto LAB_00104ebd;
    }
    auVar5._12_4_ = iStack_14c;
    auVar5._0_12_ = local_158;
    local_238 = minps(local_238,auVar5);
    *(int *)(puVar15 + 5) = local_158._0_4_;
    auVar24 = maxps(auVar24,local_148);
    *(int *)(puVar15 + 7) = local_148._0_4_;
    *(int *)(puVar15 + 0xd) = local_158._8_4_;
    puVar15[2] = local_168;
    *(int *)(puVar15 + 9) = local_158._4_4_;
    *(int *)(puVar15 + 0xb) = local_148._4_4_;
    *(int *)(puVar15 + 0xf) = local_148._8_4_;
    if (uVar18 != 3) {
      auVar6._12_4_ = iStack_11c;
      auVar6._0_12_ = local_128;
      local_238 = minps(local_238,auVar6);
      *(int *)((long)puVar15 + 0x2c) = local_128._0_4_;
      auVar24 = maxps(auVar24,local_118);
      puVar15[3] = local_138;
      *(int *)((long)puVar15 + 0x6c) = local_128._8_4_;
      *(int *)((long)puVar15 + 0x3c) = local_118._0_4_;
      *(int *)((long)puVar15 + 0x4c) = local_128._4_4_;
      *(int *)((long)puVar15 + 0x5c) = local_118._4_4_;
      *(int *)((long)puVar15 + 0x7c) = local_118._8_4_;
    }
    param_2 = (ulong *)((long)iStack_14c + (long)iStack_17c + (long)iStack_1ac);
    if ((uVar18 == 3) || (param_2 = (ulong *)((long)param_2 + (long)iStack_11c), uVar18 == 4))
    goto LAB_0010523f;
    param_2 = (ulong *)((long)param_2 + (long)local_ec);
    if (param_2 < (ulong *)0x1000) goto LAB_00104ea4;
    if (iStack_1ac < 0x1000) goto LAB_00105182;
    if (iStack_17c < 0x1000) goto LAB_00105287;
    if (iStack_14c < 0x1000) goto LAB_00105378;
  }
  if (iStack_11c < 0x1000) {
    embree::sse2::BVHNRotate<4>::rotate(puVar15[3],1);
    puVar15[3] = puVar15[3] | 0x8000000000000000;
    local_278 = auVar24;
  }
  if ((uVar18 == 4) || (0xfff < local_ec)) goto LAB_00104ea4;
  embree::sse2::BVHNRotate<4>::rotate(puVar15[4],1);
LAB_001053a7:
  puVar15 = (ulong *)FastAllocator::malloc((FastAllocator *)local_278._0_8_,&local_240,0x40,false);
  goto LAB_00104b81;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleMv<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::createLargeLeaf(unsigned long,
   embree::range<unsigned int> const&, embree::FastAllocator::CachedAllocator) */

range * embree::sse2::BVHBuilderMorton::
        BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMv<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>
        ::createLargeLeaf(range *param_1,ulong *param_2,ulong param_3,int *param_4,
                         undefined8 param_5,undefined8 param_6,FastAllocator *param_7,long *param_8)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  ulong *puVar15;
  uint *puVar16;
  uint *puVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  ulong *puVar21;
  uint *puVar22;
  long in_FS_OFFSET;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 local_278 [16];
  ulong *local_260;
  ulong local_258;
  ulong local_240;
  undefined1 local_238 [16];
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined8 local_208;
  uint local_200 [5];
  int local_1ec;
  int local_1e8;
  int local_1e4;
  int local_1e0;
  int local_1dc;
  int local_1d8;
  int local_1d4;
  int local_1d0;
  int local_1cc;
  ulong local_1c8 [2];
  undefined1 local_1b8 [12];
  int iStack_1ac;
  undefined1 local_1a8 [16];
  ulong local_198;
  undefined1 local_188 [12];
  int iStack_17c;
  undefined1 local_178 [16];
  ulong local_168;
  undefined1 local_158 [12];
  int iStack_14c;
  undefined1 local_148 [16];
  ulong local_138;
  undefined1 local_128 [12];
  int iStack_11c;
  undefined1 local_118 [16];
  int local_ec;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_278._8_8_ = local_278._0_8_;
  local_278._0_8_ = param_7;
  if (param_2[1] < param_3) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar3 = param_2[3];
  if ((uint)(param_4[1] - *param_4) <= uVar3) {
    CreateMortonLeaf<4,embree::TriangleMv<4>>::operator()(param_1,(CachedAllocator *)param_2[8]);
LAB_0010597d:
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return param_1;
  }
  local_208 = *(undefined8 *)param_4;
  puVar22 = (uint *)&local_208;
  uVar18 = 1;
  if (uVar3 < (uint)((int)((ulong)local_208 >> 0x20) - (int)local_208)) {
    uVar18 = 1;
    lVar19 = 0;
    puVar16 = puVar22;
LAB_001059b8:
    do {
      uVar11 = local_200[lVar19 * 2 + -2];
      uVar18 = uVar18 + 1;
      puVar17 = puVar16 + 2;
      uVar2 = local_200[lVar19 * 2 + -1];
      *(undefined8 *)(local_200 + lVar19 * 2 + -2) = *(undefined8 *)puVar16;
      *puVar16 = uVar11;
      uVar11 = uVar11 + uVar2 >> 1;
      puVar16[3] = uVar2;
      puVar16[1] = uVar11;
      *puVar17 = uVar11;
      if (*param_2 <= uVar18) break;
      uVar12 = (ulong)(local_208._4_4_ - (uint)local_208);
      lVar19 = 0;
      if (uVar12 <= uVar3) {
        uVar12 = 0;
        lVar19 = -1;
      }
      uVar13 = (ulong)(local_200[1] - local_200[0]);
      uVar20 = uVar12;
      if (uVar12 <= uVar3) {
        uVar20 = uVar3;
      }
      puVar16 = puVar17;
      if (uVar20 < uVar13) {
        lVar19 = 1;
        if (uVar18 == 2) goto LAB_001059b8;
LAB_00105a2a:
        uVar12 = (ulong)(local_200[3] - local_200[2]);
        uVar20 = uVar13;
        if (uVar13 <= uVar3) {
          uVar20 = uVar3;
        }
        if (uVar20 < uVar12) {
          lVar19 = 2;
          if (uVar18 == 3) goto LAB_001059b8;
        }
        else {
          uVar12 = uVar13;
          if (uVar18 == 3) goto LAB_00105b09;
        }
        uVar13 = (ulong)(local_1ec - local_200[4]);
        uVar20 = uVar12;
        if (uVar12 <= uVar3) {
          uVar20 = uVar3;
        }
        if (uVar20 < uVar13) {
          lVar19 = 3;
          if (uVar18 == 4) goto LAB_001059b8;
        }
        else {
          uVar13 = uVar12;
          if (uVar18 == 4) goto LAB_00105b09;
        }
        uVar12 = (ulong)(uint)(local_1e4 - local_1e8);
        uVar20 = uVar13;
        if (uVar13 <= uVar3) {
          uVar20 = uVar3;
        }
        if (uVar20 < uVar12) {
          lVar19 = 4;
          if (uVar18 == 5) goto LAB_001059b8;
        }
        else {
          uVar12 = uVar13;
          if (uVar18 == 5) goto LAB_00105b09;
        }
        uVar13 = (ulong)(uint)(local_1dc - local_1e0);
        uVar20 = uVar12;
        if (uVar12 <= uVar3) {
          uVar20 = uVar3;
        }
        if (uVar20 < uVar13) {
          lVar19 = 5;
          if (uVar18 == 6) goto LAB_001059b8;
        }
        else {
          uVar13 = uVar12;
          if (uVar18 == 6) goto LAB_00105b09;
        }
        uVar12 = (ulong)(uint)(local_1d4 - local_1d8);
        if (uVar13 <= uVar3) {
          uVar13 = uVar3;
        }
        if (uVar13 < uVar12) {
          if (uVar18 == 8) {
            if (uVar12 <= uVar3) {
              uVar12 = uVar3;
            }
            lVar19 = (ulong)(uVar12 < (uint)(local_1cc - local_1d0)) + 6;
          }
          else {
            uVar18 = 7;
            lVar19 = 6;
          }
          goto LAB_001059b8;
        }
        if ((uVar18 == 8) && (uVar13 < (uint)(local_1cc - local_1d0))) {
          lVar19 = 7;
          goto LAB_001059b8;
        }
      }
      else {
        uVar13 = uVar12;
        if (uVar18 != 2) goto LAB_00105a2a;
      }
LAB_00105b09:
    } while (lVar19 != -1);
  }
  local_240 = 0x80;
  lVar19 = *param_8;
  if (param_7 != *(FastAllocator **)(lVar19 + 8)) {
    embree::MutexSys::lock();
    if (*(long *)(lVar19 + 8) != 0) {
      LOCK();
      plVar1 = (long *)(*(long *)(lVar19 + 8) + 0x118);
      *plVar1 = *plVar1 + *(long *)(lVar19 + 0xa8) + *(long *)(lVar19 + 0x68);
      UNLOCK();
      LOCK();
      plVar1 = (long *)(*(long *)(lVar19 + 8) + 0x120);
      *plVar1 = *plVar1 + (((*(long *)(lVar19 + 0x98) + *(long *)(lVar19 + 0x58)) -
                           *(long *)(lVar19 + 0x50)) - *(long *)(lVar19 + 0x90));
      UNLOCK();
      LOCK();
      plVar1 = (long *)(*(long *)(lVar19 + 8) + 0x128);
      *plVar1 = *plVar1 + *(long *)(lVar19 + 0xb0) + *(long *)(lVar19 + 0x70);
      UNLOCK();
    }
    *(undefined8 *)(lVar19 + 0x48) = 0;
    *(undefined8 *)(lVar19 + 0x58) = 0;
    *(undefined8 *)(lVar19 + 0x50) = 0;
    *(undefined8 *)(lVar19 + 0x68) = 0;
    *(undefined8 *)(lVar19 + 0x70) = 0;
    *(undefined8 *)(lVar19 + 0x60) = 0;
    if (param_7 == (FastAllocator *)0x0) {
      *(undefined8 *)(lVar19 + 0x88) = 0;
      uVar14 = 0;
      *(undefined8 *)(lVar19 + 0x98) = 0;
      *(undefined8 *)(lVar19 + 0x90) = 0;
      *(undefined8 *)(lVar19 + 0xa8) = 0;
      *(undefined8 *)(lVar19 + 0xb0) = 0;
    }
    else {
      uVar14 = *(undefined8 *)(param_7 + 0x10);
      *(undefined8 *)(lVar19 + 0x88) = 0;
      *(undefined8 *)(lVar19 + 0x98) = 0;
      *(undefined8 *)(lVar19 + 0x60) = uVar14;
      *(undefined8 *)(lVar19 + 0x90) = 0;
      *(undefined8 *)(lVar19 + 0xa8) = 0;
      *(undefined8 *)(lVar19 + 0xb0) = 0;
      *(undefined8 *)(lVar19 + 0xa0) = 0;
      uVar14 = *(undefined8 *)(param_7 + 0x10);
    }
    *(undefined8 *)(lVar19 + 0xa0) = uVar14;
    LOCK();
    *(FastAllocator **)(lVar19 + 8) = param_7;
    UNLOCK();
    local_238._0_8_ = lVar19;
    embree::MutexSys::lock();
    if (*(long **)(param_7 + 0x138) == *(long **)(param_7 + 0x140)) {
      std::
      vector<embree::FastAllocator::ThreadLocal2*,std::allocator<embree::FastAllocator::ThreadLocal2*>>
      ::_M_realloc_insert<embree::FastAllocator::ThreadLocal2*const&>
                ((vector<embree::FastAllocator::ThreadLocal2*,std::allocator<embree::FastAllocator::ThreadLocal2*>>
                  *)(param_7 + 0x130));
    }
    else {
      **(long **)(param_7 + 0x138) = lVar19;
      *(long *)(param_7 + 0x138) = *(long *)(param_7 + 0x138) + 8;
    }
    embree::MutexSys::unlock();
    embree::MutexSys::unlock();
  }
  local_260 = (ulong *)local_238;
  lVar19 = param_8[2];
  param_8[5] = param_8[5] + 0x80;
  uVar12 = (ulong)(-(int)lVar19 & 0xf);
  uVar3 = lVar19 + 0x80 + uVar12;
  param_8[2] = uVar3;
  local_258 = param_3;
  if ((ulong)param_8[3] < uVar3) {
    param_8[2] = lVar19;
    if ((ulong)param_8[4] < 0x200) goto LAB_00105e67;
    local_238._0_8_ = param_8[4];
    puVar15 = (ulong *)FastAllocator::malloc(param_7,local_260,0x40,true);
    param_8[1] = (long)puVar15;
    lVar19 = param_8[2];
    param_8[2] = 0x80;
    param_8[6] = (param_8[3] + param_8[6]) - lVar19;
    param_8[3] = local_238._0_8_;
    if ((ulong)local_238._0_8_ < 0x80) {
      param_8[2] = 0;
      local_238._0_8_ = param_8[4];
      puVar15 = (ulong *)FastAllocator::malloc(param_7,local_260,0x40,false);
      param_8[1] = (long)puVar15;
      lVar19 = param_8[2];
      param_8[2] = 0x80;
      param_8[6] = (param_8[3] + param_8[6]) - lVar19;
      param_8[3] = local_238._0_8_;
      if ((ulong)local_238._0_8_ < 0x80) {
        puVar15 = (ulong *)0x0;
        param_8[2] = 0;
      }
    }
  }
  else {
    param_8[6] = param_8[6] + uVar12;
    puVar15 = (ulong *)(param_8[1] + -0x80 + uVar3);
  }
LAB_00105641:
  uVar12 = _UNK_00117628;
  uVar3 = CONCAT44(_UNK_00117624,_LC2);
  *puVar15 = 8;
  uVar10 = _UNK_0011763c;
  uVar9 = _UNK_00117638;
  uVar8 = _UNK_00117634;
  uVar7 = _LC4;
  puVar15[1] = 8;
  puVar16 = puVar22 + uVar18 * 2;
  local_258 = local_258 + 1;
  puVar15[2] = 8;
  puVar15[3] = 8;
  puVar15[0xc] = uVar3;
  puVar15[0xd] = uVar12;
  puVar15[8] = uVar3;
  puVar15[9] = uVar12;
  puVar15[4] = uVar3;
  puVar15[5] = uVar12;
  *(undefined4 *)(puVar15 + 0xe) = uVar7;
  *(undefined4 *)((long)puVar15 + 0x74) = uVar8;
  *(undefined4 *)(puVar15 + 0xf) = uVar9;
  *(undefined4 *)((long)puVar15 + 0x7c) = uVar10;
  *(undefined4 *)(puVar15 + 10) = uVar7;
  *(undefined4 *)((long)puVar15 + 0x54) = uVar8;
  *(undefined4 *)(puVar15 + 0xb) = uVar9;
  *(undefined4 *)((long)puVar15 + 0x5c) = uVar10;
  *(undefined4 *)(puVar15 + 6) = uVar7;
  *(undefined4 *)((long)puVar15 + 0x34) = uVar8;
  *(undefined4 *)(puVar15 + 7) = uVar9;
  *(undefined4 *)((long)puVar15 + 0x3c) = uVar10;
  puVar21 = local_1c8;
  do {
    puVar22 = puVar22 + 2;
    createLargeLeaf(local_260,param_2,local_258);
    uVar7 = _LC4;
    *puVar21 = local_238._0_8_;
    *(undefined4 *)(puVar21 + 2) = local_228;
    *(undefined4 *)((long)puVar21 + 0x14) = uStack_224;
    *(undefined4 *)(puVar21 + 3) = uStack_220;
    *(undefined4 *)((long)puVar21 + 0x1c) = uStack_21c;
    *(undefined4 *)(puVar21 + 4) = local_218;
    *(undefined4 *)((long)puVar21 + 0x24) = uStack_214;
    *(undefined4 *)(puVar21 + 5) = uStack_210;
    *(undefined4 *)((long)puVar21 + 0x2c) = uStack_20c;
    puVar21 = puVar21 + 6;
  } while (puVar22 != puVar16);
  auVar24._12_4_ = iStack_1ac;
  auVar24._0_12_ = local_1b8;
  auVar25._4_4_ = _LC2;
  auVar25._0_4_ = _LC2;
  auVar25._8_4_ = _LC2;
  auVar25._12_4_ = _LC2;
  *(int *)(puVar15 + 4) = local_1b8._0_4_;
  auVar23._4_4_ = uVar7;
  auVar23._0_4_ = uVar7;
  auVar23._8_4_ = uVar7;
  auVar23._12_4_ = uVar7;
  local_238 = minps(auVar25,auVar24);
  auVar24 = maxps(auVar23,local_1a8);
  *puVar15 = local_1c8[0];
  *(int *)(puVar15 + 0xc) = local_1b8._8_4_;
  *(int *)(puVar15 + 6) = local_1a8._0_4_;
  *(int *)(puVar15 + 8) = local_1b8._4_4_;
  *(int *)(puVar15 + 10) = local_1a8._4_4_;
  *(int *)(puVar15 + 0xe) = local_1a8._8_4_;
  if (uVar18 == 1) {
    param_2 = (ulong *)(long)iStack_1ac;
    if ((param_2 < (ulong *)0x1000) || (0xfff < iStack_1ac)) goto LAB_00105964;
LAB_00105c42:
    embree::sse2::BVHNRotate<4>::rotate(*puVar15,1);
    *puVar15 = *puVar15 | 0x8000000000000000;
    local_278 = auVar24;
    if (uVar18 == 1) goto LAB_00105964;
LAB_00105c66:
    if (iStack_17c < 0x1000) {
LAB_00105d47:
      embree::sse2::BVHNRotate<4>::rotate(puVar15[1],1);
      puVar15[1] = puVar15[1] | 0x8000000000000000;
      local_278 = auVar24;
    }
    if (uVar18 < 3) goto LAB_00105964;
    if (iStack_14c < 0x1000) {
LAB_00105e38:
      embree::sse2::BVHNRotate<4>::rotate(puVar15[2],1);
      puVar15[2] = puVar15[2] | 0x8000000000000000;
      local_278 = auVar24;
    }
    if (uVar18 < 4) goto LAB_00105964;
  }
  else {
    auVar4._12_4_ = iStack_17c;
    auVar4._0_12_ = local_188;
    local_238 = minps(local_238,auVar4);
    *(int *)((long)puVar15 + 0x24) = local_188._0_4_;
    auVar24 = maxps(auVar24,local_178);
    *(int *)((long)puVar15 + 0x34) = local_178._0_4_;
    *(int *)((long)puVar15 + 100) = local_188._8_4_;
    puVar15[1] = local_198;
    *(int *)((long)puVar15 + 0x44) = local_188._4_4_;
    *(int *)((long)puVar15 + 0x54) = local_178._4_4_;
    *(int *)((long)puVar15 + 0x74) = local_178._8_4_;
    if (uVar18 == 2) {
      param_2 = (ulong *)((long)iStack_17c + (long)iStack_1ac);
LAB_00105cff:
      if ((ulong *)0xfff < param_2) {
        if (iStack_1ac < 0x1000) goto LAB_00105c42;
        goto LAB_00105c66;
      }
LAB_00105964:
      local_238._12_4_ = (int)param_2;
      auVar23 = local_238;
      local_238._8_8_ = auVar23._8_8_;
      *(ulong **)param_1 = puVar15;
      *(undefined8 *)(param_1 + 0x10) = local_238._0_8_;
      *(undefined8 *)(param_1 + 0x18) = local_238._8_8_;
      *(undefined1 (*) [16])(param_1 + 0x20) = auVar24;
      local_238 = auVar23;
      goto LAB_0010597d;
    }
    auVar5._12_4_ = iStack_14c;
    auVar5._0_12_ = local_158;
    local_238 = minps(local_238,auVar5);
    *(int *)(puVar15 + 5) = local_158._0_4_;
    auVar24 = maxps(auVar24,local_148);
    *(int *)(puVar15 + 7) = local_148._0_4_;
    *(int *)(puVar15 + 0xd) = local_158._8_4_;
    puVar15[2] = local_168;
    *(int *)(puVar15 + 9) = local_158._4_4_;
    *(int *)(puVar15 + 0xb) = local_148._4_4_;
    *(int *)(puVar15 + 0xf) = local_148._8_4_;
    if (uVar18 != 3) {
      auVar6._12_4_ = iStack_11c;
      auVar6._0_12_ = local_128;
      local_238 = minps(local_238,auVar6);
      *(int *)((long)puVar15 + 0x2c) = local_128._0_4_;
      auVar24 = maxps(auVar24,local_118);
      puVar15[3] = local_138;
      *(int *)((long)puVar15 + 0x6c) = local_128._8_4_;
      *(int *)((long)puVar15 + 0x3c) = local_118._0_4_;
      *(int *)((long)puVar15 + 0x4c) = local_128._4_4_;
      *(int *)((long)puVar15 + 0x5c) = local_118._4_4_;
      *(int *)((long)puVar15 + 0x7c) = local_118._8_4_;
    }
    param_2 = (ulong *)((long)iStack_14c + (long)iStack_17c + (long)iStack_1ac);
    if ((uVar18 == 3) || (param_2 = (ulong *)((long)param_2 + (long)iStack_11c), uVar18 == 4))
    goto LAB_00105cff;
    param_2 = (ulong *)((long)param_2 + (long)local_ec);
    if (param_2 < (ulong *)0x1000) goto LAB_00105964;
    if (iStack_1ac < 0x1000) goto LAB_00105c42;
    if (iStack_17c < 0x1000) goto LAB_00105d47;
    if (iStack_14c < 0x1000) goto LAB_00105e38;
  }
  if (iStack_11c < 0x1000) {
    embree::sse2::BVHNRotate<4>::rotate(puVar15[3],1);
    puVar15[3] = puVar15[3] | 0x8000000000000000;
    local_278 = auVar24;
  }
  if ((uVar18 == 4) || (0xfff < local_ec)) goto LAB_00105964;
  embree::sse2::BVHNRotate<4>::rotate(puVar15[4],1);
LAB_00105e67:
  puVar15 = (ulong *)FastAllocator::malloc((FastAllocator *)local_278._0_8_,&local_240,0x40,false);
  goto LAB_00105641;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleM<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::createLargeLeaf(unsigned long,
   embree::range<unsigned int> const&, embree::FastAllocator::CachedAllocator) */

range * embree::sse2::BVHBuilderMorton::
        BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleM<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>
        ::createLargeLeaf(range *param_1,ulong *param_2,ulong param_3,int *param_4,
                         undefined8 param_5,undefined8 param_6,FastAllocator *param_7,long *param_8)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  ulong *puVar15;
  uint *puVar16;
  uint *puVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  ulong *puVar21;
  uint *puVar22;
  long in_FS_OFFSET;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 local_278 [16];
  ulong *local_260;
  ulong local_258;
  ulong local_240;
  undefined1 local_238 [16];
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined8 local_208;
  uint local_200 [5];
  int local_1ec;
  int local_1e8;
  int local_1e4;
  int local_1e0;
  int local_1dc;
  int local_1d8;
  int local_1d4;
  int local_1d0;
  int local_1cc;
  ulong local_1c8 [2];
  undefined1 local_1b8 [12];
  int iStack_1ac;
  undefined1 local_1a8 [16];
  ulong local_198;
  undefined1 local_188 [12];
  int iStack_17c;
  undefined1 local_178 [16];
  ulong local_168;
  undefined1 local_158 [12];
  int iStack_14c;
  undefined1 local_148 [16];
  ulong local_138;
  undefined1 local_128 [12];
  int iStack_11c;
  undefined1 local_118 [16];
  int local_ec;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_278._8_8_ = local_278._0_8_;
  local_278._0_8_ = param_7;
  if (param_2[1] < param_3) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar3 = param_2[3];
  if ((uint)(param_4[1] - *param_4) <= uVar3) {
    CreateMortonLeaf<4,embree::TriangleM<4>>::operator()(param_1,(CachedAllocator *)param_2[8]);
LAB_0010643d:
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return param_1;
  }
  local_208 = *(undefined8 *)param_4;
  puVar22 = (uint *)&local_208;
  uVar18 = 1;
  if (uVar3 < (uint)((int)((ulong)local_208 >> 0x20) - (int)local_208)) {
    uVar18 = 1;
    lVar19 = 0;
    puVar16 = puVar22;
LAB_00106478:
    do {
      uVar11 = local_200[lVar19 * 2 + -2];
      uVar18 = uVar18 + 1;
      puVar17 = puVar16 + 2;
      uVar2 = local_200[lVar19 * 2 + -1];
      *(undefined8 *)(local_200 + lVar19 * 2 + -2) = *(undefined8 *)puVar16;
      *puVar16 = uVar11;
      uVar11 = uVar11 + uVar2 >> 1;
      puVar16[3] = uVar2;
      puVar16[1] = uVar11;
      *puVar17 = uVar11;
      if (*param_2 <= uVar18) break;
      uVar12 = (ulong)(local_208._4_4_ - (uint)local_208);
      lVar19 = 0;
      if (uVar12 <= uVar3) {
        uVar12 = 0;
        lVar19 = -1;
      }
      uVar13 = (ulong)(local_200[1] - local_200[0]);
      uVar20 = uVar12;
      if (uVar12 <= uVar3) {
        uVar20 = uVar3;
      }
      puVar16 = puVar17;
      if (uVar20 < uVar13) {
        lVar19 = 1;
        if (uVar18 == 2) goto LAB_00106478;
LAB_001064ea:
        uVar12 = (ulong)(local_200[3] - local_200[2]);
        uVar20 = uVar13;
        if (uVar13 <= uVar3) {
          uVar20 = uVar3;
        }
        if (uVar20 < uVar12) {
          lVar19 = 2;
          if (uVar18 == 3) goto LAB_00106478;
        }
        else {
          uVar12 = uVar13;
          if (uVar18 == 3) goto LAB_001065c9;
        }
        uVar13 = (ulong)(local_1ec - local_200[4]);
        uVar20 = uVar12;
        if (uVar12 <= uVar3) {
          uVar20 = uVar3;
        }
        if (uVar20 < uVar13) {
          lVar19 = 3;
          if (uVar18 == 4) goto LAB_00106478;
        }
        else {
          uVar13 = uVar12;
          if (uVar18 == 4) goto LAB_001065c9;
        }
        uVar12 = (ulong)(uint)(local_1e4 - local_1e8);
        uVar20 = uVar13;
        if (uVar13 <= uVar3) {
          uVar20 = uVar3;
        }
        if (uVar20 < uVar12) {
          lVar19 = 4;
          if (uVar18 == 5) goto LAB_00106478;
        }
        else {
          uVar12 = uVar13;
          if (uVar18 == 5) goto LAB_001065c9;
        }
        uVar13 = (ulong)(uint)(local_1dc - local_1e0);
        uVar20 = uVar12;
        if (uVar12 <= uVar3) {
          uVar20 = uVar3;
        }
        if (uVar20 < uVar13) {
          lVar19 = 5;
          if (uVar18 == 6) goto LAB_00106478;
        }
        else {
          uVar13 = uVar12;
          if (uVar18 == 6) goto LAB_001065c9;
        }
        uVar12 = (ulong)(uint)(local_1d4 - local_1d8);
        if (uVar13 <= uVar3) {
          uVar13 = uVar3;
        }
        if (uVar13 < uVar12) {
          if (uVar18 == 8) {
            if (uVar12 <= uVar3) {
              uVar12 = uVar3;
            }
            lVar19 = (ulong)(uVar12 < (uint)(local_1cc - local_1d0)) + 6;
          }
          else {
            uVar18 = 7;
            lVar19 = 6;
          }
          goto LAB_00106478;
        }
        if ((uVar18 == 8) && (uVar13 < (uint)(local_1cc - local_1d0))) {
          lVar19 = 7;
          goto LAB_00106478;
        }
      }
      else {
        uVar13 = uVar12;
        if (uVar18 != 2) goto LAB_001064ea;
      }
LAB_001065c9:
    } while (lVar19 != -1);
  }
  local_240 = 0x80;
  lVar19 = *param_8;
  if (param_7 != *(FastAllocator **)(lVar19 + 8)) {
    embree::MutexSys::lock();
    if (*(long *)(lVar19 + 8) != 0) {
      LOCK();
      plVar1 = (long *)(*(long *)(lVar19 + 8) + 0x118);
      *plVar1 = *plVar1 + *(long *)(lVar19 + 0xa8) + *(long *)(lVar19 + 0x68);
      UNLOCK();
      LOCK();
      plVar1 = (long *)(*(long *)(lVar19 + 8) + 0x120);
      *plVar1 = *plVar1 + (((*(long *)(lVar19 + 0x98) + *(long *)(lVar19 + 0x58)) -
                           *(long *)(lVar19 + 0x50)) - *(long *)(lVar19 + 0x90));
      UNLOCK();
      LOCK();
      plVar1 = (long *)(*(long *)(lVar19 + 8) + 0x128);
      *plVar1 = *plVar1 + *(long *)(lVar19 + 0xb0) + *(long *)(lVar19 + 0x70);
      UNLOCK();
    }
    *(undefined8 *)(lVar19 + 0x48) = 0;
    *(undefined8 *)(lVar19 + 0x58) = 0;
    *(undefined8 *)(lVar19 + 0x50) = 0;
    *(undefined8 *)(lVar19 + 0x68) = 0;
    *(undefined8 *)(lVar19 + 0x70) = 0;
    *(undefined8 *)(lVar19 + 0x60) = 0;
    if (param_7 == (FastAllocator *)0x0) {
      *(undefined8 *)(lVar19 + 0x88) = 0;
      uVar14 = 0;
      *(undefined8 *)(lVar19 + 0x98) = 0;
      *(undefined8 *)(lVar19 + 0x90) = 0;
      *(undefined8 *)(lVar19 + 0xa8) = 0;
      *(undefined8 *)(lVar19 + 0xb0) = 0;
    }
    else {
      uVar14 = *(undefined8 *)(param_7 + 0x10);
      *(undefined8 *)(lVar19 + 0x88) = 0;
      *(undefined8 *)(lVar19 + 0x98) = 0;
      *(undefined8 *)(lVar19 + 0x60) = uVar14;
      *(undefined8 *)(lVar19 + 0x90) = 0;
      *(undefined8 *)(lVar19 + 0xa8) = 0;
      *(undefined8 *)(lVar19 + 0xb0) = 0;
      *(undefined8 *)(lVar19 + 0xa0) = 0;
      uVar14 = *(undefined8 *)(param_7 + 0x10);
    }
    *(undefined8 *)(lVar19 + 0xa0) = uVar14;
    LOCK();
    *(FastAllocator **)(lVar19 + 8) = param_7;
    UNLOCK();
    local_238._0_8_ = lVar19;
    embree::MutexSys::lock();
    if (*(long **)(param_7 + 0x138) == *(long **)(param_7 + 0x140)) {
      std::
      vector<embree::FastAllocator::ThreadLocal2*,std::allocator<embree::FastAllocator::ThreadLocal2*>>
      ::_M_realloc_insert<embree::FastAllocator::ThreadLocal2*const&>
                ((vector<embree::FastAllocator::ThreadLocal2*,std::allocator<embree::FastAllocator::ThreadLocal2*>>
                  *)(param_7 + 0x130));
    }
    else {
      **(long **)(param_7 + 0x138) = lVar19;
      *(long *)(param_7 + 0x138) = *(long *)(param_7 + 0x138) + 8;
    }
    embree::MutexSys::unlock();
    embree::MutexSys::unlock();
  }
  local_260 = (ulong *)local_238;
  lVar19 = param_8[2];
  param_8[5] = param_8[5] + 0x80;
  uVar12 = (ulong)(-(int)lVar19 & 0xf);
  uVar3 = lVar19 + 0x80 + uVar12;
  param_8[2] = uVar3;
  local_258 = param_3;
  if ((ulong)param_8[3] < uVar3) {
    param_8[2] = lVar19;
    if ((ulong)param_8[4] < 0x200) goto LAB_00106927;
    local_238._0_8_ = param_8[4];
    puVar15 = (ulong *)FastAllocator::malloc(param_7,local_260,0x40,true);
    param_8[1] = (long)puVar15;
    lVar19 = param_8[2];
    param_8[2] = 0x80;
    param_8[6] = (param_8[3] + param_8[6]) - lVar19;
    param_8[3] = local_238._0_8_;
    if ((ulong)local_238._0_8_ < 0x80) {
      param_8[2] = 0;
      local_238._0_8_ = param_8[4];
      puVar15 = (ulong *)FastAllocator::malloc(param_7,local_260,0x40,false);
      param_8[1] = (long)puVar15;
      lVar19 = param_8[2];
      param_8[2] = 0x80;
      param_8[6] = (param_8[3] + param_8[6]) - lVar19;
      param_8[3] = local_238._0_8_;
      if ((ulong)local_238._0_8_ < 0x80) {
        puVar15 = (ulong *)0x0;
        param_8[2] = 0;
      }
    }
  }
  else {
    param_8[6] = param_8[6] + uVar12;
    puVar15 = (ulong *)(param_8[1] + -0x80 + uVar3);
  }
LAB_00106101:
  uVar12 = _UNK_00117628;
  uVar3 = CONCAT44(_UNK_00117624,_LC2);
  *puVar15 = 8;
  uVar10 = _UNK_0011763c;
  uVar9 = _UNK_00117638;
  uVar8 = _UNK_00117634;
  uVar7 = _LC4;
  puVar15[1] = 8;
  puVar16 = puVar22 + uVar18 * 2;
  local_258 = local_258 + 1;
  puVar15[2] = 8;
  puVar15[3] = 8;
  puVar15[0xc] = uVar3;
  puVar15[0xd] = uVar12;
  puVar15[8] = uVar3;
  puVar15[9] = uVar12;
  puVar15[4] = uVar3;
  puVar15[5] = uVar12;
  *(undefined4 *)(puVar15 + 0xe) = uVar7;
  *(undefined4 *)((long)puVar15 + 0x74) = uVar8;
  *(undefined4 *)(puVar15 + 0xf) = uVar9;
  *(undefined4 *)((long)puVar15 + 0x7c) = uVar10;
  *(undefined4 *)(puVar15 + 10) = uVar7;
  *(undefined4 *)((long)puVar15 + 0x54) = uVar8;
  *(undefined4 *)(puVar15 + 0xb) = uVar9;
  *(undefined4 *)((long)puVar15 + 0x5c) = uVar10;
  *(undefined4 *)(puVar15 + 6) = uVar7;
  *(undefined4 *)((long)puVar15 + 0x34) = uVar8;
  *(undefined4 *)(puVar15 + 7) = uVar9;
  *(undefined4 *)((long)puVar15 + 0x3c) = uVar10;
  puVar21 = local_1c8;
  do {
    puVar22 = puVar22 + 2;
    createLargeLeaf(local_260,param_2,local_258);
    uVar7 = _LC4;
    *puVar21 = local_238._0_8_;
    *(undefined4 *)(puVar21 + 2) = local_228;
    *(undefined4 *)((long)puVar21 + 0x14) = uStack_224;
    *(undefined4 *)(puVar21 + 3) = uStack_220;
    *(undefined4 *)((long)puVar21 + 0x1c) = uStack_21c;
    *(undefined4 *)(puVar21 + 4) = local_218;
    *(undefined4 *)((long)puVar21 + 0x24) = uStack_214;
    *(undefined4 *)(puVar21 + 5) = uStack_210;
    *(undefined4 *)((long)puVar21 + 0x2c) = uStack_20c;
    puVar21 = puVar21 + 6;
  } while (puVar22 != puVar16);
  auVar24._12_4_ = iStack_1ac;
  auVar24._0_12_ = local_1b8;
  auVar25._4_4_ = _LC2;
  auVar25._0_4_ = _LC2;
  auVar25._8_4_ = _LC2;
  auVar25._12_4_ = _LC2;
  *(int *)(puVar15 + 4) = local_1b8._0_4_;
  auVar23._4_4_ = uVar7;
  auVar23._0_4_ = uVar7;
  auVar23._8_4_ = uVar7;
  auVar23._12_4_ = uVar7;
  local_238 = minps(auVar25,auVar24);
  auVar24 = maxps(auVar23,local_1a8);
  *puVar15 = local_1c8[0];
  *(int *)(puVar15 + 0xc) = local_1b8._8_4_;
  *(int *)(puVar15 + 6) = local_1a8._0_4_;
  *(int *)(puVar15 + 8) = local_1b8._4_4_;
  *(int *)(puVar15 + 10) = local_1a8._4_4_;
  *(int *)(puVar15 + 0xe) = local_1a8._8_4_;
  if (uVar18 == 1) {
    param_2 = (ulong *)(long)iStack_1ac;
    if ((param_2 < (ulong *)0x1000) || (0xfff < iStack_1ac)) goto LAB_00106424;
LAB_00106702:
    embree::sse2::BVHNRotate<4>::rotate(*puVar15,1);
    *puVar15 = *puVar15 | 0x8000000000000000;
    local_278 = auVar24;
    if (uVar18 == 1) goto LAB_00106424;
LAB_00106726:
    if (iStack_17c < 0x1000) {
LAB_00106807:
      embree::sse2::BVHNRotate<4>::rotate(puVar15[1],1);
      puVar15[1] = puVar15[1] | 0x8000000000000000;
      local_278 = auVar24;
    }
    if (uVar18 < 3) goto LAB_00106424;
    if (iStack_14c < 0x1000) {
LAB_001068f8:
      embree::sse2::BVHNRotate<4>::rotate(puVar15[2],1);
      puVar15[2] = puVar15[2] | 0x8000000000000000;
      local_278 = auVar24;
    }
    if (uVar18 < 4) goto LAB_00106424;
  }
  else {
    auVar4._12_4_ = iStack_17c;
    auVar4._0_12_ = local_188;
    local_238 = minps(local_238,auVar4);
    *(int *)((long)puVar15 + 0x24) = local_188._0_4_;
    auVar24 = maxps(auVar24,local_178);
    *(int *)((long)puVar15 + 0x34) = local_178._0_4_;
    *(int *)((long)puVar15 + 100) = local_188._8_4_;
    puVar15[1] = local_198;
    *(int *)((long)puVar15 + 0x44) = local_188._4_4_;
    *(int *)((long)puVar15 + 0x54) = local_178._4_4_;
    *(int *)((long)puVar15 + 0x74) = local_178._8_4_;
    if (uVar18 == 2) {
      param_2 = (ulong *)((long)iStack_17c + (long)iStack_1ac);
LAB_001067bf:
      if ((ulong *)0xfff < param_2) {
        if (iStack_1ac < 0x1000) goto LAB_00106702;
        goto LAB_00106726;
      }
LAB_00106424:
      local_238._12_4_ = (int)param_2;
      auVar23 = local_238;
      local_238._8_8_ = auVar23._8_8_;
      *(ulong **)param_1 = puVar15;
      *(undefined8 *)(param_1 + 0x10) = local_238._0_8_;
      *(undefined8 *)(param_1 + 0x18) = local_238._8_8_;
      *(undefined1 (*) [16])(param_1 + 0x20) = auVar24;
      local_238 = auVar23;
      goto LAB_0010643d;
    }
    auVar5._12_4_ = iStack_14c;
    auVar5._0_12_ = local_158;
    local_238 = minps(local_238,auVar5);
    *(int *)(puVar15 + 5) = local_158._0_4_;
    auVar24 = maxps(auVar24,local_148);
    *(int *)(puVar15 + 7) = local_148._0_4_;
    *(int *)(puVar15 + 0xd) = local_158._8_4_;
    puVar15[2] = local_168;
    *(int *)(puVar15 + 9) = local_158._4_4_;
    *(int *)(puVar15 + 0xb) = local_148._4_4_;
    *(int *)(puVar15 + 0xf) = local_148._8_4_;
    if (uVar18 != 3) {
      auVar6._12_4_ = iStack_11c;
      auVar6._0_12_ = local_128;
      local_238 = minps(local_238,auVar6);
      *(int *)((long)puVar15 + 0x2c) = local_128._0_4_;
      auVar24 = maxps(auVar24,local_118);
      puVar15[3] = local_138;
      *(int *)((long)puVar15 + 0x6c) = local_128._8_4_;
      *(int *)((long)puVar15 + 0x3c) = local_118._0_4_;
      *(int *)((long)puVar15 + 0x4c) = local_128._4_4_;
      *(int *)((long)puVar15 + 0x5c) = local_118._4_4_;
      *(int *)((long)puVar15 + 0x7c) = local_118._8_4_;
    }
    param_2 = (ulong *)((long)iStack_14c + (long)iStack_17c + (long)iStack_1ac);
    if ((uVar18 == 3) || (param_2 = (ulong *)((long)param_2 + (long)iStack_11c), uVar18 == 4))
    goto LAB_001067bf;
    param_2 = (ulong *)((long)param_2 + (long)local_ec);
    if (param_2 < (ulong *)0x1000) goto LAB_00106424;
    if (iStack_1ac < 0x1000) goto LAB_00106702;
    if (iStack_17c < 0x1000) goto LAB_00106807;
    if (iStack_14c < 0x1000) goto LAB_001068f8;
  }
  if (iStack_11c < 0x1000) {
    embree::sse2::BVHNRotate<4>::rotate(puVar15[3],1);
    puVar15[3] = puVar15[3] | 0x8000000000000000;
    local_278 = auVar24;
  }
  if ((uVar18 == 4) || (0xfff < local_ec)) goto LAB_00106424;
  embree::sse2::BVHNRotate<4>::rotate(puVar15[4],1);
LAB_00106927:
  puVar15 = (ulong *)FastAllocator::malloc((FastAllocator *)local_278._0_8_,&local_240,0x40,false);
  goto LAB_00106101;
}



/* WARNING: Removing unreachable block (ram,0x00106d55) */
/* void embree::TaskScheduler::spawn_root<embree::TaskScheduler::spawn<unsigned long,
   embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleMi<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned long, embree::range<unsigned int>
   const&, embree::FastAllocator::CachedAllocator, bool)::{lambda(embree::range<unsigned long>
   const&)#1}>(unsigned long, unsigned long, unsigned long,
   embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleMi<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned long, embree::range<unsigned int>
   const&, embree::FastAllocator::CachedAllocator, bool)::{lambda(embree::range<unsigned long>
   const&)#1} const&,
   embree::TaskScheduler::TaskGroupContext*)::{lambda()#1}>(embree::TaskScheduler::spawn<unsigned
   long, embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleMi<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned long, embree::range<unsigned int>
   const&, embree::FastAllocator::CachedAllocator, bool)::{lambda(embree::range<unsigned long>
   const&)#1}>(unsigned long, unsigned long, unsigned long,
   embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleMi<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned long, embree::range<unsigned int>
   const&, embree::FastAllocator::CachedAllocator, bool)::{lambda(embree::range<unsigned long>
   const&)#1} const&, embree::TaskScheduler::TaskGroupContext*)::{lambda()#1} const&,
   embree::TaskScheduler::TaskGroupContext*, unsigned long, bool) */

void __thiscall
embree::TaskScheduler::
spawn_root<embree::TaskScheduler::spawn<unsigned_long,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMi<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned_long,embree::range<unsigned_int>const&,embree::FastAllocator::CachedAllocator,bool)::_lambda(embree::range<unsigned_long>const&)_1_>(unsigned_long,unsigned_long,unsigned_long,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMi<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned_long,embree::range<unsigned_int>const&,embree::FastAllocator::CachedAllocator,bool)::_lambda(embree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
          (TaskScheduler *this,_lambda___1_ *param_1,TaskGroupContext *param_2,ulong param_3,
          bool param_4)

{
  TaskScheduler *pTVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  char cVar15;
  long lVar16;
  Thread *pTVar17;
  Thread *pTVar18;
  Thread *pTVar19;
  long lVar20;
  Thread *pTVar21;
  long in_FS_OFFSET;
  Thread *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_4) {
    embree::TaskScheduler::startThreads();
  }
  lVar16 = embree::TaskScheduler::allocThreadIndex();
  pTVar17 = (Thread *)embree::alignedMalloc(0xc0140,0x40);
  if (this != (TaskScheduler *)0x0) {
    if (*(code **)(*(long *)this + 0x10) == RefCount::refInc) {
      LOCK();
      *(long *)(this + 8) = *(long *)(this + 8) + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*(long *)this + 0x10))(this);
    }
  }
  *(long *)pTVar17 = lVar16;
  pTVar21 = pTVar17 + 0x40;
  pTVar19 = pTVar21;
  do {
    *(undefined4 *)pTVar19 = 0;
    pTVar18 = pTVar19 + 0x80;
    *(undefined4 *)(pTVar19 + 0x40) = 0;
    pTVar19 = pTVar18;
  } while (pTVar17 + 0x40040 != pTVar18);
  *(undefined8 *)(pTVar17 + 0x40040) = 0;
  *(undefined8 *)(pTVar17 + 0x40080) = 0;
  *(undefined8 *)(pTVar17 + 0xc00c0) = 0;
  *(undefined8 *)(pTVar17 + 0xc0100) = 0;
  *(TaskScheduler **)(pTVar17 + 0xc0108) = this;
  if (this != (TaskScheduler *)0x0) {
    if (*(code **)(*(long *)this + 0x10) == RefCount::refInc) {
      LOCK();
      *(long *)(this + 8) = *(long *)(this + 8) + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*(long *)this + 0x10))(this);
    }
    if (*(code **)(*(long *)this + 0x18) == RefCount::refDec) {
      LOCK();
      pTVar1 = this + 8;
      *(long *)pTVar1 = *(long *)pTVar1 + -1;
      UNLOCK();
      if (*(long *)pTVar1 == 0) {
        (**(code **)(*(long *)this + 8))(this);
      }
    }
    else {
      (**(code **)(*(long *)this + 0x18))(this);
    }
  }
  LOCK();
  *(Thread **)(*(long *)(this + 0x10) + lVar16 * 8) = pTVar17;
  UNLOCK();
  local_48 = pTVar17;
  pTVar19 = (Thread *)embree::TaskScheduler::swapThread(pTVar17);
  if (*(ulong *)(pTVar17 + 0x40080) < 0x1000) {
    lVar4 = *(long *)(pTVar17 + 0xc00c0);
    uVar3 = lVar4 + 0x48 + (ulong)(-(int)lVar4 & 0x3f);
    if (uVar3 < 0x80001) {
      *(ulong *)(pTVar17 + 0xc00c0) = uVar3;
      pTVar18 = pTVar17 + uVar3 + 0x40078;
      uVar7 = *(undefined8 *)param_1;
      uVar8 = *(undefined8 *)(param_1 + 8);
      uVar9 = *(undefined8 *)(param_1 + 0x10);
      uVar10 = *(undefined8 *)(param_1 + 0x18);
      uVar11 = *(undefined8 *)(param_1 + 0x20);
      uVar12 = *(undefined8 *)(param_1 + 0x28);
      *(undefined ***)pTVar18 = &PTR_execute_001171b0;
      uVar13 = *(undefined8 *)(param_1 + 0x30);
      uVar14 = *(undefined8 *)(param_1 + 0x38);
      *(undefined8 *)(pTVar18 + 8) = uVar7;
      *(undefined8 *)(pTVar18 + 0x10) = uVar8;
      *(undefined8 *)(pTVar18 + 0x18) = uVar9;
      *(undefined8 *)(pTVar18 + 0x20) = uVar10;
      *(undefined8 *)(pTVar18 + 0x28) = uVar11;
      *(undefined8 *)(pTVar18 + 0x30) = uVar12;
      *(undefined8 *)(pTVar18 + 0x38) = uVar13;
      *(undefined8 *)(pTVar18 + 0x40) = uVar14;
      lVar20 = *(long *)(pTVar17 + 0x40080) * 0x40;
      lVar5 = *(long *)(pTVar17 + 0xc0100);
      pTVar17[lVar20 + 0x48] = (Thread)0x1;
      *(undefined4 *)(pTVar17 + lVar20 + 0x44) = 1;
      *(Thread **)(pTVar17 + lVar20 + 0x50) = pTVar18;
      *(long *)(pTVar17 + lVar20 + 0x58) = lVar5;
      *(TaskGroupContext **)(pTVar17 + lVar20 + 0x60) = param_2;
      *(long *)(pTVar17 + lVar20 + 0x68) = lVar4;
      *(ulong *)(pTVar17 + lVar20 + 0x70) = param_3;
      if (lVar5 != 0) {
        LOCK();
        *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + 1;
        UNLOCK();
      }
      LOCK();
      if (*(int *)(pTVar21 + lVar20) == 0) {
        *(undefined4 *)(pTVar21 + lVar20) = 1;
      }
      UNLOCK();
      LOCK();
      *(long *)(pTVar17 + 0x40080) = *(long *)(pTVar17 + 0x40080) + 1;
      UNLOCK();
      if (*(long *)(pTVar17 + 0x40080) - 1U <= *(ulong *)(pTVar17 + 0x40040)) {
        LOCK();
        *(long *)(pTVar17 + 0x40040) = *(long *)(pTVar17 + 0x40080) + -1;
        UNLOCK();
      }
      embree::MutexSys::lock();
      LOCK();
      *(long *)(this + 0x30) = *(long *)(this + 0x30) + 1;
      UNLOCK();
      LOCK();
      this[0x38] = (TaskScheduler)0x1;
      UNLOCK();
      embree::ConditionSys::notify_all();
      embree::MutexSys::unlock();
      if (param_4) {
        local_48 = (Thread *)this;
        if (this != (TaskScheduler *)0x0) {
          if (*(code **)(*(long *)this + 0x10) == RefCount::refInc) {
            LOCK();
            *(long *)(this + 8) = *(long *)(this + 8) + 1;
            UNLOCK();
          }
          else {
            (**(code **)(*(long *)this + 0x10))(this);
          }
        }
        embree::TaskScheduler::addScheduler((Ref *)&local_48);
        if (local_48 != (Thread *)0x0) {
          if (*(code **)(*(long *)local_48 + 0x18) == RefCount::refDec) {
            LOCK();
            pTVar18 = local_48 + 8;
            *(long *)pTVar18 = *(long *)pTVar18 + -1;
            UNLOCK();
            if (*(long *)pTVar18 == 0) {
              (**(code **)(*(long *)local_48 + 8))();
            }
          }
          else {
            (**(code **)(*(long *)local_48 + 0x18))();
          }
        }
      }
      do {
        cVar15 = embree::TaskScheduler::TaskQueue::execute_local(pTVar21,(Task *)pTVar17);
      } while (cVar15 != '\0');
      LOCK();
      *(long *)(this + 0x30) = *(long *)(this + 0x30) + -1;
      UNLOCK();
      if (param_4) {
        local_48 = (Thread *)this;
        if (this != (TaskScheduler *)0x0) {
          if (*(code **)(*(long *)this + 0x10) == RefCount::refInc) {
            LOCK();
            *(long *)(this + 8) = *(long *)(this + 8) + 1;
            UNLOCK();
          }
          else {
            (**(code **)(*(long *)this + 0x10))(this);
          }
        }
        embree::TaskScheduler::removeScheduler((Ref *)&local_48);
        if (local_48 != (Thread *)0x0) {
          if (*(code **)(*(long *)local_48 + 0x18) == RefCount::refDec) {
            LOCK();
            pTVar1 = (TaskScheduler *)(local_48 + 8);
            *(long *)pTVar1 = *(long *)pTVar1 + -1;
            UNLOCK();
            if (*(long *)pTVar1 == 0) {
              (**(code **)(*(long *)local_48 + 8))();
            }
          }
          else {
            (**(code **)(*(long *)local_48 + 0x18))();
          }
        }
      }
      local_48 = (Thread *)0x0;
      LOCK();
      *(undefined8 *)(lVar16 * 8 + *(long *)(this + 0x10)) = 0;
      UNLOCK();
      embree::TaskScheduler::swapThread(pTVar19);
      pTVar21 = *(Thread **)param_2;
      if (pTVar21 != (Thread *)0x0) {
        local_48 = pTVar21;
        std::__exception_ptr::exception_ptr::_M_addref();
        pTVar21 = local_48;
      }
      LOCK();
      *(long *)(this + 0x28) = *(long *)(this + 0x28) + -1;
      UNLOCK();
      while (*(long *)(this + 0x28) != 0) {
        embree::yield();
      }
      local_48 = *(Thread **)param_2;
      *(undefined8 *)param_2 = 0;
      if (local_48 != (Thread *)0x0) {
        std::__exception_ptr::exception_ptr::_M_release();
      }
      if (pTVar21 == (Thread *)0x0) {
        if (pTVar17 == (Thread *)0x0) {
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            return;
          }
        }
        else {
          plVar6 = *(long **)(pTVar17 + 0xc0108);
          if (plVar6 != (long *)0x0) {
            if (*(code **)(*plVar6 + 0x18) == RefCount::refDec) {
              LOCK();
              plVar2 = plVar6 + 1;
              *plVar2 = *plVar2 + -1;
              UNLOCK();
              if (*plVar2 == 0) {
                (**(code **)(*plVar6 + 8))();
              }
            }
            else {
              (**(code **)(*plVar6 + 0x18))();
            }
          }
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            embree::alignedFree(pTVar17);
            return;
          }
        }
      }
      else {
        local_48 = pTVar21;
        std::__exception_ptr::exception_ptr::_M_addref();
        std::rethrow_exception(&local_48);
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



/* void embree::TaskScheduler::spawn<unsigned long,
   embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleMi<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned long, embree::range<unsigned int>
   const&, embree::FastAllocator::CachedAllocator, bool)::{lambda(embree::range<unsigned long>
   const&)#1}>(unsigned long, unsigned long, unsigned long,
   embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleMi<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned long, embree::range<unsigned int>
   const&, embree::FastAllocator::CachedAllocator, bool)::{lambda(embree::range<unsigned long>
   const&)#1} const&, embree::TaskScheduler::TaskGroupContext*) */

void embree::TaskScheduler::
     spawn<unsigned_long,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMi<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned_long,embree::range<unsigned_int>const&,embree::FastAllocator::CachedAllocator,bool)::_lambda(embree::range<unsigned_long>const&)_1_>
               (ulong param_1,ulong param_2,ulong param_3,
               _lambda_embree__range<unsigned_long>_const___1_ *param_4,TaskGroupContext *param_5)

{
  int *piVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  TaskScheduler *this;
  long in_FS_OFFSET;
  ulong local_68;
  ulong uStack_60;
  ulong local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  TaskGroupContext *local_30;
  long local_20;
  
  uStack_50 = *(undefined8 *)param_4;
  uStack_48 = *(undefined8 *)(param_4 + 8);
  uStack_40 = *(undefined8 *)(param_4 + 0x10);
  uStack_38 = *(undefined8 *)(param_4 + 0x18);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = param_2;
  uStack_60 = param_1;
  local_58 = param_3;
  local_30 = param_5;
  lVar6 = embree::TaskScheduler::thread();
  if (lVar6 == 0) {
    this = (TaskScheduler *)embree::TaskScheduler::instance();
    spawn_root<embree::TaskScheduler::spawn<unsigned_long,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMi<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned_long,embree::range<unsigned_int>const&,embree::FastAllocator::CachedAllocator,bool)::_lambda(embree::range<unsigned_long>const&)_1_>(unsigned_long,unsigned_long,unsigned_long,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMi<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned_long,embree::range<unsigned_int>const&,embree::FastAllocator::CachedAllocator,bool)::_lambda(embree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
              (this,(_lambda___1_ *)&local_68,param_5,param_2 - param_1,true);
LAB_00107009:
    if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  if (*(ulong *)(lVar6 + 0x40080) < 0x1000) {
    lVar4 = *(long *)(lVar6 + 0xc00c0);
    uVar2 = lVar4 + 0x48 + (ulong)(-(int)lVar4 & 0x3f);
    if (uVar2 < 0x80001) {
      *(ulong *)(lVar6 + 0xc00c0) = uVar2;
      puVar3 = (undefined8 *)(lVar6 + 0x40078 + uVar2);
      *puVar3 = &PTR_execute_001171b0;
      puVar3[1] = local_68;
      puVar3[2] = uStack_60;
      puVar3[3] = local_58;
      puVar3[4] = uStack_50;
      puVar3[5] = uStack_48;
      puVar3[6] = uStack_40;
      puVar3[7] = uStack_38;
      puVar3[8] = local_30;
      lVar7 = *(long *)(lVar6 + 0x40080) * 0x40;
      piVar1 = (int *)(lVar6 + 0x40 + lVar7);
      lVar5 = *(long *)(lVar6 + 0xc0100);
      *(undefined4 *)(lVar6 + 0x44 + lVar7) = 1;
      *(undefined1 *)(lVar6 + 0x48 + lVar7) = 1;
      lVar7 = lVar7 + lVar6;
      *(undefined8 **)(lVar7 + 0x50) = puVar3;
      *(long *)(lVar7 + 0x58) = lVar5;
      *(TaskGroupContext **)(lVar7 + 0x60) = param_5;
      *(long *)(lVar7 + 0x68) = lVar4;
      *(ulong *)(lVar7 + 0x70) = param_2 - param_1;
      if (lVar5 != 0) {
        LOCK();
        *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + 1;
        UNLOCK();
      }
      LOCK();
      if (*piVar1 == 0) {
        *piVar1 = 1;
      }
      UNLOCK();
      LOCK();
      *(long *)(lVar6 + 0x40080) = *(long *)(lVar6 + 0x40080) + 1;
      UNLOCK();
      if (*(long *)(lVar6 + 0x40080) - 1U <= *(ulong *)(lVar6 + 0x40040)) {
        LOCK();
        *(long *)(lVar6 + 0x40040) = *(long *)(lVar6 + 0x40080) + -1;
        UNLOCK();
      }
      goto LAB_00107009;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



/* WARNING: Removing unreachable block (ram,0x00107445) */
/* void embree::TaskScheduler::spawn_root<embree::TaskScheduler::spawn<unsigned long,
   embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleMv<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned long, embree::range<unsigned int>
   const&, embree::FastAllocator::CachedAllocator, bool)::{lambda(embree::range<unsigned long>
   const&)#1}>(unsigned long, unsigned long, unsigned long,
   embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleMv<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned long, embree::range<unsigned int>
   const&, embree::FastAllocator::CachedAllocator, bool)::{lambda(embree::range<unsigned long>
   const&)#1} const&,
   embree::TaskScheduler::TaskGroupContext*)::{lambda()#1}>(embree::TaskScheduler::spawn<unsigned
   long, embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleMv<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned long, embree::range<unsigned int>
   const&, embree::FastAllocator::CachedAllocator, bool)::{lambda(embree::range<unsigned long>
   const&)#1}>(unsigned long, unsigned long, unsigned long,
   embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleMv<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned long, embree::range<unsigned int>
   const&, embree::FastAllocator::CachedAllocator, bool)::{lambda(embree::range<unsigned long>
   const&)#1} const&, embree::TaskScheduler::TaskGroupContext*)::{lambda()#1} const&,
   embree::TaskScheduler::TaskGroupContext*, unsigned long, bool) */

void __thiscall
embree::TaskScheduler::
spawn_root<embree::TaskScheduler::spawn<unsigned_long,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMv<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned_long,embree::range<unsigned_int>const&,embree::FastAllocator::CachedAllocator,bool)::_lambda(embree::range<unsigned_long>const&)_1_>(unsigned_long,unsigned_long,unsigned_long,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMv<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned_long,embree::range<unsigned_int>const&,embree::FastAllocator::CachedAllocator,bool)::_lambda(embree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
          (TaskScheduler *this,_lambda___1_ *param_1,TaskGroupContext *param_2,ulong param_3,
          bool param_4)

{
  TaskScheduler *pTVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  char cVar15;
  long lVar16;
  Thread *pTVar17;
  Thread *pTVar18;
  Thread *pTVar19;
  long lVar20;
  Thread *pTVar21;
  long in_FS_OFFSET;
  Thread *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_4) {
    embree::TaskScheduler::startThreads();
  }
  lVar16 = embree::TaskScheduler::allocThreadIndex();
  pTVar17 = (Thread *)embree::alignedMalloc(0xc0140,0x40);
  if (this != (TaskScheduler *)0x0) {
    if (*(code **)(*(long *)this + 0x10) == RefCount::refInc) {
      LOCK();
      *(long *)(this + 8) = *(long *)(this + 8) + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*(long *)this + 0x10))(this);
    }
  }
  *(long *)pTVar17 = lVar16;
  pTVar21 = pTVar17 + 0x40;
  pTVar19 = pTVar21;
  do {
    *(undefined4 *)pTVar19 = 0;
    pTVar18 = pTVar19 + 0x80;
    *(undefined4 *)(pTVar19 + 0x40) = 0;
    pTVar19 = pTVar18;
  } while (pTVar17 + 0x40040 != pTVar18);
  *(undefined8 *)(pTVar17 + 0x40040) = 0;
  *(undefined8 *)(pTVar17 + 0x40080) = 0;
  *(undefined8 *)(pTVar17 + 0xc00c0) = 0;
  *(undefined8 *)(pTVar17 + 0xc0100) = 0;
  *(TaskScheduler **)(pTVar17 + 0xc0108) = this;
  if (this != (TaskScheduler *)0x0) {
    if (*(code **)(*(long *)this + 0x10) == RefCount::refInc) {
      LOCK();
      *(long *)(this + 8) = *(long *)(this + 8) + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*(long *)this + 0x10))(this);
    }
    if (*(code **)(*(long *)this + 0x18) == RefCount::refDec) {
      LOCK();
      pTVar1 = this + 8;
      *(long *)pTVar1 = *(long *)pTVar1 + -1;
      UNLOCK();
      if (*(long *)pTVar1 == 0) {
        (**(code **)(*(long *)this + 8))(this);
      }
    }
    else {
      (**(code **)(*(long *)this + 0x18))(this);
    }
  }
  LOCK();
  *(Thread **)(*(long *)(this + 0x10) + lVar16 * 8) = pTVar17;
  UNLOCK();
  local_48 = pTVar17;
  pTVar19 = (Thread *)embree::TaskScheduler::swapThread(pTVar17);
  if (*(ulong *)(pTVar17 + 0x40080) < 0x1000) {
    lVar4 = *(long *)(pTVar17 + 0xc00c0);
    uVar3 = lVar4 + 0x48 + (ulong)(-(int)lVar4 & 0x3f);
    if (uVar3 < 0x80001) {
      *(ulong *)(pTVar17 + 0xc00c0) = uVar3;
      pTVar18 = pTVar17 + uVar3 + 0x40078;
      uVar7 = *(undefined8 *)param_1;
      uVar8 = *(undefined8 *)(param_1 + 8);
      uVar9 = *(undefined8 *)(param_1 + 0x10);
      uVar10 = *(undefined8 *)(param_1 + 0x18);
      uVar11 = *(undefined8 *)(param_1 + 0x20);
      uVar12 = *(undefined8 *)(param_1 + 0x28);
      *(undefined ***)pTVar18 = &PTR_execute_001171c8;
      uVar13 = *(undefined8 *)(param_1 + 0x30);
      uVar14 = *(undefined8 *)(param_1 + 0x38);
      *(undefined8 *)(pTVar18 + 8) = uVar7;
      *(undefined8 *)(pTVar18 + 0x10) = uVar8;
      *(undefined8 *)(pTVar18 + 0x18) = uVar9;
      *(undefined8 *)(pTVar18 + 0x20) = uVar10;
      *(undefined8 *)(pTVar18 + 0x28) = uVar11;
      *(undefined8 *)(pTVar18 + 0x30) = uVar12;
      *(undefined8 *)(pTVar18 + 0x38) = uVar13;
      *(undefined8 *)(pTVar18 + 0x40) = uVar14;
      lVar20 = *(long *)(pTVar17 + 0x40080) * 0x40;
      lVar5 = *(long *)(pTVar17 + 0xc0100);
      pTVar17[lVar20 + 0x48] = (Thread)0x1;
      *(undefined4 *)(pTVar17 + lVar20 + 0x44) = 1;
      *(Thread **)(pTVar17 + lVar20 + 0x50) = pTVar18;
      *(long *)(pTVar17 + lVar20 + 0x58) = lVar5;
      *(TaskGroupContext **)(pTVar17 + lVar20 + 0x60) = param_2;
      *(long *)(pTVar17 + lVar20 + 0x68) = lVar4;
      *(ulong *)(pTVar17 + lVar20 + 0x70) = param_3;
      if (lVar5 != 0) {
        LOCK();
        *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + 1;
        UNLOCK();
      }
      LOCK();
      if (*(int *)(pTVar21 + lVar20) == 0) {
        *(undefined4 *)(pTVar21 + lVar20) = 1;
      }
      UNLOCK();
      LOCK();
      *(long *)(pTVar17 + 0x40080) = *(long *)(pTVar17 + 0x40080) + 1;
      UNLOCK();
      if (*(long *)(pTVar17 + 0x40080) - 1U <= *(ulong *)(pTVar17 + 0x40040)) {
        LOCK();
        *(long *)(pTVar17 + 0x40040) = *(long *)(pTVar17 + 0x40080) + -1;
        UNLOCK();
      }
      embree::MutexSys::lock();
      LOCK();
      *(long *)(this + 0x30) = *(long *)(this + 0x30) + 1;
      UNLOCK();
      LOCK();
      this[0x38] = (TaskScheduler)0x1;
      UNLOCK();
      embree::ConditionSys::notify_all();
      embree::MutexSys::unlock();
      if (param_4) {
        local_48 = (Thread *)this;
        if (this != (TaskScheduler *)0x0) {
          if (*(code **)(*(long *)this + 0x10) == RefCount::refInc) {
            LOCK();
            *(long *)(this + 8) = *(long *)(this + 8) + 1;
            UNLOCK();
          }
          else {
            (**(code **)(*(long *)this + 0x10))(this);
          }
        }
        embree::TaskScheduler::addScheduler((Ref *)&local_48);
        if (local_48 != (Thread *)0x0) {
          if (*(code **)(*(long *)local_48 + 0x18) == RefCount::refDec) {
            LOCK();
            pTVar18 = local_48 + 8;
            *(long *)pTVar18 = *(long *)pTVar18 + -1;
            UNLOCK();
            if (*(long *)pTVar18 == 0) {
              (**(code **)(*(long *)local_48 + 8))();
            }
          }
          else {
            (**(code **)(*(long *)local_48 + 0x18))();
          }
        }
      }
      do {
        cVar15 = embree::TaskScheduler::TaskQueue::execute_local(pTVar21,(Task *)pTVar17);
      } while (cVar15 != '\0');
      LOCK();
      *(long *)(this + 0x30) = *(long *)(this + 0x30) + -1;
      UNLOCK();
      if (param_4) {
        local_48 = (Thread *)this;
        if (this != (TaskScheduler *)0x0) {
          if (*(code **)(*(long *)this + 0x10) == RefCount::refInc) {
            LOCK();
            *(long *)(this + 8) = *(long *)(this + 8) + 1;
            UNLOCK();
          }
          else {
            (**(code **)(*(long *)this + 0x10))(this);
          }
        }
        embree::TaskScheduler::removeScheduler((Ref *)&local_48);
        if (local_48 != (Thread *)0x0) {
          if (*(code **)(*(long *)local_48 + 0x18) == RefCount::refDec) {
            LOCK();
            pTVar1 = (TaskScheduler *)(local_48 + 8);
            *(long *)pTVar1 = *(long *)pTVar1 + -1;
            UNLOCK();
            if (*(long *)pTVar1 == 0) {
              (**(code **)(*(long *)local_48 + 8))();
            }
          }
          else {
            (**(code **)(*(long *)local_48 + 0x18))();
          }
        }
      }
      local_48 = (Thread *)0x0;
      LOCK();
      *(undefined8 *)(lVar16 * 8 + *(long *)(this + 0x10)) = 0;
      UNLOCK();
      embree::TaskScheduler::swapThread(pTVar19);
      pTVar21 = *(Thread **)param_2;
      if (pTVar21 != (Thread *)0x0) {
        local_48 = pTVar21;
        std::__exception_ptr::exception_ptr::_M_addref();
        pTVar21 = local_48;
      }
      LOCK();
      *(long *)(this + 0x28) = *(long *)(this + 0x28) + -1;
      UNLOCK();
      while (*(long *)(this + 0x28) != 0) {
        embree::yield();
      }
      local_48 = *(Thread **)param_2;
      *(undefined8 *)param_2 = 0;
      if (local_48 != (Thread *)0x0) {
        std::__exception_ptr::exception_ptr::_M_release();
      }
      if (pTVar21 == (Thread *)0x0) {
        if (pTVar17 == (Thread *)0x0) {
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            return;
          }
        }
        else {
          plVar6 = *(long **)(pTVar17 + 0xc0108);
          if (plVar6 != (long *)0x0) {
            if (*(code **)(*plVar6 + 0x18) == RefCount::refDec) {
              LOCK();
              plVar2 = plVar6 + 1;
              *plVar2 = *plVar2 + -1;
              UNLOCK();
              if (*plVar2 == 0) {
                (**(code **)(*plVar6 + 8))();
              }
            }
            else {
              (**(code **)(*plVar6 + 0x18))();
            }
          }
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            embree::alignedFree(pTVar17);
            return;
          }
        }
      }
      else {
        local_48 = pTVar21;
        std::__exception_ptr::exception_ptr::_M_addref();
        std::rethrow_exception(&local_48);
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



/* void embree::TaskScheduler::spawn<unsigned long,
   embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleMv<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned long, embree::range<unsigned int>
   const&, embree::FastAllocator::CachedAllocator, bool)::{lambda(embree::range<unsigned long>
   const&)#1}>(unsigned long, unsigned long, unsigned long,
   embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleMv<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned long, embree::range<unsigned int>
   const&, embree::FastAllocator::CachedAllocator, bool)::{lambda(embree::range<unsigned long>
   const&)#1} const&, embree::TaskScheduler::TaskGroupContext*) */

void embree::TaskScheduler::
     spawn<unsigned_long,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMv<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned_long,embree::range<unsigned_int>const&,embree::FastAllocator::CachedAllocator,bool)::_lambda(embree::range<unsigned_long>const&)_1_>
               (ulong param_1,ulong param_2,ulong param_3,
               _lambda_embree__range<unsigned_long>_const___1_ *param_4,TaskGroupContext *param_5)

{
  int *piVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  TaskScheduler *this;
  long in_FS_OFFSET;
  ulong local_68;
  ulong uStack_60;
  ulong local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  TaskGroupContext *local_30;
  long local_20;
  
  uStack_50 = *(undefined8 *)param_4;
  uStack_48 = *(undefined8 *)(param_4 + 8);
  uStack_40 = *(undefined8 *)(param_4 + 0x10);
  uStack_38 = *(undefined8 *)(param_4 + 0x18);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = param_2;
  uStack_60 = param_1;
  local_58 = param_3;
  local_30 = param_5;
  lVar6 = embree::TaskScheduler::thread();
  if (lVar6 == 0) {
    this = (TaskScheduler *)embree::TaskScheduler::instance();
    spawn_root<embree::TaskScheduler::spawn<unsigned_long,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMv<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned_long,embree::range<unsigned_int>const&,embree::FastAllocator::CachedAllocator,bool)::_lambda(embree::range<unsigned_long>const&)_1_>(unsigned_long,unsigned_long,unsigned_long,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMv<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned_long,embree::range<unsigned_int>const&,embree::FastAllocator::CachedAllocator,bool)::_lambda(embree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
              (this,(_lambda___1_ *)&local_68,param_5,param_2 - param_1,true);
LAB_001076f9:
    if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  if (*(ulong *)(lVar6 + 0x40080) < 0x1000) {
    lVar4 = *(long *)(lVar6 + 0xc00c0);
    uVar2 = lVar4 + 0x48 + (ulong)(-(int)lVar4 & 0x3f);
    if (uVar2 < 0x80001) {
      *(ulong *)(lVar6 + 0xc00c0) = uVar2;
      puVar3 = (undefined8 *)(lVar6 + 0x40078 + uVar2);
      *puVar3 = &PTR_execute_001171c8;
      puVar3[1] = local_68;
      puVar3[2] = uStack_60;
      puVar3[3] = local_58;
      puVar3[4] = uStack_50;
      puVar3[5] = uStack_48;
      puVar3[6] = uStack_40;
      puVar3[7] = uStack_38;
      puVar3[8] = local_30;
      lVar7 = *(long *)(lVar6 + 0x40080) * 0x40;
      piVar1 = (int *)(lVar6 + 0x40 + lVar7);
      lVar5 = *(long *)(lVar6 + 0xc0100);
      *(undefined4 *)(lVar6 + 0x44 + lVar7) = 1;
      *(undefined1 *)(lVar6 + 0x48 + lVar7) = 1;
      lVar7 = lVar7 + lVar6;
      *(undefined8 **)(lVar7 + 0x50) = puVar3;
      *(long *)(lVar7 + 0x58) = lVar5;
      *(TaskGroupContext **)(lVar7 + 0x60) = param_5;
      *(long *)(lVar7 + 0x68) = lVar4;
      *(ulong *)(lVar7 + 0x70) = param_2 - param_1;
      if (lVar5 != 0) {
        LOCK();
        *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + 1;
        UNLOCK();
      }
      LOCK();
      if (*piVar1 == 0) {
        *piVar1 = 1;
      }
      UNLOCK();
      LOCK();
      *(long *)(lVar6 + 0x40080) = *(long *)(lVar6 + 0x40080) + 1;
      UNLOCK();
      if (*(long *)(lVar6 + 0x40080) - 1U <= *(ulong *)(lVar6 + 0x40040)) {
        LOCK();
        *(long *)(lVar6 + 0x40040) = *(long *)(lVar6 + 0x40080) + -1;
        UNLOCK();
      }
      goto LAB_001076f9;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



/* WARNING: Removing unreachable block (ram,0x00107b35) */
/* void embree::TaskScheduler::spawn_root<embree::TaskScheduler::spawn<unsigned long,
   embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleM<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned long, embree::range<unsigned int>
   const&, embree::FastAllocator::CachedAllocator, bool)::{lambda(embree::range<unsigned long>
   const&)#1}>(unsigned long, unsigned long, unsigned long,
   embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleM<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned long, embree::range<unsigned int>
   const&, embree::FastAllocator::CachedAllocator, bool)::{lambda(embree::range<unsigned long>
   const&)#1} const&,
   embree::TaskScheduler::TaskGroupContext*)::{lambda()#1}>(embree::TaskScheduler::spawn<unsigned
   long, embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleM<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned long, embree::range<unsigned int>
   const&, embree::FastAllocator::CachedAllocator, bool)::{lambda(embree::range<unsigned long>
   const&)#1}>(unsigned long, unsigned long, unsigned long,
   embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleM<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned long, embree::range<unsigned int>
   const&, embree::FastAllocator::CachedAllocator, bool)::{lambda(embree::range<unsigned long>
   const&)#1} const&, embree::TaskScheduler::TaskGroupContext*)::{lambda()#1} const&,
   embree::TaskScheduler::TaskGroupContext*, unsigned long, bool) */

void __thiscall
embree::TaskScheduler::
spawn_root<embree::TaskScheduler::spawn<unsigned_long,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleM<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned_long,embree::range<unsigned_int>const&,embree::FastAllocator::CachedAllocator,bool)::_lambda(embree::range<unsigned_long>const&)_1_>(unsigned_long,unsigned_long,unsigned_long,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleM<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned_long,embree::range<unsigned_int>const&,embree::FastAllocator::CachedAllocator,bool)::_lambda(embree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
          (TaskScheduler *this,_lambda___1_ *param_1,TaskGroupContext *param_2,ulong param_3,
          bool param_4)

{
  TaskScheduler *pTVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  char cVar15;
  long lVar16;
  Thread *pTVar17;
  Thread *pTVar18;
  Thread *pTVar19;
  long lVar20;
  Thread *pTVar21;
  long in_FS_OFFSET;
  Thread *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_4) {
    embree::TaskScheduler::startThreads();
  }
  lVar16 = embree::TaskScheduler::allocThreadIndex();
  pTVar17 = (Thread *)embree::alignedMalloc(0xc0140,0x40);
  if (this != (TaskScheduler *)0x0) {
    if (*(code **)(*(long *)this + 0x10) == RefCount::refInc) {
      LOCK();
      *(long *)(this + 8) = *(long *)(this + 8) + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*(long *)this + 0x10))(this);
    }
  }
  *(long *)pTVar17 = lVar16;
  pTVar21 = pTVar17 + 0x40;
  pTVar19 = pTVar21;
  do {
    *(undefined4 *)pTVar19 = 0;
    pTVar18 = pTVar19 + 0x80;
    *(undefined4 *)(pTVar19 + 0x40) = 0;
    pTVar19 = pTVar18;
  } while (pTVar17 + 0x40040 != pTVar18);
  *(undefined8 *)(pTVar17 + 0x40040) = 0;
  *(undefined8 *)(pTVar17 + 0x40080) = 0;
  *(undefined8 *)(pTVar17 + 0xc00c0) = 0;
  *(undefined8 *)(pTVar17 + 0xc0100) = 0;
  *(TaskScheduler **)(pTVar17 + 0xc0108) = this;
  if (this != (TaskScheduler *)0x0) {
    if (*(code **)(*(long *)this + 0x10) == RefCount::refInc) {
      LOCK();
      *(long *)(this + 8) = *(long *)(this + 8) + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*(long *)this + 0x10))(this);
    }
    if (*(code **)(*(long *)this + 0x18) == RefCount::refDec) {
      LOCK();
      pTVar1 = this + 8;
      *(long *)pTVar1 = *(long *)pTVar1 + -1;
      UNLOCK();
      if (*(long *)pTVar1 == 0) {
        (**(code **)(*(long *)this + 8))(this);
      }
    }
    else {
      (**(code **)(*(long *)this + 0x18))(this);
    }
  }
  LOCK();
  *(Thread **)(*(long *)(this + 0x10) + lVar16 * 8) = pTVar17;
  UNLOCK();
  local_48 = pTVar17;
  pTVar19 = (Thread *)embree::TaskScheduler::swapThread(pTVar17);
  if (*(ulong *)(pTVar17 + 0x40080) < 0x1000) {
    lVar4 = *(long *)(pTVar17 + 0xc00c0);
    uVar3 = lVar4 + 0x48 + (ulong)(-(int)lVar4 & 0x3f);
    if (uVar3 < 0x80001) {
      *(ulong *)(pTVar17 + 0xc00c0) = uVar3;
      pTVar18 = pTVar17 + uVar3 + 0x40078;
      uVar7 = *(undefined8 *)param_1;
      uVar8 = *(undefined8 *)(param_1 + 8);
      uVar9 = *(undefined8 *)(param_1 + 0x10);
      uVar10 = *(undefined8 *)(param_1 + 0x18);
      uVar11 = *(undefined8 *)(param_1 + 0x20);
      uVar12 = *(undefined8 *)(param_1 + 0x28);
      *(undefined ***)pTVar18 = &PTR_execute_001171e0;
      uVar13 = *(undefined8 *)(param_1 + 0x30);
      uVar14 = *(undefined8 *)(param_1 + 0x38);
      *(undefined8 *)(pTVar18 + 8) = uVar7;
      *(undefined8 *)(pTVar18 + 0x10) = uVar8;
      *(undefined8 *)(pTVar18 + 0x18) = uVar9;
      *(undefined8 *)(pTVar18 + 0x20) = uVar10;
      *(undefined8 *)(pTVar18 + 0x28) = uVar11;
      *(undefined8 *)(pTVar18 + 0x30) = uVar12;
      *(undefined8 *)(pTVar18 + 0x38) = uVar13;
      *(undefined8 *)(pTVar18 + 0x40) = uVar14;
      lVar20 = *(long *)(pTVar17 + 0x40080) * 0x40;
      lVar5 = *(long *)(pTVar17 + 0xc0100);
      pTVar17[lVar20 + 0x48] = (Thread)0x1;
      *(undefined4 *)(pTVar17 + lVar20 + 0x44) = 1;
      *(Thread **)(pTVar17 + lVar20 + 0x50) = pTVar18;
      *(long *)(pTVar17 + lVar20 + 0x58) = lVar5;
      *(TaskGroupContext **)(pTVar17 + lVar20 + 0x60) = param_2;
      *(long *)(pTVar17 + lVar20 + 0x68) = lVar4;
      *(ulong *)(pTVar17 + lVar20 + 0x70) = param_3;
      if (lVar5 != 0) {
        LOCK();
        *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + 1;
        UNLOCK();
      }
      LOCK();
      if (*(int *)(pTVar21 + lVar20) == 0) {
        *(undefined4 *)(pTVar21 + lVar20) = 1;
      }
      UNLOCK();
      LOCK();
      *(long *)(pTVar17 + 0x40080) = *(long *)(pTVar17 + 0x40080) + 1;
      UNLOCK();
      if (*(long *)(pTVar17 + 0x40080) - 1U <= *(ulong *)(pTVar17 + 0x40040)) {
        LOCK();
        *(long *)(pTVar17 + 0x40040) = *(long *)(pTVar17 + 0x40080) + -1;
        UNLOCK();
      }
      embree::MutexSys::lock();
      LOCK();
      *(long *)(this + 0x30) = *(long *)(this + 0x30) + 1;
      UNLOCK();
      LOCK();
      this[0x38] = (TaskScheduler)0x1;
      UNLOCK();
      embree::ConditionSys::notify_all();
      embree::MutexSys::unlock();
      if (param_4) {
        local_48 = (Thread *)this;
        if (this != (TaskScheduler *)0x0) {
          if (*(code **)(*(long *)this + 0x10) == RefCount::refInc) {
            LOCK();
            *(long *)(this + 8) = *(long *)(this + 8) + 1;
            UNLOCK();
          }
          else {
            (**(code **)(*(long *)this + 0x10))(this);
          }
        }
        embree::TaskScheduler::addScheduler((Ref *)&local_48);
        if (local_48 != (Thread *)0x0) {
          if (*(code **)(*(long *)local_48 + 0x18) == RefCount::refDec) {
            LOCK();
            pTVar18 = local_48 + 8;
            *(long *)pTVar18 = *(long *)pTVar18 + -1;
            UNLOCK();
            if (*(long *)pTVar18 == 0) {
              (**(code **)(*(long *)local_48 + 8))();
            }
          }
          else {
            (**(code **)(*(long *)local_48 + 0x18))();
          }
        }
      }
      do {
        cVar15 = embree::TaskScheduler::TaskQueue::execute_local(pTVar21,(Task *)pTVar17);
      } while (cVar15 != '\0');
      LOCK();
      *(long *)(this + 0x30) = *(long *)(this + 0x30) + -1;
      UNLOCK();
      if (param_4) {
        local_48 = (Thread *)this;
        if (this != (TaskScheduler *)0x0) {
          if (*(code **)(*(long *)this + 0x10) == RefCount::refInc) {
            LOCK();
            *(long *)(this + 8) = *(long *)(this + 8) + 1;
            UNLOCK();
          }
          else {
            (**(code **)(*(long *)this + 0x10))(this);
          }
        }
        embree::TaskScheduler::removeScheduler((Ref *)&local_48);
        if (local_48 != (Thread *)0x0) {
          if (*(code **)(*(long *)local_48 + 0x18) == RefCount::refDec) {
            LOCK();
            pTVar1 = (TaskScheduler *)(local_48 + 8);
            *(long *)pTVar1 = *(long *)pTVar1 + -1;
            UNLOCK();
            if (*(long *)pTVar1 == 0) {
              (**(code **)(*(long *)local_48 + 8))();
            }
          }
          else {
            (**(code **)(*(long *)local_48 + 0x18))();
          }
        }
      }
      local_48 = (Thread *)0x0;
      LOCK();
      *(undefined8 *)(lVar16 * 8 + *(long *)(this + 0x10)) = 0;
      UNLOCK();
      embree::TaskScheduler::swapThread(pTVar19);
      pTVar21 = *(Thread **)param_2;
      if (pTVar21 != (Thread *)0x0) {
        local_48 = pTVar21;
        std::__exception_ptr::exception_ptr::_M_addref();
        pTVar21 = local_48;
      }
      LOCK();
      *(long *)(this + 0x28) = *(long *)(this + 0x28) + -1;
      UNLOCK();
      while (*(long *)(this + 0x28) != 0) {
        embree::yield();
      }
      local_48 = *(Thread **)param_2;
      *(undefined8 *)param_2 = 0;
      if (local_48 != (Thread *)0x0) {
        std::__exception_ptr::exception_ptr::_M_release();
      }
      if (pTVar21 == (Thread *)0x0) {
        if (pTVar17 == (Thread *)0x0) {
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            return;
          }
        }
        else {
          plVar6 = *(long **)(pTVar17 + 0xc0108);
          if (plVar6 != (long *)0x0) {
            if (*(code **)(*plVar6 + 0x18) == RefCount::refDec) {
              LOCK();
              plVar2 = plVar6 + 1;
              *plVar2 = *plVar2 + -1;
              UNLOCK();
              if (*plVar2 == 0) {
                (**(code **)(*plVar6 + 8))();
              }
            }
            else {
              (**(code **)(*plVar6 + 0x18))();
            }
          }
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            embree::alignedFree(pTVar17);
            return;
          }
        }
      }
      else {
        local_48 = pTVar21;
        std::__exception_ptr::exception_ptr::_M_addref();
        std::rethrow_exception(&local_48);
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



/* void embree::TaskScheduler::spawn<unsigned long,
   embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleM<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned long, embree::range<unsigned int>
   const&, embree::FastAllocator::CachedAllocator, bool)::{lambda(embree::range<unsigned long>
   const&)#1}>(unsigned long, unsigned long, unsigned long,
   embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleM<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned long, embree::range<unsigned int>
   const&, embree::FastAllocator::CachedAllocator, bool)::{lambda(embree::range<unsigned long>
   const&)#1} const&, embree::TaskScheduler::TaskGroupContext*) */

void embree::TaskScheduler::
     spawn<unsigned_long,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleM<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned_long,embree::range<unsigned_int>const&,embree::FastAllocator::CachedAllocator,bool)::_lambda(embree::range<unsigned_long>const&)_1_>
               (ulong param_1,ulong param_2,ulong param_3,
               _lambda_embree__range<unsigned_long>_const___1_ *param_4,TaskGroupContext *param_5)

{
  int *piVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  TaskScheduler *this;
  long in_FS_OFFSET;
  ulong local_68;
  ulong uStack_60;
  ulong local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  TaskGroupContext *local_30;
  long local_20;
  
  uStack_50 = *(undefined8 *)param_4;
  uStack_48 = *(undefined8 *)(param_4 + 8);
  uStack_40 = *(undefined8 *)(param_4 + 0x10);
  uStack_38 = *(undefined8 *)(param_4 + 0x18);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = param_2;
  uStack_60 = param_1;
  local_58 = param_3;
  local_30 = param_5;
  lVar6 = embree::TaskScheduler::thread();
  if (lVar6 == 0) {
    this = (TaskScheduler *)embree::TaskScheduler::instance();
    spawn_root<embree::TaskScheduler::spawn<unsigned_long,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleM<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned_long,embree::range<unsigned_int>const&,embree::FastAllocator::CachedAllocator,bool)::_lambda(embree::range<unsigned_long>const&)_1_>(unsigned_long,unsigned_long,unsigned_long,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleM<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned_long,embree::range<unsigned_int>const&,embree::FastAllocator::CachedAllocator,bool)::_lambda(embree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
              (this,(_lambda___1_ *)&local_68,param_5,param_2 - param_1,true);
LAB_00107de9:
    if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  if (*(ulong *)(lVar6 + 0x40080) < 0x1000) {
    lVar4 = *(long *)(lVar6 + 0xc00c0);
    uVar2 = lVar4 + 0x48 + (ulong)(-(int)lVar4 & 0x3f);
    if (uVar2 < 0x80001) {
      *(ulong *)(lVar6 + 0xc00c0) = uVar2;
      puVar3 = (undefined8 *)(lVar6 + 0x40078 + uVar2);
      *puVar3 = &PTR_execute_001171e0;
      puVar3[1] = local_68;
      puVar3[2] = uStack_60;
      puVar3[3] = local_58;
      puVar3[4] = uStack_50;
      puVar3[5] = uStack_48;
      puVar3[6] = uStack_40;
      puVar3[7] = uStack_38;
      puVar3[8] = local_30;
      lVar7 = *(long *)(lVar6 + 0x40080) * 0x40;
      piVar1 = (int *)(lVar6 + 0x40 + lVar7);
      lVar5 = *(long *)(lVar6 + 0xc0100);
      *(undefined4 *)(lVar6 + 0x44 + lVar7) = 1;
      *(undefined1 *)(lVar6 + 0x48 + lVar7) = 1;
      lVar7 = lVar7 + lVar6;
      *(undefined8 **)(lVar7 + 0x50) = puVar3;
      *(long *)(lVar7 + 0x58) = lVar5;
      *(TaskGroupContext **)(lVar7 + 0x60) = param_5;
      *(long *)(lVar7 + 0x68) = lVar4;
      *(ulong *)(lVar7 + 0x70) = param_2 - param_1;
      if (lVar5 != 0) {
        LOCK();
        *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + 1;
        UNLOCK();
      }
      LOCK();
      if (*piVar1 == 0) {
        *piVar1 = 1;
      }
      UNLOCK();
      LOCK();
      *(long *)(lVar6 + 0x40080) = *(long *)(lVar6 + 0x40080) + 1;
      UNLOCK();
      if (*(long *)(lVar6 + 0x40080) - 1U <= *(ulong *)(lVar6 + 0x40040)) {
        LOCK();
        *(long *)(lVar6 + 0x40040) = *(long *)(lVar6 + 0x40080) + -1;
        UNLOCK();
      }
      goto LAB_00107de9;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__insertion_sort<embree::sse2::BVHBuilderMorton::BuildPrim*,
   __gnu_cxx::__ops::_Iter_comp_iter<bool (*)(embree::sse2::BVHBuilderMorton::BuildPrim const&,
   embree::sse2::BVHBuilderMorton::BuildPrim const&)> >(embree::sse2::BVHBuilderMorton::BuildPrim*,
   embree::sse2::BVHBuilderMorton::BuildPrim*, __gnu_cxx::__ops::_Iter_comp_iter<bool
   (*)(embree::sse2::BVHBuilderMorton::BuildPrim const&, embree::sse2::BVHBuilderMorton::BuildPrim
   const&)>) */

void std::
     __insertion_sort<embree::sse2::BVHBuilderMorton::BuildPrim*,__gnu_cxx::__ops::_Iter_comp_iter<bool(*)(embree::sse2::BVHBuilderMorton::BuildPrim_const&,embree::sse2::BVHBuilderMorton::BuildPrim_const&)>>
               (undefined8 *param_1,undefined8 *param_2,code *param_3)

{
  undefined8 uVar1;
  char cVar2;
  size_t __n;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long in_FS_OFFSET;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != param_2) {
    puVar4 = param_1 + 1;
    while (param_2 != puVar4) {
      while( true ) {
        cVar2 = (*param_3)(puVar4,param_1);
        puVar5 = puVar4 + 1;
        if (cVar2 != '\0') break;
        local_48 = *puVar4;
        while( true ) {
          puVar3 = puVar4 + -1;
          cVar2 = (*param_3)(&local_48,puVar3);
          if (cVar2 == '\0') break;
          *puVar4 = *puVar3;
          puVar4 = puVar3;
        }
        *puVar4 = local_48;
        puVar4 = puVar5;
        if (param_2 == puVar5) goto LAB_00107f05;
      }
      uVar1 = *puVar4;
      __n = (long)puVar4 - (long)param_1;
      if ((long)__n < 9) {
        if (__n == 8) {
          *puVar4 = *param_1;
        }
      }
      else {
        memmove((void *)((long)puVar4 + (8 - __n)),param_1,__n);
      }
      *param_1 = uVar1;
      puVar4 = puVar5;
    }
  }
LAB_00107f05:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x00108315) */
/* void embree::TaskScheduler::spawn_root<embree::TaskScheduler::spawn<unsigned int,
   embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleMi<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned int>
   const&) const::{lambda(embree::range<unsigned int> const&)#2}>(unsigned int, unsigned int,
   unsigned int,
   embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleMi<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned int>
   const&) const::{lambda(embree::range<unsigned int> const&)#2} const&,
   embree::TaskScheduler::TaskGroupContext*)::{lambda()#1}>(embree::TaskScheduler::spawn<unsigned
   int, embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleMi<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned int>
   const&) const::{lambda(embree::range<unsigned int> const&)#2}>(unsigned int, unsigned int,
   unsigned int,
   embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleMi<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned int>
   const&) const::{lambda(embree::range<unsigned int> const&)#2} const&,
   embree::TaskScheduler::TaskGroupContext*)::{lambda()#1} const&,
   embree::TaskScheduler::TaskGroupContext*, unsigned long, bool) */

void __thiscall
embree::TaskScheduler::
spawn_root<embree::TaskScheduler::spawn<unsigned_int,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMi<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned_int>const&)const::_lambda(embree::range<unsigned_int>const&)_2_>(unsigned_int,unsigned_int,unsigned_int,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMi<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned_int>const&)const::_lambda(embree::range<unsigned_int>const&)_2_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
          (TaskScheduler *this,_lambda___1_ *param_1,TaskGroupContext *param_2,ulong param_3,
          bool param_4)

{
  TaskScheduler *pTVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  char cVar12;
  long lVar13;
  Thread *pTVar14;
  Thread *pTVar15;
  Thread *pTVar16;
  long lVar17;
  Thread *pTVar18;
  long in_FS_OFFSET;
  Thread *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_4) {
    embree::TaskScheduler::startThreads();
  }
  lVar13 = embree::TaskScheduler::allocThreadIndex();
  pTVar14 = (Thread *)embree::alignedMalloc(0xc0140,0x40);
  if (this != (TaskScheduler *)0x0) {
    if (*(code **)(*(long *)this + 0x10) == RefCount::refInc) {
      LOCK();
      *(long *)(this + 8) = *(long *)(this + 8) + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*(long *)this + 0x10))(this);
    }
  }
  *(long *)pTVar14 = lVar13;
  pTVar18 = pTVar14 + 0x40;
  pTVar16 = pTVar18;
  do {
    *(undefined4 *)pTVar16 = 0;
    pTVar15 = pTVar16 + 0x80;
    *(undefined4 *)(pTVar16 + 0x40) = 0;
    pTVar16 = pTVar15;
  } while (pTVar14 + 0x40040 != pTVar15);
  *(undefined8 *)(pTVar14 + 0x40040) = 0;
  *(undefined8 *)(pTVar14 + 0x40080) = 0;
  *(undefined8 *)(pTVar14 + 0xc00c0) = 0;
  *(undefined8 *)(pTVar14 + 0xc0100) = 0;
  *(TaskScheduler **)(pTVar14 + 0xc0108) = this;
  if (this != (TaskScheduler *)0x0) {
    if (*(code **)(*(long *)this + 0x10) == RefCount::refInc) {
      LOCK();
      *(long *)(this + 8) = *(long *)(this + 8) + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*(long *)this + 0x10))(this);
    }
    if (*(code **)(*(long *)this + 0x18) == RefCount::refDec) {
      LOCK();
      pTVar1 = this + 8;
      *(long *)pTVar1 = *(long *)pTVar1 + -1;
      UNLOCK();
      if (*(long *)pTVar1 == 0) {
        (**(code **)(*(long *)this + 8))(this);
      }
    }
    else {
      (**(code **)(*(long *)this + 0x18))(this);
    }
  }
  LOCK();
  *(Thread **)(*(long *)(this + 0x10) + lVar13 * 8) = pTVar14;
  UNLOCK();
  local_48 = pTVar14;
  pTVar16 = (Thread *)embree::TaskScheduler::swapThread(pTVar14);
  if (*(ulong *)(pTVar14 + 0x40080) < 0x1000) {
    lVar4 = *(long *)(pTVar14 + 0xc00c0);
    uVar3 = lVar4 + 0x30 + (ulong)(-(int)lVar4 & 0x3f);
    if (uVar3 < 0x80001) {
      *(ulong *)(pTVar14 + 0xc00c0) = uVar3;
      pTVar15 = pTVar14 + uVar3 + 0x40090;
      uVar8 = *(undefined8 *)param_1;
      uVar9 = *(undefined8 *)(param_1 + 8);
      *(undefined ***)pTVar15 = &PTR_execute_001171f8;
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      uVar10 = *(undefined8 *)(param_1 + 0x10);
      uVar11 = *(undefined8 *)(param_1 + 0x18);
      *(undefined8 *)(pTVar15 + 8) = uVar8;
      *(undefined8 *)(pTVar15 + 0x10) = uVar9;
      *(undefined8 *)(pTVar15 + 0x28) = uVar5;
      *(undefined8 *)(pTVar15 + 0x18) = uVar10;
      *(undefined8 *)(pTVar15 + 0x20) = uVar11;
      lVar17 = *(long *)(pTVar14 + 0x40080) * 0x40;
      lVar6 = *(long *)(pTVar14 + 0xc0100);
      pTVar14[lVar17 + 0x48] = (Thread)0x1;
      *(undefined4 *)(pTVar14 + lVar17 + 0x44) = 1;
      *(Thread **)(pTVar14 + lVar17 + 0x50) = pTVar15;
      *(long *)(pTVar14 + lVar17 + 0x58) = lVar6;
      *(TaskGroupContext **)(pTVar14 + lVar17 + 0x60) = param_2;
      *(long *)(pTVar14 + lVar17 + 0x68) = lVar4;
      *(ulong *)(pTVar14 + lVar17 + 0x70) = param_3;
      if (lVar6 != 0) {
        LOCK();
        *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
        UNLOCK();
      }
      LOCK();
      if (*(int *)(pTVar18 + lVar17) == 0) {
        *(undefined4 *)(pTVar18 + lVar17) = 1;
      }
      UNLOCK();
      LOCK();
      *(long *)(pTVar14 + 0x40080) = *(long *)(pTVar14 + 0x40080) + 1;
      UNLOCK();
      if (*(long *)(pTVar14 + 0x40080) - 1U <= *(ulong *)(pTVar14 + 0x40040)) {
        LOCK();
        *(long *)(pTVar14 + 0x40040) = *(long *)(pTVar14 + 0x40080) + -1;
        UNLOCK();
      }
      embree::MutexSys::lock();
      LOCK();
      *(long *)(this + 0x30) = *(long *)(this + 0x30) + 1;
      UNLOCK();
      LOCK();
      this[0x38] = (TaskScheduler)0x1;
      UNLOCK();
      embree::ConditionSys::notify_all();
      embree::MutexSys::unlock();
      if (param_4) {
        local_48 = (Thread *)this;
        if (this != (TaskScheduler *)0x0) {
          if (*(code **)(*(long *)this + 0x10) == RefCount::refInc) {
            LOCK();
            *(long *)(this + 8) = *(long *)(this + 8) + 1;
            UNLOCK();
          }
          else {
            (**(code **)(*(long *)this + 0x10))(this);
          }
        }
        embree::TaskScheduler::addScheduler((Ref *)&local_48);
        if (local_48 != (Thread *)0x0) {
          if (*(code **)(*(long *)local_48 + 0x18) == RefCount::refDec) {
            LOCK();
            pTVar15 = local_48 + 8;
            *(long *)pTVar15 = *(long *)pTVar15 + -1;
            UNLOCK();
            if (*(long *)pTVar15 == 0) {
              (**(code **)(*(long *)local_48 + 8))();
            }
          }
          else {
            (**(code **)(*(long *)local_48 + 0x18))();
          }
        }
      }
      do {
        cVar12 = embree::TaskScheduler::TaskQueue::execute_local(pTVar18,(Task *)pTVar14);
      } while (cVar12 != '\0');
      LOCK();
      *(long *)(this + 0x30) = *(long *)(this + 0x30) + -1;
      UNLOCK();
      if (param_4) {
        local_48 = (Thread *)this;
        if (this != (TaskScheduler *)0x0) {
          if (*(code **)(*(long *)this + 0x10) == RefCount::refInc) {
            LOCK();
            *(long *)(this + 8) = *(long *)(this + 8) + 1;
            UNLOCK();
          }
          else {
            (**(code **)(*(long *)this + 0x10))(this);
          }
        }
        embree::TaskScheduler::removeScheduler((Ref *)&local_48);
        if (local_48 != (Thread *)0x0) {
          if (*(code **)(*(long *)local_48 + 0x18) == RefCount::refDec) {
            LOCK();
            pTVar1 = (TaskScheduler *)(local_48 + 8);
            *(long *)pTVar1 = *(long *)pTVar1 + -1;
            UNLOCK();
            if (*(long *)pTVar1 == 0) {
              (**(code **)(*(long *)local_48 + 8))();
            }
          }
          else {
            (**(code **)(*(long *)local_48 + 0x18))();
          }
        }
      }
      local_48 = (Thread *)0x0;
      LOCK();
      *(undefined8 *)(lVar13 * 8 + *(long *)(this + 0x10)) = 0;
      UNLOCK();
      embree::TaskScheduler::swapThread(pTVar16);
      pTVar18 = *(Thread **)param_2;
      if (pTVar18 != (Thread *)0x0) {
        local_48 = pTVar18;
        std::__exception_ptr::exception_ptr::_M_addref();
        pTVar18 = local_48;
      }
      LOCK();
      *(long *)(this + 0x28) = *(long *)(this + 0x28) + -1;
      UNLOCK();
      while (*(long *)(this + 0x28) != 0) {
        embree::yield();
      }
      local_48 = *(Thread **)param_2;
      *(undefined8 *)param_2 = 0;
      if (local_48 != (Thread *)0x0) {
        std::__exception_ptr::exception_ptr::_M_release();
      }
      if (pTVar18 == (Thread *)0x0) {
        if (pTVar14 == (Thread *)0x0) {
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            return;
          }
        }
        else {
          plVar7 = *(long **)(pTVar14 + 0xc0108);
          if (plVar7 != (long *)0x0) {
            if (*(code **)(*plVar7 + 0x18) == RefCount::refDec) {
              LOCK();
              plVar2 = plVar7 + 1;
              *plVar2 = *plVar2 + -1;
              UNLOCK();
              if (*plVar2 == 0) {
                (**(code **)(*plVar7 + 8))();
              }
            }
            else {
              (**(code **)(*plVar7 + 0x18))();
            }
          }
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            embree::alignedFree(pTVar14);
            return;
          }
        }
      }
      else {
        local_48 = pTVar18;
        std::__exception_ptr::exception_ptr::_M_addref();
        std::rethrow_exception(&local_48);
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::TaskScheduler::ClosureTaskFunction<embree::TaskScheduler::spawn<unsigned int,
   embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleMi<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned int>
   const&) const::{lambda(embree::range<unsigned int> const&)#2}>(unsigned int, unsigned int,
   unsigned int,
   embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleMi<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned int>
   const&) const::{lambda(embree::range<unsigned int> const&)#2} const&,
   embree::TaskScheduler::TaskGroupContext*)::{lambda()#1}>::execute() */

void __thiscall
embree::TaskScheduler::
ClosureTaskFunction<embree::TaskScheduler::spawn<unsigned_int,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMi<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned_int>const&)const::{lambda(embree::range<unsigned_int>const&)#2}>(unsigned_int,unsigned_int,unsigned_int,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMi<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned_int>const&)const::{lambda(embree::range<unsigned_int>const&)#2}const&,embree::TaskScheduler::TaskGroupContext*)::{lambda()#1}>
::execute(ClosureTaskFunction<embree::TaskScheduler::spawn<unsigned_int,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMi<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned_int>const&)const::_lambda(embree::range<unsigned_int>const&)_2_>(unsigned_int,unsigned_int,unsigned_int,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMi<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned_int>const&)const::_lambda(embree::range<unsigned_int>const&)_2_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
          *this)

{
  int *piVar1;
  uint *puVar2;
  undefined8 *puVar3;
  undefined1 auVar4 [16];
  TaskGroupContext *pTVar5;
  long lVar6;
  long lVar7;
  float *pfVar8;
  long lVar9;
  long lVar10;
  uint *puVar11;
  TaskScheduler *pTVar12;
  ulong uVar13;
  uint uVar14;
  uint uVar15;
  long in_FS_OFFSET;
  uint uVar18;
  uint uVar19;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar20 [16];
  int local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  TaskGroupContext *local_68;
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  TaskGroupContext *local_38;
  long local_30;
  
  uVar15 = *(uint *)(this + 8);
  uVar14 = *(uint *)(this + 0xc);
  uVar13 = (ulong)uVar14;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(uint *)(this + 0x10) < uVar15 - uVar14) {
    uStack_40 = *(undefined8 *)(this + 0x20);
    pTVar5 = *(TaskGroupContext **)(this + 0x28);
    local_48 = *(undefined8 *)(this + 0x18);
    uVar15 = uVar15 + uVar14 >> 1;
    local_58 = uVar15;
    uStack_54 = uVar14;
    uStack_50 = *(uint *)(this + 0x10);
    local_38 = pTVar5;
    lVar9 = embree::TaskScheduler::thread();
    if (lVar9 == 0) {
      pTVar12 = (TaskScheduler *)embree::TaskScheduler::instance();
      spawn_root<embree::TaskScheduler::spawn<unsigned_int,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMi<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned_int>const&)const::_lambda(embree::range<unsigned_int>const&)_2_>(unsigned_int,unsigned_int,unsigned_int,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMi<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned_int>const&)const::_lambda(embree::range<unsigned_int>const&)_2_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
                (pTVar12,(_lambda___1_ *)&local_58,pTVar5,(ulong)(uVar15 - uVar14),true);
    }
    else {
      if (0xfff < *(ulong *)(lVar9 + 0x40080)) goto LAB_0010892e;
      lVar6 = *(long *)(lVar9 + 0xc00c0);
      uVar13 = lVar6 + 0x30 + (ulong)(-(int)lVar6 & 0x3f);
      if (0x80000 < uVar13) goto LAB_0010892e;
      *(ulong *)(lVar9 + 0xc00c0) = uVar13;
      puVar3 = (undefined8 *)(lVar9 + 0x40090 + uVar13);
      *puVar3 = &PTR_execute_001171f8;
      puVar3[1] = CONCAT44(uStack_54,local_58);
      puVar3[2] = CONCAT44(uStack_4c,uStack_50);
      puVar3[5] = local_38;
      puVar3[3] = local_48;
      puVar3[4] = uStack_40;
      lVar10 = *(long *)(lVar9 + 0x40080) * 0x40;
      piVar1 = (int *)(lVar9 + 0x40 + lVar10);
      lVar7 = *(long *)(lVar9 + 0xc0100);
      *(undefined4 *)(lVar9 + 0x44 + lVar10) = 1;
      *(undefined1 *)(lVar9 + 0x48 + lVar10) = 1;
      lVar10 = lVar10 + lVar9;
      *(undefined8 **)(lVar10 + 0x50) = puVar3;
      *(long *)(lVar10 + 0x58) = lVar7;
      *(TaskGroupContext **)(lVar10 + 0x60) = pTVar5;
      *(long *)(lVar10 + 0x68) = lVar6;
      *(ulong *)(lVar10 + 0x70) = (ulong)(uVar15 - uVar14);
      if (lVar7 != 0) {
        LOCK();
        *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
        UNLOCK();
      }
      LOCK();
      if (*piVar1 == 0) {
        *piVar1 = 1;
      }
      UNLOCK();
      LOCK();
      *(long *)(lVar9 + 0x40080) = *(long *)(lVar9 + 0x40080) + 1;
      UNLOCK();
      if (*(long *)(lVar9 + 0x40080) - 1U <= *(ulong *)(lVar9 + 0x40040)) {
        LOCK();
        *(long *)(lVar9 + 0x40040) = *(long *)(lVar9 + 0x40080) + -1;
        UNLOCK();
      }
    }
    uStack_70 = *(undefined8 *)(this + 0x20);
    pTVar5 = *(TaskGroupContext **)(this + 0x28);
    uStack_80 = *(undefined4 *)(this + 0x10);
    local_88 = *(int *)(this + 8);
    local_78 = *(undefined8 *)(this + 0x18);
    uVar14 = local_88 - uVar15;
    uStack_84 = uVar15;
    local_68 = pTVar5;
    lVar9 = embree::TaskScheduler::thread();
    if (lVar9 == 0) {
      pTVar12 = (TaskScheduler *)embree::TaskScheduler::instance();
      spawn_root<embree::TaskScheduler::spawn<unsigned_int,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMi<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned_int>const&)const::_lambda(embree::range<unsigned_int>const&)_2_>(unsigned_int,unsigned_int,unsigned_int,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMi<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned_int>const&)const::_lambda(embree::range<unsigned_int>const&)_2_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
                (pTVar12,(_lambda___1_ *)&local_88,pTVar5,(ulong)uVar14,true);
    }
    else {
      if (0xfff < *(ulong *)(lVar9 + 0x40080)) {
LAB_0010892e:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar6 = *(long *)(lVar9 + 0xc00c0);
      uVar13 = lVar6 + 0x30 + (ulong)(-(int)lVar6 & 0x3f);
      if (0x80000 < uVar13) goto LAB_0010892e;
      *(ulong *)(lVar9 + 0xc00c0) = uVar13;
      puVar3 = (undefined8 *)(lVar9 + 0x40090 + uVar13);
      *puVar3 = &PTR_execute_001171f8;
      puVar3[1] = CONCAT44(uStack_84,local_88);
      puVar3[2] = CONCAT44(uStack_7c,uStack_80);
      puVar3[5] = local_68;
      puVar3[3] = local_78;
      puVar3[4] = uStack_70;
      lVar10 = *(long *)(lVar9 + 0x40080) * 0x40;
      piVar1 = (int *)(lVar9 + 0x40 + lVar10);
      lVar7 = *(long *)(lVar9 + 0xc0100);
      *(undefined4 *)(lVar9 + 0x44 + lVar10) = 1;
      *(undefined1 *)(lVar9 + 0x48 + lVar10) = 1;
      lVar10 = lVar10 + lVar9;
      *(undefined8 **)(lVar10 + 0x50) = puVar3;
      *(long *)(lVar10 + 0x58) = lVar7;
      *(TaskGroupContext **)(lVar10 + 0x60) = pTVar5;
      *(long *)(lVar10 + 0x68) = lVar6;
      *(ulong *)(lVar10 + 0x70) = (ulong)uVar14;
      if (lVar7 != 0) {
        LOCK();
        *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
        UNLOCK();
      }
      LOCK();
      if (*piVar1 == 0) {
        *piVar1 = 1;
      }
      UNLOCK();
      LOCK();
      *(long *)(lVar9 + 0x40080) = *(long *)(lVar9 + 0x40080) + 1;
      UNLOCK();
      if (*(long *)(lVar9 + 0x40080) - 1U <= *(ulong *)(lVar9 + 0x40040)) {
        LOCK();
        *(long *)(lVar9 + 0x40040) = *(long *)(lVar9 + 0x40080) + -1;
        UNLOCK();
      }
    }
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      embree::TaskScheduler::wait();
      return;
    }
  }
  else {
    if (uVar13 < uVar15) {
      do {
        pfVar8 = *(float **)(this + 0x20);
        puVar2 = (uint *)(*(long *)(*(long *)(this + 0x18) + 0x58) + uVar13 * 8);
        lVar9 = **(long **)(*(long *)(this + 0x18) + 0x48);
        puVar11 = (uint *)((ulong)puVar2[1] * *(long *)(lVar9 + 0x60) + *(long *)(lVar9 + 0x58));
        lVar6 = *(long *)(lVar9 + 0x88);
        lVar9 = *(long *)(lVar9 + 0x90);
        auVar17 = *(undefined1 (*) [16])(lVar6 + (ulong)*puVar11 * lVar9);
        auVar20 = *(undefined1 (*) [16])(lVar6 + (ulong)puVar11[1] * lVar9);
        auVar4 = *(undefined1 (*) [16])(lVar6 + (ulong)puVar11[2] * lVar9);
        auVar16 = maxps(auVar17,auVar20);
        auVar20 = minps(auVar17,auVar20);
        auVar17 = maxps(auVar16,auVar4);
        auVar20 = minps(auVar20,auVar4);
        uVar14 = (uint)(((auVar17._0_4_ + auVar20._0_4_) - *pfVar8) * pfVar8[4]);
        uVar18 = (uint)(((auVar17._4_4_ + auVar20._4_4_) - pfVar8[1]) * pfVar8[5]);
        uVar19 = (uint)(((auVar17._8_4_ + auVar20._8_4_) - pfVar8[2]) * pfVar8[6]);
        uVar13 = uVar13 + 1;
        *puVar2 = ((((uVar18 << 0x10 | uVar18) & 0x30000ff) * 0x101 & 0x300f00f) * 0x11 & 0x30c30c3)
                  * 10 & 0x12492492 |
                  (((((uVar19 << 0x10 | uVar19) & 0x30000ff) * 0x101 & 0x300f00f) * 0x11 & 0x30c30c3
                   ) * 5 & 0x9249249) << 2 |
                  ((((uVar14 << 0x10 | uVar14) & 0x30000ff) * 0x101 & 0x300f00f) * 0x11 & 0x30c30c3)
                  * 5 & 0x9249249;
      } while (uVar13 != uVar15);
    }
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x00108d15) */
/* void embree::TaskScheduler::spawn_root<embree::TaskScheduler::spawn<unsigned int,
   embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleMv<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned int>
   const&) const::{lambda(embree::range<unsigned int> const&)#2}>(unsigned int, unsigned int,
   unsigned int,
   embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleMv<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned int>
   const&) const::{lambda(embree::range<unsigned int> const&)#2} const&,
   embree::TaskScheduler::TaskGroupContext*)::{lambda()#1}>(embree::TaskScheduler::spawn<unsigned
   int, embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleMv<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned int>
   const&) const::{lambda(embree::range<unsigned int> const&)#2}>(unsigned int, unsigned int,
   unsigned int,
   embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleMv<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned int>
   const&) const::{lambda(embree::range<unsigned int> const&)#2} const&,
   embree::TaskScheduler::TaskGroupContext*)::{lambda()#1} const&,
   embree::TaskScheduler::TaskGroupContext*, unsigned long, bool) */

void __thiscall
embree::TaskScheduler::
spawn_root<embree::TaskScheduler::spawn<unsigned_int,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMv<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned_int>const&)const::_lambda(embree::range<unsigned_int>const&)_2_>(unsigned_int,unsigned_int,unsigned_int,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMv<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned_int>const&)const::_lambda(embree::range<unsigned_int>const&)_2_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
          (TaskScheduler *this,_lambda___1_ *param_1,TaskGroupContext *param_2,ulong param_3,
          bool param_4)

{
  TaskScheduler *pTVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  char cVar12;
  long lVar13;
  Thread *pTVar14;
  Thread *pTVar15;
  Thread *pTVar16;
  long lVar17;
  Thread *pTVar18;
  long in_FS_OFFSET;
  Thread *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_4) {
    embree::TaskScheduler::startThreads();
  }
  lVar13 = embree::TaskScheduler::allocThreadIndex();
  pTVar14 = (Thread *)embree::alignedMalloc(0xc0140,0x40);
  if (this != (TaskScheduler *)0x0) {
    if (*(code **)(*(long *)this + 0x10) == RefCount::refInc) {
      LOCK();
      *(long *)(this + 8) = *(long *)(this + 8) + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*(long *)this + 0x10))(this);
    }
  }
  *(long *)pTVar14 = lVar13;
  pTVar18 = pTVar14 + 0x40;
  pTVar16 = pTVar18;
  do {
    *(undefined4 *)pTVar16 = 0;
    pTVar15 = pTVar16 + 0x80;
    *(undefined4 *)(pTVar16 + 0x40) = 0;
    pTVar16 = pTVar15;
  } while (pTVar14 + 0x40040 != pTVar15);
  *(undefined8 *)(pTVar14 + 0x40040) = 0;
  *(undefined8 *)(pTVar14 + 0x40080) = 0;
  *(undefined8 *)(pTVar14 + 0xc00c0) = 0;
  *(undefined8 *)(pTVar14 + 0xc0100) = 0;
  *(TaskScheduler **)(pTVar14 + 0xc0108) = this;
  if (this != (TaskScheduler *)0x0) {
    if (*(code **)(*(long *)this + 0x10) == RefCount::refInc) {
      LOCK();
      *(long *)(this + 8) = *(long *)(this + 8) + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*(long *)this + 0x10))(this);
    }
    if (*(code **)(*(long *)this + 0x18) == RefCount::refDec) {
      LOCK();
      pTVar1 = this + 8;
      *(long *)pTVar1 = *(long *)pTVar1 + -1;
      UNLOCK();
      if (*(long *)pTVar1 == 0) {
        (**(code **)(*(long *)this + 8))(this);
      }
    }
    else {
      (**(code **)(*(long *)this + 0x18))(this);
    }
  }
  LOCK();
  *(Thread **)(*(long *)(this + 0x10) + lVar13 * 8) = pTVar14;
  UNLOCK();
  local_48 = pTVar14;
  pTVar16 = (Thread *)embree::TaskScheduler::swapThread(pTVar14);
  if (*(ulong *)(pTVar14 + 0x40080) < 0x1000) {
    lVar4 = *(long *)(pTVar14 + 0xc00c0);
    uVar3 = lVar4 + 0x30 + (ulong)(-(int)lVar4 & 0x3f);
    if (uVar3 < 0x80001) {
      *(ulong *)(pTVar14 + 0xc00c0) = uVar3;
      pTVar15 = pTVar14 + uVar3 + 0x40090;
      uVar8 = *(undefined8 *)param_1;
      uVar9 = *(undefined8 *)(param_1 + 8);
      *(undefined ***)pTVar15 = &PTR_execute_00117210;
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      uVar10 = *(undefined8 *)(param_1 + 0x10);
      uVar11 = *(undefined8 *)(param_1 + 0x18);
      *(undefined8 *)(pTVar15 + 8) = uVar8;
      *(undefined8 *)(pTVar15 + 0x10) = uVar9;
      *(undefined8 *)(pTVar15 + 0x28) = uVar5;
      *(undefined8 *)(pTVar15 + 0x18) = uVar10;
      *(undefined8 *)(pTVar15 + 0x20) = uVar11;
      lVar17 = *(long *)(pTVar14 + 0x40080) * 0x40;
      lVar6 = *(long *)(pTVar14 + 0xc0100);
      pTVar14[lVar17 + 0x48] = (Thread)0x1;
      *(undefined4 *)(pTVar14 + lVar17 + 0x44) = 1;
      *(Thread **)(pTVar14 + lVar17 + 0x50) = pTVar15;
      *(long *)(pTVar14 + lVar17 + 0x58) = lVar6;
      *(TaskGroupContext **)(pTVar14 + lVar17 + 0x60) = param_2;
      *(long *)(pTVar14 + lVar17 + 0x68) = lVar4;
      *(ulong *)(pTVar14 + lVar17 + 0x70) = param_3;
      if (lVar6 != 0) {
        LOCK();
        *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
        UNLOCK();
      }
      LOCK();
      if (*(int *)(pTVar18 + lVar17) == 0) {
        *(undefined4 *)(pTVar18 + lVar17) = 1;
      }
      UNLOCK();
      LOCK();
      *(long *)(pTVar14 + 0x40080) = *(long *)(pTVar14 + 0x40080) + 1;
      UNLOCK();
      if (*(long *)(pTVar14 + 0x40080) - 1U <= *(ulong *)(pTVar14 + 0x40040)) {
        LOCK();
        *(long *)(pTVar14 + 0x40040) = *(long *)(pTVar14 + 0x40080) + -1;
        UNLOCK();
      }
      embree::MutexSys::lock();
      LOCK();
      *(long *)(this + 0x30) = *(long *)(this + 0x30) + 1;
      UNLOCK();
      LOCK();
      this[0x38] = (TaskScheduler)0x1;
      UNLOCK();
      embree::ConditionSys::notify_all();
      embree::MutexSys::unlock();
      if (param_4) {
        local_48 = (Thread *)this;
        if (this != (TaskScheduler *)0x0) {
          if (*(code **)(*(long *)this + 0x10) == RefCount::refInc) {
            LOCK();
            *(long *)(this + 8) = *(long *)(this + 8) + 1;
            UNLOCK();
          }
          else {
            (**(code **)(*(long *)this + 0x10))(this);
          }
        }
        embree::TaskScheduler::addScheduler((Ref *)&local_48);
        if (local_48 != (Thread *)0x0) {
          if (*(code **)(*(long *)local_48 + 0x18) == RefCount::refDec) {
            LOCK();
            pTVar15 = local_48 + 8;
            *(long *)pTVar15 = *(long *)pTVar15 + -1;
            UNLOCK();
            if (*(long *)pTVar15 == 0) {
              (**(code **)(*(long *)local_48 + 8))();
            }
          }
          else {
            (**(code **)(*(long *)local_48 + 0x18))();
          }
        }
      }
      do {
        cVar12 = embree::TaskScheduler::TaskQueue::execute_local(pTVar18,(Task *)pTVar14);
      } while (cVar12 != '\0');
      LOCK();
      *(long *)(this + 0x30) = *(long *)(this + 0x30) + -1;
      UNLOCK();
      if (param_4) {
        local_48 = (Thread *)this;
        if (this != (TaskScheduler *)0x0) {
          if (*(code **)(*(long *)this + 0x10) == RefCount::refInc) {
            LOCK();
            *(long *)(this + 8) = *(long *)(this + 8) + 1;
            UNLOCK();
          }
          else {
            (**(code **)(*(long *)this + 0x10))(this);
          }
        }
        embree::TaskScheduler::removeScheduler((Ref *)&local_48);
        if (local_48 != (Thread *)0x0) {
          if (*(code **)(*(long *)local_48 + 0x18) == RefCount::refDec) {
            LOCK();
            pTVar1 = (TaskScheduler *)(local_48 + 8);
            *(long *)pTVar1 = *(long *)pTVar1 + -1;
            UNLOCK();
            if (*(long *)pTVar1 == 0) {
              (**(code **)(*(long *)local_48 + 8))();
            }
          }
          else {
            (**(code **)(*(long *)local_48 + 0x18))();
          }
        }
      }
      local_48 = (Thread *)0x0;
      LOCK();
      *(undefined8 *)(lVar13 * 8 + *(long *)(this + 0x10)) = 0;
      UNLOCK();
      embree::TaskScheduler::swapThread(pTVar16);
      pTVar18 = *(Thread **)param_2;
      if (pTVar18 != (Thread *)0x0) {
        local_48 = pTVar18;
        std::__exception_ptr::exception_ptr::_M_addref();
        pTVar18 = local_48;
      }
      LOCK();
      *(long *)(this + 0x28) = *(long *)(this + 0x28) + -1;
      UNLOCK();
      while (*(long *)(this + 0x28) != 0) {
        embree::yield();
      }
      local_48 = *(Thread **)param_2;
      *(undefined8 *)param_2 = 0;
      if (local_48 != (Thread *)0x0) {
        std::__exception_ptr::exception_ptr::_M_release();
      }
      if (pTVar18 == (Thread *)0x0) {
        if (pTVar14 == (Thread *)0x0) {
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            return;
          }
        }
        else {
          plVar7 = *(long **)(pTVar14 + 0xc0108);
          if (plVar7 != (long *)0x0) {
            if (*(code **)(*plVar7 + 0x18) == RefCount::refDec) {
              LOCK();
              plVar2 = plVar7 + 1;
              *plVar2 = *plVar2 + -1;
              UNLOCK();
              if (*plVar2 == 0) {
                (**(code **)(*plVar7 + 8))();
              }
            }
            else {
              (**(code **)(*plVar7 + 0x18))();
            }
          }
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            embree::alignedFree(pTVar14);
            return;
          }
        }
      }
      else {
        local_48 = pTVar18;
        std::__exception_ptr::exception_ptr::_M_addref();
        std::rethrow_exception(&local_48);
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::TaskScheduler::ClosureTaskFunction<embree::TaskScheduler::spawn<unsigned int,
   embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleMv<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned int>
   const&) const::{lambda(embree::range<unsigned int> const&)#2}>(unsigned int, unsigned int,
   unsigned int,
   embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleMv<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned int>
   const&) const::{lambda(embree::range<unsigned int> const&)#2} const&,
   embree::TaskScheduler::TaskGroupContext*)::{lambda()#1}>::execute() */

void __thiscall
embree::TaskScheduler::
ClosureTaskFunction<embree::TaskScheduler::spawn<unsigned_int,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMv<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned_int>const&)const::{lambda(embree::range<unsigned_int>const&)#2}>(unsigned_int,unsigned_int,unsigned_int,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMv<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned_int>const&)const::{lambda(embree::range<unsigned_int>const&)#2}const&,embree::TaskScheduler::TaskGroupContext*)::{lambda()#1}>
::execute(ClosureTaskFunction<embree::TaskScheduler::spawn<unsigned_int,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMv<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned_int>const&)const::_lambda(embree::range<unsigned_int>const&)_2_>(unsigned_int,unsigned_int,unsigned_int,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMv<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned_int>const&)const::_lambda(embree::range<unsigned_int>const&)_2_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
          *this)

{
  int *piVar1;
  uint *puVar2;
  undefined8 *puVar3;
  undefined1 auVar4 [16];
  TaskGroupContext *pTVar5;
  long lVar6;
  long lVar7;
  float *pfVar8;
  long lVar9;
  long lVar10;
  uint *puVar11;
  TaskScheduler *pTVar12;
  ulong uVar13;
  uint uVar14;
  uint uVar15;
  long in_FS_OFFSET;
  uint uVar18;
  uint uVar19;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar20 [16];
  int local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  TaskGroupContext *local_68;
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  TaskGroupContext *local_38;
  long local_30;
  
  uVar15 = *(uint *)(this + 8);
  uVar14 = *(uint *)(this + 0xc);
  uVar13 = (ulong)uVar14;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(uint *)(this + 0x10) < uVar15 - uVar14) {
    uStack_40 = *(undefined8 *)(this + 0x20);
    pTVar5 = *(TaskGroupContext **)(this + 0x28);
    local_48 = *(undefined8 *)(this + 0x18);
    uVar15 = uVar15 + uVar14 >> 1;
    local_58 = uVar15;
    uStack_54 = uVar14;
    uStack_50 = *(uint *)(this + 0x10);
    local_38 = pTVar5;
    lVar9 = embree::TaskScheduler::thread();
    if (lVar9 == 0) {
      pTVar12 = (TaskScheduler *)embree::TaskScheduler::instance();
      spawn_root<embree::TaskScheduler::spawn<unsigned_int,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMv<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned_int>const&)const::_lambda(embree::range<unsigned_int>const&)_2_>(unsigned_int,unsigned_int,unsigned_int,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMv<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned_int>const&)const::_lambda(embree::range<unsigned_int>const&)_2_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
                (pTVar12,(_lambda___1_ *)&local_58,pTVar5,(ulong)(uVar15 - uVar14),true);
    }
    else {
      if (0xfff < *(ulong *)(lVar9 + 0x40080)) goto LAB_0010932e;
      lVar6 = *(long *)(lVar9 + 0xc00c0);
      uVar13 = lVar6 + 0x30 + (ulong)(-(int)lVar6 & 0x3f);
      if (0x80000 < uVar13) goto LAB_0010932e;
      *(ulong *)(lVar9 + 0xc00c0) = uVar13;
      puVar3 = (undefined8 *)(lVar9 + 0x40090 + uVar13);
      *puVar3 = &PTR_execute_00117210;
      puVar3[1] = CONCAT44(uStack_54,local_58);
      puVar3[2] = CONCAT44(uStack_4c,uStack_50);
      puVar3[5] = local_38;
      puVar3[3] = local_48;
      puVar3[4] = uStack_40;
      lVar10 = *(long *)(lVar9 + 0x40080) * 0x40;
      piVar1 = (int *)(lVar9 + 0x40 + lVar10);
      lVar7 = *(long *)(lVar9 + 0xc0100);
      *(undefined4 *)(lVar9 + 0x44 + lVar10) = 1;
      *(undefined1 *)(lVar9 + 0x48 + lVar10) = 1;
      lVar10 = lVar10 + lVar9;
      *(undefined8 **)(lVar10 + 0x50) = puVar3;
      *(long *)(lVar10 + 0x58) = lVar7;
      *(TaskGroupContext **)(lVar10 + 0x60) = pTVar5;
      *(long *)(lVar10 + 0x68) = lVar6;
      *(ulong *)(lVar10 + 0x70) = (ulong)(uVar15 - uVar14);
      if (lVar7 != 0) {
        LOCK();
        *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
        UNLOCK();
      }
      LOCK();
      if (*piVar1 == 0) {
        *piVar1 = 1;
      }
      UNLOCK();
      LOCK();
      *(long *)(lVar9 + 0x40080) = *(long *)(lVar9 + 0x40080) + 1;
      UNLOCK();
      if (*(long *)(lVar9 + 0x40080) - 1U <= *(ulong *)(lVar9 + 0x40040)) {
        LOCK();
        *(long *)(lVar9 + 0x40040) = *(long *)(lVar9 + 0x40080) + -1;
        UNLOCK();
      }
    }
    uStack_70 = *(undefined8 *)(this + 0x20);
    pTVar5 = *(TaskGroupContext **)(this + 0x28);
    uStack_80 = *(undefined4 *)(this + 0x10);
    local_88 = *(int *)(this + 8);
    local_78 = *(undefined8 *)(this + 0x18);
    uVar14 = local_88 - uVar15;
    uStack_84 = uVar15;
    local_68 = pTVar5;
    lVar9 = embree::TaskScheduler::thread();
    if (lVar9 == 0) {
      pTVar12 = (TaskScheduler *)embree::TaskScheduler::instance();
      spawn_root<embree::TaskScheduler::spawn<unsigned_int,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMv<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned_int>const&)const::_lambda(embree::range<unsigned_int>const&)_2_>(unsigned_int,unsigned_int,unsigned_int,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMv<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned_int>const&)const::_lambda(embree::range<unsigned_int>const&)_2_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
                (pTVar12,(_lambda___1_ *)&local_88,pTVar5,(ulong)uVar14,true);
    }
    else {
      if (0xfff < *(ulong *)(lVar9 + 0x40080)) {
LAB_0010932e:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar6 = *(long *)(lVar9 + 0xc00c0);
      uVar13 = lVar6 + 0x30 + (ulong)(-(int)lVar6 & 0x3f);
      if (0x80000 < uVar13) goto LAB_0010932e;
      *(ulong *)(lVar9 + 0xc00c0) = uVar13;
      puVar3 = (undefined8 *)(lVar9 + 0x40090 + uVar13);
      *puVar3 = &PTR_execute_00117210;
      puVar3[1] = CONCAT44(uStack_84,local_88);
      puVar3[2] = CONCAT44(uStack_7c,uStack_80);
      puVar3[5] = local_68;
      puVar3[3] = local_78;
      puVar3[4] = uStack_70;
      lVar10 = *(long *)(lVar9 + 0x40080) * 0x40;
      piVar1 = (int *)(lVar9 + 0x40 + lVar10);
      lVar7 = *(long *)(lVar9 + 0xc0100);
      *(undefined4 *)(lVar9 + 0x44 + lVar10) = 1;
      *(undefined1 *)(lVar9 + 0x48 + lVar10) = 1;
      lVar10 = lVar10 + lVar9;
      *(undefined8 **)(lVar10 + 0x50) = puVar3;
      *(long *)(lVar10 + 0x58) = lVar7;
      *(TaskGroupContext **)(lVar10 + 0x60) = pTVar5;
      *(long *)(lVar10 + 0x68) = lVar6;
      *(ulong *)(lVar10 + 0x70) = (ulong)uVar14;
      if (lVar7 != 0) {
        LOCK();
        *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
        UNLOCK();
      }
      LOCK();
      if (*piVar1 == 0) {
        *piVar1 = 1;
      }
      UNLOCK();
      LOCK();
      *(long *)(lVar9 + 0x40080) = *(long *)(lVar9 + 0x40080) + 1;
      UNLOCK();
      if (*(long *)(lVar9 + 0x40080) - 1U <= *(ulong *)(lVar9 + 0x40040)) {
        LOCK();
        *(long *)(lVar9 + 0x40040) = *(long *)(lVar9 + 0x40080) + -1;
        UNLOCK();
      }
    }
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      embree::TaskScheduler::wait();
      return;
    }
  }
  else {
    if (uVar13 < uVar15) {
      do {
        pfVar8 = *(float **)(this + 0x20);
        puVar2 = (uint *)(*(long *)(*(long *)(this + 0x18) + 0x58) + uVar13 * 8);
        lVar9 = **(long **)(*(long *)(this + 0x18) + 0x48);
        puVar11 = (uint *)((ulong)puVar2[1] * *(long *)(lVar9 + 0x60) + *(long *)(lVar9 + 0x58));
        lVar6 = *(long *)(lVar9 + 0x88);
        lVar9 = *(long *)(lVar9 + 0x90);
        auVar17 = *(undefined1 (*) [16])(lVar6 + (ulong)*puVar11 * lVar9);
        auVar20 = *(undefined1 (*) [16])(lVar6 + (ulong)puVar11[1] * lVar9);
        auVar4 = *(undefined1 (*) [16])(lVar6 + (ulong)puVar11[2] * lVar9);
        auVar16 = maxps(auVar17,auVar20);
        auVar20 = minps(auVar17,auVar20);
        auVar17 = maxps(auVar16,auVar4);
        auVar20 = minps(auVar20,auVar4);
        uVar14 = (uint)(((auVar17._0_4_ + auVar20._0_4_) - *pfVar8) * pfVar8[4]);
        uVar18 = (uint)(((auVar17._4_4_ + auVar20._4_4_) - pfVar8[1]) * pfVar8[5]);
        uVar19 = (uint)(((auVar17._8_4_ + auVar20._8_4_) - pfVar8[2]) * pfVar8[6]);
        uVar13 = uVar13 + 1;
        *puVar2 = ((((uVar18 << 0x10 | uVar18) & 0x30000ff) * 0x101 & 0x300f00f) * 0x11 & 0x30c30c3)
                  * 10 & 0x12492492 |
                  (((((uVar19 << 0x10 | uVar19) & 0x30000ff) * 0x101 & 0x300f00f) * 0x11 & 0x30c30c3
                   ) * 5 & 0x9249249) << 2 |
                  ((((uVar14 << 0x10 | uVar14) & 0x30000ff) * 0x101 & 0x300f00f) * 0x11 & 0x30c30c3)
                  * 5 & 0x9249249;
      } while (uVar13 != uVar15);
    }
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x00109715) */
/* void embree::TaskScheduler::spawn_root<embree::TaskScheduler::spawn<unsigned int,
   embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleM<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned int>
   const&) const::{lambda(embree::range<unsigned int> const&)#2}>(unsigned int, unsigned int,
   unsigned int,
   embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleM<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned int>
   const&) const::{lambda(embree::range<unsigned int> const&)#2} const&,
   embree::TaskScheduler::TaskGroupContext*)::{lambda()#1}>(embree::TaskScheduler::spawn<unsigned
   int, embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleM<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned int>
   const&) const::{lambda(embree::range<unsigned int> const&)#2}>(unsigned int, unsigned int,
   unsigned int,
   embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleM<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned int>
   const&) const::{lambda(embree::range<unsigned int> const&)#2} const&,
   embree::TaskScheduler::TaskGroupContext*)::{lambda()#1} const&,
   embree::TaskScheduler::TaskGroupContext*, unsigned long, bool) */

void __thiscall
embree::TaskScheduler::
spawn_root<embree::TaskScheduler::spawn<unsigned_int,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleM<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned_int>const&)const::_lambda(embree::range<unsigned_int>const&)_2_>(unsigned_int,unsigned_int,unsigned_int,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleM<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned_int>const&)const::_lambda(embree::range<unsigned_int>const&)_2_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
          (TaskScheduler *this,_lambda___1_ *param_1,TaskGroupContext *param_2,ulong param_3,
          bool param_4)

{
  TaskScheduler *pTVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  char cVar12;
  long lVar13;
  Thread *pTVar14;
  Thread *pTVar15;
  Thread *pTVar16;
  long lVar17;
  Thread *pTVar18;
  long in_FS_OFFSET;
  Thread *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_4) {
    embree::TaskScheduler::startThreads();
  }
  lVar13 = embree::TaskScheduler::allocThreadIndex();
  pTVar14 = (Thread *)embree::alignedMalloc(0xc0140,0x40);
  if (this != (TaskScheduler *)0x0) {
    if (*(code **)(*(long *)this + 0x10) == RefCount::refInc) {
      LOCK();
      *(long *)(this + 8) = *(long *)(this + 8) + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*(long *)this + 0x10))(this);
    }
  }
  *(long *)pTVar14 = lVar13;
  pTVar18 = pTVar14 + 0x40;
  pTVar16 = pTVar18;
  do {
    *(undefined4 *)pTVar16 = 0;
    pTVar15 = pTVar16 + 0x80;
    *(undefined4 *)(pTVar16 + 0x40) = 0;
    pTVar16 = pTVar15;
  } while (pTVar14 + 0x40040 != pTVar15);
  *(undefined8 *)(pTVar14 + 0x40040) = 0;
  *(undefined8 *)(pTVar14 + 0x40080) = 0;
  *(undefined8 *)(pTVar14 + 0xc00c0) = 0;
  *(undefined8 *)(pTVar14 + 0xc0100) = 0;
  *(TaskScheduler **)(pTVar14 + 0xc0108) = this;
  if (this != (TaskScheduler *)0x0) {
    if (*(code **)(*(long *)this + 0x10) == RefCount::refInc) {
      LOCK();
      *(long *)(this + 8) = *(long *)(this + 8) + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*(long *)this + 0x10))(this);
    }
    if (*(code **)(*(long *)this + 0x18) == RefCount::refDec) {
      LOCK();
      pTVar1 = this + 8;
      *(long *)pTVar1 = *(long *)pTVar1 + -1;
      UNLOCK();
      if (*(long *)pTVar1 == 0) {
        (**(code **)(*(long *)this + 8))(this);
      }
    }
    else {
      (**(code **)(*(long *)this + 0x18))(this);
    }
  }
  LOCK();
  *(Thread **)(*(long *)(this + 0x10) + lVar13 * 8) = pTVar14;
  UNLOCK();
  local_48 = pTVar14;
  pTVar16 = (Thread *)embree::TaskScheduler::swapThread(pTVar14);
  if (*(ulong *)(pTVar14 + 0x40080) < 0x1000) {
    lVar4 = *(long *)(pTVar14 + 0xc00c0);
    uVar3 = lVar4 + 0x30 + (ulong)(-(int)lVar4 & 0x3f);
    if (uVar3 < 0x80001) {
      *(ulong *)(pTVar14 + 0xc00c0) = uVar3;
      pTVar15 = pTVar14 + uVar3 + 0x40090;
      uVar8 = *(undefined8 *)param_1;
      uVar9 = *(undefined8 *)(param_1 + 8);
      *(undefined ***)pTVar15 = &PTR_execute_00117228;
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      uVar10 = *(undefined8 *)(param_1 + 0x10);
      uVar11 = *(undefined8 *)(param_1 + 0x18);
      *(undefined8 *)(pTVar15 + 8) = uVar8;
      *(undefined8 *)(pTVar15 + 0x10) = uVar9;
      *(undefined8 *)(pTVar15 + 0x28) = uVar5;
      *(undefined8 *)(pTVar15 + 0x18) = uVar10;
      *(undefined8 *)(pTVar15 + 0x20) = uVar11;
      lVar17 = *(long *)(pTVar14 + 0x40080) * 0x40;
      lVar6 = *(long *)(pTVar14 + 0xc0100);
      pTVar14[lVar17 + 0x48] = (Thread)0x1;
      *(undefined4 *)(pTVar14 + lVar17 + 0x44) = 1;
      *(Thread **)(pTVar14 + lVar17 + 0x50) = pTVar15;
      *(long *)(pTVar14 + lVar17 + 0x58) = lVar6;
      *(TaskGroupContext **)(pTVar14 + lVar17 + 0x60) = param_2;
      *(long *)(pTVar14 + lVar17 + 0x68) = lVar4;
      *(ulong *)(pTVar14 + lVar17 + 0x70) = param_3;
      if (lVar6 != 0) {
        LOCK();
        *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
        UNLOCK();
      }
      LOCK();
      if (*(int *)(pTVar18 + lVar17) == 0) {
        *(undefined4 *)(pTVar18 + lVar17) = 1;
      }
      UNLOCK();
      LOCK();
      *(long *)(pTVar14 + 0x40080) = *(long *)(pTVar14 + 0x40080) + 1;
      UNLOCK();
      if (*(long *)(pTVar14 + 0x40080) - 1U <= *(ulong *)(pTVar14 + 0x40040)) {
        LOCK();
        *(long *)(pTVar14 + 0x40040) = *(long *)(pTVar14 + 0x40080) + -1;
        UNLOCK();
      }
      embree::MutexSys::lock();
      LOCK();
      *(long *)(this + 0x30) = *(long *)(this + 0x30) + 1;
      UNLOCK();
      LOCK();
      this[0x38] = (TaskScheduler)0x1;
      UNLOCK();
      embree::ConditionSys::notify_all();
      embree::MutexSys::unlock();
      if (param_4) {
        local_48 = (Thread *)this;
        if (this != (TaskScheduler *)0x0) {
          if (*(code **)(*(long *)this + 0x10) == RefCount::refInc) {
            LOCK();
            *(long *)(this + 8) = *(long *)(this + 8) + 1;
            UNLOCK();
          }
          else {
            (**(code **)(*(long *)this + 0x10))(this);
          }
        }
        embree::TaskScheduler::addScheduler((Ref *)&local_48);
        if (local_48 != (Thread *)0x0) {
          if (*(code **)(*(long *)local_48 + 0x18) == RefCount::refDec) {
            LOCK();
            pTVar15 = local_48 + 8;
            *(long *)pTVar15 = *(long *)pTVar15 + -1;
            UNLOCK();
            if (*(long *)pTVar15 == 0) {
              (**(code **)(*(long *)local_48 + 8))();
            }
          }
          else {
            (**(code **)(*(long *)local_48 + 0x18))();
          }
        }
      }
      do {
        cVar12 = embree::TaskScheduler::TaskQueue::execute_local(pTVar18,(Task *)pTVar14);
      } while (cVar12 != '\0');
      LOCK();
      *(long *)(this + 0x30) = *(long *)(this + 0x30) + -1;
      UNLOCK();
      if (param_4) {
        local_48 = (Thread *)this;
        if (this != (TaskScheduler *)0x0) {
          if (*(code **)(*(long *)this + 0x10) == RefCount::refInc) {
            LOCK();
            *(long *)(this + 8) = *(long *)(this + 8) + 1;
            UNLOCK();
          }
          else {
            (**(code **)(*(long *)this + 0x10))(this);
          }
        }
        embree::TaskScheduler::removeScheduler((Ref *)&local_48);
        if (local_48 != (Thread *)0x0) {
          if (*(code **)(*(long *)local_48 + 0x18) == RefCount::refDec) {
            LOCK();
            pTVar1 = (TaskScheduler *)(local_48 + 8);
            *(long *)pTVar1 = *(long *)pTVar1 + -1;
            UNLOCK();
            if (*(long *)pTVar1 == 0) {
              (**(code **)(*(long *)local_48 + 8))();
            }
          }
          else {
            (**(code **)(*(long *)local_48 + 0x18))();
          }
        }
      }
      local_48 = (Thread *)0x0;
      LOCK();
      *(undefined8 *)(lVar13 * 8 + *(long *)(this + 0x10)) = 0;
      UNLOCK();
      embree::TaskScheduler::swapThread(pTVar16);
      pTVar18 = *(Thread **)param_2;
      if (pTVar18 != (Thread *)0x0) {
        local_48 = pTVar18;
        std::__exception_ptr::exception_ptr::_M_addref();
        pTVar18 = local_48;
      }
      LOCK();
      *(long *)(this + 0x28) = *(long *)(this + 0x28) + -1;
      UNLOCK();
      while (*(long *)(this + 0x28) != 0) {
        embree::yield();
      }
      local_48 = *(Thread **)param_2;
      *(undefined8 *)param_2 = 0;
      if (local_48 != (Thread *)0x0) {
        std::__exception_ptr::exception_ptr::_M_release();
      }
      if (pTVar18 == (Thread *)0x0) {
        if (pTVar14 == (Thread *)0x0) {
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            return;
          }
        }
        else {
          plVar7 = *(long **)(pTVar14 + 0xc0108);
          if (plVar7 != (long *)0x0) {
            if (*(code **)(*plVar7 + 0x18) == RefCount::refDec) {
              LOCK();
              plVar2 = plVar7 + 1;
              *plVar2 = *plVar2 + -1;
              UNLOCK();
              if (*plVar2 == 0) {
                (**(code **)(*plVar7 + 8))();
              }
            }
            else {
              (**(code **)(*plVar7 + 0x18))();
            }
          }
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            embree::alignedFree(pTVar14);
            return;
          }
        }
      }
      else {
        local_48 = pTVar18;
        std::__exception_ptr::exception_ptr::_M_addref();
        std::rethrow_exception(&local_48);
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::TaskScheduler::ClosureTaskFunction<embree::TaskScheduler::spawn<unsigned int,
   embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleM<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned int>
   const&) const::{lambda(embree::range<unsigned int> const&)#2}>(unsigned int, unsigned int,
   unsigned int,
   embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleM<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned int>
   const&) const::{lambda(embree::range<unsigned int> const&)#2} const&,
   embree::TaskScheduler::TaskGroupContext*)::{lambda()#1}>::execute() */

void __thiscall
embree::TaskScheduler::
ClosureTaskFunction<embree::TaskScheduler::spawn<unsigned_int,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleM<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned_int>const&)const::{lambda(embree::range<unsigned_int>const&)#2}>(unsigned_int,unsigned_int,unsigned_int,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleM<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned_int>const&)const::{lambda(embree::range<unsigned_int>const&)#2}const&,embree::TaskScheduler::TaskGroupContext*)::{lambda()#1}>
::execute(ClosureTaskFunction<embree::TaskScheduler::spawn<unsigned_int,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleM<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned_int>const&)const::_lambda(embree::range<unsigned_int>const&)_2_>(unsigned_int,unsigned_int,unsigned_int,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleM<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned_int>const&)const::_lambda(embree::range<unsigned_int>const&)_2_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
          *this)

{
  int *piVar1;
  uint *puVar2;
  undefined8 *puVar3;
  undefined1 auVar4 [16];
  TaskGroupContext *pTVar5;
  long lVar6;
  long lVar7;
  float *pfVar8;
  long lVar9;
  long lVar10;
  uint *puVar11;
  TaskScheduler *pTVar12;
  ulong uVar13;
  uint uVar14;
  uint uVar15;
  long in_FS_OFFSET;
  uint uVar18;
  uint uVar19;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar20 [16];
  int local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  TaskGroupContext *local_68;
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  TaskGroupContext *local_38;
  long local_30;
  
  uVar15 = *(uint *)(this + 8);
  uVar14 = *(uint *)(this + 0xc);
  uVar13 = (ulong)uVar14;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(uint *)(this + 0x10) < uVar15 - uVar14) {
    uStack_40 = *(undefined8 *)(this + 0x20);
    pTVar5 = *(TaskGroupContext **)(this + 0x28);
    local_48 = *(undefined8 *)(this + 0x18);
    uVar15 = uVar15 + uVar14 >> 1;
    local_58 = uVar15;
    uStack_54 = uVar14;
    uStack_50 = *(uint *)(this + 0x10);
    local_38 = pTVar5;
    lVar9 = embree::TaskScheduler::thread();
    if (lVar9 == 0) {
      pTVar12 = (TaskScheduler *)embree::TaskScheduler::instance();
      spawn_root<embree::TaskScheduler::spawn<unsigned_int,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleM<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned_int>const&)const::_lambda(embree::range<unsigned_int>const&)_2_>(unsigned_int,unsigned_int,unsigned_int,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleM<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned_int>const&)const::_lambda(embree::range<unsigned_int>const&)_2_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
                (pTVar12,(_lambda___1_ *)&local_58,pTVar5,(ulong)(uVar15 - uVar14),true);
    }
    else {
      if (0xfff < *(ulong *)(lVar9 + 0x40080)) goto LAB_00109d2e;
      lVar6 = *(long *)(lVar9 + 0xc00c0);
      uVar13 = lVar6 + 0x30 + (ulong)(-(int)lVar6 & 0x3f);
      if (0x80000 < uVar13) goto LAB_00109d2e;
      *(ulong *)(lVar9 + 0xc00c0) = uVar13;
      puVar3 = (undefined8 *)(lVar9 + 0x40090 + uVar13);
      *puVar3 = &PTR_execute_00117228;
      puVar3[1] = CONCAT44(uStack_54,local_58);
      puVar3[2] = CONCAT44(uStack_4c,uStack_50);
      puVar3[5] = local_38;
      puVar3[3] = local_48;
      puVar3[4] = uStack_40;
      lVar10 = *(long *)(lVar9 + 0x40080) * 0x40;
      piVar1 = (int *)(lVar9 + 0x40 + lVar10);
      lVar7 = *(long *)(lVar9 + 0xc0100);
      *(undefined4 *)(lVar9 + 0x44 + lVar10) = 1;
      *(undefined1 *)(lVar9 + 0x48 + lVar10) = 1;
      lVar10 = lVar10 + lVar9;
      *(undefined8 **)(lVar10 + 0x50) = puVar3;
      *(long *)(lVar10 + 0x58) = lVar7;
      *(TaskGroupContext **)(lVar10 + 0x60) = pTVar5;
      *(long *)(lVar10 + 0x68) = lVar6;
      *(ulong *)(lVar10 + 0x70) = (ulong)(uVar15 - uVar14);
      if (lVar7 != 0) {
        LOCK();
        *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
        UNLOCK();
      }
      LOCK();
      if (*piVar1 == 0) {
        *piVar1 = 1;
      }
      UNLOCK();
      LOCK();
      *(long *)(lVar9 + 0x40080) = *(long *)(lVar9 + 0x40080) + 1;
      UNLOCK();
      if (*(long *)(lVar9 + 0x40080) - 1U <= *(ulong *)(lVar9 + 0x40040)) {
        LOCK();
        *(long *)(lVar9 + 0x40040) = *(long *)(lVar9 + 0x40080) + -1;
        UNLOCK();
      }
    }
    uStack_70 = *(undefined8 *)(this + 0x20);
    pTVar5 = *(TaskGroupContext **)(this + 0x28);
    uStack_80 = *(undefined4 *)(this + 0x10);
    local_88 = *(int *)(this + 8);
    local_78 = *(undefined8 *)(this + 0x18);
    uVar14 = local_88 - uVar15;
    uStack_84 = uVar15;
    local_68 = pTVar5;
    lVar9 = embree::TaskScheduler::thread();
    if (lVar9 == 0) {
      pTVar12 = (TaskScheduler *)embree::TaskScheduler::instance();
      spawn_root<embree::TaskScheduler::spawn<unsigned_int,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleM<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned_int>const&)const::_lambda(embree::range<unsigned_int>const&)_2_>(unsigned_int,unsigned_int,unsigned_int,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleM<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned_int>const&)const::_lambda(embree::range<unsigned_int>const&)_2_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
                (pTVar12,(_lambda___1_ *)&local_88,pTVar5,(ulong)uVar14,true);
    }
    else {
      if (0xfff < *(ulong *)(lVar9 + 0x40080)) {
LAB_00109d2e:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar6 = *(long *)(lVar9 + 0xc00c0);
      uVar13 = lVar6 + 0x30 + (ulong)(-(int)lVar6 & 0x3f);
      if (0x80000 < uVar13) goto LAB_00109d2e;
      *(ulong *)(lVar9 + 0xc00c0) = uVar13;
      puVar3 = (undefined8 *)(lVar9 + 0x40090 + uVar13);
      *puVar3 = &PTR_execute_00117228;
      puVar3[1] = CONCAT44(uStack_84,local_88);
      puVar3[2] = CONCAT44(uStack_7c,uStack_80);
      puVar3[5] = local_68;
      puVar3[3] = local_78;
      puVar3[4] = uStack_70;
      lVar10 = *(long *)(lVar9 + 0x40080) * 0x40;
      piVar1 = (int *)(lVar9 + 0x40 + lVar10);
      lVar7 = *(long *)(lVar9 + 0xc0100);
      *(undefined4 *)(lVar9 + 0x44 + lVar10) = 1;
      *(undefined1 *)(lVar9 + 0x48 + lVar10) = 1;
      lVar10 = lVar10 + lVar9;
      *(undefined8 **)(lVar10 + 0x50) = puVar3;
      *(long *)(lVar10 + 0x58) = lVar7;
      *(TaskGroupContext **)(lVar10 + 0x60) = pTVar5;
      *(long *)(lVar10 + 0x68) = lVar6;
      *(ulong *)(lVar10 + 0x70) = (ulong)uVar14;
      if (lVar7 != 0) {
        LOCK();
        *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
        UNLOCK();
      }
      LOCK();
      if (*piVar1 == 0) {
        *piVar1 = 1;
      }
      UNLOCK();
      LOCK();
      *(long *)(lVar9 + 0x40080) = *(long *)(lVar9 + 0x40080) + 1;
      UNLOCK();
      if (*(long *)(lVar9 + 0x40080) - 1U <= *(ulong *)(lVar9 + 0x40040)) {
        LOCK();
        *(long *)(lVar9 + 0x40040) = *(long *)(lVar9 + 0x40080) + -1;
        UNLOCK();
      }
    }
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      embree::TaskScheduler::wait();
      return;
    }
  }
  else {
    if (uVar13 < uVar15) {
      do {
        pfVar8 = *(float **)(this + 0x20);
        puVar2 = (uint *)(*(long *)(*(long *)(this + 0x18) + 0x58) + uVar13 * 8);
        lVar9 = **(long **)(*(long *)(this + 0x18) + 0x48);
        puVar11 = (uint *)((ulong)puVar2[1] * *(long *)(lVar9 + 0x60) + *(long *)(lVar9 + 0x58));
        lVar6 = *(long *)(lVar9 + 0x88);
        lVar9 = *(long *)(lVar9 + 0x90);
        auVar17 = *(undefined1 (*) [16])(lVar6 + (ulong)*puVar11 * lVar9);
        auVar20 = *(undefined1 (*) [16])(lVar6 + (ulong)puVar11[1] * lVar9);
        auVar4 = *(undefined1 (*) [16])(lVar6 + (ulong)puVar11[2] * lVar9);
        auVar16 = maxps(auVar17,auVar20);
        auVar20 = minps(auVar17,auVar20);
        auVar17 = maxps(auVar16,auVar4);
        auVar20 = minps(auVar20,auVar4);
        uVar14 = (uint)(((auVar17._0_4_ + auVar20._0_4_) - *pfVar8) * pfVar8[4]);
        uVar18 = (uint)(((auVar17._4_4_ + auVar20._4_4_) - pfVar8[1]) * pfVar8[5]);
        uVar19 = (uint)(((auVar17._8_4_ + auVar20._8_4_) - pfVar8[2]) * pfVar8[6]);
        uVar13 = uVar13 + 1;
        *puVar2 = ((((uVar18 << 0x10 | uVar18) & 0x30000ff) * 0x101 & 0x300f00f) * 0x11 & 0x30c30c3)
                  * 10 & 0x12492492 |
                  (((((uVar19 << 0x10 | uVar19) & 0x30000ff) * 0x101 & 0x300f00f) * 0x11 & 0x30c30c3
                   ) * 5 & 0x9249249) << 2 |
                  ((((uVar14 << 0x10 | uVar14) & 0x30000ff) * 0x101 & 0x300f00f) * 0x11 & 0x30c30c3)
                  * 5 & 0x9249249;
      } while (uVar13 != uVar15);
    }
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* embree::BBox<embree::Vec3fa> embree::parallel_reduce_internal<unsigned int,
   embree::BBox<embree::Vec3fa>,
   embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleMi<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned int>
   const&) const::{lambda(embree::range<unsigned int> const&)#1}, embree::BBox<embree::Vec3fa> const
   (embree::BBox<embree::Vec3fa> const&, embree::BBox<embree::Vec3fa> const&)>(unsigned int,
   unsigned int, unsigned int, unsigned int, embree::BBox<embree::Vec3fa> const&,
   embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleMi<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned int>
   const&) const::{lambda(embree::range<unsigned int> const&)#1} const&,
   embree::BBox<embree::Vec3fa> const ( const&)(embree::BBox<embree::Vec3fa> const&,
   embree::BBox<embree::Vec3fa> const&)) [clone .isra.0] */

BBox * embree::
       parallel_reduce_internal<unsigned_int,embree::BBox<embree::Vec3fa>,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMi<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned_int>const&)const::_lambda(embree::range<unsigned_int>const&)_1_,embree::BBox<embree::Vec3fa>const(embree::BBox<embree::Vec3fa>const&,embree::BBox<embree::Vec3fa>const&)>
                 (uint param_1,uint param_2,uint param_3,uint param_4,BBox *param_5,
                 _lambda_embree__range<unsigned_int>_const___1_ *param_6,
                 _func_BBox_BBox_ptr_BBox_ptr *param_7)

{
  int *piVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined4 in_register_0000003c;
  BBox *pBVar9;
  ulong uVar10;
  long lVar11;
  long in_FS_OFFSET;
  uint local_212c;
  uint local_2128;
  uint local_2124 [3];
  long local_2118;
  uint local_2110;
  undefined4 uStack_210c;
  undefined4 uStack_2108;
  undefined4 uStack_2104;
  BBox *local_2100;
  long *plStack_20f8;
  undefined8 local_20f0;
  undefined8 uStack_20e8;
  uint *local_20e0;
  undefined1 *puStack_20d8;
  _lambda_embree__range<unsigned_int>_const___1_ *local_20d0;
  undefined1 local_20c0 [8192];
  undefined1 *local_c0;
  ulong local_b8;
  long local_48;
  
  pBVar9 = (BBox *)CONCAT44(in_register_0000003c,param_1);
  local_48 = *(long *)(in_FS_OFFSET + 0x28);
  local_212c = param_4;
  local_2128 = param_3;
  local_2124[0] = param_2;
  uVar5 = embree::TaskScheduler::threadCount();
  if (0x200 < local_2124[0]) {
    local_2124[0] = 0x200;
  }
  if (uVar5 < local_2124[0]) {
    local_2124[0] = uVar5;
  }
  local_b8 = (ulong)local_2124[0];
  if (local_b8 < 0x101) {
    local_c0 = local_20c0;
  }
  else {
    local_c0 = (undefined1 *)embree::alignedMalloc(local_b8 << 5,0x40);
  }
  local_20f0 = &local_2128;
  uStack_20e8 = &local_212c;
  local_20e0 = local_2124;
  puStack_20d8 = local_20c0;
  local_20d0 = param_6;
  if (local_2124[0] == 0) {
    uVar8 = *(undefined8 *)(param_5 + 8);
    *(undefined8 *)pBVar9 = *(undefined8 *)param_5;
    *(undefined8 *)(pBVar9 + 8) = uVar8;
    uVar8 = *(undefined8 *)(param_5 + 0x18);
    *(undefined8 *)(pBVar9 + 0x10) = *(undefined8 *)(param_5 + 0x10);
    *(undefined8 *)(pBVar9 + 0x18) = uVar8;
  }
  else {
    uVar10 = (ulong)local_2124[0];
    uStack_210c = 0;
    uStack_2108 = 1;
    local_2118 = 0;
    local_2110 = local_2124[0];
    local_2100 = (BBox *)&local_20f0;
    plStack_20f8 = &local_2118;
    lVar6 = embree::TaskScheduler::thread();
    if (lVar6 == 0) {
      uVar8 = embree::TaskScheduler::instance();
      _ZN6embree13TaskScheduler10spawn_rootIZNS0_5spawnIjZNS_12parallel_forIjZNS_24parallel_reduce_internalIjNS_4BBoxINS_6Vec3faEEEZNKS_4sse216BVHBuilderMorton8BuilderTINS_13BVHNodeRecordINS_10NodeRefPtrILi4EEEEENS_13FastAllocator15CachedAllocatorENS_4BVHNILi4EE11CreateAllocENS_10AABBNode_tISD_Li4EE6CreateENS8_13SetBVHNBoundsILi4EEENS8_16CreateMortonLeafILi4ENS_10TriangleMiILi4EEEEENS8_19CalculateMeshBoundsINS_12TriangleMeshEEENS_5Scene29BuildProgressMonitorInterfaceEE19recreateMortonCodesERKNS_5rangeIjEEEUlS12_E_FKS7_RS14_S15_EEET0_T_S18_S18_S18_RKS17_RKT1_RKT2_EUljE_EEvS18_S1A_EUlS12_E_EEvS18_S18_S18_S1A_PNS0_16TaskGroupContextEEUlvE_EEvRKS18_S1K_mb
                (uVar8,&local_2110,&local_2118,uVar10,1);
    }
    else {
      if (0xfff < *(ulong *)(lVar6 + 0x40080)) {
LAB_0010a60f:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar11 = *(long *)(lVar6 + 0xc00c0);
      uVar2 = lVar11 + 0x28 + (ulong)(-(int)lVar11 & 0x3f);
      if (0x80000 < uVar2) goto LAB_0010a60f;
      *(ulong *)(lVar6 + 0xc00c0) = uVar2;
      puVar3 = (undefined8 *)(lVar6 + 0x40098 + uVar2);
      *puVar3 = 0x117240;
      puVar3[1] = CONCAT44(uStack_210c,local_2110);
      puVar3[2] = CONCAT44(uStack_2104,uStack_2108);
      puVar3[3] = local_2100;
      puVar3[4] = plStack_20f8;
      lVar7 = *(long *)(lVar6 + 0x40080) * 0x40;
      piVar1 = (int *)(lVar6 + 0x40 + lVar7);
      lVar4 = *(long *)(lVar6 + 0xc0100);
      *(undefined4 *)(lVar6 + 0x44 + lVar7) = 1;
      *(undefined1 *)(lVar6 + 0x48 + lVar7) = 1;
      lVar7 = lVar7 + lVar6;
      *(undefined8 **)(lVar7 + 0x50) = puVar3;
      *(long *)(lVar7 + 0x58) = lVar4;
      *(long **)(lVar7 + 0x60) = &local_2118;
      *(long *)(lVar7 + 0x68) = lVar11;
      *(ulong *)(lVar7 + 0x70) = uVar10;
      if (lVar4 != 0) {
        LOCK();
        *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + 1;
        UNLOCK();
      }
      LOCK();
      if (*piVar1 == 0) {
        *piVar1 = 1;
      }
      UNLOCK();
      LOCK();
      *(long *)(lVar6 + 0x40080) = *(long *)(lVar6 + 0x40080) + 1;
      UNLOCK();
      if (*(long *)(lVar6 + 0x40080) - 1U <= *(ulong *)(lVar6 + 0x40040)) {
        LOCK();
        *(long *)(lVar6 + 0x40040) = *(long *)(lVar6 + 0x40080) + -1;
        UNLOCK();
      }
    }
    embree::TaskScheduler::wait();
    if (local_2118 != 0) {
      local_2110 = (uint)local_2118;
      uStack_210c = (undefined4)((ulong)local_2118 >> 0x20);
      std::__exception_ptr::exception_ptr::_M_addref();
      std::rethrow_exception(&local_2110);
      goto LAB_0010a60a;
    }
    uVar8 = *(undefined8 *)(param_5 + 8);
    *(undefined8 *)pBVar9 = *(undefined8 *)param_5;
    *(undefined8 *)(pBVar9 + 8) = uVar8;
    uVar8 = *(undefined8 *)(param_5 + 0x18);
    *(undefined8 *)(pBVar9 + 0x10) = *(undefined8 *)(param_5 + 0x10);
    *(undefined8 *)(pBVar9 + 0x18) = uVar8;
    if (local_2124[0] != 0) {
      lVar6 = 0;
      do {
        lVar11 = lVar6 + 1;
        (*param_7)((BBox *)&local_20f0,pBVar9,(BBox *)(local_c0 + lVar6 * 0x20));
        *(undefined4 *)pBVar9 = (undefined4)local_20f0;
        *(undefined4 *)(pBVar9 + 4) = local_20f0._4_4_;
        *(undefined4 *)(pBVar9 + 8) = (undefined4)uStack_20e8;
        *(undefined4 *)(pBVar9 + 0xc) = uStack_20e8._4_4_;
        *(uint **)(pBVar9 + 0x10) = local_20e0;
        *(undefined1 **)(pBVar9 + 0x18) = puStack_20d8;
        lVar6 = lVar11;
      } while ((uint)lVar11 < local_2124[0]);
    }
  }
  if (local_c0 != local_20c0) {
    embree::alignedFree(local_c0);
  }
  if (local_48 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pBVar9;
  }
LAB_0010a60a:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleMi<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned int>
   const&) const */

void __thiscall
embree::sse2::BVHBuilderMorton::
BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMi<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>
::recreateMortonCodes
          (BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMi<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>
           *this,range *param_1)

{
  uint *puVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  uint *puVar8;
  long lVar9;
  ulong uVar10;
  uint *puVar11;
  long lVar12;
  TaskScheduler *this_00;
  ulong uVar13;
  long lVar14;
  uint *puVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long in_FS_OFFSET;
  uint uVar20;
  uint uVar24;
  uint uVar25;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar26;
  float fVar28;
  float fVar29;
  undefined1 auVar27 [16];
  undefined1 auVar30 [16];
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined1 auVar36 [16];
  BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMi<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>
  *local_b8;
  long local_b0;
  undefined1 local_a8 [16];
  undefined1 local_98 [8];
  float fStack_90;
  float fStack_8c;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  TaskGroupContext *local_68;
  undefined1 local_58 [16];
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  long local_30;
  
  uVar20 = *(uint *)param_1;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar24 = *(uint *)(param_1 + 4);
  uVar10 = (ulong)uVar24;
  if (uVar24 - uVar20 < 0x400) {
    lVar9 = *(long *)(this + 0x58);
    uVar13 = (ulong)uVar20;
    if (uVar13 < uVar10) {
      lVar19 = uVar13 * 8;
      lVar16 = lVar9 + lVar19;
      lVar12 = **(long **)(this + 0x48);
      auVar30._4_4_ = _LC2;
      auVar30._0_4_ = _LC2;
      auVar30._8_4_ = _LC2;
      auVar30._12_4_ = _LC2;
      auVar36._4_4_ = _LC4;
      auVar36._0_4_ = _LC4;
      auVar36._8_4_ = _LC4;
      auVar36._12_4_ = _LC4;
      lVar17 = *(long *)(lVar12 + 0x58);
      lVar18 = *(long *)(lVar12 + 0x60);
      lVar14 = *(long *)(lVar12 + 0x88);
      lVar12 = *(long *)(lVar12 + 0x90);
      do {
        puVar8 = (uint *)(lVar16 + 4);
        lVar16 = lVar16 + 8;
        puVar8 = (uint *)((ulong)*puVar8 * lVar18 + lVar17);
        auVar22 = *(undefined1 (*) [16])(lVar14 + (ulong)*puVar8 * lVar12);
        auVar27 = *(undefined1 (*) [16])(lVar14 + (ulong)puVar8[1] * lVar12);
        auVar23 = *(undefined1 (*) [16])(lVar14 + (ulong)puVar8[2] * lVar12);
        auVar21 = maxps(auVar22,auVar27);
        auVar27 = minps(auVar22,auVar27);
        auVar22 = maxps(auVar21,auVar23);
        auVar21 = minps(auVar27,auVar23);
        auVar27._0_4_ = auVar22._0_4_ + auVar21._0_4_;
        auVar27._4_4_ = auVar22._4_4_ + auVar21._4_4_;
        auVar27._8_4_ = auVar22._8_4_ + auVar21._8_4_;
        auVar27._12_4_ = auVar22._12_4_ + auVar21._12_4_;
        auVar30 = minps(auVar30,auVar27);
        auVar36 = maxps(auVar36,auVar27);
      } while (lVar9 + uVar10 * 8 != lVar16);
      auVar21._0_4_ = auVar36._0_4_ - auVar30._0_4_;
      auVar21._4_4_ = auVar36._4_4_ - auVar30._4_4_;
      auVar21._8_4_ = auVar36._8_4_ - auVar30._8_4_;
      auVar21._12_4_ = auVar36._12_4_ - auVar30._12_4_;
      auVar22 = rcpps(auVar23,auVar21);
      bVar5 = _LC8 < auVar21._0_4_;
      bVar6 = _LC8 < auVar21._4_4_;
      bVar7 = _LC8 < auVar21._8_4_;
      fVar26 = auVar22._0_4_;
      fVar28 = auVar22._4_4_;
      fVar29 = auVar22._8_4_;
      fVar26 = ((_LC10 - auVar21._0_4_ * fVar26) * fVar26 + fVar26) * _LC12;
      fVar28 = ((_LC10 - auVar21._4_4_ * fVar28) * fVar28 + fVar28) * _LC12;
      fVar29 = ((_LC10 - auVar21._8_4_ * fVar29) * fVar29 + fVar29) * _LC12;
      while( true ) {
        puVar8 = (uint *)((ulong)((uint *)(lVar9 + lVar19))[1] * lVar18 + lVar17);
        auVar22 = *(undefined1 (*) [16])(lVar14 + (ulong)*puVar8 * lVar12);
        auVar36 = *(undefined1 (*) [16])(lVar14 + (ulong)puVar8[1] * lVar12);
        auVar27 = *(undefined1 (*) [16])(lVar14 + (ulong)puVar8[2] * lVar12);
        auVar23 = maxps(auVar22,auVar36);
        auVar36 = minps(auVar22,auVar36);
        auVar22 = maxps(auVar23,auVar27);
        auVar36 = minps(auVar36,auVar27);
        uVar20 = (uint)(((auVar22._0_4_ + auVar36._0_4_) - auVar30._0_4_) *
                       (float)(-(uint)bVar5 & (uint)fVar26));
        uVar24 = (uint)(((auVar22._4_4_ + auVar36._4_4_) - auVar30._4_4_) *
                       (float)(-(uint)bVar6 & (uint)fVar28));
        uVar25 = (uint)(((auVar22._8_4_ + auVar36._8_4_) - auVar30._8_4_) *
                       (float)(-(uint)bVar7 & (uint)fVar29));
        uVar13 = uVar13 + 1;
        *(uint *)(lVar9 + lVar19) =
             ((((uVar24 << 0x10 | uVar24) & 0x30000ff) * 0x101 & 0x300f00f) * 0x11 & 0x30c30c3) * 10
             & 0x12492492 |
             (((((uVar25 << 0x10 | uVar25) & 0x30000ff) * 0x101 & 0x300f00f) * 0x11 & 0x30c30c3) * 5
             & 0x9249249) << 2 |
             ((((uVar20 << 0x10 | uVar20) & 0x30000ff) * 0x101 & 0x300f00f) * 0x11 & 0x30c30c3) * 5
             & 0x9249249;
        uVar10 = (ulong)*(uint *)(param_1 + 4);
        if (uVar10 <= uVar13) break;
        lVar9 = *(long *)(this + 0x58);
        lVar19 = uVar13 * 8;
        lVar16 = **(long **)(this + 0x48);
        lVar14 = *(long *)(lVar16 + 0x88);
        lVar17 = *(long *)(lVar16 + 0x58);
        lVar18 = *(long *)(lVar16 + 0x60);
        lVar12 = *(long *)(lVar16 + 0x90);
      }
      uVar13 = (ulong)*(uint *)param_1;
      lVar9 = *(long *)(this + 0x58);
    }
    puVar8 = (uint *)(lVar9 + uVar10 * 8);
    puVar1 = (uint *)(lVar9 + uVar13 * 8);
    if (puVar8 != puVar1) {
      lVar9 = uVar10 * 8 + uVar13 * -8;
      uVar10 = lVar9 >> 3;
      if (uVar10 == 0) {
        std::
        __introsort_loop<embree::sse2::BVHBuilderMorton::BuildPrim*,long,__gnu_cxx::__ops::_Iter_less_iter>
                  (puVar1,puVar8,0xfffffffffffffffe);
      }
      else {
        lVar16 = 0x3f;
        if (uVar10 != 0) {
          for (; uVar10 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        std::
        __introsort_loop<embree::sse2::BVHBuilderMorton::BuildPrim*,long,__gnu_cxx::__ops::_Iter_less_iter>
                  (puVar1,puVar8,(long)(int)lVar16 * 2);
        if (0x80 < lVar9) {
          puVar15 = puVar1 + 0x20;
          std::
          __insertion_sort<embree::sse2::BVHBuilderMorton::BuildPrim*,__gnu_cxx::__ops::_Iter_less_iter>
                    (puVar1,puVar15);
          for (; puVar8 != puVar15; puVar15 = puVar15 + 2) {
            while( true ) {
              uVar4 = *(undefined8 *)puVar15;
              uVar20 = *puVar15;
              puVar1 = puVar15 + -2;
              if (puVar15[-2] <= uVar20) break;
              do {
                puVar11 = puVar1;
                *(undefined8 *)(puVar11 + 2) = *(undefined8 *)puVar11;
                puVar1 = puVar11 + -2;
              } while (uVar20 < puVar11[-2]);
              puVar15 = puVar15 + 2;
              *(undefined8 *)puVar11 = uVar4;
              if (puVar8 == puVar15) goto LAB_0010a936;
            }
            *(undefined8 *)puVar15 = uVar4;
          }
          goto LAB_0010a936;
        }
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        std::
        __insertion_sort<embree::sse2::BVHBuilderMorton::BuildPrim*,__gnu_cxx::__ops::_Iter_less_iter>
                  (puVar1,puVar8);
        return;
      }
      goto LAB_0010acaf;
    }
  }
  else {
    uVar25 = (uVar24 - uVar20) + 0x3ff >> 10;
    local_88._4_4_ = _LC2;
    local_88._0_4_ = _LC2;
    local_88._8_4_ = _LC2;
    local_88._12_4_ = _LC2;
    local_78._4_4_ = (float)_LC4;
    local_78._0_4_ = (float)_LC4;
    local_78._8_4_ = (float)_LC4;
    local_78._12_4_ = (float)_LC4;
    local_b8 = this;
    if (uVar25 == 1) {
      _local_98 = local_78;
      local_a8 = local_88;
      if ((ulong)uVar20 < (ulong)uVar24) {
        lVar9 = *(long *)(this + 0x58) + (ulong)uVar20 * 8;
        do {
          lVar16 = **(long **)(this + 0x48);
          puVar8 = (uint *)(lVar9 + 4);
          lVar9 = lVar9 + 8;
          puVar8 = (uint *)((ulong)*puVar8 * *(long *)(lVar16 + 0x60) + *(long *)(lVar16 + 0x58));
          lVar19 = *(long *)(lVar16 + 0x88);
          lVar16 = *(long *)(lVar16 + 0x90);
          auVar30 = *(undefined1 (*) [16])(lVar19 + (ulong)*puVar8 * lVar16);
          auVar22 = *(undefined1 (*) [16])(lVar19 + (ulong)puVar8[1] * lVar16);
          auVar36 = *(undefined1 (*) [16])(lVar19 + (ulong)puVar8[2] * lVar16);
          auVar27 = maxps(auVar30,auVar22);
          auVar22 = minps(auVar30,auVar22);
          auVar30 = maxps(auVar27,auVar36);
          auVar36 = minps(auVar22,auVar36);
          auVar22._0_4_ = auVar30._0_4_ + auVar36._0_4_;
          auVar22._4_4_ = auVar30._4_4_ + auVar36._4_4_;
          auVar22._8_4_ = auVar30._8_4_ + auVar36._8_4_;
          auVar22._12_4_ = auVar30._12_4_ + auVar36._12_4_;
          local_a8 = minps(local_a8,auVar22);
          _local_98 = maxps(_local_98,auVar22);
        } while (*(long *)(this + 0x58) + (ulong)uVar24 * 8 != lVar9);
        local_78._0_4_ = SUB164(_local_98,0) - local_a8._0_4_;
        local_78._4_4_ = SUB164(_local_98,4) - local_a8._4_4_;
        local_78._8_4_ = SUB164(_local_98,8) - local_a8._8_4_;
        local_78._12_4_ = SUB164(_local_98,0xc) - local_a8._12_4_;
        uVar10 = 0x400;
      }
      else {
        uVar10 = 0x400;
      }
    }
    else {
      parallel_reduce_internal<unsigned_int,embree::BBox<embree::Vec3fa>,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMi<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned_int>const&)const::_lambda(embree::range<unsigned_int>const&)_1_,embree::BBox<embree::Vec3fa>const(embree::BBox<embree::Vec3fa>const&,embree::BBox<embree::Vec3fa>const&)>
                ((uint)local_a8,uVar25,uVar20,uVar24,(BBox *)local_88,
                 (_lambda_embree__range<unsigned_int>_const___1_ *)&local_b8,
                 BBox<embree::Vec3fa>::merge);
      uVar24 = *(uint *)(param_1 + 4);
      uVar20 = *(uint *)param_1;
      local_78._0_4_ = (float)local_98._0_4_ - local_a8._0_4_;
      local_78._4_4_ = (float)local_98._4_4_ - local_a8._4_4_;
      local_78._8_4_ = fStack_90 - local_a8._8_4_;
      local_78._12_4_ = fStack_8c - local_a8._12_4_;
      uVar10 = (ulong)(uVar24 - uVar20);
    }
    auVar30 = local_88;
    auVar22 = rcpps(local_a8,local_78);
    fVar29 = local_78._0_4_;
    fVar31 = local_78._12_4_;
    local_b0 = 0;
    fVar26 = local_78._4_4_;
    fVar28 = local_78._8_4_;
    local_88._4_4_ = uVar20;
    local_88._0_4_ = uVar24;
    fVar32 = auVar22._0_4_;
    fVar33 = auVar22._4_4_;
    fVar34 = auVar22._8_4_;
    fVar35 = auVar22._12_4_;
    local_88._12_4_ = auVar30._12_4_;
    local_88._8_4_ = 0x400;
    local_78._8_8_ = local_58;
    local_78._0_8_ = this;
    local_48 = (uint)(((_LC10 - fVar29 * fVar32) * fVar32 + fVar32) * _LC12) &
               -(uint)(_LC8 < fVar29);
    uStack_44 = (uint)(((_LC10 - fVar26 * fVar33) * fVar33 + fVar33) * _LC12) &
                -(uint)(_LC8 < fVar26);
    uStack_40 = (uint)(((_LC10 - fVar28 * fVar34) * fVar34 + fVar34) * _LC12) &
                -(uint)(_LC8 < fVar28);
    uStack_3c = (uint)(((_LC10 - fVar31 * fVar35) * fVar35 + fVar35) * _LC12) &
                -(uint)(_LC8 < fVar31);
    local_68 = (TaskGroupContext *)&local_b0;
    local_58 = local_a8;
    lVar9 = embree::TaskScheduler::thread();
    if (lVar9 == 0) {
      this_00 = (TaskScheduler *)embree::TaskScheduler::instance();
      TaskScheduler::
      spawn_root<embree::TaskScheduler::spawn<unsigned_int,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMi<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned_int>const&)const::_lambda(embree::range<unsigned_int>const&)_2_>(unsigned_int,unsigned_int,unsigned_int,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMi<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned_int>const&)const::_lambda(embree::range<unsigned_int>const&)_2_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
                (this_00,(_lambda___1_ *)local_88,(TaskGroupContext *)&local_b0,uVar10,true);
    }
    else {
      if (0xfff < *(ulong *)(lVar9 + 0x40080)) goto LAB_0010acce;
      lVar16 = *(long *)(lVar9 + 0xc00c0);
      uVar13 = lVar16 + 0x30 + (ulong)(-(int)lVar16 & 0x3f);
      if (0x80000 < uVar13) goto LAB_0010acce;
      *(ulong *)(lVar9 + 0xc00c0) = uVar13;
      puVar3 = (undefined8 *)(lVar9 + 0x40090 + uVar13);
      *puVar3 = &PTR_execute_001171f8;
      puVar3[1] = local_88._0_8_;
      puVar3[2] = local_88._8_8_;
      puVar3[3] = local_78._0_8_;
      puVar3[4] = local_78._8_8_;
      puVar3[5] = local_68;
      lVar12 = *(long *)(lVar9 + 0x40080) * 0x40;
      piVar2 = (int *)(lVar9 + 0x40 + lVar12);
      lVar19 = *(long *)(lVar9 + 0xc0100);
      *(undefined4 *)(lVar9 + 0x44 + lVar12) = 1;
      *(undefined1 *)(lVar9 + 0x48 + lVar12) = 1;
      lVar12 = lVar12 + lVar9;
      *(undefined8 **)(lVar12 + 0x50) = puVar3;
      *(long *)(lVar12 + 0x58) = lVar19;
      *(TaskGroupContext **)(lVar12 + 0x60) = (TaskGroupContext *)&local_b0;
      *(long *)(lVar12 + 0x68) = lVar16;
      *(ulong *)(lVar12 + 0x70) = uVar10;
      if (lVar19 != 0) {
        LOCK();
        *(int *)(lVar19 + 4) = *(int *)(lVar19 + 4) + 1;
        UNLOCK();
      }
      LOCK();
      if (*piVar2 == 0) {
        *piVar2 = 1;
      }
      UNLOCK();
      LOCK();
      *(long *)(lVar9 + 0x40080) = *(long *)(lVar9 + 0x40080) + 1;
      UNLOCK();
      if (*(long *)(lVar9 + 0x40080) - 1U <= *(ulong *)(lVar9 + 0x40040)) {
        LOCK();
        *(long *)(lVar9 + 0x40040) = *(long *)(lVar9 + 0x40080) + -1;
        UNLOCK();
      }
    }
    embree::TaskScheduler::wait();
    if (local_b0 != 0) {
      local_88._0_8_ = local_b0;
      std::__exception_ptr::exception_ptr::_M_addref();
      std::rethrow_exception(local_88);
LAB_0010acce:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    radixsort32<embree::sse2::BVHBuilderMorton::BuildPrim>
              ((BuildPrim *)(*(long *)(this + 0x58) + (ulong)*(uint *)param_1 * 8),
               (ulong)(*(int *)(param_1 + 4) - *(uint *)param_1),(uint)*(long *)(this + 0x58));
  }
LAB_0010a936:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010acaf:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleMi<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned long, embree::range<unsigned int>
   const&, embree::FastAllocator::CachedAllocator, bool) */

undefined8 *
embree::sse2::BVHBuilderMorton::
BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMi<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>
::recurse(undefined8 *param_1,
         BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMi<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>
         *param_2,long param_3,range *param_4,char param_5,undefined8 param_6,FastAllocator *param_7
         ,MutexSys *param_8)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  MutexSys *pMVar13;
  int iVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong *puVar18;
  ulong *puVar19;
  long lVar20;
  MutexSys *pMVar21;
  uint uVar22;
  long lVar23;
  MutexSys *pMVar24;
  long in_FS_OFFSET;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  MutexSys *local_280;
  MutexSys *pMStack_260;
  long local_250;
  ulong uStack_248;
  ulong uStack_240;
  undefined1 local_238 [12];
  undefined4 uStack_22c;
  MutexSys *pMStack_228;
  BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMi<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>
  *pBStack_220;
  undefined4 uStack_218;
  undefined4 uStack_214;
  uint auStack_210 [2];
  uint auStack_208 [2];
  undefined8 uStack_200;
  int aiStack_1f8 [5];
  int iStack_1e4;
  int iStack_1e0;
  int iStack_1dc;
  int iStack_1d8;
  int iStack_1d4;
  int iStack_1d0;
  int iStack_1cc;
  ulong auStack_1c8 [2];
  undefined1 auStack_1b8 [12];
  int iStack_1ac;
  undefined1 auStack_1a8 [16];
  ulong uStack_198;
  undefined1 auStack_188 [12];
  int iStack_17c;
  undefined1 auStack_178 [16];
  ulong uStack_168;
  undefined1 auStack_158 [12];
  int iStack_14c;
  undefined1 auStack_148 [16];
  ulong uStack_138;
  undefined1 auStack_128 [12];
  int iStack_11c;
  undefined1 auStack_118 [16];
  int iStack_ec;
  long local_40;
  
  lVar23 = lRam000000000010b761;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_250 = param_3;
  if (param_7 == (FastAllocator *)0x0) {
    param_8 = *(MutexSys **)(in_FS_OFFSET + lRam000000000010b761);
    param_7 = (FastAllocator *)**(ulong **)(param_2 + 0x28);
    if (param_8 == (MutexSys *)0x0) {
      param_8 = (MutexSys *)embree::alignedMalloc(0xc0,0x40);
      embree::MutexSys::MutexSys(param_8);
      *(undefined8 *)(param_8 + 8) = 0;
      *(MutexSys **)(param_8 + 0x40) = param_8;
      *(undefined8 *)(param_8 + 0x48) = 0;
      *(undefined8 *)(param_8 + 0x50) = 0;
      *(undefined8 *)(param_8 + 0x58) = 0;
      *(undefined8 *)(param_8 + 0x60) = 0;
      *(undefined8 *)(param_8 + 0x68) = 0;
      *(undefined8 *)(param_8 + 0x70) = 0;
      *(MutexSys **)(param_8 + 0x80) = param_8;
      *(undefined8 *)(param_8 + 0x88) = 0;
      *(undefined8 *)(param_8 + 0x90) = 0;
      *(undefined8 *)(param_8 + 0x98) = 0;
      *(undefined8 *)(param_8 + 0xa0) = 0;
      *(undefined8 *)(param_8 + 0xa8) = 0;
      *(undefined8 *)(param_8 + 0xb0) = 0;
      *(MutexSys **)(in_FS_OFFSET + lVar23) = param_8;
      embree::MutexSys::lock();
      local_238._0_8_ = param_8;
      if (__MutexSys == _createMortonCodeArray<embree::TriangleMesh>) {
        std::
        vector<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>,std::allocator<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>>>
        ::
        _M_realloc_insert<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>>
                  ((vector<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>,std::allocator<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>>>
                    *)&FastAllocator::s_thread_local_allocators,__MutexSys,local_238);
        uVar8 = local_238._0_8_;
        if ((MutexSys *)local_238._0_8_ != (MutexSys *)0x0) {
          embree::MutexSys::~MutexSys((MutexSys *)local_238._0_8_);
          embree::alignedFree((void *)uVar8);
        }
      }
      else {
        *__MutexSys = param_8;
        __MutexSys = __MutexSys + 1;
      }
      embree::MutexSys::unlock();
    }
    param_8 = param_8 + 0x40;
  }
  if ((param_5 == '\0') ||
     (*(ulong *)(param_2 + 0x20) < (ulong)(uint)(*(int *)(param_4 + 4) - *(int *)param_4))) {
LAB_0010ad4a:
    if (*(ulong *)(param_2 + 8) <= local_250 + 8U) goto LAB_0010b710;
  }
  else {
    if (*(code **)**(undefined8 **)(param_2 + 0x50) !=
        Scene::BuildProgressMonitorInterface::operator()) {
      (**(code **)**(undefined8 **)(param_2 + 0x50))();
      goto LAB_0010ad4a;
    }
    embree::Scene::progressMonitor((double)(uint)(*(int *)(param_4 + 4) - *(int *)param_4));
    if (*(ulong *)(param_2 + 8) <= local_250 + 8U) goto LAB_0010b710;
  }
  uVar15 = *(uint *)(param_4 + 4);
  uVar9 = *(uint *)param_4;
  uVar17 = (ulong)uVar9;
  if ((ulong)(uVar15 - uVar9) <= *(ulong *)(param_2 + 0x10)) {
LAB_0010b710:
    createLargeLeaf(param_1,param_2,local_250,param_4);
LAB_0010b5ca:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  lVar23 = *(long *)(param_2 + 0x58);
  uVar9 = *(uint *)(lVar23 + (ulong)(uVar15 - 1) * 8) ^ *(uint *)(lVar23 + (ulong)uVar9 * 8);
  if (uVar9 == 0) {
LAB_0010ba60:
    recreateMortonCodes(param_2,param_4);
    uVar15 = *(uint *)(param_4 + 4);
    lVar23 = *(long *)(param_2 + 0x58);
    uVar17 = (ulong)*(uint *)param_4;
    uVar9 = *(uint *)(lVar23 + (ulong)(uVar15 - 1) * 8) ^ *(uint *)(lVar23 + uVar17 * 8);
    if (uVar9 != 0) {
      iVar14 = 0x1f;
      if (uVar9 != 0) {
        for (; uVar9 >> iVar14 == 0; iVar14 = iVar14 + -1) {
        }
      }
      iVar14 = 0x1f - iVar14;
      if (iVar14 != 0x20) goto LAB_0010ad9d;
    }
    auStack_208[1] = *(uint *)param_4 + uVar15 >> 1;
  }
  else {
    iVar14 = 0x1f;
    if (uVar9 != 0) {
      for (; uVar9 >> iVar14 == 0; iVar14 = iVar14 + -1) {
      }
    }
    iVar14 = 0x1f - iVar14;
    if (iVar14 == 0x20) goto LAB_0010ba60;
LAB_0010ad9d:
    uVar9 = (int)uVar17 + 1;
    uVar16 = uVar17;
    uVar11 = uVar15;
    while (auStack_208[1] = uVar11, uVar9 != auStack_208[1]) {
      uVar11 = (int)uVar16 + auStack_208[1] >> 1;
      if ((0x80000000U >> ((byte)iVar14 & 0x1f) & *(uint *)(lVar23 + (ulong)uVar11 * 8)) == 0) {
        uVar16 = (ulong)uVar11;
        uVar9 = uVar11 + 1;
        uVar11 = auStack_208[1];
      }
    }
  }
  auStack_208[0] = (uint)uVar17;
  puVar18 = (ulong *)0x2;
  pMVar21 = (MutexSys *)auStack_208;
  uStack_200._0_4_ = auStack_208[1];
  uStack_200._4_4_ = uVar15;
  if (2 < *(ulong *)param_2) {
    do {
      uVar9 = auStack_208[1] - (int)uVar17;
      uVar17 = *(ulong *)(param_2 + 0x10);
      if ((uVar9 <= uVar17) || (lVar20 = 0, uVar9 == 0)) {
        lVar20 = -1;
        uVar9 = 0;
      }
      uVar15 = uStack_200._4_4_ - (uint)uStack_200;
      if ((uVar17 < uVar15) && (uVar9 < uVar15)) {
        lVar20 = 1;
        uVar9 = uVar15;
        if (puVar18 != (ulong *)0x2) {
LAB_0010ae6e:
          uVar15 = aiStack_1f8[1] - aiStack_1f8[0];
          if ((uVar17 < uVar15) && (uVar9 < uVar15)) {
            lVar20 = 2;
            uVar9 = uVar15;
            if (puVar18 == (ulong *)0x3) goto LAB_0010af90;
          }
          else if (puVar18 == (ulong *)0x3) goto LAB_0010b058;
          uVar15 = aiStack_1f8[3] - aiStack_1f8[2];
          if ((uVar17 < uVar15) && (uVar9 < uVar15)) {
            lVar20 = 3;
            uVar9 = uVar15;
            if (puVar18 == (ulong *)0x4) goto LAB_0010af90;
          }
          else if (puVar18 == (ulong *)0x4) goto LAB_0010b058;
          uVar15 = iStack_1e4 - aiStack_1f8[4];
          if ((uVar17 < uVar15) && (uVar9 < uVar15)) {
            lVar20 = 4;
            uVar9 = uVar15;
            if (puVar18 == (ulong *)0x5) goto LAB_0010af90;
          }
          else if (puVar18 == (ulong *)0x5) goto LAB_0010b058;
          uVar15 = iStack_1dc - iStack_1e0;
          if ((uVar9 < uVar15) && (uVar17 < uVar15)) {
            lVar20 = 5;
            uVar9 = uVar15;
            if (puVar18 == (ulong *)0x6) goto LAB_0010af90;
          }
          else if (puVar18 == (ulong *)0x6) goto LAB_0010b058;
          uVar15 = iStack_1d4 - iStack_1d8;
          if ((uVar15 <= uVar9) || (uVar15 <= uVar17)) {
            if (puVar18 == (ulong *)&DAT_00000008) goto LAB_0010af60;
            iVar14 = (int)lVar20;
            goto joined_r0x0010b64d;
          }
          lVar20 = 6;
          uVar9 = uVar15;
          if (puVar18 == (ulong *)&DAT_00000008) {
LAB_0010af60:
            if (((uint)(iStack_1cc - iStack_1d0) <= uVar17) ||
               ((uint)(iStack_1cc - iStack_1d0) <= uVar9)) goto LAB_0010b058;
            lVar20 = 7;
          }
        }
      }
      else {
        if (puVar18 != (ulong *)0x2) goto LAB_0010ae6e;
LAB_0010b058:
        iVar14 = (int)lVar20;
joined_r0x0010b64d:
        if (iVar14 == -1) break;
      }
LAB_0010af90:
      uVar9 = auStack_208[lVar20 * 2 + 1];
      uVar17 = (ulong)auStack_208[lVar20 * 2];
      uVar15 = *(uint *)(lVar23 + (ulong)(uVar9 - 1) * 8) ^ *(uint *)(lVar23 + uVar17 * 8);
      if (uVar15 == 0) {
LAB_0010b668:
        recreateMortonCodes(param_2,(range *)(pMVar21 + lVar20 * 8));
        lVar23 = *(long *)(param_2 + 0x58);
        uVar9 = auStack_208[lVar20 * 2 + 1];
        uVar15 = auStack_208[lVar20 * 2];
        uVar17 = (ulong)uVar15;
        uVar11 = *(uint *)(lVar23 + (ulong)(uVar9 - 1) * 8) ^ *(uint *)(lVar23 + uVar17 * 8);
        if (uVar11 != 0) {
          iVar14 = 0x1f;
          if (uVar11 != 0) {
            for (; uVar11 >> iVar14 == 0; iVar14 = iVar14 + -1) {
            }
          }
          iVar14 = 0x1f - iVar14;
          if (iVar14 != 0x20) goto LAB_0010afc5;
        }
        uVar11 = uVar15 + uVar9;
        uVar9 = auStack_208[lVar20 * 2 + 1];
        uVar11 = uVar11 >> 1;
      }
      else {
        iVar14 = 0x1f;
        if (uVar15 != 0) {
          for (; uVar15 >> iVar14 == 0; iVar14 = iVar14 + -1) {
          }
        }
        iVar14 = 0x1f - iVar14;
        if (iVar14 == 0x20) goto LAB_0010b668;
LAB_0010afc5:
        uVar15 = (uint)uVar17;
        uVar22 = uVar15 + 1;
        uVar10 = uVar9;
        while (uVar11 = uVar10, uVar22 != uVar11) {
          uVar10 = (int)uVar17 + uVar11 >> 1;
          if ((0x80000000U >> ((byte)iVar14 & 0x1f) & *(uint *)(lVar23 + (ulong)uVar10 * 8)) == 0) {
            uVar17 = (ulong)uVar10;
            uVar22 = uVar10 + 1;
            uVar10 = uVar11;
          }
        }
      }
      *(undefined8 *)(auStack_208 + lVar20 * 2) = *(undefined8 *)(auStack_210 + (long)puVar18 * 2);
      auStack_210[(long)puVar18 * 2] = uVar15;
      auStack_210[(long)puVar18 * 2 + 1] = uVar11;
      *(uint *)(pMVar21 + (long)puVar18 * 8) = uVar11;
      auStack_208[(long)puVar18 * 2 + 1] = uVar9;
      puVar18 = (ulong *)((long)puVar18 + 1);
      if (*(ulong **)param_2 <= puVar18) break;
      uVar17 = (ulong)auStack_208[0];
    } while( true );
  }
  uStack_240 = 0x80;
  pMVar13 = *(MutexSys **)param_8;
  pMVar24 = pMVar13 + 8;
  if (param_7 == *(FastAllocator **)(pMVar13 + 8)) goto LAB_0010b232;
  embree::MutexSys::lock();
  if (*(ulong *)(pMVar13 + 8) != 0) {
    LOCK();
    *(long *)(*(ulong *)(pMVar13 + 8) + 0x118) =
         *(long *)(*(ulong *)(pMVar13 + 8) + 0x118) +
         *(ulong *)(pMVar13 + 0xa8) + *(ulong *)(pMVar13 + 0x68);
    UNLOCK();
    LOCK();
    *(long *)(*(ulong *)(pMVar13 + 8) + 0x120) =
         *(long *)(*(ulong *)(pMVar13 + 8) + 0x120) +
         (((*(ulong *)(pMVar13 + 0x98) + *(ulong *)(pMVar13 + 0x58)) - *(ulong *)(pMVar13 + 0x50)) -
         *(ulong *)(pMVar13 + 0x90));
    UNLOCK();
    LOCK();
    *(long *)(*(ulong *)(pMVar13 + 8) + 0x128) =
         *(long *)(*(ulong *)(pMVar13 + 8) + 0x128) +
         *(ulong *)(pMVar13 + 0xb0) + *(ulong *)(pMVar13 + 0x70);
    UNLOCK();
  }
  *(ulong *)(pMVar13 + 0x48) = 0;
  *(ulong *)(pMVar13 + 0x58) = 0;
  *(ulong *)(pMVar13 + 0x50) = 0;
  *(ulong *)(pMVar13 + 0x68) = 0;
  *(ulong *)(pMVar13 + 0x70) = 0;
  *(ulong *)(pMVar13 + 0x60) = 0;
  if (param_7 == (FastAllocator *)0x0) goto LAB_0010b818;
  uVar17 = *(ulong *)(param_7 + 0x10);
  *(ulong *)(pMVar13 + 0x88) = 0;
  *(ulong *)(pMVar13 + 0x98) = 0;
  *(ulong *)(pMVar13 + 0x60) = uVar17;
  *(ulong *)(pMVar13 + 0x90) = 0;
  *(ulong *)(pMVar13 + 0xa8) = 0;
  *(ulong *)(pMVar13 + 0xb0) = 0;
  *(ulong *)(pMVar13 + 0xa0) = 0;
  uVar17 = *(ulong *)(param_7 + 0x10);
LAB_0010b19e:
  *(ulong *)(pMVar13 + 0xa0) = uVar17;
  LOCK();
  *(FastAllocator **)pMVar24 = param_7;
  UNLOCK();
  local_238._0_8_ = pMVar13;
  embree::MutexSys::lock();
  if (*(undefined8 **)(param_7 + 0x138) == *(undefined8 **)(param_7 + 0x140)) {
    std::
    vector<embree::FastAllocator::ThreadLocal2*,std::allocator<embree::FastAllocator::ThreadLocal2*>>
    ::_M_realloc_insert<embree::FastAllocator::ThreadLocal2*const&>
              ((vector<embree::FastAllocator::ThreadLocal2*,std::allocator<embree::FastAllocator::ThreadLocal2*>>
                *)(param_7 + 0x130));
  }
  else {
    **(undefined8 **)(param_7 + 0x138) = pMVar13;
    *(long *)(param_7 + 0x138) = *(long *)(param_7 + 0x138) + 8;
  }
  embree::MutexSys::unlock();
  embree::MutexSys::unlock();
  pMStack_260 = pMVar13;
LAB_0010b232:
  local_280 = (MutexSys *)local_238;
  uVar16 = *(ulong *)(param_8 + 0x10);
  *(ulong *)(param_8 + 0x28) = *(ulong *)(param_8 + 0x28) + 0x80;
  uVar12 = (ulong)(-(int)uVar16 & 0xf);
  uVar17 = uVar16 + 0x80 + uVar12;
  *(ulong *)(param_8 + 0x10) = uVar17;
  if (*(ulong *)(param_8 + 0x18) < uVar17) {
    *(ulong *)(param_8 + 0x10) = uVar16;
    pMStack_260 = param_8;
    if (*(ulong *)(param_8 + 0x20) < 0x200) goto LAB_0010bbf6;
    local_238._0_8_ = *(ulong *)(param_8 + 0x20);
    pMVar13 = (MutexSys *)FastAllocator::malloc(param_7,(ulong *)local_280,0x40,true);
    *(MutexSys **)(param_8 + 8) = pMVar13;
    uVar17 = *(ulong *)(param_8 + 0x10);
    *(ulong *)(param_8 + 0x10) = 0x80;
    *(ulong *)(param_8 + 0x30) = (*(ulong *)(param_8 + 0x18) + *(ulong *)(param_8 + 0x30)) - uVar17;
    *(undefined8 *)(param_8 + 0x18) = local_238._0_8_;
    if ((ulong)local_238._0_8_ < 0x80) {
      *(ulong *)(param_8 + 0x10) = 0;
      local_238._0_8_ = *(ulong *)(param_8 + 0x20);
      pMVar13 = (MutexSys *)FastAllocator::malloc(param_7,(ulong *)local_280,0x40,false);
      *(MutexSys **)(param_8 + 8) = pMVar13;
      uVar17 = *(ulong *)(param_8 + 0x10);
      *(ulong *)(param_8 + 0x10) = 0x80;
      *(ulong *)(param_8 + 0x30) =
           (*(ulong *)(param_8 + 0x18) + *(ulong *)(param_8 + 0x30)) - uVar17;
      *(undefined8 *)(param_8 + 0x18) = local_238._0_8_;
      if ((ulong)local_238._0_8_ < 0x80) {
        pMVar13 = (MutexSys *)0x0;
        *(ulong *)(param_8 + 0x10) = 0;
      }
    }
  }
  else {
    *(ulong *)(param_8 + 0x30) = *(ulong *)(param_8 + 0x30) + uVar12;
    pMVar13 = (MutexSys *)((*(ulong *)(param_8 + 8) - 0x80) + uVar17);
  }
  do {
    uVar16 = _UNK_00117638;
    uVar7 = _UNK_0011762c;
    uVar6 = _UNK_00117628;
    uVar5 = _UNK_00117624;
    uVar4 = _LC2;
    uVar17 = CONCAT44(_UNK_00117634,_LC4);
    *(ulong *)pMVar13 = 8;
    *(ulong *)(pMVar13 + 8) = 8;
    *(ulong *)(pMVar13 + 0x10) = 8;
    *(ulong *)(pMVar13 + 0x18) = 8;
    *(undefined4 *)(pMVar13 + 0x60) = uVar4;
    *(undefined4 *)(pMVar13 + 100) = uVar5;
    *(undefined4 *)(pMVar13 + 0x68) = uVar6;
    *(undefined4 *)(pMVar13 + 0x6c) = uVar7;
    *(undefined4 *)(pMVar13 + 0x40) = uVar4;
    *(undefined4 *)(pMVar13 + 0x44) = uVar5;
    *(undefined4 *)(pMVar13 + 0x48) = uVar6;
    *(undefined4 *)(pMVar13 + 0x4c) = uVar7;
    *(undefined4 *)(pMVar13 + 0x20) = uVar4;
    *(undefined4 *)(pMVar13 + 0x24) = uVar5;
    *(undefined4 *)(pMVar13 + 0x28) = uVar6;
    *(undefined4 *)(pMVar13 + 0x2c) = uVar7;
    *(ulong *)(pMVar13 + 0x70) = uVar17;
    *(ulong *)(pMVar13 + 0x78) = uVar16;
    *(ulong *)(pMVar13 + 0x50) = uVar17;
    *(ulong *)(pMVar13 + 0x58) = uVar16;
    *(ulong *)(pMVar13 + 0x30) = uVar17;
    *(ulong *)(pMVar13 + 0x38) = uVar16;
    if (*(ulong *)(param_2 + 0x20) <
        (ulong)(uint)(*(int *)((MutexSys *)param_4 + 4) - *(int *)param_4)) {
      stack0xfffffffffffffdd0 = &local_250;
      local_238._0_8_ = auStack_1c8;
      uStack_248 = 0;
      pMStack_228 = pMVar21;
      pBStack_220 = param_2;
      TaskScheduler::
      spawn<unsigned_long,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMi<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned_long,embree::range<unsigned_int>const&,embree::FastAllocator::CachedAllocator,bool)::_lambda(embree::range<unsigned_long>const&)_1_>
                (0,(ulong)puVar18,1,(_lambda_embree__range<unsigned_long>_const___1_ *)local_280,
                 (TaskGroupContext *)&uStack_248);
      embree::TaskScheduler::wait();
      if (uStack_248 != 0) break;
    }
    else {
      pMVar24 = pMVar21 + (long)puVar18 * 8;
      puVar19 = auStack_1c8;
      do {
        param_4 = (range *)(pMVar21 + 8);
        recurse(local_280,param_2,local_250 + 1,pMVar21,0);
        *puVar19 = local_238._0_8_;
        puVar19[2] = (ulong)pMStack_228;
        puVar19[3] = (ulong)pBStack_220;
        *(undefined4 *)(puVar19 + 4) = uStack_218;
        *(undefined4 *)((long)puVar19 + 0x24) = uStack_214;
        *(uint *)(puVar19 + 5) = auStack_210[0];
        *(uint *)((long)puVar19 + 0x2c) = auStack_210[1];
        puVar19 = puVar19 + 6;
        pMVar21 = (MutexSys *)param_4;
        pMStack_260 = pMVar13;
      } while (param_4 != (range *)pMVar24);
    }
    auVar26._12_4_ = iStack_1ac;
    auVar26._0_12_ = auStack_1b8;
    auVar27._4_4_ = _LC2;
    auVar27._0_4_ = _LC2;
    auVar27._8_4_ = _LC2;
    auVar27._12_4_ = _LC2;
    *(int *)(pMVar13 + 0x20) = auStack_1b8._0_4_;
    uVar4 = _LC4;
    auVar27 = minps(auVar27,auVar26);
    *(int *)(pMVar13 + 0x60) = auStack_1b8._8_4_;
    *(int *)(pMVar13 + 0x30) = auStack_1a8._0_4_;
    auVar25._4_4_ = uVar4;
    auVar25._0_4_ = uVar4;
    auVar25._8_4_ = uVar4;
    auVar25._12_4_ = uVar4;
    *(ulong *)pMVar13 = auStack_1c8[0];
    auVar26 = maxps(auVar25,auStack_1a8);
    *(int *)(pMVar13 + 0x40) = auStack_1b8._4_4_;
    *(int *)(pMVar13 + 0x50) = auStack_1a8._4_4_;
    auVar1._12_4_ = iStack_17c;
    auVar1._0_12_ = auStack_188;
    *(int *)(pMVar13 + 0x70) = auStack_1a8._8_4_;
    _local_238 = minps(auVar27,auVar1);
    *(int *)(pMVar13 + 0x24) = auStack_188._0_4_;
    auVar26 = maxps(auVar26,auStack_178);
    *(int *)(pMVar13 + 0x34) = auStack_178._0_4_;
    *(int *)(pMVar13 + 100) = auStack_188._8_4_;
    *(ulong *)(pMVar13 + 8) = uStack_198;
    *(int *)(pMVar13 + 0x44) = auStack_188._4_4_;
    *(int *)(pMVar13 + 0x54) = auStack_178._4_4_;
    *(int *)(pMVar13 + 0x74) = auStack_178._8_4_;
    if (puVar18 == (ulong *)0x2) {
      pMVar21 = (MutexSys *)((long)iStack_17c + (long)iStack_1ac);
    }
    else {
      auVar2._12_4_ = iStack_14c;
      auVar2._0_12_ = auStack_158;
      _local_238 = minps(_local_238,auVar2);
      *(int *)(pMVar13 + 0x28) = auStack_158._0_4_;
      auVar26 = maxps(auVar26,auStack_148);
      *(int *)(pMVar13 + 0x38) = auStack_148._0_4_;
      *(int *)(pMVar13 + 0x68) = auStack_158._8_4_;
      *(ulong *)(pMVar13 + 0x10) = uStack_168;
      *(int *)(pMVar13 + 0x48) = auStack_158._4_4_;
      *(int *)(pMVar13 + 0x58) = auStack_148._4_4_;
      *(int *)(pMVar13 + 0x78) = auStack_148._8_4_;
      if (puVar18 == (ulong *)0x3) {
        pMVar21 = (MutexSys *)((long)iStack_14c + (long)iStack_17c + (long)iStack_1ac);
      }
      else {
        auVar3._12_4_ = iStack_11c;
        auVar3._0_12_ = auStack_128;
        *(int *)(pMVar13 + 0x2c) = auStack_128._0_4_;
        _local_238 = minps(_local_238,auVar3);
        auVar26 = maxps(auVar26,auStack_118);
        *(ulong *)(pMVar13 + 0x18) = uStack_138;
        *(int *)(pMVar13 + 0x3c) = auStack_118._0_4_;
        *(int *)(pMVar13 + 0x4c) = auStack_128._4_4_;
        *(int *)(pMVar13 + 0x6c) = auStack_128._8_4_;
        *(int *)(pMVar13 + 0x5c) = auStack_118._4_4_;
        *(int *)(pMVar13 + 0x7c) = auStack_118._8_4_;
        pMVar21 = (MutexSys *)
                  ((long)iStack_11c + (long)iStack_14c + (long)iStack_17c + (long)iStack_1ac);
        if (puVar18 != (ulong *)0x4) {
          pMVar21 = pMVar21 + iStack_ec;
        }
      }
    }
    if (pMVar21 < (MutexSys *)0x1000) {
LAB_0010b5b1:
      uStack_22c = (int)pMVar21;
      auVar1 = _local_238;
      stack0xfffffffffffffdd0 = auVar1._8_8_;
      *param_1 = pMVar13;
      param_1[2] = local_238._0_8_;
      param_1[3] = stack0xfffffffffffffdd0;
      *(undefined1 (*) [16])(param_1 + 4) = auVar26;
      _local_238 = auVar1;
      goto LAB_0010b5ca;
    }
    if (iStack_1ac < 0x1000) {
      embree::sse2::BVHNRotate<4>::rotate(*(ulong *)pMVar13,1);
      *(ulong *)pMVar13 = *(ulong *)pMVar13 | 0x8000000000000000;
      local_280 = pMVar13;
    }
    if (iStack_17c < 0x1000) {
      embree::sse2::BVHNRotate<4>::rotate(*(ulong *)(pMVar13 + 8),1);
      *(ulong *)(pMVar13 + 8) = *(ulong *)(pMVar13 + 8) | 0x8000000000000000;
      local_280 = pMVar13;
    }
    if (puVar18 == (ulong *)0x2) goto LAB_0010b5b1;
    if (iStack_14c < 0x1000) {
      embree::sse2::BVHNRotate<4>::rotate(*(ulong *)(pMVar13 + 0x10),1);
      *(ulong *)(pMVar13 + 0x10) = *(ulong *)(pMVar13 + 0x10) | 0x8000000000000000;
      local_280 = pMVar13;
    }
    if (puVar18 == (ulong *)0x3) goto LAB_0010b5b1;
    if (iStack_11c < 0x1000) {
      embree::sse2::BVHNRotate<4>::rotate(*(ulong *)(pMVar13 + 0x18),1);
      *(ulong *)(pMVar13 + 0x18) = *(ulong *)(pMVar13 + 0x18) | 0x8000000000000000;
      local_280 = pMVar13;
    }
    if ((puVar18 == (ulong *)0x4) || (0xfff < iStack_ec)) goto LAB_0010b5b1;
    embree::sse2::BVHNRotate<4>::rotate(*(ulong *)(pMVar13 + 0x20),1);
LAB_0010bbf6:
    pMVar13 = (MutexSys *)FastAllocator::malloc(param_7,&uStack_240,0x40,false);
    param_8 = pMStack_260;
  } while( true );
  puVar18 = &uStack_240;
  uStack_240 = uStack_248;
  std::__exception_ptr::exception_ptr::_M_addref();
  pMVar13 = (MutexSys *)std::rethrow_exception(puVar18);
LAB_0010b818:
  *(ulong *)(pMVar13 + 0x88) = 0;
  uVar17 = 0;
  *(ulong *)(pMVar13 + 0x98) = 0;
  *(ulong *)(pMVar13 + 0x90) = 0;
  *(ulong *)(pMVar13 + 0xa8) = 0;
  *(ulong *)(pMVar13 + 0xb0) = 0;
  goto LAB_0010b19e;
}



/* embree::TaskScheduler::ClosureTaskFunction<embree::TaskScheduler::spawn<unsigned long,
   embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleMi<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned long, embree::range<unsigned int>
   const&, embree::FastAllocator::CachedAllocator, bool)::{lambda(embree::range<unsigned long>
   const&)#1}>(unsigned long, unsigned long, unsigned long,
   embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleMi<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned long, embree::range<unsigned int>
   const&, embree::FastAllocator::CachedAllocator, bool)::{lambda(embree::range<unsigned long>
   const&)#1} const&, embree::TaskScheduler::TaskGroupContext*)::{lambda()#1}>::execute() */

void __thiscall
embree::TaskScheduler::
ClosureTaskFunction<embree::TaskScheduler::spawn<unsigned_long,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMi<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned_long,embree::range<unsigned_int>const&,embree::FastAllocator::CachedAllocator,bool)::{lambda(embree::range<unsigned_long>const&)#1}>(unsigned_long,unsigned_long,unsigned_long,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMi<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned_long,embree::range<unsigned_int>const&,embree::FastAllocator::CachedAllocator,bool)::{lambda(embree::range<unsigned_long>const&)#1}const&,embree::TaskScheduler::TaskGroupContext*)::{lambda()#1}>
::execute(ClosureTaskFunction<embree::TaskScheduler::spawn<unsigned_long,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMi<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned_long,embree::range<unsigned_int>const&,embree::FastAllocator::CachedAllocator,bool)::_lambda(embree::range<unsigned_long>const&)_1_>(unsigned_long,unsigned_long,unsigned_long,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMi<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned_long,embree::range<unsigned_int>const&,embree::FastAllocator::CachedAllocator,bool)::_lambda(embree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
          *this)

{
  int *piVar1;
  ulong uVar2;
  undefined8 *puVar3;
  TaskGroupContext *pTVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong *puVar10;
  TaskScheduler *pTVar11;
  ulong uVar12;
  long in_FS_OFFSET;
  long local_b8;
  ulong uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  TaskGroupContext *local_80;
  ulong local_78;
  ulong uStack_70;
  ulong local_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  TaskGroupContext *local_40;
  long local_30;
  
  uVar12 = *(ulong *)(this + 8);
  uVar9 = *(ulong *)(this + 0x10);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(ulong *)(this + 0x18) < uVar12 - uVar9) {
    pTVar4 = *(TaskGroupContext **)(this + 0x40);
    uStack_60 = *(ulong *)(this + 0x20);
    uStack_58 = *(ulong *)(this + 0x28);
    uStack_50 = *(ulong *)(this + 0x30);
    uStack_48 = *(undefined8 *)(this + 0x38);
    uVar12 = uVar12 + uVar9 >> 1;
    local_78 = uVar12;
    uStack_70 = uVar9;
    local_68 = *(ulong *)(this + 0x18);
    local_40 = pTVar4;
    lVar7 = embree::TaskScheduler::thread();
    if (lVar7 == 0) {
      pTVar11 = (TaskScheduler *)embree::TaskScheduler::instance();
      spawn_root<embree::TaskScheduler::spawn<unsigned_long,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMi<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned_long,embree::range<unsigned_int>const&,embree::FastAllocator::CachedAllocator,bool)::_lambda(embree::range<unsigned_long>const&)_1_>(unsigned_long,unsigned_long,unsigned_long,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMi<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned_long,embree::range<unsigned_int>const&,embree::FastAllocator::CachedAllocator,bool)::_lambda(embree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
                (pTVar11,(_lambda___1_ *)&local_78,pTVar4,uVar12 - uVar9,true);
    }
    else {
      if (0xfff < *(ulong *)(lVar7 + 0x40080)) goto LAB_0010c0ae;
      lVar5 = *(long *)(lVar7 + 0xc00c0);
      uVar2 = lVar5 + 0x48 + (ulong)(-(int)lVar5 & 0x3f);
      if (0x80000 < uVar2) goto LAB_0010c0ae;
      *(ulong *)(lVar7 + 0xc00c0) = uVar2;
      puVar3 = (undefined8 *)(lVar7 + 0x40078 + uVar2);
      puVar3[1] = local_78;
      puVar3[2] = uStack_70;
      *puVar3 = &PTR_execute_001171b0;
      puVar3[3] = local_68;
      puVar3[4] = uStack_60;
      puVar3[5] = uStack_58;
      puVar3[6] = uStack_50;
      puVar3[7] = uStack_48;
      puVar3[8] = local_40;
      lVar8 = *(long *)(lVar7 + 0x40080) * 0x40;
      piVar1 = (int *)(lVar7 + 0x40 + lVar8);
      lVar6 = *(long *)(lVar7 + 0xc0100);
      *(undefined4 *)(lVar7 + 0x44 + lVar8) = 1;
      *(undefined1 *)(lVar7 + 0x48 + lVar8) = 1;
      lVar8 = lVar8 + lVar7;
      *(undefined8 **)(lVar8 + 0x50) = puVar3;
      *(long *)(lVar8 + 0x58) = lVar6;
      *(TaskGroupContext **)(lVar8 + 0x60) = pTVar4;
      *(long *)(lVar8 + 0x68) = lVar5;
      *(ulong *)(lVar8 + 0x70) = uVar12 - uVar9;
      if (lVar6 != 0) {
        LOCK();
        *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
        UNLOCK();
      }
      LOCK();
      if (*piVar1 == 0) {
        *piVar1 = 1;
      }
      UNLOCK();
      LOCK();
      *(long *)(lVar7 + 0x40080) = *(long *)(lVar7 + 0x40080) + 1;
      UNLOCK();
      if (*(long *)(lVar7 + 0x40080) - 1U <= *(ulong *)(lVar7 + 0x40040)) {
        LOCK();
        *(long *)(lVar7 + 0x40040) = *(long *)(lVar7 + 0x40080) + -1;
        UNLOCK();
      }
    }
    local_b8 = *(long *)(this + 8);
    local_a8 = *(undefined8 *)(this + 0x18);
    pTVar4 = *(TaskGroupContext **)(this + 0x40);
    uStack_a0 = *(undefined8 *)(this + 0x20);
    uStack_98 = *(undefined8 *)(this + 0x28);
    uStack_90 = *(undefined8 *)(this + 0x30);
    uStack_88 = *(undefined8 *)(this + 0x38);
    uVar9 = local_b8 - uVar12;
    uStack_b0 = uVar12;
    local_80 = pTVar4;
    lVar7 = embree::TaskScheduler::thread();
    if (lVar7 == 0) {
      pTVar11 = (TaskScheduler *)embree::TaskScheduler::instance();
      spawn_root<embree::TaskScheduler::spawn<unsigned_long,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMi<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned_long,embree::range<unsigned_int>const&,embree::FastAllocator::CachedAllocator,bool)::_lambda(embree::range<unsigned_long>const&)_1_>(unsigned_long,unsigned_long,unsigned_long,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMi<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned_long,embree::range<unsigned_int>const&,embree::FastAllocator::CachedAllocator,bool)::_lambda(embree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
                (pTVar11,(_lambda___1_ *)&local_b8,pTVar4,uVar9,true);
    }
    else {
      if (0xfff < *(ulong *)(lVar7 + 0x40080)) {
LAB_0010c0ae:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar5 = *(long *)(lVar7 + 0xc00c0);
      uVar12 = lVar5 + 0x48 + (ulong)(-(int)lVar5 & 0x3f);
      if (0x80000 < uVar12) goto LAB_0010c0ae;
      *(ulong *)(lVar7 + 0xc00c0) = uVar12;
      puVar3 = (undefined8 *)(lVar7 + 0x40078 + uVar12);
      *puVar3 = &PTR_execute_001171b0;
      puVar3[1] = local_b8;
      puVar3[2] = uStack_b0;
      puVar3[3] = local_a8;
      puVar3[4] = uStack_a0;
      puVar3[5] = uStack_98;
      puVar3[6] = uStack_90;
      puVar3[7] = uStack_88;
      puVar3[8] = local_80;
      lVar8 = *(long *)(lVar7 + 0x40080) * 0x40;
      piVar1 = (int *)(lVar7 + 0x40 + lVar8);
      lVar6 = *(long *)(lVar7 + 0xc0100);
      *(undefined4 *)(lVar7 + 0x44 + lVar8) = 1;
      *(undefined1 *)(lVar7 + 0x48 + lVar8) = 1;
      lVar8 = lVar8 + lVar7;
      *(undefined8 **)(lVar8 + 0x50) = puVar3;
      *(long *)(lVar8 + 0x58) = lVar6;
      *(TaskGroupContext **)(lVar8 + 0x60) = pTVar4;
      *(long *)(lVar8 + 0x68) = lVar5;
      *(ulong *)(lVar8 + 0x70) = uVar9;
      if (lVar6 != 0) {
        LOCK();
        *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
        UNLOCK();
      }
      LOCK();
      if (*piVar1 == 0) {
        *piVar1 = 1;
      }
      UNLOCK();
      LOCK();
      *(long *)(lVar7 + 0x40080) = *(long *)(lVar7 + 0x40080) + 1;
      UNLOCK();
      if (*(long *)(lVar7 + 0x40080) - 1U <= *(ulong *)(lVar7 + 0x40040)) {
        LOCK();
        *(long *)(lVar7 + 0x40040) = *(long *)(lVar7 + 0x40080) + -1;
        UNLOCK();
      }
    }
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      embree::TaskScheduler::wait();
      return;
    }
  }
  else {
    for (; uVar9 < uVar12; uVar9 = uVar9 + 1) {
      local_b8 = 0;
      uStack_b0 = 0;
      local_a8 = 0;
      sse2::BVHBuilderMorton::
      BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMi<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>
      ::recurse(&local_78,*(undefined8 *)(this + 0x38),**(long **)(this + 0x28) + 1,
                *(long *)(this + 0x30) + uVar9 * 8,1);
      puVar10 = (ulong *)(uVar9 * 0x30 + *(long *)(this + 0x20));
      *puVar10 = local_78;
      puVar10[2] = local_68;
      puVar10[3] = uStack_60;
      puVar10[4] = uStack_58;
      puVar10[5] = uStack_50;
    }
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* embree::BBox<embree::Vec3fa> embree::parallel_reduce_internal<unsigned int,
   embree::BBox<embree::Vec3fa>,
   embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleMv<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned int>
   const&) const::{lambda(embree::range<unsigned int> const&)#1}, embree::BBox<embree::Vec3fa> const
   (embree::BBox<embree::Vec3fa> const&, embree::BBox<embree::Vec3fa> const&)>(unsigned int,
   unsigned int, unsigned int, unsigned int, embree::BBox<embree::Vec3fa> const&,
   embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleMv<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned int>
   const&) const::{lambda(embree::range<unsigned int> const&)#1} const&,
   embree::BBox<embree::Vec3fa> const ( const&)(embree::BBox<embree::Vec3fa> const&,
   embree::BBox<embree::Vec3fa> const&)) [clone .isra.0] */

BBox * embree::
       parallel_reduce_internal<unsigned_int,embree::BBox<embree::Vec3fa>,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMv<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned_int>const&)const::_lambda(embree::range<unsigned_int>const&)_1_,embree::BBox<embree::Vec3fa>const(embree::BBox<embree::Vec3fa>const&,embree::BBox<embree::Vec3fa>const&)>
                 (uint param_1,uint param_2,uint param_3,uint param_4,BBox *param_5,
                 _lambda_embree__range<unsigned_int>_const___1_ *param_6,
                 _func_BBox_BBox_ptr_BBox_ptr *param_7)

{
  int *piVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined4 in_register_0000003c;
  BBox *pBVar9;
  ulong uVar10;
  long lVar11;
  long in_FS_OFFSET;
  uint local_212c;
  uint local_2128;
  uint local_2124 [3];
  long local_2118;
  uint local_2110;
  undefined4 uStack_210c;
  undefined4 uStack_2108;
  undefined4 uStack_2104;
  BBox *local_2100;
  long *plStack_20f8;
  undefined8 local_20f0;
  undefined8 uStack_20e8;
  uint *local_20e0;
  undefined1 *puStack_20d8;
  _lambda_embree__range<unsigned_int>_const___1_ *local_20d0;
  undefined1 local_20c0 [8192];
  undefined1 *local_c0;
  ulong local_b8;
  long local_48;
  
  pBVar9 = (BBox *)CONCAT44(in_register_0000003c,param_1);
  local_48 = *(long *)(in_FS_OFFSET + 0x28);
  local_212c = param_4;
  local_2128 = param_3;
  local_2124[0] = param_2;
  uVar5 = embree::TaskScheduler::threadCount();
  if (0x200 < local_2124[0]) {
    local_2124[0] = 0x200;
  }
  if (uVar5 < local_2124[0]) {
    local_2124[0] = uVar5;
  }
  local_b8 = (ulong)local_2124[0];
  if (local_b8 < 0x101) {
    local_c0 = local_20c0;
  }
  else {
    local_c0 = (undefined1 *)embree::alignedMalloc(local_b8 << 5,0x40);
  }
  local_20f0 = &local_2128;
  uStack_20e8 = &local_212c;
  local_20e0 = local_2124;
  puStack_20d8 = local_20c0;
  local_20d0 = param_6;
  if (local_2124[0] == 0) {
    uVar8 = *(undefined8 *)(param_5 + 8);
    *(undefined8 *)pBVar9 = *(undefined8 *)param_5;
    *(undefined8 *)(pBVar9 + 8) = uVar8;
    uVar8 = *(undefined8 *)(param_5 + 0x18);
    *(undefined8 *)(pBVar9 + 0x10) = *(undefined8 *)(param_5 + 0x10);
    *(undefined8 *)(pBVar9 + 0x18) = uVar8;
  }
  else {
    uVar10 = (ulong)local_2124[0];
    uStack_210c = 0;
    uStack_2108 = 1;
    local_2118 = 0;
    local_2110 = local_2124[0];
    local_2100 = (BBox *)&local_20f0;
    plStack_20f8 = &local_2118;
    lVar6 = embree::TaskScheduler::thread();
    if (lVar6 == 0) {
      uVar8 = embree::TaskScheduler::instance();
      _ZN6embree13TaskScheduler10spawn_rootIZNS0_5spawnIjZNS_12parallel_forIjZNS_24parallel_reduce_internalIjNS_4BBoxINS_6Vec3faEEEZNKS_4sse216BVHBuilderMorton8BuilderTINS_13BVHNodeRecordINS_10NodeRefPtrILi4EEEEENS_13FastAllocator15CachedAllocatorENS_4BVHNILi4EE11CreateAllocENS_10AABBNode_tISD_Li4EE6CreateENS8_13SetBVHNBoundsILi4EEENS8_16CreateMortonLeafILi4ENS_10TriangleMvILi4EEEEENS8_19CalculateMeshBoundsINS_12TriangleMeshEEENS_5Scene29BuildProgressMonitorInterfaceEE19recreateMortonCodesERKNS_5rangeIjEEEUlS12_E_FKS7_RS14_S15_EEET0_T_S18_S18_S18_RKS17_RKT1_RKT2_EUljE_EEvS18_S1A_EUlS12_E_EEvS18_S18_S18_S1A_PNS0_16TaskGroupContextEEUlvE_EEvRKS18_S1K_mb
                (uVar8,&local_2110,&local_2118,uVar10,1);
    }
    else {
      if (0xfff < *(ulong *)(lVar6 + 0x40080)) {
LAB_0010cddf:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar11 = *(long *)(lVar6 + 0xc00c0);
      uVar2 = lVar11 + 0x28 + (ulong)(-(int)lVar11 & 0x3f);
      if (0x80000 < uVar2) goto LAB_0010cddf;
      *(ulong *)(lVar6 + 0xc00c0) = uVar2;
      puVar3 = (undefined8 *)(lVar6 + 0x40098 + uVar2);
      *puVar3 = 0x117258;
      puVar3[1] = CONCAT44(uStack_210c,local_2110);
      puVar3[2] = CONCAT44(uStack_2104,uStack_2108);
      puVar3[3] = local_2100;
      puVar3[4] = plStack_20f8;
      lVar7 = *(long *)(lVar6 + 0x40080) * 0x40;
      piVar1 = (int *)(lVar6 + 0x40 + lVar7);
      lVar4 = *(long *)(lVar6 + 0xc0100);
      *(undefined4 *)(lVar6 + 0x44 + lVar7) = 1;
      *(undefined1 *)(lVar6 + 0x48 + lVar7) = 1;
      lVar7 = lVar7 + lVar6;
      *(undefined8 **)(lVar7 + 0x50) = puVar3;
      *(long *)(lVar7 + 0x58) = lVar4;
      *(long **)(lVar7 + 0x60) = &local_2118;
      *(long *)(lVar7 + 0x68) = lVar11;
      *(ulong *)(lVar7 + 0x70) = uVar10;
      if (lVar4 != 0) {
        LOCK();
        *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + 1;
        UNLOCK();
      }
      LOCK();
      if (*piVar1 == 0) {
        *piVar1 = 1;
      }
      UNLOCK();
      LOCK();
      *(long *)(lVar6 + 0x40080) = *(long *)(lVar6 + 0x40080) + 1;
      UNLOCK();
      if (*(long *)(lVar6 + 0x40080) - 1U <= *(ulong *)(lVar6 + 0x40040)) {
        LOCK();
        *(long *)(lVar6 + 0x40040) = *(long *)(lVar6 + 0x40080) + -1;
        UNLOCK();
      }
    }
    embree::TaskScheduler::wait();
    if (local_2118 != 0) {
      local_2110 = (uint)local_2118;
      uStack_210c = (undefined4)((ulong)local_2118 >> 0x20);
      std::__exception_ptr::exception_ptr::_M_addref();
      std::rethrow_exception(&local_2110);
      goto LAB_0010cdda;
    }
    uVar8 = *(undefined8 *)(param_5 + 8);
    *(undefined8 *)pBVar9 = *(undefined8 *)param_5;
    *(undefined8 *)(pBVar9 + 8) = uVar8;
    uVar8 = *(undefined8 *)(param_5 + 0x18);
    *(undefined8 *)(pBVar9 + 0x10) = *(undefined8 *)(param_5 + 0x10);
    *(undefined8 *)(pBVar9 + 0x18) = uVar8;
    if (local_2124[0] != 0) {
      lVar6 = 0;
      do {
        lVar11 = lVar6 + 1;
        (*param_7)((BBox *)&local_20f0,pBVar9,(BBox *)(local_c0 + lVar6 * 0x20));
        *(undefined4 *)pBVar9 = (undefined4)local_20f0;
        *(undefined4 *)(pBVar9 + 4) = local_20f0._4_4_;
        *(undefined4 *)(pBVar9 + 8) = (undefined4)uStack_20e8;
        *(undefined4 *)(pBVar9 + 0xc) = uStack_20e8._4_4_;
        *(uint **)(pBVar9 + 0x10) = local_20e0;
        *(undefined1 **)(pBVar9 + 0x18) = puStack_20d8;
        lVar6 = lVar11;
      } while ((uint)lVar11 < local_2124[0]);
    }
  }
  if (local_c0 != local_20c0) {
    embree::alignedFree(local_c0);
  }
  if (local_48 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pBVar9;
  }
LAB_0010cdda:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleMv<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned int>
   const&) const */

void __thiscall
embree::sse2::BVHBuilderMorton::
BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMv<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>
::recreateMortonCodes
          (BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMv<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>
           *this,range *param_1)

{
  uint *puVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  uint *puVar8;
  long lVar9;
  ulong uVar10;
  uint *puVar11;
  long lVar12;
  TaskScheduler *this_00;
  ulong uVar13;
  long lVar14;
  uint *puVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long in_FS_OFFSET;
  uint uVar20;
  uint uVar24;
  uint uVar25;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar26;
  float fVar28;
  float fVar29;
  undefined1 auVar27 [16];
  undefined1 auVar30 [16];
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined1 auVar36 [16];
  BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMv<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>
  *local_b8;
  long local_b0;
  undefined1 local_a8 [16];
  undefined1 local_98 [8];
  float fStack_90;
  float fStack_8c;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  TaskGroupContext *local_68;
  undefined1 local_58 [16];
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  long local_30;
  
  uVar20 = *(uint *)param_1;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar24 = *(uint *)(param_1 + 4);
  uVar10 = (ulong)uVar24;
  if (uVar24 - uVar20 < 0x400) {
    lVar9 = *(long *)(this + 0x58);
    uVar13 = (ulong)uVar20;
    if (uVar13 < uVar10) {
      lVar19 = uVar13 * 8;
      lVar16 = lVar9 + lVar19;
      lVar12 = **(long **)(this + 0x48);
      auVar30._4_4_ = _LC2;
      auVar30._0_4_ = _LC2;
      auVar30._8_4_ = _LC2;
      auVar30._12_4_ = _LC2;
      auVar36._4_4_ = _LC4;
      auVar36._0_4_ = _LC4;
      auVar36._8_4_ = _LC4;
      auVar36._12_4_ = _LC4;
      lVar17 = *(long *)(lVar12 + 0x58);
      lVar18 = *(long *)(lVar12 + 0x60);
      lVar14 = *(long *)(lVar12 + 0x88);
      lVar12 = *(long *)(lVar12 + 0x90);
      do {
        puVar8 = (uint *)(lVar16 + 4);
        lVar16 = lVar16 + 8;
        puVar8 = (uint *)((ulong)*puVar8 * lVar18 + lVar17);
        auVar22 = *(undefined1 (*) [16])(lVar14 + (ulong)*puVar8 * lVar12);
        auVar27 = *(undefined1 (*) [16])(lVar14 + (ulong)puVar8[1] * lVar12);
        auVar23 = *(undefined1 (*) [16])(lVar14 + (ulong)puVar8[2] * lVar12);
        auVar21 = maxps(auVar22,auVar27);
        auVar27 = minps(auVar22,auVar27);
        auVar22 = maxps(auVar21,auVar23);
        auVar21 = minps(auVar27,auVar23);
        auVar27._0_4_ = auVar22._0_4_ + auVar21._0_4_;
        auVar27._4_4_ = auVar22._4_4_ + auVar21._4_4_;
        auVar27._8_4_ = auVar22._8_4_ + auVar21._8_4_;
        auVar27._12_4_ = auVar22._12_4_ + auVar21._12_4_;
        auVar30 = minps(auVar30,auVar27);
        auVar36 = maxps(auVar36,auVar27);
      } while (lVar9 + uVar10 * 8 != lVar16);
      auVar21._0_4_ = auVar36._0_4_ - auVar30._0_4_;
      auVar21._4_4_ = auVar36._4_4_ - auVar30._4_4_;
      auVar21._8_4_ = auVar36._8_4_ - auVar30._8_4_;
      auVar21._12_4_ = auVar36._12_4_ - auVar30._12_4_;
      auVar22 = rcpps(auVar23,auVar21);
      bVar5 = _LC8 < auVar21._0_4_;
      bVar6 = _LC8 < auVar21._4_4_;
      bVar7 = _LC8 < auVar21._8_4_;
      fVar26 = auVar22._0_4_;
      fVar28 = auVar22._4_4_;
      fVar29 = auVar22._8_4_;
      fVar26 = ((_LC10 - auVar21._0_4_ * fVar26) * fVar26 + fVar26) * _LC12;
      fVar28 = ((_LC10 - auVar21._4_4_ * fVar28) * fVar28 + fVar28) * _LC12;
      fVar29 = ((_LC10 - auVar21._8_4_ * fVar29) * fVar29 + fVar29) * _LC12;
      while( true ) {
        puVar8 = (uint *)((ulong)((uint *)(lVar9 + lVar19))[1] * lVar18 + lVar17);
        auVar22 = *(undefined1 (*) [16])(lVar14 + (ulong)*puVar8 * lVar12);
        auVar36 = *(undefined1 (*) [16])(lVar14 + (ulong)puVar8[1] * lVar12);
        auVar27 = *(undefined1 (*) [16])(lVar14 + (ulong)puVar8[2] * lVar12);
        auVar23 = maxps(auVar22,auVar36);
        auVar36 = minps(auVar22,auVar36);
        auVar22 = maxps(auVar23,auVar27);
        auVar36 = minps(auVar36,auVar27);
        uVar20 = (uint)(((auVar22._0_4_ + auVar36._0_4_) - auVar30._0_4_) *
                       (float)(-(uint)bVar5 & (uint)fVar26));
        uVar24 = (uint)(((auVar22._4_4_ + auVar36._4_4_) - auVar30._4_4_) *
                       (float)(-(uint)bVar6 & (uint)fVar28));
        uVar25 = (uint)(((auVar22._8_4_ + auVar36._8_4_) - auVar30._8_4_) *
                       (float)(-(uint)bVar7 & (uint)fVar29));
        uVar13 = uVar13 + 1;
        *(uint *)(lVar9 + lVar19) =
             ((((uVar24 << 0x10 | uVar24) & 0x30000ff) * 0x101 & 0x300f00f) * 0x11 & 0x30c30c3) * 10
             & 0x12492492 |
             (((((uVar25 << 0x10 | uVar25) & 0x30000ff) * 0x101 & 0x300f00f) * 0x11 & 0x30c30c3) * 5
             & 0x9249249) << 2 |
             ((((uVar20 << 0x10 | uVar20) & 0x30000ff) * 0x101 & 0x300f00f) * 0x11 & 0x30c30c3) * 5
             & 0x9249249;
        uVar10 = (ulong)*(uint *)(param_1 + 4);
        if (uVar10 <= uVar13) break;
        lVar9 = *(long *)(this + 0x58);
        lVar19 = uVar13 * 8;
        lVar16 = **(long **)(this + 0x48);
        lVar14 = *(long *)(lVar16 + 0x88);
        lVar17 = *(long *)(lVar16 + 0x58);
        lVar18 = *(long *)(lVar16 + 0x60);
        lVar12 = *(long *)(lVar16 + 0x90);
      }
      uVar13 = (ulong)*(uint *)param_1;
      lVar9 = *(long *)(this + 0x58);
    }
    puVar8 = (uint *)(lVar9 + uVar10 * 8);
    puVar1 = (uint *)(lVar9 + uVar13 * 8);
    if (puVar8 != puVar1) {
      lVar9 = uVar10 * 8 + uVar13 * -8;
      uVar10 = lVar9 >> 3;
      if (uVar10 == 0) {
        std::
        __introsort_loop<embree::sse2::BVHBuilderMorton::BuildPrim*,long,__gnu_cxx::__ops::_Iter_less_iter>
                  (puVar1,puVar8,0xfffffffffffffffe);
      }
      else {
        lVar16 = 0x3f;
        if (uVar10 != 0) {
          for (; uVar10 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        std::
        __introsort_loop<embree::sse2::BVHBuilderMorton::BuildPrim*,long,__gnu_cxx::__ops::_Iter_less_iter>
                  (puVar1,puVar8,(long)(int)lVar16 * 2);
        if (0x80 < lVar9) {
          puVar15 = puVar1 + 0x20;
          std::
          __insertion_sort<embree::sse2::BVHBuilderMorton::BuildPrim*,__gnu_cxx::__ops::_Iter_less_iter>
                    (puVar1,puVar15);
          for (; puVar8 != puVar15; puVar15 = puVar15 + 2) {
            while( true ) {
              uVar4 = *(undefined8 *)puVar15;
              uVar20 = *puVar15;
              puVar1 = puVar15 + -2;
              if (puVar15[-2] <= uVar20) break;
              do {
                puVar11 = puVar1;
                *(undefined8 *)(puVar11 + 2) = *(undefined8 *)puVar11;
                puVar1 = puVar11 + -2;
              } while (uVar20 < puVar11[-2]);
              puVar15 = puVar15 + 2;
              *(undefined8 *)puVar11 = uVar4;
              if (puVar8 == puVar15) goto LAB_0010d106;
            }
            *(undefined8 *)puVar15 = uVar4;
          }
          goto LAB_0010d106;
        }
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        std::
        __insertion_sort<embree::sse2::BVHBuilderMorton::BuildPrim*,__gnu_cxx::__ops::_Iter_less_iter>
                  (puVar1,puVar8);
        return;
      }
      goto LAB_0010d47f;
    }
  }
  else {
    uVar25 = (uVar24 - uVar20) + 0x3ff >> 10;
    local_88._4_4_ = _LC2;
    local_88._0_4_ = _LC2;
    local_88._8_4_ = _LC2;
    local_88._12_4_ = _LC2;
    local_78._4_4_ = (float)_LC4;
    local_78._0_4_ = (float)_LC4;
    local_78._8_4_ = (float)_LC4;
    local_78._12_4_ = (float)_LC4;
    local_b8 = this;
    if (uVar25 == 1) {
      _local_98 = local_78;
      local_a8 = local_88;
      if ((ulong)uVar20 < (ulong)uVar24) {
        lVar9 = *(long *)(this + 0x58) + (ulong)uVar20 * 8;
        do {
          lVar16 = **(long **)(this + 0x48);
          puVar8 = (uint *)(lVar9 + 4);
          lVar9 = lVar9 + 8;
          puVar8 = (uint *)((ulong)*puVar8 * *(long *)(lVar16 + 0x60) + *(long *)(lVar16 + 0x58));
          lVar19 = *(long *)(lVar16 + 0x88);
          lVar16 = *(long *)(lVar16 + 0x90);
          auVar30 = *(undefined1 (*) [16])(lVar19 + (ulong)*puVar8 * lVar16);
          auVar22 = *(undefined1 (*) [16])(lVar19 + (ulong)puVar8[1] * lVar16);
          auVar36 = *(undefined1 (*) [16])(lVar19 + (ulong)puVar8[2] * lVar16);
          auVar27 = maxps(auVar30,auVar22);
          auVar22 = minps(auVar30,auVar22);
          auVar30 = maxps(auVar27,auVar36);
          auVar36 = minps(auVar22,auVar36);
          auVar22._0_4_ = auVar30._0_4_ + auVar36._0_4_;
          auVar22._4_4_ = auVar30._4_4_ + auVar36._4_4_;
          auVar22._8_4_ = auVar30._8_4_ + auVar36._8_4_;
          auVar22._12_4_ = auVar30._12_4_ + auVar36._12_4_;
          local_a8 = minps(local_a8,auVar22);
          _local_98 = maxps(_local_98,auVar22);
        } while (*(long *)(this + 0x58) + (ulong)uVar24 * 8 != lVar9);
        local_78._0_4_ = SUB164(_local_98,0) - local_a8._0_4_;
        local_78._4_4_ = SUB164(_local_98,4) - local_a8._4_4_;
        local_78._8_4_ = SUB164(_local_98,8) - local_a8._8_4_;
        local_78._12_4_ = SUB164(_local_98,0xc) - local_a8._12_4_;
        uVar10 = 0x400;
      }
      else {
        uVar10 = 0x400;
      }
    }
    else {
      parallel_reduce_internal<unsigned_int,embree::BBox<embree::Vec3fa>,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMv<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned_int>const&)const::_lambda(embree::range<unsigned_int>const&)_1_,embree::BBox<embree::Vec3fa>const(embree::BBox<embree::Vec3fa>const&,embree::BBox<embree::Vec3fa>const&)>
                ((uint)local_a8,uVar25,uVar20,uVar24,(BBox *)local_88,
                 (_lambda_embree__range<unsigned_int>_const___1_ *)&local_b8,
                 BBox<embree::Vec3fa>::merge);
      uVar24 = *(uint *)(param_1 + 4);
      uVar20 = *(uint *)param_1;
      local_78._0_4_ = (float)local_98._0_4_ - local_a8._0_4_;
      local_78._4_4_ = (float)local_98._4_4_ - local_a8._4_4_;
      local_78._8_4_ = fStack_90 - local_a8._8_4_;
      local_78._12_4_ = fStack_8c - local_a8._12_4_;
      uVar10 = (ulong)(uVar24 - uVar20);
    }
    auVar30 = local_88;
    auVar22 = rcpps(local_a8,local_78);
    fVar29 = local_78._0_4_;
    fVar31 = local_78._12_4_;
    local_b0 = 0;
    fVar26 = local_78._4_4_;
    fVar28 = local_78._8_4_;
    local_88._4_4_ = uVar20;
    local_88._0_4_ = uVar24;
    fVar32 = auVar22._0_4_;
    fVar33 = auVar22._4_4_;
    fVar34 = auVar22._8_4_;
    fVar35 = auVar22._12_4_;
    local_88._12_4_ = auVar30._12_4_;
    local_88._8_4_ = 0x400;
    local_78._8_8_ = local_58;
    local_78._0_8_ = this;
    local_48 = (uint)(((_LC10 - fVar29 * fVar32) * fVar32 + fVar32) * _LC12) &
               -(uint)(_LC8 < fVar29);
    uStack_44 = (uint)(((_LC10 - fVar26 * fVar33) * fVar33 + fVar33) * _LC12) &
                -(uint)(_LC8 < fVar26);
    uStack_40 = (uint)(((_LC10 - fVar28 * fVar34) * fVar34 + fVar34) * _LC12) &
                -(uint)(_LC8 < fVar28);
    uStack_3c = (uint)(((_LC10 - fVar31 * fVar35) * fVar35 + fVar35) * _LC12) &
                -(uint)(_LC8 < fVar31);
    local_68 = (TaskGroupContext *)&local_b0;
    local_58 = local_a8;
    lVar9 = embree::TaskScheduler::thread();
    if (lVar9 == 0) {
      this_00 = (TaskScheduler *)embree::TaskScheduler::instance();
      TaskScheduler::
      spawn_root<embree::TaskScheduler::spawn<unsigned_int,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMv<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned_int>const&)const::_lambda(embree::range<unsigned_int>const&)_2_>(unsigned_int,unsigned_int,unsigned_int,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMv<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned_int>const&)const::_lambda(embree::range<unsigned_int>const&)_2_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
                (this_00,(_lambda___1_ *)local_88,(TaskGroupContext *)&local_b0,uVar10,true);
    }
    else {
      if (0xfff < *(ulong *)(lVar9 + 0x40080)) goto LAB_0010d49e;
      lVar16 = *(long *)(lVar9 + 0xc00c0);
      uVar13 = lVar16 + 0x30 + (ulong)(-(int)lVar16 & 0x3f);
      if (0x80000 < uVar13) goto LAB_0010d49e;
      *(ulong *)(lVar9 + 0xc00c0) = uVar13;
      puVar3 = (undefined8 *)(lVar9 + 0x40090 + uVar13);
      *puVar3 = &PTR_execute_00117210;
      puVar3[1] = local_88._0_8_;
      puVar3[2] = local_88._8_8_;
      puVar3[3] = local_78._0_8_;
      puVar3[4] = local_78._8_8_;
      puVar3[5] = local_68;
      lVar12 = *(long *)(lVar9 + 0x40080) * 0x40;
      piVar2 = (int *)(lVar9 + 0x40 + lVar12);
      lVar19 = *(long *)(lVar9 + 0xc0100);
      *(undefined4 *)(lVar9 + 0x44 + lVar12) = 1;
      *(undefined1 *)(lVar9 + 0x48 + lVar12) = 1;
      lVar12 = lVar12 + lVar9;
      *(undefined8 **)(lVar12 + 0x50) = puVar3;
      *(long *)(lVar12 + 0x58) = lVar19;
      *(TaskGroupContext **)(lVar12 + 0x60) = (TaskGroupContext *)&local_b0;
      *(long *)(lVar12 + 0x68) = lVar16;
      *(ulong *)(lVar12 + 0x70) = uVar10;
      if (lVar19 != 0) {
        LOCK();
        *(int *)(lVar19 + 4) = *(int *)(lVar19 + 4) + 1;
        UNLOCK();
      }
      LOCK();
      if (*piVar2 == 0) {
        *piVar2 = 1;
      }
      UNLOCK();
      LOCK();
      *(long *)(lVar9 + 0x40080) = *(long *)(lVar9 + 0x40080) + 1;
      UNLOCK();
      if (*(long *)(lVar9 + 0x40080) - 1U <= *(ulong *)(lVar9 + 0x40040)) {
        LOCK();
        *(long *)(lVar9 + 0x40040) = *(long *)(lVar9 + 0x40080) + -1;
        UNLOCK();
      }
    }
    embree::TaskScheduler::wait();
    if (local_b0 != 0) {
      local_88._0_8_ = local_b0;
      std::__exception_ptr::exception_ptr::_M_addref();
      std::rethrow_exception(local_88);
LAB_0010d49e:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    radixsort32<embree::sse2::BVHBuilderMorton::BuildPrim>
              ((BuildPrim *)(*(long *)(this + 0x58) + (ulong)*(uint *)param_1 * 8),
               (ulong)(*(int *)(param_1 + 4) - *(uint *)param_1),(uint)*(long *)(this + 0x58));
  }
LAB_0010d106:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010d47f:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleMv<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned long, embree::range<unsigned int>
   const&, embree::FastAllocator::CachedAllocator, bool) */

undefined8 *
embree::sse2::BVHBuilderMorton::
BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMv<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>
::recurse(undefined8 *param_1,
         BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMv<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>
         *param_2,long param_3,range *param_4,char param_5,undefined8 param_6,FastAllocator *param_7
         ,MutexSys *param_8)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  MutexSys *pMVar13;
  int iVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong *puVar18;
  ulong *puVar19;
  long lVar20;
  MutexSys *pMVar21;
  uint uVar22;
  long lVar23;
  MutexSys *pMVar24;
  long in_FS_OFFSET;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  MutexSys *local_280;
  MutexSys *pMStack_260;
  long local_250;
  ulong uStack_248;
  ulong uStack_240;
  undefined1 local_238 [12];
  undefined4 uStack_22c;
  MutexSys *pMStack_228;
  BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMv<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>
  *pBStack_220;
  undefined4 uStack_218;
  undefined4 uStack_214;
  uint auStack_210 [2];
  uint auStack_208 [2];
  undefined8 uStack_200;
  int aiStack_1f8 [5];
  int iStack_1e4;
  int iStack_1e0;
  int iStack_1dc;
  int iStack_1d8;
  int iStack_1d4;
  int iStack_1d0;
  int iStack_1cc;
  ulong auStack_1c8 [2];
  undefined1 auStack_1b8 [12];
  int iStack_1ac;
  undefined1 auStack_1a8 [16];
  ulong uStack_198;
  undefined1 auStack_188 [12];
  int iStack_17c;
  undefined1 auStack_178 [16];
  ulong uStack_168;
  undefined1 auStack_158 [12];
  int iStack_14c;
  undefined1 auStack_148 [16];
  ulong uStack_138;
  undefined1 auStack_128 [12];
  int iStack_11c;
  undefined1 auStack_118 [16];
  int iStack_ec;
  long local_40;
  
  lVar23 = lRam000000000010df31;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_250 = param_3;
  if (param_7 == (FastAllocator *)0x0) {
    param_8 = *(MutexSys **)(in_FS_OFFSET + lRam000000000010df31);
    param_7 = (FastAllocator *)**(ulong **)(param_2 + 0x28);
    if (param_8 == (MutexSys *)0x0) {
      param_8 = (MutexSys *)embree::alignedMalloc(0xc0,0x40);
      embree::MutexSys::MutexSys(param_8);
      *(undefined8 *)(param_8 + 8) = 0;
      *(MutexSys **)(param_8 + 0x40) = param_8;
      *(undefined8 *)(param_8 + 0x48) = 0;
      *(undefined8 *)(param_8 + 0x50) = 0;
      *(undefined8 *)(param_8 + 0x58) = 0;
      *(undefined8 *)(param_8 + 0x60) = 0;
      *(undefined8 *)(param_8 + 0x68) = 0;
      *(undefined8 *)(param_8 + 0x70) = 0;
      *(MutexSys **)(param_8 + 0x80) = param_8;
      *(undefined8 *)(param_8 + 0x88) = 0;
      *(undefined8 *)(param_8 + 0x90) = 0;
      *(undefined8 *)(param_8 + 0x98) = 0;
      *(undefined8 *)(param_8 + 0xa0) = 0;
      *(undefined8 *)(param_8 + 0xa8) = 0;
      *(undefined8 *)(param_8 + 0xb0) = 0;
      *(MutexSys **)(in_FS_OFFSET + lVar23) = param_8;
      embree::MutexSys::lock();
      local_238._0_8_ = param_8;
      if (__MutexSys == _createMortonCodeArray<embree::TriangleMesh>) {
        std::
        vector<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>,std::allocator<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>>>
        ::
        _M_realloc_insert<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>>
                  ((vector<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>,std::allocator<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>>>
                    *)&FastAllocator::s_thread_local_allocators,__MutexSys,local_238);
        uVar8 = local_238._0_8_;
        if ((MutexSys *)local_238._0_8_ != (MutexSys *)0x0) {
          embree::MutexSys::~MutexSys((MutexSys *)local_238._0_8_);
          embree::alignedFree((void *)uVar8);
        }
      }
      else {
        *__MutexSys = param_8;
        __MutexSys = __MutexSys + 1;
      }
      embree::MutexSys::unlock();
    }
    param_8 = param_8 + 0x40;
  }
  if ((param_5 == '\0') ||
     (*(ulong *)(param_2 + 0x20) < (ulong)(uint)(*(int *)(param_4 + 4) - *(int *)param_4))) {
LAB_0010d51a:
    if (*(ulong *)(param_2 + 8) <= local_250 + 8U) goto LAB_0010dee0;
  }
  else {
    if (*(code **)**(undefined8 **)(param_2 + 0x50) !=
        Scene::BuildProgressMonitorInterface::operator()) {
      (**(code **)**(undefined8 **)(param_2 + 0x50))();
      goto LAB_0010d51a;
    }
    embree::Scene::progressMonitor((double)(uint)(*(int *)(param_4 + 4) - *(int *)param_4));
    if (*(ulong *)(param_2 + 8) <= local_250 + 8U) goto LAB_0010dee0;
  }
  uVar15 = *(uint *)(param_4 + 4);
  uVar9 = *(uint *)param_4;
  uVar17 = (ulong)uVar9;
  if ((ulong)(uVar15 - uVar9) <= *(ulong *)(param_2 + 0x10)) {
LAB_0010dee0:
    createLargeLeaf(param_1,param_2,local_250,param_4);
LAB_0010dd9a:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  lVar23 = *(long *)(param_2 + 0x58);
  uVar9 = *(uint *)(lVar23 + (ulong)(uVar15 - 1) * 8) ^ *(uint *)(lVar23 + (ulong)uVar9 * 8);
  if (uVar9 == 0) {
LAB_0010e230:
    recreateMortonCodes(param_2,param_4);
    uVar15 = *(uint *)(param_4 + 4);
    lVar23 = *(long *)(param_2 + 0x58);
    uVar17 = (ulong)*(uint *)param_4;
    uVar9 = *(uint *)(lVar23 + (ulong)(uVar15 - 1) * 8) ^ *(uint *)(lVar23 + uVar17 * 8);
    if (uVar9 != 0) {
      iVar14 = 0x1f;
      if (uVar9 != 0) {
        for (; uVar9 >> iVar14 == 0; iVar14 = iVar14 + -1) {
        }
      }
      iVar14 = 0x1f - iVar14;
      if (iVar14 != 0x20) goto LAB_0010d56d;
    }
    auStack_208[1] = *(uint *)param_4 + uVar15 >> 1;
  }
  else {
    iVar14 = 0x1f;
    if (uVar9 != 0) {
      for (; uVar9 >> iVar14 == 0; iVar14 = iVar14 + -1) {
      }
    }
    iVar14 = 0x1f - iVar14;
    if (iVar14 == 0x20) goto LAB_0010e230;
LAB_0010d56d:
    uVar9 = (int)uVar17 + 1;
    uVar16 = uVar17;
    uVar11 = uVar15;
    while (auStack_208[1] = uVar11, uVar9 != auStack_208[1]) {
      uVar11 = (int)uVar16 + auStack_208[1] >> 1;
      if ((0x80000000U >> ((byte)iVar14 & 0x1f) & *(uint *)(lVar23 + (ulong)uVar11 * 8)) == 0) {
        uVar16 = (ulong)uVar11;
        uVar9 = uVar11 + 1;
        uVar11 = auStack_208[1];
      }
    }
  }
  auStack_208[0] = (uint)uVar17;
  puVar18 = (ulong *)0x2;
  pMVar21 = (MutexSys *)auStack_208;
  uStack_200._0_4_ = auStack_208[1];
  uStack_200._4_4_ = uVar15;
  if (2 < *(ulong *)param_2) {
    do {
      uVar9 = auStack_208[1] - (int)uVar17;
      uVar17 = *(ulong *)(param_2 + 0x10);
      if ((uVar9 <= uVar17) || (lVar20 = 0, uVar9 == 0)) {
        lVar20 = -1;
        uVar9 = 0;
      }
      uVar15 = uStack_200._4_4_ - (uint)uStack_200;
      if ((uVar17 < uVar15) && (uVar9 < uVar15)) {
        lVar20 = 1;
        uVar9 = uVar15;
        if (puVar18 != (ulong *)0x2) {
LAB_0010d63e:
          uVar15 = aiStack_1f8[1] - aiStack_1f8[0];
          if ((uVar17 < uVar15) && (uVar9 < uVar15)) {
            lVar20 = 2;
            uVar9 = uVar15;
            if (puVar18 == (ulong *)0x3) goto LAB_0010d760;
          }
          else if (puVar18 == (ulong *)0x3) goto LAB_0010d828;
          uVar15 = aiStack_1f8[3] - aiStack_1f8[2];
          if ((uVar17 < uVar15) && (uVar9 < uVar15)) {
            lVar20 = 3;
            uVar9 = uVar15;
            if (puVar18 == (ulong *)0x4) goto LAB_0010d760;
          }
          else if (puVar18 == (ulong *)0x4) goto LAB_0010d828;
          uVar15 = iStack_1e4 - aiStack_1f8[4];
          if ((uVar17 < uVar15) && (uVar9 < uVar15)) {
            lVar20 = 4;
            uVar9 = uVar15;
            if (puVar18 == (ulong *)0x5) goto LAB_0010d760;
          }
          else if (puVar18 == (ulong *)0x5) goto LAB_0010d828;
          uVar15 = iStack_1dc - iStack_1e0;
          if ((uVar9 < uVar15) && (uVar17 < uVar15)) {
            lVar20 = 5;
            uVar9 = uVar15;
            if (puVar18 == (ulong *)0x6) goto LAB_0010d760;
          }
          else if (puVar18 == (ulong *)0x6) goto LAB_0010d828;
          uVar15 = iStack_1d4 - iStack_1d8;
          if ((uVar15 <= uVar9) || (uVar15 <= uVar17)) {
            if (puVar18 == (ulong *)&DAT_00000008) goto LAB_0010d730;
            iVar14 = (int)lVar20;
            goto joined_r0x0010de1d;
          }
          lVar20 = 6;
          uVar9 = uVar15;
          if (puVar18 == (ulong *)&DAT_00000008) {
LAB_0010d730:
            if (((uint)(iStack_1cc - iStack_1d0) <= uVar17) ||
               ((uint)(iStack_1cc - iStack_1d0) <= uVar9)) goto LAB_0010d828;
            lVar20 = 7;
          }
        }
      }
      else {
        if (puVar18 != (ulong *)0x2) goto LAB_0010d63e;
LAB_0010d828:
        iVar14 = (int)lVar20;
joined_r0x0010de1d:
        if (iVar14 == -1) break;
      }
LAB_0010d760:
      uVar9 = auStack_208[lVar20 * 2 + 1];
      uVar17 = (ulong)auStack_208[lVar20 * 2];
      uVar15 = *(uint *)(lVar23 + (ulong)(uVar9 - 1) * 8) ^ *(uint *)(lVar23 + uVar17 * 8);
      if (uVar15 == 0) {
LAB_0010de38:
        recreateMortonCodes(param_2,(range *)(pMVar21 + lVar20 * 8));
        lVar23 = *(long *)(param_2 + 0x58);
        uVar9 = auStack_208[lVar20 * 2 + 1];
        uVar15 = auStack_208[lVar20 * 2];
        uVar17 = (ulong)uVar15;
        uVar11 = *(uint *)(lVar23 + (ulong)(uVar9 - 1) * 8) ^ *(uint *)(lVar23 + uVar17 * 8);
        if (uVar11 != 0) {
          iVar14 = 0x1f;
          if (uVar11 != 0) {
            for (; uVar11 >> iVar14 == 0; iVar14 = iVar14 + -1) {
            }
          }
          iVar14 = 0x1f - iVar14;
          if (iVar14 != 0x20) goto LAB_0010d795;
        }
        uVar11 = uVar15 + uVar9;
        uVar9 = auStack_208[lVar20 * 2 + 1];
        uVar11 = uVar11 >> 1;
      }
      else {
        iVar14 = 0x1f;
        if (uVar15 != 0) {
          for (; uVar15 >> iVar14 == 0; iVar14 = iVar14 + -1) {
          }
        }
        iVar14 = 0x1f - iVar14;
        if (iVar14 == 0x20) goto LAB_0010de38;
LAB_0010d795:
        uVar15 = (uint)uVar17;
        uVar22 = uVar15 + 1;
        uVar10 = uVar9;
        while (uVar11 = uVar10, uVar22 != uVar11) {
          uVar10 = (int)uVar17 + uVar11 >> 1;
          if ((0x80000000U >> ((byte)iVar14 & 0x1f) & *(uint *)(lVar23 + (ulong)uVar10 * 8)) == 0) {
            uVar17 = (ulong)uVar10;
            uVar22 = uVar10 + 1;
            uVar10 = uVar11;
          }
        }
      }
      *(undefined8 *)(auStack_208 + lVar20 * 2) = *(undefined8 *)(auStack_210 + (long)puVar18 * 2);
      auStack_210[(long)puVar18 * 2] = uVar15;
      auStack_210[(long)puVar18 * 2 + 1] = uVar11;
      *(uint *)(pMVar21 + (long)puVar18 * 8) = uVar11;
      auStack_208[(long)puVar18 * 2 + 1] = uVar9;
      puVar18 = (ulong *)((long)puVar18 + 1);
      if (*(ulong **)param_2 <= puVar18) break;
      uVar17 = (ulong)auStack_208[0];
    } while( true );
  }
  uStack_240 = 0x80;
  pMVar13 = *(MutexSys **)param_8;
  pMVar24 = pMVar13 + 8;
  if (param_7 == *(FastAllocator **)(pMVar13 + 8)) goto LAB_0010da02;
  embree::MutexSys::lock();
  if (*(ulong *)(pMVar13 + 8) != 0) {
    LOCK();
    *(long *)(*(ulong *)(pMVar13 + 8) + 0x118) =
         *(long *)(*(ulong *)(pMVar13 + 8) + 0x118) +
         *(ulong *)(pMVar13 + 0xa8) + *(ulong *)(pMVar13 + 0x68);
    UNLOCK();
    LOCK();
    *(long *)(*(ulong *)(pMVar13 + 8) + 0x120) =
         *(long *)(*(ulong *)(pMVar13 + 8) + 0x120) +
         (((*(ulong *)(pMVar13 + 0x98) + *(ulong *)(pMVar13 + 0x58)) - *(ulong *)(pMVar13 + 0x50)) -
         *(ulong *)(pMVar13 + 0x90));
    UNLOCK();
    LOCK();
    *(long *)(*(ulong *)(pMVar13 + 8) + 0x128) =
         *(long *)(*(ulong *)(pMVar13 + 8) + 0x128) +
         *(ulong *)(pMVar13 + 0xb0) + *(ulong *)(pMVar13 + 0x70);
    UNLOCK();
  }
  *(ulong *)(pMVar13 + 0x48) = 0;
  *(ulong *)(pMVar13 + 0x58) = 0;
  *(ulong *)(pMVar13 + 0x50) = 0;
  *(ulong *)(pMVar13 + 0x68) = 0;
  *(ulong *)(pMVar13 + 0x70) = 0;
  *(ulong *)(pMVar13 + 0x60) = 0;
  if (param_7 == (FastAllocator *)0x0) goto LAB_0010dfe8;
  uVar17 = *(ulong *)(param_7 + 0x10);
  *(ulong *)(pMVar13 + 0x88) = 0;
  *(ulong *)(pMVar13 + 0x98) = 0;
  *(ulong *)(pMVar13 + 0x60) = uVar17;
  *(ulong *)(pMVar13 + 0x90) = 0;
  *(ulong *)(pMVar13 + 0xa8) = 0;
  *(ulong *)(pMVar13 + 0xb0) = 0;
  *(ulong *)(pMVar13 + 0xa0) = 0;
  uVar17 = *(ulong *)(param_7 + 0x10);
LAB_0010d96e:
  *(ulong *)(pMVar13 + 0xa0) = uVar17;
  LOCK();
  *(FastAllocator **)pMVar24 = param_7;
  UNLOCK();
  local_238._0_8_ = pMVar13;
  embree::MutexSys::lock();
  if (*(undefined8 **)(param_7 + 0x138) == *(undefined8 **)(param_7 + 0x140)) {
    std::
    vector<embree::FastAllocator::ThreadLocal2*,std::allocator<embree::FastAllocator::ThreadLocal2*>>
    ::_M_realloc_insert<embree::FastAllocator::ThreadLocal2*const&>
              ((vector<embree::FastAllocator::ThreadLocal2*,std::allocator<embree::FastAllocator::ThreadLocal2*>>
                *)(param_7 + 0x130));
  }
  else {
    **(undefined8 **)(param_7 + 0x138) = pMVar13;
    *(long *)(param_7 + 0x138) = *(long *)(param_7 + 0x138) + 8;
  }
  embree::MutexSys::unlock();
  embree::MutexSys::unlock();
  pMStack_260 = pMVar13;
LAB_0010da02:
  local_280 = (MutexSys *)local_238;
  uVar16 = *(ulong *)(param_8 + 0x10);
  *(ulong *)(param_8 + 0x28) = *(ulong *)(param_8 + 0x28) + 0x80;
  uVar12 = (ulong)(-(int)uVar16 & 0xf);
  uVar17 = uVar16 + 0x80 + uVar12;
  *(ulong *)(param_8 + 0x10) = uVar17;
  if (*(ulong *)(param_8 + 0x18) < uVar17) {
    *(ulong *)(param_8 + 0x10) = uVar16;
    pMStack_260 = param_8;
    if (*(ulong *)(param_8 + 0x20) < 0x200) goto LAB_0010e3c6;
    local_238._0_8_ = *(ulong *)(param_8 + 0x20);
    pMVar13 = (MutexSys *)FastAllocator::malloc(param_7,(ulong *)local_280,0x40,true);
    *(MutexSys **)(param_8 + 8) = pMVar13;
    uVar17 = *(ulong *)(param_8 + 0x10);
    *(ulong *)(param_8 + 0x10) = 0x80;
    *(ulong *)(param_8 + 0x30) = (*(ulong *)(param_8 + 0x18) + *(ulong *)(param_8 + 0x30)) - uVar17;
    *(undefined8 *)(param_8 + 0x18) = local_238._0_8_;
    if ((ulong)local_238._0_8_ < 0x80) {
      *(ulong *)(param_8 + 0x10) = 0;
      local_238._0_8_ = *(ulong *)(param_8 + 0x20);
      pMVar13 = (MutexSys *)FastAllocator::malloc(param_7,(ulong *)local_280,0x40,false);
      *(MutexSys **)(param_8 + 8) = pMVar13;
      uVar17 = *(ulong *)(param_8 + 0x10);
      *(ulong *)(param_8 + 0x10) = 0x80;
      *(ulong *)(param_8 + 0x30) =
           (*(ulong *)(param_8 + 0x18) + *(ulong *)(param_8 + 0x30)) - uVar17;
      *(undefined8 *)(param_8 + 0x18) = local_238._0_8_;
      if ((ulong)local_238._0_8_ < 0x80) {
        pMVar13 = (MutexSys *)0x0;
        *(ulong *)(param_8 + 0x10) = 0;
      }
    }
  }
  else {
    *(ulong *)(param_8 + 0x30) = *(ulong *)(param_8 + 0x30) + uVar12;
    pMVar13 = (MutexSys *)((*(ulong *)(param_8 + 8) - 0x80) + uVar17);
  }
  do {
    uVar16 = _UNK_00117638;
    uVar7 = _UNK_0011762c;
    uVar6 = _UNK_00117628;
    uVar5 = _UNK_00117624;
    uVar4 = _LC2;
    uVar17 = CONCAT44(_UNK_00117634,_LC4);
    *(ulong *)pMVar13 = 8;
    *(ulong *)(pMVar13 + 8) = 8;
    *(ulong *)(pMVar13 + 0x10) = 8;
    *(ulong *)(pMVar13 + 0x18) = 8;
    *(undefined4 *)(pMVar13 + 0x60) = uVar4;
    *(undefined4 *)(pMVar13 + 100) = uVar5;
    *(undefined4 *)(pMVar13 + 0x68) = uVar6;
    *(undefined4 *)(pMVar13 + 0x6c) = uVar7;
    *(undefined4 *)(pMVar13 + 0x40) = uVar4;
    *(undefined4 *)(pMVar13 + 0x44) = uVar5;
    *(undefined4 *)(pMVar13 + 0x48) = uVar6;
    *(undefined4 *)(pMVar13 + 0x4c) = uVar7;
    *(undefined4 *)(pMVar13 + 0x20) = uVar4;
    *(undefined4 *)(pMVar13 + 0x24) = uVar5;
    *(undefined4 *)(pMVar13 + 0x28) = uVar6;
    *(undefined4 *)(pMVar13 + 0x2c) = uVar7;
    *(ulong *)(pMVar13 + 0x70) = uVar17;
    *(ulong *)(pMVar13 + 0x78) = uVar16;
    *(ulong *)(pMVar13 + 0x50) = uVar17;
    *(ulong *)(pMVar13 + 0x58) = uVar16;
    *(ulong *)(pMVar13 + 0x30) = uVar17;
    *(ulong *)(pMVar13 + 0x38) = uVar16;
    if (*(ulong *)(param_2 + 0x20) <
        (ulong)(uint)(*(int *)((MutexSys *)param_4 + 4) - *(int *)param_4)) {
      stack0xfffffffffffffdd0 = &local_250;
      local_238._0_8_ = auStack_1c8;
      uStack_248 = 0;
      pMStack_228 = pMVar21;
      pBStack_220 = param_2;
      TaskScheduler::
      spawn<unsigned_long,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMv<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned_long,embree::range<unsigned_int>const&,embree::FastAllocator::CachedAllocator,bool)::_lambda(embree::range<unsigned_long>const&)_1_>
                (0,(ulong)puVar18,1,(_lambda_embree__range<unsigned_long>_const___1_ *)local_280,
                 (TaskGroupContext *)&uStack_248);
      embree::TaskScheduler::wait();
      if (uStack_248 != 0) break;
    }
    else {
      pMVar24 = pMVar21 + (long)puVar18 * 8;
      puVar19 = auStack_1c8;
      do {
        param_4 = (range *)(pMVar21 + 8);
        recurse(local_280,param_2,local_250 + 1,pMVar21,0);
        *puVar19 = local_238._0_8_;
        puVar19[2] = (ulong)pMStack_228;
        puVar19[3] = (ulong)pBStack_220;
        *(undefined4 *)(puVar19 + 4) = uStack_218;
        *(undefined4 *)((long)puVar19 + 0x24) = uStack_214;
        *(uint *)(puVar19 + 5) = auStack_210[0];
        *(uint *)((long)puVar19 + 0x2c) = auStack_210[1];
        puVar19 = puVar19 + 6;
        pMVar21 = (MutexSys *)param_4;
        pMStack_260 = pMVar13;
      } while (param_4 != (range *)pMVar24);
    }
    auVar26._12_4_ = iStack_1ac;
    auVar26._0_12_ = auStack_1b8;
    auVar27._4_4_ = _LC2;
    auVar27._0_4_ = _LC2;
    auVar27._8_4_ = _LC2;
    auVar27._12_4_ = _LC2;
    *(int *)(pMVar13 + 0x20) = auStack_1b8._0_4_;
    uVar4 = _LC4;
    auVar27 = minps(auVar27,auVar26);
    *(int *)(pMVar13 + 0x60) = auStack_1b8._8_4_;
    *(int *)(pMVar13 + 0x30) = auStack_1a8._0_4_;
    auVar25._4_4_ = uVar4;
    auVar25._0_4_ = uVar4;
    auVar25._8_4_ = uVar4;
    auVar25._12_4_ = uVar4;
    *(ulong *)pMVar13 = auStack_1c8[0];
    auVar26 = maxps(auVar25,auStack_1a8);
    *(int *)(pMVar13 + 0x40) = auStack_1b8._4_4_;
    *(int *)(pMVar13 + 0x50) = auStack_1a8._4_4_;
    auVar1._12_4_ = iStack_17c;
    auVar1._0_12_ = auStack_188;
    *(int *)(pMVar13 + 0x70) = auStack_1a8._8_4_;
    _local_238 = minps(auVar27,auVar1);
    *(int *)(pMVar13 + 0x24) = auStack_188._0_4_;
    auVar26 = maxps(auVar26,auStack_178);
    *(int *)(pMVar13 + 0x34) = auStack_178._0_4_;
    *(int *)(pMVar13 + 100) = auStack_188._8_4_;
    *(ulong *)(pMVar13 + 8) = uStack_198;
    *(int *)(pMVar13 + 0x44) = auStack_188._4_4_;
    *(int *)(pMVar13 + 0x54) = auStack_178._4_4_;
    *(int *)(pMVar13 + 0x74) = auStack_178._8_4_;
    if (puVar18 == (ulong *)0x2) {
      pMVar21 = (MutexSys *)((long)iStack_17c + (long)iStack_1ac);
    }
    else {
      auVar2._12_4_ = iStack_14c;
      auVar2._0_12_ = auStack_158;
      _local_238 = minps(_local_238,auVar2);
      *(int *)(pMVar13 + 0x28) = auStack_158._0_4_;
      auVar26 = maxps(auVar26,auStack_148);
      *(int *)(pMVar13 + 0x38) = auStack_148._0_4_;
      *(int *)(pMVar13 + 0x68) = auStack_158._8_4_;
      *(ulong *)(pMVar13 + 0x10) = uStack_168;
      *(int *)(pMVar13 + 0x48) = auStack_158._4_4_;
      *(int *)(pMVar13 + 0x58) = auStack_148._4_4_;
      *(int *)(pMVar13 + 0x78) = auStack_148._8_4_;
      if (puVar18 == (ulong *)0x3) {
        pMVar21 = (MutexSys *)((long)iStack_14c + (long)iStack_17c + (long)iStack_1ac);
      }
      else {
        auVar3._12_4_ = iStack_11c;
        auVar3._0_12_ = auStack_128;
        *(int *)(pMVar13 + 0x2c) = auStack_128._0_4_;
        _local_238 = minps(_local_238,auVar3);
        auVar26 = maxps(auVar26,auStack_118);
        *(ulong *)(pMVar13 + 0x18) = uStack_138;
        *(int *)(pMVar13 + 0x3c) = auStack_118._0_4_;
        *(int *)(pMVar13 + 0x4c) = auStack_128._4_4_;
        *(int *)(pMVar13 + 0x6c) = auStack_128._8_4_;
        *(int *)(pMVar13 + 0x5c) = auStack_118._4_4_;
        *(int *)(pMVar13 + 0x7c) = auStack_118._8_4_;
        pMVar21 = (MutexSys *)
                  ((long)iStack_11c + (long)iStack_14c + (long)iStack_17c + (long)iStack_1ac);
        if (puVar18 != (ulong *)0x4) {
          pMVar21 = pMVar21 + iStack_ec;
        }
      }
    }
    if (pMVar21 < (MutexSys *)0x1000) {
LAB_0010dd81:
      uStack_22c = (int)pMVar21;
      auVar1 = _local_238;
      stack0xfffffffffffffdd0 = auVar1._8_8_;
      *param_1 = pMVar13;
      param_1[2] = local_238._0_8_;
      param_1[3] = stack0xfffffffffffffdd0;
      *(undefined1 (*) [16])(param_1 + 4) = auVar26;
      _local_238 = auVar1;
      goto LAB_0010dd9a;
    }
    if (iStack_1ac < 0x1000) {
      embree::sse2::BVHNRotate<4>::rotate(*(ulong *)pMVar13,1);
      *(ulong *)pMVar13 = *(ulong *)pMVar13 | 0x8000000000000000;
      local_280 = pMVar13;
    }
    if (iStack_17c < 0x1000) {
      embree::sse2::BVHNRotate<4>::rotate(*(ulong *)(pMVar13 + 8),1);
      *(ulong *)(pMVar13 + 8) = *(ulong *)(pMVar13 + 8) | 0x8000000000000000;
      local_280 = pMVar13;
    }
    if (puVar18 == (ulong *)0x2) goto LAB_0010dd81;
    if (iStack_14c < 0x1000) {
      embree::sse2::BVHNRotate<4>::rotate(*(ulong *)(pMVar13 + 0x10),1);
      *(ulong *)(pMVar13 + 0x10) = *(ulong *)(pMVar13 + 0x10) | 0x8000000000000000;
      local_280 = pMVar13;
    }
    if (puVar18 == (ulong *)0x3) goto LAB_0010dd81;
    if (iStack_11c < 0x1000) {
      embree::sse2::BVHNRotate<4>::rotate(*(ulong *)(pMVar13 + 0x18),1);
      *(ulong *)(pMVar13 + 0x18) = *(ulong *)(pMVar13 + 0x18) | 0x8000000000000000;
      local_280 = pMVar13;
    }
    if ((puVar18 == (ulong *)0x4) || (0xfff < iStack_ec)) goto LAB_0010dd81;
    embree::sse2::BVHNRotate<4>::rotate(*(ulong *)(pMVar13 + 0x20),1);
LAB_0010e3c6:
    pMVar13 = (MutexSys *)FastAllocator::malloc(param_7,&uStack_240,0x40,false);
    param_8 = pMStack_260;
  } while( true );
  puVar18 = &uStack_240;
  uStack_240 = uStack_248;
  std::__exception_ptr::exception_ptr::_M_addref();
  pMVar13 = (MutexSys *)std::rethrow_exception(puVar18);
LAB_0010dfe8:
  *(ulong *)(pMVar13 + 0x88) = 0;
  uVar17 = 0;
  *(ulong *)(pMVar13 + 0x98) = 0;
  *(ulong *)(pMVar13 + 0x90) = 0;
  *(ulong *)(pMVar13 + 0xa8) = 0;
  *(ulong *)(pMVar13 + 0xb0) = 0;
  goto LAB_0010d96e;
}



/* embree::TaskScheduler::ClosureTaskFunction<embree::TaskScheduler::spawn<unsigned long,
   embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleMv<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned long, embree::range<unsigned int>
   const&, embree::FastAllocator::CachedAllocator, bool)::{lambda(embree::range<unsigned long>
   const&)#1}>(unsigned long, unsigned long, unsigned long,
   embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleMv<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned long, embree::range<unsigned int>
   const&, embree::FastAllocator::CachedAllocator, bool)::{lambda(embree::range<unsigned long>
   const&)#1} const&, embree::TaskScheduler::TaskGroupContext*)::{lambda()#1}>::execute() */

void __thiscall
embree::TaskScheduler::
ClosureTaskFunction<embree::TaskScheduler::spawn<unsigned_long,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMv<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned_long,embree::range<unsigned_int>const&,embree::FastAllocator::CachedAllocator,bool)::{lambda(embree::range<unsigned_long>const&)#1}>(unsigned_long,unsigned_long,unsigned_long,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMv<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned_long,embree::range<unsigned_int>const&,embree::FastAllocator::CachedAllocator,bool)::{lambda(embree::range<unsigned_long>const&)#1}const&,embree::TaskScheduler::TaskGroupContext*)::{lambda()#1}>
::execute(ClosureTaskFunction<embree::TaskScheduler::spawn<unsigned_long,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMv<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned_long,embree::range<unsigned_int>const&,embree::FastAllocator::CachedAllocator,bool)::_lambda(embree::range<unsigned_long>const&)_1_>(unsigned_long,unsigned_long,unsigned_long,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMv<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned_long,embree::range<unsigned_int>const&,embree::FastAllocator::CachedAllocator,bool)::_lambda(embree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
          *this)

{
  int *piVar1;
  ulong uVar2;
  undefined8 *puVar3;
  TaskGroupContext *pTVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong *puVar10;
  TaskScheduler *pTVar11;
  ulong uVar12;
  long in_FS_OFFSET;
  long local_b8;
  ulong uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  TaskGroupContext *local_80;
  ulong local_78;
  ulong uStack_70;
  ulong local_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  TaskGroupContext *local_40;
  long local_30;
  
  uVar12 = *(ulong *)(this + 8);
  uVar9 = *(ulong *)(this + 0x10);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(ulong *)(this + 0x18) < uVar12 - uVar9) {
    pTVar4 = *(TaskGroupContext **)(this + 0x40);
    uStack_60 = *(ulong *)(this + 0x20);
    uStack_58 = *(ulong *)(this + 0x28);
    uStack_50 = *(ulong *)(this + 0x30);
    uStack_48 = *(undefined8 *)(this + 0x38);
    uVar12 = uVar12 + uVar9 >> 1;
    local_78 = uVar12;
    uStack_70 = uVar9;
    local_68 = *(ulong *)(this + 0x18);
    local_40 = pTVar4;
    lVar7 = embree::TaskScheduler::thread();
    if (lVar7 == 0) {
      pTVar11 = (TaskScheduler *)embree::TaskScheduler::instance();
      spawn_root<embree::TaskScheduler::spawn<unsigned_long,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMv<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned_long,embree::range<unsigned_int>const&,embree::FastAllocator::CachedAllocator,bool)::_lambda(embree::range<unsigned_long>const&)_1_>(unsigned_long,unsigned_long,unsigned_long,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMv<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned_long,embree::range<unsigned_int>const&,embree::FastAllocator::CachedAllocator,bool)::_lambda(embree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
                (pTVar11,(_lambda___1_ *)&local_78,pTVar4,uVar12 - uVar9,true);
    }
    else {
      if (0xfff < *(ulong *)(lVar7 + 0x40080)) goto LAB_0010e87e;
      lVar5 = *(long *)(lVar7 + 0xc00c0);
      uVar2 = lVar5 + 0x48 + (ulong)(-(int)lVar5 & 0x3f);
      if (0x80000 < uVar2) goto LAB_0010e87e;
      *(ulong *)(lVar7 + 0xc00c0) = uVar2;
      puVar3 = (undefined8 *)(lVar7 + 0x40078 + uVar2);
      puVar3[1] = local_78;
      puVar3[2] = uStack_70;
      *puVar3 = &PTR_execute_001171c8;
      puVar3[3] = local_68;
      puVar3[4] = uStack_60;
      puVar3[5] = uStack_58;
      puVar3[6] = uStack_50;
      puVar3[7] = uStack_48;
      puVar3[8] = local_40;
      lVar8 = *(long *)(lVar7 + 0x40080) * 0x40;
      piVar1 = (int *)(lVar7 + 0x40 + lVar8);
      lVar6 = *(long *)(lVar7 + 0xc0100);
      *(undefined4 *)(lVar7 + 0x44 + lVar8) = 1;
      *(undefined1 *)(lVar7 + 0x48 + lVar8) = 1;
      lVar8 = lVar8 + lVar7;
      *(undefined8 **)(lVar8 + 0x50) = puVar3;
      *(long *)(lVar8 + 0x58) = lVar6;
      *(TaskGroupContext **)(lVar8 + 0x60) = pTVar4;
      *(long *)(lVar8 + 0x68) = lVar5;
      *(ulong *)(lVar8 + 0x70) = uVar12 - uVar9;
      if (lVar6 != 0) {
        LOCK();
        *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
        UNLOCK();
      }
      LOCK();
      if (*piVar1 == 0) {
        *piVar1 = 1;
      }
      UNLOCK();
      LOCK();
      *(long *)(lVar7 + 0x40080) = *(long *)(lVar7 + 0x40080) + 1;
      UNLOCK();
      if (*(long *)(lVar7 + 0x40080) - 1U <= *(ulong *)(lVar7 + 0x40040)) {
        LOCK();
        *(long *)(lVar7 + 0x40040) = *(long *)(lVar7 + 0x40080) + -1;
        UNLOCK();
      }
    }
    local_b8 = *(long *)(this + 8);
    local_a8 = *(undefined8 *)(this + 0x18);
    pTVar4 = *(TaskGroupContext **)(this + 0x40);
    uStack_a0 = *(undefined8 *)(this + 0x20);
    uStack_98 = *(undefined8 *)(this + 0x28);
    uStack_90 = *(undefined8 *)(this + 0x30);
    uStack_88 = *(undefined8 *)(this + 0x38);
    uVar9 = local_b8 - uVar12;
    uStack_b0 = uVar12;
    local_80 = pTVar4;
    lVar7 = embree::TaskScheduler::thread();
    if (lVar7 == 0) {
      pTVar11 = (TaskScheduler *)embree::TaskScheduler::instance();
      spawn_root<embree::TaskScheduler::spawn<unsigned_long,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMv<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned_long,embree::range<unsigned_int>const&,embree::FastAllocator::CachedAllocator,bool)::_lambda(embree::range<unsigned_long>const&)_1_>(unsigned_long,unsigned_long,unsigned_long,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMv<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned_long,embree::range<unsigned_int>const&,embree::FastAllocator::CachedAllocator,bool)::_lambda(embree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
                (pTVar11,(_lambda___1_ *)&local_b8,pTVar4,uVar9,true);
    }
    else {
      if (0xfff < *(ulong *)(lVar7 + 0x40080)) {
LAB_0010e87e:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar5 = *(long *)(lVar7 + 0xc00c0);
      uVar12 = lVar5 + 0x48 + (ulong)(-(int)lVar5 & 0x3f);
      if (0x80000 < uVar12) goto LAB_0010e87e;
      *(ulong *)(lVar7 + 0xc00c0) = uVar12;
      puVar3 = (undefined8 *)(lVar7 + 0x40078 + uVar12);
      *puVar3 = &PTR_execute_001171c8;
      puVar3[1] = local_b8;
      puVar3[2] = uStack_b0;
      puVar3[3] = local_a8;
      puVar3[4] = uStack_a0;
      puVar3[5] = uStack_98;
      puVar3[6] = uStack_90;
      puVar3[7] = uStack_88;
      puVar3[8] = local_80;
      lVar8 = *(long *)(lVar7 + 0x40080) * 0x40;
      piVar1 = (int *)(lVar7 + 0x40 + lVar8);
      lVar6 = *(long *)(lVar7 + 0xc0100);
      *(undefined4 *)(lVar7 + 0x44 + lVar8) = 1;
      *(undefined1 *)(lVar7 + 0x48 + lVar8) = 1;
      lVar8 = lVar8 + lVar7;
      *(undefined8 **)(lVar8 + 0x50) = puVar3;
      *(long *)(lVar8 + 0x58) = lVar6;
      *(TaskGroupContext **)(lVar8 + 0x60) = pTVar4;
      *(long *)(lVar8 + 0x68) = lVar5;
      *(ulong *)(lVar8 + 0x70) = uVar9;
      if (lVar6 != 0) {
        LOCK();
        *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
        UNLOCK();
      }
      LOCK();
      if (*piVar1 == 0) {
        *piVar1 = 1;
      }
      UNLOCK();
      LOCK();
      *(long *)(lVar7 + 0x40080) = *(long *)(lVar7 + 0x40080) + 1;
      UNLOCK();
      if (*(long *)(lVar7 + 0x40080) - 1U <= *(ulong *)(lVar7 + 0x40040)) {
        LOCK();
        *(long *)(lVar7 + 0x40040) = *(long *)(lVar7 + 0x40080) + -1;
        UNLOCK();
      }
    }
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      embree::TaskScheduler::wait();
      return;
    }
  }
  else {
    for (; uVar9 < uVar12; uVar9 = uVar9 + 1) {
      local_b8 = 0;
      uStack_b0 = 0;
      local_a8 = 0;
      sse2::BVHBuilderMorton::
      BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMv<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>
      ::recurse(&local_78,*(undefined8 *)(this + 0x38),**(long **)(this + 0x28) + 1,
                *(long *)(this + 0x30) + uVar9 * 8,1);
      puVar10 = (ulong *)(uVar9 * 0x30 + *(long *)(this + 0x20));
      *puVar10 = local_78;
      puVar10[2] = local_68;
      puVar10[3] = uStack_60;
      puVar10[4] = uStack_58;
      puVar10[5] = uStack_50;
    }
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* embree::BBox<embree::Vec3fa> embree::parallel_reduce_internal<unsigned int,
   embree::BBox<embree::Vec3fa>,
   embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleM<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned int>
   const&) const::{lambda(embree::range<unsigned int> const&)#1}, embree::BBox<embree::Vec3fa> const
   (embree::BBox<embree::Vec3fa> const&, embree::BBox<embree::Vec3fa> const&)>(unsigned int,
   unsigned int, unsigned int, unsigned int, embree::BBox<embree::Vec3fa> const&,
   embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleM<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned int>
   const&) const::{lambda(embree::range<unsigned int> const&)#1} const&,
   embree::BBox<embree::Vec3fa> const ( const&)(embree::BBox<embree::Vec3fa> const&,
   embree::BBox<embree::Vec3fa> const&)) [clone .isra.0] */

BBox * embree::
       parallel_reduce_internal<unsigned_int,embree::BBox<embree::Vec3fa>,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleM<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned_int>const&)const::_lambda(embree::range<unsigned_int>const&)_1_,embree::BBox<embree::Vec3fa>const(embree::BBox<embree::Vec3fa>const&,embree::BBox<embree::Vec3fa>const&)>
                 (uint param_1,uint param_2,uint param_3,uint param_4,BBox *param_5,
                 _lambda_embree__range<unsigned_int>_const___1_ *param_6,
                 _func_BBox_BBox_ptr_BBox_ptr *param_7)

{
  int *piVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined4 in_register_0000003c;
  BBox *pBVar9;
  ulong uVar10;
  long lVar11;
  long in_FS_OFFSET;
  uint local_212c;
  uint local_2128;
  uint local_2124 [3];
  long local_2118;
  uint local_2110;
  undefined4 uStack_210c;
  undefined4 uStack_2108;
  undefined4 uStack_2104;
  BBox *local_2100;
  long *plStack_20f8;
  undefined8 local_20f0;
  undefined8 uStack_20e8;
  uint *local_20e0;
  undefined1 *puStack_20d8;
  _lambda_embree__range<unsigned_int>_const___1_ *local_20d0;
  undefined1 local_20c0 [8192];
  undefined1 *local_c0;
  ulong local_b8;
  long local_48;
  
  pBVar9 = (BBox *)CONCAT44(in_register_0000003c,param_1);
  local_48 = *(long *)(in_FS_OFFSET + 0x28);
  local_212c = param_4;
  local_2128 = param_3;
  local_2124[0] = param_2;
  uVar5 = embree::TaskScheduler::threadCount();
  if (0x200 < local_2124[0]) {
    local_2124[0] = 0x200;
  }
  if (uVar5 < local_2124[0]) {
    local_2124[0] = uVar5;
  }
  local_b8 = (ulong)local_2124[0];
  if (local_b8 < 0x101) {
    local_c0 = local_20c0;
  }
  else {
    local_c0 = (undefined1 *)embree::alignedMalloc(local_b8 << 5,0x40);
  }
  local_20f0 = &local_2128;
  uStack_20e8 = &local_212c;
  local_20e0 = local_2124;
  puStack_20d8 = local_20c0;
  local_20d0 = param_6;
  if (local_2124[0] == 0) {
    uVar8 = *(undefined8 *)(param_5 + 8);
    *(undefined8 *)pBVar9 = *(undefined8 *)param_5;
    *(undefined8 *)(pBVar9 + 8) = uVar8;
    uVar8 = *(undefined8 *)(param_5 + 0x18);
    *(undefined8 *)(pBVar9 + 0x10) = *(undefined8 *)(param_5 + 0x10);
    *(undefined8 *)(pBVar9 + 0x18) = uVar8;
  }
  else {
    uVar10 = (ulong)local_2124[0];
    uStack_210c = 0;
    uStack_2108 = 1;
    local_2118 = 0;
    local_2110 = local_2124[0];
    local_2100 = (BBox *)&local_20f0;
    plStack_20f8 = &local_2118;
    lVar6 = embree::TaskScheduler::thread();
    if (lVar6 == 0) {
      uVar8 = embree::TaskScheduler::instance();
      _ZN6embree13TaskScheduler10spawn_rootIZNS0_5spawnIjZNS_12parallel_forIjZNS_24parallel_reduce_internalIjNS_4BBoxINS_6Vec3faEEEZNKS_4sse216BVHBuilderMorton8BuilderTINS_13BVHNodeRecordINS_10NodeRefPtrILi4EEEEENS_13FastAllocator15CachedAllocatorENS_4BVHNILi4EE11CreateAllocENS_10AABBNode_tISD_Li4EE6CreateENS8_13SetBVHNBoundsILi4EEENS8_16CreateMortonLeafILi4ENS_9TriangleMILi4EEEEENS8_19CalculateMeshBoundsINS_12TriangleMeshEEENS_5Scene29BuildProgressMonitorInterfaceEE19recreateMortonCodesERKNS_5rangeIjEEEUlS12_E_FKS7_RS14_S15_EEET0_T_S18_S18_S18_RKS17_RKT1_RKT2_EUljE_EEvS18_S1A_EUlS12_E_EEvS18_S18_S18_S1A_PNS0_16TaskGroupContextEEUlvE_EEvRKS18_S1K_mb
                (uVar8,&local_2110,&local_2118,uVar10,1);
    }
    else {
      if (0xfff < *(ulong *)(lVar6 + 0x40080)) {
LAB_0010f5af:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar11 = *(long *)(lVar6 + 0xc00c0);
      uVar2 = lVar11 + 0x28 + (ulong)(-(int)lVar11 & 0x3f);
      if (0x80000 < uVar2) goto LAB_0010f5af;
      *(ulong *)(lVar6 + 0xc00c0) = uVar2;
      puVar3 = (undefined8 *)(lVar6 + 0x40098 + uVar2);
      *puVar3 = 0x117270;
      puVar3[1] = CONCAT44(uStack_210c,local_2110);
      puVar3[2] = CONCAT44(uStack_2104,uStack_2108);
      puVar3[3] = local_2100;
      puVar3[4] = plStack_20f8;
      lVar7 = *(long *)(lVar6 + 0x40080) * 0x40;
      piVar1 = (int *)(lVar6 + 0x40 + lVar7);
      lVar4 = *(long *)(lVar6 + 0xc0100);
      *(undefined4 *)(lVar6 + 0x44 + lVar7) = 1;
      *(undefined1 *)(lVar6 + 0x48 + lVar7) = 1;
      lVar7 = lVar7 + lVar6;
      *(undefined8 **)(lVar7 + 0x50) = puVar3;
      *(long *)(lVar7 + 0x58) = lVar4;
      *(long **)(lVar7 + 0x60) = &local_2118;
      *(long *)(lVar7 + 0x68) = lVar11;
      *(ulong *)(lVar7 + 0x70) = uVar10;
      if (lVar4 != 0) {
        LOCK();
        *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + 1;
        UNLOCK();
      }
      LOCK();
      if (*piVar1 == 0) {
        *piVar1 = 1;
      }
      UNLOCK();
      LOCK();
      *(long *)(lVar6 + 0x40080) = *(long *)(lVar6 + 0x40080) + 1;
      UNLOCK();
      if (*(long *)(lVar6 + 0x40080) - 1U <= *(ulong *)(lVar6 + 0x40040)) {
        LOCK();
        *(long *)(lVar6 + 0x40040) = *(long *)(lVar6 + 0x40080) + -1;
        UNLOCK();
      }
    }
    embree::TaskScheduler::wait();
    if (local_2118 != 0) {
      local_2110 = (uint)local_2118;
      uStack_210c = (undefined4)((ulong)local_2118 >> 0x20);
      std::__exception_ptr::exception_ptr::_M_addref();
      std::rethrow_exception(&local_2110);
      goto LAB_0010f5aa;
    }
    uVar8 = *(undefined8 *)(param_5 + 8);
    *(undefined8 *)pBVar9 = *(undefined8 *)param_5;
    *(undefined8 *)(pBVar9 + 8) = uVar8;
    uVar8 = *(undefined8 *)(param_5 + 0x18);
    *(undefined8 *)(pBVar9 + 0x10) = *(undefined8 *)(param_5 + 0x10);
    *(undefined8 *)(pBVar9 + 0x18) = uVar8;
    if (local_2124[0] != 0) {
      lVar6 = 0;
      do {
        lVar11 = lVar6 + 1;
        (*param_7)((BBox *)&local_20f0,pBVar9,(BBox *)(local_c0 + lVar6 * 0x20));
        *(undefined4 *)pBVar9 = (undefined4)local_20f0;
        *(undefined4 *)(pBVar9 + 4) = local_20f0._4_4_;
        *(undefined4 *)(pBVar9 + 8) = (undefined4)uStack_20e8;
        *(undefined4 *)(pBVar9 + 0xc) = uStack_20e8._4_4_;
        *(uint **)(pBVar9 + 0x10) = local_20e0;
        *(undefined1 **)(pBVar9 + 0x18) = puStack_20d8;
        lVar6 = lVar11;
      } while ((uint)lVar11 < local_2124[0]);
    }
  }
  if (local_c0 != local_20c0) {
    embree::alignedFree(local_c0);
  }
  if (local_48 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pBVar9;
  }
LAB_0010f5aa:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleM<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned int>
   const&) const */

void __thiscall
embree::sse2::BVHBuilderMorton::
BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleM<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>
::recreateMortonCodes
          (BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleM<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>
           *this,range *param_1)

{
  uint *puVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  uint *puVar8;
  long lVar9;
  ulong uVar10;
  uint *puVar11;
  long lVar12;
  TaskScheduler *this_00;
  ulong uVar13;
  long lVar14;
  uint *puVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long in_FS_OFFSET;
  uint uVar20;
  uint uVar24;
  uint uVar25;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar26;
  float fVar28;
  float fVar29;
  undefined1 auVar27 [16];
  undefined1 auVar30 [16];
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined1 auVar36 [16];
  BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleM<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>
  *local_b8;
  long local_b0;
  undefined1 local_a8 [16];
  undefined1 local_98 [8];
  float fStack_90;
  float fStack_8c;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  TaskGroupContext *local_68;
  undefined1 local_58 [16];
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  long local_30;
  
  uVar20 = *(uint *)param_1;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar24 = *(uint *)(param_1 + 4);
  uVar10 = (ulong)uVar24;
  if (uVar24 - uVar20 < 0x400) {
    lVar9 = *(long *)(this + 0x58);
    uVar13 = (ulong)uVar20;
    if (uVar13 < uVar10) {
      lVar19 = uVar13 * 8;
      lVar16 = lVar9 + lVar19;
      lVar12 = **(long **)(this + 0x48);
      auVar30._4_4_ = _LC2;
      auVar30._0_4_ = _LC2;
      auVar30._8_4_ = _LC2;
      auVar30._12_4_ = _LC2;
      auVar36._4_4_ = _LC4;
      auVar36._0_4_ = _LC4;
      auVar36._8_4_ = _LC4;
      auVar36._12_4_ = _LC4;
      lVar17 = *(long *)(lVar12 + 0x58);
      lVar18 = *(long *)(lVar12 + 0x60);
      lVar14 = *(long *)(lVar12 + 0x88);
      lVar12 = *(long *)(lVar12 + 0x90);
      do {
        puVar8 = (uint *)(lVar16 + 4);
        lVar16 = lVar16 + 8;
        puVar8 = (uint *)((ulong)*puVar8 * lVar18 + lVar17);
        auVar22 = *(undefined1 (*) [16])(lVar14 + (ulong)*puVar8 * lVar12);
        auVar27 = *(undefined1 (*) [16])(lVar14 + (ulong)puVar8[1] * lVar12);
        auVar23 = *(undefined1 (*) [16])(lVar14 + (ulong)puVar8[2] * lVar12);
        auVar21 = maxps(auVar22,auVar27);
        auVar27 = minps(auVar22,auVar27);
        auVar22 = maxps(auVar21,auVar23);
        auVar21 = minps(auVar27,auVar23);
        auVar27._0_4_ = auVar22._0_4_ + auVar21._0_4_;
        auVar27._4_4_ = auVar22._4_4_ + auVar21._4_4_;
        auVar27._8_4_ = auVar22._8_4_ + auVar21._8_4_;
        auVar27._12_4_ = auVar22._12_4_ + auVar21._12_4_;
        auVar30 = minps(auVar30,auVar27);
        auVar36 = maxps(auVar36,auVar27);
      } while (lVar9 + uVar10 * 8 != lVar16);
      auVar21._0_4_ = auVar36._0_4_ - auVar30._0_4_;
      auVar21._4_4_ = auVar36._4_4_ - auVar30._4_4_;
      auVar21._8_4_ = auVar36._8_4_ - auVar30._8_4_;
      auVar21._12_4_ = auVar36._12_4_ - auVar30._12_4_;
      auVar22 = rcpps(auVar23,auVar21);
      bVar5 = _LC8 < auVar21._0_4_;
      bVar6 = _LC8 < auVar21._4_4_;
      bVar7 = _LC8 < auVar21._8_4_;
      fVar26 = auVar22._0_4_;
      fVar28 = auVar22._4_4_;
      fVar29 = auVar22._8_4_;
      fVar26 = ((_LC10 - auVar21._0_4_ * fVar26) * fVar26 + fVar26) * _LC12;
      fVar28 = ((_LC10 - auVar21._4_4_ * fVar28) * fVar28 + fVar28) * _LC12;
      fVar29 = ((_LC10 - auVar21._8_4_ * fVar29) * fVar29 + fVar29) * _LC12;
      while( true ) {
        puVar8 = (uint *)((ulong)((uint *)(lVar9 + lVar19))[1] * lVar18 + lVar17);
        auVar22 = *(undefined1 (*) [16])(lVar14 + (ulong)*puVar8 * lVar12);
        auVar36 = *(undefined1 (*) [16])(lVar14 + (ulong)puVar8[1] * lVar12);
        auVar27 = *(undefined1 (*) [16])(lVar14 + (ulong)puVar8[2] * lVar12);
        auVar23 = maxps(auVar22,auVar36);
        auVar36 = minps(auVar22,auVar36);
        auVar22 = maxps(auVar23,auVar27);
        auVar36 = minps(auVar36,auVar27);
        uVar20 = (uint)(((auVar22._0_4_ + auVar36._0_4_) - auVar30._0_4_) *
                       (float)(-(uint)bVar5 & (uint)fVar26));
        uVar24 = (uint)(((auVar22._4_4_ + auVar36._4_4_) - auVar30._4_4_) *
                       (float)(-(uint)bVar6 & (uint)fVar28));
        uVar25 = (uint)(((auVar22._8_4_ + auVar36._8_4_) - auVar30._8_4_) *
                       (float)(-(uint)bVar7 & (uint)fVar29));
        uVar13 = uVar13 + 1;
        *(uint *)(lVar9 + lVar19) =
             ((((uVar24 << 0x10 | uVar24) & 0x30000ff) * 0x101 & 0x300f00f) * 0x11 & 0x30c30c3) * 10
             & 0x12492492 |
             (((((uVar25 << 0x10 | uVar25) & 0x30000ff) * 0x101 & 0x300f00f) * 0x11 & 0x30c30c3) * 5
             & 0x9249249) << 2 |
             ((((uVar20 << 0x10 | uVar20) & 0x30000ff) * 0x101 & 0x300f00f) * 0x11 & 0x30c30c3) * 5
             & 0x9249249;
        uVar10 = (ulong)*(uint *)(param_1 + 4);
        if (uVar10 <= uVar13) break;
        lVar9 = *(long *)(this + 0x58);
        lVar19 = uVar13 * 8;
        lVar16 = **(long **)(this + 0x48);
        lVar14 = *(long *)(lVar16 + 0x88);
        lVar17 = *(long *)(lVar16 + 0x58);
        lVar18 = *(long *)(lVar16 + 0x60);
        lVar12 = *(long *)(lVar16 + 0x90);
      }
      uVar13 = (ulong)*(uint *)param_1;
      lVar9 = *(long *)(this + 0x58);
    }
    puVar8 = (uint *)(lVar9 + uVar10 * 8);
    puVar1 = (uint *)(lVar9 + uVar13 * 8);
    if (puVar8 != puVar1) {
      lVar9 = uVar10 * 8 + uVar13 * -8;
      uVar10 = lVar9 >> 3;
      if (uVar10 == 0) {
        std::
        __introsort_loop<embree::sse2::BVHBuilderMorton::BuildPrim*,long,__gnu_cxx::__ops::_Iter_less_iter>
                  (puVar1,puVar8,0xfffffffffffffffe);
      }
      else {
        lVar16 = 0x3f;
        if (uVar10 != 0) {
          for (; uVar10 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        std::
        __introsort_loop<embree::sse2::BVHBuilderMorton::BuildPrim*,long,__gnu_cxx::__ops::_Iter_less_iter>
                  (puVar1,puVar8,(long)(int)lVar16 * 2);
        if (0x80 < lVar9) {
          puVar15 = puVar1 + 0x20;
          std::
          __insertion_sort<embree::sse2::BVHBuilderMorton::BuildPrim*,__gnu_cxx::__ops::_Iter_less_iter>
                    (puVar1,puVar15);
          for (; puVar8 != puVar15; puVar15 = puVar15 + 2) {
            while( true ) {
              uVar4 = *(undefined8 *)puVar15;
              uVar20 = *puVar15;
              puVar1 = puVar15 + -2;
              if (puVar15[-2] <= uVar20) break;
              do {
                puVar11 = puVar1;
                *(undefined8 *)(puVar11 + 2) = *(undefined8 *)puVar11;
                puVar1 = puVar11 + -2;
              } while (uVar20 < puVar11[-2]);
              puVar15 = puVar15 + 2;
              *(undefined8 *)puVar11 = uVar4;
              if (puVar8 == puVar15) goto LAB_0010f8d6;
            }
            *(undefined8 *)puVar15 = uVar4;
          }
          goto LAB_0010f8d6;
        }
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        std::
        __insertion_sort<embree::sse2::BVHBuilderMorton::BuildPrim*,__gnu_cxx::__ops::_Iter_less_iter>
                  (puVar1,puVar8);
        return;
      }
      goto LAB_0010fc4f;
    }
  }
  else {
    uVar25 = (uVar24 - uVar20) + 0x3ff >> 10;
    local_88._4_4_ = _LC2;
    local_88._0_4_ = _LC2;
    local_88._8_4_ = _LC2;
    local_88._12_4_ = _LC2;
    local_78._4_4_ = (float)_LC4;
    local_78._0_4_ = (float)_LC4;
    local_78._8_4_ = (float)_LC4;
    local_78._12_4_ = (float)_LC4;
    local_b8 = this;
    if (uVar25 == 1) {
      _local_98 = local_78;
      local_a8 = local_88;
      if ((ulong)uVar20 < (ulong)uVar24) {
        lVar9 = *(long *)(this + 0x58) + (ulong)uVar20 * 8;
        do {
          lVar16 = **(long **)(this + 0x48);
          puVar8 = (uint *)(lVar9 + 4);
          lVar9 = lVar9 + 8;
          puVar8 = (uint *)((ulong)*puVar8 * *(long *)(lVar16 + 0x60) + *(long *)(lVar16 + 0x58));
          lVar19 = *(long *)(lVar16 + 0x88);
          lVar16 = *(long *)(lVar16 + 0x90);
          auVar30 = *(undefined1 (*) [16])(lVar19 + (ulong)*puVar8 * lVar16);
          auVar22 = *(undefined1 (*) [16])(lVar19 + (ulong)puVar8[1] * lVar16);
          auVar36 = *(undefined1 (*) [16])(lVar19 + (ulong)puVar8[2] * lVar16);
          auVar27 = maxps(auVar30,auVar22);
          auVar22 = minps(auVar30,auVar22);
          auVar30 = maxps(auVar27,auVar36);
          auVar36 = minps(auVar22,auVar36);
          auVar22._0_4_ = auVar30._0_4_ + auVar36._0_4_;
          auVar22._4_4_ = auVar30._4_4_ + auVar36._4_4_;
          auVar22._8_4_ = auVar30._8_4_ + auVar36._8_4_;
          auVar22._12_4_ = auVar30._12_4_ + auVar36._12_4_;
          local_a8 = minps(local_a8,auVar22);
          _local_98 = maxps(_local_98,auVar22);
        } while (*(long *)(this + 0x58) + (ulong)uVar24 * 8 != lVar9);
        local_78._0_4_ = SUB164(_local_98,0) - local_a8._0_4_;
        local_78._4_4_ = SUB164(_local_98,4) - local_a8._4_4_;
        local_78._8_4_ = SUB164(_local_98,8) - local_a8._8_4_;
        local_78._12_4_ = SUB164(_local_98,0xc) - local_a8._12_4_;
        uVar10 = 0x400;
      }
      else {
        uVar10 = 0x400;
      }
    }
    else {
      parallel_reduce_internal<unsigned_int,embree::BBox<embree::Vec3fa>,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleM<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned_int>const&)const::_lambda(embree::range<unsigned_int>const&)_1_,embree::BBox<embree::Vec3fa>const(embree::BBox<embree::Vec3fa>const&,embree::BBox<embree::Vec3fa>const&)>
                ((uint)local_a8,uVar25,uVar20,uVar24,(BBox *)local_88,
                 (_lambda_embree__range<unsigned_int>_const___1_ *)&local_b8,
                 BBox<embree::Vec3fa>::merge);
      uVar24 = *(uint *)(param_1 + 4);
      uVar20 = *(uint *)param_1;
      local_78._0_4_ = (float)local_98._0_4_ - local_a8._0_4_;
      local_78._4_4_ = (float)local_98._4_4_ - local_a8._4_4_;
      local_78._8_4_ = fStack_90 - local_a8._8_4_;
      local_78._12_4_ = fStack_8c - local_a8._12_4_;
      uVar10 = (ulong)(uVar24 - uVar20);
    }
    auVar30 = local_88;
    auVar22 = rcpps(local_a8,local_78);
    fVar29 = local_78._0_4_;
    fVar31 = local_78._12_4_;
    local_b0 = 0;
    fVar26 = local_78._4_4_;
    fVar28 = local_78._8_4_;
    local_88._4_4_ = uVar20;
    local_88._0_4_ = uVar24;
    fVar32 = auVar22._0_4_;
    fVar33 = auVar22._4_4_;
    fVar34 = auVar22._8_4_;
    fVar35 = auVar22._12_4_;
    local_88._12_4_ = auVar30._12_4_;
    local_88._8_4_ = 0x400;
    local_78._8_8_ = local_58;
    local_78._0_8_ = this;
    local_48 = (uint)(((_LC10 - fVar29 * fVar32) * fVar32 + fVar32) * _LC12) &
               -(uint)(_LC8 < fVar29);
    uStack_44 = (uint)(((_LC10 - fVar26 * fVar33) * fVar33 + fVar33) * _LC12) &
                -(uint)(_LC8 < fVar26);
    uStack_40 = (uint)(((_LC10 - fVar28 * fVar34) * fVar34 + fVar34) * _LC12) &
                -(uint)(_LC8 < fVar28);
    uStack_3c = (uint)(((_LC10 - fVar31 * fVar35) * fVar35 + fVar35) * _LC12) &
                -(uint)(_LC8 < fVar31);
    local_68 = (TaskGroupContext *)&local_b0;
    local_58 = local_a8;
    lVar9 = embree::TaskScheduler::thread();
    if (lVar9 == 0) {
      this_00 = (TaskScheduler *)embree::TaskScheduler::instance();
      TaskScheduler::
      spawn_root<embree::TaskScheduler::spawn<unsigned_int,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleM<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned_int>const&)const::_lambda(embree::range<unsigned_int>const&)_2_>(unsigned_int,unsigned_int,unsigned_int,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleM<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned_int>const&)const::_lambda(embree::range<unsigned_int>const&)_2_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
                (this_00,(_lambda___1_ *)local_88,(TaskGroupContext *)&local_b0,uVar10,true);
    }
    else {
      if (0xfff < *(ulong *)(lVar9 + 0x40080)) goto LAB_0010fc6e;
      lVar16 = *(long *)(lVar9 + 0xc00c0);
      uVar13 = lVar16 + 0x30 + (ulong)(-(int)lVar16 & 0x3f);
      if (0x80000 < uVar13) goto LAB_0010fc6e;
      *(ulong *)(lVar9 + 0xc00c0) = uVar13;
      puVar3 = (undefined8 *)(lVar9 + 0x40090 + uVar13);
      *puVar3 = &PTR_execute_00117228;
      puVar3[1] = local_88._0_8_;
      puVar3[2] = local_88._8_8_;
      puVar3[3] = local_78._0_8_;
      puVar3[4] = local_78._8_8_;
      puVar3[5] = local_68;
      lVar12 = *(long *)(lVar9 + 0x40080) * 0x40;
      piVar2 = (int *)(lVar9 + 0x40 + lVar12);
      lVar19 = *(long *)(lVar9 + 0xc0100);
      *(undefined4 *)(lVar9 + 0x44 + lVar12) = 1;
      *(undefined1 *)(lVar9 + 0x48 + lVar12) = 1;
      lVar12 = lVar12 + lVar9;
      *(undefined8 **)(lVar12 + 0x50) = puVar3;
      *(long *)(lVar12 + 0x58) = lVar19;
      *(TaskGroupContext **)(lVar12 + 0x60) = (TaskGroupContext *)&local_b0;
      *(long *)(lVar12 + 0x68) = lVar16;
      *(ulong *)(lVar12 + 0x70) = uVar10;
      if (lVar19 != 0) {
        LOCK();
        *(int *)(lVar19 + 4) = *(int *)(lVar19 + 4) + 1;
        UNLOCK();
      }
      LOCK();
      if (*piVar2 == 0) {
        *piVar2 = 1;
      }
      UNLOCK();
      LOCK();
      *(long *)(lVar9 + 0x40080) = *(long *)(lVar9 + 0x40080) + 1;
      UNLOCK();
      if (*(long *)(lVar9 + 0x40080) - 1U <= *(ulong *)(lVar9 + 0x40040)) {
        LOCK();
        *(long *)(lVar9 + 0x40040) = *(long *)(lVar9 + 0x40080) + -1;
        UNLOCK();
      }
    }
    embree::TaskScheduler::wait();
    if (local_b0 != 0) {
      local_88._0_8_ = local_b0;
      std::__exception_ptr::exception_ptr::_M_addref();
      std::rethrow_exception(local_88);
LAB_0010fc6e:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    radixsort32<embree::sse2::BVHBuilderMorton::BuildPrim>
              ((BuildPrim *)(*(long *)(this + 0x58) + (ulong)*(uint *)param_1 * 8),
               (ulong)(*(int *)(param_1 + 4) - *(uint *)param_1),(uint)*(long *)(this + 0x58));
  }
LAB_0010f8d6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010fc4f:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleM<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned long, embree::range<unsigned int>
   const&, embree::FastAllocator::CachedAllocator, bool) */

undefined8 *
embree::sse2::BVHBuilderMorton::
BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleM<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>
::recurse(undefined8 *param_1,
         BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleM<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>
         *param_2,long param_3,range *param_4,char param_5,undefined8 param_6,FastAllocator *param_7
         ,MutexSys *param_8)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  MutexSys *pMVar13;
  int iVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong *puVar18;
  ulong *puVar19;
  long lVar20;
  MutexSys *pMVar21;
  uint uVar22;
  long lVar23;
  MutexSys *pMVar24;
  long in_FS_OFFSET;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  MutexSys *local_280;
  MutexSys *pMStack_260;
  long local_250;
  ulong uStack_248;
  ulong uStack_240;
  undefined1 local_238 [12];
  undefined4 uStack_22c;
  MutexSys *pMStack_228;
  BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleM<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>
  *pBStack_220;
  undefined4 uStack_218;
  undefined4 uStack_214;
  uint auStack_210 [2];
  uint auStack_208 [2];
  undefined8 uStack_200;
  int aiStack_1f8 [5];
  int iStack_1e4;
  int iStack_1e0;
  int iStack_1dc;
  int iStack_1d8;
  int iStack_1d4;
  int iStack_1d0;
  int iStack_1cc;
  ulong auStack_1c8 [2];
  undefined1 auStack_1b8 [12];
  int iStack_1ac;
  undefined1 auStack_1a8 [16];
  ulong uStack_198;
  undefined1 auStack_188 [12];
  int iStack_17c;
  undefined1 auStack_178 [16];
  ulong uStack_168;
  undefined1 auStack_158 [12];
  int iStack_14c;
  undefined1 auStack_148 [16];
  ulong uStack_138;
  undefined1 auStack_128 [12];
  int iStack_11c;
  undefined1 auStack_118 [16];
  int iStack_ec;
  long local_40;
  
  lVar23 = lRam0000000000110701;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_250 = param_3;
  if (param_7 == (FastAllocator *)0x0) {
    param_8 = *(MutexSys **)(in_FS_OFFSET + lRam0000000000110701);
    param_7 = (FastAllocator *)**(ulong **)(param_2 + 0x28);
    if (param_8 == (MutexSys *)0x0) {
      param_8 = (MutexSys *)embree::alignedMalloc(0xc0,0x40);
      embree::MutexSys::MutexSys(param_8);
      *(undefined8 *)(param_8 + 8) = 0;
      *(MutexSys **)(param_8 + 0x40) = param_8;
      *(undefined8 *)(param_8 + 0x48) = 0;
      *(undefined8 *)(param_8 + 0x50) = 0;
      *(undefined8 *)(param_8 + 0x58) = 0;
      *(undefined8 *)(param_8 + 0x60) = 0;
      *(undefined8 *)(param_8 + 0x68) = 0;
      *(undefined8 *)(param_8 + 0x70) = 0;
      *(MutexSys **)(param_8 + 0x80) = param_8;
      *(undefined8 *)(param_8 + 0x88) = 0;
      *(undefined8 *)(param_8 + 0x90) = 0;
      *(undefined8 *)(param_8 + 0x98) = 0;
      *(undefined8 *)(param_8 + 0xa0) = 0;
      *(undefined8 *)(param_8 + 0xa8) = 0;
      *(undefined8 *)(param_8 + 0xb0) = 0;
      *(MutexSys **)(in_FS_OFFSET + lVar23) = param_8;
      embree::MutexSys::lock();
      local_238._0_8_ = param_8;
      if (__MutexSys == _createMortonCodeArray<embree::TriangleMesh>) {
        std::
        vector<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>,std::allocator<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>>>
        ::
        _M_realloc_insert<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>>
                  ((vector<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>,std::allocator<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>>>
                    *)&FastAllocator::s_thread_local_allocators,__MutexSys,local_238);
        uVar8 = local_238._0_8_;
        if ((MutexSys *)local_238._0_8_ != (MutexSys *)0x0) {
          embree::MutexSys::~MutexSys((MutexSys *)local_238._0_8_);
          embree::alignedFree((void *)uVar8);
        }
      }
      else {
        *__MutexSys = param_8;
        __MutexSys = __MutexSys + 1;
      }
      embree::MutexSys::unlock();
    }
    param_8 = param_8 + 0x40;
  }
  if ((param_5 == '\0') ||
     (*(ulong *)(param_2 + 0x20) < (ulong)(uint)(*(int *)(param_4 + 4) - *(int *)param_4))) {
LAB_0010fcea:
    if (*(ulong *)(param_2 + 8) <= local_250 + 8U) goto LAB_001106b0;
  }
  else {
    if (*(code **)**(undefined8 **)(param_2 + 0x50) !=
        Scene::BuildProgressMonitorInterface::operator()) {
      (**(code **)**(undefined8 **)(param_2 + 0x50))();
      goto LAB_0010fcea;
    }
    embree::Scene::progressMonitor((double)(uint)(*(int *)(param_4 + 4) - *(int *)param_4));
    if (*(ulong *)(param_2 + 8) <= local_250 + 8U) goto LAB_001106b0;
  }
  uVar15 = *(uint *)(param_4 + 4);
  uVar9 = *(uint *)param_4;
  uVar17 = (ulong)uVar9;
  if ((ulong)(uVar15 - uVar9) <= *(ulong *)(param_2 + 0x10)) {
LAB_001106b0:
    createLargeLeaf(param_1,param_2,local_250,param_4);
LAB_0011056a:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  lVar23 = *(long *)(param_2 + 0x58);
  uVar9 = *(uint *)(lVar23 + (ulong)(uVar15 - 1) * 8) ^ *(uint *)(lVar23 + (ulong)uVar9 * 8);
  if (uVar9 == 0) {
LAB_00110a00:
    recreateMortonCodes(param_2,param_4);
    uVar15 = *(uint *)(param_4 + 4);
    lVar23 = *(long *)(param_2 + 0x58);
    uVar17 = (ulong)*(uint *)param_4;
    uVar9 = *(uint *)(lVar23 + (ulong)(uVar15 - 1) * 8) ^ *(uint *)(lVar23 + uVar17 * 8);
    if (uVar9 != 0) {
      iVar14 = 0x1f;
      if (uVar9 != 0) {
        for (; uVar9 >> iVar14 == 0; iVar14 = iVar14 + -1) {
        }
      }
      iVar14 = 0x1f - iVar14;
      if (iVar14 != 0x20) goto LAB_0010fd3d;
    }
    auStack_208[1] = *(uint *)param_4 + uVar15 >> 1;
  }
  else {
    iVar14 = 0x1f;
    if (uVar9 != 0) {
      for (; uVar9 >> iVar14 == 0; iVar14 = iVar14 + -1) {
      }
    }
    iVar14 = 0x1f - iVar14;
    if (iVar14 == 0x20) goto LAB_00110a00;
LAB_0010fd3d:
    uVar9 = (int)uVar17 + 1;
    uVar16 = uVar17;
    uVar11 = uVar15;
    while (auStack_208[1] = uVar11, uVar9 != auStack_208[1]) {
      uVar11 = (int)uVar16 + auStack_208[1] >> 1;
      if ((0x80000000U >> ((byte)iVar14 & 0x1f) & *(uint *)(lVar23 + (ulong)uVar11 * 8)) == 0) {
        uVar16 = (ulong)uVar11;
        uVar9 = uVar11 + 1;
        uVar11 = auStack_208[1];
      }
    }
  }
  auStack_208[0] = (uint)uVar17;
  puVar18 = (ulong *)0x2;
  pMVar21 = (MutexSys *)auStack_208;
  uStack_200._0_4_ = auStack_208[1];
  uStack_200._4_4_ = uVar15;
  if (2 < *(ulong *)param_2) {
    do {
      uVar9 = auStack_208[1] - (int)uVar17;
      uVar17 = *(ulong *)(param_2 + 0x10);
      if ((uVar9 <= uVar17) || (lVar20 = 0, uVar9 == 0)) {
        lVar20 = -1;
        uVar9 = 0;
      }
      uVar15 = uStack_200._4_4_ - (uint)uStack_200;
      if ((uVar17 < uVar15) && (uVar9 < uVar15)) {
        lVar20 = 1;
        uVar9 = uVar15;
        if (puVar18 != (ulong *)0x2) {
LAB_0010fe0e:
          uVar15 = aiStack_1f8[1] - aiStack_1f8[0];
          if ((uVar17 < uVar15) && (uVar9 < uVar15)) {
            lVar20 = 2;
            uVar9 = uVar15;
            if (puVar18 == (ulong *)0x3) goto LAB_0010ff30;
          }
          else if (puVar18 == (ulong *)0x3) goto LAB_0010fff8;
          uVar15 = aiStack_1f8[3] - aiStack_1f8[2];
          if ((uVar17 < uVar15) && (uVar9 < uVar15)) {
            lVar20 = 3;
            uVar9 = uVar15;
            if (puVar18 == (ulong *)0x4) goto LAB_0010ff30;
          }
          else if (puVar18 == (ulong *)0x4) goto LAB_0010fff8;
          uVar15 = iStack_1e4 - aiStack_1f8[4];
          if ((uVar17 < uVar15) && (uVar9 < uVar15)) {
            lVar20 = 4;
            uVar9 = uVar15;
            if (puVar18 == (ulong *)0x5) goto LAB_0010ff30;
          }
          else if (puVar18 == (ulong *)0x5) goto LAB_0010fff8;
          uVar15 = iStack_1dc - iStack_1e0;
          if ((uVar9 < uVar15) && (uVar17 < uVar15)) {
            lVar20 = 5;
            uVar9 = uVar15;
            if (puVar18 == (ulong *)0x6) goto LAB_0010ff30;
          }
          else if (puVar18 == (ulong *)0x6) goto LAB_0010fff8;
          uVar15 = iStack_1d4 - iStack_1d8;
          if ((uVar15 <= uVar9) || (uVar15 <= uVar17)) {
            if (puVar18 == (ulong *)&DAT_00000008) goto LAB_0010ff00;
            iVar14 = (int)lVar20;
            goto joined_r0x001105ed;
          }
          lVar20 = 6;
          uVar9 = uVar15;
          if (puVar18 == (ulong *)&DAT_00000008) {
LAB_0010ff00:
            if (((uint)(iStack_1cc - iStack_1d0) <= uVar17) ||
               ((uint)(iStack_1cc - iStack_1d0) <= uVar9)) goto LAB_0010fff8;
            lVar20 = 7;
          }
        }
      }
      else {
        if (puVar18 != (ulong *)0x2) goto LAB_0010fe0e;
LAB_0010fff8:
        iVar14 = (int)lVar20;
joined_r0x001105ed:
        if (iVar14 == -1) break;
      }
LAB_0010ff30:
      uVar9 = auStack_208[lVar20 * 2 + 1];
      uVar17 = (ulong)auStack_208[lVar20 * 2];
      uVar15 = *(uint *)(lVar23 + (ulong)(uVar9 - 1) * 8) ^ *(uint *)(lVar23 + uVar17 * 8);
      if (uVar15 == 0) {
LAB_00110608:
        recreateMortonCodes(param_2,(range *)(pMVar21 + lVar20 * 8));
        lVar23 = *(long *)(param_2 + 0x58);
        uVar9 = auStack_208[lVar20 * 2 + 1];
        uVar15 = auStack_208[lVar20 * 2];
        uVar17 = (ulong)uVar15;
        uVar11 = *(uint *)(lVar23 + (ulong)(uVar9 - 1) * 8) ^ *(uint *)(lVar23 + uVar17 * 8);
        if (uVar11 != 0) {
          iVar14 = 0x1f;
          if (uVar11 != 0) {
            for (; uVar11 >> iVar14 == 0; iVar14 = iVar14 + -1) {
            }
          }
          iVar14 = 0x1f - iVar14;
          if (iVar14 != 0x20) goto LAB_0010ff65;
        }
        uVar11 = uVar15 + uVar9;
        uVar9 = auStack_208[lVar20 * 2 + 1];
        uVar11 = uVar11 >> 1;
      }
      else {
        iVar14 = 0x1f;
        if (uVar15 != 0) {
          for (; uVar15 >> iVar14 == 0; iVar14 = iVar14 + -1) {
          }
        }
        iVar14 = 0x1f - iVar14;
        if (iVar14 == 0x20) goto LAB_00110608;
LAB_0010ff65:
        uVar15 = (uint)uVar17;
        uVar22 = uVar15 + 1;
        uVar10 = uVar9;
        while (uVar11 = uVar10, uVar22 != uVar11) {
          uVar10 = (int)uVar17 + uVar11 >> 1;
          if ((0x80000000U >> ((byte)iVar14 & 0x1f) & *(uint *)(lVar23 + (ulong)uVar10 * 8)) == 0) {
            uVar17 = (ulong)uVar10;
            uVar22 = uVar10 + 1;
            uVar10 = uVar11;
          }
        }
      }
      *(undefined8 *)(auStack_208 + lVar20 * 2) = *(undefined8 *)(auStack_210 + (long)puVar18 * 2);
      auStack_210[(long)puVar18 * 2] = uVar15;
      auStack_210[(long)puVar18 * 2 + 1] = uVar11;
      *(uint *)(pMVar21 + (long)puVar18 * 8) = uVar11;
      auStack_208[(long)puVar18 * 2 + 1] = uVar9;
      puVar18 = (ulong *)((long)puVar18 + 1);
      if (*(ulong **)param_2 <= puVar18) break;
      uVar17 = (ulong)auStack_208[0];
    } while( true );
  }
  uStack_240 = 0x80;
  pMVar13 = *(MutexSys **)param_8;
  pMVar24 = pMVar13 + 8;
  if (param_7 == *(FastAllocator **)(pMVar13 + 8)) goto LAB_001101d2;
  embree::MutexSys::lock();
  if (*(ulong *)(pMVar13 + 8) != 0) {
    LOCK();
    *(long *)(*(ulong *)(pMVar13 + 8) + 0x118) =
         *(long *)(*(ulong *)(pMVar13 + 8) + 0x118) +
         *(ulong *)(pMVar13 + 0xa8) + *(ulong *)(pMVar13 + 0x68);
    UNLOCK();
    LOCK();
    *(long *)(*(ulong *)(pMVar13 + 8) + 0x120) =
         *(long *)(*(ulong *)(pMVar13 + 8) + 0x120) +
         (((*(ulong *)(pMVar13 + 0x98) + *(ulong *)(pMVar13 + 0x58)) - *(ulong *)(pMVar13 + 0x50)) -
         *(ulong *)(pMVar13 + 0x90));
    UNLOCK();
    LOCK();
    *(long *)(*(ulong *)(pMVar13 + 8) + 0x128) =
         *(long *)(*(ulong *)(pMVar13 + 8) + 0x128) +
         *(ulong *)(pMVar13 + 0xb0) + *(ulong *)(pMVar13 + 0x70);
    UNLOCK();
  }
  *(ulong *)(pMVar13 + 0x48) = 0;
  *(ulong *)(pMVar13 + 0x58) = 0;
  *(ulong *)(pMVar13 + 0x50) = 0;
  *(ulong *)(pMVar13 + 0x68) = 0;
  *(ulong *)(pMVar13 + 0x70) = 0;
  *(ulong *)(pMVar13 + 0x60) = 0;
  if (param_7 == (FastAllocator *)0x0) goto LAB_001107b8;
  uVar17 = *(ulong *)(param_7 + 0x10);
  *(ulong *)(pMVar13 + 0x88) = 0;
  *(ulong *)(pMVar13 + 0x98) = 0;
  *(ulong *)(pMVar13 + 0x60) = uVar17;
  *(ulong *)(pMVar13 + 0x90) = 0;
  *(ulong *)(pMVar13 + 0xa8) = 0;
  *(ulong *)(pMVar13 + 0xb0) = 0;
  *(ulong *)(pMVar13 + 0xa0) = 0;
  uVar17 = *(ulong *)(param_7 + 0x10);
LAB_0011013e:
  *(ulong *)(pMVar13 + 0xa0) = uVar17;
  LOCK();
  *(FastAllocator **)pMVar24 = param_7;
  UNLOCK();
  local_238._0_8_ = pMVar13;
  embree::MutexSys::lock();
  if (*(undefined8 **)(param_7 + 0x138) == *(undefined8 **)(param_7 + 0x140)) {
    std::
    vector<embree::FastAllocator::ThreadLocal2*,std::allocator<embree::FastAllocator::ThreadLocal2*>>
    ::_M_realloc_insert<embree::FastAllocator::ThreadLocal2*const&>
              ((vector<embree::FastAllocator::ThreadLocal2*,std::allocator<embree::FastAllocator::ThreadLocal2*>>
                *)(param_7 + 0x130));
  }
  else {
    **(undefined8 **)(param_7 + 0x138) = pMVar13;
    *(long *)(param_7 + 0x138) = *(long *)(param_7 + 0x138) + 8;
  }
  embree::MutexSys::unlock();
  embree::MutexSys::unlock();
  pMStack_260 = pMVar13;
LAB_001101d2:
  local_280 = (MutexSys *)local_238;
  uVar16 = *(ulong *)(param_8 + 0x10);
  *(ulong *)(param_8 + 0x28) = *(ulong *)(param_8 + 0x28) + 0x80;
  uVar12 = (ulong)(-(int)uVar16 & 0xf);
  uVar17 = uVar16 + 0x80 + uVar12;
  *(ulong *)(param_8 + 0x10) = uVar17;
  if (*(ulong *)(param_8 + 0x18) < uVar17) {
    *(ulong *)(param_8 + 0x10) = uVar16;
    pMStack_260 = param_8;
    if (*(ulong *)(param_8 + 0x20) < 0x200) goto LAB_00110b96;
    local_238._0_8_ = *(ulong *)(param_8 + 0x20);
    pMVar13 = (MutexSys *)FastAllocator::malloc(param_7,(ulong *)local_280,0x40,true);
    *(MutexSys **)(param_8 + 8) = pMVar13;
    uVar17 = *(ulong *)(param_8 + 0x10);
    *(ulong *)(param_8 + 0x10) = 0x80;
    *(ulong *)(param_8 + 0x30) = (*(ulong *)(param_8 + 0x18) + *(ulong *)(param_8 + 0x30)) - uVar17;
    *(undefined8 *)(param_8 + 0x18) = local_238._0_8_;
    if ((ulong)local_238._0_8_ < 0x80) {
      *(ulong *)(param_8 + 0x10) = 0;
      local_238._0_8_ = *(ulong *)(param_8 + 0x20);
      pMVar13 = (MutexSys *)FastAllocator::malloc(param_7,(ulong *)local_280,0x40,false);
      *(MutexSys **)(param_8 + 8) = pMVar13;
      uVar17 = *(ulong *)(param_8 + 0x10);
      *(ulong *)(param_8 + 0x10) = 0x80;
      *(ulong *)(param_8 + 0x30) =
           (*(ulong *)(param_8 + 0x18) + *(ulong *)(param_8 + 0x30)) - uVar17;
      *(undefined8 *)(param_8 + 0x18) = local_238._0_8_;
      if ((ulong)local_238._0_8_ < 0x80) {
        pMVar13 = (MutexSys *)0x0;
        *(ulong *)(param_8 + 0x10) = 0;
      }
    }
  }
  else {
    *(ulong *)(param_8 + 0x30) = *(ulong *)(param_8 + 0x30) + uVar12;
    pMVar13 = (MutexSys *)((*(ulong *)(param_8 + 8) - 0x80) + uVar17);
  }
  do {
    uVar16 = _UNK_00117638;
    uVar7 = _UNK_0011762c;
    uVar6 = _UNK_00117628;
    uVar5 = _UNK_00117624;
    uVar4 = _LC2;
    uVar17 = CONCAT44(_UNK_00117634,_LC4);
    *(ulong *)pMVar13 = 8;
    *(ulong *)(pMVar13 + 8) = 8;
    *(ulong *)(pMVar13 + 0x10) = 8;
    *(ulong *)(pMVar13 + 0x18) = 8;
    *(undefined4 *)(pMVar13 + 0x60) = uVar4;
    *(undefined4 *)(pMVar13 + 100) = uVar5;
    *(undefined4 *)(pMVar13 + 0x68) = uVar6;
    *(undefined4 *)(pMVar13 + 0x6c) = uVar7;
    *(undefined4 *)(pMVar13 + 0x40) = uVar4;
    *(undefined4 *)(pMVar13 + 0x44) = uVar5;
    *(undefined4 *)(pMVar13 + 0x48) = uVar6;
    *(undefined4 *)(pMVar13 + 0x4c) = uVar7;
    *(undefined4 *)(pMVar13 + 0x20) = uVar4;
    *(undefined4 *)(pMVar13 + 0x24) = uVar5;
    *(undefined4 *)(pMVar13 + 0x28) = uVar6;
    *(undefined4 *)(pMVar13 + 0x2c) = uVar7;
    *(ulong *)(pMVar13 + 0x70) = uVar17;
    *(ulong *)(pMVar13 + 0x78) = uVar16;
    *(ulong *)(pMVar13 + 0x50) = uVar17;
    *(ulong *)(pMVar13 + 0x58) = uVar16;
    *(ulong *)(pMVar13 + 0x30) = uVar17;
    *(ulong *)(pMVar13 + 0x38) = uVar16;
    if (*(ulong *)(param_2 + 0x20) <
        (ulong)(uint)(*(int *)((MutexSys *)param_4 + 4) - *(int *)param_4)) {
      stack0xfffffffffffffdd0 = &local_250;
      local_238._0_8_ = auStack_1c8;
      uStack_248 = 0;
      pMStack_228 = pMVar21;
      pBStack_220 = param_2;
      TaskScheduler::
      spawn<unsigned_long,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleM<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned_long,embree::range<unsigned_int>const&,embree::FastAllocator::CachedAllocator,bool)::_lambda(embree::range<unsigned_long>const&)_1_>
                (0,(ulong)puVar18,1,(_lambda_embree__range<unsigned_long>_const___1_ *)local_280,
                 (TaskGroupContext *)&uStack_248);
      embree::TaskScheduler::wait();
      if (uStack_248 != 0) break;
    }
    else {
      pMVar24 = pMVar21 + (long)puVar18 * 8;
      puVar19 = auStack_1c8;
      do {
        param_4 = (range *)(pMVar21 + 8);
        recurse(local_280,param_2,local_250 + 1,pMVar21,0);
        *puVar19 = local_238._0_8_;
        puVar19[2] = (ulong)pMStack_228;
        puVar19[3] = (ulong)pBStack_220;
        *(undefined4 *)(puVar19 + 4) = uStack_218;
        *(undefined4 *)((long)puVar19 + 0x24) = uStack_214;
        *(uint *)(puVar19 + 5) = auStack_210[0];
        *(uint *)((long)puVar19 + 0x2c) = auStack_210[1];
        puVar19 = puVar19 + 6;
        pMVar21 = (MutexSys *)param_4;
        pMStack_260 = pMVar13;
      } while (param_4 != (range *)pMVar24);
    }
    auVar26._12_4_ = iStack_1ac;
    auVar26._0_12_ = auStack_1b8;
    auVar27._4_4_ = _LC2;
    auVar27._0_4_ = _LC2;
    auVar27._8_4_ = _LC2;
    auVar27._12_4_ = _LC2;
    *(int *)(pMVar13 + 0x20) = auStack_1b8._0_4_;
    uVar4 = _LC4;
    auVar27 = minps(auVar27,auVar26);
    *(int *)(pMVar13 + 0x60) = auStack_1b8._8_4_;
    *(int *)(pMVar13 + 0x30) = auStack_1a8._0_4_;
    auVar25._4_4_ = uVar4;
    auVar25._0_4_ = uVar4;
    auVar25._8_4_ = uVar4;
    auVar25._12_4_ = uVar4;
    *(ulong *)pMVar13 = auStack_1c8[0];
    auVar26 = maxps(auVar25,auStack_1a8);
    *(int *)(pMVar13 + 0x40) = auStack_1b8._4_4_;
    *(int *)(pMVar13 + 0x50) = auStack_1a8._4_4_;
    auVar1._12_4_ = iStack_17c;
    auVar1._0_12_ = auStack_188;
    *(int *)(pMVar13 + 0x70) = auStack_1a8._8_4_;
    _local_238 = minps(auVar27,auVar1);
    *(int *)(pMVar13 + 0x24) = auStack_188._0_4_;
    auVar26 = maxps(auVar26,auStack_178);
    *(int *)(pMVar13 + 0x34) = auStack_178._0_4_;
    *(int *)(pMVar13 + 100) = auStack_188._8_4_;
    *(ulong *)(pMVar13 + 8) = uStack_198;
    *(int *)(pMVar13 + 0x44) = auStack_188._4_4_;
    *(int *)(pMVar13 + 0x54) = auStack_178._4_4_;
    *(int *)(pMVar13 + 0x74) = auStack_178._8_4_;
    if (puVar18 == (ulong *)0x2) {
      pMVar21 = (MutexSys *)((long)iStack_17c + (long)iStack_1ac);
    }
    else {
      auVar2._12_4_ = iStack_14c;
      auVar2._0_12_ = auStack_158;
      _local_238 = minps(_local_238,auVar2);
      *(int *)(pMVar13 + 0x28) = auStack_158._0_4_;
      auVar26 = maxps(auVar26,auStack_148);
      *(int *)(pMVar13 + 0x38) = auStack_148._0_4_;
      *(int *)(pMVar13 + 0x68) = auStack_158._8_4_;
      *(ulong *)(pMVar13 + 0x10) = uStack_168;
      *(int *)(pMVar13 + 0x48) = auStack_158._4_4_;
      *(int *)(pMVar13 + 0x58) = auStack_148._4_4_;
      *(int *)(pMVar13 + 0x78) = auStack_148._8_4_;
      if (puVar18 == (ulong *)0x3) {
        pMVar21 = (MutexSys *)((long)iStack_14c + (long)iStack_17c + (long)iStack_1ac);
      }
      else {
        auVar3._12_4_ = iStack_11c;
        auVar3._0_12_ = auStack_128;
        *(int *)(pMVar13 + 0x2c) = auStack_128._0_4_;
        _local_238 = minps(_local_238,auVar3);
        auVar26 = maxps(auVar26,auStack_118);
        *(ulong *)(pMVar13 + 0x18) = uStack_138;
        *(int *)(pMVar13 + 0x3c) = auStack_118._0_4_;
        *(int *)(pMVar13 + 0x4c) = auStack_128._4_4_;
        *(int *)(pMVar13 + 0x6c) = auStack_128._8_4_;
        *(int *)(pMVar13 + 0x5c) = auStack_118._4_4_;
        *(int *)(pMVar13 + 0x7c) = auStack_118._8_4_;
        pMVar21 = (MutexSys *)
                  ((long)iStack_11c + (long)iStack_14c + (long)iStack_17c + (long)iStack_1ac);
        if (puVar18 != (ulong *)0x4) {
          pMVar21 = pMVar21 + iStack_ec;
        }
      }
    }
    if (pMVar21 < (MutexSys *)0x1000) {
LAB_00110551:
      uStack_22c = (int)pMVar21;
      auVar1 = _local_238;
      stack0xfffffffffffffdd0 = auVar1._8_8_;
      *param_1 = pMVar13;
      param_1[2] = local_238._0_8_;
      param_1[3] = stack0xfffffffffffffdd0;
      *(undefined1 (*) [16])(param_1 + 4) = auVar26;
      _local_238 = auVar1;
      goto LAB_0011056a;
    }
    if (iStack_1ac < 0x1000) {
      embree::sse2::BVHNRotate<4>::rotate(*(ulong *)pMVar13,1);
      *(ulong *)pMVar13 = *(ulong *)pMVar13 | 0x8000000000000000;
      local_280 = pMVar13;
    }
    if (iStack_17c < 0x1000) {
      embree::sse2::BVHNRotate<4>::rotate(*(ulong *)(pMVar13 + 8),1);
      *(ulong *)(pMVar13 + 8) = *(ulong *)(pMVar13 + 8) | 0x8000000000000000;
      local_280 = pMVar13;
    }
    if (puVar18 == (ulong *)0x2) goto LAB_00110551;
    if (iStack_14c < 0x1000) {
      embree::sse2::BVHNRotate<4>::rotate(*(ulong *)(pMVar13 + 0x10),1);
      *(ulong *)(pMVar13 + 0x10) = *(ulong *)(pMVar13 + 0x10) | 0x8000000000000000;
      local_280 = pMVar13;
    }
    if (puVar18 == (ulong *)0x3) goto LAB_00110551;
    if (iStack_11c < 0x1000) {
      embree::sse2::BVHNRotate<4>::rotate(*(ulong *)(pMVar13 + 0x18),1);
      *(ulong *)(pMVar13 + 0x18) = *(ulong *)(pMVar13 + 0x18) | 0x8000000000000000;
      local_280 = pMVar13;
    }
    if ((puVar18 == (ulong *)0x4) || (0xfff < iStack_ec)) goto LAB_00110551;
    embree::sse2::BVHNRotate<4>::rotate(*(ulong *)(pMVar13 + 0x20),1);
LAB_00110b96:
    pMVar13 = (MutexSys *)FastAllocator::malloc(param_7,&uStack_240,0x40,false);
    param_8 = pMStack_260;
  } while( true );
  puVar18 = &uStack_240;
  uStack_240 = uStack_248;
  std::__exception_ptr::exception_ptr::_M_addref();
  pMVar13 = (MutexSys *)std::rethrow_exception(puVar18);
LAB_001107b8:
  *(ulong *)(pMVar13 + 0x88) = 0;
  uVar17 = 0;
  *(ulong *)(pMVar13 + 0x98) = 0;
  *(ulong *)(pMVar13 + 0x90) = 0;
  *(ulong *)(pMVar13 + 0xa8) = 0;
  *(ulong *)(pMVar13 + 0xb0) = 0;
  goto LAB_0011013e;
}



/* embree::TaskScheduler::ClosureTaskFunction<embree::TaskScheduler::spawn<unsigned long,
   embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleM<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned long, embree::range<unsigned int>
   const&, embree::FastAllocator::CachedAllocator, bool)::{lambda(embree::range<unsigned long>
   const&)#1}>(unsigned long, unsigned long, unsigned long,
   embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleM<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned long, embree::range<unsigned int>
   const&, embree::FastAllocator::CachedAllocator, bool)::{lambda(embree::range<unsigned long>
   const&)#1} const&, embree::TaskScheduler::TaskGroupContext*)::{lambda()#1}>::execute() */

void __thiscall
embree::TaskScheduler::
ClosureTaskFunction<embree::TaskScheduler::spawn<unsigned_long,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleM<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned_long,embree::range<unsigned_int>const&,embree::FastAllocator::CachedAllocator,bool)::{lambda(embree::range<unsigned_long>const&)#1}>(unsigned_long,unsigned_long,unsigned_long,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleM<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned_long,embree::range<unsigned_int>const&,embree::FastAllocator::CachedAllocator,bool)::{lambda(embree::range<unsigned_long>const&)#1}const&,embree::TaskScheduler::TaskGroupContext*)::{lambda()#1}>
::execute(ClosureTaskFunction<embree::TaskScheduler::spawn<unsigned_long,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleM<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned_long,embree::range<unsigned_int>const&,embree::FastAllocator::CachedAllocator,bool)::_lambda(embree::range<unsigned_long>const&)_1_>(unsigned_long,unsigned_long,unsigned_long,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleM<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned_long,embree::range<unsigned_int>const&,embree::FastAllocator::CachedAllocator,bool)::_lambda(embree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
          *this)

{
  int *piVar1;
  ulong uVar2;
  undefined8 *puVar3;
  TaskGroupContext *pTVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong *puVar10;
  TaskScheduler *pTVar11;
  ulong uVar12;
  long in_FS_OFFSET;
  long local_b8;
  ulong uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  TaskGroupContext *local_80;
  ulong local_78;
  ulong uStack_70;
  ulong local_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  TaskGroupContext *local_40;
  long local_30;
  
  uVar12 = *(ulong *)(this + 8);
  uVar9 = *(ulong *)(this + 0x10);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(ulong *)(this + 0x18) < uVar12 - uVar9) {
    pTVar4 = *(TaskGroupContext **)(this + 0x40);
    uStack_60 = *(ulong *)(this + 0x20);
    uStack_58 = *(ulong *)(this + 0x28);
    uStack_50 = *(ulong *)(this + 0x30);
    uStack_48 = *(undefined8 *)(this + 0x38);
    uVar12 = uVar12 + uVar9 >> 1;
    local_78 = uVar12;
    uStack_70 = uVar9;
    local_68 = *(ulong *)(this + 0x18);
    local_40 = pTVar4;
    lVar7 = embree::TaskScheduler::thread();
    if (lVar7 == 0) {
      pTVar11 = (TaskScheduler *)embree::TaskScheduler::instance();
      spawn_root<embree::TaskScheduler::spawn<unsigned_long,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleM<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned_long,embree::range<unsigned_int>const&,embree::FastAllocator::CachedAllocator,bool)::_lambda(embree::range<unsigned_long>const&)_1_>(unsigned_long,unsigned_long,unsigned_long,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleM<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned_long,embree::range<unsigned_int>const&,embree::FastAllocator::CachedAllocator,bool)::_lambda(embree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
                (pTVar11,(_lambda___1_ *)&local_78,pTVar4,uVar12 - uVar9,true);
    }
    else {
      if (0xfff < *(ulong *)(lVar7 + 0x40080)) goto LAB_0011104e;
      lVar5 = *(long *)(lVar7 + 0xc00c0);
      uVar2 = lVar5 + 0x48 + (ulong)(-(int)lVar5 & 0x3f);
      if (0x80000 < uVar2) goto LAB_0011104e;
      *(ulong *)(lVar7 + 0xc00c0) = uVar2;
      puVar3 = (undefined8 *)(lVar7 + 0x40078 + uVar2);
      puVar3[1] = local_78;
      puVar3[2] = uStack_70;
      *puVar3 = &PTR_execute_001171e0;
      puVar3[3] = local_68;
      puVar3[4] = uStack_60;
      puVar3[5] = uStack_58;
      puVar3[6] = uStack_50;
      puVar3[7] = uStack_48;
      puVar3[8] = local_40;
      lVar8 = *(long *)(lVar7 + 0x40080) * 0x40;
      piVar1 = (int *)(lVar7 + 0x40 + lVar8);
      lVar6 = *(long *)(lVar7 + 0xc0100);
      *(undefined4 *)(lVar7 + 0x44 + lVar8) = 1;
      *(undefined1 *)(lVar7 + 0x48 + lVar8) = 1;
      lVar8 = lVar8 + lVar7;
      *(undefined8 **)(lVar8 + 0x50) = puVar3;
      *(long *)(lVar8 + 0x58) = lVar6;
      *(TaskGroupContext **)(lVar8 + 0x60) = pTVar4;
      *(long *)(lVar8 + 0x68) = lVar5;
      *(ulong *)(lVar8 + 0x70) = uVar12 - uVar9;
      if (lVar6 != 0) {
        LOCK();
        *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
        UNLOCK();
      }
      LOCK();
      if (*piVar1 == 0) {
        *piVar1 = 1;
      }
      UNLOCK();
      LOCK();
      *(long *)(lVar7 + 0x40080) = *(long *)(lVar7 + 0x40080) + 1;
      UNLOCK();
      if (*(long *)(lVar7 + 0x40080) - 1U <= *(ulong *)(lVar7 + 0x40040)) {
        LOCK();
        *(long *)(lVar7 + 0x40040) = *(long *)(lVar7 + 0x40080) + -1;
        UNLOCK();
      }
    }
    local_b8 = *(long *)(this + 8);
    local_a8 = *(undefined8 *)(this + 0x18);
    pTVar4 = *(TaskGroupContext **)(this + 0x40);
    uStack_a0 = *(undefined8 *)(this + 0x20);
    uStack_98 = *(undefined8 *)(this + 0x28);
    uStack_90 = *(undefined8 *)(this + 0x30);
    uStack_88 = *(undefined8 *)(this + 0x38);
    uVar9 = local_b8 - uVar12;
    uStack_b0 = uVar12;
    local_80 = pTVar4;
    lVar7 = embree::TaskScheduler::thread();
    if (lVar7 == 0) {
      pTVar11 = (TaskScheduler *)embree::TaskScheduler::instance();
      spawn_root<embree::TaskScheduler::spawn<unsigned_long,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleM<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned_long,embree::range<unsigned_int>const&,embree::FastAllocator::CachedAllocator,bool)::_lambda(embree::range<unsigned_long>const&)_1_>(unsigned_long,unsigned_long,unsigned_long,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleM<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned_long,embree::range<unsigned_int>const&,embree::FastAllocator::CachedAllocator,bool)::_lambda(embree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
                (pTVar11,(_lambda___1_ *)&local_b8,pTVar4,uVar9,true);
    }
    else {
      if (0xfff < *(ulong *)(lVar7 + 0x40080)) {
LAB_0011104e:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar5 = *(long *)(lVar7 + 0xc00c0);
      uVar12 = lVar5 + 0x48 + (ulong)(-(int)lVar5 & 0x3f);
      if (0x80000 < uVar12) goto LAB_0011104e;
      *(ulong *)(lVar7 + 0xc00c0) = uVar12;
      puVar3 = (undefined8 *)(lVar7 + 0x40078 + uVar12);
      *puVar3 = &PTR_execute_001171e0;
      puVar3[1] = local_b8;
      puVar3[2] = uStack_b0;
      puVar3[3] = local_a8;
      puVar3[4] = uStack_a0;
      puVar3[5] = uStack_98;
      puVar3[6] = uStack_90;
      puVar3[7] = uStack_88;
      puVar3[8] = local_80;
      lVar8 = *(long *)(lVar7 + 0x40080) * 0x40;
      piVar1 = (int *)(lVar7 + 0x40 + lVar8);
      lVar6 = *(long *)(lVar7 + 0xc0100);
      *(undefined4 *)(lVar7 + 0x44 + lVar8) = 1;
      *(undefined1 *)(lVar7 + 0x48 + lVar8) = 1;
      lVar8 = lVar8 + lVar7;
      *(undefined8 **)(lVar8 + 0x50) = puVar3;
      *(long *)(lVar8 + 0x58) = lVar6;
      *(TaskGroupContext **)(lVar8 + 0x60) = pTVar4;
      *(long *)(lVar8 + 0x68) = lVar5;
      *(ulong *)(lVar8 + 0x70) = uVar9;
      if (lVar6 != 0) {
        LOCK();
        *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
        UNLOCK();
      }
      LOCK();
      if (*piVar1 == 0) {
        *piVar1 = 1;
      }
      UNLOCK();
      LOCK();
      *(long *)(lVar7 + 0x40080) = *(long *)(lVar7 + 0x40080) + 1;
      UNLOCK();
      if (*(long *)(lVar7 + 0x40080) - 1U <= *(ulong *)(lVar7 + 0x40040)) {
        LOCK();
        *(long *)(lVar7 + 0x40040) = *(long *)(lVar7 + 0x40080) + -1;
        UNLOCK();
      }
    }
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      embree::TaskScheduler::wait();
      return;
    }
  }
  else {
    for (; uVar9 < uVar12; uVar9 = uVar9 + 1) {
      local_b8 = 0;
      uStack_b0 = 0;
      local_a8 = 0;
      sse2::BVHBuilderMorton::
      BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleM<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>
      ::recurse(&local_78,*(undefined8 *)(this + 0x38),**(long **)(this + 0x28) + 1,
                *(long *)(this + 0x30) + uVar9 * 8,1);
      puVar10 = (ulong *)(uVar9 * 0x30 + *(long *)(this + 0x20));
      *puVar10 = local_78;
      puVar10[2] = local_68;
      puVar10[3] = uStack_60;
      puVar10[4] = uStack_58;
      puVar10[5] = uStack_50;
    }
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__adjust_heap<embree::sse2::BVHBuilderMorton::BuildPrim*, long,
   embree::sse2::BVHBuilderMorton::BuildPrim, __gnu_cxx::__ops::_Iter_comp_iter<bool
   (*)(embree::sse2::BVHBuilderMorton::BuildPrim const&, embree::sse2::BVHBuilderMorton::BuildPrim
   const&)> >(embree::sse2::BVHBuilderMorton::BuildPrim*, long, long,
   embree::sse2::BVHBuilderMorton::BuildPrim, __gnu_cxx::__ops::_Iter_comp_iter<bool
   (*)(embree::sse2::BVHBuilderMorton::BuildPrim const&, embree::sse2::BVHBuilderMorton::BuildPrim
   const&)>) */

void std::
     __adjust_heap<embree::sse2::BVHBuilderMorton::BuildPrim*,long,embree::sse2::BVHBuilderMorton::BuildPrim,__gnu_cxx::__ops::_Iter_comp_iter<bool(*)(embree::sse2::BVHBuilderMorton::BuildPrim_const&,embree::sse2::BVHBuilderMorton::BuildPrim_const&)>>
               (long param_1,long param_2,ulong param_3,undefined8 param_4,code *param_5)

{
  undefined8 *puVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long in_FS_OFFSET;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar5 = (long)(param_3 - 1) / 2;
  lVar4 = param_2;
  local_48 = param_4;
  if (param_2 < lVar5) {
    do {
      lVar6 = (lVar4 + 1) * 2;
      lVar3 = (lVar4 + 1) * 0x10;
      puVar7 = (undefined8 *)(param_1 + lVar3);
      cVar2 = (*param_5)(puVar7,param_1 + -8 + lVar3);
      if (cVar2 == '\0') {
        *(undefined8 *)(param_1 + lVar4 * 8) = *puVar7;
        lVar4 = lVar6;
      }
      else {
        lVar6 = lVar6 + -1;
        puVar7 = (undefined8 *)(param_1 + lVar6 * 8);
        *(undefined8 *)(param_1 + lVar4 * 8) = *puVar7;
        lVar4 = lVar6;
      }
    } while (lVar4 < lVar5);
    if ((param_3 & 1) == 0) goto LAB_00111628;
  }
  else {
    puVar7 = (undefined8 *)(param_1 + param_2 * 8);
    if ((param_3 & 1) != 0) goto LAB_001115df;
LAB_00111628:
    if ((long)(param_3 - 2) / 2 == lVar4) {
      lVar5 = lVar4 * 2;
      lVar4 = lVar5 + 1;
      *puVar7 = *(undefined8 *)(param_1 + -8 + (lVar5 + 2) * 8);
      puVar7 = (undefined8 *)(param_1 + lVar4 * 8);
    }
  }
  lVar5 = (lVar4 + -1) - (lVar4 + -1 >> 0x3f);
  if (param_2 < lVar4) {
    do {
      lVar6 = lVar5 >> 1;
      puVar1 = (undefined8 *)(param_1 + lVar6 * 8);
      puVar7 = (undefined8 *)(param_1 + lVar4 * 8);
      cVar2 = (*param_5)(puVar1,&local_48);
      if (cVar2 == '\0') break;
      *puVar7 = *puVar1;
      lVar5 = (lVar6 + -1) - (lVar6 + -1 >> 0x3f);
      lVar4 = lVar6;
      puVar7 = puVar1;
    } while (param_2 < lVar6);
  }
LAB_001115df:
  *puVar7 = local_48;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__introsort_loop<embree::sse2::BVHBuilderMorton::BuildPrim*, long,
   __gnu_cxx::__ops::_Iter_comp_iter<bool (*)(embree::sse2::BVHBuilderMorton::BuildPrim const&,
   embree::sse2::BVHBuilderMorton::BuildPrim const&)> >(embree::sse2::BVHBuilderMorton::BuildPrim*,
   embree::sse2::BVHBuilderMorton::BuildPrim*, long, __gnu_cxx::__ops::_Iter_comp_iter<bool
   (*)(embree::sse2::BVHBuilderMorton::BuildPrim const&, embree::sse2::BVHBuilderMorton::BuildPrim
   const&)>) */

void std::
     __introsort_loop<embree::sse2::BVHBuilderMorton::BuildPrim*,long,__gnu_cxx::__ops::_Iter_comp_iter<bool(*)(embree::sse2::BVHBuilderMorton::BuildPrim_const&,embree::sse2::BVHBuilderMorton::BuildPrim_const&)>>
               (undefined8 *param_1,undefined8 *param_2,long param_3,code *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  char cVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  
  lVar6 = (long)param_2 - (long)param_1;
  if (lVar6 < 0x81) {
    return;
  }
  if (param_3 != 0) {
    puVar3 = param_1 + 1;
    puVar9 = param_2;
    do {
      puVar1 = puVar9 + -1;
      param_3 = param_3 + -1;
      puVar2 = param_1 + (lVar6 >> 4);
      cVar5 = (*param_4)(puVar3,puVar2);
      param_2 = puVar3;
      puVar8 = puVar9;
      if (cVar5 == '\0') {
        cVar5 = (*param_4)(puVar3,puVar1);
        if (cVar5 == '\0') {
          cVar5 = (*param_4)(puVar2,puVar1);
          uVar7 = *param_1;
          if (cVar5 != '\0') goto LAB_001117ce;
          *param_1 = *puVar2;
          *puVar2 = uVar7;
        }
        else {
          uVar7 = *param_1;
LAB_001117a8:
          uVar4 = param_1[1];
          param_1[1] = uVar7;
          *param_1 = uVar4;
        }
      }
      else {
        cVar5 = (*param_4)(puVar2);
        if (cVar5 == '\0') {
          cVar5 = (*param_4)(puVar3,puVar1);
          uVar7 = *param_1;
          if (cVar5 == '\0') goto LAB_001117a8;
LAB_001117ce:
          *param_1 = puVar9[-1];
          puVar9[-1] = uVar7;
        }
        else {
          uVar7 = *param_1;
          *param_1 = *puVar2;
          *puVar2 = uVar7;
        }
      }
      while( true ) {
        while (cVar5 = (*param_4)(param_2,param_1), cVar5 != '\0') {
          param_2 = param_2 + 1;
        }
        do {
          puVar8 = puVar8 + -1;
          cVar5 = (*param_4)(param_1,puVar8);
        } while (cVar5 != '\0');
        if (puVar8 <= param_2) break;
        uVar7 = *param_2;
        *param_2 = *puVar8;
        *puVar8 = uVar7;
        param_2 = param_2 + 1;
      }
      __introsort_loop<embree::sse2::BVHBuilderMorton::BuildPrim*,long,__gnu_cxx::__ops::_Iter_comp_iter<bool(*)(embree::sse2::BVHBuilderMorton::BuildPrim_const&,embree::sse2::BVHBuilderMorton::BuildPrim_const&)>>
                (param_2,puVar9,param_3,param_4);
      lVar6 = (long)param_2 - (long)param_1;
      if (lVar6 < 0x81) {
        return;
      }
      puVar9 = param_2;
    } while (param_3 != 0);
  }
  for (lVar10 = (lVar6 >> 3) + -2 >> 1;
      __adjust_heap<embree::sse2::BVHBuilderMorton::BuildPrim*,long,embree::sse2::BVHBuilderMorton::BuildPrim,__gnu_cxx::__ops::_Iter_comp_iter<bool(*)(embree::sse2::BVHBuilderMorton::BuildPrim_const&,embree::sse2::BVHBuilderMorton::BuildPrim_const&)>>
                (param_1,lVar10,lVar6 >> 3,param_1[lVar10],param_4), lVar10 != 0;
      lVar10 = lVar10 + -1) {
  }
  do {
    param_2 = param_2 + -1;
    uVar7 = *param_2;
    *param_2 = *param_1;
    __adjust_heap<embree::sse2::BVHBuilderMorton::BuildPrim*,long,embree::sse2::BVHBuilderMorton::BuildPrim,__gnu_cxx::__ops::_Iter_comp_iter<bool(*)(embree::sse2::BVHBuilderMorton::BuildPrim_const&,embree::sse2::BVHBuilderMorton::BuildPrim_const&)>>
              (param_1,0,(long)param_2 - (long)param_1 >> 3,uVar7,param_4);
  } while (8 < (long)param_2 - (long)param_1);
  return;
}



/* WARNING: Removing unreachable block (ram,0x00111c45) */
/* void embree::TaskScheduler::spawn_root<embree::TaskScheduler::spawn<unsigned long,
   embree::parallel_for<unsigned long,
   embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim, unsigned
   int>::tbbRadixIteration(unsigned int, bool, embree::sse2::BVHBuilderMorton::BuildPrim const*,
   embree::sse2::BVHBuilderMorton::BuildPrim*, unsigned long)::{lambda(unsigned long)#1}>(unsigned
   long, embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim, unsigned
   int>::tbbRadixIteration(unsigned int, bool, embree::sse2::BVHBuilderMorton::BuildPrim const*,
   embree::sse2::BVHBuilderMorton::BuildPrim*, unsigned long)::{lambda(unsigned long)#1}
   const&)::{lambda(embree::range<unsigned long> const&)#1}>(unsigned long, unsigned long, unsigned
   long, embree::parallel_for<unsigned long,
   embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim, unsigned
   int>::tbbRadixIteration(unsigned int, bool, embree::sse2::BVHBuilderMorton::BuildPrim const*,
   embree::sse2::BVHBuilderMorton::BuildPrim*, unsigned long)::{lambda(unsigned long)#1}>(unsigned
   long, embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim, unsigned
   int>::tbbRadixIteration(unsigned int, bool, embree::sse2::BVHBuilderMorton::BuildPrim const*,
   embree::sse2::BVHBuilderMorton::BuildPrim*, unsigned long)::{lambda(unsigned long)#1}
   const&)::{lambda(embree::range<unsigned long> const&)#1} const&,
   embree::TaskScheduler::TaskGroupContext*)::{lambda()#1}>(embree::TaskScheduler::spawn<unsigned
   long, embree::parallel_for<unsigned long,
   embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim, unsigned
   int>::tbbRadixIteration(unsigned int, bool, embree::sse2::BVHBuilderMorton::BuildPrim const*,
   embree::sse2::BVHBuilderMorton::BuildPrim*, unsigned long)::{lambda(unsigned long)#1}>(unsigned
   long, embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim, unsigned
   int>::tbbRadixIteration(unsigned int, bool, embree::sse2::BVHBuilderMorton::BuildPrim const*,
   embree::sse2::BVHBuilderMorton::BuildPrim*, unsigned long)::{lambda(unsigned long)#1}
   const&)::{lambda(embree::range<unsigned long> const&)#1}>(unsigned long, unsigned long, unsigned
   long, embree::parallel_for<unsigned long,
   embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim, unsigned
   int>::tbbRadixIteration(unsigned int, bool, embree::sse2::BVHBuilderMorton::BuildPrim const*,
   embree::sse2::BVHBuilderMorton::BuildPrim*, unsigned long)::{lambda(unsigned long)#1}>(unsigned
   long, embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim, unsigned
   int>::tbbRadixIteration(unsigned int, bool, embree::sse2::BVHBuilderMorton::BuildPrim const*,
   embree::sse2::BVHBuilderMorton::BuildPrim*, unsigned long)::{lambda(unsigned long)#1}
   const&)::{lambda(embree::range<unsigned long> const&)#1} const&,
   embree::TaskScheduler::TaskGroupContext*)::{lambda()#1} const&,
   embree::TaskScheduler::TaskGroupContext*, unsigned long, bool) */

void __thiscall
embree::TaskScheduler::
spawn_root<embree::TaskScheduler::spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::_lambda(unsigned_long)_1_>(unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_>(unsigned_long,unsigned_long,unsigned_long,embree::parallel_for<unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::_lambda(unsigned_long)_1_>(unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
          (TaskScheduler *this,_lambda___1_ *param_1,TaskGroupContext *param_2,ulong param_3,
          bool param_4)

{
  TaskScheduler *pTVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  char cVar12;
  long lVar13;
  Thread *pTVar14;
  Thread *pTVar15;
  Thread *pTVar16;
  long lVar17;
  Thread *pTVar18;
  long in_FS_OFFSET;
  Thread *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_4) {
    embree::TaskScheduler::startThreads();
  }
  lVar13 = embree::TaskScheduler::allocThreadIndex();
  pTVar14 = (Thread *)embree::alignedMalloc(0xc0140,0x40);
  if (this != (TaskScheduler *)0x0) {
    if (*(code **)(*(long *)this + 0x10) == RefCount::refInc) {
      LOCK();
      *(long *)(this + 8) = *(long *)(this + 8) + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*(long *)this + 0x10))(this);
    }
  }
  *(long *)pTVar14 = lVar13;
  pTVar18 = pTVar14 + 0x40;
  pTVar16 = pTVar18;
  do {
    *(undefined4 *)pTVar16 = 0;
    pTVar15 = pTVar16 + 0x80;
    *(undefined4 *)(pTVar16 + 0x40) = 0;
    pTVar16 = pTVar15;
  } while (pTVar14 + 0x40040 != pTVar15);
  *(undefined8 *)(pTVar14 + 0x40040) = 0;
  *(undefined8 *)(pTVar14 + 0x40080) = 0;
  *(undefined8 *)(pTVar14 + 0xc00c0) = 0;
  *(undefined8 *)(pTVar14 + 0xc0100) = 0;
  *(TaskScheduler **)(pTVar14 + 0xc0108) = this;
  if (this != (TaskScheduler *)0x0) {
    if (*(code **)(*(long *)this + 0x10) == RefCount::refInc) {
      LOCK();
      *(long *)(this + 8) = *(long *)(this + 8) + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*(long *)this + 0x10))(this);
    }
    if (*(code **)(*(long *)this + 0x18) == RefCount::refDec) {
      LOCK();
      pTVar1 = this + 8;
      *(long *)pTVar1 = *(long *)pTVar1 + -1;
      UNLOCK();
      if (*(long *)pTVar1 == 0) {
        (**(code **)(*(long *)this + 8))(this);
      }
    }
    else {
      (**(code **)(*(long *)this + 0x18))(this);
    }
  }
  LOCK();
  *(Thread **)(*(long *)(this + 0x10) + lVar13 * 8) = pTVar14;
  UNLOCK();
  local_48 = pTVar14;
  pTVar16 = (Thread *)embree::TaskScheduler::swapThread(pTVar14);
  if (*(ulong *)(pTVar14 + 0x40080) < 0x1000) {
    lVar4 = *(long *)(pTVar14 + 0xc00c0);
    uVar3 = lVar4 + 0x30 + (ulong)(-(int)lVar4 & 0x3f);
    if (uVar3 < 0x80001) {
      *(ulong *)(pTVar14 + 0xc00c0) = uVar3;
      pTVar15 = pTVar14 + uVar3 + 0x40090;
      uVar8 = *(undefined8 *)param_1;
      uVar9 = *(undefined8 *)(param_1 + 8);
      *(undefined ***)pTVar15 = &PTR_execute_00117288;
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      uVar10 = *(undefined8 *)(param_1 + 0x10);
      uVar11 = *(undefined8 *)(param_1 + 0x18);
      *(undefined8 *)(pTVar15 + 8) = uVar8;
      *(undefined8 *)(pTVar15 + 0x10) = uVar9;
      *(undefined8 *)(pTVar15 + 0x28) = uVar5;
      *(undefined8 *)(pTVar15 + 0x18) = uVar10;
      *(undefined8 *)(pTVar15 + 0x20) = uVar11;
      lVar17 = *(long *)(pTVar14 + 0x40080) * 0x40;
      lVar6 = *(long *)(pTVar14 + 0xc0100);
      pTVar14[lVar17 + 0x48] = (Thread)0x1;
      *(undefined4 *)(pTVar14 + lVar17 + 0x44) = 1;
      *(Thread **)(pTVar14 + lVar17 + 0x50) = pTVar15;
      *(long *)(pTVar14 + lVar17 + 0x58) = lVar6;
      *(TaskGroupContext **)(pTVar14 + lVar17 + 0x60) = param_2;
      *(long *)(pTVar14 + lVar17 + 0x68) = lVar4;
      *(ulong *)(pTVar14 + lVar17 + 0x70) = param_3;
      if (lVar6 != 0) {
        LOCK();
        *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
        UNLOCK();
      }
      LOCK();
      if (*(int *)(pTVar18 + lVar17) == 0) {
        *(undefined4 *)(pTVar18 + lVar17) = 1;
      }
      UNLOCK();
      LOCK();
      *(long *)(pTVar14 + 0x40080) = *(long *)(pTVar14 + 0x40080) + 1;
      UNLOCK();
      if (*(long *)(pTVar14 + 0x40080) - 1U <= *(ulong *)(pTVar14 + 0x40040)) {
        LOCK();
        *(long *)(pTVar14 + 0x40040) = *(long *)(pTVar14 + 0x40080) + -1;
        UNLOCK();
      }
      embree::MutexSys::lock();
      LOCK();
      *(long *)(this + 0x30) = *(long *)(this + 0x30) + 1;
      UNLOCK();
      LOCK();
      this[0x38] = (TaskScheduler)0x1;
      UNLOCK();
      embree::ConditionSys::notify_all();
      embree::MutexSys::unlock();
      if (param_4) {
        local_48 = (Thread *)this;
        if (this != (TaskScheduler *)0x0) {
          if (*(code **)(*(long *)this + 0x10) == RefCount::refInc) {
            LOCK();
            *(long *)(this + 8) = *(long *)(this + 8) + 1;
            UNLOCK();
          }
          else {
            (**(code **)(*(long *)this + 0x10))(this);
          }
        }
        embree::TaskScheduler::addScheduler((Ref *)&local_48);
        if (local_48 != (Thread *)0x0) {
          if (*(code **)(*(long *)local_48 + 0x18) == RefCount::refDec) {
            LOCK();
            pTVar15 = local_48 + 8;
            *(long *)pTVar15 = *(long *)pTVar15 + -1;
            UNLOCK();
            if (*(long *)pTVar15 == 0) {
              (**(code **)(*(long *)local_48 + 8))();
            }
          }
          else {
            (**(code **)(*(long *)local_48 + 0x18))();
          }
        }
      }
      do {
        cVar12 = embree::TaskScheduler::TaskQueue::execute_local(pTVar18,(Task *)pTVar14);
      } while (cVar12 != '\0');
      LOCK();
      *(long *)(this + 0x30) = *(long *)(this + 0x30) + -1;
      UNLOCK();
      if (param_4) {
        local_48 = (Thread *)this;
        if (this != (TaskScheduler *)0x0) {
          if (*(code **)(*(long *)this + 0x10) == RefCount::refInc) {
            LOCK();
            *(long *)(this + 8) = *(long *)(this + 8) + 1;
            UNLOCK();
          }
          else {
            (**(code **)(*(long *)this + 0x10))(this);
          }
        }
        embree::TaskScheduler::removeScheduler((Ref *)&local_48);
        if (local_48 != (Thread *)0x0) {
          if (*(code **)(*(long *)local_48 + 0x18) == RefCount::refDec) {
            LOCK();
            pTVar1 = (TaskScheduler *)(local_48 + 8);
            *(long *)pTVar1 = *(long *)pTVar1 + -1;
            UNLOCK();
            if (*(long *)pTVar1 == 0) {
              (**(code **)(*(long *)local_48 + 8))();
            }
          }
          else {
            (**(code **)(*(long *)local_48 + 0x18))();
          }
        }
      }
      local_48 = (Thread *)0x0;
      LOCK();
      *(undefined8 *)(lVar13 * 8 + *(long *)(this + 0x10)) = 0;
      UNLOCK();
      embree::TaskScheduler::swapThread(pTVar16);
      pTVar18 = *(Thread **)param_2;
      if (pTVar18 != (Thread *)0x0) {
        local_48 = pTVar18;
        std::__exception_ptr::exception_ptr::_M_addref();
        pTVar18 = local_48;
      }
      LOCK();
      *(long *)(this + 0x28) = *(long *)(this + 0x28) + -1;
      UNLOCK();
      while (*(long *)(this + 0x28) != 0) {
        embree::yield();
      }
      local_48 = *(Thread **)param_2;
      *(undefined8 *)param_2 = 0;
      if (local_48 != (Thread *)0x0) {
        std::__exception_ptr::exception_ptr::_M_release();
      }
      if (pTVar18 == (Thread *)0x0) {
        if (pTVar14 == (Thread *)0x0) {
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            return;
          }
        }
        else {
          plVar7 = *(long **)(pTVar14 + 0xc0108);
          if (plVar7 != (long *)0x0) {
            if (*(code **)(*plVar7 + 0x18) == RefCount::refDec) {
              LOCK();
              plVar2 = plVar7 + 1;
              *plVar2 = *plVar2 + -1;
              UNLOCK();
              if (*plVar2 == 0) {
                (**(code **)(*plVar7 + 8))();
              }
            }
            else {
              (**(code **)(*plVar7 + 0x18))();
            }
          }
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            embree::alignedFree(pTVar14);
            return;
          }
        }
      }
      else {
        local_48 = pTVar18;
        std::__exception_ptr::exception_ptr::_M_addref();
        std::rethrow_exception(&local_48);
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



/* void embree::TaskScheduler::spawn<unsigned long, embree::parallel_for<unsigned long,
   embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim, unsigned
   int>::tbbRadixIteration(unsigned int, bool, embree::sse2::BVHBuilderMorton::BuildPrim const*,
   embree::sse2::BVHBuilderMorton::BuildPrim*, unsigned long)::{lambda(unsigned long)#1}>(unsigned
   long, embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim, unsigned
   int>::tbbRadixIteration(unsigned int, bool, embree::sse2::BVHBuilderMorton::BuildPrim const*,
   embree::sse2::BVHBuilderMorton::BuildPrim*, unsigned long)::{lambda(unsigned long)#1}
   const&)::{lambda(embree::range<unsigned long> const&)#1}>(unsigned long, unsigned long, unsigned
   long, embree::parallel_for<unsigned long,
   embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim, unsigned
   int>::tbbRadixIteration(unsigned int, bool, embree::sse2::BVHBuilderMorton::BuildPrim const*,
   embree::sse2::BVHBuilderMorton::BuildPrim*, unsigned long)::{lambda(unsigned long)#1}>(unsigned
   long, embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim, unsigned
   int>::tbbRadixIteration(unsigned int, bool, embree::sse2::BVHBuilderMorton::BuildPrim const*,
   embree::sse2::BVHBuilderMorton::BuildPrim*, unsigned long)::{lambda(unsigned long)#1}
   const&)::{lambda(embree::range<unsigned long> const&)#1} const&,
   embree::TaskScheduler::TaskGroupContext*) [clone .isra.0] */

void embree::TaskScheduler::
     spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::_lambda(unsigned_long)_1_>(unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_>
               (ulong param_1,ulong param_2,ulong param_3,
               _lambda_embree__range<unsigned_long>_const___1_ *param_4,TaskGroupContext *param_5)

{
  int *piVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  TaskScheduler *this;
  long in_FS_OFFSET;
  ulong local_48;
  ulong uStack_40;
  ulong local_38;
  _lambda_embree__range<unsigned_long>_const___1_ *p_Stack_30;
  TaskGroupContext *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = param_2;
  uStack_40 = param_1;
  local_38 = param_3;
  p_Stack_30 = param_4;
  local_28 = param_5;
  lVar6 = embree::TaskScheduler::thread();
  if (lVar6 == 0) {
    this = (TaskScheduler *)embree::TaskScheduler::instance();
    spawn_root<embree::TaskScheduler::spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::_lambda(unsigned_long)_1_>(unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_>(unsigned_long,unsigned_long,unsigned_long,embree::parallel_for<unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::_lambda(unsigned_long)_1_>(unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
              (this,(_lambda___1_ *)&local_48,param_5,param_2 - param_1,true);
LAB_00111edc:
    if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  if (*(ulong *)(lVar6 + 0x40080) < 0x1000) {
    lVar4 = *(long *)(lVar6 + 0xc00c0);
    uVar2 = lVar4 + 0x30 + (ulong)(-(int)lVar4 & 0x3f);
    if (uVar2 < 0x80001) {
      *(ulong *)(lVar6 + 0xc00c0) = uVar2;
      puVar3 = (undefined8 *)(lVar6 + 0x40090 + uVar2);
      *puVar3 = &PTR_execute_00117288;
      puVar3[1] = local_48;
      puVar3[2] = uStack_40;
      puVar3[5] = local_28;
      puVar3[3] = local_38;
      puVar3[4] = p_Stack_30;
      lVar7 = *(long *)(lVar6 + 0x40080) * 0x40;
      piVar1 = (int *)(lVar6 + 0x40 + lVar7);
      lVar5 = *(long *)(lVar6 + 0xc0100);
      *(undefined4 *)(lVar6 + 0x44 + lVar7) = 1;
      *(undefined1 *)(lVar6 + 0x48 + lVar7) = 1;
      lVar7 = lVar7 + lVar6;
      *(undefined8 **)(lVar7 + 0x50) = puVar3;
      *(long *)(lVar7 + 0x58) = lVar5;
      *(TaskGroupContext **)(lVar7 + 0x60) = param_5;
      *(long *)(lVar7 + 0x68) = lVar4;
      *(ulong *)(lVar7 + 0x70) = param_2 - param_1;
      if (lVar5 != 0) {
        LOCK();
        *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + 1;
        UNLOCK();
      }
      LOCK();
      if (*piVar1 == 0) {
        *piVar1 = 1;
      }
      UNLOCK();
      LOCK();
      *(long *)(lVar6 + 0x40080) = *(long *)(lVar6 + 0x40080) + 1;
      UNLOCK();
      if (*(long *)(lVar6 + 0x40080) - 1U <= *(ulong *)(lVar6 + 0x40040)) {
        LOCK();
        *(long *)(lVar6 + 0x40040) = *(long *)(lVar6 + 0x40080) + -1;
        UNLOCK();
      }
      goto LAB_00111edc;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::TaskScheduler::ClosureTaskFunction<embree::TaskScheduler::spawn<unsigned long,
   embree::parallel_for<unsigned long,
   embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim, unsigned
   int>::tbbRadixIteration(unsigned int, bool, embree::sse2::BVHBuilderMorton::BuildPrim const*,
   embree::sse2::BVHBuilderMorton::BuildPrim*, unsigned long)::{lambda(unsigned long)#1}>(unsigned
   long, embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim, unsigned
   int>::tbbRadixIteration(unsigned int, bool, embree::sse2::BVHBuilderMorton::BuildPrim const*,
   embree::sse2::BVHBuilderMorton::BuildPrim*, unsigned long)::{lambda(unsigned long)#1}
   const&)::{lambda(embree::range<unsigned long> const&)#1}>(unsigned long, unsigned long, unsigned
   long, embree::parallel_for<unsigned long,
   embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim, unsigned
   int>::tbbRadixIteration(unsigned int, bool, embree::sse2::BVHBuilderMorton::BuildPrim const*,
   embree::sse2::BVHBuilderMorton::BuildPrim*, unsigned long)::{lambda(unsigned long)#1}>(unsigned
   long, embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim, unsigned
   int>::tbbRadixIteration(unsigned int, bool, embree::sse2::BVHBuilderMorton::BuildPrim const*,
   embree::sse2::BVHBuilderMorton::BuildPrim*, unsigned long)::{lambda(unsigned long)#1}
   const&)::{lambda(embree::range<unsigned long> const&)#1} const&,
   embree::TaskScheduler::TaskGroupContext*)::{lambda()#1}>::execute() */

void __thiscall
embree::TaskScheduler::
ClosureTaskFunction<embree::TaskScheduler::spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::{lambda(unsigned_long)#1}>(unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::{lambda(unsigned_long)#1}const&)::{lambda(embree::range<unsigned_long>const&)#1}>(unsigned_long,unsigned_long,unsigned_long,embree::parallel_for<unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::{lambda(unsigned_long)#1}>(unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::{lambda(unsigned_long)#1}const&)::{lambda(embree::range<unsigned_long>const&)#1}const&,embree::TaskScheduler::TaskGroupContext*)::{lambda()#1}>
::execute(ClosureTaskFunction<embree::TaskScheduler::spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::_lambda(unsigned_long)_1_>(unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_>(unsigned_long,unsigned_long,unsigned_long,embree::parallel_for<unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::_lambda(unsigned_long)_1_>(unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
          *this)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  TaskGroupContext *pTVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  TaskScheduler *pTVar11;
  long lVar12;
  uint *puVar13;
  ulong uVar14;
  ulong uVar15;
  long in_FS_OFFSET;
  long local_88;
  ulong uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  TaskGroupContext *local_68;
  ulong local_58;
  long lStack_50;
  ulong local_48;
  undefined8 *puStack_40;
  TaskGroupContext *local_38;
  long local_30;
  
  lVar9 = *(long *)(this + 0x10);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  puVar4 = *(undefined8 **)(this + 0x20);
  if (*(ulong *)(this + 0x18) < (ulong)(*(long *)(this + 8) - lVar9)) {
    pTVar5 = *(TaskGroupContext **)(this + 0x28);
    uVar15 = (ulong)(*(long *)(this + 8) + lVar9) >> 1;
    local_58 = uVar15;
    lStack_50 = lVar9;
    local_48 = *(ulong *)(this + 0x18);
    puStack_40 = puVar4;
    local_38 = pTVar5;
    lVar7 = embree::TaskScheduler::thread();
    if (lVar7 == 0) {
      pTVar11 = (TaskScheduler *)embree::TaskScheduler::instance();
      spawn_root<embree::TaskScheduler::spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::_lambda(unsigned_long)_1_>(unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_>(unsigned_long,unsigned_long,unsigned_long,embree::parallel_for<unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::_lambda(unsigned_long)_1_>(unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
                (pTVar11,(_lambda___1_ *)&local_58,pTVar5,uVar15 - lVar9,true);
    }
    else {
      if (0xfff < *(ulong *)(lVar7 + 0x40080)) goto LAB_00112303;
      lVar12 = *(long *)(lVar7 + 0xc00c0);
      uVar14 = lVar12 + 0x30 + (ulong)(-(int)lVar12 & 0x3f);
      if (0x80000 < uVar14) goto LAB_00112303;
      *(ulong *)(lVar7 + 0xc00c0) = uVar14;
      puVar4 = (undefined8 *)(lVar7 + 0x40090 + uVar14);
      *puVar4 = &PTR_execute_00117288;
      puVar4[1] = local_58;
      puVar4[2] = lStack_50;
      puVar4[5] = local_38;
      puVar4[3] = local_48;
      puVar4[4] = puStack_40;
      lVar8 = *(long *)(lVar7 + 0x40080) * 0x40;
      piVar1 = (int *)(lVar7 + 0x40 + lVar8);
      lVar10 = *(long *)(lVar7 + 0xc0100);
      *(undefined4 *)(lVar7 + 0x44 + lVar8) = 1;
      *(undefined1 *)(lVar7 + 0x48 + lVar8) = 1;
      lVar8 = lVar8 + lVar7;
      *(undefined8 **)(lVar8 + 0x50) = puVar4;
      *(long *)(lVar8 + 0x58) = lVar10;
      *(TaskGroupContext **)(lVar8 + 0x60) = pTVar5;
      *(long *)(lVar8 + 0x68) = lVar12;
      *(ulong *)(lVar8 + 0x70) = uVar15 - lVar9;
      if (lVar10 != 0) {
        LOCK();
        *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
        UNLOCK();
      }
      LOCK();
      if (*piVar1 == 0) {
        *piVar1 = 1;
      }
      UNLOCK();
      LOCK();
      *(long *)(lVar7 + 0x40080) = *(long *)(lVar7 + 0x40080) + 1;
      UNLOCK();
      if (*(long *)(lVar7 + 0x40080) - 1U <= *(ulong *)(lVar7 + 0x40040)) {
        LOCK();
        *(long *)(lVar7 + 0x40040) = *(long *)(lVar7 + 0x40080) + -1;
        UNLOCK();
      }
    }
    local_78 = *(undefined8 *)(this + 0x18);
    local_88 = *(long *)(this + 8);
    pTVar5 = *(TaskGroupContext **)(this + 0x28);
    uStack_70 = *(undefined8 *)(this + 0x20);
    uVar14 = local_88 - uVar15;
    uStack_80 = uVar15;
    local_68 = pTVar5;
    lVar9 = embree::TaskScheduler::thread();
    if (lVar9 == 0) {
      pTVar11 = (TaskScheduler *)embree::TaskScheduler::instance();
      spawn_root<embree::TaskScheduler::spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::_lambda(unsigned_long)_1_>(unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_>(unsigned_long,unsigned_long,unsigned_long,embree::parallel_for<unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::_lambda(unsigned_long)_1_>(unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
                (pTVar11,(_lambda___1_ *)&local_88,pTVar5,uVar14,true);
    }
    else {
      if (0xfff < *(ulong *)(lVar9 + 0x40080)) {
LAB_00112303:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar7 = *(long *)(lVar9 + 0xc00c0);
      uVar15 = lVar7 + 0x30 + (ulong)(-(int)lVar7 & 0x3f);
      if (0x80000 < uVar15) goto LAB_00112303;
      *(ulong *)(lVar9 + 0xc00c0) = uVar15;
      puVar4 = (undefined8 *)(lVar9 + 0x40090 + uVar15);
      *puVar4 = &PTR_execute_00117288;
      puVar4[1] = local_88;
      puVar4[2] = uStack_80;
      puVar4[5] = local_68;
      puVar4[3] = local_78;
      puVar4[4] = uStack_70;
      lVar10 = *(long *)(lVar9 + 0x40080) * 0x40;
      piVar1 = (int *)(lVar9 + 0x40 + lVar10);
      lVar12 = *(long *)(lVar9 + 0xc0100);
      *(undefined4 *)(lVar9 + 0x44 + lVar10) = 1;
      *(undefined1 *)(lVar9 + 0x48 + lVar10) = 1;
      lVar10 = lVar10 + lVar9;
      *(undefined8 **)(lVar10 + 0x50) = puVar4;
      *(long *)(lVar10 + 0x58) = lVar12;
      *(TaskGroupContext **)(lVar10 + 0x60) = pTVar5;
      *(long *)(lVar10 + 0x68) = lVar7;
      *(ulong *)(lVar10 + 0x70) = uVar14;
      if (lVar12 != 0) {
        LOCK();
        *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + 1;
        UNLOCK();
      }
      LOCK();
      if (*piVar1 == 0) {
        *piVar1 = 1;
      }
      UNLOCK();
      LOCK();
      *(long *)(lVar9 + 0x40080) = *(long *)(lVar9 + 0x40080) + 1;
      UNLOCK();
      if (*(long *)(lVar9 + 0x40080) - 1U <= *(ulong *)(lVar9 + 0x40040)) {
        LOCK();
        *(long *)(lVar9 + 0x40040) = *(long *)(lVar9 + 0x40080) + -1;
        UNLOCK();
      }
    }
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      embree::TaskScheduler::wait();
      return;
    }
  }
  else {
    plVar6 = (long *)puVar4[4];
    uVar14 = lVar9 * plVar6[3];
    lVar7 = *(long *)puVar4[1];
    uVar2 = *(undefined4 *)*puVar4;
    uVar15 = uVar14 / *(ulong *)puVar4[3];
    uVar14 = (plVar6[3] + uVar14) / *(ulong *)puVar4[3];
    lVar12 = 0;
    do {
      lVar10 = lVar12 * 4;
      lVar12 = lVar12 + 1;
      *(undefined4 *)(lVar10 + *plVar6 + lVar9 * 0x400) = 0;
    } while (lVar12 != 0x100);
    lVar12 = *plVar6;
    if (uVar15 < uVar14) {
      puVar13 = (uint *)(lVar7 + uVar15 * 8);
      do {
        uVar3 = *puVar13;
        puVar13 = puVar13 + 2;
        piVar1 = (int *)(lVar12 + lVar9 * 0x400 + (ulong)(byte)(uVar3 >> ((byte)uVar2 & 0x3f)) * 4);
        *piVar1 = *piVar1 + 1;
      } while ((uint *)(lVar7 + uVar14 * 8) != puVar13);
    }
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x001126e5) */
/* void embree::TaskScheduler::spawn_root<embree::TaskScheduler::spawn<unsigned long,
   embree::parallel_for<unsigned long,
   embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim, unsigned
   int>::tbbRadixIteration(unsigned int, bool, embree::sse2::BVHBuilderMorton::BuildPrim const*,
   embree::sse2::BVHBuilderMorton::BuildPrim*, unsigned long)::{lambda(unsigned long)#2}>(unsigned
   long, embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim, unsigned
   int>::tbbRadixIteration(unsigned int, bool, embree::sse2::BVHBuilderMorton::BuildPrim const*,
   embree::sse2::BVHBuilderMorton::BuildPrim*, unsigned long)::{lambda(unsigned long)#2}
   const&)::{lambda(embree::range<unsigned long> const&)#1}>(unsigned long, unsigned long, unsigned
   long, embree::parallel_for<unsigned long,
   embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim, unsigned
   int>::tbbRadixIteration(unsigned int, bool, embree::sse2::BVHBuilderMorton::BuildPrim const*,
   embree::sse2::BVHBuilderMorton::BuildPrim*, unsigned long)::{lambda(unsigned long)#2}>(unsigned
   long, embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim, unsigned
   int>::tbbRadixIteration(unsigned int, bool, embree::sse2::BVHBuilderMorton::BuildPrim const*,
   embree::sse2::BVHBuilderMorton::BuildPrim*, unsigned long)::{lambda(unsigned long)#2}
   const&)::{lambda(embree::range<unsigned long> const&)#1} const&,
   embree::TaskScheduler::TaskGroupContext*)::{lambda()#1}>(embree::TaskScheduler::spawn<unsigned
   long, embree::parallel_for<unsigned long,
   embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim, unsigned
   int>::tbbRadixIteration(unsigned int, bool, embree::sse2::BVHBuilderMorton::BuildPrim const*,
   embree::sse2::BVHBuilderMorton::BuildPrim*, unsigned long)::{lambda(unsigned long)#2}>(unsigned
   long, embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim, unsigned
   int>::tbbRadixIteration(unsigned int, bool, embree::sse2::BVHBuilderMorton::BuildPrim const*,
   embree::sse2::BVHBuilderMorton::BuildPrim*, unsigned long)::{lambda(unsigned long)#2}
   const&)::{lambda(embree::range<unsigned long> const&)#1}>(unsigned long, unsigned long, unsigned
   long, embree::parallel_for<unsigned long,
   embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim, unsigned
   int>::tbbRadixIteration(unsigned int, bool, embree::sse2::BVHBuilderMorton::BuildPrim const*,
   embree::sse2::BVHBuilderMorton::BuildPrim*, unsigned long)::{lambda(unsigned long)#2}>(unsigned
   long, embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim, unsigned
   int>::tbbRadixIteration(unsigned int, bool, embree::sse2::BVHBuilderMorton::BuildPrim const*,
   embree::sse2::BVHBuilderMorton::BuildPrim*, unsigned long)::{lambda(unsigned long)#2}
   const&)::{lambda(embree::range<unsigned long> const&)#1} const&,
   embree::TaskScheduler::TaskGroupContext*)::{lambda()#1} const&,
   embree::TaskScheduler::TaskGroupContext*, unsigned long, bool) */

void __thiscall
embree::TaskScheduler::
spawn_root<embree::TaskScheduler::spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::_lambda(unsigned_long)_2_>(unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::_lambda(unsigned_long)_2_const&)::_lambda(embree::range<unsigned_long>const&)_1_>(unsigned_long,unsigned_long,unsigned_long,embree::parallel_for<unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::_lambda(unsigned_long)_2_>(unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::_lambda(unsigned_long)_2_const&)::_lambda(embree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
          (TaskScheduler *this,_lambda___1_ *param_1,TaskGroupContext *param_2,ulong param_3,
          bool param_4)

{
  TaskScheduler *pTVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  char cVar12;
  long lVar13;
  Thread *pTVar14;
  Thread *pTVar15;
  Thread *pTVar16;
  long lVar17;
  Thread *pTVar18;
  long in_FS_OFFSET;
  Thread *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_4) {
    embree::TaskScheduler::startThreads();
  }
  lVar13 = embree::TaskScheduler::allocThreadIndex();
  pTVar14 = (Thread *)embree::alignedMalloc(0xc0140,0x40);
  if (this != (TaskScheduler *)0x0) {
    if (*(code **)(*(long *)this + 0x10) == RefCount::refInc) {
      LOCK();
      *(long *)(this + 8) = *(long *)(this + 8) + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*(long *)this + 0x10))(this);
    }
  }
  *(long *)pTVar14 = lVar13;
  pTVar18 = pTVar14 + 0x40;
  pTVar16 = pTVar18;
  do {
    *(undefined4 *)pTVar16 = 0;
    pTVar15 = pTVar16 + 0x80;
    *(undefined4 *)(pTVar16 + 0x40) = 0;
    pTVar16 = pTVar15;
  } while (pTVar14 + 0x40040 != pTVar15);
  *(undefined8 *)(pTVar14 + 0x40040) = 0;
  *(undefined8 *)(pTVar14 + 0x40080) = 0;
  *(undefined8 *)(pTVar14 + 0xc00c0) = 0;
  *(undefined8 *)(pTVar14 + 0xc0100) = 0;
  *(TaskScheduler **)(pTVar14 + 0xc0108) = this;
  if (this != (TaskScheduler *)0x0) {
    if (*(code **)(*(long *)this + 0x10) == RefCount::refInc) {
      LOCK();
      *(long *)(this + 8) = *(long *)(this + 8) + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*(long *)this + 0x10))(this);
    }
    if (*(code **)(*(long *)this + 0x18) == RefCount::refDec) {
      LOCK();
      pTVar1 = this + 8;
      *(long *)pTVar1 = *(long *)pTVar1 + -1;
      UNLOCK();
      if (*(long *)pTVar1 == 0) {
        (**(code **)(*(long *)this + 8))(this);
      }
    }
    else {
      (**(code **)(*(long *)this + 0x18))(this);
    }
  }
  LOCK();
  *(Thread **)(*(long *)(this + 0x10) + lVar13 * 8) = pTVar14;
  UNLOCK();
  local_48 = pTVar14;
  pTVar16 = (Thread *)embree::TaskScheduler::swapThread(pTVar14);
  if (*(ulong *)(pTVar14 + 0x40080) < 0x1000) {
    lVar4 = *(long *)(pTVar14 + 0xc00c0);
    uVar3 = lVar4 + 0x30 + (ulong)(-(int)lVar4 & 0x3f);
    if (uVar3 < 0x80001) {
      *(ulong *)(pTVar14 + 0xc00c0) = uVar3;
      pTVar15 = pTVar14 + uVar3 + 0x40090;
      uVar8 = *(undefined8 *)param_1;
      uVar9 = *(undefined8 *)(param_1 + 8);
      *(undefined ***)pTVar15 = &PTR_execute_001172a0;
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      uVar10 = *(undefined8 *)(param_1 + 0x10);
      uVar11 = *(undefined8 *)(param_1 + 0x18);
      *(undefined8 *)(pTVar15 + 8) = uVar8;
      *(undefined8 *)(pTVar15 + 0x10) = uVar9;
      *(undefined8 *)(pTVar15 + 0x28) = uVar5;
      *(undefined8 *)(pTVar15 + 0x18) = uVar10;
      *(undefined8 *)(pTVar15 + 0x20) = uVar11;
      lVar17 = *(long *)(pTVar14 + 0x40080) * 0x40;
      lVar6 = *(long *)(pTVar14 + 0xc0100);
      pTVar14[lVar17 + 0x48] = (Thread)0x1;
      *(undefined4 *)(pTVar14 + lVar17 + 0x44) = 1;
      *(Thread **)(pTVar14 + lVar17 + 0x50) = pTVar15;
      *(long *)(pTVar14 + lVar17 + 0x58) = lVar6;
      *(TaskGroupContext **)(pTVar14 + lVar17 + 0x60) = param_2;
      *(long *)(pTVar14 + lVar17 + 0x68) = lVar4;
      *(ulong *)(pTVar14 + lVar17 + 0x70) = param_3;
      if (lVar6 != 0) {
        LOCK();
        *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
        UNLOCK();
      }
      LOCK();
      if (*(int *)(pTVar18 + lVar17) == 0) {
        *(undefined4 *)(pTVar18 + lVar17) = 1;
      }
      UNLOCK();
      LOCK();
      *(long *)(pTVar14 + 0x40080) = *(long *)(pTVar14 + 0x40080) + 1;
      UNLOCK();
      if (*(long *)(pTVar14 + 0x40080) - 1U <= *(ulong *)(pTVar14 + 0x40040)) {
        LOCK();
        *(long *)(pTVar14 + 0x40040) = *(long *)(pTVar14 + 0x40080) + -1;
        UNLOCK();
      }
      embree::MutexSys::lock();
      LOCK();
      *(long *)(this + 0x30) = *(long *)(this + 0x30) + 1;
      UNLOCK();
      LOCK();
      this[0x38] = (TaskScheduler)0x1;
      UNLOCK();
      embree::ConditionSys::notify_all();
      embree::MutexSys::unlock();
      if (param_4) {
        local_48 = (Thread *)this;
        if (this != (TaskScheduler *)0x0) {
          if (*(code **)(*(long *)this + 0x10) == RefCount::refInc) {
            LOCK();
            *(long *)(this + 8) = *(long *)(this + 8) + 1;
            UNLOCK();
          }
          else {
            (**(code **)(*(long *)this + 0x10))(this);
          }
        }
        embree::TaskScheduler::addScheduler((Ref *)&local_48);
        if (local_48 != (Thread *)0x0) {
          if (*(code **)(*(long *)local_48 + 0x18) == RefCount::refDec) {
            LOCK();
            pTVar15 = local_48 + 8;
            *(long *)pTVar15 = *(long *)pTVar15 + -1;
            UNLOCK();
            if (*(long *)pTVar15 == 0) {
              (**(code **)(*(long *)local_48 + 8))();
            }
          }
          else {
            (**(code **)(*(long *)local_48 + 0x18))();
          }
        }
      }
      do {
        cVar12 = embree::TaskScheduler::TaskQueue::execute_local(pTVar18,(Task *)pTVar14);
      } while (cVar12 != '\0');
      LOCK();
      *(long *)(this + 0x30) = *(long *)(this + 0x30) + -1;
      UNLOCK();
      if (param_4) {
        local_48 = (Thread *)this;
        if (this != (TaskScheduler *)0x0) {
          if (*(code **)(*(long *)this + 0x10) == RefCount::refInc) {
            LOCK();
            *(long *)(this + 8) = *(long *)(this + 8) + 1;
            UNLOCK();
          }
          else {
            (**(code **)(*(long *)this + 0x10))(this);
          }
        }
        embree::TaskScheduler::removeScheduler((Ref *)&local_48);
        if (local_48 != (Thread *)0x0) {
          if (*(code **)(*(long *)local_48 + 0x18) == RefCount::refDec) {
            LOCK();
            pTVar1 = (TaskScheduler *)(local_48 + 8);
            *(long *)pTVar1 = *(long *)pTVar1 + -1;
            UNLOCK();
            if (*(long *)pTVar1 == 0) {
              (**(code **)(*(long *)local_48 + 8))();
            }
          }
          else {
            (**(code **)(*(long *)local_48 + 0x18))();
          }
        }
      }
      local_48 = (Thread *)0x0;
      LOCK();
      *(undefined8 *)(lVar13 * 8 + *(long *)(this + 0x10)) = 0;
      UNLOCK();
      embree::TaskScheduler::swapThread(pTVar16);
      pTVar18 = *(Thread **)param_2;
      if (pTVar18 != (Thread *)0x0) {
        local_48 = pTVar18;
        std::__exception_ptr::exception_ptr::_M_addref();
        pTVar18 = local_48;
      }
      LOCK();
      *(long *)(this + 0x28) = *(long *)(this + 0x28) + -1;
      UNLOCK();
      while (*(long *)(this + 0x28) != 0) {
        embree::yield();
      }
      local_48 = *(Thread **)param_2;
      *(undefined8 *)param_2 = 0;
      if (local_48 != (Thread *)0x0) {
        std::__exception_ptr::exception_ptr::_M_release();
      }
      if (pTVar18 == (Thread *)0x0) {
        if (pTVar14 == (Thread *)0x0) {
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            return;
          }
        }
        else {
          plVar7 = *(long **)(pTVar14 + 0xc0108);
          if (plVar7 != (long *)0x0) {
            if (*(code **)(*plVar7 + 0x18) == RefCount::refDec) {
              LOCK();
              plVar2 = plVar7 + 1;
              *plVar2 = *plVar2 + -1;
              UNLOCK();
              if (*plVar2 == 0) {
                (**(code **)(*plVar7 + 8))();
              }
            }
            else {
              (**(code **)(*plVar7 + 0x18))();
            }
          }
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            embree::alignedFree(pTVar14);
            return;
          }
        }
      }
      else {
        local_48 = pTVar18;
        std::__exception_ptr::exception_ptr::_M_addref();
        std::rethrow_exception(&local_48);
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



/* void embree::TaskScheduler::spawn<unsigned long, embree::parallel_for<unsigned long,
   embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim, unsigned
   int>::tbbRadixIteration(unsigned int, bool, embree::sse2::BVHBuilderMorton::BuildPrim const*,
   embree::sse2::BVHBuilderMorton::BuildPrim*, unsigned long)::{lambda(unsigned long)#2}>(unsigned
   long, embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim, unsigned
   int>::tbbRadixIteration(unsigned int, bool, embree::sse2::BVHBuilderMorton::BuildPrim const*,
   embree::sse2::BVHBuilderMorton::BuildPrim*, unsigned long)::{lambda(unsigned long)#2}
   const&)::{lambda(embree::range<unsigned long> const&)#1}>(unsigned long, unsigned long, unsigned
   long, embree::parallel_for<unsigned long,
   embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim, unsigned
   int>::tbbRadixIteration(unsigned int, bool, embree::sse2::BVHBuilderMorton::BuildPrim const*,
   embree::sse2::BVHBuilderMorton::BuildPrim*, unsigned long)::{lambda(unsigned long)#2}>(unsigned
   long, embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim, unsigned
   int>::tbbRadixIteration(unsigned int, bool, embree::sse2::BVHBuilderMorton::BuildPrim const*,
   embree::sse2::BVHBuilderMorton::BuildPrim*, unsigned long)::{lambda(unsigned long)#2}
   const&)::{lambda(embree::range<unsigned long> const&)#1} const&,
   embree::TaskScheduler::TaskGroupContext*) [clone .isra.0] */

void embree::TaskScheduler::
     spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::_lambda(unsigned_long)_2_>(unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::_lambda(unsigned_long)_2_const&)::_lambda(embree::range<unsigned_long>const&)_1_>
               (ulong param_1,ulong param_2,ulong param_3,
               _lambda_embree__range<unsigned_long>_const___1_ *param_4,TaskGroupContext *param_5)

{
  int *piVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  TaskScheduler *this;
  long in_FS_OFFSET;
  ulong local_48;
  ulong uStack_40;
  ulong local_38;
  _lambda_embree__range<unsigned_long>_const___1_ *p_Stack_30;
  TaskGroupContext *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = param_2;
  uStack_40 = param_1;
  local_38 = param_3;
  p_Stack_30 = param_4;
  local_28 = param_5;
  lVar6 = embree::TaskScheduler::thread();
  if (lVar6 == 0) {
    this = (TaskScheduler *)embree::TaskScheduler::instance();
    spawn_root<embree::TaskScheduler::spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::_lambda(unsigned_long)_2_>(unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::_lambda(unsigned_long)_2_const&)::_lambda(embree::range<unsigned_long>const&)_1_>(unsigned_long,unsigned_long,unsigned_long,embree::parallel_for<unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::_lambda(unsigned_long)_2_>(unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::_lambda(unsigned_long)_2_const&)::_lambda(embree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
              (this,(_lambda___1_ *)&local_48,param_5,param_2 - param_1,true);
LAB_0011297c:
    if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  if (*(ulong *)(lVar6 + 0x40080) < 0x1000) {
    lVar4 = *(long *)(lVar6 + 0xc00c0);
    uVar2 = lVar4 + 0x30 + (ulong)(-(int)lVar4 & 0x3f);
    if (uVar2 < 0x80001) {
      *(ulong *)(lVar6 + 0xc00c0) = uVar2;
      puVar3 = (undefined8 *)(lVar6 + 0x40090 + uVar2);
      *puVar3 = &PTR_execute_001172a0;
      puVar3[1] = local_48;
      puVar3[2] = uStack_40;
      puVar3[5] = local_28;
      puVar3[3] = local_38;
      puVar3[4] = p_Stack_30;
      lVar7 = *(long *)(lVar6 + 0x40080) * 0x40;
      piVar1 = (int *)(lVar6 + 0x40 + lVar7);
      lVar5 = *(long *)(lVar6 + 0xc0100);
      *(undefined4 *)(lVar6 + 0x44 + lVar7) = 1;
      *(undefined1 *)(lVar6 + 0x48 + lVar7) = 1;
      lVar7 = lVar7 + lVar6;
      *(undefined8 **)(lVar7 + 0x50) = puVar3;
      *(long *)(lVar7 + 0x58) = lVar5;
      *(TaskGroupContext **)(lVar7 + 0x60) = param_5;
      *(long *)(lVar7 + 0x68) = lVar4;
      *(ulong *)(lVar7 + 0x70) = param_2 - param_1;
      if (lVar5 != 0) {
        LOCK();
        *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + 1;
        UNLOCK();
      }
      LOCK();
      if (*piVar1 == 0) {
        *piVar1 = 1;
      }
      UNLOCK();
      LOCK();
      *(long *)(lVar6 + 0x40080) = *(long *)(lVar6 + 0x40080) + 1;
      UNLOCK();
      if (*(long *)(lVar6 + 0x40080) - 1U <= *(ulong *)(lVar6 + 0x40040)) {
        LOCK();
        *(long *)(lVar6 + 0x40040) = *(long *)(lVar6 + 0x40080) + -1;
        UNLOCK();
      }
      goto LAB_0011297c;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



/* void embree::radix_sort<embree::sse2::BVHBuilderMorton::BuildPrim, unsigned
   int>(embree::sse2::BVHBuilderMorton::BuildPrim*, embree::sse2::BVHBuilderMorton::BuildPrim*,
   unsigned long, unsigned long) */

void embree::radix_sort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>
               (BuildPrim *param_1,BuildPrim *param_2,ulong param_3,ulong param_4)

{
  BuildPrim *pBVar1;
  BuildPrim *pBVar2;
  BuildPrim *pBVar3;
  undefined8 uVar4;
  bool bVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  BuildPrim *pBVar11;
  BuildPrim *pBVar12;
  BuildPrim *pBVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  long lVar16;
  BuildPrim *pBVar17;
  long in_FS_OFFSET;
  undefined4 local_b4;
  BuildPrim *local_b0;
  BuildPrim *local_a8;
  long *local_a0;
  long local_98;
  long local_90;
  void *local_88;
  BuildPrim *local_80;
  BuildPrim *local_78;
  ulong local_70;
  undefined4 *local_68;
  BuildPrim **local_60;
  BuildPrim **local_58;
  long **local_50;
  void **local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = (void *)0x0;
  local_80 = param_1;
  local_78 = param_2;
  local_70 = param_3;
  if (param_4 < param_3) {
    plVar6 = (long *)embree::TaskScheduler::threadCount();
    plVar7 = (long *)(((param_4 - 1) + local_70) / param_4);
    if (plVar7 <= plVar6) {
      plVar6 = plVar7;
    }
    plVar7 = (long *)0x40;
    if (plVar6 < (long *)0x41) {
      plVar7 = plVar6;
    }
    local_88 = (void *)embree::alignedMalloc(0x10000,0x40);
    puVar14 = &local_b4;
    local_b4 = 0;
    local_a8 = local_78;
    local_b0 = local_80;
    puVar15 = puVar14;
    if (plVar6 != (long *)0x0) {
      local_98 = 0;
      local_a0 = plVar7;
      local_68 = puVar14;
      local_60 = &local_b0;
      local_58 = &local_a8;
      local_50 = &local_a0;
      local_48 = &local_88;
      TaskScheduler::
      spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::_lambda(unsigned_long)_1_>(unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_>
                (0,(ulong)plVar7,1,(_lambda_embree__range<unsigned_long>_const___1_ *)&local_68,
                 (TaskGroupContext *)&local_98);
      embree::TaskScheduler::wait();
      if (local_98 != 0) goto LAB_00112f04;
      if (local_a0 != (long *)0x0) {
        local_68 = puVar14;
        local_60 = &local_b0;
        local_58 = &local_a8;
        local_50 = &local_a0;
        local_48 = &local_88;
        TaskScheduler::
        spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::_lambda(unsigned_long)_2_>(unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::_lambda(unsigned_long)_2_const&)::_lambda(embree::range<unsigned_long>const&)_1_>
                  (0,(ulong)local_a0,1,(_lambda_embree__range<unsigned_long>_const___1_ *)&local_68,
                   (TaskGroupContext *)&local_98);
        embree::TaskScheduler::wait();
        if (local_98 != 0) goto LAB_00112f04;
      }
    }
    local_b4 = 8;
    if (plVar6 != (long *)0x0) {
      local_98 = 0;
      local_b0 = local_78;
      local_a8 = local_80;
      local_a0 = plVar7;
      local_68 = puVar14;
      local_60 = &local_b0;
      local_58 = &local_a8;
      local_50 = &local_a0;
      local_48 = &local_88;
      TaskScheduler::
      spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::_lambda(unsigned_long)_1_>(unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_>
                (0,(ulong)plVar7,1,(_lambda_embree__range<unsigned_long>_const___1_ *)&local_68,
                 (TaskGroupContext *)&local_98);
      embree::TaskScheduler::wait();
      puVar15 = puVar14;
      if (local_98 != 0) goto LAB_00112f04;
      if (local_a0 != (long *)0x0) {
        local_68 = puVar14;
        local_60 = &local_b0;
        local_58 = &local_a8;
        local_50 = &local_a0;
        local_48 = &local_88;
        TaskScheduler::
        spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::_lambda(unsigned_long)_2_>(unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::_lambda(unsigned_long)_2_const&)::_lambda(embree::range<unsigned_long>const&)_1_>
                  (0,(ulong)local_a0,1,(_lambda_embree__range<unsigned_long>_const___1_ *)&local_68,
                   (TaskGroupContext *)&local_98);
        embree::TaskScheduler::wait();
        if (local_98 != 0) goto LAB_00112f04;
      }
    }
    local_b4 = 0x10;
    local_b0 = local_80;
    local_a8 = local_78;
    local_a0 = plVar7;
    local_68 = puVar14;
    local_60 = &local_b0;
    local_58 = &local_a8;
    local_50 = &local_a0;
    local_48 = &local_88;
    if (plVar6 != (long *)0x0) goto LAB_00112f20;
LAB_00112c53:
    local_b4 = 0x18;
    local_b0 = local_78;
    local_a8 = local_80;
    local_a0 = plVar7;
    local_68 = puVar14;
    local_60 = &local_b0;
    local_58 = &local_a8;
    local_50 = &local_a0;
    local_48 = &local_88;
    if (plVar6 != (long *)0x0) {
      local_98 = 0;
      TaskScheduler::
      spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::_lambda(unsigned_long)_1_>(unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_>
                (0,(ulong)plVar7,1,(_lambda_embree__range<unsigned_long>_const___1_ *)&local_68,
                 (TaskGroupContext *)&local_98);
      embree::TaskScheduler::wait();
      puVar15 = puVar14;
      if (local_98 == 0) {
        local_68 = puVar14;
        local_60 = &local_b0;
        local_58 = &local_a8;
        local_50 = &local_a0;
        local_48 = &local_88;
        if (local_a0 == (long *)0x0) goto LAB_00112c9a;
        TaskScheduler::
        spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::_lambda(unsigned_long)_2_>(unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::_lambda(unsigned_long)_2_const&)::_lambda(embree::range<unsigned_long>const&)_1_>
                  (0,(ulong)local_a0,1,(_lambda_embree__range<unsigned_long>_const___1_ *)&local_68,
                   (TaskGroupContext *)&local_98);
        embree::TaskScheduler::wait();
        puVar15 = puVar14;
        if (local_98 == 0) goto LAB_00112c9a;
      }
LAB_00112f04:
      do {
        do {
          plVar6 = &local_90;
          local_90 = local_98;
          std::__exception_ptr::exception_ptr::_M_addref();
          std::rethrow_exception();
          puVar14 = puVar15;
LAB_00112f20:
          local_98 = 0;
          TaskScheduler::
          spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::_lambda(unsigned_long)_1_>(unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_>
                    (0,(ulong)plVar7,1,(_lambda_embree__range<unsigned_long>_const___1_ *)&local_68,
                     (TaskGroupContext *)&local_98);
          embree::TaskScheduler::wait();
          puVar15 = puVar14;
        } while (local_98 != 0);
        if (local_a0 == (long *)0x0) break;
        local_68 = puVar14;
        local_60 = &local_b0;
        local_58 = &local_a8;
        local_50 = &local_a0;
        local_48 = &local_88;
        TaskScheduler::
        spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::_lambda(unsigned_long)_2_>(unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::_lambda(unsigned_long)_2_const&)::_lambda(embree::range<unsigned_long>const&)_1_>
                  (0,(ulong)local_a0,1,(_lambda_embree__range<unsigned_long>_const___1_ *)&local_68,
                   (TaskGroupContext *)&local_98);
        embree::TaskScheduler::wait();
      } while (local_98 != 0);
      goto LAB_00112c53;
    }
  }
  else {
    lVar8 = param_3 * 8;
    pBVar2 = param_1 + lVar8;
    if (param_1 != pBVar2) {
      uVar10 = lVar8 >> 3;
      if (uVar10 != 0) {
        lVar16 = 0x3f;
        if (uVar10 != 0) {
          for (; uVar10 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        lVar16 = (long)(int)lVar16 * 2;
        if (0x80 < lVar8) {
          pBVar11 = pBVar2;
          if (lVar16 != 0) {
            pBVar12 = param_1 + 8;
            pBVar17 = pBVar2;
            do {
              pBVar1 = pBVar17 + -8;
              lVar16 = lVar16 + -1;
              pBVar3 = param_1 + (lVar8 >> 4) * 8;
              bVar5 = ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::
                      compare<embree::sse2::BVHBuilderMorton::BuildPrim>(pBVar12,pBVar3);
              pBVar11 = pBVar12;
              pBVar13 = pBVar17;
              if (bVar5) {
                bVar5 = ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::
                        compare<embree::sse2::BVHBuilderMorton::BuildPrim>(pBVar3,pBVar1);
                if (bVar5) {
                  uVar9 = *(undefined8 *)param_1;
                  *(undefined8 *)param_1 = *(undefined8 *)pBVar3;
                  *(undefined8 *)pBVar3 = uVar9;
                }
                else {
                  bVar5 = ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>
                          ::compare<embree::sse2::BVHBuilderMorton::BuildPrim>(pBVar12,pBVar1);
                  uVar9 = *(undefined8 *)param_1;
                  if (!bVar5) goto LAB_00112d12;
LAB_00112d38:
                  *(undefined8 *)param_1 = *(undefined8 *)(pBVar17 + -8);
                  *(undefined8 *)(pBVar17 + -8) = uVar9;
                }
              }
              else {
                bVar5 = ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::
                        compare<embree::sse2::BVHBuilderMorton::BuildPrim>(pBVar12,pBVar1);
                if (bVar5) {
                  uVar9 = *(undefined8 *)param_1;
LAB_00112d12:
                  uVar4 = *(undefined8 *)(param_1 + 8);
                  *(undefined8 *)(param_1 + 8) = uVar9;
                  *(undefined8 *)param_1 = uVar4;
                }
                else {
                  bVar5 = ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>
                          ::compare<embree::sse2::BVHBuilderMorton::BuildPrim>(pBVar3,pBVar1);
                  uVar9 = *(undefined8 *)param_1;
                  if (bVar5) goto LAB_00112d38;
                  *(undefined8 *)param_1 = *(undefined8 *)pBVar3;
                  *(undefined8 *)pBVar3 = uVar9;
                }
              }
              while( true ) {
                while (bVar5 = ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>
                               ::compare<embree::sse2::BVHBuilderMorton::BuildPrim>(pBVar11,param_1)
                      , bVar5) {
                  pBVar11 = pBVar11 + 8;
                }
                do {
                  pBVar13 = pBVar13 + -8;
                  bVar5 = ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>
                          ::compare<embree::sse2::BVHBuilderMorton::BuildPrim>(param_1,pBVar13);
                } while (bVar5);
                if (pBVar13 <= pBVar11) break;
                uVar9 = *(undefined8 *)pBVar11;
                *(undefined8 *)pBVar11 = *(undefined8 *)pBVar13;
                *(undefined8 *)pBVar13 = uVar9;
                pBVar11 = pBVar11 + 8;
              }
              std::
              __introsort_loop<embree::sse2::BVHBuilderMorton::BuildPrim*,long,__gnu_cxx::__ops::_Iter_comp_iter<bool(*)(embree::sse2::BVHBuilderMorton::BuildPrim_const&,embree::sse2::BVHBuilderMorton::BuildPrim_const&)>>
                        (pBVar11,pBVar17,lVar16,
                         ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::
                         compare<embree::sse2::BVHBuilderMorton::BuildPrim>);
              lVar8 = (long)pBVar11 - (long)param_1;
              if (lVar8 < 0x81) goto LAB_00112dd6;
              pBVar17 = pBVar11;
            } while (lVar16 != 0);
            uVar10 = lVar8 >> 3;
          }
          for (lVar8 = (long)(uVar10 - 2) >> 1;
              std::
              __adjust_heap<embree::sse2::BVHBuilderMorton::BuildPrim*,long,embree::sse2::BVHBuilderMorton::BuildPrim,__gnu_cxx::__ops::_Iter_comp_iter<bool(*)(embree::sse2::BVHBuilderMorton::BuildPrim_const&,embree::sse2::BVHBuilderMorton::BuildPrim_const&)>>
                        (param_1,lVar8,uVar10,*(undefined8 *)(param_1 + lVar8 * 8),
                         ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::
                         compare<embree::sse2::BVHBuilderMorton::BuildPrim>), lVar8 != 0;
              lVar8 = lVar8 + -1) {
          }
          do {
            pBVar11 = pBVar11 + -8;
            uVar9 = *(undefined8 *)pBVar11;
            *(undefined8 *)pBVar11 = *(undefined8 *)param_1;
            std::
            __adjust_heap<embree::sse2::BVHBuilderMorton::BuildPrim*,long,embree::sse2::BVHBuilderMorton::BuildPrim,__gnu_cxx::__ops::_Iter_comp_iter<bool(*)(embree::sse2::BVHBuilderMorton::BuildPrim_const&,embree::sse2::BVHBuilderMorton::BuildPrim_const&)>>
                      (param_1,0,(long)pBVar11 - (long)param_1 >> 3,uVar9,
                       ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::
                       compare<embree::sse2::BVHBuilderMorton::BuildPrim>);
          } while (8 < (long)pBVar11 - (long)param_1);
LAB_00112dd6:
          pBVar11 = param_1 + 0x78;
          std::
          __insertion_sort<embree::sse2::BVHBuilderMorton::BuildPrim*,__gnu_cxx::__ops::_Iter_comp_iter<bool(*)(embree::sse2::BVHBuilderMorton::BuildPrim_const&,embree::sse2::BVHBuilderMorton::BuildPrim_const&)>>
                    (param_1,param_1 + 0x80,
                     ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::
                     compare<embree::sse2::BVHBuilderMorton::BuildPrim>);
          if (pBVar2 != param_1 + 0x80) {
            do {
              local_68 = *(undefined4 **)(pBVar11 + 8);
              pBVar12 = pBVar11;
              while (bVar5 = ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>
                             ::compare<embree::sse2::BVHBuilderMorton::BuildPrim>
                                       ((BuildPrim *)&local_68,pBVar12), bVar5) {
                *(undefined8 *)(pBVar12 + 8) = *(undefined8 *)pBVar12;
                pBVar12 = pBVar12 + -8;
              }
              pBVar11 = pBVar11 + 8;
              *(undefined4 **)(pBVar12 + 8) = local_68;
            } while (pBVar2 + -8 != pBVar11);
          }
          goto LAB_00112c9a;
        }
      }
      std::
      __insertion_sort<embree::sse2::BVHBuilderMorton::BuildPrim*,__gnu_cxx::__ops::_Iter_comp_iter<bool(*)(embree::sse2::BVHBuilderMorton::BuildPrim_const&,embree::sse2::BVHBuilderMorton::BuildPrim_const&)>>
                (param_1,pBVar2,
                 ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::
                 compare<embree::sse2::BVHBuilderMorton::BuildPrim>);
    }
  }
LAB_00112c9a:
  embree::alignedFree(local_88);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* embree::sse2::BVHNMeshBuilderMorton<4, embree::TriangleMesh, embree::TriangleM<4> >::build() */

void __thiscall
embree::sse2::BVHNMeshBuilderMorton<4,embree::TriangleMesh,embree::TriangleM<4>>::build
          (BVHNMeshBuilderMorton<4,embree::TriangleMesh,embree::TriangleM<4>> *this)

{
  long *plVar1;
  char cVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  void *pvVar6;
  long lVar7;
  ulong *puVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long *plVar16;
  ulong *puVar17;
  long in_FS_OFFSET;
  float fVar18;
  undefined1 local_149;
  long local_148;
  long local_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined **local_128;
  undefined8 local_120;
  undefined8 local_118;
  BuildPrim *local_110;
  undefined4 local_108;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_d8 [2];
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined ***local_58;
  BuildPrim *local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = *(uint *)(this + 0x74);
  if (*(uint *)(*(long *)(this + 0x18) + 0x20) == uVar3) {
    *(uint *)(this + 0x74) = uVar3;
  }
  else {
    lVar9 = *(long *)(this + 0x10);
    plVar13 = (long *)(lVar9 + 0x170);
    plVar11 = (long *)(lVar9 + 0x130);
    do {
      while (*plVar11 != 0) {
        lVar7 = *(long *)(*plVar11 + 0x18);
        *(long *)(*plVar11 + 0x18) = *plVar13;
        LOCK();
        *plVar13 = *plVar11;
        UNLOCK();
        LOCK();
        *plVar11 = lVar7;
        UNLOCK();
      }
      LOCK();
      *plVar11 = 0;
      UNLOCK();
      plVar11 = plVar11 + 1;
    } while (plVar13 != plVar11);
    plVar11 = *(long **)(lVar9 + 0x1b0);
    plVar16 = *(long **)(lVar9 + 0x1a8);
    if (plVar11 != plVar16) {
      do {
        while( true ) {
          lVar7 = *plVar16;
          if (lVar9 + 0x78 != *(long *)(lVar7 + 8)) break;
          embree::MutexSys::lock();
          if (lVar9 + 0x78 == *(long *)(lVar7 + 8)) {
            LOCK();
            plVar1 = (long *)(*(long *)(lVar7 + 8) + 0x118);
            *plVar1 = *plVar1 + *(long *)(lVar7 + 0xa8) + *(long *)(lVar7 + 0x68);
            UNLOCK();
            LOCK();
            plVar1 = (long *)(*(long *)(lVar7 + 8) + 0x120);
            *plVar1 = *plVar1 + (((*(long *)(lVar7 + 0x98) + *(long *)(lVar7 + 0x58)) -
                                 *(long *)(lVar7 + 0x50)) - *(long *)(lVar7 + 0x90));
            UNLOCK();
            LOCK();
            plVar1 = (long *)(*(long *)(lVar7 + 8) + 0x128);
            *plVar1 = *plVar1 + *(long *)(lVar7 + 0xb0) + *(long *)(lVar7 + 0x70);
            UNLOCK();
            *(undefined8 *)(lVar7 + 0x48) = 0;
            *(undefined8 *)(lVar7 + 0x58) = 0;
            *(undefined8 *)(lVar7 + 0x50) = 0;
            *(undefined8 *)(lVar7 + 0x68) = 0;
            *(undefined8 *)(lVar7 + 0x70) = 0;
            *(undefined8 *)(lVar7 + 0x60) = 0;
            *(undefined8 *)(lVar7 + 0x88) = 0;
            *(undefined8 *)(lVar7 + 0x98) = 0;
            *(undefined8 *)(lVar7 + 0x90) = 0;
            *(undefined8 *)(lVar7 + 0xa8) = 0;
            *(undefined8 *)(lVar7 + 0xb0) = 0;
            *(undefined8 *)(lVar7 + 0xa0) = 0;
            LOCK();
            *(undefined8 *)(lVar7 + 8) = 0;
            UNLOCK();
          }
          embree::MutexSys::unlock();
          plVar16 = plVar16 + 1;
          if (plVar11 == plVar16) goto LAB_001138c0;
        }
        plVar16 = plVar16 + 1;
      } while (plVar11 != plVar16);
LAB_001138c0:
      if (*(long *)(lVar9 + 0x1a8) != *(long *)(lVar9 + 0x1b0)) {
        *(long *)(lVar9 + 0x1b0) = *(long *)(lVar9 + 0x1a8);
      }
    }
    LOCK();
    *(undefined8 *)(lVar9 + 400) = 0;
    UNLOCK();
    LOCK();
    *(undefined8 *)(lVar9 + 0x198) = 0;
    UNLOCK();
    LOCK();
    *(undefined8 *)(lVar9 + 0x1a0) = 0;
    UNLOCK();
    if (*(long *)(lVar9 + 0x170) != 0) {
      puVar17 = *(ulong **)(lVar9 + 0x170);
      cVar2 = *(char *)(lVar9 + 0x180);
      plVar11 = *(long **)(lVar9 + 0x78);
      if (puVar17 != (ulong *)0x0) {
        if (plVar11 == (long *)0x0) {
          if (cVar2 == '\0') {
            do {
              puVar8 = (ulong *)puVar17[3];
              if ((int)puVar17[5] == 0) {
                embree::alignedFree(puVar17);
              }
              else if ((int)puVar17[5] == 1) {
                embree::os_free(puVar17,puVar17[2] + 0x40,*(bool *)((long)puVar17 + 0x2c));
              }
              puVar17 = puVar8;
            } while (puVar8 != (ulong *)0x0);
          }
          else {
            do {
              puVar8 = (ulong *)puVar17[3];
              if ((int)puVar17[5] == 0) {
                (**(code **)(_DAT_00000000 + 0x40))(0,puVar17);
              }
              else if ((int)puVar17[5] == 1) {
                embree::os_free(puVar17,puVar17[2] + 0x40,*(bool *)((long)puVar17 + 0x2c));
              }
              puVar17 = puVar8;
            } while (puVar8 != (ulong *)0x0);
          }
        }
        else {
          do {
            while( true ) {
              puVar8 = (ulong *)puVar17[3];
              uVar12 = *puVar17;
              if (*puVar17 < puVar17[1]) {
                uVar12 = puVar17[1];
              }
              if (puVar17[2] < uVar12) {
                uVar12 = puVar17[2];
              }
              lVar7 = puVar17[4] + 0x40 + uVar12;
              if ((int)puVar17[5] != 0) break;
              if (cVar2 == '\0') {
                embree::alignedFree(puVar17);
              }
              else {
                (**(code **)(*plVar11 + 0x40))(plVar11,puVar17);
              }
              (**(code **)(*plVar11 + 0x20))(plVar11,-lVar7,1);
LAB_0011396e:
              puVar17 = puVar8;
              if (puVar8 == (ulong *)0x0) goto LAB_001139dc;
            }
            if ((int)puVar17[5] != 1) goto LAB_0011396e;
            embree::os_free(puVar17,puVar17[2] + 0x40,*(bool *)((long)puVar17 + 0x2c));
            (**(code **)(*plVar11 + 0x20))(plVar11,-lVar7,1);
            puVar17 = puVar8;
          } while (puVar8 != (ulong *)0x0);
        }
      }
    }
LAB_001139dc:
    LOCK();
    *plVar13 = 0;
    UNLOCK();
    if (*(long *)(lVar9 + 0x178) != 0) {
      puVar17 = *(ulong **)(lVar9 + 0x178);
      cVar2 = *(char *)(lVar9 + 0x180);
      plVar13 = *(long **)(lVar9 + 0x78);
      if (puVar17 != (ulong *)0x0) {
        if (plVar13 == (long *)0x0) {
          if (cVar2 == '\0') {
            do {
              puVar8 = (ulong *)puVar17[3];
              if ((int)puVar17[5] == 0) {
                embree::alignedFree(puVar17);
              }
              else if ((int)puVar17[5] == 1) {
                embree::os_free(puVar17,puVar17[2] + 0x40,*(bool *)((long)puVar17 + 0x2c));
              }
              puVar17 = puVar8;
            } while (puVar8 != (ulong *)0x0);
          }
          else {
            do {
              puVar8 = (ulong *)puVar17[3];
              if ((int)puVar17[5] == 0) {
                (**(code **)(_DAT_00000000 + 0x40))(0,puVar17);
              }
              else if ((int)puVar17[5] == 1) {
                embree::os_free(puVar17,puVar17[2] + 0x40,*(bool *)((long)puVar17 + 0x2c));
              }
              puVar17 = puVar8;
            } while (puVar8 != (ulong *)0x0);
          }
        }
        else {
          do {
            while( true ) {
              puVar8 = (ulong *)puVar17[3];
              uVar12 = *puVar17;
              if (*puVar17 < puVar17[1]) {
                uVar12 = puVar17[1];
              }
              if (puVar17[2] < uVar12) {
                uVar12 = puVar17[2];
              }
              lVar7 = puVar17[4] + 0x40 + uVar12;
              if ((int)puVar17[5] != 0) break;
              if (cVar2 == '\0') {
                embree::alignedFree(puVar17);
              }
              else {
                (**(code **)(*plVar13 + 0x40))(plVar13,puVar17);
              }
              (**(code **)(*plVar13 + 0x20))(plVar13,-lVar7,1);
LAB_00113a5c:
              puVar17 = puVar8;
              if (puVar8 == (ulong *)0x0) goto LAB_00113ac0;
            }
            if ((int)puVar17[5] != 1) goto LAB_00113a5c;
            embree::os_free(puVar17,puVar17[2] + 0x40,*(bool *)((long)puVar17 + 0x2c));
            (**(code **)(*plVar13 + 0x20))(plVar13,-lVar7,1);
            puVar17 = puVar8;
          } while (puVar8 != (ulong *)0x0);
        }
      }
    }
LAB_00113ac0:
    LOCK();
    *(undefined8 *)(lVar9 + 0x178) = 0;
    UNLOCK();
    plVar13 = (long *)(lVar9 + 0xf0);
    do {
      LOCK();
      *plVar13 = 0;
      UNLOCK();
      LOCK();
      plVar13[8] = 0;
      UNLOCK();
      plVar13 = plVar13 + 1;
    } while (plVar13 != (long *)(lVar9 + 0x130));
    pvVar6 = *(void **)(lVar9 + 0x1e8);
    lVar7 = *(long *)(lVar9 + 0x1e0);
    if (pvVar6 != (void *)0x0) {
      if ((ulong)(lVar7 << 5) < 0x1c00000) {
        embree::alignedFree(pvVar6);
      }
      else {
        embree::os_free(pvVar6,lVar7 << 5,*(bool *)(lVar9 + 0x1d0));
      }
    }
    if (lVar7 != 0) {
      (**(code **)**(undefined8 **)(lVar9 + 0x1c8))(*(undefined8 **)(lVar9 + 0x1c8),lVar7 * -0x20,1)
      ;
    }
    *(undefined8 *)(lVar9 + 0x1e8) = 0;
    *(undefined8 *)(lVar9 + 0x1e0) = 0;
    *(undefined8 *)(lVar9 + 0x1d8) = 0;
    pvVar6 = *(void **)(this + 0x40);
    lVar9 = *(long *)(this + 0x38);
    if (pvVar6 != (void *)0x0) {
      if ((ulong)(lVar9 * 8) < 0x1c00000) {
        embree::alignedFree(pvVar6);
      }
      else {
        embree::os_free(pvVar6,lVar9 * 8,(bool)this[0x28]);
      }
    }
    if (lVar9 != 0) {
      (**(code **)**(undefined8 **)(this + 0x20))(*(undefined8 **)(this + 0x20),lVar9 * -8,1);
    }
    *(undefined8 *)(this + 0x40) = 0;
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined8 *)(this + 0x30) = 0;
    uVar3 = *(uint *)(*(long *)(this + 0x18) + 0x20);
    *(uint *)(this + 0x74) = uVar3;
  }
  uVar12 = (ulong)uVar3;
  if (uVar12 == 0) {
    local_a8 = CONCAT44(_LC2,_LC2);
    uStack_a0 = CONCAT44(_LC2,_LC2);
    local_88 = CONCAT44(_LC2,_LC2);
    uStack_80 = (long *)CONCAT44(_LC2,_LC2);
    local_98 = CONCAT44(_LC4,_LC4);
    uStack_90 = CONCAT44(_LC4,_LC4);
    local_78 = (undefined1 *)CONCAT44(_LC4,_LC4);
    uStack_70 = (long *)CONCAT44(_LC4,_LC4);
    embree::BVHN<4>::set(*(undefined8 *)(this + 0x10),8,&local_a8,0);
  }
  else {
    uVar10 = *(ulong *)(this + 0x38);
    if (uVar10 < uVar12) {
      if (uVar10 == 0) {
        uVar10 = uVar12;
        if (uVar12 < *(ulong *)(this + 0x30)) {
          *(ulong *)(this + 0x30) = uVar12;
        }
      }
      else {
        do {
          uVar10 = uVar10 * 2;
        } while (uVar10 < uVar12);
        if (uVar12 < *(ulong *)(this + 0x30)) {
          *(ulong *)(this + 0x30) = uVar12;
        }
      }
      uVar15 = uVar10 * 8;
      puVar4 = *(undefined8 **)(this + 0x40);
      (**(code **)**(undefined8 **)(this + 0x20))(*(undefined8 **)(this + 0x20),uVar15,0);
      if (uVar15 < 0x1c00000) {
        lVar9 = embree::alignedMalloc(uVar15,8);
      }
      else {
        lVar9 = embree::os_malloc(uVar15,(bool *)(this + 0x28));
      }
      *(long *)(this + 0x40) = lVar9;
      if (*(long *)(this + 0x30) != 0) {
        uVar15 = 0;
        puVar14 = puVar4;
        while( true ) {
          uVar5 = *puVar14;
          puVar14 = puVar14 + 1;
          *(undefined8 *)(lVar9 + uVar15 * 8) = uVar5;
          uVar15 = uVar15 + 1;
          if (*(ulong *)(this + 0x30) <= uVar15) break;
          lVar9 = *(long *)(this + 0x40);
        }
      }
      lVar9 = *(long *)(this + 0x38);
      if (puVar4 != (undefined8 *)0x0) {
        if ((ulong)(lVar9 * 8) < 0x1c00000) {
          embree::alignedFree(puVar4);
        }
        else {
          embree::os_free(puVar4,lVar9 * 8,(bool)this[0x28]);
        }
      }
      if (lVar9 != 0) {
        (**(code **)**(undefined8 **)(this + 0x20))(*(undefined8 **)(this + 0x20),lVar9 * -8,1);
      }
      *(ulong *)(this + 0x30) = uVar12;
      *(ulong *)(this + 0x38) = uVar10;
    }
    else {
      *(ulong *)(this + 0x30) = uVar12;
    }
    uVar10 = uVar12 * 8;
    fVar18 = (float)(uVar12 + 3 >> 2) * __LC13 * __LC14;
    if (__LC15 <= fVar18) {
      uVar15 = (long)(fVar18 - __LC15) ^ 0x8000000000000000;
    }
    else {
      uVar15 = (ulong)fVar18;
    }
    uVar15 = uVar15 + uVar12 * 8;
    if (uVar15 < uVar10) {
      uVar15 = uVar10;
    }
    FastAllocator::init((FastAllocator *)(*(long *)(this + 0x10) + 0x78),uVar10,uVar10,uVar15);
    plVar13 = *(long **)(*(long *)(this + 0x10) + 0x178);
    lVar9 = *plVar13;
    uVar10 = embree::sse2::createMortonCodeArray<embree::TriangleMesh>
                       (*(TriangleMesh **)(this + 0x18),(vector_t *)(this + 0x20),
                        (BuildProgressMonitor *)(*(long *)(*(long *)(this + 0x10) + 0x68) + 600));
    local_108 = *(undefined4 *)(this + 0x70);
    local_138 = *(undefined8 *)(this + 0x18);
    local_140 = *(long *)(this + 0x10);
    local_a8 = *(undefined8 *)(this + 0x48);
    uStack_a0 = *(undefined8 *)(this + 0x50);
    local_128 = &PTR_operator___00117540;
    local_98 = *(undefined8 *)(this + 0x58);
    uStack_90 = *(undefined8 *)(this + 0x60);
    local_110 = *(BuildPrim **)(this + 0x40);
    local_88 = *(ulong *)(this + 0x68);
    local_120 = *(undefined8 *)(*(long *)(local_140 + 0x68) + 0x260);
    local_148 = local_140 + 0x78;
    uStack_80 = &local_148;
    local_78 = &local_149;
    uStack_70 = &local_140;
    local_68 = &local_118;
    local_60 = &local_138;
    local_58 = &local_128;
    local_118 = local_138;
    local_50 = local_110;
    radix_sort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>
              (local_110,(BuildPrim *)((long)plVar13 + lVar9 + 0x40),uVar10,local_88);
    local_12c = (undefined4)uVar10;
    local_130 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    local_e8 = 0;
    BVHBuilderMorton::
    BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleM<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>
    ::recurse(local_d8,&local_a8,1,&local_130,1);
    local_a8 = CONCAT44(uStack_c4,local_c8);
    uStack_a0 = CONCAT44(uStack_bc,uStack_c0);
    local_98 = local_b8;
    uStack_90 = uStack_b0;
    local_88 = CONCAT44(uStack_c4,local_c8);
    uStack_80 = (long *)CONCAT44(uStack_bc,uStack_c0);
    local_78 = (undefined1 *)local_b8;
    uStack_70 = (long *)uStack_b0;
    embree::BVHN<4>::set(*(undefined8 *)(this + 0x10),local_d8[0],&local_a8,uVar12);
    embree::sse2::BVHNRotate<4>::rotate(*(undefined8 *)(*(long *)(this + 0x10) + 0x70),1);
    embree::BVHN<4>::clearBarrier(*(NodeRefPtr **)(this + 0x10));
    lVar9 = *(long *)(this + 0x10);
    if ((*(byte *)(*(long *)(lVar9 + 0x68) + 0x230) & 1) == 0) {
      pvVar6 = *(void **)(this + 0x40);
      lVar9 = *(long *)(this + 0x38);
      if (pvVar6 != (void *)0x0) {
        if ((ulong)(lVar9 * 8) < 0x1c00000) {
          embree::alignedFree(pvVar6);
        }
        else {
          embree::os_free(pvVar6,lVar9 * 8,(bool)this[0x28]);
        }
      }
      if (lVar9 != 0) {
        (**(code **)**(undefined8 **)(this + 0x20))(*(undefined8 **)(this + 0x20),lVar9 * -8,1);
      }
      *(undefined8 *)(this + 0x40) = 0;
      lVar9 = *(long *)(this + 0x10);
      *(undefined8 *)(this + 0x38) = 0;
      *(undefined8 *)(this + 0x30) = 0;
    }
    plVar13 = (long *)(lVar9 + 0x130);
    plVar11 = (long *)(lVar9 + 0x170);
    do {
      while (*plVar13 != 0) {
        lVar7 = *(long *)(*plVar13 + 0x18);
        *(long *)(*plVar13 + 0x18) = *plVar11;
        LOCK();
        *plVar11 = *plVar13;
        UNLOCK();
        LOCK();
        *plVar13 = lVar7;
        UNLOCK();
      }
      LOCK();
      *plVar13 = 0;
      UNLOCK();
      plVar13 = plVar13 + 1;
    } while (plVar11 != plVar13);
    plVar13 = *(long **)(lVar9 + 0x1a8);
    plVar11 = *(long **)(lVar9 + 0x1b0);
    if (plVar13 != plVar11) {
      do {
        while( true ) {
          lVar7 = *plVar13;
          if (lVar9 + 0x78 != *(long *)(lVar7 + 8)) break;
          embree::MutexSys::lock();
          if (lVar9 + 0x78 == *(long *)(lVar7 + 8)) {
            LOCK();
            plVar16 = (long *)(*(long *)(lVar7 + 8) + 0x118);
            *plVar16 = *plVar16 + *(long *)(lVar7 + 0xa8) + *(long *)(lVar7 + 0x68);
            UNLOCK();
            LOCK();
            plVar16 = (long *)(*(long *)(lVar7 + 8) + 0x120);
            *plVar16 = *plVar16 +
                       (((*(long *)(lVar7 + 0x98) + *(long *)(lVar7 + 0x58)) -
                        *(long *)(lVar7 + 0x50)) - *(long *)(lVar7 + 0x90));
            UNLOCK();
            LOCK();
            plVar16 = (long *)(*(long *)(lVar7 + 8) + 0x128);
            *plVar16 = *plVar16 + *(long *)(lVar7 + 0xb0) + *(long *)(lVar7 + 0x70);
            UNLOCK();
            *(undefined8 *)(lVar7 + 0x48) = 0;
            *(undefined8 *)(lVar7 + 0x58) = 0;
            *(undefined8 *)(lVar7 + 0x50) = 0;
            *(undefined8 *)(lVar7 + 0x68) = 0;
            *(undefined8 *)(lVar7 + 0x70) = 0;
            *(undefined8 *)(lVar7 + 0x60) = 0;
            *(undefined8 *)(lVar7 + 0x88) = 0;
            *(undefined8 *)(lVar7 + 0x98) = 0;
            *(undefined8 *)(lVar7 + 0x90) = 0;
            *(undefined8 *)(lVar7 + 0xa8) = 0;
            *(undefined8 *)(lVar7 + 0xb0) = 0;
            *(undefined8 *)(lVar7 + 0xa0) = 0;
            LOCK();
            *(undefined8 *)(lVar7 + 8) = 0;
            UNLOCK();
          }
          plVar13 = plVar13 + 1;
          embree::MutexSys::unlock();
          if (plVar11 == plVar13) goto LAB_001136ef;
        }
        plVar13 = plVar13 + 1;
      } while (plVar11 != plVar13);
LAB_001136ef:
      if (*(long *)(lVar9 + 0x1a8) != *(long *)(lVar9 + 0x1b0)) {
        *(long *)(lVar9 + 0x1b0) = *(long *)(lVar9 + 0x1a8);
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* embree::sse2::BVHNMeshBuilderMorton<4, embree::TriangleMesh, embree::TriangleMi<4> >::build() */

void __thiscall
embree::sse2::BVHNMeshBuilderMorton<4,embree::TriangleMesh,embree::TriangleMi<4>>::build
          (BVHNMeshBuilderMorton<4,embree::TriangleMesh,embree::TriangleMi<4>> *this)

{
  long *plVar1;
  char cVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  void *pvVar6;
  long lVar7;
  ulong *puVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long *plVar16;
  ulong *puVar17;
  long in_FS_OFFSET;
  float fVar18;
  undefined1 local_149;
  long local_148;
  long local_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined **local_128;
  undefined8 local_120;
  undefined8 local_118;
  BuildPrim *local_110;
  undefined4 local_108;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_d8 [2];
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined ***local_58;
  BuildPrim *local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = *(uint *)(this + 0x74);
  if (*(uint *)(*(long *)(this + 0x18) + 0x20) == uVar3) {
    *(uint *)(this + 0x74) = uVar3;
  }
  else {
    lVar9 = *(long *)(this + 0x10);
    plVar13 = (long *)(lVar9 + 0x170);
    plVar11 = (long *)(lVar9 + 0x130);
    do {
      while (*plVar11 != 0) {
        lVar7 = *(long *)(*plVar11 + 0x18);
        *(long *)(*plVar11 + 0x18) = *plVar13;
        LOCK();
        *plVar13 = *plVar11;
        UNLOCK();
        LOCK();
        *plVar11 = lVar7;
        UNLOCK();
      }
      LOCK();
      *plVar11 = 0;
      UNLOCK();
      plVar11 = plVar11 + 1;
    } while (plVar13 != plVar11);
    plVar11 = *(long **)(lVar9 + 0x1b0);
    plVar16 = *(long **)(lVar9 + 0x1a8);
    if (plVar11 != plVar16) {
      do {
        while( true ) {
          lVar7 = *plVar16;
          if (lVar9 + 0x78 != *(long *)(lVar7 + 8)) break;
          embree::MutexSys::lock();
          if (lVar9 + 0x78 == *(long *)(lVar7 + 8)) {
            LOCK();
            plVar1 = (long *)(*(long *)(lVar7 + 8) + 0x118);
            *plVar1 = *plVar1 + *(long *)(lVar7 + 0xa8) + *(long *)(lVar7 + 0x68);
            UNLOCK();
            LOCK();
            plVar1 = (long *)(*(long *)(lVar7 + 8) + 0x120);
            *plVar1 = *plVar1 + (((*(long *)(lVar7 + 0x98) + *(long *)(lVar7 + 0x58)) -
                                 *(long *)(lVar7 + 0x50)) - *(long *)(lVar7 + 0x90));
            UNLOCK();
            LOCK();
            plVar1 = (long *)(*(long *)(lVar7 + 8) + 0x128);
            *plVar1 = *plVar1 + *(long *)(lVar7 + 0xb0) + *(long *)(lVar7 + 0x70);
            UNLOCK();
            *(undefined8 *)(lVar7 + 0x48) = 0;
            *(undefined8 *)(lVar7 + 0x58) = 0;
            *(undefined8 *)(lVar7 + 0x50) = 0;
            *(undefined8 *)(lVar7 + 0x68) = 0;
            *(undefined8 *)(lVar7 + 0x70) = 0;
            *(undefined8 *)(lVar7 + 0x60) = 0;
            *(undefined8 *)(lVar7 + 0x88) = 0;
            *(undefined8 *)(lVar7 + 0x98) = 0;
            *(undefined8 *)(lVar7 + 0x90) = 0;
            *(undefined8 *)(lVar7 + 0xa8) = 0;
            *(undefined8 *)(lVar7 + 0xb0) = 0;
            *(undefined8 *)(lVar7 + 0xa0) = 0;
            LOCK();
            *(undefined8 *)(lVar7 + 8) = 0;
            UNLOCK();
          }
          embree::MutexSys::unlock();
          plVar16 = plVar16 + 1;
          if (plVar11 == plVar16) goto LAB_00114530;
        }
        plVar16 = plVar16 + 1;
      } while (plVar11 != plVar16);
LAB_00114530:
      if (*(long *)(lVar9 + 0x1a8) != *(long *)(lVar9 + 0x1b0)) {
        *(long *)(lVar9 + 0x1b0) = *(long *)(lVar9 + 0x1a8);
      }
    }
    LOCK();
    *(undefined8 *)(lVar9 + 400) = 0;
    UNLOCK();
    LOCK();
    *(undefined8 *)(lVar9 + 0x198) = 0;
    UNLOCK();
    LOCK();
    *(undefined8 *)(lVar9 + 0x1a0) = 0;
    UNLOCK();
    if (*(long *)(lVar9 + 0x170) != 0) {
      puVar17 = *(ulong **)(lVar9 + 0x170);
      cVar2 = *(char *)(lVar9 + 0x180);
      plVar11 = *(long **)(lVar9 + 0x78);
      if (puVar17 != (ulong *)0x0) {
        if (plVar11 == (long *)0x0) {
          if (cVar2 == '\0') {
            do {
              puVar8 = (ulong *)puVar17[3];
              if ((int)puVar17[5] == 0) {
                embree::alignedFree(puVar17);
              }
              else if ((int)puVar17[5] == 1) {
                embree::os_free(puVar17,puVar17[2] + 0x40,*(bool *)((long)puVar17 + 0x2c));
              }
              puVar17 = puVar8;
            } while (puVar8 != (ulong *)0x0);
          }
          else {
            do {
              puVar8 = (ulong *)puVar17[3];
              if ((int)puVar17[5] == 0) {
                (**(code **)(_DAT_00000000 + 0x40))(0,puVar17);
              }
              else if ((int)puVar17[5] == 1) {
                embree::os_free(puVar17,puVar17[2] + 0x40,*(bool *)((long)puVar17 + 0x2c));
              }
              puVar17 = puVar8;
            } while (puVar8 != (ulong *)0x0);
          }
        }
        else {
          do {
            while( true ) {
              puVar8 = (ulong *)puVar17[3];
              uVar12 = *puVar17;
              if (*puVar17 < puVar17[1]) {
                uVar12 = puVar17[1];
              }
              if (puVar17[2] < uVar12) {
                uVar12 = puVar17[2];
              }
              lVar7 = puVar17[4] + 0x40 + uVar12;
              if ((int)puVar17[5] != 0) break;
              if (cVar2 == '\0') {
                embree::alignedFree(puVar17);
              }
              else {
                (**(code **)(*plVar11 + 0x40))(plVar11,puVar17);
              }
              (**(code **)(*plVar11 + 0x20))(plVar11,-lVar7,1);
LAB_001145de:
              puVar17 = puVar8;
              if (puVar8 == (ulong *)0x0) goto LAB_0011464c;
            }
            if ((int)puVar17[5] != 1) goto LAB_001145de;
            embree::os_free(puVar17,puVar17[2] + 0x40,*(bool *)((long)puVar17 + 0x2c));
            (**(code **)(*plVar11 + 0x20))(plVar11,-lVar7,1);
            puVar17 = puVar8;
          } while (puVar8 != (ulong *)0x0);
        }
      }
    }
LAB_0011464c:
    LOCK();
    *plVar13 = 0;
    UNLOCK();
    if (*(long *)(lVar9 + 0x178) != 0) {
      puVar17 = *(ulong **)(lVar9 + 0x178);
      cVar2 = *(char *)(lVar9 + 0x180);
      plVar13 = *(long **)(lVar9 + 0x78);
      if (puVar17 != (ulong *)0x0) {
        if (plVar13 == (long *)0x0) {
          if (cVar2 == '\0') {
            do {
              puVar8 = (ulong *)puVar17[3];
              if ((int)puVar17[5] == 0) {
                embree::alignedFree(puVar17);
              }
              else if ((int)puVar17[5] == 1) {
                embree::os_free(puVar17,puVar17[2] + 0x40,*(bool *)((long)puVar17 + 0x2c));
              }
              puVar17 = puVar8;
            } while (puVar8 != (ulong *)0x0);
          }
          else {
            do {
              puVar8 = (ulong *)puVar17[3];
              if ((int)puVar17[5] == 0) {
                (**(code **)(_DAT_00000000 + 0x40))(0,puVar17);
              }
              else if ((int)puVar17[5] == 1) {
                embree::os_free(puVar17,puVar17[2] + 0x40,*(bool *)((long)puVar17 + 0x2c));
              }
              puVar17 = puVar8;
            } while (puVar8 != (ulong *)0x0);
          }
        }
        else {
          do {
            while( true ) {
              puVar8 = (ulong *)puVar17[3];
              uVar12 = *puVar17;
              if (*puVar17 < puVar17[1]) {
                uVar12 = puVar17[1];
              }
              if (puVar17[2] < uVar12) {
                uVar12 = puVar17[2];
              }
              lVar7 = puVar17[4] + 0x40 + uVar12;
              if ((int)puVar17[5] != 0) break;
              if (cVar2 == '\0') {
                embree::alignedFree(puVar17);
              }
              else {
                (**(code **)(*plVar13 + 0x40))(plVar13,puVar17);
              }
              (**(code **)(*plVar13 + 0x20))(plVar13,-lVar7,1);
LAB_001146cc:
              puVar17 = puVar8;
              if (puVar8 == (ulong *)0x0) goto LAB_00114730;
            }
            if ((int)puVar17[5] != 1) goto LAB_001146cc;
            embree::os_free(puVar17,puVar17[2] + 0x40,*(bool *)((long)puVar17 + 0x2c));
            (**(code **)(*plVar13 + 0x20))(plVar13,-lVar7,1);
            puVar17 = puVar8;
          } while (puVar8 != (ulong *)0x0);
        }
      }
    }
LAB_00114730:
    LOCK();
    *(undefined8 *)(lVar9 + 0x178) = 0;
    UNLOCK();
    plVar13 = (long *)(lVar9 + 0xf0);
    do {
      LOCK();
      *plVar13 = 0;
      UNLOCK();
      LOCK();
      plVar13[8] = 0;
      UNLOCK();
      plVar13 = plVar13 + 1;
    } while (plVar13 != (long *)(lVar9 + 0x130));
    pvVar6 = *(void **)(lVar9 + 0x1e8);
    lVar7 = *(long *)(lVar9 + 0x1e0);
    if (pvVar6 != (void *)0x0) {
      if ((ulong)(lVar7 << 5) < 0x1c00000) {
        embree::alignedFree(pvVar6);
      }
      else {
        embree::os_free(pvVar6,lVar7 << 5,*(bool *)(lVar9 + 0x1d0));
      }
    }
    if (lVar7 != 0) {
      (**(code **)**(undefined8 **)(lVar9 + 0x1c8))(*(undefined8 **)(lVar9 + 0x1c8),lVar7 * -0x20,1)
      ;
    }
    *(undefined8 *)(lVar9 + 0x1e8) = 0;
    *(undefined8 *)(lVar9 + 0x1e0) = 0;
    *(undefined8 *)(lVar9 + 0x1d8) = 0;
    pvVar6 = *(void **)(this + 0x40);
    lVar9 = *(long *)(this + 0x38);
    if (pvVar6 != (void *)0x0) {
      if ((ulong)(lVar9 * 8) < 0x1c00000) {
        embree::alignedFree(pvVar6);
      }
      else {
        embree::os_free(pvVar6,lVar9 * 8,(bool)this[0x28]);
      }
    }
    if (lVar9 != 0) {
      (**(code **)**(undefined8 **)(this + 0x20))(*(undefined8 **)(this + 0x20),lVar9 * -8,1);
    }
    *(undefined8 *)(this + 0x40) = 0;
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined8 *)(this + 0x30) = 0;
    uVar3 = *(uint *)(*(long *)(this + 0x18) + 0x20);
    *(uint *)(this + 0x74) = uVar3;
  }
  uVar12 = (ulong)uVar3;
  if (uVar12 == 0) {
    local_a8 = CONCAT44(_LC2,_LC2);
    uStack_a0 = CONCAT44(_LC2,_LC2);
    local_88 = CONCAT44(_LC2,_LC2);
    uStack_80 = (long *)CONCAT44(_LC2,_LC2);
    local_98 = CONCAT44(_LC4,_LC4);
    uStack_90 = CONCAT44(_LC4,_LC4);
    local_78 = (undefined1 *)CONCAT44(_LC4,_LC4);
    uStack_70 = (long *)CONCAT44(_LC4,_LC4);
    embree::BVHN<4>::set(*(undefined8 *)(this + 0x10),8,&local_a8,0);
  }
  else {
    uVar10 = *(ulong *)(this + 0x38);
    if (uVar10 < uVar12) {
      if (uVar10 == 0) {
        uVar10 = uVar12;
        if (uVar12 < *(ulong *)(this + 0x30)) {
          *(ulong *)(this + 0x30) = uVar12;
        }
      }
      else {
        do {
          uVar10 = uVar10 * 2;
        } while (uVar10 < uVar12);
        if (uVar12 < *(ulong *)(this + 0x30)) {
          *(ulong *)(this + 0x30) = uVar12;
        }
      }
      uVar15 = uVar10 * 8;
      puVar4 = *(undefined8 **)(this + 0x40);
      (**(code **)**(undefined8 **)(this + 0x20))(*(undefined8 **)(this + 0x20),uVar15,0);
      if (uVar15 < 0x1c00000) {
        lVar9 = embree::alignedMalloc(uVar15,8);
      }
      else {
        lVar9 = embree::os_malloc(uVar15,(bool *)(this + 0x28));
      }
      *(long *)(this + 0x40) = lVar9;
      if (*(long *)(this + 0x30) != 0) {
        uVar15 = 0;
        puVar14 = puVar4;
        while( true ) {
          uVar5 = *puVar14;
          puVar14 = puVar14 + 1;
          *(undefined8 *)(lVar9 + uVar15 * 8) = uVar5;
          uVar15 = uVar15 + 1;
          if (*(ulong *)(this + 0x30) <= uVar15) break;
          lVar9 = *(long *)(this + 0x40);
        }
      }
      lVar9 = *(long *)(this + 0x38);
      if (puVar4 != (undefined8 *)0x0) {
        if ((ulong)(lVar9 * 8) < 0x1c00000) {
          embree::alignedFree(puVar4);
        }
        else {
          embree::os_free(puVar4,lVar9 * 8,(bool)this[0x28]);
        }
      }
      if (lVar9 != 0) {
        (**(code **)**(undefined8 **)(this + 0x20))(*(undefined8 **)(this + 0x20),lVar9 * -8,1);
      }
      *(ulong *)(this + 0x30) = uVar12;
      *(ulong *)(this + 0x38) = uVar10;
    }
    else {
      *(ulong *)(this + 0x30) = uVar12;
    }
    uVar10 = uVar12 * 8;
    fVar18 = (float)(uVar12 + 3 >> 2) * __LC13 * __LC16;
    if (__LC15 <= fVar18) {
      uVar15 = (long)(fVar18 - __LC15) ^ 0x8000000000000000;
    }
    else {
      uVar15 = (ulong)fVar18;
    }
    uVar15 = uVar15 + uVar12 * 8;
    if (uVar15 < uVar10) {
      uVar15 = uVar10;
    }
    FastAllocator::init((FastAllocator *)(*(long *)(this + 0x10) + 0x78),uVar10,uVar10,uVar15);
    plVar13 = *(long **)(*(long *)(this + 0x10) + 0x178);
    lVar9 = *plVar13;
    uVar10 = embree::sse2::createMortonCodeArray<embree::TriangleMesh>
                       (*(TriangleMesh **)(this + 0x18),(vector_t *)(this + 0x20),
                        (BuildProgressMonitor *)(*(long *)(*(long *)(this + 0x10) + 0x68) + 600));
    local_108 = *(undefined4 *)(this + 0x70);
    local_138 = *(undefined8 *)(this + 0x18);
    local_140 = *(long *)(this + 0x10);
    local_a8 = *(undefined8 *)(this + 0x48);
    uStack_a0 = *(undefined8 *)(this + 0x50);
    local_128 = &PTR_operator___00117540;
    local_98 = *(undefined8 *)(this + 0x58);
    uStack_90 = *(undefined8 *)(this + 0x60);
    local_110 = *(BuildPrim **)(this + 0x40);
    local_88 = *(ulong *)(this + 0x68);
    local_120 = *(undefined8 *)(*(long *)(local_140 + 0x68) + 0x260);
    local_148 = local_140 + 0x78;
    uStack_80 = &local_148;
    local_78 = &local_149;
    uStack_70 = &local_140;
    local_68 = &local_118;
    local_60 = &local_138;
    local_58 = &local_128;
    local_118 = local_138;
    local_50 = local_110;
    radix_sort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>
              (local_110,(BuildPrim *)((long)plVar13 + lVar9 + 0x40),uVar10,local_88);
    local_12c = (undefined4)uVar10;
    local_130 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    local_e8 = 0;
    BVHBuilderMorton::
    BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMi<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>
    ::recurse(local_d8,&local_a8,1,&local_130,1);
    local_a8 = CONCAT44(uStack_c4,local_c8);
    uStack_a0 = CONCAT44(uStack_bc,uStack_c0);
    local_98 = local_b8;
    uStack_90 = uStack_b0;
    local_88 = CONCAT44(uStack_c4,local_c8);
    uStack_80 = (long *)CONCAT44(uStack_bc,uStack_c0);
    local_78 = (undefined1 *)local_b8;
    uStack_70 = (long *)uStack_b0;
    embree::BVHN<4>::set(*(undefined8 *)(this + 0x10),local_d8[0],&local_a8,uVar12);
    embree::sse2::BVHNRotate<4>::rotate(*(undefined8 *)(*(long *)(this + 0x10) + 0x70),1);
    embree::BVHN<4>::clearBarrier(*(NodeRefPtr **)(this + 0x10));
    lVar9 = *(long *)(this + 0x10);
    if ((*(byte *)(*(long *)(lVar9 + 0x68) + 0x230) & 1) == 0) {
      pvVar6 = *(void **)(this + 0x40);
      lVar9 = *(long *)(this + 0x38);
      if (pvVar6 != (void *)0x0) {
        if ((ulong)(lVar9 * 8) < 0x1c00000) {
          embree::alignedFree(pvVar6);
        }
        else {
          embree::os_free(pvVar6,lVar9 * 8,(bool)this[0x28]);
        }
      }
      if (lVar9 != 0) {
        (**(code **)**(undefined8 **)(this + 0x20))(*(undefined8 **)(this + 0x20),lVar9 * -8,1);
      }
      *(undefined8 *)(this + 0x40) = 0;
      lVar9 = *(long *)(this + 0x10);
      *(undefined8 *)(this + 0x38) = 0;
      *(undefined8 *)(this + 0x30) = 0;
    }
    plVar13 = (long *)(lVar9 + 0x130);
    plVar11 = (long *)(lVar9 + 0x170);
    do {
      while (*plVar13 != 0) {
        lVar7 = *(long *)(*plVar13 + 0x18);
        *(long *)(*plVar13 + 0x18) = *plVar11;
        LOCK();
        *plVar11 = *plVar13;
        UNLOCK();
        LOCK();
        *plVar13 = lVar7;
        UNLOCK();
      }
      LOCK();
      *plVar13 = 0;
      UNLOCK();
      plVar13 = plVar13 + 1;
    } while (plVar11 != plVar13);
    plVar13 = *(long **)(lVar9 + 0x1a8);
    plVar11 = *(long **)(lVar9 + 0x1b0);
    if (plVar13 != plVar11) {
      do {
        while( true ) {
          lVar7 = *plVar13;
          if (lVar9 + 0x78 != *(long *)(lVar7 + 8)) break;
          embree::MutexSys::lock();
          if (lVar9 + 0x78 == *(long *)(lVar7 + 8)) {
            LOCK();
            plVar16 = (long *)(*(long *)(lVar7 + 8) + 0x118);
            *plVar16 = *plVar16 + *(long *)(lVar7 + 0xa8) + *(long *)(lVar7 + 0x68);
            UNLOCK();
            LOCK();
            plVar16 = (long *)(*(long *)(lVar7 + 8) + 0x120);
            *plVar16 = *plVar16 +
                       (((*(long *)(lVar7 + 0x98) + *(long *)(lVar7 + 0x58)) -
                        *(long *)(lVar7 + 0x50)) - *(long *)(lVar7 + 0x90));
            UNLOCK();
            LOCK();
            plVar16 = (long *)(*(long *)(lVar7 + 8) + 0x128);
            *plVar16 = *plVar16 + *(long *)(lVar7 + 0xb0) + *(long *)(lVar7 + 0x70);
            UNLOCK();
            *(undefined8 *)(lVar7 + 0x48) = 0;
            *(undefined8 *)(lVar7 + 0x58) = 0;
            *(undefined8 *)(lVar7 + 0x50) = 0;
            *(undefined8 *)(lVar7 + 0x68) = 0;
            *(undefined8 *)(lVar7 + 0x70) = 0;
            *(undefined8 *)(lVar7 + 0x60) = 0;
            *(undefined8 *)(lVar7 + 0x88) = 0;
            *(undefined8 *)(lVar7 + 0x98) = 0;
            *(undefined8 *)(lVar7 + 0x90) = 0;
            *(undefined8 *)(lVar7 + 0xa8) = 0;
            *(undefined8 *)(lVar7 + 0xb0) = 0;
            *(undefined8 *)(lVar7 + 0xa0) = 0;
            LOCK();
            *(undefined8 *)(lVar7 + 8) = 0;
            UNLOCK();
          }
          plVar13 = plVar13 + 1;
          embree::MutexSys::unlock();
          if (plVar11 == plVar13) goto LAB_0011435f;
        }
        plVar13 = plVar13 + 1;
      } while (plVar11 != plVar13);
LAB_0011435f:
      if (*(long *)(lVar9 + 0x1a8) != *(long *)(lVar9 + 0x1b0)) {
        *(long *)(lVar9 + 0x1b0) = *(long *)(lVar9 + 0x1a8);
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* embree::sse2::BVHNMeshBuilderMorton<4, embree::TriangleMesh, embree::TriangleMv<4> >::build() */

void __thiscall
embree::sse2::BVHNMeshBuilderMorton<4,embree::TriangleMesh,embree::TriangleMv<4>>::build
          (BVHNMeshBuilderMorton<4,embree::TriangleMesh,embree::TriangleMv<4>> *this)

{
  long *plVar1;
  char cVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  void *pvVar6;
  long lVar7;
  ulong *puVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long *plVar16;
  ulong *puVar17;
  long in_FS_OFFSET;
  float fVar18;
  undefined1 local_149;
  long local_148;
  long local_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined **local_128;
  undefined8 local_120;
  undefined8 local_118;
  BuildPrim *local_110;
  undefined4 local_108;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_d8 [2];
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined ***local_58;
  BuildPrim *local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = *(uint *)(this + 0x74);
  if (*(uint *)(*(long *)(this + 0x18) + 0x20) == uVar3) {
    *(uint *)(this + 0x74) = uVar3;
  }
  else {
    lVar9 = *(long *)(this + 0x10);
    plVar13 = (long *)(lVar9 + 0x170);
    plVar11 = (long *)(lVar9 + 0x130);
    do {
      while (*plVar11 != 0) {
        lVar7 = *(long *)(*plVar11 + 0x18);
        *(long *)(*plVar11 + 0x18) = *plVar13;
        LOCK();
        *plVar13 = *plVar11;
        UNLOCK();
        LOCK();
        *plVar11 = lVar7;
        UNLOCK();
      }
      LOCK();
      *plVar11 = 0;
      UNLOCK();
      plVar11 = plVar11 + 1;
    } while (plVar13 != plVar11);
    plVar11 = *(long **)(lVar9 + 0x1b0);
    plVar16 = *(long **)(lVar9 + 0x1a8);
    if (plVar11 != plVar16) {
      do {
        while( true ) {
          lVar7 = *plVar16;
          if (lVar9 + 0x78 != *(long *)(lVar7 + 8)) break;
          embree::MutexSys::lock();
          if (lVar9 + 0x78 == *(long *)(lVar7 + 8)) {
            LOCK();
            plVar1 = (long *)(*(long *)(lVar7 + 8) + 0x118);
            *plVar1 = *plVar1 + *(long *)(lVar7 + 0xa8) + *(long *)(lVar7 + 0x68);
            UNLOCK();
            LOCK();
            plVar1 = (long *)(*(long *)(lVar7 + 8) + 0x120);
            *plVar1 = *plVar1 + (((*(long *)(lVar7 + 0x98) + *(long *)(lVar7 + 0x58)) -
                                 *(long *)(lVar7 + 0x50)) - *(long *)(lVar7 + 0x90));
            UNLOCK();
            LOCK();
            plVar1 = (long *)(*(long *)(lVar7 + 8) + 0x128);
            *plVar1 = *plVar1 + *(long *)(lVar7 + 0xb0) + *(long *)(lVar7 + 0x70);
            UNLOCK();
            *(undefined8 *)(lVar7 + 0x48) = 0;
            *(undefined8 *)(lVar7 + 0x58) = 0;
            *(undefined8 *)(lVar7 + 0x50) = 0;
            *(undefined8 *)(lVar7 + 0x68) = 0;
            *(undefined8 *)(lVar7 + 0x70) = 0;
            *(undefined8 *)(lVar7 + 0x60) = 0;
            *(undefined8 *)(lVar7 + 0x88) = 0;
            *(undefined8 *)(lVar7 + 0x98) = 0;
            *(undefined8 *)(lVar7 + 0x90) = 0;
            *(undefined8 *)(lVar7 + 0xa8) = 0;
            *(undefined8 *)(lVar7 + 0xb0) = 0;
            *(undefined8 *)(lVar7 + 0xa0) = 0;
            LOCK();
            *(undefined8 *)(lVar7 + 8) = 0;
            UNLOCK();
          }
          embree::MutexSys::unlock();
          plVar16 = plVar16 + 1;
          if (plVar11 == plVar16) goto LAB_001151a0;
        }
        plVar16 = plVar16 + 1;
      } while (plVar11 != plVar16);
LAB_001151a0:
      if (*(long *)(lVar9 + 0x1a8) != *(long *)(lVar9 + 0x1b0)) {
        *(long *)(lVar9 + 0x1b0) = *(long *)(lVar9 + 0x1a8);
      }
    }
    LOCK();
    *(undefined8 *)(lVar9 + 400) = 0;
    UNLOCK();
    LOCK();
    *(undefined8 *)(lVar9 + 0x198) = 0;
    UNLOCK();
    LOCK();
    *(undefined8 *)(lVar9 + 0x1a0) = 0;
    UNLOCK();
    if (*(long *)(lVar9 + 0x170) != 0) {
      puVar17 = *(ulong **)(lVar9 + 0x170);
      cVar2 = *(char *)(lVar9 + 0x180);
      plVar11 = *(long **)(lVar9 + 0x78);
      if (puVar17 != (ulong *)0x0) {
        if (plVar11 == (long *)0x0) {
          if (cVar2 == '\0') {
            do {
              puVar8 = (ulong *)puVar17[3];
              if ((int)puVar17[5] == 0) {
                embree::alignedFree(puVar17);
              }
              else if ((int)puVar17[5] == 1) {
                embree::os_free(puVar17,puVar17[2] + 0x40,*(bool *)((long)puVar17 + 0x2c));
              }
              puVar17 = puVar8;
            } while (puVar8 != (ulong *)0x0);
          }
          else {
            do {
              puVar8 = (ulong *)puVar17[3];
              if ((int)puVar17[5] == 0) {
                (**(code **)(_DAT_00000000 + 0x40))(0,puVar17);
              }
              else if ((int)puVar17[5] == 1) {
                embree::os_free(puVar17,puVar17[2] + 0x40,*(bool *)((long)puVar17 + 0x2c));
              }
              puVar17 = puVar8;
            } while (puVar8 != (ulong *)0x0);
          }
        }
        else {
          do {
            while( true ) {
              puVar8 = (ulong *)puVar17[3];
              uVar12 = *puVar17;
              if (*puVar17 < puVar17[1]) {
                uVar12 = puVar17[1];
              }
              if (puVar17[2] < uVar12) {
                uVar12 = puVar17[2];
              }
              lVar7 = puVar17[4] + 0x40 + uVar12;
              if ((int)puVar17[5] != 0) break;
              if (cVar2 == '\0') {
                embree::alignedFree(puVar17);
              }
              else {
                (**(code **)(*plVar11 + 0x40))(plVar11,puVar17);
              }
              (**(code **)(*plVar11 + 0x20))(plVar11,-lVar7,1);
LAB_0011524e:
              puVar17 = puVar8;
              if (puVar8 == (ulong *)0x0) goto LAB_001152bc;
            }
            if ((int)puVar17[5] != 1) goto LAB_0011524e;
            embree::os_free(puVar17,puVar17[2] + 0x40,*(bool *)((long)puVar17 + 0x2c));
            (**(code **)(*plVar11 + 0x20))(plVar11,-lVar7,1);
            puVar17 = puVar8;
          } while (puVar8 != (ulong *)0x0);
        }
      }
    }
LAB_001152bc:
    LOCK();
    *plVar13 = 0;
    UNLOCK();
    if (*(long *)(lVar9 + 0x178) != 0) {
      puVar17 = *(ulong **)(lVar9 + 0x178);
      cVar2 = *(char *)(lVar9 + 0x180);
      plVar13 = *(long **)(lVar9 + 0x78);
      if (puVar17 != (ulong *)0x0) {
        if (plVar13 == (long *)0x0) {
          if (cVar2 == '\0') {
            do {
              puVar8 = (ulong *)puVar17[3];
              if ((int)puVar17[5] == 0) {
                embree::alignedFree(puVar17);
              }
              else if ((int)puVar17[5] == 1) {
                embree::os_free(puVar17,puVar17[2] + 0x40,*(bool *)((long)puVar17 + 0x2c));
              }
              puVar17 = puVar8;
            } while (puVar8 != (ulong *)0x0);
          }
          else {
            do {
              puVar8 = (ulong *)puVar17[3];
              if ((int)puVar17[5] == 0) {
                (**(code **)(_DAT_00000000 + 0x40))(0,puVar17);
              }
              else if ((int)puVar17[5] == 1) {
                embree::os_free(puVar17,puVar17[2] + 0x40,*(bool *)((long)puVar17 + 0x2c));
              }
              puVar17 = puVar8;
            } while (puVar8 != (ulong *)0x0);
          }
        }
        else {
          do {
            while( true ) {
              puVar8 = (ulong *)puVar17[3];
              uVar12 = *puVar17;
              if (*puVar17 < puVar17[1]) {
                uVar12 = puVar17[1];
              }
              if (puVar17[2] < uVar12) {
                uVar12 = puVar17[2];
              }
              lVar7 = puVar17[4] + 0x40 + uVar12;
              if ((int)puVar17[5] != 0) break;
              if (cVar2 == '\0') {
                embree::alignedFree(puVar17);
              }
              else {
                (**(code **)(*plVar13 + 0x40))(plVar13,puVar17);
              }
              (**(code **)(*plVar13 + 0x20))(plVar13,-lVar7,1);
LAB_0011533c:
              puVar17 = puVar8;
              if (puVar8 == (ulong *)0x0) goto LAB_001153a0;
            }
            if ((int)puVar17[5] != 1) goto LAB_0011533c;
            embree::os_free(puVar17,puVar17[2] + 0x40,*(bool *)((long)puVar17 + 0x2c));
            (**(code **)(*plVar13 + 0x20))(plVar13,-lVar7,1);
            puVar17 = puVar8;
          } while (puVar8 != (ulong *)0x0);
        }
      }
    }
LAB_001153a0:
    LOCK();
    *(undefined8 *)(lVar9 + 0x178) = 0;
    UNLOCK();
    plVar13 = (long *)(lVar9 + 0xf0);
    do {
      LOCK();
      *plVar13 = 0;
      UNLOCK();
      LOCK();
      plVar13[8] = 0;
      UNLOCK();
      plVar13 = plVar13 + 1;
    } while (plVar13 != (long *)(lVar9 + 0x130));
    pvVar6 = *(void **)(lVar9 + 0x1e8);
    lVar7 = *(long *)(lVar9 + 0x1e0);
    if (pvVar6 != (void *)0x0) {
      if ((ulong)(lVar7 << 5) < 0x1c00000) {
        embree::alignedFree(pvVar6);
      }
      else {
        embree::os_free(pvVar6,lVar7 << 5,*(bool *)(lVar9 + 0x1d0));
      }
    }
    if (lVar7 != 0) {
      (**(code **)**(undefined8 **)(lVar9 + 0x1c8))(*(undefined8 **)(lVar9 + 0x1c8),lVar7 * -0x20,1)
      ;
    }
    *(undefined8 *)(lVar9 + 0x1e8) = 0;
    *(undefined8 *)(lVar9 + 0x1e0) = 0;
    *(undefined8 *)(lVar9 + 0x1d8) = 0;
    pvVar6 = *(void **)(this + 0x40);
    lVar9 = *(long *)(this + 0x38);
    if (pvVar6 != (void *)0x0) {
      if ((ulong)(lVar9 * 8) < 0x1c00000) {
        embree::alignedFree(pvVar6);
      }
      else {
        embree::os_free(pvVar6,lVar9 * 8,(bool)this[0x28]);
      }
    }
    if (lVar9 != 0) {
      (**(code **)**(undefined8 **)(this + 0x20))(*(undefined8 **)(this + 0x20),lVar9 * -8,1);
    }
    *(undefined8 *)(this + 0x40) = 0;
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined8 *)(this + 0x30) = 0;
    uVar3 = *(uint *)(*(long *)(this + 0x18) + 0x20);
    *(uint *)(this + 0x74) = uVar3;
  }
  uVar12 = (ulong)uVar3;
  if (uVar12 == 0) {
    local_a8 = CONCAT44(_LC2,_LC2);
    uStack_a0 = CONCAT44(_LC2,_LC2);
    local_88 = CONCAT44(_LC2,_LC2);
    uStack_80 = (long *)CONCAT44(_LC2,_LC2);
    local_98 = CONCAT44(_LC4,_LC4);
    uStack_90 = CONCAT44(_LC4,_LC4);
    local_78 = (undefined1 *)CONCAT44(_LC4,_LC4);
    uStack_70 = (long *)CONCAT44(_LC4,_LC4);
    embree::BVHN<4>::set(*(undefined8 *)(this + 0x10),8,&local_a8,0);
  }
  else {
    uVar10 = *(ulong *)(this + 0x38);
    if (uVar10 < uVar12) {
      if (uVar10 == 0) {
        uVar10 = uVar12;
        if (uVar12 < *(ulong *)(this + 0x30)) {
          *(ulong *)(this + 0x30) = uVar12;
        }
      }
      else {
        do {
          uVar10 = uVar10 * 2;
        } while (uVar10 < uVar12);
        if (uVar12 < *(ulong *)(this + 0x30)) {
          *(ulong *)(this + 0x30) = uVar12;
        }
      }
      uVar15 = uVar10 * 8;
      puVar4 = *(undefined8 **)(this + 0x40);
      (**(code **)**(undefined8 **)(this + 0x20))(*(undefined8 **)(this + 0x20),uVar15,0);
      if (uVar15 < 0x1c00000) {
        lVar9 = embree::alignedMalloc(uVar15,8);
      }
      else {
        lVar9 = embree::os_malloc(uVar15,(bool *)(this + 0x28));
      }
      *(long *)(this + 0x40) = lVar9;
      if (*(long *)(this + 0x30) != 0) {
        uVar15 = 0;
        puVar14 = puVar4;
        while( true ) {
          uVar5 = *puVar14;
          puVar14 = puVar14 + 1;
          *(undefined8 *)(lVar9 + uVar15 * 8) = uVar5;
          uVar15 = uVar15 + 1;
          if (*(ulong *)(this + 0x30) <= uVar15) break;
          lVar9 = *(long *)(this + 0x40);
        }
      }
      lVar9 = *(long *)(this + 0x38);
      if (puVar4 != (undefined8 *)0x0) {
        if ((ulong)(lVar9 * 8) < 0x1c00000) {
          embree::alignedFree(puVar4);
        }
        else {
          embree::os_free(puVar4,lVar9 * 8,(bool)this[0x28]);
        }
      }
      if (lVar9 != 0) {
        (**(code **)**(undefined8 **)(this + 0x20))(*(undefined8 **)(this + 0x20),lVar9 * -8,1);
      }
      *(ulong *)(this + 0x30) = uVar12;
      *(ulong *)(this + 0x38) = uVar10;
    }
    else {
      *(ulong *)(this + 0x30) = uVar12;
    }
    uVar10 = uVar12 * 8;
    fVar18 = (float)(uVar12 + 3 >> 2) * __LC13 * __LC14;
    if (__LC15 <= fVar18) {
      uVar15 = (long)(fVar18 - __LC15) ^ 0x8000000000000000;
    }
    else {
      uVar15 = (ulong)fVar18;
    }
    uVar15 = uVar15 + uVar12 * 8;
    if (uVar15 < uVar10) {
      uVar15 = uVar10;
    }
    FastAllocator::init((FastAllocator *)(*(long *)(this + 0x10) + 0x78),uVar10,uVar10,uVar15);
    plVar13 = *(long **)(*(long *)(this + 0x10) + 0x178);
    lVar9 = *plVar13;
    uVar10 = embree::sse2::createMortonCodeArray<embree::TriangleMesh>
                       (*(TriangleMesh **)(this + 0x18),(vector_t *)(this + 0x20),
                        (BuildProgressMonitor *)(*(long *)(*(long *)(this + 0x10) + 0x68) + 600));
    local_108 = *(undefined4 *)(this + 0x70);
    local_138 = *(undefined8 *)(this + 0x18);
    local_140 = *(long *)(this + 0x10);
    local_a8 = *(undefined8 *)(this + 0x48);
    uStack_a0 = *(undefined8 *)(this + 0x50);
    local_128 = &PTR_operator___00117540;
    local_98 = *(undefined8 *)(this + 0x58);
    uStack_90 = *(undefined8 *)(this + 0x60);
    local_110 = *(BuildPrim **)(this + 0x40);
    local_88 = *(ulong *)(this + 0x68);
    local_120 = *(undefined8 *)(*(long *)(local_140 + 0x68) + 0x260);
    local_148 = local_140 + 0x78;
    uStack_80 = &local_148;
    local_78 = &local_149;
    uStack_70 = &local_140;
    local_68 = &local_118;
    local_60 = &local_138;
    local_58 = &local_128;
    local_118 = local_138;
    local_50 = local_110;
    radix_sort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>
              (local_110,(BuildPrim *)((long)plVar13 + lVar9 + 0x40),uVar10,local_88);
    local_12c = (undefined4)uVar10;
    local_130 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    local_e8 = 0;
    BVHBuilderMorton::
    BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMv<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>
    ::recurse(local_d8,&local_a8,1,&local_130,1);
    local_a8 = CONCAT44(uStack_c4,local_c8);
    uStack_a0 = CONCAT44(uStack_bc,uStack_c0);
    local_98 = local_b8;
    uStack_90 = uStack_b0;
    local_88 = CONCAT44(uStack_c4,local_c8);
    uStack_80 = (long *)CONCAT44(uStack_bc,uStack_c0);
    local_78 = (undefined1 *)local_b8;
    uStack_70 = (long *)uStack_b0;
    embree::BVHN<4>::set(*(undefined8 *)(this + 0x10),local_d8[0],&local_a8,uVar12);
    embree::sse2::BVHNRotate<4>::rotate(*(undefined8 *)(*(long *)(this + 0x10) + 0x70),1);
    embree::BVHN<4>::clearBarrier(*(NodeRefPtr **)(this + 0x10));
    lVar9 = *(long *)(this + 0x10);
    if ((*(byte *)(*(long *)(lVar9 + 0x68) + 0x230) & 1) == 0) {
      pvVar6 = *(void **)(this + 0x40);
      lVar9 = *(long *)(this + 0x38);
      if (pvVar6 != (void *)0x0) {
        if ((ulong)(lVar9 * 8) < 0x1c00000) {
          embree::alignedFree(pvVar6);
        }
        else {
          embree::os_free(pvVar6,lVar9 * 8,(bool)this[0x28]);
        }
      }
      if (lVar9 != 0) {
        (**(code **)**(undefined8 **)(this + 0x20))(*(undefined8 **)(this + 0x20),lVar9 * -8,1);
      }
      *(undefined8 *)(this + 0x40) = 0;
      lVar9 = *(long *)(this + 0x10);
      *(undefined8 *)(this + 0x38) = 0;
      *(undefined8 *)(this + 0x30) = 0;
    }
    plVar13 = (long *)(lVar9 + 0x130);
    plVar11 = (long *)(lVar9 + 0x170);
    do {
      while (*plVar13 != 0) {
        lVar7 = *(long *)(*plVar13 + 0x18);
        *(long *)(*plVar13 + 0x18) = *plVar11;
        LOCK();
        *plVar11 = *plVar13;
        UNLOCK();
        LOCK();
        *plVar13 = lVar7;
        UNLOCK();
      }
      LOCK();
      *plVar13 = 0;
      UNLOCK();
      plVar13 = plVar13 + 1;
    } while (plVar11 != plVar13);
    plVar13 = *(long **)(lVar9 + 0x1a8);
    plVar11 = *(long **)(lVar9 + 0x1b0);
    if (plVar13 != plVar11) {
      do {
        while( true ) {
          lVar7 = *plVar13;
          if (lVar9 + 0x78 != *(long *)(lVar7 + 8)) break;
          embree::MutexSys::lock();
          if (lVar9 + 0x78 == *(long *)(lVar7 + 8)) {
            LOCK();
            plVar16 = (long *)(*(long *)(lVar7 + 8) + 0x118);
            *plVar16 = *plVar16 + *(long *)(lVar7 + 0xa8) + *(long *)(lVar7 + 0x68);
            UNLOCK();
            LOCK();
            plVar16 = (long *)(*(long *)(lVar7 + 8) + 0x120);
            *plVar16 = *plVar16 +
                       (((*(long *)(lVar7 + 0x98) + *(long *)(lVar7 + 0x58)) -
                        *(long *)(lVar7 + 0x50)) - *(long *)(lVar7 + 0x90));
            UNLOCK();
            LOCK();
            plVar16 = (long *)(*(long *)(lVar7 + 8) + 0x128);
            *plVar16 = *plVar16 + *(long *)(lVar7 + 0xb0) + *(long *)(lVar7 + 0x70);
            UNLOCK();
            *(undefined8 *)(lVar7 + 0x48) = 0;
            *(undefined8 *)(lVar7 + 0x58) = 0;
            *(undefined8 *)(lVar7 + 0x50) = 0;
            *(undefined8 *)(lVar7 + 0x68) = 0;
            *(undefined8 *)(lVar7 + 0x70) = 0;
            *(undefined8 *)(lVar7 + 0x60) = 0;
            *(undefined8 *)(lVar7 + 0x88) = 0;
            *(undefined8 *)(lVar7 + 0x98) = 0;
            *(undefined8 *)(lVar7 + 0x90) = 0;
            *(undefined8 *)(lVar7 + 0xa8) = 0;
            *(undefined8 *)(lVar7 + 0xb0) = 0;
            *(undefined8 *)(lVar7 + 0xa0) = 0;
            LOCK();
            *(undefined8 *)(lVar7 + 8) = 0;
            UNLOCK();
          }
          plVar13 = plVar13 + 1;
          embree::MutexSys::unlock();
          if (plVar11 == plVar13) goto LAB_00114fcf;
        }
        plVar13 = plVar13 + 1;
      } while (plVar11 != plVar13);
LAB_00114fcf:
      if (*(long *)(lVar9 + 0x1a8) != *(long *)(lVar9 + 0x1b0)) {
        *(long *)(lVar9 + 0x1b0) = *(long *)(lVar9 + 0x1a8);
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* embree::TaskScheduler::ClosureTaskFunction<embree::TaskScheduler::spawn<unsigned long,
   embree::parallel_for<unsigned long,
   embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim, unsigned
   int>::tbbRadixIteration(unsigned int, bool, embree::sse2::BVHBuilderMorton::BuildPrim const*,
   embree::sse2::BVHBuilderMorton::BuildPrim*, unsigned long)::{lambda(unsigned long)#2}>(unsigned
   long, embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim, unsigned
   int>::tbbRadixIteration(unsigned int, bool, embree::sse2::BVHBuilderMorton::BuildPrim const*,
   embree::sse2::BVHBuilderMorton::BuildPrim*, unsigned long)::{lambda(unsigned long)#2}
   const&)::{lambda(embree::range<unsigned long> const&)#1}>(unsigned long, unsigned long, unsigned
   long, embree::parallel_for<unsigned long,
   embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim, unsigned
   int>::tbbRadixIteration(unsigned int, bool, embree::sse2::BVHBuilderMorton::BuildPrim const*,
   embree::sse2::BVHBuilderMorton::BuildPrim*, unsigned long)::{lambda(unsigned long)#2}>(unsigned
   long, embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim, unsigned
   int>::tbbRadixIteration(unsigned int, bool, embree::sse2::BVHBuilderMorton::BuildPrim const*,
   embree::sse2::BVHBuilderMorton::BuildPrim*, unsigned long)::{lambda(unsigned long)#2}
   const&)::{lambda(embree::range<unsigned long> const&)#1} const&,
   embree::TaskScheduler::TaskGroupContext*)::{lambda()#1}>::execute() */

void __thiscall
embree::TaskScheduler::
ClosureTaskFunction<embree::TaskScheduler::spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::{lambda(unsigned_long)#2}>(unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::{lambda(unsigned_long)#2}const&)::{lambda(embree::range<unsigned_long>const&)#1}>(unsigned_long,unsigned_long,unsigned_long,embree::parallel_for<unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::{lambda(unsigned_long)#2}>(unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::{lambda(unsigned_long)#2}const&)::{lambda(embree::range<unsigned_long>const&)#1}const&,embree::TaskScheduler::TaskGroupContext*)::{lambda()#1}>
::execute(ClosureTaskFunction<embree::TaskScheduler::spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::_lambda(unsigned_long)_2_>(unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::_lambda(unsigned_long)_2_const&)::_lambda(embree::range<unsigned_long>const&)_1_>(unsigned_long,unsigned_long,unsigned_long,embree::parallel_for<unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::_lambda(unsigned_long)_2_>(unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::_lambda(unsigned_long)_2_const&)::_lambda(embree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
          *this)

{
  int *piVar1;
  undefined8 *puVar2;
  TaskGroupContext *pTVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  TaskScheduler *pTVar10;
  ulong uVar11;
  long in_FS_OFFSET;
  long local_88;
  ulong uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  TaskGroupContext *local_68;
  ulong local_58;
  long lStack_50;
  ulong local_48;
  undefined8 *puStack_40;
  TaskGroupContext *local_38;
  long local_30;
  
  lVar8 = *(long *)(this + 0x10);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  puVar2 = *(undefined8 **)(this + 0x20);
  if (*(ulong *)(this + 0x18) < (ulong)(*(long *)(this + 8) - lVar8)) {
    pTVar3 = *(TaskGroupContext **)(this + 0x28);
    uVar11 = (ulong)(*(long *)(this + 8) + lVar8) >> 1;
    local_58 = uVar11;
    lStack_50 = lVar8;
    local_48 = *(ulong *)(this + 0x18);
    puStack_40 = puVar2;
    local_38 = pTVar3;
    lVar5 = embree::TaskScheduler::thread();
    if (lVar5 == 0) {
      pTVar10 = (TaskScheduler *)embree::TaskScheduler::instance();
      spawn_root<embree::TaskScheduler::spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::_lambda(unsigned_long)_2_>(unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::_lambda(unsigned_long)_2_const&)::_lambda(embree::range<unsigned_long>const&)_1_>(unsigned_long,unsigned_long,unsigned_long,embree::parallel_for<unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::_lambda(unsigned_long)_2_>(unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::_lambda(unsigned_long)_2_const&)::_lambda(embree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
                (pTVar10,(_lambda___1_ *)&local_58,pTVar3,uVar11 - lVar8,true);
    }
    else {
      if (0xfff < *(ulong *)(lVar5 + 0x40080)) goto LAB_00115a66;
      lVar4 = *(long *)(lVar5 + 0xc00c0);
      uVar7 = lVar4 + 0x30 + (ulong)(-(int)lVar4 & 0x3f);
      if (0x80000 < uVar7) goto LAB_00115a66;
      *(ulong *)(lVar5 + 0xc00c0) = uVar7;
      puVar2 = (undefined8 *)(lVar5 + 0x40090 + uVar7);
      *puVar2 = &PTR_execute_001172a0;
      puVar2[1] = local_58;
      puVar2[2] = lStack_50;
      puVar2[5] = local_38;
      puVar2[3] = local_48;
      puVar2[4] = puStack_40;
      lVar6 = *(long *)(lVar5 + 0x40080) * 0x40;
      piVar1 = (int *)(lVar5 + 0x40 + lVar6);
      lVar9 = *(long *)(lVar5 + 0xc0100);
      *(undefined4 *)(lVar5 + 0x44 + lVar6) = 1;
      *(undefined1 *)(lVar5 + 0x48 + lVar6) = 1;
      lVar6 = lVar6 + lVar5;
      *(undefined8 **)(lVar6 + 0x50) = puVar2;
      *(long *)(lVar6 + 0x58) = lVar9;
      *(TaskGroupContext **)(lVar6 + 0x60) = pTVar3;
      *(long *)(lVar6 + 0x68) = lVar4;
      *(ulong *)(lVar6 + 0x70) = uVar11 - lVar8;
      if (lVar9 != 0) {
        LOCK();
        *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
        UNLOCK();
      }
      LOCK();
      if (*piVar1 == 0) {
        *piVar1 = 1;
      }
      UNLOCK();
      LOCK();
      *(long *)(lVar5 + 0x40080) = *(long *)(lVar5 + 0x40080) + 1;
      UNLOCK();
      if (*(long *)(lVar5 + 0x40080) - 1U <= *(ulong *)(lVar5 + 0x40040)) {
        LOCK();
        *(long *)(lVar5 + 0x40040) = *(long *)(lVar5 + 0x40080) + -1;
        UNLOCK();
      }
    }
    local_88 = *(long *)(this + 8);
    uStack_70 = *(undefined8 *)(this + 0x20);
    pTVar3 = *(TaskGroupContext **)(this + 0x28);
    local_78 = *(undefined8 *)(this + 0x18);
    uVar7 = local_88 - uVar11;
    uStack_80 = uVar11;
    local_68 = pTVar3;
    lVar8 = embree::TaskScheduler::thread();
    if (lVar8 == 0) {
      pTVar10 = (TaskScheduler *)embree::TaskScheduler::instance();
      spawn_root<embree::TaskScheduler::spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::_lambda(unsigned_long)_2_>(unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::_lambda(unsigned_long)_2_const&)::_lambda(embree::range<unsigned_long>const&)_1_>(unsigned_long,unsigned_long,unsigned_long,embree::parallel_for<unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::_lambda(unsigned_long)_2_>(unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::_lambda(unsigned_long)_2_const&)::_lambda(embree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
                (pTVar10,(_lambda___1_ *)&local_88,pTVar3,uVar7,true);
    }
    else {
      if (0xfff < *(ulong *)(lVar8 + 0x40080)) {
LAB_00115a66:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar5 = *(long *)(lVar8 + 0xc00c0);
      uVar11 = lVar5 + 0x30 + (ulong)(-(int)lVar5 & 0x3f);
      if (0x80000 < uVar11) goto LAB_00115a66;
      *(ulong *)(lVar8 + 0xc00c0) = uVar11;
      puVar2 = (undefined8 *)(lVar8 + 0x40090 + uVar11);
      *puVar2 = &PTR_execute_001172a0;
      puVar2[1] = local_88;
      puVar2[2] = uStack_80;
      puVar2[5] = local_68;
      puVar2[3] = local_78;
      puVar2[4] = uStack_70;
      lVar9 = *(long *)(lVar8 + 0x40080) * 0x40;
      piVar1 = (int *)(lVar8 + 0x40 + lVar9);
      lVar4 = *(long *)(lVar8 + 0xc0100);
      *(undefined4 *)(lVar8 + 0x44 + lVar9) = 1;
      *(undefined1 *)(lVar8 + 0x48 + lVar9) = 1;
      lVar9 = lVar9 + lVar8;
      *(undefined8 **)(lVar9 + 0x50) = puVar2;
      *(long *)(lVar9 + 0x58) = lVar4;
      *(TaskGroupContext **)(lVar9 + 0x60) = pTVar3;
      *(long *)(lVar9 + 0x68) = lVar5;
      *(ulong *)(lVar9 + 0x70) = uVar7;
      if (lVar4 != 0) {
        LOCK();
        *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + 1;
        UNLOCK();
      }
      LOCK();
      if (*piVar1 == 0) {
        *piVar1 = 1;
      }
      UNLOCK();
      LOCK();
      *(long *)(lVar8 + 0x40080) = *(long *)(lVar8 + 0x40080) + 1;
      UNLOCK();
      if (*(long *)(lVar8 + 0x40080) - 1U <= *(ulong *)(lVar8 + 0x40040)) {
        LOCK();
        *(long *)(lVar8 + 0x40040) = *(long *)(lVar8 + 0x40080) + -1;
        UNLOCK();
      }
    }
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      embree::TaskScheduler::wait();
      return;
    }
  }
  else {
    ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration1
              ((uint)*(undefined8 *)puVar2[4],(BuildPrim *)((undefined8 *)puVar2[4])[3],
               (BuildPrim *)(ulong)*(uint *)*puVar2,*(ulong *)puVar2[1],*(ulong *)puVar2[2]);
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */
/* embree::sse2::BVHNMeshBuilderMorton<4, embree::TriangleMesh, embree::TriangleM<4>
   >::~BVHNMeshBuilderMorton() */

void __thiscall
embree::sse2::BVHNMeshBuilderMorton<4,embree::TriangleMesh,embree::TriangleM<4>>::
~BVHNMeshBuilderMorton(BVHNMeshBuilderMorton<4,embree::TriangleMesh,embree::TriangleM<4>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* embree::sse2::BVHNMeshBuilderMorton<4, embree::TriangleMesh, embree::TriangleMv<4>
   >::~BVHNMeshBuilderMorton() */

void __thiscall
embree::sse2::BVHNMeshBuilderMorton<4,embree::TriangleMesh,embree::TriangleMv<4>>::
~BVHNMeshBuilderMorton(BVHNMeshBuilderMorton<4,embree::TriangleMesh,embree::TriangleMv<4>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* embree::sse2::BVHNMeshBuilderMorton<4, embree::TriangleMesh, embree::TriangleMi<4>
   >::~BVHNMeshBuilderMorton() */

void __thiscall
embree::sse2::BVHNMeshBuilderMorton<4,embree::TriangleMesh,embree::TriangleMi<4>>::
~BVHNMeshBuilderMorton(BVHNMeshBuilderMorton<4,embree::TriangleMesh,embree::TriangleMi<4>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



