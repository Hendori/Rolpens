
void oc_frag_copy_mmx(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = (long)param_3;
  uVar1 = *(undefined8 *)((long)param_2 + lVar5);
  lVar4 = lVar5 * 3;
  uVar2 = *(undefined8 *)((long)param_2 + lVar5 * 2);
  uVar3 = *(undefined8 *)((long)param_2 + lVar4);
  *param_1 = *param_2;
  *(undefined8 *)((long)param_1 + lVar5) = uVar1;
  param_2 = (undefined8 *)((long)param_2 + lVar5 * 4);
  *(undefined8 *)((long)param_1 + lVar5 * 2) = uVar2;
  *(undefined8 *)((long)param_1 + lVar4) = uVar3;
  param_1 = (undefined8 *)((long)param_1 + lVar5 * 4);
  uVar1 = *(undefined8 *)((long)param_2 + lVar5);
  uVar2 = *(undefined8 *)((long)param_2 + lVar5 * 2);
  uVar3 = *(undefined8 *)((long)param_2 + lVar4);
  *param_1 = *param_2;
  *(undefined8 *)((long)param_1 + lVar5) = uVar1;
  *(undefined8 *)((long)param_1 + lVar5 * 2) = uVar2;
  *(undefined8 *)((long)param_1 + lVar4) = uVar3;
  return;
}



void oc_frag_copy_list_mmx
               (long param_1,long param_2,int param_3,long param_4,long param_5,long param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  
  if (0 < param_5) {
    lVar7 = (long)param_3;
    lVar8 = 0;
    do {
      lVar5 = *(long *)(param_6 + *(long *)(param_4 + lVar8 * 8) * 8);
      puVar1 = (undefined8 *)(param_2 + lVar5);
      puVar6 = (undefined8 *)(lVar5 + param_1);
      uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
      lVar5 = lVar7 * 3;
      uVar3 = *(undefined8 *)((long)puVar1 + lVar7 * 2);
      uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
      *puVar6 = *puVar1;
      *(undefined8 *)((long)puVar6 + lVar7) = uVar2;
      puVar1 = (undefined8 *)((long)puVar1 + lVar7 * 4);
      *(undefined8 *)((long)puVar6 + lVar7 * 2) = uVar3;
      *(undefined8 *)((long)puVar6 + lVar5) = uVar4;
      puVar6 = (undefined8 *)((long)puVar6 + lVar7 * 4);
      uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
      uVar3 = *(undefined8 *)((long)puVar1 + lVar7 * 2);
      uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
      *puVar6 = *puVar1;
      *(undefined8 *)((long)puVar6 + lVar7) = uVar2;
      *(undefined8 *)((long)puVar6 + lVar7 * 2) = uVar3;
      *(undefined8 *)((long)puVar6 + lVar5) = uVar4;
      lVar8 = lVar8 + 1;
    } while (param_5 != lVar8);
    return;
  }
  return;
}



void oc_frag_recon_intra_mmx(undefined8 *param_1,int param_2,undefined8 *param_3)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  short sVar23;
  short sVar24;
  long lVar25;
  undefined8 *puVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  
  lVar25 = (long)param_2;
  puVar26 = (undefined8 *)((long)(param_2 << 2) + (long)param_1);
  uVar27 = psllw(0xffffffffffffffff,0xf);
  uVar27 = CONCAT26((ushort)((ulong)uVar27 >> 0x38),
                    CONCAT24((ushort)((ulong)uVar27 >> 0x20) >> 8,
                             CONCAT22((ushort)((ulong)uVar27 >> 0x10) >> 8,(ushort)uVar27 >> 8)));
  uVar28 = paddsw(*param_3,uVar27);
  uVar29 = paddsw(param_3[1],uVar27);
  sVar1 = (short)uVar28;
  sVar4 = (short)((ulong)uVar28 >> 0x10);
  sVar7 = (short)((ulong)uVar28 >> 0x20);
  sVar10 = (short)((ulong)uVar28 >> 0x30);
  sVar13 = (short)uVar29;
  sVar16 = (short)((ulong)uVar29 >> 0x10);
  sVar19 = (short)((ulong)uVar29 >> 0x20);
  sVar22 = (short)((ulong)uVar29 >> 0x30);
  uVar30 = paddsw(param_3[2],uVar27);
  uVar31 = paddsw(param_3[3],uVar27);
  sVar2 = (short)uVar30;
  sVar5 = (short)((ulong)uVar30 >> 0x10);
  sVar8 = (short)((ulong)uVar30 >> 0x20);
  sVar11 = (short)((ulong)uVar30 >> 0x30);
  sVar14 = (short)uVar31;
  sVar17 = (short)((ulong)uVar31 >> 0x10);
  sVar20 = (short)((ulong)uVar31 >> 0x20);
  sVar23 = (short)((ulong)uVar31 >> 0x30);
  uVar32 = paddsw(param_3[4],uVar27);
  uVar33 = paddsw(param_3[5],uVar27);
  sVar3 = (short)uVar32;
  sVar6 = (short)((ulong)uVar32 >> 0x10);
  sVar9 = (short)((ulong)uVar32 >> 0x20);
  sVar12 = (short)((ulong)uVar32 >> 0x30);
  sVar15 = (short)uVar33;
  sVar18 = (short)((ulong)uVar33 >> 0x10);
  sVar21 = (short)((ulong)uVar33 >> 0x20);
  sVar24 = (short)((ulong)uVar33 >> 0x30);
  *param_1 = CONCAT17((0 < sVar22) * (sVar22 < 0x100) * (char)((ulong)uVar29 >> 0x30) -
                      (0xff < sVar22),
                      CONCAT16((0 < sVar19) * (sVar19 < 0x100) * (char)((ulong)uVar29 >> 0x20) -
                               (0xff < sVar19),
                               CONCAT15((0 < sVar16) * (sVar16 < 0x100) *
                                        (char)((ulong)uVar29 >> 0x10) - (0xff < sVar16),
                                        CONCAT14((0 < sVar13) * (sVar13 < 0x100) * (char)uVar29 -
                                                 (0xff < sVar13),
                                                 CONCAT13((0 < sVar10) * (sVar10 < 0x100) *
                                                          (char)((ulong)uVar28 >> 0x30) -
                                                          (0xff < sVar10),
                                                          CONCAT12((0 < sVar7) * (sVar7 < 0x100) *
                                                                   (char)((ulong)uVar28 >> 0x20) -
                                                                   (0xff < sVar7),
                                                                   CONCAT11((0 < sVar4) *
                                                                            (sVar4 < 0x100) *
                                                                            (char)((ulong)uVar28 >>
                                                                                  0x10) -
                                                                            (0xff < sVar4),
                                                                            (0 < sVar1) *
                                                                            (sVar1 < 0x100) *
                                                                            (char)uVar28 -
                                                                            (0xff < sVar1))))))));
  *(ulong *)((long)param_1 + lVar25) =
       CONCAT17((0 < sVar23) * (sVar23 < 0x100) * (char)((ulong)uVar31 >> 0x30) - (0xff < sVar23),
                CONCAT16((0 < sVar20) * (sVar20 < 0x100) * (char)((ulong)uVar31 >> 0x20) -
                         (0xff < sVar20),
                         CONCAT15((0 < sVar17) * (sVar17 < 0x100) * (char)((ulong)uVar31 >> 0x10) -
                                  (0xff < sVar17),
                                  CONCAT14((0 < sVar14) * (sVar14 < 0x100) * (char)uVar31 -
                                           (0xff < sVar14),
                                           CONCAT13((0 < sVar11) * (sVar11 < 0x100) *
                                                    (char)((ulong)uVar30 >> 0x30) - (0xff < sVar11),
                                                    CONCAT12((0 < sVar8) * (sVar8 < 0x100) *
                                                             (char)((ulong)uVar30 >> 0x20) -
                                                             (0xff < sVar8),
                                                             CONCAT11((0 < sVar5) * (sVar5 < 0x100)
                                                                      * (char)((ulong)uVar30 >> 0x10
                                                                              ) - (0xff < sVar5),
                                                                      (0 < sVar2) * (sVar2 < 0x100)
                                                                      * (char)uVar30 -
                                                                      (0xff < sVar2))))))));
  *(ulong *)((long)param_1 + lVar25 * 2) =
       CONCAT17((0 < sVar24) * (sVar24 < 0x100) * (char)((ulong)uVar33 >> 0x30) - (0xff < sVar24),
                CONCAT16((0 < sVar21) * (sVar21 < 0x100) * (char)((ulong)uVar33 >> 0x20) -
                         (0xff < sVar21),
                         CONCAT15((0 < sVar18) * (sVar18 < 0x100) * (char)((ulong)uVar33 >> 0x10) -
                                  (0xff < sVar18),
                                  CONCAT14((0 < sVar15) * (sVar15 < 0x100) * (char)uVar33 -
                                           (0xff < sVar15),
                                           CONCAT13((0 < sVar12) * (sVar12 < 0x100) *
                                                    (char)((ulong)uVar32 >> 0x30) - (0xff < sVar12),
                                                    CONCAT12((0 < sVar9) * (sVar9 < 0x100) *
                                                             (char)((ulong)uVar32 >> 0x20) -
                                                             (0xff < sVar9),
                                                             CONCAT11((0 < sVar6) * (sVar6 < 0x100)
                                                                      * (char)((ulong)uVar32 >> 0x10
                                                                              ) - (0xff < sVar6),
                                                                      (0 < sVar3) * (sVar3 < 0x100)
                                                                      * (char)uVar32 -
                                                                      (0xff < sVar3))))))));
  uVar28 = paddsw(param_3[6],uVar27);
  uVar29 = paddsw(param_3[7],uVar27);
  sVar1 = (short)uVar28;
  sVar4 = (short)((ulong)uVar28 >> 0x10);
  sVar7 = (short)((ulong)uVar28 >> 0x20);
  sVar10 = (short)((ulong)uVar28 >> 0x30);
  sVar13 = (short)uVar29;
  sVar16 = (short)((ulong)uVar29 >> 0x10);
  sVar19 = (short)((ulong)uVar29 >> 0x20);
  sVar22 = (short)((ulong)uVar29 >> 0x30);
  uVar30 = paddsw(param_3[8],uVar27);
  uVar31 = paddsw(param_3[9],uVar27);
  sVar2 = (short)uVar30;
  sVar5 = (short)((ulong)uVar30 >> 0x10);
  sVar8 = (short)((ulong)uVar30 >> 0x20);
  sVar11 = (short)((ulong)uVar30 >> 0x30);
  sVar14 = (short)uVar31;
  sVar17 = (short)((ulong)uVar31 >> 0x10);
  sVar20 = (short)((ulong)uVar31 >> 0x20);
  sVar23 = (short)((ulong)uVar31 >> 0x30);
  uVar32 = paddsw(param_3[10],uVar27);
  uVar33 = paddsw(param_3[0xb],uVar27);
  sVar3 = (short)uVar32;
  sVar6 = (short)((ulong)uVar32 >> 0x10);
  sVar9 = (short)((ulong)uVar32 >> 0x20);
  sVar12 = (short)((ulong)uVar32 >> 0x30);
  sVar15 = (short)uVar33;
  sVar18 = (short)((ulong)uVar33 >> 0x10);
  sVar21 = (short)((ulong)uVar33 >> 0x20);
  sVar24 = (short)((ulong)uVar33 >> 0x30);
  *(ulong *)((long)param_1 + lVar25 * 3) =
       CONCAT17((0 < sVar22) * (sVar22 < 0x100) * (char)((ulong)uVar29 >> 0x30) - (0xff < sVar22),
                CONCAT16((0 < sVar19) * (sVar19 < 0x100) * (char)((ulong)uVar29 >> 0x20) -
                         (0xff < sVar19),
                         CONCAT15((0 < sVar16) * (sVar16 < 0x100) * (char)((ulong)uVar29 >> 0x10) -
                                  (0xff < sVar16),
                                  CONCAT14((0 < sVar13) * (sVar13 < 0x100) * (char)uVar29 -
                                           (0xff < sVar13),
                                           CONCAT13((0 < sVar10) * (sVar10 < 0x100) *
                                                    (char)((ulong)uVar28 >> 0x30) - (0xff < sVar10),
                                                    CONCAT12((0 < sVar7) * (sVar7 < 0x100) *
                                                             (char)((ulong)uVar28 >> 0x20) -
                                                             (0xff < sVar7),
                                                             CONCAT11((0 < sVar4) * (sVar4 < 0x100)
                                                                      * (char)((ulong)uVar28 >> 0x10
                                                                              ) - (0xff < sVar4),
                                                                      (0 < sVar1) * (sVar1 < 0x100)
                                                                      * (char)uVar28 -
                                                                      (0xff < sVar1))))))));
  *puVar26 = CONCAT17((0 < sVar23) * (sVar23 < 0x100) * (char)((ulong)uVar31 >> 0x30) -
                      (0xff < sVar23),
                      CONCAT16((0 < sVar20) * (sVar20 < 0x100) * (char)((ulong)uVar31 >> 0x20) -
                               (0xff < sVar20),
                               CONCAT15((0 < sVar17) * (sVar17 < 0x100) *
                                        (char)((ulong)uVar31 >> 0x10) - (0xff < sVar17),
                                        CONCAT14((0 < sVar14) * (sVar14 < 0x100) * (char)uVar31 -
                                                 (0xff < sVar14),
                                                 CONCAT13((0 < sVar11) * (sVar11 < 0x100) *
                                                          (char)((ulong)uVar30 >> 0x30) -
                                                          (0xff < sVar11),
                                                          CONCAT12((0 < sVar8) * (sVar8 < 0x100) *
                                                                   (char)((ulong)uVar30 >> 0x20) -
                                                                   (0xff < sVar8),
                                                                   CONCAT11((0 < sVar5) *
                                                                            (sVar5 < 0x100) *
                                                                            (char)((ulong)uVar30 >>
                                                                                  0x10) -
                                                                            (0xff < sVar5),
                                                                            (0 < sVar2) *
                                                                            (sVar2 < 0x100) *
                                                                            (char)uVar30 -
                                                                            (0xff < sVar2))))))));
  *(ulong *)((long)puVar26 + lVar25) =
       CONCAT17((0 < sVar24) * (sVar24 < 0x100) * (char)((ulong)uVar33 >> 0x30) - (0xff < sVar24),
                CONCAT16((0 < sVar21) * (sVar21 < 0x100) * (char)((ulong)uVar33 >> 0x20) -
                         (0xff < sVar21),
                         CONCAT15((0 < sVar18) * (sVar18 < 0x100) * (char)((ulong)uVar33 >> 0x10) -
                                  (0xff < sVar18),
                                  CONCAT14((0 < sVar15) * (sVar15 < 0x100) * (char)uVar33 -
                                           (0xff < sVar15),
                                           CONCAT13((0 < sVar12) * (sVar12 < 0x100) *
                                                    (char)((ulong)uVar32 >> 0x30) - (0xff < sVar12),
                                                    CONCAT12((0 < sVar9) * (sVar9 < 0x100) *
                                                             (char)((ulong)uVar32 >> 0x20) -
                                                             (0xff < sVar9),
                                                             CONCAT11((0 < sVar6) * (sVar6 < 0x100)
                                                                      * (char)((ulong)uVar32 >> 0x10
                                                                              ) - (0xff < sVar6),
                                                                      (0 < sVar3) * (sVar3 < 0x100)
                                                                      * (char)uVar32 -
                                                                      (0xff < sVar3))))))));
  uVar28 = paddsw(param_3[0xc],uVar27);
  uVar29 = paddsw(param_3[0xd],uVar27);
  sVar1 = (short)uVar28;
  sVar3 = (short)((ulong)uVar28 >> 0x10);
  sVar5 = (short)((ulong)uVar28 >> 0x20);
  sVar7 = (short)((ulong)uVar28 >> 0x30);
  sVar9 = (short)uVar29;
  sVar11 = (short)((ulong)uVar29 >> 0x10);
  sVar13 = (short)((ulong)uVar29 >> 0x20);
  sVar15 = (short)((ulong)uVar29 >> 0x30);
  uVar30 = paddsw(param_3[0xe],uVar27);
  uVar27 = paddsw(param_3[0xf],uVar27);
  sVar2 = (short)uVar30;
  sVar4 = (short)((ulong)uVar30 >> 0x10);
  sVar6 = (short)((ulong)uVar30 >> 0x20);
  sVar8 = (short)((ulong)uVar30 >> 0x30);
  sVar10 = (short)uVar27;
  sVar12 = (short)((ulong)uVar27 >> 0x10);
  sVar14 = (short)((ulong)uVar27 >> 0x20);
  sVar16 = (short)((ulong)uVar27 >> 0x30);
  *(ulong *)((long)puVar26 + lVar25 * 2) =
       CONCAT17((0 < sVar15) * (sVar15 < 0x100) * (char)((ulong)uVar29 >> 0x30) - (0xff < sVar15),
                CONCAT16((0 < sVar13) * (sVar13 < 0x100) * (char)((ulong)uVar29 >> 0x20) -
                         (0xff < sVar13),
                         CONCAT15((0 < sVar11) * (sVar11 < 0x100) * (char)((ulong)uVar29 >> 0x10) -
                                  (0xff < sVar11),
                                  CONCAT14((0 < sVar9) * (sVar9 < 0x100) * (char)uVar29 -
                                           (0xff < sVar9),
                                           CONCAT13((0 < sVar7) * (sVar7 < 0x100) *
                                                    (char)((ulong)uVar28 >> 0x30) - (0xff < sVar7),
                                                    CONCAT12((0 < sVar5) * (sVar5 < 0x100) *
                                                             (char)((ulong)uVar28 >> 0x20) -
                                                             (0xff < sVar5),
                                                             CONCAT11((0 < sVar3) * (sVar3 < 0x100)
                                                                      * (char)((ulong)uVar28 >> 0x10
                                                                              ) - (0xff < sVar3),
                                                                      (0 < sVar1) * (sVar1 < 0x100)
                                                                      * (char)uVar28 -
                                                                      (0xff < sVar1))))))));
  *(ulong *)((long)puVar26 + lVar25 * 3) =
       CONCAT17((0 < sVar16) * (sVar16 < 0x100) * (char)((ulong)uVar27 >> 0x30) - (0xff < sVar16),
                CONCAT16((0 < sVar14) * (sVar14 < 0x100) * (char)((ulong)uVar27 >> 0x20) -
                         (0xff < sVar14),
                         CONCAT15((0 < sVar12) * (sVar12 < 0x100) * (char)((ulong)uVar27 >> 0x10) -
                                  (0xff < sVar12),
                                  CONCAT14((0 < sVar10) * (sVar10 < 0x100) * (char)uVar27 -
                                           (0xff < sVar10),
                                           CONCAT13((0 < sVar8) * (sVar8 < 0x100) *
                                                    (char)((ulong)uVar30 >> 0x30) - (0xff < sVar8),
                                                    CONCAT12((0 < sVar6) * (sVar6 < 0x100) *
                                                             (char)((ulong)uVar30 >> 0x20) -
                                                             (0xff < sVar6),
                                                             CONCAT11((0 < sVar4) * (sVar4 < 0x100)
                                                                      * (char)((ulong)uVar30 >> 0x10
                                                                              ) - (0xff < sVar4),
                                                                      (0 < sVar2) * (sVar2 < 0x100)
                                                                      * (char)uVar30 -
                                                                      (0xff < sVar2))))))));
  return;
}



void oc_frag_recon_inter_mmx
               (undefined8 *param_1,undefined8 *param_2,int param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  int iVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  
  iVar18 = 4;
  lVar19 = (long)param_3;
  do {
    uVar20 = *param_2;
    uVar1 = *(undefined8 *)((long)param_2 + lVar19);
    uVar22 = paddsw((ulong)CONCAT16((char)((ulong)uVar20 >> 0x38),
                                    (uint6)CONCAT14((char)((ulong)uVar20 >> 0x30),
                                                    (uint)CONCAT12((char)((ulong)uVar20 >> 0x28),
                                                                   (ushort)(byte)((ulong)uVar20 >>
                                                                                 0x20)))),param_4[1]
                   );
    uVar21 = paddsw((ulong)CONCAT52((int5)(CONCAT43((int)(((uint7)CONCAT21((short)(((uint7)(byte)((
                                                  ulong)uVar20 >> 0x18) << 0x30) >> 0x28),
                                                  (char)((ulong)uVar20 >> 0x10)) << 0x20) >> 0x18),
                                                  CONCAT12((char)((ulong)uVar20 >> 8),(short)uVar20)
                                                  ) >> 0x10),(short)uVar20) & 0xffff00ff00ff00ff,
                    *param_4);
    sVar2 = (short)uVar21;
    sVar4 = (short)((ulong)uVar21 >> 0x10);
    sVar6 = (short)((ulong)uVar21 >> 0x20);
    sVar8 = (short)((ulong)uVar21 >> 0x30);
    sVar10 = (short)uVar22;
    sVar12 = (short)((ulong)uVar22 >> 0x10);
    sVar14 = (short)((ulong)uVar22 >> 0x20);
    sVar16 = (short)((ulong)uVar22 >> 0x30);
    uVar23 = paddsw((ulong)CONCAT52((int5)(CONCAT43((int)(((uint7)CONCAT21((short)(((uint7)(byte)((
                                                  ulong)uVar1 >> 0x18) << 0x30) >> 0x28),
                                                  (char)((ulong)uVar1 >> 0x10)) << 0x20) >> 0x18),
                                                  CONCAT12((char)((ulong)uVar1 >> 8),(short)uVar1))
                                          >> 0x10),(short)uVar1) & 0xffff00ff00ff00ff,param_4[2]);
    uVar20 = paddsw((ulong)CONCAT16((char)((ulong)uVar1 >> 0x38),
                                    (uint6)CONCAT14((char)((ulong)uVar1 >> 0x30),
                                                    (uint)CONCAT12((char)((ulong)uVar1 >> 0x28),
                                                                   (ushort)(byte)((ulong)uVar1 >>
                                                                                 0x20)))),param_4[3]
                   );
    param_4 = param_4 + 4;
    sVar3 = (short)uVar23;
    sVar5 = (short)((ulong)uVar23 >> 0x10);
    sVar7 = (short)((ulong)uVar23 >> 0x20);
    sVar9 = (short)((ulong)uVar23 >> 0x30);
    sVar11 = (short)uVar20;
    sVar13 = (short)((ulong)uVar20 >> 0x10);
    sVar15 = (short)((ulong)uVar20 >> 0x20);
    sVar17 = (short)((ulong)uVar20 >> 0x30);
    param_2 = (undefined8 *)((long)param_2 + lVar19 * 2);
    *param_1 = CONCAT17((0 < sVar16) * (sVar16 < 0x100) * (char)((ulong)uVar22 >> 0x30) -
                        (0xff < sVar16),
                        CONCAT16((0 < sVar14) * (sVar14 < 0x100) * (char)((ulong)uVar22 >> 0x20) -
                                 (0xff < sVar14),
                                 CONCAT15((0 < sVar12) * (sVar12 < 0x100) *
                                          (char)((ulong)uVar22 >> 0x10) - (0xff < sVar12),
                                          CONCAT14((0 < sVar10) * (sVar10 < 0x100) * (char)uVar22 -
                                                   (0xff < sVar10),
                                                   CONCAT13((0 < sVar8) * (sVar8 < 0x100) *
                                                            (char)((ulong)uVar21 >> 0x30) -
                                                            (0xff < sVar8),
                                                            CONCAT12((0 < sVar6) * (sVar6 < 0x100) *
                                                                     (char)((ulong)uVar21 >> 0x20) -
                                                                     (0xff < sVar6),
                                                                     CONCAT11((0 < sVar4) *
                                                                              (sVar4 < 0x100) *
                                                                              (char)((ulong)uVar21
                                                                                    >> 0x10) -
                                                                              (0xff < sVar4),
                                                                              (0 < sVar2) *
                                                                              (sVar2 < 0x100) *
                                                                              (char)uVar21 -
                                                                              (0xff < sVar2))))))));
    *(ulong *)((long)param_1 + lVar19) =
         CONCAT17((0 < sVar17) * (sVar17 < 0x100) * (char)((ulong)uVar20 >> 0x30) - (0xff < sVar17),
                  CONCAT16((0 < sVar15) * (sVar15 < 0x100) * (char)((ulong)uVar20 >> 0x20) -
                           (0xff < sVar15),
                           CONCAT15((0 < sVar13) * (sVar13 < 0x100) * (char)((ulong)uVar20 >> 0x10)
                                    - (0xff < sVar13),
                                    CONCAT14((0 < sVar11) * (sVar11 < 0x100) * (char)uVar20 -
                                             (0xff < sVar11),
                                             CONCAT13((0 < sVar9) * (sVar9 < 0x100) *
                                                      (char)((ulong)uVar23 >> 0x30) - (0xff < sVar9)
                                                      ,CONCAT12((0 < sVar7) * (sVar7 < 0x100) *
                                                                (char)((ulong)uVar23 >> 0x20) -
                                                                (0xff < sVar7),
                                                                CONCAT11((0 < sVar5) *
                                                                         (sVar5 < 0x100) *
                                                                         (char)((ulong)uVar23 >>
                                                                               0x10) -
                                                                         (0xff < sVar5),
                                                                         (0 < sVar3) *
                                                                         (sVar3 < 0x100) *
                                                                         (char)uVar23 -
                                                                         (0xff < sVar3))))))));
    param_1 = (undefined8 *)((long)param_1 + lVar19 * 2);
    iVar18 = iVar18 + -1;
  } while (iVar18 != 0);
  return;
}



void oc_frag_recon_inter2_mmx
               (undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,int param_4,
               undefined8 *param_5)

{
  undefined8 uVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  long lVar10;
  int iVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  iVar11 = 4;
  lVar10 = (long)param_4;
  do {
    uVar13 = *param_2;
    uVar14 = *param_3;
    uVar15 = *(undefined8 *)((long)param_2 + lVar10);
    uVar1 = *(undefined8 *)((long)param_3 + lVar10);
    param_2 = (undefined8 *)((long)param_2 + lVar10 * 2);
    param_3 = (undefined8 *)((long)param_3 + lVar10 * 2);
    uVar12 = paddsw((ulong)CONCAT52(CONCAT41((int)(((uint7)CONCAT21((short)(((uint7)(byte)((ulong)
                                                  uVar13 >> 0x18) << 0x30) >> 0x28),
                                                  (char)((ulong)uVar13 >> 0x10)) << 0x20) >> 0x18),
                                             (char)((ulong)uVar13 >> 8)),(ushort)(byte)uVar13),
                    (ulong)CONCAT52((int5)(CONCAT43((int)(((uint7)CONCAT21((short)(((uint7)(byte)((
                                                  ulong)uVar14 >> 0x18) << 0x30) >> 0x28),
                                                  (char)((ulong)uVar14 >> 0x10)) << 0x20) >> 0x18),
                                                  CONCAT12((char)((ulong)uVar14 >> 8),(short)uVar14)
                                                  ) >> 0x10),(short)uVar14) & 0xffff00ff00ff00ff);
    uVar14 = paddsw((ulong)CONCAT16((char)((ulong)uVar13 >> 0x38),
                                    (uint6)CONCAT14((char)((ulong)uVar13 >> 0x30),
                                                    (uint)CONCAT12((char)((ulong)uVar13 >> 0x28),
                                                                   (ushort)(byte)((ulong)uVar13 >>
                                                                                 0x20)))),
                    (ulong)CONCAT16((char)((ulong)uVar14 >> 0x38),
                                    (uint6)CONCAT14((char)((ulong)uVar14 >> 0x30),
                                                    (uint)CONCAT12((char)((ulong)uVar14 >> 0x28),
                                                                   (ushort)(byte)((ulong)uVar14 >>
                                                                                 0x20)))));
    uVar13 = psraw(uVar12,1);
    uVar14 = psraw(uVar14,1);
    uVar13 = paddsw(uVar13,*param_5);
    uVar14 = paddsw(uVar14,param_5[1]);
    uVar12 = paddsw((ulong)CONCAT52((int5)(CONCAT43((int)(((uint7)CONCAT21((short)(((uint7)(byte)((
                                                  ulong)uVar1 >> 0x18) << 0x30) >> 0x28),
                                                  (char)((ulong)uVar1 >> 0x10)) << 0x20) >> 0x18),
                                                  CONCAT12((char)((ulong)uVar1 >> 8),(short)uVar1))
                                          >> 0x10),(short)uVar1) & 0xffff00ff00ff00ff,
                    (ulong)CONCAT52(CONCAT41((int)(((uint7)CONCAT21((short)(((uint7)(byte)((ulong)
                                                  uVar15 >> 0x18) << 0x30) >> 0x28),
                                                  (char)((ulong)uVar15 >> 0x10)) << 0x20) >> 0x18),
                                             (char)((ulong)uVar15 >> 8)),(ushort)(byte)uVar15));
    sVar2 = (short)uVar13;
    sVar3 = (short)((ulong)uVar13 >> 0x10);
    sVar4 = (short)((ulong)uVar13 >> 0x20);
    sVar5 = (short)((ulong)uVar13 >> 0x30);
    sVar6 = (short)uVar14;
    sVar7 = (short)((ulong)uVar14 >> 0x10);
    sVar8 = (short)((ulong)uVar14 >> 0x20);
    sVar9 = (short)((ulong)uVar14 >> 0x30);
    uVar15 = paddsw((ulong)CONCAT16((char)((ulong)uVar1 >> 0x38),
                                    (uint6)CONCAT14((char)((ulong)uVar1 >> 0x30),
                                                    (uint)CONCAT12((char)((ulong)uVar1 >> 0x28),
                                                                   (ushort)(byte)((ulong)uVar1 >>
                                                                                 0x20)))),
                    (ulong)CONCAT16((char)((ulong)uVar15 >> 0x38),
                                    (uint6)CONCAT14((char)((ulong)uVar15 >> 0x30),
                                                    (uint)CONCAT12((char)((ulong)uVar15 >> 0x28),
                                                                   (ushort)(byte)((ulong)uVar15 >>
                                                                                 0x20)))));
    *param_1 = CONCAT17((0 < sVar9) * (sVar9 < 0x100) * (char)((ulong)uVar14 >> 0x30) -
                        (0xff < sVar9),
                        CONCAT16((0 < sVar8) * (sVar8 < 0x100) * (char)((ulong)uVar14 >> 0x20) -
                                 (0xff < sVar8),
                                 CONCAT15((0 < sVar7) * (sVar7 < 0x100) *
                                          (char)((ulong)uVar14 >> 0x10) - (0xff < sVar7),
                                          CONCAT14((0 < sVar6) * (sVar6 < 0x100) * (char)uVar14 -
                                                   (0xff < sVar6),
                                                   CONCAT13((0 < sVar5) * (sVar5 < 0x100) *
                                                            (char)((ulong)uVar13 >> 0x30) -
                                                            (0xff < sVar5),
                                                            CONCAT12((0 < sVar4) * (sVar4 < 0x100) *
                                                                     (char)((ulong)uVar13 >> 0x20) -
                                                                     (0xff < sVar4),
                                                                     CONCAT11((0 < sVar3) *
                                                                              (sVar3 < 0x100) *
                                                                              (char)((ulong)uVar13
                                                                                    >> 0x10) -
                                                                              (0xff < sVar3),
                                                                              (0 < sVar2) *
                                                                              (sVar2 < 0x100) *
                                                                              (char)uVar13 -
                                                                              (0xff < sVar2))))))));
    uVar14 = psraw(uVar12,1);
    uVar13 = psraw(uVar15,1);
    uVar14 = paddsw(uVar14,param_5[2]);
    uVar13 = paddsw(uVar13,param_5[3]);
    sVar2 = (short)uVar14;
    sVar3 = (short)((ulong)uVar14 >> 0x10);
    sVar4 = (short)((ulong)uVar14 >> 0x20);
    sVar5 = (short)((ulong)uVar14 >> 0x30);
    sVar6 = (short)uVar13;
    sVar7 = (short)((ulong)uVar13 >> 0x10);
    sVar8 = (short)((ulong)uVar13 >> 0x20);
    sVar9 = (short)((ulong)uVar13 >> 0x30);
    *(ulong *)((long)param_1 + lVar10) =
         CONCAT17((0 < sVar9) * (sVar9 < 0x100) * (char)((ulong)uVar13 >> 0x30) - (0xff < sVar9),
                  CONCAT16((0 < sVar8) * (sVar8 < 0x100) * (char)((ulong)uVar13 >> 0x20) -
                           (0xff < sVar8),
                           CONCAT15((0 < sVar7) * (sVar7 < 0x100) * (char)((ulong)uVar13 >> 0x10) -
                                    (0xff < sVar7),
                                    CONCAT14((0 < sVar6) * (sVar6 < 0x100) * (char)uVar13 -
                                             (0xff < sVar6),
                                             CONCAT13((0 < sVar5) * (sVar5 < 0x100) *
                                                      (char)((ulong)uVar14 >> 0x30) - (0xff < sVar5)
                                                      ,CONCAT12((0 < sVar4) * (sVar4 < 0x100) *
                                                                (char)((ulong)uVar14 >> 0x20) -
                                                                (0xff < sVar4),
                                                                CONCAT11((0 < sVar3) *
                                                                         (sVar3 < 0x100) *
                                                                         (char)((ulong)uVar14 >>
                                                                               0x10) -
                                                                         (0xff < sVar3),
                                                                         (0 < sVar2) *
                                                                         (sVar2 < 0x100) *
                                                                         (char)uVar14 -
                                                                         (0xff < sVar2))))))));
    param_5 = param_5 + 4;
    param_1 = (undefined8 *)((long)param_1 + lVar10 * 2);
    iVar11 = iVar11 + -1;
  } while (iVar11 != 0);
  return;
}



void oc_restore_fpu_mmx(void)

{
  return;
}


