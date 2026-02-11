
undefined8 get_cid(long *param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  
  if (param_1[1] != 0) {
    pbVar2 = (byte *)*param_1;
    uVar5 = param_1[1] - 1;
    bVar1 = *pbVar2;
    param_1[1] = uVar5;
    *param_1 = (long)(pbVar2 + 1);
    if ((bVar1 < 0x15) && (uVar6 = (ulong)bVar1, uVar6 <= uVar5)) {
      if (bVar1 < 8) {
        if ((bVar1 & 4) == 0) {
          if ((bVar1 != 0) && (param_2[1] = pbVar2[1], (bVar1 & 2) != 0)) {
            *(undefined2 *)(param_2 + (uVar6 - 1)) = *(undefined2 *)(pbVar2 + (uVar6 - 1));
          }
        }
        else {
          *(undefined4 *)(param_2 + 1) = *(undefined4 *)(pbVar2 + 1);
          *(undefined4 *)(param_2 + (uVar6 - 3)) = *(undefined4 *)(pbVar2 + (uVar6 - 3));
        }
      }
      else {
        *(undefined8 *)(param_2 + 1) = *(undefined8 *)(pbVar2 + 1);
        *(undefined8 *)(param_2 + (uVar6 - 7)) = *(undefined8 *)(pbVar2 + (uVar6 - 7));
        uVar4 = (int)(param_2 + (1 - ((ulong)(param_2 + 9) & 0xfffffffffffffff8))) + (uint)bVar1 &
                0xfffffff8;
        if (7 < uVar4) {
          uVar3 = 0;
          do {
            uVar5 = (ulong)uVar3;
            uVar3 = uVar3 + 8;
            *(undefined8 *)(((ulong)(param_2 + 9) & 0xfffffffffffffff8) + uVar5) =
                 *(undefined8 *)
                  (pbVar2 + 1 +
                  (uVar5 - (long)(param_2 + (1 - ((ulong)(param_2 + 9) & 0xfffffffffffffff8)))));
          } while (uVar3 < uVar4);
          *param_1 = *param_1 + uVar6;
          param_1[1] = param_1[1] - uVar6;
          *param_2 = bVar1;
          return 1;
        }
      }
      *param_1 = *param_1 + uVar6;
      param_1[1] = param_1[1] - uVar6;
      *param_2 = bVar1;
      return 1;
    }
  }
  return 0;
}



undefined8 FuzzerInitialize(void)

{
  FuzzerSetRand();
  OPENSSL_init_crypto(0x102,0);
  OPENSSL_init_ssl(0x200000,0);
  ERR_clear_error();
  return 1;
}



undefined8 FuzzerTestOneInput(byte *param_1,ulong param_2)

{
  ulong *puVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  undefined8 extraout_RDX_04;
  undefined8 uVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong *puVar9;
  long lVar10;
  ulong uVar11;
  long in_FS_OFFSET;
  undefined1 auVar12 [16];
  undefined8 uStack_f0;
  undefined1 local_dc [4];
  undefined1 local_d8 [16];
  ulong *local_c8;
  ulong local_c0;
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [56];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((long)param_2 < 0) {
    lVar10 = 0;
    uVar6 = 0;
  }
  else {
    local_c0 = param_2;
    if (param_2 != 0) {
      puVar1 = (ulong *)(param_1 + 1);
      uVar11 = param_2 - 1;
      local_c8 = puVar1;
      local_c0 = uVar11;
      if (*param_1 < 0x15) {
        uStack_f0 = 0x100198;
        auVar12 = ossl_quic_lcidm_new(0);
        uVar6 = auVar12._8_8_;
        lVar10 = auVar12._0_8_;
        if (lVar10 != 0) {
          puVar9 = local_c8;
          if (uVar11 != 0) {
            puVar9 = (ulong *)(param_1 + 2);
            local_c0 = param_2 - 2;
            bVar2 = param_1[1];
            lVar7 = 10000;
            local_c8 = puVar1;
LAB_001001d8:
            switch(bVar2) {
            case 0:
              if (7 < local_c0) {
                uVar3 = *puVar9;
                local_c8 = (ulong *)((long)local_c8 + 9);
                local_c0 = uVar11 - 9;
                puVar8 = local_b8;
                iVar5 = get_cid(&local_c8,puVar8,uVar6);
                puVar9 = local_c8;
                if (iVar5 != 0) {
                  uStack_f0 = 0x1003a7;
                  ossl_quic_lcidm_enrol_odcid
                            (lVar10,uVar3 >> 0x38 | (uVar3 & 0xff000000000000) >> 0x28 |
                                    (uVar3 & 0xff0000000000) >> 0x18 | (uVar3 & 0xff00000000) >> 8 |
                                    (uVar3 & 0xff000000) << 8 | (uVar3 & 0xff0000) << 0x18 |
                                    (uVar3 & 0xff00) << 0x28 | uVar3 << 0x38,puVar8);
                  uVar6 = extraout_RDX_03;
                  uVar11 = local_c0;
                  goto LAB_00100220;
                }
              }
              break;
            case 1:
              if (local_c0 < 8) break;
              uVar3 = *puVar9;
              local_c8 = (ulong *)((long)local_c8 + 9);
              uStack_f0 = 0x100352;
              local_c0 = uVar11 - 9;
              ossl_quic_lcidm_retire_odcid
                        (lVar10,uVar3 >> 0x38 | (uVar3 & 0xff000000000000) >> 0x28 |
                                (uVar3 & 0xff0000000000) >> 0x18 | (uVar3 & 0xff00000000) >> 8 |
                                (uVar3 & 0xff000000) << 8 | (uVar3 & 0xff0000) << 0x18 |
                                (uVar3 & 0xff00) << 0x28 | uVar3 << 0x38);
              uVar6 = extraout_RDX_02;
              uVar11 = uVar11 - 9;
LAB_00100220:
              puVar9 = local_c8;
              if (uVar11 != 0) goto code_r0x00100225;
              goto LAB_00100245;
            case 2:
              if (7 < local_c0) {
                uVar3 = *puVar9;
                local_c8 = (ulong *)((long)local_c8 + 9);
                uStack_f0 = 0x10031f;
                local_c0 = uVar11 - 9;
                ossl_quic_lcidm_generate_initial
                          (lVar10,uVar3 >> 0x38 | (uVar3 & 0xff000000000000) >> 0x28 |
                                  (uVar3 & 0xff0000000000) >> 0x18 | (uVar3 & 0xff00000000) >> 8 |
                                  (uVar3 & 0xff000000) << 8 | (uVar3 & 0xff0000) << 0x18 |
                                  (uVar3 & 0xff00) << 0x28 | uVar3 << 0x38,local_98);
                uVar6 = extraout_RDX_01;
                uVar11 = uVar11 - 9;
                goto LAB_00100220;
              }
              break;
            case 3:
              if (7 < local_c0) {
                uVar3 = *puVar9;
                local_c8 = (ulong *)((long)local_c8 + 9);
                uStack_f0 = 0x1002e7;
                local_c0 = uVar11 - 9;
                ossl_quic_lcidm_generate
                          (lVar10,uVar3 >> 0x38 | (uVar3 & 0xff000000000000) >> 0x28 |
                                  (uVar3 & 0xff0000000000) >> 0x18 | (uVar3 & 0xff00000000) >> 8 |
                                  (uVar3 & 0xff000000) << 8 | (uVar3 & 0xff0000) << 0x18 |
                                  (uVar3 & 0xff00) << 0x28 | uVar3 << 0x38,local_78);
                uVar6 = extraout_RDX_00;
                uVar11 = uVar11 - 9;
                goto LAB_00100220;
              }
              break;
            case 4:
              if (7 < local_c0) {
                uVar3 = *puVar9;
                local_c0 = uVar11 - 9;
                if (7 < local_c0) {
                  uVar4 = *(ulong *)((long)local_c8 + 9);
                  local_c8 = (ulong *)((long)local_c8 + 0x11);
                  local_c0 = uVar11 - 0x11;
                  ossl_quic_lcidm_retire
                            (lVar10,uVar3 >> 0x38 | (uVar3 & 0xff000000000000) >> 0x28 |
                                    (uVar3 & 0xff0000000000) >> 0x18 | (uVar3 & 0xff00000000) >> 8 |
                                    (uVar3 & 0xff000000) << 8 | (uVar3 & 0xff0000) << 0x18 |
                                    (uVar3 & 0xff00) << 0x28 | uVar3 << 0x38,
                             uVar4 >> 0x38 | (uVar4 & 0xff000000000000) >> 0x28 |
                             (uVar4 & 0xff0000000000) >> 0x18 | (uVar4 & 0xff00000000) >> 8 |
                             (uVar4 & 0xff000000) << 8 | (uVar4 & 0xff0000) << 0x18 |
                             (uVar4 & 0xff00) << 0x28 | uVar4 << 0x38,0,local_98,local_d8,local_dc);
                  uVar6 = uStack_f0;
                  uVar11 = uVar11 - 0x11;
                  goto LAB_00100220;
                }
              }
              break;
            case 5:
              if (7 < local_c0) {
                uVar3 = *puVar9;
                local_c8 = (ulong *)((long)local_c8 + 9);
                uStack_f0 = 0x10021a;
                local_c0 = uVar11 - 9;
                ossl_quic_lcidm_cull
                          (lVar10,uVar3 >> 0x38 | (uVar3 & 0xff000000000000) >> 0x28 |
                                  (uVar3 & 0xff0000000000) >> 0x18 | (uVar3 & 0xff00000000) >> 8 |
                                  (uVar3 & 0xff000000) << 8 | (uVar3 & 0xff0000) << 0x18 |
                                  (uVar3 & 0xff00) << 0x28 | uVar3 << 0x38);
                uVar6 = extraout_RDX;
                uVar11 = uVar11 - 9;
                goto LAB_00100220;
              }
              break;
            case 6:
              local_c8 = puVar9;
              iVar5 = get_cid(&local_c8,local_b8,uVar6);
              puVar9 = local_c8;
              if (iVar5 != 0) {
                uStack_f0 = 0x1003dd;
                ossl_quic_lcidm_lookup(lVar10);
                uVar6 = extraout_RDX_04;
                uVar11 = local_c0;
                goto LAB_00100220;
              }
            }
            local_c8 = puVar9;
            uVar6 = 0xffffffff;
            goto LAB_001003f8;
          }
LAB_00100245:
          local_c8 = puVar9;
          uVar6 = 0;
          goto LAB_001003f8;
        }
      }
    }
    lVar10 = 0;
    uVar6 = 0xffffffff;
  }
LAB_001003f8:
  ossl_quic_lcidm_free(lVar10);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
code_r0x00100225:
  local_c0 = uVar11 - 1;
  puVar9 = (ulong *)((long)local_c8 + 1);
  bVar2 = (byte)*local_c8;
  lVar7 = lVar7 + -1;
  if (lVar7 == 0) goto LAB_00100245;
  goto LAB_001001d8;
}



void FuzzerCleanup(void)

{
  FuzzerClearRand();
  return;
}


