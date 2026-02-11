
void AES_ige_encrypt(uchar *in,uchar *out,size_t length,AES_KEY *key,uchar *ivec,int enc)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  uchar *puVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  ulong uVar10;
  ulong extraout_RDX;
  uchar *unaff_RBX;
  ulong *puVar11;
  byte *pbVar12;
  byte *out_00;
  byte *pbVar13;
  byte *pbVar14;
  uchar *puVar15;
  byte *pbVar16;
  byte bVar17;
  char *pcVar18;
  byte bVar19;
  byte bVar20;
  char *pcVar21;
  undefined4 in_register_0000008c;
  byte bVar22;
  AES_KEY *unaff_R12;
  byte *pbVar23;
  ulong *puVar24;
  ulong *puVar25;
  byte *pbVar26;
  byte bVar27;
  ulong *puVar28;
  long in_FS_OFFSET;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  ulong uVar34;
  byte bStack_148;
  byte bStack_140;
  byte bStack_12d;
  byte bStack_12c;
  byte bStack_12b;
  byte bStack_12a;
  byte bStack_129;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_d8;
  uchar *puStack_c8;
  uchar *puStack_c0;
  AES_KEY *pAStack_b8;
  uint uStack_90;
  ulong local_58;
  ulong uStack_50;
  long local_40;
  
  pbVar16 = (byte *)CONCAT44(in_register_0000008c,enc);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (length == 0) {
LAB_0010013d:
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  if ((((in == (uchar *)0x0) || (unaff_RBX = out, out == (uchar *)0x0)) ||
      (unaff_R12 = key, key == (AES_KEY *)0x0)) || (ivec == (uchar *)0x0)) {
    OPENSSL_die("assertion failed: in && out && key && ivec","crypto/aes/aes_ige.c",0x3a);
    out = unaff_RBX;
LAB_00100379:
    OPENSSL_die("assertion failed: (length % AES_BLOCK_SIZE) == 0","crypto/aes/aes_ige.c",0x3c);
  }
  else if ((uint)enc < 2) {
    if ((length & 0xf) == 0) {
      uVar10 = length >> 4;
      if (enc == 1) {
        if (in == out) {
          uVar29 = *(ulong *)ivec;
          uVar30 = *(ulong *)(ivec + 8);
          uVar31 = *(ulong *)(ivec + 0x10);
          uVar32 = *(ulong *)(ivec + 0x18);
          if (uVar10 != 0) {
            puVar11 = (ulong *)out;
            uVar33 = uVar31;
            uVar34 = uVar32;
            do {
              puVar25 = puVar11 + 2;
              uVar31 = *(ulong *)in;
              uVar32 = *(ulong *)((long)in + 8);
              in = (uchar *)((long)in + 0x10);
              local_58 = uVar29 ^ uVar31;
              uStack_50 = uVar30 ^ uVar32;
              AES_encrypt((uchar *)&local_58,(uchar *)&local_58,key);
              uVar29 = uVar33 ^ local_58;
              uVar30 = uVar34 ^ uStack_50;
              *puVar11 = uVar29;
              puVar11[1] = uVar30;
              puVar11 = puVar25;
              uVar33 = uVar31;
              uVar34 = uVar32;
              local_58 = uVar29;
              uStack_50 = uVar30;
            } while (puVar25 != (ulong *)(out + uVar10 * 0x10));
          }
          *(ulong *)ivec = uVar29;
          *(ulong *)(ivec + 8) = uVar30;
          *(ulong *)(ivec + 0x10) = uVar31;
          *(ulong *)(ivec + 0x18) = uVar32;
        }
        else {
          puVar11 = (ulong *)(ivec + 0x10);
          puVar4 = ivec;
          if (uVar10 != 0) {
            uVar29 = *(ulong *)ivec;
            uVar30 = *(ulong *)(ivec + 8);
            puVar25 = (ulong *)in;
            puVar28 = (ulong *)out;
            do {
              uVar31 = puVar25[1];
              puVar24 = puVar28 + 2;
              *puVar28 = uVar29 ^ *puVar25;
              puVar28[1] = uVar30 ^ uVar31;
              AES_encrypt((uchar *)puVar28,(uchar *)puVar28,key);
              uVar29 = *puVar11 ^ *puVar28;
              uVar30 = puVar11[1] ^ puVar28[1];
              *puVar28 = uVar29;
              puVar28[1] = uVar30;
              puVar11 = puVar25;
              puVar25 = puVar25 + 2;
              puVar28 = puVar24;
            } while (puVar24 != (ulong *)(out + uVar10 * 0x10));
            lVar3 = (uVar10 - 1) * 0x10;
            puVar11 = (ulong *)(in + lVar3);
            puVar4 = out + lVar3;
          }
          uVar1 = *(undefined8 *)(puVar4 + 8);
          *(undefined8 *)ivec = *(undefined8 *)puVar4;
          *(undefined8 *)(ivec + 8) = uVar1;
          uVar10 = puVar11[1];
          *(ulong *)(ivec + 0x10) = *puVar11;
          *(ulong *)(ivec + 0x18) = uVar10;
        }
      }
      else if (in == out) {
        uVar29 = *(ulong *)ivec;
        uVar30 = *(ulong *)(ivec + 8);
        uVar31 = *(ulong *)(ivec + 0x10);
        uVar32 = *(ulong *)(ivec + 0x18);
        if (uVar10 != 0) {
          puVar11 = (ulong *)out;
          uVar33 = uVar29;
          uVar34 = uVar30;
          do {
            puVar25 = puVar11 + 2;
            uVar29 = *(ulong *)in;
            uVar30 = *(ulong *)((long)in + 8);
            in = (uchar *)((long)in + 0x10);
            local_58 = uVar31 ^ uVar29;
            uStack_50 = uVar32 ^ uVar30;
            AES_decrypt((uchar *)&local_58,(uchar *)&local_58,key);
            uVar31 = uVar33 ^ local_58;
            uVar32 = uVar34 ^ uStack_50;
            *puVar11 = uVar31;
            puVar11[1] = uVar32;
            puVar11 = puVar25;
            uVar33 = uVar29;
            uVar34 = uVar30;
            local_58 = uVar31;
            uStack_50 = uVar32;
          } while (puVar25 != (ulong *)(out + uVar10 * 0x10));
        }
        *(ulong *)ivec = uVar29;
        *(ulong *)(ivec + 8) = uVar30;
        *(ulong *)(ivec + 0x10) = uVar31;
        *(ulong *)(ivec + 0x18) = uVar32;
      }
      else {
        if (uVar10 == 0) {
          puVar4 = ivec + 0x10;
          puVar15 = ivec;
        }
        else {
          uVar29 = *(ulong *)(ivec + 0x10);
          uVar30 = *(ulong *)(ivec + 0x18);
          puVar11 = (ulong *)out;
          puVar25 = (ulong *)ivec;
          puVar28 = (ulong *)in;
          do {
            puVar24 = puVar11 + 2;
            local_58 = uVar29 ^ *puVar28;
            uStack_50 = uVar30 ^ puVar28[1];
            AES_decrypt((uchar *)&local_58,(uchar *)puVar11,key);
            uVar29 = *puVar25 ^ *puVar11;
            uVar30 = puVar25[1] ^ puVar11[1];
            *puVar11 = uVar29;
            puVar11[1] = uVar30;
            puVar11 = puVar24;
            puVar25 = puVar28;
            puVar28 = puVar28 + 2;
          } while (puVar24 != (ulong *)(out + uVar10 * 0x10));
          lVar3 = (uVar10 - 1) * 0x10;
          puVar4 = out + lVar3;
          puVar15 = in + lVar3;
        }
        uVar1 = *(undefined8 *)(puVar15 + 8);
        *(undefined8 *)ivec = *(undefined8 *)puVar15;
        *(undefined8 *)(ivec + 8) = uVar1;
        uVar1 = *(undefined8 *)(puVar4 + 8);
        *(undefined8 *)(ivec + 0x10) = *(undefined8 *)puVar4;
        *(undefined8 *)(ivec + 0x18) = uVar1;
      }
      goto LAB_0010013d;
    }
    goto LAB_00100379;
  }
  pcVar18 = "crypto/aes/aes_ige.c";
  pcVar21 = "assertion failed: (AES_ENCRYPT == enc) || (AES_DECRYPT == enc)";
  OPENSSL_die("assertion failed: (AES_ENCRYPT == enc) || (AES_DECRYPT == enc)",
              "crypto/aes/aes_ige.c",0x3b);
  lStack_d8 = *(long *)(in_FS_OFFSET + 0x28);
  puStack_c8 = out;
  puStack_c0 = in;
  pAStack_b8 = unaff_R12;
  if ((((byte *)pcVar21 != (byte *)0x0) && ((byte *)pcVar18 != (byte *)0x0)) &&
     ((key != (AES_KEY *)0x0 && (pbVar16 != (byte *)0x0)))) {
    if (uStack_90 < 2) {
      if ((extraout_RDX & 0xf) == 0) {
        if (uStack_90 == 1) {
          if (0xf < extraout_RDX) {
            bVar9 = *pbVar16;
            pbVar26 = pbVar16;
            pbVar14 = pbVar16 + 0x10;
            pbVar13 = (byte *)pcVar18;
            do {
              *pbVar13 = bVar9 ^ *pcVar21;
              pbVar13[1] = ((byte *)pcVar21)[1] ^ pbVar26[1];
              pbVar13[2] = ((byte *)pcVar21)[2] ^ pbVar26[2];
              pbVar13[3] = ((byte *)pcVar21)[3] ^ pbVar26[3];
              pbVar13[4] = ((byte *)pcVar21)[4] ^ pbVar26[4];
              pbVar13[5] = ((byte *)pcVar21)[5] ^ pbVar26[5];
              pbVar13[6] = ((byte *)pcVar21)[6] ^ pbVar26[6];
              pbVar13[7] = ((byte *)pcVar21)[7] ^ pbVar26[7];
              pbVar13[8] = ((byte *)pcVar21)[8] ^ pbVar26[8];
              pbVar13[9] = ((byte *)pcVar21)[9] ^ pbVar26[9];
              pbVar13[10] = ((byte *)pcVar21)[10] ^ pbVar26[10];
              pbVar13[0xb] = ((byte *)pcVar21)[0xb] ^ pbVar26[0xb];
              pbVar13[0xc] = ((byte *)pcVar21)[0xc] ^ pbVar26[0xc];
              pbVar13[0xd] = ((byte *)pcVar21)[0xd] ^ pbVar26[0xd];
              pbVar13[0xe] = ((byte *)pcVar21)[0xe] ^ pbVar26[0xe];
              pbVar13[0xf] = ((byte *)pcVar21)[0xf] ^ pbVar26[0xf];
              AES_encrypt(pbVar13,pbVar13,key);
              bVar9 = *pbVar13 ^ *pbVar14;
              pbVar23 = pbVar13 + 0x10;
              *pbVar13 = bVar9;
              pbVar13[1] = pbVar13[1] ^ pbVar14[1];
              pbVar13[2] = pbVar13[2] ^ pbVar14[2];
              pbVar13[3] = pbVar13[3] ^ pbVar14[3];
              pbVar13[4] = pbVar13[4] ^ pbVar14[4];
              pbVar13[5] = pbVar13[5] ^ pbVar14[5];
              pbVar13[6] = pbVar13[6] ^ pbVar14[6];
              pbVar13[7] = pbVar13[7] ^ pbVar14[7];
              pbVar13[8] = pbVar13[8] ^ pbVar14[8];
              pbVar13[9] = pbVar13[9] ^ pbVar14[9];
              pbVar13[10] = pbVar13[10] ^ pbVar14[10];
              pbVar13[0xb] = pbVar13[0xb] ^ pbVar14[0xb];
              pbVar13[0xc] = pbVar13[0xc] ^ pbVar14[0xc];
              pbVar13[0xd] = pbVar13[0xd] ^ pbVar14[0xd];
              pbVar13[0xe] = pbVar13[0xe] ^ pbVar14[0xe];
              pbVar13[0xf] = pbVar13[0xf] ^ pbVar14[0xf];
              uStack_f0 = *(undefined8 *)pcVar21;
              uStack_e8 = *(undefined8 *)((byte *)pcVar21 + 8);
              pcVar21 = (char *)((byte *)pcVar21 + 0x10);
              pbVar26 = pbVar13;
              pbVar14 = (byte *)&uStack_f0;
              pbVar13 = pbVar23;
            } while (pbVar23 != (byte *)pcVar18 + (extraout_RDX - 0x10 & 0xfffffffffffffff0) + 0x10)
            ;
            bVar9 = pbVar16[0x20];
            pbVar26 = pbVar16 + 0x20;
            pbVar14 = (byte *)pcVar18 + (extraout_RDX - 0x10 & 0xfffffffffffffff0) + 0x10;
            pbVar16 = pbVar16 + 0x30;
            do {
              uStack_100 = *(undefined8 *)(pbVar14 + -0x10);
              uStack_f8 = *(undefined8 *)(pbVar14 + -8);
              pbVar13 = pbVar14 + -0x10;
              *pbVar13 = *pbVar13 ^ bVar9;
              pbVar14[-0xf] = pbVar14[-0xf] ^ pbVar26[1];
              pbVar14[-0xe] = pbVar14[-0xe] ^ pbVar26[2];
              pbVar14[-0xd] = pbVar14[-0xd] ^ pbVar26[3];
              pbVar14[-0xc] = pbVar14[-0xc] ^ pbVar26[4];
              pbVar14[-0xb] = pbVar14[-0xb] ^ pbVar26[5];
              pbVar14[-10] = pbVar14[-10] ^ pbVar26[6];
              pbVar14[-9] = pbVar14[-9] ^ pbVar26[7];
              pbVar14[-8] = pbVar14[-8] ^ pbVar26[8];
              pbVar14[-7] = pbVar14[-7] ^ pbVar26[9];
              pbVar14[-6] = pbVar14[-6] ^ pbVar26[10];
              pbVar14[-5] = pbVar14[-5] ^ pbVar26[0xb];
              pbVar14[-4] = pbVar14[-4] ^ pbVar26[0xc];
              pbVar14[-3] = pbVar14[-3] ^ pbVar26[0xd];
              pbVar14[-2] = pbVar14[-2] ^ pbVar26[0xe];
              pbVar14[-1] = pbVar14[-1] ^ pbVar26[0xf];
              AES_encrypt(pbVar13,pbVar13,key);
              bVar9 = *pbVar13 ^ *pbVar16;
              *pbVar13 = bVar9;
              pbVar14[-0xf] = pbVar14[-0xf] ^ pbVar16[1];
              pbVar14[-0xe] = pbVar14[-0xe] ^ pbVar16[2];
              pbVar14[-0xd] = pbVar14[-0xd] ^ pbVar16[3];
              pbVar14[-0xc] = pbVar14[-0xc] ^ pbVar16[4];
              pbVar14[-0xb] = pbVar14[-0xb] ^ pbVar16[5];
              pbVar14[-10] = pbVar14[-10] ^ pbVar16[6];
              pbVar14[-9] = pbVar14[-9] ^ pbVar16[7];
              pbVar14[-8] = pbVar14[-8] ^ pbVar16[8];
              pbVar14[-7] = pbVar14[-7] ^ pbVar16[9];
              pbVar14[-6] = pbVar14[-6] ^ pbVar16[10];
              pbVar14[-5] = pbVar14[-5] ^ pbVar16[0xb];
              pbVar14[-4] = pbVar14[-4] ^ pbVar16[0xc];
              pbVar14[-3] = pbVar14[-3] ^ pbVar16[0xd];
              pbVar14[-2] = pbVar14[-2] ^ pbVar16[0xe];
              uStack_f0 = uStack_100;
              uStack_e8 = uStack_f8;
              pbVar14[-1] = pbVar14[-1] ^ pbVar16[0xf];
              pbVar26 = pbVar13;
              pbVar14 = pbVar13;
              pbVar16 = (byte *)&uStack_f0;
            } while ((byte *)pcVar18 != pbVar13);
          }
        }
        else {
          pbVar26 = (byte *)pcVar21 + extraout_RDX;
          pbVar14 = (byte *)pcVar18 + extraout_RDX;
          if (0xf < extraout_RDX) {
            bStack_12c = pbVar16[0x39];
            bStack_12b = pbVar16[0x37];
            bVar9 = pbVar16[0x31];
            bStack_129 = pbVar16[0x32];
            bStack_12d = pbVar16[0x3a];
            uVar10 = ~(extraout_RDX - 0x10) & 0xfffffffffffffff0;
            bVar7 = pbVar16[0x38];
            pbVar12 = pbVar26 + uVar10;
            bVar27 = pbVar16[0x30];
            bVar22 = pbVar16[0x33];
            bVar6 = pbVar16[0x35];
            bStack_140 = pbVar16[0x3b];
            bVar5 = pbVar16[0x34];
            bStack_12a = pbVar16[0x3f];
            bVar19 = pbVar16[0x36];
            bStack_148 = pbVar16[0x3c];
            bVar17 = pbVar16[0x3d];
            bVar8 = pbVar16[0x3e];
            pbVar13 = pbVar14;
            pbVar23 = pbVar16 + 0x20;
            do {
              uVar1 = *(undefined8 *)(pbVar26 + -0x10);
              uVar2 = *(undefined8 *)(pbVar26 + -8);
              out_00 = pbVar13 + -0x10;
              pbVar26 = pbVar26 + -0x10;
              uStack_100._0_2_ = CONCAT11(bVar9 ^ (byte)((ulong)uVar1 >> 8),bVar27 ^ (byte)uVar1);
              uStack_100._0_3_ =
                   CONCAT12((byte)((ulong)uVar1 >> 0x10) ^ bStack_129,(undefined2)uStack_100);
              uStack_100._0_5_ =
                   CONCAT14((byte)((ulong)uVar1 >> 0x20) ^ bVar5,
                            CONCAT13((byte)((ulong)uVar1 >> 0x18) ^ bVar22,(undefined3)uStack_100));
              uStack_100._0_6_ =
                   CONCAT15((byte)((ulong)uVar1 >> 0x28) ^ bVar6,(undefined5)uStack_100);
              uStack_100._0_7_ =
                   CONCAT16((byte)((ulong)uVar1 >> 0x30) ^ bVar19,(undefined6)uStack_100);
              uStack_100 = CONCAT17((byte)((ulong)uVar1 >> 0x38) ^ bStack_12b,(undefined7)uStack_100
                                   );
              uStack_f8._0_2_ = CONCAT11(bStack_12c ^ (byte)((ulong)uVar2 >> 8),bVar7 ^ (byte)uVar2)
              ;
              uStack_f8._0_3_ =
                   CONCAT12((byte)((ulong)uVar2 >> 0x10) ^ bStack_12d,(undefined2)uStack_f8);
              uStack_f8._0_4_ =
                   CONCAT13((byte)((ulong)uVar2 >> 0x18) ^ bStack_140,(undefined3)uStack_f8);
              uStack_f8._0_5_ =
                   CONCAT14((byte)((ulong)uVar2 >> 0x20) ^ bStack_148,(undefined4)uStack_f8);
              uStack_f8._0_6_ =
                   CONCAT15((byte)((ulong)uVar2 >> 0x28) ^ bVar17,(undefined5)uStack_f8);
              uStack_f8._0_7_ = CONCAT16((byte)((ulong)uVar2 >> 0x30) ^ bVar8,(undefined6)uStack_f8)
              ;
              uStack_f8 = CONCAT17((byte)((ulong)uVar2 >> 0x38) ^ bStack_12a,(undefined7)uStack_f8);
              AES_decrypt((uchar *)&uStack_100,out_00,key);
              bVar27 = *out_00 ^ *pbVar23;
              *out_00 = bVar27;
              bVar9 = pbVar13[-0xf] ^ pbVar23[1];
              pbVar13[-0xf] = bVar9;
              bStack_129 = pbVar13[-0xe] ^ pbVar23[2];
              pbVar13[-0xe] = bStack_129;
              bVar22 = pbVar13[-0xd] ^ pbVar23[3];
              pbVar13[-0xd] = bVar22;
              bVar5 = pbVar13[-0xc] ^ pbVar23[4];
              pbVar13[-0xc] = bVar5;
              bVar6 = pbVar13[-0xb] ^ pbVar23[5];
              pbVar13[-0xb] = bVar6;
              bVar19 = pbVar13[-10] ^ pbVar23[6];
              pbVar13[-10] = bVar19;
              bStack_12b = pbVar13[-9] ^ pbVar23[7];
              pbVar13[-9] = bStack_12b;
              bVar7 = pbVar13[-8] ^ pbVar23[8];
              pbVar13[-8] = bVar7;
              bStack_12c = pbVar13[-7] ^ pbVar23[9];
              pbVar13[-7] = bStack_12c;
              bStack_12d = pbVar13[-6] ^ pbVar23[10];
              pbVar13[-6] = bStack_12d;
              bStack_140 = pbVar13[-5] ^ pbVar23[0xb];
              pbVar13[-5] = bStack_140;
              bStack_148 = pbVar13[-4] ^ pbVar23[0xc];
              pbVar13[-4] = bStack_148;
              bVar17 = pbVar13[-3] ^ pbVar23[0xd];
              pbVar13[-3] = bVar17;
              bVar8 = pbVar13[-2] ^ pbVar23[0xe];
              pbVar13[-2] = bVar8;
              bStack_12a = pbVar13[-1] ^ pbVar23[0xf];
              pbVar13[-1] = bStack_12a;
              pbVar13 = out_00;
              pbVar23 = (byte *)&uStack_f0;
              uStack_f0 = uVar1;
              uStack_e8 = uVar2;
            } while (pbVar26 != pbVar12);
            bStack_148 = pbVar16[0x15];
            bStack_12a = pbVar16[0x13];
            bVar9 = pbVar16[0x11];
            bVar7 = pbVar16[0x14];
            bVar27 = pbVar16[0x10];
            bVar22 = pbVar16[0x12];
            bStack_140 = pbVar16[0x16];
            bVar6 = pbVar16[0x1a];
            bVar5 = pbVar16[0x1b];
            bVar19 = pbVar16[0x1c];
            bVar17 = pbVar16[0x1d];
            bVar8 = pbVar16[0x1f];
            bStack_12d = pbVar16[0x17];
            bStack_12c = pbVar16[0x18];
            bStack_12b = pbVar16[0x19];
            bVar20 = pbVar16[0x1e];
            pbVar26 = pbVar14 + uVar10;
            do {
              uVar1 = *(undefined8 *)pbVar26;
              uVar2 = *(undefined8 *)(pbVar26 + 8);
              uStack_100._0_2_ = CONCAT11(bVar9 ^ (byte)((ulong)uVar1 >> 8),bVar27 ^ (byte)uVar1);
              uStack_100._0_3_ =
                   CONCAT12((byte)((ulong)uVar1 >> 0x10) ^ bVar22,(undefined2)uStack_100);
              uStack_100._0_5_ =
                   CONCAT14((byte)((ulong)uVar1 >> 0x20) ^ bVar7,
                            CONCAT13((byte)((ulong)uVar1 >> 0x18) ^ bStack_12a,
                                     (undefined3)uStack_100));
              uStack_100._0_6_ =
                   CONCAT15((byte)((ulong)uVar1 >> 0x28) ^ bStack_148,(undefined5)uStack_100);
              uStack_100._0_7_ =
                   CONCAT16((byte)((ulong)uVar1 >> 0x30) ^ bStack_140,(undefined6)uStack_100);
              uStack_100 = CONCAT17((byte)((ulong)uVar1 >> 0x38) ^ bStack_12d,(undefined7)uStack_100
                                   );
              uStack_f8._0_2_ =
                   CONCAT11(bStack_12b ^ (byte)((ulong)uVar2 >> 8),bStack_12c ^ (byte)uVar2);
              uStack_f8._0_3_ = CONCAT12((byte)((ulong)uVar2 >> 0x10) ^ bVar6,(undefined2)uStack_f8)
              ;
              uStack_f8._0_4_ = CONCAT13((byte)((ulong)uVar2 >> 0x18) ^ bVar5,(undefined3)uStack_f8)
              ;
              uStack_f8._0_5_ =
                   CONCAT14((byte)((ulong)uVar2 >> 0x20) ^ bVar19,(undefined4)uStack_f8);
              uStack_f8._0_6_ =
                   CONCAT15((byte)((ulong)uVar2 >> 0x28) ^ bVar17,(undefined5)uStack_f8);
              uStack_f8._0_7_ =
                   CONCAT16((byte)((ulong)uVar2 >> 0x30) ^ bVar20,(undefined6)uStack_f8);
              uStack_f8 = CONCAT17((byte)((ulong)uVar2 >> 0x38) ^ bVar8,(undefined7)uStack_f8);
              AES_decrypt((uchar *)&uStack_100,pbVar26,key);
              bVar27 = *pbVar26 ^ *pbVar16;
              *pbVar26 = bVar27;
              bVar9 = pbVar26[1] ^ pbVar16[1];
              pbVar26[1] = bVar9;
              bVar22 = pbVar26[2] ^ pbVar16[2];
              pbVar26[2] = bVar22;
              bStack_12a = pbVar26[3] ^ pbVar16[3];
              pbVar13 = pbVar26 + 0x10;
              pbVar26[3] = bStack_12a;
              bVar7 = pbVar26[4] ^ pbVar16[4];
              pbVar26[4] = bVar7;
              bStack_148 = pbVar26[5] ^ pbVar16[5];
              pbVar26[5] = bStack_148;
              bStack_140 = pbVar26[6] ^ pbVar16[6];
              pbVar26[6] = bStack_140;
              bStack_12d = pbVar26[7] ^ pbVar16[7];
              pbVar26[7] = bStack_12d;
              bStack_12c = pbVar26[8] ^ pbVar16[8];
              pbVar26[8] = bStack_12c;
              bStack_12b = pbVar26[9] ^ pbVar16[9];
              pbVar26[9] = bStack_12b;
              bVar6 = pbVar26[10] ^ pbVar16[10];
              pbVar26[10] = bVar6;
              bVar5 = pbVar26[0xb] ^ pbVar16[0xb];
              pbVar26[0xb] = bVar5;
              bVar19 = pbVar26[0xc] ^ pbVar16[0xc];
              pbVar26[0xc] = bVar19;
              bVar17 = pbVar26[0xd] ^ pbVar16[0xd];
              pbVar26[0xd] = bVar17;
              bVar20 = pbVar26[0xe] ^ pbVar16[0xe];
              pbVar26[0xe] = bVar20;
              bVar8 = pbVar26[0xf] ^ pbVar16[0xf];
              pbVar26[0xf] = bVar8;
              pbVar26 = pbVar13;
              pbVar16 = (byte *)&uStack_f0;
              uStack_f0 = uVar1;
              uStack_e8 = uVar2;
            } while (pbVar14 != pbVar13);
          }
        }
        if (lStack_d8 == *(long *)(in_FS_OFFSET + 0x28)) {
          return;
        }
        goto LAB_00100d0e;
      }
      OPENSSL_die("assertion failed: (length % AES_BLOCK_SIZE) == 0","crypto/aes/aes_ige.c",0xca);
    }
    OPENSSL_die("assertion failed: (AES_ENCRYPT == enc) || (AES_DECRYPT == enc)",
                "crypto/aes/aes_ige.c",0xc9);
  }
  OPENSSL_die("assertion failed: in && out && key && ivec","crypto/aes/aes_ige.c",200);
LAB_00100d0e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void AES_bi_ige_encrypt(uchar *in,uchar *out,size_t length,AES_KEY *key,AES_KEY *key2,uchar *ivec,
                       int enc)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte *pbVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  uchar *puVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  ulong uVar17;
  uchar *puVar18;
  byte bVar19;
  long in_FS_OFFSET;
  byte local_b0;
  byte local_a8;
  byte local_95;
  byte local_94;
  byte local_93;
  byte local_92;
  byte local_91;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((((in != (uchar *)0x0) && (out != (uchar *)0x0)) && (key != (AES_KEY *)0x0)) &&
     (ivec != (uchar *)0x0)) {
    if ((uint)enc < 2) {
      if ((length & 0xf) == 0) {
        if (enc == 1) {
          if (0xf < length) {
            bVar8 = *ivec;
            pbVar3 = ivec;
            pbVar12 = ivec + 0x10;
            pbVar11 = out;
            do {
              *pbVar11 = bVar8 ^ *in;
              pbVar11[1] = in[1] ^ pbVar3[1];
              pbVar11[2] = in[2] ^ pbVar3[2];
              pbVar11[3] = in[3] ^ pbVar3[3];
              pbVar11[4] = in[4] ^ pbVar3[4];
              pbVar11[5] = in[5] ^ pbVar3[5];
              pbVar11[6] = in[6] ^ pbVar3[6];
              pbVar11[7] = in[7] ^ pbVar3[7];
              pbVar11[8] = in[8] ^ pbVar3[8];
              pbVar11[9] = in[9] ^ pbVar3[9];
              pbVar11[10] = in[10] ^ pbVar3[10];
              pbVar11[0xb] = in[0xb] ^ pbVar3[0xb];
              pbVar11[0xc] = in[0xc] ^ pbVar3[0xc];
              pbVar11[0xd] = in[0xd] ^ pbVar3[0xd];
              pbVar11[0xe] = in[0xe] ^ pbVar3[0xe];
              pbVar11[0xf] = in[0xf] ^ pbVar3[0xf];
              AES_encrypt(pbVar11,pbVar11,key);
              bVar8 = *pbVar11 ^ *pbVar12;
              pbVar10 = pbVar11 + 0x10;
              *pbVar11 = bVar8;
              pbVar11[1] = pbVar11[1] ^ pbVar12[1];
              pbVar11[2] = pbVar11[2] ^ pbVar12[2];
              pbVar11[3] = pbVar11[3] ^ pbVar12[3];
              pbVar11[4] = pbVar11[4] ^ pbVar12[4];
              pbVar11[5] = pbVar11[5] ^ pbVar12[5];
              pbVar11[6] = pbVar11[6] ^ pbVar12[6];
              pbVar11[7] = pbVar11[7] ^ pbVar12[7];
              pbVar11[8] = pbVar11[8] ^ pbVar12[8];
              pbVar11[9] = pbVar11[9] ^ pbVar12[9];
              pbVar11[10] = pbVar11[10] ^ pbVar12[10];
              pbVar11[0xb] = pbVar11[0xb] ^ pbVar12[0xb];
              pbVar11[0xc] = pbVar11[0xc] ^ pbVar12[0xc];
              pbVar11[0xd] = pbVar11[0xd] ^ pbVar12[0xd];
              pbVar11[0xe] = pbVar11[0xe] ^ pbVar12[0xe];
              pbVar11[0xf] = pbVar11[0xf] ^ pbVar12[0xf];
              local_58 = *(undefined8 *)in;
              uStack_50 = *(undefined8 *)(in + 8);
              in = in + 0x10;
              pbVar3 = pbVar11;
              pbVar12 = (byte *)&local_58;
              pbVar11 = pbVar10;
            } while (pbVar10 != out + (length - 0x10 & 0xfffffffffffffff0) + 0x10);
            bVar8 = ivec[0x20];
            pbVar3 = ivec + 0x20;
            pbVar12 = out + (length - 0x10 & 0xfffffffffffffff0) + 0x10;
            pbVar11 = ivec + 0x30;
            do {
              local_68 = *(undefined8 *)(pbVar12 + -0x10);
              uStack_60 = *(undefined8 *)(pbVar12 + -8);
              pbVar10 = pbVar12 + -0x10;
              *pbVar10 = *pbVar10 ^ bVar8;
              pbVar12[-0xf] = pbVar12[-0xf] ^ pbVar3[1];
              pbVar12[-0xe] = pbVar12[-0xe] ^ pbVar3[2];
              pbVar12[-0xd] = pbVar12[-0xd] ^ pbVar3[3];
              pbVar12[-0xc] = pbVar12[-0xc] ^ pbVar3[4];
              pbVar12[-0xb] = pbVar12[-0xb] ^ pbVar3[5];
              pbVar12[-10] = pbVar12[-10] ^ pbVar3[6];
              pbVar12[-9] = pbVar12[-9] ^ pbVar3[7];
              pbVar12[-8] = pbVar12[-8] ^ pbVar3[8];
              pbVar12[-7] = pbVar12[-7] ^ pbVar3[9];
              pbVar12[-6] = pbVar12[-6] ^ pbVar3[10];
              pbVar12[-5] = pbVar12[-5] ^ pbVar3[0xb];
              pbVar12[-4] = pbVar12[-4] ^ pbVar3[0xc];
              pbVar12[-3] = pbVar12[-3] ^ pbVar3[0xd];
              pbVar12[-2] = pbVar12[-2] ^ pbVar3[0xe];
              pbVar12[-1] = pbVar12[-1] ^ pbVar3[0xf];
              AES_encrypt(pbVar10,pbVar10,key);
              bVar8 = *pbVar10 ^ *pbVar11;
              *pbVar10 = bVar8;
              pbVar12[-0xf] = pbVar12[-0xf] ^ pbVar11[1];
              pbVar12[-0xe] = pbVar12[-0xe] ^ pbVar11[2];
              pbVar12[-0xd] = pbVar12[-0xd] ^ pbVar11[3];
              pbVar12[-0xc] = pbVar12[-0xc] ^ pbVar11[4];
              pbVar12[-0xb] = pbVar12[-0xb] ^ pbVar11[5];
              pbVar12[-10] = pbVar12[-10] ^ pbVar11[6];
              pbVar12[-9] = pbVar12[-9] ^ pbVar11[7];
              pbVar12[-8] = pbVar12[-8] ^ pbVar11[8];
              pbVar12[-7] = pbVar12[-7] ^ pbVar11[9];
              pbVar12[-6] = pbVar12[-6] ^ pbVar11[10];
              pbVar12[-5] = pbVar12[-5] ^ pbVar11[0xb];
              pbVar12[-4] = pbVar12[-4] ^ pbVar11[0xc];
              pbVar12[-3] = pbVar12[-3] ^ pbVar11[0xd];
              pbVar12[-2] = pbVar12[-2] ^ pbVar11[0xe];
              local_58 = local_68;
              uStack_50 = uStack_60;
              pbVar12[-1] = pbVar12[-1] ^ pbVar11[0xf];
              pbVar3 = pbVar10;
              pbVar12 = pbVar10;
              pbVar11 = (byte *)&local_58;
            } while (out != pbVar10);
          }
        }
        else {
          puVar18 = in + length;
          pbVar3 = out + length;
          if (0xf < length) {
            local_94 = ivec[0x39];
            local_93 = ivec[0x37];
            bVar8 = ivec[0x31];
            local_91 = ivec[0x32];
            local_95 = ivec[0x3a];
            uVar17 = ~(length - 0x10) & 0xfffffffffffffff0;
            bVar6 = ivec[0x38];
            puVar9 = puVar18 + uVar17;
            bVar19 = ivec[0x30];
            bVar16 = ivec[0x33];
            bVar5 = ivec[0x35];
            local_a8 = ivec[0x3b];
            bVar4 = ivec[0x34];
            local_92 = ivec[0x3f];
            bVar14 = ivec[0x36];
            local_b0 = ivec[0x3c];
            bVar13 = ivec[0x3d];
            bVar7 = ivec[0x3e];
            pbVar12 = pbVar3;
            pbVar11 = ivec + 0x20;
            do {
              uVar1 = *(undefined8 *)(puVar18 + -0x10);
              uVar2 = *(undefined8 *)(puVar18 + -8);
              pbVar10 = pbVar12 + -0x10;
              puVar18 = puVar18 + -0x10;
              local_68._0_2_ = CONCAT11(bVar8 ^ (byte)((ulong)uVar1 >> 8),bVar19 ^ (byte)uVar1);
              local_68._0_3_ =
                   CONCAT12((byte)((ulong)uVar1 >> 0x10) ^ local_91,(undefined2)local_68);
              local_68._0_5_ =
                   CONCAT14((byte)((ulong)uVar1 >> 0x20) ^ bVar4,
                            CONCAT13((byte)((ulong)uVar1 >> 0x18) ^ bVar16,(undefined3)local_68));
              local_68._0_6_ = CONCAT15((byte)((ulong)uVar1 >> 0x28) ^ bVar5,(undefined5)local_68);
              local_68._0_7_ = CONCAT16((byte)((ulong)uVar1 >> 0x30) ^ bVar14,(undefined6)local_68);
              local_68 = CONCAT17((byte)((ulong)uVar1 >> 0x38) ^ local_93,(undefined7)local_68);
              uStack_60._0_2_ = CONCAT11(local_94 ^ (byte)((ulong)uVar2 >> 8),bVar6 ^ (byte)uVar2);
              uStack_60._0_3_ =
                   CONCAT12((byte)((ulong)uVar2 >> 0x10) ^ local_95,(undefined2)uStack_60);
              uStack_60._0_4_ =
                   CONCAT13((byte)((ulong)uVar2 >> 0x18) ^ local_a8,(undefined3)uStack_60);
              uStack_60._0_5_ =
                   CONCAT14((byte)((ulong)uVar2 >> 0x20) ^ local_b0,(undefined4)uStack_60);
              uStack_60._0_6_ =
                   CONCAT15((byte)((ulong)uVar2 >> 0x28) ^ bVar13,(undefined5)uStack_60);
              uStack_60._0_7_ = CONCAT16((byte)((ulong)uVar2 >> 0x30) ^ bVar7,(undefined6)uStack_60)
              ;
              uStack_60 = CONCAT17((byte)((ulong)uVar2 >> 0x38) ^ local_92,(undefined7)uStack_60);
              AES_decrypt((uchar *)&local_68,pbVar10,key);
              bVar19 = *pbVar10 ^ *pbVar11;
              *pbVar10 = bVar19;
              bVar8 = pbVar12[-0xf] ^ pbVar11[1];
              pbVar12[-0xf] = bVar8;
              local_91 = pbVar12[-0xe] ^ pbVar11[2];
              pbVar12[-0xe] = local_91;
              bVar16 = pbVar12[-0xd] ^ pbVar11[3];
              pbVar12[-0xd] = bVar16;
              bVar4 = pbVar12[-0xc] ^ pbVar11[4];
              pbVar12[-0xc] = bVar4;
              bVar5 = pbVar12[-0xb] ^ pbVar11[5];
              pbVar12[-0xb] = bVar5;
              bVar14 = pbVar12[-10] ^ pbVar11[6];
              pbVar12[-10] = bVar14;
              local_93 = pbVar12[-9] ^ pbVar11[7];
              pbVar12[-9] = local_93;
              bVar6 = pbVar12[-8] ^ pbVar11[8];
              pbVar12[-8] = bVar6;
              local_94 = pbVar12[-7] ^ pbVar11[9];
              pbVar12[-7] = local_94;
              local_95 = pbVar12[-6] ^ pbVar11[10];
              pbVar12[-6] = local_95;
              local_a8 = pbVar12[-5] ^ pbVar11[0xb];
              pbVar12[-5] = local_a8;
              local_b0 = pbVar12[-4] ^ pbVar11[0xc];
              pbVar12[-4] = local_b0;
              bVar13 = pbVar12[-3] ^ pbVar11[0xd];
              pbVar12[-3] = bVar13;
              bVar7 = pbVar12[-2] ^ pbVar11[0xe];
              pbVar12[-2] = bVar7;
              local_92 = pbVar12[-1] ^ pbVar11[0xf];
              pbVar12[-1] = local_92;
              pbVar12 = pbVar10;
              pbVar11 = (byte *)&local_58;
              local_58 = uVar1;
              uStack_50 = uVar2;
            } while (puVar18 != puVar9);
            local_b0 = ivec[0x15];
            local_92 = ivec[0x13];
            bVar8 = ivec[0x11];
            bVar6 = ivec[0x14];
            bVar19 = ivec[0x10];
            bVar16 = ivec[0x12];
            local_a8 = ivec[0x16];
            bVar5 = ivec[0x1a];
            bVar4 = ivec[0x1b];
            bVar14 = ivec[0x1c];
            bVar13 = ivec[0x1d];
            bVar7 = ivec[0x1f];
            local_95 = ivec[0x17];
            local_94 = ivec[0x18];
            local_93 = ivec[0x19];
            bVar15 = ivec[0x1e];
            pbVar12 = pbVar3 + uVar17;
            do {
              uVar1 = *(undefined8 *)pbVar12;
              uVar2 = *(undefined8 *)(pbVar12 + 8);
              local_68._0_2_ = CONCAT11(bVar8 ^ (byte)((ulong)uVar1 >> 8),bVar19 ^ (byte)uVar1);
              local_68._0_3_ = CONCAT12((byte)((ulong)uVar1 >> 0x10) ^ bVar16,(undefined2)local_68);
              local_68._0_5_ =
                   CONCAT14((byte)((ulong)uVar1 >> 0x20) ^ bVar6,
                            CONCAT13((byte)((ulong)uVar1 >> 0x18) ^ local_92,(undefined3)local_68));
              local_68._0_6_ =
                   CONCAT15((byte)((ulong)uVar1 >> 0x28) ^ local_b0,(undefined5)local_68);
              local_68._0_7_ =
                   CONCAT16((byte)((ulong)uVar1 >> 0x30) ^ local_a8,(undefined6)local_68);
              local_68 = CONCAT17((byte)((ulong)uVar1 >> 0x38) ^ local_95,(undefined7)local_68);
              uStack_60._0_2_ =
                   CONCAT11(local_93 ^ (byte)((ulong)uVar2 >> 8),local_94 ^ (byte)uVar2);
              uStack_60._0_3_ = CONCAT12((byte)((ulong)uVar2 >> 0x10) ^ bVar5,(undefined2)uStack_60)
              ;
              uStack_60._0_4_ = CONCAT13((byte)((ulong)uVar2 >> 0x18) ^ bVar4,(undefined3)uStack_60)
              ;
              uStack_60._0_5_ =
                   CONCAT14((byte)((ulong)uVar2 >> 0x20) ^ bVar14,(undefined4)uStack_60);
              uStack_60._0_6_ =
                   CONCAT15((byte)((ulong)uVar2 >> 0x28) ^ bVar13,(undefined5)uStack_60);
              uStack_60._0_7_ =
                   CONCAT16((byte)((ulong)uVar2 >> 0x30) ^ bVar15,(undefined6)uStack_60);
              uStack_60 = CONCAT17((byte)((ulong)uVar2 >> 0x38) ^ bVar7,(undefined7)uStack_60);
              AES_decrypt((uchar *)&local_68,pbVar12,key);
              bVar19 = *pbVar12 ^ *ivec;
              *pbVar12 = bVar19;
              bVar8 = pbVar12[1] ^ ivec[1];
              pbVar12[1] = bVar8;
              bVar16 = pbVar12[2] ^ ivec[2];
              pbVar12[2] = bVar16;
              local_92 = pbVar12[3] ^ ivec[3];
              pbVar11 = pbVar12 + 0x10;
              pbVar12[3] = local_92;
              bVar6 = pbVar12[4] ^ ivec[4];
              pbVar12[4] = bVar6;
              local_b0 = pbVar12[5] ^ ivec[5];
              pbVar12[5] = local_b0;
              local_a8 = pbVar12[6] ^ ivec[6];
              pbVar12[6] = local_a8;
              local_95 = pbVar12[7] ^ ivec[7];
              pbVar12[7] = local_95;
              local_94 = pbVar12[8] ^ ivec[8];
              pbVar12[8] = local_94;
              local_93 = pbVar12[9] ^ ivec[9];
              pbVar12[9] = local_93;
              bVar5 = pbVar12[10] ^ ivec[10];
              pbVar12[10] = bVar5;
              bVar4 = pbVar12[0xb] ^ ivec[0xb];
              pbVar12[0xb] = bVar4;
              bVar14 = pbVar12[0xc] ^ ivec[0xc];
              pbVar12[0xc] = bVar14;
              bVar13 = pbVar12[0xd] ^ ivec[0xd];
              pbVar12[0xd] = bVar13;
              bVar15 = pbVar12[0xe] ^ ivec[0xe];
              pbVar12[0xe] = bVar15;
              bVar7 = pbVar12[0xf] ^ ivec[0xf];
              pbVar12[0xf] = bVar7;
              pbVar12 = pbVar11;
              ivec = (uchar *)&local_58;
              local_58 = uVar1;
              uStack_50 = uVar2;
            } while (pbVar3 != pbVar11);
          }
        }
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          return;
        }
        goto LAB_00100d0e;
      }
      OPENSSL_die("assertion failed: (length % AES_BLOCK_SIZE) == 0","crypto/aes/aes_ige.c",0xca);
    }
    OPENSSL_die("assertion failed: (AES_ENCRYPT == enc) || (AES_DECRYPT == enc)",
                "crypto/aes/aes_ige.c",0xc9);
  }
  OPENSSL_die("assertion failed: in && out && key && ivec","crypto/aes/aes_ige.c",200);
LAB_00100d0e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


