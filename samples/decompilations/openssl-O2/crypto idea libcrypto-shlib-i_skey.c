
void IDEA_set_encrypt_key(byte *param_1,uint *param_2)

{
  byte bVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  bVar1 = *param_1;
  *param_2 = (uint)bVar1 << 8;
  uVar8 = (uint)CONCAT11(bVar1,param_1[1]);
  *param_2 = uVar8;
  bVar1 = param_1[2];
  param_2[1] = (uint)bVar1 << 8;
  uVar5 = (uint)CONCAT11(bVar1,param_1[3]);
  param_2[1] = uVar5;
  bVar1 = param_1[4];
  param_2[2] = (uint)bVar1 << 8;
  uVar7 = (uint)CONCAT11(bVar1,param_1[5]);
  param_2[2] = uVar7;
  bVar1 = param_1[6];
  param_2[3] = (uint)bVar1 << 8;
  uVar6 = (uint)CONCAT11(bVar1,param_1[7]);
  param_2[3] = uVar6;
  bVar1 = param_1[8];
  param_2[4] = (uint)bVar1 << 8;
  uVar3 = (uint)CONCAT11(bVar1,param_1[9]);
  param_2[4] = uVar3;
  bVar1 = param_1[10];
  param_2[5] = (uint)bVar1 << 8;
  uVar4 = (uint)CONCAT11(bVar1,param_1[0xb]);
  param_2[5] = uVar4;
  bVar1 = param_1[0xc];
  param_2[6] = (uint)bVar1 << 8;
  param_2[6] = (uint)CONCAT11(bVar1,param_1[0xd]);
  bVar1 = param_1[0xe];
  param_2[7] = (uint)bVar1 << 8;
  param_2[7] = (uint)CONCAT11(bVar1,param_1[0xf]);
  puVar2 = param_2 + 8;
  while( true ) {
    uVar9 = (uVar5 & 0x7f) << 9 | uVar7 >> 7;
    *puVar2 = uVar9;
    uVar10 = (uVar7 & 0x7f) << 9 | uVar6 >> 7;
    puVar2[1] = uVar10;
    uVar7 = (uVar6 & 0x7f) << 9 | uVar3 >> 7;
    puVar2[2] = uVar7;
    uVar6 = (uVar3 & 0x7f) << 9 | uVar4 >> 7;
    puVar2[3] = uVar6;
    uVar3 = (uVar4 << 9 | puVar2[-2] >> 7) & 0xffff;
    puVar2[4] = uVar3;
    uVar4 = (puVar2[-2] << 9 | puVar2[-1] >> 7) & 0xffff;
    puVar2[5] = uVar4;
    if (puVar2 == param_2 + 0x30) break;
    puVar2[6] = (puVar2[-1] & 0x7f) << 9 | uVar8 >> 7;
    puVar2[7] = (uVar8 & 0x7f) << 9 | uVar5 >> 7;
    puVar2 = puVar2 + 8;
    uVar8 = uVar9;
    uVar5 = uVar10;
  }
  return;
}



void IDEA_set_decrypt_key(uint *param_1,uint *param_2)

{
  ulong *puVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  long lVar5;
  uint *puVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  uint *puVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  
  puVar6 = param_1 + 0x30;
  puVar10 = param_2;
  while( true ) {
    uVar4 = *puVar6;
    if (uVar4 != 0) {
      uVar12 = (ulong)uVar4;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = SUB168(SEXT816(0x10001),8);
      uVar7 = SUB168((auVar2 << 0x40 | ZEXT816(0x10001)) % SEXT816((long)uVar12),0);
      uVar4 = 1;
      if (uVar7 != 0) {
        lVar5 = (long)(0x10001 - uVar7) / (long)uVar12;
        lVar9 = 0;
        lVar13 = 1;
        do {
          uVar11 = uVar7;
          lVar8 = lVar9 - lVar5 * lVar13;
          uVar7 = (long)uVar12 % (long)uVar11;
          lVar5 = (long)(uVar12 - uVar7) / (long)uVar11;
          lVar9 = lVar13;
          uVar12 = uVar11;
          lVar13 = lVar8;
        } while (uVar7 != 0);
        uVar4 = (uint)lVar8 + 0x10001;
        if (-1 < lVar8) {
          uVar4 = (uint)lVar8;
        }
      }
    }
    *puVar10 = uVar4;
    puVar10[1] = -puVar6[2] & 0xffff;
    puVar10[2] = -puVar6[1] & 0xffff;
    uVar4 = puVar6[3];
    if (uVar4 != 0) {
      uVar12 = (ulong)uVar4;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = SUB168(SEXT816(0x10001),8);
      uVar7 = SUB168((auVar3 << 0x40 | ZEXT816(0x10001)) % SEXT816((long)uVar12),0);
      uVar4 = 1;
      if (uVar7 != 0) {
        lVar5 = (long)(0x10001 - uVar7) / (long)uVar12;
        lVar9 = 0;
        lVar13 = 1;
        do {
          uVar11 = uVar7;
          lVar8 = lVar9 - lVar5 * lVar13;
          uVar7 = (long)uVar12 % (long)uVar11;
          lVar5 = (long)(uVar12 - uVar7) / (long)uVar11;
          lVar9 = lVar13;
          uVar12 = uVar11;
          lVar13 = lVar8;
        } while (uVar7 != 0);
        uVar4 = (uint)lVar8 + 0x10001;
        if (-1 < lVar8) {
          uVar4 = (uint)lVar8;
        }
      }
    }
    puVar10[3] = uVar4;
    if (puVar6 == param_1) break;
    puVar10[4] = puVar6[-2];
    puVar10[5] = puVar6[-1];
    puVar6 = puVar6 + -6;
    puVar10 = puVar10 + 6;
  }
  puVar1 = (ulong *)(param_2 + 1);
  *puVar1 = *puVar1 << 0x20 | *puVar1 >> 0x20;
  puVar1 = (ulong *)(param_2 + 0x31);
  *puVar1 = *puVar1 << 0x20 | *puVar1 >> 0x20;
  return;
}


