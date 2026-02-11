
undefined8
CRYPTO_xts128_encrypt
          (undefined8 *param_1,ulong *param_2,ulong *param_3,ulong *param_4,ulong param_5,
          int param_6)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined7 uVar4;
  undefined6 uVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  uint uVar12;
  undefined1 uVar13;
  ulong *puVar14;
  ulong *puVar15;
  long in_FS_OFFSET;
  ulong uVar16;
  ulong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_5 < 0x10) {
    uVar10 = 0xffffffff;
    goto LAB_00100102;
  }
  local_68 = *param_2;
  uStack_60 = param_2[1];
  (*(code *)param_1[3])(&local_68,&local_68,param_1[1]);
  if (((param_6 == 0) && ((param_5 & 0xf) != 0)) && (param_5 = param_5 - 0x10, param_5 < 0x10)) {
LAB_00100158:
    uVar11 = (ulong)(uStack_60._4_4_ >> 0x1f & 0x87) ^ local_68 * 2;
    uVar8 = uStack_60 << 1 | local_68 >> 0x3f;
    local_58 = uVar11 ^ *param_3;
    uStack_50 = param_3[1] ^ uVar8;
    (*(code *)param_1[2])(&local_58,&local_58,*param_1);
    uVar8 = uVar8 ^ uStack_50;
    uVar11 = uVar11 ^ local_58;
    uStack_50 = uVar8;
    local_58 = uVar11;
    uVar11 = local_58;
    if (param_5 != 0) {
      uVar13 = (undefined1)(uVar11 >> 8);
      local_58._1_7_ = (undefined7)(uVar11 >> 8);
      uVar4 = local_58._1_7_;
      local_58._2_6_ = (undefined6)(uVar11 >> 0x10);
      uVar5 = local_58._2_6_;
      if (param_5 - 1 < 3) {
        uVar16 = param_3[2];
        *(char *)(param_4 + 2) = (char)uVar11;
        local_58 = CONCAT71(uVar4,(char)uVar16);
        if (param_5 != 1) {
          uVar2 = *(undefined1 *)((long)param_3 + 0x11);
          *(undefined1 *)((long)param_4 + 0x11) = uVar13;
          local_58._0_2_ = CONCAT11(uVar2,(char)uVar16);
          local_58 = CONCAT62(uVar5,(undefined2)local_58);
          if (param_5 == 3) goto LAB_00100214;
        }
      }
      else if (~(ulong)param_3 + (long)param_4 < 7) {
        uVar16 = param_3[2];
        *(char *)(param_4 + 2) = (char)uVar11;
        uVar2 = *(undefined1 *)((long)param_3 + 0x11);
        *(undefined1 *)((long)param_4 + 0x11) = uVar13;
        local_58._0_2_ = CONCAT11(uVar2,(char)uVar16);
LAB_00100214:
        uVar16 = local_58;
        uVar13 = *(undefined1 *)((long)param_3 + 0x12);
        *(char *)((long)param_4 + 0x12) = (char)(uVar11 >> 0x10);
        local_58._0_3_ = CONCAT12(uVar13,(undefined2)local_58);
        if (param_5 != 3) {
          uVar13 = *(undefined1 *)((long)param_3 + 0x13);
          *(char *)((long)param_4 + 0x13) = (char)(uVar11 >> 0x18);
          local_58._4_4_ = SUB84(uVar16,4);
          local_58._0_4_ = CONCAT13(uVar13,(undefined3)local_58);
          if (param_5 != 4) {
            uVar13 = *(undefined1 *)((long)param_3 + 0x14);
            *(char *)((long)param_4 + 0x14) = (char)(uVar11 >> 0x20);
            local_58._5_3_ = SUB83(uVar16,5);
            local_58._0_5_ = CONCAT14(uVar13,(undefined4)local_58);
            if (param_5 != 5) {
              uVar13 = *(undefined1 *)((long)param_3 + 0x15);
              *(char *)((long)param_4 + 0x15) = (char)(uVar11 >> 0x28);
              local_58._6_2_ = SUB82(uVar16,6);
              local_58._0_6_ = CONCAT15(uVar13,(undefined5)local_58);
              if (param_5 != 6) {
                uVar13 = *(undefined1 *)((long)param_3 + 0x16);
                *(char *)((long)param_4 + 0x16) = (char)(uVar11 >> 0x30);
                local_58._7_1_ = SUB81(uVar16,7);
                local_58._0_7_ = CONCAT16(uVar13,(undefined6)local_58);
                if (param_5 != 7) {
                  uVar13 = *(undefined1 *)((long)param_3 + 0x17);
                  *(char *)((long)param_4 + 0x17) = (char)(uVar11 >> 0x38);
                  local_58 = CONCAT17(uVar13,(undefined7)local_58);
                  if (param_5 != 8) {
                    uVar11 = param_3[3];
                    *(char *)(param_4 + 3) = (char)uVar8;
                    uStack_50._1_7_ = (undefined7)(uVar8 >> 8);
                    uStack_50 = CONCAT71(uStack_50._1_7_,(char)uVar11);
                    if (param_5 != 9) {
                      uVar13 = *(undefined1 *)((long)param_3 + 0x19);
                      *(char *)((long)param_4 + 0x19) = (char)(uVar8 >> 8);
                      uStack_50._2_6_ = (undefined6)(uVar8 >> 0x10);
                      uStack_50._0_2_ = CONCAT11(uVar13,(char)uVar11);
                      if (param_5 != 10) {
                        uVar13 = *(undefined1 *)((long)param_3 + 0x1a);
                        *(char *)((long)param_4 + 0x1a) = (char)(uVar8 >> 0x10);
                        uStack_50._3_5_ = (undefined5)(uVar8 >> 0x18);
                        uStack_50._0_3_ = CONCAT12(uVar13,(undefined2)uStack_50);
                        if (param_5 != 0xb) {
                          uVar13 = *(undefined1 *)((long)param_3 + 0x1b);
                          *(char *)((long)param_4 + 0x1b) = (char)(uVar8 >> 0x18);
                          uStack_50._4_4_ = (undefined4)(uVar8 >> 0x20);
                          uStack_50._0_4_ = CONCAT13(uVar13,(undefined3)uStack_50);
                          if (param_5 != 0xc) {
                            uVar13 = *(undefined1 *)((long)param_3 + 0x1c);
                            *(char *)((long)param_4 + 0x1c) = (char)(uVar8 >> 0x20);
                            uStack_50._5_3_ = (undefined3)(uVar8 >> 0x28);
                            uStack_50._0_5_ = CONCAT14(uVar13,(undefined4)uStack_50);
                            if (param_5 != 0xd) {
                              uVar13 = *(undefined1 *)((long)param_3 + 0x1d);
                              *(char *)((long)param_4 + 0x1d) = (char)(uVar8 >> 0x28);
                              uStack_50._6_2_ = (undefined2)(uVar8 >> 0x30);
                              uStack_50._0_6_ = CONCAT15(uVar13,(undefined5)uStack_50);
                              if (param_5 == 0xf) {
                                uVar13 = *(undefined1 *)((long)param_3 + 0x1e);
                                *(char *)((long)param_4 + 0x1e) = (char)(uVar8 >> 0x30);
                                uStack_50._7_1_ = (undefined1)(uVar8 >> 0x38);
                                uStack_50._0_7_ = CONCAT16(uVar13,(undefined6)uStack_50);
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
          lVar9 = 0;
          iVar6 = 0;
          uVar8 = param_5;
          local_58 = uVar11;
LAB_0010056d:
          puVar1 = (undefined4 *)((long)&local_58 + lVar9);
          uVar3 = *(undefined4 *)((long)param_3 + lVar9 + 0x10);
          uVar12 = iVar6 + 4;
          *(undefined4 *)((long)param_4 + lVar9 + 0x10) = *puVar1;
          *puVar1 = uVar3;
          if (uVar8 == 4) goto LAB_001005e3;
        }
        else {
          local_58 = param_3[2];
          param_4[2] = uVar11;
          if (param_5 == 8) goto LAB_001005e3;
          if (2 < param_5 - 9) {
            lVar9 = 8;
            iVar6 = 8;
            uVar8 = param_5 - 8;
            goto LAB_0010056d;
          }
          uVar12 = 8;
        }
        uVar13 = *(undefined1 *)((long)&local_58 + (ulong)uVar12);
        *(undefined1 *)((long)&local_58 + (ulong)uVar12) =
             *(undefined1 *)((long)param_3 + (ulong)(uVar12 + 0x10));
        uVar11 = (ulong)(uVar12 + 1);
        *(undefined1 *)((long)param_4 + (ulong)(uVar12 + 0x10)) = uVar13;
        if (uVar11 < param_5) {
          uVar13 = *(undefined1 *)((long)param_3 + (ulong)(uVar12 + 0x11));
          *(undefined1 *)((long)param_4 + (ulong)(uVar12 + 0x11)) =
               *(undefined1 *)((long)&local_58 + uVar11);
          *(undefined1 *)((long)&local_58 + uVar11) = uVar13;
          uVar11 = (ulong)(uVar12 + 2);
          if (uVar11 < param_5) {
            uVar13 = *(undefined1 *)((long)param_3 + (ulong)(uVar12 + 0x12));
            *(undefined1 *)((long)param_4 + (ulong)(uVar12 + 0x12)) =
                 *(undefined1 *)((long)&local_58 + uVar11);
            *(undefined1 *)((long)&local_58 + uVar11) = uVar13;
          }
        }
      }
    }
LAB_001005e3:
    local_58 = local_58 ^ local_68;
    uStack_50 = uStack_50 ^ uStack_60;
    (*(code *)param_1[2])(&local_58,&local_58,*param_1);
    *param_4 = local_58 ^ local_68;
    param_4[1] = uStack_50 ^ uStack_60;
  }
  else {
    do {
      uVar8 = param_5;
      puVar15 = param_4;
      puVar14 = param_3;
      param_4 = puVar15 + 2;
      local_58 = *puVar14 ^ local_68;
      uStack_50 = puVar14[1] ^ uStack_60;
      (*(code *)param_1[2])(&local_58,&local_58,*param_1);
      uVar11 = local_68 ^ local_58;
      uVar16 = uStack_60 ^ uStack_50;
      param_3 = puVar14 + 2;
      *puVar15 = uVar11;
      puVar15[1] = uVar16;
      local_58 = uVar11;
      uVar11 = local_58;
      uStack_50 = uVar16;
      param_5 = uVar8 - 0x10;
      if (param_5 == 0) goto LAB_00100100;
      uVar7 = uStack_60 << 1 | local_68 >> 0x3f;
      local_68 = (ulong)(uStack_60._4_4_ >> 0x1f & 0x87) ^ local_68 * 2;
      uStack_60 = uVar7;
    } while (0xf < param_5);
    if (param_6 == 0) goto LAB_00100158;
    local_58._0_1_ = (undefined1)uVar11;
    uVar13 = (undefined1)local_58;
    local_58._1_7_ = (undefined7)(uVar11 >> 8);
    uVar4 = local_58._1_7_;
    local_58._1_1_ = (undefined1)(uVar11 >> 8);
    uVar2 = local_58._1_1_;
    local_58._2_6_ = (undefined6)(uVar11 >> 0x10);
    uVar5 = local_58._2_6_;
    if (uVar8 - 0x11 < 3) {
      uVar11 = *param_3;
      local_58 = CONCAT71(uVar4,(char)uVar11);
      *(undefined1 *)param_4 = uVar13;
      if (param_5 != 1) {
        local_58._0_2_ = CONCAT11(*(undefined1 *)((long)puVar14 + 0x11),(char)uVar11);
        local_58 = CONCAT62(uVar5,(undefined2)local_58);
        *(undefined1 *)((long)puVar15 + 0x11) = uVar2;
        if (param_5 == 3) goto LAB_001003cc;
      }
    }
    else if ((ulong)((long)param_4 - (long)((long)puVar14 + 0x11)) < 7) {
      uVar11 = *param_3;
      *(undefined1 *)param_4 = (undefined1)local_58;
      uVar13 = *(undefined1 *)((long)puVar14 + 0x11);
      *(undefined1 *)((long)puVar15 + 0x11) = local_58._1_1_;
      local_58._0_2_ = CONCAT11(uVar13,(char)uVar11);
LAB_001003cc:
      uVar11 = local_58;
      uVar13 = local_58._2_1_;
      local_58._0_3_ = CONCAT12(*(undefined1 *)((long)puVar14 + 0x12),(undefined2)local_58);
      *(undefined1 *)((long)puVar15 + 0x12) = uVar13;
      if (param_5 != 3) {
        local_58._3_1_ = SUB81(uVar11,3);
        uVar13 = local_58._3_1_;
        local_58._4_4_ = SUB84(uVar11,4);
        local_58._0_4_ = CONCAT13(*(undefined1 *)((long)puVar14 + 0x13),(undefined3)local_58);
        *(undefined1 *)((long)puVar15 + 0x13) = uVar13;
        if (param_5 != 4) {
          local_58._4_1_ = SUB81(uVar11,4);
          uVar13 = local_58._4_1_;
          local_58._5_3_ = SUB83(uVar11,5);
          local_58._0_5_ = CONCAT14(*(undefined1 *)((long)puVar14 + 0x14),(undefined4)local_58);
          *(undefined1 *)((long)puVar15 + 0x14) = uVar13;
          if (param_5 != 5) {
            local_58._5_1_ = SUB81(uVar11,5);
            uVar13 = local_58._5_1_;
            local_58._6_2_ = SUB82(uVar11,6);
            local_58._0_6_ = CONCAT15(*(undefined1 *)((long)puVar14 + 0x15),(undefined5)local_58);
            *(undefined1 *)((long)puVar15 + 0x15) = uVar13;
            if (param_5 != 6) {
              local_58._6_1_ = SUB81(uVar11,6);
              uVar13 = local_58._6_1_;
              local_58._7_1_ = SUB81(uVar11,7);
              uVar2 = local_58._7_1_;
              local_58._0_7_ = CONCAT16(*(undefined1 *)((long)puVar14 + 0x16),(undefined6)local_58);
              *(undefined1 *)((long)puVar15 + 0x16) = uVar13;
              if (param_5 != 7) {
                local_58 = CONCAT17(*(undefined1 *)((long)puVar14 + 0x17),(undefined7)local_58);
                *(undefined1 *)((long)puVar15 + 0x17) = uVar2;
                if (param_5 != 8) {
                  uVar11 = puVar14[3];
                  uStack_50._0_1_ = (undefined1)uVar16;
                  uVar13 = (undefined1)uStack_50;
                  uStack_50._1_7_ = (undefined7)(uVar16 >> 8);
                  uStack_50 = CONCAT71(uStack_50._1_7_,(char)uVar11);
                  *(undefined1 *)(puVar15 + 3) = uVar13;
                  if (param_5 != 9) {
                    uStack_50._1_1_ = (undefined1)(uVar16 >> 8);
                    uVar13 = uStack_50._1_1_;
                    uStack_50._2_6_ = (undefined6)(uVar16 >> 0x10);
                    uStack_50._0_2_ = CONCAT11(*(undefined1 *)((long)puVar14 + 0x19),(char)uVar11);
                    *(undefined1 *)((long)puVar15 + 0x19) = uVar13;
                    if (param_5 != 10) {
                      uStack_50._2_1_ = (undefined1)(uVar16 >> 0x10);
                      uVar13 = uStack_50._2_1_;
                      uStack_50._3_5_ = (undefined5)(uVar16 >> 0x18);
                      uStack_50._0_3_ =
                           CONCAT12(*(undefined1 *)((long)puVar14 + 0x1a),(undefined2)uStack_50);
                      *(undefined1 *)((long)puVar15 + 0x1a) = uVar13;
                      if (param_5 != 0xb) {
                        uStack_50._3_1_ = (undefined1)(uVar16 >> 0x18);
                        uVar13 = uStack_50._3_1_;
                        uStack_50._4_4_ = (undefined4)(uVar16 >> 0x20);
                        uStack_50._0_4_ =
                             CONCAT13(*(undefined1 *)((long)puVar14 + 0x1b),(undefined3)uStack_50);
                        *(undefined1 *)((long)puVar15 + 0x1b) = uVar13;
                        if (param_5 != 0xc) {
                          uStack_50._4_1_ = (undefined1)(uVar16 >> 0x20);
                          uVar13 = uStack_50._4_1_;
                          uStack_50._5_3_ = (undefined3)(uVar16 >> 0x28);
                          uStack_50._0_5_ =
                               CONCAT14(*(undefined1 *)((long)puVar14 + 0x1c),(undefined4)uStack_50)
                          ;
                          *(undefined1 *)((long)puVar15 + 0x1c) = uVar13;
                          if (param_5 != 0xd) {
                            uStack_50._5_1_ = (undefined1)(uVar16 >> 0x28);
                            uVar13 = uStack_50._5_1_;
                            uStack_50._6_2_ = (undefined2)(uVar16 >> 0x30);
                            uStack_50._0_6_ =
                                 CONCAT15(*(undefined1 *)((long)puVar14 + 0x1d),
                                          (undefined5)uStack_50);
                            *(undefined1 *)((long)puVar15 + 0x1d) = uVar13;
                            if (param_5 == 0xf) {
                              uStack_50._6_1_ = (undefined1)(uVar16 >> 0x30);
                              uVar13 = uStack_50._6_1_;
                              uStack_50._7_1_ = (undefined1)(uVar16 >> 0x38);
                              uStack_50._0_7_ =
                                   CONCAT16(*(undefined1 *)((long)puVar14 + 0x1e),
                                            (undefined6)uStack_50);
                              *(undefined1 *)((long)puVar15 + 0x1e) = uVar13;
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
      if (uVar8 - 0x11 < 7) {
        lVar9 = 0;
        iVar6 = 0;
        uVar8 = param_5;
        local_58 = uVar11;
LAB_0010065a:
        puVar1 = (undefined4 *)((long)&local_58 + lVar9);
        uVar3 = *(undefined4 *)((long)param_3 + lVar9);
        uVar12 = iVar6 + 4;
        *(undefined4 *)((long)param_4 + lVar9) = *puVar1;
        lVar9 = lVar9 + 4;
        *puVar1 = uVar3;
        if (uVar8 == 4) goto LAB_001006c4;
      }
      else {
        local_58 = *param_3;
        *param_4 = uVar11;
        if (param_5 == 8) goto LAB_001006c4;
        if (2 < uVar8 - 0x19) {
          lVar9 = 8;
          iVar6 = 8;
          uVar8 = uVar8 - 0x18;
          goto LAB_0010065a;
        }
        uVar12 = 8;
        lVar9 = 8;
      }
      uVar13 = *(undefined1 *)((long)&local_58 + (ulong)uVar12);
      *(undefined1 *)((long)&local_58 + (ulong)uVar12) = *(undefined1 *)((long)param_3 + lVar9);
      *(undefined1 *)((long)param_4 + lVar9) = uVar13;
      uVar11 = (ulong)(uVar12 + 1);
      if (uVar11 < param_5) {
        uVar13 = *(undefined1 *)((long)&local_58 + uVar11);
        *(undefined1 *)((long)&local_58 + uVar11) = *(undefined1 *)((long)param_3 + uVar11);
        *(undefined1 *)((long)param_4 + uVar11) = uVar13;
        uVar11 = (ulong)(uVar12 + 2);
        if (uVar11 < param_5) {
          uVar13 = *(undefined1 *)((long)&local_58 + uVar11);
          *(undefined1 *)((long)&local_58 + uVar11) = *(undefined1 *)((long)param_3 + uVar11);
          *(undefined1 *)((long)param_4 + uVar11) = uVar13;
        }
      }
    }
LAB_001006c4:
    local_58 = local_68 ^ local_58;
    uStack_50 = uVar7 ^ uStack_50;
    (*(code *)param_1[2])(&local_58,&local_58,*param_1);
    *puVar15 = local_68 ^ local_58;
    puVar15[1] = uStack_60 ^ uStack_50;
  }
LAB_00100100:
  uVar10 = 0;
LAB_00100102:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar10;
}


