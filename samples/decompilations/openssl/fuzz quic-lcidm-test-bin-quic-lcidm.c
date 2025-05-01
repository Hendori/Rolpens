
undefined8 FuzzerInitialize(void)

{
  FuzzerSetRand();
  OPENSSL_init_crypto(0x102,0);
  OPENSSL_init_ssl(0x200000,0);
  ERR_clear_error();
  return 1;
}



undefined8 FuzzerTestOneInput(byte *param_1,long param_2)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  ulong uVar6;
  undefined8 extraout_RDX_03;
  ulong uVar7;
  undefined8 extraout_RDX_04;
  byte *pbVar8;
  byte *pbVar9;
  undefined8 uVar10;
  long lVar11;
  ulong *puVar12;
  long lVar13;
  long lVar14;
  long in_FS_OFFSET;
  undefined1 auVar15 [16];
  undefined8 uStack_d0;
  undefined1 local_bc [4];
  undefined1 local_b8 [8];
  undefined1 local_b0;
  undefined8 uStack_af;
  undefined1 local_a7 [31];
  undefined1 local_88 [32];
  undefined1 local_68 [56];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 < 0) {
    lVar14 = 0;
    uVar10 = 0;
  }
  else {
    if (param_2 != 0) {
      pbVar9 = param_1 + 1;
      lVar11 = param_2 + -1;
      if (*param_1 < 0x15) {
        uStack_d0 = 0x100098;
        auVar15 = ossl_quic_lcidm_new(0);
        uVar10 = auVar15._8_8_;
        lVar14 = auVar15._0_8_;
        if (lVar14 != 0) {
          if (lVar11 != 0) {
            bVar1 = param_1[1];
            puVar12 = (ulong *)(param_1 + 2);
            uVar6 = param_2 - 2;
            lVar13 = 10000;
LAB_001000c8:
            uVar2 = local_a7._4_4_;
            switch(bVar1) {
            case 0:
              if (7 < uVar6) {
                uVar6 = *puVar12;
                if (lVar11 != 9) {
                  bVar1 = pbVar9[9];
                  pbVar8 = pbVar9 + 10;
                  if (bVar1 < 0x15) {
                    uVar7 = (ulong)bVar1;
                    if (uVar7 <= lVar11 - 10U) {
                      if (bVar1 < 8) {
                        if ((bVar1 & 4) == 0) {
                          if ((bVar1 != 0) && (local_a7[0] = *pbVar8, (bVar1 & 2) != 0)) {
                            *(undefined2 *)(local_a7 + (uVar7 - 2)) =
                                 *(undefined2 *)(pbVar9 + uVar7 + 8);
                          }
                        }
                        else {
                          local_a7._0_4_ = *(undefined4 *)pbVar8;
                          local_a7._0_8_ = CONCAT44(uVar2,local_a7._0_4_);
                          *(undefined4 *)(local_a7 + (uVar7 - 4)) =
                               *(undefined4 *)(pbVar9 + uVar7 + 6);
                        }
                      }
                      else {
                        local_a7._0_8_ = *(undefined8 *)pbVar8;
                        *(undefined8 *)((long)&uStack_af + uVar7) =
                             *(undefined8 *)(pbVar9 + uVar7 + 2);
                        uVar3 = (int)(local_a7 + -(long)(local_a7 + 7)) + (uint)bVar1 & 0xfffffff8;
                        if (7 < uVar3) {
                          uVar5 = 0;
                          do {
                            uVar4 = (int)uVar5 + 8;
                            *(undefined8 *)(local_a7 + 7 + uVar5) =
                                 *(undefined8 *)
                                  (pbVar8 + (uVar5 - (long)(local_a7 + -(long)(local_a7 + 7))));
                            uVar5 = (ulong)uVar4;
                          } while (uVar4 < uVar3);
                        }
                      }
                      pbVar9 = pbVar8 + uVar7;
                      lVar11 = (lVar11 - 10U) - uVar7;
                      uStack_d0 = 0x100344;
                      uStack_af._7_1_ = bVar1;
                      ossl_quic_lcidm_enrol_odcid
                                (lVar14,uVar6 >> 0x38 | (uVar6 & 0xff000000000000) >> 0x28 |
                                        (uVar6 & 0xff0000000000) >> 0x18 |
                                        (uVar6 & 0xff00000000) >> 8 | (uVar6 & 0xff000000) << 8 |
                                        (uVar6 & 0xff0000) << 0x18 | (uVar6 & 0xff00) << 0x28 |
                                        uVar6 << 0x38,(long)&uStack_af + 7);
                      uVar10 = extraout_RDX_04;
                      goto LAB_00100100;
                    }
                  }
                }
              }
              break;
            case 1:
              if (uVar6 < 8) break;
              uVar6 = *puVar12;
              pbVar9 = pbVar9 + 9;
              lVar11 = lVar11 + -9;
              uStack_d0 = 0x1001ec;
              ossl_quic_lcidm_retire_odcid
                        (lVar14,uVar6 >> 0x38 | (uVar6 & 0xff000000000000) >> 0x28 |
                                (uVar6 & 0xff0000000000) >> 0x18 | (uVar6 & 0xff00000000) >> 8 |
                                (uVar6 & 0xff000000) << 8 | (uVar6 & 0xff0000) << 0x18 |
                                (uVar6 & 0xff00) << 0x28 | uVar6 << 0x38);
              uVar10 = extraout_RDX_02;
LAB_00100100:
              if (lVar11 != 0) goto code_r0x00100105;
              goto LAB_00100116;
            case 2:
              if (7 < uVar6) {
                uVar6 = *puVar12;
                pbVar9 = pbVar9 + 9;
                lVar11 = lVar11 + -9;
                uStack_d0 = 0x1001c1;
                ossl_quic_lcidm_generate_initial
                          (lVar14,uVar6 >> 0x38 | (uVar6 & 0xff000000000000) >> 0x28 |
                                  (uVar6 & 0xff0000000000) >> 0x18 | (uVar6 & 0xff00000000) >> 8 |
                                  (uVar6 & 0xff000000) << 8 | (uVar6 & 0xff0000) << 0x18 |
                                  (uVar6 & 0xff00) << 0x28 | uVar6 << 0x38,local_88);
                uVar10 = extraout_RDX_01;
                goto LAB_00100100;
              }
              break;
            case 3:
              if (7 < uVar6) {
                uVar6 = *puVar12;
                pbVar9 = pbVar9 + 9;
                lVar11 = lVar11 + -9;
                uStack_d0 = 0x100195;
                ossl_quic_lcidm_generate
                          (lVar14,uVar6 >> 0x38 | (uVar6 & 0xff000000000000) >> 0x28 |
                                  (uVar6 & 0xff0000000000) >> 0x18 | (uVar6 & 0xff00000000) >> 8 |
                                  (uVar6 & 0xff000000) << 8 | (uVar6 & 0xff0000) << 0x18 |
                                  (uVar6 & 0xff00) << 0x28 | uVar6 << 0x38,local_68);
                uVar10 = extraout_RDX_00;
                goto LAB_00100100;
              }
              break;
            case 4:
              if (7 < uVar6) {
                uVar6 = *puVar12;
                if (7 < lVar11 - 9U) {
                  uVar7 = *(ulong *)(pbVar9 + 9);
                  pbVar9 = pbVar9 + 0x11;
                  lVar11 = lVar11 + -0x11;
                  ossl_quic_lcidm_retire
                            (lVar14,uVar6 >> 0x38 | (uVar6 & 0xff000000000000) >> 0x28 |
                                    (uVar6 & 0xff0000000000) >> 0x18 | (uVar6 & 0xff00000000) >> 8 |
                                    (uVar6 & 0xff000000) << 8 | (uVar6 & 0xff0000) << 0x18 |
                                    (uVar6 & 0xff00) << 0x28 | uVar6 << 0x38,
                             uVar7 >> 0x38 | (uVar7 & 0xff000000000000) >> 0x28 |
                             (uVar7 & 0xff0000000000) >> 0x18 | (uVar7 & 0xff00000000) >> 8 |
                             (uVar7 & 0xff000000) << 8 | (uVar7 & 0xff0000) << 0x18 |
                             (uVar7 & 0xff00) << 0x28 | uVar7 << 0x38,0,local_88,local_b8,local_bc);
                  uVar10 = uStack_d0;
                  goto LAB_00100100;
                }
              }
              break;
            case 5:
              if (7 < uVar6) {
                uVar6 = *puVar12;
                pbVar9 = pbVar9 + 9;
                lVar11 = lVar11 + -9;
                uStack_d0 = 0x100100;
                ossl_quic_lcidm_cull
                          (lVar14,uVar6 >> 0x38 | (uVar6 & 0xff000000000000) >> 0x28 |
                                  (uVar6 & 0xff0000000000) >> 0x18 | (uVar6 & 0xff00000000) >> 8 |
                                  (uVar6 & 0xff000000) << 8 | (uVar6 & 0xff0000) << 0x18 |
                                  (uVar6 & 0xff00) << 0x28 | uVar6 << 0x38,uVar10);
                uVar10 = extraout_RDX;
                goto LAB_00100100;
              }
              break;
            case 6:
              if (uVar6 != 0) {
                bVar1 = (byte)*puVar12;
                pbVar8 = pbVar9 + 2;
                if (bVar1 < 0x15) {
                  uVar6 = (ulong)bVar1;
                  if (uVar6 <= lVar11 - 2U) {
                    if (bVar1 < 8) {
                      if ((bVar1 & 4) == 0) {
                        if ((bVar1 != 0) && (local_a7[0] = *pbVar8, (bVar1 & 2) != 0)) {
                          *(undefined2 *)(local_a7 + (uVar6 - 2)) = *(undefined2 *)(pbVar9 + uVar6);
                        }
                      }
                      else {
                        local_a7._0_4_ = *(undefined4 *)pbVar8;
                        local_a7._0_8_ = CONCAT44(uVar2,local_a7._0_4_);
                        *(undefined4 *)(local_a7 + (uVar6 - 4)) =
                             *(undefined4 *)(pbVar9 + (uVar6 - 2));
                      }
                    }
                    else {
                      local_a7._0_8_ = *(undefined8 *)pbVar8;
                      *(undefined8 *)((long)&uStack_af + uVar6) =
                           *(undefined8 *)(pbVar9 + (uVar6 - 6));
                      uVar3 = (int)(local_a7 + -(long)(local_a7 + 7)) + (uint)bVar1 & 0xfffffff8;
                      if (7 < uVar3) {
                        uVar4 = 0;
                        do {
                          uVar7 = (ulong)uVar4;
                          uVar4 = uVar4 + 8;
                          *(undefined8 *)(local_a7 + 7 + uVar7) =
                               *(undefined8 *)
                                (pbVar8 + (uVar7 - (long)(local_a7 + -(long)(local_a7 + 7))));
                        } while (uVar4 < uVar3);
                      }
                    }
                    pbVar9 = pbVar8 + uVar6;
                    lVar11 = (lVar11 - 2U) - uVar6;
                    uStack_d0 = 0x10029c;
                    uStack_af._7_1_ = bVar1;
                    ossl_quic_lcidm_lookup(lVar14,(long)&uStack_af + 7,local_b8,&local_b0);
                    uVar10 = extraout_RDX_03;
                    goto LAB_00100100;
                  }
                }
              }
              break;
            default:
              uVar10 = 0xffffffff;
              goto LAB_001002b0;
            }
            uVar10 = 0xffffffff;
            goto LAB_001002b0;
          }
LAB_00100116:
          uVar10 = 0;
          goto LAB_001002b0;
        }
      }
    }
    lVar14 = 0;
    uVar10 = 0xffffffff;
  }
LAB_001002b0:
  ossl_quic_lcidm_free(lVar14);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar10;
code_r0x00100105:
  bVar1 = *pbVar9;
  puVar12 = (ulong *)(pbVar9 + 1);
  uVar6 = lVar11 - 1;
  lVar13 = lVar13 + -1;
  if (lVar13 == 0) goto LAB_00100116;
  goto LAB_001000c8;
}



void FuzzerCleanup(void)

{
  FuzzerClearRand();
  return;
}



undefined8 FuzzerTestOneInput_cold(void)

{
  long in_FS_OFFSET;
  long in_stack_00000098;
  
  ossl_quic_lcidm_free();
  if (in_stack_00000098 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


