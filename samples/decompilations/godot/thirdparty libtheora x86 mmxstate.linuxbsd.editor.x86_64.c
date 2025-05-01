
void oc_state_frag_recon_mmx
               (long param_1,long param_2,int param_3,short *param_4,int param_5,ushort param_6)

{
  short *psVar1;
  byte bVar2;
  int iVar3;
  short *psVar4;
  long lVar5;
  long lVar6;
  long in_FS_OFFSET;
  undefined2 uVar7;
  undefined8 uVar9;
  int local_48;
  int local_44;
  long local_40;
  undefined4 uVar8;
  
  psVar1 = param_4 + 0x40;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_5 < 2) {
    uVar7 = (undefined2)((int)((int)*param_4 * (uint)param_6 + 0xf) >> 5);
    uVar8 = CONCAT22(uVar7,uVar7);
    uVar9 = CONCAT44(uVar8,uVar8);
    psVar4 = psVar1;
    do {
      *(undefined8 *)psVar4 = uVar9;
      *(undefined8 *)(psVar4 + 4) = uVar9;
      *(undefined8 *)(psVar4 + 8) = uVar9;
      *(undefined8 *)(psVar4 + 0xc) = uVar9;
      psVar4 = psVar4 + 0x10;
    } while (param_4 + 0x80 != psVar4);
  }
  else {
    *param_4 = *param_4 * param_6;
    (**(code **)(param_1 + 0x68))(psVar1,param_4,param_5);
  }
  uVar8 = *(undefined4 *)(param_1 + 0x398 + (long)param_3 * 4);
  lVar5 = *(long *)(*(long *)(param_1 + 0x120) + param_2 * 8);
  bVar2 = *(byte *)(*(long *)(param_1 + 0x118) + param_2 * 4) >> 6;
  lVar6 = *(long *)(param_1 + 0x370) + lVar5;
  if (bVar2 == 2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      oc_frag_recon_intra_mmx(lVar6,uVar8,psVar1);
      return;
    }
  }
  else {
    lVar5 = lVar5 + *(long *)(param_1 + 0x360 + (ulong)bVar2 * 8);
    iVar3 = oc_state_get_mv_offsets
                      (param_1,&local_48,param_3,
                       (int)*(short *)(*(long *)(param_1 + 0x128) + param_2 * 2));
    if (iVar3 < 2) {
      oc_frag_recon_inter_mmx(lVar6,lVar5 + local_48,uVar8,psVar1);
    }
    else {
      oc_frag_recon_inter2_mmx(lVar6,local_48 + lVar5,local_44 + lVar5,uVar8,psVar1);
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void oc_loop_filter_init_mmx(long *param_1,byte param_2)

{
  *param_1 = (ulong)param_2 * 0x101010101010101;
  return;
}



void oc_state_loop_filter_frag_rows_mmx
               (long param_1,undefined8 param_2,int param_3,int param_4,int param_5,int param_6)

{
  undefined4 *puVar1;
  long lVar2;
  long lVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined8 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  bool bVar25;
  bool bVar26;
  ushort uVar27;
  ushort uVar28;
  ushort uVar29;
  ushort uVar30;
  uint uVar31;
  undefined2 uVar32;
  long lVar33;
  long lVar34;
  byte *pbVar35;
  undefined8 *puVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long in_FS_OFFSET;
  char cVar43;
  byte bVar47;
  undefined2 uVar44;
  char cVar48;
  char cVar50;
  ushort uVar49;
  char cVar51;
  char cVar52;
  char cVar53;
  char cVar54;
  byte bVar55;
  undefined1 uVar56;
  char cVar57;
  byte bVar58;
  ushort uVar59;
  ushort uVar60;
  undefined1 uVar61;
  byte bVar63;
  undefined4 uVar62;
  ushort uVar64;
  ushort uVar65;
  byte bVar67;
  ushort uVar66;
  byte bVar68;
  byte bVar70;
  ushort uVar69;
  uint5 uVar75;
  undefined8 uVar71;
  ulong uVar72;
  ulong uVar73;
  undefined8 uVar74;
  undefined1 uVar78;
  uint3 uVar76;
  uint3 uVar77;
  undefined1 uVar79;
  byte bVar81;
  ulong uVar80;
  byte bVar84;
  byte bVar85;
  short sVar86;
  short sVar87;
  undefined8 uVar82;
  short sVar88;
  undefined8 uVar83;
  undefined4 uVar45;
  undefined6 uVar46;
  
  lVar15 = *(long *)(param_1 + 0x118);
  lVar16 = *(long *)(param_1 + 0x120);
  lVar17 = *(long *)(in_FS_OFFSET + 0x28);
  lVar18 = *(long *)(param_1 + 0x360 + (long)param_3 * 8);
  lVar34 = (ulong)*(byte *)(param_1 + 0xd0d0 + (ulong)*(byte *)(param_1 + 0x4c3)) *
           0x101010101010101;
  iVar7 = *(int *)(param_1 + 0x398 + (long)param_4 * 4);
  lVar40 = (long)iVar7;
  piVar5 = (int *)(param_1 + 0xa0 + (long)param_4 * 0x28);
  lVar42 = (long)*piVar5;
  lVar19 = *(long *)(piVar5 + 2);
  lVar20 = *(long *)(piVar5 + 4);
  lVar38 = param_5 * lVar42 + lVar19;
  lVar3 = (param_6 - param_5) * lVar42 + lVar38;
  if (lVar38 < lVar3) {
    lVar37 = lVar38;
    do {
      lVar39 = lVar37 + lVar42;
      if (lVar38 < lVar39) {
        lVar33 = lVar42 + lVar38;
        pbVar35 = (byte *)(lVar15 + lVar38 * 4);
        do {
          lVar2 = lVar37 + 1;
          if ((*pbVar35 & 1) == 0) {
joined_r0x001006db:
            if (lVar39 == lVar2) break;
          }
          else {
            lVar41 = *(long *)(lVar16 + -8 + lVar2 * 8) + lVar18;
            cVar43 = (char)lVar34;
            cVar48 = (char)((ulong)lVar34 >> 0x10);
            cVar50 = (char)((ulong)lVar34 >> 0x18);
            cVar51 = (char)((ulong)lVar34 >> 0x20);
            cVar52 = (char)((ulong)lVar34 >> 0x28);
            cVar53 = (char)((ulong)lVar34 >> 0x30);
            cVar54 = (char)((ulong)lVar34 >> 0x38);
            if (lVar38 < lVar37) {
              puVar1 = (undefined4 *)(lVar41 + -2);
              uVar45 = *puVar1;
              uVar8 = *(undefined4 *)((long)puVar1 + lVar40);
              lVar37 = lVar40 * 3;
              uVar9 = *(undefined4 *)((long)puVar1 + lVar40 * 2);
              puVar4 = puVar1 + lVar40;
              uVar10 = *(undefined4 *)((long)puVar1 + lVar37);
              uVar11 = *puVar4;
              uVar12 = *(undefined4 *)((long)puVar4 + lVar40);
              uVar13 = *(undefined4 *)((long)puVar4 + lVar40 * 2);
              uVar14 = *(undefined4 *)((long)puVar4 + lVar37);
              uVar56 = (undefined1)((uint)uVar8 >> 0x10);
              bVar55 = (byte)((uint)uVar8 >> 8);
              bVar47 = (byte)((uint)uVar45 >> 8);
              bVar63 = (byte)((uint)uVar10 >> 0x10);
              uVar61 = (undefined1)((uint)uVar9 >> 0x10);
              bVar58 = (byte)((uint)uVar10 >> 8);
              cVar57 = (char)((uint)uVar9 >> 8);
              uVar49 = (ushort)bVar47;
              uVar65 = (ushort)(CONCAT15(uVar56,CONCAT14((char)((uint)uVar45 >> 0x10),uVar45)) >>
                               0x20);
              uVar62 = CONCAT22((short)(CONCAT15(bVar63,CONCAT14(uVar61,uVar9)) >> 0x20),uVar65);
              uVar79 = (undefined1)((uint)uVar12 >> 0x18);
              uVar32 = CONCAT11(uVar79,(char)((uint)uVar11 >> 0x18));
              uVar78 = (undefined1)((uint)uVar12 >> 0x10);
              bVar68 = (byte)((uint)uVar12 >> 8);
              bVar67 = (byte)((uint)uVar11 >> 8);
              bVar85 = (byte)((uint)uVar14 >> 0x10);
              bVar81 = (byte)((uint)uVar13 >> 0x10);
              bVar84 = (byte)((uint)uVar14 >> 8);
              bVar70 = (byte)((uint)uVar13 >> 8);
              uVar69 = (ushort)bVar70;
              uVar66 = (ushort)bVar67;
              uVar44 = (undefined2)
                       (CONCAT35(CONCAT21(uVar32,uVar78),
                                 CONCAT14((char)((uint)uVar11 >> 0x10),uVar11)) >> 0x20);
              uVar29 = (ushort)(((uint7)(byte)uVar10 << 0x30) >> 0x28);
              uVar27 = (ushort)(((uint7)(byte)((uint)uVar10 >> 0x18) << 0x30) >> 0x28);
              uVar76 = CONCAT12(uVar79,uVar32) & 0xff00ff;
              uVar28 = (ushort)(((uint7)bVar58 << 0x30) >> 0x28);
              uVar30 = (ushort)bVar55;
              uVar31 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)bVar63 << 0x30) >> 0x28),
                                                       CONCAT14(uVar61,uVar62)) >> 0x20),uVar62) >>
                             0x18);
              uVar75 = (uint5)uVar31 & 0xffff00ff00;
              uVar77 = CONCAT12(uVar78,uVar44) & 0xff00ff;
              uVar59 = (ushort)CONCAT21(uVar28,cVar57);
              uVar28 = uVar28 >> 8;
              uVar60 = (ushort)bVar68;
              uVar64 = (ushort)bVar84;
              uVar82 = psllw(0x1000100010001,2);
              sVar86 = (short)((ulong)uVar82 >> 0x10);
              sVar87 = (short)((ulong)uVar82 >> 0x20);
              sVar88 = (short)((ulong)uVar82 >> 0x30);
              uVar71 = psraw(CONCAT26((((short)(uVar75 >> 0x18) - uVar28) * 3 +
                                      ((uVar29 >> 8) - (uVar27 >> 8))) - sVar88,
                                      CONCAT24((((short)(uVar75 >> 8) - uVar59) * 3 +
                                               ((short)CONCAT21(uVar29,(char)uVar9) -
                                               (short)CONCAT21(uVar27,(char)((uint)uVar9 >> 0x18))))
                                               - sVar87,CONCAT22(((((ushort)(CONCAT43(uVar31,
                                                  CONCAT12(uVar56,uVar65)) >> 0x10) & 0xff) - uVar30
                                                  ) * 3 + ((ushort)(byte)uVar8 -
                                                          (ushort)(byte)((uint)uVar8 >> 0x18))) -
                                                  sVar86,(((uVar65 & 0xff) - uVar49) * 3 +
                                                         ((ushort)(byte)uVar45 -
                                                         (ushort)(byte)((uint)uVar45 >> 0x18))) -
                                                         (short)uVar82))),3);
              uVar82 = psraw(CONCAT26(((bVar85 - uVar64) * 3 +
                                      ((ushort)(byte)uVar14 - (ushort)(byte)((uint)uVar14 >> 0x18)))
                                      - sVar88,CONCAT24(((bVar81 - uVar69) * 3 +
                                                        ((ushort)(byte)uVar13 -
                                                        (ushort)(byte)((uint)uVar13 >> 0x18))) -
                                                        sVar87,CONCAT22((((byte)(uVar77 >> 0x10) -
                                                                         uVar60) * 3 +
                                                                        ((ushort)(byte)uVar12 -
                                                                        (ushort)(byte)(uVar76 >>
                                                                                      0x10))) -
                                                                        sVar86,(((short)uVar77 -
                                                                                uVar66) * 3 +
                                                                               ((ushort)(byte)uVar11
                                                                               - (short)uVar76)) -
                                                                               (short)uVar82))),3);
              uVar72 = packsswb(uVar71,uVar82);
              uVar72 = uVar72 ^ 0xffffffffffffffff;
              bVar21 = (char)uVar72 < '\0';
              bVar22 = (char)(uVar72 >> 0x10) < '\0';
              bVar23 = (char)(uVar72 >> 0x18) < '\0';
              bVar24 = (char)(uVar72 >> 0x20) < '\0';
              bVar25 = (char)(uVar72 >> 0x28) < '\0';
              bVar26 = (char)(uVar72 >> 0x30) < '\0';
              uVar80 = CONCAT17(-((long)uVar72 < 0),
                                CONCAT16(-bVar26,CONCAT15(-bVar25,CONCAT14(-bVar24,CONCAT13(-bVar23,
                                                  CONCAT12(-bVar22,CONCAT11(-((char)(uVar72 >> 8) <
                                                                             '\0'),-bVar21)))))));
              uVar73 = uVar72 ^ uVar80;
              uVar71 = CONCAT17((char)(uVar73 >> 0x38) + ((long)uVar72 < 0),
                                CONCAT16((char)(uVar73 >> 0x30) + bVar26,
                                         CONCAT15((char)(uVar73 >> 0x28) + bVar25,
                                                  CONCAT14((char)(uVar73 >> 0x20) + bVar24,
                                                           CONCAT13((char)(uVar73 >> 0x18) + bVar23,
                                                                    CONCAT12((char)(uVar73 >> 0x10)
                                                                             + bVar22,(short)
                                                  CONCAT71((int7)(uVar73 >> 8),(char)uVar73 + bVar21
                                                          )))))));
              uVar82 = paddusb(CONCAT17((-1 - cVar54) - cVar54,
                                        CONCAT16((-1 - cVar53) - cVar53,
                                                 CONCAT15((-1 - cVar52) - cVar52,
                                                          CONCAT14((-1 - cVar51) - cVar51,
                                                                   CONCAT13((-1 - cVar50) - cVar50,
                                                                            CONCAT12((-1 - cVar48) -
                                                                                     cVar48,(short)
                                                  CONCAT71((int7)(CONCAT17(-1 - cVar54,
                                                                           CONCAT16(-1 - cVar53,
                                                                                    CONCAT15(-1 - 
                                                  cVar52,CONCAT14(-1 - cVar51,
                                                                  CONCAT13(-1 - cVar50,
                                                                           CONCAT12(-1 - cVar48,
                                                                                    (short)CONCAT71(
                                                  0xffffffffffffff,-1 - cVar43))))))) >> 8),
                                                  (-1 - cVar43) - cVar43))))))),uVar71);
              uVar71 = paddusb(uVar71,uVar82);
              uVar72 = psubusb(uVar71,uVar82);
              uVar71 = paddusb(CONCAT17((uVar64 != 0) * (uVar64 < 0x100) * bVar84 - (0xff < uVar64),
                                        CONCAT16((bVar70 != 0) * (uVar69 < 0x100) * bVar70 -
                                                 (0xff < uVar69),
                                                 CONCAT15((uVar60 != 0) * (uVar60 < 0x100) * bVar68
                                                          - (0xff < uVar60),
                                                          CONCAT14((uVar66 != 0) * (uVar66 < 0x100)
                                                                   * bVar67 - (0xff < uVar66),
                                                                   CONCAT13((uVar28 != 0) *
                                                                            (uVar28 < 0x100) *
                                                                            bVar58 - (0xff < uVar28)
                                                                            ,CONCAT12((uVar59 != 0)
                                                                                      * (uVar59 < 
                                                  0x100) * cVar57 - (0xff < uVar59),
                                                  CONCAT11((uVar30 != 0) * (uVar30 < 0x100) * bVar55
                                                           - (0xff < uVar30),
                                                           (bVar47 != 0) * (uVar49 < 0x100) * bVar47
                                                           - (0xff < uVar49)))))))),uVar72 & uVar80)
              ;
              uVar82 = psubusb(CONCAT44(CONCAT22((short)(CONCAT15(bVar85,CONCAT14(bVar81,uVar13)) >>
                                                        0x20),uVar44),uVar62),uVar72 & uVar80);
              uVar71 = psubusb(uVar71,~uVar80 & uVar72);
              uVar82 = paddusb(uVar82,~uVar80 & uVar72);
              uVar32 = CONCAT11((char)((ulong)uVar82 >> 0x18),(char)((ulong)uVar71 >> 0x18));
              uVar44 = CONCAT11((char)((ulong)uVar82 >> 0x20),(char)((ulong)uVar71 >> 0x20));
              uVar45 = CONCAT13((char)((ulong)uVar82 >> 0x28),
                                CONCAT12((char)((ulong)uVar71 >> 0x28),uVar44));
              uVar46 = CONCAT15((char)((ulong)uVar82 >> 0x30),
                                CONCAT14((char)((ulong)uVar71 >> 0x30),uVar45));
              *(ushort *)(lVar41 + -1) = CONCAT11((char)uVar82,(char)uVar71);
              *(short *)(lVar41 + -1 + lVar40) =
                   (short)CONCAT51((int5)((ulong)uVar82 >> 8),(char)((ulong)uVar71 >> 8));
              *(short *)(lVar41 + -1 + lVar40 * 2) =
                   (short)CONCAT31(CONCAT21(uVar32,(char)((ulong)uVar82 >> 0x10)),
                                   (char)((ulong)uVar71 >> 0x10));
              *(undefined2 *)(lVar41 + -1 + lVar37) = uVar32;
              *(undefined2 *)((long)puVar1 + lVar40 * 4 + 1) = uVar44;
              *(short *)((long)puVar1 + lVar40 * 5 + 1) = (short)((uint)uVar45 >> 0x10);
              *(short *)((long)puVar1 + lVar40 * 6 + 1) = (short)((uint6)uVar46 >> 0x20);
              *(short *)((long)puVar1 + lVar40 * 7 + 1) =
                   (short)(CONCAT17((char)((ulong)uVar82 >> 0x38),
                                    CONCAT16((char)((ulong)uVar71 >> 0x38),uVar46)) >> 0x30);
            }
            if (lVar19 < lVar38) {
              puVar36 = (undefined8 *)(lVar41 - iVar7 * 2);
              uVar71 = *puVar36;
              uVar82 = *(undefined8 *)((long)puVar36 + lVar40 * 3);
              uVar74 = *(undefined8 *)((long)puVar36 + lVar40);
              uVar6 = *(undefined8 *)((long)puVar36 + lVar40 * 2);
              uVar30 = (ushort)(((uint7)(byte)((ulong)uVar71 >> 0x18) << 0x30) >> 0x28);
              uVar27 = (ushort)(((uint7)(byte)((ulong)uVar82 >> 0x18) << 0x30) >> 0x28);
              bVar58 = (byte)((ulong)uVar74 >> 0x18);
              uVar28 = (ushort)(((uint7)bVar58 << 0x30) >> 0x28);
              cVar57 = (char)((ulong)uVar74 >> 0x10);
              bVar55 = (byte)((ulong)uVar74 >> 8);
              uVar49 = (ushort)bVar55;
              bVar47 = (byte)uVar74;
              uVar59 = (ushort)bVar47;
              bVar63 = (byte)((ulong)uVar74 >> 0x20);
              uVar65 = (ushort)bVar63;
              bVar67 = (byte)((ulong)uVar74 >> 0x28);
              bVar68 = (byte)((ulong)uVar74 >> 0x30);
              bVar70 = (byte)((ulong)uVar74 >> 0x38);
              uVar29 = (ushort)(((uint7)(byte)((ulong)uVar6 >> 0x18) << 0x30) >> 0x28);
              uVar60 = (ushort)CONCAT21(uVar28,cVar57);
              uVar28 = uVar28 >> 8;
              uVar64 = (ushort)bVar67;
              uVar66 = (ushort)bVar68;
              uVar69 = (ushort)bVar70;
              uVar83 = psllw(0x1000100010001,2);
              sVar86 = (short)((ulong)uVar83 >> 0x10);
              sVar87 = (short)((ulong)uVar83 >> 0x20);
              sVar88 = (short)((ulong)uVar83 >> 0x30);
              uVar74 = psraw(CONCAT26((((uVar29 >> 8) - uVar28) * 3 +
                                      ((uVar30 >> 8) - (uVar27 >> 8))) - sVar88,
                                      CONCAT24((((short)CONCAT21(uVar29,(char)((ulong)uVar6 >> 0x10)
                                                                ) - uVar60) * 3 +
                                               ((short)CONCAT21(uVar30,(char)((ulong)uVar71 >> 0x10)
                                                               ) -
                                               (short)CONCAT21(uVar27,(char)((ulong)uVar82 >> 0x10))
                                               )) - sVar87,
                                               CONCAT22((((byte)((ulong)uVar6 >> 8) - uVar49) * 3 +
                                                        ((ushort)(byte)((ulong)uVar71 >> 8) -
                                                        (ushort)(byte)((ulong)uVar82 >> 8))) -
                                                        sVar86,((((ushort)uVar6 & 0xff) - uVar59) *
                                                                3 + ((ushort)(byte)uVar71 -
                                                                    ((ushort)uVar82 & 0xff))) -
                                                               (short)uVar83))),3);
              uVar71 = psraw(CONCAT26((((byte)((ulong)uVar6 >> 0x38) - uVar69) * 3 +
                                      ((ushort)(byte)((ulong)uVar71 >> 0x38) -
                                      (ushort)(byte)((ulong)uVar82 >> 0x38))) - sVar88,
                                      CONCAT24((((byte)((ulong)uVar6 >> 0x30) - uVar66) * 3 +
                                               ((ushort)(byte)((ulong)uVar71 >> 0x30) -
                                               (ushort)(byte)((ulong)uVar82 >> 0x30))) - sVar87,
                                               CONCAT22((((byte)((ulong)uVar6 >> 0x28) - uVar64) * 3
                                                        + ((ushort)(byte)((ulong)uVar71 >> 0x28) -
                                                          (ushort)(byte)((ulong)uVar82 >> 0x28))) -
                                                        sVar86,(((byte)((ulong)uVar6 >> 0x20) -
                                                                uVar65) * 3 +
                                                               ((ushort)(byte)((ulong)uVar71 >> 0x20
                                                                              ) -
                                                               (ushort)(byte)((ulong)uVar82 >> 0x20)
                                                               )) - (short)uVar83))),3);
              uVar72 = packsswb(uVar74,uVar71);
              uVar72 = uVar72 ^ 0xffffffffffffffff;
              bVar21 = (char)uVar72 < '\0';
              bVar22 = (char)(uVar72 >> 0x10) < '\0';
              bVar23 = (char)(uVar72 >> 0x18) < '\0';
              bVar24 = (char)(uVar72 >> 0x20) < '\0';
              bVar25 = (char)(uVar72 >> 0x28) < '\0';
              bVar26 = (char)(uVar72 >> 0x30) < '\0';
              uVar80 = CONCAT17(-((long)uVar72 < 0),
                                CONCAT16(-bVar26,CONCAT15(-bVar25,CONCAT14(-bVar24,CONCAT13(-bVar23,
                                                  CONCAT12(-bVar22,CONCAT11(-((char)(uVar72 >> 8) <
                                                                             '\0'),-bVar21)))))));
              uVar73 = uVar72 ^ uVar80;
              uVar71 = CONCAT17((char)(uVar73 >> 0x38) + ((long)uVar72 < 0),
                                CONCAT16((char)(uVar73 >> 0x30) + bVar26,
                                         CONCAT15((char)(uVar73 >> 0x28) + bVar25,
                                                  CONCAT14((char)(uVar73 >> 0x20) + bVar24,
                                                           CONCAT13((char)(uVar73 >> 0x18) + bVar23,
                                                                    CONCAT12((char)(uVar73 >> 0x10)
                                                                             + bVar22,(short)
                                                  CONCAT71((int7)(uVar73 >> 8),(char)uVar73 + bVar21
                                                          )))))));
              uVar82 = paddusb(CONCAT17((-1 - cVar54) - cVar54,
                                        CONCAT16((-1 - cVar53) - cVar53,
                                                 CONCAT15((-1 - cVar52) - cVar52,
                                                          CONCAT14((-1 - cVar51) - cVar51,
                                                                   CONCAT13((-1 - cVar50) - cVar50,
                                                                            CONCAT12((-1 - cVar48) -
                                                                                     cVar48,(short)
                                                  CONCAT71((int7)(CONCAT17(-1 - cVar54,
                                                                           CONCAT16(-1 - cVar53,
                                                                                    CONCAT15(-1 - 
                                                  cVar52,CONCAT14(-1 - cVar51,
                                                                  CONCAT13(-1 - cVar50,
                                                                           CONCAT12(-1 - cVar48,
                                                                                    (short)CONCAT71(
                                                  0xffffffffffffff,-1 - cVar43))))))) >> 8),
                                                  (-1 - cVar43) - cVar43))))))),uVar71);
              uVar71 = paddusb(uVar71,uVar82);
              uVar72 = psubusb(uVar71,uVar82);
              uVar71 = paddusb(CONCAT17((bVar70 != 0) * (uVar69 < 0x100) * bVar70 - (0xff < uVar69),
                                        CONCAT16((bVar68 != 0) * (uVar66 < 0x100) * bVar68 -
                                                 (0xff < uVar66),
                                                 CONCAT15((bVar67 != 0) * (uVar64 < 0x100) * bVar67
                                                          - (0xff < uVar64),
                                                          CONCAT14((bVar63 != 0) * (uVar65 < 0x100)
                                                                   * bVar63 - (0xff < uVar65),
                                                                   CONCAT13((uVar28 != 0) *
                                                                            (uVar28 < 0x100) *
                                                                            bVar58 - (0xff < uVar28)
                                                                            ,CONCAT12((uVar60 != 0)
                                                                                      * (uVar60 < 
                                                  0x100) * cVar57 - (0xff < uVar60),
                                                  CONCAT11((uVar49 != 0) * (uVar49 < 0x100) * bVar55
                                                           - (0xff < uVar49),
                                                           (bVar47 != 0) * (uVar59 < 0x100) * bVar47
                                                           - (0xff < uVar59)))))))),uVar72 & uVar80)
              ;
              uVar82 = psubusb(uVar6,uVar72 & uVar80);
              uVar71 = psubusb(uVar71,~uVar80 & uVar72);
              uVar82 = paddusb(uVar82,~uVar80 & uVar72);
              *(undefined8 *)((long)puVar36 + lVar40) = uVar71;
              *(undefined8 *)((long)puVar36 + lVar40 * 2) = uVar82;
            }
            if (lVar39 <= lVar2) {
              if (lVar33 < lVar20 + lVar19) {
LAB_00100725:
                if ((pbVar35[lVar42 * 4] & 1) == 0) {
                  puVar36 = (undefined8 *)(lVar41 + ((long)(iVar7 * 8) - (long)(iVar7 * 2)));
                  uVar71 = *puVar36;
                  uVar82 = *(undefined8 *)((long)puVar36 + lVar40 * 3);
                  uVar74 = *(undefined8 *)((long)puVar36 + lVar40);
                  uVar6 = *(undefined8 *)((long)puVar36 + lVar40 * 2);
                  uVar30 = (ushort)(((uint7)(byte)((ulong)uVar71 >> 0x18) << 0x30) >> 0x28);
                  uVar27 = (ushort)(((uint7)(byte)((ulong)uVar82 >> 0x18) << 0x30) >> 0x28);
                  bVar58 = (byte)((ulong)uVar74 >> 0x18);
                  uVar28 = (ushort)(((uint7)bVar58 << 0x30) >> 0x28);
                  cVar57 = (char)((ulong)uVar74 >> 0x10);
                  bVar55 = (byte)((ulong)uVar74 >> 8);
                  uVar49 = (ushort)bVar55;
                  bVar47 = (byte)uVar74;
                  uVar59 = (ushort)bVar47;
                  bVar63 = (byte)((ulong)uVar74 >> 0x20);
                  uVar65 = (ushort)bVar63;
                  bVar67 = (byte)((ulong)uVar74 >> 0x28);
                  bVar68 = (byte)((ulong)uVar74 >> 0x30);
                  bVar70 = (byte)((ulong)uVar74 >> 0x38);
                  uVar29 = (ushort)(((uint7)(byte)((ulong)uVar6 >> 0x18) << 0x30) >> 0x28);
                  uVar60 = (ushort)CONCAT21(uVar28,cVar57);
                  uVar28 = uVar28 >> 8;
                  uVar64 = (ushort)bVar67;
                  uVar66 = (ushort)bVar68;
                  uVar69 = (ushort)bVar70;
                  uVar83 = psllw(0x1000100010001,2);
                  sVar86 = (short)((ulong)uVar83 >> 0x10);
                  sVar87 = (short)((ulong)uVar83 >> 0x20);
                  sVar88 = (short)((ulong)uVar83 >> 0x30);
                  uVar74 = psraw(CONCAT26((((uVar29 >> 8) - uVar28) * 3 +
                                          ((uVar30 >> 8) - (uVar27 >> 8))) - sVar88,
                                          CONCAT24((((short)CONCAT21(uVar29,(char)((ulong)uVar6 >>
                                                                                  0x10)) - uVar60) *
                                                    3 + ((short)CONCAT21(uVar30,(char)((ulong)uVar71
                                                                                      >> 0x10)) -
                                                        (short)CONCAT21(uVar27,(char)((ulong)uVar82
                                                                                     >> 0x10)))) -
                                                   sVar87,CONCAT22((((byte)((ulong)uVar6 >> 8) -
                                                                    uVar49) * 3 +
                                                                   ((ushort)(byte)((ulong)uVar71 >>
                                                                                  8) -
                                                                   (ushort)(byte)((ulong)uVar82 >> 8
                                                                                 ))) - sVar86,
                                                                   ((((ushort)uVar6 & 0xff) - uVar59
                                                                    ) * 3 + ((ushort)(byte)uVar71 -
                                                                            ((ushort)uVar82 & 0xff))
                                                                   ) - (short)uVar83))),3);
                  uVar71 = psraw(CONCAT26((((byte)((ulong)uVar6 >> 0x38) - uVar69) * 3 +
                                          ((ushort)(byte)((ulong)uVar71 >> 0x38) -
                                          (ushort)(byte)((ulong)uVar82 >> 0x38))) - sVar88,
                                          CONCAT24((((byte)((ulong)uVar6 >> 0x30) - uVar66) * 3 +
                                                   ((ushort)(byte)((ulong)uVar71 >> 0x30) -
                                                   (ushort)(byte)((ulong)uVar82 >> 0x30))) - sVar87,
                                                   CONCAT22((((byte)((ulong)uVar6 >> 0x28) - uVar64)
                                                             * 3 + ((ushort)(byte)((ulong)uVar71 >>
                                                                                  0x28) -
                                                                   (ushort)(byte)((ulong)uVar82 >>
                                                                                 0x28))) - sVar86,
                                                            (((byte)((ulong)uVar6 >> 0x20) - uVar65)
                                                             * 3 + ((ushort)(byte)((ulong)uVar71 >>
                                                                                  0x20) -
                                                                   (ushort)(byte)((ulong)uVar82 >>
                                                                                 0x20))) -
                                                            (short)uVar83))),3);
                  uVar72 = packsswb(uVar74,uVar71);
                  uVar72 = uVar72 ^ 0xffffffffffffffff;
                  bVar21 = (char)uVar72 < '\0';
                  bVar22 = (char)(uVar72 >> 0x10) < '\0';
                  bVar23 = (char)(uVar72 >> 0x18) < '\0';
                  bVar24 = (char)(uVar72 >> 0x20) < '\0';
                  bVar25 = (char)(uVar72 >> 0x28) < '\0';
                  bVar26 = (char)(uVar72 >> 0x30) < '\0';
                  uVar80 = CONCAT17(-((long)uVar72 < 0),
                                    CONCAT16(-bVar26,CONCAT15(-bVar25,CONCAT14(-bVar24,CONCAT13(-
                                                  bVar23,CONCAT12(-bVar22,CONCAT11(-((char)(uVar72 
                                                  >> 8) < '\0'),-bVar21)))))));
                  uVar73 = uVar72 ^ uVar80;
                  uVar71 = CONCAT17((char)(uVar73 >> 0x38) + ((long)uVar72 < 0),
                                    CONCAT16((char)(uVar73 >> 0x30) + bVar26,
                                             CONCAT15((char)(uVar73 >> 0x28) + bVar25,
                                                      CONCAT14((char)(uVar73 >> 0x20) + bVar24,
                                                               CONCAT13((char)(uVar73 >> 0x18) +
                                                                        bVar23,CONCAT12((char)(
                                                  uVar73 >> 0x10) + bVar22,
                                                  (short)CONCAT71((int7)(uVar73 >> 8),
                                                                  (char)uVar73 + bVar21)))))));
                  uVar82 = paddusb(CONCAT17((-1 - cVar54) - cVar54,
                                            CONCAT16((-1 - cVar53) - cVar53,
                                                     CONCAT15((-1 - cVar52) - cVar52,
                                                              CONCAT14((-1 - cVar51) - cVar51,
                                                                       CONCAT13((-1 - cVar50) -
                                                                                cVar50,CONCAT12((-1 
                                                  - cVar48) - cVar48,
                                                  (short)CONCAT71((int7)(CONCAT17(-1 - cVar54,
                                                                                  CONCAT16(-1 - 
                                                  cVar53,CONCAT15(-1 - cVar52,
                                                                  CONCAT14(-1 - cVar51,
                                                                           CONCAT13(-1 - cVar50,
                                                                                    CONCAT12(-1 - 
                                                  cVar48,(short)CONCAT71(0xffffffffffffff,
                                                                         -1 - cVar43))))))) >> 8),
                                                  (-1 - cVar43) - cVar43))))))),uVar71);
                  uVar71 = paddusb(uVar71,uVar82);
                  uVar72 = psubusb(uVar71,uVar82);
                  uVar71 = paddusb(CONCAT17((bVar70 != 0) * (uVar69 < 0x100) * bVar70 -
                                            (0xff < uVar69),
                                            CONCAT16((bVar68 != 0) * (uVar66 < 0x100) * bVar68 -
                                                     (0xff < uVar66),
                                                     CONCAT15((bVar67 != 0) * (uVar64 < 0x100) *
                                                              bVar67 - (0xff < uVar64),
                                                              CONCAT14((bVar63 != 0) *
                                                                       (uVar65 < 0x100) * bVar63 -
                                                                       (0xff < uVar65),
                                                                       CONCAT13((uVar28 != 0) *
                                                                                (uVar28 < 0x100) *
                                                                                bVar58 - (0xff < 
                                                  uVar28),CONCAT12((uVar60 != 0) * (uVar60 < 0x100)
                                                                   * cVar57 - (0xff < uVar60),
                                                                   CONCAT11((uVar49 != 0) *
                                                                            (uVar49 < 0x100) *
                                                                            bVar55 - (0xff < uVar49)
                                                                            ,(bVar47 != 0) *
                                                                             (uVar59 < 0x100) *
                                                                             bVar47 - (0xff < uVar59
                                                                                      )))))))),
                                   uVar72 & uVar80);
                  uVar82 = psubusb(uVar6,uVar72 & uVar80);
                  uVar71 = psubusb(uVar71,~uVar80 & uVar72);
                  uVar82 = paddusb(uVar82,~uVar80 & uVar72);
                  *(undefined8 *)((long)puVar36 + lVar40) = uVar71;
                  *(undefined8 *)((long)puVar36 + lVar40 * 2) = uVar82;
                }
                goto joined_r0x001006db;
              }
              break;
            }
            if ((pbVar35[4] & 1) == 0) {
              puVar1 = (undefined4 *)(lVar41 + 6);
              uVar45 = *puVar1;
              uVar8 = *(undefined4 *)((long)puVar1 + lVar40);
              lVar37 = lVar40 * 3;
              uVar9 = *(undefined4 *)((long)puVar1 + lVar40 * 2);
              puVar4 = puVar1 + lVar40;
              uVar10 = *(undefined4 *)((long)puVar1 + lVar37);
              uVar11 = *puVar4;
              uVar12 = *(undefined4 *)((long)puVar4 + lVar40);
              uVar13 = *(undefined4 *)((long)puVar4 + lVar40 * 2);
              uVar14 = *(undefined4 *)((long)puVar4 + lVar37);
              uVar56 = (undefined1)((uint)uVar8 >> 0x10);
              bVar55 = (byte)((uint)uVar8 >> 8);
              bVar47 = (byte)((uint)uVar45 >> 8);
              bVar63 = (byte)((uint)uVar10 >> 0x10);
              uVar61 = (undefined1)((uint)uVar9 >> 0x10);
              bVar58 = (byte)((uint)uVar10 >> 8);
              cVar57 = (char)((uint)uVar9 >> 8);
              uVar49 = (ushort)bVar47;
              uVar65 = (ushort)(CONCAT15(uVar56,CONCAT14((char)((uint)uVar45 >> 0x10),uVar45)) >>
                               0x20);
              uVar62 = CONCAT22((short)(CONCAT15(bVar63,CONCAT14(uVar61,uVar9)) >> 0x20),uVar65);
              uVar79 = (undefined1)((uint)uVar12 >> 0x18);
              uVar32 = CONCAT11(uVar79,(char)((uint)uVar11 >> 0x18));
              uVar78 = (undefined1)((uint)uVar12 >> 0x10);
              bVar68 = (byte)((uint)uVar12 >> 8);
              bVar67 = (byte)((uint)uVar11 >> 8);
              bVar85 = (byte)((uint)uVar14 >> 0x10);
              bVar81 = (byte)((uint)uVar13 >> 0x10);
              bVar84 = (byte)((uint)uVar14 >> 8);
              bVar70 = (byte)((uint)uVar13 >> 8);
              uVar69 = (ushort)bVar70;
              uVar66 = (ushort)bVar67;
              uVar44 = (undefined2)
                       (CONCAT35(CONCAT21(uVar32,uVar78),
                                 CONCAT14((char)((uint)uVar11 >> 0x10),uVar11)) >> 0x20);
              uVar29 = (ushort)(((uint7)(byte)uVar10 << 0x30) >> 0x28);
              uVar27 = (ushort)(((uint7)(byte)((uint)uVar10 >> 0x18) << 0x30) >> 0x28);
              uVar76 = CONCAT12(uVar79,uVar32) & 0xff00ff;
              uVar28 = (ushort)(((uint7)bVar58 << 0x30) >> 0x28);
              uVar30 = (ushort)bVar55;
              uVar31 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)bVar63 << 0x30) >> 0x28),
                                                       CONCAT14(uVar61,uVar62)) >> 0x20),uVar62) >>
                             0x18);
              uVar75 = (uint5)uVar31 & 0xffff00ff00;
              uVar77 = CONCAT12(uVar78,uVar44) & 0xff00ff;
              uVar59 = (ushort)CONCAT21(uVar28,cVar57);
              uVar28 = uVar28 >> 8;
              uVar60 = (ushort)bVar68;
              uVar64 = (ushort)bVar84;
              uVar82 = psllw(0x1000100010001,2);
              sVar86 = (short)((ulong)uVar82 >> 0x10);
              sVar87 = (short)((ulong)uVar82 >> 0x20);
              sVar88 = (short)((ulong)uVar82 >> 0x30);
              uVar71 = psraw(CONCAT26((((short)(uVar75 >> 0x18) - uVar28) * 3 +
                                      ((uVar29 >> 8) - (uVar27 >> 8))) - sVar88,
                                      CONCAT24((((short)(uVar75 >> 8) - uVar59) * 3 +
                                               ((short)CONCAT21(uVar29,(char)uVar9) -
                                               (short)CONCAT21(uVar27,(char)((uint)uVar9 >> 0x18))))
                                               - sVar87,CONCAT22(((((ushort)(CONCAT43(uVar31,
                                                  CONCAT12(uVar56,uVar65)) >> 0x10) & 0xff) - uVar30
                                                  ) * 3 + ((ushort)(byte)uVar8 -
                                                          (ushort)(byte)((uint)uVar8 >> 0x18))) -
                                                  sVar86,(((uVar65 & 0xff) - uVar49) * 3 +
                                                         ((ushort)(byte)uVar45 -
                                                         (ushort)(byte)((uint)uVar45 >> 0x18))) -
                                                         (short)uVar82))),3);
              uVar82 = psraw(CONCAT26(((bVar85 - uVar64) * 3 +
                                      ((ushort)(byte)uVar14 - (ushort)(byte)((uint)uVar14 >> 0x18)))
                                      - sVar88,CONCAT24(((bVar81 - uVar69) * 3 +
                                                        ((ushort)(byte)uVar13 -
                                                        (ushort)(byte)((uint)uVar13 >> 0x18))) -
                                                        sVar87,CONCAT22((((byte)(uVar77 >> 0x10) -
                                                                         uVar60) * 3 +
                                                                        ((ushort)(byte)uVar12 -
                                                                        (ushort)(byte)(uVar76 >>
                                                                                      0x10))) -
                                                                        sVar86,(((short)uVar77 -
                                                                                uVar66) * 3 +
                                                                               ((ushort)(byte)uVar11
                                                                               - (short)uVar76)) -
                                                                               (short)uVar82))),3);
              uVar72 = packsswb(uVar71,uVar82);
              uVar72 = uVar72 ^ 0xffffffffffffffff;
              bVar21 = (char)uVar72 < '\0';
              bVar22 = (char)(uVar72 >> 0x10) < '\0';
              bVar23 = (char)(uVar72 >> 0x18) < '\0';
              bVar24 = (char)(uVar72 >> 0x20) < '\0';
              bVar25 = (char)(uVar72 >> 0x28) < '\0';
              bVar26 = (char)(uVar72 >> 0x30) < '\0';
              uVar80 = CONCAT17(-((long)uVar72 < 0),
                                CONCAT16(-bVar26,CONCAT15(-bVar25,CONCAT14(-bVar24,CONCAT13(-bVar23,
                                                  CONCAT12(-bVar22,CONCAT11(-((char)(uVar72 >> 8) <
                                                                             '\0'),-bVar21)))))));
              uVar73 = uVar72 ^ uVar80;
              uVar71 = CONCAT17((char)(uVar73 >> 0x38) + ((long)uVar72 < 0),
                                CONCAT16((char)(uVar73 >> 0x30) + bVar26,
                                         CONCAT15((char)(uVar73 >> 0x28) + bVar25,
                                                  CONCAT14((char)(uVar73 >> 0x20) + bVar24,
                                                           CONCAT13((char)(uVar73 >> 0x18) + bVar23,
                                                                    CONCAT12((char)(uVar73 >> 0x10)
                                                                             + bVar22,(short)
                                                  CONCAT71((int7)(uVar73 >> 8),(char)uVar73 + bVar21
                                                          )))))));
              uVar82 = paddusb(CONCAT17((-1 - cVar54) - cVar54,
                                        CONCAT16((-1 - cVar53) - cVar53,
                                                 CONCAT15((-1 - cVar52) - cVar52,
                                                          CONCAT14((-1 - cVar51) - cVar51,
                                                                   CONCAT13((-1 - cVar50) - cVar50,
                                                                            CONCAT12((-1 - cVar48) -
                                                                                     cVar48,(short)
                                                  CONCAT71((int7)(CONCAT17(-1 - cVar54,
                                                                           CONCAT16(-1 - cVar53,
                                                                                    CONCAT15(-1 - 
                                                  cVar52,CONCAT14(-1 - cVar51,
                                                                  CONCAT13(-1 - cVar50,
                                                                           CONCAT12(-1 - cVar48,
                                                                                    (short)CONCAT71(
                                                  0xffffffffffffff,-1 - cVar43))))))) >> 8),
                                                  (-1 - cVar43) - cVar43))))))),uVar71);
              uVar71 = paddusb(uVar71,uVar82);
              uVar72 = psubusb(uVar71,uVar82);
              uVar71 = paddusb(CONCAT17((uVar64 != 0) * (uVar64 < 0x100) * bVar84 - (0xff < uVar64),
                                        CONCAT16((bVar70 != 0) * (uVar69 < 0x100) * bVar70 -
                                                 (0xff < uVar69),
                                                 CONCAT15((uVar60 != 0) * (uVar60 < 0x100) * bVar68
                                                          - (0xff < uVar60),
                                                          CONCAT14((uVar66 != 0) * (uVar66 < 0x100)
                                                                   * bVar67 - (0xff < uVar66),
                                                                   CONCAT13((uVar28 != 0) *
                                                                            (uVar28 < 0x100) *
                                                                            bVar58 - (0xff < uVar28)
                                                                            ,CONCAT12((uVar59 != 0)
                                                                                      * (uVar59 < 
                                                  0x100) * cVar57 - (0xff < uVar59),
                                                  CONCAT11((uVar30 != 0) * (uVar30 < 0x100) * bVar55
                                                           - (0xff < uVar30),
                                                           (bVar47 != 0) * (uVar49 < 0x100) * bVar47
                                                           - (0xff < uVar49)))))))),uVar72 & uVar80)
              ;
              uVar82 = psubusb(CONCAT44(CONCAT22((short)(CONCAT15(bVar85,CONCAT14(bVar81,uVar13)) >>
                                                        0x20),uVar44),uVar62),uVar72 & uVar80);
              uVar71 = psubusb(uVar71,~uVar80 & uVar72);
              uVar82 = paddusb(uVar82,~uVar80 & uVar72);
              uVar32 = CONCAT11((char)((ulong)uVar82 >> 0x18),(char)((ulong)uVar71 >> 0x18));
              uVar44 = CONCAT11((char)((ulong)uVar82 >> 0x20),(char)((ulong)uVar71 >> 0x20));
              uVar45 = CONCAT13((char)((ulong)uVar82 >> 0x28),
                                CONCAT12((char)((ulong)uVar71 >> 0x28),uVar44));
              uVar46 = CONCAT15((char)((ulong)uVar82 >> 0x30),
                                CONCAT14((char)((ulong)uVar71 >> 0x30),uVar45));
              *(ushort *)(lVar41 + 7) = CONCAT11((char)uVar82,(char)uVar71);
              *(short *)(lVar41 + 7 + lVar40) =
                   (short)CONCAT51((int5)((ulong)uVar82 >> 8),(char)((ulong)uVar71 >> 8));
              *(short *)(lVar41 + 7 + lVar40 * 2) =
                   (short)CONCAT31(CONCAT21(uVar32,(char)((ulong)uVar82 >> 0x10)),
                                   (char)((ulong)uVar71 >> 0x10));
              *(undefined2 *)(lVar41 + 7 + lVar37) = uVar32;
              *(undefined2 *)((long)puVar1 + lVar40 * 4 + 1) = uVar44;
              *(short *)((long)puVar1 + lVar40 * 5 + 1) = (short)((uint)uVar45 >> 0x10);
              *(short *)((long)puVar1 + lVar40 * 6 + 1) = (short)((uint6)uVar46 >> 0x20);
              *(short *)((long)puVar1 + lVar40 * 7 + 1) =
                   (short)(CONCAT17((char)((ulong)uVar82 >> 0x38),
                                    CONCAT16((char)((ulong)uVar71 >> 0x38),uVar46)) >> 0x30);
            }
            if (lVar33 < lVar20 + lVar19) goto LAB_00100725;
          }
          pbVar35 = pbVar35 + 4;
          lVar33 = lVar33 + 1;
          lVar37 = lVar2;
        } while( true );
      }
      lVar38 = lVar38 + lVar42;
      lVar37 = lVar39;
    } while (lVar39 < lVar3);
  }
  if (lVar17 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



void oc_loop_filter_init_mmxext(long *param_1,int param_2)

{
  *param_1 = (ulong)(~(param_2 * 2) & 0xff) * 0x101010101010101;
  return;
}



void oc_state_loop_filter_frag_rows_mmxext
               (long param_1,undefined8 *param_2,int param_3,int param_4,int param_5,int param_6)

{
  undefined4 *puVar1;
  long lVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined2 uVar18;
  undefined2 uVar19;
  undefined2 uVar20;
  long lVar21;
  byte *pbVar22;
  ulong *puVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  undefined1 uVar30;
  undefined2 uVar31;
  undefined1 uVar34;
  undefined1 uVar35;
  undefined1 uVar36;
  undefined4 uVar37;
  ulong uVar38;
  undefined8 uVar39;
  undefined1 uVar40;
  char cVar41;
  undefined1 uVar45;
  undefined1 uVar47;
  undefined1 uVar49;
  undefined1 uVar51;
  undefined1 uVar53;
  undefined1 uVar55;
  ulong uVar42;
  undefined1 uVar46;
  undefined1 uVar57;
  ulong uVar43;
  char cVar48;
  char cVar50;
  char cVar52;
  char cVar54;
  char cVar56;
  char cVar58;
  ulong uVar44;
  char cVar59;
  undefined1 uVar63;
  char cVar65;
  undefined4 uVar60;
  char cVar67;
  char cVar68;
  char cVar69;
  ulong uVar61;
  char cVar64;
  char cVar66;
  char cVar70;
  ulong uVar62;
  undefined1 uVar72;
  undefined8 uVar71;
  undefined1 uVar75;
  undefined8 uVar73;
  undefined8 uVar74;
  undefined4 uVar32;
  undefined6 uVar33;
  
  piVar4 = (int *)(param_1 + 0xa0 + (long)param_4 * 0x28);
  lVar29 = (long)*piVar4;
  lVar13 = *(long *)(piVar4 + 2);
  lVar14 = *(long *)(piVar4 + 4);
  iVar5 = *(int *)(param_1 + 0x398 + (long)param_4 * 4);
  lVar26 = (long)iVar5;
  lVar15 = *(long *)(param_1 + 0x118);
  lVar16 = *(long *)(param_1 + 0x120);
  lVar17 = *(long *)(param_1 + 0x360 + (long)param_3 * 8);
  lVar28 = param_5 * lVar29 + lVar13;
  if (param_5 * lVar29 < param_6 * lVar29) {
    lVar24 = lVar28;
    do {
      lVar25 = lVar24 + lVar29;
      if (lVar28 < lVar25) {
        lVar21 = lVar29 + lVar28;
        pbVar22 = (byte *)(lVar15 + lVar28 * 4);
        do {
          lVar2 = lVar24 + 1;
          if ((*pbVar22 & 1) == 0) {
joined_r0x00100c73:
            if (lVar25 == lVar2) break;
          }
          else {
            lVar27 = *(long *)(lVar16 + -8 + lVar2 * 8) + lVar17;
            if (lVar28 < lVar24) {
              puVar1 = (undefined4 *)(lVar27 + -2);
              uVar32 = *puVar1;
              uVar6 = *(undefined4 *)((long)puVar1 + lVar26);
              lVar24 = lVar26 * 3;
              uVar7 = *(undefined4 *)((long)puVar1 + lVar26 * 2);
              puVar3 = puVar1 + lVar26;
              uVar8 = *(undefined4 *)((long)puVar1 + lVar24);
              uVar9 = *puVar3;
              uVar10 = *(undefined4 *)((long)puVar3 + lVar26);
              uVar11 = *(undefined4 *)((long)puVar3 + lVar26 * 2);
              uVar12 = *(undefined4 *)((long)puVar3 + lVar24);
              uVar18 = CONCAT11((char)((uint)uVar6 >> 0x18),(char)((uint)uVar32 >> 0x18));
              uVar46 = (undefined1)((uint)uVar6 >> 0x10);
              uVar40 = (undefined1)((uint)uVar32 >> 0x10);
              uVar34 = (undefined1)((uint)uVar6 >> 8);
              uVar30 = (undefined1)((uint)uVar32 >> 8);
              uVar31 = CONCAT11((char)((uint)uVar8 >> 0x18),(char)((uint)uVar7 >> 0x18));
              uVar49 = (undefined1)((uint)uVar8 >> 0x10);
              uVar47 = (undefined1)((uint)uVar7 >> 0x10);
              uVar36 = (undefined1)((uint)uVar8 >> 8);
              uVar35 = (undefined1)((uint)uVar7 >> 8);
              uVar37 = CONCAT22((short)(CONCAT35(CONCAT21(uVar31,uVar49),CONCAT14(uVar47,uVar7)) >>
                                       0x20),
                                (short)(CONCAT35(CONCAT21(uVar18,uVar46),CONCAT14(uVar40,uVar32)) >>
                                       0x20));
              uVar19 = CONCAT11((char)((uint)uVar10 >> 0x18),(char)((uint)uVar9 >> 0x18));
              uVar53 = (undefined1)((uint)uVar10 >> 0x10);
              uVar51 = (undefined1)((uint)uVar9 >> 0x10);
              uVar63 = (undefined1)((uint)uVar10 >> 8);
              uVar45 = (undefined1)((uint)uVar9 >> 8);
              uVar20 = CONCAT11((char)((uint)uVar12 >> 0x18),(char)((uint)uVar11 >> 0x18));
              uVar57 = (undefined1)((uint)uVar12 >> 0x10);
              uVar55 = (undefined1)((uint)uVar11 >> 0x10);
              uVar75 = (undefined1)((uint)uVar12 >> 8);
              uVar72 = (undefined1)((uint)uVar11 >> 8);
              uVar60 = CONCAT22((short)(CONCAT35(CONCAT21(uVar20,uVar57),CONCAT14(uVar55,uVar11)) >>
                                       0x20),
                                (short)(CONCAT35(CONCAT21(uVar19,uVar53),CONCAT14(uVar51,uVar9)) >>
                                       0x20));
              uVar44 = CONCAT44(CONCAT22(CONCAT11(uVar75,uVar72),CONCAT11(uVar63,uVar45)),
                                CONCAT22(CONCAT11(uVar36,uVar35),CONCAT11(uVar34,uVar30)));
              uVar62 = CONCAT44(uVar60,uVar37);
              uVar42 = uVar44 ^ 0xffffffffffffffff;
              uVar61 = uVar62 ^ 0xffffffffffffffff;
              uVar40 = pavgb((char)uVar42,uVar40);
              uVar46 = pavgb((char)(uVar42 >> 8),uVar46);
              uVar47 = pavgb((char)(uVar42 >> 0x10),uVar47);
              uVar49 = pavgb((char)(uVar42 >> 0x18),uVar49);
              uVar51 = pavgb((char)(uVar42 >> 0x20),uVar51);
              uVar53 = pavgb((char)(uVar42 >> 0x28),uVar53);
              uVar55 = pavgb((char)(uVar42 >> 0x30),uVar55);
              uVar57 = pavgb((char)(uVar42 >> 0x38),uVar57);
              cVar59 = pavgb((char)uVar61,uVar30);
              cVar64 = pavgb((char)(uVar61 >> 8),uVar34);
              cVar65 = pavgb((char)(uVar61 >> 0x10),uVar35);
              cVar66 = pavgb((char)(uVar61 >> 0x18),uVar36);
              cVar67 = pavgb((char)(uVar61 >> 0x20),uVar45);
              cVar68 = pavgb((char)(uVar61 >> 0x28),uVar63);
              cVar69 = pavgb((char)(uVar61 >> 0x30),uVar72);
              cVar70 = pavgb((char)(uVar61 >> 0x38),uVar75);
              uVar43 = CONCAT17(uVar57,CONCAT16(uVar55,CONCAT15(uVar53,CONCAT14(uVar51,CONCAT13(
                                                  uVar49,CONCAT12(uVar47,CONCAT11(uVar46,uVar40)))))
                                               )) ^ 0xffffffffffffffff;
              cVar41 = (char)uVar43 - cVar59;
              cVar48 = (char)(uVar43 >> 0x10) - cVar65;
              cVar50 = (char)(uVar43 >> 0x18) - cVar66;
              cVar52 = (char)(uVar43 >> 0x20) - cVar67;
              cVar54 = (char)(uVar43 >> 0x28) - cVar68;
              cVar56 = (char)(uVar43 >> 0x30) - cVar69;
              cVar58 = (char)(uVar43 >> 0x38) - cVar70;
              uVar61 = CONCAT17(cVar58,CONCAT16(cVar56,CONCAT15(cVar54,CONCAT14(cVar52,CONCAT13(
                                                  cVar50,CONCAT12(cVar48,(short)CONCAT71((int7)(
                                                  uVar43 >> 8),cVar41)))))));
              uVar42 = CONCAT44(CONCAT22(CONCAT11((char)uVar12,(char)uVar11),
                                         CONCAT11((char)uVar10,(char)uVar9)),
                                CONCAT22(CONCAT11((char)uVar8,(char)uVar7),
                                         CONCAT11((char)uVar6,(char)uVar32))) ^ 0xffffffffffffffff ^
                       uVar61;
              uVar38 = CONCAT44((int)(CONCAT26(uVar20,CONCAT24(uVar19,uVar60)) >> 0x20),
                                (int)(CONCAT26(uVar31,CONCAT24(uVar18,uVar37)) >> 0x20)) ^ uVar61;
              uVar30 = pavgb((char)uVar42,(char)uVar38);
              uVar40 = pavgb((char)(uVar42 >> 8),(char)(uVar38 >> 8));
              uVar34 = pavgb((char)(uVar42 >> 0x10),(char)(uVar38 >> 0x10));
              uVar46 = pavgb((char)(uVar42 >> 0x18),(char)(uVar38 >> 0x18));
              uVar35 = pavgb((char)(uVar42 >> 0x20),(char)(uVar38 >> 0x20));
              uVar47 = pavgb((char)(uVar42 >> 0x28),(char)(uVar38 >> 0x28));
              uVar36 = pavgb((char)(uVar42 >> 0x30),(char)(uVar38 >> 0x30));
              uVar49 = pavgb((char)(uVar42 >> 0x38),(char)(uVar38 >> 0x38));
              uVar73 = psllw(0xffffffffffffffff,7);
              uVar61 = CONCAT17(uVar49,CONCAT16(uVar36,CONCAT15(uVar47,CONCAT14(uVar35,CONCAT13(
                                                  uVar46,CONCAT12(uVar34,CONCAT11(uVar40,uVar30)))))
                                               )) ^ uVar61;
              uVar30 = pavgb((char)uVar61,cVar41 + cVar59);
              uVar40 = pavgb((char)(uVar61 >> 8),(char)(uVar43 >> 8) + cVar64);
              uVar34 = pavgb((char)(uVar61 >> 0x10),cVar48 + cVar65);
              uVar46 = pavgb((char)(uVar61 >> 0x18),cVar50 + cVar66);
              uVar35 = pavgb((char)(uVar61 >> 0x20),cVar52 + cVar67);
              uVar47 = pavgb((char)(uVar61 >> 0x28),cVar54 + cVar68);
              uVar36 = pavgb((char)(uVar61 >> 0x30),cVar56 + cVar69);
              uVar49 = pavgb((char)(uVar61 >> 0x38),cVar58 + cVar70);
              uVar74 = packsswb(uVar73,uVar73);
              uVar30 = pavgb(uVar30,cVar59);
              uVar40 = pavgb(uVar40,cVar64);
              uVar34 = pavgb(uVar34,cVar65);
              uVar46 = pavgb(uVar46,cVar66);
              uVar35 = pavgb(uVar35,cVar67);
              uVar47 = pavgb(uVar47,cVar68);
              uVar36 = pavgb(uVar36,cVar69);
              uVar49 = pavgb(uVar49,cVar70);
              uVar73 = CONCAT17(uVar49,CONCAT16(uVar36,CONCAT15(uVar47,CONCAT14(uVar35,CONCAT13(
                                                  uVar46,CONCAT12(uVar34,CONCAT11(uVar40,uVar30)))))
                                               ));
              uVar39 = psubusb(uVar74,uVar73);
              uVar73 = psubusb(uVar73,uVar74);
              uVar74 = paddusb(*param_2,uVar39);
              uVar71 = paddusb(*param_2,uVar73);
              uVar39 = paddusb(uVar39,uVar74);
              uVar73 = paddusb(uVar73,uVar71);
              uVar74 = psubusb(uVar39,uVar74);
              uVar73 = psubusb(uVar73,uVar71);
              uVar39 = paddusb(uVar44,uVar74);
              uVar74 = psubusb(uVar62,uVar74);
              uVar39 = psubusb(uVar39,uVar73);
              uVar73 = paddusb(uVar74,uVar73);
              uVar18 = CONCAT11((char)((ulong)uVar73 >> 0x18),(char)((ulong)uVar39 >> 0x18));
              uVar31 = CONCAT11((char)((ulong)uVar73 >> 0x20),(char)((ulong)uVar39 >> 0x20));
              uVar32 = CONCAT13((char)((ulong)uVar73 >> 0x28),
                                CONCAT12((char)((ulong)uVar39 >> 0x28),uVar31));
              uVar33 = CONCAT15((char)((ulong)uVar73 >> 0x30),
                                CONCAT14((char)((ulong)uVar39 >> 0x30),uVar32));
              *(ushort *)(lVar27 + -1) = CONCAT11((char)uVar73,(char)uVar39);
              *(short *)(lVar27 + -1 + lVar26) =
                   (short)CONCAT51((int5)((ulong)uVar73 >> 8),(char)((ulong)uVar39 >> 8));
              *(short *)(lVar27 + -1 + lVar26 * 2) =
                   (short)CONCAT31(CONCAT21(uVar18,(char)((ulong)uVar73 >> 0x10)),
                                   (char)((ulong)uVar39 >> 0x10));
              *(undefined2 *)(lVar27 + -1 + lVar24) = uVar18;
              *(undefined2 *)((long)puVar1 + lVar26 * 4 + 1) = uVar31;
              *(short *)((long)puVar1 + lVar26 * 5 + 1) = (short)((uint)uVar32 >> 0x10);
              *(short *)((long)puVar1 + lVar26 * 6 + 1) = (short)((uint6)uVar33 >> 0x20);
              *(short *)((long)puVar1 + lVar26 * 7 + 1) =
                   (short)(CONCAT17((char)((ulong)uVar73 >> 0x38),
                                    CONCAT16((char)((ulong)uVar39 >> 0x38),uVar33)) >> 0x30);
            }
            if (lVar13 < lVar28) {
              puVar23 = (ulong *)(lVar27 - iVar5 * 2);
              uVar42 = *(ulong *)((long)puVar23 + lVar26);
              uVar61 = *(ulong *)((long)puVar23 + lVar26 * 2);
              uVar44 = uVar42 ^ 0xffffffffffffffff;
              uVar62 = uVar61 ^ 0xffffffffffffffff;
              uVar30 = pavgb((char)uVar44,(char)uVar61);
              uVar40 = pavgb((char)(uVar44 >> 8),(char)(uVar61 >> 8));
              uVar34 = pavgb((char)(uVar44 >> 0x10),(char)(uVar61 >> 0x10));
              uVar46 = pavgb((char)(uVar44 >> 0x18),(char)(uVar61 >> 0x18));
              uVar35 = pavgb((char)(uVar44 >> 0x20),(char)(uVar61 >> 0x20));
              uVar47 = pavgb((char)(uVar44 >> 0x28),(char)(uVar61 >> 0x28));
              uVar36 = pavgb((char)(uVar44 >> 0x30),(char)(uVar61 >> 0x30));
              uVar49 = pavgb((char)(uVar44 >> 0x38),(char)(uVar61 >> 0x38));
              cVar59 = pavgb((char)uVar62,(char)uVar42);
              cVar64 = pavgb((char)(uVar62 >> 8),(char)(uVar42 >> 8));
              cVar65 = pavgb((char)(uVar62 >> 0x10),(char)(uVar42 >> 0x10));
              cVar66 = pavgb((char)(uVar62 >> 0x18),(char)(uVar42 >> 0x18));
              cVar67 = pavgb((char)(uVar62 >> 0x20),(char)(uVar42 >> 0x20));
              cVar68 = pavgb((char)(uVar62 >> 0x28),(char)(uVar42 >> 0x28));
              cVar69 = pavgb((char)(uVar62 >> 0x30),(char)(uVar42 >> 0x30));
              cVar70 = pavgb((char)(uVar62 >> 0x38),(char)(uVar42 >> 0x38));
              uVar43 = CONCAT17(uVar49,CONCAT16(uVar36,CONCAT15(uVar47,CONCAT14(uVar35,CONCAT13(
                                                  uVar46,CONCAT12(uVar34,CONCAT11(uVar40,uVar30)))))
                                               )) ^ 0xffffffffffffffff;
              cVar41 = (char)uVar43 - cVar59;
              cVar48 = (char)(uVar43 >> 0x10) - cVar65;
              cVar50 = (char)(uVar43 >> 0x18) - cVar66;
              cVar52 = (char)(uVar43 >> 0x20) - cVar67;
              cVar54 = (char)(uVar43 >> 0x28) - cVar68;
              cVar56 = (char)(uVar43 >> 0x30) - cVar69;
              cVar58 = (char)(uVar43 >> 0x38) - cVar70;
              uVar62 = CONCAT17(cVar58,CONCAT16(cVar56,CONCAT15(cVar54,CONCAT14(cVar52,CONCAT13(
                                                  cVar50,CONCAT12(cVar48,(short)CONCAT71((int7)(
                                                  uVar43 >> 8),cVar41)))))));
              uVar44 = *puVar23 ^ 0xffffffffffffffff ^ uVar62;
              uVar38 = *(ulong *)((long)puVar23 + lVar26 * 3) ^ uVar62;
              uVar30 = pavgb((char)uVar44,(char)uVar38);
              uVar40 = pavgb((char)(uVar44 >> 8),(char)(uVar38 >> 8));
              uVar34 = pavgb((char)(uVar44 >> 0x10),(char)(uVar38 >> 0x10));
              uVar46 = pavgb((char)(uVar44 >> 0x18),(char)(uVar38 >> 0x18));
              uVar35 = pavgb((char)(uVar44 >> 0x20),(char)(uVar38 >> 0x20));
              uVar47 = pavgb((char)(uVar44 >> 0x28),(char)(uVar38 >> 0x28));
              uVar36 = pavgb((char)(uVar44 >> 0x30),(char)(uVar38 >> 0x30));
              uVar49 = pavgb((char)(uVar44 >> 0x38),(char)(uVar38 >> 0x38));
              uVar73 = psllw(0xffffffffffffffff,7);
              uVar62 = CONCAT17(uVar49,CONCAT16(uVar36,CONCAT15(uVar47,CONCAT14(uVar35,CONCAT13(
                                                  uVar46,CONCAT12(uVar34,CONCAT11(uVar40,uVar30)))))
                                               )) ^ uVar62;
              uVar30 = pavgb((char)uVar62,cVar41 + cVar59);
              uVar40 = pavgb((char)(uVar62 >> 8),(char)(uVar43 >> 8) + cVar64);
              uVar34 = pavgb((char)(uVar62 >> 0x10),cVar48 + cVar65);
              uVar46 = pavgb((char)(uVar62 >> 0x18),cVar50 + cVar66);
              uVar35 = pavgb((char)(uVar62 >> 0x20),cVar52 + cVar67);
              uVar47 = pavgb((char)(uVar62 >> 0x28),cVar54 + cVar68);
              uVar36 = pavgb((char)(uVar62 >> 0x30),cVar56 + cVar69);
              uVar49 = pavgb((char)(uVar62 >> 0x38),cVar58 + cVar70);
              uVar74 = packsswb(uVar73,uVar73);
              uVar30 = pavgb(uVar30,cVar59);
              uVar40 = pavgb(uVar40,cVar64);
              uVar34 = pavgb(uVar34,cVar65);
              uVar46 = pavgb(uVar46,cVar66);
              uVar35 = pavgb(uVar35,cVar67);
              uVar47 = pavgb(uVar47,cVar68);
              uVar36 = pavgb(uVar36,cVar69);
              uVar49 = pavgb(uVar49,cVar70);
              uVar73 = CONCAT17(uVar49,CONCAT16(uVar36,CONCAT15(uVar47,CONCAT14(uVar35,CONCAT13(
                                                  uVar46,CONCAT12(uVar34,CONCAT11(uVar40,uVar30)))))
                                               ));
              uVar39 = psubusb(uVar74,uVar73);
              uVar73 = psubusb(uVar73,uVar74);
              uVar74 = paddusb(*param_2,uVar39);
              uVar71 = paddusb(*param_2,uVar73);
              uVar39 = paddusb(uVar39,uVar74);
              uVar73 = paddusb(uVar73,uVar71);
              uVar74 = psubusb(uVar39,uVar74);
              uVar73 = psubusb(uVar73,uVar71);
              uVar39 = paddusb(uVar42,uVar74);
              uVar74 = psubusb(uVar61,uVar74);
              uVar39 = psubusb(uVar39,uVar73);
              uVar73 = paddusb(uVar74,uVar73);
              *(undefined8 *)((long)puVar23 + lVar26) = uVar39;
              *(undefined8 *)((long)puVar23 + lVar26 * 2) = uVar73;
            }
            if (lVar25 <= lVar2) {
              if (lVar21 < lVar14 + lVar13) {
LAB_00100ca5:
                if ((pbVar22[lVar29 * 4] & 1) == 0) {
                  puVar23 = (ulong *)(lVar27 + ((long)(iVar5 * 8) - (long)(iVar5 * 2)));
                  uVar42 = *(ulong *)((long)puVar23 + lVar26);
                  uVar61 = *(ulong *)((long)puVar23 + lVar26 * 2);
                  uVar44 = uVar42 ^ 0xffffffffffffffff;
                  uVar62 = uVar61 ^ 0xffffffffffffffff;
                  uVar30 = pavgb((char)uVar44,(char)uVar61);
                  uVar40 = pavgb((char)(uVar44 >> 8),(char)(uVar61 >> 8));
                  uVar34 = pavgb((char)(uVar44 >> 0x10),(char)(uVar61 >> 0x10));
                  uVar46 = pavgb((char)(uVar44 >> 0x18),(char)(uVar61 >> 0x18));
                  uVar35 = pavgb((char)(uVar44 >> 0x20),(char)(uVar61 >> 0x20));
                  uVar47 = pavgb((char)(uVar44 >> 0x28),(char)(uVar61 >> 0x28));
                  uVar36 = pavgb((char)(uVar44 >> 0x30),(char)(uVar61 >> 0x30));
                  uVar49 = pavgb((char)(uVar44 >> 0x38),(char)(uVar61 >> 0x38));
                  cVar59 = pavgb((char)uVar62,(char)uVar42);
                  cVar64 = pavgb((char)(uVar62 >> 8),(char)(uVar42 >> 8));
                  cVar65 = pavgb((char)(uVar62 >> 0x10),(char)(uVar42 >> 0x10));
                  cVar66 = pavgb((char)(uVar62 >> 0x18),(char)(uVar42 >> 0x18));
                  cVar67 = pavgb((char)(uVar62 >> 0x20),(char)(uVar42 >> 0x20));
                  cVar68 = pavgb((char)(uVar62 >> 0x28),(char)(uVar42 >> 0x28));
                  cVar69 = pavgb((char)(uVar62 >> 0x30),(char)(uVar42 >> 0x30));
                  cVar70 = pavgb((char)(uVar62 >> 0x38),(char)(uVar42 >> 0x38));
                  uVar43 = CONCAT17(uVar49,CONCAT16(uVar36,CONCAT15(uVar47,CONCAT14(uVar35,CONCAT13(
                                                  uVar46,CONCAT12(uVar34,CONCAT11(uVar40,uVar30)))))
                                                  )) ^ 0xffffffffffffffff;
                  cVar41 = (char)uVar43 - cVar59;
                  cVar48 = (char)(uVar43 >> 0x10) - cVar65;
                  cVar50 = (char)(uVar43 >> 0x18) - cVar66;
                  cVar52 = (char)(uVar43 >> 0x20) - cVar67;
                  cVar54 = (char)(uVar43 >> 0x28) - cVar68;
                  cVar56 = (char)(uVar43 >> 0x30) - cVar69;
                  cVar58 = (char)(uVar43 >> 0x38) - cVar70;
                  uVar62 = CONCAT17(cVar58,CONCAT16(cVar56,CONCAT15(cVar54,CONCAT14(cVar52,CONCAT13(
                                                  cVar50,CONCAT12(cVar48,(short)CONCAT71((int7)(
                                                  uVar43 >> 8),cVar41)))))));
                  uVar44 = *puVar23 ^ 0xffffffffffffffff ^ uVar62;
                  uVar38 = *(ulong *)((long)puVar23 + lVar26 * 3) ^ uVar62;
                  uVar30 = pavgb((char)uVar44,(char)uVar38);
                  uVar40 = pavgb((char)(uVar44 >> 8),(char)(uVar38 >> 8));
                  uVar34 = pavgb((char)(uVar44 >> 0x10),(char)(uVar38 >> 0x10));
                  uVar46 = pavgb((char)(uVar44 >> 0x18),(char)(uVar38 >> 0x18));
                  uVar35 = pavgb((char)(uVar44 >> 0x20),(char)(uVar38 >> 0x20));
                  uVar47 = pavgb((char)(uVar44 >> 0x28),(char)(uVar38 >> 0x28));
                  uVar36 = pavgb((char)(uVar44 >> 0x30),(char)(uVar38 >> 0x30));
                  uVar49 = pavgb((char)(uVar44 >> 0x38),(char)(uVar38 >> 0x38));
                  uVar73 = psllw(0xffffffffffffffff,7);
                  uVar62 = CONCAT17(uVar49,CONCAT16(uVar36,CONCAT15(uVar47,CONCAT14(uVar35,CONCAT13(
                                                  uVar46,CONCAT12(uVar34,CONCAT11(uVar40,uVar30)))))
                                                  )) ^ uVar62;
                  uVar30 = pavgb((char)uVar62,cVar41 + cVar59);
                  uVar40 = pavgb((char)(uVar62 >> 8),(char)(uVar43 >> 8) + cVar64);
                  uVar34 = pavgb((char)(uVar62 >> 0x10),cVar48 + cVar65);
                  uVar46 = pavgb((char)(uVar62 >> 0x18),cVar50 + cVar66);
                  uVar35 = pavgb((char)(uVar62 >> 0x20),cVar52 + cVar67);
                  uVar47 = pavgb((char)(uVar62 >> 0x28),cVar54 + cVar68);
                  uVar36 = pavgb((char)(uVar62 >> 0x30),cVar56 + cVar69);
                  uVar49 = pavgb((char)(uVar62 >> 0x38),cVar58 + cVar70);
                  uVar74 = packsswb(uVar73,uVar73);
                  uVar30 = pavgb(uVar30,cVar59);
                  uVar40 = pavgb(uVar40,cVar64);
                  uVar34 = pavgb(uVar34,cVar65);
                  uVar46 = pavgb(uVar46,cVar66);
                  uVar35 = pavgb(uVar35,cVar67);
                  uVar47 = pavgb(uVar47,cVar68);
                  uVar36 = pavgb(uVar36,cVar69);
                  uVar49 = pavgb(uVar49,cVar70);
                  uVar73 = CONCAT17(uVar49,CONCAT16(uVar36,CONCAT15(uVar47,CONCAT14(uVar35,CONCAT13(
                                                  uVar46,CONCAT12(uVar34,CONCAT11(uVar40,uVar30)))))
                                                  ));
                  uVar39 = psubusb(uVar74,uVar73);
                  uVar73 = psubusb(uVar73,uVar74);
                  uVar74 = paddusb(*param_2,uVar39);
                  uVar71 = paddusb(*param_2,uVar73);
                  uVar39 = paddusb(uVar39,uVar74);
                  uVar73 = paddusb(uVar73,uVar71);
                  uVar74 = psubusb(uVar39,uVar74);
                  uVar73 = psubusb(uVar73,uVar71);
                  uVar39 = paddusb(uVar42,uVar74);
                  uVar74 = psubusb(uVar61,uVar74);
                  uVar39 = psubusb(uVar39,uVar73);
                  uVar73 = paddusb(uVar74,uVar73);
                  *(undefined8 *)((long)puVar23 + lVar26) = uVar39;
                  *(undefined8 *)((long)puVar23 + lVar26 * 2) = uVar73;
                }
                goto joined_r0x00100c73;
              }
              break;
            }
            if ((pbVar22[4] & 1) == 0) {
              puVar1 = (undefined4 *)(lVar27 + 6);
              uVar32 = *puVar1;
              uVar6 = *(undefined4 *)((long)puVar1 + lVar26);
              lVar24 = lVar26 * 3;
              uVar7 = *(undefined4 *)((long)puVar1 + lVar26 * 2);
              puVar3 = puVar1 + lVar26;
              uVar8 = *(undefined4 *)((long)puVar1 + lVar24);
              uVar9 = *puVar3;
              uVar10 = *(undefined4 *)((long)puVar3 + lVar26);
              uVar11 = *(undefined4 *)((long)puVar3 + lVar26 * 2);
              uVar12 = *(undefined4 *)((long)puVar3 + lVar24);
              uVar18 = CONCAT11((char)((uint)uVar6 >> 0x18),(char)((uint)uVar32 >> 0x18));
              uVar46 = (undefined1)((uint)uVar6 >> 0x10);
              uVar40 = (undefined1)((uint)uVar32 >> 0x10);
              uVar34 = (undefined1)((uint)uVar6 >> 8);
              uVar30 = (undefined1)((uint)uVar32 >> 8);
              uVar31 = CONCAT11((char)((uint)uVar8 >> 0x18),(char)((uint)uVar7 >> 0x18));
              uVar49 = (undefined1)((uint)uVar8 >> 0x10);
              uVar47 = (undefined1)((uint)uVar7 >> 0x10);
              uVar36 = (undefined1)((uint)uVar8 >> 8);
              uVar35 = (undefined1)((uint)uVar7 >> 8);
              uVar37 = CONCAT22((short)(CONCAT35(CONCAT21(uVar31,uVar49),CONCAT14(uVar47,uVar7)) >>
                                       0x20),
                                (short)(CONCAT35(CONCAT21(uVar18,uVar46),CONCAT14(uVar40,uVar32)) >>
                                       0x20));
              uVar19 = CONCAT11((char)((uint)uVar10 >> 0x18),(char)((uint)uVar9 >> 0x18));
              uVar53 = (undefined1)((uint)uVar10 >> 0x10);
              uVar51 = (undefined1)((uint)uVar9 >> 0x10);
              uVar63 = (undefined1)((uint)uVar10 >> 8);
              uVar45 = (undefined1)((uint)uVar9 >> 8);
              uVar20 = CONCAT11((char)((uint)uVar12 >> 0x18),(char)((uint)uVar11 >> 0x18));
              uVar57 = (undefined1)((uint)uVar12 >> 0x10);
              uVar55 = (undefined1)((uint)uVar11 >> 0x10);
              uVar75 = (undefined1)((uint)uVar12 >> 8);
              uVar72 = (undefined1)((uint)uVar11 >> 8);
              uVar60 = CONCAT22((short)(CONCAT35(CONCAT21(uVar20,uVar57),CONCAT14(uVar55,uVar11)) >>
                                       0x20),
                                (short)(CONCAT35(CONCAT21(uVar19,uVar53),CONCAT14(uVar51,uVar9)) >>
                                       0x20));
              uVar44 = CONCAT44(CONCAT22(CONCAT11(uVar75,uVar72),CONCAT11(uVar63,uVar45)),
                                CONCAT22(CONCAT11(uVar36,uVar35),CONCAT11(uVar34,uVar30)));
              uVar62 = CONCAT44(uVar60,uVar37);
              uVar42 = uVar44 ^ 0xffffffffffffffff;
              uVar61 = uVar62 ^ 0xffffffffffffffff;
              uVar40 = pavgb((char)uVar42,uVar40);
              uVar46 = pavgb((char)(uVar42 >> 8),uVar46);
              uVar47 = pavgb((char)(uVar42 >> 0x10),uVar47);
              uVar49 = pavgb((char)(uVar42 >> 0x18),uVar49);
              uVar51 = pavgb((char)(uVar42 >> 0x20),uVar51);
              uVar53 = pavgb((char)(uVar42 >> 0x28),uVar53);
              uVar55 = pavgb((char)(uVar42 >> 0x30),uVar55);
              uVar57 = pavgb((char)(uVar42 >> 0x38),uVar57);
              cVar59 = pavgb((char)uVar61,uVar30);
              cVar64 = pavgb((char)(uVar61 >> 8),uVar34);
              cVar65 = pavgb((char)(uVar61 >> 0x10),uVar35);
              cVar66 = pavgb((char)(uVar61 >> 0x18),uVar36);
              cVar67 = pavgb((char)(uVar61 >> 0x20),uVar45);
              cVar68 = pavgb((char)(uVar61 >> 0x28),uVar63);
              cVar69 = pavgb((char)(uVar61 >> 0x30),uVar72);
              cVar70 = pavgb((char)(uVar61 >> 0x38),uVar75);
              uVar43 = CONCAT17(uVar57,CONCAT16(uVar55,CONCAT15(uVar53,CONCAT14(uVar51,CONCAT13(
                                                  uVar49,CONCAT12(uVar47,CONCAT11(uVar46,uVar40)))))
                                               )) ^ 0xffffffffffffffff;
              cVar41 = (char)uVar43 - cVar59;
              cVar48 = (char)(uVar43 >> 0x10) - cVar65;
              cVar50 = (char)(uVar43 >> 0x18) - cVar66;
              cVar52 = (char)(uVar43 >> 0x20) - cVar67;
              cVar54 = (char)(uVar43 >> 0x28) - cVar68;
              cVar56 = (char)(uVar43 >> 0x30) - cVar69;
              cVar58 = (char)(uVar43 >> 0x38) - cVar70;
              uVar61 = CONCAT17(cVar58,CONCAT16(cVar56,CONCAT15(cVar54,CONCAT14(cVar52,CONCAT13(
                                                  cVar50,CONCAT12(cVar48,(short)CONCAT71((int7)(
                                                  uVar43 >> 8),cVar41)))))));
              uVar42 = CONCAT44(CONCAT22(CONCAT11((char)uVar12,(char)uVar11),
                                         CONCAT11((char)uVar10,(char)uVar9)),
                                CONCAT22(CONCAT11((char)uVar8,(char)uVar7),
                                         CONCAT11((char)uVar6,(char)uVar32))) ^ 0xffffffffffffffff ^
                       uVar61;
              uVar38 = CONCAT44((int)(CONCAT26(uVar20,CONCAT24(uVar19,uVar60)) >> 0x20),
                                (int)(CONCAT26(uVar31,CONCAT24(uVar18,uVar37)) >> 0x20)) ^ uVar61;
              uVar30 = pavgb((char)uVar42,(char)uVar38);
              uVar40 = pavgb((char)(uVar42 >> 8),(char)(uVar38 >> 8));
              uVar34 = pavgb((char)(uVar42 >> 0x10),(char)(uVar38 >> 0x10));
              uVar46 = pavgb((char)(uVar42 >> 0x18),(char)(uVar38 >> 0x18));
              uVar35 = pavgb((char)(uVar42 >> 0x20),(char)(uVar38 >> 0x20));
              uVar47 = pavgb((char)(uVar42 >> 0x28),(char)(uVar38 >> 0x28));
              uVar36 = pavgb((char)(uVar42 >> 0x30),(char)(uVar38 >> 0x30));
              uVar49 = pavgb((char)(uVar42 >> 0x38),(char)(uVar38 >> 0x38));
              uVar73 = psllw(0xffffffffffffffff,7);
              uVar61 = CONCAT17(uVar49,CONCAT16(uVar36,CONCAT15(uVar47,CONCAT14(uVar35,CONCAT13(
                                                  uVar46,CONCAT12(uVar34,CONCAT11(uVar40,uVar30)))))
                                               )) ^ uVar61;
              uVar30 = pavgb((char)uVar61,cVar41 + cVar59);
              uVar40 = pavgb((char)(uVar61 >> 8),(char)(uVar43 >> 8) + cVar64);
              uVar34 = pavgb((char)(uVar61 >> 0x10),cVar48 + cVar65);
              uVar46 = pavgb((char)(uVar61 >> 0x18),cVar50 + cVar66);
              uVar35 = pavgb((char)(uVar61 >> 0x20),cVar52 + cVar67);
              uVar47 = pavgb((char)(uVar61 >> 0x28),cVar54 + cVar68);
              uVar36 = pavgb((char)(uVar61 >> 0x30),cVar56 + cVar69);
              uVar49 = pavgb((char)(uVar61 >> 0x38),cVar58 + cVar70);
              uVar74 = packsswb(uVar73,uVar73);
              uVar30 = pavgb(uVar30,cVar59);
              uVar40 = pavgb(uVar40,cVar64);
              uVar34 = pavgb(uVar34,cVar65);
              uVar46 = pavgb(uVar46,cVar66);
              uVar35 = pavgb(uVar35,cVar67);
              uVar47 = pavgb(uVar47,cVar68);
              uVar36 = pavgb(uVar36,cVar69);
              uVar49 = pavgb(uVar49,cVar70);
              uVar73 = CONCAT17(uVar49,CONCAT16(uVar36,CONCAT15(uVar47,CONCAT14(uVar35,CONCAT13(
                                                  uVar46,CONCAT12(uVar34,CONCAT11(uVar40,uVar30)))))
                                               ));
              uVar39 = psubusb(uVar74,uVar73);
              uVar73 = psubusb(uVar73,uVar74);
              uVar74 = paddusb(*param_2,uVar39);
              uVar71 = paddusb(*param_2,uVar73);
              uVar39 = paddusb(uVar39,uVar74);
              uVar73 = paddusb(uVar73,uVar71);
              uVar74 = psubusb(uVar39,uVar74);
              uVar73 = psubusb(uVar73,uVar71);
              uVar39 = paddusb(uVar44,uVar74);
              uVar74 = psubusb(uVar62,uVar74);
              uVar39 = psubusb(uVar39,uVar73);
              uVar73 = paddusb(uVar74,uVar73);
              uVar18 = CONCAT11((char)((ulong)uVar73 >> 0x18),(char)((ulong)uVar39 >> 0x18));
              uVar31 = CONCAT11((char)((ulong)uVar73 >> 0x20),(char)((ulong)uVar39 >> 0x20));
              uVar32 = CONCAT13((char)((ulong)uVar73 >> 0x28),
                                CONCAT12((char)((ulong)uVar39 >> 0x28),uVar31));
              uVar33 = CONCAT15((char)((ulong)uVar73 >> 0x30),
                                CONCAT14((char)((ulong)uVar39 >> 0x30),uVar32));
              *(ushort *)(lVar27 + 7) = CONCAT11((char)uVar73,(char)uVar39);
              *(short *)(lVar27 + 7 + lVar26) =
                   (short)CONCAT51((int5)((ulong)uVar73 >> 8),(char)((ulong)uVar39 >> 8));
              *(short *)(lVar27 + 7 + lVar26 * 2) =
                   (short)CONCAT31(CONCAT21(uVar18,(char)((ulong)uVar73 >> 0x10)),
                                   (char)((ulong)uVar39 >> 0x10));
              *(undefined2 *)(lVar27 + 7 + lVar24) = uVar18;
              *(undefined2 *)((long)puVar1 + lVar26 * 4 + 1) = uVar31;
              *(short *)((long)puVar1 + lVar26 * 5 + 1) = (short)((uint)uVar32 >> 0x10);
              *(short *)((long)puVar1 + lVar26 * 6 + 1) = (short)((uint6)uVar33 >> 0x20);
              *(short *)((long)puVar1 + lVar26 * 7 + 1) =
                   (short)(CONCAT17((char)((ulong)uVar73 >> 0x38),
                                    CONCAT16((char)((ulong)uVar39 >> 0x38),uVar33)) >> 0x30);
            }
            if (lVar21 < lVar14 + lVar13) goto LAB_00100ca5;
          }
          pbVar22 = pbVar22 + 4;
          lVar21 = lVar21 + 1;
          lVar24 = lVar2;
        } while( true );
      }
      lVar28 = lVar28 + lVar29;
      lVar24 = lVar25;
    } while (lVar25 < param_6 * lVar29 + lVar13);
  }
  return;
}


