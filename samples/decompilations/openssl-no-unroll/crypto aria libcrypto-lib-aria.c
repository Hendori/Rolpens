
void ossl_aria_encrypt(byte *param_1,ulong *param_2,uint *param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  
  if ((param_2 != (ulong *)0x0 && param_3 != (uint *)0x0) && (param_1 != (byte *)0x0)) {
    uVar5 = param_3[0x44];
    if (((uVar5 & 0xfffffffd) == 0xc) || (uVar5 == 0x10)) {
      uVar10 = (uint)param_1[3] ^ *param_3 ^ (uint)*param_1 << 0x18;
      uVar11 = uVar10 ^ (uint)param_1[1] << 0x10;
      uVar12 = uVar11 ^ (uint)param_1[2] << 8;
      uVar13 = (uint)param_1[7] ^ param_3[1] ^ (uint)param_1[4] << 0x18;
      uVar14 = uVar13 ^ (uint)param_1[5] << 0x10;
      uVar15 = uVar14 ^ (uint)param_1[6] << 8;
      uVar6 = (uint)param_1[0xb] ^ param_3[2] ^ (uint)param_1[8] << 0x18;
      uVar7 = uVar6 ^ (uint)param_1[9] << 0x10;
      uVar8 = uVar7 ^ (uint)param_1[10] << 8;
      uVar2 = (uint)param_1[0xf] ^ param_3[3] ^ (uint)param_1[0xc] << 0x18;
      uVar3 = uVar2 ^ (uint)param_1[0xd] << 0x10;
      uVar4 = uVar3 ^ (uint)param_1[0xe] << 8;
      uVar6 = *(uint *)(S1 + (ulong)(uVar6 >> 0x18) * 4) ^ *(uint *)(X2 + (ulong)(uVar8 & 0xff) * 4)
              ^ *(uint *)(S2 + (ulong)(uVar7 >> 0x10 & 0xff) * 4) ^
              *(uint *)(X1 + (ulong)(uVar8 >> 8 & 0xff) * 4);
      uVar7 = *(uint *)(S1 + (ulong)(uVar13 >> 0x18) * 4) ^
              *(uint *)(X2 + (ulong)(uVar15 & 0xff) * 4) ^
              *(uint *)(S2 + (ulong)(uVar14 >> 0x10 & 0xff) * 4) ^
              *(uint *)(X1 + (ulong)(uVar15 >> 8 & 0xff) * 4) ^ uVar6;
      uVar2 = *(uint *)(X1 + (ulong)(uVar4 >> 8 & 0xff) * 4) ^
              *(uint *)(S1 + (ulong)(uVar2 >> 0x18) * 4) ^ *(uint *)(X2 + (ulong)(uVar4 & 0xff) * 4)
              ^ *(uint *)(S2 + (ulong)(uVar3 >> 0x10 & 0xff) * 4);
      uVar3 = *(uint *)(S1 + (ulong)(uVar10 >> 0x18) * 4) ^
              *(uint *)(X2 + (ulong)(uVar12 & 0xff) * 4) ^
              *(uint *)(S2 + (ulong)(uVar11 >> 0x10 & 0xff) * 4) ^
              *(uint *)(X1 + (ulong)(uVar12 >> 8 & 0xff) * 4) ^ uVar7;
      uVar4 = uVar2 ^ uVar7;
      uVar6 = uVar6 ^ uVar2 ^ uVar3;
      uVar4 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
      uVar2 = uVar6 << 0x10 | uVar6 >> 0x10;
      uVar7 = (((uVar7 ^ uVar6) & 0xff00ff) << 8 | (uVar7 ^ uVar6) >> 8 & 0xff00ff) ^ uVar2;
      uVar3 = uVar3 ^ uVar7;
      uVar6 = uVar2 ^ uVar3 ^ uVar4;
      uVar3 = param_3[4] ^ uVar3;
      uVar2 = param_3[5] ^ uVar7 ^ uVar6;
      uVar4 = uVar7 ^ param_3[7] ^ uVar4;
      iVar9 = uVar5 - 2;
      uVar6 = uVar6 ^ param_3[6];
      puVar1 = param_3 + 8;
      do {
        uVar6 = *(uint *)(S1 + (ulong)(uVar6 >> 8 & 0xff) * 4) ^
                *(uint *)(X1 + (ulong)(uVar6 >> 0x18) * 4) ^
                *(uint *)(S2 + (ulong)(uVar6 & 0xff) * 4) ^
                *(uint *)(X2 + (ulong)(uVar6 >> 0x10 & 0xff) * 4);
        uVar2 = *(uint *)(X1 + (ulong)(uVar2 >> 0x18) * 4) ^
                *(uint *)(S2 + (ulong)(uVar2 & 0xff) * 4) ^
                *(uint *)(X2 + (ulong)(uVar2 >> 0x10 & 0xff) * 4) ^
                *(uint *)(S1 + (ulong)(uVar2 >> 8 & 0xff) * 4) ^ uVar6;
        uVar7 = *(uint *)(X1 + (ulong)(uVar3 >> 0x18) * 4) ^
                *(uint *)(S2 + (ulong)(uVar3 & 0xff) * 4) ^
                *(uint *)(X2 + (ulong)(uVar3 >> 0x10 & 0xff) * 4) ^
                *(uint *)(S1 + (ulong)(uVar3 >> 8 & 0xff) * 4) ^ uVar2;
        uVar3 = *(uint *)(X1 + (ulong)(uVar4 >> 0x18) * 4) ^
                *(uint *)(S2 + (ulong)(uVar4 & 0xff) * 4) ^
                *(uint *)(X2 + (ulong)(uVar4 >> 0x10 & 0xff) * 4) ^
                *(uint *)(S1 + (ulong)(byte)(uVar4 >> 8) * 4);
        uVar4 = uVar3 ^ uVar2;
        uVar6 = uVar6 ^ uVar3 ^ uVar7;
        uVar2 = uVar2 ^ uVar6;
        uVar8 = (uVar4 & 0xff00ff) << 8 | uVar4 >> 8 & 0xff00ff;
        uVar4 = uVar2 >> 8 & 0xff00 ^
                (uVar2 & 0xff00) << 8 ^ (uVar2 >> 0x18 | uVar2 << 0x18) ^ uVar6;
        uVar2 = (uVar7 << 0x10 | uVar7 >> 0x10) ^ uVar4;
        uVar7 = uVar4 ^ uVar8 ^ puVar1[3];
        uVar3 = *puVar1 ^ uVar2;
        uVar2 = uVar6 ^ uVar8 ^ uVar2;
        uVar4 = puVar1[1] ^ uVar4 ^ uVar2;
        uVar2 = uVar2 ^ puVar1[2];
        uVar6 = *(uint *)(X1 + (ulong)(uVar2 >> 8 & 0xff) * 4) ^
                *(uint *)(S1 + (ulong)(uVar2 >> 0x18) * 4) ^
                *(uint *)(X2 + (ulong)(uVar2 & 0xff) * 4) ^
                *(uint *)(S2 + (ulong)(uVar2 >> 0x10 & 0xff) * 4);
        uVar4 = *(uint *)(S1 + (ulong)(uVar4 >> 0x18) * 4) ^
                *(uint *)(X2 + (ulong)(uVar4 & 0xff) * 4) ^
                *(uint *)(S2 + (ulong)(uVar4 >> 0x10 & 0xff) * 4) ^
                *(uint *)(X1 + (ulong)(uVar4 >> 8 & 0xff) * 4) ^ uVar6;
        iVar9 = iVar9 + -2;
        uVar3 = *(uint *)(S1 + (ulong)(uVar3 >> 0x18) * 4) ^
                *(uint *)(X2 + (ulong)(uVar3 & 0xff) * 4) ^
                *(uint *)(S2 + (ulong)(uVar3 >> 0x10 & 0xff) * 4) ^
                *(uint *)(X1 + (ulong)(uVar3 >> 8 & 0xff) * 4) ^ uVar4;
        uVar2 = *(uint *)(S1 + (ulong)(uVar7 >> 0x18) * 4) ^
                *(uint *)(X2 + (ulong)(uVar7 & 0xff) * 4) ^
                *(uint *)(S2 + (ulong)(uVar7 >> 0x10 & 0xff) * 4) ^
                *(uint *)(X1 + (ulong)(uVar7 >> 8 & 0xff) * 4);
        uVar7 = uVar4 ^ uVar2;
        uVar6 = uVar6 ^ uVar2 ^ uVar3;
        uVar8 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
        uVar2 = uVar6 << 0x10 | uVar6 >> 0x10;
        uVar7 = (((uVar4 ^ uVar6) & 0xff00ff) << 8 | (uVar4 ^ uVar6) >> 8 & 0xff00ff) ^ uVar2;
        uVar3 = uVar3 ^ uVar7;
        uVar4 = uVar8 ^ puVar1[7] ^ uVar7;
        uVar6 = uVar2 ^ uVar8 ^ uVar3;
        uVar3 = uVar3 ^ puVar1[4];
        uVar2 = puVar1[5] ^ uVar7 ^ uVar6;
        uVar6 = uVar6 ^ puVar1[6];
        puVar1 = puVar1 + 8;
      } while (0 < iVar9);
      puVar1 = param_3 + 8 + (ulong)((uVar5 - 3 >> 1) + 1) * 8;
      uVar5 = ((*(uint *)(X2 + (ulong)(uVar3 >> 0x10 & 0xff) * 4) & 0xff00) << 8 |
              *(int *)(X1 + (ulong)(uVar3 >> 0x18) * 4) << 0x18 |
              (uint)(byte)S2[(ulong)(uVar3 & 0xff) * 4] |
              (*(uint *)(S1 + (ulong)(uVar3 >> 8 & 0xff) * 4) & 0xff) << 8) ^ *puVar1;
      uVar3 = (*(int *)(X1 + (ulong)(uVar2 >> 0x18) * 4) << 0x18 |
               (uint)(byte)S2[(ulong)(uVar2 & 0xff) * 4] |
               (*(uint *)(S1 + (ulong)(uVar2 >> 8 & 0xff) * 4) & 0xff) << 8 |
              (*(uint *)(X2 + (ulong)(uVar2 >> 0x10 & 0xff) * 4) & 0xff00) << 8) ^ puVar1[1];
      uVar6 = (*(int *)(X1 + (ulong)(uVar6 >> 0x18) * 4) << 0x18 |
               (uint)(byte)S2[(ulong)(uVar6 & 0xff) * 4] |
               (*(uint *)(S1 + (ulong)(uVar6 >> 8 & 0xff) * 4) & 0xff) << 8 |
              (*(uint *)(X2 + (ulong)(uVar6 >> 0x10 & 0xff) * 4) & 0xff00) << 8) ^ puVar1[2];
      uVar2 = (*(int *)(X1 + (ulong)(uVar4 >> 0x18) * 4) << 0x18 |
               (uint)(byte)S2[(ulong)(uVar4 & 0xff) * 4] |
               (*(uint *)(S1 + (ulong)(uVar4 >> 8 & 0xff) * 4) & 0xff) << 8 |
              (*(uint *)(X2 + (ulong)(uVar4 >> 0x10 & 0xff) * 4) & 0xff00) << 8) ^ puVar1[3];
      *param_2 = (((((((ulong)(uVar3 & 0xff) << 8 | (ulong)(uVar3 >> 8 & 0xff)) << 8 |
                     (ulong)(uVar3 >> 0x10 & 0xff)) << 8 | (ulong)(uVar3 >> 0x18)) << 8 |
                   (ulong)(uVar5 & 0xff)) << 8 | (ulong)(uVar5 >> 8 & 0xff)) << 8 |
                 (ulong)(uVar5 >> 0x10 & 0xff)) << 8 | (ulong)(uVar5 >> 0x18);
      param_2[1] = (((((((ulong)(uVar2 & 0xff) << 8 | (ulong)(uVar2 >> 8 & 0xff)) << 8 |
                       (ulong)(uVar2 >> 0x10 & 0xff)) << 8 | (ulong)(uVar2 >> 0x18)) << 8 |
                     (ulong)(uVar6 & 0xff)) << 8 | (ulong)(uVar6 >> 8 & 0xff)) << 8 |
                   (ulong)(uVar6 >> 0x10 & 0xff)) << 8 | (ulong)(uVar6 >> 0x18);
    }
    return;
  }
  return;
}



undefined8 ossl_aria_set_encrypt_key(uint *param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar7;
  uint uVar9;
  uint uVar11;
  undefined8 uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  long lVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint local_7c;
  uint local_58;
  uint local_54;
  uint uVar6;
  uint uVar8;
  uint uVar10;
  uint uVar12;
  
  iVar14 = param_2 + 0x11f;
  if (-1 < (int)(param_2 + 0x100)) {
    iVar14 = param_2 + 0x100;
  }
  if ((param_1 == (uint *)0x0) || (param_3 == (uint *)0x0)) {
    uVar13 = 0xffffffff;
  }
  else {
    uVar18 = param_2 & 0xffffffbf;
    if ((param_2 == 0x100) || (uVar18 == 0x80)) {
      param_3[0x44] = iVar14 >> 5;
      uVar1 = param_1[2];
      uVar2 = param_1[3];
      uVar3 = *param_1;
      uVar5 = uVar1 >> 0x18;
      uVar6 = uVar5 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8;
      uVar19 = uVar6 | uVar1 << 0x18;
      uVar7 = uVar3 >> 0x18;
      uVar8 = uVar7 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8;
      uVar21 = uVar8 | uVar3 << 0x18;
      lVar24 = (long)((int)(param_2 - 0x80) >> 6) * 0x10;
      uVar4 = param_1[1];
      uVar22 = uVar21 ^ *(uint *)(Key_RC + lVar24);
      uVar9 = uVar2 >> 0x18;
      uVar10 = uVar9 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8;
      uVar29 = uVar10 | uVar2 << 0x18;
      uVar11 = uVar4 >> 0x18;
      uVar12 = uVar11 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8;
      uVar15 = uVar12 | uVar4 << 0x18;
      uVar16 = uVar15 ^ *(uint *)(Key_RC + lVar24 + 4);
      uVar30 = uVar29 ^ *(uint *)(Key_RC + lVar24 + 0xc);
      uVar17 = *(uint *)(Key_RC + lVar24 + 8) ^ uVar19;
      uVar17 = *(uint *)(X1 + (ulong)(uVar17 >> 8 & 0xff) * 4) ^
               *(uint *)(S1 + (long)(int)(uVar17 >> 0x18) * 4) ^
               *(uint *)(X2 + (ulong)(uVar17 & 0xff) * 4) ^
               *(uint *)(S2 + (ulong)(uVar17 >> 0x10 & 0xff) * 4);
      uVar25 = *(uint *)(S1 + (ulong)(uVar16 >> 0x18) * 4) ^
               *(uint *)(X2 + (ulong)(uVar16 & 0xff) * 4) ^
               *(uint *)(S2 + (ulong)(uVar16 >> 0x10 & 0xff) * 4) ^
               *(uint *)(X1 + (ulong)(uVar16 >> 8 & 0xff) * 4) ^ uVar17;
      uVar30 = *(uint *)(S1 + (long)(int)(uVar30 >> 0x18) * 4) ^
               *(uint *)(X2 + (ulong)(uVar30 & 0xff) * 4) ^
               *(uint *)(S2 + (ulong)(uVar30 >> 0x10 & 0xff) * 4) ^
               *(uint *)(X1 + (ulong)(uVar30 >> 8 & 0xff) * 4);
      uVar22 = *(uint *)(S1 + (ulong)(uVar22 >> 0x18) * 4) ^
               *(uint *)(X2 + (ulong)(uVar22 & 0xff) * 4) ^
               *(uint *)(S2 + (ulong)(uVar22 >> 0x10 & 0xff) * 4) ^
               *(uint *)(X1 + (ulong)(uVar22 >> 8 & 0xff) * 4) ^ uVar25;
      uVar16 = uVar17 ^ uVar30 ^ uVar22;
      uVar30 = uVar30 ^ uVar25;
      uVar17 = uVar16 << 0x10 | uVar16 >> 0x10;
      uVar30 = uVar30 >> 0x18 | (uVar30 & 0xff0000) >> 8 | (uVar30 & 0xff00) << 8 | uVar30 << 0x18;
      local_58 = (((uVar25 ^ uVar16) & 0xff00ff) << 8 | (uVar25 ^ uVar16) >> 8 & 0xff00ff) ^ uVar17;
      uVar22 = uVar22 ^ local_58;
      local_54 = uVar30 ^ local_58;
      local_7c = uVar17 ^ uVar30 ^ uVar22;
      local_58 = local_58 ^ local_7c;
      if (param_2 != 0x80) {
        uVar16 = param_1[4];
        uVar17 = param_1[5];
        uVar22 = uVar22 ^ (uVar16 >> 0x18 | (uVar16 & 0xff0000) >> 8 | (uVar16 & 0xff00) << 8 |
                          uVar16 << 0x18);
        local_58 = local_58 ^
                   (uVar17 >> 0x18 | (uVar17 & 0xff0000) >> 8 | (uVar17 & 0xff00) << 8 |
                   uVar17 << 0x18);
        if (uVar18 != 0x80) {
          uVar16 = param_1[6];
          uVar17 = param_1[7];
          local_7c = local_7c ^
                     (uVar16 >> 0x18 | (uVar16 & 0xff0000) >> 8 | (uVar16 & 0xff00) << 8 |
                     uVar16 << 0x18);
          local_54 = local_54 ^
                     (uVar17 >> 0x18 | (uVar17 & 0xff0000) >> 8 | (uVar17 & 0xff00) << 8 |
                     uVar17 << 0x18);
        }
      }
      uVar16 = local_58 ^ *(uint *)(Key_RC + lVar24 + 0x14);
      uVar30 = *(uint *)(Key_RC + lVar24 + 0x10) ^ uVar22;
      uVar17 = local_7c ^ *(uint *)(Key_RC + lVar24 + 0x18);
      uVar26 = local_54 ^ *(uint *)(Key_RC + lVar24 + 0x1c);
      uVar25 = *(uint *)(X1 + (ulong)(uVar17 >> 0x18) * 4) ^
               *(uint *)(S2 + (ulong)(uVar17 & 0xff) * 4) ^
               *(uint *)(X2 + (ulong)(uVar17 >> 0x10 & 0xff) * 4) ^
               *(uint *)(S1 + (ulong)(uVar17 >> 8 & 0xff) * 4);
      uVar16 = *(uint *)(X1 + (ulong)(uVar16 >> 0x18) * 4) ^
               *(uint *)(S2 + (ulong)(uVar16 & 0xff) * 4) ^
               *(uint *)(X2 + (ulong)(uVar16 >> 0x10 & 0xff) * 4) ^
               *(uint *)(S1 + (ulong)(uVar16 >> 8 & 0xff) * 4) ^ uVar25;
      uVar27 = *(uint *)(X1 + (long)(int)(uVar30 >> 0x18) * 4) ^
               *(uint *)(S2 + (ulong)(uVar30 & 0xff) * 4) ^
               *(uint *)(X2 + (ulong)(uVar30 >> 0x10 & 0xff) * 4) ^
               *(uint *)(S1 + (ulong)(uVar30 >> 8 & 0xff) * 4) ^ uVar16;
      uVar17 = *(uint *)(X1 + (long)(int)(uVar26 >> 0x18) * 4) ^
               *(uint *)(S2 + (ulong)(uVar26 & 0xff) * 4) ^
               *(uint *)(X2 + (ulong)(uVar26 >> 0x10 & 0xff) * 4) ^
               *(uint *)(S1 + (ulong)(uVar26 >> 8 & 0xff) * 4);
      uVar30 = uVar17 ^ uVar16;
      uVar26 = uVar25 ^ uVar17 ^ uVar27;
      uVar16 = uVar16 ^ uVar26;
      uVar17 = uVar30 >> 8 & 0xff00ff | (uVar30 & 0xff00ff) << 8;
      uVar16 = (uVar16 & 0xff00) << 8 ^ (uVar16 >> 0x18 | uVar16 << 0x18) ^ uVar26 ^
               uVar16 >> 8 & 0xff00;
      uVar28 = (uVar27 << 0x10 | uVar27 >> 0x10) ^ uVar16;
      uVar25 = uVar21 ^ uVar28;
      uVar28 = uVar26 ^ uVar17 ^ uVar28;
      uVar17 = uVar16 ^ uVar17 ^ uVar29;
      uVar31 = uVar15 ^ uVar16 ^ uVar28;
      uVar28 = uVar28 ^ uVar19;
      uVar26 = uVar25 ^ *(uint *)(Key_RC + lVar24 + 0x20);
      uVar16 = *(uint *)(Key_RC + lVar24 + 0x24) ^ uVar31;
      uVar30 = *(uint *)(Key_RC + lVar24 + 0x28) ^ uVar28;
      uVar20 = *(uint *)(Key_RC + lVar24 + 0x2c) ^ uVar17;
      uVar30 = *(uint *)(S1 + (ulong)(uVar30 >> 0x18) * 4) ^
               *(uint *)(X2 + (ulong)(uVar30 & 0xff) * 4) ^
               *(uint *)(S2 + (ulong)(uVar30 >> 0x10 & 0xff) * 4) ^
               *(uint *)(X1 + (ulong)(uVar30 >> 8 & 0xff) * 4);
      uVar27 = *(uint *)(S1 + (ulong)(uVar16 >> 0x18) * 4) ^
               *(uint *)(X2 + (ulong)(uVar16 & 0xff) * 4) ^
               *(uint *)(S2 + (ulong)(uVar16 >> 0x10 & 0xff) * 4) ^
               *(uint *)(X1 + (ulong)(uVar16 >> 8 & 0xff) * 4) ^ uVar30;
      uVar23 = *(uint *)(S1 + (ulong)(uVar26 >> 0x18) * 4) ^
               *(uint *)(X2 + (ulong)(uVar26 & 0xff) * 4) ^
               *(uint *)(S2 + (ulong)(uVar26 >> 0x10 & 0xff) * 4) ^
               *(uint *)(X1 + (ulong)(uVar26 >> 8 & 0xff) * 4) ^ uVar27;
      uVar16 = *(uint *)(S1 + (ulong)(uVar20 >> 0x18) * 4) ^
               *(uint *)(X2 + (ulong)(uVar20 & 0xff) * 4) ^
               *(uint *)(S2 + (ulong)(uVar20 >> 0x10 & 0xff) * 4) ^
               *(uint *)(X1 + (ulong)(uVar20 >> 8 & 0xff) * 4);
      uVar26 = uVar16 ^ uVar27;
      uVar16 = uVar30 ^ uVar16 ^ uVar23;
      uVar26 = uVar26 >> 0x18 | (uVar26 & 0xff0000) >> 8 | (uVar26 & 0xff00) << 8 | uVar26 << 0x18;
      uVar30 = uVar16 << 0x10 | uVar16 >> 0x10;
      uVar27 = (((uVar27 ^ uVar16) & 0xff00ff) << 8 | (uVar27 ^ uVar16) >> 8 & 0xff00ff) ^ uVar30;
      uVar23 = uVar23 ^ uVar27;
      uVar16 = uVar30 ^ uVar26 ^ uVar23;
      uVar23 = uVar23 ^ uVar22;
      uVar30 = local_58 ^ uVar27 ^ uVar16;
      uVar16 = uVar16 ^ local_7c;
      uVar27 = uVar26 ^ local_54 ^ uVar27;
      *param_3 = (local_54 << 0xd | uVar22 >> 0x13) ^ uVar21;
      param_3[1] = (uVar22 << 0xd | local_58 >> 0x13) ^ uVar15;
      param_3[2] = (local_58 << 0xd | local_7c >> 0x13) ^ uVar19;
      param_3[3] = (local_7c << 0xd | local_54 >> 0x13) ^ uVar29;
      param_3[4] = uVar17 << 0xd ^ uVar22 ^ uVar25 >> 0x13;
      param_3[5] = uVar25 << 0xd ^ local_58 ^ uVar31 >> 0x13;
      param_3[6] = (uVar31 << 0xd | uVar28 >> 0x13) ^ local_7c;
      param_3[7] = uVar17 >> 0x13 ^ local_54 ^ uVar28 << 0xd;
      param_3[8] = uVar27 << 0xd ^ uVar25 ^ uVar23 >> 0x13;
      param_3[9] = uVar23 << 0xd ^ uVar31 ^ uVar30 >> 0x13;
      param_3[10] = (uVar30 << 0xd | uVar16 >> 0x13) ^ uVar28;
      param_3[0xb] = uVar27 >> 0x13 ^ uVar17 ^ uVar16 << 0xd;
      param_3[0xc] = (uVar10 << 0xd | uVar21 >> 0x13) ^ uVar23;
      param_3[0xd] = (uVar8 << 0xd | uVar15 >> 0x13) ^ uVar30;
      param_3[0xe] = (uVar12 << 0xd | uVar19 >> 0x13) ^ uVar16;
      param_3[0xf] = (uVar6 << 0xd | uVar29 >> 0x13) ^ uVar27;
      param_3[0x10] = (local_54 << 1 | uVar22 >> 0x1f) ^ uVar21;
      param_3[0x11] = (uVar22 << 1 | local_58 >> 0x1f) ^ uVar15;
      param_3[0x12] = (local_58 << 1 | local_7c >> 0x1f) ^ uVar19;
      param_3[0x13] = (local_7c << 1 | local_54 >> 0x1f) ^ uVar29;
      param_3[0x14] = uVar17 * 2 ^ uVar22 ^ uVar25 >> 0x1f;
      param_3[0x15] = uVar25 * 2 ^ local_58 ^ uVar31 >> 0x1f;
      param_3[0x16] = (uVar31 << 1 | uVar28 >> 0x1f) ^ local_7c;
      param_3[0x17] = uVar17 >> 0x1f ^ local_54 ^ uVar28 * 2;
      param_3[0x18] = uVar27 * 2 ^ uVar25 ^ uVar23 >> 0x1f;
      param_3[0x19] = uVar23 * 2 ^ uVar31 ^ uVar30 >> 0x1f;
      param_3[0x1a] = (uVar30 << 1 | uVar16 >> 0x1f) ^ uVar28;
      param_3[0x1b] = uVar27 >> 0x1f ^ uVar17 ^ uVar16 * 2;
      param_3[0x1c] = uVar3 >> 7 & 1 ^ uVar29 * 2 ^ uVar23;
      param_3[0x1d] = uVar4 >> 7 & 1 ^ uVar21 * 2 ^ uVar30;
      param_3[0x1e] = uVar1 >> 7 & 1 ^ uVar15 * 2 ^ uVar16;
      param_3[0x1f] = uVar2 >> 7 & 1 ^ uVar19 * 2 ^ uVar27;
      param_3[0x20] = (local_58 << 0x1d | local_7c >> 3) ^ uVar21;
      param_3[0x21] = (local_7c << 0x1d | local_54 >> 3) ^ uVar15;
      param_3[0x22] = (local_54 << 0x1d | uVar22 >> 3) ^ uVar19;
      param_3[0x23] = (uVar22 << 0x1d | local_58 >> 3) ^ uVar29;
      param_3[0x24] = (uVar31 << 0x1d | uVar28 >> 3) ^ uVar22;
      param_3[0x25] = uVar17 >> 3 ^ local_58 ^ uVar28 << 0x1d;
      param_3[0x26] = uVar17 << 0x1d ^ local_7c ^ uVar25 >> 3;
      param_3[0x27] = uVar25 << 0x1d ^ local_54 ^ uVar31 >> 3;
      param_3[0x28] = (uVar30 << 0x1d | uVar16 >> 3) ^ uVar25;
      param_3[0x29] = uVar27 >> 3 ^ uVar31 ^ uVar16 << 0x1d;
      param_3[0x2a] = uVar27 << 0x1d ^ uVar28 ^ uVar23 >> 3;
      param_3[0x2b] = uVar23 << 0x1d ^ uVar17 ^ uVar30 >> 3;
      param_3[0x2c] = (uVar11 << 0x1d | uVar19 >> 3) ^ uVar23;
      param_3[0x2d] = (uVar5 << 0x1d | uVar29 >> 3) ^ uVar30;
      param_3[0x2e] = (uVar9 << 0x1d | uVar21 >> 3) ^ uVar16;
      param_3[0x2f] = (uVar7 << 0x1d | uVar15 >> 3) ^ uVar27;
      param_3[0x30] = (uVar22 << 0x1f | local_58 >> 1) ^ uVar21;
      param_3[0x31] = (local_58 << 0x1f | local_7c >> 1) ^ uVar15;
      param_3[0x32] = (local_7c << 0x1f | local_54 >> 1) ^ uVar19;
      param_3[0x33] = (local_54 << 0x1f | uVar22 >> 1) ^ uVar29;
      if (param_2 != 0x80) {
        param_3[0x34] = uVar25 << 0x1f ^ uVar22 ^ uVar31 >> 1;
        param_3[0x35] = (uVar31 << 0x1f | uVar28 >> 1) ^ local_58;
        param_3[0x36] = uVar17 >> 1 ^ local_7c ^ uVar28 << 0x1f;
        param_3[0x37] = uVar17 << 0x1f ^ local_54 ^ uVar25 >> 1;
        param_3[0x38] = uVar23 << 0x1f ^ uVar25 ^ uVar30 >> 1;
        param_3[0x39] = (uVar30 << 0x1f | uVar16 >> 1) ^ uVar31;
        param_3[0x3a] = uVar28 ^ uVar27 >> 1 ^ uVar16 << 0x1f;
        param_3[0x3b] = uVar27 << 0x1f ^ uVar17 ^ uVar23 >> 1;
        if (uVar18 != 0x80) {
          param_3[0x3c] = uVar15 >> 1 ^ uVar7 << 0x1f ^ uVar23;
          param_3[0x3d] = uVar19 >> 1 ^ uVar11 << 0x1f ^ uVar30;
          param_3[0x3e] = uVar29 >> 1 ^ uVar5 << 0x1f ^ uVar16;
          param_3[0x3f] = uVar21 >> 1 ^ uVar9 << 0x1f ^ uVar27;
          param_3[0x40] = uVar22 << 0x13 ^ local_58 >> 0xd ^ uVar21;
          param_3[0x41] = local_58 << 0x13 ^ local_7c >> 0xd ^ uVar15;
          param_3[0x42] = local_7c << 0x13 ^ local_54 >> 0xd ^ uVar19;
          param_3[0x43] = local_54 << 0x13 ^ uVar22 >> 0xd ^ uVar29;
        }
      }
      uVar13 = 0;
    }
    else {
      uVar13 = 0xfffffffe;
    }
  }
  return uVar13;
}



int ossl_aria_set_decrypt_key(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  uint *puVar13;
  uint *puVar14;
  uint *puVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint *puVar19;
  uint uVar20;
  uint uVar21;
  uint *puVar22;
  
  iVar5 = ossl_aria_set_encrypt_key();
  if (iVar5 == 0) {
    uVar2 = *param_3;
    uVar3 = param_3[1];
    puVar22 = (uint *)(param_3 + 2);
    puVar1 = param_3 + (ulong)*(uint *)(param_3 + 0x22) * 2;
    uVar4 = puVar1[1];
    puVar19 = (uint *)(puVar1 + -2);
    *param_3 = *puVar1;
    param_3[1] = uVar4;
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
    puVar12 = puVar22;
    puVar14 = puVar19;
    if (puVar22 < puVar19) {
      do {
        uVar10 = *puVar12;
        uVar11 = puVar12[1];
        uVar18 = puVar12[3];
        uVar20 = puVar14[1];
        uVar6 = uVar10 >> 8 | uVar10 << 0x18;
        uVar10 = uVar10 ^ uVar6;
        uVar7 = uVar11 >> 8 | uVar11 << 0x18;
        uVar11 = uVar11 ^ uVar7;
        uVar8 = puVar12[2];
        uVar16 = uVar8 >> 8 | uVar8 << 0x18;
        uVar8 = uVar8 ^ uVar16;
        uVar16 = (uVar8 << 0x10 | uVar8 >> 0x10) ^ uVar16;
        uVar17 = uVar18 >> 8 | uVar18 << 0x18;
        uVar7 = (uVar11 << 0x10 | uVar11 >> 0x10) ^ uVar7 ^ uVar16;
        uVar18 = uVar18 ^ uVar17;
        uVar8 = (uVar10 << 0x10 | uVar10 >> 0x10) ^ uVar6 ^ uVar7;
        uVar17 = (uVar18 << 0x10 | uVar18 >> 0x10) ^ uVar17;
        uVar10 = uVar17 ^ uVar7;
        uVar11 = uVar16 ^ uVar17 ^ uVar8;
        uVar17 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 | uVar10 << 0x18
        ;
        uVar18 = uVar11 << 0x10 | uVar11 >> 0x10;
        uVar10 = *puVar14;
        uVar21 = (((uVar7 ^ uVar11) & 0xff00ff) << 8 | (uVar7 ^ uVar11) >> 8 & 0xff00ff) ^ uVar18;
        uVar8 = uVar8 ^ uVar21;
        uVar18 = uVar18 ^ uVar17 ^ uVar8;
        uVar6 = uVar10 >> 8 | uVar10 << 0x18;
        uVar10 = uVar10 ^ uVar6;
        uVar7 = uVar20 >> 8 | uVar20 << 0x18;
        uVar20 = uVar20 ^ uVar7;
        uVar11 = puVar14[2];
        uVar16 = uVar11 >> 8 | uVar11 << 0x18;
        uVar11 = uVar11 ^ uVar16;
        uVar16 = (uVar11 << 0x10 | uVar11 >> 0x10) ^ uVar16;
        uVar11 = puVar14[3];
        uVar7 = (uVar20 << 0x10 | uVar20 >> 0x10) ^ uVar7 ^ uVar16;
        uVar20 = (uVar10 << 0x10 | uVar10 >> 0x10) ^ uVar6 ^ uVar7;
        uVar10 = uVar11 >> 8 | uVar11 << 0x18;
        uVar11 = uVar11 ^ uVar10;
        uVar10 = (uVar11 << 0x10 | uVar11 >> 0x10) ^ uVar10;
        uVar11 = uVar10 ^ uVar7;
        uVar10 = uVar16 ^ uVar10 ^ uVar20;
        uVar6 = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18;
        uVar11 = uVar10 << 0x10 | uVar10 >> 0x10;
        uVar7 = ((uVar7 ^ uVar10) >> 8 & 0xff00ff | ((uVar7 ^ uVar10) & 0xff00ff) << 8) ^ uVar11;
        uVar20 = uVar20 ^ uVar7;
        uVar10 = uVar11 ^ uVar6 ^ uVar20;
        puVar13 = puVar12 + 4;
        puVar15 = puVar14 + -4;
        *(ulong *)puVar12 = CONCAT44(uVar7 ^ uVar10,uVar20);
        *(ulong *)(puVar12 + 2) = CONCAT44(uVar6 ^ uVar7,uVar10);
        *(ulong *)puVar14 = CONCAT44(uVar21 ^ uVar18,uVar8);
        *(ulong *)(puVar14 + 2) = CONCAT44(uVar21 ^ uVar17,uVar18);
        puVar12 = puVar13;
        puVar14 = puVar15;
      } while (puVar13 < puVar15);
      lVar9 = ((ulong)((long)puVar1 + (-0x21 - (long)param_3)) >> 5) + 1;
      puVar22 = puVar22 + lVar9 * 4;
      puVar19 = puVar19 + lVar9 * -4;
    }
    uVar10 = *puVar22;
    uVar11 = puVar22[3];
    uVar8 = uVar10 >> 8 | uVar10 << 0x18;
    uVar10 = uVar10 ^ uVar8;
    uVar18 = puVar22[1];
    uVar7 = uVar18 >> 8 | uVar18 << 0x18;
    uVar18 = uVar18 ^ uVar7;
    uVar20 = puVar22[2];
    uVar6 = uVar20 >> 8 | uVar20 << 0x18;
    uVar20 = uVar20 ^ uVar6;
    uVar6 = (uVar20 << 0x10 | uVar20 >> 0x10) ^ uVar6;
    uVar16 = uVar11 >> 8 | uVar11 << 0x18;
    uVar18 = (uVar18 << 0x10 | uVar18 >> 0x10) ^ uVar7 ^ uVar6;
    uVar11 = uVar11 ^ uVar16;
    uVar20 = (uVar10 << 0x10 | uVar10 >> 0x10) ^ uVar8 ^ uVar18;
    uVar16 = (uVar11 << 0x10 | uVar11 >> 0x10) ^ uVar16;
    uVar11 = uVar16 ^ uVar18;
    uVar10 = uVar6 ^ uVar16 ^ uVar20;
    uVar8 = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18;
    uVar11 = uVar10 << 0x10 | uVar10 >> 0x10;
    uVar18 = (((uVar18 ^ uVar10) & 0xff00ff) << 8 | (uVar18 ^ uVar10) >> 8 & 0xff00ff) ^ uVar11;
    uVar20 = uVar20 ^ uVar18;
    uVar10 = uVar11 ^ uVar8 ^ uVar20;
    *(ulong *)puVar19 = CONCAT44(uVar18 ^ uVar10,uVar20);
    *(ulong *)(puVar19 + 2) = CONCAT44(uVar18 ^ uVar8,uVar10);
  }
  return iVar5;
}


