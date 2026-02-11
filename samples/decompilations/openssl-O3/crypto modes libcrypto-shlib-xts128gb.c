
undefined8
ossl_crypto_xts128gb_encrypt
          (undefined8 *param_1,ulong *param_2,ulong *param_3,ulong *param_4,ulong param_5,
          int param_6)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  ulong uVar4;
  ulong uVar7;
  undefined1 uVar8;
  undefined7 uVar9;
  undefined6 uVar10;
  int iVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  ulong uVar16;
  ulong uVar17;
  uint uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong *puVar21;
  ulong *puVar22;
  long in_FS_OFFSET;
  ulong uVar23;
  undefined1 uStack_147;
  undefined1 uStack_12a;
  undefined1 uStack_11b;
  undefined1 uStack_10c;
  undefined1 uStack_fd;
  undefined1 uStack_ee;
  undefined1 uStack_df;
  undefined1 uStack_d1;
  undefined1 uStack_c2;
  undefined1 uStack_b3;
  undefined1 uStack_a4;
  undefined1 uStack_95;
  undefined1 uStack_86;
  ulong local_68;
  ulong uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  ulong uVar5;
  ulong uVar6;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_5 < 0x10) {
    uVar15 = 0xffffffff;
    goto LAB_00100786;
  }
  local_68 = *param_2;
  uStack_60 = param_2[1];
  (*(code *)param_1[3])(&local_68,&local_68,param_1[1]);
  if (((param_6 == 0) && ((param_5 & 0xf) != 0)) && (param_5 = param_5 - 0x10, param_5 < 0x10)) {
LAB_001001b0:
    uVar20 = local_68 >> 0x38 | (local_68 & 0xff000000000000) >> 0x28 |
             (local_68 & 0xff0000000000) >> 0x18 | (local_68 & 0xff00000000) >> 8 |
             (local_68 & 0xff000000) << 8 | (local_68 & 0xff0000) << 0x18 |
             (local_68 & 0xff00) << 0x28 | local_68 << 0x38;
    uVar6 = uStack_60 >> 0x38 | (uStack_60 & 0xff000000000000) >> 0x28 |
            (uStack_60 & 0xff0000000000) >> 0x18;
    uVar23 = uVar6 | (uStack_60 & 0xff00000000) >> 8;
    uVar14 = uVar23 | (uStack_60 & 0xff000000) << 8;
    uVar12 = uVar14 | (uStack_60 & 0xff0000) << 0x18;
    uVar17 = uVar12 | (uStack_60 & 0xff00) << 0x28;
    uVar4 = (uVar17 | uStack_60 << 0x38) >> 1;
    uVar19 = uVar20 >> 1;
    if ((uStack_60 >> 0x38 & 1) != 0) {
      uVar19 = uVar19 & 0xffffffffffffff | (ulong)((uint)(uVar20 >> 0x39) ^ 0xffffffe1) << 0x38;
    }
    uVar19 = uVar19 >> 0x38 | (uVar19 & 0xff000000000000) >> 0x28 |
             (uVar19 & 0xff0000000000) >> 0x18 | (uVar19 & 0xff00000000) >> 8 |
             (uVar19 & 0xff000000) << 8 | (uVar19 & 0xff0000) << 0x18 | (uVar19 & 0xff00) << 0x28 |
             uVar19 << 0x38;
    uVar17 = ((local_68 >> 0x38) << 0x3f | uVar4) >> 0x38 | (uVar4 & 0xff000000000000) >> 0x28 |
             (uVar17 & 0x1fe0000000000) >> 0x19 | (uVar12 & 0x1fe00000000) >> 9 |
             ((uVar14 & 0x1fe000000) >> 1) << 8 | ((uVar23 & 0x1fe0000) >> 1) << 0x18 |
             ((uVar6 & 0x1fe00) >> 1) << 0x28 | uVar4 << 0x38;
    local_58 = *param_3 ^ uVar19;
    uStack_50 = param_3[1] ^ uVar17;
    (*(code *)param_1[2])(&local_58,&local_58,*param_1);
    uVar19 = uVar19 ^ local_58;
    uVar17 = uVar17 ^ uStack_50;
    local_58 = uVar19;
    uVar14 = local_58;
    uStack_50 = uVar17;
    if (param_5 != 0) {
      local_58._1_7_ = (undefined7)(uVar19 >> 8);
      uVar9 = local_58._1_7_;
      uStack_147 = (undefined1)(uVar19 >> 8);
      local_58._2_6_ = (undefined6)(uVar19 >> 0x10);
      uVar10 = local_58._2_6_;
      if (param_5 - 1 < 3) {
        uVar14 = param_3[2];
        *(char *)(param_4 + 2) = (char)uVar19;
        local_58 = CONCAT71(uVar9,(char)uVar14);
        if (param_5 != 1) {
          local_58._0_2_ = CONCAT11(*(undefined1 *)((long)param_3 + 0x11),(char)uVar14);
          local_58 = CONCAT62(uVar10,(undefined2)local_58);
          *(undefined1 *)((long)param_4 + 0x11) = uStack_147;
          if (param_5 == 3) goto LAB_00100287;
        }
      }
      else if (~(ulong)param_3 + (long)param_4 < 7) {
        uVar14 = param_3[2];
        *(char *)(param_4 + 2) = (char)uVar19;
        local_58._0_2_ = CONCAT11(*(undefined1 *)((long)param_3 + 0x11),(char)uVar14);
        *(undefined1 *)((long)param_4 + 0x11) = uStack_147;
LAB_00100287:
        uVar14 = local_58;
        uStack_86 = (undefined1)(uVar19 >> 0x10);
        local_58._0_3_ = CONCAT12(*(undefined1 *)((long)param_3 + 0x12),(undefined2)local_58);
        *(undefined1 *)((long)param_4 + 0x12) = uStack_86;
        if (param_5 != 3) {
          uStack_95 = (undefined1)(uVar19 >> 0x18);
          local_58._4_4_ = SUB84(uVar14,4);
          local_58._0_4_ = CONCAT13(*(undefined1 *)((long)param_3 + 0x13),(undefined3)local_58);
          *(undefined1 *)((long)param_4 + 0x13) = uStack_95;
          if (param_5 != 4) {
            uStack_a4 = (undefined1)(uVar19 >> 0x20);
            local_58._5_3_ = SUB83(uVar14,5);
            local_58._0_5_ = CONCAT14(*(undefined1 *)((long)param_3 + 0x14),(undefined4)local_58);
            *(undefined1 *)((long)param_4 + 0x14) = uStack_a4;
            if (param_5 != 5) {
              uStack_b3 = (undefined1)(uVar19 >> 0x28);
              local_58._6_2_ = SUB82(uVar14,6);
              local_58._0_6_ = CONCAT15(*(undefined1 *)((long)param_3 + 0x15),(undefined5)local_58);
              *(undefined1 *)((long)param_4 + 0x15) = uStack_b3;
              if (param_5 != 6) {
                uStack_c2 = (undefined1)(uVar19 >> 0x30);
                local_58._7_1_ = SUB81(uVar14,7);
                local_58._0_7_ =
                     CONCAT16(*(undefined1 *)((long)param_3 + 0x16),(undefined6)local_58);
                *(undefined1 *)((long)param_4 + 0x16) = uStack_c2;
                if (param_5 != 7) {
                  uStack_d1 = (undefined1)(uVar19 >> 0x38);
                  local_58 = CONCAT17(*(undefined1 *)((long)param_3 + 0x17),(undefined7)local_58);
                  *(undefined1 *)((long)param_4 + 0x17) = uStack_d1;
                  if (param_5 != 8) {
                    uVar14 = param_3[3];
                    *(char *)(param_4 + 3) = (char)uVar17;
                    uStack_50._1_7_ = (undefined7)(uVar17 >> 8);
                    uStack_50 = CONCAT71(uStack_50._1_7_,(char)uVar14);
                    if (param_5 != 9) {
                      uStack_df = (undefined1)(uVar17 >> 8);
                      uStack_50._2_6_ = (undefined6)(uVar17 >> 0x10);
                      uStack_50._0_2_ = CONCAT11(*(undefined1 *)((long)param_3 + 0x19),(char)uVar14)
                      ;
                      *(undefined1 *)((long)param_4 + 0x19) = uStack_df;
                      if (param_5 != 10) {
                        uStack_ee = (undefined1)(uVar17 >> 0x10);
                        uStack_50._3_5_ = (undefined5)(uVar17 >> 0x18);
                        uStack_50._0_3_ =
                             CONCAT12(*(undefined1 *)((long)param_3 + 0x1a),(undefined2)uStack_50);
                        *(undefined1 *)((long)param_4 + 0x1a) = uStack_ee;
                        if (param_5 != 0xb) {
                          uStack_fd = (undefined1)(uVar17 >> 0x18);
                          uStack_50._4_4_ = (undefined4)(uVar17 >> 0x20);
                          uStack_50._0_4_ =
                               CONCAT13(*(undefined1 *)((long)param_3 + 0x1b),(undefined3)uStack_50)
                          ;
                          *(undefined1 *)((long)param_4 + 0x1b) = uStack_fd;
                          if (param_5 != 0xc) {
                            uStack_10c = (undefined1)(uVar17 >> 0x20);
                            uStack_50._5_3_ = (undefined3)(uVar17 >> 0x28);
                            uStack_50._0_5_ =
                                 CONCAT14(*(undefined1 *)((long)param_3 + 0x1c),
                                          (undefined4)uStack_50);
                            *(undefined1 *)((long)param_4 + 0x1c) = uStack_10c;
                            if (param_5 != 0xd) {
                              uStack_11b = (undefined1)(uVar17 >> 0x28);
                              uStack_50._6_2_ = (undefined2)(uVar17 >> 0x30);
                              uStack_50._0_6_ =
                                   CONCAT15(*(undefined1 *)((long)param_3 + 0x1d),
                                            (undefined5)uStack_50);
                              *(undefined1 *)((long)param_4 + 0x1d) = uStack_11b;
                              if (param_5 == 0xf) {
                                uStack_12a = (undefined1)(uVar17 >> 0x30);
                                uStack_50._7_1_ = (undefined1)(uVar17 >> 0x38);
                                uStack_50._0_7_ =
                                     CONCAT16(*(undefined1 *)((long)param_3 + 0x1e),
                                              (undefined6)uStack_50);
                                *(undefined1 *)((long)param_4 + 0x1e) = uStack_12a;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      else {
        if (param_5 - 1 < 7) {
          lVar13 = 0;
          iVar11 = 0;
          uVar17 = param_5;
          local_58 = uVar14;
LAB_001006c2:
          puVar1 = (undefined4 *)((long)&local_58 + lVar13);
          uVar3 = *(undefined4 *)((long)param_3 + lVar13 + 0x10);
          uVar18 = iVar11 + 4;
          *(undefined4 *)((long)param_4 + lVar13 + 0x10) = *puVar1;
          *puVar1 = uVar3;
          if (uVar17 == 4) goto LAB_0010074f;
        }
        else {
          local_58 = param_3[2];
          param_4[2] = uVar19;
          if (param_5 == 8) goto LAB_0010074f;
          if (2 < param_5 - 9) {
            lVar13 = 8;
            iVar11 = 8;
            uVar17 = param_5 - 8;
            goto LAB_001006c2;
          }
          uVar18 = 8;
        }
        uVar2 = *(undefined1 *)((long)&local_58 + (ulong)uVar18);
        *(undefined1 *)((long)&local_58 + (ulong)uVar18) =
             *(undefined1 *)((long)param_3 + (ulong)(uVar18 + 0x10));
        uVar14 = (ulong)(uVar18 + 1);
        *(undefined1 *)((long)param_4 + (ulong)(uVar18 + 0x10)) = uVar2;
        if (uVar14 < param_5) {
          uVar2 = *(undefined1 *)((long)param_3 + (ulong)(uVar18 + 0x11));
          *(undefined1 *)((long)param_4 + (ulong)(uVar18 + 0x11)) =
               *(undefined1 *)((long)&local_58 + uVar14);
          *(undefined1 *)((long)&local_58 + uVar14) = uVar2;
          uVar14 = (ulong)(uVar18 + 2);
          if (uVar14 < param_5) {
            uVar2 = *(undefined1 *)((long)param_3 + (ulong)(uVar18 + 0x12));
            *(undefined1 *)((long)param_4 + (ulong)(uVar18 + 0x12)) =
                 *(undefined1 *)((long)&local_58 + uVar14);
            *(undefined1 *)((long)&local_58 + uVar14) = uVar2;
          }
        }
      }
    }
LAB_0010074f:
    local_58 = local_58 ^ local_68;
    uStack_50 = uStack_50 ^ uStack_60;
    (*(code *)param_1[2])(&local_58,&local_58,*param_1);
    *param_4 = local_68 ^ local_58;
    param_4[1] = uStack_60 ^ uStack_50;
  }
  else {
    do {
      puVar22 = param_4;
      puVar21 = param_3;
      uVar17 = param_5;
      param_4 = puVar22 + 2;
      local_58 = *puVar21 ^ local_68;
      uStack_50 = puVar21[1] ^ uStack_60;
      (*(code *)param_1[2])(&local_58,&local_58,*param_1);
      param_3 = puVar21 + 2;
      uVar14 = local_68 ^ local_58;
      uVar23 = uStack_60 ^ uStack_50;
      *puVar22 = uVar14;
      puVar22[1] = uVar23;
      local_58 = uVar14;
      uVar14 = local_58;
      uStack_50 = uVar23;
      param_5 = uVar17 - 0x10;
      if (param_5 == 0) goto LAB_00100784;
      uVar12 = uStack_60 >> 0x38;
      uVar4 = uVar12 | (uStack_60 & 0xff000000000000) >> 0x28 | (uStack_60 & 0xff0000000000) >> 0x18
      ;
      uVar19 = uVar4 | (uStack_60 & 0xff00000000) >> 8;
      uVar20 = uVar19 | (uStack_60 & 0xff000000) << 8;
      uVar5 = uVar20 | (uStack_60 & 0xff0000) << 0x18;
      uVar6 = uVar5 | (uStack_60 & 0xff00) << 0x28;
      uVar7 = (uVar6 | uStack_60 << 0x38) >> 1;
      uVar16 = (local_68 >> 0x38) << 0x3f | uVar7;
      uStack_60 = (local_68 >> 0x38 | (local_68 & 0xff000000000000) >> 0x28 |
                   (local_68 & 0xff0000000000) >> 0x18 | (local_68 & 0xff00000000) >> 8 |
                   (local_68 & 0xff000000) << 8 | (local_68 & 0xff0000) << 0x18 |
                   (local_68 & 0xff00) << 0x28 | local_68 << 0x38) >> 1;
      if ((uVar12 & 1) == 0) {
        uVar12 = uVar16 >> 0x38 | (uVar7 & 0xff000000000000) >> 0x28 |
                 (uVar6 & 0x1fe0000000000) >> 0x19 | (uVar5 & 0x1fe00000000) >> 9 |
                 ((uVar20 & 0x1fe000000) >> 1) << 8 | ((uVar19 & 0x1fe0000) >> 1) << 0x18 |
                 ((uVar4 & 0x1fe00) >> 1) << 0x28 | uVar7 << 0x38;
      }
      else {
        uStack_60 = CONCAT17((byte)local_68 >> 1,(undefined7)uStack_60) ^ 0xe100000000000000;
        uVar12 = uVar16 >> 0x38 | (uVar7 & 0xff000000000000) >> 0x28 |
                 (uVar6 & 0x1fe0000000000) >> 0x19 | (uVar5 & 0x1fe00000000) >> 9 |
                 ((uVar20 & 0x1fe000000) >> 1) << 8 | ((uVar19 & 0x1fe0000) >> 1) << 0x18 |
                 ((uVar4 & 0x1fe00) >> 1) << 0x28 | uVar7 << 0x38;
      }
      local_68 = uStack_60 >> 0x38 | (uStack_60 & 0xff000000000000) >> 0x28 |
                 (uStack_60 & 0xff0000000000) >> 0x18 | (uStack_60 & 0xff00000000) >> 8 |
                 (uStack_60 & 0xff000000) << 8 | (uStack_60 & 0xff0000) << 0x18 |
                 (uStack_60 & 0xff00) << 0x28 | uStack_60 << 0x38;
      uStack_60 = uVar12;
    } while (0xf < param_5);
    if (param_6 == 0) goto LAB_001001b0;
    local_58._0_1_ = (undefined1)uVar14;
    uVar2 = (undefined1)local_58;
    local_58._1_7_ = (undefined7)(uVar14 >> 8);
    uVar9 = local_58._1_7_;
    local_58._1_1_ = (undefined1)(uVar14 >> 8);
    uVar8 = local_58._1_1_;
    local_58._2_6_ = (undefined6)(uVar14 >> 0x10);
    uVar10 = local_58._2_6_;
    if (uVar17 - 0x11 < 3) {
      uVar14 = *param_3;
      local_58 = CONCAT71(uVar9,(char)uVar14);
      *(undefined1 *)param_4 = uVar2;
      if (param_5 != 1) {
        local_58._0_2_ = CONCAT11(*(undefined1 *)((long)puVar21 + 0x11),(char)uVar14);
        local_58 = CONCAT62(uVar10,(undefined2)local_58);
        *(undefined1 *)((long)puVar22 + 0x11) = uVar8;
        if (param_5 == 3) goto LAB_001004d1;
      }
    }
    else if ((ulong)((long)param_4 - (long)((long)puVar21 + 0x11)) < 7) {
      uVar14 = *param_3;
      *(undefined1 *)param_4 = (undefined1)local_58;
      uVar2 = *(undefined1 *)((long)puVar21 + 0x11);
      *(undefined1 *)((long)puVar22 + 0x11) = local_58._1_1_;
      local_58._0_2_ = CONCAT11(uVar2,(char)uVar14);
LAB_001004d1:
      uVar14 = local_58;
      uVar2 = local_58._2_1_;
      local_58._0_3_ = CONCAT12(*(undefined1 *)((long)puVar21 + 0x12),(undefined2)local_58);
      *(undefined1 *)((long)puVar22 + 0x12) = uVar2;
      if (param_5 != 3) {
        local_58._3_1_ = SUB81(uVar14,3);
        uVar2 = local_58._3_1_;
        local_58._4_4_ = SUB84(uVar14,4);
        local_58._0_4_ = CONCAT13(*(undefined1 *)((long)puVar21 + 0x13),(undefined3)local_58);
        *(undefined1 *)((long)puVar22 + 0x13) = uVar2;
        if (param_5 != 4) {
          local_58._4_1_ = SUB81(uVar14,4);
          uVar2 = local_58._4_1_;
          local_58._5_3_ = SUB83(uVar14,5);
          local_58._0_5_ = CONCAT14(*(undefined1 *)((long)puVar21 + 0x14),(undefined4)local_58);
          *(undefined1 *)((long)puVar22 + 0x14) = uVar2;
          if (param_5 != 5) {
            local_58._5_1_ = SUB81(uVar14,5);
            uVar2 = local_58._5_1_;
            local_58._6_2_ = SUB82(uVar14,6);
            local_58._0_6_ = CONCAT15(*(undefined1 *)((long)puVar21 + 0x15),(undefined5)local_58);
            *(undefined1 *)((long)puVar22 + 0x15) = uVar2;
            if (param_5 != 6) {
              local_58._6_1_ = SUB81(uVar14,6);
              uVar2 = local_58._6_1_;
              local_58._7_1_ = SUB81(uVar14,7);
              uVar8 = local_58._7_1_;
              local_58._0_7_ = CONCAT16(*(undefined1 *)((long)puVar21 + 0x16),(undefined6)local_58);
              *(undefined1 *)((long)puVar22 + 0x16) = uVar2;
              if (param_5 != 7) {
                local_58 = CONCAT17(*(undefined1 *)((long)puVar21 + 0x17),(undefined7)local_58);
                *(undefined1 *)((long)puVar22 + 0x17) = uVar8;
                if (param_5 != 8) {
                  uVar14 = puVar21[3];
                  uStack_50._0_1_ = (undefined1)uVar23;
                  uVar2 = (undefined1)uStack_50;
                  uStack_50._1_7_ = (undefined7)(uVar23 >> 8);
                  uStack_50 = CONCAT71(uStack_50._1_7_,(char)uVar14);
                  *(undefined1 *)(puVar22 + 3) = uVar2;
                  if (param_5 != 9) {
                    uStack_50._1_1_ = (undefined1)(uVar23 >> 8);
                    uVar2 = uStack_50._1_1_;
                    uStack_50._2_6_ = (undefined6)(uVar23 >> 0x10);
                    uStack_50._0_2_ = CONCAT11(*(undefined1 *)((long)puVar21 + 0x19),(char)uVar14);
                    *(undefined1 *)((long)puVar22 + 0x19) = uVar2;
                    if (param_5 != 10) {
                      uStack_50._2_1_ = (undefined1)(uVar23 >> 0x10);
                      uVar2 = uStack_50._2_1_;
                      uStack_50._3_5_ = (undefined5)(uVar23 >> 0x18);
                      uStack_50._0_3_ =
                           CONCAT12(*(undefined1 *)((long)puVar21 + 0x1a),(undefined2)uStack_50);
                      *(undefined1 *)((long)puVar22 + 0x1a) = uVar2;
                      if (param_5 != 0xb) {
                        uStack_50._3_1_ = (undefined1)(uVar23 >> 0x18);
                        uVar2 = uStack_50._3_1_;
                        uStack_50._4_4_ = (undefined4)(uVar23 >> 0x20);
                        uStack_50._0_4_ =
                             CONCAT13(*(undefined1 *)((long)puVar21 + 0x1b),(undefined3)uStack_50);
                        *(undefined1 *)((long)puVar22 + 0x1b) = uVar2;
                        if (param_5 != 0xc) {
                          uStack_50._4_1_ = (undefined1)(uVar23 >> 0x20);
                          uVar2 = uStack_50._4_1_;
                          uStack_50._5_3_ = (undefined3)(uVar23 >> 0x28);
                          uStack_50._0_5_ =
                               CONCAT14(*(undefined1 *)((long)puVar21 + 0x1c),(undefined4)uStack_50)
                          ;
                          *(undefined1 *)((long)puVar22 + 0x1c) = uVar2;
                          if (param_5 != 0xd) {
                            uStack_50._5_1_ = (undefined1)(uVar23 >> 0x28);
                            uVar2 = uStack_50._5_1_;
                            uStack_50._6_2_ = (undefined2)(uVar23 >> 0x30);
                            uStack_50._0_6_ =
                                 CONCAT15(*(undefined1 *)((long)puVar21 + 0x1d),
                                          (undefined5)uStack_50);
                            *(undefined1 *)((long)puVar22 + 0x1d) = uVar2;
                            if (param_5 == 0xf) {
                              uStack_50._6_1_ = (undefined1)(uVar23 >> 0x30);
                              uVar2 = uStack_50._6_1_;
                              uStack_50._7_1_ = (undefined1)(uVar23 >> 0x38);
                              uStack_50._0_7_ =
                                   CONCAT16(*(undefined1 *)((long)puVar21 + 0x1e),
                                            (undefined6)uStack_50);
                              *(undefined1 *)((long)puVar22 + 0x1e) = uVar2;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    else {
      if (uVar17 - 0x11 < 7) {
        lVar13 = 0;
        iVar11 = 0;
        uVar17 = param_5;
        local_58 = uVar14;
LAB_0010081e:
        puVar1 = (undefined4 *)((long)&local_58 + lVar13);
        uVar3 = *(undefined4 *)((long)param_3 + lVar13);
        uVar18 = iVar11 + 4;
        *(undefined4 *)((long)param_4 + lVar13) = *puVar1;
        lVar13 = lVar13 + 4;
        *puVar1 = uVar3;
        if (uVar17 == 4) goto LAB_0010089c;
      }
      else {
        local_58 = *param_3;
        *param_4 = uVar14;
        if (param_5 == 8) goto LAB_0010089c;
        if (2 < uVar17 - 0x19) {
          lVar13 = 8;
          iVar11 = 8;
          uVar17 = uVar17 - 0x18;
          goto LAB_0010081e;
        }
        uVar18 = 8;
        lVar13 = 8;
      }
      uVar2 = *(undefined1 *)((long)&local_58 + (ulong)uVar18);
      *(undefined1 *)((long)&local_58 + (ulong)uVar18) = *(undefined1 *)((long)param_3 + lVar13);
      *(undefined1 *)((long)param_4 + lVar13) = uVar2;
      uVar14 = (ulong)(uVar18 + 1);
      if (uVar14 < param_5) {
        uVar2 = *(undefined1 *)((long)param_3 + uVar14);
        *(undefined1 *)((long)param_4 + uVar14) = *(undefined1 *)((long)&local_58 + uVar14);
        *(undefined1 *)((long)&local_58 + uVar14) = uVar2;
        uVar14 = (ulong)(uVar18 + 2);
        if (uVar14 < param_5) {
          uVar2 = *(undefined1 *)((long)&local_58 + uVar14);
          *(undefined1 *)((long)&local_58 + uVar14) = *(undefined1 *)((long)param_3 + uVar14);
          *(undefined1 *)((long)param_4 + uVar14) = uVar2;
        }
      }
    }
LAB_0010089c:
    local_58 = local_68 ^ local_58;
    uStack_50 = uVar12 ^ uStack_50;
    (*(code *)param_1[2])(&local_58,&local_58,*param_1);
    *puVar22 = local_68 ^ local_58;
    puVar22[1] = uStack_60 ^ uStack_50;
  }
LAB_00100784:
  uVar15 = 0;
LAB_00100786:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar15;
}


