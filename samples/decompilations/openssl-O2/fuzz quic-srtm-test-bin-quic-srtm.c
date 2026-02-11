
undefined8 FuzzerInitialize(void)

{
  FuzzerSetRand();
  OPENSSL_init_crypto(0x102,0);
  OPENSSL_init_ssl(0x200000,0);
  ERR_clear_error();
  return 1;
}



undefined8 FuzzerTestOneInput(ulong *param_1,ulong param_2)

{
  byte bVar1;
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong *puVar7;
  long lVar8;
  long in_FS_OFFSET;
  ulong local_48;
  ulong uStack_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = ossl_quic_srtm_new(0,0);
  if (lVar2 == 0) {
    uVar6 = 0xffffffff;
  }
  else {
    if (0 < (long)param_2) {
      bVar1 = (byte)*param_1;
      puVar3 = (ulong *)((long)param_1 + 1);
      uVar4 = param_2 - 1;
      lVar8 = 10000;
      do {
        bVar1 = bVar1 & 3;
        uVar5 = uVar4;
        puVar7 = puVar3;
        if (bVar1 == 2) {
          if (7 < uVar4) {
            uVar4 = *puVar3;
            ossl_quic_srtm_cull(lVar2,uVar4 >> 0x38 | (uVar4 & 0xff000000000000) >> 0x28 |
                                      (uVar4 & 0xff0000000000) >> 0x18 | (uVar4 & 0xff00000000) >> 8
                                      | (uVar4 & 0xff000000) << 8 | (uVar4 & 0xff0000) << 0x18 |
                                      (uVar4 & 0xff00) << 0x28 | uVar4 << 0x38);
            ossl_quic_srtm_check(lVar2);
            uVar5 = param_2 - 9;
            puVar7 = (ulong *)((long)param_1 + 9);
          }
        }
        else if (bVar1 == 3) {
          if (0xf < uVar4) {
            local_48 = *puVar3;
            uStack_40 = puVar3[1];
            if (param_2 - 0x11 < 8) {
LAB_001000dd:
              uVar5 = param_2 - 0x11;
              puVar7 = (ulong *)((long)param_1 + 0x11);
            }
            else {
              uVar4 = *(ulong *)((long)param_1 + 0x11);
              ossl_quic_srtm_lookup
                        (lVar2,&local_48,
                         uVar4 >> 0x38 | (uVar4 & 0xff000000000000) >> 0x28 |
                         (uVar4 & 0xff0000000000) >> 0x18 | (uVar4 & 0xff00000000) >> 8 |
                         (uVar4 & 0xff000000) << 8 | (uVar4 & 0xff0000) << 0x18 |
                         (uVar4 & 0xff00) << 0x28 | uVar4 << 0x38,0,0);
              ossl_quic_srtm_check(lVar2);
              uVar5 = param_2 - 0x19;
              puVar7 = (ulong *)((long)param_1 + 0x19);
            }
          }
        }
        else if (bVar1 == 1) {
          if (7 < uVar4) {
            if (param_2 - 9 < 8) goto LAB_00100200;
            uVar4 = *(ulong *)((long)param_1 + 9);
            uVar5 = *puVar3;
            ossl_quic_srtm_remove
                      (lVar2,uVar5 >> 0x38 | (uVar5 & 0xff000000000000) >> 0x28 |
                             (uVar5 & 0xff0000000000) >> 0x18 | (uVar5 & 0xff00000000) >> 8 |
                             (uVar5 & 0xff000000) << 8 | (uVar5 & 0xff0000) << 0x18 |
                             (uVar5 & 0xff00) << 0x28 | uVar5 << 0x38,
                       uVar4 >> 0x38 | (uVar4 & 0xff000000000000) >> 0x28 |
                       (uVar4 & 0xff0000000000) >> 0x18 | (uVar4 & 0xff00000000) >> 8 |
                       (uVar4 & 0xff000000) << 8 | (uVar4 & 0xff0000) << 0x18 |
                       (uVar4 & 0xff00) << 0x28 | uVar4 << 0x38);
            ossl_quic_srtm_check(lVar2);
            uVar5 = param_2 - 0x11;
            puVar7 = (ulong *)((long)param_1 + 0x11);
          }
        }
        else if (7 < uVar4) {
          if (param_2 - 9 < 8) {
LAB_00100200:
            uVar5 = param_2 - 9;
            puVar7 = (ulong *)((long)param_1 + 9);
          }
          else {
            if (param_2 - 0x11 < 0x10) goto LAB_001000dd;
            uVar4 = *(ulong *)((long)param_1 + 9);
            local_48 = *(ulong *)((long)param_1 + 0x11);
            uStack_40 = *(ulong *)((long)param_1 + 0x19);
            uVar5 = *puVar3;
            ossl_quic_srtm_add(lVar2,uVar5 >> 0x38 | (uVar5 & 0xff000000000000) >> 0x28 |
                                     (uVar5 & 0xff0000000000) >> 0x18 | (uVar5 & 0xff00000000) >> 8
                                     | (uVar5 & 0xff000000) << 8 | (uVar5 & 0xff0000) << 0x18 |
                                     (uVar5 & 0xff00) << 0x28 | uVar5 << 0x38,
                               uVar4 >> 0x38 | (uVar4 & 0xff000000000000) >> 0x28 |
                               (uVar4 & 0xff0000000000) >> 0x18 | (uVar4 & 0xff00000000) >> 8 |
                               (uVar4 & 0xff000000) << 8 | (uVar4 & 0xff0000) << 0x18 |
                               (uVar4 & 0xff00) << 0x28 | uVar4 << 0x38,&local_48);
            ossl_quic_srtm_check(lVar2);
            uVar5 = param_2 - 0x21;
            puVar7 = (ulong *)((long)param_1 + 0x21);
          }
        }
        if (uVar5 == 0) break;
        bVar1 = (byte)*puVar7;
        puVar3 = (ulong *)((long)puVar7 + 1);
        uVar4 = uVar5 - 1;
        lVar8 = lVar8 + -1;
        param_2 = uVar5;
        param_1 = puVar7;
      } while (lVar8 != 0);
    }
    uVar6 = 0;
  }
  ossl_quic_srtm_free(lVar2);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
}



void FuzzerCleanup(void)

{
  FuzzerClearRand();
  return;
}


