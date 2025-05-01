
void AES_encrypt(uchar *in,uchar *out,AES_KEY *key)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  long lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 extraout_EDX;
  long alStack_68 [4];
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [16];
  
  lVar4 = -(-((long)key + (-0x3f - (long)auStack_40)) & 0x3c0U);
  *(uchar **)((long)alStack_68 + lVar4 + 0x18) = out;
  *(BADSPACEBASE **)(auStack_48 + lVar4) = register0x00000020;
  iVar1 = key->rounds;
  uVar2 = *(undefined4 *)(in + 4);
  uVar6 = *(undefined4 *)(in + 8);
  uVar5 = *(undefined4 *)(in + 0xc);
  *(AES_KEY **)((long)alStack_68 + lVar4 + 8) = key;
  *(ulong *)((long)alStack_68 + lVar4 + 0x10) = (long)key->rd_key + (ulong)(uint)(iVar1 << 4);
  *(undefined8 *)((long)alStack_68 + lVar4) = 0x1004df;
  uVar5 = _x86_64_AES_encrypt_compact(in,out,uVar5);
  puVar3 = *(undefined4 **)((long)alStack_68 + lVar4 + 0x18);
  *puVar3 = uVar5;
  puVar3[1] = uVar2;
  puVar3[2] = uVar6;
  puVar3[3] = extraout_EDX;
  return;
}



void AES_decrypt(uchar *in,uchar *out,AES_KEY *key)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  long lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 extraout_EDX;
  long alStack_68 [4];
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [16];
  
  lVar4 = -(-((long)key + (-0x3f - (long)auStack_40)) & 0x3c0U);
  *(uchar **)((long)alStack_68 + lVar4 + 0x18) = out;
  *(BADSPACEBASE **)(auStack_48 + lVar4) = register0x00000020;
  iVar1 = key->rounds;
  uVar2 = *(undefined4 *)(in + 4);
  uVar6 = *(undefined4 *)(in + 8);
  uVar5 = *(undefined4 *)(in + 0xc);
  *(AES_KEY **)((long)alStack_68 + lVar4 + 8) = key;
  *(ulong *)((long)alStack_68 + lVar4 + 0x10) = (long)key->rd_key + (ulong)(uint)(iVar1 << 4);
  *(undefined8 *)((long)alStack_68 + lVar4) = 0x100a76;
  uVar5 = _x86_64_AES_decrypt_compact(in,out,uVar5);
  puVar3 = *(undefined4 **)((long)alStack_68 + lVar4 + 0x18);
  *puVar3 = uVar5;
  puVar3[1] = uVar2;
  puVar3[2] = uVar6;
  puVar3[3] = extraout_EDX;
  return;
}



int AES_set_encrypt_key(uchar *userKey,int bits,AES_KEY *key)

{
  int iVar1;
  
  iVar1 = _x86_64_AES_set_encrypt_key();
  return iVar1;
}



int AES_set_decrypt_key(uchar *userKey,int bits,AES_KEY *key)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined4 in_register_00000034;
  AES_KEY *pAVar13;
  AES_KEY *pAVar14;
  uint uVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  uint uVar20;
  ulong uVar21;
  uint uVar22;
  uint uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  uint uVar27;
  ulong uVar28;
  ulong uVar29;
  
  iVar8 = _x86_64_AES_set_encrypt_key(userKey,CONCAT44(in_register_00000034,bits));
  if (iVar8 == 0) {
    uVar9 = key->rounds;
    pAVar14 = (AES_KEY *)(key->rd_key + (ulong)uVar9 * 4);
    pAVar13 = key;
    do {
      uVar1 = *(undefined8 *)(pAVar13->rd_key + 2);
      uVar2 = *(undefined8 *)pAVar14->rd_key;
      uVar3 = *(undefined8 *)(pAVar14->rd_key + 2);
      *(undefined8 *)pAVar14->rd_key = *(undefined8 *)pAVar13->rd_key;
      *(undefined8 *)(pAVar14->rd_key + 2) = uVar1;
      *(undefined8 *)pAVar13->rd_key = uVar2;
      *(undefined8 *)(pAVar13->rd_key + 2) = uVar3;
      uVar7 = DAT_00102178;
      uVar6 = DAT_00102170;
      uVar5 = DAT_00102168;
      pAVar13 = (AES_KEY *)(pAVar13->rd_key + 4);
      pAVar14 = (AES_KEY *)(pAVar14[-1].rd_key + 0x39);
    } while (pAVar14 != pAVar13);
    iVar8 = uVar9 - 1;
    do {
      pAVar13 = (AES_KEY *)(key->rd_key + 4);
      uVar29 = *(ulong *)pAVar13->rd_key;
      uVar4 = *(ulong *)(key->rd_key + 6);
      uVar17 = uVar29 * 2 & uVar6 ^ (uVar5 & uVar29) - ((uVar5 & uVar29) >> 7) & uVar7;
      uVar24 = uVar4 * 2 & uVar6 ^ (uVar5 & uVar4) - ((uVar5 & uVar4) >> 7) & uVar7;
      uVar19 = uVar17 * 2 & uVar6 ^ (uVar5 & uVar17) - ((uVar5 & uVar17) >> 7) & uVar7;
      uVar26 = uVar24 * 2 & uVar6 ^ (uVar5 & uVar24) - ((uVar5 & uVar24) >> 7) & uVar7;
      uVar21 = uVar19 * 2 & uVar6 ^ (uVar5 & uVar19) - ((uVar5 & uVar19) >> 7) & uVar7;
      uVar28 = uVar26 * 2 & uVar6 ^ (uVar5 & uVar26) - ((uVar5 & uVar26) >> 7) & uVar7;
      uVar18 = uVar17 ^ uVar29 ^ uVar21;
      uVar25 = uVar24 ^ uVar4 ^ uVar28;
      uVar19 = uVar19 ^ uVar29 ^ uVar21;
      uVar26 = uVar26 ^ uVar4 ^ uVar28;
      uVar9 = (uint)(uVar29 ^ uVar21);
      uVar10 = (uint)(uVar4 ^ uVar28);
      uVar17 = uVar17 ^ uVar29 ^ uVar19;
      uVar12 = (uint)((uVar29 ^ uVar21) >> 0x20);
      uVar29 = uVar24 ^ uVar4 ^ uVar26;
      uVar11 = (uint)((uVar4 ^ uVar28) >> 0x20);
      uVar15 = (uint)uVar18;
      uVar22 = (uint)uVar25;
      uVar20 = (uint)(uVar18 >> 0x20);
      uVar27 = (uint)(uVar25 >> 0x20);
      uVar16 = (uint)(uVar19 >> 0x20);
      uVar23 = (uint)(uVar26 >> 0x20);
      pAVar13->rd_key[0] =
           (uVar9 << 8 | uVar9 >> 0x18) ^ (uint)uVar17 ^ (uVar15 << 0x18 | uVar15 >> 8) ^
           ((uint)uVar19 << 0x10 | (uint)uVar19 >> 0x10);
      key->rd_key[5] =
           (uVar12 << 8 | uVar12 >> 0x18) ^ (uint)(uVar17 >> 0x20) ^ (uVar20 << 0x18 | uVar20 >> 8)
           ^ (uVar16 << 0x10 | uVar16 >> 0x10);
      key->rd_key[6] =
           (uVar10 << 8 | uVar10 >> 0x18) ^ (uint)uVar29 ^ (uVar22 << 0x18 | uVar22 >> 8) ^
           ((uint)uVar26 << 0x10 | (uint)uVar26 >> 0x10);
      key->rd_key[7] =
           (uVar11 << 8 | uVar11 >> 0x18) ^ (uint)(uVar29 >> 0x20) ^ (uVar27 << 0x18 | uVar27 >> 8)
           ^ (uVar23 << 0x10 | uVar23 >> 0x10);
      iVar8 = iVar8 + -1;
      key = pAVar13;
    } while (iVar8 != 0);
    iVar8 = 0;
  }
  return iVar8;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void AES_cbc_encrypt(uchar *in,uchar *out,size_t length,AES_KEY *key,uchar *ivec,int enc)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uchar *puVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  long lVar15;
  undefined4 extraout_EDX;
  uint extraout_EDX_00;
  uint extraout_EDX_01;
  undefined4 extraout_EDX_02;
  uint extraout_EDX_03;
  uint uVar16;
  undefined1 *puVar17;
  int *piVar18;
  undefined8 *puVar19;
  uint *puVar20;
  uchar *puVar21;
  ulong uVar22;
  size_t sVar23;
  ulong uVar24;
  long lVar25;
  undefined *puVar26;
  AES_KEY *pAVar27;
  byte bVar28;
  long alStack_1c8 [3];
  undefined1 auStack_1b0 [8];
  long alStack_1a8 [5];
  uint auStack_180 [2];
  undefined8 uStack_178;
  undefined1 auStack_170 [244];
  uint uStack_7c;
  undefined8 uStack_78;
  
  if (length != 0) {
    bVar28 = 0;
    puVar26 = &DAT_00101540;
    if (enc == 0) {
      puVar26 = &DAT_00102180;
    }
    if (((length < 0x200) || ((length & 0xf) != 0)) || ((_OPENSSL_ia32cap_P >> 0x1c & 1) != 0)) {
      lVar25 = -(-((long)key + (-0x97 - (long)(auStack_170 + 0xb0))) & 0x3c0U);
      *(undefined1 **)(auStack_170 + lVar25 + 0xc0) = &stack0xffffffffffffffc8;
      *(uchar **)(auStack_170 + lVar25 + 0xe8) = ivec;
      iVar13 = key->rounds;
      *(AES_KEY **)(auStack_170 + 0xb0 + lVar25) = key;
      *(ulong *)(auStack_170 + lVar25 + 0xb8) = (long)key->rd_key + (ulong)(uint)(iVar13 << 4);
      if (enc == 0) {
        uVar6 = *(undefined8 *)(ivec + 8);
        *(undefined8 *)(auStack_170 + lVar25 + 0xf0) = *(undefined8 *)ivec;
        *(undefined8 *)((long)&uStack_78 + lVar25) = uVar6;
        while( true ) {
          uVar16 = *(uint *)(in + 4);
          uVar14 = *(uint *)(in + 8);
          *(uchar **)(auStack_170 + lVar25 + 200) = in;
          *(uchar **)(auStack_170 + lVar25 + 0xd0) = out;
          *(size_t *)(auStack_170 + lVar25 + 0xd8) = length;
          *(undefined8 *)(auStack_170 + lVar25 + 0xa8) = 0x101463;
          uVar12 = _x86_64_AES_decrypt_compact();
          puVar19 = *(undefined8 **)(auStack_170 + lVar25 + 200);
          puVar20 = *(uint **)(auStack_170 + lVar25 + 0xd0);
          uVar24 = *(ulong *)(auStack_170 + lVar25 + 0xd8);
          uVar12 = uVar12 ^ *(uint *)(auStack_170 + lVar25 + 0xf0);
          uVar16 = uVar16 ^ *(uint *)((long)&uStack_7c + lVar25);
          uVar14 = uVar14 ^ *(uint *)((long)&uStack_78 + lVar25);
          uVar11 = extraout_EDX_03 ^ *(uint *)((long)&uStack_78 + lVar25 + 4);
          uVar6 = *puVar19;
          uVar7 = puVar19[1];
          length = uVar24 - 0x10;
          if (uVar24 < 0x10) break;
          if (length == 0) {
            puVar19 = *(undefined8 **)(auStack_170 + lVar25 + 0xe8);
            *puVar19 = uVar6;
            puVar19[1] = uVar7;
            *puVar20 = uVar12;
            puVar20[1] = uVar16;
            puVar20[2] = uVar14;
            puVar20[3] = uVar11;
            return;
          }
          *(undefined8 *)(auStack_170 + lVar25 + 0xf0) = uVar6;
          *(undefined8 *)((long)&uStack_78 + lVar25) = uVar7;
          *puVar20 = uVar12;
          puVar20[1] = uVar16;
          puVar20[2] = uVar14;
          puVar20[3] = uVar11;
          in = (uchar *)(puVar19 + 2);
          out = (uchar *)(puVar20 + 4);
        }
        puVar19 = *(undefined8 **)(auStack_170 + lVar25 + 0xe8);
        *puVar19 = uVar6;
        puVar19[1] = uVar7;
        *(uint *)(auStack_170 + lVar25 + 0xf0) = uVar12;
        *(uint *)((long)&uStack_7c + lVar25) = uVar16;
        *(uint *)((long)&uStack_78 + lVar25) = uVar14;
        *(uint *)((long)&uStack_78 + lVar25 + 4) = uVar11;
        puVar17 = auStack_170 + lVar25 + 0xf0;
        for (; uVar24 != 0; uVar24 = uVar24 - 1) {
          *(undefined1 *)puVar20 = *puVar17;
          puVar17 = puVar17 + (ulong)bVar28 * -2 + 1;
          puVar20 = (uint *)((long)puVar20 + (ulong)bVar28 * -2 + 1);
        }
      }
      else {
        uVar16 = *(uint *)(ivec + 4);
        uVar24 = (ulong)*(uint *)(ivec + 8);
        puVar21 = in;
        sVar23 = length;
        puVar8 = out;
        if ((length & 0xfffffffffffffff0) == 0) goto code_r0x001013ef;
        while( true ) {
          do {
            uVar16 = uVar16 ^ *(uint *)(puVar21 + 4);
            uVar24 = (ulong)((uint)uVar24 ^ *(uint *)(puVar21 + 8));
            *(uchar **)(auStack_170 + lVar25 + 200) = puVar21;
            *(uchar **)(auStack_170 + lVar25 + 0xd0) = out;
            *(size_t *)(auStack_170 + lVar25 + 0xd8) = length;
            *(undefined8 *)(auStack_170 + lVar25 + 0xa8) = 0x10138b;
            uVar9 = _x86_64_AES_encrypt_compact();
            lVar15 = *(long *)(auStack_170 + lVar25 + 200);
            puVar4 = *(undefined4 **)(auStack_170 + lVar25 + 0xd0);
            lVar3 = *(long *)(auStack_170 + lVar25 + 0xd8);
            *puVar4 = uVar9;
            puVar4[1] = uVar16;
            puVar4[2] = (int)uVar24;
            puVar4[3] = extraout_EDX_02;
            in = (uchar *)(lVar15 + 0x10);
            out = (uchar *)(puVar4 + 4);
            length = lVar3 - 0x10;
            puVar21 = in;
          } while ((length & 0xfffffffffffffff0) != 0);
          sVar23 = length;
          puVar8 = out;
          if ((length & 0xf) == 0) break;
code_r0x001013ef:
          for (; puVar21 = puVar8, length != 0; length = length - 1) {
            *out = *in;
            in = in + (ulong)bVar28 * -2 + 1;
            out = out + (ulong)bVar28 * -2 + 1;
            puVar8 = puVar21;
          }
          for (lVar15 = 0x10 - sVar23; lVar15 != 0; lVar15 = lVar15 + -1) {
            *out = '\0';
            out = out + (ulong)bVar28 * -2 + 1;
          }
          length = 0x10;
          out = puVar21;
        }
        puVar4 = *(undefined4 **)(auStack_170 + lVar25 + 0xe8);
        *puVar4 = uVar9;
        puVar4[1] = uVar16;
        puVar4[2] = (int)uVar24;
        puVar4[3] = extraout_EDX_02;
      }
    }
    else {
      uVar24 = (ulong)(alStack_1a8 + 4) & 0xfc0;
      if (uVar24 < ((ulong)(puVar26 + 0x900) & 0xfff)) {
        lVar25 = (uVar24 - ((ulong)puVar26 & 0xfff) & 0xfff) + 0x140;
      }
      else {
        lVar25 = uVar24 - ((ulong)(puVar26 + 0x900) & 0xfff);
      }
      lVar25 = -lVar25;
      *(undefined1 **)(auStack_1b0 + lVar25) = &stack0xffffffffffffffc8;
      *(uchar **)((long)alStack_1a8 + lVar25) = in;
      *(uchar **)((long)alStack_1a8 + lVar25 + 8) = out;
      *(size_t *)((long)alStack_1a8 + lVar25 + 0x10) = length;
      *(AES_KEY **)((long)alStack_1a8 + lVar25 + 0x18) = key;
      *(uchar **)((long)alStack_1a8 + lVar25 + 0x20) = ivec;
      *(undefined4 *)(auStack_170 + lVar25 + 0xf0) = 0;
      iVar13 = key->rounds;
      uVar24 = (long)key - (long)puVar26 & 0xfff;
      if ((uVar24 < 0x900) || (pAVar27 = key, 0xf07 < uVar24)) {
        pAVar27 = (AES_KEY *)(auStack_170 + lVar25);
        piVar18 = (int *)(auStack_170 + lVar25);
        for (lVar15 = 0x1e; lVar15 != 0; lVar15 = lVar15 + -1) {
          *(undefined8 *)piVar18 = *(undefined8 *)key->rd_key;
          key = (AES_KEY *)(key->rd_key + 2);
          piVar18 = piVar18 + 2;
        }
        *piVar18 = iVar13;
      }
      *(AES_KEY **)((long)alStack_1c8 + lVar25 + 8) = pAVar27;
      iVar13 = 0x12;
      do {
        iVar13 = iVar13 + -1;
      } while (iVar13 != 0);
      if (enc == 0) {
        if (out == in) {
          uVar6 = *(undefined8 *)(ivec + 8);
          *(undefined8 *)((long)auStack_180 + lVar25) = *(undefined8 *)ivec;
          *(undefined8 *)((long)&uStack_178 + lVar25) = uVar6;
          while( true ) {
            uVar16 = *(uint *)(in + 4);
            uVar14 = *(uint *)(in + 8);
            *(uchar **)((long)alStack_1a8 + lVar25) = in;
            *(undefined8 *)((long)alStack_1c8 + lVar25) = 0x101241;
            uVar11 = _x86_64_AES_decrypt();
            puVar19 = *(undefined8 **)((long)alStack_1a8 + lVar25);
            uVar11 = uVar11 ^ *(uint *)((long)auStack_180 + lVar25);
            uVar16 = uVar16 ^ *(uint *)((long)auStack_180 + lVar25 + 4);
            uVar14 = uVar14 ^ *(uint *)((long)&uStack_178 + lVar25);
            uVar12 = *(uint *)(auStack_170 + lVar25 + -4);
            uVar6 = puVar19[1];
            lVar15 = *(long *)((long)alStack_1a8 + lVar25 + 0x10) + -0x10;
            if (lVar15 == 0) break;
            *(undefined8 *)((long)auStack_180 + lVar25) = *puVar19;
            *(undefined8 *)((long)&uStack_178 + lVar25) = uVar6;
            *(uint *)out = uVar11;
            *(uint *)((long)out + 4) = uVar16;
            *(uint *)((long)out + 8) = uVar14;
            *(uint *)((long)out + 0xc) = extraout_EDX_01 ^ uVar12;
            in = (uchar *)(puVar19 + 2);
            out = (uchar *)((long)out + 0x10);
            *(long *)((long)alStack_1a8 + lVar25 + 0x10) = lVar15;
          }
          puVar5 = *(undefined8 **)((long)alStack_1a8 + lVar25 + 0x20);
          *puVar5 = *puVar19;
          puVar5[1] = uVar6;
          *(uint *)out = uVar11;
          *(uint *)((long)out + 4) = uVar16;
          *(uint *)((long)out + 8) = uVar14;
          *(uint *)((long)out + 0xc) = extraout_EDX_01 ^ uVar12;
        }
        else {
          *(uchar **)((long)auStack_180 + lVar25) = ivec;
          do {
            uVar16 = *(uint *)(in + 4);
            uVar14 = *(uint *)(in + 8);
            *(uchar **)((long)alStack_1a8 + lVar25) = in;
            *(undefined8 *)((long)alStack_1c8 + lVar25) = 0x1011ad;
            uVar10 = _x86_64_AES_decrypt();
            puVar20 = *(uint **)((long)auStack_180 + lVar25);
            puVar19 = *(undefined8 **)((long)alStack_1a8 + lVar25);
            uVar12 = *puVar20;
            uVar11 = puVar20[1];
            uVar1 = puVar20[2];
            uVar2 = puVar20[3];
            lVar15 = *(long *)((long)alStack_1a8 + lVar25 + 0x10) + -0x10;
            *(long *)((long)alStack_1a8 + lVar25 + 0x10) = lVar15;
            *(undefined8 **)((long)auStack_180 + lVar25) = puVar19;
            *(uint *)out = uVar10 ^ uVar12;
            *(uint *)((long)out + 4) = uVar16 ^ uVar11;
            *(uint *)((long)out + 8) = uVar14 ^ uVar1;
            *(uint *)((long)out + 0xc) = extraout_EDX_00 ^ uVar2;
            in = (uchar *)(puVar19 + 2);
            out = (uchar *)((long)out + 0x10);
          } while (lVar15 != 0);
          puVar5 = *(undefined8 **)((long)alStack_1a8 + lVar25 + 0x20);
          uVar6 = puVar19[1];
          *puVar5 = *puVar19;
          puVar5[1] = uVar6;
        }
      }
      else {
        uVar16 = *(uint *)(ivec + 4);
        uVar24 = (ulong)*(uint *)(ivec + 8);
        do {
          uVar16 = uVar16 ^ *(uint *)(in + 4);
          uVar24 = (ulong)((uint)uVar24 ^ *(uint *)(in + 8));
          *(uchar **)((long)alStack_1a8 + lVar25) = in;
          *(undefined8 *)((long)alStack_1c8 + lVar25) = 0x10112d;
          uVar9 = _x86_64_AES_encrypt();
          lVar15 = *(long *)((long)alStack_1a8 + lVar25);
          lVar3 = *(long *)((long)alStack_1a8 + lVar25 + 0x10);
          *(undefined4 *)out = uVar9;
          *(uint *)(out + 4) = uVar16;
          *(int *)(out + 8) = (int)uVar24;
          *(undefined4 *)(out + 0xc) = extraout_EDX;
          in = (uchar *)(lVar15 + 0x10);
          out = out + 0x10;
          uVar22 = lVar3 - 0x10;
          *(ulong *)((long)alStack_1a8 + lVar25 + 0x10) = uVar22;
        } while ((uVar22 & 0xfffffffffffffff0) != 0);
        puVar4 = *(undefined4 **)((long)alStack_1a8 + lVar25 + 0x20);
        *puVar4 = uVar9;
        puVar4[1] = uVar16;
        puVar4[2] = (int)uVar24;
        puVar4[3] = extraout_EDX;
      }
      if (*(int *)(auStack_170 + lVar25 + 0xf0) != 0) {
        puVar19 = (undefined8 *)(auStack_170 + lVar25);
        for (lVar15 = 0x1e; lVar15 != 0; lVar15 = lVar15 + -1) {
          *puVar19 = 0;
          puVar19 = puVar19 + (ulong)bVar28 * -2 + 1;
        }
      }
    }
  }
  return;
}


